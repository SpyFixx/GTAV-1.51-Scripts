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
	int iLocal_48 = 0;
	struct<110> Local_49 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_211 = 3;
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
	var uLocal_308 = 16;
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
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 16;
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
	var uLocal_639 = 3;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 1092616192;
	var uLocal_646 = 1101004800;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 3;
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
	var uLocal_703 = 5;
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
	var uLocal_720 = 5;
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
	var uLocal_780 = 3;
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
	var uLocal_799 = 13;
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
	var uLocal_828 = 4;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 4;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 4;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 4;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 4;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 4;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 4;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 8;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
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
	int iLocal_907 = 0;
	int iLocal_908 = 0;
	bool bLocal_909 = false;
	bool bLocal_910 = false;
	bool bLocal_911[8] = { false, false, false, false, false, false, false, false };
	bool bLocal_920 = false;
	var uLocal_921 = 16;
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
	var uLocal_978 = 0;
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
	var uLocal_1029 = 0;
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
	var uLocal_1055 = 0;
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
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	int iLocal_1086 = 0;
	int iLocal_1087 = 0;
	vector3 vLocal_1088 = { 0f, 0f, 0f };
	bool bLocal_1091 = false;
	bool bLocal_1092 = false;
	bool bLocal_1093 = false;
	bool bLocal_1094 = false;
	int iLocal_1095 = 0;
	bool bLocal_1096 = false;
	bool bLocal_1097 = false;
	bool bLocal_1098 = false;
	bool bLocal_1099 = false;
	bool bLocal_1100 = false;
	int iLocal_1101 = 0;
	int iLocal_1102 = 0;
	vector3 vLocal_1103 = { 0f, 0f, 0f };
	vector3 vLocal_1106 = { 0f, 0f, 0f };
	struct<2> Local_1109 = { 0, 0 } ;
	var uLocal_1111 = 0;
	struct<2> Local_1112 = { 0, 0 } ;
	var uLocal_1114 = 0;
	int iLocal_1115 = 0;
	char[] cLocal_1116[8] = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	char[] cLocal_1120[8] = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	bool bLocal_1124 = false;
	bool bLocal_1125 = false;
	char cLocal_1126[48] = "";
	int iLocal_1132 = 0;
	int iLocal_1133 = 0;
	int iLocal_1134 = 0;
	int iLocal_1135 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_48 = joaat("P_AMB_PHONE_01");
	vLocal_1088 = { 693.1158f, -1012.418f, 21.72802f };
	vLocal_1103 = { 692.8695f, -998.7867f, 22.3201f };
	vLocal_1106 = { 693.3784f, -1025.671f, 21.506f };
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		func_111();
		func_109();
		func_107();
	}
	func_99();
	UNK_0x7798376279BB5369(1);
	while (true)
	{
		UNK_0x1A6DFFFEEC27BF4F("M_TheAgencyHeistPrep1", 0);
		if (!bLocal_1093)
		{
			if (!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_1088, 200f, 200f, 200f, false, true, 0) && !UNK_0x8E28E832BEAC3DCE(vLocal_1088, 50f))
			{
				UNK_0x536F1BE96C726C4B(vLocal_1088, 50f, 1, 0, 0, false);
				bLocal_1093 = true;
			}
		}
		else if (!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_1088, 200f, 200f, 200f, false, true, 0))
		{
			bLocal_1093 = false;
		}
		if (!bLocal_1098)
		{
			if (Global_95241.f_358 == UNK_0x12AB0310C2281427("AHP1_TRUCKCALLED") || Global_95171)
			{
				func_98(543);
				Global_95241.f_358 = 0;
				bLocal_1098 = true;
			}
		}
		func_97();
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if ((UNK_0xC844350D5D58C99A(bLocal_911[iVar0]) && !UNK_0xEB6A8945D1AC98A1(bLocal_911[iVar0])) && UNK_0xC844350D5D58C99A(bLocal_909))
			{
				if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bLocal_911[iVar0], true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) > 2500f)
				{
					UNK_0xFADC0A217229F6B5(bLocal_911[iVar0], true);
					UNK_0xF3268524E9BE6D6E(bLocal_911[iVar0], UNK_0x16F2683693E537C9(), 300f, 20000, 1, 0);
					UNK_0x6DAD7906B73F064D(&(bLocal_911[iVar0]));
				}
			}
			iVar0++;
		}
		if (iLocal_1134 < 8 && iLocal_1086 >= 0)
		{
			func_95();
		}
		switch (iLocal_1086)
		{
			case -1:
				iVar1 = 0;
				while (iVar1 < bLocal_911)
				{
					if (UNK_0xC844350D5D58C99A(bLocal_911[iVar1]))
					{
						if (UNK_0xC844350D5D58C99A(UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9())))
						{
							bVar2 = UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9());
							if ((UNK_0xDF1306B443CD3D15(bVar2, 0) && SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bVar2, true)) < 30f) && UNK_0x4906F8A34E9F4814(bVar2, joaat("FIRETRUK")))
							{
								UNK_0x0E2400AB9174FA81(5, joaat("PLAYER"), bLocal_920);
								UNK_0x0E2400AB9174FA81(5, bLocal_920, joaat("PLAYER"));
								UNK_0xCB9603FE12CFDEF4(UNK_0xD803B885F5E47A62(), 1, 0);
								UNK_0x0F52891B1CED828B(UNK_0xD803B885F5E47A62(), 0f);
							}
						}
					}
					iVar1++;
				}
				if (func_94())
				{
					UNK_0x8B4C4CA774181102(15f, 15f, 4);
					UNK_0xC92DB9682A650680("AHP1_START");
					iLocal_1086++;
				}
				break;
			case 0:
				if (!UNK_0xC844350D5D58C99A(bLocal_909))
				{
					func_94();
					if ((UNK_0xC844350D5D58C99A(UNK_0x728870EB733D12A1()) && UNK_0xDF1306B443CD3D15(UNK_0x728870EB733D12A1(), 0)) && UNK_0x134B62B726CEC8E6(UNK_0x728870EB733D12A1()) == joaat("FIRETRUK"))
					{
						bLocal_909 = UNK_0x728870EB733D12A1();
						UNK_0x73270B3C9CC833FD(bLocal_909, true, 1);
					}
				}
				else
				{
					func_45();
					if (!bLocal_1094 && UNK_0xDF1306B443CD3D15(bLocal_909, 0))
					{
						func_44(bLocal_909, -1);
						func_43(bLocal_909, -1);
						func_42(541, 0);
						bLocal_1094 = true;
					}
					if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_1088) < SYSTEM::POW(100f, 2f))
					{
						UNK_0x5C2EBB66AD2EA5FF(1);
					}
					func_94();
					if (bLocal_1099)
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_909, 0) && UNK_0xDF1306B443CD3D15(bLocal_910, 0))
						{
							func_36(bLocal_910);
							if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bLocal_910) && UNK_0x5A91F08DF773C39D(bLocal_909, vLocal_1088, Global_19, true, true, 0))
							{
								if (UNK_0xE4EDC4B0E92C078B(iLocal_907))
								{
									UNK_0x142CC44DB769B57E(&iLocal_907);
								}
								UNK_0x8B4C4CA774181102(5f, 15f, 4);
								iLocal_1086++;
							}
						}
					}
					else if (UNK_0xDF1306B443CD3D15(bLocal_909, 0))
					{
						func_36(bLocal_909);
						if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bLocal_909) && UNK_0x5A91F08DF773C39D(bLocal_909, vLocal_1088, Global_19, true, true, 0))
						{
							if (UNK_0xE4EDC4B0E92C078B(iLocal_907))
							{
								UNK_0x142CC44DB769B57E(&iLocal_907);
							}
							UNK_0x8B4C4CA774181102(5f, 15f, 4);
							iLocal_1086++;
						}
					}
				}
				if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
				{
					UNK_0x8B4C4CA774181102(5f, 10f, 4);
					iLocal_1086 = 100;
				}
				if (!UNK_0xC844350D5D58C99A(bLocal_909))
				{
					func_14("AHP_LOSTTRUCK");
				}
				else if (UNK_0xDF1306B443CD3D15(bLocal_909, 0))
				{
					if ((SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_909, true)) > 22500f && UNK_0x03068588A1FCED1A(bLocal_909)) || SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_909, true)) > 90000f)
					{
						func_14("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_14("AHP_DEADTRUCK");
				}
				break;
			case 1:
				if (UNK_0xDF1306B443CD3D15(bLocal_909, 0))
				{
					if (func_12(bLocal_909, 1093140480 /* Float: 10.5f */, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0))
					{
						if (!bLocal_1097)
						{
							func_11("AHP_GETOUT", 7500, 1);
							bLocal_1097 = true;
						}
						UNK_0xC92DB9682A650680("AHP1_STOP");
						UNK_0x8B4C4CA774181102(10f, 10f, 4);
						iLocal_1086++;
					}
				}
				break;
			case 2:
				if (UNK_0xDF1306B443CD3D15(bLocal_909, 0))
				{
					if (!UNK_0x5A91F08DF773C39D(bLocal_909, vLocal_1088, Global_19 + Vector(2f, 2f, 2f), true, true, 0))
					{
						iLocal_1086 = 0;
					}
					else if (bLocal_1099)
					{
						if (UNK_0xC844350D5D58C99A(bLocal_910))
						{
							if (!UNK_0x50B5F6F3C29E9380(bLocal_910, bLocal_909))
							{
								UNK_0x9A8BCD43DBDDCDCA(bLocal_909, 0, 0);
								if (UNK_0xB9F5AD0599FD42F7(bLocal_909))
								{
									UNK_0xAA280AF45BCCCF21(bLocal_909, 0);
								}
								UNK_0x71EDC33E5A423750(bLocal_909, 2);
								UNK_0x790015DC92C918E2();
								SYSTEM::SETTIMERA(0);
								iLocal_1086++;
							}
							else
							{
								UNK_0xA1D5A8611E9DC1DD(bLocal_910, bLocal_909);
							}
						}
					}
					else if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_909, 0))
					{
						if (UNK_0xB9F5AD0599FD42F7(bLocal_909))
						{
							UNK_0xAA280AF45BCCCF21(bLocal_909, 0);
						}
						UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
						UNK_0x71EDC33E5A423750(bLocal_909, 2);
						UNK_0x790015DC92C918E2();
						SYSTEM::SETTIMERA(0);
						iLocal_1086++;
					}
				}
				break;
			case 3:
				if (UNK_0xDF1306B443CD3D15(bLocal_909, 0))
				{
					if (SYSTEM::TIMERA() > 3000)
					{
						UNK_0x8B4C4CA774181102(5f, 5f, 4);
						func_6();
					}
				}
				break;
			case 100:
				if (UNK_0xE4EDC4B0E92C078B(iLocal_907))
				{
					UNK_0x142CC44DB769B57E(&iLocal_907);
				}
				if (!func_5(13))
				{
					func_4(13, 1);
				}
				iLocal_1086++;
				break;
			case 101:
				func_94();
				if (bLocal_1099)
				{
					func_36(bLocal_910);
				}
				else
				{
					func_36(bLocal_909);
				}
				if (!bLocal_1100)
				{
					if ((UNK_0xDF1306B443CD3D15(bLocal_909, 0) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_909, 0)) || (UNK_0xDF1306B443CD3D15(bLocal_910, 0) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_910, 0)))
					{
						if ((UNK_0x0A72D28CE8A2CB55(UNK_0x16F2683693E537C9(), "DAVIS") && UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) > 5f) && UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
						{
							if (func_3())
							{
								UNK_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_AH_PREP_01", 0f);
							}
							else
							{
								UNK_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_AH_PREP_02", 0f);
							}
							bLocal_1100 = true;
						}
					}
				}
				if (!UNK_0xC844350D5D58C99A(bLocal_909))
				{
					func_14("AHP_LOSTTRUCK");
				}
				else if (UNK_0xDF1306B443CD3D15(bLocal_909, 0))
				{
					if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
					{
						UNK_0x790015DC92C918E2();
						iLocal_1086 = 0;
					}
					else if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bLocal_909))
					{
						if (!bLocal_1096)
						{
							func_11("AHP_LOSECOPS", 7500, 1);
							bLocal_1096 = true;
							iLocal_1087 = UNK_0x1C0640BA9A7327B3();
						}
					}
					else if ((bLocal_1096 && (UNK_0x1C0640BA9A7327B3() - iLocal_1087) < 7500) && UNK_0xD17F06053799A7CA())
					{
						UNK_0x790015DC92C918E2();
					}
					if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_909, true)) > 22500f)
					{
						func_14("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_14("AHP_DEADTRUCK");
				}
				break;
		}
		if (UNK_0xC844350D5D58C99A(bLocal_909))
		{
			if (!func_2(bLocal_909))
			{
				func_1(bLocal_909, 0);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(bool bParam0, int iParam1)
{
	Global_98744.f_22[iParam1] = bParam0;
}

bool func_2(bool bParam0)
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

bool func_3()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return true;
	}
	return false;
}

void func_4(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_111638.f_9080.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_111638.f_9080.f_99.f_58[iParam0] = iParam1;
}

bool func_5(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_6()
{
	UNK_0x5413873D3F67BF93(false, 0);
	func_7(0, 0);
	func_107();
}

void func_7(bool bParam0, int iParam1)
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
		if ((func_10(0) && Global_76868.f_1 == 1) && func_9(Global_76868))
		{
		}
		else
		{
			Global_61512 = 1;
		}
	}
	if (Global_111638.f_9080 || func_10(0))
	{
		iVar0 = func_8();
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

int func_8()
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

bool func_9(int iParam0)
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

bool func_10(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_11(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

bool func_12(bool bParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_13(bParam0);
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

void func_13(bool bParam0)
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

void func_14(char* sParam0)
{
	int iVar0;

	UNK_0x5413873D3F67BF93(false, 0);
	func_20(sParam0);
	while (!func_19())
	{
		SYSTEM::WAIT(0);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_909))
	{
		if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_909, 0))
		{
			UNK_0xA954465BA6FDEFE2(&bLocal_909);
		}
	}
	iVar0 = 0;
	while (iVar0 < bLocal_911)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_911[iVar0]))
		{
			UNK_0xEBA53F35D0085654(&(bLocal_911[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_95241.f_9)
	{
		if (UNK_0xC844350D5D58C99A(Global_95241.f_9[iVar0]))
		{
			UNK_0xEBA53F35D0085654(&(Global_95241.f_9[iVar0]));
		}
		iVar0++;
	}
	UNK_0x536F1BE96C726C4B(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 100f, 1, 1, 0, false);
	UNK_0xC92DB9682A650680("AHP1_FAIL");
	if (func_18())
	{
		func_111();
	}
	else if (func_17())
	{
		func_15(229.1676f, -1614.979f, 28.2892f, 142.5156f);
	}
	func_107();
}

void func_15(vector3 vParam0, float fParam3)
{
	if (func_16(Global_76862, 0f, 0f, 0f, 0))
	{
		Global_76862 = { vParam0 };
		Global_76865 = fParam3;
	}
}

bool func_16(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_17()
{
	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 226.6765f, -1668.942f, 25.46082f, 185.6446f, -1635.836f, 39.29184f, 57.75f, 0, true, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_18()
{
	if (Global_98744 == 7)
	{
		return true;
	}
	return false;
}

bool func_19()
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

void func_20(char* sParam0)
{
	func_35(sParam0);
	func_21(0);
}

void func_21(int iParam0)
{
	int iVar0;

	if (Global_111638.f_9080 || func_10(0))
	{
		iVar0 = func_8();
		if (!func_22(iVar0))
		{
			return;
		}
		UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 5);
		Global_98780 = iParam0;
	}
}

bool func_22(int iParam0)
{
	int iVar0;
	int iVar1;

	func_27();
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x2DA3D7F5B74119E5(5000);
	}
	iVar0 = Global_89496[iParam0 /*5*/];
	iVar1 = Global_76891.f_109[iVar0 /*4*/];
	func_26(iVar1, 1);
	UNK_0xAE08886CF478C471(UNK_0xD803B885F5E47A62(), 0);
	UNK_0x0D00405AED37B7C4(UNK_0xD803B885F5E47A62(), 0);
	func_23(&(Global_111638.f_2358.f_539), iVar1);
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

void func_23(var uParam0, int iParam1)
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
			if (!func_25(Global_111638.f_18528[iVar0], &vVar2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_24(&(uParam0->f_2296[iVar0]));
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

void func_24(var uParam0)
{
	*uParam0 = -15;
}

bool func_25(int iParam0, var uParam1, float fParam2)
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
			return func_25(8, uParam1, fParam2);
		case 10:
			return func_25(8, uParam1, fParam2);
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

void func_26(int iParam0, bool bParam1)
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

void func_27()
{
	Global_98779 = 1;
	if (UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1))
	{
		if (UNK_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_28())
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
			switch (func_28())
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

int func_28()
{
	func_29();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_29()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_33(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_32(UNK_0x16F2683693E537C9());
			if (func_31(iVar0) && (!func_30(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_31(Global_111638.f_2358.f_539.f_4321))
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

bool func_30(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)
{
	if (func_31(iParam0))
	{
		return func_34(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_34(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_35(char* sParam0)
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

void func_36(bool bParam0)
{
	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
		{
			if (UNK_0xDF1306B443CD3D15(bParam0, 0))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam0, 0))
				{
					if (UNK_0xE4EDC4B0E92C078B(iLocal_908))
					{
						UNK_0x142CC44DB769B57E(&iLocal_908);
					}
				}
				else if (!UNK_0xE4EDC4B0E92C078B(iLocal_908))
				{
					iLocal_908 = func_40(bParam0, 0, 0);
				}
			}
		}
		else if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam0, 0))
		{
			if (UNK_0xE4EDC4B0E92C078B(iLocal_908))
			{
				UNK_0x142CC44DB769B57E(&iLocal_908);
			}
			if (!UNK_0xE4EDC4B0E92C078B(iLocal_907))
			{
				UNK_0x790015DC92C918E2();
				if (!bLocal_1092)
				{
					func_39("AHP_DROPOFF", 7500, 1);
					bLocal_1092 = true;
				}
				iLocal_907 = func_37(vLocal_1088, 1);
				UNK_0x8B4C4CA774181102(3f, 1073741824 /* Float: 2f */, 3);
			}
		}
		else
		{
			if (UNK_0xE4EDC4B0E92C078B(iLocal_907))
			{
				UNK_0x142CC44DB769B57E(&iLocal_907);
			}
			if (!UNK_0xE4EDC4B0E92C078B(iLocal_908))
			{
				UNK_0x790015DC92C918E2();
				if (!bLocal_1091)
				{
					func_39("AHP_GETBAKIN", 7500, 1);
					bLocal_1091 = true;
				}
				iLocal_908 = func_40(bParam0, 0, 0);
			}
		}
	}
	else
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_908))
		{
			UNK_0x142CC44DB769B57E(&iLocal_908);
		}
		if (UNK_0xE4EDC4B0E92C078B(iLocal_907))
		{
			UNK_0x142CC44DB769B57E(&iLocal_907);
		}
	}
}

int func_37(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_38(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

float func_38(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_39(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 0);
}

int func_40(bool bParam0, bool bParam1, bool bParam2)
{
	return func_41(bParam0, !bParam1, bParam2);
}

int func_41(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_38(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_38(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_38(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_42(int iParam0, bool bParam1)
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

void func_43(bool bParam0, int iParam1)
{
	int iVar0;

	Global_61525 = bParam0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		if (iParam1 == -1 || Global_73608[iVar0 /*9*/] == iParam1)
		{
			if (Global_73608[iVar0 /*9*/].f_6 != bParam0)
			{
				Global_73608[iVar0 /*9*/].f_6 = bParam0;
				Global_73608[iVar0 /*9*/].f_7 = 1;
				Global_73608[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_44(bool bParam0, int iParam1)
{
	Global_61523 = bParam0;
	Global_61524 = iParam1;
}

void func_45()
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (bLocal_1099)
	{
		bVar0 = bLocal_910;
	}
	else
	{
		bVar0 = bLocal_909;
	}
	if (!UNK_0x991B1F0980C62628())
	{
		switch (iLocal_1101)
		{
			case 0:
				if ((UNK_0xDF1306B443CD3D15(bVar0, 0) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bVar0, 0)) && UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
				{
					iVar1 = 0;
					while (iVar1 < 3)
					{
						bVar2 = func_92(iVar1);
						if ((!UNK_0xEB6A8945D1AC98A1(bVar2) && UNK_0xC42A92762C58E1B9(bVar2, bVar0, 0)) && UNK_0xA30B8362589C124A(bVar0, -1, 0) == bVar2)
						{
							if (!func_91(bVar2) && func_90(bVar2, 0))
							{
								if (func_89(bVar2, 0))
								{
									iLocal_1133 = 0;
									iLocal_1102 = iVar1;
									iLocal_1101 = 1;
								}
							}
						}
						iVar1++;
					}
				}
				break;
			case 1:
				if (UNK_0xDF1306B443CD3D15(bVar0, 0))
				{
					if ((((UNK_0xEB6A8945D1AC98A1(func_92(iLocal_1102)) || UNK_0xA30B8362589C124A(bVar0, -1, 0) != func_92(iLocal_1102)) || !UNK_0xC42A92762C58E1B9(func_92(iLocal_1102), bVar0, 0)) || !func_91(func_92(iLocal_1102))) || !UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bVar0, 0))
					{
						func_88(func_92(iLocal_1102));
						iLocal_1101 = 0;
					}
					else
					{
						switch (iLocal_1133)
						{
							case 0:
								iLocal_1133 = 2;
								break;
							case 1:
								if (UNK_0xD1B4D22E0BA9B0C8(Local_1109, Local_1109.f_1, Local_1112, Local_1112.f_1))
								{
									iLocal_1133++;
								}
								break;
							case 2:
								UNK_0xE9362E4D600DD12A(func_92(iLocal_1102), bVar0, vLocal_1088, 15f, 0, joaat("FIRETRUK"), 786484, 5f, 5f);
								if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bVar0, true), vLocal_1088) > 250f)
								{
									UNK_0x07FBA474CBC0C266(bVar0, SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bLocal_909, true), vLocal_1088));
								}
								iLocal_1133++;
								break;
							case 3:
								if (UNK_0x3D1053F9EB43B7AD(bVar0, 697.6884f, -1013.364f, 27.4968f, 688.3482f, -1013.179f, 22.32968f, 29.25f, 0, true, 0))
								{
									if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bVar0, true), vLocal_1103) < SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bVar0, true), vLocal_1106))
									{
										if (bLocal_1099)
										{
											UNK_0xE9362E4D600DD12A(func_92(iLocal_1102), bVar0, vLocal_1106, 5f, 0, UNK_0x134B62B726CEC8E6(bVar0), 262144, 2f, 2f);
										}
										else
										{
											UNK_0x27F3789FF35EEDF1(func_92(iLocal_1102), bVar0, vLocal_1088, 180f, 1, 15f, 0);
										}
									}
									else if (bLocal_1099)
									{
										UNK_0xE9362E4D600DD12A(func_92(iLocal_1102), bVar0, vLocal_1103, 5f, 0, UNK_0x134B62B726CEC8E6(bVar0), 262144, 2f, 2f);
									}
									else
									{
										UNK_0x27F3789FF35EEDF1(func_92(iLocal_1102), bVar0, vLocal_1088, 0f, 1, 15f, 0);
									}
									iLocal_1133++;
								}
								break;
							case 4:
								break;
						}
					}
				}
				func_46();
				break;
		}
	}
	else if (iLocal_1101 != 0)
	{
		if (func_88(func_92(iLocal_1102)))
		{
			iLocal_1101 = 0;
		}
	}
}

void func_46()
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	if (!UNK_0xEB6A8945D1AC98A1(func_92(iLocal_1102)) && UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
	{
		if ((((UNK_0xC844350D5D58C99A(bLocal_909) && UNK_0xDF1306B443CD3D15(bLocal_909, 0)) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_909, 0)) && UNK_0xC42A92762C58E1B9(func_92(iLocal_1102), bLocal_909, 0)) || (((UNK_0xC844350D5D58C99A(bLocal_910) && UNK_0xDF1306B443CD3D15(bLocal_910, 0)) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_910, 0)) && UNK_0xC42A92762C58E1B9(func_92(iLocal_1102), bLocal_910, 0)))
		{
			bVar0 = true;
		}
	}
	switch (iLocal_1115)
	{
		case 0:
			bVar1 = func_85();
			if (func_71(0, 1, 145, 0, bVar1, &cLocal_1116, &cLocal_1120, 1))
			{
				func_70(&uLocal_921, 0);
				func_70(&uLocal_921, 1);
				func_70(&uLocal_921, 2);
				if (func_28() == 1)
				{
					func_69(&uLocal_921, 0, func_92(0), "MICHAEL", 0, 1);
					func_69(&uLocal_921, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
				}
				else
				{
					func_69(&uLocal_921, 1, func_92(1), "FRANKLIN", 0, 1);
					func_69(&uLocal_921, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
				}
				if (!bLocal_1125)
				{
					iLocal_1132 = UNK_0x1C0640BA9A7327B3();
				}
				iLocal_1115 = 1;
			}
			break;
		case 1:
			if (bVar0)
			{
				if ((UNK_0x1C0640BA9A7327B3() - iLocal_1132) > 5000 || bLocal_1125)
				{
					if (func_68(&uLocal_921, &cLocal_1116, &cLocal_1120, 8, 0, 0, 0))
					{
						bLocal_1125 = true;
						iLocal_1115 = 2;
					}
				}
			}
			break;
		case 2:
			if (!bLocal_1124)
			{
				if (!bVar0)
				{
					cLocal_1126 = { func_67() };
					func_66();
					bLocal_1124 = true;
				}
			}
			else if (bVar0)
			{
				if (func_50(&uLocal_921, &cLocal_1116, &cLocal_1120, &cLocal_1126, 8, 0, 0))
				{
					bLocal_1124 = false;
				}
			}
			if (UNK_0x991B1F0980C62628() || (!bLocal_1124 && !func_49()))
			{
				func_47();
				iLocal_1115 = 3;
				iLocal_1132 = UNK_0x1C0640BA9A7327B3();
			}
			break;
		case 3:
			if ((UNK_0x1C0640BA9A7327B3() - iLocal_1132) > 10000)
			{
				iLocal_1115 = 0;
			}
			break;
	}
}

void func_47()
{
	Global_19671 = 0;
	func_48();
}

void func_48()
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

bool func_49()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

int func_50(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_65(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_51(sParam2, iParam4, 0);
}

int func_51(char* sParam0, int iParam1, bool bParam2)
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
					func_64();
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
		if (func_63(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_62();
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
				func_61();
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
				if (func_60())
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
			if (func_59())
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
			func_58();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_57();
		func_52();
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
		func_64();
	}
	return 0;
}

void func_52()
{
	if (!func_53())
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

bool func_53()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_56())
	{
		return false;
	}
	if (func_54(UNK_0xD803B885F5E47A62()))
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

bool func_54(int iParam0)
{
	return func_55(iParam0, 20);
}

bool func_55(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_56()
{
	return -1;
}

void func_57()
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

void func_58()
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

bool func_59()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_60()
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

void func_61()
{
	if (func_30(14))
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
		Global_19486 = func_28();
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

void func_62()
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

bool func_63(bool bParam0, int iParam1)
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

void func_64()
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

void func_65(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_66()
{
	Global_19671 = 0;
	func_64();
}

struct<6> func_67()
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

int func_68(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_65(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_51(sParam2, iParam3, 0);
}

void func_69(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_70(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_71(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, char* sParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_82(iParam0);
	iVar1 = func_82(iParam1);
	iVar2 = func_82(iParam2);
	if ((iVar0 == 7 || iVar1 == 7) || (iVar2 == 7 && iParam2 != 145))
	{
		return false;
	}
	if (iVar2 == 7)
	{
		iVar5 = func_81(iVar0, iVar1);
		if (iVar5 >= 9)
		{
			return false;
		}
		if (((iParam0 == 1 && iParam1 == 19) && func_5(137)) && iParam3 == 1)
		{
			if (func_80(&(Global_111638.f_18098.f_388), iParam3, &iVar3, &iVar4, bParam4))
			{
				if (bParam7)
				{
					func_75(&(Global_111638.f_18098.f_388), iParam3, iVar3);
				}
				iVar3 += 6;
			}
			else
			{
				return false;
			}
		}
		else if (func_80(&(Global_111638.f_18098.f_175[iVar5 /*19*/].f_9), iParam3, &iVar3, &iVar4, bParam4))
		{
			if (bParam7)
			{
				func_75(&(Global_111638.f_18098.f_175[iVar5 /*19*/].f_9), iParam3, iVar3);
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		iVar6 = func_74(iVar0, iVar1, iVar2);
		if (iVar6 >= 2)
		{
			return false;
		}
		if (func_80(&(Global_111638.f_18098.f_347[iVar6 /*7*/]), iParam3, &iVar3, &iVar4, bParam4))
		{
			if (bParam7)
			{
				func_75(&(Global_111638.f_18098.f_347[iVar6 /*7*/]), iParam3, iVar3);
			}
		}
		else
		{
			return false;
		}
	}
	*sParam6 = { func_72(iVar0, iVar1, iVar2, 2) };
	*sParam5 = { *sParam6 };
	StringConCat(sParam5, "AU", 16);
	StringConCat(sParam6, "_", 16);
	if (iVar3 == 0)
	{
		StringConCat(sParam6, "A", 16);
	}
	else if (iVar3 == 1)
	{
		StringConCat(sParam6, "B", 16);
	}
	else if (iVar3 == 2)
	{
		StringConCat(sParam6, "C", 16);
	}
	else if (iVar3 == 3)
	{
		StringConCat(sParam6, "D", 16);
	}
	else if (iVar3 == 4)
	{
		StringConCat(sParam6, "E", 16);
	}
	else if (iVar3 == 5)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iVar3 == 6)
	{
		StringConCat(sParam6, "G", 16);
	}
	else if (iVar3 == 7)
	{
		StringConCat(sParam6, "H", 16);
	}
	else if (iVar3 == 8)
	{
		StringConCat(sParam6, "I", 16);
	}
	else if (iVar3 == 9)
	{
		StringConCat(sParam6, "J", 16);
	}
	else if (iVar3 == 10)
	{
		StringConCat(sParam6, "K", 16);
	}
	else if (iVar3 == 11)
	{
		StringConCat(sParam6, "L", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return false;
	}
	if (iParam3 == 0)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(sParam6, "M", 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(sParam6, "D", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return false;
	}
	StringIntConCat(sParam6, iVar4, 16);
	return true;
}

struct<4> func_72(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;

	StringCopy(&Var0, "F", 16);
	if (iParam3 == 0)
	{
		StringConCat(&Var0, "p", 16);
		StringConCat(&Var0, func_73(iParam0), 16);
		StringConCat(&Var0, func_73(iParam1), 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(&Var0, "a", 16);
		StringConCat(&Var0, func_73(iParam0), 16);
		StringConCat(&Var0, func_73(iParam1), 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&Var0, "c", 16);
		if (iParam2 < iParam1)
		{
			iVar4 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar4;
		}
		if (iParam1 < iParam0)
		{
			iVar5 = iParam0;
			iParam0 = iParam1;
			iParam1 = iVar5;
		}
		if (iParam2 < iParam1)
		{
			iVar6 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar6;
		}
		StringConCat(&Var0, func_73(iParam0), 16);
		StringConCat(&Var0, func_73(iParam1), 16);
		if (iParam2 != 7)
		{
			StringConCat(&Var0, func_73(iParam2), 16);
		}
	}
	else
	{
		StringConCat(&Var0, "x", 16);
		StringConCat(&Var0, func_73(iParam0), 16);
		StringConCat(&Var0, func_73(iParam1), 16);
		if (iParam2 != 7)
		{
			StringConCat(&Var0, func_73(iParam2), 16);
		}
	}
	return Var0;
}

char* func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "M";
		case 1:
			return "F";
		case 2:
			return "T";
		case 3:
			return "L";
		case 4:
			return "J";
		case 5:
			return "A";
	}
	return "X";
}

int func_74(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == iParam1 || iParam1 == iParam2) || iParam2 == iParam0)
	{
		return 3;
	}
	if (((iParam0 == 1 || iParam1 == 1) || iParam2 == 1) && ((iParam0 == 2 || iParam1 == 2) || iParam2 == 2))
	{
		if ((iParam0 == 0 || iParam1 == 0) || iParam2 == 0)
		{
			return 0;
		}
		if ((iParam0 == 3 || iParam1 == 3) || iParam2 == 3)
		{
			return 1;
		}
	}
	return 3;
}

void func_75(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	func_79((*uParam0)[iParam2], &iVar0, &iVar1, &iVar2);
	func_78((*uParam0)[iParam2], &iVar3, &iVar4, &iVar5);
	func_77((*uParam0)[iParam2], &iVar6);
	if (iParam1 == 0)
	{
		iVar0++;
		if (iVar0 > iVar3)
		{
			iVar0 = iVar3;
		}
	}
	else if (iParam1 == 1)
	{
		iVar1++;
		if (iVar1 > iVar4)
		{
			iVar1 = iVar4;
		}
	}
	else if (iParam1 == 2)
	{
		iVar2++;
		if (iVar2 > iVar5)
		{
			iVar2 = iVar5;
		}
	}
	func_76(uParam0[iParam2], iVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6);
}

void func_76(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	*uParam0 = 0;
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1 & 15, 28));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam2 & 15, 24));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam3 & 15, 20));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam4 & 15, 16));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam5 & 15, 12));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam6 & 15, 8));
	*uParam0 = (*uParam0 || iParam7 & 255);
}

void func_77(int iParam0, bool bParam1)
{
	*bParam1 = iParam0 & 255;
}

void func_78(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 16) & 15;
	*iParam2 = SYSTEM::SHIFT_RIGHT(iParam0, 12) & 15;
	*iParam3 = SYSTEM::SHIFT_RIGHT(iParam0, 8) & 15;
}

void func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 28) & 15;
	*iParam2 = SYSTEM::SHIFT_RIGHT(iParam0, 24) & 15;
	*iParam3 = SYSTEM::SHIFT_RIGHT(iParam0, 20) & 15;
}

bool func_80(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;

	*iParam2 = 0;
	while (*iParam2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		bVar6 = false;
		func_77((*uParam0)[*iParam2], &bVar6);
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, bVar6))
		{
			func_79((*uParam0)[*iParam2], &iVar0, &iVar1, &iVar2);
			func_78((*uParam0)[*iParam2], &iVar3, &iVar4, &iVar5);
			if (iParam1 == 0)
			{
				if (iVar0 < iVar3)
				{
					*iParam3 = iVar0;
					return true;
				}
			}
			else if (iParam1 == 1)
			{
				if (iVar1 < iVar4)
				{
					*iParam3 = iVar1;
					return true;
				}
			}
			else if (iParam1 == 2)
			{
				if (iVar2 < iVar5)
				{
					*iParam3 = iVar2;
					return true;
				}
			}
		}
		*iParam2++;
	}
	*iParam2 = 0;
	*iParam3 = 0;
	return false;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;

	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
				case 1:
					return 0;
				case 2:
					return 2;
				case 3:
					return 10;
				case 4:
					return 5;
				case 5:
					return 8;
				default:
					return 10;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 10;
				case 2:
					return 1;
				case 3:
					return 3;
				case 4:
					return 6;
				case 5:
					return 10;
				default:
					return 10;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
				case 1:
					return 1;
				case 2:
					return 10;
				case 3:
					return 4;
				case 4:
					return 7;
				case 5:
					return 10;
				default:
					return 10;
			}
			break;
	}
	return 10;
}

int func_82(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < func_84())
	{
		return func_83(iParam0);
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == func_84())
	{
		return 6;
	}
	if (iParam0 == 168)
	{
		return 6;
	}
	return 6;
}

var func_83(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_11;
}

int func_84()
{
	if (Global_30768 == 0 || Global_30768 == 2)
	{
		return 167;
	}
	return 161;
}

bool func_85()
{
	bool bVar0;

	bVar0 = false;
	UNK_0x5D96D8530B3D0904(&bVar0, true);
	if (Local_49.f_109 == 0)
	{
		UNK_0x5D96D8530B3D0904(&bVar0, 2);
	}
	if (func_5(128))
	{
		UNK_0x5D96D8530B3D0904(&bVar0, 4);
		if (!func_87(24))
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 21);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&bVar0, 3);
	}
	if (func_5(131))
	{
		UNK_0x5D96D8530B3D0904(&bVar0, 6);
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&bVar0, 5);
	}
	if (func_5(137))
	{
		UNK_0x5D96D8530B3D0904(&bVar0, 9);
	}
	else if (func_5(126))
	{
		UNK_0x5D96D8530B3D0904(&bVar0, 8);
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&bVar0, 7);
	}
	if (func_5(137))
	{
		if (!func_5(135) && !func_5(136))
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 10);
		}
		if (func_5(135))
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 11);
		}
		else
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 13);
		}
		if (func_5(136))
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 12);
		}
		else
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 14);
		}
	}
	if (!func_87(20))
	{
		UNK_0x5D96D8530B3D0904(&bVar0, 15);
	}
	if (!func_87(46))
	{
		UNK_0x5D96D8530B3D0904(&bVar0, 16);
	}
	if (func_5(129) && !UNK_0xEAE0D21A50E6C7F4(bVar0, 9))
	{
		UNK_0x5D96D8530B3D0904(&bVar0, 17);
	}
	if (func_87(40) && !func_87(43))
	{
		UNK_0x5D96D8530B3D0904(&bVar0, 18);
	}
	if (func_87(43) && !func_87(42))
	{
		UNK_0x5D96D8530B3D0904(&bVar0, 19);
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (func_86(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)))
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 20);
		}
	}
	return bVar0;
}

bool func_86(struct<2> Param0, Vector3 vParam2)
{
	if (Param0.f_1 < 400f)
	{
		if (Param0 < 1400f)
		{
			if (Param0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_87(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

bool func_88(bool bParam0)
{
	bool bVar0;

	return false;
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		bVar0 = func_32(bParam0);
		if (bVar0 > 3)
		{
			return false;
		}
		if (func_92(bVar0) != bParam0)
		{
			return false;
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Global_94598, bVar0))
		{
			return false;
		}
		UNK_0x0674E58A79778E99(&Global_94598, bVar0);
		return true;
	}
	return false;
}

bool func_89(bool bParam0, int iParam1)
{
	bool bVar0;

	return false;
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		bVar0 = func_32(bParam0);
		if (bVar0 > 3)
		{
			return false;
		}
		if (func_92(bVar0) != bParam0)
		{
			return false;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_94598, bVar0))
		{
			return false;
		}
		if (iParam1 == 0)
		{
			if (bParam0 == UNK_0x16F2683693E537C9())
			{
				return false;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_94597, bVar0))
		{
			UNK_0xDAB3108F02A4255A(bParam0, 0, false);
			UNK_0xE8832A9E16A57A1F(bParam0, false, 1);
			UNK_0x5D96D8530B3D0904(&Global_94598, bVar0);
			return true;
		}
	}
	return false;
}

bool func_90(bool bParam0, int iParam1)
{
	bool bVar0;

	return false;
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		bVar0 = func_32(bParam0);
		if (bVar0 > 3)
		{
			return false;
		}
		if (func_92(bVar0) != bParam0)
		{
			return false;
		}
		if (iParam1 == 0)
		{
			if (bParam0 == UNK_0x16F2683693E537C9())
			{
				return false;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_94597, bVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_91(bool bParam0)
{
	bool bVar0;

	return false;
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		bVar0 = func_32(bParam0);
		if (bVar0 > 3)
		{
			return false;
		}
		if (func_92(bVar0) != bParam0)
		{
			return false;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_94598, bVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_92(bool bParam0)
{
	if (bParam0 > 3)
	{
		return false;
	}
	if (bParam0 == func_28())
	{
		return UNK_0x16F2683693E537C9();
	}
	return Global_96222[func_93(bParam0)];
}

int func_93(bool bParam0)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	else if (bParam0 == 2)
	{
		return 2;
	}
	else if (bParam0 == 1)
	{
		return 1;
	}
	else if (bParam0 == 145)
	{
		return 3;
	}
	return 4;
}

bool func_94()
{
	if (((UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0)) && UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0) != bLocal_909) && UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0) != bLocal_910)
	{
		if (UNK_0x4906F8A34E9F4814(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), joaat("FIRETRUK")))
		{
			bLocal_909 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			UNK_0x73270B3C9CC833FD(bLocal_909, true, 1);
			bLocal_1094 = false;
			return true;
		}
		if (UNK_0x4906F8A34E9F4814(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), joaat("TOWTRUCK")) || UNK_0x4906F8A34E9F4814(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), joaat("TOWTRUCK2")))
		{
			if (UNK_0xC844350D5D58C99A(UNK_0xC102CE429C03E382(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0))))
			{
				if (UNK_0xDF1306B443CD3D15(UNK_0x96A5FE5834B81CE7(UNK_0xC102CE429C03E382(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0))), 0))
				{
					bLocal_910 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
					UNK_0x73270B3C9CC833FD(bLocal_910, true, 1);
					if (UNK_0x96A5FE5834B81CE7(UNK_0xC102CE429C03E382(bLocal_910)) != bLocal_909)
					{
						bLocal_909 = UNK_0x96A5FE5834B81CE7(UNK_0xC102CE429C03E382(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)));
						bLocal_1094 = false;
						UNK_0x73270B3C9CC833FD(bLocal_909, true, 1);
					}
					return true;
				}
			}
		}
	}
	return false;
}

void func_95()
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	if (iLocal_1134 < 8)
	{
		if (iLocal_1134 < 4)
		{
			if (UNK_0xC844350D5D58C99A(Global_95241.f_9[iLocal_1134]))
			{
				if (!UNK_0xEB6A8945D1AC98A1(Global_95241.f_9[iLocal_1134]))
				{
					if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(Global_95241.f_9[iLocal_1134], true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) < 900f)
					{
						UNK_0x73270B3C9CC833FD(Global_95241.f_9[iLocal_1134], true, 1);
						bLocal_911[iLocal_1134] = Global_95241.f_9[iLocal_1134];
						bVar0 = true;
						Global_95241.f_9[iLocal_1134] = 0;
					}
					else if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(Global_95241.f_9[iLocal_1134], true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) > 2500f && UNK_0x03068588A1FCED1A(Global_95241.f_9[iLocal_1134]))
					{
						UNK_0x73270B3C9CC833FD(Global_95241.f_9[iLocal_1134], true, 1);
						UNK_0xEBA53F35D0085654(&(Global_95241.f_9[iLocal_1134]));
					}
				}
			}
		}
		if (!bVar0)
		{
			if (UNK_0xE51E576EA6B739AC(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 30f, 1, 1, &bVar1, 0, 1, 21))
			{
				if ((UNK_0xC844350D5D58C99A(bVar1) && !UNK_0xEB6A8945D1AC98A1(bVar1)) && !func_96(bVar1, &bLocal_911))
				{
					UNK_0x73270B3C9CC833FD(bVar1, true, 1);
					bLocal_911[iLocal_1134] = bVar1;
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_911[iLocal_1134]))
			{
				UNK_0x6DF7BF67E86AAE86(bLocal_911[iLocal_1134], bLocal_920);
				UNK_0xCB9603FE12CFDEF4(UNK_0xD803B885F5E47A62(), 1, 0);
				UNK_0xAFF39FB306F8E232(bLocal_911[iLocal_1134], 17, false);
				UNK_0x0F52891B1CED828B(UNK_0xD803B885F5E47A62(), 0f);
			}
			iLocal_1134++;
		}
	}
}

bool func_96(bool bParam0, bool bParam1)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar0 = 0;
		while (iVar0 < *bParam1)
		{
			if (UNK_0xC844350D5D58C99A((*bParam1)[iVar0]))
			{
				if (bParam0 == (*bParam1)[iVar0])
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_97()
{
	if (bLocal_1099)
	{
		if (((!UNK_0xDF1306B443CD3D15(bLocal_910, 0) || (UNK_0xDF1306B443CD3D15(bLocal_910, 0) && !UNK_0x50B5F6F3C29E9380(bLocal_909, bLocal_910))) || (UNK_0xDF1306B443CD3D15(bLocal_909, 0) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_909, 0))) || (UNK_0xC844350D5D58C99A(bLocal_910) && SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_910, true)) > 250f))
		{
			bLocal_1099 = false;
		}
	}
	else if ((UNK_0xDF1306B443CD3D15(bLocal_910, 0) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_910, 0)) && UNK_0x50B5F6F3C29E9380(bLocal_909, bLocal_910))
	{
		bLocal_1099 = true;
	}
}

void func_98(int iParam0)
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

void func_99()
{
	vector3 vVar0;
	int iVar3;

	if ((UNK_0xC844350D5D58C99A(Global_95241[0]) && UNK_0xDF1306B443CD3D15(Global_95241[0], 0)) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Global_95241[0], 0))
	{
		UNK_0x73270B3C9CC833FD(Global_95241[0], true, 1);
		bLocal_909 = Global_95241[0];
		Global_95241[0] = 0;
	}
	if ((UNK_0xC844350D5D58C99A(Global_95241[1]) && UNK_0xDF1306B443CD3D15(Global_95241[1], 0)) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Global_95241[1], 0))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0xC102CE429C03E382(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0))) && UNK_0xDF1306B443CD3D15(UNK_0x96A5FE5834B81CE7(UNK_0xC102CE429C03E382(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0))), 0))
		{
			UNK_0x73270B3C9CC833FD(Global_95241[1], true, 1);
			bLocal_910 = Global_95241[1];
			Global_95241[1] = 0;
			UNK_0x73270B3C9CC833FD(Global_95241[0], true, 1);
			bLocal_909 = Global_95241[0];
			Global_95241[0] = 0;
			bLocal_1099 = true;
		}
	}
	UNK_0xD7992BEF7A9D109E("AHPREP1", false);
	while (!UNK_0x67C1D9E5B91B2E37(false))
	{
		SYSTEM::WAIT(0);
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	}
	UNK_0xF63400DBE3303D26("FireMen", &bLocal_920);
	UNK_0x0E2400AB9174FA81(5, joaat("PLAYER"), bLocal_920);
	UNK_0x0E2400AB9174FA81(5, bLocal_920, joaat("PLAYER"));
	if (func_10(0))
	{
		UNK_0x523BCC9DC80CD82F(joaat("S_M_Y_FIREMAN_01"));
		while (!UNK_0xB87F6CF6E5628C67(joaat("S_M_Y_FIREMAN_01")))
		{
			SYSTEM::WAIT(0);
		}
		vVar0 = { 202.0504f, -1655.773f, 28.8031f };
		iLocal_1135 = UNK_0x7D6CA5F52B3748BF(vVar0 - Vector(10f, 30f, 30f), vVar0 + Vector(10f, 30f, 30f), 0, 1, 1, 1);
		UNK_0x536F1BE96C726C4B(vVar0, 20f, 1, 0, 0, false);
		bLocal_911[0] = UNK_0x36F2404464202779(21, joaat("S_M_Y_FIREMAN_01"), 215.7186f, -1644.622f, 28.7719f, 357.5736f, 1, true);
		bLocal_911[1] = UNK_0x36F2404464202779(21, joaat("S_M_Y_FIREMAN_01"), 214.4446f, -1643.72f, 28.7776f, 279.1055f, 1, true);
		bLocal_911[2] = UNK_0x36F2404464202779(21, joaat("S_M_Y_FIREMAN_01"), 217.0826f, -1644.117f, 28.7155f, 72.8262f, 1, true);
		iVar3 = 0;
		while (iVar3 <= (bLocal_911 - 1))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_911[iVar3]))
			{
				UNK_0x509B8296EBA9B408(bLocal_911[iVar3], "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
				UNK_0xAFF39FB306F8E232(bLocal_911[iVar3], 17, false);
				UNK_0x6DF7BF67E86AAE86(bLocal_911[iVar3], bLocal_920);
			}
			iVar3++;
		}
		UNK_0x0E2400AB9174FA81(255, joaat("PLAYER"), bLocal_920);
		UNK_0x0E2400AB9174FA81(255, bLocal_920, joaat("PLAYER"));
		iLocal_1086 = -1;
		if (func_106())
		{
			func_105(354.3055f, -1722.206f, 28.259f, 109.6154f, 1, 0);
			func_102(0, -1, 1);
		}
	}
	if (!UNK_0x0F1CCD77290EE12F() && !UNK_0x7BCE0E6DD4A1F749())
	{
		UNK_0x82E51BCA72537B6C(500);
	}
	if (func_17())
	{
		iLocal_1095 = 1;
	}
	if (!func_10(0))
	{
		UNK_0xC92DB9682A650680("AHP1_START");
	}
	bLocal_1094 = false;
	func_100(68);
}

void func_100(int iParam0)
{
	Global_94599 = 0;
	switch (iParam0)
	{
		case 72:
			func_101(2);
			func_101(4);
			break;
		case 73:
			func_101(0);
			func_101(1);
			func_101(7);
			break;
		case 92:
			func_101(10);
			func_101(9);
			func_101(13);
			func_101(6);
			break;
		case 68:
			func_101(11);
			break;
		case 78:
			func_101(14);
			break;
		case 79:
			func_101(3);
			break;
		default:
			break;
	}
}

void func_101(bool bParam0)
{
	UNK_0x5D96D8530B3D0904(&Global_94599, bParam0);
}

void func_102(bool bParam0, bool bParam1, int iParam2)
{
	if (func_106() && func_104())
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
		func_103(0);
	}
}

void func_103(int iParam0)
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

bool func_104()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13);
}

void func_105(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_106())
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
		func_103(1);
	}
}

bool func_106()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return true;
	}
	return false;
}

void func_107()
{
	func_108();
	if (UNK_0xC844350D5D58C99A(bLocal_909))
	{
		UNK_0x046C362CF15F1935(&bLocal_909);
	}
	UNK_0x2952D66A502EA873(iLocal_1135, 0);
	UNK_0x10FAF14A60A0DBE1();
}

void func_108()
{
	Global_94599 = 0;
}

void func_109()
{
	int iVar0;

	if (UNK_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_111638.f_9080 || func_10(0))
	{
		if (!func_110())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_22(iVar0))
				{
					return;
				}
				UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_27();
		}
	}
}

bool func_110()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return false;
	}
	return true;
}

void func_111()
{
	if (iLocal_1095 == 1)
	{
		func_15(354.3055f, -1722.206f, 28.259f, 109.6154f);
	}
}

