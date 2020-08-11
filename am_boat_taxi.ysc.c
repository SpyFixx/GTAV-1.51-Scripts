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
	struct<22> Local_63 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0 } ;
	vector3 vLocal_85[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	bool bLocal_182 = false;
	bool bLocal_183 = false;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 12;
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
	var uLocal_888 = 1065353216;
	int iLocal_889 = 0;
	int iLocal_890 = 0;
	vector3 vLocal_891 = { 0f, 0f, 0f };
	var uLocal_894 = 0;
	var uLocal_895 = 16;
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
	int iLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	int iLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	float fLocal_1066 = 0f;
	float fLocal_1067 = 0f;
	float fLocal_1068 = 0f;
	float fLocal_1069 = 0f;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_1063 = 15000;
	if (UNK_0x8CD06866876216F2())
	{
		if (!func_153(ScriptParam_0))
		{
			func_148();
		}
	}
	while (true)
	{
		func_147();
		if (func_136())
		{
			func_148();
		}
		if (UNK_0x09BE1E6DF7B80B43() != iLocal_1060)
		{
			func_148();
		}
		switch (func_135(UNK_0x57270EE11514DC67()))
		{
			case 0:
				if (func_134() == 1)
				{
					func_133();
					func_132();
					vLocal_85[UNK_0x57270EE11514DC67() /*3*/] = 1;
				}
				else if (func_134() == 4)
				{
					vLocal_85[UNK_0x57270EE11514DC67() /*3*/] = 3;
				}
				break;
			case 1:
				func_100();
				if (func_134() == 1)
				{
					func_74();
				}
				else if (func_134() == 4)
				{
					vLocal_85[UNK_0x57270EE11514DC67() /*3*/] = 3;
				}
				if (func_72(Local_63.f_2))
				{
					if (!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), UNK_0x68F4C0EC296D3901(UNK_0xB177666FAB6F4417(Local_63.f_2), true), 200f, 200f, 200f, false, true, 0))
					{
						vLocal_85[UNK_0x57270EE11514DC67() /*3*/] = 4;
					}
				}
				break;
			case 3:
				func_71(&(Local_63.f_18));
				if (func_70(&(Local_63.f_18)))
				{
					vLocal_85[UNK_0x57270EE11514DC67() /*3*/] = 4;
				}
				break;
			case 2:
				vLocal_85[UNK_0x57270EE11514DC67() /*3*/] = 4;
			case 4:
				func_148();
				break;
		}
		if (UNK_0xBFF81ED3B99522C7())
		{
			switch (func_134())
			{
				case 0:
					if (func_68(&(Local_63.f_16), 10000, 0))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_63, 12))
						{
							Local_63.f_4 = UNK_0xD803B885F5E47A62();
							Local_63.f_5 = func_67();
							Local_63.f_10 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) + Vector(0f, 5f, 0f) };
							Local_63.f_7 = { func_65(Local_63.f_5) };
							UNK_0x5D96D8530B3D0904(&Local_63, 12);
						}
						if (func_38())
						{
							func_133();
							Local_63.f_1 = 1;
						}
					}
					func_34();
					break;
				case 1:
					func_33();
					func_32();
					func_30();
					func_34();
					if (func_1())
					{
						Local_63.f_1 = 4;
					}
					break;
				case 4:
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
	var uVar0;
	var uVar1;

	if (func_29())
	{
		if (Local_63.f_21 >= 0 || Local_63.f_21 <= 3)
		{
			func_6(func_23(9), 7, 3, 1);
		}
		return true;
	}
	if (Local_63.f_21 >= 0 || Local_63.f_21 <= 3)
	{
		if (UNK_0xE9F78D191AD5EDBA(Local_63.f_2))
		{
			if (!func_72(Local_63.f_2))
			{
				if (UNK_0x39DDAA68EF6A6BF4(Local_63.f_2, &uVar0) == UNK_0xD803B885F5E47A62())
				{
					func_5(1, 600000);
				}
				return true;
			}
		}
		else
		{
			return true;
		}
		if (UNK_0xE9F78D191AD5EDBA(Local_63.f_3))
		{
			if (func_4(Local_63.f_3))
			{
				if (UNK_0x39DDAA68EF6A6BF4(Local_63.f_3, &uVar1) == UNK_0xD803B885F5E47A62())
				{
					func_5(1, 600000);
				}
				return true;
			}
		}
		else
		{
			return true;
		}
		if (!func_3(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_3(bool bParam0, bool bParam1, bool bParam2)
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

bool func_4(int iParam0)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		return UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(iParam0));
	}
	return true;
}

void func_5(bool bParam0, int iParam1)
{
	if (Global_2439138.f_3891[bParam0] < iParam1)
	{
		Global_2439138.f_3891[bParam0] = iParam1;
	}
	UNK_0x5D96D8530B3D0904(&(Global_2439138.f_3890), bParam0);
}

void func_6(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var4;
	int iVar12;
	int iVar13;

	StringCopy(&Var0, func_22(iParam1), 16);
	StringCopy(&Var4, func_21(iParam2), 32);
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
	if (func_20())
	{
		func_7(iVar12, bParam0, &iVar13, bParam3, bParam3, 0);
		Global_4263954[iVar13 /*85*/].f_14.f_40 = { Var0 };
		Global_4263954[iVar13 /*85*/].f_14.f_44 = { Var4 };
	}
	else
	{
		UNK_0x70C6C7E43DEB92C4(bParam0, &Var0, &Var4, bParam3);
	}
}

void func_7(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_20())
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
				func_8(uParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
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
			func_8(uParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
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
				func_8(uParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
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
			func_8(uParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
			break;
	}
}

int func_8(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	bVar0 = false;
	if (!func_20())
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
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || bVar1) || UNK_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, bParam5, iParam6))
	{
		if ((bVar0 || bVar1) || UNK_0x80C74F9931DCF063(iVar4))
		{
			*uParam0 = func_15(iVar4, iParam1, iParam4, iParam2, iParam3, bParam5, 0, iParam6, iParam7, 1, 1);
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
			func_14(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_9(-1, iParam4, iParam6, bParam5, -1);
		}
	}
	return 0;
}

void func_9(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			UNK_0x5D96D8530B3D0904(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_122.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_10(iParam0);
	}
}

void func_10(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_20())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_13(iParam0))
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
		func_11(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_11(var uParam0)
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
	func_12(&(uParam0->f_14));
	func_12(&(uParam0->f_14.f_13));
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

void func_12(var uParam0)
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

bool func_13(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return false;
}

void func_14(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_15(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_20())
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
			Global_4263954[iVar0 /*85*/].f_66.f_11 = uParam8;
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
				func_16(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_16(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	bVar36 = func_18(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!bVar36 == 0)
	{
		func_17();
		UNK_0xFB061A86A7AC749F(1, &vVar0, 36, bVar36);
	}
}

void func_17()
{
	UNK_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

bool func_18(bool bParam0)
{
	var uVar0;

	if (bParam0 != -1)
	{
		UNK_0x5D96D8530B3D0904(&uVar0, bParam0);
	}
	return uVar0;
}

int func_19()
{
	return Global_1312745;
}

bool func_20()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

char* func_21(int iParam0)
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

char* func_22(int iParam0)
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

bool func_23(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_28(iParam0) >= 0)
	{
		iVar0 = func_28(iParam0);
	}
	else
	{
		iVar0 = func_24(iParam0);
	}
	return iVar0;
}

int func_24(int iParam0)
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
			if (func_25())
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

bool func_25()
{
	return UNK_0xEAE0D21A50E6C7F4(func_26(6424, -1, 0), 19);
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_27(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_27(int iParam0)
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

int func_28(int iParam0)
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
			if (func_25())
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

bool func_29()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_196 != 0;
}

void func_30()
{
	if (!UNK_0xBFF81ED3B99522C7())
	{
		return;
	}
	if (Local_63.f_20 != 7)
	{
		if (func_4(Local_63.f_3) || !func_72(Local_63.f_2))
		{
			Local_63.f_20 = 7;
		}
		else if (!UNK_0xC42A92762C58E1B9(UNK_0x1B50683925F00106(Local_63.f_3), UNK_0xB177666FAB6F4417(Local_63.f_2), 0))
		{
			Local_63.f_20 = 7;
		}
	}
	if (!func_4(Local_63.f_3) && func_72(Local_63.f_2))
	{
		if (Local_63.f_20 != 1)
		{
			if (UNK_0x7F6DC62EA9922664(UNK_0xB177666FAB6F4417(Local_63.f_2)) <= 600 || UNK_0x7F6DC62EA9922664(UNK_0x1B50683925F00106(Local_63.f_3)) <= 150)
			{
				Local_63.f_20 = 1;
			}
		}
		switch (Local_63.f_20)
		{
			case 2:
				if (Local_63.f_21 == 3)
				{
					Local_63.f_20 = 4;
				}
				else if (Local_63.f_21 == 5)
				{
					Local_63.f_20 = 7;
				}
				else if (!UNK_0xEAE0D21A50E6C7F4(Local_63, 7) && UNK_0x12DE711B1C681E9E(UNK_0x1B50683925F00106(Local_63.f_3), UNK_0x16F2683693E537C9(), 10f, 10f, 10f, 0, 1, 0))
				{
					Local_63.f_20 = 3;
				}
				break;
			case 4:
				UNK_0x5D96D8530B3D0904(&bLocal_182, 8);
				if (UNK_0x2720E241B5CCF780(UNK_0xB177666FAB6F4417(Local_63.f_2)) <= 0)
				{
					Local_63.f_20 = 3;
					UNK_0x0674E58A79778E99(&bLocal_182, 8);
				}
				else if (!UNK_0xEAE0D21A50E6C7F4(Local_63, 7) && UNK_0x5A91F08DF773C39D(UNK_0x1B50683925F00106(Local_63.f_3), Local_63.f_7, 10f, 10f, 10f, false, true, 0))
				{
					Local_63.f_20 = 5;
				}
				break;
			case 5:
				if ((UNK_0x2720E241B5CCF780(UNK_0xB177666FAB6F4417(Local_63.f_2)) <= 0 && !UNK_0x64E716CF8C283BF5(UNK_0x16F2683693E537C9(), UNK_0xB177666FAB6F4417(Local_63.f_2))) && func_31(UNK_0x16F2683693E537C9(), UNK_0xB177666FAB6F4417(Local_63.f_2), 1) >= 10f)
				{
					Local_63.f_20 = 6;
				}
				break;
			case 3:
				if (UNK_0x2720E241B5CCF780(UNK_0xB177666FAB6F4417(Local_63.f_2)) >= 1)
				{
					Local_63.f_20 = 4;
				}
				break;
			case 6:
				if ((UNK_0x2720E241B5CCF780(UNK_0xB177666FAB6F4417(Local_63.f_2)) <= 0 && !UNK_0x64E716CF8C283BF5(UNK_0x16F2683693E537C9(), UNK_0xB177666FAB6F4417(Local_63.f_2))) && func_31(UNK_0x16F2683693E537C9(), UNK_0xB177666FAB6F4417(Local_63.f_2), 1) >= 10f)
				{
					if (UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_63.f_3), 242628503) == 1)
					{
						Local_63.f_20 = 7;
					}
				}
				break;
			case 1:
				if (UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_63.f_3), 242628503) == 1 && func_31(UNK_0x16F2683693E537C9(), UNK_0x1B50683925F00106(Local_63.f_3), 1) >= 10f)
				{
					Local_63.f_20 = 7;
				}
				break;
			case 7:
				break;
		}
	}
}

float func_31(bool bParam0, bool bParam1, int iParam2)
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

void func_32()
{
	switch (Local_63.f_21)
	{
		case 0:
			if (UNK_0xEAE0D21A50E6C7F4(Local_63, 8) || UNK_0x2720E241B5CCF780(UNK_0xB177666FAB6F4417(Local_63.f_2)) > 0)
			{
				Local_63.f_21 = 1;
			}
			break;
		case 1:
			if (UNK_0xE9F78D191AD5EDBA(Local_63.f_2))
			{
				if (UNK_0x2720E241B5CCF780(UNK_0xB177666FAB6F4417(Local_63.f_2)) > 0)
				{
					Local_63.f_21 = 2;
				}
			}
			break;
		case 2:
			if (UNK_0x2720E241B5CCF780(UNK_0xB177666FAB6F4417(Local_63.f_2)) > 0)
			{
				Local_63.f_21 = 3;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_63, 10))
			{
				Local_63.f_21 = 4;
			}
			break;
		case 3:
			if (UNK_0xE9F78D191AD5EDBA(Local_63.f_2))
			{
				if (UNK_0x2720E241B5CCF780(UNK_0xB177666FAB6F4417(Local_63.f_2)) <= 0)
				{
					Local_63.f_21 = 1;
				}
				else if (UNK_0xEAE0D21A50E6C7F4(Local_63, 10))
				{
					Local_63.f_21 = 4;
				}
			}
			break;
		case 4:
			if (UNK_0xE9F78D191AD5EDBA(Local_63.f_2))
			{
				if ((UNK_0x2720E241B5CCF780(UNK_0xB177666FAB6F4417(Local_63.f_2)) <= 0 && !UNK_0x64E716CF8C283BF5(UNK_0x16F2683693E537C9(), UNK_0xB177666FAB6F4417(Local_63.f_2))) && func_31(UNK_0x16F2683693E537C9(), UNK_0xB177666FAB6F4417(Local_63.f_2), 1) >= 10f)
				{
					Local_63.f_21 = 5;
				}
			}
			break;
		case 5:
			break;
	}
}

void func_33()
{
	bool bVar0;
	bool bVar1;

	UNK_0x0674E58A79778E99(&Local_63, 9);
	bVar0 = false;
	while (bVar0 < UNK_0x54EABC0DD106045B())
	{
		if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bVar0)))
		{
			bVar1 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(bVar0));
			if (func_3(bVar1, 1, 1))
			{
				if (func_72(Local_63.f_2))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_63, 8))
					{
						if (UNK_0x5A91F08DF773C39D(UNK_0xB177666FAB6F4417(Local_63.f_2), Local_63.f_10, (10f * 1.5f), (10f * 1.5f), (10f * 1.5f), false, true, 0))
						{
							UNK_0x5D96D8530B3D0904(&Local_63, 8);
						}
					}
					if (!UNK_0xEAE0D21A50E6C7F4(Local_63, 7) || UNK_0xEAE0D21A50E6C7F4(Local_63, 11))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_63, 10))
						{
							if (UNK_0x5A91F08DF773C39D(UNK_0xB177666FAB6F4417(Local_63.f_2), Local_63.f_7, (10f * 1.5f), (10f * 1.5f), (10f * 1.5f), false, true, 0))
							{
								UNK_0x5D96D8530B3D0904(&Local_63, 10);
							}
						}
					}
					if (!UNK_0xEAE0D21A50E6C7F4(Local_63, 9))
					{
						if (UNK_0xEAE0D21A50E6C7F4(vLocal_85[bVar0 /*3*/].f_1, 6))
						{
							UNK_0x5D96D8530B3D0904(&Local_63, 9);
							UNK_0x0674E58A79778E99(&(vLocal_85[bVar0 /*3*/].f_1), 6);
						}
					}
					if (Local_63.f_20 != 3)
					{
						if (UNK_0xEAE0D21A50E6C7F4(vLocal_85[bVar0 /*3*/].f_1, 5))
						{
							Local_63.f_20 = 3;
							UNK_0x0674E58A79778E99(&(vLocal_85[bVar0 /*3*/].f_1), 5);
						}
					}
				}
			}
		}
		bVar0++;
	}
}

void func_34()
{
	vector3 vVar0;
	var uVar3;

	if ((Local_63.f_21 <= 2 || Local_63.f_20 == 2) || Local_63.f_20 == 3)
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		if ((!UNK_0xEB69695E080217B5(vVar0, &uVar3) || func_36()) || func_35())
		{
			Local_63.f_1 = 4;
		}
	}
}

bool func_35()
{
	if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 2631.833f, 4526.624f, -10f, -380.1435f, 3906.702f, 78.484f, 1200f, 0, true, 0))
	{
		return true;
	}
	if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1731.902f, -123.8468f, 137.2596f, 2079.203f, 798.3421f, 249.3267f, 600f, 0, true, 0))
	{
		return true;
	}
	if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 252.5025f, 855.094f, 148.1213f, -393.3539f, 695.785f, 272.1867f, 500f, 0, true, 0))
	{
		return true;
	}
	return false;
}

bool func_36()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), func_37(iVar0), 50f, 50f, 50f, false, true, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 709.8127f, 6699.78f, 0f;
		case 1:
			return 1551.805f, 6686.052f, 0f;
		case 2:
			return 3260.507f, 5309.454f, 0f;
		case 3:
			return 3788.334f, 3812.693f, 0f;
		case 4:
			return 2945.665f, 1773.192f, 0f;
		case 5:
			return 2866.816f, -658.5848f, 0f;
		case 6:
			return 2342.881f, -2167.953f, 0f;
		case 7:
			return 1215.167f, -2728.054f, 0f;
		case 8:
			return 1305.229f, -3364.572f, 0f;
		case 9:
			return 293.8953f, -3361.616f, 0f;
		case 10:
			return -484.948f, -2940.643f, 0f;
		case 11:
			return -1387.61f, -1704.374f, 0f;
		case 12:
			return -1566.04f, -1312.232f, 0f;
		case 13:
			return -1920.23f, -849.6466f, 0f;
		case 14:
			return -2876.76f, -74.3269f, 0f;
		case 15:
			return -3133.45f, 604.7179f, 0f;
		case 16:
			return -3286.57f, 1285.372f, 0f;
		case 17:
			return -3205.53f, 3285.199f, 0f;
		case 18:
			return -2520.42f, 4240.671f, 0f;
		case 19:
			return -909.632f, 5830.909f, 0f;
		case 20:
			return -325.109f, 6584.622f, 0f;
		default:
			break;
	}
	return -673.5316f, 6175.048f, 0f;
}

bool func_38()
{
	if (UNK_0x2358623ECCDB11B3(true, 1, 0, 0))
	{
		if (func_64(joaat("DINGHY2")) && func_64(joaat("S_M_Y_BLACKOPS_01")))
		{
			if (func_41() && func_39())
			{
				return true;
			}
		}
	}
	return false;
}

int func_39()
{
	if ((!UNK_0xE9F78D191AD5EDBA(Local_63.f_3) && func_64(joaat("S_M_Y_BLACKOPS_01"))) && UNK_0xE9F78D191AD5EDBA(Local_63.f_2))
	{
		if (func_72(Local_63.f_2))
		{
			if (func_40(&(Local_63.f_3), Local_63.f_2, 22, joaat("S_M_Y_BLACKOPS_01"), -1, 1, 1, 1))
			{
				UNK_0x64F9F278AB9DCA2C(UNK_0x1B50683925F00106(Local_63.f_3), false, false, true, 0);
				UNK_0x64F9F278AB9DCA2C(UNK_0x1B50683925F00106(Local_63.f_3), 2, true, false, 0);
				UNK_0x64F9F278AB9DCA2C(UNK_0x1B50683925F00106(Local_63.f_3), 3, false, true, 0);
				UNK_0x64F9F278AB9DCA2C(UNK_0x1B50683925F00106(Local_63.f_3), 4, false, 2, 0);
				UNK_0x64F9F278AB9DCA2C(UNK_0x1B50683925F00106(Local_63.f_3), 8, true, false, 0);
				UNK_0x64F9F278AB9DCA2C(UNK_0x1B50683925F00106(Local_63.f_3), 9, false, false, 0);
				if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] != 0)
				{
					UNK_0x6DF7BF67E86AAE86(UNK_0x1B50683925F00106(Local_63.f_3), Global_1575000);
				}
				else
				{
					UNK_0x6DF7BF67E86AAE86(UNK_0x1B50683925F00106(Local_63.f_3), Global_1574683[2 /*94*/][2 /*31*/][2 /*10*/][2 /*3*/][0]);
				}
				UNK_0xFADC0A217229F6B5(UNK_0x1B50683925F00106(Local_63.f_3), true);
				UNK_0x11AD11297DC58CC7(UNK_0x1B50683925F00106(Local_63.f_3), true);
				UNK_0xD458AC1C1D29C3B4(UNK_0x1B50683925F00106(Local_63.f_3), SYSTEM::ROUND((200f * Global_262145.f_154)), false);
				UNK_0x5507FCD92D15E617(UNK_0x1B50683925F00106(Local_63.f_3), 0);
				UNK_0x4E885A246A9D983A(UNK_0x1B50683925F00106(Local_63.f_3), 255, true);
			}
		}
	}
	if (!UNK_0xE9F78D191AD5EDBA(Local_63.f_3))
	{
		return 0;
	}
	UNK_0x71199B01895C6202(joaat("S_M_Y_BLACKOPS_01"));
	return 1;
}

bool func_40(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
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

int func_41()
{
	var uVar0;
	var uVar3;
	vector3 vVar4;

	if (!UNK_0xE9F78D191AD5EDBA(Local_63.f_2))
	{
		if (func_64(joaat("DINGHY2")))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_182, 10))
			{
				func_61(&vLocal_891, &uLocal_894);
				if (UNK_0xA267CBB20C26B1B9(vLocal_891 + Vector(2f, 0f, 0f), vLocal_891 - Vector(10f, 0f, 0f), &vLocal_891))
				{
					if (func_45(vLocal_891, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896 /* Float: 120f */, 0, -1, 1, 0, 0, 0, 0, 0))
					{
						vVar4 = { vLocal_891 + Vector(12f, 0f, 0f) };
						iLocal_889 = UNK_0xA50E81FC2F15181B(vVar4, 10f, 10f, 25f, 0f, 0f, -1f, 2, 1, false, 4);
						if (iLocal_889 == 0)
						{
							return 0;
						}
						else
						{
							UNK_0x5D96D8530B3D0904(&bLocal_182, 10);
						}
					}
				}
			}
			else if (UNK_0x1EC301670B54C6DE(iLocal_889, &iLocal_890, &uVar0, &uVar0, &uVar3) == 2)
			{
				iLocal_889 = 0;
				if (iLocal_890 == 0)
				{
					if (func_42(&(Local_63.f_2), joaat("DINGHY2"), vLocal_891, uLocal_894, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						UNK_0x79E38224B223335B(UNK_0xB177666FAB6F4417(Local_63.f_2), 1);
						UNK_0x56FDC9ADE35F7DB0(UNK_0xB177666FAB6F4417(Local_63.f_2), true, true, 0);
						UNK_0x1AEF7184B203A58D(UNK_0xB177666FAB6F4417(Local_63.f_2), 12f);
						UNK_0xDC2C59BD0989562B(UNK_0xB177666FAB6F4417(Local_63.f_2), 1);
						UNK_0x120A395B0ECB8EA5(UNK_0xB177666FAB6F4417(Local_63.f_2), false);
					}
				}
				else
				{
					iLocal_890 = 0;
					UNK_0x0674E58A79778E99(&bLocal_182, 10);
				}
			}
			else if (UNK_0x1EC301670B54C6DE(iLocal_889, &iLocal_890, &uVar0, &uVar0, &uVar3) == 0)
			{
				iLocal_889 = 0;
				UNK_0x0674E58A79778E99(&bLocal_182, 10);
			}
		}
	}
	if (!UNK_0xE9F78D191AD5EDBA(Local_63.f_2))
	{
		return 0;
	}
	UNK_0x71199B01895C6202(joaat("DINGHY2"));
	return 1;
}

bool func_42(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
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
			func_43(vParam2, bParam5, bParam1, bVar1);
			return true;
		}
	}
	return false;
}

void func_43(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (func_44(UNK_0xD803B885F5E47A62(), vParam0, bParam4) > -1)
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

int func_44(int iParam0, vector3 vParam1, bool bParam4)
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

bool func_45(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, float fParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)
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
		if (func_54(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return false;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_46(vParam0, fParam6, iParam7, bParam9, bParam10, bParam11, bParam12, bParam16, bParam17))
			{
				return false;
			}
		}
	}
	Global_2405072.f_2++;
	return true;
}

bool func_46(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (bParam4 && !bParam7)
	{
		if (func_3(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			if (!UNK_0x757EF87A33649210())
			{
				bVar2 = bParam6;
				if (bParam9 > 0f)
				{
					bVar2 = bParam9;
				}
				if (UNK_0x0EB28750412C3A5A(func_50(UNK_0xD803B885F5E47A62()), vParam0, 1) <= (bVar2 + bParam3))
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
		if (func_3(bVar1, 1, 1))
		{
			if (!func_48(bVar1, 0) && UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
			{
				if (bParam4 == 1 || (bParam4 == 0 && bVar1 != UNK_0xD803B885F5E47A62()))
				{
					if ((func_47(bVar1) || !bParam10) && !Global_2425662[bVar1 /*421*/].f_259)
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
								if (UNK_0x0EB28750412C3A5A(func_50(bVar1), vParam0, 1) <= (bVar2 + bParam3))
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
							if (UNK_0x0EB28750412C3A5A(func_50(bVar1), vParam0, 1) <= (bVar2 + bParam3))
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

bool func_47(bool bParam0)
{
	if (UNK_0x62FA787159F264AC(UNK_0x9539D44F3E4492F6(bParam0)) || Global_2425662[bParam0 /*421*/].f_245)
	{
		return true;
	}
	return false;
}

bool func_48(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_49(-1, 0) == 8;
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

int func_49(int iParam0, bool bParam1)
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

Vector3 func_50(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if ((func_53() && Global_1590535[bVar0 /*876*/].f_847) && !func_52(Global_1590535[bVar0 /*876*/].f_848))
	{
		return Global_1590535[bVar0 /*876*/].f_848;
	}
	return func_51(bParam0);
}

Vector3 func_51(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

bool func_52(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

var func_53()
{
	return Global_2450632.f_17;
}

bool func_54(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((bParam8 == 1 && UNK_0xD803B885F5E47A62() != bVar1) || bParam8 == 0)
		{
			if (func_3(bVar1, bParam4, bParam5))
			{
				if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
				{
					if (!bParam7 || (!UNK_0xEB6A8945D1AC98A1(UNK_0x9539D44F3E4492F6(bVar1)) && func_47(bVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) != UNK_0x08067D4957B73C02(bVar1))) || UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1)
						{
							if (((UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1 && bParam9) && bParam6) && func_55(bVar1))
							{
							}
							else if (UNK_0xC844350D5D58C99A(UNK_0x9539D44F3E4492F6(bVar1)))
							{
								if (UNK_0x0EB28750412C3A5A(func_51(bVar1), vParam0, 1) < fParam3)
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

bool func_55(bool bParam0)
{
	if (func_60(UNK_0xD803B885F5E47A62(), bParam0))
	{
		return true;
	}
	Global_2513218 = { func_59(bParam0) };
	if (UNK_0x04A104F429E6CBB0(&Global_2513218))
	{
		return true;
	}
	if (func_56(UNK_0xD803B885F5E47A62(), bParam0))
	{
		return true;
	}
	return false;
}

bool func_56(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_58(iParam0);
	if (!iVar0 == func_57())
	{
		if (iVar0 == func_58(bParam1))
		{
			return true;
		}
	}
	return false;
}

int func_57()
{
	return -1;
}

int func_58(bool bParam0)
{
	if (bParam0 != func_57())
	{
		return Global_1628237[bParam0 /*615*/].f_11;
	}
	return func_57();
}

struct<13> func_59(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

bool func_60(bool bParam0, bool bParam1)
{
	if (UNK_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_59(bParam0) };
		Global_2513231 = { func_59(bParam1) };
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

void func_61(var uParam0, var uParam1)
{
	*uParam0 = { func_62(Local_63.f_10, (100f / 2f), 100f, 10f) };
	*uParam1 = UNK_0xE7D606C557C86100((Local_63.f_10 - *uParam0), (Local_63.f_10.f_1 - uParam0->f_1));
}

Vector3 func_62(vector3 vParam0, float fParam3, float fParam4, float fParam5)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { UNK_0x79833B02DBD2A244(-1f, 1f), UNK_0x79833B02DBD2A244(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	vVar0 = { func_63(vVar0, UNK_0x79833B02DBD2A244(fParam3, fParam4)) };
	vVar0.f_2 = UNK_0x79833B02DBD2A244(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_63(vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_64(bool bParam0)
{
	if (bParam0 == 0)
	{
		return true;
	}
	UNK_0x523BCC9DC80CD82F(bParam0);
	return UNK_0xB87F6CF6E5628C67(bParam0);
}

Vector3 func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	float fVar6;

	fVar5 = 0f;
	fVar6 = 10000f;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				fVar5 = UNK_0x0EB28750412C3A5A(Local_63.f_10, func_37(iVar0), 1);
				if (fVar5 < fVar6)
				{
					iVar1 = iVar0;
					fVar6 = fVar5;
				}
				iVar0++;
			}
			vVar2 = { func_37(iVar1) };
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_13 = { Local_63.f_10, 8000f, 0f };
			return vVar2;
		case 1:
			iVar0 = 5;
			while (iVar0 <= 9)
			{
				fVar5 = UNK_0x0EB28750412C3A5A(Local_63.f_10, func_37(iVar0), 1);
				if (fVar5 < fVar6)
				{
					iVar1 = iVar0;
					fVar6 = fVar5;
				}
				iVar0++;
			}
			vVar2 = { func_37(iVar1) };
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_13 = { 5000f, Local_63.f_10.f_1, 0f };
			return vVar2;
		case 2:
			iVar0 = 10;
			while (iVar0 <= 14)
			{
				fVar5 = UNK_0x0EB28750412C3A5A(Local_63.f_10, func_37(iVar0), 1);
				if (fVar5 < fVar6)
				{
					iVar1 = iVar0;
					fVar6 = fVar5;
				}
				iVar0++;
			}
			vVar2 = { func_37(iVar1) };
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_13 = { Local_63.f_10, -5000f, 0f };
			return vVar2;
		case 3:
			iVar0 = 15;
			while (iVar0 <= 20)
			{
				fVar5 = UNK_0x0EB28750412C3A5A(Local_63.f_10, func_37(iVar0), 1);
				if (fVar5 < fVar6)
				{
					iVar1 = iVar0;
					fVar6 = fVar5;
				}
				iVar0++;
			}
			vVar2 = { func_37(iVar1) };
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_13 = { -5000f, Local_63.f_10.f_1, 0f };
			return vVar2;
	}
	return -1392.428f, -1661.61f, 0f;
}

float func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156.0512f;
		case 1:
			return 186.4808f;
		case 2:
			return 65.4787f;
		case 3:
			return 56.421f;
		case 4:
			return 76.4749f;
		case 5:
			return 79.1503f;
		case 6:
			return 24.8224f;
		case 7:
			return 27.7851f;
		case 8:
			return 32.1401f;
		case 9:
			return 329.6803f;
		case 10:
			return 328.7837f;
		case 11:
			return 283.9666f;
		case 12:
			return 295.5786f;
		case 13:
			return 314.4354f;
		case 14:
			return 0.4088f;
		case 15:
			return 287.0804f;
		case 16:
			return 249.5385f;
		case 17:
			return 270.7522f;
		case 18:
			return 260.8947f;
		case 19:
			return 248.4225f;
		case 20:
			return 233.6563f;
		default:
			break;
	}
	return 228.6098f;
}

int func_67()
{
	vector3 vVar0;

	vVar0 = { func_51(UNK_0xD803B885F5E47A62()) };
	if (vVar0.y >= 0f && vVar0.x >= 0f)
	{
		return 0;
	}
	else if (vVar0.y < 0f && vVar0.x >= 0f)
	{
		return 1;
	}
	else if (vVar0.y < 0f && vVar0.x < 0f)
	{
		return 2;
	}
	else if (vVar0.y >= 0f && vVar0.x < 0f)
	{
		return 3;
	}
	return -1;
}

bool func_68(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_69(uParam0, bParam2, 0);
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

void func_69(var uParam0, bool bParam1, bool bParam2)
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

bool func_70(var uParam0)
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

void func_71(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (UNK_0xBFF81ED3B99522C7())
		{
			func_69(uParam0, 0, 0);
		}
	}
}

bool func_72(int iParam0)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		return !func_73(UNK_0xB177666FAB6F4417(iParam0));
	}
	return false;
}

bool func_73(bool bParam0)
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

void func_74()
{
	if (func_3(UNK_0xD803B885F5E47A62(), 1, 1))
	{
		if (Local_63.f_21 == 5)
		{
			vLocal_85[UNK_0x57270EE11514DC67() /*3*/].f_2 = 5;
		}
		switch (vLocal_85[UNK_0x57270EE11514DC67() /*3*/].f_2)
		{
			case 0:
				func_97();
				if (Local_63.f_21 > 0)
				{
					vLocal_85[UNK_0x57270EE11514DC67() /*3*/].f_2 = 1;
				}
				break;
			case 1:
				if (func_72(Local_63.f_2))
				{
					func_132();
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), UNK_0xB177666FAB6F4417(Local_63.f_2), 0))
					{
						func_96();
						vLocal_85[UNK_0x57270EE11514DC67() /*3*/].f_2 = 3;
						UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
						UNK_0x0674E58A79778E99(&(vLocal_85[UNK_0x57270EE11514DC67() /*3*/].f_1), false);
					}
				}
				break;
			case 2:
				if (func_72(Local_63.f_2))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), UNK_0xB177666FAB6F4417(Local_63.f_2), 0))
					{
						vLocal_85[UNK_0x57270EE11514DC67() /*3*/].f_2 = 3;
						UNK_0x0674E58A79778E99(&(vLocal_85[UNK_0x57270EE11514DC67() /*3*/].f_1), 5);
						UNK_0x5D96D8530B3D0904(&(vLocal_85[UNK_0x57270EE11514DC67() /*3*/].f_1), 6);
						if (Local_63.f_21 >= 4)
						{
							vLocal_85[UNK_0x57270EE11514DC67() /*3*/].f_2 = 4;
						}
					}
					else
					{
						vLocal_85[UNK_0x57270EE11514DC67() /*3*/].f_2 = 1;
					}
				}
				break;
			case 3:
				if (func_72(Local_63.f_2))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), UNK_0xB177666FAB6F4417(Local_63.f_2), 0))
					{
						if (Local_63.f_21 >= 4)
						{
							vLocal_85[UNK_0x57270EE11514DC67() /*3*/].f_2 = 4;
						}
						func_95();
					}
					else
					{
						vLocal_85[UNK_0x57270EE11514DC67() /*3*/].f_2 = 1;
					}
				}
				break;
			case 4:
				if (func_72(Local_63.f_2))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_182, 3))
					{
						if (UNK_0x9C66D99E63E8E24C(UNK_0xB177666FAB6F4417(Local_63.f_2)) < 3f)
						{
							UNK_0x75CDA8644CD3B5F5(UNK_0x16F2683693E537C9(), 0, 0);
							UNK_0x5D96D8530B3D0904(&bLocal_182, 3);
						}
					}
					if ((!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), UNK_0xB177666FAB6F4417(Local_63.f_2), 0) && !UNK_0x64E716CF8C283BF5(UNK_0x16F2683693E537C9(), UNK_0xB177666FAB6F4417(Local_63.f_2))) && func_31(UNK_0x16F2683693E537C9(), UNK_0xB177666FAB6F4417(Local_63.f_2), 1) >= 10f)
					{
						vLocal_85[UNK_0x57270EE11514DC67() /*3*/].f_2 = 5;
					}
				}
				break;
			case 5:
				func_148();
				break;
		}
		func_75();
	}
}

void func_75()
{
	int iVar0;
	struct<9> Var1;

	if (UNK_0x83D8570832F172A7(iLocal_188))
	{
		if (func_90(1, 1))
		{
			if (((vLocal_85[UNK_0x57270EE11514DC67() /*3*/].f_2 == 1 || vLocal_85[UNK_0x57270EE11514DC67() /*3*/].f_2 == 2) || vLocal_85[UNK_0x57270EE11514DC67() /*3*/].f_2 == 3) || vLocal_85[UNK_0x57270EE11514DC67() /*3*/].f_2 == 4)
			{
				iVar0 = 1;
				Var1 = { func_89() };
				func_87(&uLocal_189);
				if (vLocal_85[UNK_0x57270EE11514DC67() /*3*/].f_2 == 1)
				{
					if (func_72(Local_63.f_2))
					{
						if ((UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), UNK_0xB177666FAB6F4417(Local_63.f_2), 10f, 10f, 3f, 0, 1, 0) && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0)) && !func_86(UNK_0xB177666FAB6F4417(Local_63.f_2), 0))
						{
							func_85(UNK_0xF59058FCB716F903(2, 23, true), "BTX_ENTER", &uLocal_189, 0);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
				if (iVar0 == 1)
				{
					func_95();
					func_84(1);
					func_76(&iLocal_188, &Var1, &uLocal_189, func_83(&uLocal_189));
				}
			}
		}
	}
	else
	{
		iLocal_188 = UNK_0xB01F55A0FD1CFD49("instructional_buttons");
	}
}

void func_76(int iParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam3 == 1 || UNK_0xB8E3620B82AD47D7(2))
	{
		*uParam2 = 0;
		if (UNK_0x83D8570832F172A7(*iParam0))
		{
			if (UNK_0x0EFF6B4415DAF4A1())
			{
				UNK_0x7E60C62A7CE58FC8(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				UNK_0x1200CC973A2399C8(false);
				UNK_0x7E60D21B163E9D56();
			}
			UNK_0x7E60C62A7CE58FC8(*iParam0, "CLEAR_ALL");
			UNK_0x7E60D21B163E9D56();
		}
		func_82(uParam2);
	}
	if (Global_1315716 < 2)
	{
		func_81(1);
	}
	if (*uParam2 == 0)
	{
		if (!UNK_0x83D8570832F172A7(*iParam0))
		{
			*iParam0 = UNK_0xB01F55A0FD1CFD49("instructional_buttons");
		}
		if (UNK_0x83D8570832F172A7(*iParam0))
		{
			UNK_0x7526D52FFFAB1652(*iParam0, "CLEAR_ALL");
			if (UNK_0x0EFF6B4415DAF4A1())
			{
				UNK_0x7E60C62A7CE58FC8(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				UNK_0x1200CC973A2399C8(true);
				UNK_0x7E60D21B163E9D56();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_689, bVar0))
				{
					UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(bVar0);
					if (!UNK_0xEAE0D21A50E6C7F4(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_80(UNK_0xF59058FCB716F903(iVar1, iVar2, true));
						if (iVar3 < 361)
						{
							func_80(UNK_0xF59058FCB716F903(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_80(UNK_0xE32F7AC5E6DF304A(iVar4, iVar5, true));
					}
					if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_686, bVar0))
					{
						UNK_0x7ACC3006A87F8B39(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							UNK_0x164431059FF80580(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							UNK_0x6D99DF8263D35CE5(uParam2->f_1[bVar0 /*57*/].f_36);
							if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_687, bVar0))
							{
								UNK_0x6D99DF8263D35CE5(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						UNK_0x779B34565F4D71B1();
					}
					else if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_688, bVar0))
					{
						UNK_0x7ACC3006A87F8B39(&(uParam2->f_1[bVar0 /*57*/].f_32));
						UNK_0xD06AC7C87A34A6AD(&(uParam2->f_1[bVar0 /*57*/].f_38));
						UNK_0x779B34565F4D71B1();
					}
					else
					{
						func_79(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (UNK_0x0EFF6B4415DAF4A1())
					{
						if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_691, bVar0))
						{
							UNK_0x1200CC973A2399C8(true);
							UNK_0x3CAEA85DA607305E(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							UNK_0x1200CC973A2399C8(false);
							UNK_0x3CAEA85DA607305E(361);
						}
					}
					UNK_0x7E60D21B163E9D56();
				}
				else
				{
					UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(bVar0);
					func_80(&(uParam2->f_1[bVar0 /*57*/]));
					if (!UNK_0xEA6BC48857E0AC4C(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_80(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_686, bVar0))
					{
						UNK_0x7ACC3006A87F8B39(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							UNK_0x164431059FF80580(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							UNK_0x6D99DF8263D35CE5(uParam2->f_1[bVar0 /*57*/].f_36);
							if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_687, bVar0))
							{
								UNK_0x6D99DF8263D35CE5(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						UNK_0x779B34565F4D71B1();
					}
					else if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_688, bVar0))
					{
						UNK_0x7ACC3006A87F8B39(&(uParam2->f_1[bVar0 /*57*/].f_32));
						UNK_0xD06AC7C87A34A6AD(&(uParam2->f_1[bVar0 /*57*/].f_38));
						UNK_0x779B34565F4D71B1();
					}
					else
					{
						func_79(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (UNK_0x0EFF6B4415DAF4A1())
					{
						UNK_0x1200CC973A2399C8(false);
						UNK_0x3CAEA85DA607305E(361);
					}
					UNK_0x7E60D21B163E9D56();
				}
				bVar0++;
			}
			UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_MAX_WIDTH");
			UNK_0x7C19E5E4784BD7CF(uParam2->f_699);
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(*iParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x7E60D21B163E9D56();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_78(*iParam0, uParam1);
	}
	func_77();
}

void func_77()
{
	UNK_0x3584F71E5CA29322(7);
	UNK_0x3584F71E5CA29322(6);
	UNK_0x3584F71E5CA29322(8);
	UNK_0x3584F71E5CA29322(9);
}

void func_78(int iParam0, var uParam1)
{
	UNK_0x6567AE843FADBA94(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_79(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_80(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

void func_81(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_82(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_83(var uParam0)
{
	return uParam0->f_692;
}

void func_84(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_85(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;

	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

bool func_86(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		iVar1 = UNK_0xD6DF381716822EFE(bParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (UNK_0xBBA8A868118C90ED(bParam0, (iVar0 - 1), 0))
			{
				return false;
			}
			else if (!bParam1)
			{
				bVar2 = UNK_0xA30B8362589C124A(bParam0, (iVar0 - 1), 0);
				if (UNK_0xEB6A8945D1AC98A1(bVar2))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

void func_87(var uParam0)
{
	func_88(uParam0);
	uParam0->f_692 = 1;
}

void func_88(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 361;
		uParam0->f_1[iVar0 /*57*/].f_56 = 361;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

struct<9> func_89()
{
	struct<9> Var0;

	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

bool func_90(int iParam0, int iParam1)
{
	if (UNK_0x798A3F1296751F46())
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (func_94())
		{
			return false;
		}
	}
	if (func_29())
	{
		return false;
	}
	if (iParam1 == 1)
	{
		if (func_93(0))
		{
			return false;
		}
	}
	if (func_92(8, -1))
	{
		return false;
	}
	if (UNK_0x1A72D8C9F025E5E3())
	{
		return false;
	}
	if (func_91())
	{
		return false;
	}
	if (Global_58693)
	{
		return false;
	}
	if (Global_73825)
	{
		return false;
	}
	if (UNK_0xE57E602827E07C9D())
	{
		return false;
	}
	if (Global_1312791)
	{
		return false;
	}
	if (Global_1574191)
	{
		return false;
	}
	return true;
}

bool func_91()
{
	return Global_1312877;
}

bool func_92(bool bParam0, int iParam1)
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

bool func_93(int iParam0)
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

bool func_94()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_95()
{
	Global_2548146.f_258 = 1;
}

void func_96()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_184))
	{
		UNK_0x142CC44DB769B57E(&iLocal_184);
	}
}

void func_97()
{
	bool bVar0;

	if (!UNK_0xFEBC1E4EC9E001F0())
	{
		bVar0 = func_26(1190, -1, 0);
		if (!UNK_0xEAE0D21A50E6C7F4(bVar0, 15))
		{
			func_99("BTX_HELP1", -1);
			UNK_0x5D96D8530B3D0904(&bVar0, 15);
			func_98(1190, bVar0, -1, 1, 0);
		}
	}
}

void func_98(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_27(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

void func_99(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_100()
{
	if (!func_4(Local_63.f_3) && func_72(Local_63.f_2))
	{
		if (UNK_0x526BC32A660C89E6(Local_63.f_3) || (!UNK_0x83F012E6200426DB(Local_63.f_3) && UNK_0xBFF81ED3B99522C7()))
		{
			func_130();
			func_104();
			if (func_103(Local_63.f_3))
			{
				UNK_0x9DD8618CA5BF832D(UNK_0x1B50683925F00106(Local_63.f_3), 323, true);
			}
			switch (Local_63.f_20)
			{
				case 0:
					break;
				case 2:
					if (UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_63.f_3), -1273030092) != 1 && UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_63.f_3), -1273030092) != 0)
					{
						UNK_0x5B54B463A4225B9F(UNK_0x1B50683925F00106(Local_63.f_3), UNK_0xB177666FAB6F4417(Local_63.f_2), false, UNK_0x16F2683693E537C9(), 0f, 0f, 0f, 4, 12f, 786469, 10f, 1071);
					}
					break;
				case 4:
					func_102(UNK_0x68F4C0EC296D3901(UNK_0xB177666FAB6F4417(Local_63.f_2), false), Local_63.f_7);
					UNK_0x10FEEAFF01E32639(fLocal_1066, fLocal_1068, fLocal_1067, fLocal_1069);
					if (UNK_0xD1B4D22E0BA9B0C8(fLocal_1066, fLocal_1068, fLocal_1067, fLocal_1069))
					{
						if (UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_63.f_3), 242628503) != 1 && UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_63.f_3), 242628503) != 0)
						{
							UNK_0x78ADC381772E3D54(UNK_0x1B50683925F00106(Local_63.f_3), iLocal_187);
						}
					}
					break;
				case 5:
					if (UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_63.f_3), -1273030092) != 1 && UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_63.f_3), -1273030092) != 0)
					{
						UNK_0x132B85BCE016BCA0(UNK_0x1B50683925F00106(Local_63.f_3), UNK_0xB177666FAB6F4417(Local_63.f_2), UNK_0x68F4C0EC296D3901(UNK_0xB177666FAB6F4417(Local_63.f_2), true), 5, 5f, 1076625579, 2f, 1f, 1);
					}
					break;
				case 3:
					if (UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_63.f_3), -1273030092) != 1 && UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_63.f_3), -1273030092) != 0)
					{
						UNK_0x132B85BCE016BCA0(UNK_0x1B50683925F00106(Local_63.f_3), UNK_0xB177666FAB6F4417(Local_63.f_2), UNK_0x68F4C0EC296D3901(UNK_0xB177666FAB6F4417(Local_63.f_2), true), 5, 5f, 1076625579, 2f, 1f, 1);
					}
					break;
				case 1:
					if (!UNK_0xEAE0D21A50E6C7F4(vLocal_85[UNK_0x57270EE11514DC67() /*3*/].f_1, 7))
					{
						if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), UNK_0xB177666FAB6F4417(Local_63.f_2), 0) || UNK_0x64E716CF8C283BF5(UNK_0x16F2683693E537C9(), UNK_0xB177666FAB6F4417(Local_63.f_2)))
						{
							UNK_0xFCCF7611216AE801(UNK_0x1B50683925F00106(Local_63.f_3), 0);
							UNK_0x35126F52AFE6E6CA(UNK_0x1B50683925F00106(Local_63.f_3), 0);
							UNK_0xBAFED2F6486F771A(UNK_0x1B50683925F00106(Local_63.f_3), 2, false);
							UNK_0x78ADC381772E3D54(UNK_0x1B50683925F00106(Local_63.f_3), iLocal_185);
						}
						else
						{
							UNK_0xFCCF7611216AE801(UNK_0x1B50683925F00106(Local_63.f_3), 0);
							UNK_0x35126F52AFE6E6CA(UNK_0x1B50683925F00106(Local_63.f_3), 0);
							UNK_0xBAFED2F6486F771A(UNK_0x1B50683925F00106(Local_63.f_3), 2, true);
							UNK_0x78ADC381772E3D54(UNK_0x1B50683925F00106(Local_63.f_3), iLocal_186);
						}
						UNK_0x5D96D8530B3D0904(&(vLocal_85[UNK_0x57270EE11514DC67() /*3*/].f_1), 7);
					}
					break;
				case 6:
					if (UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_63.f_3), 242628503) != 1 && UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_63.f_3), 242628503) != 0)
					{
						UNK_0x78ADC381772E3D54(UNK_0x1B50683925F00106(Local_63.f_3), iLocal_186);
					}
					break;
				case 7:
					if (UNK_0xE9F78D191AD5EDBA(Local_63.f_2))
					{
						func_101(&(Local_63.f_2));
					}
					if (UNK_0xE9F78D191AD5EDBA(Local_63.f_3))
					{
						UNK_0xFADC0A217229F6B5(UNK_0x1B50683925F00106(Local_63.f_3), true);
						func_101(&(Local_63.f_3));
					}
					break;
			}
		}
	}
}

void func_101(var uParam0)
{
	bool bVar0;

	if (UNK_0xE5DBF9B6126856CA(*uParam0))
	{
		bVar0 = UNK_0xA5FBBC2F619A4DE2(*uParam0);
		UNK_0x82692E8F6A0D7A22(&bVar0);
	}
}

void func_102(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	if (Param0 < Param3)
	{
		fLocal_1066 = (Param0 - 25f);
		fLocal_1067 = (Param3 + 25f);
	}
	else if (Param0 > Param3)
	{
		fLocal_1066 = (Param3 - 25f);
		fLocal_1067 = (Param0 + 25f);
	}
	if (Param0.f_1 < Param3.f_1)
	{
		fLocal_1068 = (Param0.f_1 - 25f);
		fLocal_1069 = (Param3.f_1 + 25f);
	}
	else if (Param0.f_1 > Param3.f_1)
	{
		fLocal_1068 = (Param3.f_1 - 25f);
		fLocal_1069 = (Param0.f_1 + 25f);
	}
}

bool func_103(int iParam0)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		UNK_0x8D30F6387EE75385(iParam0);
		return UNK_0x526BC32A660C89E6(iParam0);
	}
	return false;
}

void func_104()
{
	bool bVar0;
	char cVar1[16];

	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_182, 4))
	{
		if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), UNK_0x1B50683925F00106(Local_63.f_3), 15f, 15f, 15f, 0, 1, 0))
		{
			func_129(&uLocal_895, 8, UNK_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_108(&uLocal_895, "FMAMBAU", "FMA_BPDA", 12, 0, 0, 1))
			{
				UNK_0x0C8C0C840C2D1AD2(UNK_0x1B50683925F00106(Local_63.f_3), UNK_0x16F2683693E537C9(), 5000, 0, 2);
				UNK_0x5D96D8530B3D0904(&bLocal_182, 4);
			}
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_182, 6))
	{
		if (Local_63.f_20 == 4)
		{
			func_129(&uLocal_895, 8, UNK_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_108(&uLocal_895, "FMAMBAU", "FMA_BPDA3", 12, 0, 0, 1))
			{
				UNK_0x0C8C0C840C2D1AD2(UNK_0x1B50683925F00106(Local_63.f_3), UNK_0x16F2683693E537C9(), 5000, 0, 2);
				UNK_0x5D96D8530B3D0904(&bLocal_182, 6);
			}
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_182, 5))
	{
		if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), Local_63.f_7, (10f * 2f), (10f * 2f), (10f * 2f), false, true, 0))
		{
			func_129(&uLocal_895, 8, UNK_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_108(&uLocal_895, "FMAMBAU", "FMA_BPDA6", 12, 0, 0, 1))
			{
				UNK_0x0C8C0C840C2D1AD2(UNK_0x1B50683925F00106(Local_63.f_3), UNK_0x16F2683693E537C9(), 5000, 0, 2);
				UNK_0x5D96D8530B3D0904(&bLocal_182, 5);
			}
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_182, 7))
	{
		if (Local_63.f_20 == 5)
		{
			func_129(&uLocal_895, 8, UNK_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_108(&uLocal_895, "FMAMBAU", "FMA_BPDA7", 12, 0, 0, 1))
			{
				UNK_0x0C8C0C840C2D1AD2(UNK_0x1B50683925F00106(Local_63.f_3), UNK_0x16F2683693E537C9(), 5000, 0, 2);
				UNK_0x5D96D8530B3D0904(&bLocal_182, 7);
			}
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_182, 8))
	{
		func_129(&uLocal_895, 8, UNK_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
		if (func_108(&uLocal_895, "FMAMBAU", "FMA_BPDA4", 12, 0, 0, 1))
		{
			UNK_0x0C8C0C840C2D1AD2(UNK_0x1B50683925F00106(Local_63.f_3), UNK_0x16F2683693E537C9(), 5000, 0, 2);
			UNK_0x5D96D8530B3D0904(&bLocal_182, 8);
		}
	}
	if (Local_63.f_20 == 3)
	{
		if (func_68(&uLocal_1061, 30000, 0))
		{
			func_129(&uLocal_895, 8, UNK_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_108(&uLocal_895, "FMAMBAU", "FMA_BPDA2", 12, 0, 0, 1))
			{
				UNK_0x0C8C0C840C2D1AD2(UNK_0x1B50683925F00106(Local_63.f_3), UNK_0x16F2683693E537C9(), 5000, 0, 2);
				func_107(&uLocal_1061, 0, 0);
			}
		}
	}
	if (Local_63.f_20 == 4)
	{
		if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) <= 0)
		{
			if (func_68(&uLocal_1064, iLocal_1063, 0))
			{
				bVar0 = UNK_0x09AC81E49EA267F7(false, 17);
				StringCopy(&cVar1, "", 16);
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_183, bVar0))
				{
					switch (bVar0)
					{
						case 0:
							StringCopy(&cVar1, "FMA_BPDA5", 16);
							break;
						case 1:
							StringCopy(&cVar1, "FMA_BPDA5b", 16);
							break;
						case 2:
							StringCopy(&cVar1, "FMA_BPDA5c", 16);
							break;
						case 3:
							StringCopy(&cVar1, "FMA_BPDA5d", 16);
							break;
						case 4:
							StringCopy(&cVar1, "FMA_BPDA5e", 16);
							break;
						case 5:
							StringCopy(&cVar1, "FMA_BPDA5f", 16);
							break;
						case 6:
							StringCopy(&cVar1, "FMA_BPDA5g", 16);
							break;
						case 7:
							StringCopy(&cVar1, "FMA_BPDA5h", 16);
							break;
						case 8:
							StringCopy(&cVar1, "FMA_BPDA5i", 16);
							break;
						case 9:
							StringCopy(&cVar1, "FMA_BPDA5j", 16);
							break;
						case 10:
							StringCopy(&cVar1, "FMA_BPDA5k", 16);
							break;
						case 11:
							StringCopy(&cVar1, "FMA_BPDA5l", 16);
							break;
						case 12:
							StringCopy(&cVar1, "FMA_BPDA5m", 16);
							break;
						case 13:
							StringCopy(&cVar1, "FMA_BPDA5n", 16);
							break;
						case 14:
							StringCopy(&cVar1, "FMA_BPDA5o", 16);
							break;
						case 15:
							StringCopy(&cVar1, "FMA_BPDA5p", 16);
							break;
						case 16:
							StringCopy(&cVar1, "FMA_BPDA5q", 16);
							break;
					}
					if (!UNK_0xEA6BC48857E0AC4C(&cVar1))
					{
						func_129(&uLocal_895, 8, UNK_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
						if (func_108(&uLocal_895, "FMAMBAU", &cVar1, 12, 0, 0, 1))
						{
							func_107(&uLocal_1064, 0, 0);
							UNK_0x5D96D8530B3D0904(&bLocal_183, bVar0);
							UNK_0x0C8C0C840C2D1AD2(UNK_0x1B50683925F00106(Local_63.f_3), UNK_0x16F2683693E537C9(), 5000, 0, 2);
							iLocal_1063 = (UNK_0x09AC81E49EA267F7(20000, 30001) + bVar0 * 500);
						}
					}
				}
			}
		}
	}
	if (!func_4(Local_63.f_3))
	{
		if (func_72(Local_63.f_2))
		{
			if (!UNK_0x65636D4556D82155(UNK_0x1B50683925F00106(Local_63.f_3)) && !UNK_0x2A325BF7BC6DD316(UNK_0x1B50683925F00106(Local_63.f_3)))
			{
				if (UNK_0xB87D13D0C064E9D1(UNK_0xB177666FAB6F4417(Local_63.f_2), UNK_0x16F2683693E537C9(), 1) || UNK_0xB87D13D0C064E9D1(UNK_0x1B50683925F00106(Local_63.f_3), UNK_0x16F2683693E537C9(), 1))
				{
					switch (UNK_0x09AC81E49EA267F7(false, 6))
					{
						case 0:
							func_105(UNK_0x1B50683925F00106(Local_63.f_3), "GENERIC_SHOCKED_MED", 3);
							break;
						case 1:
							func_105(UNK_0x1B50683925F00106(Local_63.f_3), "GENERIC_SHOCKED_HIGH", 3);
							break;
						case 2:
							func_105(UNK_0x1B50683925F00106(Local_63.f_3), "GENERIC_FRIGHTENED_MED", 3);
							break;
						case 3:
							func_105(UNK_0x1B50683925F00106(Local_63.f_3), "GENERIC_FRIGHTENED_HIGH", 3);
							break;
						case 4:
							func_105(UNK_0x1B50683925F00106(Local_63.f_3), "GENERIC_CURSE_MED", 3);
							break;
						case 5:
							func_105(UNK_0x1B50683925F00106(Local_63.f_3), "GENERIC_CURSE_HIGH", 3);
							break;
					}
					UNK_0xE910A68AA670B4AA(UNK_0xB177666FAB6F4417(Local_63.f_2));
					UNK_0xE910A68AA670B4AA(UNK_0x1B50683925F00106(Local_63.f_3));
				}
			}
			else
			{
				UNK_0xE910A68AA670B4AA(UNK_0xB177666FAB6F4417(Local_63.f_2));
				UNK_0xE910A68AA670B4AA(UNK_0x1B50683925F00106(Local_63.f_3));
			}
		}
	}
}

void func_105(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_106(iParam2), 1);
}

int func_106(int iParam0)
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

void func_107(var uParam0, bool bParam1, bool bParam2)
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

int func_108(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_128(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 1;
	return func_109(sParam2, iParam3, 0);
}

int func_109(char* sParam0, int iParam1, bool bParam2)
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
					func_127();
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
		if (func_92(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_126();
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
				func_118();
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
				if (func_117())
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
			if (func_116())
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
			func_115();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_114();
		func_110();
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
		func_127();
	}
	return 0;
}

void func_110()
{
	if (!func_111())
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

bool func_111()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_57())
	{
		return false;
	}
	if (func_112(UNK_0xD803B885F5E47A62()))
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

bool func_112(int iParam0)
{
	return func_113(iParam0, 20);
}

bool func_113(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

void func_114()
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

void func_115()
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

bool func_116()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_117()
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

void func_118()
{
	if (func_125(14))
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
		Global_19486 = func_119();
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

var func_119()
{
	func_120();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_120()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_123(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_122(UNK_0x16F2683693E537C9());
			if (func_121(iVar0) && (!func_125(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_121(Global_111638.f_2358.f_539.f_4321))
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

bool func_121(int iParam0)
{
	return iParam0 < 3;
}

int func_122(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_123(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_123(int iParam0)
{
	if (func_121(iParam0))
	{
		return func_124(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_124(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_125(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_126()
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

void func_127()
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

void func_128(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_129(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_130()
{
	UNK_0x7352ACF3368DF65F("MobileRadioInGame", 0);
	if (func_3(UNK_0xD803B885F5E47A62(), 1, 1))
	{
		if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), UNK_0xB177666FAB6F4417(Local_63.f_2)) && !func_131(UNK_0x16F2683693E537C9(), UNK_0xB177666FAB6F4417(Local_63.f_2), -1))
		{
			UNK_0x7352ACF3368DF65F("MobileRadioInGame", 1);
		}
	}
}

bool func_131(bool bParam0, bool bParam1, bool bParam2)
{
	if (!UNK_0x437347B10A200C4B(bParam0, 0) && !UNK_0x437347B10A200C4B(bParam1, 0))
	{
		if (UNK_0x82CCEAB29E9451DD(bParam0, bParam1))
		{
			if (UNK_0xA30B8362589C124A(bParam1, bParam2, 0) == bParam0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_132()
{
	if (!UNK_0xE4EDC4B0E92C078B(iLocal_184))
	{
		if (func_72(Local_63.f_2))
		{
			iLocal_184 = UNK_0x5C3B41825F6AC5A0(UNK_0xB177666FAB6F4417(Local_63.f_2));
			UNK_0xBC8E0A7390523199(iLocal_184, 356);
			UNK_0xDC5B2F9D0CCE3A10(iLocal_184, "BTX_BLIP");
			UNK_0xF412DD40DE84CE72(iLocal_184, 1);
			UNK_0x5C75F8C0E612F520(iLocal_184, 6);
		}
	}
}

void func_133()
{
	if (func_72(Local_63.f_2))
	{
		UNK_0xDD353D0E9C789D0E(&iLocal_187);
		UNK_0x5B54B463A4225B9F(false, UNK_0xB177666FAB6F4417(Local_63.f_2), false, false, Local_63.f_7, 4, 12f, 786469, 10f, 1071);
		UNK_0x75ABDC5F81978924(iLocal_187);
		UNK_0xDD353D0E9C789D0E(&iLocal_186);
		UNK_0x132B85BCE016BCA0(false, UNK_0xB177666FAB6F4417(Local_63.f_2), Local_63.f_13, 4, 12f, 786469, 0f, 0f, 1);
		UNK_0xE072601B4380E9DF(false, UNK_0xB177666FAB6F4417(Local_63.f_2), 12f, 786469);
		UNK_0x75ABDC5F81978924(iLocal_186);
		UNK_0xDD353D0E9C789D0E(&iLocal_185);
		UNK_0x75CDA8644CD3B5F5(false, 0, 64);
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
		}
		else
		{
			UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
		}
		UNK_0x75ABDC5F81978924(iLocal_185);
	}
}

int func_134()
{
	return Local_63.f_1;
}

int func_135(int iParam0)
{
	return vLocal_85[iParam0 /*3*/];
}

bool func_136()
{
	var uVar0;

	func_144(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_143())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_142())
	{
		return true;
	}
	if (func_141(159))
	{
		if (!func_140())
		{
			return true;
		}
	}
	if (func_141(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_137() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_137()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_137()
{
	switch (func_139())
	{
		case 0:
			return func_138();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_138()
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

int func_139()
{
	return Global_30768;
}

bool func_140()
{
	return Global_2450632.f_598;
}

bool func_141(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_142()
{
	return Global_2460680;
}

bool func_143()
{
	return Global_2450632.f_593;
}

void func_144(var uParam0)
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
					func_145(iVar0);
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

void func_145(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_3(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_146(bVar4, &bVar5))
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

bool func_146(bool bParam0, bool bParam1)
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

void func_147()
{
	SYSTEM::WAIT(0);
}

void func_148()
{
	func_96();
	if (UNK_0x8CD06866876216F2())
	{
		if (Local_63.f_20 == 7)
		{
			if (func_72(Local_63.f_2) && !func_4(Local_63.f_3))
			{
				UNK_0x78ADC381772E3D54(UNK_0x1B50683925F00106(Local_63.f_3), iLocal_186);
			}
			if (UNK_0xE9F78D191AD5EDBA(Local_63.f_2))
			{
				if (UNK_0x526BC32A660C89E6(Local_63.f_2))
				{
					func_101(&(Local_63.f_2));
				}
			}
			if (UNK_0xE9F78D191AD5EDBA(Local_63.f_3))
			{
				if (UNK_0x526BC32A660C89E6(Local_63.f_3))
				{
					func_101(&(Local_63.f_3));
				}
			}
		}
	}
	func_151(func_152(1, 1), 9, func_57());
	func_150();
	UNK_0xE17FDF9E3068281B(&iLocal_188);
	func_149();
}

void func_149()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_150()
{
	UNK_0xF82EA857DA10E0CD(&iLocal_185);
	UNK_0xF82EA857DA10E0CD(&iLocal_186);
	UNK_0xF82EA857DA10E0CD(&iLocal_187);
}

void func_151(bool bParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0 = -770184899;
	Var0.f_1 = UNK_0xD803B885F5E47A62();
	Var0.f_3 = iParam1;
	Var0.f_2 = iParam2;
	if (!bParam0 == 0)
	{
		UNK_0xFB061A86A7AC749F(1, &Var0, 6, bParam0);
	}
}

bool func_152(bool bParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = UNK_0x117658E336116132(bVar1);
		if (func_3(bVar2, 0, 0))
		{
			if (bVar2 != UNK_0xD803B885F5E47A62() || bParam0)
			{
				if (bParam1)
				{
					UNK_0x5D96D8530B3D0904(&uVar0, bVar1);
				}
				else if (!func_48(bVar2, 0))
				{
					UNK_0x5D96D8530B3D0904(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_153(struct<21> Param0)
{
	func_157(32, Param0);
	UNK_0x0BEC04ECA8485A3A(1);
	UNK_0x28E5F00F131890E3(1);
	func_155(0, -1, 0);
	UNK_0x9752E7BAEABA939E(&Local_63, 22);
	UNK_0x35B62793EAE9ADDF(&vLocal_85, 97);
	if (!func_154())
	{
		return false;
	}
	UNK_0x256D93AFAE851A7A(0);
	if (UNK_0xBFF81ED3B99522C7())
	{
		Local_63.f_4 = UNK_0xD803B885F5E47A62();
		Local_63.f_5 = func_67();
		Local_63.f_10 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) + Vector(0f, 5f, 0f) };
		Local_63.f_7 = { func_65(Local_63.f_5) };
	}
	UNK_0x5D96D8530B3D0904(&bLocal_182, 8);
	iLocal_1060 = UNK_0x09BE1E6DF7B80B43();
	vLocal_85[UNK_0x57270EE11514DC67() /*3*/] = 0;
	return true;
}

bool func_154()
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
		if (func_143())
		{
			return false;
		}
		if (func_141(157))
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

int func_155(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_149();
			}
			else
			{
				return 0;
			}
		}
		if (!func_156())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_149();
					}
					else
					{
						return 0;
					}
				}
				if (func_143())
				{
					if (!bParam2)
					{
						func_149();
					}
					else
					{
						return 0;
					}
				}
				if (func_141(157))
				{
					if (!bParam2)
					{
						func_149();
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
					func_149();
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
				func_149();
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
			func_149();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_156()
{
	return Global_1312854;
}

void func_157(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!UNK_0x8CD06866876216F2())
	{
		func_149();
	}
	UNK_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

