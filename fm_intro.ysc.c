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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	struct<123> Local_62 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_185 = 16;
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
	var uLocal_371 = 16;
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
	struct<6> Local_536 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_542 = 0;
	var uLocal_543 = 16;
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
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	struct<5> Local_708[2];
	bool bLocal_719 = false;
	bool bLocal_720 = false;
	int iLocal_721 = 0;
	int iLocal_722 = 0;
	int iLocal_723 = 0;
	int iLocal_724 = 0;
	bool bLocal_725 = false;
	bool bLocal_726 = false;
	bool bLocal_727 = false;
	bool bLocal_728 = false;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_60 = 20;
	iLocal_61 = 33;
	bLocal_725 = true;
	bLocal_726 = true;
	bLocal_727 = true;
	bLocal_728 = true;
	if (UNK_0x8CD06866876216F2())
	{
		func_777(ScriptParam_0);
	}
	while (true)
	{
		func_776();
		if (func_768())
		{
			func_416(1);
		}
		if (func_413(0))
		{
			Local_708[UNK_0x57270EE11514DC67() /*5*/] = 3;
		}
		if (func_412(UNK_0x57270EE11514DC67()) > -1)
		{
			UNK_0x34FABD75496259E4(UNK_0xD803B885F5E47A62());
		}
		switch (func_411(UNK_0x57270EE11514DC67()))
		{
			case 0:
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 10))
				{
					if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_719, 10);
					}
				}
				UNK_0xD7992BEF7A9D109E("FMINT", false);
				if (func_410() && UNK_0x01C309A4BDFCAD82("FMINT", false))
				{
					if (func_409() > 0)
					{
						func_408(&uLocal_371, 1, 0, "Lamar", 0, 1);
						func_407(0);
						func_406(4, 1);
						func_406(1, 1);
						func_406(0, 1);
						func_406(2, 1);
						func_406(3, 0);
						func_404(iLocal_61, 1);
						Local_708[UNK_0x57270EE11514DC67() /*5*/] = 2;
						if (bLocal_727)
						{
							Local_708[UNK_0x57270EE11514DC67() /*5*/].f_2 = -2;
						}
						else
						{
							Local_708[UNK_0x57270EE11514DC67() /*5*/].f_2 = -1;
						}
					}
				}
				if (func_409() == 4)
				{
					Local_708[UNK_0x57270EE11514DC67() /*5*/] = 4;
				}
				if (func_409() == 6 && Local_708[UNK_0x57270EE11514DC67() /*5*/] < 4)
				{
					Local_708[UNK_0x57270EE11514DC67() /*5*/] = 6;
				}
				break;
			case 2:
				func_382();
				func_23();
				if (func_409() == 4)
				{
					Local_708[UNK_0x57270EE11514DC67() /*5*/] = 4;
				}
				if (func_409() == 6 && Local_708[UNK_0x57270EE11514DC67() /*5*/] < 4)
				{
					Local_708[UNK_0x57270EE11514DC67() /*5*/] = 5;
				}
				break;
			case 4:
				Local_708[UNK_0x57270EE11514DC67() /*5*/] = 5;
				break;
			case 5:
				func_21(&(Local_536.f_5));
				if (func_20(&(Local_536.f_5)))
				{
					Local_708[UNK_0x57270EE11514DC67() /*5*/] = 3;
				}
				break;
			case 3:
				func_12(iLocal_60);
				Local_708[UNK_0x57270EE11514DC67() /*5*/] = 6;
			case 6:
				func_416(0);
				break;
		}
		if (UNK_0xBFF81ED3B99522C7())
		{
			switch (func_409())
			{
				case 0:
					Local_536 = 2;
					break;
				case 2:
					func_11();
					func_10();
					func_2();
					if (func_1())
					{
						Local_536 = 6;
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
	if (!bLocal_725)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_536.f_1, true))
		{
			return true;
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Local_536.f_1, 2))
	{
		return true;
	}
	return false;
}

void func_2()
{
	func_3();
}

void func_3()
{
	if (UNK_0xBFF81ED3B99522C7())
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_536.f_1, 3))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_4, false))
			{
				UNK_0x5D96D8530B3D0904(&(Local_536.f_1), 3);
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_536.f_1, 4))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_4, 2))
			{
				UNK_0x5D96D8530B3D0904(&(Local_536.f_1), 4);
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_536.f_1, 5))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_3, 3))
			{
				UNK_0x5D96D8530B3D0904(&(Local_536.f_1), 5);
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_536.f_1, 6))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_3, 4))
			{
				UNK_0x5D96D8530B3D0904(&(Local_536.f_1), 6);
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_536.f_1, 7))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_3, 5))
			{
				UNK_0x5D96D8530B3D0904(&(Local_536.f_1), 7);
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_536.f_1, 8))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_3, 6))
			{
				UNK_0x5D96D8530B3D0904(&(Local_536.f_1), 8);
			}
		}
		switch (Local_536.f_2)
		{
			case 0:
				if (UNK_0xEAE0D21A50E6C7F4(Local_536.f_1, 3))
				{
					if (func_4(&(Local_536.f_3), &(Local_536.f_4), -1031.788f, -2731.816f, 19.0546f, 240.4822f, &uLocal_543))
					{
						UNK_0x56FDC9ADE35F7DB0(UNK_0xB177666FAB6F4417(Local_536.f_3), true, false, 0);
						Local_536.f_2 = 2;
					}
				}
				break;
			case 2:
				if (UNK_0xEAE0D21A50E6C7F4(Local_536.f_1, 4))
				{
					Local_536.f_2 = 1;
				}
				break;
			case 1:
				if (UNK_0xEAE0D21A50E6C7F4(Local_536.f_1, 5))
				{
					Local_536.f_2 = 3;
				}
				break;
			case 3:
				if (UNK_0xEAE0D21A50E6C7F4(Local_536.f_1, 6))
				{
					Local_536.f_2 = 4;
				}
				break;
			case 4:
				if (UNK_0xEAE0D21A50E6C7F4(Local_536.f_1, 7))
				{
					Local_536.f_2 = 5;
				}
				break;
			case 5:
				if (UNK_0xEAE0D21A50E6C7F4(Local_536.f_1, 8))
				{
					Local_536.f_2 = 6;
				}
				break;
		}
	}
}

bool func_4(var uParam0, var uParam1, vector3 vParam2, float fParam5, var uParam6)
{
	if (func_9(Global_2537071.f_796) && func_9(Global_2537071.f_797))
	{
		if (!UNK_0xE9F78D191AD5EDBA(*uParam0))
		{
			if (func_6(uParam0, Global_2537071.f_796, vParam2, fParam5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				UNK_0x4551D324905984CB(UNK_0xB177666FAB6F4417(*uParam0), 1);
			}
		}
		if (!UNK_0xE9F78D191AD5EDBA(*uParam1))
		{
			if (func_5(uParam1, *uParam0, 25, Global_2537071.f_797, -1, 1, 1, 1))
			{
				UNK_0x11AD11297DC58CC7(UNK_0x1B50683925F00106(*uParam1), true);
				UNK_0x71199B01895C6202(Global_2537071.f_796);
				UNK_0x71199B01895C6202(Global_2537071.f_797);
				UNK_0x120A395B0ECB8EA5(UNK_0xB177666FAB6F4417(*uParam0), false);
				UNK_0x579B0182884711E5(UNK_0x1B50683925F00106(*uParam1), 1);
				func_408(uParam6, 8, UNK_0x1B50683925F00106(*uParam1), "FM_TAXI", 0, 1);
			}
		}
	}
	if (!UNK_0xE9F78D191AD5EDBA(*uParam0) || !UNK_0xE9F78D191AD5EDBA(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_5(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
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

bool func_6(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
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
			func_7(vParam2, bParam5, bParam1, bVar1);
			return true;
		}
	}
	return false;
}

void func_7(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (func_8(UNK_0xD803B885F5E47A62(), vParam0, bParam4) > -1)
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

int func_8(int iParam0, vector3 vParam1, bool bParam4)
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

bool func_9(bool bParam0)
{
	if (bParam0 == 0)
	{
		return true;
	}
	UNK_0x523BCC9DC80CD82F(bParam0);
	return UNK_0xB87F6CF6E5628C67(bParam0);
}

void func_10()
{
}

void func_11()
{
	bool bVar0;

	bVar0 = false;
	while (bVar0 < UNK_0x54EABC0DD106045B())
	{
		if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bVar0)))
		{
			if (bLocal_725)
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_536.f_1, 2))
				{
					if (UNK_0xEAE0D21A50E6C7F4(Local_708[bVar0 /*5*/].f_3, 2))
					{
						UNK_0x5D96D8530B3D0904(&(Local_536.f_1), 2);
					}
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(Local_536.f_1, true))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_708[bVar0 /*5*/].f_3, true))
				{
					UNK_0x5D96D8530B3D0904(&(Local_536.f_1), true);
				}
			}
		}
		bVar0++;
	}
}

void func_12(int iParam0)
{
	if (!func_15(UNK_0xD803B885F5E47A62(), 1))
	{
		return;
	}
	if (!func_13(UNK_0xD803B885F5E47A62()) == iParam0)
	{
		return;
	}
}

int func_13(bool bParam0)
{
	if (func_14(bParam0, 0, 1))
	{
		return Global_2425662[bParam0 /*421*/].f_1;
	}
	return 0;
}

bool func_14(bool bParam0, bool bParam1, bool bParam2)
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

int func_15(bool bParam0, bool bParam1)
{
	if (func_19() != 0)
	{
		return func_13(bParam0) != 0;
	}
	return func_16(bParam0, bParam1, 0);
}

int func_16(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_17(bParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[bParam0 /*876*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_17(bool bParam0)
{
	return func_18(bParam0);
}

bool func_18(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_13.f_1, false);
}

int func_19()
{
	return Global_30768;
}

bool func_20(var uParam0)
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

void func_21(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (UNK_0xBFF81ED3B99522C7())
		{
			func_22(uParam0, 0, 0);
		}
	}
}

void func_22(var uParam0, bool bParam1, bool bParam2)
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

void func_23()
{
	switch (func_412(UNK_0x57270EE11514DC67()))
	{
		case -2:
			func_203();
			break;
		case -1:
			func_202();
			break;
		case 0:
			func_31();
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			func_24();
			break;
	}
}

void func_24()
{
	switch (iLocal_724)
	{
		case 0:
			if (!func_25(iLocal_61))
			{
				UNK_0x5D96D8530B3D0904(&(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_3), 2);
				Local_708[UNK_0x57270EE11514DC67() /*5*/].f_2 = 99;
			}
			break;
	}
}

bool func_25(int iParam0)
{
	return func_26(iParam0, 5, 1);
}

bool func_26(int iParam0, bool bParam1, bool bParam2)
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
		if (func_19() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_27(func_30(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

int func_27(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_28(bParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_28(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = bParam0;
	if (bVar0 == -1)
	{
		iVar1 = func_29();
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

int func_29()
{
	return Global_1312745;
}

int func_30(int iParam0)
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

void func_31()
{
	bool bVar0;

	if (func_201())
	{
		if (func_14(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			func_200(0);
		}
	}
	if (!func_199(&uLocal_361))
	{
		func_22(&uLocal_361, 0, 0);
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 21))
	{
		UNK_0x5D96D8530B3D0904(&bLocal_719, 21);
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 3))
	{
		if (!func_199(&uLocal_359))
		{
			func_22(&uLocal_359, 0, 0);
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bLocal_719, 21))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
				{
					if (func_198(&uLocal_359, 3000, 0))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_719, 3);
					}
				}
			}
		}
		if (func_198(&uLocal_359, 40000, 0))
		{
			UNK_0x5D96D8530B3D0904(&bLocal_719, 3);
		}
	}
	else if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 16))
	{
		if (!UNK_0xFEBC1E4EC9E001F0())
		{
			if (!UNK_0x798A3F1296751F46())
			{
				UNK_0x5D96D8530B3D0904(&bLocal_719, 16);
				func_197(&uLocal_359);
			}
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_4, 2))
	{
		if (!func_199(&uLocal_365))
		{
			func_22(&uLocal_365, 0, 0);
		}
		else if (!UNK_0xEAE0D21A50E6C7F4(bLocal_720, true))
		{
			if (func_198(&uLocal_365, 10000, 0))
			{
				UNK_0x5D96D8530B3D0904(&bLocal_720, true);
				func_197(&uLocal_365);
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bLocal_719, 19))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 18))
			{
				if (!func_195() || func_198(&uLocal_359, 5000, 0))
				{
					func_194(0);
					UNK_0x5D96D8530B3D0904(&bLocal_719, 18);
					if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 244, false);
						UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 243, false);
						UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 242, false);
					}
				}
			}
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_719, 18))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 2))
		{
			if (UNK_0x0F1CCD77290EE12F())
			{
				bVar0 = false;
				UNK_0x5D96D8530B3D0904(&bVar0, 3);
				UNK_0x5D96D8530B3D0904(&bVar0, 4);
				UNK_0x5D96D8530B3D0904(&bVar0, 5);
				if (func_99(&uLocal_371, 19, "FM_1AU", "FM_ICALL", bVar0, 0))
				{
					func_98(1);
					UNK_0x5D96D8530B3D0904(&bLocal_719, 2);
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 20))
					{
						func_83(19, 3, 1);
						UNK_0x5D96D8530B3D0904(&bLocal_719, 20);
					}
					if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						UNK_0x8D4C354BB8991817(UNK_0x16F2683693E537C9(), 1, 1);
					}
				}
			}
		}
		else if (!func_82(0))
		{
			if (!func_81())
			{
				if (!func_79())
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 12))
					{
						if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
						{
							UNK_0x8D4C354BB8991817(UNK_0x16F2683693E537C9(), 0, 1);
							UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 244, true);
							UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 243, true);
							UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 242, true);
						}
						UNK_0x5D96D8530B3D0904(&bLocal_719, 12);
						func_22(&uLocal_363, 0, 0);
						func_22(&uLocal_367, 0, 0);
					}
				}
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_719, 12))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 17))
			{
				if (!UNK_0x798A3F1296751F46())
				{
					func_75();
					UNK_0x5D96D8530B3D0904(&bLocal_719, 17);
					func_197(&uLocal_359);
				}
			}
			else if (!func_195())
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 23))
				{
					if (func_198(&uLocal_367, 4500, 0))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_719, 23);
						UNK_0x5D96D8530B3D0904(&(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_3), 3);
					}
				}
				if (func_198(&uLocal_363, 15000, 0))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 22))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_719, 22);
					}
				}
				if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
				{
					if (UNK_0xEAE0D21A50E6C7F4(bLocal_719, 14))
					{
						UNK_0x0674E58A79778E99(&bLocal_719, 14);
					}
					if (!func_25(iLocal_61))
					{
						if (UNK_0xEAE0D21A50E6C7F4(bLocal_719, 13))
						{
							UNK_0x0674E58A79778E99(&bLocal_719, 13);
						}
						if (UNK_0xEAE0D21A50E6C7F4(bLocal_719, 25) || (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 25) && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0)))
						{
							if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, false))
							{
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_719, 15))
								{
									UNK_0x0674E58A79778E99(&bLocal_719, 15);
								}
								if (UNK_0xE4EDC4B0E92C078B(Global_98796.f_235[iLocal_61]))
								{
									func_69("GET_AMMU", 0);
									UNK_0x5D96D8530B3D0904(&bLocal_719, false);
									UNK_0x5D96D8530B3D0904(&bLocal_719, 25);
									if (UNK_0xE4EDC4B0E92C078B(Global_98796.f_235[iLocal_61]))
									{
										if (!UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_795, 2))
										{
											UNK_0x661342B9651D16E2(Global_98796.f_235[iLocal_61], true);
										}
										func_404(iLocal_61, 1);
									}
								}
							}
							else if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_795, 2))
							{
								if (UNK_0xE4EDC4B0E92C078B(Global_98796.f_235[iLocal_61]))
								{
									if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 15))
									{
										UNK_0x661342B9651D16E2(Global_98796.f_235[iLocal_61], false);
										UNK_0x5D96D8530B3D0904(&bLocal_719, 15);
									}
								}
							}
							else if (UNK_0xE4EDC4B0E92C078B(Global_98796.f_235[iLocal_61]))
							{
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_719, 15))
								{
									UNK_0x661342B9651D16E2(Global_98796.f_235[iLocal_61], true);
									UNK_0x0674E58A79778E99(&bLocal_719, 15);
								}
							}
						}
					}
					else
					{
						if (UNK_0xEAE0D21A50E6C7F4(bLocal_719, false))
						{
							UNK_0x0674E58A79778E99(&bLocal_719, false);
						}
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 13))
						{
							func_69("GET_GUN", 0);
							func_68(1);
							UNK_0x5D96D8530B3D0904(&bLocal_719, 13);
						}
					}
				}
				else if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 14))
				{
					UNK_0xA37A90C62806D848(1);
					if (UNK_0xEAE0D21A50E6C7F4(bLocal_719, false))
					{
						UNK_0x0674E58A79778E99(&bLocal_719, false);
					}
					if (UNK_0xEAE0D21A50E6C7F4(bLocal_719, 13))
					{
						UNK_0x0674E58A79778E99(&bLocal_719, 13);
					}
					if (UNK_0xE4EDC4B0E92C078B(Global_98796.f_235[iLocal_61]))
					{
						UNK_0x661342B9651D16E2(Global_98796.f_235[iLocal_61], false);
						UNK_0xF412DD40DE84CE72(Global_98796.f_235[iLocal_61], 0);
						func_404(iLocal_61, 0);
					}
					func_69("LOSE_COP", 0);
					UNK_0x5D96D8530B3D0904(&bLocal_719, 14);
				}
			}
		}
	}
	else if (func_198(&uLocal_361, 300000, 0))
	{
		UNK_0x5D96D8530B3D0904(&bLocal_719, 18);
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_3, false))
	{
		if (((UNK_0x440C646F2F11A2A1(UNK_0x16F2683693E537C9(), joaat("WEAPON_PISTOL"), 0) || UNK_0x440C646F2F11A2A1(UNK_0x16F2683693E537C9(), joaat("WEAPON_COMBATPISTOL"), 0)) || UNK_0x440C646F2F11A2A1(UNK_0x16F2683693E537C9(), joaat("WEAPON_APPISTOL"), 0)) || UNK_0x440C646F2F11A2A1(UNK_0x16F2683693E537C9(), joaat("WEAPON_MICROSMG"), 0))
		{
			if (func_66())
			{
				func_61(1);
				UNK_0x5D96D8530B3D0904(&(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_3), false);
				if (func_25(iLocal_61))
				{
				}
			}
		}
		else
		{
			func_44(400);
		}
	}
	else if (!UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_3, true))
	{
		if (!func_42())
		{
			UNK_0x5D96D8530B3D0904(&(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_3), true);
			func_35();
			func_34("FM_IHELP_AMMU", -1);
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 31))
			{
				func_32(119, 1, -1, 1);
				func_32(115, 1, -1, 1);
				UNK_0x5D96D8530B3D0904(&bLocal_719, 31);
			}
			func_197(&uLocal_359);
			if (bLocal_725)
			{
				if (bLocal_726)
				{
					Local_708[UNK_0x57270EE11514DC67() /*5*/].f_2 = 3;
				}
				else
				{
					Local_708[UNK_0x57270EE11514DC67() /*5*/].f_2 = 1;
				}
			}
			else
			{
				Local_708[UNK_0x57270EE11514DC67() /*5*/].f_2 = 99;
			}
		}
	}
}

void func_32(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (func_33())
	{
		iVar0 = Global_2583656[iParam0 /*3*/][func_28(bParam2)];
		if (iVar0 != 0)
		{
			UNK_0xD8B681091EBE4064(iVar0, bParam1, iParam3);
		}
	}
}

bool func_33()
{
	return true;
	return false;
}

void func_34(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_35()
{
	if (!func_41())
	{
		return;
	}
	if (!UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) == Global_1312585.f_9)
	{
		return;
	}
	func_36();
}

void func_36()
{
	func_38();
	func_37(0);
}

void func_37(bool bParam0)
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

void func_38()
{
	if (!func_40())
	{
	}
	if (func_41())
	{
		UNK_0x400C0D66EFD08603(&(Global_1312585.f_12));
		func_39();
		UNK_0x35F2C6537D10DAEB();
	}
}

void func_39()
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

bool func_40()
{
	if (!func_41())
	{
		return false;
	}
	UNK_0x18B60B994182620C(&(Global_1312585.f_12));
	func_39();
	return UNK_0xB165082A56EE6E7F();
}

bool func_41()
{
	if (Global_1312585 == 20)
	{
		return false;
	}
	return true;
}

bool func_42()
{
	return ((((((((((func_43(28) || func_43(29)) || func_43(30)) || func_43(31)) || func_43(32)) || func_43(33)) || func_43(34)) || func_43(35)) || func_43(36)) || func_43(37)) || func_43(38));
}

bool func_43(int iParam0)
{
	return func_26(iParam0, 6, 1);
}

void func_44(int iParam0)
{
	int iVar0;
	var uVar1;

	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		iVar0 = func_58(UNK_0xD803B885F5E47A62());
		if (iVar0 < iParam0)
		{
			if (func_57())
			{
				func_45(1734805203, (iParam0 - iVar0), &uVar1, 0, 0, 0);
			}
			else
			{
				UNK_0xDACD1EB0C24D33AC((iParam0 - iVar0));
			}
		}
	}
}

void func_45(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_57())
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
				func_46(uParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
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
			func_46(uParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
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
				func_46(uParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
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
			func_46(uParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
			break;
	}
}

int func_46(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	bVar0 = false;
	if (!func_57())
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (!bVar0)
	{
		if (!UNK_0x79B28160739BC9E6(func_29()) || UNK_0xDD2EE1F5DA6A6AB0())
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
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || bVar1) || UNK_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, bParam5, iParam6))
	{
		if ((bVar0 || bVar1) || UNK_0x80C74F9931DCF063(iVar4))
		{
			*uParam0 = func_53(iVar4, iParam1, iParam4, iParam2, iParam3, bParam5, 0, iParam6, iParam7, 1, 1);
			if (bVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263954[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4263954[*uParam0 /*85*/].f_66.f_12 = 1;
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
			func_52(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_47(-1, iParam4, iParam6, bParam5, -1);
		}
	}
	return 0;
}

void func_47(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			UNK_0x5D96D8530B3D0904(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_122.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_48(iParam0);
	}
}

void func_48(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_57())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_51(iParam0))
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
		func_49(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_49(var uParam0)
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
	func_50(&(uParam0->f_14));
	func_50(&(uParam0->f_14.f_13));
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

void func_50(var uParam0)
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

bool func_51(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return false;
}

void func_52(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_57())
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
				func_54(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_54(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	bVar36 = func_56(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!bVar36 == 0)
	{
		func_55();
		UNK_0xFB061A86A7AC749F(1, &vVar0, 36, bVar36);
	}
}

void func_55()
{
	UNK_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

bool func_56(bool bParam0)
{
	var uVar0;

	if (bParam0 != -1)
	{
		UNK_0x5D96D8530B3D0904(&uVar0, bParam0);
	}
	return uVar0;
}

bool func_57()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

int func_58(bool bParam0)
{
	int iVar0;

	iVar0 = func_59(bParam0);
	return iVar0;
}

int func_59(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (bParam0 == UNK_0xD803B885F5E47A62())
		{
			return UNK_0x62F8C2EDB26F57B3(-1);
		}
		else if (func_60(bParam0))
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

bool func_60(bool bParam0)
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

void func_61(bool bParam0)
{
	func_62(28, bParam0);
	func_62(29, bParam0);
	func_62(30, bParam0);
	func_62(31, bParam0);
	func_62(32, bParam0);
	func_62(33, bParam0);
	func_62(34, bParam0);
	func_62(35, bParam0);
	func_62(36, bParam0);
	func_62(37, bParam0);
	func_62(38, bParam0);
}

void func_62(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 14, 1))
		{
			func_65(iParam0, 14, 1);
		}
	}
	else if (func_26(iParam0, 14, 1))
	{
		func_63(iParam0, 14, 1);
	}
}

void func_63(int iParam0, bool bParam1, bool bParam2)
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
		if (func_19() == 0)
		{
			bVar0 = func_27(func_30(iParam0), -1, 0);
			UNK_0x0674E58A79778E99(&bVar0, bParam1);
			func_64(func_30(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

void func_64(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_28(bParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

void func_65(int iParam0, bool bParam1, bool bParam2)
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
		if (func_19() == 0)
		{
			bVar0 = func_27(func_30(iParam0), -1, 0);
			UNK_0x5D96D8530B3D0904(&bVar0, bParam1);
			func_64(func_30(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

bool func_66()
{
	return ((((((((((func_67(28) || func_67(29)) || func_67(30)) || func_67(31)) || func_67(32)) || func_67(33)) || func_67(34)) || func_67(35)) || func_67(36)) || func_67(37)) || func_67(38));
}

bool func_67(int iParam0)
{
	return func_26(iParam0, 3, 0);
}

void func_68(bool bParam0)
{
	if (bParam0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1653348, 19))
		{
			UNK_0x5D96D8530B3D0904(&Global_1653348, 19);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_1653348, 19))
	{
		UNK_0x0674E58A79778E99(&Global_1653348, 19);
	}
}

void func_69(char* sParam0, bool bParam1)
{
	if (UNK_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (UNK_0x7724E025FD444F45(sParam0) > 23)
	{
		return;
	}
	if (func_73(sParam0))
	{
		return;
	}
	func_36();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), UNK_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = UNK_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_72();
	func_71(bParam1);
	func_70();
}

void func_70()
{
	UNK_0x5D96D8530B3D0904(&(Global_1312585.f_59), true);
}

void func_71(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x5D96D8530B3D0904(&(Global_1312585.f_59), false);
		return;
	}
	UNK_0x0674E58A79778E99(&(Global_1312585.f_59), false);
}

void func_72()
{
	Global_1312585.f_10 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), 86400000);
	Global_1312585.f_11 = UNK_0x2B6E0A53779D29EA();
}

bool func_73(bool bParam0)
{
	if (!func_41())
	{
		return false;
	}
	if (Global_1312585 == 11)
	{
		return func_74(bParam0);
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_12));
}

bool func_74(bool bParam0)
{
	if (!func_41())
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_16));
}

void func_75()
{
	struct<13> Var0;
	bool bVar13;
	bool bVar14;

	Var0 = { func_78(UNK_0xD803B885F5E47A62()) };
	bVar13 = UNK_0xC2F420D189FDB329();
	bVar14 = func_77(&Var0);
	if (!bVar13 && !bVar14)
	{
		func_76("HLP_TAXI3", 9000);
	}
	else if (bVar13 && !bVar14)
	{
		func_76("HLP_SOC2", 9000);
	}
	else if (bVar13 && bVar14)
	{
		func_76("HLP_SOC1", 9000);
	}
}

void func_76(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, false, iParam1);
}

int func_77(var uParam0)
{
	if (UNK_0x1963B11DE70153E0())
	{
		if (UNK_0x080E9D045AEE5605() && UNK_0xF2EC2A39FF9E838D(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_78(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

bool func_79()
{
	return func_80();
}

bool func_80()
{
	return Global_1370527.f_40 == 3;
}

bool func_81()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

bool func_82(int iParam0)
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

void func_83(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	Global_8042 = bParam0;
	if (Global_117[bParam0 /*10*/].f_8 != 150)
	{
		func_90();
		if (iParam1 == 4)
		{
			func_89(bParam0, 0, 1);
			func_89(bParam0, 1, 1);
			func_89(bParam0, 2, 1);
			func_88(bParam0, 0, 1);
			func_88(bParam0, 1, 1);
			func_88(bParam0, 2, 1);
		}
		else
		{
			if (func_87(bParam0, iParam1) == 1 && func_86(bParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_89(bParam0, iVar0, 1);
			func_88(bParam0, iVar0, 1);
		}
		if (bParam2)
		{
			if (!Global_76622)
			{
				if (iParam1 != 4)
				{
					if (Global_19486 != iParam1)
					{
						Global_8015[iParam1 /*4*/] = { func_85(bParam0) };
						Global_8032[iParam1] = 1;
						Global_8037[iParam1] = bParam0;
					}
					else if (bParam0 == Global_19486)
					{
					}
					else
					{
						Global_7966[1 /*6*/] = { func_85(bParam0) };
						Global_7966[1 /*6*/].f_5 = iParam1;
						func_84();
					}
				}
				else
				{
					Global_7966[1 /*6*/] = { func_85(bParam0) };
					Global_7966[1 /*6*/].f_5 = iParam1;
					func_84();
				}
			}
			else
			{
				Global_7966[1 /*6*/] = { func_85(bParam0) };
				Global_7966[1 /*6*/].f_5 = iParam1;
				func_84();
			}
		}
	}
}

void func_84()
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

struct<4> func_85(bool bParam0)
{
	return Global_1798[bParam0 /*29*/].f_3;
}

int func_86(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[bParam0 /*29*/].f_24[iParam1];
}

int func_87(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[bParam0 /*29*/].f_12[iParam1];
}

void func_88(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[bParam0 /*29*/].f_24[iParam1] = iParam2;
	if (bParam0 < 162)
	{
		Global_111638.f_28045[bParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_89(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[bParam0 /*29*/].f_12[iParam1] = iParam2;
	if (bParam0 < 162)
	{
		Global_111638.f_28045[bParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_90()
{
	if (func_97(14))
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
		Global_19486 = func_91();
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

var func_91()
{
	func_92();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_92()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_95(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_94(UNK_0x16F2683693E537C9());
			if (func_93(iVar0) && (!func_97(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_93(Global_111638.f_2358.f_539.f_4321))
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

bool func_93(int iParam0)
{
	return iParam0 < 3;
}

int func_94(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_95(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_95(int iParam0)
{
	if (func_93(iParam0))
	{
		return func_96(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_96(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_97(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x5D96D8530B3D0904(&Global_7357, 17);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7357, 17);
	}
}

int func_99(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (func_192())
	{
		return 0;
	}
	if (func_191())
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = -99;
	return func_100(uParam0, bParam1, bParam2, bParam3, 1, iParam5, bParam4, bVar0, bVar1, iVar2, bVar0, bVar0, -1);
}

int func_100(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)
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
	iVar1 = func_190(bParam2, bParam3);
	iVar2 = 0;
	if (!UNK_0xEA6BC48857E0AC4C(bParam7))
	{
		iVar2 = UNK_0x12AB0310C2281427(bParam7);
	}
	if (func_189(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_185(bParam6))
	{
		return 0;
	}
	if (func_182(iVar0, iVar1, iVar2))
	{
		if (func_181())
		{
			return 0;
		}
		func_180();
		return func_107(uParam0, bParam1, iParam12, bParam2, bParam3, iParam4, iParam5, bParam6, bParam7, bParam8, iParam9, bParam10, bParam11);
	}
	if (!func_106(iParam4))
	{
		return 0;
	}
	func_101(iVar0, iVar1, iVar2, bParam3, iParam4, iParam5, bParam6);
	return 0;
}

void func_101(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, bool bParam6)
{
	Global_1370527.f_40.f_1 = iParam0;
	Global_1370527.f_40.f_2 = iParam1;
	Global_1370527.f_40.f_3 = iParam2;
	StringCopy(&(Global_1370527.f_40.f_4), sParam3, 16);
	Global_1370527.f_40.f_8 = iParam4;
	Global_1370527.f_40.f_9 = iParam5;
	Global_1370527.f_40.f_14 = bParam6;
	func_102(iParam4);
	func_180();
	Global_1370527.f_40.f_13 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), 7000);
}

void func_102(int iParam0)
{
	if (func_105(iParam0))
	{
		func_104();
		return;
	}
	func_103();
}

void func_103()
{
	Global_1370527.f_40.f_10 = 0;
}

void func_104()
{
	Global_1370527.f_40.f_10 = 1;
}

bool func_105(int iParam0)
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

bool func_106(int iParam0)
{
	return iParam0 > Global_1370527.f_40.f_8;
}

int func_107(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12)
{
	char cVar0[16];

	func_179();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_176(uParam0, bParam3, bParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&cVar0, "CELL_226", 16);
		return func_173(uParam0, bParam1, bParam3, bParam4, &cVar0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_176(uParam0, bParam3, bParam4);
		}
		return func_155(uParam0, bParam1, bParam3, bParam4, bParam7);
	}
	if (iParam5 == 5)
	{
		return func_154(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	if (iParam5 == 2)
	{
		return func_143(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	if (iParam5 == 3)
	{
		return func_142(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	if (iParam5 == 6)
	{
		return func_108(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	return 0;
}

int func_108(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	func_141();
	bVar0 = true;
	if (func_110(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8))
	{
		func_109(120000);
		return 1;
	}
	return 0;
}

void func_109(bool bParam0)
{
	Global_1370527.f_40.f_11 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), bParam0);
	Global_1370527.f_40.f_12 = 1;
}

bool func_110(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
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

	bVar0 = func_140();
	iVar1 = 0;
	if (bParam0 == 145)
	{
		bVar0 = iParam1;
		bVar2 = UNK_0x6E524813889AECF8(bVar0);
		iVar1 = func_134(bVar0);
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
	bVar4 = func_133(bParam5, bParam6, &iVar3);
	iVar5 = func_131(iParam7, &iVar3);
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
		bVar12 = func_130(bParam0, bParam2, iVar10, bVar4, iVar5, bVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, bParam8, bParam9);
	}
	else
	{
		bVar12 = func_114(bParam0, bParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, false))
	{
		func_113();
	}
	func_141();
	func_112();
	func_111();
	return true;
}

void func_111()
{
	Global_1370527.f_57 = 0;
	Global_1370527.f_57.f_1 = 0;
}

void func_112()
{
	Global_1370527.f_40 = 3;
}

void func_113()
{
	UNK_0x5D96D8530B3D0904(&Global_7356, 8);
}

int func_114(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_115(bParam0, bParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_115(bool bParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;

	if (iParam13 > 99)
	{
	}
	if (UNK_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_90();
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
	if (func_129() == 0)
	{
		func_127();
		return 0;
	}
	func_126(Global_4269749);
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
	func_90();
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
				func_125(0);
				break;
			case 1:
				func_125(1);
				break;
			case 2:
				func_125(2);
				break;
			case 3:
				func_125(3);
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
		func_90();
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
			if (!func_124())
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_123(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_120(1);
			func_123(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	func_116(bParam0, bParam1);
	return 1;
}

void func_116(bool bParam0, bool bParam1)
{
	if (!func_117())
	{
		return;
	}
	UNK_0x6DFDEDC7A51E8DAE(bParam0, -1180597171, UNK_0x12AB0310C2281427(bParam1), 0);
}

bool func_117()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_140())
	{
		return false;
	}
	if (func_118(UNK_0xD803B885F5E47A62()))
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

bool func_118(int iParam0)
{
	return func_119(iParam0, 20);
}

bool func_119(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

void func_120(int iParam0)
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
		if (func_97(14))
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
								func_122(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(bVar2);
								UNK_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_121(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_121(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_121(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_121(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_121(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_122(&(Global_7363[iVar1 /*15*/]));
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
								func_122(&(Global_7363[iVar1 /*15*/]));
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
								func_122(&(Global_7363[iVar1 /*15*/]));
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
								func_122(&(Global_7363[iVar1 /*15*/]));
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
								func_122(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(42);
								UNK_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_121(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_121(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_121(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
		func_122(bParam7);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		func_122(bParam8);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam9))
	{
		func_122(bParam9);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam10))
	{
		func_122(bParam10);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam11))
	{
		func_122(bParam11);
	}
	UNK_0x7E60D21B163E9D56();
}

void func_122(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_123(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_124()
{
	return Global_1312877;
}

void func_125(int iParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = Global_111638.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_126(int iParam0)
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

void func_127()
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
		if (!func_128(Global_4268500[iVar2 /*104*/].f_18, Global_4268500[Global_4269749 /*104*/].f_18))
		{
			Global_4269749 = iVar2;
		}
		iVar2++;
	}
	Global_4268500[Global_4269749 /*104*/].f_24 = 1;
}

bool func_128(struct<6> Param0, struct<6> Param6)
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

int func_129()
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
			if (!func_128(Global_4268500[iVar2 /*104*/].f_18, Global_4268500[Global_4269749 /*104*/].f_18))
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

int func_130(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	if (func_115(bParam0, bParam1, iParam2, iParam6, bParam3, bParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, bParam15, bParam16, iVar0) == 1)
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

int func_131(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_132(2, iParam1);
	return iParam0;
}

void func_132(int iParam0, int iParam1)
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

bool func_133(bool bParam0, bool bParam1, int iParam2)
{
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return bLocal_18;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, bLocal_18))
	{
		return bLocal_18;
	}
	func_132(1, iParam2);
	if (bParam1)
	{
		return bParam0;
	}
	return UNK_0x19C9F30A7697B43C(bParam0);
}

int func_134(bool bParam0)
{
	int iVar0;

	iVar0 = func_137(bParam0);
	if (iVar0 == -1)
	{
		func_135(bParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_135(bool bParam0, bool bParam1)
{
	if (!func_14(bParam0, 0, 1))
	{
		return;
	}
	if (func_137(bParam0) != -1)
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
	if (func_136(bParam0))
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

bool func_136(bool bParam0)
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

int func_137(bool bParam0)
{
	int iVar0;

	if (!func_14(bParam0, 0, 1))
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
			func_138(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_138(int iParam0)
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
	func_139(&(Global_1389078[iVar32 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_139(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_140();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (UNK_0x8CD06866876216F2())
	{
		uParam0->f_3 = UNK_0x2B6E0A53779D29EA();
	}
}

int func_140()
{
	return -1;
}

void func_141()
{
	Global_1370527.f_40.f_9 = 4;
}

bool func_142(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	func_141();
	bVar0 = false;
	return func_110(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8);
}

bool func_143(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	bVar0 = false;
	return func_144(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8);
}

bool func_144(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
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

	bVar0 = func_140();
	iVar1 = 0;
	if (bParam0 == 145)
	{
		bVar0 = iParam1;
		bVar2 = UNK_0x6E524813889AECF8(bVar0);
		iVar1 = func_134(bVar0);
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
	bVar4 = func_133(bParam5, bParam6, &iVar3);
	iVar5 = func_131(iParam7, &iVar3);
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
		bVar12 = func_153(bParam0, bParam2, iVar10, bVar4, iVar5, bVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, bParam8, bParam9);
	}
	else
	{
		bVar12 = func_146(bParam0, bParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, false))
	{
		func_113();
	}
	func_145();
	func_112();
	func_111();
	return true;
}

void func_145()
{
	Global_1370527.f_40.f_9 = 3;
}

int func_146(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_147(bParam0, bParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_85(bParam0) };
			Global_8043 = bParam0;
			UNK_0x5D96D8530B3D0904(&Global_7356, true);
			UNK_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

int func_147(bool bParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;

	if (iParam13 > 99)
	{
	}
	if (UNK_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_90();
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
	if (func_152() == 0)
	{
		func_150();
		return 0;
	}
	func_149(Global_21872);
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
		func_125(0);
		func_125(2);
		func_125(1);
	}
	else
	{
		func_90();
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
					func_125(0);
					Global_8062 = 0;
					break;
				case 1:
					func_125(1);
					Global_8062 = 1;
					break;
				case 2:
					func_125(2);
					Global_8062 = 2;
					break;
				case 3:
					func_125(3);
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
		func_90();
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
			if (!func_124())
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_123(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_120(1);
			func_123(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	func_148(bParam0, bParam1);
	return 1;
}

void func_148(bool bParam0, bool bParam1)
{
	if (!func_117())
	{
		return;
	}
	UNK_0x6DFDEDC7A51E8DAE(bParam0, 1654525105, UNK_0x12AB0310C2281427(bParam1), 0);
}

void func_149(int iParam0)
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

void func_150()
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
		if (!func_151(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_24 = 1;
}

bool func_151(struct<6> Param0, struct<6> Param6)
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

int func_152()
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
			if (!func_151(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
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

int func_153(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	if (func_147(bParam0, bParam1, iParam2, iParam6, bParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, bParam15, bParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			Global_7966[3 /*6*/] = { func_85(bParam0) };
			Global_8043 = bParam0;
			StringCopy(&Global_8044, sParam5, 64);
			UNK_0x5D96D8530B3D0904(&Global_7356, true);
			UNK_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

int func_154(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
	}
	if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
	{
		return 0;
	}
	func_145();
	bVar0 = true;
	if (func_144(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8))
	{
		func_109(120000);
		return 1;
	}
	return 0;
}

int func_155(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		bVar0 = func_172(uParam0, bParam1, bParam2, bParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_161(uParam0, bParam1, bParam2, bParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, 3))
		{
			func_160(1);
		}
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, 5))
		{
			func_159(1);
		}
		func_158();
		func_112();
		func_157();
		func_156();
		return 1;
	}
	return 0;
}

void func_156()
{
	Global_2546572 = 0;
}

void func_157()
{
	Global_1370527.f_57 = 1;
	Global_1370527.f_57.f_1 = 0;
}

void func_158()
{
	Global_1370527.f_40.f_9 = 1;
}

void func_159(int iParam0)
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

void func_160(int iParam0)
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

int func_161(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_171(uParam0, bParam1, bParam2, iParam5, iParam6, 0);
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
	return func_162(bParam3, iParam4, bParam7);
}

int func_162(char* sParam0, int iParam1, bool bParam2)
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
					func_170();
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
		if (func_169(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_168();
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
				func_90();
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
				if (func_167())
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
			if (func_166())
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
			func_165();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_164();
		func_163();
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
		func_170();
	}
	return 0;
}

void func_163()
{
	if (!func_117())
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

void func_164()
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

void func_165()
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

bool func_166()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_167()
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

void func_168()
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

bool func_169(bool bParam0, int iParam1)
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

void func_170()
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

void func_171(var uParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_172(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_171(uParam0, bParam1, bParam2, iParam5, iParam6, 0);
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
	return func_162(bParam3, iParam4, bParam7);
}

int func_173(var uParam0, bool bParam1, bool bParam2, bool bParam3, char* sParam4)
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
	}
	if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
	{
		return 0;
	}
	if (func_175(uParam0, bParam1, bParam2, bParam3, 9, sParam4, 0, 0, 1))
	{
		func_174();
		func_158();
		func_112();
		func_157();
		func_156();
		return 1;
	}
	return 0;
}

void func_174()
{
	Global_21823 = 0;
}

int func_175(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_171(uParam0, bParam1, bParam2, iParam6, iParam7, 0);
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
	return func_162(bParam3, iParam4, bParam8);
}

int func_176(var uParam0, bool bParam1, bool bParam2)
{
	if (func_178(uParam0, bParam1, bParam2, 12, 0, 0, 0))
	{
		func_177();
		func_112();
		func_157();
		return 1;
	}
	return 0;
}

void func_177()
{
	Global_1370527.f_40.f_9 = 2;
}

bool func_178(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_171(uParam0, 145, bParam1, iParam4, iParam5, iParam6);
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
	return func_162(bParam2, iParam3, 0);
}

void func_179()
{
	Global_1370527.f_55 = Global_1370527.f_40.f_1;
	Global_1370527.f_55.f_1 = Global_1370527.f_40.f_10;
}

void func_180()
{
	Global_1370527.f_40 = 1;
}

bool func_181()
{
	return Global_1370527.f_40 == 1;
}

bool func_182(int iParam0, int iParam1, int iParam2)
{
	if (!func_183(iParam0))
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

bool func_183(int iParam0)
{
	if (!func_184())
	{
		return false;
	}
	if (!Global_1370527.f_40.f_1 == iParam0)
	{
		return false;
	}
	return true;
}

bool func_184()
{
	if (Global_1370527.f_40 == 0)
	{
		return false;
	}
	return true;
}

bool func_185(bool bParam0)
{
	if (func_188())
	{
		return false;
	}
	if (func_80())
	{
		return false;
	}
	if (func_82(0))
	{
		return false;
	}
	if (Global_1312467.f_18 != 0)
	{
		return false;
	}
	if (Global_1662006 || func_187())
	{
		return false;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bParam0, 6))
	{
		if (func_186())
		{
			return false;
		}
	}
	return true;
}

bool func_186()
{
	return UNK_0x4925CBEE5D8BE14B(UNK_0x2B6E0A53779D29EA(), Global_1387714);
}

int func_187()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_188()
{
	return func_166();
}

bool func_189(int iParam0, int iParam1, int iParam2)
{
	if (!func_80())
	{
		return false;
	}
	return func_182(iParam0, iParam1, iParam2);
}

int func_190(char* sParam0, char* sParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return UNK_0x12AB0310C2281427(&cVar0);
}

bool func_191()
{
	return Global_2543673.f_1;
}

bool func_192()
{
	if (Global_1370715.f_2)
	{
		return true;
	}
	return func_193();
}

bool func_193()
{
	return func_188();
}

void func_194(int iParam0)
{
	Global_2547060.f_1072 = iParam0;
}

bool func_195()
{
	if (func_196("HLP_TAXI3"))
	{
		return true;
	}
	if (func_196("HLP_SOC1"))
	{
		return true;
	}
	if (func_196("HLP_SOC2"))
	{
		return true;
	}
	return false;
}

bool func_196(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_197(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_198(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_22(uParam0, bParam2, 0);
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

bool func_199(var uParam0)
{
	return uParam0->f_1;
}

void func_200(bool bParam0)
{
	if (bParam0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142, 8))
		{
			UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142), 8);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142, 8))
	{
		UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142), 8);
	}
}

bool func_201()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142, 8);
}

void func_202()
{
	UNK_0x82E51BCA72537B6C(800);
	if (!bLocal_727 || bLocal_728)
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
		}
	}
	if (!bLocal_728)
	{
		Local_708[UNK_0x57270EE11514DC67() /*5*/].f_2 = 0;
	}
	else
	{
		Local_708[UNK_0x57270EE11514DC67() /*5*/].f_2 = 3;
	}
}

void func_203()
{
	if (func_207(&Local_62, &(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_4)))
	{
		Local_708[UNK_0x57270EE11514DC67() /*5*/].f_2 = -1;
	}
	func_204(&Local_62);
}

void func_204(var uParam0)
{
	bool bVar0;

	bVar0 = UNK_0x798A3F1296751F46();
	switch (iLocal_723)
	{
		case 0:
			if (UNK_0xEAE0D21A50E6C7F4(*uParam0, 18))
			{
				if (!func_199(&uLocal_729))
				{
					func_22(&uLocal_729, 0, 0);
				}
				if (!bVar0)
				{
					if (!UNK_0xFEBC1E4EC9E001F0())
					{
						func_76("HLP_XP1", 9000);
						func_197(&uLocal_729);
						func_22(&uLocal_729, 0, 0);
						iLocal_723++;
					}
				}
				else if (func_198(&uLocal_729, 5000, 0))
				{
					iLocal_723++;
					func_197(&uLocal_729);
					func_22(&uLocal_729, 0, 0);
				}
			}
			break;
		case 1:
			if (!bVar0)
			{
				if (!UNK_0xFEBC1E4EC9E001F0())
				{
					func_76("HLP_XP2", 9000);
					func_197(&uLocal_729);
					func_22(&uLocal_729, 0, 0);
					iLocal_723++;
				}
			}
			else if (func_198(&uLocal_729, 5000, 0))
			{
				iLocal_723++;
				func_197(&uLocal_729);
				func_22(&uLocal_729, 0, 0);
			}
			break;
		case 2:
			if (!bVar0)
			{
				if (!UNK_0xFEBC1E4EC9E001F0())
				{
					func_76("HLP_RNK1", 9000);
					func_206(1);
					Global_2537071.f_1853 = 1;
					func_205(1, 0, -1);
					func_197(&uLocal_729);
					func_22(&uLocal_729, 0, 0);
					iLocal_723++;
				}
			}
			else if (func_198(&uLocal_729, 5000, 0))
			{
				iLocal_723++;
				func_197(&uLocal_729);
				func_22(&uLocal_729, 0, 0);
			}
			break;
		case 3:
			if (!bVar0)
			{
				if (!UNK_0xFEBC1E4EC9E001F0())
				{
					func_194(0);
					if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
					{
						func_76("HLP_CASHXBX", 9000);
					}
					else if (UNK_0xBA301E03A078FA59() || UNK_0x33A494591F2C1975())
					{
						func_76("HLP_CASHPSN", 9000);
					}
					else
					{
						func_76("HLP_CASHGEN", 9000);
					}
					func_197(&uLocal_729);
					func_22(&uLocal_729, 0, 0);
					iLocal_723 = 99;
				}
			}
			else if (func_198(&uLocal_729, 5000, 0))
			{
				iLocal_723 = 99;
				func_197(&uLocal_729);
				func_22(&uLocal_729, 0, 0);
			}
			break;
		case 99:
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_720, 2))
			{
				UNK_0x5D96D8530B3D0904(&bLocal_720, 2);
			}
			break;
	}
}

void func_205(bool bParam0, bool bParam1, int iParam2)
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

void func_206(int iParam0)
{
	Global_2537071.f_4531 = iParam0;
}

bool func_207(bool bParam0, bool bParam1)
{
	float fVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	bool bVar8;

	if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 13))
	{
		if (UNK_0x9F4FE516EAACCFC5(UNK_0xC4648AFC94BA9ACC()))
		{
			vVar5 = { UNK_0xD06724447386BC29(UNK_0xC4648AFC94BA9ACC()) };
			if ((vVar5.x != 0f || vVar5.y != 0f) || vVar5.z != 0f)
			{
				UNK_0xF49D1BC9EF1C3EF4(vVar5, 0f, 0f, 0f);
				if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 14))
				{
					UNK_0x5D96D8530B3D0904(bParam0, 14);
				}
			}
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 14))
	{
		UNK_0x066C43E677C08D5C();
		UNK_0x0674E58A79778E99(bParam0, 14);
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 337, true);
	}
	func_381(bParam0);
	UNK_0xE4EBD4F12E3C46F1(1f);
	func_375(bParam0);
	func_374(UNK_0xD803B885F5E47A62());
	if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 31))
	{
		if (bParam0->f_6 > 0)
		{
			bParam0->f_32 = UNK_0x0D1736C2E221BCEA(234.0331f, -1005.203f, -98.4626f, "hei_dlc_garage_high_new");
			if (bParam0->f_32 != 0)
			{
				UNK_0x0007C2367F4F23F3(bParam0->f_32);
				UNK_0x5D96D8530B3D0904(bParam0, 31);
			}
		}
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		switch (bParam0->f_6)
		{
			case 0:
				bParam0->f_292 = 1;
				bParam0->f_293 = 0;
				bParam0->f_295 = 0;
				bParam0->f_294 = 0;
				if (UNK_0x8A22C4C08282BF26(joaat("FM_INTRO")) > 0)
				{
					bParam0->f_295 = 1;
					bParam0->f_294 = 1;
				}
				else if (UNK_0x8A22C4C08282BF26(func_373()) > 0)
				{
					bParam0->f_295 = 1;
				}
				if (!Global_2537071.f_1852)
				{
					Global_2537071.f_1852 = 1;
					UNK_0x7F2C3F971FA7A9EA(0);
				}
				if (!func_201())
				{
					func_200(1);
				}
				if (!UNK_0x757EF87A33649210() && !UNK_0xD0BB2359EC70FC37())
				{
					UNK_0x53491B90E4FD0E56(800);
				}
				if (!func_199(&(bParam0->f_15)))
				{
					func_22(&(bParam0->f_15), 0, 0);
				}
				UNK_0xE17FDF9E3068281B(&Global_1662464);
				Global_1662465 = 0;
				Global_1662467 = 0;
				Global_1662466 = 0;
				Global_1662468 = 0;
				bParam0->f_19 = { 0f, 0f, 0f };
				if (UNK_0x757EF87A33649210())
				{
					*bParam0 = 0;
					bParam0->f_4 = 0;
					bParam0->f_5 = 0;
					func_362(0, 0, 0, 1, 1, 1, 0);
					UNK_0xB5EB44E161D3DCB8(1, false);
					func_407(1);
					UNK_0x93E3BF6DC91ADAA6(1);
					UNK_0xCFC975972CBB2320("EXTRASUNNY");
					UNK_0xF60E6F759DB05AEB(19, 0, 0);
					UNK_0x448D99BAB1554268(1);
					func_361(0);
					UNK_0x98AB0CC3E937A146(0);
					func_353(1, 0);
					func_329(1, 1);
					if (UNK_0x8A22C4C08282BF26(joaat("FM_INTRO")) < 1 || !func_328())
					{
						if (bParam0->f_292)
						{
							if (func_327() == 0)
							{
								UNK_0x0CDF80057190977A("GTAO_INTRO_MALE");
								UNK_0xD37565245621B3E1(1);
							}
						}
					}
					func_320(14, 0);
					bParam0->f_6 = 1;
					*bParam0 = 0;
					UNK_0x0674E58A79778E99(bParam0, false);
					UNK_0x0674E58A79778E99(bParam0, true);
					UNK_0x0674E58A79778E99(bParam0, 2);
					UNK_0x0674E58A79778E99(bParam0, 9);
					UNK_0x5D96D8530B3D0904(bParam0, 7);
					bParam0->f_122 = UNK_0x7D6CA5F52B3748BF(-1012.787f, -2747.597f, 15f, -1052.03f, -2716.144f, 25f, 0, 1, 1, 1);
				}
				break;
			case 1:
				UNK_0x523BCC9DC80CD82F(joaat("FROGGER"));
				if (UNK_0xB87F6CF6E5628C67(joaat("FROGGER")))
				{
					if (!bParam0->f_292 || UNK_0x23239EF74F22427E())
					{
						if (func_317())
						{
							UNK_0x8001939EDF757EB8(0);
							func_312(1, 1);
							UNK_0x23F80404F3C4C299(0);
							UNK_0xA37A90C62806D848(1);
							if (!func_193())
							{
								func_311();
							}
							func_206(0);
							func_310();
							UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), Global_1312553, 1, 0, 0, 1);
							UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), true);
							UNK_0x20641932E5104B25(UNK_0x16F2683693E537C9(), false, 0);
							UNK_0x34D79252800B23FF(0);
							if (UNK_0xE4EDC4B0E92C078B(UNK_0x023428EEA3027652()))
							{
								UNK_0x516E63E474722206(UNK_0x023428EEA3027652(), 0f);
							}
							UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), true);
							bParam0->f_6 = 2;
						}
					}
				}
				break;
			case 2:
				if (!UNK_0x991B1F0980C62628())
				{
					if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 4))
					{
						if (func_309() == 65 || func_309() == 66)
						{
							UNK_0x066C43E677C08D5C();
							UNK_0xD67D6A3F0D653D93(754.2219f, 1226.831f, 356.5081f, func_308(-14.367f, 0f, 157.3524f), 100f, 0);
							func_197(&(bParam0->f_17));
							func_22(&(bParam0->f_17), 0, 0);
							UNK_0x5D96D8530B3D0904(bParam0, 4);
						}
					}
					else if (UNK_0x13896FDECC859926("FM_INTRO_START") && (UNK_0x68367101660E33F0() || func_198(&(bParam0->f_17), 5000, 0)))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 24))
						{
							if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 7))
							{
								UNK_0xC92DB9682A650680("FM_INTRO_START");
								UNK_0x5D96D8530B3D0904(bParam0, 24);
								UNK_0x5D96D8530B3D0904(bParam0, 21);
							}
						}
						else if (UNK_0x94AE52F579E2F918() > 0)
						{
							UNK_0x486B4ADE317F0689();
							UNK_0xF99F2927BEBB5EE7(6);
							if (!UNK_0x9F4FE516EAACCFC5(bParam0->f_7))
							{
								bParam0->f_7 = UNK_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
								UNK_0xE3BB8E05FCEB3FBE(bParam0->f_7, true);
							}
							UNK_0x86F44313DFA8F00C(bParam0->f_7, 754.2219f, 1226.831f, 356.5081f, -14.367f, 0f, 157.3524f, 42.2442f, 0, 1, 1, 2);
							UNK_0x86F44313DFA8F00C(bParam0->f_7, 740.7797f, 1193.923f, 351.1997f, -9.6114f, 0f, 157.8659f, 44.8314f, 6500, 0, 0, 2);
							UNK_0x91F5B0244AAE6222(bParam0->f_7, "HAND_SHAKE", 0.15f);
							UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 1, 0);
							func_307(bParam0);
							UNK_0x5D96D8530B3D0904(bParam0, 11);
							if (bParam0->f_292)
							{
								UNK_0x44E5AE27B5A88FC7(9, 9, 9, 9);
								UNK_0x9E020FDB27CA9201();
							}
							UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), true);
							if (UNK_0x757EF87A33649210())
							{
								UNK_0x82E51BCA72537B6C(800);
							}
							bParam0->f_6 = 6;
						}
					}
				}
				break;
			case 6:
				func_306(bParam0, 6);
				func_305(bParam0);
				if (func_304(bParam0, 6, 0))
				{
					UNK_0xA37A90C62806D848(1);
					bParam0->f_6 = 7;
				}
				break;
			case 7:
				if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 2))
				{
					UNK_0xA37A90C62806D848(1);
					func_76("FMIC_INTRO2", -1);
					UNK_0x5D96D8530B3D0904(bParam0, 2);
				}
				UNK_0x86F44313DFA8F00C(bParam0->f_7, -259.3686f, -553.8571f, 142.6048f, 13.2752f, -0.5186f, -143.3378f, 44.9959f, 0, 1, 1, 2);
				UNK_0x86F44313DFA8F00C(bParam0->f_7, -277.7789f, -569.962f, 142.8625f, 12.4479f, -0.5186f, -134.9992f, 44.9959f, 6000, 0, 0, 2);
				UNK_0x44E5AE27B5A88FC7(9, 13, 9, 13);
				bParam0->f_6 = 8;
				break;
			case 8:
				func_306(bParam0, 8);
				if (func_305(bParam0))
				{
					func_303(bParam0);
					if (func_304(bParam0, 8, 0))
					{
						bParam0->f_6 = 9;
					}
				}
				break;
			case 9:
				if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 10))
				{
					func_302();
					UNK_0x5D96D8530B3D0904(bParam0, 10);
				}
				UNK_0x86F44313DFA8F00C(bParam0->f_7, -4.6668f, -900.9736f, 184.887f, -1.6106f, -0.5186f, 78.3786f, 45.0069f, 0, 1, 1, 2);
				UNK_0x86F44313DFA8F00C(bParam0->f_7, -23.0087f, -896.4288f, 184.1939f, -2.8529f, -0.5186f, 81.8262f, 45.0069f, 8000, 0, 0, 2);
				if (UNK_0xDF1306B443CD3D15(bParam0->f_48, 0))
				{
					UNK_0xE898EBD25943F331(bParam0->f_48);
					UNK_0x4A4806F9D471E491(bParam0->f_48, true, 0);
					UNK_0x873BCADC75FF6D20(bParam0->f_48);
				}
				bParam0->f_6 = 10;
				break;
			case 10:
				if (UNK_0xDF1306B443CD3D15(bParam0->f_48, 0))
				{
					UNK_0x873BCADC75FF6D20(bParam0->f_48);
				}
				func_306(bParam0, 10);
				if (func_301())
				{
					if (func_300(bParam0))
					{
						if (func_303(bParam0))
						{
							if (func_304(bParam0, 10, 0))
							{
								if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
								{
									UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -2870.804f, 81.4979f, 13.1957f, 1, 0, 0, 1);
									UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), true);
								}
								fVar0 = 5000f;
								if (UNK_0xDF1306B443CD3D15(bParam0->f_92[0], 0))
								{
									UNK_0x4D3C3C0B0DE2663E(bParam0->f_92[0], 100, "FM_Intro_uber", 1);
									UNK_0xF12C1D85AFEE8FAD(bParam0->f_92[0], fVar0);
								}
								if (UNK_0xDF1306B443CD3D15(bParam0->f_92[1], 0))
								{
									UNK_0x4D3C3C0B0DE2663E(bParam0->f_92[1], 101, "FM_Intro_uber", 1);
									UNK_0xF12C1D85AFEE8FAD(bParam0->f_92[1], fVar0);
								}
								if (UNK_0xDF1306B443CD3D15(bParam0->f_92[2], 0))
								{
									UNK_0x4D3C3C0B0DE2663E(bParam0->f_92[2], 102, "FM_Intro_uber", 1);
									UNK_0xF12C1D85AFEE8FAD(bParam0->f_92[2], fVar0);
								}
								if (UNK_0xDF1306B443CD3D15(bParam0->f_92[3], 0))
								{
									UNK_0x4D3C3C0B0DE2663E(bParam0->f_92[3], 103, "FM_Intro_uber", 1);
									UNK_0xF12C1D85AFEE8FAD(bParam0->f_92[3], fVar0);
								}
								if (UNK_0xDF1306B443CD3D15(bParam0->f_92[4], 0))
								{
									UNK_0x4D3C3C0B0DE2663E(bParam0->f_92[4], 104, "FM_Intro_uber", 1);
									UNK_0xF12C1D85AFEE8FAD(bParam0->f_92[4], fVar0);
								}
								UNK_0x5D96D8530B3D0904(bParam0, 15);
								UNK_0x82E51BCA72537B6C(800);
								bParam0->f_6 = 14;
							}
						}
					}
				}
				break;
			case 14:
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					UNK_0xF60E6F759DB05AEB(16, 0, 0);
					func_299(bParam0);
					func_298(bParam0, "race_camera_1", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.1982f, 1065353216 /* Float: 1f */);
					UNK_0x10486C0590CF176C(bParam0->f_7, 1);
					UNK_0xE03C71FA3398174A(bParam0->f_7);
					UNK_0x9A8DDC7C522F5BF5(bParam0->f_7, 0);
					UNK_0x8BC9595FD2792B5D("MP_INTRO_RACE_SCENE");
					UNK_0x44E5AE27B5A88FC7(9, 12, 9, 12);
					func_296(bParam0, 14);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 5))
				{
					func_76("FMIC_RACE1", -1);
					UNK_0x5D96D8530B3D0904(bParam0, 5);
				}
				func_306(bParam0, 14);
				if (func_304(bParam0, 14, 0))
				{
					func_295(bParam0, 23539f, 0);
					UNK_0xF60E6F759DB05AEB(16, 0, 0);
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 15;
				}
				break;
			case 15:
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					func_298(bParam0, "race_camera_2", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.39f, 1065353216 /* Float: 1f */);
					func_296(bParam0, 15);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, false))
				{
					func_284(bParam0);
				}
				else if (func_283(bParam0) && func_277(bParam0))
				{
					func_275(bParam0);
				}
				func_306(bParam0, 15);
				if (func_304(bParam0, 15, 0))
				{
					func_295(bParam0, 28833.33f, 75f);
					UNK_0xF60E6F759DB05AEB(16, 0, 0);
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 16;
				}
				break;
			case 16:
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					func_274(bParam0, "race_camera_3a", "mp_intro_seq@", bParam0->f_92[4], 0f, 0f, -0.1f, 0f, 0f, 0f);
					func_296(bParam0, 16);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, false))
				{
					func_284(bParam0);
				}
				else if (func_283(bParam0) && func_277(bParam0))
				{
					func_275(bParam0);
				}
				func_306(bParam0, 16);
				if (func_304(bParam0, 16, 0))
				{
					func_295(bParam0, 29700f, 0);
					UNK_0xF60E6F759DB05AEB(16, 0, 0);
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 17;
				}
				break;
			case 17:
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					func_298(bParam0, "race_camera_3b", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216 /* Float: 1f */);
					UNK_0x5E4E98C6D98C9C57(bParam0->f_9, 0.7f);
					func_296(bParam0, 17);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 6))
				{
					UNK_0x5D96D8530B3D0904(bParam0, 6);
					func_76("FMIC_RACE2", -1);
				}
				if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, false))
				{
					func_284(bParam0);
				}
				else if (func_283(bParam0) && func_277(bParam0))
				{
					func_275(bParam0);
				}
				func_306(bParam0, 17);
				if (func_304(bParam0, 17, 0))
				{
					func_295(bParam0, 36450f, 0);
					UNK_0xF60E6F759DB05AEB(16, 0, 0);
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 18;
				}
				break;
			case 18:
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					func_298(bParam0, "race_camera_4", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216 /* Float: 1f */);
					func_296(bParam0, 18);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, false))
				{
					func_284(bParam0);
				}
				else if (func_283(bParam0) && func_277(bParam0))
				{
					func_275(bParam0);
				}
				func_306(bParam0, 18);
				if (func_273() && func_304(bParam0, 18, 0))
				{
					func_295(bParam0, 43650f, 0);
					UNK_0xF60E6F759DB05AEB(16, 0, 0);
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 19;
				}
				break;
			case 19:
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					if (UNK_0xC844350D5D58C99A(bParam0->f_92[2]))
					{
						UNK_0xA954465BA6FDEFE2(&(bParam0->f_92[2]));
					}
					if (UNK_0xC844350D5D58C99A(bParam0->f_92[3]))
					{
						UNK_0xA954465BA6FDEFE2(&(bParam0->f_92[3]));
					}
					if (UNK_0xC844350D5D58C99A(bParam0->f_92[4]))
					{
						UNK_0xA954465BA6FDEFE2(&(bParam0->f_92[4]));
					}
					func_298(bParam0, "race_camera_5", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216 /* Float: 1f */);
					func_296(bParam0, 19);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, false))
				{
					func_284(bParam0);
				}
				else
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, 6))
					{
						if (bParam0->f_32 != 0)
						{
							if (UNK_0xBD307E66C0669BFC(bParam0->f_32))
							{
								if (!UNK_0x437347B10A200C4B(bParam0->f_91, 0))
								{
									UNK_0xF2BFB495D7D174E8(bParam0->f_91, bParam0->f_32, UNK_0x12AB0310C2281427("GtaMloRoom001"));
								}
								UNK_0x837C600ECEE8ABA2("SE_MP_GARAGE_L_RADIO", false);
								iVar4 = 0;
								while (iVar4 < 8)
								{
									if (!UNK_0x437347B10A200C4B(bParam0->f_49[iVar4], 0))
									{
										UNK_0xF2BFB495D7D174E8(bParam0->f_49[iVar4], bParam0->f_32, UNK_0x12AB0310C2281427("GtaMloRoom001"));
									}
									iVar4++;
								}
								UNK_0x5D96D8530B3D0904(&(bParam0->f_3), 6);
							}
						}
					}
					if (func_283(bParam0) && func_277(bParam0))
					{
						func_275(bParam0);
					}
				}
				func_272(bParam0);
				func_271(bParam0);
				func_306(bParam0, 19);
				if (func_304(bParam0, 19, 0) && UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, false))
				{
					if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 12))
					{
						UNK_0x0674E58A79778E99(bParam0, 12);
					}
					bParam0->f_6 = 22;
				}
				else if (func_304(bParam0, 19, -4968))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 12))
					{
						UNK_0xA37A90C62806D848(1);
						UNK_0x5D96D8530B3D0904(bParam0, 12);
					}
				}
				else if (func_304(bParam0, 19, -5618))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 30))
					{
						UNK_0x82A772610883F395("MP_intro_logo", 0, 0);
						UNK_0x5D96D8530B3D0904(bParam0, 30);
					}
				}
				break;
			case 22:
				func_272(bParam0);
				func_271(bParam0);
				if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, false))
				{
					if (!UNK_0x9F4FE516EAACCFC5(bParam0->f_7))
					{
						bParam0->f_7 = UNK_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
					}
					UNK_0xE3BB8E05FCEB3FBE(bParam0->f_7, true);
					UNK_0x86F44313DFA8F00C(bParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
					UNK_0x86F44313DFA8F00C(bParam0->f_7, 228.2493f, -1006.155f, -98.1976f, -2.3097f, 0.0572f, 0.7306f, 40.033f, 6000, 0, 0, 2);
					UNK_0x91F5B0244AAE6222(bParam0->f_7, "HAND_SHAKE", 0.1f);
					UNK_0xCFFF6D0D867C649B(bParam0->f_32, UNK_0x12AB0310C2281427("GtaMloRoom001"));
					UNK_0x837C600ECEE8ABA2("SE_MP_GARAGE_L_RADIO", false);
					UNK_0xF99F2927BEBB5EE7(0);
					UNK_0x57E0CF9BF653D99A(bParam0->f_10, 0f);
					if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_91))
					{
						UNK_0xF895E10BF4C72645(bParam0->f_91, 0, 0);
					}
					if (UNK_0x562F77A7F33D2E46("MP_INTRO_RACE_SCENE"))
					{
						UNK_0x8910D3D58E0132B8("MP_INTRO_RACE_SCENE");
					}
					UNK_0x44E5AE27B5A88FC7(9, 13, 9, 13);
					func_270(bParam0);
					func_269();
					func_76("FMIC_GAR", -1);
					bParam0->f_6 = 23;
				}
				break;
			case 23:
				func_272(bParam0);
				func_271(bParam0);
				func_306(bParam0, 23);
				if (func_283(bParam0) && func_277(bParam0))
				{
					func_275(bParam0);
				}
				if (func_304(bParam0, 23, 0))
				{
					UNK_0x86F44313DFA8F00C(bParam0->f_7, 222.9166f, -999.9128f, -99.4285f, 5.5453f, 0.0572f, -57.3736f, 31.9442f, 0, 1, 1, 2);
					UNK_0x86F44313DFA8F00C(bParam0->f_7, 223.1394f, -999.8619f, -99.4078f, 5.5453f, 0.0572f, -56.2437f, 31.9442f, 3500, 0, 0, 2);
					UNK_0x57E0CF9BF653D99A(bParam0->f_10, 0f);
					if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_91))
					{
						UNK_0xF895E10BF4C72645(bParam0->f_91, 0, 0);
					}
					func_267(bParam0, 0);
					func_267(bParam0, 1);
					func_267(bParam0, 5);
					func_267(bParam0, 6);
					bParam0->f_6 = 24;
				}
				break;
			case 24:
				func_272(bParam0);
				func_271(bParam0);
				func_306(bParam0, 24);
				if (func_283(bParam0) && func_277(bParam0))
				{
					func_275(bParam0);
				}
				if (func_304(bParam0, 24, 0))
				{
					bParam0->f_6 = 27;
				}
				break;
			case 27:
				func_272(bParam0);
				func_271(bParam0);
				UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -1148.286f, -1639.737f, 5.106698f, 1, 0, 0, 1);
				UNK_0x5D96D8530B3D0904(bParam0, 13);
				UNK_0x86F44313DFA8F00C(bParam0->f_7, 226.4832f, -978.9647f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0, 1, 1, 2);
				UNK_0x86F44313DFA8F00C(bParam0->f_7, 226.4608f, -978.0541f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 1500, 3, 3, 2);
				UNK_0xF60E6F759DB05AEB(18, 0, 0);
				func_267(bParam0, 2);
				func_267(bParam0, 7);
				UNK_0x71199B01895C6202(func_266());
				if (UNK_0xC844350D5D58C99A(bParam0->f_91))
				{
					UNK_0xEBA53F35D0085654(&(bParam0->f_91));
				}
				UNK_0x5D96D8530B3D0904(bParam0, 29);
				bParam0->f_6 = 28;
				break;
			case 28:
				func_272(bParam0);
				func_271(bParam0);
				if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 8))
				{
					UNK_0x5D96D8530B3D0904(bParam0, 8);
				}
				if (func_283(bParam0) && func_277(bParam0))
				{
					func_275(bParam0);
				}
				func_306(bParam0, 28);
				if ((UNK_0x13896FDECC859926("FM_INTRO_DRIVE_START") && UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, 3)) && func_304(bParam0, 28, 0))
				{
					bParam0->f_6 = 29;
				}
				break;
			case 29:
				if (bParam0->f_295)
				{
					if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
					{
						if (func_263(bParam0))
						{
							UNK_0x29E8331978B73E7F(false, "MP_Male_Character", 3, joaat("MP_M_FREEMODE_01"), 0);
							UNK_0x29E8331978B73E7F(UNK_0x16F2683693E537C9(), "MP_Female_Character", 0, false, 0);
						}
						else
						{
							UNK_0x29E8331978B73E7F(UNK_0x16F2683693E537C9(), "MP_Male_Character", 0, false, 0);
							UNK_0x29E8331978B73E7F(false, "MP_Female_Character", 3, joaat("MP_F_FREEMODE_01"), 0);
						}
					}
				}
				else if (func_263(bParam0))
				{
					UNK_0x29E8331978B73E7F(false, "MP_Male_Character", 3, joaat("MP_M_FREEMODE_01"), 0);
				}
				else
				{
					UNK_0x29E8331978B73E7F(false, "MP_Female_Character", 3, joaat("MP_F_FREEMODE_01"), 0);
				}
				if (!UNK_0x437347B10A200C4B(bParam0->f_35, 0))
				{
					UNK_0x29E8331978B73E7F(bParam0->f_35, "LAMAR", 0, false, 0);
				}
				if (!UNK_0x437347B10A200C4B(bParam0->f_34, 0))
				{
					UNK_0x29E8331978B73E7F(bParam0->f_34, "MP_Lamar_Car", 0, false, 0);
				}
				if (!UNK_0x437347B10A200C4B(bParam0->f_33, 0))
				{
					UNK_0x4A4806F9D471E491(bParam0->f_33, true, 0);
					UNK_0x29E8331978B73E7F(bParam0->f_33, "MP_Plane", 0, false, 0);
				}
				func_261(bParam0);
				UNK_0xCD7E6F59323AEBCB("CONTRAILS", 0);
				UNK_0x44E5AE27B5A88FC7(9, 9, 9, 9);
				func_76("FMIC_TENN", -1);
				UNK_0x4C902758BEA97C68(4);
				func_253(1, 1, 1, 0, 0, 0);
				bParam0->f_6 = 30;
				break;
			case 30:
				if (UNK_0x22A8E52414415B76())
				{
					if (bParam0->f_32 != 0)
					{
						UNK_0x25BB71BA267FE042(bParam0->f_32);
					}
					func_252(bParam0);
					if (bParam0->f_293)
					{
						bParam0->f_26 = (UNK_0x1C0640BA9A7327B3() - bParam0->f_13);
					}
					else
					{
						bParam0->f_26 = 52618;
						bParam0->f_27 = 52618;
					}
					bParam0->f_6 = 31;
				}
				break;
			case 31:
				if (bParam0->f_295)
				{
					if (func_263(bParam0))
					{
						if (UNK_0x3148AE92ED70DC30("MP_Female_Character", 0))
						{
							if (UNK_0xDF1306B443CD3D15(bParam0->f_34, 0))
							{
								if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
								{
									if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
									{
										UNK_0x5B1D360B9C6F0A09(UNK_0x16F2683693E537C9(), bParam0->f_34, 20000, false, 1f, 1048592, 0);
									}
								}
							}
						}
					}
					else if (UNK_0x3148AE92ED70DC30("MP_Male_Character", 0))
					{
						if (UNK_0xDF1306B443CD3D15(bParam0->f_34, 0))
						{
							if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
							{
								if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
								{
									UNK_0x5B1D360B9C6F0A09(UNK_0x16F2683693E537C9(), bParam0->f_34, 20000, false, 1f, 1048592, 0);
								}
							}
						}
					}
				}
				if (UNK_0x3148AE92ED70DC30("LAMAR", 0))
				{
					if (UNK_0xDF1306B443CD3D15(bParam0->f_34, 0))
					{
						if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_35))
						{
							if (!UNK_0x405E212DDE472467(bParam0->f_35, 0))
							{
								UNK_0x5B1D360B9C6F0A09(bParam0->f_35, bParam0->f_34, 20000, -1, 1f, 1048592, 0);
								UNK_0xF895E10BF4C72645(bParam0->f_35, 0, 0);
							}
						}
					}
				}
				if (UNK_0x3148AE92ED70DC30("MP_Lamar_Car", 0))
				{
					if (UNK_0xDF1306B443CD3D15(bParam0->f_34, 0))
					{
						UNK_0x56FDC9ADE35F7DB0(bParam0->f_34, true, true, 0);
						UNK_0xA47B46945FF6DE74(bParam0->f_34, -1028.406f, -2732.782f, 19.5931f, 1, 0, 0, 1);
						UNK_0xD8F6A53F4799FAFE(bParam0->f_34, -106.11f);
						func_251(bParam0, 3099.997f);
						UNK_0x05CA0E7946B27A19(bParam0->f_34, 1);
					}
				}
				if (UNK_0xEABED1927EFB48CA(0))
				{
					UNK_0xF60E6F759DB05AEB(21, 0, 0);
					func_296(bParam0, 33);
					func_298(bParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216 /* Float: 1f */);
				}
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 29))
				{
					if (UNK_0xDED29B1D7D52D5A3() || UNK_0x8F677B1F58B4741C() > 3254)
					{
						UNK_0x0674E58A79778E99(bParam0, 29);
					}
				}
				if ((func_250(bParam0) && func_249(bParam0)) && !UNK_0x22A8E52414415B76())
				{
					if (bParam0->f_293)
					{
						bParam0->f_28 = (UNK_0x1C0640BA9A7327B3() - bParam0->f_13);
					}
					else
					{
						bParam0->f_29 = 134784;
						if (func_263(bParam0))
						{
							bParam0->f_28 = 134784;
						}
						else
						{
							bParam0->f_28 = 134784;
						}
					}
					UNK_0xDC355804A9511111();
					UNK_0x386090053886DF05();
					if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 7))
					{
						UNK_0xC92DB9682A650680("FM_INTRO_DRIVE_START");
						UNK_0x5D96D8530B3D0904(bParam0, 21);
					}
					if (!UNK_0x154B5473FBFD0156())
					{
						UNK_0x55BE34EDDEA0AC9E(0);
					}
					if (!UNK_0xEAE0D21A50E6C7F4(*bParam1, true))
					{
						UNK_0x5D96D8530B3D0904(bParam1, true);
					}
					func_248(bParam0);
					func_247(bParam0);
					func_253(0, 1, 1, 0, 0, 0);
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					UNK_0x0674E58A79778E99(bParam0, 13);
					bParam0->f_6 = 33;
				}
				else
				{
					if (bParam0->f_293)
					{
						bParam0->f_13 = (UNK_0x1C0640BA9A7327B3() - (bParam0->f_26 + UNK_0x8F677B1F58B4741C()));
					}
					if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 22))
					{
						if (UNK_0x90AE01DE9DD05E85() == 1)
						{
							UNK_0xF60E6F759DB05AEB(19, 59, 0);
							UNK_0x5D96D8530B3D0904(bParam0, 22);
						}
					}
					if (func_245(bParam0))
					{
						if (UNK_0x90AE01DE9DD05E85() == 2)
						{
							if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 18))
							{
								UNK_0x5D96D8530B3D0904(bParam0, 18);
							}
							if (UNK_0x8F677B1F58B4741C() > 23146)
							{
								if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 27))
								{
									UNK_0xE81656B429E5C4B5("scr_mp_plane_landing_tyre_smoke", bParam0->f_33, -2.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216 /* Float: 1f */, 0, 0, 0);
									UNK_0x5D96D8530B3D0904(bParam0, 27);
								}
								if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 28))
								{
									UNK_0xE81656B429E5C4B5("scr_mp_plane_landing_tyre_smoke", bParam0->f_33, 3.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216 /* Float: 1f */, 0, 0, 0);
									UNK_0x5D96D8530B3D0904(bParam0, 28);
								}
							}
							UNK_0x692F7AFAFD440081(4950f);
							if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 22))
							{
								UNK_0xF60E6F759DB05AEB(21, 0, 0);
								UNK_0x0674E58A79778E99(bParam0, 22);
							}
							if (UNK_0x8F677B1F58B4741C() > 23254)
							{
								func_244(bParam0);
							}
						}
					}
					if (UNK_0x90AE01DE9DD05E85() > 2)
					{
						func_247(bParam0);
						if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 22))
						{
							UNK_0xF60E6F759DB05AEB(21, 0, 0);
							UNK_0x5D96D8530B3D0904(bParam0, 22);
						}
						if (UNK_0xDF1306B443CD3D15(bParam0->f_34, 0))
						{
							UNK_0x8F741CB9D8AB80F4(bParam0->f_34);
							UNK_0x0882E3DC0C991680(bParam0->f_34, 2);
						}
					}
					bParam0->f_31 = UNK_0x8F677B1F58B4741C();
				}
				break;
			case 33:
				if (func_263(bParam0))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, true))
					{
						if (func_304(bParam0, 33, -5450))
						{
							if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								UNK_0x5D96D8530B3D0904(&(bParam0->f_1), true);
							}
						}
					}
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, 2))
					{
						if (func_304(bParam0, 33, -5450))
						{
							if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								UNK_0x5D96D8530B3D0904(&(bParam0->f_1), 2);
							}
						}
					}
				}
				if (!func_263(bParam0))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, true))
					{
						if (func_304(bParam0, 33, -5450))
						{
							if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
							{
								UNK_0x5D96D8530B3D0904(&(bParam0->f_1), true);
							}
						}
					}
				}
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					UNK_0x8BC9595FD2792B5D("MP_INTRO_LAMAR_DRIVE_SCENE");
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				func_306(bParam0, 33);
				func_242(bParam0);
				if (func_304(bParam0, 33, 0))
				{
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 34;
				}
				break;
			case 34:
				if (!func_263(bParam0))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, 2))
					{
						if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
						{
							UNK_0x5D96D8530B3D0904(&(bParam0->f_1), 2);
						}
					}
				}
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					if (!UNK_0x437347B10A200C4B(bParam0->f_34, 0))
					{
						UNK_0xC5940439E4EB9A33(bParam0->f_7, bParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						UNK_0x1305278186D1C53E(bParam0->f_7, bParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						UNK_0x5818C8D5303DCCF8(bParam0->f_7, 33.3479f);
						UNK_0x91F5B0244AAE6222(bParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						UNK_0xE3BB8E05FCEB3FBE(bParam0->f_7, true);
						if (!UNK_0x437347B10A200C4B(bParam0->f_35, 0))
						{
							UNK_0x4A4806F9D471E491(bParam0->f_35, false, 0);
						}
						if (!UNK_0x437347B10A200C4B(bParam0->f_36, 0))
						{
							UNK_0x4A4806F9D471E491(bParam0->f_36, true, 0);
						}
						bParam0->f_11 = -1;
						bParam0->f_11 = UNK_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
						UNK_0x6BE2EAE992FD7C26(bParam0->f_11, bParam0->f_34, UNK_0xF653B9B22DA806A9(bParam0->f_34, "seat_dside_f"));
						if (func_263(bParam0))
						{
							bParam0->f_12 = -1;
							bParam0->f_12 = UNK_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
							UNK_0x6BE2EAE992FD7C26(bParam0->f_12, bParam0->f_34, UNK_0xF653B9B22DA806A9(bParam0->f_34, "seat_pside_f"));
							UNK_0x915804B434753CBD(bParam0->f_36, bParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), bParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							UNK_0x57E0CF9BF653D99A(bParam0->f_11, 0.129f);
							UNK_0x57E0CF9BF653D99A(bParam0->f_12, 0.129f);
						}
						else
						{
							bParam0->f_12 = -1;
							bParam0->f_12 = UNK_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
							UNK_0x6BE2EAE992FD7C26(bParam0->f_12, bParam0->f_34, 0);
							UNK_0x915804B434753CBD(bParam0->f_36, bParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), bParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							UNK_0x57E0CF9BF653D99A(bParam0->f_11, 0.145f);
							UNK_0x57E0CF9BF653D99A(bParam0->f_12, 0.145f);
						}
						UNK_0xF895E10BF4C72645(bParam0->f_36, 0, 0);
						UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
					}
					func_296(bParam0, 34);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				func_306(bParam0, 34);
				func_242(bParam0);
				if (func_304(bParam0, 34, 0))
				{
					func_251(bParam0, 18966.65f);
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 35;
				}
				break;
			case 35:
				if (func_263(bParam0))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, 3))
					{
						if (func_304(bParam0, 34, 1100))
						{
							if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								UNK_0x5D96D8530B3D0904(&(bParam0->f_1), 3);
							}
						}
					}
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, 4))
					{
						if (func_304(bParam0, 34, 1100))
						{
							if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								UNK_0x5D96D8530B3D0904(&(bParam0->f_1), 4);
							}
						}
					}
				}
				if (!func_263(bParam0))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, 3))
					{
						if (func_304(bParam0, 34, 1000))
						{
							if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								UNK_0x5D96D8530B3D0904(&(bParam0->f_1), 3);
							}
						}
					}
				}
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					func_298(bParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216 /* Float: 1f */);
					if (!UNK_0x437347B10A200C4B(bParam0->f_35, 0))
					{
						UNK_0x4A4806F9D471E491(bParam0->f_35, true, 0);
					}
					if (!UNK_0x437347B10A200C4B(bParam0->f_36, 0))
					{
						UNK_0x4A4806F9D471E491(bParam0->f_36, false, 0);
					}
					if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0x437347B10A200C4B(bParam0->f_34, 0))
					{
						UNK_0x5B1D360B9C6F0A09(UNK_0x16F2683693E537C9(), bParam0->f_34, 20000, false, 1f, 1048592, 0);
						UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
					}
					func_296(bParam0, 35);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				func_306(bParam0, 35);
				func_242(bParam0);
				if (func_304(bParam0, 35, 0))
				{
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 36;
				}
				break;
			case 36:
				if (func_263(bParam0))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, 5))
					{
						if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							UNK_0x5D96D8530B3D0904(&(bParam0->f_1), 5);
						}
					}
				}
				if (!func_263(bParam0))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, 4))
					{
						if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							UNK_0x5D96D8530B3D0904(&(bParam0->f_1), 4);
						}
					}
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, 5))
					{
						if (func_304(bParam0, 36, -3750))
						{
							if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
							{
								UNK_0x5D96D8530B3D0904(&(bParam0->f_1), 5);
							}
						}
					}
				}
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					if (!UNK_0x437347B10A200C4B(bParam0->f_34, 0))
					{
						UNK_0xC5940439E4EB9A33(bParam0->f_7, bParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						UNK_0x1305278186D1C53E(bParam0->f_7, bParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						UNK_0x5818C8D5303DCCF8(bParam0->f_7, 33.3479f);
						UNK_0x91F5B0244AAE6222(bParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						UNK_0xE3BB8E05FCEB3FBE(bParam0->f_7, true);
						if (!UNK_0x437347B10A200C4B(bParam0->f_35, 0))
						{
							UNK_0x4A4806F9D471E491(bParam0->f_35, false, 0);
						}
						if (!UNK_0x437347B10A200C4B(bParam0->f_36, 0))
						{
							UNK_0x4A4806F9D471E491(bParam0->f_36, true, 0);
						}
						bParam0->f_11 = -1;
						bParam0->f_11 = UNK_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
						UNK_0x6BE2EAE992FD7C26(bParam0->f_11, bParam0->f_34, UNK_0xF653B9B22DA806A9(bParam0->f_34, "seat_dside_f"));
						if (func_263(bParam0))
						{
							bParam0->f_12 = -1;
							bParam0->f_12 = UNK_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
							UNK_0x6BE2EAE992FD7C26(bParam0->f_12, bParam0->f_34, UNK_0xF653B9B22DA806A9(bParam0->f_34, "seat_pside_f"));
							UNK_0x915804B434753CBD(bParam0->f_36, bParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), bParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							UNK_0x57E0CF9BF653D99A(bParam0->f_11, 0.363f);
							UNK_0x57E0CF9BF653D99A(bParam0->f_12, 0.363f);
						}
						else
						{
							bParam0->f_12 = -1;
							bParam0->f_12 = UNK_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
							UNK_0x6BE2EAE992FD7C26(bParam0->f_12, bParam0->f_34, 0);
							UNK_0x915804B434753CBD(bParam0->f_36, bParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), bParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							UNK_0x57E0CF9BF653D99A(bParam0->f_11, 0.298f);
							UNK_0x57E0CF9BF653D99A(bParam0->f_12, 0.298f);
						}
						UNK_0xF895E10BF4C72645(bParam0->f_36, 0, 0);
						UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
					}
					func_296(bParam0, 36);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				func_306(bParam0, 36);
				func_242(bParam0);
				if (func_304(bParam0, 36, 0))
				{
					func_251(bParam0, 42700.96f);
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 37;
				}
				break;
			case 37:
				if (func_263(bParam0))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, 6))
					{
						if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							UNK_0x5D96D8530B3D0904(&(bParam0->f_1), 6);
						}
					}
				}
				if (!func_263(bParam0))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, 6))
					{
						if (func_304(bParam0, 36, 1000))
						{
							if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								UNK_0x5D96D8530B3D0904(&(bParam0->f_1), 6);
							}
						}
					}
				}
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					func_298(bParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216 /* Float: 1f */);
					if (!UNK_0x437347B10A200C4B(bParam0->f_35, 0))
					{
						UNK_0x4A4806F9D471E491(bParam0->f_35, true, 0);
					}
					if (!UNK_0x437347B10A200C4B(bParam0->f_36, 0))
					{
						UNK_0x4A4806F9D471E491(bParam0->f_36, false, 0);
					}
					if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0x437347B10A200C4B(bParam0->f_34, 0))
					{
						UNK_0x5B1D360B9C6F0A09(UNK_0x16F2683693E537C9(), bParam0->f_34, 20000, false, 1f, 1048592, 0);
						UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
					}
					func_296(bParam0, 37);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				func_306(bParam0, 37);
				func_242(bParam0);
				if (func_304(bParam0, 37, 0))
				{
					func_251(bParam0, 51033.28f);
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 38;
				}
				break;
			case 38:
				if (func_263(bParam0))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, 7))
					{
						if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							UNK_0x5D96D8530B3D0904(&(bParam0->f_1), 7);
						}
					}
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, 8))
					{
						if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							UNK_0x5D96D8530B3D0904(&(bParam0->f_1), 8);
						}
					}
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, 9))
					{
						if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							UNK_0x5D96D8530B3D0904(&(bParam0->f_1), 9);
						}
					}
				}
				if (!func_263(bParam0))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, 7))
					{
						if (func_304(bParam0, 37, 2500))
						{
							if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								UNK_0x5D96D8530B3D0904(&(bParam0->f_1), 7);
							}
						}
					}
				}
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					func_298(bParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216 /* Float: 1f */);
					func_296(bParam0, 38);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				func_306(bParam0, 38);
				func_242(bParam0);
				if (func_304(bParam0, 38, 0))
				{
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 39;
				}
				break;
			case 39:
				if (!func_263(bParam0))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, 8))
					{
						if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							UNK_0x5D96D8530B3D0904(&(bParam0->f_1), 8);
						}
					}
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, 9))
					{
						if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							UNK_0x5D96D8530B3D0904(&(bParam0->f_1), 9);
						}
					}
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, 31))
					{
						if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							UNK_0x5D96D8530B3D0904(&(bParam0->f_1), 31);
						}
					}
				}
				if (func_263(bParam0))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, 31))
					{
						if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							UNK_0x5D96D8530B3D0904(&(bParam0->f_1), 31);
						}
					}
				}
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					if (!UNK_0x437347B10A200C4B(bParam0->f_34, 0))
					{
						UNK_0xC5940439E4EB9A33(bParam0->f_7, bParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						UNK_0x1305278186D1C53E(bParam0->f_7, bParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						UNK_0x5818C8D5303DCCF8(bParam0->f_7, 33.3479f);
						UNK_0x91F5B0244AAE6222(bParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						UNK_0xE3BB8E05FCEB3FBE(bParam0->f_7, true);
						if (!UNK_0x437347B10A200C4B(bParam0->f_35, 0))
						{
							UNK_0x4A4806F9D471E491(bParam0->f_35, false, 0);
						}
						if (!UNK_0x437347B10A200C4B(bParam0->f_36, 0))
						{
							UNK_0x4A4806F9D471E491(bParam0->f_36, true, 0);
						}
						bParam0->f_11 = -1;
						bParam0->f_11 = UNK_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
						UNK_0x6BE2EAE992FD7C26(bParam0->f_11, bParam0->f_34, UNK_0xF653B9B22DA806A9(bParam0->f_34, "seat_dside_f"));
						if (func_263(bParam0))
						{
							bParam0->f_12 = -1;
							bParam0->f_12 = UNK_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
							UNK_0x6BE2EAE992FD7C26(bParam0->f_12, bParam0->f_34, UNK_0xF653B9B22DA806A9(bParam0->f_34, "seat_pside_f"));
							UNK_0x915804B434753CBD(bParam0->f_36, bParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), bParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							UNK_0x57E0CF9BF653D99A(bParam0->f_11, 0.811f);
							UNK_0x57E0CF9BF653D99A(bParam0->f_12, 0.811f);
						}
						else
						{
							bParam0->f_12 = -1;
							bParam0->f_12 = UNK_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
							UNK_0x6BE2EAE992FD7C26(bParam0->f_12, bParam0->f_34, 0);
							UNK_0x915804B434753CBD(bParam0->f_36, bParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), bParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							UNK_0x57E0CF9BF653D99A(bParam0->f_11, 0.791f);
							UNK_0x57E0CF9BF653D99A(bParam0->f_12, 0.791f);
						}
						UNK_0xF895E10BF4C72645(bParam0->f_36, 0, 0);
						UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
					}
					func_296(bParam0, 39);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				func_306(bParam0, 39);
				func_242(bParam0);
				if (func_304(bParam0, 39, 0))
				{
					func_251(bParam0, 85050f);
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 40;
				}
				break;
			case 40:
				if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, 31))
				{
					if (func_243(&(bParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						UNK_0x5D96D8530B3D0904(&(bParam0->f_1), 31);
					}
				}
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					func_298(bParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216 /* Float: 1f */);
					UNK_0x44E5AE27B5A88FC7(9, 12, 9, 12);
					if (!UNK_0x437347B10A200C4B(bParam0->f_35, 0))
					{
						UNK_0x4A4806F9D471E491(bParam0->f_35, true, 0);
					}
					if (!UNK_0x437347B10A200C4B(bParam0->f_36, 0))
					{
						UNK_0x4A4806F9D471E491(bParam0->f_36, false, 0);
					}
					if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0x437347B10A200C4B(bParam0->f_34, 0))
					{
						UNK_0x5B1D360B9C6F0A09(UNK_0x16F2683693E537C9(), bParam0->f_34, 20000, false, 1f, 1048592, 0);
						UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
					}
					func_296(bParam0, 40);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				func_306(bParam0, 40);
				if (func_242(bParam0) && func_304(bParam0, 40, 0))
				{
					func_251(bParam0, 116366.5f);
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 41;
				}
				break;
			case 41:
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					UNK_0xF60E6F759DB05AEB(0, 0, 0);
					func_298(bParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0.235f, 0.75f);
					func_296(bParam0, 41);
					UNK_0x1103ADBBBB13BAC6("CONTRAILS", 0);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				func_306(bParam0, 41);
				if (func_304(bParam0, 41, 0))
				{
					UNK_0x6B3A6ADC56C477EC(1);
					func_251(bParam0, 127166.5f);
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 42;
				}
				break;
			case 42:
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					func_241(bParam0);
					func_298(bParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216 /* Float: 1f */);
					func_296(bParam0, 42);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				func_306(bParam0, 42);
				if (func_304(bParam0, 42, 0))
				{
					UNK_0x6B3A6ADC56C477EC(0);
					func_251(bParam0, 170800f);
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 43;
				}
				break;
			case 43:
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					func_298(bParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216 /* Float: 1f */);
					func_296(bParam0, 43);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				func_306(bParam0, 43);
				if (func_304(bParam0, 43, 0))
				{
					UNK_0x44E5AE27B5A88FC7(9, 12, 9, 12);
					func_251(bParam0, 191799.8f);
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 44;
				}
				break;
			case 44:
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					func_298(bParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216 /* Float: 1f */);
					func_296(bParam0, 44);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				func_306(bParam0, 44);
				if (func_304(bParam0, 44, 0))
				{
					func_251(bParam0, 196633.1f);
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 45;
				}
				break;
			case 45:
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					func_298(bParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216 /* Float: 1f */);
					func_296(bParam0, 45);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				func_306(bParam0, 45);
				if (func_304(bParam0, 45, 0))
				{
					func_251(bParam0, 201466.5f);
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 46;
				}
				break;
			case 46:
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					func_298(bParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216 /* Float: 1f */);
					func_296(bParam0, 46);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				func_306(bParam0, 46);
				if (func_304(bParam0, 46, 0))
				{
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 47;
				}
				break;
			case 47:
				func_240(bParam0);
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					if (!UNK_0x437347B10A200C4B(bParam0->f_34, 0))
					{
						UNK_0xC5940439E4EB9A33(bParam0->f_7, bParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						UNK_0x1305278186D1C53E(bParam0->f_7, bParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						UNK_0x5818C8D5303DCCF8(bParam0->f_7, 33.3479f);
						UNK_0x91F5B0244AAE6222(bParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						UNK_0xE3BB8E05FCEB3FBE(bParam0->f_7, true);
						if (!UNK_0x437347B10A200C4B(bParam0->f_35, 0))
						{
							UNK_0x4A4806F9D471E491(bParam0->f_35, false, 0);
						}
						if (!UNK_0x437347B10A200C4B(bParam0->f_36, 0))
						{
							UNK_0x4A4806F9D471E491(bParam0->f_36, true, 0);
						}
						bParam0->f_11 = -1;
						bParam0->f_11 = UNK_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
						UNK_0x6BE2EAE992FD7C26(bParam0->f_11, bParam0->f_34, UNK_0xF653B9B22DA806A9(bParam0->f_34, "seat_dside_f"));
						if (func_263(bParam0))
						{
							bParam0->f_12 = -1;
							bParam0->f_12 = UNK_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
							UNK_0x6BE2EAE992FD7C26(bParam0->f_12, bParam0->f_34, UNK_0xF653B9B22DA806A9(bParam0->f_34, "seat_pside_f"));
							UNK_0x915804B434753CBD(bParam0->f_36, bParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), bParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							UNK_0x57E0CF9BF653D99A(bParam0->f_11, 0.726f);
							UNK_0x57E0CF9BF653D99A(bParam0->f_12, 0.74f);
						}
						else
						{
							bParam0->f_12 = -1;
							bParam0->f_12 = UNK_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
							UNK_0x6BE2EAE992FD7C26(bParam0->f_12, bParam0->f_34, 0);
							UNK_0x915804B434753CBD(bParam0->f_36, bParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), bParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							UNK_0x57E0CF9BF653D99A(bParam0->f_11, 0.726f);
							UNK_0x57E0CF9BF653D99A(bParam0->f_12, 0.815f);
						}
						UNK_0xF895E10BF4C72645(bParam0->f_36, 0, 0);
						UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
					}
					func_296(bParam0, 47);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				func_306(bParam0, 47);
				if (func_304(bParam0, 47, 0))
				{
					func_251(bParam0, 213066.4f);
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 48;
				}
				break;
			case 48:
				func_240(bParam0);
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					func_298(bParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216 /* Float: 1f */);
					if (!UNK_0x437347B10A200C4B(bParam0->f_35, 0))
					{
						UNK_0x4A4806F9D471E491(bParam0->f_35, true, 0);
					}
					if (!UNK_0x437347B10A200C4B(bParam0->f_36, 0))
					{
						UNK_0x4A4806F9D471E491(bParam0->f_36, false, 0);
					}
					if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0x437347B10A200C4B(bParam0->f_34, 0))
					{
						UNK_0x5B1D360B9C6F0A09(UNK_0x16F2683693E537C9(), bParam0->f_34, 20000, false, 1f, 1048592, 0);
						UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
					}
					func_296(bParam0, 48);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				func_306(bParam0, 48);
				if (func_304(bParam0, 48, 0))
				{
					UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142), 3);
					func_239(bParam0, 10177.75f);
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 49;
				}
				break;
			case 49:
				func_240(bParam0);
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					func_298(bParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216 /* Float: 1f */);
					func_296(bParam0, 49);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				func_306(bParam0, 49);
				if (UNK_0x13896FDECC859926("FM_INTRO_DRIVE_END") && func_304(bParam0, 49, 0))
				{
					func_237(bParam0, 4500f);
					UNK_0x5D96D8530B3D0904(bParam0, 15);
					bParam0->f_6 = 50;
				}
				break;
			case 50:
				func_240(bParam0);
				if (!UNK_0x0F1CCD77290EE12F())
				{
					if (!UNK_0x7BCE0E6DD4A1F749())
					{
						UNK_0x82E51BCA72537B6C(250);
					}
				}
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 15))
				{
					func_298(bParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197.9f, 301f, 96.4f, 0f, 0f, 180f, 0, 1065353216 /* Float: 1f */);
					if (bParam0->f_292)
					{
						UNK_0xF59BE6DDBCFD2F1C();
						UNK_0x0674E58A79778E99(bParam0, 11);
					}
					func_296(bParam0, 50);
					UNK_0x0674E58A79778E99(bParam0, 15);
				}
				if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 20))
				{
					if (func_263(bParam0))
					{
						UNK_0xAE1670DD12E839C3("MP_INT_MCS_5_ALT2", 8);
					}
					else
					{
						UNK_0xAE1670DD12E839C3("MP_INT_MCS_5_ALT1", 8);
					}
					if (bParam0->f_295)
					{
						if (UNK_0x75EECC9B0572F772())
						{
							if (func_263(bParam0))
							{
								UNK_0xCB667BE6562FEBD1("MP_Female_Character", 0, 1);
							}
							else
							{
								UNK_0xCB667BE6562FEBD1("MP_1", 0, 1);
							}
						}
					}
					if (UNK_0x62A1F4500E8F07E0())
					{
						UNK_0x5D96D8530B3D0904(bParam0, 20);
					}
				}
				func_306(bParam0, 50);
				if (!UNK_0x437347B10A200C4B(bParam0->f_34, 0))
				{
					if (UNK_0x20D6474D5F4B9FC6(bParam0->f_34))
					{
						if (UNK_0x9C66D99E63E8E24C(bParam0->f_34) < 1f)
						{
							UNK_0xC55F2A0377488064(bParam0->f_34);
						}
					}
				}
				if (func_304(bParam0, 50, 0) && UNK_0xEAE0D21A50E6C7F4(*bParam0, 20))
				{
					if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 21))
					{
						UNK_0xC92DB9682A650680("FM_INTRO_DRIVE_END");
						UNK_0x0674E58A79778E99(bParam0, 21);
					}
					UNK_0xC55F2A0377488064(bParam0->f_34);
					bParam0->f_6 = 51;
				}
				break;
			case 51:
				if (bParam0->f_295)
				{
					if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
					{
						if (func_263(bParam0))
						{
							UNK_0x29E8331978B73E7F(UNK_0x16F2683693E537C9(), "MP_Female_Character", 0, false, 0);
						}
						else
						{
							UNK_0x29E8331978B73E7F(UNK_0x16F2683693E537C9(), "MP_1", 0, false, 0);
						}
					}
				}
				if (!UNK_0x437347B10A200C4B(bParam0->f_35, 0))
				{
					UNK_0x29E8331978B73E7F(bParam0->f_35, "LAMAR", 0, false, 0);
				}
				if (!UNK_0x437347B10A200C4B(bParam0->f_34, 0))
				{
					UNK_0x29E8331978B73E7F(bParam0->f_34, "MP_Lamar_Car", 0, false, 0);
				}
				UNK_0x5D96D8530B3D0904(bParam0, 13);
				if (UNK_0x562F77A7F33D2E46("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					UNK_0x8910D3D58E0132B8("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				UNK_0x4C902758BEA97C68(4);
				func_253(1, 1, 1, 0, 0, 0);
				bParam0->f_6 = 52;
				break;
			case 52:
				if (UNK_0x22A8E52414415B76())
				{
					UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
					if (bParam0->f_293)
					{
						bParam0->f_30 = (UNK_0x1C0640BA9A7327B3() - bParam0->f_13);
					}
					else
					{
						bParam0->f_30 = func_236(bParam0);
					}
					bParam0->f_14 = 0;
					bParam0->f_6 = 53;
				}
				break;
			case 53:
				if (bParam0->f_295)
				{
					if (func_263(bParam0))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 23))
						{
							if (UNK_0x3148AE92ED70DC30("MP_Female_Character", 0))
							{
								if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
								{
									UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
									vVar1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
									UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), UNK_0xE7D606C557C86100(vVar1.x, vVar1.y));
									UNK_0x2FB9A57162E54BAB(0f);
									UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
									UNK_0x5D96D8530B3D0904(bParam0, 23);
								}
							}
						}
					}
					else if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 23))
					{
						if (UNK_0x3148AE92ED70DC30("MP_1", 0))
						{
							if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
							{
								UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								vVar1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
								UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), UNK_0xE7D606C557C86100(vVar1.x, vVar1.y));
								UNK_0x2FB9A57162E54BAB(0f);
								UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
								UNK_0x5D96D8530B3D0904(bParam0, 23);
							}
						}
					}
				}
				if (UNK_0x3148AE92ED70DC30("LAMAR", 0))
				{
					if (UNK_0xDF1306B443CD3D15(bParam0->f_34, 0))
					{
						if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_35))
						{
							if (!UNK_0x405E212DDE472467(bParam0->f_35, 0))
							{
								UNK_0x5B1D360B9C6F0A09(bParam0->f_35, bParam0->f_34, 20000, -1, 1f, 1048592, 0);
							}
						}
					}
				}
				if (UNK_0x3148AE92ED70DC30("MP_Lamar_Car", 0))
				{
					if (UNK_0xDF1306B443CD3D15(bParam0->f_34, 0))
					{
						UNK_0xB9FD7450C0DAB575(bParam0->f_34, 1084227584 /* Float: 5f */);
					}
				}
				if (UNK_0xEABED1927EFB48CA(0))
				{
					func_235(1);
					UNK_0x2FB9A57162E54BAB(0f);
					UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
				}
				if (!func_234(UNK_0xD803B885F5E47A62()))
				{
					func_233(1);
				}
				if (UNK_0x22A8E52414415B76())
				{
					if (bParam0->f_293)
					{
						bParam0->f_13 = (UNK_0x1C0640BA9A7327B3() - (bParam0->f_30 + UNK_0x8F677B1F58B4741C()));
					}
					switch (bParam0->f_14)
					{
						case 0:
							func_232(bParam0, 0);
							break;
						case 10:
							func_232(bParam0, 1);
							break;
						case 20:
							func_232(bParam0, 2);
							break;
						case 30:
							func_232(bParam0, 3);
							break;
						case 40:
							func_232(bParam0, 4);
							break;
						case 50:
							func_232(bParam0, 5);
							break;
						case 60:
							func_232(bParam0, 6);
							break;
						case 70:
							func_232(bParam0, 7);
							break;
						case 80:
							func_232(bParam0, 8);
							break;
						case 90:
							func_232(bParam0, 9);
							break;
						case 100:
							if (UNK_0xC844350D5D58C99A(bParam0->f_36))
							{
								UNK_0xEBA53F35D0085654(&(bParam0->f_36));
							}
							break;
					}
					bParam0->f_14++;
				}
				else
				{
					UNK_0xDC355804A9511111();
					UNK_0x386090053886DF05();
					if (!UNK_0x154B5473FBFD0156())
					{
						UNK_0x55BE34EDDEA0AC9E(0);
					}
					func_253(0, 1, 1, 0, 0, 0);
					UNK_0x0674E58A79778E99(bParam0, 13);
					bParam0->f_6 = 57;
				}
				break;
			case 55:
				if (UNK_0x22A8E52414415B76())
				{
					UNK_0x152C90FB9FE48DAC();
				}
				else if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 17))
				{
					if (UNK_0x757EF87A33649210())
					{
						UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
						UNK_0x5D96D8530B3D0904(bParam0, 13);
						UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), true);
						if (bParam0->f_292)
						{
							UNK_0xF59BE6DDBCFD2F1C();
							UNK_0x0674E58A79778E99(bParam0, 11);
						}
						func_197(&(bParam0->f_17));
						func_22(&(bParam0->f_17), 0, 0);
						UNK_0x5D96D8530B3D0904(bParam0, 17);
					}
					else if (!UNK_0xD0BB2359EC70FC37())
					{
						UNK_0x53491B90E4FD0E56(250);
					}
				}
				else if (func_198(&(bParam0->f_17), 10000, 0))
				{
					if (func_231(bParam0))
					{
						func_299(bParam0);
						func_247(bParam0);
						if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
						{
							UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
							if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
							{
								UNK_0x20641932E5104B25(UNK_0x16F2683693E537C9(), true, 0);
								UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 61.3164f);
							}
						}
						if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_35))
						{
							if (!UNK_0x405E212DDE472467(bParam0->f_35, 0))
							{
								if (UNK_0xDF1306B443CD3D15(bParam0->f_34, 0))
								{
									UNK_0x5B1D360B9C6F0A09(bParam0->f_35, bParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						func_235(1);
						if (!func_234(UNK_0xD803B885F5E47A62()))
						{
							func_233(1);
						}
						func_253(0, 1, 1, 0, 0, 0);
						UNK_0xF60E6F759DB05AEB(0, 0, 0);
						if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 21))
						{
							UNK_0xC92DB9682A650680("FM_INTRO_DRIVE_END");
							UNK_0x0674E58A79778E99(bParam0, 21);
						}
						UNK_0x5D96D8530B3D0904(bParam0, true);
						UNK_0x5D96D8530B3D0904(bParam0, 15);
						bParam0->f_6 = 57;
					}
				}
				break;
			case 56:
				if (UNK_0x22A8E52414415B76())
				{
					UNK_0x152C90FB9FE48DAC();
				}
				else if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 17))
				{
					if (UNK_0x757EF87A33649210())
					{
						UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
						UNK_0x5D96D8530B3D0904(bParam0, 13);
						UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), true);
						if (bParam0->f_292)
						{
							UNK_0xF59BE6DDBCFD2F1C();
							UNK_0x0674E58A79778E99(bParam0, 11);
						}
						func_197(&(bParam0->f_17));
						func_22(&(bParam0->f_17), 0, 0);
						UNK_0x5D96D8530B3D0904(bParam0, 17);
					}
					else if (!UNK_0xD0BB2359EC70FC37())
					{
						UNK_0x53491B90E4FD0E56(250);
					}
				}
				else if (func_198(&(bParam0->f_17), 10000, 0))
				{
					if (func_283(bParam0))
					{
						func_299(bParam0);
						func_247(bParam0);
						if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
						{
							UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
							if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
							{
								UNK_0x20641932E5104B25(UNK_0x16F2683693E537C9(), true, 0);
								UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 61.3164f);
								if (UNK_0xDF1306B443CD3D15(bParam0->f_34, 0))
								{
									UNK_0x5B1D360B9C6F0A09(UNK_0x16F2683693E537C9(), bParam0->f_34, 20000, false, 1f, 1048592, 0);
								}
							}
						}
						if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_35))
						{
							if (!UNK_0x405E212DDE472467(bParam0->f_35, 0))
							{
								if (UNK_0xDF1306B443CD3D15(bParam0->f_34, 0))
								{
									UNK_0x5B1D360B9C6F0A09(bParam0->f_35, bParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						if (!func_234(UNK_0xD803B885F5E47A62()))
						{
						}
						func_253(0, 1, 1, 0, 0, 0);
						if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 21))
						{
							UNK_0xC92DB9682A650680("FM_INTRO_DRIVE_END");
							UNK_0x0674E58A79778E99(bParam0, 21);
						}
						UNK_0x82E51BCA72537B6C(250);
						UNK_0xF60E6F759DB05AEB(0, 0, 0);
						UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142), 3);
						bParam0->f_13 = (UNK_0x1C0640BA9A7327B3() - func_228(bParam0, 48, 0));
						bParam0->f_293 = 1;
						func_239(bParam0, 10177.75f);
						UNK_0x5D96D8530B3D0904(bParam0, 15);
						bParam0->f_6 = 49;
					}
				}
				break;
			case 57:
				func_306(bParam0, 57);
				bVar8 = !bParam0->f_288;
				func_216(bParam0, bVar8, 0);
				if (bParam0->f_292)
				{
					UNK_0xF59BE6DDBCFD2F1C();
					UNK_0x0674E58A79778E99(bParam0, 11);
				}
				if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_35))
				{
					UNK_0x93D47DFD0AE94949(bParam0->f_35, -1);
					UNK_0xFADC0A217229F6B5(bParam0->f_35, true);
				}
				UNK_0x7F2C3F971FA7A9EA(1);
				if (!bParam0->f_288)
				{
					func_32(115, 1, -1, 1);
					return true;
				}
				break;
			case 58:
				break;
			case 54:
				break;
			case 59:
				return true;
		}
		func_215(bParam0);
		if (!bParam0->f_291)
		{
			if (bParam0->f_293)
			{
				bParam0->f_289 = SYSTEM::TO_FLOAT((UNK_0x1C0640BA9A7327B3() - bParam0->f_13));
			}
			else
			{
				bParam0->f_289 = SYSTEM::TO_FLOAT(func_236(bParam0));
			}
			bParam0->f_290 = func_214(bParam0);
		}
		bParam0->f_291 = 0;
		if (bParam0->f_292 && UNK_0xEAE0D21A50E6C7F4(*bParam0, 11))
		{
			if (bParam0->f_293)
			{
				UNK_0x0AEDBE1D61D150AF(bParam0->f_289);
			}
			else
			{
				UNK_0x0AEDBE1D61D150AF(bParam0->f_290);
			}
		}
		func_211(bParam0);
		if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 12))
		{
			if (func_273())
			{
				func_210();
			}
		}
		if (bParam0->f_6 > 0 && bParam0->f_6 <= 57)
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 60);
				}
			}
			func_208(bParam0);
			UNK_0x857E3CE01DEA2D26();
			UNK_0x3584F71E5CA29322(9);
			UNK_0x3584F71E5CA29322(7);
			UNK_0x3584F71E5CA29322(18);
			UNK_0x3584F71E5CA29322(6);
			UNK_0x3584F71E5CA29322(3);
			UNK_0x3584F71E5CA29322(13);
			UNK_0x3584F71E5CA29322(4);
		}
		if (Global_2537071.f_1853)
		{
			UNK_0xEAB026E686C0D991(2, 187, 1);
		}
	}
	return false;
}

void func_208(bool bParam0)
{
	bool bVar0;

	if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 9))
	{
		if (bParam0->f_6 > 0)
		{
			if (!UNK_0x09BE1E6DF7B80B43())
			{
				if (!UNK_0xF35E2CBC969C0B53())
				{
					bVar0 = UNK_0xD803B885F5E47A62() + 32;
					UNK_0x804733198F0CB21A(1, bVar0);
					func_209(1);
					UNK_0x5D96D8530B3D0904(bParam0, 9);
				}
			}
			else
			{
				func_209(1);
				UNK_0x5D96D8530B3D0904(bParam0, 9);
			}
		}
	}
}

void func_209(bool bParam0)
{
	if (bParam0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142, 18))
		{
			UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142), 18);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142, 18))
	{
		UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142), 18);
	}
}

void func_210()
{
	UNK_0x6567AE843FADBA94(Global_1315685, 255, 255, 255, 255, 0);
	if (Global_1315687 == 0)
	{
		UNK_0x7E60C62A7CE58FC8(Global_1315685, "SET_BIG_LOGO_VISIBLE");
		UNK_0x3CAEA85DA607305E(true);
		UNK_0x1200CC973A2399C8(true);
		UNK_0x7E60D21B163E9D56();
		Global_1315687 = 1;
	}
}

void func_211(bool bParam0)
{
	vector3 vVar0;

	if (UNK_0xC844350D5D58C99A(bParam0->f_58[bParam0->f_90]))
	{
		if (UNK_0x437347B10A200C4B(bParam0->f_58[bParam0->f_90], 0))
		{
		}
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0->f_58[bParam0->f_90], true) };
		if (vVar0.z < -50f)
		{
			func_212(bParam0, bParam0->f_90);
		}
	}
	bParam0->f_90++;
	if (bParam0->f_90 >= 15)
	{
		bParam0->f_90 = 0;
	}
}

void func_212(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	bool bVar3;

	if (UNK_0xC844350D5D58C99A(bParam0->f_58[bParam1]))
	{
		if (UNK_0x437347B10A200C4B(bParam0->f_58[bParam1], 0))
		{
		}
		func_213(bParam1, &vVar0, &bVar3);
		UNK_0xA47B46945FF6DE74(bParam0->f_58[bParam1], vVar0, 1, 0, 0, 1);
		UNK_0xD8F6A53F4799FAFE(bParam0->f_58[bParam1], bVar3);
		UNK_0x1E9649458B15960F(bParam0->f_58[bParam1], true);
		UNK_0x51B954DAB1BCAF73(bParam0->f_58[bParam1]);
		UNK_0x20641932E5104B25(bParam0->f_58[bParam1], false, 0);
		UNK_0x4A4806F9D471E491(bParam0->f_58[bParam1], false, 0);
	}
	if (UNK_0xC844350D5D58C99A(bParam0->f_74[bParam1]))
	{
		if (UNK_0x437347B10A200C4B(bParam0->f_74[bParam1], 0))
		{
		}
		UNK_0x4A4806F9D471E491(bParam0->f_74[bParam1], false, 0);
	}
}

void func_213(bool bParam0, var uParam1, bool bParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*bParam2 = 0f;
	switch (bParam0)
	{
		case 0:
			*uParam1 = { -285.8592f, -914.3868f, 30.08f };
			*bParam2 = 77.3101f;
			break;
		case 1:
			*uParam1 = { -303.4057f, -910.434f, 30.0797f };
			*bParam2 = 77.3122f;
			break;
		case 2:
			*uParam1 = { -328.6838f, -905.0965f, 30.0783f };
			*bParam2 = 74.4975f;
			break;
		case 3:
			*uParam1 = { -353.6149f, -896.1278f, 30.0707f };
			*bParam2 = 358.6274f;
			break;
		case 4:
			*uParam1 = { -354.2628f, -915.5025f, 30.08f };
			*bParam2 = 358.0417f;
			break;
		case 5:
			*uParam1 = { -354.6489f, -935.3478f, 30.08f };
			*bParam2 = 0.5678f;
			break;
		case 6:
			*uParam1 = { -354.4816f, -953.4573f, 30.08f };
			*bParam2 = 0.4572f;
			break;
		case 7:
			*uParam1 = { -343.5193f, -967.0103f, 30.08f };
			*bParam2 = 247.6961f;
			break;
		case 8:
			*uParam1 = { -324.7872f, -974.6605f, 30.08f };
			*bParam2 = 247.7728f;
			break;
		case 9:
			*uParam1 = { -301.3824f, -977.9114f, 30.08f };
			*bParam2 = 249.2065f;
			break;
		case 10:
			*uParam1 = { -342.4198f, -1019.456f, 29.3849f };
			*bParam2 = 250.0953f;
			break;
		case 11:
			*uParam1 = { -317.1607f, -1025.859f, 29.3849f };
			*bParam2 = 250.7381f;
			break;
		case 12:
			*uParam1 = { -302.658f, -1022.401f, 29.385f };
			*bParam2 = 244.0013f;
			break;
		case 13:
			*uParam1 = { -283.3195f, -1029.469f, 29.385f };
			*bParam2 = 252.7933f;
			break;
		case 14:
			*uParam1 = { -276.4286f, -1013.534f, 29.385f };
			*bParam2 = 339.4764f;
			break;
	}
}

float func_214(bool bParam0)
{
	float fVar0;
	float fVar1;

	if (bParam0->f_6 >= 31 && bParam0->f_6 < 33)
	{
		if (func_263(bParam0))
		{
			fVar0 = SYSTEM::TO_FLOAT((bParam0->f_27 + UNK_0x8F677B1F58B4741C()));
			if (UNK_0x90AE01DE9DD05E85() > 2)
			{
				fVar1 = ((fVar0 - 134735f) / SYSTEM::TO_FLOAT(52633));
				fVar0 = (83986f + (fVar1 * 50715f));
			}
		}
		else
		{
			fVar0 = SYSTEM::TO_FLOAT((bParam0->f_27 + UNK_0x8F677B1F58B4741C()));
		}
		return fVar0;
	}
	return bParam0->f_289;
}

void func_215(bool bParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 29))
	{
		UNK_0x50BF1402EC7719E3(-1160.942f, -1657.686f, 5.129621f, 0.8912546f, -0.3982928f, -0.2168599f, 226, 130, 78, 3.999999f, 6.6f, 1f, 30f, 1f);
		UNK_0x50BF1402EC7719E3(-1157.324f, -1659.878f, 5.449264f, -0.8403507f, 0.3984679f, -0.3674699f, 226, 130, 78, 3.900002f, 8.8f, 1f, 30f, 1f);
	}
}

void func_216(bool bParam0, bool bParam1, bool bParam2)
{
	if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, false))
	{
		if (UNK_0x22A8E52414415B76())
		{
			UNK_0x55BE34EDDEA0AC9E(0);
		}
		UNK_0x93E3BF6DC91ADAA6(0);
		if (bParam0->f_292)
		{
			UNK_0xD37565245621B3E1(0);
			UNK_0xF59BE6DDBCFD2F1C();
			UNK_0x0674E58A79778E99(bParam0, 11);
		}
		if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 14))
		{
			UNK_0x066C43E677C08D5C();
			UNK_0x0674E58A79778E99(bParam0, 14);
		}
		func_227();
		func_248(bParam0);
		func_299(bParam0);
		func_247(bParam0);
		func_269();
		func_252(bParam0);
		func_270(bParam0);
		func_226(bParam0);
		func_241(bParam0);
		UNK_0xB547E3FFEB27073E();
		if (bParam2)
		{
			if (UNK_0xC844350D5D58C99A(bParam0->f_34))
			{
				UNK_0x046C362CF15F1935(&(bParam0->f_34));
			}
			if (UNK_0xC844350D5D58C99A(bParam0->f_35))
			{
				UNK_0x6DAD7906B73F064D(&(bParam0->f_35));
			}
		}
		if (UNK_0xC844350D5D58C99A(bParam0->f_36))
		{
			UNK_0xEBA53F35D0085654(&(bParam0->f_36));
		}
		if (!bParam0->f_288)
		{
			func_407(0);
		}
		func_224();
		func_217();
		func_253(0, 1, 1, 0, 0, 0);
		UNK_0x5413873D3F67BF93(false, -1);
		UNK_0xBEF52C1D400C0A44(1);
		if (UNK_0x8CD06866876216F2())
		{
			if (UNK_0xF929B1A0A409FF93())
			{
				UNK_0xF601BB024C8F11A7(0, 1);
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 21))
		{
			UNK_0xC92DB9682A650680("FM_INTRO_DRIVE_END");
			UNK_0x0674E58A79778E99(bParam0, 21);
		}
		UNK_0x448D99BAB1554268(0);
		func_361(1);
		if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 26))
		{
			func_353(1, 0);
			UNK_0x0674E58A79778E99(bParam0, 26);
		}
		Global_2439138.f_3747 = 0;
		if (!UNK_0x991B1F0980C62628())
		{
			UNK_0x999D67A3A75B2B0A(0);
		}
		UNK_0x98AB0CC3E937A146(1);
		if (bParam1)
		{
		}
		func_194(0);
		func_206(1);
		Global_2537071.f_1853 = 0;
		Global_2537071.f_1852 = 0;
		if (UNK_0x562F77A7F33D2E46("MP_INTRO_RACE_SCENE"))
		{
			UNK_0x8910D3D58E0132B8("MP_INTRO_RACE_SCENE");
		}
		if (UNK_0x562F77A7F33D2E46("MP_INTRO_LAMAR_DRIVE_SCENE"))
		{
			UNK_0x8910D3D58E0132B8("MP_INTRO_LAMAR_DRIVE_SCENE");
		}
		func_320(14, 1);
		UNK_0x34D79252800B23FF(5);
		UNK_0x1103ADBBBB13BAC6("CONTRAILS", 0);
		UNK_0xDB8844D4B7C60440(5, "FMINTRO");
		UNK_0xDB8844D4B7C60440(6, "FMINTRO");
		UNK_0xDB8844D4B7C60440(7, "FMINTRO");
		UNK_0x8D17794CE3273D70("mp_intro_seq@");
		UNK_0x8D17794CE3273D70("mp_intro_seq@ig_1_lamar_drive_female");
		UNK_0x8D17794CE3273D70("mp_intro_seq@ig_1_lamar_drive_radio");
		UNK_0x8D17794CE3273D70("mp_intro_seq@ig_1_lamar_drive_male");
		if (UNK_0xE4EDC4B0E92C078B(UNK_0x023428EEA3027652()))
		{
			UNK_0x516E63E474722206(UNK_0x023428EEA3027652(), 0.7f);
		}
		UNK_0xF91D0B1DCE756AFB(0);
		UNK_0x2FB9A57162E54BAB(0f);
		UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
		if (UNK_0x8CD06866876216F2())
		{
			UNK_0xDA46A23FFDBCF876();
			UNK_0x7F2C3F971FA7A9EA(1);
		}
		UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
		if (!UNK_0x0F1CCD77290EE12F() && !UNK_0x7BCE0E6DD4A1F749())
		{
			UNK_0x82E51BCA72537B6C(800);
		}
		UNK_0x5D96D8530B3D0904(bParam0, false);
	}
}

void func_217()
{
	func_218(0);
}

void func_218(bool bParam0)
{
	if (bParam0)
	{
		func_223();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_82(0))
		{
			func_219(0);
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

void func_219(int iParam0)
{
	if (func_222())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_221())
		{
			func_220(1, 1);
		}
		else
		{
			func_220(0, 0);
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
	if (!func_166())
	{
		Global_19486.f_1 = 3;
	}
}

void func_220(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_82(0))
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

bool func_221()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_222()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_223()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_224()
{
	if (!Global_1312575)
	{
		return;
	}
	func_225();
}

void func_225()
{
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
}

void func_226(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_232(bParam0, iVar0);
		iVar0++;
	}
}

void func_227()
{
	UNK_0x842F1AEB2FCC00B7(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 1);
	UNK_0x842F1AEB2FCC00B7(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 1);
}

int func_228(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iParam1 < 31)
	{
		iVar1 = 0;
		iVar2 = 6;
		iVar3 = 28;
	}
	else
	{
		if (bParam2)
		{
			iVar1 = bParam0->f_29;
		}
		else
		{
			iVar1 = bParam0->f_28;
		}
		iVar2 = 33;
		iVar3 = 57;
	}
	iVar0 = 0;
	while (iVar0 < (iVar3 - iVar2) + 1)
	{
		iVar4 = (iVar2 + iVar0);
		if (bParam2)
		{
			iVar1 = (iVar1 + func_230(iVar4));
		}
		else
		{
			iVar1 = (iVar1 + func_229(iVar4));
		}
		if (iParam1 == iVar4)
		{
			return iVar1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_229(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5239;
		case 8:
			return 5314;
		case 10:
			return 5274;
		case 14:
			return 7827;
		case 15:
			return 2661;
		case 16:
			return 2669;
		case 17:
			return 2491;
		case 18:
			return 3453;
		case 19:
			return 11245;
		case 23:
			return 2557;
		case 24:
			return 2059;
		case 28:
			return 1746;
		case 33:
			return 6200;
		case 34:
			return 2300;
		case 35:
			return 3933;
		case 36:
			return 8467;
		case 37:
			return 4000;
		case 38:
			return 7600;
		case 39:
			return 4700;
		case 40:
			return 5421;
		case 41:
			return 4487;
		case 42:
			return 4578;
		case 43:
			return 4664;
		case 44:
			return 2247;
		case 45:
			return 2336;
		case 46:
			return 3521;
		case 47:
			return 2510;
		case 48:
			return 3455;
		case 49:
			return 9318;
		case 50:
			return 2014;
		case 57:
			return 0;
	}
	return 0;
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5239;
		case 8:
			return 5314;
		case 10:
			return 5274;
		case 14:
			return 7827;
		case 15:
			return 2661;
		case 16:
			return 2669;
		case 17:
			return 2491;
		case 18:
			return 3453;
		case 19:
			return 11245;
		case 23:
			return 2557;
		case 24:
			return 2059;
		case 28:
			return 1746;
		case 33:
			return 6200;
		case 34:
			return 2300;
		case 35:
			return 3933;
		case 36:
			return 8467;
		case 37:
			return 4000;
		case 38:
			return 7600;
		case 39:
			return 4700;
		case 40:
			return 5421;
		case 41:
			return 4487;
		case 42:
			return 4578;
		case 43:
			return 4664;
		case 44:
			return 2247;
		case 45:
			return 2336;
		case 46:
			return 3521;
		case 47:
			return 2510;
		case 48:
			return 3455;
		case 49:
			return 9318;
		case 50:
			return 2014;
		case 57:
			return 0;
	}
	return 0;
}

bool func_231(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = joaat("IG_LAMARDAVIS");
	bVar1 = joaat("EMPEROR");
	UNK_0x523BCC9DC80CD82F(bVar0);
	UNK_0x523BCC9DC80CD82F(bVar1);
	if (UNK_0xB87F6CF6E5628C67(bVar0) && UNK_0xB87F6CF6E5628C67(bVar1))
	{
		if (!UNK_0xC844350D5D58C99A(bParam0->f_34))
		{
			bParam0->f_34 = UNK_0x122AAB0B1D6F55AD(bVar1, -198.221f, 301.8606f, 95.9455f, 148.1586f, false, false, false);
			UNK_0x5834B6B817326C89(bParam0->f_34, 1);
			UNK_0x3E5CE368CD085FFA(bParam0->f_34, 0);
			UNK_0xAA6B3A4292417750(bParam0->f_34, true, true, true, true, true, true, 1, false);
			UNK_0x0882E3DC0C991680(bParam0->f_34, 2);
		}
		else if (!UNK_0xC844350D5D58C99A(bParam0->f_35))
		{
			if (UNK_0xDF1306B443CD3D15(bParam0->f_34, 0))
			{
				bParam0->f_35 = UNK_0x36F2404464202779(26, bVar0, -195.2f, 307.1825f, 95.9455f, 143.6341f, 0, false);
				UNK_0x11AD11297DC58CC7(bParam0->f_35, true);
				UNK_0xE121AE1BBF90E186(bParam0->f_34, true);
				UNK_0xE121AE1BBF90E186(bParam0->f_35, true);
				UNK_0x6DF7BF67E86AAE86(bParam0->f_35, UNK_0xD09DF7101876AFB8(UNK_0x16F2683693E537C9()));
				UNK_0xAA6B3A4292417750(bParam0->f_35, true, true, true, true, true, true, 1, false);
			}
		}
	}
	if (!UNK_0xC844350D5D58C99A(bParam0->f_34) || !UNK_0xC844350D5D58C99A(bParam0->f_35))
	{
		return false;
	}
	return true;
}

void func_232(bool bParam0, int iParam1)
{
	if (UNK_0xC844350D5D58C99A(bParam0->f_58[iParam1]))
	{
		UNK_0xA954465BA6FDEFE2(&(bParam0->f_58[iParam1]));
	}
	if (UNK_0xC844350D5D58C99A(bParam0->f_74[iParam1]))
	{
		UNK_0xEBA53F35D0085654(&(bParam0->f_74[iParam1]));
	}
}

void func_233(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_146), 22);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_146), 22);
	}
}

bool func_234(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_146, 22);
}

void func_235(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142), 4);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142), 4);
	}
}

int func_236(bool bParam0)
{
	if (bParam0->f_6 < 31)
	{
		return UNK_0x94AE52F579E2F918();
	}
	if (bParam0->f_6 < 33)
	{
		return (bParam0->f_26 + UNK_0x8F677B1F58B4741C());
	}
	return (bParam0->f_28 + UNK_0x94AE52F579E2F918());
}

void func_237(bool bParam0, float fParam1)
{
	func_238(bParam0->f_34, 7, "FMINTRO", fParam1, 1);
}

void func_238(bool bParam0, bool bParam1, bool bParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (bParam4)
		{
			UNK_0xC55F2A0377488064(bParam0);
			UNK_0x4D3C3C0B0DE2663E(bParam0, bParam1, bParam2, 1);
		}
		else if (!UNK_0x20D6474D5F4B9FC6(bParam0))
		{
			UNK_0x4D3C3C0B0DE2663E(bParam0, bParam1, bParam2, 1);
			UNK_0xEC0EA26748A1785E(bParam0, 1);
		}
		else
		{
			iVar0 = UNK_0x1A2511CB22B86C17(bParam1, bParam2);
			if (UNK_0x60755EFECF81FC68(bParam0) != iVar0)
			{
				UNK_0x4D3C3C0B0DE2663E(bParam0, bParam1, bParam2, 1);
				UNK_0xEC0EA26748A1785E(bParam0, 1);
			}
		}
		UNK_0xF12C1D85AFEE8FAD(bParam0, (fParam3 - UNK_0x9901AABAC4D4C590(bParam0)));
	}
}

void func_239(bool bParam0, float fParam1)
{
	func_238(bParam0->f_34, 6, "FMINTRO", fParam1, 1);
}

void func_240(bool bParam0)
{
	int iVar0;
	bool bVar1;

	if (!bParam0->f_296)
	{
		iVar0 = UNK_0x12AB0310C2281427("ss1_rd1_03");
		bVar1 = iVar0;
		if (UNK_0x3FC14104C3FD24D5(bVar1))
		{
			func_9(bVar1);
			bParam0->f_296 = 1;
		}
	}
}

void func_241(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (UNK_0xC844350D5D58C99A(bParam0->f_37[iVar0]))
		{
			UNK_0xEBA53F35D0085654(&(bParam0->f_37[iVar0]));
		}
		iVar0++;
	}
	UNK_0x71199B01895C6202(joaat("G_M_Y_MEXGOON_02"));
	UNK_0x8D17794CE3273D70("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
	UNK_0x8D17794CE3273D70("amb@world_human_hang_out_street@male_a@base");
}

bool func_242(bool bParam0)
{
	int iVar0;

	if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, 5))
	{
		return true;
	}
	else
	{
		UNK_0x523BCC9DC80CD82F(joaat("G_M_Y_MEXGOON_02"));
		UNK_0x3F423BF5B8125A50("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		UNK_0x3F423BF5B8125A50("amb@world_human_hang_out_street@male_a@base");
		if ((UNK_0xB87F6CF6E5628C67(joaat("G_M_Y_MEXGOON_02")) && UNK_0xB4AE0788C1587752("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && UNK_0xB4AE0788C1587752("amb@world_human_hang_out_street@male_a@base"))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (!UNK_0xC844350D5D58C99A(bParam0->f_37[iVar0]))
				{
					bParam0->f_37[iVar0] = UNK_0x36F2404464202779(4, joaat("G_M_Y_MEXGOON_02"), -85.925f, -1233.407f, 27.759f, 0f, 0, false);
					UNK_0xE121AE1BBF90E186(bParam0->f_37[iVar0], true);
					UNK_0x11AD11297DC58CC7(bParam0->f_37[iVar0], true);
					switch (iVar0)
					{
						case 0:
							UNK_0x3E8E48829F3C7624(bParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -85.925f, -1233.407f, 27.759f, 0f, 0f, 97.75f, 1000f, -1000f, -1, 1025, false, 2, 0);
							break;
						case 1:
							UNK_0x3E8E48829F3C7624(bParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -86.487f, -1232.985f, 28.759f, 0f, 0f, -110.5f, 1000f, -1000f, -1, 1, false, 2, 0);
							break;
						case 2:
							UNK_0x3E8E48829F3C7624(bParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -82.139f, -1203.525f, 26.574f, 0f, 0f, 90.75f, 1000f, -1000f, -1, 1, false, 2, 0);
							break;
						case 3:
							UNK_0x3E8E48829F3C7624(bParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -83.539f, -1203.537f, 27.549f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, false, 2, 0);
							break;
						case 4:
							UNK_0x3E8E48829F3C7624(bParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -83.75f, -1197.136f, 26.471f, 0f, 0f, -174.5f, 1000f, -1000f, -1, 1, false, 2, 0);
							break;
						case 5:
							UNK_0xA47B46945FF6DE74(bParam0->f_37[iVar0], -82.0542f, -1199.264f, 26.592f, 1, 0, 0, 1);
							UNK_0xD8F6A53F4799FAFE(bParam0->f_37[iVar0], 76.8852f);
							UNK_0x262EF6C6306BEA6C(bParam0->f_37[iVar0], joaat("WEAPON_ASSAULTRIFLE"), 100, true, true);
							UNK_0x1E9649458B15960F(bParam0->f_37[iVar0], true);
							break;
						case 6:
							UNK_0x3E8E48829F3C7624(bParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -86f, -1222.397f, 27.417f, 0f, 0f, 98.75f, 1000f, -1000f, -1, 1, false, 2, 0);
							break;
						case 7:
							UNK_0xA47B46945FF6DE74(bParam0->f_37[iVar0], -85.5161f, -1205.781f, 26.5847f, 1, 0, 0, 1);
							UNK_0xD8F6A53F4799FAFE(bParam0->f_37[iVar0], 87.5786f);
							UNK_0x262EF6C6306BEA6C(bParam0->f_37[iVar0], joaat("WEAPON_ASSAULTRIFLE"), 100, true, true);
							UNK_0x1E9649458B15960F(bParam0->f_37[iVar0], true);
							break;
						case 8:
							UNK_0x3E8E48829F3C7624(bParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.1f, -1221.762f, 28.367f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, false, 2, 0);
							break;
						case 9:
							UNK_0x3E8E48829F3C7624(bParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.063f, -1222.918f, 28.417f, 0f, 0f, -45.5f, 1000f, -1000f, -1, 1, false, 2, 0);
							break;
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!UNK_0xC844350D5D58C99A(bParam0->f_37[iVar0]))
			{
				return false;
			}
			iVar0++;
		}
		UNK_0x71199B01895C6202(joaat("G_M_Y_MEXGOON_02"));
		UNK_0x8D17794CE3273D70("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		UNK_0x8D17794CE3273D70("amb@world_human_hang_out_street@male_a@base");
		UNK_0x5D96D8530B3D0904(&(bParam0->f_3), 5);
		return true;
	}
	return false;
}

int func_243(var uParam0, bool bParam1, bool bParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_171(uParam0, 145, bParam1, iParam5, iParam6, 0);
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
	return func_162(bParam2, iParam4, 0);
}

void func_244(bool bParam0)
{
	int iVar0;
	vector3 vVar1;

	if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 25))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			switch (iVar0)
			{
				case 0:
					vVar1 = { -1403.42f, -2437.447f, 12.9496f };
					break;
				case 1:
					vVar1 = { -1245.758f, -2311.979f, 12.9445f };
					break;
			}
			if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_98[iVar0]) && UNK_0xDF1306B443CD3D15(bParam0->f_92[iVar0], 0))
			{
				UNK_0x1E9649458B15960F(bParam0->f_92[iVar0], false);
				UNK_0x1AEF7184B203A58D(bParam0->f_92[iVar0], 10f);
				UNK_0xE9362E4D600DD12A(bParam0->f_98[iVar0], bParam0->f_92[iVar0], vVar1, 5f, 0, UNK_0x134B62B726CEC8E6(bParam0->f_92[iVar0]), 262144, 1f, 100f);
			}
			iVar0++;
		}
		UNK_0x5D96D8530B3D0904(bParam0, 25);
	}
}

bool func_245(bool bParam0)
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;

	if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, 11))
	{
		return true;
	}
	bVar5 = joaat("SHAMAL");
	UNK_0x523BCC9DC80CD82F(bVar5);
	UNK_0x523BCC9DC80CD82F(func_246());
	if (UNK_0xB87F6CF6E5628C67(bVar5))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!UNK_0xC844350D5D58C99A(bParam0->f_92[iVar0]))
			{
				switch (iVar0)
				{
					case 0:
						vVar1 = { -1358.973f, -2361.92f, 12.9502f };
						bVar4 = 149.9339f;
						break;
					case 1:
						vVar1 = { -1302.004f, -2279.378f, 12.9468f };
						bVar4 = 239.9712f;
						break;
				}
				bParam0->f_92[iVar0] = UNK_0x122AAB0B1D6F55AD(bVar5, vVar1, bVar4, false, false, false);
				UNK_0xB9FD7450C0DAB575(bParam0->f_92[iVar0], 1084227584 /* Float: 5f */);
				UNK_0x1E9649458B15960F(bParam0->f_92[iVar0], true);
				UNK_0x0882E3DC0C991680(bParam0->f_92[iVar0], 2);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!UNK_0xC844350D5D58C99A(bParam0->f_92[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	if (UNK_0xB87F6CF6E5628C67(func_246()))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!UNK_0xC844350D5D58C99A(bParam0->f_98[iVar0]))
			{
				if (UNK_0xC844350D5D58C99A(bParam0->f_92[iVar0]))
				{
					if (UNK_0xDF1306B443CD3D15(bParam0->f_92[iVar0], 0))
					{
						bParam0->f_98[iVar0] = UNK_0x852A19533F896693(bParam0->f_92[iVar0], 4, func_246(), -1, 0, false);
						UNK_0x11AD11297DC58CC7(bParam0->f_98[iVar0], true);
						UNK_0x56FDC9ADE35F7DB0(bParam0->f_92[iVar0], true, true, 0);
					}
				}
			}
			iVar0++;
		}
	}
	UNK_0x71199B01895C6202(bVar5);
	UNK_0x71199B01895C6202(func_246());
	UNK_0x5D96D8530B3D0904(&(bParam0->f_3), 11);
	return true;
}

int func_246()
{
	return UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9());
}

void func_247(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (UNK_0xC844350D5D58C99A(bParam0->f_92[iVar0]))
		{
			UNK_0xA954465BA6FDEFE2(&(bParam0->f_92[iVar0]));
		}
		if (UNK_0xC844350D5D58C99A(bParam0->f_98[iVar0]))
		{
			UNK_0xEBA53F35D0085654(&(bParam0->f_98[iVar0]));
		}
		iVar0++;
	}
	UNK_0x71199B01895C6202(joaat("SHAMAL"));
	UNK_0x71199B01895C6202(func_246());
}

void func_248(bool bParam0)
{
	int iVar0;

	if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, 2))
	{
		UNK_0x71199B01895C6202(joaat("P_CS_MP_JET_01_S"));
		if (UNK_0xC844350D5D58C99A(bParam0->f_33))
		{
			UNK_0xF690C84DADBB3551(&(bParam0->f_33));
		}
		if (bParam0->f_294)
		{
			if (UNK_0x83A8177D302E1A7E(bParam0->f_120))
			{
				UNK_0xB2C7809F92540947(bParam0->f_120, 0);
			}
			if (UNK_0x83A8177D302E1A7E(bParam0->f_121))
			{
				UNK_0xB2C7809F92540947(bParam0->f_121, 0);
			}
			if (UNK_0x25F7A4D42AF2AB93())
			{
				UNK_0x29D7581AEF4440C2();
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (UNK_0xC844350D5D58C99A(bParam0->f_104[iVar0]))
			{
				UNK_0xEBA53F35D0085654(&(bParam0->f_104[iVar0]));
			}
			iVar0++;
		}
		UNK_0x0674E58A79778E99(&(bParam0->f_3), 2);
	}
}

int func_249(bool bParam0)
{
	if (func_263(bParam0))
	{
		UNK_0x3F423BF5B8125A50("mp_intro_seq@ig_1_lamar_drive_female");
		UNK_0x3F423BF5B8125A50("mp_intro_seq@ig_1_lamar_drive_radio");
		if (UNK_0xB4AE0788C1587752("mp_intro_seq@ig_1_lamar_drive_female") && UNK_0xB4AE0788C1587752("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	else
	{
		UNK_0x3F423BF5B8125A50("mp_intro_seq@ig_1_lamar_drive_male");
		UNK_0x3F423BF5B8125A50("mp_intro_seq@ig_1_lamar_drive_radio");
		if (UNK_0xB4AE0788C1587752("mp_intro_seq@ig_1_lamar_drive_male") && UNK_0xB4AE0788C1587752("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	return 0;
}

int func_250(bool bParam0)
{
	bool bVar0;

	bVar0 = joaat("CS_LAMARDAVIS");
	if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, 10))
	{
		UNK_0x523BCC9DC80CD82F(bVar0);
		if (UNK_0xB87F6CF6E5628C67(bVar0))
		{
			if (!UNK_0xC844350D5D58C99A(bParam0->f_36))
			{
				bParam0->f_36 = UNK_0x36F2404464202779(26, bVar0, -976.6968f, -2679.861f, 35.6049f, 138.062f, 0, false);
				UNK_0x11AD11297DC58CC7(bParam0->f_36, true);
				UNK_0xE121AE1BBF90E186(bParam0->f_36, true);
				UNK_0x4A4806F9D471E491(bParam0->f_36, false, 0);
				UNK_0x6DF7BF67E86AAE86(bParam0->f_36, UNK_0xD09DF7101876AFB8(UNK_0x16F2683693E537C9()));
				UNK_0xAA6B3A4292417750(bParam0->f_36, true, true, true, true, true, true, 1, false);
				func_408(&(bParam0->f_123), 1, bParam0->f_36, "Lamar", 0, 1);
			}
		}
		if (!UNK_0xC844350D5D58C99A(bParam0->f_36))
		{
			return 0;
		}
		UNK_0x71199B01895C6202(bVar0);
		UNK_0x5D96D8530B3D0904(&(bParam0->f_3), 10);
	}
	return 1;
}

void func_251(bool bParam0, float fParam1)
{
	func_238(bParam0->f_34, 5, "FMINTRO", fParam1, 0);
}

void func_252(bool bParam0)
{
	int iVar0;

	UNK_0x71199B01895C6202(func_266());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_267(bParam0, iVar0);
		iVar0++;
	}
	if (UNK_0xC844350D5D58C99A(bParam0->f_91))
	{
		UNK_0xEBA53F35D0085654(&(bParam0->f_91));
	}
}

void func_253(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_260(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_166())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_259(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_260(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_259(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_257(UNK_0xD803B885F5E47A62())) && !func_255(UNK_0xD803B885F5E47A62(), 0)) && !func_254()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_257(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_254()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_255(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_256(-1, 0) == 8;
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

int func_256(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

bool func_257(bool bParam0)
{
	if (func_255(bParam0, 0))
	{
		return true;
	}
	if (func_258())
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

bool func_258()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_259(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

void func_260(int iParam0)
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

void func_261(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!UNK_0x437347B10A200C4B(bParam0->f_104[iVar0], 0))
		{
			UNK_0xE7EE28867F07D06D(bParam0->f_104[iVar0]);
			UNK_0x29E8331978B73E7F(bParam0->f_104[iVar0], func_262(iVar0), 0, false, 64);
		}
		iVar0++;
	}
}

char* func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_Plane_Passenger_1";
		case 1:
			return "MP_Plane_Passenger_2";
		case 2:
			return "MP_Plane_Passenger_3";
		case 3:
			return "MP_Plane_Passenger_4";
		case 4:
			return "MP_Plane_Passenger_5";
		case 5:
			return "MP_Plane_Passenger_6";
		case 6:
			return "MP_Plane_Passenger_7";
	}
	return "";
}

bool func_263(bool bParam0)
{
	if (bParam0->f_295)
	{
		return func_264();
	}
	else
	{
		return false;
	}
	return false;
}

int func_264()
{
	return func_265(UNK_0xD803B885F5E47A62());
}

int func_265(bool bParam0)
{
	if (UNK_0x134B62B726CEC8E6(UNK_0x9539D44F3E4492F6(bParam0)) == joaat("MP_F_FREEMODE_01"))
	{
		return 1;
	}
	return 0;
}

int func_266()
{
	return joaat("S_M_Y_XMECH_02");
}

void func_267(bool bParam0, int iParam1)
{
	UNK_0x71199B01895C6202(func_268(iParam1));
	if (UNK_0xC844350D5D58C99A(bParam0->f_49[iParam1]))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0->f_49[iParam1], 0))
		{
		}
		UNK_0xF4D51642B898E52B(bParam0->f_49[iParam1]);
		UNK_0xA954465BA6FDEFE2(&(bParam0->f_49[iParam1]));
	}
}

int func_268(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return joaat("PENUMBRA");
		case 1:
			return joaat("FELTZER2");
		case 2:
			return joaat("COQUETTE");
		case 3:
			return joaat("FELON2");
		case 4:
			return joaat("SABREGT");
		case 5:
			return joaat("DUBSTA");
		case 6:
			return joaat("TORNADO");
		case 7:
			return joaat("MONROE");
	}
	return joaat("TAILGATER");
}

void func_269()
{
	Global_1315687 = 0;
	if (UNK_0x83D8570832F172A7(Global_1315685))
	{
		UNK_0x7E60C62A7CE58FC8(Global_1315685, "SET_BIG_LOGO_VISIBLE");
		UNK_0x3CAEA85DA607305E(true);
		UNK_0x1200CC973A2399C8(false);
		UNK_0x7E60D21B163E9D56();
		UNK_0xE17FDF9E3068281B(&Global_1315685);
	}
}

void func_270(bool bParam0)
{
	var uVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (UNK_0xC844350D5D58C99A(bParam0->f_92[iVar1]))
		{
			uVar0 = bParam0->f_92[iVar1];
			UNK_0x2ABAFAE29D459CE5(&uVar0);
		}
		if (UNK_0xC844350D5D58C99A(bParam0->f_98[iVar1]))
		{
			uVar0 = bParam0->f_98[iVar1];
			UNK_0x2ABAFAE29D459CE5(&uVar0);
		}
		iVar1++;
	}
	UNK_0x71199B01895C6202(joaat("CHEETAH"));
	UNK_0x71199B01895C6202(joaat("MONROE"));
	UNK_0x71199B01895C6202(joaat("ENTITYXF"));
	UNK_0x71199B01895C6202(joaat("FELTZER2"));
	UNK_0xDB8844D4B7C60440(100, "FM_Intro_uber");
	UNK_0xDB8844D4B7C60440(101, "FM_Intro_uber");
	UNK_0xDB8844D4B7C60440(102, "FM_Intro_uber");
	UNK_0xDB8844D4B7C60440(103, "FM_Intro_uber");
	UNK_0xDB8844D4B7C60440(104, "FM_Intro_uber");
	UNK_0x8D17794CE3273D70("mp_intro_seq@");
}

void func_271(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0->f_49[2]))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0->f_49[2], 0))
		{
			UNK_0x8F741CB9D8AB80F4(bParam0->f_49[2]);
		}
	}
	if (UNK_0xC844350D5D58C99A(bParam0->f_49[4]))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0->f_49[4], 0))
		{
			UNK_0x8F741CB9D8AB80F4(bParam0->f_49[4]);
		}
	}
}

void func_272(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0->f_49[2]))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0->f_49[2], 0))
		{
			UNK_0xF50D17A63556B8D4(bParam0->f_49[2], 4, 0, 1f);
		}
	}
}

bool func_273()
{
	if (UNK_0x0C4B4836B745568C())
	{
		return false;
	}
	if (!UNK_0x83D8570832F172A7(Global_1315685))
	{
		Global_1315685 = UNK_0xB01F55A0FD1CFD49("GTAV_ONLINE");
		return false;
	}
	return true;
}

void func_274(bool bParam0, bool bParam1, bool bParam2, bool bParam3, vector3 vParam4, vector3 vParam7)
{
	if (UNK_0xC844350D5D58C99A(bParam3))
	{
		if (UNK_0x437347B10A200C4B(bParam3, 0))
		{
		}
		if (!UNK_0x9F4FE516EAACCFC5(bParam0->f_8))
		{
			bParam0->f_8 = UNK_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", false);
		}
		bParam0->f_9 = -1;
		bParam0->f_9 = UNK_0xE9744DB7B8CA6965(vParam4, vParam7, 2);
		UNK_0x6BE2EAE992FD7C26(bParam0->f_9, bParam3, 0);
		UNK_0x93E9ED66DAB9FBE3(bParam0->f_8, bParam0->f_9, bParam1, bParam2);
		UNK_0xE3BB8E05FCEB3FBE(bParam0->f_8, true);
		UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 1, 0);
	}
}

void func_275(bool bParam0)
{
	if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, 3))
	{
		UNK_0xB210A5904CCBDC01("CONTRAILS");
		if (func_263(bParam0))
		{
			UNK_0x8E590B419F1E5182("MP_INTRO_CONCAT", 103, 8);
		}
		else
		{
			UNK_0x8E590B419F1E5182("MP_INTRO_CONCAT", 31, 8);
		}
		if (UNK_0x75EECC9B0572F772())
		{
			if (bParam0->f_295)
			{
				if (func_263(bParam0))
				{
					UNK_0xCB667BE6562FEBD1("MP_Female_Character", 0, 1);
				}
				else
				{
					UNK_0xCB667BE6562FEBD1("MP_Male_Character", 0, 1);
				}
			}
			func_276();
		}
		if (UNK_0x62A1F4500E8F07E0())
		{
			UNK_0x5D96D8530B3D0904(&(bParam0->f_3), 3);
		}
	}
}

void func_276()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		UNK_0xCB667BE6562FEBD1(func_262(iVar0), 0, 1);
		iVar0++;
	}
}

bool func_277(bool bParam0)
{
	int iVar0;
	vector3 vVar1;

	vVar1 = { -1200f, -1490f, 142.385f };
	if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, 2))
	{
		UNK_0x523BCC9DC80CD82F(joaat("P_CS_MP_JET_01_S"));
		UNK_0x523BCC9DC80CD82F(joaat("MP_M_FREEMODE_01"));
		UNK_0x523BCC9DC80CD82F(joaat("MP_F_FREEMODE_01"));
		if (bParam0->f_294)
		{
			UNK_0x9E5E60D8C63FD9D1();
		}
		if (((UNK_0xB87F6CF6E5628C67(joaat("P_CS_MP_JET_01_S")) && UNK_0xB87F6CF6E5628C67(joaat("MP_M_FREEMODE_01"))) && UNK_0xB87F6CF6E5628C67(joaat("MP_F_FREEMODE_01"))) && (!bParam0->f_294 || UNK_0x25F7A4D42AF2AB93()))
		{
			bParam0->f_33 = UNK_0x7707E48765093646(joaat("P_CS_MP_JET_01_S"), vVar1, false, false, false);
			UNK_0x25BD67336EA4AECE(bParam0->f_33, 3000);
			UNK_0x120A395B0ECB8EA5(bParam0->f_33, false);
			UNK_0x4A4806F9D471E491(bParam0->f_33, false, 0);
			if (bParam0->f_294)
			{
				bParam0->f_120 = UNK_0xC1879030EB463216("scr_mp_intro_plane_exhaust", bParam0->f_33, -5.403f, -8f, -2.2f, 0f, 0f, 0f, 1f, 0, 0, 0);
				bParam0->f_121 = UNK_0xC1879030EB463216("scr_mp_intro_plane_exhaust", bParam0->f_33, 6.629f, -8f, -2.2f, 0f, 0f, 0f, 1f, 0, 0, 0);
			}
			if (bParam0->f_295)
			{
				func_281(bParam0);
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_280(bParam0, iVar0))
				{
					bParam0->f_104[iVar0] = UNK_0x36F2404464202779(26, joaat("MP_F_FREEMODE_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, false);
				}
				else
				{
					bParam0->f_104[iVar0] = UNK_0x36F2404464202779(26, joaat("MP_M_FREEMODE_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, false);
				}
				if (func_279(bParam0, iVar0))
				{
					if (!UNK_0x437347B10A200C4B(UNK_0x9539D44F3E4492F6(UNK_0x117658E336116132(bParam0->f_112[iVar0])), 0))
					{
					}
					UNK_0x7237EE202FA06DBA(UNK_0x9539D44F3E4492F6(UNK_0x117658E336116132(bParam0->f_112[iVar0])), bParam0->f_104[iVar0]);
					UNK_0xE7EE28867F07D06D(bParam0->f_104[iVar0]);
				}
				else
				{
					func_278(bParam0, iVar0);
				}
				iVar0++;
			}
			UNK_0x71199B01895C6202(joaat("P_CS_MP_JET_01_S"));
			UNK_0x5D96D8530B3D0904(&(bParam0->f_3), 2);
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_278(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], false, 21, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], true, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 2, 9, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 3, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 4, 9, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 5, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 6, 4, 8, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 7, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 8, 15, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 9, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 10, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 11, 10, false, 0);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], false);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], true);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 2);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 3);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 4);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 5);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 6);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 7);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 8);
			break;
		case 1:
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], false, 13, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], true, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 2, 5, 4, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 3, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 4, 10, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 5, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 6, 10, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 7, 11, 2, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 8, 13, 6, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 9, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 10, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 11, 10, false, 0);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], false);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], true);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 2);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 3);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 4);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 5);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 6);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 7);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 8);
			break;
		case 2:
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], false, 15, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], true, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 2, true, 4, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 3, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 4, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 5, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 6, true, 7, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 7, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 8, 2, 9, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 9, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 10, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 11, 6, false, 0);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], false);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], true);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 2);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 3);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 4);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 5);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 6);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 7);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 8);
			break;
		case 3:
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], false, 14, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], true, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 2, 5, 3, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 3, 3, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 4, true, 6, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 5, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 6, 11, 5, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 7, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 8, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 9, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 10, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 11, 3, 12, 0);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], false);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], true);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 2);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 3);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 4);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 5);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 6);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 7);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 8);
			break;
		case 4:
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], false, 18, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], true, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 2, 15, 3, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 3, 15, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 4, 2, 5, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 5, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 6, 4, 6, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 7, 4, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 8, 3, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 9, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 10, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 11, 4, false, 0);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], false);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], true);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 2);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 3);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 4);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 5);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 6);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 7);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 8);
			break;
		case 5:
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], false, 27, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], true, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 2, 7, 3, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 3, 11, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 4, 4, 8, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 5, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 6, 13, 14, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 7, 5, 3, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 8, 3, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 9, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 10, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 11, 2, 7, 0);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], false);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], true);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 2);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 3);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 4);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 5);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 6);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 7);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 8);
			break;
		case 6:
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], false, 16, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], true, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 2, 15, true, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 3, 3, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 4, 5, 6, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 5, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 6, 2, 8, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 7, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 8, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 9, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 10, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0->f_104[iParam1], 11, 3, 7, 0);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], false);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], true);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 2);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 3);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 4);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 5);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 6);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 7);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_104[iParam1], 8);
			break;
	}
}

bool func_279(bool bParam0, int iParam1)
{
	if ((bParam0->f_295 && bParam0->f_112[iParam1] != -1) && func_14(UNK_0x117658E336116132(bParam0->f_112[iParam1]), 0, 1))
	{
		return true;
	}
	return false;
}

int func_280(bool bParam0, int iParam1)
{
	if (func_279(bParam0, iParam1))
	{
		return func_265(UNK_0x117658E336116132(bParam0->f_112[iParam1]));
	}
	else if (((iParam1 == 3 || iParam1 == 4) || iParam1 == 5) || iParam1 == 6)
	{
		return 1;
	}
	return 0;
}

void func_281(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = 0;
	bVar1 = false;
	while (bVar1 < 7)
	{
		bParam0->f_112[bVar1] = -1;
		bVar1++;
	}
	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = UNK_0x117658E336116132(bVar1);
		if (func_14(bVar2, 0, 1))
		{
			if (UNK_0xD803B885F5E47A62() != bVar2)
			{
				if (iVar0 < 4)
				{
					bParam0->f_112[func_282(iVar0)] = bVar1;
					iVar0++;
				}
			}
		}
		bVar1++;
	}
}

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 0;
		case 3:
			return 4;
		case 4:
			return 1;
		case 5:
			return 3;
		case 6:
			return 2;
	}
	return 0;
}

bool func_283(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = joaat("IG_LAMARDAVIS");
	bVar1 = joaat("EMPEROR");
	if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, 9))
	{
		return true;
	}
	UNK_0x523BCC9DC80CD82F(bVar0);
	UNK_0x523BCC9DC80CD82F(bVar1);
	UNK_0x36187931D29E5BBE(5, "FMINTRO");
	UNK_0x36187931D29E5BBE(6, "FMINTRO");
	UNK_0x36187931D29E5BBE(7, "FMINTRO");
	UNK_0x3F423BF5B8125A50("mp_intro_seq@");
	if (((((UNK_0xB87F6CF6E5628C67(bVar0) && UNK_0xB87F6CF6E5628C67(bVar1)) && UNK_0x3DDA6C6A285628E4(5, "FMINTRO")) && UNK_0x3DDA6C6A285628E4(6, "FMINTRO")) && UNK_0x3DDA6C6A285628E4(7, "FMINTRO")) && UNK_0xB4AE0788C1587752("mp_intro_seq@"))
	{
		if (!UNK_0xC844350D5D58C99A(bParam0->f_34))
		{
			UNK_0x536F1BE96C726C4B(-1034.035f, -2730.485f, 19.0565f, 3f, 1, 0, 0, false);
			bParam0->f_34 = UNK_0x122AAB0B1D6F55AD(bVar1, -1032.322f, -2731.192f, 19.0658f, 239.2169f, false, false, false);
			UNK_0x5834B6B817326C89(bParam0->f_34, 1);
			UNK_0x3E5CE368CD085FFA(bParam0->f_34, 0);
			UNK_0xAA6B3A4292417750(bParam0->f_34, true, true, true, true, true, true, 1, false);
		}
		else if (!UNK_0xC844350D5D58C99A(bParam0->f_35))
		{
			if (UNK_0xDF1306B443CD3D15(bParam0->f_34, 0))
			{
				bParam0->f_35 = UNK_0x36F2404464202779(26, bVar0, -1031.6f, -2730.15f, 20.15f, 143.6341f, 0, false);
				UNK_0x5B1D360B9C6F0A09(bParam0->f_35, bParam0->f_34, 20000, -1, 1f, 1048592, 0);
				UNK_0x11AD11297DC58CC7(bParam0->f_35, true);
				UNK_0xE121AE1BBF90E186(bParam0->f_34, true);
				UNK_0xE121AE1BBF90E186(bParam0->f_35, true);
				UNK_0x6DF7BF67E86AAE86(bParam0->f_35, UNK_0xD09DF7101876AFB8(UNK_0x16F2683693E537C9()));
				UNK_0xAA6B3A4292417750(bParam0->f_35, true, true, true, true, true, true, 1, false);
			}
		}
	}
	if (!UNK_0xC844350D5D58C99A(bParam0->f_34) || !UNK_0xC844350D5D58C99A(bParam0->f_35))
	{
		return false;
	}
	UNK_0x71199B01895C6202(bVar0);
	UNK_0x71199B01895C6202(bVar1);
	UNK_0x5D96D8530B3D0904(&(bParam0->f_3), 9);
	return true;
}

void func_284(bool bParam0)
{
	int iVar0;

	if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, false))
	{
		func_294();
		func_292();
		if (func_286(bParam0))
		{
			if (func_285(bParam0))
			{
				if (!UNK_0x9F4FE516EAACCFC5(bParam0->f_7))
				{
					bParam0->f_7 = UNK_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
				}
				UNK_0x86F44313DFA8F00C(bParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
				iVar0 = 0;
				while (iVar0 < 8)
				{
					UNK_0x71199B01895C6202(func_268(iVar0));
					iVar0++;
				}
				UNK_0x71199B01895C6202(func_266());
				UNK_0x5D96D8530B3D0904(&(bParam0->f_3), false);
			}
		}
	}
}

bool func_285(bool bParam0)
{
	bool bVar0;

	bVar0 = func_266();
	if (!UNK_0xC844350D5D58C99A(bParam0->f_91))
	{
		if (UNK_0xC844350D5D58C99A(bParam0->f_49[2]))
		{
			if (UNK_0x3FC14104C3FD24D5(bVar0))
			{
				if (UNK_0xB87F6CF6E5628C67(bVar0))
				{
					if (UNK_0xB4AE0788C1587752("MP_INTRO_SEQ@"))
					{
						if (!UNK_0x437347B10A200C4B(bParam0->f_49[2], 0))
						{
							bParam0->f_10 = UNK_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
							UNK_0x6BE2EAE992FD7C26(bParam0->f_10, bParam0->f_49[2], 0);
							bParam0->f_91 = UNK_0x36F2404464202779(4, bVar0, 226.6826f, -998.5228f, -99.9999f, 63.813f, 0, false);
							UNK_0x11AD11297DC58CC7(bParam0->f_91, true);
							UNK_0x915804B434753CBD(bParam0->f_91, bParam0->f_10, "MP_INTRO_SEQ@", "MP_Mech_Fix", 1000f, -1000f, 64, 0, 1148846080, 0);
							UNK_0xC90224D9E95E5E3A(bParam0->f_10, true);
							UNK_0x1E9649458B15960F(bParam0->f_91, true);
							UNK_0x20641932E5104B25(bParam0->f_91, false, 0);
							UNK_0x650567883F5E3136(bParam0->f_91, joaat("GADGET_PARACHUTE"));
							UNK_0x64F9F278AB9DCA2C(bParam0->f_91, false, true, true, 0);
							UNK_0x64F9F278AB9DCA2C(bParam0->f_91, true, false, false, 0);
							UNK_0x64F9F278AB9DCA2C(bParam0->f_91, 2, false, 2, 0);
							UNK_0x64F9F278AB9DCA2C(bParam0->f_91, 3, false, 2, 0);
							UNK_0x64F9F278AB9DCA2C(bParam0->f_91, 4, true, false, 0);
							UNK_0x64F9F278AB9DCA2C(bParam0->f_91, 5, false, false, 0);
							UNK_0x64F9F278AB9DCA2C(bParam0->f_91, 6, false, false, 0);
							UNK_0x64F9F278AB9DCA2C(bParam0->f_91, 7, false, false, 0);
							UNK_0x64F9F278AB9DCA2C(bParam0->f_91, 8, false, false, 0);
							UNK_0x64F9F278AB9DCA2C(bParam0->f_91, 9, false, false, 0);
							UNK_0x64F9F278AB9DCA2C(bParam0->f_91, 10, false, false, 0);
							UNK_0x64F9F278AB9DCA2C(bParam0->f_91, 11, false, false, 0);
							UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_91, false);
							UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_91, true);
							UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_91, 2);
							UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_91, 3);
							UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_91, 4);
							UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_91, 5);
							UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_91, 6);
							UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_91, 7);
							UNK_0x3BFC3B9ADD2EE7B7(bParam0->f_91, 8);
						}
					}
				}
			}
		}
	}
	if (!UNK_0xC844350D5D58C99A(bParam0->f_91))
	{
		return false;
	}
	return true;
}

bool func_286(bool bParam0)
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;

	if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_2, 31))
	{
		func_294();
		bVar5 = false;
		while (bVar5 < 8)
		{
			func_291(bVar5, &vVar1, &bVar4);
			if (!func_290(vVar1, 0f, 0f, 0f, 0))
			{
				if (!UNK_0xC844350D5D58C99A(bParam0->f_49[bVar5]))
				{
					bVar0 = func_268(bVar5);
					if (UNK_0x3FC14104C3FD24D5(bVar0))
					{
						if (UNK_0xB87F6CF6E5628C67(bVar0))
						{
							bParam0->f_49[bVar5] = UNK_0x122AAB0B1D6F55AD(bVar0, vVar1, bVar4, false, false, false);
							UNK_0x120A395B0ECB8EA5(bParam0->f_49[bVar5], true);
							UNK_0xCCD53AC1B5D5E456(bParam0->f_49[bVar5], 0f);
							UNK_0x316958DDB94DF3FC(bParam0->f_49[bVar5], 0);
							if (bVar5 == 2)
							{
								UNK_0x611DFA9294B339CA(bParam0->f_49[bVar5], 4, 0, true);
								UNK_0xF50D17A63556B8D4(bParam0->f_49[bVar5], 4, 0, 1f);
							}
							func_289(bParam0, bVar5);
							func_288(bParam0, bVar5);
							UNK_0x71199B01895C6202(bVar0);
						}
					}
				}
			}
			bVar5++;
		}
		bVar5 = false;
		while (bVar5 < 8)
		{
			if (!UNK_0xC844350D5D58C99A(bParam0->f_49[bVar5]))
			{
				return false;
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_2, bVar5))
			{
				if (func_287(bParam0, bVar5))
				{
					UNK_0x5D96D8530B3D0904(&(bParam0->f_2), bVar5);
				}
				else
				{
					return false;
				}
			}
			if (UNK_0xDF1306B443CD3D15(bParam0->f_49[bVar5], 0))
			{
				if (!UNK_0x43ABECA7C10E1332(bParam0->f_49[bVar5]))
				{
					return false;
				}
			}
			bVar5++;
		}
		UNK_0x5D96D8530B3D0904(&(bParam0->f_2), 31);
	}
	return true;
}

bool func_287(bool bParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 0:
			if (UNK_0xDF1306B443CD3D15(bParam0->f_49[bParam1], 0))
			{
				if (UNK_0x40B3F576B41FA183(bParam0->f_49[bParam1]) > 0)
				{
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 0, true, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 1, false, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 2, true, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 3, true, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 4, true, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 5, false, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 7, false, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 10, false, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 12, false, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 14, false, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 15, 4, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 23, 11, false);
					return true;
				}
			}
			break;
		case 1:
			if (UNK_0xDF1306B443CD3D15(bParam0->f_49[bParam1], 0))
			{
				if (UNK_0x40B3F576B41FA183(bParam0->f_49[bParam1]) > 0)
				{
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 12, false, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 15, 3, false);
					UNK_0x73BEC6F1685574E6(bParam0->f_49[bParam1], 22, true);
					UNK_0xA22F71BBC8173C39(bParam0->f_49[bParam1], false);
					return true;
				}
			}
			break;
		case 2:
			if (UNK_0xDF1306B443CD3D15(bParam0->f_49[bParam1], 0))
			{
				if (UNK_0x40B3F576B41FA183(bParam0->f_49[bParam1]) > 0)
				{
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 0, false, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 4, false, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 14, 5, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 15, 3, false);
					UNK_0x73BEC6F1685574E6(bParam0->f_49[bParam1], 22, true);
					UNK_0xA22F71BBC8173C39(bParam0->f_49[bParam1], false);
					return true;
				}
			}
			break;
		case 3:
			if (UNK_0xDF1306B443CD3D15(bParam0->f_49[bParam1], 0))
			{
				if (UNK_0x40B3F576B41FA183(bParam0->f_49[bParam1]) > 0)
				{
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 15, 3, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 23, 11, false);
					UNK_0x73BEC6F1685574E6(bParam0->f_49[bParam1], 22, true);
					UNK_0xA22F71BBC8173C39(bParam0->f_49[bParam1], false);
					return true;
				}
			}
			break;
		case 4:
			if (UNK_0xDF1306B443CD3D15(bParam0->f_49[bParam1], 0))
			{
				if (UNK_0x40B3F576B41FA183(bParam0->f_49[bParam1]) > 0)
				{
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 1, false, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 2, false, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 4, true, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 7, true, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 11, 3, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 12, 2, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 13, 2, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 15, 3, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 16, 4, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 23, 5, false);
					UNK_0x73BEC6F1685574E6(bParam0->f_49[bParam1], 22, true);
					UNK_0xA22F71BBC8173C39(bParam0->f_49[bParam1], false);
					return true;
				}
			}
			break;
		case 5:
			if (UNK_0xDF1306B443CD3D15(bParam0->f_49[bParam1], 0))
			{
				if (UNK_0x40B3F576B41FA183(bParam0->f_49[bParam1]) > 0)
				{
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 0, false, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 1, false, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 2, false, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 3, false, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 4, true, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 6, 2, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 10, 3, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 14, 7, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 15, false, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 23, 5, false);
					UNK_0x73BEC6F1685574E6(bParam0->f_49[bParam1], 22, true);
					UNK_0xA22F71BBC8173C39(bParam0->f_49[bParam1], false);
					return true;
				}
			}
			break;
		case 6:
			if (UNK_0xDF1306B443CD3D15(bParam0->f_49[bParam1], 0))
			{
				if (UNK_0x40B3F576B41FA183(bParam0->f_49[bParam1]) > 0)
				{
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 1, true, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 4, true, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 8, false, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 14, 7, false);
					UNK_0xEE6A1776A67F70C1(bParam0->f_49[bParam1], 23, false, false);
					UNK_0x73BEC6F1685574E6(bParam0->f_49[bParam1], 22, true);
					UNK_0xA22F71BBC8173C39(bParam0->f_49[bParam1], false);
					return true;
				}
			}
			break;
		default:
			return true;
	}
	return false;
}

void func_288(bool bParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 0:
			UNK_0xF95FF0A179413A39(bParam0->f_49[bParam1], 0);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 0, true);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 1, false);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 2, true);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 3, true);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 4, true);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 5, false);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 7, false);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 10, false);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 23, 11);
			break;
		case 1:
			UNK_0xF95FF0A179413A39(bParam0->f_49[bParam1], 0);
			break;
		case 2:
			UNK_0xF95FF0A179413A39(bParam0->f_49[bParam1], 0);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 0, false);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 4, false);
			break;
		case 3:
			UNK_0xF95FF0A179413A39(bParam0->f_49[bParam1], 0);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 23, 11);
			break;
		case 4:
			UNK_0xF95FF0A179413A39(bParam0->f_49[bParam1], 0);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 1, false);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 2, false);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 4, true);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 7, true);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 23, 5);
			break;
		case 5:
			UNK_0xF95FF0A179413A39(bParam0->f_49[bParam1], 0);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 0, false);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 1, false);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 2, false);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 3, false);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 4, true);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 6, 2);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 10, 3);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 23, 5);
			break;
		case 6:
			UNK_0xF95FF0A179413A39(bParam0->f_49[bParam1], 0);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 1, true);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 4, true);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 8, false);
			UNK_0x5BD52554D5750EFF(bParam0->f_49[bParam1], 23, false);
			break;
	}
}

void func_289(bool bParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 0:
			UNK_0xC002508A277213DE(bParam0->f_49[bParam1], 83, 134);
			UNK_0x58A0C35FA7CA6162(bParam0->f_49[bParam1], 134, 134);
			break;
		case 1:
			UNK_0xC002508A277213DE(bParam0->f_49[bParam1], false, false);
			UNK_0x58A0C35FA7CA6162(bParam0->f_49[bParam1], false, 156);
			break;
		case 2:
			UNK_0xC002508A277213DE(bParam0->f_49[bParam1], 49, false);
			UNK_0x58A0C35FA7CA6162(bParam0->f_49[bParam1], false, 156);
			break;
		case 3:
			UNK_0xC002508A277213DE(bParam0->f_49[bParam1], false, false);
			UNK_0x58A0C35FA7CA6162(bParam0->f_49[bParam1], false, 156);
			break;
		case 4:
			UNK_0xC002508A277213DE(bParam0->f_49[bParam1], 43, 5);
			UNK_0x58A0C35FA7CA6162(bParam0->f_49[bParam1], false, 156);
			break;
		case 5:
			UNK_0xC002508A277213DE(bParam0->f_49[bParam1], 3, 3);
			UNK_0x58A0C35FA7CA6162(bParam0->f_49[bParam1], 6, 156);
			break;
		case 6:
			UNK_0xC002508A277213DE(bParam0->f_49[bParam1], 35, false);
			UNK_0x58A0C35FA7CA6162(bParam0->f_49[bParam1], false, 156);
			break;
	}
}

bool func_290(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_291(bool bParam0, var uParam1, bool bParam2)
{
	switch (bParam0)
	{
		case 0:
			*uParam1 = { 224.478f, -986.548f, -99.9999f };
			*bParam2 = 240.399f;
			break;
		case 1:
			*uParam1 = { 224.305f, -991.848f, -99.9999f };
			*bParam2 = 240.399f;
			break;
		case 2:
			*uParam1 = { 224.535f, -997.348f, -99.9999f };
			*bParam2 = 240.399f;
			break;
		case 3:
			*uParam1 = { 232.847f, -986.818f, -99.9999f };
			*bParam2 = 118.309f;
			break;
		case 4:
			*uParam1 = { 232.847f, -980.848f, -99.9999f };
			*bParam2 = 118.309f;
			break;
		case 5:
			*uParam1 = { 224.535f, -980.848f, -99.9999f };
			*bParam2 = 240.399f;
			break;
		case 6:
			*uParam1 = { 232.779f, -992.84f, -99.9999f };
			*bParam2 = 118.309f;
			break;
		case 7:
			*uParam1 = { 232.709f, -997.348f, -99.9999f };
			*bParam2 = 118.309f;
			break;
	}
}

void func_292()
{
	UNK_0x523BCC9DC80CD82F(func_266());
	UNK_0x3F423BF5B8125A50(func_293());
}

char* func_293()
{
	return "MP_INTRO_SEQ@";
}

void func_294()
{
	bool bVar0;

	bVar0 = false;
	while (bVar0 < 8)
	{
		UNK_0x523BCC9DC80CD82F(func_268(bVar0));
		bVar0++;
	}
}

void func_295(bool bParam0, float fParam1, float fParam2)
{
	func_238(bParam0->f_92[0], 100, "FM_Intro_uber", fParam1, 0);
	func_238(bParam0->f_92[1], 101, "FM_Intro_uber", fParam1, 0);
	func_238(bParam0->f_92[2], 102, "FM_Intro_uber", (fParam1 + fParam2), 0);
	func_238(bParam0->f_92[3], 103, "FM_Intro_uber", fParam1, 0);
	func_238(bParam0->f_92[4], 104, "FM_Intro_uber", fParam1, 0);
}

void func_296(bool bParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;

	switch (iParam1)
	{
		case 14:
			func_297(bParam0, 0, -2997.174f, 330.9234f, 14.2341f, -15.97f, &bVar1, 1);
			func_297(bParam0, 2, -2983.9f, 423.7414f, 14.4122f, -5.25f, &bVar1, 1);
			break;
		case 15:
			func_297(bParam0, 1, -2622.208f, -109.3386f, 19.2643f, 39.34f, &bVar1, 1);
			func_297(bParam0, 3, -2583.95f, -143.6469f, 20.6224f, 48.89f, &bVar1, 1);
			func_297(bParam0, 7, -2552.145f, -169.0495f, 19.8664f, 60.04f, &bVar1, 1);
			func_297(bParam0, 8, -2531.474f, -174.4581f, 19.2269f, 58.09f, &bVar1, 1);
			break;
		case 16:
			break;
		case 17:
			func_297(bParam0, 0, -2420.618f, -232.2668f, 15.3525f, 57.71f, &bVar1, 1);
			func_297(bParam0, 2, -2399.709f, -249.2471f, 14.9551f, 58.19f, &bVar1, 1);
			func_297(bParam0, 4, -2568.499f, -153.4655f, 20.4075f, 54.1f, &bVar1, 1);
			func_297(bParam0, 5, -2485.392f, -198.0737f, 17.5783f, 63.83f, &bVar1, 1);
			func_297(bParam0, 6, -2469.139f, -206.5518f, 17.0201f, 60.64f, &bVar1, 1);
			func_297(bParam0, 9, -2408.733f, -238.8328f, 15.2055f, 59.84f, &bVar1, 1);
			break;
		case 18:
			func_297(bParam0, 1, -2146.384f, -323.4933f, 12.0429f, 14.8813f, &bVar1, 1);
			func_297(bParam0, 3, -2075.444f, -374.131f, 11.556f, 56.66f, &bVar1, 1);
			func_297(bParam0, 7, -2160.252f, -294.0829f, 12.5163f, 163.95f, &bVar1, 1);
			func_297(bParam0, 8, -2191.429f, -335.8769f, 12.7225f, 84.71f, &bVar1, 1);
			break;
		case 19:
			func_297(bParam0, 0, -1833.87f, -561.7711f, 11.0989f, 48.11f, &bVar1, 1);
			func_297(bParam0, 1, -1630.587f, -685.6821f, 16.5351f, 58.23f, &bVar1, 1);
			func_297(bParam0, 2, -1668.738f, -662.7587f, 14.7925f, 60.52f, &bVar1, 1);
			func_297(bParam0, 3, -1564.946f, -738.6324f, 10.7672f, 68.32f, &bVar1, 1);
			func_297(bParam0, 4, -1706.507f, -720.8959f, 9.6281f, -132.94f, &bVar1, 1);
			func_297(bParam0, 5, -1626.756f, -769.9745f, 10.2367f, -128.8f, &bVar1, 1);
			func_297(bParam0, 6, -1782.764f, -610.5726f, 10.3008f, 52.34f, &bVar1, 1);
			func_297(bParam0, 7, -1595.258f, -733.587f, 10.8576f, 68.39f, &bVar1, 1);
			func_297(bParam0, 8, -1751.892f, -682.1017f, 9.6795f, -134.89f, &bVar1, 1);
			func_297(bParam0, 9, -1742.098f, -642.5658f, 9.8169f, 48.19f, &bVar1, 1);
			break;
		case 33:
			func_297(bParam0, 0, -934.4687f, -2716.038f, 12.7365f, 309.2312f, &bVar1, 0);
			func_297(bParam0, 5, -975.6617f, -2733.517f, 12.8172f, 267.4944f, &bVar1, 0);
			break;
		case 34:
			break;
		case 35:
			break;
		case 36:
			func_297(bParam0, 6, -850.1183f, -2615.271f, 14.1979f, 327.7461f, &bVar1, 0);
			break;
		case 37:
			break;
		case 38:
			func_297(bParam0, 0, -712.0925f, -1983.516f, 25.688f, -167.99f, &bVar1, 0);
			func_297(bParam0, 1, -533.9934f, -2004.727f, 26.9085f, 58.71f, &bVar1, 0);
			func_297(bParam0, 2, -653.3551f, -2047.782f, 27.3566f, -112.14f, &bVar1, 0);
			func_297(bParam0, 3, -663.821f, -1934.85f, 27.1417f, -121.65f, &bVar1, 0);
			func_297(bParam0, 4, -656.6017f, -2009.078f, 30.0188f, -106.53f, &bVar1, 0);
			func_297(bParam0, 5, -502.696f, -2023.068f, 26.2376f, 60.2827f, &bVar1, 0);
			func_297(bParam0, 6, -460.1447f, -2044.032f, 26.2371f, 63.9022f, &bVar1, 0);
			func_297(bParam0, 7, -624.7944f, -1960.975f, 26.29f, 237.3848f, &bVar1, 0);
			func_297(bParam0, 8, -463.0545f, -1998.255f, 36.6533f, 27.85f, &bVar1, 0);
			func_297(bParam0, 9, -473.4099f, -1950.213f, 24.7576f, 37.16f, &bVar1, 0);
			func_297(bParam0, 10, -574.5834f, -1994.9f, 26.2871f, 236.0571f, &bVar1, 0);
			func_297(bParam0, 11, -546.7894f, -2012.781f, 26.3137f, 235.9205f, &bVar1, 0);
			func_297(bParam0, 12, -584.929f, -1970.332f, 26.2437f, 55.8826f, &bVar1, 0);
			func_297(bParam0, 13, -633.4936f, -1937.682f, 26.2413f, 54.9911f, &bVar1, 0);
			func_297(bParam0, 14, -601.2188f, -1941.419f, 17.4986f, 148.6622f, &bVar1, 0);
			break;
		case 39:
			func_297(bParam0, 4, -499.2335f, -1906.532f, 16.3534f, 133.5751f, &bVar1, 0);
			func_297(bParam0, 9, -518.8654f, -1918.144f, 16.3355f, 134.6305f, &bVar1, 0);
			break;
		case 40:
			func_297(bParam0, 3, -270.2197f, -1499.752f, 29.4309f, -13.07f, &bVar1, 0);
			func_297(bParam0, 7, -313.1461f, -1559.589f, 24.2966f, 145.66f, &bVar1, 0);
			func_297(bParam0, 8, -301.9485f, -1550.052f, 25.5595f, 146.95f, &bVar1, 0);
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			func_297(bParam0, 1, 246.1231f, -238.5137f, 52.9482f, 251.5966f, &bVar1, 0);
			func_297(bParam0, 2, 214.2755f, -202.6486f, 53.5033f, 70.72f, &bVar1, 0);
			func_297(bParam0, 6, 263.1977f, -115.1292f, 69.0366f, 155.02f, &bVar1, 0);
			break;
		case 44:
			func_297(bParam0, 0, 392.6941f, 239.868f, 102.5932f, 159.15f, &bVar1, 0);
			func_297(bParam0, 7, 375.2224f, 192.316f, 102.0397f, 160.4247f, &bVar1, 0);
			func_297(bParam0, 12, 377.4185f, 166.3668f, 102.0407f, 337.9135f, &bVar1, 0);
			break;
		case 45:
			func_297(bParam0, 1, 267.8363f, 181.3352f, 103.7037f, 71.7724f, &bVar1, 0);
			func_297(bParam0, 3, 216.3894f, 211.8832f, 105.2308f, -19.82f, &bVar1, 0);
			func_297(bParam0, 4, 290.3365f, 172.6194f, 103.7313f, 67.09f, &bVar1, 0);
			func_297(bParam0, 5, 283.6507f, 155.574f, 103.264f, 252.0678f, &bVar1, 0);
			func_297(bParam0, 8, 309.5128f, 156.7439f, 103.3183f, -112.52f, &bVar1, 0);
			func_297(bParam0, 9, 249.0189f, 168.3015f, 104.5421f, -112.05f, &bVar1, 0);
			func_297(bParam0, 11, 313.7221f, 144.8591f, 102.6542f, 249.0527f, &bVar1, 0);
			func_297(bParam0, 13, 171.2032f, 216.4137f, 105.2411f, 69.1778f, &bVar1, 0);
			break;
		case 46:
			break;
		case 47:
			func_297(bParam0, 2, 226.2312f, 176.6035f, 104.3217f, 252.5577f, &bVar1, 0);
			func_297(bParam0, 6, 247.4283f, 168.6965f, 103.9378f, 250.2977f, &bVar1, 0);
			func_297(bParam0, 7, 211.375f, 181.7446f, 104.561f, 250.2252f, &bVar1, 0);
			break;
		case 48:
			break;
		case 49:
			func_297(bParam0, 2, -192.4192f, 249.71f, 91.7534f, -99.42f, &bVar1, 0);
			func_297(bParam0, 3, -45.3246f, 256.5581f, 105.0516f, 272.9104f, &bVar1, 0);
			func_297(bParam0, 4, -24.1551f, 272.3286f, 106.4563f, 96.6005f, &bVar1, 0);
			func_297(bParam0, 5, 6.5526f, 270.3987f, 108.268f, 84.5591f, &bVar1, 0);
			func_297(bParam0, 6, -124.1576f, 245.0871f, 96.1105f, -89.91f, &bVar1, 0);
			func_297(bParam0, 7, -140.9613f, 262.532f, 94.5308f, 87.51f, &bVar1, 0);
			func_297(bParam0, 9, -83.4766f, 247.5941f, 99.488f, 275.7796f, &bVar1, 0);
			func_297(bParam0, 10, -215.5077f, 252.4543f, 91.0469f, 264.726f, &bVar1, 0);
			break;
		case 50:
			break;
	}
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bVar1, bVar0))
		{
			func_212(bParam0, bVar0);
		}
		bVar0++;
	}
}

void func_297(bool bParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7)
{
	if (UNK_0xDF1306B443CD3D15(bParam0->f_58[bParam1], 0) && !UNK_0xEB6A8945D1AC98A1(bParam0->f_74[bParam1]))
	{
		UNK_0x1E9649458B15960F(bParam0->f_58[bParam1], false);
		UNK_0x20641932E5104B25(bParam0->f_58[bParam1], true, 0);
		UNK_0xA47B46945FF6DE74(bParam0->f_58[bParam1], vParam2, 1, 0, 0, 1);
		UNK_0xD8F6A53F4799FAFE(bParam0->f_58[bParam1], bParam5);
		UNK_0xB9FD7450C0DAB575(bParam0->f_58[bParam1], 1084227584 /* Float: 5f */);
		UNK_0x51B954DAB1BCAF73(bParam0->f_58[bParam1]);
		if (bParam7)
		{
			UNK_0x60274E99F9B27DEA(bParam0->f_74[bParam1], bParam0->f_58[bParam1], false, 1, 35f, 786603, 5f, 5f, 1);
			UNK_0x1AEF7184B203A58D(bParam0->f_58[bParam1], 30f);
		}
		else
		{
			UNK_0x60274E99F9B27DEA(bParam0->f_74[bParam1], bParam0->f_58[bParam1], false, 1, 15f, 786603, 5f, 5f, 1);
			UNK_0x1AEF7184B203A58D(bParam0->f_58[bParam1], 10f);
		}
		UNK_0xFADC0A217229F6B5(bParam0->f_74[bParam1], true);
		UNK_0x4A4806F9D471E491(bParam0->f_58[bParam1], true, 0);
		UNK_0x4A4806F9D471E491(bParam0->f_74[bParam1], true, 0);
		UNK_0x5D96D8530B3D0904(bParam6, bParam1);
	}
}

void func_298(bool bParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, bool bParam9, float fParam10)
{
	if (!UNK_0x9F4FE516EAACCFC5(bParam0->f_8))
	{
		bParam0->f_8 = UNK_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", false);
	}
	bParam0->f_9 = -1;
	bParam0->f_9 = UNK_0xE9744DB7B8CA6965(vParam3, vParam6, 2);
	UNK_0x93E9ED66DAB9FBE3(bParam0->f_8, bParam0->f_9, bParam1, bParam2);
	UNK_0x57E0CF9BF653D99A(bParam0->f_9, bParam9);
	UNK_0x5E4E98C6D98C9C57(bParam0->f_9, fParam10);
	UNK_0xE3BB8E05FCEB3FBE(bParam0->f_8, true);
	UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 1, 0);
}

void func_299(bool bParam0)
{
	UNK_0x71199B01895C6202(joaat("FROGGER"));
	UNK_0xDB8844D4B7C60440(8, "FMIntro");
	if (UNK_0xC844350D5D58C99A(bParam0->f_48))
	{
		UNK_0xA954465BA6FDEFE2(&(bParam0->f_48));
	}
}

bool func_300(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, 7))
	{
		return true;
	}
	else
	{
		func_302();
		if (!UNK_0xC844350D5D58C99A(bParam0->f_92[0]))
		{
			if (UNK_0xB87F6CF6E5628C67(joaat("CHEETAH")))
			{
				bParam0->f_92[0] = UNK_0x122AAB0B1D6F55AD(joaat("CHEETAH"), -3007.912f, 370.6909f, 13.7517f, 184.1746f, false, false, false);
				UNK_0x3E5CE368CD085FFA(bParam0->f_92[0], 0);
				UNK_0xA22F71BBC8173C39(bParam0->f_92[0], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!UNK_0xC844350D5D58C99A(bParam0->f_92[1]))
		{
			if (UNK_0xB87F6CF6E5628C67(joaat("ENTITYXF")))
			{
				bParam0->f_92[1] = UNK_0x122AAB0B1D6F55AD(joaat("ENTITYXF"), -2999.383f, 404.3465f, 14.3213f, 184.1746f, false, false, false);
				UNK_0x3E5CE368CD085FFA(bParam0->f_92[1], 0);
				UNK_0xC4C7FD0EF3FEAB0B(bParam0->f_92[1], -0.0001f, -0.002f, 0.9978f, 0.0661f);
				UNK_0xC6A6B4DDD6DC073A(bParam0->f_92[1], 8);
				UNK_0xA22F71BBC8173C39(bParam0->f_92[1], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!UNK_0xC844350D5D58C99A(bParam0->f_92[2]))
		{
			if (UNK_0xB87F6CF6E5628C67(joaat("MONROE")))
			{
				bParam0->f_92[2] = UNK_0x122AAB0B1D6F55AD(joaat("MONROE"), -2994.417f, 435.5293f, 14.278f, 184.1746f, false, false, false);
				UNK_0x3E5CE368CD085FFA(bParam0->f_92[2], 0);
				UNK_0xC4C7FD0EF3FEAB0B(bParam0->f_92[2], 0.0072f, -0.0028f, 0.9981f, 0.0612f);
				UNK_0xC6A6B4DDD6DC073A(bParam0->f_92[2], 2);
				UNK_0xA22F71BBC8173C39(bParam0->f_92[2], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!UNK_0xC844350D5D58C99A(bParam0->f_92[3]))
		{
			if (UNK_0xB87F6CF6E5628C67(joaat("CHEETAH")))
			{
				bParam0->f_92[3] = UNK_0x122AAB0B1D6F55AD(joaat("CHEETAH"), -2992.259f, 473.8287f, 14.5044f, 184.1746f, false, false, false);
				UNK_0x3E5CE368CD085FFA(bParam0->f_92[3], 0);
				UNK_0xC4C7FD0EF3FEAB0B(bParam0->f_92[3], 0.0071f, -0.0058f, 0.9993f, 0.0375f);
				UNK_0xC6A6B4DDD6DC073A(bParam0->f_92[3], 15);
				UNK_0xA22F71BBC8173C39(bParam0->f_92[3], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!UNK_0xC844350D5D58C99A(bParam0->f_92[4]))
		{
			if (UNK_0xB87F6CF6E5628C67(joaat("FELTZER2")))
			{
				bParam0->f_92[4] = UNK_0x122AAB0B1D6F55AD(joaat("FELTZER2"), -2988.246f, 425.2664f, 14.387f, 184.1746f, false, false, false);
				UNK_0x3E5CE368CD085FFA(bParam0->f_92[4], 0);
				UNK_0xC4C7FD0EF3FEAB0B(bParam0->f_92[4], 0.0026f, -0.0014f, 0.998f, 0.0637f);
				UNK_0xC002508A277213DE(bParam0->f_92[4], false, false);
				UNK_0x58A0C35FA7CA6162(bParam0->f_92[4], false, 156);
				UNK_0xF95FF0A179413A39(bParam0->f_92[4], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (UNK_0xDF1306B443CD3D15(bParam0->f_92[4], 0))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, true))
			{
				if (UNK_0x40B3F576B41FA183(bParam0->f_92[4]) > 0)
				{
					UNK_0x73BEC6F1685574E6(bParam0->f_92[4], 22, true);
					UNK_0xA22F71BBC8173C39(bParam0->f_92[4], false);
					UNK_0x5D96D8530B3D0904(&(bParam0->f_3), true);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (UNK_0xB87F6CF6E5628C67(func_246()))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!UNK_0xC844350D5D58C99A(bParam0->f_98[iVar1]))
				{
					if (UNK_0xC844350D5D58C99A(bParam0->f_92[iVar1]))
					{
						if (UNK_0xDF1306B443CD3D15(bParam0->f_92[iVar1], 0))
						{
							bParam0->f_98[iVar1] = UNK_0x852A19533F896693(bParam0->f_92[iVar1], 4, func_246(), -1, 0, false);
							UNK_0x11AD11297DC58CC7(bParam0->f_98[iVar1], true);
							UNK_0x56FDC9ADE35F7DB0(bParam0->f_92[iVar1], true, true, 0);
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			UNK_0x71199B01895C6202(joaat("CHEETAH"));
			UNK_0x71199B01895C6202(joaat("MONROE"));
			UNK_0x71199B01895C6202(joaat("ENTITYXF"));
			UNK_0x71199B01895C6202(joaat("FELTZER2"));
			UNK_0x5D96D8530B3D0904(&(bParam0->f_3), 7);
			return true;
		}
	}
	return false;
}

bool func_301()
{
	func_302();
	if (UNK_0xB87F6CF6E5628C67(func_246()))
	{
		if (UNK_0xB87F6CF6E5628C67(joaat("CHEETAH")))
		{
			if (UNK_0xB87F6CF6E5628C67(joaat("MONROE")))
			{
				if (UNK_0xB87F6CF6E5628C67(joaat("ENTITYXF")))
				{
					if (UNK_0xB87F6CF6E5628C67(joaat("FELTZER2")))
					{
						if (UNK_0x3DDA6C6A285628E4(100, "FM_Intro_uber"))
						{
							if (UNK_0x3DDA6C6A285628E4(101, "FM_Intro_uber"))
							{
								if (UNK_0x3DDA6C6A285628E4(102, "FM_Intro_uber"))
								{
									if (UNK_0x3DDA6C6A285628E4(103, "FM_Intro_uber"))
									{
										if (UNK_0x3DDA6C6A285628E4(104, "FM_Intro_uber"))
										{
											if (UNK_0xB4AE0788C1587752("mp_intro_seq@"))
											{
												return true;
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
	}
	return false;
}

void func_302()
{
	UNK_0x523BCC9DC80CD82F(joaat("CHEETAH"));
	UNK_0x523BCC9DC80CD82F(joaat("MONROE"));
	UNK_0x523BCC9DC80CD82F(joaat("ENTITYXF"));
	UNK_0x523BCC9DC80CD82F(joaat("FELTZER2"));
	UNK_0x523BCC9DC80CD82F(func_246());
	UNK_0x36187931D29E5BBE(100, "FM_Intro_uber");
	UNK_0x36187931D29E5BBE(101, "FM_Intro_uber");
	UNK_0x36187931D29E5BBE(102, "FM_Intro_uber");
	UNK_0x36187931D29E5BBE(103, "FM_Intro_uber");
	UNK_0x36187931D29E5BBE(104, "FM_Intro_uber");
	UNK_0x3F423BF5B8125A50("mp_intro_seq@");
}

bool func_303(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;

	if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, 4))
	{
		return true;
	}
	else
	{
		UNK_0x523BCC9DC80CD82F(joaat("ASTEROPE"));
		UNK_0x523BCC9DC80CD82F(joaat("SENTINEL"));
		UNK_0x523BCC9DC80CD82F(func_246());
		if ((UNK_0xB87F6CF6E5628C67(joaat("ASTEROPE")) && UNK_0xB87F6CF6E5628C67(joaat("SENTINEL"))) && UNK_0xB87F6CF6E5628C67(func_246()))
		{
			bVar0 = false;
			while (bVar0 < 15)
			{
				if (!UNK_0xC844350D5D58C99A(bParam0->f_58[bVar0]))
				{
					if (bVar0 < 7)
					{
						bVar1 = joaat("ASTEROPE");
					}
					else
					{
						bVar1 = joaat("SENTINEL");
					}
					func_213(bVar0, &vVar2, &bVar5);
					bParam0->f_58[bVar0] = UNK_0x122AAB0B1D6F55AD(bVar1, vVar2, bVar5, false, false, false);
					UNK_0xC6A6B4DDD6DC073A(bParam0->f_58[bVar0], bVar0);
					UNK_0xE121AE1BBF90E186(bParam0->f_58[bVar0], true);
					UNK_0x0882E3DC0C991680(bParam0->f_58[bVar0], 2);
					UNK_0x1E9649458B15960F(bParam0->f_58[bVar0], true);
				}
				if (UNK_0xC844350D5D58C99A(bParam0->f_58[bVar0]))
				{
					if (!UNK_0xC844350D5D58C99A(bParam0->f_74[bVar0]))
					{
						bParam0->f_74[bVar0] = UNK_0x852A19533F896693(bParam0->f_58[bVar0], 4, func_246(), -1, 0, false);
						UNK_0xE121AE1BBF90E186(bParam0->f_74[bVar0], true);
						UNK_0x11AD11297DC58CC7(bParam0->f_74[bVar0], true);
					}
				}
				bVar0++;
			}
		}
		bVar0 = false;
		while (bVar0 < 15)
		{
			if (!UNK_0xC844350D5D58C99A(bParam0->f_58[bVar0]) || !UNK_0xC844350D5D58C99A(bParam0->f_74[bVar0]))
			{
				return false;
			}
			bVar0++;
		}
		UNK_0x71199B01895C6202(joaat("ASTEROPE"));
		UNK_0x71199B01895C6202(joaat("SENTINEL"));
		UNK_0x5D96D8530B3D0904(&(bParam0->f_3), 4);
		return true;
	}
	return false;
}

bool func_304(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_228(bParam0, iParam1, 0);
	if (bParam0->f_293)
	{
		if ((bParam0->f_13 + iVar0) + iParam2) <= UNK_0x1C0640BA9A7327B3()
		{
			return true;
		}
	}
	else if (iVar0 + iParam2) <= func_236(bParam0)
	{
		return true;
	}
	return false;
}

bool func_305(bool bParam0)
{
	bool bVar0;

	if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, 8))
	{
		return true;
	}
	bVar0 = joaat("FROGGER");
	UNK_0x523BCC9DC80CD82F(bVar0);
	UNK_0x36187931D29E5BBE(8, "FMIntro");
	if (UNK_0xB87F6CF6E5628C67(bVar0) && UNK_0x3DDA6C6A285628E4(8, "FMIntro"))
	{
		if (!UNK_0xC844350D5D58C99A(bParam0->f_48))
		{
			bParam0->f_48 = UNK_0x122AAB0B1D6F55AD(bVar0, UNK_0x87A3DA08ACDE0189(8, 0f, "FMIntro"), 0f, false, false, false);
			UNK_0x4D3C3C0B0DE2663E(bParam0->f_48, 8, "FMIntro", 1);
			UNK_0xF12C1D85AFEE8FAD(bParam0->f_48, 5000f);
			UNK_0x0AD2DA9636D01093(bParam0->f_48);
			UNK_0x4A4806F9D471E491(bParam0->f_48, false, 0);
			UNK_0x71199B01895C6202(bVar0);
		}
	}
	if (!UNK_0xC844350D5D58C99A(bParam0->f_48))
	{
		return false;
	}
	UNK_0x5D96D8530B3D0904(&(bParam0->f_3), 8);
	return true;
}

void func_306(bool bParam0, int iParam1)
{
	if (func_304(bParam0, iParam1, 0))
	{
		if (bParam0->f_293)
		{
			bParam0->f_13 = (UNK_0x1C0640BA9A7327B3() - func_228(bParam0, iParam1, 0));
		}
		else
		{
			bParam0->f_291 = 1;
		}
	}
}

void func_307(bool bParam0)
{
	bParam0->f_13 = UNK_0x1C0640BA9A7327B3();
}

Vector3 func_308(vector3 vParam0)
{
	return (-SYSTEM::SIN(vParam0.z) * SYSTEM::COS(vParam0.x)), (SYSTEM::COS(vParam0.z) * SYSTEM::COS(vParam0.x)), SYSTEM::SIN(vParam0.x);
}

int func_309()
{
	return Global_1312812;
}

void func_310()
{
	UNK_0xB5376EA942202450(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 0, false, 0);
	UNK_0xB5376EA942202450(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 0, false, 0);
}

void func_311()
{
	func_219(0);
	func_218(1);
}

void func_312(bool bParam0, int iParam1)
{
	func_316();
	func_314(1);
	UNK_0xA37A90C62806D848(1);
	UNK_0x790015DC92C918E2();
	func_253(1, 1, 1, 0, 0, 0);
	func_313();
	func_205(12, 1, -1);
	func_206(0);
	UNK_0x5413873D3F67BF93(true, -1);
	UNK_0xBFE31971E49FA500(0);
	UNK_0x8BCB70EB440DED83(0);
	func_314(1);
	func_260(1);
	Global_2439138.f_3747 = 1;
	if (bParam0)
	{
		if (!UNK_0xF929B1A0A409FF93())
		{
			UNK_0xF601BB024C8F11A7(1, iParam1);
		}
	}
}

void func_313()
{
	func_206(0);
	func_205(4, 1, -1);
	func_205(6, 1, -1);
	func_205(7, 1, -1);
	func_205(3, 1, -1);
	func_205(1, 1, -1);
	func_205(2, 1, -1);
	func_205(11, 1, -1);
	func_205(13, 1, -1);
	func_205(14, 1, -1);
	func_205(16, 1, -1);
}

void func_314(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_110290)
	{
		UNK_0x2CBCC7DC0EEFF804(iVar0, iParam0);
		func_315(iVar0);
		iVar0++;
	}
}

void func_315(int iParam0)
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

void func_316()
{
	Global_1312575 = 1;
	StringCopy(&(Global_1312575.f_1), UNK_0xBB0808A181D4745C(), 32);
	Global_1312575.f_9 = UNK_0x12AB0310C2281427(&(Global_1312575.f_1));
}

bool func_317()
{
	if (UNK_0x757EF87A33649210())
	{
		func_319(0);
		UNK_0x9EDE7E8C5E9E3EBF();
		return true;
	}
	if (func_318() == 3)
	{
		func_319(2);
		UNK_0xBA09B5D63DC2577F(250f);
	}
	if (UNK_0xBFBEA211BED040AC() >= 250f)
	{
		UNK_0xBA09B5D63DC2577F(250f);
	}
	if (UNK_0x6239BB021F900BC7() == 0)
	{
		UNK_0xBA09B5D63DC2577F(250f);
	}
	if (UNK_0xBFBEA211BED040AC() <= 0f)
	{
		func_319(0);
		return true;
	}
	return false;
}

int func_318()
{
	return Global_1312467.f_19;
}

void func_319(int iParam0)
{
	if (Global_1312467.f_19 != iParam0)
	{
		Global_1312467.f_19 = iParam0;
	}
}

void func_320(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = "NULL";
	iVar1 = 0;
	bVar0 = func_324(iParam0, &iVar1);
	if (!UNK_0x7F8A39872A07D2CE("NONE", bVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (UNK_0x13CCE7704923A895(iVar1))
			{
				return;
			}
			if (UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == iVar1)
			{
				func_323(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!UNK_0x13CCE7704923A895(iVar1))
			{
				return;
			}
			if (func_321(iParam0))
			{
				func_323(iParam0, 0);
			}
		}
		UNK_0xD65FA6F2BAD953C8(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

bool func_321(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_322(iParam0) };
	if (Var0.f_1 != -1 && UNK_0xEAE0D21A50E6C7F4(Global_37208[Var0.f_1], Var0))
	{
		return true;
	}
	return false;
}

struct<2> func_322(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;

	iVar0 = iParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 7)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_323(int iParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = { func_322(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_37208[Var0.f_1]), Var0);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_37208[Var0.f_1]), Var0);
	}
}

char* func_324(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_325(iParam0) };
	*iParam1 = UNK_0x0D1736C2E221BCEA(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_325(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		case 25:
			vVar5 = { func_326(1, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		case 26:
			vVar5 = { func_326(2, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		case 27:
			vVar5 = { func_326(3, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		case 28:
			vVar5 = { func_326(4, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		case 29:
			vVar5 = { func_326(5, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		case 30:
			vVar5 = { func_326(6, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		case 31:
			vVar5 = { func_326(7, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		case 32:
			Var0 = { Global_1049922[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		case 33:
			vVar5 = { func_326(35, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		case 34:
			vVar5 = { func_326(36, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		case 35:
			vVar5 = { func_326(37, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		case 36:
			vVar5 = { func_326(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		case 37:
			vVar5 = { func_326(39, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		case 38:
			vVar5 = { func_326(40, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		case 39:
			vVar5 = { func_326(41, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		case 40:
			vVar5 = { func_326(42, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		case 41:
			vVar5 = { func_326(43, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		case 83:
			vVar5 = { func_326(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 84:
			vVar5 = { func_326(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 85:
			vVar5 = { func_326(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 86:
			vVar5 = { func_326(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 87:
			vVar5 = { func_326(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 88:
			vVar5 = { func_326(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 89:
			vVar5 = { func_326(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 90:
			vVar5 = { func_326(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 91:
			vVar5 = { func_326(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 92:
			vVar5 = { func_326(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 93:
			vVar5 = { func_326(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 94:
			vVar5 = { func_326(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 95:
			vVar5 = { func_326(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 96:
			vVar5 = { func_326(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 97:
			vVar5 = { func_326(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 98:
			vVar5 = { func_326(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 99:
			vVar5 = { func_326(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 100:
			vVar5 = { func_326(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 101:
			vVar5 = { func_326(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 102:
			vVar5 = { func_326(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 103:
			vVar5 = { func_326(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 104:
			vVar5 = { func_326(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 105:
			vVar5 = { func_326(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 106:
			vVar5 = { func_326(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 107:
			vVar5 = { func_326(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 108:
			vVar5 = { func_326(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 109:
			vVar5 = { func_326(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 110:
			vVar5 = { func_326(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 111:
			vVar5 = { func_326(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 112:
			vVar5 = { func_326(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 113:
			vVar5 = { func_326(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 114:
			vVar5 = { func_326(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 115:
			vVar5 = { func_326(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 116:
			vVar5 = { func_326(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 117:
			vVar5 = { func_326(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 118:
			vVar5 = { func_326(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 119:
			vVar5 = { func_326(91, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 120:
			vVar5 = { func_326(97, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 121:
			vVar5 = { func_326(103, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 122:
			vVar5 = { func_326(104, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 123:
			vVar5 = { func_326(105, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 124:
			vVar5 = { func_326(106, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 125:
			vVar5 = { func_326(107, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 126:
			vVar5 = { func_326(108, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 127:
			vVar5 = { func_326(109, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 128:
			vVar5 = { func_326(110, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 129:
			vVar5 = { func_326(111, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 130:
			vVar5 = { func_326(112, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 131:
			vVar5 = { func_326(113, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 132:
			vVar5 = { func_326(114, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 133:
			vVar5 = { func_326(103, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 134:
			vVar5 = { func_326(106, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 135:
			vVar5 = { func_326(109, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 136:
			vVar5 = { func_326(112, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		case 192:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		case 193:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		case 194:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		case 195:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 196:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		case 197:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		case 198:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		case 199:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		case 200:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		case 201:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		case 202:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		case 203:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		case 204:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		case 205:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		case 206:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		case 207:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		case 208:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		case 209:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		case 210:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		case 211:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		case 212:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		case 213:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
			default:
				break;
	}
}

struct<6> func_326(int iParam0, bool bParam1)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_327()
{
	return Global_2461841;
}

bool func_328()
{
	return Global_2460678;
}

void func_329(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_349(bParam0, 0);
	}
	func_347(0);
	func_330(66);
}

void func_330(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = func_309();
	if (Global_1312877)
	{
		bVar1 = func_346(iParam0);
		iVar2 = UNK_0x12AB0310C2281427(bVar1);
		func_345(&Global_2462940, 1, 0);
		UNK_0x1ADDCBD29A516AA5(iVar2, 1, bVar0, iParam0, 0);
	}
	if (iParam0 == 2)
	{
		func_331();
	}
	Global_1312812 = iParam0;
}

void func_331()
{
	if (Global_2460586)
	{
		if (func_333())
		{
			UNK_0x53491B90E4FD0E56(0);
			func_332();
		}
	}
}

void func_332()
{
	if (Global_2460583)
	{
		if (!Global_2460582)
		{
			Global_2460582 = 1;
			Global_2460591 = UNK_0x1C0640BA9A7327B3();
			Global_2460590 = 1;
		}
	}
}

bool func_333()
{
	if (Global_2451426.f_6464 && Global_2460583)
	{
		if (func_336(0))
		{
			if (func_334() && !UNK_0x757EF87A33649210())
			{
				if (((Global_2451426.f_6486 == 122 || Global_2451426.f_6486 == 123) || Global_2451426.f_6486 == 124) || Global_2451426.f_6486 == 125)
				{
					return true;
				}
				if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_68.f_2, 26))
				{
					return true;
				}
				if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_68.f_2, 27))
				{
					return true;
				}
				if (Global_1687717)
				{
					return true;
				}
				if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_37, 23))
				{
					if (!func_255(UNK_0xD803B885F5E47A62(), 0) && !func_258())
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_334()
{
	if (func_335() == 0)
	{
		return true;
	}
	return false;
}

int func_335()
{
	return Global_1312467.f_18;
}

bool func_336(int iParam0)
{
	if (func_343(UNK_0xD803B885F5E47A62()) && UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_4, 22))
	{
		return false;
	}
	if (Global_1315690)
	{
		return false;
	}
	if (!UNK_0x8CD06866876216F2())
	{
		return false;
	}
	if (func_342())
	{
		return false;
	}
	if ((Global_2460584 && func_341()) || Global_2460584 == 0)
	{
		return true;
	}
	if (Global_2451426.f_6486 == 123 && Global_2460587)
	{
		return true;
	}
	if (Global_2460585)
	{
		if (Global_2451426.f_6486 == 122)
		{
			return true;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_37, 23))
	{
		if (!func_255(UNK_0xD803B885F5E47A62(), 0) && !func_258())
		{
			return true;
		}
	}
	if (Global_2460588)
	{
		if (iParam0 == 0)
		{
			if ((Global_2451426.f_6486 == 123 || (Global_2451426.f_6486 == 124 && func_339() == 1)) || Global_2451426.f_6486 == 125)
			{
				return true;
			}
		}
	}
	if ((Global_2451426.f_6464 || func_337(-1046478848 /* Float: -20f */)) && Global_2460589)
	{
		if (iParam0 == 0)
		{
			return true;
		}
	}
	return false;
}

int func_337(float fParam0)
{
	vector3 vVar0;

	vVar0 = { func_338(UNK_0xD803B885F5E47A62()) };
	if (vVar0.z < fParam0)
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				if (!UNK_0xBADF5264209B7544(UNK_0x16F2683693E537C9()))
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_338(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

int func_339()
{
	return func_340(UNK_0xD803B885F5E47A62());
}

int func_340(int iParam0)
{
	return UNK_0xDC4DD3980107166C(Global_2425662[iParam0 /*421*/].f_310.f_3, 28, 31);
}

bool func_341()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_342()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

bool func_343(bool bParam0)
{
	if (bParam0 != func_140())
	{
		if (func_14(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_344(Global_2425662[bParam0 /*421*/].f_310.f_5) == 13;
			}
		}
	}
	return false;
}

int func_344(int iParam0)
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

void func_345(var uParam0, bool bParam1, bool bParam2)
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

char* func_346(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRANSITION_STATE_EMPTY";
		case 1:
			return "TRANSITION_STATE_SP_SWOOP_UP";
		case 2:
			return "TRANSITION_STATE_MP_SWOOP_UP";
		case 3:
			return "TRANSITION_STATE_CREATOR_SWOOP_UP";
		case 4:
			return "TRANSITION_STATE_PRE_HUD_CHECKS";
		case 5:
			return "TRANSITION_STATE_WAIT_HUD_EXIT";
		case 7:
			return "TRANSITION_STATE_SP_SWOOP_DOWN";
		case 8:
			return "TRANSITION_STATE_MP_SWOOP_DOWN";
		case 6:
			return "TRANSITION_STATE_WAIT_FOR_SUMMON";
		case 9:
			return "TRANSITION_STATE_CANCEL_JOINING";
		case 15:
			return "TRANSITION_STATE_WAIT_ON_INVITE";
		case 10:
			return "TRANSITION_STATE_RETRY_LOADING";
		case 11:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_1";
		case 12:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_2";
		case 13:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_3";
		case 14:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_4";
		case 16:
			return "TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS";
		case 17:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM";
		case 18:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM";
		case 19:
			return "TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING";
		case 21:
			return "TRANSITION_STATE_CREATION_ENTER_SESSION";
		case 22:
			return "TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT";
		case 23:
			return "TRANSITION_STATE_FM_TEAMFULL_CHECK";
		case 24:
			return "TRANSITION_STATE_START_FM_LAUNCH_SCRIPT";
		case 25:
			return "TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER";
		case 26:
			return "TRANSITION_STATE_IS_FM_AND_TRANSITION_READY";
		case 27:
			return "TRANSITION_STATE_FM_SWOOP_DOWN";
		case 29:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		case 28:
			return "TRANSITION_STATE_POST_BINK_VIDEO_WARP";
		case 30:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		case 31:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		case 20:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		case 32:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		case 33:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		case 34:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		case 35:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		case 36:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		case 37:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		case 38:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		case 39:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		case 40:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		case 41:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		case 42:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		case 43:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		case 44:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		case 46:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		case 47:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		case 48:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		case 49:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		case 50:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		case 51:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		case 52:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		case 45:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		case 54:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		case 53:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		case 55:
			return "TRANSITION_STATE_TERMINATE_SP";
		case 56:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		case 57:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		case 58:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		case 59:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		case 60:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		case 61:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		case 62:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		case 63:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		case 64:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		case 65:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		case 66:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		case 67:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		case 68:
			return "TRANSITION_STATE_DLC_INTRO_BINK";
		default:
			break;
	}
	return "";
}

void func_347(int iParam0)
{
	var uVar0;

	uVar0 = func_348();
	Global_1312811 = iParam0;
}

var func_348()
{
	return Global_1312811;
}

void func_349(bool bParam0, bool bParam1)
{
	int iVar0;

	func_351(&Global_22131, bParam1);
	UNK_0x23F80404F3C4C299(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			UNK_0x4422CF36C77B77E7();
			func_350(0);
			if (UNK_0xC844350D5D58C99A(Global_1315659))
			{
				if (UNK_0x9C77D2D0559097F0(Global_1315659, 0))
				{
					if (!UNK_0xAF6690C489CC6203(Global_1315659))
					{
						UNK_0x73270B3C9CC833FD(Global_1315659, false, 0);
					}
					UNK_0xEBA53F35D0085654(&Global_1315659);
				}
			}
		}
	}
}

void func_350(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2462918 = 0;
	}
	Global_1312467.f_18 = iParam0;
}

void func_351(var uParam0, bool bParam1)
{
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	if (UNK_0x9F4FE516EAACCFC5(uParam0->f_9))
	{
		if (UNK_0xFBB4F23D534EB790(uParam0->f_9))
		{
			func_352(0);
		}
		UNK_0x9A8DDC7C522F5BF5(uParam0->f_9, 0);
	}
	if (!Global_42562)
	{
		UNK_0x051C254DA616D646(true);
		UNK_0x36629DB72EBCB78C(0f);
		UNK_0x58478905E1A5347E(0f);
	}
	Global_2405072.f_598 = 0f;
	if (!bParam1)
	{
		UNK_0xB3A1B75CB59FEB56(false, false, 0, 1, 0, 0);
	}
}

void func_352(int iParam0)
{
	Global_22209 = iParam0;
}

void func_353(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_358(1, 0, 1);
	}
	else
	{
		func_354(iParam1);
	}
}

void func_354(int iParam0)
{
	func_357();
	if (iParam0 == 0)
	{
		if (UNK_0x1F045D4082B1ADB2())
		{
			return;
		}
	}
	if (func_356() == 0 || UNK_0x798A3F1296751F46())
	{
		func_355(1);
		UNK_0x68619D16FD876EAA(0);
		UNK_0x68619D16FD876EAA(0);
	}
}

void func_355(int iParam0)
{
	if (Global_1312467.f_20 != iParam0)
	{
		Global_1312467.f_20 = iParam0;
	}
}

int func_356()
{
	return Global_1312467.f_20;
}

void func_357()
{
	Global_2462226 = 1;
}

void func_358(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_359())
	{
		return;
	}
	if ((func_356() == 1 || UNK_0x798A3F1296751F46()) || bParam0)
	{
		func_355(0);
		UNK_0x68619D16FD876EAA(1);
		if (!bParam1)
		{
			UNK_0x68619D16FD876EAA(1);
		}
		if (bParam2)
		{
			UNK_0x730943CECC025C36();
		}
	}
}

bool func_359()
{
	if (func_360())
	{
		return Global_2460590;
	}
	return false;
}

bool func_360()
{
	if (Global_2460583)
	{
		return Global_2460582;
	}
	return false;
}

void func_361(bool bParam0)
{
	if (bParam0)
	{
		UNK_0xCE7D0828D683D536();
		UNK_0xEF7906595D9044B8(-1);
		UNK_0xD980FF3526C8CB9E(1);
		UNK_0xE9B51BC60A3B47D9(1);
		UNK_0xD60411959D5D930B(1f);
		UNK_0xC83E7A5E408DF68C(3);
		UNK_0xFF42993F8A095C58(3);
	}
	else
	{
		UNK_0xE342F209E49C5314(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, false, 1);
		UNK_0xEF7906595D9044B8(0);
		UNK_0xD980FF3526C8CB9E(0);
		UNK_0xE9B51BC60A3B47D9(0);
		UNK_0xD60411959D5D930B(0f);
		UNK_0xC83E7A5E408DF68C(0);
		UNK_0xFF42993F8A095C58(0);
	}
}

void func_362(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;

	func_311();
	func_218(1);
	func_206(1);
	func_205(12, 1, -1);
	func_372();
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
	func_363(UNK_0xD803B885F5E47A62(), 0, iVar0, 0);
	if (bParam5)
	{
		if (UNK_0x82F88FD400E98881(UNK_0x16F2683693E537C9()))
		{
			UNK_0xDB4B1656BA06B94E(UNK_0x16F2683693E537C9(), 0);
		}
	}
}

void func_363(bool bParam0, bool bParam1, int iParam2, bool bParam3)
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
	if (func_371())
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
		if (!func_334())
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
				else if (bVar14 || (!func_255(UNK_0xD803B885F5E47A62(), 0) && !func_258()))
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
					func_368(0, 0, 0);
					if (bVar25)
					{
						UNK_0x066C43E677C08D5C();
					}
				}
				if (!func_367(bVar27) && !UNK_0x20906E1D6BDC7044(bVar27))
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
					func_366();
					func_365();
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
				if (!func_367(bVar27) && !UNK_0x20906E1D6BDC7044(bVar27))
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
					if (func_364(Global_4456448.f_232883))
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

bool func_364(int iParam0)
{
	return iParam0 == 17;
}

void func_365()
{
	vector3 vVar0;

	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_366()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

bool func_367(bool bParam0)
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

void func_368(bool bParam0, bool bParam1, int iParam2)
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
				func_370();
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
		if (func_255(UNK_0xD803B885F5E47A62(), 0))
		{
			UNK_0xD51AAA59D51D8056(bParam0, bParam1, 1);
		}
		else
		{
			UNK_0x7AEFB64DFEBF60B0(bParam0, bParam1);
		}
		UNK_0xF374D547F2AC15B0(bParam0, bParam1);
		func_369(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_369(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xD8B681091EBE4064(iVar0, bParam1, 1);
	}
}

void func_370()
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

bool func_371()
{
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return true;
	}
	return false;
}

void func_372()
{
	Global_22211.f_5 = 1;
}

int func_373()
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

void func_374(bool bParam0)
{
	UNK_0x9DD8618CA5BF832D(UNK_0x9539D44F3E4492F6(bParam0), 346, true);
}

void func_375(bool bParam0)
{
	if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_3, 12))
	{
		UNK_0x5D96D8530B3D0904(&(bParam0->f_3), 12);
	}
	else
	{
		if (bParam0->f_6 > 30)
		{
			if (!Global_1662465)
			{
				Global_1662465 = 1;
				Global_1662466 = 1;
			}
		}
		if (bParam0->f_6 > 31)
		{
			if (UNK_0x83D8570832F172A7(Global_1662464))
			{
				if (bParam0->f_5 < 23)
				{
					switch (bParam0->f_5)
					{
						case 0:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (bParam0->f_6 >= 33)
								{
									if (((UNK_0xB3260A60545D3F11() == 9 || UNK_0xB3260A60545D3F11() == 10) || UNK_0xB3260A60545D3F11() == 8) || UNK_0xB3260A60545D3F11() == 12)
									{
										func_380("artdir", 0f, 420f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_380("artdir", 0f, 450f, "left", 0.3f, 0.3f);
									}
									func_379("artdir", "Art Director", 175f, "HUD_COLOUR_FRIENDLY", 1);
									func_378("artdir", "AARON GARBUT", 210f, "|", 1);
									func_377("artdir", 0.16f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_304(bParam0, 33, -3390))
							{
								func_376("artdir", 0.16f);
								bParam0->f_5++;
							}
							break;
						case 1:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (func_304(bParam0, 33, -2940))
								{
									func_380("techdir", 0f, 30f, "left", 0.3f, 0.3f);
									func_379("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_378("techdir", "ADAM FOWLER", 185f, "|", 1);
									func_377("techdir", 0.16f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_304(bParam0, 33, -450))
							{
								func_376("techdir", 0.16f);
								bParam0->f_5++;
							}
							break;
						case 2:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (bParam0->f_6 >= 35)
								{
									func_380("assartdir", 0f, 100f, "left", 0.3f, 0f);
									func_379("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_378("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 1);
									func_377("assartdir", 0.16f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (bParam0->f_6 > 35)
							{
								func_376("assartdir", 0f);
								bParam0->f_5++;
							}
							break;
						case 3:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (bParam0->f_6 >= 36)
								{
									if (((UNK_0xB3260A60545D3F11() == 9 || UNK_0xB3260A60545D3F11() == 10) || UNK_0xB3260A60545D3F11() == 8) || UNK_0xB3260A60545D3F11() == 12)
									{
										func_380("asstecdir", 0f, 370f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_380("asstecdir", 0f, 400f, "right", 0.3f, 0.3f);
									}
									func_379("asstecdir", "Associate Technical Directors", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_378("asstecdir", "KLAAS SCHILSTRA|PHIL HOOKER", 150f, "|", 1);
									func_377("asstecdir", 0.16f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_304(bParam0, 36, -4740))
							{
								func_376("asstecdir", 0.16f);
								bParam0->f_5++;
							}
							break;
						case 4:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (func_304(bParam0, 36, -3810))
								{
									func_380("leadprog", 30f, 20f, "right", 0.3f, 0.3f);
									func_379("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_378("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 1);
									func_377("leadprog", 0.16f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_304(bParam0, 36, -600))
							{
								func_376("leadprog", 0.16f);
								bParam0->f_5++;
							}
							break;
						case 5:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (bParam0->f_6 >= 37)
								{
									if (((UNK_0xB3260A60545D3F11() == 9 || UNK_0xB3260A60545D3F11() == 10) || UNK_0xB3260A60545D3F11() == 8) || UNK_0xB3260A60545D3F11() == 12)
									{
										func_380("senprog", 0f, 200f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_380("senprog", 0f, 225f, "left", 0.3f, 0.3f);
									}
									func_379("senprog", "Senior Programmers", 20f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_378("senprog", "JOHN HYND|JOHN GURNEY|DAN CONTI|ROSS CHILDS|STEPHEN LaVALLEY", 75f, "|", 1);
									func_377("senprog", 0.16f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_304(bParam0, 37, -1350))
							{
								func_376("senprog", 0.16f);
								bParam0->f_5++;
							}
							break;
						case 6:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (bParam0->f_6 >= 38)
								{
									func_380("prog", 0f, 100f, "left", 0.3f, 0.3f);
									func_379("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_378("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 1);
									func_377("prog", 0.16f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_304(bParam0, 38, -4320))
							{
								func_376("prog", 0.16f);
								bParam0->f_5++;
							}
							break;
						case 7:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (func_304(bParam0, 38, -3240))
								{
									if (((UNK_0xB3260A60545D3F11() == 9 || UNK_0xB3260A60545D3F11() == 10) || UNK_0xB3260A60545D3F11() == 8) || UNK_0xB3260A60545D3F11() == 12)
									{
										func_380("socclub", 40f, 305f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_380("socclub", 40f, 325f, "right", 0.3f, 0.3f);
									}
									func_379("socclub", "Social Club", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_378("socclub", "IAN McFARLAND|KEVIN BACA", 40f, "|", 1);
									func_377("socclub", 0.16f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_304(bParam0, 38, -870))
							{
								func_376("socclub", 0.16f);
								bParam0->f_5++;
							}
							break;
						case 8:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (bParam0->f_6 >= 39)
								{
									func_380("audio", 0f, 10f, "right", 0.3f, 0.3f);
									func_379("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_378("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 1);
									func_377("audio", 0.16f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_304(bParam0, 39, -1620))
							{
								func_376("audio", 0.16f);
								bParam0->f_5++;
							}
							break;
						case 9:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (bParam0->f_6 >= 40)
								{
									func_380("scrlead", 50f, 85f, "right", 0.3f, 0.3f);
									func_379("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_378("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 1);
									func_377("scrlead", 0.16f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_304(bParam0, 40, -1470))
							{
								func_376("scrlead", 0.16f);
								bParam0->f_5++;
							}
							break;
						case 10:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (bParam0->f_6 >= 41)
								{
									func_380("script1", 0f, 10f, "left", 0.3f, 0.3f);
									func_379("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_378("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 1);
									func_377("script1", 0.16f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_304(bParam0, 41, -1200))
							{
								func_376("script1", 0.16f);
								bParam0->f_5++;
							}
							break;
						case 11:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (bParam0->f_6 >= 42)
								{
									func_380("script2", 0f, 10f, "left", 0.3f, 0.3f);
									func_379("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_378("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 1);
									func_377("script2", 0.16f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_304(bParam0, 42, -1320))
							{
								func_376("script2", 0.16f);
								bParam0->f_5++;
							}
							break;
						case 12:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (bParam0->f_6 >= 43)
								{
									func_380("visdes", 0f, 45f, "left", 0.2f, 0.2f);
									func_379("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 1);
									func_378("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 1);
									func_379("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 1);
									func_378("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 1);
									func_377("visdes", 0.05f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_304(bParam0, 43, -1320))
							{
								func_376("visdes", 0.05f);
								bParam0->f_5++;
							}
							break;
						case 13:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (bParam0->f_6 >= 44)
								{
									func_380("uides", 40f, 20f, "right", 0f, 0.3f);
									func_379("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_378("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 1);
									func_377("uides", 0f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_304(bParam0, 45, -1650))
							{
								func_376("uides", 0.16f);
								bParam0->f_5++;
							}
							break;
						case 14:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (bParam0->f_6 >= 46)
								{
									func_380("concre", 0f, 20f, "left", 0f, 0.3f);
									func_379("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_378("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 1);
									func_378("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 1);
									func_377("concre", 0f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_304(bParam0, 46, -1950))
							{
								func_376("concre", 0.16f);
								bParam0->f_5++;
							}
							break;
						case 15:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (bParam0->f_6 >= 47)
								{
									func_380("devass", 0f, 400f, "right", 0f, 0f);
									func_379("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_378("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 1);
									func_377("devass", 0f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (bParam0->f_6 > 47)
							{
								func_376("devass", 0f);
								bParam0->f_5++;
							}
							break;
						case 16:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (bParam0->f_6 >= 48)
								{
									func_380("qasup", 20f, 0f, "right", 0.3f, 0.3f);
									func_379("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_378("qasup", "ADAM WHITING| ", 50f, "|", 1);
									func_379("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 1);
									func_378("qasup", "CHRIS THOMSON", 160f, "|", 1);
									func_377("qasup", 0.16f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_304(bParam0, 48, -1320))
							{
								func_376("qasup", 0.16f);
								bParam0->f_5++;
							}
							break;
						case 17:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (bParam0->f_6 >= 49)
								{
									func_380("senta", 0f, 25f, "left", 0.3f, 0.3f);
									func_379("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_378("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 1);
									func_377("senta", 0.16f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_304(bParam0, 49, -5070))
							{
								func_376("senta", 0.16f);
								bParam0->f_5++;
							}
							break;
						case 18:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (func_304(bParam0, 49, -3750))
								{
									func_380("asspro", 20f, 350f, "right", 0.3f, 0.3f);
									func_379("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_378("asspro", "JOSH NEEDLEMAN", 75f, "|", 1);
									func_377("asspro", 0.16f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_304(bParam0, 49, -720))
							{
								func_376("asspro", 0.16f);
								bParam0->f_5++;
							}
							break;
						case 19:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (func_263(bParam0))
								{
									if (UNK_0x22A8E52414415B76() && UNK_0x8F677B1F58B4741C() > 2468)
									{
										func_380("animdir", 0f, 95f, "left", 0.3f, 0.3f);
										func_379("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 1);
										func_378("animdir", "ROB NELSON", 200f, "|", 1);
										func_377("animdir", 0.16f);
										UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
									}
								}
								else if (bParam0->f_6 >= 50)
								{
									func_380("animdir", 50f, 90f, "right", 0.3f, 0.3f);
									func_379("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_378("animdir", "ROB NELSON", 90f, "|", 1);
									func_377("animdir", 0.16f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_263(bParam0))
							{
								if (UNK_0x22A8E52414415B76() && UNK_0x8F677B1F58B4741C() > 6123)
								{
									func_376("animdir", 0.16f);
									bParam0->f_5++;
								}
							}
							else if (UNK_0x22A8E52414415B76() && UNK_0x8F677B1F58B4741C() > 1898)
							{
								func_376("animdir", 0.16f);
								bParam0->f_5++;
							}
							break;
						case 20:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (func_263(bParam0))
								{
									if (UNK_0x22A8E52414415B76() && UNK_0xDED29B1D7D52D5A3())
									{
										func_380("producer", 65f, 55f, "right", 0f, 0f);
										func_379("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 1);
										func_378("producer", "ANDY DUTHIE", 20f, "|", 1);
										func_377("producer", 0f);
										UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
									}
								}
								else if (UNK_0x22A8E52414415B76() && UNK_0x8F677B1F58B4741C() > 2452)
								{
									func_380("producer", 0f, 100f, "left", 0.3f, 0f);
									func_379("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 1);
									func_378("producer", "ANDY DUTHIE", 110f, "|", 1);
									func_377("producer", 0.16f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_263(bParam0))
							{
								if (UNK_0x22A8E52414415B76() && UNK_0xDED29B1D7D52D5A3())
								{
									func_376("producer", 0f);
									bParam0->f_5++;
								}
							}
							else if (UNK_0x22A8E52414415B76() && UNK_0xDED29B1D7D52D5A3())
							{
								func_376("producer", 0f);
								bParam0->f_5++;
							}
							break;
						case 21:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (func_263(bParam0))
								{
									if (UNK_0x22A8E52414415B76() && UNK_0x8F677B1F58B4741C() > 13265)
									{
										func_380("vpcre", 65f, 55f, "right", 0.3f, 0.3f);
										func_379("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
										func_378("vpcre", "DAN HOUSER", 80f, "|", 1);
										func_377("vpcre", 0.16f);
										UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
									}
								}
								else if (UNK_0x22A8E52414415B76() && UNK_0x8F677B1F58B4741C() > 6921)
								{
									func_380("vpcre", 65f, 80f, "right", 0.3f, 0.3f);
									func_379("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_378("vpcre", "DAN HOUSER", 80f, "|", 1);
									func_377("vpcre", 0.16f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_263(bParam0))
							{
								if (UNK_0x22A8E52414415B76() && UNK_0x8F677B1F58B4741C() > 16955)
								{
									func_376("vpcre", 0.16f);
									bParam0->f_5++;
								}
							}
							else if (UNK_0x22A8E52414415B76() && UNK_0x8F677B1F58B4741C() > 10513)
							{
								func_376("vpcre", 0.16f);
								bParam0->f_5++;
							}
							break;
						case 22:
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_4, bParam0->f_5))
							{
								if (func_263(bParam0))
								{
									if (UNK_0x22A8E52414415B76() && UNK_0x8F677B1F58B4741C() > 18077)
									{
										Global_1662466 = 0;
										func_380("execpro", 0f, 375f, "left", 0.3f, 0.3f);
										func_379("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 1);
										func_378("execpro", "SAM HOUSER", 165f, "|", 1);
										func_377("execpro", 0.16f);
										UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
									}
								}
								else if (UNK_0x22A8E52414415B76() && UNK_0x8F677B1F58B4741C() > 12358)
								{
									Global_1662466 = 0;
									func_380("execpro", 0f, 340f, "left", 0.3f, 0.3f);
									func_379("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_378("execpro", "SAM HOUSER", 190f, "|", 1);
									func_377("execpro", 0.16f);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_4), bParam0->f_5);
								}
							}
							else if (func_263(bParam0))
							{
								if (UNK_0x22A8E52414415B76() && UNK_0x8F677B1F58B4741C() > 21785)
								{
									func_376("execpro", 0.16f);
									bParam0->f_5++;
								}
							}
							else if (UNK_0x22A8E52414415B76() && UNK_0x8F677B1F58B4741C() > 15333)
							{
								func_376("execpro", 0.16f);
								bParam0->f_5++;
							}
							break;
					}
				}
				if (Global_1662466)
				{
					UNK_0x6567AE843FADBA94(Global_1662464, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}

void func_376(bool bParam0, bool bParam1)
{
	UNK_0x7E60C62A7CE58FC8(Global_1662464, "HIDE");
	UNK_0x7ACC3006A87F8B39("STRING");
	UNK_0xD06AC7C87A34A6AD(bParam0);
	UNK_0x779B34565F4D71B1();
	UNK_0x7C19E5E4784BD7CF(bParam1);
	UNK_0x7E60D21B163E9D56();
}

void func_377(bool bParam0, bool bParam1)
{
	UNK_0x7E60C62A7CE58FC8(Global_1662464, "SHOW_CREDIT_BLOCK");
	UNK_0x7ACC3006A87F8B39("STRING");
	UNK_0xD06AC7C87A34A6AD(bParam0);
	UNK_0x779B34565F4D71B1();
	UNK_0x7C19E5E4784BD7CF(bParam1);
	UNK_0x7E60D21B163E9D56();
}

void func_378(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	UNK_0x7E60C62A7CE58FC8(Global_1662464, "ADD_NAMES_TO_CREDIT_BLOCK");
	UNK_0x7ACC3006A87F8B39("STRING");
	UNK_0xD06AC7C87A34A6AD(bParam0);
	UNK_0x779B34565F4D71B1();
	UNK_0x7ACC3006A87F8B39("STRING");
	UNK_0xD06AC7C87A34A6AD(bParam1);
	UNK_0x779B34565F4D71B1();
	UNK_0x7C19E5E4784BD7CF(bParam2);
	UNK_0x7ACC3006A87F8B39("STRING");
	UNK_0xD06AC7C87A34A6AD(bParam3);
	UNK_0x779B34565F4D71B1();
	UNK_0x1200CC973A2399C8(bParam4);
	UNK_0x7E60D21B163E9D56();
}

void func_379(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	UNK_0x7E60C62A7CE58FC8(Global_1662464, "ADD_ROLE_TO_CREDIT_BLOCK");
	UNK_0x7ACC3006A87F8B39("STRING");
	UNK_0xD06AC7C87A34A6AD(bParam0);
	UNK_0x779B34565F4D71B1();
	UNK_0x7ACC3006A87F8B39("STRING");
	UNK_0xD06AC7C87A34A6AD(bParam1);
	UNK_0x779B34565F4D71B1();
	UNK_0x7C19E5E4784BD7CF(bParam2);
	UNK_0x7ACC3006A87F8B39("STRING");
	UNK_0xD06AC7C87A34A6AD(bParam3);
	UNK_0x779B34565F4D71B1();
	UNK_0x1200CC973A2399C8(bParam4);
	UNK_0x7E60D21B163E9D56();
}

void func_380(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	UNK_0x7E60C62A7CE58FC8(Global_1662464, "SETUP_CREDIT_BLOCK");
	UNK_0x7ACC3006A87F8B39("STRING");
	UNK_0xD06AC7C87A34A6AD(bParam0);
	UNK_0x779B34565F4D71B1();
	UNK_0x7C19E5E4784BD7CF(bParam1);
	UNK_0x7C19E5E4784BD7CF(bParam2);
	UNK_0x7ACC3006A87F8B39("STRING");
	UNK_0xD06AC7C87A34A6AD(bParam3);
	UNK_0x779B34565F4D71B1();
	UNK_0x7C19E5E4784BD7CF(bParam4);
	UNK_0x7C19E5E4784BD7CF(bParam5);
	UNK_0x7E60D21B163E9D56();
}

void func_381(bool bParam0)
{
	if (bParam0->f_6 >= 33 && bParam0->f_6 < 51)
	{
		if (UNK_0xC844350D5D58C99A(bParam0->f_34))
		{
			if (UNK_0xDF1306B443CD3D15(bParam0->f_34, 0))
			{
				UNK_0x97C74F2F766B9222(UNK_0x68E4ADDDDCD7BDDE(bParam0->f_34, 0f, 0.25f, 0.6f), 255, 255, 255, 1.5f, 0.5f);
			}
		}
	}
}

void func_382()
{
	var uVar0;

	if (UNK_0xE5DBF9B6126856CA(Local_536.f_3))
	{
		switch (Local_536.f_2)
		{
			case 2:
				if (UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_4, true))
				{
					if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						if (func_402(Local_536.f_3))
						{
							if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
							{
								if (UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), -1794415470) != 1 && UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), -1794415470) != 0)
								{
									UNK_0x5B1D360B9C6F0A09(UNK_0x16F2683693E537C9(), UNK_0xB177666FAB6F4417(Local_536.f_3), 20000, 2, 1f, 1, 0);
								}
							}
							else if (!UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_4, 2))
							{
								if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), UNK_0xB177666FAB6F4417(Local_536.f_3)))
								{
									UNK_0x5D96D8530B3D0904(&(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_4), 2);
									func_401(1);
								}
								else
								{
									UNK_0x28F5E4DA506AC0CA(-1031.788f, -2731.816f, 19.0546f, 50f, 0, 0, 0, 0, false, 0);
								}
							}
						}
					}
				}
				break;
			case 1:
				if (func_402(Local_536.f_3))
				{
					if (!func_400(Local_536.f_4))
					{
						if (UNK_0xEAE0D21A50E6C7F4(bLocal_719, 26))
						{
							if (UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_536.f_4), -1273030092) != 1 && UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_536.f_4), -1273030092) != 0)
							{
								UNK_0x132B85BCE016BCA0(UNK_0x1B50683925F00106(Local_536.f_4), UNK_0xB177666FAB6F4417(Local_536.f_3), -663.8057f, -952.3882f, 20.2985f, 4, 15f, 802987, 5f, 5f, 0);
							}
						}
					}
				}
				break;
			case 3:
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 27))
				{
					if (!UNK_0x757EF87A33649210() && !UNK_0xD0BB2359EC70FC37())
					{
						if (!func_124())
						{
							if (!UNK_0x798A3F1296751F46())
							{
								UNK_0x53491B90E4FD0E56(800);
							}
						}
					}
					else if (UNK_0x757EF87A33649210())
					{
						UNK_0x5D96D8530B3D0904(&bLocal_719, 27);
					}
				}
				else if (!UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_3, 4))
				{
					if (func_389(-649.4202f, -954.0247f, 20.5269f, 90.7653f, 1, 0, 0, 0, 1, 0, 1, 0, 0))
					{
						UNK_0x28F5E4DA506AC0CA(-649.4202f, -954.0247f, 20.5269f, 20f, 0, 0, 0, 0, false, 0);
						UNK_0xDC355804A9511111();
						UNK_0x386090053886DF05();
						UNK_0x2FB9A57162E54BAB(0f);
						UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
						UNK_0x5D96D8530B3D0904(&(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_3), 4);
					}
				}
				break;
			case 4:
				if (!func_400(Local_536.f_4))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 29))
					{
						if (func_402(Local_536.f_3))
						{
							UNK_0x27F3789FF35EEDF1(UNK_0x1B50683925F00106(Local_536.f_4), UNK_0xB177666FAB6F4417(Local_536.f_3), -664.8411f, -952.2484f, 20.283f, 92.0219f, 0, 60f, 1);
							UNK_0x82E51BCA72537B6C(800);
							UNK_0x5D96D8530B3D0904(&bLocal_719, 29);
						}
					}
					else if (!UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_3, 5))
					{
						if (UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_536.f_4), -272084098) == 7)
						{
							UNK_0x5D96D8530B3D0904(&(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_3), 5);
						}
					}
				}
				break;
			case 5:
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if (UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), -828834893) != 1 && UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), -828834893) != 0)
						{
							UNK_0x75CDA8644CD3B5F5(UNK_0x16F2683693E537C9(), 0, 0);
						}
					}
					else if (!UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_3, 6))
					{
						UNK_0x5D96D8530B3D0904(&(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_3), 6);
						UNK_0x5D96D8530B3D0904(&(Global_2537071.f_795), 4);
						UNK_0x0674E58A79778E99(&(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_4), 2);
						func_363(UNK_0xD803B885F5E47A62(), 1, 0, 0);
						func_388();
						func_401(0);
						func_34("HLP_TAXI", -1);
						if (func_57())
						{
							func_45(-1834046564, 200, &uVar0, 0, 0, 0);
						}
						else
						{
							func_385(-200, 0);
							UNK_0xD6F9EF2CBF17C39A(200, false, false);
						}
					}
				}
				break;
			case 6:
				if (!func_400(Local_536.f_4))
				{
					if (func_402(Local_536.f_3))
					{
						if (UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_536.f_4), -258271821) != 1 && UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_536.f_4), -258271821) != 0)
						{
							UNK_0xFADC0A217229F6B5(UNK_0x1B50683925F00106(Local_536.f_4), true);
							UNK_0xE072601B4380E9DF(UNK_0x1B50683925F00106(Local_536.f_4), UNK_0xB177666FAB6F4417(Local_536.f_3), 12f, 786599);
							func_384(&(Local_536.f_3));
							func_384(&(Local_536.f_4));
						}
					}
				}
				break;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_4, true))
		{
			UNK_0x10FEEAFF01E32639(-1614.173f, -3243.317f, 28.4915f, -440.9012f);
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 26))
			{
				UNK_0x5D96D8530B3D0904(&bLocal_719, 26);
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 28))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_4, 2))
			{
				if (!func_199(&uLocal_369))
				{
					func_217();
					func_22(&uLocal_369, 0, 0);
				}
				else if (func_198(&uLocal_369, 5000, 0))
				{
					if (func_178(&uLocal_543, "MPTXIAU", "MPTXI_T1", 12, 0, 0, 1))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_719, 28);
					}
				}
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 30))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_3, 5))
			{
				if (func_178(&uLocal_543, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					UNK_0x5D96D8530B3D0904(&bLocal_719, 30);
				}
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_3, 6))
		{
			func_383();
		}
		if (UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_4, 2))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
				{
				}
			}
		}
	}
}

void func_383()
{
	Global_2548146.f_258 = 1;
}

void func_384(var uParam0)
{
	bool bVar0;

	if (UNK_0xE5DBF9B6126856CA(*uParam0))
	{
		bVar0 = UNK_0xA5FBBC2F619A4DE2(*uParam0);
		UNK_0x82692E8F6A0D7A22(&bVar0);
	}
}

void func_385(int iParam0, int iParam1)
{
	func_387(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_386(iParam0, 0);
	}
}

void func_386(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_387(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
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
		func_386(iVar1, 0);
	}
}

void func_388()
{
	UNK_0xEAB026E686C0D991(0, 22, 1);
	UNK_0xEAB026E686C0D991(0, 36, 1);
	UNK_0xEAB026E686C0D991(0, 32, 1);
	UNK_0xEAB026E686C0D991(0, 34, 1);
	UNK_0xEAB026E686C0D991(0, 35, 1);
	UNK_0xEAB026E686C0D991(0, 33, 1);
	UNK_0xEAB026E686C0D991(0, 31, 1);
	UNK_0xEAB026E686C0D991(0, 30, 1);
	UNK_0xEAB026E686C0D991(0, 44, 1);
	UNK_0xEAB026E686C0D991(0, 141, 1);
	UNK_0xEAB026E686C0D991(0, 140, 1);
	UNK_0xEAB026E686C0D991(0, 263, 1);
	UNK_0xEAB026E686C0D991(0, 264, 1);
	UNK_0xEAB026E686C0D991(0, 143, 1);
	UNK_0xEAB026E686C0D991(0, 24, 1);
	UNK_0xEAB026E686C0D991(0, 257, 1);
	UNK_0xEAB026E686C0D991(0, 263, 1);
	UNK_0xEAB026E686C0D991(0, 264, 1);
	UNK_0xEAB026E686C0D991(0, 143, 1);
	UNK_0xEAB026E686C0D991(0, 262, 1);
	UNK_0xEAB026E686C0D991(0, 261, 1);
	UNK_0xEAB026E686C0D991(0, 37, 1);
	UNK_0xEAB026E686C0D991(0, 25, 1);
	UNK_0xEAB026E686C0D991(0, 26, 1);
}

bool func_389(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, float fParam12)
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;

	Global_22211.f_6 = 1;
	if (Global_2439138.f_1233 && Global_2439138.f_1241)
	{
		func_397(0, bParam9);
		return true;
	}
	if (UNK_0x991B1F0980C62628() && !bParam9)
	{
		if (Global_2439138.f_1233)
		{
			func_397(0, bParam9);
		}
		return false;
	}
	if ((UNK_0xEB880D98B5988D0C() && !bParam9) && !UNK_0x0C2635BB5127C8FB())
	{
		return false;
	}
	if (!func_396())
	{
		if (func_395(UNK_0xD803B885F5E47A62(), 1, 0) && !(func_394() || func_393()))
		{
			if (((bParam9 && func_14(UNK_0xD803B885F5E47A62(), 1, 0)) && UNK_0x991B1F0980C62628()) && Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_222 == 1)
			{
			}
			else if (func_309() == 28)
			{
			}
			else
			{
				return false;
			}
		}
	}
	if (bParam3 < 0f)
	{
		bParam3 = (bParam3 + 360f);
	}
	if (bParam3 >= 360f)
	{
		bParam3 = (bParam3 + -360f);
	}
	if (!Global_2439138.f_1233 && !bParam11)
	{
		vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
		if ((UNK_0x755FF954DAE327E1((vVar1.x - vParam0.x)) < 0.2f && UNK_0x755FF954DAE327E1((vVar1.y - vParam0.y)) < 0.2f) && UNK_0x755FF954DAE327E1((vVar1.z - vParam0.z)) < 1.2f)
		{
			bVar4 = (bParam3 - UNK_0xD9522BA9E27E1349(UNK_0x16F2683693E537C9()));
			if (bVar4 > 180f)
			{
				bVar4 = (bVar4 + -360f);
			}
			if (bVar4 < -180f)
			{
				bVar4 = (bVar4 + 360f);
			}
			if (UNK_0x755FF954DAE327E1(bVar4) < 1f)
			{
				Global_2439138.f_1233 = 0;
				Global_2439138.f_1234 = 0;
				if (UNK_0x0C2635BB5127C8FB())
				{
					UNK_0x5D29A7ED2621B332();
				}
				return true;
			}
		}
	}
	if (((!vParam0.x == Global_2439138.f_1235 || !vParam0.y == Global_2439138.f_1235.f_1) || !vParam0.z == Global_2439138.f_1235.f_2) || !bParam3 == Global_2439138.f_1238)
	{
		if (Global_2439138.f_1233 == 1)
		{
			if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2439138.f_1239) < func_392(0))
			{
				return false;
			}
			UNK_0x5D29A7ED2621B332();
			Global_2439138.f_1234 = 1;
		}
		else
		{
			Global_2439138.f_1234 = 0;
		}
		Global_2439138.f_1235 = { vParam0 };
		Global_2439138.f_1238 = bParam3;
		Global_2439138.f_1233 = 0;
	}
	if (!Global_2439138.f_1233 && !UNK_0x0C2635BB5127C8FB())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		bParam7 = bParam7;
		if (bParam7)
		{
		}
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_98796.f_1357[44], 16))
			{
				func_391(0);
			}
			if (!UNK_0xC4AEA6B98479242E(UNK_0x16F2683693E537C9(), &(Global_2405072.f_499)))
			{
				Global_2405072.f_499 = 0;
			}
		}
		if (bParam4)
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				bVar0 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
				if (UNK_0x6CFEA4CFD9C496C8(bVar0))
				{
					Global_2439138.f_1240 = 0;
				}
			}
		}
		if (Global_2439138.f_1240 > -1)
		{
			Global_2439138.f_1239 = UNK_0x2B6E0A53779D29EA();
			Global_2439138.f_1233 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						bVar0 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
						if (UNK_0xAFE0D3608EDA7039(bVar0))
						{
							UNK_0xA47B46945FF6DE74(bVar0, vParam0, 0, 1, 1, 1);
							UNK_0xD8F6A53F4799FAFE(bVar0, bParam3);
							if (fParam12 != 0f)
							{
								UNK_0xC023D1C4BF532815(bVar0, fParam12, 0f, bParam3, 2, 1);
							}
						}
						else
						{
							UNK_0x0C8A454B494DAA0D(bVar0);
						}
					}
					else
					{
						UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vParam0, 0, 0, 0, 1);
						UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), bParam3);
					}
				}
				else
				{
					UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vParam0, 0, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), bParam3);
				}
				func_397(bParam6, bParam9);
				return true;
			}
			else
			{
				UNK_0x066C43E677C08D5C();
				UNK_0x28B8A2632901EC2F(UNK_0xD803B885F5E47A62(), vParam0, bParam3, bParam4, bParam10, 0);
			}
			Global_2439138.f_1239 = UNK_0x2B6E0A53779D29EA();
			Global_2439138.f_1233 = 1;
		}
	}
	if (Global_2439138.f_1233)
	{
		Global_22211.f_6 = 1;
		Global_2439138.f_1239 = UNK_0x2B6E0A53779D29EA();
		if (Global_2439138.f_1240 > -1)
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				bVar0 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
			}
			if (func_390(&(Global_2439138.f_1240), vParam0, bParam3, bVar0))
			{
				func_397(bParam6, bParam9);
				return true;
			}
		}
		else
		{
			if (bParam9)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), Global_2439138.f_1235) < 2f)
				{
					if (UNK_0x0C2635BB5127C8FB())
					{
						UNK_0x5D29A7ED2621B332();
					}
					func_397(bParam6, bParam9);
					return true;
				}
			}
			if (!UNK_0x0C2635BB5127C8FB())
			{
				if (fParam12 != 0f)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						bVar0 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
						UNK_0xC023D1C4BF532815(bVar0, fParam12, 0f, bParam3, 2, 1);
						Global_2439138.f_1241 = 1;
						return false;
					}
				}
				func_397(bParam6, bParam9);
				return true;
			}
		}
	}
	return false;
}

bool func_390(var uParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	if (UNK_0xC844350D5D58C99A(Global_2439138.f_1242) && !UNK_0x437347B10A200C4B(Global_2439138.f_1242, 0))
	{
		UNK_0x0C8A454B494DAA0D(Global_2439138.f_1242);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2439138.f_1242 = bParam5;
			UNK_0x0C8A454B494DAA0D(Global_2439138.f_1242);
			if (UNK_0xAFE0D3608EDA7039(Global_2439138.f_1242))
			{
				if (!UNK_0x437347B10A200C4B(Global_2439138.f_1242, 0))
				{
					UNK_0xD8F6A53F4799FAFE(Global_2439138.f_1242, bParam4);
					UNK_0xA47B46945FF6DE74(Global_2439138.f_1242, vParam1, 0, 1, 1, 1);
					return true;
				}
			}
			break;
	}
	return false;
}

void func_391(int iParam0)
{
	int iVar0;

	iVar0 = Global_2405072.f_2682;
	if ((UNK_0x7E369B13C7215476() && Global_2405072.f_2680 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2405072.f_2679)
	{
		if (!UNK_0xEFFB47DC2D8F23F9())
		{
			Global_2405072.f_2679 = iVar0;
		}
	}
}

int func_392(bool bParam0)
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

bool func_393()
{
	return ((UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_30, 12) && UNK_0xEAE0D21A50E6C7F4(Global_1695469, 12)) && Global_1695468 == 8);
}

bool func_394()
{
	return (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_30, 12) && UNK_0xEAE0D21A50E6C7F4(Global_1695469, false));
}

bool func_395(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_2425662[iParam0 /*421*/].f_222 == 99)
	{
		if ((bParam2 && Global_2425662[iParam0 /*421*/].f_225 == 0) || bParam2 == 0)
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (Global_2425662[iParam0 /*421*/].f_222 == 13)
		{
			return false;
		}
	}
	return true;
}

bool func_396()
{
	return Global_1312854;
}

void func_397(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
		UNK_0x2FB9A57162E54BAB(0f);
	}
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xFE76348A7A0CEF66(UNK_0x16F2683693E537C9());
	}
	if (!bParam1)
	{
		UNK_0x066C43E677C08D5C();
	}
	if (UNK_0x0C2635BB5127C8FB())
	{
		UNK_0x5D29A7ED2621B332();
	}
	func_365();
	if (!UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, 14) && !func_399())
	{
		func_398();
	}
}

void func_398()
{
	Global_2546219.f_82 = 1;
}

bool func_399()
{
	if (!UNK_0xA14BB9332558B949() && !func_396())
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_238365[0 /*24*/].f_17, false))
	{
		return true;
	}
	return false;
}

bool func_400(int iParam0)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		return UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(iParam0));
	}
	return true;
}

void func_401(bool bParam0)
{
	if (bParam0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142, 15))
		{
			UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142), 15);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142, 15))
	{
		UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142), 15);
	}
}

bool func_402(int iParam0)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		return !func_403(UNK_0xB177666FAB6F4417(iParam0));
	}
	return false;
}

bool func_403(bool bParam0)
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

void func_404(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 8, 0))
		{
			func_65(iParam0, 8, 0);
			func_405(iParam0);
		}
	}
	else if (func_26(iParam0, 8, 0))
	{
		func_63(iParam0, 8, 0);
		func_405(iParam0);
	}
}

void func_405(int iParam0)
{
	Global_98796.f_181[iParam0] = 1;
	Global_98796.f_180 = 1;
}

void func_406(int iParam0, bool bParam1)
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

void func_407(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		Global_98796.f_8 = 1;
	}
	else
	{
		Global_98796.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_405(iVar0);
		iVar0++;
	}
}

void func_408(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

int func_409()
{
	return Local_536;
}

bool func_410()
{
	return true;
}

int func_411(int iParam0)
{
	return Local_708[iParam0 /*5*/];
}

int func_412(int iParam0)
{
	return Local_708[iParam0 /*5*/].f_2;
}

bool func_413(bool bParam0)
{
	if (func_415())
	{
		if (bParam0)
		{
			if (!Global_1574405 && !func_414(UNK_0xD803B885F5E47A62(), 2))
			{
				UNK_0x82A772610883F395("MinigameTransitionIn", 0, 1);
				func_353(0, 0);
			}
		}
		return true;
	}
	return false;
}

bool func_414(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_208, bParam1);
}

bool func_415()
{
	return Global_2439138.f_2;
}

void func_416(bool bParam0)
{
	bool bVar0;

	if (UNK_0x8CD06866876216F2())
	{
		if (bLocal_725)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_3, 2))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 31))
				{
					func_32(119, 1, -1, 1);
					func_32(115, 1, -1, 1);
				}
				func_733(1);
				bVar0 = true;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(Local_708[UNK_0x57270EE11514DC67() /*5*/].f_3, true))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_719, 31))
			{
				func_32(119, 1, -1, 1);
				func_32(115, 1, -1, 1);
			}
			bVar0 = true;
		}
	}
	func_216(&Local_62, 0, bParam0);
	if (UNK_0x8CD06866876216F2())
	{
		if (Global_2439138.f_3747)
		{
			func_726(0, 1, 0, 1);
		}
	}
	if (UNK_0x8CD06866876216F2())
	{
		func_401(0);
	}
	UNK_0x2952D66A502EA873(Local_62.f_122, 0);
	UNK_0x842F1AEB2FCC00B7(-1042.918f, -2723.14f, 17.34114f, -1087.764f, -2667.605f, 25.79593f, 25.5625f, 1);
	UNK_0x842F1AEB2FCC00B7(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 1);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_795), 4);
	func_98(0);
	func_61(0);
	func_725();
	func_724(iLocal_61, 0);
	func_197(&(Global_2439138.f_3997));
	Global_2439138.f_3995 = 0;
	Global_2439138.f_3994 = 0;
	Global_2439138.f_3996 = 0;
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 244, true);
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 243, true);
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 242, true);
	}
	if (bVar0)
	{
		func_419(0, 0, 0, 0, 1);
	}
	else
	{
		UNK_0xA37A90C62806D848(1);
		func_419(0, 0, 3, 1, 1);
	}
	UNK_0x0674E58A79778E99(&(Global_2537071.f_795), false);
	func_407(0);
	func_406(4, 0);
	func_406(1, 0);
	func_406(0, 0);
	func_406(2, 0);
	func_406(3, 0);
	func_404(iLocal_61, 0);
	func_388();
	func_35();
	if (UNK_0xE4EDC4B0E92C078B(Global_98796.f_235[iLocal_61]))
	{
		UNK_0x661342B9651D16E2(Global_98796.f_235[iLocal_61], false);
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_722))
	{
		UNK_0x142CC44DB769B57E(&iLocal_722);
	}
	if (UNK_0x8CD06866876216F2())
	{
		func_418(0);
		func_200(0);
	}
	func_417(Local_536.f_5);
}

void func_417(struct<2> Param0)
{
	if (Param0.f_1)
	{
		if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Param0)) >= 1000)
		{
			UNK_0x8083E47CDF768A1E();
		}
	}
	UNK_0x10FAF14A60A0DBE1();
}

void func_418(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142), 5);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142), 5);
	}
}

void func_419(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	struct<6> Var8;
	struct<6> Var14;
	int iVar20;
	char* sVar21;
	struct<2> Var22;
	bool bVar24;
	int iVar25;

	bVar0 = UNK_0xD803B885F5E47A62();
	iVar1 = Global_1590535[bVar0 /*876*/];
	func_723();
	func_719();
	UNK_0x554A390AA8A21EE8(0);
	func_718();
	Global_968153 = 0;
	Global_1573304 = 0;
	func_717();
	UNK_0x428D9DCBB4E4492F(0);
	func_716();
	Global_786547 = 0;
	Global_786547.f_1 = 0;
	Global_1574198 = 0;
	Global_2359296 = 0;
	Global_2359297 = 0;
	func_715(0);
	Global_1574187 = 0;
	Global_1574186 = 0;
	Global_1574210 = 0;
	Global_1574424 = 0;
	Global_1574430 = 0;
	Global_1573924 = 0;
	Global_1575104 = 1;
	Global_1574396 = 0;
	Global_1574199 = -1;
	func_714(0);
	UNK_0x0674E58A79778E99(&(Global_2359302.f_1), 5);
	if (!func_713() && !func_711())
	{
		func_710();
	}
	func_709();
	func_708();
	func_707();
	func_706();
	func_705();
	if (UNK_0x8CD06866876216F2())
	{
		func_704();
		func_703();
	}
	if (func_702() || !func_701())
	{
		func_700();
		func_699(1, 1, 1);
		func_698();
		func_697();
		if (bVar0 != -1)
		{
			Global_1627020[bVar0 /*38*/].f_1 = 0;
			Global_1627020[bVar0 /*38*/].f_2 = 0;
			Global_1627020[bVar0 /*38*/] = 0;
		}
	}
	func_696();
	if ((((Global_4456448 != 6 && func_695(Global_4456448.f_194990) != 14) && func_695(Global_4456448.f_194990) != 15) && !func_341()) && !func_711())
	{
		if (func_14(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			if (UNK_0xDCCE25EA1C1D1F76(UNK_0x16F2683693E537C9()))
			{
				UNK_0xE731059548189243(UNK_0x16F2683693E537C9(), 1);
			}
		}
	}
	Global_1573325 = 0;
	if (Global_1653538.f_9 == 4)
	{
		if (func_694(UNK_0xD803B885F5E47A62()) || func_693(UNK_0xD803B885F5E47A62()))
		{
			Global_1573325 = 1;
		}
	}
	func_691();
	if (func_690())
	{
		func_689();
	}
	func_688();
	Global_4456448.f_197272 = 0;
	Global_1653498.f_4 = 0;
	if (!UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_29, true) && !func_687())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_14, 17))
		{
			UNK_0xB72C6E8042748B1A(UNK_0xD803B885F5E47A62(), 0);
			UNK_0x14CC404CCC1FD25C(1);
		}
		else
		{
			UNK_0xB72C6E8042748B1A(UNK_0xD803B885F5E47A62(), 1);
			UNK_0x14CC404CCC1FD25C(0);
		}
	}
	StringCopy(&(Global_4456448.f_194982), "", 32);
	if (!func_711())
	{
		UNK_0xB8E3919889462ACD();
		UNK_0x3584F71E5CA29322(18);
		if ((bParam3 && !func_686()) && !func_685())
		{
			UNK_0x3FC8DBCC154CA56B();
		}
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		Global_1626547[iVar3] = 0;
		Global_1626514[iVar3] = 0;
		iVar3++;
	}
	if (iVar1 == 0)
	{
		UNK_0x5D96D8530B3D0904(&(Global_2451426.f_5858), 3);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_2451426.f_5858), 3);
	}
	if (bVar0 != -1 && Global_2450632.f_569.f_10 != 0)
	{
		Global_1627020[UNK_0xD803B885F5E47A62() /*38*/].f_2 = Global_2450632.f_569.f_10;
	}
	if (func_415() || (bVar0 != -1 && Global_1590535[bVar0 /*876*/].f_733))
	{
		if (!bParam4)
		{
			Global_4456448 = 2;
			func_683();
			Global_4456448 = 0;
		}
		else
		{
			func_683();
		}
		func_682();
		func_681(1, 1);
		func_699(1, 1, 0);
		if (bVar0 != -1)
		{
			Global_1627020[bVar0 /*38*/].f_1 = 0;
			Global_1627020[bVar0 /*38*/].f_2 = 0;
			Global_1627020[bVar0 /*38*/] = 0;
		}
		func_680(1);
		if (func_679())
		{
			func_678();
		}
		if (!func_17(UNK_0xD803B885F5E47A62()))
		{
			func_676(4);
		}
		func_698();
		func_675(0);
		func_674();
		Global_1575096 = 0;
	}
	if (!func_673())
	{
		func_672();
		if (func_671())
		{
			if (func_670())
			{
				func_682();
			}
		}
		func_680(1);
		if (!func_669())
		{
			Global_2451426.f_6195 = 0;
			Global_2451426.f_6196 = 0;
			Global_2451426.f_6194 = 0;
			Global_2451426.f_6193 = 0;
			Global_2451426.f_6371 = 0;
		}
	}
	else
	{
		func_668(UNK_0xD803B885F5E47A62(), 0);
	}
	func_667((Global_1653538.f_9 != 4 && !func_673()));
	func_666((Global_1653538.f_9 != 4 && !func_673()));
	func_665((Global_1653538.f_9 != 4 && !func_673()));
	if (func_669())
	{
		Global_2451426.f_6285 = 1;
	}
	else
	{
		Global_2451426.f_6285 = 0;
	}
	if (!func_673())
	{
		if (func_669())
		{
			Global_2451426.f_6286 = 1;
		}
		else
		{
			Global_2451426.f_6286 = 0;
		}
	}
	if (func_663())
	{
		if (func_662())
		{
			Global_2451426.f_6287 = 1;
		}
		else
		{
			Global_2451426.f_6287 = 0;
		}
	}
	if (!func_713())
	{
		Global_1653563.f_1345 = 0;
	}
	if (!func_673() && !func_713())
	{
		func_681(1, Global_1653538.f_9 != 4);
		func_699(1, 1, 0);
		func_661(0);
		func_660();
		Global_1575098 = 0;
		if (bVar0 != -1)
		{
			Global_1627020[bVar0 /*38*/].f_1 = 0;
			Global_1627020[bVar0 /*38*/].f_2 = 0;
			Global_1627020[bVar0 /*38*/] = 0;
		}
	}
	func_657(1, -1);
	if (func_656())
	{
		func_655();
	}
	if (UNK_0xA14BB9332558B949())
	{
		UNK_0x23060D17DC6BDA8D();
	}
	if ((!func_686() && !func_673()) && !func_685())
	{
		func_650();
	}
	Global_4456448.f_197268 = 0;
	func_649();
	Global_1574180 = -1;
	Global_1626595 = -1;
	Global_1626585 = -1;
	Global_1626588 = -1;
	Global_1574185 = 0;
	Global_1626586 = 0;
	Global_1574407 = 0;
	Global_1574399 = 0;
	Global_1626596 = 0;
	func_648(0);
	func_647();
	Global_1590535[bVar0 /*876*/].f_733 = 0;
	Global_1626583 = 0f;
	Global_1626584 = 0f;
	Global_1574408 = 0;
	Global_1574409 = -1;
	func_646(0);
	Global_1574397 = 0;
	Global_1573925 = 0;
	func_645();
	UNK_0x7352ACF3368DF65F("WantedMusicDisabled", 0);
	UNK_0x7352ACF3368DF65F("DisableFlightMusic", 0);
	func_644(1);
	if (func_643())
	{
		func_642();
	}
	if (func_641())
	{
		if (func_639(UNK_0xD803B885F5E47A62()))
		{
			if (UNK_0x981819F6C45DDB49() < 2)
			{
				func_638();
				func_637(1);
			}
			else
			{
				func_636();
			}
			if (Global_1653538.f_9 != -1)
			{
				func_635();
			}
		}
		else if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 0)
		{
			if (Global_1653538.f_9 != -1)
			{
				func_635();
			}
		}
	}
	bVar4 = func_18(bVar0);
	Global_1590535[bVar0 /*876*/].f_198 = 0;
	if (bVar4 && !func_713())
	{
		func_634();
	}
	if (!bVar4)
	{
		func_633(0);
	}
	if ((func_632() != 39 && func_632() != 38) && !func_631())
	{
		Global_1573279 = { 0f, 0f, 0f };
	}
	if (func_630() && func_254())
	{
	}
	else
	{
		func_629();
	}
	func_628();
	func_637(0);
	iVar6 = 0;
	if (!bVar4)
	{
		if (Global_1653538.f_9 == 6)
		{
			iVar6 = 1;
		}
		if (!func_627())
		{
			func_626(0, iVar6);
		}
	}
	UNK_0xD65169195EE68192(0);
	if (UNK_0x8CD06866876216F2())
	{
		switch (Global_1653538.f_9)
		{
			case 1:
				if (!func_625() && func_622(0) > 0)
				{
					Global_1671743[0 /*8*/].f_5 = 1;
				}
				if (!bVar4)
				{
					func_620();
					func_619();
				}
				break;
			case 6:
				Global_1575096 = 0;
				if (!bVar4)
				{
					func_620();
				}
				func_619();
				Global_1653538 = 0;
				Global_1653538.f_22 = { 0f, 0f, 0f };
				Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_12 = 0;
				StringCopy(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_216), "", 24);
				Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_213 = { 0f, 0f, 0f };
				func_618(0);
				break;
			case 2:
				func_617(0);
				if (!func_616() || (func_616() && UNK_0xEA6BC48857E0AC4C(&(Global_2450632.f_29))))
				{
					func_615(Global_1653538.f_16);
					func_614(Global_1653538.f_16);
				}
				bVar5 = Global_1590535[bVar0 /*876*/].f_11;
				if (bVar5 != func_140())
				{
					if (UNK_0x40B8C182D63932FC(bVar5))
					{
						Global_2451426.f_5859 = { func_78(bVar5) };
					}
					else
					{
						bVar7 = true;
					}
				}
				else
				{
					bVar7 = true;
				}
				if ((bVar7 && func_616()) && UNK_0x0DC0B2DBBD52B0C0() == 1)
				{
					Global_2451426.f_5859 = { func_613() };
				}
				if (((((Global_4456448.f_206 > 1 && !func_605()) && !func_604(Global_4456448.f_194990)) && !func_603(Global_4456448.f_194990)) && Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_99.f_28 > -1) && Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_99.f_28 < 4)
				{
					func_602(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_99.f_28);
				}
				else
				{
					func_601();
				}
				break;
			case 3:
				func_617(0);
				bVar2 = true;
				func_600();
				bVar5 = Global_1590535[bVar0 /*876*/].f_11;
				if (bVar5 != func_140())
				{
					if (UNK_0x40B8C182D63932FC(bVar5))
					{
						Global_2451426.f_5859 = { func_78(bVar5) };
					}
				}
				if (((Global_4456448.f_206 > 1 && !func_605()) && !func_604(Global_4456448.f_194990)) && !func_603(Global_4456448.f_194990))
				{
					func_602(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_99.f_28);
				}
				else
				{
					func_601();
				}
				break;
			case 4:
				func_617(0);
				bVar2 = true;
				if (func_599())
				{
					func_598();
				}
				else if (func_597())
				{
				}
				else
				{
					if (!(func_596() || func_669()) || !func_595())
					{
						Global_2451426.f_6195 = 0;
						Global_2451426.f_6196 = 0;
					}
					if (!func_595())
					{
						Global_2451426.f_6194 = 0;
						Global_2451426.f_6193 = 0;
					}
				}
				if (func_694(UNK_0xD803B885F5E47A62()) || func_693(UNK_0xD803B885F5E47A62()))
				{
					Global_786435.f_34++;
				}
				else if (func_594())
				{
					Global_786481.f_34++;
					if (Global_786481.f_64 == 0)
					{
						Global_786481.f_64 = 1;
					}
				}
				else if (func_592())
				{
					Global_1674920.f_17++;
				}
				if (func_591(Global_4456448.f_194990))
				{
					if (Global_1674840.f_14 == 0)
					{
						Global_1674840.f_14 = 1;
					}
				}
				if (!UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_12, 22))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_12, 15))
					{
						func_590(Global_4456448.f_197245);
					}
					else
					{
						func_589(Global_4456448.f_229397, Global_4456448.f_229398);
					}
					if (Global_1653538.f_13 > -1)
					{
						UNK_0xF60E6F759DB05AEB(Global_1653538.f_13, Global_1653538.f_14, 0);
					}
					else if (func_588() > -1)
					{
						func_586(func_588(), 0);
					}
				}
				if (func_585())
				{
					Var8 = { func_584() };
					func_583(Var8);
					if (func_582() != -1)
					{
						Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_99.f_28 = func_582();
					}
					func_581();
					func_580();
				}
				else
				{
					func_600();
				}
				if (!func_255(UNK_0xD803B885F5E47A62(), 0))
				{
					UNK_0x9D57AD477C5339C8(false);
					func_368(0, 0, 1);
				}
				break;
			case 5:
				func_617(0);
				bVar2 = true;
				func_600();
				break;
			case 8:
				if (!func_616())
				{
					func_615(Global_1653538.f_16);
				}
				break;
			case 9:
				func_617(0);
				bVar2 = true;
				func_600();
				func_614(Global_4456448.f_195277);
				Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_216 = { Global_4456448.f_195277 };
				if (func_579())
				{
					func_578();
				}
				if (!func_255(UNK_0xD803B885F5E47A62(), 0))
				{
					UNK_0x9D57AD477C5339C8(false);
					func_368(0, 0, 1);
				}
				break;
			case 10:
				func_558(10, 0f, 0f, 0f, Var14);
				func_557();
				break;
		}
	}
	else
	{
		Global_1575096 = 0;
	}
	if (bVar2 || func_693(UNK_0xD803B885F5E47A62()))
	{
		if ((func_556(UNK_0xD803B885F5E47A62()) || func_694(UNK_0xD803B885F5E47A62())) || func_693(UNK_0xD803B885F5E47A62()))
		{
			if (Global_1662445 > 0)
			{
				Global_2451426.f_1.f_2828.f_13 = Global_1662445;
				Global_2451426.f_1.f_2828 = { Global_1662445.f_1 };
			}
		}
		else
		{
			func_555();
		}
	}
	Global_2451426.f_1.f_842 = 0;
	UNK_0x0674E58A79778E99(&Global_1573929, false);
	func_554(0);
	Global_1574190 = 0;
	Global_1574392 = -1;
	Global_1626513 = 0;
	Global_1312438 = 0;
	Global_1653538.f_1 = 0;
	Global_1653538.f_2 = 0;
	if (func_553() == 0)
	{
		if (Global_1653538.f_9 == -1 && bVar4 == 0)
		{
			func_545(0);
		}
		else
		{
			Global_1653538.f_9 = -1;
		}
	}
	func_544();
	if (func_543())
	{
		func_542();
	}
	if (func_541())
	{
		func_540();
	}
	if (!UNK_0xA14BB9332558B949())
	{
		UNK_0x5F30A037D837553E(1);
	}
	if (func_553() == 0)
	{
		if (bParam0 && iParam2 != 5)
		{
			if (((((!func_539(Global_1590535[bVar0 /*876*/]) && !func_686()) && !bVar4) && !func_396()) && !func_673()) && !func_685())
			{
				func_538(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	func_537();
	Global_1653538.f_1 = 0;
	if (!func_641())
	{
		func_536();
	}
	if (Global_1590535[bVar0 /*876*/] != -1)
	{
		iParam2 = iParam2;
		if (func_535(Global_1590535[bVar0 /*876*/]))
		{
			if (UNK_0x58424C49F8924842())
			{
				iVar20 = func_518(0);
				func_515(1212, -1);
				func_510(joaat("MPPLY_MGAME_CHEAT_END"), iVar20);
				if (iVar20 > 0)
				{
					func_510(joaat("MPPLY_ACTIVITY_ENDED"), 1);
				}
			}
		}
	}
	if (UNK_0x8CD06866876216F2())
	{
		UNK_0xE0459E75FBA5CC92(UNK_0xD803B885F5E47A62());
	}
	func_508();
	if (Global_1653538 == 0)
	{
		if (!bVar4)
		{
			Global_1590535[bVar0 /*876*/].f_11 = -1;
			Global_1590535[bVar0 /*876*/].f_12 = 0;
		}
	}
	if (bVar4)
	{
		func_538(0);
		Global_1590535[bVar0 /*876*/].f_12 = 1;
		Global_1590535[bVar0 /*876*/].f_11 = func_507(UNK_0xD803B885F5E47A62());
		UNK_0x9D57AD477C5339C8(false);
		func_368(0, 0, 1);
		if (func_506())
		{
			func_504();
		}
	}
	if ((Global_1590535[bVar0 /*876*/] < 10 && Global_1590535[bVar0 /*876*/] != -1) && !func_396())
	{
		if ((!UNK_0xEA6BC48857E0AC4C(&(Global_1590535[bVar0 /*876*/].f_147)) && Global_1590535[bVar0 /*876*/] != 5) && Global_1590535[bVar0 /*876*/] != 148)
		{
			func_501(&(Global_1590535[bVar0 /*876*/].f_147));
		}
	}
	if (Global_1590535[bVar0 /*876*/] != 6)
	{
		Global_1653485 = 1;
	}
	Global_1590535[bVar0 /*876*/] = -1;
	Global_1590535[bVar0 /*876*/].f_39.f_2 = -1;
	Global_1590535[bVar0 /*876*/].f_39.f_16 = -1;
	Global_1590535[bVar0 /*876*/].f_39.f_1 = -1;
	Global_4456448 = 0;
	if (!bVar4)
	{
		func_500(0);
	}
	Global_1590535[bVar0 /*876*/].f_39.f_18 = 0;
	UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0x6E61BE9E61434AC1() /*876*/].f_731), false);
	UNK_0xF9FD1FFF80EFABE1(0, 0);
	if (iVar1 != 6 && iVar1 != 148)
	{
		UNK_0xC60408C24B32AAC4();
		Global_2461857 = 0;
	}
	if (!bVar4)
	{
		StringCopy(&(Global_1590535[bVar0 /*876*/].f_147), sVar21, 24);
		StringCopy(&(Global_1590535[bVar0 /*876*/].f_153), sVar21, 24);
		func_499();
	}
	StringCopy(&(Global_1618568[bVar0 /*16*/]), sVar21, 64);
	StringCopy(&(Global_1590535[bVar0 /*876*/].f_167), sVar21, 64);
	Global_1627020[bVar0 /*38*/].f_31 = { Var22 };
	Global_1627020[bVar0 /*38*/].f_33 = { Var22 };
	Global_1574402 = 0;
	Global_1574403 = 0;
	Global_1573937 = -1;
	bVar24 = false;
	func_498();
	func_497();
	func_496();
	if (func_495())
	{
		func_494();
	}
	if (func_493() && UNK_0xA14BB9332558B949())
	{
		func_492();
		func_363(UNK_0xD803B885F5E47A62(), 0, 57348, 0);
	}
	if (func_491())
	{
		func_490();
	}
	else if (func_489())
	{
		func_490();
	}
	else if (func_488())
	{
		func_490();
	}
	else if (func_487())
	{
		func_490();
	}
	else if (func_486())
	{
		func_490();
	}
	else if (func_553())
	{
		func_490();
	}
	else if (func_485() && func_484())
	{
		func_490();
	}
	else if (func_483())
	{
		func_490();
	}
	else
	{
		func_482();
		if (!Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_12 && !func_713())
		{
			if (UNK_0xA14BB9332558B949())
			{
				if (func_506())
				{
					func_481();
				}
				else
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_28, 10))
					{
						if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
						{
							Global_2451426.f_2846.f_197 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
						}
					}
					func_480();
					func_698();
					func_479(6);
					func_619();
					if (bVar4)
					{
						func_675(0);
					}
				}
				func_478();
				func_477();
				func_476();
				if (Global_2451426.f_2846.f_4 == 2)
				{
					Global_2451426.f_2846.f_4 = 1;
				}
				if (func_255(UNK_0xD803B885F5E47A62(), 0))
				{
					func_475();
				}
				func_474();
				Global_2451426.f_2846 = 0;
			}
			else
			{
				func_473();
				func_490();
			}
		}
		else
		{
			if (!func_669() && !func_713())
			{
			}
			func_473();
			func_490();
		}
	}
	if ((((((((((!func_491() && !func_472()) && !func_484()) && !func_485()) && !func_488()) && !func_489()) && !func_471()) && !func_486()) && !func_553()) && !func_487()) && !func_470())
	{
		if (!func_469())
		{
			func_468();
			func_466();
			func_465();
			func_463(1);
		}
	}
	if (UNK_0x8CD06866876216F2())
	{
		if (UNK_0x09BE1E6DF7B80B43())
		{
			if (!UNK_0xF35E2CBC969C0B53())
			{
				if (!func_462())
				{
					if (!bVar24)
					{
						if (func_17(UNK_0xD803B885F5E47A62()))
						{
							UNK_0xB24A64FA3FB418D8();
							UNK_0xC3BCD22813D59BCD();
						}
					}
				}
			}
		}
	}
	if (!func_396())
	{
		StringCopy(&(Global_4456448.f_194997), "", 64);
	}
	if (func_461(116, &iVar25))
	{
		func_460(iVar25);
	}
	if (func_461(123, &iVar25))
	{
		func_460(iVar25);
	}
	if (!func_713())
	{
		func_452();
	}
	else if (func_451())
	{
		func_450();
	}
	func_449();
	if (!func_673() && !func_669())
	{
		func_448();
	}
	iVar3 = 0;
	while (iVar3 < 27)
	{
		Global_1694319[iVar3] = -1;
		Global_1694347[iVar3] = -1;
		Global_1694375[iVar3] = -1;
		iVar3++;
	}
	func_442();
	func_420(bParam3);
}

void func_420(bool bParam0)
{
	var uVar0;

	if (bParam0)
	{
		if (func_641())
		{
		}
		else if ((((!func_673() && !func_669()) && !func_713()) && Global_1653538.f_9 != 9) && Global_1653538.f_9 != 4)
		{
			func_586(0, 1);
		}
	}
	UNK_0xB547E3FFEB27073E();
	if (!func_441(UNK_0xD803B885F5E47A62()) && !Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_751)
	{
		func_440();
	}
	if (func_439())
	{
		func_438(1);
		func_437(1);
	}
	if ((((bParam0 && !func_436()) && !func_673()) && !Global_262145.f_4723) && !func_435())
	{
		UNK_0x3F8ED0E306F22B54();
	}
	UNK_0x15EA7F4313456B1D(5, true);
	UNK_0x15EA7F4313456B1D(3, true);
	func_427(&uVar0, -1);
	if ((func_19() == 0 && !func_124()) && !func_673())
	{
		if (func_426())
		{
			func_425();
		}
		else
		{
			func_422(1147932892, 28, 0);
		}
	}
	func_421(0);
}

void func_421(int iParam0)
{
	if (!Global_1661978 == iParam0)
	{
		Global_1661978 = iParam0;
	}
}

void func_422(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_424(iParam1, bParam2))
	{
		iVar0 = func_423();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_423()
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

bool func_424(int iParam0, bool bParam1)
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

void func_425()
{
	UNK_0x5D96D8530B3D0904(&(Global_959568.f_8), 22);
}

bool func_426()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_959568.f_8, 21);
}

void func_427(var uParam0, bool bParam1)
{
	func_433(uParam0, bParam1);
	func_428(bParam1);
}

void func_428(bool bParam0)
{
	int iVar0;
	bool bVar1;

	if (bParam0 == -1)
	{
		bParam0 = func_29();
	}
	iVar0 = func_432(bParam0);
	bVar1 = UNK_0x0A4C9A3D51EAE31F(iVar0);
	if (func_429())
	{
		if (UNK_0xEAE0D21A50E6C7F4(bVar1, true))
		{
			func_32(133, 1, -1, 1);
		}
	}
}

bool func_429()
{
	if (func_431() && func_430(0))
	{
		return true;
	}
	return false;
}

var func_430(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_431()
{
	return func_430(func_29() + 1);
}

int func_432(bool bParam0)
{
	int iVar0;

	if (bParam0 == -1)
	{
		bParam0 = func_29();
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

void func_433(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (bParam1 == -1)
	{
		bParam1 = func_29();
	}
	iVar1 = func_434(bParam1);
	bVar2 = UNK_0x0A4C9A3D51EAE31F(iVar1);
	if (UNK_0xEAE0D21A50E6C7F4(bVar2, true))
	{
		func_515(1207, bParam1);
		func_510(joaat("MPPLY_DM_CHEAT_START"), 2);
		func_510(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		UNK_0x0674E58A79778E99(&bVar2, true);
		bVar0 = true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bVar2, 2))
	{
		func_515(1209, bParam1);
		func_510(joaat("MPPLY_RACE_CHEAT_START"), 2);
		func_510(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		UNK_0x0674E58A79778E99(&bVar2, 2);
		bVar0 = true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bVar2, 3))
	{
		func_515(1118, bParam1);
		func_510(joaat("MPPLY_MC_CHEAT_START"), 2);
		func_510(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		UNK_0x0674E58A79778E99(&bVar2, 3);
		bVar0 = true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bVar2, 4))
	{
		func_515(1211, bParam1);
		func_510(joaat("MPPLY_MGAME_CHEAT_START"), 2);
		func_510(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		UNK_0x0674E58A79778E99(&bVar2, 4);
		bVar0 = true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bVar2, 5))
	{
		func_515(1923, bParam1);
		func_510(joaat("MPPLY_CAP_CHEAT_START"), 2);
		func_510(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		UNK_0x0674E58A79778E99(&bVar2, 5);
		bVar0 = true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bVar2, 6))
	{
		func_515(1925, bParam1);
		func_510(joaat("MPPLY_SUR_CHEAT_START"), 2);
		func_510(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		UNK_0x0674E58A79778E99(&bVar2, 6);
		bVar0 = true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bVar2, 7))
	{
		func_515(1927, bParam1);
		func_510(joaat("MPPLY_LTS_CHEAT_START"), 2);
		func_510(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		UNK_0x0674E58A79778E99(&bVar2, 7);
		bVar0 = true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bVar2, 8))
	{
		func_515(1929, bParam1);
		func_510(joaat("MPPLY_PARA_CHEAT_START"), 2);
		func_510(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		UNK_0x0674E58A79778E99(&bVar2, 8);
		bVar0 = true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bVar2, 9))
	{
		func_515(9637, bParam1);
		func_510(joaat("MPPLY_HEIST_CHEAT_START"), 2);
		func_510(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		UNK_0x0674E58A79778E99(&bVar2, 9);
		bVar0 = true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bVar2, 26))
	{
		func_515(1931, bParam1);
		func_510(joaat("MPPLY_FMEVN_CHEAT_START"), 2);
		func_510(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		UNK_0x0674E58A79778E99(&bVar2, 26);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		UNK_0x25C34E9F657F1C79(bVar2, bParam1);
	}
}

int func_434(bool bParam0)
{
	int iVar0;

	if (bParam0 == -1)
	{
		bParam0 = func_29();
	}
	switch (bParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		case 1:
			iVar0 = 910;
			break;
		case 2:
			iVar0 = 911;
			break;
		case 3:
			iVar0 = 912;
			break;
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

bool func_435()
{
	if (func_694(UNK_0xD803B885F5E47A62()) || func_693(UNK_0xD803B885F5E47A62()))
	{
		if (func_596() || func_669())
		{
			return true;
		}
	}
	return false;
}

bool func_436()
{
	return Global_1574405;
}

void func_437(int iParam0)
{
	Global_2451426.f_6370 = iParam0;
}

void func_438(int iParam0)
{
	Global_2451426.f_6192 = iParam0;
}

bool func_439()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (!UNK_0xEA6BC48857E0AC4C(&(Global_4456448.f_195308[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_440()
{
	UNK_0x34D79252800B23FF(6);
	UNK_0x51B096AAC60548C1(1f);
	UNK_0x060F249A9A3E3F4E(true);
}

bool func_441(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/] != -1;
	}
	return false;
}

void func_442()
{
	if (Global_1695404)
	{
		if (func_341())
		{
			if (func_447(Global_4456448.f_232883))
			{
				switch (Global_4456448.f_226026)
				{
					case 1:
						UNK_0x77ADAEFF81EAE1E4(2947.73f, -3860.622f, 142.6144f, 5f, joaat("XS_COMBINED_DYST_06_BUILD_03"), 0);
						break;
				}
			}
			else if (func_446(Global_4456448.f_232883))
			{
				switch (Global_4456448.f_226026)
				{
					case 3:
						UNK_0x77ADAEFF81EAE1E4(2943.765f, -3859.625f, 151.1007f, 5f, joaat("XS_PROPINT3_SET_WASTE_03_LICENCEP"), 0);
						break;
				}
			}
			else if (func_445(Global_4456448.f_232883))
			{
				switch (Global_4456448.f_226026)
				{
					case 3:
						UNK_0x77ADAEFF81EAE1E4(2948.968f, -3854.075f, 150.7258f, 5f, joaat("XS_PROPINT4_WASTE_08_PLATES"), 0);
						break;
				}
			}
			else if (func_444(Global_4456448.f_232883))
			{
				switch (Global_4456448.f_226026)
				{
					case 3:
						UNK_0x77ADAEFF81EAE1E4(2944.726f, -3846.384f, 140f, 5f, joaat("XS_PROPINT5_WASTE_09_GROUND_D"), 0);
						UNK_0x77ADAEFF81EAE1E4(2948.589f, -3859.259f, 145.6578f, 5f, joaat("XS_PROPINT5_WASTE_09_GROUND_CUT"), 0);
						UNK_0x77ADAEFF81EAE1E4(2950.465f, -3861.078f, 149.8605f, 5f, joaat("XS_PROPINT4_WASTE_09_LOLLYWALL"), 0);
						break;
				}
			}
			else if (func_443(Global_4456448.f_232883))
			{
				switch (Global_4456448.f_226026)
				{
					case 3:
						UNK_0x77ADAEFF81EAE1E4(2943.765f, -3859.625f, 151.1007f, 5f, joaat("XS_PROPINT3_SET_WASTE_03_LICENCEP"), 0);
						break;
				}
			}
		}
		Global_1695404 = 0;
	}
}

bool func_443(int iParam0)
{
	return iParam0 == 76;
}

bool func_444(int iParam0)
{
	return iParam0 == 77;
}

bool func_445(int iParam0)
{
	return iParam0 == 83;
}

bool func_446(int iParam0)
{
	return iParam0 == 74;
}

bool func_447(int iParam0)
{
	return iParam0 == 78;
}

void func_448()
{
	Global_2450632.f_39.f_41 = 0;
}

void func_449()
{
	Global_1653538.f_6 = 0;
}

void func_450()
{
	UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_99.f_32), 5);
}

bool func_451()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632.f_3, 7);
}

void func_452()
{
	vector3 vVar0;
	struct<2> Var3;
	bool bVar5;

	if (!func_458(func_459(), vVar0))
	{
		Var3 = -1927234115;
		Var3.f_1 = UNK_0xD803B885F5E47A62();
		bVar5 = func_457(1, 1);
		if (!bVar5 == 0)
		{
			func_454();
			func_453(0);
			UNK_0xFB061A86A7AC749F(1, &Var3, 2, bVar5);
		}
	}
}

void func_453(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_2439138.f_3742 = UNK_0x2B6E0A53779D29EA();
	}
	Global_2439138.f_3626 = iParam0;
}

void func_454()
{
	func_456();
	func_455();
}

void func_455()
{
	struct<72> Var0;

	if (func_60(UNK_0xD803B885F5E47A62()))
	{
		Var0.f_6 = 32;
		Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_122 = { Var0 };
	}
}

void func_456()
{
	struct<113> Var0;

	Var0.f_4 = -1;
	Var0.f_7 = 32;
	Var0.f_79 = { Global_2439138.f_3626.f_79 };
	Var0.f_95 = { Global_2439138.f_3626.f_95 };
	Global_2439138.f_3626 = { Var0 };
}

bool func_457(bool bParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = UNK_0x117658E336116132(bVar1);
		if (func_14(bVar2, 0, 0))
		{
			if (bVar2 != UNK_0xD803B885F5E47A62() || bParam0)
			{
				if (bParam1)
				{
					UNK_0x5D96D8530B3D0904(&uVar0, bVar1);
				}
				else if (!func_255(bVar2, 0))
				{
					UNK_0x5D96D8530B3D0904(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_458(vector3 vParam0, vector3 vParam3)
{
	if ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z)
	{
		return true;
	}
	return false;
}

Vector3 func_459()
{
	return Global_2424910[UNK_0xD803B885F5E47A62() /*10*/];
}

void func_460(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return;
	}
	if (((Global_2506377[iParam0 /*5*/].f_1 == -1 || Global_2506377[iParam0 /*5*/].f_2 == -1) || Global_2506377[iParam0 /*5*/].f_3 == -1) || Global_2506377[iParam0 /*5*/].f_4 == -1)
	{
		return;
	}
	UNK_0x336728A54E0DF141(Global_2506377[iParam0 /*5*/], Global_2506377[iParam0 /*5*/].f_1, Global_2506377[iParam0 /*5*/].f_2, Global_2506377[iParam0 /*5*/].f_3, Global_2506377[iParam0 /*5*/].f_4);
	Global_2506377[iParam0 /*5*/] = -1;
	Global_2506377[iParam0 /*5*/].f_1 = -1;
	Global_2506377[iParam0 /*5*/].f_2 = -1;
	Global_2506377[iParam0 /*5*/].f_3 = -1;
	Global_2506377[iParam0 /*5*/].f_4 = -1;
}

bool func_461(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_2506377[iVar0 /*5*/] == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_462()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142, 18);
}

void func_463(bool bParam0)
{
	int iVar0;
	struct<57> Var1;
	int iVar58;

	Global_2451426.f_1.f_2798 = 0;
	Global_2451426.f_1.f_2799 = 0;
	Global_2451426.f_1.f_2824 = 0;
	Global_2451426.f_1.f_2805 = 0;
	Global_2451426.f_1.f_2806 = 0;
	Global_2451426.f_1.f_2809 = 0;
	Global_2451426.f_1.f_2810 = 0;
	Global_2451426.f_1.f_2808 = -1;
	Global_2451426.f_1.f_2811 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_2451426.f_1.f_2813[iVar0] = 0;
		iVar0++;
	}
	Global_2451426.f_1.f_2825 = -1;
	if (bParam0)
	{
		Global_2451426.f_1.f_2822 = -1;
		Global_2451426.f_1.f_2823 = -1;
	}
	Global_2451426.f_1.f_2844 = 0;
	func_464();
	Var1.f_33 = 2;
	Var1.f_36 = 7;
	iVar58 = 0;
	while (iVar58 <= 31)
	{
		Global_2451426.f_1.f_845[iVar58 /*57*/] = { Var1 };
		iVar58++;
	}
	Global_2447238.f_33 = -1;
	Global_2447238.f_34 = -1;
}

void func_464()
{
	Global_2447238.f_32 = 0;
}

void func_465()
{
	Global_2450632.f_591 = 0;
}

void func_466()
{
	Global_2450632.f_592 = 0;
	func_467();
}

void func_467()
{
	int iVar0;

	iVar0 = UNK_0xD803B885F5E47A62();
	if (iVar0 >= 0)
	{
		UNK_0x0674E58A79778E99(&(Global_1590535[iVar0 /*876*/].f_99.f_32), 6);
	}
}

void func_468()
{
	Global_2450632 = 0;
	Global_2450632.f_2 = 0;
	Global_2450632.f_3 = 0;
}

bool func_469()
{
	return Global_2450632.f_591;
}

bool func_470()
{
	return Global_1662436;
}

bool func_471()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632, true);
}

bool func_472()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632, 16);
}

void func_473()
{
	UNK_0x0674E58A79778E99(&Global_2450632, 21);
}

void func_474()
{
	Global_2451426.f_2846.f_34 = 1;
}

void func_475()
{
	Global_2451426.f_1.f_2827 = 1;
}

void func_476()
{
	Global_2450632.f_726 = 1;
}

void func_477()
{
	Global_2451426.f_1.f_2826 = 1;
}

void func_478()
{
	UNK_0x5D96D8530B3D0904(&Global_2450632, 21);
}

void func_479(int iParam0)
{
	Global_2451426.f_1.f_837 = iParam0;
	Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_212 = iParam0;
}

void func_480()
{
	struct<38> Var0;

	Var0 = 31;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_2447276 = { Var0 };
}

void func_481()
{
	Global_2451426.f_2846.f_1 = 1;
}

void func_482()
{
	Global_2451426.f_2846.f_1 = 0;
}

bool func_483()
{
	return Global_2450632.f_616;
}

bool func_484()
{
	return Global_2450632.f_606;
}

bool func_485()
{
	return Global_2450632.f_593;
}

bool func_486()
{
	return Global_2450632.f_602;
}

bool func_487()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 15);
}

bool func_488()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632, 20);
}

bool func_489()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632, 2);
}

void func_490()
{
	Global_2451426.f_2846.f_34 = 0;
}

bool func_491()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_959568.f_8, 8);
}

void func_492()
{
	Global_2450632.f_621 = 0;
}

bool func_493()
{
	return Global_2450632.f_621;
}

void func_494()
{
	Global_2450632.f_652 = 0;
}

bool func_495()
{
	return Global_2450632.f_652;
}

void func_496()
{
	Global_2451426.f_1.f_838 = 0;
	Global_2451426.f_1.f_839 = 0;
	Global_2451426.f_1.f_841 = 0;
}

void func_497()
{
	UNK_0x0674E58A79778E99(&Global_2450632, 4);
}

void func_498()
{
	UNK_0x0674E58A79778E99(&Global_2450632, 28);
}

void func_499()
{
	int iVar0;

	iVar0 = UNK_0xD803B885F5E47A62();
	UNK_0x0674E58A79778E99(&(Global_1590535[iVar0 /*876*/].f_13.f_1), 4);
	UNK_0x0674E58A79778E99(&(Global_1590535[iVar0 /*876*/].f_13.f_1), 5);
	UNK_0x0674E58A79778E99(&(Global_1590535[iVar0 /*876*/].f_13.f_1), 7);
	UNK_0x0674E58A79778E99(&(Global_1590535[iVar0 /*876*/].f_13.f_1), 8);
	UNK_0x0674E58A79778E99(&(Global_1590535[iVar0 /*876*/].f_13.f_1), 9);
	UNK_0x0674E58A79778E99(&(Global_1590535[iVar0 /*876*/].f_13.f_1), 10);
	UNK_0x0674E58A79778E99(&(Global_1590535[iVar0 /*876*/].f_13.f_1), 11);
	UNK_0x0674E58A79778E99(&(Global_1590535[iVar0 /*876*/].f_13.f_1), 12);
	UNK_0x0674E58A79778E99(&(Global_1590535[iVar0 /*876*/].f_13.f_1), 13);
}

void func_500(bool bParam0)
{
	UNK_0x9D57AD477C5339C8(bParam0);
}

void func_501(bool bParam0)
{
	var uVar0;

	if ((!func_503() && func_502(120, -1)) && !func_396())
	{
		UNK_0x19E9DB708CD4C715(bParam0, &uVar0, 13);
		if (UNK_0x83F946529771616E(&uVar0, 13))
		{
			if (UNK_0x04A104F429E6CBB0(&uVar0))
			{
			}
		}
	}
}

bool func_502(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_28(bParam1)];
	if (UNK_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return false;
}

bool func_503()
{
	int iVar0;

	iVar0 = UNK_0xD803B885F5E47A62();
	if ((Global_1590535[iVar0 /*876*/].f_39.f_2 == 63 || Global_1590535[iVar0 /*876*/].f_39.f_2 == 62) || Global_1590535[iVar0 /*876*/].f_39.f_2 == 61)
	{
		return true;
	}
	return false;
}

void func_504()
{
	UNK_0x5D96D8530B3D0904(&(Global_959568.f_8), 8);
	func_505();
}

void func_505()
{
	Global_2450632.f_780 = 1;
}

bool func_506()
{
	return Global_2451426.f_2846.f_2;
}

var func_507(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_99.f_2;
}

void func_508()
{
	if (func_509())
	{
		UNK_0xA37A90C62806D848(1);
	}
}

bool func_509()
{
	return func_196("FM_RETRY_INV");
}

void func_510(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_514(iParam0);
	bVar0 = (bVar0 + iParam1);
	if (!func_513(iParam0))
	{
		func_512(iParam0, bVar0);
	}
	else
	{
		func_511(iParam0, bVar0);
	}
}

void func_511(int iParam0, bool bParam1)
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

void func_512(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, 1);
	}
}

bool func_513(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case joaat("MPPLY_CREW_0_ID"):
			case joaat("MPPLY_CREW_1_ID"):
			case joaat("MPPLY_CREW_2_ID"):
			case joaat("MPPLY_CREW_3_ID"):
			case joaat("MPPLY_CREW_4_ID"):
			case joaat("MPPLY_CREW_LOCAL_XP_0"):
			case joaat("MPPLY_CREW_LOCAL_XP_1"):
			case joaat("MPPLY_CREW_LOCAL_XP_2"):
			case joaat("MPPLY_CREW_LOCAL_XP_3"):
			case joaat("MPPLY_CREW_LOCAL_XP_4"):
			case joaat("MPPLY_BECAME_CHEATER_NUM"):
			case joaat("MPPLY_FRIENDLY"):
			case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			case joaat("MPPLY_GRIEFING"):
			case joaat("MPPLY_HELPFUL"):
			case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			case joaat("MPPLY_OFFENSIVE_UGC"):
				return true;
		}
	}
	return false;
}

int func_514(int iParam0)
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

void func_515(int iParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = func_27(iParam0, func_28(bParam1), 0);
	bVar0++;
	if (!func_517(iParam0))
	{
		func_64(iParam0, bVar0, bParam1, 1, 0);
	}
	else
	{
		func_516(iParam0, bVar0, bParam1, 1);
	}
}

void func_516(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = Global_2548434[iParam0 /*3*/][func_28(bParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_28(bParam2)] = bParam1;
			break;
		case 788:
			Global_1387994[func_28(bParam2)] = bParam1;
			break;
		case 789:
			Global_1388000[func_28(bParam2)] = bParam1;
			break;
		case 790:
			Global_1388006[func_28(bParam2)] = bParam1;
			break;
		case 8726:
			Global_1388012[func_28(bParam2)] = bParam1;
			break;
		case 777:
			Global_1387958[func_28(bParam2)] = bParam1;
			break;
		case 778:
			Global_1387964[func_28(bParam2)] = bParam1;
			break;
		case 779:
			Global_1387970[func_28(bParam2)] = bParam1;
			break;
		case 780:
			Global_1387976[func_28(bParam2)] = bParam1;
			break;
		case 8728:
			Global_1387982[func_28(bParam2)] = bParam1;
			break;
		case 767:
			Global_1387928[func_28(bParam2)] = bParam1;
			break;
		case 768:
			Global_1387934[func_28(bParam2)] = bParam1;
			break;
		case 769:
			Global_1387940[func_28(bParam2)] = bParam1;
			break;
		case 770:
			Global_1387946[func_28(bParam2)] = bParam1;
			break;
		case 8730:
			Global_1387952[func_28(bParam2)] = bParam1;
			break;
		case 757:
			Global_1388018[func_28(bParam2)] = bParam1;
			break;
		case 758:
			Global_1388024[func_28(bParam2)] = bParam1;
			break;
		case 759:
			Global_1388030[func_28(bParam2)] = bParam1;
			break;
		case 760:
			Global_1388036[func_28(bParam2)] = bParam1;
			break;
		case 8732:
			Global_1388042[func_28(bParam2)] = bParam1;
			break;
		case 1303:
			Global_1388048[func_28(bParam2)] = bParam1;
			break;
		case 7233:
			Global_1388054[func_28(bParam2)] = bParam1;
			break;
		case 639:
			Global_1388060[func_28(bParam2)] = bParam1;
			break;
		case 1278:
			Global_1388066[func_28(bParam2)] = bParam1;
			break;
		case 1876:
			Global_2586065[0 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 2267:
			Global_2586065[1 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 2929:
			Global_2586065[2 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3058:
			Global_2586065[3 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 10016:
			Global_2586214[func_28(bParam2)] = bParam1;
			break;
		case 764:
			Global_1388072[func_28(bParam2)] = bParam1;
			break;
		case 765:
			Global_1388078[func_28(bParam2)] = bParam1;
			break;
		case 766:
			Global_1388084[func_28(bParam2)] = bParam1;
			break;
		case 8731:
			Global_1388090[func_28(bParam2)] = bParam1;
			break;
		case 1236:
			Global_1388096[func_28(bParam2)] = bParam1;
			break;
		case 3053:
			Global_2586138[0 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3054:
			Global_2586138[1 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3055:
			Global_2586138[2 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3056:
			Global_2586138[3 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3057:
			Global_2586138[4 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3636:
			Global_2586217[0 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3637:
			Global_2586217[1 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3638:
			Global_2586217[2 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3639:
			Global_2586217[3 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3640:
			Global_2586217[4 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3641:
			Global_2586233[0 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3642:
			Global_2586233[1 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3643:
			Global_2586233[2 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3644:
			Global_2586233[3 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3645:
			Global_2586233[4 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3221:
			Global_2586138[5 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3227:
			Global_2586065[4 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3663:
			Global_2586249[func_28(bParam2)] = bParam1;
			break;
		case 3664:
			Global_2586258[func_28(bParam2)] = bParam1;
			break;
		case 3665:
			Global_2586252[func_28(bParam2)] = bParam1;
			break;
		case 3666:
			Global_2586261[func_28(bParam2)] = bParam1;
			break;
		case 3667:
			Global_2586255[func_28(bParam2)] = bParam1;
			break;
		case 3668:
			Global_2586264[func_28(bParam2)] = bParam1;
			break;
		case 3689:
			Global_2586267[func_28(bParam2)] = bParam1;
			break;
		case 3229:
			Global_2586138[6 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3230:
			Global_2586065[5 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3234:
			Global_2586138[7 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 3232:
			Global_2586065[6 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 4019:
			Global_2586138[8 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 4020:
			Global_2586065[7 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 4022:
			Global_2586138[9 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 4023:
			Global_2586065[8 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 4025:
			Global_2586138[10 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 4026:
			Global_2586065[9 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 4028:
			Global_2586138[11 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 4029:
			Global_2586065[10 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 6109:
			Global_2586138[12 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 6110:
			Global_2586065[11 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 6167:
			Global_2586138[13 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 6168:
			Global_2586065[12 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 6545:
			Global_2586138[14 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 6546:
			Global_2586065[13 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 6558:
			Global_2586138[15 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 6559:
			Global_2586065[14 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 6561:
			Global_2586138[16 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 6562:
			Global_2586065[15 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 6564:
			Global_2586138[17 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 6565:
			Global_2586065[16 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 7283:
			Global_2586065[17 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 7285:
			Global_2586065[18 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 7287:
			Global_2586065[19 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 8010:
			Global_2586065[20 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 8282:
			Global_2586270[func_28(bParam2)] = bParam1;
			break;
		case 8283:
			Global_2586273[func_28(bParam2)] = bParam1;
			break;
		case 8284:
			Global_2586276[func_28(bParam2)] = bParam1;
			break;
		case 8285:
			Global_2586279[func_28(bParam2)] = bParam1;
			break;
		case 8286:
			Global_2586282[func_28(bParam2)] = bParam1;
			break;
		case 8287:
			Global_2586285[func_28(bParam2)] = bParam1;
			break;
		case 8288:
			Global_2586288[func_28(bParam2)] = bParam1;
			break;
		case 8289:
			Global_2586291[func_28(bParam2)] = bParam1;
			break;
		case 8290:
			Global_2586294[func_28(bParam2)] = bParam1;
			break;
		case 8291:
			Global_2586297[func_28(bParam2)] = bParam1;
			break;
		case 8292:
			Global_2586300[func_28(bParam2)] = bParam1;
			break;
		case 8293:
			Global_2586303[func_28(bParam2)] = bParam1;
			break;
		case 8294:
			Global_2586306[func_28(bParam2)] = bParam1;
			break;
		case 8900:
			Global_2586309[func_28(bParam2)] = bParam1;
			break;
		case 8534:
			Global_2586065[21 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 8977:
			Global_2586138[23 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 8975:
			Global_2586065[22 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 8980:
			Global_2586138[24 /*3*/][func_28(bParam2)] = bParam1;
			break;
		case 8978:
			Global_2586065[23 /*3*/][func_28(bParam2)] = bParam1;
			break;
		default:
			break;
	}
}

bool func_517(int iParam0)
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

int func_518(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	iVar1 = 0;
	if (Global_2461737 == 0)
	{
		return 0;
	}
	if (func_534())
	{
		if (UNK_0xA14BB9332558B949() || (func_533() || func_529()))
		{
			Global_2460684 = 1;
		}
	}
	Global_2461737 = 0;
	if (Global_1315704)
	{
		iVar0 = 1;
	}
	if (Global_2460684)
	{
		iVar0 = 1;
	}
	if (Global_2460683)
	{
		iVar0 = 1;
	}
	if (func_528(Global_110666.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2460606)
	{
		iVar0 = 1;
	}
	if (func_527(512))
	{
		iVar0 = 1;
	}
	if (func_526(128))
	{
		iVar0 = 1;
	}
	if (Global_1315728 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_396())
	{
		iVar0 = 0;
	}
	if (Global_2461176)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_524())
		{
			if (Global_4456448.f_197270 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_255(UNK_0xD803B885F5E47A62(), 0))
	{
		iVar0 = 0;
	}
	if (func_523())
	{
		iVar0 = 0;
	}
	if ((Global_2460684 || Global_2460683) || Global_1315704)
	{
		if (func_529())
		{
			iVar0 = 0;
		}
	}
	Global_2461176 = 0;
	Global_2460683 = 0;
	Global_2460684 = 0;
	Global_1315704 = 0;
	Global_2460606 = 0;
	func_521(&(Global_110666.f_1), 32);
	func_520(512);
	func_519(128);
	return iVar0;
}

void func_519(int iParam0)
{
	Global_110723 = (Global_110723 - (Global_110723 && iParam0));
}

void func_520(int iParam0)
{
	Global_110724 = (Global_110724 - (Global_110724 && iParam0));
}

void func_521(var uParam0, int iParam1)
{
	func_522(uParam0, iParam1);
}

void func_522(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_523()
{
	if (((Global_1574428 || Global_1574398) || func_255(UNK_0xD803B885F5E47A62(), 0)) || func_254())
	{
		return true;
	}
	return false;
}

bool func_524()
{
	switch (func_525())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return true;
		default:
			break;
	}
	return false;
}

int func_525()
{
	return Global_2451426.f_1.f_2822;
}

bool func_526(int iParam0)
{
	return (Global_110723 && iParam0) != 0;
}

bool func_527(int iParam0)
{
	return (Global_110724 && iParam0) != 0;
}

bool func_528(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_529()
{
	if (func_532(Global_2462854))
	{
		return false;
	}
	if (func_530(UNK_0xD803B885F5E47A62(), 146))
	{
		return true;
	}
	return false;
}

bool func_530(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/] == iParam1)
	{
		return func_531(iParam0);
	}
	return false;
}

bool func_531(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iVar0 /*615*/].f_1, false);
	}
	return false;
}

bool func_532(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11389)
			{
				return true;
			}
			break;
		case 132:
			if (Global_262145.f_11391)
			{
				return true;
			}
			break;
		case 133:
			if (Global_262145.f_11388)
			{
				return true;
			}
			break;
		case 136:
			if (Global_262145.f_11392)
			{
				return true;
			}
			break;
		case 138:
			if (Global_262145.f_11393)
			{
				return true;
			}
			break;
		case 139:
			if (Global_262145.f_11394)
			{
				return true;
			}
			break;
		case 129:
			if (Global_262145.f_11390)
			{
				return true;
			}
			break;
		case 140:
			if (Global_262145.f_11395)
			{
				return true;
			}
			break;
		case 141:
			if (Global_262145.f_11396)
			{
				return true;
			}
			break;
		case 144:
			if (Global_262145.f_11397)
			{
				return true;
			}
			break;
		case 146:
			if (Global_262145.f_11398)
			{
				return true;
			}
			break;
		case 236:
		case 150:
			break;
	}
	return false;
}

bool func_533()
{
	if (func_532(Global_2462854))
	{
		return false;
	}
	if (func_531(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	return false;
}

bool func_534()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1312425, false);
}

bool func_535(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return true;
		default:
			break;
	}
	return false;
}

void func_536()
{
	if (UNK_0x30F813723591D02E(UNK_0x65DC8BF3D20FC442(UNK_0xD803B885F5E47A62()), "MissionType"))
	{
		UNK_0x059C92C065EF869A(UNK_0x65DC8BF3D20FC442(UNK_0xD803B885F5E47A62()), "MissionType");
	}
	if (UNK_0x30F813723591D02E(UNK_0x65DC8BF3D20FC442(UNK_0xD803B885F5E47A62()), "MatchId"))
	{
		UNK_0x059C92C065EF869A(UNK_0x65DC8BF3D20FC442(UNK_0xD803B885F5E47A62()), "MatchId");
	}
	if (UNK_0x30F813723591D02E(UNK_0x65DC8BF3D20FC442(UNK_0xD803B885F5E47A62()), "TeamId"))
	{
		UNK_0x059C92C065EF869A(UNK_0x65DC8BF3D20FC442(UNK_0xD803B885F5E47A62()), "TeamId");
	}
}

void func_537()
{
	Global_2450632.f_597 = 0;
	UNK_0x5E4A4C5AD7405138();
}

void func_538(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_35)
		{
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_35 = 1;
		}
	}
	else if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_35)
	{
		Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_35 = 0;
	}
}

bool func_539(int iParam0)
{
	if (iParam0 == 4 || iParam0 == 6)
	{
		return true;
	}
	return false;
}

void func_540()
{
	Global_2450632.f_740 = 0;
}

bool func_541()
{
	return Global_2450632.f_740;
}

void func_542()
{
	Global_2450632.f_744 = 0;
}

bool func_543()
{
	return Global_2450632.f_744;
}

void func_544()
{
	UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_99.f_32), true);
}

int func_545(int iParam0)
{
	int iVar0;

	if (func_254())
	{
		return 1;
	}
	if (func_550())
	{
		return 1;
	}
	if (UNK_0xEA6BC48857E0AC4C(&(Global_4456448.f_195277)))
	{
		return 1;
	}
	if (func_549())
	{
		return 1;
	}
	func_548();
	UNK_0xC43ACE7DB937E274();
	iVar0 = UNK_0xB45EDD00181AF3F2();
	if (iParam0 == 0)
	{
		Global_1653498++;
		UNK_0x23AFD3CA3C9BE63F(iVar0, "quit", Global_1653498);
		UNK_0x23AFD3CA3C9BE63F(iVar0, "quitd", true);
		UNK_0x23AFD3CA3C9BE63F(iVar0, "ply", Global_1653498.f_2);
		UNK_0x23AFD3CA3C9BE63F(iVar0, "lp", UNK_0xDD0E7998AE8AD485());
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		Global_1653523.f_1++;
		UNK_0x23AFD3CA3C9BE63F(iVar0, "quit", Global_1653523.f_1);
		UNK_0x23AFD3CA3C9BE63F(iVar0, "quitd", true);
		UNK_0x23AFD3CA3C9BE63F(iVar0, "ply", Global_1653523.f_4);
		UNK_0x23AFD3CA3C9BE63F(iVar0, "lp", UNK_0xDD0E7998AE8AD485());
	}
	if (iParam0 == 0)
	{
		if (UNK_0xBEED2BDA8CE1AFF3(&(Global_4456448.f_195277), 0f, func_547(iParam0)))
		{
		}
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		if (UNK_0xBEED2BDA8CE1AFF3(&(Global_959568.f_42), 0f, func_547(iParam0)))
		{
		}
	}
	func_546();
	func_548();
	UNK_0xAC460E5FBD1B246B();
	return 1;
}

void func_546()
{
	Global_1653498 = 0;
	Global_1653498.f_2 = 0;
	Global_1653498.f_8 = 0;
	Global_1653498.f_3 = 0;
	Global_1653498.f_6 = 0;
}

char* func_547(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
		case 1:
			return "playlist";
		case 2:
			return "lifeinvaderpost";
		case 3:
			return "photo";
		case 4:
			return "challenge";
		default:
			break;
	}
	return "gta5mission";
}

void func_548()
{
	if (UNK_0xB45EDD00181AF3F2() != 0)
	{
		UNK_0xEADC638FF742BE01();
	}
}

bool func_549()
{
	if (UNK_0xEB22E23C5DDDD376())
	{
		return true;
	}
	else if (UNK_0xAE6F4A4A47122354())
	{
		return true;
	}
	else if (UNK_0xC49C081F809590D9())
	{
		return true;
	}
	return false;
}

bool func_550()
{
	if (!func_551())
	{
		return true;
	}
	return false;
}

bool func_551()
{
	if (func_552())
	{
		return false;
	}
	if (UNK_0xE6725CC0C55B6CA1() == 0)
	{
		return false;
	}
	return true;
}

bool func_552()
{
	return Global_2461181;
}

bool func_553()
{
	return Global_2450632.f_634;
}

void func_554(bool bParam0)
{
	if (bParam0)
	{
		Global_1312451 = 1;
	}
	else
	{
		Global_1312451 = 0;
	}
}

void func_555()
{
	Global_2451426.f_1.f_2828.f_13 = 0;
	Global_2451426.f_1.f_2828 = 0;
	Global_2451426.f_1.f_2828.f_1 = 0;
	Global_2451426.f_1.f_2828.f_2 = 0;
	Global_2451426.f_1.f_2828.f_3 = 0;
	Global_2451426.f_1.f_2828.f_4 = 0;
	Global_2451426.f_1.f_2828.f_5 = 0;
	Global_2451426.f_1.f_2828.f_6 = 0;
	Global_2451426.f_1.f_2828.f_7 = 0;
	Global_2451426.f_1.f_2828.f_8 = 0;
	Global_2451426.f_1.f_2828.f_9 = 0;
	Global_2451426.f_1.f_2828.f_10 = 0;
	Global_2451426.f_1.f_2828.f_11 = 0;
	Global_2451426.f_1.f_2828.f_12 = 0;
}

bool func_556(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 1;
}

void func_557()
{
	Global_2450632.f_616 = 1;
}

void func_558(int iParam0, vector3 vParam1, struct<6> Param4)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	func_577();
	func_576();
	func_575();
	func_574();
	func_573();
	func_698();
	Global_1653538.f_9 = iParam0;
	switch (Global_1653538.f_9)
	{
		case 1:
			Global_1653538 = 0;
			Global_1653538.f_22 = { 0f, 0f, 0f };
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_12 = 0;
			func_570();
			break;
		case 2:
			Global_1653538 = 1;
			Global_1653538.f_22 = { vParam1 };
			Global_1653538.f_16 = { Param4 };
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_12 = 0;
			break;
		case 3:
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 0 || Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 1)
			{
				func_569(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_99.f_28);
			}
			func_568();
			Global_1653538 = 1;
			Global_1653538.f_22 = { vParam1 };
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_12 = 0;
			break;
		case 4:
			func_567();
			func_568();
			Global_1653538 = 1;
			if (func_693(UNK_0xD803B885F5E47A62()) || func_694(UNK_0xD803B885F5E47A62()))
			{
				func_566(1);
			}
			if ((func_565() || func_599()) && func_585())
			{
				Global_1653538.f_16 = { func_584() };
				Param4 = { Global_1653538.f_16 };
				Global_1653538.f_22 = { func_564() };
			}
			else if (func_565() || func_599())
			{
				if (func_563())
				{
					Global_1653538.f_22 = { func_562() };
				}
				else
				{
					Global_1653538.f_22 = { vParam1 };
				}
			}
			else
			{
				Global_1653538.f_22 = { vParam1 };
			}
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_12 = 1;
			break;
		case 5:
			func_567();
			func_561();
			func_568();
			if (func_693(UNK_0xD803B885F5E47A62()) || func_694(UNK_0xD803B885F5E47A62()))
			{
				func_566(1);
			}
			Global_1653538 = 1;
			Global_1653538.f_22 = { vParam1 };
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_12 = 1;
			break;
		case 8:
			Global_1653538 = 0;
			Global_1653538.f_22 = { vParam1 };
			Global_1653538.f_16 = { Param4 };
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_12 = 0;
			break;
		case 9:
			func_568();
			Global_1653538 = 1;
			Global_1653538.f_22 = { vParam1 };
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_12 = 1;
			break;
		case 10:
			Global_1653538 = 0;
			Global_1653538.f_22 = { 0f, 0f, 0f };
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_12 = 0;
			break;
	}
	func_560();
	func_559();
	func_479(Global_1653538.f_9);
	Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_213 = { Global_1653538.f_22 };
	Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_216 = { Param4 };
}

void func_559()
{
	UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18), 23);
}

void func_560()
{
	UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18), 12);
}

void func_561()
{
	Global_1653538.f_4 = 1;
}

Vector3 func_562()
{
	return Global_2450632.f_39.f_500;
}

bool func_563()
{
	if ((Global_2450632.f_39.f_500 != 0f || Global_2450632.f_39.f_500.f_1 != 0f) || Global_2450632.f_39.f_500.f_2 != 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_564()
{
	return Global_2450632.f_39.f_503;
}

bool func_565()
{
	return Global_2450632.f_39.f_57;
}

void func_566(int iParam0)
{
	Global_2451426.f_6191 = iParam0;
}

void func_567()
{
	Global_1653538.f_3 = 1;
}

void func_568()
{
	Global_1653538.f_7 = 1;
}

void func_569(var uParam0)
{
	Global_1653538.f_10 = uParam0;
}

int func_570()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<13> Var3;

	if (!UNK_0x83F946529771616E(&(Global_2451426.f_6470), 13))
	{
		return 0;
	}
	bVar2 = UNK_0xD803B885F5E47A62();
	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar0 = UNK_0x117658E336116132(bVar1);
		if (UNK_0x40B8C182D63932FC(bVar0) && bVar0 != bVar2)
		{
			Var3 = { func_78(bVar0) };
			if (UNK_0x4F18738E5BDE9AC9(&Var3, &(Global_2451426.f_6470)) && func_572(bVar0))
			{
				func_571();
				return 1;
			}
		}
		bVar1++;
	}
	return 0;
}

void func_571()
{
	UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18), 9);
}

bool func_572(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_39.f_18, 9);
}

void func_573()
{
	Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_5 = 0;
}

void func_574()
{
	Global_1653538.f_10 = -1;
}

void func_575()
{
	Global_1653538.f_4 = 0;
}

void func_576()
{
	Global_1653538.f_3 = 0;
}

void func_577()
{
	Global_2451426.f_2846.f_2 = 1;
}

void func_578()
{
	Global_2450632.f_569.f_14 = 0;
}

bool func_579()
{
	return Global_2450632.f_569.f_14;
}

void func_580()
{
	Global_2450632.f_39.f_55 = 0;
}

void func_581()
{
	Global_2450632.f_39.f_43 = -1;
}

int func_582()
{
	return Global_2450632.f_39.f_43;
}

void func_583(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (UNK_0xEA6BC48857E0AC4C(&uParam0))
	{
		return;
	}
	if (!Global_2398871)
	{
		return;
	}
	if (!UNK_0x7F8A39872A07D2CE(&uParam0, &(Global_2398871.f_1)))
	{
		return;
	}
	Global_2398937 = 1;
}

struct<6> func_584()
{
	return Global_2450632.f_39.f_12;
}

bool func_585()
{
	return Global_2450632.f_39.f_59;
}

void func_586(int iParam0, bool bParam1)
{
	if (func_687())
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (UNK_0xBC6B615FE7247B7F())
				{
					UNK_0x4A1523078340FA38();
				}
			}
			break;
		case 1:
			UNK_0xF60E6F759DB05AEB(6, 0, 0);
			break;
		case 2:
			UNK_0xF60E6F759DB05AEB(12, 0, 0);
			break;
		case 3:
			if (func_587(Global_4456448.f_232883))
			{
				UNK_0xF60E6F759DB05AEB(20, 50, 0);
			}
			else
			{
				UNK_0xF60E6F759DB05AEB(21, 0, 0);
			}
			break;
		case 4:
			UNK_0xF60E6F759DB05AEB(0, 0, 0);
			break;
		default:
			break;
	}
}

bool func_587(int iParam0)
{
	return iParam0 == 10;
}

int func_588()
{
	return Global_1653538.f_12;
}

void func_589(var uParam0, var uParam1)
{
	Global_1653538.f_13 = uParam0;
	Global_1653538.f_14 = uParam1;
}

void func_590(var uParam0)
{
	Global_1653538.f_12 = uParam0;
}

bool func_591(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_5025[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_592()
{
	if (UNK_0xA14BB9332558B949())
	{
		return func_595();
	}
	return func_593(Global_4456448.f_194990);
}

int func_593(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_5798[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_594()
{
	return Global_2450632.f_17;
}

bool func_595()
{
	return Global_2450632.f_19;
}

bool func_596()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1312769, 4);
}

bool func_597()
{
	return Global_2450632.f_15;
}

void func_598()
{
	Global_2450632.f_39.f_56 = 1;
}

bool func_599()
{
	return Global_2450632.f_39.f_55;
}

void func_600()
{
	if (UNK_0xEA6BC48857E0AC4C(&(Global_2391056.f_4.f_3)))
	{
		return;
	}
	if (!UNK_0xEA6BC48857E0AC4C(&(Global_2398169.f_3)))
	{
		if (UNK_0x7F8A39872A07D2CE(&(Global_2398169.f_3), &(Global_2391056.f_4.f_3)))
		{
			Global_1311838 = 0;
		}
		else
		{
			Global_1311838 = 1;
		}
	}
	Global_1311839 = 0;
	Global_1311839.f_1 = { Global_2391056.f_4.f_3 };
}

void func_601()
{
	Global_1653538.f_5 = 0;
	Global_1653538.f_11 = -1;
}

void func_602(var uParam0)
{
	Global_1653538.f_5 = 1;
	Global_1653538.f_11 = uParam0;
}

bool func_603(int iParam0)
{
	int iVar0;

	if (Global_4456448.f_232883 == 46)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9175[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_604(int iParam0)
{
	int iVar0;

	if (Global_4456448.f_232883 == 21)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9011[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_605()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_18, false))
	{
		return true;
	}
	return ((((((func_612(Global_4456448.f_194990, 1) || func_611(Global_4456448.f_194990)) || func_610(Global_4456448.f_194990)) || func_609(Global_4456448.f_194990)) || func_608(Global_4456448.f_232883)) || func_607(Global_4456448.f_232883)) || func_606(Global_4456448.f_232883));
}

bool func_606(int iParam0)
{
	return iParam0 == 65;
}

bool func_607(int iParam0)
{
	return iParam0 == 48;
}

bool func_608(int iParam0)
{
	return iParam0 == 8;
}

int func_609(int iParam0)
{
	int iVar0;

	if (Global_4456448.f_232883 == 35)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9254[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_610(int iParam0)
{
	int iVar0;

	if (Global_4456448.f_232883 == 27)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9197[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_611(int iParam0)
{
	int iVar0;

	if (Global_4456448.f_232883 == 32)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9078[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_612(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (Global_4456448.f_232883 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

struct<13> func_613()
{
	struct<13> Var0;

	UNK_0xB6D2E6F743DD2459(&Var0, 13);
	return Var0;
}

void func_614(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;

	if (UNK_0xEA6BC48857E0AC4C(&uParam0))
	{
		return;
	}
	if (!Global_2391045)
	{
		return;
	}
	iVar0 = UNK_0x12AB0310C2281427(&uParam0);
	Global_2391047 = iVar0;
	Global_2391048 = (UNK_0x1C0640BA9A7327B3() + 60000);
}

void func_615(struct<6> Param0)
{
	if (UNK_0xEA6BC48857E0AC4C(&Param0))
	{
		return;
	}
	Global_1311839 = 1;
	Global_1311839.f_1 = { Param0 };
}

bool func_616()
{
	return Global_2450632.f_12;
}

void func_617(int iParam0)
{
	if (UNK_0x8CD06866876216F2())
	{
		UNK_0x98805B30C708287F(iParam0);
		UNK_0xE6427CB43B439AFB(0);
	}
}

void func_618(int iParam0)
{
	if (Global_2513615 != iParam0)
	{
		Global_2513615 = iParam0;
	}
}

void func_619()
{
	Global_968397 = -1;
}

void func_620()
{
	func_621(-1f);
}

void func_621(int iParam0)
{
	if (UNK_0x8CD06866876216F2())
	{
		UNK_0x5303496FD72AF7E7(0);
		UNK_0xA4221E1CBA7E9F70(0);
		UNK_0x98805B30C708287F(iParam0);
		UNK_0xE6427CB43B439AFB(0);
	}
}

int func_622(int iParam0)
{
	int iVar0;

	if (Global_1671743[iParam0 /*8*/] == -1)
	{
		iVar0 = func_27(func_624(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_623(iParam0, 0);
			iVar0 = 0;
		}
		Global_1671743[iParam0 /*8*/] = iVar0;
	}
	return Global_1671743[iParam0 /*8*/];
}

void func_623(int iParam0, bool bParam1)
{
	Global_1671743[iParam0 /*8*/] = bParam1;
	func_64(func_624(iParam0), bParam1, -1, 1, 0);
}

int func_624(int iParam0)
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

bool func_625()
{
	return Global_4456448.f_1 == 0;
}

void func_626(int iParam0, int iParam1)
{
	UNK_0x45019D71A0DF8B62(iParam0);
	UNK_0xED41266DE64A57FD(iParam0);
	if (UNK_0x0AFBF1EF27445DFE())
	{
		UNK_0x8DD29DFF932529F0(iParam1);
	}
}

bool func_627()
{
	return Global_2450632.f_643;
}

void func_628()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2359302, 24))
	{
		UNK_0x0674E58A79778E99(&Global_2359302, 24);
	}
}

void func_629()
{
	UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18), 14);
}

bool func_630()
{
	return Global_2513615;
}

bool func_631()
{
	return Global_2450632.f_731;
}

int func_632()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_196;
}

void func_633(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574191 == 0)
		{
			Global_1574191 = 1;
		}
	}
	else if (Global_1574191 == 1)
	{
		Global_1574191 = 0;
	}
}

void func_634()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_2451426.f_1.f_845[iVar0 /*57*/].f_44 = 0;
		Global_2451426.f_1.f_845[iVar0 /*57*/].f_33[0] = 0;
		iVar0++;
	}
}

int func_635()
{
	int iVar0;

	if (func_254())
	{
		return 1;
	}
	if (func_550())
	{
		return 1;
	}
	if (func_549())
	{
		return 1;
	}
	if (UNK_0xEA6BC48857E0AC4C(&(Global_4456448.f_195277)))
	{
		return 1;
	}
	func_548();
	UNK_0xC43ACE7DB937E274();
	iVar0 = UNK_0xB45EDD00181AF3F2();
	Global_1653498.f_2++;
	if (Global_1653498.f_2 < 1)
	{
		Global_1653498.f_2 = 1;
	}
	UNK_0x23AFD3CA3C9BE63F(iVar0, "quit", Global_1653498);
	UNK_0x23AFD3CA3C9BE63F(iVar0, "ply", Global_1653498.f_2);
	UNK_0x23AFD3CA3C9BE63F(iVar0, "plyd", true);
	UNK_0x23AFD3CA3C9BE63F(iVar0, "lp", UNK_0xDD0E7998AE8AD485());
	if (UNK_0xBEED2BDA8CE1AFF3(&(Global_4456448.f_195277), -1f, func_547(0)))
	{
	}
	func_546();
	func_548();
	UNK_0xAC460E5FBD1B246B();
	return 1;
}

void func_636()
{
	Global_2450632.f_743 = 1;
}

void func_637(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x66A58F5B17597484();
	}
	else
	{
		UNK_0xABC513AFBA839460();
	}
}

void func_638()
{
	Global_2450632.f_742 = 1;
}

bool func_639(int iParam0)
{
	switch (func_19())
	{
		case 0:
			if (!func_640(iParam0))
			{
				if (Global_1590535[iParam0 /*876*/] == 2 || Global_1590535[iParam0 /*876*/] == 8)
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_640(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_196 != 0;
}

bool func_641()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142, 2);
}

void func_642()
{
	Global_2450632.f_742 = 0;
}

bool func_643()
{
	return Global_2450632.f_742;
}

void func_644(bool bParam0)
{
	UNK_0x837C600ECEE8ABA2("LOS_SANTOS_VANILLA_UNICORN_01_STAGE", bParam0);
	UNK_0x837C600ECEE8ABA2("LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", bParam0);
	UNK_0x837C600ECEE8ABA2("LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", bParam0);
}

void func_645()
{
	Global_1653538.f_12 = -1;
	Global_1653538.f_13 = -1;
	Global_1653538.f_14 = -1;
}

void func_646(int iParam0)
{
	Global_968398 = iParam0;
}

void func_647()
{
	Global_1626590 = 0;
	Global_1574395 = 4;
}

void func_648(bool bParam0)
{
	if (bParam0)
	{
		Global_1574408 = 1;
	}
	else
	{
		Global_1574408 = 0;
	}
}

void func_649()
{
	Global_1626591 = -1;
	Global_1626597 = 0;
	Global_1626592 = -1;
}

void func_650()
{
	Global_2537071.f_287 = 0;
	func_654(3782, 0, -1, 1);
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (func_652())
		{
			UNK_0x64F9F278AB9DCA2C(UNK_0x16F2683693E537C9(), 5, false, false, 0);
			func_651();
		}
	}
}

void func_651()
{
	Global_76595 = 0;
	Global_76596 = -1;
	Global_76597 = -1;
	Global_76598 = -1;
	Global_76599 = -1;
	Global_76600 = -1;
}

int func_652()
{
	return func_653(UNK_0x16F2683693E537C9());
}

int func_653(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x36C584991B4C183F(bParam0, 5);
	bVar1 = -1;
	switch (UNK_0x134B62B726CEC8E6(bParam0))
	{
		case joaat("MP_M_FREEMODE_01"):
			if ((bVar0 >= 1 && bVar0 <= 19) || (bVar0 >= 21 && bVar0 <= 29))
			{
				return 1;
			}
			bVar1 = UNK_0x4F4B24509D6989D0(bParam0, 5, bVar0, UNK_0xDADA8E1DD0D0D9D9(bParam0, 5));
			if (UNK_0x1A5A491D253EA7BA(bVar1, joaat("PARACHUTE"), false))
			{
				return 1;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			if ((bVar0 >= 1 && bVar0 <= 19) || (bVar0 >= 21 && bVar0 <= 29))
			{
				return 1;
			}
			bVar1 = UNK_0x4F4B24509D6989D0(bParam0, 5, bVar0, UNK_0xDADA8E1DD0D0D9D9(bParam0, 5));
			if (UNK_0x1A5A491D253EA7BA(bVar1, joaat("PARACHUTE"), false))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_654(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_29();
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

void func_655()
{
	Global_2450632.f_743 = 0;
}

bool func_656()
{
	return Global_2450632.f_743;
}

void func_657(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_659(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8417)
	{
		UNK_0xA5E3ADAAA4CD5D6C(15);
		Global_22350.f_8417 = 0;
	}
	UNK_0xD668DA5CA4A1D2C8(0f);
	if (Global_22350.f_5628[iVar0])
	{
		UNK_0x11CCD0ACA866C6C5(9, 0);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		UNK_0xF5A41F3D3B38EFE3("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		UNK_0xF5A41F3D3B38EFE3("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_658(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_658(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (UNK_0x83D8570832F172A7(*iParam0))
		{
			UNK_0xE17FDF9E3068281B(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

bool func_659(int iParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;

	if (iParam2 == -1)
	{
		if (UNK_0x8CD06866876216F2() && UNK_0x2E9F2B9C010D34D9())
		{
			iParam2 = UNK_0xF35A91B88CC1915F();
		}
	}
	StringCopy(&cVar0, UNK_0xBB0808A181D4745C(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = UNK_0x12AB0310C2281427(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*iParam0 = iVar17;
			return true;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*iParam0 = iVar18;
			return true;
		}
	}
	return false;
}

void func_660()
{
}

void func_661(bool bParam0)
{
	struct<42> Var0;
	int iVar42;
	var uVar43;

	Var0 = -1;
	Var0.f_22 = -1082130432;
	Var0.f_23 = 3;
	Var0.f_39 = -1;
	Var0.f_41 = -1;
	if (Global_2450632.f_569.f_9 == 0)
	{
		Global_1653563.f_1345 = 0;
	}
	iVar42 = 0;
	while (iVar42 <= 31)
	{
		uVar43 = Global_1653563[iVar42 /*42*/].f_3;
		Global_1653563[iVar42 /*42*/] = { Var0 };
		if (func_713())
		{
			Global_1653563[iVar42 /*42*/].f_3 = uVar43;
		}
		Global_1653563[iVar42 /*42*/].f_1 = func_140();
		Global_1653563[iVar42 /*42*/] = -1;
		Global_1653563[iVar42 /*42*/].f_2 = -1;
		iVar42++;
	}
	if ((!func_713() && !func_673()) && bParam0)
	{
		Global_1653563.f_1347 = 0;
		Global_1653563.f_1348 = 0;
	}
}

bool func_662()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1653563[iVar0 /*42*/].f_1 != func_140())
		{
			if (Global_1653563[iVar0 /*42*/].f_11 > 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_663()
{
	if (UNK_0xA14BB9332558B949())
	{
		return func_594();
	}
	return func_664(Global_4456448.f_194990);
}

int func_664(int iParam0)
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

void func_665(bool bParam0)
{
	struct<51> Var0;

	if (!bParam0)
	{
		Var0.f_2 = { Global_1674920.f_2 };
		Var0.f_14 = Global_1674920.f_14;
		Var0.f_19 = Global_1674920.f_19;
		Var0.f_23 = Global_1674920.f_23;
		Var0.f_25 = Global_1674920.f_25;
		Var0.f_30 = Global_1674920.f_30;
		Var0.f_26 = Global_1674920.f_26;
		Var0.f_27 = Global_1674920.f_27;
		Var0.f_28 = Global_1674920.f_28;
		Var0.f_29 = Global_1674920.f_29;
		Var0.f_31 = Global_1674920.f_31;
		Var0.f_32 = Global_1674920.f_32;
		Var0.f_33 = Global_1674920.f_33;
		Var0.f_40 = Global_1674920.f_40;
		Var0.f_42 = Global_1674920.f_42;
		Var0.f_50 = Global_1674920.f_50;
		Var0.f_46 = Global_1674920.f_46;
	}
	Global_1674920 = { Var0 };
}

void func_666(bool bParam0)
{
	Global_786481.f_3 = 0;
	Global_786481.f_4 = 0;
	Global_786481.f_6 = 0;
	Global_786481.f_7 = 0;
	Global_786481.f_8 = 0;
	Global_786481.f_9 = 0;
	Global_786481.f_10 = 0;
	Global_786481.f_11 = 0;
	Global_786481.f_12 = 0;
	Global_786481.f_13 = 0;
	Global_786481.f_14 = 0;
	Global_786481.f_15 = 0;
	Global_786481.f_16 = 0;
	Global_786481.f_17 = 0;
	Global_786481.f_18 = 0;
	Global_786481.f_20 = 0;
	if (((!func_669() && !func_599()) && Global_1653538.f_9 != 4) && !func_673())
	{
		Global_786481.f_43 = 0;
		Global_786481.f_44 = 0;
	}
	Global_786481.f_22 = 0;
	Global_786481.f_24 = 0;
	Global_786481.f_25 = 0;
	Global_786481.f_28 = 0;
	Global_786481.f_29 = 0;
	Global_786481.f_30 = 0;
	Global_786481.f_31 = 0;
	Global_786481.f_32 = 0;
	Global_786481.f_33 = 0;
	Global_786481.f_36 = 0;
	Global_786481.f_37 = 0;
	Global_786481.f_38 = 0;
	Global_786481.f_39 = 0;
	Global_786481.f_40 = 0;
	Global_786481.f_41 = 0;
	Global_786481.f_42 = 0;
	Global_786481.f_35 = 0;
	Global_786481.f_63 = 0;
	if (bParam0)
	{
		Global_786481 = 0;
		Global_786481.f_1 = 0;
		if ((!func_669() && !func_599()) && Global_1653538.f_9 != 4)
		{
			Global_786481.f_2 = 0;
			Global_786481.f_21 = 0;
		}
		Global_786481.f_5 = 0;
		Global_786481.f_19 = 0;
		Global_786481.f_23 = 0;
		Global_786481.f_26 = 0;
		Global_786481.f_46 = 0;
		Global_786481.f_47 = 0;
		Global_786481.f_48 = 0;
		Global_786481.f_50 = 0;
		Global_786481.f_51 = 0;
		Global_786481.f_52 = 0;
		Global_786481.f_53 = 0;
		Global_786481.f_54 = 0;
		Global_786481.f_55 = 0;
	}
}

void func_667(bool bParam0)
{
	Global_786435.f_3 = 0;
	Global_786435.f_4 = 0;
	Global_786435.f_6 = 0;
	Global_786435.f_7 = 0;
	Global_786435.f_8 = 0;
	Global_786435.f_9 = 0;
	Global_786435.f_10 = 0;
	Global_786435.f_11 = 0;
	Global_786435.f_12 = 0;
	Global_786435.f_13 = 0;
	Global_786435.f_14 = 0;
	Global_786435.f_15 = 0;
	Global_786435.f_16 = 0;
	Global_786435.f_17 = 0;
	Global_786435.f_18 = 0;
	Global_786435.f_20 = 0;
	Global_786435.f_21 = 0;
	Global_786435.f_22 = 0;
	Global_786435.f_24 = 0;
	Global_786435.f_25 = 0;
	Global_786435.f_28 = 0;
	Global_786435.f_29 = 0;
	Global_786435.f_30 = 0;
	Global_786435.f_31 = 0;
	Global_786435.f_32 = 0;
	Global_786435.f_33 = 0;
	Global_786435.f_36 = 0;
	Global_786435.f_37 = 0;
	Global_786435.f_38 = 0;
	Global_786435.f_39 = 0;
	Global_786435.f_40 = 0;
	Global_786435.f_41 = 0;
	Global_786435.f_42 = 0;
	Global_786435.f_35 = 0;
	if (bParam0)
	{
		Global_786435 = 0;
		Global_786435.f_1 = 0;
		Global_786435.f_2 = 0;
		Global_786435.f_5 = 0;
		Global_786435.f_19 = 0;
		Global_786435.f_23 = 0;
		Global_786435.f_26 = 0;
	}
}

void func_668(bool bParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (UNK_0x30F813723591D02E(UNK_0x65DC8BF3D20FC442(bParam0), "MPBitset"))
	{
		bVar0 = UNK_0x1E2DFB0EF4BB4566(UNK_0x65DC8BF3D20FC442(bParam0), "MPBitset");
	}
	UNK_0x0674E58A79778E99(&bVar0, bParam1);
	UNK_0xB7E567188872123E(UNK_0x65DC8BF3D20FC442(bParam0), "MPBitset", bVar0);
}

bool func_669()
{
	return Global_1653538.f_3;
}

bool func_670()
{
	return Global_2458936.f_7;
}

bool func_671()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632.f_39.f_4, 8);
}

void func_672()
{
	Global_2450632.f_39.f_57 = 0;
}

bool func_673()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632.f_39.f_4, false);
}

void func_674()
{
	UNK_0x0674E58A79778E99(&(Global_959568.f_8), 8);
}

void func_675(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_13.f_1), false);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_13.f_1), false);
	}
}

void func_676(int iParam0)
{
	if ((UNK_0x8CD06866876216F2() && !Global_1312854) && !Global_1312855)
	{
		if (((Global_2451426.f_3469 != 0 && Global_2451426.f_3469.f_1 != 0) && Global_2451426.f_3469.f_2 != 0) && Global_2451426.f_3469.f_3 != 0)
		{
			UNK_0xB2AACC7CFFE353DD(Global_2451426.f_3469, Global_2451426.f_3469.f_1, Global_2451426.f_3469.f_2, Global_2451426.f_3469.f_3, iParam0);
		}
	}
	func_677();
}

void func_677()
{
	Global_2451426.f_3469 = 0;
	Global_2451426.f_3469.f_1 = 0;
	Global_2451426.f_3469.f_2 = 0;
	Global_2451426.f_3469.f_3 = 0;
}

void func_678()
{
	Global_2451426.f_1.f_2801 = 1;
}

bool func_679()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2451426.f_1.f_2809, 12);
}

void func_680(bool bParam0)
{
	if (!func_673() || bParam0)
	{
		Global_1575095 = 0;
		Global_1575094 = 0;
	}
}

void func_681(bool bParam0, bool bParam1)
{
	struct<6> Var0;
	int iVar6;

	Global_2450632.f_39 = -1;
	Global_2450632.f_39.f_64 = -1;
	Global_2450632.f_39.f_2 = -1;
	Global_2450632.f_39.f_5 = 0;
	Global_2450632.f_39.f_40 = 0;
	Global_2450632.f_39.f_3 = 0;
	Global_2450632.f_39.f_4 = 0;
	Global_2450632.f_39.f_42 = -1;
	Global_2450632.f_39.f_6 = { Var0 };
	Global_2450632.f_39.f_62 = 0;
	Global_2450632.f_39.f_138 = 0;
	Global_2450632.f_39.f_353 = 0;
	Global_2450632.f_39.f_63 = 0;
	Global_2450632.f_39.f_139 = 0;
	Global_2450632.f_39.f_354 = 0;
	Global_2450632.f_39.f_528 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2450632.f_39.f_485[iVar6] = 0;
		iVar6++;
	}
	Global_2450632.f_39.f_61 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		Global_2450632.f_39.f_65[iVar6] = 0;
		iVar6++;
	}
	Global_2450632.f_39.f_137 = 0;
	iVar6 = 0;
	while (iVar6 <= 29)
	{
		Global_2450632.f_39.f_140[iVar6] = 0;
		iVar6++;
	}
	Global_2450632.f_39.f_352 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2450632.f_39.f_355[iVar6] = 0;
		Global_2450632.f_39.f_370[iVar6] = 0;
		Global_2450632.f_39.f_400[iVar6 /*6*/] = { Var0 };
		Global_2450632.f_39.f_385[iVar6] = 0;
		iVar6++;
	}
	if (bParam0)
	{
		iVar6 = 0;
		while (iVar6 < 4)
		{
			Global_2450632.f_39.f_44[iVar6] = 0;
			iVar6++;
		}
		if (bParam1)
		{
			Global_2450632.f_39.f_506 = 0;
			Global_2450632.f_39.f_507 = 0;
			iVar6 = 0;
			while (iVar6 < 5)
			{
				Global_2450632.f_39.f_514[iVar6] = -1;
				Global_2450632.f_39.f_520[iVar6] = -1;
				iVar6++;
			}
			Global_2450632.f_39.f_55 = 0;
			Global_2450632.f_39.f_12 = { Var0 };
			Global_2450632.f_39.f_59 = 0;
			Global_2450632.f_39.f_500 = { 0f, 0f, 0f };
			Global_2450632.f_39.f_503 = { 0f, 0f, 0f };
			Global_2450632.f_39.f_58 = 0;
			Global_2450632.f_39.f_57 = 0;
			Global_2450632.f_39.f_1 = -1;
			Global_2450632.f_39.f_526 = -1;
		}
	}
}

void func_682()
{
	Global_2458936.f_8 = 0;
	Global_2458936.f_7 = 0;
}

void func_683()
{
	int iVar0;
	int iVar1;

	if (!UNK_0x8CD06866876216F2())
	{
		return;
	}
	iVar0 = UNK_0x84F1BBE0C800DB62();
	iVar1 = UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(Global_968149, UNK_0x2B6E0A53779D29EA()));
	UNK_0x1B95DBEA868760F4(Global_4456448, &(Global_4456448.f_195277), iVar0, iVar1, Global_968149.f_1);
	func_684();
}

void func_684()
{
	Global_968149 = 0;
	Global_968149.f_1 = 0;
}

bool func_685()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 148;
}

bool func_686()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 5;
}

bool func_687()
{
	if (func_341() && UNK_0xA14BB9332558B949())
	{
		return true;
	}
	return false;
}

void func_688()
{
	Global_1662512.f_1774 = 0;
}

void func_689()
{
	Global_2450632.f_736 = 0;
}

bool func_690()
{
	return Global_2450632.f_736;
}

void func_691()
{
	Global_19671 = 0;
	func_692();
}

void func_692()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

bool func_693(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

bool func_694(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

int func_695(int iParam0)
{
	if (iParam0 == Global_262145.f_5008[0])
	{
		return 0;
	}
	else if (iParam0 == Global_262145.f_5008[1])
	{
		return 1;
	}
	else if (iParam0 == Global_262145.f_5008[2])
	{
		return 2;
	}
	else if (iParam0 == Global_262145.f_5008[3])
	{
		return 3;
	}
	else if (iParam0 == Global_262145.f_5008[4])
	{
		return 4;
	}
	else if (iParam0 == Global_262145.f_5008[5])
	{
		return 5;
	}
	else if (iParam0 == Global_262145.f_5008[6])
	{
		return 6;
	}
	else if (iParam0 == Global_262145.f_5008[7])
	{
		return 7;
	}
	else if (iParam0 == Global_262145.f_5008[8])
	{
		return 8;
	}
	else if (iParam0 == Global_262145.f_5008[9])
	{
		return 9;
	}
	else if (iParam0 == Global_262145.f_5008[10])
	{
		return 10;
	}
	else if (iParam0 == Global_262145.f_5008[11])
	{
		return 11;
	}
	else if (iParam0 == Global_262145.f_5008[12])
	{
		return 12;
	}
	else if (iParam0 == Global_262145.f_5008[13])
	{
		return 13;
	}
	else if (iParam0 == Global_262145.f_5008[14])
	{
		return 14;
	}
	else if (iParam0 == Global_262145.f_5008[15])
	{
		return 15;
	}
	return -1;
}

void func_696()
{
	Global_2450632.f_600 = 0;
}

void func_697()
{
	struct<14> Var0;
	int iVar14;

	Var0.f_4 = -1;
	iVar14 = UNK_0xD803B885F5E47A62();
	if (iVar14 != -1)
	{
		Global_1627020[iVar14 /*38*/] = { Var0 };
	}
}

void func_698()
{
	Global_1653538.f_7 = 0;
}

void func_699(bool bParam0, bool bParam1, bool bParam2)
{
	struct<6> Var0;

	Global_2450632.f_569.f_3 = { Var0 };
	Global_2450632.f_569 = 0;
	Global_2450632.f_569.f_1 = 0;
	Global_2450632.f_569.f_12 = 0;
	if (bParam0)
	{
		Global_2450632.f_569.f_2 = 0;
		Global_2450632.f_569.f_13 = 0;
		Global_2450632.f_569.f_14 = 0;
		Global_2394835 = 0;
		if (bParam1)
		{
			Global_2450632.f_569.f_9 = 0;
			Global_2450632.f_569.f_10 = 0;
			Global_2450632.f_569.f_11 = 0;
			Global_2450632.f_569.f_16 = -1;
		}
		if (bParam2 && !UNK_0xA14BB9332558B949())
		{
			Global_1653563.f_1347 = 0;
			Global_1653563.f_1348 = 0;
		}
		if (UNK_0xD803B885F5E47A62() != -1)
		{
			Global_1627020[UNK_0xD803B885F5E47A62() /*38*/].f_2 = 0;
			Global_1627020[UNK_0xD803B885F5E47A62() /*38*/] = 0;
		}
	}
}

void func_700()
{
	Global_2450632.f_569.f_12 = 0;
}

bool func_701()
{
	return Global_2450632.f_569.f_9 > 0;
}

bool func_702()
{
	return Global_2450632.f_569.f_12;
}

void func_703()
{
	UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_99.f_32), 11);
}

void func_704()
{
	UNK_0x0674E58A79778E99(&(Global_1627020[UNK_0xD803B885F5E47A62() /*38*/].f_29), 3);
}

void func_705()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1575108[iVar0] = 0;
		iVar0++;
	}
}

void func_706()
{
	int iVar0;

	iVar0 = UNK_0xD803B885F5E47A62();
	if (iVar0 != -1)
	{
		Global_1627020[iVar0 /*38*/].f_5 = 0;
	}
}

void func_707()
{
	Global_2461148 = 0;
	Global_2461149 = 0;
	Global_2461150 = 0;
	Global_2461151 = 0;
}

void func_708()
{
	Global_2450632.f_39.f_56 = 0;
}

void func_709()
{
	Global_2450632.f_39.f_58 = 0;
}

void func_710()
{
	if (UNK_0xA4FD7964FEE91ED8(UNK_0x5A0033B025D45F1B()) != Global_1388163)
	{
		if (UNK_0x5A0033B025D45F1B() == 0 && Global_1388163 == 3)
		{
			Global_1388163 = UNK_0xA4FD7964FEE91ED8(0);
		}
		UNK_0x398B6B43792F03FE(UNK_0x5A0033B025D45F1B(), Global_1388163);
	}
}

bool func_711()
{
	if (func_712() != 2)
	{
		return false;
	}
	if (!func_673() && !((Global_1670379 || Global_1312791) && func_565()))
	{
		return false;
	}
	return true;
}

int func_712()
{
	return Global_2450632.f_39.f_40;
}

bool func_713()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632.f_569.f_1, false);
}

void func_714(int iParam0)
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		UNK_0xA2AE78C3DF2926AF(iParam0);
	}
}

void func_715(bool bParam0)
{
	int iVar0;

	iVar0 = UNK_0x6E61BE9E61434AC1();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_1590535[iVar0 /*876*/].f_203, false))
			{
				UNK_0x5D96D8530B3D0904(&(Global_1590535[iVar0 /*876*/].f_203), false);
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[iVar0 /*876*/].f_203, false))
		{
			UNK_0x0674E58A79778E99(&(Global_1590535[iVar0 /*876*/].f_203), false);
		}
	}
}

void func_716()
{
	UNK_0x0674E58A79778E99(&(Global_2450632.f_2), 31);
}

void func_717()
{
	Global_2439138.f_1894.f_816 = func_140();
}

void func_718()
{
	Global_2450632.f_784 = 0;
}

void func_719()
{
	int iVar0;
	struct<8> Var1;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_722(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1670846.f_271[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	func_721();
	func_720();
	Global_1670846 = 0;
}

void func_720()
{
	Global_1670846.f_4 = 0;
}

void func_721()
{
	Global_1670846.f_3 = 0;
}

void func_722(int iParam0)
{
	struct<53> Var0;

	Var0 = -1;
	Var0.f_1 = 1;
	Var0.f_2 = 3;
	Var0.f_28 = 4;
	Global_1670846.f_5[iParam0 /*53*/] = { Var0 };
}

void func_723()
{
	UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18), 20);
}

void func_724(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 18, 1))
		{
			func_65(iParam0, 18, 1);
		}
	}
	else if (func_26(iParam0, 18, 1))
	{
		func_63(iParam0, 18, 1);
	}
}

void func_725()
{
	UNK_0x0674E58A79778E99(&(Global_2537071.f_795), 3);
}

void func_726(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_224();
	if (bParam0)
	{
		func_314(1);
		UNK_0xA37A90C62806D848(1);
	}
	UNK_0x790015DC92C918E2();
	func_217();
	UNK_0x4DC7B72197441408(0);
	func_253(0, 1, 1, 0, 0, bParam2);
	func_732();
	func_205(12, 0, -1);
	func_206(1);
	UNK_0x5413873D3F67BF93(false, -1);
	UNK_0xBFE31971E49FA500(1);
	UNK_0x8BCB70EB440DED83(1);
	func_731();
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
	func_260(0);
	if (((((func_124() == 0 && func_730() == 0) && bParam1) && !func_257(UNK_0xD803B885F5E47A62())) && !UNK_0xEB880D98B5988D0C()) && func_334())
	{
		func_363(UNK_0xD803B885F5E47A62(), 1, 0, 0);
	}
	Global_2439138.f_3747 = 0;
	func_727();
}

void func_727()
{
	bool bVar0;
	bool bVar1;

	if (UNK_0x8CD06866876216F2() && func_199(&Global_2546022))
	{
		if (!func_198(&Global_2546022, 3500, 1) || UNK_0xFD59EF2472AF72AF(UNK_0xD803B885F5E47A62()))
		{
			if (!func_729())
			{
				if (UNK_0x757EF87A33649210())
				{
					func_345(&Global_2546022, 1, 0);
				}
				else if (!func_255(UNK_0xD803B885F5E47A62(), 0))
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
				func_345(&Global_2546022, 1, 0);
			}
		}
		else
		{
			if (UNK_0x8CD06866876216F2())
			{
				UNK_0x672BED15BAF1B335(UNK_0x16F2683693E537C9());
			}
			func_197(&Global_2546022);
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
				if (func_14(bVar1, 1, 1))
				{
					func_728(bVar1);
				}
			}
			bVar0++;
		}
	}
}

void func_728(bool bParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2546026, bParam0) && UNK_0x8CD06866876216F2())
	{
		if (!func_198(&(Global_2546027[bParam0 /*2*/]), 3500, 1) || UNK_0xFD59EF2472AF72AF(bParam0))
		{
			if (!func_729())
			{
				if (UNK_0x757EF87A33649210())
				{
					func_345(&(Global_2546027[bParam0 /*2*/]), 1, 0);
				}
				else if (!func_255(bParam0, 0))
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
				func_345(&(Global_2546027[bParam0 /*2*/]), 1, 0);
			}
		}
		else
		{
			if (!UNK_0x437347B10A200C4B(UNK_0x9539D44F3E4492F6(bParam0), 0))
			{
				UNK_0x672BED15BAF1B335(UNK_0x9539D44F3E4492F6(bParam0));
			}
			func_197(&(Global_2546027[bParam0 /*2*/]));
			UNK_0x0674E58A79778E99(&Global_2546026, bParam0);
		}
	}
}

bool func_729()
{
	if (UNK_0x22A8E52414415B76() || UNK_0xF929B1A0A409FF93())
	{
		return true;
	}
	return false;
}

bool func_730()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632, 7);
}

void func_731()
{
	Global_22211.f_5 = 0;
}

void func_732()
{
	func_206(1);
	func_205(4, 0, -1);
	func_205(6, 0, -1);
	func_205(7, 0, -1);
	func_205(3, 0, -1);
	func_205(1, 0, -1);
	func_205(2, 0, -1);
	func_205(11, 0, -1);
	func_205(13, 0, -1);
	func_205(14, 0, -1);
	func_205(16, 0, -1);
}

void func_733(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (Global_1312448)
	{
		if (!func_767())
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
	iVar1 = func_765(UNK_0xD803B885F5E47A62(), bParam0);
	iVar2 = func_763(iVar1, bParam0);
	if (!func_762(-1))
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
		iVar3 = func_761(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_759(iVar4))
			{
				func_750(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_744(func_745(59, 0, 0), 0);
	func_742(func_745(135, 0, 0), 1);
	func_741(func_745(22, 0, 0), func_745(73, 0, 0));
	if (func_767())
	{
		if (func_502(77, -1))
		{
			func_740(1);
			func_739(1);
		}
	}
	if (func_738() || func_737())
	{
		func_32(77, 1, -1, 1);
		if (UNK_0x8CD06866876216F2())
		{
			func_734(28, 1, 0);
			func_734(29, 1, 0);
			func_734(30, 1, 0);
			func_734(31, 1, 0);
			func_734(32, 1, 0);
			func_734(33, 1, 0);
			func_734(34, 1, 0);
			func_734(35, 1, 0);
			func_734(36, 1, 0);
			func_734(37, 1, 0);
			func_734(38, 1, 0);
		}
	}
	if (func_745(21, 0, 0))
	{
		UNK_0x0F30FBDF741A7E3E(0);
	}
	Global_968399 = 0;
}

void func_734(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 0, 0))
		{
			if (bParam2 && Global_98796.f_18[iParam0])
			{
				if (func_736(iParam0) == 3 && !func_25(iParam0))
				{
					func_735(iParam0);
					func_65(iParam0, 0, 0);
					func_63(iParam0, 1, 0);
					func_405(iParam0);
				}
				else
				{
					func_65(iParam0, 1, 0);
					func_405(iParam0);
				}
			}
			else
			{
				func_65(iParam0, 0, 0);
				func_63(iParam0, 1, 0);
				func_405(iParam0);
			}
		}
		else
		{
			func_63(iParam0, 1, 0);
			func_405(iParam0);
		}
	}
	else if (func_26(iParam0, 0, 0))
	{
		func_63(iParam0, 0, 0);
		func_63(iParam0, 1, 0);
		func_405(iParam0);
	}
}

void func_735(int iParam0)
{
	if (Global_98796.f_18[iParam0])
	{
		func_65(iParam0, 10, 1);
		func_65(iParam0, 19, 1);
	}
}

int func_736(int iParam0)
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

bool func_737()
{
	return Global_1312865;
}

bool func_738()
{
	return Global_1312867;
}

void func_739(bool bParam0)
{
	if (!UNK_0x8CD06866876216F2())
	{
		return;
	}
	func_734(28, bParam0, 0);
	func_734(30, bParam0, 0);
	func_734(31, bParam0, 0);
	func_734(33, bParam0, 0);
	func_734(34, bParam0, 0);
	func_734(38, bParam0, 0);
}

void func_740(bool bParam0)
{
	if (!UNK_0x8CD06866876216F2())
	{
		return;
	}
	func_734(29, bParam0, 0);
	func_734(32, bParam0, 0);
	func_734(36, bParam0, 0);
	func_734(35, bParam0, 0);
	func_734(37, bParam0, 0);
}

void func_741(bool bParam0, bool bParam1)
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
	func_734(0, bParam0, 1);
	func_734(1, bParam0, 1);
	func_734(2, bParam0, 1);
	func_734(3, bParam0, 1);
	func_734(4, bParam0, 1);
	func_734(5, bParam0, 1);
	func_734(6, bParam0, 1);
	func_734(7, bParam0, bVar0);
	func_734(8, bParam0, 1);
	func_734(9, bParam0, 1);
	func_734(10, bParam0, 1);
	func_734(11, bParam0, 1);
	func_734(12, bParam0, bVar0);
	func_734(13, bParam0, 1);
	func_734(21, bParam0, 1);
	func_734(14, bParam0, 1);
	func_734(15, bParam0, 1);
	func_734(16, bParam0, 1);
	func_734(17, bParam0, 1);
	func_734(18, bParam0, 1);
	func_734(19, bParam0, 1);
	func_734(20, bParam0, 1);
	func_734(22, bParam0, 1);
	func_734(23, bParam0, 1);
	func_734(24, bParam0, 1);
	func_734(25, bParam0, 1);
	func_734(26, bParam0, 1);
	func_734(27, bParam0, 1);
	func_406(1, !bParam1);
	if (!bVar0)
	{
		func_735(12);
	}
}

void func_742(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!UNK_0x8CD06866876216F2())
	{
		return;
	}
	bVar0 = func_743(0);
	if (Global_262145.f_63 == 1 && func_745(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && bVar0))
	{
		func_734(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_25(44))
		{
			func_735(44);
		}
	}
	if (bParam0)
	{
		if (func_622(0) > 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_2537071.f_1735), 10);
		}
	}
}

bool func_743(bool bParam0)
{
	bool bVar0;

	if (Global_1312448)
	{
		return true;
	}
	if (func_738())
	{
		return true;
	}
	if (func_737())
	{
		return true;
	}
	if (bParam0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_1726, 26))
		{
			bVar0 = func_27(1191, -1, 0);
			if (!UNK_0xEAE0D21A50E6C7F4(bVar0, 23))
			{
				return false;
			}
		}
	}
	return func_502(122, -1);
}

void func_744(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!UNK_0x8CD06866876216F2())
	{
		return;
	}
	bVar0 = func_743(0);
	func_734(39, bParam0, 0);
	func_734(40, bParam0, 0);
	func_734(41, bParam0, 0);
	if (!bParam0 || (bParam0 && bVar0))
	{
		func_734(43, bParam0, 0);
		func_734(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_25(39))
		{
			func_735(39);
		}
		if (!func_25(40))
		{
			func_735(40);
		}
		if (!func_25(41))
		{
			func_735(41);
		}
		if (!func_25(42))
		{
			func_735(42);
		}
		if (!func_25(43))
		{
			func_735(43);
		}
	}
}

bool func_745(int iParam0, bool bParam1, bool bParam2)
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
		if (func_747(UNK_0xD803B885F5E47A62(), 85))
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
	if (func_738() || func_737())
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
			if (func_746())
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

bool func_746()
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
	if (func_738())
	{
		return true;
	}
	if (func_737())
	{
		return true;
	}
	bVar0 = Global_1388048[func_28(-1)];
	if (UNK_0xEAE0D21A50E6C7F4(bVar0, 7))
	{
		UNK_0x5D96D8530B3D0904(&(Global_2537071.f_1731), 23);
		return true;
	}
	return false;
}

bool func_747(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_767())
	{
		return false;
	}
	if (func_749())
	{
		return false;
	}
	if (iParam1 == 86)
	{
		return true;
	}
	iVar0 = func_748(iParam1);
	bVar1 = iVar0;
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_730, bVar1);
}

int func_748(int iParam0)
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

bool func_749()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_146, 3);
}

void func_750(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_758(-1))
			{
				if (!func_767())
				{
					return;
				}
			}
			if (!func_758(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_757() && !func_756())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_755())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_758(-1))
				{
					if (!func_751())
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

bool func_751()
{
	bool bVar0;

	if (func_754(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	bVar0 = Global_1388048[func_28(-1)];
	if (UNK_0xEAE0D21A50E6C7F4(bVar0, 2))
	{
		func_752(1);
		return true;
	}
	return false;
}

void func_752(bool bParam0)
{
	if (bParam0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142, 25))
		{
			func_753(UNK_0xD803B885F5E47A62(), 12);
			UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142), 25);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142, 25))
	{
		UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142), 25);
	}
}

void func_753(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_748(iParam1);
	bVar1 = iVar0;
	UNK_0x5D96D8530B3D0904(&(Global_1590535[iParam0 /*876*/].f_730), bVar1);
}

bool func_754(int iParam0)
{
	if (func_738())
	{
		return true;
	}
	if (func_737())
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_142, 25);
}

bool func_755()
{
	bool bVar0;

	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 6))
	{
		return true;
	}
	bVar0 = Global_1388048[func_28(-1)];
	if (UNK_0xEAE0D21A50E6C7F4(bVar0, false))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 6))
		{
			UNK_0x5D96D8530B3D0904(&(Global_2537071.f_1731), 6);
		}
		return true;
	}
	if (func_738())
	{
		return true;
	}
	if (func_737())
	{
		return true;
	}
	return false;
}

bool func_756()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_146, 7);
}

bool func_757()
{
	if (Global_1312448)
	{
		return true;
	}
	if (func_738())
	{
		return true;
	}
	if (func_737())
	{
		return true;
	}
	return func_502(121, -1);
}

bool func_758(bool bParam0)
{
	return func_502(123, bParam0);
}

bool func_759(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (func_738())
	{
		return true;
	}
	if (func_737())
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
			bVar0 = func_27(func_760(iParam0), -1, 0);
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

int func_760(int iParam0)
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

int func_761(int iParam0)
{
	if (func_738())
	{
		return 1;
	}
	if (func_737())
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
			if (!func_758(-1))
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

bool func_762(bool bParam0)
{
	if (Global_1312448)
	{
		return true;
	}
	if (func_738())
	{
		return true;
	}
	if (func_737())
	{
		return true;
	}
	return func_502(119, bParam0);
}

int func_763(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_764(iParam0, 0);
}

int func_764(int iParam0, int iParam1)
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

int func_765(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_766(bParam0);
}

int func_766(bool bParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (bParam0 > -1)
		{
			if (bParam0 == UNK_0xD803B885F5E47A62())
			{
				return Global_1388060[func_28(-1)];
			}
			else if (func_60(bParam0))
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_28(-1)];
	}
	return 0;
}

bool func_767()
{
	if (Global_1312448)
	{
		return true;
	}
	if (func_738())
	{
		return true;
	}
	if (func_737())
	{
		return true;
	}
	return func_502(120, -1);
}

bool func_768()
{
	var uVar0;

	func_773(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_485())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_772())
	{
		return true;
	}
	if (func_771(159))
	{
		if (!func_770())
		{
			return true;
		}
	}
	if (func_771(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_769() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_769()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_769()
{
	switch (func_19())
	{
		case 0:
			return func_373();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

bool func_770()
{
	return Global_2450632.f_598;
}

bool func_771(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_772()
{
	return Global_2460680;
}

void func_773(var uParam0)
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
					func_774(iVar0);
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

void func_774(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_14(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_775(bVar4, &bVar5))
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

bool func_775(bool bParam0, bool bParam1)
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

void func_776()
{
	SYSTEM::WAIT(0);
}

void func_777(struct<17> Param0, var uParam17, var uParam18, var uParam19, var uParam20)
{
	bool bVar0;

	UNK_0x37AD2AB54480FA6A(2, 0, Param0.f_16);
	func_782(0, -1, 0);
	UNK_0x9752E7BAEABA939E(&Local_536, 7);
	UNK_0x35B62793EAE9ADDF(&Local_708, 11);
	Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] = 16;
	if (bLocal_727)
	{
		if (!UNK_0x757EF87A33649210() && !UNK_0xD0BB2359EC70FC37())
		{
			UNK_0x53491B90E4FD0E56(800);
		}
		if (!UNK_0x09BE1E6DF7B80B43())
		{
			if (!UNK_0xF35E2CBC969C0B53())
			{
				bVar0 = UNK_0xD803B885F5E47A62() + 32;
				UNK_0x804733198F0CB21A(1, bVar0);
				func_209(1);
			}
		}
	}
	UNK_0x0BEC04ECA8485A3A(1);
	UNK_0x28E5F00F131890E3(1);
	if (!func_781())
	{
		func_416(0);
	}
	UNK_0x256D93AFAE851A7A(0);
	func_724(iLocal_61, 1);
	func_418(1);
	if (!bLocal_727)
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			func_363(UNK_0xD803B885F5E47A62(), 1, 0, 0);
		}
	}
	Global_2537071.f_1726 = 0;
	UNK_0xB5376EA942202450(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 0, false, 0);
	func_780();
	func_778();
	Local_708[UNK_0x57270EE11514DC67() /*5*/] = 0;
}

void func_778()
{
	UNK_0x45019D71A0DF8B62(1);
	func_779(1, -1);
	UNK_0xED41266DE64A57FD(1);
	if (func_502(133, -1))
	{
		func_32(133, 0, -1, 1);
	}
	Global_2450632.f_643 = 1;
}

void func_779(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (bParam1 == -1)
	{
		bParam1 = func_29();
	}
	switch (bParam0)
	{
		case 0:
			UNK_0xD5F10CECBB7D51B6(false, bParam1);
			break;
		default:
			iVar1 = func_432(bParam1);
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
			func_32(120, 0, bParam1, 1);
			func_32(124, 0, bParam1, 1);
			func_32(115, 0, bParam1, 1);
			func_32(119, 0, bParam1, 1);
			break;
	}
}

void func_780()
{
	UNK_0xDD353D0E9C789D0E(&iLocal_721);
	UNK_0x75CDA8644CD3B5F5(false, 0, 0);
	UNK_0x796BDF31572BB055(false, 17.0693f, -1115.935f, 28.7968f, 0);
	UNK_0x75ABDC5F81978924(iLocal_721);
}

bool func_781()
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
		if (func_485())
		{
			return false;
		}
		if (func_771(157))
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

int func_782(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_783();
			}
			else
			{
				return 0;
			}
		}
		if (!func_396())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_783();
					}
					else
					{
						return 0;
					}
				}
				if (func_485())
				{
					if (!bParam2)
					{
						func_783();
					}
					else
					{
						return 0;
					}
				}
				if (func_771(157))
				{
					if (!bParam2)
					{
						func_783();
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
					func_783();
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
				func_783();
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
			func_783();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_783()
{
	UNK_0x10FAF14A60A0DBE1();
}

