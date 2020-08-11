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
	vector3 vLocal_45[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_70[1] = {{ 0f, 0f, 0f } };
	bool bLocal_74 = false;
	int iLocal_75[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_82[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_93 = { 0f, 0f, 0f };
	struct<165> Local_96 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	char cLocal_272[16] = "";
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	char cLocal_276[16] = "";
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	vector3 vLocal_280[12] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	char cLocal_317[32] = "";
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 1132396544;
	var uLocal_328 = 1132396544;
	var uLocal_329 = 1132396544;
	var uLocal_330 = 0;
	var uLocal_331 = -1082130432;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 8;
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
	var uLocal_391 = -1;
	var uLocal_392 = 1092616192;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	bool bLocal_395 = false;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = -1;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 1000;
	var uLocal_409 = 1000;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 1097859072;
	var uLocal_415 = 1500;
	var uLocal_416 = 45;
	var uLocal_417 = 1103626240;
	var uLocal_418 = 5;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	int iLocal_425 = 0;
	var uLocal_426 = 0;
	bool bLocal_427 = false;
	float fLocal_428 = 0f;
	float fLocal_429 = 0f;
	float fLocal_430 = 0f;
	float fLocal_431 = 0f;
	float fLocal_432 = 0f;
	float fLocal_433 = 0f;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	vector3 vLocal_437 = { 0f, 0f, 0f };
	bool bLocal_440 = false;
	bool bLocal_441 = false;
	bool bLocal_442 = false;
	int iLocal_443 = 0;
	bool bLocal_444 = false;
	bool bLocal_445 = false;
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
	bool bLocal_457 = false;
	var uLocal_458 = 0;
	bool bLocal_459 = false;
	bool bLocal_460 = false;
	bool bLocal_461 = false;
	bool bLocal_462 = false;
	bool bLocal_463 = false;
	bool bLocal_464 = false;
	bool bLocal_465 = false;
	bool bLocal_466 = false;
	bool bLocal_467 = false;
	bool bLocal_468 = false;
	bool bLocal_469 = false;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	int iLocal_476 = 0;
	struct<6> Local_477 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_483 = false;
	var uLocal_484 = 16;
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
	bool bLocal_649 = false;
	struct<23> Local_650[53];
	struct<28> Local_1870[17];
	int iLocal_2347 = 0;
	struct<165> Local_2348 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	vector3 vLocal_2531 = { 0f, 0f, 0f };
	float fLocal_2534 = 0f;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	struct<18> Local_2556[2];
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	int iLocal_2596 = 0;
	int iLocal_2597 = 0;
	int iLocal_2598 = 0;
	int iLocal_2599 = 0;
	float fLocal_2600 = 0f;
	int iLocal_2601 = 0;
	bool bLocal_2602 = false;
	int iLocal_2603 = 0;
	int iLocal_2604 = 0;
	int iLocal_2605 = 0;
	int iLocal_2606 = 0;
	var uLocal_2607 = 0;
	int iLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	char* sLocal_2618 = NULL;
	bool bLocal_2619 = false;
	char* sLocal_2620[3] = { NULL, NULL, NULL };
	char* sLocal_2624 = NULL;
	vector3 vLocal_2625[1] = {{ 0f, 0f, 0f } };
	vector3 vLocal_2629 = { 0f, 0f, 0f };
	vector3 vLocal_2632 = { 0f, 0f, 0f };
	vector3 vLocal_2635 = { 0f, 0f, 0f };
	var uLocal_2638 = 9;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 7;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 15;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 1;
	bool bLocal_2930 = false;
	bool bLocal_2931 = false;
	bool bLocal_2932 = false;
	int iLocal_2933 = 0;
	bool bLocal_2934 = false;
	bool bLocal_2935 = false;
	bool bLocal_2936 = false;
	bool bLocal_2937 = false;
	bool bLocal_2938 = false;
	bool bLocal_2939 = false;
	bool bLocal_2940 = false;
	bool bLocal_2941 = false;
	bool bLocal_2942 = false;
	bool bLocal_2943 = false;
	bool bLocal_2944 = false;
	bool bLocal_2945 = false;
	bool bLocal_2946 = false;
	bool bLocal_2947 = false;
	bool bLocal_2948 = false;
	bool bLocal_2949 = false;
	bool bLocal_2950 = false;
	bool bLocal_2951 = false;
	bool bLocal_2952 = false;
	bool bLocal_2953 = false;
	int iLocal_2954 = 0;
	bool bLocal_2955 = false;
	bool bLocal_2956 = false;
	bool bLocal_2957 = false;
	bool bLocal_2958 = false;
	bool bLocal_2959 = false;
	bool bLocal_2960 = false;
	bool bLocal_2961 = false;
	bool bLocal_2962 = false;
	bool bLocal_2963 = false;
	bool bLocal_2964 = false;
	bool bLocal_2965 = false;
	bool bLocal_2966 = false;
	int iLocal_2967 = 0;
	bool bLocal_2968 = false;
	var uLocal_2969 = 0;
	bool bLocal_2970 = false;
	bool bLocal_2971 = false;
	bool bLocal_2972 = false;
	bool bLocal_2973 = false;
	bool bLocal_2974 = false;
	bool bLocal_2975 = false;
	bool bLocal_2976 = false;
	bool bLocal_2977 = false;
	bool bLocal_2978 = false;
	bool bLocal_2979 = false;
	var uLocal_2980[2] = { 0, 0 };
	bool bLocal_2983 = false;
	bool bLocal_2984 = false;
	int iLocal_2985 = 0;
	int iLocal_2986 = 0;
	int iLocal_2987[1] = { 0 };
	int iLocal_2989[2] = { 0, 0 };
	int iLocal_2992 = 0;
	struct<2> Local_2993 = { 0, 0 } ;
	bool bLocal_2995 = false;
	struct<20> Local_2996[1];
	struct<7> Local_3017 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	int iLocal_3037 = 0;
	int iLocal_3038 = 0;
	int iLocal_3039 = 0;
	int iLocal_3040 = 0;
	int iLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	int iLocal_3047 = 0;
	int iLocal_3048 = 0;
	int iLocal_3049 = 0;
	int iLocal_3050 = 0;
	bool bLocal_3051 = false;
	int iLocal_3052 = 0;
	int iLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	vector3 vLocal_3060 = { 0f, 0f, 0f };
	vector3 vLocal_3063 = { 0f, 0f, 0f };
	float fLocal_3066 = 0f;
	float fLocal_3067 = 0f;
	char cLocal_3068[64] = "";
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	int iLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	bool bLocal_3109 = false;
	bool bLocal_3110 = false;
	bool bLocal_3111 = false;
	int iLocal_3112 = 0;
	int iLocal_3113 = 0;
	bool bLocal_3114 = false;
	int iLocal_3115 = 0;
	var uLocal_3116 = 0;
	int iLocal_3117 = 0;
	int iLocal_3118 = 0;
	int iLocal_3119 = 0;
	int iLocal_3120 = 0;
	int iLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 8;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	bool bLocal_3136 = false;
	bool bLocal_3137 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	bool bVar1;

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
	vLocal_93 = { 500f, 500f, 500f };
	fLocal_428 = 0f;
	fLocal_429 = 0f;
	fLocal_430 = 0f;
	fLocal_431 = 0.8f;
	fLocal_432 = 1.5f;
	fLocal_433 = 0.5f;
	vLocal_437 = { 401.55f, -1631.309f, 29.3f };
	bLocal_440 = true;
	bLocal_441 = true;
	bLocal_649 = joaat("TOWTRUCK");
	vLocal_2531 = { -6.80809f, -1465.873f, 29.45427f };
	fLocal_2534 = 275.5635f;
	iLocal_2596 = -1;
	iLocal_2597 = -1;
	iLocal_2598 = -1;
	iLocal_2599 = -1;
	fLocal_2600 = 0f;
	sLocal_2618 = "";
	bLocal_2619 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
	bLocal_2931 = true;
	bLocal_2932 = true;
	iLocal_2933 = 1;
	bLocal_2941 = true;
	bLocal_2976 = true;
	iLocal_3037 = -1;
	vLocal_3060 = { -229.8159f, -1172f, 21.8557f };
	iLocal_3115 = 1;
	UNK_0x7798376279BB5369(1);
	if (UNK_0x2EBF608FFE6CA406(67))
	{
		if (!func_302())
		{
			func_300(&Global_110289, 3);
			func_271(UNK_0xBB0808A181D4745C());
		}
		func_267();
	}
	if (UNK_0xC844350D5D58C99A(ScriptParam_0) && UNK_0xC844350D5D58C99A(ScriptParam_0.f_1))
	{
		if (!UNK_0x437347B10A200C4B(ScriptParam_0, 0) && !UNK_0x437347B10A200C4B(ScriptParam_0.f_1, 0))
		{
			UNK_0x73270B3C9CC833FD(ScriptParam_0, true, 1);
			UNK_0x73270B3C9CC833FD(ScriptParam_0.f_1, true, 1);
		}
	}
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, false);
	}
	func_266(&Local_650);
	func_265(&Local_1870);
	func_264();
	iVar0 = 0;
	func_263(&uLocal_3091);
	switch (ScriptParam_0.f_2)
	{
		case 1:
			if (ScriptParam_0.f_4)
			{
				iLocal_420 = ScriptParam_0.f_3;
				if (iVar0 > 0)
				{
					iLocal_2604 = iVar0;
				}
				else
				{
					iLocal_2604 = func_262(100000f, iLocal_420, Global_111638.f_19968.f_9);
				}
			}
			else
			{
				if (Global_111638.f_19968.f_3 == 0)
				{
					bLocal_2959 = true;
				}
				if (!func_261())
				{
					func_258();
				}
				else
				{
					iLocal_2604 = Global_111638.f_19968.f_9;
					iLocal_420 = Global_111638.f_19968.f_2;
				}
				ScriptParam_0.f_3 = iLocal_420;
			}
			iLocal_2992 = 0;
			break;
	}
	if (!bLocal_2959)
	{
		func_257(&Local_2348, 3, 0, "TOWDISPATCH", 0, 1);
	}
	if (iLocal_420 == 0)
	{
		bLocal_2962 = true;
		if ((Global_111638.f_19968.f_6 % 2) == 0)
		{
			bLocal_2965 = true;
		}
	}
	else if (iLocal_420 == 2)
	{
		bLocal_2966 = true;
		bLocal_2962 = true;
	}
	if (iLocal_420 == 3 || iLocal_420 == 1)
	{
		bLocal_2961 = true;
		bLocal_2962 = true;
		bLocal_3051 = true;
	}
	else if (iLocal_420 == 4)
	{
		bLocal_2962 = true;
		bLocal_3051 = Local_1870[func_256() /*28*/].f_27;
	}
	func_255();
	func_231(&ScriptParam_0);
	if (Global_111638.f_19968.f_3 >= 5)
	{
		bLocal_2945 = true;
		bLocal_2945 = bLocal_2945;
	}
	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bLocal_3109 = ScriptParam_0.f_1;
			bVar1 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0xC844350D5D58C99A(bVar1) && !UNK_0x437347B10A200C4B(bVar1, 0))
			{
				if (UNK_0x134B62B726CEC8E6(bVar1) == joaat("TOWTRUCK") || UNK_0x134B62B726CEC8E6(bVar1) == joaat("TOWTRUCK2"))
				{
					bLocal_3109 = bVar1;
				}
			}
		}
	}
	UNK_0xF3039DE1FDB4F6FD(0);
	UNK_0x51B096AAC60548C1(0.2f);
	if (UNK_0xC844350D5D58C99A(bLocal_3109))
	{
		if (!UNK_0x437347B10A200C4B(bLocal_3109, 0))
		{
			UNK_0x73270B3C9CC833FD(bLocal_3109, true, 1);
			UNK_0x2F625BED8BF7F26A(bLocal_3109);
			UNK_0x4D647C1236C18D14(bLocal_3109, 0);
			UNK_0x44A200C9B6E1CEA6(bLocal_3109, true);
		}
	}
	iLocal_3112 = UNK_0x7D6CA5F52B3748BF(Vector(27.5001f, -640.002f, 414.1398f) - Vector(50f, 50f, 50f), Vector(27.5001f, -640.002f, 414.1398f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	iLocal_3113 = UNK_0x7D6CA5F52B3748BF(Vector(21.8557f, -1172f, -229.8159f) - Vector(50f, 50f, 50f), Vector(21.8557f, -1172f, -229.8159f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	UNK_0xE342F209E49C5314(vLocal_3060 - Vector(15f, 15f, 15f), vLocal_3060 + Vector(15f, 15f, 15f), false, 1);
	UNK_0x21688103CC7F9B19(vLocal_3060 - Vector(15f, 15f, 15f), vLocal_3060 + Vector(15f, 15f, 15f), 0);
	func_230();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_226(&uLocal_2656);
		func_225();
		UNK_0x34FABD75496259E4(UNK_0xD803B885F5E47A62());
		if (bLocal_2945 && !UNK_0x7EBBF23C1CD917AA(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x757EF87A33649210())
			{
				UNK_0xD67D6A3F0D653D93(408.8376f, -1638.952f, 28.2928f, -3.24f, 0f, -62.6001f, 20f, 0);
				while (!UNK_0x68367101660E33F0())
				{
					SYSTEM::WAIT(0);
				}
				UNK_0x486B4ADE317F0689();
				UNK_0x2FB9A57162E54BAB(0f);
				UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
				UNK_0x28F5E4DA506AC0CA(408.8376f, -1638.952f, 28.2928f, 8f, 0, 0, 0, 0, false, 0);
				UNK_0x82E51BCA72537B6C(500);
			}
		}
		if (iLocal_3115 < 15)
		{
			func_223(&bLocal_3109, &iLocal_2985, &Local_2996, &vLocal_2625, &cLocal_3068, &iLocal_3052, iLocal_3047, bLocal_2958, &iLocal_2967, bLocal_2949, bLocal_2939, bLocal_461, iLocal_3115, 1);
		}
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			switch (iLocal_2992)
			{
				case 0:
					if (iLocal_3115 > 4 && iLocal_3115 < 15)
					{
						if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_3109, 0))
						{
						}
						if (iLocal_420 != 2 && iLocal_420 != 4)
						{
							if (!func_220(&uLocal_3122, Local_2996[0 /*20*/].f_6, bLocal_3109, &uLocal_3042, &uLocal_3043, bLocal_2945))
							{
								iLocal_3084 = 15;
								func_267();
							}
						}
						if (bLocal_2959 || bLocal_2955)
						{
							func_219(&uLocal_3123, bLocal_3109, &uLocal_3045, &uLocal_3046, bLocal_2945);
						}
					}
					if (bLocal_2959)
					{
						if (iLocal_3115 >= 7)
						{
							func_214(bLocal_3109, Local_2996[0 /*20*/].f_6, Local_3017, &(Local_2996[0 /*20*/].f_8), &vLocal_2625, &cLocal_3068, &vLocal_437, bLocal_2959, &(Local_2996[0 /*20*/]));
						}
					}
					bLocal_2948 = false;
					if (((iLocal_420 == 0 || iLocal_420 == 2) && iLocal_3115 > 4) && iLocal_3115 < 17)
					{
						if (bLocal_2965 && bLocal_2976)
						{
							func_212();
							func_211(Local_2996[0 /*20*/].f_6, Local_2996[0 /*20*/]);
						}
						if (!bLocal_2959)
						{
							func_200();
						}
					}
					else if ((iLocal_420 == 1 && iLocal_3115 > 4) && iLocal_3115 < 17)
					{
						if (func_196())
						{
							func_193();
						}
						if (iLocal_3119 > 0)
						{
							func_189();
						}
					}
					else if (iLocal_420 == 3)
					{
						if ((iLocal_3115 == 5 && iLocal_3117 < 1) && !bLocal_2930)
						{
							if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
							{
								if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), Local_2996[0 /*20*/].f_6))
								{
									bLocal_2930 = true;
									UNK_0xA3BF0AA5A2608191(Local_2996[0 /*20*/]);
									UNK_0xF96A174EE26D7588(Local_2996[0 /*20*/], UNK_0x16F2683693E537C9(), 0);
								}
							}
						}
					}
					if (bLocal_2950 && !bLocal_442)
					{
						func_185(&(Local_1870[func_256() /*28*/]), &(Local_1870[func_256() /*28*/].f_10), Local_650[iLocal_2604 /*23*/].f_1, &(Local_2996[0 /*20*/]), &(Local_2996[0 /*20*/].f_2), &iLocal_2989, fLocal_3066, bLocal_2619, &sLocal_2620, bLocal_3051);
					}
					if (iLocal_420 == 4)
					{
						func_183(&uLocal_3116, bLocal_3110, bLocal_3111, bLocal_3109, &(Local_2996[0 /*20*/].f_2), bLocal_3051, bLocal_2619, &sLocal_2620, &bLocal_2984, bLocal_2945, &(Local_2996[0 /*20*/].f_6));
					}
					if (!bLocal_2945)
					{
						if (UNK_0xC844350D5D58C99A(bLocal_2984) && !UNK_0x437347B10A200C4B(bLocal_2984, 0))
						{
							if (func_175(bLocal_2984, 0, &uLocal_412, &iLocal_419, 0, 1, 0, 1, 0))
							{
								bLocal_2942 = true;
								UNK_0xF3268524E9BE6D6E(bLocal_2984, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
							}
							if (func_173())
							{
								bLocal_2943 = true;
							}
						}
					}
					if (bLocal_442 && !bLocal_2964)
					{
						if (func_175(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, &uLocal_412, &iLocal_419, 0, 1, 1, 1, 0))
						{
							func_172();
							if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0))
							{
								UNK_0xA3BF0AA5A2608191(Local_2996[0 /*20*/]);
								UNK_0xFADC0A217229F6B5(Local_2996[0 /*20*/], true);
								UNK_0xF3268524E9BE6D6E(Local_2996[0 /*20*/], UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
								iLocal_3084 = 18;
							}
							if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_1, 0))
							{
								UNK_0xA3BF0AA5A2608191(Local_2996[0 /*20*/].f_1);
								UNK_0xFADC0A217229F6B5(Local_2996[0 /*20*/].f_1, true);
								UNK_0xF82EA857DA10E0CD(&iLocal_421);
								UNK_0xDD353D0E9C789D0E(&iLocal_421);
								UNK_0x75CDA8644CD3B5F5(false, 1, 256);
								UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
								UNK_0x75ABDC5F81978924(iLocal_421);
								if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_1, 0))
								{
									UNK_0x78ADC381772E3D54(Local_2996[0 /*20*/].f_1, iLocal_421);
								}
								UNK_0xF82EA857DA10E0CD(&iLocal_421);
								iLocal_3084 = 18;
							}
							if (!bLocal_2959)
							{
								switch (iLocal_419)
								{
									case 16:
										if (iLocal_420 == 2)
										{
											iLocal_3084 = 17;
											func_267();
										}
										else
										{
											iLocal_3084 = 16;
											func_267();
										}
										break;
									case 2:
										func_171(&Local_2348, "TOWAUD", "TOW_DISP_LAW", 9, 1, 0, 0);
										iLocal_3084 = 3;
										func_267();
										break;
								}
							}
							else
							{
								iLocal_3084 = 21;
								func_267();
							}
							if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0))
							{
								func_267();
							}
						}
						if (func_175(Local_2996[0 /*20*/].f_1, Local_2996[0 /*20*/].f_6, &uLocal_412, &iLocal_419, 0, 1, 0, 1, 0))
						{
							func_172();
							if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_1, 0))
							{
								UNK_0xA3BF0AA5A2608191(Local_2996[0 /*20*/].f_1);
								UNK_0xFADC0A217229F6B5(Local_2996[0 /*20*/].f_1, true);
								UNK_0xF3268524E9BE6D6E(Local_2996[0 /*20*/].f_1, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
								iLocal_3084 = 18;
							}
						}
					}
					else if (bLocal_2964)
					{
					}
					if (!bLocal_2948 && func_170(0))
					{
						if ((!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0x437347B10A200C4B(bLocal_3109, 0)) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_3109, 0))
						{
							if (!bLocal_468)
							{
								if (UNK_0xC844350D5D58C99A(Local_2996[0 /*20*/].f_6))
								{
									if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
									{
										func_147(&uLocal_399, UNK_0x68F4C0EC296D3901(Local_2996[0 /*20*/].f_6, true), 0, 0, 1, 1, 1);
									}
								}
							}
							else
							{
								func_147(&uLocal_399, vLocal_2629, 0, 0, 1, 1, 1);
							}
						}
					}
					if (!func_170(0))
					{
						func_146(&uLocal_399, 0, 0);
					}
					func_144(&uLocal_3094, 7f, 1);
					func_143();
					func_142();
					if (((!bLocal_467 || iLocal_3115 >= 15) || bLocal_2944) || bLocal_2939)
					{
						if (func_55())
						{
							func_49();
						}
					}
					if (iLocal_3115 == 9)
					{
						if (iLocal_420 == 1 || iLocal_420 == 3)
						{
							func_13(Local_2348, &Local_2996, &bLocal_3109);
						}
					}
					break;
			}
			if (func_1(ScriptParam_0))
			{
				func_267();
			}
		}
	}
}

bool func_1(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	vector3 vVar0;
	vector3 vVar3;

	if (bLocal_2970)
	{
		iLocal_3084 = 13;
		return true;
	}
	if (func_12())
	{
		iLocal_3084 = 11;
		return true;
	}
	if (UNK_0xC844350D5D58C99A(Local_2996[0 /*20*/].f_6))
	{
		if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
		{
			if (UNK_0x7B5606C651AB51B5(Local_2996[0 /*20*/].f_6, 0, 7000))
			{
				iLocal_3084 = 15;
				return true;
			}
		}
	}
	if (bLocal_467)
	{
		if ((UNK_0x1C0640BA9A7327B3() - iLocal_3052) > 50000)
		{
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			}
			if (UNK_0xC844350D5D58C99A(bLocal_3109) && !UNK_0x437347B10A200C4B(bLocal_3109, 0))
			{
				vVar3 = { UNK_0x68F4C0EC296D3901(bLocal_3109, true) };
			}
			if (SYSTEM::VDIST2(vVar0, vVar3) > 625f)
			{
				iLocal_3084 = 0;
				return true;
			}
		}
	}
	if (bLocal_2942)
	{
		iLocal_3084 = 22;
		return true;
	}
	if (bLocal_2943)
	{
		iLocal_3084 = 23;
		return true;
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3109))
	{
		if (!UNK_0xDF1306B443CD3D15(bLocal_3109, 0))
		{
			iLocal_3084 = 2;
			return true;
		}
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3109))
	{
		if (UNK_0x437347B10A200C4B(bLocal_3109, 0))
		{
			iLocal_3084 = 2;
			return true;
		}
	}
	switch (vParam0.z)
	{
		case 1:
			if (iLocal_3115 > 4 && iLocal_3115 < 17)
			{
				if (UNK_0xC844350D5D58C99A(Local_2996[0 /*20*/].f_6))
				{
					if (UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
					{
						iLocal_3084 = 5;
						return true;
					}
					else if (func_8())
					{
						return true;
					}
				}
			}
			if (func_2())
			{
				return true;
			}
			switch (iLocal_420)
			{
				case 3:
				case 1:
				case 0:
					if (bLocal_442)
					{
						if (!bLocal_2964)
						{
							if (UNK_0xC844350D5D58C99A(Local_2996[0 /*20*/]))
							{
								if (UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0))
								{
									iLocal_3084 = 8;
									return true;
								}
							}
						}
						if (bLocal_2965)
						{
							if (UNK_0xC844350D5D58C99A(Local_2996[0 /*20*/].f_1))
							{
								if (UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_1, 0))
								{
									iLocal_3084 = 9;
									return true;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
	{
		iLocal_3084 = 3;
		return true;
	}
	if (!UNK_0x4DA54CAC0D81A673(bLocal_3109))
	{
		UNK_0x2F625BED8BF7F26A(bLocal_3109);
	}
	else if (UNK_0x5B17F10380E80E5B(bLocal_3109))
	{
		iLocal_3084 = 4;
		return true;
	}
	return false;
}

bool func_2()
{
	if (!bLocal_2951)
	{
		if (func_3(&uLocal_3100, 180f))
		{
			bLocal_2951 = true;
			func_171(&Local_2348, "TOWAUD", "TOW_DISP3", 9, 0, 0, 0);
		}
	}
	if (func_3(&uLocal_3100, 300f))
	{
		if (iLocal_420 != 2)
		{
			iLocal_3084 = 14;
			return true;
		}
	}
	return false;
}

bool func_3(var uParam0, float fParam1)
{
	if (func_7(uParam0))
	{
		if (func_4(uParam0) > fParam1)
		{
			return true;
		}
	}
	return false;
}

float func_4(var uParam0)
{
	if (func_7(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(UNK_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_5(bool bParam0)
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

bool func_6(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_7(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, true);
}

bool func_8()
{
	bool bVar0;
	bool bVar1;
	char* sVar2;

	bVar0 = false;
	bVar1 = false;
	if (iLocal_420 == 3)
	{
		bVar0 = true;
	}
	if (iLocal_3115 < 9)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		sVar2 = "TOW_DISP_CAR";
	}
	else if (bVar0)
	{
		sVar2 = "TOW_DISP_GAR";
	}
	else
	{
		sVar2 = "TOW_DISP_IMP";
	}
	if (!func_11(vLocal_2625[0 /*3*/]))
	{
		if (!bLocal_2952)
		{
			if (func_9(vLocal_2625[0 /*3*/], 0) > (fLocal_430 + 400f))
			{
				func_171(&Local_2348, "TOWAUD", sVar2, 9, 0, 0, 0);
				bLocal_2952 = true;
			}
		}
		if (func_9(vLocal_2625[0 /*3*/], 0) > (fLocal_430 + 450f))
		{
			iLocal_3084 = 11;
			return true;
		}
	}
	return false;
}

float func_9(vector3 vParam0, int iParam3)
{
	return func_10(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4()), vParam0, iParam3);
}

float func_10(bool bParam0, vector3 vParam1, int iParam4)
{
	if (UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return -1f;
	}
	return UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bParam0, true), vParam1, iParam4);
}

bool func_11(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_12()
{
	return Global_98796.f_345 > 0;
}

void func_13(struct<165> Param0, int iParam165, bool bParam166)
{
	if (!bLocal_463)
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (iLocal_2605 > 1)
			{
				if (func_48(iParam165, bParam166))
				{
					if (func_47())
					{
						Local_477 = { func_46() };
						func_44();
						bLocal_463 = true;
						iLocal_2605 = 3;
					}
					else
					{
						bLocal_463 = true;
						iLocal_2605 = 3;
					}
				}
			}
		}
	}
	switch (iLocal_2605)
	{
		case 0:
			if (!func_47())
			{
				SYSTEM::SETTIMERA(0);
				iLocal_2605 = 1;
			}
			break;
		case 1:
			if ((SYSTEM::TIMERA() > 3000 && bLocal_468) && !func_43("TOWT_OBJ_04", 0, 0))
			{
				if (!func_47())
				{
					func_257(&Param0, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					if (UNK_0x8A22C4C08282BF26(joaat("TONYA3")) == 1 || UNK_0x8A22C4C08282BF26(joaat("TONYA4")) == 1)
					{
						if (iLocal_420 == 1)
						{
							func_171(&Param0, "TOWAUD", "TOW_TRN_C1", 7, 0, 0, 0);
							bLocal_483 = "TOW_TRN_C1";
						}
						else if (iLocal_420 == 3)
						{
							func_171(&Param0, "TOWAUD", "TOW_BRK_C", 7, 0, 0, 0);
							bLocal_483 = "TOW_BRK_C";
						}
						bLocal_464 = true;
					}
					else if (iLocal_420 == 1)
					{
						if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
						{
							func_257(&Param0, 5, (*iParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
							func_171(&Param0, "TOWAUD", "TOW_MECH", 7, 0, 0, 0);
							bLocal_483 = "TOW_MECH";
						}
						else if (Global_111638.f_19968.f_5 == 2)
						{
							func_257(&Param0, 6, (*iParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_171(&Param0, "TOWAUD", "TOW_MECH2", 7, 0, 0, 0);
							bLocal_483 = "TOW_MECH2";
						}
						else
						{
							func_42(Param0, iParam165);
						}
						bLocal_464 = true;
					}
					else if (iLocal_420 == 3)
					{
						if (Global_111638.f_19968.f_7 == 0 || Global_111638.f_19968.f_7 == 1)
						{
							func_257(&Param0, 5, (*iParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
							func_171(&Param0, "TOWAUD", "TOW_BRK_CONV", 7, 0, 0, 0);
							bLocal_483 = "TOW_BRK_CONV";
						}
						else if (Global_111638.f_19968.f_7 == 2)
						{
							func_257(&Param0, 6, (*iParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_171(&Param0, "TOWAUD", "TOW_BRK_CON2", 7, 0, 0, 0);
							bLocal_483 = "TOW_BRK_CON2";
						}
						else
						{
							func_41(Param0, iParam165);
						}
						bLocal_464 = true;
					}
				}
				else if (func_39(bLocal_483))
				{
					iLocal_2605 = 2;
				}
			}
			break;
		case 3:
			func_38(Param0, iParam165);
			if (bLocal_465)
			{
				iLocal_2605 = 2;
			}
			break;
		case 2:
			if (func_37(bParam166))
			{
				if (bLocal_464)
				{
					if (bLocal_463)
					{
						if (!func_47())
						{
							if (func_14(&Local_2348, "TOWAUD", bLocal_483, &Local_477, 8, 0, 0))
							{
								bLocal_463 = false;
								iLocal_2605 = 4;
							}
						}
					}
				}
			}
			break;
		case 4:
			func_37(bParam166);
			break;
	}
}

int func_14(var uParam0, char* sParam1, bool bParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_36(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_15(bParam2, iParam4, 0);
}

int func_15(char* sParam0, int iParam1, bool bParam2)
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
					func_35();
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
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_33();
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
				func_25();
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
				if (func_24())
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
			if (func_23())
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
			func_22();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_21();
		func_16();
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
		func_35();
	}
	return 0;
}

void func_16()
{
	if (!func_17())
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

bool func_17()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_20())
	{
		return false;
	}
	if (func_18(UNK_0xD803B885F5E47A62()))
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

bool func_18(int iParam0)
{
	return func_19(iParam0, 20);
}

bool func_19(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_20()
{
	return -1;
}

void func_21()
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

void func_22()
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

bool func_23()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_24()
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

void func_25()
{
	if (func_32(14))
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
		Global_19486 = func_26();
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

int func_26()
{
	func_27();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_27()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_30(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_29(UNK_0x16F2683693E537C9());
			if (func_28(iVar0) && (!func_32(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_28(Global_111638.f_2358.f_539.f_4321))
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

bool func_28(int iParam0)
{
	return iParam0 < 3;
}

int func_29(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)
{
	if (func_28(iParam0))
	{
		return func_31(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_32(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_33()
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

bool func_34(bool bParam0, int iParam1)
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

void func_35()
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

void func_36(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_37(bool bParam0)
{
	switch (iLocal_2606)
	{
		case 1:
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0 && !UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
			{
				bLocal_465 = false;
				return true;
			}
			break;
		case 2:
			break;
		case 4:
			break;
		case 6:
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0x437347B10A200C4B(*bParam0, 0))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *bParam0, 0))
				{
					bLocal_465 = false;
					return true;
				}
			}
			break;
	}
	return false;
}

void func_38(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, int iParam165)
{
	switch (iLocal_2606)
	{
		case 1:
			if (UNK_0x8A22C4C08282BF26(joaat("TOWING")) == 0)
			{
				if (iLocal_420 == 1)
				{
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_SHOCK", 7, 1, 0, 0))
						{
							UNK_0x9B96FC9CDDC93764(UNK_0xD803B885F5E47A62());
							bLocal_465 = true;
						}
					}
				}
				else if (iLocal_420 == 3)
				{
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_SHOCK2", 7, 1, 0, 0))
						{
							UNK_0x9B96FC9CDDC93764(UNK_0xD803B885F5E47A62());
							bLocal_465 = true;
						}
					}
				}
			}
			else if (iLocal_420 == 1)
			{
				if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*iParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_SHOCKGEN", 7, 1, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
				else if (Global_111638.f_19968.f_5 == 2)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*iParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_GENSHOCK", 7, 1, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_111638.f_19968.f_7 == 0 || Global_111638.f_19968.f_7 == 1)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*iParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_SHK", 7, 1, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
				else if (Global_111638.f_19968.f_7 == 2)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*iParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_SHK2", 7, 1, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
			}
			break;
		case 2:
			if (UNK_0x8A22C4C08282BF26(joaat("TOWING")) == 0)
			{
				if (iLocal_420 == 1)
				{
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DAMAGE", 7, 1, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
				else if (iLocal_420 == 3)
				{
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DAMAGE2", 7, 1, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
			}
			else if (iLocal_420 == 1)
			{
				if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*iParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DAMCAR", 7, 1, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
				else if (Global_111638.f_19968.f_5 == 2)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*iParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_CARDAM", 7, 1, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_111638.f_19968.f_7 == 0 || Global_111638.f_19968.f_7 == 1)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*iParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_DMG", 7, 1, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
				else if (Global_111638.f_19968.f_7 == 2)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*iParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_DMG2", 7, 1, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
			}
			break;
		case 4:
			if (UNK_0x8A22C4C08282BF26(joaat("TOWING")) == 0)
			{
				if (iLocal_420 == 1)
				{
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_HARM", 7, 0, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
				else if (iLocal_420 == 3)
				{
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_HARM_PED", 7, 0, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
			}
			else if (iLocal_420 == 1)
			{
				if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*iParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_HARMED", 7, 0, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
				else if (Global_111638.f_19968.f_5 == 2)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*iParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_HARM2", 7, 0, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_111638.f_19968.f_7 == 0 || Global_111638.f_19968.f_7 == 1)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*iParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_HRM", 7, 0, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
				else if (Global_111638.f_19968.f_7 == 2)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*iParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_HRM2", 7, 0, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
			}
			break;
		case 6:
			if (UNK_0x8A22C4C08282BF26(joaat("TOWING")) == 0)
			{
				if (iLocal_420 == 1)
				{
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DESERT", 7, 1, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
				else if (iLocal_420 == 3)
				{
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DESERT2", 7, 1, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
			}
			else if (iLocal_420 == 1)
			{
				if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*iParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DESERTED", 7, 1, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
				else if (Global_111638.f_19968.f_5 == 2)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*iParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DESERTD2", 7, 1, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_111638.f_19968.f_7 == 0 || Global_111638.f_19968.f_7 == 1)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*iParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_DSRT", 7, 1, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
				else if (Global_111638.f_19968.f_7 == 2)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*iParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!bLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_DESR", 7, 1, 0, 0))
						{
							bLocal_465 = true;
						}
					}
				}
			}
			break;
	}
}

bool func_39(bool bParam0)
{
	var uVar0;

	if (func_47())
	{
		MemCopy(&uVar0, {func_40()}, 4);
		if (UNK_0x7F8A39872A07D2CE(bParam0, &uVar0))
		{
			return true;
		}
	}
	return false;
}

struct<6> func_40()
{
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

void func_41(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, int iParam165)
{
	int iVar0;

	iVar0 = (UNK_0x09AC81E49EA267F7(false, 65535) % 4);
	if (iVar0 == 0)
	{
		func_257(&uParam0, 3, (*iParam165)[0 /*20*/], "TOWPEDA", 0, 1);
		func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH", 7, 0, 0, 0);
		bLocal_483 = "TOW_GEN_MCH";
	}
	else if (iVar0 == 1)
	{
		func_257(&uParam0, 3, (*iParam165)[0 /*20*/], "TOWPEDB", 0, 1);
		func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH1", 7, 0, 0, 0);
		bLocal_483 = "TOW_GEN_MCH1";
	}
	else if (iVar0 == 2)
	{
		func_257(&uParam0, 3, (*iParam165)[0 /*20*/], "TOWPEDD", 0, 1);
		func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH3", 7, 0, 0, 0);
		bLocal_483 = "TOW_GEN_MCH3";
	}
	else if (iVar0 == 3)
	{
		func_257(&uParam0, 3, (*iParam165)[0 /*20*/], "TOWPEDE", 0, 1);
		func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH4", 7, 0, 0, 0);
		bLocal_483 = "TOW_GEN_MCH4";
	}
}

void func_42(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, int iParam165)
{
	func_257(&uParam0, 3, (*iParam165)[0 /*20*/], "TOWPEDC", 0, 1);
	func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH2", 7, 0, 0, 0);
	bLocal_483 = "TOW_GEN_MCH2";
}

bool func_43(bool bParam0, int iParam1, bool bParam2)
{
	UNK_0x18B60B994182620C(bParam0);
	if (iParam1 == 1)
	{
		UNK_0x6B012227B3921E18(bParam2);
	}
	return UNK_0xB165082A56EE6E7F();
}

void func_44()
{
	Global_19671 = 0;
	func_45();
}

void func_45()
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

struct<6> func_46()
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

bool func_47()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

bool func_48(int iParam0, bool bParam1)
{
	if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0 || UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x82D09C8DBB516A49(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x9B96FC9CDDC93764(UNK_0xD803B885F5E47A62());
		}
		iLocal_2606 = 1;
		return true;
	}
	if ((UNK_0xC844350D5D58C99A((iParam0[0 /*20*/])->f_6) && !UNK_0x437347B10A200C4B((iParam0[0 /*20*/])->f_6, 0)) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (!bLocal_427)
		{
			if ((UNK_0xB87D13D0C064E9D1((iParam0[0 /*20*/])->f_6, UNK_0x16F2683693E537C9(), 1) || UNK_0xD24FAF25ADC00F44((iParam0[0 /*20*/])->f_6)) || UNK_0x688A90832774AB83((iParam0[0 /*20*/])->f_6))
			{
				iLocal_2606 = 2;
				return true;
			}
		}
	}
	if ((UNK_0xC844350D5D58C99A((*iParam0)[0 /*20*/]) && !UNK_0x437347B10A200C4B((*iParam0)[0 /*20*/], 0)) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0xB87D13D0C064E9D1(UNK_0x16F2683693E537C9(), (*iParam0)[0 /*20*/], 1))
		{
			iLocal_2606 = 4;
			return true;
		}
	}
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0x437347B10A200C4B(*bParam1, 0))
	{
		if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *bParam1, 0))
		{
			iLocal_2606 = 6;
			return true;
		}
	}
	return false;
}

void func_49()
{
	func_53(&Global_110289, 3);
	func_300(&(Global_111638.f_19968.f_1), 8192);
	func_50();
	func_193();
}

void func_50()
{
	func_51();
}

int func_51()
{
	if (func_52(0))
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

bool func_52(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_53(var uParam0, int iParam1)
{
	func_54(uParam0, iParam1);
}

void func_54(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_55()
{
	var uVar0;
	int iVar1;
	char* sVar2;
	var uVar3;
	var uVar6;
	var uVar9;

	switch (iLocal_3115)
	{
		case 1:
			func_141(14);
			if (iLocal_420 == 3)
			{
				if (func_139(&vLocal_3063, &fLocal_3066, &uLocal_3054, &uLocal_3057))
				{
					iLocal_3115 = 2;
				}
			}
			else
			{
				iLocal_3115 = 2;
			}
			break;
		case 2:
			if (!UNK_0xD17F06053799A7CA())
			{
				switch (iLocal_420)
				{
					case 3:
						func_257(&Local_2348, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_171(&Local_2348, "TOWAUD", "TOW_ACC_EXP2", 9, 0, 0, 0))
						{
							iLocal_3115 = 4;
						}
						break;
					case 2:
						func_257(&Local_2348, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_171(&Local_2348, "TOWAUD", "TOW_ABN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3115 = 4;
						}
						break;
					case 0:
						func_257(&Local_2348, 4, 0, "TOWDISPATCH", 0, 1);
						if (bLocal_2965)
						{
							if (func_171(&Local_2348, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
							{
								iLocal_3115 = 4;
							}
						}
						else if (func_171(&Local_2348, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3115 = 4;
						}
						break;
					case 1:
						func_257(&Local_2348, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_171(&Local_2348, "TOWAUD", "TOW_TRN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3115 = 4;
						}
						break;
					case 4:
						func_257(&Local_2348, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_171(&Local_2348, "TOWAUD", "TOW_ACD_EXP2", 9, 0, 0, 0))
						{
							iLocal_3115 = 4;
						}
						break;
				}
			}
			break;
		case 4:
			switch (iLocal_420)
			{
				case 3:
					if (func_132("TOWT_OBJ_01", "TOWT_HELP_01", &uVar0, 1, 0))
					{
						if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
						{
							UNK_0x71EDC33E5A423750(Local_2996[0 /*20*/].f_6, 10);
						}
						func_130();
						func_263(&uLocal_3100);
						iLocal_3115 = 6;
					}
					break;
				case 2:
					if (func_132("TOWT_OBJ_AB", "TOWT_HELP_AB", &uVar0, 0, 0))
					{
						vLocal_2632 = { (vLocal_2625[0 /*3*/] + 15f), (vLocal_2625[0 /*3*/].f_1 + 15f), (vLocal_2625[0 /*3*/].f_2 + 15f) };
						vLocal_2635 = { (vLocal_2625[0 /*3*/] - 15f), (vLocal_2625[0 /*3*/].f_1 - 15f), (vLocal_2625[0 /*3*/].f_2 - 15f) };
						UNK_0xE342F209E49C5314(vLocal_2632, vLocal_2635, false, 1);
						bLocal_2963 = true;
						UNK_0x5A751CC648EB6940(Local_2996[0 /*20*/].f_6, 1);
						func_263(&uLocal_3100);
						iLocal_3115 = 6;
					}
					break;
				case 0:
					if (func_132("TOWT_OBJ_01B", "TOWT_HELP_03", &uVar0, 0, 0))
					{
						func_263(&uLocal_3100);
						iLocal_3115 = 6;
					}
					break;
				case 1:
					if (func_132("TOWT_OBJ_TR", "TOWT_HELP_TR", &uVar0, 0, 1))
					{
						UNK_0x5A751CC648EB6940(Local_2996[0 /*20*/].f_6, 1);
						func_130();
						UNK_0xF48790410026514E(0);
						func_129(0, 0);
						func_129(1, 0);
						func_129(2, 0);
						func_129(3, 0);
						func_129(4, 0);
						func_129(5, 0);
						func_129(6, 0);
						func_129(7, 0);
						func_129(8, 0);
						func_129(9, 0);
						func_129(10, 0);
						func_129(11, 0);
						bLocal_2960 = true;
						func_263(&uLocal_3100);
						iLocal_3115 = 6;
					}
					break;
				case 4:
					if (func_132("TOWT_OBJ_CC", "TOWT_HELP_04", &uVar0, 0, 0))
					{
						UNK_0x5A751CC648EB6940(Local_2996[0 /*20*/].f_6, 1);
						func_130();
						func_263(&uLocal_3100);
						iLocal_3115 = 6;
					}
					break;
				default:
					break;
			}
			if (!UNK_0xE4EDC4B0E92C078B(Local_2996[0 /*20*/].f_8))
			{
				if (UNK_0xC844350D5D58C99A(Local_2996[0 /*20*/].f_6))
				{
					Local_2996[0 /*20*/].f_8 = UNK_0x5C3B41825F6AC5A0(Local_2996[0 /*20*/].f_6);
					UNK_0x61755AC17D8F538E(Local_2996[0 /*20*/].f_8, 3);
					UNK_0x661342B9651D16E2(Local_2996[0 /*20*/].f_8, true);
				}
			}
			break;
		case 5:
			func_124();
			if (func_116(&iLocal_3117, 0, "TOW_BREAK1"))
			{
				iLocal_3115 = 7;
			}
			break;
		case 6:
			if (!func_47())
			{
				func_115(bLocal_3114, 7500, 1);
				StringCopy(&cLocal_3068, bLocal_3114, 64);
				if (iLocal_420 == 3)
				{
					iLocal_3115 = 5;
				}
				else
				{
					iLocal_3115 = 7;
				}
			}
			break;
		case 7:
			switch (iLocal_420)
			{
				case 3:
				case 1:
				case 4:
					sVar2 = "TOWT_OBJ_04";
					break;
				case 2:
				case 0:
					if (func_11(vLocal_2629))
					{
						vLocal_2629 = { vLocal_70[0 /*3*/] };
					}
					func_114(8, &Local_3017);
					sVar2 = "TOWT_OBJ_06";
					break;
			}
			if (iLocal_420 == 1 && !UNK_0xC42A92762C58E1B9(Local_2996[0 /*20*/], bLocal_3109, 0))
			{
				bLocal_2957 = true;
			}
			func_113();
			if (func_106(sVar2, vLocal_2629))
			{
				if (iLocal_420 == 1 && !UNK_0xC42A92762C58E1B9(Local_2996[0 /*20*/], bLocal_3109, 0))
				{
					bLocal_2957 = false;
					bLocal_2953 = true;
					if (UNK_0xC844350D5D58C99A(Local_2996[0 /*20*/]))
					{
						Local_2996[0 /*20*/].f_9 = UNK_0x5C3B41825F6AC5A0(Local_2996[0 /*20*/]);
						UNK_0x61755AC17D8F538E(Local_2996[0 /*20*/].f_9, 3);
						UNK_0x516E63E474722206(Local_2996[0 /*20*/].f_9, 0.7f);
					}
					iLocal_3115 = 5;
				}
				else
				{
					iLocal_3115 = 9;
				}
			}
			if (func_104(&uVar3, &uVar6, &uVar9))
			{
				bLocal_2935 = true;
				iLocal_3115 = 9;
			}
			break;
		case 9:
			if (iLocal_420 == 3)
			{
				sVar2 = "TOWT_OBJ_03a";
			}
			else
			{
				sVar2 = "TOWT_OBJ_03Ga";
			}
			if (func_103(sVar2))
			{
				func_146(&uLocal_399, 0, 0);
				UNK_0x9A8BCD43DBDDCDCA(Local_2996[0 /*20*/].f_6, 0, 0);
				if (iLocal_3038 == 0)
				{
					bLocal_2941 = false;
					iLocal_3115 = 15;
				}
				else
				{
					func_115("TOWT_OBJ_05", 7500, 1);
					StringCopy(&cLocal_3068, "TOWT_OBJ_05", 64);
					iLocal_3115 = 7;
				}
			}
			break;
		case 15:
			func_102();
			if (bLocal_2939)
			{
				if (UNK_0xE4EDC4B0E92C078B(iLocal_2985))
				{
					UNK_0x142CC44DB769B57E(&iLocal_2985);
				}
			}
			UNK_0xA37A90C62806D848(1);
			fLocal_429 = (fLocal_429 + 500f);
			if (iLocal_470 != 0 && !bLocal_2935)
			{
				if (bLocal_2945)
				{
					if ((UNK_0x1C0640BA9A7327B3() - iLocal_470) < 12000)
					{
						fLocal_429 = (fLocal_429 + 50f);
					}
				}
			}
			if (!bLocal_2945)
			{
				fLocal_429 = 0f;
			}
			fLocal_3067 = func_4(&uLocal_3091);
			fLocal_3067 = (fLocal_3067 * 1000f);
			iVar1 = SYSTEM::ROUND(fLocal_3067);
			UNK_0x11E0F00830F70E15(iVar1, 14, 0);
			if (iLocal_420 != 2)
			{
			}
			if (bLocal_2945)
			{
				fLocal_429 = (fLocal_429 - fLocal_428);
			}
			iLocal_472 = SYSTEM::ROUND(fLocal_429);
			func_101(&iLocal_2608, "TOW_UI07", 500, SYSTEM::ROUND(fLocal_428), SYSTEM::ROUND(fLocal_429), "TOW_UI08", 4000, 1);
			if (iLocal_472 > 0)
			{
				func_62(0, iLocal_472);
			}
			func_61(1);
			iLocal_3115 = 16;
			break;
		case 16:
			if (UNK_0x8FA469D9C5F1A01F())
			{
				UNK_0xA37A90C62806D848(1);
			}
			if (!func_56(&iLocal_2608, 0))
			{
				UNK_0x2F23E8033F1ADDD9("TOW_TUT_04A");
				UNK_0x2F23E8033F1ADDD9("TOWT_OBJ_03Ga");
				iLocal_3115 = 17;
			}
			break;
		case 17:
			return true;
	}
	vLocal_70[0 /*3*/] = { vLocal_70[0 /*3*/] };
	return false;
}

bool func_56(int iParam0, int iParam1)
{
	if (!func_7(&(iParam0->f_2)))
	{
		func_59(&(iParam0->f_2));
	}
	UNK_0x3584F71E5CA29322(14);
	UNK_0x6567AE843FADBA94(*iParam0, 255, 255, 255, 255, 0);
	if (iParam1 || iParam0->f_8)
	{
		if (UNK_0xBFC0798A6E3417F9(2, 201) || iParam0->f_8)
		{
			if (!func_7(&(iParam0->f_5)))
			{
				func_59(&(iParam0->f_5));
				func_58(iParam0, 1051260355 /* Float: 0.33f */);
			}
		}
		if (func_7(&(iParam0->f_5)))
		{
			if (func_4(&(iParam0->f_5)) > 0.33f)
			{
				func_57(&(iParam0->f_5));
				return false;
			}
		}
	}
	if (iParam0->f_1 == -1)
	{
		return true;
	}
	if (func_4(&(iParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(iParam0->f_1)
	{
		if (!func_7(&(iParam0->f_5)))
		{
			func_59(&(iParam0->f_5));
			func_58(iParam0, 1051260355 /* Float: 0.33f */);
		}
		else if (func_4(&(iParam0->f_5)) > 0.33f)
		{
			func_57(&(iParam0->f_2));
			return false;
		}
	}
	return true;
}

void func_57(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_58(int iParam0, bool bParam1)
{
	UNK_0x7E60C62A7CE58FC8(*iParam0, "SHARD_ANIM_OUT");
	UNK_0x3CAEA85DA607305E(iParam0->f_9);
	UNK_0x7C19E5E4784BD7CF(bParam1);
	UNK_0x7E60D21B163E9D56();
}

void func_59(bool bParam0)
{
	func_60(bParam0, 0f);
}

void func_60(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_5(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

void func_61(bool bParam0)
{
	char* sVar0;

	UNK_0x9CBC55A05A07FC47(0);
	switch (func_26())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	UNK_0x3D0B5872F36FB05C(sVar0);
}

void func_62(int iParam0, int iParam1)
{
	bool bVar0;

	func_64(Global_111638.f_24899[iParam0 /*4*/], func_100(iParam0), iParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_111638.f_24899.f_69 = (Global_111638.f_24899.f_69 + iParam1);
			break;
		case 2:
			Global_111638.f_24899.f_70 = (Global_111638.f_24899.f_70 + iParam1);
			break;
		case 0:
			Global_111638.f_24899.f_71 = (Global_111638.f_24899.f_71 + iParam1);
			break;
	}
	UNK_0x6FB46C25CCB7E6D5(func_63(iParam0, 1), &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	UNK_0xCDC520E5E48E63D9(func_63(iParam0, 1), bVar0, 1);
}

int func_63(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_TOWI");
				case 1:
					return joaat("PROP_EARNED_TOWI");
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_TAXI");
				case 1:
					return joaat("PROP_EARNED_TAXI");
				case 2:
					return joaat("PROP_MISSIONS_TAXI");
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_TRAF");
				case 1:
					return joaat("PROP_EARNED_TRAF");
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_SOCO");
				case 1:
					return joaat("PROP_EARNED_SOCO");
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CMSH");
				case 1:
					return joaat("PROP_EARNED_CMSH");
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CINV");
				case 1:
					return joaat("PROP_EARNED_CINV");
				case 2:
					return joaat("PROP_MISSIONS_CINV");
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CIND");
				case 1:
					return joaat("PROP_EARNED_CIND");
				case 2:
					return joaat("PROP_MISSIONS_CIND");
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CINM");
				case 1:
					return joaat("PROP_EARNED_CINM");
				case 2:
					return joaat("PROP_MISSIONS_CINM");
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_GOLF");
				case 1:
					return joaat("PROP_EARNED_GOLF");
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CSCR");
				case 1:
					return joaat("PROP_EARNED_CSCR");
				case 2:
					return joaat("PROP_MISSIONS_CSCR");
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_WEED");
				case 1:
					return joaat("PROP_EARNED_WEED");
				case 2:
					return joaat("PROP_MISSIONS_WEED");
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARTE");
				case 1:
					return joaat("PROP_EARNED_BARTE");
				case 2:
					return joaat("PROP_MISSIONS_BARTE");
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARPI");
				case 1:
					return joaat("PROP_EARNED_BARPI");
				case 2:
					return joaat("PROP_MISSIONS_BARPI");
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARHE");
				case 1:
					return joaat("PROP_EARNED_BARHE");
				case 2:
					return joaat("PROP_MISSIONS_BARHE");
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARHO");
				case 1:
					return joaat("PROP_EARNED_BARHO");
				case 2:
					return joaat("PROP_MISSIONS_BARHO");
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_STRIP");
				case 1:
					return joaat("PROP_EARNED_STRIP");
			}
			break;
	}
	return joaat("PROP_BOUGHT_TOWI");
}

void func_64(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;

	if (func_99(iParam0) == 3)
	{
		return;
	}
	if (func_99(iParam0) == 4)
	{
		return;
	}
	func_65(func_99(iParam0), 1, iParam1, iParam2, 0);
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

int func_65(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_98();
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
					func_97(99, 1);
					func_96(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_96(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_96(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
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
							func_96(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_96(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_96(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
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
							func_96(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_96(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_96(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_96(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_96(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_96(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_96(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_96(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_96(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_96(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_96(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_96(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_96(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_96(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_96(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
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
									func_96(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_96(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_96(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_96(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_96(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_96(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_75(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_97(95, iParam3);
					break;
				case 1:
					func_97(97, iParam3);
					break;
				case 2:
					func_97(96, iParam3);
					break;
			}
			func_97(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_68(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_68(bVar1);
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
					func_96(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					func_96(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					func_96(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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

void func_75(int iParam0)
{
	func_97(93, iParam0);
	func_97(29, iParam0);
	func_97(30, iParam0);
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
	if (func_32(14) && !func_94(iParam0))
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
	if (func_32(14) && !func_94(iParam1))
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
	if (func_32(14) && !func_94(iParam1))
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

void func_96(int iParam0, int iParam1)
{
	bool bVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	UNK_0xCDC520E5E48E63D9(iParam0, bVar0, 1);
}

void func_97(int iParam0, int iParam1)
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

void func_98()
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

int func_99(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 99;
		case 1:
			return 100;
		case 2:
			return 101;
		case 3:
			return 102;
		case 4:
			return 103;
		case 5:
			return 104;
		case 6:
			return 105;
		case 7:
			return 106;
		case 8:
			return 107;
		case 9:
			return 108;
		case 10:
			return 109;
		case 11:
			return 110;
		case 12:
			return 111;
		case 13:
			return 112;
		case 14:
			return 113;
		case 15:
			return 25;
	}
	return 0;
}

void func_101(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	UNK_0x7E60C62A7CE58FC8(*iParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	UNK_0x7ACC3006A87F8B39("STRING");
	UNK_0x3A820E495A7BA3E5(bParam7);
	UNK_0x6B012227B3921E18(bParam1);
	UNK_0x779B34565F4D71B1();
	UNK_0x7ACC3006A87F8B39(bParam5);
	UNK_0x6D99DF8263D35CE5(bParam2);
	UNK_0x6D99DF8263D35CE5(bParam3);
	UNK_0x6D99DF8263D35CE5(bParam4);
	UNK_0x779B34565F4D71B1();
	UNK_0x7E60D21B163E9D56();
	func_59(&(iParam0->f_2));
	iParam0->f_1 = iParam6;
	iParam0->f_9 = 1;
}

void func_102()
{
	Global_111638.f_19968.f_3++;
	Global_111638.f_19968.f_2 = iLocal_420;
	switch (iLocal_420)
	{
		case 2:
			Global_111638.f_19968.f_4++;
			break;
		case 3:
			Global_111638.f_19968.f_7++;
			break;
		case 0:
			Global_111638.f_19968.f_6++;
			break;
		case 1:
			Global_111638.f_19968.f_5++;
			break;
		case 4:
			Global_111638.f_19968.f_8++;
			break;
	}
}

bool func_103(char* sParam0)
{
	var uVar0;
	var uVar3;
	var uVar6;
	int iVar7;

	if (iLocal_3037 == -1)
	{
	}
	if (Local_2996[iLocal_3037 /*20*/].f_15)
	{
		if ((func_4(&(Local_2996[iLocal_3037 /*20*/].f_11)) - Local_2996[iLocal_3037 /*20*/].f_14) > 120f)
		{
			UNK_0x0DC87D17DC2658DC(Local_2996[iLocal_3037 /*20*/].f_6, 1, 0);
		}
	}
	if (func_104(&uVar0, &uVar3, &uVar6))
	{
		if (!UNK_0x437347B10A200C4B(Local_2996[iLocal_3037 /*20*/], 0) && UNK_0xC42A92762C58E1B9(Local_2996[iLocal_3037 /*20*/], bLocal_3109, 0))
		{
			UNK_0xE0C0351D5B931E37(bLocal_3109, 6f, 2, 0);
			bLocal_466 = true;
			if (UNK_0xC844350D5D58C99A(Local_2996[iLocal_3037 /*20*/]) && !UNK_0x437347B10A200C4B(Local_2996[iLocal_3037 /*20*/], 0))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_421);
				UNK_0xBC43ED9FE28DB191(false);
				UNK_0x75CDA8644CD3B5F5(false, 0, 0);
				UNK_0xDE7F7A4DA93201CF(0, Local_2996[0 /*20*/].f_6, 20000, 2f, 0f, 1f, 0);
				iVar7 = (UNK_0x09AC81E49EA267F7(false, 65535) % 3);
				if (iVar7 == 0)
				{
					UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
				else if (iVar7 == 1)
				{
					UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_SMOKING", 0, 1);
				}
				else if (iVar7 == 2)
				{
					UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
				}
				else
				{
					UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
				UNK_0x75ABDC5F81978924(iLocal_421);
				UNK_0x78ADC381772E3D54(Local_2996[iLocal_3037 /*20*/], iLocal_421);
				UNK_0xF82EA857DA10E0CD(&iLocal_421);
				UNK_0xFADC0A217229F6B5(Local_2996[iLocal_3037 /*20*/], true);
			}
			if ((Global_111638.f_19968.f_3 == 0 || Global_111638.f_19968.f_3 == 1) || Global_111638.f_19968.f_3 == 4)
			{
				if (UNK_0xC844350D5D58C99A(bLocal_2984) && !UNK_0x437347B10A200C4B(bLocal_2984, 0))
				{
					UNK_0xDD353D0E9C789D0E(&iLocal_421);
					UNK_0x75CDA8644CD3B5F5(false, 0, 0);
					UNK_0x01E4BB5190DF7317(false, 227.082f, 0);
					UNK_0x75ABDC5F81978924(iLocal_421);
					if (!UNK_0x437347B10A200C4B(bLocal_2984, 0))
					{
						UNK_0x78ADC381772E3D54(bLocal_2984, iLocal_421);
						UNK_0xFADC0A217229F6B5(bLocal_2984, true);
					}
					UNK_0xF82EA857DA10E0CD(&iLocal_421);
				}
			}
			if (func_47())
			{
				func_172();
			}
			if ((Global_111638.f_19968.f_3 == 0 || Global_111638.f_19968.f_3 == 1) || Global_111638.f_19968.f_3 == 4)
			{
				if (Global_111638.f_19968.f_3 == 0)
				{
					func_171(&Local_2348, "TOWAUD", "TOW_TUT_ENDA", 9, 0, 0, 0);
				}
				else if (Global_111638.f_19968.f_3 == 1)
				{
					func_171(&Local_2348, "TOWAUD", "TOW_TUT_ENDB", 9, 0, 0, 0);
				}
				else if (Global_111638.f_19968.f_3 == 4)
				{
					func_171(&Local_2348, "TOWAUD", "TOW_TUT_ENDC", 9, 0, 0, 0);
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_111638.f_19968.f_7 == 0 || Global_111638.f_19968.f_7 == 1)
				{
					func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWBREAKM", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_BRK_THNK", 9, 0, 0, 0);
				}
				else if (Global_111638.f_19968.f_7 == 2)
				{
					func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_BRK_THAN", 9, 0, 0, 0);
				}
			}
			else if (iLocal_420 == 1)
			{
				if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
				{
					func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWTRAINF", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_THANK", 9, 0, 0, 0);
				}
				else if (Global_111638.f_19968.f_5 == 2)
				{
					func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_THANK2", 9, 0, 0, 0);
				}
			}
		}
		if (!bLocal_2959)
		{
		}
		bLocal_468 = false;
		UNK_0x142CC44DB769B57E(&(Local_2996[iLocal_3037 /*20*/].f_8));
		func_59(&uLocal_3088);
		iLocal_3038 = (iLocal_3038 - 1);
		return true;
	}
	if (!UNK_0x437347B10A200C4B(bLocal_3109, 0) && !UNK_0x437347B10A200C4B(Local_2996[iLocal_3037 /*20*/].f_6, 0))
	{
		if (!UNK_0x6D18156F72BE0773(bLocal_3109, Local_2996[iLocal_3037 /*20*/].f_6))
		{
			bLocal_468 = false;
			func_146(&uLocal_399, 0, 0);
			UNK_0x661342B9651D16E2(Local_2996[iLocal_3037 /*20*/].f_8, false);
			UNK_0x142CC44DB769B57E(&(Local_2996[iLocal_3037 /*20*/].f_8));
			if (UNK_0xC844350D5D58C99A(Local_2996[iLocal_3037 /*20*/].f_6) && !UNK_0x437347B10A200C4B(Local_2996[iLocal_3037 /*20*/].f_6, 0))
			{
				if (!UNK_0xE4EDC4B0E92C078B(Local_2996[iLocal_3037 /*20*/].f_8))
				{
					Local_2996[iLocal_3037 /*20*/].f_8 = UNK_0x5C3B41825F6AC5A0(Local_2996[iLocal_3037 /*20*/].f_6);
					UNK_0x61755AC17D8F538E(Local_2996[iLocal_3037 /*20*/].f_8, 3);
				}
			}
			if (iLocal_420 == 1)
			{
				if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!bLocal_2978)
					{
						if (func_171(&Local_2348, "TOWAUD", "TOW_UNHOOK", 9, 1, 0, 0))
						{
							bLocal_2978 = true;
						}
					}
				}
				else if (Global_111638.f_19968.f_5 == 2)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!bLocal_2978)
					{
						if (func_171(&Local_2348, "TOWAUD", "TOW_UNHOOK2", 9, 1, 0, 0))
						{
							bLocal_2978 = true;
						}
					}
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_111638.f_19968.f_7 == 0 || Global_111638.f_19968.f_7 == 1)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!bLocal_2978)
					{
						if (func_171(&Local_2348, "TOWAUD", "TOW_BRK_UNHK", 9, 1, 0, 0))
						{
							bLocal_2978 = true;
						}
					}
				}
				else if (Global_111638.f_19968.f_7 == 2)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!bLocal_2978)
					{
						if (func_171(&Local_2348, "TOWAUD", "TOW_BRK_HOOK", 9, 1, 0, 0))
						{
							bLocal_2978 = true;
						}
					}
				}
			}
			func_59(&uLocal_3088);
			if (!bLocal_2957)
			{
				if (func_47())
				{
					UNK_0x5CEB4DB888A62073(true);
					UNK_0x790015DC92C918E2();
					func_115(sParam0, 7500, 1);
				}
				if (!func_47())
				{
					if (bLocal_2931)
					{
						UNK_0x790015DC92C918E2();
						func_115(sParam0, 7500, 1);
						bLocal_2931 = false;
					}
					else
					{
						UNK_0x790015DC92C918E2();
						func_115(sParam0, 7500, 1);
					}
					StringCopy(&cLocal_3068, sParam0, 64);
				}
			}
			iLocal_3115 = 7;
		}
	}
	return false;
}

bool func_104(var uParam0, var uParam1, var uParam2)
{
	if (iLocal_3037 != -1)
	{
		if (!func_11(Local_3017.f_14))
		{
			vLocal_2629 = { Local_3017.f_14 };
			*uParam0 = { Local_3017.f_7 };
			*uParam1 = { Local_3017.f_10 };
			*uParam2 = Local_3017.f_13;
		}
		else
		{
			*uParam0 = { Local_3017 };
			*uParam1 = { Local_3017.f_3 };
			*uParam2 = Local_3017.f_6;
		}
		if (!bLocal_2959)
		{
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_2629, 30f, 30f, 2f, true, true, 0))
				{
					if (iLocal_420 == 0 || iLocal_420 == 4)
					{
						if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
						{
							UNK_0x71EDC33E5A423750(Local_2996[0 /*20*/].f_6, 1);
							bLocal_2939 = true;
						}
					}
				}
			}
		}
		if (UNK_0xC844350D5D58C99A(Local_2996[iLocal_3037 /*20*/].f_6))
		{
			if (UNK_0x3D1053F9EB43B7AD(Local_2996[iLocal_3037 /*20*/].f_6, *uParam0, *uParam1, *uParam2, 0, false, 0))
			{
				if (bLocal_2941)
				{
					func_105("TOWT_HELP_UH", -1);
				}
				if (!UNK_0x437347B10A200C4B(bLocal_3109, 0) && !UNK_0x437347B10A200C4B(Local_2996[iLocal_3037 /*20*/].f_6, 0))
				{
					if (!UNK_0x6D18156F72BE0773(bLocal_3109, Local_2996[iLocal_3037 /*20*/].f_6) || (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_2996[iLocal_3037 /*20*/].f_6, 0) && !UNK_0x6D18156F72BE0773(bLocal_3109, Local_2996[iLocal_3037 /*20*/].f_6)))
					{
						if (func_47())
						{
							func_172();
						}
						func_146(&uLocal_399, 0, 0);
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_105(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_106(char* sParam0, vector3 vParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = true;
	if (!bLocal_2945 && !bLocal_2956)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_3109) && !UNK_0x437347B10A200C4B(bLocal_3109, 0))
		{
			bVar2 = UNK_0xC102CE429C03E382(bLocal_3109);
			if (UNK_0xC844350D5D58C99A(bVar2) && !UNK_0x437347B10A200C4B(bVar2, 0))
			{
				if (UNK_0xE2F1E99DD161A861(bVar2))
				{
					if (UNK_0x96A5FE5834B81CE7(bVar2) != Local_2996[0 /*20*/].f_6)
					{
						if (!bLocal_2972)
						{
							func_257(&uLocal_484, 3, bLocal_2984, "TONYA", 0, 1);
							if (func_171(&uLocal_484, "TOWAUD", "TONYA_WRONG", 9, 0, 0, 0))
							{
								bLocal_2972 = true;
							}
						}
					}
				}
			}
			else
			{
				bLocal_2972 = false;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (UNK_0xC844350D5D58C99A(Local_2996[iVar1 /*20*/].f_6))
		{
			if (!UNK_0x437347B10A200C4B(bLocal_3109, 0) && !UNK_0x437347B10A200C4B(Local_2996[iVar1 /*20*/].f_6, 0))
			{
				if (UNK_0x6D18156F72BE0773(bLocal_3109, Local_2996[iVar1 /*20*/].f_6) && func_112())
				{
					UNK_0xAA280AF45BCCCF21(bLocal_3109, 1);
					func_109();
					func_146(&uLocal_399, 0, 0);
					bLocal_468 = true;
					if (bLocal_2961 && !UNK_0xC42A92762C58E1B9(Local_2996[iVar1 /*20*/], bLocal_3109, 0))
					{
						bVar0 = false;
						if (iLocal_3120 < 4)
						{
							SYSTEM::SETTIMERB(0);
							iLocal_3120 = 5;
						}
					}
					if (bVar0)
					{
						func_108(&uLocal_3094);
						UNK_0x661342B9651D16E2(Local_2996[iVar1 /*20*/].f_8, false);
						iLocal_2967 = 0;
						func_107(Local_2996[iVar1 /*20*/].f_8);
						Local_2996[iVar1 /*20*/].f_14 = func_4(&(Local_2996[iVar1 /*20*/].f_11));
						if (iLocal_2992 == 0)
						{
							Local_2996[iVar1 /*20*/].f_8 = UNK_0x6CC513A908911CF0(vParam1);
							fLocal_430 = func_9(vParam1, 0);
							vLocal_2625[0 /*3*/] = { vParam1 };
						}
						if (iLocal_420 == 4)
						{
							UNK_0x152BCACCF710B36E(Local_2996[0 /*20*/].f_6, false, 0);
						}
						func_59(&uLocal_3100);
						UNK_0x61755AC17D8F538E(Local_2996[iVar1 /*20*/].f_8, 5);
						UNK_0x661342B9651D16E2(Local_2996[iVar1 /*20*/].f_8, true);
						if (iLocal_420 == 0 && bLocal_2965)
						{
						}
						else if (bLocal_2932)
						{
							func_115(sParam0, 7500, 1);
							bLocal_2932 = false;
						}
						StringCopy(&cLocal_3068, sParam0, 64);
						UNK_0x28F5E4DA506AC0CA(vLocal_2625[0 /*3*/], 6f, 0, 0, 0, 0, false, 0);
						iLocal_3037 = iVar1;
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	return false;
}

void func_107(int iParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(iParam0))
	{
		UNK_0x142CC44DB769B57E(&iParam0);
	}
}

void func_108(var uParam0)
{
	func_57(uParam0);
	StringCopy(&cLocal_317, "", 32);
}

void func_109()
{
	func_110("TOW_TUT_03");
	func_110("TOW_TUT_02");
	func_110("TOW_TUT_01");
	UNK_0x2F23E8033F1ADDD9("TOWT_OBJ_03");
	UNK_0x2F23E8033F1ADDD9("TOWT_OBJ_03a");
	UNK_0x2F23E8033F1ADDD9("TOWT_OBJ_03G");
	UNK_0x2F23E8033F1ADDD9("TOWT_OBJ_03Ga");
	UNK_0x2F23E8033F1ADDD9("TOWT_OBJS_03");
}

void func_110(bool bParam0)
{
	if (func_111(bParam0))
	{
		UNK_0xA37A90C62806D848(1);
	}
}

bool func_111(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

bool func_112()
{
	if (bLocal_2959)
	{
		if (bLocal_2602 && !func_47())
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

void func_113()
{
	int iVar0;

	if (((!UNK_0x437347B10A200C4B(bLocal_3109, 0) && !UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0)) && UNK_0x6D18156F72BE0773(bLocal_3109, Local_2996[0 /*20*/].f_6)) || (Global_111638.f_19968.f_3 == 0 || Global_111638.f_19968.f_3 > 2))
	{
		return;
	}
	switch (iLocal_3050)
	{
		case 0:
			if (!func_7(&uLocal_3106))
			{
				func_263(&uLocal_3106);
				iLocal_3050 = 1;
			}
			break;
		case 1:
			if (func_7(&uLocal_3106))
			{
				if (func_4(&uLocal_3106) > 10f)
				{
					if (!UNK_0x8FA469D9C5F1A01F() && !func_47())
					{
						iVar0 = (UNK_0x09AC81E49EA267F7(false, 65535) % 2);
						if (iVar0 == 0)
						{
							func_105("TOW_TUT_04C", -1);
						}
						else if (iVar0 == 1)
						{
							func_105("TOW_TUT_02", -1);
						}
						else
						{
							func_105("TOW_TUT_04C", -1);
						}
						func_59(&uLocal_3106);
						iLocal_3050 = 2;
					}
				}
			}
			break;
		case 2:
			if (func_7(&uLocal_3106))
			{
				if (func_4(&uLocal_3106) > 15f)
				{
					if (!UNK_0x8FA469D9C5F1A01F() && !func_47())
					{
						func_105("TOW_TUT_03", -1);
						func_59(&uLocal_3106);
						iLocal_3050 = 3;
					}
				}
			}
			break;
		case 3:
			if (func_7(&uLocal_3106))
			{
				if (func_4(&uLocal_3106) > 15f)
				{
					if (!UNK_0x8FA469D9C5F1A01F() && !func_47())
					{
						func_105("TOW_TUT_01", -1);
						iLocal_3050 = 4;
					}
				}
			}
			break;
		case 4:
			break;
	}
}

void func_114(int iParam0, var uParam1)
{
	if (func_11(vLocal_45[0 /*3*/]))
	{
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -230.8514f, -1181.072f, 21.06031f };
			uParam1->f_3 = { -230.4658f, -1163.16f, 28.99641f };
			uParam1->f_6 = 22.25f;
			uParam1->f_17 = { vLocal_45[0 /*3*/] };
			break;
		case 1:
			*uParam1 = { -204.0603f, -1390.024f, 30.25342f };
			uParam1->f_3 = { -207.5665f, -1382.582f, 33.46937f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { vLocal_45[1 /*3*/] };
			break;
		case 2:
			*uParam1 = { -204.0603f, -1390.024f, 30.25342f };
			uParam1->f_3 = { -207.5665f, -1382.582f, 33.46937f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { vLocal_45[2 /*3*/] };
			break;
		case 3:
			*uParam1 = { 538.747f, -177.535f, 74.484f };
			uParam1->f_3 = { 528.747f, -177.535f, 34.484f };
			uParam1->f_6 = 28f;
			uParam1->f_17 = { vLocal_45[3 /*3*/] };
			break;
		case 4:
			*uParam1 = { 1158.944f, -776.686f, 77.608f };
			uParam1->f_3 = { 1118.944f, -776.686f, 37.608f };
			uParam1->f_6 = 10f;
			uParam1->f_17 = { vLocal_45[4 /*3*/] };
			break;
		case 5:
			*uParam1 = { 798.455f, -821.201f, 46.186f };
			uParam1->f_3 = { 813.455f, -821.201f, 6.186f };
			uParam1->f_6 = 20f;
			uParam1->f_17 = { vLocal_45[5 /*3*/] };
			break;
		case 6:
			*uParam1 = { 2504.934f, 4085.125f, 58.636f };
			uParam1->f_3 = { 2500.285f, 4075.156f, 18.636f };
			uParam1->f_6 = 12f;
			uParam1->f_17 = { vLocal_45[6 /*3*/] };
			break;
		case 7:
			*uParam1 = { 256.5623f, 2600.458f, 43.3306f };
			uParam1->f_3 = { 268.6701f, 2602.716f, 46.74961f };
			uParam1->f_6 = 5f;
			uParam1->f_17 = { vLocal_45[7 /*3*/] };
			break;
		case 8:
			*uParam1 = { 398.7471f, -1650.806f, 27.29324f };
			uParam1->f_3 = { 434.1311f, -1610.011f, 33.34294f };
			uParam1->f_6 = 40.5f;
			uParam1->f_14 = { 400.2854f, -1632.597f, 28.29278f };
			uParam1->f_17 = { vLocal_70[0 /*3*/] };
			uParam1->f_7 = { 396.8347f, -1639.045f, 27.29278f };
			uParam1->f_10 = { 408.0073f, -1625.608f, 33.29277f };
			uParam1->f_13 = 10f;
			break;
	}
}

void func_115(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

bool func_116(int iParam0, int iParam1, char* sParam2)
{
	sParam2 = sParam2;
	switch (*iParam0)
	{
		case 0:
			if (!bLocal_2958)
			{
				if ((func_123(Local_2996[iParam1 /*20*/].f_6, bLocal_3109, &iLocal_2603, 10, 150f, 4f, 1) || bLocal_2953) || bLocal_468)
				{
					if (!bLocal_2936)
					{
						iLocal_2603 = 0;
						func_122(&iLocal_2598);
						if (UNK_0xD1960163A3042274(Local_2996[iParam1 /*20*/], -875674219) != 1)
						{
							UNK_0xF96A174EE26D7588(Local_2996[iParam1 /*20*/], UNK_0x16F2683693E537C9(), -1);
						}
						bLocal_2936 = true;
					}
					if (bLocal_2936)
					{
						if (UNK_0x5A91F08DF773C39D(bLocal_3109, UNK_0x68F4C0EC296D3901(Local_2996[iParam1 /*20*/], true), 25f, 25f, 25f, false, true, 0))
						{
							if (UNK_0xB4ECF989E2C1DAC8(Local_2996[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", 3))
							{
								UNK_0xFB131B855F2FD560(Local_2996[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", -4f);
							}
							if (!func_121())
							{
								if (iLocal_420 == 1)
								{
									if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
									{
										func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
										func_257(&Local_2348, 5, Local_2996[iParam1 /*20*/], "TOWTRAINF", 0, 1);
										func_171(&Local_2348, "TOWAUD", "TOW_GREET", 9, 1, 0, 0);
									}
									else if (Global_111638.f_19968.f_5 == 2)
									{
										func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
										func_257(&Local_2348, 6, Local_2996[iParam1 /*20*/], "TOWILLEGALMAN2", 0, 1);
										func_171(&Local_2348, "TOWAUD", "TOW_GREET2", 9, 1, 0, 0);
									}
									UNK_0x5B1D360B9C6F0A09(Local_2996[iParam1 /*20*/], bLocal_3109, 20000, false, 2f, 1048577, 0);
								}
								else if (iLocal_420 == 3)
								{
									if (Global_111638.f_19968.f_7 == 0 || Global_111638.f_19968.f_7 == 1)
									{
										func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
										func_257(&Local_2348, 5, Local_2996[iParam1 /*20*/], "TOWBREAKM", 0, 1);
										func_171(&Local_2348, "TOWAUD", "TOW_BRK_GRT", 9, 1, 0, 0);
									}
									else if (Global_111638.f_19968.f_7 == 2)
									{
										func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
										func_257(&Local_2348, 6, Local_2996[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
										func_171(&Local_2348, "TOWAUD", "TOW_BRK_GRT2", 9, 1, 0, 0);
									}
									UNK_0x5B1D360B9C6F0A09(Local_2996[iParam1 /*20*/], bLocal_3109, 20000, false, 2f, 1048577, 0);
								}
								if (bLocal_2953)
								{
									UNK_0x142CC44DB769B57E(&(Local_2996[iParam1 /*20*/].f_8));
									if (UNK_0xC844350D5D58C99A(Local_2996[iParam1 /*20*/]))
									{
										Local_2996[iParam1 /*20*/].f_8 = UNK_0x5C3B41825F6AC5A0(Local_2996[iParam1 /*20*/]);
										UNK_0x61755AC17D8F538E(Local_2996[iParam1 /*20*/].f_8, 3);
										UNK_0x516E63E474722206(Local_2996[iParam1 /*20*/].f_8, 0.7f);
									}
								}
								SYSTEM::SETTIMERA(0);
								*iParam0 = 1;
							}
						}
						else if (UNK_0x5A91F08DF773C39D(bLocal_3109, UNK_0x68F4C0EC296D3901(Local_2996[iParam1 /*20*/], true), 50f, 50f, 50f, false, true, 0))
						{
							if (!bLocal_2977)
							{
								if (Global_111638.f_19968.f_7 == 0 || Global_111638.f_19968.f_7 == 1)
								{
									func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
									func_257(&Local_2348, 5, Local_2996[iParam1 /*20*/], "TOWBREAKM", 0, 1);
									if (func_171(&Local_2348, "TOWAUD", "TOW_CALLING", 9, 1, 0, 0))
									{
										bLocal_2977 = true;
									}
								}
								else if (Global_111638.f_19968.f_7 == 2)
								{
									func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
									func_257(&Local_2348, 6, Local_2996[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
									if (func_171(&Local_2348, "TOWAUD", "TOW_BRK_CALL", 9, 1, 0, 0))
									{
										bLocal_2977 = true;
									}
								}
							}
						}
					}
				}
			}
			break;
		case 1:
			bLocal_2940 = true;
			func_59(&uLocal_3100);
			func_59(&uLocal_3085);
			func_107(Local_2996[iParam1 /*20*/].f_8);
			if (!UNK_0xE4EDC4B0E92C078B(Local_2996[0 /*20*/].f_9))
			{
				if (UNK_0xC844350D5D58C99A(Local_2996[iParam1 /*20*/]))
				{
					Local_2996[0 /*20*/].f_9 = UNK_0x5C3B41825F6AC5A0(Local_2996[iParam1 /*20*/]);
					UNK_0x61755AC17D8F538E(Local_2996[0 /*20*/].f_9, 3);
					UNK_0x516E63E474722206(Local_2996[0 /*20*/].f_9, 0.7f);
				}
			}
			func_115("TOWT_OBJ_02", 7500, 1);
			*iParam0 = 2;
			break;
		case 2:
			UNK_0xF63400DBE3303D26("TOWBUDDIES", &bLocal_2995);
			UNK_0x0E2400AB9174FA81(1, bLocal_2995, joaat("PLAYER"));
			UNK_0x6DF7BF67E86AAE86(Local_2996[iParam1 /*20*/], bLocal_2995);
			func_120(iParam1);
			*iParam0 = 3;
			break;
		case 3:
			if (!UNK_0xC42A92762C58E1B9(Local_2996[iParam1 /*20*/], bLocal_3109, 0))
			{
				if (func_117(&uLocal_3124, Local_2996[iParam1 /*20*/], 1125515264 /* Float: 150f */, 30000))
				{
					iLocal_3084 = 11;
					func_267();
				}
			}
			if (UNK_0xC42A92762C58E1B9(Local_2996[iParam1 /*20*/], bLocal_3109, 0))
			{
				if (!UNK_0x437347B10A200C4B(bLocal_3109, 0))
				{
					UNK_0x71EDC33E5A423750(bLocal_3109, 9);
					func_107(Local_2996[0 /*20*/].f_9);
				}
			}
			if (UNK_0xC42A92762C58E1B9(Local_2996[iParam1 /*20*/], bLocal_3109, 0) && !UNK_0x25037C66EB32B076())
			{
				if (iLocal_420 == 1)
				{
					if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
					{
						if (bLocal_2953)
						{
							func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWTRAINF", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
						else
						{
							func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWTRAINF", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
					}
					else if (Global_111638.f_19968.f_5 == 2)
					{
						if (bLocal_2953)
						{
							func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
						else
						{
							func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
				else if (iLocal_420 == 3)
				{
					if (Global_111638.f_19968.f_7 == 0 || Global_111638.f_19968.f_7 == 1)
					{
						if (bLocal_2953)
						{
							func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWBREAKM", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
						else
						{
							func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWBREAKM", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
					}
					else if (Global_111638.f_19968.f_7 == 2)
					{
						if (bLocal_2953)
						{
							func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
						else
						{
							func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
			}
			break;
		case 4:
			if (UNK_0xC42A92762C58E1B9(Local_2996[iParam1 /*20*/], bLocal_3109, 0))
			{
				func_120(iParam1);
				if (!UNK_0x437347B10A200C4B(bLocal_3109, 0) && !UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
				{
					if (bLocal_2953 && UNK_0x6D18156F72BE0773(bLocal_3109, Local_2996[0 /*20*/].f_6))
					{
						return true;
					}
				}
				if (!UNK_0xE4EDC4B0E92C078B(Local_2996[0 /*20*/].f_8))
				{
					if (UNK_0xC844350D5D58C99A(Local_2996[iParam1 /*20*/].f_6) && !UNK_0x437347B10A200C4B(Local_2996[iParam1 /*20*/].f_6, 0))
					{
						Local_2996[0 /*20*/].f_8 = UNK_0x5C3B41825F6AC5A0(Local_2996[iParam1 /*20*/].f_6);
						UNK_0x61755AC17D8F538E(Local_2996[iParam1 /*20*/].f_8, 3);
					}
				}
				if (!UNK_0x437347B10A200C4B(bLocal_3109, 0) && !UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
				{
					if (!UNK_0x6D18156F72BE0773(bLocal_3109, Local_2996[0 /*20*/].f_6))
					{
						func_115("TOWT_OBJ_03", 7500, 1);
						StringCopy(&cLocal_3068, "TOWT_OBJ_03", 64);
					}
				}
				func_59(&uLocal_3085);
				*iParam0 = 0;
				return true;
			}
			break;
	}
	return false;
}

bool func_117(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	iParam2 = iParam2;
	iParam3 = iParam3;
	switch (*uParam0)
	{
		case 0:
			uParam0->f_1 = UNK_0x1C0640BA9A7327B3();
			uParam0->f_2 = func_118(bParam1, 1);
			*uParam0 = 1;
			break;
		case 1:
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			}
			if (!UNK_0x437347B10A200C4B(bParam1, 0))
			{
				vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
			}
			if (SYSTEM::VDIST2(vVar0, vVar3) > 22500f)
			{
				return true;
			}
			break;
	}
	return false;
}

float func_118(bool bParam0, int iParam1)
{
	return func_119(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4()), bParam0, iParam1);
}

float func_119(bool bParam0, bool bParam1, int iParam2)
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

void func_120(int iParam0)
{
	int iVar0;

	bLocal_2958 = true;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iVar0 != iParam0)
		{
			if (UNK_0xE4EDC4B0E92C078B(Local_2996[iVar0 /*20*/].f_8))
			{
				UNK_0x142CC44DB769B57E(&(Local_2996[iVar0 /*20*/].f_8));
			}
		}
		iVar0++;
	}
}

bool func_121()
{
	float fVar0;

	if (!UNK_0x437347B10A200C4B(bLocal_3109, 0) && !UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
	{
		if (UNK_0x6D18156F72BE0773(bLocal_3109, Local_2996[0 /*20*/].f_6))
		{
			fVar0 = UNK_0x9C66D99E63E8E24C(bLocal_3109);
			if (fVar0 > 1f)
			{
				return true;
			}
		}
	}
	return false;
}

void func_122(int iParam0)
{
	if (*iParam0 != -1)
	{
		UNK_0x55D0A2DB35045A35(*iParam0);
		UNK_0x43A06902454A1172(*iParam0);
		*iParam0 = -1;
	}
}

bool func_123(bool bParam0, bool bParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6)
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xEC560E589DF8370E(bParam0))
		{
			bVar0 = UNK_0x940C1429253D3B1B(bParam0);
		}
	}
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0x437347B10A200C4B(bVar0, 0) && UNK_0xEB6A8945D1AC98A1(bVar0))
		{
			return false;
		}
	}
	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xC844350D5D58C99A(bParam1))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0) && !UNK_0x437347B10A200C4B(bParam1, 0))
		{
			if (bParam6)
			{
			}
			if (!UNK_0x03068588A1FCED1A(bParam0) && func_118(bParam0, 1) < fParam4)
			{
				*iParam2++;
			}
			else
			{
				*iParam2 = 0;
			}
			if (((*iParam2 > iParam3 || func_118(bParam0, 1) < 8f) && UNK_0x9C66D99E63E8E24C(bParam1) < fParam5) && !UNK_0x03068588A1FCED1A(bParam0))
			{
				*iParam2 = 0;
				return true;
			}
		}
	}
	if (bParam6)
	{
	}
	return false;
}

void func_124()
{
	int iVar0;

	if (!bLocal_2940)
	{
		iVar0 = SYSTEM::ROUND(((300f - func_128(&uLocal_3100)) * 1000f));
		if (iLocal_420 == 3)
		{
			if ((iVar0 / 1000) < 60)
			{
				func_125(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_125(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
}

void func_125(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	bool bVar1;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_127(7, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_126(7, bVar0);
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

void func_126(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), bParam1);
}

bool func_127(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], bParam1);
}

float func_128(var uParam0)
{
	if (func_7(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(UNK_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_129(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&Global_110276, bParam0);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_110276, bParam0);
	}
	Global_110275 = 1;
}

void func_130()
{
	int iVar0;

	iVar0 = func_131(&vLocal_45, vLocal_2625[0 /*3*/], 400f);
	if (iVar0 != -1)
	{
		vLocal_2629 = { vLocal_45[iVar0 /*3*/] };
		func_114(iVar0, &Local_3017);
	}
	else
	{
		vLocal_2629 = { vLocal_45[0 /*3*/] };
	}
}

int func_131(var uParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = 0;
	fVar2 = 1E+09f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_11(*(uParam0[iVar0 /*3*/])))
		{
			fVar3 = SYSTEM::VDIST2(*(uParam0[iVar0 /*3*/]), vParam1);
			if (fVar3 < fVar2 && fVar3 > fParam4)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == -1)
	{
	}
	return iVar1;
}

bool func_132(char* sParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)
{
	fLocal_430 = func_9(vLocal_3063, 0);
	vLocal_2625[0 /*3*/] = { vLocal_3063 };
	bLocal_3114 = sParam0;
	sParam1 = sParam1;
	if (bParam3)
	{
		if (func_138(vLocal_3063, fLocal_3066, uParam2, 0))
		{
			func_137(Local_2996[0 /*20*/].f_6, &uLocal_3042, &uLocal_3044);
			UNK_0xF5FF7A70C82F0CCC(Local_2996[0 /*20*/].f_6, 1);
			UNK_0xA22F71BBC8173C39(Local_2996[0 /*20*/].f_6, false);
			UNK_0xE8832A9E16A57A1F(Local_2996[0 /*20*/].f_6, true, 1);
			UNK_0x44A200C9B6E1CEA6(Local_2996[0 /*20*/].f_6, true);
			return true;
		}
	}
	else if (func_133(bParam4, 0))
	{
		func_137(Local_2996[0 /*20*/].f_6, &uLocal_3042, &uLocal_3044);
		UNK_0xF5FF7A70C82F0CCC(Local_2996[0 /*20*/].f_6, 1);
		UNK_0xA22F71BBC8173C39(Local_2996[0 /*20*/].f_6, false);
		UNK_0xE8832A9E16A57A1F(Local_2996[0 /*20*/].f_6, true, 1);
		UNK_0x44A200C9B6E1CEA6(Local_2996[0 /*20*/].f_6, true);
		return true;
	}
	return false;
}

bool func_133(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (!func_135(Local_650[iLocal_2604 /*23*/].f_1, Local_650[iLocal_2604 /*23*/].f_4, &iVar0, 0, iParam1))
	{
		return false;
	}
	fLocal_430 = func_9(Local_650[iLocal_2604 /*23*/].f_1, 0);
	vLocal_2625[0 /*3*/] = { Local_650[iLocal_2604 /*23*/].f_1 };
	if (Local_650[iLocal_2604 /*23*/] == 2)
	{
		UNK_0x26E12C087E2B91F8(Local_2996[0 /*20*/].f_6, 0f, 1.2f, 0f, 1600f, 1600f, 1);
		UNK_0x26E12C087E2B91F8(Local_2996[0 /*20*/].f_6, 0f, 0.75f, 0.05f, 1600f, 1600f, 1);
		UNK_0x26E12C087E2B91F8(Local_2996[0 /*20*/].f_6, -0.7f, 0f, 0f, 1600f, 1600f, 1);
		UNK_0x26E12C087E2B91F8(Local_2996[0 /*20*/].f_6, 0.7f, 0f, 0f, 1600f, 1600f, 1);
	}
	else if (Local_650[iLocal_2604 /*23*/] == 4)
	{
		fLocal_3066 = -1f;
		bLocal_2950 = true;
		bLocal_3110 = UNK_0x122AAB0B1D6F55AD(joaat("AMBULANCE"), Local_1870[func_256() /*28*/].f_23, Local_1870[func_256() /*28*/].f_26, true, true, false);
		if (!UNK_0x437347B10A200C4B(bLocal_3110, 0))
		{
			UNK_0xAA280AF45BCCCF21(bLocal_3110, 1);
			UNK_0x56FDC9ADE35F7DB0(bLocal_3110, true, true, 0);
			bLocal_3111 = UNK_0x852A19533F896693(bLocal_3110, 4, joaat("S_M_M_PARAMEDIC_01"), -1, 1, true);
		}
		if (!func_11(Local_1870[func_256() /*28*/].f_17))
		{
			iLocal_2347 = func_134(Local_1870[func_256() /*28*/].f_17, Local_1870[func_256() /*28*/].f_20);
		}
		switch (Local_650[iLocal_2604 /*23*/].f_21)
		{
			case 1:
				UNK_0x26E12C087E2B91F8(Local_2996[0 /*20*/].f_6, -0.5223f, 2.455f, 0.0784f, 200f, 250f, 1);
				UNK_0x26E12C087E2B91F8(Local_2996[0 /*20*/].f_6, -1f, 1.5f, -0.5f, 200f, 250f, 1);
				break;
			case 0:
				UNK_0x26E12C087E2B91F8(Local_2996[0 /*20*/].f_6, 0.6012f, 2.4222f, 0.0245f, 200f, 250f, 1);
				UNK_0x26E12C087E2B91F8(Local_2996[0 /*20*/].f_6, 1f, 1.5f, -0.5f, 200f, 250f, 1);
				break;
			case 2:
				UNK_0x26E12C087E2B91F8(Local_2996[0 /*20*/].f_6, 0.1414f, 1.8401f, 0.0342f, 200f, 350f, 1);
				break;
		}
		UNK_0x611DFA9294B339CA(Local_2996[0 /*20*/].f_6, false, 0, false);
	}
	if (bParam0)
	{
		bLocal_442 = true;
		if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
		{
			Local_2996[0 /*20*/] = UNK_0x852A19533F896693(Local_2996[0 /*20*/].f_6, 26, joaat("A_F_M_BEVHILLS_01"), -1, 1, true);
		}
		else if (Global_111638.f_19968.f_5 == 2)
		{
			Local_2996[0 /*20*/] = UNK_0x852A19533F896693(Local_2996[0 /*20*/].f_6, 26, joaat("A_M_Y_GENSTREET_02"), -1, 1, true);
		}
		else
		{
			Local_2996[0 /*20*/] = UNK_0x852A19533F896693(Local_2996[0 /*20*/].f_6, 26, iLocal_2989[0], -1, 1, true);
		}
	}
	return true;
}

int func_134(vector3 vParam0, vector3 vParam3)
{
	UNK_0x10F3BFFADF2CE3DA(vParam0, vParam3);
	UNK_0x51EA29724CE5BF82(vParam0, vParam3, 1);
	return UNK_0x7D6CA5F52B3748BF(vParam0, vParam3, 0, 1, 1, 1);
}

bool func_135(vector3 vParam0, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	*iParam4 = func_136(&Local_2996);
	if (*iParam4 == -1)
	{
		return false;
	}
	if (iLocal_3039 >= 2)
	{
		iLocal_3039 = 0;
	}
	Local_2996[*iParam4 /*20*/].f_6 = UNK_0x122AAB0B1D6F55AD(iLocal_2987[iLocal_3039], vParam0, bParam3, true, true, false);
	UNK_0xE8832A9E16A57A1F(Local_2996[*iParam4 /*20*/].f_6, true, 1);
	iLocal_3039++;
	fLocal_430 = func_9(vParam0, 0);
	if (iLocal_420 == 1)
	{
		fVar0 = 20f;
		fVar1 = 40f;
		fVar2 = 60f;
	}
	else
	{
		fVar0 = 4f;
		fVar1 = 20f;
		fVar2 = 40f;
	}
	if (!func_11(Local_650[iLocal_2604 /*23*/].f_10))
	{
		Local_2996[*iParam4 /*20*/].f_17 = UNK_0xA4B9EE930B45BDFA(Local_650[iLocal_2604 /*23*/].f_10, fVar0, 0f, 0);
	}
	else
	{
		Local_2996[*iParam4 /*20*/].f_17 = UNK_0xA4B9EE930B45BDFA(vParam0, fVar0, 0f, 0);
	}
	Local_2996[*iParam4 /*20*/].f_18 = UNK_0xA4B9EE930B45BDFA(vParam0, fVar1, 2.5f, 0);
	Local_2996[*iParam4 /*20*/].f_19 = UNK_0xA4B9EE930B45BDFA(vParam0, fVar2, 4f, 0);
	if (bParam5)
	{
		if (Local_2996[*iParam4 /*20*/].f_15)
		{
			UNK_0xBBBF14C3EA856B1A(Local_2996[*iParam4 /*20*/].f_6, 1);
			UNK_0x5DAB50E08C3C504A(Local_2996[*iParam4 /*20*/].f_6, 1f);
			UNK_0x31BC65E81AF6F8E4(Local_2996[*iParam4 /*20*/].f_6, 1);
		}
		else
		{
			UNK_0xBBBF14C3EA856B1A(Local_2996[*iParam4 /*20*/].f_6, 1);
			UNK_0x5DAB50E08C3C504A(Local_2996[*iParam4 /*20*/].f_6, 1f);
			UNK_0x31BC65E81AF6F8E4(Local_2996[*iParam4 /*20*/].f_6, 1);
		}
	}
	if (!bLocal_2958 && bParam6)
	{
		if (UNK_0xC844350D5D58C99A(Local_2996[*iParam4 /*20*/].f_6))
		{
			Local_2996[*iParam4 /*20*/].f_8 = UNK_0x5C3B41825F6AC5A0(Local_2996[*iParam4 /*20*/].f_6);
			UNK_0x61755AC17D8F538E(Local_2996[*iParam4 /*20*/].f_8, 3);
		}
	}
	iLocal_3038++;
	func_263(&(Local_2996[*iParam4 /*20*/].f_11));
	return true;
}

int func_136(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if ((iParam0[iVar0 /*20*/])->f_6 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_137(bool bParam0, var uParam1, var uParam2)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		*uParam1 = UNK_0x7F6DC62EA9922664(bParam0);
		*uParam2 = *uParam1;
	}
}

bool func_138(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	bool bVar15;

	if (!func_135(vParam0, iParam3, uParam4, 1, iParam5))
	{
		return false;
	}
	if (*uParam4 == -1)
	{
	}
	UNK_0x611DFA9294B339CA(Local_2996[*uParam4 /*20*/].f_6, 4, 0, false);
	UNK_0xA6B02C1DB14DDA13(UNK_0x134B62B726CEC8E6(Local_2996[*uParam4 /*20*/].f_6), &vVar3, &vVar6);
	vVar9 = { vVar6 - vVar3 };
	vVar9 = { vVar9 / Vector(2f, 2f, 2f) };
	bLocal_2950 = true;
	vVar0 = { UNK_0x68E4ADDDDCD7BDDE(Local_2996[*uParam4 /*20*/].f_6, 1.5f, 0f, 0f) };
	vVar12 = { UNK_0x68F4C0EC296D3901(Local_2996[*uParam4 /*20*/].f_6, true) };
	bVar15 = UNK_0xD9522BA9E27E1349(Local_2996[*uParam4 /*20*/].f_6);
	iLocal_3048 = UNK_0xA4B9EE930B45BDFA(UNK_0x8A5E176FF719A014(vVar12, bVar15, -1.5f, -30f, 0f), 10f, 0f, 0);
	iLocal_3049 = UNK_0xA4B9EE930B45BDFA(UNK_0x8A5E176FF719A014(vVar12, bVar15, -1.5f, 30f, 0f), 10f, 0f, 0);
	UNK_0x28F5E4DA506AC0CA(vVar0, 30f, 0, 0, 0, 0, false, 0);
	Local_1870[func_256() /*28*/][0 /*3*/] = { vVar0.x, vVar0.y, (vVar0.z + 1f) };
	return true;
}

bool func_139(var uParam0, bool bParam1, float fParam2, var uParam3)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	vector3 vVar5;
	float fVar8;
	float fVar9;
	int iVar10;

	fVar8 = 0f;
	fVar9 = 0f;
	iVar10 = (UNK_0x09AC81E49EA267F7(false, 3999) / 1000);
	if (iVar10 == 0)
	{
		fVar8 = -UNK_0x79833B02DBD2A244(450f, 700f);
		fVar9 = UNK_0x79833B02DBD2A244(-100f, 100f);
	}
	else if (iVar10 == 1)
	{
		fVar8 = UNK_0x79833B02DBD2A244(450f, 700f);
		fVar9 = UNK_0x79833B02DBD2A244(100f, 100f);
	}
	else if (iVar10 == 2)
	{
		fVar9 = UNK_0x79833B02DBD2A244(450f, 700f);
		fVar8 = UNK_0x79833B02DBD2A244(-100f, 100f);
	}
	else
	{
		fVar9 = -UNK_0x79833B02DBD2A244(450f, 700f);
		fVar8 = UNK_0x79833B02DBD2A244(-100f, 100f);
	}
	vVar0 = { UNK_0x68E4ADDDDCD7BDDE(UNK_0x16F2683693E537C9(), fVar8, fVar9, 0f) };
	if (!UNK_0xD67BAD44C1B3CADE(vVar0, 10f, 1, 1, 1, &vVar5, &uVar4))
	{
		return false;
	}
	UNK_0x4A13F7D4B1E239A0(vVar5, 2, fParam2, bParam1, &uVar3, true, 1077936128, false);
	*uParam0 = { vVar5 };
	if (UNK_0x8A22C4C08282BF26(joaat("TONYA4")) == 1)
	{
		*uParam0 = { -476.1537f, 132.6556f, 62.9586f };
		*bParam1 = 87.951f;
	}
	if (func_140(*uParam0, 0f, 0f, 0f, 0))
	{
		return false;
	}
	return true;
}

bool func_140(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_141(int iParam0)
{
	int iVar0;
	vector3 vVar1[24];

	if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
	{
		iVar0 = iParam0;
		UNK_0x3CFFF3C8EACD8DC1(8, &iVar0, 1, 1);
	}
	else if (UNK_0xBA301E03A078FA59() || UNK_0x33A494591F2C1975())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		UNK_0x8DECFDD6715449E4(8, &cVar1);
	}
}

void func_142()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (UNK_0xE4EDC4B0E92C078B(vLocal_280[iVar0 /*3*/].f_1))
		{
			if (UNK_0x437347B10A200C4B(vLocal_280[iVar0 /*3*/], 0))
			{
				UNK_0x142CC44DB769B57E(&(vLocal_280[iVar0 /*3*/].f_1));
			}
			else if (vLocal_280[iVar0 /*3*/].f_2 && func_118(vLocal_280[iVar0 /*3*/], 1) > 200f)
			{
				UNK_0x142CC44DB769B57E(&(vLocal_280[iVar0 /*3*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_143()
{
	if (!UNK_0x7F8A39872A07D2CE(&cLocal_272, ""))
	{
		if (!func_47())
		{
			func_171(&Local_96, &cLocal_272, &cLocal_276, 9, 0, 0, 0);
			StringCopy(&cLocal_272, "", 16);
		}
	}
}

void func_144(var uParam0, float fParam1, bool bParam2)
{
	if (func_145(uParam0, fParam1))
	{
		if (bParam2)
		{
			func_105(&cLocal_317, -1);
		}
		else
		{
			func_115(&cLocal_317, 7500, 1);
		}
	}
}

bool func_145(var uParam0, float fParam1)
{
	if (func_3(uParam0, fParam1))
	{
		func_57(uParam0);
		return true;
	}
	return false;
}

void func_146(int iParam0, bool bParam1, int iParam2)
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
		if (iParam0->f_11)
		{
			UNK_0x82A772610883F395("FocusOut", 0, 0);
			UNK_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", 1);
			iParam0->f_11 = 0;
		}
	}
	UNK_0xF3039DE1FDB4F6FD(1);
	iParam0->f_1 = 0;
	*iParam0 = 0;
	iParam0->f_2 = -1;
	iParam0->f_8 = 0;
	iParam0->f_5 = 0;
	iParam0->f_6 = 0;
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
	if (!UNK_0x2EBF5002C6B6A06C(iParam0->f_3))
	{
		if (func_111(iParam0->f_3))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
	if (!UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (func_111(bVar0))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
}

void func_147(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	if (iParam0->f_1 && UNK_0x8C74DE122769E1BF())
	{
		if (UNK_0x1C0640BA9A7327B3() >= (iParam0->f_8 + iParam0->f_9))
		{
			iParam0->f_1 = 0;
		}
	}
	bVar0 = iParam4;
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
	if (func_111(bVar0))
	{
		func_169();
	}
	if (!UNK_0x8C74DE122769E1BF())
	{
		if (func_164(iParam0, bParam6, bParam8, 0))
		{
			func_163(iParam0, vParam1, iParam5);
		}
		if (*iParam0)
		{
			*iParam0 = 0;
		}
		else if (iParam0->f_6 == 2)
		{
			if (func_152(bVar0))
			{
				if ((UNK_0x2EBF5002C6B6A06C(iParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0)) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					if ((UNK_0x8E28E832BEAC3DCE(vParam1, 1f) && !UNK_0xFEBC1E4EC9E001F0()) && bParam7)
					{
						if (!func_111(bVar0))
						{
							func_105(bVar0, -1);
							iParam0->f_3 = bVar0;
							if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
							{
								func_151(1);
							}
						}
					}
				}
			}
		}
		else if (func_152(bVar0))
		{
			if (UNK_0x2EBF5002C6B6A06C(iParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0))
			{
				if ((UNK_0x8E28E832BEAC3DCE(vParam1, 1f) && !UNK_0xFEBC1E4EC9E001F0()) && bParam7)
				{
					if (!func_111(bVar0))
					{
						func_105(bVar0, -1);
						iParam0->f_3 = bVar0;
						if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
						{
							func_151(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!UNK_0x2EBF5002C6B6A06C(bVar0))
		{
			if (func_111(bVar0) && UNK_0xFEBC1E4EC9E001F0())
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
					func_146(iParam0, bVar0, 1);
				}
			}
			else if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(6) == 3 || UNK_0xA4FD7964FEE91ED8(6) == 4)
				{
					func_146(iParam0, bVar0, 1);
				}
			}
			else if (UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(4) == 3 || UNK_0xA4FD7964FEE91ED8(4) == 4)
				{
					func_146(iParam0, bVar0, 1);
				}
			}
			else if (UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(5) == 3 || UNK_0xA4FD7964FEE91ED8(5) == 4)
				{
					func_146(iParam0, bVar0, 1);
				}
			}
			else if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(2) == 3 || UNK_0xA4FD7964FEE91ED8(2) == 4)
				{
					func_146(iParam0, bVar0, 1);
				}
			}
			else if (UNK_0xF3545351E9CBB11F() == 3 || UNK_0xF3545351E9CBB11F() == 4)
			{
				func_146(iParam0, bVar0, 1);
			}
		}
		if (!func_164(iParam0, bParam6, bParam8, 0))
		{
			if ((!*iParam0 && !iParam0->f_1) && !func_150(iParam0))
			{
				func_148(iParam0);
			}
		}
	}
}

void func_148(int iParam0)
{
	if (func_149(UNK_0x16F2683693E537C9()))
	{
		UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
	}
	if (UNK_0x8C74DE122769E1BF())
	{
		UNK_0xF3039DE1FDB4F6FD(1);
		UNK_0x29D5132FBDCF2B1E(0);
		UNK_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		UNK_0x9A1335ECD7BD117F("FocusIn");
		if (iParam0->f_11)
		{
			UNK_0x82A772610883F395("FocusOut", 0, 0);
			UNK_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", 1);
			iParam0->f_11 = 0;
		}
	}
	iParam0->f_2 = -1;
	*iParam0 = 1;
}

bool func_149(bool bParam0)
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

bool func_150(int iParam0)
{
	int iVar0;

	if (iParam0->f_2 > 0)
	{
		iVar0 = (iParam0->f_10 / 2);
		if (iParam0->f_2 + iVar0) > UNK_0x1C0640BA9A7327B3()
		{
			return true;
		}
	}
	return false;
}

int func_151(bool bParam0)
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

bool func_152(bool bParam0)
{
	if (!func_153(1, 1, 0))
	{
		if ((!UNK_0xEA6BC48857E0AC4C(bParam0) && func_111(bParam0)) || func_111("CMN_HINT"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		return false;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_151(0) < 3)
			{
				return true;
			}
			break;
		case 4:
			if (func_151(0) < 1)
			{
				return true;
			}
			break;
		case 5:
		case 15:
			if (func_151(0) < 1)
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

bool func_153(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_162(0))
	{
		return false;
	}
	if (func_161())
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
	if ((func_160() || func_159(Global_4456448.f_232883)) || func_158())
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			bVar1 = func_157(UNK_0x16F2683693E537C9(), 0);
			if (((UNK_0x137240CA2BADB0D2(bVar0, bVar1) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("APC") && bVar1 != -1)) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("AKULA") && bVar1 != -1)) || (((UNK_0x134B62B726CEC8E6(bVar0) == joaat("RIOT2") && bVar1 == 0) && func_156(bVar0, 10)) && UNK_0x0ECB5CA5140957AD(bVar0, 10) != -1))
			{
				return false;
			}
		}
	}
	if (Global_1686722)
	{
		return false;
	}
	if (func_154(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_154(bool bParam0)
{
	if (bParam0 != func_20())
	{
		if (func_155(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && bParam0 == UNK_0xD803B885F5E47A62()) && func_155(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

bool func_155(bool bParam0, bool bParam1, bool bParam2)
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

bool func_156(bool bParam0, int iParam1)
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

bool func_157(bool bParam0, int iParam1)
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

bool func_158()
{
	return Global_2450632.f_17;
}

bool func_159(int iParam0)
{
	return iParam0 == 51;
}

bool func_160()
{
	return Global_2450632.f_16;
}

bool func_161()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

bool func_162(int iParam0)
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

void func_163(int iParam0, vector3 vParam1, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	UNK_0xF3039DE1FDB4F6FD(0);
	iVar0 = iParam0->f_9;
	iVar1 = iParam0->f_10;
	if (iParam4 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	UNK_0x98EF6C2D1F172740(vParam1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	UNK_0xDBE4EC9C88839074(UNK_0x16F2683693E537C9(), vParam1, -1, iVar2, iVar3);
	UNK_0x82A772610883F395("FocusIn", 0, 0);
	UNK_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	UNK_0x4D7F4CC43D4D0DE3(-1, "FocusIn", "HintCamSounds", 1);
	iParam0->f_11 = 1;
	iParam0->f_8 = UNK_0x1C0640BA9A7327B3();
	iParam0->f_1 = 1;
	*iParam0 = 0;
}

bool func_164(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0->f_1)
	{
		if (UNK_0x1C0640BA9A7327B3() >= (iParam0->f_8 + iParam0->f_9))
		{
			iParam0->f_1 = 0;
		}
	}
	switch (iParam0->f_5)
	{
		case 0:
			iParam0->f_7 = 0;
			if (iParam0->f_6 == 0)
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
				{
					if (func_168(bParam1, bParam2, bParam3))
					{
						iParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						iParam0->f_5 = 1;
						iParam0->f_7 = 1;
					}
				}
				else if (func_167(bParam1, bParam2, bParam3))
				{
					iParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					iParam0->f_5 = 1;
					iParam0->f_7 = 1;
				}
			}
			else if (iParam0->f_6 == 1)
			{
				if (func_167(bParam1, bParam2, bParam3))
				{
					iParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					iParam0->f_5 = 1;
					iParam0->f_7 = 1;
				}
			}
			else if (iParam0->f_6 == 2)
			{
				if (func_168(bParam1, bParam2, bParam3))
				{
					iParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					iParam0->f_5 = 1;
					iParam0->f_7 = 1;
				}
			}
			if (func_150(iParam0))
			{
				iParam0->f_7 = 1;
				iParam0->f_5 = 4;
			}
			break;
		case 1:
			if ((UNK_0x1C0640BA9A7327B3() - iParam0->f_4) <= 500)
			{
				if (iParam0->f_6 == 0)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
					{
						if (!func_168(bParam1, bParam2, bParam3))
						{
							iParam0->f_4 = UNK_0x1C0640BA9A7327B3();
							iParam0->f_5 = 3;
						}
					}
					else if (!func_167(bParam1, bParam2, bParam3))
					{
						iParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						iParam0->f_5 = 3;
					}
				}
				else if (iParam0->f_6 == 1)
				{
					if (!func_167(bParam1, bParam2, bParam3))
					{
						iParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						iParam0->f_5 = 3;
					}
				}
				else if (iParam0->f_6 == 2)
				{
					if (!func_168(bParam1, bParam2, bParam3))
					{
						iParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						iParam0->f_5 = 3;
					}
				}
			}
			else
			{
				iParam0->f_5 = 2;
			}
			break;
		case 2:
			if (iParam0->f_6 == 0)
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
				{
					if (!func_168(bParam1, bParam2, bParam3))
					{
						iParam0->f_5 = 0;
					}
				}
				else if (!func_167(bParam1, bParam2, bParam3))
				{
					iParam0->f_5 = 0;
				}
			}
			else if (iParam0->f_6 == 1)
			{
				if (!func_167(bParam1, bParam2, bParam3) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
				{
					iParam0->f_5 = 0;
				}
			}
			else if (iParam0->f_6 == 2)
			{
				if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || UNK_0x8B8AFAD7ED240B7F(UNK_0x16F2683693E537C9(), 2))
				{
					iParam0->f_5 = 0;
				}
				else if (!func_168(bParam1, bParam2, bParam3))
				{
					iParam0->f_5 = 0;
				}
			}
			break;
		case 3:
			if ((UNK_0x1C0640BA9A7327B3() - iParam0->f_4) > 500)
			{
				if (iParam0->f_6 == 0)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
					{
						if (func_166(bParam1, bParam2, bParam3))
						{
							iParam0->f_5 = 0;
						}
					}
					else if (func_165(bParam1, bParam2, bParam3))
					{
						iParam0->f_5 = 0;
					}
				}
				else if (iParam0->f_6 == 1)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || func_165(bParam1, bParam2, bParam3))
					{
						iParam0->f_5 = 0;
					}
				}
				else if (iParam0->f_6 == 2)
				{
					if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || UNK_0x8B8AFAD7ED240B7F(UNK_0x16F2683693E537C9(), 2))
					{
						iParam0->f_5 = 0;
					}
					else if (func_166(bParam1, bParam2, bParam3))
					{
						iParam0->f_5 = 0;
					}
				}
			}
			break;
		case 4:
			if (!func_150(iParam0))
			{
				iParam0->f_5 = 0;
			}
			break;
	}
	if (!func_153(bParam1, bParam2, bParam3))
	{
		iParam0->f_5 = 0;
		iParam0->f_7 = 0;
	}
	if (iParam0->f_7)
	{
		func_169();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_165(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
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

bool func_166(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
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

bool func_167(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
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

bool func_168(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
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

void func_169()
{
	UNK_0x5D96D8530B3D0904(&Global_7357, 4);
}

bool func_170(bool bParam0)
{
	if (bLocal_467 || bLocal_466)
	{
		return false;
	}
	if (bParam0)
	{
		if (bLocal_468)
		{
			return false;
		}
	}
	return true;
}

bool func_171(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_36(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_15(sParam2, iParam3, 0);
}

void func_172()
{
	Global_19671 = 0;
	func_35();
}

bool func_173()
{
	vector3 vVar0;
	vector3 vVar3;

	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	}
	if (UNK_0xC844350D5D58C99A(bLocal_2984) && !UNK_0x437347B10A200C4B(bLocal_2984, 0))
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bLocal_2984, true) };
	}
	if (SYSTEM::VDIST2(vVar0, vVar3) > 2500f)
	{
		if (!bLocal_2968)
		{
			func_174("TOW_TUT_RETONYA", 7500, 1);
			bLocal_2968 = true;
			if (!UNK_0xE4EDC4B0E92C078B(iLocal_425))
			{
				if (!UNK_0x437347B10A200C4B(bLocal_2984, 0))
				{
					iLocal_425 = UNK_0x5C3B41825F6AC5A0(bLocal_2984);
					UNK_0x61755AC17D8F538E(iLocal_425, 3);
					UNK_0x516E63E474722206(iLocal_425, 0.5f);
				}
			}
			if (UNK_0xE4EDC4B0E92C078B(Local_2996[0 /*20*/].f_8))
			{
				UNK_0x142CC44DB769B57E(&(Local_2996[0 /*20*/].f_8));
			}
		}
	}
	else if (bLocal_2968)
	{
		bLocal_2968 = false;
		if (UNK_0xE4EDC4B0E92C078B(iLocal_425))
		{
			UNK_0x142CC44DB769B57E(&iLocal_425);
		}
		if (!UNK_0xE4EDC4B0E92C078B(Local_2996[0 /*20*/].f_8))
		{
			Local_2996[0 /*20*/].f_8 = UNK_0x6CC513A908911CF0(vLocal_2625[0 /*3*/]);
			if (bLocal_468)
			{
				UNK_0x61755AC17D8F538E(Local_2996[0 /*20*/].f_8, 5);
				UNK_0x661342B9651D16E2(Local_2996[0 /*20*/].f_8, true);
				UNK_0x1BAA838E8491AF04(Local_2996[0 /*20*/].f_8, 5);
			}
			else
			{
				UNK_0x61755AC17D8F538E(Local_2996[0 /*20*/].f_8, 3);
				UNK_0x661342B9651D16E2(Local_2996[0 /*20*/].f_8, true);
				UNK_0x1BAA838E8491AF04(Local_2996[0 /*20*/].f_8, 3);
			}
		}
	}
	if (SYSTEM::VDIST2(vVar0, vVar3) > 22500f)
	{
		if (bLocal_2968)
		{
			return true;
		}
	}
	return false;
}

void func_174(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 0);
}

bool func_175(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x16F2683693E537C9();
	if (!UNK_0x437347B10A200C4B(bVar0, 0) && !UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (!func_182(*uParam2, 1))
		{
			if (func_181(bParam0, uParam2))
			{
				*iParam3 = 1;
				return true;
			}
		}
		if (!func_182(*uParam2, 2))
		{
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
			{
				*iParam3 = 2;
				return true;
			}
		}
		if (!func_182(*uParam2, 4))
		{
			if (func_179(bVar0, bParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return true;
			}
		}
		if (!func_182(*uParam2, 8))
		{
			if (func_178(bVar0, bParam0, uParam2))
			{
				*iParam3 = 8;
				return true;
			}
		}
		bVar1 = !func_182(*uParam2, 128);
		if (bParam4)
		{
			if (func_176(bParam0, bParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return true;
			}
		}
		else if (!func_182(*uParam2, 16))
		{
			if (func_176(bParam0, bParam1, 0, bParam6, bVar1, bParam8))
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

bool func_176(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;

	if (bParam3)
	{
		if (!bLocal_395)
		{
			iLocal_396 = UNK_0x7F6DC62EA9922664(bParam0);
			bLocal_395 = true;
		}
		iLocal_397 = UNK_0x7F6DC62EA9922664(bParam0);
		iLocal_398 = (iLocal_396 - iLocal_397);
		bVar0 = UNK_0x728870EB733D12A1();
		if (!UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0xB87D13D0C064E9D1(bParam0, bVar0, 1))
			{
				if (IntToFloat(iLocal_398) > 100f)
				{
					return true;
				}
			}
		}
		if (bLocal_395)
		{
			if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
			{
				if (IntToFloat(iLocal_398) > 100f)
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
	if (func_177(UNK_0x16F2683693E537C9(), bParam0))
	{
		return true;
	}
	if (bParam2)
	{
		if (UNK_0x869EFD0BC0868856(bParam0) && func_118(bParam0, 1) < 1.5f)
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

bool func_177(bool bParam0, bool bParam1)
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

bool func_178(bool bParam0, bool bParam1, var uParam2)
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

bool func_179(bool bParam0, bool bParam1, var uParam2, bool bParam3)
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
			if (UNK_0xFB275CE013F3A38C(bParam0) || func_180(bVar3))
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

bool func_180(bool bParam0)
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
						if (func_119(UNK_0x16F2683693E537C9(), bParam0, 1) < 40f)
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

bool func_181(bool bParam0, var uParam1)
{
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
		{
			if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0))
			{
				if (UNK_0x7069CC4DE1EA3FAA(bParam0, UNK_0x16F2683693E537C9(), 90f))
				{
					if (func_118(bParam0, 1) < uParam1->f_2)
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

bool func_182(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_183(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6, char* sParam7, bool bParam8, bool bParam9, var uParam10)
{
	int iVar0;

	(*uParam4)[0] = (*uParam4)[0];
	bParam5 = bParam5;
	iVar0 = iVar0;
	bParam9 = bParam9;
	iVar0 = 0;
	while (iVar0 < bParam5)
	{
		if (UNK_0xC844350D5D58C99A((*uParam4)[iVar0]))
		{
			if (!UNK_0x437347B10A200C4B((*uParam4)[iVar0], 0) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				if (func_175((*uParam4)[iVar0], 0, &uLocal_412, &iLocal_419, 0, 1, 0, 1, 1))
				{
					UNK_0xF3268524E9BE6D6E((*uParam4)[iVar0], UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
				}
			}
		}
		iVar0++;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_123(bParam1, bParam3, &iLocal_2603, 20, 70f, 65f, 0))
			{
				iLocal_2603 = 0;
				*uParam0 = 1;
			}
			break;
		case 1:
			if (UNK_0xC844350D5D58C99A(bParam2))
			{
				if (!UNK_0x437347B10A200C4B(bParam1, 0) && !UNK_0x437347B10A200C4B(bParam2, 0))
				{
					UNK_0xE072601B4380E9DF(bParam2, bParam1, 50f, 786469);
					UNK_0xFADC0A217229F6B5(bParam2, true);
					UNK_0x6DAD7906B73F064D(&bParam2);
					UNK_0x046C362CF15F1935(&bParam1);
				}
				*uParam0 = 2;
			}
			break;
		case 2:
			if (bLocal_468)
			{
				func_59(&uLocal_2513);
				*uParam0 = 3;
			}
			iVar0 = 0;
			while (iVar0 < bParam5)
			{
				if (UNK_0xC844350D5D58C99A((*uParam4)[iVar0]))
				{
					if (!UNK_0x437347B10A200C4B((*uParam4)[iVar0], 0))
					{
						if (func_118((*uParam4)[iVar0], 1) < 55f)
						{
							iLocal_471 = iVar0;
							iLocal_471 = iLocal_471;
							func_59(&uLocal_2513);
							*uParam0 = 3;
						}
					}
				}
				iVar0++;
			}
			break;
		case 3:
			if (!func_11(Local_1870[func_256() /*28*/].f_17))
			{
				func_184(iLocal_2347, Local_1870[func_256() /*28*/].f_17, Local_1870[func_256() /*28*/].f_20);
			}
			if (UNK_0x8A22C4C08282BF26(joaat("TONYA5")) == 1)
			{
				if (!bLocal_457)
				{
					func_257(&uLocal_484, 3, *bParam8, "TONYA", 0, 1);
					if (func_171(&uLocal_484, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						bLocal_457 = true;
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < bParam5)
			{
				if (!UNK_0x437347B10A200C4B((*uParam4)[iVar0], 0))
				{
					UNK_0xDD353D0E9C789D0E(&iLocal_421);
					UNK_0xC6EB89C59F2AF6B8(false, bParam6, (*sParam7)[iVar0], 4f, -4f, UNK_0x09AC81E49EA267F7(10000, 20000), 0, false, 0, 0, 0);
					UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
					UNK_0x75ABDC5F81978924(iLocal_421);
					UNK_0x78ADC381772E3D54((*uParam4)[iVar0], iLocal_421);
					UNK_0xF82EA857DA10E0CD(&iLocal_421);
				}
				iVar0++;
			}
			*uParam0 = 5;
			break;
		case 4:
			break;
		case 5:
			if (UNK_0x8A22C4C08282BF26(joaat("TONYA5")) == 1)
			{
				if (!bLocal_457)
				{
					func_257(&uLocal_484, 3, *bParam8, "TONYA", 0, 1);
					if (func_171(&uLocal_484, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						bLocal_457 = true;
					}
				}
				if (!bLocal_469)
				{
					if (!UNK_0x437347B10A200C4B(bParam3, 0) && !UNK_0x437347B10A200C4B(*uParam10, 0))
					{
						if (!UNK_0x6D18156F72BE0773(bParam3, *uParam10))
						{
							if (!func_7(&uLocal_2528))
							{
								func_263(&uLocal_2528);
							}
							else if (func_4(&uLocal_2528) > 20f)
							{
								if (func_171(&uLocal_484, "TOWAUD", "TOW_WAITING2", 9, 0, 0, 0))
								{
									bLocal_469 = true;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_184(int iParam0, vector3 vParam1, vector3 vParam4)
{
	UNK_0x2952D66A502EA873(iParam0, 0);
	UNK_0xEFED0CD6E25037B9();
	UNK_0x51EA29724CE5BF82(vParam1, vParam4, 0);
}

int func_185(var uParam0, var uParam1, vector3 vParam2, var uParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, char* sParam10, bool bParam11)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;

	vVar3 = { *(uParam0[0 /*3*/]) };
	vVar3.f_2 = (vVar3.z + 1f);
	if (UNK_0xE82754C349C7B581(vVar3, &uVar0, 0, 0) || func_9(*(uParam0[0 /*3*/]), 0) < 60f)
	{
		func_187(uParam1);
		UNK_0x745CE398A4B0A3C6(vParam2, 28f, 0);
		(uParam0[0 /*3*/])->f_2 = uVar0;
		iVar2 = 0;
		while (iVar2 < bParam11)
		{
			if (bParam8 == -1f)
			{
				bParam8 = func_186(*(uParam0[iVar2 /*3*/]), vParam2);
			}
			else
			{
				bParam8 = (bParam8 + 180f);
			}
			if (UNK_0x8A22C4C08282BF26(joaat("TONYA4")) == 1)
			{
				bVar1 = UNK_0x36F2404464202779(4, joaat("A_M_M_TOURIST_01"), *(uParam0[iVar2 /*3*/]), bParam8, 1, true);
				UNK_0x64F9F278AB9DCA2C(bVar1, false, false, true, 0);
				UNK_0x64F9F278AB9DCA2C(bVar1, 2, false, false, 0);
				UNK_0x64F9F278AB9DCA2C(bVar1, 3, false, 2, 0);
				UNK_0x64F9F278AB9DCA2C(bVar1, 4, true, 2, 0);
				UNK_0x64F9F278AB9DCA2C(bVar1, 8, false, false, 0);
				UNK_0x64F9F278AB9DCA2C(bVar1, 10, true, true, 0);
				UNK_0x71199B01895C6202(joaat("A_M_M_TOURIST_01"));
			}
			else if (UNK_0x8A22C4C08282BF26(joaat("TONYA5")) == 1)
			{
				if (iVar2 == 0)
				{
					bVar1 = UNK_0x36F2404464202779(4, joaat("A_M_Y_GENSTREET_02"), *(uParam0[iVar2 /*3*/]), bParam8, 1, true);
					UNK_0x71199B01895C6202(joaat("A_M_Y_GENSTREET_02"));
				}
				else
				{
					bVar1 = UNK_0x36F2404464202779(4, joaat("A_M_M_BEVHILLS_02"), *(uParam0[iVar2 /*3*/]), bParam8, 1, true);
					UNK_0x71199B01895C6202(joaat("A_M_M_BEVHILLS_02"));
				}
			}
			else
			{
				bVar1 = UNK_0x36F2404464202779(4, (*bParam7)[(iVar2 % 2)], *(uParam0[iVar2 /*3*/]), bParam8, 1, true);
			}
			UNK_0xE8832A9E16A57A1F(bVar1, true, 1);
			bParam8 = -1f;
			if (bParam11 > 1)
			{
				(*fParam6)[iVar2] = bVar1;
			}
			else
			{
				*uParam5 = bVar1;
			}
			bParam9 = bParam9;
			(*sParam10)[iVar2] = (*sParam10)[iVar2];
			UNK_0x11AD11297DC58CC7(bVar1, true);
			UNK_0x4E885A246A9D983A(bVar1, 42, true);
			UNK_0x79C43E2BAC7C696F(bVar1, "move_m@JOG@", 1048576000 /* Float: 0.25f */);
			UNK_0x9DD8618CA5BF832D(bVar1, 109, true);
			if (iLocal_420 == 3)
			{
				UNK_0xF82EA857DA10E0CD(&iVar6);
				UNK_0xDD353D0E9C789D0E(&iVar6);
				UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@towingcome_here", "come_here_idle_a", 4f, -4f, -1, 49, false, 0, 0, 0);
				UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), -1);
				UNK_0x75ABDC5F81978924(iVar6);
				if (!UNK_0x437347B10A200C4B(bVar1, 0))
				{
					UNK_0x78ADC381772E3D54(bVar1, iVar6);
				}
				UNK_0xF82EA857DA10E0CD(&iVar6);
			}
			iVar2++;
		}
		bLocal_442 = true;
		return 1;
	}
	else if (func_9(*(uParam0[0 /*3*/]), 0) < 70f)
	{
	}
	return 0;
}

int func_186(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return UNK_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_187(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_2556[iVar0 /*18*/].f_2 = { *(uParam0[iVar0 /*3*/]) };
		Local_2556[iVar0 /*18*/].f_5 = { 0f, 0f, -1f };
		if (iVar0 == 0)
		{
			Local_2556[iVar0 /*18*/].f_8 = { func_188(UNK_0x79833B02DBD2A244(0f, 1f), UNK_0x79833B02DBD2A244(0f, 1f), 0f) };
		}
		else
		{
			Local_2556[iVar0 /*18*/].f_8 = { func_188(0.5f, 1f, 0f) };
		}
		Local_2556[iVar0 /*18*/].f_11 = 2f;
		Local_2556[iVar0 /*18*/].f_12 = 1f;
		Local_2556[iVar0 /*18*/].f_13 = 1f;
		Local_2556[iVar0 /*18*/].f_14 = -1f;
		Local_2556[iVar0 /*18*/].f_15 = 0.1f;
		Local_2556[iVar0 /*18*/].f_17 = 0;
		Local_2556[iVar0 /*18*/].f_1 = 1110;
		Local_2556[iVar0 /*18*/] = UNK_0x1776B2F0999C29AC(Local_2556[iVar0 /*18*/].f_1, Local_2556[iVar0 /*18*/].f_2, Local_2556[iVar0 /*18*/].f_5, Local_2556[iVar0 /*18*/].f_8, Local_2556[iVar0 /*18*/].f_11, Local_2556[iVar0 /*18*/].f_12, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar0++;
	}
}

Vector3 func_188(vector3 vParam0)
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

int func_189()
{
	func_192();
	switch (iLocal_3120)
	{
		case 0:
			func_257(&Local_2348, 0, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
			func_257(&Local_2348, 3, Local_2996[0 /*20*/], sLocal_2624, 0, 1);
			UNK_0x11AD11297DC58CC7(Local_2996[0 /*20*/], true);
			iLocal_3041 = UNK_0x09AC81E49EA267F7(35, 80);
			iLocal_3120 = 1;
			break;
		case 1:
			UNK_0xDD353D0E9C789D0E(&iLocal_421);
			UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@towing", "Start_Engine_Loop", 8f, -8f, -1, 1, false, 0, 0, 0);
			UNK_0x75ABDC5F81978924(iLocal_421);
			UNK_0x78ADC381772E3D54(Local_2996[0 /*20*/], iLocal_421);
			UNK_0xF82EA857DA10E0CD(&iLocal_421);
			if (func_9(Local_650[iLocal_2604 /*23*/].f_1, 1) < 40f || Local_2993.f_1 > 0)
			{
				if (iLocal_420 == 1)
				{
					if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
					{
						func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWTRAINF", 0, 1);
						func_171(&Local_2348, "TOWAUD", "TOW_GETOUT", 8, 0, 0, 0);
						iLocal_3120 = 2;
					}
					else if (Global_111638.f_19968.f_5 == 2)
					{
						func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
						func_171(&Local_2348, "TOWAUD", "TOW_GETOUT2", 8, 0, 0, 0);
						iLocal_3120 = 2;
					}
				}
			}
			else if (func_10(Local_2996[0 /*20*/].f_7, Local_650[iLocal_2604 /*23*/].f_1, 1) < IntToFloat(iLocal_3041 + 10))
			{
				UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@towing", "Start_Engine_Exit", 8f, -8f, -1, 0, false, 0, 0, 0);
				iLocal_3120 = 2;
			}
			break;
		case 2:
			if (!func_11(Local_650[iLocal_2604 /*23*/].f_13))
			{
				Local_650[iLocal_2604 /*23*/].f_13.f_2 = 45f;
				Local_650[iLocal_2604 /*23*/].f_16.f_2 = -45f;
				if (!UNK_0x3D1053F9EB43B7AD(Local_2996[0 /*20*/].f_6, Local_650[iLocal_2604 /*23*/].f_13, Local_650[iLocal_2604 /*23*/].f_16, Local_650[iLocal_2604 /*23*/].f_19, 0, true, 0))
				{
					func_122(&iLocal_2598);
					bLocal_2947 = true;
					iLocal_2954 = 1;
					bLocal_427 = true;
					if (UNK_0x405E212DDE472467(Local_2996[0 /*20*/], 0))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_421);
						UNK_0x75CDA8644CD3B5F5(false, 0, 0);
						UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@towingpleadingidle_b", "idle_d", 4f, -4f, 10000, 16, false, 0, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_421);
						UNK_0x78ADC381772E3D54(Local_2996[0 /*20*/], iLocal_421);
						UNK_0xF82EA857DA10E0CD(&iLocal_421);
						iLocal_3120 = 4;
					}
				}
			}
			if (func_10(Local_2996[0 /*20*/].f_7, Local_650[iLocal_2604 /*23*/].f_1, 1) < IntToFloat(iLocal_3041 + 15))
			{
				if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
				{
					func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWTRAINF", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_GETOUT", 9, 0, 0, 0);
				}
				else if (Global_111638.f_19968.f_5 == 2)
				{
					func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_GETOUT2", 9, 0, 0, 0);
				}
				func_122(&iLocal_2598);
				UNK_0x0C8C0C840C2D1AD2(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_7, -1, 2, 2);
				SYSTEM::SETTIMERB(0);
				iLocal_3120 = 3;
			}
			break;
		case 3:
			if (func_10(Local_2996[0 /*20*/].f_7, Local_650[iLocal_2604 /*23*/].f_1, 1) < IntToFloat(iLocal_3041))
			{
				if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0))
				{
					if (iLocal_3040 == 1)
					{
						func_191(&Local_2993);
					}
					bLocal_2947 = true;
					if (UNK_0x405E212DDE472467(Local_2996[0 /*20*/], 0))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_421);
						UNK_0x75CDA8644CD3B5F5(false, 0, 0);
						UNK_0xB87AD42E3FA06BDE(false, UNK_0x8A5E176FF719A014(Local_650[iLocal_2604 /*23*/].f_1, Local_650[iLocal_2604 /*23*/].f_4, 0f, 15f, 0f), 3f, 0, 0, 786603, -1082130432 /* Float: -1f */);
						UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), -1);
						UNK_0x75ABDC5F81978924(iLocal_421);
						UNK_0xBAFED2F6486F771A(Local_2996[0 /*20*/], 64, false);
						UNK_0x78ADC381772E3D54(Local_2996[0 /*20*/], iLocal_421);
						UNK_0xF82EA857DA10E0CD(&iLocal_421);
						iLocal_3120 = 4;
					}
				}
			}
			break;
		case 4:
			if ((iLocal_3119 == 8 && bLocal_468) || func_190())
			{
				SYSTEM::SETTIMERB(3000);
				iLocal_3120 = 5;
			}
			break;
		case 5:
			bLocal_2953 = true;
			if (SYSTEM::TIMERB() > 3000)
			{
				if (func_116(&iLocal_3117, 0, "TOW_TRAIN1"))
				{
					iLocal_3120 = 6;
				}
			}
			break;
		case 6:
			break;
	}
	return 0;
}

bool func_190()
{
	if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0))
	{
		if (bLocal_427)
		{
			switch (iLocal_3053)
			{
				case 0:
					if (UNK_0x4F1B602325013CC2(Local_2996[0 /*20*/]) == 1)
					{
						iLocal_3053 = 1;
					}
					break;
				case 1:
					if (!UNK_0xB4ECF989E2C1DAC8(Local_2996[0 /*20*/], "oddjobs@towingpleadingidle_b", "idle_d", 3))
					{
						iLocal_3053 = 2;
					}
					break;
				case 2:
					return true;
			}
		}
	}
	return false;
}

void func_191(int iParam0)
{
	iParam0->f_1 = 0;
	UNK_0x9A8DDC7C522F5BF5(*iParam0, 0);
	UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
}

void func_192()
{
	float fVar0;

	if (bLocal_2947 || ((!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0) && !UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0)) && !UNK_0xC42A92762C58E1B9(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 0)))
	{
		if (iLocal_2598 != -1)
		{
			UNK_0x55D0A2DB35045A35(iLocal_2598);
			UNK_0x43A06902454A1172(iLocal_2598);
			iLocal_2598 = -1;
			return;
		}
	}
	if (!bLocal_2938)
	{
		iLocal_2598 = UNK_0xD68EA767274B7444();
		bLocal_2938 = true;
	}
	if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0))
	{
		if (UNK_0xB4ECF989E2C1DAC8(Local_2996[0 /*20*/], "oddjobs@towing", "Start_Engine_Loop", 3))
		{
			fVar0 = UNK_0x8CA9406E01C7EE58(Local_2996[0 /*20*/], "oddjobs@towing", "Start_Engine_Loop");
			if (((fVar0 >= 0.19f && fVar0 <= 0.262f) || (fVar0 >= 0.4f && fVar0 <= 0.6f)) || (fVar0 >= 0.9f && fVar0 <= 1f))
			{
				if (fVar0 >= 0.19f && fVar0 <= 0.262f)
				{
				}
				if (fVar0 >= 0.4f && fVar0 <= 0.6f)
				{
				}
				if (fVar0 >= 0.9f && fVar0 <= 1f)
				{
				}
				if (!bLocal_2937)
				{
					UNK_0xCEAA091B490F8407(iLocal_2598, "TOWING_ENGINE_TURNING_MASTER", Local_2996[0 /*20*/].f_6, false, 0, 0);
					bLocal_2937 = true;
				}
			}
			else
			{
				UNK_0x55D0A2DB35045A35(iLocal_2598);
				bLocal_2937 = false;
			}
		}
	}
}

void func_193()
{
	int iVar0;

	func_195();
	UNK_0xA37A90C62806D848(1);
	UNK_0x11CCD0ACA866C6C5(2, 1);
	if (UNK_0x83D8570832F172A7(iLocal_2608))
	{
		UNK_0xE17FDF9E3068281B(&iLocal_2608);
	}
	if (!UNK_0x437347B10A200C4B(bLocal_3109, 0))
	{
		UNK_0x71EDC33E5A423750(bLocal_3109, 1);
		UNK_0xAA280AF45BCCCF21(bLocal_3109, 0);
	}
	UNK_0x5A5CC21130AD387A(iLocal_3048);
	UNK_0x5A5CC21130AD387A(iLocal_3049);
	UNK_0x2952D66A502EA873(iLocal_3112, 0);
	UNK_0x2952D66A502EA873(iLocal_3113, 0);
	UNK_0xE342F209E49C5314(vLocal_3060 - Vector(15f, 15f, 15f), vLocal_3060 + Vector(15f, 15f, 15f), true, 1);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		UNK_0x5A5CC21130AD387A(Local_2996[iVar0 /*20*/].f_17);
		UNK_0x5A5CC21130AD387A(Local_2996[iVar0 /*20*/].f_18);
		UNK_0x5A5CC21130AD387A(Local_2996[iVar0 /*20*/].f_19);
		iVar0++;
	}
	if (!func_11(Local_1870[func_256() /*28*/].f_17))
	{
		func_184(iLocal_2347, Local_1870[func_256() /*28*/].f_17, Local_1870[func_256() /*28*/].f_20);
	}
	UNK_0x046C362CF15F1935(&(Local_2996[0 /*20*/].f_6));
	if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0))
	{
		UNK_0x6DAD7906B73F064D(&(Local_2996[0 /*20*/]));
		if (UNK_0xC844350D5D58C99A(Local_2996[0 /*20*/]))
		{
			if (UNK_0x16102BEDC7435774(Local_2996[0 /*20*/]))
			{
				UNK_0x0A94A109271BE75A(Local_2996[0 /*20*/]);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(bLocal_2983))
	{
		if (!UNK_0x437347B10A200C4B(bLocal_2983, 0))
		{
			UNK_0x6DAD7906B73F064D(&bLocal_2983);
		}
	}
	if (!UNK_0x437347B10A200C4B(bLocal_3109, 0))
	{
		UNK_0x73270B3C9CC833FD(bLocal_3109, true, 1);
		UNK_0x046C362CF15F1935(&bLocal_3109);
	}
	if (bLocal_2963)
	{
		UNK_0xE342F209E49C5314(vLocal_2632, vLocal_2635, true, 1);
	}
	if (bLocal_2960 && !UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_7, 0))
	{
		UNK_0x0448723A523CE0E6(Local_2996[0 /*20*/].f_7, true);
		UNK_0xDB7D85A79FCB0695(&(Local_2996[0 /*20*/].f_7), 0);
		UNK_0xF48790410026514E(1);
		func_129(0, 1);
		func_129(1, 0);
		func_129(2, 0);
		func_129(3, 1);
		func_129(4, 0);
		func_129(5, 0);
		func_129(6, 0);
		func_129(7, 0);
		func_129(8, 0);
		func_129(9, 0);
		func_129(10, 0);
		func_129(11, 0);
	}
	func_122(&iLocal_2596);
	func_122(&iLocal_2597);
	func_194(&uLocal_3127);
	func_122(&iLocal_2598);
	func_146(&uLocal_399, 0, 0);
	if (UNK_0x9F4FE516EAACCFC5(Local_2993))
	{
		func_191(&Local_2993);
	}
	UNK_0x51B096AAC60548C1(1f);
	UNK_0xAB8E2DDC7AF955E0(joaat("TOWTRUCK"), false);
	UNK_0x10FAF14A60A0DBE1();
}

void func_194(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			UNK_0xF7E25143642732EA((*uParam0)[iVar0], 0);
			(*uParam0)[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_195()
{
	vector3 vVar0[24];

	if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
	{
		UNK_0x3CFFF3C8EACD8DC1(StackVal, 0, 0, 0);
	}
	else if (UNK_0xBA301E03A078FA59() || UNK_0x33A494591F2C1975())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		UNK_0x8DECFDD6715449E4(0, &cVar0);
	}
}

bool func_196()
{
	vector3 vVar0;

	if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0) && !UNK_0x437347B10A200C4B(bLocal_3109, 0))
	{
		if (UNK_0xC42A92762C58E1B9(Local_2996[0 /*20*/], bLocal_3109, 0))
		{
			if (UNK_0xE4EDC4B0E92C078B(Local_2996[0 /*20*/].f_10))
			{
				UNK_0x142CC44DB769B57E(&(Local_2996[0 /*20*/].f_10));
				func_122(&iLocal_2598);
			}
		}
		else if (!UNK_0xC42A92762C58E1B9(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 0))
		{
			func_122(&iLocal_2598);
		}
	}
	switch (iLocal_3119)
	{
		case 0:
			if (func_9(Local_650[iLocal_2604 /*23*/].f_1, 1) < 100f)
			{
				Local_2996[0 /*20*/].f_7 = UNK_0x9F136BAA293FE131(6, Local_650[iLocal_2604 /*23*/].f_6, Local_650[iLocal_2604 /*23*/].f_5);
				if (UNK_0xC844350D5D58C99A(Local_2996[0 /*20*/].f_7))
				{
					Local_2996[0 /*20*/].f_10 = UNK_0x5C3B41825F6AC5A0(Local_2996[0 /*20*/].f_7);
				}
				bLocal_2983 = UNK_0x852A19533F896693(Local_2996[0 /*20*/].f_7, 4, joaat("S_M_M_LSMETRO_01"), -1, 1, true);
				UNK_0x11AD11297DC58CC7(bLocal_2983, true);
				if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_7, 0))
				{
					UNK_0x5D6C12CA95187FB3(Local_2996[0 /*20*/].f_7, 0f);
				}
				func_115("TOW_OBJ_05", 7500, 1);
				SYSTEM::SETTIMERA(0);
				func_199("CROSSING_BELL", &iLocal_2599, 1, 0, 226.8878f, -2538.421f, 4.8665f, "TONYA_03_SOUNDSET");
				iLocal_3119 = 1;
			}
			break;
		case 1:
			if (func_9(Local_650[iLocal_2604 /*23*/].f_1, 1) < 80f || SYSTEM::TIMERA() > 10000)
			{
				if (!UNK_0x562F77A7F33D2E46("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					UNK_0x8BC9595FD2792B5D("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_3119 = 2;
			}
			break;
		case 2:
			if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_7, 0))
			{
				UNK_0x5D6C12CA95187FB3(Local_2996[0 /*20*/].f_7, 26f);
				UNK_0x88FD99BDEAF715B4(Local_2996[0 /*20*/].f_7, 22f);
			}
			iLocal_3119 = 3;
			break;
		case 3:
			if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_7, 0) && !UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
			{
				if (func_10(Local_2996[0 /*20*/].f_7, Local_650[iLocal_2604 /*23*/].f_1, 1) < 175f)
				{
					func_198(Local_2996[0 /*20*/].f_7);
					func_199("TOWING_TRAIN_BRAKES_MASTER", &iLocal_2597, 1, Local_2996[0 /*20*/].f_7, 0, 0, 0, 0);
					func_197(&uLocal_3127, Local_2996[0 /*20*/].f_7);
					func_199("TOWING_TRAIN_HORN_MASTER", &iLocal_2596, 1, Local_2996[0 /*20*/].f_7, 0, 0, 0, 0);
					iLocal_3119 = 4;
				}
			}
			else
			{
				iLocal_3119 = 8;
			}
			break;
		case 4:
			if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_7, 0) && !UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
			{
				func_198(Local_2996[0 /*20*/].f_7);
				if (!UNK_0x3D1053F9EB43B7AD(Local_2996[0 /*20*/].f_6, Local_650[iLocal_2604 /*23*/].f_13, Local_650[iLocal_2604 /*23*/].f_16, Local_650[iLocal_2604 /*23*/].f_19, 0, true, 0))
				{
					func_194(&uLocal_3127);
				}
				vVar0 = { UNK_0x68F4C0EC296D3901(Local_2996[0 /*20*/].f_7, true) };
				if (func_10(Local_2996[0 /*20*/].f_7, Local_650[iLocal_2604 /*23*/].f_1, 1) < 3f)
				{
					bLocal_2934 = true;
				}
				if (UNK_0x1B3D109B39CC2C89(Local_2996[0 /*20*/].f_7, Local_2996[0 /*20*/].f_6))
				{
					if (!UNK_0x437347B10A200C4B(bLocal_3109, 0) && !UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
					{
						if (UNK_0x6D18156F72BE0773(bLocal_3109, Local_2996[0 /*20*/].f_6))
						{
							UNK_0xA1D5A8611E9DC1DD(bLocal_3109, Local_2996[0 /*20*/].f_6);
						}
					}
					UNK_0x0DC87D17DC2658DC(Local_2996[0 /*20*/].f_6, 1, 0);
					iLocal_3119 = 6;
				}
				else if (func_10(Local_2996[0 /*20*/].f_6, vVar0, 1) < 10f && UNK_0x3D1053F9EB43B7AD(Local_2996[0 /*20*/].f_6, Local_650[iLocal_2604 /*23*/].f_13, Local_650[iLocal_2604 /*23*/].f_16, Local_650[iLocal_2604 /*23*/].f_19, 0, true, 0))
				{
					bLocal_2934 = true;
					if (!UNK_0x437347B10A200C4B(bLocal_3109, 0) && !UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
					{
						if (UNK_0x6D18156F72BE0773(bLocal_3109, Local_2996[0 /*20*/].f_6))
						{
							UNK_0xA1D5A8611E9DC1DD(bLocal_3109, Local_2996[0 /*20*/].f_6);
						}
					}
					UNK_0x0DC87D17DC2658DC(Local_2996[0 /*20*/].f_6, 1, 0);
				}
				if (bLocal_2934 && func_10(Local_2996[0 /*20*/].f_7, Local_650[iLocal_2604 /*23*/].f_1, 1) > 4f)
				{
					iLocal_3119 = 6;
				}
			}
			else
			{
				iLocal_3119 = 6;
			}
			break;
		case 6:
			if (!bLocal_468)
			{
				func_115("TOWT_OBJ_03G", 7500, 1);
				if (UNK_0xE4EDC4B0E92C078B(Local_2996[0 /*20*/].f_10))
				{
					UNK_0x142CC44DB769B57E(&(Local_2996[0 /*20*/].f_10));
				}
			}
			UNK_0x142CC44DB769B57E(&(Local_2996[0 /*20*/].f_10));
			func_122(&iLocal_2596);
			func_122(&iLocal_2597);
			func_194(&uLocal_3127);
			func_122(&iLocal_2598);
			func_122(&iLocal_2599);
			iLocal_3119 = 7;
			break;
		case 7:
			if (!func_47())
			{
				if (!bLocal_468)
				{
					func_115("TOWT_OBJ_03G", 7500, 1);
				}
				if (UNK_0x562F77A7F33D2E46("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					UNK_0x8910D3D58E0132B8("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_3119 = 8;
			}
			break;
		case 8:
			break;
	}
	return false;
}

void func_197(var uParam0, bool bParam1)
{
	(*uParam0)[0] = UNK_0xC1879030EB463216("scr_ojtt_train_sparks", bParam1, -0.771f, 6.515f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[1] = UNK_0xC1879030EB463216("scr_ojtt_train_sparks", bParam1, 0.771f, 6.515f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[2] = UNK_0xC1879030EB463216("scr_ojtt_train_sparks", bParam1, -0.771f, 3.781f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[3] = UNK_0xC1879030EB463216("scr_ojtt_train_sparks", bParam1, 0.771f, 3.781f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[4] = UNK_0xC1879030EB463216("scr_ojtt_train_sparks", bParam1, -0.771f, -3.743f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[5] = UNK_0xC1879030EB463216("scr_ojtt_train_sparks", bParam1, 0.7711f, -3.743f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[6] = UNK_0xC1879030EB463216("scr_ojtt_train_sparks", bParam1, -0.771f, -6.537f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[7] = UNK_0xC1879030EB463216("scr_ojtt_train_sparks", bParam1, 0.771f, -6.537f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
}

int func_198(bool bParam0)
{
	float fVar0;

	if (!func_7(&uLocal_2593))
	{
		func_263(&uLocal_2593);
	}
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			fVar0 = UNK_0x9C66D99E63E8E24C(bParam0);
		}
		else
		{
			return 0;
		}
	}
	if (func_3(&uLocal_2593, 0.15f))
	{
		fLocal_2600 = (fVar0 - 0.35f);
		if (fLocal_2600 < 8f)
		{
			fLocal_2600 = 8f;
		}
		func_59(&uLocal_2593);
		UNK_0x5D6C12CA95187FB3(bParam0, fLocal_2600);
		UNK_0x88FD99BDEAF715B4(bParam0, fLocal_2600);
	}
	return 1;
}

void func_199(bool bParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	func_122(iParam1);
	if (bParam2)
	{
		*iParam1 = UNK_0xD68EA767274B7444();
	}
	else
	{
		*iParam1 = -1;
	}
	if (bParam3 != 0)
	{
		UNK_0xCEAA091B490F8407(*iParam1, bParam0, bParam3, bParam7, 0, 0);
	}
	else if ((fParam4 != 0f || fParam5 != 0f) || fParam6 != 0f)
	{
		UNK_0xEB819BD1E585E9CB(*iParam1, bParam0, fParam4, fParam5, fParam6, bParam7, false, 0, 0);
	}
	else
	{
		UNK_0x4D7F4CC43D4D0DE3(*iParam1, bParam0, bParam7, 1);
	}
}

int func_200()
{
	int iVar0;
	vector3 vVar1;

	func_210();
	switch (iLocal_3118)
	{
		case 0:
			if (bLocal_2965)
			{
				if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
				{
					Local_2996[0 /*20*/] = UNK_0x852A19533F896693(Local_2996[0 /*20*/].f_6, 26, iLocal_2989[0], true, 1, true);
					UNK_0x11AD11297DC58CC7(Local_2996[0 /*20*/], true);
					func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					Local_2996[0 /*20*/].f_1 = UNK_0x852A19533F896693(Local_2996[0 /*20*/].f_6, 26, bLocal_74, 2, 1, true);
					UNK_0x11AD11297DC58CC7(Local_2996[0 /*20*/].f_1, true);
					UNK_0x4E885A246A9D983A(Local_2996[0 /*20*/].f_1, 42, true);
					func_257(&Local_2348, 6, Local_2996[0 /*20*/].f_1, "TOWSEXPRISSYGUY", 0, 1);
					UNK_0xC6EB89C59F2AF6B8(Local_2996[0 /*20*/], "oddjobs@towing", "m_blow_job_loop", 1000f, -8f, -1, 1, false, 0, 0, 0);
					UNK_0xC6EB89C59F2AF6B8(Local_2996[0 /*20*/].f_1, "oddjobs@towing", "f_blow_job_loop", 1000f, -8f, -1, 1, false, 0, 0, 0);
					if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
					{
						UNK_0x71EDC33E5A423750(Local_2996[0 /*20*/].f_6, 10);
					}
					bLocal_442 = true;
					func_257(&Local_2348, 0, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
				}
			}
			else if (bLocal_2966)
			{
				if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
				{
					Local_2996[0 /*20*/] = UNK_0x852A19533F896693(Local_2996[0 /*20*/].f_6, 26, iLocal_2989[0], false, 1, true);
					UNK_0x11AD11297DC58CC7(Local_2996[0 /*20*/], true);
					UNK_0x4E885A246A9D983A(Local_2996[0 /*20*/], 42, true);
					func_257(&Local_2348, 2, Local_2996[0 /*20*/], sLocal_2624, 0, 1);
					UNK_0xC6EB89C59F2AF6B8(Local_2996[0 /*20*/], "RANDOM@CAR_SLEEPING", "Sleeping_Idle", 8f, -8f, -1, 1, false, 0, 0, 0);
					bLocal_442 = true;
				}
			}
			else if (func_209())
			{
				bLocal_2964 = true;
			}
			else
			{
				bLocal_2964 = false;
			}
			iLocal_3118 = 1;
			break;
		case 1:
			if (bLocal_2965)
			{
				if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
				{
					if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), UNK_0x68F4C0EC296D3901(Local_2996[0 /*20*/].f_6, true), 15f, 15f, 15f, false, true, 0))
					{
						if (!bLocal_3136)
						{
							if (func_171(&Local_2348, "TOWAUD", "TOW_SEX_SNDS", 9, 0, 0, 0))
							{
								bLocal_3136 = true;
							}
						}
					}
				}
			}
			if (!UNK_0x437347B10A200C4B(bLocal_3109, 0) && !UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
			{
				if (UNK_0x6D18156F72BE0773(bLocal_3109, Local_2996[0 /*20*/].f_6) || func_208(bLocal_3109, Local_2996[0 /*20*/].f_6, !(bLocal_2965 || bLocal_2966)))
				{
					if (func_208(bLocal_3109, Local_2996[0 /*20*/].f_6, !(bLocal_2965 || bLocal_2966)))
					{
						bLocal_2979 = true;
					}
					if (!bLocal_2966)
					{
						func_207(&uLocal_3103, 1f);
					}
					else
					{
						func_263(&uLocal_3103);
					}
				}
			}
			if (func_7(&uLocal_3103) && func_4(&uLocal_3103) > 1f)
			{
				if (bLocal_2965 && func_7(&uLocal_3103))
				{
					if (func_47())
					{
						func_172();
					}
					bLocal_2976 = false;
					if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_421);
						UNK_0x75CDA8644CD3B5F5(false, 750, 0);
						UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
						UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@towingpleadingidle_b", "idle_d", -8f, 0.25f, -1, 1, false, 0, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_421);
						UNK_0x78ADC381772E3D54(Local_2996[0 /*20*/], iLocal_421);
						UNK_0xF82EA857DA10E0CD(&iLocal_421);
						UNK_0xDD353D0E9C789D0E(&iLocal_421);
						UNK_0x75CDA8644CD3B5F5(false, 0, 0);
						UNK_0xF96A174EE26D7588(false, Local_2996[0 /*20*/], 0);
						UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@towingpleadingidle_a", "idle_c", 0.25f, 0.25f, 30000, 1, false, 0, 0, 0);
						UNK_0xF3268524E9BE6D6E(false, Local_2996[0 /*20*/], 1000f, -1, 0, 0);
						UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
						UNK_0x75ABDC5F81978924(iLocal_421);
						if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_1, 0))
						{
							UNK_0x78ADC381772E3D54(Local_2996[0 /*20*/].f_1, iLocal_421);
						}
						UNK_0xF82EA857DA10E0CD(&iLocal_421);
					}
					iLocal_3118 = 2;
				}
				else if (bLocal_2966)
				{
					if ((Global_111638.f_19968.f_4 % 2) == 0)
					{
						if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0))
						{
							UNK_0xDD353D0E9C789D0E(&iLocal_421);
							UNK_0x75CDA8644CD3B5F5(false, 0, 0);
							UNK_0xE185F110925D87DB(false, bLocal_3109, 20000, 9f, 1f, 1073741824 /* Float: 2f */, 0);
							UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
							UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@towingangryidle_a", "idle_b", -8f, 0.25f, 7000, 0, false, 0, 0, 0);
							UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
							UNK_0x75ABDC5F81978924(iLocal_421);
							UNK_0x78ADC381772E3D54(Local_2996[0 /*20*/], iLocal_421);
							UNK_0xF82EA857DA10E0CD(&iLocal_421);
						}
						func_257(&Local_2348, 2, Local_2996[0 /*20*/], "TOWABDBITCHM", 0, 1);
						func_171(&Local_2348, "TOWAUD", "TOW_HOM_ANGR", 9, 0, 0, 0);
					}
					else
					{
						if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0))
						{
							func_206(Local_2996[0 /*20*/]);
							UNK_0xAFF39FB306F8E232(Local_2996[0 /*20*/], 0, false);
							UNK_0xAFF39FB306F8E232(Local_2996[0 /*20*/], 1, false);
							UNK_0xDD353D0E9C789D0E(&iLocal_421);
							UNK_0x75CDA8644CD3B5F5(false, 0, 0);
							UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
							UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
							UNK_0x75ABDC5F81978924(iLocal_421);
							UNK_0x78ADC381772E3D54(Local_2996[0 /*20*/], iLocal_421);
							UNK_0xF82EA857DA10E0CD(&iLocal_421);
							if (UNK_0xC844350D5D58C99A(Local_2996[0 /*20*/]))
							{
								iLocal_2986 = UNK_0x5C3B41825F6AC5A0(Local_2996[0 /*20*/]);
								UNK_0x61755AC17D8F538E(iLocal_2986, true);
								UNK_0x516E63E474722206(iLocal_2986, 0.7f);
								func_205(Local_2996[0 /*20*/], iLocal_2986, 1);
							}
							bLocal_2964 = true;
						}
						func_171(&Local_2348, "TOWAUD", "TOW_HOM_DRG", 9, 0, 0, 0);
					}
					iLocal_3118 = 2;
				}
				else if (bLocal_2964)
				{
					Local_2996[0 /*20*/] = UNK_0x36F2404464202779(4, iLocal_2989[0], Local_650[iLocal_2604 /*23*/].f_6, Local_650[iLocal_2604 /*23*/].f_9, 1, true);
					UNK_0x11AD11297DC58CC7(Local_2996[0 /*20*/], true);
					UNK_0x4E885A246A9D983A(Local_2996[0 /*20*/], 42, true);
					bLocal_442 = true;
					sLocal_2618 = "TOW_PED_ANGR";
					bLocal_442 = false;
					if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_421);
						UNK_0xE185F110925D87DB(false, bLocal_3109, 20000, 15f, 3f, 1073741824 /* Float: 2f */, 0);
						UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
						UNK_0x75ABDC5F81978924(iLocal_421);
						UNK_0x78ADC381772E3D54(Local_2996[0 /*20*/], iLocal_421);
						UNK_0xF82EA857DA10E0CD(&iLocal_421);
					}
					iLocal_3118 = 3;
				}
				else
				{
					Local_2996[0 /*20*/] = UNK_0x36F2404464202779(4, iLocal_2989[0], Local_650[iLocal_2604 /*23*/].f_6, Local_650[iLocal_2604 /*23*/].f_9, 1, true);
					UNK_0x11AD11297DC58CC7(Local_2996[0 /*20*/], true);
					UNK_0x4E885A246A9D983A(Local_2996[0 /*20*/], 42, true);
					UNK_0xE8832A9E16A57A1F(Local_2996[0 /*20*/], true, 1);
					bLocal_442 = true;
					sLocal_2618 = "TOW_ILLEG1";
					if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_421);
						UNK_0xDE7F7A4DA93201CF(0, UNK_0x16F2683693E537C9(), 20000, 12f, 0f, 3f, 0);
						UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
						UNK_0x75ABDC5F81978924(iLocal_421);
						UNK_0x78ADC381772E3D54(Local_2996[0 /*20*/], iLocal_421);
						UNK_0xF82EA857DA10E0CD(&iLocal_421);
					}
					iLocal_3118 = 3;
				}
			}
			break;
		case 2:
			if (bLocal_2965)
			{
				if (!bLocal_2973)
				{
					if (UNK_0x6D18156F72BE0773(bLocal_3109, Local_2996[0 /*20*/].f_6) || bLocal_2979)
					{
						if (!UNK_0xD17F06053799A7CA())
						{
							if (!func_47())
							{
								if (func_171(&Local_2348, "TOWAUD", "TOW_SEX_INIT", 9, 0, 0, 0))
								{
									bLocal_2973 = true;
								}
							}
						}
					}
				}
			}
			if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0))
			{
				if (!UNK_0x405E212DDE472467(Local_2996[0 /*20*/], 0))
				{
					if (bLocal_2966)
					{
						if (!func_47())
						{
							if (UNK_0xD1960163A3042274(Local_2996[0 /*20*/], 242628503) == 1)
							{
								if (UNK_0x4F1B602325013CC2(Local_2996[0 /*20*/]) == 2)
								{
									if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
									{
										vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
									}
									if (SYSTEM::VDIST2(vVar1, UNK_0x68F4C0EC296D3901(Local_2996[0 /*20*/], true)) < 400f)
									{
										if ((Global_111638.f_19968.f_4 % 2) == 0)
										{
											func_171(&Local_2348, "TOWAUD", "TOW_HOM_ANG1", 9, 0, 0, 0);
										}
										else
										{
											func_171(&Local_2348, "TOWAUD", "TOW_HOM_ANG2", 9, 0, 0, 0);
										}
									}
									iLocal_3118 = 8;
								}
							}
						}
					}
					else if (!UNK_0x437347B10A200C4B(bLocal_3109, 0) && !UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
					{
						if (func_204() || (!UNK_0x6D18156F72BE0773(bLocal_3109, Local_2996[0 /*20*/].f_6) && !bLocal_2979))
						{
							func_172();
							iLocal_3118 = 5;
						}
						else if (!UNK_0x6D18156F72BE0773(bLocal_3109, Local_2996[0 /*20*/].f_6) && bLocal_2979)
						{
							if (bLocal_2973)
							{
								if (!func_47())
								{
									iLocal_3118 = 5;
								}
							}
						}
					}
				}
			}
			break;
		case 3:
			if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0))
			{
				if (func_119(Local_2996[0 /*20*/], UNK_0x16F2683693E537C9(), 1) < 12f)
				{
					UNK_0xA3BF0AA5A2608191(Local_2996[0 /*20*/]);
					if (bLocal_2964)
					{
						UNK_0x6C3AE6E278DB3D0E(Local_2996[0 /*20*/], UNK_0x16F2683693E537C9(), 0, 16);
					}
					else if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_421);
						UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
						UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@towingpleadingidle_a", "idle_c", -8f, 0.25f, 5000, 0, false, 0, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_421);
						UNK_0x78ADC381772E3D54(Local_2996[0 /*20*/], iLocal_421);
						UNK_0xF82EA857DA10E0CD(&iLocal_421);
					}
					bLocal_2949 = true;
					if (bLocal_2965)
					{
						iLocal_3118 = 5;
					}
					else
					{
						iLocal_3118 = 4;
					}
				}
			}
			break;
		case 4:
			if (UNK_0xC844350D5D58C99A(Local_2996[0 /*20*/]))
			{
				Local_2996[0 /*20*/].f_9 = UNK_0x5C3B41825F6AC5A0(Local_2996[0 /*20*/]);
				if (bLocal_2964)
				{
					UNK_0x61755AC17D8F538E(Local_2996[0 /*20*/].f_9, true);
					UNK_0x516E63E474722206(Local_2996[0 /*20*/].f_9, 0.7f);
				}
				else
				{
					UNK_0x61755AC17D8F538E(Local_2996[0 /*20*/].f_9, 3);
					UNK_0x516E63E474722206(Local_2996[0 /*20*/].f_9, 0.7f);
				}
			}
			if (bLocal_2964)
			{
				if (iLocal_420 == 0)
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
					func_203(Local_2348, "TOWAUD", "TOW_PED_ANGR", 0);
				}
				else
				{
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 2, Local_2996[0 /*20*/], "TOWABDATTACKM", 0, 1);
					func_203(Local_2348, "TOWAUD", "TOW_HOM_DRG", 0);
				}
			}
			else
			{
				func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
				func_257(&Local_2348, 3, Local_2996[0 /*20*/], sLocal_2624, 0, 1);
				func_203(Local_2348, "TOWAUD", sLocal_2618, 0);
			}
			bLocal_2957 = true;
			SYSTEM::SETTIMERA(0);
			if (bLocal_2964)
			{
				func_59(&uLocal_3097);
				iLocal_3118 = 6;
			}
			else
			{
				iLocal_3118 = 5;
			}
			break;
		case 5:
			if (!func_47())
			{
				if (bLocal_2965)
				{
					SYSTEM::SETTIMERB(0);
				}
				func_59(&uLocal_3097);
				if ((!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0) && !UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0)) && !UNK_0x437347B10A200C4B(bLocal_3109, 0))
				{
					if (UNK_0x6D18156F72BE0773(bLocal_3109, Local_2996[0 /*20*/].f_6))
					{
						UNK_0xA8CC11FF8D2962D4(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 0f, 0f, 0f, 3f, -1, 10f, 1);
					}
					else
					{
						if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
						{
							UNK_0x71EDC33E5A423750(Local_2996[0 /*20*/].f_6, 1);
						}
						UNK_0xF82EA857DA10E0CD(&iVar0);
						UNK_0xDD353D0E9C789D0E(&iVar0);
						UNK_0x5B1D360B9C6F0A09(false, Local_2996[0 /*20*/].f_6, 20000, -1, 2f, 1, 0);
						UNK_0xE072601B4380E9DF(false, Local_2996[0 /*20*/].f_6, 5f, 786597);
						UNK_0x75ABDC5F81978924(iVar0);
						if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0))
						{
							UNK_0x78ADC381772E3D54(Local_2996[0 /*20*/], iVar0);
						}
						UNK_0xF82EA857DA10E0CD(&iVar0);
						bLocal_3137 = true;
					}
				}
				iLocal_3118 = 6;
			}
			break;
		case 6:
			func_201(0);
			if (!bLocal_2971)
			{
				if (!UNK_0x437347B10A200C4B(bLocal_3109, 0) && !UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
				{
					if (!UNK_0x6D18156F72BE0773(bLocal_3109, Local_2996[0 /*20*/].f_6))
					{
						if (bLocal_2965)
						{
							if (SYSTEM::TIMERB() > 8000)
							{
								func_59(&uLocal_3097);
								if (!bLocal_3137)
								{
									UNK_0x71EDC33E5A423750(Local_2996[0 /*20*/].f_6, 1);
									UNK_0x5B1D360B9C6F0A09(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 20000, -1, 2f, 1, 0);
								}
								iLocal_3118 = 7;
							}
						}
						else
						{
							func_59(&uLocal_3097);
							UNK_0x71EDC33E5A423750(Local_2996[0 /*20*/].f_6, 1);
							UNK_0x5B1D360B9C6F0A09(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 20000, -1, 2f, 1, 0);
							iLocal_3118 = 7;
						}
					}
					else if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0) && !UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
					{
						if (SYSTEM::TIMERB() > 7000)
						{
							if (!bLocal_2964)
							{
								if (UNK_0xC42A92762C58E1B9(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 0))
								{
									if (!UNK_0x437347B10A200C4B(bLocal_3109, 0))
									{
										if (UNK_0x9C66D99E63E8E24C(bLocal_3109) < 2f)
										{
											if (UNK_0xD1960163A3042274(Local_2996[0 /*20*/], -258271821) != 1)
											{
												UNK_0xE072601B4380E9DF(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 2f, 786597);
											}
										}
										else
										{
											UNK_0xF82EA857DA10E0CD(&iVar0);
											UNK_0xDD353D0E9C789D0E(&iVar0);
											UNK_0x75CDA8644CD3B5F5(false, 5000, 4096);
											UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
											UNK_0x75ABDC5F81978924(iVar0);
											if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0))
											{
												UNK_0x78ADC381772E3D54(Local_2996[0 /*20*/], iVar0);
											}
											UNK_0xF82EA857DA10E0CD(&iVar0);
											iLocal_3118 = 7;
										}
									}
								}
								else if (!UNK_0x437347B10A200C4B(bLocal_3109, 0))
								{
									if (UNK_0x9C66D99E63E8E24C(bLocal_3109) < 5f)
									{
										if (UNK_0xD1960163A3042274(Local_2996[0 /*20*/], -1794415470) != 1)
										{
											if (UNK_0xBBA8A868118C90ED(Local_2996[0 /*20*/].f_6, -1, 0))
											{
												UNK_0x5B1D360B9C6F0A09(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, -1, -1, 2f, 1, 0);
											}
										}
									}
									else if (UNK_0xD1960163A3042274(Local_2996[0 /*20*/], 1056466932) != 1)
									{
										UNK_0xA8CC11FF8D2962D4(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 0f, 0f, 0f, 3f, -1, 10f, 1);
									}
								}
							}
						}
					}
				}
			}
			break;
		case 7:
			func_201(1);
			if (UNK_0x405E212DDE472467(Local_2996[0 /*20*/], 0) && !UNK_0x6D18156F72BE0773(bLocal_3109, Local_2996[0 /*20*/].f_6))
			{
				if (bLocal_2964)
				{
					sLocal_2618 = "TOW_PED_ANTH";
				}
				else if (bLocal_2965)
				{
					sLocal_2618 = "TOW_ILLEG_SE";
				}
				bLocal_2970 = true;
				func_171(&Local_2348, "TOWAUD", sLocal_2618, 9, 0, 0, 0);
				bLocal_2957 = false;
				UNK_0xE072601B4380E9DF(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 5f, 786597);
				iLocal_3118 = 8;
				return 1;
			}
			break;
		case 8:
			bLocal_2949 = false;
			bLocal_2957 = false;
			if (UNK_0xE4EDC4B0E92C078B(Local_2996[0 /*20*/].f_9))
			{
				UNK_0x142CC44DB769B57E(&(Local_2996[0 /*20*/].f_9));
			}
			break;
	}
	return 0;
}

void func_201(bool bParam0)
{
	bool bVar0;
	float fVar1;
	char* sVar2;

	bVar0 = false;
	fVar1 = func_119(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 1);
	if (bParam0)
	{
		if (!UNK_0x437347B10A200C4B(bLocal_3109, 0) && !UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
		{
			if (UNK_0x6D18156F72BE0773(bLocal_3109, Local_2996[0 /*20*/].f_6) && !UNK_0xC42A92762C58E1B9(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 0))
			{
				bVar0 = true;
			}
		}
	}
	if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0))
	{
		if (UNK_0xB87D13D0C064E9D1(Local_2996[0 /*20*/], UNK_0x16F2683693E537C9(), 1) || UNK_0xB87D13D0C064E9D1(UNK_0x16F2683693E537C9(), Local_2996[0 /*20*/], 1))
		{
			func_59(&uLocal_3097);
			UNK_0xE910A68AA670B4AA(Local_2996[0 /*20*/]);
			UNK_0xE910A68AA670B4AA(UNK_0x16F2683693E537C9());
		}
	}
	if (UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0))
	{
		iLocal_3118 = 8;
	}
	else if (((fVar1 > 35f || (func_4(&uLocal_3097) > 30f && fVar1 > 5f)) || bVar0) || (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6)))
	{
		if (bLocal_2964)
		{
			func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
			sVar2 = "TOW_PED_ANCU";
		}
		else if (bLocal_2965)
		{
			func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
			sVar2 = "TOW_YELL";
		}
		else
		{
			func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWABDHANDMAN1", 0, 1);
			sVar2 = "TOW_PED_ANC2";
		}
		uLocal_2980[0] = Local_2996[0 /*20*/];
		uLocal_2980[1] = Local_2996[0 /*20*/].f_1;
		bLocal_2971 = true;
		func_202(Local_2348, "TOWAUD", sVar2, &uLocal_2980, 0);
		UNK_0x142CC44DB769B57E(&(Local_2996[0 /*20*/].f_9));
		if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/], 0))
		{
			UNK_0xA3BF0AA5A2608191(Local_2996[0 /*20*/]);
			UNK_0xF3268524E9BE6D6E(Local_2996[0 /*20*/], UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
		}
		iLocal_3118 = 8;
	}
}

int func_202(var uParam0, char* sParam1, char* sParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, char[4] cParam165, char* sParam166, var uParam167, bool bParam168)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = true;
	iVar2 = 75;
	if (bParam168)
	{
		iVar2 = 100;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_118((*uParam167)[iVar0], 1) > IntToFloat(iVar2))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		func_171(&uParam0, cParam165, sParam166, 9, 0, 0, 0);
		return 1;
	}
	return 0;
}

void func_203(struct<165> Param0, char* sParam165, char* sParam166, bool bParam167)
{
	if (bParam167)
	{
		UNK_0x5CEB4DB888A62073(false);
	}
	StringCopy(&cLocal_272, sParam165, 16);
	StringCopy(&cLocal_276, sParam166, 16);
	Local_96 = { Param0 };
}

bool func_204()
{
	switch (iLocal_3121)
	{
		case 0:
			if (UNK_0x4F1B602325013CC2(Local_2996[0 /*20*/]) >= 1 && !UNK_0xD17F06053799A7CA())
			{
				iLocal_3121 = 1;
			}
			break;
		case 1:
			if (bLocal_2973 && !bLocal_2974)
			{
				if (!func_47())
				{
					if (!bLocal_2975)
					{
						if (!bLocal_2979)
						{
							func_115("TOWT_OBJ_06", 7500, 1);
							bLocal_2975 = true;
						}
					}
					if (bLocal_2975 && !UNK_0xD17F06053799A7CA())
					{
						if (UNK_0xD1960163A3042274(Local_2996[0 /*20*/], -875674219) != 1)
						{
							UNK_0xF96A174EE26D7588(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_1, 0);
						}
						bLocal_2974 = true;
						iLocal_3121 = 2;
					}
				}
			}
			if (func_118(Local_2996[0 /*20*/], 1) > 20f)
			{
				UNK_0x5CEB4DB888A62073(true);
				return true;
			}
			break;
		case 2:
			if (func_118(Local_2996[0 /*20*/], 1) > 20f)
			{
				UNK_0x5CEB4DB888A62073(true);
				return true;
			}
			if (!func_47())
			{
				return true;
			}
			break;
	}
	return false;
}

int func_205(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (vLocal_280[iVar0 /*3*/] == iParam0 && !UNK_0xE4EDC4B0E92C078B(vLocal_280[iVar0 /*3*/].f_1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!UNK_0xE4EDC4B0E92C078B(vLocal_280[iVar0 /*3*/].f_1))
		{
			vLocal_280[iVar0 /*3*/] = iParam0;
			vLocal_280[iVar0 /*3*/].f_1 = iParam1;
			vLocal_280[iVar0 /*3*/].f_2 = iParam2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_206(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			UNK_0x083F03A847B640E9(bParam0, 1);
			UNK_0xB35CCEC0D4946813(bParam0, 1);
			UNK_0xAFF39FB306F8E232(bParam0, 23, false);
			UNK_0x3CC33E4E9CE523F4(bParam0, 2);
			UNK_0x262EF6C6306BEA6C(bParam0, joaat("WEAPON_MICROSMG"), 1000, true, true);
			UNK_0x29CD9554726C7577(bParam0, 500);
		}
	}
}

void func_207(bool bParam0, float fParam1)
{
	if (!func_7(bParam0))
	{
		func_60(bParam0, fParam1);
	}
}

bool func_208(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
		return false;
	}
	iVar0 = 0;
	if (UNK_0x1BF376CEB706080F(UNK_0xA30EC016B12C03E4()) && func_118(bParam1, 1) < 40f)
	{
		iVar0 = 1;
	}
	if (UNK_0x1B3D109B39CC2C89(bParam0, bParam1))
	{
		iVar0 = 1;
	}
	if (UNK_0xB87D13D0C064E9D1(bParam1, UNK_0x16F2683693E537C9(), 1))
	{
		iVar0 = 1;
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam1, 0))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_209()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return true;
	}
	return false;
}

void func_210()
{
	vector3 vVar0;
	vector3 vVar3;

	if (!bLocal_2946)
	{
		if (UNK_0xC844350D5D58C99A(Local_2996[0 /*20*/].f_6))
		{
			if (!UNK_0x437347B10A200C4B(Local_2996[0 /*20*/].f_6, 0))
			{
				vVar3 = { UNK_0x68F4C0EC296D3901(Local_2996[0 /*20*/].f_6, true) };
			}
		}
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		}
		if (bLocal_2965)
		{
			if (SYSTEM::VDIST2(vVar0, vVar3) < 25f)
			{
				UNK_0x5CEB4DB888A62073(true);
				if (!func_47())
				{
					UNK_0x0C8C0C840C2D1AD2(Local_2996[0 /*20*/], UNK_0x16F2683693E537C9(), 5000, 0, 2);
					func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					if (func_171(&Local_2348, "TOWAUD", "TOW_HANDI_CL", 9, 0, 0, 0))
					{
						bLocal_2946 = true;
					}
				}
			}
		}
	}
}

int func_211(bool bParam0, bool bParam1)
{
	if (UNK_0xC844350D5D58C99A(bParam1))
	{
		if (!UNK_0x437347B10A200C4B(bParam1, 0))
		{
			if (!UNK_0x405E212DDE472467(bParam1, 0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_7(&uLocal_434))
	{
		func_59(&uLocal_434);
	}
	if (func_118(bParam0, 0) < 15f)
	{
		fLocal_431 = 0.3f;
		fLocal_432 = 0.5f;
		fLocal_433 = 0.1f;
	}
	else if (func_118(bParam0, 0) < 40f)
	{
		fLocal_431 = 0.6f;
		fLocal_432 = 1f;
		fLocal_433 = 0.2f;
	}
	if (func_3(&uLocal_434, UNK_0x79833B02DBD2A244(fLocal_431, fLocal_432)))
	{
		func_59(&uLocal_434);
		UNK_0xDFC6BA855748EB10(bParam0, 1, 0f, 0f, fLocal_433, -0.0067f, -0.8283f, -0.2766f, 0, 1, 1, 1, 1, 1);
	}
	return 1;
}

void func_212()
{
	UNK_0xC2127C0F64D6A3B9();
	func_213();
}

void func_213()
{
	Global_22211.f_134 = 1;
}

int func_214(bool bParam0, bool bParam1, struct<7> Param2, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, bool bParam22, var uParam23, char* sParam24, var uParam25, bool bParam26, var uParam27)
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;

	if (iLocal_2601 != 12)
	{
		func_218(Param2, bParam0, bParam1);
	}
	if (!bLocal_467)
	{
		if (iLocal_2601 >= 6 && iLocal_2601 <= 11)
		{
			if (bParam26)
			{
				if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
				{
					if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), 400.2854f, -1632.597f, 28.29278f, 5f, 5f, 2f, true, true, 0))
					{
					}
				}
			}
		}
		switch (iLocal_2601)
		{
			case 0:
				if (func_123(bParam1, bParam0, &iLocal_2603, 10, 90f, 100f, 0))
				{
					UNK_0xA22F71BBC8173C39(bParam1, false);
					func_257(&Local_2348, 3, *uParam27, "TONYA", 0, 1);
					func_257(&Local_2348, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_TUT_INS1", 9, 0, 0, 0);
					iLocal_2601 = 1;
				}
				break;
			case 1:
				if (!func_47())
				{
					func_105("TOW_TUT_03", -1);
					SYSTEM::SETTIMERA(0);
					iLocal_2601 = 2;
				}
				break;
			case 2:
				if (bLocal_468)
				{
					UNK_0xA37A90C62806D848(1);
					iLocal_2601 = 4;
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					if (((SYSTEM::TIMERA() > 12000 || func_119(bParam0, bParam1, 1) < 15f) && func_119(bParam0, bParam1, 1) < 30f) && !func_47())
					{
						func_171(&Local_2348, "TOWAUD", "TOW_TUT_INS2", 9, 0, 0, 0);
						iLocal_2601 = 3;
					}
				}
				break;
			case 3:
				if (!bLocal_468)
				{
					if (!func_47() && !func_111("TOW_TUT_03"))
					{
						func_217("TOW_TUT_02");
						iLocal_2601 = 4;
					}
				}
				else
				{
					iLocal_2601 = 4;
				}
				break;
			case 4:
				if (SYSTEM::TIMERA() > 5000 || bLocal_468)
				{
					if ((SYSTEM::TIMERA() > 12000 || func_119(bParam0, bParam1, 1) < 7.5f) || (bLocal_468 && func_119(bParam0, bParam1, 1) < 30f))
					{
						iLocal_443 = 1;
						iLocal_443 = iLocal_443;
						func_217("TOW_TUT_01");
						iLocal_2601 = 5;
					}
				}
				break;
			case 5:
				if (SYSTEM::TIMERA() > 8000)
				{
					iLocal_2601 = 6;
				}
				break;
			case 6:
				if ((!func_47() && !UNK_0xD17F06053799A7CA()) && SYSTEM::TIMERA() > 12000)
				{
					if (!bLocal_460)
					{
						func_105("TOWT_HELP_CR", -1);
						bLocal_460 = true;
					}
				}
				if (UNK_0x3D1053F9EB43B7AD(bParam0, Param2, Param2.f_3, Param2.f_6, 0, false, 0))
				{
					func_171(&Local_2348, "TOWAUD", "TOW_TUT_INS4", 9, 0, 0, 0);
					if (UNK_0xE4EDC4B0E92C078B(*bParam22))
					{
						UNK_0x661342B9651D16E2(*bParam22, false);
						UNK_0x142CC44DB769B57E(bParam22);
					}
					StringCopy(sParam24, "TOW_TUT_04A", 64);
					*(uParam23[0 /*3*/]) = { Param2.f_14 };
					fLocal_430 = func_9(Param2.f_14, 0);
					*bParam22 = UNK_0x6CC513A908911CF0(Param2.f_14);
					SYSTEM::SETTIMERB(0);
					iLocal_2601 = 7;
				}
				break;
			case 7:
				if (!func_47())
				{
					if (SYSTEM::TIMERB() > 6000)
					{
						SYSTEM::SETTIMERA(0);
						func_115("TOW_TUT_04A", 7500, 1);
						iLocal_2601 = 9;
					}
				}
				break;
			case 9:
				if (func_11(Param2.f_14))
				{
					iLocal_2601 = 10;
				}
				if (!func_47())
				{
					if (UNK_0x3D1053F9EB43B7AD(bParam0, Param2, Param2.f_3, Param2.f_6, 0, true, 0))
					{
						iLocal_470 = UNK_0x1C0640BA9A7327B3();
						if (bLocal_444)
						{
							UNK_0x661342B9651D16E2(*bParam22, false);
							UNK_0x142CC44DB769B57E(bParam22);
							*(uParam23[0 /*3*/]) = { Param2.f_14 };
							fLocal_430 = func_9(Param2.f_14, 0);
							*bParam22 = UNK_0x6CC513A908911CF0(Param2.f_14);
						}
						if (UNK_0xE4EDC4B0E92C078B(*bParam22))
						{
							UNK_0x61755AC17D8F538E(*bParam22, 5);
						}
						iLocal_2601 = 10;
					}
				}
				break;
			case 10:
				if (!func_11(Param2.f_14))
				{
					vVar0 = { Param2.f_7 };
					vVar3 = { Param2.f_10 };
					bVar6 = Param2.f_13;
				}
				else
				{
					vVar0 = { Param2 };
					vVar3 = { Param2.f_3 };
					bVar6 = Param2.f_6;
				}
				if (UNK_0x3D1053F9EB43B7AD(bParam1, vVar0, vVar3, bVar6, 0, true, 0))
				{
					func_105("TOWT_HELP_UH", -1);
					func_216();
					if (!UNK_0x437347B10A200C4B(bParam0, 0) && !UNK_0x437347B10A200C4B(bParam1, 0))
					{
						if (UNK_0x6D18156F72BE0773(bParam0, bParam1))
						{
							iLocal_2601 = 11;
						}
					}
				}
				else
				{
					func_215();
				}
				break;
			case 11:
				if (!func_11(Param2.f_14))
				{
					vVar0 = { Param2.f_7 };
					vVar3 = { Param2.f_10 };
					bVar6 = Param2.f_13;
				}
				else
				{
					vVar0 = { Param2 };
					vVar3 = { Param2.f_3 };
					bVar6 = Param2.f_6;
				}
				if (UNK_0x3D1053F9EB43B7AD(bParam1, vVar0, vVar3, bVar6, 0, true, 0))
				{
					func_105("TOWT_HELP_UH", -1);
					func_216();
				}
				if (((UNK_0xC844350D5D58C99A(bParam0) && UNK_0xC844350D5D58C99A(bParam1)) && !UNK_0x437347B10A200C4B(bParam0, 0)) && !UNK_0x437347B10A200C4B(bParam1, 0))
				{
					if (!UNK_0x6D18156F72BE0773(bParam0, bParam1))
					{
						UNK_0xA37A90C62806D848(1);
						UNK_0x790015DC92C918E2();
						func_146(&uLocal_399, 0, 0);
						iLocal_2601 = 12;
					}
				}
				break;
			case 12:
				break;
		}
		if (bParam26)
		{
			if (((UNK_0xC844350D5D58C99A(bParam0) && UNK_0xC844350D5D58C99A(bParam1)) && !UNK_0x437347B10A200C4B(bParam0, 0)) && !UNK_0x437347B10A200C4B(bParam1, 0))
			{
				if (UNK_0x6D18156F72BE0773(bParam0, bParam1) && !bLocal_2602)
				{
					if (func_47())
					{
						if (UNK_0xFEBC1E4EC9E001F0())
						{
							UNK_0xA37A90C62806D848(1);
						}
						func_172();
						iLocal_2601 = 6;
					}
					else
					{
						func_107(*bParam22);
						SYSTEM::SETTIMERA(0);
						iLocal_2601 = 6;
						func_171(&Local_2348, "TOWAUD", "TOW_TUT_INS3", 9, 0, 0, 0);
						bLocal_2602 = true;
					}
				}
			}
			if (!bLocal_462)
			{
				if (bLocal_2602)
				{
					if (!func_47())
					{
						UNK_0xA37A90C62806D848(1);
						func_115("TOWT_OBJ_06", 7500, 1);
						bLocal_462 = true;
					}
				}
			}
		}
	}
	return 0;
}

void func_215()
{
	switch (iLocal_476)
	{
		case 0:
			if (!func_7(&uLocal_2525))
			{
				func_263(&uLocal_2525);
			}
			else if (func_4(&uLocal_2525) > 10f)
			{
				if (func_171(&uLocal_484, "TOWAUD", "TOW_SUGG2", 9, 0, 0, 0))
				{
					iLocal_476 = 1;
				}
			}
			break;
		case 1:
			if (!func_47())
			{
				if (func_171(&uLocal_484, "TOWAUD", "TOW_RESP", 9, 0, 0, 0))
				{
					func_59(&uLocal_2525);
					iLocal_476 = 2;
				}
			}
			break;
		case 2:
			if (func_7(&uLocal_2525))
			{
				if (func_4(&uLocal_2525) > 15f)
				{
					if (!func_47())
					{
						if (func_171(&uLocal_484, "TOWAUD", "TOW_WAIT", 9, 0, 0, 0))
						{
							iLocal_476 = 3;
						}
					}
				}
			}
			break;
		case 3:
			break;
	}
}

void func_216()
{
	if (!bLocal_459)
	{
		if (!UNK_0xD17F06053799A7CA())
		{
			if (!func_47())
			{
				if (func_171(&uLocal_484, "TOWAUD", "TONYA_UNHOOK", 9, 0, 0, 0))
				{
					bLocal_459 = true;
				}
			}
		}
	}
}

void func_217(bool bParam0)
{
	SYSTEM::SETTIMERA(0);
	func_105(bParam0, -1);
}

void func_218(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, bool bParam20, bool bParam21)
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;

	if (!UNK_0xC844350D5D58C99A(bParam20) || !UNK_0xC844350D5D58C99A(bParam21))
	{
		return;
	}
	if (UNK_0x437347B10A200C4B(bParam20, 0) || UNK_0x437347B10A200C4B(bParam21, 0))
	{
		return;
	}
	if (!func_11(Param0.f_14))
	{
		vVar0 = { Param0.f_7 };
		vVar3 = { Param0.f_10 };
		bVar6 = Param0.f_13;
	}
	else
	{
		vVar0 = { Param0 };
		vVar3 = { Param0.f_3 };
		bVar6 = Param0.f_6;
	}
	if (!bLocal_445)
	{
		if (UNK_0x3D1053F9EB43B7AD(bParam21, vVar0, vVar3, bVar6, 0, true, 0))
		{
			if (!UNK_0x437347B10A200C4B(bParam20, 0) && !UNK_0x437347B10A200C4B(bParam21, 0))
			{
				if (!UNK_0x6D18156F72BE0773(bParam20, bParam21))
				{
					UNK_0xA37A90C62806D848(1);
					UNK_0x790015DC92C918E2();
					iLocal_2601 = 12;
					bLocal_445 = true;
				}
			}
		}
	}
}

int func_219(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(bParam1))
	{
		iVar0 = (*uParam2 - UNK_0x7F6DC62EA9922664(bParam1));
	}
	if (fLocal_428 == 0f)
	{
	}
	if (iVar0 > 0)
	{
		if (UNK_0xC844350D5D58C99A(bParam1))
		{
			if (!UNK_0x437347B10A200C4B(bParam1, 0))
			{
				if ((UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam1, 0)) || UNK_0xB87D13D0C064E9D1(bParam1, UNK_0x16F2683693E537C9(), 1))
				{
					*uParam3 = (*uParam3 + iVar0);
				}
				else if (UNK_0xC844350D5D58C99A(bParam1))
				{
					*uParam2 = UNK_0x7F6DC62EA9922664(bParam1);
					iVar0 = 0;
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (*uParam3 > 250)
			{
				if (bParam4)
				{
					if (func_171(&Local_2348, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 1;
					}
				}
				else if (func_171(&Local_2348, "TOWAUD", "TOW_DISP_DMT", 8, 0, 0, 0))
				{
					*uParam0 = 1;
				}
				if (bParam4)
				{
					fLocal_428 = (fLocal_428 + 25f);
				}
			}
			break;
		case 1:
			if (*uParam3 > 500)
			{
				if (bParam4)
				{
					if (func_171(&Local_2348, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 2;
					}
				}
				else if (func_171(&Local_2348, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0))
				{
					*uParam0 = 2;
				}
				if (bParam4)
				{
					fLocal_428 = (fLocal_428 + 25f);
				}
			}
			break;
		case 2:
			if (*uParam3 > 900)
			{
				if (bParam4)
				{
					func_171(&Local_2348, "TOWAUD", "TOW_DISP_DMB", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				else
				{
					func_171(&Local_2348, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				if (bParam4)
				{
					fLocal_428 = (fLocal_428 + 75f);
				}
			}
			break;
		case 3:
			break;
	}
	if (UNK_0xC844350D5D58C99A(bParam1))
	{
		*uParam2 = UNK_0x7F6DC62EA9922664(bParam1);
	}
	return 0;
}

bool func_220(var uParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(bParam1))
	{
		iVar0 = (*uParam3 - UNK_0x7F6DC62EA9922664(bParam1));
	}
	if (bParam5)
	{
		if (iVar0 > 0)
		{
			if (UNK_0xC844350D5D58C99A(bParam1) && UNK_0xC844350D5D58C99A(bParam2))
			{
				if (!UNK_0x437347B10A200C4B(bParam1, 0) && !UNK_0x437347B10A200C4B(bParam2, 0))
				{
					if ((UNK_0x1B3D109B39CC2C89(bParam1, bParam2) || UNK_0x6D18156F72BE0773(bParam2, bParam1)) || UNK_0xB87D13D0C064E9D1(bParam1, UNK_0x16F2683693E537C9(), 1))
					{
						*uParam4 = (*uParam4 + iVar0);
					}
					else if (UNK_0xC844350D5D58C99A(bParam1))
					{
						*uParam3 = UNK_0x7F6DC62EA9922664(bParam1);
						iVar0 = 0;
					}
				}
			}
		}
		switch (*uParam0)
		{
			case 0:
				if (*uParam4 > 250)
				{
					*uParam0 = 1;
					func_222("TOW_DMG_01", 25, -1);
					func_221(func_26(), 1, 25);
					fLocal_428 = (fLocal_428 + 25f);
				}
				break;
			case 1:
				if (*uParam4 > 500)
				{
					*uParam0 = 2;
					func_222("TOW_DMG_01", 75, -1);
					func_221(func_26(), 1, 75);
					fLocal_428 = (fLocal_428 + 75f);
				}
				break;
			case 2:
				if (*uParam4 > 550)
				{
					*uParam0 = 3;
					func_105("TOW_DMG_03", -1);
				}
				break;
			case 3:
				if (*uParam4 > 900)
				{
					return false;
				}
				break;
		}
	}
	if (UNK_0xC844350D5D58C99A(bParam1))
	{
		*uParam3 = UNK_0x7F6DC62EA9922664(bParam1);
	}
	return true;
}

int func_221(int iParam0, int iParam1, int iParam2)
{
	if (func_99(iParam0) == 3)
	{
		return 0;
	}
	if (func_99(iParam0) == 4)
	{
		return 0;
	}
	return func_65(func_99(iParam0), 0, iParam1, iParam2, 0);
}

void func_222(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam2);
}

void func_223(bool bParam0, bool bParam1, int iParam2, var uParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;

	bParam10 = bParam10;
	if (bParam11)
	{
		if (UNK_0xE4EDC4B0E92C078B(*bParam1))
		{
			UNK_0x142CC44DB769B57E(bParam1);
		}
		*iParam5 = UNK_0x1C0640BA9A7327B3();
		bLocal_467 = !func_224(bParam0);
		return;
	}
	else if (!UNK_0xE4EDC4B0E92C078B(*bParam1) && bLocal_467)
	{
		*bParam1 = UNK_0x5C3B41825F6AC5A0(*bParam0);
		UNK_0x61755AC17D8F538E(*bParam1, 3);
		UNK_0x661342B9651D16E2(*bParam1, true);
	}
	if (!bParam9)
	{
		if (!bLocal_467)
		{
			if (!func_224(bParam0))
			{
				UNK_0xCB7A8856533F691C();
				*iParam5 = UNK_0x1C0640BA9A7327B3();
				if (bParam13)
				{
					if (bLocal_440)
					{
						func_115("DTRSHRD_03", 7500, 1);
						bLocal_440 = false;
					}
					if (!UNK_0xE4EDC4B0E92C078B(*bParam1))
					{
						*bParam1 = UNK_0x5C3B41825F6AC5A0(*bParam0);
						UNK_0x61755AC17D8F538E(*bParam1, 3);
						UNK_0x661342B9651D16E2(*bParam1, true);
					}
				}
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (UNK_0xE4EDC4B0E92C078B((iParam2[iVar0 /*20*/])->f_8))
					{
						UNK_0x661342B9651D16E2((iParam2[iVar0 /*20*/])->f_8, false);
						UNK_0x142CC44DB769B57E(&((iParam2[iVar0 /*20*/])->f_8));
						*iParam8 = 0;
					}
					iVar0++;
				}
				if (UNK_0xE4EDC4B0E92C078B((iParam2[0 /*20*/])->f_9))
				{
					UNK_0x142CC44DB769B57E(&((iParam2[0 /*20*/])->f_9));
				}
				bLocal_467 = true;
			}
		}
		else if (func_224(bParam0))
		{
			if (UNK_0xE4EDC4B0E92C078B(*bParam1))
			{
				UNK_0x142CC44DB769B57E(bParam1);
			}
			if (!UNK_0xEB6A8945D1AC98A1((*iParam2)[0 /*20*/]))
			{
				if (!UNK_0xC42A92762C58E1B9((*iParam2)[0 /*20*/], *bParam0, 0) && !UNK_0xC42A92762C58E1B9((*iParam2)[0 /*20*/], (iParam2[iParam6 /*20*/])->f_6, 0))
				{
					if (!UNK_0xE4EDC4B0E92C078B((iParam2[0 /*20*/])->f_9))
					{
						(iParam2[0 /*20*/])->f_9 = UNK_0x5C3B41825F6AC5A0((*iParam2)[iVar0 /*20*/]);
						UNK_0x61755AC17D8F538E((iParam2[0 /*20*/])->f_9, 3);
						UNK_0x516E63E474722206((iParam2[0 /*20*/])->f_9, 0.7f);
					}
				}
			}
			if (bLocal_441)
			{
				func_115(bParam4, 7500, 1);
				bLocal_441 = false;
			}
			if (!func_11(*(uParam3[0 /*3*/])) && iParam12 == 9)
			{
				if (!UNK_0xE4EDC4B0E92C078B((iParam2[0 /*20*/])->f_8))
				{
					(iParam2[0 /*20*/])->f_8 = UNK_0x6CC513A908911CF0(*(uParam3[0 /*3*/]));
					UNK_0x661342B9651D16E2((iParam2[0 /*20*/])->f_8, true);
				}
			}
			else if (bParam7)
			{
				if (!UNK_0x437347B10A200C4B((iParam2[iParam6 /*20*/])->f_6, 0))
				{
					if (!UNK_0xE4EDC4B0E92C078B((iParam2[iParam6 /*20*/])->f_8))
					{
						(iParam2[iParam6 /*20*/])->f_8 = UNK_0x5C3B41825F6AC5A0((iParam2[iParam6 /*20*/])->f_6);
						UNK_0x61755AC17D8F538E((iParam2[iParam6 /*20*/])->f_8, 3);
						UNK_0x661342B9651D16E2((iParam2[0 /*20*/])->f_8, true);
					}
				}
				else
				{
					if (iLocal_420 == 3)
					{
						Local_650[iLocal_2604 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
					}
					if (!UNK_0xE4EDC4B0E92C078B((iParam2[0 /*20*/])->f_8))
					{
						(iParam2[0 /*20*/])->f_8 = UNK_0x6CC513A908911CF0(Local_650[iLocal_2604 /*23*/].f_1);
						UNK_0x61755AC17D8F538E((iParam2[0 /*20*/])->f_8, 3);
						UNK_0x661342B9651D16E2((iParam2[0 /*20*/])->f_8, true);
					}
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (!UNK_0x437347B10A200C4B((iParam2[iVar0 /*20*/])->f_6, 0))
					{
						if (!UNK_0xE4EDC4B0E92C078B((iParam2[iVar0 /*20*/])->f_8))
						{
							(iParam2[iVar0 /*20*/])->f_8 = UNK_0x5C3B41825F6AC5A0((iParam2[iVar0 /*20*/])->f_6);
							UNK_0x61755AC17D8F538E((iParam2[iVar0 /*20*/])->f_8, 3);
							UNK_0x661342B9651D16E2((iParam2[iVar0 /*20*/])->f_8, true);
						}
					}
					else
					{
						if (iLocal_420 == 3)
						{
							Local_650[iLocal_2604 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
						}
						if (!UNK_0xE4EDC4B0E92C078B((iParam2[0 /*20*/])->f_8))
						{
							(iParam2[0 /*20*/])->f_8 = UNK_0x6CC513A908911CF0(Local_650[iLocal_2604 /*23*/].f_1);
							UNK_0x61755AC17D8F538E((iParam2[0 /*20*/])->f_8, 3);
							UNK_0x661342B9651D16E2((iParam2[0 /*20*/])->f_8, true);
						}
					}
					iVar0++;
				}
			}
			*iParam5 = 0;
			bLocal_467 = false;
		}
	}
}

bool func_224(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				if (UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0) != *bParam0)
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

void func_225()
{
	int iVar0;

	iVar0 = func_26();
	if (iVar0 != 1)
	{
		func_193();
	}
}

void func_226(var uParam0)
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
						func_227(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = UNK_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_227(bool bParam0)
{
	func_228(bParam0, &(bParam0->f_2), bParam0->f_1);
}

void func_228(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 30))
	{
		switch (func_229(*bParam0))
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

bool func_229(bool bParam0)
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

void func_230()
{
	if (Global_8161[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	UNK_0x0674E58A79778E99(&Global_7356, 25);
	UNK_0x5D96D8530B3D0904(&Global_7357, 11);
}

void func_231(bool bParam0)
{
	int iVar0;
	int iVar1;

	func_254();
	iLocal_2608 = func_253();
	if (bParam0->f_3 == 3)
	{
		sLocal_2620[0] = "base";
		func_251(&uLocal_2648, "amb@world_human_smoking@male@male_a@base");
		func_251(&uLocal_2648, "oddjobs@towingcome_here");
		func_251(&uLocal_2648, "move_m@JOG@");
	}
	else if ((bParam0->f_3 == 0 || bParam0->f_3 == 2) && !bLocal_2959)
	{
		func_251(&uLocal_2648, "Ped");
		func_251(&uLocal_2648, "oddjobs@towing");
		func_251(&uLocal_2648, "oddjobs@towingangryidle_a");
		func_251(&uLocal_2648, "oddjobs@towingpleadingidle_b");
		func_251(&uLocal_2648, "oddjobs@towingpleadingidle_a");
		func_251(&uLocal_2648, "move_m@JOG@");
	}
	else if (bLocal_2959)
	{
		func_251(&uLocal_2648, "amb@world_human_smoking@male@male_a@base");
		func_251(&uLocal_2648, "oddjobs@towing");
	}
	if (bParam0->f_3 == 2)
	{
		func_251(&uLocal_2648, "RANDOM@CAR_SLEEPING");
	}
	else if (bParam0->f_3 == 4)
	{
		bLocal_2619 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
		func_251(&uLocal_2648, bLocal_2619);
		func_249(&uLocal_2638, joaat("AMBULANCE"));
		func_249(&uLocal_2638, joaat("S_M_M_PARAMEDIC_01"));
		sLocal_2620[0] = "react_big_variations_a";
		sLocal_2620[1] = "react_big_variations_b";
		sLocal_2620[2] = "react_big_variations_c";
		func_251(&uLocal_2648, "move_m@JOG@");
	}
	UNK_0xAB8E2DDC7AF955E0(joaat("TOWTRUCK"), true);
	if (bParam0->f_3 == 1)
	{
		UNK_0x9E5E60D8C63FD9D1();
		func_251(&uLocal_2648, "oddjobs@towing");
		func_251(&uLocal_2648, "amb@world_human_smoking@male@male_a@base");
		func_251(&uLocal_2648, "oddjobs@towingpleadingidle_b");
		func_249(&uLocal_2638, joaat("FREIGHTCONT1"));
		func_249(&uLocal_2638, joaat("TANKERCAR"));
		func_249(&uLocal_2638, joaat("FREIGHT"));
		func_249(&uLocal_2638, joaat("FREIGHTCAR"));
		func_249(&uLocal_2638, joaat("S_M_M_LSMETRO_01"));
		func_249(&uLocal_2638, joaat("A_F_M_BEVHILLS_01"));
		func_249(&uLocal_2638, joaat("A_M_Y_GENSTREET_02"));
	}
	if (bParam0->f_3 == 2)
	{
		func_248();
	}
	else if (bParam0->f_3 == 4)
	{
		iLocal_2987[iVar0] = Local_650[iLocal_2604 /*23*/].f_20;
	}
	else
	{
		func_247();
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_2987[iVar0] == 0)
		{
			iLocal_2987[iVar0] = func_245(&iLocal_2987, &iLocal_82, 10);
			UNK_0xD4D331DFE794EACD(iLocal_2987[iVar0], 3);
		}
		if (bLocal_2965)
		{
			iLocal_2987[iVar0] = joaat("LANDSTALKER");
			func_249(&uLocal_2638, iLocal_2987[iVar0]);
			UNK_0xD4D331DFE794EACD(iLocal_2987[iVar0], 3);
		}
		else if (iLocal_2987[iVar0] != 0)
		{
			func_249(&uLocal_2638, iLocal_2987[iVar0]);
			UNK_0xD4D331DFE794EACD(iLocal_2987[iVar0], 3);
		}
		iVar0++;
	}
	if (!bLocal_2959 && bLocal_2962)
	{
		if (bLocal_2965)
		{
			func_244(&iVar1);
			bLocal_74 = joaat("A_M_M_TRANVEST_01");
			bLocal_74 = bLocal_74;
			func_249(&uLocal_2638, bLocal_74);
		}
		else if (bLocal_2966)
		{
			func_243(&iVar1);
		}
		else if (bParam0->f_3 == 3)
		{
			func_242(&iVar1, 1);
		}
		else if (bParam0->f_3 == 0 && !bLocal_2965)
		{
			func_242(&iVar1, 1);
		}
		else
		{
			func_242(&iVar1, 0);
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iLocal_2989[iVar0] = func_245(&iLocal_2989, &iLocal_75, iVar1);
			if (iLocal_2989[iVar0] != 0)
			{
				func_249(&uLocal_2638, iLocal_2989[iVar0]);
			}
			iVar0++;
		}
	}
	func_249(&uLocal_2638, bLocal_649);
	func_241(&uLocal_2656, "TOW", 2, 0);
	func_241(&uLocal_2656, "DTRSHRD", 3, 0);
	func_240(&uLocal_2638);
	func_237(&uLocal_2648, &uLocal_2656);
	while (!UNK_0x83D8570832F172A7(iLocal_2608))
	{
		func_226(&uLocal_2656);
		SYSTEM::WAIT(0);
	}
	while (!func_236(&uLocal_2638) || !UNK_0x1F04E7FA44219580(iLocal_2987[0]))
	{
		func_226(&uLocal_2656);
		SYSTEM::WAIT(0);
	}
	while (!func_232(&uLocal_2656))
	{
		func_226(&uLocal_2656);
		SYSTEM::WAIT(0);
	}
	if (bParam0->f_3 == 1)
	{
		while (!UNK_0xAE317D00A5A55DF6("SCRIPT\TOWING_TRAIN", 0, -1) || !UNK_0x25F7A4D42AF2AB93())
		{
			func_226(&uLocal_2656);
			SYSTEM::WAIT(0);
		}
	}
	while (!UNK_0x67C1D9E5B91B2E37(2) || !UNK_0x67C1D9E5B91B2E37(3))
	{
		func_226(&uLocal_2656);
		SYSTEM::WAIT(0);
	}
}

int func_232(var uParam0)
{
	return func_233(uParam0);
}

int func_233(var uParam0)
{
	int iVar0;

	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_234(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_234(var uParam0)
{
	return func_235(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

bool func_235(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0xEAE0D21A50E6C7F4(bParam0, 30))
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam0, 29))
		{
			switch (func_229(bParam0))
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

bool func_236(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!UNK_0xB87F6CF6E5628C67((*uParam0)[iVar0]))
			{
				if (!UNK_0xB87F6CF6E5628C67((*uParam0)[iVar0]))
				{
				}
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_237(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!UNK_0x2EBF5002C6B6A06C((*uParam0)[iVar0]))
		{
			func_238(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_238(var uParam0, char* sParam1)
{
	func_239(uParam0, 1, -1, sParam1, 0);
}

void func_239(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
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
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			UNK_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], bParam1);
			UNK_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_240(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			UNK_0x523BCC9DC80CD82F((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_241(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3)
	{
		UNK_0x5D96D8530B3D0904(&iVar0, 26);
	}
	func_239(uParam0, 8, iParam2, sParam1, iVar0);
}

void func_242(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iLocal_75[0] = joaat("A_M_Y_GENSTREET_02");
		iLocal_75[1] = joaat("A_M_Y_BEACH_03");
		iLocal_75[2] = joaat("G_M_Y_SALVAGOON_01");
		iLocal_75[3] = joaat("A_M_M_BEVHILLS_02");
		*iParam0 = 4;
	}
	else
	{
		iLocal_75[0] = joaat("A_F_M_BEVHILLS_01");
		iLocal_75[1] = joaat("A_M_Y_GENSTREET_02");
		iLocal_75[2] = joaat("A_F_Y_HIPSTER_02");
		iLocal_75[3] = joaat("A_M_Y_BEACH_03");
		iLocal_75[4] = joaat("S_F_Y_SWEATSHOP_01");
		iLocal_75[5] = joaat("G_M_Y_SALVAGOON_01");
		*iParam0 = 6;
	}
}

void func_243(int iParam0)
{
	iLocal_75[0] = joaat("A_M_M_TRAMP_01");
	iLocal_75[1] = joaat("A_M_Y_METHHEAD_01");
	iLocal_75[2] = joaat("A_M_M_TRAMP_01");
	iLocal_75[3] = joaat("A_M_Y_METHHEAD_01");
	*iParam0 = 4;
}

void func_244(int iParam0)
{
	iLocal_75[0] = joaat("A_M_Y_YOGA_01");
	iLocal_75[1] = joaat("A_M_Y_BEACH_03");
	iLocal_75[2] = joaat("A_M_Y_MUSCLBEAC_01");
	*iParam0 = 3;
}

int func_245(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = UNK_0x09AC81E49EA267F7(false, (iParam2 - 1));
	while (func_246((*iParam1)[iVar1], iParam0) || iVar0 > 25)
	{
		iVar0++;
		iVar1 = UNK_0x09AC81E49EA267F7(false, (iParam2 - 1));
	}
	return (*iParam1)[iVar1];
}

bool func_246(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if ((*iParam1)[iVar0] != 0)
		{
			if ((*iParam1)[iVar0] == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_247()
{
	iLocal_82[0] = joaat("TAILGATER");
	iLocal_82[1] = joaat("ASTEROPE");
	iLocal_82[2] = joaat("PRIMO");
	iLocal_82[3] = joaat("PRIMO");
	iLocal_82[4] = joaat("SCHWARZER");
	iLocal_82[5] = joaat("EMPEROR");
	iLocal_82[6] = joaat("PREMIER");
	iLocal_82[7] = joaat("BUFFALO");
	iLocal_82[8] = joaat("INTRUDER");
	iLocal_82[9] = joaat("INTRUDER");
}

void func_248()
{
	iLocal_82[0] = joaat("BUCCANEER");
	iLocal_82[1] = joaat("VOODOO2");
	iLocal_82[2] = joaat("MANANA");
	iLocal_82[3] = joaat("RUINER");
	iLocal_82[4] = joaat("RUINER");
	iLocal_82[5] = joaat("VOODOO2");
	iLocal_82[6] = joaat("SURFER2");
	iLocal_82[7] = joaat("EMPEROR2");
	iLocal_82[8] = joaat("STANIER");
	iLocal_82[9] = joaat("TAILGATER");
}

int func_249(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == bParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_250(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = bParam1;
	return 1;
}

int func_250(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_251(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!UNK_0x2EBF5002C6B6A06C((*uParam0)[iVar0]))
		{
			if (UNK_0x7F8A39872A07D2CE((*uParam0)[iVar0], bParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_252(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = bParam1;
	return 1;
}

int func_252(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (UNK_0x2EBF5002C6B6A06C((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_253()
{
	return UNK_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
}

void func_254()
{
	func_300(&uLocal_412, 1);
}

void func_255()
{
	switch (iLocal_420)
	{
		case 2:
			if ((Global_111638.f_19968.f_4 % 2) == 0)
			{
				sLocal_2624 = "TOWABDBITCHM";
			}
			else
			{
				sLocal_2624 = "TOWABDATTACKM";
			}
			break;
		case 4:
			break;
		case 3:
			sLocal_2624 = "TOWBREAKM";
			break;
		case 0:
			if (bLocal_2965)
			{
			}
			else
			{
				sLocal_2624 = "TOWHANDIBEGM";
			}
			break;
		case 1:
			sLocal_2624 = "TOWTRAINM";
			break;
	}
}

int func_256()
{
	return Local_650[iLocal_2604 /*23*/].f_22;
}

void func_257(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_258()
{
	iLocal_420 = func_260(Global_111638.f_19968.f_2);
	if (!func_259(iLocal_420))
	{
		iLocal_420 = 3;
	}
	if (iLocal_420 == 3)
	{
	}
	else
	{
		iLocal_2604 = func_262(1300f, iLocal_420, Global_111638.f_19968.f_9);
		Global_111638.f_19968.f_9 = iLocal_2604;
	}
	if (iLocal_2604 == 0)
	{
		iLocal_420 = 3;
	}
	Global_111638.f_19968.f_2 = iLocal_420;
}

bool func_259(int iParam0)
{
	iLocal_2604 = func_262(1300f, iParam0, Global_111638.f_19968.f_9);
	if (iLocal_2604 == -1)
	{
		return false;
	}
	return true;
}

int func_260(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2000000;
	iVar1 = 2;
	if (iParam0 != 2)
	{
		if (Global_111638.f_19968.f_4 < iVar0)
		{
			iVar0 = Global_111638.f_19968.f_4;
			iVar1 = 2;
		}
	}
	if (iParam0 != 0)
	{
		if (Global_111638.f_19968.f_6 < iVar0)
		{
			iVar0 = Global_111638.f_19968.f_6;
			iVar1 = 0;
		}
	}
	if (iParam0 != 1)
	{
		if (Global_111638.f_19968.f_5 < iVar0)
		{
			iVar0 = Global_111638.f_19968.f_5;
			iVar1 = 1;
		}
	}
	if (iParam0 != 3)
	{
		if (Global_111638.f_19968.f_7 < iVar0)
		{
			iVar0 = Global_111638.f_19968.f_7;
			iVar1 = 3;
		}
	}
	if (iParam0 != 4)
	{
		if (Global_111638.f_19968.f_8 < iVar0)
		{
			iVar0 = Global_111638.f_19968.f_8;
			iVar1 = 4;
		}
	}
	return iVar1;
}

bool func_261()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return true;
	}
	return false;
}

int func_262(float fParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3[53];
	int iVar57;
	int iVar58;

	fVar0 = 500f;
	iVar1 = -1;
	iVar57 = 0;
	iVar58 = 0;
	while (iVar58 < 53)
	{
		fVar2 = func_9(Local_650[iVar58 /*23*/].f_1, 1);
		if (!func_11(Local_650[iVar58 /*23*/].f_1))
		{
			if ((fVar2 < fParam0 && fVar2 > fVar0) && iVar58 != iParam2)
			{
				if (iParam1 == -1)
				{
					iVar3[iVar57] = iVar58;
					iVar57++;
				}
				else if (Local_650[iVar58 /*23*/] == iParam1)
				{
					iVar3[iVar57] = iVar58;
					iVar57++;
				}
			}
		}
		iVar58++;
	}
	if (iVar57 > 1)
	{
		iVar1 = iVar3[UNK_0x09AC81E49EA267F7(false, (iVar57 - 1))];
	}
	else if (iVar57 == 1)
	{
		iVar1 = iVar3[0];
	}
	else
	{
		return 0;
	}
	return iVar1;
}

void func_263(bool bParam0)
{
	if (!func_7(bParam0))
	{
		func_59(bParam0);
	}
}

void func_264()
{
	vLocal_45[0 /*3*/] = { -227.6f, -1172.1f, 21.8963f };
	vLocal_45[1 /*3*/] = { -205.6866f, -1384.333f, 30.2585f };
	vLocal_45[2 /*3*/] = { -205.6866f, -1384.333f, 30.2585f };
	vLocal_45[3 /*3*/] = { 532.4957f, -172.2088f, 53.6835f };
	vLocal_45[4 /*3*/] = { 1151.507f, -773.4066f, 56.61f };
	vLocal_45[5 /*3*/] = { 808.4329f, -822.9456f, 25.1821f };
	vLocal_45[6 /*3*/] = { 2502.613f, 4080.141f, 37.6307f };
	vLocal_45[7 /*3*/] = { 263.4725f, 2601.842f, 43.8197f };
	vLocal_70[0 /*3*/] = { 401.6046f, -1632.781f, 28.2928f };
}

void func_265(var uParam0)
{
	*(uParam0[0 /*28*/][0 /*3*/]) = { 568.8983f, -1698.723f, 28.2631f };
	*(uParam0[0 /*28*/][1 /*3*/]) = { 575.1474f, -1697.549f, 28.2631f };
	*(uParam0[0 /*28*/][2 /*3*/]) = { 584.8786f, -1703.875f, 28.2631f };
	(uParam0[0 /*28*/])->f_27 = 3;
	(uParam0[0 /*28*/])->f_23 = { 565.9069f, -1702.813f, 28.2227f };
	(uParam0[0 /*28*/])->f_26 = 58.4094f;
	(uParam0[0 /*28*/])->f_17 = { 564.5385f, -1689.707f, 38.2854f };
	(uParam0[0 /*28*/])->f_20 = { 605.4141f, -1715.221f, 18.0923f };
	*(uParam0[1 /*28*/][0 /*3*/]) = { 240.0033f, -1141.433f, 28.3033f };
	*(uParam0[1 /*28*/][1 /*3*/]) = { 240.5303f, -1137.75f, 28.3091f };
	*(uParam0[1 /*28*/][2 /*3*/]) = { 229.8743f, -1145.763f, 28.3013f };
	(uParam0[1 /*28*/])->f_27 = 3;
	(uParam0[1 /*28*/])->f_23 = { 239.0778f, -1134.141f, 28.2367f };
	(uParam0[1 /*28*/])->f_26 = 266.7983f;
	(uParam0[1 /*28*/])->f_17 = { 242.7403f, -1124.753f, 38.3223f };
	(uParam0[1 /*28*/])->f_20 = { 225.7671f, -1152.415f, 18.2047f };
	(uParam0[1 /*28*/])->f_10[0 /*3*/] = { 232.3824f, -1137.855f, 28.1944f };
	(uParam0[1 /*28*/])->f_10[1 /*3*/] = { 230.8579f, -1136.252f, 28.0348f };
	*(uParam0[2 /*28*/][0 /*3*/]) = { -95.1473f, -1716.656f, 28.4491f };
	*(uParam0[2 /*28*/][1 /*3*/]) = { -93.1677f, -1717.84f, 28.4239f };
	(uParam0[2 /*28*/])->f_27 = 2;
	(uParam0[2 /*28*/])->f_23 = { -102.9092f, -1729.668f, 28.7511f };
	(uParam0[2 /*28*/])->f_26 = 105.1153f;
	(uParam0[2 /*28*/])->f_10[0 /*3*/] = { -99.8953f, -1726.702f, 28.4622f };
	(uParam0[2 /*28*/])->f_10[1 /*3*/] = { -101.1025f, -1728.689f, 28.6286f };
	*(uParam0[3 /*28*/][0 /*3*/]) = { -117.7085f, -1321.069f, 28.2857f };
	*(uParam0[3 /*28*/][1 /*3*/]) = { -116.6308f, -1325.362f, 28.3192f };
	(uParam0[3 /*28*/])->f_27 = 2;
	(uParam0[3 /*28*/])->f_23 = { -112.3024f, -1329.219f, 28.2685f };
	(uParam0[3 /*28*/])->f_26 = 179.9845f;
	(uParam0[3 /*28*/])->f_10[0 /*3*/] = { -113.1683f, -1319.459f, 28.2125f };
	(uParam0[3 /*28*/])->f_10[1 /*3*/] = { -112.2886f, -1322.422f, 28.2633f };
	*(uParam0[4 /*28*/][0 /*3*/]) = { 308.2367f, -1706.026f, 28.3827f };
	*(uParam0[4 /*28*/][1 /*3*/]) = { 298.1392f, -1700.768f, 28.3234f };
	(uParam0[4 /*28*/])->f_27 = 2;
	(uParam0[4 /*28*/])->f_23 = { 314.1078f, -1704.305f, 28.3111f };
	(uParam0[4 /*28*/])->f_26 = 227.316f;
	(uParam0[4 /*28*/])->f_10[0 /*3*/] = { 304.5671f, -1697.522f, 28.2629f };
	(uParam0[4 /*28*/])->f_10[1 /*3*/] = { 308.3995f, -1699.695f, 28.3051f };
	*(uParam0[5 /*28*/][0 /*3*/]) = { 776.3322f, -2046.078f, 28.2818f };
	*(uParam0[5 /*28*/][1 /*3*/]) = { 776.0253f, -2048.392f, 28.2653f };
	(uParam0[5 /*28*/])->f_27 = 2;
	(uParam0[5 /*28*/])->f_23 = { 787.8897f, -2034.542f, 28.2393f };
	(uParam0[5 /*28*/])->f_26 = 348.1702f;
	(uParam0[5 /*28*/])->f_10[0 /*3*/] = { 782.5989f, -2047.48f, 28.159f };
	(uParam0[5 /*28*/])->f_10[1 /*3*/] = { 783.3265f, -2051.183f, 28.1589f };
	*(uParam0[6 /*28*/][0 /*3*/]) = { 28.2787f, -986.7457f, 28.5094f };
	*(uParam0[6 /*28*/][1 /*3*/]) = { 35.6153f, -988.3468f, 28.4971f };
	*(uParam0[6 /*28*/][2 /*3*/]) = { 38.553f, -985.1667f, 28.5576f };
	(uParam0[6 /*28*/])->f_27 = 3;
	(uParam0[6 /*28*/])->f_23 = { 43.6799f, -982.0863f, 28.4103f };
	(uParam0[6 /*28*/])->f_26 = 251.1427f;
	(uParam0[6 /*28*/])->f_10[0 /*3*/] = { 30.5244f, -980.0237f, 28.4037f };
	(uParam0[6 /*28*/])->f_10[1 /*3*/] = { 34.0509f, -979.3044f, 28.4079f };
	*(uParam0[7 /*28*/][0 /*3*/]) = { 99.1579f, -1521.963f, 28.3247f };
	*(uParam0[7 /*28*/][1 /*3*/]) = { 105.699f, -1527.331f, 28.3186f };
	(uParam0[7 /*28*/])->f_27 = 2;
	(uParam0[7 /*28*/])->f_23 = { 95.4077f, -1529.473f, 28.3325f };
	(uParam0[7 /*28*/])->f_26 = 51.3731f;
	(uParam0[7 /*28*/])->f_10[0 /*3*/] = { 100.3829f, -1529.783f, 28.2238f };
	(uParam0[7 /*28*/])->f_10[1 /*3*/] = { 97.5322f, -1531.58f, 28.3374f };
	*(uParam0[8 /*28*/][0 /*3*/]) = { 370.2508f, -871.9623f, 28.2916f };
	*(uParam0[8 /*28*/][1 /*3*/]) = { 364.377f, -872.4929f, 28.2916f };
	(uParam0[8 /*28*/])->f_27 = 2;
	(uParam0[8 /*28*/])->f_23 = { 370.0709f, -865.2366f, 28.2507f };
	(uParam0[8 /*28*/])->f_26 = 271.3831f;
	(uParam0[8 /*28*/])->f_10[0 /*3*/] = { 363.9474f, -865.3307f, 28.2621f };
	(uParam0[8 /*28*/])->f_10[1 /*3*/] = { 361.2415f, -866.9158f, 28.1908f };
	*(uParam0[9 /*28*/][0 /*3*/]) = { 258.1324f, -2035.098f, 17.2524f };
	*(uParam0[9 /*28*/][1 /*3*/]) = { 263.1343f, -2026.365f, 17.7171f };
	(uParam0[9 /*28*/])->f_27 = 2;
	(uParam0[9 /*28*/])->f_23 = { 260.0068f, -2041.806f, 16.9454f };
	(uParam0[9 /*28*/])->f_26 = 140.9065f;
	(uParam0[9 /*28*/])->f_10[0 /*3*/] = { 264.5263f, -2036.198f, 17.2682f };
	(uParam0[9 /*28*/])->f_10[1 /*3*/] = { 264.3815f, -2032.379f, 17.329f };
	*(uParam0[10 /*28*/][0 /*3*/]) = { 411.4076f, -1869.433f, 25.5691f };
	*(uParam0[10 /*28*/][1 /*3*/]) = { 416.1884f, -1862.589f, 26.0458f };
	(uParam0[10 /*28*/])->f_27 = 2;
	(uParam0[10 /*28*/])->f_23 = { 412.9648f, -1876.901f, 25.3104f };
	(uParam0[10 /*28*/])->f_26 = 135.5291f;
	(uParam0[10 /*28*/])->f_10[0 /*3*/] = { 418.299f, -1872.54f, 25.6552f };
	(uParam0[10 /*28*/])->f_10[1 /*3*/] = { 419.0923f, -1869.039f, 25.6907f };
	*(uParam0[11 /*28*/][0 /*3*/]) = { 500.9577f, -1664.881f, 28.7134f };
	*(uParam0[11 /*28*/][1 /*3*/]) = { 501.1261f, -1668.809f, 28.7152f };
	(uParam0[11 /*28*/])->f_27 = 2;
	(uParam0[11 /*28*/])->f_23 = { 503.8388f, -1661.237f, 28.4841f };
	(uParam0[11 /*28*/])->f_26 = 50.8842f;
	(uParam0[11 /*28*/])->f_10[0 /*3*/] = { 507.0525f, -1670.254f, 28.7152f };
	(uParam0[11 /*28*/])->f_10[1 /*3*/] = { 507.7841f, -1665.116f, 28.4902f };
	*(uParam0[12 /*28*/][0 /*3*/]) = { -208.9247f, -660.1125f, 32.629f };
	*(uParam0[12 /*28*/][1 /*3*/]) = { -204.0615f, -660.8978f, 32.7011f };
	*(uParam0[12 /*28*/][2 /*3*/]) = { -198.1905f, -664.2867f, 32.8159f };
	(uParam0[12 /*28*/])->f_27 = 3;
	(uParam0[12 /*28*/])->f_23 = { -213.0429f, -666.7334f, 32.6039f };
	(uParam0[12 /*28*/])->f_26 = 70.1131f;
	(uParam0[12 /*28*/])->f_10[0 /*3*/] = { -210.6179f, -667.8796f, 32.6494f };
	(uParam0[12 /*28*/])->f_10[1 /*3*/] = { -204.9018f, -667.8836f, 32.6425f };
	*(uParam0[13 /*28*/][0 /*3*/]) = { -310.1606f, -869.7873f, 30.6891f };
	*(uParam0[13 /*28*/][1 /*3*/]) = { -315.0338f, -869.8134f, 30.6555f };
	*(uParam0[13 /*28*/][2 /*3*/]) = { -319.5981f, -868.6276f, 30.6449f };
	(uParam0[13 /*28*/])->f_27 = 3;
	(uParam0[13 /*28*/])->f_23 = { -309.987f, -864.1183f, 30.6228f };
	(uParam0[13 /*28*/])->f_26 = 261.3995f;
	(uParam0[13 /*28*/])->f_10[0 /*3*/] = { -316.0121f, -862.7733f, 30.6267f };
	(uParam0[13 /*28*/])->f_10[1 /*3*/] = { -317.526f, -863.8655f, 30.5453f };
	*(uParam0[14 /*28*/][0 /*3*/]) = { 407.2907f, -1479.637f, 28.2895f };
	*(uParam0[14 /*28*/][1 /*3*/]) = { 404.6483f, -1483.57f, 28.2895f };
	(uParam0[14 /*28*/])->f_27 = 2;
	(uParam0[14 /*28*/])->f_23 = { 403.5326f, -1475.197f, 28.2951f };
	(uParam0[14 /*28*/])->f_26 = 301.9695f;
	(uParam0[14 /*28*/])->f_10[0 /*3*/] = { 399.232f, -1477.783f, 28.2928f };
	(uParam0[14 /*28*/])->f_10[1 /*3*/] = { 401.2551f, -1479.737f, 28.1369f };
	*(uParam0[15 /*28*/][0 /*3*/]) = { -686.6597f, -851.2509f, 22.9054f };
	*(uParam0[15 /*28*/][1 /*3*/]) = { -696.9954f, -852.1266f, 22.6746f };
	(uParam0[15 /*28*/])->f_27 = 2;
	(uParam0[15 /*28*/])->f_23 = { -674.3848f, -844.9825f, 23.1517f };
	(uParam0[15 /*28*/])->f_26 = 269.1391f;
	(uParam0[15 /*28*/])->f_10[0 /*3*/] = { -692.3451f, -845.8392f, 22.7217f };
	(uParam0[15 /*28*/])->f_10[1 /*3*/] = { -692.3451f, -845.8392f, 22.7217f };
}

void func_266(var uParam0)
{
	(uParam0[0 /*23*/])->f_1 = { 123.999f, -1081.618f, 28.1919f };
	(uParam0[0 /*23*/])->f_4 = 180.477f;
	(uParam0[0 /*23*/])->f_6 = { 97.7377f, -1072.493f, 28.2717f };
	(uParam0[0 /*23*/])->f_9 = 253.9961f;
	(*uParam0)[0 /*23*/] = 0;
	(uParam0[1 /*23*/])->f_1 = { 123.999f, -1081.618f, 28.1919f };
	(uParam0[1 /*23*/])->f_4 = 180.477f;
	(uParam0[1 /*23*/])->f_6 = { 97.7377f, -1072.493f, 28.2717f };
	(uParam0[1 /*23*/])->f_9 = 253.9961f;
	(*uParam0)[1 /*23*/] = 0;
	(uParam0[2 /*23*/])->f_1 = { -301.9741f, -898.8075f, 30.0813f };
	(uParam0[2 /*23*/])->f_4 = 168.6079f;
	(uParam0[2 /*23*/])->f_6 = { -301.0894f, -934.515f, 30.0813f };
	(uParam0[2 /*23*/])->f_9 = 66.2119f;
	(*uParam0)[2 /*23*/] = 0;
	(uParam0[3 /*23*/])->f_1 = { -359.0859f, -965.5469f, 30.0701f };
	(uParam0[3 /*23*/])->f_4 = 145.3635f;
	(*uParam0)[3 /*23*/] = 2;
	(uParam0[4 /*23*/])->f_1 = { 4.5819f, -1762.495f, 28.2918f };
	(uParam0[4 /*23*/])->f_4 = 51.8577f;
	(*uParam0)[4 /*23*/] = 2;
	(uParam0[5 /*23*/])->f_1 = { 260.5293f, -1872.327f, 25.8171f };
	(uParam0[5 /*23*/])->f_4 = 55f;
	(*uParam0)[5 /*23*/] = 1;
	(uParam0[5 /*23*/])->f_6 = { 209.1288f, -2149.055f, 13.3765f };
	(uParam0[5 /*23*/])->f_5 = 1;
	(uParam0[5 /*23*/])->f_13 = { 331.456f, -1789.7f, 26.817f };
	(uParam0[5 /*23*/])->f_16 = { 190.235f, -1957.1f, 26.816f };
	(uParam0[5 /*23*/])->f_19 = 7.2f;
	(uParam0[6 /*23*/])->f_1 = { 967.3045f, -1873.789f, 30.1425f };
	(uParam0[6 /*23*/])->f_4 = 41.1599f;
	(*uParam0)[6 /*23*/] = 2;
	(uParam0[7 /*23*/])->f_1 = { -607.5065f, -1216.34f, 13.4082f };
	(uParam0[7 /*23*/])->f_4 = 131.5235f;
	(*uParam0)[7 /*23*/] = 2;
	(uParam0[8 /*23*/])->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	(uParam0[8 /*23*/])->f_4 = 263.5155f;
	(uParam0[8 /*23*/])->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	(uParam0[8 /*23*/])->f_9 = 62.5486f;
	(*uParam0)[8 /*23*/] = 0;
	(uParam0[9 /*23*/])->f_1 = { -136.0945f, -785.4554f, 31.4112f };
	(uParam0[9 /*23*/])->f_4 = 276.5309f;
	(*uParam0)[9 /*23*/] = 2;
	(uParam0[10 /*23*/])->f_1 = { -32.488f, -1354.867f, 28.1676f };
	(uParam0[10 /*23*/])->f_4 = 90.8486f;
	(*uParam0)[10 /*23*/] = 2;
	(uParam0[11 /*23*/])->f_1 = { -33.8858f, -1602.918f, 28.2902f };
	(uParam0[11 /*23*/])->f_4 = 142.2298f;
	(*uParam0)[11 /*23*/] = 1;
	(uParam0[11 /*23*/])->f_6 = { 216.8692f, -1814.255f, 24.6812f };
	(uParam0[11 /*23*/])->f_5 = 0;
	(uParam0[11 /*23*/])->f_13 = { -111.725f, -1538.781f, -29.292f };
	(uParam0[11 /*23*/])->f_16 = { 41.484f, -1667.339f, 29.292f };
	(uParam0[11 /*23*/])->f_19 = 7.8f;
	(uParam0[12 /*23*/])->f_1 = { 220.6214f, -852.1f, 29.1084f };
	(uParam0[12 /*23*/])->f_4 = 249.5924f;
	(*uParam0)[12 /*23*/] = 2;
	(uParam0[13 /*23*/])->f_1 = { 337.0184f, -1156.93f, 28.2919f };
	(uParam0[13 /*23*/])->f_4 = 270.3139f;
	(*uParam0)[13 /*23*/] = 2;
	(uParam0[14 /*23*/])->f_1 = { 953.1846f, -2113.256f, 29.5516f };
	(uParam0[14 /*23*/])->f_4 = 265.591f;
	(*uParam0)[14 /*23*/] = 2;
	(uParam0[15 /*23*/])->f_1 = { -88.9769f, -2003.448f, 17.0168f };
	(uParam0[15 /*23*/])->f_4 = 352.601f;
	(*uParam0)[15 /*23*/] = 2;
	(uParam0[16 /*23*/])->f_1 = { 211.0682f, -791.7485f, 29.9f };
	(uParam0[16 /*23*/])->f_4 = 68.5508f;
	(*uParam0)[16 /*23*/] = 2;
	(uParam0[17 /*23*/])->f_1 = { -327.4179f, -1529.127f, 26.5696f };
	(uParam0[17 /*23*/])->f_4 = 179.9431f;
	(*uParam0)[17 /*23*/] = 2;
	(uParam0[18 /*23*/])->f_1 = { -596.5739f, -889.578f, 24.4759f };
	(uParam0[18 /*23*/])->f_4 = 269.5022f;
	(uParam0[18 /*23*/])->f_6 = { -584.4996f, -872.2784f, 24.8909f };
	(uParam0[18 /*23*/])->f_9 = 83.1267f;
	(*uParam0)[18 /*23*/] = 0;
	(uParam0[19 /*23*/])->f_1 = { 408.6235f, -989.5519f, 28.2665f };
	(uParam0[19 /*23*/])->f_4 = 233.0824f;
	(*uParam0)[19 /*23*/] = 2;
	(uParam0[20 /*23*/])->f_1 = { -33.8858f, -1602.918f, 28.2902f };
	(uParam0[20 /*23*/])->f_4 = 142.2298f;
	(*uParam0)[20 /*23*/] = 1;
	(uParam0[20 /*23*/])->f_6 = { 216.8692f, -1814.255f, 24.6812f };
	(uParam0[20 /*23*/])->f_5 = 0;
	(uParam0[20 /*23*/])->f_13 = { -111.725f, -1538.781f, -29.292f };
	(uParam0[20 /*23*/])->f_16 = { 41.484f, -1667.339f, 29.292f };
	(uParam0[20 /*23*/])->f_19 = 7.8f;
	(uParam0[21 /*23*/])->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	(uParam0[21 /*23*/])->f_4 = 263.5155f;
	(uParam0[21 /*23*/])->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	(uParam0[21 /*23*/])->f_9 = 62.5486f;
	(*uParam0)[21 /*23*/] = 0;
	(uParam0[22 /*23*/])->f_1 = { -310.2984f, -686.4995f, 32.1219f };
	(uParam0[22 /*23*/])->f_4 = 269.6159f;
	(uParam0[22 /*23*/])->f_6 = { -373.468f, -672.849f, 30.4925f };
	(uParam0[22 /*23*/])->f_9 = 274.2857f;
	(*uParam0)[22 /*23*/] = 0;
	(uParam0[23 /*23*/])->f_1 = { -316.4254f, -895.1236f, 30.0701f };
	(uParam0[23 /*23*/])->f_4 = 347.1421f;
	(*uParam0)[23 /*23*/] = 2;
	(uParam0[24 /*23*/])->f_1 = { 53.578f, -1417.226f, 28.3517f };
	(uParam0[24 /*23*/])->f_4 = 224.8985f;
	(*uParam0)[24 /*23*/] = 2;
	(uParam0[25 /*23*/])->f_1 = { 401.6395f, -2054.658f, 20.575f };
	(uParam0[25 /*23*/])->f_4 = 168.9083f;
	(*uParam0)[25 /*23*/] = 2;
	(uParam0[26 /*23*/])->f_1 = { 146.2919f, -2051.071f, 17.3217f };
	(uParam0[26 /*23*/])->f_4 = 265.1393f;
	(*uParam0)[26 /*23*/] = 1;
	(uParam0[26 /*23*/])->f_6 = { 339.577f, -1779.002f, 28.1454f };
	(uParam0[26 /*23*/])->f_5 = 0;
	(uParam0[26 /*23*/])->f_13 = { 149.063f, -2005.992f, -18.327f };
	(uParam0[26 /*23*/])->f_16 = { 144.98f, -2095.9f, 18.327f };
	(uParam0[26 /*23*/])->f_19 = 8.5f;
	(uParam0[27 /*23*/])->f_1 = { 363.1678f, -1749.957f, 28.2073f };
	(uParam0[27 /*23*/])->f_4 = 229.6858f;
	(*uParam0)[27 /*23*/] = 1;
	(uParam0[27 /*23*/])->f_6 = { 150.5184f, -2010.497f, 17.7098f };
	(uParam0[27 /*23*/])->f_5 = 1;
	(uParam0[27 /*23*/])->f_13 = { 428.271f, -1674.163f, -29.211f };
	(uParam0[27 /*23*/])->f_16 = { 299.18f, -1826.923f, 29.211f };
	(uParam0[27 /*23*/])->f_19 = 9f;
	(uParam0[28 /*23*/])->f_1 = { 171.3444f, -1776.831f, 28.0622f };
	(uParam0[28 /*23*/])->f_4 = 321.1031f;
	(*uParam0)[28 /*23*/] = 1;
	(uParam0[28 /*23*/])->f_6 = { -92.782f, -1554.607f, 32.2626f };
	(uParam0[28 /*23*/])->f_5 = 1;
	(uParam0[28 /*23*/])->f_13 = { 94.446f, -1712.766f, -29.071f };
	(uParam0[28 /*23*/])->f_16 = { 248.549f, -1840.251f, 29.211f };
	(uParam0[28 /*23*/])->f_19 = 8f;
	(uParam0[29 /*23*/])->f_1 = { 421.2757f, -1277.618f, 29.2671f };
	(uParam0[29 /*23*/])->f_4 = 359.101f;
	(uParam0[29 /*23*/])->f_6 = { 455.9831f, -1267.655f, 29.0609f };
	(uParam0[29 /*23*/])->f_9 = 97.7539f;
	(*uParam0)[29 /*23*/] = 0;
	(uParam0[30 /*23*/])->f_1 = { 211.0559f, -1371.688f, 29.5776f };
	(uParam0[30 /*23*/])->f_4 = 52.932f;
	(uParam0[30 /*23*/])->f_6 = { 209.6618f, -1406.521f, 28.2921f };
	(uParam0[30 /*23*/])->f_9 = 263.4376f;
	(*uParam0)[30 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_1 = { -219.3074f, -1491.846f, 30.2593f };
	(uParam0[31 /*23*/])->f_4 = 322.6262f;
	(*uParam0)[31 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_6 = { -177.2324f, -1506.01f, 31.6696f };
	(uParam0[32 /*23*/])->f_1 = { 538.7713f, -1524.826f, 28.168f };
	(uParam0[32 /*23*/])->f_4 = 50.4239f;
	(*uParam0)[32 /*23*/] = 1;
	(uParam0[32 /*23*/])->f_6 = { 535.2374f, -1093.33f, 27.4652f };
	(uParam0[32 /*23*/])->f_5 = 0;
	(uParam0[32 /*23*/])->f_13 = { 557.229f, -1501.367f, -29.273f };
	(uParam0[32 /*23*/])->f_16 = { 518.983f, -1547.597f, 29.273f };
	(uParam0[32 /*23*/])->f_19 = 8.2f;
	(uParam0[33 /*23*/])->f_1 = { 497.2474f, -1199.327f, 28.3046f };
	(uParam0[33 /*23*/])->f_4 = 212.2787f;
	(*uParam0)[33 /*23*/] = 1;
	(uParam0[33 /*23*/])->f_6 = { 516.6573f, -926.7039f, 14.6979f };
	(uParam0[33 /*23*/])->f_5 = 0;
	(uParam0[33 /*23*/])->f_13 = { 512.849f, -1198.747f, -29.311f };
	(uParam0[33 /*23*/])->f_16 = { 483.086f, -1202.507f, 29.311f };
	(uParam0[33 /*23*/])->f_19 = 8f;
	(uParam0[34 /*23*/])->f_1 = { 576.4442f, -1705.259f, 28.0895f };
	(uParam0[34 /*23*/])->f_4 = 43.2791f;
	(*uParam0)[34 /*23*/] = 4;
	(uParam0[34 /*23*/])->f_20 = joaat("TAILGATER");
	(uParam0[34 /*23*/])->f_21 = 0;
	(uParam0[34 /*23*/])->f_22 = 0;
	(uParam0[34 /*23*/])->f_10 = { 585.9758f, -1707.779f, 28.2677f };
	(uParam0[35 /*23*/])->f_1 = { 233.0704f, -1138.882f, 28.2302f };
	(uParam0[35 /*23*/])->f_4 = 311.5479f;
	(*uParam0)[35 /*23*/] = 4;
	(uParam0[35 /*23*/])->f_20 = joaat("EMPEROR");
	(uParam0[35 /*23*/])->f_21 = 0;
	(uParam0[35 /*23*/])->f_22 = 1;
	(uParam0[36 /*23*/])->f_1 = { -100.5493f, -1724.973f, 28.3857f };
	(uParam0[36 /*23*/])->f_4 = 81.5938f;
	(*uParam0)[36 /*23*/] = 4;
	(uParam0[36 /*23*/])->f_20 = joaat("INTRUDER");
	(uParam0[36 /*23*/])->f_21 = 1;
	(uParam0[36 /*23*/])->f_22 = 2;
	(uParam0[36 /*23*/])->f_10 = { -92.7179f, -1721.093f, 28.3288f };
	(uParam0[37 /*23*/])->f_1 = { -114.5507f, -1318.912f, 28.1481f };
	(uParam0[37 /*23*/])->f_4 = 157.6585f;
	(*uParam0)[37 /*23*/] = 4;
	(uParam0[37 /*23*/])->f_20 = joaat("ASTEROPE");
	(uParam0[37 /*23*/])->f_21 = 0;
	(uParam0[37 /*23*/])->f_22 = 3;
	(uParam0[37 /*23*/])->f_10 = { -111.4177f, -1293.568f, 28.2889f };
	(uParam0[38 /*23*/])->f_1 = { 303.2563f, -1699.098f, 28.1861f };
	(uParam0[38 /*23*/])->f_4 = 213.8354f;
	(*uParam0)[38 /*23*/] = 4;
	(uParam0[38 /*23*/])->f_20 = joaat("EMPEROR2");
	(uParam0[38 /*23*/])->f_21 = 0;
	(uParam0[38 /*23*/])->f_22 = 4;
	(uParam0[38 /*23*/])->f_10 = { 284.1822f, -1679.657f, 28.3083f };
	(uParam0[39 /*23*/])->f_1 = { 784.1456f, -2046.703f, 28.1368f };
	(uParam0[39 /*23*/])->f_4 = 12.6961f;
	(*uParam0)[39 /*23*/] = 4;
	(uParam0[39 /*23*/])->f_20 = joaat("BLISTA");
	(uParam0[39 /*23*/])->f_21 = 1;
	(uParam0[39 /*23*/])->f_22 = 5;
	(uParam0[39 /*23*/])->f_10 = { 784.365f, -2070.999f, 28.3414f };
	(uParam0[40 /*23*/])->f_1 = { 29.4785f, -980.7521f, 28.4051f };
	(uParam0[40 /*23*/])->f_4 = 221.9553f;
	(*uParam0)[40 /*23*/] = 4;
	(uParam0[40 /*23*/])->f_20 = joaat("EMPEROR");
	(uParam0[40 /*23*/])->f_21 = 0;
	(uParam0[40 /*23*/])->f_22 = 6;
	(uParam0[40 /*23*/])->f_10 = { 10.3525f, -970.0844f, 28.4022f };
	(uParam0[41 /*23*/])->f_1 = { 101.5021f, -1529.546f, 28.2147f };
	(uParam0[41 /*23*/])->f_4 = 31.1362f;
	(*uParam0)[41 /*23*/] = 4;
	(uParam0[41 /*23*/])->f_20 = joaat("PREMIER");
	(uParam0[41 /*23*/])->f_21 = 1;
	(uParam0[41 /*23*/])->f_22 = 7;
	(uParam0[41 /*23*/])->f_10 = { 117.6439f, -1547.885f, 28.2914f };
	(uParam0[42 /*23*/])->f_1 = { 360.6348f, -867.98f, 28.1345f };
	(uParam0[42 /*23*/])->f_4 = 249.799f;
	(*uParam0)[42 /*23*/] = 4;
	(uParam0[42 /*23*/])->f_20 = joaat("BUFFALO");
	(uParam0[42 /*23*/])->f_21 = 0;
	(uParam0[42 /*23*/])->f_22 = 8;
	(uParam0[42 /*23*/])->f_10 = { 324.7404f, -864.9786f, 28.2923f };
	(uParam0[43 /*23*/])->f_1 = { 261.1898f, -2035.051f, 17.2895f };
	(uParam0[43 /*23*/])->f_4 = 339.6013f;
	(*uParam0)[43 /*23*/] = 4;
	(uParam0[43 /*23*/])->f_20 = joaat("PREMIER");
	(uParam0[43 /*23*/])->f_21 = 1;
	(uParam0[43 /*23*/])->f_22 = 9;
	(uParam0[43 /*23*/])->f_10 = { 279.2888f, -2017.846f, 18.4895f };
	(uParam0[44 /*23*/])->f_1 = { 418.623f, -1867.903f, 25.6724f };
	(uParam0[44 /*23*/])->f_4 = 103.9975f;
	(*uParam0)[44 /*23*/] = 4;
	(uParam0[44 /*23*/])->f_20 = joaat("INTRUDER");
	(uParam0[44 /*23*/])->f_21 = 0;
	(uParam0[44 /*23*/])->f_22 = 10;
	(uParam0[44 /*23*/])->f_10 = { 443.8106f, -1847.293f, 26.8106f };
	(uParam0[45 /*23*/])->f_1 = { 507.4709f, -1668.593f, 28.6539f };
	(uParam0[45 /*23*/])->f_4 = 78.9463f;
	(*uParam0)[45 /*23*/] = 4;
	(uParam0[45 /*23*/])->f_20 = joaat("TAILGATER");
	(uParam0[45 /*23*/])->f_21 = 1;
	(uParam0[45 /*23*/])->f_22 = 11;
	(uParam0[45 /*23*/])->f_10 = { 525.0562f, -1678.781f, 28.4452f };
	(uParam0[46 /*23*/])->f_1 = { -203.7249f, -667.237f, 32.6054f };
	(uParam0[46 /*23*/])->f_4 = 34.4328f;
	(*uParam0)[46 /*23*/] = 4;
	(uParam0[46 /*23*/])->f_20 = joaat("ASTEROPE");
	(uParam0[46 /*23*/])->f_21 = 0;
	(uParam0[46 /*23*/])->f_22 = 12;
	(uParam0[46 /*23*/])->f_10 = { -179.7505f, -678.1224f, 33.1625f };
	(uParam0[47 /*23*/])->f_1 = { -318.031f, -865.0022f, 30.482f };
	(uParam0[47 /*23*/])->f_4 = 238.9396f;
	(*uParam0)[47 /*23*/] = 4;
	(uParam0[47 /*23*/])->f_20 = joaat("EMPEROR2");
	(uParam0[47 /*23*/])->f_21 = 0;
	(uParam0[47 /*23*/])->f_22 = 13;
	(uParam0[47 /*23*/])->f_10 = { -338.2523f, -859.7131f, 30.5587f };
	(uParam0[48 /*23*/])->f_1 = { 401.2838f, -1480.87f, 28.3058f };
	(uParam0[48 /*23*/])->f_4 = 281.6565f;
	(*uParam0)[48 /*23*/] = 4;
	(uParam0[48 /*23*/])->f_20 = joaat("BLISTA");
	(uParam0[48 /*23*/])->f_21 = 2;
	(uParam0[48 /*23*/])->f_22 = 14;
	(uParam0[48 /*23*/])->f_10 = { 369.6188f, -1495.73f, 28.2385f };
	(uParam0[49 /*23*/])->f_1 = { 2912.906f, 4410.625f, 47.9319f };
	(uParam0[49 /*23*/])->f_4 = 51.9751f;
	(*uParam0)[49 /*23*/] = 4;
	(uParam0[49 /*23*/])->f_20 = joaat("EMPEROR2");
	(uParam0[49 /*23*/])->f_21 = 0;
	(uParam0[49 /*23*/])->f_22 = 15;
	(uParam0[49 /*23*/])->f_10 = { 2929.237f, 4389.601f, 49.1801f };
	(uParam0[50 /*23*/])->f_1 = { 1684.671f, 4789.85f, 40.9384f };
	(uParam0[50 /*23*/])->f_4 = 337.6293f;
	(*uParam0)[50 /*23*/] = 4;
	(uParam0[50 /*23*/])->f_20 = joaat("TAILGATER");
	(uParam0[50 /*23*/])->f_21 = 1;
	(uParam0[50 /*23*/])->f_22 = 16;
	(uParam0[50 /*23*/])->f_10 = { 1677.444f, 4772.696f, 40.9936f };
	(uParam0[51 /*23*/])->f_1 = { 217.386f, -2545.061f, 5.1932f };
	(uParam0[51 /*23*/])->f_4 = 95.5124f;
	(*uParam0)[51 /*23*/] = 1;
	(uParam0[51 /*23*/])->f_6 = { 150.731f, -2066.663f, 17.2342f };
	(uParam0[51 /*23*/])->f_5 = 0;
	(uParam0[51 /*23*/])->f_13 = { 217.8829f, -2593.548f, 4.174078f };
	(uParam0[51 /*23*/])->f_16 = { 217.1816f, -2499.779f, 12.43667f };
	(uParam0[51 /*23*/])->f_19 = 8f;
	(uParam0[52 /*23*/])->f_1 = { -692.027f, -847.6826f, 22.6477f };
	(uParam0[52 /*23*/])->f_4 = 245.055f;
	(*uParam0)[52 /*23*/] = 4;
	(uParam0[52 /*23*/])->f_20 = joaat("TAILGATER");
	(uParam0[52 /*23*/])->f_21 = 0;
	(uParam0[52 /*23*/])->f_22 = 15;
	(uParam0[52 /*23*/])->f_10 = { -723.7541f, -844.7679f, 21.9551f };
}

void func_267()
{
	bool bVar0;

	if (iLocal_3115 < 16)
	{
		UNK_0x790015DC92C918E2();
		UNK_0x5CEB4DB888A62073(true);
		func_300(&Global_110289, 3);
		switch (iLocal_3084)
		{
			case 2:
				bVar0 = "TOW_FAIL_05";
				break;
			case 0:
				bVar0 = "TOW_FAIL_10";
				break;
			case 6:
				bVar0 = "DTRSHRD_FAIL_03";
				break;
			case 1:
				bVar0 = "TOW_FAIL_08";
				break;
			case 11:
				bVar0 = "TOW_FAIL_08";
				break;
			case 13:
				bVar0 = "TOW_FAIL_16";
				break;
			case 4:
				bVar0 = "TOW_FAIL_12";
				break;
			case 5:
				bVar0 = "TOW_FAIL_01";
				break;
			case 3:
				bVar0 = "TOW_FAIL_03";
				break;
			case 8:
				bVar0 = "TOW_FAIL_04";
				break;
			case 9:
				bVar0 = "TOW_FAIL_04a";
				break;
			case 14:
				bVar0 = "TOW_FAIL_06";
				break;
			case 15:
				bVar0 = "TOW_FAIL_07";
				break;
			case 16:
				bVar0 = "TOW_FAIL_09";
				break;
			case 17:
				bVar0 = "TOW_FAIL_09a";
				break;
			case 18:
				bVar0 = "TOW_FAIL_02";
				break;
			case 21:
				bVar0 = "TOW_FAIL_11";
				break;
			case 22:
				bVar0 = "TOW_FAIL_13";
				break;
			case 23:
				bVar0 = "TOW_FAIL_14";
				break;
		}
		if (UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = "TOW_FAIL_15";
		}
		if (!UNK_0xEA6BC48857E0AC4C(bVar0))
		{
			func_270(bVar0);
		}
		func_269();
		func_271(UNK_0xBB0808A181D4745C());
		while (!func_268())
		{
			SYSTEM::WAIT(0);
		}
		func_193();
	}
}

bool func_268()
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

void func_269()
{
	Global_98779 = 1;
	if (UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1))
	{
		if (UNK_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_26())
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
			switch (func_26())
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

void func_270(char* sParam0)
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

void func_271(char* sParam0)
{
	if (Global_98744 != 12)
	{
		func_272(sParam0, 5, -1);
	}
}

int func_272(char* sParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<32> Var1;
	int iVar33;

	func_297();
	func_296();
	Global_98744 = 0;
	StringCopy(&(Global_98744.f_3), sParam0, 32);
	Global_98744.f_11 = iParam1;
	UNK_0x65C5EBCA17A891FC(1);
	UNK_0xD99B71B9E48EB0E6(0);
	UNK_0x2C84016B4A95F6BA(0);
	func_292(1);
	func_290(1);
	func_287(0);
	func_286(1);
	UNK_0x0674E58A79778E99(&(Global_98744.f_20), 9);
	UNK_0x0674E58A79778E99(&(Global_98744.f_20), 6);
	UNK_0x0674E58A79778E99(&(Global_98744.f_20), 20);
	UNK_0x0674E58A79778E99(&(Global_98744.f_20), 21);
	UNK_0x0674E58A79778E99(&(Global_98744.f_20), 5);
	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
				if (UNK_0x377BE9A1BF38C7CE(bVar0))
				{
					UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 5);
				}
			}
		}
	}
	UNK_0xA37A90C62806D848(1);
	UNK_0x790015DC92C918E2();
	func_285(0);
	func_284(1);
	Global_98744.f_2 = Global_98781;
	if (func_283())
	{
		if (func_282())
		{
			if (Global_98781 >= func_279())
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Global_89532[iParam2 /*34*/].f_15, 16))
				{
					if (Global_111638.f_9080.f_330[iParam2 /*6*/].f_1 >= 2)
					{
						Global_92920 = 1;
					}
				}
			}
		}
		else if (Global_98744.f_11 == 6)
		{
			func_274(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_111638.f_18569[iParam2 /*6*/].f_4 >= 2)
				{
					Global_92920 = 1;
				}
			}
		}
		else
		{
			iVar33 = func_273(UNK_0xBB0808A181D4745C());
			if (iVar33 > -1)
			{
				if (Global_111638.f_24981.f_4[iVar33] >= 2)
				{
					Global_92920 = 1;
				}
			}
		}
	}
	return 1;
}

int func_273(bool bParam0)
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

void func_274(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_275(uParam1, "Abigail1", func_277(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		case 1:
			func_275(uParam1, "Abigail2", func_277(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		case 2:
			func_275(uParam1, "Barry1", func_277(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		case 3:
			func_275(uParam1, "Barry2", func_277(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		case 4:
			func_275(uParam1, "Barry3", func_277(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		case 5:
			func_275(uParam1, "Barry3A", func_277(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 6:
			func_275(uParam1, "Barry3C", func_277(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 7:
			func_275(uParam1, "Barry4", func_277(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_276(iParam0), 0, 0);
			break;
		case 8:
			func_275(uParam1, "Dreyfuss1", func_277(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		case 9:
			func_275(uParam1, "Epsilon1", func_277(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_276(iParam0), 0, 0);
			break;
		case 10:
			func_275(uParam1, "Epsilon2", func_277(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		case 11:
			func_275(uParam1, "Epsilon3", func_277(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_276(iParam0), 0, 0);
			break;
		case 12:
			func_275(uParam1, "Epsilon4", func_277(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_276(iParam0), 0, 0);
			break;
		case 13:
			func_275(uParam1, "Epsilon5", func_277(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		case 14:
			func_275(uParam1, "Epsilon6", func_277(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 15:
			func_275(uParam1, "Epsilon7", func_277(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_276(iParam0), 0, 0);
			break;
		case 16:
			func_275(uParam1, "Epsilon8", func_277(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		case 17:
			func_275(uParam1, "Extreme1", func_277(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 18:
			func_275(uParam1, "Extreme2", func_277(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 19:
			func_275(uParam1, "Extreme3", func_277(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 20:
			func_275(uParam1, "Extreme4", func_277(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		case 21:
			func_275(uParam1, "Fanatic1", func_277(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_276(iParam0), 1, 0);
			break;
		case 22:
			func_275(uParam1, "Fanatic2", func_277(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_276(iParam0), 1, 0);
			break;
		case 23:
			func_275(uParam1, "Fanatic3", func_277(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_276(iParam0), 0, 1);
			break;
		case 24:
			func_275(uParam1, "Hao1", func_277(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_276(iParam0), 0, 1);
			break;
		case 25:
			func_275(uParam1, "Hunting1", func_277(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 26:
			func_275(uParam1, "Hunting2", func_277(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 27:
			func_275(uParam1, "Josh1", func_277(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		case 28:
			func_275(uParam1, "Josh2", func_277(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		case 29:
			func_275(uParam1, "Josh3", func_277(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		case 30:
			func_275(uParam1, "Josh4", func_277(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		case 31:
			func_275(uParam1, "Maude1", func_277(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 32:
			func_275(uParam1, "Minute1", func_277(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 33:
			func_275(uParam1, "Minute2", func_277(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 34:
			func_275(uParam1, "Minute3", func_277(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 35:
			func_275(uParam1, "MrsPhilips1", func_277(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_276(iParam0), 0, 0);
			break;
		case 36:
			func_275(uParam1, "MrsPhilips2", func_277(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_276(iParam0), 0, 0);
			break;
		case 37:
			func_275(uParam1, "Nigel1", func_277(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		case 38:
			func_275(uParam1, "Nigel1A", func_277(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		case 39:
			func_275(uParam1, "Nigel1B", func_277(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_276(iParam0), 1, 1);
			break;
		case 40:
			func_275(uParam1, "Nigel1C", func_277(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_276(iParam0), 1, 1);
			break;
		case 41:
			func_275(uParam1, "Nigel1D", func_277(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_276(iParam0), 1, 1);
			break;
		case 42:
			func_275(uParam1, "Nigel2", func_277(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		case 43:
			func_275(uParam1, "Nigel3", func_277(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		case 44:
			func_275(uParam1, "Omega1", func_277(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		case 45:
			func_275(uParam1, "Omega2", func_277(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		case 46:
			func_275(uParam1, "Paparazzo1", func_277(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 47:
			func_275(uParam1, "Paparazzo2", func_277(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 48:
			func_275(uParam1, "Paparazzo3", func_277(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		case 49:
			func_275(uParam1, "Paparazzo3A", func_277(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 50:
			func_275(uParam1, "Paparazzo3B", func_277(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 51:
			func_275(uParam1, "Paparazzo4", func_277(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		case 52:
			func_275(uParam1, "Rampage1", func_277(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_276(iParam0), 0, 0);
			break;
		case 54:
			func_275(uParam1, "Rampage3", func_277(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		case 55:
			func_275(uParam1, "Rampage4", func_277(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		case 56:
			func_275(uParam1, "Rampage5", func_277(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_276(iParam0), 0, 0);
			break;
		case 53:
			func_275(uParam1, "Rampage2", func_277(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		case 57:
			func_275(uParam1, "TheLastOne", func_277(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 58:
			func_275(uParam1, "Tonya1", func_277(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 59:
			func_275(uParam1, "Tonya2", func_277(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 60:
			func_275(uParam1, "Tonya3", func_277(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 61:
			func_275(uParam1, "Tonya4", func_277(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		case 62:
			func_275(uParam1, "Tonya5", func_277(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_275(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
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

int func_276(int iParam0)
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

struct<2> func_277(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_278(iParam0) };
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

struct<2> func_278(int iParam0)
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

int func_279()
{
	int iVar0;
	int iVar1;

	iVar0 = func_280(&(Global_98744.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_280(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = UNK_0x12AB0310C2281427(bParam0);
	iVar1 = func_281(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_281(int iParam0, bool bParam1)
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

bool func_282()
{
	if ((((Global_98744.f_11 == 0 || Global_98744.f_11 == 1) || Global_98744.f_11 == 2) || Global_98744.f_11 == 3) || Global_98744.f_11 == 4)
	{
		return true;
	}
	return false;
}

bool func_283()
{
	if ((((Global_98744.f_11 == 0 || Global_98744.f_11 == 1) || Global_98744.f_11 == 2) || Global_98744.f_11 == 6) || Global_98744.f_11 == 3)
	{
		return true;
	}
	if (Global_98744.f_11 == 5)
	{
		if (func_273(&(Global_98744.f_3)) > -1)
		{
			return true;
		}
	}
	return false;
}

void func_284(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_41980 = 1;
	}
	else
	{
		Global_41980 = 0;
	}
}

void func_285(int iParam0)
{
	UNK_0x8BCB70EB440DED83(iParam0);
	UNK_0xBFE31971E49FA500(iParam0);
}

void func_286(int iParam0)
{
	if (iParam0 == 1)
	{
		UNK_0x56FCE5C6DA4AA600();
		UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 3);
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 3))
	{
		UNK_0x17D339215F817B98();
		UNK_0x0674E58A79778E99(&(Global_98744.f_20), 3);
	}
}

void func_287(int iParam0)
{
	if (iParam0 == 1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 4))
		{
			func_289();
			UNK_0x0674E58A79778E99(&(Global_98744.f_20), 4);
		}
	}
	else
	{
		func_288();
		UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 4);
	}
}

void func_288()
{
	Global_22211.f_5 = 1;
}

void func_289()
{
	Global_22211.f_5 = 0;
}

void func_290(bool bParam0)
{
	if (bParam0)
	{
		func_291();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_162(0))
		{
			func_292(0);
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

void func_291()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_292(int iParam0)
{
	if (func_295())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_294())
		{
			func_293(1, 1);
		}
		else
		{
			func_293(0, 0);
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
	if (!func_23())
	{
		Global_19486.f_1 = 3;
	}
}

void func_293(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_162(0))
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

bool func_294()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_295()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_296()
{
	Global_92920 = 0;
	Global_92921 = 0;
}

void func_297()
{
	Global_98744 = 13;
	Global_98744.f_1 = -1;
	Global_98744.f_2 = 0;
	Global_98744.f_30 = 0f;
	UNK_0x0674E58A79778E99(&(Global_98744.f_20), 25);
	Global_98778 = 0;
	func_284(0);
	func_299();
	func_298();
	Global_98744.f_18 = -1;
	Global_98744.f_19 = -1;
}

void func_298()
{
	UNK_0x0674E58A79778E99(&(Global_98744.f_20), 22);
	UNK_0x0674E58A79778E99(&(Global_98744.f_20), 8);
}

void func_299()
{
	if (Global_98744.f_16 != 0)
	{
		UNK_0xE17FDF9E3068281B(&(Global_98744.f_16));
		Global_98744.f_16 = 0;
	}
	if (Global_98744.f_17 != 0)
	{
		UNK_0xE17FDF9E3068281B(&(Global_98744.f_17));
		Global_98744.f_17 = 0;
	}
}

void func_300(var uParam0, int iParam1)
{
	func_301(uParam0, iParam1);
}

void func_301(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_302()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return false;
	}
	return true;
}

