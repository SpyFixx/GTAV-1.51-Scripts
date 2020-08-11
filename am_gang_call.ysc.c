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
	bool bLocal_20 = false;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	struct<55> Local_63 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_118 = 0;
	struct<5> Local_119[32];
	bool bLocal_280 = false;
	int iLocal_281[3] = { 0, 0, 0 };
	bool bLocal_285 = false;
	bool bLocal_286 = false;
	bool bLocal_287 = false;
	bool bLocal_288 = false;
	int iLocal_289 = 0;
	vector3 vLocal_290 = { 0f, 0f, 0f };
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	bool bLocal_295 = false;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 16;
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
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_488 = false;
	int iLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	bLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	bLocal_286 = -1;
	iLocal_289 = -1;
	if (UNK_0x8CD06866876216F2())
	{
		func_554(ScriptParam_0);
	}
	while (true)
	{
		func_553();
		if (func_543())
		{
			func_540();
		}
		iLocal_293 = UNK_0x2B6E0A53779D29EA();
		func_531();
		func_528();
		func_523();
		func_522();
		switch (func_521(UNK_0x6E61BE9E61434AC1()))
		{
			case 0:
				if (func_520() == 1)
				{
					Local_119[UNK_0x6E61BE9E61434AC1() /*5*/] = 1;
				}
				else if (func_520() == 4)
				{
					Local_119[UNK_0x6E61BE9E61434AC1() /*5*/] = 3;
				}
				break;
			case 1:
				if (func_520() == 1)
				{
					func_514();
				}
				else if (func_520() == 0)
				{
					func_508();
					Local_119[UNK_0x6E61BE9E61434AC1() /*5*/] = 0;
				}
				else if (func_520() == 4)
				{
					Local_119[UNK_0x6E61BE9E61434AC1() /*5*/] = 3;
				}
				break;
			case 3:
				func_483();
				func_481(&(Local_63.f_54));
				if (func_480(&(Local_63.f_54)))
				{
					iVar0 = 0;
					while (iVar0 < func_479(bLocal_286))
					{
						func_483();
						iVar0++;
					}
					Local_119[UNK_0x6E61BE9E61434AC1() /*5*/] = 4;
				}
				break;
			case 2:
				Local_119[UNK_0x6E61BE9E61434AC1() /*5*/] = 4;
			case 4:
				func_260();
				break;
		}
		if (UNK_0xBFF81ED3B99522C7())
		{
			func_258();
			func_257();
			func_256();
			switch (func_520())
			{
				case 0:
					func_255();
					if (func_251())
					{
						if (!UNK_0x437347B10A200C4B(UNK_0x9539D44F3E4492F6(bLocal_288), 0))
						{
							func_249(UNK_0x9539D44F3E4492F6(bLocal_288));
						}
						else
						{
							Local_63.f_36 = { vLocal_290 };
						}
						UNK_0x0674E58A79778E99(&(Local_63.f_2), 6);
						Local_63 = 1;
					}
					break;
				case 1:
					if (func_65())
					{
						func_64();
						func_63();
					}
					func_45();
					break;
				case 4:
					break;
			}
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;

	if (func_520() < 4)
	{
		if (func_22())
		{
			iLocal_294 = 0;
			iVar0 = 0;
			while (iVar0 <= (func_479(bLocal_286) - 1))
			{
				func_2();
				iVar0++;
			}
			Local_63 = 4;
		}
	}
}

void func_2()
{
	var uVar0;
	struct<14> Var1;

	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iLocal_294 /*7*/].f_2, true) || UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iLocal_294 /*7*/].f_2, 6))
	{
		if (UNK_0xE9F78D191AD5EDBA(Local_63.f_10[iLocal_294 /*7*/]))
		{
			if (UNK_0xC844350D5D58C99A(UNK_0x1B50683925F00106(Local_63.f_10[iLocal_294 /*7*/])))
			{
				if (UNK_0x437347B10A200C4B(UNK_0x1B50683925F00106(Local_63.f_10[iLocal_294 /*7*/]), 0))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iLocal_294 /*7*/].f_2, 6))
					{
						if (bLocal_286 == 0)
						{
							Local_63.f_48++;
							if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 12))
							{
								if (UNK_0x39DDAA68EF6A6BF4(Local_63.f_10[iLocal_294 /*7*/], &uVar0) == bLocal_288)
								{
									UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 12);
								}
							}
							if ((Local_63.f_42 == iLocal_294 && !UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 5)) || Local_63.f_48 == func_479(bLocal_286))
							{
								Var1.f_2 = -764618726;
								Var1.f_10 = bLocal_288;
								Var1.f_11 = bLocal_287;
								if (func_479(bLocal_286) > 1)
								{
									Var1.f_12 = UNK_0x117658E336116132(true);
								}
								else
								{
									Var1.f_12 = UNK_0x117658E336116132(false);
								}
								Var1.f_3 = Local_63.f_43;
								func_20(Var1, func_21(1));
								if (Local_63.f_42 == iLocal_294)
								{
									UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 5);
								}
							}
							else if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 5))
							{
								Var1.f_2 = -774247272;
								Var1.f_11 = bLocal_287;
								func_20(Var1, func_21(1));
							}
						}
						UNK_0x5D96D8530B3D0904(&(Local_63.f_10[iLocal_294 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iLocal_294 /*7*/].f_2, 5))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_280, 2);
					}
					UNK_0x5D96D8530B3D0904(&bLocal_280, true);
				}
			}
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&bLocal_280, true);
		UNK_0x5D96D8530B3D0904(&bLocal_280, 2);
	}
	func_3(iLocal_294);
	iLocal_294++;
	if (iLocal_294 >= func_479(bLocal_286))
	{
		iLocal_294 = 0;
		if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, false))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_280, true))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, true))
				{
					UNK_0x5D96D8530B3D0904(&(Local_63.f_1), true);
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_280, 2))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 9))
				{
					UNK_0x5D96D8530B3D0904(&(Local_63.f_1), 9);
				}
			}
		}
		UNK_0x0674E58A79778E99(&bLocal_280, true);
		UNK_0x0674E58A79778E99(&bLocal_280, 2);
	}
}

void func_3(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (UNK_0xBFF81ED3B99522C7())
	{
		if (UNK_0xE9F78D191AD5EDBA(Local_63.f_10[iParam0 /*7*/]))
		{
			bVar0 = UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]);
			if (!UNK_0x437347B10A200C4B(bVar0, 0))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 9))
				{
					bVar2 = false;
					switch (Local_63.f_10[iParam0 /*7*/].f_1)
					{
						case 0:
							if (func_19(bVar0, 3))
							{
								bVar2 = true;
							}
							break;
					}
					if (bVar2)
					{
						UNK_0x5D96D8530B3D0904(&(Local_63.f_10[iParam0 /*7*/].f_2), 9);
					}
				}
				switch (Local_63.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					case 1:
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 7))
							{
								if ((((UNK_0x1C97A5F82B15E49A(bVar0) == 2 || (Global_2425662[bLocal_288 /*421*/].f_236 != -1 && func_18(Global_2425662[bLocal_288 /*421*/].f_236) == 4)) || Global_1590535[bLocal_288 /*876*/].f_748) || func_16(bLocal_288, 0)) || func_9(bLocal_288))
								{
									Local_63.f_10[iParam0 /*7*/].f_3 = iLocal_293;
									UNK_0x5D96D8530B3D0904(&(Local_63.f_10[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((((UNK_0x1C97A5F82B15E49A(bVar0) != 2 && Global_2425662[bLocal_288 /*421*/].f_236 == -1) && !Global_1590535[bLocal_288 /*876*/].f_748) && !func_16(bLocal_288, 0)) && !func_9(bLocal_288))
							{
								UNK_0x0674E58A79778E99(&(Local_63.f_10[iParam0 /*7*/].f_2), 7);
							}
							else if (UNK_0x519D13E6C1911A0B(iLocal_293, Local_63.f_10[iParam0 /*7*/].f_3) > 10000 || UNK_0x1C97A5F82B15E49A(bVar0) != 2)
							{
								if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 10))
								{
									UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 10);
									Local_63.f_39 = { func_8(bLocal_288) };
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < func_479(bLocal_286))
									{
										func_7(iVar1, 3);
										iVar1++;
									}
								}
							}
							if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 3))
								{
									if (UNK_0x504A57ECC0B1E81C(bVar0) == 3f && !UNK_0x24129324CD7C13D0(bVar0, 118, 1))
									{
										UNK_0x5D96D8530B3D0904(&(Local_63.f_10[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, true))
						{
							UNK_0x5D96D8530B3D0904(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(bLocal_288, 1, 1))
						{
							if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(UNK_0x68F4C0EC296D3901(bVar0, true), UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bLocal_288), true), 25f) || !func_5(UNK_0x68F4C0EC296D3901(bVar0, true), UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bLocal_288), true), 625f))
								{
									UNK_0x5D96D8530B3D0904(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(UNK_0x68F4C0EC296D3901(bVar0, true), UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bLocal_288), true)) || (UNK_0xE64AC821059A938D(bVar0) && UNK_0x66532B38746E912A(bVar0) == UNK_0x9539D44F3E4492F6(bLocal_288)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					case 2:
						if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, true))
						{
							UNK_0x5D96D8530B3D0904(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(bLocal_288, 1, 1))
						{
							if (!func_4(UNK_0x68F4C0EC296D3901(bVar0, true), UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bLocal_288), true)) && !(UNK_0xE64AC821059A938D(bVar0) && UNK_0x66532B38746E912A(bVar0) == UNK_0x9539D44F3E4492F6(bLocal_288)))
							{
								func_7(iParam0, 1);
							}
						}
						break;
					case 3:
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 4))
							{
								if (UNK_0x24129324CD7C13D0(bVar0, 118, 1))
								{
									UNK_0x5D96D8530B3D0904(&(Local_63.f_10[iParam0 /*7*/].f_2), 4);
								}
							}
						}
						break;
					case 4:
						break;
				}
			}
		}
	}
}

bool func_4(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (UNK_0x755FF954DAE327E1((vParam3.z - vParam0.z)) < 2f)
	{
		vVar0.x = vParam0.x;
		vVar0.f_1 = vParam0.y;
		vVar3.x = vParam3.x;
		vVar3.f_1 = vParam3.y;
		if (func_5(vVar0, vVar3, 2f))
		{
			return true;
		}
	}
	return false;
}

bool func_5(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (SYSTEM::VDIST2(vParam0, vParam3) < fParam6)
	{
		return true;
	}
	return false;
}

bool func_6(bool bParam0, bool bParam1, bool bParam2)
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

void func_7(int iParam0, int iParam1)
{
	Local_63.f_10[iParam0 /*7*/].f_5 = iParam1;
}

Vector3 func_8(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

int func_9(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	if (UNK_0x40B8C182D63932FC(bParam0))
	{
		if (func_14(bParam0, 1))
		{
			bVar0 = UNK_0x9539D44F3E4492F6(bParam0);
			bVar1 = func_11(bParam0);
			if (UNK_0xC844350D5D58C99A(bVar1))
			{
				if (UNK_0xDF1306B443CD3D15(bVar1, 0))
				{
					if (UNK_0xC42A92762C58E1B9(bVar0, bVar1, 0))
					{
						return func_10(bVar1);
					}
				}
			}
		}
	}
	return 0;
}

int func_10(bool bParam0)
{
	bool bVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (UNK_0xF1D385D359D58F72("MPBitset", 3) && UNK_0x30F813723591D02E(bParam0, "MPBitset"))
		{
			bVar0 = UNK_0x1E2DFB0EF4BB4566(bParam0, "MPBitset");
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11(bool bParam0)
{
	if (func_14(bParam0, 1))
	{
		return Global_2537071.f_5124.f_222[func_12(bParam0)];
	}
	return 0;
}

bool func_12(bool bParam0)
{
	if (bParam0 != func_13())
	{
		return Global_1628237[bParam0 /*615*/].f_11;
	}
	return func_13();
}

bool func_13()
{
	return -1;
}

bool func_14(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_15(bParam0))
		{
			return false;
		}
	}
	return Global_1628237[bParam0 /*615*/].f_11 != func_13();
}

bool func_15(bool bParam0)
{
	if (bParam0 != func_13())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_13())
		{
			return Global_1628237[bParam0 /*615*/].f_11 == bParam0;
		}
	}
	return false;
}

bool func_16(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_6(bParam0, 1, 1))
	{
		bVar0 = UNK_0x9539D44F3E4492F6(bParam0);
		if (UNK_0x405E212DDE472467(bVar0, iParam1))
		{
			if (func_17(UNK_0x6937EA2286828455(bVar0, iParam1), 1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_17(bool bParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (UNK_0xC844350D5D58C99A(bParam0) && (!bParam1 || UNK_0xDF1306B443CD3D15(bParam0, 0)))
		{
			if (UNK_0x30F813723591D02E(bParam0, "Player_Vehicle"))
			{
				return true;
			}
		}
	}
	return false;
}

int func_18(int iParam0)
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

bool func_19(bool bParam0, bool bParam1)
{
	if (UNK_0xF1D385D359D58F72("AttributeDamage", 3))
	{
		if (UNK_0x30F813723591D02E(bParam0, "AttributeDamage"))
		{
			if (UNK_0xEAE0D21A50E6C7F4(UNK_0x1E2DFB0EF4BB4566(bParam0, "AttributeDamage"), bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_20(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = UNK_0xD803B885F5E47A62();
	if (!bParam14 == 0)
	{
		UNK_0xFB061A86A7AC749F(1, &Param0, 14, bParam14);
	}
}

bool func_21(bool bParam0)
{
	var uVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	while (bVar1 < UNK_0x54EABC0DD106045B())
	{
		if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bVar1)))
		{
			bVar2 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(bVar1));
			if (func_6(bVar2, 0, 0))
			{
				if (bVar2 != UNK_0xD803B885F5E47A62() || bParam0)
				{
					UNK_0x5D96D8530B3D0904(&uVar0, bVar2);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_22()
{
	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, false))
	{
		if (bLocal_286 == 1)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 4))
			{
				UNK_0x5D96D8530B3D0904(&(Local_63.f_3), 11);
				return true;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, true))
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_3), false);
			return true;
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 2))
	{
		UNK_0x5D96D8530B3D0904(&(Local_63.f_3), true);
		UNK_0x5D96D8530B3D0904(&Global_1653535, bLocal_286);
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_3, 12))
	{
		return true;
	}
	if (bLocal_286 == 0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 2))
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_3), 2);
			return true;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 8))
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_3), 8);
			return true;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 5))
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_3), 3);
			return true;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 9))
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_3), 9);
			return true;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 15))
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_3), 10);
			return true;
		}
	}
	if (!func_6(bLocal_288, 0, 1))
	{
		if (bLocal_286 != 0 || !UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, true))
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_3), 4);
			return true;
		}
	}
	else
	{
		if (func_43(bLocal_288, 129))
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 13);
			UNK_0x5D96D8530B3D0904(&(Local_63.f_3), 8);
			return true;
		}
		if (func_43(bLocal_288, 131) || UNK_0xEAE0D21A50E6C7F4(Global_1628237[bLocal_288 /*615*/].f_1, 11))
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 13);
			UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return true;
		}
		if (func_43(bLocal_288, 136) || (func_42(UNK_0xD803B885F5E47A62(), 24) && func_41(bLocal_288)))
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return true;
		}
		if (func_43(bLocal_288, 146))
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return true;
		}
		if (func_40(UNK_0xD803B885F5E47A62()) && ((func_39(UNK_0xD803B885F5E47A62()) == 148 || func_39(UNK_0xD803B885F5E47A62()) == 142) || func_39(UNK_0xD803B885F5E47A62()) == 164))
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return true;
		}
		if (func_39(UNK_0xD803B885F5E47A62()) == 153)
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return true;
		}
		if (func_37(UNK_0xD803B885F5E47A62()) && func_39(UNK_0xD803B885F5E47A62()) == 170)
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return true;
		}
		if (func_39(UNK_0xD803B885F5E47A62()) == 167)
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return true;
		}
		if (func_39(UNK_0xD803B885F5E47A62()) == 168)
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return true;
		}
		if (func_37(UNK_0xD803B885F5E47A62()) && func_39(UNK_0xD803B885F5E47A62()) == 238)
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return true;
		}
		if (func_37(UNK_0xD803B885F5E47A62()) && func_39(UNK_0xD803B885F5E47A62()) == 249)
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return true;
		}
		switch (func_34(UNK_0xD803B885F5E47A62()))
		{
			case 6:
			case 7:
				if (func_33())
				{
					UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
					return true;
				}
				break;
		}
		if (func_32(bLocal_288))
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return true;
		}
		if (func_31(bLocal_288))
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return true;
		}
		if (UNK_0x437347B10A200C4B(UNK_0x9539D44F3E4492F6(bLocal_288), 0))
		{
			if (bLocal_286 == 1)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, false))
				{
					UNK_0x5D96D8530B3D0904(&(Local_63.f_3), 6);
					return true;
				}
			}
		}
		else
		{
			if (bLocal_286 == 1)
			{
				if (func_43(bLocal_288, 146))
				{
					UNK_0x5D96D8530B3D0904(&(Local_63.f_3), 7);
					return true;
				}
				if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 16))
				{
					if (UNK_0x519D13E6C1911A0B(iLocal_293, Local_63.f_9) > func_30())
					{
						UNK_0x5D96D8530B3D0904(&(Local_63.f_3), 7);
						return true;
					}
				}
				if (func_27())
				{
					UNK_0x5D96D8530B3D0904(&(Local_63.f_3), 7);
					return true;
				}
				if (func_23(bLocal_288, func_12(bLocal_287), 1))
				{
					UNK_0x5D96D8530B3D0904(&(Local_63.f_3), 7);
					return true;
				}
			}
			if (iLocal_289 != UNK_0x12AB0310C2281427(UNK_0x6E524813889AECF8(bLocal_288)))
			{
				UNK_0x5D96D8530B3D0904(&(Local_63.f_3), 5);
				return true;
			}
		}
	}
	return false;
}

bool func_23(bool bParam0, int iParam1, bool bParam2)
{
	return func_24(bParam0, iParam1, bParam2, 1);
}

bool func_24(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_13() && bParam0 != func_13())
	{
		if (!bParam2)
		{
			if (func_26(bParam0, iParam1, iParam3))
			{
				return false;
			}
		}
		if (Global_1628237[bParam0 /*615*/].f_11 != func_13())
		{
			if (iParam1 == Global_1628237[bParam0 /*615*/].f_11)
			{
				return func_25(iParam1, iParam3);
			}
		}
	}
	return false;
}

bool func_25(bool bParam0, int iParam1)
{
	if (func_15(bParam0))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_450 == iParam1;
	}
	return false;
}

bool func_26(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam1 != func_13())
	{
		if (bParam0 != func_13())
		{
			if (Global_1628237[bParam0 /*615*/].f_11 != func_13())
			{
				if (Global_1628237[bParam0 /*615*/].f_11 == bParam0)
				{
					if (Global_1628237[bParam0 /*615*/].f_11.f_450 == iParam2)
					{
						return bParam1 == bParam0;
					}
				}
			}
		}
	}
	return false;
}

bool func_27()
{
	if (((func_29(bLocal_288, 1, 1) || func_42(bLocal_288, 0)) || func_42(bLocal_288, 7)) || func_28(bLocal_288))
	{
		return true;
	}
	return false;
}

bool func_28(bool bParam0)
{
	return Global_1590535[bParam0 /*876*/].f_196 != 0;
}

bool func_29(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0 == func_13())
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, false))
	{
		return true;
	}
	if (bParam1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, true))
		{
			return true;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_30()
{
	if (Local_63.f_52)
	{
		return 300000;
	}
	return 120000;
}

bool func_31(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return Global_1703159[bVar0 /*13*/].f_12 != 0;
	}
	return false;
}

bool func_32(bool bParam0)
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

bool func_33()
{
	return Global_1573342;
}

int func_34(bool bParam0)
{
	if (func_39(bParam0) == 243)
	{
		return func_35(bParam0);
	}
	return -1;
}

int func_35(bool bParam0)
{
	if (func_36(bParam0, 0))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

bool func_36(bool bParam0, bool bParam1)
{
	if (Global_1628237[bParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[bParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

bool func_37(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return func_38(bParam0, 9);
	}
	return false;
}

bool func_38(bool bParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_11.f_4, bParam1);
}

int func_39(bool bParam0)
{
	if (func_36(bParam0, 0))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_40(bool bParam0)
{
	if (func_15(bParam0))
	{
		if (func_37(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_41(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 4);
}

bool func_42(bool bParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_208, bParam1);
}

bool func_43(bool bParam0, int iParam1)
{
	if (Global_1628237[bParam0 /*615*/] == iParam1)
	{
		return func_44(bParam0);
	}
	return false;
}

bool func_44(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bVar0 /*615*/].f_1, false);
	}
	return false;
}

void func_45()
{
	func_56();
	if (bLocal_286 != 1)
	{
		func_2();
	}
	func_46();
}

void func_46()
{
	int iVar0;

	if (func_6(UNK_0x117658E336116132(bLocal_295), 0, 1))
	{
		if (bLocal_286 == 1)
		{
			if (UNK_0x117658E336116132(bLocal_295) == bLocal_288)
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 16))
				{
					if (UNK_0xEAE0D21A50E6C7F4(Local_119[bLocal_295 /*5*/].f_1, 3))
					{
						UNK_0x5D96D8530B3D0904(&(Local_63.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 11))
			{
				if (func_52(UNK_0x117658E336116132(bLocal_295)))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_4, bLocal_295))
					{
						UNK_0x5D96D8530B3D0904(&(Local_63.f_1), 11);
						UNK_0x5D96D8530B3D0904(&(Local_63.f_4), bLocal_295);
					}
				}
				else if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_4, bLocal_295))
				{
					UNK_0x5D96D8530B3D0904(&(Local_63.f_1), 11);
					UNK_0x0674E58A79778E99(&(Local_63.f_4), bLocal_295);
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_119[bLocal_295 /*5*/].f_1, 2))
			{
				UNK_0x0674E58A79778E99(&(Local_63.f_1), 11);
			}
			if (bLocal_286 == 0)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_119[bLocal_295 /*5*/].f_1, false))
				{
					if (Local_119[bLocal_295 /*5*/].f_2 != -1)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, true))
						{
							UNK_0x5D96D8530B3D0904(&(Local_63.f_2), true);
							Local_63.f_42 = Local_119[bLocal_295 /*5*/].f_2;
							Local_63.f_43 = Local_119[bLocal_295 /*5*/].f_3;
							if (!func_51())
							{
								func_50();
							}
						}
					}
					else if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 9))
					{
						if (!func_51())
						{
							func_49();
						}
						iVar0 = 0;
						while (iVar0 < func_479(bLocal_286))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 9);
						UNK_0x5D96D8530B3D0904(&(Local_63.f_2), true);
					}
				}
				if (func_51())
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_280, 17))
					{
						if (UNK_0xEAE0D21A50E6C7F4(Local_119[bLocal_295 /*5*/].f_1, 5))
						{
							func_50();
							UNK_0x5D96D8530B3D0904(&bLocal_280, 17);
						}
						else if (UNK_0xEAE0D21A50E6C7F4(Local_119[bLocal_295 /*5*/].f_1, 6))
						{
							func_49();
							UNK_0x5D96D8530B3D0904(&bLocal_280, 17);
						}
					}
				}
				if (!UNK_0xEAE0D21A50E6C7F4(Local_119[bLocal_295 /*5*/].f_1, true))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_280, 3))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_280, 3);
					}
				}
				else if (UNK_0x117658E336116132(bLocal_295) == bLocal_288)
				{
					if (bLocal_286 == 0)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, true))
						{
							if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 6))
							{
								UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 6);
							}
						}
					}
				}
			}
		}
	}
	bLocal_295++;
	if (bLocal_295 >= 32)
	{
		bLocal_295 = false;
		if (bLocal_286 == 0)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_280, 3))
			{
				func_48();
			}
			else
			{
				func_47();
			}
			UNK_0x0674E58A79778E99(&bLocal_280, 3);
		}
	}
}

void func_47()
{
	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 3))
	{
		UNK_0x0674E58A79778E99(&(Local_63.f_2), 3);
	}
}

void func_48()
{
	if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 3))
	{
		Local_63.f_6 = iLocal_293;
		UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 3);
	}
}

void func_49()
{
	struct<14> Var0;

	Var0.f_2 = -1459355092;
	Var0.f_10 = bLocal_288;
	Var0.f_11 = bLocal_287;
	func_20(Var0, func_21(1));
}

void func_50()
{
	struct<14> Var0;

	Var0.f_2 = -871580373;
	Var0.f_10 = bLocal_288;
	Var0.f_11 = bLocal_287;
	if (func_479(bLocal_286) > 1)
	{
		Var0.f_12 = UNK_0x117658E336116132(true);
	}
	else
	{
		Var0.f_12 = UNK_0x117658E336116132(false);
	}
	Var0.f_3 = Local_63.f_43;
	func_20(Var0, func_21(1));
}

bool func_51()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_52(int iParam0)
{
	if (iParam0 == UNK_0xD803B885F5E47A62())
	{
		return func_55();
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1377170.f_241.f_136[func_54(10) /*33*/][iParam0], func_53(10));
}

int func_53(int iParam0)
{
	return (iParam0 % 32);
}

int func_54(int iParam0)
{
	return (iParam0 / 32);
}

var func_55()
{
	return Global_1312418;
}

void func_56()
{
	bool bVar0;

	if (bLocal_286 == 0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 3))
		{
			if (UNK_0x519D13E6C1911A0B(iLocal_293, Local_63.f_6) > 10000)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, true))
				{
					UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 2);
				}
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 8))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, true))
			{
				if (func_60())
				{
					UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 6);
					func_59();
				}
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, false))
		{
			if (func_6(bLocal_288, 1, 1))
			{
				bVar0 = UNK_0x9539D44F3E4492F6(bLocal_288);
				if (func_58(bVar0))
				{
					func_249(bVar0);
				}
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, true))
		{
			if (!func_6(bLocal_288, 1, 1) || func_28(bLocal_288))
			{
				UNK_0x5D96D8530B3D0904(&(Local_63.f_1), 15);
			}
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, false))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 5))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 4))
			{
				if (UNK_0x519D13E6C1911A0B(iLocal_293, Local_63.f_5) > 600000)
				{
					UNK_0x5D96D8530B3D0904(&(Local_63.f_1), 4);
				}
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_3, 12))
		{
			if (func_57())
			{
				UNK_0x5D96D8530B3D0904(&(Local_63.f_3), 12);
			}
		}
	}
}

bool func_57()
{
	switch (Local_63.f_10[0 /*7*/].f_1)
	{
		case 0:
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_738 == 0)
			{
				return true;
			}
			break;
		case 1:
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_738 == 1)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_58(bool bParam0)
{
	if (UNK_0xEB6A8945D1AC98A1(bParam0))
	{
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 17))
	{
		if (!UNK_0x70EED0761B82965E(bParam0))
		{
			return true;
		}
	}
	if (!func_5(Local_63.f_36, UNK_0x68F4C0EC296D3901(bParam0, true), 625f))
	{
		return true;
	}
	return false;
}

void func_59()
{
	func_508();
	Local_63 = 0;
}

bool func_60()
{
	if ((((((((UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 6) || UNK_0x131F22FE6F47A65D(bLocal_288)) || func_29(bLocal_288, 1, 1)) || func_62(bLocal_288)) || func_42(bLocal_288, 0)) || func_42(bLocal_288, 7)) || func_28(bLocal_288)) || Global_2425662[bLocal_288 /*421*/].f_238) || func_61(UNK_0x9539D44F3E4492F6(bLocal_288), joaat("TITAN")))
	{
		return true;
	}
	if (bLocal_288 != -1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_119[bLocal_288 /*5*/].f_1, 4))
		{
			return true;
		}
	}
	return false;
}

bool func_61(bool bParam0, int iParam1)
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			if (UNK_0x0E0E6175453415CB(bParam0))
			{
				bVar0 = UNK_0x6937EA2286828455(bParam0, 0);
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					if (UNK_0x134B62B726CEC8E6(bVar0) == iParam1)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_62(bool bParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, 14))
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, 11))
	{
		return true;
	}
	return false;
}

void func_63()
{
	if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 5))
	{
		Local_63.f_5 = iLocal_293;
		UNK_0x5D96D8530B3D0904(&(Local_63.f_1), 5);
	}
}

void func_64()
{
	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 5))
	{
		UNK_0x0674E58A79778E99(&(Local_63.f_1), 5);
	}
}

bool func_65()
{
	bool bVar0;

	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, false))
	{
		return false;
	}
	else
	{
		bVar0 = false;
		if (func_251())
		{
			if (bLocal_286 == 1)
			{
				bVar0 = true;
			}
			else if (func_246())
			{
				if (func_243())
				{
					if (func_242())
					{
						bVar0 = true;
					}
					else if (func_240(func_241(bLocal_286)))
					{
						if (func_71())
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		if (bVar0)
		{
			func_63();
			if (func_66())
			{
				return true;
			}
		}
	}
	return false;
}

bool func_66()
{
	int iVar0;

	iVar0 = 0;
	if (UNK_0xBFF81ED3B99522C7())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, false))
		{
			return true;
		}
		else
		{
			switch (bLocal_286)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < func_479(bLocal_286))
					{
						if ((!UNK_0xE9F78D191AD5EDBA(Local_63.f_10[iVar0 /*7*/]) && !UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar0 /*7*/].f_2, true)) && !UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar0 /*7*/].f_2, 6))
						{
							func_67(iVar0, func_70(bLocal_286), Local_63.f_32, Local_63.f_35);
						}
						iVar0++;
					}
					break;
			}
			if (bLocal_286 != 1)
			{
				iVar0 = 0;
				while (iVar0 < func_479(bLocal_286))
				{
					if (!UNK_0xE9F78D191AD5EDBA(Local_63.f_10[iVar0 /*7*/]))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar0 /*7*/].f_2, 6))
						{
							return false;
						}
					}
					iVar0++;
				}
			}
			UNK_0x5D96D8530B3D0904(&bLocal_280, true);
			UNK_0x5D96D8530B3D0904(&bLocal_280, 2);
			UNK_0x5D96D8530B3D0904(&bLocal_280, 3);
			UNK_0x5D96D8530B3D0904(&bLocal_280, 4);
			UNK_0x5D96D8530B3D0904(&(Local_63.f_1), false);
			UNK_0x5D96D8530B3D0904(&Global_1653536, bLocal_286);
			return true;
		}
	}
	return false;
}

void func_67(int iParam0, int iParam1, vector3 vParam2, var uParam5)
{
	if (UNK_0xBFF81ED3B99522C7())
	{
		if (!UNK_0xE9F78D191AD5EDBA(Local_63.f_10[iParam0 /*7*/]))
		{
			if (UNK_0xA108079788452A90(0) < UNK_0x9BFC2168CB5FCF68(false, 0))
			{
				if (UNK_0xA3FA8B6D2780D661(1))
				{
					if (func_240(func_241(bLocal_286)))
					{
						if (func_69(&(Local_63.f_10[iParam0 /*7*/]), 7, func_241(bLocal_286), vParam2, uParam5, 1, 1, 1))
						{
							Local_63.f_10[iParam0 /*7*/].f_1 = bLocal_286;
							Local_63.f_10[iParam0 /*7*/].f_4 = iParam1;
							func_68(iParam0);
						}
					}
				}
			}
		}
	}
}

void func_68(int iParam0)
{
	char cVar0[16];

	if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, true))
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 0))
		{
			if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
			{
				UNK_0x6DF7BF67E86AAE86(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), Global_1575002);
				UNK_0x291398BF0ED6A2E2(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 1);
				UNK_0x08EAEE08061C1898(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 0);
			}
			UNK_0xAA6B3A4292417750(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), false, false, false, false, false, false, 1, false);
			UNK_0x083F03A847B640E9(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 2);
			UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 13, true);
			UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 41, true);
			UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 20, true);
			UNK_0x4E885A246A9D983A(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 132, true);
			UNK_0x4E885A246A9D983A(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 118, false);
			UNK_0x4E885A246A9D983A(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 311, true);
			UNK_0x23CBFFA16CA5CF45(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 300f, 10);
			UNK_0xFADC0A217229F6B5(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), true);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			UNK_0x5F2AA9E2843E9403(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), &cVar0);
			switch (Local_63.f_10[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 0, false);
					UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 2, false);
					UNK_0x3CC33E4E9CE523F4(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 2);
					UNK_0xB35CCEC0D4946813(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 0);
					UNK_0xD5EF6A937E06E46F(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 0, -1, 0);
					UNK_0x4E885A246A9D983A(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 32, true);
					UNK_0xBAFED2F6486F771A(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 4, false);
					UNK_0xBAFED2F6486F771A(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 1024, true);
					UNK_0xBAFED2F6486F771A(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 128, true);
					UNK_0xBAFED2F6486F771A(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 32, false);
					UNK_0xBAFED2F6486F771A(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 8, false);
					UNK_0xBAFED2F6486F771A(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 64, false);
					UNK_0xBAFED2F6486F771A(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 256, true);
					UNK_0xBAFED2F6486F771A(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 1, false);
					UNK_0xBAFED2F6486F771A(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 2, true);
					UNK_0xBAFED2F6486F771A(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 16, true);
					if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, false))
					{
						UNK_0x5D96D8530B3D0904(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
					}
					UNK_0xBAFED2F6486F771A(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 512, true);
					UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 17, false);
					UNK_0x262EF6C6306BEA6C(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), joaat("WEAPON_KNIFE"), true, true, true);
					UNK_0x6D80F1AEBA734886(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), false);
					UNK_0x0C8C0C840C2D1AD2(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), UNK_0x9539D44F3E4492F6(bLocal_288), -1, 0, 2);
					UNK_0x32DFF210E11D4B0F(Local_63.f_10[iParam0 /*7*/], 1);
					break;
			}
			UNK_0xD458AC1C1D29C3B4(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), SYSTEM::ROUND((Global_262145.f_154 * IntToFloat(UNK_0x7F6DC62EA9922664(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]))))), false);
			if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 8))
			{
				UNK_0x5D96D8530B3D0904(&(Local_63.f_1), 8);
			}
			UNK_0x5D96D8530B3D0904(&(Local_63.f_10[iParam0 /*7*/].f_2), true);
		}
	}
}

bool func_69(var uParam0, int iParam1, bool bParam2, vector3 vParam3, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	bool bVar0;

	if (!UNK_0xA3FA8B6D2780D661(1))
	{
		return false;
	}
	bVar0 = UNK_0x36F2404464202779(iParam1, bParam2, vParam3, bParam6, iParam8, bParam7);
	*uParam0 = UNK_0xE8C9CB886096272A(bVar0);
	if (UNK_0xE9F78D191AD5EDBA(*uParam0))
	{
		UNK_0x120A395B0ECB8EA5(bVar0, bParam9);
		if (UNK_0xECE0BE5313FD8BDA(bVar0))
		{
			if (bParam7)
			{
				UNK_0xF4F945BB00F6E31C(*uParam0, 1);
			}
		}
		return true;
	}
	return false;
}

int func_70(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 0;
	}
	return 0;
}

bool func_71()
{
	struct<6> Var0;

	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 3))
	{
		return true;
	}
	else
	{
		switch (bLocal_286)
		{
			case 0:
				if (UNK_0x40B8C182D63932FC(bLocal_288) && func_6(bLocal_288, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0.f_13 = 2;
					Var0.f_20 = 2;
					Var0.f_32 = -1082130432;
					Var0.f_34 = 1;
					Var0 = { UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bLocal_288), true) };
					Var0.f_5 = 20f;
					if (func_72(Local_63.f_36, 40f, &(Local_63.f_32), &(Local_63.f_35), &Var0))
					{
						UNK_0x5D96D8530B3D0904(&(Local_63.f_1), 3);
						return true;
					}
				}
				else
				{
					UNK_0xDEED9606C7D093F7();
					UNK_0x0FB2CEE58DA4A6EE();
					if (Global_2405072.f_2464)
					{
						UNK_0xDA46A23FFDBCF876();
						Global_2405072.f_2464 = 0;
					}
				}
				break;
		}
	}
	return false;
}

bool func_72(vector3 vParam0, float fParam3, var uParam4, var uParam5, int iParam6)
{
	struct<17> Var0;
	struct<18> Var34;
	vector3 vVar62;

	if (iParam6->f_5 > (fParam3 - 20f))
	{
		iParam6->f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34 = { vParam0 };
	Var34.f_3 = iParam6->f_11;
	Var34.f_4 = fParam3;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 0;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	if (func_73(&Var34, iParam6, &Var0))
	{
		if ((iParam6->f_12 > 0f && iParam6->f_7) && iParam6->f_8)
		{
			vVar62 = { vParam0 - Var0[0 /*3*/] };
			if (vVar62.z > iParam6->f_12)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_16[0] = iParam6->f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_16[0];
		return true;
	}
	return false;
}

bool func_73(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	int iVar17;
	vector3 vVar18;
	vector3 vVar21;
	var uVar24;
	bool bVar25;
	struct<56> Var26;
	bool bVar85;

	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405072.f_2458 == *uParam0 || !Global_2405072.f_2458.f_1 == uParam0->f_1) || !Global_2405072.f_2458.f_2 == uParam0->f_2) || !Global_2405072.f_2461 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		case 1:
			if (((((!Global_2405072.f_2472 == uParam0->f_8 || !Global_2405072.f_2472.f_1 == uParam0->f_8.f_1) || !Global_2405072.f_2472.f_2 == uParam0->f_8.f_2) || !Global_2405072.f_2475 == uParam0->f_11) || !Global_2405072.f_2475.f_1 == uParam0->f_11.f_1) || !Global_2405072.f_2475.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		case 2:
			if ((((((!Global_2405072.f_2472 == uParam0->f_8 || !Global_2405072.f_2472.f_1 == uParam0->f_8.f_1) || !Global_2405072.f_2472.f_2 == uParam0->f_8.f_2) || !Global_2405072.f_2475 == uParam0->f_11) || !Global_2405072.f_2475.f_1 == uParam0->f_11.f_1) || !Global_2405072.f_2475.f_2 == uParam0->f_11.f_2) || !Global_2405072.f_2478 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2405072.f_2456 == 1)
		{
			if (UNK_0x1727A44C562FBED2(Global_2405072.f_2465))
			{
				if (Global_2405072.f_2465 == UNK_0x0D0A574C76D769AC())
				{
					if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2462) < func_239(0))
					{
						return false;
					}
				}
				else if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2462) < func_239(0))
				{
					return false;
				}
			}
			UNK_0xDEED9606C7D093F7();
			UNK_0x0FB2CEE58DA4A6EE();
			func_238();
		}
		Global_2405072.f_2456 = 0;
	}
	else if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2462) > func_239(0))
	{
		Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
		func_232();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	UNK_0x10FEEAFF01E32639(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		vVar8 = { *uParam0 };
	}
	else
	{
		vVar8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar11 = { vVar8 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar14 = { vVar8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2405072.f_2456)
	{
		UNK_0xDEED9606C7D093F7();
		UNK_0x0FB2CEE58DA4A6EE();
		func_238();
		if (iParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_231(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, iParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return true;
				}
			}
		}
		if (!UNK_0xC79C8A78EC708587())
		{
			Global_2405072.f_2479 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405072.f_2458 = { *uParam0 };
					Global_2405072.f_2461 = uParam0->f_4;
					break;
				case 1:
					Global_2405072.f_2472 = { uParam0->f_8 };
					Global_2405072.f_2475 = { uParam0->f_11 };
					Global_2405072.f_2478 = 0f;
					Global_2405072.f_2458 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				case 2:
					Global_2405072.f_2472 = { uParam0->f_8 };
					Global_2405072.f_2475 = { uParam0->f_11 };
					Global_2405072.f_2478 = uParam0->f_14;
					Global_2405072.f_2458 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!iParam1->f_8 && !iParam1->f_9)
			{
				func_230(vVar8.x, vVar8.y);
			}
			Global_2405072.f_2457 = 1;
			Global_2405072.f_2456 = 1;
			Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
			Global_2405072.f_2462 = UNK_0x2B6E0A53779D29EA();
			Global_2405072.f_2465 = UNK_0x0D0A574C76D769AC();
		}
		else
		{
			return false;
		}
	}
	if (Global_2405072.f_2456)
	{
		if (Global_2405072.f_2457 == 1)
		{
			if (UNK_0xD1B4D22E0BA9B0C8(fVar4, fVar5, fVar6, fVar7) || UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 5000)
			{
				Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
				if (iParam1->f_8 || iParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("TAILGATER");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26.f_57 = 1;
					Var26 = { *iParam1 };
					Var26.f_3 = iParam1->f_5;
					Var26.f_11 = iParam1->f_9;
					Var26.f_18 = 1;
					if (iParam1->f_32 > 0f)
					{
						Var26.f_6 = iParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = { iParam1->f_13[iVar17 /*3*/] };
						Var26.f_45[iVar17] = iParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = iParam1->f_30;
					Var26.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					if (func_229(Global_4456448.f_232883))
					{
						Var26.f_9 = 1;
					}
					func_204(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((iParam1->f_7 && iParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_203(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405072.f_2457 = 9;
				}
				else
				{
					Global_2405072.f_2457 = 2;
				}
			}
		}
		if (Global_2405072.f_2457 == 2)
		{
			if ((UNK_0xF8A3B10A1B8ACCDD(vVar11, vVar14) || UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 15000) || UNK_0x7D293360C866EB8E(vVar11, vVar14) == 0)
			{
				Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
				if (uParam0->f_5 && !func_200(UNK_0xD803B885F5E47A62(), 0))
				{
					Global_2405072.f_2457 = 3;
				}
				else
				{
					Global_2405072.f_2457 = 4;
				}
			}
			else if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2467) > 7000)
			{
				func_199(vVar8.x, vVar8.y);
			}
		}
		if (Global_2405072.f_2457 == 3)
		{
			if (func_198() || UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 10000)
			{
				Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
				Global_2405072.f_2457 = 4;
			}
		}
		if (Global_2405072.f_2457 == 4)
		{
			if (UNK_0xC79C8A78EC708587())
			{
				UNK_0xDEED9606C7D093F7();
				UNK_0x0FB2CEE58DA4A6EE();
			}
			else
			{
				iVar0 = 0;
				func_232();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*iParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (iParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (UNK_0xAFED075B5A62767B(UNK_0xD803B885F5E47A62(), *uParam0, uParam0->f_4, *iParam1, iVar0))
							{
								Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
								Global_2405072.f_2457 = 5;
							}
							break;
						case 1:
							func_197(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
							if (UNK_0xD4B5AAF3676F3DE0(UNK_0xD803B885F5E47A62(), vVar18, vVar21, uVar24, *iParam1, iVar0))
							{
								Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
								Global_2405072.f_2457 = 5;
							}
							break;
						case 2:
							if (UNK_0xD4B5AAF3676F3DE0(UNK_0xD803B885F5E47A62(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *iParam1, iVar0))
							{
								Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
								Global_2405072.f_2457 = 5;
							}
							break;
					}
				}
				else
				{
					if (iParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (iParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
					Global_2405072.f_2457 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							UNK_0x5A3997FBBD7FD7C0(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						case 1:
							func_197(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
							UNK_0x1814612955640FD9(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
							break;
						case 2:
							UNK_0x1814612955640FD9(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
					}
				}
			}
		}
		if (Global_2405072.f_2457 == 5)
		{
			if (func_126(uParam2, uParam0, iParam1, 0))
			{
				if (Global_2405072.f_2483.f_5)
				{
					Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
					Global_2405072.f_2457 = 6;
				}
				else
				{
					Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*iParam1) == 0f)
						{
							vVar1 = { *iParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = UNK_0xE7D606C557C86100(vVar1.x, vVar1.y);
						}
					}
					Global_2405072.f_2457 = 9;
				}
			}
			else if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 20000)
			{
				UNK_0xDEED9606C7D093F7();
				UNK_0x0FB2CEE58DA4A6EE();
				Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
				Global_2405072.f_2457 = 8;
			}
		}
		if (Global_2405072.f_2457 == 6)
		{
			iVar0 = 0;
			Global_2405072.f_2483.f_1 = 0;
			if (iParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_125(uParam0->f_4))
				{
					if (UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vVar8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_124(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vVar8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (iParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
			Global_2405072.f_2457 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					UNK_0x5A3997FBBD7FD7C0(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				case 1:
					func_197(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
					UNK_0x1814612955640FD9(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
					break;
				case 2:
					UNK_0x1814612955640FD9(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
			}
		}
		if (Global_2405072.f_2457 == 7)
		{
			if (func_126(uParam2, uParam0, iParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2405072.f_2617[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_203(Global_2405072.f_2617[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405072.f_2617[iVar17 /*3*/] };
										}
										break;
									case 1:
										if (func_122(Global_2405072.f_2617[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405072.f_2617[iVar17 /*3*/] };
										}
										break;
									case 2:
										if (UNK_0x0399732A9EBC368E(Global_2405072.f_2617[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2405072.f_2617[iVar17 /*3*/] };
										}
										break;
								}
							}
						}
						iVar17++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_76(&vVar1, 0, 1, 1, 0, uParam0, iParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
				if (!SYSTEM::VMAG(*iParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						vVar1 = { *iParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = UNK_0xE7D606C557C86100(vVar1.x, vVar1.y);
						iVar17++;
					}
				}
				Global_2405072.f_2457 = 9;
			}
			else if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 20000)
			{
				Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
				Global_2405072.f_2457 = 8;
			}
		}
		if (Global_2405072.f_2457 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_75(Global_2405072.f_486))
				{
				}
			}
			else if (Global_2405072.f_2483.f_2)
			{
				func_74(uParam2, &(Global_2405072.f_2483.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar85 = false;
				}
				else
				{
					bVar85 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405072.f_2458 };
				func_76(uParam2[0 /*3*/], 0, bVar85, 0, 0, uParam0, iParam1);
			}
			Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
			Global_2405072.f_2457 = 9;
		}
		if (Global_2405072.f_2457 == 9)
		{
			Global_2405072.f_2456 = 0;
			UNK_0xDEED9606C7D093F7();
			UNK_0x0FB2CEE58DA4A6EE();
			func_238();
			return true;
		}
		Global_2405072.f_2462 = UNK_0x2B6E0A53779D29EA();
	}
	return false;
}

void func_74(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

bool func_75(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return true;
	}
	return false;
}

void func_76(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, int iParam6)
{
	vector3 vVar0;
	var uVar3;
	struct<56> Var4;
	var uVar63;
	int iVar64;
	bool bVar65;
	int iVar66;
	vector3 vVar67;
	vector3 vVar70;
	vector3 vVar73;
	float fVar76;

	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("TAILGATER");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	Var4.f_57 = 1;
	if (bParam1)
	{
		iVar66 = 0;
	}
	else
	{
		iVar66 = 16;
	}
	if (!iParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar66 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar67 = { *uParam5 };
						if (func_125(uParam5->f_4) || !UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					case 1:
						vVar67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_124(uParam5->f_8, uParam5->f_11, 0f) || !UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					case 2:
						vVar67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_124(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vVar67)))
						{
							iVar66 += 4;
						}
						break;
				}
			}
		}
		else
		{
			iVar66 += 4;
		}
	}
	if (func_90(*uParam0, &vVar0, iVar66, iParam3, 1))
	{
	}
	else
	{
		bVar65 = true;
	}
	if (bVar65)
	{
		vVar0 = { *uParam0 };
		Var4 = { *iParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = iParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (iParam6->f_32 > 0f)
		{
			Var4.f_6 = iParam6->f_32;
		}
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
			}
		}
		iVar64 = 0;
		while (iVar64 < 2)
		{
			Var4.f_38[iVar64 /*3*/] = { iParam6->f_13[iVar64 /*3*/] };
			Var4.f_45[iVar64] = iParam6->f_20[iVar64];
			iVar64++;
		}
		Var4.f_51 = iParam6->f_30;
		Var4.f_55 = uParam5->f_16;
		if (func_88(UNK_0xD803B885F5E47A62(), 0))
		{
			Var4.f_9 = 1;
		}
		func_204(&vVar0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar70 = { *uParam5 };
				fVar76 = uParam5->f_4;
				break;
			case 1:
				vVar70 = { uParam5->f_8 };
				vVar73 = { uParam5->f_11 };
				break;
			case 2:
				vVar70 = { uParam5->f_8 };
				vVar73 = { uParam5->f_11 };
				fVar76 = uParam5->f_14;
				break;
		}
		if (!func_87(vVar0, uParam5->f_7, vVar70, vVar73, fVar76))
		{
			if (func_90(*uParam0, &vVar0, iVar66, iParam3, 0))
			{
				if (!func_87(vVar0, uParam5->f_7, vVar70, vVar73, fVar76))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar70 + vVar73 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar70 };
					}
					if (UNK_0xE82754C349C7B581(vVar0, &uVar63, 0, 0))
					{
						vVar0.f_2 = uVar63;
					}
				}
			}
			else if (func_77(uParam0, 1, 1, 1, 1))
			{
				func_76(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, iParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar70 + vVar73 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar70 };
				}
				if (UNK_0xE82754C349C7B581(vVar0, &uVar63, 0, 0))
				{
					vVar0.f_2 = uVar63;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_2405072.f_661 = 1;
}

bool func_77(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409984[iVar0 /*17*/].f_16))
			{
				if (func_86(*iParam0, &(Global_2409984[iVar0 /*17*/]), 1008981770 /* Float: 0.01f */, iParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409984[iVar0 /*17*/].f_12)
						{
							*iParam0 = { Global_2409984[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *iParam0 };
							func_78(&vVar1, &(Global_2409984[iVar0 /*17*/]), 1036831949 /* Float: 0.1f */, 0, bParam3);
							if (func_77(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *iParam0 };
								func_78(&vVar1, &(Global_2409984[iVar0 /*17*/]), 1036831949 /* Float: 0.1f */, 1, 0);
							}
							*iParam0 = { vVar1 };
						}
					}
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_78(int iParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*iParam0 = { func_85(*iParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			case 1:
				*iParam0 = { func_85(*iParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			case 2:
				*iParam0 = { func_85(*iParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_83(iParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			case 1:
				func_82(iParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			case 2:
				func_79(iParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
		}
	}
}

void func_79(int iParam0, vector3 vParam1, vector3 vParam4, bool bParam7, float fParam8, bool bParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	vector3 vVar29;

	vVar0 = { vParam4 - vParam1 };
	vVar0.f_2 = 0f;
	vVar3 = { *iParam0 - vParam1 };
	vVar3.f_2 = 0f;
	vVar6 = { func_81(0f, 0f, 1f, vVar0) };
	vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
	fVar9 = (SYSTEM::VMAG(vVar3) * SYSTEM::SIN(UNK_0x07AB02F3C4AE2B04(vVar0.x, vVar0.y, vVar3.x, vVar3.y)));
	if (fVar9 < (bParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_80(vVar6, vVar3) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((bParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((bParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_80(vVar6, vVar3) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((bParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((bParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		vVar10 = { *iParam0 + vVar6 };
		fVar16 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam4.x, vParam4.y, 0f);
		vVar17 = { vParam1 + vParam4 / Vector(2f, 2f, 2f) };
		vVar17.f_2 = 0f;
		vVar6 = { func_81(0f, 0f, 1f, vVar0) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		vVar6 = { vVar6 * FtoV((bParam7 * 0.5f)) };
		vVar20 = { vVar17 - vVar6 };
		vVar23 = { vVar17 + vVar6 };
		vVar26 = { vVar23 - vVar20 };
		vVar26.f_2 = 0f;
		vVar29 = { *iParam0 - vVar20 };
		vVar29.f_2 = 0f;
		vVar6 = { func_81(0f, 0f, 1f, vVar26) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		fVar9 = (SYSTEM::VMAG(vVar29) * SYSTEM::SIN(UNK_0x07AB02F3C4AE2B04(vVar26.x, vVar26.y, vVar29.x, vVar29.y)));
		if (!bParam9)
		{
			if (func_80(vVar6, vVar29) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_80(vVar6, vVar29) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		vVar13 = { *iParam0 + vVar6 };
		if (SYSTEM::VDIST(vVar10, *iParam0, iParam0->f_1, 0f) < SYSTEM::VDIST(vVar13, *iParam0, iParam0->f_1, 0f))
		{
			*iParam0 = { vVar10 };
		}
		else
		{
			*iParam0 = { vVar13 };
		}
	}
}

float func_80(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_81(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

void func_82(int iParam0, struct<2> Param1, float fParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;

	vVar0 = { *iParam0 };
	fVar3 = (*iParam0 - Param1);
	fVar4 = (*iParam0 - Param4);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (iParam0->f_1 - Param1.f_1);
	fVar7 = (iParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	vVar0 = { *iParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				vVar0.x = (Param1 - fParam7);
			}
			else
			{
				vVar0.x = (Param4 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			vVar0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			vVar0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			vVar0.x = (Param4 + fParam7);
		}
		else
		{
			vVar0.x = (Param1 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		vVar0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		vVar0.f_1 = (Param1.f_1 - fParam7);
	}
	*iParam0 = { vVar0 };
}

void func_83(int iParam0, vector3 vParam1, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { *iParam0 - vParam1 };
	vVar0.f_2 = 0f;
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (bParam7 == 0f)
		{
			func_84(&vVar0, 0f, 0f, UNK_0x79833B02DBD2A244(0f, 360f));
		}
		else
		{
			func_84(&vVar0, 0f, 0f, bParam7);
		}
	}
	vVar0 = { vVar0 * FtoV((bParam4 + fParam5)) };
	if (!bParam6)
	{
		vVar3 = { vParam1 + vVar0 };
	}
	else
	{
		vVar3 = { vParam1 - vVar0 };
	}
	*iParam0 = vVar3.x;
	iParam0->f_1 = vVar3.y;
}

void func_84(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	fVar0 = SYSTEM::COS(vParam1.x);
	fVar1 = SYSTEM::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.y);
	fVar1 = SYSTEM::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.f_1 = uParam0->f_1;
	vVar2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.z);
	fVar1 = SYSTEM::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.f_2 = uParam0->f_2;
	*uParam0 = { vVar2 };
}

Vector3 func_85(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	vector3 vVar1;

	switch (iParam10)
	{
		case 0:
			func_83(&vParam0, vParam3, bParam9, fParam11, bParam12, 0);
			break;
		case 1:
			func_82(&vParam0, vParam3, vParam6, fParam11, bParam12);
			break;
		case 2:
			func_79(&vParam0, vParam3, vParam6, bParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		UNK_0x4490D017C57827E9(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_203(vVar1, vParam3, bParam9, 0, 0))
				{
					return vVar1;
				}
				break;
			case 1:
				if (!func_122(vVar1, vParam3, vParam6, 0, 0))
				{
					return vVar1;
				}
				break;
			case 2:
				if (!UNK_0x0399732A9EBC368E(vVar1, vParam3, vParam6, bParam9, 0, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

bool func_86(vector3 vParam0, int iParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (iParam3->f_10)
	{
		case 0:
			return func_203(vParam0, *iParam3, ((iParam3->f_6 + fParam4) + (IntToFloat(Global_2405072.f_2726) * iParam3->f_8)), bParam5, bParam6);
		case 1:
			return func_122(vParam0, *iParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), iParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
		case 2:
			if (bParam5 && bParam6)
			{
				return UNK_0x0399732A9EBC368E(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, 0, false);
			}
			else if (bParam5)
			{
				if (UNK_0x0399732A9EBC368E(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, 0, false) && !(vParam0.z < iParam3->f_2 && vParam0.z < iParam3->f_3.f_2))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else if (bParam6)
			{
				if (UNK_0x0399732A9EBC368E(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, 0, false) && !(vParam0.z > iParam3->f_2 && vParam0.z > iParam3->f_3.f_2))
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
				return UNK_0x0399732A9EBC368E(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, 0, true);
			}
			break;
	}
	return false;
}

bool func_87(vector3 vParam0, int iParam3, vector3 vParam4, vector3 vParam7, bool bParam10)
{
	switch (iParam3)
	{
		case 0:
			if (SYSTEM::VDIST(vParam0, vParam4) <= bParam10)
			{
				return true;
			}
			break;
		case 1:
			return func_122(vParam0, vParam4, vParam7, 0, 0);
		case 2:
			return UNK_0x0399732A9EBC368E(vParam0, vParam4, vParam7, bParam10, 0, true);
	}
	return false;
}

bool func_88(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (bParam1)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("TERBYTE"))
			{
				return true;
			}
		}
	}
	if (bParam0 != func_13())
	{
		if (func_6(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_13())
			{
				return func_89(Global_2425662[bParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return false;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
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
			return 1;
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
		case 81:
			return 5;
		case 82:
			return 6;
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
		case 88:
			return 8;
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
		case 101:
			return 10;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
		case 117:
			return 12;
		case 122:
			return 13;
		case 123:
			return 14;
		case 124:
			return 15;
		case 125:
			return 16;
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
		case 145:
			return 18;
	}
	return -1;
}

bool func_90(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_121(vParam0, iParam3))
	{
		if (func_91(vParam0, iParam3, iParam5, iParam6))
		{
			return true;
		}
	}
	if (UNK_0xB885EF0389689E54(vParam0, 0, iParam3, iParam4))
	{
		if (func_91(vParam0, iParam3, iParam5, iParam6))
		{
			return true;
		}
	}
	return false;
}

bool func_91(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	float fVar0;
	var uVar1;
	var uVar8;

	fVar0 = SYSTEM::VDIST(vParam0, *iParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_107(Global_2405072.f_509, iParam3, &uVar1, &uVar8, iParam5, 1)) || iParam4 == 0)
		{
			if (!func_95(*iParam3, 1056964608 /* Float: 0.5f */))
			{
				if (!func_92(iParam3, 0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_92(int iParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	vVar1 = { *iParam0 };
	iVar4 = func_94(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411459[iVar4])
	{
		if (func_93(vVar1, &(Global_2410189[iVar4 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_79(&vVar1, Global_2410189[iVar4 /*141*/][iVar0 /*7*/], Global_2410189[iVar4 /*141*/][iVar0 /*7*/].f_3, Global_2410189[iVar4 /*141*/][iVar0 /*7*/].f_6, 1036831949 /* Float: 0.1f */, 0);
				*iParam0 = { vVar1 };
			}
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411459[8])
	{
		if (func_93(vVar1, &(Global_2410189[8 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_79(&vVar1, Global_2410189[8 /*141*/][iVar0 /*7*/], Global_2410189[8 /*141*/][iVar0 /*7*/].f_3, Global_2410189[8 /*141*/][iVar0 /*7*/].f_6, 1036831949 /* Float: 0.1f */, 0);
				*iParam0 = { vVar1 };
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_93(vector3 vParam0, var uParam3)
{
	return UNK_0x0399732A9EBC368E(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, true);
}

int func_94(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2411469[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411469[1])
	{
		if (Param0 < Global_2411473[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411469[2])
	{
		if (Param0 < Global_2411473[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411473[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411473[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

bool func_95(vector3 vParam0, int iParam3)
{
	int iVar0;

	if (func_104(UNK_0xD803B885F5E47A62(), 1, 0))
	{
		if (Global_4456448.f_91960 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_91960)
			{
				if (Global_4456448.f_91961[iVar0 /*107*/].f_7 != 0)
				{
					if (func_96(vParam0, Global_4456448.f_91961[iVar0 /*107*/], Global_4456448.f_91961[iVar0 /*107*/].f_6, Global_4456448.f_91961[iVar0 /*107*/].f_7, iParam3))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_78239 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_78239)
			{
				if (Global_4456448.f_78242[iVar0 /*266*/].f_15 != 0)
				{
					if (func_96(vParam0, Global_4456448.f_78242[iVar0 /*266*/], Global_4456448.f_78242[iVar0 /*266*/].f_3, Global_4456448.f_78242[iVar0 /*266*/].f_15, 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_124061 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_124061)
			{
				if (Global_4456448.f_124065[iVar0 /*325*/].f_12 != 0)
				{
					if (func_96(vParam0, Global_4456448.f_124065[iVar0 /*325*/], Global_4456448.f_124065[iVar0 /*325*/].f_3, Global_4456448.f_124065[iVar0 /*325*/].f_12, 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_268)
			{
				if (UNK_0xC844350D5D58C99A(Global_969031.f_233[iVar0]) && !UNK_0x437347B10A200C4B(Global_969031.f_233[iVar0], 0))
				{
					if (func_96(vParam0, UNK_0x68F4C0EC296D3901(Global_969031.f_233[iVar0], true), UNK_0xD9522BA9E27E1349(Global_969031.f_233[iVar0]), UNK_0x134B62B726CEC8E6(Global_969031.f_233[iVar0]), 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_266)
			{
				if (UNK_0xC844350D5D58C99A(Global_969031.f_119[iVar0]) && !UNK_0x437347B10A200C4B(Global_969031.f_119[iVar0], 0))
				{
					if (func_96(vParam0, UNK_0x68F4C0EC296D3901(Global_969031.f_119[iVar0], true), UNK_0xD9522BA9E27E1349(Global_969031.f_119[iVar0]), UNK_0x134B62B726CEC8E6(Global_969031.f_119[iVar0]), 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

bool func_96(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, int iParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;

	if (SYSTEM::VDIST(vParam0, vParam3) < func_103(bParam7, 1008981770 /* Float: 0.01f */))
	{
		func_97(vParam3, bParam6, bParam7, &vVar0, &vVar3, &bVar6, iParam8);
		if (UNK_0x0399732A9EBC368E(vParam0, vVar0, vVar3, bVar6, 0, true))
		{
			return true;
		}
	}
	return false;
}

void func_97(vector3 vParam0, bool bParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;

	vVar0 = { 0f, 1f, 0f };
	func_84(&vVar0, 0f, 0f, bParam3);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_98(bParam4, &vVar3, &vVar6, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	vVar9 = { vParam0 + vVar0 * FtoV((vVar6.y + fParam8)) };
	vVar9.f_2 = (vVar9.z - ((0.5f * UNK_0x755FF954DAE327E1((vVar6.z - vVar3.z))) + fParam8));
	vVar12 = { vParam0 - vVar0 * FtoV(((vVar3.y * -1f) + fParam8)) };
	vVar12.f_2 = (vVar12.z + ((0.5f * UNK_0x755FF954DAE327E1((vVar6.z - vVar3.z))) + fParam8));
	*uParam5 = { vVar9 };
	*iParam6 = { vVar12 };
	*bParam7 = UNK_0x755FF954DAE327E1((vVar6.x - vVar3.x));
}

void func_98(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;

	if (UNK_0x468C1AC3ABF95C57(bParam0))
	{
		UNK_0xA6B02C1DB14DDA13(bParam0, fParam1, fParam2);
	}
	else
	{
		iVar0 = func_101(bParam0);
		if (iVar0 != 0)
		{
			func_99(iVar0, fParam1, fParam2, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
			return;
		}
	}
	if (SYSTEM::VMAG(*fParam1) <= 0.01f || SYSTEM::VMAG(*fParam2) <= 0.01f)
	{
		*fParam1 = (0f - (fParam4 * 0.5f));
		*fParam2 = (0f + (fParam4 * 0.5f));
		fParam1->f_1 = (0f - (fParam3 * 0.5f));
		fParam2->f_1 = (0f + (fParam3 * 0.5f));
		fParam1->f_2 = (0f - (fParam5 * 0.5f));
		fParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_99(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;

	func_100(iParam0, &Global_1315812);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (UNK_0x468C1AC3ABF95C57(Global_1315812[iVar0]))
		{
			UNK_0xA6B02C1DB14DDA13(Global_1315812[iVar0], &(Global_1315816[iVar0 /*3*/]), &(Global_1315823[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1315816[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1315823[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315816[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315823[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315816[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315823[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315816[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315823[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315830[iVar0] = (Global_1315823[iVar0 /*3*/] - Global_1315816[iVar0 /*3*/]);
		Global_1315833[iVar0] = (Global_1315823[iVar0 /*3*/].f_1 - Global_1315816[iVar0 /*3*/].f_1);
		Global_1315836[iVar0] = (Global_1315823[iVar0 /*3*/].f_2 - Global_1315816[iVar0 /*3*/].f_2);
		if (Global_1315830[iVar0] > Global_1315839)
		{
			Global_1315839 = Global_1315830[iVar0];
		}
		if (Global_1315836[iVar0] > Global_1315840)
		{
			Global_1315840 = Global_1315836[iVar0];
		}
		iVar0++;
	}
	Global_1315841 = (Global_1315839 * -0.5f);
	Global_1315844 = (Global_1315839 * 0.5f);
	Global_1315841.f_1 = ((((0.5f * Global_1315833[0]) + Global_1315833[1]) + Global_1315812.f_3) * -1f);
	Global_1315844.f_1 = (0.5f * Global_1315833[0]);
	Global_1315841.f_2 = (Global_1315836[0] * -0.5f);
	Global_1315844.f_2 = (Global_1315836[0] * 0.5f);
	*fParam1 = { Global_1315841 };
	*fParam2 = { Global_1315844 };
}

void func_100(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("HAULER2");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		case 2:
			(*uParam1)[0] = joaat("PHANTOM3");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		case 3:
			(*uParam1)[0] = joaat("NIGHTSHARK");
			(*uParam1)[1] = joaat("TRAILERSMALL2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_101(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_102(iVar1) == bParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_102(int iParam0)
{
	int iVar0;

	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_103(bool bParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (bParam0 == 0)
	{
		return 5f;
	}
	func_98(bParam0, &vVar0, &vVar3, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	vVar6 = { vVar3 - vVar0 };
	fVar9 = (SYSTEM::SQRT(((((vVar6.x * 0.5f) * (vVar6.x * 0.5f)) + ((vVar6.y * 0.5f) * (vVar6.y * 0.5f))) + ((vVar6.z * 0.5f) * (vVar6.z * 0.5f)))) + fParam1);
	return fVar9;
}

bool func_104(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_105(bParam0))
		{
			return true;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[bParam0 /*876*/] == -1)
	{
		return false;
	}
	return true;
}

bool func_105(bool bParam0)
{
	return func_106(bParam0);
}

bool func_106(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_13.f_1, false);
}

bool func_107(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;

	if (func_114(vParam0))
	{
		if (func_77(iParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return true;
		}
	}
	if (func_109(iParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return true;
	}
	if (bParam7)
	{
		if (func_108(*iParam3, 1056964608 /* Float: 0.5f */))
		{
			return true;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *bParam4)
	{
		if (SYSTEM::VDIST(*iParam3, *(bParam4[iVar0 /*3*/])) < (*iParam5)[iVar0])
		{
			if (bParam6)
			{
				func_83(iParam3, *(bParam4[iVar0 /*3*/]), (*iParam5)[iVar0], 1036831949 /* Float: 0.1f */, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return true;
	}
	return false;
}

bool func_108(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(vParam0, Global_2405072.f_2728[iVar0 /*3*/]) < fParam3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_109(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;

	if (func_111(*iParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *iParam0 };
			func_78(&vVar2, &(Global_2405072.f_365[iVar0 /*12*/]), 1036831949 /* Float: 0.1f */, 0, bParam2);
			if (func_111(vVar2, &uVar1) || func_110(vVar2))
			{
				vVar2 = { *iParam0 };
				func_78(&vVar2, &(Global_2405072.f_365[iVar0 /*12*/]), 1036831949 /* Float: 0.1f */, 1, bParam2);
			}
			*iParam0 = { vVar2 };
		}
		return true;
	}
	return false;
}

bool func_110(vector3 vParam0)
{
	float fVar0;

	if (Global_2405072.f_590 > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_2405072.f_587);
		if (fVar0 < Global_2405072.f_590)
		{
			return true;
		}
	}
	return false;
}

bool func_111(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_113())
	{
		return false;
	}
	iVar1 = func_112();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405072.f_365[iVar0 /*12*/].f_9 == 1)
		{
			if (func_86(vParam0, &(Global_2405072.f_365[iVar0 /*12*/]), 1008981770 /* Float: 0.01f */, 0, 0))
			{
				*iParam3 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_112()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405072.f_365[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_113()
{
	return Global_1676377.f_474;
}

bool func_114(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;

	if (!Global_2405072.f_512 && !Global_2405072.f_513)
	{
		if (!Global_2405072.f_45.f_314)
		{
			if (!func_118(UNK_0xD803B885F5E47A62(), 1))
			{
				return true;
			}
			if (!func_117(vParam0, 1008981770 /* Float: 0.01f */))
			{
				if (!func_77(&vParam0, 0, 0, 0, 1))
				{
					return true;
				}
				else if (func_77(&vParam0, 0, 1, 0, 1))
				{
					return true;
				}
			}
			else
			{
				iVar0 = func_116(vParam0, 1008981770 /* Float: 0.01f */);
				if (iVar0 > -1)
				{
					vVar1 = { func_115(&(Global_2405072.f_45[iVar0 /*12*/])) };
					if (!func_77(&vVar1, 0, 0, 0, 1))
					{
						if (!func_77(&vParam0, 0, 0, 0, 1))
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

Vector3 func_115(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
	}
	return *uParam0;
}

int func_116(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0 /*12*/].f_9)
		{
			if (func_86(vParam0, &(Global_2405072.f_45[iVar0 /*12*/]), iParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_117(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0 /*12*/].f_9)
		{
			if (func_86(vParam0, &(Global_2405072.f_45[iVar0 /*12*/]), iParam3, 0, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_118(bool bParam0, bool bParam1)
{
	if (func_120() != 0)
	{
		return func_119(bParam0) != 0;
	}
	return func_104(bParam0, bParam1, 0);
}

int func_119(bool bParam0)
{
	if (func_6(bParam0, 0, 1))
	{
		return Global_2425662[bParam0 /*421*/].f_1;
	}
	return 0;
}

int func_120()
{
	return Global_30768;
}

bool func_121(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405072.f_2254 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_2254)
		{
			fVar3 = SYSTEM::VDIST(Global_2405072.f_2255[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*iParam3 = { Global_2405072.f_2255[iVar1 /*4*/] };
			return true;
		}
	}
	return false;
}

bool func_122(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, bool bParam10)
{
	func_123(&vParam3, &vParam6);
	if (((!vParam0.x >= vParam3.x || !vParam0.y >= vParam3.y) || !vParam0.x <= vParam6.x) || !vParam0.y <= vParam6.y)
	{
		return false;
	}
	if (bParam9 && bParam10)
	{
		return true;
	}
	else if (bParam9)
	{
		if (vParam0.z >= vParam3.z)
		{
			return true;
		}
	}
	else if (bParam10)
	{
		if (vParam0.z <= vParam6.z)
		{
			return true;
		}
	}
	else if (vParam0.z >= vParam3.z && vParam0.z <= vParam6.z)
	{
		return true;
	}
	return false;
}

void func_123(bool bParam0, var uParam1)
{
	var uVar0;

	if (*bParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *bParam0;
		*bParam0 = uVar0;
	}
	if (bParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = bParam0->f_1;
		bParam0->f_1 = uVar0;
	}
	if (bParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = bParam0->f_2;
		bParam0->f_2 = uVar0;
	}
}

bool func_124(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;
	vector3 vVar3;

	if (vParam0.x > vParam3.x)
	{
		vVar3.x = vParam0.x;
		vVar0.x = vParam3.x;
	}
	else
	{
		vVar3.x = vParam3.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam3.y)
	{
		vVar3.f_1 = vParam0.y;
		vVar0.f_1 = vParam3.y;
	}
	else
	{
		vVar3.f_1 = vParam3.y;
		vVar0.f_1 = vParam0.y;
	}
	if (vParam0.z > vParam3.z)
	{
		vVar3.f_2 = vParam0.z;
		vVar0.f_2 = vParam3.z;
	}
	else
	{
		vVar3.f_2 = vParam3.z;
		vVar0.f_2 = vParam0.z;
	}
	if (SYSTEM::VMAG(vVar3 - vVar0) > 100f)
	{
		return true;
	}
	if (fParam6 > 50f)
	{
		return true;
	}
	return false;
}

bool func_125(float fParam0)
{
	if (fParam0 > 50f)
	{
		return true;
	}
	return false;
}

bool func_126(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;

	if (Global_2405072.f_2483.f_1 == 0 && Global_2405072.f_2483 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (UNK_0xB1275034A6871D62(&(Global_2405072.f_2483.f_1)))
			{
				case 0:
					func_195(uParam1, iParam2);
					if (!Global_2405072.f_2483.f_2)
					{
						if (iParam2->f_7 && Global_2405072.f_552.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return true;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405072.f_2458 };
							}
							if (uParam1->f_5 && func_75(Global_2405072.f_486))
							{
								if (!Global_2405072.f_2483.f_5)
								{
									Global_2405072.f_2483.f_5 = 1;
								}
								else
								{
									func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, iParam2);
								}
							}
							else
							{
								func_76(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, iParam2);
							}
							uParam0->f_16[0] = UNK_0x79833B02DBD2A244(0f, 360f);
							return true;
						}
					}
					break;
				case 1:
					func_195(uParam1, iParam2);
					break;
				case 2:
					return false;
				case 3:
					return false;
			}
		}
		else if (UNK_0xC79C8A78EC708587())
		{
			if (!UNK_0xFA2A5CC35287E5B8())
			{
				if (UNK_0x4FC9A1459CD5C324())
				{
					func_195(uParam1, iParam2);
					Global_2405072.f_2483.f_1 = UNK_0xEAD4FBE79458D592();
				}
				else
				{
					return false;
				}
			}
			else
			{
				UNK_0x0FB2CEE58DA4A6EE();
				func_195(uParam1, iParam2);
				if (!Global_2405072.f_2483.f_2)
				{
					Global_2405072.f_2483.f_5 = 1;
					return true;
				}
			}
		}
		else
		{
			return false;
		}
	}
	if (uParam1->f_5)
	{
		func_192(Global_2405072.f_552, &(Global_2405072.f_2483.f_57), &(Global_2405072.f_2483.f_90));
	}
	if (iParam2->f_7 && !Global_2405072.f_2483.f_4)
	{
		Global_2405072.f_2483.f_4 = 1;
		func_134(*uParam1, uParam1->f_3, uParam1, iParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2405072.f_2483.f_1 > 0 || Global_2405072.f_2483 > 0)
	{
		if (uParam1->f_5 || UNK_0xC79C8A78EC708587())
		{
			iVar4 = 0;
			while (iVar4 < Global_2405072.f_2483.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2405072.f_2483.f_3)
					{
						iVar4 = Global_2405072.f_2483.f_3 + 1;
					}
					if (iVar4 > (Global_2405072.f_2483.f_1 - 1))
					{
						iVar4 = (Global_2405072.f_2483.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						UNK_0xE0463990929F9949(iVar4, &vVar0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						UNK_0xB2C5D6F8163D4A45(iVar4, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = UNK_0x00C66A3E05649B75(iVar4);
					}
					else
					{
						UNK_0xD38A4489EFBF773A(iVar4, &iVar5);
					}
					func_134(vVar0, fVar3, uParam1, iParam2, 0, iVar5);
					iVar6++;
					Global_2405072.f_2483.f_3 = iVar4;
				}
				else
				{
					return false;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2405072.f_2483.f_1;
		}
		if (Global_2405072.f_2483.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2405072.f_2880)
			{
				func_128(&(Global_2405072.f_2483.f_6[0 /*10*/]), &(Global_2405072.f_2483.f_6[1 /*10*/]), &(Global_2405072.f_2483.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_75(Global_2405072.f_486))
			{
				if (Global_2405072.f_2483.f_2)
				{
					func_74(uParam0, &(Global_2405072.f_2483.f_6));
					func_127(*(uParam0[0 /*3*/]));
					return true;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405072.f_2458 };
					func_76(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, iParam2);
					uParam0->f_16[0] = UNK_0x79833B02DBD2A244(0f, 360f);
					func_127(*(uParam0[0 /*3*/]));
					return true;
				}
			}
			else if (Global_2405072.f_2483.f_2)
			{
				func_74(uParam0, &(Global_2405072.f_2483.f_6));
				func_127(*(uParam0[0 /*3*/]));
				return true;
			}
			else if (uParam1->f_5)
			{
				iVar4 = UNK_0x09AC81E49EA267F7(false, Global_2405072.f_2483.f_1);
				UNK_0xE0463990929F9949(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_92(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_127(*(uParam0[0 /*3*/]));
					return true;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405072.f_2458 };
					func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, iParam2);
					uParam0->f_16[0] = UNK_0x79833B02DBD2A244(0f, 360f);
					func_127(*(uParam0[0 /*3*/]));
					return true;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405072.f_2458 };
				func_76(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, iParam2);
				uParam0->f_16[0] = UNK_0x79833B02DBD2A244(0f, 360f);
				func_127(*(uParam0[0 /*3*/]));
				return true;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405072.f_2458 };
		if (uParam1->f_5 && func_75(Global_2405072.f_486))
		{
			if (!Global_2405072.f_2483.f_5)
			{
				Global_2405072.f_2483.f_5 = 1;
			}
			else
			{
				func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, iParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_76(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, iParam2);
		}
		uParam0->f_16[0] = UNK_0x79833B02DBD2A244(0f, 360f);
		func_127(*(uParam0[0 /*3*/]));
		return true;
	}
	return false;
}

void func_127(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405072.f_2617[(3 - iVar0) /*3*/] = { Global_2405072.f_2617[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405072.f_2617[0 /*3*/] = { vParam0 };
}

void func_128(var uParam0, var uParam1, var uParam2)
{
	if (func_75(Global_2405072.f_486) && func_133() < 4096)
	{
		func_132(uParam0, 0f);
		func_132(uParam1, uParam0->f_2);
		func_132(uParam2, uParam1->f_2);
	}
	else
	{
		func_131(uParam0);
		func_130(uParam2, uParam0->f_4);
		func_129(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_129(var uParam0, vector3 vParam1, vector3 vParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;

	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2408006[iVar0 /*10*/].f_4, vParam1);
			fVar3 = SYSTEM::VDIST(Global_2408006[iVar0 /*10*/].f_4, vParam4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2408006[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2408006[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_130(var uParam0, vector3 vParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;

	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2408006[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_2408006[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2408006[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_131(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;

	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > 0)
		{
			if (Global_2408006[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2408006[iVar0 /*10*/].f_1;
				Var2 = { Global_2408006[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_132(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;

	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > 0)
		{
			if (Global_2408006[iVar0 /*10*/].f_2 < fVar1 && Global_2408006[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2408006[iVar0 /*10*/].f_2;
				Var2 = { Global_2408006[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_133()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2408006[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_134(vector3 vParam0, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar15;
	int iVar16;
	vector3 vVar17;
	vector3 vVar20;
	var uVar23;
	int iVar24;
	struct<10> Var25;
	bool bVar35;
	bool bVar36;

	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (iParam4->f_5)
	{
		if (Global_2405072.f_486 == 1)
		{
			if (UNK_0x755FF954DAE327E1((Global_2405072.f_509.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (iParam4->f_5)
	{
		if (func_189(UNK_0xD803B885F5E47A62()))
		{
			if (iParam7 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (iParam4->f_5 && iParam4->f_6)
	{
		if (!func_188(vParam0, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (iParam4->f_5)
	{
		if (!UNK_0xE5DF6192D54A65A1(UNK_0x16F2683693E537C9(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!UNK_0xE5DF6192D54A65A1(UNK_0x16F2683693E537C9(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (iParam4->f_5)
	{
		if (!func_187(vParam0, iParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar15 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(iParam5->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(vParam0, iParam5->f_13[iVar11 /*3*/]) > iParam5->f_20[iVar11])
			{
				bVar15 = false;
			}
		}
		iVar11++;
	}
	if (bVar15)
	{
		if ((SYSTEM::VMAG(iParam5->f_23) > 0f && SYSTEM::VMAG(iParam5->f_26) > 0f) && iParam5->f_29 > 0f)
		{
			if (UNK_0x0399732A9EBC368E(vParam0, iParam5->f_23, iParam5->f_26, iParam5->f_29, 0, true))
			{
				bVar15 = false;
			}
		}
	}
	if (bVar15)
	{
		iVar8 += 256;
	}
	if (iParam4->f_5)
	{
		if (func_181(vParam0, iParam3, iParam4->f_15, func_186(1), iParam4->f_16, 0, 1123024896 /* Float: 120f */, 1101004800 /* Float: 20f */, 1101004800 /* Float: 20f */, 1084227584 /* Float: 5f */, 1092616192 /* Float: 10f */, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405072.f_3;
		}
	}
	else if (!func_178(vParam0, 25f, UNK_0xD803B885F5E47A62(), 1, 1))
	{
		if (iParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_174(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_174(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (iParam4->f_5)
	{
		if (!Global_2405072.f_693)
		{
			vVar12 = { Global_2405072.f_509 };
			if (Global_2405072.f_486 == 26)
			{
				vVar12 = { Global_2405072.f_552.f_18 };
			}
			if (!func_108(vParam0, 0.5f))
			{
				if (func_114(vVar12))
				{
					if (!func_77(&vParam0, 0, 0, 0, 1) && !func_173(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_173(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_172(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (iParam4->f_5)
	{
		if (!(func_171(UNK_0xD803B885F5E47A62()) && func_170(UNK_0xD803B885F5E47A62())))
		{
			if (!func_169(&vParam0, &(Global_2405072.f_2483.f_90), 0, 1065353216 /* Float: 1f */))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (iParam4->f_5)
	{
		if (!func_170(UNK_0xD803B885F5E47A62()))
		{
			if (!func_168(vParam0, &(Global_2405072.f_2483.f_57), &(Global_2405072.f_2483.f_90), 1073741824 /* Float: 2f */))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_167(vParam0))
	{
		if (iParam4->f_5)
		{
			if (func_75(Global_2405072.f_486))
			{
				if (func_117(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (iParam4->f_5)
	{
		if (func_166(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405072.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (iParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (iParam4->f_5)
	{
		if (!Global_2405072.f_693)
		{
			if (!func_109(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_92(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar16 = func_116(vParam0, 1008981770 /* Float: 0.01f */);
		if (iVar16 > -1)
		{
			func_165(vParam0, &vVar17, &vVar20, &uVar23);
			if (!func_160(&(Global_2405072.f_45[iVar16 /*12*/]), vVar17, vVar20, uVar23))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_95(vParam0, 1056964608 /* Float: 0.5f */))
	{
		iVar8 = -1;
	}
	if (iParam5->f_33)
	{
		if (UNK_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (iParam5->f_34)
	{
		if (UNK_0x558ADED8B93EA0F6(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (iParam4->f_5)
	{
	}
	else if (func_159(vParam0, 1, 0, iParam4->f_15, 1060320051 /* Float: 0.7f */, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1088421888 /* Float: 7f */))
	{
		iVar8 = 0;
	}
	Var25.f_2 = 1176256410;
	bVar35 = false;
	bVar36 = false;
	if (Global_2405072.f_2880 && iParam4->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam6)
			{
				iParam5->f_4 = 0;
				iVar4 = 0;
			}
			else
			{
				iVar4 = 1;
			}
			if (iParam4->f_21)
			{
				fVar0 = func_151(vParam0, iParam4->f_18, iParam5->f_6, iParam5->f_4, iVar4, iVar10, &(Var25.f_8));
			}
			else
			{
				fVar0 = func_151(vParam0, Global_2405072.f_2458, iParam5->f_6, iParam5->f_4, iVar4, iVar10, &(Var25.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_75(Global_2405072.f_486) && iVar8 < 4096)
			{
				Var25.f_2 = func_149(vParam0);
			}
			fVar7 = func_140(vParam0, 1, 0, 0, 0, 0);
			Var25.f_4 = { vParam0 };
			Var25.f_7 = iParam3;
			Var25 = iVar8;
			Var25.f_1 = fVar0;
			Var25.f_9 = fVar7;
			func_139(Var25);
			Global_2405072.f_2483.f_2 = 1;
		}
	}
	else
	{
		iVar24 = 0;
		while (iVar24 < 5)
		{
			if (iVar8 >= Global_2405072.f_2483.f_6[iVar24 /*10*/])
			{
				if (iParam4->f_5)
				{
					if (!bVar35)
					{
						if (bParam6)
						{
							iParam5->f_4 = 0;
							iVar4 = 0;
						}
						else
						{
							iVar4 = 1;
						}
						if (iParam4->f_21)
						{
							fVar0 = func_151(vParam0, iParam4->f_18, iParam5->f_6, iParam5->f_4, iVar4, iVar10, &(Var25.f_8));
						}
						else
						{
							fVar0 = func_151(vParam0, Global_2405072.f_2458, iParam5->f_6, iParam5->f_4, iVar4, iVar10, &(Var25.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar35 = true;
					}
					if ((func_75(Global_2405072.f_486) && iVar8 == Global_2405072.f_2483.f_6[iVar24 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar36)
						{
							fVar2 = func_149(vParam0);
							bVar36 = true;
						}
						if (fVar2 < Global_2405072.f_2483.f_6[iVar24 /*10*/].f_2)
						{
							Var25.f_4 = { vParam0 };
							Var25.f_7 = iParam3;
							Var25 = iVar8;
							Var25.f_1 = fVar0;
							Var25.f_2 = fVar2;
							func_138(Var25, iVar24);
							Global_2405072.f_2483.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405072.f_2483.f_6[iVar24 /*10*/] || (iVar8 == Global_2405072.f_2483.f_6[iVar24 /*10*/] && fVar0 > Global_2405072.f_2483.f_6[iVar24 /*10*/].f_1))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = iParam3;
						Var25 = iVar8;
						Var25.f_1 = fVar0;
						func_138(Var25, iVar24);
						Global_2405072.f_2483.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar35)
					{
						if (iParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_136(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_140(vParam0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_135(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_135(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar35 = true;
					}
					if (iVar8 > Global_2405072.f_2483.f_6[iVar24 /*10*/] || (iVar8 == Global_2405072.f_2483.f_6[iVar24 /*10*/] && fVar3 > Global_2405072.f_2483.f_6[iVar24 /*10*/].f_3))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = iParam3;
						Var25 = iVar8;
						Var25.f_3 = fVar3;
						func_138(Var25, iVar24);
						Global_2405072.f_2483.f_2 = 1;
						return;
					}
				}
			}
			iVar24++;
		}
	}
}

float func_135(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;

	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_136(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;

	bVar2 = false;
	fVar3 = 1E+13f;
	if (bParam4 && !bParam6)
	{
		if (func_6(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			if (!UNK_0x757EF87A33649210())
			{
				if (UNK_0x8E28E832BEAC3DCE(vParam0, bParam3))
				{
					fVar4 = SYSTEM::VDIST2(vParam0, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_6(bVar1, 1, 1))
		{
			if (!func_200(bVar1, 0) && UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
			{
				if (bParam4 == 1 || (bParam4 == 0 && bVar1 != UNK_0xD803B885F5E47A62()))
				{
					if (func_137(bVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((bParam5 || (bParam5 == 0 && UNK_0x08067D4957B73C02(bVar1) != UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()))) || UNK_0x08067D4957B73C02(bVar1) == -1)
							{
								if (UNK_0xAA451564CBFD3413(bVar1, vParam0, bParam3))
								{
									fVar4 = SYSTEM::VDIST2(vParam0, UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bVar1), false));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (UNK_0x08067D4957B73C02(bVar1) != iParam7 || UNK_0x08067D4957B73C02(bVar1) == -1)
						{
							if (UNK_0xAA451564CBFD3413(bVar1, vParam0, bParam3))
							{
								fVar4 = SYSTEM::VDIST2(vParam0, UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bVar1), false));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

bool func_137(bool bParam0)
{
	if (UNK_0x62FA787159F264AC(UNK_0x9539D44F3E4492F6(bParam0)) || Global_2425662[bParam0 /*421*/].f_245)
	{
		return true;
	}
	return false;
}

void func_138(struct<10> Param0, int iParam10)
{
	struct<10> Var0;

	Var0.f_2 = 1176256410;
	Var0 = { Global_2405072.f_2483.f_6[iParam10 /*10*/] };
	Global_2405072.f_2483.f_6[iParam10 /*10*/] = { Param0 };
	if (iParam10 < 4)
	{
		func_138(Var0, iParam10 + 1);
	}
}

void func_139(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	float fVar12;
	int iVar13;

	Var1.f_2 = 1176256410;
	iVar11 = func_133();
	if (Param0 > iVar11)
	{
		iVar11 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] < iVar11)
		{
			Global_2408006[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar11)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] == 0)
		{
			Global_2408006[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar12 = 9999.9f;
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > 0)
		{
			if (Global_2408006[iVar0 /*10*/].f_1 < fVar12)
			{
				fVar12 = Global_2408006[iVar0 /*10*/].f_1;
				iVar13 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar13 > -1)
	{
		Global_2408006[iVar13 /*10*/] = { Param0 };
	}
}

float func_140(vector3 vParam0, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	bool bVar11;

	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar11 = iVar0;
		if (func_6(bVar11, 1, 1) || (iParam7 == 1 && func_6(bVar11, 0, 0)))
		{
			if (!bVar11 == UNK_0xD803B885F5E47A62() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_141(bVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (UNK_0x08067D4957B73C02(bVar11) == UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()))
					{
						if (!UNK_0x08067D4957B73C02(bVar11) == -1 || !func_118(UNK_0xD803B885F5E47A62(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar11) || !bParam6)
					{
						if (func_137(bVar11))
						{
							vVar5 = { func_8(bVar11) };
							if (!bVar11 == UNK_0xD803B885F5E47A62())
							{
								vVar8 = { UNK_0x088E3BBDA11FE175(UNK_0x9539D44F3E4492F6(bVar11)) };
							}
							else
							{
								vVar8 = { vVar5 };
							}
							if (!bParam6)
							{
								if (vVar5.z < -100f)
								{
									vVar5.f_2 = vParam0.z;
								}
								if (vVar8.z < -100f)
								{
									vVar8.f_2 = vParam0.z;
								}
							}
							fVar1 = UNK_0x0EB28750412C3A5A(vParam0, vVar5, 1);
							fVar2 = UNK_0x0EB28750412C3A5A(vParam0, vVar8, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

bool func_141(bool bParam0)
{
	if (func_6(bParam0, 0, 1))
	{
		if (!func_147(bParam0))
		{
			if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bParam0))
			{
				if (!UNK_0x08067D4957B73C02(bParam0) == UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()))
				{
					if (func_104(UNK_0xD803B885F5E47A62(), 1, 0))
					{
						if (!func_146(UNK_0x08067D4957B73C02(bParam0), UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()), 0))
						{
							return true;
						}
					}
					else
					{
						return true;
					}
				}
				else if (UNK_0x08067D4957B73C02(bParam0) == -1 && UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1)
				{
					if (!func_104(UNK_0xD803B885F5E47A62(), 1, 0))
					{
						if (!func_142(bParam0))
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
		}
	}
	return false;
}

bool func_142(bool bParam0)
{
	if (func_145(UNK_0xD803B885F5E47A62(), bParam0))
	{
		return true;
	}
	Global_2513218 = { func_144(bParam0) };
	if (UNK_0x04A104F429E6CBB0(&Global_2513218))
	{
		return true;
	}
	if (func_143(UNK_0xD803B885F5E47A62(), bParam0))
	{
		return true;
	}
	return false;
}

bool func_143(bool bParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = func_12(bParam0);
	if (!bVar0 == func_13())
	{
		if (bVar0 == func_12(bParam1))
		{
			return true;
		}
	}
	return false;
}

struct<13> func_144(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

bool func_145(bool bParam0, bool bParam1)
{
	if (UNK_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_144(bParam0) };
		Global_2513231 = { func_144(bParam1) };
		if (UNK_0xF2EC2A39FF9E838D(&Global_2513218))
		{
			if (UNK_0xF2EC2A39FF9E838D(&Global_2513231))
			{
				UNK_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218);
				UNK_0xD9DA83C40D038174(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_146(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return true;
		}
		return false;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return true;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, false);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, true);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 2);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 3);
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 4);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 5);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 6);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 7);
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 8);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 9);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 10);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 11);
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 12);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 13);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 14);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 15);
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_147(bool bParam0)
{
	if (func_200(bParam0, 0))
	{
		return true;
	}
	if (func_148())
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

bool func_148()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

float func_149(vector3 vParam0)
{
	var uVar0;

	return func_150(vParam0, &(Global_2405072.f_45), &uVar0);
}

float func_150(vector3 vParam0, var uParam3, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if ((uParam3[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam3[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam3[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405072.f_2726) * (uParam3[iVar0 /*12*/])->f_8)));
					break;
				case 1:
				case 2:
					if (vParam0.x < (*uParam3)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam3[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam3[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam3[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam3[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam3[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam3[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam3[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam3[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_151(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;

	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam9) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam6)
	{
		fVar0 = func_135(SYSTEM::VDIST(vParam0, vParam3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_140(vParam0, 1, 0, 0, 1, 0);
	fVar0 = func_135(fVar4, 0f, func_158(), func_156(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_154(vParam0);
	fVar0 = func_135(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1 && !func_118(UNK_0xD803B885F5E47A62(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_153(vParam0, UNK_0xD803B885F5E47A62(), 0);
	fVar0 = func_135(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_152(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_135(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_135(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_135(SYSTEM::VDIST(Global_2405072.f_509, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

bool func_152(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	var uVar5;

	iVar3 = UNK_0x8529439EA7EEBA65(vParam0, 1, &uVar5, &uVar4, true, 3f, false);
	if (UNK_0x5DD62183BBF151CD(iVar3))
	{
		UNK_0x8502D8EBA9E78216(iVar3, &vVar0);
		*fParam3 = SYSTEM::VDIST(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*fParam4 = UNK_0x755FF954DAE327E1((vParam0.z - vVar0.z));
		return true;
	}
	return false;
}

float func_153(vector3 vParam0, bool bParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;

	fVar0 = 999999.9f;
	if (func_6(bParam3, 0, 1))
	{
		bVar2 = false;
		while (bVar2 < 32)
		{
			if (!bParam3 == bVar2 || iParam4 == 1)
			{
				bVar3 = bVar2;
				if (func_6(bVar3, 0, 1))
				{
					if (UNK_0x08067D4957B73C02(bVar3) != UNK_0x08067D4957B73C02(bParam3) || (UNK_0x08067D4957B73C02(bVar3) == -1 && UNK_0x08067D4957B73C02(bParam3) == -1))
					{
						if (Global_2417897.f_261[bVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_2417897.f_131[bVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			bVar2++;
		}
	}
	return fVar0;
}

float func_154(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar6[32];
	int iVar39;

	iVar39 = UNK_0x263615A674FCA6E9(UNK_0x16F2683693E537C9(), &uVar6, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (UNK_0xC844350D5D58C99A(uVar6[iVar2]))
		{
			if (!UNK_0x437347B10A200C4B(uVar6[iVar2], 0))
			{
				if (func_155(uVar6[iVar2]))
				{
					vVar3 = { UNK_0x68F4C0EC296D3901(uVar6[iVar2], true) };
					fVar1 = UNK_0x0EB28750412C3A5A(vParam0, vVar3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2405072.f_2925)
	{
		if (Global_969031.f_267 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_969031.f_267)
			{
				if (UNK_0xC844350D5D58C99A(Global_969031.f_152[iVar2]))
				{
					if (!UNK_0x437347B10A200C4B(Global_969031.f_152[iVar2], 0))
					{
						if (func_155(Global_969031.f_152[iVar2]))
						{
							vVar3 = { UNK_0x68F4C0EC296D3901(Global_969031.f_152[iVar2], true) };
							fVar1 = UNK_0x0EB28750412C3A5A(vParam0, vVar3, 1);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

bool func_155(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = UNK_0xD09DF7101876AFB8(bParam0);
	switch (UNK_0x256517DE1B6755D4(bVar0, joaat("PLAYER")))
	{
		case 3:
		case 5:
			return true;
	}
	if (UNK_0x1C43D178459D5730(Global_1574967[UNK_0xD803B885F5E47A62()]))
	{
		switch (UNK_0x256517DE1B6755D4(bVar0, Global_1574967[UNK_0xD803B885F5E47A62()]))
		{
			case 3:
			case 5:
				return true;
		}
	}
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 0)
	{
		iVar1 = UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (UNK_0x1C43D178459D5730(Global_1574677[iVar1]))
			{
				switch (UNK_0x256517DE1B6755D4(bVar0, Global_1574677[iVar1]))
				{
					case 3:
					case 5:
						return true;
				}
			}
		}
	}
	return false;
}

float func_156()
{
	if (func_157())
	{
		if ((UNK_0xC41A9202669A24C4(Global_2405072.f_45.f_67) || UNK_0xAFB8495D36825275(Global_2405072.f_45.f_67)) || Global_2405072.f_45.f_67 == joaat("RHINO"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

bool func_157()
{
	if (Global_2405072.f_45.f_65 && !Global_2405072.f_45.f_301)
	{
		if (!func_147(UNK_0xD803B885F5E47A62()))
		{
			return true;
		}
	}
	return false;
}

float func_158()
{
	if (func_157())
	{
		if ((UNK_0xC41A9202669A24C4(Global_2405072.f_45.f_67) || UNK_0xAFB8495D36825275(Global_2405072.f_45.f_67)) || Global_2405072.f_45.f_67 == joaat("RHINO"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

bool func_159(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	bool bVar0;

	bVar0 = iParam6;
	if (bParam5)
	{
		bVar0 = bParam7;
	}
	if ((((bParam7 > 0f && UNK_0x558ADED8B93EA0F6(vParam0, bParam7)) || (bVar0 > 0f && UNK_0xEA19D5D9230DBB67(vParam0, bVar0))) || ((iParam4 == 1 && bParam8 > 0f) && UNK_0x9DD97B5335E52CB9(vParam0, bParam8, 0))) || ((iParam3 == 1 && bParam9 > 0f) && UNK_0x9DD97B5335E52CB9(vParam0, bParam9, 1)))
	{
		return true;
	}
	return false;
}

bool func_160(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_164(*uParam0, uParam0->f_6, vParam1, vParam4, uParam7))
			{
				return true;
			}
			break;
		case 1:
			if (func_163(*uParam0, uParam0->f_3, vParam1, vParam4, uParam7))
			{
				return true;
			}
			break;
		case 2:
			if (func_161(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam4, uParam7))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_161(vector3 vParam0, vector3 vParam3, var uParam6, vector3 vParam7, vector3 vParam10, bool bParam13)
{
	vector3 vVar0[8];
	int iVar25;

	func_162(vParam0, vParam3, uParam6, &vVar0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!UNK_0x0399732A9EBC368E(vVar0[iVar25 /*3*/], vParam7, vParam10, bParam13, 0, true))
		{
			return false;
		}
		iVar25++;
	}
	return true;
}

void func_162(vector3 vParam0, vector3 vParam3, float fParam6, var uParam7)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;

	if (vParam0.z == vParam3.z)
	{
		vParam3.f_2 = (vParam3.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam3 };
	vVar3 = { func_81(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar3 = { vVar3 / FtoV(SYSTEM::VMAG(vVar3)) };
	vVar3 = { vVar3 * FtoV((fParam6 * 0.5f)) };
	if (vParam0.z > vParam3.z)
	{
		fVar6 = vParam3.z;
		fVar7 = vParam0.z;
	}
	else
	{
		fVar6 = vParam0.z;
		fVar7 = vParam3.z;
	}
	*(uParam7[0 /*3*/]) = { Vector(fVar6, vParam0.y, vParam0.x) + vVar3 };
	*(uParam7[1 /*3*/]) = { Vector(fVar6, vParam0.y, vParam0.x) - vVar3 };
	*(uParam7[2 /*3*/]) = { Vector(fVar7, vParam0.y, vParam0.x) - vVar3 };
	*(uParam7[3 /*3*/]) = { Vector(fVar7, vParam0.y, vParam0.x) + vVar3 };
	*(uParam7[4 /*3*/]) = { Vector(fVar6, vParam3.y, vParam3.x) + vVar3 };
	*(uParam7[5 /*3*/]) = { Vector(fVar6, vParam3.y, vParam3.x) - vVar3 };
	*(uParam7[6 /*3*/]) = { Vector(fVar7, vParam3.y, vParam3.x) - vVar3 };
	*(uParam7[7 /*3*/]) = { Vector(fVar7, vParam3.y, vParam3.x) + vVar3 };
}

bool func_163(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, bool bParam12)
{
	vector3 vVar0[8];
	int iVar25;

	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam3.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam3.y, vParam3.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam3.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam3.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam3.x, vParam0.y, vParam3.z };
	vVar0[6 /*3*/] = { vParam3.x, vParam3.y, vParam3.z };
	vVar0[7 /*3*/] = { vParam3.x, vParam3.y, vParam0.z };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!UNK_0x0399732A9EBC368E(vVar0[iVar25 /*3*/], vParam6, vParam9, bParam12, 0, true))
		{
			return false;
		}
		iVar25++;
	}
	return true;
}

bool func_164(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, bool bParam10)
{
	vector3 vVar0[4];
	int iVar13;

	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam3, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam3), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam3) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!UNK_0x0399732A9EBC368E(vVar0[iVar13 /*3*/], vParam4, vParam7, bParam10, 0, true))
		{
			return false;
		}
		iVar13++;
	}
	return true;
}

void func_165(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	vVar1 = { vParam0 };
	iVar4 = func_94(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411459[iVar4])
	{
		if (func_93(vVar1, &(Global_2410189[iVar4 /*141*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410189[iVar4 /*141*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410189[iVar4 /*141*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410189[iVar4 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411459[8])
	{
		if (func_93(vVar1, &(Global_2410189[8 /*141*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410189[8 /*141*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410189[8 /*141*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410189[8 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

bool func_166(vector3 vParam0)
{
	int iVar0;
	int iVar1;

	if (Global_2405072.f_45.f_55)
	{
		if (UNK_0x31609A585163CBAC(Global_2405072.f_45.f_56))
		{
			if (!UNK_0xD1BF3090E1F8300E(vParam0))
			{
				iVar0 = UNK_0xFBD08BECC9B87937(vParam0);
				if (UNK_0x31609A585163CBAC(iVar0))
				{
					iVar1 = UNK_0x7C3DA83DB15FFBEB(iVar0);
					if (!iVar1 == Global_2405072.f_45.f_57)
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
		}
	}
	return true;
}

bool func_167(vector3 vParam0)
{
	switch (Global_2405072.f_2479)
	{
		case 0:
			return func_203(vParam0, Global_2405072.f_2458, Global_2405072.f_2461, 0, 0);
		case 1:
			return func_122(vParam0, Global_2405072.f_2472, Global_2405072.f_2475, 0, 0);
		case 2:
			return UNK_0x0399732A9EBC368E(vParam0, Global_2405072.f_2472, Global_2405072.f_2475, Global_2405072.f_2478, 0, true);
	}
	return false;
}

bool func_168(vector3 vParam0, int iParam3, var uParam4, float fParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;

	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *iParam3)
	{
		fVar0 = ((iParam3[iVar1 /*4*/])->f_3 + fParam5);
		if (SYSTEM::VDIST(*(iParam3[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return true;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar5 = { 0f, 0f, 0f };
	bVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		vVar2 = { *(uParam4[iVar1 /*10*/]) };
		vVar5 = { (uParam4[iVar1 /*10*/])->f_3 };
		bVar8 = (uParam4[iVar1 /*10*/])->f_6;
		if (UNK_0x0399732A9EBC368E(vParam0, vVar2, vVar5, bVar8, 0, true))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_169(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_83(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949 /* Float: 0.1f */, 0, 0);
				*uParam0 = { vVar1 };
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_170(bool bParam0)
{
	switch (func_120())
	{
		case 0:
			if (!func_28(bParam0))
			{
				if (Global_1590535[bParam0 /*876*/] == 0)
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_171(bool bParam0)
{
	if (func_104(bParam0, 1, 0))
	{
		if (Global_1590535[bParam0 /*876*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_172(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (SYSTEM::VDIST2(Global_2405072.f_2617[iVar0 /*3*/], vParam0) < (fParam3 * fParam3))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_173(var uParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar4;

	if (func_110(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar4 = UNK_0x79833B02DBD2A244(0.01f, 360f);
			func_83(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949 /* Float: 0.1f */, 0, fVar4);
			if (func_111(vVar1, &uVar0) || func_110(vVar1))
			{
				vVar1 = { *uParam0 };
				func_83(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949 /* Float: 0.1f */, 1, fVar4);
			}
			*uParam0 = { vVar1 };
		}
	}
	return false;
}

bool func_174(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (bParam4 && !bParam7)
	{
		if (func_6(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			if (!UNK_0x757EF87A33649210())
			{
				bVar2 = bParam6;
				if (bParam9 > 0f)
				{
					bVar2 = bParam9;
				}
				if (UNK_0x0EB28750412C3A5A(func_175(UNK_0xD803B885F5E47A62()), vParam0, 1) <= (bVar2 + bParam3))
				{
					if (UNK_0x8E28E832BEAC3DCE(vParam0, bParam3))
					{
						return true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_6(bVar1, 1, 1))
		{
			if (!func_200(bVar1, 0) && UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
			{
				if (bParam4 == 1 || (bParam4 == 0 && bVar1 != UNK_0xD803B885F5E47A62()))
				{
					if ((func_137(bVar1) || !bParam10) && !Global_2425662[bVar1 /*421*/].f_259)
					{
						bVar2 = bParam6;
						if (bParam9 > 0f)
						{
							if (!UNK_0x08067D4957B73C02(bVar1) == -1)
							{
								if (UNK_0x08067D4957B73C02(bVar1) == UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()))
								{
									bVar2 = bParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((bParam5 || (bParam5 == 0 && UNK_0x08067D4957B73C02(bVar1) != UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()))) || UNK_0x08067D4957B73C02(bVar1) == -1)
							{
								if (UNK_0x0EB28750412C3A5A(func_175(bVar1), vParam0, 1) <= (bVar2 + bParam3))
								{
									if (UNK_0xAA451564CBFD3413(bVar1, vParam0, bParam3))
									{
										return true;
									}
								}
							}
						}
						else if (UNK_0x08067D4957B73C02(bVar1) != bParam8 || UNK_0x08067D4957B73C02(bVar1) == -1)
						{
							if (UNK_0x0EB28750412C3A5A(func_175(bVar1), vParam0, 1) <= (bVar2 + bParam3))
							{
								if (UNK_0xAA451564CBFD3413(bVar1, vParam0, bParam3))
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

Vector3 func_175(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if ((func_177() && Global_1590535[bVar0 /*876*/].f_847) && !func_176(Global_1590535[bVar0 /*876*/].f_848))
	{
		return Global_1590535[bVar0 /*876*/].f_848;
	}
	return func_8(bParam0);
}

bool func_176(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

var func_177()
{
	return Global_2450632.f_17;
}

bool func_178(vector3 vParam0, float fParam3, int iParam4, float fParam5, int iParam6)
{
	if (func_180(vParam0, fParam3, iParam4, fParam5, 0) || func_179(vParam0, iParam4, iParam6))
	{
		return true;
	}
	return false;
}

int func_179(vector3 vParam0, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (!bParam3 == bVar0 || iParam4 == 1)
		{
			bVar2 = bVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_96(vParam0, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949 /* Float: 0.1f */))
					{
						if (func_6(bVar2, 0, 1) && func_6(bParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		bVar0++;
	}
	return 0;
}

int func_180(vector3 vParam0, float fParam3, bool bParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (!bParam4 == bVar0 || iParam5 == 1)
		{
			bVar1 = bVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_6(bVar1, 0, 1) && func_6(bParam4, 0, 1))
				{
					if (UNK_0x08067D4957B73C02(bVar1) == UNK_0x08067D4957B73C02(bParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_6(bVar1, 0, 1) && func_6(bParam4, 0, 1))
				{
					if (Global_2417897.f_261[bVar0])
					{
						if (SYSTEM::VDIST(Global_2417897.f_131[bVar0 /*3*/], vParam0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_8(bVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417897.f_261[bVar0])
				{
					if (SYSTEM::VDIST(Global_2417897.f_131[bVar0 /*3*/], vParam0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_6(bVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_8(bVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool func_181(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, int iParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2405072.f_3 = 0;
	if (!func_178(vParam0, 0.5f, UNK_0xD803B885F5E47A62(), 0, 0))
	{
		Global_2405072.f_3++;
		if (bParam5)
		{
			if (func_231(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, fParam6, bParam7, bParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
				if (!func_185(vParam0, iParam12))
				{
					Global_2405072.f_3++;
					if (!func_95(vParam0, 1056964608 /* Float: 0.5f */))
					{
						Global_2405072.f_3++;
						return true;
					}
				}
			}
			else
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_231(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, fParam6, bParam7, bParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
				if (!func_185(vParam0, iParam12))
				{
					Global_2405072.f_3++;
					if (!func_182(vParam0, bParam3, iParam9, bParam10, 1084227584 /* Float: 5f */))
					{
						Global_2405072.f_3++;
						if (!func_95(vParam0, 1056964608 /* Float: 0.5f */))
						{
							Global_2405072.f_3++;
							return true;
						}
					}
				}
			}
			else
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			}
		}
		else if (func_231(vParam0, 6f, 5f, 5f, 5f, 0, fParam6, bParam7, bParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			if (!func_185(vParam0, iParam12))
			{
				Global_2405072.f_3++;
				if (!func_182(vParam0, bParam3, iParam9, bParam10, iParam11))
				{
					Global_2405072.f_3++;
					if (!func_95(vParam0, 1056964608 /* Float: 0.5f */))
					{
						Global_2405072.f_3++;
						return true;
					}
				}
			}
		}
		else
		{
			Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
		}
	}
	return false;
}

bool func_182(vector3 vParam0, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (!UNK_0xD803B885F5E47A62() == bVar1)
		{
			if ((func_6(bVar1, 1, 1) && func_137(bVar1)) && UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
			{
				if (!func_184(UNK_0xD803B885F5E47A62(), bVar1, -2, 0))
				{
					if (func_183(func_8(bVar1), vParam0, bParam3, iParam4, bParam5, iParam6))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_183(vector3 vParam0, vector3 vParam3, bool bParam6, float fParam7, bool bParam8, float fParam9)
{
	vector3 vVar0;
	vector3 vVar3;

	bParam6 = (bParam6 * -1f);
	bParam6 = (bParam6 + 360f);
	vVar0.x = SYSTEM::SIN(bParam6);
	vVar0.f_1 = SYSTEM::COS(bParam6);
	vVar0.f_2 = 0f;
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam7, fParam7, fParam7) };
	vVar3 = { vParam3 + vVar0 };
	vVar3.f_2 = vParam3.z;
	vVar3.f_2 = (vVar3.z + fParam9);
	vParam3.f_2 = (vParam3.z + fParam9);
	return UNK_0x0399732A9EBC368E(vParam0, vParam3, vVar3, bParam8, 0, true);
}

bool func_184(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (UNK_0x08067D4957B73C02(bParam0) == -1 && UNK_0x08067D4957B73C02(bParam1) == -1)
			{
				return false;
			}
		}
		return UNK_0x08067D4957B73C02(bParam0) == UNK_0x08067D4957B73C02(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (UNK_0x08067D4957B73C02(bParam0) == -1 && iParam2 == -1)
			{
				return false;
			}
		}
		return UNK_0x08067D4957B73C02(bParam0) == iParam2;
	}
	return UNK_0x08067D4957B73C02(bParam0) == iParam2;
}

bool func_185(vector3 vParam0, float fParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((func_6(bVar1, 1, 1) && func_137(bVar1)) && UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
		{
			if ((UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1 && UNK_0x08067D4957B73C02(bVar1) == -1) && !func_118(UNK_0xD803B885F5E47A62(), 1))
			{
				return false;
			}
			else if ((UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1 && !UNK_0xD803B885F5E47A62() == bVar1) || !func_184(UNK_0xD803B885F5E47A62(), bVar1, -2, 0))
			{
				if (SYSTEM::VDIST(vParam0, func_8(bVar1)) < fParam3)
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_186(int iParam0)
{
	if ((Global_2405072.f_486 == 9 || Global_2405072.f_486 == 9) || (Global_2405072.f_486 == 15 && iParam0 == 1))
	{
		return true;
	}
	return false;
}

bool func_187(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((bParam8 == 1 && UNK_0xD803B885F5E47A62() != bVar1) || bParam8 == 0)
		{
			if (func_6(bVar1, bParam4, bParam5))
			{
				if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
				{
					if (!bParam7 || (!UNK_0xEB6A8945D1AC98A1(UNK_0x9539D44F3E4492F6(bVar1)) && func_137(bVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) != UNK_0x08067D4957B73C02(bVar1))) || UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1)
						{
							if (((UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1 && bParam9) && bParam6) && func_142(bVar1))
							{
							}
							else if (UNK_0xC844350D5D58C99A(UNK_0x9539D44F3E4492F6(bVar1)))
							{
								if (UNK_0x0EB28750412C3A5A(func_8(bVar1), vParam0, 1) < fParam3)
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_188(vector3 vParam0, bool bParam3, int iParam4, float fParam5)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;

	iVar3 = UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar1 = iVar0;
			if (func_6(bVar1, 1, 1))
			{
				if ((!func_200(bVar1, 0) && UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1)) && bVar1 != UNK_0xD803B885F5E47A62())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!UNK_0x08067D4957B73C02(bVar1) == -1)
						{
							if (UNK_0x08067D4957B73C02(bVar1) == UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (UNK_0x08067D4957B73C02(bVar1) == iVar3)
					{
						if (UNK_0x0EB28750412C3A5A(func_8(bVar1), vParam0, 1) <= (fVar2 + bParam3))
						{
							if (UNK_0xAA451564CBFD3413(bVar1, vParam0, bParam3))
							{
								return true;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_189(bool bParam0)
{
	if (((func_118(bParam0, 1) || func_191(bParam0)) || func_36(bParam0, 0)) || func_190(bParam0))
	{
		return true;
	}
	return false;
}

bool func_190(bool bParam0)
{
	if (!func_6(bParam0, 0, 1))
	{
		return false;
	}
	return Global_1590535[bParam0 /*876*/].f_35;
}

bool func_191(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return Global_1628237[bVar0 /*615*/] != -1;
	}
	return false;
}

void func_192(vector3 vParam0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var7;
	vector3 vVar17;
	vector3 vVar20;

	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = { Var7 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2359721[iVar1 /*26*/].f_3, vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_194(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_5999[iVar1 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_262145.f_5999[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_194(&Var3, uParam3, iVar0);
				iVar0 = *uParam3;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6045[iVar1 /*19*/][iVar2 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_262145.f_6045[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_194(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			vVar17 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar20 = { *(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam4[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(vVar17, vParam0) < SYSTEM::VDIST(vVar20, vParam0))
			{
				Var7 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var7.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var7.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var7.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_193(&Var7, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_193(var uParam0, var uParam1, int iParam2)
{
	Global_2412464 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_193(&Global_2412464, uParam1, iParam2 + 1);
	}
}

void func_194(var uParam0, var uParam1, int iParam2)
{
	Global_2412460 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_194(&Global_2412460, uParam1, iParam2 + 1);
	}
}

void func_195(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	if (Global_2405072.f_2254 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_2254)
		{
			if (func_196(Global_2405072.f_2255[iVar0 /*4*/], uParam0))
			{
				iVar4 = Global_2405072.f_2255[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*iParam1) > 0.01f)
				{
					vVar1 = { *iParam1 - Global_2405072.f_2255[iVar0 /*4*/] };
					iVar4 = UNK_0xE7D606C557C86100(vVar1.x, vVar1.y);
				}
				func_134(Global_2405072.f_2255[iVar0 /*4*/], iVar4, uParam0, iParam1, 0, -1);
				Global_2405072.f_2483++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405072.f_2880)
	{
		func_128(&(Global_2405072.f_2483.f_6[0 /*10*/]), &(Global_2405072.f_2483.f_6[1 /*10*/]), &(Global_2405072.f_2483.f_6[2 /*10*/]));
	}
}

bool func_196(vector3 vParam0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_87(vParam0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		case 1:
		case 2:
			return func_87(vParam0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		default:
			break;
	}
	return false;
}

void func_197(vector3 vParam0, vector3 vParam3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;

	func_123(&vParam0, &vParam3);
	fVar0 = (vParam3.x - vParam0.x);
	*uParam6 = (vParam0.x + (fVar0 * 0.5f));
	uParam6->f_1 = vParam0.y;
	uParam6->f_2 = vParam0.z;
	*uParam7 = *uParam6;
	uParam7->f_1 = vParam3.y;
	uParam7->f_2 = vParam3.z;
	*uParam8 = (fVar0 * 0.5f);
}

bool func_198()
{
	return Global_1310987.f_4;
}

void func_199(float fParam0, float fParam1)
{
	func_238();
	func_230(fParam0, fParam1);
}

bool func_200(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_201(-1, 0) == 8;
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

int func_201(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_202();
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

int func_202()
{
	return Global_1312745;
}

bool func_203(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		vParam0.f_2 = 0f;
		vParam3.f_2 = 0f;
		return SYSTEM::VDIST(vParam0, vParam3) < (bParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (vParam0.z > vParam3.z)
		{
			vParam0.f_2 = vParam3.z;
		}
		return SYSTEM::VDIST(vParam0, vParam3) < (bParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (vParam0.z < vParam3.z)
		{
			vParam0.f_2 = vParam3.z;
		}
		return SYSTEM::VDIST(vParam0, vParam3) < (bParam6 + 0.01f);
	}
	return SYSTEM::VDIST(vParam0, vParam3) < (bParam6 + 0.01f);
}

void func_204(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		while (func_226(uParam0, uParam1, fParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			fParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_205(uParam0, uParam1, fParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_205(int iParam0, var uParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	vector3 vVar27;
	var uVar30;
	vector3 vVar31;
	var uVar34;
	bool bVar35;

	iVar0 = 0;
	if (!SYSTEM::VMAG(fParam2->f_35) > 0f)
	{
		fParam2->f_35 = { *iParam0 };
	}
	if (fParam2->f_15)
	{
		if (func_107(fParam2->f_35, iParam0, &(fParam2->f_38), &(fParam2->f_45), 1, 1))
		{
			fParam2->f_6 = 9999.9f;
			fParam2->f_7 = 9999.9f;
		}
	}
	if (fParam2->f_51)
	{
		fParam2->f_6 = 9999.9f;
	}
	if (fParam2->f_48)
	{
		if (func_225(iParam0, 1))
		{
		}
	}
	if (iParam0->f_2 < -80f)
	{
		fParam2->f_6 = 9999.9f;
		fParam2->f_7 = 9999.9f;
	}
	bVar5 = false;
	bVar10 = true;
	if (fParam2->f_11)
	{
		bVar5 += 2;
		bVar5++;
		bVar10 = false;
	}
	else if (fParam2->f_10 == 0 || (fParam2->f_33 > 0 && fParam2->f_16))
	{
		bVar5++;
		bVar10 = false;
	}
	bVar5 += 4;
	fVar13 = 3f;
	bVar14 = 5f;
	switch (fParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			bVar14 = 5f;
			break;
		case 1:
			fVar13 = 2.75f;
			bVar14 = 7.5f;
			break;
		default:
			fVar13 = 2.5f;
			bVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2412474.f_162 = 0;
	Global_2412474.f_163 = 0;
	Global_2412474.f_164 = -99;
	Global_2412474.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412474[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2412474.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_101(fParam2->f_34) != 0)
	{
		iVar17 = 3;
		fParam2->f_6 = 9999.9f;
		fParam2->f_7 = 9999.9f;
		fParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = UNK_0x8529439EA7EEBA65(*iParam0, (iVar0 * iVar17), &uVar4, &fVar9, bVar5, fVar13, bVar14);
		if (UNK_0x5DD62183BBF151CD(iVar8))
		{
			UNK_0x8502D8EBA9E78216(iVar8, &vVar1);
			bVar12 = false;
			if (Global_2412474.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412474.f_165 = { vVar1 };
			if (((fParam2->f_10 || fParam2->f_33 > 0) || !UNK_0x5B33870CBB8B6AC1(iVar8)) || UNK_0xD9DC3EBC8290FF92(iVar8))
			{
				UNK_0x968116EE0D84C042(vVar1, &uVar6, &iVar7);
				if (SYSTEM::VDIST(vVar1, fParam2->f_35) > fParam2->f_4)
				{
					if (!func_173(&vVar1, 0))
					{
						if ((fParam2->f_13 || iVar7 & 64 == 0) || fParam2->f_33 == 1)
						{
							if (fParam2->f_14 || iVar7 & 16 == 0)
							{
								if ((iVar7 & 128 == 0 && iVar7 & 256 == 0) && iVar7 & 512 == 0)
								{
									if (!func_224(vVar1))
									{
										vVar1 = { func_220(vVar1, &uVar4, fVar9, fParam2->f_9, *fParam2, bVar10, fParam2->f_11, fParam2->f_34, &bVar11, bVar12, 1, fParam2->f_51) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_95(vVar1, 5f))
											{
												if (vVar1.z >= (fParam2->f_35.f_2 - fParam2->f_7) || fParam2->f_33 >= 2)
												{
													if (vVar1.z <= (fParam2->f_35.f_2 + fParam2->f_6) || fParam2->f_33 >= 2)
													{
														if (func_219(vVar1, fParam2))
														{
															if ((fParam2->f_48 && !func_225(&vVar1, 0)) || fParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (SYSTEM::VMAG(vVar1) > 0f)
																{
																	if (((fParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, fParam2->f_35, fParam2->f_35.f_1, 0f) < fParam2->f_5) || fParam2->f_5 <= 0f) || fParam2->f_33 >= 2)
																	{
																		if ((fParam2->f_12 && !func_215(vVar1, uVar4, fParam2->f_34, UNK_0xD803B885F5E47A62(), 0, fParam2->f_56)) || !fParam2->f_12)
																		{
																			if (!fParam2->f_15 || !func_107(fParam2->f_35, &vVar1, &(fParam2->f_38), &(fParam2->f_45), 0, 1))
																			{
																				if (fParam2->f_8)
																				{
																					bVar19 = fParam2->f_31;
																					iVar20 = 1;
																					bVar21 = true;
																					bVar22 = fParam2->f_49;
																					if (!fParam2->f_55)
																					{
																						bVar19 = false;
																						iVar20 = 0;
																						bVar21 = false;
																						bVar22 = 1f;
																					}
																					else if (fParam2->f_17)
																					{
																						bVar19 = false;
																						iVar20 = 0;
																						bVar21 = false;
																						if (fParam2->f_33 == 1)
																						{
																							bVar22 = (bVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						iVar20 = 1;
																						bVar21 = true;
																						if (fParam2->f_28)
																						{
																							if (fParam2->f_33 == 1)
																							{
																								bVar22 = (bVar22 * 0.375f);
																							}
																						}
																					}
																					bVar23 = false;
																					if (!func_214(vVar1, uVar4, fParam2->f_34))
																					{
																						if (fParam2->f_3 > 7f)
																						{
																							if (func_231(vVar1, 6f, 1f, 1f, 5f, bVar19, iVar20, bVar21, bVar22, fParam2->f_58, -1, 1, fParam2->f_3, 0, 0, 0, 0))
																							{
																								bVar23 = true;
																							}
																						}
																						else if (func_231(vVar1, 6f, 1f, 1f, 5f, bVar19, iVar20, bVar21, bVar22, fParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_212(vVar1, uVar4, fParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							bVar23 = true;
																						}
																					}
																					if (bVar23 || fParam2->f_33 >= 2)
																					{
																						if (((fParam2->f_29 || fParam2->f_30) || fParam2->f_52) || fParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (fParam2->f_52)
																							{
																								iVar24 = func_211(vVar1, fParam2->f_54, &fVar25);
																							}
																							if (!fParam2->f_52 || (fParam2->f_52 && iVar24 <= fParam2->f_53))
																							{
																								if (fParam2->f_52)
																								{
																									if (iVar24 < fParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412474.f_162)
																										{
																											Global_2412474[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2412474.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412474.f_162 = 0;
																										fParam2->f_53 = iVar24;
																									}
																								}
																								if (fParam2->f_30)
																								{
																									if (Global_2412474.f_162 == 0)
																									{
																										Global_2412474[0 /*3*/] = { vVar1 };
																										Global_2412474.f_121[0] = uVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412474.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(vVar1, fParam2->f_35) < SYSTEM::VDIST2(Global_2412474[iVar16 /*3*/], fParam2->f_35))
																												{
																													func_210(vVar1, uVar4, iVar16);
																													iVar16 = Global_2412474.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412474.f_162++;
																									if (Global_2412474.f_162 >= 5)
																									{
																										if ((fParam2->f_52 && fParam2->f_53 == 0) || fParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412474[Global_2412474.f_162 /*3*/] = { vVar1 };
																									Global_2412474.f_121[Global_2412474.f_162] = uVar4;
																									Global_2412474.f_162++;
																									if (func_219(vVar1, fParam2))
																									{
																										Global_2412474.f_163++;
																									}
																									if (Global_2412474.f_162 >= 10)
																									{
																										if ((fParam2->f_52 && fParam2->f_53 == 0) || fParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*iParam0 = { vVar1 };
																							*uParam1 = uVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*iParam0 = { vVar1 };
																					*uParam1 = uVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!fParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2412474.f_162 > 0 && ((fParam2->f_29 || fParam2->f_30) || fParam2->f_33 >= 2))
				{
					if (fParam2->f_30)
					{
						*iParam0 = { Global_2412474[0 /*3*/] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
						{
							func_208(0, fParam2);
						}
						iVar26 = UNK_0x09AC81E49EA267F7(false, Global_2412474.f_162);
						if (fParam2->f_18 && fParam2->f_30)
						{
							iVar26 = 0;
						}
						vVar27 = { Global_2412474[0 /*3*/] };
						uVar30 = Global_2412474.f_121[0];
						Global_2412474[0 /*3*/] = { Global_2412474[iVar26 /*3*/] };
						Global_2412474.f_121[0] = Global_2412474.f_121[iVar26];
						Global_2412474[iVar26 /*3*/] = { vVar27 };
						Global_2412474.f_121[iVar26] = uVar30;
						*iParam0 = { Global_2412474[0 /*3*/] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
				}
				else
				{
					fParam2->f_33++;
					if (fParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_207(iVar15, *iParam0, &iVar0, &vVar1, &uVar4, fParam2, bVar10, fVar9, bVar5, fVar13, bVar14, bVar11);
						vVar31 = { vVar1 };
						uVar34 = uVar4;
						if (!fParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_107(fParam2->f_35, &vVar31, &(fParam2->f_38), &(fParam2->f_45), bVar35, 1) || func_225(&vVar31, bVar35))
						{
							if (!fParam2->f_50)
							{
								fParam2->f_33 = 0;
								fParam2->f_50 = 1;
								*iParam0 = { vVar31 };
								*uParam1 = uVar34;
								fParam2->f_6 = 9999.9f;
								fParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*iParam0 = { vVar31 };
								*uParam1 = uVar34;
								return 1;
							}
						}
						else
						{
							*iParam0 = { vVar31 };
							*uParam1 = uVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			fParam2->f_33++;
			if (fParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_206(&Global_1312061, iParam0, uParam1, *iParam0);
				if (fParam2->f_11)
				{
					fParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412474.f_164 = iVar8;
	}
	return 0;
}

void func_206(var uParam0, int iParam1, var uParam2, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_178(*(uParam0[iVar2 /*4*/]), 5f, UNK_0xD803B885F5E47A62(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*iParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_207(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = UNK_0x09AC81E49EA267F7((1 + iParam0), (40 + iParam0));
		UNK_0x4A13F7D4B1E239A0(vParam1, *iParam4, fParam5, bParam6, &fParam9, bParam10, bParam11, bParam12);
		*fParam5 = { func_220(*fParam5, bParam6, fParam9, fParam7->f_9, *fParam7, bParam8, fParam7->f_11, fParam7->f_34, &bParam13, 0, 0, fParam7->f_51) };
		if (!func_224(*fParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_208(int iParam0, float fParam1)
{
	if (!func_219(Global_2412474[iParam0 /*3*/], fParam1))
	{
		Global_2412474.f_162 = (Global_2412474.f_162 - 1);
		func_209(iParam0);
		if (Global_2412474.f_162 > Global_2412474.f_163)
		{
			func_208(iParam0, fParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_208(iParam0 + 1, fParam1);
	}
}

void func_209(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412474[iParam0 /*3*/] = { Global_2412474[iParam0 + 1 /*3*/] };
			Global_2412474.f_121[iParam0] = Global_2412474.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_210(vector3 vParam0, var uParam3, int iParam4)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { Global_2412474[iParam4 /*3*/] };
	uVar3 = Global_2412474.f_121[iParam4];
	Global_2412474[iParam4 /*3*/] = { vParam0 };
	Global_2412474.f_121[iParam4] = uParam3;
	if (iParam4 <= Global_2412474.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_210(vVar0, uVar3, iParam4 + 1);
		}
	}
}

int func_211(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	bool bVar5;
	float fVar6;
	float fVar7;

	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar5 = iVar0;
		if (func_141(bVar5))
		{
			vVar1 = { func_8(bVar5) };
			fVar7 = SYSTEM::VDIST(vParam0, vVar1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

bool func_212(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	bool bVar3;
	int iVar4;
	vector3 vVar5;
	bool bVar8;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam9 == 1 && UNK_0xD803B885F5E47A62() != bVar1) || iParam9 == 0)
		{
			if (func_6(bVar1, bParam5, bParam6))
			{
				if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
				{
					if (!bParam8 || (!UNK_0xEB6A8945D1AC98A1(UNK_0x9539D44F3E4492F6(bVar1)) && func_137(bVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) != UNK_0x08067D4957B73C02(bVar1))) || UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1)
						{
							if (((UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1 && bParam10) && bParam7) && func_142(bVar1))
							{
							}
							else if (UNK_0xC844350D5D58C99A(UNK_0x9539D44F3E4492F6(bVar1)))
							{
								fVar2 = 0.1f;
								if (UNK_0x405E212DDE472467(UNK_0x9539D44F3E4492F6(bVar1), 0))
								{
									bVar3 = UNK_0x6937EA2286828455(UNK_0x9539D44F3E4492F6(bVar1), 0);
									if (UNK_0xC844350D5D58C99A(bVar3) && !UNK_0x437347B10A200C4B(bVar3, 0))
									{
										iVar4 = UNK_0x134B62B726CEC8E6(bVar3);
										vVar5 = { UNK_0x68F4C0EC296D3901(bVar3, false) };
										bVar8 = UNK_0xD9522BA9E27E1349(bVar3);
										if (func_213(vParam0, iParam3, iParam4, vVar5, bVar8, iVar4, 0))
										{
											return true;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_96(func_8(bVar1), vParam0, iParam3, iParam4, fVar2))
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_213(vector3 vParam0, bool bParam3, bool bParam4, vector3 vParam5, bool bParam8, int iParam9, bool bParam10)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;

	if (func_96(vParam0, vParam5, bParam8, iParam9, 1036831949 /* Float: 0.1f */))
	{
		return true;
	}
	func_98(bParam4, &vVar14, &vVar17, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	vVar20 = { 0f, vVar17.y, 0f };
	func_84(&vVar20, 0f, 0f, bParam3);
	vVar23 = { 0f, vVar14.y, 0f };
	func_84(&vVar23, 0f, 0f, bParam3);
	vVar26 = { (UNK_0x755FF954DAE327E1((vVar17.x - vVar14.x)) * 0.5f), 0f, 0f };
	func_84(&vVar26, 0f, 0f, bParam3);
	vVar1[0 /*3*/] = { vParam0 + vVar20 + vVar26 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * UNK_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar20 - vVar26 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * UNK_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar23 + vVar26 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * UNK_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar23 - vVar26 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * UNK_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_96(vVar1[iVar0 /*3*/], vParam5, bParam8, iParam9, 1036831949 /* Float: 0.1f */))
		{
			return true;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_213(vParam5, bParam8, iParam9, vParam0, bParam3, bParam4, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_214(vector3 vParam0, int iParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;

	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	bVar1 = UNK_0x83C1D4B63BBD91F6(vParam0, 30f, false, iVar0);
	if (UNK_0xC844350D5D58C99A(bVar1) && !UNK_0x437347B10A200C4B(bVar1, 0))
	{
		iVar2 = UNK_0x134B62B726CEC8E6(bVar1);
		vVar3 = { UNK_0x68F4C0EC296D3901(bVar1, false) };
		bVar6 = UNK_0xD9522BA9E27E1349(bVar1);
		if (func_213(vParam0, iParam3, iParam4, vVar3, bVar6, iVar2, 0))
		{
			return true;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	bVar1 = UNK_0x83C1D4B63BBD91F6(vParam0, 30f, false, iVar0);
	if (UNK_0xC844350D5D58C99A(bVar1) && !UNK_0x437347B10A200C4B(bVar1, 0))
	{
		iVar2 = UNK_0x134B62B726CEC8E6(bVar1);
		vVar3 = { UNK_0x68F4C0EC296D3901(bVar1, false) };
		bVar6 = UNK_0xD9522BA9E27E1349(bVar1);
		if (func_213(vParam0, iParam3, iParam4, vVar3, bVar6, iVar2, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_215(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_218(vParam0, iParam3, iParam4, iParam5, iParam6) || func_216(vParam0, iParam3, iParam4, iParam5, iParam7))
	{
		return true;
	}
	return false;
}

int func_216(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (!bParam5 == bVar0 || iParam6 == 1)
		{
			bVar2 = bVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_217(vParam0, iParam4, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_213(vParam0, iParam3, iParam4, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_6(bVar2, 0, 1) && func_6(bParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		bVar0++;
	}
	return 0;
}

bool func_217(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_103(bParam3, 1008981770 /* Float: 0.01f */);
	fVar1 = func_103(bParam7, 1008981770 /* Float: 0.01f */);
	fVar2 = SYSTEM::VDIST(vParam0, vParam4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return true;
	}
	return false;
}

int func_218(vector3 vParam0, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (!bParam5 == bVar0 || iParam6 == 1)
		{
			bVar1 = bVar0;
			if (func_6(bVar1, 0, 1) && func_6(bParam5, 0, 1))
			{
				if (Global_2417897.f_261[bVar0])
				{
					if (func_96(Global_2417897.f_131[bVar0 /*3*/], vParam0, bParam3, iParam4, 1036831949 /* Float: 0.1f */))
					{
						return 1;
					}
				}
				else if (func_96(func_8(bVar1), vParam0, bParam3, iParam4, 1036831949 /* Float: 0.1f */))
				{
					return 1;
				}
			}
			else if (Global_2417897.f_261[bVar0])
			{
				if (func_96(Global_2417897.f_131[bVar0 /*3*/], vParam0, bParam3, iParam4, 1036831949 /* Float: 0.1f */))
				{
					return 1;
				}
			}
			else if (func_6(bVar1, 0, 0))
			{
				if (UNK_0xC844350D5D58C99A(UNK_0x9539D44F3E4492F6(bVar1)))
				{
					if (func_96(func_8(bVar1), vParam0, bParam3, iParam4, 1036831949 /* Float: 0.1f */))
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool func_219(vector3 vParam0, float fParam3)
{
	if (fParam3->f_18)
	{
		switch (fParam3->f_26)
		{
			case 0:
				if (func_203(vParam0, fParam3->f_19, fParam3->f_25, 0, 0))
				{
					return true;
				}
				break;
			case 1:
				if (func_122(vParam0, fParam3->f_19, fParam3->f_22, 0, 0))
				{
					return true;
				}
				break;
			case 2:
				if (UNK_0x0399732A9EBC368E(vParam0, fParam3->f_19, fParam3->f_22, fParam3->f_25, 0, true))
				{
					return true;
				}
				break;
		}
		return false;
	}
	return true;
}

Vector3 func_220(vector3 vParam0, bool bParam3, int iParam4, bool bParam5, vector3 vParam6, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;

	if (bParam15)
	{
		if (SYSTEM::VMAG(vParam6) > 0f)
		{
			if (!func_223(vParam0, *bParam3, vParam6))
			{
				*bParam3 = (*bParam3 + 180f);
			}
		}
		return vParam0;
	}
	UNK_0x968116EE0D84C042(vParam0, &uVar3, &iVar4);
	if (iVar4 & 1024 == 0 && !bParam10)
	{
		UNK_0xC05DA9D35DAF88FD(vParam0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, bParam9);
		if (iVar8 == iVar9)
		{
			*bParam12 = 1;
		}
		if (bParam14)
		{
			if (!iVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!iVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!iVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (UNK_0xAFB8495D36825275(bParam11) && func_222(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (bParam13 && *bParam12)
		{
			*bParam3 = (*bParam3 + 180f);
			if (*bParam3 > 360f)
			{
				*bParam3 = (*bParam3 + -360f);
			}
		}
		if (*bParam3 <= 90f || *bParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			bVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					bVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
				}
				else
				{
					bVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						bVar11 = (bVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					bVar11 = (bVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					bVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar9) * 0.5f));
				}
				else
				{
					bVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						bVar11 = (bVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					bVar11 = (bVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!iVar4 & 64 == 0)
			{
				bVar11 = (bVar11 + (0.95f * fVar10));
			}
			if (!iVar4 & 4 == 0 || !iVar4 & 8 == 0)
			{
				bVar11 = (bVar11 + -0.5f);
			}
			if ((!iVar4 & 32 == 0 && iVar4 & 4 == 0) && iVar4 & 8 == 0)
			{
				bVar11 = (bVar11 + -1f);
			}
			if (!bParam5 || !iVar4 & 8 == 0)
			{
				bVar11 = (bVar11 + (4.2f * -0.5f));
			}
			if (!bParam11 == 0)
			{
				if (iVar4 & 8 != 0)
				{
					fVar14 = func_221(bParam11, 3.5f);
				}
				else
				{
					fVar14 = func_221(bParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					bVar11 = (bVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(vParam6) > 0f)
	{
		if (!func_223(vParam0, *bParam3, vParam6))
		{
			if (bParam5 || ((iVar4 & 1024 != 0 || vParam0.z == 0f) && bParam10))
			{
				*bParam3 = (*bParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (bVar11 < 0f)
	{
		bVar11 = 0f;
	}
	vVar0 = { UNK_0x8A5E176FF719A014(vParam0, *bParam3, bVar11, 0f, 0f) };
	if (bParam5)
	{
		if (UNK_0x2E466A8362971293(vParam0, *bParam3, &vVar15))
		{
			vVar18 = { vVar15 - vParam0 };
			if (!bParam11 == 0)
			{
				vVar21 = { vVar18 / FtoV(SYSTEM::VMAG(vVar18)) };
				if (iVar4 & 8 != 0)
				{
					fVar14 = func_221(bParam11, 3.5f);
				}
				else
				{
					fVar14 = func_221(bParam11, 1.5f);
				}
				vVar21 = { vVar21 * FtoV((fVar14 * 0.5f)) };
				vVar18 = { vVar18 - vVar21 };
				vVar15 = { vParam0 + vVar18 };
			}
			vVar21 = { vVar0 - vVar15 };
			vVar0 = { vVar15 };
		}
	}
	return vVar0;
}

float func_221(bool bParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;

	func_98(bParam0, &fVar0, &fVar3, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

bool func_222(vector3 vParam0)
{
	float fVar0;

	if (UNK_0xE82754C349C7B581(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return true;
		}
	}
	return false;
}

bool func_223(vector3 vParam0, bool bParam3, vector3 vParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { 0f, 1f, 0f };
	func_84(&vVar0, 0f, 0f, bParam3);
	vVar3 = { vParam4 - vParam0 };
	if (func_80(vVar3, vVar0) >= 0f)
	{
		return true;
	}
	return false;
}

bool func_224(vector3 vParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = func_94(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412181[iVar1])
	{
		if (func_93(vParam0, &(Global_2411478[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412181[8])
	{
		if (func_93(vParam0, &(Global_2411478[8 /*78*/][iVar0 /*7*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_225(int iParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (Global_2405072.f_26.f_18)
	{
		switch (Global_2405072.f_26.f_17)
		{
			case 0:
				if (func_203(*iParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			case 1:
				if (func_122(*iParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			case 2:
				if (UNK_0x0399732A9EBC368E(*iParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, 0, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*iParam0 = { func_85(*iParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, Global_2405072.f_26.f_17, 1036831949 /* Float: 0.1f */, 0) };
			}
		}
	}
	return bVar0;
}

int func_226(int iParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	float fVar13;
	int iVar14;
	vector3 vVar15;
	var uVar18;

	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(fParam2->f_35) > 0f)
		{
			fParam2->f_35 = { *iParam0 };
		}
		if (fParam2->f_15)
		{
			if (func_107(fParam2->f_35, iParam0, &(fParam2->f_38), &(fParam2->f_45), 1, 1))
			{
				fParam2->f_6 = 9999.9f;
				fParam2->f_7 = 9999.9f;
			}
		}
		if (fParam2->f_48)
		{
			if (func_225(iParam0, 1))
			{
				fParam2->f_6 = 9999.9f;
				fParam2->f_7 = 9999.9f;
			}
		}
		if (iParam0->f_2 < -80f)
		{
			fParam2->f_6 = 9999.9f;
			fParam2->f_7 = 9999.9f;
		}
		Global_2412474.f_162 = 0;
		Global_2412474.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2412474[iVar6 /*3*/] = { 0f, 0f, 0f };
			Global_2412474.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_227(*iParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_1746)
		{
			iVar1 = Global_2405072.f_2152[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405072.f_1747[iVar1 /*4*/] };
				uVar5 = Global_2405072.f_1747[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar2) > 0f)
				{
					if ((fParam2->f_57 && SYSTEM::VDIST(vVar2, fParam2->f_35) > fParam2->f_4) || fParam2->f_57 == 0)
					{
						if ((fParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, fParam2->f_35, fParam2->f_35.f_1, 0f) < fParam2->f_5) || fParam2->f_5 <= 0f)
						{
							if ((fParam2->f_12 && !func_215(vVar2, uVar5, fParam2->f_34, UNK_0xD803B885F5E47A62(), 0, fParam2->f_56)) || !fParam2->f_12)
							{
								if (!fParam2->f_15 || !func_107(fParam2->f_35, &vVar2, &(fParam2->f_38), &(fParam2->f_45), 0, 1))
								{
									if (fParam2->f_8)
									{
										bVar7 = fParam2->f_31;
										iVar8 = 1;
										bVar9 = true;
										bVar10 = fParam2->f_49;
										if (!fParam2->f_55)
										{
											bVar7 = false;
											iVar8 = 0;
											bVar9 = false;
											bVar10 = 1f;
										}
										else if (fParam2->f_17)
										{
											bVar7 = false;
											iVar8 = 0;
											bVar9 = false;
											if (fParam2->f_33 == 1)
											{
												bVar10 = (bVar10 * 0.375f);
											}
										}
										else
										{
											iVar8 = 1;
											bVar9 = true;
											if (fParam2->f_28)
											{
												if (fParam2->f_33 == 1)
												{
													bVar10 = (bVar10 * 0.375f);
												}
											}
										}
										bVar11 = false;
										if (!func_214(vVar2, uVar5, fParam2->f_34))
										{
											if (fParam2->f_3 > 7f)
											{
												if (func_231(vVar2, 6f, 1f, 1f, 5f, bVar7, iVar8, bVar9, bVar10, fParam2->f_58, -1, 1, fParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_231(vVar2, 6f, 1f, 1f, 5f, bVar7, iVar8, bVar9, bVar10, fParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_212(vVar2, uVar5, fParam2->f_34, 1, 1, 0, 0, fParam2->f_58, 0))
											{
												bVar11 = true;
											}
										}
										if (bVar11)
										{
											if ((fParam2->f_29 || fParam2->f_30) || fParam2->f_52)
											{
												fVar13 = 0f;
												if (fParam2->f_52)
												{
													iVar12 = func_211(vVar2, fParam2->f_54, &fVar13);
												}
												if (!fParam2->f_52 || (fParam2->f_52 && iVar12 <= fParam2->f_53))
												{
													if (fParam2->f_52)
													{
														if (iVar12 < fParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2412474.f_162)
															{
																Global_2412474[iVar6 /*3*/] = { 0f, 0f, 0f };
																Global_2412474.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2412474.f_162 = 0;
															fParam2->f_53 = iVar12;
														}
													}
													if (fParam2->f_30)
													{
														if (Global_2412474.f_162 == 0)
														{
															Global_2412474[0 /*3*/] = { vVar2 };
															Global_2412474.f_121[0] = uVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2412474.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (SYSTEM::VDIST2(vVar2, fParam2->f_35) < SYSTEM::VDIST2(Global_2412474[iVar6 /*3*/], fParam2->f_35))
																	{
																		func_210(vVar2, uVar5, iVar6);
																		iVar6 = Global_2412474.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 5)
														{
															if ((fParam2->f_52 && fParam2->f_53 == 0) || fParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
													else
													{
														Global_2412474[Global_2412474.f_162 /*3*/] = { vVar2 };
														Global_2412474.f_121[Global_2412474.f_162] = uVar5;
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 10)
														{
															if ((fParam2->f_52 && fParam2->f_53 == 0) || fParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
												}
											}
											else
											{
												*iParam0 = { vVar2 };
												*uParam1 = uVar5;
												return 1;
											}
										}
									}
									else
									{
										*iParam0 = { vVar2 };
										*uParam1 = uVar5;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2412474.f_162 > 0)
		{
			if (fParam2->f_30)
			{
				*iParam0 = { Global_2412474[0 /*3*/] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
				{
					func_208(0, fParam2);
				}
				iVar14 = UNK_0x09AC81E49EA267F7(false, Global_2412474.f_162);
				vVar15 = { Global_2412474[0 /*3*/] };
				uVar18 = Global_2412474.f_121[0];
				Global_2412474[0 /*3*/] = { Global_2412474[iVar14 /*3*/] };
				Global_2412474.f_121[0] = Global_2412474.f_121[iVar14];
				Global_2412474[iVar14 /*3*/] = { vVar15 };
				Global_2412474.f_121[iVar14] = uVar18;
				*iParam0 = { Global_2412474[0 /*3*/] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
		}
		else
		{
			fParam2->f_33++;
			if (fParam2->f_33 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_227(vector3 vParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = -1f;
	while (iVar2 < Global_2405072.f_1746)
	{
		iVar1 = func_228(vParam0, fVar0, &fVar0);
		Global_2405072.f_2152[iVar2] = iVar1;
		iVar2++;
	}
}

int func_228(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405072.f_1746)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_2405072.f_1747[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

bool func_229(int iParam0)
{
	return iParam0 == 50;
}

void func_230(float fParam0, float fParam1)
{
	UNK_0x8A1BBF3B7D62C45F(fParam0, fParam1, 0.1f);
	Global_2405072.f_2466 = UNK_0x0D0A574C76D769AC();
	Global_2405072.f_2464 = 1;
	Global_2405072.f_2467 = UNK_0x2B6E0A53779D29EA();
}

bool func_231(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)
{
	Global_2405072.f_2 = 0;
	if (bParam3 > 0f)
	{
		if (UNK_0x558ADED8B93EA0F6(vParam0, bParam3))
		{
			return false;
		}
	}
	if (bParam4 > 0f)
	{
		if (UNK_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), bParam4) || UNK_0xEA19D5D9230DBB67(vParam0, bParam4))
		{
			return false;
		}
	}
	if (bParam5 > 0f)
	{
		if (UNK_0x9DD97B5335E52CB9(vParam0, bParam5, iParam18))
		{
			return false;
		}
	}
	Global_2405072.f_2++;
	if (bParam13)
	{
		if (UNK_0xA4F4A1E4DDB4728B(vParam0, 2.5f) > 0)
		{
			return false;
		}
	}
	Global_2405072.f_2++;
	if (fParam14 > 0f)
	{
		if (func_187(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return false;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_174(vParam0, fParam6, bParam7, bParam9, bParam10, bParam11, bParam12, bParam16, bParam17))
			{
				return false;
			}
		}
	}
	Global_2405072.f_2++;
	return true;
}

void func_232()
{
	func_237();
	func_236();
	func_235();
	func_234();
	func_233();
}

void func_233()
{
	struct<10> Var0;
	int iVar10;

	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 128)
	{
		Global_2408006[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_234()
{
	struct<10> Var0;
	int iVar10;

	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2405072.f_2483.f_90[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_235()
{
	struct<4> Var0;
	int iVar4;

	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2405072.f_2483.f_57[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_236()
{
	struct<10> Var0;
	int iVar10;

	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 5)
	{
		Global_2405072.f_2483.f_6[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_237()
{
	struct<6> Var0;

	Var0.f_3 = -1;
	Global_2405072.f_2483 = { Var0 };
}

void func_238()
{
	if (Global_2405072.f_2464)
	{
		if (UNK_0x0D0A574C76D769AC() == Global_2405072.f_2466)
		{
			UNK_0xDA46A23FFDBCF876();
		}
		else
		{
			UNK_0xDA46A23FFDBCF876();
		}
		Global_2405072.f_2464 = 0;
	}
}

int func_239(bool bParam0)
{
	if (UNK_0x757EF87A33649210())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

bool func_240(bool bParam0)
{
	if (bParam0 == 0)
	{
		return true;
	}
	UNK_0x523BCC9DC80CD82F(bParam0);
	return UNK_0xB87F6CF6E5628C67(bParam0);
}

bool func_241(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return Local_63.f_49;
	}
	return false;
}

bool func_242()
{
	if (bLocal_286 == 0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 4))
		{
			return true;
		}
	}
	return false;
}

bool func_243()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	var uVar9;

	if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, false))
	{
		UNK_0x5D96D8530B3D0904(&(Local_63.f_2), false);
		if (bLocal_286 != 0)
		{
			return true;
		}
		else if (func_6(bLocal_288, 1, 1))
		{
			if (UNK_0x9BFC2168CB5FCF68(false, 0) - UNK_0xA108079788452A90(0)) >= func_479(bLocal_286)
			{
				if (UNK_0xA3FA8B6D2780D661(func_479(bLocal_286)))
				{
					iVar0 = 0;
					iVar1 = 0;
					bVar2 = UNK_0x9539D44F3E4492F6(bLocal_288);
					iVar3 = UNK_0x263615A674FCA6E9(bVar2, &uLocal_471, -1);
					bVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = -1;
							bVar4 = false;
							iVar1 = 0;
							while (iVar1 < func_479(bLocal_286))
							{
								if (iVar5 == -1)
								{
									if (((!UNK_0xE9F78D191AD5EDBA(Local_63.f_10[iVar1 /*7*/]) && !UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar1 /*7*/].f_2, true)) && !UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar1 /*7*/].f_2, 6)) && !UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										bVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != -1)
							{
								if (UNK_0xC844350D5D58C99A(uLocal_471[iVar0]))
								{
									if (!UNK_0x437347B10A200C4B(uLocal_471[iVar0], 0))
									{
										if (!UNK_0x34BFC6F0CB887BC2(uLocal_471[iVar0]))
										{
											if (func_245(UNK_0x134B62B726CEC8E6(uLocal_471[iVar0])))
											{
												if (!UNK_0xAF6690C489CC6203(uLocal_471[iVar0]))
												{
													if (!UNK_0x405E212DDE472467(uLocal_471[iVar0], 0))
													{
														if (func_5(UNK_0x68F4C0EC296D3901(uLocal_471[iVar0], true), UNK_0x68F4C0EC296D3901(bVar2, true), 625f))
														{
															UNK_0x73270B3C9CC833FD(uLocal_471[iVar0], true, 0);
															Local_63.f_10[iVar5 /*7*/].f_6 = iVar0;
															UNK_0x5D96D8530B3D0904(&(Local_63.f_10[iVar5 /*7*/].f_2), 8);
															if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 12))
															{
																Local_63.f_8 = iLocal_293;
																UNK_0x5D96D8530B3D0904(&(Local_63.f_1), 12);
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
						iVar0++;
					}
				}
			}
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 12))
	{
		iVar6 = 0;
		iVar7 = 0;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < func_479(bLocal_286))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar6 /*7*/].f_2, true) || UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar6 /*7*/].f_2, 8))
			{
				if (!UNK_0x437347B10A200C4B(uLocal_471[Local_63.f_10[iVar6 /*7*/].f_6], 0))
				{
					if (UNK_0xAF6690C489CC6203(uLocal_471[Local_63.f_10[iVar6 /*7*/].f_6]))
					{
						if (!UNK_0xAFE0D3608EDA7039(uLocal_471[Local_63.f_10[iVar6 /*7*/].f_6]))
						{
							UNK_0x0C8A454B494DAA0D(uLocal_471[Local_63.f_10[iVar6 /*7*/].f_6]);
							bVar8 = true;
						}
						else
						{
							UNK_0xE3A2D2E900FEFBE7(uLocal_471[Local_63.f_10[iVar6 /*7*/].f_6], 1);
							Local_63.f_10[iVar6 /*7*/] = UNK_0xE8C9CB886096272A(uLocal_471[Local_63.f_10[iVar6 /*7*/].f_6]);
							UNK_0xF4F945BB00F6E31C(Local_63.f_10[iVar6 /*7*/], 1);
							UNK_0x5D96D8530B3D0904(&(Local_63.f_10[iVar6 /*7*/].f_2), false);
							Local_63.f_10[iVar6 /*7*/].f_1 = bLocal_286;
							Local_63.f_10[iVar6 /*7*/].f_4 = func_70(bLocal_286);
							func_68(iVar6);
							UNK_0x0674E58A79778E99(&(Local_63.f_10[iVar6 /*7*/].f_2), 8);
							iVar7++;
						}
					}
					else
					{
						bVar8 = true;
					}
				}
			}
			iVar6++;
		}
		if (!bVar8 || UNK_0x519D13E6C1911A0B(iLocal_293, Local_63.f_8) > 5000)
		{
			if (iVar7 >= func_479(bLocal_286))
			{
				UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_471[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < func_479(bLocal_286))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar6 /*7*/].f_2, 8))
				{
					func_244(&(Local_63.f_10[iVar6 /*7*/]));
					UNK_0x0674E58A79778E99(&(Local_63.f_10[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			UNK_0x0674E58A79778E99(&(Local_63.f_1), 12);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_244(int iParam0)
{
	bool bVar0;

	if (UNK_0xE5DBF9B6126856CA(*iParam0))
	{
		bVar0 = UNK_0xA5FBBC2F619A4DE2(*iParam0);
		UNK_0x82692E8F6A0D7A22(&bVar0);
	}
}

bool func_245(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("MP_M_FREEMODE_01") || iParam0 == joaat("MP_M_FIBSEC_01")) || iParam0 == joaat("MP_S_M_ARMOURED_01")) || iParam0 == joaat("S_F_Y_AIRHOSTESS_01")) || iParam0 == joaat("S_F_Y_BAYWATCH_01")) || iParam0 == joaat("S_F_Y_COP_01")) || iParam0 == joaat("S_F_Y_RANGER_01")) || iParam0 == joaat("S_F_Y_SCRUBS_01")) || iParam0 == joaat("S_F_Y_SHERIFF_01")) || iParam0 == joaat("S_M_M_ARMOURED_01")) || iParam0 == joaat("S_M_M_ARMOURED_02")) || iParam0 == joaat("S_M_M_BOUNCER_01")) || iParam0 == joaat("S_M_M_CIASEC_01")) || iParam0 == joaat("S_M_M_CHEMSEC_01")) || iParam0 == joaat("S_M_M_DOCTOR_01")) || iParam0 == joaat("S_M_M_FIBOFFICE_01")) || iParam0 == joaat("S_M_M_FIBOFFICE_02")) || iParam0 == joaat("S_M_M_HIGHSEC_01")) || iParam0 == joaat("S_M_M_HIGHSEC_02")) || iParam0 == joaat("S_M_M_JANITOR")) || iParam0 == joaat("S_M_M_LSMETRO_01")) || iParam0 == joaat("S_M_M_MARINE_01")) || iParam0 == joaat("S_M_M_MARINE_02")) || iParam0 == joaat("S_M_M_PARAMEDIC_01")) || iParam0 == joaat("S_M_M_PILOT_01")) || iParam0 == joaat("S_M_M_PILOT_02")) || iParam0 == joaat("S_M_M_POSTAL_01")) || iParam0 == joaat("S_M_M_POSTAL_02")) || iParam0 == joaat("S_M_M_PRISGUARD_01")) || iParam0 == joaat("S_M_M_SCIENTIST_01")) || iParam0 == joaat("S_M_M_SECURITY_01")) || iParam0 == joaat("S_M_M_UPS_01")) || iParam0 == joaat("S_M_M_UPS_02")) || iParam0 == joaat("S_M_Y_AIRWORKER")) || iParam0 == joaat("S_M_Y_ARMYMECH_01")) || iParam0 == joaat("S_M_Y_BAYWATCH_01")) || iParam0 == joaat("S_M_Y_BLACKOPS_01")) || iParam0 == joaat("S_M_Y_BLACKOPS_02")) || iParam0 == joaat("S_M_Y_COP_01")) || iParam0 == joaat("S_M_Y_DOORMAN_01")) || iParam0 == joaat("S_M_Y_FIREMAN_01")) || iParam0 == joaat("S_M_Y_GARBAGE")) || iParam0 == joaat("S_M_Y_HWAYCOP_01")) || iParam0 == joaat("S_M_Y_MARINE_01")) || iParam0 == joaat("S_M_Y_MARINE_02")) || iParam0 == joaat("S_M_Y_MARINE_03")) || iParam0 == joaat("S_M_Y_PILOT_01")) || iParam0 == joaat("S_M_Y_RANGER_01")) || iParam0 == joaat("S_M_Y_SHERIFF_01")) || iParam0 == joaat("S_M_Y_SWAT_01")) || iParam0 == joaat("S_M_Y_USCG_01")) || iParam0 == joaat("S_M_Y_VALET_01")) || iParam0 == joaat("S_M_Y_WAITER_01")) || iParam0 == joaat("U_M_M_JEWELSEC_01")) || iParam0 == joaat("S_M_Y_CASINO_01"))
	{
		return false;
	}
	return true;
}

bool func_246()
{
	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 6))
	{
		return true;
	}
	else if (bLocal_286 == 0)
	{
		Local_63.f_49 = func_247(Local_63.f_36, 1);
		UNK_0x5D96D8530B3D0904(&(Local_63.f_1), 6);
		return true;
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Local_63.f_1), 6);
		return true;
	}
	return false;
}

int func_247(vector3 vParam0, int iParam3)
{
	int iVar0;

	if (func_248(vParam0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("G_M_Y_MEXGOON_01");
	}
	else if (func_248(vParam0, 1100f, -196f, 300f, 350f, 0) || func_248(vParam0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("G_M_Y_LOST_01");
	}
	else if (func_248(vParam0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("G_M_Y_BALLAORIG_01");
	}
	else if (func_248(vParam0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("G_M_Y_FAMCA_01");
	}
	else if (func_248(vParam0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("G_M_Y_KOREAN_02");
	}
	else if (func_248(vParam0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("A_M_M_HILLBILLY_02");
	}
	else if (func_248(vParam0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("G_M_Y_SALVAGOON_01");
	}
	else if (iParam3 == 1)
	{
		iVar0 = UNK_0x09AC81E49EA267F7(false, 100);
		if (iVar0 < 33)
		{
			return joaat("MP_G_M_PROS_01");
		}
		else if (iVar0 >= 66)
		{
			return joaat("G_M_M_ARMGOON_01");
		}
		else
		{
			return joaat("G_M_M_CHIGOON_01");
		}
		if (vParam0.y > 800f)
		{
			iVar0 = UNK_0x09AC81E49EA267F7(false, 100);
			if (iVar0 < 33)
			{
				return joaat("A_M_M_HILLBILLY_02");
			}
		}
	}
	return joaat("MP_G_M_PROS_01");
}

bool func_248(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7)
{
	return UNK_0x0EB28750412C3A5A(vParam0, vParam3, iParam7) <= fParam6;
}

void func_249(bool bParam0)
{
	if (UNK_0xEB6A8945D1AC98A1(bParam0))
	{
	}
	Local_63.f_36 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	if (func_250(bParam0, 0))
	{
		UNK_0x5D96D8530B3D0904(&(Local_63.f_1), 17);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Local_63.f_1), 17);
	}
}

bool func_250(bool bParam0, bool bParam1)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0) || bParam1)
		{
			if (UNK_0x70EED0761B82965E(bParam0))
			{
				if (UNK_0xFC0E4F7E386C43F8(bParam0) >= 0.7f)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_251()
{
	bool bVar0;

	if (UNK_0xBFF81ED3B99522C7())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 7))
		{
			return true;
		}
		else
		{
			bVar0 = false;
			switch (bLocal_286)
			{
				case 0:
					if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 11))
					{
						if (func_6(bLocal_288, 1, 1))
						{
							if (SYSTEM::VDIST2(func_8(bLocal_288), Local_63.f_39) > 625f)
							{
								UNK_0x0674E58A79778E99(&(Local_63.f_2), 11);
								UNK_0x0674E58A79778E99(&bLocal_280, 8);
							}
						}
					}
					else
					{
						if (func_6(bLocal_288, 1, 1))
						{
							bVar0 = true;
							if (func_254())
							{
								bVar0 = false;
							}
						}
						if (bVar0)
						{
							func_63();
						}
						else
						{
							func_64();
						}
						if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 5))
						{
							if (func_253())
							{
								func_64();
								UNK_0x5D96D8530B3D0904(&(Local_63.f_1), 7);
							}
						}
					}
					break;
				case 1:
					if (func_6(bLocal_288, 1, 1))
					{
						bVar0 = true;
						if (func_252())
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						func_63();
					}
					else
					{
						func_64();
					}
					if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 5))
					{
						if (UNK_0x519D13E6C1911A0B(iLocal_293, Local_63.f_5) > 30000)
						{
							func_64();
							UNK_0x5D96D8530B3D0904(&(Local_63.f_1), 7);
						}
					}
					break;
			}
		}
	}
	return false;
}

bool func_252()
{
	bool bVar0;

	bVar0 = UNK_0x9539D44F3E4492F6(bLocal_288);
	if (((((UNK_0xE934758D273C899A(bVar0) || UNK_0x70EED0761B82965E(bVar0)) || func_29(bLocal_288, 1, 1)) || func_42(bLocal_288, 0)) || func_42(bLocal_288, 7)) || func_28(bLocal_288))
	{
		return true;
	}
	if (func_118(bLocal_288, 1))
	{
		if (bLocal_288 > -1)
		{
			if (Global_1590535[bLocal_288 /*876*/] != 1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_253()
{
	if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 18))
	{
		if (UNK_0x519D13E6C1911A0B(iLocal_293, Local_63.f_5) > 5000)
		{
			UNK_0x5D96D8530B3D0904(&(Local_63.f_1), 18);
			return true;
		}
	}
	else if (UNK_0x519D13E6C1911A0B(iLocal_293, Local_63.f_5) > 60000)
	{
		return true;
	}
	return false;
}

bool func_254()
{
	bool bVar0;

	bVar0 = UNK_0x9539D44F3E4492F6(bLocal_288);
	if (((((((((UNK_0x9C66D99E63E8E24C(bVar0) > 10f || UNK_0xE934758D273C899A(bVar0)) || UNK_0x70EED0761B82965E(bVar0)) || func_29(bLocal_288, 1, 1)) || func_62(bLocal_288)) || func_42(bLocal_288, 0)) || func_42(bLocal_288, 7)) || func_28(bLocal_288)) || Global_2425662[bLocal_288 /*421*/].f_238) || func_61(UNK_0x9539D44F3E4492F6(bLocal_288), joaat("TITAN")))
	{
		return true;
	}
	if (func_118(bLocal_288, 1))
	{
		if (bLocal_288 > -1)
		{
			if (Global_1590535[bLocal_288 /*876*/] != 1)
			{
				return true;
			}
		}
	}
	if (bLocal_288 != -1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_119[bLocal_288 /*5*/].f_1, 4))
		{
			return true;
		}
	}
	return false;
}

void func_255()
{
	if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 14))
	{
		Local_63.f_9 = iLocal_293;
		UNK_0x5D96D8530B3D0904(&(Local_63.f_1), 14);
	}
}

void func_256()
{
	if (Local_63.f_44 != Local_119[bLocal_287 /*5*/].f_4)
	{
		Local_63.f_44 = Local_119[bLocal_287 /*5*/].f_4;
	}
}

void func_257()
{
	if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 10))
	{
		Local_63.f_45 = func_479(bLocal_286);
		Local_63.f_46 = 0;
		Local_63.f_47 = 0;
		UNK_0x5D96D8530B3D0904(&(Local_63.f_1), 10);
	}
}

void func_258()
{
	func_259();
	if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 8))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 7))
		{
			if (UNK_0x519D13E6C1911A0B(iLocal_293, Local_63.f_7) > 300000)
			{
				UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			}
		}
	}
}

void func_259()
{
	if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 7))
	{
		Local_63.f_7 = iLocal_293;
		UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 7);
	}
}

void func_260()
{
	int iVar0;
	int iVar1;
	int iVar2;

	UNK_0x5D96D8530B3D0904(&bLocal_280, 7);
	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_3, true))
	{
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_3, 2))
	{
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_3, 3))
	{
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_3, 9))
	{
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_3, 4))
	{
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_3, 5))
	{
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_3, 11))
	{
		if (UNK_0xD803B885F5E47A62() == bLocal_287)
		{
			UNK_0x0674E58A79778E99(&bLocal_280, 7);
			if (Local_63.f_50 || Local_63.f_52)
			{
				UNK_0x5D96D8530B3D0904(&bLocal_280, 7);
			}
			else if (func_374("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				UNK_0x5D96D8530B3D0904(&bLocal_280, 7);
			}
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_3, 6))
	{
		if (UNK_0xD803B885F5E47A62() == bLocal_287)
		{
			UNK_0x0674E58A79778E99(&bLocal_280, 7);
			if (Local_63.f_50 || Local_63.f_52)
			{
				UNK_0x5D96D8530B3D0904(&bLocal_280, 7);
			}
			else if (func_374("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				UNK_0x5D96D8530B3D0904(&bLocal_280, 7);
			}
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_3, 7))
	{
		if (UNK_0xD803B885F5E47A62() == bLocal_287)
		{
			UNK_0x0674E58A79778E99(&bLocal_280, 7);
			if (func_339())
			{
				if (!Local_63.f_50)
				{
					if (Local_63.f_52)
					{
						bLocal_488 = func_338(Local_63.f_53);
					}
					else
					{
						bLocal_488 = func_334(12);
					}
					if (bLocal_488 > 0)
					{
						func_332(bLocal_488, 1, 0, 0f);
						func_317(bLocal_488, 4, 1, 1);
					}
					UNK_0x5D96D8530B3D0904(&bLocal_280, 7);
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&bLocal_280, 7);
				}
			}
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_3, false))
	{
		if (UNK_0xD803B885F5E47A62() == bLocal_287)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, true))
			{
				UNK_0x0674E58A79778E99(&bLocal_280, 7);
				if (func_374("MPCT_mugfail", "LAMAR", 19))
				{
					UNK_0x5D96D8530B3D0904(&bLocal_280, 7);
				}
			}
		}
		else if (UNK_0xD803B885F5E47A62() == bLocal_288)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, true))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 12))
				{
					iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_6642) * Global_262145.f_4294));
					func_276(0, "XPT_MEDIUMT", -1859646258, 757237446, iVar0, 1, -1, 0);
					func_262(47, 1);
				}
			}
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_3, 8))
	{
		if (UNK_0xD803B885F5E47A62() == bLocal_287)
		{
			UNK_0x0674E58A79778E99(&bLocal_280, 7);
			if (func_339())
			{
				if (bLocal_286 == 0)
				{
					bLocal_488 = (func_334(2) * func_479(bLocal_286));
					iVar1 = 3;
				}
				else
				{
					if (Local_63.f_52)
					{
						bLocal_488 = func_338(Local_63.f_53);
					}
					else
					{
						bLocal_488 = func_334(12);
					}
					iVar1 = 4;
				}
				if (!Local_63.f_50)
				{
					if (bLocal_488 > 0)
					{
						func_332(bLocal_488, 1, 0, 0f);
						func_317(bLocal_488, iVar1, 1, 0);
					}
					UNK_0x5D96D8530B3D0904(&bLocal_280, 7);
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&bLocal_280, 7);
				}
			}
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_3, 10))
	{
		if (UNK_0xD803B885F5E47A62() == bLocal_287)
		{
			UNK_0x0674E58A79778E99(&bLocal_280, 7);
			if (func_339())
			{
				if (bLocal_286 == 0)
				{
					bLocal_488 = (func_334(2) * func_479(bLocal_286));
					iVar2 = 3;
				}
				else
				{
					if (Local_63.f_52)
					{
						bLocal_488 = func_338(Local_63.f_53);
					}
					else
					{
						bLocal_488 = func_334(12);
					}
					iVar2 = 4;
				}
				if (!Local_63.f_50)
				{
					if (bLocal_488 > 0)
					{
						func_332(bLocal_488, 1, 0, 0f);
						func_317(bLocal_488, iVar2, 1, 0);
					}
					UNK_0x5D96D8530B3D0904(&bLocal_280, 7);
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&bLocal_280, 7);
				}
			}
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_280, 7))
	{
		func_261();
	}
}

void func_261()
{
	UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0x6E61BE9E61434AC1() /*876*/].f_143), bLocal_286);
	Global_1590535[UNK_0x6E61BE9E61434AC1() /*876*/].f_144 = -1;
	if (bLocal_286 == 1)
	{
		if (UNK_0xC77B2658E98CC4E5(uLocal_470))
		{
			UNK_0x201044F0E8495AF6(uLocal_470);
		}
	}
	func_508();
	func_540();
}

int func_262(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_263(iParam0, iParam1);
}

int func_263(int iParam0, int iParam1)
{
	if (func_275(14) && !func_274(iParam0))
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
	if (func_273(&Global_4270065))
	{
		if (func_271(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_264(&Global_4270065, iParam0))
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

bool func_264(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_275(14) && !func_274(iParam1))
	{
		return false;
	}
	if (func_271(uParam0, iParam1))
	{
		return false;
	}
	if (func_270(uParam0) < 0f)
	{
		func_269(uParam0, 0);
	}
	func_267(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_265(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_265(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_275(14) && !func_274(iParam1))
	{
		return 0;
	}
	if (func_271(uParam0, iParam1))
	{
		return 0;
	}
	if (func_270(uParam0) < 0f)
	{
		func_269(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_266(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_266(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_267(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_268(uParam0, iVar0);
		iVar0++;
	}
	func_269(uParam0, (Global_4270064 - 0.5f));
}

void func_268(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_269(var uParam0, float fParam1)
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

float func_270(var uParam0)
{
	return uParam0->f_80;
}

bool func_271(var uParam0, int iParam1)
{
	return func_272(uParam0, iParam1) != -1;
}

int func_272(var uParam0, int iParam1)
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

bool func_273(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_274(int iParam0)
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

bool func_275(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_276(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_277(iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

bool func_277(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;

	bVar0 = func_278(iParam0, 0, bParam1, iParam4, iParam5, 0, iParam6, 1, bParam2, iParam3, bParam7);
	return bVar0;
}

bool func_278(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	float fVar3;

	if (func_316(UNK_0xD803B885F5E47A62()) || func_315(UNK_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_9635 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9635;
		}
	}
	else if (func_313() || func_311(UNK_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_22774 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22774;
		}
	}
	else if (Global_262145.f_6635 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6635;
	}
	if (func_310(bParam2))
	{
	}
	if (func_309())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		bVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		bVar1 = func_307(bVar1);
		fVar3 = (SYSTEM::TO_FLOAT(bVar1) * Global_262145.f_1);
		bVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			bVar1 = func_306(&bVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_304(0, &bVar1);
					break;
				case 3:
					func_304(1, &bVar1);
					break;
				case 1:
					func_302(&bVar1);
					break;
			}
		}
		if (bVar1 > Global_1686714)
		{
			return false;
		}
		if (iParam1 == 0)
		{
			if (bVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					bVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					bVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_299(1164, bVar1, -1);
			if (iParam1 == 0)
			{
				func_288((func_298(UNK_0xD803B885F5E47A62()) + bVar1), iParam9, 0);
				if (bParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				UNK_0x189A6F4108CDFDD6(bVar1, bParam8, iParam9);
				if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_2 != -1)
				{
					func_299(1165, bVar1, -1);
				}
				func_283(bVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_279((func_281(UNK_0xD803B885F5E47A62()) + bVar1));
			}
			else
			{
				func_279((func_281(UNK_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return bVar1;
}

void func_279(bool bParam0)
{
	if (func_309())
	{
		Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_5 = bParam0;
		func_280(joaat("MPPLY_GLOBALXP"), bParam0);
	}
}

void func_280(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, 1);
	}
}

int func_281(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (func_6(bParam0, 0, 1))
		{
			if (bParam0 == UNK_0xD803B885F5E47A62())
			{
				return func_282(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_5;
			}
		}
		else
		{
			return func_282(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_282(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_283(bool bParam0)
{
	struct<13> Var0;
	int iVar13;

	Var0 = { func_144(UNK_0xD803B885F5E47A62()) };
	if (UNK_0x080E9D045AEE5605())
	{
		if (UNK_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar13 = func_286(func_287(&Var0));
			if (iVar13 == 0)
			{
				func_285(&Global_1387915, bParam0);
				func_284(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_285(&Global_1387916, bParam0);
				func_284(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_285(&Global_1387917, bParam0);
				func_284(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_285(&Global_1387918, bParam0);
				func_284(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_285(&Global_1387919, bParam0);
				func_284(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1387919);
			}
		}
	}
}

void func_284(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1387910 = bParam1;
			break;
		case joaat("MPPLY_CREW_1_ID"):
			Global_1387912 = bParam1;
			break;
		case joaat("MPPLY_CREW_2_ID"):
			Global_1387912 = bParam1;
			break;
		case joaat("MPPLY_CREW_3_ID"):
			Global_1387913 = bParam1;
			break;
		case joaat("MPPLY_CREW_4_ID"):
			Global_1387914 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1387915 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1387916 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1387917 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1387918 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1387919 = bParam1;
			break;
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1387920 = bParam1;
			break;
		case joaat("MPPLY_FRIENDLY"):
			Global_1387921 = bParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1387922 = bParam1;
			break;
		case joaat("MPPLY_GRIEFING"):
			Global_1387923 = bParam1;
			break;
		case joaat("MPPLY_HELPFUL"):
			Global_1387924 = bParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1387925 = bParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1387926 = bParam1;
			break;
		default:
			break;
	}
}

void func_285(var uParam0, bool bParam1)
{
	*uParam0 = (*uParam0 + bParam1);
}

int func_286(int iParam0)
{
	if (iParam0 == Global_1387910)
	{
		return 0;
	}
	else if (iParam0 == Global_1387911)
	{
		return 1;
	}
	else if (iParam0 == Global_1387912)
	{
		return 2;
	}
	else if (iParam0 == Global_1387913)
	{
		return 3;
	}
	else if (iParam0 == Global_1387914)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_287(var uParam0)
{
	if (UNK_0x080E9D045AEE5605())
	{
		if (UNK_0xF2EC2A39FF9E838D(uParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

void func_288(bool bParam0, int iParam1, int iParam2)
{
	if (func_309())
	{
		if (bParam0 >= 1787576850)
		{
			bParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (bParam0 < Global_1388060[func_297(-1)])
				{
					UNK_0x189A6F4108CDFDD6(bParam0, -523908350, iParam1);
					return;
				}
				else if (bParam0 == Global_1388060[func_297(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (bParam0 == 0)
			{
				UNK_0x189A6F4108CDFDD6(bParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (bParam0 < 0)
			{
				UNK_0x189A6F4108CDFDD6(bParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_296(UNK_0xD803B885F5E47A62()))
		{
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_1 = bParam0;
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_6 = func_294(bParam0, 1);
		}
		func_293(639, bParam0, -1, 1);
		func_292(640, func_294(bParam0, 1), -1, 1, 0);
		Global_1388060[func_297(-1)] = bParam0;
		func_289(-1109644434, 7, 0);
	}
}

void func_289(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_291(iParam1, bParam2))
	{
		iVar0 = func_290();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_290()
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

bool func_291(int iParam0, bool bParam1)
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

void func_292(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_297(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

void func_293(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = Global_2548434[iParam0 /*3*/][func_297(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_297(iParam2)] = bParam1;
			break;
		case 788:
			Global_1387994[func_297(iParam2)] = bParam1;
			break;
		case 789:
			Global_1388000[func_297(iParam2)] = bParam1;
			break;
		case 790:
			Global_1388006[func_297(iParam2)] = bParam1;
			break;
		case 8726:
			Global_1388012[func_297(iParam2)] = bParam1;
			break;
		case 777:
			Global_1387958[func_297(iParam2)] = bParam1;
			break;
		case 778:
			Global_1387964[func_297(iParam2)] = bParam1;
			break;
		case 779:
			Global_1387970[func_297(iParam2)] = bParam1;
			break;
		case 780:
			Global_1387976[func_297(iParam2)] = bParam1;
			break;
		case 8728:
			Global_1387982[func_297(iParam2)] = bParam1;
			break;
		case 767:
			Global_1387928[func_297(iParam2)] = bParam1;
			break;
		case 768:
			Global_1387934[func_297(iParam2)] = bParam1;
			break;
		case 769:
			Global_1387940[func_297(iParam2)] = bParam1;
			break;
		case 770:
			Global_1387946[func_297(iParam2)] = bParam1;
			break;
		case 8730:
			Global_1387952[func_297(iParam2)] = bParam1;
			break;
		case 757:
			Global_1388018[func_297(iParam2)] = bParam1;
			break;
		case 758:
			Global_1388024[func_297(iParam2)] = bParam1;
			break;
		case 759:
			Global_1388030[func_297(iParam2)] = bParam1;
			break;
		case 760:
			Global_1388036[func_297(iParam2)] = bParam1;
			break;
		case 8732:
			Global_1388042[func_297(iParam2)] = bParam1;
			break;
		case 1303:
			Global_1388048[func_297(iParam2)] = bParam1;
			break;
		case 7233:
			Global_1388054[func_297(iParam2)] = bParam1;
			break;
		case 639:
			Global_1388060[func_297(iParam2)] = bParam1;
			break;
		case 1278:
			Global_1388066[func_297(iParam2)] = bParam1;
			break;
		case 1876:
			Global_2586065[0 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 2267:
			Global_2586065[1 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 2929:
			Global_2586065[2 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3058:
			Global_2586065[3 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 10016:
			Global_2586214[func_297(iParam2)] = bParam1;
			break;
		case 764:
			Global_1388072[func_297(iParam2)] = bParam1;
			break;
		case 765:
			Global_1388078[func_297(iParam2)] = bParam1;
			break;
		case 766:
			Global_1388084[func_297(iParam2)] = bParam1;
			break;
		case 8731:
			Global_1388090[func_297(iParam2)] = bParam1;
			break;
		case 1236:
			Global_1388096[func_297(iParam2)] = bParam1;
			break;
		case 3053:
			Global_2586138[0 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3054:
			Global_2586138[1 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3055:
			Global_2586138[2 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3056:
			Global_2586138[3 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3057:
			Global_2586138[4 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3636:
			Global_2586217[0 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3637:
			Global_2586217[1 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3638:
			Global_2586217[2 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3639:
			Global_2586217[3 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3640:
			Global_2586217[4 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3641:
			Global_2586233[0 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3642:
			Global_2586233[1 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3643:
			Global_2586233[2 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3644:
			Global_2586233[3 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3645:
			Global_2586233[4 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3221:
			Global_2586138[5 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3227:
			Global_2586065[4 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3663:
			Global_2586249[func_297(iParam2)] = bParam1;
			break;
		case 3664:
			Global_2586258[func_297(iParam2)] = bParam1;
			break;
		case 3665:
			Global_2586252[func_297(iParam2)] = bParam1;
			break;
		case 3666:
			Global_2586261[func_297(iParam2)] = bParam1;
			break;
		case 3667:
			Global_2586255[func_297(iParam2)] = bParam1;
			break;
		case 3668:
			Global_2586264[func_297(iParam2)] = bParam1;
			break;
		case 3689:
			Global_2586267[func_297(iParam2)] = bParam1;
			break;
		case 3229:
			Global_2586138[6 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3230:
			Global_2586065[5 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3234:
			Global_2586138[7 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 3232:
			Global_2586065[6 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 4019:
			Global_2586138[8 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 4020:
			Global_2586065[7 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 4022:
			Global_2586138[9 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 4023:
			Global_2586065[8 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 4025:
			Global_2586138[10 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 4026:
			Global_2586065[9 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 4028:
			Global_2586138[11 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 4029:
			Global_2586065[10 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 6109:
			Global_2586138[12 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 6110:
			Global_2586065[11 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 6167:
			Global_2586138[13 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 6168:
			Global_2586065[12 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 6545:
			Global_2586138[14 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 6546:
			Global_2586065[13 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 6558:
			Global_2586138[15 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 6559:
			Global_2586065[14 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 6561:
			Global_2586138[16 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 6562:
			Global_2586065[15 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 6564:
			Global_2586138[17 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 6565:
			Global_2586065[16 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 7283:
			Global_2586065[17 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 7285:
			Global_2586065[18 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 7287:
			Global_2586065[19 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 8010:
			Global_2586065[20 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 8282:
			Global_2586270[func_297(iParam2)] = bParam1;
			break;
		case 8283:
			Global_2586273[func_297(iParam2)] = bParam1;
			break;
		case 8284:
			Global_2586276[func_297(iParam2)] = bParam1;
			break;
		case 8285:
			Global_2586279[func_297(iParam2)] = bParam1;
			break;
		case 8286:
			Global_2586282[func_297(iParam2)] = bParam1;
			break;
		case 8287:
			Global_2586285[func_297(iParam2)] = bParam1;
			break;
		case 8288:
			Global_2586288[func_297(iParam2)] = bParam1;
			break;
		case 8289:
			Global_2586291[func_297(iParam2)] = bParam1;
			break;
		case 8290:
			Global_2586294[func_297(iParam2)] = bParam1;
			break;
		case 8291:
			Global_2586297[func_297(iParam2)] = bParam1;
			break;
		case 8292:
			Global_2586300[func_297(iParam2)] = bParam1;
			break;
		case 8293:
			Global_2586303[func_297(iParam2)] = bParam1;
			break;
		case 8294:
			Global_2586306[func_297(iParam2)] = bParam1;
			break;
		case 8900:
			Global_2586309[func_297(iParam2)] = bParam1;
			break;
		case 8534:
			Global_2586065[21 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 8977:
			Global_2586138[23 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 8975:
			Global_2586065[22 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 8980:
			Global_2586138[24 /*3*/][func_297(iParam2)] = bParam1;
			break;
		case 8978:
			Global_2586065[23 /*3*/][func_297(iParam2)] = bParam1;
			break;
		default:
			break;
	}
}

int func_294(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_295(bParam0, 0);
}

int func_295(bool bParam0, int iParam1)
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
		if (Global_291133[iVar3] == bParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < bParam0)
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

bool func_296(bool bParam0)
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

int func_297(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_202();
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

int func_298(bool bParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (bParam0 > -1)
		{
			if (bParam0 == UNK_0xD803B885F5E47A62())
			{
				return Global_1388060[func_297(-1)];
			}
			else if (func_296(bParam0))
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_297(-1)];
	}
	return 0;
}

void func_299(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	bVar0 = func_301(iParam0, func_297(iParam2), 0);
	bVar0 = (bVar0 + bParam1);
	if (!func_300(iParam0))
	{
		func_292(iParam0, bVar0, iParam2, 1, 0);
	}
	else
	{
		func_293(iParam0, bVar0, iParam2, 1);
	}
}

bool func_300(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return true;
		}
	}
	return false;
}

int func_301(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_297(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_302(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;

	iVar1 = UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62());
	bVar0 = false;
	while (bVar0 < UNK_0x54EABC0DD106045B())
	{
		bVar4 = UNK_0xF4FB3A22FC4991C8(bVar0);
		if (UNK_0x81A93C8315C28F58(bVar4))
		{
			bVar5 = UNK_0x4B2BFE4A3BC248ED(bVar4);
			if (UNK_0x08067D4957B73C02(bVar5) != -1)
			{
				if (UNK_0x08067D4957B73C02(bVar5) == iVar1 || func_146(UNK_0x08067D4957B73C02(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != UNK_0xD803B885F5E47A62())
					{
						if (func_145(UNK_0xD803B885F5E47A62(), bVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_303(*bParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_303(*bParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*bParam0 = (*bParam0 + iVar6);
	*bParam0 = (*bParam0 + iVar7);
}

float func_303(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_304(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < UNK_0x54EABC0DD106045B())
		{
			bVar3 = iVar0;
			if (UNK_0x81A93C8315C28F58(bVar3))
			{
				bVar4 = UNK_0x4B2BFE4A3BC248ED(bVar3);
				if (func_6(bVar4, 0, 1))
				{
					if (bVar4 != UNK_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_145(UNK_0xD803B885F5E47A62(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar4 = iVar0;
			if (func_6(bVar4, 1, 1))
			{
				if (bVar4 != UNK_0xD803B885F5E47A62())
				{
					if (func_305(UNK_0xD803B885F5E47A62(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_145(UNK_0xD803B885F5E47A62(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_303(*bParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_303(*bParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*bParam1 = (*bParam1 + iVar5);
	*bParam1 = (*bParam1 + iVar6);
}

float func_305(bool bParam0, bool bParam1)
{
	return SYSTEM::VDIST(func_8(bParam0), func_8(bParam1));
	return 0f;
}

bool func_306(bool bParam0)
{
	int iVar0;

	if (UNK_0xA0501A3E65437842() != 3)
	{
		return *bParam0;
	}
	iVar0 = SYSTEM::ROUND((func_303(*bParam0, 100) * 25f));
	*bParam0 = (*bParam0 + iVar0);
	return *bParam0;
}

bool func_307(bool bParam0)
{
	if (bParam0 < 0)
	{
		if (UNK_0x51D1D19912234EA0(bParam0) > func_298(UNK_0xD803B885F5E47A62()))
		{
			bParam0 = -func_298(UNK_0xD803B885F5E47A62());
		}
	}
	if (func_308(8000, 0, 0) > 0)
	{
		if (func_308(8000, 0, 0) < (bParam0 + func_298(UNK_0xD803B885F5E47A62())))
		{
			bParam0 = (func_308(8000, 0, 0) - func_298(UNK_0xD803B885F5E47A62()));
		}
	}
	return bParam0;
}

int func_308(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_291133[iParam0];
}

bool func_309()
{
	return true;
}

bool func_310(bool bParam0)
{
	if (UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		return true;
	}
	else if (UNK_0x7F8A39872A07D2CE(bParam0, "") || UNK_0x7F8A39872A07D2CE(bParam0, "0"))
	{
		return true;
	}
	return false;
}

int func_311(bool bParam0)
{
	return func_312(func_39(bParam0));
}

int func_312(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_313()
{
	if (UNK_0xA14BB9332558B949())
	{
		return func_177();
	}
	return func_314(Global_4456448.f_194990);
}

int func_314(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_315(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_316(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

void func_317(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var4;
	int iVar12;
	int iVar13;

	StringCopy(&Var0, func_331(iParam1), 16);
	StringCopy(&Var4, func_330(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar12 = 1287308202;
			break;
		case 1:
			iVar12 = 691372038;
			break;
		case 2:
			iVar12 = 1480707108;
			break;
		case 3:
			iVar12 = 1512499951;
			break;
		case 4:
			iVar12 = 562283735;
			break;
		case 5:
			iVar12 = -154732333;
			break;
		case 6:
			iVar12 = -1362660491;
			break;
		case 7:
			iVar12 = 645708827;
			break;
		case 8:
			iVar12 = 767907967;
			break;
		case 9:
			iVar12 = -1970151306;
			break;
		case 10:
			iVar12 = 718859568;
			break;
		case 11:
			iVar12 = -1955564771;
			break;
		case 12:
			iVar12 = 892388724;
			break;
		case 13:
			iVar12 = -1426920838;
			break;
		case 14:
			iVar12 = -664597565;
			break;
		case 15:
			iVar12 = 1864522104;
			break;
		case 16:
			iVar12 = 215608230;
			break;
		case 17:
			iVar12 = -1100963799;
			break;
	}
	if (func_51())
	{
		func_318(iVar12, bParam0, &iVar13, bParam3, bParam3, 0);
		Global_4263954[iVar13 /*85*/].f_14.f_40 = { Var0 };
		Global_4263954[iVar13 /*85*/].f_14.f_44 = { Var4 };
	}
	else
	{
		UNK_0x70C6C7E43DEB92C4(bParam0, &Var0, &Var4, bParam3);
	}
}

void func_318(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_51())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (bParam1 > 0 || Global_262145.f_27584)
			{
				func_319(iParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
			}
			break;
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_319(iParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (bParam1 > 0 || Global_262145.f_27584)
			{
				func_319(iParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
			}
			break;
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
			func_319(iParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
			break;
	}
}

int func_319(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	bVar0 = false;
	if (!func_51())
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (!bVar0)
	{
		if (!UNK_0x79B28160739BC9E6(func_202()) || UNK_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263954[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*iParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || bVar1) || UNK_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, bParam5, iParam6))
	{
		if ((bVar0 || bVar1) || UNK_0x80C74F9931DCF063(iVar4))
		{
			*iParam0 = func_326(iVar4, iParam1, iParam4, iParam2, iParam3, bParam5, 0, iParam6, iParam7, 1, 1);
			if (bVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*iParam0 != -1)
				{
					Global_4263954[*iParam0 /*85*/].f_66.f_8 = 1;
					Global_4263954[*iParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264535 = 1;
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = bParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = bParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_325(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_320(-1, iParam4, iParam6, bParam5, -1);
		}
	}
	return 0;
}

void func_320(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			UNK_0x5D96D8530B3D0904(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_122.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_321(iParam0);
	}
}

void func_321(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_51())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_324(iParam0))
		{
			if (!bVar0)
			{
				UNK_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			UNK_0xA6EF5385F39BAC90(Global_4263954[iParam0 /*85*/].f_66);
		}
		func_322(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_322(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_323(&(uParam0->f_14));
	func_323(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_323(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

bool func_324(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return false;
}

void func_325(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_326(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_51())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4263954[iVar0 /*85*/].f_66.f_1 = bParam5;
			Global_4263954[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4263954[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4263954[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4263954[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4263954[iVar0 /*85*/].f_66 = iParam0;
			Global_4263954[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4263954[iVar0 /*85*/].f_66.f_11 = iParam8;
			Global_4263954[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4263954[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4263954[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4263954[iVar0 /*85*/].f_66.f_14 = UNK_0xF4CCC8CB6DE7F1AE();
			Global_4263954[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_327(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_327(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	vector3 vVar0;
	bool bVar36;

	if (iParam85 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 285918879;
	vVar0.f_1 = UNK_0xD803B885F5E47A62();
	vVar0.f_2 = { Param0.f_66 };
	vVar0.f_2.f_33 = iParam85;
	bVar36 = func_329(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!bVar36 == 0)
	{
		func_328();
		UNK_0xFB061A86A7AC749F(1, &vVar0, 36, bVar36);
	}
}

void func_328()
{
	UNK_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

bool func_329(bool bParam0)
{
	var uVar0;

	if (bParam0 != -1)
	{
		UNK_0x5D96D8530B3D0904(&uVar0, bParam0);
	}
	return uVar0;
}

char* func_330(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
		case 1:
			return "TARGET_ESCAPE";
		case 2:
			return "DELIVERY_FAIL";
		case 3:
			return "NOT_USED";
		case 4:
			return "TEAM_QUIT";
		case 5:
			return "SERVER_ERROR";
		case 6:
			return "RECEIVE_LJ_L";
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
	}
	return "DEFAULT";
}

char* func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		case 1:
			return "BACKUP_LOST";
		case 2:
			return "BACKUP_FAMILIES";
		case 3:
			return "HIRE_MUGGER";
		case 4:
			return "HIRE_MERCENARY";
		case 5:
			return "BUY_CARDROPOFF";
		case 6:
			return "HELI_PICKUP";
		case 7:
			return "BOAT_PICKUP";
		case 8:
			return "CLEAR_WANTED";
		case 9:
			return "HEAD_2_HEAD";
		case 10:
			return "CHALLENGE";
		case 11:
			return "SHARE_LAST_JOB";
		case 13:
			return "REFUNDAPPEA";
		case 14:
			return "AMMO_DROP_REF";
		case 15:
			return "ORBITAL_MANUAL";
		case 16:
			return "ORBITAL_AUTO";
		case 17:
			return "ARENA_SPEC_BOX";
		default:
			break;
	}
	return "DEFAULT";
}

void func_332(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (bParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_4 = iVar1;
	Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_3 = (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_333(iVar1, 0);
	}
}

void func_333(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_334(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_337(iParam0) >= 0)
	{
		iVar0 = func_337(iParam0);
	}
	else
	{
		iVar0 = func_335(iParam0);
	}
	return iVar0;
}

int func_335(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
		case 10:
			return 5000;
		case 11:
			return 8000;
		case 8:
			return 1000;
		case 0:
			return 500;
		case 9:
			return 250;
		case 13:
			return 1000;
		case 12:
			return 7500;
		case 2:
			return 1000;
		case 14:
			return 500;
		case 20:
			if (func_336())
			{
				return 0;
			}
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 1)
			{
				return 200;
			}
			else if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 2)
			{
				return 400;
			}
			else if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 3)
			{
				return 600;
			}
			else if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 4)
			{
				return 800;
			}
			else if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 5)
			{
				return 1000;
			}
			break;
		case 6:
			return 500;
		case 22:
			return 200;
		case 23:
			return 400;
		case 24:
			return 700;
		case 25:
			return 100;
		case 26:
			return 1000;
		case 57:
			return 700;
		case 35:
			return 5000;
		case 15:
			return 0;
		case 17:
			return 0;
		case 18:
			return 0;
		case 19:
			return 0;
		case 21:
			return 0;
		case 36:
			return 0;
		case 39:
			return 200;
		case 40:
			return 1000;
		case 41:
			return 750;
		case 42:
			return 0;
	}
	return 0;
}

bool func_336()
{
	return UNK_0xEAE0D21A50E6C7F4(func_301(6424, -1, 0), 19);
}

int func_337(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_6645;
		case 10:
			return Global_262145.f_4118;
		case 11:
			return Global_262145.f_4119;
		case 8:
			return Global_262145.f_4116;
		case 0:
			return Global_262145.f_4102;
		case 9:
			return Global_262145.f_4117;
		case 13:
			return Global_262145.f_4121;
		case 12:
			return Global_262145.f_4120;
		case 2:
			return Global_262145.f_4112;
		case 14:
			return Global_262145.f_4122;
		case 20:
			if (func_336())
			{
				return 0;
			}
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 1)
			{
				return Global_262145.f_6652;
			}
			else if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 2)
			{
				return Global_262145.f_6653;
			}
			else if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 3)
			{
				return Global_262145.f_6654;
			}
			else if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 4)
			{
				return Global_262145.f_6655;
			}
			else if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 5)
			{
				return Global_262145.f_6656;
			}
			break;
		case 6:
			return Global_262145.f_4115;
		case 22:
			return Global_262145.f_4128;
		case 23:
			return Global_262145.f_4129;
		case 24:
			return Global_262145.f_4130;
		case 25:
			return Global_262145.f_4131;
		case 26:
			return Global_262145.f_4132;
		case 35:
			return Global_262145.f_7221;
		case 15:
			return Global_262145.f_6646;
		case 17:
			return Global_262145.f_6646;
		case 18:
			return Global_262145.f_6646;
		case 19:
			return Global_262145.f_6646;
		case 21:
			return Global_262145.f_6646;
		case 36:
			return Global_262145.f_7688;
		case 39:
			return -1;
		case 40:
			return Global_262145.f_12884;
		case 41:
			return Global_262145.f_12885;
		case 42:
			return Global_262145.f_12886;
		case 43:
			return Global_262145.f_15429;
		case 44:
			return Global_262145.f_15431;
		case 57:
			return Global_262145.f_4130;
		case 58:
			return Global_262145.f_24998;
		case 62:
			return Global_262145.f_24999;
		case 63:
			return Global_262145.f_28457;
		case 64:
			return Global_262145.f_6646;
	}
	return 0;
}

int func_338(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_23456;
		case 2:
			return Global_262145.f_23457;
		case 3:
			return Global_262145.f_23458;
		default:
			break;
	}
	return 9999999;
}

bool func_339()
{
	bool bVar0;
	char* sVar1;
	bool bVar2;

	if (Local_63.f_50 || Local_63.f_52)
	{
		if (!Local_63.f_51)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_3, 7))
			{
				func_340("HS_UNABLE", bLocal_288, 0, 0, 0, 1, 0);
			}
		}
		return true;
	}
	switch (bLocal_286)
	{
		case 0:
			bVar0 = "MPCT_muglost";
			sVar1 = "LAMAR";
			bVar2 = 19;
			break;
		case 1:
			bVar0 = "MPCT_MERloc";
			sVar1 = "FM_MERRYWEATHER";
			bVar2 = 85;
			break;
	}
	if (func_374(bVar0, sVar1, bVar2))
	{
		return true;
	}
	return false;
}

int func_340(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;

	iVar0 = -1;
	iVar1 = UNK_0x08067D4957B73C02(bParam1);
	if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bParam1) || bParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, UNK_0x6E524813889AECF8(bParam1), 64);
		}
		else
		{
			StringCopy(&Var2, UNK_0x6E524813889AECF8(bParam1), 64);
		}
		if (UNK_0xEA6BC48857E0AC4C(&Var2))
		{
		}
		UNK_0x1E64CE678ED5F61E(bParam0);
		if ((iVar1 != -1 && UNK_0xA14BB9332558B949()) && iVar1 < 4)
		{
			if (Global_4456448.f_190067[iVar1] != -1)
			{
				UNK_0x3A820E495A7BA3E5(func_372(iVar1, bParam1, 0));
			}
			else
			{
				UNK_0x3A820E495A7BA3E5(func_348(bParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			UNK_0x3A820E495A7BA3E5(func_348(bParam1, -2, 1, 0, 0));
		}
		UNK_0xD06AC7C87A34A6AD(func_346(&Var2));
		if (!bParam4)
		{
			iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
		}
		else
		{
			Global_2513218 = { func_144(bParam1) };
			if (UNK_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218))
			{
				iVar18 = 0;
				if (UNK_0x7F8A39872A07D2CE(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2513148.f_21 > 0)
				{
					iVar19 = 0;
				}
				else
				{
					iVar19 = 1;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_345(&Var2) };
					}
					iVar0 = UNK_0x0D020422A92A2236(iVar19, UNK_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar18, 0, Global_2513148, &Var2, Global_1314034, Global_1314035, Global_1314036);
				}
				else
				{
					iVar0 = UNK_0xDCEBC63DB246F9AE(iVar19, UNK_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar18, 0, Global_2513148, Global_1314034, Global_1314035, Global_1314036);
				}
			}
			else
			{
				iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
			}
		}
		func_341(14, bParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_341(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;

	if ((!func_344() || !UNK_0xA14BB9332558B949()) || !func_200(UNK_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_342(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0 /*53*/] = iParam0;
		Global_1670846.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1670846.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1670846.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1670846.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1670846.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_342(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0 /*53*/].f_1)
		{
			func_343(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1670846++;
	if (Global_1670846 > 5)
	{
		Global_1670846 = 5;
		return Global_1670846;
	}
	return (Global_1670846 - 1);
}

void func_343(int iParam0)
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0 /*53*/] = { Global_1670846.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_344()
{
	return UNK_0xC146D5FBD23C6954(-1762644250);
}

struct<16> func_345(char* sParam0)
{
	struct<16> Var0;

	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_346(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_347(&cVar0);
}

char[] func_347(char[4] cParam0)
{
	return cParam0;
}

int func_348(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (func_147(bParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = UNK_0x08067D4957B73C02(bParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_190067[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_147(UNK_0xD803B885F5E47A62()) || (func_371() && func_370())) && !UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 31)) && !bParam4)
	{
		bVar1 = func_369();
		if (UNK_0xC844350D5D58C99A(bVar1))
		{
			if (UNK_0x34BFC6F0CB887BC2(bVar1))
			{
				if (UNK_0x83FACCC48B68F9D1(bVar1) != -1)
				{
					if (func_6(UNK_0x83FACCC48B68F9D1(bVar1), 0, 1))
					{
						if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_372(iParam1, bParam0, 0);
							}
							else
							{
								return func_360(bParam0, UNK_0x83FACCC48B68F9D1(bVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_360(bParam0, UNK_0x83FACCC48B68F9D1(bVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_372(iParam1, bParam0, 0);
				}
				else
				{
					return func_349(0, -1, 0);
				}
			}
			else
			{
				return func_349(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_372(iParam1, bParam0, 0);
		}
		else
		{
			return func_360(bParam0, UNK_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_360(bParam0, UNK_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_349(bool bParam0, int iParam1, bool bParam2)
{
	return func_350(UNK_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_350(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!UNK_0x40B8C182D63932FC(bParam0))
	{
		return 3;
	}
	iVar0 = UNK_0x08067D4957B73C02(bParam0);
	if ((func_359() || (func_358() && func_356())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_355(iParam2, iVar0);
		}
		else
		{
			return func_355(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_146(iVar0, iParam2, 0) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_354(1);
				}
				else
				{
					return func_354(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 20))
			{
				return func_351(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_351(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_354(1);
	}
	return func_354(0);
}

int func_351(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_353(iParam0, iParam1, iParam3);
	if (func_352(Global_4456448.f_194990, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			case 1:
				return 29;
			case 2:
				return 30;
			case 3:
				return 31;
			case 4:
				return 32;
			case 5:
				return 33;
			case 6:
				return 34;
			case 7:
				return 35;
			case 8:
				return 36;
			case 9:
				return 37;
			case 10:
				return 38;
			case 11:
				return 39;
			case 12:
				return 40;
			case 13:
				return 41;
			case 14:
				return 42;
			case 15:
				return 43;
			default:
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			case 1:
				return 29;
			case 2:
				return 30;
			default:
				break;
		}
	}
	return 28;
}

bool func_352(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (Global_4456448.f_232883 == 65)
		{
			return true;
		}
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_353(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_146(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_354(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_355(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_353(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 21;
		case 2:
			return 24;
		case 3:
			return 18;
		default:
			break;
	}
	return 28;
}

bool func_356()
{
	if (func_357())
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 4);
}

bool func_357()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_358()
{
	if (UNK_0xA14BB9332558B949())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, false);
	}
	return ((UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, false) || Global_1653478) && UNK_0x8A22C4C08282BF26(joaat("FM_DEATHMATCH_CREATOR")) > 0);
}

bool func_359()
{
	if (func_357() && UNK_0xA14BB9332558B949())
	{
		return true;
	}
	return false;
}

int func_360(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if (iParam2 == -2)
	{
		iVar0 = UNK_0x08067D4957B73C02(bParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 148)
	{
		bVar1 = true;
	}
	bVar2 = bParam0;
	if (bVar2 > -1)
	{
		if (Global_1590535[bVar2 /*876*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_365())
			{
				iVar3 = func_364(bParam0);
				if (!iVar3 == -1)
				{
					return func_362(iVar3);
				}
			}
			if ((func_184(bParam1, bParam0, iVar0, 0) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)) || ((func_146(UNK_0x08067D4957B73C02(bParam1), UNK_0x08067D4957B73C02(bParam0), 0) && UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 23)) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)))
			{
				return func_354(1);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26))
			{
				return func_361(1);
			}
			else
			{
				return func_350(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[bParam0 /*876*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_354(1);
			}
			else
			{
				return func_350(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_364(bParam0);
	if (!iVar4 == -1)
	{
		return func_362(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_361(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_362(int iParam0)
{
	int iVar0;

	if (iParam0 > -1)
	{
		iVar0 = func_363(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			case 1:
				return 193;
			case 2:
				return 194;
			case 3:
				return 195;
			case 4:
				return 196;
			case 5:
				return 197;
			case 6:
				return 198;
			case 7:
				return 199;
			case 8:
				return 200;
			case 9:
				return 201;
			case 10:
				return 202;
			case 11:
				return 203;
			case 12:
				return 204;
			case 13:
				return 205;
			case 14:
				return 206;
			default:
				break;
		}
	}
	return 1;
}

int func_363(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_364(bool bParam0)
{
	if (!bParam0 == func_13())
	{
		if (func_14(bParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_12(bParam0)];
		}
	}
	return -1;
}

bool func_365()
{
	if (((func_368() || func_367()) || func_177()) || func_366())
	{
		return true;
	}
	return false;
}

var func_366()
{
	return Global_2450632.f_19;
}

var func_367()
{
	return Global_2450632.f_16;
}

var func_368()
{
	return Global_2450632.f_15;
}

bool func_369()
{
	return Global_2359302.f_2;
}

bool func_370()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 4);
}

bool func_371()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

int func_372(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = Global_969031.f_14[iParam0];
	if (func_365())
	{
		iVar2 = func_364(bParam1);
		if (!iVar2 == -1)
		{
			return func_362(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iParam0 /*15700*/].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_13())
	{
		if (Global_4456448.f_190067[iParam0] != -1 && Global_4456448.f_190067[iParam0] <= 4)
		{
			if (Global_4456448.f_190067[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_190067[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_190067[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_190067[iParam0] == 4)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_190067[iParam0];
			}
		}
		else
		{
			iVar0 = func_350(bParam1, !bParam2, iParam0, 0);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_21, 13))
		{
			iVar0 = func_373(iParam0);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26) && !func_146(iParam0, UNK_0x08067D4957B73C02(bParam1), 0))
		{
			iVar0 = func_361(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_373(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_233007;
			break;
		case 1:
			iVar0 = Global_4456448.f_233008;
			break;
		case 2:
			iVar0 = Global_4456448.f_233009;
			break;
		case 3:
			iVar0 = Global_4456448.f_233010;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		case 1:
			return 21;
		case 2:
			return 24;
		case 3:
			return 18;
		case 4:
			return 6;
		case 5:
			return 9;
		case 6:
			return 3;
		case 7:
			return 1;
		case 8:
			return 12;
		case 9:
			return 2;
		default:
			break;
	}
	return 2;
}

bool func_374(bool bParam0, char* sParam1, bool bParam2)
{
	if (!UNK_0x7F8A39872A07D2CE(bParam0, "NULL"))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_285, false))
		{
			func_478(&uLocal_305, 3, 0, sParam1, 0, 1);
			if (func_376(&uLocal_305, bParam2, "CT_AUD", bParam0, 0, 0))
			{
				UNK_0x5D96D8530B3D0904(&bLocal_285, false);
			}
		}
		else if (!UNK_0xEAE0D21A50E6C7F4(bLocal_285, true))
		{
			if (func_375(0))
			{
				UNK_0x5D96D8530B3D0904(&bLocal_285, true);
			}
		}
		else if (!func_375(0))
		{
			bLocal_285 = false;
			return true;
		}
	}
	return false;
}

bool func_375(int iParam0)
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

int func_376(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (func_476())
	{
		return 0;
	}
	if (func_475())
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = -99;
	return func_377(uParam0, bParam1, bParam2, bParam3, 1, iParam5, bParam4, bVar0, bVar1, iVar2, bVar0, bVar0, -1);
}

int func_377(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (UNK_0xEA6BC48857E0AC4C(bParam2))
	{
		return 0;
	}
	if (UNK_0x7724E025FD444F45(bParam2) > 7)
	{
		return 0;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam3))
	{
		return 0;
	}
	if (UNK_0x7724E025FD444F45(bParam3) > 15)
	{
		return 0;
	}
	iVar0 = UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C());
	iVar1 = func_474(bParam2, bParam3);
	iVar2 = 0;
	if (!UNK_0xEA6BC48857E0AC4C(bParam7))
	{
		iVar2 = UNK_0x12AB0310C2281427(bParam7);
	}
	if (func_473(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_468(bParam6))
	{
		return 0;
	}
	if (func_465(iVar0, iVar1, iVar2))
	{
		if (func_464())
		{
			return 0;
		}
		func_463();
		return func_384(uParam0, bParam1, iParam12, bParam2, bParam3, iParam4, iParam5, bParam6, bParam7, bParam8, iParam9, bParam10, bParam11);
	}
	if (!func_383(iParam4))
	{
		return 0;
	}
	func_378(iVar0, iVar1, iVar2, bParam3, iParam4, iParam5, bParam6);
	return 0;
}

void func_378(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, bool bParam6)
{
	Global_1370527.f_40.f_1 = iParam0;
	Global_1370527.f_40.f_2 = iParam1;
	Global_1370527.f_40.f_3 = iParam2;
	StringCopy(&(Global_1370527.f_40.f_4), sParam3, 16);
	Global_1370527.f_40.f_8 = iParam4;
	Global_1370527.f_40.f_9 = iParam5;
	Global_1370527.f_40.f_14 = bParam6;
	func_379(iParam4);
	func_463();
	Global_1370527.f_40.f_13 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), 7000);
}

void func_379(int iParam0)
{
	if (func_382(iParam0))
	{
		func_381();
		return;
	}
	func_380();
}

void func_380()
{
	Global_1370527.f_40.f_10 = 0;
}

void func_381()
{
	Global_1370527.f_40.f_10 = 1;
}

bool func_382(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return true;
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return false;
		default:
			break;
	}
	return false;
}

bool func_383(int iParam0)
{
	return iParam0 > Global_1370527.f_40.f_8;
}

int func_384(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12)
{
	char cVar0[16];

	func_462();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_459(uParam0, bParam3, bParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&cVar0, "CELL_226", 16);
		return func_456(uParam0, bParam1, bParam3, bParam4, &cVar0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_459(uParam0, bParam3, bParam4);
		}
		return func_438(uParam0, bParam1, bParam3, bParam4, bParam7);
	}
	if (iParam5 == 5)
	{
		return func_437(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	if (iParam5 == 2)
	{
		return func_425(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	if (iParam5 == 3)
	{
		return func_424(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	if (iParam5 == 6)
	{
		return func_385(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	return 0;
}

int func_385(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	func_423();
	bVar0 = true;
	if (func_387(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8))
	{
		func_386(120000);
		return 1;
	}
	return 0;
}

void func_386(int iParam0)
{
	Global_1370527.f_40.f_11 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), iParam0);
	Global_1370527.f_40.f_12 = 1;
}

bool func_387(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;

	bVar0 = func_13();
	iVar1 = 0;
	if (bParam0 == 145)
	{
		bVar0 = iParam1;
		bVar2 = UNK_0x6E524813889AECF8(bVar0);
		iVar1 = func_417(bVar0);
		if (iVar1 == 0)
		{
			if (UNK_0x4925CBEE5D8BE14B(UNK_0x2B6E0A53779D29EA(), Global_1370527.f_40.f_13))
			{
				return false;
			}
		}
	}
	else
	{
		bVar2 = "";
	}
	iVar3 = 0;
	bVar4 = func_416(bParam5, bParam6, &iVar3);
	iVar5 = func_414(iParam7, &iVar3);
	iVar6 = 0;
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		iVar6++;
		if (!UNK_0xEA6BC48857E0AC4C(bParam9))
		{
			iVar6++;
		}
	}
	if (UNK_0x7F8A39872A07D2CE(bVar4, " "))
	{
		bVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, true))
		{
			iVar8 = 1;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !UNK_0xEA6BC48857E0AC4C(bVar2))
	{
		bVar12 = func_413(bParam0, bParam2, iVar10, bVar4, iVar5, bVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, bParam8, bParam9);
	}
	else
	{
		bVar12 = func_391(bParam0, bParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, false))
	{
		func_390();
	}
	func_423();
	func_389();
	func_388();
	return true;
}

void func_388()
{
	Global_1370527.f_57 = 0;
	Global_1370527.f_57.f_1 = 0;
}

void func_389()
{
	Global_1370527.f_40 = 3;
}

void func_390()
{
	UNK_0x5D96D8530B3D0904(&Global_7356, 8);
}

int func_391(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;

	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_392(bParam0, bParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			UNK_0x5D96D8530B3D0904(&Global_4269765, false);
		}
		return 1;
	}
	return 0;
}

int func_392(bool bParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;

	if (iParam13 > 99)
	{
	}
	if (UNK_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_406();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if (UNK_0xBADF5264209B7544(UNK_0x16F2683693E537C9()))
			{
				return 0;
			}
		}
		if (Global_4269750 == 1)
		{
			return 0;
		}
		if (UNK_0x8A22C4C08282BF26(joaat("APPEMAIL")) > 0)
		{
			return 0;
		}
		if (UNK_0x8A22C4C08282BF26(joaat("APPMPEMAIL")) > 0)
		{
			return 0;
		}
	}
	if (func_405() == 0)
	{
		func_403();
		return 0;
	}
	func_402(Global_4269749);
	StringCopy(&(Global_4268500[Global_4269749 /*104*/]), bParam1, 64);
	Global_4268500[Global_4269749 /*104*/].f_17 = bParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4268500[Global_4269749 /*104*/].f_24 = iParam2;
	}
	Global_4268500[Global_4269749 /*104*/].f_25 = iParam7;
	Global_4268500[Global_4269749 /*104*/].f_26 = iParam8;
	Global_4268500[Global_4269749 /*104*/].f_29 = iParam9;
	Global_4268500[Global_4269749 /*104*/].f_30 = iParam12;
	Global_4268500[Global_4269749 /*104*/].f_31 = iParam11;
	Global_4268500[Global_4269749 /*104*/].f_28 = 0;
	Global_4268500[Global_4269749 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_33), sParam4, 64);
	Global_4268500[Global_4269749 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_50), sParam5, 64);
	Global_4268500[Global_4269749 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_83), sParam15, 64);
	func_406();
	switch (iParam16)
	{
		case 3:
			Global_4268500[Global_4269749 /*104*/].f_99[Global_19486] = 1;
			break;
		case 0:
			Global_4268500[Global_4269749 /*104*/].f_99[0] = 1;
			break;
		case 2:
			Global_4268500[Global_4269749 /*104*/].f_99[2] = 1;
			break;
		case 1:
			Global_4268500[Global_4269749 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19486)
		{
			case 0:
				func_401(0);
				break;
			case 1:
				func_401(1);
				break;
			case 2:
				func_401(2);
				break;
			case 3:
				func_401(3);
				break;
			default:
				break;
		}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4269750 = 1;
				break;
			case 0:
				Global_4269750 = 1;
				break;
			case 2:
				Global_4269750 = 1;
				break;
			case 1:
				Global_4269750 = 1;
				break;
		}
	}
	Global_21874[Global_4269749] = 0;
	if (bParam10)
	{
		func_406();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
			}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_400())
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_399(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_396(1);
			func_399(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	func_393(bParam0, bParam1);
	return 1;
}

void func_393(bool bParam0, bool bParam1)
{
	if (!func_394())
	{
		return;
	}
	UNK_0x6DFDEDC7A51E8DAE(bParam0, -1180597171, UNK_0x12AB0310C2281427(bParam1), 0);
}

bool func_394()
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
	if (func_395(UNK_0xD803B885F5E47A62()))
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

bool func_395(bool bParam0)
{
	return func_38(bParam0, 20);
}

void func_396(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;

	Global_21873 = 0;
	Global_7961 = iParam0;
	bVar0 = false;
	while (bVar0 < 9)
	{
		Global_7925[bVar0] = 0;
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 9)
	{
		iVar1 = 0;
		if (func_275(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (bVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[bVar0] == 0)
						{
							Global_7889[bVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 3))
								{
									bVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									bVar2 = 255;
									Global_19668 = 0;
								}
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_398(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(bVar2);
								UNK_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_397(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_7925[bVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (bVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[bVar0] == 0)
						{
							Global_7889[bVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111638.f_14136[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111638.f_14136[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111638.f_14136[iVar3 /*104*/].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_397(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76622)
								{
									iVar4 = 0;
									iVar4 = Global_4268499;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268500[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268500[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268500[iVar5 /*104*/].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_397(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42607;
											break;
										case 1:
											iVar6 = Global_42608;
											break;
										case 2:
											iVar6 = Global_42609;
											break;
										default:
											break;
									}
									func_397(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_397(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_398(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(Global_7362);
								UNK_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 2)
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 6))
								{
									bVar7 = 42;
								}
								else
								{
									bVar7 = 255;
								}
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_398(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(bVar7);
								UNK_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 3)
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 3))
								{
									bVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									bVar8 = 255;
									Global_19668 = 0;
								}
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_398(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(bVar8);
								UNK_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 8)
							{
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_398(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(42);
								UNK_0x7E60D21B163E9D56();
							}
							else if ((iVar1 == 23 && UNK_0x7F8A39872A07D2CE(&(Global_7363[iVar1 /*15*/]), "CELL_BENWEB")) && UNK_0xEAE0D21A50E6C7F4(Global_7357, 6))
							{
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_398(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(42);
								UNK_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_397(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_397(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_7925[bVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		bVar0++;
	}
}

void func_397(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, sParam1);
	UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam6));
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam7))
	{
		func_398(bParam7);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		func_398(bParam8);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam9))
	{
		func_398(bParam9);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam10))
	{
		func_398(bParam10);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam11))
	{
		func_398(bParam11);
	}
	UNK_0x7E60D21B163E9D56();
}

void func_398(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_399(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, sParam1);
	UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam6));
	}
	UNK_0x7E60D21B163E9D56();
}

bool func_400()
{
	return Global_1312877;
}

void func_401(int iParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = Global_111638.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_402(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;

	iVar0 = UNK_0x4460E481B9E33ADA();
	iVar1 = UNK_0x8D199E381D262EEF();
	iVar2 = UNK_0xD8A54335F18763BA();
	iVar3 = UNK_0x972A296334C9D57B();
	uVar4 = UNK_0x118229AD063C3C1D() + 1;
	iVar5 = UNK_0x1A61A218F5C5EB02();
	Global_4268500[iParam0 /*104*/].f_18 = iVar0;
	Global_4268500[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4268500[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4268500[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4268500[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4268500[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_403()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4269749 = 11;
	Global_4268500[Global_4269749 /*104*/].f_18 = -1;
	Global_4268500[Global_4269749 /*104*/].f_18.f_1 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_2 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_3 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_404(Global_4268500[iVar2 /*104*/].f_18, Global_4268500[Global_4269749 /*104*/].f_18))
		{
			Global_4269749 = iVar2;
		}
		iVar2++;
	}
	Global_4268500[Global_4269749 /*104*/].f_24 = 1;
}

bool func_404(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;

	if (Param0.f_5 < Param6.f_5)
	{
		return false;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return true;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return false;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return true;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}

int func_405()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4268500[iVar2 /*104*/].f_24 == 0)
		{
			Global_4269749 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4269749 = 11;
	Global_4268500[Global_4269749 /*104*/].f_18 = -1;
	Global_4268500[Global_4269749 /*104*/].f_18.f_1 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_2 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_3 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4268500[iVar2 /*104*/].f_24 == 0 || Global_4268500[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_404(Global_4268500[iVar2 /*104*/].f_18, Global_4268500[Global_4269749 /*104*/].f_18))
			{
				Global_4269749 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4269749 == 11)
	{
		return 0;
	}
	Global_4268500[Global_4269749 /*104*/].f_99[0] = 0;
	Global_4268500[Global_4269749 /*104*/].f_99[1] = 0;
	Global_4268500[Global_4269749 /*104*/].f_99[2] = 0;
	return 1;
}

void func_406()
{
	if (func_275(14))
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
		Global_19486 = func_407();
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

var func_407()
{
	func_408();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_408()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_411(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_410(UNK_0x16F2683693E537C9());
			if (func_409(iVar0) && (!func_275(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_409(Global_111638.f_2358.f_539.f_4321))
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

bool func_409(int iParam0)
{
	return iParam0 < 3;
}

int func_410(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_411(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_411(int iParam0)
{
	if (func_409(iParam0))
	{
		return func_412(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_412(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_413(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;

	switch (iParam14)
	{
		case 0:
			bParam15 = "NULL";
			bParam16 = "NULL";
			break;
		case 1:
			bParam16 = "NULL";
			break;
		case 2:
			break;
		default:
			break;
	}
	iVar0 = 3;
	if (func_392(bParam0, bParam1, iParam2, iParam6, bParam3, bParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, bParam15, bParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			UNK_0x5D96D8530B3D0904(&Global_4269765, false);
		}
		return 1;
	}
	return 0;
}

int func_414(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_415(2, iParam1);
	return iParam0;
}

void func_415(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		case 2:
			bVar1 = true;
			break;
		default:
			return;
	}
	if (bVar0)
	{
		switch (*iParam1)
		{
			case 1:
			case 3:
				break;
			case 0:
				*iParam1 = 1;
				break;
			case 2:
				*iParam1 = 3;
				break;
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*iParam1)
		{
			case 2:
			case 3:
				break;
			case 0:
				*iParam1 = 2;
				break;
			case 1:
				*iParam1 = 3;
				break;
			default:
				return;
		}
		return;
	}
}

bool func_416(bool bParam0, bool bParam1, int iParam2)
{
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return bLocal_20;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, bLocal_20))
	{
		return bLocal_20;
	}
	func_415(1, iParam2);
	if (bParam1)
	{
		return bParam0;
	}
	return UNK_0x19C9F30A7697B43C(bParam0);
}

int func_417(bool bParam0)
{
	int iVar0;

	iVar0 = func_420(bParam0);
	if (iVar0 == -1)
	{
		func_418(bParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_418(bool bParam0, bool bParam1)
{
	if (!func_6(bParam0, 0, 1))
	{
		return;
	}
	if (func_420(bParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (bParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_419(bParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = bParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

bool func_419(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == bParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_420(bool bParam0)
{
	int iVar0;

	if (!func_6(bParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0 /*5*/].f_1 == bParam0)
		{
			if (UNK_0x0E66AEE1894BB411(Global_1389078[iVar0 /*5*/].f_2) && UNK_0x0A53A8B5FA0B3F4D(Global_1389078[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_421(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_421(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;

	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (UNK_0x0E66AEE1894BB411(Global_1389078[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, UNK_0x5283D58F79627134(Global_1389078[iParam0 /*5*/].f_2), 64);
			UNK_0x0DA3CF6693AF3C9C(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		UNK_0xC48867F0C23C5A64(Global_1389078[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389239)
	{
		Global_1389078[iVar32 /*5*/] = { Global_1389078[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_422(&(Global_1389078[iVar32 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_422(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (UNK_0x8CD06866876216F2())
	{
		uParam0->f_3 = UNK_0x2B6E0A53779D29EA();
	}
}

void func_423()
{
	Global_1370527.f_40.f_9 = 4;
}

bool func_424(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	func_423();
	bVar0 = false;
	return func_387(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8);
}

bool func_425(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	bVar0 = false;
	return func_426(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8);
}

bool func_426(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;

	bVar0 = func_13();
	iVar1 = 0;
	if (bParam0 == 145)
	{
		bVar0 = iParam1;
		bVar2 = UNK_0x6E524813889AECF8(bVar0);
		iVar1 = func_417(bVar0);
		if (iVar1 == 0)
		{
			if (UNK_0x4925CBEE5D8BE14B(UNK_0x2B6E0A53779D29EA(), Global_1370527.f_40.f_13))
			{
				return false;
			}
		}
		Global_21866 = iVar1;
	}
	else
	{
		bVar2 = "";
	}
	iVar3 = 0;
	bVar4 = func_416(bParam5, bParam6, &iVar3);
	iVar5 = func_414(iParam7, &iVar3);
	iVar6 = 0;
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		iVar6++;
		if (!UNK_0xEA6BC48857E0AC4C(bParam9))
		{
			iVar6++;
		}
	}
	if (UNK_0x7F8A39872A07D2CE(bVar4, " "))
	{
		bVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, true))
		{
			iVar8 = 1;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !UNK_0xEA6BC48857E0AC4C(bVar2))
	{
		bVar12 = func_436(bParam0, bParam2, iVar10, bVar4, iVar5, bVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, bParam8, bParam9);
	}
	else
	{
		bVar12 = func_428(bParam0, bParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, false))
	{
		func_390();
	}
	func_427();
	func_389();
	func_388();
	return true;
}

void func_427()
{
	Global_1370527.f_40.f_9 = 3;
}

int func_428(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;

	UNK_0x0674E58A79778E99(&Global_7356, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_430(bParam0, bParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_429(bParam0) };
			Global_8043 = bParam0;
			UNK_0x5D96D8530B3D0904(&Global_7356, true);
			UNK_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_429(bool bParam0)
{
	return Global_1798[bParam0 /*29*/].f_3;
}

int func_430(bool bParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;

	if (iParam13 > 99)
	{
	}
	if (UNK_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_406();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if (UNK_0xBADF5264209B7544(UNK_0x16F2683693E537C9()))
			{
				return 0;
			}
		}
		if (Global_111638.f_14046[Global_19486 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (UNK_0x8A22C4C08282BF26(joaat("APPTEXTMESSAGE")) > 0)
		{
			return 0;
		}
		if (UNK_0x8A22C4C08282BF26(joaat("APPTEXTMESSAGE")) > 0)
		{
			return 0;
		}
	}
	if (func_435() == 0)
	{
		func_433();
		return 0;
	}
	func_432(Global_21872);
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/]), bParam1, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_17 = bParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111638.f_14136[Global_21872 /*104*/].f_24 = iParam2;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_25 = iParam7;
	Global_111638.f_14136[Global_21872 /*104*/].f_26 = iParam8;
	Global_111638.f_14136[Global_21872 /*104*/].f_29 = iParam9;
	Global_111638.f_14136[Global_21872 /*104*/].f_30 = iParam12;
	Global_111638.f_14136[Global_21872 /*104*/].f_31 = iParam11;
	Global_111638.f_14136[Global_21872 /*104*/].f_28 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_33), sParam4, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_50), sParam5, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_83), sParam15, 64);
	if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 10))
	{
		Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 1;
		Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 1;
		Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 1;
		Global_8062 = 4;
		func_401(0);
		func_401(2);
		func_401(1);
	}
	else
	{
		func_406();
		switch (iParam16)
		{
			case 3:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[Global_19486] = 1;
				break;
			case 0:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 1;
				break;
			case 2:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 1;
				break;
			case 1:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19486)
			{
				case 0:
					func_401(0);
					Global_8062 = 0;
					break;
				case 1:
					func_401(1);
					Global_8062 = 1;
					break;
				case 2:
					func_401(2);
					Global_8062 = 2;
					break;
				case 3:
					func_401(3);
					Global_8062 = 3;
					break;
				default:
					Global_8062 = 4;
					break;
			}
		}
	}
	if (iParam7 == 1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 10))
		{
			Global_111638.f_14046[0 /*20*/].f_17 = 1;
			Global_111638.f_14046[1 /*20*/].f_17 = 1;
			Global_111638.f_14046[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111638.f_14046[Global_19486 /*20*/].f_17 = 1;
					break;
				case 0:
					Global_111638.f_14046[0 /*20*/].f_17 = 1;
					break;
				case 2:
					Global_111638.f_14046[2 /*20*/].f_17 = 1;
					break;
				case 1:
					Global_111638.f_14046[1 /*20*/].f_17 = 1;
					break;
			}
		}
	}
	Global_21874[Global_21872] = 0;
	if (bParam10)
	{
		func_406();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
			}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_400())
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_399(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_396(1);
			func_399(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	func_431(bParam0, bParam1);
	return 1;
}

void func_431(bool bParam0, bool bParam1)
{
	if (!func_394())
	{
		return;
	}
	UNK_0x6DFDEDC7A51E8DAE(bParam0, 1654525105, UNK_0x12AB0310C2281427(bParam1), 0);
}

void func_432(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;

	iVar0 = UNK_0x4460E481B9E33ADA();
	iVar1 = UNK_0x8D199E381D262EEF();
	iVar2 = UNK_0xD8A54335F18763BA();
	iVar3 = UNK_0x972A296334C9D57B();
	uVar4 = UNK_0x118229AD063C3C1D() + 1;
	iVar5 = UNK_0x1A61A218F5C5EB02();
	Global_111638.f_14136[iParam0 /*104*/].f_18 = iVar0;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_433()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_434(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_24 = 1;
}

bool func_434(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;

	if (Param0.f_5 < Param6.f_5)
	{
		return false;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return true;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return false;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return true;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}

int func_435()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 0)
		{
			Global_21872 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 0 || Global_111638.f_14136[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_434(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
			{
				Global_21872 = iVar2;
			}
		}
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_21872 == 34)
	{
		return 0;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 0;
	return 1;
}

int func_436(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;

	switch (iParam14)
	{
		case 0:
			bParam15 = "NULL";
			bParam16 = "NULL";
			break;
		case 1:
			bParam16 = "NULL";
			break;
		case 2:
			break;
		default:
			break;
	}
	UNK_0x0674E58A79778E99(&Global_7356, 10);
	iVar0 = 3;
	if (func_430(bParam0, bParam1, iParam2, iParam6, bParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, bParam15, bParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			Global_7966[3 /*6*/] = { func_429(bParam0) };
			Global_8043 = bParam0;
			StringCopy(&Global_8044, sParam5, 64);
			UNK_0x5D96D8530B3D0904(&Global_7356, true);
			UNK_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

int func_437(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
	}
	if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
	{
		return 0;
	}
	func_427();
	bVar0 = true;
	if (func_426(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8))
	{
		func_386(120000);
		return 1;
	}
	return 0;
}

int func_438(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;

	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, 7))
	{
		iVar1 = 9;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, 4))
	{
		bVar0 = func_455(uParam0, bParam1, bParam2, bParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_444(uParam0, bParam1, bParam2, bParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, 3))
		{
			func_443(1);
		}
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, 5))
		{
			func_442(1);
		}
		func_441();
		func_389();
		func_440();
		func_439();
		return 1;
	}
	return 0;
}

void func_439()
{
	Global_2546572 = 0;
}

void func_440()
{
	Global_1370527.f_57 = 1;
	Global_1370527.f_57.f_1 = 0;
}

void func_441()
{
	Global_1370527.f_40.f_9 = 1;
}

void func_442(int iParam0)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7358, false);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7358, false);
	}
}

void func_443(int iParam0)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7356, 20);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7356, 20);
	}
}

int func_444(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_454(uParam0, bParam1, bParam2, iParam5, iParam6, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_445(bParam3, iParam4, bParam7);
}

int func_445(char* sParam0, int iParam1, bool bParam2)
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
					func_453();
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
		if (func_452(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_451();
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
				func_406();
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
				if (func_450())
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
			if (func_449())
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
			func_448();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_447();
		func_446();
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
		func_453();
	}
	return 0;
}

void func_446()
{
	if (!func_394())
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

void func_447()
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

void func_448()
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

bool func_449()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_450()
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

void func_451()
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

bool func_452(bool bParam0, int iParam1)
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

void func_453()
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

void func_454(var uParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = bParam1;
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

int func_455(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_454(uParam0, bParam1, bParam2, iParam5, iParam6, 0);
	Global_20853 = 1;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_445(bParam3, iParam4, bParam7);
}

int func_456(var uParam0, bool bParam1, bool bParam2, bool bParam3, char* sParam4)
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
	}
	if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
	{
		return 0;
	}
	if (func_458(uParam0, bParam1, bParam2, bParam3, 9, sParam4, 0, 0, 1))
	{
		func_457();
		func_441();
		func_389();
		func_440();
		func_439();
		return 1;
	}
	return 0;
}

void func_457()
{
	Global_21823 = 0;
}

int func_458(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_454(uParam0, bParam1, bParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 1;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 1;
	Global_20859 = 0;
	StringCopy(&Global_20953, sParam5, 24);
	Global_2621441 = 0;
	return func_445(bParam3, iParam4, bParam8);
}

int func_459(var uParam0, bool bParam1, bool bParam2)
{
	if (func_461(uParam0, bParam1, bParam2, 12, 0, 0, 0))
	{
		func_460();
		func_389();
		func_440();
		return 1;
	}
	return 0;
}

void func_460()
{
	Global_1370527.f_40.f_9 = 2;
}

int func_461(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_454(uParam0, 145, bParam1, iParam4, iParam5, iParam6);
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
	return func_445(bParam2, iParam3, 0);
}

void func_462()
{
	Global_1370527.f_55 = Global_1370527.f_40.f_1;
	Global_1370527.f_55.f_1 = Global_1370527.f_40.f_10;
}

void func_463()
{
	Global_1370527.f_40 = 1;
}

bool func_464()
{
	return Global_1370527.f_40 == 1;
}

bool func_465(int iParam0, int iParam1, int iParam2)
{
	if (!func_466(iParam0))
	{
		return false;
	}
	if (Global_1370527.f_40.f_2 != iParam1)
	{
		return false;
	}
	if (iParam2 != 0)
	{
		if (Global_1370527.f_40.f_3 != iParam2)
		{
			return false;
		}
	}
	return true;
}

bool func_466(int iParam0)
{
	if (!func_467())
	{
		return false;
	}
	if (!Global_1370527.f_40.f_1 == iParam0)
	{
		return false;
	}
	return true;
}

bool func_467()
{
	if (Global_1370527.f_40 == 0)
	{
		return false;
	}
	return true;
}

bool func_468(bool bParam0)
{
	if (func_472())
	{
		return false;
	}
	if (func_471())
	{
		return false;
	}
	if (func_375(0))
	{
		return false;
	}
	if (Global_1312467.f_18 != 0)
	{
		return false;
	}
	if (Global_1662006 || func_470())
	{
		return false;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bParam0, 6))
	{
		if (func_469())
		{
			return false;
		}
	}
	return true;
}

bool func_469()
{
	return UNK_0x4925CBEE5D8BE14B(UNK_0x2B6E0A53779D29EA(), Global_1387714);
}

int func_470()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_471()
{
	return Global_1370527.f_40 == 3;
}

bool func_472()
{
	return func_449();
}

bool func_473(int iParam0, int iParam1, int iParam2)
{
	if (!func_471())
	{
		return false;
	}
	return func_465(iParam0, iParam1, iParam2);
}

int func_474(char* sParam0, char* sParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return UNK_0x12AB0310C2281427(&cVar0);
}

bool func_475()
{
	return Global_2543673.f_1;
}

int func_476()
{
	if (Global_1370715.f_2)
	{
		return 1;
	}
	return func_477();
}

bool func_477()
{
	return func_472();
}

void func_478(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

int func_479(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 1;
	}
	return 0;
}

bool func_480(var uParam0)
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

void func_481(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (UNK_0xBFF81ED3B99522C7())
		{
			func_482(uParam0, 0, 0);
		}
	}
}

void func_482(var uParam0, bool bParam1, bool bParam2)
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

void func_483()
{
	if (UNK_0xE5DBF9B6126856CA(Local_63.f_10[iLocal_296 /*7*/]) && !UNK_0x437347B10A200C4B(UNK_0x1B50683925F00106(Local_63.f_10[iLocal_296 /*7*/]), 0))
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (func_5(UNK_0x68F4C0EC296D3901(UNK_0x1B50683925F00106(Local_63.f_10[iLocal_296 /*7*/]), true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 50625f))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_280, 4))
				{
					UNK_0x5D96D8530B3D0904(&bLocal_280, 4);
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(bLocal_280, 5))
			{
				if (Local_63.f_42 != -1)
				{
					if (iLocal_296 == Local_63.f_42)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_280, 5))
						{
							UNK_0x5D96D8530B3D0904(&bLocal_280, 5);
						}
					}
				}
			}
		}
	}
	func_484(iLocal_296);
	iLocal_296++;
	if (iLocal_296 >= func_479(bLocal_286))
	{
		if ((!UNK_0xEAE0D21A50E6C7F4(bLocal_280, 4) && UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 8)) || UNK_0xEAE0D21A50E6C7F4(bLocal_280, 5))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_1, true))
			{
				UNK_0x5D96D8530B3D0904(&(Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_1), true);
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_1, true))
		{
			UNK_0x0674E58A79778E99(&(Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_1), true);
		}
		UNK_0x0674E58A79778E99(&bLocal_280, 4);
		UNK_0x0674E58A79778E99(&bLocal_280, 5);
		iLocal_296 = 0;
	}
}

void func_484(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;
	float fVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;

	iVar2 = 0;
	vVar3 = { 0f, 0f, 0f };
	bVar6 = false;
	if (UNK_0xE9F78D191AD5EDBA(Local_63.f_10[iParam0 /*7*/]))
	{
		bVar0 = UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]);
		if (bLocal_286 == 0)
		{
			if (UNK_0xD803B885F5E47A62() == bLocal_288)
			{
				if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
				{
					if (Local_63.f_10[iParam0 /*7*/].f_5 == 2)
					{
						bVar6 = true;
					}
				}
			}
		}
		if (UNK_0xD803B885F5E47A62() == bLocal_287)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, true))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(iLocal_281[iParam0], false))
				{
					UNK_0x5D96D8530B3D0904(&Global_1573339, false);
					UNK_0x5D96D8530B3D0904(&(iLocal_281[iParam0]), false);
				}
				if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 9))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(iLocal_281[iParam0], true))
					{
						bVar6 = true;
					}
				}
				else if (UNK_0xEAE0D21A50E6C7F4(iLocal_281[iParam0], true))
				{
					UNK_0x0674E58A79778E99(&(iLocal_281[iParam0]), true);
				}
			}
		}
		if (bVar6)
		{
			if (UNK_0xE9F78D191AD5EDBA(Local_63.f_10[iParam0 /*7*/]))
			{
				if (!UNK_0x526BC32A660C89E6(Local_63.f_10[iParam0 /*7*/]))
				{
					UNK_0x8D30F6387EE75385(Local_63.f_10[iParam0 /*7*/]);
				}
			}
		}
		if (UNK_0x526BC32A660C89E6(Local_63.f_10[iParam0 /*7*/]))
		{
			if (UNK_0xD803B885F5E47A62() == bLocal_287)
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 9) && !UNK_0xEAE0D21A50E6C7F4(iLocal_281[iParam0], true))
				{
					if (UNK_0x6EBC49900DEAF9B9(bVar0, UNK_0xD803B885F5E47A62()))
					{
						switch (Local_63.f_10[iParam0 /*7*/].f_1)
						{
							case 0:
								func_507(bVar0, 3);
								break;
						}
						UNK_0x5D96D8530B3D0904(&(iLocal_281[iParam0]), true);
					}
				}
			}
			if (!UNK_0x437347B10A200C4B(bVar0, 0) && !UNK_0xEB6A8945D1AC98A1(bVar0))
			{
				switch (Local_63.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					case 1:
						UNK_0x9DD8618CA5BF832D(bVar0, 187, true);
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 3))
								{
									UNK_0x16F8631A5D4FBCE5(bVar0, 3f);
									UNK_0x11AD11297DC58CC7(bVar0, true);
									UNK_0x4E885A246A9D983A(bVar0, 118, false);
								}
							}
						}
						if (UNK_0xD803B885F5E47A62() == bLocal_288 && func_5(UNK_0x68F4C0EC296D3901(bVar0, true), UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bLocal_288), true), 25f))
						{
							UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4589), false);
						}
						else
						{
							UNK_0x0674E58A79778E99(&(Global_2537071.f_4589), false);
						}
						if (!UNK_0xE9FDA1035CFEA94F(bVar0))
						{
							if (!UNK_0xFEABCECA098C0A91(bVar0, 29))
							{
								if (func_6(bLocal_288, 1, 1))
								{
									if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 13))
									{
										if (func_506(bLocal_288) && !UNK_0x4FB00DDF9C0D8114(UNK_0x9539D44F3E4492F6(bLocal_288)))
										{
											if (!func_505(bVar0, -1794415470))
											{
												if (func_504(bVar0))
												{
													bVar1 = UNK_0x6937EA2286828455(UNK_0x9539D44F3E4492F6(bLocal_288), 0);
													if (UNK_0xC844350D5D58C99A(bVar1))
													{
														if (UNK_0xDF1306B443CD3D15(bVar1, 0))
														{
														}
														if (!UNK_0x4A43A287EB2A2B60(bVar1, func_503(UNK_0x9539D44F3E4492F6(bLocal_288), 0)))
														{
															UNK_0x5B1D360B9C6F0A09(bVar0, bVar1, -1, func_502(UNK_0x9539D44F3E4492F6(bLocal_288), bVar1), func_501(iParam0), 1179977, 0);
														}
													}
												}
											}
										}
										else if (!(UNK_0xE64AC821059A938D(bVar0) && UNK_0x66532B38746E912A(bVar0) == UNK_0x9539D44F3E4492F6(bLocal_288)) && !UNK_0x405E212DDE472467(bVar0, 1))
										{
											if (func_505(bVar0, -1794415470))
											{
												UNK_0xA3BF0AA5A2608191(bVar0);
											}
											if (!func_505(bVar0, 1227113341))
											{
												if (func_504(bVar0))
												{
													UNK_0xE185F110925D87DB(bVar0, UNK_0x9539D44F3E4492F6(bLocal_288), -1, 0f, func_501(iParam0), 1073741824 /* Float: 2f */, 0);
												}
											}
											else
											{
												UNK_0x9DD8618CA5BF832D(bVar0, 151, true);
											}
										}
									}
								}
							}
						}
						break;
					case 2:
						if (UNK_0xD803B885F5E47A62() == bLocal_288 && func_5(UNK_0x68F4C0EC296D3901(bVar0, true), UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bLocal_288), true), 25f))
						{
							UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4589), false);
						}
						else
						{
							UNK_0x0674E58A79778E99(&(Global_2537071.f_4589), false);
						}
						if (UNK_0xD803B885F5E47A62() == bLocal_288)
						{
							if (!UNK_0xEAE0D21A50E6C7F4(Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_1, false))
							{
								if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
								{
									if ((func_4(UNK_0x68F4C0EC296D3901(bVar0, true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) && (UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()) || UNK_0x4FB00DDF9C0D8114(UNK_0x16F2683693E537C9()))) || (UNK_0xE64AC821059A938D(bVar0) && UNK_0x66532B38746E912A(bVar0) == UNK_0x16F2683693E537C9()))
									{
										iVar2 = func_499(UNK_0xD803B885F5E47A62());
										fVar7 = (SYSTEM::TO_FLOAT(Global_262145.f_6650) / 100f);
										iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) * fVar7));
										iVar8 = func_498(UNK_0xD803B885F5E47A62());
										if (iVar8 > 100)
										{
											iVar8 = 100;
										}
										if (iVar2 > (iVar8 * Global_262145.f_6651))
										{
											iVar2 = (iVar8 * Global_262145.f_6651);
										}
										if (iVar2 > 0)
										{
											UNK_0x5D96D8530B3D0904(&bLocal_280, 16);
										}
										UNK_0xC087319D96BCB2A9(UNK_0x16F2683693E537C9(), 5000, 10000, 4);
										if (!(UNK_0xE64AC821059A938D(bVar0) && UNK_0x66532B38746E912A(bVar0) == UNK_0x9539D44F3E4492F6(bLocal_288)))
										{
											vVar3 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) - UNK_0x68F4C0EC296D3901(bVar0, true) };
											vVar3 = { func_497(vVar3) };
											vVar3.x = (vVar3.x * 3f);
											vVar3.f_1 = (vVar3.y * 3f);
											vVar3.f_2 = (vVar3.z * 3f);
											UNK_0xDFC6BA855748EB10(UNK_0x16F2683693E537C9(), 1, vVar3, 0f, 0f, 0.5f, 0, 0, 1, 1, 0, 1);
										}
										UNK_0xBAFED2F6486F771A(bVar0, 512, false);
										UNK_0xAFF39FB306F8E232(bVar0, 17, true);
										if (((UNK_0x405E212DDE472467(bVar0, 1) || UNK_0xE64AC821059A938D(bVar0)) && func_495(bVar0)) && func_503(bVar0, 0) == -1)
										{
											UNK_0xBAFED2F6486F771A(bVar0, 2, true);
											UNK_0xAFF39FB306F8E232(bVar0, 3, false);
											UNK_0xAFF39FB306F8E232(bVar0, 6, true);
										}
										else
										{
											UNK_0xA3BF0AA5A2608191(bVar0);
											UNK_0xF3268524E9BE6D6E(bVar0, UNK_0x16F2683693E537C9(), 10000f, -1, 1, 0);
										}
										Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_3 = iVar2;
										if (iVar2 > 0)
										{
											Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_2 = -1;
										}
										UNK_0x6DF7BF67E86AAE86(bVar0, Global_1575007);
										UNK_0x5D96D8530B3D0904(&(Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_1), false);
										UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4589), 2);
									}
								}
							}
						}
						break;
					case 3:
						if (UNK_0x4E3CE49FD6DA2735(bVar0, 187))
						{
							UNK_0x9DD8618CA5BF832D(bVar0, 187, false);
						}
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 4))
							{
								UNK_0x11AD11297DC58CC7(bVar0, false);
								UNK_0x4E885A246A9D983A(bVar0, 118, true);
							}
						}
						if (!(UNK_0xE64AC821059A938D(bVar0) && UNK_0x66532B38746E912A(bVar0) == UNK_0x9539D44F3E4492F6(bLocal_288)))
						{
							if (!UNK_0xE9FDA1035CFEA94F(bVar0))
							{
								if (func_504(bVar0))
								{
									if ((UNK_0x405E212DDE472467(bVar0, 1) || UNK_0xE64AC821059A938D(bVar0)) && !UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 10))
									{
										if (!func_505(bVar0, -258271821) && !func_505(bVar0, -1273030092))
										{
											if (UNK_0x0E0E6175453415CB(bVar0))
											{
												bVar9 = UNK_0x6937EA2286828455(bVar0, 1);
												bVar10 = UNK_0x134B62B726CEC8E6(bVar9);
												if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 13))
												{
													UNK_0xAFF39FB306F8E232(bVar0, 17, true);
													UNK_0xAFF39FB306F8E232(bVar0, 6, false);
													UNK_0xAFF39FB306F8E232(bVar0, 1, false);
												}
												else if (UNK_0xAFB8495D36825275(bVar10))
												{
													UNK_0x9AFA0796FDCABCD5(bVar0, bVar9, false, UNK_0x16F2683693E537C9(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1f, 0);
												}
												else if (UNK_0xC41A9202669A24C4(bVar10))
												{
													UNK_0x0C4243AF9A434F34(bVar0, bVar9, false, UNK_0x16F2683693E537C9(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 80, 80, 1);
												}
												else if (UNK_0x134B62B726CEC8E6(bVar9) == joaat("TAXI"))
												{
													UNK_0xBAFED2F6486F771A(bVar0, 2, false);
													UNK_0xAFF39FB306F8E232(bVar0, 3, true);
													UNK_0xAFF39FB306F8E232(bVar0, 6, false);
													UNK_0xF3268524E9BE6D6E(bVar0, UNK_0x9539D44F3E4492F6(bLocal_288), 10000f, -1, 1, 0);
												}
												else
												{
													UNK_0xE072601B4380E9DF(bVar0, UNK_0x6937EA2286828455(bVar0, 1), 60f, 786468);
												}
											}
										}
									}
									else if (!func_505(bVar0, 1805844857))
									{
										if (func_6(bLocal_288, 1, 1))
										{
											UNK_0xF3268524E9BE6D6E(bVar0, UNK_0x9539D44F3E4492F6(bLocal_288), 10000f, -1, 1, 0);
										}
									}
								}
							}
						}
						break;
					case 4:
						func_493(Local_63.f_10[iParam0 /*7*/], 0);
						break;
				}
				if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 13))
				{
					UNK_0xA3BF0AA5A2608191(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]));
					UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 17, true);
					UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 6, false);
					UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 1, false);
				}
				func_485(bVar0);
			}
		}
	}
}

void func_485(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (UNK_0xEAE0D21A50E6C7F4(bLocal_280, 16))
	{
		bVar0 = Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_3;
		iVar1 = func_486(bVar0);
		if (iVar1 == 1)
		{
			UNK_0x0674E58A79778E99(&bLocal_280, 15);
			UNK_0x0674E58A79778E99(&bLocal_280, 16);
			if (!func_51())
			{
				UNK_0x6BCFB59E6D5AD205(bVar0, 0, 0);
			}
			if (bVar0 > Global_262145.f_8064)
			{
				bVar0 = Global_262145.f_8064;
			}
			UNK_0x6D80F1AEBA734886(bParam0, bVar0);
			UNK_0x5D96D8530B3D0904(&(Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			UNK_0x0674E58A79778E99(&bLocal_280, 15);
			UNK_0x0674E58A79778E99(&bLocal_280, 16);
			UNK_0x5D96D8530B3D0904(&(Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_486(bool bParam0)
{
	if (func_51())
	{
		if (func_489(bParam0))
		{
			if (func_488(iLocal_489) == 2)
			{
				UNK_0x7A87D9FAFCB10ADC(func_487(iLocal_489));
				UNK_0x6BCFB59E6D5AD205(bParam0, 0, 0);
				func_321(iLocal_489);
				return 1;
			}
			else
			{
				func_321(iLocal_489);
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_487(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_488(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

bool func_489(bool bParam0)
{
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_280, 15))
	{
		func_319(&iLocal_489, -1135378931, 537254313, 1474183246, 1839532116, bParam0, 4, 3);
		func_492(&uLocal_490, 0, 0);
		UNK_0x5D96D8530B3D0904(&bLocal_280, 15);
	}
	else if (func_491(iLocal_489) || func_490(&uLocal_490, 10000, 0))
	{
		return true;
	}
	return false;
}

bool func_490(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_482(uParam0, bParam2, 0);
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

bool func_491(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return false;
}

void func_492(var uParam0, bool bParam1, bool bParam2)
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

void func_493(int iParam0, bool bParam1)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		if (UNK_0x526BC32A660C89E6(iParam0))
		{
			if (!func_494(iParam0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 13))
				{
					UNK_0xA3BF0AA5A2608191(UNK_0x1B50683925F00106(iParam0));
					UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(iParam0), 17, true);
					UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(iParam0), 6, false);
					UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(iParam0), 1, false);
				}
				else
				{
					if (bParam1)
					{
						UNK_0xA3BF0AA5A2608191(UNK_0x1B50683925F00106(iParam0));
					}
					UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(iParam0), 6, true);
					UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(iParam0), 1, true);
				}
			}
		}
		func_244(&iParam0);
	}
}

bool func_494(int iParam0)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		return UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(iParam0));
	}
	return true;
}

bool func_495(bool bParam0)
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(bParam0, 1))
	{
		bVar0 = UNK_0x6937EA2286828455(bParam0, 1);
	}
	if (UNK_0xE64AC821059A938D(bParam0))
	{
		bVar0 = UNK_0x8B157DA177FBCF50(bParam0);
	}
	if (!UNK_0xC844350D5D58C99A(bVar0))
	{
		if (func_506(bLocal_288))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x9539D44F3E4492F6(bLocal_288), 1);
		}
	}
	if (UNK_0xC844350D5D58C99A(bVar0))
	{
		if (func_496(bVar0))
		{
			return false;
		}
		if (UNK_0xC8676198F2355F9F(bParam0) || UNK_0xA7082C42B8809BF2(UNK_0x134B62B726CEC8E6(bVar0)))
		{
			if (!UNK_0x70EED0761B82965E(bVar0))
			{
				return false;
			}
		}
		if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("TRAILERSMALL2"))
		{
			return false;
		}
	}
	return true;
}

bool func_496(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0x437347B10A200C4B(bParam0, 0))
		{
			return true;
		}
		else if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (!UNK_0x4E861BC5B1EDA7BD(bParam0))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

Vector3 func_497(vector3 vParam0)
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

int func_498(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_211.f_6;
}

int func_499(bool bParam0)
{
	int iVar0;

	iVar0 = func_500(bParam0);
	return iVar0;
}

int func_500(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (bParam0 == UNK_0xD803B885F5E47A62())
		{
			return UNK_0x62F8C2EDB26F57B3(-1);
		}
		else if (func_296(bParam0))
		{
			return Global_1590535[bParam0 /*876*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_501(int iParam0)
{
	if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_502(bool bParam0, bool bParam1)
{
	if (!UNK_0x437347B10A200C4B(bParam0, 0) && !UNK_0x437347B10A200C4B(bParam1, 0))
	{
		if (UNK_0x82CCEAB29E9451DD(bParam0, bParam1))
		{
			if (UNK_0xA30B8362589C124A(bParam1, -1, 0) == bParam0)
			{
				return -1;
			}
			if (UNK_0xA30B8362589C124A(bParam1, false, 0) == bParam0)
			{
				return 0;
			}
			if (UNK_0xA30B8362589C124A(bParam1, true, 0) == bParam0)
			{
				return 1;
			}
			if (UNK_0xA30B8362589C124A(bParam1, 2, 0) == bParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_503(bool bParam0, int iParam1)
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

bool func_504(bool bParam0)
{
	if ((!UNK_0xEB6A8945D1AC98A1(bParam0) && !UNK_0x15D0A3E61766C539(bParam0, 0)) && !UNK_0x869EFD0BC0868856(bParam0))
	{
		return true;
	}
	return false;
}

bool func_505(bool bParam0, int iParam1)
{
	if (UNK_0xD1960163A3042274(bParam0, iParam1) == 1 || UNK_0xD1960163A3042274(bParam0, iParam1) == 0)
	{
		return true;
	}
	return false;
}

bool func_506(bool bParam0)
{
	if (UNK_0xFC697FBCBDCA38C5(bParam0))
	{
		return false;
	}
	if (UNK_0x0E0E6175453415CB(UNK_0x9539D44F3E4492F6(bParam0)))
	{
		return true;
	}
	return false;
}

void func_507(bool bParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (UNK_0x30F813723591D02E(bParam0, "AttributeDamage"))
	{
		bVar0 = UNK_0x1E2DFB0EF4BB4566(bParam0, "AttributeDamage");
	}
	UNK_0x5D96D8530B3D0904(&bVar0, bParam1);
	UNK_0xB7E567188872123E(bParam0, "AttributeDamage", bVar0);
}

void func_508()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	bVar0 = UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 6);
	bVar1 = UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 10);
	func_513();
	if (bLocal_286 != 1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_3, 12))
		{
			func_510();
		}
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_297))
	{
		func_509(&iLocal_297);
	}
	iVar3 = 0;
	while (iVar3 < func_479(bLocal_286))
	{
		iLocal_281[iVar3] = 0;
		iVar3++;
	}
	if (UNK_0xBFF81ED3B99522C7())
	{
		Local_63.f_42 = -1;
		Local_63.f_5 = iLocal_293;
		Local_63.f_6 = iLocal_293;
		Local_63.f_7 = iLocal_293;
		Local_63.f_1 = 0;
		Local_63.f_4 = 0;
		Local_63.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < func_479(bLocal_286))
		{
			bVar2 = UNK_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar3 /*7*/].f_2, 6);
			Local_63.f_10[iVar3 /*7*/].f_2 = 0;
			Local_63.f_10[iVar3 /*7*/].f_6 = -1;
			if (bVar2)
			{
				UNK_0x5D96D8530B3D0904(&(Local_63.f_10[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_1 = 0;
	Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_2 = -1;
	bLocal_280 = false;
	if (bVar0)
	{
		UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 6);
	}
	if (bVar1)
	{
		UNK_0x5D96D8530B3D0904(&(Local_63.f_2), 11);
		UNK_0x5D96D8530B3D0904(&bLocal_280, 8);
	}
	UNK_0x5D96D8530B3D0904(&bLocal_280, 4);
	UNK_0x5D96D8530B3D0904(&bLocal_280, 11);
}

void func_509(bool bParam0)
{
	bool bVar0;
	struct<8> Var1;

	if (UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		UNK_0x142CC44DB769B57E(bParam0);
		bVar0 = true;
	}
	if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1))
	{
		UNK_0x142CC44DB769B57E(&(bParam0->f_1));
		bVar0 = true;
	}
	if (UNK_0xC844350D5D58C99A(bParam0->f_7))
	{
		if (!UNK_0x437347B10A200C4B(bParam0->f_7, 0))
		{
			if (UNK_0x3C583F939C836C5C(bParam0->f_7))
			{
				UNK_0xA29E145196B9739D(bParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*bParam0 = { Var1 };
	}
}

void func_510()
{
	switch (bLocal_286)
	{
		case 0:
			func_512(&(Global_1575015[3]));
			break;
		case 1:
			func_511();
			break;
	}
}

void func_511()
{
	int iVar0;

	if (UNK_0x8CD06866876216F2())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			UNK_0x0E2400AB9174FA81(3, Global_1574967[iVar0], joaat("PRIVATE_SECURITY"));
			UNK_0x0E2400AB9174FA81(3, joaat("PRIVATE_SECURITY"), Global_1574967[iVar0]);
			iVar0++;
		}
	}
}

void func_512(var uParam0)
{
	int iVar0;

	if (UNK_0x8CD06866876216F2())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			UNK_0x0E2400AB9174FA81(3, Global_1574967[iVar0], *uParam0);
			UNK_0x0E2400AB9174FA81(3, *uParam0, Global_1574967[iVar0]);
			iVar0++;
		}
	}
}

void func_513()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_479(bLocal_286))
	{
		bVar1 = false;
		if (bLocal_286 == 0)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, true))
			{
				bVar1 = true;
			}
		}
		func_493(Local_63.f_10[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_514()
{
	func_515();
	if (bLocal_286 != 1)
	{
		func_483();
	}
}

void func_515()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < func_479(bLocal_286))
	{
		if (UNK_0xE9F78D191AD5EDBA(Local_63.f_10[iVar0 /*7*/]))
		{
			if (UNK_0x526BC32A660C89E6(Local_63.f_10[iVar0 /*7*/]))
			{
				bVar1 = UNK_0x1B50683925F00106(Local_63.f_10[iVar0 /*7*/]);
				if (!UNK_0x437347B10A200C4B(bVar1, 0))
				{
					UNK_0x9DD8618CA5BF832D(bVar1, 151, true);
				}
			}
		}
		iVar0++;
	}
	if (Global_2537071.f_1703)
	{
	}
	if (bLocal_286 == 1)
	{
		if (UNK_0xD803B885F5E47A62() == bLocal_288)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, false))
			{
				if (!UNK_0xC77B2658E98CC4E5(uLocal_470))
				{
					if (func_6(bLocal_288, 1, 1))
					{
						if (Local_63.f_50)
						{
							UNK_0x67FCD2DB807B4E58(15, UNK_0x9539D44F3E4492F6(bLocal_288), 4, 0f, &uLocal_470, joaat("PRIVATE_SECURITY"), 0);
						}
						else if (Local_63.f_52)
						{
							UNK_0x67FCD2DB807B4E58(16, UNK_0x9539D44F3E4492F6(bLocal_288), 4, 0f, &uLocal_470, joaat("PRIVATE_SECURITY"), Local_63.f_53);
						}
						else
						{
							UNK_0x67FCD2DB807B4E58(14, UNK_0x9539D44F3E4492F6(bLocal_288), 4, 0f, &uLocal_470, 0, 0);
						}
					}
				}
				if (Global_2537071.f_1703)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_1, 3))
					{
						UNK_0x5D96D8530B3D0904(&(Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (bLocal_286 == 0)
	{
		if (Local_63.f_42 != -1)
		{
			if (UNK_0xE5DBF9B6126856CA(Local_63.f_10[Local_63.f_42 /*7*/]))
			{
				if (!UNK_0x437347B10A200C4B(UNK_0x1B50683925F00106(Local_63.f_10[Local_63.f_42 /*7*/]), 0) && !func_519(UNK_0x1B50683925F00106(Local_63.f_10[Local_63.f_42 /*7*/])))
				{
					if (Local_63.f_10[Local_63.f_42 /*7*/].f_5 == 3)
					{
						func_516(Local_63.f_10[Local_63.f_42 /*7*/], &iLocal_297, -1082130432 /* Float: -1f */, 0, 1, 0, 0, -1, -1, 1);
						if (UNK_0xE4EDC4B0E92C078B(iLocal_297))
						{
							if (!UNK_0xEAE0D21A50E6C7F4(bLocal_280, 6))
							{
								UNK_0xDC5B2F9D0CCE3A10(iLocal_297, "FM_MGR_BLP");
								UNK_0x5D96D8530B3D0904(&bLocal_280, 6);
							}
						}
					}
				}
				else if (UNK_0xE4EDC4B0E92C078B(iLocal_297))
				{
					func_509(&iLocal_297);
				}
			}
			if (UNK_0xD803B885F5E47A62() == bLocal_287)
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_280, 14))
				{
					if (func_374("MPCT_mugsuc", "LAMAR", 19))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_280, 14);
					}
				}
			}
		}
	}
}

void func_516(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		if (func_518())
		{
			Global_2439138 = UNK_0xD803B885F5E47A62();
		}
		if (bParam3)
		{
			func_517(UNK_0x1B50683925F00106(iParam0), bParam1, 1, Global_2439138, bParam4, bParam5, fParam2, bParam6, bParam7, iParam8, bParam9);
		}
		else
		{
			func_517(UNK_0x1B50683925F00106(iParam0), bParam1, -1, Global_2439138, bParam4, bParam5, fParam2, bParam6, bParam7, iParam8, bParam9);
		}
	}
	else if (UNK_0xE4EDC4B0E92C078B(*bParam1))
	{
		func_509(bParam1);
	}
}

int func_517(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = UNK_0xA30EC016B12C03E4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (!UNK_0x3C583F939C836C5C(bParam0))
		{
			if (bParam8 == -1)
			{
				UNK_0xA29E145196B9739D(bParam0, 1);
			}
			else
			{
				UNK_0xE23B4401F4442A7E(bParam0, 1, bParam8);
			}
			bParam1->f_7 = bParam0;
			UNK_0x03E7282D82C7B3B6(bParam0, iParam2);
			UNK_0xF8BE15A7B963DB56(bParam0, fParam6);
			if (UNK_0xE4EDC4B0E92C078B(*bParam1))
			{
				UNK_0x2A065371C9D96655(*bParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			UNK_0xFABCB9076292E3BA(bParam0, iParam9);
		}
		UNK_0xF947FFD8DA795A7F(bParam0, bParam4);
		UNK_0xB46A36D2F28E60DE(bParam0, bParam5);
		*bParam1 = UNK_0x380B922C6BB1F223(bParam0);
		if (!iParam9 == -1)
		{
			if (UNK_0xE4EDC4B0E92C078B(*bParam1))
			{
				if (!bParam8 == -1)
				{
					UNK_0x61755AC17D8F538E(*bParam1, bParam8);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam7))
				{
					UNK_0x64399B11CDD5A727("STRING");
					if (bParam10)
					{
						UNK_0xD06AC7C87A34A6AD(bParam7);
					}
					else
					{
						UNK_0x6B012227B3921E18(bParam7);
					}
					UNK_0x4FA118D51B4F2476(*bParam1);
				}
				UNK_0x2A065371C9D96655(*bParam1, 7);
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(bParam1->f_6, 2))
		{
			if (UNK_0xE4EDC4B0E92C078B(*bParam1))
			{
				UNK_0x5D96D8530B3D0904(&(bParam1->f_6), 2);
			}
		}
		if (UNK_0x405E212DDE472467(bParam0, 0))
		{
			bParam1->f_1 = UNK_0x498C79575FE5BBCE(bParam0);
			if (!UNK_0xEAE0D21A50E6C7F4(bParam1->f_6, 3))
			{
				if (UNK_0xE4EDC4B0E92C078B(bParam1->f_1))
				{
					if (!bParam8 == -1)
					{
						UNK_0x61755AC17D8F538E(bParam1->f_1, bParam8);
					}
					if (!UNK_0xEA6BC48857E0AC4C(bParam7))
					{
						UNK_0x64399B11CDD5A727("STRING");
						if (bParam10)
						{
							UNK_0xD06AC7C87A34A6AD(bParam7);
						}
						else
						{
							UNK_0x6B012227B3921E18(bParam7);
						}
						UNK_0x4FA118D51B4F2476(bParam1->f_1);
					}
					UNK_0x2A065371C9D96655(bParam1->f_1, 7);
					UNK_0x5D96D8530B3D0904(&(bParam1->f_6), 3);
				}
			}
			else if (!UNK_0xE4EDC4B0E92C078B(bParam1->f_1))
			{
				bParam1->f_1 = 0;
				UNK_0x0674E58A79778E99(&(bParam1->f_6), 3);
			}
		}
		else if (UNK_0xE4EDC4B0E92C078B(bParam1->f_1))
		{
			bParam1->f_1 = 0;
			UNK_0x0674E58A79778E99(&(bParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_518()
{
	return Global_1312854;
}

bool func_519(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	if (UNK_0x405E212DDE472467(bParam0, 0))
	{
		bVar0 = UNK_0x6937EA2286828455(bParam0, 0);
		if (UNK_0xDF1306B443CD3D15(bVar0, 0))
		{
			if (UNK_0xF1D385D359D58F72("MPBitset", 3))
			{
				if (UNK_0x30F813723591D02E(bVar0, "MPBitset"))
				{
					bVar1 = UNK_0x1E2DFB0EF4BB4566(bVar0, "MPBitset");
				}
				if (UNK_0xEAE0D21A50E6C7F4(bVar1, 12))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_520()
{
	return Local_63;
}

int func_521(int iParam0)
{
	return Local_119[iParam0 /*5*/];
}

void func_522()
{
	if (UNK_0xD803B885F5E47A62() == bLocal_288)
	{
		if (Global_30918)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_119[bLocal_295 /*5*/].f_1, 4))
			{
				UNK_0x5D96D8530B3D0904(&(Local_119[bLocal_295 /*5*/].f_1), 4);
			}
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Local_119[bLocal_295 /*5*/].f_1), 4);
		}
	}
}

void func_523()
{
	bool bVar0;

	bVar0 = false;
	if (UNK_0xD803B885F5E47A62() == bLocal_287)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1573339, false))
		{
			UNK_0x0674E58A79778E99(&Global_1573339, false);
			bVar0 = true;
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_119[bLocal_287 /*5*/].f_1, 2))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 11))
			{
				UNK_0x5D96D8530B3D0904(&(Local_119[bLocal_287 /*5*/].f_1), 2);
				bVar0 = true;
			}
		}
		else if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 11))
		{
			UNK_0x0674E58A79778E99(&(Local_119[bLocal_287 /*5*/].f_1), 2);
		}
		if (bVar0)
		{
			Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_4 = func_527();
			func_524(Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_4);
		}
	}
	else if (Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_4 != Local_63.f_44)
	{
		Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_4 = Local_63.f_44;
		func_524(Local_119[UNK_0x6E61BE9E61434AC1() /*5*/].f_4);
		bVar0 = true;
	}
}

void func_524(bool bParam0)
{
	switch (bLocal_286)
	{
		case 0:
			func_526(&(Global_1575015[3]), bParam0);
			break;
		case 1:
			func_525(bParam0);
			break;
	}
}

void func_525(bool bParam0)
{
	bool bVar0;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam0, bVar0))
		{
			UNK_0x0E2400AB9174FA81(1, Global_1574967[bVar0], joaat("PRIVATE_SECURITY"));
			UNK_0x0E2400AB9174FA81(1, joaat("PRIVATE_SECURITY"), Global_1574967[bVar0]);
		}
		else
		{
			UNK_0x0E2400AB9174FA81(3, Global_1574967[bVar0], joaat("PRIVATE_SECURITY"));
			UNK_0x0E2400AB9174FA81(3, joaat("PRIVATE_SECURITY"), Global_1574967[bVar0]);
		}
		bVar0++;
	}
}

void func_526(var uParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam1, bVar0))
		{
			UNK_0x0E2400AB9174FA81(1, Global_1574967[bVar0], *uParam0);
			UNK_0x0E2400AB9174FA81(1, *uParam0, Global_1574967[bVar0]);
		}
		else
		{
			UNK_0x0E2400AB9174FA81(3, Global_1574967[bVar0], *uParam0);
			UNK_0x0E2400AB9174FA81(3, *uParam0, Global_1574967[bVar0]);
		}
		bVar0++;
	}
}

int func_527()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (bLocal_286 == 1 || bLocal_286 == 0)
		{
			if (bLocal_287 == UNK_0x117658E336116132(bVar1))
			{
				UNK_0x5D96D8530B3D0904(&iVar0, bVar1);
			}
		}
		else if (UNK_0xD803B885F5E47A62() == UNK_0x117658E336116132(bVar1))
		{
			UNK_0x5D96D8530B3D0904(&iVar0, bVar1);
		}
		else if (func_6(UNK_0x117658E336116132(bVar1), 0, 1))
		{
			if (func_52(UNK_0x117658E336116132(bVar1)))
			{
				UNK_0x5D96D8530B3D0904(&iVar0, bVar1);
			}
		}
		bVar1++;
	}
	return iVar0;
}

void func_528()
{
	switch (bLocal_286)
	{
		case 0:
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_280, 11))
			{
				if (UNK_0xD803B885F5E47A62() == bLocal_287 && UNK_0xD803B885F5E47A62() != bLocal_288)
				{
					if (func_6(bLocal_288, 1, 1))
					{
						func_340("GC_TCK_60", bLocal_288, 0, 0, 0, 1, 0);
						UNK_0x5D96D8530B3D0904(&bLocal_280, 11);
					}
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_280, 12))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 8))
				{
					if (UNK_0xD803B885F5E47A62() == bLocal_287 && UNK_0xD803B885F5E47A62() != bLocal_288)
					{
						if (func_6(bLocal_288, 1, 1))
						{
							func_340("GC_TCK_62", bLocal_288, 0, 0, 0, 1, 0);
							UNK_0x5D96D8530B3D0904(&bLocal_280, 12);
						}
					}
				}
			}
			if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 10))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_280, 8))
				{
					if (UNK_0xD803B885F5E47A62() == bLocal_287 && UNK_0xD803B885F5E47A62() != bLocal_288)
					{
						if (func_6(bLocal_288, 1, 1))
						{
							func_340("GC_TCK_65", bLocal_288, 0, 0, 0, 1, 0);
							UNK_0x5D96D8530B3D0904(&bLocal_280, 8);
						}
					}
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(bLocal_280, 13))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 11))
				{
					if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, 8))
					{
						if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_2, 6))
						{
							if (UNK_0xD803B885F5E47A62() == bLocal_287 && UNK_0xD803B885F5E47A62() != bLocal_288)
							{
								if (func_6(bLocal_288, 1, 1))
								{
									func_340("GC_TCK_63", bLocal_288, 0, 0, 0, 1, 0);
									UNK_0x5D96D8530B3D0904(&bLocal_280, 13);
								}
							}
						}
					}
				}
			}
			break;
		case 1:
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_280, 11))
			{
				if (UNK_0xD803B885F5E47A62() == bLocal_287)
				{
					if (func_6(bLocal_288, 1, 1) && UNK_0xD803B885F5E47A62() != bLocal_288)
					{
						if (Local_63.f_50)
						{
							func_340("HS_SUCC", bLocal_288, 0, 0, 0, 1, 0);
						}
						else if (Local_63.f_52)
						{
							func_340("GO_ASS_SUCC", bLocal_288, 0, 0, 0, 1, 0);
						}
						else
						{
							func_340("GC_TCK_70", bLocal_288, 0, 0, 0, 1, 0);
						}
						UNK_0x5D96D8530B3D0904(&bLocal_280, 11);
					}
				}
				else if (UNK_0xD803B885F5E47A62() == bLocal_288)
				{
					if (func_6(bLocal_287, 1, 1))
					{
						if (Local_63.f_50)
						{
							if (Local_63.f_51)
							{
								func_530("HS_A_SUCC");
							}
							else
							{
								func_340("HS_SENT", bLocal_287, 0, 0, 0, 1, 0);
							}
						}
						else if (Local_63.f_52)
						{
							func_340("GO_ASS_SENT", bLocal_287, 0, 0, 0, 1, 0);
						}
						else
						{
							func_340("GC_TCK_71", bLocal_287, 0, 0, 0, 1, 0);
						}
						UNK_0x5D96D8530B3D0904(&bLocal_280, 11);
					}
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_280, 10))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, false))
				{
					if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_3, 6))
					{
						if (UNK_0xD803B885F5E47A62() == bLocal_287 && UNK_0xD803B885F5E47A62() != bLocal_288)
						{
							if (func_6(bLocal_288, 0, 1))
							{
								func_529(-1);
								if (Local_63.f_50)
								{
									if (!Local_63.f_51)
									{
										func_340("HS_KILLED", bLocal_288, 0, 0, 0, 1, 0);
									}
								}
								else if (Local_63.f_52)
								{
									func_340("GO_ASS_KILL", bLocal_288, 0, 0, 0, 1, 0);
								}
								else
								{
									func_340("GC_TCK_73", bLocal_288, 0, 0, 0, 1, 0);
								}
								UNK_0x5D96D8530B3D0904(&bLocal_280, 10);
							}
						}
					}
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_280, 9))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_1, false))
				{
					if (UNK_0xEAE0D21A50E6C7F4(Local_63.f_3, 7))
					{
						if (UNK_0xD803B885F5E47A62() == bLocal_287 && UNK_0xD803B885F5E47A62() != bLocal_288)
						{
							if (func_6(bLocal_288, 0, 1))
							{
								if (Local_63.f_50)
								{
									func_340("HS_ESCAPED", bLocal_288, 0, 0, 0, 1, 0);
								}
								else if (Local_63.f_52)
								{
									func_340("GO_ASS_ESC", bLocal_288, 0, 0, 0, 1, 0);
								}
								else
								{
									func_340("GC_TCK_75", bLocal_288, 0, 0, 0, 1, 0);
								}
								UNK_0x5D96D8530B3D0904(&bLocal_280, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_529(bool bParam0)
{
	if (Global_1574401)
	{
		if (Global_1574405 && Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] != 148)
		{
			if (Global_1573902.f_14 == UNK_0x117658E336116132(bParam0))
			{
				Global_1626581++;
			}
		}
		else
		{
			Global_1626581++;
		}
	}
}

int func_530(bool bParam0)
{
	int iVar0;

	iVar0 = -1;
	UNK_0x1E64CE678ED5F61E(bParam0);
	iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
	func_341(0, bParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_531()
{
	if (UNK_0x9BFC2168CB5FCF68(false, 0) != Local_63.f_45)
	{
		if (func_539(Local_63.f_45, 0, 1))
		{
			if (UNK_0xA108079788452A90(0) <= Local_63.f_45)
			{
				UNK_0x0BEC04ECA8485A3A(Local_63.f_45);
			}
		}
	}
	if (UNK_0x11225ACFD0C1477E(0, 0) != Local_63.f_46)
	{
		if (func_538(Local_63.f_45, 0, 1))
		{
			if (UNK_0xA0FAF378D1CA33E8(0) <= Local_63.f_46)
			{
				UNK_0x28E5F00F131890E3(Local_63.f_46);
			}
		}
	}
	if (UNK_0xBF3DE18643F54472(false, 0) != Local_63.f_47)
	{
		if (func_532(Local_63.f_45, 0, 1))
		{
			if (UNK_0x479CE2F0004FE5B7(0) <= Local_63.f_47)
			{
				UNK_0x3A4967AE7C71F999(Local_63.f_47);
			}
		}
	}
}

int func_532(int iParam0, bool bParam1, bool bParam2)
{
	return func_533(2, iParam0, 1, bParam1, bParam2);
}

int func_533(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!UNK_0xEAE0D21A50E6C7F4(Global_1389296, false))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_537(iParam0) - func_536(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_536(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_537(iParam0) - func_535(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_536(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_537(iParam0) - func_536(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] != 3)
		{
			iVar1 = (iVar1 - func_534(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_534(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 10;
		case 2:
			return 10;
	}
	return 0;
}

int func_535(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389296.f_1;
		case 1:
			return Global_1389296.f_2;
		case 2:
			return Global_1389296.f_3;
	}
	return 0;
}

int func_536(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = UNK_0xD803B885F5E47A62();
	switch (iParam0)
	{
		case 0:
			if (!UNK_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0 /*421*/].f_209;
			}
			else
			{
				return UNK_0x9BFC2168CB5FCF68(!bParam1, 0);
			}
			break;
		case 1:
			if (!UNK_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0 /*421*/].f_210;
			}
			else
			{
				return UNK_0x11225ACFD0C1477E(!bParam1, 0);
			}
			break;
		case 2:
			if (!UNK_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0 /*421*/].f_211;
			}
			else
			{
				return UNK_0xBF3DE18643F54472(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_537(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389304;
		case 1:
			return Global_1389305;
		case 2:
			return Global_1389306;
	}
	return 0;
}

int func_538(int iParam0, bool bParam1, bool bParam2)
{
	return func_533(1, iParam0, 1, bParam1, bParam2);
}

int func_539(int iParam0, bool bParam1, bool bParam2)
{
	return func_533(0, iParam0, 1, bParam1, bParam2);
}

void func_540()
{
	if (Local_63.f_50)
	{
		if (UNK_0xD803B885F5E47A62() == bLocal_287)
		{
			func_542(9);
		}
		else if (UNK_0xD803B885F5E47A62() == bLocal_288)
		{
			func_542(13);
		}
	}
	else if (Local_63.f_52)
	{
	}
	func_541();
}

void func_541()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_542(bool bParam0)
{
	UNK_0x0674E58A79778E99(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_5), bParam0);
}

bool func_543()
{
	var uVar0;

	func_550(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_549())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_548())
	{
		return true;
	}
	if (func_547(159))
	{
		if (!func_546())
		{
			return true;
		}
	}
	if (func_547(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_544() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_544()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_544()
{
	switch (func_120())
	{
		case 0:
			return func_545();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_545()
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

bool func_546()
{
	return Global_2450632.f_598;
}

bool func_547(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_548()
{
	return Global_2460680;
}

bool func_549()
{
	return Global_2450632.f_593;
}

void func_550(var uParam0)
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
					func_551(iVar0);
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

void func_551(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_6(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_552(bVar4, &bVar5))
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

bool func_552(bool bParam0, bool bParam1)
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

void func_553()
{
	SYSTEM::WAIT(0);
}

void func_554(struct<21> Param0)
{
	func_560(32, Param0);
	func_559(0, -1, 0);
	UNK_0x9752E7BAEABA939E(&Local_63, 56);
	UNK_0x35B62793EAE9ADDF(&Local_119, 161);
	UNK_0x256D93AFAE851A7A(0);
	if (!func_558())
	{
		func_261();
	}
	bLocal_286 = Param0.f_16;
	bLocal_287 = UNK_0x117658E336116132(Param0.f_17);
	if (UNK_0x40B8C182D63932FC(bLocal_287))
	{
	}
	bLocal_288 = UNK_0x117658E336116132(Param0.f_18);
	if (UNK_0x40B8C182D63932FC(bLocal_288))
	{
		iLocal_289 = UNK_0x12AB0310C2281427(UNK_0x6E524813889AECF8(bLocal_288));
	}
	if (func_557(bLocal_287, 9) && bLocal_286 == 1)
	{
		Local_63.f_50 = 1;
		if (func_557(bLocal_288, 13))
		{
			Local_63.f_51 = 1;
		}
	}
	if (bLocal_286 == 1)
	{
		if (func_556(bLocal_287))
		{
			Local_63.f_52 = 1;
			Local_63.f_53 = func_555(bLocal_287);
		}
	}
	vLocal_290 = { Param0.f_10 };
	if (bLocal_286 == 1)
	{
		if (UNK_0xD803B885F5E47A62() == bLocal_287)
		{
			UNK_0x5D96D8530B3D0904(&Global_1573339, false);
		}
	}
	Global_1653535 = 0;
	Global_1653536 = 0;
	if (bLocal_286 == 1)
	{
		Global_2537071.f_1703 = 0;
	}
	Local_119[UNK_0x6E61BE9E61434AC1() /*5*/] = 0;
}

var func_555(bool bParam0)
{
	return Global_1590535[bParam0 /*876*/].f_183.f_4;
}

bool func_556(bool bParam0)
{
	return Global_1590535[bParam0 /*876*/].f_183 != func_13();
}

bool func_557(bool bParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_11.f_5, bParam1);
}

bool func_558()
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
		if (func_549())
		{
			return false;
		}
		if (func_547(157))
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

int func_559(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_541();
			}
			else
			{
				return 0;
			}
		}
		if (!func_518())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_541();
					}
					else
					{
						return 0;
					}
				}
				if (func_549())
				{
					if (!bParam2)
					{
						func_541();
					}
					else
					{
						return 0;
					}
				}
				if (func_547(157))
				{
					if (!bParam2)
					{
						func_541();
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
					func_541();
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
				func_541();
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
			func_541();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_560(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!UNK_0x8CD06866876216F2())
	{
		func_541();
	}
	UNK_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

