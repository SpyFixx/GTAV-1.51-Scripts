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
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = -1;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
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
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	bool bLocal_120 = false;
	bool bLocal_121 = false;
	bool bLocal_122 = false;
	bool bLocal_123 = false;
	int iLocal_124 = 0;
	int iLocal_125[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_131 = false;
	bool bLocal_132 = false;
	bool bLocal_133 = false;
	bool bLocal_134[5] = { false, false, false, false, false };
	bool bLocal_140 = false;
	var uLocal_141 = 0;
	struct<10> Local_142 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<30> Local_152 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	bool bLocal_184 = false;
	vector3 vLocal_185[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	bool bLocal_282 = false;
	int iLocal_283 = 0;
	bool bLocal_284 = false;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 12;
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
	var uLocal_990 = 1065353216;
	int iLocal_991 = 0;
	int iLocal_992 = 0;
	int iLocal_993 = 0;
	int iLocal_994 = 0;
	int iLocal_995 = 0;
	int iLocal_996 = 0;
	var uLocal_997 = 16;
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
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
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
	bool bLocal_1168 = false;
	int iLocal_1169 = 0;
	int iLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	int iLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	bool bLocal_1188 = false;
	bool bLocal_1189 = false;
	bool bLocal_1190 = false;
	int iLocal_1191 = 0;
	bool bLocal_1192 = false;
	bool bLocal_1193 = false;
	int iLocal_1194 = 0;
	vector3 vLocal_1195 = { 0f, 0f, 0f };
	vector3 vLocal_1198[1] = {{ 0f, 0f, 0f } };
	var uLocal_1202[1] = { 0 };
	var uLocal_1204[1] = { 0 };
	bool bLocal_1206 = false;
	bool bLocal_1207 = false;
	bool bLocal_1208 = false;
	bool bLocal_1209 = false;
	int iLocal_1210 = 0;
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	bLocal_284 = 6;
	iLocal_1179 = 10000;
	func_504();
	if (UNK_0x8CD06866876216F2())
	{
		if (!func_500(ScriptParam_0))
		{
			if (UNK_0xBFF81ED3B99522C7())
			{
				Local_152.f_24 = 8;
			}
			func_494(1);
		}
	}
	while (true)
	{
		func_493();
		if (func_483())
		{
			if (UNK_0x8CD06866876216F2())
			{
				if (UNK_0xBFF81ED3B99522C7())
				{
					Local_152.f_24 = 8;
				}
			}
			func_494(1);
		}
		if (UNK_0x09BE1E6DF7B80B43() != iLocal_991 && !UNK_0xBFF81ED3B99522C7())
		{
			if (UNK_0xBFF81ED3B99522C7())
			{
				Local_152.f_24 = 8;
			}
			func_494(1);
		}
		if (UNK_0x4B2BFE4A3BC248ED(UNK_0x0D03A641486A2001()) != Local_152.f_5)
		{
			if (UNK_0xBFF81ED3B99522C7())
			{
				Local_152.f_24 = 8;
			}
			func_494(1);
		}
		UNK_0x0F6D9B8ED0147392();
		bLocal_1209 = false;
		iLocal_1210 = 0;
		switch (func_482(UNK_0x57270EE11514DC67()))
		{
			case 0:
				if (func_481() == 1)
				{
					func_480();
					func_479();
					vLocal_185[UNK_0x57270EE11514DC67() /*3*/] = 1;
				}
				else if (func_481() == 5)
				{
					vLocal_185[UNK_0x57270EE11514DC67() /*3*/] = 3;
				}
				break;
			case 1:
				func_459();
				if (func_481() == 1)
				{
					func_337();
				}
				else if (func_481() == 5)
				{
					vLocal_185[UNK_0x57270EE11514DC67() /*3*/] = 3;
				}
				break;
			case 3:
				func_336(&(Local_152.f_25));
				if (func_335(&(Local_152.f_25)))
				{
					vLocal_185[UNK_0x57270EE11514DC67() /*3*/] = 5;
				}
				break;
			case 2:
				vLocal_185[UNK_0x57270EE11514DC67() /*3*/] = 5;
			case 5:
				func_494(1);
				break;
		}
		func_334();
		if (func_333())
		{
			func_322();
		}
		if (UNK_0xBFF81ED3B99522C7())
		{
			switch (func_481())
			{
				case 0:
					if (func_294())
					{
						func_480();
						Local_152 = 1;
					}
					break;
				case 1:
					func_274();
					func_268();
					func_158();
					if (func_150())
					{
						Local_152 = 5;
					}
					break;
				case 4:
					func_1();
					break;
				case 5:
					break;
			}
		}
	}
}

void func_1()
{
	func_144();
	if (func_143(UNK_0xD803B885F5E47A62(), 1, 1))
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_282, 6) && !UNK_0xEAE0D21A50E6C7F4(bLocal_282, 7))
		{
			if (!func_142(0))
			{
				if (!func_333())
				{
					func_140(13);
					func_120(func_136(13), 6, 2, 1);
				}
				else
				{
					func_140(44);
					func_120(func_136(44), 6, 2, 1);
				}
				UNK_0x5D96D8530B3D0904(&bLocal_282, 7);
				Local_152 = 5;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_282, 5) && !UNK_0xEAE0D21A50E6C7F4(bLocal_282, 6))
		{
			if (func_142(0))
			{
				UNK_0x5D96D8530B3D0904(&bLocal_282, 6);
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_282, 5))
		{
			if (func_118(&uLocal_1164, 5000, 0))
			{
				if (!func_333())
				{
					func_117(&uLocal_997, 3, 0, "FM_MERRYWEATHER", 0, 1);
					if (func_13(&uLocal_997, 85, "CT_AUD", "MPCT_9", 0, 0))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_282, 5);
					}
				}
				else
				{
					func_12(1);
					if (func_7(1))
					{
						func_117(&uLocal_997, 3, 0, "EXECPA_MALE", 0, 1);
						if (func_13(&uLocal_997, func_2(1), "EXCALAU", "EXCAL_HPROBM", 0, 0))
						{
							UNK_0x5D96D8530B3D0904(&bLocal_282, 5);
						}
					}
					else
					{
						func_117(&uLocal_997, 2, 0, "EXECPA_FEMALE", 0, 1);
						if (func_13(&uLocal_997, func_2(1), "EXCALAU", "EXCAL_HPROBF", 0, 0))
						{
							UNK_0x5D96D8530B3D0904(&bLocal_282, 5);
						}
					}
				}
			}
		}
	}
}

bool func_2(bool bParam0)
{
	if (func_7(bParam0))
	{
		if (bParam0 && func_4())
		{
			func_3(22, Global_19486, 1);
			return 22;
		}
		else
		{
			return 75;
		}
	}
	if (bParam0 && func_4())
	{
		func_3(22, Global_19486, 1);
		return 22;
	}
	return 74;
}

void func_3(int iParam0, int iParam1, int iParam2)
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

bool func_4()
{
	bool bVar0;

	bVar0 = func_6(UNK_0xD803B885F5E47A62());
	if (((bVar0 != UNK_0xD803B885F5E47A62() && bVar0 != func_5()) && UNK_0x40B8C182D63932FC(bVar0)) && bVar0 != -1)
	{
		return true;
	}
	return false;
}

bool func_5()
{
	return -1;
}

bool func_6(bool bParam0)
{
	if (bParam0 != func_5())
	{
		return Global_1628237[bParam0 /*615*/].f_11;
	}
	return func_5();
}

bool func_7(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_6(UNK_0xD803B885F5E47A62());
		if (func_4())
		{
			if (func_11(iVar0))
			{
				return true;
			}
			return false;
		}
	}
	return func_8(3222, -1, 0) != 0;
}

int func_8(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_9(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_10();
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

int func_10()
{
	return Global_1312745;
}

bool func_11(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 29);
}

void func_12(bool bParam0)
{
	if (bParam0)
	{
		Global_1573348 = 1;
	}
	else
	{
		Global_1573348 = 0;
	}
}

bool func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (func_115())
	{
		return false;
	}
	if (func_114())
	{
		return false;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = -99;
	return func_14(uParam0, bParam1, bParam2, bParam3, 1, iParam5, bParam4, bVar0, bVar1, iVar2, bVar0, bVar0, -1);
}

int func_14(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)
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
	iVar1 = func_113(bParam2, bParam3);
	iVar2 = 0;
	if (!UNK_0xEA6BC48857E0AC4C(bParam7))
	{
		iVar2 = UNK_0x12AB0310C2281427(bParam7);
	}
	if (func_112(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_107(bParam6))
	{
		return 0;
	}
	if (func_104(iVar0, iVar1, iVar2))
	{
		if (func_103())
		{
			return 0;
		}
		func_102();
		return func_21(uParam0, bParam1, iParam12, bParam2, bParam3, iParam4, iParam5, bParam6, bParam7, bParam8, iParam9, bParam10, bParam11);
	}
	if (!func_20(iParam4))
	{
		return 0;
	}
	func_15(iVar0, iVar1, iVar2, bParam3, iParam4, iParam5, bParam6);
	return 0;
}

void func_15(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, bool bParam6)
{
	Global_1370527.f_40.f_1 = iParam0;
	Global_1370527.f_40.f_2 = iParam1;
	Global_1370527.f_40.f_3 = iParam2;
	StringCopy(&(Global_1370527.f_40.f_4), sParam3, 16);
	Global_1370527.f_40.f_8 = iParam4;
	Global_1370527.f_40.f_9 = iParam5;
	Global_1370527.f_40.f_14 = bParam6;
	func_16(iParam4);
	func_102();
	Global_1370527.f_40.f_13 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), 7000);
}

void func_16(int iParam0)
{
	if (func_19(iParam0))
	{
		func_18();
		return;
	}
	func_17();
}

void func_17()
{
	Global_1370527.f_40.f_10 = 0;
}

void func_18()
{
	Global_1370527.f_40.f_10 = 1;
}

bool func_19(int iParam0)
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

bool func_20(int iParam0)
{
	return iParam0 > Global_1370527.f_40.f_8;
}

int func_21(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12)
{
	char cVar0[16];

	func_101();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_98(uParam0, bParam3, bParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&cVar0, "CELL_226", 16);
		return func_95(uParam0, bParam1, bParam3, bParam4, &cVar0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_98(uParam0, bParam3, bParam4);
		}
		return func_77(uParam0, bParam1, bParam3, bParam4, bParam7);
	}
	if (iParam5 == 5)
	{
		return func_76(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	if (iParam5 == 2)
	{
		return func_64(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	if (iParam5 == 3)
	{
		return func_63(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	if (iParam5 == 6)
	{
		return func_22(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	return 0;
}

int func_22(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	func_62();
	bVar0 = true;
	if (func_24(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8))
	{
		func_23(120000);
		return 1;
	}
	return 0;
}

void func_23(int iParam0)
{
	Global_1370527.f_40.f_11 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), iParam0);
	Global_1370527.f_40.f_12 = 1;
}

bool func_24(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
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

	bVar0 = func_5();
	iVar1 = 0;
	if (bParam0 == 145)
	{
		bVar0 = iParam1;
		bVar2 = UNK_0x6E524813889AECF8(bVar0);
		iVar1 = func_56(bVar0);
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
	bVar4 = func_55(bParam5, bParam6, &iVar3);
	iVar5 = func_53(iParam7, &iVar3);
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
		bVar12 = func_52(bParam0, bParam2, iVar10, bVar4, iVar5, bVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, bParam8, bParam9);
	}
	else
	{
		bVar12 = func_28(bParam0, bParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, false))
	{
		func_27();
	}
	func_62();
	func_26();
	func_25();
	return true;
}

void func_25()
{
	Global_1370527.f_57 = 0;
	Global_1370527.f_57.f_1 = 0;
}

void func_26()
{
	Global_1370527.f_40 = 3;
}

void func_27()
{
	UNK_0x5D96D8530B3D0904(&Global_7356, 8);
}

int func_28(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_29(bParam0, bParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_29(bool bParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;

	if (iParam13 > 99)
	{
	}
	if (UNK_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_45();
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
	if (func_44() == 0)
	{
		func_42();
		return 0;
	}
	func_41(Global_4269749);
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
	func_45();
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
				func_40(0);
				break;
			case 1:
				func_40(1);
				break;
			case 2:
				func_40(2);
				break;
			case 3:
				func_40(3);
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
		func_45();
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
			if (!func_39())
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_38(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_34(1);
			func_38(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	func_30(bParam0, bParam1);
	return 1;
}

void func_30(bool bParam0, bool bParam1)
{
	if (!func_31())
	{
		return;
	}
	UNK_0x6DFDEDC7A51E8DAE(bParam0, -1180597171, UNK_0x12AB0310C2281427(bParam1), 0);
}

bool func_31()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_5())
	{
		return false;
	}
	if (func_32(UNK_0xD803B885F5E47A62()))
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

bool func_32(bool bParam0)
{
	return func_33(bParam0, 20);
}

bool func_33(bool bParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_11.f_4, bParam1);
}

void func_34(int iParam0)
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
		if (func_37(14))
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
								func_36(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(bVar2);
								UNK_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_35(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_35(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_35(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_35(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_35(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_36(&(Global_7363[iVar1 /*15*/]));
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
								func_36(&(Global_7363[iVar1 /*15*/]));
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
								func_36(&(Global_7363[iVar1 /*15*/]));
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
								func_36(&(Global_7363[iVar1 /*15*/]));
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
								func_36(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(42);
								UNK_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_35(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_35(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_35(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
		func_36(bParam7);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		func_36(bParam8);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam9))
	{
		func_36(bParam9);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam10))
	{
		func_36(bParam10);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam11))
	{
		func_36(bParam11);
	}
	UNK_0x7E60D21B163E9D56();
}

void func_36(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

bool func_37(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_38(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_39()
{
	return Global_1312877;
}

void func_40(int iParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = Global_111638.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_41(int iParam0)
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

void func_42()
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
		if (!func_43(Global_4268500[iVar2 /*104*/].f_18, Global_4268500[Global_4269749 /*104*/].f_18))
		{
			Global_4269749 = iVar2;
		}
		iVar2++;
	}
	Global_4268500[Global_4269749 /*104*/].f_24 = 1;
}

bool func_43(struct<6> Param0, struct<6> Param6)
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

int func_44()
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
			if (!func_43(Global_4268500[iVar2 /*104*/].f_18, Global_4268500[Global_4269749 /*104*/].f_18))
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

void func_45()
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
		Global_19486 = func_46();
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

var func_46()
{
	func_47();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_47()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_50(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_49(UNK_0x16F2683693E537C9());
			if (func_48(iVar0) && (!func_37(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_48(Global_111638.f_2358.f_539.f_4321))
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

bool func_48(int iParam0)
{
	return iParam0 < 3;
}

int func_49(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_50(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_50(int iParam0)
{
	if (func_48(iParam0))
	{
		return func_51(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_51(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_52(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	if (func_29(bParam0, bParam1, iParam2, iParam6, bParam3, bParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, bParam15, bParam16, iVar0) == 1)
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

int func_53(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_54(2, iParam1);
	return iParam0;
}

void func_54(int iParam0, int iParam1)
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

bool func_55(bool bParam0, bool bParam1, int iParam2)
{
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return bLocal_18;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, bLocal_18))
	{
		return bLocal_18;
	}
	func_54(1, iParam2);
	if (bParam1)
	{
		return bParam0;
	}
	return UNK_0x19C9F30A7697B43C(bParam0);
}

int func_56(bool bParam0)
{
	int iVar0;

	iVar0 = func_59(bParam0);
	if (iVar0 == -1)
	{
		func_57(bParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_57(bool bParam0, bool bParam1)
{
	if (!func_143(bParam0, 0, 1))
	{
		return;
	}
	if (func_59(bParam0) != -1)
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
	if (func_58(bParam0))
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

bool func_58(bool bParam0)
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

int func_59(bool bParam0)
{
	int iVar0;

	if (!func_143(bParam0, 0, 1))
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
			func_60(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_60(int iParam0)
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
	func_61(&(Global_1389078[iVar32 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_61(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_5();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (UNK_0x8CD06866876216F2())
	{
		uParam0->f_3 = UNK_0x2B6E0A53779D29EA();
	}
}

void func_62()
{
	Global_1370527.f_40.f_9 = 4;
}

bool func_63(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	func_62();
	bVar0 = false;
	return func_24(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8);
}

bool func_64(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	bVar0 = false;
	return func_65(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8);
}

bool func_65(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
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

	bVar0 = func_5();
	iVar1 = 0;
	if (bParam0 == 145)
	{
		bVar0 = iParam1;
		bVar2 = UNK_0x6E524813889AECF8(bVar0);
		iVar1 = func_56(bVar0);
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
	bVar4 = func_55(bParam5, bParam6, &iVar3);
	iVar5 = func_53(iParam7, &iVar3);
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
		bVar12 = func_75(bParam0, bParam2, iVar10, bVar4, iVar5, bVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, bParam8, bParam9);
	}
	else
	{
		bVar12 = func_67(bParam0, bParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, false))
	{
		func_27();
	}
	func_66();
	func_26();
	func_25();
	return true;
}

void func_66()
{
	Global_1370527.f_40.f_9 = 3;
}

int func_67(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_69(bParam0, bParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_68(bParam0) };
			Global_8043 = bParam0;
			UNK_0x5D96D8530B3D0904(&Global_7356, true);
			UNK_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_68(bool bParam0)
{
	return Global_1798[bParam0 /*29*/].f_3;
}

int func_69(bool bParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;

	if (iParam13 > 99)
	{
	}
	if (UNK_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_45();
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
	if (func_74() == 0)
	{
		func_72();
		return 0;
	}
	func_71(Global_21872);
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
		func_40(0);
		func_40(2);
		func_40(1);
	}
	else
	{
		func_45();
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
					func_40(0);
					Global_8062 = 0;
					break;
				case 1:
					func_40(1);
					Global_8062 = 1;
					break;
				case 2:
					func_40(2);
					Global_8062 = 2;
					break;
				case 3:
					func_40(3);
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
		func_45();
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
			if (!func_39())
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_38(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_34(1);
			func_38(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	func_70(bParam0, bParam1);
	return 1;
}

void func_70(bool bParam0, bool bParam1)
{
	if (!func_31())
	{
		return;
	}
	UNK_0x6DFDEDC7A51E8DAE(bParam0, 1654525105, UNK_0x12AB0310C2281427(bParam1), 0);
}

void func_71(int iParam0)
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

void func_72()
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
		if (!func_73(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_24 = 1;
}

bool func_73(struct<6> Param0, struct<6> Param6)
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

int func_74()
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
			if (!func_73(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
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

int func_75(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	if (func_69(bParam0, bParam1, iParam2, iParam6, bParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, bParam15, bParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			Global_7966[3 /*6*/] = { func_68(bParam0) };
			Global_8043 = bParam0;
			StringCopy(&Global_8044, sParam5, 64);
			UNK_0x5D96D8530B3D0904(&Global_7356, true);
			UNK_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

int func_76(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
	}
	if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
	{
		return 0;
	}
	func_66();
	bVar0 = true;
	if (func_65(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8))
	{
		func_23(120000);
		return 1;
	}
	return 0;
}

int func_77(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		bVar0 = func_94(uParam0, bParam1, bParam2, bParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_83(uParam0, bParam1, bParam2, bParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, 3))
		{
			func_82(1);
		}
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, 5))
		{
			func_81(1);
		}
		func_80();
		func_26();
		func_79();
		func_78();
		return 1;
	}
	return 0;
}

void func_78()
{
	Global_2546572 = 0;
}

void func_79()
{
	Global_1370527.f_57 = 1;
	Global_1370527.f_57.f_1 = 0;
}

void func_80()
{
	Global_1370527.f_40.f_9 = 1;
}

void func_81(int iParam0)
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

void func_82(int iParam0)
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

int func_83(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_93(uParam0, bParam1, bParam2, iParam5, iParam6, 0);
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
	return func_84(bParam3, iParam4, bParam7);
}

int func_84(char* sParam0, int iParam1, bool bParam2)
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
					func_92();
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
		if (func_91(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_90();
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
				func_45();
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
				if (func_89())
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
			if (func_88())
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
			func_87();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_86();
		func_85();
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
		func_92();
	}
	return 0;
}

void func_85()
{
	if (!func_31())
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

void func_86()
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

void func_87()
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

bool func_88()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_89()
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

void func_90()
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

bool func_91(bool bParam0, int iParam1)
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

void func_92()
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

void func_93(var uParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_94(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_93(uParam0, bParam1, bParam2, iParam5, iParam6, 0);
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
	return func_84(bParam3, iParam4, bParam7);
}

int func_95(var uParam0, bool bParam1, bool bParam2, bool bParam3, char* sParam4)
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
	}
	if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
	{
		return 0;
	}
	if (func_97(uParam0, bParam1, bParam2, bParam3, 9, sParam4, 0, 0, 1))
	{
		func_96();
		func_80();
		func_26();
		func_79();
		func_78();
		return 1;
	}
	return 0;
}

void func_96()
{
	Global_21823 = 0;
}

int func_97(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_93(uParam0, bParam1, bParam2, iParam6, iParam7, 0);
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
	return func_84(bParam3, iParam4, bParam8);
}

int func_98(var uParam0, bool bParam1, bool bParam2)
{
	if (func_100(uParam0, bParam1, bParam2, 12, 0, 0, 0))
	{
		func_99();
		func_26();
		func_79();
		return 1;
	}
	return 0;
}

void func_99()
{
	Global_1370527.f_40.f_9 = 2;
}

int func_100(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_93(uParam0, 145, bParam1, iParam4, iParam5, iParam6);
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
	return func_84(bParam2, iParam3, 0);
}

void func_101()
{
	Global_1370527.f_55 = Global_1370527.f_40.f_1;
	Global_1370527.f_55.f_1 = Global_1370527.f_40.f_10;
}

void func_102()
{
	Global_1370527.f_40 = 1;
}

bool func_103()
{
	return Global_1370527.f_40 == 1;
}

bool func_104(int iParam0, int iParam1, int iParam2)
{
	if (!func_105(iParam0))
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

bool func_105(int iParam0)
{
	if (!func_106())
	{
		return false;
	}
	if (!Global_1370527.f_40.f_1 == iParam0)
	{
		return false;
	}
	return true;
}

bool func_106()
{
	if (Global_1370527.f_40 == 0)
	{
		return false;
	}
	return true;
}

bool func_107(bool bParam0)
{
	if (func_111())
	{
		return false;
	}
	if (func_110())
	{
		return false;
	}
	if (func_142(0))
	{
		return false;
	}
	if (Global_1312467.f_18 != 0)
	{
		return false;
	}
	if (Global_1662006 || func_109())
	{
		return false;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bParam0, 6))
	{
		if (func_108())
		{
			return false;
		}
	}
	return true;
}

bool func_108()
{
	return UNK_0x4925CBEE5D8BE14B(UNK_0x2B6E0A53779D29EA(), Global_1387714);
}

int func_109()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_110()
{
	return Global_1370527.f_40 == 3;
}

bool func_111()
{
	return func_88();
}

bool func_112(int iParam0, int iParam1, int iParam2)
{
	if (!func_110())
	{
		return false;
	}
	return func_104(iParam0, iParam1, iParam2);
}

int func_113(char* sParam0, char* sParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return UNK_0x12AB0310C2281427(&cVar0);
}

bool func_114()
{
	return Global_2543673.f_1;
}

bool func_115()
{
	if (Global_1370715.f_2)
	{
		return true;
	}
	return func_116();
}

bool func_116()
{
	return func_111();
}

void func_117(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_118(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_119(uParam0, bParam2, 0);
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

void func_119(var uParam0, bool bParam1, bool bParam2)
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

void func_120(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var4;
	int iVar12;
	int iVar13;

	StringCopy(&Var0, func_135(iParam1), 16);
	StringCopy(&Var4, func_134(iParam2), 32);
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
	if (func_133())
	{
		func_121(iVar12, bParam0, &iVar13, bParam3, bParam3, 0);
		Global_4263954[iVar13 /*85*/].f_14.f_40 = { Var0 };
		Global_4263954[iVar13 /*85*/].f_14.f_44 = { Var4 };
	}
	else
	{
		UNK_0x70C6C7E43DEB92C4(bParam0, &Var0, &Var4, bParam3);
	}
}

void func_121(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_133())
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
				func_122(iParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
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
			func_122(iParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
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
				func_122(iParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
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
			func_122(iParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
			break;
	}
}

int func_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	bVar0 = false;
	if (!func_133())
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (!bVar0)
	{
		if (!UNK_0x79B28160739BC9E6(func_10()) || UNK_0xDD2EE1F5DA6A6AB0())
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
			*iParam0 = func_129(iVar4, iParam1, iParam4, iParam2, iParam3, bParam5, 0, iParam6, iParam7, 1, 1);
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
			func_128(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_123(-1, iParam4, iParam6, bParam5, -1);
		}
	}
	return 0;
}

void func_123(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			UNK_0x5D96D8530B3D0904(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_122.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_124(iParam0);
	}
}

void func_124(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_133())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_127(iParam0))
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
		func_125(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_125(var uParam0)
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
	func_126(&(uParam0->f_14));
	func_126(&(uParam0->f_14.f_13));
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

void func_126(var uParam0)
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

bool func_127(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return false;
}

void func_128(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_129(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_133())
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
				func_130(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_130(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	bVar36 = func_132(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!bVar36 == 0)
	{
		func_131();
		UNK_0xFB061A86A7AC749F(1, &vVar0, 36, bVar36);
	}
}

void func_131()
{
	UNK_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

bool func_132(bool bParam0)
{
	var uVar0;

	if (bParam0 != -1)
	{
		UNK_0x5D96D8530B3D0904(&uVar0, bParam0);
	}
	return uVar0;
}

bool func_133()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

char* func_134(int iParam0)
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

char* func_135(int iParam0)
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

bool func_136(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_139(iParam0) >= 0)
	{
		iVar0 = func_139(iParam0);
	}
	else
	{
		iVar0 = func_137(iParam0);
	}
	return iVar0;
}

int func_137(int iParam0)
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
			if (func_138())
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

bool func_138()
{
	return UNK_0xEAE0D21A50E6C7F4(func_8(6424, -1, 0), 19);
}

int func_139(int iParam0)
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
			if (func_138())
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

void func_140(int iParam0)
{
	func_141(&(Global_2451426.f_4308.f_197[iParam0 /*2*/]));
}

void func_141(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_142(int iParam0)
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

bool func_143(bool bParam0, bool bParam1, bool bParam2)
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

void func_144()
{
	bool bVar0;
	bool bVar1;

	if (((UNK_0xC844350D5D58C99A(bLocal_1206) && !func_149(bLocal_1206)) && !func_148(Local_152.f_4)) && UNK_0xC42A92762C58E1B9(UNK_0x1B50683925F00106(Local_152.f_4), bLocal_1206, 0))
	{
		if (!func_146(bLocal_1206, 1, 1, 0, 0, 0, 1, 0, 1))
		{
			bVar0 = false;
			while (bVar0 < 32)
			{
				bVar1 = UNK_0x117658E336116132(bVar0);
				if (func_143(bVar1, 0, 1))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x9539D44F3E4492F6(bVar1), bLocal_1206, 0))
					{
						func_145(func_132(bVar1), 0, 0f, 0, 0, 0, -1);
					}
				}
				bVar0++;
			}
		}
		else if (!bLocal_1192)
		{
			if (!UNK_0xAFE0D3608EDA7039(bLocal_1206))
			{
				UNK_0x0C8A454B494DAA0D(bLocal_1206);
			}
			else
			{
				UNK_0x71EDC33E5A423750(bLocal_1206, 2);
				bLocal_1192 = true;
			}
		}
	}
}

void func_145(bool bParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;

	Var0 = -130330100;
	Var0.f_1 = UNK_0xD803B885F5E47A62();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = UNK_0xF4CCC8CB6DE7F1AE();
	if (!bParam0 == 0)
	{
		UNK_0xFB061A86A7AC749F(1, &Var0, 9, bParam0);
	}
}

bool func_146(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar1 = UNK_0xD6DF381716822EFE(bParam0) + 1;
	if (bParam4 || !UNK_0x437347B10A200C4B(bParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			bVar2 = func_147(bParam0, (iVar0 - 1), bParam6, iParam7);
			if (UNK_0xC844350D5D58C99A(bVar2))
			{
				if (bParam3 && bVar2 == UNK_0x16F2683693E537C9())
				{
				}
				else if (bParam2)
				{
					if (UNK_0x34BFC6F0CB887BC2(bVar2))
					{
						bVar3 = UNK_0x83FACCC48B68F9D1(bVar2);
						if (((!UNK_0xEB6A8945D1AC98A1(bVar2) && bVar3 != func_5()) && func_143(bVar3, 1, 1)) || bParam8)
						{
							if (UNK_0x179932739160BA96(UNK_0x83FACCC48B68F9D1(bVar2)) == 0)
							{
								if (!bParam5)
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
				}
				else if (bParam1 == 0)
				{
					return false;
				}
				else if (!UNK_0xEB6A8945D1AC98A1(bVar2))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

bool func_147(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	bool bVar0;

	if (!UNK_0xBBA8A868118C90ED(bParam0, bParam1, iParam3))
	{
		bVar0 = UNK_0xA30B8362589C124A(bParam0, bParam1, iParam3);
	}
	if (bParam2)
	{
		if (!UNK_0xC844350D5D58C99A(bVar0) && !UNK_0x437347B10A200C4B(bParam0, 0))
		{
			bVar0 = UNK_0xB0326EA5AFB4EFA7(bParam0, bParam1);
			if (!UNK_0x437347B10A200C4B(bVar0, 0))
			{
				if (UNK_0xD1960163A3042274(bVar0, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 1 || UNK_0xD1960163A3042274(bVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bParam0, false), UNK_0x68F4C0EC296D3901(bVar0, false)) < 10f)
					{
						return bVar0;
					}
				}
			}
			bVar0 = -1;
		}
	}
	return bVar0;
}

bool func_148(int iParam0)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		return UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(iParam0));
	}
	return true;
}

bool func_149(bool bParam0)
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

bool func_150()
{
	if (func_151())
	{
		return true;
	}
	return false;
}

bool func_151()
{
	var uVar0;
	var uVar1;

	if ((Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 2 || Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 1) || Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 3)
	{
		return true;
	}
	if (!func_143(UNK_0xD803B885F5E47A62(), 1, 1) && !func_333())
	{
		return true;
	}
	if (func_157())
	{
		if (Local_152.f_23 >= 0 || Local_152.f_23 <= 3)
		{
			if (!func_333())
			{
				func_120(func_136(13), 6, 3, 1);
			}
			else
			{
				func_120(func_136(44), 6, 3, 1);
			}
		}
		return true;
	}
	if ((Local_152.f_23 >= 0 || Local_152.f_23 <= 3) && Local_152.f_23 != 4)
	{
		if (func_149(bLocal_1206))
		{
			if (UNK_0xE9F78D191AD5EDBA(Local_152.f_3))
			{
				if (UNK_0x39DDAA68EF6A6BF4(Local_152.f_3, &uVar0) == UNK_0xD803B885F5E47A62())
				{
					if (func_156())
					{
						func_155(1, 600000);
					}
					else
					{
						Global_2537071.f_5929 = UNK_0x2B6E0A53779D29EA();
					}
				}
			}
			return true;
		}
		else
		{
			if (func_148(Local_152.f_4))
			{
				if (UNK_0xE9F78D191AD5EDBA(Local_152.f_4))
				{
					if (UNK_0x39DDAA68EF6A6BF4(Local_152.f_4, &uVar1) == UNK_0xD803B885F5E47A62())
					{
						if (func_156())
						{
							func_155(1, 600000);
						}
						else
						{
							Global_2537071.f_5929 = UNK_0x2B6E0A53779D29EA();
						}
					}
				}
				return true;
			}
			else if (!UNK_0xC42A92762C58E1B9(UNK_0x1B50683925F00106(Local_152.f_4), bLocal_1206, 0))
			{
				return true;
			}
			else if (vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 >= 1)
			{
				if (!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), UNK_0x68F4C0EC296D3901(bLocal_1206, true), func_154(), func_154(), func_154(), false, true, 0))
				{
					return true;
				}
			}
			if (func_153(UNK_0xD803B885F5E47A62(), 0))
			{
				return true;
			}
			if (func_153(UNK_0xD803B885F5E47A62(), 7))
			{
				return true;
			}
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 13)
			{
				return true;
			}
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 14)
			{
				return true;
			}
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 15)
			{
				return true;
			}
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 12)
			{
				return true;
			}
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 11)
			{
				return true;
			}
			if (UNK_0x09BE1E6DF7B80B43() != iLocal_991)
			{
				return true;
			}
		}
	}
	if (Local_152.f_23 == 4)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_1206))
		{
			if (UNK_0x2720E241B5CCF780(bLocal_1206) <= 0 || !func_152(UNK_0x9539D44F3E4492F6(Local_152.f_5), bLocal_1206, 0))
			{
				UNK_0x71EDC33E5A423750(bLocal_1206, 1);
				return true;
			}
		}
		if (UNK_0xC844350D5D58C99A(bLocal_1206))
		{
			if (func_149(bLocal_1206))
			{
				UNK_0x71EDC33E5A423750(bLocal_1206, 1);
				return true;
			}
		}
		if (UNK_0xC844350D5D58C99A(bLocal_1206))
		{
			if (func_148(Local_152.f_4) && !Global_2460715.f_26)
			{
				UNK_0x71EDC33E5A423750(bLocal_1206, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_152(bool bParam0, bool bParam1, int iParam2)
{
	if (UNK_0xC844350D5D58C99A(bParam0) && !UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0xC844350D5D58C99A(bParam1) && !UNK_0x437347B10A200C4B(bParam1, 0))
		{
			if (UNK_0xC42A92762C58E1B9(bParam0, bParam1, iParam2))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_153(bool bParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_208, bParam1);
}

float func_154()
{
	float fVar0;

	fVar0 = 200f;
	if (func_333())
	{
		fVar0 = (200f + 600f);
	}
	return fVar0;
}

void func_155(bool bParam0, int iParam1)
{
	if (Global_2439138.f_3891[bParam0] < iParam1)
	{
		Global_2439138.f_3891[bParam0] = iParam1;
	}
	UNK_0x5D96D8530B3D0904(&(Global_2439138.f_3890), bParam0);
}

bool func_156()
{
	if (func_333())
	{
		return false;
	}
	return true;
}

bool func_157()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_196 != 0;
}

void func_158()
{
	int iVar0;
	var uVar1;

	if (!UNK_0xBFF81ED3B99522C7())
	{
		return;
	}
	if (Local_152.f_24 != 8 && Local_152.f_24 != 5)
	{
		if (func_148(Local_152.f_4) || func_149(bLocal_1206))
		{
			Local_152.f_24 = 8;
		}
		else if (!UNK_0xC42A92762C58E1B9(UNK_0x1B50683925F00106(Local_152.f_4), bLocal_1206, 0))
		{
			Local_152.f_24 = 8;
		}
	}
	if (Local_152.f_24 != 4)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_152.f_1, 14))
		{
			UNK_0x0674E58A79778E99(&(Local_152.f_1), 14);
		}
		if (func_267(&uLocal_1171))
		{
			func_141(&uLocal_1171);
		}
		if (func_267(&uLocal_1173))
		{
			func_141(&uLocal_1173);
		}
	}
	if (Local_152.f_24 != 7)
	{
		if (func_267(&uLocal_1175))
		{
			func_141(&uLocal_1175);
		}
	}
	if (!func_148(Local_152.f_4) && !func_149(bLocal_1206))
	{
		if (Local_152.f_24 != 8)
		{
			if ((Local_152.f_23 == 0 || Local_152.f_23 == 1) || Local_152.f_23 == 2)
			{
				if (UNK_0x688A90832774AB83(bLocal_1206) || UNK_0x688A90832774AB83(UNK_0x1B50683925F00106(Local_152.f_4)))
				{
					if ((UNK_0x7F6DC62EA9922664(bLocal_1206) <= 500 || UNK_0x7F6DC62EA9922664(UNK_0x1B50683925F00106(Local_152.f_4)) <= 150) || UNK_0x8648E4DDD67641AD(bLocal_1206, 1, 1, 1))
					{
						Local_152.f_24 = 8;
					}
				}
			}
		}
		switch (Local_152.f_24)
		{
			case 1:
				if (Local_152.f_23 == 3)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 2))
					{
						if (func_263())
						{
							if (func_156())
							{
								func_117(&uLocal_997, 3, UNK_0x1B50683925F00106(Local_152.f_4), "FM_Pilot", 0, 1);
								func_262(&uLocal_997, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
							}
							else
							{
								func_12(1);
								func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
								func_100(&uLocal_997, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
							}
							UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 2);
						}
					}
					func_260();
					Local_152.f_24 = 2;
				}
				else if (Local_152.f_23 == 6)
				{
					Local_152.f_24 = 8;
				}
				else if (func_259() == 0 && !func_258())
				{
					func_260();
					Local_152.f_24 = 4;
				}
				else if (UNK_0x2720E241B5CCF780(bLocal_1206) > 0)
				{
					func_260();
					Local_152.f_24 = 4;
				}
				else if (UNK_0xEAE0D21A50E6C7F4(Local_152.f_1, 9))
				{
					func_260();
					Local_152.f_24 = 2;
				}
				else if (UNK_0xEAE0D21A50E6C7F4(bLocal_282, 4) && func_259())
				{
					if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_1206, (func_154() / 2f), (func_154() / 2f), func_154(), 0, 1, 0))
					{
						if (func_257(bLocal_1206))
						{
							if (UNK_0x13A10C0B96EFD897(bLocal_1206))
							{
								if (func_118(&uLocal_1166, func_256(), 0))
								{
									iLocal_993 = 0;
									iLocal_994 = 0;
									iLocal_995 = 0;
									UNK_0x0674E58A79778E99(&bLocal_282, 4);
									if (!UNK_0xEAE0D21A50E6C7F4(bLocal_282, 18))
									{
										iLocal_1170 = UNK_0x2B6E0A53779D29EA();
									}
									UNK_0x5D96D8530B3D0904(&bLocal_282, 18);
								}
							}
							else if (func_267(&uLocal_1166))
							{
								func_141(&uLocal_1166);
							}
						}
					}
				}
				else if (!UNK_0xEAE0D21A50E6C7F4(bLocal_282, 4))
				{
					if (func_173(&uVar1))
					{
						func_170(Local_152.f_6);
						func_169();
					}
				}
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_282, 18) && Local_152.f_24 == 1)
				{
					iVar0 = UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), iLocal_1170));
					if (iVar0 > 60000)
					{
						Local_152 = 4;
					}
				}
				if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, false))
				{
					if (func_263())
					{
						if (UNK_0x5A91F08DF773C39D(bLocal_1206, Local_152.f_6, 20f, 20f, 20f, false, true, 0))
						{
							if (func_156())
							{
								func_117(&uLocal_997, 3, UNK_0x1B50683925F00106(Local_152.f_4), "FM_Pilot", 0, 1);
								func_262(&uLocal_997, "CT_AUD", "MPCT_HParr", 12, 0, 0, 1);
							}
							else
							{
								func_12(1);
								func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
								func_100(&uLocal_997, "EXHELAU", "EXHEL_APPR", 12, 0, 0, 1);
							}
							UNK_0x5D96D8530B3D0904(&(Local_152.f_2), false);
						}
					}
				}
				break;
			case 2:
				if (UNK_0x2720E241B5CCF780(bLocal_1206) <= 0)
				{
					Local_152.f_24 = 4;
				}
				else if (UNK_0x5A91F08DF773C39D(UNK_0x1B50683925F00106(Local_152.f_4), Local_152.f_10, 7.5f, 7.5f, 9999.9f, false, true, 0))
				{
					UNK_0xAD825C39C65C70DD();
					Local_152.f_24 = 3;
					bLocal_184 = true;
					func_141(&uLocal_1182);
					func_141(&uLocal_1180);
					UNK_0x0674E58A79778E99(&(Local_152.f_1), 14);
				}
				else if (!UNK_0xF28AD5253D9A9A6A() || func_168(0))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 4) && func_263())
					{
						if (func_156())
						{
							func_117(&uLocal_997, 3, UNK_0x1B50683925F00106(Local_152.f_4), "FM_Pilot", 0, 1);
							func_262(&uLocal_997, "CT_AUD", "MPCT_HPcha", 12, 0, 0, 1);
						}
						else
						{
							func_12(1);
							func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
							func_100(&uLocal_997, "EXHELAU", "EXHEL_CHANGE", 12, 0, 0, 1);
						}
						UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 4);
					}
					UNK_0x0674E58A79778E99(&(Local_152.f_1), 9);
					UNK_0x5D96D8530B3D0904(&(Local_152.f_1), 12);
					Local_152.f_24 = 4;
				}
				if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 6) && func_263())
				{
					if (UNK_0x5A91F08DF773C39D(UNK_0x1B50683925F00106(Local_152.f_4), Local_152.f_10, (7.5f + 75f), (7.5f + 75f), ((10f * 2f) + 75f), false, true, 0))
					{
						if (func_156())
						{
							func_117(&uLocal_997, 3, UNK_0x1B50683925F00106(Local_152.f_4), "FM_Pilot", 0, 1);
							func_262(&uLocal_997, "CT_AUD", "MPCT_HPnear", 12, 0, 0, 1);
						}
						UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 6);
					}
				}
				func_164();
				if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) <= 0)
				{
					if (func_118(&uLocal_1177, iLocal_1179, 0))
					{
						if (func_263())
						{
							if (func_156())
							{
								func_117(&uLocal_997, 3, UNK_0x1B50683925F00106(Local_152.f_4), "FM_Pilot", 0, 1);
								func_262(&uLocal_997, "CT_AUD", "MPCT_HPfly", 12, 0, 0, 1);
							}
							else
							{
								func_12(1);
								func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
								func_100(&uLocal_997, "EXHELAU", "EXHEL_CHAT", 12, 0, 0, 1);
							}
							iLocal_1179 = UNK_0x09AC81E49EA267F7(15000, 30000);
							func_141(&uLocal_1177);
						}
					}
				}
				break;
			case 5:
				if (UNK_0x2720E241B5CCF780(bLocal_1206) <= 0 || !func_152(UNK_0x9539D44F3E4492F6(Local_152.f_5), bLocal_1206, 0))
				{
					Local_152.f_24 = 8;
				}
				else
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_1, 15))
					{
						UNK_0x5D96D8530B3D0904(&(Local_152.f_1), 15);
					}
					Jump @3346; //curOff = 1695
					if (iLocal_992 != 3)
					{
						iLocal_992 = 3;
					}
					if (UNK_0x2720E241B5CCF780(bLocal_1206) <= 0 && !UNK_0xC18DDE8EA6E48FDB(bLocal_1206))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 9))
						{
							if (func_263())
							{
								if (UNK_0xC18DDE8EA6E48FDB(bLocal_1206))
								{
									if (func_156())
									{
										func_117(&uLocal_997, 3, UNK_0x1B50683925F00106(Local_152.f_4), "FM_Pilot", 0, 1);
										func_262(&uLocal_997, "CT_AUD", "MPCT_HPleav", 12, 0, 0, 1);
									}
									else
									{
										func_12(1);
										func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
										func_100(&uLocal_997, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
									}
									UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 9);
								}
							}
						}
						Local_152.f_24 = 8;
					}
					else if (!UNK_0xF28AD5253D9A9A6A() || func_168(0))
					{
						UNK_0x0674E58A79778E99(&(Local_152.f_1), 9);
						UNK_0x5D96D8530B3D0904(&(Local_152.f_1), 12);
						Local_152.f_24 = 4;
					}
					if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 8))
					{
						if (UNK_0xC18DDE8EA6E48FDB(bLocal_1206))
						{
							if (func_263())
							{
								if (func_156())
								{
									func_117(&uLocal_997, 3, UNK_0x1B50683925F00106(Local_152.f_4), "FM_Pilot", 0, 1);
									func_262(&uLocal_997, "CT_AUD", "MPCT_HPrap", 12, 0, 0, 1);
								}
								else
								{
									func_12(1);
									func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
									func_100(&uLocal_997, "EXHELAU", "EXHEL_FLIES", 12, 0, 0, 1);
								}
								UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 8);
							}
						}
					}
					Jump @3346; //curOff = 2069
					if (bLocal_184)
					{
						if (func_263())
						{
							if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 5))
							{
								if (func_156())
								{
									func_117(&uLocal_997, 3, UNK_0x1B50683925F00106(Local_152.f_4), "FM_Pilot", 0, 1);
									func_262(&uLocal_997, "CT_AUD", "MPCT_HPdrop", 12, 0, 0, 1);
								}
								else
								{
									func_12(1);
									func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
									func_100(&uLocal_997, "EXHELAU", "EXHEL_ARRIVE", 12, 0, 0, 1);
								}
								UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 5);
							}
							else if (!func_156())
							{
								if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 21))
								{
									if (UNK_0xEE9925602B29903C(bLocal_1206) > 10f)
									{
										func_12(1);
										func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
										func_100(&uLocal_997, "EXHELAU", "EXHEL_CANJUM", 12, 0, 0, 1);
									}
									UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 21);
								}
							}
						}
					}
					if (UNK_0xEAE0D21A50E6C7F4(Local_152.f_1, 12))
					{
						if (!UNK_0xC18DDE8EA6E48FDB(bLocal_1206))
						{
							if (UNK_0xF28AD5253D9A9A6A())
							{
								if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 2))
								{
									if (func_263())
									{
										if (func_156())
										{
											func_117(&uLocal_997, 3, UNK_0x1B50683925F00106(Local_152.f_4), "FM_Pilot", 0, 1);
											func_262(&uLocal_997, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
										}
										else
										{
											func_12(1);
											func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
											func_100(&uLocal_997, "EXHELAU", "EXHEL_GENPOS", 12, 0, 0, 1);
										}
										UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 2);
									}
								}
								func_260();
								if (!func_163(Local_152.f_10, Local_152.f_13, 0))
								{
									Local_152.f_13 = { Local_152.f_10 };
									Local_152.f_24 = 2;
								}
							}
							else if (UNK_0x2720E241B5CCF780(bLocal_1206) <= 0)
							{
								Local_152.f_24 = 8;
							}
						}
					}
					else if (UNK_0xEAE0D21A50E6C7F4(Local_152.f_1, 9))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 2))
						{
							if (func_263())
							{
								if (func_156())
								{
									func_117(&uLocal_997, 3, UNK_0x1B50683925F00106(Local_152.f_4), "FM_Pilot", 0, 1);
									func_262(&uLocal_997, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
								}
								else
								{
									func_12(1);
									func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
									func_100(&uLocal_997, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
								}
								UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 2);
							}
						}
						func_260();
						if (!func_163(Local_152.f_10, Local_152.f_13, 0))
						{
							Local_152.f_13 = { Local_152.f_10 };
							UNK_0x5D96D8530B3D0904(&(Local_152.f_1), 13);
							Local_152.f_24 = 2;
						}
					}
					else if (UNK_0xEAE0D21A50E6C7F4(Local_152.f_1, 13))
					{
						if (UNK_0x2720E241B5CCF780(bLocal_1206) <= 0)
						{
							Local_152.f_24 = 8;
						}
					}
					func_164();
					if (func_263())
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, true))
						{
							if (UNK_0x2720E241B5CCF780(bLocal_1206) > 0)
							{
								if (func_267(&uLocal_1173))
								{
									func_141(&uLocal_1173);
								}
								if (func_156())
								{
									func_117(&uLocal_997, 3, UNK_0x1B50683925F00106(Local_152.f_4), "FM_Pilot", 0, 1);
									func_262(&uLocal_997, "CT_AUD", "MPCT_HPnoW", 12, 0, 0, 1);
								}
								else
								{
									func_12(1);
									func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
									func_100(&uLocal_997, "EXHELAU", "EXHEL_WHERE", 12, 0, 0, 1);
								}
								UNK_0x5D96D8530B3D0904(&(Local_152.f_2), true);
							}
						}
						else if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 2))
						{
							if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 3) && !UNK_0xEAE0D21A50E6C7F4(Local_152.f_1, 12))
							{
								if (UNK_0x2720E241B5CCF780(bLocal_1206) <= 0)
								{
									if (func_156())
									{
										func_117(&uLocal_997, 3, UNK_0x1B50683925F00106(Local_152.f_4), "FM_Pilot", 0, 1);
										func_262(&uLocal_997, "CT_AUD", "MPCT_HPex", 12, 0, 0, 1);
									}
									UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 3);
								}
							}
						}
						else if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 16))
						{
							if (UNK_0x2720E241B5CCF780(bLocal_1206) <= 0)
							{
								if (func_156())
								{
									func_117(&uLocal_997, 3, UNK_0x1B50683925F00106(Local_152.f_4), "FM_Pilot", 0, 1);
									func_262(&uLocal_997, "CT_AUD", "MPCT_HPbail", 12, 0, 0, 1);
								}
								else
								{
									func_12(1);
									func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
									func_100(&uLocal_997, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
								}
								UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 16);
							}
						}
					}
					if (Local_152.f_24 == 4)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_1, 14))
						{
							if (!bLocal_184)
							{
								if (func_118(&uLocal_1171, 120000, 0))
								{
									UNK_0x5D96D8530B3D0904(&(Local_152.f_1), 14);
								}
							}
							else if (func_118(&uLocal_1180, 20000, 0))
							{
								UNK_0x5D96D8530B3D0904(&(Local_152.f_1), 14);
							}
						}
						else if (!bLocal_184)
						{
							if (func_118(&uLocal_1173, 60000, 0))
							{
								Local_152.f_24 = 7;
							}
						}
						else if (func_118(&uLocal_1182, 30000, 0))
						{
							Local_152.f_24 = 7;
						}
					}
					Jump @3346; //curOff = 3301
					if (func_118(&uLocal_1175, 4000, 0))
					{
						Local_152.f_24 = 8;
						if (func_162())
						{
							func_161();
						}
					}
					Jump @3346; //curOff = 3335
					func_160(0);
				}
				func_159();
				if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 10))
				{
					if (func_263())
					{
						if (func_143(UNK_0xD803B885F5E47A62(), 1, 1))
						{
							if (UNK_0xB87D13D0C064E9D1(bLocal_1206, UNK_0x16F2683693E537C9(), 1))
							{
								if (func_156())
								{
									func_117(&uLocal_997, 3, UNK_0x1B50683925F00106(Local_152.f_4), "FM_Pilot", 0, 1);
									func_262(&uLocal_997, "CT_AUD", "MPCT_HPdam", 12, 0, 0, 1);
								}
								else
								{
									func_12(1);
									func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
									func_100(&uLocal_997, "EXHELAU", "EXHEL_DAMAGE", 12, 0, 0, 1);
								}
								UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 10);
							}
						}
					}
				}
				if (!func_156())
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 26))
					{
						if (func_263())
						{
							if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), UNK_0x1B50683925F00106(Local_152.f_4)) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), UNK_0x1B50683925F00106(Local_152.f_4)))
							{
								func_12(1);
								func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
								func_100(&uLocal_997, "EXHELAU", "EXHEL_AIM", 12, 0, 0, 1);
								UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 26);
							}
						}
					}
					else if (!UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), UNK_0x1B50683925F00106(Local_152.f_4)) && !UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), UNK_0x1B50683925F00106(Local_152.f_4)))
					{
						UNK_0x0674E58A79778E99(&(Local_152.f_2), 26);
					}
				}
				default:
					break;
		}
	}
}

void func_159()
{
	if (!bLocal_1193)
	{
		if (Local_152.f_24 == 2)
		{
			if (UNK_0xE9F78D191AD5EDBA(Local_152.f_3))
			{
				if (UNK_0x526BC32A660C89E6(Local_152.f_3))
				{
					UNK_0x552A77B585309C2B(bLocal_1206, 1f);
					bLocal_1193 = true;
				}
				else
				{
					UNK_0x8D30F6387EE75385(Local_152.f_3);
				}
			}
		}
	}
}

void func_160(bool bParam0)
{
	bLocal_1188 = bParam0;
}

void func_161()
{
	Global_73828 = 1;
}

bool func_162()
{
	return Global_73825;
}

bool func_163(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_164()
{
	if (!func_156())
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 18))
		{
			if (func_263())
			{
				if (UNK_0x2720E241B5CCF780(bLocal_1206) > 0)
				{
					func_12(1);
					func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
					func_100(&uLocal_997, "EXHELAU", "EXHEL_GREET", 12, 0, 0, 1);
					UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 18);
				}
			}
		}
		else
		{
			if (func_263())
			{
				if (UNK_0x2720E241B5CCF780(bLocal_1206) > 0)
				{
					if (UNK_0x2720E241B5CCF780(bLocal_1206) < iLocal_996 && UNK_0xEE9925602B29903C(bLocal_1206) > 10f)
					{
						func_12(1);
						func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
						func_100(&uLocal_997, "EXHELAU", "EXHEL_JUMP", 12, 0, 0, 1);
					}
					else if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 22) && bLocal_1190)
					{
						func_12(1);
						func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
						func_100(&uLocal_997, "EXHELAU", "EXHEL_GENGRE", 12, 0, 0, 1);
						UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 22);
						UNK_0x0674E58A79778E99(&(Local_152.f_2), 23);
					}
					if (!UNK_0x2720E241B5CCF780(bLocal_1206) == iLocal_996)
					{
						iLocal_996 = UNK_0x2720E241B5CCF780(bLocal_1206);
					}
				}
				else if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 23))
				{
					if (UNK_0xEE9925602B29903C(bLocal_1206) > 10f)
					{
						func_12(1);
						func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
						func_100(&uLocal_997, "EXHELAU", "EXHEL_JUMP", 12, 0, 0, 1);
						UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 23);
						UNK_0x0674E58A79778E99(&(Local_152.f_2), 22);
					}
					else
					{
						func_12(1);
						func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
						func_100(&uLocal_997, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
						UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 23);
						UNK_0x0674E58A79778E99(&(Local_152.f_2), 22);
					}
				}
			}
			if (!bLocal_1190)
			{
				if (UNK_0x2720E241B5CCF780(bLocal_1206) == 0)
				{
					bLocal_1190 = true;
				}
			}
		}
		if (func_263())
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 20))
			{
				if (!func_149(bLocal_1206))
				{
					if (UNK_0x6AD960F219099782(bLocal_1206) == 2)
					{
						func_12(1);
						func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
						func_100(&uLocal_997, "EXHELAU", "EXHEL_LOCKS", 12, 0, 0, 1);
						UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 20);
					}
				}
			}
			else if (!func_149(bLocal_1206))
			{
				if (UNK_0x6AD960F219099782(bLocal_1206) != 2)
				{
					UNK_0x0674E58A79778E99(&(Local_152.f_2), 20);
				}
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 24))
		{
			if (func_263())
			{
				if (func_165(UNK_0x16F2683693E537C9()) >= 5)
				{
					func_12(1);
					func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
					func_100(&uLocal_997, "EXHELAU", "EXHEL_DRINKS", 12, 0, 0, 1);
					UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 24);
				}
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 25))
		{
			if (func_263())
			{
				if (!func_149(bLocal_1206))
				{
					if (!UNK_0xBBA8A868118C90ED(bLocal_1206, 2, 0) || !UNK_0xBBA8A868118C90ED(bLocal_1206, true, 0))
					{
						func_12(1);
						func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
						func_100(&uLocal_997, "EXHELAU", "EXHEL_CHAMP", 12, 0, 0, 1);
						UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 25);
					}
				}
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 19))
		{
			if (func_263())
			{
				if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
				{
					func_12(1);
					func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
					func_100(&uLocal_997, "EXHELAU", "EXHEL_FIRE", 12, 0, 0, 1);
					UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 19);
				}
			}
		}
	}
}

int func_165(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0 == 0)
	{
		return 0;
	}
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = func_167(bParam0);
	iVar1 = func_166(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1 /*5*/].f_3;
}

int func_166(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42383[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_167(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (bParam0 == Global_42383[iVar0 /*5*/].f_1)
		{
			return Global_42383[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

bool func_168(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_282, bParam0);
}

void func_169()
{
	if (!func_148(Local_152.f_4))
	{
		UNK_0xA3BF0AA5A2608191(UNK_0x1B50683925F00106(Local_152.f_4));
	}
}

void func_170(vector3 vParam0)
{
	Local_152.f_17 = { func_171(vParam0) };
}

Vector3 func_171(vector3 vParam0)
{
	vector3 vVar0;

	switch (func_172(vParam0))
	{
		case 0:
			vVar0 = { -vParam0.x, -5000f, vParam0.z };
			break;
		case 1:
			vVar0 = { -5000f, -vParam0.y, vParam0.z };
			break;
		case 2:
			vVar0 = { -vParam0.x, 8000f, vParam0.z };
			break;
		case 3:
			vVar0 = { 5000f, -vParam0.y, vParam0.z };
			break;
	}
	return vVar0;
}

int func_172(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 >= 0f && Param0 >= 0f)
	{
		return 0;
	}
	else if (Param0.f_1 < 0f && Param0 >= 0f)
	{
		return 1;
	}
	else if (Param0.f_1 < 0f && Param0 < 0f)
	{
		return 2;
	}
	else if (Param0.f_1 >= 0f && Param0 < 0f)
	{
		return 3;
	}
	return -1;
}

bool func_173(bool bParam0)
{
	var uVar0;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	vector3 vVar9;

	*bParam0 = 0;
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_282, 4) && func_143(UNK_0xD803B885F5E47A62(), 1, 1))
	{
		if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 978.076f, 92.7732f, 128.175f, 912.625f, -9.85f, 108.025f, 92.775f, 0, true, 0))
		{
			Local_152.f_6 = { 965.8965f, 42.327f, 122.1267f };
			UNK_0x5D96D8530B3D0904(&bLocal_282, 4);
			*bParam0 = 1;
		}
		else if (func_255(UNK_0xD803B885F5E47A62()) && !UNK_0xEAE0D21A50E6C7F4(bLocal_282, 18))
		{
			Local_152.f_6 = { func_249(func_251(func_252(UNK_0xD803B885F5E47A62()))) };
			UNK_0x5D96D8530B3D0904(&bLocal_282, 4);
			*bParam0 = 1;
		}
		else if (func_180(150f, &iVar4, &iVar5) && !UNK_0xEAE0D21A50E6C7F4(bLocal_282, 18))
		{
			func_179(iVar4, iVar5, &(Local_152.f_6), &(Local_152.f_9));
			*bParam0 = 1;
			UNK_0x5D96D8530B3D0904(&bLocal_282, 4);
		}
		else if ((func_333() && func_175(600f)) && !UNK_0xEAE0D21A50E6C7F4(bLocal_282, 18))
		{
			Local_152.f_6 = { vLocal_1198[0 /*3*/] };
			Local_152.f_9 = uLocal_1202[0];
			*bParam0 = 1;
			UNK_0x5D96D8530B3D0904(&bLocal_282, 4);
		}
		else if (iLocal_993 == 0)
		{
			if (iLocal_995 == 0)
			{
				Local_152.f_6 = { UNK_0x68E4ADDDDCD7BDDE(UNK_0x16F2683693E537C9(), 0f, (15f / 2f), 1.3f) };
				UNK_0xE82754C349C7B581(Local_152.f_6, &(Local_152.f_6.f_2), 0, 0);
				Local_152.f_6.f_2 = (Local_152.f_6.f_2 + 1.3f);
			}
			else if (iLocal_995 == 1)
			{
				Local_152.f_6 = { UNK_0x68E4ADDDDCD7BDDE(UNK_0x16F2683693E537C9(), (15f / 2f), 0f, 1.3f) };
				UNK_0xE82754C349C7B581(Local_152.f_6, &(Local_152.f_6.f_2), 0, 0);
				Local_152.f_6.f_2 = (Local_152.f_6.f_2 + 1.3f);
			}
			else if (iLocal_995 == 2)
			{
				Local_152.f_6 = { UNK_0x68E4ADDDDCD7BDDE(UNK_0x16F2683693E537C9(), (-15f / 2f), 0f, 1.3f) };
				UNK_0xE82754C349C7B581(Local_152.f_6, &(Local_152.f_6.f_2), 0, 0);
				Local_152.f_6.f_2 = (Local_152.f_6.f_2 + 1.3f);
			}
			else if (iLocal_995 == 3)
			{
				Local_152.f_6 = { UNK_0x68E4ADDDDCD7BDDE(UNK_0x16F2683693E537C9(), 0f, (-15f / 2f), 1.3f) };
				UNK_0xE82754C349C7B581(Local_152.f_6, &(Local_152.f_6.f_2), 0, 0);
				Local_152.f_6.f_2 = (Local_152.f_6.f_2 + 1.3f);
			}
			else if (iLocal_995 == 4)
			{
				UNK_0xDE5F9F54005367A1(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), &(Local_152.f_6), 1, 1077936128 /* Float: 3f */, 0);
				Local_152.f_6.f_2 = (Local_152.f_6.f_2 + 1.3f);
				if (!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), Local_152.f_6, 75f, 75f, 75f, false, true, 0))
				{
					Local_152 = 4;
				}
			}
			else if (iLocal_995 == 5)
			{
				UNK_0x4490D017C57827E9(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 3, &(Local_152.f_6), 1, 3f, 0f);
				Local_152.f_6.f_2 = (Local_152.f_6.f_2 + 1.3f);
				if (!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), Local_152.f_6, 75f, 75f, 75f, false, true, 0))
				{
					Local_152 = 4;
				}
			}
			else if (iLocal_995 == 6)
			{
				UNK_0x4490D017C57827E9(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 6, &(Local_152.f_6), 1, 3f, 0f);
				Local_152.f_6.f_2 = (Local_152.f_6.f_2 + 1.3f);
				if (!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), Local_152.f_6, 75f, 75f, 75f, false, true, 0))
				{
					Local_152 = 4;
				}
			}
			else if (iLocal_995 == 7)
			{
				UNK_0x4490D017C57827E9(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 10, &(Local_152.f_6), 1, 3f, 0f);
				Local_152.f_6.f_2 = (Local_152.f_6.f_2 + 1.3f);
				if (!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), Local_152.f_6, 75f, 75f, 75f, false, true, 0))
				{
					Local_152 = 4;
				}
			}
			else if (iLocal_995 == 8)
			{
				UNK_0x4490D017C57827E9(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 15, &(Local_152.f_6), 1, 3f, 0f);
				Local_152.f_6.f_2 = (Local_152.f_6.f_2 + 1.3f);
				if (!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), Local_152.f_6, 75f, 75f, 75f, false, true, 0))
				{
					Local_152 = 4;
				}
			}
			else if (iLocal_995 == 9)
			{
				UNK_0x4490D017C57827E9(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 20, &(Local_152.f_6), 1, 3f, 0f);
				Local_152.f_6.f_2 = (Local_152.f_6.f_2 + 1.3f);
			}
			else if (func_175(100f) && !UNK_0xEAE0D21A50E6C7F4(bLocal_282, 18))
			{
				Local_152.f_6 = { vLocal_1198[0 /*3*/] };
				Local_152.f_9 = uLocal_1202[0];
				*bParam0 = 1;
				UNK_0x5D96D8530B3D0904(&bLocal_282, 4);
				return true;
			}
			else
			{
				Local_152 = 4;
			}
			if (!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), Local_152.f_6, 75f, 75f, 5f, false, true, 0) || UNK_0xA267CBB20C26B1B9(Local_152.f_6 + Vector(2f, 0f, 0f), Local_152.f_6 - Vector(5f, 0f, 0f), &uVar6))
			{
				iLocal_993 = 0;
				iLocal_994 = 0;
				iLocal_995++;
				return false;
			}
			vVar9 = { Local_152.f_6 + Vector((50f / 2f), 0f, 0f) };
			iLocal_993 = UNK_0xA50E81FC2F15181B(vVar9, 15f, 15f, 50f, 0f, 0f, -1f, 2, 131, UNK_0x16F2683693E537C9(), 4);
			if (iLocal_993 == 0)
			{
				return false;
			}
		}
		else if (UNK_0x1EC301670B54C6DE(iLocal_993, &iLocal_994, &uVar0, &uVar0, &uVar3) == 2)
		{
			iLocal_993 = 0;
			if (iLocal_994 == 0 && !func_174(Local_152.f_6, 3, 0, 0))
			{
				UNK_0x5D96D8530B3D0904(&bLocal_282, 4);
			}
			else
			{
				iLocal_994 = 0;
				iLocal_995++;
			}
		}
		else if (UNK_0x1EC301670B54C6DE(iLocal_993, &iLocal_994, &uVar0, &uVar0, &uVar3) == 0)
		{
			iLocal_993 = 0;
		}
	}
	return UNK_0xEAE0D21A50E6C7F4(bLocal_282, 4);
}

bool func_174(vector3 vParam0, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0[15];
	vector3 vVar46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;

	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 140f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			vVar46[9 /*3*/].f_2 = (vVar46[9 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[10 /*3*/].f_2 = (vVar46[10 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[11 /*3*/].f_2 = (vVar46[11 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[12 /*3*/].f_2 = (vVar46[12 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[13 /*3*/].f_2 = (vVar46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (UNK_0x0399732A9EBC368E(vParam0, vVar0[iVar109 /*3*/], vVar46[iVar109 /*3*/], fVar92[iVar109], iVar110, true))
		{
			return true;
		}
		iVar109++;
	}
	return false;
}

bool func_175(float fParam0)
{
	int iVar0;

	func_176(func_178(UNK_0xD803B885F5E47A62()), &vLocal_1198, &uLocal_1202, &uLocal_1204);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (uLocal_1204[iVar0] < fParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_176(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[1];
	var uVar6[1];
	float fVar8[1];
	int iVar10;

	if (SYSTEM::VDIST(vLocal_1195, vParam0) < 20f)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		fVar8[iVar0] = 1E+07f;
		iVar0++;
	}
	iVar10 = 0;
	while (iVar10 < 299)
	{
		fVar1 = SYSTEM::VDIST(vParam0, Global_2412643[iVar10 /*3*/]);
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (fVar1 < fVar8[iVar0])
			{
				func_177(Global_2412643[iVar10 /*3*/], Global_2413541[iVar10], fVar1, iVar0, &vVar2, &uVar6, &fVar8);
				iVar0 = 2;
			}
			iVar0++;
		}
		iVar10++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (SYSTEM::VMAG(vVar2[iVar0 /*3*/]) > 0f)
		{
			*(uParam3[iVar0 /*3*/]) = { vVar2[iVar0 /*3*/] };
			(*uParam4)[iVar0] = uVar6[iVar0];
			(*uParam5)[iVar0] = fVar8[iVar0];
		}
		iVar0++;
	}
	vLocal_1195 = { vParam0 };
}

void func_177(vector3 vParam0, int iParam3, float fParam4, int iParam5, float fParam6, int iParam7, float fParam8)
{
	vector3 vVar0;
	var uVar3;
	float fVar4;

	if (iParam5 < *fParam6)
	{
		vVar0 = { *(fParam6[iParam5 /*3*/]) };
		uVar3 = (*iParam7)[iParam5];
		fVar4 = (*fParam8)[iParam5];
		*(fParam6[iParam5 /*3*/]) = { vParam0 };
		(*iParam7)[iParam5] = iParam3;
		(*fParam8)[iParam5] = fParam4;
		func_177(vVar0, uVar3, fVar4, iParam5 + 1, fParam6, iParam7, fParam8);
	}
}

Vector3 func_178(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

void func_179(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 87:
					*uParam2 = { -1691.356f, -599.7728f, 32.3863f };
					*uParam3 = 142.5853f;
					break;
				case 88:
					*uParam2 = { -1370.252f, -520.0326f, 29.6825f };
					*uParam3 = 125.7171f;
					break;
				case 89:
					*uParam2 = { -23.9063f, -566.7811f, 36.7451f };
					*uParam3 = 261.5803f;
					break;
				case 90:
					*uParam2 = { -8.8891f, -801.2603f, 43.4313f };
					*uParam3 = 337.4736f;
					break;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 62.9658f, -2526.362f, 5.0021f };
					*uParam3 = 312.1262f;
					break;
				case 2:
					*uParam2 = { -1011.097f, -1324.951f, 4.7239f };
					*uParam3 = 82.0646f;
					break;
				case 3:
					*uParam2 = { 891.2814f, -1038.218f, 38.9808f };
					*uParam3 = 179.4713f;
					break;
				case 4:
					*uParam2 = { 238.2009f, -1979.512f, 19.9838f };
					*uParam3 = 229.0376f;
					break;
				case 5:
					*uParam2 = { -445.2993f, 159.6719f, 77.0803f };
					*uParam3 = 177.4463f;
					break;
				case 6:
					*uParam2 = { -1003.048f, -2074.005f, 11.4279f };
					*uParam3 = 312.3971f;
					break;
				case 7:
					*uParam2 = { -1302.906f, -790.8793f, 16.5494f };
					*uParam3 = 218.4739f;
					break;
				case 8:
					*uParam2 = { -839.7902f, -2694.595f, 12.8121f };
					*uParam3 = 262.2745f;
					break;
				case 9:
					*uParam2 = { 242.0532f, -2957.304f, 4.8795f };
					*uParam3 = 206.7359f;
					break;
				case 10:
					*uParam2 = { 1519.096f, -2198.799f, 76.0507f };
					*uParam3 = 276.3806f;
					break;
				case 11:
					*uParam2 = { -293.2805f, -2718.856f, 5.0003f };
					*uParam3 = 314.7322f;
					break;
				case 12:
					*uParam2 = { 517.1236f, -596.8082f, 23.7995f };
					*uParam3 = 196.9468f;
					break;
				case 13:
					*uParam2 = { -488.2077f, -1801.373f, 20.2465f };
					*uParam3 = 44.8509f;
					break;
				case 14:
					*uParam2 = { -345.6657f, -1351.348f, 30.2847f };
					*uParam3 = 146.9459f;
					break;
				case 15:
					*uParam2 = { 292.9702f, 371.4247f, 104.3915f };
					*uParam3 = 75.7126f;
					break;
				case 16:
					*uParam2 = { 905.4782f, -1560.715f, 29.7175f };
					*uParam3 = 290.4099f;
					break;
				case 17:
					*uParam2 = { 711.2572f, -911.7263f, 22.7077f };
					*uParam3 = 316.5199f;
					break;
				case 18:
					*uParam2 = { 1091.211f, -2194.509f, 30.1066f };
					*uParam3 = 20.739f;
					break;
				case 19:
					*uParam2 = { 989.2725f, -2531.751f, 27.302f };
					*uParam3 = 319.7745f;
					break;
				case 20:
					*uParam2 = { -245.9971f, 108.1838f, 68.557f };
					*uParam3 = 28.2604f;
					break;
				case 21:
					*uParam2 = { 562.0646f, -1949.79f, 23.9592f };
					*uParam3 = 6.5821f;
					break;
				case 22:
					*uParam2 = { 76.4564f, -2200.17f, 0.6006f };
					*uParam3 = 183.6653f;
					break;
				default:
					break;
			}
			break;
	}
}

bool func_180(float fParam0, int iParam1, int iParam2)
{
	float fVar0;

	if (func_333())
	{
		func_181(iParam1, &fVar0, iParam2);
		if (*iParam1 > -1)
		{
			if (fVar0 < fParam0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_181(int iParam0, float fParam1, int iParam2)
{
	int iVar0[2];
	var uVar3[2];
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;

	func_244(&(iVar0[0]), &(uVar3[0]));
	func_182(&(iVar0[1]), &(uVar3[1]));
	iVar6 = -1;
	fVar7 = 999999.9f;
	iVar8 = -1;
	iVar9 = 0;
	while (iVar9 < iVar0)
	{
		if (uVar3[iVar9] < fVar7)
		{
			fVar7 = uVar3[iVar9];
			iVar6 = iVar0[iVar9];
			iVar8 = iVar9;
		}
		iVar9++;
	}
	*iParam0 = iVar6;
	*fParam1 = fVar7;
	*iParam2 = iVar8;
}

void func_182(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	int iVar9;

	iVar0 = -1;
	fVar1 = 1E+07f;
	vVar2 = { func_186(UNK_0xD803B885F5E47A62()) };
	vVar2.f_2 = 0f;
	iVar9 = 0;
	while (iVar9 < 23)
	{
		if (iVar9 > 0)
		{
			if (func_185(iVar9))
			{
				vVar5 = { func_183(iVar9) };
				vVar5.f_2 = 0f;
				fVar8 = SYSTEM::VDIST(vVar2, vVar5);
				if (fVar8 < fVar1)
				{
					fVar1 = fVar8;
					iVar0 = iVar9;
				}
			}
		}
		iVar9++;
	}
	*uParam0 = iVar0;
	*uParam1 = fVar1;
}

Vector3 func_183(int iParam0)
{
	vector3 vVar0;

	vVar0 = { 0f, 0f, 0f };
	if (!func_184(iParam0))
	{
		return vVar0;
	}
	switch (iParam0)
	{
		case 1:
			vVar0 = { 50.9205f, -2560.01f, 6f };
			break;
		case 2:
			vVar0 = { -1074.852f, -1257.452f, 5.6938f };
			break;
		case 3:
			vVar0 = { 901.936f, -1019.425f, 34.9666f };
			break;
		case 4:
			vVar0 = { 253.9006f, -1955.933f, 22.9477f };
			break;
		case 5:
			vVar0 = { -426.279f, 180.9043f, 80.6855f };
			break;
		case 6:
			vVar0 = { -1050.36f, -2023.939f, 12.1616f };
			break;
		case 7:
			vVar0 = { -1275.378f, -815.4295f, 17.1148f };
			break;
		case 8:
			vVar0 = { -883.2906f, -2730.542f, 12.8285f };
			break;
		case 9:
			vVar0 = { 269.6765f, -3016.279f, 5.7176f };
			break;
		case 10:
			vVar0 = { 1561.402f, -2138.697f, 77.5275f };
			break;
		case 11:
			vVar0 = { -303.7892f, -2698.39f, 6.0003f };
			break;
		case 12:
			vVar0 = { 507.2061f, -649.5859f, 24.7512f };
			break;
		case 13:
			vVar0 = { -525.8206f, -1775.87f, 21.3501f };
			break;
		case 14:
			vVar0 = { -291.6372f, -1352.556f, 31.3146f };
			break;
		case 15:
			vVar0 = { 348.6436f, 324.428f, 104.3185f };
			break;
		case 16:
			vVar0 = { 922.0838f, -1561.299f, 29.7475f };
			break;
		case 17:
			vVar0 = { 763.7448f, -885.2086f, 25.0869f };
			break;
		case 18:
			vVar0 = { 1043.884f, -2172.603f, 30.471f };
			break;
		case 19:
			vVar0 = { 1001.659f, -2511.88f, 28.302f };
			break;
		case 20:
			vVar0 = { -263.138f, 194.3424f, 85.184f };
			break;
		case 21:
			vVar0 = { 547.8112f, -1942.514f, 23.9851f };
			break;
		case 22:
			vVar0 = { 88.9678f, -2216.882f, 6.0613f };
			break;
	}
	return vVar0;
}

bool func_184(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

bool func_185(int iParam0)
{
	int iVar0;

	if (func_184(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_106[iVar0 /*3*/] == iParam0)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

Vector3 func_186(bool bParam0)
{
	vector3 vVar0;

	if (UNK_0xE4EDC4B0E92C078B(Global_2416079[bParam0]))
	{
		vVar0 = { func_243(Global_2416079[bParam0]) };
	}
	else if (UNK_0xE4EDC4B0E92C078B(Global_2416079.f_33[bParam0]) && !bParam0 == Global_2439138)
	{
		vVar0 = { func_243(Global_2416079.f_33[bParam0]) };
	}
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		return vVar0;
	}
	return func_187(bParam0);
}

Vector3 func_187(bool bParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	if (Global_1590535[bParam0 /*876*/].f_274.f_28 > 0)
	{
		vVar1 = { func_242(func_251(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_28)) };
		if (SYSTEM::VMAG(vVar1) > 0f)
		{
			return vVar1;
		}
	}
	else
	{
		func_240(func_178(bParam0), &iVar0);
		if (iVar0 > 0)
		{
			vVar1 = { func_242(func_251(iVar0)) };
			if (SYSTEM::VMAG(vVar1) > 0f)
			{
				return vVar1;
			}
		}
	}
	if (func_239(bParam0))
	{
		vVar1 = { func_192(bParam0) };
		if (SYSTEM::VMAG(vVar1) > 0f)
		{
			return vVar1;
		}
	}
	if (func_191(bParam0))
	{
		iVar4 = func_190(bParam0);
		if (iVar4 > -1)
		{
			vVar1 = { Global_1676377.f_488[iVar4 /*3*/] };
			if (SYSTEM::VMAG(vVar1) > 0f)
			{
				return vVar1;
			}
		}
	}
	if (func_189(bParam0))
	{
		vVar1 = { func_188(bParam0) };
		if (SYSTEM::VMAG(vVar1) > 0f)
		{
			return vVar1;
		}
	}
	if (Global_2425662[bParam0 /*421*/].f_68.f_10)
	{
		if (SYSTEM::VMAG(Global_2425662[bParam0 /*421*/].f_68.f_11) > 0f)
		{
			return Global_2425662[bParam0 /*421*/].f_68.f_11;
		}
	}
	return func_178(bParam0);
}

Vector3 func_188(bool bParam0)
{
	return Global_2425662[bParam0 /*421*/].f_68.f_7;
}

bool func_189(bool bParam0)
{
	if (Global_2425662[bParam0 /*421*/].f_68.f_6 != -1)
	{
		return true;
	}
	return false;
}

int func_190(bool bParam0)
{
	if (bParam0 != func_5())
	{
		return Global_2425662[bParam0 /*421*/].f_310.f_13;
	}
	return -1;
}

bool func_191(bool bParam0)
{
	bool bVar0;

	if (bParam0 != func_5() && (func_143(bParam0, 1, 1) || Global_2405072.f_2671))
	{
		bVar0 = UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310, true);
		return bVar0;
	}
	return false;
}

Vector3 func_192(bool bParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	int iVar13;

	if (bParam0 == func_5())
	{
	}
	if (func_238(bParam0))
	{
		bVar0 = func_237(bParam0);
		if (bVar0 != func_5())
		{
			if (!func_236(bVar0))
			{
				if (UNK_0xC844350D5D58C99A(Global_2439138.f_661[bVar0 /*3*/][1]))
				{
					return UNK_0x68F4C0EC296D3901(Global_2439138.f_661[bVar0 /*3*/][1], false);
				}
				else
				{
					return Global_2425662[func_237(bParam0) /*421*/].f_310.f_9;
				}
			}
			else
			{
				iVar1 = func_232(bVar0);
				if (!iVar1 == -1)
				{
					return Global_1676377.f_488[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_231(bParam0))
	{
		if (UNK_0xC844350D5D58C99A(Global_2537071.f_305))
		{
			return UNK_0x68F4C0EC296D3901(Global_2537071.f_305, false);
		}
	}
	else if (func_230(bParam0) && !func_229(bParam0))
	{
		bVar2 = Global_2425662[bParam0 /*421*/].f_310.f_8;
		if (bVar2 != func_5())
		{
			iVar3 = func_232(bVar2);
			if (!iVar3 == -1)
			{
				return Global_1676377.f_488[iVar3 /*3*/];
			}
		}
	}
	else if (func_228(bParam0) && !func_227(bParam0))
	{
		if (func_239(bParam0) && func_226())
		{
			return Global_1676377.f_488[Global_2425662[bParam0 /*421*/].f_310.f_5 /*3*/];
		}
		iVar4 = Global_2425662[bParam0 /*421*/].f_310.f_8;
		if (iVar4 != func_5())
		{
			if (func_225(iVar4))
			{
				iVar5 = func_221(iVar4);
				if (iVar5 != -1)
				{
					return Global_1676377.f_488[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_220(bParam0))
	{
		bVar6 = func_219(bParam0);
		if (bVar6 != func_5())
		{
			if (!func_218(bVar6))
			{
				if (UNK_0xC844350D5D58C99A(Global_2439138.f_758[bVar6]))
				{
					return UNK_0x68F4C0EC296D3901(Global_2439138.f_758[bVar6], false);
				}
				else
				{
					return Global_2425662[func_219(bParam0) /*421*/].f_310.f_16;
				}
			}
			else
			{
				iVar7 = func_221(bVar6);
				if (!iVar7 == -1)
				{
					return Global_1676377.f_488[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_217(bParam0))
	{
		if (UNK_0xC844350D5D58C99A(Global_2537071.f_307))
		{
			return UNK_0x68F4C0EC296D3901(Global_2537071.f_307, false);
		}
	}
	else if (func_216(bParam0) && !func_215(bParam0))
	{
		iVar8 = Global_2425662[bParam0 /*421*/].f_310.f_8;
		if (iVar8 != func_5())
		{
			if (func_214(iVar8))
			{
				iVar9 = func_210(iVar8);
				if (iVar9 != -1)
				{
					return func_209(iVar9);
				}
			}
		}
	}
	else if (func_208(bParam0) && !func_207(bParam0))
	{
		iVar10 = Global_2425662[bParam0 /*421*/].f_310.f_8;
		if (iVar10 != func_5())
		{
			if (func_206(iVar10))
			{
				iVar11 = func_202(iVar10);
				if (iVar11 != -1)
				{
					return Global_1676377.f_488[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_201(bParam0, 0))
	{
		bVar12 = func_200(bParam0);
		if (bVar12 != func_5())
		{
			if (!func_199(bVar12))
			{
				if (UNK_0xC844350D5D58C99A(Global_2439138.f_791[bVar12]))
				{
					return UNK_0x68F4C0EC296D3901(Global_2439138.f_791[bVar12], false);
				}
				else
				{
					return Global_1628237[func_200(bParam0) /*615*/].f_600;
				}
			}
			else
			{
				iVar13 = func_202(bVar12);
				if (!iVar13 == -1)
				{
					return Global_1676377.f_488[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_198(bParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	if (func_216(bParam0))
	{
		return func_209(Global_2425662[bParam0 /*421*/].f_310.f_5);
	}
	if (func_193(bParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1676377.f_488[Global_2425662[bParam0 /*421*/].f_310.f_5 /*3*/];
}

bool func_193(bool bParam0)
{
	if ((func_197(bParam0) || func_196(bParam0)) || func_194(bParam0))
	{
		return true;
	}
	return false;
}

bool func_194(bool bParam0)
{
	if (bParam0 != func_5())
	{
		if (func_143(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_195(Global_2425662[bParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return false;
}

int func_195(int iParam0)
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

bool func_196(bool bParam0)
{
	if (bParam0 != func_5())
	{
		if (func_143(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_195(Global_2425662[bParam0 /*421*/].f_310.f_5) == 16;
			}
		}
	}
	return false;
}

bool func_197(bool bParam0)
{
	if (bParam0 != func_5())
	{
		if (func_143(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_195(Global_2425662[bParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return false;
}

bool func_198(bool bParam0)
{
	if (bParam0 != func_5())
	{
		if (func_143(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_195(Global_2425662[bParam0 /*421*/].f_310.f_5) == 13;
			}
		}
	}
	return false;
}

bool func_199(bool bParam0)
{
	if (bParam0 != func_5())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310.f_3, 4);
	}
	return false;
}

bool func_200(bool bParam0)
{
	if (bParam0 == func_5())
	{
		return bParam0;
	}
	return Global_2425662[bParam0 /*421*/].f_310.f_8;
}

bool func_201(bool bParam0, bool bParam1)
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
	if (bParam0 != func_5())
	{
		if (func_143(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_5())
			{
				return func_195(Global_2425662[bParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return false;
}

int func_202(bool bParam0)
{
	int iVar0;

	if (bParam0 != func_5())
	{
		iVar0 = func_205(bParam0);
		if (iVar0 != 0)
		{
			return func_203(iVar0);
		}
	}
	return -1;
}

int func_203(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_195(iVar0) == 11)
		{
			if (func_204(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 1;
		case 103:
			return 2;
		case 104:
			return 3;
		case 105:
			return 4;
		case 106:
			return 5;
		case 107:
			return 6;
		case 108:
			return 7;
		case 109:
			return 8;
		case 110:
			return 9;
		case 111:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_205(bool bParam0)
{
	if (bParam0 != func_5())
	{
		return Global_1590535[bParam0 /*876*/].f_274.f_281;
	}
	return 0;
}

bool func_206(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_1590535[iParam0 /*876*/].f_274.f_281 != 0)
		{
			return true;
		}
	}
	return false;
}

bool func_207(bool bParam0)
{
	if (bParam0 != func_5())
	{
		if (func_208(bParam0) && Global_2425662[bParam0 /*421*/].f_310.f_8 == bParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_208(bool bParam0)
{
	if (bParam0 != func_5())
	{
		if (func_143(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_195(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

Vector3 func_209(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 750.5f, -1322.3f, 26.2802f;
		case 103:
			return 331.9f, -974.9f, 30f;
		case 104:
			return -146f, -1270f, 28.3088f;
		case 105:
			return -17.7f, 225.7f, 106.7566f;
		case 106:
			return 894.4f, -2106.4f, 29.4768f;
		case 107:
			return -668f, -2431.5f, 12.9444f;
		case 108:
			return 213.4f, -3166.6f, 4.7903f;
		case 109:
			return 366.6f, 237.6f, 104.9f;
		case 110:
			return -1275.3f, -666.8f, 25.6332f;
		case 111:
			return -1188.8f, -1156.9f, 4.6582f;
		default:
			break;
	}
	return Global_1676377.f_488[iParam0 /*3*/];
}

int func_210(int iParam0)
{
	int iVar0;

	if (iParam0 != func_5())
	{
		iVar0 = func_213(iParam0);
		if (iVar0 != 0)
		{
			return func_211(iVar0);
		}
	}
	return -1;
}

int func_211(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_195(iVar0) == 11)
		{
			if (func_212(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 1;
		case 103:
			return 2;
		case 104:
			return 3;
		case 105:
			return 4;
		case 106:
			return 5;
		case 107:
			return 6;
		case 108:
			return 7;
		case 109:
			return 8;
		case 110:
			return 9;
		case 111:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_213(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_322;
	}
	return 0;
}

bool func_214(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_322 != 0;
	}
	return false;
}

bool func_215(bool bParam0)
{
	if (bParam0 != func_5())
	{
		if (func_216(bParam0) && Global_2425662[bParam0 /*421*/].f_310.f_8 == bParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_216(bool bParam0)
{
	if (bParam0 != func_5())
	{
		if (func_143(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_195(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_217(bool bParam0)
{
	if (bParam0 != func_5())
	{
		if (func_143(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_195(Global_2425662[bParam0 /*421*/].f_310.f_5) == 10;
			}
		}
	}
	return false;
}

bool func_218(bool bParam0)
{
	if (bParam0 != func_5())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310.f_2, 6);
	}
	return false;
}

bool func_219(bool bParam0)
{
	if (bParam0 == func_5())
	{
		return bParam0;
	}
	return Global_2425662[bParam0 /*421*/].f_310.f_8;
}

bool func_220(bool bParam0)
{
	if (bParam0 != func_5())
	{
		if (func_143(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_5())
			{
				return func_195(Global_2425662[bParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return false;
}

int func_221(bool bParam0)
{
	int iVar0;

	if (bParam0 == func_5())
	{
		return -1;
	}
	iVar0 = func_224(bParam0);
	if (!iVar0 == 0)
	{
		return func_222(iVar0);
	}
	return -1;
}

int func_222(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_195(iVar0) == 9)
		{
			if (func_223(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 3;
		case 92:
			return 4;
		case 93:
			return 5;
		case 94:
			return 6;
		case 95:
			return 7;
		case 96:
			return 8;
		case 97:
			return 9;
	}
	return 0;
}

int func_224(bool bParam0)
{
	if (bParam0 == func_5())
	{
		return 0;
	}
	return Global_1590535[bParam0 /*876*/].f_274.f_271;
}

bool func_225(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_271 != 0;
	}
	return false;
}

bool func_226()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_2, 13) || Global_1676377.f_3015)
	{
		return true;
	}
	return false;
}

bool func_227(bool bParam0)
{
	if (bParam0 == func_5())
	{
		return false;
	}
	if (func_228(bParam0) && Global_2425662[bParam0 /*421*/].f_310.f_8 == bParam0)
	{
		return true;
	}
	return false;
}

bool func_228(bool bParam0)
{
	if (bParam0 != func_5())
	{
		if (func_143(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_195(Global_2425662[bParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return false;
}

bool func_229(bool bParam0)
{
	if (bParam0 == func_5())
	{
		return false;
	}
	if (func_230(bParam0) && Global_2425662[bParam0 /*421*/].f_310.f_8 == bParam0)
	{
		return true;
	}
	return false;
}

bool func_230(bool bParam0)
{
	if (bParam0 != func_5())
	{
		if (func_143(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_195(Global_2425662[bParam0 /*421*/].f_310.f_5) == 4;
			}
		}
	}
	return false;
}

bool func_231(bool bParam0)
{
	if (bParam0 != func_5())
	{
		if (func_143(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_195(Global_2425662[bParam0 /*421*/].f_310.f_5) == 6;
			}
		}
	}
	return false;
}

int func_232(bool bParam0)
{
	int iVar0;

	if (bParam0 == func_5())
	{
		return -1;
	}
	iVar0 = func_235(bParam0);
	if (!iVar0 == 0)
	{
		return func_233(iVar0);
	}
	return -1;
}

int func_233(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_234(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
		case 23:
			return 2;
		case 24:
			return 3;
		case 25:
			return 4;
		case 26:
			return 5;
		case 27:
			return 6;
		case 28:
			return 7;
		case 29:
			return 8;
		case 30:
			return 9;
		case 31:
			return 10;
		case 32:
			return 11;
		case 33:
			return 12;
		case 34:
			return 13;
		case 35:
			return 14;
		case 36:
			return 15;
		case 37:
			return 16;
		case 38:
			return 17;
		case 39:
			return 18;
		case 40:
			return 19;
		case 41:
			return 20;
		case 70:
			return 21;
		case 71:
			return 22;
		case 72:
			return 23;
		case 73:
			return 24;
		case 74:
			return 25;
		case 75:
			return 26;
		case 76:
			return 27;
		case 77:
			return 28;
		case 78:
			return 29;
		case 79:
			return 30;
		case 80:
			return 31;
	}
	return 0;
}

int func_235(bool bParam0)
{
	if (bParam0 == func_5())
	{
		return 0;
	}
	return Global_1590535[bParam0 /*876*/].f_274.f_183[5 /*12*/];
}

bool func_236(bool bParam0)
{
	if (bParam0 != func_5())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310, 6);
	}
	return false;
}

bool func_237(bool bParam0)
{
	if (bParam0 == func_5())
	{
		return bParam0;
	}
	return Global_2425662[bParam0 /*421*/].f_310.f_8;
}

bool func_238(bool bParam0)
{
	if (bParam0 != func_5())
	{
		if (func_143(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_5())
			{
				return func_195(Global_2425662[bParam0 /*421*/].f_310.f_5) == 5;
			}
		}
	}
	return false;
}

bool func_239(bool bParam0)
{
	if (bParam0 != func_5())
	{
		if (func_143(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && bParam0 == UNK_0xD803B885F5E47A62()) && func_143(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

void func_240(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_241(vParam0, iVar0, 0))
		{
			*iParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 34;
	iVar1 = 43;
	while (iVar0 <= iVar1)
	{
		if (func_241(vParam0, iVar0, 0))
		{
			*iParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 61;
	iVar1 = 65;
	while (iVar0 <= iVar1)
	{
		if (func_241(vParam0, iVar0, 0))
		{
			*iParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_241(vParam0, iVar0, 0))
	{
		if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_28 > 0)
		{
			*iParam3 = Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_28;
		}
		else if (Global_2404658.f_1 > 0)
		{
			*iParam3 = Global_2404658.f_1;
		}
		else
		{
			*iParam3 = iVar0;
		}
		return;
	}
	iVar0 = 17;
	if (func_241(vParam0, iVar0, 0))
	{
		if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_28 > 0)
		{
			*iParam3 = Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_28;
		}
		else if (Global_2404658.f_1 > 0)
		{
			*iParam3 = Global_2404658.f_1;
		}
		else
		{
			*iParam3 = iVar0;
		}
		return;
	}
}

bool func_241(vector3 vParam0, int iParam3, float fParam4)
{
	int iVar0;
	vector3 vVar1[3];
	vector3 vVar11[3];
	int iVar21;

	if (iParam3 != 999)
	{
		iVar21 = 0;
		while (iVar21 < 3)
		{
			if (Global_1049922[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_2 > Global_1049922[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3.f_2)
			{
				vVar1[iVar21 /*3*/] = { Global_1049922[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/] };
				vVar11[iVar21 /*3*/] = { Global_1049922[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3 };
			}
			else
			{
				vVar1[iVar21 /*3*/] = { Global_1049922[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3 };
				vVar11[iVar21 /*3*/] = { Global_1049922[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/] };
			}
			vVar1[iVar21 /*3*/].f_2 = (vVar1[iVar21 /*3*/].f_2 + fParam4);
			vVar11[iVar21 /*3*/].f_2 = (vVar11[iVar21 /*3*/].f_2 - fParam4);
			iVar21++;
		}
		if (((Global_1049922[iParam3 /*1951*/].f_146.f_57[0 /*8*/].f_6 != 0f && UNK_0x0399732A9EBC368E(vParam0, vVar11[0 /*3*/], vVar1[0 /*3*/], Global_1049922[iParam3 /*1951*/].f_146.f_57[0 /*8*/].f_6, 0, true)) || (Global_1049922[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && UNK_0x0399732A9EBC368E(vParam0, vVar11[1 /*3*/], vVar1[1 /*3*/], Global_1049922[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6, 0, true))) || (Global_1049922[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && UNK_0x0399732A9EBC368E(vParam0, vVar11[2 /*3*/], vVar1[2 /*3*/], Global_1049922[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6, 0, true)))
		{
			return true;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_241(vParam0, iVar0, fParam4))
			{
				return true;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_241(vParam0, iVar0, fParam4))
			{
				return true;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_241(vParam0, iVar0, fParam4))
			{
				return true;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_241(vParam0, iVar0, fParam4))
			{
				return true;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_241(vParam0, iVar0, fParam4))
			{
				return true;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_241(vParam0, iVar0, fParam4))
			{
				return true;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_241(vParam0, iVar0, fParam4))
			{
				return true;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_241(vParam0, iVar0, fParam4))
			{
				return true;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_241(vParam0, iVar0, fParam4))
			{
				return true;
			}
			iVar0++;
		}
		if (func_241(vParam0, 8, fParam4))
		{
			return true;
		}
		if (func_241(vParam0, 17, fParam4))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_242(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 1:
			vVar0 = { -773.4775f, 310.6321f, 84.6981f };
			break;
		case 2:
			vVar0 = { -252.5713f, -949.9199f, 30.221f };
			break;
		case 3:
			vVar0 = { -1443.094f, -544.7684f, 33.7424f };
			break;
		case 4:
			vVar0 = { -913.85f, -455.1392f, 38.5999f };
			break;
		case 5:
			vVar0 = { -47.3145f, -585.9766f, 36.9593f };
			break;
		case 6:
			vVar0 = { -932.7474f, -383.9246f, 37.9613f };
			break;
		case 7:
			vVar0 = { -619.1315f, 37.8841f, 42.5883f };
			break;
		case 8:
			vVar0 = { 284.9614f, -159.9891f, 63.6221f };
			break;
		case 9:
			vVar0 = { 2.8889f, 35.7762f, 70.5349f };
			break;
		case 10:
			vVar0 = { 9.74f, 84.6906f, 77.3975f };
			break;
		case 11:
			vVar0 = { -512.1465f, 111.2223f, 62.351f };
			break;
		case 12:
			vVar0 = { -197.3405f, 88.1053f, 68.7422f };
			break;
		case 13:
			vVar0 = { -628.3212f, 165.8364f, 60.1651f };
			break;
		case 14:
			vVar0 = { -973.3757f, -1429.425f, 6.6791f };
			break;
		case 15:
			vVar0 = { -829.1362f, -855.0104f, 18.6297f };
			break;
		case 16:
			vVar0 = { -757.5739f, -755.5591f, 25.5697f };
			break;
		case 17:
			vVar0 = { -45.1289f, -57.0925f, 62.2531f };
			break;
		case 18:
			vVar0 = { -206.7293f, 184.142f, 79.3279f };
			break;
		case 19:
			vVar0 = { -811.7045f, -984.1961f, 13.1538f };
			break;
		case 20:
			vVar0 = { -664.0032f, -853.6744f, 23.4325f };
			break;
		case 21:
			vVar0 = { -1534.025f, -324.5247f, 46.5237f };
			break;
		case 22:
			vVar0 = { -1561.381f, -412.1974f, 41.389f };
			break;
		case 23:
			vVar0 = { -1608.851f, -429.184f, 39.439f };
			break;
		case 24:
			vVar0 = { 964.3583f, -1034.199f, 39.8303f };
			break;
		case 25:
			vVar0 = { 894.2868f, -885.5679f, 26.1212f };
			break;
		case 26:
			vVar0 = { 821.1741f, -924.1658f, 25.1998f };
			break;
		case 27:
			vVar0 = { 759.7933f, -759.8209f, 25.759f };
			break;
		case 28:
			vVar0 = { 844.7289f, -1164.1f, 24.2681f };
			break;
		case 29:
			vVar0 = { 526.2521f, -1604.613f, 28.2625f };
			break;
		case 30:
			vVar0 = { 572.0462f, -1570.736f, 27.4904f };
			break;
		case 31:
			vVar0 = { 722.2852f, -1190.617f, 23.282f };
			break;
		case 32:
			vVar0 = { 497.6212f, -1494.084f, 28.2893f };
			break;
		case 33:
			vVar0 = { 480.3127f, -1549.937f, 28.2828f };
			break;
		case 34:
			vVar0 = { -68.702f, 6426.148f, 30.439f };
			break;
		case 35:
			vVar0 = { -247.4374f, 6240.294f, 30.4892f };
			break;
		case 36:
			vVar0 = { 2554.165f, 4668.059f, 33.0233f };
			break;
		case 37:
			vVar0 = { 2461.22f, 1589.255f, 32.0443f };
			break;
		case 38:
			vVar0 = { -2203.335f, 4244.427f, 47.3305f };
			break;
		case 39:
			vVar0 = { 218.0665f, 2601.817f, 44.7668f };
			break;
		case 40:
			vVar0 = { 186.1719f, 2786.343f, 45.0144f };
			break;
		case 41:
			vVar0 = { 642.0746f, 2791.729f, 40.9795f };
			break;
		case 42:
			vVar0 = { -1130.938f, 2701.133f, 17.8004f };
			break;
		case 43:
			vVar0 = { -10.944f, -1646.76f, 28.3125f };
			break;
		case 44:
			vVar0 = { 1024.263f, -2398.404f, 29.1261f };
			break;
		case 45:
			vVar0 = { 870.8577f, -2232.323f, 29.5508f };
			break;
		case 46:
			vVar0 = { -663.8541f, -2380.389f, 12.9446f };
			break;
		case 47:
			vVar0 = { -1088.616f, -2235.098f, 12.2182f };
			break;
		case 48:
			vVar0 = { -342.5126f, -1468.675f, 29.6107f };
			break;
		case 49:
			vVar0 = { -1241.54f, -259.8841f, 37.9445f };
			break;
		case 50:
			vVar0 = { 899.8448f, -147.528f, 75.5674f };
			break;
		case 51:
			vVar0 = { -1405.411f, 526.8572f, 122.8361f };
			break;
		case 52:
			vVar0 = { 1341.552f, -1578.037f, 53.4443f };
			break;
		case 53:
			vVar0 = { -105.7029f, 6528.539f, 29.1719f };
			break;
		case 54:
			vVar0 = { -302.3985f, 6327.434f, 31.8918f };
			break;
		case 55:
			vVar0 = { -15.258f, 6557.378f, 32.2454f };
			break;
		case 56:
			vVar0 = { 1899.673f, 3773.178f, 31.8829f };
			break;
		case 57:
			vVar0 = { 1662.121f, 4776.317f, 41.0075f };
			break;
		case 58:
			vVar0 = { -178.2278f, 490.886f, 134.0466f };
			break;
		case 59:
			vVar0 = { 339.5743f, 439.7083f, 145.5896f };
			break;
		case 60:
			vVar0 = { -764.6163f, 618.3144f, 137.5536f };
			break;
		case 61:
			vVar0 = { -679.5461f, 592.5162f, 139.693f };
			break;
		case 62:
			vVar0 = { 124.4571f, 551.8877f, 181.658f };
			break;
		case 63:
			vVar0 = { -563.7349f, 689.099f, 151.6596f };
			break;
		case 64:
			vVar0 = { -743.0927f, 590.0371f, 140.9221f };
			break;
		case 65:
			vVar0 = { -861.252f, 684.8923f, 146.2643f };
			break;
		case 66:
			vVar0 = { -1292.456f, 440.9454f, 93.7572f };
			break;
		case 67:
			vVar0 = { 369.5891f, 417.4813f, 136.8344f };
			break;
		case 68:
			vVar0 = { -1581.501f, -558.2578f, 33.9528f };
			break;
		case 69:
			vVar0 = { -1379.546f, -499.1783f, 32.1574f };
			break;
		case 70:
			vVar0 = { -117.5296f, -605.7157f, 35.2857f };
			break;
		case 71:
			vVar0 = { -67.0943f, -802.4415f, 43.2273f };
			break;
		case 72:
			vVar0 = { 254.1892f, -1809.183f, 26.1805f };
			break;
		case 73:
			vVar0 = { -1472.278f, -920.0677f, 8.9683f };
			break;
		case 74:
			vVar0 = { 38.9478f, -1026.629f, 28.6354f };
			break;
		case 75:
			vVar0 = { 46.903f, 2789.825f, 57.1124f };
			break;
		case 76:
			vVar0 = { -342.3246f, 6065.316f, 30.4895f };
			break;
		case 77:
			vVar0 = { 1737.878f, 3709.088f, 33.1348f };
			break;
		case 78:
			vVar0 = { 939.7161f, -1459.204f, 30.467f };
			break;
		case 79:
			vVar0 = { 189.7624f, 309.7488f, 104.4714f };
			break;
		case 80:
			vVar0 = { -21.9593f, -191.3618f, 51.5599f };
			break;
		case 81:
			vVar0 = { 2472.22f, 4110.493f, 36.9629f };
			break;
		case 82:
			vVar0 = { -39.3286f, 6420.603f, 30.7017f };
			break;
		case 83:
			vVar0 = { -1134.762f, -1568.848f, 3.4077f };
			break;
	}
	return vVar0;
}

Vector3 func_243(int iParam0)
{
	bool bVar0;

	switch (UNK_0xDC7D2B8A563DB482(iParam0))
	{
		case 1:
		case 2:
		case 3:
			bVar0 = UNK_0x63EC65B0F6B7C26F(iParam0);
			if (UNK_0xC844350D5D58C99A(bVar0))
			{
				return UNK_0x68F4C0EC296D3901(bVar0, false);
			}
			break;
	}
	return UNK_0xAC14F6E4B17D7835(iParam0);
}

void func_244(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	int iVar9;

	iVar0 = -1;
	fVar1 = 1E+07f;
	vVar2 = { func_186(UNK_0xD803B885F5E47A62()) };
	vVar2.f_2 = 0f;
	iVar9 = -1;
	iVar9 = 87;
	while (iVar9 <= 90)
	{
		if (func_245(iVar9))
		{
			vVar5 = { Global_1049922[iVar9 /*1951*/].f_3[0 /*3*/] };
			vVar5.f_2 = 0f;
			fVar8 = SYSTEM::VDIST(vVar2, vVar5);
			if (fVar8 < fVar1)
			{
				fVar1 = fVar8;
				iVar0 = iVar9;
			}
		}
		iVar9++;
	}
	*uParam0 = iVar0;
	*uParam1 = fVar1;
}

bool func_245(int iParam0)
{
	int iVar0;

	if (iParam0 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (func_246(iVar0, -1) == iParam0)
			{
				return true;
			}
			iVar0++;
		}
		if (iParam0 == func_246(99, -1))
		{
			return true;
		}
	}
	return false;
}

int func_246(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_10();
	}
	if (iParam0 == 7 && !Global_262145.f_16984)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_248(iParam0);
		if (iVar1 == 0 && func_8(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_247(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_214(UNK_0xD803B885F5E47A62()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1388066[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2586214[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 25)
		{
			return 0;
		}
		return Global_2586065[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_247(int iParam0)
{
	if (!Global_262145.f_23663)
	{
		return false;
	}
	return func_8(7207, iParam0, 0) != 0;
}

int func_248(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

Vector3 func_249(int iParam0)
{
	if (func_250(iParam0))
	{
		switch (iParam0)
		{
			case 68:
				return -1582.094f, -569.5358f, 115.3326f;
			case 69:
				return -1391.652f, -477.7002f, 90.25584f;
			case 70:
				return -144.5361f, -593.3737f, 210.7752f;
			case 71:
				return -75.06329f, -818.9553f, 325.1753f;
		}
	}
	return 0f, 0f, -1000f;
}

bool func_250(int iParam0)
{
	if (((iParam0 == 68 || iParam0 == 69) || iParam0 == 70) || iParam0 == 71)
	{
		return true;
	}
	return false;
}

int func_251(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 61:
		case 83:
		case 84:
		case 85:
			return 1;
		case 5:
		case 6:
			return 2;
		case 7:
		case 34:
		case 62:
			return 3;
		case 35:
		case 36:
		case 37:
			return 4;
		case 38:
		case 39:
		case 65:
			return 5;
		case 40:
		case 41:
		case 63:
			return 6;
		case 42:
		case 43:
		case 64:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 11;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 14;
		case 15:
			return 15;
		case 16:
			return 16;
		case 17:
			return 17;
		case 18:
			return 18;
		case 19:
			return 19;
		case 20:
			return 20;
		case 21:
			return 21;
		case 22:
			return 22;
		case 23:
			return 23;
		case 24:
			return 24;
		case 25:
			return 25;
		case 26:
			return 26;
		case 27:
			return 27;
		case 28:
			return 28;
		case 29:
			return 29;
		case 30:
			return 30;
		case 31:
			return 31;
		case 32:
			return 32;
		case 33:
			return 33;
		case 44:
			return 34;
		case 45:
			return 35;
		case 46:
			return 36;
		case 47:
			return 37;
		case 48:
			return 38;
		case 49:
			return 39;
		case 50:
			return 40;
		case 51:
			return 41;
		case 52:
			return 42;
		case 53:
			return 43;
		case 54:
			return 44;
		case 55:
			return 45;
		case 56:
			return 46;
		case 57:
			return 47;
		case 58:
			return 48;
		case 59:
			return 49;
		case 60:
			return 50;
		case 66:
			return 51;
		case 67:
			return 52;
		case 68:
			return 53;
		case 69:
			return 54;
		case 70:
			return 55;
		case 71:
			return 56;
		case 72:
			return 57;
		case 73:
			return 58;
		case 74:
			return 59;
		case 75:
			return 60;
		case 76:
			return 61;
		case 77:
			return 62;
		case 78:
			return 63;
		case 79:
			return 64;
		case 80:
			return 65;
		case 81:
			return 66;
		case 82:
			return 67;
		case 87:
		case 103:
		case 104:
		case 105:
			return 68;
		case 88:
		case 106:
		case 107:
		case 108:
			return 69;
		case 89:
		case 109:
		case 110:
		case 111:
			return 70;
		case 90:
		case 112:
		case 113:
		case 114:
			return 71;
		case 91:
			return 72;
		case 92:
			return 73;
		case 93:
			return 74;
		case 94:
			return 75;
		case 95:
			return 76;
		case 96:
			return 77;
		case 97:
			return 78;
		case 98:
			return 79;
		case 99:
			return 80;
		case 100:
			return 81;
		case 101:
			return 82;
		case 102:
			return 83;
	}
	return 0;
}

int func_252(bool bParam0)
{
	if (func_143(bParam0, 0, 1))
	{
		return func_253(func_178(bParam0));
	}
	return -1;
}

int func_253(vector3 vParam0)
{
	int iVar0;

	iVar0 = 87;
	while (iVar0 <= 90)
	{
		if (func_254(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_254(vector3 vParam0, int iParam3)
{
	switch (iParam3)
	{
		case 87:
			if (UNK_0x0399732A9EBC368E(vParam0, -1588.118f, -581.678f, 109.549f, -1556.568f, -559.578f, 127.049f, 38.1f, 0, true))
			{
				return true;
			}
			break;
		case 88:
			if (UNK_0x0399732A9EBC368E(vParam0, -1411.432f, -480.399f, 80.276f, -1348.382f, -473.199f, 98.801f, 37.65f, 0, true))
			{
				return true;
			}
			break;
		case 89:
			if (UNK_0x0399732A9EBC368E(vParam0, -183.232f, -625.231f, 164.81f, -92.457f, -555.531f, 221.735f, 117.125f, 0, true))
			{
				return true;
			}
			break;
		case 90:
			if (UNK_0x0399732A9EBC368E(vParam0, -97.577f, -810.65f, 290.012f, -51.802f, -827.175f, 331.587f, 44.15f, 0, true))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_255(bool bParam0)
{
	int iVar0;

	iVar0 = func_252(bParam0);
	if (iVar0 != -1)
	{
		return true;
	}
	return false;
}

int func_256()
{
	int iVar0;

	iVar0 = 5000;
	if (func_333())
	{
		iVar0 = 3000;
	}
	return iVar0;
}

bool func_257(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xECE0BE5313FD8BDA(bParam0))
		{
			UNK_0x0C8A454B494DAA0D(bParam0);
			return UNK_0xAFE0D3608EDA7039(bParam0);
		}
	}
	return false;
}

bool func_258()
{
	vector3 vVar0;
	float fVar3;

	if (!UNK_0x437347B10A200C4B(bLocal_1206, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bLocal_1206, true) };
		fVar3 = (vVar0.z - Local_152.f_6.f_2);
		if (fVar3 > 2f)
		{
			return true;
		}
	}
	return false;
}

bool func_259()
{
	int iVar0;

	if (bLocal_1168)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_1206))
		{
			if (!UNK_0xE934758D273C899A(bLocal_1206))
			{
				if (UNK_0xF79A7BCA9E38BBBC(bLocal_1206))
				{
					iVar0 = UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), iLocal_1169));
					if (iVar0 > 500)
					{
						return false;
					}
					return true;
				}
			}
		}
	}
	else
	{
		bLocal_1168 = true;
	}
	iLocal_1169 = UNK_0x2B6E0A53779D29EA();
	return true;
}

void func_260()
{
	float fVar0;

	if (UNK_0xF28AD5253D9A9A6A())
	{
		Local_152.f_10 = { UNK_0xDEAEB003144B10F4(UNK_0xCDB86175B3C461EB(UNK_0x817B3657F78A517A())) };
		Local_152.f_10.f_2 = UNK_0x877D3FF6F9D1F987((Local_152.f_10 - 25f), (Local_152.f_10.f_1 - 25f), (Local_152.f_10 + 25f), (Local_152.f_10.f_1 + 25f));
		fVar0 = UNK_0x1BEC198A85CA749A((Local_152.f_10 - 25f), (Local_152.f_10.f_1 - 25f), (Local_152.f_10 + 25f), (Local_152.f_10.f_1 + 25f));
		if ((Local_152.f_10.f_2 - fVar0) < 20f)
		{
			Local_152.f_10.f_2 = (Local_152.f_10.f_2 + 10f);
		}
		else if ((Local_152.f_10.f_2 - fVar0) > 30f && (Local_152.f_10.f_2 - fVar0) < 70f)
		{
			Local_152.f_10.f_2 = (Local_152.f_10.f_2 + 40f);
		}
		func_261(0);
		func_170(Local_152.f_10);
	}
}

void func_261(bool bParam0)
{
	UNK_0x0674E58A79778E99(&(Global_2537071.f_282), bParam0);
}

int func_262(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_93(uParam0, 145, bParam1, iParam4, iParam5, iParam6);
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
	return func_84(bParam2, iParam3, 0);
}

bool func_263()
{
	vector3 vVar0;

	if (!func_266())
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x1B50683925F00106(Local_152.f_4)))
		{
			if (!UNK_0x437347B10A200C4B(UNK_0x1B50683925F00106(Local_152.f_4), 0))
			{
				vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x1B50683925F00106(Local_152.f_4), false) };
				if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vVar0, 50f, 50f, 150f, false, true, 0) && !func_264(UNK_0xD803B885F5E47A62()))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_264(int iParam0)
{
	if (func_265(Global_1590535[iParam0 /*876*/].f_274.f_28))
	{
		return true;
	}
	return false;
}

bool func_265(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
	}
	return false;
}

bool func_266()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

bool func_267(var uParam0)
{
	return uParam0->f_1;
}

void func_268()
{
	switch (Local_152.f_23)
	{
		case 0:
			if (UNK_0xEAE0D21A50E6C7F4(Local_152.f_1, 8) || (!func_149(bLocal_1206) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_1206, 0)))
			{
				func_271();
				Local_152.f_23 = 1;
			}
			break;
		case 1:
			if (!func_149(bLocal_1206))
			{
				if (UNK_0x2720E241B5CCF780(bLocal_1206) > 0)
				{
					Local_152.f_23 = 2;
				}
			}
			break;
		case 2:
			if (UNK_0xEAE0D21A50E6C7F4(Local_152.f_1, 12))
			{
				if (UNK_0xF28AD5253D9A9A6A())
				{
					Local_152.f_23 = 3;
					func_119(&uLocal_1186, 0, 0);
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_152.f_1, 9))
			{
				Local_152.f_23 = 3;
				func_119(&uLocal_1186, 0, 0);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_152.f_1, 10))
			{
				Local_152.f_23 = 5;
			}
			break;
		case 3:
			if (!func_149(bLocal_1206))
			{
				if (UNK_0x2720E241B5CCF780(bLocal_1206) <= 0)
				{
					Local_152.f_23 = 1;
				}
				else if (UNK_0xEAE0D21A50E6C7F4(Local_152.f_1, 10))
				{
					Local_152.f_23 = 5;
				}
				else if (!UNK_0xF28AD5253D9A9A6A() || func_168(0))
				{
					Local_152.f_10 = { 0f, 0f, 0f };
					UNK_0x0674E58A79778E99(&(Local_152.f_1), 10);
					UNK_0x0674E58A79778E99(&(Local_152.f_1), 9);
					Local_152.f_23 = 2;
				}
			}
			break;
		case 4:
			if (Global_2460715.f_26)
			{
				if (func_269())
				{
					func_494(0);
				}
			}
			break;
		case 5:
			if (!func_149(bLocal_1206))
			{
				if (UNK_0x2720E241B5CCF780(bLocal_1206) <= 0 && !UNK_0xC18DDE8EA6E48FDB(bLocal_1206))
				{
					if (func_143(Local_152.f_5, 1, 1) && !UNK_0xE934758D273C899A(UNK_0x9539D44F3E4492F6(Local_152.f_5)))
					{
						if (UNK_0xD1960163A3042274(UNK_0x9539D44F3E4492F6(Local_152.f_5), -275944640) != 1 && UNK_0xD1960163A3042274(UNK_0x9539D44F3E4492F6(Local_152.f_5), -275944640) != 0)
						{
							Local_152.f_23 = 6;
						}
					}
				}
				else if (!UNK_0xF28AD5253D9A9A6A() || func_168(0))
				{
					Local_152.f_10 = { 0f, 0f, 0f };
					UNK_0x0674E58A79778E99(&(Local_152.f_1), 10);
					UNK_0x0674E58A79778E99(&(Local_152.f_1), 9);
					Local_152.f_23 = 2;
				}
			}
			break;
		case 6:
			break;
	}
}

bool func_269()
{
	int iVar0;

	if (!UNK_0xBFF81ED3B99522C7())
	{
		return true;
	}
	if (UNK_0xE9F78D191AD5EDBA(Local_152.f_4))
	{
		if (!UNK_0x526BC32A660C89E6(Local_152.f_4))
		{
			UNK_0x8D30F6387EE75385(Local_152.f_4);
		}
		else
		{
			func_270(&(Local_152.f_4));
			iVar0 = 1;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_270(var uParam0)
{
	bool bVar0;

	if (UNK_0xE9F78D191AD5EDBA(*uParam0))
	{
		if (!UNK_0x526BC32A660C89E6(*uParam0))
		{
		}
	}
	if (UNK_0xE5DBF9B6126856CA(*uParam0))
	{
		bVar0 = UNK_0xA5FBBC2F619A4DE2(*uParam0);
		UNK_0x2ABAFAE29D459CE5(&bVar0);
	}
}

void func_271()
{
	bool bVar0;

	if (UNK_0xBFF81ED3B99522C7() && !UNK_0xFEBC1E4EC9E001F0())
	{
		bVar0 = func_8(1190, -1, 0);
		if (!UNK_0xEAE0D21A50E6C7F4(bVar0, 16))
		{
			if (!func_149(bLocal_1206) && !func_148(Local_152.f_4))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x1B50683925F00106(Local_152.f_4), bLocal_1206, 0) && !UNK_0x36646919F20EAFFC(UNK_0x1B50683925F00106(Local_152.f_4)))
				{
					UNK_0xB6A2CAEFEE28197D("HTX_HELPN");
					if (func_273())
					{
						UNK_0x3A820E495A7BA3E5(13);
						UNK_0x6B012227B3921E18("GB_HELI_BLIP");
					}
					else
					{
						UNK_0x3A820E495A7BA3E5(bLocal_284);
						UNK_0x6B012227B3921E18("HTX_HELPB");
					}
					UNK_0xBAB71DDCAEBC7FDD(0, 0, true, -1);
					UNK_0x5D96D8530B3D0904(&bVar0, 16);
					func_272(1190, bVar0, -1, 1, 0);
				}
			}
		}
	}
}

void func_272(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_9(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

bool func_273()
{
	if (bLocal_1206 == Global_2537071.f_301 || bLocal_1206 == Global_2537071.f_5913)
	{
		return true;
	}
	return false;
}

void func_274()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	UNK_0x0674E58A79778E99(&(Local_152.f_1), 9);
	bVar0 = false;
	while (bVar0 < UNK_0x54EABC0DD106045B())
	{
		if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bVar0)))
		{
			bVar1 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(bVar0));
			if (func_143(bVar1, 1, 1))
			{
				if (!func_149(bLocal_1206))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_1, 8))
					{
						if (UNK_0x5A91F08DF773C39D(bLocal_1206, Local_152.f_6, (7.5f * 1.5f), (7.5f * 1.5f), (7.5f * 1.5f), false, true, 0) && !func_259())
						{
							UNK_0x5D96D8530B3D0904(&(Local_152.f_1), 8);
						}
					}
					if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_1, 10))
					{
						if (UNK_0x5A91F08DF773C39D(bLocal_1206, Local_152.f_10, (7.5f * 1.5f), (7.5f * 1.5f), (10f * 2f), false, true, 0))
						{
							UNK_0x5D96D8530B3D0904(&(Local_152.f_1), 10);
						}
					}
					if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_1, 9))
					{
						if (UNK_0xEAE0D21A50E6C7F4(vLocal_185[bVar0 /*3*/].f_1, 6))
						{
							UNK_0x5D96D8530B3D0904(&(Local_152.f_1), 9);
							UNK_0x0674E58A79778E99(&(vLocal_185[bVar0 /*3*/].f_1), 6);
						}
					}
					if (Local_152.f_24 != 4)
					{
						if (UNK_0xEAE0D21A50E6C7F4(vLocal_185[bVar0 /*3*/].f_1, 5))
						{
							Local_152.f_24 = 4;
							Local_152.f_13 = { 100000f, 100000f, 100000f };
							UNK_0x0674E58A79778E99(&(vLocal_185[bVar0 /*3*/].f_1), 5);
						}
					}
					if (Local_152.f_24 != 5)
					{
						if (UNK_0xEAE0D21A50E6C7F4(vLocal_185[bVar0 /*3*/].f_1, 8))
						{
							if (func_293(bVar1) && func_279(bVar1))
							{
								if (iLocal_124 == -1)
								{
									iVar2 = func_251(Global_1590535[bVar1 /*876*/].f_274[5]);
									Local_152.f_29 = { func_249(iVar2) + Vector(15f, 0f, 0f) };
								}
								else
								{
									iVar3 = iLocal_124;
									func_276(func_277(iVar3), &(Local_152.f_29));
									Local_152.f_29 = { Local_152.f_29 + Vector(40f, 0f, 0f) };
								}
								Local_152.f_24 = 5;
								Local_152.f_23 = 4;
								Local_152.f_28 = bVar1;
								func_170(Local_152.f_29);
							}
							else if (!UNK_0x437347B10A200C4B(bLocal_1206, 0) && !UNK_0xAFE0D3608EDA7039(bLocal_1206))
							{
								UNK_0x0C8A454B494DAA0D(bLocal_1206);
							}
							else
							{
								func_275();
								Local_152.f_23 = 2;
								Local_152.f_24 = 1;
								func_169();
								UNK_0x0674E58A79778E99(&(Local_152.f_1), 9);
								UNK_0x0674E58A79778E99(&(Local_152.f_1), 10);
								UNK_0x0674E58A79778E99(&(Local_152.f_1), 12);
								if (UNK_0xF28AD5253D9A9A6A())
								{
									UNK_0xAD825C39C65C70DD();
								}
							}
						}
					}
				}
			}
		}
		bVar0++;
	}
}

void func_275()
{
	bool bVar0;

	bVar0 = bLocal_1206;
	if (UNK_0x437347B10A200C4B(bVar0, 0))
	{
		return;
	}
	if (UNK_0xAFE0D3608EDA7039(bVar0))
	{
		UNK_0x71EDC33E5A423750(bVar0, 1);
	}
}

void func_276(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 54.191f, -2569.248f, 5.0046f };
			break;
		case 1:
			*uParam1 = { -1083.054f, -1261.893f, 4.534f };
			break;
		case 2:
			*uParam1 = { 896.3665f, -1035.749f, 34.1096f };
			break;
		case 3:
			*uParam1 = { 247.473f, -1956.943f, 22.1908f };
			break;
		case 4:
			*uParam1 = { -424.828f, 185.825f, 79.775f };
			break;
		case 5:
			*uParam1 = { -1042.482f, -2023.516f, 12.1616f };
			break;
		case 6:
			*uParam1 = { -1268.119f, -812.2741f, 16.1075f };
			break;
		case 7:
			*uParam1 = { -873.65f, -2735.948f, 12.9438f };
			break;
		case 8:
			*uParam1 = { 274.5224f, -3015.413f, 4.6993f };
			break;
		case 9:
			*uParam1 = { 1569.69f, -2129.792f, 77.3351f };
			break;
		case 10:
			*uParam1 = { -315.551f, -2698.654f, 6.5495f };
			break;
		case 11:
			*uParam1 = { 499.81f, -651.982f, 23.909f };
			break;
		case 12:
			*uParam1 = { -528.5296f, -1784.573f, 20.5853f };
			break;
		case 13:
			*uParam1 = { -295.8596f, -1353.238f, 30.3138f };
			break;
		case 14:
			*uParam1 = { 349.839f, 328.889f, 103.272f };
			break;
		case 15:
			*uParam1 = { 926.2818f, -1560.311f, 29.7404f };
			break;
		case 16:
			*uParam1 = { 759.566f, -909.466f, 24.244f };
			break;
		case 17:
			*uParam1 = { 1037.813f, -2173.062f, 30.5334f };
			break;
		case 18:
			*uParam1 = { 1019.116f, -2511.69f, 27.302f };
			break;
		case 19:
			*uParam1 = { -245.3405f, 203.3286f, 82.818f };
			break;
		case 20:
			*uParam1 = { 539.346f, -1945.682f, 23.984f };
			break;
		case 21:
			*uParam1 = { 96.1538f, -2216.4f, 5.1712f };
			break;
	}
}

int func_277(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_278(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 4;
		case 4:
			return 5;
		case 5:
			return 6;
		case 6:
			return 7;
		case 7:
			return 8;
		case 8:
			return 9;
		case 9:
			return 10;
		case 10:
			return 11;
		case 11:
			return 12;
		case 12:
			return 13;
		case 13:
			return 14;
		case 14:
			return 15;
		case 15:
			return 16;
		case 16:
			return 17;
		case 17:
			return 18;
		case 18:
			return 19;
		case 19:
			return 20;
		case 20:
			return 21;
		case 21:
			return 22;
	}
	return 0;
}

bool func_279(bool bParam0)
{
	if ((!func_287(bParam0, 1) && !func_284(bParam0)) && func_280(bParam0))
	{
		return true;
	}
	return false;
}

bool func_280(bool bParam0)
{
	if (bParam0 != func_5())
	{
		if (func_143(bParam0, 1, 1))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_536, 6))
			{
				return false;
			}
			if (func_284(bParam0) && !func_281(bParam0))
			{
				return false;
			}
			if (func_153(bParam0, 21))
			{
				return false;
			}
			if (func_153(bParam0, 25))
			{
				return false;
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, 4))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_281(bool bParam0)
{
	if (((func_282(bParam0) == 167 || func_282(bParam0) == 168) || func_282(bParam0) == 190) || func_282(bParam0) == 178)
	{
		return true;
	}
	return false;
}

int func_282(bool bParam0)
{
	if (func_283(bParam0, 0))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_283(bool bParam0, bool bParam1)
{
	if (Global_1628237[bParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[bParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

bool func_284(bool bParam0)
{
	if (func_286(bParam0))
	{
		return true;
	}
	if (func_285(bParam0))
	{
		return true;
	}
	return false;
}

bool func_285(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return func_33(bParam0, 9);
	}
	return false;
}

bool func_286(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bVar0 /*615*/].f_1, false);
	}
	return false;
}

int func_287(bool bParam0, bool bParam1)
{
	if (func_292() != 0)
	{
		return func_291(bParam0) != 0;
	}
	return func_288(bParam0, bParam1, 0);
}

int func_288(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_289(bParam0))
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

bool func_289(bool bParam0)
{
	return func_290(bParam0);
}

bool func_290(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_13.f_1, false);
}

int func_291(bool bParam0)
{
	if (func_143(bParam0, 0, 1))
	{
		return Global_2425662[bParam0 /*421*/].f_1;
	}
	return 0;
}

int func_292()
{
	return Global_30768;
}

bool func_293(bool bParam0)
{
	if (bParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, 26);
}

bool func_294()
{
	bool bVar0;

	if (func_118(&uLocal_1162, 5000, 0))
	{
		if (UNK_0x2358623ECCDB11B3(true, 1, 0, 0))
		{
			if (func_320(func_321()) && func_320(func_319()))
			{
				if (func_173(&bVar0))
				{
					if (func_297(bVar0) && func_295())
					{
						func_261(0);
						func_170(Local_152.f_6);
						Local_152.f_13 = { 100000f, 100000f, 100000f };
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_295()
{
	if ((!UNK_0xE9F78D191AD5EDBA(Local_152.f_4) && func_320(func_319())) && UNK_0xE9F78D191AD5EDBA(Local_152.f_3))
	{
		if (!func_149(bLocal_1206))
		{
			if (func_296(&(Local_152.f_4), Local_152.f_3, 22, func_319(), -1, 1, 1, 1))
			{
				UNK_0x11AD11297DC58CC7(UNK_0x1B50683925F00106(Local_152.f_4), true);
				UNK_0xC743BD39A24D0583(UNK_0x1B50683925F00106(Local_152.f_4), 0);
				UNK_0xFADC0A217229F6B5(UNK_0x1B50683925F00106(Local_152.f_4), true);
				UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_152.f_4), 17, true);
				UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_152.f_4), 5, false);
				UNK_0xBAFED2F6486F771A(UNK_0x1B50683925F00106(Local_152.f_4), 2, true);
				UNK_0xBAFED2F6486F771A(UNK_0x1B50683925F00106(Local_152.f_4), 1024, true);
				UNK_0xBAFED2F6486F771A(UNK_0x1B50683925F00106(Local_152.f_4), 2048, true);
				UNK_0xBAFED2F6486F771A(UNK_0x1B50683925F00106(Local_152.f_4), 32768, false);
				UNK_0x4E885A246A9D983A(UNK_0x1B50683925F00106(Local_152.f_4), 251, true);
				UNK_0x5507FCD92D15E617(UNK_0x1B50683925F00106(Local_152.f_4), 0);
				UNK_0xD458AC1C1D29C3B4(UNK_0x1B50683925F00106(Local_152.f_4), SYSTEM::ROUND((200f * Global_262145.f_154)), false);
				if (func_156())
				{
					func_117(&uLocal_997, 3, UNK_0x1B50683925F00106(Local_152.f_4), "FM_Pilot", 0, 1);
				}
				else
				{
					func_12(1);
					func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
				}
			}
		}
	}
	if (!UNK_0xE9F78D191AD5EDBA(Local_152.f_4))
	{
		return 0;
	}
	UNK_0x71199B01895C6202(func_319());
	return 1;
}

bool func_296(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
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

int func_297(bool bParam0)
{
	vector3 vVar0;
	var uVar3;

	if (!UNK_0xE9F78D191AD5EDBA(Local_152.f_3))
	{
		if (func_320(func_321()))
		{
			func_316(&vVar0, &uVar3, bParam0);
			if (func_303(vVar0, 6f, 1f, 1f, 10f, 1, 1, 1, 1123024896 /* Float: 120f */, 0, -1, 1, 0, 0, 0, 0, 0) || bParam0)
			{
				if (Local_152.f_9 > -1f)
				{
					uVar3 = Local_152.f_9;
				}
				if (func_300(&(Local_152.f_3), func_321(), vVar0, uVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					bLocal_1206 = UNK_0xB177666FAB6F4417(Local_152.f_3);
					UNK_0x56FDC9ADE35F7DB0(bLocal_1206, true, true, 0);
					if (!bParam0)
					{
						UNK_0x1AEF7184B203A58D(bLocal_1206, 30f);
					}
					UNK_0x873BCADC75FF6D20(bLocal_1206);
					UNK_0xB422445CBCD0AEFB(bLocal_1206, 0);
					UNK_0xDC2C59BD0989562B(bLocal_1206, 1);
					UNK_0x552A77B585309C2B(bLocal_1206, 0f);
					if (UNK_0xF1D385D359D58F72("HeliTaxi", 2))
					{
						UNK_0xA1093ABB024EC9BD(bLocal_1206, "HeliTaxi", 1);
					}
					func_160(1);
					func_298();
					if (func_333())
					{
					}
				}
			}
		}
	}
	if (!UNK_0xE9F78D191AD5EDBA(Local_152.f_3))
	{
		return 0;
	}
	UNK_0x71199B01895C6202(func_321());
	return 1;
}

void func_298()
{
	func_299(Global_2537071.f_842, bLocal_1206);
}

void func_299(int iParam0, bool bParam1)
{
	if (UNK_0x579935D850368851(bParam1) > 0)
	{
		UNK_0x446EA2500F021666(bParam1, false);
		if (iParam0 == 0)
		{
		}
	}
}

bool func_300(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
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
			func_301(vParam2, bParam5, bParam1, bVar1);
			return true;
		}
	}
	return false;
}

void func_301(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (func_302(UNK_0xD803B885F5E47A62(), vParam0, bParam4) > -1)
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

int func_302(int iParam0, vector3 vParam1, bool bParam4)
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

bool func_303(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, float fParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)
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
		if (func_311(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return false;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_304(vParam0, fParam6, iParam7, bParam9, bParam10, bParam11, bParam12, bParam16, bParam17))
			{
				return false;
			}
		}
	}
	Global_2405072.f_2++;
	return true;
}

bool func_304(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (bParam4 && !bParam7)
	{
		if (func_143(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			if (!UNK_0x757EF87A33649210())
			{
				bVar2 = bParam6;
				if (bParam9 > 0f)
				{
					bVar2 = bParam9;
				}
				if (UNK_0x0EB28750412C3A5A(func_308(UNK_0xD803B885F5E47A62()), vParam0, 1) <= (bVar2 + bParam3))
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
		if (func_143(bVar1, 1, 1))
		{
			if (!func_306(bVar1, 0) && UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
			{
				if (bParam4 == 1 || (bParam4 == 0 && bVar1 != UNK_0xD803B885F5E47A62()))
				{
					if ((func_305(bVar1) || !bParam10) && !Global_2425662[bVar1 /*421*/].f_259)
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
								if (UNK_0x0EB28750412C3A5A(func_308(bVar1), vParam0, 1) <= (bVar2 + bParam3))
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
							if (UNK_0x0EB28750412C3A5A(func_308(bVar1), vParam0, 1) <= (bVar2 + bParam3))
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

bool func_305(bool bParam0)
{
	if (UNK_0x62FA787159F264AC(UNK_0x9539D44F3E4492F6(bParam0)) || Global_2425662[bParam0 /*421*/].f_245)
	{
		return true;
	}
	return false;
}

bool func_306(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_307(-1, 0) == 8;
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

int func_307(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_10();
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

Vector3 func_308(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if ((func_310() && Global_1590535[bVar0 /*876*/].f_847) && !func_309(Global_1590535[bVar0 /*876*/].f_848))
	{
		return Global_1590535[bVar0 /*876*/].f_848;
	}
	return func_178(bParam0);
}

bool func_309(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

var func_310()
{
	return Global_2450632.f_17;
}

bool func_311(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((bParam8 == 1 && UNK_0xD803B885F5E47A62() != bVar1) || bParam8 == 0)
		{
			if (func_143(bVar1, bParam4, bParam5))
			{
				if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
				{
					if (!bParam7 || (!UNK_0xEB6A8945D1AC98A1(UNK_0x9539D44F3E4492F6(bVar1)) && func_305(bVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) != UNK_0x08067D4957B73C02(bVar1))) || UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1)
						{
							if (((UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1 && bParam9) && bParam6) && func_312(bVar1))
							{
							}
							else if (UNK_0xC844350D5D58C99A(UNK_0x9539D44F3E4492F6(bVar1)))
							{
								if (UNK_0x0EB28750412C3A5A(func_178(bVar1), vParam0, 1) < fParam3)
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

bool func_312(bool bParam0)
{
	if (func_315(UNK_0xD803B885F5E47A62(), bParam0))
	{
		return true;
	}
	Global_2513218 = { func_314(bParam0) };
	if (UNK_0x04A104F429E6CBB0(&Global_2513218))
	{
		return true;
	}
	if (func_313(UNK_0xD803B885F5E47A62(), bParam0))
	{
		return true;
	}
	return false;
}

bool func_313(int iParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = func_6(iParam0);
	if (!bVar0 == func_5())
	{
		if (bVar0 == func_6(bParam1))
		{
			return true;
		}
	}
	return false;
}

struct<13> func_314(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

bool func_315(bool bParam0, bool bParam1)
{
	if (UNK_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_314(bParam0) };
		Global_2513231 = { func_314(bParam1) };
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

void func_316(var uParam0, var uParam1, bool bParam2)
{
	float fVar0;
	float fVar1;

	if (bParam2)
	{
		*uParam0 = { Local_152.f_6 };
		*uParam1 = Local_152.f_9;
		fVar0 = UNK_0x877D3FF6F9D1F987(*uParam0, uParam0->f_1, *uParam0, uParam0->f_1);
		if (fVar0 < (Local_152.f_6.f_2 + 100f))
		{
			fVar0 = (Local_152.f_6.f_2 + 100f);
		}
		uParam0->f_2 = fVar0;
	}
	else
	{
		*uParam0 = { func_317(Local_152.f_6, 140f, 180f, (200f / 2f)) };
		*uParam1 = UNK_0xE7D606C557C86100((Local_152.f_6 - *uParam0), (Local_152.f_6.f_1 - uParam0->f_1));
		fVar1 = UNK_0x877D3FF6F9D1F987((*uParam0 - 180f), (uParam0->f_1 - 180f), (*uParam0 + 180f), (uParam0->f_1 + 180f));
		if (fVar1 < (Local_152.f_6.f_2 + 100f))
		{
			fVar1 = (Local_152.f_6.f_2 + 100f);
		}
		uParam0->f_2 = fVar1;
	}
}

Vector3 func_317(vector3 vParam0, float fParam3, float fParam4, float fParam5)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { UNK_0x79833B02DBD2A244(-1f, 1f), UNK_0x79833B02DBD2A244(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	vVar0 = { func_318(vVar0, UNK_0x79833B02DBD2A244(fParam3, fParam4)) };
	vVar0.f_2 = UNK_0x79833B02DBD2A244(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_318(vector3 vParam0, float fParam3)
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

bool func_319()
{
	if (func_333())
	{
		return joaat("MP_F_HELISTAFF_01");
	}
	return joaat("S_M_Y_PILOT_01");
}

bool func_320(bool bParam0)
{
	if (bParam0 == 0)
	{
		return true;
	}
	UNK_0x523BCC9DC80CD82F(bParam0);
	return UNK_0xB87F6CF6E5628C67(bParam0);
}

bool func_321()
{
	if (func_333())
	{
		return joaat("SUPERVOLITO");
	}
	return joaat("MAVERICK");
}

void func_322()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_283))
	{
		if (func_325(bLocal_1206, iLocal_283, 1))
		{
			UNK_0xDC5B2F9D0CCE3A10(iLocal_283, "HTX_BLIP");
			bLocal_284 = true;
			func_323(&iLocal_283, bLocal_284);
		}
	}
}

void func_323(int iParam0, bool bParam1)
{
	bool bVar0;

	if (UNK_0xE4EDC4B0E92C078B(*iParam0))
	{
		bVar0 = func_324(bParam1);
		UNK_0x61755AC17D8F538E(*iParam0, bVar0);
	}
}

int func_324(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (bParam0)
	{
		case 1:
			return 4;
		case 0:
			return 4;
		case 6:
			return 59;
		case 18:
			return 2;
		case 13:
			return 5;
		case 116:
			return 38;
		case 28:
			return 6;
		case 29:
			return 7;
		case 30:
			return 8;
		case 31:
			return 9;
		case 32:
			return 10;
		case 33:
			return 11;
		case 34:
			return 12;
		case 35:
			return 13;
		case 36:
			return 14;
		case 37:
			return 15;
		case 38:
			return 16;
		case 39:
			return 17;
		case 40:
			return 18;
		case 41:
			return 19;
		case 42:
			return 20;
		case 43:
			return 21;
		case 44:
			return 22;
		case 45:
			return 23;
		case 46:
			return 24;
		case 47:
			return 25;
		case 48:
			return 26;
		case 49:
			return 27;
		case 50:
			return 28;
		case 51:
			return 29;
		case 52:
			return 30;
		case 53:
			return 31;
		case 54:
			return 32;
		case 55:
			return 33;
		case 56:
			return 34;
		case 57:
			return 35;
		case 58:
			return 36;
		case 59:
			return 37;
		case 9:
			return 57;
		case 10:
			return 53;
		case 118:
			return 57;
		case 14:
			return 56;
		case 3:
			return 55;
		case 21:
			return 50;
		case 15:
			return 51;
		case 20:
			return 52;
		case 11:
			return 54;
		case 23:
			return 58;
		case 12:
			return 60;
		case 24:
			return 61;
		case 4:
			return 62;
		default:
			break;
	}
	UNK_0xA402F6C87C08815C(bParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

bool func_325(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0x301901B13DC3365B(iParam1);
	if (func_332(bParam0, bParam2))
	{
		if (!iVar0 == func_331(iVar0))
		{
			UNK_0xBC8E0A7390523199(iParam1, func_331(iVar0));
			return true;
		}
		else if (func_327() && iVar0 == func_331(iVar0))
		{
			return true;
		}
	}
	else if (!iVar0 == func_326(iVar0))
	{
		UNK_0xBC8E0A7390523199(iParam1, func_326(iVar0));
		return true;
	}
	else if (func_327() && iVar0 == func_326(iVar0))
	{
		return true;
	}
	return false;
}

int func_326(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return 422;
		case 528:
			return 528;
		case 529:
			return 529;
		case 530:
			return 530;
		case 531:
			return 531;
		case 532:
			return 532;
		case 533:
			return 533;
		case 534:
			return 534;
		case 512:
			return 512;
		case 558:
			return 558;
		case 559:
			return 559;
		case 560:
			return 560;
		case 561:
			return 561;
		case 562:
			return 562;
		case 563:
			return 563;
		case 595:
			return 595;
		case 596:
			return 596;
		case 597:
			return 597;
		case 598:
			return 598;
		case 599:
			return 599;
		case 600:
			return 600;
		case 601:
			return 601;
		case 602:
			return 602;
		case 603:
			return 603;
		case 589:
			return 589;
		case 631:
			return 631;
		case 632:
			return 632;
		case 633:
			return 633;
		case 634:
			return 634;
		case 635:
			return 635;
		case 636:
			return 636;
		case 637:
			return 637;
		case 640:
			return 640;
		case 658:
			return 658;
		case 659:
			return 659;
		case 660:
			return 660;
		case 661:
			return 661;
		case 662:
			return 662;
		case 663:
			return 663;
		case 664:
			return 664;
		case 665:
			return 665;
		case 666:
			return 666;
		case 667:
			return 667;
		case 668:
			return 668;
		case 669:
			return 669;
		case 646:
			return 646;
		case 742:
			return 742;
	}
	return iParam0;
}

bool func_327()
{
	if (((func_330() || func_329()) || func_310()) || func_328())
	{
		return true;
	}
	return false;
}

var func_328()
{
	return Global_2450632.f_19;
}

var func_329()
{
	return Global_2450632.f_16;
}

var func_330()
{
	return Global_2450632.f_15;
}

int func_331(int iParam0)
{
	switch (iParam0)
	{
		case 422:
			return 64;
		case 528:
			return 528;
		case 529:
			return 529;
		case 530:
			return 530;
		case 531:
			return 531;
		case 532:
			return 532;
		case 533:
			return 533;
		case 534:
			return 534;
		case 512:
			return 512;
		case 558:
			return 558;
		case 559:
			return 559;
		case 560:
			return 560;
		case 561:
			return 561;
		case 562:
			return 562;
		case 563:
			return 563;
		case 595:
			return 595;
		case 596:
			return 596;
		case 597:
			return 597;
		case 598:
			return 598;
		case 599:
			return 599;
		case 600:
			return 600;
		case 601:
			return 601;
		case 602:
			return 602;
		case 603:
			return 603;
		case 589:
			return 589;
		case 631:
			return 631;
		case 632:
			return 632;
		case 633:
			return 633;
		case 634:
			return 634;
		case 635:
			return 635;
		case 636:
			return 636;
		case 637:
			return 637;
		case 640:
			return 640;
		case 658:
			return 658;
		case 659:
			return 659;
		case 660:
			return 660;
		case 661:
			return 661;
		case 662:
			return 662;
		case 663:
			return 663;
		case 664:
			return 664;
		case 665:
			return 665;
		case 666:
			return 666;
		case 667:
			return 667;
		case 668:
			return 668;
		case 669:
			return 669;
		case 646:
			return 646;
		case 742:
			return 742;
	}
	return iParam0;
}

bool func_332(bool bParam0, bool bParam1)
{
	if (((!UNK_0x437347B10A200C4B(bParam0, 0) && (!UNK_0xE934758D273C899A(bParam0) && UNK_0xF79A7BCA9E38BBBC(bParam0))) && SYSTEM::VMAG(UNK_0x56E9E0FD5ACCD35D(bParam0)) < 0.5f) && func_146(bParam0, bParam1, bParam1, 0, 0, 0, 1, 0, 1))
	{
		return true;
	}
	return false;
}

bool func_333()
{
	if (Global_2537071.f_842 > -1)
	{
		return true;
	}
	return false;
}

void func_334()
{
	if (bLocal_1188)
	{
		if (!bLocal_1189)
		{
			if (func_257(bLocal_1206))
			{
				UNK_0xAA6B3A4292417750(bLocal_1206, false, false, false, true, false, false, 0, false);
				bLocal_1189 = true;
			}
		}
	}
	else if (bLocal_1189)
	{
		if (func_257(bLocal_1206))
		{
			UNK_0xAA6B3A4292417750(bLocal_1206, false, false, false, false, false, false, 0, false);
			bLocal_1189 = false;
		}
	}
}

bool func_335(var uParam0)
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

void func_336(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (UNK_0xBFF81ED3B99522C7())
		{
			func_119(uParam0, 0, 0);
		}
	}
}

void func_337()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (Local_152.f_23 == 6)
	{
		vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 = 6;
	}
	bVar0 = false;
	bVar1 = false;
	bLocal_121 = false;
	switch (vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2)
	{
		case 0:
			if (Local_152.f_23 > 0)
			{
				vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 = 1;
			}
			break;
		case 1:
			if (!func_149(bLocal_1206))
			{
				func_479();
				func_457();
				func_456();
				if (func_143(UNK_0xD803B885F5E47A62(), 1, 1))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_1206, 0))
					{
						UNK_0xF3039DE1FDB4F6FD(0);
						func_455();
						UNK_0x8B25B8DC6068152D(UNK_0x16F2683693E537C9(), joaat("GADGET_PARACHUTE"), true, 0);
						UNK_0xF4C7CEF3BC475271();
						vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 = 2;
						UNK_0x0674E58A79778E99(&(vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_1), false);
					}
				}
			}
			break;
		case 2:
			if (!func_149(bLocal_1206))
			{
				if (func_143(UNK_0xD803B885F5E47A62(), 1, 1))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_1206, 0))
					{
						func_454();
						func_453();
						UNK_0xF4C7CEF3BC475271();
						if (UNK_0xBFF81ED3B99522C7() && func_452(1, 1))
						{
							if (UNK_0xF28AD5253D9A9A6A())
							{
								if (UNK_0x91E3F625EF57450D(0))
								{
									if (UNK_0xBFC0798A6E3417F9(0, 21))
									{
										bVar0 = true;
									}
								}
								else if (UNK_0xBFC0798A6E3417F9(2, 201))
								{
									bVar0 = true;
								}
								if (bVar0 || UNK_0xEAE0D21A50E6C7F4(Local_152.f_1, 12))
								{
									UNK_0x0674E58A79778E99(&(Local_152.f_1), 12);
									UNK_0x0674E58A79778E99(&(Local_152.f_2), 4);
									vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 = 3;
									UNK_0x0674E58A79778E99(&(vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_1), 5);
									UNK_0x5D96D8530B3D0904(&(vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_1), 6);
								}
							}
							if (UNK_0xEAE0D21A50E6C7F4(bLocal_1207, 7) && iLocal_116 == 0)
							{
								if (UNK_0x91E3F625EF57450D(0))
								{
									if (UNK_0xBFC0798A6E3417F9(0, 101))
									{
										bLocal_121 = true;
									}
								}
								else if (UNK_0xBFC0798A6E3417F9(2, 209))
								{
									bLocal_121 = true;
								}
							}
						}
						if (Local_152.f_23 >= 5)
						{
							vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 = 5;
						}
						if (Local_152.f_23 == 4)
						{
							vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 = 4;
						}
					}
					else
					{
						vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 = 1;
					}
				}
			}
			break;
		case 3:
			if (!func_149(bLocal_1206))
			{
				if (func_143(UNK_0xD803B885F5E47A62(), 1, 1))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_1206, 0))
					{
						func_454();
						UNK_0xF4C7CEF3BC475271();
						if ((UNK_0xBFF81ED3B99522C7() && func_452(1, 1)) && UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), 1785177548) != 1)
						{
							if (UNK_0x91E3F625EF57450D(0))
							{
								if (UNK_0xBFC0798A6E3417F9(0, 36))
								{
									bVar1 = true;
								}
							}
							else if (UNK_0xBFC0798A6E3417F9(2, 202))
							{
								bVar1 = true;
							}
							if (bVar1)
							{
								vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 = 2;
								UNK_0x5D96D8530B3D0904(&(vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_1), 5);
							}
							if (UNK_0x91E3F625EF57450D(0))
							{
								if (UNK_0xBFC0798A6E3417F9(0, 101))
								{
									bLocal_121 = true;
								}
							}
							else if (UNK_0xBFC0798A6E3417F9(2, 209))
							{
								bLocal_121 = true;
							}
						}
						if (Local_152.f_23 >= 5)
						{
							vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 = 5;
						}
						else if (Local_152.f_23 == 2)
						{
							UNK_0x0674E58A79778E99(&(Local_152.f_1), 9);
							vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 = 2;
						}
						else if (Local_152.f_23 == 4)
						{
							vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 = 4;
						}
					}
					else
					{
						vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 = 1;
					}
				}
			}
			break;
		case 4:
			if ((((((func_451("POD_CHAM_CIGAR") || func_451("POD_CHAM_WEB")) || func_451("POD_UNKNOWN")) || func_451("POD_CIGAR")) || func_451("POD_WEB")) || func_451("LUX_VEH_ACT_1ST")) || func_451("LUX_ACT_1ST_SW"))
			{
				UNK_0xA37A90C62806D848(1);
			}
			if (UNK_0xEAE0D21A50E6C7F4(vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_1, 8))
			{
				UNK_0x0674E58A79778E99(&(vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_1), 8);
			}
			if (!func_156())
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_152.f_2, 17))
				{
					if (func_263())
					{
						func_12(1);
						func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
						if (iLocal_124 == -1)
						{
							func_100(&uLocal_997, "EXHELAU", "EXHEL_OFFICE", 12, 0, 0, 1);
						}
						else
						{
							func_100(&uLocal_997, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
						}
						UNK_0x5D96D8530B3D0904(&(Local_152.f_2), 17);
					}
				}
			}
			if ((Local_152.f_28 == UNK_0xD803B885F5E47A62() && func_450()) && Local_152.f_27)
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_282, 16))
				{
					if (!func_149(bLocal_1206))
					{
						if (func_143(UNK_0xD803B885F5E47A62(), 1, 1))
						{
							if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_1206, 0))
							{
								if (!func_449())
								{
									if (UNK_0xEAE0D21A50E6C7F4(Local_152.f_1, 15))
									{
										bVar2 = func_448(1);
										if (bVar2 > 0)
										{
											if (iLocal_124 == -1)
											{
												func_447(bVar2, UNK_0xD803B885F5E47A62(), 0, Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274[5]);
											}
											else
											{
												func_447(bVar2, UNK_0xD803B885F5E47A62(), 1, iLocal_124);
											}
											UNK_0x5D96D8530B3D0904(&bLocal_282, 16);
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!UNK_0xBFF81ED3B99522C7())
			{
				func_494(0);
			}
			if (Local_152.f_23 == 2)
			{
				vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 = 2;
				if (UNK_0xEAE0D21A50E6C7F4(vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_1, 8))
				{
					UNK_0x0674E58A79778E99(&(vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_1), 8);
				}
			}
			break;
		case 5:
			if (!func_149(bLocal_1206))
			{
				if (func_143(UNK_0xD803B885F5E47A62(), 1, 1))
				{
					func_445();
					func_453();
					UNK_0xF4C7CEF3BC475271();
					if (Local_152.f_23 == 2)
					{
						UNK_0x0674E58A79778E99(&(Local_152.f_1), 9);
						vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 = 2;
					}
				}
			}
			break;
		case 6:
			func_494(1);
			break;
	}
	if (((vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 != 4 && bLocal_122) && UNK_0xBFF81ED3B99522C7()) && func_441())
	{
		if (iLocal_124 > -2)
		{
		}
		if (!UNK_0xAFE0D3608EDA7039(bLocal_1206))
		{
			UNK_0x0C8A454B494DAA0D(bLocal_1206);
		}
		UNK_0x5D96D8530B3D0904(&bLocal_282, 15);
		func_440();
		vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 = 4;
		UNK_0x0674E58A79778E99(&(vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_1), 5);
		UNK_0x0674E58A79778E99(&(vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_1), 6);
		UNK_0x5D96D8530B3D0904(&(vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_1), 8);
		bLocal_122 = false;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(bLocal_1207, 7))
	{
		UNK_0x0674E58A79778E99(&bLocal_1207, 7);
	}
	func_363();
	func_338();
}

void func_338()
{
	int iVar0;
	int iVar1;
	struct<9> Var2;

	iVar1 = 1;
	if (func_143(UNK_0xD803B885F5E47A62(), 1, 1) && !func_149(bLocal_1206))
	{
		if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bLocal_1206) && !func_362(UNK_0x16F2683693E537C9(), bLocal_1206, -1))
		{
			UNK_0x3584F71E5CA29322(7);
			UNK_0x3584F71E5CA29322(9);
			UNK_0x3584F71E5CA29322(6);
			UNK_0x3584F71E5CA29322(8);
			UNK_0x38C3A68D7861DCFD(0, 80, 1);
		}
		if (UNK_0x83D8570832F172A7(iLocal_290))
		{
			if (func_361() || func_142(0))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_282, 11))
				{
					UNK_0x5D96D8530B3D0904(&bLocal_282, 11);
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(bLocal_282, 11))
			{
				bLocal_1208 = false;
				UNK_0x0674E58A79778E99(&bLocal_282, 11);
			}
			if (func_452(1, 1))
			{
				if ((((vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 == 1 && UNK_0xEAE0D21A50E6C7F4(bLocal_282, 2)) || vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 == 2) || vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 == 3) || vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 == 5)
				{
					bLocal_1207 = false;
					Var2 = { func_360() };
					if (vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 == 1)
					{
						if (((!func_259() && !UNK_0xEAE0D21A50E6C7F4(vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_1, false)) && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) && !func_358(UNK_0xD803B885F5E47A62()))
						{
							UNK_0x5D96D8530B3D0904(&bLocal_1207, false);
						}
						else
						{
							iVar1 = 0;
						}
					}
					else if (vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 == 2)
					{
						if (UNK_0xBFF81ED3B99522C7())
						{
							if (UNK_0xF28AD5253D9A9A6A())
							{
								UNK_0x5D96D8530B3D0904(&bLocal_1207, true);
							}
							else
							{
								UNK_0x5D96D8530B3D0904(&bLocal_1207, 2);
							}
							if (func_441())
							{
								UNK_0x5D96D8530B3D0904(&bLocal_1207, 7);
							}
						}
						if (UNK_0xEE9925602B29903C(bLocal_1206) < 10f)
						{
							UNK_0x5D96D8530B3D0904(&bLocal_1207, 3);
						}
						else if (UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), -275944640) != 1 && UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), -275944640) != 0)
						{
							UNK_0x5D96D8530B3D0904(&bLocal_1207, 4);
							if (UNK_0xA30B8362589C124A(bLocal_1206, false, 0) != UNK_0x16F2683693E537C9() && UNK_0xEE9925602B29903C(bLocal_1206) < 40f)
							{
								if (func_357())
								{
									UNK_0x5D96D8530B3D0904(&bLocal_1207, 5);
									iVar0 = 1;
								}
							}
						}
						else
						{
							iVar1 = 0;
						}
					}
					else if (vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 == 3)
					{
						if (UNK_0xBFF81ED3B99522C7())
						{
							UNK_0x5D96D8530B3D0904(&bLocal_1207, 6);
							if (func_441())
							{
								UNK_0x5D96D8530B3D0904(&bLocal_1207, 7);
							}
						}
						UNK_0x5D96D8530B3D0904(&bLocal_1207, 4);
					}
					else if (vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_2 == 5)
					{
						if (UNK_0xEE9925602B29903C(bLocal_1206) < 10f)
						{
							UNK_0x5D96D8530B3D0904(&bLocal_1207, 3);
						}
						else if (UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), -275944640) != 1 && UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), -275944640) != 0)
						{
							UNK_0x5D96D8530B3D0904(&bLocal_1207, 4);
							if (UNK_0xA30B8362589C124A(bLocal_1206, false, 0) != UNK_0x16F2683693E537C9() && UNK_0xEE9925602B29903C(bLocal_1206) < 40f)
							{
								if (func_357())
								{
									UNK_0x5D96D8530B3D0904(&bLocal_1207, 5);
									iVar0 = 1;
								}
							}
						}
						else
						{
							iVar1 = 0;
						}
					}
					else
					{
						iVar1 = 0;
					}
					if (func_356())
					{
						iVar1 = 0;
					}
					if (iVar1 == 1)
					{
						func_355();
						func_354(1);
						func_352(1);
						if (UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), 1785177548) != 1)
						{
							if ((bLocal_1207 != bLocal_1208 || UNK_0xB8E3620B82AD47D7(2)) || Global_61501)
							{
								Global_61501 = 0;
								func_350(&uLocal_291);
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_1207, false))
								{
									func_349(UNK_0xF59058FCB716F903(0, 23, true), "HTX_ENTER", &uLocal_291, 0);
								}
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_1207, true))
								{
									if (UNK_0x91E3F625EF57450D(0))
									{
										func_349(UNK_0xF59058FCB716F903(0, 21, true), "HTX_START", &uLocal_291, 0);
									}
									else
									{
										func_349(UNK_0xF59058FCB716F903(2, 201, true), "HTX_START", &uLocal_291, 0);
									}
								}
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_1207, 2))
								{
									func_349(UNK_0xF59058FCB716F903(2, 199, true), "HTX_WAYP", &uLocal_291, 0);
								}
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_1207, 3))
								{
									func_349(UNK_0xF59058FCB716F903(0, 75, true), "HTX_EXIT1", &uLocal_291, 0);
								}
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_1207, 4))
								{
									func_349(UNK_0xF59058FCB716F903(0, 75, true), "HTX_EXIT2", &uLocal_291, 0);
								}
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_1207, 5))
								{
									if (UNK_0x91E3F625EF57450D(0))
									{
										func_349(UNK_0xF59058FCB716F903(0, 22, true), "HTX_EXIT3", &uLocal_291, 0);
									}
									else
									{
										func_349(UNK_0xF59058FCB716F903(0, 99, true), "HTX_EXIT3", &uLocal_291, 0);
									}
								}
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_1207, 6))
								{
									if (UNK_0x91E3F625EF57450D(0))
									{
										func_349(UNK_0xF59058FCB716F903(0, 36, true), "HTX_STOP", &uLocal_291, 0);
									}
									else
									{
										func_349(UNK_0xF59058FCB716F903(2, 202, true), "HTX_STOP", &uLocal_291, 0);
									}
								}
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_1207, 7))
								{
									if (func_348() || func_346(UNK_0xD803B885F5E47A62()))
									{
										if (UNK_0x91E3F625EF57450D(0))
										{
											func_349(UNK_0xF59058FCB716F903(2, 101, true), "HTX_QT_WARP", &uLocal_291, 0);
										}
										else
										{
											func_349(UNK_0xF59058FCB716F903(2, 209, true), "HTX_QT_WARP", &uLocal_291, 0);
										}
									}
									else if (UNK_0x91E3F625EF57450D(0))
									{
										func_349(UNK_0xF59058FCB716F903(2, 101, true), "HTX_OFF_WARP", &uLocal_291, 0);
									}
									else
									{
										func_349(UNK_0xF59058FCB716F903(2, 209, true), "HTX_OFF_WARP", &uLocal_291, 0);
									}
								}
							}
							func_339(&iLocal_290, &Var2, &uLocal_291, func_345(&uLocal_291));
							bLocal_1208 = bLocal_1207;
						}
					}
				}
			}
		}
		else
		{
			iLocal_290 = UNK_0xB01F55A0FD1CFD49("instructional_buttons");
		}
		if (iVar0 == 1)
		{
			UNK_0x38C3A68D7861DCFD(0, 99, 1);
			UNK_0x38C3A68D7861DCFD(0, 100, 1);
		}
	}
	Global_2537071.f_260 = iVar1;
}

void func_339(int iParam0, var uParam1, var uParam2, int iParam3)
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
		func_344(uParam2);
	}
	if (Global_1315716 < 2)
	{
		func_343(1);
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
						func_342(UNK_0xF59058FCB716F903(iVar1, iVar2, true));
						if (iVar3 < 361)
						{
							func_342(UNK_0xF59058FCB716F903(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_342(UNK_0xE32F7AC5E6DF304A(iVar4, iVar5, true));
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
						func_36(&(uParam2->f_1[bVar0 /*57*/].f_32));
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
					func_342(&(uParam2->f_1[bVar0 /*57*/]));
					if (!UNK_0xEA6BC48857E0AC4C(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_342(&(uParam2->f_1[bVar0 /*57*/].f_16));
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
						func_36(&(uParam2->f_1[bVar0 /*57*/].f_32));
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
		func_341(*iParam0, uParam1);
	}
	func_340();
}

void func_340()
{
	UNK_0x3584F71E5CA29322(7);
	UNK_0x3584F71E5CA29322(6);
	UNK_0x3584F71E5CA29322(8);
	UNK_0x3584F71E5CA29322(9);
}

void func_341(int iParam0, var uParam1)
{
	UNK_0x6567AE843FADBA94(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_342(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

void func_343(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_344(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_345(var uParam0)
{
	return uParam0->f_692;
}

bool func_346(int iParam0)
{
	return func_347(iParam0) != 0;
}

int func_347(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	return Global_1590535[iParam0 /*876*/].f_274.f_134;
}

bool func_348()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_106[iVar0 /*3*/] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_349(char* sParam0, char* sParam1, var uParam2, char* sParam3)
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

void func_350(var uParam0)
{
	func_351(uParam0);
	uParam0->f_692 = 1;
}

void func_351(var uParam0)
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

void func_352(bool bParam0)
{
	if (bParam0)
	{
		if (func_353())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

bool func_353()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

void func_354(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_355()
{
	Global_2548146.f_258 = 1;
}

bool func_356()
{
	if (iLocal_116 > 0 || bLocal_122 == 1)
	{
		return true;
	}
	return false;
}

bool func_357()
{
	if (UNK_0x486D653D4D029ACE(bLocal_1206) && !func_333())
	{
		return true;
	}
	return false;
}

bool func_358(int iParam0)
{
	return func_359(iParam0) == joaat("WEAPON_MINIGUN");
}

int func_359(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_595;
}

struct<9> func_360()
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

bool func_361()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

bool func_362(bool bParam0, bool bParam1, bool bParam2)
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

void func_363()
{
	if (iLocal_116 == 0)
	{
		if (bLocal_121)
		{
			if (func_348() || func_346(UNK_0xD803B885F5E47A62()))
			{
				bLocal_120 = true;
				iLocal_116 = 1;
			}
			else
			{
				bLocal_122 = true;
				iLocal_124 = -1;
				bLocal_123 = true;
			}
		}
	}
	if (iLocal_116 == 1)
	{
		if (func_441())
		{
			func_367();
		}
		else
		{
			bLocal_123 = true;
		}
	}
	if (bLocal_123)
	{
		func_364(1, -1);
		iLocal_116 = 0;
		iLocal_118 = 0;
		bLocal_123 = false;
		bLocal_121 = false;
	}
}

void func_364(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_366(&iVar0, 0, iParam1))
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
		func_365(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_365(int iParam0)
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

bool func_366(int iParam0, bool bParam1, int iParam2)
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

void func_367()
{
	int iVar0;

	func_430(&Local_142);
	if (func_428(0, -1, 0))
	{
		if (bLocal_120)
		{
			func_417();
			bLocal_120 = false;
		}
		else
		{
			func_416(iLocal_118, 1, 1);
		}
		func_414();
		func_412();
		func_378(1, -1, 1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1);
		if (!bLocal_131)
		{
			if (func_377())
			{
				bLocal_120 = true;
			}
		}
		else if (!func_377())
		{
			bLocal_120 = true;
		}
		if (!bLocal_132)
		{
			if (func_372())
			{
				bLocal_120 = true;
			}
		}
		else if (!func_372())
		{
			bLocal_120 = true;
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!bLocal_134[iVar0])
			{
				if (func_371(iLocal_125[iVar0]))
				{
					bLocal_120 = true;
				}
			}
			else if (!func_371(iLocal_125[iVar0]))
			{
				bLocal_120 = true;
			}
			iVar0++;
		}
		if (!bLocal_133)
		{
			if (func_368())
			{
				bLocal_120 = true;
			}
		}
		else if (!func_368())
		{
			bLocal_120 = true;
		}
	}
}

bool func_368()
{
	if (func_346(UNK_0xD803B885F5E47A62()))
	{
		if (SYSTEM::VDIST(func_178(UNK_0xD803B885F5E47A62()), Global_1676377.f_488[func_369(func_347(UNK_0xD803B885F5E47A62())) /*3*/]) > 100f)
		{
			return true;
		}
	}
	return false;
}

int func_369(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_195(iVar0) == 1)
		{
			if (func_370(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_370(int iParam0)
{
	switch (iParam0)
	{
		case 60:
			return 1;
		case 61:
			return 2;
		case 62:
			return 3;
		case 63:
			return 4;
		case 64:
			return 5;
		case 65:
			return 6;
		case 66:
			return 7;
		case 67:
			return 8;
		case 68:
			return 9;
		case 69:
			return 10;
	}
	return 0;
}

bool func_371(int iParam0)
{
	if (iParam0 > 0)
	{
		if (SYSTEM::VDIST(func_178(UNK_0xD803B885F5E47A62()), func_183(iParam0)) > 100f)
		{
			return true;
		}
	}
	return false;
}

bool func_372()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	bVar0 = bLocal_1206;
	if (UNK_0x437347B10A200C4B(bVar0, 0))
	{
		return false;
	}
	iVar1 = UNK_0x7087E053058E9F6C(UNK_0x134B62B726CEC8E6(bVar0));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		bVar5 = (iVar2 - 1);
		if (!UNK_0xBBA8A868118C90ED(bVar0, bVar5, 0))
		{
			bVar4 = UNK_0xA30B8362589C124A(bVar0, bVar5, 0);
			if (!UNK_0x437347B10A200C4B(bVar4, 0) && UNK_0x34BFC6F0CB887BC2(bVar4))
			{
				if (!func_375())
				{
					bVar3 = UNK_0x83FACCC48B68F9D1(bVar4);
					if (bVar3 != UNK_0xD803B885F5E47A62())
					{
						return false;
					}
				}
				else
				{
					bVar3 = UNK_0x83FACCC48B68F9D1(bVar4);
					if (bVar3 != func_5() && func_143(bVar3, 1, 1))
					{
						if (!func_373(bVar3, func_6(UNK_0xD803B885F5E47A62()), 1))
						{
							return false;
						}
					}
				}
			}
		}
		iVar2++;
	}
	if (bLocal_140)
	{
		if (!func_449())
		{
			bLocal_140 = false;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_373(bool bParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_5())
	{
		if (!bParam2)
		{
			if (func_374(bParam0, iParam1))
			{
				return false;
			}
		}
		if (Global_1628237[bParam0 /*615*/].f_11 != func_5())
		{
			return iParam1 == Global_1628237[bParam0 /*615*/].f_11;
		}
	}
	return false;
}

bool func_374(bool bParam0, bool bParam1)
{
	if (bParam1 != func_5())
	{
		if (bParam0 != func_5())
		{
			if (Global_1628237[bParam0 /*615*/].f_11 != func_5())
			{
				if (Global_1628237[bParam0 /*615*/].f_11 == bParam0)
				{
					return bParam1 == bParam0;
				}
			}
		}
	}
	return false;
}

bool func_375()
{
	return func_376(UNK_0xD803B885F5E47A62());
}

bool func_376(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_5())
		{
			return Global_1628237[iParam0 /*615*/].f_11 == iParam0;
		}
	}
	return false;
}

bool func_377()
{
	if (SYSTEM::VDIST(func_178(UNK_0xD803B885F5E47A62()), func_249(func_251(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274[5]))) > 200f)
	{
		return true;
	}
	return false;
}

void func_378(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
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
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	bool bVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int iVar60;
	int iVar61;
	float fVar62;
	float fVar63;
	float fVar64;
	char cVar65[64];
	char cVar81[64];
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	bool bVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;

	if (!func_366(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_410(0, bParam6))
	{
		return;
	}
	UNK_0xD02CE72B4B66DC29(76, 84);
	UNK_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22350)
	{
		if (func_408(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar57 = fVar37;
			fVar58 = fVar36;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_22350 = 0;
		}
	}
	if (UNK_0x12AB0310C2281427(&(Global_22350.f_1)) == UNK_0x12AB0310C2281427("HIDE"))
	{
		fVar59 = Global_22348;
	}
	else
	{
		fVar59 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22349;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		UNK_0xE5AC5CA7914F5BAE(&iVar60, &iVar61);
		fVar63 = UNK_0x33D480CCE15C991A(0);
		if (func_407())
		{
			iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) * fVar63));
		}
		fVar64 = (SYSTEM::TO_FLOAT(iVar60) / SYSTEM::TO_FLOAT(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_407())
		{
			fVar62 = 1f;
		}
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar62));
		iVar61 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) / fVar62));
	}
	else
	{
		UNK_0x8A462DAA7D1D9008(&iVar60, &iVar61);
	}
	if (bParam3)
	{
		if (Global_22350.f_5218 <= 1)
		{
			func_403(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22350.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22350.f_5728)
		{
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_1)) == UNK_0x12AB0310C2281427("HIDE"))
			{
				fVar51 = Global_22348;
			}
			else
			{
				if (Global_22350)
				{
					StringCopy(&cVar65, func_402(29), 64);
					StringCopy(&cVar81, func_400(29, 1), 64);
					if (UNK_0x12AB0310C2281427(&(Global_22350.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_399(Global_22347, Global_22348, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						UNK_0x539E86AE011A8B38(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						UNK_0x539E86AE011A8B38(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22350.f_8387)
				{
					iVar1 = Global_22350.f_8383;
					iVar2 = Global_22350.f_8384;
					iVar3 = Global_22350.f_8385;
					bVar4 = Global_22350.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					bVar4 = 255;
				}
				func_399(Global_22347, (Global_22348 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, bVar4);
				fVar51 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
				if (UNK_0x12AB0310C2281427(&(Global_22350.f_1)) != 0)
				{
					func_398();
					UNK_0x070005E852D4C0E9(&(Global_22350.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22350.f_68)
					{
						if (Global_22350.f_5[iVar14] == 2)
						{
							UNK_0x6D99DF8263D35CE5(Global_22350.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22350.f_5[iVar14] == 3)
						{
							UNK_0x21994591120B91F0(Global_22350.f_14[iVar16], Global_22350.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22350.f_5[iVar14] == 1)
						{
							UNK_0x6B012227B3921E18(&(Global_22350.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 8)
						{
							UNK_0x6B012227B3921E18(&(Global_22350.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 5)
						{
							UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 6)
						{
							UNK_0x6B012227B3921E18(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 7)
						{
							UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 9)
						{
							UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					UNK_0xE0026608C37C7C41((Global_22347 + 0.00390625f), ((Global_22348 + fVar57) + 0.00416664f), 0);
				}
				if (Global_22350.f_5735)
				{
					func_398();
					func_396((((Global_22347 + fParam5) - 0.00390625f) - func_397("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_398();
						func_396((((Global_22347 + fParam5) - 0.00390625f) - func_397("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
					}
				}
			}
			iVar6 = Global_22350.f_5738;
			iVar9 = 0;
			fVar97 = fVar51;
			if (Global_22350.f_8397)
			{
				iVar1 = Global_22350.f_8393;
				iVar2 = Global_22350.f_8394;
				iVar3 = Global_22350.f_8395;
				bVar4 = Global_22350.f_8396;
			}
			else
			{
				UNK_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &bVar4);
			}
			while (iVar9 < Global_22350.f_5225 && iVar6 <= Global_22350.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22350.f_5485[iVar6])
					{
						if (Global_22350.f_5356[iVar6] && iVar6 != Global_22350.f_5738)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar56 = Global_22350.f_5745[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			UNK_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar97 + ((fVar51 - fVar97) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar97), 0f, 255, 255, 255, 255, 0);
			if (Global_22350.f_5731 > Global_22350.f_5225)
			{
				if (Global_22350.f_8402)
				{
					iVar1 = Global_22350.f_8398;
					iVar2 = Global_22350.f_8399;
					iVar3 = Global_22350.f_8400;
					bVar4 = Global_22350.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					bVar4 = 204;
				}
				func_399(Global_22347, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, bVar4);
				vVar38 = { UNK_0xDE43A059FBFFF38A("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar62));
				vVar38.f_1 = (vVar38.y * (0.5f / fVar62));
				if (Global_22350.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					bVar4 = 255;
				}
				else
				{
					UNK_0xA402F6C87C08815C(true, &iVar1, &iVar2, &iVar3, &bVar4);
				}
				UNK_0x539E86AE011A8B38("CommonMenu", "shop_arrows_upANDdown", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar62), ((vVar38.y / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, bVar4, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_4690)) != 0 && Global_22350.f_4766 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_22350.f_4768 != 0)
				{
					func_408(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_395(fVar42);
				UNK_0xA1868A78E3C3D56B(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						UNK_0x6D99DF8263D35CE5(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						UNK_0x21994591120B91F0(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						UNK_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						UNK_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UNK_0x5D2FD44A8C086959(fVar42, (fVar51 + 0.00277776f));
				UNK_0xA402F6C87C08815C(2, &iVar1, &iVar2, &iVar3, &bVar4);
				func_399(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, bVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					bVar4 = Global_22350.f_8406;
				}
				else
				{
					UNK_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &bVar4);
				}
				UNK_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, bVar4, 0);
				func_395(fVar42);
				UNK_0x070005E852D4C0E9(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						UNK_0x6D99DF8263D35CE5(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						UNK_0x21994591120B91F0(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						UNK_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						UNK_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17 = (iVar17 + 1);
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 8)
					{
						UNK_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				UNK_0xE0026608C37C7C41(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_22350.f_4768 != 0)
				{
					func_408(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_394(Global_22350.f_4768, 1, &iVar47, &iVar48, &iVar49, &bVar50);
					UNK_0x539E86AE011A8B38(func_402(Global_22350.f_4768), func_400(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
				}
				fVar51 = (fVar51 + (((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22350.f_4766 > 0)
				{
					if ((UNK_0x1C0640BA9A7327B3() - Global_22350.f_4767) > Global_22350.f_4766)
					{
						StringCopy(&(Global_22350.f_4690), "", 24);
						Global_22350.f_4766 = -1;
					}
				}
			}
			if (UNK_0x12AB0310C2281427(&(Global_4268421.f_21)) != 0 && Global_4268421.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_4268421.f_67 != 0)
				{
					func_408(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_395(fVar42);
				UNK_0xA1868A78E3C3D56B(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						UNK_0x6D99DF8263D35CE5(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						UNK_0x21994591120B91F0(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UNK_0x5D2FD44A8C086959(fVar42, (fVar51 + 0.00277776f));
				UNK_0xA402F6C87C08815C(2, &iVar1, &iVar2, &iVar3, &bVar4);
				func_399(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, bVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					bVar4 = Global_22350.f_8406;
				}
				else
				{
					UNK_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &bVar4);
				}
				UNK_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, bVar4, 0);
				func_395(fVar42);
				UNK_0x070005E852D4C0E9(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						UNK_0x6D99DF8263D35CE5(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						UNK_0x21994591120B91F0(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				UNK_0xE0026608C37C7C41(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4268421.f_67 != 0)
				{
					func_408(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_394(Global_4268421.f_67, 1, &iVar47, &iVar48, &iVar49, &bVar50);
					UNK_0x539E86AE011A8B38(func_402(Global_4268421.f_67), func_400(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
				}
				fVar51 = (fVar51 + (((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4268421.f_65 > 0)
				{
					if ((UNK_0x1C0640BA9A7327B3() - Global_4268421.f_66) > Global_4268421.f_65)
					{
						StringCopy(&(Global_4268421.f_21), "", 16);
						Global_4268421.f_65 = -1;
					}
				}
			}
			func_391(iVar60, iParam1, bParam8, 0, 0, 0, bParam4, 1, 0);
			UNK_0xD02CE72B4B66DC29(76, 84);
			UNK_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22350.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_22350.f_5218;
			if (Global_22350.f_5729)
			{
				iVar98 = (Global_22350.f_5732 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_22350.f_5745[iVar6] != 0f)
				{
					fVar56 = Global_22350.f_5745[iVar6];
				}
				if (Global_22350.f_5729)
				{
					iVar6 = Global_22350.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22350.f_5738 && iVar9 < Global_22350.f_5225)
				{
					bVar33 = true;
					if (Global_22350.f_5739 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_22350.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22350.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22347 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_22350.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					bVar105 = 255;
					if (Global_22350.f_8409)
					{
						UNK_0xA402F6C87C08815C(Global_22350.f_8408, &iVar102, &iVar103, &iVar104, &bVar105);
					}
					else
					{
						UNK_0xA402F6C87C08815C(true, &iVar102, &iVar103, &iVar104, &bVar105);
					}
					UNK_0x539E86AE011A8B38("CommonMenu", "Gradient_Nav", (Global_22347 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, bVar105, 0);
					Global_22350.f_5877 = fVar35;
				}
				bVar8 = false;
				while (bVar8 < Global_22350.f_5226)
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_22350.f_5089[iVar6], bVar8) || Global_22350.f_5056[bVar8] == 5)
					{
						if (Global_22350.f_5729)
						{
							iVar19 = Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + bVar8)];
							iVar20 = Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + bVar8)];
							iVar21 = Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + bVar8)];
							iVar22 = Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + bVar8)];
							iVar23 = Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + bVar8)];
						}
						else
						{
							Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + bVar8)] = iVar19;
							Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + bVar8)] = iVar20;
							Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + bVar8)] = iVar21;
							Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + bVar8)] = iVar22;
							Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + bVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_22350.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + bVar8) == Global_22350.f_6008[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_22350.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + bVar8) == Global_22350.f_6008[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_22350.f_5062[bVar8] != -1f)
						{
							fVar34 = ((Global_22347 + 0.0046875f) + Global_22350.f_5062[bVar8]);
						}
						if ((bVar8 < 4 && Global_22350.f_5062[bVar8 + 1] != -1f) && fVar34 < Global_22350.f_5062[bVar8 + 1])
						{
							fVar46 = (Global_22350.f_5062[bVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_22347 + Global_22349) - 0.0046875f) - fVar34);
						}
						if ((Global_22350.f_5075[bVar8] && Global_22350.f_5874) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_22350.f_5056[bVar8])
						{
							case 0:
								break;
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_389(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
											UNK_0xBBA442527B4BB1A6(&(Global_22350.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0x6B012227B3921E18(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0x6D99DF8263D35CE5(Global_22350.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0x21994591120B91F0(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
										{
											fVar43 = UNK_0x79E367314AFBB5CA(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_408(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_22350.f_4433[(iVar22 + iVar14)] == 2 || Global_22350.f_4433[(iVar22 + iVar14)] == 51) || Global_22350.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_22350.f_5083[bVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[bVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar43;
										Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar44;
										if (Global_22350.f_5083[bVar8] == 2)
										{
											iVar101 = (bVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_22350.f_5083[iVar101] == 2)
												{
													Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] = (Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] - Global_22350.f_5068[bVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)];
										fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + bVar8)];
									}
									if (bVar54)
									{
										if (func_408(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[bVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_408(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_394(26, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_402(26), func_400(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
										if (func_408(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_408(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_394(27, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_402(27), func_400(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										func_389(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_388(bVar32);
										}
										UNK_0x070005E852D4C0E9(&(Global_22350.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0x6B012227B3921E18(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0x6D99DF8263D35CE5(Global_22350.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0x21994591120B91F0(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar28)] == 2 || Global_22350.f_4433[(iVar22 + iVar28)] == 51) || Global_22350.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_408(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_408(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_394(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &bVar50);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[bVar8] == 2)
															{
																UNK_0x539E86AE011A8B38(func_402(Global_22350.f_4433[(iVar22 + iVar28)]), func_400(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
															else
															{
																UNK_0x539E86AE011A8B38(func_402(Global_22350.f_4433[(iVar22 + iVar28)]), func_400(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22350.f_5083[bVar8] == 2)
										{
											UNK_0xE0026608C37C7C41(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											UNK_0xE0026608C37C7C41((fVar34 + fVar42), fVar35, 0);
											if (func_387() && UNK_0x8A22C4C08282BF26(joaat("FM_MISSION_CREATOR")) > 0)
											{
												if (bVar8 == 0)
												{
													func_389(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													UNK_0xD3539A877EC25E86(0f, (0.35f * 0.7f));
													UNK_0x7178F32F6742C936(255, 255, 255, 150);
													UNK_0xC1032CAC14DE468A((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), 0);
													UNK_0x070005E852D4C0E9(&cVar107);
													UNK_0x6D99DF8263D35CE5((Global_22350.f_5738 + iVar30));
													UNK_0xE0026608C37C7C41((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar14)] != 2 && Global_22350.f_4433[(iVar22 + iVar14)] != 51) && Global_22350.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_408(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_408(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_394(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &bVar50);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																UNK_0x539E86AE011A8B38(func_402(Global_22350.f_4433[(iVar22 + iVar14)]), func_400(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
															else if (Global_22350.f_5083[bVar8] == 2)
															{
																UNK_0x539E86AE011A8B38(func_402(Global_22350.f_4433[(iVar22 + iVar14)]), func_400(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
															else
															{
																UNK_0x539E86AE011A8B38(func_402(Global_22350.f_4433[(iVar22 + iVar14)]), func_400(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							case 2:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_389(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_388(bVar32);
										}
										UNK_0xBBA442527B4BB1A6("NUMBER");
										UNK_0x6D99DF8263D35CE5(Global_22350.f_3918[iVar20]);
										fVar43 = UNK_0x79E367314AFBB5CA(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[bVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[bVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)];
									}
									if (bVar54)
									{
										if (func_408(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[bVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_408(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_394(26, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_402(26), func_400(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
										if (func_408(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_408(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_394(27, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_402(27), func_400(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_389(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										func_386((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							case 3:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_389(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_388(bVar32);
										}
										UNK_0xBBA442527B4BB1A6("NUMBER");
										UNK_0x21994591120B91F0(Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
										fVar43 = UNK_0x79E367314AFBB5CA(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[bVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[bVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)];
									}
									if (bVar54)
									{
										if (func_408(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[bVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_408(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_394(26, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_402(26), func_400(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
										if (func_408(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_408(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_394(27, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_402(27), func_400(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
									}
									func_389(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
									func_385((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							case 4:
								if (bVar33)
								{
									if (func_408(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22350.f_5729)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_22350.f_5083[bVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_22350.f_5083[bVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar42;
											Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)];
											fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + bVar8)];
										}
										if (bVar54)
										{
											if (func_408(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[bVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_408(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_394(26, 1, &iVar47, &iVar48, &iVar49, &bVar50);
													if (iVar5 == 1)
													{
														UNK_0x539E86AE011A8B38(func_402(26), func_400(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
													}
												}
											}
											if (func_408(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_408(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_394(27, 1, &iVar47, &iVar48, &iVar49, &bVar50);
													if (iVar5 == 1)
													{
														UNK_0x539E86AE011A8B38(func_402(27), func_400(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_408(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_394(Global_22350.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &bVar50);
												UNK_0x539E86AE011A8B38(func_402(Global_22350.f_4433[iVar22]), func_400(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_384(Global_22350.f_4433[iVar22])), (fVar37 * func_384(Global_22350.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, bVar50, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_22350.f_5056[bVar8] == 5)
						{
							if (Global_22350.f_5068[bVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22350.f_5068[bVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22350.f_5068[bVar8]);
							if (Global_22350.f_5075[bVar8])
							{
								if (func_408(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22350.f_5068[bVar8]);
					}
					bVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_22350.f_8038[iVar9] = iVar6;
						Global_22350.f_5740 = iVar6;
						iVar9++;
						if (Global_22350.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_22350.f_5745[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_22350.f_5728)
					{
						Global_22350.f_5485[iVar6] = 1;
						if (Global_22350.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22350.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22350.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22350.f_5728)
			{
				Global_22350.f_5730 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_22350.f_5733 = iVar11;
				Global_22350.f_5731 = iVar10;
				Global_22350.f_5728 = 1;
			}
		}
		if (!Global_22350.f_5729)
		{
			Global_22350.f_5732 = iVar9;
			Global_22350.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22350.f_5876 = fVar51;
	Global_22350.f_5878 = UNK_0x1C0640BA9A7327B3();
	UNK_0xD668DA5CA4A1D2C8(Global_22350.f_5876);
	if (!Global_22350.f_8382)
	{
		func_379(0);
	}
	Global_22350.f_8382 = 0;
	if (bParam2)
	{
		UNK_0x3584F71E5CA29322(10);
	}
	UNK_0x3584F71E5CA29322(6);
	UNK_0x3584F71E5CA29322(7);
	UNK_0x3584F71E5CA29322(9);
	UNK_0x3584F71E5CA29322(8);
	if (bParam0)
	{
		func_354(1);
	}
	UNK_0xD59EF13BB60323B9();
}

void func_379(int iParam0)
{
	if (func_383())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_142(0))
		{
			func_380(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_380(int iParam0)
{
	if (func_383())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_382())
		{
			func_381(1, 1);
		}
		else
		{
			func_381(0, 0);
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
	if (!func_88())
	{
		Global_19486.f_1 = 3;
	}
}

void func_381(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_142(0))
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

bool func_382()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_383()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

float func_384(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
	}
	return 1f;
}

void func_385(float fParam0, float fParam1, bool bParam2, bool bParam3, int iParam4)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0x21994591120B91F0(bParam3, iParam4);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_386(float fParam0, float fParam1, bool bParam2, bool bParam3, int iParam4)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0x6D99DF8263D35CE5(bParam3);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_387()
{
	return UNK_0xC146D5FBD23C6954(-1762644250);
}

void func_388(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (bParam0)
	{
		UNK_0xA402F6C87C08815C(Global_22350.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		UNK_0xA402F6C87C08815C(Global_22350.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
}

void func_389(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (bParam2)
	{
		if (bParam3)
		{
			func_390(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					UNK_0xA402F6C87C08815C(true, &iVar0, &iVar1, &iVar2, &bVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				UNK_0xA402F6C87C08815C(14, &iVar0, &iVar1, &iVar2, &bVar3);
				UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				UNK_0xA402F6C87C08815C(12, &iVar0, &iVar1, &iVar2, &bVar3);
				UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			UNK_0x7178F32F6742C936(155, 155, 155, 255);
		}
		else
		{
			UNK_0x7178F32F6742C936(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			UNK_0x7178F32F6742C936(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			UNK_0xA402F6C87C08815C(true, &iVar0, &iVar1, &iVar2, &bVar3);
			UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, bVar3);
		}
	}
	else if (bParam0)
	{
		UNK_0x7178F32F6742C936(155, 155, 155, 255);
	}
	else
	{
		UNK_0x7178F32F6742C936(155, 155, 155, 255);
	}
	UNK_0xD3539A877EC25E86(0f, 0.35f);
	UNK_0xEEF67251E263A87F(1);
	if (bParam5)
	{
		UNK_0xD3539A877EC25E86(0f, 0.425f);
		UNK_0x7BBAC160090910C3(4);
	}
	else if (bParam6)
	{
		UNK_0xD3539A877EC25E86(0f, 0.425f);
		UNK_0x7BBAC160090910C3(6);
	}
	else
	{
		UNK_0x7BBAC160090910C3(0);
	}
	UNK_0xF1F881BAAAFB43B1(0f, 1f);
	UNK_0xAAE406A7DA443B93(0);
	UNK_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	UNK_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_390(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 8;
			*iParam2 = 8;
			*iParam3 = 8;
			break;
		case 1:
			*iParam1 = 37;
			*iParam2 = 37;
			*iParam3 = 39;
			break;
		case 22:
			*iParam1 = 140;
			*iParam2 = 146;
			*iParam3 = 154;
			break;
		case 23:
			*iParam1 = 91;
			*iParam2 = 93;
			*iParam3 = 94;
			break;
		case 6:
			*iParam1 = 81;
			*iParam2 = 84;
			*iParam3 = 89;
			break;
		case 111:
			*iParam1 = 240;
			*iParam2 = 240;
			*iParam3 = 240;
			break;
		case 28:
			*iParam1 = 150;
			*iParam2 = 8;
			*iParam3 = 0;
			break;
		case 34:
			*iParam1 = 38;
			*iParam2 = 3;
			*iParam3 = 6;
			break;
		case 88:
			*iParam1 = 245;
			*iParam2 = 137;
			*iParam3 = 15;
			break;
		case 45:
			*iParam1 = 74;
			*iParam2 = 22;
			*iParam3 = 7;
			break;
		case 56:
			*iParam1 = 45;
			*iParam2 = 58;
			*iParam3 = 53;
			break;
		case 58:
			*iParam1 = 71;
			*iParam2 = 120;
			*iParam3 = 60;
			break;
		case 54:
			*iParam1 = 77;
			*iParam2 = 98;
			*iParam3 = 104;
			break;
		case 73:
			*iParam1 = 14;
			*iParam2 = 49;
			*iParam3 = 109;
			break;
		case 68:
			*iParam1 = 22;
			*iParam2 = 34;
			*iParam3 = 72;
			break;
		case 140:
			*iParam1 = 0;
			*iParam2 = 174;
			*iParam3 = 239;
			break;
		case 131:
			*iParam1 = 255;
			*iParam2 = 183;
			*iParam3 = 0;
			break;
		case 90:
			*iParam1 = 142;
			*iParam2 = 140;
			*iParam3 = 70;
			break;
		case 97:
			*iParam1 = 156;
			*iParam2 = 141;
			*iParam3 = 113;
			break;
		case 89:
			*iParam1 = 145;
			*iParam2 = 115;
			*iParam3 = 71;
			break;
		case 105:
			*iParam1 = 98;
			*iParam2 = 68;
			*iParam3 = 40;
			break;
		case 100:
			*iParam1 = 124;
			*iParam2 = 27;
			*iParam3 = 68;
			break;
		case 99:
			*iParam1 = 114;
			*iParam2 = 42;
			*iParam3 = 63;
			break;
		case 136:
			*iParam1 = 246;
			*iParam2 = 151;
			*iParam3 = 153;
			break;
		case 49:
			*iParam1 = 32;
			*iParam2 = 32;
			*iParam3 = 44;
			break;
		case 146:
			*iParam1 = 26;
			*iParam2 = 1;
			*iParam3 = 23;
			break;
		default:
			*iParam1 = 255;
			*iParam2 = 255;
			*iParam3 = 255;
			break;
	}
}

void func_391(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	if (!func_366(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (bParam3 && !func_410(bParam4, bParam8))
	{
		return;
	}
	if (func_392())
	{
		return;
	}
	if (UNK_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_306(UNK_0xD803B885F5E47A62(), 0))
		{
			return;
		}
	}
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (UNK_0xDAC65F45B0B2D176() == 0 || UNK_0x4FD68D5821EE3E19())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (UNK_0xB8E3620B82AD47D7(2))
		{
			bVar1 = false;
			while (bVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[bVar1] != 361)
				{
					StringCopy(&(Global_22350.f_4771[bVar1 /*16*/]), UNK_0xF59058FCB716F903(2, Global_22350.f_5026[bVar1], true), 64);
				}
				else if (Global_22350.f_5039[bVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[bVar1 /*16*/]), UNK_0xE32F7AC5E6DF304A(2, Global_22350.f_5039[bVar1], true), 64);
				}
				bVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			UNK_0x7C19E5E4784BD7CF((1f - (Global_22350.f_5081 / 100f)));
			UNK_0x7E60D21B163E9D56();
			if (UNK_0x0EFF6B4415DAF4A1())
			{
				UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				UNK_0x1200CC973A2399C8(true);
				UNK_0x7E60D21B163E9D56();
			}
			bVar1 = false;
			while (bVar1 < Global_22350.f_4769)
			{
				if (UNK_0x12AB0310C2281427(&(Global_22350.f_4964[bVar1 /*4*/])) != UNK_0x12AB0310C2281427("PREV"))
				{
					UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(bVar1);
					func_342(&(Global_22350.f_4771[bVar1 /*16*/]));
					iVar2 = bVar1 + 1;
					while (iVar2 < 12 && UNK_0x12AB0310C2281427(&(Global_22350.f_4964[iVar2 /*4*/])) == UNK_0x12AB0310C2281427("PREV"))
					{
						func_342(&(Global_22350.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22350.f_5013[bVar1] == -1)
					{
						func_36(&(Global_22350.f_4964[bVar1 /*4*/]));
					}
					else
					{
						bVar3 = Global_22350.f_5013[bVar1];
						if (bParam2 >= 0)
						{
							bVar3 = bParam2;
						}
						UNK_0x7ACC3006A87F8B39(&(Global_22350.f_4964[bVar1 /*4*/]));
						if (bParam5)
						{
							UNK_0x164431059FF80580(bVar3, 70);
						}
						else
						{
							UNK_0x6D99DF8263D35CE5(bVar3);
						}
						UNK_0x779B34565F4D71B1();
					}
					if (UNK_0x0EFF6B4415DAF4A1())
					{
						if (Global_22350.f_5026[bVar1] != 361 && UNK_0xEAE0D21A50E6C7F4(Global_22350.f_5052, bVar1))
						{
							UNK_0x1200CC973A2399C8(true);
							UNK_0x3CAEA85DA607305E(Global_22350.f_5026[bVar1]);
						}
						else
						{
							UNK_0x1200CC973A2399C8(false);
							UNK_0x3CAEA85DA607305E(361);
						}
					}
					UNK_0x7E60D21B163E9D56();
				}
				bVar1++;
			}
			if (UNK_0x12AB0310C2281427(&(Global_4268421.f_16)) != UNK_0x12AB0310C2281427(""))
			{
				UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(Global_22350.f_4769);
				func_342(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_36(&(Global_4268421.f_16));
				}
				else
				{
					bVar4 = Global_22350.f_5013[bVar1];
					if (bParam2 >= 0)
					{
						bVar4 = bParam2;
					}
					UNK_0x7ACC3006A87F8B39(&(Global_4268421.f_16));
					if (bParam5)
					{
						UNK_0x164431059FF80580(bVar4, 70);
					}
					else
					{
						UNK_0x6D99DF8263D35CE5(bVar4);
					}
					UNK_0x779B34565F4D71B1();
				}
				UNK_0x7E60D21B163E9D56();
			}
			UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(80);
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				UNK_0x3CAEA85DA607305E(true);
			}
			else
			{
				UNK_0x3CAEA85DA607305E(false);
			}
			UNK_0x7E60D21B163E9D56();
			Global_22350.f_4770 = 1;
		}
		bVar1 = false;
		while (bVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[bVar1] != -1)
			{
				if (bParam2 > 0)
				{
					UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					UNK_0x3CAEA85DA607305E(bVar1);
					UNK_0x7ACC3006A87F8B39(&(Global_22350.f_4964[bVar1 /*4*/]));
					if (bParam5)
					{
						UNK_0x164431059FF80580(bParam2, 70);
					}
					else
					{
						UNK_0x6D99DF8263D35CE5(bParam2);
					}
					UNK_0x779B34565F4D71B1();
					UNK_0x7E60D21B163E9D56();
				}
			}
			bVar1++;
		}
		if (Global_4268421.f_20 != -1)
		{
			if (bParam2 > 0)
			{
				UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				UNK_0x3CAEA85DA607305E(bVar1);
				UNK_0x7ACC3006A87F8B39(&(Global_4268421.f_16));
				if (bParam5)
				{
					UNK_0x164431059FF80580(bParam2, 70);
				}
				else
				{
					UNK_0x6D99DF8263D35CE5(bParam2);
				}
				UNK_0x779B34565F4D71B1();
				UNK_0x7E60D21B163E9D56();
			}
		}
		UNK_0xD02CE72B4B66DC29(76, 66);
		UNK_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8417)
			{
				UNK_0x744B56EE9DE7B57F(15, 0f, -0.0375f);
				Global_22350.f_8417 = 1;
			}
		}
		else if (Global_22350.f_8417)
		{
			UNK_0xA5E3ADAAA4CD5D6C(15);
			Global_22350.f_8417 = 0;
		}
		UNK_0xD59EF13BB60323B9();
		if (Global_22350.f_5055)
		{
			UNK_0xD02CE72B4B66DC29(82, 66);
			UNK_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
			UNK_0xEF45C43067063F18(Global_22350.f_5660[iVar0 /*10*/], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			UNK_0xD59EF13BB60323B9();
		}
		else
		{
			UNK_0x6567AE843FADBA94(Global_22350.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_392()
{
	vector3 vVar0;

	if (Global_19486.f_1 > 3)
	{
		return true;
	}
	if (func_393())
	{
		vVar0 = { 0f, -500f, 0f };
		UNK_0x1CFAC524932A967E(&vVar0);
		if (Global_19431 == 0)
		{
			if (vVar0.y > -119f)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (vVar0.y > -101f)
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

bool func_393()
{
	if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		return true;
	}
	return false;
}

void func_394(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	UNK_0xA402F6C87C08815C(true, bParam2, bParam3, bParam4, bParam5);
	*bParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*bParam2 = 194;
			*bParam3 = 80;
			*bParam4 = 80;
			break;
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*bParam2 = 0;
				*bParam3 = 0;
				*bParam4 = 0;
			}
			break;
		case 54:
			*bParam5 = 100;
			break;
		case 62:
			*bParam5 = 100;
			break;
		case 55:
			UNK_0xA402F6C87C08815C(24, bParam2, bParam3, bParam4, bParam5);
			*bParam5 = 255;
			break;
	}
}

void func_395(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	UNK_0xA402F6C87C08815C(true, &iVar0, &iVar1, &iVar2, &bVar3);
	UNK_0x7BBAC160090910C3(0);
	UNK_0xD3539A877EC25E86(0f, 0.35f);
	UNK_0x4B9228CE1CF0DACA(2);
	UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, bVar3);
	UNK_0xF1F881BAAAFB43B1(fParam0, ((Global_22347 + Global_22349) - 0.0046875f));
	UNK_0xAAE406A7DA443B93(0);
	UNK_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	UNK_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_396(float fParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0x6D99DF8263D35CE5(bParam3);
	UNK_0x6D99DF8263D35CE5(bParam4);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

float func_397(bool bParam0, bool bParam1, bool bParam2)
{
	if (!UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		if (UNK_0x12AB0310C2281427(bParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_398();
	UNK_0xBBA442527B4BB1A6(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	UNK_0x6D99DF8263D35CE5(bParam2);
	return UNK_0x79E367314AFBB5CA(1);
}

void func_398()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	UNK_0xA402F6C87C08815C(true, &iVar0, &iVar1, &iVar2, &bVar3);
	if (Global_22350.f_8392)
	{
		iVar0 = Global_22350.f_8388;
		iVar1 = Global_22350.f_8389;
		iVar2 = Global_22350.f_8390;
		bVar3 = Global_22350.f_8391;
	}
	UNK_0x7BBAC160090910C3(0);
	UNK_0xD3539A877EC25E86(0f, 0.35f);
	UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, bVar3);
	UNK_0xF1F881BAAAFB43B1((Global_22347 + 0.0046875f), ((Global_22347 + Global_22349) - 0.0046875f));
	UNK_0xAAE406A7DA443B93(0);
	UNK_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	UNK_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_399(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	UNK_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, bParam7, 0);
}

char* func_400(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;

	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_7029[iParam0 /*16*/])))
	{
		if (UNK_0x12AB0310C2281427(&(Global_22350.f_7029[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_314(UNK_0xD803B885F5E47A62()) };
			if (UNK_0x205FB5BBF81D8900(&Var19, &uVar3))
			{
				return func_401(&uVar3);
			}
		}
		else
		{
			return func_401(&(Global_22350.f_7029[iParam0 /*16*/]));
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
			break;
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_401(var uParam0)
{
	return uParam0;
}

char* func_402(int iParam0)
{
	var uVar0;
	struct<13> Var16;

	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_6020[iParam0 /*16*/])))
	{
		if (UNK_0x12AB0310C2281427(&(Global_22350.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_314(UNK_0xD803B885F5E47A62()) };
			UNK_0x205FB5BBF81D8900(&Var16, &uVar0);
			return func_401(&uVar0);
		}
		else
		{
			return func_401(&(Global_22350.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_403(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;

	if (Global_22350.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22350.f_5218 >= 128)
	{
		return;
	}
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 < Global_22350.f_5741)
	{
		return;
	}
	if (Global_22350.f_5218 != iParam0)
	{
		Global_22350.f_5218 = iParam0;
		Global_22350.f_5219 = 0;
	}
	iVar0 = Global_22350.f_5056[Global_22350.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22350.f_5219 < 4 && iVar0 != 1)
		{
			Global_22350.f_5219++;
			iVar0 = Global_22350.f_5056[Global_22350.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]), bParam1, 24);
	if (!UNK_0xEA6BC48857E0AC4C(bParam1) && !UNK_0xEF07223F00EBE9C9(bParam1))
	{
	}
	Global_22350.f_1610[Global_22350.f_5220] = bParam3;
	Global_22350.f_1867[Global_22350.f_5220] = iParam4;
	Global_22350.f_5220++;
	if (!bParam3)
	{
		func_406(Global_22350.f_5218, 1);
	}
	else
	{
		func_406(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_405(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_408(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22350.f_5068[Global_22350.f_5219])
		{
			Global_22350.f_5068[Global_22350.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_404(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
			if (fVar4 > Global_22350.f_5745[iParam0])
			{
				Global_22350.f_5745[iParam0] = fVar4;
			}
		}
	}
	UNK_0x5D96D8530B3D0904(&(Global_22350.f_5089[iParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 1;
	Global_22350.f_5742 = (Global_22350.f_5220 - 1);
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = iParam2;
}

float func_404(bool bParam0)
{
	if (!UNK_0xEF07223F00EBE9C9(bParam0))
	{
	}
	return UNK_0x9153358B38685E6E(0.35f, 0);
}

float func_405(bool bParam0)
{
	if (!UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		if (UNK_0x12AB0310C2281427(bParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_389(0, 1, 0, 0, 0, 0, 0);
	UNK_0xBBA442527B4BB1A6(bParam0);
	return UNK_0x79E367314AFBB5CA(1);
}

void func_406(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

bool func_407()
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

bool func_408(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;

	StringCopy(&cVar0, func_402(iParam0), 64);
	StringCopy(&cVar16, func_400(iParam0, bParam1), 64);
	if (UNK_0x12AB0310C2281427(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			UNK_0xE5AC5CA7914F5BAE(&iVar32, &iVar33);
			fVar35 = UNK_0x33D480CCE15C991A(0);
			if (func_407())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_407())
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
		vVar37.x = (vVar37.x * (func_409(iParam0) / fVar34));
		vVar37.f_1 = (vVar37.y * (func_409(iParam0) / fVar34));
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
		return true;
	}
	return false;
}

float func_409(int iParam0)
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

bool func_410(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return true;
	}
	if ((((((((!UNK_0x0F1CCD77290EE12F() || (func_91(8, -1) && func_411() != 65)) || (UNK_0x8BB17FEBE0394018() != 0 && !bParam1)) || (UNK_0x991B1F0980C62628() && !bParam0)) || UNK_0x590766B2AF637235()) || Global_76882) || Global_22350.f_8416) || UNK_0xE57E602827E07C9D()) || Global_98796.f_1417)
	{
		return false;
	}
	return true;
}

int func_411()
{
	return Global_1312812;
}

void func_412()
{
	if (iLocal_118 == 0)
	{
		if (!bLocal_131)
		{
			func_413("PAH_QUICK_D1", 0, 0);
		}
	}
	else if (iLocal_118 == iLocal_119)
	{
		if (!bLocal_132)
		{
			func_413("PAH_QUICK_D2", 0, 0);
		}
		else if (!bLocal_133)
		{
			func_413("PAH_QUICK_D3", 0, 0);
		}
	}
	else if (!bLocal_132)
	{
		func_413("PAH_QUICK_D2", 0, 0);
	}
	else if (!bLocal_134[(iLocal_118 - 1)])
	{
		func_413("PAH_QUICK_D3", 0, 0);
	}
}

void func_413(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;

	StringCopy(&(Global_22350.f_4690), sParam0, 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = iParam1;
	Global_22350.f_4767 = UNK_0x1C0640BA9A7327B3();
	Global_22350.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_414()
{
	bool bVar0;

	bVar0 = true;
	if ((((UNK_0x798A3F1296751F46() || UNK_0x1A72D8C9F025E5E3()) || UNK_0xE57E602827E07C9D()) || UNK_0x4FD68D5821EE3E19()) || Global_98796.f_1417)
	{
		bVar0 = false;
	}
	if ((bVar0 && UNK_0xBFC0798A6E3417F9(2, 201)) || (bVar0 && Local_142.f_6))
	{
		if (!func_449())
		{
			if (iLocal_118 == 0)
			{
				if (func_377())
				{
					iLocal_124 = -1;
					bLocal_123 = true;
					bLocal_122 = true;
				}
			}
			else if (iLocal_118 == iLocal_119)
			{
				if (func_372())
				{
					if (func_368())
					{
						iLocal_124 = 50;
						bLocal_123 = true;
						bLocal_122 = true;
					}
				}
			}
			else if (func_372())
			{
				if (func_371(iLocal_125[(iLocal_118 - 1)]))
				{
					bLocal_123 = true;
					bLocal_122 = true;
					iLocal_124 = iLocal_125[(iLocal_118 - 1)];
				}
			}
		}
		else
		{
			bLocal_140 = true;
		}
	}
	else if (!bVar0)
	{
	}
	else if (UNK_0xBFC0798A6E3417F9(2, 202) || Local_142.f_7)
	{
		bLocal_123 = true;
	}
	else if ((UNK_0xBFC0798A6E3417F9(2, 188) && func_415(&uLocal_141, &(Local_142.f_4), 1)) || (Local_142.f_8 && func_415(&uLocal_141, &(Local_142.f_4), 1)))
	{
		if (Local_142.f_4 > 0)
		{
			iLocal_118 = (iLocal_118 - 1);
			if (iLocal_118 < 0)
			{
				iLocal_118 = (iLocal_117 - 1);
			}
			func_416(iLocal_118, 1, 1);
		}
	}
	else if ((UNK_0xBFC0798A6E3417F9(2, 187) && func_415(&uLocal_141, &(Local_142.f_4), 1)) || (Local_142.f_9 && func_415(&uLocal_141, &(Local_142.f_4), 1)))
	{
		if (Local_142.f_4 < 0)
		{
			iLocal_118++;
			if (iLocal_118 > (iLocal_117 - 1))
			{
				iLocal_118 = 0;
			}
			func_416(iLocal_118, 1, 1);
		}
	}
	UNK_0x3584F71E5CA29322(7);
	UNK_0x3584F71E5CA29322(8);
	UNK_0x3584F71E5CA29322(9);
}

bool func_415(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = 150;
	if (bParam2)
	{
		if (((UNK_0x7FEE810EE9E768EB(2, 188) || UNK_0x4F3973434662D795(2, 219) < -0.3f) || UNK_0x7FEE810EE9E768EB(2, 241)) || UNK_0xBFC0798A6E3417F9(2, 188))
		{
			if (UNK_0x7FEE810EE9E768EB(2, 241))
			{
				iVar1 = 100;
			}
			if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(*uParam0, UNK_0x2B6E0A53779D29EA())) > iVar1)
			{
				*uParam0 = UNK_0x2B6E0A53779D29EA();
				iVar0 = 1;
				*uParam1 = 1;
			}
		}
		if (((UNK_0x7FEE810EE9E768EB(2, 187) || UNK_0x4F3973434662D795(2, 219) > 0.3f) || UNK_0x7FEE810EE9E768EB(2, 242)) || UNK_0xBFC0798A6E3417F9(2, 187))
		{
			if (UNK_0x7FEE810EE9E768EB(2, 242))
			{
				iVar1 = 100;
			}
			if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(*uParam0, UNK_0x2B6E0A53779D29EA())) > iVar1)
			{
				*uParam0 = UNK_0x2B6E0A53779D29EA();
				iVar0 = 1;
				*uParam1 = -1;
			}
		}
	}
	else
	{
		if ((UNK_0x7FEE810EE9E768EB(2, 190) || UNK_0x4F3973434662D795(2, 218) > 0.3f) || UNK_0xB9132A06AE472728(2, 201))
		{
			if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(*uParam0, UNK_0x2B6E0A53779D29EA())) > iVar1)
			{
				*uParam0 = UNK_0x2B6E0A53779D29EA();
				iVar0 = 1;
				*uParam1 = 1;
			}
		}
		if (UNK_0x7FEE810EE9E768EB(2, 189) || UNK_0x4F3973434662D795(2, 218) < -0.3f)
		{
			if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(*uParam0, UNK_0x2B6E0A53779D29EA())) > iVar1)
			{
				*uParam0 = UNK_0x2B6E0A53779D29EA();
				iVar0 = 1;
				*uParam1 = -1;
			}
		}
	}
	return iVar0;
}

void func_416(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	Global_22350.f_5739 = iParam0;
	Global_22350.f_5874 = iParam2;
	if (Global_22350.f_5739 < Global_22350.f_5738)
	{
		Global_22350.f_5738 = Global_22350.f_5739;
	}
	else if ((Global_22350.f_5729 && Global_22350.f_5739 > Global_22350.f_5740) || (!Global_22350.f_5729 && Global_22350.f_5739 >= (Global_22350.f_5738 + Global_22350.f_5225)))
	{
		iVar0 = Global_22350.f_5738;
		while (iVar0 <= Global_22350.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22350.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22350.f_5225 && Global_22350.f_5738 < 128)
		{
			Global_22350.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22350.f_5738;
			while (iVar0 <= Global_22350.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22350.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22350.f_4690), "", 24);
		StringCopy(&(Global_4268421.f_21), "", 16);
	}
}

void func_417()
{
	struct<4> Var0;
	bool bVar4;
	int iVar5;
	bool bVar6;

	func_427(0, 0);
	func_426("PAH_QUICK_1");
	func_425(1, 2, 1, 1, 1);
	func_424(1, 1, 0, 0, 0);
	iLocal_117 = 0;
	Var0 = { func_423(func_246(5, -1)) };
	bVar4 = func_422(&Var0);
	bLocal_131 = func_377();
	bLocal_132 = func_372();
	func_403(iLocal_117, bVar4, 0, bLocal_131, 0, 0);
	iLocal_117++;
	iVar5 = 0;
	while (iVar5 < 5)
	{
		if (func_421(iVar5) > 0)
		{
			if (func_185(func_421(iVar5)))
			{
				iLocal_125[iVar5] = func_421(iVar5);
				bLocal_134[iVar5] = func_371(iLocal_125[iVar5]);
				if (bLocal_132)
				{
					bVar6 = bLocal_134[iVar5];
				}
				else
				{
					bVar6 = false;
				}
				func_403(iLocal_117, func_420(iLocal_125[iVar5]), 0, bVar6, 0, 0);
				iLocal_117++;
			}
		}
		iVar5++;
	}
	bLocal_133 = (func_368() && bLocal_132);
	if (func_346(UNK_0xD803B885F5E47A62()))
	{
		func_403(iLocal_117, func_419(func_347(UNK_0xD803B885F5E47A62())), 0, bLocal_133, 0, 0);
		iLocal_119 = iLocal_117;
		iLocal_117++;
	}
	func_418(201, "ITEM_SELECT", -1, 0);
	func_418(202, "ITEM_BACK", -1, 0);
	func_416(iLocal_118, 1, 1);
}

void func_418(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;

	sVar0 = UNK_0xF59058FCB716F903(2, iParam0, true);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		UNK_0x5D96D8530B3D0904(&(Global_22350.f_5052), Global_22350.f_4769);
	}
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769 /*4*/]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

bool func_419(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_WAREHOUSE_1";
		case 2:
			return "MP_WAREHOUSE_2";
		case 3:
			return "MP_WAREHOUSE_3";
		case 4:
			return "MP_WAREHOUSE_4";
		case 5:
			return "MP_WAREHOUSE_5";
		case 6:
			return "MP_WAREHOUSE_6";
		case 7:
			return "MP_WAREHOUSE_7";
		case 8:
			return "MP_WAREHOUSE_8";
		case 9:
			return "MP_WAREHOUSE_9";
		case 10:
			return "MP_WAREHOUSE_10";
		default:
			break;
	}
	return "";
}

bool func_420(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_WHOUSE_0";
		case 2:
			return "MP_WHOUSE_1";
		case 3:
			return "MP_WHOUSE_2";
		case 4:
			return "MP_WHOUSE_3";
		case 5:
			return "MP_WHOUSE_4";
		case 6:
			return "MP_WHOUSE_5";
		case 7:
			return "MP_WHOUSE_6";
		case 8:
			return "MP_WHOUSE_7";
		case 9:
			return "MP_WHOUSE_8";
		case 10:
			return "MP_WHOUSE_9";
		case 11:
			return "MP_WHOUSE_10";
		case 12:
			return "MP_WHOUSE_11";
		case 13:
			return "MP_WHOUSE_12";
		case 14:
			return "MP_WHOUSE_13";
		case 15:
			return "MP_WHOUSE_14";
		case 16:
			return "MP_WHOUSE_15";
		case 17:
			return "MP_WHOUSE_16";
		case 18:
			return "MP_WHOUSE_17";
		case 19:
			return "MP_WHOUSE_18";
		case 20:
			return "MP_WHOUSE_19";
		case 21:
			return "MP_WHOUSE_20";
		case 22:
			return "MP_WHOUSE_21";
	}
	return "";
}

int func_421(int iParam0)
{
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_106[iParam0 /*3*/] != 0)
	{
		return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_106[iParam0 /*3*/];
	}
	return 0;
}

bool func_422(var uParam0)
{
	return uParam0;
}

struct<4> func_423(int iParam0)
{
	struct<4> Var0;

	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "MP_PROP_1", 16);
			break;
		case 2:
			StringCopy(&Var0, "MP_PROP_2", 16);
			break;
		case 3:
			StringCopy(&Var0, "MP_PROP_3", 16);
			break;
		case 4:
			StringCopy(&Var0, "MP_PROP_4", 16);
			break;
		case 5:
			StringCopy(&Var0, "MP_PROP_5", 16);
			break;
		case 6:
			StringCopy(&Var0, "MP_PROP_6", 16);
			break;
		case 7:
			StringCopy(&Var0, "MP_PROP_7", 16);
			break;
		case 8:
			StringCopy(&Var0, "MP_PROP_8", 16);
			break;
		case 9:
			StringCopy(&Var0, "MP_PROP_9", 16);
			break;
		case 10:
			StringCopy(&Var0, "MP_PROP_10", 16);
			break;
		case 11:
			StringCopy(&Var0, "MP_PROP_11", 16);
			break;
		case 12:
			StringCopy(&Var0, "MP_PROP_12", 16);
			break;
		case 13:
			StringCopy(&Var0, "MP_PROP_13", 16);
			break;
		case 14:
			StringCopy(&Var0, "MP_PROP_14", 16);
			break;
		case 15:
			StringCopy(&Var0, "MP_PROP_15", 16);
			break;
		case 16:
			StringCopy(&Var0, "MP_PROP_16", 16);
			break;
		case 17:
			StringCopy(&Var0, "MP_PROP_17", 16);
			break;
		case 18:
			StringCopy(&Var0, "MP_PROP_18", 16);
			break;
		case 19:
			StringCopy(&Var0, "MP_PROP_19", 16);
			break;
		case 20:
			StringCopy(&Var0, "MP_PROP_20", 16);
			break;
		case 21:
			StringCopy(&Var0, "MP_PROP_21", 16);
			break;
		case 22:
			StringCopy(&Var0, "MP_PROP_22", 16);
			break;
		case 23:
			StringCopy(&Var0, "MP_PROP_23", 16);
			break;
		case 24:
			StringCopy(&Var0, "MP_PROP_24", 16);
			break;
		case 25:
			StringCopy(&Var0, "MP_PROP_25", 16);
			break;
		case 26:
			StringCopy(&Var0, "MP_PROP_26", 16);
			break;
		case 27:
			StringCopy(&Var0, "MP_PROP_27", 16);
			break;
		case 28:
			StringCopy(&Var0, "MP_PROP_28", 16);
			break;
		case 29:
			StringCopy(&Var0, "MP_PROP_29", 16);
			break;
		case 30:
			StringCopy(&Var0, "MP_PROP_30", 16);
			break;
		case 31:
			StringCopy(&Var0, "MP_PROP_31", 16);
			break;
		case 32:
			StringCopy(&Var0, "MP_PROP_32", 16);
			break;
		case 33:
			StringCopy(&Var0, "MP_PROP_33", 16);
			break;
		case 34:
			StringCopy(&Var0, "MP_PROP_34", 16);
			break;
		case 35:
			StringCopy(&Var0, "MP_PROP_35", 16);
			break;
		case 36:
			StringCopy(&Var0, "MP_PROP_36", 16);
			break;
		case 37:
			StringCopy(&Var0, "MP_PROP_37", 16);
			break;
		case 38:
			StringCopy(&Var0, "MP_PROP_38", 16);
			break;
		case 39:
			StringCopy(&Var0, "MP_PROP_39", 16);
			break;
		case 40:
			StringCopy(&Var0, "MP_PROP_40", 16);
			break;
		case 41:
			StringCopy(&Var0, "MP_PROP_41", 16);
			break;
		case 42:
			StringCopy(&Var0, "MP_PROP_42", 16);
			break;
		case 43:
			StringCopy(&Var0, "MP_PROP_43", 16);
			break;
		case 44:
			StringCopy(&Var0, "MP_PROP_44", 16);
			break;
		case 45:
			StringCopy(&Var0, "MP_PROP_45", 16);
			break;
		case 46:
			StringCopy(&Var0, "MP_PROP_46", 16);
			break;
		case 47:
			StringCopy(&Var0, "MP_PROP_48", 16);
			break;
		case 48:
			StringCopy(&Var0, "MP_PROP_49", 16);
			break;
		case 49:
			StringCopy(&Var0, "MP_PROP_50", 16);
			break;
		case 50:
			StringCopy(&Var0, "MP_PROP_51", 16);
			break;
		case 51:
			StringCopy(&Var0, "MP_PROP_52", 16);
			break;
		case 52:
			StringCopy(&Var0, "MP_PROP_57", 16);
			break;
		case 53:
			StringCopy(&Var0, "MP_PROP_59", 16);
			break;
		case 54:
			StringCopy(&Var0, "MP_PROP_60", 16);
			break;
		case 55:
			StringCopy(&Var0, "MP_PROP_61", 16);
			break;
		case 56:
			StringCopy(&Var0, "MP_PROP_62", 16);
			break;
		case 57:
			StringCopy(&Var0, "MP_PROP_63", 16);
			break;
		case 58:
			StringCopy(&Var0, "MP_PROP_64", 16);
			break;
		case 59:
			StringCopy(&Var0, "MP_PROP_65", 16);
			break;
		case 60:
			StringCopy(&Var0, "MP_PROP_66", 16);
			break;
		case 61:
			StringCopy(&Var0, "MP_PROP_67", 16);
			break;
		case 62:
			StringCopy(&Var0, "MP_PROP_68", 16);
			break;
		case 63:
			StringCopy(&Var0, "MP_PROP_69", 16);
			break;
		case 64:
			StringCopy(&Var0, "MP_PROP_70", 16);
			break;
		case 65:
			StringCopy(&Var0, "MP_PROP_71", 16);
			break;
		case 66:
			StringCopy(&Var0, "MP_PROP_72", 16);
			break;
		case 67:
			StringCopy(&Var0, "MP_PROP_73", 16);
			break;
		case 68:
			StringCopy(&Var0, "MP_PROP_74", 16);
			break;
		case 69:
			StringCopy(&Var0, "MP_PROP_75", 16);
			break;
		case 70:
			StringCopy(&Var0, "MP_PROP_76", 16);
			break;
		case 71:
			StringCopy(&Var0, "MP_PROP_77", 16);
			break;
		case 72:
			StringCopy(&Var0, "MP_PROP_78", 16);
			break;
		case 83:
			StringCopy(&Var0, "MP_PROP_79", 16);
			break;
		case 84:
			StringCopy(&Var0, "MP_PROP_80", 16);
			break;
		case 85:
			StringCopy(&Var0, "MP_PROP_81", 16);
			break;
		case 73:
			StringCopy(&Var0, "MP_PROP_83", 16);
			break;
		case 74:
			StringCopy(&Var0, "MP_PROP_84", 16);
			break;
		case 75:
			StringCopy(&Var0, "MP_PROP_85", 16);
			break;
		case 76:
			StringCopy(&Var0, "MP_PROP_86", 16);
			break;
		case 77:
			StringCopy(&Var0, "MP_PROP_87", 16);
			break;
		case 78:
			StringCopy(&Var0, "MP_PROP_89", 16);
			break;
		case 79:
			StringCopy(&Var0, "MP_PROP_90", 16);
			break;
		case 80:
			StringCopy(&Var0, "MP_PROP_92", 16);
			break;
		case 81:
			StringCopy(&Var0, "MP_PROP_94", 16);
			break;
		case 82:
			StringCopy(&Var0, "MP_PROP_95", 16);
			break;
		case 86:
			StringCopy(&Var0, "PM_SPAWN_Y", 16);
			break;
		case 87:
			StringCopy(&Var0, "MP_PROP_OFF1", 16);
			break;
		case 88:
			StringCopy(&Var0, "MP_PROP_OFF2", 16);
			break;
		case 89:
			StringCopy(&Var0, "MP_PROP_OFF3", 16);
			break;
		case 90:
			StringCopy(&Var0, "MP_PROP_OFF4", 16);
			break;
		case 91:
			StringCopy(&Var0, "MP_PROP_CLUBH1", 16);
			break;
		case 92:
			StringCopy(&Var0, "MP_PROP_CLUBH2", 16);
			break;
		case 93:
			StringCopy(&Var0, "MP_PROP_CLUBH3", 16);
			break;
		case 94:
			StringCopy(&Var0, "MP_PROP_CLUBH4", 16);
			break;
		case 95:
			StringCopy(&Var0, "MP_PROP_CLUBH5", 16);
			break;
		case 96:
			StringCopy(&Var0, "MP_PROP_CLUBH6", 16);
			break;
		case 97:
			StringCopy(&Var0, "MP_PROP_CLUBH7", 16);
			break;
		case 98:
			StringCopy(&Var0, "MP_PROP_CLUBH8", 16);
			break;
		case 99:
			StringCopy(&Var0, "MP_PROP_CLUBH9", 16);
			break;
		case 100:
			StringCopy(&Var0, "MP_PROP_CLUBH10", 16);
			break;
		case 101:
			StringCopy(&Var0, "MP_PROP_CLUBH11", 16);
			break;
		case 102:
			StringCopy(&Var0, "MP_PROP_CLUBH12", 16);
			break;
		case 103:
		case 106:
		case 109:
		case 112:
			StringCopy(&Var0, "MP_PROP_OFFG1", 16);
			break;
		case 104:
		case 107:
		case 110:
		case 113:
			StringCopy(&Var0, "MP_PROP_OFFG2", 16);
			break;
		case 105:
		case 108:
		case 111:
		case 114:
			StringCopy(&Var0, "MP_PROP_OFFG3", 16);
			break;
		case 115:
			StringCopy(&Var0, "IE_WARE_1", 16);
			break;
	}
	return Var0;
}

void func_424(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5056[0] = iParam0;
	Global_22350.f_5056[1] = iParam1;
	Global_22350.f_5056[2] = iParam2;
	Global_22350.f_5056[3] = iParam3;
	Global_22350.f_5056[4] = iParam4;
	Global_22350.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22350.f_5226++;
	}
}

void func_425(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5083[0] = iParam0;
	Global_22350.f_5083[1] = iParam1;
	Global_22350.f_5083[2] = iParam2;
	Global_22350.f_5083[3] = iParam3;
	Global_22350.f_5083[4] = iParam4;
}

void func_426(char* sParam0)
{
	int iVar0;

	StringCopy(&(Global_22350.f_1), sParam0, 16);
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_427(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22350.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22350.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2461220[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_5089[iVar0] = 0;
		Global_22350.f_5227[iVar0] = 0;
		Global_22350.f_5356[iVar0] = 0;
		Global_22350.f_5879[iVar0] = 0f;
		Global_22350.f_5485[iVar0] = 0;
		Global_22350.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22350.f_5056[iVar0] = 0;
		Global_22350.f_5068[iVar0] = 0f;
		Global_22350.f_5062[iVar0] = -1f;
		Global_22350.f_5075[iVar0] = 0;
		Global_22350.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0 /*4*/]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22350.f_6020[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22350.f_7029[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22350.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	Global_22350 = 0;
	Global_22350.f_5218 = 0;
	Global_22350.f_5219 = 0;
	Global_22350.f_5220 = 0;
	Global_22350.f_5222 = 0;
	Global_22350.f_5223 = 0;
	Global_22350.f_5224 = 0;
	Global_22350.f_5221 = 0;
	Global_22350.f_5874 = 0;
	Global_22350.f_6014 = 0;
	Global_22350.f_5739 = 0;
	Global_22350.f_5738 = 0;
	Global_22350.f_5740 = 0;
	StringCopy(&(Global_22350.f_4690), "", 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = 0;
	Global_22350.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_4768 = 0;
	StringCopy(&(Global_4268421.f_21), "", 16);
	Global_4268421.f_61 = 0;
	Global_4268421.f_62 = 0;
	Global_4268421.f_63 = 0;
	Global_4268421.f_64 = 0;
	Global_4268421.f_65 = 0;
	Global_4268421.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4268421.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4268421.f_67 = 0;
	StringCopy(&(Global_22350.f_1), "", 16);
	Global_22350.f_5074 = 0f;
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_5744 = 0;
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = 0;
	Global_22350.f_5742 = 0;
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	Global_22350.f_5225 = 10;
	Global_22350.f_5226 = 0;
	Global_22350.f_5876 = 0f;
	Global_22350.f_5877 = 0f;
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	Global_22350.f_5730 = 0f;
	Global_22350.f_5731 = 0;
	Global_22350.f_5733 = 0;
	Global_22350.f_5732 = 0;
	Global_22350.f_5734 = 0;
	Global_22350.f_5735 = 0;
	Global_22350.f_5736 = 0;
	Global_22350.f_5737 = 0;
	Global_22350.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22350.f_6008[iVar0] = -1;
		Global_22350.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22350.f_5081 = 0f;
	Global_22350.f_5052 = 0;
	Global_22350.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22350.f_6015)
	{
		Global_22350.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_8392 = 0;
	Global_22350.f_8387 = 0;
	Global_22350.f_8397 = 0;
	Global_22350.f_8402 = 0;
	Global_22350.f_8407 = 0;
	Global_22350.f_8409 = 0;
	Global_22350.f_8415 = 0;
	Global_22347 = 0.05f;
	Global_22348 = 0.05f;
	Global_22349 = 0.225f;
	fVar2 = UNK_0x33D480CCE15C991A(0);
	if (bParam0)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22349 = 0.225f;
	}
}

bool func_428(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_366(&iVar0, 1, iParam1))
	{
		return false;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_5635[iVar0 /*4*/])))
	{
		UNK_0xD7992BEF7A9D109E(&(Global_22350.f_5635[iVar0 /*4*/]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!UNK_0x01C309A4BDFCAD82(&(Global_22350.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	UNK_0x0D3BE1DE0262A012("CommonMenu", 0);
	Global_22350.f_5614[iVar0] = 1;
	if (!UNK_0x27117E2CDD4D67C3("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		UNK_0x0D3BE1DE0262A012("MPShopSale", 0);
		Global_22350.f_5621[iVar0] = 1;
		if (!UNK_0x27117E2CDD4D67C3("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_429(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_429(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!UNK_0x83D8570832F172A7(*uParam0))
			{
				*uParam0 = UNK_0xB01F55A0FD1CFD49(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (UNK_0x83D8570832F172A7(*uParam0))
					{
						uParam0->f_8 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = UNK_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		case 1:
			if (UNK_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_8 = UNK_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		case 2:
			if (!UNK_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_430(var uParam0)
{
	func_439(uParam0, &(uParam0->f_1), &(uParam0->f_2), &(uParam0->f_3), 0);
	uParam0->f_6 = (UNK_0xBFC0798A6E3417F9(2, 201) || UNK_0xD245978525608929(2, 201));
	uParam0->f_7 = (UNK_0xBFC0798A6E3417F9(2, 202) || UNK_0xD245978525608929(2, 202));
	uParam0->f_8 = (uParam0->f_1 < -64 || UNK_0xBFC0798A6E3417F9(2, 188));
	uParam0->f_9 = (uParam0->f_1 > 64 || UNK_0xBFC0798A6E3417F9(2, 187));
	if (((((func_428(0, -1, 0) && UNK_0x8BB17FEBE0394018() == 0) && !UNK_0x1A72D8C9F025E5E3()) && !UNK_0xE57E602827E07C9D()) && !UNK_0x4FD68D5821EE3E19()) && !Global_98796.f_1417)
	{
		if (UNK_0x0EFF6B4415DAF4A1() && !UNK_0x4FD68D5821EE3E19())
		{
			if (UNK_0x9E6C8D8976DA0ECD(2))
			{
				UNK_0x38C3A68D7861DCFD(0, 1, 1);
				UNK_0x38C3A68D7861DCFD(0, 2, 1);
				UNK_0x38C3A68D7861DCFD(2, 200, 1);
				UNK_0xEAB026E686C0D991(0, 237, 1);
				UNK_0xEAB026E686C0D991(0, 238, 1);
				UNK_0xEAB026E686C0D991(0, 241, 1);
				UNK_0xEAB026E686C0D991(0, 242, 1);
				if ((Global_4268497 == -1 || Global_4268497 == -4) || Global_4268497 == -6)
				{
					UNK_0xEAB026E686C0D991(1, 1, 1);
					UNK_0xEAB026E686C0D991(1, 2, 1);
				}
				else
				{
					UNK_0x38C3A68D7861DCFD(1, 1, 1);
					UNK_0x38C3A68D7861DCFD(1, 2, 1);
				}
				func_436(0, 0, 0, 1);
				func_435(0, -1, 1);
			}
			if (func_434())
			{
				if (Global_4268497 == iLocal_118)
				{
					uParam0->f_6 = 1;
				}
				else
				{
					iLocal_118 = Global_4268497;
					func_416(iLocal_118, 1, 1);
				}
			}
			if (func_433())
			{
				uParam0->f_7 = 1;
			}
			if (func_432(0, 0, 0))
			{
				uParam0->f_8 = 1;
			}
			if (func_431(0, 0, 0))
			{
				uParam0->f_9 = 1;
			}
		}
	}
}

bool func_431(bool bParam0, bool bParam1, int iParam2)
{
	if (UNK_0x91E3F625EF57450D(2))
	{
		if (Global_4268497 == -3)
		{
			if ((UNK_0x06F8112AA79C53D9(2, 237) && bParam0) || UNK_0xBFC0798A6E3417F9(2, 237))
			{
				return true;
			}
		}
		if (iParam2 == 0)
		{
			if (UNK_0x06F8112AA79C53D9(2, 242) || (UNK_0x7FEE810EE9E768EB(2, 242) && bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_432(bool bParam0, bool bParam1, int iParam2)
{
	if (UNK_0x91E3F625EF57450D(2))
	{
		if (Global_4268497 == -2)
		{
			if ((UNK_0x06F8112AA79C53D9(2, 237) && bParam0) || UNK_0xBFC0798A6E3417F9(2, 237))
			{
				return true;
			}
		}
		if (iParam2 == 0)
		{
			if (UNK_0x06F8112AA79C53D9(2, 241) || (UNK_0x7FEE810EE9E768EB(2, 241) && bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_433()
{
	if (UNK_0x91E3F625EF57450D(2))
	{
		if (UNK_0xBFC0798A6E3417F9(2, 238))
		{
			return true;
		}
	}
	return false;
}

bool func_434()
{
	if (UNK_0x91E3F625EF57450D(2))
	{
		if (Global_4268497 > -1)
		{
			if (UNK_0xBFC0798A6E3417F9(2, 237))
			{
				return true;
			}
		}
	}
	return false;
}

int func_435(bool bParam0, int iParam1, bool bParam2)
{
	if (!UNK_0x91E3F625EF57450D(2))
	{
		return 0;
	}
	if (UNK_0x798A3F1296751F46() || UNK_0xE57E602827E07C9D())
	{
		return 0;
	}
	if (bParam2)
	{
		UNK_0x5D80F91A16C40CDE();
	}
	if (Global_4268497 == -6)
	{
		UNK_0xC74D8A1D346B9CCB(4);
		if (bParam0 && UNK_0x06F8112AA79C53D9(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4268497 = -1;
			return 0;
		}
	}
	if (((Global_4268497 > -1 || Global_4268497 == -3) || Global_4268497 == -2) || UNK_0xFA0AEC0FCBF8703B())
	{
		UNK_0xC74D8A1D346B9CCB(1);
		return 0;
	}
	if (Global_4268497 == -1 && bParam0)
	{
		if (UNK_0x06F8112AA79C53D9(2, 237))
		{
			UNK_0xC74D8A1D346B9CCB(4);
			Global_4268497 = -6;
			return 1;
		}
		else
		{
			UNK_0xC74D8A1D346B9CCB(3);
			return 0;
		}
	}
	UNK_0xC74D8A1D346B9CCB(1);
	return 0;
}

void func_436(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!UNK_0x91E3F625EF57450D(2))
	{
		Global_4268497 = -1;
		return;
	}
	UNK_0xFE29D579C98536B2(1);
	fVar0 = Global_22347;
	fVar2 = (fVar0 + Global_22349);
	fVar3 = Global_22350.f_5730;
	fVar1 = (Global_22350.f_5730 - (IntToFloat(Global_22350.f_5732) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_22350.f_5732 < 1)
	{
		fVar1 = (Global_22350.f_5730 - 0.034722f);
	}
	UNK_0xD02CE72B4B66DC29(76, 84);
	UNK_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	UNK_0xE428D1DCE17602B4(fVar0, fVar1, &fVar0, &fVar1);
	UNK_0xE428D1DCE17602B4(fVar2, fVar3, &fVar2, &fVar3);
	UNK_0xD59EF13BB60323B9();
	func_438();
	if (Global_4268497 == -6)
	{
		return;
	}
	Global_4268497 = -1;
	fVar7 = Global_4268491;
	fVar8 = Global_4268492;
	if (Global_22350.f_5733 > Global_22350.f_5732)
	{
		if (((Global_4268491 >= fVar0 && Global_4268491 <= fVar2) && Global_4268492 >= fVar3) && Global_4268492 < (fVar3 + fVar6))
		{
			Global_4268497 = -2;
			if (bParam3)
			{
				func_437(0);
			}
			return;
		}
		if (((Global_4268491 >= fVar0 && Global_4268491 <= fVar2) && Global_4268492 >= (fVar3 + fVar6)) && Global_4268492 < (fVar3 + 0.034722f))
		{
			Global_4268497 = -3;
			if (bParam3)
			{
				func_437(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_22350.f_5733 == -1)
		{
			Global_4268497 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_22350.f_5732);
		bVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				UNK_0xD02CE72B4B66DC29(76, 84);
				UNK_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
				func_399(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22349, (0.034722f - 0.0015f), 255, 255, 255, bVar10);
				UNK_0xD59EF13BB60323B9();
			}
		}
		Global_4268497 = Global_22350.f_8038[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4268497 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4268497 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4268497 = -4;
		return;
	}
	Global_4268497 = -1;
}

void func_437(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;

	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		bVar3 = 48;
	}
	else
	{
		bVar3 = 210;
	}
	fVar0 = Global_22347;
	fVar1 = Global_22350.f_5730;
	UNK_0xD02CE72B4B66DC29(76, 84);
	UNK_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	if (Global_4268497 == -2)
	{
		func_399(fVar0, fVar1, Global_22349, fVar2, 255, 255, 255, bVar3);
	}
	else if (Global_4268497 == -3)
	{
		func_399(fVar0, (fVar1 + fVar2), Global_22349, fVar2, 255, 255, 255, bVar3);
	}
	UNK_0xD59EF13BB60323B9();
}

void func_438()
{
	Global_4268493 = Global_4268491;
	Global_4268494 = Global_4268492;
	Global_4268491 = UNK_0x4B7163B4D6E4A3C2(2, 239);
	Global_4268492 = UNK_0x4B7163B4D6E4A3C2(2, 240);
	Global_4268495 = (Global_4268491 - Global_4268493);
	Global_4268496 = (Global_4268492 - Global_4268494);
}

void func_439(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	*iParam0 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 218) * 127f));
	*iParam1 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*iParam0) == 0f && IntToFloat(*iParam1) == 0f)
		{
			*iParam0 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 218) * 127f));
			*iParam1 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 221) * 127f));
		}
	}
}

void func_440()
{
	bool bVar0;

	bVar0 = bLocal_1206;
	if (UNK_0x437347B10A200C4B(bVar0, 0))
	{
		return;
	}
	if (UNK_0xAFE0D3608EDA7039(bVar0))
	{
		UNK_0xE8B40F3223863D71(bVar0, 0);
		UNK_0x443C9A6DC182DDD5(bVar0, 1);
		UNK_0x71EDC33E5A423750(bVar0, 4);
		if (UNK_0x9C7B8DC16535B879(bVar0) != 0 && UNK_0x9C7B8DC16535B879(bVar0) != 1)
		{
			UNK_0x0674E58A79778E99(&bLocal_282, 15);
		}
	}
}

bool func_441()
{
	if (((((Local_152.f_27 && func_450()) && (!func_443(1) || func_375())) && ((func_348() || func_346(UNK_0xD803B885F5E47A62())) || func_377())) && func_442()) && (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), 1785177548) != 1))
	{
		return true;
	}
	return false;
}

bool func_442()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	vector3 vVar6;
	float fVar9;

	if (bLocal_1209)
	{
		return iLocal_1210;
	}
	if (UNK_0xC844350D5D58C99A(bLocal_1206) && !UNK_0x437347B10A200C4B(bLocal_1206, 0))
	{
		iVar1 = UNK_0xD6DF381716822EFE(bLocal_1206) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!UNK_0xBBA8A868118C90ED(bLocal_1206, (iVar0 - 1), 0))
			{
				bVar2 = UNK_0xA30B8362589C124A(bLocal_1206, (iVar0 - 1), 0);
				if (!UNK_0xEB6A8945D1AC98A1(bVar2))
				{
					if (UNK_0x34BFC6F0CB887BC2(bVar2))
					{
						if (!func_279(UNK_0x83FACCC48B68F9D1(bVar2)))
						{
							iLocal_1210 = 0;
							bLocal_1209 = true;
							return false;
						}
					}
					else if (UNK_0xAF6690C489CC6203(bVar2))
					{
						if (!UNK_0x9C77D2D0559097F0(bVar2, 1))
						{
							return false;
						}
					}
				}
			}
			iVar0++;
		}
		iVar3 = 0;
		while (iVar3 < 32)
		{
			bVar4 = iVar3;
			if (!bVar4 == UNK_0xD803B885F5E47A62())
			{
				if (func_143(bVar4, 1, 1))
				{
					bVar5 = UNK_0x9539D44F3E4492F6(bVar4);
					if (UNK_0xC844350D5D58C99A(bVar5) && !UNK_0x437347B10A200C4B(bVar5, 0))
					{
						vVar6 = { func_178(bVar4) };
						fVar9 = SYSTEM::VDIST(vVar6, UNK_0x68F4C0EC296D3901(bLocal_1206, true));
						if (fVar9 < 20f)
						{
							if (UNK_0x3C66DF04E6EA3587(bVar5) == bLocal_1206)
							{
								if (!func_279(bVar4))
								{
									iLocal_1210 = 0;
									bLocal_1209 = true;
									return false;
								}
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	iLocal_1210 = 1;
	bLocal_1209 = true;
	return true;
}

bool func_443(bool bParam0)
{
	return func_444(UNK_0xD803B885F5E47A62(), bParam0);
}

bool func_444(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_376(iParam0))
		{
			return false;
		}
	}
	return Global_1628237[iParam0 /*615*/].f_11 != func_5();
}

void func_445()
{
	bool bVar0;

	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_282, 13))
	{
		if (!UNK_0xFEBC1E4EC9E001F0())
		{
			bVar0 = func_8(1190, -1, 0);
			if (!UNK_0xEAE0D21A50E6C7F4(bVar0, 22) || !UNK_0xEAE0D21A50E6C7F4(bVar0, 23))
			{
				func_446("HTX_HELP2", -1);
				if (!UNK_0xEAE0D21A50E6C7F4(bVar0, 22))
				{
					UNK_0x5D96D8530B3D0904(&bVar0, 22);
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&bVar0, 23);
				}
				func_272(1190, bVar0, -1, 1, 0);
				UNK_0x5D96D8530B3D0904(&bLocal_282, 13);
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&bLocal_282, 13);
			}
		}
	}
}

void func_446(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_447(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;

	Var0 = -86015135;
	Var0.f_1 = UNK_0xD803B885F5E47A62();
	Var0.f_2 = iParam1;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam0;
	Var0.f_3 = iParam2;
	if (!bParam0 == 0)
	{
		UNK_0xFB061A86A7AC749F(1, &Var0, 6, bParam0);
	}
}

int func_448(bool bParam0)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;

	bVar1 = bLocal_1206;
	if (UNK_0x437347B10A200C4B(bVar1, 0))
	{
		return 0;
	}
	iVar2 = UNK_0x7087E053058E9F6C(UNK_0x134B62B726CEC8E6(bVar1));
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		bVar5 = (iVar3 - 1);
		if (!UNK_0xBBA8A868118C90ED(bVar1, bVar5, 0))
		{
			bVar4 = UNK_0x83FACCC48B68F9D1(UNK_0xA30B8362589C124A(bVar1, bVar5, 0));
			if (bVar4 != func_5() && func_143(bVar4, 1, 1))
			{
				if (!Local_152.f_28 == bVar4 || bParam0)
				{
					UNK_0x5D96D8530B3D0904(&uVar0, bVar4);
				}
			}
		}
		iVar3++;
	}
	return uVar0;
}

bool func_449()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;

	bVar3 = bLocal_1206;
	if (UNK_0x437347B10A200C4B(bVar3, 0))
	{
		return false;
	}
	vVar4 = { UNK_0x68F4C0EC296D3901(bVar3, true) };
	bVar2 = false;
	while (bVar2 < 32)
	{
		bVar0 = UNK_0x117658E336116132(bVar2);
		if (func_143(bVar0, 1, 1))
		{
			bVar1 = UNK_0x9539D44F3E4492F6(bVar0);
			if (!UNK_0x437347B10A200C4B(bVar1, 0))
			{
				vVar7 = { UNK_0x68F4C0EC296D3901(bVar1, true) };
				if (SYSTEM::VDIST(vVar7, vVar4) < 30f)
				{
					if (UNK_0xC42A92762C58E1B9(bVar1, bVar3, 1))
					{
						if (!UNK_0x82CCEAB29E9451DD(bVar1, bVar3))
						{
							return true;
						}
					}
				}
			}
		}
		bVar2++;
	}
	return false;
}

bool func_450()
{
	return func_246(5, -1) > 0;
}

int func_451(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

bool func_452(int iParam0, int iParam1)
{
	if (UNK_0x798A3F1296751F46())
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (func_361())
		{
			return false;
		}
	}
	if (func_157())
	{
		return false;
	}
	if (iParam1 == 1)
	{
		if (func_142(0))
		{
			return false;
		}
	}
	if (func_91(8, -1))
	{
		return false;
	}
	if (UNK_0x1A72D8C9F025E5E3())
	{
		return false;
	}
	if (func_39())
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

void func_453()
{
	bool bVar0;

	if (!UNK_0xEAE0D21A50E6C7F4(vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_1, 7))
	{
		bVar0 = false;
		if (UNK_0x91E3F625EF57450D(0))
		{
			if (UNK_0x7FEE810EE9E768EB(0, 22))
			{
				bVar0 = true;
			}
		}
		else if (UNK_0x7FEE810EE9E768EB(0, 99) || UNK_0x7FEE810EE9E768EB(0, 100))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (!func_357())
			{
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			if (((((((!func_149(bLocal_1206) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_1206, 0)) && UNK_0xA30B8362589C124A(bLocal_1206, false, 0) != UNK_0x16F2683693E537C9()) && UNK_0x9C66D99E63E8E24C(bLocal_1206) < 10f) && UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), -275944640) != 1) && UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), -275944640) != 0) && func_452(1, 1)) && UNK_0xEE9925602B29903C(bLocal_1206) < 40f)
			{
				if (func_118(&uLocal_1184, 275, 0))
				{
					UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
					UNK_0xEFBEAE5C5E6284B3(UNK_0x16F2683693E537C9(), 1092616192 /* Float: 10f */);
					UNK_0x5D96D8530B3D0904(&(vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_1), 7);
				}
			}
			else if (func_267(&uLocal_1184))
			{
				func_141(&uLocal_1184);
			}
		}
		else if (func_267(&uLocal_1184))
		{
			func_141(&uLocal_1184);
		}
	}
}

void func_454()
{
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_282, 12))
	{
		Global_1573980 = 1;
		UNK_0x5D96D8530B3D0904(&bLocal_282, 12);
	}
}

void func_455()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_283))
	{
		UNK_0x142CC44DB769B57E(&iLocal_283);
	}
}

void func_456()
{
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_282, 12))
	{
		Global_1573980 = 0;
		UNK_0x0674E58A79778E99(&bLocal_282, 12);
	}
}

void func_457()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if (((((func_143(UNK_0xD803B885F5E47A62(), 1, 1) && UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_1206, 15f, 15f, 5f, 0, 1, 0)) && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) && UNK_0x9C66D99E63E8E24C(bLocal_1206) < 5f) && !func_458(bLocal_1206, 0)) && func_452(1, 0))
	{
		UNK_0x5D96D8530B3D0904(&bLocal_282, 2);
		if (UNK_0xEAE0D21A50E6C7F4(vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_1, false))
		{
			func_439(&iVar0, &iVar1, &uVar2, &uVar3, 0);
			if (((iVar1 > 28 || iVar1 < -28) || iVar0 > 28) || iVar0 < -28)
			{
				if (iLocal_288 == 0)
				{
					SYSTEM::SETTIMERA(0);
					iLocal_288 = 1;
				}
			}
			else
			{
				iLocal_288 = 0;
			}
			if (iLocal_288 == 1)
			{
				if (SYSTEM::TIMERA() > 275)
				{
					if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
						UNK_0x0674E58A79778E99(&(vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_1), false);
						iLocal_288 = 0;
					}
				}
			}
		}
		else
		{
			UNK_0x5D96D8530B3D0904(&bLocal_282, 2);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&bLocal_282, 2);
		if (UNK_0xEAE0D21A50E6C7F4(vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_1, false))
		{
			if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
				iLocal_288 = 0;
			}
			UNK_0x0674E58A79778E99(&(vLocal_185[UNK_0x57270EE11514DC67() /*3*/].f_1), false);
		}
	}
}

bool func_458(bool bParam0, bool bParam1)
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

void func_459()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if (Local_152.f_24 != 4)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_282, 8))
		{
			UNK_0x0674E58A79778E99(&bLocal_282, 8);
		}
	}
	if (!func_148(Local_152.f_4) && !func_149(bLocal_1206))
	{
		if (UNK_0x526BC32A660C89E6(Local_152.f_4) || (!UNK_0x83F012E6200426DB(Local_152.f_4) && UNK_0xBFF81ED3B99522C7()))
		{
			func_478();
			func_477();
			switch (Local_152.f_24)
			{
				case 0:
					break;
				case 1:
					if (UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_152.f_4), -1273030092) != 1 && UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_152.f_4), -1273030092) != 0)
					{
						if (UNK_0xEAE0D21A50E6C7F4(bLocal_282, 4))
						{
							UNK_0x9AFA0796FDCABCD5(UNK_0x1B50683925F00106(Local_152.f_4), bLocal_1206, false, false, Local_152.f_6, 19, 30f, 7.5f, Local_152.f_9, SYSTEM::ROUND(10f), SYSTEM::ROUND(10f), -1f, 8225);
							UNK_0x0674E58A79778E99(&bLocal_282, 17);
						}
					}
					else if (!UNK_0xEAE0D21A50E6C7F4(bLocal_282, 4))
					{
						func_169();
					}
					else if (UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_152.f_4), -1273030092) == 1)
					{
						if (Local_152.f_9 > -1f)
						{
							if (UNK_0x5A91F08DF773C39D(UNK_0x1B50683925F00106(Local_152.f_4), Local_152.f_6, (7.5f + 5f), (7.5f + 5f), 50f, false, true, 0))
							{
								fVar0 = UNK_0xD9522BA9E27E1349(UNK_0x1B50683925F00106(Local_152.f_4));
								fVar1 = (fVar0 - Local_152.f_9);
								if (fVar1 < 0f)
								{
									fVar1 = (fVar1 + 360f);
								}
								if (fVar1 > 180f)
								{
									fVar1 = (360f - fVar1);
								}
							}
						}
					}
					break;
				case 2:
					if (iLocal_992 != 2)
					{
						func_169();
						iLocal_992 = 2;
					}
					if (UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_152.f_4), -1273030092) != 1 && UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_152.f_4), -1273030092) != 0)
					{
						UNK_0x9AFA0796FDCABCD5(UNK_0x1B50683925F00106(Local_152.f_4), bLocal_1206, false, false, Local_152.f_10, 4, 30f, 7.5f, -1f, 40, 40, -1f, 0);
					}
					break;
				case 3:
					break;
				case 4:
					if (iLocal_992 != 4)
					{
						if (iLocal_992 != 3)
						{
							func_169();
						}
						if (iLocal_992 == 3)
						{
							Local_152.f_20 = { UNK_0x68F4C0EC296D3901(bLocal_1206, true) };
						}
						else
						{
							Local_152.f_20 = { 0f, 0f, 0f };
						}
						iLocal_992 = 4;
					}
					else if (SYSTEM::VMAG(Local_152.f_20) > 0f)
					{
						if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bLocal_1206, true), Local_152.f_20) > 10f)
						{
							if (UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_152.f_4), -1273030092) != 1 && UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_152.f_4), -1273030092) != 0)
							{
								UNK_0x9AFA0796FDCABCD5(UNK_0x1B50683925F00106(Local_152.f_4), bLocal_1206, false, false, Local_152.f_20, 4, 30f, 7.5f, -1f, 40, 40, -1f, 0);
							}
						}
					}
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_282, 8) && UNK_0xEAE0D21A50E6C7F4(Local_152.f_1, 14))
					{
						if (func_263())
						{
							if (func_156())
							{
								func_117(&uLocal_997, 3, UNK_0x1B50683925F00106(Local_152.f_4), "FM_Pilot", 0, 1);
								if (!bLocal_184)
								{
									func_262(&uLocal_997, "CT_AUD", "MPCT_HPidle", 12, 0, 0, 1);
								}
								else
								{
									func_476(&uLocal_997, "CT_AUD", "MPCT_HPidle", "MPCT_HPidle_06", 12, 0, 0);
								}
							}
							else
							{
								func_12(1);
								func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
								if (!bLocal_184)
								{
									func_100(&uLocal_997, "EXHELAU", "EXHEL_IDLE", 12, 0, 0, 1);
								}
								else
								{
									func_475(&uLocal_997, "EXHELAU", "EXHEL_IDLE", "EXHEL_IDLE_02", 12, 0, 0);
								}
							}
							UNK_0x5D96D8530B3D0904(&bLocal_282, 8);
						}
					}
					break;
				case 5:
					if (!UNK_0xAFE0D3608EDA7039(bLocal_1206))
					{
						UNK_0x0C8A454B494DAA0D(bLocal_1206);
					}
					if (UNK_0xEAE0D21A50E6C7F4(bLocal_282, 15))
					{
						func_440();
					}
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_282, 14))
					{
						if (iLocal_992 != 5)
						{
							func_169();
							iLocal_992 = 5;
						}
						if (UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_152.f_4), -1273030092) != 1 && UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_152.f_4), -1273030092) != 0)
						{
							UNK_0x9AFA0796FDCABCD5(UNK_0x1B50683925F00106(Local_152.f_4), bLocal_1206, false, false, Local_152.f_29, 4, 30f, 7.5f, -1f, 40, 40, -1f, 0);
						}
						if (func_474() && UNK_0xEAE0D21A50E6C7F4(Local_152.f_1, 15))
						{
							if (UNK_0xAFE0D3608EDA7039(bLocal_1206))
							{
								UNK_0x1E9649458B15960F(bLocal_1206, true);
								func_169();
								if (iLocal_124 == -1)
								{
									if (UNK_0xEAE0D21A50E6C7F4(bLocal_282, 19))
									{
										iVar2 = UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), iLocal_1191);
										if (iVar2 > 10000)
										{
											UNK_0x5D29A7ED2621B332();
											iLocal_1191 = UNK_0x2B6E0A53779D29EA();
										}
									}
									else
									{
										iLocal_1191 = UNK_0x2B6E0A53779D29EA();
										UNK_0x5D96D8530B3D0904(&bLocal_282, 19);
									}
									if (func_462(Local_152.f_29, 0f, 1, 0, 0, 0, 1, 0, 1, 0, 0))
									{
										UNK_0x5D96D8530B3D0904(&bLocal_282, 14);
										UNK_0x0674E58A79778E99(&bLocal_282, 19);
										if (iLocal_124 == -1 && !func_280(Local_152.f_5))
										{
											UNK_0x1E9649458B15960F(bLocal_1206, false);
											UNK_0x20641932E5104B25(bLocal_1206, true, 0);
											UNK_0x71EDC33E5A423750(bLocal_1206, 1);
											Local_152.f_23 = 5;
											func_169();
										}
									}
								}
								else if (iLocal_124 > -1)
								{
									UNK_0x1E9649458B15960F(bLocal_1206, false);
									UNK_0x20641932E5104B25(bLocal_1206, true, 0);
									UNK_0x71EDC33E5A423750(bLocal_1206, 1);
									Local_152.f_23 = 5;
									func_169();
								}
							}
						}
					}
					break;
				case 7:
					func_144();
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_282, 9))
					{
						if (func_263())
						{
							if (func_156())
							{
								func_117(&uLocal_997, 3, UNK_0x1B50683925F00106(Local_152.f_4), "FM_Pilot", 0, 1);
								func_262(&uLocal_997, "CT_AUD", "MPCT_HPwrn2", 12, 0, 0, 1);
							}
							else
							{
								func_117(&uLocal_997, 2, UNK_0x1B50683925F00106(Local_152.f_4), "EXEC_PILOT", 0, 1);
								func_100(&uLocal_997, "EXHELAU", "EXHEL_FORCED", 12, 0, 0, 1);
							}
							UNK_0x71EDC33E5A423750(bLocal_1206, 2);
							UNK_0x5D96D8530B3D0904(&bLocal_282, 9);
						}
					}
					break;
				case 8:
					if (!UNK_0xC18DDE8EA6E48FDB(bLocal_1206))
					{
						func_144();
						if (UNK_0x2720E241B5CCF780(bLocal_1206) > 0)
						{
							if (!func_148(Local_152.f_4))
							{
								if (!UNK_0x437347B10A200C4B(bLocal_1206, 0))
								{
									if (!func_259())
									{
										UNK_0x78ADC381772E3D54(UNK_0x1B50683925F00106(Local_152.f_4), iLocal_285);
										if (UNK_0xE9F78D191AD5EDBA(Local_152.f_3))
										{
											func_461(&(Local_152.f_3));
										}
										if (func_273())
										{
											func_460(0);
										}
										if (UNK_0xE9F78D191AD5EDBA(Local_152.f_4))
										{
											func_461(&(Local_152.f_4));
										}
									}
								}
							}
						}
						else if (!func_148(Local_152.f_4))
						{
							if (!UNK_0x437347B10A200C4B(bLocal_1206, 0))
							{
								UNK_0x78ADC381772E3D54(UNK_0x1B50683925F00106(Local_152.f_4), iLocal_286);
								UNK_0x11AD11297DC58CC7(UNK_0x1B50683925F00106(Local_152.f_4), true);
								if (UNK_0xE9F78D191AD5EDBA(Local_152.f_3))
								{
									func_461(&(Local_152.f_3));
								}
								if (func_273())
								{
									func_460(0);
								}
								if (UNK_0xE9F78D191AD5EDBA(Local_152.f_4))
								{
									func_461(&(Local_152.f_4));
								}
							}
						}
					}
					return;
			}
		}
		if (func_143(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_1206, 0))
			{
				switch (Local_152.f_24)
				{
					case 7:
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_282, 10))
						{
							iVar3 = 0;
							while (iVar3 < UNK_0xD6DF381716822EFE(bLocal_1206) + 1)
							{
								bVar4 = UNK_0xA30B8362589C124A(bLocal_1206, (iVar3 - 1), 0);
								if (bVar4 != 0)
								{
									if (!UNK_0xEB6A8945D1AC98A1(bVar4))
									{
										if (UNK_0x34BFC6F0CB887BC2(bVar4))
										{
											func_145(func_132(UNK_0x83FACCC48B68F9D1(bVar4)), 0, 0f, 0, 0, 0, -1);
										}
									}
								}
								iVar3++;
							}
							UNK_0x5D96D8530B3D0904(&bLocal_282, 10);
						}
						break;
				}
			}
		}
	}
}

void func_460(int iParam0)
{
	if (UNK_0xC844350D5D58C99A(Global_2537071.f_301))
	{
		Global_2537071.f_5914 = 1;
		Global_2537071.f_5915 = iParam0;
	}
}

void func_461(var uParam0)
{
	bool bVar0;

	if (UNK_0xE5DBF9B6126856CA(*uParam0))
	{
		bVar0 = UNK_0xA5FBBC2F619A4DE2(*uParam0);
		UNK_0x82692E8F6A0D7A22(&bVar0);
	}
}

bool func_462(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, float fParam12)
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;

	Global_22211.f_6 = 1;
	if (Global_2439138.f_1233 && Global_2439138.f_1241)
	{
		func_470(0, bParam9);
		return true;
	}
	if (UNK_0x991B1F0980C62628() && !bParam9)
	{
		if (Global_2439138.f_1233)
		{
			func_470(0, bParam9);
		}
		return false;
	}
	if ((UNK_0xEB880D98B5988D0C() && !bParam9) && !UNK_0x0C2635BB5127C8FB())
	{
		return false;
	}
	if (!func_469())
	{
		if (func_468(UNK_0xD803B885F5E47A62(), 1, 0) && !(func_467() || func_466()))
		{
			if (((bParam9 && func_143(UNK_0xD803B885F5E47A62(), 1, 0)) && UNK_0x991B1F0980C62628()) && Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_222 == 1)
			{
			}
			else if (func_411() == 28)
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
			if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2439138.f_1239) < func_465(0))
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
				func_464(0);
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
				func_470(bParam6, bParam9);
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
			if (func_463(&(Global_2439138.f_1240), vParam0, bParam3, bVar0))
			{
				func_470(bParam6, bParam9);
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
					func_470(bParam6, bParam9);
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
				func_470(bParam6, bParam9);
				return true;
			}
		}
	}
	return false;
}

bool func_463(var uParam0, vector3 vParam1, bool bParam4, bool bParam5)
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

void func_464(int iParam0)
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

int func_465(bool bParam0)
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

bool func_466()
{
	return ((UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_30, 12) && UNK_0xEAE0D21A50E6C7F4(Global_1695469, 12)) && Global_1695468 == 8);
}

bool func_467()
{
	return (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_30, 12) && UNK_0xEAE0D21A50E6C7F4(Global_1695469, false));
}

bool func_468(int iParam0, bool bParam1, bool bParam2)
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

bool func_469()
{
	return Global_1312854;
}

void func_470(bool bParam0, bool bParam1)
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
	func_473();
	if (!UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, 14) && !func_472())
	{
		func_471();
	}
}

void func_471()
{
	Global_2546219.f_82 = 1;
}

bool func_472()
{
	if (!UNK_0xA14BB9332558B949() && !func_469())
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_238365[0 /*24*/].f_17, false))
	{
		return true;
	}
	return false;
}

void func_473()
{
	vector3 vVar0;

	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

bool func_474()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (!(Global_2460715.f_10 || UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_536, 4)))
	{
		return false;
	}
	bVar1 = Global_2460715.f_21;
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bVar1, bVar0))
		{
			bVar2 = UNK_0x117658E336116132(bVar0);
			if (func_143(bVar2, 1, 1))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Global_1628237[bVar0 /*615*/].f_536, 4))
				{
					return false;
				}
			}
		}
		bVar0++;
	}
	return true;
}

int func_475(var uParam0, bool bParam1, bool bParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_93(uParam0, 145, bParam1, iParam5, iParam6, 0);
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
	return func_84(bParam2, iParam4, 0);
}

int func_476(var uParam0, bool bParam1, bool bParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_93(uParam0, 145, bParam1, iParam5, iParam6, 0);
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
	Global_2621441 = 1;
	return func_84(bParam2, iParam4, 0);
}

void func_477()
{
	if (iLocal_289 == 0)
	{
		iLocal_289 = 1;
	}
}

void func_478()
{
	UNK_0x7352ACF3368DF65F("MobileRadioInGame", 0);
	if (!func_333())
	{
		if (func_143(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bLocal_1206) && !func_362(UNK_0x16F2683693E537C9(), bLocal_1206, -1))
			{
				UNK_0x7352ACF3368DF65F("MobileRadioInGame", 1);
			}
		}
	}
}

void func_479()
{
	if (func_273())
	{
		return;
	}
	if (UNK_0xBFF81ED3B99522C7())
	{
		if (!UNK_0xE4EDC4B0E92C078B(iLocal_283))
		{
			if (!func_149(bLocal_1206))
			{
				iLocal_283 = UNK_0x5C3B41825F6AC5A0(bLocal_1206);
				if (UNK_0xE4EDC4B0E92C078B(iLocal_283))
				{
					UNK_0xBC8E0A7390523199(iLocal_283, 422);
					UNK_0xF2D30B8ACAF12A39(iLocal_283, false);
					UNK_0xDC5B2F9D0CCE3A10(iLocal_283, "HTX_BLIP");
					bLocal_284 = true;
					func_323(&iLocal_283, bLocal_284);
				}
			}
		}
	}
}

void func_480()
{
	int iVar0;

	iVar0 = SYSTEM::ROUND(10f);
	if (!func_149(bLocal_1206))
	{
		UNK_0xDD353D0E9C789D0E(&iLocal_287);
		UNK_0x9AFA0796FDCABCD5(false, bLocal_1206, false, false, Local_152.f_10, 9, 30f, 7.5f, -1f, iVar0, iVar0, -1f, 0);
		UNK_0x75ABDC5F81978924(iLocal_287);
		UNK_0xDD353D0E9C789D0E(&iLocal_286);
		UNK_0x9AFA0796FDCABCD5(false, bLocal_1206, false, false, Local_152.f_17, 9, 30f, 0f, -1f, iVar0 * 2, iVar0 * 2, -1f, 0);
		UNK_0x75ABDC5F81978924(iLocal_286);
		UNK_0xDD353D0E9C789D0E(&iLocal_285);
		UNK_0x75CDA8644CD3B5F5(false, 0, 64);
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
		}
		else
		{
			UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
		}
		UNK_0x75ABDC5F81978924(iLocal_285);
	}
}

int func_481()
{
	return Local_152;
}

int func_482(int iParam0)
{
	return vLocal_185[iParam0 /*3*/];
}

bool func_483()
{
	var uVar0;

	func_490(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_489())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_488())
	{
		return true;
	}
	if (func_487(159))
	{
		if (!func_486())
		{
			return true;
		}
	}
	if (func_487(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_484() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_484()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_484()
{
	switch (func_292())
	{
		case 0:
			return func_485();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_485()
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

bool func_486()
{
	return Global_2450632.f_598;
}

bool func_487(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_488()
{
	return Global_2460680;
}

bool func_489()
{
	return Global_2450632.f_593;
}

void func_490(var uParam0)
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
					func_491(iVar0);
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

void func_491(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_143(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_492(bVar4, &bVar5))
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

bool func_492(bool bParam0, bool bParam1)
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

void func_493()
{
	SYSTEM::WAIT(0);
}

void func_494(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	if (func_162())
	{
		func_161();
	}
	if (bParam0)
	{
		func_455();
	}
	func_456();
	func_261(0);
	if (func_273())
	{
		if (func_499("HTX_HELPN", "GB_HELI_BLIP"))
		{
			UNK_0xA37A90C62806D848(1);
			bVar0 = func_8(1190, -1, 0);
			UNK_0x0674E58A79778E99(&bVar0, 16);
			func_272(1190, bVar0, -1, 1, 0);
		}
		func_12(0);
	}
	else if (func_499("HTX_HELPN", "HTX_HELPB"))
	{
		UNK_0xA37A90C62806D848(1);
		bVar1 = func_8(1190, -1, 0);
		UNK_0x0674E58A79778E99(&bVar1, 16);
		func_272(1190, bVar1, -1, 1, 0);
	}
	if (bParam0)
	{
		if (UNK_0xE9F78D191AD5EDBA(Local_152.f_4) && UNK_0x526BC32A660C89E6(Local_152.f_4))
		{
			if (func_273())
			{
				if (!UNK_0x437347B10A200C4B(UNK_0x1B50683925F00106(Local_152.f_4), 0))
				{
					if (!UNK_0xC42A92762C58E1B9(UNK_0x1B50683925F00106(Local_152.f_4), bLocal_1206, 0))
					{
						func_270(&(Local_152.f_4));
					}
				}
			}
			if (!func_149(bLocal_1206))
			{
				if (!func_148(Local_152.f_4))
				{
					func_480();
					UNK_0x78ADC381772E3D54(UNK_0x1B50683925F00106(Local_152.f_4), iLocal_286);
				}
			}
		}
	}
	if (UNK_0x8CD06866876216F2())
	{
		if (bParam0)
		{
			if (UNK_0xE9F78D191AD5EDBA(Local_152.f_3))
			{
				if (UNK_0x526BC32A660C89E6(Local_152.f_3))
				{
					if (!func_149(bLocal_1206))
					{
						UNK_0x71EDC33E5A423750(bLocal_1206, 1);
					}
					func_461(&(Local_152.f_3));
				}
			}
			if (func_273())
			{
			}
			if (UNK_0xE9F78D191AD5EDBA(Local_152.f_4))
			{
				if (UNK_0x526BC32A660C89E6(Local_152.f_4))
				{
					if (!func_148(Local_152.f_4))
					{
						UNK_0x4E885A246A9D983A(UNK_0x1B50683925F00106(Local_152.f_4), 251, false);
					}
					func_461(&(Local_152.f_4));
				}
			}
		}
		if (!func_333())
		{
			func_497(func_498(1, 1), 13, func_5());
		}
		else
		{
			func_497(func_498(1, 1), 44, func_5());
		}
	}
	func_496();
	if (iLocal_289 == 1)
	{
		iLocal_289 = 0;
	}
	UNK_0xE17FDF9E3068281B(&iLocal_290);
	UNK_0xF3039DE1FDB4F6FD(1);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_836), false);
	Global_2537071.f_260 = 0;
	func_495();
}

void func_495()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_496()
{
	UNK_0xF82EA857DA10E0CD(&iLocal_285);
	UNK_0xF82EA857DA10E0CD(&iLocal_286);
	UNK_0xF82EA857DA10E0CD(&iLocal_287);
}

void func_497(bool bParam0, int iParam1, bool bParam2)
{
	struct<4> Var0;

	Var0 = -770184899;
	Var0.f_1 = UNK_0xD803B885F5E47A62();
	Var0.f_3 = iParam1;
	Var0.f_2 = bParam2;
	if (!bParam0 == 0)
	{
		UNK_0xFB061A86A7AC749F(1, &Var0, 6, bParam0);
	}
}

bool func_498(bool bParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = UNK_0x117658E336116132(bVar1);
		if (func_143(bVar2, 0, 0))
		{
			if (bVar2 != UNK_0xD803B885F5E47A62() || bParam0)
			{
				if (bParam1)
				{
					UNK_0x5D96D8530B3D0904(&uVar0, bVar1);
				}
				else if (!func_306(bVar2, 0))
				{
					UNK_0x5D96D8530B3D0904(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_499(bool bParam0, bool bParam1)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	UNK_0x6B012227B3921E18(bParam1);
	return UNK_0xE3789B9938DCEAE8(0);
}

bool func_500(struct<21> Param0)
{
	func_503(32, Param0);
	UNK_0x0BEC04ECA8485A3A(1);
	UNK_0x28E5F00F131890E3(1);
	func_502(0, -1, 0);
	UNK_0x9752E7BAEABA939E(&Local_152, 32);
	UNK_0x35B62793EAE9ADDF(&vLocal_185, 97);
	if (!func_501())
	{
		return false;
	}
	UNK_0x256D93AFAE851A7A(0);
	if (UNK_0xBFF81ED3B99522C7())
	{
		Local_152.f_5 = UNK_0xD803B885F5E47A62();
		Local_152.f_6 = { UNK_0x68E4ADDDDCD7BDDE(UNK_0x16F2683693E537C9(), 0f, 15f, 0f) };
		Local_152.f_10 = { -346.4007f, 1151.507f, 324.7254f };
		Local_152.f_27 = func_333();
		Local_152.f_28 = func_5();
		UNK_0x5D96D8530B3D0904(&(Global_2537071.f_836), false);
	}
	Global_2460715.f_26 = 0;
	Global_2460715.f_25 = 0;
	UNK_0x0674E58A79778E99(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_536), 4);
	iLocal_991 = UNK_0x09BE1E6DF7B80B43();
	vLocal_185[UNK_0x57270EE11514DC67() /*3*/] = 0;
	return true;
}

bool func_501()
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
		if (func_489())
		{
			return false;
		}
		if (func_487(157))
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

int func_502(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_495();
			}
			else
			{
				return 0;
			}
		}
		if (!func_469())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_495();
					}
					else
					{
						return 0;
					}
				}
				if (func_489())
				{
					if (!bParam2)
					{
						func_495();
					}
					else
					{
						return 0;
					}
				}
				if (func_487(157))
				{
					if (!bParam2)
					{
						func_495();
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
					func_495();
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
				func_495();
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
			func_495();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_503(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!UNK_0x8CD06866876216F2())
	{
		func_495();
	}
	UNK_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

void func_504()
{
	iLocal_1194 = 0;
	func_505(-243.828f, -1461.281f, 30.99f, 279.3385f);
	func_505(139.284f, 311.0571f, 111.1386f, 45.1942f);
	func_505(634.8535f, 141.8226f, 94.2749f, 26.968f);
	func_505(383.2168f, 16.5927f, 90.2992f, 40.5093f);
	func_505(67.2551f, 51.4397f, 72.5151f, 38.4162f);
	func_505(294.1833f, 575.2105f, 152.623f, 304.9259f);
	func_505(933.0354f, 492.7919f, 120.4651f, 3.1259f);
	func_505(-336.8088f, 454.2572f, 110.9638f, 58.2889f);
	func_505(-135.9225f, 615.1293f, 204.3637f, 240.0636f);
	func_505(139.3762f, -250.2123f, 50.426f, 276.1187f);
	func_505(-139.5668f, -443.9992f, 33.1041f, 112.657f);
	func_505(-491.7431f, -144.9858f, 37.8309f, 98.1814f);
	func_505(-645.7263f, 406.0965f, 100.2678f, 272.8684f);
	func_505(-957.0592f, 295.3116f, 68.9958f, 58.8505f);
	func_505(-820.9876f, 876.1653f, 202.1549f, 196.4736f);
	func_505(-1443.188f, 455.4925f, 110.7514f, 296.894f);
	func_505(-1481.404f, 863.1016f, 181.577f, 38.349f);
	func_505(-1646.419f, -195.0848f, 54.2692f, 160.7423f);
	func_505(-1099.93f, -192.9011f, 37.3214f, 299.6116f);
	func_505(-604.6443f, -599.9016f, 33.6806f, 270.5396f);
	func_505(-1471.802f, -853.1879f, 13.2503f, 302.8094f);
	func_505(-2011.161f, -526.2204f, 10.7096f, 28.1469f);
	func_505(-2212.737f, 537.3901f, 164.4195f, 348.0596f);
	func_505(-3025.405f, 338.3629f, 13.6245f, 14.9527f);
	func_505(-1054.36f, -1398.452f, 5.3278f, 253.1757f);
	func_505(-567.387f, -1258.005f, 12.8623f, 8.386f);
	func_505(-964.4938f, -727.4775f, 18.794f, 344.527f);
	func_505(-2429.193f, 1045.141f, 193.7864f, 263.1876f);
	func_505(-3136.545f, 1191.168f, 19.0974f, 220.8899f);
	func_505(-2692.456f, -62.2375f, 15.234f, 39.5592f);
	func_505(-355.8293f, -990.3766f, 28.4949f, 125.2948f);
	func_505(243.7049f, -881.4253f, 29.4921f, 297.8129f);
	func_505(453.4193f, -380.5279f, 45.6676f, 357.5639f);
	func_505(936.8099f, -553.545f, 58.3693f, 263.5811f);
	func_505(770.1622f, -233.1951f, 65.1145f, 243.3845f);
	func_505(1134.113f, 353.7328f, 90.4476f, 351.5361f);
	func_505(1864.741f, 259.8708f, 162.1022f, 225.713f);
	func_505(1558.889f, 879.5532f, 76.4596f, 359.376f);
	func_505(337.4946f, 985.814f, 209.7682f, 69.9473f);
	func_505(870.984f, 968.8524f, 238.3209f, 35.1108f);
	func_505(2599.014f, 415.1773f, 107.7289f, 186.8054f);
	func_505(2547.611f, -579.5625f, 64.2137f, 161.9321f);
	func_505(1886.246f, -741.1049f, 82.6813f, 287.8844f);
	func_505(1455.893f, -1498.703f, 63.6557f, 173.4564f);
	func_505(1161.785f, -1076.126f, 40.4823f, 247.4221f);
	func_505(1394.804f, -734.3683f, 66.2226f, 115.9829f);
	func_505(1167.93f, -150.3837f, 55.5932f, 167.958f);
	func_505(2455.5f, 1014.216f, 83.1307f, 14.3078f);
	func_505(2530.339f, 1633.237f, 28.3235f, 234.752f);
	func_505(1951.904f, 1645.648f, 71.2406f, 260.0168f);
	func_505(2806.778f, -815.1143f, 5.7198f, 81.9638f);
	func_505(1806.947f, -1290.593f, 95.0351f, 331.8087f);
	func_505(1678.681f, -1952.281f, 111.666f, 80.8951f);
	func_505(1292.103f, -3186.505f, 4.9064f, 359.7118f);
	func_505(740.4905f, -3028.477f, 7.562f, 312.5958f);
	func_505(559.4196f, -2593.408f, 5.0368f, 291.8598f);
	func_505(877.3129f, -2437.455f, 27.3458f, 83.4984f);
	func_505(1212.66f, -2098.225f, 43.5962f, 332.4854f);
	func_505(797.2423f, -1599.807f, 30.2847f, 164.9429f);
	func_505(827.6533f, -1980.338f, 28.299f, 10.749f);
	func_505(373.2801f, -2133.071f, 15.2922f, 150.4032f);
	func_505(617.6802f, -1064.3f, 9.3075f, 179.8157f);
	func_505(296.5454f, -1341.473f, 42.7533f, 230.0817f);
	func_505(-174.3653f, -2548.709f, 5.0163f, 198.7499f);
	func_505(215.9285f, -2903.652f, 6.6886f, 151.951f);
	func_505(314.6187f, -1679.352f, 28.1261f, 72.5752f);
	func_505(1408.015f, -2623.801f, 45.1502f, 312.7456f);
	func_505(-379.9112f, -1774.544f, 20.0649f, 13.9162f);
	func_505(96.5893f, -2001.965f, 18.844f, 147.396f);
	func_505(-729.8096f, -1777.493f, 28.0263f, 61.8742f);
	func_505(-971.1151f, -1868.092f, 18.9378f, 33.2574f);
	func_505(-720.1935f, -2557.545f, 12.9387f, 18.6712f);
	func_505(-1335.482f, -2677.121f, 12.9449f, 187.4991f);
	func_505(-878.3446f, -2968.556f, 12.9471f, 331.5428f);
	func_505(-1005.327f, -2232.398f, 8.0032f, 92.8891f);
	func_505(-401.2441f, -2284.453f, 6.6082f, 2.3971f);
	func_505(-1454.813f, -1471.849f, 1.1336f, 242.0199f);
	func_505(821.5599f, 1298.328f, 362.9729f, 262.7468f);
	func_505(-449.7726f, 1586.159f, 358.0207f, 239.931f);
	func_505(-348.6263f, 1156.363f, 324.5158f, 54.5644f);
	func_505(-827.162f, 1686.859f, 194.2108f, 236.4414f);
	func_505(-184.5484f, 1923.192f, 196.6049f, 206.5246f);
	func_505(296.1962f, 1771.646f, 227.0542f, 310.265f);
	func_505(1052.903f, 1495.316f, 174.8349f, 205.154f);
	func_505(-1532.131f, 1396.502f, 122.7763f, 352.1764f);
	func_505(-2604.194f, 1675.818f, 138.9021f, 166.6577f);
	func_505(-1513.824f, 2166.168f, 54.0724f, 251.5786f);
	func_505(-1697.408f, 2456.897f, 29.418f, 101.049f);
	func_505(-2819.858f, 2253.055f, 28.6358f, 169.9338f);
	func_505(-3043.554f, 1477.634f, 27.3241f, 179.9691f);
	func_505(-2381.452f, 2830.405f, 2.372f, 76.3996f);
	func_505(-2993.669f, 3335.124f, 9.2207f, 46.6226f);
	func_505(-1789.875f, 2675.004f, 2.4478f, 318.05f);
	func_505(-1596.024f, 2950.032f, 32.0914f, 221.481f);
	func_505(-1099.969f, 2850.755f, 12.8854f, 317.9454f);
	func_505(55.8239f, 3338.571f, 35.6469f, 165.2648f);
	func_505(173.2043f, 2293.298f, 92.1495f, 208.7343f);
	func_505(-468.6477f, 2994.032f, 26.1288f, 96.4423f);
	func_505(-1212.968f, 2599.15f, 14.572f, 277.3627f);
	func_505(-177.6004f, 2945.426f, 29.6345f, 344.5758f);
	func_505(-270.1975f, 2661.462f, 59.8035f, 190.3861f);
	func_505(-767.441f, 2284.18f, 76.413f, 331.6507f);
	func_505(578.2679f, 2798.182f, 41.1427f, 308.8694f);
	func_505(388.2008f, 3525.706f, 32.9f, 242.16f);
	func_505(1228.046f, 3612.758f, 32.4634f, 303.8293f);
	func_505(1060.165f, 3042.599f, 40.6158f, 329.9008f);
	func_505(845.1221f, 2207.164f, 49.9157f, 40.9634f);
	func_505(1281.185f, 2665.227f, 36.6537f, 44.0714f);
	func_505(2137.185f, 2961.237f, 45.9129f, 273.7183f);
	func_505(2052.815f, 3319.029f, 44.7859f, 127.0919f);
	func_505(1959.709f, 3775.369f, 31.2029f, 88.7083f);
	func_505(2500.937f, 4153.028f, 37.2878f, 204.7804f);
	func_505(2730.682f, 3415.967f, 55.7151f, 278.4684f);
	func_505(2936.23f, 4437.92f, 47.4218f, 323.2516f);
	func_505(3636.311f, 3765.969f, 27.5157f, 51.549f);
	func_505(2532.664f, 2686.917f, 40.7205f, 249.7434f);
	func_505(2157.111f, 1974.473f, 93.7061f, 22.0171f);
	func_505(1499.479f, 1827.166f, 106.4998f, 42.618f);
	func_505(2895.405f, 3888.189f, 52.0109f, 213.3904f);
	func_505(1639.252f, 3852.798f, 33.7036f, 277.8739f);
	func_505(16.3756f, 3623.829f, 39.0889f, 138.8624f);
	func_505(-202.3551f, 4176.263f, 42.1762f, 357.9106f);
	func_505(378.6819f, 4405.726f, 61.3992f, 2.2521f);
	func_505(763.3045f, 4180.816f, 39.6263f, 313.7911f);
	func_505(1410.916f, 4363.65f, 41.6243f, 351.9106f);
	func_505(2474.189f, 4460.482f, 34.2448f, 338.6556f);
	func_505(2787.091f, 4896.004f, 35.5118f, 346.5345f);
	func_505(3787.385f, 4446.902f, 3.6951f, 322.4305f);
	func_505(3283.627f, 5161.83f, 17.7122f, 120.0761f);
	func_505(2444.642f, 5016.759f, 45.2854f, 256.7558f);
	func_505(2071.367f, 4807.796f, 40.6377f, 147.898f);
	func_505(2012.781f, 5129.742f, 44.5825f, 92.6079f);
	func_505(1710.641f, 4657.467f, 42.4848f, 108.8281f);
	func_505(2498.991f, 5641.692f, 45.6963f, 48.9642f);
	func_505(2250.176f, 5968.912f, 49.0116f, 15.0599f);
	func_505(1853.773f, 6404.851f, 45.2075f, 116.4965f);
	func_505(866.8867f, 6512.98f, 20.7883f, 248.893f);
	func_505(205.2754f, 7012.687f, 1.0453f, 196.8449f);
	func_505(-212.0001f, 6565.548f, 9.8635f, 152.7291f);
	func_505(-573.4517f, 6167.307f, 5.3904f, 302.589f);
	func_505(206.7901f, 6402.567f, 30.3805f, 81.5939f);
	func_505(-731.3629f, 5800.728f, 16.5887f, 196.4081f);
	func_505(-664.7944f, 5460.415f, 49.6868f, 157.5173f);
	func_505(-601.0768f, 5294.568f, 69.2145f, 27.8272f);
	func_505(-532.1605f, 4971.026f, 146.1112f, 172.7688f);
	func_505(-1546.969f, 5010.706f, 64.4016f, 255.285f);
	func_505(-2170.899f, 4459.51f, 61.8337f, 141.4564f);
	func_505(-2504.334f, 3627.644f, 12.7211f, 175.0945f);
	func_505(-1216.204f, 4457.368f, 29.5562f, 16.7363f);
	func_505(797.6583f, 5704.728f, 697.4423f, 102.9245f);
	func_505(159.5193f, 5212.952f, 572.7617f, 303.589f);
	func_505(2867.312f, 5944.487f, 356.7372f, 56.172f);
	func_505(10.6515f, 6334.516f, 30.2366f, 336.7196f);
	func_505(1472.189f, 6359.462f, 22.7034f, 289.4279f);
	func_505(-618.1378f, 3993.369f, 120.0915f, 212.0991f);
	func_505(-885.1862f, 4428.847f, 19.9719f, 90.7754f);
	func_505(215.323f, 7381.881f, 13.4278f, 203.1559f);
	func_505(3635.046f, 5669.953f, 7.7871f, 32.6794f);
	func_505(3646.407f, 4997.506f, 11.2006f, 19.0908f);
	func_505(3546.356f, 2523.698f, 5.4951f, 29.0676f);
	func_505(2193.448f, 5574.355f, 52.7895f, 268.6339f);
	func_505(-2165.357f, 5170.346f, 13.5525f, 39.8589f);
	func_505(-1606.75f, 4742.162f, 52.9203f, 53.6989f);
	func_505(-945.4f, 4611.085f, 237.932f, 276.5363f);
	func_505(-2415.631f, 4221.8f, 8.7558f, 303.5893f);
	func_505(809.2775f, 3227.627f, 37.6705f, 234.2991f);
	func_505(1101.399f, 3436.295f, 32.8756f, 310.4154f);
	func_505(1691.926f, 3486.635f, 35.8127f, 339.3695f);
	func_505(2407.986f, 3537.302f, 72.5395f, 355.4901f);
	func_505(3051.449f, 2725.313f, 62.3978f, 331.4178f);
	func_505(2527.302f, 2009.074f, 18.9235f, 346.0563f);
	func_505(1840.181f, 2499.208f, 44.7693f, 301.6813f);
	func_505(1787.824f, 3067.684f, 61.2278f, 70.872f);
	func_505(1382.367f, 3003.334f, 39.7661f, 340.408f);
	func_505(244.4017f, 2637.836f, 44.6054f, 240.1419f);
	func_505(-251.8209f, 2205.487f, 128.884f, 195.6026f);
	func_505(-541.051f, 2005.346f, 202.3307f, 274.6922f);
	func_505(-2039.825f, 1960.994f, 187.7879f, 312.9809f);
	func_505(-1603.197f, 237.8279f, 58.3225f, 263.857f);
	func_505(-1724.508f, -2970.292f, 13.1465f, 4.1473f);
	func_505(1192.917f, 1839.359f, 77.4385f, 170.34f);
	func_505(3300.137f, -99.0274f, 11.6522f, 185.3741f);
	func_505(2849.717f, -1461.166f, 12.5068f, 52.3716f);
	func_505(2306.17f, -2118.141f, 2.322f, 18.5464f);
	func_505(2163.642f, 135.7375f, 226.6112f, 117.1583f);
	func_505(2527.796f, -90.4654f, 93.1274f, 110.8862f);
	func_505(1774.983f, 1676.629f, 78.209f, 142.8201f);
	func_505(1623.241f, 1265.085f, 86.7423f, 134.636f);
	func_505(1732.167f, 2169.269f, 82.2189f, 350.0135f);
	func_505(2167.046f, 1339.68f, 74.7227f, 32.7734f);
	func_505(712.9243f, 1727.998f, 182.7801f, 68.4225f);
	func_505(151.0186f, 1429.878f, 259.7057f, 36.1885f);
	func_505(-1662.585f, 4284.667f, 80.2819f, 23.3258f);
	func_505(-1323.416f, 5349.778f, 2.3383f, 79.3172f);
	func_505(-2294.521f, 2342.52f, 0.2262f, 44.7661f);
	func_505(-892.6975f, 5271.815f, 84.9171f, 112.4479f);
	func_505(470.1919f, 3115.264f, 40.5447f, 77.6964f);
	func_505(-2673.124f, 2957.395f, 7.3939f, 285.1781f);
	func_505(-3192.201f, 815.0291f, 2.7957f, 260.1565f);
	func_505(945.9874f, -3277.793f, 4.8982f, 266.6732f);
	func_505(126.3235f, -1658.512f, 32.9414f, 28.4566f);
	func_505(1144.835f, -1688.646f, 35.1291f, 6.0452f);
	func_505(944.4474f, -1369.549f, 12.3266f, 314.3879f);
	func_505(937.8714f, -896.6146f, 49.0496f, 179.602f);
	func_505(-50.8218f, -894.3738f, 40.4824f, 157.0664f);
	func_505(-1159.234f, -1111.134f, 8.7345f, 300.7512f);
	func_505(-1729.466f, -972.845f, 5.2263f, 14.1883f);
	func_505(-251.1976f, 310.9189f, 96.5312f, 177.6596f);
	func_505(-261.0635f, 192.8841f, 84.9561f, 104.3934f);
	func_505(-769.5164f, -1996.682f, 7.8903f, 136.2945f);
	func_505(-1345.348f, -2123.383f, 12.9441f, 145.1976f);
	func_505(576.7401f, -657.0758f, 12.5207f, 347.7486f);
	func_505(2640.831f, 3200.896f, 52.1493f, 273.1668f);
	func_505(1995.588f, -925.1763f, 78.0824f, 77.8221f);
	func_505(-500.2817f, -2111.103f, 8.9576f, 132.9903f);
	func_505(-725.0269f, -2355.187f, 14.8438f, 227.8691f);
	func_505(-980.7766f, -2488.198f, 14.0523f, 150.2897f);
	func_505(-1127.178f, -1696.759f, 4.2742f, 29.4122f);
	func_505(-1212.316f, -1338.762f, 4.4687f, 109.8316f);
	func_505(-1373.831f, -1274.4f, 4.6296f, 28.0177f);
	func_505(-1531.726f, -1037.846f, 5.8012f, 226.8082f);
	func_505(-1243.753f, -963.8779f, 3.2555f, 82.051f);
	func_505(-1161.864f, -725.671f, 20.534f, 37.0823f);
	func_505(-1071.658f, -863.8865f, 4.7704f, 302.8431f);
	func_505(-869.8373f, -894.2067f, 15.7782f, 195.2182f);
	func_505(-847.3995f, -1198.361f, 5.8987f, 224.6693f);
	func_505(-59.1982f, 1031.608f, 233.5404f, 342.8009f);
	func_505(-498.3894f, -950.4281f, 23.8303f, 170.6251f);
	func_505(-668.458f, -451.6636f, 35.9803f, 263.7879f);
	func_505(-538.0801f, -255.6042f, 36.4835f, 28.044f);
	func_505(-674.919f, -35.9837f, 39.1f, 107.0653f);
	func_505(-957.8153f, -347.7798f, 38.5257f, 296.3945f);
	func_505(-1399.278f, 122.7592f, 54.9624f, 179.943f);
	func_505(-1259.903f, 600.5897f, 139.911f, 307.5361f);
	func_505(-1161.234f, 931.7809f, 198.3958f, 312.1524f);
	func_505(-929.2317f, 1127.948f, 220.3745f, 192.5778f);
	func_505(-625.6737f, 979.0534f, 241.17f, 105.5179f);
	func_505(-281.6504f, 736.922f, 208.7457f, 201.0901f);
	func_505(-799.7258f, 575.9078f, 125.8626f, 200.7426f);
	func_505(-111.9565f, 1361.998f, 311.2291f, 309.7981f);
	func_505(161.9947f, 742.2007f, 207.3627f, 24.4887f);
	func_505(-591.4622f, -1443.56f, 11.0649f, 55.8083f);
	func_505(48.3094f, -1466.97f, 34.0209f, 46.3598f);
	func_505(573.138f, -903.282f, 10.653f, 359.9055f);
	func_505(444.6478f, -584.4781f, 28.4022f, 263.8702f);
	func_505(590.5396f, -128.7431f, 72.7058f, 324.8725f);
	func_505(633.0765f, -1477.419f, 9.6378f, 13.7451f);
	func_505(567.5936f, -2316.353f, 5.8157f, 358.2805f);
	func_505(154.683f, -2406.677f, 5.9026f, 356.73f);
	func_505(-407.8167f, -2742.427f, 6.6763f, 192.47f);
	func_505(77.3055f, -2723.974f, 5.9071f, 269.1819f);
	func_505(664.1844f, -2986.192f, 5.9477f, 169.3143f);
	func_505(1015.701f, -2310.8f, 30.4119f, 351.451f);
	func_505(1105.497f, -1903.685f, 37.37f, 141.7318f);
	func_505(1397.402f, -2375.49f, 63.0531f, 356.6557f);
	func_505(1675.434f, -1547.791f, 112.5916f, 343.2593f);
	func_505(1454.21f, -1000.43f, 48.8159f, 85.0815f);
	func_505(2183.739f, -582.2708f, 96.7788f, 309.7693f);
	func_505(2543.149f, 142.0665f, 99.4934f, 165.3156f);
	func_505(2596.192f, 751.3882f, 91.457f, 196.0535f);
	func_505(2603.688f, 1235.993f, 44.3592f, 176.2542f);
	func_505(2122.656f, 2778.532f, 50.0208f, 309.4357f);
	func_505(2396.602f, 3264.547f, 48.7285f, 214.5686f);
	func_505(2322.511f, 3893.286f, 34.9455f, 312.4513f);
	func_505(581.2474f, 778.2208f, 201.9709f, 228.6589f);
	func_505(1118.769f, 790.2458f, 149.7879f, 327.737f);
	func_505(1312.517f, 1248.61f, 106.7748f, 356.9769f);
	func_505(1309.661f, 1537.113f, 96.2337f, 6.4865f);
	func_505(1062.127f, 2084.489f, 52.5033f, 26.2563f);
	func_505(1521.927f, 2010.445f, 99.3948f, 355.0577f);
	func_505(1370.713f, 2313.501f, 79.9254f, 33.3623f);
	func_505(907.667f, 2678.261f, 40.7875f, 261.5676f);
	func_505(699.3987f, 2441.128f, 61.3254f, 209.2828f);
	func_505(436.9572f, 2382.852f, 50.022f, 322.7864f);
	func_505(439.7385f, 2086.472f, 100.9622f, 336.0373f);
	func_505(-628.1458f, 2815.875f, 36.9998f, 300.3421f);
	func_505(-1374.838f, 2402.95f, 30.041f, 288.2213f);
	func_505(-1845.524f, -708.1555f, 9.1302f, 227.8206f);
	func_505(-2441.261f, -319.8737f, 3.6674f, 231.7609f);
	func_505(-2994.104f, 21.4889f, 7.8942f, 241.8965f);
	func_505(-2825.43f, 1423.209f, 100.6655f, 175.2131f);
	func_505(-3091.066f, 1757.376f, 35.0735f, 174.5508f);
	func_505(-3007.828f, 2099.017f, 40.1434f, 332.562f);
	func_505(-1966.473f, 2473.978f, 1.1161f, 204.7869f);
	func_505(-2281.606f, 3412.213f, 32.0105f, 341.204f);
	func_505(456.3445f, 6699.446f, 7.8774f, 230.5219f);
	func_505(1191.518f, 6560.621f, 2.9303f, 86.2098f);
	func_505(2595.129f, 5402.892f, 41.7871f, 10.6124f);
	func_505(644.2881f, -1840.464f, 9.0907f, 354.3967f);
	func_505(-679.2219f, -1828.494f, 27.7167f, 242.8403f);
	func_505(1054.276f, -1785.81f, 34.5576f, 331.6062f);
	func_505(-86.9453f, -1710.444f, 28.4542f, 178.6759f);
	func_505(81.025f, -1283.182f, 28.2867f, 109.4532f);
	func_505(1276.439f, -1275.396f, 41.116f, 130.9274f);
	func_505(716.5391f, -2255.983f, 28.2272f, 277.8256f);
	func_505(1719.191f, -1655.754f, 111.5146f, 219.6488f);
	func_505(121.7027f, -2965.721f, 6.0714f, 214.9908f);
	func_505(-500.846f, -2111.083f, 8.0609f, 188.9715f);
	func_505(-1196.347f, -2169.974f, 12.195f, 192.0654f);
}

void func_505(vector3 vParam0, float fParam3)
{
	Global_2412643[iLocal_1194 /*3*/] = { vParam0 };
	Global_2413541[iLocal_1194] = fParam3;
	iLocal_1194++;
}

