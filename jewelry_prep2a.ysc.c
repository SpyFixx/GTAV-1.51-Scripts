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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	char cLocal_79[16] = "";
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	bool bLocal_83 = false;
	bool bLocal_84 = false;
	bool bLocal_85 = false;
	bool bLocal_86 = false;
	vector3 vLocal_87 = { 0f, 0f, 0f };
	vector3 vLocal_90 = { 0f, 0f, 0f };
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	bool bLocal_95 = false;
	bool bLocal_96 = false;
	int iLocal_97 = 0;
	bool bLocal_98 = false;
	var uLocal_99 = 30;
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
	var uLocal_250 = 10;
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
	var uLocal_301 = 10;
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
	var uLocal_372 = 20;
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
	var uLocal_473 = 20;
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
	var uLocal_574 = 30;
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
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 5;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 7;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 5;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 3;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 16;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 10;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 5;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 5;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	struct<8> Local_1084[2];
	int iLocal_1101 = 0;
	var uLocal_1102 = 3;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 1092616192;
	var uLocal_1109 = 1101004800;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 3;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 16;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = -1;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 1000;
	var uLocal_1301 = 1000;
	var uLocal_1302 = 0;
	int iLocal_1303 = 0;
	int iLocal_1304 = 0;
	bool bLocal_1305 = false;
	vector3 vLocal_1306 = { 0f, 0f, 0f };
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	bool bLocal_1316 = false;
	var uLocal_1317 = 0;
	struct<2> Local_1318 = { 0, 0 } ;
	bool bLocal_1320 = false;
	var uLocal_1321 = 0;
	struct<2> Local_1322[3];
	bool bLocal_1329 = false;
	int iLocal_1330 = 0;
	int iLocal_1331 = 0;
	bool bLocal_1332 = false;
	float fLocal_1333 = 0f;
	int iLocal_1334 = 0;
	int iLocal_1335 = 0;
	int iLocal_1336 = 0;
	int iLocal_1337 = 0;
	int iLocal_1338 = 0;
	vector3 vLocal_1339[24] = "";
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	bool bLocal_1345 = false;
	bool bLocal_1346 = false;
	int iLocal_1347 = 0;
	int iLocal_1348 = 0;
	bool bLocal_1349 = false;
	int iLocal_1350 = 0;
	bool bLocal_1351 = false;
	bool bLocal_1352 = false;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	StringCopy(&cLocal_79, "JHP2ADS", 16);
	bLocal_83 = joaat("S_M_M_ARMOURED_01");
	bLocal_84 = joaat("BOXVILLE3");
	bLocal_85 = joaat("PROP_IDOL_CASE_02");
	bLocal_86 = joaat("PROP_YELL_PLASTIC_TARGET");
	vLocal_87 = { 0f, 0.175f, 0f };
	vLocal_90 = { 0f, -3.6f, 0f };
	iLocal_93 = 0;
	fLocal_1333 = 0f;
	iLocal_1350 = -1;
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		func_308(5);
	}
	UNK_0x7798376279BB5369(1);
	func_287();
	while (true)
	{
		UNK_0x1A6DFFFEEC27BF4F("M_JewelStoreJobPrep2A", 0);
		if (bLocal_98)
		{
			func_285();
		}
		func_283(&uLocal_99);
		func_207();
		func_205();
		if (!bLocal_96)
		{
			func_201();
			func_200(&Local_1084);
			func_1();
		}
		UNK_0xD60411959D5D930B(0.8f);
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	switch (iLocal_93)
	{
		case 0:
			if (func_23())
			{
				func_22(1);
			}
			break;
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	UNK_0xC92DB9682A650680("JHP2A_STOP");
	UNK_0x790015DC92C918E2();
	UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
	func_8(0);
	if (func_7(87))
	{
		func_3(0, 1);
	}
	else
	{
		func_3(0, 0);
	}
	UNK_0x10FAF14A60A0DBE1();
}

void func_3(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!Global_61514)
	{
		Global_61514 = iParam1;
	}
	if (bParam0)
	{
		if ((func_6(0) && Global_76868.f_1 == 1) && func_5(Global_76868))
		{
		}
		else
		{
			Global_61512 = 1;
		}
	}
	if (Global_111638.f_9080 || func_6(0))
	{
		iVar0 = func_4();
		iVar1 = Global_89496[iVar0 /*5*/];
		uVar2 = Global_76891.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_111638.f_9080)
			{
			}
			return;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 4);
		UNK_0x5D96D8530B3D0904(&Global_76870, true);
		Global_76886 = uVar2;
		Global_76887 = UNK_0x1C0640BA9A7327B3();
	}
}

int func_4()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_5(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return true;
		case 86:
			return true;
		case 91:
			return true;
		default:
			return false;
	}
	return false;
}

bool func_6(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

bool func_7(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

void func_8(bool bParam0)
{
	int iVar0;

	UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
	UNK_0xAB8E2DDC7AF955E0(joaat("BOXVILLE3"), false);
	UNK_0xC05DBA7D4F88D5E5(joaat("S_M_M_ARMOURED_01"), false);
	if (func_21())
	{
		func_13(0);
	}
	iLocal_1335 = 0;
	Global_73935 = 0;
	if (bParam0)
	{
		UNK_0x51B096AAC60548C1(1f);
		UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
		Global_73935 = 0;
	}
	if (UNK_0xC844350D5D58C99A(bLocal_1316))
	{
		if (bParam0)
		{
			UNK_0xA954465BA6FDEFE2(&bLocal_1316);
		}
		else
		{
			UNK_0x046C362CF15F1935(&bLocal_1316);
		}
	}
	if (UNK_0xC844350D5D58C99A(vLocal_1306.x))
	{
		if (bParam0)
		{
			UNK_0xEBA53F35D0085654(&vLocal_1306);
		}
		else
		{
			UNK_0x6DAD7906B73F064D(&vLocal_1306);
		}
	}
	if (UNK_0xC844350D5D58C99A(Local_1318))
	{
		if (bParam0 && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			UNK_0xA954465BA6FDEFE2(&Local_1318);
		}
		else
		{
			UNK_0x046C362CF15F1935(&Local_1318);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_1322)
	{
		if (UNK_0xC844350D5D58C99A(Local_1322[iVar0 /*2*/]))
		{
			if (bParam0)
			{
				UNK_0xF690C84DADBB3551(&(Local_1322[iVar0 /*2*/]));
			}
			else
			{
				if (UNK_0xD59B17D2DFF98E26(Local_1322[iVar0 /*2*/]))
				{
					UNK_0x15AFB6CBDE990FB6(Local_1322[iVar0 /*2*/], 1, true);
				}
				UNK_0xEEEE2E5FA6F78DF0(&(Local_1322[iVar0 /*2*/]));
			}
		}
		iVar0++;
	}
	if (UNK_0xC844350D5D58C99A(bLocal_1329))
	{
		if (bParam0)
		{
			UNK_0xF690C84DADBB3551(&bLocal_1329);
		}
		else
		{
			if (UNK_0xD59B17D2DFF98E26(bLocal_1329))
			{
				UNK_0x15AFB6CBDE990FB6(bLocal_1329, 1, true);
			}
			UNK_0xEEEE2E5FA6F78DF0(&bLocal_1329);
		}
	}
	if (iLocal_1330 != 0)
	{
		UNK_0x2952D66A502EA873(iLocal_1330, 0);
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x440C646F2F11A2A1(UNK_0x16F2683693E537C9(), joaat("WEAPON_BRIEFCASE"), 0))
		{
			UNK_0x650567883F5E3136(UNK_0x16F2683693E537C9(), joaat("WEAPON_BRIEFCASE"));
		}
	}
	func_11(&uLocal_1291, 0, 0);
	func_10();
	if (UNK_0x440C646F2F11A2A1(UNK_0x16F2683693E537C9(), joaat("WEAPON_BRIEFCASE"), 0))
	{
		UNK_0x650567883F5E3136(UNK_0x16F2683693E537C9(), joaat("WEAPON_BRIEFCASE"));
	}
	func_9(6, 0);
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&Global_31015, bParam0);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_31015, bParam0);
	}
}

void func_10()
{
	Global_94599 = 0;
}

void func_11(var uParam0, bool bParam1, int iParam2)
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
		if (func_12(uParam0->f_3))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
	if (!UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (func_12(bVar0))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
}

bool func_12(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_13(bool bParam0)
{
	if (bParam0)
	{
		func_20();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_19(0))
		{
			func_14(0);
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

void func_14(int iParam0)
{
	if (func_18())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_17())
		{
			func_16(1, 1);
		}
		else
		{
			func_16(0, 0);
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
	if (!func_15())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_15()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_16(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_19(0))
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

bool func_17()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_18()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

bool func_19(int iParam0)
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

void func_20()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

bool func_21()
{
	if (Global_19486.f_1 == 1)
	{
		return true;
	}
	return false;
}

void func_22(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_94 = 0;
		bLocal_95 = false;
		iLocal_93 = iParam0;
	}
}

bool func_23()
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;

	vVar0 = { 692.8256f, -1012.544f, 21.722f };
	vVar3 = { 707.15f, -959.66f, 29.4f };
	if (!bLocal_95)
	{
		if (func_199(Local_1318))
		{
			if (UNK_0xC0E5DA578D275A41(Local_1318) != 0)
			{
				Local_1318.f_1 = UNK_0xC0E5DA578D275A41(Local_1318);
			}
			else
			{
				Local_1318.f_1 = func_198(Local_1318, 0, 0);
			}
			func_197("JHP2A_STEAL", 7500, 1);
			func_196("JHP2A_HLP2", 15000);
		}
		else if (UNK_0xC0E5DA578D275A41(Local_1318) != 0)
		{
			UNK_0xCD816869CA451988(1);
			iVar7 = UNK_0xC0E5DA578D275A41(Local_1318);
			UNK_0x142CC44DB769B57E(&iVar7);
			UNK_0xCD816869CA451988(0);
		}
		UNK_0xC92DB9682A650680("JHP2A_START");
		func_138(0f, 0f, 0f, 0f, 1, func_191());
		UNK_0x8B4C4CA774181102(5f, 5f, 4);
		bLocal_1345 = false;
		bLocal_95 = true;
		bLocal_1352 = true;
		iLocal_94 = 1;
	}
	if (bLocal_95)
	{
		func_137();
		switch (iLocal_94)
		{
			case 1:
				if ((((((iLocal_1303 == 0 && UNK_0xC844350D5D58C99A(Local_1318)) && UNK_0xDF1306B443CD3D15(Local_1318, 0)) && UNK_0xC844350D5D58C99A(vLocal_1306.x)) && !UNK_0xEB6A8945D1AC98A1(vLocal_1306.x)) && UNK_0xC42A92762C58E1B9(vLocal_1306.x, Local_1318, 0)) && func_134(&(Local_1084[0 /*8*/])))
				{
					func_106(&uLocal_1291, Local_1318, 0, 0, 1, 1, 1);
				}
				else
				{
					func_11(&uLocal_1291, 0, 0);
				}
				if (iLocal_1303 == 3 || iLocal_1303 == 2)
				{
					UNK_0x8B4C4CA774181102(5f, 5f, 4);
					func_103(&iLocal_1101, 1, 0);
					if (UNK_0xFEBC1E4EC9E001F0() && func_12("JHP2A_HLP2"))
					{
						UNK_0xA37A90C62806D848(1);
					}
					if (!bLocal_1345)
					{
						func_197("JHP2A_TAKEBZ", 7500, 1);
					}
					iLocal_94 = 2;
				}
				else if ((UNK_0xC844350D5D58C99A(bLocal_1320) && UNK_0xDF1306B443CD3D15(bLocal_1320, 0)) && UNK_0x6D18156F72BE0773(bLocal_1320, Local_1318))
				{
					if (UNK_0xE4EDC4B0E92C078B(Local_1318.f_1))
					{
						UNK_0x8B4C4CA774181102(5f, 5f, 4);
						UNK_0xCD816869CA451988(1);
						UNK_0x142CC44DB769B57E(&(Local_1318.f_1));
						UNK_0xCD816869CA451988(0);
						func_102(705, 0);
					}
					func_101(&iLocal_1101, vVar0, 0.1f, 0.1f, 0.1f, 1, bLocal_1320, "JHP2A_RTNVAN", "", "", 1, 0, 1, -1);
					if (UNK_0x3D1053F9EB43B7AD(Local_1318, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, true, 0))
					{
						UNK_0xE0C0351D5B931E37(bLocal_1320, 5f, -1, 0);
						iLocal_94 = 101;
					}
				}
				else if (iLocal_1303 == 1)
				{
					func_103(&iLocal_1101, 1, 0);
					if (!UNK_0xE4EDC4B0E92C078B(Local_1322[0 /*2*/].f_1))
					{
						UNK_0x8B4C4CA774181102(5f, 5f, 4);
						Local_1322[0 /*2*/].f_1 = func_100(Local_1322[0 /*2*/]);
						func_197("JHP2A_TAKEBZ", 7500, 1);
						bLocal_1345 = true;
						UNK_0x05EC10F460C3A4AF(Local_1318, 0);
					}
				}
				else if (iLocal_1303 == 0)
				{
					if (UNK_0xE4EDC4B0E92C078B(Local_1318.f_1))
					{
						UNK_0x8B4C4CA774181102(5f, 5f, 4);
						UNK_0xCD816869CA451988(1);
						UNK_0x142CC44DB769B57E(&(Local_1318.f_1));
						UNK_0xCD816869CA451988(0);
						func_102(705, 0);
					}
					if (func_98(&iLocal_1101, vVar0, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_1318, "JHP2A_RTNVAN", "", "", UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_1318, 0), 0, 1, -1))
					{
						iLocal_94 = 101;
					}
					if (UNK_0xE4EDC4B0E92C078B(iLocal_1101) && UNK_0x327E5A6DA6CE9849(iLocal_1101))
					{
						UNK_0x661342B9651D16E2(iLocal_1101, false);
					}
				}
				break;
			case 101:
				if (UNK_0xC844350D5D58C99A(Local_1318) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_1318, 0))
				{
					bVar8 = Local_1318;
				}
				else if (UNK_0xC844350D5D58C99A(bLocal_1320) && UNK_0x6D18156F72BE0773(bLocal_1320, Local_1318))
				{
					bVar8 = bLocal_1320;
				}
				if (func_96(bVar8, 1093140480 /* Float: 10.5f */, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0))
				{
					if (func_7(87))
					{
						UNK_0x8B4C4CA774181102(5f, 5f, 4);
						iLocal_94 = 1000;
					}
					else
					{
						UNK_0x8B4C4CA774181102(5f, 5f, 4);
						UNK_0x75CDA8644CD3B5F5(UNK_0x16F2683693E537C9(), 0, 0);
						iLocal_94++;
					}
				}
				break;
			case 102:
				if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
				{
					UNK_0x790015DC92C918E2();
					UNK_0x05EC10F460C3A4AF(Local_1318, 0);
					UNK_0xF3F7BF451A720FDF(Local_1318, 1);
					if (UNK_0xC844350D5D58C99A(bLocal_1320))
					{
						UNK_0xE0C0351D5B931E37(bLocal_1320, 5f, 1, 0);
					}
					func_95(0, -1);
					if (UNK_0xC844350D5D58C99A(Local_1322[0 /*2*/]))
					{
						UNK_0xF690C84DADBB3551(&(Local_1322[0 /*2*/]));
					}
					if (UNK_0xC844350D5D58C99A(Local_1322[1 /*2*/]))
					{
						UNK_0xF690C84DADBB3551(&(Local_1322[1 /*2*/]));
					}
					if (UNK_0xC844350D5D58C99A(Local_1322[2 /*2*/]))
					{
						UNK_0xF690C84DADBB3551(&(Local_1322[2 /*2*/]));
					}
					return true;
				}
				break;
			case 2:
				if (!UNK_0x440C646F2F11A2A1(UNK_0x16F2683693E537C9(), joaat("WEAPON_BRIEFCASE"), 0))
				{
					iVar6 = 0;
					while (iVar6 < Local_1322)
					{
						if (UNK_0xC844350D5D58C99A(Local_1322[iVar6 /*2*/]) && !UNK_0xD59B17D2DFF98E26(Local_1322[iVar6 /*2*/]))
						{
							if (UNK_0xE4EDC4B0E92C078B(Local_1318.f_1))
							{
								UNK_0xCD816869CA451988(1);
								UNK_0x142CC44DB769B57E(&(Local_1318.f_1));
								UNK_0xCD816869CA451988(0);
							}
							if (!UNK_0xE4EDC4B0E92C078B(Local_1322[iVar6 /*2*/].f_1))
							{
								Local_1322[iVar6 /*2*/].f_1 = func_100(Local_1322[iVar6 /*2*/]);
							}
						}
						iVar6++;
					}
					iVar6 = 0;
					while (iVar6 < Local_1322)
					{
						if (UNK_0xC844350D5D58C99A(Local_1322[iVar6 /*2*/]) && !UNK_0xD59B17D2DFF98E26(Local_1322[iVar6 /*2*/]))
						{
							if (!UNK_0x440C646F2F11A2A1(UNK_0x16F2683693E537C9(), joaat("WEAPON_BRIEFCASE"), 0))
							{
								bVar9 = func_94(Local_1322[iVar6 /*2*/]);
								if ((bVar9 && UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), UNK_0x68E4ADDDDCD7BDDE(Local_1318, 0f, -3f, -0.5f), UNK_0x68E4ADDDDCD7BDDE(Local_1318, 0f, -4.5f, 1f), 1.68f, 0, true, 1)) || (!bVar9 && UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), UNK_0x68F4C0EC296D3901(Local_1322[iVar6 /*2*/], true), 0.75f, 0.75f, 4f, false, false, 1)))
								{
									UNK_0x262EF6C6306BEA6C(UNK_0x16F2683693E537C9(), joaat("WEAPON_BRIEFCASE"), true, false, false);
									UNK_0xF690C84DADBB3551(&(Local_1322[iVar6 /*2*/]));
									UNK_0x790015DC92C918E2();
									UNK_0x4D7F4CC43D4D0DE3(-1, "PICKUP_WEAPON_SMOKEGRENADE", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", 1);
								}
							}
						}
						iVar6++;
					}
				}
				else
				{
					func_102(705, 0);
					iVar6 = 0;
					while (iVar6 < Local_1322)
					{
						if (UNK_0xE4EDC4B0E92C078B(Local_1322[iVar6 /*2*/].f_1))
						{
							UNK_0x142CC44DB769B57E(&(Local_1322[iVar6 /*2*/].f_1));
						}
						iVar6++;
					}
					func_48(&iLocal_1101, vVar3, 0.1f, 0.1f, 0.1f, 0, "JHP2A_RTNBZ", 1, 1, -1, 1);
					UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar10, 1);
					if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), 722.9849f, -965.7473f, 32.29691f, 50f, 40f, 11.4375f, false, true, 0))
					{
						bVar12 = true;
					}
					if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 709.7432f, -960.3367f, 29.39533f, 703.6478f, -960.3293f, 33.65119f, 4.125f, 0, true, 0))
					{
						bVar11 = true;
					}
					if (bVar11 || ((bVar12 && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) && bLocal_1352))
					{
						UNK_0x38C3A68D7861DCFD(0, 37, 1);
						UNK_0x38C3A68D7861DCFD(0, 44, 1);
						if (!func_21())
						{
							func_13(1);
						}
						if (!UNK_0x4580010DFDF4D53F(UNK_0x16F2683693E537C9()))
						{
							if (!UNK_0xC379FAA7E9DFE7A4(UNK_0x16F2683693E537C9(), 0) && !func_19(0))
							{
								if (iVar10 != joaat("WEAPON_BRIEFCASE"))
								{
									UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_BRIEFCASE"), true);
								}
							}
						}
					}
					if (bVar11)
					{
						if (iVar10 == joaat("WEAPON_BRIEFCASE"))
						{
							if (!func_12("JHP2A_HLP1"))
							{
								func_47("JHP2A_HLP1");
							}
						}
						if (UNK_0xBFC0798A6E3417F9(0, 51) && iVar10 == joaat("WEAPON_BRIEFCASE"))
						{
							if (func_12("JHP2A_HLP1"))
							{
								UNK_0xA37A90C62806D848(1);
							}
							bVar13 = UNK_0x66114668533960AE(UNK_0x16F2683693E537C9(), 1);
							UNK_0xAC0C6241732E36F6(bVar13);
							UNK_0x8B4C4CA774181102(3f, 5f, 4);
							UNK_0xCEAA091B490F8407(-1, "Drop_Case", bVar13, "JWL_PREP_2A_SOUNDS", 0, 0);
							UNK_0xEEEE2E5FA6F78DF0(&bVar13);
							UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
							UNK_0x650567883F5E3136(UNK_0x16F2683693E537C9(), joaat("WEAPON_BRIEFCASE"));
							func_95(0, -1);
							func_46(706);
							func_103(&iLocal_1101, 1, 0);
							if (func_7(87))
							{
								if (func_21())
								{
									func_13(0);
								}
								iLocal_94 = 2000;
							}
							else
							{
								return true;
							}
						}
					}
					else
					{
						if (func_21())
						{
							func_13(0);
						}
						if (UNK_0xFEBC1E4EC9E001F0())
						{
							if (func_12("JHP2A_HLP1"))
							{
								UNK_0xA37A90C62806D848(1);
							}
						}
					}
					bLocal_1352 = UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1);
				}
				break;
			case 1000:
				UNK_0x75CDA8644CD3B5F5(UNK_0x16F2683693E537C9(), 0, 0);
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), true);
				UNK_0x05EC10F460C3A4AF(Local_1318, 0);
				UNK_0xF3F7BF451A720FDF(Local_1318, 1);
				func_45(1);
				func_44(1, 0);
				if (func_42())
				{
					if (func_26(&uLocal_1126, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						UNK_0x8B4C4CA774181102(5f, 5f, 4);
						iLocal_94++;
					}
				}
				break;
			case 1001:
				func_44(1, 0);
				if (func_25())
				{
					iLocal_94++;
				}
				break;
			case 1002:
				func_44(1, 0);
				if (!func_25())
				{
					func_24();
					return true;
				}
				break;
			case 2000:
				UNK_0x8B4C4CA774181102(5f, 5f, 4);
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), true);
				Global_73935 = 1;
				func_45(1);
				func_44(1, 0);
				iLocal_94++;
				break;
			case 2001:
				func_44(1, 0);
				if (func_42())
				{
					if (func_26(&uLocal_1126, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						iLocal_94++;
					}
				}
				break;
			case 2002:
				func_44(1, 0);
				if (func_25())
				{
					iLocal_94++;
				}
				break;
			case 2003:
				func_44(1, 0);
				if (!func_25())
				{
					func_24();
					return true;
				}
				break;
		}
	}
	return false;
}

void func_24()
{
	int iVar0;

	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xAA6B3A4292417750(UNK_0x16F2683693E537C9(), false, false, false, false, false, false, 0, false);
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 157, true);
		UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96113[iVar0]))
		{
			if (!UNK_0x437347B10A200C4B(Global_96113[iVar0], 0))
			{
				UNK_0xAA6B3A4292417750(Global_96113[iVar0], false, false, false, false, false, false, 0, false);
				UNK_0xE121AE1BBF90E186(Global_96113[iVar0], false);
			}
		}
		iVar0++;
	}
	if ((Global_41431 != 0 && Global_41431 != 3) && Global_41431 != 2)
	{
		UNK_0x34D79252800B23FF(5);
		UNK_0x51B096AAC60548C1(1f);
	}
}

bool func_25()
{
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		return true;
	}
	return false;
}

int func_26(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_41(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	if (iParam5 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	Global_2621441 = 0;
	return func_27(sParam3, iParam4, bParam8);
}

int func_27(char* sParam0, int iParam1, bool bParam2)
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
					func_40();
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
		if (func_39(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_38();
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
				func_36();
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
				if (func_35())
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
			if (func_15())
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
			func_34();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_33();
		func_28();
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
		func_40();
	}
	return 0;
}

void func_28()
{
	if (!func_29())
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

bool func_29()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_32())
	{
		return false;
	}
	if (func_30(UNK_0xD803B885F5E47A62()))
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

bool func_30(int iParam0)
{
	return func_31(iParam0, 20);
}

bool func_31(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_32()
{
	return -1;
}

void func_33()
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

void func_34()
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

bool func_35()
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

void func_36()
{
	if (func_37(14))
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
		Global_19486 = func_191();
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

bool func_37(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_38()
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

bool func_39(bool bParam0, int iParam1)
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

void func_40()
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

void func_41(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_42()
{
	if (func_43())
	{
		return false;
	}
	if (UNK_0x04E6B3EAA8742BFA())
	{
		if (UNK_0xD17F06053799A7CA())
		{
			return false;
		}
	}
	return true;
}

bool func_43()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_44(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		UNK_0x38C3A68D7861DCFD(0, 21, 1);
	}
	UNK_0x38C3A68D7861DCFD(0, 25, 1);
	UNK_0x38C3A68D7861DCFD(0, 24, 1);
	UNK_0x38C3A68D7861DCFD(0, 257, 1);
	UNK_0x38C3A68D7861DCFD(0, 141, 1);
	UNK_0x38C3A68D7861DCFD(0, 140, 1);
	UNK_0x38C3A68D7861DCFD(0, 22, 1);
	UNK_0x38C3A68D7861DCFD(0, 44, 1);
	UNK_0x38C3A68D7861DCFD(0, 23, 1);
	UNK_0x38C3A68D7861DCFD(0, 47, 1);
	UNK_0x38C3A68D7861DCFD(0, 36, 1);
	if (bParam0)
	{
		UNK_0x38C3A68D7861DCFD(0, 37, 1);
	}
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (bParam1)
		{
			UNK_0xCAF7AE54F764D5AA(UNK_0x16F2683693E537C9(), 2f);
		}
		else
		{
			UNK_0xCAF7AE54F764D5AA(UNK_0x16F2683693E537C9(), 1f);
		}
		UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 102, true);
	}
	if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
	{
		UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
	}
}

void func_45(bool bParam0)
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xAA6B3A4292417750(UNK_0x16F2683693E537C9(), true, true, true, true, true, false, 0, false);
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 157, false);
		UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), true);
		UNK_0x6E8BDA9057564534(UNK_0x16F2683693E537C9(), 0, 0);
		if (bParam0)
		{
			UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), false);
		}
		UNK_0xE731059548189243(UNK_0x16F2683693E537C9(), 0);
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
	}
	UNK_0x34D79252800B23FF(0);
	UNK_0x51B096AAC60548C1(0f);
}

void func_46(int iParam0)
{
	bool bVar0;
	int iVar1;

	Global_61513 = 0;
	if (!Global_61737[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_73607)
	{
		if (Global_73608[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_73608[iVar1 /*9*/].f_1 = 1;
			Global_73608[iVar1 /*9*/].f_2 = 0f;
			if (Global_73608[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_47(bool bParam0)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

int func_48(bool bParam0, vector3 vParam1, vector3 vParam4, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	return func_49(bParam0, vParam1, vParam4, func_93(), func_93(), iParam7, 3, 0, 0, 0, 0, iParam8, func_92(), func_92(), func_92(), func_92(), func_92(), 0, bParam9, func_92(), 0, 0, bParam10, bParam11, func_92(), func_92(), func_92(), bParam12, 1065353216 /* Float: 1f */);
}

int func_49(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, vector3 vParam10, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24, bool bParam25, bool bParam26, bool bParam27, bool bParam28, bool bParam29, bool bParam30, bool bParam31, bool bParam32, bool bParam33, bool bParam34, bool bParam35, bool bParam36)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;
	int iVar7;
	bool bVar8;
	int iVar9;

	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	bParam0->f_17[0] = bParam15;
	bParam0->f_17[1] = bParam16;
	bParam0->f_17[2] = iParam17;
	bParam0->f_16 = bParam15;
	func_91(bParam0);
	func_90(bParam0);
	func_89();
	if (func_72(bParam0, bParam0->f_17[0], bParam0->f_17[1], bParam0->f_17[2], bParam20, bParam21, bParam22, bParam23, bParam0->f_8, bParam25, bParam18, 0, 0, bParam32, bParam33, bParam34, bParam14, bParam26))
	{
		func_71(bParam20);
		func_71(bParam21);
		func_71(bParam22);
		func_71(bParam23);
		if (UNK_0x0F1CCD77290EE12F())
		{
			bVar1 = false;
			if (UNK_0xDF1306B443CD3D15(bParam18, 0))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam18, 0))
				{
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 3);
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9))
					{
						UNK_0x0674E58A79778E99(&(bParam0->f_13), 4);
					}
					if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 23))
					{
						UNK_0x0674E58A79778E99(&(bParam0->f_13), 23);
					}
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (bParam14 == 4 || bParam14 == 5)
			{
				if (func_69(bParam0, bParam29))
				{
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 3);
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9))
					{
						UNK_0x0674E58A79778E99(&(bParam0->f_13), 4);
					}
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_71(bParam24);
				func_71(bParam27);
				func_71("MORE_SEATS");
				if (bParam26 && UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
				{
					if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
					{
						UNK_0x142CC44DB769B57E(&(bParam0->f_5));
						func_71(bParam19);
					}
					if (UNK_0xE4EDC4B0E92C078B(*bParam0))
					{
						UNK_0x142CC44DB769B57E(bParam0);
					}
					if ((!func_66(bParam0, 1) && !func_65(bParam0)) && !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, false))
					{
						if (bParam30)
						{
							func_64(bParam0, "LOSE_WANTED", 0);
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]))
							{
								func_62(bParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						UNK_0x5D96D8530B3D0904(&(bParam0->f_13), false);
						UNK_0x0674E58A79778E99(&(bParam0->f_13), true);
					}
				}
				else
				{
					if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, false))
					{
						func_71("LOSE_WANTED");
						UNK_0x0674E58A79778E99(&(bParam0->f_13), false);
						UNK_0x5D96D8530B3D0904(&(bParam0->f_13), true);
					}
					if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, true))
					{
						if (!func_66(bParam0, 1))
						{
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]))
							{
								func_62(bParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							UNK_0x0674E58A79778E99(&(bParam0->f_13), true);
						}
					}
					if (!UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
					{
						if (UNK_0xE4EDC4B0E92C078B(*bParam0))
						{
							UNK_0x142CC44DB769B57E(bParam0);
						}
						bParam0->f_5 = func_61(vVar3, 0);
						if (!bParam31 == -1)
						{
							UNK_0xBC8E0A7390523199(bParam0->f_5, bParam31);
						}
						if (bParam35)
						{
							func_60(bParam0->f_5, bParam0);
						}
					}
					else if (!func_59(vVar3, UNK_0xAC14F6E4B17D7835(bParam0->f_5), 0.1f, 0))
					{
						UNK_0x2F9282246F89FFD1(bParam0->f_5, vVar3);
						if (bParam35)
						{
							func_60(bParam0->f_5, bParam0);
						}
					}
					if (!func_66(bParam0, 2))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 2))
						{
							func_64(bParam0, bParam19, 0);
							UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 2);
						}
					}
					if (bParam14 == 4 || bParam14 == 5)
					{
						if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 13))
						{
							bParam13 = false;
						}
					}
					bVar1 = false;
					bVar6 = false;
					iVar7 = 0;
					if ((bParam14 == 1 || bParam14 == 3) || bParam14 == 5)
					{
						bVar6 = true;
					}
					if (bParam14 == 2 || bParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (bParam14 == 4 || bParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vParam1, vParam4, bParam13, bVar6, iVar7);
						if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vParam7, vParam10, bParam36, 0, bVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vParam1, vParam4, bParam13, bVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar2]))
							{
								if (bParam14 == 4 || bParam14 == 5)
								{
									bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
									if (!UNK_0xC42A92762C58E1B9(bParam0->f_17[iVar2], bVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (bParam18 != 0)
								{
									if (!UNK_0xC42A92762C58E1B9(bParam0->f_17[iVar2], bParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[iVar2], func_58()) || !func_56(bParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_53(bParam0))
							{
								func_71(bParam19);
								func_71(bParam24);
								func_71(bParam20);
								func_71(bParam21);
								func_71(bParam22);
								func_71(bParam23);
								func_71("LOSE_WANTED");
								func_71("MORE_SEATS");
								func_71(bParam27);
								func_103(bParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (UNK_0xC844350D5D58C99A(bParam18))
			{
				if ((bParam26 && UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) && (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9) && !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 22)))
				{
					func_71(bParam24);
					func_71(bParam27);
					if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5) || UNK_0xE4EDC4B0E92C078B(*bParam0))
					{
						UNK_0x142CC44DB769B57E(&(bParam0->f_5));
						UNK_0x142CC44DB769B57E(bParam0);
						func_71(bParam19);
					}
					if ((!func_66(bParam0, 1) && !func_65(bParam0)) && !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, false))
					{
						if (bParam30)
						{
							func_64(bParam0, "LOSE_WANTED", 0);
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]))
							{
								func_62(bParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						UNK_0x5D96D8530B3D0904(&(bParam0->f_13), false);
						UNK_0x0674E58A79778E99(&(bParam0->f_13), true);
					}
				}
				else
				{
					if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, false))
					{
						func_71("LOSE_WANTED");
						UNK_0x0674E58A79778E99(&(bParam0->f_13), false);
						UNK_0x5D96D8530B3D0904(&(bParam0->f_13), true);
					}
					if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, true))
					{
						if (!func_66(bParam0, 1))
						{
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]))
							{
								func_62(bParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							UNK_0x0674E58A79778E99(&(bParam0->f_13), true);
						}
					}
					if (UNK_0xDF1306B443CD3D15(bParam18, 0))
					{
						if (!UNK_0xE4EDC4B0E92C078B(*bParam0))
						{
							if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
							{
								UNK_0x142CC44DB769B57E(&(bParam0->f_5));
								func_71(bParam19);
							}
							*bParam0 = func_50(bParam18, 0, 0);
							UNK_0x9D7CDDB4B55142AF(*bParam0, 2);
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
							{
								func_60(*bParam0, bParam0);
							}
						}
						if (!func_66(bParam0, 2))
						{
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 3))
							{
								func_64(bParam0, bParam24, 0);
								UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 3);
								UNK_0x0674E58A79778E99(&(bParam0->f_13), 4);
							}
							else if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9))
							{
								if (!UNK_0x2EBF5002C6B6A06C(bParam27))
								{
									if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
									{
										func_64(bParam0, bParam27, 0);
										UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 4);
									}
								}
								else if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
								{
									func_64(bParam0, bParam24, 0);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 4);
								}
								if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 23))
								{
									if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]))
									{
										func_62(bParam0->f_17[0], "GET_IN_CAR", 3);
									}
									UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
				{
					UNK_0x142CC44DB769B57E(&(bParam0->f_5));
					func_71(bParam19);
				}
				if (bParam14 == 4 || bParam14 == 5)
				{
					if (bParam29 > 0)
					{
						if (!func_66(bParam0, 2))
						{
							if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 13))
								{
									bVar8 = false;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar2]))
										{
											bVar8++;
										}
										iVar2++;
									}
									iVar9 = UNK_0x09AC81E49EA267F7(false, bVar8);
									if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar9]))
									{
										func_62(bParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_64(bParam0, "MORE_SEATS", 0);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 13);
								}
							}
							else if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 3))
							{
								func_64(bParam0, bParam24, 0);
								UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 3);
								UNK_0x0674E58A79778E99(&(bParam0->f_13), 4);
							}
							else if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
							{
								if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9))
								{
									func_64(bParam0, bParam27, 0);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_66(bParam0, 2))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 3))
						{
							func_64(bParam0, bParam24, 0);
							UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 3);
							UNK_0x0674E58A79778E99(&(bParam0->f_13), 4);
						}
						else if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9))
						{
							if (!UNK_0x2EBF5002C6B6A06C(bParam27))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
								{
									func_64(bParam0, bParam27, 0);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 4);
								}
							}
							else if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
							{
								func_64(bParam0, bParam24, 0);
								UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, false))
		{
			UNK_0x0674E58A79778E99(&(bParam0->f_13), false);
		}
		func_71(bParam19);
		func_71(bParam24);
		func_71(bParam27);
		func_71(bParam24);
		func_71("LOSE_WANTED");
		if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
		{
			UNK_0x142CC44DB769B57E(&(bParam0->f_5));
		}
		if (UNK_0xE4EDC4B0E92C078B(*bParam0))
		{
			UNK_0x142CC44DB769B57E(bParam0);
		}
	}
	UNK_0x0674E58A79778E99(&(bParam0->f_13), 11);
	UNK_0x0674E58A79778E99(&(bParam0->f_13), 12);
	return 0;
}

int func_50(bool bParam0, bool bParam1, bool bParam2)
{
	return func_51(bParam0, !bParam1, bParam2);
}

int func_51(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_52(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_52(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_52(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_52(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_53(bool bParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 12))
	{
		if (func_55(UNK_0x16F2683693E537C9()))
		{
			if (func_54(1, 0, 1) || UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 7))
			{
				return true;
			}
		}
	}
	else if (func_54(1, 0, 1) || UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 7))
	{
		return true;
	}
	return false;
}

bool func_54(bool bParam0, bool bParam1, bool bParam2)
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

bool func_55(bool bParam0)
{
	float fVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		fVar0 = UNK_0x9C66D99E63E8E24C(bParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return true;
		}
	}
	return false;
}

bool func_56(bool bParam0, bool bParam1)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()) && bParam1)
		{
			if (func_57(UNK_0x16F2683693E537C9(), bParam0))
			{
				UNK_0x7C27693C5112825F(func_58(), 50f);
				return true;
			}
		}
		else if (UNK_0xBFDE4EE64C4BF2D6(bParam0, func_58()))
		{
			UNK_0x7C27693C5112825F(func_58(), 50f);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_57(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0x0E0E6175453415CB(bParam0))
		{
			bVar0 = UNK_0x6937EA2286828455(bParam0, 0);
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam1))
				{
					if (UNK_0x82CCEAB29E9451DD(bParam1, bVar0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_58()
{
	return UNK_0x5D08BBCCCC2F43A4(UNK_0xA30EC016B12C03E4());
}

bool func_59(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (UNK_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
		{
			if (UNK_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
			{
				if (UNK_0x755FF954DAE327E1((vParam0.z - vParam3.z)) <= fParam6)
				{
					return true;
				}
			}
		}
	}
	else if (UNK_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (UNK_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
		{
			return true;
		}
	}
	return false;
}

void func_60(int iParam0, bool bParam1)
{
	if (UNK_0xE4EDC4B0E92C078B(iParam0))
	{
		if (UNK_0xE4EDC4B0E92C078B(bParam1->f_6))
		{
			UNK_0x661342B9651D16E2(bParam1->f_6, false);
		}
		UNK_0xB8C3D2D6C4AAEF18(0);
		UNK_0x053C926E5E341906();
		bParam1->f_6 = iParam0;
		UNK_0x661342B9651D16E2(iParam0, true);
	}
}

int func_61(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_52(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

void func_62(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_63(iParam2), 1);
}

int func_63(int iParam0)
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

void func_64(bool bParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!UNK_0x2EBF5002C6B6A06C(bParam1))
		{
			if (!UNK_0x7F8A39872A07D2CE(bParam1, ""))
			{
				func_197(bParam1, 7500, 1);
			}
		}
	}
	bParam0->f_10 = UNK_0x1C0640BA9A7327B3();
}

bool func_65(bool bParam0)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_16))
	{
		if (UNK_0x65636D4556D82155(bParam0->f_16))
		{
			return true;
		}
	}
	return false;
}

bool func_66(bool bParam0, int iParam1)
{
	if (iParam1 != 1 || UNK_0x04E6B3EAA8742BFA())
	{
		if (UNK_0xD17F06053799A7CA())
		{
			return true;
		}
		if (func_68(bParam0))
		{
			return true;
		}
	}
	if (iParam1 != 2 || UNK_0x04E6B3EAA8742BFA())
	{
		if (func_43() && !func_67())
		{
			return true;
		}
	}
	return false;
}

bool func_67()
{
	if (Global_21816 == 1)
	{
		return true;
	}
	return false;
}

bool func_68(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = UNK_0x1C0640BA9A7327B3();
	iVar0 = (iVar1 - bParam0->f_10);
	if (iVar0 < 35)
	{
		return true;
	}
	return false;
}

bool func_69(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (func_70(bVar0, bParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_70(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (UNK_0xC844350D5D58C99A(bParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = UNK_0xD6DF381716822EFE(bParam0);
		if (bParam2 > 0)
		{
			if (iVar1 >= bParam2)
			{
				if (bParam2 > 1)
				{
					if (!UNK_0x4A43A287EB2A2B60(bParam0, 1))
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
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!UNK_0x4A43A287EB2A2B60(bParam0, 1))
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
	return false;
}

void func_71(bool bParam0)
{
	if (!UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		UNK_0x2F23E8033F1ADDD9(bParam0);
	}
}

bool func_72(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7[3];
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	bool bVar15[3];
	bool bVar19[3];
	bool bVar23;
	bool bVar24;
	int iVar25;
	bool bVar26;
	int iVar27;
	vector3 vVar28;
	bool bVar31;
	bool bVar32;

	iVar4 = 0;
	bParam0->f_17[0] = uParam1;
	bParam0->f_17[1] = uParam2;
	bParam0->f_17[2] = uParam3;
	bParam0->f_16 = uParam1;
	bVar15[0] = bParam4;
	bVar15[1] = bParam5;
	bVar15[2] = bParam6;
	bVar19[0] = bParam13;
	bVar19[1] = bParam14;
	bVar19[2] = bParam15;
	bVar6 = true;
	bVar1 = false;
	iVar2 = 0;
	bVar3 = false;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
		{
			bVar3++;
		}
		if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 29) && !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 28))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
				{
					UNK_0xD5EF6A937E06E46F(bParam0->f_17[bVar0], 1, -1, 0);
				}
				if (bVar0 == 2)
				{
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 28);
				}
			}
		}
		else if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 29) && UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 28))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
			{
				UNK_0xD5EF6A937E06E46F(bParam0->f_17[bVar0], 0, -1, 0);
			}
			if (bVar0 == 2)
			{
				UNK_0x0674E58A79778E99(&(bParam0->f_13), 28);
			}
		}
		bVar0++;
	}
	if (bVar3 == 0)
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 26))
	{
		bVar23 = false;
		if (!UNK_0xC844350D5D58C99A(bParam0->f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			bVar24 = UNK_0x83C1D4B63BBD91F6(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 50f, false, iVar25);
			if (UNK_0xDF1306B443CD3D15(bVar24, 0))
			{
				bParam0->f_21 = bVar24;
			}
		}
		if (UNK_0xDF1306B443CD3D15(bParam0->f_21, 0))
		{
			if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bParam0->f_21, true)) < 400f)
			{
				if (!UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
				{
					if (!UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0) || !bParam17)
					{
						if (func_70(bParam0->f_21, bParam0, bVar3))
						{
							bVar0 = false;
							while (bVar0 < 3)
							{
								if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
								{
									UNK_0xCAF7AE54F764D5AA(bParam0->f_17[bVar0], 1f);
									if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_58()))
									{
										UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
									}
									if (UNK_0xD1960163A3042274(bParam0->f_17[bVar0], -1794415470) == 7 && !func_88(bParam0->f_17[bVar0], bParam0->f_21))
									{
										if (!UNK_0x869EFD0BC0868856(bParam0->f_17[bVar0]) && !UNK_0xA48EBBEA418ADC94(bParam0->f_17[bVar0]))
										{
											UNK_0x11AD11297DC58CC7(bParam0->f_17[bVar0], true);
											UNK_0x5B1D360B9C6F0A09(bParam0->f_17[bVar0], bParam0->f_21, 60000, bVar0, 1f, 1, 0);
											UNK_0xBF541ED34EA81209(bParam0->f_17[bVar0], bVar0);
										}
									}
								}
								bVar0++;
							}
							return true;
						}
						else
						{
							bVar23 = true;
						}
					}
					else
					{
						bVar23 = true;
					}
				}
				else
				{
					bVar23 = true;
				}
			}
			else
			{
				bVar23 = true;
			}
		}
		else
		{
			bVar23 = true;
		}
		if (bVar23)
		{
			UNK_0x0674E58A79778E99(&(bParam0->f_13), 26);
			bVar0 = false;
			while (bVar0 < 3)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
				{
					if (!UNK_0x81A5359F25512A04(bParam0->f_17[bVar0]) && !bParam0->f_15)
					{
						UNK_0xA3BF0AA5A2608191(bParam0->f_17[bVar0]);
					}
					if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_58()))
					{
						if (func_86(bParam0, bParam0->f_17[bVar0], bParam8, 1))
						{
							UNK_0xE25C96A9C36BE5D2(bParam0->f_17[bVar0], func_58());
						}
					}
				}
				bVar0++;
			}
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 26))
	{
		if ((!func_85(bParam0) && UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9())) && !UNK_0xC844350D5D58C99A(bParam10))
		{
			bVar13 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0xDF1306B443CD3D15(bVar13, 0))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 13))
				{
					if (bParam16 == 4 || bParam16 == 5)
					{
					}
					if (!func_66(bParam0, 2))
					{
						bVar26 = false;
						iVar27 = 0;
						bVar0 = false;
						while (bVar0 < 3)
						{
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
							{
								bVar26++;
							}
							bVar0++;
						}
						iVar27 = UNK_0x09AC81E49EA267F7(false, bVar26);
						if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar27]))
						{
							func_62(bParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_64(bParam0, "MORE_SEATS", 0);
						UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			UNK_0x0674E58A79778E99(&(bParam0->f_13), 13);
			func_71("MORE_SEATS");
		}
		if (!UNK_0xC844350D5D58C99A(bParam10))
		{
			if ((!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]) || !UNK_0xEB6A8945D1AC98A1(bParam0->f_17[1])) || !UNK_0xEB6A8945D1AC98A1(bParam0->f_17[2]))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 31))
				{
					if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()) && !func_66(bParam0, 2))
					{
						bVar13 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
						if (func_84(bVar13, bParam0))
						{
							func_64(bParam0, "CMN_VEHSUIT", 0);
							UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 31);
						}
					}
				}
				else if (!UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
				{
					UNK_0x0674E58A79778E99(&(bParam0->f_13), 31);
					func_71("CMN_VEHSUIT");
				}
			}
		}
		if (UNK_0xDF1306B443CD3D15(bParam10, 0))
		{
			if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bParam10))
			{
				if (UNK_0xBFC0798A6E3417F9(0, 75))
				{
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 21);
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 21))
			{
				UNK_0x0674E58A79778E99(&(bParam0->f_13), 21);
			}
		}
		bVar0 = false;
		while (bVar0 < 3)
		{
			if (UNK_0xC844350D5D58C99A(bParam0->f_17[bVar0]))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
				{
					if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_58()))
					{
						UNK_0xFCCF7611216AE801(bParam0->f_17[bVar0], 1);
					}
					else
					{
						UNK_0xFCCF7611216AE801(bParam0->f_17[bVar0], 0);
					}
					if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
					{
						bVar13 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
						if (UNK_0xDF1306B443CD3D15(bVar13, 0))
						{
							if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_58()))
							{
								if (!func_85(bParam0) && UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
								{
									if (!func_83(bParam0->f_17[bVar0]))
									{
										UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
									}
								}
							}
						}
						if (bVar13 != bParam10 && !UNK_0x437347B10A200C4B(bVar13, 0))
						{
							if (UNK_0x82CCEAB29E9451DD(bParam0->f_17[bVar0], bVar13))
							{
								if (UNK_0x70EED0761B82965E(bVar13) && !UNK_0xF79A7BCA9E38BBBC(bVar13))
								{
									vVar28 = { UNK_0x68F4C0EC296D3901(bVar13, true) };
									if (vVar28.z < -1f)
									{
										UNK_0x45F014B3D0466974(bParam0->f_17[bVar0], bVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_58()))
					{
						if (UNK_0x0E0E6175453415CB(bParam0->f_17[bVar0]))
						{
							bVar13 = UNK_0x6937EA2286828455(bParam0->f_17[bVar0], 0);
							if (!UNK_0x437347B10A200C4B(bVar13, 0))
							{
								if (UNK_0xDF1306B443CD3D15(bParam10, 0))
								{
									if (bVar13 != bParam10)
									{
										if (!UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bVar13))
										{
											if (UNK_0x9C66D99E63E8E24C(bVar13) > 5f)
											{
												UNK_0x45F014B3D0466974(bParam0->f_17[bVar0], bVar13, 4160);
											}
											else
											{
												UNK_0x45F014B3D0466974(bParam0->f_17[bVar0], bVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
									{
										bVar31 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
									}
									if (UNK_0xDF1306B443CD3D15(bVar31, 0))
									{
										if (bVar13 != bVar31)
										{
											if (UNK_0x9C66D99E63E8E24C(bVar13) > 5f)
											{
												UNK_0x45F014B3D0466974(bParam0->f_17[bVar0], bVar13, 4160);
											}
											else
											{
												UNK_0x45F014B3D0466974(bParam0->f_17[bVar0], bVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_58()))
					{
						bVar32 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
						if (UNK_0xC844350D5D58C99A(bVar32))
						{
							if (func_70(bVar32, bParam0, 0))
							{
								if (func_82(bVar0, bParam0) || !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 27))
								{
									UNK_0xBF541ED34EA81209(bParam0->f_17[bVar0], bVar0);
									func_81(bVar0, bParam0);
									iVar4++;
									if (iVar4 >= bVar3)
									{
										UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 27);
									}
								}
							}
							else if (!func_82(bVar0, bParam0))
							{
								if (UNK_0x134B62B726CEC8E6(bVar32) == joaat("SENTINEL2"))
								{
									UNK_0xBF541ED34EA81209(bParam0->f_17[bVar0], 4);
								}
								else
								{
									UNK_0xBF541ED34EA81209(bParam0->f_17[bVar0], 2);
								}
								func_80(bVar0, bParam0);
							}
						}
					}
					if ((!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_58()) && !func_79(bParam0->f_17[bVar0], bParam10)) && !func_78(bParam0->f_17[bVar0], bParam10))
					{
						if (func_86(bParam0, bParam0->f_17[bVar0], bParam8, bParam11))
						{
							if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_58()))
							{
								if (((!UNK_0x869EFD0BC0868856(bParam0->f_17[bVar0]) && !UNK_0xA48EBBEA418ADC94(bParam0->f_17[bVar0])) && !UNK_0x7F69A7C512ACACFD(bParam0->f_17[bVar0])) && !UNK_0x81A5359F25512A04(bParam0->f_17[bVar0]))
								{
									iVar14 = UNK_0xD1960163A3042274(bParam0->f_17[bVar0], -1794415470);
									if (iVar14 == 7)
									{
										UNK_0xA3BF0AA5A2608191(bParam0->f_17[bVar0]);
									}
									UNK_0xE25C96A9C36BE5D2(bParam0->f_17[bVar0], func_58());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
							{
								bParam0->f_11 = UNK_0x1C0640BA9A7327B3();
								bParam0->f_1[bVar0] = func_50(bParam0->f_17[bVar0], 0, 0);
								UNK_0x9D7CDDB4B55142AF(bParam0->f_1[bVar0], 2);
								if (bParam9)
								{
									func_60(bParam0->f_1[bVar0], bParam0);
								}
							}
						}
						bVar6 = false;
					}
					else if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
					{
						if (((func_56(bParam0->f_17[bVar0], 1) || func_79(bParam0->f_17[bVar0], bParam10)) || bParam12) || (UNK_0xDF1306B443CD3D15(bParam10, 0) && !UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam10, 0)))
						{
							if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
							{
								UNK_0x142CC44DB769B57E(&(bParam0->f_1[bVar0]));
								func_71(bVar15[bVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_60(bParam0->f_1[bVar0], bParam0);
							}
							bVar6 = false;
						}
					}
					else if (UNK_0xDF1306B443CD3D15(bParam10, 0))
					{
						if (!UNK_0x82CCEAB29E9451DD(bParam0->f_17[bVar0], bParam10))
						{
							if ((UNK_0x12DE711B1C681E9E(bParam0->f_17[bVar0], bParam10, 20f, 20f, 5f, 0, 1, 0) && !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 11)) && !((bParam17 && UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) && !UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam10, 0)))
							{
								if (UNK_0x0E0E6175453415CB(bParam0->f_17[bVar0]))
								{
									if (!UNK_0xC42A92762C58E1B9(bParam0->f_17[bVar0], bParam10, 0))
									{
										if (!func_56(bParam0->f_17[bVar0], 1))
										{
											if (func_55(bParam0->f_17[bVar0]))
											{
												iVar14 = UNK_0xD1960163A3042274(bParam0->f_17[bVar0], joaat("SCRIPT_TASK_LEAVE_VEHICLE"));
												if (iVar14 == 7)
												{
													UNK_0x75CDA8644CD3B5F5(bParam0->f_17[bVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_58()))
									{
										if ((((!UNK_0x7F69A7C512ACACFD(bParam0->f_17[bVar0]) && !UNK_0x869EFD0BC0868856(bParam0->f_17[bVar0])) && !UNK_0xA48EBBEA418ADC94(bParam0->f_17[bVar0])) && !UNK_0x81A5359F25512A04(bParam0->f_17[bVar0])) && !UNK_0x4E861BC5B1EDA7BD(bParam10))
										{
											UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
										}
									}
									iVar14 = UNK_0xD1960163A3042274(bParam0->f_17[bVar0], -1794415470);
									if (iVar14 == 7 && !func_88(bParam0->f_17[bVar0], bParam10))
									{
										if (((((!UNK_0x7F69A7C512ACACFD(bParam0->f_17[bVar0]) && !UNK_0x7F69A7C512ACACFD(UNK_0x16F2683693E537C9())) && !func_77(bParam0->f_17[bVar0], 2f)) && !UNK_0x869EFD0BC0868856(bParam0->f_17[bVar0])) && !UNK_0xA48EBBEA418ADC94(bParam0->f_17[bVar0])) && !UNK_0x4E861BC5B1EDA7BD(bParam10))
										{
											UNK_0x11AD11297DC58CC7(bParam0->f_17[bVar0], true);
											if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 10))
											{
												UNK_0xCAF7AE54F764D5AA(bParam0->f_17[bVar0], 1f);
											}
											UNK_0x5B1D360B9C6F0A09(bParam0->f_17[bVar0], bParam10, 60000, bVar0, 2f, 1, 0);
											UNK_0x579B0182884711E5(bParam0->f_17[bVar0], 0);
										}
									}
									else if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam10, 0))
									{
										bParam0->f_1[bVar0] = func_50(bParam0->f_17[bVar0], 0, 0);
										UNK_0x9D7CDDB4B55142AF(bParam0->f_1[bVar0], 2);
										bVar6 = false;
									}
								}
							}
							else if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_58()))
							{
								if (func_86(bParam0, bParam0->f_17[bVar0], bParam8, bParam11))
								{
									if (!UNK_0x869EFD0BC0868856(bParam0->f_17[bVar0]) && !UNK_0xA48EBBEA418ADC94(bParam0->f_17[bVar0]))
									{
										iVar14 = UNK_0xD1960163A3042274(bParam0->f_17[bVar0], -1794415470);
										if (iVar14 == 7)
										{
											UNK_0xA3BF0AA5A2608191(bParam0->f_17[bVar0]);
										}
										UNK_0x11AD11297DC58CC7(bParam0->f_17[bVar0], false);
										UNK_0xE25C96A9C36BE5D2(bParam0->f_17[bVar0], func_58());
									}
								}
							}
						}
						else if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bParam10))
						{
							if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_58()))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 21))
								{
									UNK_0xE25C96A9C36BE5D2(bParam0->f_17[bVar0], func_58());
								}
							}
							else if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 21))
							{
								UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
								UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 21);
							}
						}
						else if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_58()) && !UNK_0x4E861BC5B1EDA7BD(bParam10))
						{
							UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
						}
					}
				}
				else if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
				{
					UNK_0x142CC44DB769B57E(&(bParam0->f_1[bVar0]));
					func_71(bVar15[bVar0]);
				}
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 < 3)
		{
			if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
			{
				iVar7[bVar0] = 1;
				bVar1++;
			}
			bVar0++;
		}
		if (!func_66(bParam0, 2))
		{
			if (bVar1 > 0)
			{
				bVar0 = false;
				while (bVar0 < 3)
				{
					if (iVar7[bVar0])
					{
						if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
						{
							if (func_83(bParam0->f_17[bVar0]) || UNK_0x12DE711B1C681E9E(bParam0->f_17[bVar0], UNK_0x16F2683693E537C9(), bParam0->f_8, bParam0->f_8, bParam0->f_8, 0, 1, 0))
							{
								bVar1 = (bVar1 - 1);
								iVar7[bVar0] = 0;
							}
						}
					}
					else if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
					{
						if (!UNK_0x12DE711B1C681E9E(bParam0->f_17[bVar0], UNK_0x16F2683693E537C9(), (bParam0->f_8 * 0.85f), (bParam0->f_8 * 0.85f), bParam0->f_8, 0, 1, 0) && !func_83(bParam0->f_17[bVar0]))
						{
						}
					}
					bVar0++;
				}
			}
			iVar5 = UNK_0x1C0640BA9A7327B3();
			if ((iVar5 - bParam0->f_11) > 1500 || bVar3 == 1)
			{
				if (bVar1 > 0)
				{
					if (bParam0->f_12 < bVar1)
					{
						if ((bVar1 == bVar3 || (iVar2 + bVar1) == bVar3) && bVar3 > 1)
						{
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 5))
							{
								func_64(bParam0, bParam7, 0);
								UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 5);
								bParam0->f_12 = bVar1;
							}
							else
							{
								bParam0->f_12 = bVar1;
							}
						}
						else
						{
							bVar0 = false;
							while (bVar0 < 3)
							{
								if (iVar7[bVar0])
								{
									if (!func_76(bVar0, bParam0))
									{
										if (!UNK_0x2EBF5002C6B6A06C(bVar19[bVar0]))
										{
											if (!UNK_0x7F8A39872A07D2CE(bVar19[bVar0], ""))
											{
												func_74(bParam0, bVar15[bVar0], bVar19[bVar0], 0);
												func_73(bVar0, bParam0);
												bParam0->f_12 = bVar1;
											}
										}
										if (!func_76(bVar0, bParam0))
										{
											func_64(bParam0, bVar15[bVar0], 0);
											func_73(bVar0, bParam0);
											bParam0->f_12 = bVar1;
										}
									}
									else
									{
										bParam0->f_12 = bVar1;
									}
								}
								bVar0++;
							}
						}
					}
				}
				else
				{
					bParam0->f_12 = 0;
				}
			}
		}
		UNK_0x0674E58A79778E99(&(bParam0->f_13), 10);
		if (bVar6 && !bVar12)
		{
			bVar0 = false;
			while (bVar0 < 3)
			{
				if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
				{
					UNK_0x142CC44DB769B57E(&(bParam0->f_1[bVar0]));
					func_71(bVar15[bVar0]);
				}
				bVar0++;
			}
			func_71("MORE_SEATS");
			return true;
		}
	}
	return false;
}

void func_73(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 14);
			break;
		case 1:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 15);
			break;
		case 2:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 16);
			break;
	}
}

void func_74(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!UNK_0x2EBF5002C6B6A06C(bParam1))
		{
			if (!UNK_0x7F8A39872A07D2CE(bParam1, ""))
			{
				func_75(bParam1, bParam2, 7500, 1);
			}
		}
	}
	bParam0->f_10 = UNK_0x1C0640BA9A7327B3();
}

void func_75(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x6B012227B3921E18(bParam1);
	UNK_0x12F275EDEEF63A2B(iParam2, 1);
}

bool func_76(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 14);
		case 1:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 15);
		case 2:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 16);
		default:
			break;
	}
	return false;
}

bool func_77(bool bParam0, float fParam1)
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(bParam0, 0))
	{
		bVar0 = UNK_0x6937EA2286828455(bParam0, 0);
		if (!UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0x9C66D99E63E8E24C(bVar0) > fParam1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_78(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (!UNK_0xBFDE4EE64C4BF2D6(bParam0, func_58()))
		{
			iVar0 = UNK_0x8B157DA177FBCF50(bParam0);
			if (UNK_0xDF1306B443CD3D15(bParam1, 0))
			{
				if (UNK_0x12DE711B1C681E9E(bParam0, bParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == bParam1)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_79(bool bParam0, bool bParam1)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0xC844350D5D58C99A(bParam1))
		{
			if (UNK_0xDF1306B443CD3D15(bParam1, 0))
			{
				if (UNK_0x82CCEAB29E9451DD(bParam0, bParam1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_80(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 17);
			break;
		case 1:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 18);
			break;
		case 2:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 19);
			break;
	}
}

void func_81(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 17);
			break;
		case 1:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 18);
			break;
		case 2:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 19);
			break;
	}
}

bool func_82(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 17);
		case 1:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 18);
		case 2:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 19);
		default:
			break;
	}
	return false;
}

bool func_83(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		bVar0 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
		if (UNK_0xDF1306B443CD3D15(bVar0, 0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bParam0))
			{
				bVar1 = UNK_0x3C66DF04E6EA3587(bParam0);
				if (UNK_0xDF1306B443CD3D15(bVar1, 0))
				{
					if (bVar0 == bVar1)
					{
						if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam0, 20f, 20f, 20f, 0, 1, 0) && UNK_0x12DE711B1C681E9E(bParam0, bVar1, 20f, 20f, 20f, 0, 1, 0))
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

bool func_84(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (UNK_0x134B62B726CEC8E6(bParam0) == joaat("BUS") || UNK_0x134B62B726CEC8E6(bParam0) == joaat("COACH"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			bVar3 = UNK_0xA30B8362589C124A(bParam0, false, 0);
			if (!UNK_0xEB6A8945D1AC98A1(bVar3))
			{
				if ((bVar3 == bParam1->f_17[0] || bVar3 == bParam1->f_17[1]) || bVar3 == bParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			bVar4 = UNK_0xA30B8362589C124A(bParam0, true, 0);
			if (!UNK_0xEB6A8945D1AC98A1(bVar4))
			{
				if ((bVar4 == bParam1->f_17[0] || bVar4 == bParam1->f_17[1]) || bVar4 == bParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			bVar5 = UNK_0xA30B8362589C124A(bParam0, 2, 0);
			if (!UNK_0xEB6A8945D1AC98A1(bVar5))
			{
				if ((bVar5 == bParam1->f_17[0] || bVar5 == bParam1->f_17[1]) || bVar5 == bParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_85(bool bParam0)
{
	bool bVar0;

	if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (func_70(bVar0, bParam0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_86(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam1))
	{
		if (UNK_0x0E0E6175453415CB(bParam1))
		{
			bVar0 = UNK_0x6937EA2286828455(bParam1, 0);
			if (!UNK_0x437347B10A200C4B(bVar0, 0))
			{
				if (UNK_0xDF1306B443CD3D15(bVar0, 0))
				{
					if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bVar0))
					{
						if (func_85(bParam0))
						{
							return true;
						}
					}
					else if (bParam3)
					{
						return true;
					}
				}
				else if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam1, bParam2, bParam2, 3f, 0, 1, 0))
				{
					return true;
				}
			}
		}
		else if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam1, bParam2, bParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				bVar0 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					if (func_70(bVar0, bParam0, 0))
					{
						if (UNK_0xDF1306B443CD3D15(bVar0, 0))
						{
							if (func_87(bVar0))
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
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_87(bool bParam0)
{
	float fVar0;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		fVar0 = UNK_0x9C66D99E63E8E24C(bParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return true;
		}
	}
	return false;
}

bool func_88(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam1, 0))
		{
			iVar0 = UNK_0x3C66DF04E6EA3587(bParam0);
			if (iVar0 == bParam1)
			{
				return true;
			}
		}
	}
	return false;
}

void func_89()
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

void func_90(bool bParam0)
{
	int iVar0;

	if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 25))
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (UNK_0xC844350D5D58C99A(bParam0->f_17[iVar0]))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar0]))
				{
					UNK_0x4E885A246A9D983A(bParam0->f_17[iVar0], 32, false);
					UNK_0x4E885A246A9D983A(bParam0->f_17[iVar0], 305, true);
					UNK_0x4E885A246A9D983A(bParam0->f_17[iVar0], 268, true);
					UNK_0x579B0182884711E5(bParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 25);
	}
}

void func_91(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (UNK_0xC844350D5D58C99A(bParam0->f_17[iVar0]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar0]))
			{
				if (UNK_0x0E0E6175453415CB(bParam0->f_17[iVar0]))
				{
					UNK_0xA245D14CC59CDD36(bParam0->f_17[iVar0], 0);
					UNK_0x7D732AB707BE9152(bParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
			{
				UNK_0xA245D14CC59CDD36(UNK_0x16F2683693E537C9(), 0);
				UNK_0x7D732AB707BE9152(UNK_0x16F2683693E537C9(), 0);
			}
		}
	}
}

bool func_92()
{
	var uVar0;

	return uVar0;
}

Vector3 func_93()
{
	vector3 vVar0;

	return vVar0;
}

bool func_94(bool bParam0)
{
	vector3 vVar0;

	if (UNK_0x437347B10A200C4B(Local_1318, 0))
	{
		return false;
	}
	vVar0 = { UNK_0xE3C0A5DBED4FBAB7(UNK_0x68F4C0EC296D3901(bParam0, true), UNK_0x68E4ADDDDCD7BDDE(Local_1318, vLocal_87), UNK_0x68E4ADDDDCD7BDDE(Local_1318, vLocal_90), 0) };
	if (SYSTEM::VDIST2(vVar0, UNK_0x68E4ADDDDCD7BDDE(Local_1318, vLocal_87)) <= SYSTEM::VDIST2(UNK_0x68E4ADDDDCD7BDDE(Local_1318, vLocal_90), UNK_0x68E4ADDDDCD7BDDE(Local_1318, vLocal_87)))
	{
		return true;
	}
	return false;
}

void func_95(bool bParam0, int iParam1)
{
	int iVar0;

	if (Global_61520)
	{
	}
	Global_61520 = 0;
	if (bParam0)
	{
		Global_61521 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73607)
		{
			if (Global_61737[Global_73608[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_73608[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_73607)
		{
			if (Global_73608[iVar0 /*9*/] > 0)
			{
				if (Global_73608[iVar0 /*9*/] == iParam1)
				{
					Global_73608[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

bool func_96(bool bParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_97(bParam0);
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

void func_97(bool bParam0)
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

int func_98(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, bool bParam10, char* sParam11, char* sParam12, char* sParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19)
{
	return func_49(bParam0, vParam1, func_99(), vParam4, vParam7, sParam11, 5, 0, 0, 0, sParam12, sParam13, func_92(), func_92(), func_92(), func_92(), bParam14, 0, bParam16, bParam15, 1, bParam17, bParam18, bParam19, func_92(), func_92(), func_92(), 1, bParam10);
}

Vector3 func_99()
{
	return 0f, 0f, 2f;
}

int func_100(bool bParam0)
{
	return func_51(bParam0, 1, 0);
}

int func_101(bool bParam0, vector3 vParam1, vector3 vParam4, char* sParam7, char* sParam8, char* sParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	return func_49(bParam0, vParam1, vParam4, func_93(), func_93(), sParam7, 5, 0, 0, 0, sParam8, sParam9, func_92(), func_92(), func_92(), func_92(), bParam10, 0, bParam12, bParam11, 0, bParam13, bParam14, bParam15, 0, 0, 0, 1, 1065353216 /* Float: 1f */);
}

void func_102(int iParam0, bool bParam1)
{
	int iVar0;

	Global_61522 = iParam0;
	if (!Global_61520)
	{
		Global_61520 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73607)
		{
			if (Global_73608[iVar0 /*9*/] == iParam0)
			{
				Global_73608[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_103(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_105(bParam0);
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
		{
			UNK_0x142CC44DB769B57E(&(bParam0->f_1[bVar0]));
		}
		func_104(bVar0, bParam0);
		func_81(bVar0, bParam0);
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 31)
	{
		if (bVar0 != 8)
		{
			UNK_0x0674E58A79778E99(&(bParam0->f_13), bVar0);
			UNK_0x0674E58A79778E99(&(bParam0->f_14), bVar0);
		}
		bVar0++;
	}
	if (UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		UNK_0x142CC44DB769B57E(bParam0);
	}
	bParam0->f_6 = 0;
	bParam0->f_12 = 0;
	bParam0->f_15 = 0;
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
		{
			UNK_0xA245D14CC59CDD36(bParam0->f_17[bVar0], 1);
			UNK_0x7D732AB707BE9152(bParam0->f_17[bVar0], 1);
			if (bParam2)
			{
				UNK_0x4E885A246A9D983A(bParam0->f_17[bVar0], 32, true);
				UNK_0x4E885A246A9D983A(bParam0->f_17[bVar0], 305, false);
			}
			UNK_0x4E885A246A9D983A(bParam0->f_17[bVar0], 268, false);
			if (bParam1)
			{
				if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_58()) && bParam0->f_17[bVar0] != UNK_0x16F2683693E537C9())
				{
					UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 29))
			{
				UNK_0xD5EF6A937E06E46F(bParam0->f_17[bVar0], 0, -1, 0);
			}
			bParam0->f_17[bVar0] = 0;
		}
		bVar0++;
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0xA245D14CC59CDD36(UNK_0x16F2683693E537C9(), 1);
		UNK_0x7D732AB707BE9152(UNK_0x16F2683693E537C9(), 1);
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (bParam2)
		{
			UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, true);
		}
	}
	bParam0->f_21 = 0;
}

void func_104(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 14);
			break;
		case 1:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 15);
			break;
		case 2:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 16);
			break;
	}
}

void func_105(bool bParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
	{
		UNK_0x142CC44DB769B57E(&(bParam0->f_5));
	}
}

void func_106(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	func_107(uParam0, bParam1, 0f, 0f, 0f, iParam2, iParam3, iParam4, iParam5, bParam6);
}

void func_107(var uParam0, bool bParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	func_108(uParam0, bParam1, vParam2, iParam5, iParam6, iParam7, iParam8, bParam9);
}

void func_108(var uParam0, bool bParam1, vector3 vParam2, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
	{
		func_11(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_109(uParam0, bParam1, vParam2, iParam5, iParam6, bParam7, iParam8, bParam9);
}

void func_109(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_12(bVar0))
	{
		func_133();
	}
	if (func_132(bParam1) && UNK_0x4FC40AB0ECCE6E18(bParam1))
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
			if (func_127(uParam0, bParam7, bParam9, 0))
			{
				func_123(uParam0, bParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_113(bVar0))
				{
					if ((UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0)) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if ((bVar1 && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
						{
							if (!func_12(bVar0))
							{
								func_196(bVar0, -1);
								uParam0->f_3 = bVar0;
								if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
								{
									func_112(1);
								}
							}
						}
					}
				}
			}
			else if (func_113(bVar0))
			{
				if (UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0))
				{
					if (((UNK_0x0A059E0DB9253280(bParam1) && bVar1) && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
					{
						if (!func_12(bVar0))
						{
							func_196(bVar0, -1);
							uParam0->f_3 = bVar0;
							if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
							{
								func_112(1);
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
				if (func_12(bParam5))
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
						func_11(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(6) == 3 || UNK_0xA4FD7964FEE91ED8(6) == 4)
					{
						func_11(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(4) == 3 || UNK_0xA4FD7964FEE91ED8(4) == 4)
					{
						func_11(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(5) == 3 || UNK_0xA4FD7964FEE91ED8(5) == 4)
					{
						func_11(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(2) == 3 || UNK_0xA4FD7964FEE91ED8(2) == 4)
					{
						func_11(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0xF3545351E9CBB11F() == 3 || UNK_0xF3545351E9CBB11F() == 4)
				{
					func_11(uParam0, bVar0, 1);
				}
			}
			if (!func_127(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_111(uParam0))
				{
					func_110(uParam0);
				}
			}
		}
	}
	else
	{
		func_11(uParam0, bVar0, 0);
	}
}

void func_110(var uParam0)
{
	if (func_132(UNK_0x16F2683693E537C9()))
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

bool func_111(var uParam0)
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

int func_112(bool bParam0)
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

bool func_113(bool bParam0)
{
	if (!func_114(1, 1, 0))
	{
		if ((!UNK_0xEA6BC48857E0AC4C(bParam0) && func_12(bParam0)) || func_12("CMN_HINT"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		return false;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_112(0) < 3)
			{
				return true;
			}
			break;
		case 4:
			if (func_112(0) < 1)
			{
				return true;
			}
			break;
		case 5:
		case 15:
			if (func_112(0) < 1)
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

bool func_114(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_19(0))
	{
		return false;
	}
	if (func_122())
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
	if ((func_121() || func_120(Global_4456448.f_232883)) || func_119())
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			bVar1 = func_118(UNK_0x16F2683693E537C9(), 0);
			if (((UNK_0x137240CA2BADB0D2(bVar0, bVar1) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("APC") && bVar1 != -1)) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("AKULA") && bVar1 != -1)) || (((UNK_0x134B62B726CEC8E6(bVar0) == joaat("RIOT2") && bVar1 == 0) && func_117(bVar0, 10)) && UNK_0x0ECB5CA5140957AD(bVar0, 10) != -1))
			{
				return false;
			}
		}
	}
	if (Global_1686722)
	{
		return false;
	}
	if (func_115(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_115(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_116(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && bParam0 == UNK_0xD803B885F5E47A62()) && func_116(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

bool func_116(bool bParam0, bool bParam1, bool bParam2)
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

bool func_117(bool bParam0, int iParam1)
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

bool func_118(bool bParam0, int iParam1)
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

bool func_119()
{
	return Global_2450632.f_17;
}

bool func_120(int iParam0)
{
	return iParam0 == 51;
}

bool func_121()
{
	return Global_2450632.f_16;
}

bool func_122()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_123(var uParam0, bool bParam1, vector3 vParam2, bool bParam5)
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
		func_11(uParam0, 0, 0);
	}
	if (func_126(vParam2, 0f, 0f, 0f, 0))
	{
		if (UNK_0xEC560E589DF8370E(bParam1))
		{
			bVar0 = UNK_0x940C1429253D3B1B(bParam1);
			if (!UNK_0x405E212DDE472467(bVar0, 0))
			{
				if (UNK_0x34BFC6F0CB887BC2(bVar0))
				{
					if (!func_124())
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

int func_124()
{
	return func_125(UNK_0xD803B885F5E47A62());
}

int func_125(bool bParam0)
{
	if (UNK_0x134B62B726CEC8E6(UNK_0x9539D44F3E4492F6(bParam0)) == joaat("MP_F_FREEMODE_01"))
	{
		return 1;
	}
	return 0;
}

bool func_126(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_127(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_131(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_130(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_130(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_131(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_111(uParam0))
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
						if (!func_131(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_130(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_130(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_131(bParam1, bParam2, bParam3))
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
					if (!func_131(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_130(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_130(bParam1, bParam2, bParam3) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
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
				else if (!func_131(bParam1, bParam2, bParam3))
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
						if (func_129(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_128(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || func_128(bParam1, bParam2, bParam3))
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
					else if (func_129(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		case 4:
			if (!func_111(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_114(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_133();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_128(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_114(bParam0, bParam1, bParam2))
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

bool func_129(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_114(bParam0, bParam1, bParam2))
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

bool func_130(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_114(bParam0, bParam1, bParam2))
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

bool func_131(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_114(bParam0, bParam1, bParam2))
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

bool func_132(bool bParam0)
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

void func_133()
{
	UNK_0x5D96D8530B3D0904(&Global_7357, 4);
}

bool func_134(var uParam0)
{
	if (func_136(uParam0) && !func_135(uParam0))
	{
		return true;
	}
	return false;
}

bool func_135(var uParam0)
{
	if (*uParam0 == 4)
	{
		return true;
	}
	return false;
}

bool func_136(var uParam0)
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return true;
	}
	return false;
}

void func_137()
{
	bool bVar0;

	if (iLocal_1303 == 0 || iLocal_1303 == 1)
	{
		if (((UNK_0x437347B10A200C4B(Local_1318, 0) || (UNK_0xC844350D5D58C99A(Local_1322[0 /*2*/]) && !UNK_0xD59B17D2DFF98E26(Local_1322[0 /*2*/]))) || (UNK_0xC844350D5D58C99A(Local_1322[1 /*2*/]) && !UNK_0xD59B17D2DFF98E26(Local_1322[1 /*2*/]))) || (UNK_0xC844350D5D58C99A(Local_1322[2 /*2*/]) && !UNK_0xD59B17D2DFF98E26(Local_1322[2 /*2*/])))
		{
			iLocal_1303 = 2;
		}
	}
	if (iLocal_1303 == 2)
	{
		if ((((!UNK_0xC844350D5D58C99A(Local_1318) || !UNK_0xDF1306B443CD3D15(Local_1318, 0)) || (UNK_0xC844350D5D58C99A(Local_1322[0 /*2*/]) && !func_94(Local_1322[0 /*2*/]))) || (UNK_0xC844350D5D58C99A(Local_1322[1 /*2*/]) && !func_94(Local_1322[1 /*2*/]))) || (UNK_0xC844350D5D58C99A(Local_1322[2 /*2*/]) && !func_94(Local_1322[2 /*2*/])))
		{
			iLocal_1303 = 3;
		}
	}
	if (iLocal_1303 == 0)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("TOWTRUCK") || UNK_0x134B62B726CEC8E6(bVar0) == joaat("TOWTRUCK2"))
			{
				if (UNK_0xDF1306B443CD3D15(bVar0, 0))
				{
					if (UNK_0x6D18156F72BE0773(bVar0, Local_1318))
					{
						bLocal_1320 = bVar0;
					}
				}
			}
		}
	}
	if (iLocal_1303 == 0)
	{
		if (!UNK_0xDF1306B443CD3D15(Local_1318, 0))
		{
			iLocal_1303 = 1;
		}
	}
	if (iLocal_1303 == 1 && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_1318, 1))
	{
		func_9(6, 1);
	}
	else
	{
		func_9(6, 0);
	}
}

void func_138(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	vector3 vVar0;
	float fVar3;

	if (UNK_0xC844350D5D58C99A(Global_102203.f_4))
	{
		if (UNK_0xDF1306B443CD3D15(Global_102203.f_4, 0))
		{
			if (func_190(24) != Global_102203.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_187(UNK_0x68F4C0EC296D3901(Global_102203.f_4, true), iParam5, &vVar0, &fVar3))
					{
						vParam0 = { vVar0 };
						fParam3 = fVar3;
					}
				}
				func_139(Global_102203.f_4, vParam0, fParam3, 24, 0);
			}
		}
	}
}

void func_139(bool bParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;

	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (UNK_0xC844350D5D58C99A(Global_75441.f_484[25]) && UNK_0xDF1306B443CD3D15(Global_75441.f_484[25], 0))
			{
				if (Global_75441.f_484[25] == bParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((UNK_0x56E1CD81AE700E98(bParam0) || UNK_0x134B62B726CEC8E6(bParam0) == joaat("BUS")) || UNK_0x134B62B726CEC8E6(bParam0) == joaat("TOURBUS"))
			{
				return;
			}
		}
		func_186(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_181(bParam0, &Var0);
		if (func_126(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
			iParam4 = UNK_0xD9522BA9E27E1349(bParam0);
		}
		if (iParam5 == 24)
		{
			if (UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) != joaat("VEHICLE_GEN_CONTROLLER"))
			{
				Global_76429 = UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C());
			}
		}
		func_174(iParam5, &Var0, vParam1, iParam4, func_180(bParam0));
		func_140(iParam5, bParam0, 0);
	}
}

void func_140(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_170(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 12) && !UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_75441.f_555[0 /*21*/].f_4 != UNK_0x134B62B726CEC8E6(bParam1))
		{
			return;
		}
	}
	if (Global_76348 != -1 && Global_76348 != iParam0)
	{
		return;
	}
	if (UNK_0xC844350D5D58C99A(bParam1))
	{
		if (UNK_0xDF1306B443CD3D15(bParam1, 0))
		{
			if (!UNK_0xAF6690C489CC6203(bParam1))
			{
				UNK_0x73270B3C9CC833FD(bParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_111638.f_32744.f_4801 = func_159();
			}
			if (bParam1 != Global_75441.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					bVar0 = func_190(iParam0);
					if ((UNK_0xC844350D5D58C99A(bVar0) && UNK_0xDF1306B443CD3D15(bVar0, 0)) && bParam1 != bVar0)
					{
						func_141(bVar0, 145);
					}
				}
				Global_76347 = bParam1;
				Global_76348 = iParam0;
				Global_76349 = iParam2;
			}
		}
	}
}

void func_141(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_142(bParam0))
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
	func_181(bParam0, &(Global_111638.f_32744.f_5510));
}

bool func_142(bool bParam0)
{
	if ((((((((((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || func_157(bParam0, 0, 0)) || func_157(bParam0, 1, 0)) || func_157(bParam0, 2, 0)) || func_180(bParam0) != 145) || func_156(bParam0)) || func_155(bParam0)) || func_154(bParam0)) || func_153(bParam0)) || !func_143(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		if (func_155(bParam0))
		{
		}
		if (func_155(bParam0))
		{
		}
		if (func_157(bParam0, 0, 0))
		{
		}
		if (func_157(bParam0, 1, 0))
		{
		}
		if (func_157(bParam0, 2, 0))
		{
		}
		if (func_180(bParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_143(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (!func_144(bParam0, 0))
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

bool func_144(bool bParam0, bool bParam1)
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
		if (!func_152())
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
		if ((((!func_151() && !func_150()) && !func_149()) && !func_148()) && !func_152())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_149())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_147(bParam0))
		{
			return false;
		}
	}
	if (!func_145(bParam0))
	{
		return false;
	}
	return true;
}

bool func_145(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_146())
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

bool func_146()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_147(bool bParam0)
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

bool func_148()
{
	return false;
}

bool func_149()
{
	return true;
}

bool func_150()
{
	return true;
}

bool func_151()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_152()
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

bool func_153(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	bVar1 = UNK_0x7888A5D2621AAF2D(bParam0);
	if (bVar0 == joaat("SPEEDO") && UNK_0x7F8A39872A07D2CE(bVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_144(bVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_154(bool bParam0)
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

bool func_155(bool bParam0)
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

bool func_156(bool bParam0)
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

bool func_157(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_158(iParam1, iVar0, &uVar1, &iVar9))
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

bool func_158(int iParam0, int iParam1, char* sParam2, int iParam3)
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

var func_159()
{
	var uVar0;

	func_169(&uVar0, UNK_0x4460E481B9E33ADA());
	func_168(&uVar0, UNK_0x8D199E381D262EEF());
	func_167(&uVar0, UNK_0xD8A54335F18763BA());
	func_162(&uVar0, UNK_0x972A296334C9D57B());
	func_161(&uVar0, UNK_0x118229AD063C3C1D());
	func_160(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_160(var uParam0, int iParam1)
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

void func_161(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_162(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_166(*uParam0);
	iVar1 = func_164(*uParam0);
	if (iParam1 < 1 || iParam1 > func_163(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_163(int iParam0, int iParam1)
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

int func_164(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_165(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_165(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_166(int iParam0)
{
	return iParam0 & 15;
}

void func_167(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_168(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_169(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_170(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_171(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_171(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_171(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_171(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_171(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_171(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_171(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_171(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_171(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("SCORCHER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("SEASHARK");
			iVar0 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("DUSTER");
			iVar0 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("TAILGATER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("PROPTRAILER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("BJXL");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("VELUM");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("CARGOBOB3");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TOWTRUCK");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TRASH");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("BARRACKS");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("FIRETRUK");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("VACCA");
			iVar0 = 1;
			break;
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("SURANO");
			iVar0 = 1;
			break;
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("TORNADO2");
			iVar0 = 1;
			break;
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("SUPERD");
			iVar0 = 1;
			break;
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			uParam0->f_13 = 308;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("DINGHY");
			uParam0->f_13 = 404;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("BFINJECTION");
			iVar0 = 1;
			break;
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_152())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_13 = 401;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_152())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_13 = 401;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("BLAZER3");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("SUBMERSIBLE2");
			uParam0->f_13 = 308;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("DUKES2");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("DUKES2");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("DODO");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("DODO");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111638.f_32744.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("MILJET") || uParam0->f_4 == joaat("BESRA")) || uParam0->f_4 == joaat("LUXOR")) || uParam0->f_4 == joaat("SHAMAL")) || uParam0->f_4 == joaat("TITAN")) || uParam0->f_4 == joaat("LUXOR2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_126(Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_111638.f_32744.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111638.f_32744.f_1934[uParam0->f_14];
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 19))
	{
		if (!func_126(Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_126(Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_171(int iParam0, int iParam1)
{
	struct<82> Var0;

	if (func_173(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_172(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_172(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("TAILGATER");
			if (Global_111638.f_9080.f_99.f_58[128] && !Global_111638.f_9080.f_99.f_58[131])
			{
				iVar0 = joaat("PREMIER");
			}
			switch (iVar0)
			{
				case joaat("TAILGATER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				case joaat("PREMIER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		case 2:
			iVar0 = joaat("BODHI2");
			switch (iVar0)
			{
				case joaat("BODHI2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111638.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("BUFFALO2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("BAGGER");
			}
			else if (Global_111638.f_9080.f_99.f_58[118])
			{
				iVar0 = joaat("BAGGER");
			}
			else
			{
				iVar0 = joaat("BUFFALO2");
			}
			switch (iVar0)
			{
				case joaat("BAGGER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				case joaat("BUFFALO2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		default:
			break;
	}
}

bool func_173(int iParam0)
{
	return iParam0 < 3;
}

void func_174(int iParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (func_170(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 10))
		{
			func_179(iParam0);
			func_178(uParam1, &(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]));
			if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 11))
			{
				Global_111638.f_32744.f_1864[Global_75441.f_555[0 /*21*/].f_14 /*3*/] = { vParam2 };
				Global_111638.f_32744.f_1934[Global_75441.f_555[0 /*21*/].f_14] = iParam5;
			}
			else
			{
				Global_111638.f_32744.f_1864[Global_75441.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_111638.f_32744.f_1934[Global_75441.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_175(iParam0, 1);
		}
	}
}

void func_175(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_177(iParam0, 0))
		{
			func_176(iParam0, 1, 0);
			func_176(iParam0, 2, 0);
			func_176(iParam0, 3, 0);
			func_176(iParam0, 4, 0);
			func_176(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_176(iParam0, 0, 0);
	}
}

void func_176(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_32744[iParam0]), bParam1);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_32744[iParam0]), bParam1);
	}
}

bool func_177(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], bParam1);
}

void func_178(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_179(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_170(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			UNK_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
			UNK_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
			Global_75441.f_139[iParam0] = 0;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 13))
		{
			func_175(iParam0, 0);
		}
	}
}

int func_180(bool bParam0)
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

void func_181(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_185(uParam1);
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
		if (uParam1->f_65 == -1 && !func_184(uParam1->f_66))
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
		func_183(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_182(iVar0 + 1));
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

int func_182(int iParam0)
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

int func_183(bool bParam0, var uParam1, var uParam2)
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

bool func_184(int iParam0)
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

void func_185(var uParam0)
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

void func_186(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_179(iParam0);
	func_175(iParam0, 0);
}

bool func_187(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;

	iVar0 = func_188(vParam0, uParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return true;
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return true;
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return true;
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return true;
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return true;
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return true;
		default:
			break;
	}
	return false;
}

int func_188(vector3 vParam0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_93782[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_93782[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_189(iVar0) || iParam4 == 0)
				{
					fVar1 = UNK_0x0EB28750412C3A5A(vParam0, Global_93782[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_189(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iParam0], false);
}

int func_190(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75441.f_139[iParam0];
}

int func_191()
{
	func_192();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_192()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_194(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_193(UNK_0x16F2683693E537C9());
			if (func_173(iVar0) && (!func_37(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_173(Global_111638.f_2358.f_539.f_4321))
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

int func_193(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_194(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_194(int iParam0)
{
	if (func_173(iParam0))
	{
		return func_195(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_195(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_196(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_197(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

int func_198(bool bParam0, bool bParam1, bool bParam2)
{
	return func_51(bParam0, !bParam1, bParam2);
}

bool func_199(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		switch (UNK_0xBBCAD76F60334F95(bParam0))
		{
			case 1:
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x940C1429253D3B1B(bParam0)))
				{
					return true;
				}
				break;
			case 2:
				if (UNK_0xDF1306B443CD3D15(UNK_0x96A5FE5834B81CE7(bParam0), 0))
				{
					return true;
				}
				break;
			default:
				if (!UNK_0x437347B10A200C4B(bParam0, 0))
				{
					return true;
				}
				break;
		}
	}
	return false;
}

void func_200(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		switch ((*uParam0)[iVar0 /*8*/])
		{
			case 1:
				Stack.Push(uParam0[iVar0 /*8*/]);
				Call_Loc((uParam0[iVar0 /*8*/])->f_7);
				break;
			case 2:
				if ((UNK_0x1C0640BA9A7327B3() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 1;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_201()
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!bLocal_1351)
		{
			func_204(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), -1);
			func_203(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), -1);
			bLocal_1351 = true;
		}
	}
	else if (bLocal_1351)
	{
		func_203(0, -1);
		func_204(0, -1);
		bLocal_1351 = false;
	}
	if (!bLocal_1349)
	{
		if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
		{
			if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_1318, 1))
			{
				UNK_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_01", 0f);
				bLocal_1349 = true;
			}
			else if (UNK_0x440C646F2F11A2A1(UNK_0x16F2683693E537C9(), joaat("WEAPON_BRIEFCASE"), 0))
			{
				UNK_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_02", 0f);
				bLocal_1349 = true;
			}
		}
	}
	if (iLocal_93 == 0)
	{
		switch (iLocal_1303)
		{
			case 0:
				if ((UNK_0xC844350D5D58C99A(vLocal_1306.x) && !UNK_0xEB6A8945D1AC98A1(vLocal_1306.x)) && func_134(&(Local_1084[0 /*8*/])))
				{
					if (Local_1084[0 /*8*/].f_1 == 1)
					{
						if (func_202(UNK_0x16F2683693E537C9(), Local_1318, 1) > 500f)
						{
							func_308(1);
						}
					}
					else if (Local_1084[0 /*8*/].f_1 == 4)
					{
						if (func_202(UNK_0x16F2683693E537C9(), Local_1318, 1) > 250f)
						{
							func_308(1);
						}
					}
					else if (func_202(UNK_0x16F2683693E537C9(), Local_1318, 1) > 250f)
					{
						func_308(2);
					}
				}
				else if (func_202(UNK_0x16F2683693E537C9(), Local_1318, 1) > 250f)
				{
					func_308(2);
				}
				break;
			case 1:
				if (func_202(UNK_0x16F2683693E537C9(), Local_1318, 1) > 250f)
				{
					func_308(2);
				}
				break;
			case 3:
			case 2:
				if (!UNK_0x440C646F2F11A2A1(UNK_0x16F2683693E537C9(), joaat("WEAPON_BRIEFCASE"), 0))
				{
					if (((((UNK_0xC844350D5D58C99A(Local_1322[0 /*2*/]) && func_202(UNK_0x16F2683693E537C9(), Local_1322[0 /*2*/], 1) > 250f) && UNK_0xC844350D5D58C99A(Local_1322[1 /*2*/])) && func_202(UNK_0x16F2683693E537C9(), Local_1322[1 /*2*/], 1) > 250f) && UNK_0xC844350D5D58C99A(Local_1322[2 /*2*/])) && func_202(UNK_0x16F2683693E537C9(), Local_1322[2 /*2*/], 1) > 250f)
					{
						func_308(3);
					}
				}
				break;
		}
	}
	if (UNK_0xC844350D5D58C99A(Local_1318))
	{
		if ((UNK_0x70EED0761B82965E(Local_1318) && !UNK_0xDF1306B443CD3D15(Local_1318, 0)) && !UNK_0x440C646F2F11A2A1(UNK_0x16F2683693E537C9(), joaat("WEAPON_BRIEFCASE"), 0))
		{
			func_308(4);
		}
	}
}

float func_202(bool bParam0, bool bParam1, int iParam2)
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

void func_203(int iParam0, int iParam1)
{
	Global_61523 = iParam0;
	Global_61524 = iParam1;
}

void func_204(int iParam0, int iParam1)
{
	int iVar0;

	Global_61525 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		if (iParam1 == -1 || Global_73608[iVar0 /*9*/] == iParam1)
		{
			if (Global_73608[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_73608[iVar0 /*9*/].f_6 = iParam0;
				Global_73608[iVar0 /*9*/].f_7 = 1;
				Global_73608[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_205()
{
	if (UNK_0xC844350D5D58C99A(vLocal_1306.x))
	{
		if (!UNK_0x405E212DDE472467(vLocal_1306.x, 0))
		{
			func_206(vLocal_1306.x, &(vLocal_1306.f_2), -1, 0, 0, 0, -1082130432 /* Float: -1f */, 0, -1, -1, 1);
		}
	}
	if (UNK_0xC844350D5D58C99A(Local_1318))
	{
		if (((!func_199(Local_1318) && UNK_0x437347B10A200C4B(Local_1318, 0)) && bLocal_1346) && func_202(Local_1318, UNK_0x16F2683693E537C9(), 1) > 200f)
		{
			UNK_0x046C362CF15F1935(&Local_1318);
		}
	}
}

int func_206(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
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
			uParam1->f_7 = bParam0;
			UNK_0x03E7282D82C7B3B6(bParam0, iParam2);
			UNK_0xF8BE15A7B963DB56(bParam0, fParam6);
			if (UNK_0xE4EDC4B0E92C078B(*uParam1))
			{
				UNK_0x2A065371C9D96655(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			UNK_0xFABCB9076292E3BA(bParam0, iParam9);
		}
		UNK_0xF947FFD8DA795A7F(bParam0, bParam4);
		UNK_0xB46A36D2F28E60DE(bParam0, bParam5);
		*uParam1 = UNK_0x380B922C6BB1F223(bParam0);
		if (!iParam9 == -1)
		{
			if (UNK_0xE4EDC4B0E92C078B(*uParam1))
			{
				if (!bParam8 == -1)
				{
					UNK_0x61755AC17D8F538E(*uParam1, bParam8);
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
					UNK_0x4FA118D51B4F2476(*uParam1);
				}
				UNK_0x2A065371C9D96655(*uParam1, 7);
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_6, 2))
		{
			if (UNK_0xE4EDC4B0E92C078B(*uParam1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_6), 2);
			}
		}
		if (UNK_0x405E212DDE472467(bParam0, 0))
		{
			uParam1->f_1 = UNK_0x498C79575FE5BBCE(bParam0);
			if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_6, 3))
			{
				if (UNK_0xE4EDC4B0E92C078B(uParam1->f_1))
				{
					if (!bParam8 == -1)
					{
						UNK_0x61755AC17D8F538E(uParam1->f_1, bParam8);
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
						UNK_0x4FA118D51B4F2476(uParam1->f_1);
					}
					UNK_0x2A065371C9D96655(uParam1->f_1, 7);
					UNK_0x5D96D8530B3D0904(&(uParam1->f_6), 3);
				}
			}
			else if (!UNK_0xE4EDC4B0E92C078B(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				UNK_0x0674E58A79778E99(&(uParam1->f_6), 3);
			}
		}
		else if (UNK_0xE4EDC4B0E92C078B(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			UNK_0x0674E58A79778E99(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_207()
{
	vector3 vVar0;
	bool bVar3;

	if (bLocal_96 == 1)
	{
		if (!UNK_0x757EF87A33649210())
		{
			if (!UNK_0xD0BB2359EC70FC37())
			{
				UNK_0x53491B90E4FD0E56(1000);
			}
		}
		else
		{
			if (UNK_0x39B7A3CCD2467CAB())
			{
				UNK_0x55BE34EDDEA0AC9E(0);
				UNK_0x5C8D148FC238F38A();
			}
			iLocal_93 = iLocal_97;
			UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			UNK_0x790015DC92C918E2();
			UNK_0xA37A90C62806D848(1);
			func_8(1);
			if (UNK_0x39B7A3CCD2467CAB())
			{
				UNK_0x5C8D148FC238F38A();
			}
			if (!func_282())
			{
				func_281(iLocal_93, &vVar0, &bVar3);
				UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vVar0, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), bVar3);
				UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), true);
				func_279(&uLocal_99, vVar0, 50f, 0);
			}
			func_278(&uLocal_99);
			switch (iLocal_93)
			{
				case 0:
					func_277(&uLocal_99, bLocal_83);
					func_277(&uLocal_99, bLocal_84);
					func_277(&uLocal_99, bLocal_85);
					func_276(&uLocal_99, &Global_95606);
					break;
				case 1:
					func_277(&uLocal_99, joaat("BURRITO2"));
					break;
			}
			while (!func_275(&uLocal_99))
			{
				SYSTEM::WAIT(0);
				func_205();
			}
			switch (iLocal_93)
			{
				case 0:
					while (!func_268(0))
					{
						SYSTEM::WAIT(0);
					}
					if (UNK_0x7F8A39872A07D2CE(&Global_95606, "jhp2a_main"))
					{
						while (!func_211(&bLocal_1316, 1395.851f, -1069.306f, 52.4779f, 118.1591f, 1))
						{
							SYSTEM::WAIT(0);
							UNK_0x28F5E4DA506AC0CA(1395.851f, -1069.306f, 52.4779f, 20f, 0, 0, 0, 0, false, 0);
						}
					}
					else
					{
						while (!func_211(&bLocal_1316, 1256.913f, 556.8416f, 79.7013f, 134.0793f, 1))
						{
							SYSTEM::WAIT(0);
							UNK_0x28F5E4DA506AC0CA(1256.913f, 556.8416f, 79.7013f, 20f, 0, 0, 0, 0, false, 0);
						}
					}
					UNK_0xC6A6B4DDD6DC073A(bLocal_1316, false);
					UNK_0xD3421E391490133B(bLocal_1316, true, false);
					UNK_0xD3421E391490133B(bLocal_1316, 2, true);
					UNK_0xB9FD7450C0DAB575(bLocal_1316, 1084227584 /* Float: 5f */);
					UNK_0x56FDC9ADE35F7DB0(bLocal_1316, true, true, 0);
					if (func_282())
					{
						func_208(bLocal_1316, -1, 1);
					}
					else
					{
						UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
						UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), bLocal_1316, -1);
					}
					UNK_0x2FB9A57162E54BAB(0f);
					UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
					break;
				case 1:
					if (!func_7(87))
					{
						Local_1318 = UNK_0x122AAB0B1D6F55AD(joaat("BOXVILLE3"), 693.725f, -1006.302f, 21.8355f, 359.884f, true, true, false);
						UNK_0x05EC10F460C3A4AF(Local_1318, 0);
						UNK_0xB9FD7450C0DAB575(Local_1318, 1084227584 /* Float: 5f */);
					}
					if (func_282())
					{
						func_208(0, -1, 1);
					}
					else
					{
						UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
					}
					UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), 692.067f, -1004.812f, 21.9059f, 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 359.5735f);
					UNK_0x2FB9A57162E54BAB(0f);
					UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
					break;
			}
			if (UNK_0x757EF87A33649210() || !UNK_0x7BCE0E6DD4A1F749())
			{
				UNK_0x82E51BCA72537B6C(1000);
			}
			bLocal_96 = false;
		}
	}
}

void func_208(bool bParam0, bool bParam1, int iParam2)
{
	if (func_210() && func_282())
	{
		while (Global_98739 != 6)
		{
			SYSTEM::WAIT(0);
		}
		UNK_0x21387C9EECC2B220(false);
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				UNK_0xFE76348A7A0CEF66(UNK_0x16F2683693E537C9());
			}
		}
		if (bParam0 != 0)
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xC844350D5D58C99A(bParam0))
				{
					if (UNK_0xDF1306B443CD3D15(bParam0, 0))
					{
						if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam0, 0))
						{
							UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), bParam0, bParam1);
							UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
							UNK_0x2FB9A57162E54BAB(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			}
		}
		UNK_0x17EFA7496495F972();
		func_209(0);
	}
}

void func_209(int iParam0)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 13);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_98744.f_20), 13);
	}
}

bool func_210()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return true;
	}
	return false;
}

bool func_211(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	struct<67> Var0;

	Var0.f_9 = 49;
	Var0.f_59 = 2;
	if (func_210())
	{
		if (func_267())
		{
			func_178(&(Global_105187.f_2890.f_12), &Var0);
		}
	}
	else if (func_265())
	{
		func_178(&(Global_102203.f_2890.f_12), &Var0);
	}
	if (Var0.f_66 != 0)
	{
		if (!func_264(0, &Var0))
		{
			if (UNK_0x8E39AC3C76C8AA58(Var0.f_66) || UNK_0x7D8B2A8F9EA82DB7(Var0.f_66))
			{
				UNK_0x523BCC9DC80CD82F(Var0.f_66);
				if (UNK_0xB87F6CF6E5628C67(Var0.f_66))
				{
					*bParam0 = UNK_0x122AAB0B1D6F55AD(Var0.f_66, vParam1, bParam4, true, true, false);
					func_253(*bParam0, &Var0, 0, 1);
					UNK_0x71199B01895C6202(Var0.f_66);
					UNK_0xB9FD7450C0DAB575(*bParam0, 1084227584 /* Float: 5f */);
					return true;
				}
				else
				{
					return false;
				}
			}
		}
		else
		{
			bParam5 = true;
		}
	}
	if (bParam5)
	{
		if (!UNK_0xC844350D5D58C99A(*bParam0))
		{
			if (func_212(bParam0, 0, vParam1, bParam4, 1, 0))
			{
				UNK_0xAB8E2DDC7AF955E0(func_171(0, 0), true);
				return true;
			}
		}
		return false;
	}
	return true;
}

bool func_212(bool bParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, int iParam7)
{
	bool bVar0;
	var uVar1;
	struct<97> Var5;
	int iVar103;
	int iVar104;
	bool bVar105;
	char cVar106[16];
	int iVar110;

	if (func_173(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_172(iParam1, &Var5, iParam7);
		if (Var5 == 0)
		{
			return true;
		}
		if (UNK_0xC844350D5D58C99A(*bParam0))
		{
			if (UNK_0x134B62B726CEC8E6(*bParam0) != Var5)
			{
			}
			return true;
		}
		if ((iParam1 == 0 && !Global_111638.f_2358.f_539.f_4316) && Global_111638.f_9080.f_99.f_58[131])
		{
			Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/] == Var5)
		{
			UNK_0x523BCC9DC80CD82F(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
			if (UNK_0xB87F6CF6E5628C67(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/]))
			{
				*bParam0 = UNK_0x122AAB0B1D6F55AD(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/], vParam2, bParam5, false, false, false);
				UNK_0xB9FD7450C0DAB575(*bParam0, 1084227584 /* Float: 5f */);
				UNK_0x316958DDB94DF3FC(*bParam0, 0);
				UNK_0x626D5ADA3EFAE431(*bParam0, 0);
				UNK_0x44A200C9B6E1CEA6(*bParam0, true);
				UNK_0xD458AC1C1D29C3B4(*bParam0, 1250, false);
				UNK_0x5DAB50E08C3C504A(*bParam0, 1250f);
				UNK_0xDC544F7DF5E5164D(*bParam0, 1250f);
				Var5.f_3 = 1250;
				UNK_0xC002508A277213DE(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
				UNK_0x58A0C35FA7CA6162(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
				UNK_0xCCD53AC1B5D5E456(*bParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					UNK_0xD3421E391490133B(*bParam0, iVar103 + 1, !Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24)
				{
					UNK_0xDE00FFD6DD02A48E(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_252(&uVar1, &bVar0))
				{
					UNK_0x55A3C4ED4728EA42(*bParam0, &uVar1);
					UNK_0xA22B35B584F0580A(*bParam0, bVar0);
				}
				else
				{
					UNK_0x55A3C4ED4728EA42(*bParam0, &(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < UNK_0xBCB9B04D4DA658DF())
					{
						UNK_0xA22B35B584F0580A(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				UNK_0x9F0DB8A295EA8513(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
				UNK_0xA22F71BBC8173C39(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
				UNK_0x8BF0BEF985EB6D43(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
				UNK_0x85654A532F20966B(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
				UNK_0x7726E33AC3B60544(*bParam0, 2, UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
				UNK_0x7726E33AC3B60544(*bParam0, 3, UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
				UNK_0x7726E33AC3B60544(*bParam0, 0, UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
				UNK_0x7726E33AC3B60544(*bParam0, 1, UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (UNK_0x579935D850368851(*bParam0) > 1 && Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					UNK_0x446EA2500F021666(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!UNK_0xAD09C9A4B56FA133(UNK_0x134B62B726CEC8E6(*bParam0)))
					{
						if (UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(*bParam0)))
						{
							if (Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								UNK_0x920DACD685EA4957(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							UNK_0x920DACD685EA4957(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_248(bParam0, &(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
				UNK_0x0947AEED9914905B(*bParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (UNK_0x134B62B726CEC8E6(*bParam0) == joaat("BODHI2"))
					{
						func_246(bParam0);
					}
				}
				if (bParam6)
				{
					UNK_0x71199B01895C6202(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
				}
				func_245(*bParam0, iParam1);
				return true;
			}
		}
		else if (Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/] == Var5)
		{
			UNK_0x523BCC9DC80CD82F(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
			if (UNK_0xB87F6CF6E5628C67(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/]))
			{
				*bParam0 = UNK_0x122AAB0B1D6F55AD(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/], vParam2, bParam5, false, false, false);
				UNK_0xB9FD7450C0DAB575(*bParam0, 1084227584 /* Float: 5f */);
				UNK_0x316958DDB94DF3FC(*bParam0, 0);
				UNK_0x626D5ADA3EFAE431(*bParam0, 0);
				UNK_0x44A200C9B6E1CEA6(*bParam0, true);
				UNK_0xD458AC1C1D29C3B4(*bParam0, 1250, false);
				UNK_0x5DAB50E08C3C504A(*bParam0, 1250f);
				UNK_0xDC544F7DF5E5164D(*bParam0, 1250f);
				Var5.f_3 = 1250;
				UNK_0xC002508A277213DE(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
				UNK_0x58A0C35FA7CA6162(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
				UNK_0xCCD53AC1B5D5E456(*bParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					UNK_0xD3421E391490133B(*bParam0, iVar104 + 1, !Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24)
				{
					UNK_0xDE00FFD6DD02A48E(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_252(&uVar1, &bVar0))
				{
					UNK_0x55A3C4ED4728EA42(*bParam0, &uVar1);
					UNK_0xA22B35B584F0580A(*bParam0, bVar0);
				}
				else
				{
					UNK_0x55A3C4ED4728EA42(*bParam0, &(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < UNK_0xBCB9B04D4DA658DF())
					{
						UNK_0xA22B35B584F0580A(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				UNK_0x9F0DB8A295EA8513(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
				UNK_0xA22F71BBC8173C39(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
				UNK_0x8BF0BEF985EB6D43(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
				UNK_0x85654A532F20966B(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
				UNK_0x7726E33AC3B60544(*bParam0, 2, UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
				UNK_0x7726E33AC3B60544(*bParam0, 3, UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
				UNK_0x7726E33AC3B60544(*bParam0, 0, UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
				UNK_0x7726E33AC3B60544(*bParam0, 1, UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (UNK_0x579935D850368851(*bParam0) > 1 && Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					UNK_0x446EA2500F021666(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!UNK_0xAD09C9A4B56FA133(UNK_0x134B62B726CEC8E6(*bParam0)))
					{
						if (UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(*bParam0)))
						{
							if (Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								UNK_0x920DACD685EA4957(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							UNK_0x920DACD685EA4957(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_248(bParam0, &(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
				UNK_0x0947AEED9914905B(*bParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (UNK_0x134B62B726CEC8E6(*bParam0) == joaat("BODHI2"))
					{
						func_246(bParam0);
					}
				}
				if (bParam6)
				{
					UNK_0x71199B01895C6202(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
				}
				func_245(*bParam0, iParam1);
				return true;
			}
		}
		else
		{
			UNK_0x523BCC9DC80CD82F(Var5);
			if (UNK_0xB87F6CF6E5628C67(Var5))
			{
				bVar105 = true;
				*bParam0 = UNK_0x122AAB0B1D6F55AD(Var5, vParam2, bParam5, true, true, false);
				UNK_0xB9FD7450C0DAB575(*bParam0, 1084227584 /* Float: 5f */);
				UNK_0x316958DDB94DF3FC(*bParam0, 0);
				UNK_0x626D5ADA3EFAE431(*bParam0, 0);
				UNK_0x44A200C9B6E1CEA6(*bParam0, true);
				StringCopy(&cVar106, UNK_0x7888A5D2621AAF2D(*bParam0), 16);
				UNK_0xD458AC1C1D29C3B4(*bParam0, 1250, false);
				UNK_0x5DAB50E08C3C504A(*bParam0, 1250f);
				UNK_0xDC544F7DF5E5164D(*bParam0, 1250f);
				Var5.f_3 = 1250;
				UNK_0xC002508A277213DE(*bParam0, Var5.f_5, Var5.f_6);
				UNK_0x58A0C35FA7CA6162(*bParam0, Var5.f_7, Var5.f_8);
				UNK_0xCCD53AC1B5D5E456(*bParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					UNK_0xD3421E391490133B(*bParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					UNK_0xDE00FFD6DD02A48E(*bParam0, Var5.f_24);
				}
				if (func_252(&uVar1, &bVar0))
				{
					UNK_0x55A3C4ED4728EA42(*bParam0, &uVar1);
					UNK_0xA22B35B584F0580A(*bParam0, bVar0);
				}
				else
				{
					UNK_0x55A3C4ED4728EA42(*bParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < UNK_0xBCB9B04D4DA658DF())
					{
						UNK_0xA22B35B584F0580A(*bParam0, Var5.f_26);
					}
				}
				UNK_0x9F0DB8A295EA8513(*bParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				UNK_0xA22F71BBC8173C39(*bParam0, Var5.f_88);
				UNK_0x8BF0BEF985EB6D43(*bParam0, Var5.f_87);
				UNK_0x85654A532F20966B(*bParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				UNK_0x7726E33AC3B60544(*bParam0, 2, UNK_0xEAE0D21A50E6C7F4(Var5.f_92, 28));
				UNK_0x7726E33AC3B60544(*bParam0, 3, UNK_0xEAE0D21A50E6C7F4(Var5.f_92, 29));
				UNK_0x7726E33AC3B60544(*bParam0, 0, UNK_0xEAE0D21A50E6C7F4(Var5.f_92, 30));
				UNK_0x7726E33AC3B60544(*bParam0, 1, UNK_0xEAE0D21A50E6C7F4(Var5.f_92, 31));
				if (UNK_0x579935D850368851(*bParam0) > 1 && Var5.f_89 >= 0)
				{
					UNK_0x446EA2500F021666(*bParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!UNK_0xAD09C9A4B56FA133(UNK_0x134B62B726CEC8E6(*bParam0)))
					{
						if (UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(*bParam0)))
						{
							if (Var5.f_90 == 6)
							{
								UNK_0x920DACD685EA4957(*bParam0, Var5.f_90);
							}
						}
						else
						{
							UNK_0x920DACD685EA4957(*bParam0, Var5.f_90);
						}
					}
				}
				func_248(bParam0, &(Var5.f_31), &(Var5.f_81));
				UNK_0x0947AEED9914905B(*bParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (UNK_0x134B62B726CEC8E6(*bParam0) == joaat("BAGGER") && !Global_111638.f_9080.f_99.f_58[118])
					{
						UNK_0x55A3C4ED4728EA42(*bParam0, &cVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (UNK_0x134B62B726CEC8E6(*bParam0) == joaat("BODHI2"))
					{
						func_246(bParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_111638.f_2358.f_539.f_4316) && Global_111638.f_9080.f_99.f_58[131]) && UNK_0x134B62B726CEC8E6(*bParam0) == joaat("TAILGATER"))
				{
					UNK_0xEE6A1776A67F70C1(*bParam0, 6, true, false);
					UNK_0xEE6A1776A67F70C1(*bParam0, 14, 7, false);
					UNK_0xEE6A1776A67F70C1(*bParam0, 11, 2, false);
					UNK_0xEE6A1776A67F70C1(*bParam0, 2, 3, false);
					UNK_0xEE6A1776A67F70C1(*bParam0, 7, 5, false);
					UNK_0xEE6A1776A67F70C1(*bParam0, 0, false, false);
					UNK_0xEE6A1776A67F70C1(*bParam0, 3, 3, false);
					UNK_0xEE6A1776A67F70C1(*bParam0, 13, true, false);
					UNK_0xEE6A1776A67F70C1(*bParam0, 4, 3, false);
					UNK_0xEE6A1776A67F70C1(*bParam0, 12, 2, false);
					UNK_0x73BEC6F1685574E6(*bParam0, 22, true);
					UNK_0x920DACD685EA4957(*bParam0, 2);
					UNK_0xEE6A1776A67F70C1(*bParam0, 23, 11, false);
					UNK_0x8BF0BEF985EB6D43(*bParam0, 2);
					Global_111638.f_2358.f_539.f_4316 = 1;
					func_213(iParam1, bParam0, 0, 1);
				}
				if (bParam6)
				{
					UNK_0x71199B01895C6202(Var5);
				}
				if (bVar105)
				{
					func_245(*bParam0, iParam1);
				}
				return true;
			}
		}
	}
	return false;
}

void func_213(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;

	if ((func_173(iParam0) && UNK_0xC844350D5D58C99A(*bParam1)) && UNK_0xDF1306B443CD3D15(*bParam1, 0))
	{
		if (iParam2 > Global_111638.f_2358.f_539.f_2407)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_141(*bParam1, iParam0);
		}
		if (UNK_0x40B3F576B41FA183(*bParam1) != 0)
		{
			UNK_0xF95FF0A179413A39(*bParam1, 0);
		}
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/] = UNK_0x134B62B726CEC8E6(*bParam1);
		if (UNK_0x565509D116400807(*bParam1, &bVar1))
		{
			Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1 = UNK_0x134B62B726CEC8E6(bVar1);
		}
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2 = UNK_0xA471721ED5268046(*bParam1);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3 = UNK_0x7F6DC62EA9922664(*bParam1);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = UNK_0xDD62D560CFE11A27(*bParam1, true);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = UNK_0xDD62D560CFE11A27(*bParam1, 2);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = UNK_0xDD62D560CFE11A27(*bParam1, 3);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = UNK_0xDD62D560CFE11A27(*bParam1, 4);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = UNK_0xDD62D560CFE11A27(*bParam1, 5);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = UNK_0xDD62D560CFE11A27(*bParam1, 6);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = UNK_0xDD62D560CFE11A27(*bParam1, 7);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = UNK_0xDD62D560CFE11A27(*bParam1, 8);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = UNK_0xDD62D560CFE11A27(*bParam1, 9);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = UNK_0xDD62D560CFE11A27(*bParam1, 10);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = UNK_0xDD62D560CFE11A27(*bParam1, 11);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = UNK_0xDD62D560CFE11A27(*bParam1, 12);
		if (UNK_0x587993B327460A82(*bParam1, 0))
		{
			iVar2 = UNK_0x74A7D92E3874B5C7(*bParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25 = UNK_0xFC21F7E0F4D92523();
		StringCopy(&(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), UNK_0x7888A5D2621AAF2D(*bParam1), 16);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26 = UNK_0x4EB64970EC291A00(*bParam1);
		UNK_0x9412F17E127D9759(*bParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
		UNK_0xD00EA977553939A7(*bParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
		UNK_0x4D842A28A29F18F6(*bParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88 = UNK_0x616632A7E7824A9A(*bParam1);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87 = UNK_0x214BEAD64D777E8F(*bParam1);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89 = UNK_0xF22DC2D0CA24A151(*bParam1);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90 = UNK_0x8EF9B42D5496EC5A(*bParam1);
		UNK_0xE04A80C505823410(*bParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (UNK_0x812A93B166D97C60(*bParam1, 2))
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (UNK_0x812A93B166D97C60(*bParam1, 3))
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (UNK_0x812A93B166D97C60(*bParam1, 0))
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (UNK_0x812A93B166D97C60(*bParam1, 1))
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_111638.f_2358.f_539.f_4317[iParam0] = 10;
		if (UNK_0x67303E186EA6C9A0(*bParam1) >= 0 && func_217(*bParam1, 0, &uVar0))
		{
			func_183(bParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_111638.f_20113[iParam0 /*43*/].f_40 = 1;
				Global_111638.f_20113[iParam0 /*43*/] = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
				Global_111638.f_20113[iParam0 /*43*/].f_3 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_111638.f_20113[iParam0 /*43*/].f_4 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_111638.f_20113[iParam0 /*43*/].f_5 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_111638.f_20113[iParam0 /*43*/].f_6 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_111638.f_20113[iParam0 /*43*/].f_10 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_111638.f_20113[iParam0 /*43*/].f_16 = !Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_111638.f_20113[iParam0 /*43*/].f_19 = { Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_111638.f_20113[iParam0 /*43*/].f_23 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_111638.f_20113[iParam0 /*43*/].f_7 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_111638.f_20113[iParam0 /*43*/].f_8 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_111638.f_20113[iParam0 /*43*/].f_9 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_111638.f_20113[iParam0 /*43*/].f_11 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_111638.f_20113[iParam0 /*43*/].f_12 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_111638.f_20113[iParam0 /*43*/].f_13 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_111638.f_20113[iParam0 /*43*/].f_14 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_111638.f_20113[iParam0 /*43*/].f_15 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_111638.f_20113[iParam0 /*43*/].f_18 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_111638.f_20113[iParam0 /*43*/].f_17 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_111638.f_20113[iParam0 /*43*/].f_24 = UNK_0x461CAC843A21E4B6(*bParam1, 11) + 1;
				Global_111638.f_20113[iParam0 /*43*/].f_25 = UNK_0x461CAC843A21E4B6(*bParam1, 12) + 1;
				Global_111638.f_20113[iParam0 /*43*/].f_26 = UNK_0x461CAC843A21E4B6(*bParam1, 4) + 1;
				Global_111638.f_20113[iParam0 /*43*/].f_27 = UNK_0x461CAC843A21E4B6(*bParam1, 23) + 1;
				Global_111638.f_20113[iParam0 /*43*/].f_28 = UNK_0x461CAC843A21E4B6(*bParam1, 14) + 1;
				Global_111638.f_20113[iParam0 /*43*/].f_29 = UNK_0x461CAC843A21E4B6(*bParam1, 16) + 1;
				Global_111638.f_20113[iParam0 /*43*/].f_30 = UNK_0x461CAC843A21E4B6(*bParam1, 15) + 1;
				Global_111638.f_20113[iParam0 /*43*/].f_32 = UNK_0xBB3F1A6E0A9B6511(*bParam1);
				Global_111638.f_20113[iParam0 /*43*/].f_33[0] = UNK_0xC34A9D742FC099DC(*bParam1);
				Global_111638.f_20113[iParam0 /*43*/].f_33[1] = UNK_0xEE936CC771514B50(*bParam1, 14, 0);
				Global_111638.f_20113[iParam0 /*43*/].f_33[2] = UNK_0xEE936CC771514B50(*bParam1, 14, 1);
				Global_111638.f_20113[iParam0 /*43*/].f_33[3] = UNK_0xEE936CC771514B50(*bParam1, 14, 2);
				Global_111638.f_20113[iParam0 /*43*/].f_33[4] = UNK_0xEE936CC771514B50(*bParam1, 14, 3);
				Global_111638.f_20113[iParam0 /*43*/].f_39 = UNK_0xFF4012C9B4D4F728(*bParam1);
				Global_111638.f_20113[iParam0 /*43*/].f_31 = func_216(*bParam1);
				Global_111638.f_20113[iParam0 /*43*/].f_33[0] = UNK_0x80A2B6C1AD8E56D5(*bParam1);
				UNK_0xF3400BB226B5BB56(*bParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_214(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_111638.f_20113[iParam0 /*43*/].f_1));
				UNK_0xB0010FD150C8A58B(*bParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_214(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_111638.f_20113[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_214(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;

	iVar0 = 0;
	while (func_215(iVar0, &uVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!bParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_215(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	*iParam2 = -1;
	*iParam3 = -1;
	*iParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*iParam2 = 3;
			*iParam3 = 118;
			*iParam4 = 3;
			break;
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*iParam2 = 0;
			*iParam3 = 147;
			*iParam4 = 4;
			break;
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 96;
			*iParam4 = 0;
			break;
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 71;
			*iParam4 = 145;
			break;
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*iParam2 = 0;
			*iParam3 = 135;
			*iParam4 = 135;
			break;
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*iParam2 = 0;
			*iParam3 = 29;
			*iParam4 = 28;
			break;
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 64;
			*iParam4 = 68;
			break;
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 70;
			*iParam4 = 0;
			break;
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 50;
			*iParam4 = 0;
			break;
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 2;
			*iParam3 = 55;
			*iParam4 = 0;
			break;
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*iParam2 = 1;
			*iParam3 = 89;
			*iParam4 = 0;
			break;
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 1;
			*iParam3 = 38;
			*iParam4 = 0;
			break;
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*iParam2 = 0;
			*iParam3 = 37;
			*iParam4 = 106;
			break;
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 4;
			*iParam4 = 111;
			break;
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*iParam2 = 4;
			*iParam3 = 120;
			*iParam4 = 0;
			break;
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 1;
			*iParam3 = 111;
			*iParam4 = 0;
			break;
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 10;
			break;
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*iParam2 = 0;
			*iParam3 = 1;
			*iParam4 = 5;
			break;
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*iParam2 = 0;
			*iParam3 = 11;
			*iParam4 = 2;
			break;
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*iParam2 = 0;
			*iParam3 = 2;
			*iParam4 = 5;
			break;
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 3;
			*iParam4 = 6;
			break;
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 5;
			*iParam4 = 111;
			break;
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*iParam2 = 0;
			*iParam3 = 6;
			*iParam4 = 4;
			break;
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 7;
			*iParam4 = 5;
			break;
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 8;
			*iParam4 = 5;
			break;
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 9;
			*iParam4 = 7;
			break;
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*iParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 7;
			break;
		case 27:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 0;
			*iParam3 = 27;
			*iParam4 = 36;
			break;
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*iParam2 = 0;
			*iParam3 = 28;
			*iParam4 = 28;
			break;
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*iParam2 = 0;
			*iParam3 = 150;
			*iParam4 = 42;
			break;
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*iParam2 = 0;
			*iParam3 = 30;
			*iParam4 = 36;
			break;
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*iParam2 = 0;
			*iParam3 = 31;
			*iParam4 = 27;
			break;
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*iParam2 = 0;
			*iParam3 = 32;
			*iParam4 = 25;
			break;
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*iParam2 = 0;
			*iParam3 = 33;
			*iParam4 = 47;
			break;
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*iParam2 = 0;
			*iParam3 = 34;
			*iParam4 = 47;
			break;
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*iParam2 = 0;
			*iParam3 = 143;
			*iParam4 = 31;
			break;
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*iParam2 = 0;
			*iParam3 = 35;
			*iParam4 = 25;
			break;
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*iParam2 = 0;
			*iParam3 = 137;
			*iParam4 = 3;
			break;
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*iParam2 = 0;
			*iParam3 = 136;
			*iParam4 = 5;
			break;
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*iParam2 = 0;
			*iParam3 = 36;
			*iParam4 = 26;
			break;
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 0;
			*iParam3 = 38;
			*iParam4 = 37;
			break;
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*iParam2 = 0;
			*iParam3 = 138;
			*iParam4 = 89;
			break;
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*iParam2 = 0;
			*iParam3 = 90;
			*iParam4 = 102;
			break;
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 0;
			*iParam3 = 88;
			*iParam4 = 88;
			break;
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*iParam2 = 0;
			*iParam3 = 89;
			*iParam4 = 88;
			break;
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*iParam2 = 0;
			*iParam3 = 91;
			*iParam4 = 91;
			break;
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 49;
			*iParam4 = 52;
			break;
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 50;
			*iParam4 = 53;
			break;
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 51;
			*iParam4 = 66;
			break;
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 52;
			*iParam4 = 59;
			break;
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 53;
			*iParam4 = 59;
			break;
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 54;
			*iParam4 = 60;
			break;
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 92;
			*iParam4 = 92;
			break;
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 141;
			*iParam4 = 73;
			break;
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 61;
			*iParam4 = 63;
			break;
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 62;
			*iParam4 = 68;
			break;
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 63;
			*iParam4 = 87;
			break;
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 65;
			*iParam4 = 87;
			break;
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 66;
			*iParam4 = 60;
			break;
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 67;
			*iParam4 = 67;
			break;
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 68;
			*iParam4 = 68;
			break;
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 69;
			*iParam4 = 74;
			break;
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 73;
			*iParam4 = 73;
			break;
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 70;
			*iParam4 = 70;
			break;
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 74;
			*iParam4 = 74;
			break;
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 96;
			*iParam4 = 95;
			break;
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 101;
			*iParam4 = 95;
			break;
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 95;
			*iParam4 = 97;
			break;
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 94;
			*iParam4 = 104;
			break;
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 97;
			*iParam4 = 98;
			break;
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 103;
			*iParam4 = 104;
			break;
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 104;
			*iParam4 = 104;
			break;
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 98;
			*iParam4 = 95;
			break;
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 100;
			*iParam4 = 100;
			break;
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 102;
			*iParam4 = 105;
			break;
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 99;
			*iParam4 = 106;
			break;
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 105;
			*iParam4 = 105;
			break;
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 106;
			*iParam4 = 106;
			break;
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 72;
			*iParam4 = 64;
			break;
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 146;
			*iParam4 = 145;
			break;
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 145;
			*iParam4 = 74;
			break;
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*iParam2 = 0;
			*iParam3 = 107;
			*iParam4 = 107;
			break;
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 0;
			*iParam3 = 111;
			*iParam4 = 0;
			break;
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*iParam2 = 0;
			*iParam3 = 112;
			*iParam4 = 0;
			break;
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			break;
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*iParam2 = 1;
			*iParam3 = 147;
			*iParam4 = 0;
			break;
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*iParam2 = 1;
			*iParam3 = 1;
			*iParam4 = 0;
			break;
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*iParam2 = 1;
			*iParam3 = 11;
			*iParam4 = 0;
			break;
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*iParam2 = 1;
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 3;
			*iParam4 = 2;
			break;
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 4;
			*iParam4 = 4;
			break;
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 5;
			*iParam4 = 5;
			break;
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*iParam2 = 1;
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 7;
			*iParam4 = 0;
			break;
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 8;
			*iParam4 = 0;
			break;
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 9;
			*iParam4 = 0;
			break;
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*iParam2 = 1;
			*iParam3 = 10;
			*iParam4 = 0;
			break;
		case 97:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 1;
			*iParam3 = 27;
			*iParam4 = 0;
			break;
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*iParam2 = 1;
			*iParam3 = 28;
			*iParam4 = 0;
			break;
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*iParam2 = 1;
			*iParam3 = 29;
			*iParam4 = 0;
			break;
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*iParam2 = 1;
			*iParam3 = 150;
			*iParam4 = 0;
			break;
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*iParam2 = 1;
			*iParam3 = 30;
			*iParam4 = 0;
			break;
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*iParam2 = 1;
			*iParam3 = 31;
			*iParam4 = 0;
			break;
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*iParam2 = 1;
			*iParam3 = 32;
			*iParam4 = 0;
			break;
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*iParam2 = 1;
			*iParam3 = 33;
			*iParam4 = 0;
			break;
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*iParam2 = 1;
			*iParam3 = 34;
			*iParam4 = 0;
			break;
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*iParam2 = 1;
			*iParam3 = 143;
			*iParam4 = 0;
			break;
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*iParam2 = 1;
			*iParam3 = 35;
			*iParam4 = 0;
			break;
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*iParam2 = 1;
			*iParam3 = 135;
			*iParam4 = 0;
			break;
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*iParam2 = 1;
			*iParam3 = 137;
			*iParam4 = 0;
			break;
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*iParam2 = 1;
			*iParam3 = 136;
			*iParam4 = 0;
			break;
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*iParam2 = 1;
			*iParam3 = 36;
			*iParam4 = 0;
			break;
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*iParam2 = 1;
			*iParam3 = 138;
			*iParam4 = 0;
			break;
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*iParam2 = 1;
			*iParam3 = 99;
			*iParam4 = 99;
			break;
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*iParam2 = 1;
			*iParam3 = 90;
			*iParam4 = 102;
			break;
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 1;
			*iParam3 = 88;
			*iParam4 = 0;
			break;
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*iParam2 = 1;
			*iParam3 = 91;
			*iParam4 = 0;
			break;
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 49;
			*iParam4 = 0;
			break;
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 51;
			*iParam4 = 0;
			break;
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 52;
			*iParam4 = 0;
			break;
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 53;
			*iParam4 = 0;
			break;
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 54;
			*iParam4 = 0;
			break;
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 92;
			*iParam4 = 0;
			break;
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 141;
			*iParam4 = 0;
			break;
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 61;
			*iParam4 = 0;
			break;
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 62;
			*iParam4 = 0;
			break;
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 63;
			*iParam4 = 0;
			break;
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 64;
			*iParam4 = 0;
			break;
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 65;
			*iParam4 = 0;
			break;
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 66;
			*iParam4 = 0;
			break;
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 67;
			*iParam4 = 0;
			break;
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 68;
			*iParam4 = 0;
			break;
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 69;
			*iParam4 = 0;
			break;
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 73;
			*iParam4 = 0;
			break;
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 74;
			*iParam4 = 0;
			break;
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 101;
			*iParam4 = 0;
			break;
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 95;
			*iParam4 = 0;
			break;
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 94;
			*iParam4 = 0;
			break;
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 97;
			*iParam4 = 0;
			break;
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 103;
			*iParam4 = 0;
			break;
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 104;
			*iParam4 = 0;
			break;
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 98;
			*iParam4 = 0;
			break;
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 100;
			*iParam4 = 0;
			break;
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 102;
			*iParam4 = 0;
			break;
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 99;
			*iParam4 = 0;
			break;
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 105;
			*iParam4 = 0;
			break;
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 106;
			*iParam4 = 0;
			break;
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 71;
			*iParam4 = 0;
			break;
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 72;
			*iParam4 = 0;
			break;
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 142;
			*iParam4 = 0;
			break;
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 145;
			*iParam4 = 0;
			break;
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*iParam2 = 1;
			*iParam3 = 107;
			*iParam4 = 0;
			break;
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*iParam2 = 1;
			*iParam3 = 112;
			*iParam4 = 0;
			break;
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 2;
			*iParam3 = 12;
			*iParam4 = 0;
			break;
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*iParam2 = 2;
			*iParam3 = 13;
			*iParam4 = 0;
			break;
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*iParam2 = 2;
			*iParam3 = 14;
			*iParam4 = 0;
			break;
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 2;
			*iParam3 = 131;
			*iParam4 = 0;
			break;
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 2;
			*iParam3 = 83;
			*iParam4 = 0;
			break;
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 2;
			*iParam3 = 82;
			*iParam4 = 0;
			break;
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 2;
			*iParam3 = 84;
			*iParam4 = 0;
			break;
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 2;
			*iParam3 = 149;
			*iParam4 = 0;
			break;
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*iParam2 = 2;
			*iParam3 = 148;
			*iParam4 = 0;
			break;
		case 162:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 2;
			*iParam3 = 39;
			*iParam4 = 0;
			break;
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*iParam2 = 2;
			*iParam3 = 40;
			*iParam4 = 0;
			break;
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 2;
			*iParam3 = 41;
			*iParam4 = 0;
			break;
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 2;
			*iParam3 = 42;
			*iParam4 = 0;
			break;
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*iParam2 = 2;
			*iParam3 = 128;
			*iParam4 = 0;
			break;
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*iParam2 = 2;
			*iParam3 = 151;
			*iParam4 = 0;
			break;
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*iParam2 = 2;
			*iParam3 = 155;
			*iParam4 = 0;
			break;
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*iParam2 = 2;
			*iParam3 = 152;
			*iParam4 = 0;
			break;
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*iParam2 = 2;
			*iParam3 = 153;
			*iParam4 = 0;
			break;
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*iParam2 = 2;
			*iParam3 = 154;
			*iParam4 = 0;
			break;
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*iParam2 = 3;
			*iParam3 = 117;
			*iParam4 = 18;
			break;
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*iParam2 = 3;
			*iParam3 = 119;
			*iParam4 = 5;
			break;
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*iParam2 = 3;
			*iParam3 = 158;
			*iParam4 = 160;
			break;
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*iParam2 = 3;
			*iParam3 = 159;
			*iParam4 = 160;
			break;
	}
	return *iParam2 != -1;
}

float func_216(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;

	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0)) && UNK_0x67303E186EA6C9A0(bParam0) >= 0)
	{
		if (UNK_0xFF4012C9B4D4F728(bParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (UNK_0xFF4012C9B4D4F728(bParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (UNK_0xFF4012C9B4D4F728(bParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (UNK_0xFF4012C9B4D4F728(bParam0) == 0)
		{
			if (UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(bParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
	return fVar6;
}

bool func_217(bool bParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;

	*uParam2 = 0;
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return false;
	}
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	if (!UNK_0x4DAC2AD66FE0E696(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		return false;
	}
	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	if ((!func_243(bVar0, bParam1, uParam2) && !func_242(UNK_0xD803B885F5E47A62())) && !func_225(bParam0))
	{
		return false;
	}
	if (func_242(UNK_0xD803B885F5E47A62()))
	{
		if (func_224(bVar0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bVar1 = false;
	if (func_223(UNK_0xD803B885F5E47A62()) && (UNK_0xAFB8495D36825275(bVar0) || UNK_0xC41A9202669A24C4(bVar0)))
	{
		bVar1 = true;
	}
	if (((UNK_0x56E1CD81AE700E98(bParam0) && !func_221(bParam0)) && !bVar1) && !(func_220(UNK_0x134B62B726CEC8E6(bParam0)) && func_218(UNK_0xD803B885F5E47A62())))
	{
		switch (UNK_0x134B62B726CEC8E6(bParam0))
		{
			case joaat("CERBERUS"):
			case joaat("CERBERUS2"):
			case joaat("CERBERUS3"):
			case joaat("MONSTER3"):
			case joaat("MONSTER4"):
			case joaat("MONSTER5"):
				*uParam2 = 16;
				break;
			default:
				*uParam2 = 2;
				break;
		}
		return false;
	}
	if (!UNK_0x8CD06866876216F2())
	{
		if ((func_154(bParam0) && UNK_0x134B62B726CEC8E6(bParam0) != joaat("SENTINEL2")) && UNK_0x134B62B726CEC8E6(bParam0) != joaat("ISSI2"))
		{
			*uParam2 = 2;
			return false;
		}
	}
	return true;
}

bool func_218(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_116(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_219(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

int func_219(int iParam0)
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

bool func_220(int iParam0)
{
	if (((iParam0 == joaat("MULE4") || iParam0 == joaat("POUNDER2")) || iParam0 == joaat("SPEEDO4")) || iParam0 == joaat("TERBYTE"))
	{
		return true;
	}
	return false;
}

bool func_221(bool bParam0)
{
	switch (UNK_0x134B62B726CEC8E6(bParam0))
	{
		case joaat("HALFTRACK"):
		case joaat("PHANTOM3"):
		case joaat("HAULER2"):
		case joaat("TRAILERLARGE"):
		case joaat("TRAILERSMALL2"):
		case joaat("BRUISER"):
		case joaat("SCARAB"):
		case joaat("SCARAB2"):
		case joaat("SCARAB3"):
		case joaat("BRUISER2"):
		case joaat("BRUISER3"):
			return true;
		case joaat("CERBERUS"):
		case joaat("CERBERUS2"):
		case joaat("CERBERUS3"):
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
			if (func_222(UNK_0xD803B885F5E47A62()))
			{
				return true;
			}
			break;
		case -1254331310:
		case joaat("BURRITO2"):
			return true;
	}
	return false;
}

bool func_222(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_116(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_219(Global_2425662[bParam0 /*421*/].f_310.f_5) == 13;
			}
		}
	}
	return false;
}

bool func_223(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_116(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_219(Global_2425662[bParam0 /*421*/].f_310.f_5) == 7;
			}
		}
	}
	return false;
}

bool func_224(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("AVENGER"):
		case joaat("THRUSTER"):
		case joaat("RIOT2"):
		case joaat("CHERNOBOG"):
		case joaat("KHANJALI"):
			return true;
	}
	return false;
}

bool func_225(bool bParam0)
{
	if (func_241(UNK_0xD803B885F5E47A62()) || func_240(UNK_0xD803B885F5E47A62()))
	{
		if (func_226(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_226(bool bParam0)
{
	if ((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return false;
	}
	if (func_229(bParam0, 0))
	{
		return true;
	}
	if (UNK_0x30F813723591D02E(bParam0, "Player_Vehicle"))
	{
		if (UNK_0x1E2DFB0EF4BB4566(bParam0, "Player_Vehicle") == UNK_0xE86C2816EDC6CAF0(UNK_0xD803B885F5E47A62()))
		{
			if (func_227(bParam0))
			{
				return true;
			}
			switch (UNK_0x134B62B726CEC8E6(bParam0))
			{
				case joaat("ARDENT"):
				case joaat("NIGHTSHARK"):
				case joaat("DELUXO"):
				case joaat("STROMBERG"):
				case joaat("COMET4"):
				case joaat("REVOLTER"):
				case joaat("SAVESTRA"):
				case joaat("VISERIS"):
				case joaat("CARACARA"):
				case 1416466158:
					return true;
			}
		}
	}
	return false;
}

bool func_227(bool bParam0)
{
	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	if (func_228(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		return true;
	}
	return false;
}

bool func_228(int iParam0)
{
	switch (iParam0)
	{
		case joaat("APC"):
		case joaat("DUNE3"):
		case joaat("HALFTRACK"):
		case joaat("OPPRESSOR"):
		case joaat("TAMPA3"):
		case joaat("TECHNICAL3"):
		case joaat("INSURGENT3"):
		case joaat("VIGILANTE"):
		case joaat("BARRAGE"):
		case joaat("MENACER"):
		case joaat("SCRAMJET"):
			return true;
	}
	return false;
}

bool func_229(bool bParam0, bool bParam1)
{
	switch (UNK_0x134B62B726CEC8E6(bParam0))
	{
		case joaat("TECHNICAL"):
		case joaat("INSURGENT"):
			if (func_231(UNK_0x134B62B726CEC8E6(bParam0), 0))
			{
				if (Global_2537071.f_301 == bParam0)
				{
					return true;
				}
				else if (func_230(bParam0) != -1 && !bParam1)
				{
					return true;
				}
			}
			break;
	}
	return false;
}

int func_230(bool bParam0)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2439138.f_628[iVar0] == bParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_231(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_239(iParam0, 0))
		{
			return true;
		}
	}
	switch (iParam0)
	{
		case joaat("FACTION"):
		case joaat("BUCCANEER"):
		case joaat("CHINO"):
		case joaat("MOONBEAM"):
		case joaat("PRIMO"):
		case joaat("VOODOO2"):
			return func_238();
		case joaat("SABREGT"):
			if (Global_262145.f_14219)
			{
				return func_237();
			}
			break;
		case joaat("TORNADO"):
		case joaat("TORNADO2"):
		case joaat("TORNADO3"):
			if (Global_262145.f_14220)
			{
				return func_237();
			}
			break;
		case joaat("VIRGO3"):
			if (Global_262145.f_14218)
			{
				return func_237();
			}
			break;
		case joaat("MINIVAN"):
			if (Global_262145.f_14221)
			{
				return func_237();
			}
			break;
		case joaat("SLAMVAN"):
			if (Global_262145.f_14223)
			{
				return func_237();
			}
			break;
		case joaat("SULTAN"):
		case joaat("BANSHEE"):
			return func_236();
		case joaat("COMET2"):
			if (Global_262145.f_18669)
			{
				return func_235();
			}
			break;
		case joaat("DIABLOUS"):
			if (Global_262145.f_18671)
			{
				return func_235();
			}
			break;
		case joaat("FCR"):
			if (Global_262145.f_18675)
			{
				return func_235();
			}
			break;
		case joaat("ELEGY2"):
			if (Global_262145.f_18672)
			{
				return func_235();
			}
			break;
		case joaat("NERO"):
			if (Global_262145.f_18679)
			{
				return func_235();
			}
			break;
		case joaat("ITALIGTB"):
			if (Global_262145.f_18677)
			{
				return func_235();
			}
			break;
		case joaat("SPECTER"):
			if (Global_262145.f_18682)
			{
				return func_235();
			}
			break;
		case joaat("TECHNICAL"):
			if (Global_262145.f_20625)
			{
				return func_234();
			}
			break;
		case joaat("INSURGENT"):
			if (Global_262145.f_20626)
			{
				return func_234();
			}
			break;
		case joaat("RATLOADER"):
		case joaat("RATLOADER2"):
			return func_233();
		case joaat("GLENDALE"):
			if (func_233() || func_232())
			{
				return true;
			}
			break;
		case joaat("IMPALER"):
			return func_233();
		case joaat("ISSI3"):
			return func_233();
		case joaat("GARGOYLE"):
			return func_233();
		case joaat("DOMINATOR"):
			return func_233();
		case joaat("DOMINATOR2"):
			return func_233();
		case joaat("IMPERATOR"):
			return func_233();
		case joaat("IMPERATOR2"):
			return func_233();
		case joaat("IMPERATOR3"):
			return func_233();
		case joaat("DEATHBIKE"):
			return func_233();
		case joaat("DEATHBIKE2"):
			return func_233();
		case joaat("DEATHBIKE3"):
			return func_233();
		case joaat("IMPALER2"):
		case joaat("BRUTUS"):
		case joaat("BRUISER"):
		case joaat("SLAMVAN4"):
		case joaat("ISSI4"):
		case joaat("MONSTER3"):
		case joaat("SCARAB"):
		case joaat("CERBERUS"):
		case joaat("DOMINATOR4"):
		case joaat("ZR380"):
		case joaat("IMPALER3"):
		case joaat("BRUTUS2"):
		case joaat("BRUISER2"):
		case joaat("SLAMVAN5"):
		case joaat("ISSI5"):
		case joaat("MONSTER4"):
		case joaat("SCARAB2"):
		case joaat("CERBERUS2"):
		case joaat("DOMINATOR5"):
		case joaat("ZR3802"):
		case joaat("IMPALER4"):
		case joaat("BRUTUS3"):
		case joaat("BRUISER3"):
		case joaat("SLAMVAN6"):
		case joaat("ISSI6"):
		case joaat("MONSTER5"):
		case joaat("SCARAB3"):
		case joaat("CERBERUS3"):
		case joaat("DOMINATOR6"):
		case joaat("ZR3803"):
			return func_233();
		case joaat("YOUGA2"):
			if (Global_262145.f_28524)
			{
				return func_232();
			}
			break;
		case 722226637:
			if (Global_262145.f_28874)
			{
				return func_232();
			}
			break;
		case joaat("MANANA"):
			if (Global_262145.f_28523)
			{
				return func_232();
			}
			break;
		case joaat("PEYOTE"):
			if (Global_262145.f_28873)
			{
				return func_232();
			}
			break;
		case joaat("YOSEMITE"):
			if (Global_262145.f_28872)
			{
				return func_232();
			}
			break;
	}
	return false;
}

bool func_232()
{
	return UNK_0xC146D5FBD23C6954(1815791016);
}

bool func_233()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPCHRISTMAS2018"));
}

bool func_234()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPGUNRUNNING"));
}

bool func_235()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPIMPORTEXPORT"));
}

bool func_236()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPJANUARY2016"));
}

bool func_237()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPLOWRIDER2"));
}

bool func_238()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPLOWRIDER"));
}

bool func_239(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("FACTION2"):
		case joaat("BUCCANEER2"):
		case joaat("CHINO2"):
		case joaat("MOONBEAM2"):
		case joaat("PRIMO2"):
		case joaat("VOODOO"):
			return true;
		case joaat("SABREGT2"):
			if (!Global_262145.f_14219)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("TORNADO5"):
			if (!Global_262145.f_14220)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("VIRGO2"):
			if (!Global_262145.f_14218)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("MINIVAN2"):
			if (!Global_262145.f_14221)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("SLAMVAN3"):
			if (!Global_262145.f_14223)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("FACTION3"):
			if (!Global_262145.f_14222)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("SULTANRS"):
		case joaat("BANSHEE2"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("COMET3"):
			if (Global_262145.f_18669)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("DIABLOUS2"):
			if (Global_262145.f_18671)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("FCR2"):
			if (Global_262145.f_18675)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("ELEGY"):
			if (Global_262145.f_18672)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("NERO2"):
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("ITALIGTB2"):
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("SPECTER2"):
			if (Global_262145.f_18682)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("TECHNICAL3"):
			if (Global_262145.f_20625)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("INSURGENT3"):
			if (Global_262145.f_20626)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("SLAMVAN4"):
		case joaat("SLAMVAN5"):
		case joaat("SLAMVAN6"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("ISSI4"):
		case joaat("ISSI5"):
		case joaat("ISSI6"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("IMPALER2"):
		case joaat("IMPALER3"):
		case joaat("IMPALER4"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("DEATHBIKE"):
		case joaat("DEATHBIKE2"):
		case joaat("DEATHBIKE3"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("DOMINATOR4"):
		case joaat("DOMINATOR5"):
		case joaat("DOMINATOR6"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("BRUISER"):
		case joaat("BRUISER2"):
		case joaat("BRUISER3"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case 1802742206:
		case -2122646867:
		case 67753863:
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case 1717532765:
		case 1107404867:
		case -913589546:
			return true;
	}
	return false;
}

bool func_240(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_116(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_32())
			{
				return func_219(Global_2425662[bParam0 /*421*/].f_310.f_5) == 5;
			}
		}
	}
	return false;
}

bool func_241(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_116(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_32())
			{
				return func_219(Global_2425662[bParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return false;
}

bool func_242(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_116(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_219(Global_2425662[bParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return false;
}

bool func_243(bool bParam0, bool bParam1, var uParam2)
{
	bool bVar0;

	if (!bParam1)
	{
		if ((((((((((((((bParam0 == joaat("POLICE") || bParam0 == joaat("POLICEOLD1")) || bParam0 == joaat("POLICEOLD2")) || bParam0 == joaat("POLICE2")) || bParam0 == joaat("POLICE3")) || bParam0 == joaat("POLICE4")) || bParam0 == joaat("FBI")) || bParam0 == joaat("FBI2")) || bParam0 == joaat("POLMAV")) || bParam0 == joaat("POLICEB")) || bParam0 == joaat("POLICET")) || bParam0 == joaat("RIOT")) || bParam0 == joaat("SHERIFF")) || bParam0 == joaat("PRANGER")) || bParam0 == joaat("SHERIFF2"))
		{
			*uParam2 = 1;
			return false;
		}
	}
	if (((((((bParam0 == joaat("AMBULANCE") || bParam0 == joaat("FIRETRUK")) || bParam0 == joaat("TAXI")) || bParam0 == joaat("LGUARD")) || bParam0 == joaat("RIPLEY")) || bParam0 == joaat("DILETTANTE2")) || bParam0 == joaat("AIRBUS")) || bParam0 == joaat("AIRTUG"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((bParam0 == joaat("BURRITO") || bParam0 == joaat("RUMPO2")) || bParam0 == joaat("SPEEDO")) || bParam0 == joaat("SPEEDO2"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((bParam0 == joaat("SCORCHER") || bParam0 == joaat("BMX")) || bParam0 == joaat("CRUISER")) || bParam0 == joaat("FIXTER"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((((((((((((((((((bParam0 == joaat("CADDY") || bParam0 == joaat("FORKLIFT")) || bParam0 == joaat("CADDY2")) || bParam0 == joaat("CRUSADER")) || bParam0 == joaat("TRIBIKE")) || bParam0 == joaat("TRIBIKE2")) || bParam0 == joaat("TRIBIKE3")) || bParam0 == joaat("TRACTOR")) || bParam0 == joaat("TRACTOR2")) || bParam0 == joaat("MOWER")) || bParam0 == joaat("TORNADO4")) || bParam0 == joaat("DOCKTUG")) || bParam0 == joaat("STRETCH")) || bParam0 == joaat("BISON2")) || bParam0 == joaat("BISON3")) || bParam0 == joaat("BENSON")) || bParam0 == joaat("POUNDER")) || bParam0 == joaat("SUBMERSIBLE")) || bParam0 == joaat("EMPEROR3")) || bParam0 == joaat("DUNE2"))
	{
		*uParam2 = 2;
		return false;
	}
	bVar0 = false;
	if (func_223(UNK_0xD803B885F5E47A62()) && (UNK_0xAFB8495D36825275(bParam0) || UNK_0xC41A9202669A24C4(bParam0)))
	{
		bVar0 = true;
	}
	if ((((((((((((!UNK_0x8E39AC3C76C8AA58(bParam0) && !UNK_0x7D8B2A8F9EA82DB7(bParam0)) && bParam0 != joaat("BLAZER")) && bParam0 != joaat("BLAZER2")) && bParam0 != joaat("BLAZER3")) && bParam0 != joaat("BLAZER4")) && bParam0 != joaat("BLAZER5")) && bParam0 != joaat("CHIMERA")) && bParam0 != joaat("TRAILERLARGE")) && bParam0 != joaat("TRAILERSMALL2")) && bParam0 != 916547552) && bParam0 != 301304410) && !bVar0)
	{
		*uParam2 = 2;
		return false;
	}
	if (bParam0 == joaat("MONSTER"))
	{
		*uParam2 = 2;
		return false;
	}
	if ((bParam0 == joaat("INSURGENT") || bParam0 == joaat("TECHNICAL")) || bParam0 == joaat("LIMO2"))
	{
		*uParam2 = 2;
		return false;
	}
	if (UNK_0x8CD06866876216F2())
	{
		if (func_244(bParam0))
		{
			*uParam2 = 2;
			return false;
		}
	}
	if (!UNK_0x8CD06866876216F2())
	{
		if (bParam0 == joaat("INSURGENT") || bParam0 == joaat("INSURGENT2"))
		{
			*uParam2 = 2;
		}
	}
	return true;
}

bool func_244(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("FORKLIFT"):
			return true;
	}
	return false;
}

void func_245(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!UNK_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			Global_96075[iVar0] = bParam0;
			Global_96085[iVar0] = iParam1;
			Global_96095[iVar0] = UNK_0x134B62B726CEC8E6(bParam0);
			if (UNK_0x8E39AC3C76C8AA58(Global_96095[iVar0]))
			{
				Global_96123[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_96123[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_246(bool bParam0)
{
	if (!func_247(*bParam0))
	{
		UNK_0xD3421E391490133B(*bParam0, 5, !Global_111638.f_9080.f_99.f_58[119]);
	}
}

bool func_247(bool bParam0)
{
	return UNK_0xDD62D560CFE11A27(bParam0, 5);
}

int func_248(bool bParam0, var uParam1, var uParam2)
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
	UNK_0xF95FF0A179413A39(*bParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			UNK_0x73BEC6F1685574E6(*bParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				UNK_0x73BEC6F1685574E6(*bParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					UNK_0x0CAC3E53DC3F794F(*bParam0, 255);
				}
				else
				{
					UNK_0x0CAC3E53DC3F794F(*bParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				UNK_0x73BEC6F1685574E6(*bParam0, iVar1, false);
			}
		}
		else if (UNK_0x0ECB5CA5140957AD(*bParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			UNK_0x7AFDC9F56E7BB635(*bParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					UNK_0xEE6A1776A67F70C1(*bParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					UNK_0xEE6A1776A67F70C1(*bParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					UNK_0xEE6A1776A67F70C1(*bParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_239(UNK_0x134B62B726CEC8E6(*bParam0), 1) && UNK_0x0ECB5CA5140957AD(*bParam0, 24) != func_251(*bParam0, ((*uParam1)[38] - 1)))
	{
		UNK_0xEE6A1776A67F70C1(*bParam0, 24, func_251(*bParam0, ((*uParam1)[38] - 1)), false);
	}
	func_250(bParam0);
	if (func_249(*bParam0))
	{
		UNK_0xD5A0214B20BCBAD8(*bParam0, 1);
		UNK_0x44A200C9B6E1CEA6(*bParam0, true);
	}
	return 1;
}

bool func_249(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];

	if ((UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0)) && UNK_0x40B3F576B41FA183(bParam0) > 0)
	{
		UNK_0xF95FF0A179413A39(bParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (UNK_0x0ECB5CA5140957AD(bParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, UNK_0xAE6250B518DF3C3B(bParam0, iVar1, UNK_0x0ECB5CA5140957AD(bParam0, iVar1)), 16);
				iVar2 = UNK_0x12AB0310C2281427(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == UNK_0x12AB0310C2281427("MNU_CAGE") || iVar2 == UNK_0x12AB0310C2281427("SABRE_CAG"))
					{
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_250(bool bParam0)
{
	switch (UNK_0x134B62B726CEC8E6(*bParam0))
	{
		case joaat("STARLING"):
			if (UNK_0x0ECB5CA5140957AD(*bParam0, 4) == 0)
			{
				UNK_0xEE6A1776A67F70C1(*bParam0, 13, false, false);
			}
			else
			{
				UNK_0x7AFDC9F56E7BB635(*bParam0, 13);
			}
			break;
	}
}

int func_251(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		switch (UNK_0x134B62B726CEC8E6(bParam0))
		{
			case joaat("TORNADO5"):
				switch (iParam1)
				{
					case 0:
						return 0;
					case 1:
						return 1;
					case 2:
						return 2;
					case 3:
						return 3;
					case 4:
						return 4;
					case 5:
						return 4;
				}
				break;
			case joaat("FACTION3"):
				return 3;
		}
		iVar0 = UNK_0x461CAC843A21E4B6(bParam0, 38);
		iVar1 = UNK_0x461CAC843A21E4B6(bParam0, 24);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

bool func_252(var uParam0, bool bParam1)
{
	if (UNK_0x8CD06866876216F2())
	{
	}
	else if (Global_111638.f_20113.f_261)
	{
		*uParam0 = { Global_111638.f_20113.f_267 };
		*bParam1 = Global_111638.f_20113.f_271;
		return true;
	}
	return false;
}

void func_253(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (!func_257(bParam0))
		{
			if (UNK_0x12AB0310C2281427(&(uParam1->f_1)) != 0)
			{
				UNK_0x55A3C4ED4728EA42(bParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < UNK_0xBCB9B04D4DA658DF())
			{
				UNK_0xA22B35B584F0580A(bParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("SOVEREIGN"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("CASCO"))
		{
			iVar0 = 1;
			if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_182(iVar0 + 1)))
			{
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_182(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("SANDKING") || uParam1->f_66 == joaat("SANDKING2"))
		{
			iVar1 = 1;
			if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_182(iVar1 + 1)))
			{
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_182(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_182(iVar2)))
				{
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_182(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_182(iVar3)))
				{
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_182(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == 1181339704)
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_182(iVar4)))
					{
					}
					else
					{
						UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_182(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == -1728685474)
		{
			if (UNK_0x0ECB5CA5140957AD(bParam0, 10) != 0)
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), false);
			}
		}
		if (uParam1->f_66 == joaat("NIGHTSHARK"))
		{
			UNK_0xF4FAAFEE2CE3B86C(bParam0, 0);
			if (UNK_0x0ECB5CA5140957AD(bParam0, 5) != -1)
			{
				UNK_0xF4FAAFEE2CE3B86C(bParam0, 1);
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 13))
		{
			UNK_0xBC3B1E7E1CC2D15C(bParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			UNK_0x231087BDB2AEBD55(bParam0);
		}
		if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 12))
		{
			UNK_0xAA443C33B073D88B(bParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			UNK_0xC15818BDC09EC354(bParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			UNK_0xC002508A277213DE(bParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		UNK_0x58A0C35FA7CA6162(bParam0, uParam1->f_7, uParam1->f_8);
		if (((UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 15) || func_256(bParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_255())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		UNK_0x9F0DB8A295EA8513(bParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_184(uParam1->f_66))
		{
			UNK_0x8BF0BEF985EB6D43(bParam0, 0);
		}
		else
		{
			UNK_0x8BF0BEF985EB6D43(bParam0, 0);
			UNK_0x8BF0BEF985EB6D43(bParam0, uParam1->f_65);
		}
		UNK_0xA22F71BBC8173C39(bParam0, !UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 9));
		if (bParam2)
		{
			UNK_0x71EDC33E5A423750(bParam0, uParam1->f_70);
		}
		UNK_0x85654A532F20966B(bParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		UNK_0x7726E33AC3B60544(bParam0, 2, UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 28));
		UNK_0x7726E33AC3B60544(bParam0, 3, UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 29));
		UNK_0x7726E33AC3B60544(bParam0, 0, UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 30));
		UNK_0x7726E33AC3B60544(bParam0, 1, UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 31));
		UNK_0x750A9DEB80D6992C(bParam0, UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 10));
		if (UNK_0x579935D850368851(bParam0) > 1 && uParam1->f_67 >= 0)
		{
			UNK_0x446EA2500F021666(bParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!UNK_0xAD09C9A4B56FA133(UNK_0x134B62B726CEC8E6(bParam0)))
			{
				if (UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(bParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_254(bParam0, uParam1->f_69);
					}
				}
				else
				{
					func_254(bParam0, uParam1->f_69);
				}
			}
		}
		if (UNK_0x587993B327460A82(bParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				UNK_0x429C172A00A5F89B(bParam0, 1);
			}
			else
			{
				UNK_0x821D9A7077DBCDBC(bParam0, 1);
			}
		}
		if (bParam3)
		{
			func_248(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!UNK_0xAFB8495D36825275(uParam1->f_66) && !UNK_0xA7082C42B8809BF2(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_182(iVar5 + 1)))
				{
					if (!UNK_0xDD62D560CFE11A27(bParam0, iVar5 + 1))
					{
						UNK_0xD3421E391490133B(bParam0, iVar5 + 1, false);
					}
				}
				else if (UNK_0xDD62D560CFE11A27(bParam0, iVar5 + 1))
				{
					UNK_0xD3421E391490133B(bParam0, iVar5 + 1, true);
				}
				iVar5++;
			}
		}
		if ((UNK_0x134B62B726CEC8E6(bParam0) == joaat("SHEAVA") || UNK_0x134B62B726CEC8E6(bParam0) == joaat("OMNIS")) || UNK_0x134B62B726CEC8E6(bParam0) == joaat("LE7B"))
		{
			if (UNK_0x0ECB5CA5140957AD(bParam0, 0) == -1)
			{
				UNK_0xD3421E391490133B(bParam0, true, false);
			}
		}
		if (((UNK_0xC41A9202669A24C4(uParam1->f_66) && UNK_0xE7BF3A9C4976022F(bParam0)) && !UNK_0x4906F8A34E9F4814(bParam0, joaat("AVENGER"))) && !((((Global_4456448.f_75705 == 6 || Global_4456448.f_75705 == 7) || Global_4456448.f_75705 == 18) || Global_4456448.f_75705 == 19) && Global_4456448.f_2 == 20))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 23))
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 22))
				{
					UNK_0xB58CA658A628ED02(bParam0, 2);
				}
				else
				{
					UNK_0xB58CA658A628ED02(bParam0, 3);
				}
			}
			else
			{
				UNK_0xB58CA658A628ED02(bParam0, 4);
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 27))
		{
			UNK_0xA1093ABB024EC9BD(bParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			UNK_0xA1093ABB024EC9BD(bParam0, "IgnoredByQuickSave", 0);
		}
	}
}

void func_254(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (UNK_0x40B3F576B41FA183(bParam0) > 0)
	{
		UNK_0xF95FF0A179413A39(bParam0, 0);
		bVar0 = UNK_0x0ECB5CA5140957AD(bParam0, 24);
		iVar1 = UNK_0x3A5601978F787E51(bParam0, 24);
		UNK_0x920DACD685EA4957(bParam0, iParam1);
		if (UNK_0x134B62B726CEC8E6(bParam0) == joaat("TORNADO6") || UNK_0x134B62B726CEC8E6(bParam0) == -1804415708)
		{
			return;
		}
		if (bVar0 == -1)
		{
			UNK_0x7AFDC9F56E7BB635(bParam0, 24);
		}
		else
		{
			UNK_0xEE6A1776A67F70C1(bParam0, 24, bVar0, iVar1 == 1);
		}
	}
}

bool func_255()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPINDEPENDENCE"));
}

bool func_256(bool bParam0)
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (UNK_0xF1D385D359D58F72("MPBitset", 3))
			{
				if (UNK_0x30F813723591D02E(bParam0, "MPBitset"))
				{
					bVar0 = UNK_0x1E2DFB0EF4BB4566(bParam0, "MPBitset");
				}
				return UNK_0xEAE0D21A50E6C7F4(bVar0, 4);
			}
		}
	}
	return false;
}

bool func_257(bool bParam0)
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!func_263(UNK_0xD803B885F5E47A62(), -1))
		{
			bParam0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		}
	}
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return false;
	}
	if (UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return false;
	}
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	if (func_259(UNK_0xD803B885F5E47A62()) == 3)
	{
		if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (func_258(bParam0) != -1)
			{
				return true;
			}
		}
	}
	return false;
}

int func_258(bool bParam0)
{
	if (UNK_0xF1D385D359D58F72("FMDeliverableID", 3))
	{
		if (UNK_0x30F813723591D02E(bParam0, "FMDeliverableID"))
		{
			return UNK_0x1E2DFB0EF4BB4566(bParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_259(int iParam0)
{
	if (func_262(iParam0) == 233)
	{
		return func_260(iParam0);
	}
	return -1;
}

int func_260(int iParam0)
{
	if (func_261(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

bool func_261(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

int func_262(int iParam0)
{
	if (func_261(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_263(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (func_116(bParam0, 1, 1))
	{
		if (UNK_0x405E212DDE472467(UNK_0x9539D44F3E4492F6(bParam0), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x9539D44F3E4492F6(bParam0), 0);
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (UNK_0x16F2683693E537C9() == UNK_0xA30B8362589C124A(bVar0, bParam1, 0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_264(int iParam0, var uParam1)
{
	struct<82> Var0;

	if (!func_173(iParam0))
	{
		return false;
	}
	if (Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam0 /*98*/] == uParam1->f_66 && UNK_0x12AB0310C2281427(&(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam0 /*98*/].f_27)) == UNK_0x12AB0310C2281427(&(uParam1->f_1)))
		{
			return true;
		}
	}
	if (Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam0 /*98*/] == uParam1->f_66 && UNK_0x12AB0310C2281427(&(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam0 /*98*/].f_27)) == UNK_0x12AB0310C2281427(&(uParam1->f_1)))
		{
			return true;
		}
	}
	Var0.f_11 = 12;
	Var0.f_31 = 49;
	Var0.f_81 = 2;
	func_172(iParam0, &Var0, 1);
	if (Var0 != 0)
	{
		if (Var0 == uParam1->f_66 && UNK_0x12AB0310C2281427(&(Var0.f_27)) == UNK_0x12AB0310C2281427(&(uParam1->f_1)))
		{
			return true;
		}
	}
	func_172(iParam0, &Var0, 2);
	if (Var0 != 0)
	{
		if (Var0 == uParam1->f_66 && UNK_0x12AB0310C2281427(&(Var0.f_27)) == UNK_0x12AB0310C2281427(&(uParam1->f_1)))
		{
			return true;
		}
	}
	return false;
}

int func_265()
{
	return func_266(&(Global_102203.f_2890));
}

int func_266(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_144(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("STUNT") && func_59(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608 /* Float: 0.5f */, 0))
	{
		return 0;
	}
	return 1;
}

int func_267()
{
	return func_266(&(Global_105187.f_2890));
}

bool func_268(bool bParam0)
{
	bool bVar0;
	vector3 vVar1;

	bVar0 = false;
	func_276(&uLocal_99, &Global_95606);
	func_277(&uLocal_99, joaat("S_M_M_ARMOURED_01"));
	func_277(&uLocal_99, bLocal_85);
	func_277(&uLocal_99, bLocal_86);
	if ((UNK_0xB87F6CF6E5628C67(joaat("S_M_M_ARMOURED_01")) && UNK_0xB87F6CF6E5628C67(bLocal_85)) && UNK_0xB87F6CF6E5628C67(bLocal_86))
	{
		if (bParam0)
		{
			if (!UNK_0xC844350D5D58C99A(Local_1318))
			{
				if (UNK_0xC844350D5D58C99A(Global_95241[0]))
				{
					UNK_0x73270B3C9CC833FD(Global_95241[0], true, 1);
					Local_1318 = Global_95241[0];
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!UNK_0xC844350D5D58C99A(vLocal_1306.x))
			{
				if (UNK_0xC844350D5D58C99A(Global_95241.f_9[0]))
				{
					UNK_0x73270B3C9CC833FD(Global_95241.f_9[0], true, 1);
					vLocal_1306.x = Global_95241.f_9[0];
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		else
		{
			func_277(&uLocal_99, bLocal_84);
			if (UNK_0xB87F6CF6E5628C67(bLocal_84) && UNK_0x1C2E18E9C63BEB77(&Global_95606))
			{
				if (UNK_0x7F8A39872A07D2CE(&Global_95606, "jhp2a_main"))
				{
					UNK_0xEF8F639897C675D5(&Global_95606, 23, &vVar1);
					UNK_0x28F5E4DA506AC0CA(vVar1, 20f, 0, 0, 0, 0, false, 0);
					Local_1318 = UNK_0x122AAB0B1D6F55AD(bLocal_84, vVar1, 119.4988f, true, true, false);
					vLocal_1306.x = UNK_0x852A19533F896693(Local_1318, 26, bLocal_83, -1, 1, true);
					UNK_0xB9FD7450C0DAB575(Local_1318, 1084227584 /* Float: 5f */);
					UNK_0x1B901F542DF070CF(vLocal_1306.x, Local_1318, &Global_95606, 786475, 23, 16, -1, 12f, 0, 1073741824 /* Float: 2f */);
				}
				else
				{
					UNK_0xEF8F639897C675D5(&Global_95606, 29, &vVar1);
					UNK_0x28F5E4DA506AC0CA(vVar1, 20f, 0, 0, 0, 0, false, 0);
					Local_1318 = UNK_0x122AAB0B1D6F55AD(bLocal_84, vVar1, 134.0011f, true, true, false);
					vLocal_1306.x = UNK_0x852A19533F896693(Local_1318, 26, bLocal_83, -1, 1, true);
					UNK_0xB9FD7450C0DAB575(Local_1318, 1084227584 /* Float: 5f */);
					UNK_0x1B901F542DF070CF(vLocal_1306.x, Local_1318, &Global_95606, 786475, 29, 16, -1, 12f, 0, 1073741824 /* Float: 2f */);
				}
			}
		}
		if (UNK_0xC844350D5D58C99A(Local_1318))
		{
			func_274(Local_1318, 0);
			if (UNK_0xDF1306B443CD3D15(Local_1318, 0))
			{
				UNK_0x44A200C9B6E1CEA6(Local_1318, true);
				UNK_0xE8832A9E16A57A1F(Local_1318, true, 1);
				UNK_0x4D647C1236C18D14(Local_1318, 1);
				UNK_0xF3F7BF451A720FDF(Local_1318, 1);
			}
		}
		if (UNK_0xC844350D5D58C99A(vLocal_1306.x))
		{
			if (!UNK_0xEB6A8945D1AC98A1(vLocal_1306.x))
			{
				UNK_0x11AD11297DC58CC7(vLocal_1306.x, true);
				UNK_0x6DF7BF67E86AAE86(vLocal_1306.x, bLocal_1305);
				UNK_0x298903DD96203C2C(vLocal_1306.x, 5);
				UNK_0x25C5402CC10F76CD(vLocal_1306.x, false);
				UNK_0xAFF39FB306F8E232(vLocal_1306.x, 1, false);
				UNK_0x262EF6C6306BEA6C(vLocal_1306.x, joaat("WEAPON_PISTOL"), 15, false, true);
				func_273(&uLocal_1126, 3, vLocal_1306.x, "JHP2A_Driver", 0, 1);
				func_272(&(Local_1084[0 /*8*/]), 0, 0, 1);
			}
		}
		if (UNK_0xC844350D5D58C99A(Local_1318) && UNK_0xC844350D5D58C99A(vLocal_1306.x))
		{
			func_271();
			func_272(&(Local_1084[1 /*8*/]), 0, 0, 1);
			func_269(&uLocal_99, joaat("BOXVILLE3"));
			func_269(&uLocal_99, joaat("S_M_M_ARMOURED_01"));
			func_269(&uLocal_99, bLocal_85);
			func_269(&uLocal_99, bLocal_86);
			return true;
		}
		else if (bVar0)
		{
		}
	}
	return false;
}

void func_269(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == bParam1)
			{
				if ((uParam0[iVar0 /*5*/])->f_1)
				{
					UNK_0x71199B01895C6202(bParam1);
					func_270(uParam0[iVar0 /*5*/]);
					return;
				}
				else
				{
					(uParam0[iVar0 /*5*/])->f_2 = 1;
					uParam0->f_982 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_270(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_271()
{
	vector3 vVar0;

	if (UNK_0xC844350D5D58C99A(Local_1318))
	{
		if (!UNK_0x437347B10A200C4B(Local_1318, 0) && !UNK_0xC844350D5D58C99A(bLocal_1329))
		{
			bLocal_1329 = UNK_0x7707E48765093646(bLocal_86, UNK_0x68F4C0EC296D3901(Local_1318, true), true, true, false);
			UNK_0x6662F466071F8128(bLocal_1329, 0.1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
			UNK_0x6E98E642DF854766(bLocal_1329, Local_1318, -1, -1, UNK_0x5293C88BD2F4DE13(Local_1318, UNK_0xBF584557291FDD31(Local_1318, 5)) + Vector(0f, 0f, 0.02f), 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 1, 2);
			UNK_0x4A4806F9D471E491(bLocal_1329, false, 0);
		}
		if (!UNK_0xC844350D5D58C99A(Local_1322[0 /*2*/]))
		{
			if (UNK_0x437347B10A200C4B(Local_1318, 0))
			{
				vVar0 = { UNK_0x68E4ADDDDCD7BDDE(Local_1318, UNK_0x79833B02DBD2A244(-2.5f, 2.5f), -5f, 0f) };
				UNK_0xE82754C349C7B581(vVar0, &(vVar0.f_2), 0, 0);
				Local_1322[0 /*2*/] = UNK_0x7707E48765093646(bLocal_85, vVar0, true, true, false);
			}
			else
			{
				Local_1322[0 /*2*/] = UNK_0x7707E48765093646(bLocal_85, UNK_0x68F4C0EC296D3901(Local_1318, true), true, true, false);
				UNK_0x6662F466071F8128(Local_1322[0 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				UNK_0x9F528B1B53FBC5D9(Local_1322[0 /*2*/], Local_1318, -1, -0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				UNK_0x120A395B0ECB8EA5(Local_1322[0 /*2*/], true);
			}
		}
		if (!UNK_0xC844350D5D58C99A(Local_1322[1 /*2*/]))
		{
			if (UNK_0x437347B10A200C4B(Local_1318, 0))
			{
				vVar0 = { UNK_0x68E4ADDDDCD7BDDE(Local_1318, UNK_0x79833B02DBD2A244(-2.5f, 2.5f), -5f, 0f) };
				UNK_0xE82754C349C7B581(vVar0, &(vVar0.f_2), 0, 0);
				Local_1322[1 /*2*/] = UNK_0x7707E48765093646(bLocal_85, vVar0, true, true, false);
			}
			else
			{
				Local_1322[1 /*2*/] = UNK_0x7707E48765093646(bLocal_85, UNK_0x68F4C0EC296D3901(Local_1318, true), true, true, false);
				UNK_0x6662F466071F8128(Local_1322[1 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				UNK_0x9F528B1B53FBC5D9(Local_1322[1 /*2*/], Local_1318, -1, 0f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				UNK_0x120A395B0ECB8EA5(Local_1322[1 /*2*/], true);
			}
		}
		if (!UNK_0xC844350D5D58C99A(Local_1322[2 /*2*/]))
		{
			if (UNK_0x437347B10A200C4B(Local_1318, 0))
			{
				vVar0 = { UNK_0x68E4ADDDDCD7BDDE(Local_1318, UNK_0x79833B02DBD2A244(-2.5f, 2.5f), -5f, 0f) };
				UNK_0xE82754C349C7B581(vVar0, &(vVar0.f_2), 0, 0);
				Local_1322[2 /*2*/] = UNK_0x7707E48765093646(bLocal_85, vVar0, true, true, false);
			}
			else
			{
				Local_1322[2 /*2*/] = UNK_0x7707E48765093646(bLocal_85, UNK_0x68F4C0EC296D3901(Local_1318, true), true, true, false);
				UNK_0x6662F466071F8128(Local_1322[2 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				UNK_0x9F528B1B53FBC5D9(Local_1322[2 /*2*/], Local_1318, -1, 0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				UNK_0x120A395B0ECB8EA5(Local_1322[2 /*2*/], true);
			}
		}
	}
}

int func_272(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (*uParam0 == -1)
	{
		return 0;
	}
	else if (*uParam0 == 1)
	{
		return 1;
	}
	else if (*uParam0 == 0 || ((*uParam0 == 2 && uParam0->f_1 == 1) && bParam2))
	{
		if (iParam1 > 0)
		{
			*uParam0 = 2;
			uParam0->f_6 = iParam1;
		}
		else
		{
			*uParam0 = 1;
			uParam0->f_6 = 0;
		}
		uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
		uParam0->f_5 = UNK_0x1C0640BA9A7327B3();
		uParam0->f_1 = iParam3;
		return 1;
	}
	return 0;
}

void func_273(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_274(bool bParam0, int iParam1)
{
	Global_98744.f_22[iParam1] = bParam0;
}

bool func_275(var uParam0)
{
	if (func_283(uParam0))
	{
		return true;
	}
	return false;
}

int func_276(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (UNK_0x7F8A39872A07D2CE(uParam0->f_374[iVar0 /*5*/].f_4, bParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		UNK_0x29398344B9E5B8A7(bParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = UNK_0x1C0640BA9A7327B3();
		uParam0->f_374[iVar1 /*5*/].f_4 = bParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_277(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == bParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		UNK_0x523BCC9DC80CD82F(bParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = UNK_0x1C0640BA9A7327B3();
		(uParam0[iVar1 /*5*/])->f_4 = bParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_278(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_151[iVar0 /*5*/])
		{
			uParam0->f_151[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			uParam0->f_202[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			uParam0->f_273[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			uParam0->f_374[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			uParam0->f_475[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			uParam0->f_656[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_687[iVar0 /*7*/])
		{
			uParam0->f_687[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			uParam0->f_737[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			uParam0->f_763[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_879[iVar0 /*5*/])
		{
			uParam0->f_879[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_930[iVar0 /*5*/])
		{
			uParam0->f_930[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_868)
	{
		uParam0->f_868.f_2 = 1;
	}
	if (uParam0->f_860)
	{
		uParam0->f_860.f_2 = 1;
	}
	if (uParam0->f_864)
	{
		uParam0->f_864.f_2 = 1;
	}
}

int func_279(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (func_280(vParam1) || fParam4 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_868)
	{
		if (func_126(uParam0->f_868.f_4, vParam1, 0) && uParam0->f_868.f_10 == fParam4)
		{
			uParam0->f_868.f_2 = 0;
			if (!uParam0->f_868.f_1)
			{
				uParam0->f_982 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	UNK_0x9E632F16E887F781(vParam1, fParam4, iParam5);
	uParam0->f_868 = 1;
	uParam0->f_868.f_3 = UNK_0x1C0640BA9A7327B3();
	uParam0->f_868.f_4 = { vParam1 };
	uParam0->f_868.f_7 = { 0f, 0f, 0f };
	uParam0->f_868.f_10 = fParam4;
	uParam0->f_982 = 1;
	return 1;
}

bool func_280(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_281(int iParam0, var uParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1256.936f, 556.8262f, 79.7001f };
			*bParam2 = 134.0936f;
			break;
		case 1:
			*uParam1 = { 692.2659f, -1004.185f, 21.9451f };
			*bParam2 = 3.5976f;
			break;
	}
}

bool func_282()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13);
}

bool func_283(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (uParam0->f_982)
	{
		bVar0 = true;
		bVar1 = false;
		while (bVar1 < 30)
		{
			if ((*uParam0)[bVar1 /*5*/])
			{
				if (!(uParam0[bVar1 /*5*/])->f_1)
				{
					if (UNK_0xB87F6CF6E5628C67((uParam0[bVar1 /*5*/])->f_4))
					{
						(uParam0[bVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[bVar1 /*5*/])->f_2)
				{
					if ((uParam0[bVar1 /*5*/])->f_1)
					{
						UNK_0x71199B01895C6202((uParam0[bVar1 /*5*/])->f_4);
						func_270(uParam0[bVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 20)
		{
			if (uParam0->f_273[bVar1 /*5*/])
			{
				if (!uParam0->f_273[bVar1 /*5*/].f_1)
				{
					if (UNK_0xB4AE0788C1587752(uParam0->f_273[bVar1 /*5*/].f_4))
					{
						uParam0->f_273[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_273[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_273[bVar1 /*5*/].f_1)
					{
						UNK_0x8D17794CE3273D70(uParam0->f_273[bVar1 /*5*/].f_4);
						func_270(&(uParam0->f_273[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 20)
		{
			if (uParam0->f_374[bVar1 /*5*/])
			{
				if (!uParam0->f_374[bVar1 /*5*/].f_1)
				{
					if (UNK_0x1C2E18E9C63BEB77(uParam0->f_374[bVar1 /*5*/].f_4))
					{
						uParam0->f_374[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_374[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_374[bVar1 /*5*/].f_1)
					{
						UNK_0x2F3540C2227116A3(uParam0->f_374[bVar1 /*5*/].f_4);
						func_270(&(uParam0->f_374[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 5)
		{
			if (uParam0->f_656[bVar1 /*6*/])
			{
				if (!uParam0->f_656[bVar1 /*6*/].f_1)
				{
					if (UNK_0x83D8570832F172A7(uParam0->f_656[bVar1 /*6*/].f_5))
					{
						uParam0->f_656[bVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_656[bVar1 /*6*/].f_2)
				{
					if (uParam0->f_656[bVar1 /*6*/].f_1)
					{
						UNK_0xE17FDF9E3068281B(&(uParam0->f_656[bVar1 /*6*/].f_5));
						func_270(&(uParam0->f_656[bVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 30)
		{
			if (uParam0->f_475[bVar1 /*6*/])
			{
				if (!uParam0->f_475[bVar1 /*6*/].f_1)
				{
					if (UNK_0x3DDA6C6A285628E4(uParam0->f_475[bVar1 /*6*/].f_5, uParam0->f_475[bVar1 /*6*/].f_4))
					{
						uParam0->f_475[bVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_475[bVar1 /*6*/].f_2)
				{
					if (uParam0->f_475[bVar1 /*6*/].f_1)
					{
						UNK_0xDB8844D4B7C60440(uParam0->f_475[bVar1 /*6*/].f_5, uParam0->f_475[bVar1 /*6*/].f_4);
						func_270(&(uParam0->f_475[bVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 10)
		{
			if (uParam0->f_202[bVar1 /*7*/])
			{
				if (!uParam0->f_202[bVar1 /*7*/].f_1)
				{
					if (UNK_0x1787731C4D1D6B19(uParam0->f_202[bVar1 /*7*/].f_4))
					{
						uParam0->f_202[bVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_202[bVar1 /*7*/].f_2)
				{
					if (uParam0->f_202[bVar1 /*7*/].f_1)
					{
						UNK_0x2914827AC2790D54(uParam0->f_202[bVar1 /*7*/].f_4);
						func_270(&(uParam0->f_202[bVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 10)
		{
			if (uParam0->f_151[bVar1 /*5*/])
			{
				if (!uParam0->f_151[bVar1 /*5*/].f_1)
				{
					if (UNK_0x1F04E7FA44219580(uParam0->f_151[bVar1 /*5*/].f_4))
					{
						uParam0->f_151[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_151[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_151[bVar1 /*5*/].f_1)
					{
						UNK_0x058E3033265DBA9A(uParam0->f_151[bVar1 /*5*/].f_4);
						func_270(&(uParam0->f_151[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 5)
		{
			if (uParam0->f_737[bVar1 /*5*/])
			{
				if (!uParam0->f_737[bVar1 /*5*/].f_1)
				{
					if (UNK_0xAE317D00A5A55DF6(uParam0->f_737[bVar1 /*5*/].f_4, 0, -1))
					{
						uParam0->f_737[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_737[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_737[bVar1 /*5*/].f_1)
					{
						UNK_0x42740B44BA8D7B43(uParam0->f_737[bVar1 /*5*/].f_4);
						func_270(&(uParam0->f_737[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 3)
		{
			if (uParam0->f_763[bVar1 /*5*/])
			{
				if (!uParam0->f_763[bVar1 /*5*/].f_1)
				{
					if (UNK_0xBD307E66C0669BFC(uParam0->f_763[bVar1 /*5*/].f_4))
					{
						uParam0->f_763[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_763[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_763[bVar1 /*5*/].f_1)
					{
						UNK_0x25BB71BA267FE042(uParam0->f_763[bVar1 /*5*/].f_4);
						func_270(&(uParam0->f_763[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 7)
		{
			if (!UNK_0xEA6BC48857E0AC4C(uParam0->f_687[bVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[bVar1 /*7*/])
				{
					iVar2 = UNK_0x60AFCA824DC1AD70(uParam0->f_687[bVar1 /*7*/].f_5);
					if (!uParam0->f_687[bVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_687[bVar1 /*7*/].f_1 = 1;
								break;
							case 0:
								uParam0->f_687[bVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							case 3:
								uParam0->f_687[bVar1 /*7*/].f_1 = 0;
								func_270(&(uParam0->f_687[bVar1 /*7*/]));
								break;
							case -1:
								uParam0->f_687[bVar1 /*7*/].f_1 = 0;
								UNK_0xBCE1F37016C0E41B(uParam0->f_687[bVar1 /*7*/].f_5);
								uParam0->f_687[bVar1 /*7*/] = 0;
								bVar0 = false;
								break;
						}
					}
				}
				else if (UNK_0xBD307E66C0669BFC(uParam0->f_687[bVar1 /*7*/].f_6))
				{
					uParam0->f_687[bVar1 /*7*/].f_5 = UNK_0x112DEE377BFBC278(uParam0->f_687[bVar1 /*7*/].f_4);
					uParam0->f_687[bVar1 /*7*/].f_3 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_687[bVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_687[bVar1 /*7*/].f_2)
				{
					if (uParam0->f_687[bVar1 /*7*/])
					{
						if (uParam0->f_687[bVar1 /*7*/].f_1)
						{
							UNK_0xBCE1F37016C0E41B(uParam0->f_687[bVar1 /*7*/].f_5);
							func_270(&(uParam0->f_687[bVar1 /*7*/]));
							uParam0->f_687[bVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_270(&(uParam0->f_687[bVar1 /*7*/]));
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 10)
		{
			if (uParam0->f_879[bVar1 /*5*/])
			{
				if (!uParam0->f_879[bVar1 /*5*/].f_1)
				{
					if (UNK_0xC76EFA929F5277B9(uParam0->f_879[bVar1 /*5*/].f_4))
					{
						uParam0->f_879[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_879[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_879[bVar1 /*5*/].f_1)
					{
						UNK_0x70EAF6AF279DEC61(uParam0->f_879[bVar1 /*5*/].f_4);
						func_270(&(uParam0->f_879[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 5)
		{
			if (uParam0->f_930[bVar1 /*5*/])
			{
				if (!uParam0->f_930[bVar1 /*5*/].f_1)
				{
					if (UNK_0x93776B156FD8804A(uParam0->f_930[bVar1 /*5*/].f_4))
					{
						uParam0->f_930[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_930[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_930[bVar1 /*5*/].f_1)
					{
						func_270(&(uParam0->f_930[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < uParam0->f_779)
		{
			if (uParam0->f_779[bVar1 /*5*/])
			{
				if (!uParam0->f_779[bVar1 /*5*/].f_1)
				{
					if (UNK_0x67C1D9E5B91B2E37(bVar1))
					{
						uParam0->f_779[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_779[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_779[bVar1 /*5*/].f_1)
					{
						UNK_0x11CCD0ACA866C6C5(bVar1, 1);
						func_270(&(uParam0->f_779[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		if (uParam0->f_860)
		{
			if (!uParam0->f_860.f_1)
			{
				if (UNK_0x25F7A4D42AF2AB93())
				{
					uParam0->f_860.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_860.f_2)
			{
				if (uParam0->f_860.f_1)
				{
					UNK_0x29D7581AEF4440C2();
					func_270(&(uParam0->f_860));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_864)
		{
			if (!uParam0->f_864.f_1)
			{
				if (UNK_0xEE4B5EDF70ABF498())
				{
					uParam0->f_864.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_864.f_2)
			{
				if (uParam0->f_864.f_1)
				{
					UNK_0xFE5EFE178CCBA358();
					func_270(&(uParam0->f_864));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_868 && UNK_0xEB880D98B5988D0C())
		{
			if (!uParam0->f_868.f_1)
			{
				if (UNK_0x68367101660E33F0())
				{
					uParam0->f_868.f_1 = 1;
					if (uParam0->f_983)
					{
						UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
						func_284(uParam0);
						uParam0->f_983 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_868.f_2)
			{
				UNK_0x486B4ADE317F0689();
				func_270(&(uParam0->f_868));
			}
		}
		bVar1 = false;
		while (bVar1 < 5)
		{
			if (uParam0->f_956[bVar1 /*5*/])
			{
				if (!uParam0->f_956[bVar1 /*5*/].f_1)
				{
					if (UNK_0x27117E2CDD4D67C3(uParam0->f_956[bVar1 /*5*/].f_4))
					{
						uParam0->f_956[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_956[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_956[bVar1 /*5*/].f_1)
					{
						func_270(&(uParam0->f_956[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		if (bVar0)
		{
			uParam0->f_982 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_284(var uParam0)
{
	if (UNK_0xEB880D98B5988D0C())
	{
		UNK_0x486B4ADE317F0689();
		func_270(&(uParam0->f_868));
	}
}

void func_285()
{
	if (bLocal_98 && (func_286() || UNK_0x757EF87A33649210()))
	{
		func_8(1);
		UNK_0x10FAF14A60A0DBE1();
	}
}

bool func_286()
{
	if (Global_3)
	{
		return true;
	}
	if (Global_98744 == 7 || Global_98744 == 8)
	{
		return true;
	}
	return false;
}

void func_287()
{
	vector3 vVar0;
	var uVar3;

	func_294();
	UNK_0xF63400DBE3303D26("SECDRIVER", &bLocal_1305);
	UNK_0x0E2400AB9174FA81(1, bLocal_1305, joaat("COP"));
	UNK_0x0E2400AB9174FA81(1, bLocal_1305, joaat("SECURITY_GUARD"));
	UNK_0x0E2400AB9174FA81(1, joaat("COP"), bLocal_1305);
	if (func_6(0) || func_210())
	{
		iLocal_97 = 0;
		if (func_210())
		{
			if (Global_92921)
			{
				iLocal_97++;
			}
		}
		StringCopy(&Global_95606, "jhp2a_alt", 64);
		if (func_210())
		{
			func_281(iLocal_97, &vVar0, &uVar3);
			func_293(vVar0, uVar3, 1, 0);
		}
		bLocal_96 = true;
	}
	else
	{
		while (!func_268(1))
		{
			SYSTEM::WAIT(0);
			func_292(&uLocal_99);
		}
	}
	func_291(&uLocal_99, "JHP2A", 0);
	UNK_0x51B096AAC60548C1(0.1f);
	UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
	func_289(88);
	func_273(&uLocal_1126, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	func_273(&uLocal_1126, 3, 0, "Lester", 0, 1);
	UNK_0xAB8E2DDC7AF955E0(joaat("BOXVILLE3"), true);
	UNK_0xC05DBA7D4F88D5E5(joaat("S_M_M_ARMOURED_01"), true);
	if (UNK_0x440C646F2F11A2A1(UNK_0x16F2683693E537C9(), joaat("WEAPON_BRIEFCASE"), 0))
	{
		UNK_0x650567883F5E3136(UNK_0x16F2683693E537C9(), joaat("WEAPON_BRIEFCASE"));
	}
	func_288();
	if (UNK_0xEA6BC48857E0AC4C(&Global_95606))
	{
	}
	iLocal_1330 = UNK_0x7D6CA5F52B3748BF(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	while (!UNK_0x67C1D9E5B91B2E37(false))
	{
		SYSTEM::WAIT(0);
	}
	Global_73935 = 1;
}

void func_288()
{
	Global_92922 = 1;
}

void func_289(int iParam0)
{
	Global_94599 = 0;
	switch (iParam0)
	{
		case 72:
			func_290(2);
			func_290(4);
			break;
		case 73:
			func_290(0);
			func_290(1);
			func_290(7);
			break;
		case 92:
			func_290(10);
			func_290(9);
			func_290(13);
			func_290(6);
			break;
		case 68:
			func_290(11);
			break;
		case 78:
			func_290(14);
			break;
		case 79:
			func_290(3);
			break;
		default:
			break;
	}
}

void func_290(bool bParam0)
{
	UNK_0x5D96D8530B3D0904(&Global_94599, bParam0);
}

int func_291(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_779[bParam2 /*5*/].f_1 || uParam0->f_779[bParam2 /*5*/])
	{
		if (UNK_0x7F8A39872A07D2CE(uParam0->f_779[bParam2 /*5*/].f_4, bParam1))
		{
			uParam0->f_779[bParam2 /*5*/].f_2 = 0;
			uParam0->f_982 = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (bParam2 >= 11)
		{
			UNK_0x23249A21DED9ADF1(bParam1, bParam2);
		}
		else
		{
			UNK_0xD7992BEF7A9D109E(bParam1, bParam2);
		}
		uParam0->f_779[bParam2 /*5*/] = 1;
		uParam0->f_779[bParam2 /*5*/].f_3 = UNK_0x1C0640BA9A7327B3();
		uParam0->f_779[bParam2 /*5*/].f_4 = bParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_292(var uParam0)
{
	func_283(uParam0);
}

void func_293(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_210())
	{
		UNK_0x256D93AFAE851A7A(0);
		UNK_0x0674E58A79778E99(&(Global_98744.f_20), 2);
		UNK_0x21387C9EECC2B220(true);
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
		}
		Global_98740 = { vParam0 };
		Global_98743 = iParam3;
		Global_98739 = 1;
		if (iParam4 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 14);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Global_98744.f_20), 14);
		}
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 24);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Global_98744.f_20), 24);
		}
		func_209(1);
	}
}

void func_294()
{
	func_302(&(Local_1084[0 /*8*/]), 81780, "Van Driver Manager");
	func_302(&(Local_1084[1 /*8*/]), 80427, "Cargo Manager");
}

void func_295(var uParam0)
{
	if (!func_135(uParam0))
	{
		if (UNK_0x437347B10A200C4B(Local_1318, 0))
		{
			func_300(Local_1322[0 /*2*/], 1);
			func_300(Local_1322[1 /*2*/], 1);
			func_300(Local_1322[2 /*2*/], 1);
			bLocal_1346 = true;
			func_299(uParam0);
		}
		else
		{
			switch (uParam0->f_1)
			{
				case 1:
					func_298(&uLocal_99, "JWL_HEIST_PREP_2A_SHOOTING_LOCK");
					if (UNK_0xAE317D00A5A55DF6("JWL_HEIST_PREP_2A_SHOOTING_LOCK", 0, -1))
					{
						if ((UNK_0x1C0640BA9A7327B3() - iLocal_1336) > 150)
						{
							if (UNK_0xB87D13D0C064E9D1(bLocal_1329, UNK_0x16F2683693E537C9(), 0))
							{
								if ((((UNK_0x54648B774DB42A3A(bLocal_1329, joaat("WEAPON_MOLOTOV"), 0) || UNK_0x54648B774DB42A3A(bLocal_1329, joaat("WEAPON_BZGAS"), 0)) || UNK_0x54648B774DB42A3A(bLocal_1329, joaat("WEAPON_KNIFE"), 0)) || UNK_0x54648B774DB42A3A(bLocal_1329, joaat("WEAPON_UNARMED"), 0)) || UNK_0x54648B774DB42A3A(bLocal_1329, joaat("WEAPON_HIT_BY_WATER_CANNON"), 0))
								{
									UNK_0x432CE6C256EE1D4A(bLocal_1329);
								}
								else
								{
									UNK_0xE910A68AA670B4AA(bLocal_1329);
									iLocal_1336 = UNK_0x1C0640BA9A7327B3();
									iLocal_1335++;
									if (iLocal_1335 >= 3)
									{
										UNK_0xCEAA091B490F8407(-1, "Lock_Destroyed", bLocal_1329, "JWL_PREP_2A_SOUNDS", 0, 0);
									}
									else
									{
										UNK_0xCEAA091B490F8407(-1, "Lock_Damage", bLocal_1329, "JWL_PREP_2A_SOUNDS", 0, 0);
									}
								}
							}
						}
						else
						{
							UNK_0xE910A68AA670B4AA(bLocal_1329);
						}
					}
					if (((((iLocal_1335 >= 3 || UNK_0x437347B10A200C4B(bLocal_1329, 0)) || UNK_0x1150BCE24B1630AC(Local_1318, 2)) || UNK_0x1150BCE24B1630AC(Local_1318, 3)) || UNK_0xF409BCB95E61D4DB(Local_1318, 2) > 0f) || UNK_0xF409BCB95E61D4DB(Local_1318, 3) > 0f)
					{
						if (UNK_0xC844350D5D58C99A(bLocal_1329))
						{
							UNK_0xF690C84DADBB3551(&bLocal_1329);
						}
						if (!UNK_0x1150BCE24B1630AC(Local_1318, 2))
						{
							UNK_0x611DFA9294B339CA(Local_1318, 2, 0, false);
						}
						if (!UNK_0x1150BCE24B1630AC(Local_1318, 3))
						{
							UNK_0x611DFA9294B339CA(Local_1318, 3, 0, false);
						}
						iLocal_1347 = 0;
						iLocal_1348 = 0;
						func_300(Local_1322[0 /*2*/], 0);
						func_300(Local_1322[1 /*2*/], 0);
						func_300(Local_1322[2 /*2*/], 0);
						func_297(uParam0, 2, 0);
					}
					break;
				case 2:
					if (func_296(Local_1318))
					{
						if (UNK_0x755FF954DAE327E1(UNK_0xF409BCB95E61D4DB(Local_1318, 2)) > 0.5f && UNK_0x755FF954DAE327E1(UNK_0xF409BCB95E61D4DB(Local_1318, 3)) > 0.5f)
						{
							func_297(uParam0, 3, 0);
						}
					}
					break;
				case 3:
					if (func_296(Local_1318))
					{
						if (!UNK_0x1150BCE24B1630AC(Local_1318, 2))
						{
							if (UNK_0x10DBDDD2B1034ACE(Local_1318, 2))
							{
								UNK_0x611DFA9294B339CA(Local_1318, 2, 1, false);
								UNK_0x2EA10555AEBEA739(Local_1318, 2, 0, 0, 1);
								iLocal_1347 = 1;
							}
						}
						else
						{
							iLocal_1347 = 1;
						}
						if (!UNK_0x1150BCE24B1630AC(Local_1318, 3))
						{
							if (UNK_0x10DBDDD2B1034ACE(Local_1318, 3))
							{
								UNK_0x611DFA9294B339CA(Local_1318, 3, 1, false);
								UNK_0x2EA10555AEBEA739(Local_1318, 3, 0, 0, 1);
								iLocal_1348 = 1;
							}
						}
						else
						{
							iLocal_1348 = 1;
						}
						if (iLocal_1347 && iLocal_1348)
						{
							bLocal_1346 = true;
							func_297(uParam0, 4, 0);
						}
					}
					break;
			}
		}
	}
	if (func_135(uParam0))
	{
	}
}

bool func_296(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_297(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = UNK_0x1C0640BA9A7327B3();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_298(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (UNK_0x7F8A39872A07D2CE(uParam0->f_737[iVar0 /*5*/].f_4, bParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		UNK_0xAE317D00A5A55DF6(bParam1, 0, -1);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = UNK_0x1C0640BA9A7327B3();
		uParam0->f_737[iVar1 /*5*/].f_4 = bParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_299(var uParam0)
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_300(bool bParam0, bool bParam1)
{
	vector3 vVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xD59B17D2DFF98E26(bParam0))
		{
			UNK_0x15AFB6CBDE990FB6(bParam0, 1, bParam1);
			UNK_0x20641932E5104B25(bParam0, true, 0);
			UNK_0xAC0C6241732E36F6(bParam0);
		}
		if (bParam1)
		{
			vVar0 = { func_301(UNK_0x68F4C0EC296D3901(bParam0, true) - UNK_0x68E4ADDDDCD7BDDE(Local_1318, UNK_0x79833B02DBD2A244(-0.15f, 0.15f), IntToFloat(-UNK_0x09AC81E49EA267F7(3, 6)), UNK_0x79833B02DBD2A244(-0.1f, 0.1f))) };
			UNK_0xEF3C30F70D2ED135(bParam0, 1, vVar0 * FtoV(UNK_0x79833B02DBD2A244(0.25f, 0.5f)), 0, 1, 1, 0);
			UNK_0xEF3C30F70D2ED135(bParam0, 5, IntToFloat(UNK_0x09AC81E49EA267F7(false, 10)), IntToFloat(UNK_0x09AC81E49EA267F7(false, 10)), IntToFloat(UNK_0x09AC81E49EA267F7(false, 10)), 0, 1, 1, 0);
			UNK_0xB0703A3FDD659128(bParam0, Local_1318, 1);
		}
	}
}

Vector3 func_301(vector3 vParam0)
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

int func_302(var uParam0, int iParam1, char* sParam2)
{
	if (*uParam0 != -1)
	{
		return 0;
	}
	*uParam0 = 0;
	uParam0->f_3 = sParam2;
	uParam0->f_7 = iParam1;
	return 1;
}

void func_303(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	float fVar8;

	if (!func_135(uParam0))
	{
		if (((!UNK_0xC844350D5D58C99A(vLocal_1306.x) || UNK_0xEB6A8945D1AC98A1(vLocal_1306.x)) || (UNK_0xC844350D5D58C99A(Local_1318) && func_202(Local_1318, vLocal_1306.x, 1) > 200f)) || (!UNK_0x405E212DDE472467(vLocal_1306.x, 0) && func_202(Local_1318, vLocal_1306.x, 1) > 200f))
		{
			if (UNK_0xC844350D5D58C99A(Local_1318) && UNK_0xDF1306B443CD3D15(Local_1318, 0))
			{
				UNK_0xF3F7BF451A720FDF(Local_1318, 0);
			}
			UNK_0x6DAD7906B73F064D(&vLocal_1306);
			func_299(uParam0);
		}
		else
		{
			if ((uParam0->f_1 != 5 && uParam0->f_1 != 3) && ((!UNK_0xC844350D5D58C99A(Local_1318) || !UNK_0xDF1306B443CD3D15(Local_1318, 0)) || !UNK_0xC42A92762C58E1B9(vLocal_1306.x, Local_1318, 0)))
			{
				iLocal_1337 = 0;
				iLocal_1338 = 0;
				StringCopy(&cLocal_1339, "", 24);
				func_297(uParam0, 5, 0);
			}
			else if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 4)
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
					if (UNK_0x1B3D109B39CC2C89(bVar0, Local_1318))
					{
						if ((!bLocal_1332 && (UNK_0x1C0640BA9A7327B3() - iLocal_1334) > 500) && fLocal_1333 >= 4f)
						{
							bLocal_1332 = true;
							iLocal_1331++;
						}
					}
					else if (bLocal_1332)
					{
						iLocal_1334 = UNK_0x1C0640BA9A7327B3();
						bLocal_1332 = false;
					}
					vVar1 = { func_301(UNK_0x68F4C0EC296D3901(bVar0, true) - UNK_0x68F4C0EC296D3901(Local_1318, true)) };
					vVar4 = { UNK_0x56E9E0FD5ACCD35D(Local_1318) - UNK_0x56E9E0FD5ACCD35D(bVar0) };
					fLocal_1333 = func_307(vVar4, vVar1);
				}
			}
			switch (uParam0->f_1)
			{
				case 1:
					if ((((((((((((((((((UNK_0xB87D13D0C064E9D1(Local_1318, UNK_0x16F2683693E537C9(), 1) || UNK_0xB87D13D0C064E9D1(vLocal_1306.x, UNK_0x16F2683693E537C9(), 1)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 124)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 125)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 126)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 29)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 118)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 123)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 22)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 24)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 47)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 62)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 62)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 138)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 88)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 89)) || UNK_0x36646919F20EAFFC(vLocal_1306.x)) || UNK_0x4E861BC5B1EDA7BD(Local_1318)) || iLocal_1331 > 0)
					{
						iLocal_1337 = 0;
						iLocal_1338 = 0;
						StringCopy(&cLocal_1339, "", 24);
						func_297(uParam0, 4, 0);
					}
					else
					{
						if (UNK_0xC844350D5D58C99A(Local_1318) && UNK_0xDF1306B443CD3D15(Local_1318, 0))
						{
							if ((UNK_0xC57D0A75AFA332A3(UNK_0x16F2683693E537C9()) || fLocal_1333 > 0.5f) && UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), UNK_0x68E4ADDDDCD7BDDE(Local_1318, 0f, 2f, -0.5f), UNK_0x68E4ADDDDCD7BDDE(Local_1318, 0f, 10f, 2f), 4.5f, 0, true, 0))
							{
								if (!UNK_0xCC57C42BB3967DA6(Local_1318))
								{
									if (iLocal_1350 == -1)
									{
										iLocal_1350 = UNK_0x1C0640BA9A7327B3();
									}
									else if ((UNK_0x1C0640BA9A7327B3() - iLocal_1350) > 5000)
									{
										UNK_0x67B9E919FADF78E0(Local_1318, 2000, joaat("NORMAL"), 0);
									}
								}
								else
								{
									iLocal_1350 = -1;
								}
							}
						}
						if (func_306(Local_1318, -993.7236f, -2418.757f, 12.9447f, 1) < 20f)
						{
							func_276(&uLocal_99, "jhp2a_airport");
						}
						if (!func_305(vLocal_1306.x, -235832601, 1))
						{
							if (UNK_0x3D1053F9EB43B7AD(Local_1318, -990.6312f, -2413.214f, 12.69471f, -996.0194f, -2422.608f, 16.05846f, 8.75f, 0, true, 0))
							{
								if (UNK_0x1C2E18E9C63BEB77("jhp2a_airport"))
								{
									iLocal_1337 = 0;
									iLocal_1338 = 0;
									StringCopy(&cLocal_1339, "", 24);
									func_297(uParam0, 2, 0);
								}
							}
							else
							{
								UNK_0x1B901F542DF070CF(vLocal_1306.x, Local_1318, &Global_95606, 786475, -1, 24, -1, 12f, 0, 1073741824 /* Float: 2f */);
							}
						}
					}
					break;
				case 2:
					if ((((((((((((((((((UNK_0xB87D13D0C064E9D1(Local_1318, UNK_0x16F2683693E537C9(), 1) || UNK_0xB87D13D0C064E9D1(vLocal_1306.x, UNK_0x16F2683693E537C9(), 1)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 124)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 125)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 126)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 29)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 118)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 123)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 22)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 24)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 47)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 62)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 62)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 138)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 88)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 89)) || UNK_0x36646919F20EAFFC(vLocal_1306.x)) || UNK_0x4E861BC5B1EDA7BD(Local_1318)) || iLocal_1331 > 0)
					{
						iLocal_1337 = 0;
						iLocal_1338 = 0;
						StringCopy(&cLocal_1339, "", 24);
						func_297(uParam0, 5, 0);
					}
					else if (!func_305(vLocal_1306.x, -235832601, 1))
					{
						if (UNK_0x3D1053F9EB43B7AD(Local_1318, -1096.139f, -2467.117f, 12.69561f, -1101.641f, -2476.775f, 15.6304f, 7.8125f, 0, true, 0))
						{
							iLocal_1337 = 0;
							iLocal_1338 = 0;
							StringCopy(&cLocal_1339, "", 24);
							func_297(uParam0, 3, 0);
						}
						else
						{
							UNK_0x1B901F542DF070CF(vLocal_1306.x, Local_1318, "jhp2a_airport", 786475, -1, 24, -1, 12f, 0, 1073741824 /* Float: 2f */);
						}
					}
					break;
				case 3:
					if (((((((((((((((((((UNK_0xB87D13D0C064E9D1(Local_1318, UNK_0x16F2683693E537C9(), 1) || UNK_0xB87D13D0C064E9D1(vLocal_1306.x, UNK_0x16F2683693E537C9(), 1)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 124)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 125)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 126)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 29)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 118)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 123)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 22)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 24)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 47)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 62)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 62)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 138)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 88)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 89)) || UNK_0x36646919F20EAFFC(vLocal_1306.x)) || UNK_0x4E861BC5B1EDA7BD(Local_1318)) || UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_1318, 1)) || iLocal_1331 > 0)
					{
						iLocal_1337 = 0;
						iLocal_1338 = 0;
						StringCopy(&cLocal_1339, "", 24);
						func_297(uParam0, 5, 0);
					}
					else if (UNK_0xC42A92762C58E1B9(vLocal_1306.x, Local_1318, 1))
					{
						if (!func_305(vLocal_1306.x, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 1))
						{
							UNK_0x45F014B3D0466974(vLocal_1306.x, Local_1318, 0);
						}
					}
					else
					{
						UNK_0x71EDC33E5A423750(Local_1318, 2);
						if (!func_305(vLocal_1306.x, 242628503, 1))
						{
							UNK_0xDD353D0E9C789D0E(&iLocal_1304);
							UNK_0x96167B03C5A77156(false, -1093.486f, -2471.669f, 13.0716f, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
							UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_SMOKING", -1, 1);
							UNK_0x75ABDC5F81978924(iLocal_1304);
							UNK_0x78ADC381772E3D54(vLocal_1306.x, iLocal_1304);
							UNK_0xF82EA857DA10E0CD(&iLocal_1304);
						}
					}
					break;
				case 4:
					if (UNK_0x464B3D84B739AE72(Local_1318, false, 1))
					{
						iVar7++;
					}
					if (UNK_0x464B3D84B739AE72(Local_1318, true, 1))
					{
						iVar7++;
					}
					if (UNK_0x464B3D84B739AE72(Local_1318, 4, 1))
					{
						iVar7++;
					}
					if (UNK_0x464B3D84B739AE72(Local_1318, 5, 1))
					{
						iVar7++;
					}
					if (((((IntToFloat(UNK_0x7F6DC62EA9922664(Local_1318)) <= 0f || UNK_0x6EE94F60DA2A2273(Local_1318) <= 250f) || UNK_0xD96C5EC6FCB061BA(Local_1318) <= 400f) || UNK_0xEB6A8945D1AC98A1(vLocal_1306.x)) || iVar7 >= 2) || iLocal_1331 > 6)
					{
						if (UNK_0xC844350D5D58C99A(Local_1318) && UNK_0xDF1306B443CD3D15(Local_1318, 0))
						{
							UNK_0xF3F7BF451A720FDF(Local_1318, 0);
						}
						iLocal_1337 = 0;
						iLocal_1338 = 0;
						StringCopy(&cLocal_1339, "", 24);
						func_297(uParam0, 5, 0);
					}
					else if (!func_305(vLocal_1306.x, -1273030092, 1))
					{
						UNK_0x89258193691A7600(vLocal_1306.x, Local_1318, UNK_0x16F2683693E537C9(), 8, 90f, 786468, 400f, 10f, 0);
					}
					break;
				case 5:
					if (UNK_0xC844350D5D58C99A(Local_1318) && !UNK_0x437347B10A200C4B(Local_1318, 0))
					{
						if (UNK_0xC42A92762C58E1B9(vLocal_1306.x, Local_1318, 0))
						{
							if (!func_87(Local_1318))
							{
								if (!func_305(vLocal_1306.x, -2118855366, 1))
								{
									UNK_0xA3BF0AA5A2608191(vLocal_1306.x);
									UNK_0xD1F0F33C375B8446(vLocal_1306.x, Local_1318, 5, -1);
								}
							}
							else if (!func_305(vLocal_1306.x, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 1))
							{
								UNK_0x45F014B3D0466974(vLocal_1306.x, Local_1318, 256);
							}
						}
						else if (!func_305(vLocal_1306.x, 780511057, 1))
						{
							UNK_0x25C5402CC10F76CD(vLocal_1306.x, true);
							UNK_0x6C3AE6E278DB3D0E(vLocal_1306.x, UNK_0x16F2683693E537C9(), 0, 16);
						}
					}
					if (UNK_0xC844350D5D58C99A(Local_1318) && !UNK_0x437347B10A200C4B(Local_1318, 0))
					{
						UNK_0x2E81FA494A883541(Local_1318, 2, 1);
						UNK_0x2E81FA494A883541(Local_1318, 3, 1);
					}
					break;
			}
		}
		if ((UNK_0xC844350D5D58C99A(vLocal_1306.x) && !UNK_0xEB6A8945D1AC98A1(vLocal_1306.x)) && !UNK_0x2C5F61A6EA7B6E03(vLocal_1306.x))
		{
			switch (uParam0->f_1)
			{
				case 4:
					switch (iLocal_1337)
					{
						case 0:
							if (func_42() && !UNK_0x65636D4556D82155(vLocal_1306.x))
							{
								if (UNK_0x36646919F20EAFFC(vLocal_1306.x))
								{
									func_62(vLocal_1306.x, "JACKED_GENERIC", 10);
								}
								else
								{
									func_62(vLocal_1306.x, "GENERIC_SHOCKED_HIGH", 10);
								}
								iLocal_1337++;
							}
							break;
						case 1:
							if (!UNK_0xC42A92762C58E1B9(vLocal_1306.x, Local_1318, 0) || iLocal_1303 == 3)
							{
								if (!UNK_0xC42A92762C58E1B9(vLocal_1306.x, Local_1318, 0))
								{
									iLocal_1337 = 4;
								}
								else
								{
									iLocal_1337++;
								}
							}
							else if (func_42() && !UNK_0x65636D4556D82155(vLocal_1306.x))
							{
								if (func_304(&uLocal_1126, &cLocal_79, "JS_INIT_M", 8, 0, 0, 0))
								{
									iLocal_1337++;
								}
							}
							break;
						case 2:
							if (func_42() && !UNK_0x65636D4556D82155(vLocal_1306.x))
							{
								if (UNK_0xEA6BC48857E0AC4C(&cLocal_1339))
								{
									fVar8 = SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(vLocal_1306.x, true));
									if ((((((bLocal_1332 || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 124)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 125)) || UNK_0xFA4CE147B4D9AEE0(vLocal_1306.x, 126)) || fVar8 < 49f) && (UNK_0x1C0640BA9A7327B3() - iLocal_1338) > 5000) && fVar8 < 225f)
									{
										if (UNK_0x09AC81E49EA267F7(false, 2) == 0)
										{
											StringCopy(&cLocal_1339, "GENERIC_CURSE_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1339, "JS_ATT_M", 24);
										}
									}
								}
								if (!UNK_0xEA6BC48857E0AC4C(&cLocal_1339))
								{
									if (UNK_0x7F8A39872A07D2CE(&cLocal_1339, "GENERIC_CURSE_HIGH"))
									{
										func_62(vLocal_1306.x, "GENERIC_CURSE_HIGH", 10);
										iLocal_1337++;
									}
									else
									{
										if (func_304(&uLocal_1126, &cLocal_79, &cLocal_1339, 8, 0, 0, 0))
										{
											iLocal_1337++;
										}
										iLocal_1337++;
									}
								}
							}
							break;
						case 3:
							if (!func_43() && !UNK_0x65636D4556D82155(vLocal_1306.x))
							{
								iLocal_1338 = UNK_0x1C0640BA9A7327B3();
								StringCopy(&cLocal_1339, "", 24);
								iLocal_1337 = (iLocal_1337 - 1);
							}
							break;
					}
					break;
				case 5:
					switch (iLocal_1337)
					{
						case 0:
							if (func_42() && !UNK_0x65636D4556D82155(vLocal_1306.x))
							{
								if (UNK_0xEA6BC48857E0AC4C(&cLocal_1339))
								{
									if ((UNK_0x1C0640BA9A7327B3() - iLocal_1338) > 5000 && SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(vLocal_1306.x, true)) < 400f)
									{
										if (UNK_0x09AC81E49EA267F7(false, 2) == 0)
										{
											StringCopy(&cLocal_1339, "GENERIC_INSULT_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1339, "JS_COMB_M", 24);
										}
									}
								}
								if (!UNK_0xEA6BC48857E0AC4C(&cLocal_1339))
								{
									if (UNK_0x7F8A39872A07D2CE(&cLocal_1339, "GENERIC_INSULT_HIGH"))
									{
										func_62(vLocal_1306.x, "GENERIC_INSULT_HIGH", 10);
										iLocal_1337++;
									}
									else if (func_304(&uLocal_1126, &cLocal_79, &cLocal_1339, 8, 0, 0, 0))
									{
										iLocal_1337++;
									}
								}
							}
							break;
						case 1:
							if (!func_43() && !UNK_0x65636D4556D82155(vLocal_1306.x))
							{
								iLocal_1338 = UNK_0x1C0640BA9A7327B3();
								StringCopy(&cLocal_1339, "", 24);
								iLocal_1337 = (iLocal_1337 - 1);
							}
							break;
					}
					break;
			}
		}
	}
	if (func_135(uParam0))
	{
	}
}

bool func_304(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_41(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_27(sParam2, iParam3, 0);
}

bool func_305(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xD1960163A3042274(bParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return true;
		}
	}
	return false;
}

float func_306(bool bParam0, vector3 vParam1, int iParam4)
{
	vector3 vVar0;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	return UNK_0x0EB28750412C3A5A(vVar0, vParam1, iParam4);
}

float func_307(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_308(int iParam0)
{
	char cVar0[16];
	char[] cVar4[8];

	UNK_0xC92DB9682A650680("JHP2A_FAIL");
	if (iParam0 == 5)
	{
		func_320();
		func_8(0);
		UNK_0x10FAF14A60A0DBE1();
	}
	else if (!bLocal_98)
	{
		switch (iParam0)
		{
			case 1:
				StringCopy(&cVar0, "JHP2A_FGOTAWAY", 16);
				break;
			case 2:
				StringCopy(&cVar0, "JHP2A_FGOTAWAY2", 16);
				break;
			case 4:
				StringCopy(&cVar0, "JHP2A_FCARGO", 16);
				break;
			case 3:
				StringCopy(&cVar0, "JHP2A_FCARGO2", 16);
				break;
			case 0:
			default:
				StringCopy(&cVar0, "JHP2A_FF", 16);
				break;
		}
		if (UNK_0xEA6BC48857E0AC4C(&cVar4))
		{
			func_318(&cVar0);
		}
		else
		{
			func_309(&cVar0, &cVar4);
		}
		bLocal_98 = true;
	}
}

void func_309(char* sParam0, char* sParam1)
{
	func_317(sParam0, sParam1);
	func_310(0);
}

void func_310(int iParam0)
{
	int iVar0;

	if (Global_111638.f_9080 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_311(iVar0))
		{
			return;
		}
		UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 5);
		Global_98780 = iParam0;
	}
}

bool func_311(int iParam0)
{
	int iVar0;
	int iVar1;

	func_316();
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x2DA3D7F5B74119E5(5000);
	}
	iVar0 = Global_89496[iParam0 /*5*/];
	iVar1 = Global_76891.f_109[iVar0 /*4*/];
	func_315(iVar1, 1);
	UNK_0xAE08886CF478C471(UNK_0xD803B885F5E47A62(), 0);
	UNK_0x0D00405AED37B7C4(UNK_0xD803B885F5E47A62(), 0);
	func_312(&(Global_111638.f_2358.f_539), iVar1);
	if (Global_92919 == Global_98781)
	{
		Global_111638.f_9080.f_330[iVar1 /*6*/].f_1++;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_89532[iVar1 /*34*/].f_15, true))
	{
		if (!UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x67E5ECB8FD7F5018(0);
		}
	}
	Global_111638.f_9080.f_330[iVar1 /*6*/].f_2++;
	Global_92919 = Global_98781;
	if (iParam0 == -1)
	{
		if (Global_111638.f_9080)
		{
		}
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iParam0 /*5*/].f_1, 4))
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iParam0 /*5*/].f_1, 5))
	{
		return false;
	}
	return true;
}

void func_312(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_111638.f_18528[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_314(Global_111638.f_18528[iVar0], &vVar2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_313(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_96134[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_9 = 0f;
				Global_96134[iVar0 /*29*/].f_12 = 0f;
				Global_96134[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_10 = 0f;
				Global_96134[iVar0 /*29*/].f_13 = 0f;
				Global_96134[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_11 = 0f;
				Global_96134[iVar0 /*29*/].f_14 = 0f;
				Global_96134[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_26 = 0f;
				Global_96134[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_27 = 0f;
				Global_96134[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_313(var uParam0)
{
	*uParam0 = -15;
}

bool func_314(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return true;
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return true;
		case 9:
			return func_314(8, uParam1, fParam2);
		case 10:
			return func_314(8, uParam1, fParam2);
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return true;
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return true;
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return true;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return true;
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return true;
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return true;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return true;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return true;
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return true;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return true;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return true;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return true;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return true;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return true;
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return true;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return true;
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return true;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return true;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return true;
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return true;
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return true;
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return true;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return true;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return true;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return true;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return true;
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return true;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return true;
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return true;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return true;
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return true;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return true;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return true;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return true;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return true;
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return true;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return true;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return true;
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return true;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return true;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return true;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return true;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return true;
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return true;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return true;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return true;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		default:
			break;
	}
	return false;
}

void func_315(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92729[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_92729[iParam0 /*2*/] = 0;
	}
}

void func_316()
{
	Global_98779 = 1;
	if (UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1))
	{
		if (UNK_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_191())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MARRE", 16);
					break;
				case 1:
					StringCopy(&Global_76854, "CMN_FARRE", 16);
					break;
				case 2:
					StringCopy(&Global_76854, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
	}
	else if (!UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_191())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MDIED", 16);
					break;
				case 1:
					StringCopy(&Global_76854, "CMN_FDIED", 16);
					break;
				case 2:
					StringCopy(&Global_76854, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
		UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 25);
	}
}

void func_317(char* sParam0, char* sParam1)
{
	if (!UNK_0xEA6BC48857E0AC4C(sParam0))
	{
		if (UNK_0x4880526EC51D1C27(sParam0) <= 16)
		{
			if (UNK_0x4880526EC51D1C27(sParam1) <= 16)
			{
				StringCopy(&Global_76854, sParam0, 16);
				StringCopy(&Global_76858, sParam1, 16);
			}
		}
	}
}

void func_318(char* sParam0)
{
	func_319(sParam0);
	func_310(0);
}

void func_319(char* sParam0)
{
	if (!UNK_0xEA6BC48857E0AC4C(sParam0))
	{
		if (UNK_0x4880526EC51D1C27(sParam0) <= 16)
		{
			StringCopy(&Global_76854, sParam0, 16);
			StringCopy(&Global_76858, "", 16);
			if (UNK_0x192DA571D9133D23())
			{
				UNK_0x32BB9995E509E19B();
			}
		}
	}
}

void func_320()
{
	int iVar0;

	if (UNK_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_111638.f_9080 || func_6(0))
	{
		if (!func_321())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_311(iVar0))
				{
					return;
				}
				UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_316();
		}
	}
}

bool func_321()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return false;
	}
	return true;
}

