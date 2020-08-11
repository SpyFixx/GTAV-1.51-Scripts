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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
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
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	bool bLocal_48 = false;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	vector3 vLocal_51[16] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_100[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_117 = { 0f, 0f, 0f };
	vector3 vLocal_120 = { 0f, 0f, 0f };
	vector3 vLocal_123 = { 0f, 0f, 0f };
	vector3 vLocal_126 = { 0f, 0f, 0f };
	bool bLocal_129 = false;
	vector3 vLocal_130 = { 0f, 0f, 0f };
	vector3 vLocal_133 = { 0f, 0f, 0f };
	bool bLocal_136 = false;
	vector3 vLocal_137 = { 0f, 0f, 0f };
	vector3 vLocal_140 = { 0f, 0f, 0f };
	bool bLocal_143 = false;
	vector3 vLocal_144 = { 0f, 0f, 0f };
	vector3 vLocal_147 = { 0f, 0f, 0f };
	bool bLocal_150 = false;
	vector3 vLocal_151 = { 0f, 0f, 0f };
	vector3 vLocal_154 = { 0f, 0f, 0f };
	bool bLocal_157 = false;
	vector3 vLocal_158 = { 0f, 0f, 0f };
	vector3 vLocal_161 = { 0f, 0f, 0f };
	bool bLocal_164 = false;
	vector3 vLocal_165 = { 0f, 0f, 0f };
	vector3 vLocal_168 = { 0f, 0f, 0f };
	bool bLocal_171 = false;
	bool bLocal_172 = false;
	bool bLocal_173 = false;
	bool bLocal_174 = false;
	bool bLocal_175 = false;
	bool bLocal_176 = false;
	bool bLocal_177 = false;
	bool bLocal_178 = false;
	bool bLocal_179 = false;
	bool bLocal_180 = false;
	bool bLocal_181 = false;
	bool bLocal_182 = false;
	bool bLocal_183 = false;
	float fLocal_184 = 0f;
	float fLocal_185 = 0f;
	var uLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	bool bLocal_193[2] = { false, false };
	int iLocal_196[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_213 = false;
	bool bLocal_214 = false;
	bool bLocal_215 = false;
	int iLocal_216[4] = { 0, 0, 0, 0 };
	int iLocal_221[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_228 = 0;
	int iLocal_229[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
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
	var uLocal_272 = 8;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 4;
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
	var uLocal_291 = 4;
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
	var uLocal_306 = 4;
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
	var uLocal_321 = 4;
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
	var uLocal_336 = 4;
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
	var uLocal_351 = 4;
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
	var uLocal_366 = 4;
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
	var uLocal_381 = 4;
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
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	bool bLocal_401 = false;
	bool bLocal_402 = false;
	bool bLocal_403 = false;
	bool bLocal_404 = false;
	bool bLocal_405 = false;
	bool bLocal_406 = false;
	bool bLocal_407 = false;
	bool bLocal_408 = false;
	char* sLocal_409 = NULL;
	bool bLocal_410 = false;
	var uLocal_411 = 16;
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
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	bool bLocal_576 = false;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	vLocal_117 = { -1109.213f, 4914.744f, 216.101f };
	vLocal_120 = { -1034.6f, 4918.6f, 205.9f };
	vLocal_123 = { -1066.963f, 4873.13f, 207.3281f };
	vLocal_126 = { -1112.946f, 4986.957f, 241.133f };
	bLocal_129 = 72.3125f;
	vLocal_130 = { -1138.386f, 4872.04f, 207.5488f };
	vLocal_133 = { -1091.959f, 4983.27f, 241.1698f };
	bLocal_136 = 57.8125f;
	vLocal_137 = { -1171.648f, 4888.658f, 211.0756f };
	vLocal_140 = { -1137.907f, 4926.572f, 240.999f };
	bLocal_143 = 17.9375f;
	vLocal_144 = { -1177.981f, 4903.231f, 212.477f };
	vLocal_147 = { -1153.398f, 4902.631f, 241.155f };
	bLocal_150 = 17.9375f;
	vLocal_151 = { -1175.693f, 4904.839f, 207.5207f };
	vLocal_154 = { -1142.08f, 4985.32f, 241.2887f };
	bLocal_157 = 36.375f;
	vLocal_158 = { -1106.212f, 4860.086f, 206.1207f };
	vLocal_161 = { -1105.016f, 4873.854f, 241.1453f };
	bLocal_164 = 11.5625f;
	vLocal_165 = { -1044.268f, 4916.587f, 209.8365f };
	vLocal_168 = { -1063.605f, 4972.88f, 241.1299f };
	bLocal_171 = 12.875f;
	iLocal_192 = 4;
	bLocal_401 = "REPLAY_TMG";
	bLocal_402 = "CMN_TDIED";
	if (UNK_0x2EBF608FFE6CA406(26))
	{
		func_196();
	}
	if (UNK_0x8F7DE34FFB67592B())
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (UNK_0x338D6FF72D84D90F() || bLocal_173)
		{
			UNK_0x51B096AAC60548C1(0f);
			switch (iLocal_50)
			{
				case 0:
					if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						if (Global_111638.f_24990.f_5 >= iLocal_192 && !func_195())
						{
							iLocal_50 = 2;
						}
						func_192();
						func_189();
					}
					break;
				case 1:
					UNK_0x34FABD75496259E4(UNK_0xD803B885F5E47A62());
					if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						if (SYSTEM::TIMERA() > 2000)
						{
							if (iLocal_187 == 1)
							{
								func_188();
							}
							else if (iLocal_187 == 2)
							{
								func_159();
							}
						}
						if (SYSTEM::TIMERA() > 1300)
						{
							if (iLocal_189 < 3)
							{
								func_158();
							}
							else
							{
								func_157();
							}
						}
						if (bLocal_174)
						{
							func_144(26, 1);
							bLocal_174 = false;
							iLocal_50 = 0;
						}
					}
					break;
				case 2:
					UNK_0x34FABD75496259E4(UNK_0xD803B885F5E47A62());
					if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						func_116();
					}
					UNK_0x1BA7FCEAFCE8D46E(Global_40554[9 /*31*/], 0, false, true);
					UNK_0x1BA7FCEAFCE8D46E(Global_40554[10 /*31*/], 0, false, true);
					break;
				case 4:
					if (!UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
					{
						iLocal_50 = 3;
					}
					else
					{
						bLocal_175 = false;
						UNK_0x51B096AAC60548C1(0f);
						iVar0 = 0;
						while (iVar0 < iLocal_196)
						{
							if (UNK_0xEB6A8945D1AC98A1(iLocal_196[iVar0]))
							{
								if (UNK_0xE4EDC4B0E92C078B(iLocal_229[iVar0]))
								{
									UNK_0x142CC44DB769B57E(&(iLocal_229[iVar0]));
								}
							}
							else
							{
								if (UNK_0x46BC6F5F089F3AFF(iLocal_196[iVar0]))
								{
									if (UNK_0xE4EDC4B0E92C078B(iLocal_229[iVar0]))
									{
										UNK_0x142CC44DB769B57E(&(iLocal_229[iVar0]));
									}
								}
								else if (UNK_0x12DE711B1C681E9E(iLocal_196[iVar0], UNK_0x16F2683693E537C9(), 30f, 30f, 30f, 0, 1, 0))
								{
									if (!func_115())
									{
										if (iLocal_191 < UNK_0x1C0640BA9A7327B3())
										{
											iVar1 = UNK_0x09AC81E49EA267F7(false, 3);
											if (iVar1 == 0)
											{
												func_100(&uLocal_411, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
											}
											else if (iVar1 == 1)
											{
												func_99(&uLocal_411, 1, iLocal_196[iVar0], "ACULTMember1", 0, 1);
												func_100(&uLocal_411, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
											}
											else if (iVar1 == 2)
											{
												func_99(&uLocal_411, 2, iLocal_196[iVar0], "ACULTMember2", 0, 1);
												func_100(&uLocal_411, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
											}
											iLocal_191 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(4500, 6000));
										}
									}
								}
								bLocal_175 = true;
							}
							iVar0++;
						}
						if (!bLocal_175)
						{
							func_63();
						}
						Jump @1353; //curOff = 1107
						if (!bLocal_173)
						{
							iLocal_249 = func_62();
							if (!UNK_0x83D8570832F172A7(iLocal_249))
							{
							}
							else
							{
								func_61(&uLocal_254, 0);
								bLocal_173 = true;
								if (func_32(&uLocal_254, &uLocal_260, &iLocal_249, bLocal_401, bLocal_402, &bLocal_172, 78))
								{
									iLocal_190 = 0;
									UNK_0x51732B934211201A(bLocal_410);
									UNK_0x5C47E2DDD9F51FC0(iLocal_248);
									iVar0 = 0;
									while (iVar0 < iLocal_196)
									{
										if (UNK_0xC844350D5D58C99A(iLocal_196[iVar0]))
										{
											UNK_0xEBA53F35D0085654(&(iLocal_196[iVar0]));
										}
										iVar0++;
									}
									iVar0 = 0;
									while (iVar0 < iLocal_221)
									{
										if (UNK_0xC844350D5D58C99A(iLocal_221[iVar0]))
										{
											UNK_0xF690C84DADBB3551(&(iLocal_221[iVar0]));
										}
										iVar0++;
									}
									if (UNK_0x9F4FE516EAACCFC5(iLocal_246))
									{
										UNK_0xE3BB8E05FCEB3FBE(iLocal_246, false);
									}
									if (UNK_0xC844350D5D58C99A(bLocal_215))
									{
										UNK_0xF690C84DADBB3551(&bLocal_215);
									}
									if (UNK_0xC844350D5D58C99A(bLocal_215))
									{
										UNK_0xF690C84DADBB3551(&bLocal_215);
									}
									if (bLocal_172)
									{
										func_11();
										func_3(0);
										func_1(1);
										bLocal_173 = false;
										iLocal_50 = 2;
									}
									else
									{
										bLocal_173 = false;
										func_196();
									}
								}
							}
							Jump @1368; //curOff = 1353
							if (bLocal_177)
							{
							}
							else
							{
								func_196();
							}
						}
					}
					default:
						break;
			}
		}
	}
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x67E5ECB8FD7F5018(0);
		UNK_0x65C5EBCA17A891FC(1);
		UNK_0x2C84016B4A95F6BA(0);
		func_2(1);
		Global_94002 = 1;
	}
	else
	{
		UNK_0x67E5ECB8FD7F5018(1);
		UNK_0x65C5EBCA17A891FC(0);
		UNK_0x2C84016B4A95F6BA(1);
		func_2(0);
		Global_94002 = 0;
	}
}

void func_2(bool bParam0)
{
	if ((Global_41431 == 9 || Global_41431 == 10) || Global_41431 == 5)
	{
		Global_110287 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_110287 = 0;
	}
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
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

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
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
	if (!func_5())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_5()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
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

bool func_7()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_8()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

bool func_9(int iParam0)
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

void func_10()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_11()
{
	func_22();
	func_14(0, 1);
	func_12(0, 1);
}

void func_12(int iParam0, bool bParam1)
{
	if (iParam0 == 1)
	{
		func_14(0, 0);
		UNK_0x82A772610883F395("DeathFailOut", 0, 0);
		UNK_0x5D96D8530B3D0904(&bLocal_48, true);
		func_13(1, 2, 0);
		UNK_0x4AED3E7834924DC8(2);
	}
	else
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_48, true) || bParam1)
		{
			UNK_0x9A1335ECD7BD117F("DeathFailOut");
			func_13(0, 2, 1);
			UNK_0x4AED3E7834924DC8(0);
		}
		UNK_0x0674E58A79778E99(&bLocal_48, true);
	}
}

void func_13(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&bLocal_48, 2);
		if (!UNK_0x8CD06866876216F2())
		{
			if (iParam1 == 1)
			{
				UNK_0x9A82EEAF6CA12AEE(0.2f);
			}
			else
			{
				UNK_0x9A82EEAF6CA12AEE(0.075f);
			}
		}
	}
	else
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_48, 2) || bParam2)
		{
			if (!UNK_0x8CD06866876216F2())
			{
				UNK_0x9A82EEAF6CA12AEE(1f);
			}
		}
		UNK_0x0674E58A79778E99(&bLocal_48, 2);
	}
}

void func_14(int iParam0, bool bParam1)
{
	bool bVar0;

	switch (func_15())
	{
		case 0:
			bVar0 = "DeathFailMichaelIn";
			break;
		case 1:
			bVar0 = "DeathFailFranklinIn";
			break;
		case 2:
			bVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_48, false) || bParam1)
		{
			UNK_0x82A772610883F395(bVar0, 0, 0);
			UNK_0x5D96D8530B3D0904(&bLocal_48, false);
			func_13(1, 1, 0);
			UNK_0x4AED3E7834924DC8(1);
		}
	}
	else
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_48, false) || bParam1)
		{
			UNK_0x9A1335ECD7BD117F(bVar0);
			func_13(0, 1, 1);
			UNK_0x4AED3E7834924DC8(0);
		}
		UNK_0x0674E58A79778E99(&bLocal_48, false);
	}
}

int func_15()
{
	func_16();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_16()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_20(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_19(UNK_0x16F2683693E537C9());
			if (func_18(iVar0) && (!func_17(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_18(Global_111638.f_2358.f_539.f_4321))
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

bool func_17(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_18(int iParam0)
{
	return iParam0 < 3;
}

int func_19(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_20(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_20(int iParam0)
{
	if (func_18(iParam0))
	{
		return func_21(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_21(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_22()
{
	bLocal_48 = false;
	iLocal_49 = 0;
	func_23(0, 1, 1, 0, 0, 0);
	func_3(1);
}

void func_23(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_31(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_5())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_30(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_31(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_30(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_28(UNK_0xD803B885F5E47A62())) && !func_25(UNK_0xD803B885F5E47A62(), 0)) && !func_24()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_28(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_24()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_25(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_26(-1, 0) == 8;
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

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

int func_27()
{
	return Global_1312745;
}

bool func_28(bool bParam0)
{
	if (func_25(bParam0, 0))
	{
		return true;
	}
	if (func_29())
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

bool func_29()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_30(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

void func_31(int iParam0)
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

bool func_32(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			UNK_0x8BC9595FD2792B5D("DEATH_SCENE");
			UNK_0x4D7F4CC43D4D0DE3(-1, "ScreenFlash", "WastedSounds", 1);
			func_60(&(uParam0->f_1));
			func_22();
			func_59(uParam1, (0.15f * 0.075f), 0.5f);
			UNK_0x31A33F7BCB08CB80(true);
			break;
		case 1:
			if (func_57() || UNK_0x757EF87A33649210())
			{
				*uParam0 = 2;
			}
			if (!func_56(uParam0->f_4, 4))
			{
				if (UNK_0xAE317D00A5A55DF6("OFFMISSION_WASTED", 0, -1))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "Bed", "WastedSounds", 1);
					func_54(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!func_56(uParam0->f_4, 2))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "TextHit", "WastedSounds", 1);
					func_54(&(uParam0->f_4), 2);
				}
				func_33(iParam2, uParam1, bParam3, bParam4, bParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072 /* Float: 15f */, 0);
			}
			break;
		case 2:
			if (func_33(iParam2, uParam1, bParam3, bParam4, bParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072 /* Float: 15f */, 1))
			{
				func_14(0, 1);
				func_12(0, 1);
				func_22();
				if (*bParam5)
				{
					UNK_0x4DB69487E1A9EE2A(1);
				}
				else if (!uParam0->f_5)
				{
					func_2(0);
				}
				UNK_0x31A33F7BCB08CB80(false);
				UNK_0x65C5EBCA17A891FC(0);
				*uParam0 = 3;
			}
			break;
		case 3:
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				UNK_0x67E5ECB8FD7F5018(1);
				func_14(0, 1);
				func_12(0, 1);
				UNK_0x8910D3D58E0132B8("DEATH_SCENE");
				UNK_0x31A33F7BCB08CB80(false);
				return true;
			}
			break;
		case 4:
			UNK_0x31A33F7BCB08CB80(false);
			return true;
	}
	return false;
}

bool func_33(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!UNK_0x757EF87A33649210() || UNK_0xD0BB2359EC70FC37())
			{
				UNK_0x53491B90E4FD0E56(2500);
				UNK_0xC2127C0F64D6A3B9();
			}
			if (bParam9)
			{
				UNK_0x31A33F7BCB08CB80(true);
			}
			UNK_0x9A82EEAF6CA12AEE(0.2f);
			if (func_53(iParam5, 4))
			{
				if (UNK_0xAE317D00A5A55DF6("generic_failed", 0, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		case 1:
			UNK_0x7E60C62A7CE58FC8(*iParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			UNK_0x7ACC3006A87F8B39("STRING");
			UNK_0x3A820E495A7BA3E5(6);
			UNK_0x6B012227B3921E18(bParam2);
			UNK_0x779B34565F4D71B1();
			func_52(bParam3);
			UNK_0x3CAEA85DA607305E(100);
			UNK_0x1200CC973A2399C8(true);
			UNK_0x7A8BB56B212464AC();
			if (func_53(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					UNK_0x7E60C62A7CE58FC8(*iParam0, "TRANSITION_UP");
					UNK_0x7C19E5E4784BD7CF(uParam1->f_134);
					UNK_0x7E60D21B163E9D56();
					uParam1->f_136 = 1;
				}
			}
			if (!func_53(iParam5, 1))
			{
				UNK_0x5EEBDFEE72949D59(0);
			}
			func_51(&(uParam1->f_10), 0, 1, 1, 1);
			func_50(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_50(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_53(iParam5, 4))
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_53(iParam5, 8))
			{
				switch (func_15())
				{
					case 0:
						UNK_0x82A772610883F395("MinigameEndMichael", 500, 0);
						break;
					case 1:
						UNK_0x82A772610883F395("MinigameEndFranklin", 500, 0);
						break;
					case 2:
						UNK_0x82A772610883F395("MinigameEndTrevor", 500, 0);
						break;
				}
			}
			if (!func_49(&(uParam1->f_1)))
			{
				func_48(&(uParam1->f_1));
			}
			if (func_53(iParam5, 2))
			{
				if (!func_49(&(uParam1->f_4)))
				{
					func_48(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		case 2:
			UNK_0xBD706C594F6DCD4A();
			if (func_53(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					UNK_0x7E60C62A7CE58FC8(*iParam0, "TRANSITION_UP");
					UNK_0x7C19E5E4784BD7CF(uParam1->f_134);
					UNK_0x7E60D21B163E9D56();
					uParam1->f_136 = 1;
				}
			}
			UNK_0xD9ACBBA59FD5A09E(iParam6);
			func_46(iParam0, 0, 0);
			if (!func_53(iParam5, 16) && (func_44(&(uParam1->f_1)) >= uParam1->f_135 || UNK_0x757EF87A33649210()))
			{
				func_38(&(uParam1->f_10), 1128792064 /* Float: 200f */, iParam6, bParam7, 1, 1065353216 /* Float: 1f */);
				UNK_0x5D80F91A16C40CDE();
				if (UNK_0xB9132A06AE472728(2, 201))
				{
					uParam1->f_138 = 1;
					UNK_0x4D7F4CC43D4D0DE3(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_53(iParam5, 1))
					{
						UNK_0x18B28213EC89540F(0);
					}
					func_37(&(uParam1->f_10));
					*uParam1 = 3;
					return false;
				}
				else if (UNK_0xB9132A06AE472728(2, 202))
				{
					uParam1->f_138 = 0;
					UNK_0x4D7F4CC43D4D0DE3(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_53(iParam5, 1))
					{
						UNK_0x18B28213EC89540F(0);
					}
					func_37(&(uParam1->f_10));
					*uParam1 = 3;
					return false;
				}
			}
			if (func_53(iParam5, 2))
			{
				if (func_44(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					UNK_0x4D7F4CC43D4D0DE3(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_53(iParam5, 1))
					{
						UNK_0x18B28213EC89540F(0);
					}
					func_37(&(uParam1->f_10));
					*uParam1 = 3;
					return false;
				}
			}
			break;
		case 3:
			func_46(iParam0, 0, 0);
			UNK_0x9A82EEAF6CA12AEE(1f);
			if (uParam1->f_138 || !((UNK_0x7F8A39872A07D2CE("stunt_plane_races", UNK_0xBB0808A181D4745C()) || UNK_0x7F8A39872A07D2CE("pilot_school", UNK_0xBB0808A181D4745C())) || (UNK_0x7F8A39872A07D2CE("bj", UNK_0xBB0808A181D4745C()) && UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))))
			{
				UNK_0x82E51BCA72537B6C(2500);
			}
			if (func_53(iParam5, 64) && uParam1->f_138)
			{
				UNK_0x53491B90E4FD0E56(500);
			}
			func_34(&(uParam1->f_4));
			if (bParam9)
			{
				UNK_0x31A33F7BCB08CB80(false);
			}
			*uParam1 = 4;
			break;
		case 4:
			if (func_44(&(uParam1->f_4)) <= 0.1f)
			{
				func_46(iParam0, 0, 0);
			}
			else
			{
				*bParam4 = uParam1->f_138;
				return true;
			}
			break;
	}
	return false;
}

void func_34(bool bParam0)
{
	func_35(bParam0, 0f);
}

void func_35(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_36(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

float func_36(bool bParam0)
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

void func_37(int iParam0)
{
	if (*iParam0 != 0)
	{
		UNK_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_123 = 0;
}

void func_38(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;

	if (((UNK_0xD0BB2359EC70FC37() || UNK_0x7BCE0E6DD4A1F749()) || UNK_0x757EF87A33649210()) || UNK_0x06980BB66EBA4D95())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_43(uParam0))
	{
		return;
	}
	UNK_0xBD706C594F6DCD4A();
	UNK_0xD9ACBBA59FD5A09E(iParam2);
	if (!func_53(uParam0->f_1, 256) || (func_53(uParam0->f_1, 8192) && UNK_0xB8E3620B82AD47D7(2)))
	{
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_CLEAR_SPACE");
		UNK_0x7C19E5E4784BD7CF(bParam1);
		UNK_0x7E60D21B163E9D56();
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_MAX_WIDTH");
		UNK_0x7C19E5E4784BD7CF(bParam5);
		UNK_0x7E60D21B163E9D56();
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT_EMPTY");
		UNK_0x7E60D21B163E9D56();
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			UNK_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			UNK_0x1200CC973A2399C8(func_53(uParam0->f_1, 4096));
			UNK_0x7E60D21B163E9D56();
		}
		bVar5 = false;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				case 1:
					bVar4 = UNK_0x91E3F625EF57450D(2);
					break;
				case 2:
					bVar4 = !UNK_0x91E3F625EF57450D(2);
					break;
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT"))
				{
					UNK_0x3CAEA85DA607305E(bVar5);
					bVar5++;
					bVar7 = false;
					while (bVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
						bVar2 = UNK_0xEAE0D21A50E6C7F4(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
						if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_2[iVar6 /*15*/].f_12, bVar7))
						{
							bVar3 = UNK_0xF59058FCB716F903(iVar0, iVar1, bVar2);
						}
						else
						{
							bVar3 = UNK_0xE32F7AC5E6DF304A(iVar0, iVar1, bVar2);
						}
						if (!UNK_0xEA6BC48857E0AC4C(bVar3))
						{
							func_42(bVar3);
						}
						bVar7++;
					}
					if (!UNK_0xEA6BC48857E0AC4C(uParam0->f_2[iVar6 /*15*/]))
					{
						func_52(uParam0->f_2[iVar6 /*15*/]);
					}
					if (UNK_0x0EFF6B4415DAF4A1())
					{
						if (func_53(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								UNK_0x1200CC973A2399C8(true);
								UNK_0x3CAEA85DA607305E(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								UNK_0x1200CC973A2399C8(false);
								UNK_0x3CAEA85DA607305E(-1);
							}
						}
					}
					UNK_0x7E60D21B163E9D56();
				}
			}
			iVar6++;
		}
		bVar8 = func_41(bParam4, func_41(func_53(uParam0->f_1, 32), 1f, 0f), -1f);
		UNK_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		UNK_0x7C19E5E4784BD7CF(bVar8);
		UNK_0x7E60D21B163E9D56();
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_BACKGROUND_COLOUR");
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(80f);
		UNK_0x7E60D21B163E9D56();
		func_40(&(uParam0->f_1), 256);
		func_39(&(uParam0->f_1), 128);
	}
	UNK_0x6567AE843FADBA94(*uParam0, 255, 255, 255, false, 0);
}

void func_39(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_40(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_41(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_42(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

bool func_43(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (UNK_0x83D8570832F172A7(*uParam0))
		{
			func_40(&(uParam0->f_1), 1);
			return true;
		}
	}
	return false;
}

float func_44(var uParam0)
{
	if (func_49(uParam0))
	{
		if (func_45(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_36(UNK_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_45(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

int func_46(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_49(&(iParam0->f_2)))
	{
		func_34(&(iParam0->f_2));
	}
	UNK_0x3584F71E5CA29322(14);
	if (!bParam2)
	{
		UNK_0x6567AE843FADBA94(*iParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		UNK_0x6567AE843FADBA94(*iParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (UNK_0x06F8112AA79C53D9(2, 201))
		{
			return 0;
		}
	}
	if (iParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_44(&(iParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(iParam0->f_1)
	{
		func_47(&(iParam0->f_2));
		return 0;
	}
	return 1;
}

void func_47(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_48(bool bParam0)
{
	if (!func_49(bParam0))
	{
		func_34(bParam0);
	}
}

bool func_49(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, true);
}

int func_50(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_2[iVar1 /*15*/].f_13), false);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_51(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = UNK_0x5275223F099DEF26("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_40(&(uParam0->f_1), 32);
	}
	if (UNK_0x83D8570832F172A7(*uParam0))
	{
		func_40(&(uParam0->f_1), 1);
		if (bParam2)
		{
			UNK_0x5461A9D388F592B4(*uParam0, 1);
		}
	}
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (bParam3)
		{
			func_40(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_40(&(uParam0->f_1), 8192);
	}
}

void func_52(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

bool func_53(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_54(var uParam0, int iParam1)
{
	func_55(uParam0, iParam1);
}

void func_55(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_56(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_57()
{
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_48, false) && !UNK_0xEAE0D21A50E6C7F4(bLocal_48, true))
	{
		SYSTEM::SETTIMERA(0);
		func_14(1, 0);
	}
	if (!UNK_0x22A8E52414415B76())
	{
		UNK_0x790015DC92C918E2();
	}
	UNK_0x38C3A68D7861DCFD(2, 199, 1);
	UNK_0x38C3A68D7861DCFD(0, 59, 1);
	UNK_0x38C3A68D7861DCFD(0, 60, 1);
	UNK_0x38C3A68D7861DCFD(0, 37, 1);
	UNK_0x38C3A68D7861DCFD(0, 25, 1);
	UNK_0x95235C19032FCE7D();
	if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_48, true))
		{
			func_12(1, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if (IntToFloat(SYSTEM::TIMERB()) > (1500f * 0.075f) || UNK_0x757EF87A33649210())
		{
			if (!UNK_0x757EF87A33649210())
			{
				if (!UNK_0xD0BB2359EC70FC37())
				{
					UNK_0x53491B90E4FD0E56(1500);
				}
			}
			else if (iLocal_49 == 0)
			{
				iLocal_49 = UNK_0x1C0640BA9A7327B3() + 1000;
				if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
				}
				func_13(0, 2, 1);
				func_23(1, 1, 1, 0, 0, 0);
				func_3(1);
				UNK_0x7BBABEC524CBF883(0);
				UNK_0x86E4B20DE8E91A57(0);
				UNK_0xA37A90C62806D848(1);
				UNK_0x790015DC92C918E2();
				if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
				}
				func_14(0, 0);
				func_58(0);
			}
			else if (UNK_0x1C0640BA9A7327B3() < iLocal_49)
			{
				return true;
			}
		}
	}
	return false;
}

void func_58(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_48, 3))
			{
				UNK_0x21387C9EECC2B220(true);
				UNK_0x5D96D8530B3D0904(&bLocal_48, 3);
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bLocal_48, 3))
		{
			UNK_0x21387C9EECC2B220(false);
			UNK_0x0674E58A79778E99(&bLocal_48, 3);
		}
	}
}

void func_59(var uParam0, float fParam1, float fParam2)
{
	if (func_49(&(uParam0->f_1)))
	{
		func_47(&(uParam0->f_1));
	}
	if (func_49(&(uParam0->f_4)))
	{
		func_47(&(uParam0->f_4));
	}
	func_37(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_60(bool bParam0)
{
	if (!func_49(bParam0))
	{
		func_48(bParam0);
	}
	else
	{
		func_34(bParam0);
	}
}

void func_61(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	UNK_0xAE317D00A5A55DF6("OFFMISSION_WASTED", 0, -1);
}

int func_62()
{
	return UNK_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
}

void func_63()
{
	if (!bLocal_176)
	{
		UNK_0x837C600ECEE8ABA2("COUNTRYSIDE_ALTRUIST_CULT_01", false);
		Global_111638.f_24990.f_5 = 1000;
		UNK_0x63D66B3917B1F596(64);
		Global_111638.f_20559.f_472 = 54;
		iLocal_399 = UNK_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
		func_98(1);
		while (!UNK_0x83D8570832F172A7(iLocal_399))
		{
			SYSTEM::WAIT(0);
		}
		UNK_0x7E60C62A7CE58FC8(iLocal_399, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_52("CULT_PASS");
		UNK_0x7A8BB56B212464AC();
		while (!func_97())
		{
			SYSTEM::WAIT(0);
		}
		func_96();
		SYSTEM::SETTIMERA(0);
		UNK_0x4D7F4CC43D4D0DE3(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
		bLocal_176 = true;
	}
	UNK_0x6567AE843FADBA94(iLocal_399, 255, 255, 255, 255, 0);
	if (!bLocal_178)
	{
		if (SYSTEM::TIMERA() > 9500)
		{
			UNK_0x7E60C62A7CE58FC8(iLocal_399, "SHARD_ANIM_OUT");
			UNK_0x3CAEA85DA607305E(true);
			UNK_0x7C19E5E4784BD7CF(0.33f);
			UNK_0x7E60D21B163E9D56();
			bLocal_178 = true;
		}
	}
	if (SYSTEM::TIMERA() > 10000)
	{
		if (UNK_0x83D8570832F172A7(iLocal_399))
		{
			UNK_0xE17FDF9E3068281B(&iLocal_399);
			func_98(0);
		}
		while (UNK_0x0EB28750412C3A5A(func_95(UNK_0xD803B885F5E47A62()), vLocal_117, 1) < 209f && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			SYSTEM::WAIT(0);
		}
		func_64(18);
		func_196();
	}
}

void func_64(int iParam0)
{
	char cVar0[64];

	if (iParam0 == -1)
	{
		iParam0 = func_93();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_92())
	{
		func_70(iParam0);
		UNK_0x974531784BE14213(0, 0);
		Global_111629 = UNK_0x1C0640BA9A7327B3();
		func_69(30000);
		StringCopy(&cVar0, func_68(Global_111627, 1), 64);
		if (func_67(Global_111627) > 0)
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
	func_66(&Global_30827);
	Global_111628 = 0;
	func_65(-1);
}

void func_65(int iParam0)
{
	Global_111627 = iParam0;
}

void func_66(var uParam0)
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

int func_67(int iParam0)
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

char* func_68(int iParam0, bool bParam1)
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

void func_69(int iParam0)
{
	Global_41982 = (UNK_0x1C0640BA9A7327B3() + iParam0);
}

void func_70(int iParam0)
{
	func_71(iParam0, 0, func_91(iParam0));
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;

	uVar0 = func_90();
	func_81(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_80(iParam0, &uVar0);
	Var1 = { func_72(&uVar0) };
}

struct<16> func_72(var uParam0)
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, "", 64);
	iVar16 = func_79(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_78(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_77(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_76(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_75(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_73(*uParam0), 64);
	return Var0;
}

int func_73(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_74(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_74(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_75(int iParam0)
{
	return iParam0 & 15;
}

int func_76(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_77(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_78(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_79(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_80(int iParam0, var uParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *uParam1;
}

void func_81(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_73(*uParam0);
	iVar1 = func_75(*uParam0);
	iVar2 = func_76(*uParam0);
	iVar3 = func_79(*uParam0);
	iVar4 = func_78(*uParam0);
	iVar5 = func_77(*uParam0);
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
	iVar6 = func_89(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_89(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_82(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_82(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, iParam1);
	func_87(uParam0, iParam2);
	func_86(uParam0, iParam3);
	func_85(uParam0, iParam5);
	func_84(uParam0, iParam4);
	func_83(uParam0, iParam6);
}

void func_83(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_84(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_75(*uParam0);
	iVar1 = func_73(*uParam0);
	if (iParam1 < 1 || iParam1 > func_89(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_85(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_86(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_87(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_88(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_89(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
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

var func_90()
{
	var uVar0;

	func_88(&uVar0, UNK_0x4460E481B9E33ADA());
	func_87(&uVar0, UNK_0x8D199E381D262EEF());
	func_86(&uVar0, UNK_0xD8A54335F18763BA());
	func_84(&uVar0, UNK_0x972A296334C9D57B());
	func_85(&uVar0, UNK_0x118229AD063C3C1D());
	func_83(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

int func_91(int iParam0)
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

bool func_92()
{
	if ((Global_111627 == func_93() && UNK_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return true;
	}
	return false;
}

int func_93()
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, UNK_0xBB0808A181D4745C(), 64);
	iVar16 = func_94(Var0);
	return iVar16;
}

int func_94(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

Vector3 func_95(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

void func_96()
{
	Global_31005 = 0;
	Global_31006 = 0;
	Global_31008 = 0;
	Global_31009 = 0;
	Global_31010 = 0;
}

bool func_97()
{
	return true;
}

void func_98(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

void func_99(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

int func_100(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_114(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_101(sParam2, iParam3, 0);
}

int func_101(char* sParam0, int iParam1, bool bParam2)
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
					func_113();
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
		if (func_112(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_111();
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
				func_110();
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
				if (func_109())
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
			if (func_5())
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
			func_108();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_107();
		func_102();
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
		func_113();
	}
	return 0;
}

void func_102()
{
	if (!func_103())
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

bool func_103()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_106())
	{
		return false;
	}
	if (func_104(UNK_0xD803B885F5E47A62()))
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

bool func_104(int iParam0)
{
	return func_105(iParam0, 20);
}

bool func_105(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_106()
{
	return -1;
}

void func_107()
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

void func_108()
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

bool func_109()
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

void func_110()
{
	if (func_17(14))
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
		Global_19486 = func_15();
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

void func_111()
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

bool func_112(bool bParam0, int iParam1)
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

void func_113()
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

void func_114(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_115()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_116()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	switch (iLocal_190)
	{
		case 0:
			UNK_0x8225571BCEE038F8("THUNDER", 20f);
			if (!UNK_0x39B7A3CCD2467CAB())
			{
				UNK_0xAE1670DD12E839C3("ac_ig_3_p3_b", 8);
			}
			UNK_0x523BCC9DC80CD82F(joaat("A_M_O_ACULT_02"));
			UNK_0x523BCC9DC80CD82F(joaat("A_M_Y_ACULT_02"));
			UNK_0x523BCC9DC80CD82F(joaat("PROP_BOX_WOOD03A"));
			UNK_0x523BCC9DC80CD82F(joaat("PROP_BOX_WOOD04A"));
			UNK_0x523BCC9DC80CD82F(joaat("PROP_BOX_WOOD05A"));
			UNK_0x523BCC9DC80CD82F(joaat("PROP_SECURITY_CASE_01"));
			while ((((((!func_143() || !UNK_0xB87F6CF6E5628C67(joaat("A_M_O_ACULT_02"))) || !UNK_0xB87F6CF6E5628C67(joaat("A_M_Y_ACULT_02"))) || !UNK_0xB87F6CF6E5628C67(joaat("PROP_BOX_WOOD03A"))) || !UNK_0xB87F6CF6E5628C67(joaat("PROP_BOX_WOOD04A"))) || !UNK_0xB87F6CF6E5628C67(joaat("PROP_BOX_WOOD05A"))) || !UNK_0xB87F6CF6E5628C67(joaat("PROP_SECURITY_CASE_01")))
			{
				SYSTEM::WAIT(0);
			}
			bLocal_576 = func_136(UNK_0x16F2683693E537C9(), joaat("WEAPON_ASSAULTRIFLE"), 1, 0, 0, 0, 0, 0, 0);
			if (UNK_0xC844350D5D58C99A(bLocal_576))
			{
				UNK_0x29E8331978B73E7F(bLocal_576, "Trevors_weapon", 0, false, 0);
			}
			UNK_0x29E8331978B73E7F(false, "Rifle_Mag1^1", 3, UNK_0xE8213142E3A84F79(joaat("COMPONENT_ASSAULTRIFLE_CLIP_01")), 0);
			if (func_143() && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				UNK_0x29E8331978B73E7F(UNK_0x16F2683693E537C9(), "TREVOR", 0, false, 0);
				UNK_0x29E8331978B73E7F(iLocal_196[11], "Cult_Master", 2, joaat("A_M_O_ACULT_02"), 0);
				UNK_0x29E8331978B73E7F(iLocal_196[12], "Rear_Cult", 2, joaat("A_M_O_ACULT_02"), 0);
				UNK_0x29E8331978B73E7F(iLocal_196[13], "Left_Old_Cult", 2, joaat("A_M_O_ACULT_02"), 0);
				UNK_0x29E8331978B73E7F(iLocal_196[14], "Carbine_Cult", 2, joaat("A_M_Y_ACULT_02"), 0);
				UNK_0x29E8331978B73E7F(iLocal_196[15], "Shotgun_Cult", 2, joaat("A_M_Y_ACULT_02"), 0);
				UNK_0x4C902758BEA97C68(0);
			}
			SYSTEM::WAIT(0);
			if (!bLocal_172 && Global_111638.f_24990.f_5 != 1000)
			{
				func_135();
			}
			if (UNK_0xC844350D5D58C99A(iLocal_196[0]))
			{
				UNK_0xEBA53F35D0085654(&(iLocal_196[0]));
			}
			if (UNK_0xC844350D5D58C99A(iLocal_196[1]))
			{
				UNK_0xEBA53F35D0085654(&(iLocal_196[1]));
			}
			if (UNK_0x9F4FE516EAACCFC5(iLocal_246))
			{
				UNK_0xE3BB8E05FCEB3FBE(iLocal_246, false);
			}
			if (UNK_0xC844350D5D58C99A(bLocal_215))
			{
				UNK_0xF690C84DADBB3551(&bLocal_215);
			}
			if (UNK_0xC844350D5D58C99A(bLocal_215))
			{
				UNK_0xF690C84DADBB3551(&bLocal_215);
			}
			UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			if (UNK_0xE4EDC4B0E92C078B(iLocal_228))
			{
				UNK_0x142CC44DB769B57E(&iLocal_228);
			}
			func_23(1, 1, 1, 0, 0, 0);
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
			UNK_0xA37A90C62806D848(1);
			UNK_0x8BCB70EB440DED83(0);
			UNK_0xBFE31971E49FA500(0);
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				UNK_0x6C5B8C4234CEA349(UNK_0x16F2683693E537C9(), true);
			}
			UNK_0x536F1BE96C726C4B(vLocal_117, 100f, 1, 0, 0, false);
			UNK_0x7D6CA5F52B3748BF(vLocal_117 - Vector(100f, 60f, 80f), vLocal_117 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
			UNK_0x51B096AAC60548C1(0f);
			UNK_0x15EA7F4313456B1D(3, false);
			UNK_0x15EA7F4313456B1D(5, false);
			iLocal_248 = UNK_0x6D4BB7C3AA077590(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, false, 2, 1);
			UNK_0x523BCC9DC80CD82F(joaat("A_M_O_ACULT_01"));
			while (!UNK_0xB87F6CF6E5628C67(joaat("A_M_O_ACULT_01")))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_190 = 6;
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 6:
			if (UNK_0xEABED1927EFB48CA(0))
			{
				if (UNK_0x3148AE92ED70DC30("CULT_MASTER", 0))
				{
					if (!UNK_0xC844350D5D58C99A(iLocal_196[11]))
					{
						iLocal_196[11] = UNK_0x940C1429253D3B1B(UNK_0x6450C2A9FBA3C3BF("CULT_MASTER", false));
					}
				}
				if (UNK_0x3148AE92ED70DC30("REAR_CULT", 0))
				{
					if (!UNK_0xC844350D5D58C99A(iLocal_196[12]))
					{
						iLocal_196[12] = UNK_0x940C1429253D3B1B(UNK_0x6450C2A9FBA3C3BF("REAR_CULT", false));
					}
				}
				if (UNK_0x3148AE92ED70DC30("LEFT_OLD_CULT", 0))
				{
					if (!UNK_0xC844350D5D58C99A(iLocal_196[13]))
					{
						iLocal_196[13] = UNK_0x940C1429253D3B1B(UNK_0x6450C2A9FBA3C3BF("LEFT_OLD_CULT", false));
					}
				}
				if (UNK_0x3148AE92ED70DC30("CARBINE_CULT", 0))
				{
					if (!UNK_0xC844350D5D58C99A(iLocal_196[14]))
					{
						iLocal_196[14] = UNK_0x940C1429253D3B1B(UNK_0x6450C2A9FBA3C3BF("CARBINE_CULT", false));
					}
				}
				if (UNK_0x3148AE92ED70DC30("SHOTGUN_CULT", 0))
				{
					if (!UNK_0xC844350D5D58C99A(iLocal_196[15]))
					{
						iLocal_196[15] = UNK_0x940C1429253D3B1B(UNK_0x6450C2A9FBA3C3BF("SHOTGUN_CULT", false));
					}
				}
				if (UNK_0x3148AE92ED70DC30("TREVOR", 0))
				{
					UNK_0x6C5B8C4234CEA349(UNK_0x16F2683693E537C9(), false);
					UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -1173.531f, 4924.357f, 222.2101f, 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 188.9369f);
					UNK_0xA1B2E0ACC3ED5113(UNK_0x16F2683693E537C9(), -1173.509f, 4924.365f, 222.21f, -1, 0, 0f, true, 0, iLocal_248, 0);
					UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 1, 0);
				}
				if (UNK_0x3148AE92ED70DC30("Trevors_weapon", 0))
				{
					UNK_0x96C150704BF4D0C6(bLocal_576, UNK_0x16F2683693E537C9());
				}
				UNK_0x2FB9A57162E54BAB(91.3878f);
				UNK_0xEF6276132B396452(4.4337f, 1065353216 /* Float: 1f */);
				func_23(0, 1, 1, 0, 0, 0);
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
				UNK_0x8BCB70EB440DED83(1);
				UNK_0xBFE31971E49FA500(1);
				vLocal_51[0 /*3*/] = { -1044.632f, 4918.149f, 211.3315f };
				fLocal_100[0] = 254.8275f;
				vLocal_51[1 /*3*/] = { -1054.92f, 4915.155f, 210.8241f };
				fLocal_100[1] = 270.2025f;
				vLocal_51[2 /*3*/] = { -1051.859f, 4903.902f, 209.6199f };
				fLocal_100[2] = 299.8404f;
				vLocal_51[3 /*3*/] = { -1068.246f, 4899.532f, 213.2755f };
				fLocal_100[3] = 298.4257f;
				vLocal_51[4 /*3*/] = { -1083.322f, 4899.532f, 213.2755f };
				fLocal_100[4] = 283.5311f;
				vLocal_51[5 /*3*/] = { -1084.058f, 4933.805f, 228.2246f };
				fLocal_100[5] = 87.5233f;
				vLocal_51[6 /*3*/] = { -1081.976f, 4937.339f, 232.3275f };
				fLocal_100[6] = 109.6546f;
				vLocal_51[7 /*3*/] = { -1092.075f, 4939.958f, 217.3385f };
				fLocal_100[7] = 210.2433f;
				vLocal_51[8 /*3*/] = { -1101.798f, 4930.33f, 217.3544f };
				fLocal_100[8] = 203.732f;
				vLocal_51[9 /*3*/] = { -1070.675f, 4869.301f, 220.2917f };
				fLocal_100[9] = 39.1109f;
				vLocal_51[10 /*3*/] = { -1115.703f, 4878.439f, 225.8085f };
				fLocal_100[10] = 25.8472f;
				UNK_0xF63400DBE3303D26("rghCult", &bLocal_410);
				iVar1 = 0;
				while (iVar1 < iLocal_196)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_196[iVar1] = UNK_0x36F2404464202779(26, joaat("A_M_O_ACULT_01"), vLocal_51[iVar1 /*3*/], fLocal_100[iVar1], 1, true);
						UNK_0xC743BD39A24D0583(iLocal_196[iVar1], 0);
						UNK_0x262EF6C6306BEA6C(iLocal_196[iVar1], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
						UNK_0x3CC33E4E9CE523F4(iLocal_196[iVar1], 0);
						UNK_0x083F03A847B640E9(iLocal_196[iVar1], 2);
						UNK_0x23CBFFA16CA5CF45(iLocal_196[iVar1], 50f, 20);
						UNK_0x298903DD96203C2C(iLocal_196[iVar1], 5);
						UNK_0x967762C930C0C5FD(iLocal_196[iVar1], 100f);
						UNK_0x9FA191B317572861(iLocal_196[iVar1], 100f);
						UNK_0xD458AC1C1D29C3B4(iLocal_196[iVar1], 150, false);
						UNK_0x29CD9554726C7577(iLocal_196[iVar1], UNK_0x09AC81E49EA267F7(40, 60));
						UNK_0x6C3AE6E278DB3D0E(iLocal_196[iVar1], UNK_0x16F2683693E537C9(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_196[iVar1] = UNK_0x36F2404464202779(26, joaat("A_M_O_ACULT_02"), vLocal_51[iVar1 /*3*/], fLocal_100[iVar1], 1, true);
						UNK_0xC743BD39A24D0583(iLocal_196[iVar1], 0);
						UNK_0x262EF6C6306BEA6C(iLocal_196[iVar1], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, true, true);
						UNK_0xAFF39FB306F8E232(iLocal_196[iVar1], 50, true);
						UNK_0x3CC33E4E9CE523F4(iLocal_196[iVar1], 2);
						UNK_0x083F03A847B640E9(iLocal_196[iVar1], 1);
						UNK_0x23CBFFA16CA5CF45(iLocal_196[iVar1], 50f, 20);
						UNK_0x298903DD96203C2C(iLocal_196[iVar1], 5);
						UNK_0x967762C930C0C5FD(iLocal_196[iVar1], 100f);
						UNK_0x9FA191B317572861(iLocal_196[iVar1], 100f);
						UNK_0x29CD9554726C7577(iLocal_196[iVar1], UNK_0x09AC81E49EA267F7(40, 60));
						UNK_0x6C3AE6E278DB3D0E(iLocal_196[iVar1], UNK_0x16F2683693E537C9(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!UNK_0xEB6A8945D1AC98A1(iLocal_196[iVar1]) && !UNK_0xEB6A8945D1AC98A1(iLocal_196[11])) && !UNK_0xEB6A8945D1AC98A1(iLocal_196[12])) && !UNK_0xEB6A8945D1AC98A1(iLocal_196[13])) && !UNK_0xEB6A8945D1AC98A1(iLocal_196[14])) && !UNK_0xEB6A8945D1AC98A1(iLocal_196[15]))
						{
							UNK_0x262EF6C6306BEA6C(iLocal_196[11], joaat("WEAPON_PISTOL"), -1, true, true);
							UNK_0x262EF6C6306BEA6C(iLocal_196[12], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
							UNK_0x262EF6C6306BEA6C(iLocal_196[13], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
							UNK_0x262EF6C6306BEA6C(iLocal_196[14], joaat("WEAPON_CARBINERIFLE"), -1, true, true);
							UNK_0x262EF6C6306BEA6C(iLocal_196[15], joaat("WEAPON_PUMPSHOTGUN"), -1, true, true);
							UNK_0xAFF39FB306F8E232(iLocal_196[iVar1], 0, true);
							UNK_0x3CC33E4E9CE523F4(iLocal_196[iVar1], 3);
							UNK_0x083F03A847B640E9(iLocal_196[iVar1], 0);
							UNK_0x298903DD96203C2C(iLocal_196[iVar1], false);
							UNK_0x9FC2699ACD081EC0(iLocal_196[iVar1], 1f, 1f);
							UNK_0xDD353D0E9C789D0E(&iLocal_247);
							UNK_0xE20F700AC2AFCA92(false, -1159.33f, 4924.412f, 221.6576f, UNK_0x16F2683693E537C9(), 2f, true, 0.5f, 4f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), 6000, 0);
							UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), 4500, 0);
							UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
							UNK_0x75ABDC5F81978924(iLocal_247);
							UNK_0x78ADC381772E3D54(iLocal_196[15], iLocal_247);
							UNK_0xF82EA857DA10E0CD(&iLocal_247);
							UNK_0xDD353D0E9C789D0E(&iLocal_247);
							UNK_0xE20F700AC2AFCA92(false, -1163.279f, 4932.933f, 222.541f, UNK_0x16F2683693E537C9(), 1f, true, 0.5f, 4f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							UNK_0x5DA3F35E3BFDEE66(false, UNK_0x16F2683693E537C9(), 5000, 0);
							UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), 7500, 0);
							UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), 4500, 0);
							UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
							UNK_0x75ABDC5F81978924(iLocal_247);
							UNK_0x78ADC381772E3D54(iLocal_196[14], iLocal_247);
							UNK_0xF82EA857DA10E0CD(&iLocal_247);
							UNK_0xDD353D0E9C789D0E(&iLocal_247);
							UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), 2500, 0);
							UNK_0x5DA3F35E3BFDEE66(false, UNK_0x16F2683693E537C9(), 5000, 0);
							UNK_0xE20F700AC2AFCA92(false, -1156.175f, 4926.073f, 221.3447f, UNK_0x16F2683693E537C9(), 2f, true, 0.5f, 4f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), 6500, 0);
							UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), 4500, 0);
							UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
							UNK_0x75ABDC5F81978924(iLocal_247);
							UNK_0x78ADC381772E3D54(iLocal_196[13], iLocal_247);
							UNK_0xF82EA857DA10E0CD(&iLocal_247);
							UNK_0xDD353D0E9C789D0E(&iLocal_247);
							UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), 3000, 0);
							UNK_0xE20F700AC2AFCA92(false, -1157.962f, 4922.196f, 221.309f, UNK_0x16F2683693E537C9(), 2f, true, 0.5f, 4f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), 5500, 0);
							UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), 4500, 0);
							UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
							UNK_0x75ABDC5F81978924(iLocal_247);
							UNK_0x78ADC381772E3D54(iLocal_196[12], iLocal_247);
							UNK_0xF82EA857DA10E0CD(&iLocal_247);
							UNK_0xDD353D0E9C789D0E(&iLocal_247);
							UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), 4500, 0);
							UNK_0x5DA3F35E3BFDEE66(false, UNK_0x16F2683693E537C9(), 10000, 0);
							UNK_0xE20F700AC2AFCA92(false, -1161.475f, 4916.061f, 220.5658f, UNK_0x16F2683693E537C9(), 2f, true, 0.5f, 4f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), 4500, 0);
							UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), 4500, 0);
							UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
							UNK_0x75ABDC5F81978924(iLocal_247);
							UNK_0x78ADC381772E3D54(iLocal_196[11], iLocal_247);
							UNK_0xF82EA857DA10E0CD(&iLocal_247);
							UNK_0xFADC0A217229F6B5(iLocal_196[iVar1], true);
							UNK_0x9DD8618CA5BF832D(iLocal_196[iVar1], 156, true);
						}
					}
					else
					{
						iLocal_196[iVar1] = UNK_0x36F2404464202779(26, joaat("A_M_O_ACULT_02"), vLocal_51[iVar1 /*3*/], fLocal_100[iVar1], 1, true);
						UNK_0xC743BD39A24D0583(iLocal_196[iVar1], 0);
						UNK_0x262EF6C6306BEA6C(iLocal_196[iVar1], joaat("WEAPON_PISTOL"), -1, true, true);
						UNK_0xAFF39FB306F8E232(iLocal_196[iVar1], 50, true);
						UNK_0x3CC33E4E9CE523F4(iLocal_196[iVar1], 2);
						UNK_0x083F03A847B640E9(iLocal_196[iVar1], 0);
						UNK_0x23CBFFA16CA5CF45(iLocal_196[iVar1], 50f, 20);
						UNK_0xB35CCEC0D4946813(iLocal_196[iVar1], 1);
						UNK_0x298903DD96203C2C(iLocal_196[iVar1], 5);
						UNK_0x967762C930C0C5FD(iLocal_196[iVar1], 100f);
						UNK_0x9FA191B317572861(iLocal_196[iVar1], 100f);
						UNK_0x29CD9554726C7577(iLocal_196[iVar1], UNK_0x09AC81E49EA267F7(40, 60));
						UNK_0x6C3AE6E278DB3D0E(iLocal_196[iVar1], UNK_0x16F2683693E537C9(), 0, 16);
					}
					UNK_0x6DF7BF67E86AAE86(iLocal_196[iVar1], bLocal_410);
					UNK_0xD8F6A53F4799FAFE(iLocal_196[iVar1], func_134(UNK_0x68F4C0EC296D3901(iLocal_196[iVar1], true), func_95(UNK_0xD803B885F5E47A62())));
					UNK_0x11AD11297DC58CC7(iLocal_196[iVar1], true);
					UNK_0x4E885A246A9D983A(iLocal_196[iVar1], 42, true);
					iLocal_229[iVar1] = func_132(iLocal_196[iVar1], 1, 145);
					iVar1++;
				}
				func_99(&uLocal_411, 0, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
				func_99(&uLocal_411, 3, iLocal_196[11], "ACULTMaster", 0, 1);
				func_99(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
				UNK_0x5D96D8530B3D0904(&bVar0, true);
				UNK_0x5D96D8530B3D0904(&bVar0, 3);
				UNK_0x5D96D8530B3D0904(&bVar0, 4);
				if (!bLocal_172)
				{
					iLocal_216[0] = UNK_0x2D7B5CDDF12654D2(joaat("PICKUP_MONEY_CASE"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, bVar0, 25000, 2, 1, joaat("PROP_SECURITY_CASE_01"));
					iLocal_216[1] = UNK_0x2D7B5CDDF12654D2(joaat("PICKUP_MONEY_CASE"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, bVar0, 25000, 2, 1, joaat("PROP_SECURITY_CASE_01"));
					iLocal_216[2] = UNK_0x2D7B5CDDF12654D2(joaat("PICKUP_MONEY_CASE"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, bVar0, 25000, 2, 1, joaat("PROP_SECURITY_CASE_01"));
					iLocal_216[3] = UNK_0x2D7B5CDDF12654D2(joaat("PICKUP_MONEY_CASE"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, bVar0, 25000, 2, 1, joaat("PROP_SECURITY_CASE_01"));
				}
				iLocal_216[0] = iLocal_216[0];
				iLocal_216[1] = iLocal_216[1];
				iLocal_216[2] = iLocal_216[2];
				iLocal_216[3] = iLocal_216[3];
				iLocal_221[0] = UNK_0x7707E48765093646(joaat("PROP_BOX_WOOD04A"), -1158.69f, 4915.709f, 220.2644f, true, true, false);
				iLocal_221[1] = UNK_0x7707E48765093646(joaat("PROP_BOX_WOOD03A"), -1156.246f, 4918.6f, 220.5432f, true, true, false);
				iLocal_221[2] = UNK_0x7707E48765093646(joaat("PROP_BOX_WOOD04A"), -1145.802f, 4931.816f, 219.9683f, true, true, false);
				iLocal_221[3] = UNK_0x7707E48765093646(joaat("PROP_BOX_WOOD04A"), -1133.369f, 4919.067f, 218.8385f, true, true, false);
				iLocal_221[4] = UNK_0x7707E48765093646(joaat("PROP_BOX_WOOD05A"), -1132.025f, 4921.483f, 218.8244f, true, true, false);
				iLocal_221[5] = UNK_0x7707E48765093646(joaat("PROP_BOX_WOOD03A"), -1112.66f, 4929.268f, 217.1752f, true, true, false);
				UNK_0xC023D1C4BF532815(iLocal_221[0], 12.24288f, -0.014582f, 27.06056f, 2, 1);
				UNK_0xC023D1C4BF532815(iLocal_221[1], 7.733739f, 9.432779f, -2.865618f, 2, 1);
				UNK_0xC023D1C4BF532815(iLocal_221[2], 3.735082f, 4.551246f, 86.30917f, 2, 1);
				UNK_0xC023D1C4BF532815(iLocal_221[3], 0.240341f, 1.095195f, 36.59031f, 2, 1);
				UNK_0xC023D1C4BF532815(iLocal_221[4], 7.6772f, 1.232743f, 93.27483f, 2, 1);
				UNK_0xC023D1C4BF532815(iLocal_221[5], 3.367802f, -5.14387f, 97.30567f, 2, 1);
				if (func_131() < 50)
				{
					UNK_0x2D35FFDA547292C4(UNK_0xD803B885F5E47A62(), 0.5f, 1, 0);
				}
				if (func_130() != 18)
				{
					func_128(18);
				}
				if (!func_92())
				{
					func_117(0);
				}
				func_1(1);
				bLocal_172 = false;
				iLocal_50 = 4;
			}
			break;
	}
}

int func_117(bool bParam0)
{
	if (func_122())
	{
		Global_111628 = 1;
		Global_111625 = UNK_0x1C0640BA9A7327B3();
		if (func_121(Global_111627))
		{
			func_118(0);
		}
		UNK_0x974531784BE14213(1, "RE_TITLE");
		if (bParam0 && func_121(Global_111627))
		{
			UNK_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_119(func_120(iParam0), -1);
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
					func_119(func_120(iParam0), -1);
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
					func_119(func_120(iParam0), -1);
					Global_111638.f_24990.f_4++;
					UNK_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_119(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_120(int iParam0)
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

bool func_121(int iParam0)
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

void func_128(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_93();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_65(iParam0);
	UNK_0x24D1A8A556F3252A(0);
	UNK_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_129();
}

void func_129()
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

int func_130()
{
	return Global_111627;
}

int func_131()
{
	var uVar0;

	switch (func_15())
	{
		case 0:
			UNK_0x6FB46C25CCB7E6D5(joaat("SP0_SPECIAL_ABILITY"), &uVar0, -1);
			break;
		case 1:
			UNK_0x6FB46C25CCB7E6D5(joaat("SP1_SPECIAL_ABILITY"), &uVar0, -1);
			break;
		case 2:
			UNK_0x6FB46C25CCB7E6D5(joaat("SP2_SPECIAL_ABILITY"), &uVar0, -1);
			break;
	}
	return uVar0;
}

int func_132(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_133(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_133(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_41(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_41(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_41(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_134(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return UNK_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_135()
{
	Global_31006 = 1;
}

bool func_136(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	int iVar9;

	iVar0 = 0;
	bVar2 = bParam1;
	if (!UNK_0x440C646F2F11A2A1(bParam0, bParam1, 0))
	{
		iVar0 = 1;
	}
	if (bVar2 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			iVar3 = UNK_0xD2AEDBB0268DF71A(bParam0, bVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = UNK_0x6DCAF294E20A0072(bVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				UNK_0x9AEFFB8166364079(bParam0, bVar2, &iVar3);
			}
		}
	}
	vVar5 = { UNK_0x68F4C0EC296D3901(bParam0, false) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		vVar5 = { iParam4, iParam5, iParam6 };
	}
	while (func_140(bVar2, iVar8) != 0)
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			if (UNK_0xAFB8387ED2D7213E(bParam0, bVar2, func_140(bVar2, iVar8)))
			{
				if (func_139(func_140(bVar2, iVar8)))
				{
					iVar9 = UNK_0xE8213142E3A84F79(func_140(bVar2, iVar8));
				}
			}
		}
		iVar8++;
	}
	bVar1 = UNK_0x5ACD4E66C7BF0F49(bVar2, iVar3, vVar5, iVar0, 1065353216 /* Float: 1f */, iVar9, iParam7, iParam8);
	while (func_140(bVar2, iVar8) != 0)
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			if (UNK_0xAFB8387ED2D7213E(bParam0, bVar2, func_140(bVar2, iVar8)))
			{
				UNK_0x3599C729CF725E87(bVar1, func_140(bVar2, iVar8));
				func_137(bVar1, func_140(bVar2, iVar8));
			}
		}
		iVar8++;
	}
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x440C646F2F11A2A1(bParam0, bVar2, 0))
		{
			UNK_0x8E9786E049F1EAD7(bVar1, UNK_0x7DD9FDEA5DFB355E(bParam0, bVar2));
		}
	}
	return bVar1;
}

void func_137(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_138(iParam1);
	if (iVar0 != 0)
	{
		UNK_0x3599C729CF725E87(bParam0, iVar0);
	}
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE");
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE");
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE");
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE");
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE");
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE");
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE");
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE");
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE");
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE");
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE");
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE");
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE");
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE");
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE");
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE");
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE");
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE");
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE");
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE");
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE");
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE");
	}
	return 0;
}

bool func_139(int iParam0)
{
	if ((((((((((((((((((((((((((((((((iParam0 == joaat("COMPONENT_PISTOL_VARMOD_LUXE") || iParam0 == joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_APPISTOL_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_MICROSMG_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_SMG_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_MG_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_PISTOL50_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW")) || iParam0 == joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_PIMP")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_HATE")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_LOVE")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_KING")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS")) || iParam0 == joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1")) || iParam0 == joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2")) || iParam0 == joaat("COMPONENT_REVOLVER_VARMOD_BOSS")) || iParam0 == joaat("COMPONENT_REVOLVER_VARMOD_GOON")) || iParam0 == joaat("COMPONENT_GUNRUN_MK2_UPGRADE"))
	{
		return true;
	}
	return false;
}

int func_140(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;

	iVar0 = 0;
	switch (bParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SMG_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SMG_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_SMG_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 9:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_SR_SUPP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		default:
			if (bParam0 != 0)
			{
				iVar1 = func_142(bParam0, &uVar4);
				if (iVar1 != -1)
				{
					bVar2 = false;
					while (bVar2 < UNK_0xA942498EEAA3EEAD(iVar1))
					{
						if (UNK_0x8B27EE8DAA2A39B3(iVar1, bVar2, &Var43))
						{
							if (!func_141(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						bVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

bool func_141(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return true;
	}
	return false;
}

int func_142(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = UNK_0x037F36BEA9A47381();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (UNK_0x6532540B34EE6273(iVar0, uParam1))
		{
			if (uParam1->f_1 == bParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_143()
{
	bool bVar0;

	bVar0 = UNK_0x62A1F4500E8F07E0();
	if (!Global_76621)
	{
		if (!bVar0)
		{
			Global_76621 = 1;
		}
	}
	return bVar0;
}

int func_144(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_145(iParam0, iParam1);
}

int func_145(int iParam0, int iParam1)
{
	if (func_17(14) && !func_156(iParam0))
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
	if (func_155(&Global_4270065))
	{
		if (func_153(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_146(&Global_4270065, iParam0))
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

bool func_146(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_17(14) && !func_156(iParam1))
	{
		return false;
	}
	if (func_153(uParam0, iParam1))
	{
		return false;
	}
	if (func_152(uParam0) < 0f)
	{
		func_151(uParam0, 0);
	}
	func_149(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_147(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_147(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_156(iParam1))
	{
		return 0;
	}
	if (func_153(uParam0, iParam1))
	{
		return 0;
	}
	if (func_152(uParam0) < 0f)
	{
		func_151(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_148(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_148(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_149(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_150(uParam0, iVar0);
		iVar0++;
	}
	func_151(uParam0, (Global_4270064 - 0.5f));
}

void func_150(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_151(var uParam0, float fParam1)
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

float func_152(var uParam0)
{
	return uParam0->f_80;
}

bool func_153(var uParam0, int iParam1)
{
	return func_154(uParam0, iParam1) != -1;
}

int func_154(var uParam0, int iParam1)
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

bool func_155(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_156(int iParam0)
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

void func_157()
{
	if (bLocal_183 > 0f)
	{
		bLocal_183 = (bLocal_183 - (0.6f / (1f / UNK_0x6117725E0134737F())));
	}
	else
	{
		bLocal_183 = 0f;
	}
	if (bLocal_183 >= 0f)
	{
		UNK_0x838CC054A9235BEC(Global_40554[10 /*31*/], bLocal_183, false, true);
		UNK_0x1BA7FCEAFCE8D46E(Global_40554[10 /*31*/], 4, false, true);
	}
	if (bLocal_182 < 0f)
	{
		bLocal_182 = (bLocal_182 + (0.6f / (1f / UNK_0x6117725E0134737F())));
	}
	else
	{
		bLocal_182 = 0f;
	}
	if (bLocal_182 <= 0f)
	{
		UNK_0x838CC054A9235BEC(Global_40554[9 /*31*/], bLocal_182, false, true);
		UNK_0x1BA7FCEAFCE8D46E(Global_40554[9 /*31*/], 4, false, true);
	}
}

void func_158()
{
	if (bLocal_183 < 1f)
	{
		bLocal_183 = (bLocal_183 + (0.6f / (1f / UNK_0x6117725E0134737F())));
	}
	else
	{
		bLocal_183 = 1f;
	}
	if (bLocal_183 <= 1f)
	{
		UNK_0x838CC054A9235BEC(Global_40554[10 /*31*/], bLocal_183, false, true);
		UNK_0x1BA7FCEAFCE8D46E(Global_40554[10 /*31*/], 4, false, true);
	}
	if (bLocal_182 > -1f)
	{
		bLocal_182 = (bLocal_182 - (0.6f / (1f / UNK_0x6117725E0134737F())));
	}
	else
	{
		bLocal_182 = -1f;
	}
	if (bLocal_182 >= -1f)
	{
		UNK_0x838CC054A9235BEC(Global_40554[9 /*31*/], bLocal_182, false, true);
		UNK_0x1BA7FCEAFCE8D46E(Global_40554[9 /*31*/], 4, false, true);
	}
}

void func_159()
{
	switch (iLocal_189)
	{
		case 0:
			UNK_0x523BCC9DC80CD82F(joaat("A_M_O_ACULT_02"));
			UNK_0x523BCC9DC80CD82F(joaat("PROP_ANIM_CASH_PILE_02"));
			UNK_0x3F423BF5B8125A50("random@altruist_cult");
			UNK_0x13896FDECC859926("AC_DELIVERED");
			UNK_0x6D0C93EE4FBA9307(joaat("WEAPON_ASSAULTRIFLE"), 31, 0);
			if ((((UNK_0xB87F6CF6E5628C67(joaat("A_M_O_ACULT_02")) && UNK_0xB87F6CF6E5628C67(joaat("PROP_ANIM_CASH_PILE_02"))) && UNK_0xB4AE0788C1587752("random@altruist_cult")) && UNK_0x13896FDECC859926("AC_DELIVERED")) && UNK_0x1787731C4D1D6B19(joaat("WEAPON_ASSAULTRIFLE")))
			{
				if (Global_111638.f_24990.f_5 < 2)
				{
					if (Global_111638.f_24990.f_5 == 0)
					{
						sLocal_409 = "ACULT_HI";
					}
					else
					{
						sLocal_409 = "ACULT_LEAVE5";
					}
					bLocal_403 = "cult_p5_guard";
					bLocal_405 = "cult_p5_trv";
					bLocal_406 = "cult_p5_victim_01";
					bLocal_407 = "cult_p5_victim_02";
					bLocal_408 = "cult_p5_cam";
					fLocal_185 = 0.75f;
					fLocal_184 = 0.999f;
				}
				else if (Global_111638.f_24990.f_5 >= 2)
				{
					sLocal_409 = "ACULT_CAPT";
					bLocal_403 = "cult_p7_guard_01";
					bLocal_404 = "cult_p7_guard_02";
					bLocal_405 = "cult_p7_trv";
					bLocal_406 = "cult_p7_victim_01";
					bLocal_407 = "cult_p7_victim_02";
					bLocal_408 = "cult_p7_cam";
					fLocal_185 = 0.98f;
					fLocal_184 = 0.98f;
					UNK_0x523BCC9DC80CD82F(joaat("PROP_BOX_WOOD03A"));
					UNK_0x523BCC9DC80CD82F(joaat("PROP_BOX_WOOD04A"));
					UNK_0x523BCC9DC80CD82F(joaat("PROP_BOX_WOOD05A"));
					UNK_0x523BCC9DC80CD82F(joaat("PROP_SECURITY_CASE_01"));
					if (!UNK_0x39B7A3CCD2467CAB())
					{
						UNK_0xAE1670DD12E839C3("ac_ig_3_p3_b", 8);
					}
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_228))
				{
					UNK_0x142CC44DB769B57E(&iLocal_228);
				}
				func_23(1, 1, 1, 0, 0, 0);
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
				UNK_0xA37A90C62806D848(1);
				UNK_0x8BCB70EB440DED83(0);
				UNK_0xBFE31971E49FA500(0);
				UNK_0x6C5B8C4234CEA349(UNK_0x16F2683693E537C9(), true);
				UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
				UNK_0xC92DB9682A650680("AC_DELIVERED");
				if (func_187())
				{
					func_186(0);
				}
				func_184();
				SYSTEM::WAIT(0);
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					bLocal_213 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
					if (UNK_0xDF1306B443CD3D15(bLocal_213, 0))
					{
						if (UNK_0x8B38C0DAEEDB5F9C(bLocal_213))
						{
							iLocal_189++;
						}
					}
				}
				else
				{
					bLocal_213 = UNK_0x728870EB733D12A1();
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_193[0]) && !UNK_0xEB6A8945D1AC98A1(bLocal_193[1]))
					{
						UNK_0xA3BF0AA5A2608191(bLocal_193[0]);
						UNK_0x0A94A109271BE75A(bLocal_193[0]);
						UNK_0xA3BF0AA5A2608191(bLocal_193[1]);
						UNK_0x0A94A109271BE75A(bLocal_193[1]);
					}
					iLocal_189++;
				}
			}
			break;
		case 1:
			if (UNK_0xC844350D5D58C99A(bLocal_213))
			{
				if (!UNK_0xAF6690C489CC6203(bLocal_213))
				{
					UNK_0x73270B3C9CC833FD(bLocal_213, true, 0);
				}
				if (UNK_0x5A91F08DF773C39D(bLocal_213, vLocal_120, 13f, 13f, 13f, false, true, 0))
				{
					UNK_0xA47B46945FF6DE74(bLocal_213, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!UNK_0x437347B10A200C4B(bLocal_213, 0))
					{
						UNK_0xD8F6A53F4799FAFE(bLocal_213, 149.8882f);
						UNK_0xB9FD7450C0DAB575(bLocal_213, 1084227584 /* Float: 5f */);
					}
				}
			}
			UNK_0x536F1BE96C726C4B(vLocal_120, 12f, 1, 0, 0, false);
			UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 128.2065f);
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_193[0]) && !UNK_0xEB6A8945D1AC98A1(bLocal_193[1]))
			{
				UNK_0xA47B46945FF6DE74(bLocal_193[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(bLocal_193[0], 128.2065f);
				UNK_0xA47B46945FF6DE74(bLocal_193[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(bLocal_193[1], 128.2065f);
			}
			iLocal_196[0] = UNK_0x36F2404464202779(26, joaat("A_M_O_ACULT_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, true);
			func_99(&uLocal_411, 1, iLocal_196[0], "ACULTMember1", 0, 1);
			if (Global_111638.f_24990.f_5 >= 2)
			{
				iLocal_196[1] = UNK_0x36F2404464202779(26, joaat("A_M_O_ACULT_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, true);
				func_99(&uLocal_411, 2, iLocal_196[1], "ACULTMember2", 0, 1);
			}
			func_99(&uLocal_411, 0, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
			func_99(&uLocal_411, 3, 0, "ACULTMaster", 0, 1);
			func_99(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
			func_100(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
			UNK_0x11AD11297DC58CC7(iLocal_196[0], true);
			bLocal_215 = UNK_0x5ACD4E66C7BF0F49(joaat("WEAPON_ASSAULTRIFLE"), -1, UNK_0x68F4C0EC296D3901(iLocal_196[0], true), 1, 1065353216 /* Float: 1f */, 0, 0, 1);
			UNK_0x9F528B1B53FBC5D9(bLocal_215, iLocal_196[0], UNK_0x4A089F2B762B8D33(iLocal_196[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_111638.f_24990.f_5 < 2)
			{
				bLocal_214 = UNK_0x7707E48765093646(joaat("PROP_ANIM_CASH_PILE_02"), vLocal_117, true, true, false);
				UNK_0x9F528B1B53FBC5D9(bLocal_214, UNK_0x16F2683693E537C9(), UNK_0x4A089F2B762B8D33(UNK_0x16F2683693E537C9(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			else if (Global_111638.f_24990.f_5 >= 2)
			{
				UNK_0x262EF6C6306BEA6C(iLocal_196[1], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
			}
			iLocal_246 = UNK_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", true);
			iLocal_188 = UNK_0xE9744DB7B8CA6965(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), iLocal_188, "random@altruist_cult", bLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
			UNK_0x915804B434753CBD(iLocal_196[0], iLocal_188, "random@altruist_cult", bLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_111638.f_24990.f_5 >= 2)
			{
				UNK_0x915804B434753CBD(iLocal_196[1], iLocal_188, "random@altruist_cult", bLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			UNK_0x93E9ED66DAB9FBE3(iLocal_246, iLocal_188, bLocal_408, "random@altruist_cult");
			UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_193[0]) && !UNK_0xEB6A8945D1AC98A1(bLocal_193[1]))
			{
				UNK_0x915804B434753CBD(bLocal_193[0], iLocal_188, "random@altruist_cult", bLocal_406, 1000f, -2f, 4, 0, 1148846080, 0);
				UNK_0x915804B434753CBD(bLocal_193[1], iLocal_188, "random@altruist_cult", bLocal_407, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_189++;
			break;
		case 2:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_193[0]))
			{
				if (UNK_0xCED082ADD3739B9F(bLocal_193[0]))
				{
					func_182(bLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(bLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_193[1]))
			{
				if (UNK_0xCED082ADD3739B9F(bLocal_193[1]))
				{
					func_182(bLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(bLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (UNK_0xA45992A6CE82FB43(iLocal_188) > fLocal_185)
			{
				iLocal_189++;
			}
			break;
		case 3:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_193[0]))
			{
				if (UNK_0xCED082ADD3739B9F(bLocal_193[0]))
				{
					func_182(bLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(bLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_193[1]))
			{
				if (UNK_0xCED082ADD3739B9F(bLocal_193[1]))
				{
					func_182(bLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(bLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (UNK_0xA45992A6CE82FB43(iLocal_188) > fLocal_184)
			{
				iLocal_189++;
			}
			break;
		case 4:
			if (Global_111638.f_24990.f_5 < 2)
			{
				func_135();
				if (UNK_0xC844350D5D58C99A(iLocal_196[0]))
				{
					UNK_0xEBA53F35D0085654(&(iLocal_196[0]));
				}
				if (UNK_0xC844350D5D58C99A(iLocal_196[1]))
				{
					UNK_0xEBA53F35D0085654(&(iLocal_196[1]));
				}
				if (UNK_0xC844350D5D58C99A(bLocal_214))
				{
					UNK_0xF690C84DADBB3551(&bLocal_214);
				}
				if (UNK_0xC844350D5D58C99A(bLocal_215))
				{
					UNK_0xF690C84DADBB3551(&bLocal_215);
				}
				UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
				UNK_0x04B065D07D2FB5B9(0, 0, 3, 0);
				UNK_0xE3BB8E05FCEB3FBE(iLocal_246, false);
				func_23(0, 1, 1, 0, 0, 0);
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
				UNK_0x8BCB70EB440DED83(1);
				UNK_0xBFE31971E49FA500(1);
				UNK_0x6C5B8C4234CEA349(UNK_0x16F2683693E537C9(), false);
				UNK_0x2FB9A57162E54BAB(0f);
				func_160(func_15(), 1, 2000, 0, 0);
			}
			UNK_0xC92DB9682A650680("AC_DONE");
			Global_111638.f_24990.f_5 += 2;
			bLocal_174 = true;
			break;
	}
}

void func_160(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;

	if (func_181(iParam0) == 3)
	{
		return;
	}
	if (func_181(iParam0) == 4)
	{
		return;
	}
	func_161(func_181(iParam0), 1, iParam1, iParam2, 0);
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

int func_161(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_180();
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
					func_179(99, 1);
					func_178(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_178(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_178(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_176(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_171(5))
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
							func_178(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_178(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_178(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_171(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_178(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_178(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_178(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_178(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_178(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_178(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_178(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_178(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_178(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_178(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_178(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_178(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_178(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_178(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_171(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_178(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_178(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_178(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_178(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_170(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_179(95, iParam3);
					break;
				case 1:
					func_179(97, iParam3);
					break;
				case 2:
					func_179(96, iParam3);
					break;
			}
			func_179(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_164(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_164(bVar1);
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
					func_178(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					func_178(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					func_178(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
	func_163(iParam0);
	if (Global_41431 == 15)
	{
		func_162(0);
	}
	return 1;
}

void func_162(bool bParam0)
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

void func_163(int iParam0)
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

void func_164(bool bParam0)
{
	bool bVar0;
	char cVar1[64];

	if (bParam0 == 8)
	{
		func_169(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_169(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_169(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_169(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_167(8269, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_167(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_167(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_167(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_167(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_167(8274, 0, -1, 1, 0);
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
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0) || UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_166() /*10930*/].f_6174.f_10, bParam0))
	{
		bVar0 = true;
		UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		UNK_0x0674E58A79778E99(&(Global_2097152[func_166() /*10930*/].f_6174.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UNK_0x1E64CE678ED5F61E("COUP_RED");
		UNK_0x6B012227B3921E18(func_165(bParam0));
		UNK_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_165(bool bParam0)
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

int func_166()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_167(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_168(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_168(int iParam0)
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

int func_169(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

void func_170(int iParam0)
{
	func_179(93, iParam0);
	func_179(29, iParam0);
	func_179(30, iParam0);
}

bool func_171(bool bParam0)
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
		return func_173(129, -1, -1);
	}
	if (bParam0 == 9)
	{
		return func_173(135, -1, -1);
	}
	if (bParam0 == 10)
	{
		return func_173(136, -1, -1);
	}
	if (bParam0 == 11)
	{
		return func_173(137, -1, -1);
	}
	if (bParam0 == 12)
	{
		iVar0 = UNK_0xDD0E7998AE8AD485();
		iVar1 = func_172(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 13)
	{
		iVar2 = UNK_0xDD0E7998AE8AD485();
		iVar3 = func_172(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 14)
	{
		iVar4 = UNK_0xDD0E7998AE8AD485();
		iVar5 = func_172(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 15)
	{
		iVar6 = UNK_0xDD0E7998AE8AD485();
		iVar7 = func_172(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 16)
	{
		iVar8 = UNK_0xDD0E7998AE8AD485();
		iVar9 = func_172(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 17)
	{
		iVar10 = UNK_0xDD0E7998AE8AD485();
		iVar11 = func_172(8274, -1, 0);
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
	return UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_166() /*10930*/].f_6174.f_10, bParam0);
}

int func_172(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_168(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_173(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_27();
	}
	iVar1 = func_175(iParam0, bParam1);
	iVar2 = func_174(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_174(int iParam0)
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

int func_175(int iParam0, bool bParam1)
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

int func_176(bool bParam0)
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
		func_177(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_144(27, 1);
	return 1;
}

int func_177(int iParam0, bool bParam1)
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

void func_178(int iParam0, int iParam1)
{
	bool bVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	UNK_0xCDC520E5E48E63D9(iParam0, bVar0, 1);
}

void func_179(int iParam0, int iParam1)
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

void func_180()
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

int func_181(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

void func_182(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	UNK_0xEB0A515D699A7E90(bParam0, bParam1, bParam2, func_183(iParam3), 0);
}

int func_183(int iParam0)
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

void func_184()
{
	Global_19671 = 0;
	func_185();
}

void func_185()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_186(int iParam0)
{
	Global_21816 = iParam0;
}

bool func_187()
{
	if (Global_21816 == 1)
	{
		return true;
	}
	return false;
}

void func_188()
{
	switch (iLocal_189)
	{
		case 0:
			UNK_0x523BCC9DC80CD82F(joaat("A_M_O_ACULT_02"));
			UNK_0x523BCC9DC80CD82F(joaat("PROP_ANIM_CASH_PILE_02"));
			UNK_0x3F423BF5B8125A50("random@altruist_cult");
			UNK_0x13896FDECC859926("AC_DELIVERED");
			UNK_0x6D0C93EE4FBA9307(joaat("WEAPON_ASSAULTRIFLE"), 31, 0);
			if ((((UNK_0xB87F6CF6E5628C67(joaat("A_M_O_ACULT_02")) && UNK_0xB87F6CF6E5628C67(joaat("PROP_ANIM_CASH_PILE_02"))) && UNK_0xB4AE0788C1587752("random@altruist_cult")) && UNK_0x13896FDECC859926("AC_DELIVERED")) && UNK_0x1787731C4D1D6B19(joaat("WEAPON_ASSAULTRIFLE")))
			{
				if (Global_111638.f_24990.f_5 == 0)
				{
					sLocal_409 = "ACULT_HI";
					bLocal_403 = "cult_p2_guard";
					bLocal_405 = "cult_p2_trv";
					bLocal_406 = "cult_p2_victim";
					bLocal_408 = "cult_p2_cam";
					fLocal_185 = 0.8f;
					fLocal_184 = 0.968f;
				}
				else if (Global_111638.f_24990.f_5 == 1)
				{
					sLocal_409 = "ACULT_LEAVE3";
					bLocal_403 = "cult_p4_guard";
					bLocal_405 = "cult_p4_trv";
					bLocal_406 = "cult_p4_victim";
					bLocal_408 = "cult_p4_cam";
					fLocal_185 = 0.77f;
					fLocal_184 = 0.999f;
				}
				else if (Global_111638.f_24990.f_5 == 2)
				{
					sLocal_409 = "ACULT_LEAVE3";
					bLocal_403 = "cult_p4_guard";
					bLocal_405 = "cult_p4_trv";
					bLocal_406 = "cult_p4_victim";
					bLocal_408 = "cult_p4_cam";
					fLocal_185 = 0.77f;
					fLocal_184 = 0.999f;
				}
				else if (Global_111638.f_24990.f_5 >= 3)
				{
					sLocal_409 = "ACULT_CAPT";
					bLocal_403 = "cult_p7_guard_01";
					bLocal_404 = "cult_p7_guard_02";
					bLocal_405 = "cult_p7_trv";
					bLocal_406 = "cult_p7_victim_01";
					bLocal_408 = "cult_p7_cam";
					fLocal_185 = 0.98f;
					fLocal_184 = 0.98f;
					UNK_0x523BCC9DC80CD82F(joaat("PROP_BOX_WOOD03A"));
					UNK_0x523BCC9DC80CD82F(joaat("PROP_BOX_WOOD04A"));
					UNK_0x523BCC9DC80CD82F(joaat("PROP_BOX_WOOD05A"));
					UNK_0x523BCC9DC80CD82F(joaat("PROP_SECURITY_CASE_01"));
					if (!UNK_0x39B7A3CCD2467CAB())
					{
						UNK_0xAE1670DD12E839C3("ac_ig_3_p3_b", 8);
					}
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_228))
				{
					UNK_0x142CC44DB769B57E(&iLocal_228);
				}
				func_23(1, 1, 1, 0, 0, 0);
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
				UNK_0xA37A90C62806D848(1);
				UNK_0x8BCB70EB440DED83(0);
				UNK_0xBFE31971E49FA500(0);
				UNK_0x6C5B8C4234CEA349(UNK_0x16F2683693E537C9(), true);
				UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
				UNK_0xC92DB9682A650680("AC_DELIVERED");
				if (func_187())
				{
					func_186(0);
				}
				func_184();
				SYSTEM::WAIT(0);
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					bLocal_213 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
					if (UNK_0xDF1306B443CD3D15(bLocal_213, 0))
					{
						if (UNK_0x8B38C0DAEEDB5F9C(bLocal_213))
						{
							iLocal_189++;
						}
					}
				}
				else
				{
					bLocal_213 = UNK_0x728870EB733D12A1();
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_193[0]))
					{
						UNK_0xA3BF0AA5A2608191(bLocal_193[0]);
						UNK_0x0A94A109271BE75A(bLocal_193[0]);
					}
					iLocal_189++;
				}
			}
			break;
		case 1:
			if (UNK_0xC844350D5D58C99A(bLocal_213))
			{
				if (!UNK_0xAF6690C489CC6203(bLocal_213))
				{
					UNK_0x73270B3C9CC833FD(bLocal_213, true, 0);
				}
				if (UNK_0x5A91F08DF773C39D(bLocal_213, vLocal_120, 13f, 13f, 13f, false, true, 0))
				{
					UNK_0xA47B46945FF6DE74(bLocal_213, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!UNK_0x437347B10A200C4B(bLocal_213, 0))
					{
						UNK_0xD8F6A53F4799FAFE(bLocal_213, 149.8882f);
						UNK_0xB9FD7450C0DAB575(bLocal_213, 1084227584 /* Float: 5f */);
					}
				}
			}
			UNK_0x536F1BE96C726C4B(vLocal_120, 12f, 1, 0, 0, false);
			UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 128.2065f);
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_193[0]))
			{
				UNK_0xA47B46945FF6DE74(bLocal_193[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(bLocal_193[0], 128.2065f);
			}
			iLocal_196[0] = UNK_0x36F2404464202779(26, joaat("A_M_O_ACULT_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, true);
			func_99(&uLocal_411, 1, iLocal_196[0], "ACULTMember1", 0, 1);
			if (Global_111638.f_24990.f_5 >= 3)
			{
				iLocal_196[1] = UNK_0x36F2404464202779(26, joaat("A_M_O_ACULT_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, true);
				func_99(&uLocal_411, 2, iLocal_196[1], "ACULTMember2", 0, 1);
			}
			func_99(&uLocal_411, 0, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
			func_99(&uLocal_411, 3, 0, "ACULTMaster", 0, 1);
			func_99(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
			if (Global_111638.f_24990.f_5 != 1 && Global_111638.f_24990.f_5 != 2)
			{
				func_100(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
			}
			SYSTEM::SETTIMERB(0);
			UNK_0x11AD11297DC58CC7(iLocal_196[0], true);
			bLocal_214 = UNK_0x7707E48765093646(joaat("PROP_ANIM_CASH_PILE_02"), vLocal_117, true, true, false);
			bLocal_215 = UNK_0x5ACD4E66C7BF0F49(joaat("WEAPON_ASSAULTRIFLE"), -1, UNK_0x68F4C0EC296D3901(iLocal_196[0], true), 1, 1065353216 /* Float: 1f */, 0, 0, 1);
			UNK_0x9F528B1B53FBC5D9(bLocal_215, iLocal_196[0], UNK_0x4A089F2B762B8D33(iLocal_196[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_111638.f_24990.f_5 < 3)
			{
				if (Global_111638.f_24990.f_5 == 0)
				{
					UNK_0x9F528B1B53FBC5D9(bLocal_214, UNK_0x16F2683693E537C9(), UNK_0x4A089F2B762B8D33(UNK_0x16F2683693E537C9(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					UNK_0x9F528B1B53FBC5D9(bLocal_214, UNK_0x16F2683693E537C9(), UNK_0x4A089F2B762B8D33(UNK_0x16F2683693E537C9(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			else if (Global_111638.f_24990.f_5 >= 3)
			{
				UNK_0x262EF6C6306BEA6C(iLocal_196[1], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
			}
			iLocal_246 = UNK_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", true);
			iLocal_188 = UNK_0xE9744DB7B8CA6965(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), iLocal_188, "random@altruist_cult", bLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
			UNK_0x915804B434753CBD(iLocal_196[0], iLocal_188, "random@altruist_cult", bLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_111638.f_24990.f_5 >= 3)
			{
				UNK_0x915804B434753CBD(iLocal_196[1], iLocal_188, "random@altruist_cult", bLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			UNK_0x93E9ED66DAB9FBE3(iLocal_246, iLocal_188, bLocal_408, "random@altruist_cult");
			UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_193[0]))
			{
				UNK_0x915804B434753CBD(bLocal_193[0], iLocal_188, "random@altruist_cult", bLocal_406, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_189++;
			break;
		case 2:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_193[0]))
			{
				if (UNK_0xCED082ADD3739B9F(bLocal_193[0]))
				{
					func_182(bLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(bLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (SYSTEM::TIMERB() > 2000 && SYSTEM::TIMERB() < 2100)
			{
				if (Global_111638.f_24990.f_5 == 1 || Global_111638.f_24990.f_5 == 2)
				{
					if (!func_115())
					{
						func_100(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
					}
				}
			}
			if (UNK_0xA45992A6CE82FB43(iLocal_188) > fLocal_185)
			{
				iLocal_189++;
			}
			break;
		case 3:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_193[0]))
			{
				if (UNK_0xCED082ADD3739B9F(bLocal_193[0]))
				{
					func_182(bLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(bLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_111638.f_24990.f_5 == 1 || Global_111638.f_24990.f_5 == 2)
			{
				if ((UNK_0xA45992A6CE82FB43(iLocal_188) > 0.9742857f && !bLocal_181) && UNK_0x6C3F127AAF415E69() == 4)
				{
					UNK_0x82A772610883F395("CamPushInNeutral", 0, 0);
					UNK_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					bLocal_181 = true;
				}
			}
			if (UNK_0xA45992A6CE82FB43(iLocal_188) > fLocal_184)
			{
				iLocal_189++;
			}
			break;
		case 4:
			if (Global_111638.f_24990.f_5 < 3)
			{
				if (Global_111638.f_24990.f_5 != 1 && Global_111638.f_24990.f_5 != 2)
				{
					func_135();
					if (UNK_0xC844350D5D58C99A(iLocal_196[0]))
					{
						UNK_0xEBA53F35D0085654(&(iLocal_196[0]));
					}
					if (UNK_0xC844350D5D58C99A(iLocal_196[1]))
					{
						UNK_0xEBA53F35D0085654(&(iLocal_196[1]));
					}
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					if (UNK_0xC844350D5D58C99A(iLocal_196[0]))
					{
						UNK_0x4A4806F9D471E491(iLocal_196[0], false, 0);
					}
					if (UNK_0xC844350D5D58C99A(iLocal_196[1]))
					{
						UNK_0x4A4806F9D471E491(iLocal_196[1], false, 0);
					}
					if (UNK_0xC844350D5D58C99A(bLocal_193[0]))
					{
						UNK_0x4A4806F9D471E491(bLocal_193[0], false, 0);
					}
					iLocal_189++;
				}
				if (UNK_0xC844350D5D58C99A(bLocal_214))
				{
					UNK_0xF690C84DADBB3551(&bLocal_214);
				}
				if (UNK_0xC844350D5D58C99A(bLocal_215))
				{
					UNK_0xF690C84DADBB3551(&bLocal_215);
				}
				UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
				if (Global_111638.f_24990.f_5 == 0)
				{
					UNK_0xBD453909DC26A85D(UNK_0x16F2683693E537C9(), joaat("MOTIONSTATE_WALK"), false, 0, 0);
					UNK_0x5A9FF5F994E904B8(UNK_0xD803B885F5E47A62(), 1f, 750, false, 1, 0);
				}
				if (UNK_0x7F8A39872A07D2CE(bLocal_408, "cult_p4_cam"))
				{
					UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				}
				else
				{
					UNK_0x04B065D07D2FB5B9(0, 0, 3, 0);
				}
				UNK_0xE3BB8E05FCEB3FBE(iLocal_246, false);
				func_23(0, 1, 1, 0, 0, 0);
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
				UNK_0x8BCB70EB440DED83(1);
				UNK_0xBFE31971E49FA500(1);
				UNK_0x6C5B8C4234CEA349(UNK_0x16F2683693E537C9(), false);
				UNK_0x2FB9A57162E54BAB(0f);
				func_160(func_15(), 1, 1000, 0, 0);
			}
			if (Global_111638.f_24990.f_5 != 1 && Global_111638.f_24990.f_5 != 2)
			{
				UNK_0xC92DB9682A650680("AC_DONE");
				Global_111638.f_24990.f_5++;
				bLocal_174 = true;
			}
			break;
		case 5:
			if (!func_115() || SYSTEM::TIMERB() > 7000)
			{
				func_135();
				if (UNK_0xC844350D5D58C99A(iLocal_196[0]))
				{
					UNK_0xEBA53F35D0085654(&(iLocal_196[0]));
				}
				if (UNK_0xC844350D5D58C99A(iLocal_196[1]))
				{
					UNK_0xEBA53F35D0085654(&(iLocal_196[1]));
				}
				UNK_0xC92DB9682A650680("AC_DONE");
				Global_111638.f_24990.f_5++;
				bLocal_174 = true;
			}
			break;
	}
}

void func_189()
{
	if (func_191())
	{
		if (func_15() == 2)
		{
			if (UNK_0x7AEFFBD77F2CF1EC(func_190()))
			{
				UNK_0xF5BDC0FED0F08D25(func_190(), &uLocal_186, &iLocal_187);
				if (iLocal_187 == 1)
				{
					bLocal_193[0] = UNK_0x9B50A0F7FCCD175C(func_190(), 0);
					if (UNK_0x5A91F08DF773C39D(bLocal_193[0], vLocal_120, 5f, 5f, 5f, false, true, 0))
					{
						if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
						{
							if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
							{
								UNK_0xE0C0351D5B931E37(UNK_0x728870EB733D12A1(), 10.5f, 5, 0);
							}
						}
						SYSTEM::SETTIMERA(0);
						iLocal_50 = 1;
					}
				}
				else if (iLocal_187 == 2)
				{
					bLocal_193[0] = UNK_0x9B50A0F7FCCD175C(func_190(), 0);
					bLocal_193[1] = UNK_0x9B50A0F7FCCD175C(func_190(), 1);
					if (UNK_0x5A91F08DF773C39D(bLocal_193[0], vLocal_120, 5f, 5f, 5f, false, true, 0) && UNK_0x5A91F08DF773C39D(bLocal_193[1], vLocal_120, 5f, 5f, 5f, false, true, 0))
					{
						if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
						{
							if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
							{
								UNK_0xE0C0351D5B931E37(UNK_0x728870EB733D12A1(), 10.5f, 5, 0);
							}
						}
						SYSTEM::SETTIMERA(0);
						iLocal_50 = 1;
					}
				}
			}
		}
	}
}

int func_190()
{
	return UNK_0x5D08BBCCCC2F43A4(UNK_0xA30EC016B12C03E4());
}

bool func_191()
{
	return Global_31005;
}

void func_192()
{
	if (func_195())
	{
		if (iLocal_400 == 0)
		{
			iLocal_400 = UNK_0x7D6CA5F52B3748BF(vLocal_117 - Vector(100f, 60f, 80f), vLocal_117 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
		}
		while (UNK_0x0EB28750412C3A5A(func_95(UNK_0xD803B885F5E47A62()), vLocal_117, 1) < 209f)
		{
			SYSTEM::WAIT(0);
		}
	}
	if (func_15() == 0 || func_15() == 1)
	{
		if (UNK_0x256517DE1B6755D4(joaat("AMBIENT_GANG_CULT"), joaat("PLAYER")) != 5)
		{
			if (func_194())
			{
				UNK_0x0E2400AB9174FA81(5, joaat("AMBIENT_GANG_CULT"), joaat("PLAYER"));
			}
			else if (func_193())
			{
				UNK_0x0E2400AB9174FA81(5, joaat("AMBIENT_GANG_CULT"), joaat("PLAYER"));
			}
		}
	}
	else if (func_15() == 2)
	{
		if (UNK_0x256517DE1B6755D4(joaat("AMBIENT_GANG_CULT"), joaat("PLAYER")) != 5)
		{
			if (func_194())
			{
				if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()) || (UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()) && UNK_0xBBFFD1937ED16008(UNK_0xD803B885F5E47A62())))
				{
					UNK_0x0E2400AB9174FA81(5, joaat("AMBIENT_GANG_CULT"), joaat("PLAYER"));
				}
			}
			else if (func_193())
			{
				UNK_0x0E2400AB9174FA81(5, joaat("AMBIENT_GANG_CULT"), joaat("PLAYER"));
			}
			else if (UNK_0x256517DE1B6755D4(joaat("AMBIENT_GANG_CULT"), joaat("PLAYER")) != 1)
			{
				UNK_0x0E2400AB9174FA81(1, joaat("AMBIENT_GANG_CULT"), joaat("PLAYER"));
			}
		}
	}
	if (func_194())
	{
		if (bLocal_179)
		{
			if (!UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 3))
			{
				UNK_0xC92DB9682A650680("AC_START");
			}
			UNK_0x51B096AAC60548C1(0f);
			UNK_0x837C600ECEE8ABA2("COUNTRYSIDE_ALTRUIST_CULT_01", true);
			if (UNK_0xBF75E4DF4C367CD9(Global_40554[9 /*31*/].f_2, 6f, Global_40554[9 /*31*/].f_5, 0))
			{
				UNK_0x6DA3AC47D5DB9EED(Global_40554[9 /*31*/].f_5, Global_40554[9 /*31*/].f_2, false, 0f, 0);
			}
			if (UNK_0xBF75E4DF4C367CD9(Global_40554[10 /*31*/].f_2, 6f, Global_40554[10 /*31*/].f_5, 0))
			{
				UNK_0x6DA3AC47D5DB9EED(Global_40554[10 /*31*/].f_5, Global_40554[10 /*31*/].f_2, false, 0f, 0);
			}
			bLocal_180 = true;
			bLocal_179 = false;
		}
	}
	else if (!bLocal_179)
	{
		if (UNK_0x7E369B13C7215476())
		{
			UNK_0xC92DB9682A650680("AC_END");
		}
		UNK_0x51B096AAC60548C1(1f);
		UNK_0x837C600ECEE8ABA2("COUNTRYSIDE_ALTRUIST_CULT_01", false);
		if (!bLocal_180)
		{
			func_157();
		}
		bLocal_179 = true;
	}
}

bool func_193()
{
	if ((((((UNK_0x53129655DBEDC6EA(vLocal_123, vLocal_126, bLocal_129, 1) || UNK_0x53129655DBEDC6EA(vLocal_130, vLocal_133, bLocal_136, 1)) || UNK_0x53129655DBEDC6EA(vLocal_137, vLocal_140, bLocal_143, 1)) || UNK_0x53129655DBEDC6EA(vLocal_144, vLocal_147, bLocal_150, 1)) || UNK_0x53129655DBEDC6EA(vLocal_151, vLocal_154, bLocal_157, 1)) || UNK_0x53129655DBEDC6EA(vLocal_158, vLocal_161, bLocal_164, 1)) || UNK_0x53129655DBEDC6EA(vLocal_165, vLocal_168, bLocal_171, 1))
	{
		return true;
	}
	return false;
}

bool func_194()
{
	if ((((((UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vLocal_123, vLocal_126, bLocal_129, 0, true, 0) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vLocal_130, vLocal_133, bLocal_136, 0, true, 0)) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vLocal_137, vLocal_140, bLocal_143, 0, true, 0)) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vLocal_144, vLocal_147, bLocal_150, 0, true, 0)) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vLocal_151, vLocal_154, bLocal_157, 0, true, 0)) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vLocal_158, vLocal_161, bLocal_164, 0, true, 0)) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vLocal_165, vLocal_168, bLocal_171, 0, true, 0))
	{
		return true;
	}
	return false;
}

bool func_195()
{
	if (Global_111638.f_24990.f_5 == 1000)
	{
		return true;
	}
	return false;
}

void func_196()
{
	UNK_0x0E2400AB9174FA81(255, joaat("AMBIENT_GANG_CULT"), joaat("PLAYER"));
	if (Global_111638.f_24990.f_5 >= iLocal_192 && Global_111638.f_24990.f_5 != 1000)
	{
		if (bLocal_172)
		{
			func_1(1);
			func_11();
			func_3(0);
			iLocal_50 = 3;
		}
		else
		{
			func_197(&iLocal_249);
			Global_94001 = 0;
			Global_94002 = 0;
			Global_94003 = 0;
			func_14(0, 1);
			func_12(0, 1);
			func_2(0);
			UNK_0x2C84016B4A95F6BA(1);
			UNK_0x65C5EBCA17A891FC(0);
			UNK_0x4DB69487E1A9EE2A(0);
			func_3(0);
			UNK_0x51B096AAC60548C1(1f);
			UNK_0x15EA7F4313456B1D(3, true);
			UNK_0x15EA7F4313456B1D(5, true);
			UNK_0x96D521DDDB9AD218();
			bLocal_179 = false;
			func_96();
			Global_111638.f_24990.f_5 = (iLocal_192 - 1);
			UNK_0x10FAF14A60A0DBE1();
		}
	}
	else
	{
		UNK_0xB547E3FFEB27073E();
		func_197(&iLocal_249);
		Global_94001 = 0;
		Global_94002 = 0;
		Global_94003 = 0;
		func_14(0, 1);
		func_12(0, 1);
		func_2(0);
		UNK_0x2C84016B4A95F6BA(1);
		UNK_0x65C5EBCA17A891FC(0);
		UNK_0x4DB69487E1A9EE2A(0);
		func_3(0);
		if (UNK_0x83D8570832F172A7(iLocal_399))
		{
			UNK_0xE17FDF9E3068281B(&iLocal_399);
			func_98(0);
		}
		UNK_0x51B096AAC60548C1(1f);
		UNK_0x15EA7F4313456B1D(3, true);
		UNK_0x15EA7F4313456B1D(5, true);
		UNK_0x96D521DDDB9AD218();
		bLocal_179 = false;
		UNK_0x10FAF14A60A0DBE1();
	}
}

void func_197(int iParam0)
{
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0;
	}
}

