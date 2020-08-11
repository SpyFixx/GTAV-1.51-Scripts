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
	bool bLocal_18 = false;
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
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
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
	struct<22> Local_73 = { 0, 0, 0, -1, 0, -1, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	struct<14> Local_98 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_112[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_209 = 0;
	int iLocal_210 = 0;
	bool bLocal_211 = false;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	int iLocal_218 = 0;
	bool bLocal_219 = false;
	bool bLocal_220 = false;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	struct<2> Local_223 = { 0, 0 } ;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 16;
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
	bool bLocal_396 = false;
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
	bLocal_18 = "NULL";
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	func_401(ScriptParam_0);
	while (true)
	{
		func_400();
		if (func_389() || !func_388(UNK_0xD803B885F5E47A62(), 0, 1))
		{
			func_386();
		}
		switch (func_385(UNK_0x57270EE11514DC67()))
		{
			case 0:
				if (func_384() == 2)
				{
					vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_1 = 2;
				}
				else if (func_384() == 6)
				{
					vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_1 = 5;
				}
				break;
			case 2:
				if (func_384() == 2)
				{
					func_377();
					func_54();
				}
				else if (func_384() == 6)
				{
					vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_1 = 5;
				}
				if (((func_51(UNK_0xD803B885F5E47A62(), 1, 0) || func_48(UNK_0xD803B885F5E47A62())) || UNK_0xEAE0D21A50E6C7F4(bLocal_211, 8)) || UNK_0xEAE0D21A50E6C7F4(bLocal_211, 16))
				{
					vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_1 = 6;
				}
				break;
			case 5:
				func_47(&(Local_73.f_19));
				if (func_46(&(Local_73.f_19)))
				{
					vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_1 = 6;
				}
				break;
			case 3:
				vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_1 = 6;
			case 6:
				func_386();
				break;
		}
		if (UNK_0xBFF81ED3B99522C7())
		{
			switch (func_384())
			{
				case 0:
					func_45(&(Local_73.f_17), 0, 0);
					Local_73.f_1 = 2;
					break;
				case 2:
					func_41();
					func_39();
					func_3();
					if (func_1())
					{
						Local_73.f_1 = 6;
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
	if (func_2())
	{
		return true;
	}
	return false;
}

bool func_2()
{
	return UNK_0xEAE0D21A50E6C7F4(Local_73, 6);
}

void func_3()
{
	if (UNK_0xBFF81ED3B99522C7())
	{
		switch (Local_73.f_2)
		{
			case 0:
				if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 10))
				{
					if (func_38(&(Local_73.f_17), 300000, 0))
					{
						UNK_0x5D96D8530B3D0904(&Local_73, 10);
					}
				}
				if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 10))
				{
					if (UNK_0xEAE0D21A50E6C7F4(Local_73, false))
					{
						Local_73.f_5 = func_37();
						Local_73.f_2 = 1;
						Local_73.f_4 = 0;
					}
				}
				break;
			case 1:
				if (func_6())
				{
					UNK_0x5D96D8530B3D0904(&Local_73, 3);
					UNK_0x0674E58A79778E99(&Local_73, 13);
					func_45(&(Local_73.f_21), 0, 0);
					Local_73.f_2 = 2;
				}
				break;
			case 2:
				if (UNK_0xEAE0D21A50E6C7F4(Local_73, 4))
				{
					func_4(Local_73.f_5);
					Local_73.f_2 = 7;
				}
				break;
			case 7:
				func_4(Local_73.f_5);
				break;
		}
	}
}

void func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_5(&(Local_73.f_9[0]));
			func_5(&(Local_73.f_12[0]));
			break;
	}
}

void func_5(var uParam0)
{
	bool bVar0;

	if (UNK_0xE5DBF9B6126856CA(*uParam0))
	{
		bVar0 = UNK_0xA5FBBC2F619A4DE2(*uParam0);
		UNK_0x82692E8F6A0D7A22(&bVar0);
	}
}

bool func_6()
{
	if (Local_73.f_5 == 0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_73, true))
		{
			bLocal_219 = false;
			bLocal_220 = UNK_0x09AC81E49EA267F7(false, 5);
			iLocal_97 = 0;
			Local_73.f_3 = -1;
			Local_73.f_4 = 0;
			UNK_0x5D96D8530B3D0904(&Local_73, true);
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 2))
		{
			if (func_36())
			{
				UNK_0x5D96D8530B3D0904(&Local_73, 2);
			}
		}
		else if (func_7())
		{
			return true;
		}
	}
	return false;
}

bool func_7()
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	var uVar5;

	bVar0 = func_35();
	bVar1 = func_34();
	if (!UNK_0xE5DBF9B6126856CA(Local_73.f_12[0]))
	{
		if (Local_73.f_15 == 0)
		{
			UNK_0x28E5F00F131890E3(1);
			Local_73.f_15 = 1;
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 13))
		{
			if (UNK_0xE75B31D140F2F10B(1))
			{
				if (UNK_0xA3FA8B6D2780D661(1))
				{
					if (func_33(1, 1, 1))
					{
						if (func_27(1, 1, 1))
						{
							UNK_0x5D96D8530B3D0904(&Local_73, 13);
						}
					}
				}
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Local_73, 13))
		{
			if (func_26(bVar1))
			{
				if (func_26(bVar0))
				{
					if (func_14(&vVar2, &uVar5))
					{
						if (func_11(&(Local_73.f_12[0]), bVar1, vVar2, uVar5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							UNK_0x7980D72D61BEF4D5(UNK_0xB177666FAB6F4417(Local_73.f_12[0]), true);
							if (UNK_0xF1D385D359D58F72("Not_Allow_As_Saved_Veh", 3))
							{
								UNK_0xB7E567188872123E(UNK_0xB177666FAB6F4417(Local_73.f_12[0]), "Not_Allow_As_Saved_Veh", true);
							}
							Local_73.f_15 = 1;
						}
					}
				}
			}
		}
	}
	if (UNK_0xE5DBF9B6126856CA(Local_73.f_12[0]))
	{
		if (!UNK_0xE5DBF9B6126856CA(Local_73.f_9[0]))
		{
			if (Local_73.f_16 == 0)
			{
				UNK_0x0BEC04ECA8485A3A(1);
				Local_73.f_16 = 1;
			}
			if (UNK_0xA3FA8B6D2780D661(1))
			{
				if (func_26(bVar0))
				{
					if (func_9(Local_73.f_12[0]))
					{
						if (UNK_0x526BC32A660C89E6(Local_73.f_12[0]))
						{
							if (func_8(&(Local_73.f_9[0]), Local_73.f_12[0], 26, bVar0, -1, 1, 1, 1))
							{
								UNK_0x7980D72D61BEF4D5(UNK_0x1B50683925F00106(Local_73.f_9[0]), true);
								UNK_0xE2F0767314863BD8(UNK_0x1B50683925F00106(Local_73.f_9[0]), 1, 0);
								UNK_0x11AD11297DC58CC7(UNK_0x1B50683925F00106(Local_73.f_9[0]), true);
								UNK_0x6DF7BF67E86AAE86(UNK_0x1B50683925F00106(Local_73.f_9[0]), Global_1575003);
								UNK_0xE2F0767314863BD8(UNK_0x1B50683925F00106(Local_73.f_9[0]), 1, 0);
								UNK_0xD458AC1C1D29C3B4(UNK_0x1B50683925F00106(Local_73.f_9[0]), SYSTEM::ROUND((200f * Global_262145.f_154)), false);
								Local_73.f_16 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!UNK_0xE5DBF9B6126856CA(Local_73.f_9[0]) || !UNK_0xE5DBF9B6126856CA(Local_73.f_12[0]))
	{
		return false;
	}
	return true;
}

bool func_8(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!UNK_0xA3FA8B6D2780D661(1))
	{
		return false;
	}
	if (!UNK_0xE9F78D191AD5EDBA(iParam1))
	{
		return false;
	}
	if (!UNK_0xDF1306B443CD3D15(UNK_0xB177666FAB6F4417(iParam1), 0))
	{
		return false;
	}
	*uParam0 = UNK_0xE8C9CB886096272A(UNK_0x852A19533F896693(UNK_0xB177666FAB6F4417(iParam1), iParam2, bParam3, bParam4, iParam6, bParam5));
	if (UNK_0xE9F78D191AD5EDBA(*uParam0))
	{
		UNK_0x120A395B0ECB8EA5(UNK_0x1B50683925F00106(*uParam0), bParam7);
		if (UNK_0xECE0BE5313FD8BDA(UNK_0x1B50683925F00106(*uParam0)))
		{
			if (bParam5)
			{
				UNK_0xF4F945BB00F6E31C(*uParam0, 1);
			}
		}
		return true;
	}
	return false;
}

bool func_9(int iParam0)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		return !func_10(UNK_0xB177666FAB6F4417(iParam0));
	}
	return false;
}

bool func_10(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0x437347B10A200C4B(bParam0, 0))
		{
			return true;
		}
		else if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_11(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	bool bVar0;
	bool bVar1;

	if (!UNK_0x468C1AC3ABF95C57(bParam1))
	{
		return false;
	}
	if (!UNK_0xE75B31D140F2F10B(1))
	{
		return false;
	}
	bVar0 = 1.5f;
	if (bParam1 == joaat("BOMBUSHKA"))
	{
		bVar0 = 20f;
	}
	if (bParam11)
	{
		UNK_0x28F5E4DA506AC0CA(vParam2, bVar0, 0, 0, 0, 0, false, 0);
	}
	bVar1 = UNK_0x122AAB0B1D6F55AD(bParam1, vParam2, bParam5, bParam7, bParam6, bParam14);
	if (UNK_0xC844350D5D58C99A(bVar1))
	{
		*uParam0 = UNK_0xFBA927257CA38E95(bVar1);
		Global_2537071.f_6516 = bVar1;
		if (UNK_0xE9F78D191AD5EDBA(*uParam0))
		{
			if (bParam15)
			{
				UNK_0x271603AF9C0C7EB3(bVar1, 1);
			}
			UNK_0x120A395B0ECB8EA5(bVar1, bParam10);
			if (UNK_0xECE0BE5313FD8BDA(bVar1))
			{
				if (bParam8)
				{
					UNK_0xF4F945BB00F6E31C(*uParam0, 1);
				}
				else
				{
					UNK_0xF4F945BB00F6E31C(*uParam0, 0);
				}
				if (bParam13)
				{
					UNK_0x7F379C0A8EB2F4D0(*uParam0, UNK_0xD803B885F5E47A62(), 1);
				}
			}
			UNK_0x750A9DEB80D6992C(bVar1, bParam9);
			UNK_0x8E44A2B22BBBAFE4(bVar1, 1);
			if (bParam12)
			{
				UNK_0x4CC3459AE123CD76(bVar1);
				UNK_0xF50D17A63556B8D4(bVar1, 5, 5, 1f);
			}
			func_12(vParam2, bParam5, bParam1, bVar1);
			return true;
		}
	}
	return false;
}

void func_12(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (func_13(UNK_0xD803B885F5E47A62(), vParam0, bParam4) > -1)
	{
		if ((Global_2405072.f_2912[1 /*6*/].f_5 == bParam5 && Global_2405072.f_2912[1 /*6*/].f_4 == bParam4) && SYSTEM::VDIST(Global_2405072.f_2912[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405072.f_2912[iVar0 /*6*/] = { Global_2405072.f_2912[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405072.f_2912[1 /*6*/] = { vParam0 };
		Global_2405072.f_2912[1 /*6*/].f_3 = bParam3;
		Global_2405072.f_2912[1 /*6*/].f_4 = bParam4;
		Global_2405072.f_2912[1 /*6*/].f_5 = bParam5;
	}
}

int func_13(int iParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == bParam4)
			{
				vVar2 = { vParam1 };
				if (UNK_0x755FF954DAE327E1((Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.f_2 = Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_14(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (!func_25(*uParam0, 0f, 0f, 0f, 0))
	{
		return true;
	}
	switch (bLocal_220)
	{
		case 0:
			if (UNK_0xEAE0D21A50E6C7F4(Local_73.f_4, bLocal_220))
			{
				vVar0 = { -1232.842f, -1095.003f, 2.2331f };
				vVar3 = { -1226.248f, -1089.819f, 10.1513f };
				vVar6 = { func_24(0, 0) };
				fVar9 = 19.7853f;
			}
			break;
		case 1:
			if (UNK_0xEAE0D21A50E6C7F4(Local_73.f_4, bLocal_220))
			{
				vVar0 = { -622.0966f, 250.3288f, 75.7075f };
				vVar3 = { -614.8635f, 255.2288f, 88.7755f };
				vVar6 = { func_24(0, 1) };
				fVar9 = 266.4686f;
			}
			break;
		case 2:
			if (UNK_0xEAE0D21A50E6C7F4(Local_73.f_4, bLocal_220))
			{
				vVar0 = { 794.4784f, -2034.339f, 25.2469f };
				vVar3 = { 798.8026f, -2026.004f, 33.2793f };
				vVar6 = { func_24(0, 2) };
				fVar9 = 355.9428f;
			}
			break;
		case 3:
			if (UNK_0xEAE0D21A50E6C7F4(Local_73.f_4, bLocal_220))
			{
				vVar0 = { -1623.919f, 1249.831f, 135.2495f };
				vVar3 = { -1621.554f, 1257.98f, 145.2376f };
				vVar6 = { func_24(0, 3) };
				fVar9 = 353.7463f;
			}
			break;
		case 4:
			if (UNK_0xEAE0D21A50E6C7F4(Local_73.f_4, bLocal_220))
			{
				vVar0 = { 1118.077f, 1875.035f, 60.3776f };
				vVar3 = { 1127.638f, 1883.083f, 70.1053f };
				vVar6 = { func_24(0, 4) };
				fVar9 = 201.3967f;
			}
			break;
	}
	if (bLocal_220 < 5)
	{
		if (!func_25(vVar0, 0f, 0f, 0f, 0))
		{
			if (Local_73.f_3 == -1)
			{
				Local_73.f_3 = UNK_0x198D598261EEA7EA(vVar0, vVar3);
			}
			else if (UNK_0x23002DD5E7B94FD7(Local_73.f_3))
			{
				if (UNK_0x9E6C7E283363593B(Local_73.f_3))
				{
					if (!UNK_0x6FE31D882B028E10(Local_73.f_3))
					{
						if (!func_15(vVar6, 1084227584 /* Float: 5f */, 1, 1, 1123024896 /* Float: 120f */, 0, -1, 0, 0))
						{
							*uParam0 = { vVar6 };
							*uParam1 = fVar9;
							UNK_0xBD63401BCCEC233B(Local_73.f_3);
							return true;
						}
						else
						{
							bLocal_220++;
							UNK_0xBD63401BCCEC233B(Local_73.f_3);
							Local_73.f_3 = -1;
						}
					}
					else
					{
						bLocal_220++;
						UNK_0xBD63401BCCEC233B(Local_73.f_3);
						Local_73.f_3 = -1;
					}
				}
			}
		}
		else
		{
			bLocal_220++;
		}
	}
	else
	{
		bLocal_220 = false;
	}
	return false;
}

bool func_15(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	float fVar2;

	if (bParam4 && !bParam7)
	{
		if (func_388(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			if (!UNK_0x757EF87A33649210())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (UNK_0x0EB28750412C3A5A(func_20(UNK_0xD803B885F5E47A62()), vParam0, 1) <= (fVar2 + bParam3))
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
		if (func_388(bVar1, 1, 1))
		{
			if (!func_17(bVar1, 0) && UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
			{
				if (bParam4 == 1 || (bParam4 == 0 && bVar1 != UNK_0xD803B885F5E47A62()))
				{
					if ((func_16(bVar1) || !bParam10) && !Global_2425662[bVar1 /*421*/].f_259)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!UNK_0x08067D4957B73C02(bVar1) == -1)
							{
								if (UNK_0x08067D4957B73C02(bVar1) == UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((bParam5 || (bParam5 == 0 && UNK_0x08067D4957B73C02(bVar1) != UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()))) || UNK_0x08067D4957B73C02(bVar1) == -1)
							{
								if (UNK_0x0EB28750412C3A5A(func_20(bVar1), vParam0, 1) <= (fVar2 + bParam3))
								{
									if (UNK_0xAA451564CBFD3413(bVar1, vParam0, bParam3))
									{
										return true;
									}
								}
							}
						}
						else if (UNK_0x08067D4957B73C02(bVar1) != iParam8 || UNK_0x08067D4957B73C02(bVar1) == -1)
						{
							if (UNK_0x0EB28750412C3A5A(func_20(bVar1), vParam0, 1) <= (fVar2 + bParam3))
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

bool func_16(bool bParam0)
{
	if (UNK_0x62FA787159F264AC(UNK_0x9539D44F3E4492F6(bParam0)) || Global_2425662[bParam0 /*421*/].f_245)
	{
		return true;
	}
	return false;
}

bool func_17(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312745;
}

Vector3 func_20(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if ((func_23() && Global_1590535[bVar0 /*876*/].f_847) && !func_22(Global_1590535[bVar0 /*876*/].f_848))
	{
		return Global_1590535[bVar0 /*876*/].f_848;
	}
	return func_21(bParam0);
}

Vector3 func_21(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

bool func_22(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

var func_23()
{
	return Global_2450632.f_17;
}

Vector3 func_24(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				vVar0 = { -1228.99f, -1092.231f, 7.0465f };
			}
			else if (iParam1 == 1)
			{
				vVar0 = { -618.6293f, 252.6611f, 80.5897f };
			}
			else if (iParam1 == 2)
			{
				vVar0 = { 796.6768f, -2029.602f, 28.1346f };
			}
			else if (iParam1 == 3)
			{
				vVar0 = { -1622.881f, 1253.516f, 139.6713f };
			}
			else if (iParam1 == 4)
			{
				vVar0 = { 1123.27f, 1878.917f, 65.7957f };
			}
			break;
	}
	return vVar0;
}

bool func_25(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_26(bool bParam0)
{
	if (bParam0 == 0)
	{
		return true;
	}
	UNK_0x523BCC9DC80CD82F(bParam0);
	return UNK_0xB87F6CF6E5628C67(bParam0);
}

bool func_27(int iParam0, bool bParam1, bool bParam2)
{
	return func_28(0, iParam0, 1, bParam1, bParam2);
}

int func_28(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!UNK_0xEAE0D21A50E6C7F4(Global_1389296, false))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_32(iParam0) - func_31(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_31(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_32(iParam0) - func_30(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_31(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_32(iParam0) - func_31(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] != 3)
		{
			iVar1 = (iVar1 - func_29(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0)
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

int func_30(int iParam0)
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

int func_31(int iParam0, bool bParam1)
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

int func_32(int iParam0)
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

bool func_33(int iParam0, bool bParam1, bool bParam2)
{
	return func_28(1, iParam0, 1, bParam1, bParam2);
}

int func_34()
{
	return joaat("CAVALCADE");
}

int func_35()
{
	return joaat("A_M_Y_BUSINESS_03");
}

bool func_36()
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	bool bVar9;

	if (UNK_0xEAE0D21A50E6C7F4(Local_73, true))
	{
		if (iLocal_97 >= vLocal_112.x)
		{
			if (bLocal_219 < 5)
			{
				bLocal_219++;
			}
			iLocal_97 = 0;
		}
		if (iLocal_97 == 0)
		{
			UNK_0x5D96D8530B3D0904(&bLocal_211, true);
		}
		if (bLocal_219 < 5)
		{
			bVar9 = iLocal_97;
			if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bVar9)))
			{
				bVar0 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(bVar9));
				if (func_388(bVar0, 1, 1))
				{
					bVar1 = UNK_0x9539D44F3E4492F6(bVar0);
					if (UNK_0xEAE0D21A50E6C7F4(bLocal_211, true))
					{
						vVar2 = { func_24(Local_73.f_5, bLocal_219) };
						vVar5 = { UNK_0x68F4C0EC296D3901(bVar1, false) };
						fVar8 = UNK_0x0EB28750412C3A5A(vVar2, vVar5, 1);
						if (fVar8 < 300f)
						{
							UNK_0x0674E58A79778E99(&bLocal_211, true);
						}
					}
				}
			}
			iLocal_97++;
			if (iLocal_97 == vLocal_112.x)
			{
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_211, true))
				{
					UNK_0x5D96D8530B3D0904(&(Local_73.f_4), bLocal_219);
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

int func_37()
{
	return 0;
}

bool func_38(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_45(uParam0, bParam2, 0);
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

void func_39()
{
	if (UNK_0xBFF81ED3B99522C7())
	{
		switch (Local_73.f_6)
		{
			case 0:
				if (UNK_0xE5DBF9B6126856CA(Local_73.f_9[0]) && UNK_0xE5DBF9B6126856CA(Local_73.f_12[0]))
				{
					Local_73.f_6 = 1;
				}
				break;
			case 1:
				if (UNK_0xE5DBF9B6126856CA(Local_73.f_9[0]))
				{
					if (!func_40(Local_73.f_9[0]))
					{
						if (UNK_0xE5DBF9B6126856CA(Local_73.f_12[0]))
						{
							if (func_9(Local_73.f_12[0]))
							{
								if (UNK_0x82CCEAB29E9451DD(UNK_0x1B50683925F00106(Local_73.f_9[0]), UNK_0xB177666FAB6F4417(Local_73.f_12[0])))
								{
									if (UNK_0xEAE0D21A50E6C7F4(Local_73, 7))
									{
										UNK_0x5D96D8530B3D0904(&Local_73, 9);
										Local_73.f_6 = 2;
									}
									else if (UNK_0xEAE0D21A50E6C7F4(Local_73, 14))
									{
										UNK_0x5D96D8530B3D0904(&Local_73, 9);
										Local_73.f_6 = 2;
									}
									else if (UNK_0xEAE0D21A50E6C7F4(Local_73, 19))
									{
										Local_73.f_6 = 3;
									}
								}
								else
								{
									Local_73.f_6 = 4;
								}
							}
							else
							{
								Local_73.f_6 = 3;
							}
						}
					}
				}
				break;
			case 2:
				if (UNK_0xE5DBF9B6126856CA(Local_73.f_9[0]))
				{
					if (!func_40(Local_73.f_9[0]))
					{
						if (!UNK_0x0E0E6175453415CB(UNK_0x1B50683925F00106(Local_73.f_9[0])))
						{
							Local_73.f_6 = 4;
						}
						else if (UNK_0xE5DBF9B6126856CA(Local_73.f_12[0]))
						{
							if (!func_9(Local_73.f_12[0]))
							{
								Local_73.f_6 = 3;
							}
							else if (UNK_0xEAE0D21A50E6C7F4(Local_73, 19))
							{
								Local_73.f_6 = 3;
							}
						}
					}
				}
				break;
			case 3:
				if (UNK_0xE5DBF9B6126856CA(Local_73.f_9[0]))
				{
					if (!func_40(Local_73.f_9[0]))
					{
						if (!UNK_0x405E212DDE472467(UNK_0x1B50683925F00106(Local_73.f_9[0]), 0))
						{
							Local_73.f_6 = 4;
						}
					}
				}
				break;
			case 4:
				break;
		}
	}
}

bool func_40(int iParam0)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		return UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(iParam0));
	}
	return true;
}

void func_41()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if (UNK_0xBFF81ED3B99522C7())
	{
		if (iLocal_96 >= vLocal_112.x)
		{
			iLocal_96 = 0;
			iLocal_218 = 0;
			UNK_0x0674E58A79778E99(&bLocal_211, false);
			UNK_0x5D96D8530B3D0904(&bLocal_211, 5);
			UNK_0x0674E58A79778E99(&Local_73, 5);
			UNK_0x0674E58A79778E99(&Local_73, 17);
			UNK_0x0674E58A79778E99(&bLocal_211, 14);
			UNK_0x0674E58A79778E99(&bLocal_211, 19);
			if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 16))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_73, 18))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 4))
					{
						UNK_0x5D96D8530B3D0904(&Local_73, 16);
					}
				}
			}
			if (func_44(&(Local_73.f_21)))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 12))
				{
					if (func_38(&(Local_73.f_21), 360000, 0))
					{
						UNK_0x5D96D8530B3D0904(&Local_73, 12);
					}
					if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 15))
					{
						if (func_38(&(Local_73.f_21), 240000, 0))
						{
							UNK_0x5D96D8530B3D0904(&Local_73, 15);
						}
					}
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&bLocal_211, 9);
				}
			}
		}
		bVar0 = iLocal_96;
		if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bVar0)))
		{
			iVar3 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(bVar0));
			bVar2 = iVar3;
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_211, 5))
			{
				if (vLocal_112[bVar0 /*3*/].f_2 < 7)
				{
					UNK_0x0674E58A79778E99(&bLocal_211, 5);
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(Local_73, false))
			{
				if (UNK_0xEAE0D21A50E6C7F4(vLocal_112[bVar0 /*3*/], false))
				{
					iLocal_218++;
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(vLocal_112[bVar0 /*3*/], 2))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 17))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_73.f_7, bVar2))
					{
						if (vLocal_112[bVar0 /*3*/].f_2 > 4)
						{
							UNK_0x5D96D8530B3D0904(&(Local_73.f_7), bVar2);
							UNK_0x5D96D8530B3D0904(&Local_73, 17);
						}
					}
				}
				if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 5))
				{
					UNK_0x5D96D8530B3D0904(&Local_73, 5);
				}
				if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 4))
				{
					if (UNK_0xEAE0D21A50E6C7F4(vLocal_112[bVar0 /*3*/], true))
					{
						Local_73.f_8 = iVar3;
						UNK_0x5D96D8530B3D0904(&Local_73, 4);
						UNK_0x0674E58A79778E99(&bLocal_211, 15);
						UNK_0x0674E58A79778E99(&Local_73, 18);
					}
				}
				if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 4))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 18))
					{
						if (UNK_0xEAE0D21A50E6C7F4(vLocal_112[bVar0 /*3*/], 7))
						{
							UNK_0x5D96D8530B3D0904(&Local_73, 18);
						}
					}
				}
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_211, 9))
				{
					if (UNK_0xEAE0D21A50E6C7F4(vLocal_112[bVar0 /*3*/], 5))
					{
						UNK_0x0674E58A79778E99(&bLocal_211, 9);
					}
				}
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_211, 14))
				{
					if (UNK_0xEAE0D21A50E6C7F4(vLocal_112[bVar0 /*3*/], 6))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_211, 14);
					}
				}
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_211, 20))
				{
					if (UNK_0xEAE0D21A50E6C7F4(vLocal_112[bVar0 /*3*/], 8))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_211, 20);
					}
				}
			}
		}
		bVar1 = false;
		while (bVar1 <= 31)
		{
			if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bVar1)))
			{
				func_43(bVar1);
			}
			bVar1++;
		}
		iLocal_96++;
		if (iLocal_96 >= vLocal_112.x)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 16))
			{
				if (UNK_0xE5DBF9B6126856CA(Local_73.f_9[0]))
				{
					if (func_40(Local_73.f_9[0]))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 4))
						{
							if (UNK_0xEAE0D21A50E6C7F4(bLocal_211, 15))
							{
								if (!func_44(&uLocal_216))
								{
									func_45(&uLocal_216, 0, 0);
								}
								else if (func_38(&uLocal_216, 2000, 0))
								{
									UNK_0x5D96D8530B3D0904(&Local_73, 16);
								}
							}
						}
					}
				}
			}
			UNK_0x5D96D8530B3D0904(&bLocal_211, false);
			if (!UNK_0xEAE0D21A50E6C7F4(Local_73, false))
			{
				if (iLocal_218 >= 1)
				{
					UNK_0x5D96D8530B3D0904(&Local_73, false);
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 14))
			{
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_211, 14))
				{
					UNK_0x5D96D8530B3D0904(&Local_73, 14);
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 19))
			{
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_211, 20))
				{
					UNK_0x5D96D8530B3D0904(&Local_73, 19);
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 6))
			{
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_211, 5))
				{
					if (Local_73.f_2 > 1 && Local_73.f_2 <= 7)
					{
						UNK_0x5D96D8530B3D0904(&Local_73, 6);
					}
					else if (UNK_0xEAE0D21A50E6C7F4(Local_73, 10))
					{
						UNK_0x5D96D8530B3D0904(&Local_73, 6);
					}
				}
			}
			if (UNK_0xEAE0D21A50E6C7F4(Local_73, 17))
			{
				UNK_0x0674E58A79778E99(&Local_73, 17);
				UNK_0x0674E58A79778E99(&Local_73, 15);
				UNK_0x0674E58A79778E99(&Local_73, 12);
				func_42(&(Local_73.f_21));
				func_45(&(Local_73.f_21), 0, 0);
			}
			if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 11))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_73, 12))
				{
					if (UNK_0xEAE0D21A50E6C7F4(bLocal_211, 9))
					{
						UNK_0x5D96D8530B3D0904(&Local_73, 11);
					}
				}
			}
		}
	}
}

void func_42(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_43(bool bParam0)
{
	if (UNK_0xBFF81ED3B99522C7())
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 7))
		{
			if (UNK_0xEAE0D21A50E6C7F4(vLocal_112[bParam0 /*3*/], 3))
			{
				UNK_0x5D96D8530B3D0904(&Local_73, 7);
			}
		}
	}
}

bool func_44(var uParam0)
{
	return uParam0->f_1;
}

void func_45(var uParam0, bool bParam1, bool bParam2)
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

bool func_46(var uParam0)
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

void func_47(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (UNK_0xBFF81ED3B99522C7())
		{
			func_45(uParam0, 0, 0);
		}
	}
}

bool func_48(int iParam0)
{
	if (func_50(iParam0))
	{
		if (!func_49(iParam0, 11))
		{
			return true;
		}
	}
	return false;
}

bool func_49(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_208, bParam1);
}

bool func_50(int iParam0)
{
	if (Global_2425662[iParam0 /*421*/].f_208 == 0)
	{
		return false;
	}
	return true;
}

bool func_51(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_52(iParam0))
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

bool func_52(int iParam0)
{
	return func_53(iParam0);
}

bool func_53(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_13.f_1, false);
}

void func_54()
{
	func_368();
	func_365();
	if (UNK_0xEAE0D21A50E6C7F4(Local_73, 10))
	{
		if (vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 < 6)
		{
			vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 = 6;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_73, 4))
	{
		if (vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 <= 6)
		{
			vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 = 6;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_73, 16))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 4))
		{
			if (vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 <= 6)
			{
				vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 = 6;
				Local_98.f_2 = -1585178949;
				func_363(Local_98, func_364(1));
			}
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_73, 11))
	{
		if (vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 <= 6)
		{
			vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 = 6;
			Local_98.f_2 = -1585178949;
			func_363(Local_98, func_364(1));
		}
	}
	if (vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 > 0)
	{
		if (vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 < 6)
		{
			if ((((func_51(UNK_0xD803B885F5E47A62(), 1, 0) || func_362()) || func_361() > 0) || func_49(UNK_0xD803B885F5E47A62(), 1)) || func_360())
			{
				vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 = 6;
			}
		}
	}
	if (vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 > 0)
	{
		if (vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 < 6)
		{
			if (func_358(UNK_0xD803B885F5E47A62()))
			{
				vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 = 6;
			}
		}
	}
	switch (vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2)
	{
		case 0:
			if (UNK_0xEAE0D21A50E6C7F4(vLocal_112[UNK_0x57270EE11514DC67() /*3*/], false))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_73, 3))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_73, 15))
					{
						UNK_0x5D96D8530B3D0904(&(vLocal_112[UNK_0x57270EE11514DC67() /*3*/]), 2);
						func_357(11, 1);
						vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 = 3;
					}
					else
					{
						vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 = 6;
						UNK_0x5D96D8530B3D0904(&bLocal_211, 16);
					}
				}
			}
			break;
		case 3:
			if (func_356(Local_73.f_5))
			{
				func_355(Local_73.f_5);
				vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 = 4;
			}
			break;
		case 4:
			if (!func_354())
			{
				if (func_231())
				{
					vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 = 5;
					func_229(88, 1);
					func_228();
				}
				else if (UNK_0xEAE0D21A50E6C7F4(bLocal_211, 8))
				{
					vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 = 6;
				}
			}
			else if (func_219())
			{
				vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 = 5;
			}
			else
			{
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_211, 8))
				{
					vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 = 6;
				}
				if (UNK_0xEAE0D21A50E6C7F4(Local_73, 15))
				{
					func_206(12, 116);
					vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 = 6;
					UNK_0x5D96D8530B3D0904(&bLocal_211, 16);
				}
			}
			break;
		case 5:
			if (Local_73.f_5 == 0)
			{
				func_63();
			}
			break;
		case 6:
			vLocal_112[UNK_0x57270EE11514DC67() /*3*/] = 0;
			UNK_0x0674E58A79778E99(&bLocal_211, 3);
			UNK_0x0674E58A79778E99(&bLocal_211, 4);
			iLocal_210 = 0;
			func_206(12, 116);
			if (UNK_0xE4EDC4B0E92C078B(Global_1661975))
			{
				UNK_0x142CC44DB769B57E(&Global_1661975);
			}
			func_62(&Local_223);
			func_55();
			func_357(11, 0);
			vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 = 7;
			break;
		case 7:
			if (Local_73.f_2 == 0 && !UNK_0xEAE0D21A50E6C7F4(Local_73, 10))
			{
				vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 = 0;
			}
			break;
	}
}

void func_55()
{
	if (!func_61())
	{
		return;
	}
	if (!UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) == Global_1312585.f_9)
	{
		return;
	}
	func_56();
}

void func_56()
{
	func_58();
	func_57(0);
}

void func_57(bool bParam0)
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

void func_58()
{
	if (!func_60())
	{
	}
	if (func_61())
	{
		UNK_0x400C0D66EFD08603(&(Global_1312585.f_12));
		func_59();
		UNK_0x35F2C6537D10DAEB();
	}
}

void func_59()
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

bool func_60()
{
	if (!func_61())
	{
		return false;
	}
	UNK_0x18B60B994182620C(&(Global_1312585.f_12));
	func_59();
	return UNK_0xB165082A56EE6E7F();
}

bool func_61()
{
	if (Global_1312585 == 20)
	{
		return false;
	}
	return true;
}

void func_62(bool bParam0)
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

void func_63()
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	int iVar9;

	if (UNK_0xE5DBF9B6126856CA(Local_73.f_9[0]))
	{
		if (!func_40(Local_73.f_9[0]))
		{
			if (UNK_0xE4EDC4B0E92C078B(Global_1661975))
			{
				if (func_204() || func_203())
				{
					UNK_0x9D7CDDB4B55142AF(Global_1661975, 0);
				}
				else
				{
					UNK_0x9D7CDDB4B55142AF(Global_1661975, 4);
				}
			}
			else
			{
				Global_1661975 = UNK_0x5C3B41825F6AC5A0(UNK_0x1B50683925F00106(Local_73.f_9[0]));
				UNK_0x61755AC17D8F538E(Global_1661975, true);
				UNK_0x516E63E474722206(Global_1661975, 0f);
			}
			if (UNK_0xE4EDC4B0E92C078B(Local_223))
			{
				if (func_204() || func_203())
				{
					UNK_0x9D7CDDB4B55142AF(Local_223, 0);
				}
				else
				{
					UNK_0x9D7CDDB4B55142AF(Local_223, 4);
				}
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_211, 10))
				{
					UNK_0xDC5B2F9D0CCE3A10(Local_223, "FM_GDM_BLP");
					UNK_0x5D96D8530B3D0904(&bLocal_211, 10);
				}
			}
			if (UNK_0xE4EDC4B0E92C078B(Local_223.f_1))
			{
				if (func_204() || func_203())
				{
					UNK_0x9D7CDDB4B55142AF(Local_223.f_1, 0);
				}
				else
				{
					UNK_0x9D7CDDB4B55142AF(Local_223.f_1, 4);
				}
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_211, 12))
				{
					UNK_0xDC5B2F9D0CCE3A10(Local_223.f_1, "FM_GDM_BLP");
					UNK_0x5D96D8530B3D0904(&bLocal_211, 12);
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_211, 6))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Global_2359302, 7) && !func_186(UNK_0xD803B885F5E47A62(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
				{
					if (UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
					{
						if (!func_204())
						{
							func_180("FM_GDM_KIL", 0);
						}
						UNK_0x5D96D8530B3D0904(&bLocal_211, 6);
					}
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_2359302, 7))
			{
				func_55();
				UNK_0x0674E58A79778E99(&bLocal_211, 6);
			}
			else if (func_179())
			{
				func_55();
				UNK_0x0674E58A79778E99(&bLocal_211, 6);
			}
			else if (func_186(UNK_0xD803B885F5E47A62(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				func_55();
				UNK_0x0674E58A79778E99(&bLocal_211, 6);
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bLocal_211, 6))
		{
			func_55();
			UNK_0x0674E58A79778E99(&bLocal_211, 6);
		}
		if (!UNK_0xEAE0D21A50E6C7F4(vLocal_112[UNK_0x57270EE11514DC67() /*3*/], true))
		{
			bVar1 = UNK_0x39DDAA68EF6A6BF4(Local_73.f_9[0], &uVar0);
			if (bVar1 == UNK_0xD803B885F5E47A62())
			{
				UNK_0x5D96D8530B3D0904(&(vLocal_112[UNK_0x57270EE11514DC67() /*3*/]), true);
				bVar2 = func_176(func_178(UNK_0xD803B885F5E47A62(), 1), 1);
				if (bVar2 > 100)
				{
					bVar2 = 100;
				}
				iVar3 = bVar2 * 20;
				iVar3 = SYSTEM::ROUND((Global_262145.f_4229 * IntToFloat(iVar3)));
				func_133(2, "XPT_KAIE", -1859646258, 2131309714, iVar3, 1, -1, 0);
				if (Global_262145.f_2423 != 0f)
				{
					iVar4 = SYSTEM::ROUND(Global_262145.f_2423);
				}
				else
				{
					iVar4 = 2000;
				}
				if (Global_262145.f_2419 != 0f)
				{
					iVar5 = SYSTEM::ROUND(Global_262145.f_2419);
				}
				else
				{
					iVar5 = 8000;
				}
				if (iVar4 >= 100)
				{
					bVar6 = (iVar4 / 100);
				}
				if (iVar5 >= 100)
				{
					iVar7 = (iVar5 / 100);
				}
				bVar8 = UNK_0x09AC81E49EA267F7(bVar6, iVar7 + 1) * 100;
				bVar8 = func_132(bVar8, 1);
				if (bVar8 > iVar5)
				{
					bVar8 = iVar5;
				}
				func_79(&bVar8, 1);
				if (func_78())
				{
					if (bVar8 > 0)
					{
						func_66(-352356931, bVar8, &iVar9, 0, 0, 0);
						Global_4263954[iVar9 /*85*/] = -1146479277;
					}
				}
				else
				{
					UNK_0xDF9A19F19D39D17D(bVar8, -1146479277);
				}
				func_65(5, bVar8);
			}
			else if (bVar1 != func_64())
			{
				if (UNK_0x40B8C182D63932FC(bVar1))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(vLocal_112[UNK_0x57270EE11514DC67() /*3*/], 7))
					{
						if (!UNK_0xFB75B0F82CA525F6(bVar1))
						{
							UNK_0x5D96D8530B3D0904(&(vLocal_112[UNK_0x57270EE11514DC67() /*3*/]), 7);
						}
					}
				}
			}
		}
	}
}

bool func_64()
{
	return -1;
}

void func_65(int iParam0, bool bParam1)
{
	if (bParam1 > 0)
	{
		if (Global_262145.f_23489 == 0 || Global_262145.f_23489 == 1)
		{
			if (!UNK_0x0EFF6B4415DAF4A1() || Global_262145.f_23489 == 1)
			{
				Global_2537071.f_283 = iParam0;
				if (bParam1 > Global_262145.f_6584)
				{
					bParam1 = Global_262145.f_6584;
				}
				Global_2537071.f_284 = bParam1;
				Global_2537071.f_285 = 0;
			}
		}
	}
}

void func_66(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_78())
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
				func_67(iParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
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
			func_67(iParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
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
				func_67(iParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
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
			func_67(iParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
			break;
	}
}

int func_67(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	bVar0 = false;
	if (!func_78())
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (!bVar0)
	{
		if (!UNK_0x79B28160739BC9E6(func_19()) || UNK_0xDD2EE1F5DA6A6AB0())
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
			*iParam0 = func_74(iVar4, iParam1, iParam4, iParam2, iParam3, bParam5, 0, iParam6, iParam7, 1, 1);
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
			func_73(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_68(-1, iParam4, iParam6, bParam5, -1);
		}
	}
	return 0;
}

void func_68(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			UNK_0x5D96D8530B3D0904(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_122.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_69(iParam0);
	}
}

void func_69(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_78())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_72(iParam0))
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
		func_70(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_70(var uParam0)
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
	func_71(&(uParam0->f_14));
	func_71(&(uParam0->f_14.f_13));
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

void func_71(var uParam0)
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

bool func_72(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return false;
}

void func_73(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_74(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_78())
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
				func_75(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_75(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	bVar36 = func_77(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!bVar36 == 0)
	{
		func_76();
		UNK_0xFB061A86A7AC749F(1, &vVar0, 36, bVar36);
	}
}

void func_76()
{
	UNK_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

bool func_77(bool bParam0)
{
	var uVar0;

	if (bParam0 != -1)
	{
		UNK_0x5D96D8530B3D0904(&uVar0, bParam0);
	}
	return uVar0;
}

bool func_78()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

void func_79(bool bParam0, int iParam1)
{
	bool bVar0;

	if (*bParam0 > 0)
	{
		if (!func_131())
		{
			if (func_130(0))
			{
				if (!func_126(0))
				{
					if (UNK_0x40B8C182D63932FC(func_125()))
					{
						if (func_124() == 100)
						{
							bVar0 = *bParam0;
							*bParam0 = 0;
						}
						else
						{
							bVar0 = ((*bParam0 / 100) * func_124());
							*bParam0 = (*bParam0 - bVar0);
						}
						func_122(&bVar0, 0);
						if (iParam1 == 1)
						{
							func_84("GB_BCUT_TICK1", func_125(), bVar0, 0, 0, 1);
						}
						func_83(20);
						func_80(func_125(), bVar0, 1);
					}
				}
			}
		}
	}
}

void func_80(bool bParam0, bool bParam1, int iParam2)
{
	struct<8> Var0;

	if (func_388(bParam0, 0, 1))
	{
		Var0 = -1294585740;
		Var0.f_1 = UNK_0xD803B885F5E47A62();
		Var0.f_2 = bParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_82(bParam0);
		func_81(&(Var0.f_6), &(Var0.f_7));
		UNK_0xFB061A86A7AC749F(1, &Var0, 8, func_77(bParam0));
	}
}

void func_81(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

var func_82(bool bParam0)
{
	return Global_1628237[bParam0 /*615*/].f_533;
}

void func_83(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_7[iVar0]), bVar1);
}

int func_84(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	char cVar1[64];

	iVar0 = -1;
	if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bParam1) || bParam5)
	{
		if (!bParam4)
		{
			StringCopy(&cVar1, UNK_0x6E524813889AECF8(bParam1), 64);
		}
		else
		{
			StringCopy(&cVar1, UNK_0x6E524813889AECF8(bParam1), 64);
		}
		if (UNK_0xEA6BC48857E0AC4C(&cVar1))
		{
		}
		UNK_0x1E64CE678ED5F61E(bParam0);
		UNK_0x3A820E495A7BA3E5(func_91(bParam1, -2, 1, 0, 0));
		UNK_0xD06AC7C87A34A6AD(func_89(&cVar1));
		if (!bParam3 == 0)
		{
			UNK_0x3A820E495A7BA3E5(bParam3);
		}
		UNK_0x6D99DF8263D35CE5(bParam2);
		iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
		func_85(27, bParam0, 1, &cVar1, bParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_85(int iParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;

	if ((!func_88() || !UNK_0xA14BB9332558B949()) || !func_17(UNK_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_86(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0 /*53*/] = iParam0;
		Global_1670846.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0 /*53*/].f_2[0] = bParam4;
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

int func_86(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0 /*53*/].f_1)
		{
			func_87(iVar0);
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

void func_87(int iParam0)
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0 /*53*/] = { Global_1670846.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_88()
{
	return UNK_0xC146D5FBD23C6954(-1762644250);
}

var func_89(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_90(&cVar0);
}

char[] func_90(char[4] cParam0)
{
	return cParam0;
}

int func_91(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (func_358(bParam0) && !bParam4)
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
	if (((func_358(UNK_0xD803B885F5E47A62()) || (func_121() && func_120())) && !UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 31)) && !bParam4)
	{
		bVar1 = func_119();
		if (UNK_0xC844350D5D58C99A(bVar1))
		{
			if (UNK_0x34BFC6F0CB887BC2(bVar1))
			{
				if (UNK_0x83FACCC48B68F9D1(bVar1) != -1)
				{
					if (func_388(UNK_0x83FACCC48B68F9D1(bVar1), 0, 1))
					{
						if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_117(iParam1, bParam0, 0);
							}
							else
							{
								return func_104(bParam0, UNK_0x83FACCC48B68F9D1(bVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_104(bParam0, UNK_0x83FACCC48B68F9D1(bVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_117(iParam1, bParam0, 0);
				}
				else
				{
					return func_92(0, -1, 0);
				}
			}
			else
			{
				return func_92(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_117(iParam1, bParam0, 0);
		}
		else
		{
			return func_104(bParam0, UNK_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_104(bParam0, UNK_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_92(bool bParam0, int iParam1, bool bParam2)
{
	return func_93(UNK_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_93(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!UNK_0x40B8C182D63932FC(bParam0))
	{
		return 3;
	}
	iVar0 = UNK_0x08067D4957B73C02(bParam0);
	if ((func_103() || (func_102() && func_100())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_99(iParam2, iVar0);
		}
		else
		{
			return func_99(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_98(iVar0, iParam2, 0) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_97(1);
				}
				else
				{
					return func_97(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 20))
			{
				return func_94(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_94(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_97(1);
	}
	return func_97(0);
}

int func_94(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_96(iParam0, iParam1, iParam3);
	if (func_95(Global_4456448.f_194990, 1))
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

bool func_95(int iParam0, bool bParam1)
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

int func_96(int iParam0, int iParam1, int iParam2)
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
			if (!func_98(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_97(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

bool func_98(int iParam0, int iParam1, int iParam2)
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

int func_99(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_96(iParam1, iParam0, 4);
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

bool func_100()
{
	if (func_101())
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 4);
}

bool func_101()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_102()
{
	if (UNK_0xA14BB9332558B949())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, false);
	}
	return ((UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, false) || Global_1653478) && UNK_0x8A22C4C08282BF26(joaat("FM_DEATHMATCH_CREATOR")) > 0);
}

bool func_103()
{
	if (func_101() && UNK_0xA14BB9332558B949())
	{
		return true;
	}
	return false;
}

int func_104(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_113())
			{
				iVar3 = func_109(bParam0);
				if (!iVar3 == -1)
				{
					return func_107(iVar3);
				}
			}
			if ((func_106(bParam1, bParam0, iVar0, 0) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)) || ((func_98(UNK_0x08067D4957B73C02(bParam1), UNK_0x08067D4957B73C02(bParam0), 0) && UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 23)) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)))
			{
				return func_97(1);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26))
			{
				return func_105(1);
			}
			else
			{
				return func_93(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[bParam0 /*876*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_97(1);
			}
			else
			{
				return func_93(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_109(bParam0);
	if (!iVar4 == -1)
	{
		return func_107(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_105(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_106(bool bParam0, bool bParam1, int iParam2, int iParam3)
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

int func_107(int iParam0)
{
	int iVar0;

	if (iParam0 > -1)
	{
		iVar0 = func_108(iParam0);
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

int func_108(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_109(bool bParam0)
{
	if (!bParam0 == func_64())
	{
		if (func_111(bParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_110(bParam0)];
		}
	}
	return -1;
}

bool func_110(bool bParam0)
{
	if (bParam0 != func_64())
	{
		return Global_1628237[bParam0 /*615*/].f_11;
	}
	return func_64();
}

bool func_111(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_112(bParam0))
		{
			return false;
		}
	}
	return Global_1628237[bParam0 /*615*/].f_11 != func_64();
}

bool func_112(bool bParam0)
{
	if (bParam0 != func_64())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_64())
		{
			return Global_1628237[bParam0 /*615*/].f_11 == bParam0;
		}
	}
	return false;
}

bool func_113()
{
	if (((func_116() || func_115()) || func_23()) || func_114())
	{
		return true;
	}
	return false;
}

var func_114()
{
	return Global_2450632.f_19;
}

var func_115()
{
	return Global_2450632.f_16;
}

var func_116()
{
	return Global_2450632.f_15;
}

int func_117(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = Global_969031.f_14[iParam0];
	if (func_113())
	{
		iVar2 = func_109(bParam1);
		if (!iVar2 == -1)
		{
			return func_107(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iParam0 /*15700*/].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_64())
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
			iVar0 = func_93(bParam1, !bParam2, iParam0, 0);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_21, 13))
		{
			iVar0 = func_118(iParam0);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26) && !func_98(iParam0, UNK_0x08067D4957B73C02(bParam1), 0))
		{
			iVar0 = func_105(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_118(int iParam0)
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

bool func_119()
{
	return Global_2359302.f_2;
}

bool func_120()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 4);
}

bool func_121()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

void func_122(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		iVar1 = func_123(1);
	}
	else
	{
		iVar1 = func_123(0);
	}
	iVar0 = ((*bParam0 / 100) * iVar1);
	*bParam0 = (*bParam0 - iVar0);
}

int func_123(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_124()
{
	return Global_262145.f_12389;
}

bool func_125()
{
	return Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11;
}

int func_126(bool bParam0)
{
	return func_127(UNK_0xD803B885F5E47A62(), bParam0);
}

int func_127(int iParam0, bool bParam1)
{
	return func_128(iParam0, bParam1, 1);
}

int func_128(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (iParam0 == func_64())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_129(iParam0, iParam2))
		{
			return 0;
		}
	}
	bVar0 = Global_1628237[iParam0 /*615*/].f_11;
	if (bVar0 != func_64() && Global_1628237[bVar0 /*615*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_129(int iParam0, int iParam1)
{
	if (iParam0 != func_64())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_64())
		{
			if (Global_1628237[iParam0 /*615*/].f_11 == iParam0 && Global_1628237[iParam0 /*615*/].f_11.f_450 == iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_130(bool bParam0)
{
	return func_111(UNK_0xD803B885F5E47A62(), bParam0);
}

bool func_131()
{
	return func_112(UNK_0xD803B885F5E47A62());
}

bool func_132(bool bParam0, int iParam1)
{
	float fVar0;

	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			if (bParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(bParam0) * Global_262145);
				bParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		default:
			break;
	}
	return bParam0;
}

bool func_133(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_134(iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

bool func_134(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;

	bVar0 = func_135(iParam0, 0, bParam1, iParam4, iParam5, 0, iParam6, 1, bParam2, iParam3, bParam7);
	return bVar0;
}

bool func_135(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	float fVar3;

	if (func_175(UNK_0xD803B885F5E47A62()) || func_174(UNK_0xD803B885F5E47A62()))
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
	else if (func_172() || func_168(UNK_0xD803B885F5E47A62()))
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
	if (func_167(bParam2))
	{
	}
	if (func_166())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		bVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		bVar1 = func_164(bVar1);
		fVar3 = (SYSTEM::TO_FLOAT(bVar1) * Global_262145.f_1);
		bVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			bVar1 = func_163(&bVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_161(0, &bVar1);
					break;
				case 3:
					func_161(1, &bVar1);
					break;
				case 1:
					func_158(&bVar1);
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
			func_155(1164, bVar1, -1);
			if (iParam1 == 0)
			{
				func_146((func_154(UNK_0xD803B885F5E47A62()) + bVar1), iParam9, 0);
				if (bParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				UNK_0x189A6F4108CDFDD6(bVar1, bParam8, iParam9);
				if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_2 != -1)
				{
					func_155(1165, bVar1, -1);
				}
				func_140(bVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_136((func_138(UNK_0xD803B885F5E47A62()) + bVar1));
			}
			else
			{
				func_136((func_138(UNK_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return bVar1;
}

void func_136(bool bParam0)
{
	if (func_166())
	{
		Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_5 = bParam0;
		func_137(joaat("MPPLY_GLOBALXP"), bParam0);
	}
}

void func_137(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, 1);
	}
}

int func_138(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (func_388(bParam0, 0, 1))
		{
			if (bParam0 == UNK_0xD803B885F5E47A62())
			{
				return func_139(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_5;
			}
		}
		else
		{
			return func_139(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_139(int iParam0)
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

void func_140(bool bParam0)
{
	struct<13> Var0;
	int iVar13;

	Var0 = { func_145(UNK_0xD803B885F5E47A62()) };
	if (UNK_0x080E9D045AEE5605())
	{
		if (UNK_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar13 = func_143(func_144(&Var0));
			if (iVar13 == 0)
			{
				func_142(&Global_1387915, bParam0);
				func_141(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_142(&Global_1387916, bParam0);
				func_141(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_142(&Global_1387917, bParam0);
				func_141(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_142(&Global_1387918, bParam0);
				func_141(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_142(&Global_1387919, bParam0);
				func_141(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1387919);
			}
		}
	}
}

void func_141(int iParam0, bool bParam1)
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

void func_142(var uParam0, bool bParam1)
{
	*uParam0 = (*uParam0 + bParam1);
}

int func_143(int iParam0)
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

int func_144(var uParam0)
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

struct<13> func_145(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

void func_146(bool bParam0, int iParam1, int iParam2)
{
	if (func_166())
	{
		if (bParam0 >= 1787576850)
		{
			bParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (bParam0 < Global_1388060[func_153(-1)])
				{
					UNK_0x189A6F4108CDFDD6(bParam0, -523908350, iParam1);
					return;
				}
				else if (bParam0 == Global_1388060[func_153(-1)])
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
		if (func_152(UNK_0xD803B885F5E47A62()))
		{
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_1 = bParam0;
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_6 = func_176(bParam0, 1);
		}
		func_151(639, bParam0, -1, 1);
		func_150(640, func_176(bParam0, 1), -1, 1, 0);
		Global_1388060[func_153(-1)] = bParam0;
		func_147(-1109644434, 7, 0);
	}
}

void func_147(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_149(iParam1, bParam2))
	{
		iVar0 = func_148();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_148()
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

bool func_149(int iParam0, bool bParam1)
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

void func_150(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_153(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

void func_151(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = Global_2548434[iParam0 /*3*/][func_153(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_153(iParam2)] = bParam1;
			break;
		case 788:
			Global_1387994[func_153(iParam2)] = bParam1;
			break;
		case 789:
			Global_1388000[func_153(iParam2)] = bParam1;
			break;
		case 790:
			Global_1388006[func_153(iParam2)] = bParam1;
			break;
		case 8726:
			Global_1388012[func_153(iParam2)] = bParam1;
			break;
		case 777:
			Global_1387958[func_153(iParam2)] = bParam1;
			break;
		case 778:
			Global_1387964[func_153(iParam2)] = bParam1;
			break;
		case 779:
			Global_1387970[func_153(iParam2)] = bParam1;
			break;
		case 780:
			Global_1387976[func_153(iParam2)] = bParam1;
			break;
		case 8728:
			Global_1387982[func_153(iParam2)] = bParam1;
			break;
		case 767:
			Global_1387928[func_153(iParam2)] = bParam1;
			break;
		case 768:
			Global_1387934[func_153(iParam2)] = bParam1;
			break;
		case 769:
			Global_1387940[func_153(iParam2)] = bParam1;
			break;
		case 770:
			Global_1387946[func_153(iParam2)] = bParam1;
			break;
		case 8730:
			Global_1387952[func_153(iParam2)] = bParam1;
			break;
		case 757:
			Global_1388018[func_153(iParam2)] = bParam1;
			break;
		case 758:
			Global_1388024[func_153(iParam2)] = bParam1;
			break;
		case 759:
			Global_1388030[func_153(iParam2)] = bParam1;
			break;
		case 760:
			Global_1388036[func_153(iParam2)] = bParam1;
			break;
		case 8732:
			Global_1388042[func_153(iParam2)] = bParam1;
			break;
		case 1303:
			Global_1388048[func_153(iParam2)] = bParam1;
			break;
		case 7233:
			Global_1388054[func_153(iParam2)] = bParam1;
			break;
		case 639:
			Global_1388060[func_153(iParam2)] = bParam1;
			break;
		case 1278:
			Global_1388066[func_153(iParam2)] = bParam1;
			break;
		case 1876:
			Global_2586065[0 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 2267:
			Global_2586065[1 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 2929:
			Global_2586065[2 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3058:
			Global_2586065[3 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 10016:
			Global_2586214[func_153(iParam2)] = bParam1;
			break;
		case 764:
			Global_1388072[func_153(iParam2)] = bParam1;
			break;
		case 765:
			Global_1388078[func_153(iParam2)] = bParam1;
			break;
		case 766:
			Global_1388084[func_153(iParam2)] = bParam1;
			break;
		case 8731:
			Global_1388090[func_153(iParam2)] = bParam1;
			break;
		case 1236:
			Global_1388096[func_153(iParam2)] = bParam1;
			break;
		case 3053:
			Global_2586138[0 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3054:
			Global_2586138[1 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3055:
			Global_2586138[2 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3056:
			Global_2586138[3 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3057:
			Global_2586138[4 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3636:
			Global_2586217[0 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3637:
			Global_2586217[1 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3638:
			Global_2586217[2 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3639:
			Global_2586217[3 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3640:
			Global_2586217[4 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3641:
			Global_2586233[0 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3642:
			Global_2586233[1 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3643:
			Global_2586233[2 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3644:
			Global_2586233[3 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3645:
			Global_2586233[4 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3221:
			Global_2586138[5 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3227:
			Global_2586065[4 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3663:
			Global_2586249[func_153(iParam2)] = bParam1;
			break;
		case 3664:
			Global_2586258[func_153(iParam2)] = bParam1;
			break;
		case 3665:
			Global_2586252[func_153(iParam2)] = bParam1;
			break;
		case 3666:
			Global_2586261[func_153(iParam2)] = bParam1;
			break;
		case 3667:
			Global_2586255[func_153(iParam2)] = bParam1;
			break;
		case 3668:
			Global_2586264[func_153(iParam2)] = bParam1;
			break;
		case 3689:
			Global_2586267[func_153(iParam2)] = bParam1;
			break;
		case 3229:
			Global_2586138[6 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3230:
			Global_2586065[5 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3234:
			Global_2586138[7 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 3232:
			Global_2586065[6 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 4019:
			Global_2586138[8 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 4020:
			Global_2586065[7 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 4022:
			Global_2586138[9 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 4023:
			Global_2586065[8 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 4025:
			Global_2586138[10 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 4026:
			Global_2586065[9 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 4028:
			Global_2586138[11 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 4029:
			Global_2586065[10 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 6109:
			Global_2586138[12 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 6110:
			Global_2586065[11 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 6167:
			Global_2586138[13 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 6168:
			Global_2586065[12 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 6545:
			Global_2586138[14 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 6546:
			Global_2586065[13 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 6558:
			Global_2586138[15 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 6559:
			Global_2586065[14 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 6561:
			Global_2586138[16 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 6562:
			Global_2586065[15 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 6564:
			Global_2586138[17 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 6565:
			Global_2586065[16 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 7283:
			Global_2586065[17 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 7285:
			Global_2586065[18 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 7287:
			Global_2586065[19 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 8010:
			Global_2586065[20 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 8282:
			Global_2586270[func_153(iParam2)] = bParam1;
			break;
		case 8283:
			Global_2586273[func_153(iParam2)] = bParam1;
			break;
		case 8284:
			Global_2586276[func_153(iParam2)] = bParam1;
			break;
		case 8285:
			Global_2586279[func_153(iParam2)] = bParam1;
			break;
		case 8286:
			Global_2586282[func_153(iParam2)] = bParam1;
			break;
		case 8287:
			Global_2586285[func_153(iParam2)] = bParam1;
			break;
		case 8288:
			Global_2586288[func_153(iParam2)] = bParam1;
			break;
		case 8289:
			Global_2586291[func_153(iParam2)] = bParam1;
			break;
		case 8290:
			Global_2586294[func_153(iParam2)] = bParam1;
			break;
		case 8291:
			Global_2586297[func_153(iParam2)] = bParam1;
			break;
		case 8292:
			Global_2586300[func_153(iParam2)] = bParam1;
			break;
		case 8293:
			Global_2586303[func_153(iParam2)] = bParam1;
			break;
		case 8294:
			Global_2586306[func_153(iParam2)] = bParam1;
			break;
		case 8900:
			Global_2586309[func_153(iParam2)] = bParam1;
			break;
		case 8534:
			Global_2586065[21 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 8977:
			Global_2586138[23 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 8975:
			Global_2586065[22 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 8980:
			Global_2586138[24 /*3*/][func_153(iParam2)] = bParam1;
			break;
		case 8978:
			Global_2586065[23 /*3*/][func_153(iParam2)] = bParam1;
			break;
		default:
			break;
	}
}

bool func_152(bool bParam0)
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

int func_153(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_154(bool bParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (bParam0 > -1)
		{
			if (bParam0 == UNK_0xD803B885F5E47A62())
			{
				return Global_1388060[func_153(-1)];
			}
			else if (func_152(bParam0))
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_153(-1)];
	}
	return 0;
}

void func_155(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	bVar0 = func_157(iParam0, func_153(iParam2), 0);
	bVar0 = (bVar0 + bParam1);
	if (!func_156(iParam0))
	{
		func_150(iParam0, bVar0, iParam2, 1, 0);
	}
	else
	{
		func_151(iParam0, bVar0, iParam2, 1);
	}
}

bool func_156(int iParam0)
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

int func_157(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_153(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_158(bool bParam0)
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
				if (UNK_0x08067D4957B73C02(bVar5) == iVar1 || func_98(UNK_0x08067D4957B73C02(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != UNK_0xD803B885F5E47A62())
					{
						if (func_160(UNK_0xD803B885F5E47A62(), bVar5))
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
		iVar6 = SYSTEM::ROUND((func_159(*bParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_159(*bParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*bParam0 = (*bParam0 + iVar6);
	*bParam0 = (*bParam0 + iVar7);
}

float func_159(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

bool func_160(bool bParam0, bool bParam1)
{
	if (UNK_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_145(bParam0) };
		Global_2513231 = { func_145(bParam1) };
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

void func_161(bool bParam0, bool bParam1)
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
				if (func_388(bVar4, 0, 1))
				{
					if (bVar4 != UNK_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_160(UNK_0xD803B885F5E47A62(), bVar4))
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
			if (func_388(bVar4, 1, 1))
			{
				if (bVar4 != UNK_0xD803B885F5E47A62())
				{
					if (func_162(UNK_0xD803B885F5E47A62(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_160(UNK_0xD803B885F5E47A62(), bVar4))
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
		iVar5 = SYSTEM::ROUND((func_159(*bParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_159(*bParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*bParam1 = (*bParam1 + iVar5);
	*bParam1 = (*bParam1 + iVar6);
}

float func_162(bool bParam0, bool bParam1)
{
	return SYSTEM::VDIST(func_21(bParam0), func_21(bParam1));
	return 0f;
}

bool func_163(bool bParam0)
{
	int iVar0;

	if (UNK_0xA0501A3E65437842() != 3)
	{
		return *bParam0;
	}
	iVar0 = SYSTEM::ROUND((func_159(*bParam0, 100) * 25f));
	*bParam0 = (*bParam0 + iVar0);
	return *bParam0;
}

bool func_164(bool bParam0)
{
	if (bParam0 < 0)
	{
		if (UNK_0x51D1D19912234EA0(bParam0) > func_154(UNK_0xD803B885F5E47A62()))
		{
			bParam0 = -func_154(UNK_0xD803B885F5E47A62());
		}
	}
	if (func_165(8000, 0, 0) > 0)
	{
		if (func_165(8000, 0, 0) < (bParam0 + func_154(UNK_0xD803B885F5E47A62())))
		{
			bParam0 = (func_165(8000, 0, 0) - func_154(UNK_0xD803B885F5E47A62()));
		}
	}
	return bParam0;
}

int func_165(int iParam0, bool bParam1, int iParam2)
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

bool func_166()
{
	return true;
}

bool func_167(bool bParam0)
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

int func_168(int iParam0)
{
	return func_169(func_170(iParam0));
}

int func_169(int iParam0)
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

int func_170(int iParam0)
{
	if (func_171(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_171(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

int func_172()
{
	if (UNK_0xA14BB9332558B949())
	{
		return func_23();
	}
	return func_173(Global_4456448.f_194990);
}

int func_173(int iParam0)
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

bool func_174(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_175(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

int func_176(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_177(bParam0, 0);
}

int func_177(bool bParam0, int iParam1)
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

int func_178(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_154(bParam0);
}

bool func_179()
{
	return Global_73825;
}

void func_180(char* sParam0, bool bParam1)
{
	if (UNK_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (UNK_0x7724E025FD444F45(sParam0) > 23)
	{
		return;
	}
	if (func_184(sParam0))
	{
		return;
	}
	func_56();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), UNK_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = UNK_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_183();
	func_182(bParam1);
	func_181();
}

void func_181()
{
	UNK_0x5D96D8530B3D0904(&(Global_1312585.f_59), true);
}

void func_182(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x5D96D8530B3D0904(&(Global_1312585.f_59), false);
		return;
	}
	UNK_0x0674E58A79778E99(&(Global_1312585.f_59), false);
}

void func_183()
{
	Global_1312585.f_10 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), 86400000);
	Global_1312585.f_11 = UNK_0x2B6E0A53779D29EA();
}

bool func_184(bool bParam0)
{
	if (!func_61())
	{
		return false;
	}
	if (Global_1312585 == 11)
	{
		return func_185(bParam0);
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_12));
}

bool func_185(bool bParam0)
{
	if (!func_61())
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_16));
}

bool func_186(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590535[bParam0 /*876*/].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, false))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (!bParam2)
	{
		if (func_202(bParam0))
		{
			return true;
		}
	}
	if (!bParam3)
	{
		if (func_201(bParam0))
		{
			return true;
		}
	}
	if (!bParam4)
	{
		if (func_200(bParam0))
		{
			return true;
		}
	}
	if (!bParam5)
	{
		if (func_199(bParam0))
		{
			return true;
		}
	}
	if (!bParam6)
	{
		if (func_198(bParam0))
		{
			return true;
		}
	}
	if (!bParam7)
	{
		if (func_197(bParam0))
		{
			return true;
		}
	}
	if (!bParam8)
	{
		if (func_196(bParam0))
		{
			return true;
		}
	}
	if (!bParam9)
	{
		if (func_195(bParam0))
		{
			return true;
		}
	}
	if (!bParam10)
	{
		if (func_194(bParam0))
		{
			return true;
		}
	}
	if (!bParam11)
	{
		if (func_193(bParam0, 0))
		{
			return true;
		}
	}
	if (!bParam12)
	{
		if (func_192(bParam0))
		{
			return true;
		}
	}
	if (!bParam13)
	{
		if (func_191(bParam0))
		{
			return true;
		}
	}
	if (!bParam14)
	{
		if (func_190(bParam0))
		{
			return true;
		}
	}
	if (!bParam15)
	{
		if (func_189(bParam0))
		{
			return true;
		}
	}
	if (!bParam16)
	{
		if (func_187(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_187(bool bParam0)
{
	if (bParam0 != func_64())
	{
		if (func_388(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[bParam0 /*421*/].f_310.f_5) == 17;
			}
		}
	}
	return false;
}

int func_188(int iParam0)
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

bool func_189(bool bParam0)
{
	if (bParam0 != func_64())
	{
		if (func_388(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[bParam0 /*421*/].f_310.f_5) == 16;
			}
		}
	}
	return false;
}

bool func_190(bool bParam0)
{
	if (bParam0 != func_64())
	{
		if (func_388(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[bParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return false;
}

bool func_191(bool bParam0)
{
	if (bParam0 != func_64())
	{
		if (func_388(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[bParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return false;
}

bool func_192(bool bParam0)
{
	if (bParam0 != func_64())
	{
		if (func_388(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[bParam0 /*421*/].f_310.f_5) == 13;
			}
		}
	}
	return false;
}

bool func_193(bool bParam0, bool bParam1)
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
	if (bParam0 != func_64())
	{
		if (func_388(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_64())
			{
				return func_188(Global_2425662[bParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return false;
}

bool func_194(bool bParam0)
{
	if (bParam0 != func_64())
	{
		if (func_388(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_195(bool bParam0)
{
	if (bParam0 != func_64())
	{
		if (func_388(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_196(bool bParam0)
{
	if (bParam0 != func_64())
	{
		if (func_388(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_64())
			{
				return func_188(Global_2425662[bParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return false;
}

bool func_197(bool bParam0)
{
	if (bParam0 != func_64())
	{
		if (func_388(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[bParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return false;
}

bool func_198(bool bParam0)
{
	if (bParam0 != func_64())
	{
		if (func_388(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[bParam0 /*421*/].f_310.f_5) == 7;
			}
		}
	}
	return false;
}

bool func_199(bool bParam0)
{
	if (bParam0 != func_64())
	{
		if (func_388(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[bParam0 /*421*/].f_310.f_5) == 4;
			}
		}
	}
	return false;
}

bool func_200(bool bParam0)
{
	if (bParam0 != func_64())
	{
		if (func_388(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[bParam0 /*421*/].f_310.f_5) == 1;
			}
		}
	}
	return false;
}

bool func_201(bool bParam0)
{
	if (bParam0 != func_64())
	{
		if (func_388(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[bParam0 /*421*/].f_310.f_5) == 2;
			}
		}
	}
	return false;
}

bool func_202(bool bParam0)
{
	if (bParam0 != func_64())
	{
		if (func_388(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[bParam0 /*421*/].f_310.f_5) == 0;
			}
		}
	}
	return false;
}

bool func_203()
{
	return Global_2416079.f_1812;
}

bool func_204()
{
	if (func_205(18))
	{
		return true;
	}
	if (func_205(0))
	{
		return true;
	}
	return false;
}

bool func_205(bool bParam0)
{
	bool bVar0;

	bVar0 = func_157(2480, -1, 0);
	return UNK_0xEAE0D21A50E6C7F4(bVar0, bParam0);
}

void func_206(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_218(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!iParam1 == Global_2394180[iVar0 /*46*/].f_8)
	{
		return;
	}
	if (!Global_2394180[iVar0 /*46*/].f_4 && Global_2394180[iVar0 /*46*/])
	{
		Global_2394180[iVar0 /*46*/].f_4 = 1;
		func_210();
	}
	func_207(iVar0);
}

void func_207(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 >= Global_1387741)
	{
		return;
	}
	if (Global_2394180[iParam0 /*46*/].f_26 != -1)
	{
		UNK_0xD59AE843FA2C6B40(Global_2394180[iParam0 /*46*/].f_26);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_1387741)
	{
		Global_2394180[iVar0 /*46*/] = { Global_2394180[iVar1 /*46*/] };
		Global_2394180[iVar0 /*46*/] = { Global_2394180[iVar1 /*46*/] };
		iVar0++;
		iVar1++;
	}
	func_209(iVar0);
	Global_1387741 = (Global_1387741 - 1);
	if (Global_1387712)
	{
		if (Global_1387710 > 0)
		{
			func_208();
		}
	}
}

void func_208()
{
	Global_1387712 = 0;
}

void func_209(int iParam0)
{
	Global_2394180[iParam0 /*46*/] = 0;
	Global_2394180[iParam0 /*46*/].f_2 = 0;
	Global_2394180[iParam0 /*46*/].f_3 = 0;
	Global_2394180[iParam0 /*46*/].f_4 = 0;
	Global_2394180[iParam0 /*46*/].f_5 = func_64();
	Global_2394180[iParam0 /*46*/].f_6 = 145;
	Global_2394180[iParam0 /*46*/].f_7 = 1;
	Global_2394180[iParam0 /*46*/].f_8 = -1;
	Global_2394180[iParam0 /*46*/].f_9 = -1;
	StringCopy(&(Global_2394180[iParam0 /*46*/].f_10), "", 64);
	Global_2394180[iParam0 /*46*/].f_26 = -1;
	StringCopy(&(Global_2394180[iParam0 /*46*/].f_27), "", 32);
	Global_2394180[iParam0 /*46*/].f_35 = -1;
	Global_2394180[iParam0 /*46*/].f_36 = -1;
	Global_2394180[iParam0 /*46*/].f_37 = 0;
	Global_2394180[iParam0 /*46*/].f_39 = 0;
	Global_2394180[iParam0 /*46*/].f_40 = -1;
	Global_2394180[iParam0 /*46*/].f_41 = 0;
	Global_2394180[iParam0 /*46*/].f_42 = 0;
	Global_2394180[iParam0 /*46*/].f_43 = 0;
	Global_2394180[iParam0 /*46*/].f_45 = 0;
	if (UNK_0x8CD06866876216F2())
	{
		Global_2394180[iParam0 /*46*/].f_38 = UNK_0x2B6E0A53779D29EA();
	}
}

void func_210()
{
	Global_21868 = (Global_21868 - 1);
	if (Global_21868 < 0)
	{
		func_217("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_211();
}

void func_211()
{
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_216(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_212(1);
			func_216(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
}

void func_212(int iParam0)
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
		if (func_215(14))
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
								func_214(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(bVar2);
								UNK_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_213(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_213(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_213(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_213(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_213(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_214(&(Global_7363[iVar1 /*15*/]));
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
								func_214(&(Global_7363[iVar1 /*15*/]));
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
								func_214(&(Global_7363[iVar1 /*15*/]));
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
								func_214(&(Global_7363[iVar1 /*15*/]));
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
								func_214(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(42);
								UNK_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_213(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_213(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_213(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
		func_214(bParam7);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		func_214(bParam8);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam9))
	{
		func_214(bParam9);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam10))
	{
		func_214(bParam10);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam11))
	{
		func_214(bParam11);
	}
	UNK_0x7E60D21B163E9D56();
}

void func_214(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

bool func_215(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_216(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_217(bool bParam0)
{
	if (Global_21868 != 0)
	{
		if (!UNK_0xEA6BC48857E0AC4C(bParam0))
		{
		}
		Global_21868 = 0;
	}
}

int func_218(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1387741)
	{
		if (!Global_2394180[iVar0 /*46*/].f_7)
		{
			if (Global_2394180[iVar0 /*46*/].f_6 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_219()
{
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_211, 17))
	{
		func_221(12, 116, "", 1, 0, 1, 0);
		UNK_0x5D96D8530B3D0904(&bLocal_211, 17);
	}
	else if (!UNK_0xEAE0D21A50E6C7F4(bLocal_211, 18))
	{
		if (func_220(12, 116))
		{
			UNK_0x5D96D8530B3D0904(&bLocal_211, 18);
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_220(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_218(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!iParam1 == Global_2394180[iVar0 /*46*/].f_8)
	{
		return false;
	}
	if (!Global_2394180[iVar0 /*46*/].f_2)
	{
		return false;
	}
	func_207(iVar0);
	Global_2395345 = UNK_0x1C0640BA9A7327B3() + 1500;
	return true;
}

void func_221(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	char cVar3[32];

	iVar0 = func_218(iParam0);
	if (bParam5)
	{
		if (iVar0 != -1)
		{
			func_207(iVar0);
		}
	}
	bVar1 = iParam0;
	bVar2 = false;
	StringCopy(&cVar3, "", 32);
	func_222(iParam1, bVar1, bVar2, sParam2, &cVar3, iParam3, -1, -1, -1, iParam4, iParam6);
}

void func_222(int iParam0, bool bParam1, bool bParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<46> Var5;
	bool bVar51;
	struct<13> Var52;
	int iVar65;

	bVar0 = func_64();
	bVar1 = 145;
	if (bParam2)
	{
		bVar0 = UNK_0x117658E336116132(bParam1);
	}
	else
	{
		bVar1 = bParam1;
	}
	if (bParam2)
	{
		if (func_227())
		{
			return;
		}
	}
	iVar2 = Global_1387741;
	if (iVar2 >= 12)
	{
		iVar2 = (iVar2 - 1);
	}
	iVar3 = (iVar2 - 1);
	while (iVar3 >= 0)
	{
		Global_2394180[iVar2 /*46*/] = { Global_2394180[iVar3 /*46*/] };
		iVar2 = (iVar2 - 1);
		iVar3 = (iVar3 - 1);
	}
	Global_1387741++;
	if (Global_1387741 > 12)
	{
		Global_1387741 = 12;
	}
	iVar4 = 0;
	if (Global_2394180[1 /*46*/].f_1)
	{
		Global_2394180[0 /*46*/] = { Global_2394180[1 /*46*/] };
		Global_2394180[1 /*46*/] = { Var5 };
		iVar4 = 1;
	}
	if (iVar4 == 0)
	{
		Global_2394180[iVar4 /*46*/].f_1 = iParam10;
	}
	else
	{
		Global_2394180[iVar4 /*46*/].f_1 = 0;
	}
	Global_2394180[iVar4 /*46*/] = 0;
	Global_2394180[iVar4 /*46*/].f_2 = 0;
	Global_2394180[iVar4 /*46*/].f_3 = 0;
	Global_2394180[iVar4 /*46*/].f_4 = 0;
	Global_2394180[iVar4 /*46*/].f_5 = bVar0;
	Global_2394180[iVar4 /*46*/].f_6 = bVar1;
	Global_2394180[iVar4 /*46*/].f_7 = bParam2;
	Global_2394180[iVar4 /*46*/].f_8 = iParam0;
	Global_2394180[iVar4 /*46*/].f_9 = -1;
	StringCopy(&(Global_2394180[iVar4 /*46*/].f_10), sParam3, 64);
	Global_2394180[iVar4 /*46*/].f_26 = -1;
	StringCopy(&(Global_2394180[iVar4 /*46*/].f_27), sParam4, 32);
	Global_2394180[iVar4 /*46*/].f_35 = iParam6;
	Global_2394180[iVar4 /*46*/].f_36 = iParam7;
	Global_2394180[iVar4 /*46*/].f_37 = 0;
	Global_2394180[iVar4 /*46*/].f_38 = UNK_0x2B6E0A53779D29EA();
	Global_2394180[iVar4 /*46*/].f_39 = iParam5;
	Global_2394180[iVar4 /*46*/].f_40 = Global_2395344;
	Global_2394180[iVar4 /*46*/].f_44 = iParam8;
	Global_2394180[iVar4 /*46*/].f_45 = iParam9;
	if (iParam0 == 123 || iParam0 == 234)
	{
		Global_2394180[iVar4 /*46*/].f_9 = func_224();
	}
	Global_2395344++;
	func_223();
	Global_2394180[iVar4 /*46*/].f_41 = 0;
	Global_2394180[iVar4 /*46*/].f_42 = 0;
	Global_2394180[iVar4 /*46*/].f_43 = 0;
	if (UNK_0xDC30EF462887322E())
	{
		if (bParam2)
		{
			bVar51 = true;
			if (bVar51)
			{
				Var52 = { func_145(bVar0) };
				iVar65 = UNK_0xCB1A6FC304A3D66F(&Var52);
				if (iVar65 != -1)
				{
					Global_2394180[iVar4 /*46*/].f_41 = iVar65;
					Global_2394180[iVar4 /*46*/].f_42 = 1;
					Global_2394180[iVar4 /*46*/].f_43 = 0;
				}
			}
		}
	}
}

void func_223()
{
	Global_1387714 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), 30000);
}

int func_224()
{
	vector3 vVar0[24];
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;

	StringCopy(&cVar0, "", 24);
	cVar0 = { func_226() };
	if (UNK_0xEA6BC48857E0AC4C(&cVar0) || UNK_0x7F8A39872A07D2CE(".", &cVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = 0;
	iVar6 = 0;
	while (iVar6 < 7)
	{
		switch (iVar6)
		{
			case 0:
				StringCopy(&cVar0, func_225(53, -1), 24);
				break;
			case 1:
				StringCopy(&cVar0, func_225(54, -1), 24);
				break;
			case 2:
				StringCopy(&cVar0, func_225(55, -1), 24);
				break;
			case 3:
				StringCopy(&cVar0, func_225(56, -1), 24);
				break;
			case 4:
				StringCopy(&cVar0, func_225(57, -1), 24);
				break;
			case 5:
				StringCopy(&cVar0, func_225(58, -1), 24);
				break;
			case 6:
				StringCopy(&cVar0, func_225(59, -1), 24);
				break;
			default:
				StringCopy(&cVar0, "", 24);
				break;
		}
		if (!UNK_0xEA6BC48857E0AC4C(&cVar0) && !UNK_0x7F8A39872A07D2CE(".", &cVar0))
		{
			iVar7++;
		}
		iVar6++;
	}
	if (iVar7 == 0)
	{
		return -1;
	}
	bVar8 = func_157(9533, -1, 0);
	bVar9 = false;
	iVar6 = 0;
	while (iVar6 < iVar7)
	{
		bVar9 = iVar6 * 3;
		if (bVar9 != -1)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bVar8, bVar9))
			{
				return 7;
			}
		}
		iVar6++;
	}
	return 1;
}

char* func_225(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_2584899[iParam0 /*3*/][func_153(iParam1)];
	return UNK_0xD3B92504E570C221(uVar0, -1);
}

struct<6> func_226()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;

	if (UNK_0xEA6BC48857E0AC4C(&(Global_1668055.f_10)))
	{
		iVar7 = func_157(9534, -1, 0);
		if (iVar7 == 0)
		{
			StringCopy(&Var0, ".", 24);
		}
		else
		{
			iVar6 = 0;
			while (iVar6 < 1218)
			{
				if ((Global_794709.f_4[iVar6 /*88*/].f_65 == 0 && Global_794709.f_4[iVar6 /*88*/].f_68 == 1) && UNK_0xEAE0D21A50E6C7F4(Global_794709.f_4[iVar6 /*88*/].f_76, 13))
				{
					if (Global_794709.f_107189[iVar6 /*13*/].f_1 == iVar7)
					{
						Var0 = { Global_794709.f_123037[Global_794709.f_107189[iVar6 /*13*/].f_10 /*6*/] };
						iVar6 = 1218;
					}
				}
				iVar6++;
			}
			if (UNK_0xEA6BC48857E0AC4C(&Var0))
			{
			}
		}
		Global_1668055.f_10 = { Var0 };
		return Var0;
	}
	return Global_1668055.f_10;
}

bool func_227()
{
	return Global_1312837 == 10;
}

void func_228()
{
	bool bVar0;

	bVar0 = Global_1388048[func_153(-1)];
	UNK_0x5D96D8530B3D0904(&bVar0, 8);
	func_151(1303, bVar0, -1, 1);
}

void func_229(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_230() /*10930*/].f_6174.f_19 = iVar0;
			break;
		case 19:
			Global_2097152[func_230() /*10930*/].f_6174.f_18 = iVar0;
			break;
		case 74:
			Global_2097152[func_230() /*10930*/].f_6174.f_12 = iVar0;
			break;
		case 29:
			Global_2097152[func_230() /*10930*/].f_6174.f_14 = iVar0;
			break;
		case 8:
			Global_2097152[func_230() /*10930*/].f_6174.f_15 = iVar0;
			break;
		case 31:
			Global_2097152[func_230() /*10930*/].f_6174.f_16 = iVar0;
			break;
		case 3:
			Global_2097152[func_230() /*10930*/].f_6174.f_20 = iVar0;
			break;
		case 6:
			Global_2097152[func_230() /*10930*/].f_6174.f_17 = iVar0;
			break;
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_230() /*10930*/].f_6174.f_23 = iVar0;
			break;
		case 76:
			Global_2097152[func_230() /*10930*/].f_6174.f_24 = iVar0;
			break;
		case 93:
			Global_2097152[func_230() /*10930*/].f_6174.f_25 = iVar0;
			break;
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_230() /*10930*/].f_6174.f_26 = iVar0;
			break;
		case 65:
		case 75:
		case 95:
			Global_2097152[func_230() /*10930*/].f_6174.f_27 = iVar0;
			break;
			break;
		case 97:
			Global_2097152[func_230() /*10930*/].f_6174.f_29 = iVar0;
			break;
		case 88:
			Global_2097152[func_230() /*10930*/].f_6174.f_28 = iVar0;
			break;
		case 100:
			Global_2097152[func_230() /*10930*/].f_6174.f_31 = iVar0;
			break;
		case 106:
			Global_2097152[func_230() /*10930*/].f_6174.f_32 = iVar0;
			break;
		case 99:
			Global_2097152[func_230() /*10930*/].f_6174.f_30 = iVar0;
			break;
	}
}

int func_230()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

bool func_231()
{
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_211, 4))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_211, 8) || (UNK_0xEAE0D21A50E6C7F4(bLocal_211, 8) && func_38(&uLocal_214, 600000, 0)))
		{
			if (func_237(Local_73.f_5))
			{
				UNK_0x5D96D8530B3D0904(&bLocal_211, 4);
				UNK_0x0674E58A79778E99(&bLocal_211, 8);
			}
		}
	}
	else if (!func_236())
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_211, 19))
		{
			if (func_235())
			{
				UNK_0x5D96D8530B3D0904(&bLocal_211, 19);
			}
			else if (!func_234() && !func_232())
			{
				UNK_0x5D96D8530B3D0904(&bLocal_211, 8);
				UNK_0x0674E58A79778E99(&bLocal_211, 4);
				func_45(&uLocal_214, 0, 0);
				iLocal_210 = 0;
			}
		}
		else if (!func_232())
		{
			if (func_234())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&bLocal_211, 8);
		UNK_0x0674E58A79778E99(&bLocal_211, 4);
		func_45(&uLocal_214, 0, 0);
		iLocal_210 = 0;
	}
	return false;
}

bool func_232()
{
	return func_233();
}

bool func_233()
{
	return Global_1370527.f_40 == 3;
}

bool func_234()
{
	return Global_1370527.f_57.f_1;
}

bool func_235()
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

bool func_236()
{
	if (Global_21821)
	{
		return true;
	}
	return false;
}

bool func_237(int iParam0)
{
	bool bVar0;

	switch (iLocal_210)
	{
		case 0:
			if (func_347(0, 1, 1, 1))
			{
				if (!func_346(12, -1))
				{
					func_338(iParam0);
					iLocal_210++;
				}
			}
			break;
		case 1:
			bVar0 = func_337(iParam0);
			func_336(iParam0);
			if (func_238(&uLocal_231, bVar0, "FM_1AU", bLocal_396, 0, 0))
			{
				UNK_0x0674E58A79778E99(&bLocal_211, 11);
				iLocal_210++;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

int func_238(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (func_334())
	{
		return 0;
	}
	if (func_333())
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = -99;
	return func_239(uParam0, bParam1, bParam2, bParam3, 1, iParam5, bParam4, bVar0, bVar1, iVar2, bVar0, bVar0, -1);
}

int func_239(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)
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
	iVar1 = func_332(bParam2, bParam3);
	iVar2 = 0;
	if (!UNK_0xEA6BC48857E0AC4C(bParam7))
	{
		iVar2 = UNK_0x12AB0310C2281427(bParam7);
	}
	if (func_331(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_326(bParam6))
	{
		return 0;
	}
	if (func_323(iVar0, iVar1, iVar2))
	{
		if (func_322())
		{
			return 0;
		}
		func_321();
		return func_246(uParam0, bParam1, iParam12, bParam2, bParam3, iParam4, iParam5, bParam6, bParam7, bParam8, iParam9, bParam10, bParam11);
	}
	if (!func_245(iParam4))
	{
		return 0;
	}
	func_240(iVar0, iVar1, iVar2, bParam3, iParam4, iParam5, bParam6);
	return 0;
}

void func_240(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, bool bParam6)
{
	Global_1370527.f_40.f_1 = iParam0;
	Global_1370527.f_40.f_2 = iParam1;
	Global_1370527.f_40.f_3 = iParam2;
	StringCopy(&(Global_1370527.f_40.f_4), sParam3, 16);
	Global_1370527.f_40.f_8 = iParam4;
	Global_1370527.f_40.f_9 = iParam5;
	Global_1370527.f_40.f_14 = bParam6;
	func_241(iParam4);
	func_321();
	Global_1370527.f_40.f_13 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), 7000);
}

void func_241(int iParam0)
{
	if (func_244(iParam0))
	{
		func_243();
		return;
	}
	func_242();
}

void func_242()
{
	Global_1370527.f_40.f_10 = 0;
}

void func_243()
{
	Global_1370527.f_40.f_10 = 1;
}

bool func_244(int iParam0)
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

bool func_245(int iParam0)
{
	return iParam0 > Global_1370527.f_40.f_8;
}

int func_246(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12)
{
	char cVar0[16];

	func_320();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_317(uParam0, bParam3, bParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&cVar0, "CELL_226", 16);
		return func_314(uParam0, bParam1, bParam3, bParam4, &cVar0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_317(uParam0, bParam3, bParam4);
		}
		return func_297(uParam0, bParam1, bParam3, bParam4, bParam7);
	}
	if (iParam5 == 5)
	{
		return func_296(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	if (iParam5 == 2)
	{
		return func_284(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	if (iParam5 == 3)
	{
		return func_283(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	if (iParam5 == 6)
	{
		return func_247(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	return 0;
}

int func_247(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	func_282();
	bVar0 = true;
	if (func_249(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8))
	{
		func_248(120000);
		return 1;
	}
	return 0;
}

void func_248(int iParam0)
{
	Global_1370527.f_40.f_11 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), iParam0);
	Global_1370527.f_40.f_12 = 1;
}

bool func_249(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
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

	bVar0 = func_64();
	iVar1 = 0;
	if (bParam0 == 145)
	{
		bVar0 = iParam1;
		bVar2 = UNK_0x6E524813889AECF8(bVar0);
		iVar1 = func_276(bVar0);
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
	bVar4 = func_275(bParam5, bParam6, &iVar3);
	iVar5 = func_273(iParam7, &iVar3);
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
		bVar12 = func_272(bParam0, bParam2, iVar10, bVar4, iVar5, bVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, bParam8, bParam9);
	}
	else
	{
		bVar12 = func_253(bParam0, bParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, false))
	{
		func_252();
	}
	func_282();
	func_251();
	func_250();
	return true;
}

void func_250()
{
	Global_1370527.f_57 = 0;
	Global_1370527.f_57.f_1 = 0;
}

void func_251()
{
	Global_1370527.f_40 = 3;
}

void func_252()
{
	UNK_0x5D96D8530B3D0904(&Global_7356, 8);
}

int func_253(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_254(bParam0, bParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_254(bool bParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;

	if (iParam13 > 99)
	{
	}
	if (UNK_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_265();
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
	if (func_264() == 0)
	{
		func_262();
		return 0;
	}
	func_261(Global_4269749);
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
	func_265();
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
				func_260(0);
				break;
			case 1:
				func_260(1);
				break;
			case 2:
				func_260(2);
				break;
			case 3:
				func_260(3);
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
		func_265();
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
			if (!func_259())
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_216(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_212(1);
			func_216(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	func_255(bParam0, bParam1);
	return 1;
}

void func_255(bool bParam0, bool bParam1)
{
	if (!func_256())
	{
		return;
	}
	UNK_0x6DFDEDC7A51E8DAE(bParam0, -1180597171, UNK_0x12AB0310C2281427(bParam1), 0);
}

bool func_256()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_64())
	{
		return false;
	}
	if (func_257(UNK_0xD803B885F5E47A62()))
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

bool func_257(int iParam0)
{
	return func_258(iParam0, 20);
}

bool func_258(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

bool func_259()
{
	return Global_1312877;
}

void func_260(int iParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = Global_111638.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_261(int iParam0)
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

void func_262()
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
		if (!func_263(Global_4268500[iVar2 /*104*/].f_18, Global_4268500[Global_4269749 /*104*/].f_18))
		{
			Global_4269749 = iVar2;
		}
		iVar2++;
	}
	Global_4268500[Global_4269749 /*104*/].f_24 = 1;
}

bool func_263(struct<6> Param0, struct<6> Param6)
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

int func_264()
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
			if (!func_263(Global_4268500[iVar2 /*104*/].f_18, Global_4268500[Global_4269749 /*104*/].f_18))
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

void func_265()
{
	if (func_215(14))
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
		Global_19486 = func_266();
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

var func_266()
{
	func_267();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_267()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_270(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_269(UNK_0x16F2683693E537C9());
			if (func_268(iVar0) && (!func_215(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_268(Global_111638.f_2358.f_539.f_4321))
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

bool func_268(int iParam0)
{
	return iParam0 < 3;
}

int func_269(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_270(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_270(int iParam0)
{
	if (func_268(iParam0))
	{
		return func_271(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_271(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_272(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	if (func_254(bParam0, bParam1, iParam2, iParam6, bParam3, bParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, bParam15, bParam16, iVar0) == 1)
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

int func_273(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_274(2, iParam1);
	return iParam0;
}

void func_274(int iParam0, int iParam1)
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

bool func_275(bool bParam0, bool bParam1, int iParam2)
{
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return bLocal_18;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, bLocal_18))
	{
		return bLocal_18;
	}
	func_274(1, iParam2);
	if (bParam1)
	{
		return bParam0;
	}
	return UNK_0x19C9F30A7697B43C(bParam0);
}

int func_276(bool bParam0)
{
	int iVar0;

	iVar0 = func_279(bParam0);
	if (iVar0 == -1)
	{
		func_277(bParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_277(bool bParam0, bool bParam1)
{
	if (!func_388(bParam0, 0, 1))
	{
		return;
	}
	if (func_279(bParam0) != -1)
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
	if (func_278(bParam0))
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

bool func_278(bool bParam0)
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

int func_279(bool bParam0)
{
	int iVar0;

	if (!func_388(bParam0, 0, 1))
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
			func_280(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_280(int iParam0)
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
	func_281(&(Global_1389078[iVar32 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_281(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_64();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (UNK_0x8CD06866876216F2())
	{
		uParam0->f_3 = UNK_0x2B6E0A53779D29EA();
	}
}

void func_282()
{
	Global_1370527.f_40.f_9 = 4;
}

bool func_283(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	func_282();
	bVar0 = false;
	return func_249(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8);
}

bool func_284(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	bVar0 = false;
	return func_285(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8);
}

bool func_285(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
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

	bVar0 = func_64();
	iVar1 = 0;
	if (bParam0 == 145)
	{
		bVar0 = iParam1;
		bVar2 = UNK_0x6E524813889AECF8(bVar0);
		iVar1 = func_276(bVar0);
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
	bVar4 = func_275(bParam5, bParam6, &iVar3);
	iVar5 = func_273(iParam7, &iVar3);
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
		bVar12 = func_295(bParam0, bParam2, iVar10, bVar4, iVar5, bVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, bParam8, bParam9);
	}
	else
	{
		bVar12 = func_287(bParam0, bParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, false))
	{
		func_252();
	}
	func_286();
	func_251();
	func_250();
	return true;
}

void func_286()
{
	Global_1370527.f_40.f_9 = 3;
}

int func_287(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_289(bParam0, bParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_288(bParam0) };
			Global_8043 = bParam0;
			UNK_0x5D96D8530B3D0904(&Global_7356, true);
			UNK_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_288(bool bParam0)
{
	return Global_1798[bParam0 /*29*/].f_3;
}

int func_289(bool bParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;

	if (iParam13 > 99)
	{
	}
	if (UNK_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_265();
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
	if (func_294() == 0)
	{
		func_292();
		return 0;
	}
	func_291(Global_21872);
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
		func_260(0);
		func_260(2);
		func_260(1);
	}
	else
	{
		func_265();
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
					func_260(0);
					Global_8062 = 0;
					break;
				case 1:
					func_260(1);
					Global_8062 = 1;
					break;
				case 2:
					func_260(2);
					Global_8062 = 2;
					break;
				case 3:
					func_260(3);
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
		func_265();
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
			if (!func_259())
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_216(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_212(1);
			func_216(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	func_290(bParam0, bParam1);
	return 1;
}

void func_290(bool bParam0, bool bParam1)
{
	if (!func_256())
	{
		return;
	}
	UNK_0x6DFDEDC7A51E8DAE(bParam0, 1654525105, UNK_0x12AB0310C2281427(bParam1), 0);
}

void func_291(int iParam0)
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

void func_292()
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
		if (!func_293(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_24 = 1;
}

bool func_293(struct<6> Param0, struct<6> Param6)
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

int func_294()
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
			if (!func_293(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
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

int func_295(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	if (func_289(bParam0, bParam1, iParam2, iParam6, bParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, bParam15, bParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			Global_7966[3 /*6*/] = { func_288(bParam0) };
			Global_8043 = bParam0;
			StringCopy(&Global_8044, sParam5, 64);
			UNK_0x5D96D8530B3D0904(&Global_7356, true);
			UNK_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

int func_296(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
	}
	if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
	{
		return 0;
	}
	func_286();
	bVar0 = true;
	if (func_285(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8))
	{
		func_248(120000);
		return 1;
	}
	return 0;
}

int func_297(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		bVar0 = func_313(uParam0, bParam1, bParam2, bParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_303(uParam0, bParam1, bParam2, bParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, 3))
		{
			func_302(1);
		}
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, 5))
		{
			func_301(1);
		}
		func_300();
		func_251();
		func_299();
		func_298();
		return 1;
	}
	return 0;
}

void func_298()
{
	Global_2546572 = 0;
}

void func_299()
{
	Global_1370527.f_57 = 1;
	Global_1370527.f_57.f_1 = 0;
}

void func_300()
{
	Global_1370527.f_40.f_9 = 1;
}

void func_301(int iParam0)
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

void func_302(int iParam0)
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

int func_303(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_312(uParam0, bParam1, bParam2, iParam5, iParam6, 0);
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
	return func_304(bParam3, iParam4, bParam7);
}

int func_304(char* sParam0, int iParam1, bool bParam2)
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
					func_311();
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
		if (func_346(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_310();
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
				func_265();
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
				if (func_309())
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
			if (func_308())
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
			func_307();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_306();
		func_305();
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
		func_311();
	}
	return 0;
}

void func_305()
{
	if (!func_256())
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

void func_306()
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

void func_307()
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

bool func_308()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_309()
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

void func_310()
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

void func_311()
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

void func_312(var uParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_313(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_312(uParam0, bParam1, bParam2, iParam5, iParam6, 0);
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
	return func_304(bParam3, iParam4, bParam7);
}

int func_314(var uParam0, bool bParam1, bool bParam2, bool bParam3, char* sParam4)
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
	}
	if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
	{
		return 0;
	}
	if (func_316(uParam0, bParam1, bParam2, bParam3, 9, sParam4, 0, 0, 1))
	{
		func_315();
		func_300();
		func_251();
		func_299();
		func_298();
		return 1;
	}
	return 0;
}

void func_315()
{
	Global_21823 = 0;
}

int func_316(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_312(uParam0, bParam1, bParam2, iParam6, iParam7, 0);
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
	return func_304(bParam3, iParam4, bParam8);
}

int func_317(var uParam0, bool bParam1, bool bParam2)
{
	if (func_319(uParam0, bParam1, bParam2, 12, 0, 0, 0))
	{
		func_318();
		func_251();
		func_299();
		return 1;
	}
	return 0;
}

void func_318()
{
	Global_1370527.f_40.f_9 = 2;
}

int func_319(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_312(uParam0, 145, bParam1, iParam4, iParam5, iParam6);
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
	return func_304(bParam2, iParam3, 0);
}

void func_320()
{
	Global_1370527.f_55 = Global_1370527.f_40.f_1;
	Global_1370527.f_55.f_1 = Global_1370527.f_40.f_10;
}

void func_321()
{
	Global_1370527.f_40 = 1;
}

bool func_322()
{
	return Global_1370527.f_40 == 1;
}

bool func_323(int iParam0, int iParam1, int iParam2)
{
	if (!func_324(iParam0))
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

bool func_324(int iParam0)
{
	if (!func_325())
	{
		return false;
	}
	if (!Global_1370527.f_40.f_1 == iParam0)
	{
		return false;
	}
	return true;
}

bool func_325()
{
	if (Global_1370527.f_40 == 0)
	{
		return false;
	}
	return true;
}

bool func_326(bool bParam0)
{
	if (func_330())
	{
		return false;
	}
	if (func_233())
	{
		return false;
	}
	if (func_329(0))
	{
		return false;
	}
	if (Global_1312467.f_18 != 0)
	{
		return false;
	}
	if (Global_1662006 || func_328())
	{
		return false;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bParam0, 6))
	{
		if (func_327())
		{
			return false;
		}
	}
	return true;
}

bool func_327()
{
	return UNK_0x4925CBEE5D8BE14B(UNK_0x2B6E0A53779D29EA(), Global_1387714);
}

int func_328()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_329(int iParam0)
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

bool func_330()
{
	return func_308();
}

bool func_331(int iParam0, int iParam1, int iParam2)
{
	if (!func_233())
	{
		return false;
	}
	return func_323(iParam0, iParam1, iParam2);
}

int func_332(char* sParam0, char* sParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return UNK_0x12AB0310C2281427(&cVar0);
}

bool func_333()
{
	return Global_2543673.f_1;
}

int func_334()
{
	if (Global_1370715.f_2)
	{
		return 1;
	}
	return func_335();
}

bool func_335()
{
	return func_330();
}

void func_336(int iParam0)
{
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_211, 11))
	{
		switch (iParam0)
		{
			case 0:
				bLocal_396 = "FMA_KIL1";
				UNK_0x5D96D8530B3D0904(&bLocal_211, 11);
				break;
		}
	}
}

int func_337(int iParam0)
{
	int iVar0;

	iVar0 = 144;
	switch (iParam0)
	{
		case 0:
			iVar0 = 12;
			break;
	}
	return iVar0;
}

void func_338(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_340(12, 3, 0);
			func_339(&uLocal_231, 1, 0, "Lester", 0, 1);
			break;
	}
}

void func_339(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_340(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	Global_8042 = bParam0;
	if (Global_117[bParam0 /*10*/].f_8 != 150)
	{
		func_265();
		if (iParam1 == 4)
		{
			func_345(bParam0, 0, 1);
			func_345(bParam0, 1, 1);
			func_345(bParam0, 2, 1);
			func_344(bParam0, 0, 1);
			func_344(bParam0, 1, 1);
			func_344(bParam0, 2, 1);
		}
		else
		{
			if (func_343(bParam0, iParam1) == 1 && func_342(bParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_345(bParam0, iVar0, 1);
			func_344(bParam0, iVar0, 1);
		}
		if (bParam2)
		{
			if (!Global_76622)
			{
				if (iParam1 != 4)
				{
					if (Global_19486 != iParam1)
					{
						Global_8015[iParam1 /*4*/] = { func_288(bParam0) };
						Global_8032[iParam1] = 1;
						Global_8037[iParam1] = bParam0;
					}
					else if (bParam0 == Global_19486)
					{
					}
					else
					{
						Global_7966[1 /*6*/] = { func_288(bParam0) };
						Global_7966[1 /*6*/].f_5 = iParam1;
						func_341();
					}
				}
				else
				{
					Global_7966[1 /*6*/] = { func_288(bParam0) };
					Global_7966[1 /*6*/].f_5 = iParam1;
					func_341();
				}
			}
			else
			{
				Global_7966[1 /*6*/] = { func_288(bParam0) };
				Global_7966[1 /*6*/].f_5 = iParam1;
				func_341();
			}
		}
	}
}

void func_341()
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

int func_342(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

int func_343(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

void func_344(int iParam0, int iParam1, int iParam2)
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

void func_345(int iParam0, int iParam1, int iParam2)
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

bool func_346(bool bParam0, int iParam1)
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

bool func_347(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && UNK_0xFEBC1E4EC9E001F0())
	{
		return false;
	}
	if (func_353())
	{
		return false;
	}
	if (!UNK_0x0F1CCD77290EE12F())
	{
		return false;
	}
	if (func_352())
	{
		return false;
	}
	if (func_362())
	{
		return false;
	}
	if (bParam1)
	{
		if (func_51(UNK_0xD803B885F5E47A62(), 1, 0))
		{
			return false;
		}
	}
	if (bParam0)
	{
		if (func_50(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	if (func_351())
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
	if (func_350())
	{
		return false;
	}
	if (func_349())
	{
		return false;
	}
	if (func_360())
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
	if (func_348(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_348(bool bParam0)
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

bool func_349()
{
	return Global_2450632.f_591;
}

bool func_350()
{
	return Global_2450632.f_744;
}

bool func_351()
{
	return Global_2439138.f_3047.f_578;
}

bool func_352()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

bool func_353()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

bool func_354()
{
	bool bVar0;

	bVar0 = Global_1388048[func_153(-1)];
	if (UNK_0xEAE0D21A50E6C7F4(bVar0, 8))
	{
		return true;
	}
	return false;
}

void func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (UNK_0xE5DBF9B6126856CA(Local_73.f_12[0]))
			{
				Global_2439138.f_3766.f_1[0] = UNK_0xB177666FAB6F4417(Local_73.f_12[0]);
			}
			if (UNK_0xE5DBF9B6126856CA(Local_73.f_9[0]))
			{
				Global_2439138.f_3766.f_4[0] = UNK_0x1B50683925F00106(Local_73.f_9[0]);
			}
			break;
	}
}

bool func_356(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (UNK_0xE5DBF9B6126856CA(Local_73.f_12[0]) && UNK_0xE5DBF9B6126856CA(Local_73.f_9[0]))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_357(bool bParam0, bool bParam1)
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

bool func_358(bool bParam0)
{
	if (func_17(bParam0, 0))
	{
		return true;
	}
	if (func_359())
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

bool func_359()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_360()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_196 != 0;
}

int func_361()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_197;
}

bool func_362()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, false);
}

void func_363(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = UNK_0xD803B885F5E47A62();
	if (!bParam14 == 0)
	{
		UNK_0xFB061A86A7AC749F(1, &Param0, 14, bParam14);
	}
}

bool func_364(bool bParam0)
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
			if (func_388(bVar2, 0, 0))
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

void func_365()
{
	if (vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 >= 5 && vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 < 6)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_73, 4))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_211, 3))
			{
				if (func_388(Local_73.f_8, 0, 1))
				{
					func_366("FM_TGDM_KIL", Local_73.f_8, 0, 0, 0, 1, 0);
				}
				UNK_0x5D96D8530B3D0904(&bLocal_211, 3);
			}
		}
	}
}

int func_366(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
				UNK_0x3A820E495A7BA3E5(func_117(iVar1, bParam1, 0));
			}
			else
			{
				UNK_0x3A820E495A7BA3E5(func_91(bParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			UNK_0x3A820E495A7BA3E5(func_91(bParam1, -2, 1, 0, 0));
		}
		UNK_0xD06AC7C87A34A6AD(func_89(&Var2));
		if (!bParam4)
		{
			iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
		}
		else
		{
			Global_2513218 = { func_145(bParam1) };
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
						Var2 = { func_367(&Var2) };
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
		func_85(14, bParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_367(char* sParam0)
{
	struct<16> Var0;

	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_368()
{
	int iVar0;

	iVar0 = UNK_0x57270EE11514DC67();
	if (iLocal_221 != Local_73.f_15)
	{
		iLocal_221 = Local_73.f_15;
		UNK_0x28E5F00F131890E3(iLocal_221);
	}
	if (iLocal_222 != Local_73.f_16)
	{
		iLocal_222 = Local_73.f_16;
		UNK_0x0BEC04ECA8485A3A(iLocal_222);
	}
	if (func_388(UNK_0xD803B885F5E47A62(), 0, 1))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(vLocal_112[iVar0 /*3*/], false))
		{
			if (vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 == 0)
			{
				if (func_361() == 0)
				{
					UNK_0x5D96D8530B3D0904(&(vLocal_112[iVar0 /*3*/]), false);
				}
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(vLocal_112[iVar0 /*3*/], false))
		{
			if ((func_51(UNK_0xD803B885F5E47A62(), 1, 0) || func_48(UNK_0xD803B885F5E47A62())) || func_361() > 0)
			{
				func_42(&uLocal_212);
				UNK_0x0674E58A79778E99(&(vLocal_112[iVar0 /*3*/]), false);
			}
			else if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_211, 7))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_211, 7);
						func_376();
					}
				}
				else if (UNK_0xEAE0D21A50E6C7F4(bLocal_211, 7))
				{
					UNK_0x0674E58A79778E99(&bLocal_211, 7);
					if (!func_49(UNK_0xD803B885F5E47A62(), 0))
					{
						func_374();
					}
				}
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(vLocal_112[iVar0 /*3*/], 3))
		{
			if (vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 > 3 && vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 < 6)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_2439138.f_3766, true))
				{
					UNK_0x5D96D8530B3D0904(&(vLocal_112[iVar0 /*3*/]), 3);
				}
			}
		}
		if (vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 > 3)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(vLocal_112[UNK_0x57270EE11514DC67() /*3*/], 5))
			{
				if (func_373(Local_73.f_5))
				{
					UNK_0x5D96D8530B3D0904(&(vLocal_112[UNK_0x57270EE11514DC67() /*3*/]), 5);
				}
			}
			else if (!func_373(Local_73.f_5))
			{
				UNK_0x0674E58A79778E99(&(vLocal_112[UNK_0x57270EE11514DC67() /*3*/]), 5);
			}
			if (!UNK_0xEAE0D21A50E6C7F4(vLocal_112[UNK_0x57270EE11514DC67() /*3*/], 6))
			{
				if (func_370(Local_73.f_5))
				{
					UNK_0x5D96D8530B3D0904(&(vLocal_112[UNK_0x57270EE11514DC67() /*3*/]), 6);
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(vLocal_112[UNK_0x57270EE11514DC67() /*3*/], 8))
			{
				if (func_369())
				{
					UNK_0x5D96D8530B3D0904(&(vLocal_112[UNK_0x57270EE11514DC67() /*3*/]), 8);
				}
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_211, 13))
		{
			if (UNK_0xE5DBF9B6126856CA(Local_73.f_9[0]))
			{
				if (!func_40(Local_73.f_9[0]))
				{
					UNK_0xE2F0767314863BD8(UNK_0x1B50683925F00106(Local_73.f_9[0]), 1, 0);
					UNK_0x5D96D8530B3D0904(&bLocal_211, 13);
				}
			}
		}
	}
}

bool func_369()
{
	if (UNK_0xE5DBF9B6126856CA(Local_73.f_12[0]))
	{
		if (func_9(Local_73.f_12[0]))
		{
			if (UNK_0x7B5606C651AB51B5(UNK_0xB177666FAB6F4417(Local_73.f_12[0]), 0, 7000) || UNK_0x7B5606C651AB51B5(UNK_0xB177666FAB6F4417(Local_73.f_12[0]), 1, 40000))
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

bool func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (UNK_0xE5DBF9B6126856CA(Local_73.f_9[0]))
			{
				if (!func_40(Local_73.f_9[0]))
				{
					if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						if (func_371(UNK_0x1B50683925F00106(Local_73.f_9[0])))
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

bool func_371(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	if (UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0))
	{
		return true;
	}
	if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0))
	{
		return true;
	}
	if (func_372())
	{
		if (UNK_0x38AF5DD0BDDE9545(UNK_0xD803B885F5E47A62(), &bVar0))
		{
			if (UNK_0xEC560E589DF8370E(bVar0))
			{
				bVar1 = UNK_0x940C1429253D3B1B(bVar0);
				if (UNK_0xC844350D5D58C99A(bVar1))
				{
					if (!UNK_0x437347B10A200C4B(bVar1, 0))
					{
						if (UNK_0x405E212DDE472467(bVar1, 0))
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

bool func_372()
{
	return Global_1574404;
}

bool func_373(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (UNK_0xE5DBF9B6126856CA(Local_73.f_9[0]))
			{
				if (!func_40(Local_73.f_9[0]))
				{
					if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(UNK_0x1B50683925F00106(Local_73.f_9[0]), true)) < 40000f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

void func_374()
{
	if (!Global_1312575)
	{
		return;
	}
	func_375();
}

void func_375()
{
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
}

void func_376()
{
	Global_1312575 = 1;
	StringCopy(&(Global_1312575.f_1), UNK_0xBB0808A181D4745C(), 32);
	Global_1312575.f_9 = UNK_0x12AB0310C2281427(&(Global_1312575.f_1));
}

void func_377()
{
	switch (Local_73.f_6)
	{
		case 1:
			if (UNK_0xBFF81ED3B99522C7())
			{
				if (UNK_0xE5DBF9B6126856CA(Local_73.f_12[0]))
				{
					if (func_9(Local_73.f_12[0]))
					{
						if (!func_40(Local_73.f_9[0]))
						{
							if (UNK_0x82CCEAB29E9451DD(UNK_0x1B50683925F00106(Local_73.f_9[0]), UNK_0xB177666FAB6F4417(Local_73.f_12[0])))
							{
								if (UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_73.f_9[0]), -258271821) != 1 && UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_73.f_9[0]), -258271821) != 0)
								{
									UNK_0xE072601B4380E9DF(UNK_0x1B50683925F00106(Local_73.f_9[0]), UNK_0xB177666FAB6F4417(Local_73.f_12[0]), 20f, 786603);
								}
							}
						}
					}
				}
			}
			break;
		case 2:
			if (UNK_0xBFF81ED3B99522C7())
			{
				if (UNK_0xE5DBF9B6126856CA(Local_73.f_12[0]))
				{
					if (UNK_0xE5DBF9B6126856CA(Local_73.f_9[0]))
					{
						if (func_9(Local_73.f_12[0]))
						{
							if (!func_40(Local_73.f_9[0]))
							{
								if (UNK_0x82CCEAB29E9451DD(UNK_0x1B50683925F00106(Local_73.f_9[0]), UNK_0xB177666FAB6F4417(Local_73.f_12[0])))
								{
									if ((UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_73.f_9[0]), -258271821) != 1 && UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_73.f_9[0]), -258271821) != 0) || UNK_0xEAE0D21A50E6C7F4(Local_73, 9))
									{
										UNK_0xE072601B4380E9DF(UNK_0x1B50683925F00106(Local_73.f_9[0]), UNK_0xB177666FAB6F4417(Local_73.f_12[0]), 30f, 786469);
										if (UNK_0xEAE0D21A50E6C7F4(Local_73, 9))
										{
											UNK_0x0674E58A79778E99(&Local_73, 9);
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		case 3:
			if (UNK_0xE5DBF9B6126856CA(Local_73.f_9[0]))
			{
				if (!func_40(Local_73.f_9[0]))
				{
					if (UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_73.f_9[0]), -828834893) != 1 && UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_73.f_9[0]), -828834893) != 0)
					{
						if (func_381(Local_73.f_9[0]))
						{
							if (UNK_0x526BC32A660C89E6(Local_73.f_9[0]))
							{
								UNK_0x75CDA8644CD3B5F5(UNK_0x1B50683925F00106(Local_73.f_9[0]), 0, 0);
							}
						}
					}
				}
			}
			break;
		case 4:
			if (UNK_0xE5DBF9B6126856CA(Local_73.f_9[0]))
			{
				if (!func_40(Local_73.f_9[0]))
				{
					if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						if (UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_73.f_9[0]), 1805844857) != 1 && UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_73.f_9[0]), 1805844857) != 0)
						{
							if (func_381(Local_73.f_9[0]))
							{
								if (UNK_0x526BC32A660C89E6(Local_73.f_9[0]))
								{
									UNK_0xF3268524E9BE6D6E(UNK_0x1B50683925F00106(Local_73.f_9[0]), UNK_0x16F2683693E537C9(), 500f, -1, 0, 1);
								}
							}
						}
					}
				}
			}
			break;
	}
	if (UNK_0xE5DBF9B6126856CA(Local_73.f_9[0]))
	{
		if ((vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 >= 5 && vLocal_112[UNK_0x57270EE11514DC67() /*3*/].f_2 < 6) && !func_186(UNK_0xD803B885F5E47A62(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			func_378(Local_73.f_9[0], &Local_223, -1082130432 /* Float: -1f */, 0, 1, 0, 0, -1, -1, 1);
		}
		else
		{
			func_62(&Local_223);
		}
	}
}

void func_378(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		if (func_380())
		{
			Global_2439138 = UNK_0xD803B885F5E47A62();
		}
		if (bParam3)
		{
			func_379(UNK_0x1B50683925F00106(iParam0), bParam1, 1, Global_2439138, bParam4, bParam5, fParam2, bParam6, bParam7, iParam8, bParam9);
		}
		else
		{
			func_379(UNK_0x1B50683925F00106(iParam0), bParam1, -1, Global_2439138, bParam4, bParam5, fParam2, bParam6, bParam7, iParam8, bParam9);
		}
	}
	else if (UNK_0xE4EDC4B0E92C078B(*bParam1))
	{
		func_62(bParam1);
	}
}

int func_379(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
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

bool func_380()
{
	return Global_1312854;
}

bool func_381(int iParam0)
{
	if (UNK_0x83F012E6200426DB(iParam0))
	{
		return true;
	}
	if (func_382(iParam0))
	{
		return true;
	}
	return false;
}

bool func_382(int iParam0)
{
	if (!UNK_0xBFF81ED3B99522C7())
	{
		return false;
	}
	if (!UNK_0xE5DBF9B6126856CA(iParam0))
	{
		return false;
	}
	if (func_383(iParam0))
	{
		return true;
	}
	return false;
}

bool func_383(int iParam0)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		UNK_0x8D30F6387EE75385(iParam0);
		return UNK_0x526BC32A660C89E6(iParam0);
	}
	return false;
}

int func_384()
{
	return Local_73.f_1;
}

int func_385(int iParam0)
{
	return vLocal_112[iParam0 /*3*/].f_1;
}

void func_386()
{
	func_55();
	func_357(11, 0);
	func_206(12, 116);
	UNK_0x0674E58A79778E99(&(Global_2439138.f_3766), false);
	UNK_0x0674E58A79778E99(&(Global_2439138.f_3766), true);
	if (UNK_0x8CD06866876216F2())
	{
		if (UNK_0x57270EE11514DC67() > -1)
		{
			vLocal_112[UNK_0x57270EE11514DC67() /*3*/] = 0;
		}
	}
	if (UNK_0x8CD06866876216F2())
	{
		if (UNK_0xBFF81ED3B99522C7())
		{
			if (UNK_0x23002DD5E7B94FD7(Local_73.f_3))
			{
				UNK_0xBD63401BCCEC233B(Local_73.f_3);
			}
			Local_73.f_3 = -1;
		}
	}
	if (UNK_0xE4EDC4B0E92C078B(Global_1661975))
	{
		UNK_0x142CC44DB769B57E(&Global_1661975);
	}
	UNK_0x0674E58A79778E99(&bLocal_211, 3);
	UNK_0x0674E58A79778E99(&bLocal_211, 4);
	iLocal_210 = 0;
	if (UNK_0xE4EDC4B0E92C078B(Local_223))
	{
		UNK_0x142CC44DB769B57E(&Local_223);
	}
	func_387();
}

void func_387()
{
	UNK_0x10FAF14A60A0DBE1();
}

bool func_388(bool bParam0, bool bParam1, bool bParam2)
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

bool func_389()
{
	var uVar0;

	func_397(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_396())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_395())
	{
		return true;
	}
	if (func_394(159))
	{
		if (!func_393())
		{
			return true;
		}
	}
	if (func_394(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_390() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_390()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_390()
{
	switch (func_392())
	{
		case 0:
			return func_391();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_391()
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

int func_392()
{
	return Global_30768;
}

bool func_393()
{
	return Global_2450632.f_598;
}

bool func_394(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_395()
{
	return Global_2460680;
}

bool func_396()
{
	return Global_2450632.f_593;
}

void func_397(var uParam0)
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
					func_398(iVar0);
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

void func_398(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_388(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_399(bVar4, &bVar5))
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

bool func_399(bool bParam0, bool bParam1)
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

void func_400()
{
	SYSTEM::WAIT(0);
}

void func_401(struct<21> Param0)
{
	func_404(func_405(Param0), Param0);
	func_403(0, -1, 0);
	UNK_0x9752E7BAEABA939E(&Local_73, 23);
	UNK_0x35B62793EAE9ADDF(&vLocal_112, 97);
	UNK_0x256D93AFAE851A7A(0);
	if (!func_402())
	{
		func_386();
	}
	UNK_0x5D96D8530B3D0904(&(Global_2439138.f_3766), false);
	UNK_0x0674E58A79778E99(&(Global_2439138.f_3766), true);
}

bool func_402()
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
		if (func_396())
		{
			return false;
		}
		if (func_394(157))
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

int func_403(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_387();
			}
			else
			{
				return 0;
			}
		}
		if (!func_380())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_387();
					}
					else
					{
						return 0;
					}
				}
				if (func_396())
				{
					if (!bParam2)
					{
						func_387();
					}
					else
					{
						return 0;
					}
				}
				if (func_394(157))
				{
					if (!bParam2)
					{
						func_387();
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
					func_387();
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
				func_387();
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
			func_387();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_404(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!UNK_0x8CD06866876216F2())
	{
		func_387();
	}
	UNK_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_405(int iParam0)
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

