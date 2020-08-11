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
	vector3 vLocal_45 = { 0f, 0f, 0f };
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	struct<39> Local_57 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_96 = 0;
	var uLocal_97 = 16;
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
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	float fLocal_270 = 0f;
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
	var uLocal_281 = 21;
	var uLocal_282 = 6;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 1132396544;
	var uLocal_289 = 1132396544;
	var uLocal_290 = 1132396544;
	var uLocal_291 = 0;
	var uLocal_292 = -1082130432;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 8;
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
	var uLocal_352 = -1;
	var uLocal_353 = 1092616192;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	bool bLocal_356 = false;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	struct<7> Local_360 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	int iLocal_371 = 0;
	float fLocal_372 = 0f;
	float fLocal_373 = 0f;
	float fLocal_374 = 0f;
	bool bLocal_375 = false;
	bool bLocal_376 = false;
	bool bLocal_377 = false;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
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
	var uLocal_420 = 3;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 1;
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
	var uLocal_441 = 2;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 13;
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
	var uLocal_459 = 13;
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
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 13;
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
	var uLocal_755 = 0;
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
	var uLocal_786 = 0;
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
	var uLocal_836 = 0;
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
	var uLocal_862 = 0;
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
	var uLocal_877 = 13;
	var uLocal_878 = 0;
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
	var uLocal_891 = 13;
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
	var uLocal_905 = 13;
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
	var uLocal_919 = 13;
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
	char cLocal_965[440] = "";
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	int iLocal_1031 = 0;
	int iLocal_1032 = 0;
	int iLocal_1033[3] = { 0, 0, 0 };
	int iLocal_1037[2] = { 0, 0 };
	int iLocal_1040 = 0;
	int iLocal_1041[2] = { 0, 0 };
	int iLocal_1044 = 0;
	bool bLocal_1045 = false;
	bool bLocal_1046 = false;
	int iLocal_1047[2] = { 0, 0 };
	int iLocal_1050[3] = { 0, 0, 0 };
	int iLocal_1054[2] = { 0, 0 };
	bool bLocal_1057 = false;
	bool bLocal_1058 = false;
	bool bLocal_1059 = false;
	struct<8> Local_1060[3];
	struct<8> Local_1085[2];
	struct<8> Local_1102[2];
	int iLocal_1119 = 0;
	int iLocal_1120 = 0;
	var uLocal_1121[3] = { 0, 0, 0 };
	var uLocal_1125[2] = { 0, 0 };
	int iLocal_1128 = 0;
	int iLocal_1129 = 0;
	int iLocal_1130 = 0;
	bool bLocal_1131 = false;
	bool bLocal_1132 = false;
	bool bLocal_1133 = false;
	bool bLocal_1134 = false;
	bool bLocal_1135 = false;
	bool bLocal_1136 = false;
	bool bLocal_1137 = false;
	bool bLocal_1138 = false;
	bool bLocal_1139 = false;
	bool bLocal_1140 = false;
	bool bLocal_1141 = false;
	bool bLocal_1142 = false;
	bool bLocal_1143 = false;
	bool bLocal_1144 = false;
	bool bLocal_1145 = false;
	bool bLocal_1146 = false;
	bool bLocal_1147 = false;
	bool bLocal_1148 = false;
	bool bLocal_1149 = false;
	bool bLocal_1150 = false;
	bool bLocal_1151 = false;
	bool bLocal_1152 = false;
	bool bLocal_1153 = false;
	bool bLocal_1154 = false;
	bool bLocal_1155 = false;
	bool bLocal_1156 = false;
	bool bLocal_1157 = false;
	bool bLocal_1158 = false;
	bool bLocal_1159 = false;
	bool bLocal_1160 = false;
	bool bLocal_1161 = false;
	bool bLocal_1162 = false;
	bool bLocal_1163 = false;
	bool bLocal_1164 = false;
	bool bLocal_1165 = false;
	bool bLocal_1166 = false;
	bool bLocal_1167 = false;
	bool bLocal_1168 = false;
	bool bLocal_1169 = false;
	bool bLocal_1170 = false;
	bool bLocal_1171 = false;
	bool bLocal_1172 = false;
	bool bLocal_1173 = false;
	bool bLocal_1174 = false;
	bool bLocal_1175 = false;
	bool bLocal_1176 = false;
	bool bLocal_1177 = false;
	bool bLocal_1178 = false;
	bool bLocal_1179 = false;
	bool bLocal_1180 = false;
	bool bLocal_1181 = false;
	bool bLocal_1182 = false;
	bool bLocal_1183 = false;
	int iLocal_1184 = 0;
	bool bLocal_1185 = false;
	bool bLocal_1186 = false;
	bool bLocal_1187 = false;
	bool bLocal_1188 = false;
	bool bLocal_1189 = false;
	bool bLocal_1190 = false;
	int iLocal_1191 = 0;
	int iLocal_1192 = 0;
	int iLocal_1193 = 0;
	int iLocal_1194 = 0;
	bool bLocal_1195 = false;
	var uLocal_1196[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1202 = 0;
	var uLocal_1203 = 0;
	int iLocal_1204 = 0;
	int iLocal_1205 = 0;
	int iLocal_1206 = 0;
	int iLocal_1207 = 0;
	int iLocal_1208 = 0;
	int iLocal_1209 = 0;
	int iLocal_1210 = 0;
	int iLocal_1211 = 0;
	int iLocal_1212 = 0;
	int iLocal_1213 = 0;
	int iLocal_1214 = 0;
	int iLocal_1215 = 0;
	int iLocal_1216 = 0;
	int iLocal_1217 = 0;
	float fLocal_1218 = 0f;
	bool bLocal_1219 = false;
	bool bLocal_1220 = false;
	float fLocal_1221[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_1227[5] = { 0f, 0f, 0f, 0f, 0f };
	bool bLocal_1233 = false;
	float fLocal_1234 = 0f;
	float fLocal_1235[3] = { 0f, 0f, 0f };
	var uLocal_1239[3] = { 0, 0, 0 };
	bool bLocal_1243 = false;
	float fLocal_1244 = 0f;
	float fLocal_1245 = 0f;
	int iLocal_1246 = 0;
	float fLocal_1247 = 0f;
	vector3 vLocal_1248[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_1258[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_1268[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_1284 = { 0f, 0f, 0f };
	vector3 vLocal_1287 = { 0f, 0f, 0f };
	vector3 vLocal_1290 = { 0f, 0f, 0f };
	vector3 vLocal_1293 = { 0f, 0f, 0f };
	vector3 vLocal_1296 = { 0f, 0f, 0f };
	vector3 vLocal_1299 = { 0f, 0f, 0f };
	vector3 vLocal_1302 = { 0f, 0f, 0f };
	vector3 vLocal_1305 = { 0f, 0f, 0f };
	vector3 vLocal_1308 = { 0f, 0f, 0f };
	float fLocal_1311 = 0f;
	bool bLocal_1312 = false;
	bool bLocal_1313 = false;
	bool bLocal_1314 = false;
	bool bLocal_1315 = false;
	int iLocal_1316[2] = { 0, 0 };
	bool bLocal_1319 = false;
	bool bLocal_1320[3] = { false, false, false };
	int iLocal_1324 = 0;
	bool bLocal_1325 = false;
	bool bLocal_1326 = false;
	bool bLocal_1327 = false;
	bool bLocal_1328 = false;
	bool bLocal_1329 = false;
	int iLocal_1330 = 0;
	int iLocal_1331 = 0;
	bool bLocal_1332 = false;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	bool bLocal_1363 = false;
	var uLocal_1364 = 16;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = -1;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 1000;
	var uLocal_1539 = 1000;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 8;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 4;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 4;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 4;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 4;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 4;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 4;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 4;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 4;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	vector3 vLocal_1665 = { 0f, 0f, 0f };
	float fLocal_1668 = 0f;
	vector3 vLocal_1669 = { 0f, 0f, 0f };
	bool bLocal_1672 = false;
	int iLocal_1673 = 0;
	int iLocal_1674 = 0;
	vector3 vLocal_1675 = { 0f, 0f, 0f };
	vector3 vLocal_1678 = { 0f, 0f, 0f };
	vector3 vLocal_1681 = { 0f, 0f, 0f };
	vector3 vLocal_1684 = { 0f, 0f, 0f };
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	bool bLocal_1690 = false;
	struct<9> Local_1691 = { 2, 0, 0, 0, 0, 2, 0, 0, 2 } ;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

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
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_54 = UNK_0xAD1355DD1E5D2D9B();
	iLocal_55 = UNK_0x817B3657F78A517A();
	iLocal_268 = -1;
	fLocal_270 = 1f;
	iLocal_383 = 100;
	iLocal_384 = 3;
	iLocal_1031 = 3;
	iLocal_1210 = 37000;
	iLocal_1216 = -1;
	fLocal_1218 = 90000f;
	bLocal_1243 = 135f;
	fLocal_1245 = 0f;
	fLocal_1247 = 0f;
	vLocal_1293 = { -1162.985f, -161.715f, -38.221f };
	vLocal_1296 = { -1327.63f, -266.202f, 38.221f };
	vLocal_1299 = { -1236.661f, -197.316f, 39.6313f };
	vLocal_1302 = { -1266.027f, -218.9829f, 41.44594f };
	vLocal_1308 = { -1237.731f, -189.5452f, 40.63728f };
	fLocal_1311 = 40f;
	bLocal_1325 = joaat("A_M_Y_BEACHVESP_02");
	bLocal_1326 = joaat("FBI2");
	bLocal_1327 = joaat("S_M_M_HIGHSEC_01");
	bLocal_1328 = joaat("S_M_M_HIGHSEC_02");
	bLocal_1329 = joaat("WASHINGTON");
	vLocal_1665 = { -1263.677f, -222.2767f, 41.446f };
	fLocal_1668 = 304.201f;
	vLocal_1669 = { -1507.252f, -934.3307f, 8.6562f };
	bLocal_1672 = 137.9228f;
	vLocal_1675 = { -1510.733f, -935.96f, 10.90214f };
	vLocal_1678 = { 15.07491f, -0.024198f, -71.86189f };
	vLocal_1681 = { -1510.878f, -936.1155f, 9.798549f };
	vLocal_1684 = { 4.686822f, -0.024198f, -72.45972f };
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		UNK_0xC92DB9682A650680("ASS1_FAIL");
		func_533(&(Global_111638.f_19958.f_1), 1024);
		func_531();
		func_526();
	}
	UNK_0x7798376279BB5369(1);
	bLocal_1045 = UNK_0x16F2683693E537C9();
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
	}
	if (func_525())
	{
		if (func_524())
		{
			bLocal_1153 = true;
		}
		bLocal_1142 = true;
	}
	else
	{
		bLocal_1142 = false;
	}
	func_523();
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, false);
	}
	func_522();
	iLocal_269 = 0;
	Local_57 = { func_520(iLocal_269) };
	UNK_0xC05DBA7D4F88D5E5(bLocal_1327, true);
	UNK_0xC05DBA7D4F88D5E5(bLocal_1328, true);
	UNK_0x2103752056F874E1();
	if (func_525())
	{
		bLocal_376 = true;
		iLocal_1209 = func_519();
		if (Global_92921)
		{
			if (iLocal_1209 <= 1)
			{
				iLocal_1209++;
			}
		}
		func_518();
		if (iLocal_1209 == 0)
		{
			if (bLocal_1153)
			{
				func_516();
				while (!func_515())
				{
					SYSTEM::WAIT(0);
				}
				bVar0 = func_464(-1523.174f, -924.6732f, 9.1221f, 53.0177f);
				if (((!UNK_0xA7082C42B8809BF2(UNK_0x134B62B726CEC8E6(bVar0)) && !UNK_0xC41A9202669A24C4(UNK_0x134B62B726CEC8E6(bVar0))) && !UNK_0xAFB8495D36825275(UNK_0x134B62B726CEC8E6(bVar0))) && !UNK_0x56E1CD81AE700E98(bVar0))
				{
					UNK_0xB9FD7450C0DAB575(bVar0, 1084227584 /* Float: 5f */);
				}
				else
				{
					UNK_0xA954465BA6FDEFE2(&bVar0);
				}
			}
			func_463(-1510.181f, -946.9595f, 8.2738f, 10f, 1, 0);
		}
		else if (iLocal_1209 == 1)
		{
			if (bLocal_1153)
			{
				func_516();
				while (!func_515())
				{
					SYSTEM::WAIT(0);
				}
				bVar1 = func_464(-1266.405f, -219.1991f, 41.4459f, 304.8644f);
				if (((!UNK_0xA7082C42B8809BF2(UNK_0x134B62B726CEC8E6(bVar1)) && !UNK_0xC41A9202669A24C4(UNK_0x134B62B726CEC8E6(bVar1))) && !UNK_0xAFB8495D36825275(UNK_0x134B62B726CEC8E6(bVar1))) && !UNK_0x56E1CD81AE700E98(bVar1))
				{
					UNK_0xB9FD7450C0DAB575(bVar1, 1084227584 /* Float: 5f */);
				}
				else
				{
					UNK_0xA954465BA6FDEFE2(&bVar1);
				}
			}
			func_463(-1266.173f, -214.0011f, 41.4459f, 310.0126f, 1, 0);
		}
		else if (iLocal_1209 == 2)
		{
			if (bLocal_1153)
			{
				func_516();
				while (!func_515())
				{
					SYSTEM::WAIT(0);
				}
				bVar2 = func_464(-1188.486f, -316.9884f, 36.6841f, 29.9702f);
				if (((!UNK_0xA7082C42B8809BF2(UNK_0x134B62B726CEC8E6(bVar2)) && !UNK_0xC41A9202669A24C4(UNK_0x134B62B726CEC8E6(bVar2))) && !UNK_0xAFB8495D36825275(UNK_0x134B62B726CEC8E6(bVar2))) && !UNK_0x56E1CD81AE700E98(bVar2))
				{
					UNK_0xB9FD7450C0DAB575(bVar2, 1084227584 /* Float: 5f */);
				}
				else
				{
					UNK_0xA954465BA6FDEFE2(&bVar2);
				}
			}
			func_463(-1184.244f, -319.2575f, 36.7445f, 26.0711f, 1, 0);
		}
	}
	while (true)
	{
		UNK_0x1A6DFFFEEC27BF4F("M_ASS1", 0);
		if (bLocal_1143)
		{
			if (func_462())
			{
				func_461();
			}
		}
		else if (!UNK_0xEB6A8945D1AC98A1(bLocal_1045))
		{
			func_454();
			if (iLocal_1031 < 10)
			{
				Local_360.f_6 = 1;
			}
			else
			{
				Local_360.f_6 = 5;
			}
			func_154();
			func_102();
			if (bLocal_1158)
			{
				func_97();
			}
			if (!bLocal_1141)
			{
				if (iLocal_1031 >= 9 && iLocal_1031 < 11)
				{
					func_93(&uLocal_1203, &fLocal_1218, &bLocal_1140, &bLocal_1141);
				}
			}
			func_61();
			func_59();
			if (((bLocal_1134 || bLocal_1139) && iLocal_1031 < 11) || (bLocal_1169 && iLocal_1031 < 11))
			{
				if (!func_58(&uLocal_1354) && iLocal_1031 > 8)
				{
					func_55(&uLocal_1354);
				}
				else if (iLocal_1031 < 8 || func_52(&uLocal_1354) > 5f)
				{
					if (iLocal_1044 == 1)
					{
						func_37(1);
					}
					else if (iLocal_1044 == 5)
					{
						func_37(5);
					}
					else
					{
						func_37(2);
					}
				}
				else if (func_52(&uLocal_1354) > 2.5f)
				{
					if (!bLocal_1170)
					{
						if (!bLocal_1189)
						{
							bLocal_1057 = func_36(70f, 0);
						}
						else
						{
							bLocal_1057 = func_36(70f, 1);
						}
						if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
						{
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_1057))
							{
								UNK_0xA3BF0AA5A2608191(bLocal_1057);
								if (iLocal_1044 == 1)
								{
									if (UNK_0xC844350D5D58C99A(bLocal_1314))
									{
										if (!UNK_0x405E212DDE472467(bLocal_1057, 0))
										{
											UNK_0x161356BF7864C47B(bLocal_1057, bLocal_1314, bLocal_1314, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
										}
									}
									if (UNK_0xC844350D5D58C99A(bLocal_1057) && !UNK_0xEB6A8945D1AC98A1(bLocal_1057))
									{
										func_34(bLocal_1057, 6, "OJAvaGUARD2");
										func_33(&uLocal_1364, "OJASAUD", "OJASva_CAR2", "OJASva_CAR2_1", 9, 0, 0);
									}
								}
								else if (iLocal_1044 == 8)
								{
									if (UNK_0xC844350D5D58C99A(bLocal_1312) && UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
									{
										UNK_0x161356BF7864C47B(bLocal_1057, bLocal_1312, bLocal_1312, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
									}
									func_34(func_31(25f), 6, "OJAvaGUARD2");
									func_33(&uLocal_1364, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
								}
								else
								{
									UNK_0x9BE7E7B6B488CC55(bLocal_1057, UNK_0x16F2683693E537C9(), -1, 0);
									func_2(bLocal_1057);
								}
							}
						}
						bLocal_1170 = true;
					}
				}
			}
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(bLocal_1045, 0))
	{
		bVar0 = UNK_0x6937EA2286828455(bLocal_1045, 0);
		if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("TOWTRUCK") || UNK_0x134B62B726CEC8E6(bVar0) == joaat("TOWTRUCK2"))
		{
			bLocal_1144 = true;
		}
	}
	else
	{
		bLocal_1144 = false;
	}
	if (bLocal_1144)
	{
		if (UNK_0x6D18156F72BE0773(bVar0, bLocal_1312))
		{
			UNK_0xA1D5A8611E9DC1DD(bVar0, bLocal_1312);
		}
	}
}

void func_2(bool bParam0)
{
	struct<6> Var0;

	if (!bLocal_1180)
	{
		if ((UNK_0xC844350D5D58C99A(bParam0) && !UNK_0xEB6A8945D1AC98A1(bParam0)) && func_29(bParam0, 1) < 50f)
		{
			if (!func_28())
			{
				if (iLocal_1044 == 4)
				{
					func_34(bParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1364, "OJASAUD", "OJASva_LIMO", 9, 0, 0, 0);
				}
				else if (iLocal_1044 == 8)
				{
					func_34(func_31(25f), 6, "OJAvaGUARD2");
					func_33(&uLocal_1364, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
				}
				else
				{
					func_34(bParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1364, "OJASAUD", "OJASva_GTFO3", 9, 0, 0, 0);
				}
				bLocal_1180 = true;
			}
			else
			{
				Var0 = { func_5() };
				if (!UNK_0x7F8A39872A07D2CE(&Var0, "OJAS_FEED"))
				{
					func_3();
				}
			}
		}
	}
}

void func_3()
{
	Global_19671 = 0;
	func_4();
}

void func_4()
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

struct<6> func_5()
{
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

bool func_6(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_27(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_7(sParam2, iParam3, 0);
}

int func_7(char* sParam0, int iParam1, bool bParam2)
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
					func_4();
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
		if (func_26(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_25();
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
				func_17();
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
				if (func_16())
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
			func_14();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_13();
		func_8();
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
		func_4();
	}
	return 0;
}

void func_8()
{
	if (!func_9())
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

bool func_9()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_12())
	{
		return false;
	}
	if (func_10(UNK_0xD803B885F5E47A62()))
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

bool func_10(int iParam0)
{
	return func_11(iParam0, 20);
}

bool func_11(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_12()
{
	return -1;
}

void func_13()
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

void func_14()
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

bool func_15()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_16()
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

void func_17()
{
	if (func_24(14))
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
		Global_19486 = func_18();
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

int func_18()
{
	func_19();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_19()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_22(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_21(UNK_0x16F2683693E537C9());
			if (func_20(iVar0) && (!func_24(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_20(Global_111638.f_2358.f_539.f_4321))
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

bool func_20(int iParam0)
{
	return iParam0 < 3;
}

int func_21(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_22(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_22(int iParam0)
{
	if (func_20(iParam0))
	{
		return func_23(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_23(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_24(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_25()
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

bool func_26(bool bParam0, int iParam1)
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

void func_27(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_28()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

float func_29(bool bParam0, int iParam1)
{
	return func_30(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4()), bParam0, iParam1);
}

float func_30(bool bParam0, bool bParam1, int iParam2)
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

bool func_31(float fParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_1050[iVar0]))
		{
			if (func_32(iLocal_1050[iVar0], vLocal_1290, 1) < fParam0)
			{
				return iLocal_1050[iVar0];
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_1054[iVar0]))
		{
			if (func_32(iLocal_1054[iVar0], vLocal_1290, 1) < fParam0)
			{
				return iLocal_1054[iVar0];
			}
		}
		iVar0++;
	}
	return false;
}

float func_32(bool bParam0, vector3 vParam1, int iParam4)
{
	if (UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return -1f;
	}
	return UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bParam0, true), vParam1, iParam4);
}

int func_33(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_27(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_7(sParam2, iParam4, 0);
}

void func_34(bool bParam0, int iParam1, char* sParam2)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		func_35(&uLocal_1364, iParam1, bParam0, sParam2, 0, 1);
	}
}

void func_35(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

int func_36(int iParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;

	fVar2 = iParam0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_1050[iVar0]))
		{
			if (bParam1 || (!bParam1 && !UNK_0x405E212DDE472467(iLocal_1050[iVar0], 0)))
			{
				fVar1 = func_29(iLocal_1050[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_1050[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_1054[iVar0]))
		{
			if (bParam1 || (!bParam1 && !UNK_0x405E212DDE472467(iLocal_1054[iVar0], 0)))
			{
				fVar1 = func_29(iLocal_1054[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_1054[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_1047[iVar0]))
		{
			if (bParam1 || (!bParam1 && !UNK_0x405E212DDE472467(iLocal_1054[iVar0], 0)))
			{
				fVar1 = func_29(iLocal_1047[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_1047[iVar0];
				}
			}
		}
		iVar0++;
	}
	return uVar3;
}

void func_37(int iParam0)
{
	bool bVar0;

	if (bLocal_1143 == 0)
	{
		iLocal_1044 = iParam0;
		func_3();
		UNK_0x790015DC92C918E2();
		UNK_0xC92DB9682A650680("ASS1_FAIL");
		if (func_51())
		{
			func_49(-1698.51f, -1067.768f, 12.1417f, 316.3502f);
		}
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			Global_98744.f_12[0] = 1;
		}
		else
		{
			Global_98744.f_12[0] = 0;
		}
		switch (iLocal_1044)
		{
			case 0:
				bVar0 = "ASS_VA_FAILED";
				break;
			case 1:
				bVar0 = "ASS_VA_VEHICLE";
				break;
			case 2:
			case 5:
				bVar0 = "ASS_VA_COVER";
				break;
			case 8:
				bVar0 = "ASS_VA_COVER";
				break;
			case 3:
				bVar0 = "ASS_VA_WANTED";
				break;
			case 6:
				bVar0 = "ASS_VA_ESCAPED";
				break;
			case 7:
				bVar0 = "ASS_VA_ABAND";
				break;
			case 9:
				bVar0 = "ASS_VA_LATTACK";
				break;
		}
		bLocal_1143 = true;
		func_47(bVar0);
		func_38(0);
	}
}

void func_38(int iParam0)
{
	int iVar0;

	if (Global_111638.f_9080 || func_46(0))
	{
		iVar0 = func_45();
		if (!func_39(iVar0))
		{
			return;
		}
		UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 5);
		Global_98780 = iParam0;
	}
}

bool func_39(int iParam0)
{
	int iVar0;
	int iVar1;

	func_44();
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x2DA3D7F5B74119E5(5000);
	}
	iVar0 = Global_89496[iParam0 /*5*/];
	iVar1 = Global_76891.f_109[iVar0 /*4*/];
	func_43(iVar1, 1);
	UNK_0xAE08886CF478C471(UNK_0xD803B885F5E47A62(), 0);
	UNK_0x0D00405AED37B7C4(UNK_0xD803B885F5E47A62(), 0);
	func_40(&(Global_111638.f_2358.f_539), iVar1);
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

void func_40(var uParam0, int iParam1)
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
			if (!func_42(Global_111638.f_18528[iVar0], &vVar2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_41(&(uParam0->f_2296[iVar0]));
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

void func_41(var uParam0)
{
	*uParam0 = -15;
}

bool func_42(int iParam0, var uParam1, float fParam2)
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
			return func_42(8, uParam1, fParam2);
		case 10:
			return func_42(8, uParam1, fParam2);
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

void func_43(int iParam0, bool bParam1)
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

void func_44()
{
	Global_98779 = 1;
	if (UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1))
	{
		if (UNK_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_18())
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
			switch (func_18())
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

int func_45()
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

bool func_46(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_47(bool bParam0)
{
	func_533(&(Global_111638.f_19958.f_1), 1024);
	if (!UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		func_48(bParam0);
	}
}

void func_48(char* sParam0)
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

void func_49(vector3 vParam0, float fParam3)
{
	if (func_50(Global_76862, 0f, 0f, 0f, 0))
	{
		Global_76862 = { vParam0 };
		Global_76865 = fParam3;
	}
}

bool func_50(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_51()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()) || UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
		{
			return true;
		}
	}
	return false;
}

float func_52(bool bParam0)
{
	if (func_58(bParam0))
	{
		if (func_54(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_53(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return bParam0->f_1;
}

float func_53(bool bParam0)
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

bool func_54(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, 2);
}

void func_55(bool bParam0)
{
	if (!func_58(bParam0))
	{
		func_56(bParam0);
	}
}

void func_56(bool bParam0)
{
	func_57(bParam0, 0f);
}

void func_57(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_53(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

bool func_58(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, true);
}

void func_59()
{
	if (func_60(&iLocal_1044))
	{
		func_37(6);
	}
}

bool func_60(int iParam0)
{
	float fVar0;
	bool bVar1;

	if (iLocal_1031 > 11)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_1046))
		{
			if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
			{
				if (UNK_0xC42A92762C58E1B9(bLocal_1046, bLocal_1312, 0))
				{
					bVar1 = true;
				}
			}
		}
		if (bLocal_1164)
		{
			fVar0 = 100f;
		}
		else
		{
			fVar0 = 200f;
		}
		if (UNK_0xC844350D5D58C99A(bLocal_1046))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_1046))
			{
				if (func_30(bLocal_1045, bLocal_1046, 1) >= fVar0)
				{
					if (bVar1)
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
						{
							if (UNK_0x03068588A1FCED1A(bLocal_1312) || !UNK_0x0A059E0DB9253280(bLocal_1312))
							{
								*iParam0 = 6;
								return true;
							}
						}
					}
					else if (UNK_0x03068588A1FCED1A(bLocal_1046))
					{
						*iParam0 = 6;
						return true;
					}
				}
				else if (UNK_0xE4EDC4B0E92C078B(iLocal_1120))
				{
					if (func_30(bLocal_1045, bLocal_1046, 1) >= (fVar0 * 0.5f))
					{
						if (!UNK_0xE14836FE7BA140D5(iLocal_1120))
						{
							UNK_0xF412DD40DE84CE72(iLocal_1120, 1);
						}
					}
					else if (UNK_0xE14836FE7BA140D5(iLocal_1120))
					{
						UNK_0xF412DD40DE84CE72(iLocal_1120, 0);
					}
				}
			}
		}
	}
	return false;
}

void func_61()
{
	if (UNK_0xC844350D5D58C99A(bLocal_1046))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_1046))
		{
			func_62(&uLocal_1529, bLocal_1046, 0, 0, 1, 1, 1);
		}
	}
}

void func_62(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_63(uParam0, bParam1, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_63(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_64(uParam0, bParam1, 0f, 0f, 0f, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_64(var uParam0, bool bParam1, vector3 vParam2, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
	{
		func_92(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_65(uParam0, bParam1, vParam2, iParam5, iParam6, bParam7, iParam8, bParam9);
}

void func_65(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_91(bVar0))
	{
		func_90();
	}
	if (func_89(bParam1) && UNK_0x4FC40AB0ECCE6E18(bParam1))
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
			if (func_84(uParam0, bParam7, bParam9, 0))
			{
				func_81(uParam0, bParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_70(bVar0))
				{
					if ((UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0)) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if ((bVar1 && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
						{
							if (!func_91(bVar0))
							{
								func_69(bVar0, -1);
								uParam0->f_3 = bVar0;
								if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
								{
									func_68(1);
								}
							}
						}
					}
				}
			}
			else if (func_70(bVar0))
			{
				if (UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0))
				{
					if (((UNK_0x0A059E0DB9253280(bParam1) && bVar1) && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
					{
						if (!func_91(bVar0))
						{
							func_69(bVar0, -1);
							uParam0->f_3 = bVar0;
							if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
							{
								func_68(1);
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
				if (func_91(bParam5))
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
						func_92(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(6) == 3 || UNK_0xA4FD7964FEE91ED8(6) == 4)
					{
						func_92(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(4) == 3 || UNK_0xA4FD7964FEE91ED8(4) == 4)
					{
						func_92(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(5) == 3 || UNK_0xA4FD7964FEE91ED8(5) == 4)
					{
						func_92(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(2) == 3 || UNK_0xA4FD7964FEE91ED8(2) == 4)
					{
						func_92(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0xF3545351E9CBB11F() == 3 || UNK_0xF3545351E9CBB11F() == 4)
				{
					func_92(uParam0, bVar0, 1);
				}
			}
			if (!func_84(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_67(uParam0))
				{
					func_66(uParam0);
				}
			}
		}
	}
	else
	{
		func_92(uParam0, bVar0, 0);
	}
}

void func_66(var uParam0)
{
	if (func_89(UNK_0x16F2683693E537C9()))
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

bool func_67(var uParam0)
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

int func_68(bool bParam0)
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

void func_69(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_70(bool bParam0)
{
	if (!func_71(1, 1, 0))
	{
		if ((!UNK_0xEA6BC48857E0AC4C(bParam0) && func_91(bParam0)) || func_91("CMN_HINT"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		return false;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_68(0) < 3)
			{
				return true;
			}
			break;
		case 4:
			if (func_68(0) < 1)
			{
				return true;
			}
			break;
		case 5:
		case 15:
			if (func_68(0) < 1)
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

bool func_71(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_80(0))
	{
		return false;
	}
	if (func_79())
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
	if ((func_78() || func_77(Global_4456448.f_232883)) || func_76())
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			bVar1 = func_75(UNK_0x16F2683693E537C9(), 0);
			if (((UNK_0x137240CA2BADB0D2(bVar0, bVar1) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("APC") && bVar1 != -1)) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("AKULA") && bVar1 != -1)) || (((UNK_0x134B62B726CEC8E6(bVar0) == joaat("RIOT2") && bVar1 == 0) && func_74(bVar0, 10)) && UNK_0x0ECB5CA5140957AD(bVar0, 10) != -1))
			{
				return false;
			}
		}
	}
	if (Global_1686722)
	{
		return false;
	}
	if (func_72(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_72(bool bParam0)
{
	if (bParam0 != func_12())
	{
		if (func_73(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && bParam0 == UNK_0xD803B885F5E47A62()) && func_73(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

bool func_73(bool bParam0, bool bParam1, bool bParam2)
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

bool func_74(bool bParam0, int iParam1)
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

bool func_75(bool bParam0, int iParam1)
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

bool func_76()
{
	return Global_2450632.f_17;
}

bool func_77(int iParam0)
{
	return iParam0 == 51;
}

bool func_78()
{
	return Global_2450632.f_16;
}

bool func_79()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

bool func_80(int iParam0)
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

void func_81(var uParam0, bool bParam1, vector3 vParam2, bool bParam5)
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
		func_92(uParam0, 0, 0);
	}
	if (func_50(vParam2, 0f, 0f, 0f, 0))
	{
		if (UNK_0xEC560E589DF8370E(bParam1))
		{
			bVar0 = UNK_0x940C1429253D3B1B(bParam1);
			if (!UNK_0x405E212DDE472467(bVar0, 0))
			{
				if (UNK_0x34BFC6F0CB887BC2(bVar0))
				{
					if (!func_82())
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

int func_82()
{
	return func_83(UNK_0xD803B885F5E47A62());
}

int func_83(bool bParam0)
{
	if (UNK_0x134B62B726CEC8E6(UNK_0x9539D44F3E4492F6(bParam0)) == joaat("MP_F_FREEMODE_01"))
	{
		return 1;
	}
	return 0;
}

bool func_84(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_88(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_67(uParam0))
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
						if (!func_88(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_88(bParam1, bParam2, bParam3))
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
					if (!func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_87(bParam1, bParam2, bParam3) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
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
				else if (!func_88(bParam1, bParam2, bParam3))
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
						if (func_86(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || func_85(bParam1, bParam2, bParam3))
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
					else if (func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		case 4:
			if (!func_67(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_71(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_90();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_85(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_71(bParam0, bParam1, bParam2))
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

bool func_86(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_71(bParam0, bParam1, bParam2))
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

bool func_87(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_71(bParam0, bParam1, bParam2))
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

bool func_88(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_71(bParam0, bParam1, bParam2))
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

bool func_89(bool bParam0)
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

void func_90()
{
	UNK_0x5D96D8530B3D0904(&Global_7357, 4);
}

bool func_91(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_92(var uParam0, bool bParam1, int iParam2)
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
		if (func_91(uParam0->f_3))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
	if (!UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (func_91(bVar0))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
}

void func_93(var uParam0, float fParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (!*bParam2)
	{
		*uParam0 = UNK_0x1C0640BA9A7327B3();
		*fParam1 = (*fParam1 / 1000f);
		if (!func_58(&uLocal_1351))
		{
			func_55(&uLocal_1351);
		}
		*bParam2 = 1;
	}
	if (func_58(&uLocal_1351))
	{
		fVar0 = func_52(&uLocal_1351);
		if (fVar0 >= *fParam1)
		{
			*bParam3 = 1;
		}
	}
	iLocal_1213 = SYSTEM::ROUND((*fParam1 - fVar0));
	iLocal_1213 *= 1000;
	if (iLocal_1213 < 63000)
	{
		bLocal_1147 = true;
	}
	if (iLocal_1213 < 65000)
	{
		bLocal_1154 = true;
	}
	if (iLocal_1213 < iLocal_1210)
	{
		bLocal_1177 = true;
	}
	if (!UNK_0xAE317D00A5A55DF6("SCRIPT\ASSASSINATION_MULTI", 0, -1))
	{
		bLocal_1363 = false;
	}
	else
	{
		bLocal_1363 = true;
	}
	if (iLocal_1213 < 30000)
	{
		bLocal_1168 = true;
		if (bLocal_1363)
		{
			if (func_58(&uLocal_1360))
			{
				if (func_52(&uLocal_1360) > 1f)
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
					func_56(&uLocal_1360);
				}
			}
			else
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
				func_55(&uLocal_1360);
			}
		}
		func_94(iLocal_1213, "ASS_VA_TIMERED", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_94(iLocal_1213, "ASS_VA_TIMELEFT", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
}

void func_94(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	bool bVar1;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_96(7, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_95(7, bVar0);
		Global_1378678.f_4562[bVar0] = iParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_4562.f_172[bVar0] = iParam2;
		Global_1378678.f_4562.f_216[bVar0] = iParam3;
		Global_1378678.f_4562.f_183[bVar0] = iParam4;
		Global_1378678.f_4562.f_194[bVar0] = iParam5;
		Global_1378678.f_4562.f_249[bVar0] = iParam6;
		Global_1378678.f_4562.f_260[bVar0] = iParam7;
		Global_1378678.f_4562.f_205[bVar0] = iParam8;
		Global_1378678.f_4562.f_314[bVar0] = iParam9;
		Global_1378678.f_4562.f_325[bVar0] = iParam10;
		Global_1378678.f_4562.f_357[bVar0] = iParam11;
		Global_1378678.f_4562.f_238[bVar0] = iParam12;
		Global_1378678.f_4562.f_271[bVar0] = iParam13;
		Global_1378678.f_4562.f_368[bVar0] = iParam14;
		Global_1378678.f_4562.f_379[bVar0] = iParam15;
		Global_1378678.f_4562.f_390[bVar0] = iParam16;
		Global_1378678.f_4562.f_227[bVar0] = iParam17;
	}
}

void func_95(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), bParam1);
}

bool func_96(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], bParam1);
}

void func_97()
{
	bool bVar0;

	switch (iLocal_1207)
	{
		case 0:
			if (!func_28())
			{
				if (!UNK_0x437347B10A200C4B(iLocal_1050[0], 0))
				{
					UNK_0xBC43ED9FE28DB191(iLocal_1050[0]);
				}
				if (!UNK_0x437347B10A200C4B(iLocal_1050[1], 0))
				{
					UNK_0xBC43ED9FE28DB191(iLocal_1050[1]);
				}
				bVar0 = func_101();
				if (bLocal_1157)
				{
					if (!bLocal_1173)
					{
						func_34(bVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1364, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
						{
							bLocal_1173 = true;
						}
					}
				}
				else if (!bLocal_1164 && UNK_0xEB6A8945D1AC98A1(bLocal_1046))
				{
					if (!bLocal_1173)
					{
						func_34(bVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1364, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
						{
							bLocal_1173 = true;
						}
					}
				}
				if (!func_58(&uLocal_1339))
				{
					func_55(&uLocal_1339);
				}
				else
				{
					func_56(&uLocal_1339);
				}
				iLocal_1207 = 1;
			}
			break;
		case 1:
			iLocal_1207 = 2;
			break;
		case 2:
			if (bLocal_1173 || !UNK_0xEB6A8945D1AC98A1(bLocal_1046))
			{
				if (!func_28() && !bLocal_1157)
				{
					if (!bLocal_1171)
					{
						bVar0 = func_101();
						func_34(bVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1364, "OJASAUD", "OJASva_LOOK", 9, 0, 0, 0))
						{
							bLocal_1171 = true;
						}
					}
					else if (!bLocal_1181 && UNK_0xEB6A8945D1AC98A1(bLocal_1046))
					{
						bVar0 = func_101();
						func_100(bVar0);
					}
				}
			}
			else if (bLocal_1157)
			{
				if (!bLocal_1173)
				{
					func_34(bVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1364, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
					{
						bLocal_1173 = true;
					}
				}
			}
			else if (!bLocal_1164)
			{
				if (!bLocal_1173)
				{
					func_34(bVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1364, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
					{
						bLocal_1173 = true;
					}
				}
			}
			if (func_99(bLocal_1045))
			{
				fLocal_1244 = 2.5f;
			}
			else
			{
				fLocal_1244 = 5f;
			}
			if (func_58(&uLocal_1339))
			{
				if ((func_52(&uLocal_1339) > fLocal_1244 && func_98()) || UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
				{
					func_3();
					if (!bLocal_1134)
					{
						bLocal_1134 = true;
						bLocal_1178 = true;
					}
					bLocal_1158 = false;
				}
			}
			break;
		case 3:
			break;
	}
}

bool func_98()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_1050[iVar0]) && !UNK_0x437347B10A200C4B(iLocal_1050[iVar0], 0))
		{
			UNK_0x9DD8618CA5BF832D(iLocal_1050[iVar0], 85, true);
			if (UNK_0xE115347EA59F7B86(iLocal_1050[iVar0], UNK_0x16F2683693E537C9()))
			{
				return true;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_1054[iVar0]) && !UNK_0x437347B10A200C4B(iLocal_1054[iVar0], 0))
		{
			UNK_0x9DD8618CA5BF832D(iLocal_1054[iVar0], 85, true);
			if (UNK_0xE115347EA59F7B86(iLocal_1054[iVar0], UNK_0x16F2683693E537C9()))
			{
				return true;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_1047[iVar0]) && !UNK_0x437347B10A200C4B(iLocal_1047[iVar0], 0))
		{
			UNK_0x9DD8618CA5BF832D(iLocal_1047[iVar0], 85, true);
			if (UNK_0xE115347EA59F7B86(iLocal_1047[iVar0], UNK_0x16F2683693E537C9()))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_99(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0x3D1053F9EB43B7AD(bParam0, -1252.302f, -213.9033f, 35.11222f, -1205.808f, -183.0681f, 45.32541f, 51f, 0, true, 0) && !UNK_0x3D1053F9EB43B7AD(bParam0, -1250.809f, -192.5218f, 35.33125f, -1231.866f, -161.3655f, 45.02535f, 12.8f, 0, true, 0))
		{
			return true;
		}
	}
	return false;
}

void func_100(bool bParam0)
{
	if (!bLocal_1181)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_1046) && UNK_0xEB6A8945D1AC98A1(bLocal_1046))
		{
			if (!func_28())
			{
				if ((UNK_0xC844350D5D58C99A(bParam0) && !UNK_0xEB6A8945D1AC98A1(bParam0)) && func_29(bParam0, 1) < 75f)
				{
					func_34(bParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1364, "OJASAUD", "OJAS_FEED", 9, 0, 0, 0);
					bLocal_1181 = true;
				}
			}
		}
	}
}

int func_101()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_1050[iVar1]) && !UNK_0xEB6A8945D1AC98A1(iLocal_1050[iVar1]))
		{
			iVar0 = iLocal_1050[iVar1];
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (UNK_0xC844350D5D58C99A(iLocal_1054[iVar1]) && !UNK_0xEB6A8945D1AC98A1(iLocal_1054[iVar1]))
			{
				iVar0 = iLocal_1054[iVar1];
			}
			iVar1++;
		}
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (UNK_0xC844350D5D58C99A(iLocal_1047[iVar1]) && !UNK_0xEB6A8945D1AC98A1(iLocal_1047[iVar1]))
			{
				iVar0 = iLocal_1047[iVar1];
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_102()
{
	func_109();
	if (!bLocal_1158)
	{
		if (!bLocal_1134)
		{
			if (func_103(&iLocal_1044))
			{
				bLocal_1134 = true;
			}
		}
	}
}

bool func_103(int iParam0)
{
	bool bVar0;
	float fVar1;
	int iVar2;

	if (!bLocal_1134)
	{
		if (bLocal_1168 && !bLocal_1137)
		{
			if (func_108(&iLocal_1044))
			{
				*iParam0 = 8;
				return true;
			}
		}
		if (UNK_0x03A10A5707B2BB1F(bLocal_1045, 4))
		{
			if (UNK_0x168558745A6AC21E(bLocal_1045))
			{
				fVar1 = func_32(UNK_0x16F2683693E537C9(), -1230.599f, -196.5408f, 38.1528f, 1);
				UNK_0xCAE036C45E7FC720(bLocal_1045, &iVar2, 1);
				if ((((fVar1 > 15f && iVar2 == joaat("WEAPON_SNIPERRIFLE")) || iVar2 == joaat("WEAPON_HEAVYSNIPER")) || iVar2 == joaat("WEAPON_REMOTESNIPER")) || iVar2 == joaat("WEAPON_MARKSMANRIFLE"))
				{
					if (UNK_0xC844350D5D58C99A(bLocal_1046))
					{
						bLocal_1158 = true;
						bLocal_1156 = true;
					}
				}
				else if (fVar1 < 50f)
				{
					return true;
				}
			}
		}
		if ((func_107(bLocal_1312) || func_106(bLocal_1312)) || (UNK_0xC844350D5D58C99A(bLocal_1312) && UNK_0xB87D13D0C064E9D1(bLocal_1312, bLocal_1045, 1)))
		{
			return true;
		}
		if (func_107(bLocal_1313) || (UNK_0xC844350D5D58C99A(bLocal_1313) && UNK_0xB87D13D0C064E9D1(bLocal_1313, bLocal_1045, 1)))
		{
			return true;
		}
		if (UNK_0xC844350D5D58C99A(bLocal_1312) && !UNK_0x437347B10A200C4B(bLocal_1312, 0))
		{
			if (UNK_0xC42A92762C58E1B9(bLocal_1045, bLocal_1312, 0))
			{
				UNK_0xAACF4BD59CB35944(bLocal_1312, 1);
				UNK_0x13AD07790E232824(bLocal_1312);
				return true;
			}
		}
		if (UNK_0xC844350D5D58C99A(bLocal_1312))
		{
			if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
			{
				if (UNK_0x405E212DDE472467(bLocal_1045, 0))
				{
					bVar0 = UNK_0x6937EA2286828455(bLocal_1045, 0);
					if (UNK_0x1B3D109B39CC2C89(bVar0, bLocal_1312) || (bLocal_1144 && UNK_0x6D18156F72BE0773(bVar0, bLocal_1312)))
					{
						*iParam0 = 4;
						return true;
					}
				}
			}
		}
		if (iLocal_1031 == 12)
		{
			if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
			{
				if (func_30(bLocal_1045, bLocal_1312, 1) <= 15f)
				{
					return true;
				}
			}
		}
		if ((iLocal_1033[0] == 2 || iLocal_1033[1] == 2) || iLocal_1033[2] == 2)
		{
			if (func_105())
			{
				return true;
			}
		}
		if (iLocal_1031 < 11)
		{
			if (UNK_0x681F21BF9F7B449B(-1, vLocal_1308, fLocal_1311))
			{
				return true;
			}
		}
		else if (UNK_0x681F21BF9F7B449B(-1, vLocal_1308, fLocal_1311))
		{
			if (func_104())
			{
				bLocal_1188 = true;
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_104()
{
	if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1272.181f, -241.2545f, 62.90406f, -1300.203f, -201.3968f, 40.40408f, 44.5f, 0, false, 0) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1270.125f, -253.9321f, 62.90407f, -1311.414f, -193.6588f, 38.23291f, 44.5f, 0, false, 0))
	{
		return true;
	}
	return false;
}

bool func_105()
{
	int iVar0;

	if (UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar0, 1))
	{
		if (iVar0 == joaat("WEAPON_STICKYBOMB"))
		{
			if (UNK_0x85651FDAB8414096(UNK_0xD803B885F5E47A62()))
			{
				if ((UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()) && UNK_0x06F8112AA79C53D9(0, 24)) || (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0x06F8112AA79C53D9(0, 69)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_106(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (UNK_0x9C7B8DC16535B879(bParam0) == 3 && UNK_0x8B157DA177FBCF50(bLocal_1045) == bParam0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_107(bool bParam0)
{
	int iVar0;
	bool bVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (UNK_0xA30B8362589C124A(bParam0, -1, 0) != 0)
			{
				if (UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar0, 1))
				{
					if (iVar0 == joaat("WEAPON_STICKYBOMB"))
					{
						if (func_30(UNK_0x16F2683693E537C9(), bParam0, 1) < 40f)
						{
							if (UNK_0x38AF5DD0BDDE9545(UNK_0xD803B885F5E47A62(), &bVar1))
							{
								if ((UNK_0xE2F1E99DD161A861(bVar1) && UNK_0x96A5FE5834B81CE7(bVar1) == bParam0) || (UNK_0xEC560E589DF8370E(bVar1) && UNK_0x940C1429253D3B1B(bVar1) == UNK_0xA30B8362589C124A(bParam0, -1, 0)))
								{
									if ((UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()) && UNK_0x06F8112AA79C53D9(0, 24)) || (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0x06F8112AA79C53D9(0, 69)))
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
	return false;
}

bool func_108(int iParam0)
{
	if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
	{
		if (UNK_0x49FCF3B44AECBD62(UNK_0x16F2683693E537C9(), bLocal_1312, joaat("WEAPON_STICKYBOMB"), -1))
		{
			if (UNK_0x7DF98E52B481B6E3(-1223.024f, -187.3076f, 39.02538f, -1220.311f, -186.2481f, 40.42538f, 6.5f, joaat("WEAPON_STICKYBOMB"), 0) || UNK_0x7DF98E52B481B6E3(-1223.024f, -187.3076f, 38.02538f, -1220.311f, -186.2481f, 40.42538f, 4.5f, joaat("WEAPON_STICKYBOMB"), 0))
			{
				*iParam0 = 8;
				return true;
			}
		}
	}
	return false;
}

void func_109()
{
	int iVar0;

	func_150();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_1050[iVar0]))
		{
			if (bLocal_1134 && !bLocal_1167)
			{
				func_149(iLocal_1050[iVar0], &(Local_1060[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_1054[iVar0]))
		{
			if (bLocal_1134 && !bLocal_1167)
			{
				func_149(iLocal_1054[iVar0], &(Local_1085[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_1047[iVar0]))
		{
			if (bLocal_1134 && !bLocal_1167)
			{
				func_149(iLocal_1047[iVar0], &(Local_1102[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_1047[iVar0]))
			{
				if (iLocal_1041[iVar0] == 4)
				{
					UNK_0x9DD8618CA5BF832D(iLocal_1047[iVar0], 128, true);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_1204 == 0)
	{
		func_147(0);
	}
	else if (iLocal_1204 == 1)
	{
		func_147(1);
	}
	else if (iLocal_1204 == 2)
	{
		if (iLocal_1031 >= 9)
		{
			func_136(0);
		}
	}
	else if (iLocal_1204 == 3)
	{
		if (iLocal_1031 >= 9)
		{
			func_136(1);
		}
	}
	else if (iLocal_1204 == 4)
	{
		if (iLocal_1031 >= 9)
		{
			func_136(2);
			func_135(-1222.558f, -173.7471f, 38.32541f, -1220.101f, -169.0531f, 42.07541f, 4f);
		}
	}
	else if (iLocal_1204 == 5)
	{
		func_110(0);
		func_135(-1213.432f, -191.3261f, 38.32541f, -1208.553f, -193.8618f, 42.07534f, 4f);
	}
	else if (iLocal_1204 == 6)
	{
		func_110(1);
		func_135(-1219.14f, -202.3124f, 38.32534f, -1214.269f, -204.9035f, 42.07534f, 4f);
	}
	iLocal_1204++;
	if (iLocal_1204 > 6)
	{
		iLocal_1204 = 0;
	}
	if (bLocal_1134)
	{
		if (!UNK_0x437347B10A200C4B(bLocal_1046, 0))
		{
			UNK_0x9DD8618CA5BF832D(bLocal_1046, 120, true);
		}
	}
}

void func_110(int iParam0)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	bool bVar5;

	bVar0 = iLocal_1054[iParam0];
	switch (iLocal_1037[iParam0])
	{
		case 0:
			if (bLocal_1147)
			{
				iLocal_1037[iParam0] = 1;
			}
			else if (bLocal_1145)
			{
				iLocal_1037[iParam0] = 3;
			}
			break;
		case 1:
			if (UNK_0xDF1306B443CD3D15(bLocal_1313, 0))
			{
				if (func_134())
				{
					if (!UNK_0xDD4B920CF5E7E9EC(bLocal_1313))
					{
						if (UNK_0xA30B8362589C124A(bLocal_1313, -1, 0) == iLocal_1054[iParam0])
						{
							UNK_0x1B901F542DF070CF(iLocal_1054[iParam0], bLocal_1313, "OJASva_104", 948, 0, 16, 18, 6f, 0, 1073741824 /* Float: 2f */);
						}
					}
					iLocal_1037[iParam0] = 2;
				}
				else
				{
					func_133(iParam0);
				}
			}
			break;
		case 2:
			if (UNK_0xDF1306B443CD3D15(bLocal_1313, 0))
			{
				if (!UNK_0xDD4B920CF5E7E9EC(bLocal_1313))
				{
					vVar1 = { UNK_0x68F4C0EC296D3901(bLocal_1313, true) };
					iVar4 = UNK_0xD9522BA9E27E1349(bLocal_1313);
					bLocal_1147 = false;
					iLocal_1037[iParam0] = 0;
				}
			}
			break;
		case 3:
			if (UNK_0xDF1306B443CD3D15(bLocal_1313, 0))
			{
				if (!UNK_0x437347B10A200C4B(iLocal_1054[iParam0], 0))
				{
					if (UNK_0xC42A92762C58E1B9(iLocal_1054[iParam0], bLocal_1313, 0) && UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
					{
						if (!bLocal_1134)
						{
							if (UNK_0xA30B8362589C124A(bLocal_1313, -1, 0) == iLocal_1054[iParam0])
							{
								if (UNK_0xD1960163A3042274(iLocal_1054[iParam0], -1273030092) != 1)
								{
									UNK_0x9412BCBFE7F69F94(iLocal_1054[iParam0], bLocal_1313, bLocal_1312, -1, 45f, 786981, 10f, -1, 10f);
								}
							}
						}
						else if (UNK_0xA30B8362589C124A(bLocal_1313, -1, 0) == iLocal_1054[iParam0])
						{
							if (!bLocal_1148)
							{
								if (UNK_0x437347B10A200C4B(bLocal_1046, 0))
								{
									if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
									{
										UNK_0x6C3AE6E278DB3D0E(bVar0, UNK_0x16F2683693E537C9(), 0, 16);
									}
									else
									{
										iLocal_1037[iParam0] = 8;
									}
								}
								else
								{
									UNK_0x9412BCBFE7F69F94(iLocal_1054[iParam0], bLocal_1313, bLocal_1312, -1, 45f, 786981, 10f, -1, 10f);
									UNK_0x7CFA09F860B1FC00(bVar0, UNK_0x16F2683693E537C9());
									bLocal_1148 = true;
								}
							}
						}
						else if (!bLocal_1164)
						{
							if (UNK_0xD1960163A3042274(iLocal_1054[iParam0], 780511057) != 1)
							{
								if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
								{
									if (UNK_0x9C66D99E63E8E24C(bLocal_1313) < 5f)
									{
										iLocal_1037[iParam0] = 8;
									}
								}
								UNK_0x6C3AE6E278DB3D0E(bVar0, UNK_0x16F2683693E537C9(), 0, 16);
							}
						}
						else if (UNK_0xD1960163A3042274(iLocal_1054[iParam0], 780511057) != 1)
						{
							UNK_0x6C3AE6E278DB3D0E(bVar0, UNK_0x16F2683693E537C9(), 0, 16);
						}
					}
					else if (!bLocal_1158)
					{
						iLocal_1037[iParam0] = 8;
					}
				}
			}
			break;
		case 4:
			if (!func_58(&uLocal_1333))
			{
				func_56(&uLocal_1333);
			}
			func_130(&(iLocal_1054[iParam0]));
			iLocal_1037[iParam0] = 5;
			break;
		case 5:
			if (!func_99(bLocal_1045))
			{
				if (func_52(&uLocal_1333) >= 27f || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
				{
					if (!UNK_0xEB6A8945D1AC98A1(bVar0))
					{
						if (UNK_0x12DE711B1C681E9E(bLocal_1045, bVar0, 5f, 5f, 3f, 0, 1, 0))
						{
							func_129(bVar0, 5f, 5f, 3f);
						}
						else
						{
							func_133(iParam0);
						}
					}
				}
			}
			else
			{
				iLocal_1037[iParam0] = 0;
			}
			break;
		case 6:
			if (bLocal_1159)
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_1324);
				UNK_0x75CDA8644CD3B5F5(false, 0, 0);
				UNK_0xDBE4EC9C88839074(false, func_128(), UNK_0x09AC81E49EA267F7(1000, 1500), 2048, 4);
				UNK_0xDBE4EC9C88839074(false, func_128(), UNK_0x09AC81E49EA267F7(2000, 2500), 2048, 4);
				UNK_0xE185F110925D87DB(false, UNK_0x16F2683693E537C9(), UNK_0x09AC81E49EA267F7(10000, 11000), 30f, 1f, 1073741824 /* Float: 2f */, 0);
				UNK_0x490C8E35C60821B9(0, UNK_0x16F2683693E537C9(), func_128(), 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				UNK_0x75ABDC5F81978924(iLocal_1324);
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_1054[iParam0]))
				{
					UNK_0x78ADC381772E3D54(iLocal_1054[iParam0], iLocal_1324);
				}
				UNK_0xF82EA857DA10E0CD(&iLocal_1324);
			}
			else
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_1324);
				UNK_0x75CDA8644CD3B5F5(false, 0, 0);
				UNK_0x731C6942D48648D6(false, func_128(), UNK_0x09AC81E49EA267F7(3000, 3500), 1, 0);
				UNK_0x731C6942D48648D6(false, func_128(), UNK_0x09AC81E49EA267F7(3000, 3500), 0, 0);
				UNK_0x731C6942D48648D6(false, func_128(), UNK_0x09AC81E49EA267F7(3000, 3500), 0, 0);
				UNK_0x731C6942D48648D6(false, func_128(), UNK_0x09AC81E49EA267F7(3000, 3500), 0, 0);
				UNK_0x731C6942D48648D6(false, func_128(), -1, 0, 0);
				UNK_0x75ABDC5F81978924(iLocal_1324);
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_1054[iParam0]))
				{
					UNK_0x78ADC381772E3D54(iLocal_1054[iParam0], iLocal_1324);
				}
				UNK_0xF82EA857DA10E0CD(&iLocal_1324);
			}
			iLocal_1037[iParam0] = 7;
			break;
		case 7:
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_1054[iParam0]))
			{
				if (UNK_0xD1960163A3042274(iLocal_1054[iParam0], 1435919172) != 1)
				{
					UNK_0x161356BF7864C47B(iLocal_1054[iParam0], bLocal_1045, bLocal_1045, 1f, 0, -1f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
			break;
		case 8:
			if (iLocal_1044 != 4 && iLocal_1044 != 5)
			{
				func_127(bVar0);
			}
			else
			{
				func_126(bVar0);
			}
			iLocal_1037[iParam0] = 9;
			break;
		case 9:
			if (iParam0 == 0)
			{
				if (iLocal_1044 != 4)
				{
					func_125(bLocal_1313, bVar0, 1112014848 /* Float: 50f */, 1112014848 /* Float: 50f */, 1092616192 /* Float: 10f */);
				}
			}
			func_2(bVar0);
			func_100(bVar0);
			break;
	}
	if (!bLocal_1134)
	{
		if (bLocal_1158)
		{
			if (iLocal_1037[iParam0] != 6 && iLocal_1037[iParam0] != 7)
			{
				iLocal_1037[iParam0] = 6;
			}
		}
		else if (func_118(bVar0, bLocal_1313, &Local_360, &iLocal_371, 0, 0, 0, 1, 1) || func_117(bLocal_1313))
		{
			bVar5 = func_36(1116471296 /* Float: 70f */, 1);
			if (bVar5 != 0)
			{
				func_116(UNK_0x68F4C0EC296D3901(bVar5, true), 1097859072 /* Float: 15f */, 1116471296 /* Float: 70f */);
			}
			if (!func_115())
			{
				bLocal_1134 = true;
			}
		}
		else if (!bLocal_1137)
		{
			if (func_114(bVar0, 10f))
			{
				if (iLocal_1037[iParam0] != 4 && iLocal_1037[iParam0] != 5)
				{
					if (!bLocal_1135)
					{
						func_112(&Local_360, 4);
						iLocal_1037[iParam0] = 4;
					}
					else if (!func_99(bLocal_1045))
					{
						bLocal_1134 = true;
						if (!UNK_0xC844350D5D58C99A(bLocal_1046))
						{
							iLocal_1044 = 5;
						}
						iLocal_1037[iParam0] = 8;
					}
				}
			}
		}
	}
	else if (!UNK_0xEB6A8945D1AC98A1(bVar0))
	{
		if (UNK_0xC42A92762C58E1B9(bVar0, bLocal_1313, 0))
		{
			if (((!UNK_0xDF1306B443CD3D15(bLocal_1313, 0) || !UNK_0xDF1306B443CD3D15(bLocal_1312, 0)) || bLocal_1146) || !bLocal_1137)
			{
				if (iLocal_1037[iParam0] < 8)
				{
					iLocal_1037[iParam0] = 8;
				}
			}
		}
		else if (iLocal_1037[iParam0] < 8)
		{
			iLocal_1037[iParam0] = 8;
		}
	}
	func_111(bVar0, uLocal_1125[iParam0]);
}

void func_111(bool bParam0, int iParam1)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			if (UNK_0xE4EDC4B0E92C078B(iParam1))
			{
				UNK_0x142CC44DB769B57E(&iParam1);
			}
		}
	}
}

void func_112(var uParam0, int iParam1)
{
	func_113(uParam0, iParam1);
}

void func_113(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_114(bool bParam0, float fParam1)
{
	if (!bLocal_1134)
	{
		if (!func_99(bLocal_1045))
		{
			if (UNK_0xC844350D5D58C99A(bParam0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam0))
				{
					if (func_29(bParam0, 0) <= fParam1)
					{
						if (UNK_0x7069CC4DE1EA3FAA(bParam0, bLocal_1045, 120f))
						{
							if (UNK_0xF649DD3BF44195C7(bParam0, bLocal_1045, 17))
							{
								if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1251.791f, -147.043f, 42.679f, -1197.245f, -212.232f, 50.679f, 35f, 1, true, 0) && !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1259.282f, -204.172f, -60.654f, -1304.335f, -235.719f, 60.654f, 85f, 1, true, 0))
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		else if (UNK_0xC844350D5D58C99A(bParam0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bParam0))
			{
				if (UNK_0x12DE711B1C681E9E(bLocal_1045, bParam0, 5f, 5f, 1f, 0, 1, 0))
				{
					if (UNK_0x7069CC4DE1EA3FAA(bParam0, bLocal_1045, 120f))
					{
						if (UNK_0xF649DD3BF44195C7(bParam0, bLocal_1045, 17))
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

bool func_115()
{
	if (bLocal_1158 || bLocal_1159)
	{
		return true;
	}
	return false;
}

void func_116(vector3 vParam0, float fParam3, float fParam4)
{
	bool bVar0;
	float fVar1;

	if (!UNK_0xC844350D5D58C99A(bLocal_1046))
	{
		return;
	}
	if (!UNK_0xC844350D5D58C99A(bLocal_1312))
	{
		return;
	}
	if (UNK_0x437347B10A200C4B(bLocal_1312, 0) || bLocal_1188)
	{
		bLocal_1157 = true;
	}
	if (UNK_0xC844350D5D58C99A(bLocal_1046))
	{
		if (((UNK_0x54648B774DB42A3A(bLocal_1046, joaat("WEAPON_SNIPERRIFLE"), 0) || UNK_0x54648B774DB42A3A(bLocal_1046, joaat("WEAPON_HEAVYSNIPER"), 0)) || UNK_0x54648B774DB42A3A(bLocal_1046, joaat("WEAPON_REMOTESNIPER"), 0)) || UNK_0x54648B774DB42A3A(bLocal_1046, joaat("WEAPON_MARKSMANRIFLE"), 0))
		{
			bLocal_1156 = true;
			iLocal_1032 = 1;
		}
	}
	if (iLocal_371 == 4 || iLocal_371 == 8)
	{
		if (!UNK_0xDD4B920CF5E7E9EC(bLocal_1312))
		{
			fParam3 = (fParam3 * 2f);
			bVar0 = true;
		}
	}
	if (!bLocal_1134)
	{
		if ((bLocal_1156 || bLocal_1157) || bVar0)
		{
			fVar1 = func_32(UNK_0x16F2683693E537C9(), vParam0, 1);
			if (fVar1 > fParam3)
			{
				bLocal_1158 = true;
				if (fVar1 > fParam4)
				{
					bLocal_1159 = true;
				}
			}
		}
	}
}

bool func_117(bool bParam0)
{
	bool bVar0;
	float fVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
					if (UNK_0xC844350D5D58C99A(bVar0) && UNK_0xDF1306B443CD3D15(bVar0, 0))
					{
						fVar1 = UNK_0x9C66D99E63E8E24C(bVar0);
						if (fVar1 > 7f)
						{
							if (UNK_0x1B3D109B39CC2C89(bVar0, bParam0) || UNK_0xB87D13D0C064E9D1(bVar0, bParam0, 1))
							{
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

bool func_118(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x16F2683693E537C9();
	if (!UNK_0x437347B10A200C4B(bVar0, 0) && !UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (!func_124(*uParam2, 1))
		{
			if (func_123(bParam0, uParam2))
			{
				*iParam3 = 1;
				return true;
			}
		}
		if (!func_124(*uParam2, 2))
		{
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
			{
				*iParam3 = 2;
				return true;
			}
		}
		if (!func_124(*uParam2, 4))
		{
			if (func_122(bVar0, bParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return true;
			}
		}
		if (!func_124(*uParam2, 8))
		{
			if (func_121(bVar0, bParam0, uParam2))
			{
				*iParam3 = 8;
				return true;
			}
		}
		bVar1 = !func_124(*uParam2, 128);
		if (bParam4)
		{
			if (func_119(bParam0, bParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return true;
			}
		}
		else if (!func_124(*uParam2, 16))
		{
			if (func_119(bParam0, bParam1, 0, bParam6, bVar1, bParam8))
			{
				*iParam3 = 16;
				return true;
			}
		}
	}
	else if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (bParam7 && UNK_0xB87D13D0C064E9D1(bParam0, bVar0, 1))
		{
			*iParam3 = 16;
			return true;
		}
	}
	return false;
}

bool func_119(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;

	if (bParam3)
	{
		if (!bLocal_356)
		{
			iLocal_357 = UNK_0x7F6DC62EA9922664(bParam0);
			bLocal_356 = true;
		}
		iLocal_358 = UNK_0x7F6DC62EA9922664(bParam0);
		iLocal_359 = (iLocal_357 - iLocal_358);
		bVar0 = UNK_0x728870EB733D12A1();
		if (!UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0xB87D13D0C064E9D1(bParam0, bVar0, 1))
			{
				if (IntToFloat(iLocal_359) > 100f)
				{
					return true;
				}
			}
		}
		if (bLocal_356)
		{
			if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
			{
				if (IntToFloat(iLocal_359) > 100f)
				{
					return true;
				}
			}
		}
	}
	else if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
	{
		return true;
	}
	if (!bParam3)
	{
		bVar1 = UNK_0x728870EB733D12A1();
		if (!UNK_0x437347B10A200C4B(bVar1, 0))
		{
			if (UNK_0xB87D13D0C064E9D1(bParam0, bVar1, 1))
			{
				return true;
			}
		}
	}
	if (bParam4)
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			if (UNK_0x36646919F20EAFFC(bParam0))
			{
				if (UNK_0x710D117BA581D7D2(bParam0) == UNK_0x16F2683693E537C9())
				{
					return true;
				}
			}
		}
	}
	if (bParam5)
	{
		if (UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x5A91F08DF773C39D(bParam0, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (UNK_0x1A069ED4E9BDE50A(UNK_0xD803B885F5E47A62()))
				{
					return true;
				}
			}
		}
	}
	if (UNK_0xE9B814896D415EDD(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0xC021B60D52071374(bParam0))
		{
			return true;
		}
	}
	if (func_120(UNK_0x16F2683693E537C9(), bParam0))
	{
		return true;
	}
	if (bParam2)
	{
		if (UNK_0x869EFD0BC0868856(bParam0) && func_29(bParam0, 1) < 1.5f)
		{
			return true;
		}
		else if (UNK_0x405E212DDE472467(bParam0, 0))
		{
			if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), UNK_0x6937EA2286828455(bParam0, 0)))
			{
				return true;
			}
		}
		else if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), bParam0))
		{
			return true;
		}
		if (!UNK_0x437347B10A200C4B(bParam1, 0))
		{
			if (UNK_0xB87D13D0C064E9D1(bParam1, UNK_0x16F2683693E537C9(), 1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_120(bool bParam0, bool bParam1)
{
	int iVar0;

	UNK_0xCAE036C45E7FC720(bParam0, &iVar0, 1);
	if (iVar0 == joaat("WEAPON_PETROLCAN"))
	{
		if (UNK_0x168558745A6AC21E(bParam0))
		{
			if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bParam0, true), UNK_0x68F4C0EC296D3901(bParam1, true)) < 2.5f)
			{
				if (UNK_0x7069CC4DE1EA3FAA(bParam0, bParam1, 180f))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_121(bool bParam0, bool bParam1, var uParam2)
{
	if (UNK_0x03A10A5707B2BB1F(bParam0, 4))
	{
		if (UNK_0x168558745A6AC21E(bParam0) && !UNK_0x52AE17073D025311(bParam0))
		{
			if (UNK_0x5A91F08DF773C39D(bParam1, UNK_0x68F4C0EC296D3901(bParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_122(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	bool bVar3;

	bVar3 = false;
	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
	}
	if (UNK_0xD3DCEC81D13AAFB1(vVar0, 4f, true))
	{
		return true;
	}
	if (UNK_0xD15F544473A95FE8(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return true;
	}
	if (UNK_0x03A10A5707B2BB1F(bParam0, 2))
	{
		if (UNK_0x168558745A6AC21E(bParam0))
		{
			if (UNK_0x5A91F08DF773C39D(bParam1, UNK_0x68F4C0EC296D3901(bParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (UNK_0x7069CC4DE1EA3FAA(UNK_0x940C1429253D3B1B(bParam1), bParam0, 120f) && UNK_0xF649DD3BF44195C7(bParam1, bParam0, 17))
				{
					return true;
				}
			}
		}
		else
		{
			if (UNK_0x405E212DDE472467(UNK_0x940C1429253D3B1B(bParam1), 0))
			{
				bVar3 = UNK_0x6937EA2286828455(UNK_0x940C1429253D3B1B(bParam1), 0);
			}
			if (UNK_0xFB275CE013F3A38C(bParam0) || func_107(bVar3))
			{
				if (UNK_0x5A91F08DF773C39D(bParam1, UNK_0x68F4C0EC296D3901(bParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (UNK_0x7069CC4DE1EA3FAA(UNK_0x940C1429253D3B1B(bParam1), bParam0, 120f) && UNK_0xF649DD3BF44195C7(bParam1, bParam0, 17))
					{
						return true;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (UNK_0x723EE7F83DF1497D((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return true;
		}
	}
	return false;
}

bool func_123(bool bParam0, var uParam1)
{
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
		{
			if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0))
			{
				if (UNK_0x7069CC4DE1EA3FAA(bParam0, UNK_0x16F2683693E537C9(), 90f))
				{
					if (func_29(bParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = UNK_0x1C0640BA9A7327B3();
						}
						else if ((UNK_0x1C0640BA9A7327B3() - uParam1->f_1) > uParam1->f_3)
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

bool func_124(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_125(bool bParam0, bool bParam1, float fParam2, float fParam3, float fParam4)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam1))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				if (func_30(bParam1, bParam0, 0) > fParam2 && func_29(bParam1, 1) < fParam3)
				{
					if (!UNK_0xC42A92762C58E1B9(bParam1, bParam0, 0))
					{
						if (UNK_0xD1960163A3042274(bParam1, -1794415470) != 1)
						{
							UNK_0x5B1D360B9C6F0A09(bParam1, bParam0, 20000, -1, 2f, 1, 0);
						}
					}
					else if (UNK_0xD1960163A3042274(bParam1, -1273030092) != 1)
					{
						UNK_0x60274E99F9B27DEA(bParam1, bParam0, UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 6, 35f, 786469, -1f, -1f, 1);
						UNK_0x7CFA09F860B1FC00(bParam1, UNK_0x16F2683693E537C9());
					}
				}
				else if (!UNK_0xC42A92762C58E1B9(bParam1, bParam0, 0))
				{
					if (UNK_0xD1960163A3042274(bParam1, 780511057) != 1)
					{
						UNK_0x6C3AE6E278DB3D0E(bParam1, UNK_0x16F2683693E537C9(), 0, 16);
					}
				}
			}
			else if (UNK_0xC42A92762C58E1B9(bParam1, bParam0, 0))
			{
				if (func_29(bParam1, 1) > fParam4)
				{
					if (UNK_0xD1960163A3042274(bParam1, -1273030092) != 1)
					{
						UNK_0x89258193691A7600(bParam1, bParam0, UNK_0x16F2683693E537C9(), 6, 35f, 786469, -1f, -1f, 1);
						UNK_0x7CFA09F860B1FC00(bParam1, UNK_0x16F2683693E537C9());
					}
				}
				else if (UNK_0xD1960163A3042274(bParam1, 780511057) != 1)
				{
					UNK_0x6C3AE6E278DB3D0E(bParam1, UNK_0x16F2683693E537C9(), 0, 16);
				}
			}
		}
		else if (UNK_0xD1960163A3042274(bParam1, 780511057) != 1)
		{
			UNK_0x6C3AE6E278DB3D0E(bParam1, UNK_0x16F2683693E537C9(), 0, 16);
		}
	}
}

void func_126(bool bParam0)
{
	int iVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bLocal_1045) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			UNK_0xAFF39FB306F8E232(bParam0, 3, true);
		}
		UNK_0xF82EA857DA10E0CD(&iVar0);
		UNK_0xDD353D0E9C789D0E(&iVar0);
		UNK_0x75CDA8644CD3B5F5(false, 0, 256);
		UNK_0x9BE7E7B6B488CC55(false, bLocal_1045, -1, 0);
		UNK_0x75ABDC5F81978924(iVar0);
		UNK_0x78ADC381772E3D54(bParam0, iVar0);
		UNK_0xF82EA857DA10E0CD(&iVar0);
	}
}

void func_127(bool bParam0)
{
	if (!UNK_0x437347B10A200C4B(bLocal_1045, 0))
	{
		if (!UNK_0x405E212DDE472467(bLocal_1045, 0))
		{
			if (!UNK_0x437347B10A200C4B(bParam0, 0))
			{
				UNK_0xAFF39FB306F8E232(bParam0, 3, true);
			}
			UNK_0xF82EA857DA10E0CD(&iLocal_1324);
			UNK_0xDD353D0E9C789D0E(&iLocal_1324);
			UNK_0x75CDA8644CD3B5F5(false, 0, 256);
			UNK_0x6C3AE6E278DB3D0E(false, bLocal_1045, 0, 16);
			UNK_0x75ABDC5F81978924(iLocal_1324);
			if (!UNK_0x437347B10A200C4B(bParam0, 0))
			{
				UNK_0x78ADC381772E3D54(bParam0, iLocal_1324);
			}
			UNK_0xF82EA857DA10E0CD(&iLocal_1324);
		}
		else if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			if (UNK_0xD1960163A3042274(bParam0, 780511057) != 1)
			{
				UNK_0xA3BF0AA5A2608191(bParam0);
				UNK_0x6C3AE6E278DB3D0E(bParam0, bLocal_1045, 0, 16);
			}
		}
	}
}

Vector3 func_128()
{
	vector3 vVar0;
	int iVar3;

	iVar3 = (UNK_0x09AC81E49EA267F7(false, 65535) % 3);
	switch (iVar3)
	{
		case 0:
			vVar0 = { -1270.206f, -200.3586f, 40.8333f };
			break;
		case 1:
			vVar0 = { -1268.439f, -215.9683f, 59.654f };
			break;
		case 2:
			vVar0 = { -1241.558f, -239.3237f, 38.7884f };
			break;
	}
	return vVar0;
}

void func_129(bool bParam0, vector3 vParam1)
{
	if (!bLocal_1134)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			if (UNK_0x12DE711B1C681E9E(bLocal_1045, bParam0, vParam1, 0, 1, 0))
			{
				if (UNK_0x7069CC4DE1EA3FAA(bParam0, bLocal_1045, 160f))
				{
					if (UNK_0xF649DD3BF44195C7(bParam0, bLocal_1045, 17))
					{
						UNK_0x161356BF7864C47B(bParam0, bLocal_1045, bLocal_1045, 1f, 0, -1f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						iLocal_1044 = 5;
						bLocal_1134 = true;
					}
				}
			}
			else if (!UNK_0x405E212DDE472467(bParam0, 0))
			{
				if (UNK_0xD1960163A3042274(bParam0, -1207174364) != 1)
				{
					UNK_0x161356BF7864C47B(bParam0, bLocal_1045, bLocal_1045, 1f, 0, -1f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
}

void func_130(bool bParam0)
{
	int iVar0;
	vector3 vVar1;

	if (bLocal_1057 == 0)
	{
		bLocal_1057 = func_36(70f, 0);
	}
	if (!UNK_0xEB6A8945D1AC98A1(*bParam0))
	{
		if (!UNK_0x405E212DDE472467(*bParam0, 0))
		{
			if (!bLocal_1136)
			{
				if (*bParam0 == bLocal_1057)
				{
					UNK_0xF82EA857DA10E0CD(&iVar0);
					UNK_0xDD353D0E9C789D0E(&iVar0);
					UNK_0xE185F110925D87DB(false, bLocal_1045, 20000, 2f, 1f, 1073741824 /* Float: 2f */, 0);
					UNK_0xF96A174EE26D7588(false, bLocal_1045, -1);
					UNK_0x75ABDC5F81978924(iVar0);
					UNK_0x78ADC381772E3D54(*bParam0, iVar0);
					UNK_0xF82EA857DA10E0CD(&iVar0);
					bLocal_1136 = true;
					vVar1 = { UNK_0x68F4C0EC296D3901(*bParam0, true) };
				}
				else if (UNK_0xD1960163A3042274(*bParam0, 1227113341) != 1)
				{
					UNK_0xF96A174EE26D7588(*bParam0, bLocal_1045, -1);
				}
			}
			else if (*bParam0 != bLocal_1057)
			{
				if (UNK_0xD1960163A3042274(*bParam0, 1227113341) != 1)
				{
					UNK_0xF96A174EE26D7588(*bParam0, bLocal_1045, -1);
				}
			}
		}
		UNK_0x25C5402CC10F76CD(*bParam0, true);
		func_131();
	}
}

void func_131()
{
	bool bVar0;

	if (!bLocal_1138)
	{
		if (!bLocal_1149)
		{
			if (!func_28())
			{
				bVar0 = func_36(1116471296 /* Float: 70f */, 1);
				func_34(bVar0, 3, "OJAvaGUARD");
				if (func_132())
				{
					func_6(&uLocal_1364, "OJASAUD", "OJASva_CAR", 9, 0, 0, 0);
					bLocal_1138 = true;
				}
				else
				{
					func_33(&uLocal_1364, "OJASAUD", "OJASva_GTFO2", "OJASva_GTFO2_1", 9, 0, 0);
					bLocal_1138 = true;
				}
			}
		}
	}
}

bool func_132()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		if (!UNK_0x437347B10A200C4B(bLocal_1312, 0))
		{
			vVar3 = { UNK_0x68F4C0EC296D3901(bLocal_1312, true) };
		}
		fVar6 = SYSTEM::VDIST2(vVar0, vVar3);
		if (fVar6 <= 25f)
		{
			return true;
		}
	}
	return false;
}

void func_133(int iParam0)
{
	bool bVar0;

	bLocal_1135 = true;
	if (iParam0 == 0)
	{
		bVar0 = -1;
	}
	else if (iParam0 == 1)
	{
		bVar0 = false;
	}
	if (!UNK_0x437347B10A200C4B(iLocal_1054[iParam0], 0))
	{
		if (UNK_0xDF1306B443CD3D15(bLocal_1313, 0))
		{
			if (!UNK_0xC42A92762C58E1B9(iLocal_1054[iParam0], bLocal_1313, 0))
			{
				if (UNK_0xD1960163A3042274(iLocal_1054[iParam0], -1794415470) != 1)
				{
					UNK_0x5B1D360B9C6F0A09(iLocal_1054[iParam0], bLocal_1313, 20000, bVar0, 2f, 1, 0);
				}
			}
		}
	}
}

bool func_134()
{
	if (!UNK_0xEB6A8945D1AC98A1(iLocal_1054[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_1054[1]))
	{
		if (UNK_0xC42A92762C58E1B9(iLocal_1054[0], bLocal_1313, 0) && UNK_0xC42A92762C58E1B9(iLocal_1054[1], bLocal_1313, 0))
		{
			return true;
		}
	}
	return false;
}

void func_135(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (!bLocal_1134)
	{
		if (UNK_0x7DF98E52B481B6E3(vParam0, vParam3, bParam6, joaat("WEAPON_STICKYBOMB"), 0))
		{
			bLocal_1134 = true;
		}
	}
}

void func_136(int iParam0)
{
	bool bVar0;
	float fVar1;
	bool bVar2;

	bVar0 = iLocal_1050[iParam0];
	switch (iLocal_1033[iParam0])
	{
		case 0:
			if (!UNK_0xEB6A8945D1AC98A1(bVar0))
			{
				UNK_0xF82EA857DA10E0CD(&iLocal_1324);
				UNK_0xDD353D0E9C789D0E(&iLocal_1324);
				UNK_0xB87AD42E3FA06BDE(false, vLocal_1268[iParam0 /*3*/], 1f, 0, 0, 786603, -1082130432 /* Float: -1f */);
				UNK_0xE655C47E46F9A7E4(false, fLocal_1221[iParam0], 0);
				UNK_0x75ABDC5F81978924(iLocal_1324);
				UNK_0x78ADC381772E3D54(bVar0, iLocal_1324);
				UNK_0xF82EA857DA10E0CD(&iLocal_1324);
				iLocal_1033[iParam0] = 1;
			}
			break;
		case 1:
			if (UNK_0xC844350D5D58C99A(bVar0))
			{
				if (!UNK_0x437347B10A200C4B(bVar0, 0))
				{
					if (!bLocal_1169)
					{
						if (UNK_0xD1960163A3042274(bVar0, -2017877118) != 1 && UNK_0xD1960163A3042274(bVar0, 242628503) != 1)
						{
							if (UNK_0x5A91F08DF773C39D(bVar0, vLocal_1268[iParam0 /*3*/], 3f, 3f, 3f, false, true, 0))
							{
								func_144(bVar0, &(uLocal_1196[iParam0]), 1);
							}
							else
							{
								iLocal_1033[iParam0] = 0;
							}
						}
					}
				}
			}
			break;
		case 3:
			if (!func_58(&uLocal_1333))
			{
				func_56(&uLocal_1333);
				func_130(&bVar0);
				iLocal_1033[iParam0] = 2;
			}
			else if (func_52(&uLocal_1333) > fLocal_1227[iParam0] || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
			{
				func_130(&bVar0);
				iLocal_1033[iParam0] = 2;
			}
			break;
		case 2:
			if (!func_99(bLocal_1045))
			{
				bLocal_1162 = true;
				if (bLocal_1161)
				{
					iLocal_1033[iParam0] = 4;
					Jump @2050; //curOff = 422
				}
				else if (func_52(&uLocal_1333) >= 27f && bLocal_1138)
				{
					func_129(bVar0, 15f, 15f, 3f);
				}
				else if (func_52(&uLocal_1333) >= 15f)
				{
					func_142(bVar0);
				}
			}
			else
			{
				bLocal_1162 = false;
				bLocal_1135 = true;
				if (!bLocal_1155)
				{
					iLocal_1033[iParam0] = 0;
				}
				else
				{
					iLocal_1033[iParam0] = 4;
				}
			}
			break;
		case 4:
			if (!UNK_0xEB6A8945D1AC98A1(bVar0))
			{
				UNK_0x25C5402CC10F76CD(bVar0, true);
				UNK_0x9DD8618CA5BF832D(bVar0, 60, true);
			}
			if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bVar0))
				{
					if (iParam0 == 0)
					{
						UNK_0x0C8C0C840C2D1AD2(iLocal_1050[0], iLocal_1050[1], -1, 0, 2);
						if (!UNK_0xC42A92762C58E1B9(bVar0, bLocal_1312, 0))
						{
							UNK_0x5B1D360B9C6F0A09(bVar0, bLocal_1312, 30000, -1, 1f, 1, 0);
						}
					}
					else if (iParam0 == 1)
					{
						UNK_0x0C8C0C840C2D1AD2(iLocal_1050[1], iLocal_1050[0], -1, 0, 2);
						if (!UNK_0xC42A92762C58E1B9(bVar0, bLocal_1312, 0))
						{
							UNK_0x5B1D360B9C6F0A09(bVar0, bLocal_1312, 30000, false, 1f, 1, 0);
						}
					}
					else if (iParam0 == 2)
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_1313, 0))
						{
							if (!UNK_0xC42A92762C58E1B9(bVar0, bLocal_1313, 0))
							{
								UNK_0x5B1D360B9C6F0A09(bVar0, bLocal_1313, 30000, true, 1f, 1, 0);
							}
						}
					}
				}
				iLocal_1033[iParam0] = 5;
			}
			else
			{
				iLocal_1033[iParam0] = 10;
			}
			break;
		case 5:
			if (!UNK_0xEB6A8945D1AC98A1(bVar0))
			{
				UNK_0x9DD8618CA5BF832D(bVar0, 60, true);
			}
			if (!UNK_0x437347B10A200C4B(bVar0, 0))
			{
				if (UNK_0xD1960163A3042274(bVar0, 150319005) != 1)
				{
					if (iParam0 == 0)
					{
						UNK_0x0C8C0C840C2D1AD2(iLocal_1050[iParam0], iLocal_1050[1], -1, 2048, 4);
					}
					else if (iParam0 == 1)
					{
						UNK_0x0C8C0C840C2D1AD2(iLocal_1050[iParam0], iLocal_1050[0], -1, 2048, 4);
					}
				}
			}
			if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
			{
				if (!func_140())
				{
					if (bLocal_1134)
					{
						if (!UNK_0xEB6A8945D1AC98A1(bVar0))
						{
							if (UNK_0xD1960163A3042274(bVar0, 780511057) != 1)
							{
								if (func_139(iLocal_1050[0]))
								{
									UNK_0xBC43ED9FE28DB191(iLocal_1050[0]);
								}
								if (func_139(iLocal_1050[1]))
								{
									UNK_0xBC43ED9FE28DB191(iLocal_1050[1]);
								}
								UNK_0x6C3AE6E278DB3D0E(bVar0, bLocal_1045, 0, 16);
							}
						}
					}
				}
				else
				{
					iLocal_1033[iParam0] = 6;
				}
			}
			else
			{
				iLocal_1033[iParam0] = 10;
			}
			if (bLocal_1150)
			{
				if (iLocal_1033[iParam0] != 10 && iLocal_1033[iParam0] != 11)
				{
					iLocal_1033[iParam0] = 10;
				}
			}
			break;
		case 6:
			if (!bLocal_1134)
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
				{
					if (UNK_0xA30B8362589C124A(bLocal_1312, -1, 0) == bVar0)
					{
						if (!UNK_0xEB6A8945D1AC98A1(bVar0))
						{
							UNK_0x56FDC9ADE35F7DB0(bLocal_1312, true, true, 0);
							if (func_138())
							{
								UNK_0x1B901F542DF070CF(bVar0, bLocal_1312, "OJASva_101a", 181, 0, 16, -1, 10f, 0, 1073741824 /* Float: 2f */);
							}
							else
							{
								UNK_0x1B901F542DF070CF(bVar0, bLocal_1312, "OJASva_101", 181, 0, 0, -1, -1082130432, 0, 1073741824 /* Float: 2f */);
							}
						}
					}
					iLocal_1033[iParam0] = 7;
				}
			}
			else
			{
				if (func_139(iLocal_1050[0]))
				{
					UNK_0xBC43ED9FE28DB191(iLocal_1050[0]);
				}
				if (func_139(iLocal_1050[1]))
				{
					UNK_0xBC43ED9FE28DB191(iLocal_1050[1]);
				}
				iLocal_1033[iParam0] = 7;
			}
			break;
		case 7:
			if (bLocal_1134)
			{
				if ((UNK_0xDF1306B443CD3D15(bLocal_1312, 0) && UNK_0xA30B8362589C124A(bLocal_1312, -1, 0) == bVar0) && UNK_0xA30B8362589C124A(bLocal_1312, true, 0) == bLocal_1046)
				{
					if (!UNK_0xEB6A8945D1AC98A1(bVar0))
					{
						if (bLocal_1149 || (bLocal_1163 && !UNK_0xDD4B920CF5E7E9EC(bLocal_1312)))
						{
							UNK_0xA3BF0AA5A2608191(bVar0);
							if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
							{
								if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
								{
									if (UNK_0xD1960163A3042274(bVar0, -1273030092) != 1)
									{
										UNK_0x60274E99F9B27DEA(bVar0, bLocal_1312, UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 8, 35f, 786469, -1f, -1f, 1);
									}
								}
								else if (UNK_0xD1960163A3042274(bVar0, -1273030092) != 1)
								{
									UNK_0x89258193691A7600(bVar0, bLocal_1312, UNK_0x16F2683693E537C9(), 8, 35f, 786469, -1f, -1f, 1);
								}
							}
						}
					}
				}
				else if (!UNK_0xEB6A8945D1AC98A1(bVar0))
				{
					if (UNK_0xD1960163A3042274(bVar0, 780511057) != 1)
					{
						UNK_0x6C3AE6E278DB3D0E(bVar0, bLocal_1045, 0, 16);
					}
				}
			}
			else if (bLocal_1149 || (bLocal_1163 && !UNK_0xDD4B920CF5E7E9EC(bLocal_1312)))
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
				{
					if (UNK_0xA30B8362589C124A(bLocal_1312, -1, 0) == bVar0)
					{
						if (!UNK_0x437347B10A200C4B(bVar0, 0))
						{
							if (UNK_0xD1960163A3042274(bVar0, -1273030092) != 1)
							{
								UNK_0x132B85BCE016BCA0(bVar0, bLocal_1312, vLocal_1290, 8, 25f, 786603, -1f, -1f, 1);
							}
						}
					}
				}
			}
			break;
		case 8:
			if (bLocal_1159)
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_1324);
				UNK_0x75CDA8644CD3B5F5(false, 0, 0);
				UNK_0xDBE4EC9C88839074(false, func_128(), UNK_0x09AC81E49EA267F7(1000, 1500), 2048, 4);
				UNK_0xE185F110925D87DB(false, UNK_0x16F2683693E537C9(), UNK_0x09AC81E49EA267F7(15000, 16000), 30f, 1f, 1073741824 /* Float: 2f */, 0);
				UNK_0x490C8E35C60821B9(0, UNK_0x16F2683693E537C9(), func_128(), 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				UNK_0x75ABDC5F81978924(iLocal_1324);
				if (!UNK_0x437347B10A200C4B(iLocal_1050[iParam0], 0))
				{
					UNK_0x78ADC381772E3D54(iLocal_1050[iParam0], iLocal_1324);
				}
				UNK_0xF82EA857DA10E0CD(&iLocal_1324);
			}
			else
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_1324);
				UNK_0x75CDA8644CD3B5F5(false, 0, 0);
				UNK_0x731C6942D48648D6(false, func_128(), UNK_0x09AC81E49EA267F7(3000, 3500), 1, 0);
				UNK_0x490C8E35C60821B9(0, UNK_0x16F2683693E537C9(), func_128(), 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				UNK_0x75ABDC5F81978924(iLocal_1324);
				if (!UNK_0x437347B10A200C4B(iLocal_1050[iParam0], 0))
				{
					UNK_0x78ADC381772E3D54(iLocal_1050[iParam0], iLocal_1324);
				}
				UNK_0xF82EA857DA10E0CD(&iLocal_1324);
			}
			iLocal_1033[iParam0] = 9;
			break;
		case 9:
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_1050[iParam0]))
			{
				if (UNK_0xD1960163A3042274(iLocal_1050[iParam0], 1435919172) != 1)
				{
					UNK_0x161356BF7864C47B(iLocal_1050[iParam0], bLocal_1045, bLocal_1045, 1f, 0, -1f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
			break;
		case 10:
			if (iLocal_1044 == 4 || iLocal_1044 == 5)
			{
				func_126(bVar0);
			}
			else if (iLocal_1044 != 8)
			{
				func_127(bVar0);
				iLocal_1033[iParam0] = 11;
			}
			break;
		case 11:
			if (iParam0 == 0)
			{
				func_125(bLocal_1312, bVar0, 1112014848 /* Float: 50f */, 1112014848 /* Float: 50f */, 1092616192 /* Float: 10f */);
			}
			func_2(bVar0);
			func_100(bVar0);
			break;
	}
	if (iLocal_1031 < 10)
	{
		fVar1 = 5f;
	}
	else
	{
		fVar1 = fLocal_1234;
	}
	if (!bLocal_1134)
	{
		if (bLocal_1158)
		{
			if (iLocal_1033[iParam0] != 8 && iLocal_1033[iParam0] != 9)
			{
				iLocal_1033[iParam0] = 8;
			}
		}
		else if (func_137(bVar0))
		{
			bVar2 = func_36(1116471296 /* Float: 70f */, 1);
			if (bVar2 != 0)
			{
				func_116(UNK_0x68F4C0EC296D3901(bVar2, true), 1097859072 /* Float: 15f */, 1116471296 /* Float: 70f */);
			}
			if (!func_115())
			{
				bLocal_1134 = true;
			}
		}
		else if (!bLocal_1137)
		{
			if (func_114(bVar0, fVar1))
			{
				if ((iLocal_1033[iParam0] != 3 && iLocal_1033[iParam0] != 2) && !bLocal_1161)
				{
					if (!bLocal_1135)
					{
						func_112(&Local_360, 4);
						iLocal_1033[iParam0] = 3;
					}
					else if (!func_99(bLocal_1045))
					{
						bLocal_1134 = true;
						if (!UNK_0xC844350D5D58C99A(bLocal_1046))
						{
							iLocal_1044 = 5;
						}
					}
				}
			}
		}
	}
	else if ((iLocal_1033[iParam0] != 10 && iLocal_1033[iParam0] != 11) && iLocal_1033[iParam0] != 7)
	{
		iLocal_1033[iParam0] = 10;
	}
	func_111(bVar0, uLocal_1121[iParam0]);
}

bool func_137(bool bParam0)
{
	bool bVar0;

	if (!bLocal_1134)
	{
		if (UNK_0xC844350D5D58C99A(bParam0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bParam0))
			{
				if (UNK_0x405E212DDE472467(bParam0, 0))
				{
					bVar0 = UNK_0x6937EA2286828455(bParam0, 0);
				}
				else
				{
					bVar0 = false;
				}
			}
			if (func_118(bParam0, bVar0, &Local_360, &iLocal_371, 0, 0, 0, 1, 1) || (UNK_0x869EFD0BC0868856(bParam0) && func_29(bParam0, 1) < 1.5f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_138()
{
	int iVar0;
	int iVar1[10];

	iLocal_1212 = UNK_0xA361D247A75E0128(UNK_0x16F2683693E537C9(), &iVar1);
	iLocal_1212 = iLocal_1212;
	iLocal_1212 = iVar1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (UNK_0xC844350D5D58C99A(iVar1[iVar0]) && !UNK_0x437347B10A200C4B(iVar1[iVar0], 0))
		{
			if (UNK_0x3D1053F9EB43B7AD(iVar1[iVar0], -1218.844f, -278.623f, 36.8196f, -1248.403f, -225.8467f, 43.15606f, 8.5f, 0, true, 0))
			{
				iLocal_1211++;
			}
		}
		iVar0++;
	}
	if (iLocal_1211 >= 1)
	{
		bLocal_1163 = true;
		return true;
	}
	return false;
}

bool func_139(bool bParam0)
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

bool func_140()
{
	if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_1046))
		{
			if (!bLocal_1134)
			{
				if (UNK_0xC42A92762C58E1B9(bLocal_1046, bLocal_1312, 0) && func_141())
				{
					return true;
				}
			}
			else if (UNK_0xC42A92762C58E1B9(bLocal_1046, bLocal_1312, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_141()
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_1047[iVar0]))
		{
			if (!UNK_0x405E212DDE472467(iLocal_1047[iVar0], 0))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_142(bool bParam0)
{
	switch (iLocal_1208)
	{
		case 0:
			if (!UNK_0x437347B10A200C4B(bParam0, 0))
			{
				if (UNK_0xD1960163A3042274(bParam0, 1630799643) != 1)
				{
					UNK_0x9BE7E7B6B488CC55(bParam0, UNK_0x16F2683693E537C9(), -1, 0);
				}
				func_34(bParam0, 3, "OJAvaGUARD");
				func_6(&uLocal_1364, "OJASAUD", "OJASva_FWARN", 9, 0, 0, 0);
				bLocal_1138 = true;
				iLocal_1208 = 1;
			}
			break;
		case 1:
			func_143(bParam0);
			break;
	}
}

void func_143(bool bParam0)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (func_29(bParam0, 1) < 5f)
		{
			if (UNK_0xD1960163A3042274(bParam0, -1207174364) != 1 && UNK_0xD1960163A3042274(bParam0, 1630799643) != 1)
			{
				UNK_0x9BE7E7B6B488CC55(bParam0, bLocal_1045, -1, 0);
			}
		}
		else if (UNK_0xD1960163A3042274(bParam0, -1207174364) != 1)
		{
			if (bParam0 == bLocal_1057)
			{
				UNK_0x161356BF7864C47B(bParam0, bLocal_1045, bLocal_1045, 1f, 0, -1f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
			}
			else if (UNK_0xD1960163A3042274(bParam0, 1630799643) != 1)
			{
				UNK_0x9BE7E7B6B488CC55(bParam0, bLocal_1045, -1, 0);
			}
		}
	}
}

void func_144(bool bParam0, var uParam1, bool bParam2)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (bParam2)
		{
			func_145(bParam0, uParam1);
		}
	}
}

void func_145(bool bParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_146(0, 3, *uParam1);
	if (iVar0 == 0)
	{
		UNK_0xC6EB89C59F2AF6B8(bParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_a", 8f, -8f, -1, 1, UNK_0x79833B02DBD2A244(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 1)
	{
		UNK_0xC6EB89C59F2AF6B8(bParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_b", 8f, -8f, -1, 1, UNK_0x79833B02DBD2A244(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 2)
	{
		UNK_0xC6EB89C59F2AF6B8(bParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_fold_arms", 8f, -8f, -1, 1, UNK_0x79833B02DBD2A244(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 3)
	{
		UNK_0xC6EB89C59F2AF6B8(bParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_look", 8f, -8f, -1, 1, UNK_0x79833B02DBD2A244(0f, 1f), 1, 0, 0);
	}
	*uParam1 = iVar0;
}

int func_146(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (bParam0 == bParam1)
	{
		return 0;
	}
	iVar0 = UNK_0x09AC81E49EA267F7(bParam0, bParam1);
	while (iVar0 == iParam2 || iVar1 < 50)
	{
		iVar1++;
		iVar0 = UNK_0x09AC81E49EA267F7(bParam0, bParam1);
	}
	return iVar0;
}

void func_147(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;

	if (!UNK_0xC844350D5D58C99A(iLocal_1047[iParam0]))
	{
		return;
	}
	switch (iLocal_1041[iParam0])
	{
		case 0:
			if (!UNK_0x437347B10A200C4B(bLocal_1046, 0))
			{
				if (!UNK_0x405E212DDE472467(bLocal_1046, 0))
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_1047[iParam0]))
					{
						if (iParam0 == 0)
						{
							UNK_0xA8CC11FF8D2962D4(iLocal_1047[iParam0], bLocal_1046, 1.5f, 0f, 0f, 1f, -1, 1036831949 /* Float: 0.1f */, 1);
						}
						else if (iParam0 == 1)
						{
							if (UNK_0xDF1306B443CD3D15(bLocal_1313, 0))
							{
								UNK_0xDD353D0E9C789D0E(&iVar2);
								UNK_0xB87AD42E3FA06BDE(false, -1222.992f, -191.0932f, 38.17538f, 1f, 0, 0, 786603, -1082130432 /* Float: -1f */);
								UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_GUARD_STAND", 0, 0);
								UNK_0x5B1D360B9C6F0A09(false, bLocal_1313, 30000, 2, 1f, 1, 0);
								UNK_0x75ABDC5F81978924(iVar2);
								UNK_0x78ADC381772E3D54(iLocal_1047[iParam0], iVar2);
								UNK_0xF82EA857DA10E0CD(&iVar2);
							}
						}
						iLocal_1041[iParam0] = 1;
					}
				}
			}
			break;
		case 1:
			if (iParam0 == 0)
			{
				bVar0 = bLocal_1312;
				bVar1 = 2;
			}
			else if (iParam0 == 1)
			{
				bVar0 = bLocal_1313;
				bVar1 = 2;
			}
			if (!UNK_0x437347B10A200C4B(iLocal_1047[iParam0], 0))
			{
				if (UNK_0xDF1306B443CD3D15(bVar0, 0))
				{
					if (!UNK_0x437347B10A200C4B(iLocal_1047[iParam0], 0))
					{
						if (!UNK_0xC42A92762C58E1B9(iLocal_1047[iParam0], bVar0, 0))
						{
							if (UNK_0x405E212DDE472467(bLocal_1046, 0))
							{
								if (UNK_0xD1960163A3042274(iLocal_1047[iParam0], -1794415470) != 1)
								{
									UNK_0x5B1D360B9C6F0A09(iLocal_1047[iParam0], bVar0, 30000, bVar1, 1f, 1, 0);
								}
							}
						}
						else
						{
							iLocal_1041[iParam0] = 2;
						}
					}
				}
			}
			break;
		case 2:
			if (iParam0 == 0)
			{
				bVar0 = bLocal_1312;
			}
			else if (iParam0 == 1)
			{
				bVar0 = bLocal_1313;
			}
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (!UNK_0x437347B10A200C4B(iLocal_1047[iParam0], 0))
				{
					if (UNK_0xC42A92762C58E1B9(iLocal_1047[iParam0], bVar0, 0) && UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
					{
						if (bLocal_1134)
						{
							if (!bLocal_1164)
							{
								if (UNK_0xD1960163A3042274(iLocal_1047[iParam0], 780511057) != 1)
								{
									if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
									{
										if (UNK_0x9C66D99E63E8E24C(bVar0) < 5f)
										{
											iLocal_1041[iParam0] = 5;
										}
									}
									UNK_0x6C3AE6E278DB3D0E(iLocal_1047[iParam0], UNK_0x16F2683693E537C9(), 0, 16);
								}
							}
							else if (UNK_0xD1960163A3042274(iLocal_1047[iParam0], 780511057) != 1)
							{
								UNK_0x6C3AE6E278DB3D0E(iLocal_1047[iParam0], UNK_0x16F2683693E537C9(), 0, 16);
							}
						}
					}
					else if (!bLocal_1158)
					{
						iLocal_1041[iParam0] = 5;
					}
				}
			}
			break;
		case 3:
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_1047[iParam0]))
			{
				if (UNK_0xACCBB8E1BDF4D6BE(iLocal_1047[iParam0]))
				{
					UNK_0x2ECF845953E95D1B(iLocal_1047[iParam0]);
				}
			}
			if (bLocal_1159)
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_1324);
				UNK_0x75CDA8644CD3B5F5(false, 0, 0);
				UNK_0xDBE4EC9C88839074(false, func_128(), UNK_0x09AC81E49EA267F7(2000, 2500), 2048, 4);
				UNK_0xE185F110925D87DB(false, UNK_0x16F2683693E537C9(), UNK_0x09AC81E49EA267F7(15000, 16000), 30f, 1f, 1073741824 /* Float: 2f */, 0);
				UNK_0x490C8E35C60821B9(0, UNK_0x16F2683693E537C9(), func_128(), 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				UNK_0x75ABDC5F81978924(iLocal_1324);
				UNK_0x78ADC381772E3D54(iLocal_1047[iParam0], iLocal_1324);
				UNK_0xF82EA857DA10E0CD(&iLocal_1324);
			}
			else if (!UNK_0xEB6A8945D1AC98A1(iLocal_1047[iParam0]))
			{
				UNK_0xED253B8DDB3FFB77(iLocal_1047[iParam0], vLocal_1305, 15f, 0, 0);
				UNK_0x3CC33E4E9CE523F4(iLocal_1047[iParam0], 1);
				UNK_0xAFF39FB306F8E232(iLocal_1047[iParam0], 0, true);
				UNK_0xCAF7AE54F764D5AA(iLocal_1047[iParam0], 2f);
				if (!bLocal_1131 && !UNK_0x405E212DDE472467(iLocal_1047[iParam0], 0))
				{
					UNK_0xDD353D0E9C789D0E(&iLocal_1324);
					if (UNK_0xEB6A8945D1AC98A1(bLocal_1046))
					{
						UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1250, 0, false, 0, 0, 0);
						UNK_0x731C6942D48648D6(false, func_128(), 3000, 0, 1);
						UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), -1, 0);
					}
					else
					{
						UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 700, 0, false, 0, 0, 0);
						UNK_0xA8CC11FF8D2962D4(false, bLocal_1046, 1.5f, 0f, 0f, 2f, -1, 1036831949 /* Float: 0.1f */, 1);
					}
					UNK_0x75ABDC5F81978924(iLocal_1324);
					bLocal_1131 = true;
				}
				else
				{
					if (UNK_0xC844350D5D58C99A(bLocal_1312) && UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
					{
						vVar4 = { UNK_0xBF584557291FDD31(bLocal_1312, UNK_0xF653B9B22DA806A9(bLocal_1312, "wheel_lr")) };
						vVar7 = { UNK_0x68F4C0EC296D3901(bLocal_1312, true) };
						vVar7 = { vVar4 - vVar7 };
						UNK_0x5BCC146C60688877(iLocal_1047[iParam0], bLocal_1312, vVar7, 1.5f, 0);
					}
					UNK_0xDD353D0E9C789D0E(&iLocal_1324);
					UNK_0x75CDA8644CD3B5F5(false, 0, 0);
					if (UNK_0xEB6A8945D1AC98A1(bLocal_1046) && !func_50(func_148(), vVar4, 0))
					{
						UNK_0x4AA5B7135D59B3E5(false, vVar4, func_128(), 2f, false, 0.5f, 4f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						UNK_0xA1B2E0ACC3ED5113(false, vVar4, -1, 0, 0.25f, false, 0, 0, 1);
					}
					else
					{
						UNK_0x731C6942D48648D6(false, func_128(), 1500, 1, 0);
						if (!UNK_0x437347B10A200C4B(bLocal_1046, 0))
						{
							UNK_0xA8CC11FF8D2962D4(false, bLocal_1046, 0f, -1.5f, 0f, 2f, -1, 1036831949 /* Float: 0.1f */, 1);
						}
					}
					UNK_0x75ABDC5F81978924(iLocal_1324);
				}
				if (!UNK_0x437347B10A200C4B(iLocal_1047[iParam0], 0))
				{
					UNK_0x78ADC381772E3D54(iLocal_1047[iParam0], iLocal_1324);
				}
				UNK_0xF82EA857DA10E0CD(&iLocal_1324);
			}
			iLocal_1041[iParam0] = 4;
			break;
		case 4:
			if (!UNK_0x437347B10A200C4B(iLocal_1047[iParam0], 0))
			{
				if (UNK_0xB4ECF989E2C1DAC8(iLocal_1047[iParam0], "oddjobs@assassinate@hotel@", "enter", 3))
				{
					fVar3 = UNK_0x8CA9406E01C7EE58(iLocal_1047[iParam0], "oddjobs@assassinate@hotel@", "enter");
					if (fVar3 < 0.5f)
					{
						UNK_0x8352CA08CF578D18(iLocal_1047[iParam0], "oddjobs@assassinate@hotel@", "enter", 3.5f);
					}
					else
					{
						UNK_0x8352CA08CF578D18(iLocal_1047[iParam0], "oddjobs@assassinate@hotel@", "enter", 1f);
					}
				}
			}
			break;
		case 5:
			if (iParam0 == 0)
			{
				bVar0 = bLocal_1312;
			}
			else if (iParam0 == 1)
			{
				bVar0 = bLocal_1313;
			}
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_1046))
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_1047[iParam0]))
				{
					if (UNK_0x405E212DDE472467(bLocal_1046, 0))
					{
						UNK_0x6C3AE6E278DB3D0E(iLocal_1047[iParam0], bLocal_1045, 0, 16);
					}
					else
					{
						UNK_0x161356BF7864C47B(iLocal_1047[iParam0], bLocal_1046, UNK_0x16F2683693E537C9(), 3f, 1, 0.005f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
				}
				iLocal_1041[iParam0] = 6;
			}
			else if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (UNK_0x9C66D99E63E8E24C(bVar0) < 5f)
				{
					func_127(iLocal_1047[iParam0]);
					iLocal_1041[iParam0] = 6;
				}
				else if (UNK_0xD1960163A3042274(iLocal_1047[iParam0], 780511057) != 1)
				{
					UNK_0x6C3AE6E278DB3D0E(iLocal_1047[iParam0], bLocal_1045, 0, 16);
				}
			}
			else
			{
				func_127(iLocal_1047[iParam0]);
				iLocal_1041[iParam0] = 6;
			}
			break;
		case 6:
			func_2(iLocal_1047[iParam0]);
			func_100(iLocal_1047[iParam0]);
			break;
	}
	if (!bLocal_1134)
	{
		if (bLocal_1158)
		{
			if (iLocal_1041[iParam0] != 3 && iLocal_1041[iParam0] != 4)
			{
				iLocal_1041[iParam0] = 3;
			}
		}
		else if (func_137(iLocal_1047[iParam0]))
		{
			bLocal_1134 = true;
		}
	}
	else if (iLocal_1041[iParam0] < 5)
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_1047[iParam0]))
		{
			if (UNK_0xACCBB8E1BDF4D6BE(iLocal_1047[iParam0]))
			{
				UNK_0x2ECF845953E95D1B(iLocal_1047[iParam0]);
			}
			UNK_0xC62B2934118B4E1A(iLocal_1047[iParam0]);
			UNK_0x3CC33E4E9CE523F4(iLocal_1047[iParam0], 2);
			UNK_0xAFF39FB306F8E232(iLocal_1047[iParam0], 13, true);
		}
		iLocal_1041[iParam0] = 5;
	}
}

Vector3 func_148()
{
	vector3 vVar0;

	return vVar0;
}

int func_149(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
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

void func_150()
{
	int iVar0;
	bool bVar1;

	if (UNK_0xC844350D5D58C99A(bLocal_1046))
	{
		vLocal_1305 = { UNK_0x68F4C0EC296D3901(bLocal_1046, false) };
	}
	switch (iLocal_1040)
	{
		case 0:
			if (!UNK_0x437347B10A200C4B(bLocal_1046, 0))
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0) && !UNK_0x437347B10A200C4B(iLocal_1050[0], 0))
				{
					if (!UNK_0xC42A92762C58E1B9(bLocal_1046, bLocal_1312, 0))
					{
						if (UNK_0xD1960163A3042274(bLocal_1046, -1794415470) != 1)
						{
							if (!bLocal_1134 && !bLocal_1158)
							{
								UNK_0x5B1D360B9C6F0A09(bLocal_1046, bLocal_1312, 30000, true, 1f, 1, 0);
							}
							else
							{
								UNK_0x5B1D360B9C6F0A09(bLocal_1046, bLocal_1312, 30000, true, 2f, 1, 0);
							}
							if (!func_58(&uLocal_1342))
							{
								func_55(&uLocal_1342);
							}
							else
							{
								func_56(&uLocal_1342);
							}
						}
						if (!bLocal_1160)
						{
							if (func_58(&uLocal_1342))
							{
								if (func_52(&uLocal_1342) > 3.5f)
								{
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_1046))
									{
										func_35(&uLocal_1364, 4, bLocal_1046, "OJAva_TARGET", 0, 1);
										if (func_6(&uLocal_1364, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
										{
											bLocal_1160 = true;
										}
									}
								}
							}
						}
						if (func_153(bLocal_1046))
						{
							func_3();
							iLocal_1040 = 4;
						}
					}
					else
					{
						bLocal_1137 = true;
						iLocal_1040 = 1;
					}
				}
				else
				{
					iLocal_1040 = 4;
				}
			}
			break;
		case 1:
			if (!bLocal_1160)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_1046))
				{
					func_35(&uLocal_1364, 4, bLocal_1046, "OJAva_TARGET", 0, 1);
					if (func_6(&uLocal_1364, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
					{
						bLocal_1160 = true;
					}
				}
			}
			if (!bLocal_1179)
			{
				if (func_152())
				{
					if (func_30(bLocal_1046, UNK_0x16F2683693E537C9(), 1) <= 5f && !func_28())
					{
						if (func_36(25f, 1) == 0)
						{
							if (func_151())
							{
								bLocal_1179 = true;
							}
						}
					}
				}
			}
			break;
		case 4:
			if (!UNK_0x437347B10A200C4B(bLocal_1046, 0))
			{
				if (UNK_0xC42A92762C58E1B9(bLocal_1046, bLocal_1312, 0))
				{
					if (UNK_0xD1960163A3042274(bLocal_1046, -828834893) != 1)
					{
						UNK_0x75CDA8644CD3B5F5(bLocal_1046, 0, 256);
					}
				}
				else if (!bLocal_1164)
				{
					UNK_0xCAF7AE54F764D5AA(bLocal_1046, 2f);
					UNK_0xF82EA857DA10E0CD(&iVar0);
					UNK_0xDD353D0E9C789D0E(&iVar0);
					UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, false, 0, 0, 0);
					UNK_0xF3268524E9BE6D6E(false, bLocal_1045, 200f, -1, 0, 0);
					UNK_0x75ABDC5F81978924(iVar0);
					if (!UNK_0x437347B10A200C4B(bLocal_1046, 0))
					{
						UNK_0x78ADC381772E3D54(bLocal_1046, iVar0);
					}
					UNK_0xF82EA857DA10E0CD(&iVar0);
					bLocal_1164 = true;
				}
				else if (UNK_0xD1960163A3042274(bLocal_1046, 1435919172) != 1)
				{
					UNK_0xF3268524E9BE6D6E(bLocal_1046, bLocal_1045, 200f, -1, 0, 0);
				}
				if (!bLocal_1179)
				{
					if (!func_28() && !UNK_0xD17F06053799A7CA())
					{
						func_6(&uLocal_1364, "OJASAUD", "OJASva_TARG2", 9, 0, 0, 0);
						bLocal_1179 = true;
					}
				}
			}
			break;
	}
	if (!bLocal_1134)
	{
		if (bLocal_1158)
		{
		}
		else if (func_137(bLocal_1046) || bLocal_1188)
		{
			bVar1 = func_36(1116471296 /* Float: 70f */, 1);
			if (bVar1 != 0)
			{
				func_116(UNK_0x68F4C0EC296D3901(bVar1, true), 1097859072 /* Float: 15f */, 1116471296 /* Float: 70f */);
			}
			if (!func_115())
			{
				bLocal_1134 = true;
			}
		}
	}
}

bool func_151()
{
	switch (iLocal_1214)
	{
		case 0:
			if (!func_28())
			{
				func_33(&uLocal_1364, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_1", 8, 0, 0);
				func_56(&uLocal_1342);
				iLocal_1214++;
			}
			break;
		case 1:
			if (!func_28() && func_52(&uLocal_1342) > 7f)
			{
				func_33(&uLocal_1364, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_2", 8, 0, 0);
				func_56(&uLocal_1342);
				iLocal_1214++;
			}
			break;
		case 2:
			if (!func_28() && func_52(&uLocal_1342) > 8f)
			{
				func_33(&uLocal_1364, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_3", 8, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

bool func_152()
{
	bool bVar0;

	if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
	{
		bVar0 = UNK_0xA30B8362589C124A(bLocal_1312, -1, 0);
		if (bVar0 == 0 || (bVar0 != 0 && UNK_0xEB6A8945D1AC98A1(bVar0)))
		{
			bVar0 = UNK_0xA30B8362589C124A(bLocal_1312, false, 0);
			if (bVar0 == 0 || (bVar0 != 0 && UNK_0xEB6A8945D1AC98A1(bVar0)))
			{
				bVar0 = UNK_0xA30B8362589C124A(bLocal_1312, 2, 0);
				if (bVar0 == 0 || (bVar0 != 0 && UNK_0xEB6A8945D1AC98A1(bVar0)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_153(bool bParam0)
{
	int iVar0;

	if ((bLocal_1134 || bLocal_1158) || bLocal_1159)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			if (func_28())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!UNK_0x405E212DDE472467(bParam0, 0))
			{
				if (!bLocal_1164)
				{
					UNK_0xF82EA857DA10E0CD(&iVar0);
					UNK_0xDD353D0E9C789D0E(&iVar0);
					UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, false, 0, 0, 0);
					UNK_0xF3268524E9BE6D6E(false, bLocal_1045, 200f, -1, 0, 0);
					UNK_0x75ABDC5F81978924(iVar0);
					if (!UNK_0x437347B10A200C4B(bLocal_1046, 0))
					{
						UNK_0x78ADC381772E3D54(bLocal_1046, iVar0);
					}
					UNK_0xF82EA857DA10E0CD(&iVar0);
					bLocal_1164 = true;
					return true;
				}
			}
		}
	}
	return false;
}

void func_154()
{
	if (!bLocal_1165)
	{
		if (iLocal_1031 > 15)
		{
			UNK_0xC92DB9682A650680("ASS1_ALERT");
			bLocal_1165 = true;
		}
	}
	if (!bLocal_1166)
	{
		if (bLocal_1134 && !func_28())
		{
			func_453();
			bLocal_1166 = true;
			if (!bLocal_1165)
			{
				UNK_0xC92DB9682A650680("ASS1_ALERT");
				bLocal_1165 = true;
			}
		}
	}
	func_452();
	switch (iLocal_1031)
	{
		case 3:
			if (func_525())
			{
				iLocal_1031 = 4;
			}
			else
			{
				func_451();
				func_449();
				Jump @541; //curOff = 208
				if (func_525())
				{
					if (func_524())
					{
						bLocal_1153 = true;
					}
					bLocal_1142 = true;
				}
				func_448();
				func_447();
				func_446();
				func_445(1);
				func_444();
				func_533(&Local_360, 2);
				iLocal_1031 = 5;
				Jump @541; //curOff = 269
				if (func_443())
				{
					iLocal_1031 = 6;
				}
				Jump @541; //curOff = 283
				func_442();
				func_441();
				if (bLocal_1142)
				{
					if (Global_111638.f_19958.f_5 != 0f)
					{
						func_57(&uLocal_1336, Global_111638.f_19958.f_5);
					}
					iLocal_1209 = func_519();
					if (Global_92921)
					{
						if (iLocal_1209 <= 2)
						{
							iLocal_1209++;
						}
					}
					if (iLocal_1209 == 0)
					{
						func_440();
					}
					else if (iLocal_1209 == 1)
					{
						func_439();
					}
					else if (iLocal_1209 == 2)
					{
						func_435();
					}
				}
				else
				{
					if (!func_58(&uLocal_1336))
					{
						func_55(&uLocal_1336);
						Global_111638.f_19958.f_5 = 0f;
					}
					iLocal_1031 = 7;
				}
				Jump @541; //curOff = 433
				func_429();
				func_414();
				Jump @541; //curOff = 444
				func_380();
				Jump @541; //curOff = 451
				func_429();
				func_379();
				func_288();
				Jump @541; //curOff = 466
				func_379();
				func_284();
				Jump @541; //curOff = 477
				func_270();
				func_269();
				Jump @541; //curOff = 488
				func_268();
				func_269();
				Jump @541; //curOff = 499
				func_264();
				func_269();
				Jump @541; //curOff = 510
				func_262();
				Jump @541; //curOff = 517
				func_259();
				Jump @541; //curOff = 524
				func_253();
				Jump @541; //curOff = 531
				func_155();
			}
			default:
				break;
	}
}

void func_155()
{
	UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
	func_156();
}

void func_156()
{
	func_252();
	switch (iLocal_1215)
	{
		case 0:
			if (!bLocal_377)
			{
				if (iLocal_1032 == 1)
				{
					bLocal_375 = true;
					func_251();
				}
				Global_111638.f_19958.f_5 = func_52(&uLocal_1336);
				fLocal_372 = Global_111638.f_19958.f_5;
				func_244();
				bLocal_377 = true;
				iLocal_1215 = 1;
			}
			break;
		case 1:
			if (!bLocal_1187)
			{
				UNK_0x3D0B5872F36FB05C("FRANKLIN_BIG_01");
				bLocal_1187 = true;
			}
			if (func_240(&uLocal_388, 1, 0) && UNK_0x96871D785000ACAF())
			{
				func_239(&uLocal_1541, 0, 0, 0, 1);
				func_238(&uLocal_1541, "ASS_VA_CONT", 2, 215, 1, 1, 0);
				func_238(&uLocal_1541, "ES_XPAND", 2, 216, 1, 1, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_1215 = 2;
			}
			break;
		case 2:
			if (func_211(&uLocal_388, 0, 1065353216 /* Float: 1f */, 0, 0, 0))
			{
				bLocal_1185 = true;
			}
			if (!bLocal_1185)
			{
				func_203(&uLocal_1541, 1128792064 /* Float: 200f */, 1, 0, 1, 1065353216 /* Float: 1f */);
			}
			if (UNK_0xBFC0798A6E3417F9(2, 215) || UNK_0xD245978525608929(2, 200))
			{
				if (!bLocal_1185)
				{
					bLocal_1185 = true;
					func_202(&uLocal_388);
				}
			}
			if (bLocal_1185)
			{
				if (func_211(&uLocal_388, 0, 1065353216 /* Float: 1f */, 0, 0, 0))
				{
					func_200(&uLocal_388);
					Global_111638.f_19958++;
					func_199();
					func_161(Local_57);
					func_159(0, 0);
					func_157();
					func_526();
				}
			}
			break;
	}
}

void func_157()
{
	func_158();
}

int func_158()
{
	if (func_46(0))
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

void func_159(bool bParam0, int iParam1)
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
		if ((func_46(0) && Global_76868.f_1 == 1) && func_160(Global_76868))
		{
		}
		else
		{
			Global_61512 = 1;
		}
	}
	if (Global_111638.f_9080 || func_46(0))
	{
		iVar0 = func_45();
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

bool func_160(int iParam0)
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

void func_161(struct<25> Param0, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38)
{
	float fVar0;

	fVar0 = (1f + func_198());
	fVar0 = (fVar0 * Param0.f_23);
	if (func_124(Global_111638.f_19958.f_1, 4194304))
	{
		fVar0 = (fVar0 + Param0.f_24);
	}
	func_162(func_18(), 97, SYSTEM::ROUND(fVar0), 0, 0);
}

void func_162(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;

	if (func_197(iParam0) == 3)
	{
		return;
	}
	if (func_197(iParam0) == 4)
	{
		return;
	}
	func_163(func_197(iParam0), 1, iParam1, iParam2, 0);
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

int func_163(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_196();
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
					func_195(99, 1);
					func_194(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_194(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_194(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_179(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_174(5))
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
							func_194(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_194(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_194(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_174(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_194(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_194(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_194(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_194(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_194(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_194(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_194(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_194(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_194(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_194(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_194(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_194(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_194(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_194(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_194(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_174(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_194(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_194(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_194(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_194(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_194(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_194(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_173(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_195(95, iParam3);
					break;
				case 1:
					func_195(97, iParam3);
					break;
				case 2:
					func_195(96, iParam3);
					break;
			}
			func_195(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_166(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_166(bVar1);
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
					func_194(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					func_194(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					func_194(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
	func_165(iParam0);
	if (Global_41431 == 15)
	{
		func_164(0);
	}
	return 1;
}

void func_164(bool bParam0)
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

void func_165(int iParam0)
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

void func_166(bool bParam0)
{
	bool bVar0;
	char cVar1[64];

	if (bParam0 == 8)
	{
		func_172(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_172(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_172(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_172(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_169(8269, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_169(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_169(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_169(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_169(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_169(8274, 0, -1, 1, 0);
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
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0) || UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_168() /*10930*/].f_6174.f_10, bParam0))
	{
		bVar0 = true;
		UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		UNK_0x0674E58A79778E99(&(Global_2097152[func_168() /*10930*/].f_6174.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UNK_0x1E64CE678ED5F61E("COUP_RED");
		UNK_0x6B012227B3921E18(func_167(bParam0));
		UNK_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_167(bool bParam0)
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

int func_168()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_169(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_170(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_170(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_171();
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

int func_171()
{
	return Global_1312745;
}

int func_172(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_171();
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

void func_173(int iParam0)
{
	func_195(93, iParam0);
	func_195(29, iParam0);
	func_195(30, iParam0);
}

bool func_174(bool bParam0)
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
		return func_176(129, -1, -1);
	}
	if (bParam0 == 9)
	{
		return func_176(135, -1, -1);
	}
	if (bParam0 == 10)
	{
		return func_176(136, -1, -1);
	}
	if (bParam0 == 11)
	{
		return func_176(137, -1, -1);
	}
	if (bParam0 == 12)
	{
		iVar0 = UNK_0xDD0E7998AE8AD485();
		iVar1 = func_175(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 13)
	{
		iVar2 = UNK_0xDD0E7998AE8AD485();
		iVar3 = func_175(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 14)
	{
		iVar4 = UNK_0xDD0E7998AE8AD485();
		iVar5 = func_175(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 15)
	{
		iVar6 = UNK_0xDD0E7998AE8AD485();
		iVar7 = func_175(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 16)
	{
		iVar8 = UNK_0xDD0E7998AE8AD485();
		iVar9 = func_175(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 17)
	{
		iVar10 = UNK_0xDD0E7998AE8AD485();
		iVar11 = func_175(8274, -1, 0);
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
	return UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_168() /*10930*/].f_6174.f_10, bParam0);
}

int func_175(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_170(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_176(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_171();
	}
	iVar1 = func_178(iParam0, bParam1);
	iVar2 = func_177(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_177(int iParam0)
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

int func_178(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_171();
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

int func_179(bool bParam0)
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
		func_193(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_180(27, 1);
	return 1;
}

int func_180(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_181(iParam0, iParam1);
}

int func_181(int iParam0, int iParam1)
{
	if (func_24(14) && !func_192(iParam0))
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
	if (func_191(&Global_4270065))
	{
		if (func_189(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_182(&Global_4270065, iParam0))
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

bool func_182(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_24(14) && !func_192(iParam1))
	{
		return false;
	}
	if (func_189(uParam0, iParam1))
	{
		return false;
	}
	if (func_188(uParam0) < 0f)
	{
		func_187(uParam0, 0);
	}
	func_185(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_183(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_183(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_24(14) && !func_192(iParam1))
	{
		return 0;
	}
	if (func_189(uParam0, iParam1))
	{
		return 0;
	}
	if (func_188(uParam0) < 0f)
	{
		func_187(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_184(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_184(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_185(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_186(uParam0, iVar0);
		iVar0++;
	}
	func_187(uParam0, (Global_4270064 - 0.5f));
}

void func_186(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_187(var uParam0, float fParam1)
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

float func_188(var uParam0)
{
	return uParam0->f_80;
}

bool func_189(var uParam0, int iParam1)
{
	return func_190(uParam0, iParam1) != -1;
}

int func_190(var uParam0, int iParam1)
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

bool func_191(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_192(int iParam0)
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

int func_193(int iParam0, bool bParam1)
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

void func_194(int iParam0, int iParam1)
{
	bool bVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	UNK_0xCDC520E5E48E63D9(iParam0, bVar0, 1);
}

void func_195(int iParam0, int iParam1)
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

void func_196()
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

int func_197(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

float func_198()
{
	float fVar0;

	fVar0 = 0f;
	if (func_124(Global_111638.f_19958.f_1, 8192))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_124(Global_111638.f_19958.f_1, 16384))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_124(Global_111638.f_19958.f_1, 32768))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_124(Global_111638.f_19958.f_1, 65536))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_124(Global_111638.f_19958.f_1, 131072))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_124(Global_111638.f_19958.f_1, 262144))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_124(Global_111638.f_19958.f_1, 524288))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_124(Global_111638.f_19958.f_1, 1048576))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_124(Global_111638.f_19958.f_1, 2097152))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	return fVar0;
}

void func_199()
{
	func_533(&(Global_111638.f_19958.f_1), 2048);
}

void func_200(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		UNK_0xE17FDF9E3068281B(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			UNK_0x1200CC973A2399C8(false);
			UNK_0x7E60D21B163E9D56();
		}
		UNK_0xE17FDF9E3068281B(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		UNK_0x31A33F7BCB08CB80(false);
		uParam0->f_564 = 0;
	}
	if (!Global_76890)
	{
		if (!UNK_0x131F22FE6F47A65D(UNK_0xA30EC016B12C03E4()))
		{
			if (!Global_76891)
			{
				if (UNK_0x757EF87A33649210() && !func_46(0))
				{
					UNK_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_201(0);
}

void func_201(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

void func_202(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

void func_203(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (!func_210(uParam0))
	{
		return;
	}
	UNK_0xBD706C594F6DCD4A();
	UNK_0xD9ACBBA59FD5A09E(iParam2);
	if (!func_209(uParam0->f_1, 256) || (func_209(uParam0->f_1, 8192) && UNK_0xB8E3620B82AD47D7(2)))
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
			UNK_0x1200CC973A2399C8(func_209(uParam0->f_1, 4096));
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
							func_208(bVar3);
						}
						bVar7++;
					}
					if (!UNK_0xEA6BC48857E0AC4C(uParam0->f_2[iVar6 /*15*/]))
					{
						func_207(uParam0->f_2[iVar6 /*15*/]);
					}
					if (UNK_0x0EFF6B4415DAF4A1())
					{
						if (func_209(uParam0->f_1, 4096))
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
		bVar8 = func_206(bParam4, func_206(func_209(uParam0->f_1, 32), 1f, 0f), -1f);
		UNK_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		UNK_0x7C19E5E4784BD7CF(bVar8);
		UNK_0x7E60D21B163E9D56();
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_BACKGROUND_COLOUR");
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(80f);
		UNK_0x7E60D21B163E9D56();
		func_205(&(uParam0->f_1), 256);
		func_204(&(uParam0->f_1), 128);
	}
	UNK_0x6567AE843FADBA94(*uParam0, 255, 255, 255, false, 0);
}

void func_204(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_205(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_206(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_207(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_208(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

bool func_209(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_210(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (UNK_0x83D8570832F172A7(*uParam0))
		{
			func_205(&(uParam0->f_1), 1);
			return true;
		}
	}
	return false;
}

bool func_211(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;

	if (UNK_0xF4CCC8CB6DE7F1AE() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = UNK_0xF4CCC8CB6DE7F1AE();
	if (!UNK_0x8CD06866876216F2())
	{
		if (UNK_0x28072FDD60CE3A6E(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4()), 1))
		{
			uParam0->f_575 = 1;
			return true;
		}
		if (UNK_0x946BFA82EB988C81(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4())))
		{
			uParam0->f_575 = 1;
			return true;
		}
	}
	if (!uParam0->f_564)
	{
		if (UNK_0x757EF87A33649210() || UNK_0xD0BB2359EC70FC37())
		{
			UNK_0x31A33F7BCB08CB80(true);
			uParam0->f_564 = 1;
		}
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (!UNK_0x8CD06866876216F2())
		{
			if (UNK_0x3114787DB5A129EF(UNK_0xD803B885F5E47A62(), 0))
			{
				UNK_0x0D00405AED37B7C4(UNK_0xD803B885F5E47A62(), 0);
			}
		}
	}
	UNK_0x3584F71E5CA29322(7);
	UNK_0x3584F71E5CA29322(8);
	UNK_0x3584F71E5CA29322(9);
	UNK_0x3584F71E5CA29322(6);
	UNK_0x3584F71E5CA29322(19);
	UNK_0x38C3A68D7861DCFD(2, 19, 1);
	UNK_0x38C3A68D7861DCFD(0, 37, 1);
	UNK_0x38C3A68D7861DCFD(0, 21, 1);
	UNK_0x38C3A68D7861DCFD(0, 28, 1);
	UNK_0x38C3A68D7861DCFD(0, 29, 1);
	UNK_0x38C3A68D7861DCFD(0, 171, 1);
	func_233(0);
	if (UNK_0x91E3F625EF57450D(2))
	{
		if (UNK_0xBB16188FFCC4B1B5() || (UNK_0x757EF87A33649210() && !UNK_0x7BCE0E6DD4A1F749()))
		{
			UNK_0x5D80F91A16C40CDE();
		}
	}
	Global_41981 = 1;
	if (!uParam0->f_563)
	{
		switch (func_21(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4())))
		{
			case 1:
				UNK_0x82A772610883F395("SuccessFranklin", 1000, 0);
				break;
			case 2:
				UNK_0x82A772610883F395("SuccessTrevor", 1000, 0);
				break;
			default:
				UNK_0x82A772610883F395("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (bParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_232(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_232(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_232((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_232(30f) - func_232(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_201(1);
		uParam0->f_572 = (uParam0->f_572 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_214(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_30 = func_213(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_UP_BACKGROUND");
					UNK_0x7E60D21B163E9D56();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_547 = func_213(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "TRANSITION_OUT");
			UNK_0x7E60D21B163E9D56();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_548 = func_213(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (UNK_0xB8E3620B82AD47D7(2))
			{
				if (UNK_0x83D8570832F172A7(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_212(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (UNK_0xBFC0798A6E3417F9(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && UNK_0x83D8570832F172A7(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					UNK_0x7E60D21B163E9D56();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_UP_BACKGROUND");
					UNK_0x7E60D21B163E9D56();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_212(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					UNK_0x7E60D21B163E9D56();
				}
				uParam0->f_559 = func_213((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_573 = func_213((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_213((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_573 = func_213((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (UNK_0xBFC0798A6E3417F9(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				func_201(0);
			}
			return !bVar0;
		}
	}
	func_201(0);
	return true;
}

void func_212(var uParam0, bool bParam1)
{
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "CLEAR_ALL");
	UNK_0x7E60D21B163E9D56();
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		UNK_0x1200CC973A2399C8(true);
		UNK_0x7E60D21B163E9D56();
	}
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(false);
	func_208(UNK_0xF59058FCB716F903(2, 215, true));
	func_207("ES_HELP");
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		UNK_0x1200CC973A2399C8(true);
		UNK_0x3CAEA85DA607305E(215);
	}
	UNK_0x7E60D21B163E9D56();
	if (bParam1)
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
		UNK_0x3CAEA85DA607305E(true);
		func_208(UNK_0xF59058FCB716F903(2, 216, true));
		func_207("ES_XPAND");
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			UNK_0x1200CC973A2399C8(true);
			UNK_0x3CAEA85DA607305E(216);
		}
		UNK_0x7E60D21B163E9D56();
	}
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	UNK_0x7E60D21B163E9D56();
}

float func_213(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_214(var uParam0, float fParam1, bool bParam2)
{
	bool bVar0;
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
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	var uVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar27[32];
	int iVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;

	bVar0 = SYSTEM::ROUND((uParam0->f_547 * 255f));
	fVar1 = (func_231() * 0.25f);
	if (UNK_0x83D8570832F172A7(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_207(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_230(&(uParam0->f_13));
				}
				else
				{
					func_207(&(uParam0->f_13));
				}
				if (UNK_0x8CD06866876216F2())
				{
					UNK_0x3CAEA85DA607305E(150);
				}
				else
				{
					UNK_0x3CAEA85DA607305E(100);
				}
				UNK_0x1200CC973A2399C8(true);
				if (uParam0->f_556 == 4)
				{
					UNK_0x3CAEA85DA607305E((uParam0->f_56 - 1));
				}
				else
				{
					UNK_0x3CAEA85DA607305E(uParam0->f_56);
				}
				UNK_0x1200CC973A2399C8(bParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					UNK_0x3CAEA85DA607305E(2);
				}
				else
				{
					UNK_0x3CAEA85DA607305E(69);
				}
				UNK_0x7E60D21B163E9D56();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "TRANSITION_UP");
				UNK_0x7C19E5E4784BD7CF(0.15f);
				UNK_0x1200CC973A2399C8(true);
				UNK_0x7E60D21B163E9D56();
				uParam0->f_3 = 1;
			}
		}
		func_229();
		UNK_0x6567AE843FADBA94(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_232((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_231());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_228(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (UNK_0x33D480CCE15C991A(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_228(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_231()) / 2.5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	UNK_0x558EC149EB2BC0A2(2, 215);
	UNK_0x558EC149EB2BC0A2(2, 216);
	UNK_0x558EC149EB2BC0A2(2, 200);
	UNK_0x38C3A68D7861DCFD(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_94((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (UNK_0x757EF87A33649210())
			{
				UNK_0xBD706C594F6DCD4A();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				UNK_0x3584F71E5CA29322(7);
				UNK_0x3584F71E5CA29322(8);
				UNK_0x3584F71E5CA29322(9);
				UNK_0x3584F71E5CA29322(6);
				UNK_0x6567AE843FADBA94(uParam0->f_4, 255, 255, 255, bVar0, 0);
			}
			if (uParam0->f_567)
			{
				UNK_0x38C3A68D7861DCFD(0, 140, 1);
				UNK_0x38C3A68D7861DCFD(0, 141, 1);
				UNK_0x38C3A68D7861DCFD(0, 142, 1);
				UNK_0x38C3A68D7861DCFD(2, 188, 1);
				if (UNK_0xD245978525608929(2, 188))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					UNK_0x4D7F4CC43D4D0DE3(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				UNK_0x38C3A68D7861DCFD(2, 187, 1);
				if (UNK_0xD245978525608929(2, 187))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					UNK_0x4D7F4CC43D4D0DE3(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				UNK_0x38C3A68D7861DCFD(2, 202, 1);
				if (UNK_0xD245978525608929(2, 202))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					UNK_0x4D7F4CC43D4D0DE3(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				UNK_0x3584F71E5CA29322(7);
				UNK_0x3584F71E5CA29322(8);
				UNK_0x3584F71E5CA29322(9);
				UNK_0x3584F71E5CA29322(6);
				UNK_0x38C3A68D7861DCFD(0, 140, 1);
				UNK_0x38C3A68D7861DCFD(0, 141, 1);
				UNK_0x38C3A68D7861DCFD(0, 142, 1);
				if (UNK_0xBFC0798A6E3417F9(2, 215) || UNK_0xD245978525608929(2, 200))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					UNK_0x4D7F4CC43D4D0DE3(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	UNK_0xA402F6C87C08815C(true, &iVar13, &iVar14, &iVar15, &iVar16);
	UNK_0x7178F32F6742C936(iVar13, iVar14, iVar15, bVar0);
	UNK_0xF1F881BAAAFB43B1(fVar9, fVar10);
	UNK_0xEEF67251E263A87F(0);
	UNK_0xD3539A877EC25E86(1f, 0.4f);
	fVar1 = (fVar1 - func_232(6f));
	fVar1 = (fVar1 + (func_232(30f) - func_232((2f * 2f))));
	fVar11 = (fVar2 - func_232((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_213((fVar11 / (0.6f * func_232(25f))), 0f, 1f);
		func_229();
		UNK_0xC1032CAC14DE468A(0.5f, (fVar1 - (func_232((2f - 0.5f)) - 0.001388889f)), fVar6, func_227(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_232((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_232((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_231())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_213((fVar11 / (0.8f * func_232(25f))), 0f, 1f);
			func_224(uParam0, iVar17, (fVar1 + func_232(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(bVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_232(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_232((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_231())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_232(2f));
					fVar12 = func_213((fVar11 / (0.6f * func_232(25f))), 0f, 1f);
					func_229();
					UNK_0xC1032CAC14DE468A(0.5f, (fVar1 + func_232((2f * 0.5f))), fVar6, func_227(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_232((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_232((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_232((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_231())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_232(2f));
			fVar12 = func_213((fVar11 / (0.6f * func_232(25f))), 0f, 1f);
			func_229();
			UNK_0xC1032CAC14DE468A(0.5f, (fVar1 + func_232((2f * 0.5f))), fVar6, func_227(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_232((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_231())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_213((fVar11 / (0.8f * func_232(25f))), 0f, 1f);
			UNK_0x7178F32F6742C936(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(bVar0))));
			func_217(7, 0, 1, &fVar18, &uVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (UNK_0xB3260A60545D3F11() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_231()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_231()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_231()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_231()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				UNK_0xF1F881BAAAFB43B1(fVar20, fVar21);
				UNK_0xEEF67251E263A87F(1);
			}
			else
			{
				fVar20 = 0.5f;
				UNK_0xEEF67251E263A87F(0);
			}
			UNK_0xD3539A877EC25E86(1f, 0.4f);
			func_216(&(uParam0->f_550), fVar20, (fVar1 + func_232((2f * 2f))), 0, 0, 0);
			UNK_0xF1F881BAAAFB43B1(fVar20, fVar21);
			UNK_0xEEF67251E263A87F(2);
			UNK_0xD3539A877EC25E86(1f, 0.4f);
			UNK_0xAAE406A7DA443B93(0);
			func_229();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			UNK_0xF1F881BAAAFB43B1(fVar20, fVar22);
			UNK_0x7178F32F6742C936(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(bVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					UNK_0x070005E852D4C0E9("PERCENTAGE");
					UNK_0x6D99DF8263D35CE5(uParam0->f_554);
					UNK_0xE0026608C37C7C41(fVar20, (fVar1 + func_232((2f * 2f))), 0);
					break;
				case 1:
					UNK_0x070005E852D4C0E9("FO_TWO_NUM");
					UNK_0x6D99DF8263D35CE5(uParam0->f_554);
					UNK_0x6D99DF8263D35CE5(uParam0->f_555);
					UNK_0xE0026608C37C7C41(fVar20, (fVar1 + func_232((2f * 2f))), 0);
					break;
				case 2:
					UNK_0x070005E852D4C0E9("MTPHPER_XPNO");
					UNK_0x6D99DF8263D35CE5(uParam0->f_554);
					UNK_0xE0026608C37C7C41(fVar20, (fVar1 + func_232((2f * 2f))), 0);
					break;
				case 5:
					UNK_0x070005E852D4C0E9("ESDOLLA");
					UNK_0xCBD015EC7E4226BC(uParam0->f_554, 1);
					UNK_0xE0026608C37C7C41(fVar20, (fVar1 + func_232((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				bVar38 = bVar0;
				switch (uParam0->f_557)
				{
					case 1:
						UNK_0xA402F6C87C08815C(107, &iVar35, &iVar36, &iVar37, &bVar38);
						break;
					case 3:
						UNK_0xA402F6C87C08815C(109, &iVar35, &iVar36, &iVar37, &bVar38);
						break;
					case 2:
						UNK_0xA402F6C87C08815C(108, &iVar35, &iVar36, &iVar37, &bVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_215(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_232(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				UNK_0x539E86AE011A8B38(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, SYSTEM::ROUND((fVar12 * IntToFloat(bVar0))), 0);
			}
			fVar1 = (fVar1 + (func_232(30f) - 2f));
		}
	}
}

float func_215(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_216(bool bParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	UNK_0xAAE406A7DA443B93(iParam3);
	UNK_0x7BBAC160090910C3(iParam5);
	func_229();
	if (bParam4)
	{
		UNK_0x070005E852D4C0E9("STRING");
		UNK_0xD06AC7C87A34A6AD(bParam0);
	}
	else
	{
		UNK_0x070005E852D4C0E9(bParam0);
	}
	UNK_0xE0026608C37C7C41(fParam1, fParam2, 0);
}

int func_217(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;

	StringCopy(&cVar0, func_223(iParam0), 64);
	StringCopy(&cVar16, func_220(iParam0, bParam1), 64);
	if (UNK_0x12AB0310C2281427(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			UNK_0xE5AC5CA7914F5BAE(&iVar32, &iVar33);
			fVar35 = UNK_0x33D480CCE15C991A(0);
			if (func_219())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_219())
			{
				fVar34 = 1f;
			}
			if (UNK_0x8A22C4C08282BF26(joaat("DIRECTOR_MODE")) > 0)
			{
				UNK_0x8A462DAA7D1D9008(&iVar32, &iVar33);
			}
			iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar32) / fVar34));
			iVar33 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) / fVar34));
		}
		else
		{
			UNK_0x8A462DAA7D1D9008(&iVar32, &iVar33);
		}
		vVar37 = { UNK_0xDE43A059FBFFF38A(&cVar0, &cVar16) };
		vVar37.x = (vVar37.x * (func_218(iParam0) / fVar34));
		vVar37.f_1 = (vVar37.y * (func_218(iParam0) / fVar34));
		if (!bParam2)
		{
			vVar37.x = (vVar37.x - 2f);
			vVar37.f_1 = (vVar37.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar37.x = 288f;
			vVar37.f_1 = 106f;
		}
		if (iParam0 == 29 && UNK_0x12AB0310C2281427(&(Global_22350.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			vVar37.x = 106f;
			vVar37.f_1 = 106f;
		}
		*fParam3 = ((vVar37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((vVar37.y / IntToFloat(iVar33)) / (vVar37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!UNK_0x0D71AFA59EF5104F() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return 1;
	}
	return 0;
}

float func_218(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
		case 61:
			return 0.8f;
	}
	return 1f;
}

bool func_219()
{
	int iVar0;
	int iVar1;
	float fVar2;

	UNK_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return true;
	}
	return false;
}

var func_220(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;

	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_7029[iParam0 /*16*/])))
	{
		if (UNK_0x12AB0310C2281427(&(Global_22350.f_7029[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_222(UNK_0xD803B885F5E47A62()) };
			if (UNK_0x205FB5BBF81D8900(&Var19, &uVar3))
			{
				return func_221(&uVar3);
			}
		}
		else
		{
			return func_221(&(Global_22350.f_7029[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			Jump @1299; //curOff = 458
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			Jump @1299; //curOff = 479
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			Jump @1299; //curOff = 500
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			Jump @1299; //curOff = 521
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			Jump @1299; //curOff = 542
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			Jump @1299; //curOff = 563
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			Jump @1299; //curOff = 584
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			Jump @1299; //curOff = 605
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			Jump @1299; //curOff = 626
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			Jump @1299; //curOff = 647
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			Jump @1299; //curOff = 668
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			Jump @1299; //curOff = 689
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			Jump @1299; //curOff = 710
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			Jump @1299; //curOff = 731
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			Jump @1299; //curOff = 752
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			Jump @1299; //curOff = 773
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			Jump @1299; //curOff = 794
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			Jump @1299; //curOff = 815
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			Jump @1299; //curOff = 836
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			Jump @1299; //curOff = 857
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			Jump @1299; //curOff = 878
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			Jump @1299; //curOff = 899
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			Jump @1299; //curOff = 920
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			Jump @1299; //curOff = 941
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			Jump @1299; //curOff = 962
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			Jump @1299; //curOff = 983
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			Jump @1299; //curOff = 1004
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			Jump @1299; //curOff = 1025
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			Jump @1299; //curOff = 1046
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			Jump @1299; //curOff = 1067
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			Jump @1299; //curOff = 1088
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			Jump @1299; //curOff = 1109
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			Jump @1299; //curOff = 1130
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			Jump @1299; //curOff = 1151
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			Jump @1299; //curOff = 1172
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			Jump @1299; //curOff = 1193
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			Jump @1299; //curOff = 1214
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			Jump @1299; //curOff = 1235
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			Jump @1299; //curOff = 1256
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			Jump @1299; //curOff = 1277
			sVar0[0] = "";
			sVar0[1] = "";
			if (bParam1)
			{
				return sVar0[0];
			}
			return sVar0[1];
		}

var func_221(var uParam0)
{
	return uParam0;
}

struct<13> func_222(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

char* func_223(int iParam0)
{
	var uVar0;
	struct<13> Var16;

	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_6020[iParam0 /*16*/])))
	{
		if (UNK_0x12AB0310C2281427(&(Global_22350.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_222(UNK_0xD803B885F5E47A62()) };
			UNK_0x205FB5BBF81D8900(&Var16, &uVar0);
			return func_221(&uVar0);
		}
		else
		{
			return func_221(&(Global_22350.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_224(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	UNK_0xA402F6C87C08815C(true, &iVar0, &iVar1, &iVar2, &uVar3);
	UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, bParam5);
	UNK_0xF1F881BAAAFB43B1(fParam3, fParam4);
	UNK_0xEEF67251E263A87F(1);
	UNK_0xD3539A877EC25E86(1f, func_226(14f));
	UNK_0xAAE406A7DA443B93(0);
	UNK_0x7BBAC160090910C3(0);
	func_229();
	if (uParam0->f_531[iParam1])
	{
		UNK_0x070005E852D4C0E9("STRING");
		UNK_0xD06AC7C87A34A6AD(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		UNK_0x070005E852D4C0E9(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			UNK_0x6D99DF8263D35CE5(uParam0->f_489[iParam1]);
		}
	}
	UNK_0xE0026608C37C7C41(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		case 1:
			func_217(7, 0, 1, &fVar5, &fVar6, 0);
			UNK_0x539E86AE011A8B38("CommonMenu", func_220(7, 0), (fParam4 - 0.006f), ((fParam2 + func_232(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, bParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		case 2:
			func_217(5, 0, 1, &fVar5, &fVar6, 0);
			UNK_0x539E86AE011A8B38("CommonMenu", func_220(5, 0), (fParam4 - 0.006f), ((fParam2 + func_232(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, bParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		case 3:
			func_217(6, 0, 1, &fVar5, &fVar6, 0);
			UNK_0x539E86AE011A8B38("CommonMenu", func_220(6, 0), (fParam4 - 0.006f), ((fParam2 + func_232(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, bParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		UNK_0xEEF67251E263A87F(1);
	}
	else
	{
		UNK_0xEEF67251E263A87F(2);
	}
	UNK_0xD3539A877EC25E86(1f, func_226(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		UNK_0xF1F881BAAAFB43B1(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		UNK_0xF1F881BAAAFB43B1(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, bParam5);
	func_225(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_225(bool bParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, int iParam5)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	bVar0 = true;
	UNK_0xAAE406A7DA443B93(0);
	UNK_0x7BBAC160090910C3(0);
	func_229();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			UNK_0xD3539A877EC25E86(1f, func_226(18f));
			UNK_0x7BBAC160090910C3(4);
			if (bParam0 < 0)
			{
				UNK_0xBBA442527B4BB1A6("ESMINDOLLA");
				UNK_0xCBD015EC7E4226BC((-1 * bParam0), 1);
				fVar1 = UNK_0x79E367314AFBB5CA(0);
			}
			else
			{
				UNK_0xBBA442527B4BB1A6("ESDOLLA");
				UNK_0xCBD015EC7E4226BC(bParam0, 1);
				fVar1 = UNK_0x79E367314AFBB5CA(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			UNK_0x539E86AE011A8B38("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			UNK_0x539E86AE011A8B38("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			UNK_0x539E86AE011A8B38("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			UNK_0xD3539A877EC25E86(1f, func_226(14f));
			break;
	}
	UNK_0x3A820E495A7BA3E5(bVar0);
	switch (iParam5)
	{
		case 11:
			UNK_0x070005E852D4C0E9("PERCENTAGE");
			UNK_0x6D99DF8263D35CE5(bParam0);
			break;
		case 1:
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("FO_NUM");
			UNK_0x6D99DF8263D35CE5(bParam0);
			break;
		case 2:
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("FO_TWO_NUM");
			UNK_0x6D99DF8263D35CE5(bParam0);
			UNK_0x6D99DF8263D35CE5(bParam1);
			break;
		case 4:
		case 5:
			UNK_0xD3539A877EC25E86(1f, func_226(18f));
		case 3:
			if (bParam0 < 0)
			{
				UNK_0x070005E852D4C0E9("ESMINDOLLA");
				UNK_0xCBD015EC7E4226BC((-1 * bParam0), 1);
			}
			else
			{
				UNK_0x070005E852D4C0E9("ESDOLLA");
				UNK_0xCBD015EC7E4226BC(bParam0, 1);
			}
			break;
		case 6:
			UNK_0x070005E852D4C0E9(bParam4);
			break;
		case 7:
			UNK_0x070005E852D4C0E9("STRING");
			UNK_0xD06AC7C87A34A6AD(bParam4);
			break;
		case 8:
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("STRING");
			UNK_0x164431059FF80580(bParam0, 14);
			break;
		case 9:
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("STRING");
			UNK_0x164431059FF80580(bParam0, 6);
			break;
		case 10:
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("STRING");
			UNK_0x164431059FF80580(bParam0, 2055);
			break;
		case 18:
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("STRING");
			UNK_0x164431059FF80580(bParam0, 2055);
			break;
		case 12:
			UNK_0x070005E852D4C0E9("AHD_DIST");
			UNK_0x6D99DF8263D35CE5(bParam0);
			break;
		case 13:
			UNK_0x070005E852D4C0E9(bParam4);
			UNK_0x6D99DF8263D35CE5(bParam0);
			UNK_0x6D99DF8263D35CE5(bParam1);
			break;
		case 15:
		case 14:
			UNK_0x070005E852D4C0E9(bParam4);
			UNK_0x6D99DF8263D35CE5(bParam0);
			UNK_0x6D99DF8263D35CE5(bParam1);
			break;
		case 16:
			UNK_0x070005E852D4C0E9(bParam4);
			UNK_0x6D99DF8263D35CE5(bParam1);
			break;
		case 20:
			UNK_0x070005E852D4C0E9(bParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			UNK_0xE0026608C37C7C41((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			UNK_0xD3539A877EC25E86(1f, func_226(14f));
		}
		else
		{
			UNK_0xE0026608C37C7C41(fParam2, fParam3, 0);
		}
	}
}

float func_226(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_227(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

float func_228(bool bParam0)
{
	UNK_0xBBA442527B4BB1A6(bParam0);
	return (UNK_0x79E367314AFBB5CA(1) / 2f);
}

void func_229()
{
	UNK_0xD9ACBBA59FD5A09E(1);
	if (UNK_0xD0BB2359EC70FC37() || UNK_0x757EF87A33649210())
	{
		UNK_0xD9ACBBA59FD5A09E(7);
	}
	UNK_0x5DD950F92F816F03(0);
}

void func_230(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

float func_231()
{
	float fVar0;

	fVar0 = 1f;
	if (UNK_0x0EFF6B4415DAF4A1())
	{
	}
	return fVar0;
}

float func_232(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_233(int iParam0)
{
	if (func_237())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_80(0))
		{
			func_234(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_234(int iParam0)
{
	if (func_237())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_236())
		{
			func_235(1, 1);
		}
		else
		{
			func_235(0, 0);
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

void func_235(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_80(0))
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

bool func_236()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_237()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

int func_238(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_239(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = UNK_0x5275223F099DEF26("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_205(&(uParam0->f_1), 32);
	}
	if (UNK_0x83D8570832F172A7(*uParam0))
	{
		func_205(&(uParam0->f_1), 1);
		if (bParam2)
		{
			UNK_0x5461A9D388F592B4(*uParam0, 1);
		}
	}
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (bParam3)
		{
			func_205(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_205(&(uParam0->f_1), 8192);
	}
}

bool func_240(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_243(uParam0);
	func_242(uParam0);
	if (UNK_0x7F8A39872A07D2CE(&(uParam0->f_550), "SPR_RESULT") || (UNK_0x7F8A39872A07D2CE(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (UNK_0x8CD06866876216F2())
	{
		UNK_0x0D3BE1DE0262A012("MPHud", 0);
	}
	if (uParam0->f_1 == 0)
	{
		UNK_0x0D3BE1DE0262A012("CommonMenu", 0);
		UNK_0x0D3BE1DE0262A012("MPLeaderboard", 0);
		UNK_0x0D3BE1DE0262A012("MPHud", 0);
		uParam0->f_1 = UNK_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = UNK_0x5275223F099DEF26("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!UNK_0x83D8570832F172A7(uParam0->f_1) || !UNK_0x27117E2CDD4D67C3("CommonMenu")) || !UNK_0x27117E2CDD4D67C3("MPLeaderboard")) || !UNK_0x27117E2CDD4D67C3("MPHud"))
		{
			SYSTEM::WAIT(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!UNK_0x83D8570832F172A7(uParam0->f_4))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		if (((!UNK_0x83D8570832F172A7(uParam0->f_1) || !UNK_0x27117E2CDD4D67C3("CommonMenu")) || !UNK_0x27117E2CDD4D67C3("MPLeaderboard")) || !UNK_0x27117E2CDD4D67C3("MPHud"))
		{
			return false;
		}
		if (uParam0->f_562)
		{
			if (!UNK_0x83D8570832F172A7(uParam0->f_4))
			{
				return false;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_241(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_212(uParam0, 1);
		}
		else
		{
			func_212(uParam0, 0);
		}
	}
	Global_76883 = 1;
	return true;
}

void func_241(var uParam0)
{
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "CLEAR_ALL");
	UNK_0x7E60D21B163E9D56();
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		UNK_0x1200CC973A2399C8(true);
		UNK_0x7E60D21B163E9D56();
	}
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(2);
	func_208(UNK_0xF59058FCB716F903(2, 188, true));
	func_207("ES_HELP_TU");
	UNK_0x7E60D21B163E9D56();
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(true);
	func_208(UNK_0xF59058FCB716F903(2, 187, true));
	func_207("ES_HELP_TD");
	UNK_0x7E60D21B163E9D56();
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(false);
	func_208(UNK_0xF59058FCB716F903(2, 202, true));
	func_207("ES_HELP_AB");
	UNK_0x7E60D21B163E9D56();
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	UNK_0x7E60D21B163E9D56();
}

void func_242(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	fVar0 = 0f;
	UNK_0xEEF67251E263A87F(0);
	UNK_0xD3539A877EC25E86(1f, func_226(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			UNK_0xBBA442527B4BB1A6("STRING");
			UNK_0xD06AC7C87A34A6AD(&(uParam0->f_13));
			fVar0 = UNK_0x79E367314AFBB5CA(1);
		}
		else
		{
			UNK_0xBBA442527B4BB1A6(&(uParam0->f_13));
			fVar0 = UNK_0x79E367314AFBB5CA(1);
		}
	}
	else
	{
		UNK_0xBBA442527B4BB1A6("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					UNK_0x6D99DF8263D35CE5(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				case 1:
					UNK_0x6B012227B3921E18(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				case 2:
					UNK_0xD06AC7C87A34A6AD(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = UNK_0x79E367314AFBB5CA(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_243(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

void func_244()
{
	int iVar0;
	int iVar1;

	if (!bLocal_377)
	{
		func_250(&uLocal_388, &cLocal_965, &Global_61527, 0);
		fLocal_372 = (fLocal_372 * 1000f);
		if (Global_92921)
		{
			func_249(&uLocal_388, 6, &(cLocal_965.f_12), "MTPHPERSKI", SYSTEM::FLOOR(fLocal_372), 0, 3, 0);
			func_249(&uLocal_388, 6, &(cLocal_965.f_24), "MTPHPERSKI", 0, 0, 3, 0);
			func_249(&uLocal_388, 6, &(cLocal_965.f_30), "MTPHPERSKI", SYSTEM::ROUND((fLocal_374 + fLocal_373)), 0, 3, 0);
			func_248();
		}
		else
		{
			if (bLocal_376)
			{
				func_249(&uLocal_388, 6, &(cLocal_965.f_12), "MTPHPERRET", SYSTEM::FLOOR(fLocal_372), 0, 3, 0);
			}
			else
			{
				func_249(&uLocal_388, 9, &(cLocal_965.f_12), "", SYSTEM::FLOOR(fLocal_372), 0, 0, 0);
			}
			if (!UNK_0xEA6BC48857E0AC4C(&(cLocal_965.f_18)))
			{
				if (bLocal_375)
				{
					func_249(&uLocal_388, 6, &(cLocal_965.f_24), "", 0, 0, 2, 0);
					func_249(&uLocal_388, 3, &(cLocal_965.f_30), "", SYSTEM::ROUND((fLocal_374 + fLocal_373)), 0, 2, 0);
				}
				else
				{
					func_249(&uLocal_388, 6, &(cLocal_965.f_24), "", 0, 0, 1, 0);
					func_249(&uLocal_388, 3, &(cLocal_965.f_30), "", SYSTEM::ROUND(fLocal_373), 0, 0, 0);
				}
			}
			else
			{
				func_249(&uLocal_388, 3, &(cLocal_965.f_30), "", SYSTEM::ROUND(fLocal_373), 0, 0, 0);
			}
		}
		iVar0 = 0;
		if (Global_92921)
		{
			iVar1 = 0;
			while (iVar1 < Global_73607)
			{
				if (Global_73608[iVar1 /*9*/] >= 0 && !Global_61737[Global_73608[iVar1 /*9*/] /*13*/].f_7)
				{
					if (Global_73608[iVar1 /*9*/].f_3 == 2)
					{
						iVar0 = 1;
					}
				}
				iVar1++;
			}
		}
		if (iVar0 == 1)
		{
			iLocal_383 = 50;
			iLocal_384 = 1;
			func_247(&uLocal_388, 1, &(cLocal_965.f_48), iLocal_383, 0, 0, 1, 0);
		}
		else if (bLocal_375)
		{
			if (bLocal_376)
			{
				iLocal_383 = 75;
				iLocal_384 = 2;
				func_247(&uLocal_388, 1, &(cLocal_965.f_42), iLocal_383, 0, 0, 2, 0);
			}
			else
			{
				iLocal_383 = 100;
				iLocal_384 = 3;
				func_247(&uLocal_388, 1, &(cLocal_965.f_36), iLocal_383, 0, 0, 3, 0);
			}
		}
		else if (!bLocal_375 && !bLocal_376)
		{
			iLocal_383 = 75;
			iLocal_384 = 2;
			func_247(&uLocal_388, 1, &(cLocal_965.f_42), iLocal_383, 0, 0, 2, 0);
		}
		else
		{
			iLocal_383 = 50;
			iLocal_384 = 1;
			func_247(&uLocal_388, 1, &(cLocal_965.f_48), iLocal_383, 0, 0, 1, 0);
		}
		func_245();
		bLocal_377 = true;
	}
}

void func_245()
{
	if (UNK_0x8A22C4C08282BF26(joaat("ASSASSIN_VALET")) == 1)
	{
		func_246(38, SYSTEM::FLOOR(fLocal_372), 1);
		if (bLocal_375)
		{
			func_246(39, 1, 1);
		}
		else
		{
			func_246(39, 0, 1);
		}
		if (bLocal_375)
		{
			func_246(40, SYSTEM::ROUND((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_246(40, SYSTEM::ROUND(fLocal_373), 1);
		}
		func_246(41, iLocal_383, 1);
		func_246(42, iLocal_384, 1);
	}
	else if (UNK_0x8A22C4C08282BF26(joaat("ASSASSIN_MULTI")) == 1)
	{
		func_246(52, SYSTEM::FLOOR(fLocal_372), 1);
		if (bLocal_375)
		{
			func_246(53, 1, 1);
		}
		else
		{
			func_246(53, 0, 1);
		}
		if (bLocal_375)
		{
			func_246(56, SYSTEM::ROUND((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_246(56, SYSTEM::ROUND(fLocal_373), 1);
		}
		func_246(54, iLocal_383, 1);
		func_246(55, iLocal_384, 1);
	}
	else if (UNK_0x8A22C4C08282BF26(joaat("ASSASSIN_HOOKER")) == 1)
	{
		func_246(66, SYSTEM::FLOOR(fLocal_372), 1);
		if (bLocal_375)
		{
			func_246(67, 1, 1);
		}
		else
		{
			func_246(67, 0, 1);
		}
		if (bLocal_375)
		{
			func_246(68, SYSTEM::ROUND((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_246(68, SYSTEM::ROUND(fLocal_373), 1);
		}
		func_246(69, iLocal_383, 1);
		func_246(70, iLocal_384, 1);
	}
	else if (UNK_0x8A22C4C08282BF26(joaat("ASSASSIN_BUS")) == 1)
	{
		func_246(81, SYSTEM::FLOOR(fLocal_372), 1);
		if (bLocal_375)
		{
			func_246(82, 1, 1);
		}
		else
		{
			func_246(82, 0, 1);
		}
		if (bLocal_375)
		{
			func_246(83, SYSTEM::ROUND((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_246(83, SYSTEM::ROUND(fLocal_373), 1);
		}
		func_246(84, iLocal_383, 1);
		func_246(85, iLocal_384, 1);
	}
	else if (UNK_0x8A22C4C08282BF26(joaat("ASSASSIN_CONSTRUCTION")) == 1)
	{
		func_246(97, SYSTEM::FLOOR(fLocal_372), 1);
		if (bLocal_375)
		{
			func_246(98, 1, 1);
		}
		else
		{
			func_246(98, 0, 1);
		}
		if (bLocal_375)
		{
			func_246(99, SYSTEM::ROUND((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_246(99, SYSTEM::ROUND(fLocal_373), 1);
		}
		func_246(100, iLocal_383, 1);
		func_246(101, iLocal_384, 1);
	}
}

void func_246(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		if (Global_73608[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_73608[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_73608[iVar0 /*9*/].f_1 = (Global_73608[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_73608[iVar0 /*9*/] != -1)
	{
		if (Global_61737[Global_73608[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_73608[iVar0 /*9*/].f_1 > 1)
			{
				Global_73608[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_73608[iVar0 /*9*/].f_1 < 0)
			{
				Global_73608[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_247(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

void func_248()
{
	Global_92920 = 0;
	Global_92921 = 0;
}

void func_249(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;

	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_250(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_251()
{
	func_533(&(Global_111638.f_19958.f_1), 4194304);
}

void func_252()
{
	bool bVar0;

	if (!bLocal_1175)
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
				if (UNK_0xC844350D5D58C99A(bVar0) && !UNK_0x437347B10A200C4B(bVar0, 0))
				{
					if (UNK_0x2F6DBDA9ACD7D3AB(bVar0))
					{
						if (UNK_0x13896FDECC859926("ASS1_LOST"))
						{
							bLocal_1175 = true;
						}
					}
				}
			}
		}
	}
}

void func_253()
{
	float fVar0;

	if (!bLocal_1172)
	{
		if (!UNK_0xD17F06053799A7CA())
		{
			if (!func_28())
			{
				func_258("ASS_VA_GO", 7500, -1);
				bLocal_1172 = true;
			}
		}
	}
	func_257(&iLocal_1184, &uLocal_1364, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1193)
	{
		case 0:
			iLocal_1193++;
			break;
		case 1:
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				fVar0 = func_32(UNK_0x16F2683693E537C9(), vLocal_1299, 1);
				if (fVar0 > 155f && func_36(1116471296 /* Float: 70f */, 1) == 0)
				{
					bLocal_1167 = true;
					func_255();
					iLocal_1193++;
				}
				else
				{
					UNK_0x1E69CBC4A01168BD(UNK_0xD803B885F5E47A62());
				}
			}
			break;
		case 2:
			if (!UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
			{
				if (func_36(1116471296 /* Float: 70f */, 1) == 0)
				{
					func_252();
					if (func_254())
					{
						iLocal_1031 = 18;
					}
				}
			}
			else if (!bLocal_1183)
			{
				if (!func_28())
				{
					if (!UNK_0xD17F06053799A7CA())
					{
						func_258("ASS_VA_LOSECOPS", 7500, 1);
						iLocal_1193++;
						bLocal_1183 = true;
					}
				}
			}
			break;
		case 3:
			if (!UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
			{
				iLocal_1193 = 2;
			}
			break;
	}
}

bool func_254()
{
	if (bLocal_1175)
	{
		UNK_0xC92DB9682A650680("ASS1_LOST");
		bLocal_1176 = true;
	}
	func_255();
	return true;
}

void func_255()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_1047[iVar0]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_1047[iVar0]))
			{
				func_256(&(Local_1102[iVar0 /*8*/]));
				UNK_0xA3BF0AA5A2608191(iLocal_1047[iVar0]);
				UNK_0x6DAD7906B73F064D(&(iLocal_1047[iVar0]));
			}
		}
		iVar0++;
	}
	if (UNK_0xC844350D5D58C99A(bLocal_1046))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_1046))
		{
			UNK_0xA3BF0AA5A2608191(bLocal_1046);
			UNK_0x6DAD7906B73F064D(&bLocal_1046);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_1050[iVar0]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_1050[iVar0]))
			{
				func_256(&(Local_1060[iVar0 /*8*/]));
				UNK_0xA3BF0AA5A2608191(iLocal_1050[iVar0]);
				UNK_0x6DAD7906B73F064D(&(iLocal_1050[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_1054[iVar0]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_1054[iVar0]))
			{
				func_256(&(Local_1085[iVar0 /*8*/]));
				UNK_0xA3BF0AA5A2608191(iLocal_1054[iVar0]);
				UNK_0x6DAD7906B73F064D(&(iLocal_1054[iVar0]));
			}
		}
		iVar0++;
	}
	UNK_0x71199B01895C6202(bLocal_1325);
}

void func_256(bool bParam0)
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

int func_257(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!*iParam0)
	{
		if (func_6(uParam1, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7))
		{
			*iParam0 = 1;
			return 1;
		}
	}
	return 0;
}

void func_258(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

void func_259()
{
	func_257(&iLocal_1184, &uLocal_1364, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1193)
	{
		case 0:
			if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
			{
				if (!bLocal_1183)
				{
					if (!func_28())
					{
						if (!UNK_0xD17F06053799A7CA())
						{
							func_258("ASS_VA_LOSECOPS", 7500, 1);
							iLocal_1193++;
							bLocal_1183 = true;
						}
					}
				}
			}
			else if (func_36(1116471296 /* Float: 70f */, 1) != 0)
			{
				if (!bLocal_1172)
				{
					if (!func_28())
					{
						if (!UNK_0xD17F06053799A7CA())
						{
							func_258("ASS_VA_GO", 7500, -1);
							iLocal_1193++;
							bLocal_1172 = true;
						}
					}
				}
			}
			else if (!UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0) && func_36(125f, 1) == 0)
			{
				iLocal_1193++;
			}
			break;
		case 1:
			if (!UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0) && func_36(125f, 1) == 0)
			{
				func_252();
				func_255();
				func_261(1);
				func_260();
				iLocal_1193++;
			}
			break;
		case 2:
			func_252();
			iLocal_1031 = 18;
			break;
	}
}

void func_260()
{
	if (UNK_0xC844350D5D58C99A(bLocal_1312))
	{
		if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
		{
			UNK_0x71EDC33E5A423750(bLocal_1312, 1);
		}
		UNK_0x046C362CF15F1935(&bLocal_1312);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_1313))
	{
		if (!UNK_0x437347B10A200C4B(bLocal_1313, 0))
		{
			if ((UNK_0x0A059E0DB9253280(bLocal_1313) && !UNK_0x03068588A1FCED1A(bLocal_1313)) && !UNK_0x757EF87A33649210())
			{
				UNK_0x046C362CF15F1935(&bLocal_1313);
			}
			else
			{
				if (UNK_0xC844350D5D58C99A(iLocal_1054[0]) && !UNK_0x437347B10A200C4B(iLocal_1054[0], 0))
				{
					if (!UNK_0x437347B10A200C4B(bLocal_1313, 0))
					{
						if (UNK_0xC42A92762C58E1B9(iLocal_1054[0], bLocal_1313, 0))
						{
							UNK_0x327AAEE25F323797(iLocal_1054[0]);
						}
					}
				}
				if (UNK_0xC844350D5D58C99A(iLocal_1054[1]) && !UNK_0x437347B10A200C4B(iLocal_1054[1], 0))
				{
					if (!UNK_0x437347B10A200C4B(bLocal_1313, 0))
					{
						if (UNK_0xC42A92762C58E1B9(iLocal_1054[1], bLocal_1313, 0))
						{
							UNK_0x327AAEE25F323797(iLocal_1054[1]);
						}
					}
				}
				if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_1313, 0))
					{
						UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
					}
				}
				UNK_0x046C362CF15F1935(&bLocal_1313);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(iLocal_1316[0]))
	{
		UNK_0x046C362CF15F1935(&(iLocal_1316[0]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_1316[1]))
	{
		UNK_0x046C362CF15F1935(&(iLocal_1316[1]));
	}
	if (UNK_0xC844350D5D58C99A(bLocal_1319) && !UNK_0x437347B10A200C4B(bLocal_1319, 0))
	{
		if (UNK_0xAF6690C489CC6203(bLocal_1319) && UNK_0x9C77D2D0559097F0(bLocal_1319, 1))
		{
			UNK_0x046C362CF15F1935(&bLocal_1319);
		}
	}
}

void func_261(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_1120))
		{
			UNK_0x142CC44DB769B57E(&iLocal_1120);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (UNK_0xE4EDC4B0E92C078B(uLocal_1121[iVar0]))
		{
			UNK_0x142CC44DB769B57E(&(uLocal_1121[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (UNK_0xE4EDC4B0E92C078B(uLocal_1125[iVar0]))
		{
			UNK_0x142CC44DB769B57E(&(uLocal_1125[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (UNK_0xE4EDC4B0E92C078B(uLocal_1125[iVar0]))
		{
			UNK_0x142CC44DB769B57E(&(uLocal_1125[iVar0]));
		}
		iVar0++;
	}
}

void func_262()
{
	if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vLocal_1293, vLocal_1296, bLocal_1243, 1, false, 0))
	{
		bLocal_1152 = true;
	}
	else
	{
		bLocal_1152 = false;
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_1120))
	{
		UNK_0x142CC44DB769B57E(&iLocal_1120);
	}
	UNK_0x51B096AAC60548C1(0.5f);
	if (bLocal_1152)
	{
		func_263();
		iLocal_1031 = 17;
	}
	else
	{
		func_263();
		iLocal_1031 = 16;
	}
	func_92(&uLocal_1529, 0, 0);
}

void func_263()
{
	iLocal_1193 = 0;
}

void func_264()
{
	if (!bLocal_1149)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_1312))
		{
			if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
			{
				UNK_0x71EDC33E5A423750(bLocal_1312, 3);
				if (func_266(bLocal_1312, 5f))
				{
					bLocal_1149 = true;
				}
			}
		}
	}
	if (!bLocal_1146)
	{
		if (func_265(bLocal_1312, 10000))
		{
			bLocal_1146 = true;
		}
	}
}

bool func_265(bool bParam0, int iParam1)
{
	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (((UNK_0x7B5606C651AB51B5(bParam0, 0, iParam1) || UNK_0x7B5606C651AB51B5(bParam0, 2, iParam1)) || UNK_0x7B5606C651AB51B5(bParam0, 3, iParam1)) || UNK_0x7B5606C651AB51B5(bParam0, 1, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_266(bool bParam0, float fParam1)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (func_267(bParam0, -1217.442f, -281.5099f, 36.7495f, 1) <= fParam1)
		{
			return true;
		}
	}
	return false;
}

float func_267(bool bParam0, vector3 vParam1, int iParam4)
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

void func_268()
{
	switch (iLocal_1193)
	{
		case 0:
			if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
			{
				if (func_140())
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_1050[0]))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
						{
							if (UNK_0xC42A92762C58E1B9(iLocal_1050[0], bLocal_1312, 0))
							{
								bLocal_1145 = true;
								func_263();
								iLocal_1031 = 13;
							}
						}
					}
				}
			}
			break;
	}
}

void func_269()
{
	if (UNK_0xC844350D5D58C99A(bLocal_1046))
	{
		if (UNK_0xEB6A8945D1AC98A1(bLocal_1046))
		{
			if (UNK_0x437347B10A200C4B(bLocal_1046, 0))
			{
				bLocal_1150 = true;
				if (UNK_0xE4EDC4B0E92C078B(iLocal_1120))
				{
					UNK_0x142CC44DB769B57E(&iLocal_1120);
				}
				func_116(vLocal_1305, 1097859072 /* Float: 15f */, 1116471296 /* Float: 70f */);
			}
			UNK_0x8B4C4CA774181102(3f, 1073741824 /* Float: 2f */, 3);
			func_263();
			iLocal_1031 = 15;
		}
	}
}

void func_270()
{
	func_261(0);
	func_277();
	func_275();
	func_272();
	func_271();
	func_258("ASS_VA_KILL", 7500, -1);
	SYSTEM::SETTIMERA(0);
	bLocal_1161 = true;
	func_263();
	iLocal_1031 = 12;
}

void func_271()
{
	UNK_0x71199B01895C6202(bLocal_1327);
	UNK_0x71199B01895C6202(bLocal_1328);
}

void func_272()
{
	func_274(&(Local_1691.f_4));
	func_273(&(Local_1691[0]));
	func_273(&(Local_1691[1]));
	func_273(&(Local_1691.f_8[0]));
	func_273(&(Local_1691.f_8[1]));
	func_273(&(Local_1691.f_5[0]));
	func_273(&(Local_1691.f_5[1]));
	func_273(&(Local_1691.f_3));
}

void func_273(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (UNK_0x03068588A1FCED1A(*bParam0))
		{
			UNK_0xEBA53F35D0085654(bParam0);
		}
		else
		{
			UNK_0x6DAD7906B73F064D(bParam0);
		}
	}
}

void func_274(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (UNK_0x03068588A1FCED1A(*bParam0))
		{
			UNK_0x046C362CF15F1935(bParam0);
		}
	}
}

void func_275()
{
	vector3 vVar0[2];
	vector3 vVar7;
	bool bVar10;
	int iVar11;

	if (UNK_0xC844350D5D58C99A(bLocal_1046) && !UNK_0x437347B10A200C4B(bLocal_1046, 0))
	{
		vVar7 = { UNK_0x68F4C0EC296D3901(bLocal_1046, true) };
		bVar10 = UNK_0xD9522BA9E27E1349(bLocal_1046);
	}
	vVar0[0 /*3*/] = { UNK_0x8A5E176FF719A014(vVar7, bVar10, 1f, -1f, 0f) };
	vVar0[1 /*3*/] = { UNK_0x8A5E176FF719A014(vVar7, bVar10, -1f, -1f, 0f) };
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (iVar11 == 0)
		{
			iLocal_1047[iVar11] = UNK_0x36F2404464202779(26, bLocal_1327, vVar0[0 /*3*/], vVar0[0 /*3*/].f_1, 38.3253f, uLocal_1239[iLocal_1202], 1, true);
		}
		else
		{
			iLocal_1047[iVar11] = UNK_0x36F2404464202779(26, bLocal_1328, vVar0[1 /*3*/], vVar0[1 /*3*/].f_1, 38.3253f, uLocal_1239[iLocal_1202], 1, true);
		}
		UNK_0xE8832A9E16A57A1F(iLocal_1047[iVar11], true, 1);
		UNK_0x78ED16BE998AECC7(iLocal_1047[iVar11]);
		UNK_0xAFF39FB306F8E232(iLocal_1047[iVar11], 3, false);
		UNK_0xAFF39FB306F8E232(iLocal_1047[iVar11], 23, true);
		UNK_0xAFF39FB306F8E232(iLocal_1047[iVar11], 30, false);
		UNK_0xAFF39FB306F8E232(iLocal_1047[iVar11], 13, true);
		UNK_0x26A6B1686E33113F(iLocal_1047[iVar11], 2);
		UNK_0xFADC0A217229F6B5(iLocal_1047[iVar11], true);
		func_276(iLocal_1047[iVar11], 1);
		UNK_0x2051F535F4A99479(iLocal_1047[iVar11], 1);
		iVar11++;
	}
}

void func_276(bool bParam0, bool bParam1)
{
	if (bParam0 != bLocal_1046)
	{
		UNK_0x262EF6C6306BEA6C(bParam0, joaat("WEAPON_PISTOL"), -1, false, true);
	}
	if (!bParam1)
	{
		UNK_0x3CC33E4E9CE523F4(bParam0, 1);
		UNK_0xAFF39FB306F8E232(bParam0, 0, true);
	}
	else
	{
		UNK_0x3CC33E4E9CE523F4(bParam0, 2);
		UNK_0xAFF39FB306F8E232(bParam0, 13, true);
	}
	UNK_0x298903DD96203C2C(bParam0, 60);
	UNK_0x083F03A847B640E9(bParam0, 2);
	UNK_0x11AD11297DC58CC7(bParam0, true);
	UNK_0x20EC6650986ACDC7(bParam0, 1);
	UNK_0x6DF7BF67E86AAE86(bParam0, bLocal_1332);
}

void func_277()
{
	func_279();
	iLocal_1202 = UNK_0x09AC81E49EA267F7(false, bLocal_1195);
	bLocal_1046 = UNK_0x36F2404464202779(26, bLocal_1325, vLocal_1258[iLocal_1202 /*3*/], uLocal_1239[iLocal_1202], 1, true);
	UNK_0xE8832A9E16A57A1F(bLocal_1046, true, 1);
	UNK_0x78ED16BE998AECC7(bLocal_1046);
	func_276(bLocal_1046, 1);
	UNK_0x71199B01895C6202(bLocal_1325);
	if (!UNK_0xE4EDC4B0E92C078B(iLocal_1120))
	{
		iLocal_1120 = func_278(bLocal_1046, 0, 0);
	}
	UNK_0x516E63E474722206(iLocal_1120, 1f);
}

int func_278(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_206(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_206(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_206(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_279()
{
	int iVar0;

	bLocal_1195 = false;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!UNK_0x8E28E832BEAC3DCE(vLocal_1248[iVar0 /*3*/], 5f) && !func_283(iVar0, 6f))
		{
			vLocal_1258[bLocal_1195 /*3*/] = { vLocal_1248[iVar0 /*3*/] };
			uLocal_1239[bLocal_1195] = fLocal_1235[iVar0];
			bLocal_1195++;
		}
		iVar0++;
	}
	if (bLocal_1195 == 0)
	{
		if (func_104())
		{
			vLocal_1258[0 /*3*/] = { vLocal_1248[1 /*3*/] };
			uLocal_1239[0] = fLocal_1235[1];
			bLocal_1195++;
		}
		else if (func_282())
		{
			vLocal_1258[0 /*3*/] = { vLocal_1248[0 /*3*/] };
			uLocal_1239[0] = fLocal_1235[0];
			bLocal_1195++;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (func_281(vLocal_1248[iVar0 /*3*/], 1) > 30f && !func_283(iVar0, 6f))
				{
					vLocal_1258[bLocal_1195 /*3*/] = { vLocal_1248[iVar0 /*3*/] };
					uLocal_1239[bLocal_1195] = fLocal_1235[iVar0];
					bLocal_1195++;
				}
				iVar0++;
			}
		}
	}
	if (bLocal_1195 == 0)
	{
		func_280();
	}
}

void func_280()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		fVar4 = SYSTEM::VDIST(vVar1, vLocal_1248[iVar0 /*3*/]);
		if (fVar4 > fLocal_1247)
		{
			fLocal_1247 = fVar4;
			iLocal_1246 = iVar0;
		}
		iVar0++;
	}
	vLocal_1258[0 /*3*/] = { vLocal_1248[iLocal_1246 /*3*/] };
	uLocal_1239[0] = fLocal_1235[iLocal_1246];
}

float func_281(vector3 vParam0, int iParam3)
{
	return func_32(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4()), vParam0, iParam3);
}

bool func_282()
{
	if (func_32(UNK_0x16F2683693E537C9(), -1237.566f, -156.8824f, 39.41317f, 1) < 13f)
	{
		return true;
	}
	return false;
}

bool func_283(int iParam0, bool bParam1)
{
	if (UNK_0x558ADED8B93EA0F6(vLocal_1248[iParam0 /*3*/], bParam1))
	{
		return true;
	}
	return false;
}

void func_284()
{
	switch (iLocal_1193)
	{
		case 0:
			if (!bLocal_1162)
			{
				func_112(&Local_360, 4);
				func_287();
				SYSTEM::SETTIMERA(0);
				iLocal_1193++;
			}
			break;
		case 1:
			if (((bLocal_1141 && !bLocal_1139) && func_286()) && func_285())
			{
				func_263();
				iLocal_1031 = 11;
			}
			break;
	}
}

bool func_285()
{
	int iVar0;

	UNK_0x523BCC9DC80CD82F(bLocal_1325);
	if (UNK_0xB87F6CF6E5628C67(bLocal_1325))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_286()
{
	if (((UNK_0xC844350D5D58C99A(iLocal_1050[0]) && UNK_0xC844350D5D58C99A(iLocal_1050[1])) && !UNK_0xEB6A8945D1AC98A1(iLocal_1050[0])) && !UNK_0xEB6A8945D1AC98A1(iLocal_1050[1]))
	{
		if (UNK_0xC42A92762C58E1B9(iLocal_1050[0], bLocal_1312, 0) && UNK_0xC42A92762C58E1B9(iLocal_1050[1], bLocal_1312, 0))
		{
			return true;
		}
	}
	return false;
}

void func_287()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_1033[iVar0] = 4;
		iVar0++;
	}
	bLocal_1155 = true;
}

void func_288()
{
	switch (iLocal_1193)
	{
		case 0:
			func_310(1, "assassin_hotel_plan_attack", 0, 0, 0, 1);
			func_112(&Local_360, 2);
			if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
			{
				UNK_0x56FDC9ADE35F7DB0(bLocal_1312, false, true, 0);
			}
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					if (UNK_0xC844350D5D58C99A(bLocal_1319) && !UNK_0x437347B10A200C4B(bLocal_1319, 0))
					{
						func_296(bLocal_1319);
					}
				}
			}
			func_293();
			func_292();
			UNK_0xC92DB9682A650680("ASS1_START");
			UNK_0x5D96D8530B3D0904(&Local_360, 4);
			func_258("ASS_VA_PLANT", 7500, 1);
			iLocal_1193++;
			break;
		case 1:
			if (bLocal_1168)
			{
				if (((!func_291(&bLocal_1314) && !func_290(&(bLocal_1320[0]), &bLocal_1189)) && !func_290(&(bLocal_1320[1]), &bLocal_1189)) && !func_290(&(bLocal_1320[2]), &bLocal_1189))
				{
					SYSTEM::SETTIMERA(0);
					func_263();
					iLocal_1031 = 10;
				}
				else
				{
					func_289();
				}
			}
			break;
	}
}

void func_289()
{
	iLocal_1044 = 1;
	bLocal_1139 = true;
}

bool func_290(var uParam0, bool bParam1)
{
	if (!UNK_0xC844350D5D58C99A(*uParam0))
	{
		return false;
	}
	if (!UNK_0xC844350D5D58C99A(bLocal_1313))
	{
		return false;
	}
	if (func_30(*uParam0, bLocal_1313, 1) <= 5f)
	{
		bLocal_1314 = *uParam0;
		*bParam1 = 1;
		return true;
	}
	return false;
}

bool func_291(bool bParam0)
{
	vector3 vVar0;

	*bParam0 = UNK_0x83C1D4B63BBD91F6(-1221.954f, -210.746f, 38.638f, 27f, false, 4);
	if (((*bParam0 != 0 && *bParam0 != bLocal_1312) && *bParam0 != bLocal_1313) && *bParam0 != Local_1691.f_4)
	{
		if (UNK_0xC844350D5D58C99A(*bParam0) && !UNK_0x437347B10A200C4B(*bParam0, 0))
		{
			if (UNK_0xA30B8362589C124A(*bParam0, -1, 0) == 0)
			{
				vVar0 = { UNK_0x68F4C0EC296D3901(*bParam0, true) };
				vVar0 = { vVar0 };
				return true;
			}
		}
	}
	if (bLocal_1319 != 0)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_1319) && !UNK_0x437347B10A200C4B(bLocal_1319, 0))
		{
			if (!func_99(bLocal_1319))
			{
				vVar0 = { UNK_0x68F4C0EC296D3901(bLocal_1319, true) };
				return true;
			}
		}
	}
	return false;
}

void func_292()
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!UNK_0xC844350D5D58C99A(iLocal_1050[iVar1]))
		{
			if (iVar1 == 2)
			{
				bVar0 = bLocal_1328;
			}
			else
			{
				bVar0 = bLocal_1327;
			}
			iLocal_1050[iVar1] = UNK_0x36F2404464202779(26, bVar0, vLocal_1268[iVar1 /*3*/], fLocal_1221[iVar1], 1, true);
			if (iVar1 == 0)
			{
				UNK_0x64F9F278AB9DCA2C(iLocal_1050[iVar1], false, false, 2, 0);
				UNK_0x64F9F278AB9DCA2C(iLocal_1050[iVar1], 3, false, false, 0);
				UNK_0x64F9F278AB9DCA2C(iLocal_1050[iVar1], 4, false, true, 0);
				UNK_0x64F9F278AB9DCA2C(iLocal_1050[iVar1], 8, false, false, 0);
				UNK_0x64F9F278AB9DCA2C(iLocal_1050[iVar1], 11, false, false, 0);
			}
			else if (iVar1 == 1)
			{
				UNK_0x64F9F278AB9DCA2C(iLocal_1050[iVar1], false, true, 2, 0);
				UNK_0x64F9F278AB9DCA2C(iLocal_1050[iVar1], 3, false, true, 0);
				UNK_0x64F9F278AB9DCA2C(iLocal_1050[iVar1], 4, false, false, 0);
				UNK_0x64F9F278AB9DCA2C(iLocal_1050[iVar1], 8, false, false, 0);
				UNK_0x64F9F278AB9DCA2C(iLocal_1050[iVar1], 11, false, 2, 0);
			}
			else if (iVar1 == 2)
			{
				UNK_0x64F9F278AB9DCA2C(iLocal_1050[iVar1], false, true, 2, 0);
				UNK_0x64F9F278AB9DCA2C(iLocal_1050[iVar1], 3, false, 2, 0);
				UNK_0x64F9F278AB9DCA2C(iLocal_1050[iVar1], 4, false, true, 0);
				UNK_0x64F9F278AB9DCA2C(iLocal_1050[iVar1], 8, false, false, 0);
				UNK_0x64F9F278AB9DCA2C(iLocal_1050[iVar1], 11, true, true, 0);
			}
		}
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_1050[iVar1]))
		{
			UNK_0x25C5402CC10F76CD(iLocal_1050[iVar1], false);
			UNK_0xFADC0A217229F6B5(iLocal_1050[iVar1], true);
			UNK_0xAFF39FB306F8E232(iLocal_1050[iVar1], 23, true);
			UNK_0xAFF39FB306F8E232(iLocal_1050[iVar1], 30, false);
			UNK_0x26A6B1686E33113F(iLocal_1050[iVar1], 2);
			UNK_0x4E885A246A9D983A(iLocal_1050[iVar1], 104, true);
			func_276(iLocal_1050[iVar1], 1);
		}
		iVar1++;
	}
}

void func_293()
{
	func_295();
	func_294();
	UNK_0x71199B01895C6202(bLocal_1329);
}

void func_294()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!UNK_0xC844350D5D58C99A(iLocal_1054[iVar0]))
		{
			if (iVar0 == 0)
			{
				iLocal_1054[iVar0] = UNK_0x852A19533F896693(bLocal_1313, 26, bLocal_1327, -1, 1, true);
			}
			else if (iVar0 == 1)
			{
				iLocal_1054[iVar0] = UNK_0x852A19533F896693(bLocal_1313, 26, bLocal_1328, false, 1, true);
			}
			func_276(iLocal_1054[iVar0], 1);
			UNK_0xAFF39FB306F8E232(iLocal_1054[iVar0], 3, false);
			UNK_0xAFF39FB306F8E232(iLocal_1054[iVar0], 23, true);
			UNK_0xAFF39FB306F8E232(iLocal_1054[iVar0], 30, false);
			UNK_0x26A6B1686E33113F(iLocal_1054[iVar0], 2);
			UNK_0xFADC0A217229F6B5(iLocal_1054[iVar0], true);
		}
		iVar0++;
	}
}

void func_295()
{
	if (!UNK_0xC844350D5D58C99A(bLocal_1313))
	{
		bLocal_1313 = UNK_0x122AAB0B1D6F55AD(bLocal_1329, vLocal_1284, bLocal_1233, true, true, false);
		UNK_0xC6A6B4DDD6DC073A(bLocal_1313, false);
	}
}

void func_296(bool bParam0)
{
	func_297(&(Global_105187.f_2890), &Global_105187, bParam0, 1);
}

int func_297(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (UNK_0xDF1306B443CD3D15(bParam2, 0))
	{
		func_299(uParam0, bParam2, iParam3);
		uParam1->f_4 = bParam2;
		if (func_298(bParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

bool func_298(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_98744.f_22[iVar0] == bParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_299(var uParam0, bool bParam1, int iParam2)
{
	func_305(bParam1, &(uParam0->f_12));
	uParam0->f_7 = func_302(bParam1, 145, 0);
	uParam0->f_11 = func_301(bParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_300(bParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
		uParam0->f_6 = UNK_0xD9522BA9E27E1349(bParam1);
		uParam0->f_3 = { UNK_0x56E9E0FD5ACCD35D(bParam1) };
		if (UNK_0x3D1053F9EB43B7AD(bParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_76346 == bParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_300(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_484[iVar0]))
		{
			if (bParam0 == Global_75441.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_301(bool bParam0)
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

int func_302(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == bParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_96085[iVar0])
				{
					if (iParam2 == 0 || UNK_0x134B62B726CEC8E6(bParam0) == func_303(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_303(int iParam0, int iParam1)
{
	struct<82> Var0;

	if (func_20(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_304(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_304(int iParam0, var uParam1, int iParam2)
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

void func_305(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_309(uParam1);
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
		if (uParam1->f_65 == -1 && !func_308(uParam1->f_66))
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
		func_307(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_306(iVar0 + 1));
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

int func_306(int iParam0)
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

int func_307(bool bParam0, var uParam1, var uParam2)
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

bool func_308(int iParam0)
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

void func_309(var uParam0)
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

void func_310(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;

	if (iParam3 == 1)
	{
		if (!UNK_0x7F8A39872A07D2CE("FinaleC2", UNK_0xBB0808A181D4745C()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_98781)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_98781)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_164(1);
		if (iParam0 <= Global_98781)
		{
		}
		iVar1 = func_377(UNK_0xBB0808A181D4745C(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_111638.f_9080.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_375(iVar1);
			cVar3 = { Global_89532[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_111638.f_9080.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
				}
			}
			UNK_0x353729B0A07DC11A(&cVar3, iVar2, Global_98781, iParam0);
		}
		else
		{
			iVar5 = func_370(UNK_0xBB0808A181D4745C(), 1);
			if (iVar5 != -1)
			{
				Global_111638.f_18569[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_369(iVar5)}, 4);
				UNK_0x353729B0A07DC11A(&uVar6, 0, Global_98781, iParam0);
			}
			else
			{
				iVar10 = func_368(&(Global_98744.f_3));
				if (iVar10 > -1)
				{
					Global_111638.f_24981.f_4[iVar10] = 0;
				}
			}
		}
		Global_92922 = iParam2;
		Global_98781 = iParam0;
		func_311(iParam0, bParam1, bParam4, iParam5);
		if (UNK_0x7F8A39872A07D2CE(bParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_98781)
	{
	}
}

void func_311(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	func_312(&Global_105187, UNK_0xBB0808A181D4745C(), iParam0, bParam1, iParam3, bParam2);
}

void func_312(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	*uParam0 = func_18();
	uParam0->f_1 = func_357();
	UNK_0x1BC83DD08AA82285(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		func_331(&(uParam0->f_2884), 0);
		func_330(UNK_0x16F2683693E537C9());
		func_323(UNK_0x16F2683693E537C9(), 0);
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_111638.f_2358.f_539.f_294[iVar1];
		if (iVar1 == func_322())
		{
			func_318(UNK_0x16F2683693E537C9(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_98469[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_98469[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_98469[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_98469[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_98469[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_98469[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_98469[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_98469[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_98469[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_98469[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_111638.f_2358.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_111638.f_2358.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 1:
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 2:
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				uParam0->f_9[iVar1] = Global_111638.f_20559.f_233[iVar1 /*69*/].f_1;
				uParam0->f_13[iVar1] = Global_58686[iVar1];
				uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_111638.f_2358.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
				uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_111638.f_2358.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/][iVar0];
					uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/].f_5[iVar0];
					uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/].f_10[iVar0];
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 <= 2)
				{
					uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_111638.f_2358[iVar1 /*164*/][iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_4[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_8[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_12[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_16[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_20[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_24[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_28[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_32[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_36[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_40[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_44[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_48[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_52[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_56[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_60[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_64[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_68[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_72[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_76[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_80[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_84[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_88[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_92[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_96[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_100[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_104[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_108[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_112[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_116[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_120[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_124[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_128[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_132[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_136[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_140[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_144[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_148[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_152[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_156[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_160[iVar0];
					iVar0++;
				}
				iVar1++;
			}
			UNK_0x6FB46C25CCB7E6D5(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
			UNK_0x6FB46C25CCB7E6D5(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
			UNK_0x6FB46C25CCB7E6D5(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
			uParam0->f_5 = 145;
			if (iParam4 == 1)
			{
				func_314(&(uParam0->f_2890), uParam0, bParam5, 1, 1, 0);
			}
			func_313(&(uParam0->f_2980));
			bParam3 = bParam3;
			iParam2 = iParam2;
		}

int func_313(var uParam0)
{
	*uParam0 = Global_94593;
	uParam0->f_1 = Global_94594;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_314(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	bool bVar0;

	if (bParam2 == 0)
	{
		bParam2 = UNK_0x16F2683693E537C9();
	}
	if (UNK_0xC844350D5D58C99A(bParam2))
	{
		uParam1->f_5 = func_21(bParam2);
	}
	if (func_315(bParam2, &bVar0, iParam3, iParam5))
	{
		func_297(uParam0, uParam1, bVar0, iParam4);
	}
	else if (UNK_0xC844350D5D58C99A(bVar0))
	{
		if (!UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0x4906F8A34E9F4814(bVar0, joaat("SKYLIFT")) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bVar0, 0))
			{
				func_297(uParam0, uParam1, bVar0, iParam4);
			}
		}
	}
}

bool func_315(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			if (bParam0 == UNK_0x16F2683693E537C9())
			{
				*bParam1 = UNK_0x728870EB733D12A1();
			}
			else
			{
				*bParam1 = UNK_0x6937EA2286828455(bParam0, 1);
			}
			if (UNK_0xC844350D5D58C99A(*bParam1))
			{
				if (UNK_0xDF1306B443CD3D15(*bParam1, 0))
				{
					if (iParam2 == 0 || UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(*bParam1, true), UNK_0x68F4C0EC296D3901(bParam0, true), 1) < 100f)
					{
						if (UNK_0x4906F8A34E9F4814(*bParam1, joaat("TAXI")))
						{
							if (UNK_0xA30B8362589C124A(*bParam1, -1, 0) != bParam0 && UNK_0xA30B8362589C124A(*bParam1, -1, 0) != 0)
							{
								return false;
							}
						}
						if (func_316(*bParam1, func_18(), 1))
						{
							bVar0 = UNK_0xBB0808A181D4745C();
							if (!UNK_0x7F8A39872A07D2CE(bVar0, "save_anywhere"))
							{
								return false;
							}
							else if (!UNK_0x405E212DDE472467(bParam0, 1))
							{
								return false;
							}
						}
						if (iParam3 == 1)
						{
							if (UNK_0x30F813723591D02E(*bParam1, "IgnoredByQuickSave"))
							{
								if (UNK_0xB2C7CF65CF9B897C(*bParam1, "IgnoredByQuickSave"))
								{
									return false;
								}
							}
						}
						else if (UNK_0x4906F8A34E9F4814(*bParam1, joaat("BLIMP")))
						{
							return false;
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_316(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_317(iParam1, iVar0, &uVar1, &iVar9))
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

bool func_317(int iParam0, int iParam1, char* sParam2, int iParam3)
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

void func_318(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		iVar0 = func_21(bParam0);
		bVar1 = false;
		while (bVar1 < 12)
		{
			func_321(bParam0, bVar1, &(uParam1->f_13[bVar1]), uParam1[bVar1], &(uParam1->f_26[bVar1]), iParam2, 145);
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 9)
		{
			func_320(bParam0, bVar1, &(uParam1->f_39[bVar1]), &(uParam1->f_49[bVar1]), iParam2, 145);
			bVar1++;
		}
		if (func_20(iVar0))
		{
			uParam1->f_59 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_64;
		}
		else if (UNK_0x8CD06866876216F2() && UNK_0x134B62B726CEC8E6(bParam0) == UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			if (func_319(161, iParam3))
			{
				uParam1->f_59 = func_175(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_175(752, iParam3, 0);
			}
			uParam1->f_60 = func_175(753, iParam3, 0);
			uParam1->f_61 = func_175(754, iParam3, 0);
		}
		if (UNK_0x8CD06866876216F2() && bParam0 == UNK_0x16F2683693E537C9())
		{
			if (func_319(161, iParam3))
			{
				uParam1->f_59 = func_175(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_175(752, iParam3, 0);
			}
		}
	}
}

bool func_319(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_170(iParam1)];
	if (UNK_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return false;
}

void func_320(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;

	iVar0 = func_21(bParam0);
	if (bParam0 != 0)
	{
		*uParam2 = UNK_0x98F1B512A2CC07C5(bParam0, bParam1);
		*uParam3 = UNK_0x22286A85EDEAEC56(bParam0, bParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (bParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (bParam0 != 0)
			{
				if (UNK_0xDCCE25EA1C1D1F76(bParam0) && UNK_0x6BE6D34EA3F561AC(bParam0) != -1)
				{
					*uParam2 = UNK_0x6BE6D34EA3F561AC(bParam0);
					*uParam3 = UNK_0x7E1F0AD2CE37D34C(bParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (bParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (bParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		case 1:
			if (bParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		case 2:
			if (bParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_321(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;

	iVar0 = func_21(bParam0);
	if (bParam0 != 0)
	{
		*uParam2 = UNK_0x36C584991B4C183F(bParam0, bParam1);
		*uParam3 = UNK_0xDADA8E1DD0D0D9D9(bParam0, bParam1);
		*uParam4 = UNK_0xAA973E78065E07A0(bParam0, bParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		case 1:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		case 2:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_322()
{
	func_19();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_323(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar0 = func_21(bParam0);
	if (func_20(iVar0) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (bParam0 == UNK_0x16F2683693E537C9())
		{
			func_324(bParam0, &(Global_111638.f_2358.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_111638.f_2358.f_539.f_1730[iVar2 /*4*/][iVar0] = UNK_0x923C832C9AB56966(iVar2);
				if (bParam1)
				{
					iVar1 = UNK_0xFA91242148B28E7D();
					if (Global_111638.f_2358.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_111638.f_2358.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			UNK_0x812D6591566D640E(UNK_0xD803B885F5E47A62(), &bVar3);
			if (iVar0 == 0)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP0_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
			else if (iVar0 == 1)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP1_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
			else if (iVar0 == 2)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP2_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
		}
	}
}

void func_324(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	bool bVar73;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_329(iVar0);
			if (iVar3 != 0)
			{
				Var4 = UNK_0x3F0B5EEC37A0EDD3(bParam0, func_329(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("WEAPON_UNARMED"))
				{
					Var4.f_1 = UNK_0xD2AEDBB0268DF71A(bParam0, Var4);
					if (Var4 == joaat("GADGET_PARACHUTE"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = UNK_0x7DD9FDEA5DFB355E(bParam0, Var4);
					Var4.f_4 = UNK_0x7F1C58A86289ED1A(bParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!UNK_0x9AEFFB8166364079(bParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					bVar1 = false;
					iVar2 = func_327(Var4, bVar1);
					while (iVar2 != 0)
					{
						if (UNK_0xAFB8387ED2D7213E(bParam0, Var4, iVar2))
						{
							UNK_0x5D96D8530B3D0904(&(Var4.f_2), bVar1);
						}
						bVar1++;
						iVar2 = func_327(Var4, bVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = UNK_0x4160B65AE085B5A9();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((UNK_0x310836EE7129BA33(iVar9, &Var11) && !func_326(Var11.f_1)) && iVar72 < 51)
			{
				if (!UNK_0x232048AB4B0E0259(Var11))
				{
					Var4 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = UNK_0xD2AEDBB0268DF71A(bParam0, Var4);
					if (UNK_0x440C646F2F11A2A1(bParam0, Var4, 0))
					{
						Var4.f_3 = UNK_0x7DD9FDEA5DFB355E(bParam0, Var4);
						Var4.f_4 = UNK_0x7F1C58A86289ED1A(bParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!UNK_0x9AEFFB8166364079(bParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					bVar73 = false;
					bVar1 = false;
					while (bVar1 < UNK_0xAD2A7A6DFF55841B(iVar9))
					{
						if (UNK_0x31D5E073B6F93CDC(iVar9, bVar1, &Var50))
						{
							if (!func_325(Var50.f_3))
							{
								if (UNK_0xAFB8387ED2D7213E(bParam0, Var4, Var50.f_3))
								{
									UNK_0x5D96D8530B3D0904(&(Var4.f_2), bVar73);
								}
								bVar73++;
							}
						}
						bVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!UNK_0x440C646F2F11A2A1(bParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

bool func_325(int iParam0)
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

bool func_326(int iParam0)
{
	if (UNK_0x8CD06866876216F2())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return false;
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return false;
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return false;
			case joaat("WEAPON_BULLPUPRIFLE"):
				return false;
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return false;
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return false;
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return false;
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return false;
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return false;
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case -1523701417:
			case -2112826155:
			case -664359727:
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
				return true;
		}
	}
	return false;
}

int func_327(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			if (iParam0 != 0)
			{
				iVar1 = func_328(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					bVar2 = false;
					while (bVar2 < UNK_0xA942498EEAA3EEAD(iVar1))
					{
						if (UNK_0x8B27EE8DAA2A39B3(iVar1, bVar2, &Var43))
						{
							if (!func_325(Var43.f_3))
							{
								if (iVar3 == bParam1)
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

int func_328(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = UNK_0x037F36BEA9A47381();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (UNK_0x6532540B34EE6273(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_329(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("SLOT_UNARMED");
			break;
		case 1:
			iVar0 = joaat("SLOT_KNIFE");
			break;
		case 2:
			iVar0 = joaat("SLOT_NIGHTSTICK");
			break;
		case 3:
			iVar0 = joaat("SLOT_HAMMER");
			break;
		case 4:
			iVar0 = joaat("SLOT_BAT");
			break;
		case 5:
			iVar0 = joaat("SLOT_CROWBAR");
			break;
		case 6:
			iVar0 = joaat("SLOT_GOLFCLUB");
			break;
		case 7:
			iVar0 = joaat("SLOT_STUNGUN");
			break;
		case 8:
			iVar0 = joaat("SLOT_PISTOL");
			break;
		case 9:
			iVar0 = joaat("SLOT_COMBATPISTOL");
			break;
		case 10:
			iVar0 = joaat("SLOT_APPISTOL");
			break;
		case 11:
			iVar0 = joaat("SLOT_MICROSMG");
			break;
		case 12:
			iVar0 = joaat("SLOT_SMG");
			break;
		case 13:
			iVar0 = joaat("SLOT_ASSAULTRIFLE");
			break;
		case 14:
			iVar0 = joaat("SLOT_CARBINERIFLE");
			break;
		case 15:
			iVar0 = joaat("SLOT_ADVANCEDRIFLE");
			break;
		case 16:
			iVar0 = joaat("SLOT_MG");
			break;
		case 17:
			iVar0 = joaat("SLOT_COMBATMG");
			break;
		case 18:
			iVar0 = joaat("SLOT_PUMPSHOTGUN");
			break;
		case 19:
			iVar0 = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
		case 20:
			iVar0 = joaat("SLOT_ASSAULTSHOTGUN");
			break;
		case 21:
			iVar0 = joaat("SLOT_SNIPERRIFLE");
			break;
		case 22:
			iVar0 = joaat("SLOT_HEAVYSNIPER");
			break;
		case 23:
			iVar0 = joaat("SLOT_GRENADELAUNCHER");
			break;
		case 24:
			iVar0 = joaat("SLOT_RPG");
			break;
		case 25:
			iVar0 = joaat("SLOT_MINIGUN");
			break;
		case 26:
			iVar0 = joaat("SLOT_GRENADE");
			break;
		case 27:
			iVar0 = joaat("SLOT_STICKYBOMB");
			break;
		case 28:
			iVar0 = joaat("SLOT_SMOKEGRENADE");
			break;
		case 29:
			iVar0 = joaat("SLOT_MOLOTOV");
			break;
		case 30:
			iVar0 = joaat("SLOT_FIREEXTINGUISHER");
			break;
		case 31:
			iVar0 = joaat("SLOT_PETROLCAN");
			break;
		case 33:
			iVar0 = joaat("SLOT_PARACHUTE");
			break;
		case 34:
			iVar0 = joaat("SLOT_DIGISCANNER");
			break;
		case 35:
			iVar0 = joaat("SLOT_OBJECT");
			break;
		case 36:
			iVar0 = joaat("SLOT_ASSAULTSMG");
			break;
		case 37:
			iVar0 = joaat("SLOT_BULLPUPSHOTGUN");
			break;
		case 38:
			iVar0 = joaat("SLOT_PISTOL50");
			break;
	}
	return iVar0;
}

void func_330(bool bParam0)
{
	int iVar0;

	iVar0 = func_21(bParam0);
	if (func_20(iVar0) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		Global_111638.f_2358.f_539.f_294[iVar0] = UNK_0x34460709B9A5160B(bParam0);
	}
}

void func_331(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;

	*uParam0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	uParam0->f_3 = UNK_0xD9522BA9E27E1349(UNK_0x16F2683693E537C9());
	uParam0->f_5 = UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9());
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		uParam0->f_4 = UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (UNK_0x8A22C4C08282BF26(joaat("FINALE_CHOICE")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == UNK_0x0D1736C2E221BCEA(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_334(&iVar0))
		{
			if (func_333(iVar0, &vVar1, &uVar4))
			{
				vVar1.f_2 = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar5 = func_18();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_332(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

bool func_332(vector3 vParam0, bool bParam3, vector3 vParam4)
{
	int iVar0;
	int iVar1;

	if (!UNK_0xD1BF3090E1F8300E(vParam0))
	{
		iVar0 = UNK_0x0D1736C2E221BCEA(vParam4, bParam3);
		if (!UNK_0x31609A585163CBAC(iVar0))
		{
			return false;
		}
		iVar1 = UNK_0x16804749AA17EEA8(vParam0);
		if (iVar1 == iVar0)
		{
			return true;
		}
	}
	return false;
}

bool func_333(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_50(*uParam1, 0f, 0f, 0f, 0);
}

bool func_334(int iParam0)
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (func_356())
		{
			*iParam0 = func_340(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), 6, -1, 0, 1, -1);
			if (func_339(*iParam0) && !func_335(*iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_335(int iParam0)
{
	return func_336(iParam0, 0, 1);
}

bool func_336(int iParam0, bool bParam1, bool bParam2)
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
		if (func_338() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_175(func_337(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

int func_337(int iParam0)
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

int func_338()
{
	return Global_30768;
}

bool func_339(int iParam0)
{
	return func_336(iParam0, 5, 1);
}

int func_340(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam3 == 6 || iParam3 == func_355(iVar0))
		{
			if (!bParam5 || func_354(iVar0))
			{
				fVar1 = UNK_0x0EB28750412C3A5A(vParam0, func_341(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (bParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_341(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
		case 4:
			return 1208.333f, -470.917f, 65.208f;
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		case 45:
			return func_351(Global_100839);
		case 46:
			if (Global_1590374 != func_12())
			{
				if (func_350(Global_1590374))
				{
					return func_343(2, 2);
				}
				else if (func_342(Global_1590374))
				{
					return func_343(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		case 47:
			return 510.1f, 4749.5f, -69f;
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			Jump @1551; //curOff = 1473
			return 203.0799f, 5200.189f, -89.6f;
			Jump @1551; //curOff = 1494
			return 2714.547f, -354.2701f, -55.1867f;
			Jump @1551; //curOff = 1515
			return Global_1696048;
			Jump @1551; //curOff = 1527
			return 1100f, 220f, -50f;
			return 1000000f, 1000000f, 1000000f;
		}

bool func_342(int iParam0)
{
	if (iParam0 != func_12())
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, true)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 2))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_343(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar6;

	vVar6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590374 != func_12())
	{
		if (iParam1 == 3)
		{
			if (func_344(iParam0, 1, &vVar0, 0, 0))
			{
				vVar6 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374 /*876*/].f_274.f_259, 4))
			{
				if (func_344(iParam0, 1, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374 /*876*/].f_274.f_259, 5))
			{
				if (func_344(iParam0, 2, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
		}
	}
	return vVar6;
}

bool func_344(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar6;
	struct<4> Var12;
	vector3 vVar18;

	if (!func_349(iParam3, &Var0))
	{
		return false;
	}
	if (!func_349(iParam1, &vVar6))
	{
		return false;
	}
	if (!bParam4)
	{
		Var12 = { func_347(iParam0) };
	}
	else
	{
		Var12 = { func_346(iParam0) };
	}
	vVar18 = { Var12 - Var0 };
	vVar18 = { func_345(vVar18, -Var0.f_3.f_2) };
	vVar18 = { func_345(vVar18, vVar6.f_3.f_2) };
	*uParam2 = { UNK_0x8A5E176FF719A014(vVar6, 0f, vVar18) };
	uParam2->f_3 = { Var12.f_3 };
	return true;
}

Vector3 func_345(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

struct<6> func_346(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_347(int iParam0)
{
	return func_348(iParam0);
}

struct<6> func_348(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

bool func_349(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		default:
			break;
	}
	return false;
}

bool func_350(int iParam0)
{
	if (iParam0 != func_12())
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 3) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 4)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 5))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_351(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
		case 2:
			return 1060f, -2990f, -35f;
		case 3:
			return 974.9542f, -3000.091f, -35f;
		case 6:
			return -1586.36f, -566.6f, 106.17f;
		case 7:
			return -1389.87f, -465.17f, 82.68f;
		case 8:
			return -145.81f, -590.2f, 171.13f;
		case 9:
			return -62.49f, -823.55f, 288.74f;
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
		case 10:
			return 1103.562f, -3000f, -40f;
		case 11:
			return 938.3077f, -3196.112f, -100f;
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
		case 13:
			return 520.0001f, 4750f, -70f;
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
		case 16:
			return -1421.015f, -3012.587f, -80f;
		case 17:
			if (func_352() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		default:
			return 0f, 0f, -200f;
	}
	return 0f, 0f, -200f;
}

int func_352()
{
	return func_353(UNK_0xD803B885F5E47A62());
}

int func_353(int iParam0)
{
	return UNK_0xDC4DD3980107166C(Global_2425662[iParam0 /*421*/].f_310.f_3, 28, 31);
}

bool func_354(int iParam0)
{
	return func_336(iParam0, 0, 0);
}

int func_355(int iParam0)
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

bool func_356()
{
	return Global_98796.f_345 > 0;
}

var func_357()
{
	var uVar0;

	func_367(&uVar0, UNK_0x4460E481B9E33ADA());
	func_366(&uVar0, UNK_0x8D199E381D262EEF());
	func_365(&uVar0, UNK_0xD8A54335F18763BA());
	func_360(&uVar0, UNK_0x972A296334C9D57B());
	func_359(&uVar0, UNK_0x118229AD063C3C1D());
	func_358(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_358(var uParam0, int iParam1)
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

void func_359(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_360(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_364(*uParam0);
	iVar1 = func_362(*uParam0);
	if (iParam1 < 1 || iParam1 > func_361(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_361(int iParam0, int iParam1)
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

int func_362(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_363(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_363(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_364(int iParam0)
{
	return iParam0 & 15;
}

void func_365(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_366(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_367(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_368(bool bParam0)
{
	if (UNK_0x7F8A39872A07D2CE("BailBond1", bParam0))
	{
		return 0;
	}
	else if (UNK_0x7F8A39872A07D2CE("BailBond2", bParam0))
	{
		return 1;
	}
	else if (UNK_0x7F8A39872A07D2CE("BailBond3", bParam0))
	{
		return 2;
	}
	else if (UNK_0x7F8A39872A07D2CE("BailBond4", bParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_369(int iParam0)
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

int func_370(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar33;
	int iVar34;

	iVar33 = UNK_0x12AB0310C2281427(bParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_371(iVar0, &bVar1);
		if (UNK_0x12AB0310C2281427(bVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_371(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			func_372(bParam1, "Abigail1", func_374(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_373(iParam0), 1, 0);
			break;
		case 1:
			func_372(bParam1, "Abigail2", func_374(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_373(iParam0), 1, 0);
			break;
		case 2:
			func_372(bParam1, "Barry1", func_374(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_373(iParam0), 1, 0);
			break;
		case 3:
			func_372(bParam1, "Barry2", func_374(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_373(iParam0), 1, 1);
			break;
		case 4:
			func_372(bParam1, "Barry3", func_374(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_373(iParam0), 0, 0);
			break;
		case 5:
			func_372(bParam1, "Barry3A", func_374(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 6:
			func_372(bParam1, "Barry3C", func_374(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 7:
			func_372(bParam1, "Barry4", func_374(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_373(iParam0), 0, 0);
			break;
		case 8:
			func_372(bParam1, "Dreyfuss1", func_374(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_373(iParam0), 0, 0);
			break;
		case 9:
			func_372(bParam1, "Epsilon1", func_374(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_373(iParam0), 0, 0);
			break;
		case 10:
			func_372(bParam1, "Epsilon2", func_374(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_373(iParam0), 1, 0);
			break;
		case 11:
			func_372(bParam1, "Epsilon3", func_374(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_373(iParam0), 0, 0);
			break;
		case 12:
			func_372(bParam1, "Epsilon4", func_374(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_373(iParam0), 0, 0);
			break;
		case 13:
			func_372(bParam1, "Epsilon5", func_374(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_373(iParam0), 1, 0);
			break;
		case 14:
			func_372(bParam1, "Epsilon6", func_374(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 15:
			func_372(bParam1, "Epsilon7", func_374(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_373(iParam0), 0, 0);
			break;
		case 16:
			func_372(bParam1, "Epsilon8", func_374(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_373(iParam0), 1, 0);
			break;
		case 17:
			func_372(bParam1, "Extreme1", func_374(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 18:
			func_372(bParam1, "Extreme2", func_374(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 19:
			func_372(bParam1, "Extreme3", func_374(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 20:
			func_372(bParam1, "Extreme4", func_374(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_373(iParam0), 0, 0);
			break;
		case 21:
			func_372(bParam1, "Fanatic1", func_374(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_373(iParam0), 1, 0);
			break;
		case 22:
			func_372(bParam1, "Fanatic2", func_374(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_373(iParam0), 1, 0);
			break;
		case 23:
			func_372(bParam1, "Fanatic3", func_374(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_373(iParam0), 0, 1);
			break;
		case 24:
			func_372(bParam1, "Hao1", func_374(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_373(iParam0), 0, 1);
			break;
		case 25:
			func_372(bParam1, "Hunting1", func_374(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 26:
			func_372(bParam1, "Hunting2", func_374(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 27:
			func_372(bParam1, "Josh1", func_374(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_373(iParam0), 1, 0);
			break;
		case 28:
			func_372(bParam1, "Josh2", func_374(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_373(iParam0), 1, 1);
			break;
		case 29:
			func_372(bParam1, "Josh3", func_374(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_373(iParam0), 1, 1);
			break;
		case 30:
			func_372(bParam1, "Josh4", func_374(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_373(iParam0), 1, 0);
			break;
		case 31:
			func_372(bParam1, "Maude1", func_374(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 32:
			func_372(bParam1, "Minute1", func_374(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 33:
			func_372(bParam1, "Minute2", func_374(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 34:
			func_372(bParam1, "Minute3", func_374(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 35:
			func_372(bParam1, "MrsPhilips1", func_374(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_373(iParam0), 0, 0);
			break;
		case 36:
			func_372(bParam1, "MrsPhilips2", func_374(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_373(iParam0), 0, 0);
			break;
		case 37:
			func_372(bParam1, "Nigel1", func_374(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_373(iParam0), 1, 0);
			break;
		case 38:
			func_372(bParam1, "Nigel1A", func_374(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_373(iParam0), 1, 1);
			break;
		case 39:
			func_372(bParam1, "Nigel1B", func_374(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_373(iParam0), 1, 1);
			break;
		case 40:
			func_372(bParam1, "Nigel1C", func_374(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_373(iParam0), 1, 1);
			break;
		case 41:
			func_372(bParam1, "Nigel1D", func_374(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_373(iParam0), 1, 1);
			break;
		case 42:
			func_372(bParam1, "Nigel2", func_374(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_373(iParam0), 1, 1);
			break;
		case 43:
			func_372(bParam1, "Nigel3", func_374(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_373(iParam0), 1, 1);
			break;
		case 44:
			func_372(bParam1, "Omega1", func_374(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_373(iParam0), 0, 0);
			break;
		case 45:
			func_372(bParam1, "Omega2", func_374(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_373(iParam0), 0, 0);
			break;
		case 46:
			func_372(bParam1, "Paparazzo1", func_374(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 47:
			func_372(bParam1, "Paparazzo2", func_374(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 48:
			func_372(bParam1, "Paparazzo3", func_374(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_373(iParam0), 0, 0);
			break;
		case 49:
			func_372(bParam1, "Paparazzo3A", func_374(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 50:
			func_372(bParam1, "Paparazzo3B", func_374(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 51:
			func_372(bParam1, "Paparazzo4", func_374(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_373(iParam0), 0, 0);
			break;
		case 52:
			func_372(bParam1, "Rampage1", func_374(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_373(iParam0), 0, 0);
			break;
		case 54:
			func_372(bParam1, "Rampage3", func_374(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_373(iParam0), 1, 0);
			break;
		case 55:
			func_372(bParam1, "Rampage4", func_374(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_373(iParam0), 1, 0);
			break;
		case 56:
			func_372(bParam1, "Rampage5", func_374(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_373(iParam0), 0, 0);
			break;
		case 53:
			func_372(bParam1, "Rampage2", func_374(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_373(iParam0), 1, 0);
			break;
		case 57:
			func_372(bParam1, "TheLastOne", func_374(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 58:
			func_372(bParam1, "Tonya1", func_374(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 59:
			func_372(bParam1, "Tonya2", func_374(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 60:
			func_372(bParam1, "Tonya3", func_374(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 61:
			func_372(bParam1, "Tonya4", func_374(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_373(iParam0), 0, 1);
			break;
		case 62:
			func_372(bParam1, "Tonya5", func_374(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_373(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_372(bool bParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
{
	bParam0->f_4 = iParam5;
	*bParam0 = sParam1;
	bParam0->f_1 = { Param2 };
	bParam0->f_3 = iParam4;
	bParam0->f_5 = iParam6;
	bParam0->f_6 = { vParam7 };
	bParam0->f_9 = sParam10;
	StringCopy(&(bParam0->f_10), sParam11, 16);
	bParam0->f_14 = iParam12;
	bParam0->f_15 = sParam13;
	StringCopy(&(bParam0->f_16), sParam14, 24);
	bParam0->f_22 = iParam15;
	bParam0->f_23 = iParam16;
	bParam0->f_24 = iParam17;
	bParam0->f_25 = iParam18;
	bParam0->f_26 = iParam19;
	bParam0->f_27 = iParam20;
	bParam0->f_28 = iParam21;
	bParam0->f_29 = iParam22;
	bParam0->f_30 = iParam23;
	bParam0->f_31 = uParam24;
}

int func_373(int iParam0)
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

struct<2> func_374(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_369(iParam0) };
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

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_376(Global_111638.f_9080.f_99.f_205[10]);
		case 74:
		case 75:
			return func_376(Global_111638.f_9080.f_99.f_205[8]);
		case 84:
		case 85:
			return func_376(Global_111638.f_9080.f_99.f_205[11]);
		case 90:
			return func_376(Global_111638.f_9080.f_99.f_205[7]);
		case 93:
			return func_376(Global_111638.f_9080.f_99.f_205[9]);
	}
	return 0;
}

int func_376(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
	}
	return -1;
}

int func_377(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = UNK_0x12AB0310C2281427(bParam0);
	iVar1 = func_378(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_378(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_89532[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_379()
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		}
		if (UNK_0xC844350D5D58C99A(bVar0))
		{
			if (UNK_0x3D1053F9EB43B7AD(bVar0, -1214.517f, -158.91f, -39.165f, -1243.589f, -238.784f, 39.165f, 15f, 0, false, 0) && !UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bVar0, 0))
			{
				if (UNK_0x9C66D99E63E8E24C(bVar0) <= 0.5f)
				{
					if (!func_58(&uLocal_1345))
					{
						func_55(&uLocal_1345);
					}
				}
				else if (func_58(&uLocal_1345))
				{
					func_56(&uLocal_1345);
				}
				if (func_58(&uLocal_1345))
				{
					if (func_52(&uLocal_1345) > 10f)
					{
						func_37(2);
					}
				}
			}
			else if (func_58(&uLocal_1345))
			{
				func_56(&uLocal_1345);
			}
		}
	}
}

void func_380()
{
	switch (iLocal_1193)
	{
		case 0:
			if (func_411(1084227584 /* Float: 5f */, 1) || (bLocal_1151 && UNK_0x07441E56330B63E3(iLocal_1130)))
			{
				func_410(-1248.398f, -183.366f, 37.72881f, -1216.437f, -196.8727f, 44.07541f, 59.25f, vLocal_1665, fLocal_1668, 1, 1, 1, 0, 0);
				UNK_0x28F5E4DA506AC0CA(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, false, 0);
				UNK_0x679C321F8CAA2CFA(-1220.57f, -185.96f, 38.4f, 50f, 0);
				func_409();
				func_408();
				if (!UNK_0x437347B10A200C4B(bLocal_1312, 0))
				{
					if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
					{
						UNK_0x4D3C3C0B0DE2663E(bLocal_1312, 107, "ASSOJva", 1);
						UNK_0xF12C1D85AFEE8FAD(bLocal_1312, 2500f);
					}
				}
				if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						UNK_0x3CBF2C83A68C1611(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), "OFF");
					}
				}
				iLocal_1193++;
			}
			else if (UNK_0x07441E56330B63E3(iLocal_1130))
			{
			}
			break;
		case 1:
			if (func_381())
			{
				iLocal_1194 = 0;
				UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
				func_518();
				func_263();
				iLocal_1031 = 9;
			}
			break;
	}
}

bool func_381()
{
	int iVar0;

	switch (iLocal_1194)
	{
		case 0:
			func_407(0, 0, 1);
			func_406();
			UNK_0x91F5B0244AAE6222(iLocal_1330, "HAND_SHAKE", 0.2f);
			UNK_0x91F5B0244AAE6222(iLocal_1331, "HAND_SHAKE", 0.2f);
			UNK_0xF1E4C781086FABC1(iLocal_1331, iLocal_1330, 6000, 0, 0);
			UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			UNK_0xA37A90C62806D848(1);
			UNK_0x790015DC92C918E2();
			func_258("ASS_VA_SNIPE1", 7500, 1);
			if (bLocal_1151)
			{
				func_405();
				UNK_0x2FB9A57162E54BAB(0f);
				UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
			}
			else
			{
				func_396();
			}
			SYSTEM::SETTIMERA(0);
			iLocal_1194++;
			break;
		case 1:
			if (!UNK_0x437347B10A200C4B(bLocal_1312, 0))
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
				{
					if (SYSTEM::TIMERA() > 6000)
					{
						if (UNK_0x20D6474D5F4B9FC6(bLocal_1312))
						{
							UNK_0xC55F2A0377488064(bLocal_1312);
						}
						UNK_0x4D3C3C0B0DE2663E(bLocal_1312, 102, "ASSOJva", 1);
						UNK_0xF12C1D85AFEE8FAD(bLocal_1312, 4500f);
						UNK_0x9C8F7A2F15781E10(bLocal_1312, 1);
						func_258("ASS_VA_SNIPE2", 7500, 1);
						UNK_0x86F44313DFA8F00C(iLocal_1330, -1218.861f, -191.0496f, 38.83616f, 3.519839f, -0.000706f, 42.27108f, 38f, 0, 1, 1, 2);
						UNK_0xC9CCB807979D3AC2(iLocal_1330, 0.5f);
						UNK_0x3F803BEAA6CB36A8(iLocal_1330, 7f);
						UNK_0x91F5B0244AAE6222(iLocal_1330, "HAND_SHAKE", 0.2f);
						UNK_0x86F44313DFA8F00C(iLocal_1331, -1218.91f, -190.8791f, 38.84585f, 3.519839f, -0.000706f, 43.33815f, 38f, 0, 1, 1, 2);
						UNK_0xC9CCB807979D3AC2(iLocal_1331, 0.7f);
						UNK_0x3F803BEAA6CB36A8(iLocal_1331, 10f);
						UNK_0x91F5B0244AAE6222(iLocal_1331, "HAND_SHAKE", 0.2f);
						UNK_0xF1E4C781086FABC1(iLocal_1331, iLocal_1330, 2000, 3, 3);
						iLocal_1194++;
					}
				}
			}
			break;
		case 2:
			if (!UNK_0x437347B10A200C4B(bLocal_1312, 0))
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
				{
					if (UNK_0x9901AABAC4D4C590(bLocal_1312) >= 7000f)
					{
						UNK_0x0AD2DA9636D01093(bLocal_1312);
						iLocal_1192 = 0;
						while (iLocal_1192 < 3)
						{
							if (!UNK_0x437347B10A200C4B(iLocal_1050[iLocal_1192], 0))
							{
								if (iLocal_1192 == 0)
								{
									iVar0 = 1250;
								}
								else if (iLocal_1192 == 1)
								{
									iVar0 = 400;
								}
								else
								{
									iVar0 = 0;
								}
								if (UNK_0xD1960163A3042274(iLocal_1050[iLocal_1192], 242628503) != 1)
								{
									UNK_0xF82EA857DA10E0CD(&iLocal_1324);
									UNK_0xDD353D0E9C789D0E(&iLocal_1324);
									UNK_0x75CDA8644CD3B5F5(false, iVar0, 0);
									UNK_0x96167B03C5A77156(false, vLocal_1248[iLocal_1192 /*3*/], 1f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
									UNK_0x75ABDC5F81978924(iLocal_1324);
									UNK_0x78ADC381772E3D54(iLocal_1050[iLocal_1192], iLocal_1324);
									UNK_0xF82EA857DA10E0CD(&iLocal_1324);
								}
							}
							iLocal_1192++;
						}
						SYSTEM::SETTIMERA(0);
						iLocal_1194++;
					}
				}
			}
			break;
		case 3:
			if (SYSTEM::TIMERA() >= 2000)
			{
				if (UNK_0x6C3F127AAF415E69() == 4)
				{
					UNK_0x86F44313DFA8F00C(iLocal_1330, -1265.549f, -213.4919f, 43.0913f, -0.055f, 0.0543f, -50.0795f, 38f, 0, 1, 1, 2);
					UNK_0x91F5B0244AAE6222(iLocal_1330, "HAND_SHAKE", 0.2f);
					UNK_0x86F44313DFA8F00C(iLocal_1331, -1266.063f, -213.922f, 43.0918f, -0.055f, 0.0543f, -50.0795f, 38f, 0, 1, 1, 2);
					UNK_0x91F5B0244AAE6222(iLocal_1331, "HAND_SHAKE", 0.2f);
					UNK_0xF1E4C781086FABC1(iLocal_1331, iLocal_1330, 4000, 3, 3);
					iLocal_1217 = 4000;
				}
				else
				{
					UNK_0x86F44313DFA8F00C(iLocal_1330, -1266.193f, -215.217f, 43.2442f, -3.1088f, 0.0498f, -48.5594f, 38f, 0, 1, 1, 2);
					UNK_0x91F5B0244AAE6222(iLocal_1330, "HAND_SHAKE", 0.2f);
					UNK_0x86F44313DFA8F00C(iLocal_1331, -1267.53f, -215.7824f, 43.1067f, -9.2365f, 0.0498f, -48.3561f, 38f, 0, 1, 1, 2);
					UNK_0x91F5B0244AAE6222(iLocal_1331, "HAND_SHAKE", 0.2f);
					UNK_0xF1E4C781086FABC1(iLocal_1331, iLocal_1330, 4000, 3, 3);
					iLocal_1217 = 4000;
				}
				SYSTEM::SETTIMERA(0);
				iLocal_1194++;
			}
			break;
		case 4:
			if (!bLocal_1190)
			{
				if (UNK_0x6C3F127AAF415E69() == 4)
				{
					if (SYSTEM::TIMERA() >= (iLocal_1217 - 300))
					{
						UNK_0x82A772610883F395("CamPushInNeutral", 0, 0);
						UNK_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						bLocal_1190 = true;
					}
				}
			}
			if (SYSTEM::TIMERA() >= iLocal_1217)
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
				{
					if (UNK_0x20D6474D5F4B9FC6(bLocal_1312))
					{
						UNK_0xC55F2A0377488064(bLocal_1312);
					}
				}
				UNK_0xDB8844D4B7C60440(102, "ASSOJva");
				UNK_0xDB8844D4B7C60440(107, "ASSOJva");
				UNK_0x152BCACCF710B36E(bLocal_1312, true, 1);
				UNK_0x152BCACCF710B36E(bLocal_1312, false, 1);
				UNK_0x152BCACCF710B36E(bLocal_1312, 2, 1);
				UNK_0xA37A90C62806D848(1);
				if (UNK_0x6C3F127AAF415E69() == 4)
				{
					UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				}
				else
				{
					UNK_0x04B065D07D2FB5B9(1, 0f, 1, 0);
				}
				func_386(1, 1, 1);
				return true;
			}
			break;
	}
	if (func_384(iLocal_382))
	{
		UNK_0xA37A90C62806D848(1);
		func_382(1);
		return true;
	}
	return false;
}

void func_382(bool bParam0)
{
	UNK_0x2FB9A57162E54BAB(0f);
	UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
	if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
	{
		if (UNK_0x20D6474D5F4B9FC6(bLocal_1312))
		{
			UNK_0xC55F2A0377488064(bLocal_1312);
		}
		UNK_0xDB8844D4B7C60440(102, "ASSOJva");
		UNK_0xDB8844D4B7C60440(107, "ASSOJva");
		UNK_0xA47B46945FF6DE74(bLocal_1312, vLocal_1290, 1, 0, 0, 1);
		UNK_0xD8F6A53F4799FAFE(bLocal_1312, bLocal_1220);
		UNK_0x152BCACCF710B36E(bLocal_1312, false, 1);
		UNK_0x152BCACCF710B36E(bLocal_1312, true, 1);
		UNK_0x152BCACCF710B36E(bLocal_1312, 2, 1);
		UNK_0x152BCACCF710B36E(bLocal_1312, 2, 1);
		iLocal_1194 = 0;
		UNK_0x790015DC92C918E2();
		UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		func_386(1, 1, 1);
		if (bParam0)
		{
			func_383();
		}
	}
}

void func_383()
{
	UNK_0x82E51BCA72537B6C(1000);
	while (!UNK_0x0F1CCD77290EE12F())
	{
		SYSTEM::WAIT(0);
	}
}

bool func_384(int iParam0)
{
	if (func_385() && UNK_0x1C0640BA9A7327B3() >= iParam0 + 1000)
	{
		UNK_0x53491B90E4FD0E56(500);
		while (!UNK_0x757EF87A33649210())
		{
			SYSTEM::WAIT(0);
		}
		func_234(0);
		func_3();
		return true;
	}
	return false;
}

bool func_385()
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

void func_386(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), true, false);
	}
	UNK_0x2D23BE319D971F4C(1);
	func_388(0, 1, bParam2, 0, 0, 0);
	if (bParam1)
	{
		UNK_0xBFE31971E49FA500(1);
		UNK_0x8BCB70EB440DED83(1);
	}
	func_387(23, 0);
}

void func_387(bool bParam0, bool bParam1)
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

void func_388(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_395(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_15())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_394(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_395(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_394(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_392(UNK_0xD803B885F5E47A62())) && !func_390(UNK_0xD803B885F5E47A62(), 0)) && !func_389()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_392(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_389()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_390(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_391(-1, 0) == 8;
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

int func_391(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_171();
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

bool func_392(bool bParam0)
{
	if (func_390(bParam0, 0))
	{
		return true;
	}
	if (func_393())
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

bool func_393()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_394(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

void func_395(int iParam0)
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

void func_396()
{
	func_397(-1252.463f, -227.5894f, 39.03287f, -1267.239f, -207.9924f, 44.67352f, 17f, -1266.405f, -219.1991f, 41.4459f, 304.8644f, func_404(), 1, 1, 1, 0, 0);
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
		UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -1266.173f, -214.0011f, 41.4459f, 1, 0, 0, 1);
		UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 310.0126f);
	}
}

void func_397(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, vector3 vParam11, bool bParam14, float fParam15, int iParam16, var uParam17, bool bParam18)
{
	func_398(vParam0, vParam3, fParam6, vParam7, fParam10, vParam11, bParam14, fParam15, iParam16, uParam17, bParam18);
}

void func_398(vector3 vParam0, vector3 vParam3, bool bParam6, vector3 vParam7, bool bParam10, vector3 vParam11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	bool bVar13;
	bool bVar14;
	int iVar15;

	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	bVar0 = UNK_0x728870EB733D12A1();
	if (UNK_0xC844350D5D58C99A(bVar0))
	{
		if (!UNK_0xAF6690C489CC6203(bVar0))
		{
			UNK_0x73270B3C9CC833FD(bVar0, true, 0);
			iVar3 = 1;
		}
		if (UNK_0xDF1306B443CD3D15(bVar0, 0))
		{
			if (bParam18)
			{
				func_403(bVar0);
			}
			if (UNK_0x3D1053F9EB43B7AD(bVar0, vParam0, vParam3, bParam6, 0, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				vVar10 = { UNK_0x68F4C0EC296D3901(bVar0, true) };
				if ((vVar10.z > vParam0.z && vVar10.z < vParam3.z) || (vVar10.z > vParam3.z && vVar10.z < vParam0.z))
				{
					if (func_400(bVar0, vParam0, vParam3, bParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (UNK_0x4906F8A34E9F4814(bVar0, joaat("TAXI")))
				{
					if (UNK_0xA30B8362589C124A(bVar0, -1, 0) != UNK_0x16F2683693E537C9() && UNK_0xA30B8362589C124A(bVar0, -1, 0) != 0)
					{
						if (UNK_0x0EB28750412C3A5A(vParam0 + vParam3 / Vector(2f, 2f, 2f), UNK_0x68F4C0EC296D3901(bVar0, true), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_316(bVar0, func_18(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_399(vParam11))
				{
					if (UNK_0xDF1306B443CD3D15(bVar0, 0))
					{
						bVar13 = UNK_0x134B62B726CEC8E6(bVar0);
						UNK_0x064C1B2FD84B6ED5(bVar0, &vVar4, &vVar7);
						if (UNK_0xAFB8495D36825275(bVar13))
						{
							vParam11.x = (vParam11.x + 3f);
							vParam11.f_1 = (vParam11.y + 3f);
						}
						if (((bVar13 == joaat("ZENTORNO") || bVar13 == joaat("BTYPE")) || bVar13 == joaat("DUBSTA3")) || bVar13 == joaat("MONSTER"))
						{
							vParam11 = { vParam11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (bVar13 == joaat("T20") || bVar13 == joaat("VIRGO"))
						{
							vParam11 = { vParam11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((vVar7.x - vVar4.x) > vParam11.x)
						{
							bVar2 = false;
						}
						else if ((vVar7.y - vVar4.y) > vParam11.y)
						{
							bVar2 = false;
						}
						else if ((vVar7.z - vVar4.z) > vParam11.z)
						{
							bVar2 = false;
						}
					}
				}
				if (UNK_0xDF1306B443CD3D15(bVar0, 0))
				{
					if (bVar2)
					{
						UNK_0x28F5E4DA506AC0CA(vParam7, 5f, 0, 0, 0, 0, false, 0);
						UNK_0xD8F6A53F4799FAFE(bVar0, bParam10);
						UNK_0xA47B46945FF6DE74(bVar0, vParam7, 1, 0, 0, 1);
						UNK_0xB9FD7450C0DAB575(bVar0, 1084227584 /* Float: 5f */);
						if (bParam17)
						{
							UNK_0x56FDC9ADE35F7DB0(bVar0, false, true, 0);
							UNK_0x05CA0E7946B27A19(bVar0, 1);
						}
					}
					else
					{
						if (!UNK_0xAF6690C489CC6203(bVar0) || !UNK_0x9C77D2D0559097F0(bVar0, 1))
						{
							UNK_0x73270B3C9CC833FD(bVar0, true, 1);
						}
						if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bVar0, 0))
						{
							UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), UNK_0x68F4C0EC296D3901(bVar0, true), 1, 0, 0, 1);
						}
						UNK_0xA954465BA6FDEFE2(&bVar0);
					}
				}
			}
			if (bParam14)
			{
				UNK_0x10F452EDECF82313(vParam0, vParam3, bParam6, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					if (UNK_0xAF6690C489CC6203(bVar0))
					{
						UNK_0x046C362CF15F1935(&bVar0);
					}
				}
			}
		}
		else
		{
			if (!UNK_0xAF6690C489CC6203(bVar0))
			{
				UNK_0x73270B3C9CC833FD(bVar0, true, 0);
			}
			bVar14 = UNK_0xA30B8362589C124A(bVar0, -1, 0);
			if (UNK_0xC844350D5D58C99A(bVar14) && !UNK_0xEB6A8945D1AC98A1(bVar14))
			{
				UNK_0xA47B46945FF6DE74(bVar14, UNK_0x68F4C0EC296D3901(bVar14, true), 1, 0, 0, 1);
			}
			iVar15 = UNK_0x7087E053058E9F6C(UNK_0x134B62B726CEC8E6(bVar0));
			if (iVar15 <= 2)
			{
				bVar14 = UNK_0xA30B8362589C124A(bVar0, false, 0);
				if (UNK_0xC844350D5D58C99A(bVar14) && !UNK_0xEB6A8945D1AC98A1(bVar14))
				{
					UNK_0xA47B46945FF6DE74(bVar14, UNK_0x68F4C0EC296D3901(bVar14, true), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				bVar14 = UNK_0xA30B8362589C124A(bVar0, true, 0);
				if (UNK_0xC844350D5D58C99A(bVar14) && !UNK_0xEB6A8945D1AC98A1(bVar14))
				{
					UNK_0xA47B46945FF6DE74(bVar14, UNK_0x68F4C0EC296D3901(bVar14, true), 1, 0, 0, 1);
				}
				bVar14 = UNK_0xA30B8362589C124A(bVar0, 2, 0);
				if (UNK_0xC844350D5D58C99A(bVar14) && !UNK_0xEB6A8945D1AC98A1(bVar14))
				{
					UNK_0xA47B46945FF6DE74(bVar14, UNK_0x68F4C0EC296D3901(bVar14, true), 1, 0, 0, 1);
				}
			}
			UNK_0xA954465BA6FDEFE2(&bVar0);
		}
	}
}

bool func_399(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_400(bool bParam0, vector3 vParam1, vector3 vParam4, bool bParam7)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18[4];
	struct<2> Var31;
	struct<2> Var34;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		vParam1.f_2 = vParam4.z;
		vVar0 = { func_402(vParam1 - vParam4) };
		vVar3 = { vVar0 };
		vVar0.x = -vVar3.y;
		vVar0.f_1 = vVar3.x;
		vVar0.f_2 = 0f;
		vVar6 = { vParam1 - vVar0 * FtoV((bParam7 / 2f)) };
		vVar9 = { vParam1 + vVar0 * FtoV((bParam7 / 2f)) };
		vVar12 = { vParam4 - vVar0 * FtoV((bParam7 / 2f)) };
		vVar15 = { vParam4 + vVar0 * FtoV((bParam7 / 2f)) };
		UNK_0xA6B02C1DB14DDA13(UNK_0x134B62B726CEC8E6(bParam0), &Var31, &Var34);
		vVar18[0 /*3*/] = { UNK_0x68E4ADDDDCD7BDDE(bParam0, Var31, Var31.f_1, 0f) };
		vVar18[1 /*3*/] = { UNK_0x68E4ADDDDCD7BDDE(bParam0, Var31, Var34.f_1, 0f) };
		vVar18[2 /*3*/] = { UNK_0x68E4ADDDDCD7BDDE(bParam0, Var34, Var31.f_1, 0f) };
		vVar18[3 /*3*/] = { UNK_0x68E4ADDDDCD7BDDE(bParam0, Var34, Var34.f_1, 0f) };
		if (((((((((((((((func_401(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar9) || func_401(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar9, vVar15)) || func_401(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar12, vVar15)) || func_401(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar12)) || func_401(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar9)) || func_401(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar9, vVar15)) || func_401(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar12, vVar15)) || func_401(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar12)) || func_401(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar9)) || func_401(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar9, vVar15)) || func_401(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar12, vVar15)) || func_401(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar12)) || func_401(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar9)) || func_401(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar9, vVar15)) || func_401(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar12, vVar15)) || func_401(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar12))
		{
			return true;
		}
	}
	return false;
}

int func_401(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
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
	float fVar13;

	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param3;
	fVar3 = Param3.f_1;
	fVar4 = Param6;
	fVar5 = Param6.f_1;
	fVar6 = Param9;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_402(vector3 vParam0)
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

void func_403(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (UNK_0x6EE94F60DA2A2273(bParam0) <= 200f)
			{
				UNK_0x5DAB50E08C3C504A(bParam0, 500f);
			}
			if (UNK_0xD96C5EC6FCB061BA(bParam0) <= 700f)
			{
				UNK_0x5DAB50E08C3C504A(bParam0, 900f);
			}
			if (UNK_0x7F6DC62EA9922664(bParam0) < 200)
			{
				UNK_0x5DAB50E08C3C504A(bParam0, 500f);
			}
		}
	}
}

Vector3 func_404()
{
	return 2.55f, 5.665f, 2.55f;
}

void func_405()
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
		UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vLocal_1302, 1, 0, 0, 1);
		UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 299.4985f);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_1315))
	{
		if (UNK_0xDF1306B443CD3D15(bLocal_1315, 0))
		{
			UNK_0x56FDC9ADE35F7DB0(bLocal_1315, false, true, 0);
			UNK_0xA47B46945FF6DE74(bLocal_1315, -1251.873f, -256.7999f, 38.2695f, 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(bLocal_1315, 296.7603f);
			UNK_0xB9FD7450C0DAB575(bLocal_1315, 1084227584 /* Float: 5f */);
		}
	}
}

int func_406()
{
	iLocal_382 = UNK_0x1C0640BA9A7327B3();
	return iLocal_382;
}

void func_407(bool bParam0, int iParam1, bool bParam2)
{
	UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), false, bParam0);
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x7800CEC090C01D4D(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 15f);
	}
	UNK_0x2D23BE319D971F4C(iParam1);
	func_234(0);
	func_388(1, 1, bParam2, 0, 0, 0);
	UNK_0xBFE31971E49FA500(0);
	UNK_0x8BCB70EB440DED83(0);
	func_387(23, 1);
}

void func_408()
{
	if (UNK_0xC844350D5D58C99A(bLocal_1312))
	{
		if (UNK_0xDF1306B443CD3D15(bLocal_1312, 0))
		{
			iLocal_1192 = 0;
			while (iLocal_1192 < 3)
			{
				if (!UNK_0xC844350D5D58C99A(iLocal_1050[iLocal_1192]))
				{
					if (iLocal_1192 == 0)
					{
						iLocal_1050[iLocal_1192] = UNK_0x852A19533F896693(bLocal_1312, 26, bLocal_1327, -1, 1, true);
						UNK_0x64F9F278AB9DCA2C(iLocal_1050[iLocal_1192], false, false, 2, 0);
						UNK_0x64F9F278AB9DCA2C(iLocal_1050[iLocal_1192], 3, false, false, 0);
						UNK_0x64F9F278AB9DCA2C(iLocal_1050[iLocal_1192], 4, false, true, 0);
						UNK_0x64F9F278AB9DCA2C(iLocal_1050[iLocal_1192], 8, false, false, 0);
						UNK_0x64F9F278AB9DCA2C(iLocal_1050[iLocal_1192], 11, false, false, 0);
					}
					else if (iLocal_1192 == 1)
					{
						iLocal_1050[iLocal_1192] = UNK_0x852A19533F896693(bLocal_1312, 26, bLocal_1327, false, 1, true);
						UNK_0x64F9F278AB9DCA2C(iLocal_1050[iLocal_1192], false, true, 2, 0);
						UNK_0x64F9F278AB9DCA2C(iLocal_1050[iLocal_1192], 3, false, true, 0);
						UNK_0x64F9F278AB9DCA2C(iLocal_1050[iLocal_1192], 4, false, false, 0);
						UNK_0x64F9F278AB9DCA2C(iLocal_1050[iLocal_1192], 8, false, false, 0);
						UNK_0x64F9F278AB9DCA2C(iLocal_1050[iLocal_1192], 11, false, 2, 0);
					}
					else if (iLocal_1192 == 2)
					{
						iLocal_1050[iLocal_1192] = UNK_0x852A19533F896693(bLocal_1312, 26, bLocal_1328, true, 1, true);
						UNK_0x64F9F278AB9DCA2C(iLocal_1050[iLocal_1192], false, true, 2, 0);
						UNK_0x64F9F278AB9DCA2C(iLocal_1050[iLocal_1192], 3, false, 2, 0);
						UNK_0x64F9F278AB9DCA2C(iLocal_1050[iLocal_1192], 4, false, true, 0);
						UNK_0x64F9F278AB9DCA2C(iLocal_1050[iLocal_1192], 8, false, false, 0);
						UNK_0x64F9F278AB9DCA2C(iLocal_1050[iLocal_1192], 11, true, true, 0);
					}
				}
				iLocal_1192++;
			}
		}
	}
}

void func_409()
{
	if (!UNK_0xC844350D5D58C99A(bLocal_1312))
	{
		bLocal_1312 = UNK_0x122AAB0B1D6F55AD(bLocal_1326, vLocal_1287, bLocal_1219, true, true, false);
		UNK_0x71199B01895C6202(bLocal_1326);
		UNK_0xF3F7BF451A720FDF(bLocal_1312, 1);
		UNK_0xE8832A9E16A57A1F(bLocal_1312, true, 1);
		UNK_0xB26AC67EF006D7D4(bLocal_1312, 1);
	}
}

void func_410(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, int iParam11, int iParam12, bool bParam13, float fParam14, int iParam15)
{
	func_398(vParam0, vParam3, fParam6, vParam7, fParam10, 0f, 0f, 0f, iParam11, iParam12, bParam13, fParam14, iParam15);
}

bool func_411(float fParam0, int iParam1)
{
	bool bVar0;

	if (((UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && func_412(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), fParam0, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0)) && !UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!func_58(&uLocal_367))
		{
			func_56(&uLocal_367);
			if (UNK_0xC844350D5D58C99A(UNK_0x728870EB733D12A1()))
			{
				bVar0 = UNK_0x728870EB733D12A1();
				if (UNK_0xDF1306B443CD3D15(bVar0, 0))
				{
					UNK_0x1AEF7184B203A58D(bVar0, 0f);
				}
			}
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
		}
		else if (func_52(&uLocal_367) > 1f || iParam1 == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_412(bool bParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_413(bParam0);
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

void func_413(bool bParam0)
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

void func_414()
{
	bool bVar0;

	switch (iLocal_1193)
	{
		case 0:
			func_428(500);
			func_310(0, "assassin_hotel_go_to_hotel", 0, 0, 0, 1);
			if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
			{
				func_258("ASS_VA_LOSECOPS", 7500, 1);
			}
			UNK_0x28F5E4DA506AC0CA(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, false, 0);
			iLocal_1193++;
			break;
		case 1:
			func_427();
			if (!UNK_0xC844350D5D58C99A(bLocal_1319))
			{
				if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
						if (UNK_0xA30B8362589C124A(bVar0, -1, 0) == UNK_0x16F2683693E537C9())
						{
							bLocal_1319 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
							if (UNK_0xC844350D5D58C99A(bLocal_1319) && !UNK_0x437347B10A200C4B(bLocal_1319, 0))
							{
								func_296(bLocal_1319);
							}
						}
					}
				}
			}
			if (!UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
			{
				if (!func_424())
				{
					if (!UNK_0xE4EDC4B0E92C078B(iLocal_1119))
					{
						iLocal_1119 = func_423(vLocal_1302, 1);
						UNK_0xDC5B2F9D0CCE3A10(iLocal_1119, "ASS_VA_DESTBLIP");
						func_422(&iLocal_1119, -1234.307f, -250.6783f, 38.2238f, 28.914f);
						if (!bLocal_1133)
						{
							func_258("ASS_VA_GOHOTEL", 7500, 1);
							bLocal_1133 = true;
						}
						else if (func_421("ASS_VA_LOSECOPS", 0, 0))
						{
							UNK_0x790015DC92C918E2();
						}
					}
				}
				else if (UNK_0x07441E56330B63E3(iLocal_1130) && func_420())
				{
					func_419();
					func_263();
					iLocal_1031 = 8;
				}
			}
			else if (!func_424())
			{
				func_418(iLocal_1119, "ASS_VA_LOSECOPS");
			}
			else
			{
				func_37(3);
			}
			func_415();
			break;
	}
}

void func_415()
{
	if (!bLocal_1132)
	{
		if (func_281(vLocal_1302, 1) <= 100f)
		{
			func_417();
			iLocal_1130 = UNK_0x372C0B8361DDE4D6(-1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 80f, 12, 127);
			bLocal_1132 = true;
		}
	}
	else if (func_281(vLocal_1302, 1) > 120f)
	{
		if (UNK_0xBD054C76E6F4158B(iLocal_1130))
		{
			UNK_0x51F8DBE54C75AE47(iLocal_1130);
			func_271();
			bLocal_1132 = false;
		}
	}
	else if (!UNK_0xBD054C76E6F4158B(iLocal_1130))
	{
		if (!func_416())
		{
			bLocal_1132 = false;
		}
	}
}

bool func_416()
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0x4906F8A34E9F4814(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), joaat("TAXI")))
		{
			if (UNK_0xA30B8362589C124A(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), -1, 0) != UNK_0x16F2683693E537C9())
			{
				return true;
			}
		}
	}
	return false;
}

void func_417()
{
	UNK_0x523BCC9DC80CD82F(bLocal_1327);
	UNK_0x523BCC9DC80CD82F(bLocal_1328);
}

void func_418(int iParam0, bool bParam1)
{
	if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
	{
		if (UNK_0xE4EDC4B0E92C078B(iParam0))
		{
			UNK_0x142CC44DB769B57E(&iParam0);
			UNK_0x790015DC92C918E2();
			func_258(bParam1, 7500, 1);
		}
	}
}

void func_419()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_1119))
	{
		UNK_0x142CC44DB769B57E(&iLocal_1119);
	}
}

bool func_420()
{
	int iVar0;

	func_417();
	if (UNK_0xB87F6CF6E5628C67(bLocal_1327) && UNK_0xB87F6CF6E5628C67(bLocal_1328))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_421(bool bParam0, int iParam1, bool bParam2)
{
	UNK_0x18B60B994182620C(bParam0);
	if (iParam1 == 1)
	{
		UNK_0x6B012227B3921E18(bParam2);
	}
	return UNK_0xB165082A56EE6E7F();
}

void func_422(int iParam0, vector3 vParam1, float fParam4)
{
	if (UNK_0xE4EDC4B0E92C078B(*iParam0))
	{
		Global_110674 = *iParam0;
		Global_110679 = { vParam1 };
		Global_110683 = fParam4;
	}
}

int func_423(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_206(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

bool func_424()
{
	float fVar0;
	bool bVar1;

	bVar1 = false;
	fVar0 = func_32(bLocal_1045, vLocal_1302, 1);
	if (fVar0 < 200f)
	{
		func_426();
	}
	if (func_425())
	{
		if (UNK_0x5A91F08DF773C39D(bLocal_1045, vLocal_1302, 25f, 25f, 90f, true, true, 0))
		{
			bVar1 = true;
		}
	}
	if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
	{
		if ((fVar0 < 2f || UNK_0x5A91F08DF773C39D(bLocal_1045, vLocal_1302, 2f, 2f, 2f, true, true, 0)) || bVar1)
		{
			if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1141.085f, -192.66f, 75.756f, -1246.085f, -192.66f, 100.756f, 115f, 0, true, 0))
			{
				if (func_425() && bVar1)
				{
					return true;
				}
				else if (!UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9()))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_425()
{
	int iVar0;

	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		return false;
	}
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		return false;
	}
	if (UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()) || UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()))
	{
		bLocal_1315 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		iVar0 = UNK_0x134B62B726CEC8E6(bLocal_1315);
		if (iVar0 != joaat("BLIMP") && iVar0 != joaat("BLIMP2"))
		{
			bLocal_1151 = true;
			return true;
		}
	}
	return false;
}

void func_426()
{
	int iVar0;

	switch (iLocal_1205)
	{
		case 0:
			UNK_0x523BCC9DC80CD82F(joaat("A_M_M_BEVHILLS_01"));
			UNK_0x523BCC9DC80CD82F(joaat("A_F_M_BEVHILLS_01"));
			UNK_0x523BCC9DC80CD82F(joaat("A_F_M_BEVHILLS_02"));
			UNK_0x523BCC9DC80CD82F(joaat("A_M_Y_HIPSTER_01"));
			UNK_0x523BCC9DC80CD82F(joaat("TAXI"));
			UNK_0x29398344B9E5B8A7("OJAS_HotelTaxi01");
			UNK_0x3F423BF5B8125A50("oddjobs@assassinate@hotel@");
			if ((((((UNK_0xB87F6CF6E5628C67(joaat("A_M_M_BEVHILLS_01")) && UNK_0xB87F6CF6E5628C67(joaat("A_F_M_BEVHILLS_01"))) && UNK_0xB87F6CF6E5628C67(joaat("A_F_M_BEVHILLS_02"))) && UNK_0xB87F6CF6E5628C67(joaat("TAXI"))) && UNK_0xB87F6CF6E5628C67(joaat("A_M_Y_HIPSTER_01"))) && UNK_0xB4AE0788C1587752("oddjobs@assassinate@hotel@")) && UNK_0x1C2E18E9C63BEB77("OJAS_HotelTaxi01"))
			{
				iLocal_1205++;
			}
			break;
		case 1:
			Local_1691[0] = UNK_0x36F2404464202779(4, joaat("A_F_M_BEVHILLS_01"), -1220.679f, -203.2689f, 38.3251f, 321.2841f, 1, true);
			Local_1691[1] = UNK_0x36F2404464202779(4, joaat("A_F_M_BEVHILLS_02"), -1219.596f, -201.3663f, 38.3251f, 110.7199f, 1, true);
			UNK_0x11AD11297DC58CC7(Local_1691[0], true);
			UNK_0x11AD11297DC58CC7(Local_1691[1], true);
			UNK_0xDD353D0E9C789D0E(&iVar0);
			UNK_0x0C8C0C840C2D1AD2(false, Local_1691[1], -1, 0, 2);
			UNK_0x0B7C52F2BC1DC8EB(false, "WORLD_HUMAN_TOURIST_MOBILE", -1220.679f, -203.2689f, 38.3251f, 321.2841f, 0, 0, 1);
			UNK_0x75ABDC5F81978924(iVar0);
			if (!UNK_0x437347B10A200C4B(Local_1691[0], 0))
			{
				UNK_0x78ADC381772E3D54(Local_1691[0], iVar0);
			}
			UNK_0xF82EA857DA10E0CD(&iVar0);
			UNK_0xDD353D0E9C789D0E(&iVar0);
			UNK_0x0C8C0C840C2D1AD2(false, Local_1691[0], -1, 0, 2);
			UNK_0x0B7C52F2BC1DC8EB(false, "WORLD_HUMAN_TOURIST_MAP", -1219.596f, -201.3663f, 38.3251f, 110.7199f, 0, 0, 1);
			UNK_0x75ABDC5F81978924(iVar0);
			if (!UNK_0x437347B10A200C4B(Local_1691[1], 0))
			{
				UNK_0x78ADC381772E3D54(Local_1691[1], iVar0);
			}
			UNK_0xF82EA857DA10E0CD(&iVar0);
			Local_1691.f_4 = UNK_0x122AAB0B1D6F55AD(joaat("TAXI"), -1221.73f, -199.0665f, 38.1751f, 152.5038f, true, true, false);
			UNK_0xB9FD7450C0DAB575(Local_1691.f_4, 1084227584 /* Float: 5f */);
			Local_1691.f_3 = UNK_0x852A19533F896693(Local_1691.f_4, 4, joaat("A_M_Y_HIPSTER_01"), -1, 1, true);
			UNK_0x11AD11297DC58CC7(Local_1691.f_3, true);
			UNK_0x0C8C0C840C2D1AD2(Local_1691.f_3, Local_1691[0], -1, 0, 2);
			Local_1691.f_8[0] = UNK_0x36F2404464202779(4, joaat("A_M_M_BEVHILLS_01"), -1211.597f, -184.5331f, 38.3255f, 4.5193f, 1, true);
			Local_1691.f_8[1] = UNK_0x36F2404464202779(4, joaat("A_M_Y_HIPSTER_01"), -1211.654f, -182.7625f, 38.3255f, 166.2532f, 1, true);
			UNK_0x11AD11297DC58CC7(Local_1691.f_8[0], true);
			UNK_0x11AD11297DC58CC7(Local_1691.f_8[1], true);
			UNK_0xC6EB89C59F2AF6B8(Local_1691.f_8[0], "oddjobs@assassinate@hotel@", "idle_a", 8f, -4f, -1, 1, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(Local_1691.f_8[1], "oddjobs@assassinate@hotel@", "argue_b", 8f, -4f, -1, 1, false, 0, 0, 0);
			Local_1691.f_5[0] = UNK_0x36F2404464202779(4, joaat("A_M_M_BEVHILLS_01"), -1229.099f, -176.3197f, 38.3255f, 231.8036f, 1, true);
			Local_1691.f_5[1] = UNK_0x36F2404464202779(4, joaat("A_F_M_BEVHILLS_02"), -1249.779f, -162.4767f, 39.4131f, 220.1651f, 1, true);
			UNK_0x11AD11297DC58CC7(Local_1691.f_5[0], true);
			UNK_0x11AD11297DC58CC7(Local_1691.f_5[1], true);
			UNK_0xC6EB89C59F2AF6B8(Local_1691.f_5[0], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(Local_1691.f_5[1], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, false, 0, 0, 0);
			Local_1691.f_11 = 1;
			UNK_0x71199B01895C6202(joaat("A_M_M_BEVHILLS_01"));
			UNK_0x71199B01895C6202(joaat("A_F_M_BEVHILLS_01"));
			UNK_0x71199B01895C6202(joaat("A_F_M_BEVHILLS_02"));
			UNK_0x71199B01895C6202(joaat("A_M_Y_HIPSTER_01"));
			UNK_0x71199B01895C6202(joaat("TAXI"));
			iLocal_1205++;
			break;
		case 2:
			break;
	}
}

void func_427()
{
	vector3 vVar0;

	if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
	{
		bLocal_1186 = true;
		return;
	}
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	}
	if (bLocal_1186)
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			fLocal_1245 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_1302);
			bLocal_1186 = false;
		}
	}
	else if (fLocal_1245 == 0f)
	{
		fLocal_1245 = SYSTEM::VDIST(-1510.291f, -946.9932f, 8.278f, vLocal_1302);
	}
	if (SYSTEM::VDIST(vVar0, vLocal_1302) > (fLocal_1245 + 400f))
	{
		func_37(7);
	}
	else if (SYSTEM::VDIST(vVar0, vLocal_1302) > (fLocal_1245 + 200f))
	{
		if (!bLocal_1182)
		{
			func_258("ASS_VA_RHOTEL", 7500, 1);
			bLocal_1182 = true;
		}
	}
}

void func_428(int iParam0)
{
	if (!UNK_0x0F1CCD77290EE12F())
	{
		UNK_0x82E51BCA72537B6C(iParam0);
		while (!UNK_0x0F1CCD77290EE12F())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_429()
{
	int iVar0;
	float fVar1;

	if (UNK_0xC844350D5D58C99A(bLocal_1058))
	{
		func_434();
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_1058))
		{
			fVar1 = func_29(bLocal_1058, 1);
			UNK_0xA245D14CC59CDD36(bLocal_1058, 0);
			UNK_0x7D732AB707BE9152(bLocal_1058, 0);
			UNK_0x25C5402CC10F76CD(bLocal_1058, false);
			UNK_0x5E678B691C852774(bLocal_1058, 16);
			UNK_0x4E885A246A9D983A(bLocal_1058, 208, true);
			if (fVar1 < 5f)
			{
				if (func_58(&uLocal_1357))
				{
					if (!func_28())
					{
						if (func_431(&uLocal_1357, 10f))
						{
							func_35(&uLocal_1364, 3, bLocal_1058, "LESTER", 0, 1);
							func_6(&uLocal_1364, "OJASAUD", "OJAS_FOLLOW", 9, 0, 0, 0);
						}
					}
				}
			}
			else if (fVar1 > 100f)
			{
				if (UNK_0x03068588A1FCED1A(bLocal_1058) || !UNK_0x0A059E0DB9253280(bLocal_1058))
				{
					func_430();
				}
			}
			switch (iLocal_1191)
			{
				case 0:
					if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
					{
						if ((UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()) || (UNK_0xC844350D5D58C99A(bLocal_1058) && UNK_0xB87D13D0C064E9D1(bLocal_1058, UNK_0x16F2683693E537C9(), 1))) || UNK_0xB87D13D0C064E9D1(bLocal_1690, UNK_0x16F2683693E537C9(), 1))
						{
							if (UNK_0xB87D13D0C064E9D1(bLocal_1690, UNK_0x16F2683693E537C9(), 1))
							{
							}
							UNK_0x79C43E2BAC7C696F(bLocal_1058, "move_lester_CaneUp", 1048576000 /* Float: 0.25f */);
							UNK_0xC6EB89C59F2AF6B8(bLocal_1058, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 1000f, -4f, -1, 790536, false, 0, 0, 0);
							iLocal_1191 = 1;
						}
					}
					break;
				case 1:
					if (UNK_0xB4ECF989E2C1DAC8(bLocal_1058, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 3))
					{
						if (UNK_0x8CA9406E01C7EE58(bLocal_1058, "oddjobs@assassinate@hotel@leadin", "Lester_Getup") >= 0.376f)
						{
							UNK_0xDD353D0E9C789D0E(&iVar0);
							UNK_0x96167B03C5A77156(false, -1502.029f, -948.687f, 7.65061f, 1f, 20000, 1f, 1, 1193033728);
							UNK_0x96167B03C5A77156(false, -1462.339f, -964.178f, 6.3394f, 1f, -1, 1f, 1, 1193033728);
							UNK_0x01E4BB5190DF7317(false, UNK_0xD9522BA9E27E1349(bLocal_1058), 0);
							UNK_0x75ABDC5F81978924(iVar0);
							UNK_0x78ADC381772E3D54(bLocal_1058, iVar0);
							UNK_0xF82EA857DA10E0CD(&iVar0);
							UNK_0xBD453909DC26A85D(bLocal_1058, joaat("MOTIONSTATE_WALK"), false, 0, 0);
							iLocal_1191 = 2;
						}
					}
					break;
				case 2:
					break;
			}
		}
	}
}

void func_430()
{
	if (UNK_0xC844350D5D58C99A(bLocal_1058))
	{
		UNK_0xEBA53F35D0085654(&bLocal_1058);
	}
}

bool func_431(var uParam0, float fParam1)
{
	if (func_433(uParam0, fParam1))
	{
		func_432(uParam0);
		return true;
	}
	return false;
}

void func_432(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_433(bool bParam0, float fParam1)
{
	if (func_58(bParam0))
	{
		if (func_52(bParam0) > fParam1)
		{
			return true;
		}
	}
	return false;
}

void func_434()
{
	if (UNK_0xC844350D5D58C99A(bLocal_1058))
	{
		if (UNK_0xB87D13D0C064E9D1(bLocal_1058, UNK_0x16F2683693E537C9(), 1))
		{
			func_37(9);
		}
	}
}

void func_435()
{
	UNK_0xC92DB9682A650680("ASS1_STOP");
	if (!UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13))
	{
		func_518();
	}
	func_436(0, -1, 1);
	UNK_0x2FB9A57162E54BAB(0f);
	UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
	iLocal_1031 = 18;
	func_428(500);
}

void func_436(bool bParam0, bool bParam1, int iParam2)
{
	if (func_525() && func_438())
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
		func_437(0);
	}
}

void func_437(int iParam0)
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

bool func_438()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13);
}

void func_439()
{
	while (iLocal_1205 < 2)
	{
		func_426();
		SYSTEM::WAIT(0);
	}
	func_409();
	func_382(0);
	if (!UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13))
	{
		func_518();
	}
	bLocal_1160 = false;
	iLocal_1184 = 0;
	UNK_0x28F5E4DA506AC0CA(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, false, 0);
	UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
	UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
	UNK_0xC92DB9682A650680("ASS1_RESTART1");
	while (!func_420())
	{
		SYSTEM::WAIT(0);
	}
	func_436(0, -1, 1);
	UNK_0x2FB9A57162E54BAB(0f);
	UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
	iLocal_1031 = 9;
	func_428(500);
}

void func_440()
{
	func_436(0, -1, 1);
	UNK_0x2FB9A57162E54BAB(0f);
	UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
	func_428(500);
	iLocal_1031 = 7;
}

void func_441()
{
	iLocal_1316[0] = UNK_0x122AAB0B1D6F55AD(bLocal_1329, -1270.045f, -251.4953f, 41.4459f, 214.63f, true, true, false);
	iLocal_1316[1] = UNK_0x122AAB0B1D6F55AD(bLocal_1329, -1265.199f, -218.4823f, 45.9981f, 127.85f, true, true, false);
}

void func_442()
{
	iLocal_1330 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), -1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 38f, 0, 2);
	iLocal_1331 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), -1243.588f, -251.4826f, 50.3187f, -9.2001f, 0.0498f, 6.3064f, 38f, 0, 2);
}

bool func_443()
{
	int iVar0;

	iVar0 = 0;
	if (((((((((UNK_0xB87F6CF6E5628C67(bLocal_1326) && UNK_0xB87F6CF6E5628C67(bLocal_1329)) && UNK_0x3DDA6C6A285628E4(102, "ASSOJva")) && UNK_0x3DDA6C6A285628E4(107, "ASSOJva")) && UNK_0x1C2E18E9C63BEB77("OJASva_101")) && UNK_0x1C2E18E9C63BEB77("OJASva_101a")) && UNK_0x1C2E18E9C63BEB77("OJASva_104")) && UNK_0xB4AE0788C1587752("ODDJOBS@ASSASSINATE@GUARD")) && UNK_0xB4AE0788C1587752("oddjobs@assassinate@hotel@")) && UNK_0x67C1D9E5B91B2E37(3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_444()
{
	UNK_0x523BCC9DC80CD82F(bLocal_1326);
	UNK_0x523BCC9DC80CD82F(bLocal_1329);
	UNK_0x3F423BF5B8125A50("ODDJOBS@ASSASSINATE@GUARD");
	UNK_0x3F423BF5B8125A50("oddjobs@assassinate@hotel@");
	UNK_0xD7992BEF7A9D109E("ASS_VA", 3);
	UNK_0x36187931D29E5BBE(102, "ASSOJva");
	UNK_0x36187931D29E5BBE(107, "ASSOJva");
	UNK_0x29398344B9E5B8A7("OJASva_101");
	UNK_0x29398344B9E5B8A7("OJASva_101a");
	UNK_0x29398344B9E5B8A7("OJASva_104");
}

void func_445(bool bParam0)
{
	if (bParam0)
	{
		UNK_0xE342F209E49C5314(Vector(39.1642f, -193.934f, -1237.397f) - Vector(150f, 150f, 150f), Vector(39.1642f, -193.934f, -1237.397f) + Vector(150f, 150f, 150f), false, 1);
		UNK_0xF858EFDE1871B5F2(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, false, 1);
	}
	else
	{
		UNK_0xE342F209E49C5314(-1340.905f, -68.1138f, -100.7554f, -1176.622f, -287.8646f, 100.8606f, true, 1);
		UNK_0xF5894FEB702E7E76(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 1);
	}
}

void func_446()
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { -1220.344f, -193.4014f, 38.1754f };
	vVar3 = { -1279.658f, -222.0533f, 41.446f };
	func_35(&uLocal_1364, 1, bLocal_1045, "FRANKLIN", 0, 1);
	UNK_0x51B096AAC60548C1(0.2f);
	UNK_0xF63400DBE3303D26("Guards", &bLocal_1332);
	UNK_0x0E2400AB9174FA81(1, joaat("COP"), bLocal_1332);
	UNK_0x0E2400AB9174FA81(1, bLocal_1332, joaat("COP"));
	UNK_0x0E2400AB9174FA81(5, bLocal_1332, joaat("PLAYER"));
	UNK_0x0E2400AB9174FA81(5, joaat("PLAYER"), bLocal_1332);
	UNK_0x536F1BE96C726C4B(-1220.57f, -185.96f, 38.4f, 200f, 1, 0, 0, false);
	UNK_0x10F3BFFADF2CE3DA(-1298.684f, -324.0442f, -35.578f, -1113.372f, -46.1583f, 55.609f);
	iLocal_1128 = UNK_0x7D6CA5F52B3748BF(vVar0 - Vector(15f, 15f, 15f), vVar0 + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	iLocal_1129 = UNK_0x7D6CA5F52B3748BF(vVar3 - Vector(45f, 35f, 35f), vVar3 + Vector(45f, 35f, 35f), 0, 1, 1, 1);
}

void func_447()
{
	StringCopy(&cLocal_965, "ASS_VA_PASSED", 24);
	MemCopy(&(cLocal_965.f_6), {Global_61527}, 6);
	StringCopy(&(cLocal_965.f_12), "ASS_VA_TIMER", 24);
	StringCopy(&(cLocal_965.f_18), "ASS_VA_BASE", 24);
	StringCopy(&(cLocal_965.f_24), "ASS_VA_BDESC", 24);
	StringCopy(&(cLocal_965.f_30), "ASS_VA_CASH", 24);
	StringCopy(&(cLocal_965.f_36), "ASS_VA_COMP", 24);
	StringCopy(&(cLocal_965.f_42), "ASS_VA_COMP", 24);
	StringCopy(&(cLocal_965.f_48), "ASS_VA_COMP", 24);
	StringCopy(&(cLocal_965.f_54), "ASS_VA_COMP", 24);
}

void func_448()
{
	vLocal_1284 = { -1343.493f, -153.199f, 47.1825f };
	bLocal_1233 = 260.3612f;
	vLocal_1287 = { -1242.213f, -241.5975f, 38.71f };
	bLocal_1219 = 96.8755f;
	vLocal_1290 = { -1221.631f, -186.8819f, 38.7996f };
	bLocal_1220 = 201.0763f;
	fLocal_1234 = 40f;
	Local_360.f_2 = 40f;
	vLocal_1248[0 /*3*/] = { -1221.154f, -170.9907f, 38.3253f };
	vLocal_1248[1 /*3*/] = { -1210.556f, -192.882f, 38.3253f };
	vLocal_1248[2 /*3*/] = { -1216.369f, -203.6806f, 38.3253f };
	fLocal_1235[0] = 157.3177f;
	fLocal_1235[1] = 58.3594f;
	fLocal_1235[2] = 65.6443f;
	vLocal_1268[0 /*3*/] = { -1220.377f, -169.407f, 38.3253f };
	vLocal_1268[1 /*3*/] = { -1208.963f, -193.8791f, 38.3253f };
	vLocal_1268[2 /*3*/] = { -1214.955f, -205.0824f, 38.3253f };
	vLocal_1268[3 /*3*/] = { -1217.518f, -197.13f, 38.3254f };
	vLocal_1268[4 /*3*/] = { -1231.892f, -194.382f, 38.1753f };
	fLocal_1221[0] = 160.0748f;
	fLocal_1221[1] = 58.3365f;
	fLocal_1221[2] = 58.0214f;
	fLocal_1221[3] = 97.6664f;
	fLocal_1221[4] = 225.8689f;
	iLocal_1192 = 0;
	while (iLocal_1192 <= 4)
	{
		fLocal_1227[iLocal_1192] = UNK_0x79833B02DBD2A244(0f, 2f);
		iLocal_1192++;
	}
	fLocal_373 = 7000f;
	fLocal_374 = 2000f;
	iLocal_1044 = 0;
	bLocal_1180 = false;
	bLocal_1181 = false;
	bLocal_1166 = false;
	bLocal_1189 = false;
	bLocal_1188 = false;
}

void func_449()
{
	switch (iLocal_1193)
	{
		case 0:
			UNK_0xAE1670DD12E839C3("ASS_INT_2_ALT1", 8);
			UNK_0x523BCC9DC80CD82F(joaat("IG_LESTERCREST"));
			UNK_0x523BCC9DC80CD82F(joaat("PROP_CS_WALKING_STICK"));
			UNK_0x3F423BF5B8125A50("oddjobs@assassinate@hotel@leadin");
			UNK_0x3F423BF5B8125A50("oddjobs@assassinate@hotel@leaning@");
			UNK_0x4E09E67A27F104A7("move_lester_CaneUp");
			UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
			UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
			if ((((UNK_0xB87F6CF6E5628C67(joaat("IG_LESTERCREST")) && UNK_0xB87F6CF6E5628C67(joaat("PROP_CS_WALKING_STICK"))) && UNK_0xB4AE0788C1587752("oddjobs@assassinate@hotel@leadin")) && UNK_0xB4AE0788C1587752("oddjobs@assassinate@hotel@leaning@")) && UNK_0x59F02DA2266A744C("move_lester_CaneUp"))
			{
				iLocal_1193++;
			}
			break;
		case 1:
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				func_407(56, 0, 1);
				func_410(-1514.611f, -927.4667f, 7.133712f, -1496.948f, -942.224f, 16.18723f, 30f, -1523.174f, -924.6732f, 9.1221f, 53.0177f, 1, 1, 1, 1, 0);
				UNK_0x536F1BE96C726C4B(-1507.715f, -941.1313f, 8.37286f, 10f, 1, 0, 0, false);
				UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vLocal_1669, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), bLocal_1672);
				UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
				UNK_0xC6EB89C59F2AF6B8(UNK_0x16F2683693E537C9(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 1000f, -4f, -1, 513, false, 0, 0, 0);
				if (!UNK_0x9F4FE516EAACCFC5(iLocal_1673))
				{
					iLocal_1673 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_1675, vLocal_1678, 42.2032f, 1, 2);
					UNK_0x91F5B0244AAE6222(iLocal_1673, "HAND_SHAKE", 0.3f);
				}
				if (!UNK_0x9F4FE516EAACCFC5(iLocal_1674))
				{
					iLocal_1674 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_1681, vLocal_1684, 42.2032f, 0, 2);
					UNK_0xF1E4C781086FABC1(iLocal_1674, iLocal_1673, 5000, 1, 1);
					UNK_0x91F5B0244AAE6222(iLocal_1673, "HAND_SHAKE", 0.3f);
				}
				UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				if (func_46(0))
				{
					UNK_0x82E51BCA72537B6C(800);
				}
				iLocal_1193++;
			}
			break;
		case 2:
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				if (UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 3))
				{
					if (!func_58(&uLocal_1687))
					{
						func_55(&uLocal_1687);
					}
				}
				if (func_58(&uLocal_1687))
				{
					if (func_52(&uLocal_1687) > 6f)
					{
						iLocal_1193++;
					}
				}
			}
			break;
		case 3:
			if (func_450())
			{
				iLocal_1193++;
			}
			break;
		case 4:
			func_388(1, 1, 1, 0, 0, 0);
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				UNK_0x29E8331978B73E7F(UNK_0x16F2683693E537C9(), "Franklin", 0, false, 0);
			}
			UNK_0x29E8331978B73E7F(bLocal_1058, "Lester", 2, joaat("IG_LESTERCREST"), 0);
			UNK_0x29E8331978B73E7F(false, "WalkingStick_Lester", 2, joaat("PROP_CS_WALKING_STICK"), 0);
			UNK_0x4C902758BEA97C68(0);
			UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			iLocal_1193++;
			break;
		case 5:
			if (UNK_0x22A8E52414415B76())
			{
				UNK_0x5CAFA5DD13658DFE(0);
				UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				iLocal_1193++;
			}
			break;
		case 6:
			if (UNK_0x8C74DE122769E1BF())
			{
				UNK_0x29D5132FBDCF2B1E(0);
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_1058))
			{
				if (UNK_0xFD68C8258EDA648C("Lester", 0))
				{
					if (UNK_0xC844350D5D58C99A(UNK_0x6450C2A9FBA3C3BF("Lester", false)))
					{
						bLocal_1058 = UNK_0x940C1429253D3B1B(UNK_0x6450C2A9FBA3C3BF("Lester", false));
					}
				}
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_1059))
			{
				if (UNK_0xFD68C8258EDA648C("WalkingStick_Lester", 0))
				{
					if (UNK_0xC844350D5D58C99A(UNK_0x6450C2A9FBA3C3BF("WalkingStick_Lester", false)))
					{
						bLocal_1059 = UNK_0x6450C2A9FBA3C3BF("WalkingStick_Lester", false);
					}
				}
			}
			UNK_0x2FB9A57162E54BAB(0f);
			UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
			if (UNK_0x3148AE92ED70DC30("Franklin", 0))
			{
			}
			if (UNK_0xC844350D5D58C99A(UNK_0x6450C2A9FBA3C3BF("Lester", false)))
			{
				if (UNK_0x3148AE92ED70DC30("Lester", 0))
				{
					if (UNK_0xC844350D5D58C99A(bLocal_1058) && !UNK_0xEB6A8945D1AC98A1(bLocal_1058))
					{
						UNK_0xA47B46945FF6DE74(bLocal_1058, -1509.458f, -948.195f, 7.75f, 1, 0, 0, 1);
						UNK_0xD8F6A53F4799FAFE(bLocal_1058, -11f);
						UNK_0xC6EB89C59F2AF6B8(bLocal_1058, "oddjobs@assassinate@hotel@leadin", "lester_leadin", 1000f, -8f, -1, 790537, 0f, 0, 1, 0);
						UNK_0xF895E10BF4C72645(bLocal_1058, 0, 0);
					}
				}
			}
			if (UNK_0xC844350D5D58C99A(UNK_0x6450C2A9FBA3C3BF("Lester", false)))
			{
				if (UNK_0x3148AE92ED70DC30("WalkingStick_Lester", 0))
				{
					if (UNK_0xC844350D5D58C99A(bLocal_1058) && !UNK_0xEB6A8945D1AC98A1(bLocal_1058))
					{
						UNK_0x9F528B1B53FBC5D9(bLocal_1059, bLocal_1058, UNK_0x4A089F2B762B8D33(bLocal_1058, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
				}
			}
			if (UNK_0x154B5473FBFD0156() && !UNK_0x22A8E52414415B76())
			{
				func_388(0, 1, 1, 0, 0, 0);
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_1058))
				{
					UNK_0xAA6B3A4292417750(bLocal_1058, false, false, false, false, false, false, 0, false);
					UNK_0x46CB381A452EF99D(bLocal_1058, 1);
				}
				UNK_0x2FB9A57162E54BAB(0f);
				UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
				if (UNK_0x757EF87A33649210())
				{
					SYSTEM::WAIT(0);
					UNK_0x82E51BCA72537B6C(500);
				}
				func_386(1, 1, 1);
				iLocal_1193++;
			}
			break;
		case 7:
			func_56(&uLocal_1357);
			func_263();
			iLocal_1031 = 4;
			break;
	}
}

bool func_450()
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

void func_451()
{
	if (!UNK_0xC844350D5D58C99A(bLocal_1690))
	{
		bLocal_1690 = UNK_0x4B72871A3BE7B474(-1510.103f, -947.7194f, 8.2332f, 5f, joaat("PROP_BENCH_08"), 1, 0, 1);
	}
}

void func_452()
{
	bool bVar0;

	if (iLocal_1031 > 7)
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				bVar0 = UNK_0x4EF27AB24893425F();
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					if (UNK_0xDF1306B443CD3D15(bVar0, 0))
					{
						if ((bVar0 != bLocal_1320[0] && bVar0 != bLocal_1320[1]) && bVar0 != bLocal_1320[2])
						{
							if (iLocal_1216 >= 2)
							{
								iLocal_1216 = -1;
							}
							bLocal_1320[iLocal_1216 + 1] = bVar0;
							UNK_0x73270B3C9CC833FD(bLocal_1320[iLocal_1216 + 1], true, 0);
							UNK_0xD2DE0C6B4149D1D2(bLocal_1320[iLocal_1216 + 1], 0);
							iLocal_1216++;
						}
					}
				}
			}
		}
	}
}

void func_453()
{
	bool bVar0;

	if (bLocal_1178)
	{
		bVar0 = func_36(1116471296 /* Float: 70f */, 1);
		if (!UNK_0xEB6A8945D1AC98A1(bVar0))
		{
			func_34(bVar0, 3, "OJAvaGUARD");
			func_6(&uLocal_1364, "OJASAUD", "OJASva_SPOT", 9, 0, 0, 0);
		}
	}
}

void func_454()
{
	bool bVar0;
	vector3 vVar1;

	if (Local_1691.f_11)
	{
		if (!bLocal_1169)
		{
			if (iLocal_1031 < 10)
			{
				if (func_460())
				{
					bVar0 = func_36(1116471296 /* Float: 70f */, 1);
					if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0x437347B10A200C4B(bVar0, 0))
					{
						if (func_29(bVar0, 0) < 10f)
						{
							vVar1 = { UNK_0x68F4C0EC296D3901(bVar0, true) };
							vVar1 = { vVar1 };
							func_35(&uLocal_1364, 3, bVar0, "OJAvaGuard", 0, 1);
							func_6(&uLocal_1364, "OJASAUD", "OJASva_AT_EX", 9, 0, 0, 0);
						}
					}
					func_459();
					bLocal_1169 = true;
				}
				if (bLocal_1134)
				{
					func_459();
					bLocal_1169 = true;
				}
				else
				{
					func_458();
					func_455();
				}
			}
		}
	}
}

void func_455()
{
	if (bLocal_1140)
	{
		if (IntToFloat(iLocal_1213) < (IntToFloat(iLocal_1210) - 5f))
		{
			func_457(Local_1691.f_8[0], 1);
			func_457(Local_1691.f_8[1], 1);
			func_457(Local_1691.f_5[0], 1);
			func_457(Local_1691.f_5[1], 1);
		}
		else
		{
			if ((func_29(Local_1691.f_8[0], 0) < 1f || func_29(Local_1691.f_8[1], 0) < 1f) || bLocal_1138)
			{
				func_456(Local_1691.f_8[0], 1);
				func_456(Local_1691.f_8[1], 1);
			}
			if (!bLocal_1138)
			{
				func_456(Local_1691.f_5[0], 0);
				func_456(Local_1691.f_5[1], 0);
			}
			else
			{
				func_456(Local_1691.f_5[0], 1);
				func_456(Local_1691.f_5[1], 1);
			}
		}
	}
}

void func_456(bool bParam0, bool bParam1)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0xD1960163A3042274(bParam0, 242628503) != 1)
		{
			if (func_29(bParam0, 0) < 1f || bParam1)
			{
				func_457(bParam0, 1);
			}
		}
	}
}

void func_457(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if ((bParam1 && UNK_0xD1960163A3042274(bParam0, 242628503) != 1) || !bParam1)
		{
			UNK_0xDD353D0E9C789D0E(&iVar0);
			UNK_0xB87AD42E3FA06BDE(false, -1214.343f, -132.1107f, 40.2416f, 1f, 0, 0, 786603, -1082130432 /* Float: -1f */);
			UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
			UNK_0x75ABDC5F81978924(iVar0);
			UNK_0x78ADC381772E3D54(bParam0, iVar0);
			UNK_0xF82EA857DA10E0CD(&iVar0);
		}
	}
}

void func_458()
{
	bool bVar0;

	switch (iLocal_1206)
	{
		case 0:
			if (((bLocal_1154 || bLocal_1138) || func_29(Local_1691[0], 0) < 1f) || func_29(Local_1691[1], 0) < 1f)
			{
				if (!UNK_0x437347B10A200C4B(Local_1691[0], 0) && !UNK_0x437347B10A200C4B(Local_1691[1], 0))
				{
					UNK_0x0C8C0C840C2D1AD2(Local_1691[0], Local_1691[1], -1, 0, 2);
					UNK_0x0C8C0C840C2D1AD2(Local_1691[1], Local_1691[0], -1, 0, 2);
				}
				if (((UNK_0xC844350D5D58C99A(Local_1691[1]) && UNK_0xC844350D5D58C99A(Local_1691.f_4)) && !UNK_0xEB6A8945D1AC98A1(Local_1691[1])) && UNK_0xDF1306B443CD3D15(Local_1691.f_4, 0))
				{
					UNK_0xA3BF0AA5A2608191(Local_1691[1]);
					UNK_0x5B1D360B9C6F0A09(Local_1691[1], Local_1691.f_4, 20000, 2, 1f, 1, 0);
				}
				if (!func_58(&uLocal_1348))
				{
					func_55(&uLocal_1348);
				}
				iLocal_1206++;
			}
			break;
		case 1:
			if (!bLocal_1174)
			{
				if (func_58(&uLocal_1348))
				{
					if (func_52(&uLocal_1348) > 3f)
					{
						if (((UNK_0xC844350D5D58C99A(Local_1691[0]) && UNK_0xC844350D5D58C99A(Local_1691.f_4)) && !UNK_0xEB6A8945D1AC98A1(Local_1691[0])) && UNK_0xDF1306B443CD3D15(Local_1691.f_4, 0))
						{
							if (UNK_0xD1960163A3042274(Local_1691[0], -1794415470) != 1)
							{
								UNK_0xA3BF0AA5A2608191(Local_1691[0]);
								UNK_0x5B1D360B9C6F0A09(Local_1691[0], Local_1691.f_4, 20000, true, 1f, 1, 0);
								bLocal_1174 = true;
							}
						}
					}
				}
				else
				{
					func_55(&uLocal_1348);
				}
			}
			if (!UNK_0xEB6A8945D1AC98A1(Local_1691[0]) && !UNK_0xEB6A8945D1AC98A1(Local_1691[1]))
			{
				if (UNK_0xC42A92762C58E1B9(Local_1691[0], Local_1691.f_4, 0) && UNK_0xC42A92762C58E1B9(Local_1691[1], Local_1691.f_4, 0))
				{
					if (!UNK_0x437347B10A200C4B(Local_1691.f_3, 0) && !UNK_0x437347B10A200C4B(Local_1691.f_4, 0))
					{
						UNK_0xBC43ED9FE28DB191(Local_1691.f_3);
						func_56(&uLocal_1348);
					}
					iLocal_1206++;
				}
			}
			break;
		case 2:
			if (func_58(&uLocal_1348))
			{
				if (func_52(&uLocal_1348) > 3f)
				{
					if (!UNK_0xEB6A8945D1AC98A1(Local_1691.f_3) && UNK_0xDF1306B443CD3D15(Local_1691.f_4, 0))
					{
						UNK_0x1B901F542DF070CF(Local_1691.f_3, Local_1691.f_4, "OJAS_HotelTaxi01", 786485, 0, 16, -1, 10f, 0, 1073741824 /* Float: 2f */);
						iLocal_1206++;
					}
				}
			}
			break;
		case 3:
			if (!UNK_0x437347B10A200C4B(Local_1691.f_3, 0) && !UNK_0x437347B10A200C4B(Local_1691.f_4, 0))
			{
				if (!UNK_0xDD4B920CF5E7E9EC(Local_1691.f_4) || bLocal_1177)
				{
					UNK_0xE072601B4380E9DF(Local_1691.f_3, Local_1691.f_4, 10f, 786603);
					iLocal_1206++;
				}
			}
			break;
		case 4:
			if (bLocal_1177)
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_1054[0]))
				{
					bVar0 = iLocal_1054[0];
				}
				else
				{
					bVar0 = func_31(25f);
				}
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					if (!UNK_0xEB6A8945D1AC98A1(bVar0))
					{
						if (!func_28())
						{
							func_34(bVar0, 5, "OJAvaGUARD");
							func_6(&uLocal_1364, "OJASAUD", "OJASva_LEAVE", 9, 0, 0, 0);
						}
					}
				}
				func_56(&uLocal_1348);
				iLocal_1206++;
			}
			break;
		case 5:
			break;
	}
}

void func_459()
{
	if ((UNK_0xC844350D5D58C99A(Local_1691.f_3) && !UNK_0x437347B10A200C4B(Local_1691.f_3, 0)) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xF3268524E9BE6D6E(Local_1691.f_3, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
	}
	if ((UNK_0xC844350D5D58C99A(Local_1691[0]) && !UNK_0x437347B10A200C4B(Local_1691[0], 0)) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xF3268524E9BE6D6E(Local_1691[0], UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
		UNK_0xBAFED2F6486F771A(Local_1691[0], 2, false);
	}
	if ((UNK_0xC844350D5D58C99A(Local_1691[1]) && !UNK_0x437347B10A200C4B(Local_1691[1], 0)) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xF3268524E9BE6D6E(Local_1691[1], UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
		UNK_0xBAFED2F6486F771A(Local_1691[1], 2, false);
	}
	if ((UNK_0xC844350D5D58C99A(Local_1691.f_8[0]) && !UNK_0x437347B10A200C4B(Local_1691.f_8[0], 0)) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xF3268524E9BE6D6E(Local_1691.f_8[0], UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
	}
	if ((UNK_0xC844350D5D58C99A(Local_1691.f_8[1]) && !UNK_0x437347B10A200C4B(Local_1691.f_8[1], 0)) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xF3268524E9BE6D6E(Local_1691.f_8[1], UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
	}
	if ((UNK_0xC844350D5D58C99A(Local_1691.f_5[0]) && !UNK_0x437347B10A200C4B(Local_1691.f_5[0], 0)) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xF3268524E9BE6D6E(Local_1691.f_5[0], UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
	}
	if ((UNK_0xC844350D5D58C99A(Local_1691.f_5[1]) && !UNK_0x437347B10A200C4B(Local_1691.f_5[1], 0)) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xF3268524E9BE6D6E(Local_1691.f_5[1], UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
	}
}

bool func_460()
{
	if (!UNK_0x437347B10A200C4B(Local_1691.f_3, 0))
	{
		if (UNK_0x36646919F20EAFFC(Local_1691.f_3))
		{
			if (UNK_0x710D117BA581D7D2(Local_1691.f_3) == UNK_0x16F2683693E537C9())
			{
				return true;
			}
		}
	}
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0x437347B10A200C4B(Local_1691.f_4, 0))
	{
		if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_1691.f_4, 0))
		{
			return true;
		}
	}
	if (func_118(Local_1691[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return true;
	}
	if (func_118(Local_1691[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return true;
	}
	if (func_118(Local_1691.f_8[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return true;
	}
	if (func_118(Local_1691.f_8[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return true;
	}
	if (func_118(Local_1691.f_5[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return true;
	}
	if (func_118(Local_1691.f_5[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return true;
	}
	if (func_117(Local_1691.f_4))
	{
		return true;
	}
	if (UNK_0x681F21BF9F7B449B(-1, -1231.326f, -201.7195f, 38.2114f, 20f))
	{
		return true;
	}
	return false;
}

void func_461()
{
	func_526();
}

bool func_462()
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

void func_463(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_525())
	{
		UNK_0x256D93AFAE851A7A(0);
		UNK_0x0674E58A79778E99(&(Global_98744.f_20), 2);
		UNK_0x21387C9EECC2B220(true);
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
		}
		Global_98740 = { vParam0 };
		Global_98743 = fParam3;
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
		func_437(1);
	}
}

bool func_464(vector3 vParam0, float fParam3)
{
	return func_465(&(Global_105187.f_2890), vParam0, fParam3, 0);
}

bool func_465(var uParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	var uVar5;
	int iVar8;

	if (func_514(uParam0))
	{
		if (func_50(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { *uParam0 };
			bParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("MONSTER") || uParam0->f_12.f_66 == joaat("MARSHALL"))
		{
			if (UNK_0x0399732A9EBC368E(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, true))
			{
				vParam1 = { -850.93f, 158.82f, 65.7f };
				bParam4 = 89.5f;
			}
		}
		if (func_513(uParam0))
		{
			UNK_0x536F1BE96C726C4B(vParam1, 5f, 1, 0, 0, false);
			func_512(vParam1, 5f, 0);
			bVar0 = UNK_0x122AAB0B1D6F55AD(uParam0->f_12.f_66, vParam1, bParam4, true, true, false);
			if (UNK_0xC844350D5D58C99A(bVar0))
			{
				vVar1 = { UNK_0x68F4C0EC296D3901(bVar0, true) };
				if (SYSTEM::VDIST2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					UNK_0x08841CDB215AE18F(bVar0, vParam1, 0, 0, 1);
				}
				func_496(bVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (UNK_0xA7082C42B8809BF2(uParam0->f_12.f_66) || UNK_0x83496B932152D4D4(uParam0->f_12.f_66))
				{
					if (!UNK_0xA267CBB20C26B1B9(vParam1.x, vParam1.y, (vParam1.z + 30f), vParam1.x, vParam1.y, (vParam1.z - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					UNK_0xB9FD7450C0DAB575(bVar0, 1084227584 /* Float: 5f */);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (UNK_0x8E39AC3C76C8AA58(UNK_0x134B62B726CEC8E6(bVar0)))
						{
							func_495(uParam0->f_11, 1);
						}
						else if (UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(bVar0)))
						{
							func_495(uParam0->f_11, 2);
						}
					}
					UNK_0x316958DDB94DF3FC(bVar0, 0);
					UNK_0x626D5ADA3EFAE431(bVar0, 0);
					UNK_0x44A200C9B6E1CEA6(bVar0, true);
					func_494(bVar0, uParam0->f_11);
				}
				else if ((!func_491(bVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && UNK_0x7F8A39872A07D2CE(UNK_0xBB0808A181D4745C(), "startup_positioning"))
				{
					iVar8 = func_490(bVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_485(iVar8);
					}
				}
				if (((Global_98744 != 13 && Global_98744 != 10) && Global_98744 != 11) && Global_98744 != 12)
				{
					if (UNK_0x12AB0310C2281427(&(Global_98744.f_3)) == Global_76429)
					{
						if (uParam0->f_12.f_66 == Global_111638.f_32744.f_69[21 /*78*/].f_66)
						{
							func_482(24, 0);
							func_485(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_466(bVar0, uParam0->f_11);
				}
				UNK_0x71199B01895C6202(uParam0->f_12.f_66);
				vVar1 = { UNK_0x68F4C0EC296D3901(bVar0, true) };
			}
			return bVar0;
		}
	}
	return bVar0;
}

void func_466(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_467(bParam0))
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
	func_305(bParam0, &(Global_111638.f_32744.f_5510));
}

bool func_467(bool bParam0)
{
	if ((((((((((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || func_316(bParam0, 0, 0)) || func_316(bParam0, 1, 0)) || func_316(bParam0, 2, 0)) || func_301(bParam0) != 145) || func_481(bParam0)) || func_480(bParam0)) || func_479(bParam0)) || func_478(bParam0)) || !func_468(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		if (func_480(bParam0))
		{
		}
		if (func_480(bParam0))
		{
		}
		if (func_316(bParam0, 0, 0))
		{
		}
		if (func_316(bParam0, 1, 0))
		{
		}
		if (func_316(bParam0, 2, 0))
		{
		}
		if (func_301(bParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_468(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (!func_469(bParam0, 0))
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

bool func_469(bool bParam0, bool bParam1)
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
		if (!func_477())
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
		if ((((!func_476() && !func_475()) && !func_474()) && !func_473()) && !func_477())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_474())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_472(bParam0))
		{
			return false;
		}
	}
	if (!func_470(bParam0))
	{
		return false;
	}
	return true;
}

bool func_470(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_471())
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

bool func_471()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_472(bool bParam0)
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

bool func_473()
{
	return false;
}

bool func_474()
{
	return true;
}

bool func_475()
{
	return true;
}

bool func_476()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_477()
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

bool func_478(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	bVar1 = UNK_0x7888A5D2621AAF2D(bParam0);
	if (bVar0 == joaat("SPEEDO") && UNK_0x7F8A39872A07D2CE(bVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_469(bVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_479(bool bParam0)
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

bool func_480(bool bParam0)
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

bool func_481(bool bParam0)
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

void func_482(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_484(iParam0, 0))
		{
			func_483(iParam0, 1, 0);
			func_483(iParam0, 2, 0);
			func_483(iParam0, 3, 0);
			func_483(iParam0, 4, 0);
			func_483(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_483(iParam0, 0, 0);
	}
}

void func_483(int iParam0, bool bParam1, bool bParam2)
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

bool func_484(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], bParam1);
}

void func_485(int iParam0)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (func_489(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			bVar0 = true;
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xDF1306B443CD3D15(Global_75441.f_139[iParam0], 0))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Global_75441.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				UNK_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
				UNK_0xA954465BA6FDEFE2(&(Global_75441.f_139[iParam0]));
			}
		}
		Global_75441[iParam0] = 1;
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_484(iParam0, 0)) && Global_76350.f_66 == 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] != 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] > 3) && (!func_487(0, Global_75441.f_555[0 /*21*/].f_12) || !func_487(1, Global_75441.f_555[0 /*21*/].f_12)))
			{
				func_486(&(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]), &Global_76350);
				Global_76428 = Global_111638.f_32744.f_5591;
			}
			func_482(iParam0, 0);
		}
	}
}

void func_486(var uParam0, var uParam1)
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

bool func_487(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_488(&(Global_111638.f_32744.f_5038[iVar0 /*157*/])))
	{
		return false;
	}
	return func_469(Global_111638.f_32744.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_488(var uParam0)
{
	return *uParam0;
}

bool func_489(var uParam0, int iParam1)
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
			uParam0->f_4 = func_303(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_303(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_303(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_303(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_303(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_303(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_303(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_303(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_303(2, 1);
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
			if (func_477())
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
			if (func_477())
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
		if (!func_50(Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_50(Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_50(Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_490(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((UNK_0xC844350D5D58C99A(Global_75441.f_484[iVar0]) && !UNK_0x437347B10A200C4B(Global_75441.f_484[iVar0], 0)) && UNK_0xDF1306B443CD3D15(Global_75441.f_484[iVar0], 0))
		{
			UNK_0x9412F17E127D9759(bParam0, &iVar1, &iVar2);
			UNK_0x9412F17E127D9759(Global_75441.f_484[iVar0], &iVar3, &iVar4);
			if (((UNK_0x134B62B726CEC8E6(bParam0) == UNK_0x134B62B726CEC8E6(Global_75441.f_484[iVar0]) && UNK_0xF22DC2D0CA24A151(bParam0) == UNK_0xF22DC2D0CA24A151(Global_75441.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_491(bool bParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;

	iVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	switch (iVar0)
	{
		case joaat("CARGOBOB"):
			if (func_493(bParam0, Global_75441.f_139[38], 0))
			{
				func_485(38);
				return true;
			}
			break;
		case joaat("FIRETRUK"):
			if (func_493(bParam0, Global_75441.f_139[43], 1))
			{
				func_485(43);
				return true;
			}
			break;
		case joaat("CUBAN800"):
			iVar5 = UNK_0xA361D247A75E0128(UNK_0x16F2683693E537C9(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_493(bParam0, uVar1[iVar6], 1) && func_492(UNK_0x68F4C0EC296D3901(uVar1[iVar6], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_50(vParam1, 0f, 0f, 0f, 0)) || UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bParam0, true), UNK_0x68F4C0EC296D3901(uVar1[iVar6], true), 1) < 10f)
					{
						UNK_0xA954465BA6FDEFE2(&bParam0);
						return true;
					}
					else
					{
						return false;
					}
				}
				iVar6++;
			}
			break;
		case joaat("LUXOR2"):
			if ((UNK_0xC844350D5D58C99A(Global_75441.f_484[14]) && UNK_0xDF1306B443CD3D15(bParam0, 0)) && UNK_0xDF1306B443CD3D15(Global_75441.f_484[14], 0))
			{
				if (UNK_0x134B62B726CEC8E6(Global_75441.f_484[14]) == joaat("LUXOR2") && UNK_0xF22DC2D0CA24A151(bParam0) == UNK_0xF22DC2D0CA24A151(Global_75441.f_484[14]))
				{
					func_485(14);
					return true;
				}
			}
			break;
		case joaat("SWIFT2"):
			if ((UNK_0xC844350D5D58C99A(Global_75441.f_484[20]) && UNK_0xDF1306B443CD3D15(bParam0, 0)) && UNK_0xDF1306B443CD3D15(Global_75441.f_484[20], 0))
			{
				if (UNK_0x134B62B726CEC8E6(Global_75441.f_484[20]) == joaat("SWIFT2") && UNK_0xF22DC2D0CA24A151(bParam0) == UNK_0xF22DC2D0CA24A151(Global_75441.f_484[20]))
				{
					func_485(20);
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_492(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_493(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((UNK_0xC844350D5D58C99A(bParam1) && !UNK_0x437347B10A200C4B(bParam1, 0)) && UNK_0xDF1306B443CD3D15(bParam1, 0))
	{
		if (bParam2)
		{
			UNK_0x9412F17E127D9759(bParam0, &iVar0, &iVar1);
			UNK_0x9412F17E127D9759(bParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
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

void func_494(bool bParam0, int iParam1)
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

void func_495(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (iParam0 == 145 || Global_96085[iVar0] == iParam0)
			{
				if (iParam1 == 0 || UNK_0x134B62B726CEC8E6(Global_96075[iVar0]) == func_303(iParam0, iParam1))
				{
					if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Global_96075[iVar0], 0))
					{
						UNK_0x73270B3C9CC833FD(Global_96075[iVar0], false, 1);
						UNK_0xA954465BA6FDEFE2(&(Global_96075[iVar0]));
						Global_96085[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_496(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (!func_505(bParam0))
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
			if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_306(iVar0 + 1)))
			{
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_306(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("SANDKING") || uParam1->f_66 == joaat("SANDKING2"))
		{
			iVar1 = 1;
			if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_306(iVar1 + 1)))
			{
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_306(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_306(iVar2)))
				{
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_306(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_306(iVar3)))
				{
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_306(iVar3));
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
					if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_306(iVar4)))
					{
					}
					else
					{
						UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_306(iVar4));
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
		if (((UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 15) || func_504(bParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_503())
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
		if (uParam1->f_65 == -1 && !func_308(uParam1->f_66))
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
						func_502(bParam0, uParam1->f_69);
					}
				}
				else
				{
					func_502(bParam0, uParam1->f_69);
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
			func_497(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!UNK_0xAFB8495D36825275(uParam1->f_66) && !UNK_0xA7082C42B8809BF2(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_306(iVar5 + 1)))
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

int func_497(bool bParam0, var uParam1, var uParam2)
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
	if (func_501(UNK_0x134B62B726CEC8E6(*bParam0), 1) && UNK_0x0ECB5CA5140957AD(*bParam0, 24) != func_500(*bParam0, ((*uParam1)[38] - 1)))
	{
		UNK_0xEE6A1776A67F70C1(*bParam0, 24, func_500(*bParam0, ((*uParam1)[38] - 1)), false);
	}
	func_499(bParam0);
	if (func_498(*bParam0))
	{
		UNK_0xD5A0214B20BCBAD8(*bParam0, 1);
		UNK_0x44A200C9B6E1CEA6(*bParam0, true);
	}
	return 1;
}

bool func_498(bool bParam0)
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

void func_499(bool bParam0)
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

int func_500(bool bParam0, int iParam1)
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

bool func_501(int iParam0, int iParam1)
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

void func_502(bool bParam0, int iParam1)
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

bool func_503()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPINDEPENDENCE"));
}

bool func_504(bool bParam0)
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

bool func_505(bool bParam0)
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!func_511(UNK_0xD803B885F5E47A62(), -1))
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
	if (func_507(UNK_0xD803B885F5E47A62()) == 3)
	{
		if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (func_506(bParam0) != -1)
			{
				return true;
			}
		}
	}
	return false;
}

int func_506(bool bParam0)
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

int func_507(int iParam0)
{
	if (func_510(iParam0) == 233)
	{
		return func_508(iParam0);
	}
	return -1;
}

int func_508(int iParam0)
{
	if (func_509(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

bool func_509(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

int func_510(int iParam0)
{
	if (func_509(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_511(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (func_73(bParam0, 1, 1))
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

void func_512(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_489(&(Global_75441.f_555[0 /*21*/]), iVar0))
		{
			if (UNK_0x0EB28750412C3A5A(vParam0, Global_75441.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_485(iVar0);
			}
		}
		iVar0++;
	}
}

bool func_513(var uParam0)
{
	if (func_514(uParam0))
	{
		if (UNK_0xB87F6CF6E5628C67(uParam0->f_12.f_66))
		{
			return true;
		}
		else
		{
			return false;
		}
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

bool func_514(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return false;
	}
	if (!func_469(uParam0->f_12.f_66, 0))
	{
		return false;
	}
	if (uParam0->f_12.f_66 == joaat("STUNT") && func_492(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608 /* Float: 0.5f */, 0))
	{
		return false;
	}
	return true;
}

bool func_515()
{
	return func_513(&(Global_105187.f_2890));
}

void func_516()
{
	func_517(&(Global_105187.f_2890));
}

void func_517(var uParam0)
{
	if (func_514(uParam0))
	{
		UNK_0x523BCC9DC80CD82F(uParam0->f_12.f_66);
	}
}

void func_518()
{
	if (UNK_0xBD054C76E6F4158B(iLocal_1130))
	{
		UNK_0x51F8DBE54C75AE47(iLocal_1130);
	}
}

int func_519()
{
	if (!Global_98744 == 10 && !Global_98744 == 9)
	{
		return 0;
	}
	return Global_98744.f_2;
}

struct<39> func_520(int iParam0)
{
	struct<39> Var0;

	if (iParam0 == 0)
	{
		Var0 = 1;
		Var0.f_1 = { 0f, 0f, 0f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_521(0) };
		Var0.f_22 = "Assassin_Valet";
		Var0.f_23 = 7000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -1700.015f, -1066.335f, 12.144f };
		Var0.f_28 = { -1691.564f, -1066.514f, 12.076f };
		Var0.f_31 = 35.4714f;
		Var0.f_10 = { -1700.467f, -1066.672f, 13.8795f };
		Var0.f_13 = { -4.8332f, 0f, -177.1283f };
		Var0.f_16 = { -1700.467f, -1066.672f, 13.8795f };
		Var0.f_19 = { -4.8332f, 0f, -177.1283f };
		Var0.f_33 = { -1700.098f, -1067.939f, 12.1547f };
		Var0.f_36 = 162.4559f;
		Var0.f_37 = 1;
	}
	else if (iParam0 == 1)
	{
		Var0 = 0;
		Var0.f_1 = { -699.3992f, -917.5043f, 18.2143f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_521(1) };
		Var0.f_22 = "Assassin_Multi";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -700.1855f, -917.9558f, 18.2143f };
		Var0.f_28 = { -699.9455f, -921.7786f, 18.0144f };
		Var0.f_31 = 78.0874f;
		Var0.f_10 = { -697.8064f, -921.4629f, 20.5104f };
		Var0.f_13 = { -13.5249f, 0f, 30.6033f };
		Var0.f_16 = { -702.4851f, -921.2747f, 21.1235f };
		Var0.f_19 = { -22.5196f, 0f, -43.0435f };
		Var0.f_33 = { 0f, 0f, 0f };
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 2)
	{
		Var0 = 0;
		Var0.f_1 = { 215.1206f, -853.3143f, 29.3684f };
		Var0.f_4 = { 0f, 0f, 87.1787f };
		Var0.f_7 = { func_521(2) };
		Var0.f_22 = "Assassin_Hooker";
		Var0.f_23 = 3000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { 213.7994f, -853.9389f, 29.3929f };
		Var0.f_28 = { 205.2641f, -847.2667f, 29.4903f };
		Var0.f_31 = 140.1039f;
		Var0.f_10 = { 216.7391f, -856.0031f, 32.7127f };
		Var0.f_13 = { -25.1365f, 0f, 41.3912f };
		Var0.f_16 = { 210.4668f, -851.3092f, 32.1099f };
		Var0.f_19 = { -16.3326f, 0f, -127.0114f };
		Var0.f_33 = { 213.8733f, -853.8161f, 29.3922f };
		Var0.f_36 = 344.0112f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 3)
	{
		Var0 = 0;
		Var0.f_1 = { -22.5499f, -107.3546f, 56.0161f };
		Var0.f_4 = { 0f, 0f, 269.7924f };
		Var0.f_7 = { func_521(3) };
		Var0.f_22 = "Assassin_Bus";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -22.3125f, -108.9183f, 56.0068f };
		Var0.f_28 = { -17.2677f, -118.5915f, 55.8734f };
		Var0.f_31 = 1.4374f;
		Var0.f_10 = { -26.1094f, -108.0298f, 59.052f };
		Var0.f_13 = { -21.2059f, 0f, -109.0176f };
		Var0.f_16 = { -20.1189f, -111.9639f, 59.4377f };
		Var0.f_19 = { -27.0037f, 0f, 29.464f };
		Var0.f_33 = { 0f, 0f, 0f };
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 4)
	{
		Var0 = 0;
		Var0.f_1 = { 806.1469f, -1070.21f, 27.3361f };
		Var0.f_4 = { 0f, 0f, 90f };
		Var0.f_7 = { func_521(4) };
		Var0.f_22 = "Assassin_Construction";
		Var0.f_23 = 8000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = 1;
		Var0.f_25 = { 804.9559f, -1070.46f, 27.3361f };
		Var0.f_28 = { 799.8408f, -1079.142f, 27.321f };
		Var0.f_31 = 69.6524f;
		Var0.f_10 = { 801.8048f, -1068.068f, 30.3496f };
		Var0.f_13 = { -20.8953f, 0f, -132.9451f };
		Var0.f_16 = { 805.8168f, -1074.496f, 28.9803f };
		Var0.f_19 = { -1.5585f, 0f, 6.9143f };
		Var0.f_33 = { 804.8776f, -1070.523f, 27.3416f };
		Var0.f_36 = 287.8741f;
		Var0.f_37 = 0;
	}
	return Var0;
}

Vector3 func_521(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1704.427f, -1077.316f, 12.1111f;
		case 1:
			return -700.429f, -916.7467f, 18.2143f;
		case 2:
			return 214.1641f, -852.8006f, 29.3929f;
		case 3:
			return -21.9871f, -107.4823f, 55.997f;
		case 4:
			return 806.1469f, -1070.21f, 27.3361f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_522()
{
	bool bVar0;

	bVar0 = func_124(Global_111638.f_19958.f_1, 4096);
	Global_111638.f_19958.f_1 = 0;
	if (bVar0)
	{
		func_533(&(Global_111638.f_19958.f_1), 4096);
	}
}

void func_523()
{
}

bool func_524()
{
	return func_514(&(Global_105187.f_2890));
}

bool func_525()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return true;
	}
	return false;
}

void func_526()
{
	if (func_58(&uLocal_1336))
	{
		Global_111638.f_19958.f_5 = func_52(&uLocal_1336);
	}
	if (!bLocal_1176)
	{
		UNK_0xC92DB9682A650680("ASS1_LOST");
	}
	UNK_0x42740B44BA8D7B43("SCRIPT\ASSASSINATION_MULTI");
	func_272();
	func_255();
	func_260();
	func_261(1);
	func_419();
	func_530();
	func_445(0);
	func_3();
	if (UNK_0xC844350D5D58C99A(Global_95241.f_28[0]))
	{
		UNK_0x73270B3C9CC833FD(Global_95241.f_28[0], true, 1);
		UNK_0xEEEE2E5FA6F78DF0(&(Global_95241.f_28[0]));
	}
	UNK_0x2952D66A502EA873(iLocal_1128, 0);
	UNK_0x2952D66A502EA873(iLocal_1129, 0);
	func_518();
	func_92(&uLocal_1529, 0, 0);
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		func_528(UNK_0x16F2683693E537C9(), 1);
		UNK_0xD5EF6A937E06E46F(UNK_0x16F2683693E537C9(), 0, -1, 0);
	}
	UNK_0x51B096AAC60548C1(1f);
	UNK_0xEFED0CD6E25037B9();
	UNK_0xC05DBA7D4F88D5E5(bLocal_1327, false);
	UNK_0xC05DBA7D4F88D5E5(bLocal_1328, false);
	func_527();
	UNK_0x10FAF14A60A0DBE1();
}

void func_527()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (func_281(vLocal_1248[iVar0 /*3*/], 1) < 5f)
			{
				UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -1223.185f, -185.4723f, 38.1753f, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 119.5633f);
			}
		}
		iVar0++;
	}
}

void func_528(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xCAE036C45E7FC720(bParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("WEAPON_UNARMED"))
			{
				if (!func_529(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_98781 > 0)
	{
		Global_105187.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_102203.f_21[iParam1] = iVar0;
	}
}

bool func_529(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (Global_98781 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_105187.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_105187.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return true;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_105187.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_105187.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_102203.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_102203.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return true;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_102203.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_102203.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_530()
{
	UNK_0xDB8844D4B7C60440(102, "ASSOJva");
	UNK_0xDB8844D4B7C60440(107, "ASSOJva");
	UNK_0x2F3540C2227116A3("OJASva_101");
	UNK_0x2F3540C2227116A3("OJASva_101a");
	UNK_0x2F3540C2227116A3("OJASva_104");
}

void func_531()
{
	int iVar0;

	if (UNK_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_111638.f_9080 || func_46(0))
	{
		if (!func_532())
		{
			iVar0 = func_45();
			if (iVar0 != -1)
			{
				if (!func_39(iVar0))
				{
					return;
				}
				UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_44();
		}
	}
}

bool func_532()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return false;
	}
	return true;
}

void func_533(var uParam0, int iParam1)
{
	func_534(uParam0, iParam1);
}

void func_534(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

