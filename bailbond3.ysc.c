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
	bool bLocal_43 = false;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = -1;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 1000;
	var uLocal_54 = 1000;
	var uLocal_55 = 0;
	struct<4> Local_56[10];
	bool bLocal_97 = false;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	vector3 vLocal_103 = { 0f, 0f, 0f };
	var uLocal_108 = 0;
	var uLocal_109 = -1;
	var uLocal_110 = 0;
	int iLocal_111 = 0;
	struct<20> Local_112 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<20> Local_132[6];
	int iLocal_253 = 0;
	struct<6> Local_254[6];
	struct<6> Local_291[8];
	struct<9> Local_340[4];
	struct<7> Local_377[1];
	struct<7> Local_385 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_392 = 0;
	struct<6> Local_393 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_399 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_405 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_411 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_417 = false;
	bool bLocal_418 = false;
	bool bLocal_419 = false;
	bool bLocal_420 = false;
	bool bLocal_421 = false;
	int iLocal_422[3] = { 0, 0, 0 };
	bool bLocal_426 = false;
	bool bLocal_427 = false;
	bool bLocal_428 = false;
	bool bLocal_429 = false;
	bool bLocal_430 = false;
	bool bLocal_431 = false;
	bool bLocal_432 = false;
	bool bLocal_433 = false;
	bool bLocal_434 = false;
	bool bLocal_435 = false;
	bool bLocal_436 = false;
	bool bLocal_437 = false;
	bool bLocal_438 = false;
	bool bLocal_439 = false;
	bool bLocal_440 = false;
	bool bLocal_441 = false;
	bool bLocal_442 = false;
	bool bLocal_443 = false;
	int iLocal_444 = 0;
	bool bLocal_445 = false;
	bool bLocal_446 = false;
	bool bLocal_447 = false;
	bool bLocal_448 = false;
	bool bLocal_449 = false;
	bool bLocal_450 = false;
	bool bLocal_451 = false;
	bool bLocal_452 = false;
	bool bLocal_453 = false;
	bool bLocal_454 = false;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	float fLocal_457 = 0f;
	float fLocal_458 = 0f;
	float fLocal_459 = 0f;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	bool bLocal_476 = false;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	var uLocal_483 = 0;
	int iLocal_484 = 0;
	char* sLocal_485 = NULL;
	bool bLocal_486 = false;
	bool bLocal_487 = false;
	char* sLocal_488[3] = { NULL, NULL, NULL };
	char[] cLocal_492[8] = 0;
	char[] cLocal_493[8] = 0;
	bool bLocal_494 = false;
	bool bLocal_495 = false;
	bool bLocal_496 = false;
	bool bLocal_497 = false;
	bool bLocal_498 = false;
	var uLocal_499 = 16;
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
	bool bLocal_664 = false;
	vector3 vLocal_665[24] = "";
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	vector3 vLocal_671[24] = "";
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	vector3 vLocal_677 = { 0f, 0f, 0f };
	vector3 vLocal_680 = { 0f, 0f, 0f };
	vector3 vLocal_683 = { 0f, 0f, 0f };
	vector3 vLocal_686 = { 0f, 0f, 0f };
	vector3 vLocal_689 = { 0f, 0f, 0f };
	vector3 vLocal_692 = { 0f, 0f, 0f };
	vector3 vLocal_695 = { 0f, 0f, 0f };
	vector3 vLocal_698 = { 0f, 0f, 0f };
	vector3 vLocal_701 = { 0f, 0f, 0f };
	vector3 vLocal_704 = { 0f, 0f, 0f };
	var uLocal_707 = 0;
	struct<8> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, -1, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;

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
	bLocal_443 = true;
	cLocal_492 = "BB3AUD";
	cLocal_493 = "BBCAUD";
	bLocal_494 = "Trevor";
	bLocal_495 = "Maude";
	bLocal_496 = "maude_criminal_3";
	bLocal_497 = "maude_chair";
	bLocal_498 = "maude_laptop";
	StringCopy(&cLocal_665, "", 24);
	StringCopy(&cLocal_671, "MAUDE_MCS_4", 24);
	vLocal_103 = { ScriptParam_0 };
	if (UNK_0x2EBF608FFE6CA406(83))
	{
		if (iLocal_98 == 0)
		{
			Global_110347 = 0;
			func_576();
		}
		else
		{
			Global_110347 = 3;
			func_550(2);
			func_576();
		}
	}
	if (!func_538(1))
	{
		Global_110347 = 0;
		func_576();
	}
	UNK_0x7798376279BB5369(1);
	func_518();
	if (func_517())
	{
		iVar0 = func_516();
		if (Global_92921 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				func_443(&uLocal_707, 509.6743f, 5532.435f, 776.0009f, 153.1431f, 0, 0, 0, 0, 0, joaat("ASTEROPE"), 0, 145, 1);
				func_442(vLocal_692, fLocal_457, 1, 0);
				iLocal_101 = 2;
				func_431(1, 0);
				break;
			case 1:
				func_443(&uLocal_707, 2704.078f, 4152.24f, 42.2514f, 175.193f, 0, 0, 0, 0, 0, joaat("ASTEROPE"), 0, 145, 1);
				func_442(vLocal_677, 254.9762f, 0, 0);
				func_431(4, 0);
				break;
			default:
				break;
		}
	}
	else if (func_430(0))
	{
		if (func_429(UNK_0x16F2683693E537C9()))
		{
			func_428(UNK_0x16F2683693E537C9(), vLocal_692, fLocal_457, 0, 0);
			UNK_0x2FB9A57162E54BAB(0f);
			UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
		}
	}
	while (true)
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			UNK_0x34FABD75496259E4(UNK_0xD803B885F5E47A62());
			UNK_0x24A24DF10A19BBA7(UNK_0xD803B885F5E47A62());
			vLocal_680 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			func_417();
			func_416();
			switch (iLocal_98)
			{
				case 0:
					func_409();
					break;
				case 1:
					func_401();
					break;
				case 2:
					func_398();
					break;
				case 3:
					func_394();
					break;
				case 6:
					func_387();
					break;
				case 7:
					func_317();
					break;
				case 4:
					func_133();
					break;
				case 5:
					func_125(1);
					break;
				case 8:
					func_123();
					break;
				case 9:
					func_72();
					break;
			}
			if (bLocal_443 == 0)
			{
				func_1(iLocal_99);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)
{
	if (iLocal_98 == iParam0)
	{
		if (func_71())
		{
			func_69(0, -1, 0);
		}
		func_36(iLocal_98);
		if (iLocal_98 == 4)
		{
			func_25(1, 0, 1);
		}
		else
		{
			func_25(1, 1, 1);
		}
		bLocal_443 = true;
		iLocal_444 = 0;
		if (iLocal_98 == 5)
		{
			func_24(500, 1);
		}
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	if (func_23(UNK_0x16F2683693E537C9()))
	{
		func_21();
		UNK_0x790015DC92C918E2();
		if (UNK_0xFEBC1E4EC9E001F0())
		{
			UNK_0xA37A90C62806D848(1);
		}
		switch (iLocal_98)
		{
			case 0:
				if (iLocal_100 == 1)
				{
					if (!func_71())
					{
						func_20(UNK_0x16F2683693E537C9(), vLocal_695, fLocal_458, 0, 1);
						if (func_23(Local_112.f_9))
						{
							func_19(UNK_0x16F2683693E537C9(), UNK_0x68F4C0EC296D3901(Local_112.f_9, true));
						}
						UNK_0x2FB9A57162E54BAB(0f);
						UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
						if (iLocal_444 == 0)
						{
							if (iLocal_99 == 1)
							{
								if (func_429(UNK_0x16F2683693E537C9()))
								{
									func_10(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 50f, 13, 5000, 0, 0);
									iLocal_444 = 1;
								}
							}
						}
					}
					bLocal_427 = true;
					iLocal_101 = 2;
					func_7();
					iLocal_100 = 2;
				}
				break;
			case 1:
				bLocal_427 = true;
				bLocal_426 = true;
				if (iLocal_100 == 1)
				{
					if (!func_71())
					{
						func_20(UNK_0x16F2683693E537C9(), vLocal_698, fLocal_459, 0, 1);
						UNK_0x2FB9A57162E54BAB(0f);
						UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
						if (iLocal_444 == 0)
						{
							if (iLocal_99 == 2)
							{
								if (func_429(UNK_0x16F2683693E537C9()))
								{
									func_10(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 50f, 13, 5000, 0, 0);
									iLocal_444 = 1;
								}
							}
						}
					}
					Local_112.f_17 = (UNK_0x1C0640BA9A7327B3() - 5000);
					func_7();
					iLocal_100 = 2;
				}
				break;
			case 2:
				bLocal_417 = true;
				if (iLocal_100 == 1)
				{
					bLocal_419 = true;
					UNK_0x327AAEE25F323797(Local_112.f_9);
					func_428(Local_112.f_9, vLocal_686, 153.53f, 0, 0);
					if (!func_71())
					{
						UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
						func_428(UNK_0x16F2683693E537C9(), vLocal_686 + Vector(0f, -2f, -1f), -27.29f, 0, 0);
						UNK_0x2FB9A57162E54BAB(0f);
						UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
						if (iLocal_444 == 0)
						{
							if (iLocal_99 == 3)
							{
								if (func_429(UNK_0x16F2683693E537C9()))
								{
									func_10(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 50f, 13, 5000, 0, 0);
									iLocal_444 = 1;
								}
							}
						}
					}
					func_21();
					func_5();
					func_7();
					iLocal_100 = 2;
				}
				break;
			case 3:
				bLocal_437 = true;
				if (iLocal_100 == 1)
				{
					func_428(Local_112.f_9, vLocal_677, 0f, 0, 0);
					if (!func_71())
					{
						func_428(UNK_0x16F2683693E537C9(), vLocal_677, 254.9762f, 0, 0);
						UNK_0x2FB9A57162E54BAB(0f);
						UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
						if (iLocal_444 == 0)
						{
							if (iLocal_99 == 4)
							{
								if (func_429(UNK_0x16F2683693E537C9()))
								{
									func_10(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 50f, 13, 5000, 0, 0);
									iLocal_444 = 1;
								}
							}
						}
					}
					func_7();
					iLocal_100 = 2;
				}
				break;
			case 4:
				if (iLocal_100 == 1)
				{
					if (UNK_0x22A8E52414415B76())
					{
						UNK_0x55BE34EDDEA0AC9E(0);
					}
				}
				break;
			case 6:
				if (iLocal_100 == 1)
				{
					UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
					UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
					func_7();
				}
				break;
			case 7:
				if (iLocal_100 == 1)
				{
					bLocal_419 = true;
					if (!func_71())
					{
						func_3(Local_112.f_9, 2.5f);
						if (iLocal_444 == 0)
						{
							if (iLocal_99 == 3)
							{
								if (func_429(UNK_0x16F2683693E537C9()))
								{
									func_10(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 50f, 13, 5000, 0, 0);
									iLocal_444 = 1;
								}
							}
						}
					}
					func_21();
					func_5();
					func_7();
					iLocal_100 = 2;
				}
				break;
		}
	}
}

int func_3(bool bParam0, float fParam1)
{
	vector3 vVar0;

	if (func_23(bParam0))
	{
		if (func_4(UNK_0x68F4C0EC296D3901(bParam0, true), &vVar0, fParam1, 0))
		{
			UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vVar0, 1, 0, 0, 1);
			func_19(UNK_0x16F2683693E537C9(), UNK_0x68F4C0EC296D3901(bParam0, true));
			return 1;
		}
	}
	return 0;
}

bool func_4(vector3 vParam0, int iParam3, float fParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;

	vVar1 = { UNK_0x8A5E176FF719A014(vParam0, UNK_0x79833B02DBD2A244(0f, 360f), 0f, fParam4, 0f) };
	if (UNK_0xE82754C349C7B581(vVar1, &uVar0, 0, 0))
	{
		vVar1.f_2 = uVar0;
	}
	*iParam3 = { vVar1 };
	return UNK_0xB885EF0389689E54(vVar1, iParam5, iParam3, 0);
}

void func_5()
{
	Global_19671 = 0;
	func_6();
}

void func_6()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_7()
{
	func_8();
	Local_112.f_17 = 0;
	Local_112.f_18 = 0;
	Local_112.f_19 = 0;
}

void func_8()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_56)
	{
		func_9(&(Local_56[iVar0 /*4*/]));
		iVar0++;
	}
}

void func_9(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_10(vector3 vParam0, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = UNK_0xF0681B7E63456337(vParam0, iParam3, iParam4, 127);
	if (UNK_0xBD054C76E6F4158B(iVar0))
	{
		iVar1 = (UNK_0x1C0640BA9A7327B3() + iParam5);
		while (!UNK_0x07441E56330B63E3(iVar0) && UNK_0x1C0640BA9A7327B3() < iVar1)
		{
			if (bParam7)
			{
				func_12(0);
			}
			if (bParam6)
			{
				func_11();
			}
			SYSTEM::WAIT(0);
		}
		if (UNK_0x1C0640BA9A7327B3() < iVar1)
		{
		}
		UNK_0x51F8DBE54C75AE47(iVar0);
	}
}

void func_11()
{
	Global_22211.f_6 = 1;
}

void func_12(int iParam0)
{
	if (func_18())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_17(0))
		{
			func_13(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_13(int iParam0)
{
	if (func_18())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_16())
		{
			func_15(1, 1);
		}
		else
		{
			func_15(0, 0);
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
	if (!func_14())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_14()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_15(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_17(0))
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

bool func_16()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_17(int iParam0)
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

bool func_18()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_19(bool bParam0, struct<2> Param1, var uParam3)
{
	vector3 vVar0;
	bool bVar3;
	float fVar4;
	float fVar5;

	vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	fVar4 = (Param1 - vVar0.x);
	fVar5 = (Param1.f_1 - vVar0.y);
	if (fVar5 != 0f)
	{
		bVar3 = UNK_0x5D8ABF6396A76564(fVar4, fVar5);
	}
	else if (fVar4 < 0f)
	{
		bVar3 = -90f;
	}
	else
	{
		bVar3 = 90f;
	}
	bVar3 = (bVar3 * -1f);
	UNK_0xD8F6A53F4799FAFE(bParam0, bVar3);
}

bool func_20(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (func_429(bParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = UNK_0xE82754C349C7B581(vParam1, &fVar1, 0, 0);
			if (bVar0)
			{
				vParam1.f_2 = fVar1;
			}
		}
		UNK_0xA47B46945FF6DE74(bParam0, vParam1, 1, 0, 0, iParam6);
		UNK_0xD8F6A53F4799FAFE(bParam0, bParam4);
		if (bParam5)
		{
			return bVar0;
		}
		return true;
	}
	return false;
}

void func_21()
{
	Global_19671 = 0;
	func_22();
}

void func_22()
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

bool func_23(bool bParam0)
{
	if (func_429(bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			return true;
		}
	}
	return false;
}

void func_24(int iParam0, bool bParam1)
{
	if (UNK_0x757EF87A33649210() || UNK_0xD0BB2359EC70FC37())
	{
		if (!UNK_0x7BCE0E6DD4A1F749())
		{
			UNK_0x82E51BCA72537B6C(iParam0);
		}
	}
	if (bParam1)
	{
		while (!UNK_0x0F1CCD77290EE12F())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_25(int iParam0, int iParam1, int iParam2)
{
	func_26(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
		UNK_0x2FB9A57162E54BAB(0f);
	}
	if (iParam1 == 1)
	{
		func_24(500, 0);
	}
}

void func_26(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;

	bVar0 = UNK_0xA30EC016B12C03E4();
	UNK_0xBC03DF6093E8E71F(bVar0, 0);
	UNK_0x98E4DC66A651C9FA(bVar0, bParam3, false);
	func_27(0, 1, 0, 0, 0, 0);
	if (iParam2 == 1)
	{
		UNK_0xBFE31971E49FA500(1);
		UNK_0x8BCB70EB440DED83(1);
	}
	UNK_0xA37A90C62806D848(1);
	if (iParam0 == 1)
	{
		UNK_0x5413873D3F67BF93(false, 0);
	}
	if (iParam1 == 1)
	{
		if ((bLocal_43 != 0 && bLocal_43 != joaat("OBJECT")) && bLocal_43 != joaat("GADGET_PARACHUTE"))
		{
			if (func_429(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x440C646F2F11A2A1(UNK_0x16F2683693E537C9(), bLocal_43, 0))
				{
					UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), bLocal_43, false);
				}
			}
		}
	}
	if (func_23(UNK_0x16F2683693E537C9()))
	{
		UNK_0x6E8BDA9057564534(UNK_0x16F2683693E537C9(), 0, 0);
	}
}

void func_27(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_35(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_14())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_34(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_35(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_34(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_32(UNK_0xD803B885F5E47A62())) && !func_29(UNK_0xD803B885F5E47A62(), 0)) && !func_28()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_32(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_28()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_29(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_30(-1, 0) == 8;
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

int func_30(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_31();
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

int func_31()
{
	return Global_1312745;
}

bool func_32(bool bParam0)
{
	if (func_29(bParam0, 0))
	{
		return true;
	}
	if (func_33())
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

bool func_33()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_34(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

void func_35(int iParam0)
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

void func_36(int iParam0)
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		switch (iParam0)
		{
			case 4:
				func_68(&cLocal_671);
				func_67();
				while (!func_60(1, 1093140480 /* Float: 10.5f */, 0) || !func_37())
				{
					func_68(&cLocal_671);
					func_67();
					SYSTEM::WAIT(0);
				}
				break;
		}
	}
}

bool func_37()
{
	if (func_59(vLocal_680, Local_385.f_1, 210f))
	{
		if (!bLocal_451)
		{
			if ((func_58(2) && func_57(&Local_393, Local_393.f_5, Local_393.f_1, Local_393.f_4, 1)) && func_57(&Local_399, Local_399.f_5, Local_399.f_1, Local_399.f_4, 1))
			{
				if (func_54(&Local_385, Local_385.f_6, Local_385.f_1, Local_385.f_4, 1, 0, 1))
				{
					func_49();
					bLocal_451 = true;
				}
			}
		}
		if (!UNK_0xC844350D5D58C99A(Local_405))
		{
			if (func_59(vLocal_680, Local_405.f_1, 150f))
			{
				if (UNK_0xBF75E4DF4C367CD9(Local_405.f_1, 10f, func_48(), 0))
				{
					Local_405 = UNK_0x4B72871A3BE7B474(Local_405.f_1, 10f, func_48(), 1, 0, 1);
					if (func_429(Local_405))
					{
						UNK_0xA47B46945FF6DE74(Local_405, func_47(), 1, 0, 0, 1);
						UNK_0xD8F6A53F4799FAFE(Local_405, func_46());
						UNK_0x1E9649458B15960F(Local_405, true);
					}
				}
			}
		}
		if (!UNK_0xC844350D5D58C99A(Local_411))
		{
			if (func_59(vLocal_680, Local_411.f_1, 150f))
			{
				if (UNK_0xBF75E4DF4C367CD9(Local_411.f_1, 10f, func_45(), 0))
				{
					Local_411 = UNK_0x4B72871A3BE7B474(Local_411.f_1, 10f, func_45(), 1, 0, 1);
				}
			}
		}
	}
	else if (!UNK_0x8E28E832BEAC3DCE(Local_385.f_1, 2.5f))
	{
		func_42(&Local_385, 1);
		UNK_0x8D17794CE3273D70(func_41());
		func_38(&Local_393, 1);
		func_38(&Local_399, 1);
		func_38(&Local_405, 0);
		func_38(&Local_411, 0);
		bLocal_451 = false;
	}
	return bLocal_451;
}

void func_38(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_40(bParam0);
	}
	else
	{
		func_39(bParam0, 0);
	}
}

void func_39(bool bParam0, bool bParam1)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (UNK_0xBDEB2DEEF1D23A18(*bParam0))
		{
			UNK_0x15AFB6CBDE990FB6(*bParam0, 1, true);
		}
		if (!bParam1)
		{
			UNK_0xEEEE2E5FA6F78DF0(bParam0);
		}
		else
		{
			UNK_0xAA2AE6161CB0D2DC(*bParam0);
		}
	}
}

void func_40(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (UNK_0xBDEB2DEEF1D23A18(*bParam0))
		{
			UNK_0x15AFB6CBDE990FB6(*bParam0, 1, true);
		}
		UNK_0xF690C84DADBB3551(bParam0);
	}
}

char* func_41()
{
	return "special_ped@maude@base";
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_44(bParam0);
	}
	else
	{
		func_43(bParam0, 1, 0, 1);
	}
}

void func_43(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(*bParam0))
		{
			UNK_0xE8832A9E16A57A1F(*bParam0, false, 1);
			if (iParam3 == 0)
			{
				UNK_0x8FB4E06C94958F84(*bParam0);
			}
			UNK_0xFADC0A217229F6B5(*bParam0, bParam1);
			if (iParam2 == 1)
			{
				UNK_0x11AD11297DC58CC7(*bParam0, false);
			}
		}
		UNK_0x6DAD7906B73F064D(bParam0);
	}
}

void func_44(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!UNK_0x437347B10A200C4B(*bParam0, 0))
		{
			UNK_0xE8832A9E16A57A1F(*bParam0, false, 1);
		}
		if (!UNK_0xAF6690C489CC6203(*bParam0))
		{
			UNK_0x73270B3C9CC833FD(*bParam0, true, 0);
		}
		UNK_0xEBA53F35D0085654(bParam0);
	}
}

int func_45()
{
	return joaat("PROP_RADIO_01");
}

float func_46()
{
	return -92.17f;
}

Vector3 func_47()
{
	return 2727.4f, 4145.56f, 43.68f;
}

int func_48()
{
	return joaat("PROP_TABLE_03B");
}

void func_49()
{
	int iVar0;
	int iVar1;

	if (func_23(Local_385))
	{
		if (func_429(Local_393))
		{
			if (func_58(2))
			{
				iVar0 = UNK_0xE9744DB7B8CA6965(func_53(), func_52(), 2);
				UNK_0xC90224D9E95E5E3A(iVar0, true);
				UNK_0xEFC3DF9D33E248D8(iVar0, false);
				UNK_0x915804B434753CBD(Local_385, iVar0, func_41(), func_51(), 1000f, -8f, 4688, 0, 1148846080, 0);
				iVar1 = 0;
				iVar1 += 16;
				iVar1 += 64;
				iVar1 += 512;
				iVar1 += 4096;
				UNK_0xE14EC663EED44AD5(Local_393, iVar0, func_50(), func_41(), 1000f, -8f, iVar1, 1148846080 /* Float: 1000f */);
				UNK_0x11AD11297DC58CC7(Local_385, true);
				UNK_0x6D80F1AEBA734886(Local_385, false);
				UNK_0x25C5402CC10F76CD(Local_385, false);
				UNK_0x6DF7BF67E86AAE86(Local_385, joaat("PLAYER"));
				UNK_0x8685456FA9090367(Local_385, 0);
				UNK_0xBB46CD6FAFB19C92(Local_385, 0);
				UNK_0xFADC0A217229F6B5(Local_385, true);
				UNK_0x4E885A246A9D983A(Local_385, 118, false);
			}
		}
	}
}

char* func_50()
{
	return "base_chair";
}

char* func_51()
{
	return "base";
}

Vector3 func_52()
{
	return 0f, 0f, -92.17f;
}

Vector3 func_53()
{
	return 2727.4f, 4145.56f, 43.68f;
}

bool func_54(bool bParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (func_56(bParam1))
		{
			*bParam0 = UNK_0x36F2404464202779(26, bParam1, vParam2, bParam5, 1, true);
			if (UNK_0xC844350D5D58C99A(*bParam0))
			{
				if (bParam7)
				{
					UNK_0x1E9649458B15960F(*bParam0, true);
				}
				if (bParam8)
				{
					if (!UNK_0xEB6A8945D1AC98A1(*bParam0))
					{
						UNK_0x11AD11297DC58CC7(*bParam0, true);
					}
				}
				if (bParam6)
				{
					func_55(bParam1, 1);
				}
				return true;
			}
		}
	}
	else
	{
		if (bParam6)
		{
			func_55(bParam1, 0);
		}
		return true;
	}
	return false;
}

void func_55(bool bParam0, bool bParam1)
{
	if (bParam0 != 0)
	{
		if (bParam1)
		{
			if (UNK_0xB87F6CF6E5628C67(bParam0))
			{
				UNK_0x71199B01895C6202(bParam0);
			}
		}
		else
		{
			UNK_0x71199B01895C6202(bParam0);
		}
	}
}

bool func_56(bool bParam0)
{
	if (bParam0 == 0)
	{
		return true;
	}
	UNK_0x523BCC9DC80CD82F(bParam0);
	if (UNK_0xB87F6CF6E5628C67(bParam0))
	{
		return true;
	}
	return false;
}

bool func_57(bool bParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	if (!UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (func_56(bParam1))
		{
			*bParam0 = UNK_0x7707E48765093646(bParam1, vParam2, true, true, false);
			if (UNK_0xC844350D5D58C99A(*bParam0))
			{
				UNK_0xD8F6A53F4799FAFE(*bParam0, bParam5);
				UNK_0x272295383B6513AB(*bParam0, 1);
				if (bParam6)
				{
					func_55(bParam1, 1);
				}
				return true;
			}
		}
	}
	else
	{
		if (bParam6)
		{
			func_55(bParam1, 0);
		}
		return true;
	}
	return false;
}

bool func_58(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			UNK_0xD7992BEF7A9D109E("BBONDS", false);
			if (UNK_0x67C1D9E5B91B2E37(false))
			{
				return true;
			}
			break;
		case 2:
			UNK_0x3F423BF5B8125A50(func_41());
			if (UNK_0xB4AE0788C1587752(func_41()))
			{
				return true;
			}
			break;
		case 1:
			UNK_0x3F423BF5B8125A50("oddjobs@bailbond_mountain");
			if (UNK_0xB4AE0788C1587752("oddjobs@bailbond_mountain"))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_59(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return SYSTEM::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
}

bool func_60(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	iVar0 = 1;
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if ((!UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()) && !UNK_0xC8676198F2355F9F(UNK_0x16F2683693E537C9())) && !UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
		{
			if (!func_65(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), fParam1, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!func_64(UNK_0x16F2683693E537C9(), -828834893))
				{
					UNK_0x75CDA8644CD3B5F5(UNK_0x16F2683693E537C9(), 0, 0);
				}
			}
			if (UNK_0xE934758D273C899A(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)))
			{
				iVar0 = 0;
			}
		}
	}
	func_63();
	if (func_62())
	{
		func_21();
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (!func_61())
		{
			return false;
		}
	}
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
	}
	return true;
}

bool func_61()
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

bool func_62()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_63()
{
	UNK_0x38C3A68D7861DCFD(0, 21, 1);
	UNK_0x38C3A68D7861DCFD(0, 37, 1);
	UNK_0x38C3A68D7861DCFD(0, 25, 1);
	UNK_0x38C3A68D7861DCFD(0, 141, 1);
	UNK_0x38C3A68D7861DCFD(0, 140, 1);
	UNK_0x38C3A68D7861DCFD(0, 24, 1);
	UNK_0x38C3A68D7861DCFD(0, 257, 1);
	UNK_0x38C3A68D7861DCFD(0, 22, 1);
	UNK_0x38C3A68D7861DCFD(0, 23, 1);
}

bool func_64(bool bParam0, int iParam1)
{
	if (func_23(bParam0))
	{
		if (UNK_0xD1960163A3042274(bParam0, iParam1) == 1 || UNK_0xD1960163A3042274(bParam0, iParam1) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_65(bool bParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_66(bParam0);
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

void func_66(bool bParam0)
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

void func_67()
{
	if (func_429(Local_112.f_9))
	{
		if (UNK_0x75EECC9B0572F772())
		{
			UNK_0xA0A8D79ACBBD1CB8(bLocal_496, Local_112.f_9, 0);
		}
	}
	if (func_429(Local_385))
	{
		if (UNK_0x75EECC9B0572F772())
		{
			UNK_0xA0A8D79ACBBD1CB8(bLocal_495, Local_385, 0);
		}
	}
}

void func_68(bool bParam0)
{
	func_27(1, 1, 0, 0, 0, 0);
	UNK_0xAE1670DD12E839C3(bParam0, 8);
}

void func_69(bool bParam0, bool bParam1, int iParam2)
{
	if (func_517() && func_71())
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
		func_70(0);
	}
}

void func_70(int iParam0)
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

bool func_71()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13);
}

void func_72()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	switch (iLocal_100)
	{
		case 0:
			UNK_0x790015DC92C918E2();
			UNK_0xA37A90C62806D848(1);
			if (func_62())
			{
				func_21();
			}
			func_119();
			Global_110347 = 3;
			if (iLocal_102 == 4)
			{
				if (func_23(Local_385))
				{
					func_118(&uLocal_499, 4);
					func_117(Local_385, 0);
					if (!UNK_0x65636D4556D82155(Local_385))
					{
						if (func_116(Local_385, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), 35f))
						{
							UNK_0x33CE5A9E32EA10B2(Local_385, 0);
							func_114(Local_385, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
						}
					}
				}
				if (UNK_0xC844350D5D58C99A(Local_399))
				{
					UNK_0x1E9649458B15960F(Local_399, false);
				}
				if (UNK_0xC844350D5D58C99A(Local_405))
				{
					UNK_0x1E9649458B15960F(Local_405, false);
				}
				UNK_0x3F423BF5B8125A50(func_113());
				if (func_111(&Local_385, &Local_393, &iLocal_480))
				{
					bLocal_442 = true;
				}
			}
			else if (iLocal_102 == 2)
			{
				bLocal_434 = false;
				StringCopy(&cLocal_665, "BBC_T12", 24);
			}
			if (func_23(Local_112.f_9))
			{
				if (UNK_0x16102BEDC7435774(Local_112.f_9))
				{
					UNK_0x0A94A109271BE75A(Local_112.f_9);
				}
				func_110(Local_112.f_9, 1);
			}
			iVar1 = 0;
			while (iVar1 <= (iLocal_471 - 1))
			{
				func_110(Local_132[iVar1 /*20*/], 1);
				iVar1++;
			}
			switch (iLocal_102)
			{
				case 1:
					break;
				case 2:
					iVar0 = "BBS_F1";
					break;
				case 3:
					iVar0 = "BBS_F3";
					break;
				case 4:
					iVar0 = "BBS_F2";
					break;
				case 0:
					break;
			}
			if (iLocal_102 != 0)
			{
				func_109(iVar0);
			}
			func_550(2);
			iLocal_100 = 1;
			break;
		case 1:
			if (func_108())
			{
				if (UNK_0xEE9925602B29903C(UNK_0x16F2683693E537C9()) > 4f || (UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) != -1 && UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) != 3))
				{
					func_106(1163.149f, 4432.493f, 59.3682f, 266.3425f);
					func_104(1178f, 4435.16f, 57.58f, 294.03f);
				}
				func_98(1);
				func_576();
			}
			else
			{
				if (!bLocal_434)
				{
					if (func_62())
					{
						func_5();
					}
					if (iLocal_102 == 4)
					{
						if (func_23(Local_385))
						{
							if (func_116(Local_385, vLocal_680, 35f))
							{
								func_97(&uLocal_499, 4, Local_385, "MAUDE", 0, 1);
								if (func_75(&uLocal_499, cLocal_493, &cLocal_665, 4, 0, 0, 0))
								{
									bLocal_434 = true;
								}
							}
						}
					}
					else if (func_75(&uLocal_499, cLocal_493, &cLocal_665, 4, 0, 0, 0))
					{
						bLocal_434 = true;
					}
				}
				if (iLocal_102 == 4)
				{
					if (!bLocal_442)
					{
						UNK_0x3F423BF5B8125A50(func_113());
						if (func_111(&Local_385, &Local_393, &iLocal_480))
						{
							bLocal_442 = true;
						}
					}
					else if (func_23(Local_385))
					{
						if (!func_64(Local_385, 1805844857))
						{
							if (!UNK_0xE9FDA1035CFEA94F(Local_385))
							{
								if (!UNK_0xB4ECF989E2C1DAC8(Local_385, func_113(), func_74(), 3))
								{
									func_73(&Local_385);
									UNK_0xF3268524E9BE6D6E(Local_385, UNK_0x16F2683693E537C9(), 50f, -1, 0, 0);
									UNK_0xFADC0A217229F6B5(Local_385, true);
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_73(bool bParam0)
{
	if (func_23(*bParam0))
	{
		UNK_0xBAFED2F6486F771A(*bParam0, 2, false);
		UNK_0xBAFED2F6486F771A(*bParam0, 64, false);
		UNK_0xBAFED2F6486F771A(*bParam0, 128, false);
		UNK_0xBAFED2F6486F771A(*bParam0, 8, false);
		UNK_0xBAFED2F6486F771A(*bParam0, 1, false);
		UNK_0xBAFED2F6486F771A(*bParam0, 32, false);
		UNK_0xAFF39FB306F8E232(*bParam0, 5, false);
		UNK_0xAFF39FB306F8E232(*bParam0, 17, true);
		UNK_0x4E885A246A9D983A(*bParam0, 118, true);
	}
}

char* func_74()
{
	return "female_Flee_Table_Left_Maude";
}

bool func_75(var uParam0, char* sParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam4 == 0)
	{
		if (UNK_0xD17F06053799A7CA())
		{
			if (UNK_0x0A4C9A3D51EAE31F(203) != 0)
			{
				return false;
			}
		}
	}
	if (func_76(uParam0, sParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
	{
		return true;
	}
	return false;
}

bool func_76(var uParam0, char* sParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_96(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_77(bParam2, iParam3, 0);
}

int func_77(char* sParam0, int iParam1, bool bParam2)
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
					func_22();
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
		if (func_95(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_94();
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
				func_86();
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
				if (func_85())
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
			if (func_14())
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
			func_84();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_83();
		func_78();
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
		func_22();
	}
	return 0;
}

void func_78()
{
	if (!func_79())
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

bool func_79()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_82())
	{
		return false;
	}
	if (func_80(UNK_0xD803B885F5E47A62()))
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

bool func_80(int iParam0)
{
	return func_81(iParam0, 20);
}

bool func_81(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_82()
{
	return -1;
}

void func_83()
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

void func_84()
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

bool func_85()
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

void func_86()
{
	if (func_93(14))
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
		Global_19486 = func_87();
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

int func_87()
{
	func_88();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_88()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_91(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_90(UNK_0x16F2683693E537C9());
			if (func_89(iVar0) && (!func_93(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_89(Global_111638.f_2358.f_539.f_4321))
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

bool func_89(int iParam0)
{
	return iParam0 < 3;
}

int func_90(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_91(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_91(int iParam0)
{
	if (func_89(iParam0))
	{
		return func_92(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_92(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_93(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_94()
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

bool func_95(bool bParam0, int iParam1)
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

void func_96(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_97(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_98(bool bParam0)
{
	int iVar0;

	if (iLocal_469 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_469 - 1))
		{
			func_38(&(Local_291[iVar0 /*6*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_467 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_467 - 1))
		{
			func_38(&(Local_340[iVar0 /*9*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_470 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_470 - 1))
		{
			func_103(&(Local_377[iVar0 /*7*/]));
			iVar0++;
		}
	}
	func_38(&Local_393, bParam0);
	func_38(&Local_399, bParam0);
	func_38(&Local_405, 0);
	func_38(&Local_411, 0);
	if (func_23(Local_112.f_9))
	{
		if (UNK_0x16102BEDC7435774(Local_112.f_9))
		{
			if (UNK_0xBFDE4EE64C4BF2D6(Local_112.f_9, UNK_0x5D08BBCCCC2F43A4(UNK_0xD803B885F5E47A62())))
			{
				UNK_0x0A94A109271BE75A(Local_112.f_9);
			}
		}
		UNK_0xE8832A9E16A57A1F(Local_112.f_9, false, 1);
		UNK_0x11AD11297DC58CC7(Local_112.f_9, false);
		if (Global_110347 == 0)
		{
			UNK_0xFADC0A217229F6B5(Local_112.f_9, false);
		}
		else
		{
			UNK_0xFADC0A217229F6B5(Local_112.f_9, true);
		}
	}
	func_42(&(Local_112.f_9), bParam0);
	if (func_23(Local_385))
	{
		UNK_0x11AD11297DC58CC7(Local_385, false);
		UNK_0xFADC0A217229F6B5(Local_385, true);
	}
	func_42(&Local_385, bParam0);
	if (iLocal_471 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_471 - 1))
		{
			if (iLocal_111 == 4)
			{
				if (func_23(Local_132[iVar0 /*20*/]))
				{
					UNK_0x6DF7BF67E86AAE86(Local_132[iVar0 /*20*/], -2065892691);
					UNK_0x11AD11297DC58CC7(Local_132[iVar0 /*20*/], false);
					if (Global_110347 == 0)
					{
						UNK_0xFADC0A217229F6B5(Local_132[iVar0 /*20*/], false);
					}
					else
					{
						UNK_0xFADC0A217229F6B5(Local_132[iVar0 /*20*/], true);
					}
				}
			}
			func_42(&(Local_132[iVar0 /*20*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_468 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_468 - 1))
		{
			func_99(&(Local_254[iVar0 /*6*/]), bParam0);
			iVar0++;
		}
	}
}

void func_99(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_101(bParam0);
	}
	else
	{
		func_100(bParam0);
	}
}

void func_100(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		UNK_0x437347B10A200C4B(*bParam0, 0);
		if (UNK_0xAF6690C489CC6203(*bParam0) && UNK_0x9C77D2D0559097F0(*bParam0, 1))
		{
			UNK_0x046C362CF15F1935(bParam0);
		}
	}
}

void func_101(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!UNK_0xAF6690C489CC6203(*bParam0))
		{
			UNK_0x73270B3C9CC833FD(*bParam0, true, 0);
		}
		if (func_102(*bParam0))
		{
			if (UNK_0xAF6690C489CC6203(*bParam0) && UNK_0x9C77D2D0559097F0(*bParam0, 1))
			{
				if (func_429(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *bParam0, 0))
					{
						UNK_0x046C362CF15F1935(bParam0);
						return;
					}
				}
				UNK_0xA954465BA6FDEFE2(bParam0);
			}
		}
		else
		{
			if (func_429(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *bParam0, 0))
				{
					UNK_0x046C362CF15F1935(bParam0);
					return;
				}
			}
			UNK_0xA954465BA6FDEFE2(bParam0);
		}
	}
}

bool func_102(bool bParam0)
{
	if (func_429(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (!UNK_0x4E861BC5B1EDA7BD(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_103(var uParam0)
{
	if (UNK_0x762119754C50557A(*uParam0))
	{
		UNK_0x40B7230FD4C59AA2(*uParam0);
	}
}

void func_104(vector3 vParam0, float fParam3)
{
	func_105(&(Global_105187.f_2890), vParam0, fParam3);
}

void func_105(var uParam0, vector3 vParam1, float fParam4)
{
	*uParam0 = { vParam1 };
	uParam0->f_6 = fParam4;
}

void func_106(vector3 vParam0, float fParam3)
{
	if (func_107(Global_76862, 0f, 0f, 0f, 0))
	{
		Global_76862 = { vParam0 };
		Global_76865 = fParam3;
	}
}

bool func_107(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_108()
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

void func_109(char* sParam0)
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

void func_110(bool bParam0, bool bParam1)
{
	if (func_23(bParam0))
	{
		UNK_0xAFF39FB306F8E232(bParam0, 5, false);
		UNK_0xAFF39FB306F8E232(bParam0, 17, true);
		UNK_0xBAFED2F6486F771A(bParam0, 512, false);
		if (!func_64(bParam0, 1805844857))
		{
			UNK_0xA3BF0AA5A2608191(bParam0);
			UNK_0x8FB4E06C94958F84(bParam0);
			UNK_0x0C8C0C840C2D1AD2(bParam0, UNK_0x16F2683693E537C9(), 3000, 0, 2);
			UNK_0xF3268524E9BE6D6E(bParam0, UNK_0x16F2683693E537C9(), 10000f, -1, 0, 0);
		}
		if (bParam1)
		{
			UNK_0x11AD11297DC58CC7(bParam0, true);
		}
		UNK_0xFADC0A217229F6B5(bParam0, true);
	}
}

bool func_111(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (func_23(*bParam0))
	{
		if (UNK_0xB4ECF989E2C1DAC8(*bParam0, func_41(), func_51(), 3))
		{
			if (!UNK_0x869EFD0BC0868856(*bParam0) || UNK_0xA48EBBEA418ADC94(*bParam0))
			{
				UNK_0x3F423BF5B8125A50(func_113());
				if (UNK_0xB4AE0788C1587752(func_113()))
				{
					*iParam2 = UNK_0xE9744DB7B8CA6965(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					UNK_0xC90224D9E95E5E3A(*iParam2, false);
					UNK_0xEFC3DF9D33E248D8(*iParam2, false);
					if (func_64(*bParam0, 1785177548))
					{
						UNK_0x1BF8B16C32704027(*bParam0, -1000f, 1);
					}
					UNK_0x915804B434753CBD(*bParam0, *iParam2, func_113(), func_74(), 1000f, -4f, 4626, 0, 1148846080, 0);
					UNK_0xF895E10BF4C72645(*bParam0, 0, 0);
					if (func_429(*bParam1))
					{
						if (UNK_0xB4ECF989E2C1DAC8(*bParam1, func_41(), func_50(), 3))
						{
							UNK_0x1BF8B16C32704027(*bParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						UNK_0xE14EC663EED44AD5(*bParam1, *iParam2, func_112(), func_113(), 16f, -4f, iVar0, 1148846080 /* Float: 1000f */);
					}
					return true;
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
	return false;
}

char* func_112()
{
	return "Female_Flee_Table_Left_Maude_Chair";
}

char* func_113()
{
	return "special_ped@maude@exit_flee";
}

void func_114(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	UNK_0xEB0A515D699A7E90(bParam0, bParam1, bParam2, func_115(iParam3), 0);
}

int func_115(int iParam0)
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

bool func_116(bool bParam0, vector3 vParam1, float fParam4)
{
	return SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bParam0, true), vParam1) <= (fParam4 * fParam4);
}

void func_117(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (func_23(bParam0))
	{
		bVar1 = 2;
		if (bParam1)
		{
			bVar1 = 3;
		}
		iVar2 = UNK_0x09AC81E49EA267F7(false, bVar1);
		if (iVar2 == 0)
		{
			bVar0 = "SCREAM_PANIC";
		}
		else if (iVar2 == 1)
		{
			bVar0 = "SCREAM_TERROR";
		}
		else
		{
			bVar0 = "SUPER_HIGH_FALL";
		}
		if (UNK_0xCED082ADD3739B9F(bParam0))
		{
			func_114(bParam0, bVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			func_114(bParam0, bVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

void func_118(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_119()
{
	func_122(iLocal_471);
	func_121(&(Local_112.f_8));
	func_120(&Local_112);
	func_121(&iLocal_455);
}

void func_120(bool bParam0)
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

void func_121(bool bParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		UNK_0x661342B9651D16E2(*bParam0, false);
		UNK_0x142CC44DB769B57E(bParam0);
	}
}

void func_122(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		func_120(&(Local_132[iVar0 /*20*/].f_6));
		iVar0++;
	}
}

void func_123()
{
	switch (iLocal_100)
	{
		case 0:
			UNK_0x790015DC92C918E2();
			UNK_0xA37A90C62806D848(1);
			if (func_62())
			{
				func_21();
			}
			func_119();
			func_42(&Local_385, 1);
			func_110(Local_132[0 /*20*/], 1);
			iLocal_475 = UNK_0x1C0640BA9A7327B3();
			iLocal_100 = 1;
			break;
		case 1:
			if (func_124(iLocal_475, 500))
			{
				if (!bLocal_435)
				{
					if (func_62())
					{
						func_21();
						func_5();
					}
					if (func_75(&uLocal_499, cLocal_493, "BBC_PK1", 4, 0, 0, 0))
					{
						bLocal_435 = true;
					}
				}
				if (bLocal_435)
				{
					func_125(2);
				}
				if (func_124(iLocal_475, 1500))
				{
					func_125(2);
				}
			}
			break;
	}
}

bool func_124(int iParam0, int iParam1)
{
	return (UNK_0x1C0640BA9A7327B3() - iParam0) > iParam1;
}

void func_125(int iParam0)
{
	func_24(500, 1);
	func_126(func_132(vLocal_103.f_4), 0, 0);
	if (iParam0 == 2)
	{
		Global_110347 = 1;
	}
	else
	{
		Global_110347 = 2;
	}
	func_576();
}

void func_126(int iParam0, int iParam1, int iParam2)
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
		func_131((891 + iParam0), 1, -1, 1);
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
		Global_111638.f_10189[iParam0 /*12*/].f_10 = iParam1;
		Global_111638.f_10189[iParam0 /*12*/].f_11 = iParam2;
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
		func_127();
	}
}

void func_127()
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
		func_130(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_129() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_128();
				}
			}
		}
	}
}

int func_128()
{
	if (func_430(0))
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

int func_129()
{
	return Global_30768;
}

int func_130(int iParam0, bool bParam1)
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

int func_131(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_31();
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

int func_132(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 149;
			break;
		case 1:
			iVar0 = 150;
			break;
		case 2:
			iVar0 = 152;
			break;
		case 3:
			iVar0 = 151;
			break;
	}
	return iVar0;
}

void func_133()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;

	switch (iLocal_100)
	{
		case 0:
			func_68(&cLocal_671);
			func_67();
			if (func_37())
			{
				if (func_60(1, 10.5f, 1))
				{
					UNK_0x29E8331978B73E7F(UNK_0x16F2683693E537C9(), bLocal_494, 0, false, 0);
					if (func_429(Local_385))
					{
						UNK_0x29E8331978B73E7F(Local_385, bLocal_495, 0, false, 0);
					}
					if (func_429(Local_112.f_9))
					{
						UNK_0x29E8331978B73E7F(Local_112.f_9, bLocal_496, 0, false, 0);
					}
					if (func_429(Local_393))
					{
						UNK_0x29E8331978B73E7F(Local_393, bLocal_497, 0, false, 0);
					}
					if (func_429(Local_399))
					{
						UNK_0x29E8331978B73E7F(Local_399, bLocal_498, 0, false, 0);
					}
					UNK_0x4C902758BEA97C68(0);
					SYSTEM::WAIT(0);
					func_24(800, 0);
					func_199(2727.58f, 4144.19f, 43.95f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					func_198(&vVar0, &vVar3, &uVar9);
					vVar6 = { func_197() };
					if (func_194(vVar6, 0))
					{
						func_187(vVar0, vVar3, uVar9, 2721.02f, 4140.34f, 43.66f, 257.67f, 1, 1, 1, 0, 0);
						func_135(2721.02f, 4140.34f, 43.66f, 257.67f, 0, 145);
					}
					else
					{
						func_187(vVar0, vVar3, uVar9, 2710.665f, 4149.075f, 42.7026f, 180.9488f, 1, 1, 1, 0, 0);
						func_135(2710.665f, 4149.075f, 42.7026f, 180.9488f, 0, 145);
					}
					if (func_23(Local_112.f_9))
					{
						if (UNK_0x16102BEDC7435774(Local_112.f_9))
						{
							UNK_0x0A94A109271BE75A(Local_112.f_9);
						}
						UNK_0xA3BF0AA5A2608191(Local_112.f_9);
						UNK_0xA47B46945FF6DE74(Local_112.f_9, 2724.02f, 4145.08f, 43.29f, 1, 0, 0, 1);
						UNK_0xD8F6A53F4799FAFE(Local_112.f_9, -84.2f);
						UNK_0xA3BF0AA5A2608191(Local_112.f_9);
					}
					iLocal_100 = 1;
				}
			}
			break;
		case 1:
			if (func_429(Local_393))
			{
				if (func_23(Local_385))
				{
					if (UNK_0x3148AE92ED70DC30(bLocal_495, 0) && UNK_0x3148AE92ED70DC30(bLocal_497, 0))
					{
						func_49();
					}
				}
			}
			if (UNK_0x3148AE92ED70DC30(bLocal_494, 0))
			{
				UNK_0xBD453909DC26A85D(UNK_0x16F2683693E537C9(), joaat("MOTIONSTATE_WALK"), false, 1, 0);
				UNK_0x5A9FF5F994E904B8(UNK_0xD803B885F5E47A62(), 1f, 2000, false, 1, 0);
			}
			if (UNK_0xEABED1927EFB48CA(0))
			{
				UNK_0x2FB9A57162E54BAB(0f);
				UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
			}
			if (!UNK_0x22A8E52414415B76())
			{
				iLocal_100 = 2;
			}
			break;
		case 2:
			if (UNK_0x22A8E52414415B76())
			{
				UNK_0x55BE34EDDEA0AC9E(0);
			}
			else
			{
				if (UNK_0x62A1F4500E8F07E0())
				{
					UNK_0x5C8D148FC238F38A();
				}
				if (bLocal_443)
				{
					func_26(1, 1, 1, 1);
				}
				if (func_23(Local_112.f_9))
				{
					if (UNK_0x16102BEDC7435774(Local_112.f_9))
					{
						UNK_0x0A94A109271BE75A(Local_112.f_9);
					}
				}
				func_42(&(Local_112.f_9), 1);
				if (func_23(Local_385))
				{
					UNK_0x0C8C0C840C2D1AD2(Local_385, UNK_0x16F2683693E537C9(), -1, 0, 2);
					UNK_0xFADC0A217229F6B5(Local_385, true);
				}
				func_43(&Local_385, 1, 0, 1);
				func_134(5);
			}
			break;
	}
}

void func_134(int iParam0)
{
	iLocal_98 = iParam0;
	iLocal_100 = 0;
}

void func_135(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	vector3 vVar0;
	float fVar3;

	if (UNK_0xC844350D5D58C99A(Global_102203.f_4))
	{
		if (UNK_0xDF1306B443CD3D15(Global_102203.f_4, 0))
		{
			if (func_186(24) != Global_102203.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_183(UNK_0x68F4C0EC296D3901(Global_102203.f_4, true), iParam5, &vVar0, &fVar3))
					{
						vParam0 = { vVar0 };
						fParam3 = fVar3;
					}
				}
				func_136(Global_102203.f_4, vParam0, fParam3, 24, 0);
			}
		}
	}
}

void func_136(bool bParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6)
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
		func_182(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_177(bParam0, &Var0);
		if (func_107(vParam1, 0f, 0f, 0f, 0))
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
		func_170(iParam5, &Var0, vParam1, iParam4, func_176(bParam0));
		func_137(iParam5, bParam0, 0);
	}
}

void func_137(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_167(&(Global_75441.f_555[0 /*21*/]), iParam0))
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
				Global_111638.f_32744.f_4801 = func_156();
			}
			if (bParam1 != Global_75441.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					bVar0 = func_186(iParam0);
					if ((UNK_0xC844350D5D58C99A(bVar0) && UNK_0xDF1306B443CD3D15(bVar0, 0)) && bParam1 != bVar0)
					{
						func_138(bVar0, 145);
					}
				}
				Global_76347 = bParam1;
				Global_76348 = iParam0;
				Global_76349 = iParam2;
			}
		}
	}
}

void func_138(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_139(bParam0))
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
	func_177(bParam0, &(Global_111638.f_32744.f_5510));
}

bool func_139(bool bParam0)
{
	if ((((((((((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || func_154(bParam0, 0, 0)) || func_154(bParam0, 1, 0)) || func_154(bParam0, 2, 0)) || func_176(bParam0) != 145) || func_153(bParam0)) || func_152(bParam0)) || func_151(bParam0)) || func_150(bParam0)) || !func_140(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		if (func_152(bParam0))
		{
		}
		if (func_152(bParam0))
		{
		}
		if (func_154(bParam0, 0, 0))
		{
		}
		if (func_154(bParam0, 1, 0))
		{
		}
		if (func_154(bParam0, 2, 0))
		{
		}
		if (func_176(bParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_140(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (!func_141(bParam0, 0))
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

bool func_141(bool bParam0, bool bParam1)
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
		if (!func_149())
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
		if ((((!func_148() && !func_147()) && !func_146()) && !func_145()) && !func_149())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_146())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_144(bParam0))
		{
			return false;
		}
	}
	if (!func_142(bParam0))
	{
		return false;
	}
	return true;
}

bool func_142(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_143())
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

bool func_143()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_144(bool bParam0)
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

bool func_145()
{
	return false;
}

bool func_146()
{
	return true;
}

bool func_147()
{
	return true;
}

bool func_148()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_149()
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

bool func_150(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	bVar1 = UNK_0x7888A5D2621AAF2D(bParam0);
	if (bVar0 == joaat("SPEEDO") && UNK_0x7F8A39872A07D2CE(bVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_141(bVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_151(bool bParam0)
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

bool func_152(bool bParam0)
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

bool func_153(bool bParam0)
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

bool func_154(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_155(iParam1, iVar0, &uVar1, &iVar9))
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

bool func_155(int iParam0, int iParam1, char* sParam2, int iParam3)
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

var func_156()
{
	var uVar0;

	func_166(&uVar0, UNK_0x4460E481B9E33ADA());
	func_165(&uVar0, UNK_0x8D199E381D262EEF());
	func_164(&uVar0, UNK_0xD8A54335F18763BA());
	func_159(&uVar0, UNK_0x972A296334C9D57B());
	func_158(&uVar0, UNK_0x118229AD063C3C1D());
	func_157(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_157(var uParam0, int iParam1)
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

void func_158(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_159(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_163(*uParam0);
	iVar1 = func_161(*uParam0);
	if (iParam1 < 1 || iParam1 > func_160(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_160(int iParam0, int iParam1)
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

int func_161(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_162(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_162(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_163(int iParam0)
{
	return iParam0 & 15;
}

void func_164(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_165(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_166(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_167(var uParam0, int iParam1)
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
			uParam0->f_4 = func_168(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_168(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_168(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_168(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_168(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_168(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_168(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_168(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_168(2, 1);
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
			if (func_149())
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
			if (func_149())
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
		if (!func_107(Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_107(Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_107(Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_168(int iParam0, int iParam1)
{
	struct<82> Var0;

	if (func_89(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_169(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_169(int iParam0, var uParam1, int iParam2)
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

void func_170(int iParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (func_167(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 10))
		{
			func_175(iParam0);
			func_174(uParam1, &(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]));
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
			func_171(iParam0, 1);
		}
	}
}

void func_171(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_173(iParam0, 0))
		{
			func_172(iParam0, 1, 0);
			func_172(iParam0, 2, 0);
			func_172(iParam0, 3, 0);
			func_172(iParam0, 4, 0);
			func_172(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_172(iParam0, 0, 0);
	}
}

void func_172(int iParam0, bool bParam1, bool bParam2)
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

bool func_173(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], bParam1);
}

void func_174(var uParam0, var uParam1)
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

void func_175(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_167(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			UNK_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
			UNK_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
			Global_75441.f_139[iParam0] = 0;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 13))
		{
			func_171(iParam0, 0);
		}
	}
}

int func_176(bool bParam0)
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

void func_177(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_181(uParam1);
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
		if (uParam1->f_65 == -1 && !func_180(uParam1->f_66))
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
		func_179(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_178(iVar0 + 1));
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

int func_178(int iParam0)
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

int func_179(bool bParam0, var uParam1, var uParam2)
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

bool func_180(int iParam0)
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

void func_181(var uParam0)
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

void func_182(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_175(iParam0);
	func_171(iParam0, 0);
}

bool func_183(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;

	iVar0 = func_184(vParam0, uParam3, 1);
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

int func_184(vector3 vParam0, int iParam3, int iParam4)
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
				if (func_185(iVar0) || iParam4 == 0)
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

bool func_185(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iParam0], false);
}

int func_186(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75441.f_139[iParam0];
}

void func_187(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, int iParam10, int iParam11, var uParam12, bool bParam13, float fParam14, var uParam15)
{
	func_188(vParam0, vParam3, fParam6, vParam7, iParam10, 0f, 0f, 0f, iParam11, uParam12, bParam13, fParam14, uParam15);
}

void func_188(vector3 vParam0, vector3 vParam3, bool bParam6, vector3 vParam7, bool bParam10, vector3 vParam11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
				func_193(bVar0);
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
					if (func_190(bVar0, vParam0, vParam3, bParam6))
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
				if (func_154(bVar0, func_87(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_189(vParam11))
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

bool func_189(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_190(bool bParam0, vector3 vParam1, vector3 vParam4, bool bParam7)
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
		vVar0 = { func_192(vParam1 - vParam4) };
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
		if (((((((((((((((func_191(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar9) || func_191(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar9, vVar15)) || func_191(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar12, vVar15)) || func_191(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar12)) || func_191(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar9)) || func_191(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar9, vVar15)) || func_191(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar12, vVar15)) || func_191(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar12)) || func_191(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar9)) || func_191(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar9, vVar15)) || func_191(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar12, vVar15)) || func_191(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar12)) || func_191(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar9)) || func_191(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar9, vVar15)) || func_191(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar12, vVar15)) || func_191(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar12))
		{
			return true;
		}
	}
	return false;
}

int func_191(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
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

Vector3 func_192(vector3 vParam0)
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

void func_193(bool bParam0)
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

int func_194(vector3 vParam0, int iParam3)
{
	return func_195(Global_102203.f_2890.f_12.f_66, vParam0, iParam3);
}

int func_195(bool bParam0, vector3 vParam1, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	if (bParam0 == 0)
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		vParam1 = { func_196() };
	}
	UNK_0xA6B02C1DB14DDA13(bParam0, &vVar0, &vVar3);
	if ((vVar3.x - vVar0.x) > vParam1.x)
	{
		return 0;
	}
	else if ((vVar3.y - vVar0.y) > vParam1.y)
	{
		return 0;
	}
	else if ((vVar3.z - vVar0.z) > vParam1.z)
	{
		return 0;
	}
	return 1;
}

Vector3 func_196()
{
	return 2.55f, 5.665f, 2.55f;
}

Vector3 func_197()
{
	return 3.01f, 11.01f, 6.01f;
}

int func_198(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = { 2728.995f, 4143.165f, 41.02986f };
	*uParam1 = { 2719.126f, 4144.691f, 47.88543f };
	*uParam2 = 13f;
	return 1;
}

void func_199(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	bool bVar0;

	bVar0 = UNK_0xA30EC016B12C03E4();
	if (UNK_0xE1DBBD6CE209517C(bVar0))
	{
		func_316(0);
		if (bParam9)
		{
			UNK_0x26E2E2345FB3D358(UNK_0xA30EC016B12C03E4(), 1);
		}
		if (bParam8)
		{
			switch (func_87())
			{
				case 0:
					if (func_315(UNK_0x16F2683693E537C9(), 8, 15))
					{
						func_201(UNK_0x16F2683693E537C9(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_315(UNK_0x16F2683693E537C9(), 9, 6))
					{
						func_201(UNK_0x16F2683693E537C9(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_315(UNK_0x16F2683693E537C9(), 8, 1) || func_315(UNK_0x16F2683693E537C9(), 8, 10))
					{
						func_201(UNK_0x16F2683693E537C9(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_315(UNK_0x16F2683693E537C9(), 8, 4))
					{
						func_201(UNK_0x16F2683693E537C9(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
			}
		}
		if (iParam6 == 1)
		{
			UNK_0x745CE398A4B0A3C6(func_200(UNK_0xA30EC016B12C03E4()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			UNK_0x75CFD6AD66ADFDD1(vParam0, 30f, 0);
		}
		if (bParam10)
		{
			UNK_0x7800CEC090C01D4D(vParam0, 30f);
		}
		UNK_0x679C321F8CAA2CFA(vParam0, 30f, 0);
		UNK_0x67F91979413C5D76(bVar0, 0, 0);
		UNK_0x56EA5D248F36A081(bVar0, 0);
		UNK_0xBC03DF6093E8E71F(bVar0, 1);
		if (bParam12)
		{
			UNK_0xBFE31971E49FA500(0);
			UNK_0x8BCB70EB440DED83(0);
		}
		UNK_0x790015DC92C918E2();
		if (iParam11 == 1)
		{
			UNK_0xA37A90C62806D848(1);
		}
		if (iParam3 == 1)
		{
			UNK_0x5413873D3F67BF93(true, 0);
		}
		if (iParam4 == 1)
		{
			bLocal_43 = false;
			if (func_429(UNK_0x16F2683693E537C9()))
			{
				bLocal_43 = UNK_0x78CE7F4A02231950(UNK_0x16F2683693E537C9());
				UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam5 == 1)
		{
			func_24(500, 0);
		}
	}
}

Vector3 func_200(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

int func_201(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	var uVar11;
	var uVar28;
	var uVar38;
	struct<14> Var55;
	var uVar69;

	if (UNK_0xEB6A8945D1AC98A1(bParam0) || bParam2 == -99)
	{
		return 0;
	}
	Global_76432++;
	bVar5 = -99;
	bVar6 = -99;
	bVar7 = -99;
	bVar8 = -99;
	bVar9 = -99;
	iVar10 = UNK_0x134B62B726CEC8E6(bParam0);
	if (iParam5 == 0)
	{
		Global_76434[1 /*14*/] = { func_251(iVar10, iParam1, bParam2, -1) };
		if (!func_250(iParam3))
		{
			Global_76432 = (Global_76432 - 1);
			return 0;
		}
		func_243(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("PLAYER_ONE"))
			{
				bVar5 = func_241(bParam0, 8);
				if (bVar5 != 9)
				{
					bVar5 = -99;
				}
			}
			bVar6 = func_241(bParam0, 9);
			if (iVar10 == joaat("PLAYER_ZERO"))
			{
				if (bVar6 >= 9 && bVar6 <= 14)
				{
				}
				else
				{
					bVar6 = -99;
				}
			}
			else if (iVar10 == joaat("PLAYER_ONE"))
			{
				if (bVar6 >= 5 && bVar6 <= 10)
				{
				}
				else
				{
					bVar6 = -99;
				}
			}
			else if (iVar10 == joaat("PLAYER_TWO"))
			{
				if ((bVar6 >= 9 && bVar6 <= 14) || (bVar6 >= 15 && bVar6 <= 16))
				{
				}
				else
				{
					bVar6 = -99;
				}
			}
			bVar7 = func_240(bParam0, 1);
			if (!func_239(iVar10, 14, bVar7, -1))
			{
				bVar7 = -99;
			}
			bVar8 = func_240(bParam0, 0);
			if (!func_238(iVar10, 14, bVar8, -1) && !func_237(iVar10, 14, bVar8, -1))
			{
				bVar8 = -99;
			}
			if (iVar10 == joaat("PLAYER_ONE"))
			{
				bVar9 = func_240(bParam0, 2);
			}
		}
		UNK_0xFFE16595F5CF81E9(bParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_76477 };
		}
		else
		{
			uVar11 = { func_233(iVar10, bParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_76434[1 /*14*/] = { func_251(iVar10, iVar0, uVar11[iVar0], -1) };
				if (UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, false))
				{
					if (iVar0 == 13)
					{
						uVar28 = 9;
						if (iParam5 == 1)
						{
							uVar28 = { Global_76494 };
						}
						else
						{
							uVar28 = { func_230(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_76434[1 /*14*/] = { func_251(iVar10, 14, uVar28[iVar1], -1) };
							func_221(bParam0, Global_76434[1 /*14*/].f_12, Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4);
							func_243(14);
							if (Global_76432 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									bVar3 = func_213(bParam0, iVar10, 14, uVar28[iVar1], iVar2, 0);
									if (bVar3 != -99)
									{
										func_201(bParam0, iVar2, bVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("PLAYER_ONE") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_212(iVar10, 2, 20, &bVar4);
						}
						if (iParam4 == -1)
						{
							UNK_0x64F9F278AB9DCA2C(bParam0, func_211(iVar0), Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4, UNK_0xAA973E78065E07A0(bParam0, func_211(iVar0)));
						}
						else
						{
							UNK_0x64F9F278AB9DCA2C(bParam0, func_211(iVar0), Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4, iParam4);
						}
						func_243(iVar0);
						if (Global_76432 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								bVar3 = func_213(bParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (bVar3 != -99)
								{
									func_201(bParam0, iVar2, bVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_76434[1 /*14*/] = { func_251(iVar10, iVar0, func_210(bParam0, iVar0, -1), -1) };
				if (UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("PLAYER_ONE"))
						{
							if (func_209(bParam0, iVar10, &bVar4, 1))
							{
								func_201(bParam0, 2, bVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar38 = { func_233(iVar10, 0) };
						func_201(bParam0, iVar0, uVar38[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var55 = { func_251(iVar10, 8, bVar5, -1) };
			if (bVar5 != -99)
			{
				if (func_207(iVar10, bParam2, 8, bVar5, &uVar11, &Var55))
				{
					func_201(bParam0, 8, bVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_251(iVar10, 9, bVar6, -1) };
			if (bVar6 != -99)
			{
				if (func_207(iVar10, bParam2, 9, bVar6, &uVar11, &Var55))
				{
					func_201(bParam0, 9, bVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_251(iVar10, 14, bVar7, -1) };
			if (bVar7 != -99)
			{
				if (func_207(iVar10, bParam2, 14, bVar7, &uVar11, &Var55))
				{
					func_201(bParam0, 14, bVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_251(iVar10, 14, bVar8, -1) };
			if (bVar8 != -99)
			{
				if (func_207(iVar10, bParam2, 14, bVar8, &uVar11, &Var55))
				{
					func_201(bParam0, 14, bVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_251(iVar10, 14, bVar9, -1) };
			if (bVar9 != -99)
			{
				if (func_207(iVar10, bParam2, 14, bVar9, &uVar11, &Var55))
				{
					func_201(bParam0, 14, bVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar69 = { func_230(iVar10, bParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_76434[1 /*14*/] = { func_251(iVar10, 14, uVar69[iVar1], -1) };
			func_221(bParam0, Global_76434[1 /*14*/].f_12, Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4);
			func_243(14);
			if (Global_76432 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					bVar3 = func_213(bParam0, iVar10, 14, uVar69[iVar1], iVar2, 0);
					if (bVar3 != -99)
					{
						func_201(bParam0, iVar2, bVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_221(bParam0, Global_76434[1 /*14*/].f_12, Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4);
		func_243(iParam1);
		if (Global_76432 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				bVar3 = func_213(bParam0, iVar10, iParam1, bParam2, iVar2, 0);
				if (bVar3 != -99)
				{
					func_201(bParam0, iVar2, bVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			UNK_0x64F9F278AB9DCA2C(bParam0, func_211(iParam1), Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4, UNK_0xAA973E78065E07A0(bParam0, func_211(iParam1)));
		}
		else
		{
			UNK_0x64F9F278AB9DCA2C(bParam0, func_211(iParam1), Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4, iParam4);
		}
		if (Global_76432 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				bVar3 = func_213(bParam0, iVar10, iParam1, bParam2, iVar2, 0);
				if (bVar3 != -99)
				{
					func_201(bParam0, iVar2, bVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_204(iVar10, iParam1, bParam2);
		}
	}
	if (Global_76432 == 1)
	{
		if (func_209(bParam0, iVar10, &bVar4, 0))
		{
			func_201(bParam0, 2, bVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_202(bParam0, iVar10, &bVar4))
		{
			func_201(bParam0, 1, bVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_76432 = (Global_76432 - 1);
	return 1;
}

bool func_202(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_203(iParam1);
	if (Global_111638.f_2358.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_315(bParam0, Global_111638.f_2358.f_539[iVar0 /*65*/].f_64, Global_111638.f_2358.f_539[iVar0 /*65*/].f_63))
		{
			*bParam2 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_62;
			Global_111638.f_2358.f_539[iVar0 /*65*/].f_63 = -99;
			Global_111638.f_2358.f_539[iVar0 /*65*/].f_64 = 1;
			return true;
		}
	}
	return false;
}

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			return 0;
		case joaat("PLAYER_ONE"):
			return 1;
		case joaat("PLAYER_TWO"):
			return 2;
		default:
			break;
	}
	return 145;
}

void func_204(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == joaat("PLAYER_ZERO"))
	{
		bVar0 = 5;
	}
	else if (iParam0 == joaat("PLAYER_ONE"))
	{
		bVar0 = 2;
	}
	else if (iParam0 == joaat("PLAYER_TWO"))
	{
		bVar0 = 4;
	}
	if (func_206(iParam0, 12, bVar0))
	{
		if (func_205(iParam0, iParam1, bParam2))
		{
			iVar1 = func_203(iParam0);
			if (iParam1 == 3)
			{
				Global_111638.f_2358.f_539.f_196[iVar1] = bParam2;
			}
			else if (iParam1 == 4)
			{
				Global_111638.f_2358.f_539.f_200[iVar1] = bParam2;
			}
		}
	}
}

bool func_205(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == joaat("PLAYER_ZERO"))
	{
		if (iParam1 == 4)
		{
			if (bParam2 >= 47 && bParam2 <= 54)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (bParam2 >= 77 && bParam2 <= 84)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("PLAYER_ONE"))
	{
		if (iParam1 == 4)
		{
			if (bParam2 >= 14 && bParam2 <= 21)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (bParam2 >= 41 && bParam2 <= 56)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("PLAYER_TWO"))
	{
		if (iParam1 == 4)
		{
			if (bParam2 >= 18 && bParam2 <= 29)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (bParam2 >= 54 && bParam2 <= 69)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_206(int iParam0, int iParam1, bool bParam2)
{
	Global_76434[1 /*14*/] = { func_251(iParam0, iParam1, bParam2, -1) };
	return UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 2);
}

bool func_207(int iParam0, bool bParam1, int iParam2, bool bParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar10;

	if ((*uParam4)[iParam2] == bParam3)
	{
		return true;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return true;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((bParam3 == 0 || bParam3 == 1) || bParam3 == 2) || bParam3 == 3) || bParam3 == 4) || bParam3 == 5) || bParam3 == 6) || bParam3 == 7) || bParam3 == 8)
		{
			return true;
		}
	}
	if (bParam3 == -99 || uParam5->f_1 == -1)
	{
		return true;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_230(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == bParam3)
			{
				return true;
			}
			iVar10++;
		}
	}
	if (func_208(iParam0, iParam2, bParam3))
	{
		return true;
	}
	if (iParam0 == joaat("PLAYER_ZERO"))
	{
		if (func_239(iParam0, iParam2, bParam3, -1))
		{
			if ((((((bParam1 == 1 || bParam1 == 2) || bParam1 == 10) || bParam1 == 11) || bParam1 == 12) || bParam1 == 18) || bParam1 == 50)
			{
				return false;
			}
			return true;
		}
		else if (func_238(iParam0, iParam2, bParam3, -1))
		{
			if (((((((((bParam1 == 1 || bParam1 == 2) || bParam1 == 4) || bParam1 == 5) || bParam1 == 10) || bParam1 == 11) || bParam1 == 12) || bParam1 == 14) || bParam1 == 18) || bParam1 == 50)
			{
				return false;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return false;
				}
			}
			return true;
		}
		else if (func_237(iParam0, iParam2, bParam3, -1))
		{
			if (((((((((bParam1 == 1 || bParam1 == 2) || bParam1 == 4) || bParam1 == 5) || bParam1 == 10) || bParam1 == 11) || bParam1 == 12) || bParam1 == 14) || bParam1 == 18) || bParam1 == 50)
			{
				return false;
			}
			return true;
		}
	}
	else if (iParam0 == joaat("PLAYER_ONE"))
	{
		if (func_239(iParam0, iParam2, bParam3, -1))
		{
			if ((bParam1 == 3 || bParam1 == 5) || bParam1 == 7)
			{
				return false;
			}
			return true;
		}
		else if (func_238(iParam0, iParam2, bParam3, -1))
		{
			if ((((bParam1 == 3 || bParam1 == 5) || bParam1 == 7) || bParam1 == 8) || bParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (bParam3 == 9)
					{
						if (bParam1 == 8 || bParam1 == 21)
						{
							return true;
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return false;
				}
				if (((bParam1 == 43 || bParam1 == 44) || bParam1 == 45) || bParam1 == 46)
				{
					if (bParam3 >= 5 && bParam3 <= 10)
					{
						return false;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((bParam1 == 43 || bParam1 == 44) || bParam1 == 45) || bParam1 == 46)
				{
					if (bParam3 >= 26 && bParam3 <= 39)
					{
						return false;
					}
				}
			}
			return true;
		}
		else if (func_237(iParam0, iParam2, bParam3, -1))
		{
			if (((((bParam1 == 3 || bParam1 == 3) || bParam1 == 5) || bParam1 == 7) || bParam1 == 8) || bParam1 == 21)
			{
				return false;
			}
			return true;
		}
		else if (iParam2 == 14)
		{
			if (bParam3 >= 159 && bParam3 <= 174)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("PLAYER_TWO"))
	{
		if (bParam1 == 2)
		{
			if (iParam2 == 14 && bParam3 == 0)
			{
				return true;
			}
		}
		if (func_239(iParam0, iParam2, bParam3, -1))
		{
			if (((((bParam1 == 1 || bParam1 == 2) || bParam1 == 6) || bParam1 == 8) || bParam1 == 45) || bParam1 == 12)
			{
				return false;
			}
			return true;
		}
		else if (func_238(iParam0, iParam2, bParam3, -1))
		{
			if (((((((bParam1 == 1 || bParam1 == 2) || bParam1 == 3) || bParam1 == 6) || bParam1 == 8) || bParam1 == 11) || bParam1 == 45) || bParam1 == 12)
			{
				return false;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return false;
				}
			}
			return true;
		}
		else if (func_237(iParam0, iParam2, bParam3, -1))
		{
			if ((((((bParam1 == 1 || bParam1 == 2) || bParam1 == 3) || bParam1 == 6) || bParam1 == 8) || bParam1 == 11) || bParam1 == 12)
			{
				return false;
			}
			return true;
		}
	}
	return false;
}

bool func_208(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == 15)
					{
						return true;
					}
					break;
				case 9:
					if (bParam2 == 6)
					{
						return true;
					}
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == 1 || bParam2 == 10)
					{
						return true;
					}
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == 4)
					{
						return true;
					}
					break;
			}
			break;
	}
	return false;
}

bool func_209(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_203(iParam1);
	if (Global_111638.f_2358.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_315(bParam0, Global_111638.f_2358.f_539[iVar0 /*65*/].f_61, Global_111638.f_2358.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*bParam2 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_59;
			Global_111638.f_2358.f_539[iVar0 /*65*/].f_60 = -99;
			Global_111638.f_2358.f_539[iVar0 /*65*/].f_61 = 2;
			return true;
		}
	}
	return false;
}

int func_210(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (iParam1 == 12)
		{
			bVar0 = false;
			while (bVar0 <= 53)
			{
				if (func_315(bParam0, iParam1, bVar0))
				{
					return bVar0;
				}
				bVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			bVar1 = false;
			while (bVar1 <= 19)
			{
				if (func_315(bParam0, iParam1, bVar1))
				{
					return bVar1;
				}
				bVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (bParam2 == -1)
			{
			}
			else
			{
				return func_240(bParam0, bParam2);
			}
		}
		else
		{
			return func_241(bParam0, iParam1);
		}
	}
	return -99;
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 6:
			return 6;
		case 5:
			return 5;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 1:
			return 1;
		case 7:
			return 7;
		case 11:
			return 11;
	}
	return 0;
}

int func_212(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	*bParam3 = -99;
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == 7 || bParam2 == 23)
					{
						*bParam3 = 1;
					}
					break;
				case 9:
					if (bParam2 == 8 || (bParam2 >= 9 && bParam2 <= 14))
					{
						*bParam3 = 1;
					}
					break;
				case 10:
					if (bParam2 >= 44 && bParam2 <= 47)
					{
						*bParam3 = 1;
					}
					break;
				case 14:
					if ((((((bParam2 >= 31 && bParam2 <= 32) || (bParam2 >= 33 && bParam2 <= 34)) || (bParam2 >= 35 && bParam2 <= 36)) || bParam2 == 37) || (bParam2 >= 40 && bParam2 <= 41)) || bParam2 == 46)
					{
						*bParam3 = 1;
					}
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 2:
					if (bParam2 == 20)
					{
						*bParam3 = 20;
					}
					break;
				case 8:
					if (bParam2 == 4)
					{
						*bParam3 = 19;
					}
					break;
				case 9:
					if (bParam2 >= 5 && bParam2 <= 10)
					{
						*bParam3 = 19;
					}
					break;
				case 10:
					if (bParam2 >= 47 && bParam2 <= 50)
					{
						*bParam3 = 19;
					}
					break;
				case 14:
					if (((((bParam2 >= 26 && bParam2 <= 27) || (bParam2 >= 28 && bParam2 <= 29)) || (bParam2 >= 30 && bParam2 <= 31)) || bParam2 == 32) || (bParam2 >= 35 && bParam2 <= 36))
					{
						*bParam3 = 19;
					}
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == 7)
					{
						*bParam3 = 2;
					}
					break;
				case 9:
					if ((bParam2 >= 9 && bParam2 <= 14) || (bParam2 >= 15 && bParam2 <= 16))
					{
						*bParam3 = 2;
					}
					break;
				case 10:
					if (bParam2 >= 29 && bParam2 <= 32)
					{
						*bParam3 = 2;
					}
					break;
				case 14:
					if ((((((bParam2 >= 47 && bParam2 <= 48) || (bParam2 >= 49 && bParam2 <= 50)) || (bParam2 >= 51 && bParam2 <= 52)) || bParam2 == 53) || (bParam2 >= 56 && bParam2 <= 57)) || bParam2 == 62)
					{
						*bParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*bParam3 != -99)
	{
		iVar0 = func_203(iParam0);
		Global_111638.f_2358.f_539[iVar0 /*65*/].f_60 = bParam2;
		Global_111638.f_2358.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

bool func_213(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;

	bVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				bVar1 = func_241(bParam0, 1);
				bVar0 = func_220(iParam1, bParam3, bVar1);
				break;
			case 1:
				bVar2 = func_241(bParam0, 2);
				bVar0 = func_220(iParam1, bVar2, bParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_212(iParam1, iParam2, bParam3, &bVar0);
	}
	else if (iParam4 == 1)
	{
		func_219(iParam1, iParam2, bParam3, &bVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_218(iParam1, bParam3, &bVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("PLAYER_ZERO"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (bParam3)
								{
									case 36:
										bVar0 = 17;
										break;
									case 37:
										bVar0 = 17;
										break;
									case 38:
										bVar0 = 18;
										break;
									case 39:
										bVar0 = 18;
										break;
									case 40:
										bVar0 = 19;
										break;
									case 41:
										bVar0 = 19;
										break;
									case 42:
										bVar0 = 20;
										break;
									case 43:
										bVar0 = 20;
										break;
								}
								break;
							case 11:
								if (bParam3 >= 2 && bParam3 <= 7)
								{
									if (!func_217(bParam0, 3, 44, 59))
									{
										bVar0 = 44;
									}
								}
								else if (((bParam3 >= 8 && bParam3 <= 17) || (bParam3 >= 18 && bParam3 <= 27)) || (bParam3 >= 28 && bParam3 <= 43))
								{
									if (!func_217(bParam0, 3, 135, 150))
									{
										bVar0 = func_216(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (bParam3)
								{
									case 63:
										bVar0 = 4;
										break;
									case 61:
										bVar0 = 3;
										break;
									case 16:
										bVar0 = true;
										break;
									case 114:
										bVar0 = 15;
										break;
									case 115:
										bVar0 = 17;
										break;
									case 116:
										bVar0 = 16;
										break;
									case 117:
										bVar0 = 18;
										break;
									case 118:
										bVar0 = 20;
										break;
									case 119:
										bVar0 = 19;
										break;
									case 125:
										bVar0 = 21;
										break;
									case 120:
										bVar0 = 22;
										break;
									case 124:
										bVar0 = 23;
										break;
									case 126:
										bVar0 = 24;
										break;
									case 121:
										bVar0 = 25;
										break;
									case 127:
										bVar0 = 26;
										break;
									case 128:
										bVar0 = 27;
										break;
									case 85:
										bVar0 = 6;
										break;
									case 77:
										bVar0 = 7;
										break;
									case 78:
										bVar0 = 8;
										break;
									case 79:
										bVar0 = 9;
										break;
									case 80:
										bVar0 = 10;
										break;
									case 81:
										bVar0 = 11;
										break;
									case 82:
										bVar0 = 12;
										break;
									case 83:
										bVar0 = 13;
										break;
									case 84:
										bVar0 = 14;
										break;
									case 21:
										bVar0 = 31;
										break;
									case 22:
										bVar0 = 30;
										break;
									case 23:
										bVar0 = 29;
										break;
									case 24:
										bVar0 = 28;
										break;
									case 25:
										bVar0 = 33;
										break;
									case 26:
										bVar0 = 35;
										break;
									case 27:
										bVar0 = 34;
										break;
									case 28:
										bVar0 = 32;
										break;
									default:
										if (bParam3 >= 17 && bParam3 <= 20)
										{
										}
										else
										{
											bVar0 = false;
										}
										break;
								}
								break;
							case 11:
								if (bParam3 != 0)
								{
									bVar0 = false;
								}
								break;
						}
						break;
					case 11:
						if (iParam2 == 3)
						{
							if ((bParam3 >= 44 && bParam3 <= 59) || (bParam3 >= 135 && bParam3 <= 150))
							{
							}
							else
							{
								bVar0 = false;
							}
						}
						else if (iParam2 == 10)
						{
							if (bParam3 >= 36 && bParam3 <= 43)
							{
								bVar0 = false;
							}
						}
						break;
				}
				break;
			case joaat("PLAYER_ONE"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (bParam3)
								{
									case 17:
										bVar0 = 2;
										break;
									case 90:
										bVar0 = true;
										break;
									case 268:
										bVar0 = 3;
										break;
									case 269:
										bVar0 = 5;
										break;
									case 270:
										bVar0 = 4;
										break;
									case 271:
										bVar0 = 6;
										break;
									case 272:
										bVar0 = 8;
										break;
									case 273:
										bVar0 = 7;
										break;
									case 279:
										bVar0 = 9;
										break;
									case 274:
										bVar0 = 10;
										break;
									case 278:
										bVar0 = 11;
										break;
									case 280:
										bVar0 = 12;
										break;
									case 275:
										bVar0 = 13;
										break;
									case 281:
										bVar0 = 14;
										break;
									case 282:
										bVar0 = 15;
										break;
									case 107:
										bVar0 = 16;
										break;
									case 108:
										bVar0 = 17;
										break;
									case 109:
										bVar0 = 18;
										break;
									case 110:
										bVar0 = 19;
										break;
									case 111:
										bVar0 = 20;
										break;
									case 112:
										bVar0 = 21;
										break;
									case 113:
										bVar0 = 22;
										break;
									case 114:
										bVar0 = 23;
										break;
									case 115:
										bVar0 = 24;
										break;
									case 116:
										bVar0 = 25;
										break;
									case 117:
										bVar0 = 52;
										break;
									case 118:
										bVar0 = 27;
										break;
									case 119:
										bVar0 = 28;
										break;
									case 120:
										bVar0 = 29;
										break;
									case 121:
										bVar0 = 30;
										break;
									case 122:
										bVar0 = 31;
										break;
									case 296:
										bVar0 = 32;
										break;
									case 297:
										bVar0 = 33;
										break;
									case 298:
										bVar0 = 34;
										break;
									case 299:
										bVar0 = 35;
										break;
									case 300:
										bVar0 = 36;
										break;
									case 301:
										bVar0 = 37;
										break;
									case 302:
										bVar0 = 38;
										break;
									case 309:
										bVar0 = 39;
										break;
									case 310:
										bVar0 = 40;
										break;
									case 311:
										bVar0 = 41;
										break;
									case 312:
										bVar0 = 42;
										break;
									case 313:
										bVar0 = 43;
										break;
									case 314:
										bVar0 = 44;
										break;
									case 315:
										bVar0 = 45;
										break;
									case 316:
										bVar0 = 46;
										break;
									case 317:
										bVar0 = 51;
										break;
									default:
										bVar0 = false;
										break;
								}
								break;
							case 11:
								if (bParam3 != 0)
								{
									bVar0 = false;
								}
								break;
						}
						break;
					case 3:
						switch (iParam2)
						{
							case 11:
								if (bParam3 >= 47 && bParam3 <= 62)
								{
									if (!func_217(bParam0, 3, 209, 222))
									{
										bVar0 = func_216(iParam1, 3, 209, 222);
									}
								}
								else if ((bParam3 >= 1 && bParam3 <= 4) || (bParam3 >= 5 && bParam3 <= 8))
								{
									if (!func_217(bParam0, 3, 243, 258))
									{
										if (bParam3 == 1 || bParam3 == 5)
										{
											bVar0 = func_216(iParam1, 3, 243, 246);
										}
										else if (bParam3 == 2 || bParam3 == 6)
										{
											bVar0 = func_216(iParam1, 3, 247, 250);
										}
										else if (bParam3 == 3 || bParam3 == 7)
										{
											bVar0 = func_216(iParam1, 3, 251, 254);
										}
										else if (bParam3 == 4 || bParam3 == 8)
										{
											bVar0 = func_216(iParam1, 3, 255, 258);
										}
									}
								}
								else if (bParam3 == 41 || bParam3 == 42)
								{
									if (!func_217(bParam0, 3, 176, 191) && !func_217(bParam0, 3, 227, 242))
									{
										bVar0 = func_216(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								bVar5 = bParam3;
								bVar4 = func_241(bParam0, 3);
							}
							else if (iParam2 == 3)
							{
								bVar4 = bParam3;
								bVar5 = func_241(bParam0, 11);
								bVar5 = func_215(iParam1, bVar4, bVar5, 0);
							}
							iVar3 = func_241(bParam0, 8);
							if (((bVar5 >= 5 && bVar5 <= 8) || (bVar5 >= 25 && bVar5 <= 40)) || (bVar5 >= 42 && bVar5 <= 43))
							{
								if (!func_214(joaat("PLAYER_ONE"), iVar3, bVar5, bVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										bVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								bVar0 = 26;
							}
						}
						break;
					case 11:
						if (iParam2 == 3)
						{
							if (bParam3 >= 209 && bParam3 <= 222)
							{
							}
							else if (((bParam3 >= 176 && bParam3 <= 191) || (bParam3 >= 227 && bParam3 <= 242)) || (bParam3 >= 243 && bParam3 <= 258))
							{
								iVar7 = func_241(bParam0, 8);
								bVar8 = func_241(bParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									bVar0 = func_215(iParam1, bParam3, bVar8, 0);
								}
								else
								{
									bVar0 = func_215(iParam1, bParam3, bVar8, 1);
								}
							}
							else if (bParam3 >= 41 && bParam3 <= 56)
							{
								bVar0 = 45;
							}
							else if (bParam3 >= 223 && bParam3 <= 226)
							{
								bVar0 = 44;
							}
							else
							{
								bVar0 = false;
							}
						}
						else if (iParam2 == 8)
						{
							if (((bParam3 >= 27 && bParam3 <= 42) || (bParam3 >= 43 && bParam3 <= 58)) || (bParam3 >= 59 && bParam3 <= 74))
							{
								bVar9 = func_241(bParam0, 11);
								bVar0 = func_215(iParam1, -99, bVar9, 0);
							}
						}
						break;
				}
				break;
			case joaat("PLAYER_TWO"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (bParam3)
								{
									case 50:
										bVar0 = 3;
										break;
									case 81:
										bVar0 = 5;
										break;
									case 82:
										bVar0 = 6;
										break;
									case 83:
										bVar0 = 7;
										break;
									case 84:
										bVar0 = 10;
										break;
									case 85:
										bVar0 = 9;
										break;
									case 86:
										bVar0 = 8;
										break;
									case 92:
										bVar0 = 22;
										break;
									case 87:
										bVar0 = 23;
										break;
									case 91:
										bVar0 = 24;
										break;
									case 93:
										bVar0 = 25;
										break;
									case 88:
										bVar0 = 26;
										break;
									case 94:
										bVar0 = 27;
										break;
									case 120:
										bVar0 = 11;
										break;
									case 121:
										bVar0 = 13;
										break;
									case 122:
										bVar0 = 14;
										break;
									case 124:
										bVar0 = 12;
										break;
									case 126:
										bVar0 = 18;
										break;
									case 128:
										bVar0 = 17;
										break;
									case 130:
										bVar0 = 19;
										break;
									case 131:
										bVar0 = 16;
										break;
									case 134:
										bVar0 = 15;
										break;
									case 135:
										bVar0 = 20;
										break;
									default:
										bVar0 = false;
										break;
								}
								break;
						}
						break;
				}
				break;
		}
	}
	return bVar0;
}

bool func_214(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			break;
		case joaat("PLAYER_ONE"):
			*iParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (bParam2 != -99)
				{
					if ((bParam2 >= 5 && bParam2 <= 8) || (bParam2 >= 25 && bParam2 <= 40))
					{
					}
					else
					{
						if (bParam2 >= 42 && bParam2 <= 43)
						{
							if (bParam3 >= 176 && bParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*iParam4 = (59 + iVar0);
							}
							else if (bParam3 >= 227 && bParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*iParam4 = (43 + iVar0);
							}
						}
						return false;
					}
				}
				if (bParam3 != -99)
				{
					if (((bParam3 >= 227 && bParam3 <= 242) || (bParam3 >= 176 && bParam3 <= 191)) || (bParam3 >= 243 && bParam3 <= 258))
					{
					}
					else
					{
						return false;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (bParam2 != -99)
				{
					if (bParam2 >= 42 && bParam2 <= 43)
					{
					}
					else
					{
						if ((bParam2 >= 5 && bParam2 <= 8) || (bParam2 >= 25 && bParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*iParam4 = (27 + iVar0);
						}
						return false;
					}
				}
				if (bParam3 != -99)
				{
					if (bParam3 >= 227 && bParam3 <= 242)
					{
					}
					else
					{
						if (bParam3 >= 176 && bParam3 <= 191)
						{
							if (bParam2 >= 42 && bParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*iParam4 = (59 + iVar0);
							}
						}
						return false;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (bParam2 != -99)
				{
					if (bParam2 >= 42 && bParam2 <= 43)
					{
					}
					else
					{
						if ((bParam2 >= 5 && bParam2 <= 8) || (bParam2 >= 25 && bParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*iParam4 = (27 + iVar0);
						}
						return false;
					}
				}
				if (bParam3 != -99)
				{
					if (bParam3 >= 176 && bParam3 <= 191)
					{
					}
					else
					{
						if (bParam3 >= 227 && bParam3 <= 242)
						{
							if (bParam2 >= 42 && bParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*iParam4 = (43 + iVar0);
							}
						}
						else if ((bParam2 >= 5 && bParam2 <= 8) || (bParam2 >= 25 && bParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*iParam4 = (27 + iVar0);
						}
						return false;
					}
				}
			}
			break;
		case joaat("PLAYER_TWO"):
			if (iParam1 == 12)
			{
				if (bParam3 != 241)
				{
					return false;
				}
			}
			break;
	}
	return true;
}

bool func_215(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1 >= 243 && bParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return true;
		}
		else
		{
			return 5;
		}
	}
	else if (bParam1 >= 247 && bParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (bParam1 >= 251 && bParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (bParam1 >= 255 && bParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (bParam1 >= 255 && bParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((bParam1 >= 176 && bParam1 <= 191) || (bParam1 >= 227 && bParam1 <= 242))
	{
		if (bParam2 >= 9 && bParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return bParam2;
			}
			else
			{
				iVar0 = (bParam2 - 9);
				bParam2 = (25 + iVar0);
				return bParam2;
			}
		}
		else if (bParam2 >= 25 && bParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (bParam2 - 25);
				bParam2 = (9 + iVar0);
				return bParam2;
			}
			else
			{
				return bParam2;
			}
		}
		else if (bParam2 == 41 || bParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				bParam2 = func_216(iParam0, 11, 9, 24);
			}
			else
			{
				bParam2 = func_216(iParam0, 11, 25, 40);
			}
			if (bParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return bParam2;
			}
		}
	}
	else if (bParam2 >= 1 && bParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return bParam2;
		}
		else
		{
			iVar0 = (bParam2 - 1);
			bParam2 = (5 + iVar0);
			return bParam2;
		}
	}
	else if (bParam2 >= 5 && bParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (bParam2 - 5);
			bParam2 = (1 + iVar0);
			return bParam2;
		}
		else
		{
			return bParam2;
		}
	}
	else if (bParam2 >= 9 && bParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return bParam2;
		}
		else
		{
			iVar0 = (bParam2 - 9);
			bParam2 = (25 + iVar0);
			return bParam2;
		}
	}
	else if (bParam2 >= 25 && bParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (bParam2 - 25);
			bParam2 = (9 + iVar0);
			return bParam2;
		}
		else
		{
			return bParam2;
		}
	}
	else if (bParam2 == 41 || bParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

bool func_216(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		bVar1 = iVar0;
		if (func_206(iParam0, iParam1, bVar1))
		{
			return bVar1;
		}
		iVar0++;
	}
	return -99;
}

bool func_217(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_241(bParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return true;
	}
	return false;
}

bool func_218(int iParam0, bool bParam1, int iParam2)
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			if ((((((((((((((((((bParam1 == 16 || bParam1 == 17) || bParam1 == 21) || bParam1 == 22) || bParam1 == 32) || (bParam1 >= 34 && bParam1 <= 39)) || (bParam1 >= 41 && bParam1 <= 45)) || bParam1 == 46) || (bParam1 >= 47 && bParam1 <= 54)) || (bParam1 >= 55 && bParam1 <= 70)) || (bParam1 >= 72 && bParam1 <= 79)) || bParam1 == 80) || (bParam1 >= 81 && bParam1 <= 83)) || (bParam1 >= 84 && bParam1 <= 87)) || bParam1 == 88) || (bParam1 >= 89 && bParam1 <= 91)) || bParam1 == 95) || (bParam1 >= 96 && bParam1 <= 111)) || bParam1 == 112)
			{
				*iParam2 = 6;
				return true;
			}
			break;
		case joaat("PLAYER_ONE"):
			if ((((((bParam1 == 12 || (bParam1 >= 14 && bParam1 <= 21)) || bParam1 == 32) || bParam1 == 52) || (bParam1 >= 69 && bParam1 <= 70)) || bParam1 == 71) || (bParam1 >= 72 && bParam1 <= 77))
			{
				*iParam2 = 17;
				return true;
			}
			break;
		case joaat("PLAYER_TWO"):
			if (((((((((((((((bParam1 == 4 || bParam1 == 5) || bParam1 == 6) || bParam1 == 7) || bParam1 == 14) || (bParam1 >= 18 && bParam1 <= 29)) || bParam1 == 31) || bParam1 == 32) || bParam1 == 33) || bParam1 == 34) || (bParam1 >= 35 && bParam1 <= 42)) || (bParam1 >= 43 && bParam1 <= 53)) || (bParam1 >= 54 && bParam1 <= 61)) || (bParam1 >= 71 && bParam1 <= 80)) || (bParam1 >= 81 && bParam1 <= 90)) || (bParam1 >= 94 && bParam1 <= 103))
			{
				*iParam2 = 8;
				return true;
			}
			break;
	}
	return false;
}

int func_219(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 10:
					if (bParam2 >= 44 && bParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				case 14:
					if (((((((bParam2 >= 31 && bParam2 <= 32) || (bParam2 >= 33 && bParam2 <= 34)) || (bParam2 >= 35 && bParam2 <= 36)) || bParam2 == 37) || (bParam2 >= 38 && bParam2 <= 39)) || (bParam2 >= 40 && bParam2 <= 41)) || (bParam2 >= 42 && bParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 10:
					if (bParam2 >= 47 && bParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				case 14:
					if (((((bParam2 >= 26 && bParam2 <= 27) || (bParam2 >= 28 && bParam2 <= 29)) || (bParam2 >= 30 && bParam2 <= 31)) || bParam2 == 32) || (bParam2 >= 35 && bParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 9:
					if (bParam2 >= 15 && bParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				case 10:
					if (bParam2 >= 29 && bParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				case 14:
					if (((((((bParam2 >= 47 && bParam2 <= 48) || (bParam2 >= 49 && bParam2 <= 50)) || (bParam2 >= 51 && bParam2 <= 52)) || bParam2 == 53) || (bParam2 >= 54 && bParam2 <= 55)) || (bParam2 >= 56 && bParam2 <= 57)) || (bParam2 >= 58 && bParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_203(iParam0);
		Global_111638.f_2358.f_539[iVar0 /*65*/].f_63 = bParam2;
		Global_111638.f_2358.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_220(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			if (bParam1 == 1)
			{
				if (bParam2 == 0)
				{
					return 1;
				}
				else if (bParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (bParam2 == 0)
			{
				return 0;
			}
			else if (bParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("PLAYER_ONE"):
			if (bParam1 >= 0 && bParam1 <= 15)
			{
				if (bParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (bParam1 >= 16 && bParam1 <= 17)
			{
				if (bParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (bParam1 == 18)
			{
				if (bParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (bParam1 == 19)
			{
				if (bParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (bParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		case joaat("PLAYER_TWO"):
			if (bParam1 == 2)
			{
				if (bParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (bParam1 == 3)
			{
				if (bParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (bParam1 == 8)
			{
				return 5;
			}
			else if (bParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

void func_221(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam2 == -1)
	{
		UNK_0x3BFC3B9ADD2EE7B7(bParam0, bParam1);
		if (bParam1 == 0)
		{
			UNK_0x4E885A246A9D983A(bParam0, 34, false);
			UNK_0x4E885A246A9D983A(bParam0, 36, false);
		}
	}
	else
	{
		UNK_0x9A28E8CB86CD4694(bParam0, bParam1, iParam2, iParam3, UNK_0x8CD06866876216F2());
		if (bParam1 == 0)
		{
			iVar0 = func_226(bParam0, iParam2, iParam3, bParam1);
			if (func_222(UNK_0x134B62B726CEC8E6(bParam0), 14, iVar0, UNK_0xD1BC07002824FE76(bParam0, false, iParam2, iParam3)))
			{
				UNK_0x4E885A246A9D983A(bParam0, 34, true);
				UNK_0x4E885A246A9D983A(bParam0, 36, true);
			}
			else
			{
				UNK_0x4E885A246A9D983A(bParam0, 34, false);
				UNK_0x4E885A246A9D983A(bParam0, 36, false);
			}
		}
	}
}

bool func_222(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case joaat("MP_M_FREEMODE_01"):
			switch (iParam1)
			{
				case 14:
					if (bParam3 == -1)
					{
						bParam3 = func_223(iParam0, bParam2, 14, 3);
					}
					if ((bParam2 >= 131 && bParam2 <= 154) || (bParam2 >= 327 && UNK_0x1A5A491D253EA7BA(bParam3, joaat("HELMET"), true)))
					{
						return true;
					}
					break;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (iParam1)
			{
				case 14:
					if (bParam3 == -1)
					{
						bParam3 = func_223(iParam0, bParam2, 14, 4);
					}
					if ((bParam2 >= 131 && bParam2 <= 154) || (bParam2 >= 327 && UNK_0x1A5A491D253EA7BA(bParam3, joaat("HELMET"), true)))
					{
						return true;
					}
					break;
			}
			break;
	}
	return false;
}

int func_223(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;

	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		UNK_0x30BBA34DD235D7FE(&Var0);
		iVar18 = 0;
		iVar19 = (bParam1 - func_225(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = UNK_0xF6900DA2D9CD7BC5(bParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			UNK_0x4F79808059300187(iVar17, &Var0);
			if (!UNK_0x232048AB4B0E0259(Var0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		UNK_0x65C0659496B1CC14(&Var21);
		iVar39 = 0;
		iVar40 = (bParam1 - func_224(iParam0, func_211(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_76556.f_26[iParam2] && bParam1 == Global_76556[iParam2]) && Global_76556.f_13[iParam2] != 0)
		{
			return Global_76556.f_13[iParam2];
		}
		iVar41 = UNK_0xF6900DA2D9CD7BC5(bParam3, 7, -1, 0, -1, func_211(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			UNK_0xC578687D5A643830(iVar38, &Var21);
			if (!UNK_0x232048AB4B0E0259(Var21))
			{
				if (iVar39 == iVar40)
				{
					Global_76556.f_13[iParam2] = Var21.f_1;
					Global_76556[iParam2] = bParam1;
					Global_76556.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_224(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 0:
					return 7;
				case 1:
					return 5;
				case 2:
					return 6;
				case 3:
					return 181;
				case 4:
					return 113;
				case 5:
					return 14;
				case 6:
					return 99;
				case 7:
					return 1;
				case 8:
					return 24;
				case 9:
					return 20;
				case 10:
					return 48;
				case 11:
					return 45;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 0:
					return 10;
				case 1:
					return 5;
				case 2:
					return 21;
				case 3:
					return 318;
				case 4:
					return 117;
				case 5:
					return 7;
				case 6:
					return 134;
				case 7:
					return 1;
				case 8:
					return 77;
				case 9:
					return 12;
				case 10:
					return 53;
				case 11:
					return 63;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 0:
					return 7;
				case 1:
					return 6;
				case 2:
					return 9;
				case 3:
					return 242;
				case 4:
					return 104;
				case 5:
					return 7;
				case 6:
					return 84;
				case 7:
					return 1;
				case 8:
					return 18;
				case 9:
					return 17;
				case 10:
					return 33;
				case 11:
					return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_M_FREEMODE_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 26;
				case 2:
					return 91;
				case 3:
					return 16;
				case 4:
					return 256;
				case 5:
					return 9;
				case 6:
					return 256;
				case 7:
					return 92;
				case 8:
					return 241;
				case 9:
					return 46;
				case 10:
					return 7;
				case 11:
					return 237;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 26;
				case 2:
					return 92;
				case 3:
					return 16;
				case 4:
					return 256;
				case 5:
					return 9;
				case 6:
					return 256;
				case 7:
					return 55;
				case 8:
					return 136;
				case 9:
					return 36;
				case 10:
					return 6;
				case 11:
					return 256;
			}
			break;
	}
	return -99;
}

int func_225(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			return 113;
		case joaat("PLAYER_ONE"):
			return 175;
		case joaat("PLAYER_TWO"):
			return 155;
	}
	switch (iParam0)
	{
		case joaat("MP_M_FREEMODE_01"):
			return 327;
		case joaat("MP_F_FREEMODE_01"):
			return 327;
	}
	return -99;
}

int func_226(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam1 == -1)
	{
		return func_229(bParam3);
	}
	iVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	iVar1 = UNK_0xD1BC07002824FE76(bParam0, bParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("MP_M_FREEMODE_01"))
		{
			return func_228(UNK_0x134B62B726CEC8E6(bParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("MP_F_FREEMODE_01"))
		{
			return func_228(UNK_0x134B62B726CEC8E6(bParam0), iVar1, 14, 4);
		}
	}
	iVar2 = UNK_0xB0D40A53430D217C(bParam0, bParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = UNK_0xFEDCD54A497F3495(bParam0, bParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_227(bParam0, bParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_229(bParam3);
}

int func_227(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	switch (iVar0)
	{
		case joaat("PLAYER_ZERO"):
			switch (bParam1)
			{
				case 0:
					return 10;
				case 1:
					return 58;
				case 2:
					return 112;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (bParam1)
			{
				case 0:
					return 10;
				case 1:
					return 82;
				case 2:
					return 158;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (bParam1)
			{
				case 0:
					return 10;
				case 1:
					return 88;
				case 2:
					return 154;
			}
			break;
		case joaat("MP_M_FREEMODE_01"):
			switch (bParam1)
			{
				case 0:
					return 10;
				case 1:
					return 155;
				case 6:
					return 319;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (bParam1)
			{
				case 0:
					return 10;
				case 1:
					return 155;
				case 6:
					return 319;
			}
			break;
	}
	return -99;
}

int func_228(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;

	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		UNK_0x30BBA34DD235D7FE(&Var0);
		iVar18 = 0;
		iVar19 = UNK_0xF6900DA2D9CD7BC5(bParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			UNK_0x4F79808059300187(iVar17, &Var0);
			if (!UNK_0x232048AB4B0E0259(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_225(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		UNK_0x65C0659496B1CC14(&Var20);
		iVar38 = 0;
		iVar39 = UNK_0xF6900DA2D9CD7BC5(bParam3, 7, -1, 0, -1, func_211(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			UNK_0xC578687D5A643830(iVar37, &Var20);
			if (!UNK_0x232048AB4B0E0259(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_224(iParam0, func_211(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_229(bool bParam0)
{
	switch (bParam0)
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
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
	}
	return 0;
}

struct<10> func_230(int iParam0, bool bParam1)
{
	int iVar0;
	struct<10> Var1;

	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (bParam1)
			{
				case 31:
					func_232(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					func_232(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					func_232(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					func_232(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					func_232(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					func_232(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					func_232(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					func_232(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					func_232(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					func_232(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 9:
					func_232(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_231(&Var1, iParam0, bParam1, 10);
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (bParam1)
			{
				case 31:
					func_232(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					func_232(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					func_232(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					func_232(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					func_232(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					func_232(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					func_232(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					func_232(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					func_232(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					func_232(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_231(&Var1, iParam0, bParam1, 9);
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (bParam1)
			{
				case 31:
					func_232(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					func_232(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					func_232(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					func_232(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					func_232(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					func_232(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					func_232(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					func_232(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					func_232(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					func_232(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_231(&Var1, iParam0, bParam1, 9);
					break;
			}
			break;
		case joaat("MP_M_FREEMODE_01"):
			switch (bParam1)
			{
				case 31:
					func_232(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					func_232(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					func_232(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					func_232(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					func_232(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					func_232(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					func_232(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					func_232(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					func_232(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					func_232(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 9:
					func_232(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 10:
					func_232(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 11:
					func_232(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 12:
					func_232(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 13:
					func_232(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 14:
					func_232(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 15:
					func_232(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 16:
					func_232(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 17:
					func_232(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 18:
					func_232(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 19:
					func_232(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 20:
					func_232(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 21:
					func_232(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 22:
					func_232(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 23:
					func_232(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 24:
					func_232(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_231(&Var1, iParam0, bParam1, 25);
					break;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (bParam1)
			{
				case 31:
					func_232(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					func_232(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					func_232(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					func_232(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					func_232(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					func_232(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					func_232(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					func_232(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					func_232(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					func_232(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 9:
					func_232(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 10:
					func_232(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 11:
					func_232(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 12:
					func_232(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 13:
					func_232(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				case 14:
					func_232(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 15:
					func_232(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 16:
					func_232(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 17:
					func_232(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 18:
					func_232(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 19:
					func_232(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 20:
					func_232(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 21:
					func_232(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 22:
					func_232(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 23:
					func_232(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_231(&Var1, iParam0, bParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_231(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	struct<4> Var1;
	vector3 vVar16;
	int iVar19;

	if (bParam2 != 0 && bParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		bVar0 = false;
		if (iParam1 == joaat("PLAYER_ZERO"))
		{
			bVar0 = false;
		}
		else if (iParam1 == joaat("PLAYER_ONE"))
		{
			bVar0 = true;
		}
		else if (iParam1 == joaat("PLAYER_TWO"))
		{
			bVar0 = 2;
		}
		else if (iParam1 == joaat("MP_M_FREEMODE_01"))
		{
			bVar0 = 3;
		}
		else if (iParam1 == joaat("MP_F_FREEMODE_01"))
		{
			bVar0 = 4;
		}
		UNK_0xEF5FB5FCF95E0C4D(bParam2, &Var1);
		if (!UNK_0x232048AB4B0E0259(Var1))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (UNK_0x5D149814CB08088A(Var1.f_1, iVar19, &vVar16) && vVar16.z != -1)
				{
					if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
					{
						(*iParam0)[vVar16.z] = func_228(iParam1, vVar16.x, 14, bVar0);
					}
					else if (vVar16.y != -1)
					{
						(*iParam0)[vVar16.z] = vVar16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_232(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_233(int iParam0, bool bParam1)
{
	int iVar0;
	struct<17> Var1;

	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (bParam1)
			{
				case 0:
					if (Global_111638.f_9080.f_99.f_58[120])
					{
						func_236(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_236(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				case 1:
					func_236(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				case 2:
					func_236(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				case 3:
					func_236(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				case 4:
					func_236(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				case 5:
					func_236(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[0], Global_111638.f_2358.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				case 6:
					func_236(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 7:
					func_236(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 8:
					func_236(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 9:
					func_236(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 10:
					func_236(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				case 11:
					func_236(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				case 12:
					func_236(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				case 13:
					func_236(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 14:
					func_236(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				case 15:
					func_236(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				case 16:
					func_236(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				case 17:
					func_236(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 18:
					func_236(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				case 19:
					func_236(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 20:
					func_236(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 21:
					func_236(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 22:
					func_236(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 23:
					func_236(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 24:
					func_236(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				case 25:
					func_236(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 26:
					func_236(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 27:
					func_236(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 28:
					func_236(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				case 29:
					func_236(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 30:
					func_236(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 31:
					func_236(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				case 32:
					func_236(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 33:
					func_236(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 34:
					func_236(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				case 35:
					func_236(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 36:
					func_236(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 37:
					func_236(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 38:
					func_236(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 39:
					func_236(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 40:
					func_236(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 41:
					func_236(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 42:
					func_236(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 43:
					func_236(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 44:
					func_236(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 45:
					func_236(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 46:
					func_236(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 47:
					func_236(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 48:
					func_236(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 49:
					func_236(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 50:
					func_236(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				case 51:
					func_236(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 52:
					func_236(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				default:
					func_234(&Var1, iParam0, bParam1, 53);
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (bParam1)
			{
				case 0:
					func_236(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 1:
					func_236(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				case 2:
					func_236(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[1], Global_111638.f_2358.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				case 3:
					func_236(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				case 4:
					func_236(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				case 5:
					func_236(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 6:
					func_236(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 7:
					func_236(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				case 8:
					func_236(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				case 9:
					func_236(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 10:
					func_236(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 11:
					func_236(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				case 12:
					func_236(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 13:
					func_236(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 14:
					func_236(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 15:
					func_236(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 16:
					func_236(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 17:
					func_236(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 18:
					func_236(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				case 19:
					func_236(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 20:
					func_236(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 21:
					func_236(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				case 22:
					func_236(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				case 23:
					func_236(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				case 24:
					func_236(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				case 25:
					func_236(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				case 26:
					func_236(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				case 27:
					func_236(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				case 28:
					func_236(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				case 29:
					func_236(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				case 30:
					func_236(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				case 31:
					func_236(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				case 32:
					func_236(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				case 33:
					func_236(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				case 34:
					func_236(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				case 35:
					func_236(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				case 36:
					func_236(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				case 37:
					func_236(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				case 38:
					func_236(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 39:
					func_236(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 40:
					func_236(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 41:
					func_236(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 42:
					func_236(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 43:
					func_236(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				case 44:
					func_236(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				case 45:
					func_236(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				case 46:
					func_236(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				default:
					func_234(&Var1, iParam0, bParam1, 47);
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (bParam1)
			{
				case 0:
					func_236(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 1:
					func_236(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				case 2:
					func_236(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				case 3:
					func_236(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				case 4:
					func_236(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[2], Global_111638.f_2358.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 5:
					func_236(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				case 6:
					func_236(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				case 7:
					func_236(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				case 8:
					func_236(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				case 9:
					func_236(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 10:
					func_236(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 11:
					func_236(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				case 12:
					func_236(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				case 13:
					func_236(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 14:
					func_236(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				case 15:
					func_236(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 16:
					func_236(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 17:
					func_236(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 18:
					func_236(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 19:
					func_236(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 20:
					func_236(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 21:
					func_236(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 22:
					func_236(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 23:
					func_236(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 24:
					func_236(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 25:
					func_236(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 26:
					func_236(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 27:
					func_236(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 28:
					func_236(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 29:
					func_236(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 30:
					func_236(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 31:
					func_236(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 32:
					func_236(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 33:
					func_236(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 34:
					func_236(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 35:
					func_236(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 36:
					func_236(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 37:
					func_236(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 38:
					func_236(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 39:
					func_236(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 40:
					func_236(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 41:
					func_236(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 42:
					func_236(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 43:
					func_236(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 44:
					func_236(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 45:
					func_236(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				case 46:
					func_236(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 47:
					func_236(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				default:
					func_234(&Var1, iParam0, bParam1, 48);
					break;
			}
			break;
		case joaat("MP_M_FREEMODE_01"):
			switch (bParam1)
			{
				case 0:
					func_236(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				case 1:
					func_236(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				case 2:
					func_236(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				case 3:
					func_236(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				case 4:
					func_236(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				case 5:
					func_236(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				case 6:
					func_236(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				case 7:
					func_236(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				case 8:
					func_236(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				case 9:
					func_236(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				case 10:
					func_236(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				case 11:
					func_236(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				case 12:
					func_236(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				case 13:
					func_236(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				case 14:
					func_236(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				case 15:
					func_236(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				case 16:
					func_236(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				case 17:
					func_236(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				case 18:
					func_236(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				case 19:
					func_236(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				case 20:
					func_236(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				case 21:
					func_236(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				case 22:
					func_236(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				case 23:
					func_236(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				case 24:
					func_236(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				case 25:
					func_236(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				default:
					func_234(&Var1, iParam0, bParam1, 26);
					break;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (bParam1)
			{
				case 0:
					func_236(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				case 1:
					func_236(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				case 2:
					func_236(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				case 3:
					func_236(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				case 4:
					func_236(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				case 5:
					func_236(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				case 6:
					func_236(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				case 7:
					func_236(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				case 8:
					func_236(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				case 9:
					func_236(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				case 10:
					func_236(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				case 11:
					func_236(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				case 12:
					func_236(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				case 13:
					func_236(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				case 14:
					func_236(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				case 15:
					func_236(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				case 16:
					func_236(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				case 17:
					func_236(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				case 18:
					func_236(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				case 19:
					func_236(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				case 20:
					func_236(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				case 21:
					func_236(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				case 22:
					func_236(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				case 23:
					func_236(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				case 24:
					func_236(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				case 25:
					func_236(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				case 26:
					func_236(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				case 27:
					func_236(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				default:
					func_234(&Var1, iParam0, bParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_234(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	struct<5> Var1;
	vector3 vVar16;
	struct<2> Var19;
	int iVar36;

	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	bVar0 = false;
	if (iParam1 == joaat("PLAYER_ZERO"))
	{
		bVar0 = false;
		(*uParam0)[13] = (10 + (bParam2 - iParam3));
	}
	else if (iParam1 == joaat("PLAYER_ONE"))
	{
		bVar0 = true;
		(*uParam0)[13] = (9 + (bParam2 - iParam3));
	}
	else if (iParam1 == joaat("PLAYER_TWO"))
	{
		bVar0 = 2;
		(*uParam0)[13] = (9 + (bParam2 - iParam3));
	}
	else if (iParam1 == joaat("MP_M_FREEMODE_01"))
	{
		bVar0 = 3;
	}
	else if (iParam1 == joaat("MP_F_FREEMODE_01"))
	{
		bVar0 = 4;
	}
	UNK_0x84997C8C8A5848DD(bVar0, 0);
	UNK_0xA69F810DF7EA02E6((bParam2 - iParam3), &Var1);
	if (!UNK_0x232048AB4B0E0259(Var1))
	{
		iVar36 = 0;
		while (iVar36 < Var1.f_4)
		{
			if (UNK_0xD00B813D5424DD2E(Var1.f_1, iVar36, &vVar16))
			{
				if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
				{
					if (vVar16.z == 10)
					{
						UNK_0x65C0659496B1CC14(&Var19);
						UNK_0xFDEBA3FD0BF0D4AC(vVar16.x, &Var19);
						if (vVar16.x != Var19.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (vVar16.z == 10 && uParam0->f_16)
					{
						(*uParam0)[func_235(vVar16.z)] = vVar16.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_235(vVar16.z)] = func_228(iParam1, vVar16.x, func_235(vVar16.z), bVar0);
					}
				}
				else if (vVar16.y != -1)
				{
					(*uParam0)[func_235(vVar16.z)] = vVar16.y;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_235(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 6:
			return 6;
		case 5:
			return 5;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 1:
			return 1;
		case 7:
			return 7;
		case 11:
			return 11;
	}
	return 0;
}

void func_236(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

bool func_237(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 14:
					if (bParam2 == 16)
					{
						return true;
					}
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 14:
					if ((bParam2 == 40 || (bParam2 >= 41 && bParam2 <= 56)) || (bParam2 >= 64 && bParam2 <= 79))
					{
						return true;
					}
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 14:
					if ((bParam2 >= 17 && bParam2 <= 18) || (bParam2 >= 71 && bParam2 <= 86))
					{
						return true;
					}
					break;
			}
			break;
		case joaat("MP_M_FREEMODE_01"):
			switch (iParam1)
			{
				case 14:
					if (bParam2 >= 18 && bParam2 <= 130)
					{
						return true;
					}
					else if (bParam2 >= 10 && bParam2 <= 17)
					{
						return true;
					}
					else if (bParam2 >= 327)
					{
						if (bParam3 == -1)
						{
							bParam3 = func_223(iParam0, bParam2, 14, 3);
						}
						return (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), true) || UNK_0x1A5A491D253EA7BA(func_223(iParam0, bParam2, 14, 3), -1842686353, true));
					}
					break;
				case 1:
					if (bParam2 >= 26)
					{
						if (bParam3 == -1)
						{
							bParam3 = func_223(iParam0, bParam2, 1, 3);
						}
						return (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), false) || UNK_0x1A5A491D253EA7BA(func_223(iParam0, bParam2, 1, 3), -1842686353, false));
					}
					break;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (iParam1)
			{
				case 14:
					if (bParam2 >= 18 && bParam2 <= 130)
					{
						return true;
					}
					else if (bParam2 >= 10 && bParam2 <= 17)
					{
						return true;
					}
					else if (bParam2 >= 327)
					{
						if (bParam3 == -1)
						{
							bParam3 = func_223(iParam0, bParam2, 14, 4);
						}
						return (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), true) || UNK_0x1A5A491D253EA7BA(func_223(iParam0, bParam2, 14, 4), -1842686353, true));
					}
					break;
				case 1:
					if (bParam2 >= 26)
					{
						if (bParam3 == -1)
						{
							bParam3 = func_223(iParam0, bParam2, 1, 4);
						}
						return (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), false) || UNK_0x1A5A491D253EA7BA(func_223(iParam0, bParam2, 1, 4), -1842686353, false));
					}
					break;
			}
			break;
	}
	return false;
}

bool func_238(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == joaat("PLAYER_ZERO"))
	{
		if (iParam1 == 6)
		{
			if (bParam2 == 10)
			{
				return true;
			}
		}
		else if (iParam1 == 8)
		{
			if ((bParam2 == 9 || bParam2 == 7) || bParam2 == 23)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (bParam2 >= 9 && bParam2 <= 14)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((bParam2 == 12 || bParam2 == 59) || bParam2 == 60) || bParam2 == 31) || bParam2 == 32) || bParam2 == 33) || bParam2 == 34) || bParam2 == 35) || bParam2 == 36) || bParam2 == 37) || bParam2 == 38) || bParam2 == 39) || bParam2 == 40) || bParam2 == 41) || (bParam2 >= 42 && bParam2 <= 44)) || bParam2 == 54) || bParam2 == 55)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("PLAYER_ONE"))
	{
		if (iParam1 == 2)
		{
			if (bParam2 == 20)
			{
				return true;
			}
		}
		else if (iParam1 == 8)
		{
			if ((bParam2 == 3 || bParam2 == 5) || bParam2 == 9)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (bParam2 >= 5 && bParam2 <= 10)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((bParam2 == 82 || bParam2 == 10) || bParam2 == 26) || bParam2 == 27) || bParam2 == 28) || bParam2 == 29) || bParam2 == 30) || bParam2 == 31) || bParam2 == 32) || bParam2 == 33) || bParam2 == 34) || bParam2 == 35) || bParam2 == 36) || (bParam2 >= 37 && bParam2 <= 39))
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("PLAYER_TWO"))
	{
		if (iParam1 == 8)
		{
			if (bParam2 == 14 || bParam2 == 7)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (((bParam2 == 8 || (bParam2 >= 9 && bParam2 <= 14)) || bParam2 == 15) || bParam2 == 16)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((bParam2 == 88 || bParam2 == 12) || bParam2 == 47) || bParam2 == 48) || bParam2 == 49) || bParam2 == 50) || bParam2 == 51) || bParam2 == 52) || bParam2 == 53) || bParam2 == 54) || bParam2 == 55) || bParam2 == 56) || bParam2 == 57) || (bParam2 >= 58 && bParam2 <= 60))
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("MP_M_FREEMODE_01"))
	{
		if (iParam1 == 1)
		{
			if (bParam2 > 0)
			{
				if (bParam2 >= 26)
				{
					if (bParam3 == -1)
					{
						bParam3 = func_223(iParam0, bParam2, 1, 3);
					}
					if (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), false) || UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAIR_SHRINK"), false))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	else if (iParam0 == joaat("MP_F_FREEMODE_01"))
	{
		if (iParam1 == 1)
		{
			if (bParam2 > 0)
			{
				if (bParam2 >= 26)
				{
					if (bParam3 == -1)
					{
						bParam3 = func_223(iParam0, bParam2, 1, 4);
					}
					if (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), false) || UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAIR_SHRINK"), false))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

bool func_239(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			if (iParam1 == 14)
			{
				if ((((((((bParam2 == 58 || bParam2 == 61) || (bParam2 >= 62 && bParam2 <= 69)) || (bParam2 >= 70 && bParam2 <= 79)) || (bParam2 >= 80 && bParam2 <= 89)) || bParam2 == 90) || (bParam2 >= 91 && bParam2 <= 102)) || (bParam2 >= 103 && bParam2 <= 110)) || bParam2 == 111)
				{
					return true;
				}
			}
			break;
		case joaat("PLAYER_ONE"):
			if (iParam1 == 14)
			{
				if (((((((((((bParam2 >= 83 && bParam2 <= 92) || bParam2 == 93) || bParam2 == 94) || (bParam2 >= 95 && bParam2 <= 101)) || (bParam2 >= 102 && bParam2 <= 111)) || (bParam2 >= 112 && bParam2 <= 121)) || (bParam2 >= 122 && bParam2 <= 131)) || (bParam2 >= 132 && bParam2 <= 139)) || (bParam2 >= 140 && bParam2 <= 149)) || (bParam2 >= 150 && bParam2 <= 156)) || bParam2 == 157)
				{
					return true;
				}
			}
			break;
		case joaat("PLAYER_TWO"):
			if (iParam1 == 14)
			{
				if (((((((((bParam2 == 89 || (bParam2 >= 90 && bParam2 <= 99)) || (bParam2 >= 100 && bParam2 <= 109)) || bParam2 == 111) || bParam2 == 112) || (bParam2 >= 113 && bParam2 <= 122)) || (bParam2 >= 123 && bParam2 <= 132)) || (bParam2 >= 133 && bParam2 <= 142)) || (bParam2 >= 143 && bParam2 <= 152)) || bParam2 == 153)
				{
					return true;
				}
			}
			break;
		case joaat("MP_M_FREEMODE_01"):
			if (iParam1 == 14)
			{
				if (bParam2 >= 155 && bParam2 <= 318)
				{
					return true;
				}
				else if (bParam2 >= 327)
				{
					if (bParam3 == -1)
					{
						bParam3 = func_223(iParam0, bParam2, 14, 3);
					}
					return UNK_0x1A5A491D253EA7BA(bParam3, joaat("GLASSES"), true);
				}
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			if (iParam1 == 14)
			{
				if (bParam2 >= 155 && bParam2 <= 318)
				{
					return true;
				}
				else if (bParam2 >= 327)
				{
					if (bParam3 == -1)
					{
						bParam3 = func_223(iParam0, bParam2, 14, 4);
					}
					return UNK_0x1A5A491D253EA7BA(bParam3, joaat("GLASSES"), true);
				}
			}
			break;
	}
	return false;
}

int func_240(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		return -99;
	}
	iVar0 = UNK_0x98F1B512A2CC07C5(bParam0, bParam1);
	if (iVar0 == -1)
	{
		return func_229(bParam1);
	}
	iVar1 = UNK_0x22286A85EDEAEC56(bParam0, bParam1);
	return func_226(bParam0, iVar0, iVar1, bParam1);
}

int func_241(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		return -99;
	}
	bVar0 = func_211(iParam1);
	iVar1 = UNK_0x36C584991B4C183F(bParam0, bVar0);
	iVar2 = UNK_0xDADA8E1DD0D0D9D9(bParam0, bVar0);
	return func_242(bParam0, iVar1, iVar2, iParam1);
}

int func_242(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	bVar0 = func_211(iParam3);
	iVar1 = UNK_0xD2C792E5A65B6BF1(bParam0, bVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = UNK_0x0F84621831DD8D8A(bParam0, bVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

void func_243(int iParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, true) && !UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 6))
	{
		func_249(iParam0, Global_76434[1 /*14*/].f_5, Global_76434[1 /*14*/].f_2, 2, Global_76434[1 /*14*/].f_1, 1, 0);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, true) && UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_244(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_244(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_244(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_244(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	iVar0 = Global_76431;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_248(bParam0, iParam1, &iVar2, &bVar1, bParam2, bParam3))
	{
		bVar3 = func_247(iVar2, iVar0, 0);
		UNK_0x5D96D8530B3D0904(&bVar3, bVar1);
		func_245(iVar2, bVar3, iVar0, 1, 0);
	}
}

void func_245(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_246(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_246(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_31();
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

int func_247(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_246(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_248(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam2 = 11511;
	if ((bParam4 && Global_4267094) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (bParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*iParam2 = 971;
						*bParam3 = 19;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*iParam2 = 971;
						*bParam3 = 20;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*iParam2 = 971;
						*bParam3 = 21;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*iParam2 = 971;
						*bParam3 = 22;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*iParam2 = 971;
						*bParam3 = 23;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*iParam2 = 971;
						*bParam3 = 24;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*iParam2 = 971;
						*bParam3 = 25;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*iParam2 = 971;
						*bParam3 = 26;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*iParam2 = 935;
						*bParam3 = 0;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*iParam2 = 935;
						*bParam3 = 1;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*iParam2 = 935;
						*bParam3 = 2;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*iParam2 = 935;
						*bParam3 = 3;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*iParam2 = 935;
						*bParam3 = 4;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*iParam2 = 935;
						*bParam3 = 5;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*iParam2 = 935;
						*bParam3 = 7;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*iParam2 = 935;
						*bParam3 = 8;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*iParam2 = 935;
						*bParam3 = 11;
						return true;
				}
				break;
			case 2:
				switch (bParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*iParam2 = 1023;
						*bParam3 = 19;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*iParam2 = 1023;
						*bParam3 = 20;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*iParam2 = 1023;
						*bParam3 = 21;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*iParam2 = 1023;
						*bParam3 = 22;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*iParam2 = 1023;
						*bParam3 = 23;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*iParam2 = 1023;
						*bParam3 = 24;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*iParam2 = 1023;
						*bParam3 = 25;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*iParam2 = 1023;
						*bParam3 = 26;
						return true;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (bParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*iParam2 = 971;
						*bParam3 = 19;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*iParam2 = 971;
						*bParam3 = 20;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*iParam2 = 971;
						*bParam3 = 21;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*iParam2 = 971;
						*bParam3 = 22;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*iParam2 = 971;
						*bParam3 = 23;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*iParam2 = 971;
						*bParam3 = 24;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*iParam2 = 971;
						*bParam3 = 25;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*iParam2 = 971;
						*bParam3 = 26;
						return true;
				}
				break;
			case 2:
				switch (bParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*iParam2 = 1023;
						*bParam3 = 19;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*iParam2 = 1023;
						*bParam3 = 20;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*iParam2 = 1023;
						*bParam3 = 21;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*iParam2 = 1023;
						*bParam3 = 22;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*iParam2 = 1023;
						*bParam3 = 23;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*iParam2 = 1023;
						*bParam3 = 24;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*iParam2 = 1023;
						*bParam3 = 25;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*iParam2 = 1023;
						*bParam3 = 26;
						return true;
				}
				break;
		}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4267094)
		{
			iVar0 = UNK_0xFAB100617491B764(bParam0);
		}
		else
		{
			iVar0 = UNK_0xCE50BA51F0598785(bParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = UNK_0xFAB100617491B764(bParam0);
	}
	else
	{
		iVar0 = UNK_0xCE50BA51F0598785(bParam0);
	}
	if (iVar0 == -1)
	{
		return false;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*iParam2 = 1759;
					break;
				case 1:
					*iParam2 = 1760;
					break;
				case 2:
					*iParam2 = 1761;
					break;
				case 3:
					*iParam2 = 1762;
					break;
				case 4:
					*iParam2 = 1763;
					break;
				case 5:
					*iParam2 = 1764;
					break;
				case 6:
					*iParam2 = 1771;
					break;
				case 7:
					*iParam2 = 1772;
					break;
				case 8:
					*iParam2 = 1773;
					break;
				case 9:
					*iParam2 = 1774;
					break;
				case 10:
					*iParam2 = 1775;
					break;
				case 11:
					*iParam2 = 1776;
					break;
				case 12:
					*iParam2 = 1777;
					break;
				case 13:
					*iParam2 = 1785;
					break;
				case 14:
					*iParam2 = 1786;
					break;
				case 15:
					*iParam2 = 1887;
					break;
				case 16:
					*iParam2 = 1888;
					break;
				case 17:
					*iParam2 = 1919;
					break;
				case 18:
					*iParam2 = 1933;
					break;
				case 19:
					*iParam2 = 1934;
					break;
				case 20:
					*iParam2 = 1935;
					break;
				case 21:
					*iParam2 = 1936;
					break;
				case 22:
					*iParam2 = 1937;
					break;
				case 23:
					*iParam2 = 2041;
					break;
				case 24:
					*iParam2 = 2042;
					break;
				case 25:
					*iParam2 = 2068;
					break;
				case 26:
					*iParam2 = 2069;
					break;
				case 27:
					*iParam2 = 2070;
					break;
				case 28:
					*iParam2 = 2071;
					break;
				case 29:
					*iParam2 = 2072;
					break;
				case 30:
					*iParam2 = 2073;
					break;
				case 31:
					*iParam2 = 2074;
					break;
				case 32:
					*iParam2 = 2075;
					break;
				case 33:
					*iParam2 = 2076;
					break;
				case 34:
					*iParam2 = 2077;
					break;
				case 35:
					*iParam2 = 2324;
					break;
				case 36:
					*iParam2 = 2325;
					break;
				case 37:
					*iParam2 = 2389;
					break;
				case 38:
					*iParam2 = 2390;
					break;
				case 39:
					*iParam2 = 2391;
					break;
				case 40:
					*iParam2 = 2392;
					break;
				case 41:
					*iParam2 = 2451;
					break;
				case 42:
					*iParam2 = 2452;
					break;
				case 43:
					*iParam2 = 2453;
					break;
				case 44:
					*iParam2 = 2454;
					break;
				case 45:
					*iParam2 = 2455;
					break;
				case 46:
					*iParam2 = 2456;
					break;
				case 47:
					*iParam2 = 2457;
					break;
				case 48:
					*iParam2 = 2458;
					break;
				case 49:
					*iParam2 = 2459;
					break;
				case 50:
					*iParam2 = 2460;
					break;
				case 51:
					*iParam2 = 2589;
					break;
				case 52:
					*iParam2 = 2590;
					break;
				case 53:
					*iParam2 = 2591;
					break;
				case 54:
					*iParam2 = 2592;
					break;
				case 55:
					*iParam2 = 2593;
					break;
				case 56:
					*iParam2 = 2594;
					break;
				case 57:
					*iParam2 = 2595;
					break;
				case 58:
					*iParam2 = 2596;
					break;
				case 59:
					*iParam2 = 2597;
					break;
				case 60:
					*iParam2 = 2598;
					break;
				case 61:
					*iParam2 = 2599;
					break;
				case 62:
					*iParam2 = 3196;
					break;
				case 63:
					*iParam2 = 3197;
					break;
				case 64:
					*iParam2 = 3198;
					break;
				case 65:
					*iParam2 = 3199;
					break;
				case 66:
					*iParam2 = 3200;
					break;
				case 67:
					*iParam2 = 3201;
					break;
				case 68:
					*iParam2 = 3669;
					break;
				case 69:
					*iParam2 = 3670;
					break;
				case 70:
					*iParam2 = 3671;
					break;
				case 71:
					*iParam2 = 3672;
					break;
				case 72:
					*iParam2 = 3673;
					break;
				case 73:
					*iParam2 = 3674;
					break;
				case 74:
					*iParam2 = 3675;
					break;
				case 75:
					*iParam2 = 3676;
					break;
				case 76:
					*iParam2 = 3677;
					break;
				case 77:
					*iParam2 = 3678;
					break;
				case 78:
					*iParam2 = 3792;
					break;
				case 79:
					*iParam2 = 3793;
					break;
				case 80:
					*iParam2 = 3794;
					break;
				case 81:
					*iParam2 = 3795;
					break;
				case 82:
					*iParam2 = 3796;
					break;
				case 83:
					*iParam2 = 3797;
					break;
				case 84:
					*iParam2 = 3798;
					break;
				case 85:
					*iParam2 = 3799;
					break;
				case 86:
					*iParam2 = 3902;
					break;
				case 87:
					*iParam2 = 3903;
					break;
				case 88:
					*iParam2 = 3904;
					break;
				case 89:
					*iParam2 = 5337;
					break;
				case 90:
					*iParam2 = 5338;
					break;
				case 91:
					*iParam2 = 5339;
					break;
				case 92:
					*iParam2 = 5340;
					break;
				case 93:
					*iParam2 = 5341;
					break;
				case 94:
					*iParam2 = 5342;
					break;
				case 95:
					*iParam2 = 5343;
					break;
				case 96:
					*iParam2 = 5344;
					break;
				case 97:
					*iParam2 = 5345;
					break;
				case 98:
					*iParam2 = 5346;
					break;
				case 99:
					*iParam2 = 5347;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*iParam2 = 5348;
					break;
				case 101:
					*iParam2 = 5394;
					break;
				case 102:
					*iParam2 = 5395;
					break;
				case 103:
					*iParam2 = 5396;
					break;
				case 104:
					*iParam2 = 5397;
					break;
				case 105:
					*iParam2 = 5398;
					break;
				case 106:
					*iParam2 = 5399;
					break;
				case 107:
					*iParam2 = 5400;
					break;
				case 108:
					*iParam2 = 5401;
					break;
				case 109:
					*iParam2 = 5402;
					break;
				case 110:
					*iParam2 = 5403;
					break;
				case 111:
					*iParam2 = 5404;
					break;
				case 112:
					*iParam2 = 5405;
					break;
				case 113:
					*iParam2 = 5406;
					break;
				case 114:
					*iParam2 = 5407;
					break;
				case 115:
					*iParam2 = 5408;
					break;
				case 116:
					*iParam2 = 5409;
					break;
				case 117:
					*iParam2 = 5410;
					break;
				case 118:
					*iParam2 = 5411;
					break;
				case 119:
					*iParam2 = 5412;
					break;
				case 120:
					*iParam2 = 5413;
					break;
				case 121:
					*iParam2 = 5414;
					break;
				case 122:
					*iParam2 = 5415;
					break;
				case 123:
					*iParam2 = 5416;
					break;
				case 124:
					*iParam2 = 6122;
					break;
				case 125:
					*iParam2 = 6123;
					break;
				case 126:
					*iParam2 = 6124;
					break;
				case 127:
					*iParam2 = 6125;
					break;
				case 128:
					*iParam2 = 6126;
					break;
				case 129:
					*iParam2 = 6127;
					break;
				case 130:
					*iParam2 = 6128;
					break;
				case 131:
					*iParam2 = 6129;
					break;
				case 132:
					*iParam2 = 6130;
					break;
				case 133:
					*iParam2 = 6131;
					break;
				case 134:
					*iParam2 = 6132;
					break;
				case 135:
					*iParam2 = 6133;
					break;
				case 136:
					*iParam2 = 6134;
					break;
				case 137:
					*iParam2 = 6135;
					break;
				case 138:
					*iParam2 = 6136;
					break;
				case 139:
					*iParam2 = 6435;
					break;
				case 140:
					*iParam2 = 6436;
					break;
				case 141:
					*iParam2 = 6437;
					break;
				case 142:
					*iParam2 = 6438;
					break;
				case 143:
					*iParam2 = 6439;
					break;
				case 144:
					*iParam2 = 6440;
					break;
				case 145:
					*iParam2 = 6441;
					break;
				case 146:
					*iParam2 = 6442;
					break;
				case 147:
					*iParam2 = 6443;
					break;
				case 148:
					*iParam2 = 6444;
					break;
				case 149:
					*iParam2 = 6445;
					break;
				case 150:
					*iParam2 = 6446;
					break;
				case 151:
					*iParam2 = 6447;
					break;
				case 152:
					*iParam2 = 6448;
					break;
				case 153:
					*iParam2 = 6449;
					break;
				case 154:
					*iParam2 = 7266;
					break;
				case 155:
					*iParam2 = 7267;
					break;
				case 156:
					*iParam2 = 7268;
					break;
				case 157:
					*iParam2 = 7269;
					break;
				case 158:
					*iParam2 = 7270;
					break;
				case 159:
					*iParam2 = 7271;
					break;
				case 160:
					*iParam2 = 7272;
					break;
				case 161:
					*iParam2 = 7879;
					break;
				case 162:
					*iParam2 = 7880;
					break;
				case 163:
					*iParam2 = 7881;
					break;
				case 164:
					*iParam2 = 7882;
					break;
				case 165:
					*iParam2 = 7883;
					break;
				case 166:
					*iParam2 = 7884;
					break;
				case 167:
					*iParam2 = 7885;
					break;
				case 168:
					*iParam2 = 7886;
					break;
				case 169:
					*iParam2 = 7887;
					break;
				case 170:
					*iParam2 = 7888;
					break;
				case 171:
					*iParam2 = 7889;
					break;
				case 172:
					*iParam2 = 7890;
					break;
				case 173:
					*iParam2 = 7891;
					break;
				case 174:
					*iParam2 = 7892;
					break;
				case 175:
					*iParam2 = 7893;
					break;
				case 176:
					*iParam2 = 8299;
					break;
				case 177:
					*iParam2 = 8300;
					break;
				case 178:
					*iParam2 = 8301;
					break;
				case 179:
					*iParam2 = 8302;
					break;
				case 180:
					*iParam2 = 8303;
					break;
				case 181:
					*iParam2 = 8304;
					break;
				case 182:
					*iParam2 = 8305;
					break;
				case 183:
					*iParam2 = 8306;
					break;
				case 184:
					*iParam2 = 8307;
					break;
				case 185:
					*iParam2 = 8308;
					break;
				case 186:
					*iParam2 = 8309;
					break;
				case 187:
					*iParam2 = 8310;
					break;
				case 188:
					*iParam2 = 8311;
					break;
				case 189:
					*iParam2 = 8312;
					break;
				case 190:
					*iParam2 = 8313;
					break;
				case 191:
					*iParam2 = 8314;
					break;
				case 192:
					*iParam2 = 8315;
					break;
				case 193:
					*iParam2 = 8316;
					break;
				case 194:
					*iParam2 = 8317;
					break;
				case 195:
					*iParam2 = 8318;
					break;
				case 196:
					*iParam2 = 8319;
					break;
				case 197:
					*iParam2 = 8320;
					break;
				case 198:
					*iParam2 = 8321;
					break;
				case 199:
					*iParam2 = 8322;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*iParam2 = 8323;
					break;
				case 201:
					*iParam2 = 8936;
					break;
				case 202:
					*iParam2 = 8937;
					break;
				case 203:
					*iParam2 = 8938;
					break;
				case 204:
					*iParam2 = 8939;
					break;
				case 205:
					*iParam2 = 8940;
					break;
				case 206:
					*iParam2 = 9419;
					break;
				case 207:
					*iParam2 = 9420;
					break;
				case 208:
					*iParam2 = 9421;
					break;
				case 209:
					*iParam2 = 9422;
					break;
				case 210:
					*iParam2 = 9423;
					break;
				case 211:
					*iParam2 = 9424;
					break;
				case 212:
					*iParam2 = 9425;
					break;
				case 213:
					*iParam2 = 9426;
					break;
				case 214:
					*iParam2 = 9427;
					break;
				case 215:
					*iParam2 = 9428;
					break;
				case 216:
					*iParam2 = 9429;
					break;
				case 217:
					*iParam2 = 9430;
					break;
				case 218:
					*iParam2 = 9431;
					break;
				case 219:
					*iParam2 = 9432;
					break;
				case 220:
					*iParam2 = 9433;
					break;
				case 221:
					*iParam2 = 9434;
					break;
				case 222:
					*iParam2 = 9435;
					break;
				case 223:
					*iParam2 = 9436;
					break;
				case 224:
					*iParam2 = 9437;
					break;
				case 225:
					*iParam2 = 9438;
					break;
				case 226:
					*iParam2 = 9439;
					break;
				case 227:
					*iParam2 = 9440;
					break;
				case 228:
					*iParam2 = 9441;
					break;
				case 229:
					*iParam2 = 9442;
					break;
				case 230:
					*iParam2 = 9443;
					break;
				default:
					break;
			}
			break;
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*iParam2 = 1765;
					break;
				case 1:
					*iParam2 = 1766;
					break;
				case 2:
					*iParam2 = 1767;
					break;
				case 3:
					*iParam2 = 1768;
					break;
				case 4:
					*iParam2 = 1769;
					break;
				case 5:
					*iParam2 = 1770;
					break;
				case 6:
					*iParam2 = 1778;
					break;
				case 7:
					*iParam2 = 1779;
					break;
				case 8:
					*iParam2 = 1780;
					break;
				case 9:
					*iParam2 = 1781;
					break;
				case 10:
					*iParam2 = 1782;
					break;
				case 11:
					*iParam2 = 1783;
					break;
				case 12:
					*iParam2 = 1784;
					break;
				case 13:
					*iParam2 = 1787;
					break;
				case 14:
					*iParam2 = 1788;
					break;
				case 15:
					*iParam2 = 1889;
					break;
				case 16:
					*iParam2 = 1890;
					break;
				case 17:
					*iParam2 = 1920;
					break;
				case 18:
					*iParam2 = 1938;
					break;
				case 19:
					*iParam2 = 1939;
					break;
				case 20:
					*iParam2 = 1940;
					break;
				case 21:
					*iParam2 = 1941;
					break;
				case 22:
					*iParam2 = 1942;
					break;
				case 23:
					*iParam2 = 2043;
					break;
				case 24:
					*iParam2 = 2044;
					break;
				case 25:
					*iParam2 = 2078;
					break;
				case 26:
					*iParam2 = 2079;
					break;
				case 27:
					*iParam2 = 2080;
					break;
				case 28:
					*iParam2 = 2081;
					break;
				case 29:
					*iParam2 = 2082;
					break;
				case 30:
					*iParam2 = 2083;
					break;
				case 31:
					*iParam2 = 2084;
					break;
				case 32:
					*iParam2 = 2085;
					break;
				case 33:
					*iParam2 = 2086;
					break;
				case 34:
					*iParam2 = 2087;
					break;
				case 35:
					*iParam2 = 2326;
					break;
				case 36:
					*iParam2 = 2327;
					break;
				case 37:
					*iParam2 = 2393;
					break;
				case 38:
					*iParam2 = 2394;
					break;
				case 39:
					*iParam2 = 2395;
					break;
				case 40:
					*iParam2 = 2396;
					break;
				case 41:
					*iParam2 = 2461;
					break;
				case 42:
					*iParam2 = 2462;
					break;
				case 43:
					*iParam2 = 2463;
					break;
				case 44:
					*iParam2 = 2464;
					break;
				case 45:
					*iParam2 = 2465;
					break;
				case 46:
					*iParam2 = 2466;
					break;
				case 47:
					*iParam2 = 2467;
					break;
				case 48:
					*iParam2 = 2468;
					break;
				case 49:
					*iParam2 = 2469;
					break;
				case 50:
					*iParam2 = 2470;
					break;
				case 51:
					*iParam2 = 2600;
					break;
				case 52:
					*iParam2 = 2601;
					break;
				case 53:
					*iParam2 = 2602;
					break;
				case 54:
					*iParam2 = 2603;
					break;
				case 55:
					*iParam2 = 2604;
					break;
				case 56:
					*iParam2 = 2605;
					break;
				case 57:
					*iParam2 = 2606;
					break;
				case 58:
					*iParam2 = 2607;
					break;
				case 59:
					*iParam2 = 2608;
					break;
				case 60:
					*iParam2 = 2609;
					break;
				case 61:
					*iParam2 = 2610;
					break;
				case 62:
					*iParam2 = 3202;
					break;
				case 63:
					*iParam2 = 3203;
					break;
				case 64:
					*iParam2 = 3204;
					break;
				case 65:
					*iParam2 = 3205;
					break;
				case 66:
					*iParam2 = 3206;
					break;
				case 67:
					*iParam2 = 3207;
					break;
				case 68:
					*iParam2 = 3679;
					break;
				case 69:
					*iParam2 = 3680;
					break;
				case 70:
					*iParam2 = 3681;
					break;
				case 71:
					*iParam2 = 3682;
					break;
				case 72:
					*iParam2 = 3683;
					break;
				case 73:
					*iParam2 = 3684;
					break;
				case 74:
					*iParam2 = 3685;
					break;
				case 75:
					*iParam2 = 3686;
					break;
				case 76:
					*iParam2 = 3687;
					break;
				case 77:
					*iParam2 = 3688;
					break;
				case 78:
					*iParam2 = 3800;
					break;
				case 79:
					*iParam2 = 3801;
					break;
				case 80:
					*iParam2 = 3802;
					break;
				case 81:
					*iParam2 = 3803;
					break;
				case 82:
					*iParam2 = 3804;
					break;
				case 83:
					*iParam2 = 3805;
					break;
				case 84:
					*iParam2 = 3806;
					break;
				case 85:
					*iParam2 = 3807;
					break;
				case 86:
					*iParam2 = 3905;
					break;
				case 87:
					*iParam2 = 3906;
					break;
				case 88:
					*iParam2 = 3907;
					break;
				case 89:
					*iParam2 = 5349;
					break;
				case 90:
					*iParam2 = 5350;
					break;
				case 91:
					*iParam2 = 5351;
					break;
				case 92:
					*iParam2 = 5352;
					break;
				case 93:
					*iParam2 = 5353;
					break;
				case 94:
					*iParam2 = 5354;
					break;
				case 95:
					*iParam2 = 5355;
					break;
				case 96:
					*iParam2 = 5356;
					break;
				case 97:
					*iParam2 = 5357;
					break;
				case 98:
					*iParam2 = 5358;
					break;
				case 99:
					*iParam2 = 5359;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*iParam2 = 5360;
					break;
				case 101:
					*iParam2 = 5417;
					break;
				case 102:
					*iParam2 = 5418;
					break;
				case 103:
					*iParam2 = 5419;
					break;
				case 104:
					*iParam2 = 5420;
					break;
				case 105:
					*iParam2 = 5421;
					break;
				case 106:
					*iParam2 = 5422;
					break;
				case 107:
					*iParam2 = 5423;
					break;
				case 108:
					*iParam2 = 5424;
					break;
				case 109:
					*iParam2 = 5425;
					break;
				case 110:
					*iParam2 = 5426;
					break;
				case 111:
					*iParam2 = 5427;
					break;
				case 112:
					*iParam2 = 5428;
					break;
				case 113:
					*iParam2 = 5429;
					break;
				case 114:
					*iParam2 = 5430;
					break;
				case 115:
					*iParam2 = 5431;
					break;
				case 116:
					*iParam2 = 5432;
					break;
				case 117:
					*iParam2 = 5433;
					break;
				case 118:
					*iParam2 = 5434;
					break;
				case 119:
					*iParam2 = 5435;
					break;
				case 120:
					*iParam2 = 5436;
					break;
				case 121:
					*iParam2 = 5437;
					break;
				case 122:
					*iParam2 = 5438;
					break;
				case 123:
					*iParam2 = 5439;
					break;
				case 124:
					*iParam2 = 6137;
					break;
				case 125:
					*iParam2 = 6138;
					break;
				case 126:
					*iParam2 = 6139;
					break;
				case 127:
					*iParam2 = 6140;
					break;
				case 128:
					*iParam2 = 6141;
					break;
				case 129:
					*iParam2 = 6142;
					break;
				case 130:
					*iParam2 = 6143;
					break;
				case 131:
					*iParam2 = 6144;
					break;
				case 132:
					*iParam2 = 6145;
					break;
				case 133:
					*iParam2 = 6146;
					break;
				case 134:
					*iParam2 = 6147;
					break;
				case 135:
					*iParam2 = 6148;
					break;
				case 136:
					*iParam2 = 6149;
					break;
				case 137:
					*iParam2 = 6150;
					break;
				case 138:
					*iParam2 = 6151;
					break;
				case 139:
					*iParam2 = 6450;
					break;
				case 140:
					*iParam2 = 6451;
					break;
				case 141:
					*iParam2 = 6452;
					break;
				case 142:
					*iParam2 = 6453;
					break;
				case 143:
					*iParam2 = 6454;
					break;
				case 144:
					*iParam2 = 6455;
					break;
				case 145:
					*iParam2 = 6456;
					break;
				case 146:
					*iParam2 = 6457;
					break;
				case 147:
					*iParam2 = 6458;
					break;
				case 148:
					*iParam2 = 6459;
					break;
				case 149:
					*iParam2 = 6460;
					break;
				case 150:
					*iParam2 = 6461;
					break;
				case 151:
					*iParam2 = 6462;
					break;
				case 152:
					*iParam2 = 6463;
					break;
				case 153:
					*iParam2 = 6464;
					break;
				case 154:
					*iParam2 = 7273;
					break;
				case 155:
					*iParam2 = 7274;
					break;
				case 156:
					*iParam2 = 7275;
					break;
				case 157:
					*iParam2 = 7276;
					break;
				case 158:
					*iParam2 = 7277;
					break;
				case 159:
					*iParam2 = 7278;
					break;
				case 160:
					*iParam2 = 7279;
					break;
				case 161:
					*iParam2 = 7894;
					break;
				case 162:
					*iParam2 = 7895;
					break;
				case 163:
					*iParam2 = 7896;
					break;
				case 164:
					*iParam2 = 7897;
					break;
				case 165:
					*iParam2 = 7898;
					break;
				case 166:
					*iParam2 = 7899;
					break;
				case 167:
					*iParam2 = 7900;
					break;
				case 168:
					*iParam2 = 7901;
					break;
				case 169:
					*iParam2 = 7902;
					break;
				case 170:
					*iParam2 = 7903;
					break;
				case 171:
					*iParam2 = 7904;
					break;
				case 172:
					*iParam2 = 7905;
					break;
				case 173:
					*iParam2 = 7906;
					break;
				case 174:
					*iParam2 = 7907;
					break;
				case 175:
					*iParam2 = 7908;
					break;
				case 176:
					*iParam2 = 8324;
					break;
				case 177:
					*iParam2 = 8325;
					break;
				case 178:
					*iParam2 = 8326;
					break;
				case 179:
					*iParam2 = 8327;
					break;
				case 180:
					*iParam2 = 8328;
					break;
				case 181:
					*iParam2 = 8329;
					break;
				case 182:
					*iParam2 = 8330;
					break;
				case 183:
					*iParam2 = 8331;
					break;
				case 184:
					*iParam2 = 8332;
					break;
				case 185:
					*iParam2 = 8333;
					break;
				case 186:
					*iParam2 = 8334;
					break;
				case 187:
					*iParam2 = 8335;
					break;
				case 188:
					*iParam2 = 8336;
					break;
				case 189:
					*iParam2 = 8337;
					break;
				case 190:
					*iParam2 = 8338;
					break;
				case 191:
					*iParam2 = 8339;
					break;
				case 192:
					*iParam2 = 8340;
					break;
				case 193:
					*iParam2 = 8341;
					break;
				case 194:
					*iParam2 = 8342;
					break;
				case 195:
					*iParam2 = 8343;
					break;
				case 196:
					*iParam2 = 8344;
					break;
				case 197:
					*iParam2 = 8345;
					break;
				case 198:
					*iParam2 = 8346;
					break;
				case 199:
					*iParam2 = 8347;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*iParam2 = 8348;
					break;
				case 201:
					*iParam2 = 8941;
					break;
				case 202:
					*iParam2 = 8942;
					break;
				case 203:
					*iParam2 = 8943;
					break;
				case 204:
					*iParam2 = 8944;
					break;
				case 205:
					*iParam2 = 8945;
					break;
				case 206:
					*iParam2 = 9444;
					break;
				case 207:
					*iParam2 = 9445;
					break;
				case 208:
					*iParam2 = 9446;
					break;
				case 209:
					*iParam2 = 9447;
					break;
				case 210:
					*iParam2 = 9448;
					break;
				case 211:
					*iParam2 = 9449;
					break;
				case 212:
					*iParam2 = 9450;
					break;
				case 213:
					*iParam2 = 9451;
					break;
				case 214:
					*iParam2 = 9452;
					break;
				case 215:
					*iParam2 = 9453;
					break;
				case 216:
					*iParam2 = 9454;
					break;
				case 217:
					*iParam2 = 9455;
					break;
				case 218:
					*iParam2 = 9456;
					break;
				case 219:
					*iParam2 = 9457;
					break;
				case 220:
					*iParam2 = 9458;
					break;
				case 221:
					*iParam2 = 9459;
					break;
				case 222:
					*iParam2 = 9460;
					break;
				case 223:
					*iParam2 = 9461;
					break;
				case 224:
					*iParam2 = 9462;
					break;
				case 225:
					*iParam2 = 9463;
					break;
				case 226:
					*iParam2 = 9464;
					break;
				case 227:
					*iParam2 = 9465;
					break;
				case 228:
					*iParam2 = 9466;
					break;
				case 229:
					*iParam2 = 9467;
					break;
				case 230:
					*iParam2 = 9468;
					break;
				default:
					break;
			}
			break;
	}
	*bParam3 = (iVar0 % 32);
	return *iParam2 != 11511;
}

bool func_249(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/][iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/][iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/][iParam3], bParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_4[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_4[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_4[iParam3], bParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_8[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_8[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_8[iParam3], bParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_12[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_12[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_12[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_16[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_16[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_16[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_20[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_20[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_20[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_24[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_24[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_24[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_28[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_28[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_28[iParam3], bParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_32[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_32[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_32[iParam3], bParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_36[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_36[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_36[iParam3], bParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_40[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_40[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_40[iParam3], bParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_44[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_44[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_44[iParam3], bParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_48[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_48[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_48[iParam3], bParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_52[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_52[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_52[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_56[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_56[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_56[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_60[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_60[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_60[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_64[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_64[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_64[iParam3], bParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_68[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_68[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_68[iParam3], bParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_72[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_72[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_72[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_76[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_76[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_76[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_80[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_80[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_80[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_84[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_84[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_84[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_88[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_88[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_88[iParam3], bParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_92[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_92[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_92[iParam3], bParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_96[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_96[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_96[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_100[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_100[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_100[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_104[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_104[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_104[iParam3], bParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_108[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_108[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_108[iParam3], bParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_112[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_112[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_112[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_116[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_116[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_116[iParam3], bParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_120[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_120[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_120[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_124[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_124[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_124[iParam3], bParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_128[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_128[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_128[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_132[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_132[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_132[iParam3], bParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_136[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_136[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_136[iParam3], bParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_140[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_140[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_140[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_144[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_144[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_144[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_148[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_148[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_148[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_152[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_152[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_152[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_156[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_156[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_156[iParam3], bParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_160[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_160[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_160[iParam3], bParam4);
		}
	}
	return false;
}

bool func_250(int iParam0)
{
	if (!UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, false))
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, true))
		{
			return false;
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 2))
		{
			return false;
		}
	}
	return true;
}

struct<14> func_251(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	func_314();
	if (iParam0 == joaat("PLAYER_ZERO"))
	{
		func_296(iParam1, bParam2);
	}
	else if (iParam0 == joaat("PLAYER_ONE"))
	{
		func_277(iParam1, bParam2);
	}
	else if (iParam0 == joaat("PLAYER_TWO"))
	{
		func_252(iParam1, bParam2);
	}
	return Global_76434[0 /*14*/];
}

void func_252(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			func_276(bParam1);
			break;
		case 2:
			func_275(bParam1);
			break;
		case 3:
			func_272(bParam1);
			break;
		case 4:
			func_271(bParam1);
			break;
		case 6:
			func_270(bParam1);
			break;
		case 5:
			func_269(bParam1);
			break;
		case 8:
			func_268(bParam1);
			break;
		case 9:
			func_267(bParam1);
			break;
		case 10:
			func_266(bParam1);
			break;
		case 1:
			func_265(bParam1);
			break;
		case 7:
			func_264(bParam1);
			break;
		case 11:
			func_263(bParam1);
			break;
		case 12:
			func_262(bParam1);
			break;
		case 13:
			func_261(bParam1);
			break;
		case 14:
			func_253(bParam1);
			break;
	}
}

void func_253(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		case 154:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		case 88:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		case 89:
			StringCopy(&cVar2, "PROPS_P2_E1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		case 90:
			StringCopy(&cVar2, "PROPS_P2_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 91:
			StringCopy(&cVar2, "PROPS_P2_E2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		case 92:
			StringCopy(&cVar2, "PROPS_P2_E2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 93:
			StringCopy(&cVar2, "PROPS_P2_E2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
		case 94:
			StringCopy(&cVar2, "PROPS_P2_E2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
		case 95:
			StringCopy(&cVar2, "PROPS_P2_E2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
		case 96:
			StringCopy(&cVar2, "PROPS_P2_E2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 97:
			StringCopy(&cVar2, "PROPS_P2_E2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 98:
			StringCopy(&cVar2, "PROPS_P2_E2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 99:
			StringCopy(&cVar2, "PROPS_P2_E2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 100:
			StringCopy(&cVar2, "PROPS_P2_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 101:
			StringCopy(&cVar2, "PROPS_P2_E3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 102:
			StringCopy(&cVar2, "PROPS_P2_E3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 103:
			StringCopy(&cVar2, "PROPS_P2_E3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 104:
			StringCopy(&cVar2, "PROPS_P2_E3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 105:
			StringCopy(&cVar2, "PROPS_P2_E3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 106:
			StringCopy(&cVar2, "PROPS_P2_E3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 107:
			StringCopy(&cVar2, "PROPS_P2_E3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 108:
			StringCopy(&cVar2, "PROPS_P2_E3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 109:
			StringCopy(&cVar2, "PROPS_P2_E3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 110:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 111:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 112:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 113:
			StringCopy(&cVar2, "PROPS_P2_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
		case 114:
			StringCopy(&cVar2, "PROPS_P2_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		case 115:
			StringCopy(&cVar2, "PROPS_P2_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
		case 116:
			StringCopy(&cVar2, "PROPS_P2_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
		case 117:
			StringCopy(&cVar2, "PROPS_P2_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 118:
			StringCopy(&cVar2, "PROPS_P2_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 119:
			StringCopy(&cVar2, "PROPS_P2_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 120:
			StringCopy(&cVar2, "PROPS_P2_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
		case 121:
			StringCopy(&cVar2, "PROPS_P2_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
		case 122:
			StringCopy(&cVar2, "PROPS_P2_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
		case 123:
			StringCopy(&cVar2, "PROPS_P2_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
		case 124:
			StringCopy(&cVar2, "PROPS_P2_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
		case 125:
			StringCopy(&cVar2, "PROPS_P2_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
		case 126:
			StringCopy(&cVar2, "PROPS_P2_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 127:
			StringCopy(&cVar2, "PROPS_P2_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		case 128:
			StringCopy(&cVar2, "PROPS_P2_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		case 129:
			StringCopy(&cVar2, "PROPS_P2_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		case 130:
			StringCopy(&cVar2, "PROPS_P2_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
		case 131:
			StringCopy(&cVar2, "PROPS_P2_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
		case 132:
			StringCopy(&cVar2, "PROPS_P2_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
		case 133:
			StringCopy(&cVar2, "PROPS_P2_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		case 134:
			StringCopy(&cVar2, "PROPS_P2_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
		case 135:
			StringCopy(&cVar2, "PROPS_P2_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
		case 136:
			StringCopy(&cVar2, "PROPS_P2_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
		case 137:
			StringCopy(&cVar2, "PROPS_P2_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 138:
			StringCopy(&cVar2, "PROPS_P2_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 139:
			StringCopy(&cVar2, "PROPS_P2_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 140:
			StringCopy(&cVar2, "PROPS_P2_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
		case 141:
			StringCopy(&cVar2, "PROPS_P2_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
		case 142:
			StringCopy(&cVar2, "PROPS_P2_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
		case 143:
			StringCopy(&cVar2, "PROPS_P2_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
		case 144:
			StringCopy(&cVar2, "PROPS_P2_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		case 145:
			StringCopy(&cVar2, "PROPS_P2_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
		case 146:
			StringCopy(&cVar2, "PROPS_P2_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 147:
			StringCopy(&cVar2, "PROPS_P2_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		case 148:
			StringCopy(&cVar2, "PROPS_P2_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 149:
			StringCopy(&cVar2, "PROPS_P2_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
		case 150:
			StringCopy(&cVar2, "PROPS_P2_E10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
		case 151:
			StringCopy(&cVar2, "PROPS_P2_E10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 152:
			StringCopy(&cVar2, "PROPS_P2_E10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
		case 153:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "PROPS_P2_H2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "PROPS_P2_H7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
		case 27:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
		case 36:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 37:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 38:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 39:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 40:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 41:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 47:
			StringCopy(&cVar2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 49:
			StringCopy(&cVar2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 50:
			StringCopy(&cVar2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 51:
			StringCopy(&cVar2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 52:
			StringCopy(&cVar2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 53:
			StringCopy(&cVar2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		case 54:
			StringCopy(&cVar2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 55:
			StringCopy(&cVar2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 56:
			StringCopy(&cVar2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 57:
			StringCopy(&cVar2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 58:
			StringCopy(&cVar2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 59:
			StringCopy(&cVar2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 60:
			StringCopy(&cVar2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 61:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 62:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 63:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 64:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 65:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 66:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 67:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 68:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 69:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 70:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 71:
			StringCopy(&cVar2, "PROPS_P1_H26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
		case 72:
			StringCopy(&cVar2, "PROPS_P1_H26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 73:
			StringCopy(&cVar2, "PROPS_P1_H26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 74:
			StringCopy(&cVar2, "PROPS_P1_H26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
		case 75:
			StringCopy(&cVar2, "PROPS_P1_H26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
		case 76:
			StringCopy(&cVar2, "PROPS_P1_H26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 77:
			StringCopy(&cVar2, "PROPS_P1_H26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
		case 78:
			StringCopy(&cVar2, "PROPS_P1_H26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
		case 79:
			StringCopy(&cVar2, "PROPS_P1_H26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 80:
			StringCopy(&cVar2, "PROPS_P1_H26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
		case 81:
			StringCopy(&cVar2, "PROPS_P1_H26_10", 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
		case 82:
			StringCopy(&cVar2, "PROPS_P1_H26_11", 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
		case 83:
			StringCopy(&cVar2, "PROPS_P1_H26_12", 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
		case 84:
			StringCopy(&cVar2, "PROPS_P1_H26_13", 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
		case 85:
			StringCopy(&cVar2, "PROPS_P1_H26_14", 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 86:
			StringCopy(&cVar2, "PROPS_P1_H26_15", 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 87:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		default:
			func_260(iVar10, bParam0, 155, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_254(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;

	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (bParam2 % 32);
	uParam0->f_2 = (bParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), bParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_259(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (UNK_0x12AB0310C2281427(bParam3) != UNK_0x12AB0310C2281427("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), false);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		}
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), true);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 6);
		if (func_93(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (UNK_0x1A5A491D253EA7BA(Global_2621444, joaat("REBREATHER"), false))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_258(Global_2621444, 1, 1, 1, -1))
			{
				UNK_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_258(Global_2621444, 2, 1, 1, -1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_258(Global_2621444, 1, 1, 1, -1))
			{
				UNK_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_258(Global_2621444, 2, 1, 1, -1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_258(Global_2621444, 1, 1, 1, -1))
			{
				UNK_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_258(Global_2621444, 2, 1, 1, -1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), false);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		if (func_249(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), true);
		}
		if (func_249(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
		if (!func_249(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), false);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_93(14))
			{
				return;
			}
			bVar0 = func_247(func_257(iParam1, uParam0->f_2), Global_76431, 0);
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, uParam0->f_1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), true);
			}
			bVar0 = func_247(func_256(iParam1, uParam0->f_2), Global_76431, 0);
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, uParam0->f_1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
			}
			if (func_255(iParam1, uParam0->f_2, &iVar1))
			{
				bVar0 = func_247(iVar1, Global_76431, 0);
				if (!UNK_0xEAE0D21A50E6C7F4(bVar0, uParam0->f_1))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
	}
}

bool func_255(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*iParam2 = 979;
					break;
				case 3:
					*iParam2 = 1429;
					break;
				case 4:
					*iParam2 = 995;
					break;
				case 6:
					*iParam2 = 1003;
					break;
				case 8:
					*iParam2 = 1430;
					break;
				case 9:
					*iParam2 = 1438;
					break;
				case 10:
					*iParam2 = 1440;
					break;
				case 1:
					*iParam2 = 1011;
					break;
				case 7:
					*iParam2 = 1441;
					break;
				case 11:
					*iParam2 = 987;
					break;
				case 14:
					*iParam2 = 1019;
					break;
				case 12:
					*iParam2 = 1030;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					*iParam2 = 980;
					break;
				case 4:
					*iParam2 = 996;
					break;
				case 6:
					*iParam2 = 1004;
					break;
				case 8:
					*iParam2 = 1431;
					break;
				case 9:
					*iParam2 = 1439;
					break;
				case 7:
					*iParam2 = 1442;
					break;
				case 11:
					*iParam2 = 988;
					break;
				case 14:
					*iParam2 = 1020;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					*iParam2 = 981;
					break;
				case 4:
					*iParam2 = 997;
					break;
				case 6:
					*iParam2 = 1005;
					break;
				case 8:
					*iParam2 = 1432;
					break;
				case 7:
					*iParam2 = 1443;
					break;
				case 11:
					*iParam2 = 989;
					break;
				case 14:
					*iParam2 = 1021;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 4:
					*iParam2 = 998;
					break;
				case 6:
					*iParam2 = 1006;
					break;
				case 8:
					*iParam2 = 1433;
					break;
				case 11:
					*iParam2 = 990;
					break;
				case 14:
					*iParam2 = 1022;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					*iParam2 = 999;
					break;
				case 6:
					*iParam2 = 1007;
					break;
				case 8:
					*iParam2 = 1434;
					break;
				case 11:
					*iParam2 = 991;
					break;
				case 14:
					*iParam2 = 1023;
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 4:
					*iParam2 = 1000;
					break;
				case 6:
					*iParam2 = 1008;
					break;
				case 8:
					*iParam2 = 1435;
					break;
				case 11:
					*iParam2 = 992;
					break;
				case 14:
					*iParam2 = 1024;
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 4:
					*iParam2 = 1001;
					break;
				case 6:
					*iParam2 = 1009;
					break;
				case 8:
					*iParam2 = 1436;
					break;
				case 11:
					*iParam2 = 993;
					break;
				case 14:
					*iParam2 = 1025;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 4:
					*iParam2 = 1002;
					break;
				case 6:
					*iParam2 = 1010;
					break;
				case 8:
					*iParam2 = 1437;
					break;
				case 11:
					*iParam2 = 994;
					break;
				case 14:
					*iParam2 = 1026;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 14:
					*iParam2 = 1027;
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 14:
					*iParam2 = 1028;
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 14:
					*iParam2 = 1029;
					break;
			}
			break;
	}
	return *iParam2 != 978;
}

int func_256(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
				case 3:
					return 1414;
				case 4:
					return 943;
				case 6:
					return 951;
				case 8:
					return 1415;
				case 9:
					return 1423;
				case 10:
					return 1425;
				case 1:
					return 959;
				case 7:
					return 1426;
				case 11:
					return 935;
				case 14:
					return 967;
				case 12:
					return 978;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
				case 4:
					return 944;
				case 6:
					return 952;
				case 8:
					return 1416;
				case 9:
					return 1424;
				case 7:
					return 1427;
				case 11:
					return 936;
				case 14:
					return 968;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					return 929;
				case 4:
					return 945;
				case 6:
					return 953;
				case 8:
					return 1417;
				case 7:
					return 1428;
				case 11:
					return 937;
				case 14:
					return 969;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 4:
					return 946;
				case 6:
					return 954;
				case 8:
					return 1418;
				case 11:
					return 938;
				case 14:
					return 970;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					return 947;
				case 6:
					return 955;
				case 8:
					return 1419;
				case 11:
					return 939;
				case 14:
					return 971;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 4:
					return 948;
				case 6:
					return 956;
				case 8:
					return 1420;
				case 11:
					return 940;
				case 14:
					return 972;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 4:
					return 949;
				case 6:
					return 957;
				case 8:
					return 1421;
				case 11:
					return 941;
				case 14:
					return 973;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 4:
					return 950;
				case 6:
					return 958;
				case 8:
					return 1422;
				case 11:
					return 942;
				case 14:
					return 974;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
			}
			break;
	}
	return 935;
}

int func_257(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
				case 3:
					return 1399;
				case 4:
					return 891;
				case 6:
					return 899;
				case 8:
					return 1400;
				case 9:
					return 1408;
				case 10:
					return 1410;
				case 1:
					return 907;
				case 7:
					return 1411;
				case 11:
					return 883;
				case 14:
					return 915;
				case 12:
					return 926;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
				case 4:
					return 892;
				case 6:
					return 900;
				case 8:
					return 1401;
				case 9:
					return 1409;
				case 7:
					return 1412;
				case 11:
					return 884;
				case 14:
					return 916;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					return 877;
				case 4:
					return 893;
				case 6:
					return 901;
				case 8:
					return 1402;
				case 7:
					return 1413;
				case 11:
					return 885;
				case 14:
					return 917;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 4:
					return 894;
				case 6:
					return 902;
				case 8:
					return 1403;
				case 11:
					return 886;
				case 14:
					return 918;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					return 895;
				case 6:
					return 903;
				case 8:
					return 1404;
				case 11:
					return 887;
				case 14:
					return 919;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 4:
					return 896;
				case 6:
					return 904;
				case 8:
					return 1405;
				case 11:
					return 888;
				case 14:
					return 920;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 4:
					return 897;
				case 6:
					return 905;
				case 8:
					return 1406;
				case 11:
					return 889;
				case 14:
					return 921;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 4:
					return 898;
				case 6:
					return 906;
				case 8:
					return 1407;
				case 11:
					return 890;
				case 14:
					return 922;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
			}
			break;
	}
	return 883;
}

bool func_258(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	iVar0 = Global_76431;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_248(bParam0, iParam1, &iVar2, &bVar1, bParam2, bParam3))
	{
		bVar3 = func_247(iVar2, iVar0, 0);
		return UNK_0xEAE0D21A50E6C7F4(bVar3, bVar1);
	}
	return false;
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
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
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
	}
	return 0;
}

void func_260(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;

	iVar0 = (bParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	bVar1 = Global_76434[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = UNK_0x84997C8C8A5848DD(bVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			UNK_0xA69F810DF7EA02E6(iVar17, &Var2);
			if (!UNK_0x232048AB4B0E0259(Var2))
			{
				if (iVar18 == (bParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_254(&(Global_76434[0 /*14*/]), iParam0, bParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_254(&(Global_76434[0 /*14*/]), iParam0, bParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		UNK_0x30BBA34DD235D7FE(&Var20);
		iVar39 = 0;
		iVar40 = UNK_0xF6900DA2D9CD7BC5(bVar1, 7, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			UNK_0x4F79808059300187(iVar38, &Var20);
			if (!UNK_0x232048AB4B0E0259(Var20))
			{
				if (iVar39 == (bParam1 - iParam2))
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_254(&(Global_76434[0 /*14*/]), iParam0, bParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, UNK_0x1A5A491D253EA7BA(Var20.f_1, joaat("OUTFIT_ONLY"), false), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		UNK_0x65C0659496B1CC14(&Var41);
		if (bParam3 != -1 && Global_76603)
		{
			UNK_0xFDEBA3FD0BF0D4AC(bParam3, &Var41);
			Global_2621444 = Var41.f_1;
			Global_2621445 = Var41;
			func_254(&(Global_76434[0 /*14*/]), iParam0, bParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, UNK_0x1A5A491D253EA7BA(Var41.f_1, joaat("OUTFIT_ONLY"), false), -1, 2, Var41.f_1 != 0);
			return;
		}
		iVar59 = 0;
		iVar60 = UNK_0xF6900DA2D9CD7BC5(bVar1, 7, -1, 0, -1, func_211(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			UNK_0xC578687D5A643830(iVar58, &Var41);
			if (!UNK_0x232048AB4B0E0259(Var41))
			{
				if (iVar59 == (bParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_254(&(Global_76434[0 /*14*/]), iParam0, bParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, UNK_0x1A5A491D253EA7BA(Var41.f_1, joaat("OUTFIT_ONLY"), false), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_261(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_260(iVar10, bParam0, 9, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_262(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "OUTFIT_P2_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "OUTFIT_P2_5", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "OUTFIT_P2_6", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "OUTFIT_P2_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "OUTFIT_P2_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "OUTFIT_P2_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 9:
			StringCopy(&cVar2, "OUTFIT_P2_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "OUTFIT_P2_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "OUTFIT_P2_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "OUTFIT_P2_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "OUTFIT_P2_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 14:
			StringCopy(&cVar2, "OUTFIT_P2_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		case 15:
			StringCopy(&cVar2, "OUTFIT_P2_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "OUTFIT_P2_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "OUTFIT_P2_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 18:
			StringCopy(&cVar2, "OUTFIT_P2_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 19:
			StringCopy(&cVar2, "OUTFIT_P2_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 20:
			StringCopy(&cVar2, "OUTFIT_P2_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "OUTFIT_P2_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "OUTFIT_P2_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 23:
			StringCopy(&cVar2, "OUTFIT_P2_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 24:
			StringCopy(&cVar2, "OUTFIT_P2_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
		case 25:
			StringCopy(&cVar2, "OUTFIT_P2_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
		case 26:
			StringCopy(&cVar2, "OUTFIT_P2_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
		case 27:
			StringCopy(&cVar2, "OUTFIT_P2_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
		case 28:
			StringCopy(&cVar2, "OUTFIT_P2_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
		case 29:
			StringCopy(&cVar2, "OUTFIT_P2_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
		case 30:
			StringCopy(&cVar2, "OUTFIT_P2_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
		case 31:
			StringCopy(&cVar2, "OUTFIT_P2_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
		case 32:
			StringCopy(&cVar2, "OUTFIT_P2_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
		case 33:
			StringCopy(&cVar2, "OUTFIT_P2_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
		case 34:
			StringCopy(&cVar2, "OUTFIT_P2_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		case 35:
			StringCopy(&cVar2, "OUTFIT_P2_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 36:
			StringCopy(&cVar2, "OUTFIT_P2_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		case 37:
			StringCopy(&cVar2, "OUTFIT_P2_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		case 38:
			StringCopy(&cVar2, "OUTFIT_P2_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		case 39:
			StringCopy(&cVar2, "OUTFIT_P2_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 40:
			StringCopy(&cVar2, "OUTFIT_P2_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		case 41:
			StringCopy(&cVar2, "OUTFIT_P2_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "OUTFIT_P2_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "OUTFIT_P2_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "OUTFIT_P2_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "OUTFIT_P2_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "OUTFIT_P2_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 47:
			StringCopy(&cVar2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_260(iVar10, bParam0, 48, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_263(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_260(iVar10, bParam0, 1, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_264(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_260(iVar10, bParam0, 1, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_265(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "BERD_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "BERD_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "BERD_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "BERD_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "BERD_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "BERD_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		default:
			func_260(iVar10, bParam0, 6, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_266(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		case 27:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		case 28:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
		case 29:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		default:
			func_260(iVar10, bParam0, 33, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_267(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "SPEC2_P0_08_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
		case 10:
			StringCopy(&cVar2, "SPEC2_P0_08_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
		case 11:
			StringCopy(&cVar2, "SPEC2_P0_08_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
		case 12:
			StringCopy(&cVar2, "SPEC2_P0_08_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
		case 13:
			StringCopy(&cVar2, "SPEC2_P0_08_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
		case 14:
			StringCopy(&cVar2, "SPEC2_P0_08_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
		case 15:
			StringCopy(&cVar2, "PROPS_P1_H8_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
		case 16:
			StringCopy(&cVar2, "PROPS_P1_H8_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
		default:
			func_260(iVar10, bParam0, 17, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_268(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "SPEC_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "SPEC_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_260(iVar10, bParam0, 18, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_269(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_260(iVar10, bParam0, 7, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_270(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "FEET_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "FEET_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
		case 2:
			StringCopy(&cVar2, "FEET_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
		case 3:
			StringCopy(&cVar2, "FEET_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
		case 4:
			StringCopy(&cVar2, "FEET_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
		case 5:
			StringCopy(&cVar2, "FEET_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
		case 6:
			StringCopy(&cVar2, "FEET_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
		case 7:
			StringCopy(&cVar2, "FEET_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "FEET_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "FEET_P2_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "FEET_P2_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "FEET_P2_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
		case 18:
			StringCopy(&cVar2, "FEET_P2_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
		case 19:
			StringCopy(&cVar2, "FEET_P2_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
		case 20:
			StringCopy(&cVar2, "FEET_P2_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 700;
			break;
		case 21:
			StringCopy(&cVar2, "FEET_P2_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
		case 22:
			StringCopy(&cVar2, "FEET_P2_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
		case 23:
			StringCopy(&cVar2, "FEET_P2_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 740;
			break;
		case 24:
			StringCopy(&cVar2, "FEET_P2_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
		case 25:
			StringCopy(&cVar2, "FEET_P2_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
		case 26:
			StringCopy(&cVar2, "FEET_P2_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
		case 27:
			StringCopy(&cVar2, "FEET_P2_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 700;
			break;
		case 28:
			StringCopy(&cVar2, "FEET_P2_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		case 36:
			StringCopy(&cVar2, "FEET_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		case 37:
			StringCopy(&cVar2, "FEET_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		case 38:
			StringCopy(&cVar2, "FEET_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		case 39:
			StringCopy(&cVar2, "FEET_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		case 40:
			StringCopy(&cVar2, "FEET_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		case 41:
			StringCopy(&cVar2, "FEET_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 42:
			StringCopy(&cVar2, "FEET_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		case 43:
			StringCopy(&cVar2, "FEET_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		case 44:
			StringCopy(&cVar2, "FEET_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		case 45:
			StringCopy(&cVar2, "FEET_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		case 46:
			StringCopy(&cVar2, "FEET_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		case 47:
			StringCopy(&cVar2, "FEET_P2_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		case 48:
			StringCopy(&cVar2, "FEET_P2_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		case 49:
			StringCopy(&cVar2, "FEET_P2_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		case 50:
			StringCopy(&cVar2, "FEET_P2_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		case 51:
			StringCopy(&cVar2, "FEET_P2_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		case 52:
			StringCopy(&cVar2, "FEET_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		case 53:
			StringCopy(&cVar2, "FEET_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		case 54:
			StringCopy(&cVar2, "FEET_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		case 55:
			StringCopy(&cVar2, "FEET_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		case 56:
			StringCopy(&cVar2, "FEET_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		case 57:
			StringCopy(&cVar2, "FEET_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 58:
			StringCopy(&cVar2, "FEET_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		case 59:
			StringCopy(&cVar2, "FEET_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		case 60:
			StringCopy(&cVar2, "FEET_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		case 61:
			StringCopy(&cVar2, "FEET_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		case 62:
			StringCopy(&cVar2, "FEET_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		case 63:
			StringCopy(&cVar2, "FEET_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		case 64:
			StringCopy(&cVar2, "FEET_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		case 65:
			StringCopy(&cVar2, "FEET_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		case 66:
			StringCopy(&cVar2, "FEET_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		case 67:
			StringCopy(&cVar2, "FEET_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		case 68:
			StringCopy(&cVar2, "FEET_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		case 69:
			StringCopy(&cVar2, "FEET_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		case 70:
			StringCopy(&cVar2, "FEET_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		case 71:
			StringCopy(&cVar2, "FEET_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		case 72:
			StringCopy(&cVar2, "FEET_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		case 73:
			StringCopy(&cVar2, "FEET_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		case 74:
			StringCopy(&cVar2, "FEET_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		case 75:
			StringCopy(&cVar2, "FEET_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		case 76:
			StringCopy(&cVar2, "FEET_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		case 77:
			StringCopy(&cVar2, "FEET_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		case 78:
			StringCopy(&cVar2, "FEET_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		case 79:
			StringCopy(&cVar2, "FEET_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		case 80:
			StringCopy(&cVar2, "FEET_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		case 81:
			StringCopy(&cVar2, "FEET_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		case 82:
			StringCopy(&cVar2, "FEET_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		case 83:
			StringCopy(&cVar2, "FEET_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		default:
			func_260(iVar10, bParam0, 84, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_271(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "LEGS_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "LEGS_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
		case 2:
			StringCopy(&cVar2, "LEGS_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
		case 3:
			StringCopy(&cVar2, "LEGS_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "LEGS_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "LEGS_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
		case 20:
			StringCopy(&cVar2, "LEGS_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
		case 21:
			StringCopy(&cVar2, "LEGS_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		case 22:
			StringCopy(&cVar2, "LEGS_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
		case 23:
			StringCopy(&cVar2, "LEGS_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
		case 24:
			StringCopy(&cVar2, "LEGS_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
		case 25:
			StringCopy(&cVar2, "LEGS_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
		case 26:
			StringCopy(&cVar2, "LEGS_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
		case 27:
			StringCopy(&cVar2, "LEGS_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
		case 28:
			StringCopy(&cVar2, "LEGS_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
		case 29:
			StringCopy(&cVar2, "LEGS_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&cVar2, "LEGS_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "LEGS_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 34:
			StringCopy(&cVar2, "LEGS_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&cVar2, "LEGS_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
		case 36:
			StringCopy(&cVar2, "LEGS_P2_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
		case 37:
			StringCopy(&cVar2, "LEGS_P2_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
		case 38:
			StringCopy(&cVar2, "LEGS_P2_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
		case 39:
			StringCopy(&cVar2, "LEGS_P2_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
		case 40:
			StringCopy(&cVar2, "LEGS_P2_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
		case 41:
			StringCopy(&cVar2, "LEGS_P2_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
		case 42:
			StringCopy(&cVar2, "LEGS_P2_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
		case 43:
			StringCopy(&cVar2, "LEGS_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "LEGS_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
		case 45:
			StringCopy(&cVar2, "LEGS_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
		case 46:
			StringCopy(&cVar2, "LEGS_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
		case 47:
			StringCopy(&cVar2, "LEGS_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
		case 48:
			StringCopy(&cVar2, "LEGS_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
		case 49:
			StringCopy(&cVar2, "LEGS_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
		case 50:
			StringCopy(&cVar2, "LEGS_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
		case 51:
			StringCopy(&cVar2, "LEGS_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
		case 52:
			StringCopy(&cVar2, "LEGS_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
		case 53:
			StringCopy(&cVar2, "LEGS_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
		case 54:
			StringCopy(&cVar2, "LEGS_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
		case 55:
			StringCopy(&cVar2, "LEGS_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
		case 56:
			StringCopy(&cVar2, "LEGS_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
		case 57:
			StringCopy(&cVar2, "LEGS_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
		case 58:
			StringCopy(&cVar2, "LEGS_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
		case 59:
			StringCopy(&cVar2, "LEGS_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
		case 60:
			StringCopy(&cVar2, "LEGS_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
		case 61:
			StringCopy(&cVar2, "LEGS_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
		case 62:
			StringCopy(&cVar2, "LEGS_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
		case 63:
			StringCopy(&cVar2, "LEGS_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
		case 64:
			StringCopy(&cVar2, "LEGS_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
		case 65:
			StringCopy(&cVar2, "LEGS_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
		case 66:
			StringCopy(&cVar2, "LEGS_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
		case 67:
			StringCopy(&cVar2, "LEGS_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
		case 68:
			StringCopy(&cVar2, "LEGS_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
		case 69:
			StringCopy(&cVar2, "LEGS_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
		case 70:
			StringCopy(&cVar2, "LEGS_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
		case 71:
			StringCopy(&cVar2, "LEGS_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
		case 72:
			StringCopy(&cVar2, "LEGS_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
		case 73:
			StringCopy(&cVar2, "LEGS_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
		case 74:
			StringCopy(&cVar2, "LEGS_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		case 75:
			StringCopy(&cVar2, "LEGS_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
		case 76:
			StringCopy(&cVar2, "LEGS_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		case 77:
			StringCopy(&cVar2, "LEGS_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
		case 78:
			StringCopy(&cVar2, "LEGS_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
		case 79:
			StringCopy(&cVar2, "LEGS_P2_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
		case 80:
			StringCopy(&cVar2, "LEGS_P2_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
		case 81:
			StringCopy(&cVar2, "LEGS_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		case 82:
			StringCopy(&cVar2, "LEGS_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
		case 83:
			StringCopy(&cVar2, "LEGS_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
		case 84:
			StringCopy(&cVar2, "LEGS_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
		case 85:
			StringCopy(&cVar2, "LEGS_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
		case 86:
			StringCopy(&cVar2, "LEGS_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
		case 87:
			StringCopy(&cVar2, "LEGS_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
		case 88:
			StringCopy(&cVar2, "LEGS_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
		case 89:
			StringCopy(&cVar2, "LEGS_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
		case 90:
			StringCopy(&cVar2, "LEGS_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
		case 91:
			StringCopy(&cVar2, "LEGS_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		case 92:
			StringCopy(&cVar2, "LEGS_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
		case 93:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 94:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		case 95:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		case 96:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		case 97:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		case 98:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		case 99:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		case 100:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		case 101:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		case 102:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		case 103:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		default:
			func_260(iVar10, bParam0, 104, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_272(bool bParam0)
{
	if (bParam0 < 136)
	{
		func_274(bParam0);
	}
	else
	{
		func_273(bParam0);
	}
	if (Global_76434[0 /*14*/].f_2 == -1)
	{
		func_260(3, bParam0, 242, -1);
	}
}

void func_273(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 136:
			StringCopy(&cVar2, "TORSO_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
		case 137:
			StringCopy(&cVar2, "TORSO_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
		case 138:
			StringCopy(&cVar2, "TORSO_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
		case 139:
			StringCopy(&cVar2, "TORSO_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
		case 140:
			StringCopy(&cVar2, "TORSO_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
		case 141:
			StringCopy(&cVar2, "TORSO_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
		case 142:
			StringCopy(&cVar2, "TORSO_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
		case 143:
			StringCopy(&cVar2, "TORSO_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
		case 144:
			StringCopy(&cVar2, "TORSO_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
		case 145:
			StringCopy(&cVar2, "TORSO_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
		case 146:
			StringCopy(&cVar2, "TORSO_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
		case 147:
			StringCopy(&cVar2, "TORSO_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
		case 148:
			StringCopy(&cVar2, "TORSO_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
		case 149:
			StringCopy(&cVar2, "TORSO_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
		case 150:
			StringCopy(&cVar2, "TORSO_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
		case 151:
			StringCopy(&cVar2, "TORSO_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
		case 152:
			StringCopy(&cVar2, "TORSO_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
		case 153:
			StringCopy(&cVar2, "TORSO_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
		case 154:
			StringCopy(&cVar2, "TORSO_P2_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
		case 155:
			StringCopy(&cVar2, "TORSO_P2_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
		case 156:
			StringCopy(&cVar2, "TORSO_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
		case 157:
			StringCopy(&cVar2, "TORSO_P2_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
		case 158:
			StringCopy(&cVar2, "TORSO_P2_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
		case 159:
			StringCopy(&cVar2, "TORSO_P2_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
		case 160:
			StringCopy(&cVar2, "TORSO_P2_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
		case 161:
			StringCopy(&cVar2, "TORSO_P2_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
		case 162:
			StringCopy(&cVar2, "TORSO_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
		case 163:
			StringCopy(&cVar2, "TORSO_P2_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
		case 164:
			StringCopy(&cVar2, "TORSO_P2_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
		case 165:
			StringCopy(&cVar2, "TORSO_P2_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
		case 166:
			StringCopy(&cVar2, "TORSO_P2_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
		case 167:
			StringCopy(&cVar2, "TORSO_P2_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
		case 168:
			StringCopy(&cVar2, "TORSO_P2_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
		case 169:
			StringCopy(&cVar2, "TORSO_P2_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
		case 170:
			StringCopy(&cVar2, "TORSO_P2_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
		case 171:
			StringCopy(&cVar2, "TORSO_P2_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
		case 172:
			StringCopy(&cVar2, "TORSO_P2_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
		case 173:
			StringCopy(&cVar2, "TORSO_P2_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
		case 174:
			StringCopy(&cVar2, "TORSO_P2_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
		case 175:
			StringCopy(&cVar2, "TORSO_P2_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
		case 176:
			StringCopy(&cVar2, "TORSO_P2_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
		case 177:
			StringCopy(&cVar2, "TORSO_P2_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
		case 178:
			StringCopy(&cVar2, "TORSO_P2_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
		case 179:
			StringCopy(&cVar2, "TORSO_P2_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
		case 180:
			StringCopy(&cVar2, "TORSO_P2_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
		case 181:
			StringCopy(&cVar2, "TORSO_P2_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
		case 182:
			StringCopy(&cVar2, "TORSO_P2_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
		case 183:
			StringCopy(&cVar2, "TORSO_P2_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
		case 184:
			StringCopy(&cVar2, "TORSO_P2_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
		case 185:
			StringCopy(&cVar2, "TORSO_P2_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
		case 186:
			StringCopy(&cVar2, "TORSO_P2_25_8", 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
		case 187:
			StringCopy(&cVar2, "TORSO_P2_25_9", 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
		case 188:
			StringCopy(&cVar2, "TORSO_P2_25_10", 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
		case 189:
			StringCopy(&cVar2, "TORSO_P2_25_11", 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
		case 190:
			StringCopy(&cVar2, "TORSO_P2_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		case 191:
			StringCopy(&cVar2, "TORSO_P2_26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		case 192:
			StringCopy(&cVar2, "TORSO_P2_26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		case 193:
			StringCopy(&cVar2, "TORSO_P2_26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		case 194:
			StringCopy(&cVar2, "TORSO_P2_26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		case 195:
			StringCopy(&cVar2, "TORSO_P2_26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		case 196:
			StringCopy(&cVar2, "TORSO_P2_26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		case 197:
			StringCopy(&cVar2, "TORSO_P2_26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		case 198:
			StringCopy(&cVar2, "TORSO_P2_26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		case 199:
			StringCopy(&cVar2, "TORSO_P2_26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		case 200:
			StringCopy(&cVar2, "TORSO_P2_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
		case 201:
			StringCopy(&cVar2, "TORSO_P2_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
		case 202:
			StringCopy(&cVar2, "TORSO_P2_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		case 203:
			StringCopy(&cVar2, "TORSO_P2_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
		case 204:
			StringCopy(&cVar2, "TORSO_P2_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		case 205:
			StringCopy(&cVar2, "TORSO_P2_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
		case 206:
			StringCopy(&cVar2, "TORSO_P2_27_6", 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
		case 207:
			StringCopy(&cVar2, "TORSO_P2_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
		case 208:
			StringCopy(&cVar2, "TORSO_P2_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
		case 209:
			StringCopy(&cVar2, "TORSO_P2_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
		case 210:
			StringCopy(&cVar2, "TORSO_P2_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		case 211:
			StringCopy(&cVar2, "TORSO_P2_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
		case 212:
			StringCopy(&cVar2, "TORSO_P2_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
		case 213:
			StringCopy(&cVar2, "TORSO_P2_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
		case 214:
			StringCopy(&cVar2, "TORSO_P2_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
		case 215:
			StringCopy(&cVar2, "TORSO_P2_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
		case 216:
			StringCopy(&cVar2, "TORSO_P2_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
		case 217:
			StringCopy(&cVar2, "TORSO_P2_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
		case 218:
			StringCopy(&cVar2, "TORSO_P2_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
		case 219:
			StringCopy(&cVar2, "TORSO_P2_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
		case 220:
			StringCopy(&cVar2, "TORSO_P2_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
		case 221:
			StringCopy(&cVar2, "TORSO_P2_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
		case 222:
			StringCopy(&cVar2, "TORSO_P2_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
		case 223:
			StringCopy(&cVar2, "TORSO_P2_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		case 224:
			StringCopy(&cVar2, "TORSO_P2_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		case 225:
			StringCopy(&cVar2, "TORSO_P2_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
		case 226:
			StringCopy(&cVar2, "TORSO_P2_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
		case 227:
			StringCopy(&cVar2, "TORSO_P2_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
		case 228:
			StringCopy(&cVar2, "TORSO_P2_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
		case 229:
			StringCopy(&cVar2, "TORSO_P2_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
		case 230:
			StringCopy(&cVar2, "TORSO_P2_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
		case 231:
			StringCopy(&cVar2, "TORSO_P2_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
		case 232:
			StringCopy(&cVar2, "TORSO_P2_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
		case 233:
			StringCopy(&cVar2, "TORSO_P2_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
		case 234:
			StringCopy(&cVar2, "TORSO_P2_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
		case 235:
			StringCopy(&cVar2, "TORSO_P2_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
		case 236:
			StringCopy(&cVar2, "TORSO_P2_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
		case 237:
			StringCopy(&cVar2, "TORSO_P2_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
		case 238:
			StringCopy(&cVar2, "TORSO_P2_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
		case 239:
			StringCopy(&cVar2, "TORSO_P2_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
		case 240:
			StringCopy(&cVar2, "TORSO_P2_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
		case 241:
			StringCopy(&cVar2, "TORSO_P2_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
		default:
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_274(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "TORSO_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "TORSO_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
		case 2:
			StringCopy(&cVar2, "TORSO_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "TORSO_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
		case 4:
			StringCopy(&cVar2, "TORSO_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
		case 5:
			StringCopy(&cVar2, "TORSO_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
		case 6:
			StringCopy(&cVar2, "TORSO_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
		case 7:
			StringCopy(&cVar2, "TORSO_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		case 8:
			StringCopy(&cVar2, "TORSO_P2_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		case 9:
			StringCopy(&cVar2, "TORSO_P2_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
		case 10:
			StringCopy(&cVar2, "TORSO_P2_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
		case 11:
			StringCopy(&cVar2, "TORSO_P2_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
		case 12:
			StringCopy(&cVar2, "TORSO_P2_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
		case 13:
			StringCopy(&cVar2, "TORSO_P2_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
		case 14:
			StringCopy(&cVar2, "TORSO_P2_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
		case 15:
			StringCopy(&cVar2, "TORSO_P2_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "TORSO_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
		case 19:
			StringCopy(&cVar2, "TORSO_P2_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
		case 20:
			StringCopy(&cVar2, "TORSO_P2_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
		case 21:
			StringCopy(&cVar2, "TORSO_P2_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
		case 22:
			StringCopy(&cVar2, "TORSO_P2_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
		case 23:
			StringCopy(&cVar2, "TORSO_P2_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
		case 24:
			StringCopy(&cVar2, "TORSO_P2_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
		case 25:
			StringCopy(&cVar2, "TORSO_P2_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
		case 26:
			StringCopy(&cVar2, "TORSO_P2_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
		case 27:
			StringCopy(&cVar2, "TORSO_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "TORSO_P2_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
		case 29:
			StringCopy(&cVar2, "TORSO_P2_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
		case 30:
			StringCopy(&cVar2, "TORSO_P2_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
		case 31:
			StringCopy(&cVar2, "TORSO_P2_4_4tu", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
		case 32:
			StringCopy(&cVar2, "TORSO_P2_4_5tu", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
		case 33:
			StringCopy(&cVar2, "TORSO_P2_4_6tu", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
		case 34:
			StringCopy(&cVar2, "TORSO_P2_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
		case 35:
			StringCopy(&cVar2, "TORSO_P2_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
		case 36:
			StringCopy(&cVar2, "TORSO_P2_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
		case 37:
			StringCopy(&cVar2, "TORSO_P2_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
		case 38:
			StringCopy(&cVar2, "TORSO_P2_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
		case 39:
			StringCopy(&cVar2, "TORSO_P2_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
		case 40:
			StringCopy(&cVar2, "TORSO_P2_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
		case 41:
			StringCopy(&cVar2, "TORSO_P2_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
		case 42:
			StringCopy(&cVar2, "TORSO_P2_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
		case 43:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 44:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 45:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 47:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 48:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		case 49:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 50:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 51:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 52:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 53:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 54:
			StringCopy(&cVar2, "TORSO_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 55:
			StringCopy(&cVar2, "TORSO_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		case 56:
			StringCopy(&cVar2, "TORSO_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
		case 57:
			StringCopy(&cVar2, "TORSO_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
		case 58:
			StringCopy(&cVar2, "TORSO_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
		case 59:
			StringCopy(&cVar2, "TORSO_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
		case 60:
			StringCopy(&cVar2, "TORSO_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
		case 61:
			StringCopy(&cVar2, "TORSO_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
		case 62:
			StringCopy(&cVar2, "TORSO_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
		case 63:
			StringCopy(&cVar2, "TORSO_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
		case 64:
			StringCopy(&cVar2, "TORSO_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
		case 65:
			StringCopy(&cVar2, "TORSO_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
		case 66:
			StringCopy(&cVar2, "TORSO_P2_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
		case 67:
			StringCopy(&cVar2, "TORSO_P2_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
		case 68:
			StringCopy(&cVar2, "TORSO_P2_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
		case 69:
			StringCopy(&cVar2, "TORSO_P2_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
		case 70:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		case 71:
			StringCopy(&cVar2, "TORSO_P2_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		case 72:
			StringCopy(&cVar2, "TORSO_P2_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
		case 73:
			StringCopy(&cVar2, "TORSO_P2_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
		case 74:
			StringCopy(&cVar2, "TORSO_P2_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
		case 75:
			StringCopy(&cVar2, "TORSO_P2_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
		case 76:
			StringCopy(&cVar2, "TORSO_P2_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
		case 77:
			StringCopy(&cVar2, "TORSO_P2_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
		case 78:
			StringCopy(&cVar2, "TORSO_P2_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
		case 79:
			StringCopy(&cVar2, "TORSO_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		case 80:
			StringCopy(&cVar2, "TORSO_P2_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
		case 81:
			StringCopy(&cVar2, "TORSO_P2_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
		case 82:
			StringCopy(&cVar2, "TORSO_P2_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
		case 83:
			StringCopy(&cVar2, "TORSO_P2_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
		case 84:
			StringCopy(&cVar2, "TORSO_P2_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
		case 85:
			StringCopy(&cVar2, "TORSO_P2_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
		case 86:
			StringCopy(&cVar2, "TORSO_P2_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
		case 87:
			StringCopy(&cVar2, "TORSO_P2_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
		case 88:
			StringCopy(&cVar2, "TORSO_P2_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		case 89:
			StringCopy(&cVar2, "TORSO_P2_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
		case 90:
			StringCopy(&cVar2, "TORSO_P2_14_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
		case 91:
			StringCopy(&cVar2, "TORSO_P2_14_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
		case 92:
			StringCopy(&cVar2, "TORSO_P2_14_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
		case 93:
			StringCopy(&cVar2, "TORSO_P2_14_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
		case 94:
			StringCopy(&cVar2, "TORSO_P2_14_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
		case 95:
			StringCopy(&cVar2, "TORSO_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 96:
			StringCopy(&cVar2, "TORSO_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 97:
			StringCopy(&cVar2, "TORSO_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 98:
			StringCopy(&cVar2, "TORSO_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		case 99:
			StringCopy(&cVar2, "TORSO_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
		case 100:
			StringCopy(&cVar2, "TORSO_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
		case 101:
			StringCopy(&cVar2, "TORSO_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
		case 102:
			StringCopy(&cVar2, "TORSO_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
		case 103:
			StringCopy(&cVar2, "TORSO_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
		case 104:
			StringCopy(&cVar2, "TORSO_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
		case 105:
			StringCopy(&cVar2, "TORSO_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
		case 106:
			StringCopy(&cVar2, "TORSO_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
		case 107:
			StringCopy(&cVar2, "TORSO_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
		case 108:
			StringCopy(&cVar2, "TORSO_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
		case 109:
			StringCopy(&cVar2, "TORSO_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
		case 110:
			StringCopy(&cVar2, "TORSO_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
		case 111:
			StringCopy(&cVar2, "TORSO_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
		case 112:
			StringCopy(&cVar2, "TORSO_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
		case 113:
			StringCopy(&cVar2, "TORSO_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
		case 114:
			StringCopy(&cVar2, "TORSO_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
		case 115:
			StringCopy(&cVar2, "TORSO_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
		case 116:
			StringCopy(&cVar2, "TORSO_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
		case 117:
			StringCopy(&cVar2, "TORSO_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
		case 118:
			StringCopy(&cVar2, "TORSO_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
		case 119:
			StringCopy(&cVar2, "TORSO_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
		case 120:
			StringCopy(&cVar2, "TORSO_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
		case 121:
			StringCopy(&cVar2, "TORSO_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
		case 122:
			StringCopy(&cVar2, "TORSO_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
		case 123:
			StringCopy(&cVar2, "TORSO_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
		case 124:
			StringCopy(&cVar2, "TORSO_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
		case 125:
			StringCopy(&cVar2, "TORSO_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
		case 126:
			StringCopy(&cVar2, "TORSO_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
		case 127:
			StringCopy(&cVar2, "TORSO_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
		case 128:
			StringCopy(&cVar2, "TORSO_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
		case 129:
			StringCopy(&cVar2, "TORSO_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
		case 130:
			StringCopy(&cVar2, "TORSO_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
		case 131:
			StringCopy(&cVar2, "TORSO_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
		case 132:
			StringCopy(&cVar2, "TORSO_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
		case 133:
			StringCopy(&cVar2, "TORSO_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
		case 134:
			StringCopy(&cVar2, "TORSO_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
		case 135:
			StringCopy(&cVar2, "TORSO_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
		default:
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_275(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "HAIR_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "HAIR_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "HAIR_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "HAIR_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "HAIR_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "HAIR_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "HAIR_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "HAIR_P2_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "HAIR_P2_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		default:
			func_260(iVar10, bParam0, 9, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_276(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		default:
			func_260(iVar10, bParam0, 7, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_277(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			func_295(bParam1);
			break;
		case 2:
			func_294(bParam1);
			break;
		case 3:
			func_290(bParam1);
			break;
		case 4:
			func_289(bParam1);
			break;
		case 6:
			func_288(bParam1);
			break;
		case 5:
			func_287(bParam1);
			break;
		case 8:
			func_286(bParam1);
			break;
		case 9:
			func_285(bParam1);
			break;
		case 10:
			func_284(bParam1);
			break;
		case 1:
			func_283(bParam1);
			break;
		case 7:
			func_282(bParam1);
			break;
		case 11:
			func_281(bParam1);
			break;
		case 12:
			func_280(bParam1);
			break;
		case 13:
			func_279(bParam1);
			break;
		case 14:
			func_278(bParam1);
			break;
	}
}

void func_278(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		case 158:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		case 159:
			StringCopy(&cVar2, "PROPS_P1_EA1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
		case 160:
			StringCopy(&cVar2, "PROPS_P1_EA1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
		case 161:
			StringCopy(&cVar2, "PROPS_P1_EA1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
		case 162:
			StringCopy(&cVar2, "PROPS_P1_EA1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
		case 163:
			StringCopy(&cVar2, "PROPS_P1_EA1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
		case 164:
			StringCopy(&cVar2, "PROPS_P1_EA1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		case 165:
			StringCopy(&cVar2, "PROPS_P1_EA1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		case 166:
			StringCopy(&cVar2, "PROPS_P1_EA1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
		case 167:
			StringCopy(&cVar2, "PROPS_P1_EA2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
		case 168:
			StringCopy(&cVar2, "PROPS_P1_EA2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
		case 169:
			StringCopy(&cVar2, "PROPS_P1_EA2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
		case 170:
			StringCopy(&cVar2, "PROPS_P1_EA2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
		case 171:
			StringCopy(&cVar2, "PROPS_P1_EA2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
		case 172:
			StringCopy(&cVar2, "PROPS_P1_EA2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		case 173:
			StringCopy(&cVar2, "PROPS_P1_EA2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		case 174:
			StringCopy(&cVar2, "PROPS_P1_EA2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
		case 82:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		case 83:
			StringCopy(&cVar2, "PROPS_P1_E1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 84:
			StringCopy(&cVar2, "PROPS_P1_E1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 85:
			StringCopy(&cVar2, "PROPS_P1_E1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 86:
			StringCopy(&cVar2, "PROPS_P1_E1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 87:
			StringCopy(&cVar2, "PROPS_P1_E1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 88:
			StringCopy(&cVar2, "PROPS_P1_E1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 89:
			StringCopy(&cVar2, "PROPS_P1_E1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 90:
			StringCopy(&cVar2, "PROPS_P1_E1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 91:
			StringCopy(&cVar2, "PROPS_P1_E1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 92:
			StringCopy(&cVar2, "PROPS_P1_E1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 93:
			StringCopy(&cVar2, "PROPS_P1_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 94:
			StringCopy(&cVar2, "PROPS_P1_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		case 95:
			StringCopy(&cVar2, "PROPS_P1_E4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
		case 96:
			StringCopy(&cVar2, "PROPS_P1_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
		case 97:
			StringCopy(&cVar2, "PROPS_P1_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
		case 98:
			StringCopy(&cVar2, "PROPS_P1_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
		case 99:
			StringCopy(&cVar2, "PROPS_P1_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
		case 100:
			StringCopy(&cVar2, "PROPS_P1_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
		case 101:
			StringCopy(&cVar2, "PROPS_P1_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
		case 102:
			StringCopy(&cVar2, "PROPS_P1_E5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		case 103:
			StringCopy(&cVar2, "PROPS_P1_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
		case 104:
			StringCopy(&cVar2, "PROPS_P1_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
		case 105:
			StringCopy(&cVar2, "PROPS_P1_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
		case 106:
			StringCopy(&cVar2, "PROPS_P1_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
		case 107:
			StringCopy(&cVar2, "PROPS_P1_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
		case 108:
			StringCopy(&cVar2, "PROPS_P1_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
		case 109:
			StringCopy(&cVar2, "PROPS_P1_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
		case 110:
			StringCopy(&cVar2, "PROPS_P1_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
		case 111:
			StringCopy(&cVar2, "PROPS_P1_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		case 112:
			StringCopy(&cVar2, "PROPS_P1_E6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 113:
			StringCopy(&cVar2, "PROPS_P1_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 114:
			StringCopy(&cVar2, "PROPS_P1_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 115:
			StringCopy(&cVar2, "PROPS_P1_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 116:
			StringCopy(&cVar2, "PROPS_P1_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		case 117:
			StringCopy(&cVar2, "PROPS_P1_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
		case 118:
			StringCopy(&cVar2, "PROPS_P1_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 119:
			StringCopy(&cVar2, "PROPS_P1_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		case 120:
			StringCopy(&cVar2, "PROPS_P1_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
		case 121:
			StringCopy(&cVar2, "PROPS_P1_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
		case 122:
			StringCopy(&cVar2, "PROPS_P1_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
		case 123:
			StringCopy(&cVar2, "PROPS_P1_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
		case 124:
			StringCopy(&cVar2, "PROPS_P1_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
		case 125:
			StringCopy(&cVar2, "PROPS_P1_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
		case 126:
			StringCopy(&cVar2, "PROPS_P1_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
		case 127:
			StringCopy(&cVar2, "PROPS_P1_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
		case 128:
			StringCopy(&cVar2, "PROPS_P1_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
		case 129:
			StringCopy(&cVar2, "PROPS_P1_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
		case 130:
			StringCopy(&cVar2, "PROPS_P1_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
		case 131:
			StringCopy(&cVar2, "PROPS_P1_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		case 132:
			StringCopy(&cVar2, "PROPS_P1_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
		case 133:
			StringCopy(&cVar2, "PROPS_P1_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
		case 134:
			StringCopy(&cVar2, "PROPS_P1_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
		case 135:
			StringCopy(&cVar2, "PROPS_P1_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
		case 136:
			StringCopy(&cVar2, "PROPS_P1_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
		case 137:
			StringCopy(&cVar2, "PROPS_P1_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
		case 138:
			StringCopy(&cVar2, "PROPS_P1_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
		case 139:
			StringCopy(&cVar2, "PROPS_P1_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
		case 140:
			StringCopy(&cVar2, "PROPS_P1_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		case 141:
			StringCopy(&cVar2, "PROPS_P1_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
		case 142:
			StringCopy(&cVar2, "PROPS_P1_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
		case 143:
			StringCopy(&cVar2, "PROPS_P1_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
		case 144:
			StringCopy(&cVar2, "PROPS_P1_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		case 145:
			StringCopy(&cVar2, "PROPS_P1_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
		case 146:
			StringCopy(&cVar2, "PROPS_P1_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
		case 147:
			StringCopy(&cVar2, "PROPS_P1_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 148:
			StringCopy(&cVar2, "PROPS_P1_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
		case 149:
			StringCopy(&cVar2, "PROPS_P1_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
		case 150:
			StringCopy(&cVar2, "PROPS_P1_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
		case 151:
			StringCopy(&cVar2, "PROPS_P1_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
		case 152:
			StringCopy(&cVar2, "PROPS_P1_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
		case 153:
			StringCopy(&cVar2, "PROPS_P1_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
		case 154:
			StringCopy(&cVar2, "PROPS_P1_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
		case 155:
			StringCopy(&cVar2, "PROPS_P1_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
		case 156:
			StringCopy(&cVar2, "PROPS_P1_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
		case 157:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		case 10:
			StringCopy(&cVar2, "PROPS_P1_H0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "PROPS_P1_H3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 26:
			StringCopy(&cVar2, "PROPS_P1_H8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 27:
			StringCopy(&cVar2, "PROPS_P1_H8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "PROPS_P1_H9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "PROPS_P1_H9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 30:
			StringCopy(&cVar2, "PROPS_P1_H10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 31:
			StringCopy(&cVar2, "PROPS_P1_H10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 32:
			StringCopy(&cVar2, "PROPS_P1_H11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "PROPS_P1_H12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 34:
			StringCopy(&cVar2, "PROPS_P1_H12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 35:
			StringCopy(&cVar2, "PROPS_P1_H13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 36:
			StringCopy(&cVar2, "PROPS_P1_H13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 37:
			StringCopy(&cVar2, "PROPS_P1_H14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 38:
			StringCopy(&cVar2, "PROPS_P1_H14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 39:
			StringCopy(&cVar2, "PROPS_P1_H14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 40:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 41:
			StringCopy(&cVar2, "PROPS_P1_H19_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "PROPS_P1_H19_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "PROPS_P1_H19_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "PROPS_P1_H19_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "PROPS_P1_H19_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "PROPS_P1_H19_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 47:
			StringCopy(&cVar2, "PROPS_P1_H19_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "PROPS_P1_H19_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			break;
		case 49:
			StringCopy(&cVar2, "PROPS_P1_H19_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			break;
		case 50:
			StringCopy(&cVar2, "PROPS_P1_H19_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			break;
		case 51:
			StringCopy(&cVar2, "PROPS_P1_H19_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			break;
		case 52:
			StringCopy(&cVar2, "PROPS_P1_H19_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			break;
		case 53:
			StringCopy(&cVar2, "PROPS_P1_H19_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			break;
		case 54:
			StringCopy(&cVar2, "PROPS_P1_H19_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			break;
		case 55:
			StringCopy(&cVar2, "PROPS_P1_H19_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			break;
		case 56:
			StringCopy(&cVar2, "PROPS_P1_H19_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			break;
		case 57:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 58:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 59:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 60:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 61:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 62:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 63:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 64:
			StringCopy(&cVar2, "PROPS_P1_H19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			break;
		case 65:
			StringCopy(&cVar2, "PROPS_P1_H19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			break;
		case 66:
			StringCopy(&cVar2, "PROPS_P1_H19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			break;
		case 67:
			StringCopy(&cVar2, "PROPS_P1_H19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			break;
		case 68:
			StringCopy(&cVar2, "PROPS_P1_H19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			break;
		case 69:
			StringCopy(&cVar2, "PROPS_P1_H19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			break;
		case 70:
			StringCopy(&cVar2, "PROPS_P1_H19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			break;
		case 71:
			StringCopy(&cVar2, "PROPS_P1_H19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			break;
		case 72:
			StringCopy(&cVar2, "PROPS_P1_H19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			break;
		case 73:
			StringCopy(&cVar2, "PROPS_P1_H19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			break;
		case 74:
			StringCopy(&cVar2, "PROPS_P1_H19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 75:
			StringCopy(&cVar2, "PROPS_P1_H19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 76:
			StringCopy(&cVar2, "PROPS_P1_H19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			break;
		case 77:
			StringCopy(&cVar2, "PROPS_P1_H19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			break;
		case 78:
			StringCopy(&cVar2, "PROPS_P1_H19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			break;
		case 79:
			StringCopy(&cVar2, "PROPS_P1_H19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			break;
		case 80:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 81:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		default:
			func_260(iVar10, bParam0, 175, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_279(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_260(iVar10, bParam0, 9, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_280(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "OUTFIT_P1_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&cVar2, "OUTFIT_P1_2", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "OUTFIT_P1_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "OUTFIT_P1_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "OUTFIT_P1_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "OUTFIT_P1_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "OUTFIT_P1_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 9:
			StringCopy(&cVar2, "OUTFIT_P1_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "OUTFIT_P1_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "OUTFIT_P1_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		case 12:
			StringCopy(&cVar2, "OUTFIT_P1_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "OUTFIT_P1_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 14:
			StringCopy(&cVar2, "OUTFIT_P1_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 15:
			StringCopy(&cVar2, "OUTFIT_P1_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 16:
			StringCopy(&cVar2, "OUTFIT_P1_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "OUTFIT_P1_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "OUTFIT_P1_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "OUTFIT_P1_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "OUTFIT_P1_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "OUTFIT_P1_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "OUTFIT_P1_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		case 23:
			StringCopy(&cVar2, "OUTFIT_P1_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		case 24:
			StringCopy(&cVar2, "OUTFIT_P1_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		case 25:
			StringCopy(&cVar2, "OUTFIT_P1_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
		case 26:
			StringCopy(&cVar2, "OUTFIT_P1_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		case 27:
			StringCopy(&cVar2, "OUTFIT_P1_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		case 28:
			StringCopy(&cVar2, "OUTFIT_P1_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		case 29:
			StringCopy(&cVar2, "OUTFIT_P1_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		case 30:
			StringCopy(&cVar2, "OUTFIT_P1_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		case 31:
			StringCopy(&cVar2, "OUTFIT_P1_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		case 32:
			StringCopy(&cVar2, "OUTFIT_P1_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		case 33:
			StringCopy(&cVar2, "OUTFIT_P1_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 34:
			StringCopy(&cVar2, "OUTFIT_P1_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 35:
			StringCopy(&cVar2, "OUTFIT_P1_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 36:
			StringCopy(&cVar2, "OUTFIT_P1_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 37:
			StringCopy(&cVar2, "OUTFIT_P1_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 38:
			StringCopy(&cVar2, "OUTFIT_P1_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		case 39:
			StringCopy(&cVar2, "OUTFIT_P1_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		case 40:
			StringCopy(&cVar2, "OUTFIT_P1_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		case 41:
			StringCopy(&cVar2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "OUTFIT_P1_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "OUTFIT_P1_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "OUTFIT_P1_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "OUTFIT_P1_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "OUTFIT_P1_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_260(iVar10, bParam0, 47, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_281(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		case 5:
			StringCopy(&cVar2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		case 7:
			StringCopy(&cVar2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		case 8:
			StringCopy(&cVar2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		case 9:
			StringCopy(&cVar2, "JBIB_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "JBIB_P1_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		case 11:
			StringCopy(&cVar2, "JBIB_P1_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		case 12:
			StringCopy(&cVar2, "JBIB_P1_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		case 13:
			StringCopy(&cVar2, "JBIB_P1_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		case 14:
			StringCopy(&cVar2, "JBIB_P1_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		case 15:
			StringCopy(&cVar2, "JBIB_P1_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
		case 16:
			StringCopy(&cVar2, "JBIB_P1_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
		case 17:
			StringCopy(&cVar2, "JBIB_P1_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
		case 18:
			StringCopy(&cVar2, "JBIB_P1_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
		case 19:
			StringCopy(&cVar2, "JBIB_P1_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
		case 20:
			StringCopy(&cVar2, "JBIB_P1_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
		case 21:
			StringCopy(&cVar2, "JBIB_P1_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
		case 22:
			StringCopy(&cVar2, "JBIB_P1_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
		case 23:
			StringCopy(&cVar2, "JBIB_P1_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
		case 24:
			StringCopy(&cVar2, "JBIB_P1_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
		case 25:
			StringCopy(&cVar2, "JBIB_P1_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 26:
			StringCopy(&cVar2, "JBIB_P1_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		case 27:
			StringCopy(&cVar2, "JBIB_P1_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		case 28:
			StringCopy(&cVar2, "JBIB_P1_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		case 29:
			StringCopy(&cVar2, "JBIB_P1_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		case 30:
			StringCopy(&cVar2, "JBIB_P1_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		case 31:
			StringCopy(&cVar2, "JBIB_P1_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		case 32:
			StringCopy(&cVar2, "JBIB_P1_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
		case 33:
			StringCopy(&cVar2, "JBIB_P1_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
		case 34:
			StringCopy(&cVar2, "JBIB_P1_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
		case 35:
			StringCopy(&cVar2, "JBIB_P1_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
		case 36:
			StringCopy(&cVar2, "JBIB_P1_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
		case 37:
			StringCopy(&cVar2, "JBIB_P1_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
		case 38:
			StringCopy(&cVar2, "JBIB_P1_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
		case 39:
			StringCopy(&cVar2, "JBIB_P1_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
		case 40:
			StringCopy(&cVar2, "JBIB_P1_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
		case 41:
			StringCopy(&cVar2, "JBIB_P1_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "JBIB_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "JBIB_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		case 44:
			StringCopy(&cVar2, "JBIB_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "JBIB_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "JBIB_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 47:
			StringCopy(&cVar2, "JBIB_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "JBIB_P1_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
		case 49:
			StringCopy(&cVar2, "JBIB_P1_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
		case 50:
			StringCopy(&cVar2, "JBIB_P1_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
		case 51:
			StringCopy(&cVar2, "JBIB_P1_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
		case 52:
			StringCopy(&cVar2, "JBIB_P1_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
		case 53:
			StringCopy(&cVar2, "JBIB_P1_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
		case 54:
			StringCopy(&cVar2, "JBIB_P1_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
		case 55:
			StringCopy(&cVar2, "JBIB_P1_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
		case 56:
			StringCopy(&cVar2, "JBIB_P1_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
		case 57:
			StringCopy(&cVar2, "JBIB_P1_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
		case 58:
			StringCopy(&cVar2, "JBIB_P1_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
		case 59:
			StringCopy(&cVar2, "JBIB_P1_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
		case 60:
			StringCopy(&cVar2, "JBIB_P1_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
		case 61:
			StringCopy(&cVar2, "JBIB_P1_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
		case 62:
			StringCopy(&cVar2, "JBIB_P1_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
		default:
			func_260(iVar10, bParam0, 63, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_282(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_260(iVar10, bParam0, 1, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_283(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "BERD_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "BERD_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "BERD_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "BERD_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "BERD_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		default:
			func_260(iVar10, bParam0, 5, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_284(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
		case 27:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
		case 28:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
		case 29:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		case 36:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		case 37:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		case 38:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		case 39:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		case 40:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		case 41:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		case 42:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		case 43:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		case 44:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		case 45:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		case 47:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		case 49:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		case 50:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		case 51:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 52:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		default:
			func_260(iVar10, bParam0, 53, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_285(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "SPEC2_P0_08_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
		case 6:
			StringCopy(&cVar2, "SPEC2_P0_08_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
		case 7:
			StringCopy(&cVar2, "SPEC2_P0_08_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
		case 8:
			StringCopy(&cVar2, "SPEC2_P0_08_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
		case 9:
			StringCopy(&cVar2, "SPEC2_P0_08_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
		case 10:
			StringCopy(&cVar2, "SPEC2_P0_08_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		default:
			func_260(iVar10, bParam0, 12, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_286(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "SPEC_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "SPEC_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
		case 12:
			StringCopy(&cVar2, "SPEC_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
		case 13:
			StringCopy(&cVar2, "SPEC_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
		case 14:
			StringCopy(&cVar2, "SPEC_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
		case 15:
			StringCopy(&cVar2, "SPEC_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
		case 16:
			StringCopy(&cVar2, "SPEC_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
		case 17:
			StringCopy(&cVar2, "SPEC_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
		case 18:
			StringCopy(&cVar2, "SPEC_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
		case 19:
			StringCopy(&cVar2, "SPEC_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
		case 20:
			StringCopy(&cVar2, "SPEC_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
		case 21:
			StringCopy(&cVar2, "SPEC_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
		case 22:
			StringCopy(&cVar2, "SPEC_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
		case 23:
			StringCopy(&cVar2, "SPEC_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		case 27:
			StringCopy(&cVar2, "SPEC_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "SPEC_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		case 29:
			StringCopy(&cVar2, "SPEC_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		case 30:
			StringCopy(&cVar2, "SPEC_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		case 31:
			StringCopy(&cVar2, "SPEC_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		case 32:
			StringCopy(&cVar2, "SPEC_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		case 33:
			StringCopy(&cVar2, "SPEC_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		case 34:
			StringCopy(&cVar2, "SPEC_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		case 35:
			StringCopy(&cVar2, "SPEC_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		case 36:
			StringCopy(&cVar2, "SPEC_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		case 37:
			StringCopy(&cVar2, "SPEC_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		case 38:
			StringCopy(&cVar2, "SPEC_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		case 39:
			StringCopy(&cVar2, "SPEC_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		case 40:
			StringCopy(&cVar2, "SPEC_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		case 41:
			StringCopy(&cVar2, "SPEC_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		case 42:
			StringCopy(&cVar2, "SPEC_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		case 43:
			StringCopy(&cVar2, "SPEC_P1_15_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "SPEC_P1_15_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
		case 45:
			StringCopy(&cVar2, "SPEC_P1_15_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
		case 46:
			StringCopy(&cVar2, "SPEC_P1_15_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
		case 47:
			StringCopy(&cVar2, "SPEC_P1_15_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
		case 48:
			StringCopy(&cVar2, "SPEC_P1_15_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
		case 49:
			StringCopy(&cVar2, "SPEC_P1_15_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
		case 50:
			StringCopy(&cVar2, "SPEC_P1_15_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
		case 51:
			StringCopy(&cVar2, "SPEC_P1_15_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
		case 52:
			StringCopy(&cVar2, "SPEC_P1_15_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
		case 53:
			StringCopy(&cVar2, "SPEC_P1_15_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
		case 54:
			StringCopy(&cVar2, "SPEC_P1_15_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
		case 55:
			StringCopy(&cVar2, "SPEC_P1_15_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
		case 56:
			StringCopy(&cVar2, "SPEC_P1_15_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
		case 57:
			StringCopy(&cVar2, "SPEC_P1_15_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
		case 58:
			StringCopy(&cVar2, "SPEC_P1_15_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
		case 59:
			StringCopy(&cVar2, "SPEC_P1_15_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		case 60:
			StringCopy(&cVar2, "SPEC_P1_15_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		case 61:
			StringCopy(&cVar2, "SPEC_P1_15_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		case 62:
			StringCopy(&cVar2, "SPEC_P1_15_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
		case 63:
			StringCopy(&cVar2, "SPEC_P1_15_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
		case 64:
			StringCopy(&cVar2, "SPEC_P1_15_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
		case 65:
			StringCopy(&cVar2, "SPEC_P1_15_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
		case 66:
			StringCopy(&cVar2, "SPEC_P1_15_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
		case 67:
			StringCopy(&cVar2, "SPEC_P1_15_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
		case 68:
			StringCopy(&cVar2, "SPEC_P1_15_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
		case 69:
			StringCopy(&cVar2, "SPEC_P1_15_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
		case 70:
			StringCopy(&cVar2, "SPEC_P1_15_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
		case 71:
			StringCopy(&cVar2, "SPEC_P1_15_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
		case 72:
			StringCopy(&cVar2, "SPEC_P1_15_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
		case 73:
			StringCopy(&cVar2, "SPEC_P1_15_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
		case 74:
			StringCopy(&cVar2, "SPEC_P1_15_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
		case 75:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		case 76:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		default:
			func_260(iVar10, bParam0, 77, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_287(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_260(iVar10, bParam0, 7, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_288(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "FEET_P1_00_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "FEET_P1_00_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
		case 2:
			StringCopy(&cVar2, "FEET_P1_00_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
		case 3:
			StringCopy(&cVar2, "FEET_P1_00_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
		case 4:
			StringCopy(&cVar2, "FEET_P1_00_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
		case 5:
			StringCopy(&cVar2, "FEET_P1_00_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
		case 6:
			StringCopy(&cVar2, "FEET_P1_00_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
		case 7:
			StringCopy(&cVar2, "FEET_P1_00_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
		case 8:
			StringCopy(&cVar2, "FEET_P1_00_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
		case 9:
			StringCopy(&cVar2, "FEET_P1_00_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		case 10:
			StringCopy(&cVar2, "FEET_P1_00_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
		case 11:
			StringCopy(&cVar2, "FEET_P1_00_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
		case 12:
			StringCopy(&cVar2, "FEET_P1_01_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "FEET_P1_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "FEET_P1_06_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
		case 20:
			StringCopy(&cVar2, "FEET_P1_06_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
		case 21:
			StringCopy(&cVar2, "FEET_P1_06_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
		case 22:
			StringCopy(&cVar2, "FEET_P1_06_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
		case 23:
			StringCopy(&cVar2, "FEET_P1_06_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 25:
			StringCopy(&cVar2, "FEET_P1_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
		case 26:
			StringCopy(&cVar2, "FEET_P1_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
		case 27:
			StringCopy(&cVar2, "FEET_P1_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
		case 28:
			StringCopy(&cVar2, "FEET_P1_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
		case 29:
			StringCopy(&cVar2, "FEET_P1_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
		case 30:
			StringCopy(&cVar2, "FEET_P1_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
		case 31:
			StringCopy(&cVar2, "FEET_P1_08_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
		case 32:
			StringCopy(&cVar2, "FEET_P1_08_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
		case 33:
			StringCopy(&cVar2, "FEET_P1_08_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&cVar2, "FEET_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 36:
			StringCopy(&cVar2, "FEET_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 37:
			StringCopy(&cVar2, "FEET_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
		case 38:
			StringCopy(&cVar2, "FEET_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
		case 39:
			StringCopy(&cVar2, "FEET_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
		case 40:
			StringCopy(&cVar2, "FEET_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
		case 41:
			StringCopy(&cVar2, "FEET_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
		case 42:
			StringCopy(&cVar2, "FEET_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
		case 43:
			StringCopy(&cVar2, "FEET_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
		case 44:
			StringCopy(&cVar2, "FEET_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
		case 45:
			StringCopy(&cVar2, "FEET_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
		case 46:
			StringCopy(&cVar2, "FEET_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
		case 47:
			StringCopy(&cVar2, "FEET_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
		case 48:
			StringCopy(&cVar2, "FEET_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
		case 49:
			StringCopy(&cVar2, "FEET_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
		case 50:
			StringCopy(&cVar2, "FEET_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
		case 51:
			StringCopy(&cVar2, "FEET_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
		case 52:
			StringCopy(&cVar2, "FEET_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		case 53:
			StringCopy(&cVar2, "FEET_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
		case 54:
			StringCopy(&cVar2, "FEET_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
		case 55:
			StringCopy(&cVar2, "FEET_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
		case 56:
			StringCopy(&cVar2, "FEET_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
		case 57:
			StringCopy(&cVar2, "FEET_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
		case 58:
			StringCopy(&cVar2, "FEET_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
		case 59:
			StringCopy(&cVar2, "FEET_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
		case 60:
			StringCopy(&cVar2, "FEET_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
		case 61:
			StringCopy(&cVar2, "FEET_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
		case 62:
			StringCopy(&cVar2, "FEET_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
		case 63:
			StringCopy(&cVar2, "FEET_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
		case 64:
			StringCopy(&cVar2, "FEET_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 65:
			StringCopy(&cVar2, "FEET_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
		case 66:
			StringCopy(&cVar2, "FEET_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
		case 67:
			StringCopy(&cVar2, "FEET_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
		case 68:
			StringCopy(&cVar2, "FEET_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
		case 69:
			StringCopy(&cVar2, "FEET_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
		case 70:
			StringCopy(&cVar2, "FEET_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
		case 71:
			StringCopy(&cVar2, "FEET_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
		case 72:
			StringCopy(&cVar2, "FEET_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
		case 73:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 74:
			StringCopy(&cVar2, "FEET_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
		case 75:
			StringCopy(&cVar2, "FEET_P1_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
		case 76:
			StringCopy(&cVar2, "FEET_P1_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
		case 77:
			StringCopy(&cVar2, "FEET_P1_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
		case 78:
			StringCopy(&cVar2, "FEET_P1_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 700;
			break;
		case 79:
			StringCopy(&cVar2, "FEET_P1_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
		case 80:
			StringCopy(&cVar2, "FEET_P1_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
		case 81:
			StringCopy(&cVar2, "FEET_P1_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 740;
			break;
		case 82:
			StringCopy(&cVar2, "FEET_P1_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
		case 83:
			StringCopy(&cVar2, "FEET_P1_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
		case 84:
			StringCopy(&cVar2, "FEET_P1_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
		case 85:
			StringCopy(&cVar2, "FEET_P1_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 700;
			break;
		case 86:
			StringCopy(&cVar2, "FEET_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
		case 87:
			StringCopy(&cVar2, "FEET_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
		case 88:
			StringCopy(&cVar2, "FEET_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
		case 89:
			StringCopy(&cVar2, "FEET_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
		case 90:
			StringCopy(&cVar2, "FEET_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
		case 91:
			StringCopy(&cVar2, "FEET_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 92:
			StringCopy(&cVar2, "FEET_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
		case 93:
			StringCopy(&cVar2, "FEET_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
		case 94:
			StringCopy(&cVar2, "FEET_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
		case 95:
			StringCopy(&cVar2, "FEET_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
		case 96:
			StringCopy(&cVar2, "FEET_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
		case 97:
			StringCopy(&cVar2, "FEET_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 740;
			break;
		case 98:
			StringCopy(&cVar2, "FEET_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
		case 99:
			StringCopy(&cVar2, "FEET_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
		case 100:
			StringCopy(&cVar2, "FEET_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 770;
			break;
		case 101:
			StringCopy(&cVar2, "FEET_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
		case 102:
			StringCopy(&cVar2, "FEET_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
		case 103:
			StringCopy(&cVar2, "FEET_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
		case 104:
			StringCopy(&cVar2, "FEET_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
		case 105:
			StringCopy(&cVar2, "FEET_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
		case 106:
			StringCopy(&cVar2, "FEET_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
		case 107:
			StringCopy(&cVar2, "FEET_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 108:
			StringCopy(&cVar2, "FEET_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
		case 109:
			StringCopy(&cVar2, "FEET_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
		case 110:
			StringCopy(&cVar2, "FEET_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
		case 111:
			StringCopy(&cVar2, "FEET_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
		case 112:
			StringCopy(&cVar2, "FEET_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
		case 113:
			StringCopy(&cVar2, "FEET_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
		case 114:
			StringCopy(&cVar2, "FEET_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
		case 115:
			StringCopy(&cVar2, "FEET_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
		case 116:
			StringCopy(&cVar2, "FEET_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
		case 117:
			StringCopy(&cVar2, "FEET_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
		case 118:
			StringCopy(&cVar2, "FEET_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
		case 119:
			StringCopy(&cVar2, "FEET_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
		case 120:
			StringCopy(&cVar2, "FEET_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
		case 121:
			StringCopy(&cVar2, "FEET_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
		case 122:
			StringCopy(&cVar2, "FEET_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
		case 123:
			StringCopy(&cVar2, "FEET_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
		case 124:
			StringCopy(&cVar2, "FEET_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
		case 125:
			StringCopy(&cVar2, "FEET_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
		case 126:
			StringCopy(&cVar2, "FEET_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
		case 127:
			StringCopy(&cVar2, "FEET_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
		case 128:
			StringCopy(&cVar2, "FEET_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
		case 129:
			StringCopy(&cVar2, "FEET_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
		case 130:
			StringCopy(&cVar2, "FEET_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
		case 131:
			StringCopy(&cVar2, "FEET_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
		case 132:
			StringCopy(&cVar2, "FEET_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
		case 133:
			StringCopy(&cVar2, "FEET_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
		default:
			func_260(iVar10, bParam0, 134, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_289(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "LEGS_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "LEGS_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
		case 2:
			StringCopy(&cVar2, "LEGS_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
		case 3:
			StringCopy(&cVar2, "LEGS_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "LEGS_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "LEGS_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 15:
			StringCopy(&cVar2, "LEGS_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
		case 16:
			StringCopy(&cVar2, "LEGS_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
		case 17:
			StringCopy(&cVar2, "LEGS_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
		case 18:
			StringCopy(&cVar2, "LEGS_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
		case 19:
			StringCopy(&cVar2, "LEGS_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 740;
			break;
		case 20:
			StringCopy(&cVar2, "LEGS_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
		case 21:
			StringCopy(&cVar2, "LEGS_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 24:
			StringCopy(&cVar2, "LEGS_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 25:
			StringCopy(&cVar2, "LEGS_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
		case 26:
			StringCopy(&cVar2, "LEGS_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
		case 27:
			StringCopy(&cVar2, "LEGS_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
		case 28:
			StringCopy(&cVar2, "LEGS_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		case 29:
			StringCopy(&cVar2, "LEGS_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
		case 30:
			StringCopy(&cVar2, "LEGS_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 33:
			StringCopy(&cVar2, "LEGS_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
		case 34:
			StringCopy(&cVar2, "LEGS_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
		case 35:
			StringCopy(&cVar2, "LEGS_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
		case 36:
			StringCopy(&cVar2, "LEGS_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		case 37:
			StringCopy(&cVar2, "LEGS_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
		case 38:
			StringCopy(&cVar2, "LEGS_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
		case 39:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		case 40:
			StringCopy(&cVar2, "LEGS_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		case 41:
			StringCopy(&cVar2, "LEGS_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			Jump @3231; //curOff = 1625
			StringCopy(&cVar2, "LEGS_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			Jump @3231; //curOff = 1647
			StringCopy(&cVar2, "LEGS_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			Jump @3231; //curOff = 1669
			StringCopy(&cVar2, "LEGS_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			Jump @3231; //curOff = 1691
			StringCopy(&cVar2, "LEGS_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			Jump @3231; //curOff = 1713
			StringCopy(&cVar2, "LEGS_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			Jump @3231; //curOff = 1735
			StringCopy(&cVar2, "LEGS_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			Jump @3231; //curOff = 1757
			StringCopy(&cVar2, "LEGS_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			Jump @3231; //curOff = 1780
			StringCopy(&cVar2, "LEGS_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			Jump @3231; //curOff = 1803
			StringCopy(&cVar2, "LEGS_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			Jump @3231; //curOff = 1826
			StringCopy(&cVar2, "LEGS_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			Jump @3231; //curOff = 1849
			StringCopy(&cVar2, "LEGS_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			Jump @3231; //curOff = 1867
			StringCopy(&cVar2, "LEGS_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			Jump @3231; //curOff = 1885
			StringCopy(&cVar2, "LEGS_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			Jump @3231; //curOff = 1903
			StringCopy(&cVar2, "LEGS_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			Jump @3231; //curOff = 1921
			StringCopy(&cVar2, "LEGS_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			Jump @3231; //curOff = 1939
			StringCopy(&cVar2, "LEGS_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			Jump @3231; //curOff = 1957
			StringCopy(&cVar2, "LEGS_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			Jump @3231; //curOff = 1975
			StringCopy(&cVar2, "LEGS_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			Jump @3231; //curOff = 1993
			StringCopy(&cVar2, "LEGS_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			Jump @3231; //curOff = 2011
			StringCopy(&cVar2, "LEGS_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			Jump @3231; //curOff = 2030
			StringCopy(&cVar2, "LEGS_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			Jump @3231; //curOff = 2049
			StringCopy(&cVar2, "LEGS_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			Jump @3231; //curOff = 2068
			StringCopy(&cVar2, "LEGS_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			Jump @3231; //curOff = 2087
			StringCopy(&cVar2, "LEGS_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			Jump @3231; //curOff = 2106
			StringCopy(&cVar2, "LEGS_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			Jump @3231; //curOff = 2125
			StringCopy(&cVar2, "LEGS_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			Jump @3231; //curOff = 2144
			StringCopy(&cVar2, "LEGS_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			Jump @3231; //curOff = 2163
			StringCopy(&cVar2, "LEGS_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			Jump @3231; //curOff = 2184
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			bVar0 = true;
			Jump @3231; //curOff = 2205
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			Jump @3231; //curOff = 2226
			StringCopy(&cVar2, "LEGS_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			Jump @3231; //curOff = 2244
			StringCopy(&cVar2, "LEGS_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			Jump @3231; //curOff = 2266
			StringCopy(&cVar2, "LEGS_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			Jump @3231; //curOff = 2288
			StringCopy(&cVar2, "LEGS_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			Jump @3231; //curOff = 2310
			StringCopy(&cVar2, "LEGS_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			Jump @3231; //curOff = 2328
			StringCopy(&cVar2, "LEGS_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			Jump @3231; //curOff = 2346
			StringCopy(&cVar2, "LEGS_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			Jump @3231; //curOff = 2367
			StringCopy(&cVar2, "LEGS_P1_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			Jump @3231; //curOff = 2389
			StringCopy(&cVar2, "LEGS_P1_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			Jump @3231; //curOff = 2411
			StringCopy(&cVar2, "LEGS_P1_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			Jump @3231; //curOff = 2433
			StringCopy(&cVar2, "LEGS_P1_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			Jump @3231; //curOff = 2455
			StringCopy(&cVar2, "LEGS_P1_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			Jump @3231; //curOff = 2477
			StringCopy(&cVar2, "LEGS_P1_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			Jump @3231; //curOff = 2499
			StringCopy(&cVar2, "LEGS_P1_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			Jump @3231; //curOff = 2521
			StringCopy(&cVar2, "LEGS_P1_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			Jump @3231; //curOff = 2543
			StringCopy(&cVar2, "LEGS_P1_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			Jump @3231; //curOff = 2566
			StringCopy(&cVar2, "LEGS_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			Jump @3231; //curOff = 2588
			StringCopy(&cVar2, "LEGS_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			Jump @3231; //curOff = 2610
			StringCopy(&cVar2, "LEGS_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			Jump @3231; //curOff = 2632
			StringCopy(&cVar2, "LEGS_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			Jump @3231; //curOff = 2654
			StringCopy(&cVar2, "LEGS_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			Jump @3231; //curOff = 2676
			StringCopy(&cVar2, "LEGS_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			Jump @3231; //curOff = 2698
			StringCopy(&cVar2, "LEGS_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			Jump @3231; //curOff = 2720
			StringCopy(&cVar2, "LEGS_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			Jump @3231; //curOff = 2742
			StringCopy(&cVar2, "LEGS_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			Jump @3231; //curOff = 2765
			StringCopy(&cVar2, "LEGS_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			Jump @3231; //curOff = 2787
			StringCopy(&cVar2, "LEGS_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			Jump @3231; //curOff = 2809
			StringCopy(&cVar2, "LEGS_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			Jump @3231; //curOff = 2831
			StringCopy(&cVar2, "LEGS_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			Jump @3231; //curOff = 2853
			StringCopy(&cVar2, "LEGS_P1_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			Jump @3231; //curOff = 2875
			StringCopy(&cVar2, "LEGS_P1_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			Jump @3231; //curOff = 2897
			StringCopy(&cVar2, "LEGS_P1_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			Jump @3231; //curOff = 2919
			StringCopy(&cVar2, "LEGS_P1_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			Jump @3231; //curOff = 2941
			StringCopy(&cVar2, "LEGS_P1_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			Jump @3231; //curOff = 2964
			StringCopy(&cVar2, "LEGS_P1_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			Jump @3231; //curOff = 2987
			StringCopy(&cVar2, "LEGS_P1_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			Jump @3231; //curOff = 3010
			StringCopy(&cVar2, "LEGS_P1_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			Jump @3231; //curOff = 3033
			StringCopy(&cVar2, "LEGS_P1_22_12", 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			Jump @3231; //curOff = 3056
			StringCopy(&cVar2, "LEGS_P1_22_13", 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			Jump @3231; //curOff = 3079
			StringCopy(&cVar2, "LEGS_P1_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			Jump @3231; //curOff = 3101
			StringCopy(&cVar2, "LEGS_P1_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			Jump @3231; //curOff = 3123
			StringCopy(&cVar2, "LEGS_P1_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			Jump @3231; //curOff = 3145
			StringCopy(&cVar2, "LEGS_P1_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			Jump @3231; //curOff = 3167
			StringCopy(&cVar2, "LEGS_P1_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			Jump @3231; //curOff = 3189
			StringCopy(&cVar2, "LEGS_P1_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			Jump @3231; //curOff = 3211
			func_260(iVar10, bParam0, 117, -1);
			return;
			func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
		}

void func_290(bool bParam0)
{
	if (bParam0 < 107)
	{
		func_293(bParam0);
	}
	else if (bParam0 < 227)
	{
		func_292(bParam0);
	}
	else
	{
		func_291(bParam0);
	}
	if (Global_76434[0 /*14*/].f_2 == -1)
	{
		func_260(3, bParam0, 318, -1);
	}
}

void func_291(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 227:
			StringCopy(&cVar2, "TORSO_P1_18_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 228:
			StringCopy(&cVar2, "TORSO_P1_18_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
		case 229:
			StringCopy(&cVar2, "TORSO_P1_18_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
		case 230:
			StringCopy(&cVar2, "TORSO_P1_18_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
		case 231:
			StringCopy(&cVar2, "TORSO_P1_18_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
		case 232:
			StringCopy(&cVar2, "TORSO_P1_18_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
		case 233:
			StringCopy(&cVar2, "TORSO_P1_18_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
		case 234:
			StringCopy(&cVar2, "TORSO_P1_18_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
		case 235:
			StringCopy(&cVar2, "TORSO_P1_18_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
		case 236:
			StringCopy(&cVar2, "TORSO_P1_18_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
		case 237:
			StringCopy(&cVar2, "TORSO_P1_18_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
		case 238:
			StringCopy(&cVar2, "TORSO_P1_18_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
		case 239:
			StringCopy(&cVar2, "TORSO_P1_18_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
		case 240:
			StringCopy(&cVar2, "TORSO_P1_18_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
		case 241:
			StringCopy(&cVar2, "TORSO_P1_18_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
		case 242:
			StringCopy(&cVar2, "TORSO_P1_18_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
		case 243:
			StringCopy(&cVar2, "TORSO_P1_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 244:
			StringCopy(&cVar2, "TORSO_P1_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 245:
			StringCopy(&cVar2, "TORSO_P1_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 246:
			StringCopy(&cVar2, "TORSO_P1_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 247:
			StringCopy(&cVar2, "TORSO_P1_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 248:
			StringCopy(&cVar2, "TORSO_P1_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 249:
			StringCopy(&cVar2, "TORSO_P1_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 250:
			StringCopy(&cVar2, "TORSO_P1_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 251:
			StringCopy(&cVar2, "TORSO_P1_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 252:
			StringCopy(&cVar2, "TORSO_P1_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 253:
			StringCopy(&cVar2, "TORSO_P1_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 254:
			StringCopy(&cVar2, "TORSO_P1_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 255:
			StringCopy(&cVar2, "TORSO_P1_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 256:
			StringCopy(&cVar2, "TORSO_P1_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 257:
			StringCopy(&cVar2, "TORSO_P1_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 258:
			StringCopy(&cVar2, "TORSO_P1_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 259:
			StringCopy(&cVar2, "TORSO_P1_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		case 260:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
		case 261:
			StringCopy(&cVar2, "TORSO_P1_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
		case 262:
			StringCopy(&cVar2, "TORSO_P1_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
		case 263:
			StringCopy(&cVar2, "TORSO_P1_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
		case 264:
			StringCopy(&cVar2, "TORSO_P1_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
		case 265:
			StringCopy(&cVar2, "TORSO_P1_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
		case 266:
			StringCopy(&cVar2, "TORSO_P1_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
		case 267:
			StringCopy(&cVar2, "TORSO_P1_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
		case 268:
			StringCopy(&cVar2, "TORSO_P1_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
		case 269:
			StringCopy(&cVar2, "TORSO_P1_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
		case 270:
			StringCopy(&cVar2, "TORSO_P1_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
		case 271:
			StringCopy(&cVar2, "TORSO_P1_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
		case 272:
			StringCopy(&cVar2, "TORSO_P1_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
		case 273:
			StringCopy(&cVar2, "TORSO_P1_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
		case 274:
			StringCopy(&cVar2, "TORSO_P1_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
		case 275:
			StringCopy(&cVar2, "TORSO_P1_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
		case 276:
			StringCopy(&cVar2, "TORSO_P1_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
		case 277:
			StringCopy(&cVar2, "TORSO_P1_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
		case 278:
			StringCopy(&cVar2, "TORSO_P1_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
		case 279:
			StringCopy(&cVar2, "TORSO_P1_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
		case 280:
			StringCopy(&cVar2, "TORSO_P1_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
		case 281:
			StringCopy(&cVar2, "TORSO_P1_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
		case 282:
			StringCopy(&cVar2, "TORSO_P1_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
		case 283:
			StringCopy(&cVar2, "TORSO_P1_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
		case 284:
			StringCopy(&cVar2, "TORSO_P1_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
		case 285:
			StringCopy(&cVar2, "TORSO_P1_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
		case 286:
			StringCopy(&cVar2, "TORSO_P1_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
		case 287:
			StringCopy(&cVar2, "TORSO_P1_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
		case 288:
			StringCopy(&cVar2, "TORSO_P1_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
		case 289:
			StringCopy(&cVar2, "TORSO_P1_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
		case 290:
			StringCopy(&cVar2, "TORSO_P1_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
		case 291:
			StringCopy(&cVar2, "TORSO_P1_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
		case 292:
			StringCopy(&cVar2, "TORSO_P1_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
		case 293:
			StringCopy(&cVar2, "TORSO_P1_29_10", 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
		case 294:
			StringCopy(&cVar2, "TORSO_P1_29_11", 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
		case 295:
			StringCopy(&cVar2, "TORSO_P1_29_12", 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
		case 296:
			StringCopy(&cVar2, "TORSO_P1_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
		case 297:
			StringCopy(&cVar2, "TORSO_P1_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
		case 298:
			StringCopy(&cVar2, "TORSO_P1_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
		case 299:
			StringCopy(&cVar2, "TORSO_P1_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		case 300:
			StringCopy(&cVar2, "TORSO_P1_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
		case 301:
			StringCopy(&cVar2, "TORSO_P1_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
		case 302:
			StringCopy(&cVar2, "TORSO_P1_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
		case 303:
			StringCopy(&cVar2, "TORSO_P1_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
		case 304:
			StringCopy(&cVar2, "TORSO_P1_30_8", 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
		case 305:
			StringCopy(&cVar2, "TORSO_P1_30_9", 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
		case 306:
			StringCopy(&cVar2, "TORSO_P1_30_10", 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
		case 307:
			StringCopy(&cVar2, "TORSO_P1_30_11", 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
		case 308:
			StringCopy(&cVar2, "TORSO_P1_30_12", 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
		case 309:
			StringCopy(&cVar2, "TORSO_P1_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
		case 310:
			StringCopy(&cVar2, "TORSO_P1_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
		case 311:
			StringCopy(&cVar2, "TORSO_P1_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
		case 312:
			StringCopy(&cVar2, "TORSO_P1_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
		case 313:
			StringCopy(&cVar2, "TORSO_P1_31_4", 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
		case 314:
			StringCopy(&cVar2, "TORSO_P1_31_5", 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
		case 315:
			StringCopy(&cVar2, "TORSO_P1_31_6", 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
		case 316:
			StringCopy(&cVar2, "TORSO_P1_31_7", 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
		case 317:
			StringCopy(&cVar2, "TORSO_P1_31_8", 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
		default:
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_292(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 107:
			StringCopy(&cVar2, "TORSO_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
		case 108:
			StringCopy(&cVar2, "TORSO_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
		case 109:
			StringCopy(&cVar2, "TORSO_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
		case 110:
			StringCopy(&cVar2, "TORSO_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
		case 111:
			StringCopy(&cVar2, "TORSO_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
		case 112:
			StringCopy(&cVar2, "TORSO_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
		case 113:
			StringCopy(&cVar2, "TORSO_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
		case 114:
			StringCopy(&cVar2, "TORSO_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
		case 115:
			StringCopy(&cVar2, "TORSO_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
		case 116:
			StringCopy(&cVar2, "TORSO_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
		case 117:
			StringCopy(&cVar2, "TORSO_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
		case 118:
			StringCopy(&cVar2, "TORSO_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
		case 119:
			StringCopy(&cVar2, "TORSO_P1_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
		case 120:
			StringCopy(&cVar2, "TORSO_P1_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
		case 121:
			StringCopy(&cVar2, "TORSO_P1_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
		case 122:
			StringCopy(&cVar2, "TORSO_P1_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
		case 123:
			StringCopy(&cVar2, "TORSO_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		case 124:
			StringCopy(&cVar2, "TORSO_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
		case 125:
			StringCopy(&cVar2, "TORSO_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
		case 126:
			StringCopy(&cVar2, "TORSO_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
		case 127:
			StringCopy(&cVar2, "TORSO_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
		case 128:
			StringCopy(&cVar2, "TORSO_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
		case 129:
			StringCopy(&cVar2, "TORSO_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
		case 130:
			StringCopy(&cVar2, "TORSO_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
		case 131:
			StringCopy(&cVar2, "TORSO_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
		case 132:
			StringCopy(&cVar2, "TORSO_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
		case 133:
			StringCopy(&cVar2, "TORSO_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
		case 134:
			StringCopy(&cVar2, "TORSO_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
		case 135:
			StringCopy(&cVar2, "TORSO_P1_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
		case 136:
			StringCopy(&cVar2, "TORSO_P1_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
		case 137:
			StringCopy(&cVar2, "TORSO_P1_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
		case 138:
			StringCopy(&cVar2, "TORSO_P1_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
		case 139:
			StringCopy(&cVar2, "TORSO_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
		case 140:
			StringCopy(&cVar2, "TORSO_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
		case 141:
			StringCopy(&cVar2, "TORSO_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
		case 142:
			StringCopy(&cVar2, "TORSO_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
		case 143:
			StringCopy(&cVar2, "TORSO_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
		case 144:
			StringCopy(&cVar2, "TORSO_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
		case 145:
			StringCopy(&cVar2, "TORSO_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
		case 146:
			StringCopy(&cVar2, "TORSO_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
		case 147:
			StringCopy(&cVar2, "TORSO_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
		case 148:
			StringCopy(&cVar2, "TORSO_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
		case 149:
			StringCopy(&cVar2, "TORSO_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
		case 150:
			StringCopy(&cVar2, "TORSO_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		case 151:
			StringCopy(&cVar2, "TORSO_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		case 152:
			StringCopy(&cVar2, "TORSO_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
		case 153:
			StringCopy(&cVar2, "TORSO_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
		case 154:
			StringCopy(&cVar2, "TORSO_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
		case 155:
			StringCopy(&cVar2, "TORSO_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
		case 156:
			StringCopy(&cVar2, "TORSO_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
		case 157:
			StringCopy(&cVar2, "TORSO_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
		case 158:
			StringCopy(&cVar2, "TORSO_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
		case 159:
			StringCopy(&cVar2, "TORSO_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 160:
			StringCopy(&cVar2, "TORSO_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
		case 161:
			StringCopy(&cVar2, "TORSO_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
		case 162:
			StringCopy(&cVar2, "TORSO_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		case 163:
			StringCopy(&cVar2, "TORSO_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
		case 164:
			StringCopy(&cVar2, "TORSO_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
		case 165:
			StringCopy(&cVar2, "TORSO_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
		case 166:
			StringCopy(&cVar2, "TORSO_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
		case 167:
			StringCopy(&cVar2, "TORSO_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
		case 168:
			StringCopy(&cVar2, "TORSO_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
		case 169:
			StringCopy(&cVar2, "TORSO_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
		case 170:
			StringCopy(&cVar2, "TORSO_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
		case 171:
			StringCopy(&cVar2, "TORSO_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
		case 172:
			StringCopy(&cVar2, "TORSO_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
		case 173:
			StringCopy(&cVar2, "TORSO_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
		case 174:
			StringCopy(&cVar2, "TORSO_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
		case 175:
			StringCopy(&cVar2, "TORSO_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
		case 176:
			StringCopy(&cVar2, "TORSO_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 177:
			StringCopy(&cVar2, "TORSO_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
		case 178:
			StringCopy(&cVar2, "TORSO_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
		case 179:
			StringCopy(&cVar2, "TORSO_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
		case 180:
			StringCopy(&cVar2, "TORSO_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
		case 181:
			StringCopy(&cVar2, "TORSO_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
		case 182:
			StringCopy(&cVar2, "TORSO_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
		case 183:
			StringCopy(&cVar2, "TORSO_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
		case 184:
			StringCopy(&cVar2, "TORSO_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
		case 185:
			StringCopy(&cVar2, "TORSO_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
		case 186:
			StringCopy(&cVar2, "TORSO_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
		case 187:
			StringCopy(&cVar2, "TORSO_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
		case 188:
			StringCopy(&cVar2, "TORSO_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
		case 189:
			StringCopy(&cVar2, "TORSO_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
		case 190:
			StringCopy(&cVar2, "TORSO_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
		case 191:
			StringCopy(&cVar2, "TORSO_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
		case 192:
			StringCopy(&cVar2, "TORSO_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 193:
			StringCopy(&cVar2, "TORSO_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
		case 194:
			StringCopy(&cVar2, "TORSO_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
		case 195:
			StringCopy(&cVar2, "TORSO_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
		case 196:
			StringCopy(&cVar2, "TORSO_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
		case 197:
			StringCopy(&cVar2, "TORSO_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
		case 198:
			StringCopy(&cVar2, "TORSO_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 199:
			StringCopy(&cVar2, "TORSO_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 200:
			StringCopy(&cVar2, "TORSO_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 201:
			StringCopy(&cVar2, "TORSO_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 202:
			StringCopy(&cVar2, "TORSO_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 203:
			StringCopy(&cVar2, "TORSO_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 204:
			StringCopy(&cVar2, "TORSO_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
		case 205:
			StringCopy(&cVar2, "TORSO_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
		case 206:
			StringCopy(&cVar2, "TORSO_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
		case 207:
			StringCopy(&cVar2, "TORSO_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
		case 208:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 209:
			StringCopy(&cVar2, "TORSO_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
		case 210:
			StringCopy(&cVar2, "TORSO_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
		case 211:
			StringCopy(&cVar2, "TORSO_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
		case 212:
			StringCopy(&cVar2, "TORSO_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
		case 213:
			StringCopy(&cVar2, "TORSO_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
		case 214:
			StringCopy(&cVar2, "TORSO_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
		case 215:
			StringCopy(&cVar2, "TORSO_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
		case 216:
			StringCopy(&cVar2, "TORSO_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
		case 217:
			StringCopy(&cVar2, "TORSO_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
		case 218:
			StringCopy(&cVar2, "TORSO_P1_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
		case 219:
			StringCopy(&cVar2, "TORSO_P1_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
		case 220:
			StringCopy(&cVar2, "TORSO_P1_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
		case 221:
			StringCopy(&cVar2, "TORSO_P1_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
		case 222:
			StringCopy(&cVar2, "TORSO_P1_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
		case 223:
			StringCopy(&cVar2, "TORSO_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
		case 224:
			StringCopy(&cVar2, "TORSO_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
		case 225:
			StringCopy(&cVar2, "TORSO_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
		case 226:
			StringCopy(&cVar2, "TORSO_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
		default:
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_293(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "TORSO_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "TORSO_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "TORSO_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
		case 3:
			StringCopy(&cVar2, "TORSO_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
		case 4:
			StringCopy(&cVar2, "TORSO_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
		case 5:
			StringCopy(&cVar2, "TORSO_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
		case 6:
			StringCopy(&cVar2, "TORSO_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
		case 7:
			StringCopy(&cVar2, "TORSO_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		case 8:
			StringCopy(&cVar2, "TORSO_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		case 9:
			StringCopy(&cVar2, "TORSO_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
		case 10:
			StringCopy(&cVar2, "TORSO_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
		case 11:
			StringCopy(&cVar2, "TORSO_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
		case 12:
			StringCopy(&cVar2, "TORSO_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
		case 13:
			StringCopy(&cVar2, "TORSO_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
		case 14:
			StringCopy(&cVar2, "TORSO_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
		case 15:
			StringCopy(&cVar2, "TORSO_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 22:
			StringCopy(&cVar2, "TORSO_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		case 24:
			StringCopy(&cVar2, "TORSO_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
		case 25:
			StringCopy(&cVar2, "TORSO_P1_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
		case 26:
			StringCopy(&cVar2, "TORSO_P1_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
		case 27:
			StringCopy(&cVar2, "TORSO_P1_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
		case 28:
			StringCopy(&cVar2, "TORSO_P1_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
		case 29:
			StringCopy(&cVar2, "TORSO_P1_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
		case 30:
			StringCopy(&cVar2, "TORSO_P1_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
		case 31:
			StringCopy(&cVar2, "TORSO_P1_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
		case 32:
			StringCopy(&cVar2, "TORSO_P1_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
		case 33:
			StringCopy(&cVar2, "TORSO_P1_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
		case 34:
			StringCopy(&cVar2, "TORSO_P1_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
		case 35:
			StringCopy(&cVar2, "TORSO_P1_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
		case 36:
			StringCopy(&cVar2, "TORSO_P1_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
		case 37:
			StringCopy(&cVar2, "TORSO_P1_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
		case 38:
			StringCopy(&cVar2, "TORSO_P1_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
		case 39:
			StringCopy(&cVar2, "TORSO_P1_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
		case 40:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 41:
			StringCopy(&cVar2, "TORSO_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 42:
			StringCopy(&cVar2, "TORSO_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		case 43:
			StringCopy(&cVar2, "TORSO_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		case 44:
			StringCopy(&cVar2, "TORSO_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		case 45:
			StringCopy(&cVar2, "TORSO_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		case 46:
			StringCopy(&cVar2, "TORSO_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		case 47:
			StringCopy(&cVar2, "TORSO_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		case 48:
			StringCopy(&cVar2, "TORSO_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		case 49:
			StringCopy(&cVar2, "TORSO_P1_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		case 50:
			StringCopy(&cVar2, "TORSO_P1_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		case 51:
			StringCopy(&cVar2, "TORSO_P1_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		case 52:
			StringCopy(&cVar2, "TORSO_P1_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		case 53:
			StringCopy(&cVar2, "TORSO_P1_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		case 54:
			StringCopy(&cVar2, "TORSO_P1_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		case 55:
			StringCopy(&cVar2, "TORSO_P1_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		case 56:
			StringCopy(&cVar2, "TORSO_P1_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		case 57:
			StringCopy(&cVar2, "TORSO_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
		case 58:
			StringCopy(&cVar2, "TORSO_P1_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
		case 59:
			StringCopy(&cVar2, "TORSO_P1_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
		case 60:
			StringCopy(&cVar2, "TORSO_P1_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
		case 61:
			StringCopy(&cVar2, "TORSO_P1_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
		case 62:
			StringCopy(&cVar2, "TORSO_P1_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
		case 63:
			StringCopy(&cVar2, "TORSO_P1_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
		case 64:
			StringCopy(&cVar2, "TORSO_P1_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
		case 65:
			StringCopy(&cVar2, "TORSO_P1_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
		case 66:
			StringCopy(&cVar2, "TORSO_P1_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
		case 67:
			StringCopy(&cVar2, "TORSO_P1_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
		case 68:
			StringCopy(&cVar2, "TORSO_P1_7_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
		case 69:
			StringCopy(&cVar2, "TORSO_P1_7_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
		case 70:
			StringCopy(&cVar2, "TORSO_P1_7_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
		case 71:
			StringCopy(&cVar2, "TORSO_P1_7_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
		case 72:
			StringCopy(&cVar2, "TORSO_P1_7_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
		case 73:
			StringCopy(&cVar2, "TORSO_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 74:
			StringCopy(&cVar2, "TORSO_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		case 75:
			StringCopy(&cVar2, "TORSO_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		case 76:
			StringCopy(&cVar2, "TORSO_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		case 77:
			StringCopy(&cVar2, "TORSO_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
		case 78:
			StringCopy(&cVar2, "TORSO_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
		case 79:
			StringCopy(&cVar2, "TORSO_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
		case 80:
			StringCopy(&cVar2, "TORSO_P1_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
		case 81:
			StringCopy(&cVar2, "TORSO_P1_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
		case 82:
			StringCopy(&cVar2, "TORSO_P1_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
		case 83:
			StringCopy(&cVar2, "TORSO_P1_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
		case 84:
			StringCopy(&cVar2, "TORSO_P1_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
		case 85:
			StringCopy(&cVar2, "TORSO_P1_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
		case 86:
			StringCopy(&cVar2, "TORSO_P1_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
		case 87:
			StringCopy(&cVar2, "TORSO_P1_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
		case 88:
			StringCopy(&cVar2, "TORSO_P1_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
		case 89:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 90:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 91:
			StringCopy(&cVar2, "TORSO_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 92:
			StringCopy(&cVar2, "TORSO_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
		case 93:
			StringCopy(&cVar2, "TORSO_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		case 94:
			StringCopy(&cVar2, "TORSO_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
		case 95:
			StringCopy(&cVar2, "TORSO_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
		case 96:
			StringCopy(&cVar2, "TORSO_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
		case 97:
			StringCopy(&cVar2, "TORSO_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
		case 98:
			StringCopy(&cVar2, "TORSO_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
		case 99:
			StringCopy(&cVar2, "TORSO_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
		case 100:
			StringCopy(&cVar2, "TORSO_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
		case 101:
			StringCopy(&cVar2, "TORSO_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
		case 102:
			StringCopy(&cVar2, "TORSO_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
		case 103:
			StringCopy(&cVar2, "TORSO_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
		case 104:
			StringCopy(&cVar2, "TORSO_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
		case 105:
			StringCopy(&cVar2, "TORSO_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
		case 106:
			StringCopy(&cVar2, "TORSO_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
		default:
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_294(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "HAIR_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "HAIR_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "HAIR_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "HAIR_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "HAIR_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
		case 5:
			StringCopy(&cVar2, "HAIR_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
		case 6:
			StringCopy(&cVar2, "HAIR_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
		case 7:
			StringCopy(&cVar2, "HAIR_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
		case 8:
			StringCopy(&cVar2, "HAIR_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
		case 9:
			StringCopy(&cVar2, "HAIR_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
		case 10:
			StringCopy(&cVar2, "HAIR_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
		case 11:
			StringCopy(&cVar2, "HAIR_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
		case 12:
			StringCopy(&cVar2, "HAIR_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
		case 13:
			StringCopy(&cVar2, "HAIR_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		case 14:
			StringCopy(&cVar2, "HAIR_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
		case 15:
			StringCopy(&cVar2, "HAIR_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
		case 16:
			StringCopy(&cVar2, "HAIR_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 17:
			StringCopy(&cVar2, "HAIR_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 18:
			StringCopy(&cVar2, "HAIR_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 19:
			StringCopy(&cVar2, "HAIR_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_260(iVar10, bParam0, 21, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_295(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		default:
			func_260(iVar10, bParam0, 10, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_296(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			func_313(bParam1);
			break;
		case 2:
			func_312(bParam1);
			break;
		case 3:
			func_309(bParam1);
			break;
		case 4:
			func_308(bParam1);
			break;
		case 6:
			func_307(bParam1);
			break;
		case 5:
			func_306(bParam1);
			break;
		case 8:
			func_305(bParam1);
			break;
		case 9:
			func_304(bParam1);
			break;
		case 10:
			func_303(bParam1);
			break;
		case 1:
			func_302(bParam1);
			break;
		case 7:
			func_301(bParam1);
			break;
		case 11:
			func_300(bParam1);
			break;
		case 12:
			func_299(bParam1);
			break;
		case 13:
			func_298(bParam1);
			break;
		case 14:
			func_297(bParam1);
			break;
	}
}

void func_297(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "PROPS_P0_H1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "PROPS_P0_H2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 27:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "PROPS_P0_H12", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 31:
			StringCopy(&cVar2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 32:
			StringCopy(&cVar2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 34:
			StringCopy(&cVar2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 35:
			StringCopy(&cVar2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 36:
			StringCopy(&cVar2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 37:
			StringCopy(&cVar2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		case 38:
			StringCopy(&cVar2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 39:
			StringCopy(&cVar2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 40:
			StringCopy(&cVar2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 41:
			StringCopy(&cVar2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 47:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 49:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 50:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 51:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 52:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 53:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 54:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 55:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 56:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 57:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 58:
			StringCopy(&cVar2, "PROPS_P0_E0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		case 59:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		case 60:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		case 61:
			StringCopy(&cVar2, "PROPS_P0_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 62:
			StringCopy(&cVar2, "PROPS_P0_E4", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 63:
			StringCopy(&cVar2, "PROPS_P0_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
		case 64:
			StringCopy(&cVar2, "PROPS_P0_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
		case 65:
			StringCopy(&cVar2, "PROPS_P0_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 66:
			StringCopy(&cVar2, "PROPS_P0_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
		case 67:
			StringCopy(&cVar2, "PROPS_P0_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 68:
			StringCopy(&cVar2, "PROPS_P0_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
		case 69:
			StringCopy(&cVar2, "PROPS_P0_E4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		case 70:
			StringCopy(&cVar2, "PROPS_P0_E5", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 71:
			StringCopy(&cVar2, "PROPS_P0_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 72:
			StringCopy(&cVar2, "PROPS_P0_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
		case 73:
			StringCopy(&cVar2, "PROPS_P0_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
		case 74:
			StringCopy(&cVar2, "PROPS_P0_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
		case 75:
			StringCopy(&cVar2, "PROPS_P0_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
		case 76:
			StringCopy(&cVar2, "PROPS_P0_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
		case 77:
			StringCopy(&cVar2, "PROPS_P0_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
		case 78:
			StringCopy(&cVar2, "PROPS_P0_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
		case 79:
			StringCopy(&cVar2, "PROPS_P0_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
		case 80:
			StringCopy(&cVar2, "PROPS_P0_E6", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 81:
			StringCopy(&cVar2, "PROPS_P0_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 82:
			StringCopy(&cVar2, "PROPS_P0_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 83:
			StringCopy(&cVar2, "PROPS_P0_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 84:
			StringCopy(&cVar2, "PROPS_P0_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 85:
			StringCopy(&cVar2, "PROPS_P0_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 86:
			StringCopy(&cVar2, "PROPS_P0_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 87:
			StringCopy(&cVar2, "PROPS_P0_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 88:
			StringCopy(&cVar2, "PROPS_P0_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 89:
			StringCopy(&cVar2, "PROPS_P0_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 90:
			StringCopy(&cVar2, "PROPS_P0_E7", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 91:
			StringCopy(&cVar2, "PROPS_P0_E8", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
		case 92:
			StringCopy(&cVar2, "PROPS_P0_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 93:
			StringCopy(&cVar2, "PROPS_P0_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
		case 94:
			StringCopy(&cVar2, "PROPS_P0_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
		case 95:
			StringCopy(&cVar2, "PROPS_P0_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
		case 96:
			StringCopy(&cVar2, "PROPS_P0_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
		case 97:
			StringCopy(&cVar2, "PROPS_P0_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
		case 98:
			StringCopy(&cVar2, "PROPS_P0_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
		case 99:
			StringCopy(&cVar2, "PROPS_P0_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
		case 100:
			StringCopy(&cVar2, "PROPS_P0_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
		case 101:
			StringCopy(&cVar2, "PROPS_P0_E8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
		case 102:
			StringCopy(&cVar2, "PROPS_P0_E8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
		case 103:
			StringCopy(&cVar2, "PROPS_P0_E9", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
		case 104:
			StringCopy(&cVar2, "PROPS_P0_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
		case 105:
			StringCopy(&cVar2, "PROPS_P0_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
		case 106:
			StringCopy(&cVar2, "PROPS_P0_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
		case 107:
			StringCopy(&cVar2, "PROPS_P0_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 108:
			StringCopy(&cVar2, "PROPS_P0_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		case 109:
			StringCopy(&cVar2, "PROPS_P0_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		case 110:
			StringCopy(&cVar2, "PROPS_P0_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
		case 111:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		case 112:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		default:
			func_260(iVar10, bParam0, 113, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_298(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_260(iVar10, bParam0, 10, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_299(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "OUTFIT_P0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&cVar2, "OUTFIT_P0_1", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "OUTFIT_P0_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "OUTFIT_P0_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "OUTFIT_P0_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "OUTFIT_P0_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 9:
			StringCopy(&cVar2, "OUTFIT_P0_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "OUTFIT_P0_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "OUTFIT_P0_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 14:
			StringCopy(&cVar2, "OUTFIT_P0_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 15:
			StringCopy(&cVar2, "OUTFIT_P0_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "OUTFIT_P0_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		case 17:
			StringCopy(&cVar2, "OUTFIT_P0_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "OUTFIT_P0_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "OUTFIT_P0_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "OUTFIT_P0_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 21:
			StringCopy(&cVar2, "OUTFIT_P0_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 22:
			StringCopy(&cVar2, "OUTFIT_P0_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 23:
			StringCopy(&cVar2, "OUTFIT_P0_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 24:
			StringCopy(&cVar2, "OUTFIT_P0_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 25:
			StringCopy(&cVar2, "OUTFIT_P0_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 26:
			StringCopy(&cVar2, "OUTFIT_P0_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 27:
			StringCopy(&cVar2, "OUTFIT_P0_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "OUTFIT_P0_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		case 30:
			StringCopy(&cVar2, "OUTFIT_P0_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
		case 31:
			StringCopy(&cVar2, "OUTFIT_P0_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 32:
			StringCopy(&cVar2, "OUTFIT_P0_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "OUTFIT_P0_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 34:
			StringCopy(&cVar2, "OUTFIT_P0_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 35:
			StringCopy(&cVar2, "OUTFIT_P0_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 36:
			StringCopy(&cVar2, "OUTFIT_P0_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 37:
			StringCopy(&cVar2, "OUTFIT_P0_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
		case 38:
			StringCopy(&cVar2, "OUTFIT_P0_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		case 39:
			StringCopy(&cVar2, "OUTFIT_P0_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 40:
			StringCopy(&cVar2, "OUTFIT_P0_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
		case 41:
			StringCopy(&cVar2, "OUTFIT_P0_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		case 42:
			StringCopy(&cVar2, "OUTFIT_P0_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		case 43:
			StringCopy(&cVar2, "OUTFIT_P0_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		case 44:
			StringCopy(&cVar2, "OUTFIT_P0_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		case 45:
			StringCopy(&cVar2, "OUTFIT_P0_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		case 46:
			StringCopy(&cVar2, "OUTFIT_P0_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		case 47:
			StringCopy(&cVar2, "OUTFIT_P0_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 48:
			StringCopy(&cVar2, "OUTFIT_P0_55", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 49:
			StringCopy(&cVar2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 50:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 51:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 52:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_260(iVar10, bParam0, 53, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_300(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "JBIB_P0_02_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "JBIB_P0_02_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		case 4:
			StringCopy(&cVar2, "JBIB_P0_02_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		case 5:
			StringCopy(&cVar2, "JBIB_P0_02_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		case 6:
			StringCopy(&cVar2, "JBIB_P0_02_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
		case 7:
			StringCopy(&cVar2, "JBIB_P0_02_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
		case 8:
			StringCopy(&cVar2, "JBIB_P0_03_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
		case 9:
			StringCopy(&cVar2, "JBIB_P0_03_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
		case 10:
			StringCopy(&cVar2, "JBIB_P0_03_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
		case 11:
			StringCopy(&cVar2, "JBIB_P0_03_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
		case 12:
			StringCopy(&cVar2, "JBIB_P0_03_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
		case 13:
			StringCopy(&cVar2, "JBIB_P0_03_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
		case 14:
			StringCopy(&cVar2, "JBIB_P0_03_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
		case 15:
			StringCopy(&cVar2, "JBIB_P0_03_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
		case 16:
			StringCopy(&cVar2, "JBIB_P0_03_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
		case 17:
			StringCopy(&cVar2, "JBIB_P0_03_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
		case 18:
			StringCopy(&cVar2, "JBIB_P0_04_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
		case 19:
			StringCopy(&cVar2, "JBIB_P0_04_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
		case 20:
			StringCopy(&cVar2, "JBIB_P0_04_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
		case 21:
			StringCopy(&cVar2, "JBIB_P0_04_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
		case 22:
			StringCopy(&cVar2, "JBIB_P0_04_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
		case 23:
			StringCopy(&cVar2, "JBIB_P0_04_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
		case 24:
			StringCopy(&cVar2, "JBIB_P0_04_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
		case 25:
			StringCopy(&cVar2, "JBIB_P0_04_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
		case 26:
			StringCopy(&cVar2, "JBIB_P0_04_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
		case 27:
			StringCopy(&cVar2, "JBIB_P0_04_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
		case 28:
			StringCopy(&cVar2, "JBIB_P0_05_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
		case 29:
			StringCopy(&cVar2, "JBIB_P0_05_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
		case 30:
			StringCopy(&cVar2, "JBIB_P0_05_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
		case 31:
			StringCopy(&cVar2, "JBIB_P0_05_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		case 32:
			StringCopy(&cVar2, "JBIB_P0_05_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
		case 33:
			StringCopy(&cVar2, "JBIB_P0_05_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
		case 34:
			StringCopy(&cVar2, "JBIB_P0_05_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
		case 35:
			StringCopy(&cVar2, "JBIB_P0_05_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
		case 36:
			StringCopy(&cVar2, "JBIB_P0_05_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
		case 37:
			StringCopy(&cVar2, "JBIB_P0_05_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
		case 38:
			StringCopy(&cVar2, "JBIB_P0_05_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
		case 39:
			StringCopy(&cVar2, "JBIB_P0_05_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
		case 40:
			StringCopy(&cVar2, "JBIB_P0_05_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
		case 41:
			StringCopy(&cVar2, "JBIB_P0_05_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
		case 42:
			StringCopy(&cVar2, "JBIB_P0_05_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
		case 43:
			StringCopy(&cVar2, "JBIB_P0_05_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
		case 44:
			StringCopy(&cVar2, "JBIB_P0_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		default:
			func_260(iVar10, bParam0, 45, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_301(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_260(iVar10, bParam0, 1, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_302(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "BERD_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "BERD_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "BERD_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "BERD_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "BERD_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		default:
			func_260(iVar10, bParam0, 5, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_303(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
		case 27:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
		case 28:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
		case 36:
			StringCopy(&cVar2, "DECL_P0_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
		case 37:
			StringCopy(&cVar2, "DECL_P0_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
		case 38:
			StringCopy(&cVar2, "DECL_P0_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
		case 39:
			StringCopy(&cVar2, "DECL_P0_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
		case 40:
			StringCopy(&cVar2, "DECL_P0_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
		case 41:
			StringCopy(&cVar2, "DECL_P0_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
		case 42:
			StringCopy(&cVar2, "DECL_P0_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
		case 43:
			StringCopy(&cVar2, "DECL_P0_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
		case 44:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		case 47:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
		default:
			func_260(iVar10, bParam0, 48, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_304(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "SPEC2_P0_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
		case 10:
			StringCopy(&cVar2, "SPEC2_P0_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
		case 11:
			StringCopy(&cVar2, "SPEC2_P0_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
		case 12:
			StringCopy(&cVar2, "SPEC2_P0_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
		case 13:
			StringCopy(&cVar2, "SPEC2_P0_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		case 14:
			StringCopy(&cVar2, "SPEC2_P0_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_260(iVar10, bParam0, 20, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_305(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "SPEC_P0_10", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "SPEC_P0_16", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_260(iVar10, bParam0, 24, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_306(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_260(iVar10, bParam0, 14, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_307(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "FEET_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "FEET_P0_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
		case 2:
			StringCopy(&cVar2, "FEET_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
		case 3:
			StringCopy(&cVar2, "FEET_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
		case 4:
			StringCopy(&cVar2, "FEET_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
		case 5:
			StringCopy(&cVar2, "FEET_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "FEET_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 20:
			StringCopy(&cVar2, "FEET_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "FEET_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
		case 22:
			StringCopy(&cVar2, "FEET_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
		case 23:
			StringCopy(&cVar2, "FEET_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
		case 24:
			StringCopy(&cVar2, "FEET_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
		case 25:
			StringCopy(&cVar2, "FEET_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
		case 26:
			StringCopy(&cVar2, "FEET_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
		case 27:
			StringCopy(&cVar2, "FEET_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
		case 28:
			StringCopy(&cVar2, "FEET_P0_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
		case 29:
			StringCopy(&cVar2, "FEET_P0_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
		case 30:
			StringCopy(&cVar2, "FEET_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
		case 31:
			StringCopy(&cVar2, "FEET_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		case 32:
			StringCopy(&cVar2, "FEET_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
		case 33:
			StringCopy(&cVar2, "FEET_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
		case 34:
			StringCopy(&cVar2, "FEET_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
		case 35:
			StringCopy(&cVar2, "FEET_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
		case 36:
			StringCopy(&cVar2, "FEET_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		case 37:
			StringCopy(&cVar2, "FEET_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
		case 38:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 39:
			StringCopy(&cVar2, "FEET_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		case 40:
			StringCopy(&cVar2, "FEET_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		case 41:
			StringCopy(&cVar2, "FEET_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		case 42:
			StringCopy(&cVar2, "FEET_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		case 43:
			StringCopy(&cVar2, "FEET_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		case 44:
			StringCopy(&cVar2, "FEET_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 45:
			StringCopy(&cVar2, "FEET_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		case 46:
			StringCopy(&cVar2, "FEET_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		case 47:
			StringCopy(&cVar2, "FEET_P0_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		case 48:
			StringCopy(&cVar2, "FEET_P0_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		case 49:
			StringCopy(&cVar2, "FEET_P0_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		case 50:
			StringCopy(&cVar2, "FEET_P0_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		case 51:
			StringCopy(&cVar2, "FEET_P0_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		case 52:
			StringCopy(&cVar2, "FEET_P0_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		case 53:
			StringCopy(&cVar2, "FEET_P0_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		case 54:
			StringCopy(&cVar2, "FEET_P0_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		case 55:
			StringCopy(&cVar2, "FEET_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		case 56:
			StringCopy(&cVar2, "FEET_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		case 57:
			StringCopy(&cVar2, "FEET_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		case 58:
			StringCopy(&cVar2, "FEET_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		case 59:
			StringCopy(&cVar2, "FEET_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		case 60:
			StringCopy(&cVar2, "FEET_P0_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 61:
			StringCopy(&cVar2, "FEET_P0_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		case 62:
			StringCopy(&cVar2, "FEET_P0_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		case 63:
			StringCopy(&cVar2, "FEET_P0_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		case 64:
			StringCopy(&cVar2, "FEET_P0_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		case 65:
			StringCopy(&cVar2, "FEET_P0_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		case 66:
			StringCopy(&cVar2, "FEET_P0_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		case 67:
			StringCopy(&cVar2, "FEET_P0_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		case 68:
			StringCopy(&cVar2, "FEET_P0_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		case 69:
			StringCopy(&cVar2, "FEET_P0_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		case 70:
			StringCopy(&cVar2, "FEET_P0_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		case 71:
			StringCopy(&cVar2, "FEET_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		case 72:
			StringCopy(&cVar2, "FEET_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		case 73:
			StringCopy(&cVar2, "FEET_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		case 74:
			StringCopy(&cVar2, "FEET_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		case 75:
			StringCopy(&cVar2, "FEET_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		case 76:
			StringCopy(&cVar2, "FEET_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		case 77:
			StringCopy(&cVar2, "FEET_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		case 78:
			StringCopy(&cVar2, "FEET_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		case 79:
			StringCopy(&cVar2, "FEET_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		case 80:
			StringCopy(&cVar2, "FEET_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		case 81:
			StringCopy(&cVar2, "FEET_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		case 82:
			StringCopy(&cVar2, "FEET_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		case 83:
			StringCopy(&cVar2, "FEET_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		case 84:
			StringCopy(&cVar2, "FEET_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		case 85:
			StringCopy(&cVar2, "FEET_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		case 86:
			StringCopy(&cVar2, "FEET_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		case 87:
			StringCopy(&cVar2, "FEET_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
		case 88:
			StringCopy(&cVar2, "FEET_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
		case 89:
			StringCopy(&cVar2, "FEET_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
		case 90:
			StringCopy(&cVar2, "FEET_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
		case 91:
			StringCopy(&cVar2, "FEET_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 700;
			break;
		case 92:
			StringCopy(&cVar2, "FEET_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
		case 93:
			StringCopy(&cVar2, "FEET_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
		case 94:
			StringCopy(&cVar2, "FEET_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 740;
			break;
		case 95:
			StringCopy(&cVar2, "FEET_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
		case 96:
			StringCopy(&cVar2, "FEET_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
		case 97:
			StringCopy(&cVar2, "FEET_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
		case 98:
			StringCopy(&cVar2, "FEET_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 700;
			break;
		default:
			func_260(iVar10, bParam0, 99, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_308(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "LEGS_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "LEGS_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "LEGS_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "LEGS_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "LEGS_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "LEGS_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "LEGS_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		case 9:
			StringCopy(&cVar2, "LEGS_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		case 10:
			StringCopy(&cVar2, "LEGS_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		case 11:
			StringCopy(&cVar2, "LEGS_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		case 12:
			StringCopy(&cVar2, "LEGS_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		case 13:
			StringCopy(&cVar2, "LEGS_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		case 14:
			StringCopy(&cVar2, "LEGS_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		case 15:
			StringCopy(&cVar2, "LEGS_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 23:
			StringCopy(&cVar2, "LEGS_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
		case 24:
			StringCopy(&cVar2, "LEGS_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		case 25:
			StringCopy(&cVar2, "LEGS_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
		case 26:
			StringCopy(&cVar2, "LEGS_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
		case 27:
			StringCopy(&cVar2, "LEGS_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
		case 28:
			StringCopy(&cVar2, "LEGS_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
		case 29:
			StringCopy(&cVar2, "LEGS_P0_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
		case 30:
			StringCopy(&cVar2, "LEGS_P0_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 36:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 37:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 38:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 39:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		case 40:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 41:
			StringCopy(&cVar2, "LEGS_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
		case 42:
			StringCopy(&cVar2, "LEGS_P0_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
		case 43:
			StringCopy(&cVar2, "LEGS_P0_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
		case 44:
			StringCopy(&cVar2, "LEGS_P0_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
		case 45:
			StringCopy(&cVar2, "LEGS_P0_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 47:
			StringCopy(&cVar2, "LEGS_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "LEGS_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
		case 49:
			StringCopy(&cVar2, "LEGS_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
		case 50:
			StringCopy(&cVar2, "LEGS_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
		case 51:
			StringCopy(&cVar2, "LEGS_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
		case 52:
			StringCopy(&cVar2, "LEGS_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
		case 53:
			StringCopy(&cVar2, "LEGS_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
		case 54:
			StringCopy(&cVar2, "LEGS_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
		case 55:
			StringCopy(&cVar2, "LEGS_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 56:
			StringCopy(&cVar2, "LEGS_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		case 57:
			StringCopy(&cVar2, "LEGS_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
		case 58:
			StringCopy(&cVar2, "LEGS_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
		case 59:
			StringCopy(&cVar2, "LEGS_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
		case 60:
			StringCopy(&cVar2, "LEGS_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
		case 61:
			StringCopy(&cVar2, "LEGS_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		case 62:
			StringCopy(&cVar2, "LEGS_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
		case 63:
			StringCopy(&cVar2, "LEGS_P0_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
		case 64:
			StringCopy(&cVar2, "LEGS_P0_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
		case 65:
			StringCopy(&cVar2, "LEGS_P0_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
		case 66:
			StringCopy(&cVar2, "LEGS_P0_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
		case 67:
			StringCopy(&cVar2, "LEGS_P0_16_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
		case 68:
			StringCopy(&cVar2, "LEGS_P0_16_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
		case 69:
			StringCopy(&cVar2, "LEGS_P0_16_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
		case 70:
			StringCopy(&cVar2, "LEGS_P0_16_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
		case 71:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 72:
			StringCopy(&cVar2, "LEGS_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		case 73:
			StringCopy(&cVar2, "LEGS_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
		case 74:
			StringCopy(&cVar2, "LEGS_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
		case 75:
			StringCopy(&cVar2, "LEGS_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
		case 76:
			StringCopy(&cVar2, "LEGS_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
		case 77:
			StringCopy(&cVar2, "LEGS_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
		case 78:
			StringCopy(&cVar2, "LEGS_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
		case 79:
			StringCopy(&cVar2, "LEGS_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
		case 80:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 81:
			StringCopy(&cVar2, "LEGS_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		case 82:
			StringCopy(&cVar2, "LEGS_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
		case 83:
			StringCopy(&cVar2, "LEGS_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
		case 84:
			StringCopy(&cVar2, "LEGS_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		case 85:
			StringCopy(&cVar2, "LEGS_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
		case 86:
			StringCopy(&cVar2, "LEGS_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
		case 87:
			StringCopy(&cVar2, "LEGS_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
		case 88:
			StringCopy(&cVar2, "LEGS_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
		case 89:
			StringCopy(&cVar2, "LEGS_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		case 90:
			StringCopy(&cVar2, "LEGS_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
		case 91:
			StringCopy(&cVar2, "LEGS_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
		case 92:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 93:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 94:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 95:
			StringCopy(&cVar2, "LEGS_P0_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
		case 96:
			StringCopy(&cVar2, "LEGS_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
		case 97:
			StringCopy(&cVar2, "LEGS_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
		case 98:
			StringCopy(&cVar2, "LEGS_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
		case 99:
			StringCopy(&cVar2, "LEGS_P0_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
		case 100:
			StringCopy(&cVar2, "LEGS_P0_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
		case 101:
			StringCopy(&cVar2, "LEGS_P0_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
		case 102:
			StringCopy(&cVar2, "LEGS_P0_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
		case 103:
			StringCopy(&cVar2, "LEGS_P0_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
		case 104:
			StringCopy(&cVar2, "LEGS_P0_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
		case 105:
			StringCopy(&cVar2, "LEGS_P0_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
		case 106:
			StringCopy(&cVar2, "LEGS_P0_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
		case 107:
			StringCopy(&cVar2, "LEGS_P0_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
		case 108:
			StringCopy(&cVar2, "LEGS_P0_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
		case 109:
			StringCopy(&cVar2, "LEGS_P0_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
		case 110:
			StringCopy(&cVar2, "LEGS_P0_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
		case 111:
			StringCopy(&cVar2, "LEGS_P0_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
		case 112:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
		default:
			func_260(iVar10, bParam0, 113, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_309(bool bParam0)
{
	if (bParam0 < 60)
	{
		func_311(bParam0);
	}
	else
	{
		func_310(bParam0);
	}
	if (Global_76434[0 /*14*/].f_2 == -1)
	{
		func_260(3, bParam0, 181, -1);
	}
}

void func_310(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 60:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 61:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 62:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 63:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 64:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 65:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 66:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 67:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 68:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		case 69:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 70:
			StringCopy(&cVar2, "TORSO_P0_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
		case 71:
			StringCopy(&cVar2, "TORSO_P0_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
		case 72:
			StringCopy(&cVar2, "TORSO_P0_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
		case 73:
			StringCopy(&cVar2, "TORSO_P0_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
		case 74:
			StringCopy(&cVar2, "TORSO_P0_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
		case 75:
			StringCopy(&cVar2, "TORSO_P0_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
		case 76:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 77:
			StringCopy(&cVar2, "TORSO_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 78:
			StringCopy(&cVar2, "TORSO_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
		case 79:
			StringCopy(&cVar2, "TORSO_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
		case 80:
			StringCopy(&cVar2, "TORSO_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
		case 81:
			StringCopy(&cVar2, "TORSO_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
		case 82:
			StringCopy(&cVar2, "TORSO_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
		case 83:
			StringCopy(&cVar2, "TORSO_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
		case 84:
			StringCopy(&cVar2, "TORSO_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
		case 85:
			StringCopy(&cVar2, "TORSO_P0_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		case 86:
			StringCopy(&cVar2, "TORSO_P0_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		case 87:
			StringCopy(&cVar2, "TORSO_P0_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		case 88:
			StringCopy(&cVar2, "TORSO_P0_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
		case 89:
			StringCopy(&cVar2, "TORSO_P0_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
		case 90:
			StringCopy(&cVar2, "TORSO_P0_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
		case 91:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 92:
			StringCopy(&cVar2, "TORSO_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		case 93:
			StringCopy(&cVar2, "TORSO_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
		case 94:
			StringCopy(&cVar2, "TORSO_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
		case 95:
			StringCopy(&cVar2, "TORSO_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
		case 96:
			StringCopy(&cVar2, "TORSO_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
		case 97:
			StringCopy(&cVar2, "TORSO_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		case 98:
			StringCopy(&cVar2, "TORSO_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		case 99:
			StringCopy(&cVar2, "TORSO_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
		case 100:
			StringCopy(&cVar2, "TORSO_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		case 101:
			StringCopy(&cVar2, "TORSO_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
		case 102:
			StringCopy(&cVar2, "TORSO_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
		case 103:
			StringCopy(&cVar2, "TORSO_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
		case 104:
			StringCopy(&cVar2, "TORSO_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
		case 105:
			StringCopy(&cVar2, "TORSO_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
		case 106:
			StringCopy(&cVar2, "TORSO_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
		case 107:
			StringCopy(&cVar2, "TORSO_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
		case 108:
			StringCopy(&cVar2, "TORSO_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
		case 109:
			StringCopy(&cVar2, "TORSO_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
		case 110:
			StringCopy(&cVar2, "TORSO_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
		case 111:
			StringCopy(&cVar2, "TORSO_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
		case 112:
			StringCopy(&cVar2, "TORSO_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
		case 113:
			StringCopy(&cVar2, "TORSO_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		case 114:
			StringCopy(&cVar2, "TORSO_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
		case 115:
			StringCopy(&cVar2, "TORSO_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
		case 116:
			StringCopy(&cVar2, "TORSO_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		case 117:
			StringCopy(&cVar2, "TORSO_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
		case 118:
			StringCopy(&cVar2, "TORSO_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		case 119:
			StringCopy(&cVar2, "TORSO_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
		case 120:
			StringCopy(&cVar2, "TORSO_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
		case 121:
			StringCopy(&cVar2, "TORSO_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
		case 122:
			StringCopy(&cVar2, "TORSO_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
		case 123:
			StringCopy(&cVar2, "TORSO_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
		case 124:
			StringCopy(&cVar2, "TORSO_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
		case 125:
			StringCopy(&cVar2, "TORSO_P0_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
		case 126:
			StringCopy(&cVar2, "TORSO_P0_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
		case 127:
			StringCopy(&cVar2, "TORSO_P0_21_14", 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
		case 128:
			StringCopy(&cVar2, "TORSO_P0_21_15", 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
		case 129:
			StringCopy(&cVar2, "TORSO_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		case 130:
			StringCopy(&cVar2, "TORSO_P0_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
		case 131:
			StringCopy(&cVar2, "TORSO_P0_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
		case 132:
			StringCopy(&cVar2, "TORSO_P0_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
		case 133:
			StringCopy(&cVar2, "TORSO_P0_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
		case 134:
			StringCopy(&cVar2, "TORSO_P0_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
		case 135:
			StringCopy(&cVar2, "TORSO_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		case 136:
			StringCopy(&cVar2, "TORSO_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		case 137:
			StringCopy(&cVar2, "TORSO_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
		case 138:
			StringCopy(&cVar2, "TORSO_P0_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
		case 139:
			StringCopy(&cVar2, "TORSO_P0_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
		case 140:
			StringCopy(&cVar2, "TORSO_P0_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
		case 141:
			StringCopy(&cVar2, "TORSO_P0_23_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
		case 142:
			StringCopy(&cVar2, "TORSO_P0_23_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
		case 143:
			StringCopy(&cVar2, "TORSO_P0_23_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
		case 144:
			StringCopy(&cVar2, "TORSO_P0_23_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
		case 145:
			StringCopy(&cVar2, "TORSO_P0_23_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
		case 146:
			StringCopy(&cVar2, "TORSO_P0_23_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
		case 147:
			StringCopy(&cVar2, "TORSO_P0_23_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
		case 148:
			StringCopy(&cVar2, "TORSO_P0_23_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
		case 149:
			StringCopy(&cVar2, "TORSO_P0_23_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
		case 150:
			StringCopy(&cVar2, "TORSO_P0_23_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
		case 151:
			StringCopy(&cVar2, "TORSO_P0_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
		case 152:
			StringCopy(&cVar2, "TORSO_P0_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
		case 153:
			StringCopy(&cVar2, "TORSO_P0_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
		case 154:
			StringCopy(&cVar2, "TORSO_P0_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		case 155:
			StringCopy(&cVar2, "TORSO_P0_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
		case 156:
			StringCopy(&cVar2, "TORSO_P0_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
		case 157:
			StringCopy(&cVar2, "TORSO_P0_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
		case 158:
			StringCopy(&cVar2, "TORSO_P0_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
		case 159:
			StringCopy(&cVar2, "TORSO_P0_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
		case 160:
			StringCopy(&cVar2, "TORSO_P0_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
		case 161:
			StringCopy(&cVar2, "TORSO_P0_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
		case 162:
			StringCopy(&cVar2, "TORSO_P0_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
		case 163:
			StringCopy(&cVar2, "TORSO_P0_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
		case 164:
			StringCopy(&cVar2, "TORSO_P0_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
		case 165:
			StringCopy(&cVar2, "TORSO_P0_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
		case 166:
			StringCopy(&cVar2, "TORSO_P0_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 167:
			StringCopy(&cVar2, "TORSO_P0_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
		case 168:
			StringCopy(&cVar2, "TORSO_P0_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
		case 169:
			StringCopy(&cVar2, "TORSO_P0_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		case 170:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 171:
			StringCopy(&cVar2, "TORSO_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
		case 172:
			StringCopy(&cVar2, "TORSO_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
		case 173:
			StringCopy(&cVar2, "TORSO_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
		case 174:
			StringCopy(&cVar2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 175:
			StringCopy(&cVar2, "TORSO_P0_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
		case 176:
			StringCopy(&cVar2, "TORSO_P0_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
		case 177:
			StringCopy(&cVar2, "TORSO_P0_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
		case 178:
			StringCopy(&cVar2, "TORSO_P0_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
		case 179:
			StringCopy(&cVar2, "TORSO_P0_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
		case 180:
			StringCopy(&cVar2, "TORSO_P0_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
		default:
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_311(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "TORSO_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
		case 3:
			StringCopy(&cVar2, "TORSO_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "TORSO_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "TORSO_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "TORSO_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "TORSO_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "TORSO_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		case 9:
			StringCopy(&cVar2, "TORSO_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		case 10:
			StringCopy(&cVar2, "TORSO_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		case 11:
			StringCopy(&cVar2, "TORSO_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		case 12:
			StringCopy(&cVar2, "TORSO_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		case 13:
			StringCopy(&cVar2, "TORSO_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		case 14:
			StringCopy(&cVar2, "TORSO_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		case 15:
			StringCopy(&cVar2, "TORSO_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
		case 21:
			StringCopy(&cVar2, "TORSO_P0_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
		case 22:
			StringCopy(&cVar2, "TORSO_P0_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
		case 23:
			StringCopy(&cVar2, "TORSO_P0_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
		case 24:
			StringCopy(&cVar2, "TORSO_P0_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
		case 25:
			StringCopy(&cVar2, "TORSO_P0_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
		case 26:
			StringCopy(&cVar2, "TORSO_P0_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
		case 27:
			StringCopy(&cVar2, "TORSO_P0_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
		case 28:
			StringCopy(&cVar2, "TORSO_P0_2_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
		case 29:
			StringCopy(&cVar2, "TORSO_P0_2_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
		case 30:
			StringCopy(&cVar2, "TORSO_P0_2_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
		case 31:
			StringCopy(&cVar2, "TORSO_P0_2_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
		case 32:
			StringCopy(&cVar2, "TORSO_P0_2_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 36:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 37:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 38:
			StringCopy(&cVar2, "TORSO_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		case 39:
			StringCopy(&cVar2, "TORSO_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
		case 40:
			StringCopy(&cVar2, "TORSO_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
		case 41:
			StringCopy(&cVar2, "TORSO_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
		case 42:
			StringCopy(&cVar2, "TORSO_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
		case 43:
			StringCopy(&cVar2, "TORSO_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
		case 44:
			StringCopy(&cVar2, "TORSO_P0_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "TORSO_P0_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
		case 46:
			StringCopy(&cVar2, "TORSO_P0_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
		case 47:
			StringCopy(&cVar2, "TORSO_P0_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
		case 48:
			StringCopy(&cVar2, "TORSO_P0_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
		case 49:
			StringCopy(&cVar2, "TORSO_P0_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
		case 50:
			StringCopy(&cVar2, "TORSO_P0_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
		case 51:
			StringCopy(&cVar2, "TORSO_P0_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
		case 52:
			StringCopy(&cVar2, "TORSO_P0_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
		case 53:
			StringCopy(&cVar2, "TORSO_P0_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
		case 54:
			StringCopy(&cVar2, "TORSO_P0_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
		case 55:
			StringCopy(&cVar2, "TORSO_P0_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
		case 56:
			StringCopy(&cVar2, "TORSO_P0_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
		case 57:
			StringCopy(&cVar2, "TORSO_P0_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
		case 58:
			StringCopy(&cVar2, "TORSO_P0_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
		case 59:
			StringCopy(&cVar2, "TORSO_P0_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
		default:
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_312(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "HAIR_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "HAIR_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "HAIR_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "HAIR_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "HAIR_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		default:
			func_260(iVar10, bParam0, 6, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_313(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		default:
			func_260(iVar10, bParam0, 7, -1);
			return;
	}
	func_254(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_314()
{
	Global_76434[0 /*14*/].f_1 = -1;
	Global_76434[0 /*14*/].f_2 = -1;
	Global_76434[0 /*14*/].f_5 = -1;
	Global_76434[0 /*14*/].f_3 = -1;
	Global_76434[0 /*14*/].f_4 = -1;
	Global_76434[0 /*14*/].f_7 = 0;
	Global_76434[0 /*14*/].f_6 = 0;
	Global_76434[0 /*14*/].f_13 = -1;
	Global_76434[0 /*14*/].f_12 = 0;
	Global_76434[0 /*14*/] = 0;
	StringCopy(&(Global_76434[0 /*14*/].f_8), "NO_LABEL", 16);
}

bool func_315(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	var uVar22;
	int iVar32;
	var uVar33;

	if (UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		return false;
	}
	iVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	Global_76434[1 /*14*/] = { func_251(iVar0, iParam1, bParam2, -1) };
	if (!UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, false))
	{
		return false;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_233(iVar0, bParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_315(bParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar22 = { func_230(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_315(bParam0, 14, uVar22[iVar3]))
							{
								bVar4 = false;
								while (bVar4 <= 19)
								{
									Global_76434[2 /*14*/] = { func_251(iVar0, 14, bVar4, -1) };
									if (Global_76434[2 /*14*/].f_12 == iVar3)
									{
										if (func_315(bParam0, 14, bVar4))
										{
											if (!func_207(iVar0, bParam2, 14, bVar4, &uVar5, &(Global_76434[2 /*14*/])))
											{
												return false;
											}
										}
									}
									bVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						bVar1 = func_241(bParam0, iVar2);
						Global_76434[2 /*14*/] = { func_251(iVar0, iVar2, bVar1, -1) };
						if (!func_207(iVar0, bParam2, iVar2, bVar1, &uVar5, &(Global_76434[2 /*14*/])))
						{
							return false;
						}
					}
				}
			}
			iVar2++;
		}
		return true;
	}
	else if (iParam1 == 13)
	{
		uVar33 = { func_230(iVar0, bParam2) };
		iVar32 = 0;
		while (iVar32 <= 8)
		{
			if (!func_315(bParam0, 14, uVar33[iVar32]))
			{
				return false;
			}
			iVar32++;
		}
		return true;
	}
	else if (iParam1 == 14)
	{
		if (UNK_0x98F1B512A2CC07C5(bParam0, Global_76434[1 /*14*/].f_12) == Global_76434[1 /*14*/].f_3 && (UNK_0x22286A85EDEAEC56(bParam0, Global_76434[1 /*14*/].f_12) == Global_76434[1 /*14*/].f_4 || Global_76434[1 /*14*/].f_3 == -1))
		{
			return true;
		}
	}
	else if (Global_76434[1 /*14*/].f_3 == UNK_0x36C584991B4C183F(bParam0, func_211(iParam1)) && Global_76434[1 /*14*/].f_4 == UNK_0xDADA8E1DD0D0D9D9(bParam0, func_211(iParam1)))
	{
		return true;
	}
	return false;
}

void func_316(bool bParam0)
{
	bool bVar0;

	bVar0 = UNK_0xA30EC016B12C03E4();
	if (!UNK_0x131F22FE6F47A65D(bVar0))
	{
		if (bParam0)
		{
		}
		UNK_0x98E4DC66A651C9FA(bVar0, bParam0, 16);
		UNK_0x98E4DC66A651C9FA(bVar0, bParam0, 32);
	}
	func_27(1, 1, 0, 0, 0, 0);
}

void func_317()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	func_37();
	func_385();
	if (func_23(Local_112.f_9))
	{
		vVar1 = { UNK_0x68F4C0EC296D3901(Local_112.f_9, false) };
		func_384(Local_112.f_9, &iLocal_472, 1126825984 /* Float: 170f */, 7);
		func_376(Local_112.f_9, &(Local_112.f_19), 1126825984 /* Float: 170f */, 7);
		func_364();
		switch (iLocal_100)
		{
			case 0:
				UNK_0x0E2400AB9174FA81(5, joaat("PLAYER"), bLocal_664);
				UNK_0x0E2400AB9174FA81(5, bLocal_664, joaat("PLAYER"));
				bLocal_476 = UNK_0x7F6DC62EA9922664(Local_112.f_9);
				vLocal_701 = { UNK_0x68F4C0EC296D3901(Local_112.f_9, false) };
				func_363(&vLocal_704, vLocal_701);
				func_362(Local_112.f_9);
				if (Local_112.f_10 != 22 && Local_112.f_10 != 23)
				{
					UNK_0xA3BF0AA5A2608191(Local_112.f_9);
					Local_112.f_18 = (UNK_0x1C0640BA9A7327B3() - 3000);
					Local_112.f_10 = 22;
				}
				if (func_23(Local_112.f_9))
				{
					if (!UNK_0xE4EDC4B0E92C078B(Local_112.f_8))
					{
						Local_112.f_8 = func_361(Local_112.f_9, 1, 0, 5);
					}
					UNK_0xE910A68AA670B4AA(Local_112.f_9);
				}
				iLocal_473 = -1;
				iLocal_474 = -1;
				bLocal_448 = false;
				bLocal_418 = false;
				bLocal_417 = false;
				bLocal_487 = "BB3_J8";
				iLocal_462 = UNK_0x1C0640BA9A7327B3();
				func_360(&(Local_112.f_8), "", "", &iLocal_465, iLocal_466, 0);
				iLocal_100 = 1;
				break;
			case 1:
				if (!bLocal_448)
				{
					func_360(&(Local_112.f_8), "", "", &iLocal_465, iLocal_466, 0);
					func_332(&uLocal_44, Local_112.f_9, 0, 0, 1, 1, 1);
					if (Local_112.f_10 == 22 || Local_112.f_10 == 23)
					{
						if (iLocal_474 == -1)
						{
							iLocal_474 = UNK_0x1C0640BA9A7327B3();
						}
						if (iLocal_473 == -1)
						{
							iLocal_473 = UNK_0x1C0640BA9A7327B3();
						}
						else if (func_124(iLocal_473, 8000))
						{
							iVar0 = 1;
						}
						if (func_329(Local_112.f_9, vLocal_680, iVar0, 0, 1, bLocal_476))
						{
							if ((func_124(iLocal_474, 5000) || func_107(vLocal_704, 0f, 0f, 0f, 0)) || (!func_59(vVar1, vLocal_704, 8.5f) && !func_59(vVar1, vLocal_701, 8.5f)))
							{
								func_328();
								Local_112.f_17 = UNK_0x1C0640BA9A7327B3();
								func_326(&uLocal_44, 0, 0);
								bLocal_448 = true;
							}
						}
						else
						{
							if (!bLocal_417)
							{
								if (!func_124(iLocal_462, 2500))
								{
									if (!func_62())
									{
										if (func_116(Local_112.f_9, vLocal_680, 30f))
										{
											if (func_75(&uLocal_499, cLocal_492, "BB3_J7", 4, 0, 0, 0))
											{
												iLocal_462 = UNK_0x1C0640BA9A7327B3();
												bLocal_417 = true;
											}
										}
									}
								}
								else
								{
									bLocal_417 = true;
								}
							}
							else if (!func_62())
							{
								if (func_124(iLocal_462, UNK_0x09AC81E49EA267F7(5000, 12000)))
								{
									if (func_116(Local_112.f_9, vLocal_680, 30f))
									{
										if (UNK_0xE9FDA1035CFEA94F(Local_112.f_9))
										{
											if (UNK_0x09AC81E49EA267F7(false, 101) < 30)
											{
												if (func_75(&uLocal_499, cLocal_493, "BBC_T13", 4, 0, 0, 0))
												{
													iLocal_462 = UNK_0x1C0640BA9A7327B3();
												}
											}
											else if (func_75(&uLocal_499, cLocal_492, "BB3_FLEE", 4, 0, 0, 0))
											{
												iLocal_462 = UNK_0x1C0640BA9A7327B3();
											}
										}
									}
								}
							}
							else
							{
								iLocal_462 = UNK_0x1C0640BA9A7327B3();
							}
							func_325(Local_112.f_9, vLocal_680, iLocal_474, 925353388);
						}
					}
					else
					{
						func_328();
						Local_112.f_17 = UNK_0x1C0640BA9A7327B3();
						func_326(&uLocal_44, 0, 0);
						bLocal_448 = true;
					}
				}
				else
				{
					func_328();
					if (!func_116(Local_112.f_9, vLocal_680, 10f))
					{
						if (!bLocal_437)
						{
							if (!func_323(bLocal_487, 1))
							{
								func_321(&(Local_112.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_465, &iLocal_466, 1, 1);
								bLocal_437 = true;
							}
						}
						else
						{
							func_360(&(Local_112.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_465, iLocal_466, 1);
						}
					}
					else
					{
						if (!bLocal_418)
						{
							if (!UNK_0x869EFD0BC0868856(Local_112.f_9) && !UNK_0x405E212DDE472467(Local_112.f_9, 0))
							{
								if (func_320("BBS_APPSUS", 0, 0) || func_320("BBS_APPSUS2", 0, 0))
								{
									UNK_0x790015DC92C918E2();
								}
								if (!func_62())
								{
									func_5();
								}
								if (func_75(&uLocal_499, cLocal_492, bLocal_487, 4, 0, 0, 0))
								{
									bLocal_418 = true;
								}
							}
						}
						else if (!func_62())
						{
							iLocal_100 = 2;
						}
						func_360(&(Local_112.f_8), "", "", &iLocal_465, iLocal_466, 0);
					}
					if (func_318(&(Local_112.f_9)))
					{
						bLocal_453 = true;
						iLocal_100 = 0;
					}
				}
				break;
			case 2:
				if (func_320("BBS_APPSUS", 0, 0) || func_320("BBS_APPSUS2", 0, 0))
				{
					UNK_0x790015DC92C918E2();
				}
				UNK_0xB975E4541DDAB1F5(0);
				bLocal_418 = true;
				func_328();
				UNK_0x68FCFE10774F5C97(5, joaat("PLAYER"), bLocal_664);
				UNK_0x68FCFE10774F5C97(5, bLocal_664, joaat("PLAYER"));
				func_121(&(Local_112.f_8));
				bLocal_418 = true;
				Local_112.f_17 = UNK_0x1C0640BA9A7327B3();
				func_326(&uLocal_44, 0, 0);
				bLocal_449 = false;
				bLocal_453 = false;
				bLocal_419 = true;
				func_134(3);
				break;
		}
	}
}

bool func_318(var uParam0)
{
	vector3 vVar0;

	if (func_23(*uParam0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(*uParam0, false) };
		if (!func_319(uParam0))
		{
			if (UNK_0x723EE7F83DF1497D(vVar0 - Vector(7f, 7f, 7f), vVar0 + Vector(7f, 7f, 7f), 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_319(var uParam0)
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0x405E212DDE472467(*uParam0, 0))
		{
			if (UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0) == UNK_0x6937EA2286828455(*uParam0, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_320(bool bParam0, int iParam1, bool bParam2)
{
	UNK_0x18B60B994182620C(bParam0);
	if (iParam1 == 1)
	{
		UNK_0x6B012227B3921E18(bParam2);
	}
	return UNK_0xB165082A56EE6E7F();
}

void func_321(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (UNK_0xE4EDC4B0E92C078B(*uParam0))
	{
		if (bParam5)
		{
			UNK_0x61755AC17D8F538E(*uParam0, true);
			UNK_0xDC5B2F9D0CCE3A10(*uParam0, "BLIP_ENEMY");
			if (bParam6 && !func_62())
			{
				if (!UNK_0xD17F06053799A7CA() || func_320(bParam2, 0, 0))
				{
					func_322(bParam1, 7500, 0);
				}
			}
		}
		else
		{
			UNK_0x61755AC17D8F538E(*uParam0, 3);
			UNK_0xDC5B2F9D0CCE3A10(*uParam0, "BLIP_FRIEND");
			if (bParam6 && !func_62())
			{
				if (!UNK_0xD17F06053799A7CA() || func_320(bParam1, 0, 0))
				{
					func_322(bParam2, 7500, 0);
				}
			}
		}
		*iParam3 = UNK_0x1C0640BA9A7327B3();
		*iParam4 = UNK_0x1C0640BA9A7327B3();
	}
}

void func_322(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

bool func_323(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (func_62())
	{
		Var0 = { func_324() };
		if (UNK_0x7F8A39872A07D2CE(&Var0, bParam0))
		{
			return true;
		}
		if (bParam1)
		{
			if (UNK_0x7F8A39872A07D2CE(&Var0, "NULL"))
			{
				return true;
			}
		}
	}
	return false;
}

struct<6> func_324()
{
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

void func_325(bool bParam0, vector3 vParam1, int iParam4, float fParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;

	fVar1 = 64f;
	fVar2 = 625f;
	fVar3 = 16000f;
	fVar4 = SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bParam0, true), vParam1);
	iVar5 = (UNK_0x1C0640BA9A7327B3() - iParam4);
	fParam5 = (fParam5 * IntToFloat(iVar5));
	if (fVar4 > fVar3 && UNK_0x03068588A1FCED1A(bParam0))
	{
		fVar0 = 1f;
	}
	else if (fVar4 > fVar2)
	{
		if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			fVar0 = 1.7f;
			fVar0 = (fVar0 - fParam5);
			if (fVar0 < 1.5f)
			{
				fVar0 = 1.5f;
			}
		}
		else
		{
			fVar0 = 2f;
		}
	}
	else if (fVar4 < fVar1)
	{
		fVar0 = 2.4f;
		fVar0 = (fVar0 - fParam5);
		if (fVar0 < 1.5f)
		{
			fVar0 = 1.5f;
		}
	}
	else
	{
		fVar0 = 2f;
		fVar0 = (fVar0 - fParam5);
		if (fVar0 < 1.5f)
		{
			fVar0 = 1.5f;
		}
	}
	UNK_0xCAF7AE54F764D5AA(bParam0, fVar0);
}

void func_326(var uParam0, bool bParam1, int iParam2)
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
		if (func_327(uParam0->f_3))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
	if (!UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (func_327(bVar0))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
}

bool func_327(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_328()
{
	if (func_23(Local_112.f_9))
	{
		if (((Local_112.f_10 != 32 && Local_112.f_10 != 33) && Local_112.f_10 != 30) && Local_112.f_10 != 31)
		{
			UNK_0x68FCFE10774F5C97(5, joaat("PLAYER"), bLocal_664);
			UNK_0x68FCFE10774F5C97(5, bLocal_664, joaat("PLAYER"));
			if (UNK_0x16102BEDC7435774(Local_112.f_9))
			{
				UNK_0x0A94A109271BE75A(Local_112.f_9);
			}
			UNK_0x8FB4E06C94958F84(Local_112.f_9);
			UNK_0xA3BF0AA5A2608191(Local_112.f_9);
			UNK_0x71F6097CACDECCC0(Local_112.f_9);
			UNK_0xE3A2D2E900FEFBE7(Local_112.f_9, 1);
			UNK_0x5745EA6329A91E29(Local_112.f_9, joaat("WEAPON_UNARMED"), true);
			UNK_0xE69C5AEBE90D20B1(Local_112.f_9, 0);
			UNK_0x0B42C743EF171FF5(Local_112.f_9, false);
			UNK_0xBAFED2F6486F771A(Local_112.f_9, 1, false);
			UNK_0xAFF39FB306F8E232(Local_112.f_9, 17, true);
			UNK_0xAFF39FB306F8E232(Local_112.f_9, 0, false);
			UNK_0xAFF39FB306F8E232(Local_112.f_9, 5, false);
			if (UNK_0x405E212DDE472467(Local_112.f_9, 1))
			{
				UNK_0x75CDA8644CD3B5F5(Local_112.f_9, 0, 0);
			}
			iLocal_481 = UNK_0x1C0640BA9A7327B3();
			Local_112.f_10 = 32;
		}
	}
}

bool func_329(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	if (func_23(bParam0))
	{
		if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
		{
			if (UNK_0x0361981EE62202D8(bParam0, false, 2))
			{
				if (!UNK_0x0361981EE62202D8(bParam0, joaat("WEAPON_STUNGUN"), 0))
				{
					UNK_0xD0E45B74EA5CF129(bParam0);
					if (UNK_0xBA7C39B3917A9F4D(bParam0, &iVar0))
					{
						UNK_0x12D9DBA85A416C88(bParam0);
						switch (iVar0)
						{
							case 11816:
							case 23553:
							case 24816:
							case 24817:
							case 24818:
							case 39317:
							case 58271:
							case 63931:
							case 51826:
							case 36864:
								UNK_0x12D9DBA85A416C88(bParam0);
								UNK_0xD0E45B74EA5CF129(bParam0);
								UNK_0xE910A68AA670B4AA(bParam0);
								return true;
						}
					}
				}
			}
			UNK_0x12D9DBA85A416C88(bParam0);
			UNK_0xD0E45B74EA5CF129(bParam0);
			UNK_0xE910A68AA670B4AA(bParam0);
			if (UNK_0x7F6DC62EA9922664(bParam0) < bParam7)
			{
				return true;
			}
			if (UNK_0x869EFD0BC0868856(bParam0))
			{
				return true;
			}
			if (func_331(bParam0, vParam1))
			{
				return true;
			}
		}
		UNK_0xE910A68AA670B4AA(bParam0);
		if (bParam5)
		{
			if (func_330(bParam0, vParam1, 1112014848 /* Float: 50f */, 1084227584 /* Float: 5f */))
			{
				return true;
			}
		}
		if (bParam6)
		{
			if (UNK_0x15D0A3E61766C539(bParam0, 0))
			{
				return true;
			}
		}
		if (bParam4)
		{
			if (func_116(bParam0, vParam1, 5f))
			{
				if (UNK_0x869EFD0BC0868856(bParam0))
				{
					return true;
				}
				if (func_116(bParam0, vParam1, 1f))
				{
					return true;
				}
			}
			if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				if (UNK_0x1B3D109B39CC2C89(bParam0, UNK_0x16F2683693E537C9()))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_330(bool bParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (func_116(bParam0, vParam1, fParam4))
	{
		if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0xD3DCEC81D13AAFB1(UNK_0x68F4C0EC296D3901(bParam0, true), fParam5, true))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_331(bool bParam0, vector3 vParam1)
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0xBD6AE8B48E2411D7(UNK_0xD803B885F5E47A62()) >= 0 && UNK_0xBD6AE8B48E2411D7(UNK_0xD803B885F5E47A62()) < 500)
		{
			if (func_116(bParam0, vParam1, 3.5f) || UNK_0x1B3D109B39CC2C89(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_332(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_333(uParam0, bParam1, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_333(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_334(uParam0, bParam1, 0f, 0f, 0f, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_334(var uParam0, bool bParam1, vector3 vParam2, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
	{
		func_326(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_335(uParam0, bParam1, vParam2, iParam5, iParam6, bParam7, iParam8, bParam9);
}

void func_335(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_327(bVar0))
	{
		func_359();
	}
	if (func_358(bParam1) && UNK_0x4FC40AB0ECCE6E18(bParam1))
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
			if (func_353(uParam0, bParam7, bParam9, 0))
			{
				func_350(uParam0, bParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_340(bVar0))
				{
					if ((UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0)) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if ((bVar1 && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
						{
							if (!func_327(bVar0))
							{
								func_339(bVar0, -1);
								uParam0->f_3 = bVar0;
								if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
								{
									func_338(1);
								}
							}
						}
					}
				}
			}
			else if (func_340(bVar0))
			{
				if (UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0))
				{
					if (((UNK_0x0A059E0DB9253280(bParam1) && bVar1) && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
					{
						if (!func_327(bVar0))
						{
							func_339(bVar0, -1);
							uParam0->f_3 = bVar0;
							if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
							{
								func_338(1);
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
				if (func_327(bParam5))
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
						func_326(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(6) == 3 || UNK_0xA4FD7964FEE91ED8(6) == 4)
					{
						func_326(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(4) == 3 || UNK_0xA4FD7964FEE91ED8(4) == 4)
					{
						func_326(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(5) == 3 || UNK_0xA4FD7964FEE91ED8(5) == 4)
					{
						func_326(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(2) == 3 || UNK_0xA4FD7964FEE91ED8(2) == 4)
					{
						func_326(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0xF3545351E9CBB11F() == 3 || UNK_0xF3545351E9CBB11F() == 4)
				{
					func_326(uParam0, bVar0, 1);
				}
			}
			if (!func_353(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_337(uParam0))
				{
					func_336(uParam0);
				}
			}
		}
	}
	else
	{
		func_326(uParam0, bVar0, 0);
	}
}

void func_336(var uParam0)
{
	if (func_358(UNK_0x16F2683693E537C9()))
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

bool func_337(var uParam0)
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

int func_338(bool bParam0)
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

void func_339(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_340(bool bParam0)
{
	if (!func_341(1, 1, 0))
	{
		if ((!UNK_0xEA6BC48857E0AC4C(bParam0) && func_327(bParam0)) || func_327("CMN_HINT"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		return false;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_338(0) < 3)
			{
				return true;
			}
			break;
		case 4:
			if (func_338(0) < 1)
			{
				return true;
			}
			break;
		case 5:
		case 15:
			if (func_338(0) < 1)
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

bool func_341(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_17(0))
	{
		return false;
	}
	if (func_349())
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
	if ((func_348() || func_347(Global_4456448.f_232883)) || func_346())
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			bVar1 = func_345(UNK_0x16F2683693E537C9(), 0);
			if (((UNK_0x137240CA2BADB0D2(bVar0, bVar1) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("APC") && bVar1 != -1)) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("AKULA") && bVar1 != -1)) || (((UNK_0x134B62B726CEC8E6(bVar0) == joaat("RIOT2") && bVar1 == 0) && func_344(bVar0, 10)) && UNK_0x0ECB5CA5140957AD(bVar0, 10) != -1))
			{
				return false;
			}
		}
	}
	if (Global_1686722)
	{
		return false;
	}
	if (func_342(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_342(bool bParam0)
{
	if (bParam0 != func_82())
	{
		if (func_343(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && bParam0 == UNK_0xD803B885F5E47A62()) && func_343(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

bool func_343(bool bParam0, bool bParam1, bool bParam2)
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

bool func_344(bool bParam0, int iParam1)
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

bool func_345(bool bParam0, int iParam1)
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

bool func_346()
{
	return Global_2450632.f_17;
}

bool func_347(int iParam0)
{
	return iParam0 == 51;
}

bool func_348()
{
	return Global_2450632.f_16;
}

bool func_349()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_350(var uParam0, bool bParam1, vector3 vParam2, bool bParam5)
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
		func_326(uParam0, 0, 0);
	}
	if (func_107(vParam2, 0f, 0f, 0f, 0))
	{
		if (UNK_0xEC560E589DF8370E(bParam1))
		{
			bVar0 = UNK_0x940C1429253D3B1B(bParam1);
			if (!UNK_0x405E212DDE472467(bVar0, 0))
			{
				if (UNK_0x34BFC6F0CB887BC2(bVar0))
				{
					if (!func_351())
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

int func_351()
{
	return func_352(UNK_0xD803B885F5E47A62());
}

int func_352(bool bParam0)
{
	if (UNK_0x134B62B726CEC8E6(UNK_0x9539D44F3E4492F6(bParam0)) == joaat("MP_F_FREEMODE_01"))
	{
		return 1;
	}
	return 0;
}

bool func_353(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_357(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_356(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_356(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_357(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_337(uParam0))
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
						if (!func_357(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_356(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_356(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_357(bParam1, bParam2, bParam3))
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
					if (!func_357(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_356(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_356(bParam1, bParam2, bParam3) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
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
				else if (!func_357(bParam1, bParam2, bParam3))
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
						if (func_355(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_354(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || func_354(bParam1, bParam2, bParam3))
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
					else if (func_355(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		case 4:
			if (!func_337(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_341(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_359();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_354(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_341(bParam0, bParam1, bParam2))
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

bool func_355(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_341(bParam0, bParam1, bParam2))
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

bool func_356(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_341(bParam0, bParam1, bParam2))
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

bool func_357(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_341(bParam0, bParam1, bParam2))
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

bool func_358(bool bParam0)
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

void func_359()
{
	UNK_0x5D96D8530B3D0904(&Global_7357, 4);
}

void func_360(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (UNK_0xE4EDC4B0E92C078B(*uParam0))
	{
		if ((UNK_0x1C0640BA9A7327B3() - *iParam3) > 500)
		{
			if (UNK_0x8FBD6436A27198B4(*uParam0) == 1)
			{
				UNK_0x61755AC17D8F538E(*uParam0, 3);
				UNK_0xDC5B2F9D0CCE3A10(*uParam0, "BLIP_FRIEND");
				if ((UNK_0x1C0640BA9A7327B3() - iParam4) < 7500 && bParam5)
				{
					if (!UNK_0xD17F06053799A7CA() || func_320(bParam1, 0, 0))
					{
						func_322(bParam2, 7500, 0);
					}
				}
				*iParam3 = UNK_0x1C0640BA9A7327B3();
			}
			else
			{
				UNK_0x61755AC17D8F538E(*uParam0, true);
				UNK_0xDC5B2F9D0CCE3A10(*uParam0, "BLIP_ENEMY");
				if ((UNK_0x1C0640BA9A7327B3() - iParam4) < 7500 && bParam5)
				{
					if (!UNK_0xD17F06053799A7CA() || func_320(bParam2, 0, 0))
					{
						func_322(bParam1, 7500, 0);
					}
				}
				*iParam3 = UNK_0x1C0640BA9A7327B3();
			}
		}
	}
	if ((UNK_0x1C0640BA9A7327B3() - iParam4) > 7500)
	{
		if (func_320(bParam1, 0, 0))
		{
			UNK_0x2F23E8033F1ADDD9(bParam1);
		}
		if (func_320(bParam2, 0, 0))
		{
			UNK_0x2F23E8033F1ADDD9(bParam2);
		}
	}
}

int func_361(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	bVar1 = true;
	if (bVar1)
	{
		if (func_429(bParam0))
		{
			iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
			UNK_0x321E019A46034F39(iVar0, bParam2);
			UNK_0x2A065371C9D96655(iVar0, iParam3);
			UNK_0x516E63E474722206(iVar0, 0.7f);
			if (!bParam1)
			{
				UNK_0x516E63E474722206(iVar0, 0.5f);
			}
		}
	}
	return iVar0;
}

void func_362(bool bParam0)
{
	UNK_0x6DF7BF67E86AAE86(bParam0, bLocal_664);
	UNK_0x4E885A246A9D983A(bParam0, 177, true);
	UNK_0x4E885A246A9D983A(bParam0, 116, true);
	UNK_0x4E885A246A9D983A(bParam0, 42, true);
	UNK_0x4E885A246A9D983A(bParam0, 118, true);
	UNK_0x23CBFFA16CA5CF45(bParam0, 10f, 5);
	UNK_0x11AD11297DC58CC7(bParam0, true);
}

void func_363(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { vParam1 - Vector(7f, 7f, 7f) };
	vVar3 = { vParam1 + Vector(7f, 7f, 7f) };
	if (UNK_0x723EE7F83DF1497D(vVar0, vVar3, 0))
	{
		if (UNK_0x6541D66FEEF574B7(vVar0, vVar3, joaat("WEAPON_GRENADE"), uParam0, 0))
		{
		}
		else if (UNK_0x6541D66FEEF574B7(vVar0, vVar3, joaat("WEAPON_MOLOTOV"), uParam0, 0))
		{
		}
		else if (UNK_0x6541D66FEEF574B7(vVar0, vVar3, joaat("WEAPON_SMOKEGRENADE"), uParam0, 0))
		{
		}
		else if (UNK_0x6541D66FEEF574B7(vVar0, vVar3, joaat("WEAPON_BZGAS"), uParam0, 0))
		{
		}
		else if (UNK_0x6541D66FEEF574B7(vVar0, vVar3, joaat("WEAPON_STICKYBOMB"), uParam0, 0))
		{
		}
		else if (UNK_0x6541D66FEEF574B7(vVar0, vVar3, joaat("WEAPON_FLARE"), uParam0, 0))
		{
		}
		else
		{
			*uParam0 = { 0f, 0f, 0f };
		}
	}
	else
	{
		*uParam0 = { 0f, 0f, 0f };
	}
}

void func_364()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	vector3 vVar4;
	float fVar7;
	float fVar8;

	if (func_23(Local_112.f_9))
	{
		if (iLocal_253 == 0)
		{
			func_375(&(Local_112.f_9), &bLocal_454);
			if (func_374())
			{
				if (bLocal_448 || iLocal_98 == 7)
				{
					if (bLocal_454)
					{
						UNK_0x79C43E2BAC7C696F(Local_112.f_9, func_373(), 1048576000 /* Float: 0.25f */);
						iLocal_253 = 2;
					}
					else
					{
						UNK_0x79C43E2BAC7C696F(Local_112.f_9, func_372(), 1048576000 /* Float: 0.25f */);
						iLocal_253 = 1;
					}
				}
			}
		}
		else if (iLocal_253 == 1)
		{
			func_375(&(Local_112.f_9), &bLocal_454);
			if (bLocal_454)
			{
				if (func_374())
				{
					UNK_0x79C43E2BAC7C696F(Local_112.f_9, func_373(), 1048576000 /* Float: 0.25f */);
					iLocal_253 = 2;
				}
			}
		}
		if (!UNK_0xE9B814896D415EDD(UNK_0x16F2683693E537C9()))
		{
			switch (Local_112.f_10)
			{
				case 0:
					if (func_116(Local_112.f_9, vLocal_680, 20f))
					{
						if (!UNK_0xC7E2E6167C09468B(Local_112.f_9, UNK_0x16F2683693E537C9()))
						{
							UNK_0x0C8C0C840C2D1AD2(Local_112.f_9, UNK_0x16F2683693E537C9(), -1, 0, 2);
						}
					}
					else if (UNK_0xC7E2E6167C09468B(Local_112.f_9, UNK_0x16F2683693E537C9()))
					{
						UNK_0xBC43ED9FE28DB191(Local_112.f_9);
					}
					break;
				case 1:
					break;
				case 2:
					break;
				case 3:
					if (func_124(Local_112.f_18, UNK_0x09AC81E49EA267F7(250, 500)))
					{
						if (UNK_0xACCBB8E1BDF4D6BE(Local_112.f_9))
						{
							UNK_0x2ECF845953E95D1B(Local_112.f_9);
						}
						UNK_0x0C8C0C840C2D1AD2(Local_112.f_9, UNK_0x16F2683693E537C9(), -1, 0, 2);
						UNK_0xF96A174EE26D7588(Local_112.f_9, UNK_0x16F2683693E537C9(), -1);
						Local_112.f_10 = 4;
					}
					break;
				case 4:
					if (!func_64(Local_112.f_9, -875674219))
					{
						Local_112.f_18 = (UNK_0x1C0640BA9A7327B3() - 5000);
						Local_112.f_10 = 3;
					}
					break;
				case 5:
					if (!UNK_0xC7E2E6167C09468B(Local_112.f_9, UNK_0x16F2683693E537C9()))
					{
						UNK_0x0C8C0C840C2D1AD2(Local_112.f_9, UNK_0x16F2683693E537C9(), -1, 0, 2);
					}
					UNK_0xE185F110925D87DB(Local_112.f_9, UNK_0x16F2683693E537C9(), 20000, 2.5f, 1f, 1073741824 /* Float: 2f */, 0);
					UNK_0x11AD11297DC58CC7(Local_112.f_9, true);
					Local_112.f_10 = 6;
					break;
				case 6:
					if (!func_116(Local_112.f_9, vLocal_680, 3.5f))
					{
						if (!func_64(Local_112.f_9, 1227113341))
						{
							Local_112.f_10 = 5;
						}
						else
						{
							UNK_0x20CD641B34794F65(Local_112.f_9, 1.1f);
						}
					}
					else if (!func_64(Local_112.f_9, -875674219))
					{
						UNK_0xF96A174EE26D7588(Local_112.f_9, UNK_0x16F2683693E537C9(), -1);
					}
					break;
				case 7:
					if (func_124(Local_112.f_18, UNK_0x09AC81E49EA267F7(250, 1000)))
					{
						if (UNK_0xACCBB8E1BDF4D6BE(Local_112.f_9))
						{
							UNK_0x2ECF845953E95D1B(Local_112.f_9);
						}
						UNK_0xB35CCEC0D4946813(Local_112.f_9, 0);
						UNK_0xAFF39FB306F8E232(Local_112.f_9, 5, true);
						UNK_0xAFF39FB306F8E232(Local_112.f_9, 0, false);
						UNK_0x6C3AE6E278DB3D0E(Local_112.f_9, UNK_0x16F2683693E537C9(), 0, 16);
						UNK_0x11AD11297DC58CC7(Local_112.f_9, true);
						Local_112.f_10 = 8;
					}
					break;
				case 8:
					if (!func_64(Local_112.f_9, 780511057))
					{
						Local_112.f_18 = (UNK_0x1C0640BA9A7327B3() - 5000);
						Local_112.f_10 = 7;
					}
					break;
				case 9:
					UNK_0xAFF39FB306F8E232(Local_112.f_9, 5, false);
					UNK_0x46CB381A452EF99D(Local_112.f_9, 1);
					if (!UNK_0x869EFD0BC0868856(Local_112.f_9))
					{
						UNK_0x64B1AD81046CB800(Local_112.f_9, 1000, 1000, 0, 1, 1, 0);
					}
					Local_112.f_10 = 10;
					break;
				case 10:
					if (!UNK_0x869EFD0BC0868856(Local_112.f_9))
					{
						if (!func_64(Local_112.f_9, 474215631) && !func_64(Local_112.f_9, -1519143300))
						{
							if (!UNK_0x70EED0761B82965E(Local_112.f_9))
							{
								UNK_0xD1B84FD51EDBBCA3(Local_112.f_9, "CODE_HUMAN_STAND_COWER");
								UNK_0x8BE3D040D15AEA1D(Local_112.f_9, -1);
								UNK_0x11AD11297DC58CC7(Local_112.f_9, true);
							}
						}
					}
					break;
				case 38:
					UNK_0xCAE036C45E7FC720(Local_112.f_9, &iVar0, 1);
					if (iVar0 == joaat("WEAPON_UNARMED"))
					{
						UNK_0x262EF6C6306BEA6C(Local_112.f_9, joaat("WEAPON_PISTOL"), -1, false, true);
					}
					UNK_0xAFF39FB306F8E232(Local_112.f_9, 0, false);
					UNK_0xB35CCEC0D4946813(Local_112.f_9, 0);
					UNK_0x298903DD96203C2C(Local_112.f_9, 15);
					UNK_0xA3BF0AA5A2608191(Local_112.f_9);
					UNK_0x11AD11297DC58CC7(Local_112.f_9, true);
					Local_112.f_10 = 39;
					break;
				case 39:
					if (!func_64(Local_112.f_9, 242628503))
					{
						fVar3 = UNK_0x79833B02DBD2A244(5f, 8f);
						UNK_0xDD353D0E9C789D0E(&iLocal_484);
						UNK_0x533AA72A4F1CA75A(false, UNK_0x16F2683693E537C9(), fVar3, 30f);
						UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), 2000, 0);
						UNK_0x75ABDC5F81978924(iLocal_484);
						UNK_0x78ADC381772E3D54(Local_112.f_9, iLocal_484);
						UNK_0xF82EA857DA10E0CD(&iLocal_484);
						UNK_0x11AD11297DC58CC7(Local_112.f_9, true);
					}
					break;
				case 40:
					if (func_124(Local_112.f_18, UNK_0x09AC81E49EA267F7(250, 750)))
					{
						UNK_0xAFF39FB306F8E232(Local_112.f_9, 0, true);
						UNK_0xB35CCEC0D4946813(Local_112.f_9, 0);
						UNK_0x298903DD96203C2C(Local_112.f_9, UNK_0x09AC81E49EA267F7(10, 22));
						UNK_0x29CD9554726C7577(Local_112.f_9, UNK_0x09AC81E49EA267F7(30, 60));
						UNK_0xAA714ADDDC372E0F(Local_112.f_9, 2055493265);
						UNK_0xCAE036C45E7FC720(Local_112.f_9, &iVar0, 1);
						if (iVar0 == joaat("WEAPON_UNARMED"))
						{
							UNK_0x262EF6C6306BEA6C(Local_112.f_9, joaat("WEAPON_PISTOL"), -1, false, true);
							UNK_0x5745EA6329A91E29(Local_112.f_9, joaat("WEAPON_PISTOL"), false);
						}
						UNK_0x6C3AE6E278DB3D0E(Local_112.f_9, UNK_0x16F2683693E537C9(), 0, 16);
						UNK_0x11AD11297DC58CC7(Local_112.f_9, true);
						Local_112.f_10 = 41;
					}
					break;
				case 41:
					if (!func_64(Local_112.f_9, 780511057))
					{
						Local_112.f_18 = (UNK_0x1C0640BA9A7327B3() - 5000);
						Local_112.f_10 = 40;
					}
					break;
				case 13:
					if ((!UNK_0x92444005288A72ED(Local_112.f_9) && !UNK_0x869EFD0BC0868856(Local_112.f_9)) && !UNK_0x15D0A3E61766C539(Local_112.f_9, 0))
					{
						if (func_124(Local_112.f_18, UNK_0x09AC81E49EA267F7(250, 500)))
						{
							UNK_0x9DD8618CA5BF832D(Local_112.f_9, 222, true);
							UNK_0xDD353D0E9C789D0E(&iLocal_484);
							if (!func_116(Local_112.f_9, Local_112.f_13, 0.5f))
							{
								UNK_0x96167B03C5A77156(false, Local_112.f_13, 1f, 20000, 0.25f, 512, 1193033728);
							}
							UNK_0xE655C47E46F9A7E4(false, 190f, 0);
							UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@bailbond_mountain", "base_jump_idle", 4f, -8f, -1, 1, false, 0, 0, 0);
							UNK_0x75ABDC5F81978924(iLocal_484);
							UNK_0x78ADC381772E3D54(Local_112.f_9, iLocal_484);
							UNK_0xF82EA857DA10E0CD(&iLocal_484);
							UNK_0x11AD11297DC58CC7(Local_112.f_9, true);
							Local_112.f_10 = 14;
						}
					}
					else
					{
						Local_112.f_10 = 18;
					}
					break;
				case 14:
					if (!UNK_0x15D0A3E61766C539(Local_112.f_9, 0))
					{
						if (!func_64(Local_112.f_9, 242628503))
						{
							Local_112.f_10 = 13;
						}
						else if (UNK_0xB4ECF989E2C1DAC8(Local_112.f_9, "oddjobs@bailbond_mountain", "base_jump_idle", 3))
						{
							Local_112.f_18 = UNK_0x1C0640BA9A7327B3();
							Local_112.f_10 = 15;
						}
					}
					else
					{
						Local_112.f_10 = 18;
					}
					break;
				case 15:
					if (UNK_0xB4ECF989E2C1DAC8(Local_112.f_9, "oddjobs@bailbond_mountain", "base_jump_idle", 3))
					{
						if (func_124(Local_112.f_18, UNK_0x09AC81E49EA267F7(250, 500)))
						{
							Local_112.f_18 = (UNK_0x1C0640BA9A7327B3() - 5000);
							Local_112.f_10 = 16;
						}
					}
					else
					{
						Local_112.f_10 = 13;
					}
					break;
				case 16:
					UNK_0x7980D72D61BEF4D5(Local_112.f_9, false);
					if ((!UNK_0x92444005288A72ED(Local_112.f_9) && !UNK_0x869EFD0BC0868856(Local_112.f_9)) && !UNK_0x15D0A3E61766C539(Local_112.f_9, 0))
					{
						if (func_124(Local_112.f_18, UNK_0x09AC81E49EA267F7(250, 500)))
						{
							UNK_0xE8832A9E16A57A1F(Local_112.f_9, true, 1);
							UNK_0x25BD67336EA4AECE(Local_112.f_9, 800);
							UNK_0x9DD8618CA5BF832D(Local_112.f_9, 222, true);
							vLocal_689 = { UNK_0x08D89CE2E20AE305(Local_112.f_9) };
							UNK_0xDD353D0E9C789D0E(&iLocal_484);
							UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@bailbond_mountain", "base_jump_spot", 8f, -1.5f, -1, 8, false, 0, 0, 0);
							UNK_0x8E6C66C6CAF90EEB(false, 0);
							UNK_0x75ABDC5F81978924(iLocal_484);
							UNK_0x78ADC381772E3D54(Local_112.f_9, iLocal_484);
							UNK_0xF82EA857DA10E0CD(&iLocal_484);
							UNK_0x11AD11297DC58CC7(Local_112.f_9, true);
							Local_112.f_10 = 17;
						}
					}
					else
					{
						Local_112.f_10 = 18;
					}
					break;
				case 17:
					if (!UNK_0x15D0A3E61766C539(Local_112.f_9, 0))
					{
						if (UNK_0xB4ECF989E2C1DAC8(Local_112.f_9, "oddjobs@bailbond_mountain", "base_jump_spot", 3))
						{
							UNK_0x8352CA08CF578D18(Local_112.f_9, "oddjobs@bailbond_mountain", "base_jump_spot", 1.7f);
							if (UNK_0x8CA9406E01C7EE58(Local_112.f_9, "oddjobs@bailbond_mountain", "base_jump_spot") > 0.413f)
							{
								vLocal_689.f_2 = 0f;
								func_192(vLocal_689);
								fVar7 = 9f;
								vVar4 = { -1f, 0f, 0f };
								if (vLocal_689.x < 0.164f)
								{
									vLocal_689.x = 0.164323f;
								}
								UNK_0xDFC6BA855748EB10(Local_112.f_9, 1, Vector(fVar7, fVar7, fVar7) * vLocal_689, vVar4, 0, 0, 1, 1, 0, 1);
								Local_112.f_18 = UNK_0x1C0640BA9A7327B3();
								Local_112.f_10 = 19;
							}
						}
					}
					else
					{
						Local_112.f_10 = 18;
					}
					break;
				case 18:
					if (!func_116(Local_112.f_9, vLocal_103, 50f))
					{
						UNK_0xD458AC1C1D29C3B4(Local_112.f_9, false, false);
					}
					if ((!UNK_0x92444005288A72ED(Local_112.f_9) && !UNK_0x869EFD0BC0868856(Local_112.f_9)) && !UNK_0x15D0A3E61766C539(Local_112.f_9, 0))
					{
						if (!UNK_0xA48EBBEA418ADC94(Local_112.f_9))
						{
							if (UNK_0xE3614539F8B5C807(Local_112.f_9))
							{
								if (!func_116(Local_112.f_9, vLocal_103, 25f))
								{
									UNK_0xD458AC1C1D29C3B4(Local_112.f_9, false, false);
								}
								else
								{
									Local_112.f_10 = 19;
								}
							}
						}
					}
					break;
				case 19:
					UNK_0xBD453909DC26A85D(Local_112.f_9, -1161760501, false, 0, 0);
					if (func_124(Local_112.f_18, 500))
					{
						if (UNK_0x6438374572DE9B51(Local_112.f_9))
						{
							UNK_0xA31B8FA74C2DB632(Local_112.f_9);
							UNK_0x05D36E45031B6514(Local_112.f_9, vLocal_683);
							Local_112.f_10 = 20;
						}
					}
					break;
				case 20:
					if (UNK_0x75B806D0A76CB67D(Local_112.f_9) == -1)
					{
						UNK_0x25BD67336EA4AECE(Local_112.f_9, 200);
						Local_112.f_10 = 21;
					}
					else if (UNK_0x75B806D0A76CB67D(Local_112.f_9) == 2)
					{
						if (!bLocal_445)
						{
							if (!func_116(Local_112.f_9, vLocal_103, 220f))
							{
								UNK_0x5B34AE732406C944(Local_112.f_9, vLocal_686);
								bLocal_445 = true;
							}
						}
					}
					break;
				case 21:
					break;
				case 22:
					if (func_124(Local_112.f_18, UNK_0x09AC81E49EA267F7(false, 500)))
					{
						if (UNK_0xACCBB8E1BDF4D6BE(Local_112.f_9))
						{
							UNK_0x66973C88132724B2(Local_112.f_9, vLocal_680);
						}
						UNK_0xCAE036C45E7FC720(Local_112.f_9, &iVar0, 1);
						if (iVar0 != joaat("WEAPON_UNARMED"))
						{
							UNK_0x71F6097CACDECCC0(Local_112.f_9);
							UNK_0xE3A2D2E900FEFBE7(Local_112.f_9, 1);
							UNK_0x5745EA6329A91E29(Local_112.f_9, joaat("WEAPON_UNARMED"), true);
							UNK_0xE69C5AEBE90D20B1(Local_112.f_9, 0);
						}
						UNK_0xBAFED2F6486F771A(Local_112.f_9, 2, false);
						UNK_0xBAFED2F6486F771A(Local_112.f_9, 64, false);
						UNK_0xBAFED2F6486F771A(Local_112.f_9, 128, false);
						UNK_0xBAFED2F6486F771A(Local_112.f_9, 8, false);
						UNK_0xBAFED2F6486F771A(Local_112.f_9, 1, false);
						UNK_0xBAFED2F6486F771A(Local_112.f_9, 32, false);
						UNK_0xAFF39FB306F8E232(Local_112.f_9, 5, false);
						UNK_0xAFF39FB306F8E232(Local_112.f_9, 17, true);
						UNK_0xDD353D0E9C789D0E(&iLocal_484);
						if (UNK_0x405E212DDE472467(Local_112.f_9, 0))
						{
							UNK_0x75CDA8644CD3B5F5(false, 0, 64);
						}
						UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_484);
						UNK_0x78ADC381772E3D54(Local_112.f_9, iLocal_484);
						UNK_0xF82EA857DA10E0CD(&iLocal_484);
						UNK_0x11AD11297DC58CC7(Local_112.f_9, true);
						UNK_0xFADC0A217229F6B5(Local_112.f_9, true);
						Local_112.f_10 = 23;
					}
					break;
				case 23:
					if (!func_64(Local_112.f_9, 1805844857) && !UNK_0xE9FDA1035CFEA94F(Local_112.f_9))
					{
						Local_112.f_18 = (UNK_0x1C0640BA9A7327B3() - 5000);
						Local_112.f_10 = 22;
					}
					break;
				case 24:
					UNK_0xBAFED2F6486F771A(Local_112.f_9, 2, true);
					UNK_0xBAFED2F6486F771A(Local_112.f_9, 64, false);
					UNK_0xBAFED2F6486F771A(Local_112.f_9, 128, false);
					UNK_0xBAFED2F6486F771A(Local_112.f_9, 8, false);
					UNK_0xBAFED2F6486F771A(Local_112.f_9, 1, false);
					UNK_0xBAFED2F6486F771A(Local_112.f_9, 32, false);
					UNK_0xAFF39FB306F8E232(Local_112.f_9, 5, false);
					UNK_0xAFF39FB306F8E232(Local_112.f_9, 17, true);
					UNK_0x4E885A246A9D983A(Local_112.f_9, 173, true);
					UNK_0x9DD8618CA5BF832D(Local_112.f_9, 237, true);
					UNK_0xDEAC6BC509D10068(Local_112.f_9, 3f);
					if (func_102(Local_254[0 /*6*/]))
					{
						if ((!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_254[0 /*6*/], 0) && func_116(Local_254[0 /*6*/], Local_254[0 /*6*/].f_1, 3f)) && func_371(UNK_0xD9522BA9E27E1349(Local_254[0 /*6*/]), Local_254[0 /*6*/].f_4, 20f))
						{
							if (UNK_0xC42A92762C58E1B9(Local_112.f_9, Local_254[0 /*6*/], 0) && !UNK_0x36646919F20EAFFC(Local_112.f_9))
							{
								Local_112.f_10 = 25;
							}
							else if (func_124(Local_112.f_18, UNK_0x09AC81E49EA267F7(250, 350)))
							{
								if (UNK_0xACCBB8E1BDF4D6BE(Local_112.f_9))
								{
									UNK_0x66973C88132724B2(Local_112.f_9, vLocal_680);
								}
								else
								{
									UNK_0xA3BF0AA5A2608191(Local_112.f_9);
								}
								UNK_0x5B1D360B9C6F0A09(Local_112.f_9, Local_254[0 /*6*/], 25000, -1, 2f, 8388608, 0);
								UNK_0x11AD11297DC58CC7(Local_112.f_9, true);
								Local_112.f_10 = 25;
							}
						}
						else
						{
							Local_112.f_10 = 22;
						}
					}
					else
					{
						Local_112.f_10 = 22;
					}
					break;
				case 25:
					if (!func_102(Local_254[0 /*6*/]))
					{
						Local_112.f_10 = 22;
					}
					else if (((UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_254[0 /*6*/], 0) || UNK_0x36646919F20EAFFC(Local_112.f_9)) || !func_116(Local_254[0 /*6*/], Local_254[0 /*6*/].f_1, 3f)) || !func_371(UNK_0xD9522BA9E27E1349(Local_254[0 /*6*/]), Local_254[0 /*6*/].f_4, 20f))
					{
						Local_112.f_10 = 22;
					}
					else if (UNK_0x82CCEAB29E9451DD(Local_112.f_9, Local_254[0 /*6*/]))
					{
						Local_112.f_10 = 42;
					}
					else if (!func_64(Local_112.f_9, -1794415470))
					{
						Local_112.f_10 = 24;
					}
					UNK_0xDEAC6BC509D10068(Local_112.f_9, 2f);
					break;
				case 26:
					if (func_102(Local_254[0 /*6*/]) && UNK_0x82CCEAB29E9451DD(Local_112.f_9, Local_254[0 /*6*/]))
					{
						UNK_0x89258193691A7600(Local_112.f_9, Local_254[0 /*6*/], UNK_0x16F2683693E537C9(), 8, 30f, 786468, 350f, 30f, 1);
						UNK_0x4E885A246A9D983A(Local_112.f_9, 173, false);
						UNK_0x11AD11297DC58CC7(Local_112.f_9, true);
						Local_112.f_10 = 27;
					}
					else if (!UNK_0x81A5359F25512A04(Local_112.f_9))
					{
						Local_112.f_10 = 22;
					}
					break;
				case 27:
					if (!func_64(Local_112.f_9, -1273030092))
					{
						Local_112.f_10 = 26;
					}
					break;
				case 28:
					UNK_0xA3BF0AA5A2608191(Local_112.f_9);
					UNK_0xAFF39FB306F8E232(Local_112.f_9, 5, false);
					UNK_0xD1B84FD51EDBBCA3(Local_112.f_9, "CODE_HUMAN_STAND_COWER");
					UNK_0x8BE3D040D15AEA1D(Local_112.f_9, -1);
					UNK_0x11AD11297DC58CC7(Local_112.f_9, true);
					Local_112.f_10 = 29;
					break;
				case 29:
					if (!UNK_0x869EFD0BC0868856(Local_112.f_9))
					{
						if (!func_64(Local_112.f_9, 474215631))
						{
							Local_112.f_10 = 28;
						}
					}
					break;
				case 30:
					if (func_369(Local_112.f_9, Local_112.f_19, 100f, 1, 1090519040 /* Float: 8f */, 1097859072 /* Float: 15f */, 0) || func_368())
					{
						Local_112.f_10 = 32;
					}
					else if (UNK_0x7AEFFBD77F2CF1EC(func_367()))
					{
						if (UNK_0xD1960163A3042274(Local_112.f_9, -1519143300) == 1)
						{
							UNK_0x1AEE4B80F07751AD(Local_112.f_9, 500);
						}
						else
						{
							UNK_0xA3BF0AA5A2608191(Local_112.f_9);
							UNK_0x8FB4E06C94958F84(Local_112.f_9);
						}
						if (!UNK_0xBFDE4EE64C4BF2D6(Local_112.f_9, func_367()))
						{
							UNK_0xE25C96A9C36BE5D2(Local_112.f_9, func_367());
						}
						UNK_0xE185467768DBC7D2(func_367(), 0);
						UNK_0x18E279963C2FCEF4(func_367(), 1.5f, 3.5f, -1082130432 /* Float: -1f */);
						UNK_0xBF541ED34EA81209(Local_112.f_9, false);
						UNK_0x8685456FA9090367(Local_112.f_9, 1);
						UNK_0x33DBB4DC5BA9E882(Local_112.f_9, 1);
						UNK_0x291398BF0ED6A2E2(Local_112.f_9, 1);
						UNK_0x08EAEE08061C1898(Local_112.f_9, 1);
						UNK_0xBB46CD6FAFB19C92(Local_112.f_9, 0);
						UNK_0x97AC90C1F2A44CEE(Local_112.f_9, 1);
						UNK_0x4E885A246A9D983A(Local_112.f_9, 167, true);
						UNK_0x4E885A246A9D983A(Local_112.f_9, 118, true);
						UNK_0x7980D72D61BEF4D5(Local_112.f_9, true);
						UNK_0xE8832A9E16A57A1F(Local_112.f_9, true, 1);
						UNK_0x4E885A246A9D983A(Local_112.f_9, 42, true);
						UNK_0xFCCF7611216AE801(Local_112.f_9, 1);
						UNK_0x028142EA0AE5BA8C(Local_112.f_9, 1);
						UNK_0xE652C92E8AF37788(Local_112.f_9, 2f);
						UNK_0xFF05A1F4D58AD1FE(Local_112.f_9, 2f);
						UNK_0x08EAEE08061C1898(Local_112.f_9, 1);
						UNK_0x4E885A246A9D983A(Local_112.f_9, 118, true);
						UNK_0xBAFED2F6486F771A(Local_112.f_9, 1, false);
						UNK_0xAFF39FB306F8E232(Local_112.f_9, 17, true);
						UNK_0xAFF39FB306F8E232(Local_112.f_9, 0, false);
						UNK_0x9DD8618CA5BF832D(Local_112.f_9, 237, true);
						UNK_0x0C8C0C840C2D1AD2(Local_112.f_9, UNK_0x16F2683693E537C9(), -1, 0, 2);
						UNK_0x11AD11297DC58CC7(Local_112.f_9, true);
						Local_112.f_10 = 31;
					}
					break;
				case 31:
					if (func_369(Local_112.f_9, Local_112.f_19, 100f, 1, 1090519040 /* Float: 8f */, 1097859072 /* Float: 15f */, 0) || func_368())
					{
						Local_112.f_10 = 32;
					}
					else
					{
						if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
						{
							if (func_366())
							{
								bVar1 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
								if (!UNK_0xC42A92762C58E1B9(Local_112.f_9, bVar1, 0))
								{
									fVar8 = UNK_0x9C66D99E63E8E24C(bVar1);
									if (fVar8 < 1.75f && func_116(Local_112.f_9, vLocal_680, 8f))
									{
										if (!func_64(Local_112.f_9, -1794415470))
										{
											bVar2 = -1;
											if (UNK_0x48CDE52DF32F37C4(bVar1))
											{
												if (UNK_0xBBA8A868118C90ED(bVar1, false, 0) && UNK_0x3CAA763EEC01ADF7(Local_112.f_9, bVar1, 0, 1, false))
												{
													bVar2 = false;
												}
												else
												{
													bVar2 = -2;
												}
											}
											if (bVar2 != -1)
											{
												UNK_0x5B1D360B9C6F0A09(Local_112.f_9, bVar1, 25000, bVar2, 2f, 1048577, 0);
											}
										}
										else if (UNK_0x81A5359F25512A04(Local_112.f_9))
										{
											if (UNK_0x8B157DA177FBCF50(Local_112.f_9) != bVar1)
											{
												UNK_0xA3BF0AA5A2608191(Local_112.f_9);
											}
										}
									}
									else if (func_64(Local_112.f_9, -1794415470))
									{
										if (!UNK_0x81A5359F25512A04(Local_112.f_9))
										{
											UNK_0xA3BF0AA5A2608191(Local_112.f_9);
										}
									}
								}
							}
							else if (func_64(Local_112.f_9, -1794415470))
							{
								UNK_0xA3BF0AA5A2608191(Local_112.f_9);
							}
						}
						else if (func_64(Local_112.f_9, -1794415470))
						{
							UNK_0xA3BF0AA5A2608191(Local_112.f_9);
						}
						if (UNK_0xC7E2E6167C09468B(Local_112.f_9, UNK_0x16F2683693E537C9()))
						{
							if (UNK_0x81A5359F25512A04(Local_112.f_9))
							{
								UNK_0xBC43ED9FE28DB191(Local_112.f_9);
							}
						}
						else if (!UNK_0x405E212DDE472467(Local_112.f_9, 1))
						{
							if (!UNK_0x81A5359F25512A04(Local_112.f_9))
							{
								UNK_0x0C8C0C840C2D1AD2(Local_112.f_9, UNK_0x16F2683693E537C9(), -1, 0, 2);
							}
						}
						UNK_0x9DD8618CA5BF832D(Local_112.f_9, 237, true);
					}
					break;
				case 32:
					if (func_369(Local_112.f_9, Local_112.f_19, 100f, 1, 1090519040 /* Float: 8f */, 1097859072 /* Float: 15f */, 0) || func_368())
					{
						if (UNK_0x16102BEDC7435774(Local_112.f_9))
						{
							UNK_0x0A94A109271BE75A(Local_112.f_9);
							UNK_0xE8832A9E16A57A1F(Local_112.f_9, false, 1);
							UNK_0x4E885A246A9D983A(Local_112.f_9, 42, false);
							UNK_0x4E885A246A9D983A(Local_112.f_9, 118, true);
						}
						UNK_0x7980D72D61BEF4D5(Local_112.f_9, false);
						if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
						{
							if (func_64(Local_112.f_9, -1794415470))
							{
								UNK_0xA3BF0AA5A2608191(Local_112.f_9);
							}
						}
						if (((!UNK_0x869EFD0BC0868856(Local_112.f_9) && !UNK_0x15D0A3E61766C539(Local_112.f_9, 0)) && !UNK_0x36646919F20EAFFC(Local_112.f_9)) && !func_64(Local_112.f_9, -828834893))
						{
							UNK_0x0C8C0C840C2D1AD2(Local_112.f_9, UNK_0x16F2683693E537C9(), -1, 0, 2);
							if ((!func_365(Local_112.f_19, 10) && func_116(Local_112.f_9, vLocal_680, 50f)) || !func_124(iLocal_481, 2000))
							{
								if (UNK_0x405E212DDE472467(Local_112.f_9, 0))
								{
									UNK_0x75CDA8644CD3B5F5(Local_112.f_9, 0, 0);
								}
								else if (((!UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6) && !UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), Local_112.f_9)) && !func_368()) || UNK_0x70EED0761B82965E(Local_112.f_9))
								{
									UNK_0xF96A174EE26D7588(Local_112.f_9, UNK_0x16F2683693E537C9(), -1);
								}
								else if (UNK_0xD1960163A3042274(Local_112.f_9, -1519143300) == 1)
								{
									UNK_0x1AEE4B80F07751AD(Local_112.f_9, -1);
								}
								else
								{
									UNK_0xF9B5DB58254657F1(Local_112.f_9, -1, UNK_0x16F2683693E537C9(), -1, 0);
								}
							}
							else if (!UNK_0x405E212DDE472467(Local_112.f_9, 0))
							{
								UNK_0xF96A174EE26D7588(Local_112.f_9, UNK_0x16F2683693E537C9(), -1);
							}
							UNK_0x11AD11297DC58CC7(Local_112.f_9, true);
							Local_112.f_10 = 33;
						}
					}
					else if (!bLocal_449)
					{
						Local_112.f_10 = 30;
					}
					else
					{
						Local_112.f_10 = 34;
					}
					break;
				case 33:
					if (func_369(Local_112.f_9, Local_112.f_19, 100f, 1, 1090519040 /* Float: 8f */, 1097859072 /* Float: 15f */, 0) || func_368())
					{
						if (!func_64(Local_112.f_9, -1519143300))
						{
							if (!func_64(Local_112.f_9, -875674219))
							{
								if (UNK_0x405E212DDE472467(Local_112.f_9, 0))
								{
									if (!func_365(Local_112.f_19, 10) && func_116(Local_112.f_9, vLocal_680, 50f))
									{
										UNK_0x75CDA8644CD3B5F5(Local_112.f_9, 0, 0);
										Local_112.f_10 = 32;
									}
								}
								else
								{
									Local_112.f_10 = 32;
								}
							}
							else if (!func_365(Local_112.f_19, 10) && func_116(Local_112.f_9, vLocal_680, 50f))
							{
								if ((UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), Local_112.f_9)) || func_368())
								{
									Local_112.f_10 = 32;
								}
							}
						}
					}
					else if (!bLocal_449)
					{
						Local_112.f_10 = 30;
					}
					else
					{
						Local_112.f_10 = 34;
					}
					break;
				case 34:
					if (func_369(Local_112.f_9, Local_112.f_19, 100f, 1, 1090519040 /* Float: 8f */, 1097859072 /* Float: 15f */, 0))
					{
						Local_112.f_10 = 32;
					}
					else
					{
						if (UNK_0x16102BEDC7435774(Local_112.f_9))
						{
							UNK_0x0A94A109271BE75A(Local_112.f_9);
							UNK_0xE8832A9E16A57A1F(Local_112.f_9, false, 1);
							UNK_0x4E885A246A9D983A(Local_112.f_9, 42, false);
						}
						UNK_0xA3BF0AA5A2608191(Local_112.f_9);
						UNK_0x0C8C0C840C2D1AD2(Local_112.f_9, UNK_0x16F2683693E537C9(), -1, 0, 2);
						UNK_0x11AD11297DC58CC7(Local_112.f_9, true);
						Local_112.f_10 = 35;
					}
					break;
				case 35:
					if (func_369(Local_112.f_9, Local_112.f_19, 100f, 1, 1090519040 /* Float: 8f */, 1097859072 /* Float: 15f */, 0))
					{
						Local_112.f_10 = 32;
					}
					else if (UNK_0x70EED0761B82965E(Local_112.f_9))
					{
						UNK_0x08EAEE08061C1898(Local_112.f_9, 1);
						UNK_0x291398BF0ED6A2E2(Local_112.f_9, 0);
					}
					else if ((!UNK_0x869EFD0BC0868856(Local_112.f_9) && !UNK_0xA48EBBEA418ADC94(Local_112.f_9)) && UNK_0xE3614539F8B5C807(Local_112.f_9))
					{
						if (!UNK_0x7069CC4DE1EA3FAA(Local_112.f_9, UNK_0x16F2683693E537C9(), 45f))
						{
							if (!func_64(Local_112.f_9, -875674219))
							{
								UNK_0xF96A174EE26D7588(Local_112.f_9, UNK_0x16F2683693E537C9(), -1);
							}
						}
					}
					break;
				case 36:
					break;
				case 37:
					break;
				case 42:
					UNK_0x11AD11297DC58CC7(Local_112.f_9, true);
					Local_112.f_10 = 43;
					break;
				case 43:
					break;
			}
		}
	}
}

bool func_365(int iParam0, int iParam1)
{
	return (UNK_0xF4CCC8CB6DE7F1AE() - iParam0) > iParam1;
}

bool func_366()
{
	bool bVar0;
	bool bVar1;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
	}
	else if (UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9()))
	{
		bVar0 = UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9());
	}
	if (!func_102(bVar0))
	{
		return false;
	}
	else
	{
		if (UNK_0xD6DF381716822EFE(bVar0) == 0)
		{
			return false;
		}
		bVar1 = UNK_0x134B62B726CEC8E6(bVar0);
		if (UNK_0x7D8B2A8F9EA82DB7(bVar1))
		{
			return false;
		}
		if (UNK_0xAD09C9A4B56FA133(bVar1))
		{
			return false;
		}
		if (UNK_0xD1CC995EE5EB1EC1(bVar1))
		{
			return false;
		}
	}
	return true;
}

int func_367()
{
	return UNK_0x5D08BBCCCC2F43A4(UNK_0xA30EC016B12C03E4());
}

bool func_368()
{
	if (!bLocal_418)
	{
		return true;
	}
	if (func_323(bLocal_487, 0))
	{
		return true;
	}
	if (iLocal_98 != 3 && iLocal_98 != 6)
	{
		return true;
	}
	if (UNK_0xA48EBBEA418ADC94(Local_112.f_9) || UNK_0x869EFD0BC0868856(Local_112.f_9))
	{
		iLocal_481 = UNK_0x1C0640BA9A7327B3();
		return true;
	}
	if (!func_124(iLocal_481, 2000))
	{
		return true;
	}
	return false;
}

bool func_369(bool bParam0, int iParam1, float fParam2, bool bParam3, float fParam4, float fParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (func_23(bParam0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
		if (UNK_0xD3DCEC81D13AAFB1(vVar0, fParam4, true))
		{
			return true;
		}
		if (func_116(bParam0, vLocal_680, fParam2))
		{
			if (!func_365(iParam1, 10))
			{
				if (bParam6)
				{
					if (func_370(1, 0, 1))
					{
						if (UNK_0xF1C14CD5C8A04A85(UNK_0x16F2683693E537C9()) || UNK_0xAEFA9B80C56C658E(UNK_0x16F2683693E537C9()))
						{
							return true;
						}
					}
				}
				if (UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0))
				{
					return true;
				}
				if (UNK_0x85651FDAB8414096(UNK_0xD803B885F5E47A62()))
				{
					if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0))
					{
						return true;
					}
					if (bParam3)
					{
						if (UNK_0x85651FDAB8414096(UNK_0xD803B885F5E47A62()))
						{
							if (UNK_0x7069CC4DE1EA3FAA(UNK_0x16F2683693E537C9(), bParam0, 45f))
							{
								return true;
							}
						}
					}
				}
				if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
				{
					return true;
				}
				if (UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()))
				{
					return true;
				}
				if (UNK_0xE9B814896D415EDD(UNK_0x16F2683693E537C9()))
				{
					return true;
				}
			}
		}
		if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
		{
			UNK_0xE910A68AA670B4AA(bParam0);
			return true;
		}
		if (UNK_0x1B3D109B39CC2C89(bParam0, UNK_0x16F2683693E537C9()) || UNK_0xFA4CE147B4D9AEE0(bParam0, 57))
		{
			if (UNK_0x869EFD0BC0868856(bParam0))
			{
				return true;
			}
		}
		if (UNK_0x681F21BF9F7B449B(-1, vVar0, fParam5))
		{
			return true;
		}
		vVar3 = { vVar0 };
		vVar6 = { vVar3 };
		vVar3.x = (vVar3.x - fParam5);
		vVar3.f_1 = (vVar3.y - fParam5);
		vVar3.f_2 = (vVar3.z - fParam5);
		vVar6.x = (vVar6.x + fParam5);
		vVar6.f_1 = (vVar6.y + fParam5);
		vVar6.f_2 = (vVar6.z + fParam5);
		if (UNK_0x723EE7F83DF1497D(vVar3, vVar6, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_370(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar0, 1);
	switch (iVar0)
	{
		case joaat("WEAPON_PISTOL"):
		case joaat("WEAPON_COMBATPISTOL"):
		case joaat("WEAPON_APPISTOL"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_REMOTESNIPER"):
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_RPG"):
		case joaat("WEAPON_SNSPISTOL"):
		case joaat("WEAPON_MINIGUN"):
			return true;
		default:
			break;
	}
	if (bParam0)
	{
		switch (iVar0)
		{
			case joaat("WEAPON_GRENADE"):
			case joaat("WEAPON_STICKYBOMB"):
			case joaat("WEAPON_MOLOTOV"):
				return true;
			default:
				break;
		}
	}
	if (bParam1)
	{
		switch (iVar0)
		{
			case joaat("WEAPON_KNIFE"):
			case joaat("WEAPON_HAMMER"):
			case joaat("WEAPON_CROWBAR"):
			case joaat("WEAPON_BOTTLE"):
			case default:
		}
	}
	if (bParam2)
	{
		if (iVar0 == joaat("WEAPON_STUNGUN"))
		{
			return true;
		}
	}
	return false;
}

bool func_371(float fParam0, float fParam1, float fParam2)
{
	if (UNK_0x755FF954DAE327E1((fParam0 - fParam1)) <= fParam2)
	{
		return true;
	}
	return false;
}

char* func_372()
{
	return "move_m@bail_bond_not_tazered";
}

char* func_373()
{
	return "move_m@bail_bond_tazered";
}

bool func_374()
{
	UNK_0x4942FBD1EF896E39(func_372());
	UNK_0x4942FBD1EF896E39(func_373());
	if (UNK_0x59F02DA2266A744C(func_372()) && UNK_0x59F02DA2266A744C(func_373()))
	{
		return true;
	}
	return false;
}

void func_375(var uParam0, bool bParam1)
{
	if (UNK_0x15D0A3E61766C539(*uParam0, 0))
	{
		*bParam1 = 1;
	}
}

void func_376(bool bParam0, var uParam1, float fParam2, int iParam3)
{
	if (func_429(bParam0))
	{
		if (func_377(bParam0, UNK_0x16F2683693E537C9(), fParam2, 1, 250, iParam3))
		{
			*uParam1 = UNK_0xF4CCC8CB6DE7F1AE();
		}
	}
}

bool func_377(bool bParam0, bool bParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;

	iVar4 = func_383(bParam0, bParam1);
	if (!func_429(bParam0) || !func_429(bParam1))
	{
		if (iVar4 != -1)
		{
			func_9(&(Local_56[iVar4 /*4*/]));
		}
		return false;
	}
	if (!func_381(bParam0, bParam1, fParam2, iParam3))
	{
		return false;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_380();
		if (iVar4 == -1)
		{
			return false;
		}
		Local_56[iVar4 /*4*/].f_1 = bParam0;
		Local_56[iVar4 /*4*/].f_2 = bParam1;
	}
	vVar1 = { UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f) };
	bVar0 = func_378(&(Local_56[iVar4 /*4*/]), vVar1, bParam1, &(Local_56[iVar4 /*4*/].f_3), bParam0, iParam5);
	return (bVar0 || (UNK_0x1C0640BA9A7327B3() - Local_56[iVar4 /*4*/].f_3) < iParam4);
}

int func_378(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	var uVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar7;
	int iVar8;

	bVar7 = false;
	if (!func_429(bParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_379(bParam4, iParam7) };
		*uParam0 = UNK_0xCD02F8660C47B801(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, bParam6, 7);
		return 0;
	}
	iVar8 = UNK_0x1EC301670B54C6DE(*uParam0, &uVar0, &vVar1, &uVar4, &bVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (UNK_0xEC560E589DF8370E(bVar7))
	{
		func_429(bVar7);
		if (UNK_0x940C1429253D3B1B(bVar7) == bParam4)
		{
			if (bLocal_97)
			{
				UNK_0xBA5BBB3ADDA49094(vParam1, UNK_0x68F4C0EC296D3901(bParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*iParam5 = UNK_0x1C0640BA9A7327B3();
			return 1;
		}
		return 0;
	}
	if (UNK_0xE2F1E99DD161A861(bVar7))
	{
		func_429(bVar7);
		if (UNK_0x405E212DDE472467(bParam4, 0))
		{
			if (UNK_0x96A5FE5834B81CE7(bVar7) == UNK_0x6937EA2286828455(bParam4, 0))
			{
				if (bLocal_97)
				{
					UNK_0xBA5BBB3ADDA49094(vParam1, UNK_0x68F4C0EC296D3901(bParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*iParam5 = UNK_0x1C0640BA9A7327B3();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_379(bool bParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 7)
	{
		iVar0 = UNK_0x09AC81E49EA267F7(false, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return UNK_0x68F4C0EC296D3901(bParam0, true);
	}
	else if (iParam1 == 1)
	{
		return UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return UNK_0x64430C979F516F7A(bParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return UNK_0x64430C979F516F7A(bParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return UNK_0x64430C979F516F7A(bParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return UNK_0x64430C979F516F7A(bParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return UNK_0x64430C979F516F7A(bParam0, 36864, 0f, 0f, 0f);
	}
	return UNK_0x68F4C0EC296D3901(bParam0, true);
}

int func_380()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_56)
	{
		if ((Local_56[iVar0 /*4*/] == 0 && Local_56[iVar0 /*4*/].f_1 == 0) && Local_56[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_381(bool bParam0, bool bParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = { func_192(UNK_0x68F4C0EC296D3901(bParam1, true) - UNK_0x68F4C0EC296D3901(bParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return true;
	}
	if (iParam3 == 0)
	{
		vVar3 = { UNK_0x08D89CE2E20AE305(bParam0) };
	}
	else
	{
		vVar3 = { func_192(UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 5f, 0f) - UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_382(vVar3, vVar0);
	if (fVar6 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return false;
	}
	return true;
}

float func_382(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_383(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_56)
	{
		if (Local_56[iVar0 /*4*/].f_1 == bParam0 && Local_56[iVar0 /*4*/].f_2 == bParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_384(bool bParam0, int iParam1, float fParam2, int iParam3)
{
	if (func_429(bParam0))
	{
		if (func_377(UNK_0x16F2683693E537C9(), bParam0, fParam2, 1, 250, iParam3))
		{
			*iParam1 = UNK_0xF4CCC8CB6DE7F1AE();
		}
	}
}

void func_385()
{
	if (func_59(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_677, 100f))
	{
		if (!func_386())
		{
			UNK_0xAE1670DD12E839C3(&cLocal_671, 8);
			func_67();
			bLocal_452 = true;
		}
	}
	else if (bLocal_452)
	{
		if (!func_59(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_677, 120f))
		{
			if (UNK_0x62A1F4500E8F07E0())
			{
				UNK_0x5C8D148FC238F38A();
				bLocal_452 = false;
			}
		}
		else
		{
			func_67();
		}
	}
	if (bLocal_452)
	{
		if (func_386())
		{
			UNK_0x5C8D148FC238F38A();
			bLocal_452 = false;
		}
	}
}

bool func_386()
{
	return Global_96053;
}

void func_387()
{
	func_37();
	func_385();
	if (func_23(Local_112.f_9))
	{
		func_384(Local_112.f_9, &iLocal_472, 1126825984 /* Float: 170f */, 7);
		func_376(Local_112.f_9, &(Local_112.f_19), 1126825984 /* Float: 170f */, 7);
		func_364();
		switch (iLocal_100)
		{
			case 0:
				func_21();
				bLocal_420 = false;
				bLocal_439 = false;
				iLocal_100 = 1;
				break;
			case 1:
				if (!bLocal_449)
				{
					if (func_320("BBS_05", 0, 0))
					{
						UNK_0x2F23E8033F1ADDD9("BBS_05");
					}
					func_121(&(Local_112.f_8));
					if (!func_116(Local_112.f_9, vLocal_680, 25f))
					{
						if (Local_112.f_10 == 30 || Local_112.f_10 == 31)
						{
							Local_112.f_18 = UNK_0x1C0640BA9A7327B3();
							Local_112.f_10 = 34;
						}
						if (func_365(iLocal_472, 10))
						{
							if (!func_62())
							{
								if (func_75(&uLocal_499, cLocal_493, "BBC_T9", 4, 0, 0, 0))
								{
									iLocal_462 = UNK_0x1C0640BA9A7327B3();
								}
							}
						}
						bLocal_449 = true;
					}
					else if (!UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
					{
						if (func_320("BBS_COPS", 0, 0))
						{
							UNK_0x2F23E8033F1ADDD9("BBS_COPS");
						}
						bLocal_420 = true;
						if (!func_62())
						{
							iLocal_100 = 2;
						}
					}
					else if (!bLocal_419)
					{
						if (!func_323(bLocal_487, 1))
						{
							if (func_75(&uLocal_499, cLocal_493, "BBC_T5", 4, 0, 0, 0))
							{
								bLocal_419 = true;
							}
						}
					}
					else if (!bLocal_439)
					{
						if (!func_320("BBS_COPS", 0, 0))
						{
							func_322("BBS_COPS", 7500, 0);
							bLocal_439 = true;
						}
					}
					else
					{
						func_390();
						func_388(&Local_385, vLocal_680, &iLocal_464, 5000, 1101004800 /* Float: 20f */);
					}
				}
				else if (func_116(Local_112.f_9, vLocal_680, 8f))
				{
					if (Local_112.f_10 == 34 || Local_112.f_10 == 35)
					{
						Local_112.f_18 = UNK_0x1C0640BA9A7327B3();
						Local_112.f_10 = 30;
					}
					bLocal_439 = false;
					if (func_320("BBS_05", 0, 0))
					{
						UNK_0x2F23E8033F1ADDD9("BBS_05");
					}
					if (!func_62())
					{
						if (Local_112.f_10 == 30 || Local_112.f_10 == 31)
						{
							if (UNK_0x09AC81E49EA267F7(false, 2) == 0)
							{
								if (func_75(&uLocal_499, cLocal_493, "BBC_T10", 4, 0, 0, 0))
								{
									iLocal_462 = UNK_0x1C0640BA9A7327B3();
								}
							}
							else if (func_75(&uLocal_499, cLocal_492, "BB3_J5", 4, 0, 0, 0))
							{
								iLocal_462 = UNK_0x1C0640BA9A7327B3();
							}
						}
					}
					bLocal_449 = false;
				}
				else
				{
					if (func_320("BBS_COPS", 0, 0))
					{
						UNK_0x2F23E8033F1ADDD9("BBS_COPS");
					}
					if (!UNK_0xE4EDC4B0E92C078B(Local_112.f_8))
					{
						Local_112.f_8 = func_361(Local_112.f_9, 1, 1, 5);
					}
					if (!bLocal_440)
					{
						func_322("BBS_05", 7500, 1);
						bLocal_440 = true;
					}
				}
				if (func_318(&(Local_112.f_9)))
				{
					bLocal_453 = true;
					iLocal_100 = 2;
				}
				break;
			case 2:
				if (func_320("BBS_05", 0, 0))
				{
					UNK_0x2F23E8033F1ADDD9("BBS_05");
				}
				bLocal_420 = true;
				func_121(&(Local_112.f_8));
				if (bLocal_453)
				{
					func_134(7);
				}
				else
				{
					if (func_320("BBS_COPS", 0, 0))
					{
						UNK_0x2F23E8033F1ADDD9("BBS_COPS");
					}
					func_134(3);
				}
				break;
		}
	}
}

int func_388(bool bParam0, vector3 vParam1, int iParam4, int iParam5, float fParam6)
{
	vector3 vVar0;
	var uVar3;
	char[] cVar168[8];
	char* sVar169;

	if (func_23(*bParam0))
	{
		if (!func_62())
		{
			vVar0 = { UNK_0x68F4C0EC296D3901(*bParam0, true) };
			if (SYSTEM::VDIST2(vParam1, vVar0) < (fParam6 * fParam6))
			{
				if (UNK_0x1C0640BA9A7327B3() - *iParam4) > (iParam5 + UNK_0x09AC81E49EA267F7(false, 2000))
				{
					uVar3 = 16;
					func_97(&uVar3, 4, *bParam0, "MAUDE", 0, 1);
					cVar168 = "BBCAUD";
					sVar169 = "BBC_loiter";
					func_389(&uVar3, cVar168, sVar169, 4, 0, 0);
					*iParam4 = UNK_0x1C0640BA9A7327B3();
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_389(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_96(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	UNK_0x5D96D8530B3D0904(&Global_19671, false);
	Global_20808 = iParam3;
	StringCopy(&Global_20795, sParam2, 24);
}

void func_390()
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	if (UNK_0xD17F06053799A7CA() && UNK_0x0A4C9A3D51EAE31F(203) != 0)
	{
		iVar1 = 1;
	}
	if (func_23(Local_112.f_9))
	{
		if (func_62())
		{
			iLocal_462 = UNK_0x1C0640BA9A7327B3();
		}
		if (!bLocal_421)
		{
			if (func_75(&uLocal_499, cLocal_492, "BB3_J6", 4, 0, 0, 0))
			{
				bLocal_421 = true;
			}
		}
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0x405E212DDE472467(Local_112.f_9, 0) && UNK_0x6937EA2286828455(Local_112.f_9, 0) == bVar0)
			{
				if (!UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
				{
					if (!bLocal_447)
					{
						if (!func_62())
						{
							iLocal_461 = UNK_0x1C0640BA9A7327B3();
							bLocal_447 = true;
						}
					}
					else if (!iLocal_422[0])
					{
						if ((UNK_0x1C0640BA9A7327B3() - iLocal_461) > 7500)
						{
							func_393(0);
						}
					}
					else if (!iLocal_422[1])
					{
						if ((UNK_0x1C0640BA9A7327B3() - iLocal_461) > 10000)
						{
							func_393(1);
						}
					}
					else if (!iLocal_422[2])
					{
						if ((UNK_0x1C0640BA9A7327B3() - iLocal_461) > 10000)
						{
							func_393(2);
						}
					}
					if (UNK_0xC844350D5D58C99A(bVar0))
					{
						if (UNK_0x9C66D99E63E8E24C(bVar0) < 0.5f)
						{
							if (!bLocal_433)
							{
								if (!func_62())
								{
									if (func_124(iLocal_477, 3500))
									{
										if (func_75(&uLocal_499, cLocal_492, "BB3_STOP", 4, 0, 0, 0))
										{
											bLocal_433 = true;
										}
									}
								}
							}
						}
						else if (bLocal_433)
						{
							if (!func_323("BB3_STOP", 1))
							{
								iLocal_477 = UNK_0x1C0640BA9A7327B3();
							}
						}
						else
						{
							iLocal_477 = UNK_0x1C0640BA9A7327B3();
						}
					}
				}
				else if (!bLocal_420)
				{
					if (func_75(&uLocal_499, cLocal_492, "BB3_J9", 4, 0, 0, 0))
					{
						bLocal_420 = true;
					}
				}
			}
			else
			{
				if (!bLocal_441)
				{
					if (!func_366())
					{
						func_339("BBS_VH1", -1);
						bLocal_441 = true;
					}
				}
				iLocal_477 = UNK_0x1C0640BA9A7327B3();
			}
			bLocal_428 = false;
			bLocal_429 = false;
		}
		else
		{
			iLocal_477 = UNK_0x1C0640BA9A7327B3();
			bLocal_433 = false;
			if (UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9()))
			{
				bVar0 = UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9());
				if (!bLocal_428)
				{
					if (func_366())
					{
						if (!UNK_0x405E212DDE472467(Local_112.f_9, 0))
						{
							if (!func_323("BBC_T6", 1))
							{
								if (func_75(&uLocal_499, cLocal_493, "BBC_T6", 4, iVar1, 0, 0))
								{
									bLocal_428 = true;
								}
							}
						}
						func_392("BBS_VH1", 1);
					}
					else if (!func_323("BBC_T8", 1) && !func_323("BB3_WTF", 1))
					{
						if (UNK_0x09AC81E49EA267F7(false, 11) < 5)
						{
							if (func_75(&uLocal_499, cLocal_493, "BBC_T8", 4, iVar1, 0, 0))
							{
								bLocal_428 = true;
							}
						}
						else if (func_75(&uLocal_499, cLocal_492, "BB3_WTF", 4, iVar1, 0, 0))
						{
							bLocal_428 = true;
						}
					}
				}
				else if (!bLocal_432)
				{
					if (func_391(&bVar0))
					{
						if ((!func_323("BB3_JACK", 1) && !func_323("BBC_T6", 1)) && !func_323("BBC_T8", 1))
						{
							if (func_75(&uLocal_499, cLocal_492, "BB3_JACK", 4, iVar1, 0, 0))
							{
								bLocal_432 = true;
							}
						}
					}
				}
			}
			else
			{
				bLocal_428 = false;
				if (UNK_0x405E212DDE472467(Local_112.f_9, 0))
				{
					if (!bLocal_429)
					{
						if (!func_323("BBC_T7", 1) && !func_323("BB3_OUT", 1))
						{
							if (UNK_0x09AC81E49EA267F7(false, 11) < 5)
							{
								if (func_75(&uLocal_499, cLocal_493, "BBC_T7", 4, iVar1, 0, 0))
								{
									bLocal_429 = true;
								}
							}
							else if (func_75(&uLocal_499, cLocal_492, "BB3_OUT", 4, iVar1, 0, 0))
							{
								bLocal_429 = true;
							}
						}
					}
				}
				else if (Local_112.f_10 == 33 && func_64(Local_112.f_9, -1519143300))
				{
					if (func_116(Local_112.f_9, vLocal_680, 25f))
					{
						if (!func_323("BB3_J11", 1))
						{
							if (func_124(iLocal_463, UNK_0x09AC81E49EA267F7(2500, 5000)))
							{
								if (func_62())
								{
									func_5();
								}
								if (func_75(&uLocal_499, cLocal_492, "BB3_J11", 4, 0, 0, 0))
								{
									iLocal_463 = UNK_0x1C0640BA9A7327B3();
								}
							}
						}
						else
						{
							iLocal_463 = UNK_0x1C0640BA9A7327B3();
						}
					}
				}
				else
				{
					iLocal_463 = 0;
					if (!bLocal_420)
					{
						if (func_75(&uLocal_499, cLocal_492, "BB3_J9", 4, 0, 0, 0))
						{
							iLocal_462 = UNK_0x1C0640BA9A7327B3();
							bLocal_420 = true;
						}
					}
					if (!func_62())
					{
						if (func_124(iLocal_462, UNK_0x09AC81E49EA267F7(3000, 6000)))
						{
							if (!func_116(Local_112.f_9, vLocal_680, 20f))
							{
								if (func_75(&uLocal_499, cLocal_492, "BB3_J4", 4, 0, 0, 0))
								{
									iLocal_462 = UNK_0x1C0640BA9A7327B3();
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_391(bool bParam0)
{
	bool bVar0;

	if (func_102(*bParam0))
	{
		if (UNK_0xE64AC821059A938D(UNK_0x16F2683693E537C9()))
		{
			return true;
		}
		bVar0 = UNK_0x66532B38746E912A(UNK_0x16F2683693E537C9());
		if (func_429(bVar0))
		{
			return true;
		}
	}
	return false;
}

void func_392(bool bParam0, int iParam1)
{
	if (func_327(bParam0))
	{
		UNK_0xA37A90C62806D848(iParam1);
	}
}

void func_393(int iParam0)
{
	if (!iLocal_422[iParam0])
	{
		if (func_75(&uLocal_499, cLocal_492, sLocal_488[iParam0], 4, 0, 0, 0))
		{
			iLocal_422[iParam0] = 1;
			bLocal_447 = false;
			iLocal_461 = 0;
		}
	}
}

void func_394()
{
	func_37();
	func_385();
	if (func_23(Local_112.f_9))
	{
		func_384(Local_112.f_9, &iLocal_472, 1126825984 /* Float: 170f */, 7);
		func_376(Local_112.f_9, &(Local_112.f_19), 1126825984 /* Float: 170f */, 7);
		func_364();
		switch (iLocal_100)
		{
			case 0:
				iLocal_100 = 1;
				break;
			case 1:
				if (!bLocal_449)
				{
					if (func_320("BBS_05", 0, 0))
					{
						UNK_0x2F23E8033F1ADDD9("BBS_05");
					}
					func_121(&(Local_112.f_8));
					if (!func_116(Local_112.f_9, vLocal_680, 25f))
					{
						if (Local_112.f_10 == 30 || Local_112.f_10 == 31)
						{
							Local_112.f_18 = UNK_0x1C0640BA9A7327B3();
							Local_112.f_10 = 34;
						}
						if (func_365(iLocal_472, 10))
						{
							if (!func_62())
							{
								if (func_75(&uLocal_499, cLocal_493, "BBC_T9", 4, 0, 0, 0))
								{
									iLocal_462 = UNK_0x1C0640BA9A7327B3();
								}
							}
						}
						bLocal_419 = true;
						bLocal_449 = true;
					}
					else if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
					{
						UNK_0x1E69CBC4A01168BD(UNK_0xD803B885F5E47A62());
						bLocal_419 = true;
						iLocal_100 = 2;
					}
					else
					{
						if (!UNK_0xE4EDC4B0E92C078B(iLocal_455))
						{
							if (bLocal_436)
							{
								iLocal_455 = func_397(vLocal_677, 5, 1);
							}
						}
						if (!bLocal_419)
						{
							if (!func_323(bLocal_487, 1))
							{
								if (func_75(&uLocal_499, cLocal_493, "BBC_T5", 4, 0, 0, 0))
								{
									bLocal_419 = true;
								}
							}
						}
						else if (!bLocal_436)
						{
							if (!func_62())
							{
								func_322("BBS_DROP", 7500, 0);
								iLocal_462 = UNK_0x1C0640BA9A7327B3();
								bLocal_436 = true;
							}
						}
						else
						{
							func_390();
						}
						if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_677, 4f, 4f, 2f, true, true, 0))
						{
						}
						if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 2732.815f, 4143.618f, 42.02822f, 2724.603f, 4144.803f, 46.33084f, 9f, 0, true, 0))
						{
							iLocal_100 = 2;
						}
						if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
						{
							if (func_116(UNK_0x16F2683693E537C9(), vLocal_677, 6.5f))
							{
								iLocal_100 = 2;
							}
						}
						else if (func_116(UNK_0x16F2683693E537C9(), vLocal_677, 2.5f))
						{
							iLocal_100 = 2;
						}
					}
				}
				else
				{
					func_121(&iLocal_455);
					if (func_320("BBS_DROP", 0, 0))
					{
						UNK_0x2F23E8033F1ADDD9("BBS_DROP");
					}
					if (func_116(Local_112.f_9, vLocal_680, 8f))
					{
						if (Local_112.f_10 == 34 || Local_112.f_10 == 35)
						{
							Local_112.f_18 = UNK_0x1C0640BA9A7327B3();
							Local_112.f_10 = 30;
						}
						if (func_320("BBS_05", 0, 0))
						{
							UNK_0x2F23E8033F1ADDD9("BBS_05");
						}
						if (!func_62())
						{
							if (Local_112.f_10 == 30 || Local_112.f_10 == 31)
							{
								if (UNK_0x09AC81E49EA267F7(false, 2) == 0)
								{
									if (func_75(&uLocal_499, cLocal_493, "BBC_T10", 4, 0, 0, 0))
									{
										iLocal_462 = UNK_0x1C0640BA9A7327B3();
									}
								}
								else if (func_75(&uLocal_499, cLocal_492, "BB3_J5", 4, 0, 0, 0))
								{
									iLocal_462 = UNK_0x1C0640BA9A7327B3();
								}
							}
						}
						bLocal_449 = false;
					}
					else
					{
						if (!UNK_0xE4EDC4B0E92C078B(Local_112.f_8))
						{
							Local_112.f_8 = func_361(Local_112.f_9, 1, 1, 5);
						}
						if (!bLocal_440)
						{
							func_322("BBS_05", 7500, 1);
							bLocal_440 = true;
						}
					}
				}
				if (!bLocal_446)
				{
					bLocal_446 = func_395(vLocal_680, vLocal_103, 180f);
				}
				if (func_318(&(Local_112.f_9)))
				{
					bLocal_453 = true;
					iLocal_100 = 2;
				}
				break;
			case 2:
				func_121(&iLocal_455);
				if (func_320("BBS_DROP", 0, 0))
				{
					UNK_0x2F23E8033F1ADDD9("BBS_DROP");
				}
				if (bLocal_453)
				{
					func_134(7);
				}
				else if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
				{
					func_134(6);
				}
				else
				{
					func_121(&(Local_112.f_8));
					if (func_320("BBS_05", 0, 0))
					{
						UNK_0x2F23E8033F1ADDD9("BBS_05");
					}
					if (!bLocal_446)
					{
						bLocal_446 = func_395(vLocal_680, vLocal_103, 0f);
					}
					func_134(4);
				}
				break;
		}
	}
}

int func_395(vector3 vParam0, vector3 vParam3, float fParam6)
{
	int iVar0;

	if (!func_396(vParam0, vParam3, fParam6))
	{
		UNK_0x15EA7F4313456B1D(3, true);
		UNK_0x15EA7F4313456B1D(5, true);
		if (iLocal_471 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_471 - 1))
			{
				func_43(&(Local_132[iVar0 /*20*/]), 1, 0, 1);
				iVar0++;
			}
		}
		if (iLocal_468 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_468 - 1))
			{
				func_100(&(Local_254[iVar0 /*6*/]));
				iVar0++;
			}
		}
		if (iLocal_469 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_469 - 1))
			{
				func_39(&(Local_291[iVar0 /*6*/]), 0);
				iVar0++;
			}
		}
		if (iLocal_467 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_467 - 1))
			{
				func_39(&(Local_340[iVar0 /*9*/]), 0);
				iVar0++;
			}
		}
		if (iLocal_470 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_470 - 1))
			{
				func_103(&(Local_377[iVar0 /*7*/]));
				iVar0++;
			}
		}
	}
	return 0;
}

bool func_396(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	vVar0 = { vParam3 - vParam0 };
	return ((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= (fParam6 * fParam6);
}

int func_397(vector3 vParam0, int iParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x2A065371C9D96655(iVar0, iParam3);
	UNK_0x516E63E474722206(iVar0, 1f);
	UNK_0x661342B9651D16E2(iVar0, bParam4);
	return iVar0;
}

void func_398()
{
	int iVar0;

	iVar0 = 0;
	if (func_23(Local_112.f_9))
	{
		func_384(Local_112.f_9, &iLocal_472, 1126825984 /* Float: 170f */, 7);
		func_376(Local_112.f_9, &(Local_112.f_19), 1126825984 /* Float: 170f */, 7);
		func_364();
		func_400();
		switch (iLocal_100)
		{
			case 0:
				iLocal_462 = UNK_0x1C0640BA9A7327B3();
				Local_112.f_17 = UNK_0x1C0640BA9A7327B3();
				Local_112.f_18 = UNK_0x1C0640BA9A7327B3();
				Local_112.f_10 = 13;
				if (func_23(Local_112.f_9))
				{
					if (!UNK_0xE4EDC4B0E92C078B(Local_112.f_8))
					{
						Local_112.f_8 = func_361(Local_112.f_9, 1, 0, 5);
					}
					UNK_0xE910A68AA670B4AA(Local_112.f_9);
				}
				func_360(&(Local_112.f_8), "", "", &iLocal_465, iLocal_466, 0);
				iLocal_100 = 1;
				break;
			case 1:
				UNK_0x9DD8618CA5BF832D(Local_112.f_9, 222, true);
				if (!bLocal_448)
				{
					func_360(&(Local_112.f_8), "", "", &iLocal_465, iLocal_466, 0);
					func_332(&uLocal_44, Local_112.f_9, 0, 0, 1, 1, 1);
					if (!bLocal_417)
					{
						if (func_124(Local_112.f_17, 3000))
						{
							bLocal_417 = true;
						}
						if (!func_62() && func_116(Local_112.f_9, vLocal_680, 35f))
						{
							if (func_75(&uLocal_499, cLocal_492, bLocal_486, 4, 0, 0, 0))
							{
								Local_112.f_17 = UNK_0x1C0640BA9A7327B3();
								iLocal_462 = UNK_0x1C0640BA9A7327B3();
								bLocal_417 = true;
							}
						}
					}
					if (Local_112.f_10 == 21)
					{
						if (UNK_0xC844350D5D58C99A(Local_112.f_9))
						{
							UNK_0xE910A68AA670B4AA(Local_112.f_9);
						}
						Local_112.f_10 = 22;
					}
					else if (Local_112.f_10 == 22 || Local_112.f_10 == 23)
					{
						if (iLocal_474 == -1)
						{
							iLocal_474 = UNK_0x1C0640BA9A7327B3();
						}
						if (iLocal_473 == -1)
						{
							iLocal_473 = UNK_0x1C0640BA9A7327B3();
						}
						else if (func_124(iLocal_473, 5000))
						{
							iVar0 = 1;
						}
						if (func_329(Local_112.f_9, vLocal_680, iVar0, 0, 1, 170))
						{
							func_328();
							Local_112.f_17 = UNK_0x1C0640BA9A7327B3();
							func_326(&uLocal_44, 0, 0);
							bLocal_448 = true;
						}
						else
						{
							func_325(Local_112.f_9, vLocal_680, iLocal_473, 925353388);
						}
					}
					if (!func_62())
					{
						if (bLocal_417)
						{
							if (UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == -1)
							{
								if (func_124(iLocal_462, UNK_0x09AC81E49EA267F7(5000, 12000)))
								{
									if (Local_112.f_10 == 22 || Local_112.f_10 == 23)
									{
										if (func_116(Local_112.f_9, vLocal_680, 30f))
										{
											if (UNK_0xE9FDA1035CFEA94F(Local_112.f_9))
											{
												if (UNK_0x09AC81E49EA267F7(false, 101) < 30)
												{
													if (func_75(&uLocal_499, cLocal_493, "BBC_T13", 4, 0, 0, 0))
													{
														iLocal_462 = UNK_0x1C0640BA9A7327B3();
													}
												}
												else if (func_75(&uLocal_499, cLocal_492, "BB3_FLEE", 4, 0, 0, 0))
												{
													iLocal_462 = UNK_0x1C0640BA9A7327B3();
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						iLocal_462 = UNK_0x1C0640BA9A7327B3();
					}
				}
				else
				{
					func_328();
					if (!func_116(Local_112.f_9, vLocal_680, 10f))
					{
						if (!bLocal_437)
						{
							if (!func_323(bLocal_487, 1))
							{
								func_321(&(Local_112.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_465, &iLocal_466, 1, 1);
								bLocal_437 = true;
							}
						}
						else
						{
							func_360(&(Local_112.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_465, iLocal_466, 1);
						}
					}
					else
					{
						if (!bLocal_418)
						{
							if (!UNK_0x869EFD0BC0868856(Local_112.f_9) && !UNK_0x405E212DDE472467(Local_112.f_9, 0))
							{
								if (func_320("BBS_APPSUS", 0, 0) || func_320("BBS_APPSUS2", 0, 0))
								{
									UNK_0x790015DC92C918E2();
								}
								if (!func_62())
								{
									func_5();
								}
								if (func_75(&uLocal_499, cLocal_492, bLocal_487, 4, 0, 0, 0))
								{
									bLocal_418 = true;
								}
							}
						}
						else if (!func_62())
						{
							iLocal_100 = 2;
						}
						func_360(&(Local_112.f_8), "", "", &iLocal_465, iLocal_466, 0);
					}
					if (func_318(&(Local_112.f_9)))
					{
						bLocal_453 = true;
						iLocal_100 = 2;
					}
				}
				break;
			case 2:
				if (func_320("BBS_APPSUS", 0, 0) || func_320("BBS_APPSUS2", 0, 0))
				{
					UNK_0x790015DC92C918E2();
				}
				bLocal_418 = true;
				UNK_0x68FCFE10774F5C97(5, joaat("PLAYER"), bLocal_664);
				UNK_0x68FCFE10774F5C97(5, bLocal_664, joaat("PLAYER"));
				func_121(&(Local_112.f_8));
				func_328();
				Local_112.f_17 = UNK_0x1C0640BA9A7327B3();
				func_326(&uLocal_44, 0, 0);
				func_39(&(Local_340[0 /*9*/]), 0);
				func_43(&(Local_132[0 /*20*/]), 1, 0, 1);
				func_399(1, &uLocal_483);
				if (bLocal_453)
				{
					func_134(7);
				}
				else
				{
					func_134(3);
				}
				break;
		}
	}
}

void func_399(bool bParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { 2711.198f, 4134.425f, 32.90168f };
	vVar3 = { 2739.981f, 4155.221f, 50.28859f };
	if (bParam0)
	{
		*uParam1 = UNK_0x7D6CA5F52B3748BF(vVar0, vVar3, 0, 1, 1, 1);
		UNK_0x10F3BFFADF2CE3DA(vVar0, vVar3);
		UNK_0xE342F209E49C5314(vVar0, vVar3, false, 1);
		UNK_0x21688103CC7F9B19(vVar0, vVar3, 0);
		UNK_0xF858EFDE1871B5F2(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, false, 1);
		UNK_0x536F1BE96C726C4B(2728.333f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, false);
	}
	else
	{
		UNK_0x2952D66A502EA873(*uParam1, 0);
		UNK_0xEFED0CD6E25037B9();
		UNK_0xE342F209E49C5314(vVar0, vVar3, true, 1);
		UNK_0xF5894FEB702E7E76(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 1);
	}
}

void func_400()
{
	if (func_23(Local_132[0 /*20*/]))
	{
		if (Local_132[0 /*20*/].f_14 == 0)
		{
			func_376(Local_132[0 /*20*/], &(Local_132[0 /*20*/].f_17), 160f, 7);
			if (func_369(Local_132[0 /*20*/], Local_132[0 /*20*/].f_17, 1101004800 /* Float: 20f */, 0, 1090519040 /* Float: 8f */, 1097859072 /* Float: 15f */, 0))
			{
				if (UNK_0xC844350D5D58C99A(Local_340[0 /*9*/]))
				{
					if (UNK_0xD59B17D2DFF98E26(Local_340[0 /*9*/]))
					{
						UNK_0x15AFB6CBDE990FB6(Local_340[0 /*9*/], 1, true);
					}
				}
				Local_132[0 /*20*/].f_14 = 4;
			}
			else if (UNK_0xC844350D5D58C99A(Local_340[0 /*9*/]))
			{
				if (!UNK_0xD59B17D2DFF98E26(Local_340[0 /*9*/]))
				{
					UNK_0x9F528B1B53FBC5D9(Local_340[0 /*9*/], Local_132[0 /*20*/], UNK_0x4A089F2B762B8D33(Local_132[0 /*20*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					if (!UNK_0xB4ECF989E2C1DAC8(Local_132[0 /*20*/], "oddjobs@bailbond_mountain", "Idle_Camman", 3))
					{
						UNK_0xC6EB89C59F2AF6B8(Local_132[0 /*20*/], "oddjobs@bailbond_mountain", "Idle_Camman", 8f, -8f, -1, 49, false, 0, 0, 0);
					}
					if (!func_64(Local_132[0 /*20*/], -875674219))
					{
						if (func_429(Local_112.f_9))
						{
							UNK_0x0C8C0C840C2D1AD2(Local_132[0 /*20*/], Local_112.f_9, -1, 2060, 3);
							UNK_0xF96A174EE26D7588(Local_132[0 /*20*/], Local_112.f_9, -1);
						}
					}
				}
			}
		}
		else if (Local_132[0 /*20*/].f_14 == 4)
		{
			if (!func_64(Local_132[0 /*20*/], 1805844857))
			{
				if (UNK_0xC844350D5D58C99A(Local_340[0 /*9*/]))
				{
					if (UNK_0xD59B17D2DFF98E26(Local_340[0 /*9*/]))
					{
						UNK_0x15AFB6CBDE990FB6(Local_340[0 /*9*/], 1, true);
					}
					else
					{
						func_39(&(Local_340[0 /*9*/]), 0);
					}
				}
				func_110(Local_132[0 /*20*/], 1);
			}
		}
	}
	else if (Local_132[0 /*20*/].f_14 != 5)
	{
		func_39(&(Local_340[0 /*9*/]), 0);
		func_43(&(Local_132[0 /*20*/]), 1, 0, 1);
		Local_132[0 /*20*/].f_14 = 5;
	}
}

void func_401()
{
	if (func_23(Local_112.f_9))
	{
		func_384(Local_112.f_9, &iLocal_472, 1126825984 /* Float: 170f */, 1);
		func_376(Local_112.f_9, &(Local_112.f_19), 1126825984 /* Float: 170f */, 7);
		func_364();
		func_400();
		switch (iLocal_100)
		{
			case 0:
				if (!UNK_0xE4EDC4B0E92C078B(Local_112.f_8))
				{
					Local_112.f_8 = func_361(Local_112.f_9, 1, 0, 5);
				}
				func_321(&(Local_112.f_8), "", "", &iLocal_465, &iLocal_466, 1, 0);
				iLocal_100 = 1;
				break;
			case 1:
				switch (iLocal_101)
				{
					case 2:
						if (!bLocal_427)
						{
							if (func_62())
							{
								func_5();
							}
							if (func_75(&uLocal_499, cLocal_493, "BBC_T14", 4, 0, 0, 0))
							{
								Local_112.f_17 = UNK_0x1C0640BA9A7327B3();
								bLocal_427 = true;
							}
							func_360(&(Local_112.f_8), "", "", &iLocal_465, iLocal_466, 0);
						}
						else if (!bLocal_438)
						{
							if (!func_323("BBC_T14", 1))
							{
								func_321(&(Local_112.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_465, &iLocal_466, 1, 1);
								bLocal_438 = true;
							}
						}
						else
						{
							func_360(&(Local_112.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_465, iLocal_466, 1);
							if (func_116(Local_112.f_9, vLocal_680, 25f) && func_408(Local_112.f_9, vLocal_680, 10f))
							{
								if (UNK_0x5F596B0E13677FE9(UNK_0x16F2683693E537C9()) || UNK_0xC379FAA7E9DFE7A4(UNK_0x16F2683693E537C9(), 0))
								{
									if (func_407(&(Local_112.f_19)))
									{
										iLocal_101 = 1;
										bLocal_430 = false;
										if (Local_112.f_10 != 3 && Local_112.f_10 != 4)
										{
											Local_112.f_18 = (UNK_0x1C0640BA9A7327B3() - 50000);
											Local_112.f_10 = 3;
										}
									}
									else if (!UNK_0xE9B814896D415EDD(UNK_0x16F2683693E537C9()) && UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), Local_112.f_9))
									{
										iLocal_101 = 1;
										bLocal_430 = false;
										if (Local_112.f_10 != 3 && Local_112.f_10 != 4)
										{
											Local_112.f_18 = (UNK_0x1C0640BA9A7327B3() - 50000);
											Local_112.f_10 = 3;
										}
									}
								}
								else if (func_406(Local_112.f_9, iLocal_472, 0, 1103626240 /* Float: 25f */, 1086324736 /* Float: 6f */))
								{
									iLocal_101 = 0;
								}
								else if (func_116(Local_112.f_9, vLocal_680, 5f))
								{
									iLocal_101 = 0;
								}
								else if (func_407(&(Local_112.f_19)))
								{
									if (func_116(Local_112.f_9, vLocal_680, (25f - 1.5f)))
									{
										iLocal_101 = 1;
										bLocal_430 = false;
										if (Local_112.f_10 != 3 && Local_112.f_10 != 4)
										{
											Local_112.f_18 = (UNK_0x1C0640BA9A7327B3() - 50000);
											Local_112.f_10 = 3;
										}
									}
								}
							}
							func_405();
						}
						if (func_369(Local_112.f_9, Local_112.f_19, 20f, 0, 1090519040 /* Float: 8f */, 1097859072 /* Float: 15f */, 0) || Local_132[0 /*20*/].f_14 != 0)
						{
							iLocal_100 = 2;
						}
						break;
					case 0:
					case 1:
						if (!bLocal_430)
						{
							if (func_320("BBS_APHEND", 0, 0) || func_320("BBS_APHEND2", 0, 0))
							{
								UNK_0x790015DC92C918E2();
							}
							if (func_62())
							{
								func_5();
							}
							if (func_75(&uLocal_499, cLocal_492, "BB3_J2", 4, 0, 0, 0))
							{
								Local_112.f_17 = UNK_0x1C0640BA9A7327B3();
								iLocal_462 = UNK_0x1C0640BA9A7327B3();
								bLocal_430 = true;
							}
							func_360(&(Local_112.f_8), "", "", &iLocal_465, iLocal_466, 0);
						}
						else if (!bLocal_426)
						{
							if (!func_323("BBC_T14", 1) && !func_323("BB3_J2", 1))
							{
								if (func_320("BBS_APHEND", 0, 0) || func_320("BBS_APHEND2", 0, 0))
								{
									UNK_0x790015DC92C918E2();
								}
								if (func_62())
								{
									func_5();
								}
								if (func_75(&uLocal_499, cLocal_493, "BBC_T1", 4, 0, 0, 0))
								{
									Local_112.f_17 = UNK_0x1C0640BA9A7327B3();
									bLocal_426 = true;
								}
								else if (iLocal_101 == 1)
								{
									if (func_124(iLocal_462, 1250))
									{
										Local_112.f_17 = (UNK_0x1C0640BA9A7327B3() - 3000);
										bLocal_426 = true;
									}
								}
							}
							else
							{
								iLocal_462 = UNK_0x1C0640BA9A7327B3();
							}
							func_360(&(Local_112.f_8), "", "", &iLocal_465, iLocal_466, 0);
						}
						else if (func_124(Local_112.f_17, 500))
						{
							if (Local_112.f_10 != 3 && Local_112.f_10 != 4)
							{
								Local_112.f_18 = UNK_0x1C0640BA9A7327B3();
								Local_112.f_10 = 3;
							}
							iLocal_100 = 2;
						}
						if (func_369(Local_112.f_9, Local_112.f_19, 20f, 0, 1090519040 /* Float: 8f */, 1097859072 /* Float: 15f */, 0) || Local_132[0 /*20*/].f_14 != 0)
						{
							iLocal_100 = 2;
						}
						break;
					case 3:
						func_360(&(Local_112.f_8), "", "", &iLocal_465, iLocal_466, 0);
						iLocal_100 = 2;
						break;
				}
				break;
			case 2:
				if (Local_112.f_10 != 3 && Local_112.f_10 != 4)
				{
					Local_112.f_18 = (UNK_0x1C0640BA9A7327B3() - 50000);
					Local_112.f_10 = 3;
				}
				Local_112.f_17 = UNK_0x1C0640BA9A7327B3();
				if (func_320("BBS_APHEND", 0, 0) || func_320("BBS_APHEND2", 0, 0))
				{
					UNK_0x790015DC92C918E2();
				}
				func_402(0);
				func_360(&(Local_112.f_8), "", "", &iLocal_465, iLocal_466, 0);
				iLocal_465 = UNK_0x1C0640BA9A7327B3();
				iLocal_466 = UNK_0x1C0640BA9A7327B3();
				func_134(2);
				break;
		}
	}
}

void func_402(bool bParam0)
{
	if (func_323("BB3_J10", 0))
	{
		if (bParam0)
		{
			func_403();
		}
		else
		{
			func_5();
		}
	}
}

void func_403()
{
	Global_19671 = 0;
	func_404();
}

void func_404()
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

void func_405()
{
	if (iLocal_478 < 10)
	{
		if (!bLocal_431)
		{
			if (!func_62())
			{
				if (func_116(Local_112.f_9, vLocal_680, (25f + 5f)))
				{
					iLocal_456 = 0;
					if (UNK_0xD17F06053799A7CA())
					{
						iLocal_456 = 1;
					}
					if (func_75(&uLocal_499, cLocal_492, "BB3_J10", 1, iLocal_456, 0, 0))
					{
						iLocal_479 = UNK_0x1C0640BA9A7327B3();
						iLocal_478++;
						bLocal_431 = true;
					}
				}
			}
		}
		else if (!func_323("BB3_J10", 0))
		{
			if (func_124(iLocal_479, UNK_0x09AC81E49EA267F7(2500, 4000)))
			{
				bLocal_431 = false;
			}
		}
		else
		{
			iLocal_479 = UNK_0x1C0640BA9A7327B3();
		}
	}
}

bool func_406(bool bParam0, int iParam1, bool bParam2, float fParam3, float fParam4)
{
	if (func_429(bParam0))
	{
		if (!func_365(iParam1, 10))
		{
			if (bParam2)
			{
				if (!func_116(Local_112.f_9, vLocal_680, fParam3))
				{
					return false;
				}
				if (!func_408(bParam0, vLocal_680, fParam4))
				{
					return false;
				}
			}
			if (UNK_0x0A059E0DB9253280(bParam0))
			{
				if (!UNK_0x03068588A1FCED1A(bParam0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_407(var uParam0)
{
	if (!func_365(*uParam0, 10))
	{
		return true;
	}
	return false;
}

bool func_408(bool bParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	fVar3 = UNK_0x755FF954DAE327E1((vVar0.z - vParam1.z));
	if (fVar3 <= fParam4)
	{
		return true;
	}
	return false;
}

void func_409()
{
	switch (iLocal_100)
	{
		case 0:
			if (bLocal_443)
			{
				if (func_430(0) && !Global_110685)
				{
					func_24(800, 0);
				}
			}
			if (!Global_110685)
			{
				iLocal_100 = 1;
			}
			break;
		case 1:
			func_410(&vLocal_103, &uLocal_499);
			if (func_23(Local_112.f_9))
			{
				func_384(Local_112.f_9, &iLocal_472, 1126825984 /* Float: 170f */, 1);
				func_376(Local_112.f_9, &(Local_112.f_19), 1126825984 /* Float: 170f */, 7);
				func_364();
				func_400();
				if (func_116(Local_112.f_9, vLocal_680, 25f) && func_408(Local_112.f_9, vLocal_680, 10f))
				{
					if (UNK_0x5F596B0E13677FE9(UNK_0x16F2683693E537C9()) || UNK_0xC379FAA7E9DFE7A4(UNK_0x16F2683693E537C9(), 0))
					{
						if (func_407(&(Local_112.f_19)))
						{
							iLocal_101 = 1;
							iLocal_100 = 2;
						}
						else if (!UNK_0xE9B814896D415EDD(UNK_0x16F2683693E537C9()) && UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), Local_112.f_9))
						{
							iLocal_101 = 1;
							iLocal_100 = 2;
						}
					}
					else if (func_406(Local_112.f_9, iLocal_472, 0, 1103626240 /* Float: 25f */, 1086324736 /* Float: 6f */))
					{
						iLocal_101 = 0;
						iLocal_100 = 2;
					}
					else if (func_116(Local_112.f_9, vLocal_680, 5f))
					{
						iLocal_101 = 0;
						iLocal_100 = 2;
					}
					else if (func_407(&(Local_112.f_19)))
					{
						if (func_116(Local_112.f_9, vLocal_680, (25f - 1.5f)))
						{
							iLocal_101 = 1;
							iLocal_100 = 2;
						}
					}
				}
				else if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), Local_112.f_9) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), Local_112.f_9))
				{
					iLocal_101 = 2;
					iLocal_100 = 2;
				}
				if (func_369(Local_112.f_9, Local_112.f_19, 25f, 0, 1090519040 /* Float: 8f */, 1097859072 /* Float: 15f */, 0) || Local_132[0 /*20*/].f_14 != 0)
				{
					iLocal_101 = 3;
					iLocal_100 = 2;
				}
			}
			func_405();
			break;
		case 2:
			if (iLocal_101 == 3)
			{
				func_402(0);
				func_321(&(Local_112.f_8), "", "", &iLocal_465, &iLocal_466, 1, 0);
				func_134(2);
			}
			else
			{
				if (iLocal_101 == 1)
				{
					bLocal_430 = false;
					if (Local_112.f_10 != 3 && Local_112.f_10 != 4)
					{
						Local_112.f_18 = (UNK_0x1C0640BA9A7327B3() - 50000);
						Local_112.f_10 = 3;
					}
				}
				func_134(1);
			}
			break;
	}
}

void func_410(var uParam0, var uParam1)
{
	if (!uParam0->f_7)
	{
		if (func_413(26, func_415(uParam0->f_4), 0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if ((!func_62() && !UNK_0x65636D4556D82155(UNK_0x16F2683693E537C9())) && !UNK_0xD17F06053799A7CA())
				{
					func_97(uParam1, 2, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
					if (func_76(uParam1, func_412(uParam0->f_4), func_411(uParam0->f_4), 4, 0, 0, 0))
					{
						uParam0->f_7 = 1;
					}
				}
				else
				{
					uParam0->f_7 = 1;
				}
			}
			else
			{
				uParam0->f_7 = 1;
			}
		}
	}
}

bool func_411(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BB1_TE";
		case 1:
			return "BB2_TE";
		case 2:
			return "BB3_TE";
		case 3:
			return "BB4_TE";
		default:
			break;
	}
	return "NULL";
}

char* func_412(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BB1AUD";
		case 1:
			return "BB2AUD";
		case 2:
			return "BB3AUD";
		case 3:
			return "BB4AUD";
		default:
			break;
	}
	return "NULL";
}

bool func_413(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = func_414(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = Global_42615[iParam1 /*12*/].f_3;
	if (iVar1 >= 3)
	{
		return false;
	}
	iVar2 = -1;
	iVar3 = 0;
	iVar4 = iParam2;
	iVar3 = 0;
	while (iVar3 < Global_51915[iVar0 /*203*/].f_9)
	{
		if (Global_51915[iVar0 /*203*/].f_10[iVar3 /*48*/] == iParam1)
		{
			if (iVar4 == 0)
			{
				iVar2 = iVar3;
			}
			else
			{
				iVar4 = (iVar4 - 1);
			}
		}
		iVar3++;
	}
	if (iVar2 == -1)
	{
		return false;
	}
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 16)
	{
		if ((Global_51553[iVar1 /*120*/].f_86[iVar3] && Global_51553[iVar1 /*120*/].f_18[iVar3] == Global_51915[iVar0 /*203*/].f_1) && Global_51553[iVar1 /*120*/].f_1[iVar3] == iVar2)
		{
			return Global_51553[iVar1 /*120*/].f_69[iVar3];
		}
		iVar3++;
	}
	return false;
}

int func_414(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_51915[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_51915[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_51915[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

int func_415(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 75;
		case 1:
			return 76;
		case 2:
			return 77;
		case 3:
			return 78;
		default:
			break;
	}
	return 79;
}

void func_416()
{
	if (bLocal_443)
	{
		if (((iLocal_98 != 9 && iLocal_98 != 4) && iLocal_98 != 5) && iLocal_98 != 8)
		{
			if (UNK_0xC844350D5D58C99A(Local_112.f_9))
			{
				if (UNK_0x437347B10A200C4B(Local_112.f_9, 0) || UNK_0xEB6A8945D1AC98A1(Local_112.f_9))
				{
					func_134(8);
				}
			}
		}
	}
}

void func_417()
{
	if (bLocal_443)
	{
		if ((iLocal_98 != 9 && iLocal_98 != 4) && iLocal_98 != 5)
		{
			func_418();
			if (iLocal_102 != 0)
			{
				if (iLocal_102 == 1)
				{
					Global_110347 = 0;
					func_576();
				}
				else
				{
					func_134(9);
				}
			}
		}
	}
}

void func_418()
{
	float fVar0;

	if (UNK_0xC844350D5D58C99A(Local_385))
	{
		if (UNK_0x437347B10A200C4B(Local_385, 0) || UNK_0xEB6A8945D1AC98A1(Local_385))
		{
			iLocal_102 = 3;
			return;
		}
		if (iLocal_102 == 4)
		{
			return;
		}
		if (func_419(0))
		{
			iLocal_102 = 4;
			return;
		}
	}
	if (iLocal_102 == 2 || iLocal_102 == 1)
	{
		return;
	}
	if (iLocal_98 == 0)
	{
		if (!SYSTEM::VDIST2(vLocal_680, vLocal_103) <= ((vLocal_103.f_3 + 25f) * (vLocal_103.f_3 + 25f)))
		{
			if (UNK_0x03068588A1FCED1A(Local_112.f_9))
			{
				iLocal_102 = 1;
				return;
			}
		}
	}
	else if (UNK_0xC844350D5D58C99A(Local_112.f_9))
	{
		if (!UNK_0x437347B10A200C4B(Local_112.f_9, 0) && !UNK_0xEB6A8945D1AC98A1(Local_112.f_9))
		{
			if ((iLocal_98 == 2 || iLocal_98 == 1) || iLocal_98 == 7)
			{
				fVar0 = 150f;
				if (UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) != -1 || UNK_0x75B806D0A76CB67D(Local_112.f_9) != -1)
				{
					fVar0 = (fVar0 + 300f);
				}
				if (!func_116(Local_112.f_9, vLocal_680, fVar0))
				{
					if (UNK_0x03068588A1FCED1A(Local_112.f_9))
					{
						iLocal_102 = 2;
						return;
					}
				}
				if (Local_112.f_10 != 19 && Local_112.f_10 != 20)
				{
					if (!func_116(Local_112.f_9, vLocal_680, 1000f))
					{
						iLocal_102 = 2;
						return;
					}
				}
			}
			else if (iLocal_98 == 3 || iLocal_98 == 6)
			{
				if (!func_116(Local_112.f_9, vLocal_680, 80f))
				{
					if (UNK_0x03068588A1FCED1A(Local_112.f_9))
					{
						iLocal_102 = 2;
						return;
					}
				}
			}
		}
	}
}

bool func_419(bool bParam0)
{
	if (func_23(Local_385))
	{
		if ((UNK_0x688A90832774AB83(Local_385) || UNK_0xE147126C9AD09A60(Local_385)) || UNK_0xD24FAF25ADC00F44(Local_385))
		{
			return true;
		}
		if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), Local_385))
			{
				return true;
			}
			if (UNK_0xC844350D5D58C99A(Local_393))
			{
				if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), Local_393))
				{
					return true;
				}
			}
			if (UNK_0xC844350D5D58C99A(Local_405))
			{
				if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), Local_405))
				{
					return true;
				}
			}
			if (UNK_0xC844350D5D58C99A(Local_399))
			{
				if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), Local_399))
				{
					return true;
				}
			}
		}
		if (UNK_0xFA4CE147B4D9AEE0(Local_385, 61))
		{
			return true;
		}
		if (UNK_0x869EFD0BC0868856(Local_385))
		{
			if (UNK_0x12DE711B1C681E9E(Local_385, UNK_0x16F2683693E537C9(), 3f, 3f, 3f, 0, 1, 0))
			{
				return true;
			}
		}
		if (UNK_0xFA4CE147B4D9AEE0(Local_385, 51))
		{
			return true;
		}
		if (func_425(Local_385, 1126825984 /* Float: 170f */))
		{
			return true;
		}
		if (func_420(Local_385, 1, 0, 0, 0))
		{
			return true;
		}
		if (UNK_0x681F21BF9F7B449B(-1, UNK_0x68F4C0EC296D3901(Local_385, true), 15f))
		{
			return true;
		}
		if (UNK_0xFA4CE147B4D9AEE0(Local_385, 73))
		{
			return true;
		}
		if (bParam0)
		{
			if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
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

bool func_420(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_429(UNK_0x16F2683693E537C9()) && func_429(bParam0))
	{
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar2, 1);
		if (iVar2 == joaat("WEAPON_PETROLCAN"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_424(bParam0, bParam1, fVar0, fVar1))
			{
				return true;
			}
			if (func_421(bParam0, fVar1, bParam3, bParam4))
			{
				return true;
			}
		}
		else
		{
			if (UNK_0x52AE17073D025311(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xD3DCEC81D13AAFB1(UNK_0x68F4C0EC296D3901(bParam0, true), fVar0, true))
					{
						return true;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_424(bParam0, bParam1, fVar0, fVar1))
				{
					return true;
				}
			}
			if (func_421(bParam0, fVar1, bParam3, bParam4))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_421(bool bParam0, float fParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	vVar3 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.f_1 = (vVar0.y - fParam1);
	vVar0.f_2 = (vVar0.z - fParam1);
	vVar3.x = (vVar3.x + fParam1);
	vVar3.f_1 = (vVar3.y + fParam1);
	vVar3.f_2 = (vVar3.z + fParam1);
	if (bParam2)
	{
		if (((UNK_0x0A4F3CD1EDAEF9D0(UNK_0x68F4C0EC296D3901(bParam0, true), joaat("WEAPON_GRENADE"), fParam1, 1) || UNK_0x0A4F3CD1EDAEF9D0(UNK_0x68F4C0EC296D3901(bParam0, true), joaat("WEAPON_MOLOTOV"), fParam1, 1)) || UNK_0x0A4F3CD1EDAEF9D0(UNK_0x68F4C0EC296D3901(bParam0, true), joaat("WEAPON_SMOKEGRENADE"), fParam1, 1)) || UNK_0x0A4F3CD1EDAEF9D0(UNK_0x68F4C0EC296D3901(bParam0, true), joaat("WEAPON_STICKYBOMB"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_422(bParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_422(bParam0, fParam1))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		if (UNK_0x723EE7F83DF1497D(vVar0, vVar3, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_422(bool bParam0, float fParam1)
{
	var uVar0;
	vector3 vVar1;

	if ((((UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_GRENADE"), fParam1, &vVar1, &uVar0, 0) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_SMOKEGRENADE"), fParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_BZGAS"), fParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_STICKYBOMB"), fParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_MOLOTOV"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_423(bParam0, vVar1, 90f, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_423(bool bParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = { func_192(vParam1 - UNK_0x68F4C0EC296D3901(bParam0, true)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return true;
	}
	if (iParam5 == 0)
	{
		vVar3 = { UNK_0x08D89CE2E20AE305(bParam0) };
	}
	else
	{
		vVar3 = { func_192(UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 5f, 0f) - UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_382(vVar3, vVar0);
	if (fVar6 <= SYSTEM::COS((fParam4 / 2f)))
	{
		return false;
	}
	return true;
}

bool func_424(bool bParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return true;
			}
		}
	}
	if (UNK_0xD3DCEC81D13AAFB1(UNK_0x68F4C0EC296D3901(bParam0, true), fParam2, true))
	{
		return true;
	}
	return false;
}

bool func_425(bool bParam0, float fParam1)
{
	float fVar0;

	if (func_429(UNK_0x16F2683693E537C9()) && func_429(bParam0))
	{
		if (func_427(bParam0) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0))
		{
			if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_426(bParam0, fParam1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_426(bool bParam0, float fParam1)
{
	return func_377(bParam0, UNK_0x16F2683693E537C9(), fParam1, 1, 250, 7);
}

bool func_427(bool bParam0)
{
	if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0) && UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
	{
		return true;
	}
	return false;
}

void func_428(bool bParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	func_20(bParam0, vParam1, fParam4, iParam5, 1);
	if (bParam6)
	{
		if (func_429(bParam0))
		{
			UNK_0xF895E10BF4C72645(bParam0, 0, 0);
		}
	}
}

bool func_429(bool bParam0)
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

bool func_430(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_431(int iParam0, bool bParam1)
{
	func_441(bParam1, 1);
	if (bParam1)
	{
		func_432();
	}
	iLocal_99 = iParam0;
	bLocal_443 = false;
	if (func_71())
	{
		iLocal_444 = 1;
	}
	else
	{
		iLocal_444 = 0;
	}
	if (!func_71())
	{
		if (iLocal_99 == 0)
		{
			if (func_429(UNK_0x16F2683693E537C9()))
			{
				func_428(UNK_0x16F2683693E537C9(), vLocal_692, fLocal_457, 0, 0);
				UNK_0x2FB9A57162E54BAB(0f);
				UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
				func_10(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 50f, 13, 5000, 0, 0);
				iLocal_444 = 1;
			}
		}
	}
	func_1(iLocal_99);
}

void func_432()
{
	func_433(1, 0);
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (!func_71())
		{
			UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
			func_428(UNK_0x16F2683693E537C9(), vLocal_692, fLocal_457, 0, 0);
			UNK_0x2FB9A57162E54BAB(0f);
			UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
		}
		UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
		UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
	}
	func_21();
	UNK_0x51732B934211201A(bLocal_664);
	func_518();
	func_134(0);
}

void func_433(bool bParam0, bool bParam1)
{
	UNK_0x790015DC92C918E2();
	if (UNK_0xFEBC1E4EC9E001F0())
	{
		UNK_0xA37A90C62806D848(1);
	}
	if (Global_110347 == 0)
	{
		func_21();
	}
	UNK_0x51B096AAC60548C1(1f);
	UNK_0x15EA7F4313456B1D(2, true);
	UNK_0x15EA7F4313456B1D(3, true);
	UNK_0x15EA7F4313456B1D(4, true);
	UNK_0x15EA7F4313456B1D(5, true);
	UNK_0x060F249A9A3E3F4E(true);
	func_439(0);
	func_15(0, 0);
	UNK_0x8BCB70EB440DED83(1);
	UNK_0xBFE31971E49FA500(1);
	func_438(0);
	UNK_0xB34C387AF09A1CFD(0);
	func_437(1);
	if (iLocal_98 > 2)
	{
		func_399(0, &uLocal_483);
	}
	UNK_0x2952D66A502EA873(iLocal_482, 0);
	UNK_0xEFED0CD6E25037B9();
	func_118(&uLocal_499, 2);
	func_118(&uLocal_499, 3);
	func_118(&uLocal_499, 4);
	func_326(&uLocal_44, 0, 0);
	UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
	UNK_0x9A82EEAF6CA12AEE(1f);
	func_26(1, 1, 1, 1);
	UNK_0xC1B8EFD8630D086B(0);
	func_436(1, 1, 1);
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	}
	if (func_23(UNK_0x16F2683693E537C9()))
	{
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, true);
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 250, true);
		UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
	}
	func_119();
	func_98(bParam0);
	func_434(bParam1);
}

void func_434(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x11CCD0ACA866C6C5(false, 1);
	}
	UNK_0x8D17794CE3273D70("oddjobs@bailbond_mountain");
	UNK_0x8D17794CE3273D70(func_113());
	func_435();
}

void func_435()
{
	UNK_0xDD465543E2028AEA(func_372());
	UNK_0xDD465543E2028AEA(func_373());
}

void func_436(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;

	bVar0 = true;
	if (UNK_0x39B7A3CCD2467CAB())
	{
		while (bVar0)
		{
			bVar0 = UNK_0x39B7A3CCD2467CAB();
			if (UNK_0x22A8E52414415B76())
			{
				UNK_0x55BE34EDDEA0AC9E(0);
			}
			if (UNK_0x62A1F4500E8F07E0())
			{
				UNK_0x5C8D148FC238F38A();
			}
			if (UNK_0x39B7A3CCD2467CAB() && !UNK_0x22A8E52414415B76())
			{
				bVar0 = false;
			}
			SYSTEM::WAIT(0);
		}
		if (bParam0)
		{
			func_26(iParam1, iParam2, 1, 1);
		}
	}
}

void func_437(int iParam0)
{
	Global_96050 = iParam0;
}

void func_438(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x0E2400AB9174FA81(2, joaat("PLAYER"), joaat("AMBIENT_GANG_MEXICAN"));
		UNK_0x0E2400AB9174FA81(2, joaat("PLAYER"), joaat("AMBIENT_GANG_FAMILY"));
		UNK_0x0E2400AB9174FA81(2, joaat("PLAYER"), joaat("AMBIENT_GANG_MARABUNTE"));
		UNK_0x0E2400AB9174FA81(2, joaat("PLAYER"), joaat("AMBIENT_GANG_CULT"));
		UNK_0x0E2400AB9174FA81(2, joaat("PLAYER"), joaat("AMBIENT_GANG_SALVA"));
		UNK_0x0E2400AB9174FA81(2, joaat("PLAYER"), joaat("AMBIENT_GANG_WEICHENG"));
		UNK_0x2B3E065405F0C451(UNK_0xD803B885F5E47A62(), 0);
	}
	else
	{
		UNK_0x0E2400AB9174FA81(255, joaat("PLAYER"), joaat("AMBIENT_GANG_MEXICAN"));
		UNK_0x0E2400AB9174FA81(255, joaat("PLAYER"), joaat("AMBIENT_GANG_FAMILY"));
		UNK_0x0E2400AB9174FA81(255, joaat("PLAYER"), joaat("AMBIENT_GANG_MARABUNTE"));
		UNK_0x0E2400AB9174FA81(255, joaat("PLAYER"), joaat("AMBIENT_GANG_CULT"));
		UNK_0x0E2400AB9174FA81(255, joaat("PLAYER"), joaat("AMBIENT_GANG_SALVA"));
		UNK_0x0E2400AB9174FA81(255, joaat("PLAYER"), joaat("AMBIENT_GANG_WEICHENG"));
		UNK_0x2B3E065405F0C451(UNK_0xD803B885F5E47A62(), 1);
	}
}

void func_439(bool bParam0)
{
	if (bParam0)
	{
		func_440();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_17(0))
		{
			func_13(0);
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

void func_440()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_441(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_436(0, 1, 1);
	}
	if (!UNK_0x757EF87A33649210())
	{
		UNK_0x53491B90E4FD0E56(0);
	}
	func_199(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_442(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_517())
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
		func_70(1);
	}
}

void func_443(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, int iParam13)
{
	int iVar0;

	iVar0 = 1;
	if (!func_517() || !func_515())
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		if (!func_512(iParam6, iParam7, iParam8, iParam13))
		{
			iVar0 = 0;
		}
	}
	if (iVar0 == 1)
	{
		func_510();
		while (!func_509())
		{
			SYSTEM::WAIT(0);
		}
		*bParam0 = func_490(vParam1, bParam4);
	}
	else if (iParam9 == 1)
	{
		if (func_107(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { Global_105187.f_2890 };
			bParam4 = Global_105187.f_2890.f_6;
		}
		UNK_0x536F1BE96C726C4B(vParam1, 5f, 1, 0, 0, false);
		func_486(vParam1, 5f, 0);
		if (func_89(iParam12))
		{
			func_485(iParam12, 0);
			while (!func_444(bParam0, iParam12, vParam1, bParam4, 1, 0))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			UNK_0x523BCC9DC80CD82F(bParam10);
			while (!UNK_0xB87F6CF6E5628C67(bParam10))
			{
				SYSTEM::WAIT(0);
			}
			*bParam0 = UNK_0x122AAB0B1D6F55AD(bParam10, vParam1, bParam4, true, true, false);
			if (UNK_0xC844350D5D58C99A(*bParam0) && !UNK_0x437347B10A200C4B(*bParam0, 0))
			{
				if (bParam11 == 0)
				{
					UNK_0xC6A6B4DDD6DC073A(*bParam0, false);
				}
				else if (bParam11 > 0)
				{
					UNK_0xC002508A277213DE(*bParam0, bParam11, bParam11);
				}
			}
			UNK_0x71199B01895C6202(bParam10);
		}
	}
	if (iParam5 == 1)
	{
		if (((UNK_0xC844350D5D58C99A(*bParam0) && !UNK_0x437347B10A200C4B(*bParam0, 0)) && UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9())) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), *bParam0, -1);
			UNK_0xB9FD7450C0DAB575(*bParam0, 1084227584 /* Float: 5f */);
		}
	}
}

bool func_444(bool bParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, int iParam7)
{
	bool bVar0;
	var uVar1;
	struct<97> Var5;
	int iVar103;
	int iVar104;
	bool bVar105;
	char cVar106[16];
	int iVar110;

	if (func_89(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_169(iParam1, &Var5, iParam7);
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
				if (func_484(&uVar1, &bVar0))
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
				func_480(bParam0, &(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
				UNK_0x0947AEED9914905B(*bParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (UNK_0x134B62B726CEC8E6(*bParam0) == joaat("BODHI2"))
					{
						func_478(bParam0);
					}
				}
				if (bParam6)
				{
					UNK_0x71199B01895C6202(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
				}
				func_477(*bParam0, iParam1);
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
				if (func_484(&uVar1, &bVar0))
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
				func_480(bParam0, &(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
				UNK_0x0947AEED9914905B(*bParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (UNK_0x134B62B726CEC8E6(*bParam0) == joaat("BODHI2"))
					{
						func_478(bParam0);
					}
				}
				if (bParam6)
				{
					UNK_0x71199B01895C6202(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
				}
				func_477(*bParam0, iParam1);
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
				if (func_484(&uVar1, &bVar0))
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
				func_480(bParam0, &(Var5.f_31), &(Var5.f_81));
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
						func_478(bParam0);
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
					func_445(iParam1, bParam0, 0, 1);
				}
				if (bParam6)
				{
					UNK_0x71199B01895C6202(Var5);
				}
				if (bVar105)
				{
					func_477(*bParam0, iParam1);
				}
				return true;
			}
		}
	}
	return false;
}

void func_445(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;

	if ((func_89(iParam0) && UNK_0xC844350D5D58C99A(*bParam1)) && UNK_0xDF1306B443CD3D15(*bParam1, 0))
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
			func_138(*bParam1, iParam0);
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
		if (UNK_0x67303E186EA6C9A0(*bParam1) >= 0 && func_449(*bParam1, 0, &uVar0))
		{
			func_179(bParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
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
				Global_111638.f_20113[iParam0 /*43*/].f_31 = func_448(*bParam1);
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
				func_446(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_111638.f_20113[iParam0 /*43*/].f_1));
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
				func_446(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_111638.f_20113[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_446(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;

	iVar0 = 0;
	while (func_447(iVar0, &uVar2, &iVar1, &iVar6, &iVar7))
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

bool func_447(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
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

float func_448(bool bParam0)
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

bool func_449(bool bParam0, bool bParam1, var uParam2)
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
	if ((!func_475(bVar0, bParam1, uParam2) && !func_474(UNK_0xD803B885F5E47A62())) && !func_457(bParam0))
	{
		return false;
	}
	if (func_474(UNK_0xD803B885F5E47A62()))
	{
		if (func_456(bVar0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bVar1 = false;
	if (func_455(UNK_0xD803B885F5E47A62()) && (UNK_0xAFB8495D36825275(bVar0) || UNK_0xC41A9202669A24C4(bVar0)))
	{
		bVar1 = true;
	}
	if (((UNK_0x56E1CD81AE700E98(bParam0) && !func_453(bParam0)) && !bVar1) && !(func_452(UNK_0x134B62B726CEC8E6(bParam0)) && func_450(UNK_0xD803B885F5E47A62())))
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
		if ((func_151(bParam0) && UNK_0x134B62B726CEC8E6(bParam0) != joaat("SENTINEL2")) && UNK_0x134B62B726CEC8E6(bParam0) != joaat("ISSI2"))
		{
			*uParam2 = 2;
			return false;
		}
	}
	return true;
}

bool func_450(bool bParam0)
{
	if (bParam0 != func_82())
	{
		if (func_343(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_451(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

int func_451(int iParam0)
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

bool func_452(int iParam0)
{
	if (((iParam0 == joaat("MULE4") || iParam0 == joaat("POUNDER2")) || iParam0 == joaat("SPEEDO4")) || iParam0 == joaat("TERBYTE"))
	{
		return true;
	}
	return false;
}

bool func_453(bool bParam0)
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
			if (func_454(UNK_0xD803B885F5E47A62()))
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

bool func_454(bool bParam0)
{
	if (bParam0 != func_82())
	{
		if (func_343(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_451(Global_2425662[bParam0 /*421*/].f_310.f_5) == 13;
			}
		}
	}
	return false;
}

bool func_455(bool bParam0)
{
	if (bParam0 != func_82())
	{
		if (func_343(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_451(Global_2425662[bParam0 /*421*/].f_310.f_5) == 7;
			}
		}
	}
	return false;
}

bool func_456(bool bParam0)
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

bool func_457(bool bParam0)
{
	if (func_473(UNK_0xD803B885F5E47A62()) || func_472(UNK_0xD803B885F5E47A62()))
	{
		if (func_458(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_458(bool bParam0)
{
	if ((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return false;
	}
	if (func_461(bParam0, 0))
	{
		return true;
	}
	if (UNK_0x30F813723591D02E(bParam0, "Player_Vehicle"))
	{
		if (UNK_0x1E2DFB0EF4BB4566(bParam0, "Player_Vehicle") == UNK_0xE86C2816EDC6CAF0(UNK_0xD803B885F5E47A62()))
		{
			if (func_459(bParam0))
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

bool func_459(bool bParam0)
{
	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	if (func_460(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		return true;
	}
	return false;
}

bool func_460(int iParam0)
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

bool func_461(bool bParam0, bool bParam1)
{
	switch (UNK_0x134B62B726CEC8E6(bParam0))
	{
		case joaat("TECHNICAL"):
		case joaat("INSURGENT"):
			if (func_463(UNK_0x134B62B726CEC8E6(bParam0), 0))
			{
				if (Global_2537071.f_301 == bParam0)
				{
					return true;
				}
				else if (func_462(bParam0) != -1 && !bParam1)
				{
					return true;
				}
			}
			break;
	}
	return false;
}

int func_462(bool bParam0)
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

bool func_463(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_471(iParam0, 0))
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
			return func_470();
		case joaat("SABREGT"):
			if (Global_262145.f_14219)
			{
				return func_469();
			}
			break;
		case joaat("TORNADO"):
		case joaat("TORNADO2"):
		case joaat("TORNADO3"):
			if (Global_262145.f_14220)
			{
				return func_469();
			}
			break;
		case joaat("VIRGO3"):
			if (Global_262145.f_14218)
			{
				return func_469();
			}
			break;
		case joaat("MINIVAN"):
			if (Global_262145.f_14221)
			{
				return func_469();
			}
			break;
		case joaat("SLAMVAN"):
			if (Global_262145.f_14223)
			{
				return func_469();
			}
			break;
		case joaat("SULTAN"):
		case joaat("BANSHEE"):
			return func_468();
		case joaat("COMET2"):
			if (Global_262145.f_18669)
			{
				return func_467();
			}
			break;
		case joaat("DIABLOUS"):
			if (Global_262145.f_18671)
			{
				return func_467();
			}
			break;
		case joaat("FCR"):
			if (Global_262145.f_18675)
			{
				return func_467();
			}
			break;
		case joaat("ELEGY2"):
			if (Global_262145.f_18672)
			{
				return func_467();
			}
			break;
		case joaat("NERO"):
			if (Global_262145.f_18679)
			{
				return func_467();
			}
			break;
		case joaat("ITALIGTB"):
			if (Global_262145.f_18677)
			{
				return func_467();
			}
			break;
		case joaat("SPECTER"):
			if (Global_262145.f_18682)
			{
				return func_467();
			}
			break;
		case joaat("TECHNICAL"):
			if (Global_262145.f_20625)
			{
				return func_466();
			}
			break;
		case joaat("INSURGENT"):
			if (Global_262145.f_20626)
			{
				return func_466();
			}
			break;
		case joaat("RATLOADER"):
		case joaat("RATLOADER2"):
			return func_465();
		case joaat("GLENDALE"):
			if (func_465() || func_464())
			{
				return true;
			}
			break;
		case joaat("IMPALER"):
			return func_465();
		case joaat("ISSI3"):
			return func_465();
		case joaat("GARGOYLE"):
			return func_465();
		case joaat("DOMINATOR"):
			return func_465();
		case joaat("DOMINATOR2"):
			return func_465();
		case joaat("IMPERATOR"):
			return func_465();
		case joaat("IMPERATOR2"):
			return func_465();
		case joaat("IMPERATOR3"):
			return func_465();
		case joaat("DEATHBIKE"):
			return func_465();
		case joaat("DEATHBIKE2"):
			return func_465();
		case joaat("DEATHBIKE3"):
			return func_465();
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
			return func_465();
		case joaat("YOUGA2"):
			if (Global_262145.f_28524)
			{
				return func_464();
			}
			break;
		case 722226637:
			if (Global_262145.f_28874)
			{
				return func_464();
			}
			break;
		case joaat("MANANA"):
			if (Global_262145.f_28523)
			{
				return func_464();
			}
			break;
		case joaat("PEYOTE"):
			if (Global_262145.f_28873)
			{
				return func_464();
			}
			break;
		case joaat("YOSEMITE"):
			if (Global_262145.f_28872)
			{
				return func_464();
			}
			break;
	}
	return false;
}

bool func_464()
{
	return UNK_0xC146D5FBD23C6954(1815791016);
}

bool func_465()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPCHRISTMAS2018"));
}

bool func_466()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPGUNRUNNING"));
}

bool func_467()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPIMPORTEXPORT"));
}

bool func_468()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPJANUARY2016"));
}

bool func_469()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPLOWRIDER2"));
}

bool func_470()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPLOWRIDER"));
}

bool func_471(int iParam0, int iParam1)
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

bool func_472(bool bParam0)
{
	if (bParam0 != func_82())
	{
		if (func_343(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_82())
			{
				return func_451(Global_2425662[bParam0 /*421*/].f_310.f_5) == 5;
			}
		}
	}
	return false;
}

bool func_473(bool bParam0)
{
	if (bParam0 != func_82())
	{
		if (func_343(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_82())
			{
				return func_451(Global_2425662[bParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return false;
}

bool func_474(bool bParam0)
{
	if (bParam0 != func_82())
	{
		if (func_343(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_451(Global_2425662[bParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return false;
}

bool func_475(bool bParam0, bool bParam1, var uParam2)
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
	if (func_455(UNK_0xD803B885F5E47A62()) && (UNK_0xAFB8495D36825275(bParam0) || UNK_0xC41A9202669A24C4(bParam0)))
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
		if (func_476(bParam0))
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

bool func_476(bool bParam0)
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

void func_477(bool bParam0, int iParam1)
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

void func_478(bool bParam0)
{
	if (!func_479(*bParam0))
	{
		UNK_0xD3421E391490133B(*bParam0, 5, !Global_111638.f_9080.f_99.f_58[119]);
	}
}

bool func_479(bool bParam0)
{
	return UNK_0xDD62D560CFE11A27(bParam0, 5);
}

int func_480(bool bParam0, var uParam1, var uParam2)
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
	if (func_471(UNK_0x134B62B726CEC8E6(*bParam0), 1) && UNK_0x0ECB5CA5140957AD(*bParam0, 24) != func_483(*bParam0, ((*uParam1)[38] - 1)))
	{
		UNK_0xEE6A1776A67F70C1(*bParam0, 24, func_483(*bParam0, ((*uParam1)[38] - 1)), false);
	}
	func_482(bParam0);
	if (func_481(*bParam0))
	{
		UNK_0xD5A0214B20BCBAD8(*bParam0, 1);
		UNK_0x44A200C9B6E1CEA6(*bParam0, true);
	}
	return 1;
}

bool func_481(bool bParam0)
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

void func_482(bool bParam0)
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

int func_483(bool bParam0, int iParam1)
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

bool func_484(var uParam0, bool bParam1)
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

void func_485(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (iParam0 == 145 || Global_96085[iVar0] == iParam0)
			{
				if (iParam1 == 0 || UNK_0x134B62B726CEC8E6(Global_96075[iVar0]) == func_168(iParam0, iParam1))
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

void func_486(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_167(&(Global_75441.f_555[0 /*21*/]), iVar0))
		{
			if (UNK_0x0EB28750412C3A5A(vParam0, Global_75441.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_487(iVar0);
			}
		}
		iVar0++;
	}
}

void func_487(int iParam0)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (func_167(&(Global_75441.f_555[0 /*21*/]), iParam0))
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
			if (((((iParam0 == 24 && func_173(iParam0, 0)) && Global_76350.f_66 == 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] != 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] > 3) && (!func_488(0, Global_75441.f_555[0 /*21*/].f_12) || !func_488(1, Global_75441.f_555[0 /*21*/].f_12)))
			{
				func_174(&(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]), &Global_76350);
				Global_76428 = Global_111638.f_32744.f_5591;
			}
			func_171(iParam0, 0);
		}
	}
}

bool func_488(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_489(&(Global_111638.f_32744.f_5038[iVar0 /*157*/])))
	{
		return false;
	}
	return func_141(Global_111638.f_32744.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_489(var uParam0)
{
	return *uParam0;
}

bool func_490(vector3 vParam0, bool bParam3)
{
	return func_491(&(Global_105187.f_2890), vParam0, bParam3, 0);
}

bool func_491(var uParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	var uVar5;
	int iVar8;

	if (func_508(uParam0))
	{
		if (func_107(vParam1, 0f, 0f, 0f, 0))
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
		if (func_507(uParam0))
		{
			UNK_0x536F1BE96C726C4B(vParam1, 5f, 1, 0, 0, false);
			func_486(vParam1, 5f, 0);
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
							func_485(uParam0->f_11, 1);
						}
						else if (UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(bVar0)))
						{
							func_485(uParam0->f_11, 2);
						}
					}
					UNK_0x316958DDB94DF3FC(bVar0, 0);
					UNK_0x626D5ADA3EFAE431(bVar0, 0);
					UNK_0x44A200C9B6E1CEA6(bVar0, true);
					func_477(bVar0, uParam0->f_11);
				}
				else if ((!func_493(bVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && UNK_0x7F8A39872A07D2CE(UNK_0xBB0808A181D4745C(), "startup_positioning"))
				{
					iVar8 = func_492(bVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_487(iVar8);
					}
				}
				if (((Global_98744 != 13 && Global_98744 != 10) && Global_98744 != 11) && Global_98744 != 12)
				{
					if (UNK_0x12AB0310C2281427(&(Global_98744.f_3)) == Global_76429)
					{
						if (uParam0->f_12.f_66 == Global_111638.f_32744.f_69[21 /*78*/].f_66)
						{
							func_171(24, 0);
							func_487(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_138(bVar0, uParam0->f_11);
				}
				UNK_0x71199B01895C6202(uParam0->f_12.f_66);
				vVar1 = { UNK_0x68F4C0EC296D3901(bVar0, true) };
			}
			return bVar0;
		}
	}
	return bVar0;
}

int func_492(bool bParam0)
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

bool func_493(bool bParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;

	iVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	switch (iVar0)
	{
		case joaat("CARGOBOB"):
			if (func_495(bParam0, Global_75441.f_139[38], 0))
			{
				func_487(38);
				return true;
			}
			break;
		case joaat("FIRETRUK"):
			if (func_495(bParam0, Global_75441.f_139[43], 1))
			{
				func_487(43);
				return true;
			}
			break;
		case joaat("CUBAN800"):
			iVar5 = UNK_0xA361D247A75E0128(UNK_0x16F2683693E537C9(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_495(bParam0, uVar1[iVar6], 1) && func_494(UNK_0x68F4C0EC296D3901(uVar1[iVar6], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_107(vParam1, 0f, 0f, 0f, 0)) || UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bParam0, true), UNK_0x68F4C0EC296D3901(uVar1[iVar6], true), 1) < 10f)
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
					func_487(14);
					return true;
				}
			}
			break;
		case joaat("SWIFT2"):
			if ((UNK_0xC844350D5D58C99A(Global_75441.f_484[20]) && UNK_0xDF1306B443CD3D15(bParam0, 0)) && UNK_0xDF1306B443CD3D15(Global_75441.f_484[20], 0))
			{
				if (UNK_0x134B62B726CEC8E6(Global_75441.f_484[20]) == joaat("SWIFT2") && UNK_0xF22DC2D0CA24A151(bParam0) == UNK_0xF22DC2D0CA24A151(Global_75441.f_484[20]))
				{
					func_487(20);
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_494(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_495(bool bParam0, bool bParam1, bool bParam2)
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
		if (!func_500(bParam0))
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
			if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_178(iVar0 + 1)))
			{
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_178(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("SANDKING") || uParam1->f_66 == joaat("SANDKING2"))
		{
			iVar1 = 1;
			if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_178(iVar1 + 1)))
			{
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_178(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_178(iVar2)))
				{
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_178(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_178(iVar3)))
				{
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_178(iVar3));
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
					if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_178(iVar4)))
					{
					}
					else
					{
						UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_178(iVar4));
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
		if (((UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 15) || func_499(bParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_498())
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
		if (uParam1->f_65 == -1 && !func_180(uParam1->f_66))
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
						func_497(bParam0, uParam1->f_69);
					}
				}
				else
				{
					func_497(bParam0, uParam1->f_69);
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
			func_480(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!UNK_0xAFB8495D36825275(uParam1->f_66) && !UNK_0xA7082C42B8809BF2(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_178(iVar5 + 1)))
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

void func_497(bool bParam0, int iParam1)
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

bool func_498()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPINDEPENDENCE"));
}

bool func_499(bool bParam0)
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

bool func_500(bool bParam0)
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!func_506(UNK_0xD803B885F5E47A62(), -1))
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
	if (func_502(UNK_0xD803B885F5E47A62()) == 3)
	{
		if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (func_501(bParam0) != -1)
			{
				return true;
			}
		}
	}
	return false;
}

int func_501(bool bParam0)
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

int func_502(int iParam0)
{
	if (func_505(iParam0) == 233)
	{
		return func_503(iParam0);
	}
	return -1;
}

int func_503(int iParam0)
{
	if (func_504(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

bool func_504(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

int func_505(int iParam0)
{
	if (func_504(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_506(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (func_343(bParam0, 1, 1))
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

bool func_507(var uParam0)
{
	if (func_508(uParam0))
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

bool func_508(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return false;
	}
	if (!func_141(uParam0->f_12.f_66, 0))
	{
		return false;
	}
	if (uParam0->f_12.f_66 == joaat("STUNT") && func_494(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608 /* Float: 0.5f */, 0))
	{
		return false;
	}
	return true;
}

bool func_509()
{
	return func_507(&(Global_105187.f_2890));
}

void func_510()
{
	func_511(&(Global_105187.f_2890));
}

void func_511(var uParam0)
{
	if (func_508(uParam0))
	{
		UNK_0x523BCC9DC80CD82F(uParam0->f_12.f_66);
	}
}

bool func_512(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (UNK_0xA7082C42B8809BF2(Global_105187.f_2890.f_12.f_66))
	{
		return false;
	}
	if (iParam1 == 0 && UNK_0xAFB8495D36825275(Global_105187.f_2890.f_12.f_66))
	{
		return false;
	}
	if (iParam2 == 0 && func_514(Global_105187.f_2890.f_12.f_66))
	{
		return false;
	}
	if (iParam3 == 0 && UNK_0xC41A9202669A24C4(Global_105187.f_2890.f_12.f_66))
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (!func_513())
		{
			return false;
		}
	}
	return true;
}

bool func_513()
{
	float fVar0;

	if (!func_515())
	{
		return false;
	}
	if ((UNK_0xA7082C42B8809BF2(Global_105187.f_2890.f_12.f_66) || UNK_0xC41A9202669A24C4(Global_105187.f_2890.f_12.f_66)) || UNK_0xA7D7011F9888A365(Global_105187.f_2890.f_12.f_66))
	{
		return false;
	}
	fVar0 = UNK_0x8B8E112F7172CF29(Global_105187.f_2890.f_12.f_66);
	if (fVar0 < 37f)
	{
		return false;
	}
	return true;
}

bool func_514(int iParam0)
{
	switch (iParam0)
	{
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLMAV"):
		case joaat("POLICEB"):
		case joaat("POLICET"):
		case joaat("POLICEOLD2"):
		case joaat("POLICEOLD1"):
		case joaat("SHERIFF"):
		case joaat("SHERIFF2"):
			return true;
	}
	return false;
}

bool func_515()
{
	return func_508(&(Global_105187.f_2890));
}

int func_516()
{
	if (!Global_98744 == 10 && !Global_98744 == 9)
	{
		return 0;
	}
	return Global_98744.f_2;
}

bool func_517()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return true;
	}
	return false;
}

void func_518()
{
	vector3 vVar0;
	vector3 vVar3;

	func_526();
	while (!func_58(0) || !func_58(1))
	{
		SYSTEM::WAIT(0);
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, false);
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 250, false);
	}
	UNK_0xF63400DBE3303D26("ENEMIES", &bLocal_664);
	UNK_0x0E2400AB9174FA81(5, joaat("PLAYER"), bLocal_664);
	UNK_0x0E2400AB9174FA81(5, bLocal_664, joaat("PLAYER"));
	vVar0 = { func_525(vLocal_103) };
	vVar3 = { func_524(vLocal_103) };
	UNK_0x10F3BFFADF2CE3DA(vVar0, vVar3);
	iLocal_482 = UNK_0x7D6CA5F52B3748BF(vVar0, vVar3, 0, 1, 1, 1);
	UNK_0x536F1BE96C726C4B(vLocal_103, 30f, 0, 0, 0, false);
	UNK_0x15EA7F4313456B1D(2, false);
	UNK_0x15EA7F4313456B1D(3, false);
	UNK_0x15EA7F4313456B1D(4, false);
	UNK_0x15EA7F4313456B1D(5, false);
	UNK_0x060F249A9A3E3F4E(false);
	UNK_0x51B096AAC60548C1(0.2f);
	func_438(1);
	while (!func_521())
	{
		SYSTEM::WAIT(0);
	}
	func_519();
	if (func_23(UNK_0x16F2683693E537C9()))
	{
		func_97(&uLocal_499, 2, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
		UNK_0x971EF1DE410C56CF(UNK_0x16F2683693E537C9(), 1);
	}
	if (func_23(Local_112.f_9))
	{
		func_97(&uLocal_499, 3, Local_112.f_9, sLocal_485, 0, 1);
		UNK_0x971EF1DE410C56CF(Local_112.f_9, 1);
	}
}

void func_519()
{
	if (func_23(Local_112.f_9))
	{
		UNK_0x33CE5A9E32EA10B2(Local_112.f_9, 1);
		UNK_0x08EAEE08061C1898(Local_112.f_9, 1);
		UNK_0x0B42C743EF171FF5(Local_112.f_9, 100);
		UNK_0xD458AC1C1D29C3B4(Local_112.f_9, 200, false);
		UNK_0xE5B803CC231E2867(Local_112.f_9, 1);
		UNK_0x7980D72D61BEF4D5(Local_112.f_9, true);
		UNK_0xFCCF7611216AE801(Local_112.f_9, 1);
		UNK_0x028142EA0AE5BA8C(Local_112.f_9, 1);
		UNK_0xE652C92E8AF37788(Local_112.f_9, 2f);
		UNK_0xFF05A1F4D58AD1FE(Local_112.f_9, 2f);
		UNK_0x08EAEE08061C1898(Local_112.f_9, 1);
		UNK_0x291398BF0ED6A2E2(Local_112.f_9, 0);
		UNK_0x4E885A246A9D983A(Local_112.f_9, 118, true);
		UNK_0x4E885A246A9D983A(Local_112.f_9, 137, true);
		UNK_0x4E885A246A9D983A(Local_112.f_9, 281, true);
		UNK_0x20EC6650986ACDC7(Local_112.f_9, 1);
		if (Local_112.f_12 != 0)
		{
			UNK_0x262EF6C6306BEA6C(Local_112.f_9, Local_112.f_12, -1, true, true);
		}
		func_362(Local_112.f_9);
		func_520(Local_112.f_9, "TARGET_", 0);
		Local_112.f_10 = 0;
		UNK_0x262EF6C6306BEA6C(Local_112.f_9, joaat("GADGET_PARACHUTE"), true, false, true);
		UNK_0x64F9F278AB9DCA2C(Local_112.f_9, false, false, true, 0);
		UNK_0x64F9F278AB9DCA2C(Local_112.f_9, 2, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(Local_112.f_9, 3, false, true, 0);
		UNK_0x64F9F278AB9DCA2C(Local_112.f_9, 4, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(Local_112.f_9, 8, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(Local_112.f_9, 10, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(Local_112.f_9, 8, 3, false, 0);
		UNK_0xDD353D0E9C789D0E(&iLocal_484);
		if (func_23(Local_132[0 /*20*/]))
		{
			UNK_0xF96A174EE26D7588(false, Local_132[0 /*20*/], 0);
		}
		UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@bailbond_mountain", "excited_idle_a", 8f, -8f, -1, 0, false, 0, 0, 0);
		UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@bailbond_mountain", "excited_idle_b", 8f, -8f, -1, 0, false, 0, 0, 0);
		UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@bailbond_mountain", "excited_idle_c", 8f, -8f, -1, 0, false, 0, 0, 0);
		UNK_0x25644C31B4B6E9F3(iLocal_484, 1);
		UNK_0x75ABDC5F81978924(iLocal_484);
		UNK_0x78ADC381772E3D54(Local_112.f_9, iLocal_484);
		UNK_0xF82EA857DA10E0CD(&iLocal_484);
		if (func_23(Local_132[0 /*20*/]))
		{
			func_362(Local_132[0 /*20*/]);
			if (Local_132[0 /*20*/].f_5 != 0)
			{
				UNK_0x262EF6C6306BEA6C(Local_132[0 /*20*/], Local_132[0 /*20*/].f_5, -1, true, true);
			}
			func_520(Local_132[0 /*20*/], "BACKUP_", 0);
			UNK_0x64F9F278AB9DCA2C(Local_132[0 /*20*/], false, true, true, 0);
			UNK_0x64F9F278AB9DCA2C(Local_132[0 /*20*/], 2, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(Local_132[0 /*20*/], 3, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(Local_132[0 /*20*/], 4, true, true, 0);
			UNK_0x64F9F278AB9DCA2C(Local_132[0 /*20*/], 8, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(Local_132[0 /*20*/], 10, false, false, 0);
			if (UNK_0xC844350D5D58C99A(Local_340[0 /*9*/]))
			{
				if (!UNK_0xD59B17D2DFF98E26(Local_340[0 /*9*/]))
				{
					UNK_0x9F528B1B53FBC5D9(Local_340[0 /*9*/], Local_132[0 /*20*/], UNK_0x4A089F2B762B8D33(Local_132[0 /*20*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					UNK_0x1E9649458B15960F(Local_340[0 /*9*/], false);
					UNK_0x0C8C0C840C2D1AD2(Local_132[0 /*20*/], Local_112.f_9, -1, 2060, 3);
					UNK_0xC6EB89C59F2AF6B8(Local_132[0 /*20*/], "oddjobs@bailbond_mountain", "Idle_Camman", 8f, -8f, -1, 49, false, 0, 0, 0);
					UNK_0xF96A174EE26D7588(Local_132[0 /*20*/], Local_112.f_9, -1);
				}
			}
		}
	}
}

void func_520(bool bParam0, char* sParam1, int iParam2)
{
	char cVar0[16];

	StringCopy(&cVar0, sParam1, 16);
	StringIntConCat(&cVar0, iParam2, 16);
	UNK_0x5F2AA9E2843E9403(bParam0, &cVar0);
}

bool func_521()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	if (func_54(&(Local_112.f_9), Local_112.f_11, Local_112.f_13, Local_112.f_16, 1, 0, 0))
	{
		if (func_23(Local_112.f_9))
		{
			UNK_0x11AD11297DC58CC7(Local_112.f_9, true);
			iVar0++;
		}
	}
	if (iLocal_471 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_471 - 1))
		{
			if (func_54(&(Local_132[iVar2 /*20*/]), Local_132[iVar2 /*20*/].f_19, Local_132[iVar2 /*20*/].f_1, Local_132[iVar2 /*20*/].f_4, 0, 0, 0))
			{
				if (func_23(Local_132[iVar2 /*20*/]))
				{
					iVar0++;
					iVar1++;
				}
			}
			iVar2++;
		}
	}
	if (iVar1 == iLocal_471)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_471 - 1))
		{
			UNK_0x71199B01895C6202(Local_132[iVar2 /*20*/].f_19);
			iVar2++;
		}
	}
	if (iLocal_468 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_468 - 1))
		{
			if (func_523(&(Local_254[iVar2 /*6*/]), Local_254[iVar2 /*6*/].f_5, Local_254[iVar2 /*6*/].f_1, Local_254[iVar2 /*6*/].f_4, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_469 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_469 - 1))
		{
			if (func_57(&(Local_291[iVar2 /*6*/]), Local_291[iVar2 /*6*/].f_5, Local_291[iVar2 /*6*/].f_1, Local_291[iVar2 /*6*/].f_4, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_467 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_467 - 1))
		{
			if (func_57(&(Local_340[iVar2 /*9*/]), Local_340[iVar2 /*9*/].f_8, Local_340[iVar2 /*9*/].f_1, Local_340[iVar2 /*9*/].f_7, 1))
			{
				UNK_0x1E9649458B15960F(Local_340[iVar2 /*9*/], true);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_470 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_470 - 1))
		{
			if (func_522(&(Local_377[iVar2 /*7*/]), Local_377[iVar2 /*7*/].f_5, Local_377[iVar2 /*7*/].f_2, Local_377[iVar2 /*7*/].f_6, Local_377[iVar2 /*7*/].f_1, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iVar0 == ((((iLocal_471 + iLocal_468) + iLocal_469) + iLocal_467) + iLocal_470) + 1)
	{
		return true;
	}
	return false;
}

bool func_522(var uParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7)
{
	if (!UNK_0x762119754C50557A(*uParam0))
	{
		if (func_56(bParam6))
		{
			*uParam0 = UNK_0xA6FF0828D17CF374(iParam1, vParam2, bParam5, -1, 1, bParam6);
			if (UNK_0x762119754C50557A(*uParam0))
			{
				if (UNK_0x797C48AACDB248B0(*uParam0))
				{
					if (bParam7)
					{
						func_55(bParam6, 1);
					}
					return true;
				}
			}
		}
	}
	else if (UNK_0x797C48AACDB248B0(*uParam0))
	{
		if (bParam7)
		{
			func_55(bParam6, 0);
		}
		return true;
	}
	return false;
}

bool func_523(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	if (!UNK_0xC844350D5D58C99A(*uParam0))
	{
		if (func_56(bParam1))
		{
			*uParam0 = UNK_0x122AAB0B1D6F55AD(bParam1, vParam2, bParam5, true, true, false);
			if (UNK_0xC844350D5D58C99A(*uParam0))
			{
				if (!UNK_0xAF6690C489CC6203(*uParam0))
				{
					UNK_0x73270B3C9CC833FD(*uParam0, true, 0);
				}
				if (func_102(*uParam0))
				{
					UNK_0xA47B46945FF6DE74(*uParam0, vParam2, 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(*uParam0, bParam5);
				}
				UNK_0xB9FD7450C0DAB575(*uParam0, 1084227584 /* Float: 5f */);
				if (bParam6)
				{
					func_55(bParam1, 1);
				}
				return true;
			}
		}
	}
	else
	{
		if (bParam6)
		{
			func_55(bParam1, 0);
		}
		return true;
	}
	return false;
}

Vector3 func_524(struct<5> Param0, var uParam5, var uParam6, var uParam7)
{
	switch (Param0.f_4)
	{
		case 0:
			return 2956.785f, 2824.594f, 45.1931f;
		case 1:
			return 197.6706f, 2333.772f, 105.647f;
		case 2:
			return 535.9079f, 5518.323f, 772.5947f;
		case 3:
			return 1446.768f, 6361.93f, 26.9007f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_525(struct<5> Param0, var uParam5, var uParam6, var uParam7)
{
	switch (Param0.f_4)
	{
		case 0:
			return 2929.665f, 2782.219f, 34.8822f;
		case 1:
			return 145.6927f, 2266.886f, 70.4983f;
		case 2:
			return 491.7797f, 5485.706f, 736.4918f;
		case 3:
			return 1414.211f, 6326.607f, 20.8036f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_526()
{
	int iVar0;

	iVar0 = 0;
	iLocal_111 = 5;
	Local_112.f_11 = joaat("S_M_Y_XMECH_02");
	Local_112.f_13 = { 515.5f, 5494.33f, 766.77f };
	Local_112.f_16 = 187.4998f;
	Local_112.f_12 = joaat("WEAPON_UNARMED");
	Local_112.f_10 = 0;
	Local_112.f_17 = 0;
	Local_112.f_18 = 0;
	Local_112.f_19 = 0;
	func_8();
	Local_132[0 /*20*/].f_19 = joaat("A_M_Y_SKATER_01");
	Local_132[0 /*20*/].f_1 = { 513.79f, 5495.2f, 767.76f };
	Local_132[0 /*20*/].f_4 = 247.4996f;
	Local_132[0 /*20*/].f_5 = joaat("WEAPON_UNARMED");
	Local_132[0 /*20*/].f_14 = 0;
	iLocal_471 = 1;
	Local_254[0 /*6*/].f_5 = joaat("SANCHEZ");
	Local_254[0 /*6*/].f_1 = { 513.4f, 5501.95f, 770.5f };
	Local_254[0 /*6*/].f_4 = 270f;
	iLocal_468 = 1;
	iLocal_469 = 0;
	Local_340[0 /*9*/].f_8 = joaat("PROP_V_CAM_01");
	Local_340[0 /*9*/].f_1 = { 515.2064f, 5496.782f, 767.511f };
	Local_340[0 /*9*/].f_7 = 0f;
	iLocal_467 = 1;
	Local_377[0 /*7*/].f_5 = joaat("PICKUP_PARACHUTE");
	Local_377[0 /*7*/].f_2 = { 515.06f, 5500.79f, 769.55f };
	UNK_0x5D96D8530B3D0904(&(Local_377[0 /*7*/].f_6), 3);
	UNK_0x5D96D8530B3D0904(&(Local_377[0 /*7*/].f_6), 4);
	UNK_0x5D96D8530B3D0904(&(Local_377[0 /*7*/].f_6), true);
	iLocal_470 = 1;
	vLocal_692 = { 519.3214f, 5543.285f, 776.6292f };
	fLocal_457 = 171.0401f;
	vLocal_695 = { 526.7953f, 5518.609f, 770.8146f };
	fLocal_458 = 149.4155f;
	vLocal_698 = { 516.7903f, 5503.043f, 769.7175f };
	fLocal_459 = 171.4808f;
	vLocal_701 = { 0f, 0f, 0f };
	vLocal_704 = { 0f, 0f, 0f };
	iLocal_101 = 4;
	bLocal_417 = false;
	bLocal_418 = false;
	bLocal_419 = false;
	bLocal_421 = true;
	bLocal_420 = true;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_422[iVar0] = 0;
		iVar0++;
	}
	bLocal_426 = false;
	bLocal_427 = false;
	bLocal_428 = false;
	bLocal_429 = false;
	bLocal_430 = true;
	bLocal_432 = false;
	bLocal_431 = false;
	bLocal_433 = false;
	bLocal_436 = false;
	bLocal_438 = false;
	bLocal_439 = false;
	bLocal_440 = false;
	bLocal_441 = false;
	bLocal_446 = false;
	bLocal_447 = false;
	bLocal_448 = false;
	bLocal_449 = false;
	bLocal_450 = true;
	bLocal_451 = false;
	bLocal_452 = false;
	bLocal_453 = false;
	bLocal_434 = true;
	bLocal_435 = false;
	bLocal_442 = false;
	bLocal_454 = false;
	bLocal_445 = false;
	iLocal_102 = 0;
	iLocal_461 = 0;
	iLocal_465 = 0;
	iLocal_466 = 0;
	iLocal_462 = 0;
	iLocal_463 = 0;
	iLocal_464 = 0;
	iLocal_460 = 0;
	iLocal_477 = 0;
	iLocal_472 = 0;
	iLocal_473 = -1;
	iLocal_474 = -1;
	bLocal_476 = false;
	iLocal_478 = 0;
	iLocal_479 = 0;
	iLocal_480 = -1;
	vLocal_683 = { 1110.065f, 4408.885f, 64.5833f };
	vLocal_686 = { 1525.04f, 4491.764f, 53.3925f };
	vLocal_677 = { 2722.661f, 4143.105f, 43.0617f };
	StringCopy(&cLocal_665, "", 24);
	Local_385.f_6 = func_537(62);
	Local_385.f_1 = { func_536() };
	Local_385.f_4 = func_535();
	Local_393.f_5 = func_534();
	Local_393.f_1 = { func_533() };
	Local_393.f_4 = func_532();
	Local_399.f_5 = func_531();
	Local_399.f_1 = { func_530() };
	Local_399.f_4 = func_529();
	Local_405.f_5 = func_48();
	Local_405.f_1 = { func_47() };
	Local_405.f_4 = func_46();
	Local_411.f_5 = func_45();
	Local_411.f_1 = { func_528() };
	Local_411.f_4 = func_527();
	sLocal_485 = "BailBond3Jumper";
	bLocal_486 = "BB3_J1";
	bLocal_487 = "BB3_J3";
	sLocal_488[0] = "BB3_VC1";
	sLocal_488[1] = "BB3_VC2";
	sLocal_488[2] = "BB3_VC3";
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_422[iVar0] = 0;
		iVar0++;
	}
	iLocal_253 = 0;
}

float func_527()
{
	return 75.15f;
}

Vector3 func_528()
{
	return 2727.29f, 4145.9f, 44.16f;
}

float func_529()
{
	return 71f;
}

Vector3 func_530()
{
	return 2727.686f, 4145.715f, 44.08f;
}

int func_531()
{
	return joaat("PROP_LAPTOP_01A");
}

float func_532()
{
	return -91.28f;
}

Vector3 func_533()
{
	return 2728.35f, 4145.59f, 43.3f;
}

int func_534()
{
	return joaat("PROP_TABLE_03_CHR");
}

float func_535()
{
	return 89.19f;
}

Vector3 func_536()
{
	return 2728.33f, 4145.6f, 43.89f;
}

int func_537(int iParam0)
{
	if (!func_89(iParam0))
	{
		return func_92(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_538(bool bParam0)
{
	if (UNK_0x2C1AA3A291786CDC())
	{
		return false;
	}
	if (Global_30770)
	{
		return false;
	}
	if (func_93(6) || func_93(7))
	{
		return false;
	}
	if (func_87() != 2)
	{
		return false;
	}
	if (UNK_0x22A8E52414415B76())
	{
		return false;
	}
	if (!bParam0)
	{
		if (!func_548(4))
		{
			return false;
		}
		if (UNK_0xD4A2BF1975E2C50F())
		{
			return false;
		}
		if (!UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
		if (!func_542(4))
		{
			return false;
		}
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
			{
				return false;
			}
		}
		if (UNK_0x22A8E52414415B76())
		{
			return false;
		}
		if (Global_73825)
		{
			return false;
		}
		if (func_541() || func_540())
		{
			return false;
		}
		if (func_539())
		{
			return false;
		}
	}
	return true;
}

bool func_539()
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

bool func_540()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_541()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_542(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_87();
				if (!func_89(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_541()) || Global_110685) || Global_30770) || func_547()) || func_95(8, -1)) || func_546()) || func_545()) || func_539()) || func_540()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_541()) || Global_30770) || func_547()) || func_95(8, -1)) || func_539()) || func_546()) || func_545()) || func_540()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_541()) || Global_110685) || Global_30770) || func_547()) || func_95(8, -1)) || func_539()) || func_546()) || func_545()) || func_540()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_541()) || Global_110685) || Global_30770) || func_547()) || func_95(8, -1)) || func_546()) || func_545()) || func_540()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_541() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_95(8, -1)) || func_540()) || func_544()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_95(8, -1) || func_546()) || func_545()) || func_544()) || func_543())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_541()) || Global_30770) || func_547()) || func_95(8, -1)) || func_545()) || func_539()) || func_540()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_541()) || func_545()) || Global_110685) || Global_30770) || func_547()) || Global_42596) || func_95(8, -1)) || func_539()) || func_544()) || func_540()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_541()) || Global_110685) || Global_30770) || func_547()) || func_95(8, -1)) || func_539()) || func_544()) || func_546()) || func_545()) || func_540())
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

bool func_543()
{
	return Global_98783.f_1;
}

bool func_544()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_545()
{
	return Global_98796.f_346 > 0;
}

bool func_546()
{
	return Global_98796.f_345 > 0;
}

bool func_547()
{
	return Global_1312877;
}

int func_548(int iParam0)
{
	return func_549(iParam0, Global_41431);
}

int func_549(int iParam0, int iParam1)
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

void func_550(int iParam0)
{
	func_575();
	if (!func_574())
	{
		if (Global_92919 == Global_98781)
		{
			Global_111638.f_24981.f_4[iParam0]++;
		}
		Global_92919 = Global_98781;
		func_551(UNK_0xBB0808A181D4745C());
	}
}

void func_551(char* sParam0)
{
	if (Global_98744 != 12)
	{
		func_552(sParam0, 5, -1);
	}
}

int func_552(char* sParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<32> Var1;
	int iVar33;

	func_571();
	func_570();
	Global_98744 = 0;
	StringCopy(&(Global_98744.f_3), sParam0, 32);
	Global_98744.f_11 = iParam1;
	UNK_0x65C5EBCA17A891FC(1);
	UNK_0xD99B71B9E48EB0E6(0);
	UNK_0x2C84016B4A95F6BA(0);
	func_13(1);
	func_439(1);
	func_567(0);
	func_566(1);
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
	func_565(0);
	func_564(1);
	Global_98744.f_2 = Global_98781;
	if (func_563())
	{
		if (func_562())
		{
			if (Global_98781 >= func_559())
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
			func_554(iParam2, &Var1);
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
			iVar33 = func_553(UNK_0xBB0808A181D4745C());
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

int func_553(bool bParam0)
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

void func_554(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_555(uParam1, "Abigail1", func_557(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_556(iParam0), 1, 0);
			break;
		case 1:
			func_555(uParam1, "Abigail2", func_557(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_556(iParam0), 1, 0);
			break;
		case 2:
			func_555(uParam1, "Barry1", func_557(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_556(iParam0), 1, 0);
			break;
		case 3:
			func_555(uParam1, "Barry2", func_557(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_556(iParam0), 1, 1);
			break;
		case 4:
			func_555(uParam1, "Barry3", func_557(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_556(iParam0), 0, 0);
			break;
		case 5:
			func_555(uParam1, "Barry3A", func_557(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 6:
			func_555(uParam1, "Barry3C", func_557(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 7:
			func_555(uParam1, "Barry4", func_557(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_556(iParam0), 0, 0);
			break;
		case 8:
			func_555(uParam1, "Dreyfuss1", func_557(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_556(iParam0), 0, 0);
			break;
		case 9:
			func_555(uParam1, "Epsilon1", func_557(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_556(iParam0), 0, 0);
			break;
		case 10:
			func_555(uParam1, "Epsilon2", func_557(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_556(iParam0), 1, 0);
			break;
		case 11:
			func_555(uParam1, "Epsilon3", func_557(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_556(iParam0), 0, 0);
			break;
		case 12:
			func_555(uParam1, "Epsilon4", func_557(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_556(iParam0), 0, 0);
			break;
		case 13:
			func_555(uParam1, "Epsilon5", func_557(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_556(iParam0), 1, 0);
			break;
		case 14:
			func_555(uParam1, "Epsilon6", func_557(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 15:
			func_555(uParam1, "Epsilon7", func_557(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_556(iParam0), 0, 0);
			break;
		case 16:
			func_555(uParam1, "Epsilon8", func_557(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_556(iParam0), 1, 0);
			break;
		case 17:
			func_555(uParam1, "Extreme1", func_557(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 18:
			func_555(uParam1, "Extreme2", func_557(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 19:
			func_555(uParam1, "Extreme3", func_557(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 20:
			func_555(uParam1, "Extreme4", func_557(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_556(iParam0), 0, 0);
			break;
		case 21:
			func_555(uParam1, "Fanatic1", func_557(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_556(iParam0), 1, 0);
			break;
		case 22:
			func_555(uParam1, "Fanatic2", func_557(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_556(iParam0), 1, 0);
			break;
		case 23:
			func_555(uParam1, "Fanatic3", func_557(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_556(iParam0), 0, 1);
			break;
		case 24:
			func_555(uParam1, "Hao1", func_557(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_556(iParam0), 0, 1);
			break;
		case 25:
			func_555(uParam1, "Hunting1", func_557(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 26:
			func_555(uParam1, "Hunting2", func_557(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 27:
			func_555(uParam1, "Josh1", func_557(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_556(iParam0), 1, 0);
			break;
		case 28:
			func_555(uParam1, "Josh2", func_557(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_556(iParam0), 1, 1);
			break;
		case 29:
			func_555(uParam1, "Josh3", func_557(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_556(iParam0), 1, 1);
			break;
		case 30:
			func_555(uParam1, "Josh4", func_557(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_556(iParam0), 1, 0);
			break;
		case 31:
			func_555(uParam1, "Maude1", func_557(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 32:
			func_555(uParam1, "Minute1", func_557(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 33:
			func_555(uParam1, "Minute2", func_557(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 34:
			func_555(uParam1, "Minute3", func_557(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 35:
			func_555(uParam1, "MrsPhilips1", func_557(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_556(iParam0), 0, 0);
			break;
		case 36:
			func_555(uParam1, "MrsPhilips2", func_557(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_556(iParam0), 0, 0);
			break;
		case 37:
			func_555(uParam1, "Nigel1", func_557(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_556(iParam0), 1, 0);
			break;
		case 38:
			func_555(uParam1, "Nigel1A", func_557(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_556(iParam0), 1, 1);
			break;
		case 39:
			func_555(uParam1, "Nigel1B", func_557(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_556(iParam0), 1, 1);
			break;
		case 40:
			func_555(uParam1, "Nigel1C", func_557(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_556(iParam0), 1, 1);
			break;
		case 41:
			func_555(uParam1, "Nigel1D", func_557(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_556(iParam0), 1, 1);
			break;
		case 42:
			func_555(uParam1, "Nigel2", func_557(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_556(iParam0), 1, 1);
			break;
		case 43:
			func_555(uParam1, "Nigel3", func_557(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_556(iParam0), 1, 1);
			break;
		case 44:
			func_555(uParam1, "Omega1", func_557(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_556(iParam0), 0, 0);
			break;
		case 45:
			func_555(uParam1, "Omega2", func_557(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_556(iParam0), 0, 0);
			break;
		case 46:
			func_555(uParam1, "Paparazzo1", func_557(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 47:
			func_555(uParam1, "Paparazzo2", func_557(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 48:
			func_555(uParam1, "Paparazzo3", func_557(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_556(iParam0), 0, 0);
			break;
		case 49:
			func_555(uParam1, "Paparazzo3A", func_557(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 50:
			func_555(uParam1, "Paparazzo3B", func_557(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 51:
			func_555(uParam1, "Paparazzo4", func_557(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_556(iParam0), 0, 0);
			break;
		case 52:
			func_555(uParam1, "Rampage1", func_557(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_556(iParam0), 0, 0);
			break;
		case 54:
			func_555(uParam1, "Rampage3", func_557(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_556(iParam0), 1, 0);
			break;
		case 55:
			func_555(uParam1, "Rampage4", func_557(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_556(iParam0), 1, 0);
			break;
		case 56:
			func_555(uParam1, "Rampage5", func_557(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_556(iParam0), 0, 0);
			break;
		case 53:
			func_555(uParam1, "Rampage2", func_557(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_556(iParam0), 1, 0);
			break;
		case 57:
			func_555(uParam1, "TheLastOne", func_557(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 58:
			func_555(uParam1, "Tonya1", func_557(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 59:
			func_555(uParam1, "Tonya2", func_557(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 60:
			func_555(uParam1, "Tonya3", func_557(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 61:
			func_555(uParam1, "Tonya4", func_557(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_556(iParam0), 0, 1);
			break;
		case 62:
			func_555(uParam1, "Tonya5", func_557(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_556(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_555(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
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

int func_556(int iParam0)
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

struct<2> func_557(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_558(iParam0) };
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

struct<2> func_558(int iParam0)
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

int func_559()
{
	int iVar0;
	int iVar1;

	iVar0 = func_560(&(Global_98744.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_560(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = UNK_0x12AB0310C2281427(bParam0);
	iVar1 = func_561(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_561(int iParam0, bool bParam1)
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

bool func_562()
{
	if ((((Global_98744.f_11 == 0 || Global_98744.f_11 == 1) || Global_98744.f_11 == 2) || Global_98744.f_11 == 3) || Global_98744.f_11 == 4)
	{
		return true;
	}
	return false;
}

bool func_563()
{
	if ((((Global_98744.f_11 == 0 || Global_98744.f_11 == 1) || Global_98744.f_11 == 2) || Global_98744.f_11 == 6) || Global_98744.f_11 == 3)
	{
		return true;
	}
	if (Global_98744.f_11 == 5)
	{
		if (func_553(&(Global_98744.f_3)) > -1)
		{
			return true;
		}
	}
	return false;
}

void func_564(int iParam0)
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

void func_565(int iParam0)
{
	UNK_0x8BCB70EB440DED83(iParam0);
	UNK_0xBFE31971E49FA500(iParam0);
}

void func_566(int iParam0)
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

void func_567(int iParam0)
{
	if (iParam0 == 1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 4))
		{
			func_569();
			UNK_0x0674E58A79778E99(&(Global_98744.f_20), 4);
		}
	}
	else
	{
		func_568();
		UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 4);
	}
}

void func_568()
{
	Global_22211.f_5 = 1;
}

void func_569()
{
	Global_22211.f_5 = 0;
}

void func_570()
{
	Global_92920 = 0;
	Global_92921 = 0;
}

void func_571()
{
	Global_98744 = 13;
	Global_98744.f_1 = -1;
	Global_98744.f_2 = 0;
	Global_98744.f_30 = 0f;
	UNK_0x0674E58A79778E99(&(Global_98744.f_20), 25);
	Global_98778 = 0;
	func_564(0);
	func_573();
	func_572();
	Global_98744.f_18 = -1;
	Global_98744.f_19 = -1;
}

void func_572()
{
	UNK_0x0674E58A79778E99(&(Global_98744.f_20), 22);
	UNK_0x0674E58A79778E99(&(Global_98744.f_20), 8);
}

void func_573()
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

bool func_574()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return false;
	}
	return true;
}

void func_575()
{
	Global_98779 = 1;
	if (UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1))
	{
		if (UNK_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_87())
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
			switch (func_87())
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

void func_576()
{
	if (bLocal_450)
	{
		func_433(0, 1);
	}
	UNK_0x10FAF14A60A0DBE1();
}

