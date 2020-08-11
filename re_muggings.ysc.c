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
	bool bLocal_50 = false;
	bool bLocal_51 = false;
	bool bLocal_52 = false;
	bool bLocal_53 = false;
	bool bLocal_54 = false;
	bool bLocal_55 = false;
	bool bLocal_56 = false;
	bool bLocal_57 = false;
	bool bLocal_58 = false;
	bool bLocal_59 = false;
	bool bLocal_60 = false;
	bool bLocal_61 = false;
	bool bLocal_62 = false;
	bool bLocal_63 = false;
	bool bLocal_64 = false;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	vector3 vLocal_69 = { 0f, 0f, 0f };
	vector3 vLocal_72 = { 0f, 0f, 0f };
	bool bLocal_75 = false;
	var uLocal_76 = 0;
	float fLocal_77 = 0f;
	bool bLocal_78 = false;
	bool bLocal_79 = false;
	vector3 vLocal_80 = { 0f, 0f, 0f };
	bool bLocal_83 = false;
	bool bLocal_84 = false;
	bool bLocal_85 = false;
	bool bLocal_86 = false;
	vector3 vLocal_87 = { 0f, 0f, 0f };
	bool bLocal_90 = false;
	vector3 vLocal_91 = { 0f, 0f, 0f };
	vector3 vLocal_94 = { 0f, 0f, 0f };
	vector3 vLocal_97 = { 0f, 0f, 0f };
	vector3 vLocal_100 = { 0f, 0f, 0f };
	char[] cLocal_103[8] = 0;
	char* sLocal_104 = NULL;
	char* sLocal_105 = NULL;
	char* sLocal_106 = NULL;
	char* sLocal_107 = NULL;
	char* sLocal_108 = NULL;
	char* sLocal_109 = NULL;
	char* sLocal_110 = NULL;
	char* sLocal_111 = NULL;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	char* sLocal_114 = NULL;
	char* sLocal_115 = NULL;
	char* sLocal_116 = NULL;
	char* sLocal_117 = NULL;
	char* sLocal_118 = NULL;
	bool bLocal_119 = false;
	bool bLocal_120 = false;
	int iLocal_121 = 0;
	vector3 vLocal_122 = { 0f, 0f, 0f };
	vector3 vLocal_125 = { 0f, 0f, 0f };
	vector3 vLocal_128 = { 0f, 0f, 0f };
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	bool bLocal_133 = false;
	bool bLocal_134 = false;
	bool bLocal_135 = false;
	bool bLocal_136 = false;
	bool bLocal_137 = false;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	var uLocal_142 = 0;
	int iLocal_143 = 0;
	bool bLocal_144 = false;
	vector3 vLocal_145 = { 0f, 0f, 0f };
	bool bLocal_148 = false;
	bool bLocal_149 = false;
	bool bLocal_150 = false;
	int iLocal_151 = 0;
	bool bLocal_152 = false;
	bool bLocal_153 = false;
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
	int iLocal_164 = 0;
	float fLocal_165 = 0f;
	vector3 vLocal_166 = { 0f, 0f, 0f };
	vector3 vLocal_169 = { 0f, 0f, 0f };
	vector3 vLocal_172 = { 0f, 0f, 0f };
	vector3 vLocal_175 = { 0f, 0f, 0f };
	vector3 vLocal_178 = { 0f, 0f, 0f };
	vector3 vLocal_181 = { 0f, 0f, 0f };
	vector3 vLocal_184 = { 0f, 0f, 0f };
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	bool bLocal_190 = false;
	int iLocal_191 = 0;
	bool bLocal_192 = false;
	var uLocal_193 = 0;
	var uLocal_194 = 16;
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
	bool bLocal_359 = false;
	bool bLocal_360 = false;
	bool bLocal_361 = false;
	bool bLocal_362 = false;
	bool bLocal_363 = false;
	bool bLocal_364 = false;
	bool bLocal_365 = false;
	bool bLocal_366 = false;
	bool bLocal_367 = false;
	bool bLocal_368 = false;
	bool bLocal_369 = false;
	bool bLocal_370 = false;
	vector3 vLocal_371 = { 0f, 0f, 0f };
	vector3 vLocal_374 = { 0f, 0f, 0f };
	bool bLocal_377 = false;
	bool bLocal_378 = false;
	int iLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = -1;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 1000;
	var uLocal_390 = 1000;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 15;
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
	var uLocal_666 = 1;
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	vector3 vLocal_670 = { 0f, 0f, 0f };
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
	bool bVar0;

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
	iLocal_18 = 3;
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
	vLocal_91 = { -131.052f, -1627f, 31.1755f };
	vLocal_94 = { 287.888f, -284.603f, 52.967f };
	vLocal_97 = { -319.66f, -832.28f, 31.61f };
	vLocal_100 = { 31f, -1019f, 28.5f };
	bLocal_120 = "";
	bLocal_359 = "RANDOM@MUGGING3";
	bLocal_360 = "pickup_object";
	bLocal_377 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	iLocal_379 = -1;
	if (UNK_0x2EBF608FFE6CA406(11))
	{
		if (iLocal_48 == 5 || iLocal_48 == 12)
		{
			func_298(25, bLocal_90);
			func_280();
		}
		else
		{
			func_280();
		}
	}
	vLocal_122 = { ScriptParam_0.f_1[0 /*3*/] };
	func_279(&uLocal_393, 3);
	func_278();
	if ((bLocal_90 == 1 && func_277(55)) && !func_276(55))
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	if (func_235(vLocal_122, 25, bLocal_90, 0, 0))
	{
		func_232(-1);
	}
	else
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	bVar0 = false;
	while (true)
	{
		SYSTEM::WAIT(0);
		func_229(&uLocal_393);
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x34FABD75496259E4(UNK_0xD803B885F5E47A62());
		}
		func_228(iLocal_65, &uLocal_392);
		if (UNK_0x338D6FF72D84D90F() || bLocal_149)
		{
			switch (iLocal_46)
			{
				case 0:
					if (func_214())
					{
						UNK_0x060F249A9A3E3F4E(false);
						UNK_0x28F5E4DA506AC0CA(-127.9025f, -1574.084f, 36.4128f, 10f, 0, 0, 0, 0, false, 0);
						bLocal_156 = true;
						iLocal_46 = 1;
					}
					else if (func_213())
					{
						func_280();
					}
					break;
				case 1:
					if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
					{
						if (iLocal_141 == 0)
						{
							iLocal_141 = UNK_0x7D0D8317DC09FF68(101, vLocal_122, 0f);
						}
						UNK_0x34FABD75496259E4(UNK_0xD803B885F5E47A62());
						switch (iLocal_48)
						{
							case 1:
								func_205();
								break;
							case 2:
								UNK_0x26F63FD28070F2CE("MUGGING_INTERACTION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								switch (iLocal_49)
								{
									case 0:
										UNK_0x26F63FD28070F2CE("INITIAL_MUGGING_SEQ", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (UNK_0xEB6A8945D1AC98A1(bLocal_63) || UNK_0xB87D13D0C064E9D1(bLocal_63, UNK_0x16F2683693E537C9(), 0))
										{
											bVar0 = UNK_0xEB6A8945D1AC98A1(bLocal_62);
											if (!UNK_0x762119754C50557A(iLocal_191))
											{
											}
											if (bVar0 == 0 && bLocal_90 == 1)
											{
												UNK_0x64B1AD81046CB800(bLocal_62, 500, 1000, 0, 0, 0, 0);
												UNK_0xF3268524E9BE6D6E(bLocal_62, UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
												UNK_0xFADC0A217229F6B5(bLocal_62, true);
												func_204(1);
												func_199();
											}
										}
										else
										{
											func_169();
										}
										if (iLocal_669 == 1 && bLocal_149 == 1)
										{
											iLocal_48 = 4;
										}
										else if (bLocal_149)
										{
											iLocal_49 = 2;
										}
										break;
									case 2:
										UNK_0x26F63FD28070F2CE("VIC_CRY_OUT", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										func_168();
										if (bLocal_54 && !func_167())
										{
											iLocal_49 = 4;
										}
										break;
									case 4:
										UNK_0x26F63FD28070F2CE("ASK_PLAYER_FOR_HELP", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (func_166())
										{
											func_165();
										}
										if (bLocal_155)
										{
											iLocal_49 = 5;
										}
										if (UNK_0xD1960163A3042274(bLocal_62, 242628503) == 7)
										{
											UNK_0xDD353D0E9C789D0E(&iLocal_121);
											UNK_0x0C8C0C840C2D1AD2(false, bLocal_63, 5000, 0, 2);
											UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 5000);
											UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_a", 4f, -4f, -1, 0, false, 0, 0, 0);
											UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, false, 0, 0, 0);
											UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, false, 0, 0, 0);
											UNK_0x75ABDC5F81978924(iLocal_121);
											UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
											UNK_0xF82EA857DA10E0CD(&iLocal_121);
										}
										break;
									case 5:
										func_162();
										if (!UNK_0x437347B10A200C4B(bLocal_62, 0))
										{
											if (UNK_0xD1960163A3042274(bLocal_62, 242628503) == 7)
											{
												UNK_0xDD353D0E9C789D0E(&iLocal_121);
												UNK_0xF96A174EE26D7588(false, bLocal_63, 0);
												UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, false, 0, 0, 0);
												UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, false, 0, 0, 0);
												UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, false, 0, 0, 0);
												UNK_0x75ABDC5F81978924(iLocal_121);
												UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
												UNK_0xF82EA857DA10E0CD(&iLocal_121);
											}
										}
										break;
								}
								if (func_161())
								{
									iLocal_48 = 11;
								}
								if (bLocal_149)
								{
								}
								func_160();
								if (iLocal_49 == 0)
								{
									if (func_158())
									{
										if (iLocal_143 == 4)
										{
											if (UNK_0xE4EDC4B0E92C078B(iLocal_66))
											{
												UNK_0x142CC44DB769B57E(&iLocal_66);
											}
											if (UNK_0xE4EDC4B0E92C078B(iLocal_65))
											{
												UNK_0x142CC44DB769B57E(&iLocal_65);
											}
											if (!UNK_0xE4EDC4B0E92C078B(iLocal_67))
											{
												iLocal_67 = func_156(iLocal_191);
											}
											iLocal_48 = 4;
										}
										else
										{
											iLocal_48 = 3;
										}
									}
									if (func_155())
									{
										func_154();
									}
								}
								if (func_153())
								{
									func_152();
									func_151();
									if (UNK_0x5A91F08DF773C39D(bLocal_62, vLocal_184, 7f, 7f, 7f, false, true, 0))
									{
										iLocal_143 = 2;
										iLocal_48 = 3;
									}
									else
									{
										iLocal_48 = 4;
									}
								}
								if (bLocal_149)
								{
									if (!UNK_0x4734A6196B611C3B(bLocal_63, false))
									{
										func_149(iLocal_66, &uLocal_142);
									}
									else if (UNK_0xE4EDC4B0E92C078B(iLocal_66))
									{
										if (UNK_0x8FBD6436A27198B4(iLocal_66) == 1)
										{
										}
										else
										{
											UNK_0x321E019A46034F39(iLocal_66, false);
											UNK_0x61755AC17D8F538E(iLocal_66, true);
										}
									}
								}
								if (func_148())
								{
									iLocal_48 = 10;
								}
								break;
							case 4:
								UNK_0x26F63FD28070F2CE("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_147(1);
								if (func_166())
								{
									func_165();
									func_162();
								}
								if (func_161())
								{
									iLocal_48 = 11;
								}
								func_139();
								break;
							case 5:
								UNK_0x26F63FD28070F2CE("PLAYER_HAS_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_147(1);
								if (!bLocal_152)
								{
									func_138(bLocal_62, &uLocal_193);
									uLocal_193 = uLocal_193;
									func_137();
									func_136();
									func_135();
									if (func_134())
									{
										func_133();
										func_199();
									}
									if (func_126(func_127()) < bLocal_192)
									{
										iLocal_48 = 12;
									}
								}
								func_61();
								break;
							case 10:
								UNK_0x26F63FD28070F2CE("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_60();
								break;
							case 3:
								func_59();
								break;
							case 11:
								func_58();
								break;
							case 6:
								if (func_161())
								{
									iLocal_48 = 11;
								}
								func_41();
								break;
							case 8:
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
								{
									if (UNK_0x12DE711B1C681E9E(bLocal_62, UNK_0x16F2683693E537C9(), 20f, 20f, 20f, 0, 1, 0))
									{
										iLocal_48 = 6;
									}
									else
									{
										func_280();
									}
								}
								break;
							case 9:
								UNK_0x26F63FD28070F2CE("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								if (UNK_0xC844350D5D58C99A(bLocal_63))
								{
									if (UNK_0xEB6A8945D1AC98A1(bLocal_63))
									{
										if (UNK_0xE4EDC4B0E92C078B(iLocal_66))
										{
											UNK_0x142CC44DB769B57E(&iLocal_66);
										}
										if (!UNK_0xC844350D5D58C99A(bLocal_62))
										{
											if (UNK_0xC844350D5D58C99A(bLocal_64))
											{
												UNK_0xF690C84DADBB3551(&bLocal_64);
											}
											func_40();
											bLocal_56 = true;
											func_139();
										}
									}
								}
								break;
							case 12:
								if (UNK_0xC844350D5D58C99A(bLocal_64))
								{
									UNK_0xF690C84DADBB3551(&bLocal_64);
								}
								UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
								func_199();
								break;
							case 13:
								func_39();
								break;
						}
					}
					if (bLocal_60)
					{
						if (UNK_0x762119754C50557A(iLocal_191))
						{
							if (UNK_0x797C48AACDB248B0(iLocal_191))
							{
								if (SYSTEM::VDIST(vLocal_184, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) > 150f)
								{
									func_280();
								}
							}
						}
					}
					else if (bLocal_149)
					{
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
						{
							if (iLocal_48 != 6)
							{
								if (func_38(UNK_0x16F2683693E537C9(), bLocal_63, 1) > 150f && (!UNK_0x0A059E0DB9253280(bLocal_63) || UNK_0x03068588A1FCED1A(bLocal_63)))
								{
									func_37(&uLocal_380, 0, 0);
									iLocal_48 = 8;
								}
								else
								{
									func_4();
									func_3(iLocal_66, bLocal_63, 100f, 1061158912 /* Float: 0.75f */, 0);
								}
							}
						}
						else
						{
							func_37(&uLocal_380, 0, 0);
						}
					}
					if (UNK_0xC844350D5D58C99A(bLocal_62))
					{
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
						{
							if (UNK_0xB87D13D0C064E9D1(bLocal_62, UNK_0x16F2683693E537C9(), 1))
							{
								if (UNK_0xC844350D5D58C99A(bLocal_64))
								{
									if (UNK_0x50B5F6F3C29E9380(bLocal_64, bLocal_62))
									{
										UNK_0x15AFB6CBDE990FB6(bLocal_64, 1, true);
									}
								}
							}
						}
					}
					if (bLocal_150)
					{
						if (!bLocal_163)
						{
							if (!UNK_0x437347B10A200C4B(bLocal_63, 0) && !UNK_0x437347B10A200C4B(bLocal_62, 0))
							{
								if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bLocal_63, true), UNK_0x68F4C0EC296D3901(bLocal_62, true), 1) > 100f && UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bLocal_63, true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1) < 100f)
								{
									UNK_0xF3268524E9BE6D6E(bLocal_63, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
									bLocal_163 = true;
								}
							}
						}
					}
					if (bLocal_149 && !bLocal_150)
					{
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
						{
							if (bLocal_90 == 3)
							{
								if (UNK_0xD1960163A3042274(bLocal_63, 1805844857) != 1)
								{
									UNK_0x8FB4E06C94958F84(bLocal_63);
									UNK_0xF3268524E9BE6D6E(bLocal_63, bLocal_62, 200f, -1, 0, 0);
									UNK_0xBD453909DC26A85D(bLocal_63, joaat("MOTIONSTATE_RUN"), true, 0, 0);
									bLocal_150 = true;
								}
							}
							else if (UNK_0xD1960163A3042274(bLocal_63, 1805844857) != 1)
							{
								UNK_0x8FB4E06C94958F84(bLocal_63);
								UNK_0xF3268524E9BE6D6E(bLocal_63, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
								UNK_0xBD453909DC26A85D(bLocal_63, joaat("MOTIONSTATE_RUN"), true, 0, 0);
								bLocal_150 = true;
							}
							if (UNK_0xDDCA9A4E51DADA2B(bLocal_63, -2134635134))
							{
								UNK_0xF3268524E9BE6D6E(bLocal_63, bLocal_62, 200f, -1, 0, 0);
								UNK_0xBD453909DC26A85D(bLocal_63, joaat("MOTIONSTATE_RUN"), true, 0, 0);
								bLocal_150 = true;
							}
							if (bLocal_90 == 1 || bLocal_90 == 4)
							{
								if (UNK_0xB4ECF989E2C1DAC8(bLocal_63, bLocal_359, bLocal_369, 3))
								{
									if (UNK_0x8CA9406E01C7EE58(bLocal_63, bLocal_359, bLocal_369) >= 0.922f)
									{
										UNK_0xF3268524E9BE6D6E(bLocal_63, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
										UNK_0xBD453909DC26A85D(bLocal_63, joaat("MOTIONSTATE_RUN"), true, 0, 0);
										bLocal_150 = true;
									}
								}
								if (UNK_0xB4ECF989E2C1DAC8(bLocal_63, bLocal_359, bLocal_367, 3))
								{
									if (UNK_0x8CA9406E01C7EE58(bLocal_63, bLocal_359, bLocal_367) >= 0.922f)
									{
										UNK_0xF3268524E9BE6D6E(bLocal_63, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
										UNK_0xBD453909DC26A85D(bLocal_63, joaat("MOTIONSTATE_RUN"), true, 0, 0);
										bLocal_150 = true;
									}
								}
							}
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_280();
		}
	}
}

void func_1()
{
	if (UNK_0xC844350D5D58C99A(bLocal_62))
	{
		if (UNK_0xEB6A8945D1AC98A1(bLocal_62))
		{
			if (UNK_0xC844350D5D58C99A(bLocal_63))
			{
				if (UNK_0xEB6A8945D1AC98A1(bLocal_63))
				{
					func_280();
				}
			}
		}
	}
	if (UNK_0xEB6A8945D1AC98A1(bLocal_62))
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_65))
		{
			UNK_0x142CC44DB769B57E(&iLocal_65);
		}
	}
	if (UNK_0xEB6A8945D1AC98A1(bLocal_63))
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_66))
		{
			UNK_0x142CC44DB769B57E(&iLocal_66);
		}
	}
	if (!bLocal_161)
	{
		if (UNK_0xEB6A8945D1AC98A1(bLocal_63))
		{
			func_2(&uLocal_194, 1);
			bLocal_161 = true;
		}
	}
	if (!bLocal_162)
	{
		if (UNK_0xEB6A8945D1AC98A1(bLocal_62))
		{
			func_2(&uLocal_194, 2);
			bLocal_162 = true;
		}
	}
}

void func_2(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_3(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4)
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

void func_4()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_63) || !bLocal_133)
	{
		func_5(&uLocal_380, bLocal_63, 0, 0, 1, 1, 1);
	}
	else
	{
		func_37(&uLocal_380, 0, 0);
	}
}

void func_5(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_6(uParam0, bParam1, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_6(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_7(uParam0, bParam1, 0f, 0f, 0f, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_7(var uParam0, bool bParam1, vector3 vParam2, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
	{
		func_37(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_8(uParam0, bParam1, vParam2, iParam5, iParam6, bParam7, iParam8, bParam9);
}

void func_8(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_36(bVar0))
	{
		func_35();
	}
	if (func_34(bParam1) && UNK_0x4FC40AB0ECCE6E18(bParam1))
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
			if (func_29(uParam0, bParam7, bParam9, 0))
			{
				func_25(uParam0, bParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_13(bVar0))
				{
					if ((UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0)) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if ((bVar1 && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
						{
							if (!func_36(bVar0))
							{
								func_12(bVar0, -1);
								uParam0->f_3 = bVar0;
								if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
								{
									func_11(1);
								}
							}
						}
					}
				}
			}
			else if (func_13(bVar0))
			{
				if (UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0))
				{
					if (((UNK_0x0A059E0DB9253280(bParam1) && bVar1) && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
					{
						if (!func_36(bVar0))
						{
							func_12(bVar0, -1);
							uParam0->f_3 = bVar0;
							if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
							{
								func_11(1);
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
				if (func_36(bParam5))
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
						func_37(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(6) == 3 || UNK_0xA4FD7964FEE91ED8(6) == 4)
					{
						func_37(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(4) == 3 || UNK_0xA4FD7964FEE91ED8(4) == 4)
					{
						func_37(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(5) == 3 || UNK_0xA4FD7964FEE91ED8(5) == 4)
					{
						func_37(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(2) == 3 || UNK_0xA4FD7964FEE91ED8(2) == 4)
					{
						func_37(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0xF3545351E9CBB11F() == 3 || UNK_0xF3545351E9CBB11F() == 4)
				{
					func_37(uParam0, bVar0, 1);
				}
			}
			if (!func_29(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_10(uParam0))
				{
					func_9(uParam0);
				}
			}
		}
	}
	else
	{
		func_37(uParam0, bVar0, 0);
	}
}

void func_9(var uParam0)
{
	if (func_34(UNK_0x16F2683693E537C9()))
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

bool func_10(var uParam0)
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

int func_11(bool bParam0)
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

void func_12(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_13(bool bParam0)
{
	if (!func_14(1, 1, 0))
	{
		if ((!UNK_0xEA6BC48857E0AC4C(bParam0) && func_36(bParam0)) || func_36("CMN_HINT"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		return false;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_11(0) < 3)
			{
				return true;
			}
			break;
		case 4:
			if (func_11(0) < 1)
			{
				return true;
			}
			break;
		case 5:
		case 15:
			if (func_11(0) < 1)
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

bool func_14(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_24(0))
	{
		return false;
	}
	if (func_23())
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
	if ((func_22() || func_21(Global_4456448.f_232883)) || func_20())
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			bVar1 = func_19(UNK_0x16F2683693E537C9(), 0);
			if (((UNK_0x137240CA2BADB0D2(bVar0, bVar1) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("APC") && bVar1 != -1)) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("AKULA") && bVar1 != -1)) || (((UNK_0x134B62B726CEC8E6(bVar0) == joaat("RIOT2") && bVar1 == 0) && func_18(bVar0, 10)) && UNK_0x0ECB5CA5140957AD(bVar0, 10) != -1))
			{
				return false;
			}
		}
	}
	if (Global_1686722)
	{
		return false;
	}
	if (func_15(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_15(bool bParam0)
{
	if (bParam0 != func_17())
	{
		if (func_16(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && bParam0 == UNK_0xD803B885F5E47A62()) && func_16(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

bool func_16(bool bParam0, bool bParam1, bool bParam2)
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

int func_17()
{
	return -1;
}

bool func_18(bool bParam0, int iParam1)
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

bool func_19(bool bParam0, int iParam1)
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

bool func_20()
{
	return Global_2450632.f_17;
}

bool func_21(int iParam0)
{
	return iParam0 == 51;
}

bool func_22()
{
	return Global_2450632.f_16;
}

bool func_23()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

bool func_24(int iParam0)
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

void func_25(var uParam0, bool bParam1, vector3 vParam2, bool bParam5)
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
		func_37(uParam0, 0, 0);
	}
	if (func_28(vParam2, 0f, 0f, 0f, 0))
	{
		if (UNK_0xEC560E589DF8370E(bParam1))
		{
			bVar0 = UNK_0x940C1429253D3B1B(bParam1);
			if (!UNK_0x405E212DDE472467(bVar0, 0))
			{
				if (UNK_0x34BFC6F0CB887BC2(bVar0))
				{
					if (!func_26())
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

int func_26()
{
	return func_27(UNK_0xD803B885F5E47A62());
}

int func_27(bool bParam0)
{
	if (UNK_0x134B62B726CEC8E6(UNK_0x9539D44F3E4492F6(bParam0)) == joaat("MP_F_FREEMODE_01"))
	{
		return 1;
	}
	return 0;
}

bool func_28(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_29(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_33(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_10(uParam0))
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
						if (!func_33(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_33(bParam1, bParam2, bParam3))
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
					if (!func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_32(bParam1, bParam2, bParam3) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
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
				else if (!func_33(bParam1, bParam2, bParam3))
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
						if (func_31(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_30(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || func_30(bParam1, bParam2, bParam3))
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
					else if (func_31(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		case 4:
			if (!func_10(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_14(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_35();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_30(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
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

bool func_31(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
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

bool func_32(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
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

bool func_33(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
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

bool func_34(bool bParam0)
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

void func_35()
{
	UNK_0x5D96D8530B3D0904(&Global_7357, 4);
}

bool func_36(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_37(var uParam0, bool bParam1, int iParam2)
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
		if (func_36(uParam0->f_3))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
	if (!UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (func_36(bVar0))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
}

float func_38(bool bParam0, bool bParam1, int iParam2)
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

void func_39()
{
	func_280();
}

void func_40()
{
	if (!UNK_0x762119754C50557A(iLocal_191))
	{
		if (UNK_0xEB6A8945D1AC98A1(bLocal_63))
		{
			vLocal_184 = { UNK_0xC6151A4F2BB0AC79(bLocal_63, 1067030938 /* Float: 1.2f */, 1069547520 /* Float: 1.5f */) };
		}
		else
		{
			vLocal_184 = { UNK_0x550B1459B4642A86(UNK_0x68F4C0EC296D3901(bLocal_63, true), 1.2f, 1.5f) };
		}
		iLocal_191 = UNK_0xA6FF0828D17CF374(joaat("PICKUP_MONEY_WALLET"), vLocal_184, bLocal_144, bLocal_192, 1, bLocal_85);
		iLocal_67 = func_156(iLocal_191);
		func_37(&uLocal_380, 0, 0);
		bLocal_60 = true;
	}
}

void func_41()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
	{
		if (UNK_0xB4ECF989E2C1DAC8(bLocal_62, bLocal_359, "flee_backward_loop_shopkeeper", 3))
		{
			UNK_0xDD353D0E9C789D0E(&iLocal_121);
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, false, 0, 0, 0);
			UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
			UNK_0x75ABDC5F81978924(iLocal_121);
			UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
			UNK_0xF82EA857DA10E0CD(&iLocal_121);
		}
		else if (UNK_0xB4ECF989E2C1DAC8(bLocal_62, bLocal_359, "flee_forward_loop_shopkeeper", 3))
		{
			UNK_0xDD353D0E9C789D0E(&iLocal_121);
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, false, 0, 0, 0);
			UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
			UNK_0x75ABDC5F81978924(iLocal_121);
			UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
			UNK_0xF82EA857DA10E0CD(&iLocal_121);
		}
		func_42(&uLocal_194, cLocal_103, sLocal_110, 4, 0, 0, 0);
		bLocal_154 = true;
		UNK_0xFADC0A217229F6B5(bLocal_62, true);
		SYSTEM::WAIT(0);
		func_280();
	}
}

int func_42(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_57(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_43(sParam2, iParam3, 0);
}

int func_43(char* sParam0, int iParam1, bool bParam2)
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
					func_56();
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
		if (func_55(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_54();
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
				func_52();
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
				if (func_51())
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
			if (func_50())
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
			func_49();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_48();
		func_44();
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
		func_56();
	}
	return 0;
}

void func_44()
{
	if (!func_45())
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

bool func_45()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_17())
	{
		return false;
	}
	if (func_46(UNK_0xD803B885F5E47A62()))
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

bool func_46(int iParam0)
{
	return func_47(iParam0, 20);
}

bool func_47(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

void func_48()
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

void func_49()
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

bool func_50()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_51()
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

void func_52()
{
	if (func_53(14))
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
		Global_19486 = func_127();
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

bool func_53(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_54()
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

bool func_55(bool bParam0, int iParam1)
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

void func_56()
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

void func_57(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_58()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
	{
		UNK_0xA3BF0AA5A2608191(bLocal_62);
		UNK_0xF3268524E9BE6D6E(bLocal_62, UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
		UNK_0xFADC0A217229F6B5(bLocal_62, true);
		if (UNK_0xC844350D5D58C99A(bLocal_64))
		{
			UNK_0xF690C84DADBB3551(&bLocal_64);
		}
		SYSTEM::WAIT(0);
		if (UNK_0xE4EDC4B0E92C078B(iLocal_65))
		{
			UNK_0x142CC44DB769B57E(&iLocal_65);
		}
		UNK_0x6DAD7906B73F064D(&bLocal_62);
	}
	if (UNK_0xEB6A8945D1AC98A1(bLocal_63) || UNK_0xEB6A8945D1AC98A1(bLocal_62))
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_66))
		{
			UNK_0x142CC44DB769B57E(&iLocal_66);
		}
		if (UNK_0xE4EDC4B0E92C078B(iLocal_65))
		{
			UNK_0x142CC44DB769B57E(&iLocal_65);
		}
		if (UNK_0x762119754C50557A(iLocal_191))
		{
			if (UNK_0x797C48AACDB248B0(iLocal_191))
			{
				bLocal_56 = true;
				func_139();
			}
			else
			{
				func_147(0);
				func_280();
			}
		}
		else
		{
			func_280();
		}
	}
}

void func_59()
{
	bool bVar0;

	func_139();
	if (UNK_0x762119754C50557A(iLocal_191))
	{
		if (UNK_0x797C48AACDB248B0(iLocal_191))
		{
		}
	}
	if (iLocal_143 == 1)
	{
		if (!bLocal_51)
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
			{
				UNK_0xA3BF0AA5A2608191(bLocal_63);
				UNK_0x6C3AE6E278DB3D0E(bLocal_63, UNK_0x16F2683693E537C9(), 0, 16);
				UNK_0xFADC0A217229F6B5(bLocal_63, true);
			}
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
			{
				if (UNK_0x762119754C50557A(iLocal_191))
				{
					if (UNK_0x797C48AACDB248B0(iLocal_191))
					{
						UNK_0xA3BF0AA5A2608191(bLocal_62);
						UNK_0xDD353D0E9C789D0E(&iLocal_121);
						UNK_0x96167B03C5A77156(false, UNK_0xE925E52ACABA4CE7(iLocal_191), 1f, 20000, 0.25f, 0, 1193033728);
						UNK_0x75ABDC5F81978924(iLocal_121);
						UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
						UNK_0xF82EA857DA10E0CD(&iLocal_121);
					}
				}
			}
			bLocal_51 = true;
		}
	}
	if (iLocal_143 == 2)
	{
		if (!bLocal_51)
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
			{
				UNK_0xA3BF0AA5A2608191(bLocal_63);
				UNK_0x6C3AE6E278DB3D0E(bLocal_63, UNK_0x16F2683693E537C9(), 0, 16);
				UNK_0xFADC0A217229F6B5(bLocal_63, true);
				UNK_0xE8832A9E16A57A1F(bLocal_63, false, 1);
				UNK_0x6DAD7906B73F064D(&bLocal_63);
			}
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
			{
				if (UNK_0x762119754C50557A(iLocal_191))
				{
					if (UNK_0x797C48AACDB248B0(iLocal_191))
					{
						if (UNK_0x5A91F08DF773C39D(bLocal_62, UNK_0xE925E52ACABA4CE7(iLocal_191), 10f, 10f, 10f, false, true, 0))
						{
							if (bLocal_90 == 3)
							{
								if ((!UNK_0xB4ECF989E2C1DAC8(bLocal_62, bLocal_359, "handsup_standing_enter", 3) && !UNK_0xB4ECF989E2C1DAC8(bLocal_62, bLocal_359, "handsup_standing_base", 3)) && !UNK_0xB4ECF989E2C1DAC8(bLocal_62, bLocal_359, "handsup_standing_exit", 3))
								{
									UNK_0xA3BF0AA5A2608191(bLocal_62);
									UNK_0xDD353D0E9C789D0E(&iLocal_121);
									UNK_0x96167B03C5A77156(false, UNK_0xE925E52ACABA4CE7(iLocal_191), 1f, 20000, 0.25f, 0, 1193033728);
									UNK_0x75ABDC5F81978924(iLocal_121);
									UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
									UNK_0xF82EA857DA10E0CD(&iLocal_121);
									bLocal_51 = true;
								}
							}
							else if ((!UNK_0xB4ECF989E2C1DAC8(bLocal_62, bLocal_359, bLocal_370, 3) && !UNK_0xB4ECF989E2C1DAC8(bLocal_62, bLocal_359, bLocal_366, 3)) && !UNK_0xB4ECF989E2C1DAC8(bLocal_62, bLocal_359, bLocal_368, 3))
							{
								UNK_0xA3BF0AA5A2608191(bLocal_62);
								UNK_0xDD353D0E9C789D0E(&iLocal_121);
								UNK_0x96167B03C5A77156(false, UNK_0xE925E52ACABA4CE7(iLocal_191), 1f, 20000, 0.25f, 0, 1193033728);
								UNK_0x75ABDC5F81978924(iLocal_121);
								UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
								UNK_0xF82EA857DA10E0CD(&iLocal_121);
								bLocal_51 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					if (bLocal_90 == 3)
					{
						if ((!UNK_0xB4ECF989E2C1DAC8(bLocal_62, bLocal_359, "handsup_standing_enter", 3) && !UNK_0xB4ECF989E2C1DAC8(bLocal_62, bLocal_359, "handsup_standing_base", 3)) && !UNK_0xB4ECF989E2C1DAC8(bLocal_62, bLocal_359, "handsup_standing_exit", 3))
						{
							UNK_0xA3BF0AA5A2608191(bLocal_62);
							UNK_0xF3268524E9BE6D6E(bLocal_62, UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
							UNK_0xFADC0A217229F6B5(bLocal_62, true);
							if (UNK_0xE4EDC4B0E92C078B(iLocal_65))
							{
								UNK_0x142CC44DB769B57E(&iLocal_65);
							}
							UNK_0x6DAD7906B73F064D(&bLocal_62);
							bLocal_51 = true;
							iLocal_48 = 9;
						}
					}
					else if ((!UNK_0xB4ECF989E2C1DAC8(bLocal_62, bLocal_359, bLocal_370, 3) && !UNK_0xB4ECF989E2C1DAC8(bLocal_62, bLocal_359, bLocal_366, 3)) && !UNK_0xB4ECF989E2C1DAC8(bLocal_62, bLocal_359, bLocal_368, 3))
					{
						UNK_0xA3BF0AA5A2608191(bLocal_62);
						UNK_0xF3268524E9BE6D6E(bLocal_62, UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
						UNK_0xFADC0A217229F6B5(bLocal_62, true);
						if (UNK_0xE4EDC4B0E92C078B(iLocal_65))
						{
							UNK_0x142CC44DB769B57E(&iLocal_65);
						}
						UNK_0x6DAD7906B73F064D(&bLocal_62);
						bLocal_51 = true;
						iLocal_48 = 9;
					}
				}
			}
		}
	}
	if (iLocal_143 == 3)
	{
		if (!bLocal_51)
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
			{
				UNK_0xA3BF0AA5A2608191(bLocal_63);
				UNK_0xF3268524E9BE6D6E(bLocal_63, UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
				UNK_0xFADC0A217229F6B5(bLocal_63, true);
				UNK_0xE8832A9E16A57A1F(bLocal_63, false, 1);
				UNK_0x6DAD7906B73F064D(&bLocal_63);
			}
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
			{
				UNK_0xA3BF0AA5A2608191(bLocal_62);
				UNK_0xF3268524E9BE6D6E(bLocal_62, UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
				UNK_0xFADC0A217229F6B5(bLocal_62, true);
				UNK_0x6DAD7906B73F064D(&bLocal_62);
			}
			bLocal_56 = true;
			bLocal_51 = true;
		}
	}
	if (iLocal_143 == 1 || iLocal_143 == 2)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
		{
			if (bLocal_51)
			{
				if (UNK_0x762119754C50557A(iLocal_191))
				{
					if (UNK_0x797C48AACDB248B0(iLocal_191))
					{
						if (UNK_0xB4ECF989E2C1DAC8(bLocal_62, bLocal_360, "pickup_low", 3))
						{
							if (UNK_0x8CA9406E01C7EE58(bLocal_62, bLocal_360, "pickup_low") > 0.5f)
							{
								if (UNK_0x762119754C50557A(iLocal_191))
								{
									if (UNK_0x797C48AACDB248B0(iLocal_191))
									{
										func_42(&uLocal_194, cLocal_103, sLocal_109, 4, 0, 0, 0);
										UNK_0x40B7230FD4C59AA2(iLocal_191);
										bLocal_52 = true;
									}
								}
							}
						}
						else if (UNK_0xD1960163A3042274(bLocal_62, 242628503) == 7)
						{
							UNK_0xA3BF0AA5A2608191(bLocal_62);
							UNK_0xDD353D0E9C789D0E(&iLocal_121);
							UNK_0xC6EB89C59F2AF6B8(false, bLocal_360, "pickup_low", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
							UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
							UNK_0x75ABDC5F81978924(iLocal_121);
							UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
							UNK_0xF82EA857DA10E0CD(&iLocal_121);
							UNK_0xFADC0A217229F6B5(bLocal_62, true);
						}
					}
					else if (bLocal_52)
					{
						UNK_0x6D80F1AEBA734886(bLocal_62, bLocal_192);
						UNK_0x6DAD7906B73F064D(&bLocal_62);
						func_204(3);
						func_199();
					}
					else
					{
						UNK_0xF3268524E9BE6D6E(bLocal_62, UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
						UNK_0xFADC0A217229F6B5(bLocal_62, true);
						if (UNK_0xE4EDC4B0E92C078B(iLocal_65))
						{
							UNK_0x142CC44DB769B57E(&iLocal_65);
						}
						UNK_0x6DAD7906B73F064D(&bLocal_62);
						bLocal_51 = true;
						iLocal_48 = 12;
					}
				}
				else if (bLocal_52)
				{
					UNK_0x6D80F1AEBA734886(bLocal_62, bLocal_192);
					UNK_0x6DAD7906B73F064D(&bLocal_62);
					func_204(3);
					func_199();
				}
				else
				{
					UNK_0xF3268524E9BE6D6E(bLocal_62, UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
					UNK_0xFADC0A217229F6B5(bLocal_62, true);
					if (UNK_0xE4EDC4B0E92C078B(iLocal_65))
					{
						UNK_0x142CC44DB769B57E(&iLocal_65);
					}
					UNK_0x6DAD7906B73F064D(&bLocal_62);
					bLocal_51 = true;
					iLocal_48 = 12;
				}
			}
		}
		else
		{
			iLocal_48 = 9;
		}
	}
}

void func_60()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
	{
		UNK_0xA3BF0AA5A2608191(bLocal_62);
		UNK_0xF3268524E9BE6D6E(bLocal_62, UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
		UNK_0xFADC0A217229F6B5(bLocal_62, true);
		UNK_0x6DAD7906B73F064D(&bLocal_62);
	}
}

void func_61()
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	struct<2> Var7;
	vector3 vVar10;
	float fVar13;
	float fVar14;
	vector3 vVar15;
	int iVar18;
	bool bVar19;

	if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
	{
		if (!bLocal_152)
		{
			if (bLocal_153)
			{
				vVar15 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
				iVar18 = 1;
				if (bLocal_90 == 1)
				{
					if (vVar15.z > 33.5f)
					{
						iVar18 = 0;
					}
				}
				if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_62, 5f, 5f, 5f, 0, 1, 0) && iVar18 == 1)
				{
					if (func_124(2))
					{
						UNK_0xA37A90C62806D848(1);
					}
					if (UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
					{
						if (func_123(1, 0, 1))
						{
							if (!func_122())
							{
								if (!UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()))
								{
									func_114(1, 1, 1, 0, 0, 0);
									if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
									{
										while (!func_112(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), fLocal_77, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0) || func_167())
										{
											UNK_0x3FC8DBCC154CA56B();
											SYSTEM::WAIT(0);
										}
										if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
										{
											UNK_0x75CDA8644CD3B5F5(UNK_0x16F2683693E537C9(), 0, 0);
										}
									}
									UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
									{
										UNK_0x46CB381A452EF99D(bLocal_62, 0);
									}
									UNK_0x3FC8DBCC154CA56B();
									UNK_0x68F065432F4692FB(0);
									UNK_0x850CF499433B183D(iLocal_141);
									if (UNK_0x25037C66EB32B076())
									{
										func_110();
									}
									bLocal_152 = true;
									SYSTEM::SETTIMERA(0);
								}
							}
						}
					}
				}
				else
				{
					func_108(UNK_0x68F4C0EC296D3901(bLocal_62, true), &uLocal_76, &fLocal_77);
				}
			}
			else if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_62, 15f, 15f, 15f, 0, 1, 0))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_121);
				UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
				UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2048, 2);
				if (iLocal_47 == 2)
				{
					UNK_0xC6EB89C59F2AF6B8(false, bLocal_377, "RETURNING_FRONT_A", 8f, -1000f, -1, 0, false, 0, 0, 0);
				}
				UNK_0x75ABDC5F81978924(iLocal_121);
				UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
				UNK_0xF82EA857DA10E0CD(&iLocal_121);
				UNK_0xBD453909DC26A85D(bLocal_62, joaat("MOTIONSTATE_WALK"), false, 0, 0);
				bLocal_153 = true;
			}
		}
		if (bLocal_152)
		{
			switch (iLocal_151)
			{
				case 0:
					UNK_0x3FC8DBCC154CA56B();
					if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
						{
							func_105(bLocal_62, &vLocal_125, &vLocal_128, bLocal_361, bLocal_363);
							if (bLocal_90 == 1)
							{
								if (vLocal_128.z > 225f && vLocal_128.z < 265f)
								{
									if (vLocal_128.z < 245f)
									{
										vLocal_128.f_2 = 225f;
									}
									else
									{
										vLocal_128.f_2 = 265f;
									}
								}
								else if (vLocal_128.z > 45f && vLocal_128.z < 85f)
								{
									if (vLocal_128.z < 65f)
									{
										vLocal_128.f_2 = 45f;
									}
									else
									{
										vLocal_128.f_2 = 85f;
									}
								}
							}
							vLocal_125.f_2 = (vLocal_125.z + 2f);
							UNK_0xE82754C349C7B581(vLocal_125, &(vLocal_125.f_2), 0, 0);
							vVar1 = { UNK_0x1BB04F10296A1C5E(bLocal_361, bLocal_363, vLocal_125, vLocal_128, 0f, 2) };
							vVar10 = { vVar1 - vLocal_125 };
							vVar10.f_2 = 0f;
							fVar13 = SYSTEM::VMAG(vVar10);
							UNK_0xE82754C349C7B581(vVar1, &(vVar1.f_2), 0, 0);
							fVar14 = (vLocal_125.z - vVar1.z);
							vLocal_128.x = UNK_0x5D8ABF6396A76564(fVar14, fVar13);
							if (vLocal_128.x > 30f || vLocal_128.x < -30f)
							{
								vLocal_128.x = 0f;
							}
						}
						if (UNK_0xDF1306B443CD3D15(UNK_0x728870EB733D12A1(), 0))
						{
							if (!UNK_0xDF1306B443CD3D15(bVar0, 0))
							{
								bVar0 = UNK_0x728870EB733D12A1();
								UNK_0xA6B02C1DB14DDA13(UNK_0x134B62B726CEC8E6(bVar0), &uVar4, &Var7);
								if (UNK_0x5A91F08DF773C39D(bVar0, vLocal_125, (Var7.f_1 + 1.5f), (Var7.f_1 + 1.5f), 3f, false, true, 0) || UNK_0x5A91F08DF773C39D(bVar0, UNK_0x1BB04F10296A1C5E(bLocal_361, bLocal_363, vLocal_125, vLocal_128, false, 2), (Var7.f_1 + 1f), (Var7.f_1 + 1f), 3f, false, true, 0))
								{
									if (bLocal_90 == 1)
									{
										if (vLocal_128.z > 40f && vLocal_128.z < 220f)
										{
											vLocal_80 = { -148.3897f, -1647.215f, 31.5867f };
											bLocal_79 = 331.9427f;
										}
										else
										{
											vLocal_80 = { -129.5632f, -1622.282f, 31.1122f };
											bLocal_79 = 148.9075f;
										}
									}
									else if (bLocal_90 == 3)
									{
										if (vLocal_128.z > 160f && vLocal_128.z < 340f)
										{
											vLocal_80 = { -319.709f, -837.0066f, 30.449f };
											bLocal_79 = 61.7986f;
										}
										else
										{
											vLocal_80 = { -346.8735f, -833.8024f, 30.4135f };
											bLocal_79 = 269.6216f;
										}
									}
									else if (bLocal_90 == 4)
									{
										if (vLocal_128.z > 240f || vLocal_128.z < 60f)
										{
											vLocal_80 = { 37.222f, -1005.04f, 28.4648f };
											bLocal_79 = 156.7986f;
										}
										else
										{
											vLocal_80 = { 29.9887f, -1033.184f, 28.3794f };
											bLocal_79 = 344.6216f;
										}
									}
									else
									{
										bLocal_79 = UNK_0xD9522BA9E27E1349(bVar0);
										vLocal_80 = { func_103(vLocal_125, UNK_0x1BB04F10296A1C5E(bLocal_361, bLocal_363, vLocal_125, vLocal_128, false, 2)) };
									}
									if (UNK_0xDF1306B443CD3D15(bVar0, 0))
									{
										UNK_0xA47B46945FF6DE74(bVar0, vLocal_80, 1, 0, 0, 1);
										UNK_0xD8F6A53F4799FAFE(bVar0, bLocal_79);
										UNK_0xB9FD7450C0DAB575(bVar0, 1084227584 /* Float: 5f */);
										UNK_0x05CA0E7946B27A19(bVar0, 1);
									}
								}
							}
						}
						UNK_0x75CFD6AD66ADFDD1(vLocal_125, 20f, 2);
						UNK_0x679C321F8CAA2CFA(vLocal_125, 20f, 0);
						UNK_0x536F1BE96C726C4B(vLocal_125, 2f, 1, 1, 0, false);
						UNK_0x6C5B8C4234CEA349(UNK_0x16F2683693E537C9(), true);
						bLocal_64 = UNK_0x7707E48765093646(bLocal_85, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), true, true, false);
						if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
						{
							UNK_0x9F528B1B53FBC5D9(bLocal_64, UNK_0x16F2683693E537C9(), UNK_0x4A089F2B762B8D33(UNK_0x16F2683693E537C9(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						}
						iLocal_131 = UNK_0xE9744DB7B8CA6965(vLocal_125, vLocal_128, 2);
						UNK_0xEFC3DF9D33E248D8(iLocal_131, false);
						iLocal_132 = UNK_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", false);
						UNK_0x93E9ED66DAB9FBE3(iLocal_132, iLocal_131, bLocal_364, bLocal_361);
						UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
						UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), iLocal_131, bLocal_361, bLocal_362, 1000f, -8f, 0, 0, 1148846080, 0);
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
						{
							UNK_0x327AAEE25F323797(bLocal_62);
							UNK_0x915804B434753CBD(bLocal_62, iLocal_131, bLocal_361, bLocal_363, 1000f, -8f, 0, 0, 1148846080, 0);
						}
						UNK_0xE3BB8E05FCEB3FBE(iLocal_132, true);
						UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
						func_42(&uLocal_194, cLocal_103, sLocal_115, 4, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
						iLocal_151++;
					}
					UNK_0x3FC8DBCC154CA56B();
					break;
				case 1:
					if ((UNK_0x69DF961355195C3C(iLocal_131) && UNK_0xA45992A6CE82FB43(iLocal_131) > 0.9f) || func_101(1000))
					{
						UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
						UNK_0x2FB9A57162E54BAB(0f);
						UNK_0xE3BB8E05FCEB3FBE(iLocal_132, false);
						UNK_0x9A8DDC7C522F5BF5(iLocal_132, 0);
						func_100();
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
						{
							UNK_0x327AAEE25F323797(bLocal_62);
							UNK_0x6D80F1AEBA734886(bLocal_62, (bLocal_192 - (bLocal_192 / 10)));
							vVar1 = { UNK_0x1BB04F10296A1C5E(bLocal_361, bLocal_363, vLocal_125, vLocal_128, 1f, 2) };
							UNK_0xE82754C349C7B581(vVar1, &(vVar1.f_2), 0, 0);
							UNK_0xA47B46945FF6DE74(bLocal_62, vVar1, 1, 0, 0, 1);
							UNK_0x11AD11297DC58CC7(bLocal_62, false);
							vVar1 = { UNK_0xEEB20D14BD38615E(bLocal_361, bLocal_363, vLocal_125, vLocal_128, 1f, 2) };
							UNK_0xD8F6A53F4799FAFE(bLocal_62, vVar1.z);
							if (bLocal_90 == 4)
							{
								if (func_99(vVar1.z, 0f, 90f))
								{
									UNK_0xDD353D0E9C789D0E(&iLocal_121);
									UNK_0x96167B03C5A77156(false, 38.2412f, -992.2134f, 28.4317f, 1f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
									UNK_0x01E4BB5190DF7317(false, UNK_0xD9522BA9E27E1349(bLocal_62), 1);
									UNK_0x75ABDC5F81978924(iLocal_121);
									UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
									UNK_0xF82EA857DA10E0CD(&iLocal_121);
								}
								else
								{
									UNK_0xDD353D0E9C789D0E(&iLocal_121);
									UNK_0x96167B03C5A77156(false, 58.803f, -1067.711f, 28.4411f, 1f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
									UNK_0x01E4BB5190DF7317(false, UNK_0xD9522BA9E27E1349(bLocal_62), 1);
									UNK_0x75ABDC5F81978924(iLocal_121);
									UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
									UNK_0xF82EA857DA10E0CD(&iLocal_121);
								}
							}
							else
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_121);
								UNK_0x01E4BB5190DF7317(false, vVar1.z, 1);
								UNK_0x75ABDC5F81978924(iLocal_121);
								UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
								UNK_0xF82EA857DA10E0CD(&iLocal_121);
							}
							UNK_0x79C43E2BAC7C696F(bLocal_62, bLocal_378, 1048576000 /* Float: 0.25f */);
							UNK_0xBD453909DC26A85D(bLocal_62, joaat("MOTIONSTATE_WALK"), true, 0, 0);
							UNK_0xFADC0A217229F6B5(bLocal_62, true);
						}
						if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
						{
							UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
							UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
						}
						if (UNK_0xC844350D5D58C99A(bLocal_64))
						{
							UNK_0xF690C84DADBB3551(&bLocal_64);
						}
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
						{
							UNK_0x6D80F1AEBA734886(bLocal_62, (bLocal_192 - (bLocal_192 / 10)));
							UNK_0x46CB381A452EF99D(bLocal_62, 1);
						}
						bVar19 = (bLocal_192 / 100);
						bVar19 *= 90;
						SYSTEM::WAIT(0);
						UNK_0x04B065D07D2FB5B9(0, 0, 3, 0);
						func_64(func_127(), 1, bVar19);
						func_63(joaat("RC_WALLETS_RETURNED"), 1);
						func_204(3);
						func_199();
					}
					else if (UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), joaat("DETACH")))
					{
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_62) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
						{
							if (UNK_0x50B5F6F3C29E9380(bLocal_64, UNK_0x16F2683693E537C9()))
							{
								UNK_0x15AFB6CBDE990FB6(bLocal_64, 0, true);
								if (UNK_0xCED082ADD3739B9F(bLocal_62))
								{
									UNK_0x9F528B1B53FBC5D9(bLocal_64, bLocal_62, UNK_0x4A089F2B762B8D33(bLocal_62, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								else
								{
									UNK_0x9F528B1B53FBC5D9(bLocal_64, bLocal_62, UNK_0x4A089F2B762B8D33(bLocal_62, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								if (!bLocal_61)
								{
									if (func_42(&uLocal_194, cLocal_103, sLocal_109, 4, 0, 0, 0) || func_62())
									{
										bLocal_61 = true;
									}
								}
							}
						}
					}
					else if (!bLocal_61)
					{
						if (func_42(&uLocal_194, cLocal_103, sLocal_109, 4, 0, 0, 0) || func_62())
						{
							bLocal_61 = true;
						}
					}
					UNK_0x3FC8DBCC154CA56B();
					break;
			}
		}
	}
	else
	{
		func_280();
	}
}

int func_62()
{
	if (Global_20805 == 4)
	{
		if (UNK_0x1EE04CEA36EF313B())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_63(int iParam0, bool bParam1)
{
	bool bVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + bParam1);
	UNK_0xCDC520E5E48E63D9(iParam0, bVar0, 1);
}

int func_64(int iParam0, int iParam1, bool bParam2)
{
	if (func_98(iParam0) == 3)
	{
		return 0;
	}
	if (func_98(iParam0) == 4)
	{
		return 0;
	}
	return func_65(func_98(iParam0), 0, iParam1, bParam2, 0);
}

int func_65(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	func_97();
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
					func_96(99, 1);
					func_63(joaat("SP0_MONEY_TOTAL_SPENT"), bParam3);
					break;
				case 1:
					func_63(joaat("SP1_MONEY_TOTAL_SPENT"), bParam3);
					break;
				case 2:
					func_63(joaat("SP2_MONEY_TOTAL_SPENT"), bParam3);
					break;
			}
			func_81(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_76(5))
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
							func_63(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), bParam3);
							break;
						case 1:
							func_63(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), bParam3);
							break;
						case 2:
							func_63(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), bParam3);
							break;
					}
					if (func_76(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("SP0_MONEY_SPENT_ON_TAXIS"), bParam3);
							break;
						case 1:
							func_63(joaat("SP1_MONEY_SPENT_ON_TAXIS"), bParam3);
							break;
						case 2:
							func_63(joaat("SP2_MONEY_SPENT_ON_TAXIS"), bParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), bParam3);
							break;
						case 1:
							func_63(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), bParam3);
							break;
						case 2:
							func_63(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), bParam3);
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
							func_63(joaat("SP0_MONEY_SPENT_PROPERTY"), bParam3);
							break;
						case 1:
							func_63(joaat("SP1_MONEY_SPENT_PROPERTY"), bParam3);
							break;
						case 2:
							func_63(joaat("SP2_MONEY_SPENT_PROPERTY"), bParam3);
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
									func_63(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), bParam3);
									break;
								case 1:
									func_63(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), bParam3);
									break;
								case 2:
									func_63(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), bParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), bParam3);
									break;
								case 1:
									func_63(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), bParam3);
									break;
								case 2:
									func_63(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), bParam3);
									break;
							}
							if (func_76(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), bParam3);
									break;
								case 1:
									func_63(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), bParam3);
									break;
								case 2:
									func_63(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), bParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("SP0_MONEY_SPENT_CAR_MODS"), bParam3);
									break;
								case 1:
									func_63(joaat("SP1_MONEY_SPENT_CAR_MODS"), bParam3);
									break;
								case 2:
									func_63(joaat("SP2_MONEY_SPENT_CAR_MODS"), bParam3);
									break;
							}
							func_75(bParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_96(95, bParam3);
					break;
				case 1:
					func_96(97, bParam3);
					break;
				case 2:
					func_96(96, bParam3);
					break;
			}
			func_96(98, bParam3);
			break;
	}
	iVar2 = iParam0;
	bParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(bParam3)));
	iVar3 = 0;
	bVar4 = bParam3;
	if (fVar0 == 0f)
	{
		func_68(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_68(bVar1);
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
					func_63(joaat("SP0_TOTAL_CASH_EARNED"), bParam3);
					break;
				case 1:
					func_63(joaat("SP1_TOTAL_CASH_EARNED"), bParam3);
					break;
				case 2:
					func_63(joaat("SP2_TOTAL_CASH_EARNED"), bParam3);
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
	func_67(iParam0);
	if (Global_41431 == 15)
	{
		func_66(0);
	}
	return 1;
}

void func_66(bool bParam0)
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

void func_67(int iParam0)
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

void func_68(bool bParam0)
{
	bool bVar0;
	char cVar1[64];

	if (bParam0 == 8)
	{
		func_74(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_74(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_74(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_74(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_71(8269, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_71(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_71(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_71(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_71(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_71(8274, 0, -1, 1, 0);
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
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0) || UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_70() /*10930*/].f_6174.f_10, bParam0))
	{
		bVar0 = true;
		UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		UNK_0x0674E58A79778E99(&(Global_2097152[func_70() /*10930*/].f_6174.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UNK_0x1E64CE678ED5F61E("COUP_RED");
		UNK_0x6B012227B3921E18(func_69(bParam0));
		UNK_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_69(bool bParam0)
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

int func_70()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_71(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_72(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_73();
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

int func_73()
{
	return Global_1312745;
}

int func_74(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_73();
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

void func_75(bool bParam0)
{
	func_96(93, bParam0);
	func_96(29, bParam0);
	func_96(30, bParam0);
}

bool func_76(bool bParam0)
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
		return func_78(129, -1, -1);
	}
	if (bParam0 == 9)
	{
		return func_78(135, -1, -1);
	}
	if (bParam0 == 10)
	{
		return func_78(136, -1, -1);
	}
	if (bParam0 == 11)
	{
		return func_78(137, -1, -1);
	}
	if (bParam0 == 12)
	{
		iVar0 = UNK_0xDD0E7998AE8AD485();
		iVar1 = func_77(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 13)
	{
		iVar2 = UNK_0xDD0E7998AE8AD485();
		iVar3 = func_77(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 14)
	{
		iVar4 = UNK_0xDD0E7998AE8AD485();
		iVar5 = func_77(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 15)
	{
		iVar6 = UNK_0xDD0E7998AE8AD485();
		iVar7 = func_77(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 16)
	{
		iVar8 = UNK_0xDD0E7998AE8AD485();
		iVar9 = func_77(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 17)
	{
		iVar10 = UNK_0xDD0E7998AE8AD485();
		iVar11 = func_77(8274, -1, 0);
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
	return UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_70() /*10930*/].f_6174.f_10, bParam0);
}

int func_77(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_72(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_78(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_73();
	}
	iVar1 = func_80(iParam0, bParam1);
	iVar2 = func_79(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_79(int iParam0)
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

int func_80(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_73();
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

int func_81(bool bParam0)
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
		func_95(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_82(27, 1);
	return 1;
}

int func_82(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_83(iParam0, iParam1);
}

int func_83(int iParam0, int iParam1)
{
	if (func_53(14) && !func_94(iParam0))
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
	if (func_93(&Global_4270065))
	{
		if (func_91(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_84(&Global_4270065, iParam0))
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

bool func_84(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_53(14) && !func_94(iParam1))
	{
		return false;
	}
	if (func_91(uParam0, iParam1))
	{
		return false;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	func_87(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_85(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_85(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_53(14) && !func_94(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_86(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_86(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_87(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_88(uParam0, iVar0);
		iVar0++;
	}
	func_89(uParam0, (Global_4270064 - 0.5f));
}

void func_88(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_89(var uParam0, float fParam1)
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

float func_90(var uParam0)
{
	return uParam0->f_80;
}

bool func_91(var uParam0, int iParam1)
{
	return func_92(uParam0, iParam1) != -1;
}

int func_92(var uParam0, int iParam1)
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

bool func_93(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_94(int iParam0)
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

int func_95(int iParam0, bool bParam1)
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

void func_96(int iParam0, bool bParam1)
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

void func_97()
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

int func_98(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

bool func_99(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;

	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return true;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return true;
	}
	return false;
}

void func_100()
{
	int iVar0;

	iVar0 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), UNK_0x68E4ADDDDCD7BDDE(UNK_0x16F2683693E537C9(), 0.5f, -1f, 0.5f), 0f, 0f, UNK_0xD9522BA9E27E1349(UNK_0x16F2683693E537C9()), 65f, 1, 2);
	UNK_0xE3BB8E05FCEB3FBE(iVar0, true);
}

bool func_101(int iParam0)
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
			if (func_102())
			{
				Global_27 = UNK_0x1C0640BA9A7327B3();
				return true;
			}
		}
	}
	return false;
}

bool func_102()
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

Vector3 func_103(vector3 vParam0, vector3 vParam3)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	var uVar19;
	vector3 vVar22;
	vector3 vVar25;
	var uVar28;
	int iVar29;

	iVar13 = 0;
	iVar14 = 1;
	bVar0 = UNK_0x728870EB733D12A1();
	if (!UNK_0xAF6690C489CC6203(bVar0))
	{
		UNK_0x73270B3C9CC833FD(bVar0, true, 0);
	}
	UNK_0xA6B02C1DB14DDA13(UNK_0x134B62B726CEC8E6(bVar0), &vVar7, &vVar10);
	UNK_0x4490D017C57827E9(vParam0, 3, &vVar4, 1, 3f, 0f);
	if (SYSTEM::VDIST(vParam0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		vVar1 = { -3045.49f, 604.46f, 7.02f };
		iVar13 = 8;
	}
	else if (SYSTEM::VDIST(vParam0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		vVar1 = { 278.97f, -1255.06f, 28.88f };
		iVar13 = 8;
	}
	while (iVar13 < 8)
	{
		switch (iVar13)
		{
			case 0:
				if (SYSTEM::VDIST(vVar4, UNK_0x68E4ADDDDCD7BDDE(bVar0, 0f, (vVar10.y + IntToFloat(iVar14)), 0f)) < SYSTEM::VDIST(vVar4, UNK_0x68E4ADDDDCD7BDDE(bVar0, 0f, -(vVar10.y + IntToFloat(iVar14)), 0f)))
				{
					vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bVar0, 0f, (vVar10.y + IntToFloat(iVar14)), 0f) };
				}
				else
				{
					vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bVar0, 0f, -(vVar10.y + IntToFloat(iVar14)), 0f) };
				}
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					if (!UNK_0x437347B10A200C4B(bVar0, 0))
					{
						vVar22 = { func_104(vVar1, 0f, vVar10) };
						vVar25 = { func_104(vVar1, 0f, vVar7) };
						iVar29 = UNK_0xCD02F8660C47B801(vVar22, vVar25, 511, bVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			case 1:
				if (UNK_0x1EC301670B54C6DE(iVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else if (UNK_0x0EB28750412C3A5A(vVar1, vParam0, 1) <= 5f || UNK_0x0EB28750412C3A5A(vVar1, vParam3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			case 2:
				if (SYSTEM::VDIST(vVar4, UNK_0x68E4ADDDDCD7BDDE(bVar0, 0f, (vVar10.y - IntToFloat(iVar14)), 0f)) < SYSTEM::VDIST(vVar4, UNK_0x68E4ADDDDCD7BDDE(bVar0, 0f, -(vVar10.y - IntToFloat(iVar14)), 0f)))
				{
					vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bVar0, 0f, (vVar10.y - IntToFloat(iVar14)), 0f) };
				}
				else
				{
					vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bVar0, 0f, -(vVar10.y - IntToFloat(iVar14)), 0f) };
				}
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					if (!UNK_0x437347B10A200C4B(bVar0, 0))
					{
						vVar22 = { func_104(vVar1, 0f, vVar10) };
						vVar25 = { func_104(vVar1, 0f, vVar7) };
						iVar29 = UNK_0xCD02F8660C47B801(vVar22, vVar25, 511, bVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			case 3:
				if (UNK_0x1EC301670B54C6DE(iVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else if (UNK_0x0EB28750412C3A5A(vVar1, vParam0, 1) <= 5f || UNK_0x0EB28750412C3A5A(vVar1, vParam3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			case 4:
				if (SYSTEM::VDIST(vVar4, UNK_0x68E4ADDDDCD7BDDE(bVar0, (vVar10.x + IntToFloat(iVar14)), 0f, 0f)) < SYSTEM::VDIST(vVar4, UNK_0x68E4ADDDDCD7BDDE(bVar0, -(vVar10.x + IntToFloat(iVar14)), 0f, 0f)))
				{
					vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bVar0, (vVar10.x + IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bVar0, -(vVar10.x + IntToFloat(iVar14)), 0f, 0f) };
				}
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					if (!UNK_0x437347B10A200C4B(bVar0, 0))
					{
						vVar22 = { func_104(vVar1, 0f, vVar10) };
						vVar25 = { func_104(vVar1, 0f, vVar7) };
						iVar29 = UNK_0xCD02F8660C47B801(vVar22, vVar25, 511, bVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			case 5:
				if (UNK_0x1EC301670B54C6DE(iVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else if (UNK_0x0EB28750412C3A5A(vVar1, vParam0, 1) <= 5f || UNK_0x0EB28750412C3A5A(vVar1, vParam3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			case 6:
				if (SYSTEM::VDIST(vVar4, UNK_0x68E4ADDDDCD7BDDE(bVar0, (vVar10.x - IntToFloat(iVar14)), 0f, 0f)) < SYSTEM::VDIST(vVar4, UNK_0x68E4ADDDDCD7BDDE(bVar0, -(vVar10.x - IntToFloat(iVar14)), 0f, 0f)))
				{
					vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bVar0, (vVar10.x - IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bVar0, -(vVar10.x - IntToFloat(iVar14)), 0f, 0f) };
				}
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					if (!UNK_0x437347B10A200C4B(bVar0, 0))
					{
						vVar22 = { func_104(vVar1, 0f, vVar10) };
						vVar25 = { func_104(vVar1, 0f, vVar7) };
						iVar29 = UNK_0xCD02F8660C47B801(vVar22, vVar25, 511, bVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			case 7:
				if (UNK_0x1EC301670B54C6DE(iVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else if (UNK_0x0EB28750412C3A5A(vVar1, vParam0, 1) <= 5f || UNK_0x0EB28750412C3A5A(vVar1, vParam3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			case 8:
				break;
		}
		SYSTEM::WAIT(0);
	}
	return vVar1;
}

Vector3 func_104(vector3 vParam0, float fParam3, struct<2> Param4, var uParam6)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;

	fVar3 = fParam3;
	fVar4 = SYSTEM::COS(fVar3);
	fVar5 = SYSTEM::SIN(fVar3);
	vVar0.x = ((Param4 * fVar4) + (Param4.f_1 * fVar5));
	vVar0.f_1 = ((Param4.f_1 * fVar4) - (Param4 * fVar5));
	vVar6 = { vParam0 + vVar0 };
	return vVar6;
}

void func_105(bool bParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	var uVar19;

	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
	fParam2->f_2 = func_107(bParam0, UNK_0x16F2683693E537C9(), 1);
	fVar3 = func_107(bParam0, UNK_0x16F2683693E537C9(), 1);
	bVar4 = func_107(bParam0, UNK_0x16F2683693E537C9(), 1);
	vVar16 = { UNK_0x68F4C0EC296D3901(bParam0, false) - UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
	if (UNK_0xB4AE0788C1587752(bParam3))
	{
		vVar13 = { UNK_0x1BB04F10296A1C5E(bParam3, bParam4, *uParam1, *fParam2, false, 2) };
	}
	else
	{
		vVar13 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					fParam2->f_2 = func_106(UNK_0x68F4C0EC296D3901(bParam0, false), *uParam1, 1);
					*uParam1 = { UNK_0x8A5E176FF719A014(UNK_0x68F4C0EC296D3901(bParam0, false), fParam2->f_2, vVar16) };
					iVar0 = 2;
				}
				else
				{
					iVar5 = UNK_0x6D4C9F7CF124AE37(*uParam1, vVar13 + Vector(-1f, 0f, 0f), 0.5f, 17, false, 4);
					iVar0++;
				}
				break;
			case 1:
				if (UNK_0x1EC301670B54C6DE(iVar5, &iVar6, &vVar10, &uVar7, &uVar19) == 2)
				{
					if (iVar6 != 0)
					{
						if (vVar10.z > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								bVar4 = (bVar4 + 7.5f);
							}
							else
							{
								bVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { UNK_0x8A5E176FF719A014(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), bVar4, vVar16) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							fParam2->f_2 = func_106(vVar13 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			case 2:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

float func_106(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

float func_107(bool bParam0, bool bParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, false) };
	return func_106(vVar0, vVar3, iParam2);
}

void func_108(vector3 vParam0, var uParam3, var uParam4)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;

	bVar0 = false;
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) - vParam0 };
		iVar4 = UNK_0xE7D606C557C86100(vVar1.x, vVar1.y);
		if (func_109(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), iVar4, 15f))
		{
			bVar0 = true;
		}
		vVar1 = { vParam0 - UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		iVar4 = UNK_0xE7D606C557C86100(vVar1.x, vVar1.y);
		if (func_109(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), iVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) > 30f)
		{
			*uParam3 = (6f * 4f);
		}
		else if (UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) > 20f)
		{
			*uParam3 = (6f * 3f);
		}
		else if (UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) > 10f)
		{
			*uParam3 = (6f * 2f);
		}
		else
		{
			*uParam3 = 6f;
		}
		*uParam4 = ((*uParam3 / 1.33f) - 1f);
	}
	else
	{
		*uParam3 = 6f;
		*uParam4 = ((*uParam3 / 1.33f) - 1f);
	}
}

bool func_109(bool bParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		fVar0 = UNK_0xD9522BA9E27E1349(bParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return true;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return true;
		}
	}
	return false;
}

void func_110()
{
	Global_19671 = 0;
	func_111();
}

void func_111()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

bool func_112(bool bParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_113(bParam0);
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

void func_113(bool bParam0)
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

void func_114(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_121(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_50())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_120(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_121(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_120(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_118(UNK_0xD803B885F5E47A62())) && !func_116(UNK_0xD803B885F5E47A62(), 0)) && !func_115()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_118(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_115()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_116(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_117(-1, 0) == 8;
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

int func_117(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_73();
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

bool func_118(bool bParam0)
{
	if (func_116(bParam0, 0))
	{
		return true;
	}
	if (func_119())
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

bool func_119()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_120(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

void func_121(int iParam0)
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

bool func_122()
{
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (func_167())
		{
			return true;
		}
	}
	return false;
}

bool func_123(bool bParam0, bool bParam1, bool bParam2)
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

bool func_124(int iParam0)
{
	return func_36(func_125(iParam0));
}

bool func_125(int iParam0)
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

int func_126(int iParam0)
{
	var uVar0;

	switch (iParam0)
	{
		case 0:
			UNK_0x6FB46C25CCB7E6D5(joaat("SP0_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		case 1:
			UNK_0x6FB46C25CCB7E6D5(joaat("SP1_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		case 2:
			UNK_0x6FB46C25CCB7E6D5(joaat("SP2_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		default:
			break;
	}
	return 0;
}

int func_127()
{
	func_128();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_128()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_131(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_130(UNK_0x16F2683693E537C9());
			if (func_129(iVar0) && (!func_53(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_129(Global_111638.f_2358.f_539.f_4321))
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

bool func_129(int iParam0)
{
	return iParam0 < 3;
}

int func_130(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_131(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_131(int iParam0)
{
	if (func_129(iParam0))
	{
		return func_132(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_132(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_133()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
	{
		UNK_0xF3268524E9BE6D6E(bLocal_62, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
		UNK_0xFADC0A217229F6B5(bLocal_62, true);
		SYSTEM::WAIT(0);
	}
}

bool func_134()
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { 3f, 3f, 3f };
	vVar3 = { -3f, -3f, -3f };
	if (UNK_0xEB6A8945D1AC98A1(bLocal_62))
	{
		return true;
	}
	else
	{
		if (UNK_0xB87D13D0C064E9D1(bLocal_62, UNK_0x16F2683693E537C9(), 1))
		{
			return true;
		}
		if (UNK_0xD3DCEC81D13AAFB1(UNK_0x64430C979F516F7A(bLocal_62, 31086, 0f, 0f, 0f), 5f, true))
		{
			return true;
		}
		vVar0 = { vVar0 + UNK_0x64430C979F516F7A(bLocal_62, 31086, 0f, 0f, 0f) };
		vVar3 = { vVar3 + UNK_0x64430C979F516F7A(bLocal_62, 31086, 0f, 0f, 0f) };
		if ((UNK_0xBBE430A566D01EF3(vVar3, vVar0, joaat("WEAPON_SMOKEGRENADE"), 1) || UNK_0xBBE430A566D01EF3(vVar3, vVar0, joaat("WEAPON_GRENADE"), 1)) || UNK_0xBBE430A566D01EF3(vVar3, vVar0, joaat("WEAPON_STICKYBOMB"), 1))
		{
			return true;
		}
		if (UNK_0x8ADFEA7B4409B2F8(UNK_0x64430C979F516F7A(bLocal_62, 31086, 0f, 0f, 0f), 3f))
		{
			return true;
		}
	}
	return false;
}

void func_135()
{
	if (!UNK_0x437347B10A200C4B(bLocal_62, 0))
	{
		if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_62, true)) > (fLocal_165 + 50f))
		{
			func_199();
		}
		else if (func_126(func_127()) < bLocal_192)
		{
			func_199();
		}
	}
}

void func_136()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
	{
		if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_62, Global_19, 0, 1, 0))
		{
			UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), bLocal_62, 3000, 0, 2);
			UNK_0x0C8C0C840C2D1AD2(bLocal_62, UNK_0x16F2683693E537C9(), 3000, 0, 2);
		}
	}
}

void func_137()
{
	bool bVar0;

	if (bLocal_90 == 1)
	{
		bVar0 = 13f;
	}
	if (bLocal_90 == 4)
	{
		bVar0 = 5.75f;
	}
	if (bLocal_90 == 1 || bLocal_90 == 4)
	{
		if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vLocal_166, vLocal_169, bVar0, 0, true, 0))
		{
			if (!bLocal_157)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
				{
					UNK_0xF96A174EE26D7588(bLocal_62, UNK_0x16F2683693E537C9(), 0);
					bLocal_157 = true;
					bLocal_158 = false;
				}
			}
		}
		if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vLocal_172, vLocal_175, bVar0, 0, true, 0))
		{
			if (!bLocal_158)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
				{
					UNK_0xF96A174EE26D7588(bLocal_62, UNK_0x16F2683693E537C9(), 0);
					bLocal_158 = true;
					bLocal_157 = false;
				}
			}
		}
		if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vLocal_178, vLocal_181, bVar0, 0, true, 0))
		{
			if (!bLocal_159)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
				{
					bLocal_159 = true;
				}
			}
		}
	}
	if (!bLocal_160)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
		{
			if (UNK_0x12DE711B1C681E9E(bLocal_62, UNK_0x16F2683693E537C9(), 25f, 25f, 5f, 0, 1, 0) && UNK_0xF649DD3BF44195C7(bLocal_62, UNK_0x16F2683693E537C9(), 17))
			{
				if (func_42(&uLocal_194, cLocal_103, sLocal_108, 4, 0, 0, 0) || func_62())
				{
					if (!UNK_0xB4ECF989E2C1DAC8(bLocal_62, bLocal_359, "flee_forward_outro_shopkeeper", 3))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_121);
						UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
						if (iLocal_47 == 2)
						{
							UNK_0xC6EB89C59F2AF6B8(false, bLocal_377, "RETURNING_FRONT_A", 8f, -4f, -1, 0, false, 0, 0, 0);
						}
						UNK_0x75ABDC5F81978924(iLocal_121);
						UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
						UNK_0xF82EA857DA10E0CD(&iLocal_121);
						bLocal_160 = true;
					}
				}
			}
		}
	}
}

void func_138(bool bParam0, var uParam1)
{
	float fVar0;

	fVar0 = 65f;
	switch (*uParam1)
	{
		case 0:
			if (!UNK_0xEB6A8945D1AC98A1(bParam0))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_121);
				UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 0, 2);
				UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
				UNK_0x75ABDC5F81978924(iLocal_121);
				UNK_0x78ADC381772E3D54(bParam0, iLocal_121);
				UNK_0xF82EA857DA10E0CD(&iLocal_121);
				SYSTEM::SETTIMERA(0);
				*uParam1++;
			}
			break;
		case 1:
			if (!UNK_0xEB6A8945D1AC98A1(bParam0))
			{
				if (UNK_0x7069CC4DE1EA3FAA(bParam0, UNK_0x16F2683693E537C9(), fVar0))
				{
					*uParam1++;
				}
			}
			break;
		case 2:
			if (!UNK_0xEB6A8945D1AC98A1(bParam0))
			{
				if (!UNK_0x7069CC4DE1EA3FAA(bParam0, UNK_0x16F2683693E537C9(), fVar0))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_139()
{
	if (UNK_0xEB751B41BC4080D4(iLocal_191))
	{
		if (!UNK_0x437347B10A200C4B(bLocal_62, 0))
		{
			fLocal_165 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_62, true));
		}
		func_63(joaat("RC_WALLETS_RECOVERED"), 1);
		UNK_0x5E858A00EAFA5B24(0, 200, 250);
		if (UNK_0xC844350D5D58C99A(bLocal_64))
		{
			UNK_0xF690C84DADBB3551(&bLocal_64);
		}
		func_142();
		func_141(&uLocal_392);
		if (UNK_0xC844350D5D58C99A(bLocal_62))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
			{
				UNK_0xF4CB0B98F8F79D8D(bLocal_62, 0);
			}
		}
		func_147(0);
		UNK_0x40B7230FD4C59AA2(iLocal_191);
		if (!bLocal_56)
		{
			iLocal_48 = 5;
			func_140(2);
		}
		else
		{
			iLocal_48 = 12;
		}
	}
}

void func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_12(func_125(iParam0), -1);
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
					func_12(func_125(iParam0), -1);
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
					func_12(func_125(iParam0), -1);
					Global_111638.f_24990.f_4++;
					UNK_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_141(var uParam0)
{
	*uParam0 = -99;
}

void func_142()
{
	iLocal_67 = 0;
	if (!UNK_0xE4EDC4B0E92C078B(iLocal_65))
	{
		if (!UNK_0x437347B10A200C4B(bLocal_62, 0))
		{
			iLocal_65 = func_143(bLocal_62, 0, 0);
		}
	}
}

int func_143(bool bParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_144(bParam0, bParam1, 145);
}

int func_144(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_145(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_145(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_146(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_146(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_146(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_146(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_147(bool bParam0)
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_62) && bLocal_90 == 4)
	{
		if (UNK_0xB4ECF989E2C1DAC8(bLocal_62, bLocal_359, "flee_forward_loop_shopkeeper", 3))
		{
			UNK_0xDD353D0E9C789D0E(&iLocal_121);
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, false, 0, 0, 0);
			UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 0, 2);
			if (bParam0)
			{
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, false, 0, 0, 0);
			}
			UNK_0x75ABDC5F81978924(iLocal_121);
			UNK_0xA3BF0AA5A2608191(bLocal_62);
			UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
			UNK_0xF82EA857DA10E0CD(&iLocal_121);
		}
	}
}

bool func_148()
{
	if (UNK_0xC844350D5D58C99A(bLocal_64))
	{
		if (UNK_0xD59B17D2DFF98E26(bLocal_64))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
			{
				if (UNK_0x50B5F6F3C29E9380(bLocal_64, bLocal_62))
				{
					if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_62, 18f, 18f, 18f, 0, 1, 0))
					{
						if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
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

void func_149(int iParam0, var uParam1)
{
	if (UNK_0xE4EDC4B0E92C078B(iParam0))
	{
		if (UNK_0x1C0640BA9A7327B3() > *uParam1 + 500)
		{
			if (UNK_0x8FBD6436A27198B4(iParam0) == 1)
			{
				UNK_0x321E019A46034F39(iParam0, true);
			}
			else
			{
				UNK_0x321E019A46034F39(iParam0, false);
				UNK_0x61755AC17D8F538E(iParam0, true);
			}
			*uParam1 = UNK_0x1C0640BA9A7327B3();
		}
		if (!UNK_0xFEBC1E4EC9E001F0() && func_150(0))
		{
			func_140(1);
		}
	}
}

bool func_150(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_111634, bParam0);
}

void func_151()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
	{
		if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_62, 8f, 8f, 18f, 0, 1, 0) || UNK_0x0A059E0DB9253280(bLocal_62))
		{
			UNK_0x790015DC92C918E2();
		}
	}
}

void func_152()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_66))
	{
		UNK_0x142CC44DB769B57E(&iLocal_66);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_64))
	{
		if (UNK_0xD59B17D2DFF98E26(bLocal_64))
		{
			UNK_0x15AFB6CBDE990FB6(bLocal_64, 1, true);
			UNK_0xF690C84DADBB3551(&bLocal_64);
			func_40();
		}
	}
	else
	{
		func_40();
	}
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
	{
		if (func_42(&uLocal_194, cLocal_103, sLocal_107, 4, 0, 0, 0) || func_62())
		{
			if (iLocal_47 == 2)
			{
				UNK_0xBAFED2F6486F771A(bLocal_63, 128, true);
				UNK_0xBAFED2F6486F771A(bLocal_63, 2, true);
				UNK_0xBAFED2F6486F771A(bLocal_63, 1, false);
				UNK_0xF3268524E9BE6D6E(bLocal_63, UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
			}
			UNK_0xFADC0A217229F6B5(bLocal_63, true);
		}
	}
}

bool func_153()
{
	if (!UNK_0x437347B10A200C4B(bLocal_63, 0))
	{
		if (UNK_0xB87D13D0C064E9D1(bLocal_63, UNK_0x16F2683693E537C9(), 1))
		{
			if (bLocal_149)
			{
				return true;
			}
		}
	}
	else if (bLocal_149)
	{
		return true;
	}
	return false;
}

void func_154()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
	{
		UNK_0xA3BF0AA5A2608191(bLocal_62);
		UNK_0xF3268524E9BE6D6E(bLocal_62, UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
		UNK_0xFADC0A217229F6B5(bLocal_62, true);
		SYSTEM::WAIT(0);
		UNK_0x6DAD7906B73F064D(&bLocal_62);
	}
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
	{
		func_42(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0);
		UNK_0xDD353D0E9C789D0E(&iLocal_121);
		UNK_0xBC43ED9FE28DB191(false);
		UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
		UNK_0x75ABDC5F81978924(iLocal_121);
		UNK_0x78ADC381772E3D54(bLocal_63, iLocal_121);
		UNK_0xF82EA857DA10E0CD(&iLocal_121);
		UNK_0xFADC0A217229F6B5(bLocal_63, true);
		SYSTEM::WAIT(0);
		UNK_0xE8832A9E16A57A1F(bLocal_63, false, 1);
		UNK_0x6DAD7906B73F064D(&bLocal_63);
	}
}

bool func_155()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
	{
		if (UNK_0x869EFD0BC0868856(bLocal_62))
		{
			return true;
		}
	}
	return false;
}

int func_156(int iParam0)
{
	return func_157(iParam0);
}

int func_157(int iParam0)
{
	int iVar0;

	if (!UNK_0x762119754C50557A(iParam0))
	{
		return 0;
	}
	iVar0 = UNK_0xA0556E31F2661AF4(iParam0);
	UNK_0x516E63E474722206(iVar0, func_146(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	return iVar0;
}

bool func_158()
{
	if (UNK_0x762119754C50557A(iLocal_191))
	{
		if (UNK_0x797C48AACDB248B0(iLocal_191))
		{
			if (UNK_0xC844350D5D58C99A(bLocal_63))
			{
				if (!UNK_0x437347B10A200C4B(bLocal_63, 0))
				{
					if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
					{
						if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_63, 18f, 18f, 18f, 0, 1, 0) || UNK_0xB87D13D0C064E9D1(bLocal_63, UNK_0x16F2683693E537C9(), 1))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_143 = 1;
							return true;
						}
					}
				}
				if (func_159())
				{
					SYSTEM::SETTIMERB(0);
					iLocal_143 = 2;
					return true;
				}
				if (UNK_0xEB6A8945D1AC98A1(bLocal_63))
				{
					if (UNK_0xB87D13D0C064E9D1(bLocal_63, UNK_0x16F2683693E537C9(), 1))
					{
						if (UNK_0xC844350D5D58C99A(bLocal_62))
						{
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
							{
								UNK_0xA3BF0AA5A2608191(bLocal_62);
								UNK_0xF4CB0B98F8F79D8D(bLocal_62, 0);
							}
						}
						SYSTEM::SETTIMERB(0);
						iLocal_143 = 2;
						return true;
					}
				}
				else if (UNK_0xB87D13D0C064E9D1(bLocal_63, UNK_0x16F2683693E537C9(), 1))
				{
					SYSTEM::SETTIMERB(0);
					iLocal_143 = 2;
					if (UNK_0xC844350D5D58C99A(bLocal_62))
					{
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
						{
							UNK_0xA3BF0AA5A2608191(bLocal_62);
							UNK_0xF4CB0B98F8F79D8D(bLocal_62, 0);
						}
					}
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
					{
						UNK_0xA3BF0AA5A2608191(bLocal_63);
						UNK_0xF3268524E9BE6D6E(bLocal_63, UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
						UNK_0xFADC0A217229F6B5(bLocal_63, true);
						UNK_0xE8832A9E16A57A1F(bLocal_63, false, 1);
						UNK_0x6DAD7906B73F064D(&bLocal_63);
					}
					return true;
				}
			}
			if (UNK_0xC844350D5D58C99A(bLocal_62))
			{
				if (!UNK_0x437347B10A200C4B(bLocal_62, 0))
				{
					if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_62, 5.3f, 5.3f, 6f, 0, 1, 0))
					{
						if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
						{
							if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bLocal_62) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bLocal_62))
							{
								SYSTEM::SETTIMERB(0);
								iLocal_143 = 3;
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_159()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
	{
		if (UNK_0xE115347EA59F7B86(bLocal_63, UNK_0x16F2683693E537C9()) && UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_63, 20f, 20f, 20f, 0, 1, 0))
		{
			if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
			{
				if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bLocal_63) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bLocal_63))
				{
					return true;
				}
			}
		}
		if (UNK_0xE9B814896D415EDD(UNK_0x16F2683693E537C9()))
		{
			return true;
		}
		if (UNK_0x869EFD0BC0868856(bLocal_63))
		{
			return true;
		}
	}
	return false;
}

void func_160()
{
	if (bLocal_58)
	{
		if (!bLocal_59)
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
			{
				if (UNK_0x03A10A5707B2BB1F(bLocal_63, 4))
				{
					if ((func_42(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0) || func_62()) || func_62())
					{
						bLocal_59 = true;
					}
				}
				else if ((func_42(&uLocal_194, cLocal_103, sLocal_107, 4, 0, 0, 0) || func_62()) || func_62())
				{
					bLocal_59 = true;
				}
			}
		}
	}
	else if (func_159())
	{
		if ((func_42(&uLocal_194, cLocal_103, sLocal_116, 4, 0, 0, 0) || func_62()) || func_62())
		{
			if (UNK_0x03A10A5707B2BB1F(bLocal_63, 4))
			{
				UNK_0x6C3AE6E278DB3D0E(bLocal_63, UNK_0x16F2683693E537C9(), 0, 16);
			}
			else
			{
				func_152();
			}
			bLocal_58 = true;
		}
	}
}

bool func_161()
{
	int iVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
	{
		if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 7))
		{
			if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_62, 20f, 20f, 20f, 0, 1, 0))
			{
				if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bLocal_62) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bLocal_62))
				{
					return true;
				}
			}
		}
		if (UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar0, 1))
		{
			if (iVar0 == joaat("WEAPON_STUNGUN"))
			{
				if (UNK_0x54648B774DB42A3A(bLocal_62, joaat("WEAPON_STUNGUN"), 0))
				{
					return true;
				}
			}
		}
		if (UNK_0xB87D13D0C064E9D1(bLocal_62, UNK_0x16F2683693E537C9(), 1))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	if (UNK_0xD3DCEC81D13AAFB1(UNK_0x64430C979F516F7A(bLocal_62, 31086, 0f, 0f, 0f), 3f, true))
	{
		return true;
	}
	return false;
}

void func_162()
{
	if (iLocal_47 == 2)
	{
	}
	if (!func_167())
	{
		if (SYSTEM::TIMERA() > 10000)
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
			{
				if (!UNK_0x7DECE00E09F41C95(bLocal_62))
				{
					func_163(bLocal_62, "GENERIC_CURSE_MED", 24);
					SYSTEM::SETTIMERA(0);
				}
			}
		}
	}
	if (!bLocal_60)
	{
		if (func_38(UNK_0x16F2683693E537C9(), bLocal_63, 1) > 200f)
		{
			if (!UNK_0x0A059E0DB9253280(bLocal_63) || UNK_0x03068588A1FCED1A(bLocal_63))
			{
				iLocal_48 = 8;
			}
		}
	}
}

void func_163(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_164(iParam2), 1);
}

int func_164(int iParam0)
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

void func_165()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
	{
		if (!bLocal_53)
		{
			if (UNK_0xB4ECF989E2C1DAC8(bLocal_62, bLocal_359, "flee_backward_loop_shopkeeper", 3))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_121);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, false, 0, 0, 0);
				UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 0, 2);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, false, 0, 0, 0);
				UNK_0x75ABDC5F81978924(iLocal_121);
				UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
				UNK_0xF82EA857DA10E0CD(&iLocal_121);
				iLocal_164 = 3;
				bLocal_53 = true;
			}
			else if (UNK_0xB4ECF989E2C1DAC8(bLocal_62, bLocal_359, "flee_forward_loop_shopkeeper", 3))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_121);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, false, 0, 0, 0);
				UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 0, 2);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, false, 0, 0, 0);
				UNK_0x75ABDC5F81978924(iLocal_121);
				UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
				UNK_0xF82EA857DA10E0CD(&iLocal_121);
				iLocal_164 = 3;
				bLocal_53 = true;
			}
			else
			{
				bLocal_53 = true;
			}
		}
		if (bLocal_53)
		{
			if (!bLocal_136)
			{
				if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_62, 7f, 7f, 7f, 0, 1, 0))
				{
					if (UNK_0xD1960163A3042274(bLocal_62, 242628503) == 1)
					{
						if (UNK_0x4F1B602325013CC2(bLocal_62) == iLocal_164)
						{
							UNK_0x0C8C0C840C2D1AD2(bLocal_62, UNK_0x16F2683693E537C9(), 9000, 0, 2);
							func_42(&uLocal_194, cLocal_103, sLocal_106, 4, 0, 0, 0);
							bLocal_155 = true;
							bLocal_136 = true;
						}
					}
					else
					{
						UNK_0x33CE5A9E32EA10B2(bLocal_62, 1);
						func_42(&uLocal_194, cLocal_103, sLocal_106, 4, 0, 0, 0);
						UNK_0xDD353D0E9C789D0E(&iLocal_121);
						UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 7000, 0, 2);
						UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 7000);
						UNK_0x75ABDC5F81978924(iLocal_121);
						UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
						UNK_0xF82EA857DA10E0CD(&iLocal_121);
						SYSTEM::SETTIMERA(0);
						bLocal_155 = true;
						bLocal_136 = true;
					}
				}
			}
		}
	}
}

bool func_166()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
	{
		if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_62, 12f, 12f, 5f, 0, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_167()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_168()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
	{
		if (!bLocal_134)
		{
			iLocal_138 = UNK_0x1C0640BA9A7327B3();
			bLocal_134 = true;
		}
		if (bLocal_134)
		{
			iLocal_139 = UNK_0x1C0640BA9A7327B3();
			if (!bLocal_54)
			{
				if ((iLocal_139 - iLocal_138) > 500)
				{
					if (!func_167())
					{
						if (func_42(&uLocal_194, cLocal_103, sLocal_105, 4, 0, 0, 0) || func_62())
						{
							if (iLocal_47 == 2)
							{
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
								{
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
									{
									}
								}
							}
							if (iLocal_47 == 1)
							{
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
								{
								}
							}
							if (UNK_0xE4EDC4B0E92C078B(iLocal_65))
							{
								UNK_0x142CC44DB769B57E(&iLocal_65);
							}
							bLocal_54 = true;
						}
					}
				}
			}
		}
	}
}

void func_169()
{
	float fVar0;

	if (!bLocal_55)
	{
		if (bLocal_90 == 1)
		{
			fVar0 = 1f;
		}
		if (bLocal_90 == 2)
		{
			fVar0 = 4f;
		}
		if (bLocal_90 != 2)
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_62) && !UNK_0xEB6A8945D1AC98A1(bLocal_63))
			{
				if (!func_196())
				{
					if (func_183())
					{
						func_280();
					}
				}
				if (func_182())
				{
					if (!UNK_0xE4EDC4B0E92C078B(iLocal_68))
					{
						if (!UNK_0x437347B10A200C4B(bLocal_63, 0))
						{
							iLocal_68 = func_143(bLocal_63, 1, 0);
						}
						func_174(1);
					}
				}
				if (func_173())
				{
					func_172();
					if (bLocal_90 == 3)
					{
						if (!bLocal_57)
						{
							UNK_0xDD353D0E9C789D0E(&iLocal_121);
							UNK_0x0C8C0C840C2D1AD2(false, bLocal_63, 16000, 0, 2);
							UNK_0x96167B03C5A77156(false, vLocal_87, 1f, 20000, fVar0, 4, 1193033728);
							UNK_0x75ABDC5F81978924(iLocal_121);
							UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
							UNK_0xF82EA857DA10E0CD(&iLocal_121);
							bLocal_57 = true;
						}
						UNK_0xDD353D0E9C789D0E(&iLocal_121);
						UNK_0x0C8C0C840C2D1AD2(false, bLocal_62, -1, 0, 2);
						UNK_0xC6EB89C59F2AF6B8(false, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT", "exit_forward", 1000f, -1000f, -1, 512, false, 0, 0, 0);
						UNK_0xE20F700AC2AFCA92(false, vLocal_87, bLocal_62, 1f, false, 1.5f, 4f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						UNK_0x9BE7E7B6B488CC55(false, bLocal_62, -1, 1);
						UNK_0x75ABDC5F81978924(iLocal_121);
						UNK_0x78ADC381772E3D54(bLocal_63, iLocal_121);
						UNK_0xF82EA857DA10E0CD(&iLocal_121);
						SYSTEM::SETTIMERA(0);
						bLocal_55 = true;
						UNK_0x51B096AAC60548C1(0f);
					}
					else
					{
						if (bLocal_90 == 1)
						{
							sLocal_111 = sLocal_111;
						}
						func_171();
						bLocal_55 = true;
						bLocal_149 = true;
						SYSTEM::SETTIMERA(0);
					}
				}
			}
		}
	}
	if (bLocal_55)
	{
		if (!bLocal_135)
		{
			if (SYSTEM::TIMERA() > 1000)
			{
				if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_63, 60f, 60f, 50f, 0, 1, 0))
				{
					if (!UNK_0x437347B10A200C4B(bLocal_62, 0))
					{
						UNK_0xF96A174EE26D7588(bLocal_62, bLocal_63, 0);
					}
					bLocal_135 = true;
				}
				else
				{
					bLocal_135 = true;
				}
			}
		}
		if (bLocal_135 && !bLocal_133)
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_62) && !UNK_0xEB6A8945D1AC98A1(bLocal_63))
			{
				if (func_42(&uLocal_194, cLocal_103, sLocal_104, 4, 0, 0, 0) || func_62())
				{
					UNK_0xA3BF0AA5A2608191(bLocal_62);
					UNK_0xDD353D0E9C789D0E(&iLocal_121);
					UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "handsup_standing_enter", 8f, -4f, -1, 0, false, 0, 0, 0);
					UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "handsup_standing_base", 8f, -4f, 7000, 0, false, 0, 0, 0);
					UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "handsup_standing_exit", 8f, -4f, -1, 0, false, 0, 0, 0);
					UNK_0x75ABDC5F81978924(iLocal_121);
					UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
					UNK_0xF82EA857DA10E0CD(&iLocal_121);
					func_172();
					iLocal_191 = UNK_0xA6FF0828D17CF374(joaat("PICKUP_MONEY_PURSE"), UNK_0x550B1459B4642A86(UNK_0x68E4ADDDDCD7BDDE(bLocal_62, 0f, 2.5f, 0f), 1.2f, 1.5f), bLocal_144, bLocal_192, 1, bLocal_85);
					bLocal_133 = true;
				}
			}
		}
		if (bLocal_133)
		{
			if (UNK_0xEB6A8945D1AC98A1(bLocal_63))
			{
				func_170();
			}
			else
			{
				switch (iLocal_667)
				{
					case 0:
						vLocal_670 = { UNK_0xE925E52ACABA4CE7(iLocal_191) - Vector(0f, 0f, 0.75f) };
						if (UNK_0x797C48AACDB248B0(iLocal_191))
						{
							UNK_0xA3BF0AA5A2608191(bLocal_63);
							UNK_0xDD353D0E9C789D0E(&iLocal_121);
							UNK_0xE20F700AC2AFCA92(false, vLocal_670, bLocal_62, 2f, false, 0.1f, 4f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							UNK_0x75ABDC5F81978924(iLocal_121);
							UNK_0x78ADC381772E3D54(bLocal_63, iLocal_121);
							UNK_0xF82EA857DA10E0CD(&iLocal_121);
							iLocal_668 = UNK_0x1C0640BA9A7327B3();
						}
						iLocal_667 = 1;
						break;
					case 1:
						if (UNK_0xD1960163A3042274(bLocal_63, 242628503) == 7)
						{
							vLocal_670 = { UNK_0xE925E52ACABA4CE7(iLocal_191) - Vector(0f, 0f, 0.75f) };
							if (UNK_0x797C48AACDB248B0(iLocal_191))
							{
								if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bLocal_63, true), vLocal_670, 1) > 1f)
								{
									iLocal_669 = 1;
									iLocal_667 = 4;
								}
								else
								{
									UNK_0xA3BF0AA5A2608191(bLocal_63);
									UNK_0xDD353D0E9C789D0E(&iLocal_121);
									UNK_0xC6EB89C59F2AF6B8(false, bLocal_360, "pickup_low", 8f, -4f, -1, 8224, false, 0, 0, 0);
									UNK_0x75ABDC5F81978924(iLocal_121);
									UNK_0x78ADC381772E3D54(bLocal_63, iLocal_121);
									UNK_0xF82EA857DA10E0CD(&iLocal_121);
									iLocal_667 = 2;
								}
							}
							else
							{
								iLocal_667 = 4;
							}
						}
						if ((UNK_0x1C0640BA9A7327B3() - iLocal_668) > 15000)
						{
							iLocal_669 = 1;
							iLocal_667 = 4;
						}
						break;
					case 2:
						if (UNK_0x8CA9406E01C7EE58(bLocal_63, bLocal_360, "pickup_low") > 0.5f)
						{
							if (UNK_0x797C48AACDB248B0(iLocal_191))
							{
								UNK_0x40B7230FD4C59AA2(iLocal_191);
								iLocal_667 = 3;
							}
							else
							{
								iLocal_667 = 4;
							}
						}
						break;
					case 3:
						if ((UNK_0xB4ECF989E2C1DAC8(bLocal_63, bLocal_360, "pickup_low", 3) && UNK_0x8CA9406E01C7EE58(bLocal_63, bLocal_360, "pickup_low") > 0.58f) || !UNK_0xB4ECF989E2C1DAC8(bLocal_63, bLocal_360, "pickup_low", 3))
						{
							iLocal_667 = 4;
						}
						break;
					case 4:
						UNK_0xE8832A9E16A57A1F(bLocal_63, true, 1);
						UNK_0xF3268524E9BE6D6E(bLocal_63, UNK_0x16F2683693E537C9(), 50f, -1, 0, 0);
						UNK_0xF895E10BF4C72645(bLocal_63, 0, 0);
						bLocal_149 = true;
						break;
				}
			}
		}
	}
}

void func_170()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_65))
	{
		UNK_0x142CC44DB769B57E(&iLocal_65);
	}
	if (!UNK_0xE4EDC4B0E92C078B(iLocal_67))
	{
		if (UNK_0x762119754C50557A(iLocal_191))
		{
			iLocal_67 = func_156(iLocal_191);
		}
	}
	iLocal_48 = 4;
}

void func_171()
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
	}
	if (UNK_0x7069CC4DE1EA3FAA(bLocal_63, UNK_0x16F2683693E537C9(), 90f))
	{
		UNK_0xC6EB89C59F2AF6B8(bLocal_63, bLocal_359, bLocal_367, 1000f, -1000f, -1, 8, false, 0, 0, 0);
		if (iLocal_47 == 2)
		{
			UNK_0xDD353D0E9C789D0E(&iLocal_121);
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, bLocal_368, 8f, -8f, -1, 0, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 1, false, 0, 0, 0);
			UNK_0x75ABDC5F81978924(iLocal_121);
			UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
			UNK_0xF82EA857DA10E0CD(&iLocal_121);
		}
		else if (bLocal_90 == 4)
		{
			iLocal_379 = UNK_0x544B74C043CE9948(39.7889f, -1014.392f, 28.4847f, 4f, 4f, 4f, 0f, 0, 4);
			UNK_0xDD353D0E9C789D0E(&iLocal_121);
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "flee_backward_intro_shopkeeper", 8f, -4f, -1, 0, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "flee_backward_loop_shopkeeper", 8f, -4f, -1, 9, false, 0, 0, 0);
			UNK_0x75ABDC5F81978924(iLocal_121);
			UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
			UNK_0xF82EA857DA10E0CD(&iLocal_121);
		}
		else
		{
			UNK_0xDD353D0E9C789D0E(&iLocal_121);
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, bLocal_368, 8f, -4f, -1, 0, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, false, 0, 0, 0);
			UNK_0x75ABDC5F81978924(iLocal_121);
			UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
			UNK_0xF82EA857DA10E0CD(&iLocal_121);
		}
	}
	else
	{
		UNK_0xC6EB89C59F2AF6B8(bLocal_63, bLocal_359, bLocal_369, 1000f, -1000f, -1, 8, false, 0, 0, 0);
		if (iLocal_47 == 2)
		{
			UNK_0xDD353D0E9C789D0E(&iLocal_121);
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, bLocal_370, 8f, -8f, -1, 8, 0.1f, 0, 0, 0);
			UNK_0x796BDF31572BB055(false, -94.8543f, -1582.686f, 30.2862f, 3000);
			UNK_0xC6EB89C59F2AF6B8(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 1, false, 0, 0, 0);
			UNK_0x75ABDC5F81978924(iLocal_121);
			UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
			UNK_0xF82EA857DA10E0CD(&iLocal_121);
		}
		else if (bLocal_90 == 4)
		{
			UNK_0xDD353D0E9C789D0E(&iLocal_121);
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "flee_forward_intro_shopkeeper", 8f, -4f, -1, 0, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "flee_forward_loop_shopkeeper", 8f, -4f, -1, 9, false, 0, 0, 0);
			UNK_0x75ABDC5F81978924(iLocal_121);
			UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
			UNK_0xF82EA857DA10E0CD(&iLocal_121);
		}
		else
		{
			UNK_0xDD353D0E9C789D0E(&iLocal_121);
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, bLocal_370, 8f, -4f, -1, 8, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, false, 0, 0, 0);
			UNK_0x75ABDC5F81978924(iLocal_121);
			UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
			UNK_0xF82EA857DA10E0CD(&iLocal_121);
		}
	}
}

void func_172()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_68))
	{
		UNK_0x142CC44DB769B57E(&iLocal_68);
	}
	if (!UNK_0xE4EDC4B0E92C078B(iLocal_66))
	{
		if (!UNK_0x437347B10A200C4B(bLocal_63, 0))
		{
			iLocal_66 = func_143(bLocal_63, 1, 0);
		}
	}
}

bool func_173()
{
	int iVar0;

	iVar0 = 0;
	if (bLocal_90 == 1)
	{
		if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -170.3051f, -1670.362f, 53.73083f, -91.94043f, -1578.828f, 24.96221f, 18f, 0, false, 0))
		{
			iVar0 = 1;
		}
	}
	else if (bLocal_90 == 2)
	{
		if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_63, true), 1) < 30f)
		{
			iVar0 = 1;
		}
	}
	else if (bLocal_90 == 4)
	{
		if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -41.32678f, -959.6443f, 38.4444f, 119.9208f, -1021.231f, 21.85738f, 123.75f, 0, true, 0))
		{
			iVar0 = 1;
		}
	}
	else if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), -325.7037f, -829.31f, 30.5812f, 1) < 95f)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_174(bool bParam0)
{
	if (func_176())
	{
		Global_111628 = 1;
		Global_111625 = UNK_0x1C0640BA9A7327B3();
		if (func_175(Global_111627))
		{
			func_140(0);
		}
		UNK_0x974531784BE14213(1, "RE_TITLE");
		if (bParam0 && func_175(Global_111627))
		{
			UNK_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

bool func_175(int iParam0)
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

bool func_176()
{
	switch (func_177(&Global_30827, 0, 5, 0, UNK_0x0D0A574C76D769AC()))
	{
		case 1:
			return true;
		case 0:
			return true;
	}
	return false;
}

int func_177(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_181(0))
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
		if (!func_179(iParam2))
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
			func_178(uParam0, iParam4);
		}
	}
	return 2;
}

void func_178(var uParam0, int iParam1)
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

bool func_179(int iParam0)
{
	return func_180(iParam0, Global_41431);
}

int func_180(int iParam0, int iParam1)
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

bool func_181(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_179(iParam0))
	{
		return false;
	}
	return true;
}

bool func_182()
{
	int iVar0;

	iVar0 = 0;
	if (bLocal_90 == 1)
	{
		if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -179.103f, -1682.421f, 53.693f, -83.53208f, -1567.584f, 25.18745f, 40.75f, 0, false, 0))
		{
			iVar0 = 1;
		}
	}
	else if (bLocal_90 == 2)
	{
		if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 353.1506f, -296.1962f, 62.76571f, 210.4646f, -243.5106f, 46.13731f, 123.75f, 0, true, 0))
		{
			iVar0 = 1;
		}
	}
	else if (bLocal_90 == 3)
	{
		if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), -325.7037f, -829.31f, 30.5812f, 1) < 105f)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_183()
{
	if (!func_179(5))
	{
		return true;
	}
	if (func_192())
	{
		return true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_191())
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
		if (func_129(func_127()))
		{
			iVar36 = func_190();
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
			break;
		case 42:
			func_186(uParam1, "Nigel2", func_188(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		case 43:
			func_186(uParam1, "Nigel3", func_188(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		case 44:
			func_186(uParam1, "Omega1", func_188(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 45:
			func_186(uParam1, "Omega2", func_188(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 46:
			func_186(uParam1, "Paparazzo1", func_188(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 47:
			func_186(uParam1, "Paparazzo2", func_188(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 48:
			func_186(uParam1, "Paparazzo3", func_188(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 49:
			func_186(uParam1, "Paparazzo3A", func_188(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 50:
			func_186(uParam1, "Paparazzo3B", func_188(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 51:
			func_186(uParam1, "Paparazzo4", func_188(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 52:
			func_186(uParam1, "Rampage1", func_188(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 54:
			func_186(uParam1, "Rampage3", func_188(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 55:
			func_186(uParam1, "Rampage4", func_188(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 56:
			func_186(uParam1, "Rampage5", func_188(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 53:
			func_186(uParam1, "Rampage2", func_188(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 57:
			func_186(uParam1, "TheLastOne", func_188(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 58:
			func_186(uParam1, "Tonya1", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 59:
			func_186(uParam1, "Tonya2", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 60:
			func_186(uParam1, "Tonya3", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 61:
			func_186(uParam1, "Tonya4", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 62:
			func_186(uParam1, "Tonya5", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		default:
			break;
	}
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

int func_190()
{
	func_128();
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

bool func_191()
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

bool func_192()
{
	if (func_195() && !func_191())
	{
		return true;
	}
	if (func_194() && func_193())
	{
		return true;
	}
	return false;
}

bool func_193()
{
	return Global_111356 > 0;
}

bool func_194()
{
	if (Global_95666 != -1)
	{
		return true;
	}
	return false;
}

bool func_195()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_196()
{
	if ((Global_111627 == func_197() && UNK_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return true;
	}
	return false;
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

void func_199()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x94FD98915D03BAC2(UNK_0xD803B885F5E47A62(), 1, 0);
	}
	func_298(25, bLocal_90);
	func_203();
	func_200();
	func_280();
}

void func_200()
{
	func_201();
}

int func_201()
{
	if (func_202(0))
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

bool func_202(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

int func_203()
{
	return 1;
}

void func_204(int iParam0)
{
	Global_111624 = iParam0;
}

void func_205()
{
	switch (iLocal_140)
	{
		case 0:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
			{
				UNK_0xC6EB89C59F2AF6B8(bLocal_63, bLocal_359, "IG_1_guy_stickup_loop", 8f, -4f, -1, 1, false, 0, 0, 0);
			}
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
			{
				UNK_0xC6EB89C59F2AF6B8(bLocal_62, bLocal_361, "ortega_stand_loop_ort", 8f, -4f, -1, 1, false, 0, 0, 0);
			}
			iLocal_140++;
			break;
		case 1:
			if (UNK_0xC844350D5D58C99A(bLocal_63))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
				{
					if (func_182())
					{
						if (!UNK_0xE4EDC4B0E92C078B(iLocal_68))
						{
							if (!UNK_0x437347B10A200C4B(bLocal_63, 0))
							{
								iLocal_68 = func_143(bLocal_63, 1, 0);
							}
							if (!func_196())
							{
								func_174(1);
							}
						}
					}
					if (func_173())
					{
						func_42(&uLocal_194, cLocal_103, "REMG2_ARG", 4, 0, 0, 0);
						func_172();
						iLocal_187 = UNK_0x1C0640BA9A7327B3();
						UNK_0x51B096AAC60548C1(0f);
						bLocal_190 = true;
						iLocal_140++;
					}
				}
				else if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
				{
					UNK_0xEEB67C3D0A71A47B(bLocal_62, vLocal_145, 250f, -1, 0, 0);
					UNK_0xFADC0A217229F6B5(bLocal_62, true);
					SYSTEM::WAIT(0);
					func_211();
				}
			}
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (func_210())
				{
					iLocal_140 = 4;
				}
				if (func_159())
				{
					iLocal_140 = 9;
				}
				if (func_209())
				{
					iLocal_140 = 6;
				}
				if (func_208())
				{
					iLocal_140 = 4;
				}
			}
			if (!func_196())
			{
				if (func_183())
				{
					func_280();
				}
			}
			break;
		case 2:
			if (UNK_0xC844350D5D58C99A(bLocal_63))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
				{
					if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_63, 6f, 6f, 15f, 0, 1, 0))
					{
						if (UNK_0xE115347EA59F7B86(bLocal_63, UNK_0x16F2683693E537C9()) || UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_63, 3f, 3f, 15f, 0, 1, 0))
						{
							if (UNK_0x7069CC4DE1EA3FAA(UNK_0x16F2683693E537C9(), bLocal_63, 65f))
							{
								iLocal_189 = UNK_0x1C0640BA9A7327B3();
								UNK_0x0C8C0C840C2D1AD2(bLocal_63, UNK_0x16F2683693E537C9(), 7000, 0, 2);
								func_42(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_140++;
							}
							else
							{
								iLocal_189 = UNK_0x1C0640BA9A7327B3();
								UNK_0x0C8C0C840C2D1AD2(bLocal_63, UNK_0x16F2683693E537C9(), 7000, 0, 2);
								func_42(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_140++;
							}
						}
					}
				}
			}
			if (func_210() || func_208())
			{
				iLocal_140 = 4;
			}
			if (func_159())
			{
				iLocal_140 = 9;
			}
			if (func_209())
			{
				iLocal_140 = 6;
			}
			break;
		case 3:
			if ((iLocal_188 - iLocal_189) > 12500)
			{
				if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
				{
					iLocal_140 = 4;
				}
			}
			if ((iLocal_188 - iLocal_189) > 5500)
			{
				if (!bLocal_137)
				{
					if (UNK_0xC844350D5D58C99A(bLocal_63))
					{
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
						{
							func_42(&uLocal_194, cLocal_103, sLocal_114, 4, 0, 0, 0);
							UNK_0x6C3AE6E278DB3D0E(bLocal_63, UNK_0x16F2683693E537C9(), 0, 16);
							bLocal_137 = true;
							if (UNK_0xC844350D5D58C99A(bLocal_62))
							{
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
								{
									UNK_0xEEB67C3D0A71A47B(bLocal_62, vLocal_145, 250f, -1, 0, 0);
									UNK_0xFADC0A217229F6B5(bLocal_62, true);
									SYSTEM::WAIT(0);
								}
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
								{
								}
								if (UNK_0xE4EDC4B0E92C078B(iLocal_65))
								{
									UNK_0x142CC44DB769B57E(&iLocal_65);
								}
							}
						}
					}
				}
			}
			if (bLocal_137)
			{
				iLocal_140 = 10;
			}
			else
			{
				if (func_210())
				{
					iLocal_140 = 4;
				}
				if (func_159())
				{
					iLocal_140 = 9;
				}
				if (func_209())
				{
					iLocal_140 = 6;
				}
				if (func_207())
				{
					iLocal_140 = 9;
				}
				if (func_208())
				{
					iLocal_140 = 4;
				}
			}
			break;
		case 10:
			if (UNK_0xC844350D5D58C99A(bLocal_63))
			{
				if (UNK_0xEB6A8945D1AC98A1(bLocal_63) || func_38(UNK_0x16F2683693E537C9(), bLocal_63, 1) > 100f)
				{
					func_206();
					func_211();
				}
			}
			break;
		case 4:
			if (UNK_0xC844350D5D58C99A(bLocal_62))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
				{
					if (!UNK_0xB87D13D0C064E9D1(bLocal_62, UNK_0x16F2683693E537C9(), 1))
					{
						UNK_0xA3BF0AA5A2608191(bLocal_62);
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
						{
							UNK_0xDD353D0E9C789D0E(&iLocal_121);
							UNK_0xEEB67C3D0A71A47B(false, UNK_0x68F4C0EC296D3901(bLocal_63, false), 150f, -1, 0, 0);
							UNK_0x75ABDC5F81978924(iLocal_121);
							UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
							UNK_0xF82EA857DA10E0CD(&iLocal_121);
							UNK_0xFADC0A217229F6B5(bLocal_62, true);
						}
						bLocal_148 = true;
					}
					else
					{
						UNK_0xA3BF0AA5A2608191(bLocal_62);
						UNK_0xF3268524E9BE6D6E(bLocal_62, UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
						UNK_0xFADC0A217229F6B5(bLocal_62, true);
						if (UNK_0xE4EDC4B0E92C078B(iLocal_65))
						{
							UNK_0x142CC44DB769B57E(&iLocal_65);
						}
					}
				}
			}
			if (UNK_0xC844350D5D58C99A(bLocal_63))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
				{
					UNK_0xA3BF0AA5A2608191(bLocal_63);
					UNK_0xF3268524E9BE6D6E(bLocal_63, UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
					UNK_0xFADC0A217229F6B5(bLocal_63, true);
					if (UNK_0xE4EDC4B0E92C078B(iLocal_66))
					{
						UNK_0x142CC44DB769B57E(&iLocal_66);
					}
				}
			}
			if (UNK_0x25037C66EB32B076())
			{
				func_110();
			}
			SYSTEM::WAIT(0);
			if (!bLocal_148)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
				{
					func_42(&uLocal_194, cLocal_103, "REMG2_FKIT", 4, 0, 0, 0);
				}
				func_280();
			}
			break;
		case 5:
			if (SYSTEM::TIMERB() > 250)
			{
				if (UNK_0xC844350D5D58C99A(bLocal_63))
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
					{
						UNK_0xAFF39FB306F8E232(bLocal_63, 17, true);
						UNK_0x9DD8618CA5BF832D(bLocal_63, 156, true);
						UNK_0xDD353D0E9C789D0E(&iLocal_121);
						UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_121);
						UNK_0x78ADC381772E3D54(bLocal_63, iLocal_121);
						UNK_0xF82EA857DA10E0CD(&iLocal_121);
						UNK_0xFADC0A217229F6B5(bLocal_63, true);
						SYSTEM::WAIT(0);
						UNK_0xE8832A9E16A57A1F(bLocal_63, false, 1);
						UNK_0x6DAD7906B73F064D(&bLocal_63);
						func_42(&uLocal_194, cLocal_103, sLocal_113, 4, 0, 0, 0);
					}
				}
				if (UNK_0xC844350D5D58C99A(bLocal_62))
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
					{
						if (!UNK_0xB87D13D0C064E9D1(bLocal_62, UNK_0x16F2683693E537C9(), 1))
						{
							UNK_0xA3BF0AA5A2608191(bLocal_62);
							bLocal_148 = true;
						}
					}
				}
				if (!bLocal_148)
				{
					SYSTEM::WAIT(0);
					func_280();
				}
			}
			break;
		case 6:
			if (SYSTEM::TIMERA() > 500)
			{
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xC844350D5D58C99A(bLocal_62))
					{
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
						{
							UNK_0xA3BF0AA5A2608191(bLocal_62);
							UNK_0xDD353D0E9C789D0E(&iLocal_121);
							UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 10000, 0, 2);
							UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
							UNK_0x75ABDC5F81978924(iLocal_121);
							UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
							UNK_0xF82EA857DA10E0CD(&iLocal_121);
							UNK_0xFADC0A217229F6B5(bLocal_62, true);
							UNK_0x6DAD7906B73F064D(&bLocal_62);
						}
					}
					if (UNK_0xC844350D5D58C99A(bLocal_63))
					{
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
						{
							func_42(&uLocal_194, cLocal_103, sLocal_114, 4, 0, 0, 0);
							UNK_0xA3BF0AA5A2608191(bLocal_63);
							UNK_0xDD353D0E9C789D0E(&iLocal_121);
							UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 10000, 0, 2);
							UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
							UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
							UNK_0x75ABDC5F81978924(iLocal_121);
							UNK_0x78ADC381772E3D54(bLocal_63, iLocal_121);
							UNK_0xF82EA857DA10E0CD(&iLocal_121);
							UNK_0xFADC0A217229F6B5(bLocal_63, true);
						}
					}
				}
				SYSTEM::WAIT(0);
				func_280();
			}
			break;
		case 7:
			SYSTEM::SETTIMERA(0);
			iLocal_140++;
			break;
		case 8:
			if (SYSTEM::TIMERA() > 200)
			{
				func_211();
			}
			break;
		case 9:
			if (UNK_0xC844350D5D58C99A(bLocal_63))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
				{
					UNK_0x9DD8618CA5BF832D(bLocal_63, 156, true);
					UNK_0x7C8478BF70C1E072(bLocal_63, 50f, 0);
					if (UNK_0x25037C66EB32B076())
					{
						func_110();
					}
					SYSTEM::WAIT(0);
					func_42(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0);
				}
			}
			if (UNK_0xC844350D5D58C99A(bLocal_62))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
				{
					UNK_0xA3BF0AA5A2608191(bLocal_62);
					UNK_0x8BE3D040D15AEA1D(bLocal_62, 2000);
					bLocal_148 = true;
				}
			}
			break;
	}
	if (iLocal_140 != 8 && bLocal_148)
	{
		iLocal_140 = 7;
	}
	iLocal_188 = UNK_0x1C0640BA9A7327B3();
	if (bLocal_190 && !bLocal_137)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_63) && UNK_0xC844350D5D58C99A(bLocal_63))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_62) && !UNK_0xEB6A8945D1AC98A1(bLocal_63))
			{
				if ((((iLocal_188 - iLocal_187) > 12000 && !UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_63, 3f, 3f, 35f, 0, 1, 0)) && UNK_0x0A059E0DB9253280(bLocal_63)) && !func_167())
				{
					if ((func_42(&uLocal_194, cLocal_103, "REMG2_FKIT", 4, 0, 0, 0) || func_62()) || func_62())
					{
						UNK_0x9DD8618CA5BF832D(bLocal_63, 156, true);
						UNK_0x2D728BBC95A0267D(bLocal_63, UNK_0x64430C979F516F7A(bLocal_62, 31086, 0f, 0f, 0f), 0);
						UNK_0xA3BF0AA5A2608191(bLocal_62);
						UNK_0xD458AC1C1D29C3B4(bLocal_62, 99, false);
						UNK_0xEEB67C3D0A71A47B(bLocal_63, vLocal_145, 250f, -1, 0, 0);
						UNK_0xFADC0A217229F6B5(bLocal_63, true);
						func_280();
					}
				}
			}
		}
	}
}

void func_206()
{
	Global_19671 = 0;
	func_56();
}

bool func_207()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_62) && !UNK_0xEB6A8945D1AC98A1(bLocal_63))
	{
		if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), bLocal_63) || UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), bLocal_62))
		{
			return true;
		}
		if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_63, 2f, 2f, 2f, 0, 1, 0))
		{
		}
	}
	return false;
}

bool func_208()
{
	if (!UNK_0x437347B10A200C4B(bLocal_62, 0))
	{
		if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_62, 20f, 20f, 20f, 0, 1, 0))
		{
			if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bLocal_62) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bLocal_62))
			{
				if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
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
	if (!UNK_0x437347B10A200C4B(bLocal_63, 0))
	{
		if (func_159())
		{
			if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
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

bool func_209()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
	{
		if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_62, 5.3f, 5.3f, 6f, 0, 1, 0))
		{
			if (UNK_0xF649DD3BF44195C7(bLocal_62, UNK_0x16F2683693E537C9(), 17))
			{
				if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6) && !UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
					{
						if (!UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bLocal_63))
						{
							if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bLocal_62) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bLocal_62))
							{
								SYSTEM::SETTIMERB(0);
								return true;
							}
						}
					}
					else if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bLocal_62) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bLocal_62))
					{
						SYSTEM::SETTIMERB(0);
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_210()
{
	if (!UNK_0x437347B10A200C4B(bLocal_62, 0))
	{
		if (UNK_0xD3DCEC81D13AAFB1(UNK_0x64430C979F516F7A(bLocal_62, 31086, 0f, 0f, 0f), 5f, true))
		{
			if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
			{
				return true;
			}
		}
	}
	return false;
}

void func_211()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
	{
		if (!UNK_0x869EFD0BC0868856(bLocal_62))
		{
			if (func_196())
			{
				if (UNK_0xD1960163A3042274(bLocal_62, 242628503) == 7 || UNK_0xD1960163A3042274(bLocal_62, 474215631) == 7)
				{
					if (UNK_0x25037C66EB32B076())
					{
						func_110();
					}
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
					{
						if (!UNK_0xE9FDA1035CFEA94F(bLocal_62))
						{
							UNK_0xF3268524E9BE6D6E(bLocal_62, bLocal_63, 150f, -1, 0, 0);
						}
					}
					else if (iLocal_47 == 3)
					{
						if (!UNK_0xE9FDA1035CFEA94F(bLocal_62))
						{
							UNK_0xEEB67C3D0A71A47B(bLocal_62, vLocal_122, 150f, -1, 0, 0);
						}
					}
					UNK_0xFADC0A217229F6B5(bLocal_62, true);
					SYSTEM::WAIT(0);
					func_42(&uLocal_194, cLocal_103, sLocal_109, 4, 0, 0, 0);
					SYSTEM::WAIT(0);
					if (bLocal_192 > 0)
					{
						UNK_0x6D80F1AEBA734886(UNK_0x16F2683693E537C9(), (bLocal_192 / 100) * 90);
						func_64(func_127(), 1, bLocal_192);
						SYSTEM::WAIT(0);
						func_212(func_127(), 1, (bLocal_192 / 10), 0, 1);
					}
					func_204(3);
					func_199();
				}
			}
			else
			{
				func_280();
			}
		}
		else
		{
			func_280();
		}
	}
	else
	{
		func_280();
	}
}

void func_212(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;

	if (func_98(iParam0) == 3)
	{
		return;
	}
	if (func_98(iParam0) == 4)
	{
		return;
	}
	func_65(func_98(iParam0), 1, iParam1, bParam2, 0);
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
		bVar0 = (bVar0 + bParam2);
		UNK_0xCDC520E5E48E63D9(iVar1, bVar0, 1);
	}
}

bool func_213()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_43) < (75f * 75f))
		{
			return true;
		}
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_191())
		{
			return false;
		}
	}
	if (func_192())
	{
		return true;
	}
	if (func_184(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_214()
{
	func_225();
	func_224(&uLocal_393, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE");
	func_224(&uLocal_393, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT");
	func_224(&uLocal_393, bLocal_377);
	func_224(&uLocal_393, bLocal_361);
	func_222(&uLocal_393, bLocal_83);
	func_222(&uLocal_393, bLocal_84);
	func_222(&uLocal_393, bLocal_85);
	func_224(&uLocal_393, bLocal_360);
	func_224(&uLocal_393, bLocal_359);
	func_224(&uLocal_393, bLocal_378);
	func_224(&uLocal_393, "RANDOM@BICYCLE_THIEF@IDLE_A");
	if (func_218(&uLocal_393))
	{
		func_215();
		return true;
	}
	return false;
}

void func_215()
{
	bLocal_62 = UNK_0x36F2404464202779(26, bLocal_83, vLocal_69, bLocal_75, 1, true);
	UNK_0x11AD11297DC58CC7(bLocal_62, true);
	UNK_0x25C5402CC10F76CD(bLocal_62, false);
	UNK_0xBAFED2F6486F771A(bLocal_62, 8, true);
	UNK_0xBAFED2F6486F771A(bLocal_62, 128, true);
	UNK_0xBAFED2F6486F771A(bLocal_62, 512, true);
	UNK_0x33CE5A9E32EA10B2(bLocal_62, 1);
	UNK_0x400A62DD9C797E1E(bLocal_62);
	UNK_0x6D80F1AEBA734886(bLocal_62, false);
	UNK_0x7980D72D61BEF4D5(bLocal_62, true);
	if (bLocal_83 == joaat("A_M_Y_GENSTREET_01"))
	{
		UNK_0x64F9F278AB9DCA2C(bLocal_62, false, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_62, 3, false, 3, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_62, 4, false, 2, 0);
	}
	if (bLocal_83 == joaat("A_M_Y_BUSINESS_02"))
	{
		UNK_0x64F9F278AB9DCA2C(bLocal_62, false, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_62, 2, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_62, 3, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_62, 4, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_62, 8, false, false, 0);
	}
	UNK_0xF63400DBE3303D26("theAssailant", &bLocal_86);
	bLocal_63 = UNK_0x36F2404464202779(26, bLocal_84, vLocal_72, bLocal_78, 1, true);
	UNK_0xE8832A9E16A57A1F(bLocal_63, true, 1);
	UNK_0x11AD11297DC58CC7(bLocal_63, true);
	UNK_0xE2F0767314863BD8(bLocal_63, 1, 0);
	UNK_0x262EF6C6306BEA6C(bLocal_63, joaat("WEAPON_PISTOL"), -1, true, true);
	UNK_0xAFF39FB306F8E232(bLocal_63, 13, false);
	UNK_0xAFF39FB306F8E232(bLocal_63, 17, false);
	UNK_0x1365063FA6365BE8(bLocal_63, true);
	UNK_0x4E885A246A9D983A(bLocal_63, 42, true);
	UNK_0x4E885A246A9D983A(bLocal_63, 137, true);
	UNK_0xBAFED2F6486F771A(bLocal_63, 128, true);
	UNK_0xBAFED2F6486F771A(bLocal_63, 2, false);
	UNK_0x6DF7BF67E86AAE86(bLocal_63, bLocal_86);
	UNK_0x33CE5A9E32EA10B2(bLocal_63, 1);
	if (!UNK_0x2EBF5002C6B6A06C(bLocal_120))
	{
		UNK_0x4F39CC3882DD074E(bLocal_62, bLocal_120);
	}
	UNK_0x4F39CC3882DD074E(bLocal_63, bLocal_119);
	UNK_0x0E2400AB9174FA81(2, joaat("CIVMALE"), bLocal_86);
	UNK_0x0E2400AB9174FA81(2, joaat("CIVFEMALE"), bLocal_86);
	UNK_0x0E2400AB9174FA81(2, bLocal_86, joaat("CIVMALE"));
	UNK_0x0E2400AB9174FA81(2, bLocal_86, joaat("CIVFEMALE"));
	UNK_0x0E2400AB9174FA81(5, bLocal_86, joaat("PLAYER"));
	switch (func_127())
	{
		case 0:
			func_217(&uLocal_194, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
			break;
		case 1:
			func_217(&uLocal_194, 0, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
			break;
		case 2:
			func_217(&uLocal_194, 0, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
			break;
	}
	func_217(&uLocal_194, 1, bLocal_63, sLocal_118, 0, 1);
	func_217(&uLocal_194, 2, bLocal_62, sLocal_117, 0, 1);
	if (iLocal_47 == 2)
	{
		UNK_0xBAFED2F6486F771A(bLocal_63, 1, false);
	}
	if (bLocal_90 == 1 || bLocal_90 == 4)
	{
		func_216();
	}
	if (bLocal_90 == 3)
	{
		vLocal_125 = { -325.4189f, -828.8596f, 31.1f };
		vLocal_128 = { 0f, 0f, 180f };
		iLocal_131 = UNK_0xE9744DB7B8CA6965(vLocal_125, vLocal_128, 2);
		UNK_0x915804B434753CBD(bLocal_63, iLocal_131, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE", "base", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	if (bLocal_90 == 4)
	{
		UNK_0x51EA29724CE5BF82(Vector(28.5315f, -1027.565f, 37.1197f) - Vector(1f, 1f, 1f), Vector(28.5315f, -1027.565f, 37.1197f) + Vector(1f, 1f, 1f), 1);
	}
}

void func_216()
{
	vector3 vVar0;

	UNK_0x08841CDB215AE18F(bLocal_63, UNK_0x1BB04F10296A1C5E(bLocal_359, bLocal_365, vLocal_371, vLocal_374, false, 2), 0, 0, 1);
	vVar0 = { UNK_0xEEB20D14BD38615E(bLocal_359, bLocal_365, vLocal_371, vLocal_374, false, 2) };
	if (vVar0.z < 0f)
	{
		vVar0.f_2 = (vVar0.z + 360f);
	}
	UNK_0xD8F6A53F4799FAFE(bLocal_63, vVar0.z);
	UNK_0x08841CDB215AE18F(bLocal_62, UNK_0x1BB04F10296A1C5E(bLocal_359, bLocal_366, vLocal_371, vLocal_374, false, 2), 0, 0, 1);
	vVar0 = { UNK_0xEEB20D14BD38615E(bLocal_359, bLocal_366, vLocal_371, vLocal_374, false, 2) };
	if (vVar0.z < 0f)
	{
		vVar0.f_2 = (vVar0.z + 360f);
	}
	UNK_0xD8F6A53F4799FAFE(bLocal_62, vVar0.z);
	UNK_0xC6EB89C59F2AF6B8(bLocal_63, bLocal_359, bLocal_365, 1000f, -1000f, -1, 9, false, 0, 0, 0);
	UNK_0xC6EB89C59F2AF6B8(bLocal_62, bLocal_359, bLocal_366, 1000f, -1000f, -1, 9, false, 0, 0, 0);
}

void func_217(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_218(var uParam0)
{
	int iVar0;

	if (!uParam0->f_271)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 29))
			{
				return false;
			}
			if (!func_219(uParam0[iVar0 /*18*/]))
			{
				return false;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return true;
}

bool func_219(var uParam0)
{
	return func_220(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

bool func_220(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0xEAE0D21A50E6C7F4(bParam0, 30))
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam0, 29))
		{
			switch (func_221(bParam0))
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

bool func_221(bool bParam0)
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

void func_222(var uParam0, bool bParam1)
{
	func_223(uParam0, 0, bParam1, "NULL", 0);
}

void func_223(var uParam0, bool bParam1, bool bParam2, char* sParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], bParam1))
			{
				if (bParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == bParam2)
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
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = bParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			UNK_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], bParam1);
			UNK_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_224(var uParam0, bool bParam1)
{
	func_223(uParam0, 1, -1, bParam1, 0);
}

void func_225()
{
	func_278();
	UNK_0x5D96D8530B3D0904(&bLocal_144, 3);
	UNK_0x5D96D8530B3D0904(&bLocal_144, 4);
	UNK_0x5D96D8530B3D0904(&bLocal_144, true);
	if (bLocal_90 == 1)
	{
		bLocal_359 = "RANDOM@MUGGING1";
		bLocal_365 = "STRUGGLE_Loop_A_Thief";
		bLocal_366 = "STRUGGLE_Loop_A_Shopkeeper";
		bLocal_368 = "FLEE_BACKWARD_Shopkeeper";
		bLocal_367 = "FLEE_BACKWARD_Thief";
		bLocal_370 = "FLEE_FORWARD_Shopkeeper";
		bLocal_369 = "FLEE_FORWARD_Thief";
		func_227();
		bLocal_192 = 200;
		iLocal_48 = 2;
		vLocal_145 = { -132.2607f, -1628.336f, 31.2107f };
		bLocal_83 = joaat("A_M_Y_BUSINESS_02");
		bLocal_84 = joaat("G_M_Y_STRPUNK_01");
		vLocal_69 = { -138.814f, -1635.975f, 31.357f };
		bLocal_75 = 318.519f;
		vLocal_72 = { -129.8504f, -1629.676f, 31.2506f };
		bLocal_78 = 98f;
		vLocal_371 = { vLocal_69 };
		vLocal_374 = { 0f, 0f, bLocal_75 };
		vLocal_166 = { -103.8951f, -1593.239f, 30.49198f };
		vLocal_169 = { -89.29615f, -1575.444f, 32.30938f };
		vLocal_172 = { -152.0367f, -1654.379f, 31.73599f };
		vLocal_175 = { -169.8183f, -1669.556f, 33.94173f };
		vLocal_178 = { -152.0367f, -1654.379f, 31.73599f };
		vLocal_181 = { -103.8951f, -1593.239f, 30.49198f };
		bLocal_79 = 340.0645f;
		vLocal_80 = { -151.0793f, -1650.322f, 31.6504f };
		vLocal_87 = { -133.6872f, -1630.245f, 31.2527f };
		bLocal_85 = joaat("PROP_LD_WALLET_PICKUP");
		cLocal_103 = "REMG1AU";
		sLocal_104 = "REMG1_VIC";
		sLocal_105 = "REMG1_SHT";
		sLocal_106 = "REMG1_ASK";
		sLocal_107 = "REMG1_DRP";
		sLocal_108 = "REMG1_OHY";
		sLocal_109 = "REMG1_THK";
		sLocal_110 = "REMG1_GIV";
		sLocal_111 = "REMG1_MUGA";
		sLocal_112 = "REMG1_WHO";
		switch (func_127())
		{
			case 0:
				sLocal_115 = "REMG1_HOM";
				sLocal_116 = "REMG1_WAM";
				break;
			case 1:
				sLocal_115 = "REMG1_HOF";
				sLocal_116 = "REMG1_WAF";
				break;
			case 2:
				sLocal_115 = "REMG1_HOT";
				sLocal_116 = "REMG1_WAT";
				break;
		}
		bLocal_119 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		bLocal_120 = "A_M_Y_Business_02_WHITE_FULL_01";
		sLocal_117 = "MuggedMan";
		sLocal_118 = "MuggerGang";
		bLocal_50 = true;
		bLocal_378 = "move_m@hurry@b";
	}
	if (bLocal_90 == 2)
	{
		bLocal_359 = "random@mugging2";
		bLocal_361 = "random@mugging2";
		iLocal_48 = 1;
		vLocal_145 = { 287.888f, -284.603f, 52.967f };
		bLocal_83 = joaat("A_F_Y_GENHOT_01");
		bLocal_84 = joaat("G_M_Y_STRPUNK_01");
		vLocal_69 = { 288.6728f, -282.4782f, 52.9707f };
		bLocal_75 = 260.7569f;
		vLocal_72 = { 290.5373f, -283.198f, 52.9799f };
		bLocal_78 = 45f;
		bLocal_79 = 251f;
		vLocal_80 = { 297.4484f, -261.2914f, 53.0037f };
		bLocal_85 = joaat("PROP_LD_HANDBAG");
		cLocal_103 = "REMG2AU";
		sLocal_104 = "REMG2_VIC";
		sLocal_105 = "REMG2_SHT";
		sLocal_106 = "REMG2_ASK";
		sLocal_107 = "REMG2_DRP";
		sLocal_108 = "REMG2_OHY";
		sLocal_109 = "REMG2_THK";
		sLocal_110 = "REMG2_GIV";
		sLocal_112 = "REMG2_WHO";
		sLocal_113 = "REMG2_GUN";
		sLocal_114 = "REMG2_FUT";
		switch (func_127())
		{
			case 0:
				sLocal_115 = "REMG2_HOM";
				sLocal_116 = "REMG2_WAM";
				break;
			case 1:
				sLocal_115 = "REMG2_HOF";
				sLocal_116 = "REMG2_WAF";
				break;
			case 2:
				sLocal_115 = "REMG2_HOT";
				sLocal_116 = "REMG2_WAT";
				break;
		}
		bLocal_119 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_117 = "MuggedYMan";
		sLocal_118 = "MuggerGang";
		bLocal_50 = true;
		bLocal_378 = "move_m@hurry@b";
	}
	if (iLocal_47 == 1)
	{
		func_226();
		bLocal_192 = 2000;
		iLocal_48 = 2;
		if (bLocal_90 == 3)
		{
			bLocal_359 = "RANDOM@MUGGING3";
			vLocal_145 = { -317.1964f, -824.0751f, 31.4284f };
			bLocal_83 = joaat("A_F_Y_HIPSTER_01");
			bLocal_84 = joaat("A_M_O_TRAMP_01");
			vLocal_69 = { -310.9292f, -833.8435f, 30.6261f };
			bLocal_75 = 80.7161f;
			vLocal_72 = { -322.5526f, -827.186f, 30.5857f };
			bLocal_78 = 336.5502f;
			bLocal_79 = 81.8694f;
			vLocal_80 = { -322.3941f, -835.7213f, 30.6001f };
			vLocal_87 = { -320.9667f, -832.1209f, 30.5979f };
			bLocal_85 = joaat("PROP_LD_PURSE_01");
			cLocal_103 = "REMG3AU";
			sLocal_104 = "REMG3_VIC";
			sLocal_105 = "REMG3_SHT";
			sLocal_106 = "REMG3_ASK";
			sLocal_107 = "REMG3_DRP";
			sLocal_108 = "REMG3_OHY";
			sLocal_109 = "REMG3_THK";
			sLocal_110 = "REMG3_GIV";
			sLocal_111 = "REMG3_MUGB";
			sLocal_112 = "REMG3_WHO";
			sLocal_113 = "REMG3_GUN";
			sLocal_114 = "REMG3_FUT";
			switch (func_127())
			{
				case 0:
					sLocal_115 = "REMG3_HOM";
					sLocal_116 = "REMG3_WAM";
					break;
				case 1:
					sLocal_115 = "REMG3_HOF";
					sLocal_116 = "REMG3_WAF";
					break;
				case 2:
					sLocal_115 = "REMG3_HOT";
					sLocal_116 = "REMG3_WAT";
					break;
			}
			bLocal_119 = "G_M_Y_Korean_02_Korean_MINI_02";
			sLocal_117 = "MUGGEDHIPSTER";
			sLocal_118 = "MuggerTramp";
			bLocal_50 = true;
			bLocal_378 = "move_f@hurry@a";
		}
		if (bLocal_90 == 4)
		{
			func_226();
			bLocal_359 = "RANDOM@MUGGING4";
			bLocal_365 = "STRUGGLE_Loop_B_Thief";
			bLocal_366 = "STRUGGLE_Loop_B_Shopkeeper";
			bLocal_368 = "FLEE_BACKWARD_Shopkeeper";
			bLocal_367 = "FLEE_BACKWARD_Thief";
			bLocal_370 = "FLEE_FORWARD_Shopkeeper";
			bLocal_369 = "FLEE_FORWARD_Thief";
			vLocal_145 = { 32.8802f, -1016.061f, 28.4527f };
			bLocal_83 = joaat("A_F_M_TOURIST_01");
			bLocal_84 = joaat("G_M_Y_ARMGOON_02");
			vLocal_69 = { 32.2169f, -1020.864f, 28.456f };
			bLocal_75 = 159.1445f;
			vLocal_371 = { vLocal_69 };
			vLocal_374 = { 0f, 0f, bLocal_75 };
			vLocal_72 = { 38.1933f, -1023.579f, 28.4889f };
			bLocal_78 = 60.1372f;
			bLocal_79 = 248f;
			vLocal_80 = { 42.5323f, -990.353f, 28.248f };
			vLocal_166 = { 38.15186f, -1001.485f, 28.42276f };
			vLocal_169 = { 40.13669f, -995.2711f, 30.37197f };
			vLocal_172 = { 37.21758f, -1040.354f, 28.41506f };
			vLocal_175 = { 19.91492f, -1036.814f, 30.28045f };
			vLocal_178 = { 28.4511f, -1035.718f, 28.3329f };
			vLocal_181 = { 38.6536f, -1001.073f, 28.407f };
			vLocal_87 = { 32.536f, -1020.293f, 28.4576f };
			bLocal_85 = joaat("PROP_LD_WALLET_PICKUP");
			cLocal_103 = "REMG4AU";
			sLocal_104 = "REMG4_VIC";
			sLocal_105 = "REMG4_SHT";
			sLocal_106 = "REMG4_ASK";
			sLocal_107 = "REMG4_DRP";
			sLocal_108 = "REMG4_OHY";
			sLocal_109 = "REMG4_THK";
			sLocal_110 = "REMG4_GIV";
			sLocal_111 = "REMG4_MUGB";
			sLocal_112 = "REMG4_WHO";
			sLocal_113 = "REMG4_GUN";
			sLocal_114 = "REMG4_FUT";
			switch (func_127())
			{
				case 0:
					sLocal_115 = "REMG4_HOM";
					sLocal_116 = "REMG4_WAM";
					break;
				case 1:
					sLocal_115 = "REMG4_HOF";
					sLocal_116 = "REMG4_WAF";
					break;
				case 2:
					sLocal_115 = "REMG4_HOT";
					sLocal_116 = "REMG4_WAT";
					break;
			}
			bLocal_119 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_02";
			sLocal_117 = "MuggedWoman";
			sLocal_118 = "MuggerGang";
			bLocal_50 = true;
			bLocal_378 = "move_f@hurry@a";
		}
	}
}

void func_226()
{
	bLocal_361 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_FEMALE";
	switch (UNK_0x09AC81E49EA267F7(false, 3))
	{
		case 0:
			bLocal_362 = "Return_Wallet_Positive_A_Player";
			bLocal_363 = "Return_Wallet_Positive_A_Female";
			bLocal_364 = "Return_Wallet_Positive_A_Cam";
			break;
		case 1:
			bLocal_362 = "Return_Wallet_Positive_B_Player";
			bLocal_363 = "Return_Wallet_Positive_B_Female";
			bLocal_364 = "Return_Wallet_Positive_B_Cam";
			break;
		case 2:
			bLocal_362 = "Return_Wallet_Positive_C_Player";
			bLocal_363 = "Return_Wallet_Positive_C_Female";
			bLocal_364 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_227()
{
	bLocal_361 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_MALE";
	switch (UNK_0x09AC81E49EA267F7(false, 3))
	{
		case 0:
			bLocal_362 = "Return_Wallet_Positive_A_Player";
			bLocal_363 = "Return_Wallet_Positive_A_Male";
			bLocal_364 = "Return_Wallet_Positive_A_Cam";
			break;
		case 1:
			bLocal_362 = "Return_Wallet_Positive_B_Player";
			bLocal_363 = "Return_Wallet_Positive_B_Male";
			bLocal_364 = "Return_Wallet_Positive_B_Cam";
			break;
		case 2:
			bLocal_362 = "Return_Wallet_Positive_C_Player";
			bLocal_363 = "Return_Wallet_Positive_C_Male";
			bLocal_364 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_228(int iParam0, var uParam1)
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

void func_229(var uParam0)
{
	int iVar0;

	if (uParam0->f_271)
	{
		if ((UNK_0xF4CCC8CB6DE7F1AE() >= (uParam0->f_272 + uParam0->f_273) || UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 2)) || UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 29))
					{
						func_230(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = UNK_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_230(bool bParam0)
{
	func_231(bParam0, &(bParam0->f_2), bParam0->f_1);
}

void func_231(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 30))
	{
		switch (func_221(*bParam0))
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

void func_232(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_197();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_234(iParam0);
	UNK_0x24D1A8A556F3252A(0);
	UNK_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_233();
}

void func_233()
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

void func_234(int iParam0)
{
	Global_111627 = iParam0;
}

bool func_235(vector3 vParam0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		if (!func_275())
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
			if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_191())
			{
				return false;
			}
		}
		if (!Global_111638.f_9080)
		{
			return false;
		}
		if (func_202(0))
		{
			return false;
		}
		if (func_192())
		{
			return false;
		}
		if (func_274())
		{
			return false;
		}
		if (Global_111627 != -1)
		{
			return false;
		}
		if (func_129(func_127()))
		{
			if (func_184(100f, 1) != -1)
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
		if (!func_273(iParam3))
		{
			return false;
		}
		if (func_129(func_127()))
		{
			if (func_272(func_127()) == 4 || func_272(func_127()) == 5)
			{
				return false;
			}
		}
		if (func_129(func_127()))
		{
			if (!func_271(iParam3, bParam4, 145))
			{
				return false;
			}
		}
		if (!func_270(Global_111638.f_24990.f_43[iParam3]))
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
		if (func_269())
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
		if (!func_260(4))
		{
			return false;
		}
		if (!func_179(5))
		{
			return false;
		}
		if (func_259(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_259(0, 0))
		{
			return false;
		}
		if (Global_30914)
		{
			return false;
		}
		if (func_273(30) && !func_259(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_129(func_127()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111638.f_2358.f_539.f_2300[iVar4 /*3*/] };
				bVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_258(bVar8))
				{
					if (func_236(iVar4))
					{
						if (!func_28(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar5) < (210f * 210f))
							{
								if (func_127() != iVar4)
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

int func_236(int iParam0)
{
	bool bVar0;

	bVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_237(bVar0);
}

int func_237(bool bParam0)
{
	return func_238(bParam0, 1);
}

int func_238(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_258(bParam0))
	{
		return 0;
	}
	func_239(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_239(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_240(func_251(), bParam0, uParam1, uParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_240(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_250(bParam0, bParam1))
	{
		iVar0 = func_249(bParam1);
		iVar1 = func_247(bParam0);
		iVar2 = (func_247(bParam0) - func_247(bParam1));
		iVar3 = (func_249(bParam0) - func_249(bParam1));
		iVar4 = (func_246(bParam0) - func_246(bParam1));
		iVar5 = (func_245(bParam0) - func_245(bParam1));
		iVar6 = (func_244(bParam0) - func_244(bParam1));
		iVar7 = (func_243(bParam0) - func_243(bParam1));
	}
	else
	{
		iVar0 = func_249(bParam0);
		iVar1 = func_247(bParam1);
		iVar2 = (func_247(bParam1) - func_247(bParam0));
		iVar3 = (func_249(bParam1) - func_249(bParam0));
		iVar4 = (func_246(bParam1) - func_246(bParam0));
		iVar5 = (func_245(bParam1) - func_245(bParam0));
		iVar6 = (func_244(bParam1) - func_244(bParam0));
		iVar7 = (func_243(bParam1) - func_243(bParam0));
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
		iVar4 = (iVar4 + func_242(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_241(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_241(float fParam0, float fParam1, float fParam2)
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

int func_242(bool bParam0, int iParam1)
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

int func_243(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_244(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_245(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_246(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

int func_247(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_248(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_248(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_249(bool bParam0)
{
	return (bParam0 && 15);
}

bool func_250(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_258(bParam1) || !func_258(bParam0))
	{
		return true;
	}
	bVar0 = func_247(bParam0);
	bVar1 = func_247(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_249(bParam0);
	bVar1 = func_249(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_246(bParam0);
	bVar1 = func_246(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_245(bParam0);
	bVar1 = func_245(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_244(bParam0);
	bVar1 = func_244(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_243(bParam0);
	bVar1 = func_243(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	return false;
}

bool func_251()
{
	var uVar0;

	func_257(&uVar0, UNK_0x4460E481B9E33ADA());
	func_256(&uVar0, UNK_0x8D199E381D262EEF());
	func_255(&uVar0, UNK_0xD8A54335F18763BA());
	func_254(&uVar0, UNK_0x972A296334C9D57B());
	func_253(&uVar0, UNK_0x118229AD063C3C1D());
	func_252(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_252(bool bParam0, int iParam1)
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

void func_253(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_254(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_249(*bParam0);
	iVar1 = func_247(*bParam0);
	if (iParam1 < 1 || iParam1 > func_242(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_255(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_256(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_257(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_258(bool bParam0)
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
	iVar0 = func_243(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_244(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_245(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_247(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_249(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_246(bParam0);
	if (iVar5 < 1 || iVar5 > func_242(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_259(int iParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], bParam1))
	{
		return true;
	}
	return false;
}

bool func_260(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_127();
				if (!func_129(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_268()) || Global_110685) || Global_30770) || func_267()) || func_55(8, -1)) || func_266()) || func_265()) || func_264()) || func_263()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_268()) || Global_30770) || func_267()) || func_55(8, -1)) || func_264()) || func_266()) || func_265()) || func_263()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_268()) || Global_110685) || Global_30770) || func_267()) || func_55(8, -1)) || func_264()) || func_266()) || func_265()) || func_263()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_268()) || Global_110685) || Global_30770) || func_267()) || func_55(8, -1)) || func_266()) || func_265()) || func_263()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_268() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_55(8, -1)) || func_263()) || func_262()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_55(8, -1) || func_266()) || func_265()) || func_262()) || func_261())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_268()) || Global_30770) || func_267()) || func_55(8, -1)) || func_265()) || func_264()) || func_263()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_268()) || func_265()) || Global_110685) || Global_30770) || func_267()) || Global_42596) || func_55(8, -1)) || func_264()) || func_262()) || func_263()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_268()) || Global_110685) || Global_30770) || func_267()) || func_55(8, -1)) || func_264()) || func_262()) || func_266()) || func_265()) || func_263())
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

bool func_261()
{
	return Global_98783.f_1;
}

bool func_262()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_263()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_264()
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

bool func_265()
{
	return Global_98796.f_346 > 0;
}

bool func_266()
{
	return Global_98796.f_345 > 0;
}

bool func_267()
{
	return Global_1312877;
}

bool func_268()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_269()
{
	func_52();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

bool func_270(bool bParam0)
{
	return func_250(func_251(), bParam0);
}

bool func_271(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_127();
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

int func_272(int iParam0)
{
	if (!func_129(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_273(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_275())
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

bool func_274()
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

bool func_275()
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

bool func_276(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0 /*6*/], 3);
}

bool func_277(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0 /*6*/], false);
}

void func_278()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (SYSTEM::VDIST(vLocal_122, vLocal_91) < 20f)
		{
			bLocal_90 = true;
			iLocal_47 = 2;
		}
		if (SYSTEM::VDIST(vLocal_122, vLocal_94) < 20f)
		{
			bLocal_90 = 2;
			iLocal_47 = 3;
		}
		if (SYSTEM::VDIST(vLocal_122, vLocal_97) < 20f)
		{
			bLocal_90 = 3;
			iLocal_47 = 1;
		}
		if (SYSTEM::VDIST(vLocal_122, vLocal_100) < 20f)
		{
			bLocal_90 = 4;
			iLocal_47 = 1;
		}
	}
}

void func_279(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_273 = iParam1;
	}
}

void func_280()
{
	if (bLocal_156)
	{
		if (bLocal_50)
		{
			UNK_0x71199B01895C6202(bLocal_83);
			UNK_0x71199B01895C6202(bLocal_84);
			UNK_0x71199B01895C6202(bLocal_85);
		}
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_63))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				UNK_0xF3268524E9BE6D6E(bLocal_63, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
			}
			UNK_0xFADC0A217229F6B5(bLocal_63, true);
			if (!bLocal_60)
			{
				UNK_0x6D80F1AEBA734886(bLocal_63, bLocal_192);
			}
		}
		if (UNK_0xC844350D5D58C99A(bLocal_62))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_62))
			{
				UNK_0x25C5402CC10F76CD(bLocal_62, true);
				if (UNK_0xD1960163A3042274(bLocal_62, -1146898486) == 7 && UNK_0xD1960163A3042274(bLocal_62, 242628503) == 7)
				{
					UNK_0xDD353D0E9C789D0E(&iLocal_121);
					if (UNK_0x82F88FD400E98881(bLocal_62))
					{
						UNK_0xFC0863196A9340DE(0, 0);
					}
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 9000, 0, 2);
					UNK_0xEEB67C3D0A71A47B(false, vLocal_122, 250f, -1, 0, 0);
					UNK_0x75ABDC5F81978924(iLocal_121);
					UNK_0x78ADC381772E3D54(bLocal_62, iLocal_121);
					UNK_0xF82EA857DA10E0CD(&iLocal_121);
					UNK_0xFADC0A217229F6B5(bLocal_62, true);
					if (!bLocal_154 && !bLocal_148)
					{
						if (UNK_0x25037C66EB32B076())
						{
							func_110();
						}
					}
				}
			}
		}
		SYSTEM::WAIT(0);
		if (UNK_0xE4EDC4B0E92C078B(iLocal_66))
		{
			UNK_0x142CC44DB769B57E(&iLocal_66);
		}
		if (UNK_0xE4EDC4B0E92C078B(iLocal_65))
		{
			UNK_0x142CC44DB769B57E(&iLocal_65);
		}
		if (UNK_0xC844350D5D58C99A(bLocal_64))
		{
			UNK_0xEEEE2E5FA6F78DF0(&bLocal_64);
		}
		if (UNK_0xE4EDC4B0E92C078B(iLocal_67))
		{
			UNK_0x142CC44DB769B57E(&iLocal_67);
		}
	}
	if (iLocal_379 != -1)
	{
		if (UNK_0x49083FDB78AC0509(iLocal_379))
		{
			UNK_0xDDABC98CFF1A4C60(iLocal_379);
		}
		iLocal_379 = -1;
	}
	if (func_196())
	{
		UNK_0x060F249A9A3E3F4E(true);
		UNK_0x51B096AAC60548C1(1f);
	}
	func_37(&uLocal_380, 0, 0);
	func_114(0, 1, 1, 0, 0, 0);
	func_286(-1);
	func_281(&uLocal_393, 0);
	if (iLocal_141 != 0)
	{
		UNK_0x850CF499433B183D(iLocal_141);
	}
	UNK_0x10FAF14A60A0DBE1();
}

void func_281(var uParam0, bool bParam1)
{
	int iVar0;

	if (!bParam1)
	{
		func_283(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_282(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_282(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_283(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			func_284(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_284(var uParam0)
{
	func_285(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_285(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0xEAE0D21A50E6C7F4(bParam0, 30))
	{
		switch (func_221(bParam0))
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

void func_286(int iParam0)
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
	if (func_196())
	{
		func_291(iParam0);
		UNK_0x974531784BE14213(0, 0);
		Global_111629 = UNK_0x1C0640BA9A7327B3();
		func_290(30000);
		StringCopy(&cVar0, func_289(Global_111627, 1), 64);
		if (func_288(Global_111627) > 0)
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
	func_287(&Global_30827);
	Global_111628 = 0;
	func_234(-1);
}

void func_287(var uParam0)
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

int func_288(int iParam0)
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

char* func_289(int iParam0, bool bParam1)
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

void func_290(int iParam0)
{
	Global_41982 = (UNK_0x1C0640BA9A7327B3() + iParam0);
}

void func_291(int iParam0)
{
	func_292(iParam0, 0, func_297(iParam0));
}

void func_292(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<16> Var1;

	bVar0 = func_251();
	func_295(&bVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_294(iParam0, &bVar0);
	Var1 = { func_293(&bVar0) };
}

struct<16> func_293(bool bParam0)
{
	struct<16> Var0;
	bool bVar16;

	StringCopy(&Var0, "", 64);
	bVar16 = func_245(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_244(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_243(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "  ", 64);
	bVar16 = func_246(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "/", 64);
	bVar16 = func_249(*bParam0);
	if (bVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_247(*bParam0), 64);
	return Var0;
}

void func_294(int iParam0, bool bParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *bParam1;
}

void func_295(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_247(*bParam0);
	bVar1 = func_249(*bParam0);
	iVar2 = func_246(*bParam0);
	iVar3 = func_245(*bParam0);
	iVar4 = func_244(*bParam0);
	iVar5 = func_243(*bParam0);
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
	iVar6 = func_242(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_242(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_296(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_296(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_257(bParam0, iParam1);
	func_256(bParam0, iParam2);
	func_255(bParam0, iParam3);
	func_253(bParam0, bParam5);
	func_254(bParam0, iParam4);
	func_252(bParam0, iParam6);
}

int func_297(int iParam0)
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

void func_298(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_197();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_288(iParam0))
	{
		func_308(iParam0, bParam1);
		if (!func_307(51))
		{
			func_304("RE_REWARD", 1, 0, 4000, 10000, func_190(), 0, 138, 0);
			func_303(51);
		}
		if (func_175(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_302(iParam0, bParam1) != 322)
		{
			func_299(func_302(iParam0, bParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_111626 = bParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_204(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_204(7);
			}
			else
			{
				func_204(1);
			}
		}
	}
}

void func_299(int iParam0, var uParam1, var uParam2)
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
		func_74((891 + iParam0), 1, -1, 1);
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
		func_300();
	}
}

void func_300()
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
		func_95(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_301() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_201();
				}
			}
		}
	}
}

int func_301()
{
	return Global_30768;
}

int func_302(int iParam0, bool bParam1)
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

void func_303(int iParam0)
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

void func_304(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_305(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_305(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_306();
	}
}

void func_306()
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

bool func_307(int iParam0)
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

void func_308(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), bParam1);
}

