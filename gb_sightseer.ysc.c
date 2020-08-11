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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	bool bLocal_64 = false;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	float fLocal_67 = 0f;
	int iLocal_68[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_74 = false;
	bool bLocal_75 = false;
	float fLocal_76 = 0f;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	struct<2> Local_84 = { 0, 0 } ;
	struct<2> Local_86[8];
	struct<2> Local_103 = { 0, 0 } ;
	struct<4> Local_105[8];
	bool bLocal_138 = false;
	float fLocal_139 = 0f;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	int iLocal_143 = 0;
	int iLocal_144[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_153 = false;
	int iLocal_154 = 0;
	bool bLocal_155 = false;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	float fLocal_158 = 0f;
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
	struct<60> Local_176 = { 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	struct<6> Local_236[32];
	bool bLocal_429 = false;
	bool bLocal_430 = false;
	bool bLocal_431 = false;
	int iLocal_432 = 0;
	var uLocal_433 = 0;
	int iLocal_434 = 0;
	bool bLocal_435 = false;
	bool bLocal_436 = false;
	bool bLocal_437 = false;
	vector3 vLocal_438 = { 0f, 0f, 0f };
	var uLocal_441 = 0;
	struct<23> Local_442 = { 0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 1015222895;
	var uLocal_471 = 1021665346;
	var uLocal_472 = 0;
	var uLocal_473 = 255;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = -1;
	var uLocal_483 = 996499522;
	var uLocal_484 = 1002740646;
	var uLocal_485 = 0;
	var uLocal_486 = 60;
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
	var uLocal_547 = 1016296636;
	var uLocal_548 = 220;
	var uLocal_549 = 255;
	var uLocal_550 = 255;
	var uLocal_551 = 255;
	var uLocal_552 = 255;
	var uLocal_553 = 255;
	var uLocal_554 = 255;
	var uLocal_555 = 4096;
	var uLocal_556 = 40;
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
	var uLocal_725 = 4;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 1065353216;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 1056964608;
	var uLocal_735 = 1056964608;
	int iLocal_736 = 0;
	int iLocal_737 = 0;
	int iLocal_738 = 0;
	int iLocal_739 = 0;
	int iLocal_740 = 0;
	int iLocal_741 = 0;
	vector3 vLocal_742[20] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
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
	fLocal_67 = 0f;
	bLocal_74 = 0f;
	bLocal_75 = 0f;
	fLocal_76 = 0f;
	fLocal_139 = 0.62f;
	fLocal_140 = 0.51f;
	fLocal_141 = 0.55f;
	fLocal_142 = 25f;
	fLocal_158 = ((0.05f + 0.275f) - 0.01f);
	iLocal_736 = -1;
	iLocal_737 = -1;
	iLocal_739 = -1;
	iLocal_740 = -1;
	if (UNK_0x8CD06866876216F2() && func_1115(UNK_0xD803B885F5E47A62(), 0, 1))
	{
		func_1066(ScriptParam_0);
	}
	else
	{
		func_1018();
	}
	while (true)
	{
		func_1017();
		if (func_1009())
		{
			func_1018();
		}
		Global_1674356.f_2 = Local_176.f_58;
		Global_1674356.f_3 = Local_176.f_59;
		switch (func_1008(UNK_0x57270EE11514DC67()))
		{
			case 0:
				if (func_1007() == 1)
				{
					func_1006();
					if (func_1005())
					{
						func_990(142, 1, -1, 0);
						UNK_0x34D79252800B23FF(3);
						if (!func_989())
						{
							UNK_0xA28F9D904B25A147(UNK_0xD803B885F5E47A62(), joaat("PICKUP_PORTABLE_PACKAGE"), 0);
						}
					}
					else
					{
						func_990(142, 0, -1, 0);
					}
					Local_236[UNK_0x57270EE11514DC67() /*6*/] = 1;
				}
				else if (func_1007() == 4)
				{
					Local_236[UNK_0x57270EE11514DC67() /*6*/] = 3;
				}
				break;
			case 1:
				if (func_985(1))
				{
					Local_236[UNK_0x57270EE11514DC67() /*6*/] = 2;
				}
				if (func_1007() == 1)
				{
					func_422();
					func_412();
					if (func_1005() || func_411())
					{
						func_258(&(Global_1366905.f_534), &Global_1366905, 28, &(Global_1366905.f_1), &(Global_1366905.f_117), -1, 0, 0);
					}
					func_202();
				}
				else if (func_1007() == 4)
				{
					Local_236[UNK_0x57270EE11514DC67() /*6*/] = 3;
				}
				func_199();
				break;
			case 3:
				func_198(&(Local_176.f_49));
				if (func_197(&(Local_176.f_49)))
				{
					Local_236[UNK_0x57270EE11514DC67() /*6*/] = 4;
				}
				break;
			case 2:
				Local_236[UNK_0x57270EE11514DC67() /*6*/] = 4;
			case 4:
				func_1018();
				break;
		}
		if (UNK_0xBFF81ED3B99522C7())
		{
			switch (func_1007())
			{
				case 0:
					if (func_190())
					{
						UNK_0xCB466C2A425A9168(&(Local_176.f_58), &(Local_176.f_59));
						Local_176 = 1;
						Local_176.f_33 = UNK_0x57270EE11514DC67();
						Local_176.f_34 = UNK_0xD803B885F5E47A62();
						func_990(142, 1, -1, 0);
					}
					break;
				case 1:
					func_188();
					func_4();
					if (func_2())
					{
						Local_176 = 4;
					}
					else if (func_1())
					{
						Local_176 = 4;
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
	if (Global_2537071.f_5124.f_40)
	{
		Global_2537071.f_5124.f_40 = 0;
		return true;
	}
	return false;
}

bool func_2()
{
	if (func_3())
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, 2))
	{
		return true;
	}
	return false;
}

bool func_3()
{
	return false;
}

void func_4()
{
	switch (Local_176.f_32)
	{
		case 0:
			func_12();
			func_10();
			func_5();
			if (UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, true))
			{
				Local_176.f_32 = 2;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, 3))
			{
				Local_176.f_32 = 2;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, 4))
			{
				Local_176.f_32 = 2;
			}
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_5()
{
	if (Local_176.f_5 == 0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, 6))
		{
			if (!func_9(&(Local_176.f_53)))
			{
				func_8(&(Local_176.f_53), 0, 0);
			}
			else if (func_6(&(Local_176.f_53), func_7(), 0))
			{
				UNK_0x5D96D8530B3D0904(&(Local_176.f_1), 6);
			}
		}
	}
}

bool func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_8(uParam0, bParam2, 0);
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

int func_7()
{
	return 600000;
}

void func_8(var uParam0, bool bParam1, bool bParam2)
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

bool func_9(var uParam0)
{
	return uParam0->f_1;
}

void func_10()
{
	if (!func_9(&(Local_176.f_51)))
	{
		func_8(&(Local_176.f_51), 0, 0);
	}
	else if (func_6(&(Local_176.f_51), func_11(), 0))
	{
		UNK_0x5D96D8530B3D0904(&(Local_176.f_1), 3);
	}
}

int func_11()
{
	return Global_262145.f_12502;
}

void func_12()
{
	bool bVar0;

	if (Local_176.f_33 < 0)
	{
		return;
	}
	if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(Local_176.f_33)))
	{
		if (Local_236[Local_176.f_33 /*6*/].f_4 > 0)
		{
			bVar0 = (Local_236[Local_176.f_33 /*6*/].f_4 - 1);
			if (!UNK_0xEAE0D21A50E6C7F4(Local_176.f_4, bVar0))
			{
				Local_176.f_36 = bVar0;
				if (func_13())
				{
					UNK_0x5D96D8530B3D0904(&(Local_176.f_4), bVar0);
				}
			}
		}
	}
}

bool func_13()
{
	bool bVar0;
	struct<35> Var1;
	vector3 vVar36;

	bVar0 = joaat("PROP_LD_CASE_01");
	Var1.f_5 = 1115815936;
	Var1.f_13 = 2;
	Var1.f_20 = 2;
	Var1.f_32 = -1082130432;
	Var1.f_34 = 1;
	Var1.f_3 = 0;
	Var1.f_5 = 10f;
	if (!UNK_0xE5DBF9B6126856CA(Local_176.f_3))
	{
		UNK_0x523BCC9DC80CD82F(bVar0);
		if (UNK_0xB87F6CF6E5628C67(bVar0))
		{
			if (UNK_0x081C8BC5094A7B76(1))
			{
				vVar36 = { func_187() };
				if (func_14(vVar36, 5f, &vLocal_438, &uLocal_441, &Var1))
				{
					Local_176.f_3 = UNK_0x4193A2DE62BC07C0(UNK_0xEC03378782221D46(joaat("PICKUP_PORTABLE_PACKAGE"), vLocal_438, true, bVar0));
					UNK_0x08841CDB215AE18F(UNK_0x09AD4CE7DA179533(Local_176.f_3), vLocal_438 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					UNK_0x71199B01895C6202(bVar0);
					UNK_0xE121AE1BBF90E186(UNK_0x09AD4CE7DA179533(Local_176.f_3), true);
					UNK_0xEDD4DD1B0A096072(UNK_0x09AD4CE7DA179533(Local_176.f_3), 1);
					UNK_0x272295383B6513AB(UNK_0x09AD4CE7DA179533(Local_176.f_3), 1);
					UNK_0x120A395B0ECB8EA5(UNK_0x09AD4CE7DA179533(Local_176.f_3), false);
					UNK_0xAC0C6241732E36F6(UNK_0x09AD4CE7DA179533(Local_176.f_3));
					func_8(&(Local_176.f_55), 0, 0);
				}
			}
		}
	}
	if (UNK_0xE5DBF9B6126856CA(Local_176.f_3))
	{
		return true;
	}
	return false;
}

bool func_14(vector3 vParam0, float fParam3, var uParam4, var uParam5, int iParam6)
{
	struct<17> Var0;
	struct<18> Var34;
	vector3 vVar62;

	if (iParam6->f_5 > (fParam3 - 20f))
	{
		iParam6->f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34 = { vParam0 };
	Var34.f_3 = iParam6->f_11;
	Var34.f_4 = fParam3;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 0;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	if (func_15(&Var34, iParam6, &Var0))
	{
		if ((iParam6->f_12 > 0f && iParam6->f_7) && iParam6->f_8)
		{
			vVar62 = { vParam0 - Var0[0 /*3*/] };
			if (vVar62.z > iParam6->f_12)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_16[0] = iParam6->f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_16[0];
		return true;
	}
	return false;
}

bool func_15(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	int iVar17;
	vector3 vVar18;
	vector3 vVar21;
	var uVar24;
	bool bVar25;
	struct<56> Var26;
	bool bVar85;

	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405072.f_2458 == *uParam0 || !Global_2405072.f_2458.f_1 == uParam0->f_1) || !Global_2405072.f_2458.f_2 == uParam0->f_2) || !Global_2405072.f_2461 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		case 1:
			if (((((!Global_2405072.f_2472 == uParam0->f_8 || !Global_2405072.f_2472.f_1 == uParam0->f_8.f_1) || !Global_2405072.f_2472.f_2 == uParam0->f_8.f_2) || !Global_2405072.f_2475 == uParam0->f_11) || !Global_2405072.f_2475.f_1 == uParam0->f_11.f_1) || !Global_2405072.f_2475.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		case 2:
			if ((((((!Global_2405072.f_2472 == uParam0->f_8 || !Global_2405072.f_2472.f_1 == uParam0->f_8.f_1) || !Global_2405072.f_2472.f_2 == uParam0->f_8.f_2) || !Global_2405072.f_2475 == uParam0->f_11) || !Global_2405072.f_2475.f_1 == uParam0->f_11.f_1) || !Global_2405072.f_2475.f_2 == uParam0->f_11.f_2) || !Global_2405072.f_2478 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2405072.f_2456 == 1)
		{
			if (UNK_0x1727A44C562FBED2(Global_2405072.f_2465))
			{
				if (Global_2405072.f_2465 == UNK_0x0D0A574C76D769AC())
				{
					if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2462) < func_186(0))
					{
						return false;
					}
				}
				else if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2462) < func_186(0))
				{
					return false;
				}
			}
			UNK_0xDEED9606C7D093F7();
			UNK_0x0FB2CEE58DA4A6EE();
			func_185();
		}
		Global_2405072.f_2456 = 0;
	}
	else if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2462) > func_186(0))
	{
		Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
		func_179();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	UNK_0x10FEEAFF01E32639(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		vVar8 = { *uParam0 };
	}
	else
	{
		vVar8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar11 = { vVar8 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar14 = { vVar8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2405072.f_2456)
	{
		UNK_0xDEED9606C7D093F7();
		UNK_0x0FB2CEE58DA4A6EE();
		func_185();
		if (iParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_178(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, iParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return true;
				}
			}
		}
		if (!UNK_0xC79C8A78EC708587())
		{
			Global_2405072.f_2479 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405072.f_2458 = { *uParam0 };
					Global_2405072.f_2461 = uParam0->f_4;
					break;
				case 1:
					Global_2405072.f_2472 = { uParam0->f_8 };
					Global_2405072.f_2475 = { uParam0->f_11 };
					Global_2405072.f_2478 = 0f;
					Global_2405072.f_2458 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				case 2:
					Global_2405072.f_2472 = { uParam0->f_8 };
					Global_2405072.f_2475 = { uParam0->f_11 };
					Global_2405072.f_2478 = uParam0->f_14;
					Global_2405072.f_2458 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!iParam1->f_8 && !iParam1->f_9)
			{
				func_177(vVar8.x, vVar8.y);
			}
			Global_2405072.f_2457 = 1;
			Global_2405072.f_2456 = 1;
			Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
			Global_2405072.f_2462 = UNK_0x2B6E0A53779D29EA();
			Global_2405072.f_2465 = UNK_0x0D0A574C76D769AC();
		}
		else
		{
			return false;
		}
	}
	if (Global_2405072.f_2456)
	{
		if (Global_2405072.f_2457 == 1)
		{
			if (UNK_0xD1B4D22E0BA9B0C8(fVar4, fVar5, fVar6, fVar7) || UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 5000)
			{
				Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
				if (iParam1->f_8 || iParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("TAILGATER");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26.f_57 = 1;
					Var26 = { *iParam1 };
					Var26.f_3 = iParam1->f_5;
					Var26.f_11 = iParam1->f_9;
					Var26.f_18 = 1;
					if (iParam1->f_32 > 0f)
					{
						Var26.f_6 = iParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = { iParam1->f_13[iVar17 /*3*/] };
						Var26.f_45[iVar17] = iParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = iParam1->f_30;
					Var26.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					if (func_176(Global_4456448.f_232883))
					{
						Var26.f_9 = 1;
					}
					func_151(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((iParam1->f_7 && iParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_150(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405072.f_2457 = 9;
				}
				else
				{
					Global_2405072.f_2457 = 2;
				}
			}
		}
		if (Global_2405072.f_2457 == 2)
		{
			if ((UNK_0xF8A3B10A1B8ACCDD(vVar11, vVar14) || UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 15000) || UNK_0x7D293360C866EB8E(vVar11, vVar14) == 0)
			{
				Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
				if (uParam0->f_5 && !func_147(UNK_0xD803B885F5E47A62(), 0))
				{
					Global_2405072.f_2457 = 3;
				}
				else
				{
					Global_2405072.f_2457 = 4;
				}
			}
			else if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2467) > 7000)
			{
				func_146(vVar8.x, vVar8.y);
			}
		}
		if (Global_2405072.f_2457 == 3)
		{
			if (func_145() || UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 10000)
			{
				Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
				Global_2405072.f_2457 = 4;
			}
		}
		if (Global_2405072.f_2457 == 4)
		{
			if (UNK_0xC79C8A78EC708587())
			{
				UNK_0xDEED9606C7D093F7();
				UNK_0x0FB2CEE58DA4A6EE();
			}
			else
			{
				iVar0 = 0;
				func_179();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*iParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (iParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (UNK_0xAFED075B5A62767B(UNK_0xD803B885F5E47A62(), *uParam0, uParam0->f_4, *iParam1, iVar0))
							{
								Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
								Global_2405072.f_2457 = 5;
							}
							break;
						case 1:
							func_144(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
							if (UNK_0xD4B5AAF3676F3DE0(UNK_0xD803B885F5E47A62(), vVar18, vVar21, uVar24, *iParam1, iVar0))
							{
								Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
								Global_2405072.f_2457 = 5;
							}
							break;
						case 2:
							if (UNK_0xD4B5AAF3676F3DE0(UNK_0xD803B885F5E47A62(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *iParam1, iVar0))
							{
								Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
								Global_2405072.f_2457 = 5;
							}
							break;
					}
				}
				else
				{
					if (iParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (iParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
					Global_2405072.f_2457 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							UNK_0x5A3997FBBD7FD7C0(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						case 1:
							func_144(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
							UNK_0x1814612955640FD9(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
							break;
						case 2:
							UNK_0x1814612955640FD9(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
					}
				}
			}
		}
		if (Global_2405072.f_2457 == 5)
		{
			if (func_69(uParam2, uParam0, iParam1, 0))
			{
				if (Global_2405072.f_2483.f_5)
				{
					Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
					Global_2405072.f_2457 = 6;
				}
				else
				{
					Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*iParam1) == 0f)
						{
							vVar1 = { *iParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = UNK_0xE7D606C557C86100(vVar1.x, vVar1.y);
						}
					}
					Global_2405072.f_2457 = 9;
				}
			}
			else if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 20000)
			{
				UNK_0xDEED9606C7D093F7();
				UNK_0x0FB2CEE58DA4A6EE();
				Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
				Global_2405072.f_2457 = 8;
			}
		}
		if (Global_2405072.f_2457 == 6)
		{
			iVar0 = 0;
			Global_2405072.f_2483.f_1 = 0;
			if (iParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_68(uParam0->f_4))
				{
					if (UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vVar8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_67(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vVar8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (iParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
			Global_2405072.f_2457 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					UNK_0x5A3997FBBD7FD7C0(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				case 1:
					func_144(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
					UNK_0x1814612955640FD9(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
					break;
				case 2:
					UNK_0x1814612955640FD9(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
			}
		}
		if (Global_2405072.f_2457 == 7)
		{
			if (func_69(uParam2, uParam0, iParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2405072.f_2617[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_150(Global_2405072.f_2617[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405072.f_2617[iVar17 /*3*/] };
										}
										break;
									case 1:
										if (func_65(Global_2405072.f_2617[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405072.f_2617[iVar17 /*3*/] };
										}
										break;
									case 2:
										if (UNK_0x0399732A9EBC368E(Global_2405072.f_2617[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2405072.f_2617[iVar17 /*3*/] };
										}
										break;
								}
							}
						}
						iVar17++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_18(&vVar1, 0, 1, 1, 0, uParam0, iParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
				if (!SYSTEM::VMAG(*iParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						vVar1 = { *iParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = UNK_0xE7D606C557C86100(vVar1.x, vVar1.y);
						iVar17++;
					}
				}
				Global_2405072.f_2457 = 9;
			}
			else if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 20000)
			{
				Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
				Global_2405072.f_2457 = 8;
			}
		}
		if (Global_2405072.f_2457 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_17(Global_2405072.f_486))
				{
				}
			}
			else if (Global_2405072.f_2483.f_2)
			{
				func_16(uParam2, &(Global_2405072.f_2483.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar85 = false;
				}
				else
				{
					bVar85 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405072.f_2458 };
				func_18(uParam2[0 /*3*/], 0, bVar85, 0, 0, uParam0, iParam1);
			}
			Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
			Global_2405072.f_2457 = 9;
		}
		if (Global_2405072.f_2457 == 9)
		{
			Global_2405072.f_2456 = 0;
			UNK_0xDEED9606C7D093F7();
			UNK_0x0FB2CEE58DA4A6EE();
			func_185();
			return true;
		}
		Global_2405072.f_2462 = UNK_0x2B6E0A53779D29EA();
	}
	return false;
}

void func_16(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

bool func_17(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return true;
	}
	return false;
}

void func_18(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, int iParam6)
{
	vector3 vVar0;
	var uVar3;
	struct<56> Var4;
	var uVar63;
	int iVar64;
	bool bVar65;
	int iVar66;
	vector3 vVar67;
	vector3 vVar70;
	vector3 vVar73;
	float fVar76;

	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("TAILGATER");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	Var4.f_57 = 1;
	if (bParam1)
	{
		iVar66 = 0;
	}
	else
	{
		iVar66 = 16;
	}
	if (!iParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar66 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar67 = { *uParam5 };
						if (func_68(uParam5->f_4) || !UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					case 1:
						vVar67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_67(uParam5->f_8, uParam5->f_11, 0f) || !UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					case 2:
						vVar67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_67(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vVar67)))
						{
							iVar66 += 4;
						}
						break;
				}
			}
		}
		else
		{
			iVar66 += 4;
		}
	}
	if (func_33(*uParam0, &vVar0, iVar66, iParam3, 1))
	{
	}
	else
	{
		bVar65 = true;
	}
	if (bVar65)
	{
		vVar0 = { *uParam0 };
		Var4 = { *iParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = iParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (iParam6->f_32 > 0f)
		{
			Var4.f_6 = iParam6->f_32;
		}
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
			}
		}
		iVar64 = 0;
		while (iVar64 < 2)
		{
			Var4.f_38[iVar64 /*3*/] = { iParam6->f_13[iVar64 /*3*/] };
			Var4.f_45[iVar64] = iParam6->f_20[iVar64];
			iVar64++;
		}
		Var4.f_51 = iParam6->f_30;
		Var4.f_55 = uParam5->f_16;
		if (func_30(UNK_0xD803B885F5E47A62(), 0))
		{
			Var4.f_9 = 1;
		}
		func_151(&vVar0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar70 = { *uParam5 };
				fVar76 = uParam5->f_4;
				break;
			case 1:
				vVar70 = { uParam5->f_8 };
				vVar73 = { uParam5->f_11 };
				break;
			case 2:
				vVar70 = { uParam5->f_8 };
				vVar73 = { uParam5->f_11 };
				fVar76 = uParam5->f_14;
				break;
		}
		if (!func_29(vVar0, uParam5->f_7, vVar70, vVar73, fVar76))
		{
			if (func_33(*uParam0, &vVar0, iVar66, iParam3, 0))
			{
				if (!func_29(vVar0, uParam5->f_7, vVar70, vVar73, fVar76))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar70 + vVar73 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar70 };
					}
					if (UNK_0xE82754C349C7B581(vVar0, &uVar63, 0, 0))
					{
						vVar0.f_2 = uVar63;
					}
				}
			}
			else if (func_19(uParam0, 1, 1, 1, 1))
			{
				func_18(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, iParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar70 + vVar73 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar70 };
				}
				if (UNK_0xE82754C349C7B581(vVar0, &uVar63, 0, 0))
				{
					vVar0.f_2 = uVar63;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_2405072.f_661 = 1;
}

bool func_19(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409984[iVar0 /*17*/].f_16))
			{
				if (func_28(*iParam0, &(Global_2409984[iVar0 /*17*/]), 1008981770 /* Float: 0.01f */, iParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409984[iVar0 /*17*/].f_12)
						{
							*iParam0 = { Global_2409984[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *iParam0 };
							func_20(&vVar1, &(Global_2409984[iVar0 /*17*/]), 1036831949 /* Float: 0.1f */, 0, bParam3);
							if (func_19(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *iParam0 };
								func_20(&vVar1, &(Global_2409984[iVar0 /*17*/]), 1036831949 /* Float: 0.1f */, 1, 0);
							}
							*iParam0 = { vVar1 };
						}
					}
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_20(int iParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*iParam0 = { func_27(*iParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			case 1:
				*iParam0 = { func_27(*iParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			case 2:
				*iParam0 = { func_27(*iParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_25(iParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			case 1:
				func_24(iParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			case 2:
				func_21(iParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
		}
	}
}

void func_21(int iParam0, vector3 vParam1, vector3 vParam4, bool bParam7, float fParam8, bool bParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	vector3 vVar29;

	vVar0 = { vParam4 - vParam1 };
	vVar0.f_2 = 0f;
	vVar3 = { *iParam0 - vParam1 };
	vVar3.f_2 = 0f;
	vVar6 = { func_23(0f, 0f, 1f, vVar0) };
	vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
	fVar9 = (SYSTEM::VMAG(vVar3) * SYSTEM::SIN(UNK_0x07AB02F3C4AE2B04(vVar0.x, vVar0.y, vVar3.x, vVar3.y)));
	if (fVar9 < (bParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_22(vVar6, vVar3) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((bParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((bParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_22(vVar6, vVar3) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((bParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((bParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		vVar10 = { *iParam0 + vVar6 };
		fVar16 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam4.x, vParam4.y, 0f);
		vVar17 = { vParam1 + vParam4 / Vector(2f, 2f, 2f) };
		vVar17.f_2 = 0f;
		vVar6 = { func_23(0f, 0f, 1f, vVar0) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		vVar6 = { vVar6 * FtoV((bParam7 * 0.5f)) };
		vVar20 = { vVar17 - vVar6 };
		vVar23 = { vVar17 + vVar6 };
		vVar26 = { vVar23 - vVar20 };
		vVar26.f_2 = 0f;
		vVar29 = { *iParam0 - vVar20 };
		vVar29.f_2 = 0f;
		vVar6 = { func_23(0f, 0f, 1f, vVar26) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		fVar9 = (SYSTEM::VMAG(vVar29) * SYSTEM::SIN(UNK_0x07AB02F3C4AE2B04(vVar26.x, vVar26.y, vVar29.x, vVar29.y)));
		if (!bParam9)
		{
			if (func_22(vVar6, vVar29) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_22(vVar6, vVar29) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		vVar13 = { *iParam0 + vVar6 };
		if (SYSTEM::VDIST(vVar10, *iParam0, iParam0->f_1, 0f) < SYSTEM::VDIST(vVar13, *iParam0, iParam0->f_1, 0f))
		{
			*iParam0 = { vVar10 };
		}
		else
		{
			*iParam0 = { vVar13 };
		}
	}
}

float func_22(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_23(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

void func_24(int iParam0, struct<2> Param1, float fParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;

	vVar0 = { *iParam0 };
	fVar3 = (*iParam0 - Param1);
	fVar4 = (*iParam0 - Param4);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (iParam0->f_1 - Param1.f_1);
	fVar7 = (iParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	vVar0 = { *iParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				vVar0.x = (Param1 - fParam7);
			}
			else
			{
				vVar0.x = (Param4 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			vVar0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			vVar0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			vVar0.x = (Param4 + fParam7);
		}
		else
		{
			vVar0.x = (Param1 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		vVar0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		vVar0.f_1 = (Param1.f_1 - fParam7);
	}
	*iParam0 = { vVar0 };
}

void func_25(int iParam0, vector3 vParam1, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { *iParam0 - vParam1 };
	vVar0.f_2 = 0f;
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (bParam7 == 0f)
		{
			func_26(&vVar0, 0f, 0f, UNK_0x79833B02DBD2A244(0f, 360f));
		}
		else
		{
			func_26(&vVar0, 0f, 0f, bParam7);
		}
	}
	vVar0 = { vVar0 * FtoV((bParam4 + fParam5)) };
	if (!bParam6)
	{
		vVar3 = { vParam1 + vVar0 };
	}
	else
	{
		vVar3 = { vParam1 - vVar0 };
	}
	*iParam0 = vVar3.x;
	iParam0->f_1 = vVar3.y;
}

void func_26(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	fVar0 = SYSTEM::COS(vParam1.x);
	fVar1 = SYSTEM::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.y);
	fVar1 = SYSTEM::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.f_1 = uParam0->f_1;
	vVar2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.z);
	fVar1 = SYSTEM::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.f_2 = uParam0->f_2;
	*uParam0 = { vVar2 };
}

Vector3 func_27(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	vector3 vVar1;

	switch (iParam10)
	{
		case 0:
			func_25(&vParam0, vParam3, bParam9, fParam11, bParam12, 0);
			break;
		case 1:
			func_24(&vParam0, vParam3, vParam6, fParam11, bParam12);
			break;
		case 2:
			func_21(&vParam0, vParam3, vParam6, bParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		UNK_0x4490D017C57827E9(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_150(vVar1, vParam3, bParam9, 0, 0))
				{
					return vVar1;
				}
				break;
			case 1:
				if (!func_65(vVar1, vParam3, vParam6, 0, 0))
				{
					return vVar1;
				}
				break;
			case 2:
				if (!UNK_0x0399732A9EBC368E(vVar1, vParam3, vParam6, bParam9, 0, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

bool func_28(vector3 vParam0, int iParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (iParam3->f_10)
	{
		case 0:
			return func_150(vParam0, *iParam3, ((iParam3->f_6 + fParam4) + (IntToFloat(Global_2405072.f_2726) * iParam3->f_8)), bParam5, bParam6);
		case 1:
			return func_65(vParam0, *iParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), iParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
		case 2:
			if (bParam5 && bParam6)
			{
				return UNK_0x0399732A9EBC368E(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, 0, false);
			}
			else if (bParam5)
			{
				if (UNK_0x0399732A9EBC368E(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, 0, false) && !(vParam0.z < iParam3->f_2 && vParam0.z < iParam3->f_3.f_2))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else if (bParam6)
			{
				if (UNK_0x0399732A9EBC368E(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, 0, false) && !(vParam0.z > iParam3->f_2 && vParam0.z > iParam3->f_3.f_2))
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
				return UNK_0x0399732A9EBC368E(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, 0, true);
			}
			break;
	}
	return false;
}

bool func_29(vector3 vParam0, int iParam3, vector3 vParam4, vector3 vParam7, bool bParam10)
{
	switch (iParam3)
	{
		case 0:
			if (SYSTEM::VDIST(vParam0, vParam4) <= bParam10)
			{
				return true;
			}
			break;
		case 1:
			return func_65(vParam0, vParam4, vParam7, 0, 0);
		case 2:
			return UNK_0x0399732A9EBC368E(vParam0, vParam4, vParam7, bParam10, 0, true);
	}
	return false;
}

bool func_30(bool bParam0, bool bParam1)
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
	if (bParam0 != func_32())
	{
		if (func_1115(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_32())
			{
				return func_31(Global_2425662[bParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return false;
}

int func_31(int iParam0)
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

bool func_32()
{
	return -1;
}

bool func_33(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_64(vParam0, iParam3))
	{
		if (func_34(vParam0, iParam3, iParam5, iParam6))
		{
			return true;
		}
	}
	if (UNK_0xB885EF0389689E54(vParam0, 0, iParam3, iParam4))
	{
		if (func_34(vParam0, iParam3, iParam5, iParam6))
		{
			return true;
		}
	}
	return false;
}

bool func_34(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	float fVar0;
	var uVar1;
	var uVar8;

	fVar0 = SYSTEM::VDIST(vParam0, *iParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_50(Global_2405072.f_509, iParam3, &uVar1, &uVar8, iParam5, 1)) || iParam4 == 0)
		{
			if (!func_38(*iParam3, 1056964608 /* Float: 0.5f */))
			{
				if (!func_35(iParam3, 0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_35(int iParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	vVar1 = { *iParam0 };
	iVar4 = func_37(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411459[iVar4])
	{
		if (func_36(vVar1, &(Global_2410189[iVar4 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_21(&vVar1, Global_2410189[iVar4 /*141*/][iVar0 /*7*/], Global_2410189[iVar4 /*141*/][iVar0 /*7*/].f_3, Global_2410189[iVar4 /*141*/][iVar0 /*7*/].f_6, 1036831949 /* Float: 0.1f */, 0);
				*iParam0 = { vVar1 };
			}
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411459[8])
	{
		if (func_36(vVar1, &(Global_2410189[8 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_21(&vVar1, Global_2410189[8 /*141*/][iVar0 /*7*/], Global_2410189[8 /*141*/][iVar0 /*7*/].f_3, Global_2410189[8 /*141*/][iVar0 /*7*/].f_6, 1036831949 /* Float: 0.1f */, 0);
				*iParam0 = { vVar1 };
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_36(vector3 vParam0, var uParam3)
{
	return UNK_0x0399732A9EBC368E(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, true);
}

int func_37(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2411469[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411469[1])
	{
		if (Param0 < Global_2411473[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411469[2])
	{
		if (Param0 < Global_2411473[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411473[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411473[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

bool func_38(vector3 vParam0, int iParam3)
{
	int iVar0;

	if (func_47(UNK_0xD803B885F5E47A62(), 1, 0))
	{
		if (Global_4456448.f_91960 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_91960)
			{
				if (Global_4456448.f_91961[iVar0 /*107*/].f_7 != 0)
				{
					if (func_39(vParam0, Global_4456448.f_91961[iVar0 /*107*/], Global_4456448.f_91961[iVar0 /*107*/].f_6, Global_4456448.f_91961[iVar0 /*107*/].f_7, iParam3))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_78239 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_78239)
			{
				if (Global_4456448.f_78242[iVar0 /*266*/].f_15 != 0)
				{
					if (func_39(vParam0, Global_4456448.f_78242[iVar0 /*266*/], Global_4456448.f_78242[iVar0 /*266*/].f_3, Global_4456448.f_78242[iVar0 /*266*/].f_15, 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_124061 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_124061)
			{
				if (Global_4456448.f_124065[iVar0 /*325*/].f_12 != 0)
				{
					if (func_39(vParam0, Global_4456448.f_124065[iVar0 /*325*/], Global_4456448.f_124065[iVar0 /*325*/].f_3, Global_4456448.f_124065[iVar0 /*325*/].f_12, 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_268)
			{
				if (UNK_0xC844350D5D58C99A(Global_969031.f_233[iVar0]) && !UNK_0x437347B10A200C4B(Global_969031.f_233[iVar0], 0))
				{
					if (func_39(vParam0, UNK_0x68F4C0EC296D3901(Global_969031.f_233[iVar0], true), UNK_0xD9522BA9E27E1349(Global_969031.f_233[iVar0]), UNK_0x134B62B726CEC8E6(Global_969031.f_233[iVar0]), 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_266)
			{
				if (UNK_0xC844350D5D58C99A(Global_969031.f_119[iVar0]) && !UNK_0x437347B10A200C4B(Global_969031.f_119[iVar0], 0))
				{
					if (func_39(vParam0, UNK_0x68F4C0EC296D3901(Global_969031.f_119[iVar0], true), UNK_0xD9522BA9E27E1349(Global_969031.f_119[iVar0]), UNK_0x134B62B726CEC8E6(Global_969031.f_119[iVar0]), 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

bool func_39(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, int iParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;

	if (SYSTEM::VDIST(vParam0, vParam3) < func_46(bParam7, 1008981770 /* Float: 0.01f */))
	{
		func_40(vParam3, bParam6, bParam7, &vVar0, &vVar3, &bVar6, iParam8);
		if (UNK_0x0399732A9EBC368E(vParam0, vVar0, vVar3, bVar6, 0, true))
		{
			return true;
		}
	}
	return false;
}

void func_40(vector3 vParam0, bool bParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;

	vVar0 = { 0f, 1f, 0f };
	func_26(&vVar0, 0f, 0f, bParam3);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_41(bParam4, &vVar3, &vVar6, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	vVar9 = { vParam0 + vVar0 * FtoV((vVar6.y + fParam8)) };
	vVar9.f_2 = (vVar9.z - ((0.5f * UNK_0x755FF954DAE327E1((vVar6.z - vVar3.z))) + fParam8));
	vVar12 = { vParam0 - vVar0 * FtoV(((vVar3.y * -1f) + fParam8)) };
	vVar12.f_2 = (vVar12.z + ((0.5f * UNK_0x755FF954DAE327E1((vVar6.z - vVar3.z))) + fParam8));
	*uParam5 = { vVar9 };
	*iParam6 = { vVar12 };
	*bParam7 = UNK_0x755FF954DAE327E1((vVar6.x - vVar3.x));
}

void func_41(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;

	if (UNK_0x468C1AC3ABF95C57(bParam0))
	{
		UNK_0xA6B02C1DB14DDA13(bParam0, fParam1, fParam2);
	}
	else
	{
		iVar0 = func_44(bParam0);
		if (iVar0 != 0)
		{
			func_42(iVar0, fParam1, fParam2, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
			return;
		}
	}
	if (SYSTEM::VMAG(*fParam1) <= 0.01f || SYSTEM::VMAG(*fParam2) <= 0.01f)
	{
		*fParam1 = (0f - (fParam4 * 0.5f));
		*fParam2 = (0f + (fParam4 * 0.5f));
		fParam1->f_1 = (0f - (fParam3 * 0.5f));
		fParam2->f_1 = (0f + (fParam3 * 0.5f));
		fParam1->f_2 = (0f - (fParam5 * 0.5f));
		fParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_42(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;

	func_43(iParam0, &Global_1315812);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (UNK_0x468C1AC3ABF95C57(Global_1315812[iVar0]))
		{
			UNK_0xA6B02C1DB14DDA13(Global_1315812[iVar0], &(Global_1315816[iVar0 /*3*/]), &(Global_1315823[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1315816[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1315823[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315816[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315823[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315816[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315823[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315816[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315823[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315830[iVar0] = (Global_1315823[iVar0 /*3*/] - Global_1315816[iVar0 /*3*/]);
		Global_1315833[iVar0] = (Global_1315823[iVar0 /*3*/].f_1 - Global_1315816[iVar0 /*3*/].f_1);
		Global_1315836[iVar0] = (Global_1315823[iVar0 /*3*/].f_2 - Global_1315816[iVar0 /*3*/].f_2);
		if (Global_1315830[iVar0] > Global_1315839)
		{
			Global_1315839 = Global_1315830[iVar0];
		}
		if (Global_1315836[iVar0] > Global_1315840)
		{
			Global_1315840 = Global_1315836[iVar0];
		}
		iVar0++;
	}
	Global_1315841 = (Global_1315839 * -0.5f);
	Global_1315844 = (Global_1315839 * 0.5f);
	Global_1315841.f_1 = ((((0.5f * Global_1315833[0]) + Global_1315833[1]) + Global_1315812.f_3) * -1f);
	Global_1315844.f_1 = (0.5f * Global_1315833[0]);
	Global_1315841.f_2 = (Global_1315836[0] * -0.5f);
	Global_1315844.f_2 = (Global_1315836[0] * 0.5f);
	*fParam1 = { Global_1315841 };
	*fParam2 = { Global_1315844 };
}

void func_43(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("HAULER2");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		case 2:
			(*uParam1)[0] = joaat("PHANTOM3");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		case 3:
			(*uParam1)[0] = joaat("NIGHTSHARK");
			(*uParam1)[1] = joaat("TRAILERSMALL2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_44(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_45(iVar1) == bParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_45(int iParam0)
{
	int iVar0;

	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_46(bool bParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (bParam0 == 0)
	{
		return 5f;
	}
	func_41(bParam0, &vVar0, &vVar3, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	vVar6 = { vVar3 - vVar0 };
	fVar9 = (SYSTEM::SQRT(((((vVar6.x * 0.5f) * (vVar6.x * 0.5f)) + ((vVar6.y * 0.5f) * (vVar6.y * 0.5f))) + ((vVar6.z * 0.5f) * (vVar6.z * 0.5f)))) + fParam1);
	return fVar9;
}

bool func_47(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_48(bParam0))
		{
			return true;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[bParam0 /*876*/] == -1)
	{
		return false;
	}
	return true;
}

bool func_48(bool bParam0)
{
	return func_49(bParam0);
}

bool func_49(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_13.f_1, false);
}

bool func_50(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;

	if (func_57(vParam0))
	{
		if (func_19(iParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return true;
		}
	}
	if (func_52(iParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return true;
	}
	if (bParam7)
	{
		if (func_51(*iParam3, 1056964608 /* Float: 0.5f */))
		{
			return true;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *bParam4)
	{
		if (SYSTEM::VDIST(*iParam3, *(bParam4[iVar0 /*3*/])) < (*iParam5)[iVar0])
		{
			if (bParam6)
			{
				func_25(iParam3, *(bParam4[iVar0 /*3*/]), (*iParam5)[iVar0], 1036831949 /* Float: 0.1f */, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return true;
	}
	return false;
}

bool func_51(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(vParam0, Global_2405072.f_2728[iVar0 /*3*/]) < fParam3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_52(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;

	if (func_54(*iParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *iParam0 };
			func_20(&vVar2, &(Global_2405072.f_365[iVar0 /*12*/]), 1036831949 /* Float: 0.1f */, 0, bParam2);
			if (func_54(vVar2, &uVar1) || func_53(vVar2))
			{
				vVar2 = { *iParam0 };
				func_20(&vVar2, &(Global_2405072.f_365[iVar0 /*12*/]), 1036831949 /* Float: 0.1f */, 1, bParam2);
			}
			*iParam0 = { vVar2 };
		}
		return true;
	}
	return false;
}

bool func_53(vector3 vParam0)
{
	float fVar0;

	if (Global_2405072.f_590 > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_2405072.f_587);
		if (fVar0 < Global_2405072.f_590)
		{
			return true;
		}
	}
	return false;
}

bool func_54(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_56())
	{
		return false;
	}
	iVar1 = func_55();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405072.f_365[iVar0 /*12*/].f_9 == 1)
		{
			if (func_28(vParam0, &(Global_2405072.f_365[iVar0 /*12*/]), 1008981770 /* Float: 0.01f */, 0, 0))
			{
				*iParam3 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_55()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405072.f_365[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_56()
{
	return Global_1676377.f_474;
}

bool func_57(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;

	if (!Global_2405072.f_512 && !Global_2405072.f_513)
	{
		if (!Global_2405072.f_45.f_314)
		{
			if (!func_61(UNK_0xD803B885F5E47A62(), 1))
			{
				return true;
			}
			if (!func_60(vParam0, 1008981770 /* Float: 0.01f */))
			{
				if (!func_19(&vParam0, 0, 0, 0, 1))
				{
					return true;
				}
				else if (func_19(&vParam0, 0, 1, 0, 1))
				{
					return true;
				}
			}
			else
			{
				iVar0 = func_59(vParam0, 1008981770 /* Float: 0.01f */);
				if (iVar0 > -1)
				{
					vVar1 = { func_58(&(Global_2405072.f_45[iVar0 /*12*/])) };
					if (!func_19(&vVar1, 0, 0, 0, 1))
					{
						if (!func_19(&vParam0, 0, 0, 0, 1))
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

Vector3 func_58(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
	}
	return *uParam0;
}

int func_59(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0 /*12*/].f_9)
		{
			if (func_28(vParam0, &(Global_2405072.f_45[iVar0 /*12*/]), iParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_60(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0 /*12*/].f_9)
		{
			if (func_28(vParam0, &(Global_2405072.f_45[iVar0 /*12*/]), iParam3, 0, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_61(bool bParam0, bool bParam1)
{
	if (func_63() != 0)
	{
		return func_62(bParam0) != 0;
	}
	return func_47(bParam0, bParam1, 0);
}

int func_62(bool bParam0)
{
	if (func_1115(bParam0, 0, 1))
	{
		return Global_2425662[bParam0 /*421*/].f_1;
	}
	return 0;
}

int func_63()
{
	return Global_30768;
}

bool func_64(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405072.f_2254 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_2254)
		{
			fVar3 = SYSTEM::VDIST(Global_2405072.f_2255[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*iParam3 = { Global_2405072.f_2255[iVar1 /*4*/] };
			return true;
		}
	}
	return false;
}

bool func_65(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, bool bParam10)
{
	func_66(&vParam3, &vParam6);
	if (((!vParam0.x >= vParam3.x || !vParam0.y >= vParam3.y) || !vParam0.x <= vParam6.x) || !vParam0.y <= vParam6.y)
	{
		return false;
	}
	if (bParam9 && bParam10)
	{
		return true;
	}
	else if (bParam9)
	{
		if (vParam0.z >= vParam3.z)
		{
			return true;
		}
	}
	else if (bParam10)
	{
		if (vParam0.z <= vParam6.z)
		{
			return true;
		}
	}
	else if (vParam0.z >= vParam3.z && vParam0.z <= vParam6.z)
	{
		return true;
	}
	return false;
}

void func_66(bool bParam0, var uParam1)
{
	var uVar0;

	if (*bParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *bParam0;
		*bParam0 = uVar0;
	}
	if (bParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = bParam0->f_1;
		bParam0->f_1 = uVar0;
	}
	if (bParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = bParam0->f_2;
		bParam0->f_2 = uVar0;
	}
}

bool func_67(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;
	vector3 vVar3;

	if (vParam0.x > vParam3.x)
	{
		vVar3.x = vParam0.x;
		vVar0.x = vParam3.x;
	}
	else
	{
		vVar3.x = vParam3.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam3.y)
	{
		vVar3.f_1 = vParam0.y;
		vVar0.f_1 = vParam3.y;
	}
	else
	{
		vVar3.f_1 = vParam3.y;
		vVar0.f_1 = vParam0.y;
	}
	if (vParam0.z > vParam3.z)
	{
		vVar3.f_2 = vParam0.z;
		vVar0.f_2 = vParam3.z;
	}
	else
	{
		vVar3.f_2 = vParam3.z;
		vVar0.f_2 = vParam0.z;
	}
	if (SYSTEM::VMAG(vVar3 - vVar0) > 100f)
	{
		return true;
	}
	if (fParam6 > 50f)
	{
		return true;
	}
	return false;
}

bool func_68(float fParam0)
{
	if (fParam0 > 50f)
	{
		return true;
	}
	return false;
}

bool func_69(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;

	if (Global_2405072.f_2483.f_1 == 0 && Global_2405072.f_2483 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (UNK_0xB1275034A6871D62(&(Global_2405072.f_2483.f_1)))
			{
				case 0:
					func_142(uParam1, iParam2);
					if (!Global_2405072.f_2483.f_2)
					{
						if (iParam2->f_7 && Global_2405072.f_552.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return true;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405072.f_2458 };
							}
							if (uParam1->f_5 && func_17(Global_2405072.f_486))
							{
								if (!Global_2405072.f_2483.f_5)
								{
									Global_2405072.f_2483.f_5 = 1;
								}
								else
								{
									func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, iParam2);
								}
							}
							else
							{
								func_18(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, iParam2);
							}
							uParam0->f_16[0] = UNK_0x79833B02DBD2A244(0f, 360f);
							return true;
						}
					}
					break;
				case 1:
					func_142(uParam1, iParam2);
					break;
				case 2:
					return false;
				case 3:
					return false;
			}
		}
		else if (UNK_0xC79C8A78EC708587())
		{
			if (!UNK_0xFA2A5CC35287E5B8())
			{
				if (UNK_0x4FC9A1459CD5C324())
				{
					func_142(uParam1, iParam2);
					Global_2405072.f_2483.f_1 = UNK_0xEAD4FBE79458D592();
				}
				else
				{
					return false;
				}
			}
			else
			{
				UNK_0x0FB2CEE58DA4A6EE();
				func_142(uParam1, iParam2);
				if (!Global_2405072.f_2483.f_2)
				{
					Global_2405072.f_2483.f_5 = 1;
					return true;
				}
			}
		}
		else
		{
			return false;
		}
	}
	if (uParam1->f_5)
	{
		func_139(Global_2405072.f_552, &(Global_2405072.f_2483.f_57), &(Global_2405072.f_2483.f_90));
	}
	if (iParam2->f_7 && !Global_2405072.f_2483.f_4)
	{
		Global_2405072.f_2483.f_4 = 1;
		func_77(*uParam1, uParam1->f_3, uParam1, iParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2405072.f_2483.f_1 > 0 || Global_2405072.f_2483 > 0)
	{
		if (uParam1->f_5 || UNK_0xC79C8A78EC708587())
		{
			iVar4 = 0;
			while (iVar4 < Global_2405072.f_2483.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2405072.f_2483.f_3)
					{
						iVar4 = Global_2405072.f_2483.f_3 + 1;
					}
					if (iVar4 > (Global_2405072.f_2483.f_1 - 1))
					{
						iVar4 = (Global_2405072.f_2483.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						UNK_0xE0463990929F9949(iVar4, &vVar0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						UNK_0xB2C5D6F8163D4A45(iVar4, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = UNK_0x00C66A3E05649B75(iVar4);
					}
					else
					{
						UNK_0xD38A4489EFBF773A(iVar4, &iVar5);
					}
					func_77(vVar0, fVar3, uParam1, iParam2, 0, iVar5);
					iVar6++;
					Global_2405072.f_2483.f_3 = iVar4;
				}
				else
				{
					return false;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2405072.f_2483.f_1;
		}
		if (Global_2405072.f_2483.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2405072.f_2880)
			{
				func_71(&(Global_2405072.f_2483.f_6[0 /*10*/]), &(Global_2405072.f_2483.f_6[1 /*10*/]), &(Global_2405072.f_2483.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_17(Global_2405072.f_486))
			{
				if (Global_2405072.f_2483.f_2)
				{
					func_16(uParam0, &(Global_2405072.f_2483.f_6));
					func_70(*(uParam0[0 /*3*/]));
					return true;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405072.f_2458 };
					func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, iParam2);
					uParam0->f_16[0] = UNK_0x79833B02DBD2A244(0f, 360f);
					func_70(*(uParam0[0 /*3*/]));
					return true;
				}
			}
			else if (Global_2405072.f_2483.f_2)
			{
				func_16(uParam0, &(Global_2405072.f_2483.f_6));
				func_70(*(uParam0[0 /*3*/]));
				return true;
			}
			else if (uParam1->f_5)
			{
				iVar4 = UNK_0x09AC81E49EA267F7(false, Global_2405072.f_2483.f_1);
				UNK_0xE0463990929F9949(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_35(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_70(*(uParam0[0 /*3*/]));
					return true;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405072.f_2458 };
					func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, iParam2);
					uParam0->f_16[0] = UNK_0x79833B02DBD2A244(0f, 360f);
					func_70(*(uParam0[0 /*3*/]));
					return true;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405072.f_2458 };
				func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, iParam2);
				uParam0->f_16[0] = UNK_0x79833B02DBD2A244(0f, 360f);
				func_70(*(uParam0[0 /*3*/]));
				return true;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405072.f_2458 };
		if (uParam1->f_5 && func_17(Global_2405072.f_486))
		{
			if (!Global_2405072.f_2483.f_5)
			{
				Global_2405072.f_2483.f_5 = 1;
			}
			else
			{
				func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, iParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_18(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, iParam2);
		}
		uParam0->f_16[0] = UNK_0x79833B02DBD2A244(0f, 360f);
		func_70(*(uParam0[0 /*3*/]));
		return true;
	}
	return false;
}

void func_70(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405072.f_2617[(3 - iVar0) /*3*/] = { Global_2405072.f_2617[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405072.f_2617[0 /*3*/] = { vParam0 };
}

void func_71(var uParam0, var uParam1, var uParam2)
{
	if (func_17(Global_2405072.f_486) && func_76() < 4096)
	{
		func_75(uParam0, 0f);
		func_75(uParam1, uParam0->f_2);
		func_75(uParam2, uParam1->f_2);
	}
	else
	{
		func_74(uParam0);
		func_73(uParam2, uParam0->f_4);
		func_72(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_72(var uParam0, vector3 vParam1, vector3 vParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;

	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2408006[iVar0 /*10*/].f_4, vParam1);
			fVar3 = SYSTEM::VDIST(Global_2408006[iVar0 /*10*/].f_4, vParam4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2408006[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2408006[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_73(var uParam0, vector3 vParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;

	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2408006[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_2408006[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2408006[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_74(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;

	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > 0)
		{
			if (Global_2408006[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2408006[iVar0 /*10*/].f_1;
				Var2 = { Global_2408006[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_75(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;

	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > 0)
		{
			if (Global_2408006[iVar0 /*10*/].f_2 < fVar1 && Global_2408006[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2408006[iVar0 /*10*/].f_2;
				Var2 = { Global_2408006[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_76()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2408006[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_77(vector3 vParam0, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar15;
	int iVar16;
	vector3 vVar17;
	vector3 vVar20;
	var uVar23;
	int iVar24;
	struct<10> Var25;
	bool bVar35;
	bool bVar36;

	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (iParam4->f_5)
	{
		if (Global_2405072.f_486 == 1)
		{
			if (UNK_0x755FF954DAE327E1((Global_2405072.f_509.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (iParam4->f_5)
	{
		if (func_135(UNK_0xD803B885F5E47A62()))
		{
			if (iParam7 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (iParam4->f_5 && iParam4->f_6)
	{
		if (!func_134(vParam0, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (iParam4->f_5)
	{
		if (!UNK_0xE5DF6192D54A65A1(UNK_0x16F2683693E537C9(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!UNK_0xE5DF6192D54A65A1(UNK_0x16F2683693E537C9(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (iParam4->f_5)
	{
		if (!func_133(vParam0, iParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar15 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(iParam5->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(vParam0, iParam5->f_13[iVar11 /*3*/]) > iParam5->f_20[iVar11])
			{
				bVar15 = false;
			}
		}
		iVar11++;
	}
	if (bVar15)
	{
		if ((SYSTEM::VMAG(iParam5->f_23) > 0f && SYSTEM::VMAG(iParam5->f_26) > 0f) && iParam5->f_29 > 0f)
		{
			if (UNK_0x0399732A9EBC368E(vParam0, iParam5->f_23, iParam5->f_26, iParam5->f_29, 0, true))
			{
				bVar15 = false;
			}
		}
	}
	if (bVar15)
	{
		iVar8 += 256;
	}
	if (iParam4->f_5)
	{
		if (func_127(vParam0, iParam3, iParam4->f_15, func_132(1), iParam4->f_16, 0, 1123024896 /* Float: 120f */, 1101004800 /* Float: 20f */, 1101004800 /* Float: 20f */, 1084227584 /* Float: 5f */, 1092616192 /* Float: 10f */, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405072.f_3;
		}
	}
	else if (!func_124(vParam0, 25f, UNK_0xD803B885F5E47A62(), 1, 1))
	{
		if (iParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_120(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_120(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (iParam4->f_5)
	{
		if (!Global_2405072.f_693)
		{
			vVar12 = { Global_2405072.f_509 };
			if (Global_2405072.f_486 == 26)
			{
				vVar12 = { Global_2405072.f_552.f_18 };
			}
			if (!func_51(vParam0, 0.5f))
			{
				if (func_57(vVar12))
				{
					if (!func_19(&vParam0, 0, 0, 0, 1) && !func_119(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_119(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_118(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (iParam4->f_5)
	{
		if (!(func_117(UNK_0xD803B885F5E47A62()) && func_115(UNK_0xD803B885F5E47A62())))
		{
			if (!func_114(&vParam0, &(Global_2405072.f_2483.f_90), 0, 1065353216 /* Float: 1f */))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (iParam4->f_5)
	{
		if (!func_115(UNK_0xD803B885F5E47A62()))
		{
			if (!func_113(vParam0, &(Global_2405072.f_2483.f_57), &(Global_2405072.f_2483.f_90), 1073741824 /* Float: 2f */))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_112(vParam0))
	{
		if (iParam4->f_5)
		{
			if (func_17(Global_2405072.f_486))
			{
				if (func_60(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (iParam4->f_5)
	{
		if (func_111(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405072.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (iParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (iParam4->f_5)
	{
		if (!Global_2405072.f_693)
		{
			if (!func_52(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_35(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar16 = func_59(vParam0, 1008981770 /* Float: 0.01f */);
		if (iVar16 > -1)
		{
			func_110(vParam0, &vVar17, &vVar20, &uVar23);
			if (!func_105(&(Global_2405072.f_45[iVar16 /*12*/]), vVar17, vVar20, uVar23))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_38(vParam0, 1056964608 /* Float: 0.5f */))
	{
		iVar8 = -1;
	}
	if (iParam5->f_33)
	{
		if (UNK_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (iParam5->f_34)
	{
		if (UNK_0x558ADED8B93EA0F6(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (iParam4->f_5)
	{
	}
	else if (func_104(vParam0, 1, 0, iParam4->f_15, 1060320051 /* Float: 0.7f */, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1088421888 /* Float: 7f */))
	{
		iVar8 = 0;
	}
	Var25.f_2 = 1176256410;
	bVar35 = false;
	bVar36 = false;
	if (Global_2405072.f_2880 && iParam4->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam6)
			{
				iParam5->f_4 = 0;
				iVar4 = 0;
			}
			else
			{
				iVar4 = 1;
			}
			if (iParam4->f_21)
			{
				fVar0 = func_96(vParam0, iParam4->f_18, iParam5->f_6, iParam5->f_4, iVar4, iVar10, &(Var25.f_8));
			}
			else
			{
				fVar0 = func_96(vParam0, Global_2405072.f_2458, iParam5->f_6, iParam5->f_4, iVar4, iVar10, &(Var25.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_17(Global_2405072.f_486) && iVar8 < 4096)
			{
				Var25.f_2 = func_94(vParam0);
			}
			fVar7 = func_83(vParam0, 1, 0, 0, 0, 0);
			Var25.f_4 = { vParam0 };
			Var25.f_7 = iParam3;
			Var25 = iVar8;
			Var25.f_1 = fVar0;
			Var25.f_9 = fVar7;
			func_82(Var25);
			Global_2405072.f_2483.f_2 = 1;
		}
	}
	else
	{
		iVar24 = 0;
		while (iVar24 < 5)
		{
			if (iVar8 >= Global_2405072.f_2483.f_6[iVar24 /*10*/])
			{
				if (iParam4->f_5)
				{
					if (!bVar35)
					{
						if (bParam6)
						{
							iParam5->f_4 = 0;
							iVar4 = 0;
						}
						else
						{
							iVar4 = 1;
						}
						if (iParam4->f_21)
						{
							fVar0 = func_96(vParam0, iParam4->f_18, iParam5->f_6, iParam5->f_4, iVar4, iVar10, &(Var25.f_8));
						}
						else
						{
							fVar0 = func_96(vParam0, Global_2405072.f_2458, iParam5->f_6, iParam5->f_4, iVar4, iVar10, &(Var25.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar35 = true;
					}
					if ((func_17(Global_2405072.f_486) && iVar8 == Global_2405072.f_2483.f_6[iVar24 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar36)
						{
							fVar2 = func_94(vParam0);
							bVar36 = true;
						}
						if (fVar2 < Global_2405072.f_2483.f_6[iVar24 /*10*/].f_2)
						{
							Var25.f_4 = { vParam0 };
							Var25.f_7 = iParam3;
							Var25 = iVar8;
							Var25.f_1 = fVar0;
							Var25.f_2 = fVar2;
							func_81(Var25, iVar24);
							Global_2405072.f_2483.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405072.f_2483.f_6[iVar24 /*10*/] || (iVar8 == Global_2405072.f_2483.f_6[iVar24 /*10*/] && fVar0 > Global_2405072.f_2483.f_6[iVar24 /*10*/].f_1))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = iParam3;
						Var25 = iVar8;
						Var25.f_1 = fVar0;
						func_81(Var25, iVar24);
						Global_2405072.f_2483.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar35)
					{
						if (iParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_79(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_83(vParam0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_78(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_78(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar35 = true;
					}
					if (iVar8 > Global_2405072.f_2483.f_6[iVar24 /*10*/] || (iVar8 == Global_2405072.f_2483.f_6[iVar24 /*10*/] && fVar3 > Global_2405072.f_2483.f_6[iVar24 /*10*/].f_3))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = iParam3;
						Var25 = iVar8;
						Var25.f_3 = fVar3;
						func_81(Var25, iVar24);
						Global_2405072.f_2483.f_2 = 1;
						return;
					}
				}
			}
			iVar24++;
		}
	}
}

float func_78(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;

	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_79(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;

	bVar2 = false;
	fVar3 = 1E+13f;
	if (bParam4 && !bParam6)
	{
		if (func_1115(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			if (!UNK_0x757EF87A33649210())
			{
				if (UNK_0x8E28E832BEAC3DCE(vParam0, bParam3))
				{
					fVar4 = SYSTEM::VDIST2(vParam0, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_1115(bVar1, 1, 1))
		{
			if (!func_147(bVar1, 0) && UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
			{
				if (bParam4 == 1 || (bParam4 == 0 && bVar1 != UNK_0xD803B885F5E47A62()))
				{
					if (func_80(bVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((bParam5 || (bParam5 == 0 && UNK_0x08067D4957B73C02(bVar1) != UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()))) || UNK_0x08067D4957B73C02(bVar1) == -1)
							{
								if (UNK_0xAA451564CBFD3413(bVar1, vParam0, bParam3))
								{
									fVar4 = SYSTEM::VDIST2(vParam0, UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bVar1), false));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (UNK_0x08067D4957B73C02(bVar1) != iParam7 || UNK_0x08067D4957B73C02(bVar1) == -1)
						{
							if (UNK_0xAA451564CBFD3413(bVar1, vParam0, bParam3))
							{
								fVar4 = SYSTEM::VDIST2(vParam0, UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bVar1), false));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

bool func_80(bool bParam0)
{
	if (UNK_0x62FA787159F264AC(UNK_0x9539D44F3E4492F6(bParam0)) || Global_2425662[bParam0 /*421*/].f_245)
	{
		return true;
	}
	return false;
}

void func_81(struct<10> Param0, int iParam10)
{
	struct<10> Var0;

	Var0.f_2 = 1176256410;
	Var0 = { Global_2405072.f_2483.f_6[iParam10 /*10*/] };
	Global_2405072.f_2483.f_6[iParam10 /*10*/] = { Param0 };
	if (iParam10 < 4)
	{
		func_81(Var0, iParam10 + 1);
	}
}

void func_82(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	float fVar12;
	int iVar13;

	Var1.f_2 = 1176256410;
	iVar11 = func_76();
	if (Param0 > iVar11)
	{
		iVar11 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] < iVar11)
		{
			Global_2408006[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar11)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] == 0)
		{
			Global_2408006[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar12 = 9999.9f;
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > 0)
		{
			if (Global_2408006[iVar0 /*10*/].f_1 < fVar12)
			{
				fVar12 = Global_2408006[iVar0 /*10*/].f_1;
				iVar13 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar13 > -1)
	{
		Global_2408006[iVar13 /*10*/] = { Param0 };
	}
}

float func_83(vector3 vParam0, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	bool bVar11;

	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar11 = iVar0;
		if (func_1115(bVar11, 1, 1) || (iParam7 == 1 && func_1115(bVar11, 0, 0)))
		{
			if (!bVar11 == UNK_0xD803B885F5E47A62() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_85(bVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (UNK_0x08067D4957B73C02(bVar11) == UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()))
					{
						if (!UNK_0x08067D4957B73C02(bVar11) == -1 || !func_61(UNK_0xD803B885F5E47A62(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar11) || !bParam6)
					{
						if (func_80(bVar11))
						{
							vVar5 = { func_84(bVar11) };
							if (!bVar11 == UNK_0xD803B885F5E47A62())
							{
								vVar8 = { UNK_0x088E3BBDA11FE175(UNK_0x9539D44F3E4492F6(bVar11)) };
							}
							else
							{
								vVar8 = { vVar5 };
							}
							if (!bParam6)
							{
								if (vVar5.z < -100f)
								{
									vVar5.f_2 = vParam0.z;
								}
								if (vVar8.z < -100f)
								{
									vVar8.f_2 = vParam0.z;
								}
							}
							fVar1 = UNK_0x0EB28750412C3A5A(vParam0, vVar5, 1);
							fVar2 = UNK_0x0EB28750412C3A5A(vParam0, vVar8, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_84(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

bool func_85(bool bParam0)
{
	if (func_1115(bParam0, 0, 1))
	{
		if (!func_92(bParam0))
		{
			if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bParam0))
			{
				if (!UNK_0x08067D4957B73C02(bParam0) == UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()))
				{
					if (func_47(UNK_0xD803B885F5E47A62(), 1, 0))
					{
						if (!func_91(UNK_0x08067D4957B73C02(bParam0), UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()), 0))
						{
							return true;
						}
					}
					else
					{
						return true;
					}
				}
				else if (UNK_0x08067D4957B73C02(bParam0) == -1 && UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1)
				{
					if (!func_47(UNK_0xD803B885F5E47A62(), 1, 0))
					{
						if (!func_86(bParam0))
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
		}
	}
	return false;
}

bool func_86(bool bParam0)
{
	if (func_90(UNK_0xD803B885F5E47A62(), bParam0))
	{
		return true;
	}
	Global_2513218 = { func_89(bParam0) };
	if (UNK_0x04A104F429E6CBB0(&Global_2513218))
	{
		return true;
	}
	if (func_87(UNK_0xD803B885F5E47A62(), bParam0))
	{
		return true;
	}
	return false;
}

bool func_87(bool bParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = func_88(bParam0);
	if (!bVar0 == func_32())
	{
		if (bVar0 == func_88(bParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_88(bool bParam0)
{
	if (bParam0 != func_32())
	{
		return Global_1628237[bParam0 /*615*/].f_11;
	}
	return func_32();
}

struct<13> func_89(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

bool func_90(bool bParam0, bool bParam1)
{
	if (UNK_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_89(bParam0) };
		Global_2513231 = { func_89(bParam1) };
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

bool func_91(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return true;
		}
		return false;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return true;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, false);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, true);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 2);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 3);
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 4);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 5);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 6);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 7);
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 8);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 9);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 10);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 11);
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 12);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 13);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 14);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 15);
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_92(bool bParam0)
{
	if (func_147(bParam0, 0))
	{
		return true;
	}
	if (func_93())
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

bool func_93()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

float func_94(vector3 vParam0)
{
	var uVar0;

	return func_95(vParam0, &(Global_2405072.f_45), &uVar0);
}

float func_95(vector3 vParam0, var uParam3, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if ((uParam3[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam3[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam3[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405072.f_2726) * (uParam3[iVar0 /*12*/])->f_8)));
					break;
				case 1:
				case 2:
					if (vParam0.x < (*uParam3)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam3[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam3[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam3[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam3[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam3[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam3[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam3[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam3[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_96(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;

	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam9) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam6)
	{
		fVar0 = func_78(SYSTEM::VDIST(vParam0, vParam3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_83(vParam0, 1, 0, 0, 1, 0);
	fVar0 = func_78(fVar4, 0f, func_103(), func_101(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_99(vParam0);
	fVar0 = func_78(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1 && !func_61(UNK_0xD803B885F5E47A62(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_98(vParam0, UNK_0xD803B885F5E47A62(), 0);
	fVar0 = func_78(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_97(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_78(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_78(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_78(SYSTEM::VDIST(Global_2405072.f_509, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

bool func_97(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	var uVar5;

	iVar3 = UNK_0x8529439EA7EEBA65(vParam0, 1, &uVar5, &uVar4, true, 3f, false);
	if (UNK_0x5DD62183BBF151CD(iVar3))
	{
		UNK_0x8502D8EBA9E78216(iVar3, &vVar0);
		*fParam3 = SYSTEM::VDIST(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*fParam4 = UNK_0x755FF954DAE327E1((vParam0.z - vVar0.z));
		return true;
	}
	return false;
}

float func_98(vector3 vParam0, bool bParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;

	fVar0 = 999999.9f;
	if (func_1115(bParam3, 0, 1))
	{
		bVar2 = false;
		while (bVar2 < 32)
		{
			if (!bParam3 == bVar2 || iParam4 == 1)
			{
				bVar3 = bVar2;
				if (func_1115(bVar3, 0, 1))
				{
					if (UNK_0x08067D4957B73C02(bVar3) != UNK_0x08067D4957B73C02(bParam3) || (UNK_0x08067D4957B73C02(bVar3) == -1 && UNK_0x08067D4957B73C02(bParam3) == -1))
					{
						if (Global_2417897.f_261[bVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_2417897.f_131[bVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			bVar2++;
		}
	}
	return fVar0;
}

float func_99(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar6[32];
	int iVar39;

	iVar39 = UNK_0x263615A674FCA6E9(UNK_0x16F2683693E537C9(), &uVar6, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (UNK_0xC844350D5D58C99A(uVar6[iVar2]))
		{
			if (!UNK_0x437347B10A200C4B(uVar6[iVar2], 0))
			{
				if (func_100(uVar6[iVar2]))
				{
					vVar3 = { UNK_0x68F4C0EC296D3901(uVar6[iVar2], true) };
					fVar1 = UNK_0x0EB28750412C3A5A(vParam0, vVar3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2405072.f_2925)
	{
		if (Global_969031.f_267 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_969031.f_267)
			{
				if (UNK_0xC844350D5D58C99A(Global_969031.f_152[iVar2]))
				{
					if (!UNK_0x437347B10A200C4B(Global_969031.f_152[iVar2], 0))
					{
						if (func_100(Global_969031.f_152[iVar2]))
						{
							vVar3 = { UNK_0x68F4C0EC296D3901(Global_969031.f_152[iVar2], true) };
							fVar1 = UNK_0x0EB28750412C3A5A(vParam0, vVar3, 1);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

bool func_100(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = UNK_0xD09DF7101876AFB8(bParam0);
	switch (UNK_0x256517DE1B6755D4(bVar0, joaat("PLAYER")))
	{
		case 3:
		case 5:
			return true;
	}
	if (UNK_0x1C43D178459D5730(Global_1574967[UNK_0xD803B885F5E47A62()]))
	{
		switch (UNK_0x256517DE1B6755D4(bVar0, Global_1574967[UNK_0xD803B885F5E47A62()]))
		{
			case 3:
			case 5:
				return true;
		}
	}
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 0)
	{
		iVar1 = UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (UNK_0x1C43D178459D5730(Global_1574677[iVar1]))
			{
				switch (UNK_0x256517DE1B6755D4(bVar0, Global_1574677[iVar1]))
				{
					case 3:
					case 5:
						return true;
				}
			}
		}
	}
	return false;
}

float func_101()
{
	if (func_102())
	{
		if ((UNK_0xC41A9202669A24C4(Global_2405072.f_45.f_67) || UNK_0xAFB8495D36825275(Global_2405072.f_45.f_67)) || Global_2405072.f_45.f_67 == joaat("RHINO"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

bool func_102()
{
	if (Global_2405072.f_45.f_65 && !Global_2405072.f_45.f_301)
	{
		if (!func_92(UNK_0xD803B885F5E47A62()))
		{
			return true;
		}
	}
	return false;
}

float func_103()
{
	if (func_102())
	{
		if ((UNK_0xC41A9202669A24C4(Global_2405072.f_45.f_67) || UNK_0xAFB8495D36825275(Global_2405072.f_45.f_67)) || Global_2405072.f_45.f_67 == joaat("RHINO"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

bool func_104(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	bool bVar0;

	bVar0 = iParam6;
	if (bParam5)
	{
		bVar0 = bParam7;
	}
	if ((((bParam7 > 0f && UNK_0x558ADED8B93EA0F6(vParam0, bParam7)) || (bVar0 > 0f && UNK_0xEA19D5D9230DBB67(vParam0, bVar0))) || ((iParam4 == 1 && bParam8 > 0f) && UNK_0x9DD97B5335E52CB9(vParam0, bParam8, 0))) || ((iParam3 == 1 && bParam9 > 0f) && UNK_0x9DD97B5335E52CB9(vParam0, bParam9, 1)))
	{
		return true;
	}
	return false;
}

bool func_105(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_109(*uParam0, uParam0->f_6, vParam1, vParam4, uParam7))
			{
				return true;
			}
			break;
		case 1:
			if (func_108(*uParam0, uParam0->f_3, vParam1, vParam4, uParam7))
			{
				return true;
			}
			break;
		case 2:
			if (func_106(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam4, uParam7))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_106(vector3 vParam0, vector3 vParam3, var uParam6, vector3 vParam7, vector3 vParam10, bool bParam13)
{
	vector3 vVar0[8];
	int iVar25;

	func_107(vParam0, vParam3, uParam6, &vVar0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!UNK_0x0399732A9EBC368E(vVar0[iVar25 /*3*/], vParam7, vParam10, bParam13, 0, true))
		{
			return false;
		}
		iVar25++;
	}
	return true;
}

void func_107(vector3 vParam0, vector3 vParam3, float fParam6, var uParam7)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;

	if (vParam0.z == vParam3.z)
	{
		vParam3.f_2 = (vParam3.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam3 };
	vVar3 = { func_23(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar3 = { vVar3 / FtoV(SYSTEM::VMAG(vVar3)) };
	vVar3 = { vVar3 * FtoV((fParam6 * 0.5f)) };
	if (vParam0.z > vParam3.z)
	{
		fVar6 = vParam3.z;
		fVar7 = vParam0.z;
	}
	else
	{
		fVar6 = vParam0.z;
		fVar7 = vParam3.z;
	}
	*(uParam7[0 /*3*/]) = { Vector(fVar6, vParam0.y, vParam0.x) + vVar3 };
	*(uParam7[1 /*3*/]) = { Vector(fVar6, vParam0.y, vParam0.x) - vVar3 };
	*(uParam7[2 /*3*/]) = { Vector(fVar7, vParam0.y, vParam0.x) - vVar3 };
	*(uParam7[3 /*3*/]) = { Vector(fVar7, vParam0.y, vParam0.x) + vVar3 };
	*(uParam7[4 /*3*/]) = { Vector(fVar6, vParam3.y, vParam3.x) + vVar3 };
	*(uParam7[5 /*3*/]) = { Vector(fVar6, vParam3.y, vParam3.x) - vVar3 };
	*(uParam7[6 /*3*/]) = { Vector(fVar7, vParam3.y, vParam3.x) - vVar3 };
	*(uParam7[7 /*3*/]) = { Vector(fVar7, vParam3.y, vParam3.x) + vVar3 };
}

bool func_108(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, bool bParam12)
{
	vector3 vVar0[8];
	int iVar25;

	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam3.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam3.y, vParam3.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam3.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam3.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam3.x, vParam0.y, vParam3.z };
	vVar0[6 /*3*/] = { vParam3.x, vParam3.y, vParam3.z };
	vVar0[7 /*3*/] = { vParam3.x, vParam3.y, vParam0.z };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!UNK_0x0399732A9EBC368E(vVar0[iVar25 /*3*/], vParam6, vParam9, bParam12, 0, true))
		{
			return false;
		}
		iVar25++;
	}
	return true;
}

bool func_109(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, bool bParam10)
{
	vector3 vVar0[4];
	int iVar13;

	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam3, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam3), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam3) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!UNK_0x0399732A9EBC368E(vVar0[iVar13 /*3*/], vParam4, vParam7, bParam10, 0, true))
		{
			return false;
		}
		iVar13++;
	}
	return true;
}

void func_110(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	vVar1 = { vParam0 };
	iVar4 = func_37(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411459[iVar4])
	{
		if (func_36(vVar1, &(Global_2410189[iVar4 /*141*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410189[iVar4 /*141*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410189[iVar4 /*141*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410189[iVar4 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411459[8])
	{
		if (func_36(vVar1, &(Global_2410189[8 /*141*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410189[8 /*141*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410189[8 /*141*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410189[8 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

bool func_111(vector3 vParam0)
{
	int iVar0;
	int iVar1;

	if (Global_2405072.f_45.f_55)
	{
		if (UNK_0x31609A585163CBAC(Global_2405072.f_45.f_56))
		{
			if (!UNK_0xD1BF3090E1F8300E(vParam0))
			{
				iVar0 = UNK_0xFBD08BECC9B87937(vParam0);
				if (UNK_0x31609A585163CBAC(iVar0))
				{
					iVar1 = UNK_0x7C3DA83DB15FFBEB(iVar0);
					if (!iVar1 == Global_2405072.f_45.f_57)
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
		}
	}
	return true;
}

bool func_112(vector3 vParam0)
{
	switch (Global_2405072.f_2479)
	{
		case 0:
			return func_150(vParam0, Global_2405072.f_2458, Global_2405072.f_2461, 0, 0);
		case 1:
			return func_65(vParam0, Global_2405072.f_2472, Global_2405072.f_2475, 0, 0);
		case 2:
			return UNK_0x0399732A9EBC368E(vParam0, Global_2405072.f_2472, Global_2405072.f_2475, Global_2405072.f_2478, 0, true);
	}
	return false;
}

bool func_113(vector3 vParam0, int iParam3, var uParam4, float fParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;

	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *iParam3)
	{
		fVar0 = ((iParam3[iVar1 /*4*/])->f_3 + fParam5);
		if (SYSTEM::VDIST(*(iParam3[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return true;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar5 = { 0f, 0f, 0f };
	bVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		vVar2 = { *(uParam4[iVar1 /*10*/]) };
		vVar5 = { (uParam4[iVar1 /*10*/])->f_3 };
		bVar8 = (uParam4[iVar1 /*10*/])->f_6;
		if (UNK_0x0399732A9EBC368E(vParam0, vVar2, vVar5, bVar8, 0, true))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_114(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_25(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949 /* Float: 0.1f */, 0, 0);
				*uParam0 = { vVar1 };
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_115(bool bParam0)
{
	switch (func_63())
	{
		case 0:
			if (!func_116(bParam0))
			{
				if (Global_1590535[bParam0 /*876*/] == 0)
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_116(bool bParam0)
{
	return Global_1590535[bParam0 /*876*/].f_196 != 0;
}

bool func_117(bool bParam0)
{
	if (func_47(bParam0, 1, 0))
	{
		if (Global_1590535[bParam0 /*876*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_118(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (SYSTEM::VDIST2(Global_2405072.f_2617[iVar0 /*3*/], vParam0) < (fParam3 * fParam3))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_119(var uParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar4;

	if (func_53(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar4 = UNK_0x79833B02DBD2A244(0.01f, 360f);
			func_25(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949 /* Float: 0.1f */, 0, fVar4);
			if (func_54(vVar1, &uVar0) || func_53(vVar1))
			{
				vVar1 = { *uParam0 };
				func_25(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949 /* Float: 0.1f */, 1, fVar4);
			}
			*uParam0 = { vVar1 };
		}
	}
	return false;
}

bool func_120(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (bParam4 && !bParam7)
	{
		if (func_1115(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			if (!UNK_0x757EF87A33649210())
			{
				bVar2 = bParam6;
				if (bParam9 > 0f)
				{
					bVar2 = bParam9;
				}
				if (UNK_0x0EB28750412C3A5A(func_121(UNK_0xD803B885F5E47A62()), vParam0, 1) <= (bVar2 + bParam3))
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
		if (func_1115(bVar1, 1, 1))
		{
			if (!func_147(bVar1, 0) && UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
			{
				if (bParam4 == 1 || (bParam4 == 0 && bVar1 != UNK_0xD803B885F5E47A62()))
				{
					if ((func_80(bVar1) || !bParam10) && !Global_2425662[bVar1 /*421*/].f_259)
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
								if (UNK_0x0EB28750412C3A5A(func_121(bVar1), vParam0, 1) <= (bVar2 + bParam3))
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
							if (UNK_0x0EB28750412C3A5A(func_121(bVar1), vParam0, 1) <= (bVar2 + bParam3))
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

Vector3 func_121(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if ((func_123() && Global_1590535[bVar0 /*876*/].f_847) && !func_122(Global_1590535[bVar0 /*876*/].f_848))
	{
		return Global_1590535[bVar0 /*876*/].f_848;
	}
	return func_84(bParam0);
}

bool func_122(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_123()
{
	return Global_2450632.f_17;
}

bool func_124(vector3 vParam0, float fParam3, int iParam4, float fParam5, int iParam6)
{
	if (func_126(vParam0, fParam3, iParam4, fParam5, 0) || func_125(vParam0, iParam4, iParam6))
	{
		return true;
	}
	return false;
}

int func_125(vector3 vParam0, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (!bParam3 == bVar0 || iParam4 == 1)
		{
			bVar2 = bVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_39(vParam0, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949 /* Float: 0.1f */))
					{
						if (func_1115(bVar2, 0, 1) && func_1115(bParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		bVar0++;
	}
	return 0;
}

int func_126(vector3 vParam0, float fParam3, bool bParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (!bParam4 == bVar0 || iParam5 == 1)
		{
			bVar1 = bVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_1115(bVar1, 0, 1) && func_1115(bParam4, 0, 1))
				{
					if (UNK_0x08067D4957B73C02(bVar1) == UNK_0x08067D4957B73C02(bParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_1115(bVar1, 0, 1) && func_1115(bParam4, 0, 1))
				{
					if (Global_2417897.f_261[bVar0])
					{
						if (SYSTEM::VDIST(Global_2417897.f_131[bVar0 /*3*/], vParam0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_84(bVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417897.f_261[bVar0])
				{
					if (SYSTEM::VDIST(Global_2417897.f_131[bVar0 /*3*/], vParam0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_1115(bVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_84(bVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool func_127(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, int iParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2405072.f_3 = 0;
	if (!func_124(vParam0, 0.5f, UNK_0xD803B885F5E47A62(), 0, 0))
	{
		Global_2405072.f_3++;
		if (bParam5)
		{
			if (func_178(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, fParam6, bParam7, bParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
				if (!func_131(vParam0, iParam12))
				{
					Global_2405072.f_3++;
					if (!func_38(vParam0, 1056964608 /* Float: 0.5f */))
					{
						Global_2405072.f_3++;
						return true;
					}
				}
			}
			else
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_178(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, fParam6, bParam7, bParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
				if (!func_131(vParam0, iParam12))
				{
					Global_2405072.f_3++;
					if (!func_128(vParam0, bParam3, iParam9, bParam10, 1084227584 /* Float: 5f */))
					{
						Global_2405072.f_3++;
						if (!func_38(vParam0, 1056964608 /* Float: 0.5f */))
						{
							Global_2405072.f_3++;
							return true;
						}
					}
				}
			}
			else
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			}
		}
		else if (func_178(vParam0, 6f, 5f, 5f, 5f, 0, fParam6, bParam7, bParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			if (!func_131(vParam0, iParam12))
			{
				Global_2405072.f_3++;
				if (!func_128(vParam0, bParam3, iParam9, bParam10, iParam11))
				{
					Global_2405072.f_3++;
					if (!func_38(vParam0, 1056964608 /* Float: 0.5f */))
					{
						Global_2405072.f_3++;
						return true;
					}
				}
			}
		}
		else
		{
			Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
		}
	}
	return false;
}

bool func_128(vector3 vParam0, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (!UNK_0xD803B885F5E47A62() == bVar1)
		{
			if ((func_1115(bVar1, 1, 1) && func_80(bVar1)) && UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
			{
				if (!func_130(UNK_0xD803B885F5E47A62(), bVar1, -2, 0))
				{
					if (func_129(func_84(bVar1), vParam0, bParam3, iParam4, bParam5, iParam6))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_129(vector3 vParam0, vector3 vParam3, bool bParam6, float fParam7, bool bParam8, float fParam9)
{
	vector3 vVar0;
	vector3 vVar3;

	bParam6 = (bParam6 * -1f);
	bParam6 = (bParam6 + 360f);
	vVar0.x = SYSTEM::SIN(bParam6);
	vVar0.f_1 = SYSTEM::COS(bParam6);
	vVar0.f_2 = 0f;
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam7, fParam7, fParam7) };
	vVar3 = { vParam3 + vVar0 };
	vVar3.f_2 = vParam3.z;
	vVar3.f_2 = (vVar3.z + fParam9);
	vParam3.f_2 = (vParam3.z + fParam9);
	return UNK_0x0399732A9EBC368E(vParam0, vParam3, vVar3, bParam8, 0, true);
}

bool func_130(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (UNK_0x08067D4957B73C02(bParam0) == -1 && UNK_0x08067D4957B73C02(bParam1) == -1)
			{
				return false;
			}
		}
		return UNK_0x08067D4957B73C02(bParam0) == UNK_0x08067D4957B73C02(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (UNK_0x08067D4957B73C02(bParam0) == -1 && iParam2 == -1)
			{
				return false;
			}
		}
		return UNK_0x08067D4957B73C02(bParam0) == iParam2;
	}
	return UNK_0x08067D4957B73C02(bParam0) == iParam2;
}

bool func_131(vector3 vParam0, float fParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((func_1115(bVar1, 1, 1) && func_80(bVar1)) && UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
		{
			if ((UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1 && UNK_0x08067D4957B73C02(bVar1) == -1) && !func_61(UNK_0xD803B885F5E47A62(), 1))
			{
				return false;
			}
			else if ((UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1 && !UNK_0xD803B885F5E47A62() == bVar1) || !func_130(UNK_0xD803B885F5E47A62(), bVar1, -2, 0))
			{
				if (SYSTEM::VDIST(vParam0, func_84(bVar1)) < fParam3)
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_132(int iParam0)
{
	if ((Global_2405072.f_486 == 9 || Global_2405072.f_486 == 9) || (Global_2405072.f_486 == 15 && iParam0 == 1))
	{
		return true;
	}
	return false;
}

bool func_133(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((bParam8 == 1 && UNK_0xD803B885F5E47A62() != bVar1) || bParam8 == 0)
		{
			if (func_1115(bVar1, bParam4, bParam5))
			{
				if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
				{
					if (!bParam7 || (!UNK_0xEB6A8945D1AC98A1(UNK_0x9539D44F3E4492F6(bVar1)) && func_80(bVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) != UNK_0x08067D4957B73C02(bVar1))) || UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1)
						{
							if (((UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1 && bParam9) && bParam6) && func_86(bVar1))
							{
							}
							else if (UNK_0xC844350D5D58C99A(UNK_0x9539D44F3E4492F6(bVar1)))
							{
								if (UNK_0x0EB28750412C3A5A(func_84(bVar1), vParam0, 1) < fParam3)
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

bool func_134(vector3 vParam0, bool bParam3, int iParam4, float fParam5)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;

	iVar3 = UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar1 = iVar0;
			if (func_1115(bVar1, 1, 1))
			{
				if ((!func_147(bVar1, 0) && UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1)) && bVar1 != UNK_0xD803B885F5E47A62())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!UNK_0x08067D4957B73C02(bVar1) == -1)
						{
							if (UNK_0x08067D4957B73C02(bVar1) == UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (UNK_0x08067D4957B73C02(bVar1) == iVar3)
					{
						if (UNK_0x0EB28750412C3A5A(func_84(bVar1), vParam0, 1) <= (fVar2 + bParam3))
						{
							if (UNK_0xAA451564CBFD3413(bVar1, vParam0, bParam3))
							{
								return true;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_135(bool bParam0)
{
	if (((func_61(bParam0, 1) || func_138(bParam0)) || func_137(bParam0, 0)) || func_136(bParam0))
	{
		return true;
	}
	return false;
}

bool func_136(bool bParam0)
{
	if (!func_1115(bParam0, 0, 1))
	{
		return false;
	}
	return Global_1590535[bParam0 /*876*/].f_35;
}

bool func_137(bool bParam0, bool bParam1)
{
	if (Global_1628237[bParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[bParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

bool func_138(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return Global_1628237[bVar0 /*615*/] != -1;
	}
	return false;
}

void func_139(vector3 vParam0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var7;
	vector3 vVar17;
	vector3 vVar20;

	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = { Var7 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2359721[iVar1 /*26*/].f_3, vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_141(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_5999[iVar1 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_262145.f_5999[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_141(&Var3, uParam3, iVar0);
				iVar0 = *uParam3;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6045[iVar1 /*19*/][iVar2 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_262145.f_6045[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_141(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			vVar17 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar20 = { *(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam4[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(vVar17, vParam0) < SYSTEM::VDIST(vVar20, vParam0))
			{
				Var7 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var7.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var7.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var7.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_140(&Var7, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_140(var uParam0, var uParam1, int iParam2)
{
	Global_2412464 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_140(&Global_2412464, uParam1, iParam2 + 1);
	}
}

void func_141(var uParam0, var uParam1, int iParam2)
{
	Global_2412460 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_141(&Global_2412460, uParam1, iParam2 + 1);
	}
}

void func_142(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	if (Global_2405072.f_2254 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_2254)
		{
			if (func_143(Global_2405072.f_2255[iVar0 /*4*/], uParam0))
			{
				iVar4 = Global_2405072.f_2255[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*iParam1) > 0.01f)
				{
					vVar1 = { *iParam1 - Global_2405072.f_2255[iVar0 /*4*/] };
					iVar4 = UNK_0xE7D606C557C86100(vVar1.x, vVar1.y);
				}
				func_77(Global_2405072.f_2255[iVar0 /*4*/], iVar4, uParam0, iParam1, 0, -1);
				Global_2405072.f_2483++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405072.f_2880)
	{
		func_71(&(Global_2405072.f_2483.f_6[0 /*10*/]), &(Global_2405072.f_2483.f_6[1 /*10*/]), &(Global_2405072.f_2483.f_6[2 /*10*/]));
	}
}

bool func_143(vector3 vParam0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_29(vParam0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		case 1:
		case 2:
			return func_29(vParam0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		default:
			break;
	}
	return false;
}

void func_144(vector3 vParam0, vector3 vParam3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;

	func_66(&vParam0, &vParam3);
	fVar0 = (vParam3.x - vParam0.x);
	*uParam6 = (vParam0.x + (fVar0 * 0.5f));
	uParam6->f_1 = vParam0.y;
	uParam6->f_2 = vParam0.z;
	*uParam7 = *uParam6;
	uParam7->f_1 = vParam3.y;
	uParam7->f_2 = vParam3.z;
	*uParam8 = (fVar0 * 0.5f);
}

bool func_145()
{
	return Global_1310987.f_4;
}

void func_146(float fParam0, float fParam1)
{
	func_185();
	func_177(fParam0, fParam1);
}

bool func_147(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_148(-1, 0) == 8;
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

int func_148(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_149();
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

int func_149()
{
	return Global_1312745;
}

bool func_150(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		vParam0.f_2 = 0f;
		vParam3.f_2 = 0f;
		return SYSTEM::VDIST(vParam0, vParam3) < (bParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (vParam0.z > vParam3.z)
		{
			vParam0.f_2 = vParam3.z;
		}
		return SYSTEM::VDIST(vParam0, vParam3) < (bParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (vParam0.z < vParam3.z)
		{
			vParam0.f_2 = vParam3.z;
		}
		return SYSTEM::VDIST(vParam0, vParam3) < (bParam6 + 0.01f);
	}
	return SYSTEM::VDIST(vParam0, vParam3) < (bParam6 + 0.01f);
}

void func_151(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		while (func_173(uParam0, uParam1, fParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			fParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_152(uParam0, uParam1, fParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_152(int iParam0, var uParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	vector3 vVar27;
	var uVar30;
	vector3 vVar31;
	var uVar34;
	bool bVar35;

	iVar0 = 0;
	if (!SYSTEM::VMAG(fParam2->f_35) > 0f)
	{
		fParam2->f_35 = { *iParam0 };
	}
	if (fParam2->f_15)
	{
		if (func_50(fParam2->f_35, iParam0, &(fParam2->f_38), &(fParam2->f_45), 1, 1))
		{
			fParam2->f_6 = 9999.9f;
			fParam2->f_7 = 9999.9f;
		}
	}
	if (fParam2->f_51)
	{
		fParam2->f_6 = 9999.9f;
	}
	if (fParam2->f_48)
	{
		if (func_172(iParam0, 1))
		{
		}
	}
	if (iParam0->f_2 < -80f)
	{
		fParam2->f_6 = 9999.9f;
		fParam2->f_7 = 9999.9f;
	}
	bVar5 = false;
	bVar10 = true;
	if (fParam2->f_11)
	{
		bVar5 += 2;
		bVar5++;
		bVar10 = false;
	}
	else if (fParam2->f_10 == 0 || (fParam2->f_33 > 0 && fParam2->f_16))
	{
		bVar5++;
		bVar10 = false;
	}
	bVar5 += 4;
	fVar13 = 3f;
	bVar14 = 5f;
	switch (fParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			bVar14 = 5f;
			break;
		case 1:
			fVar13 = 2.75f;
			bVar14 = 7.5f;
			break;
		default:
			fVar13 = 2.5f;
			bVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2412474.f_162 = 0;
	Global_2412474.f_163 = 0;
	Global_2412474.f_164 = -99;
	Global_2412474.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412474[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2412474.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_44(fParam2->f_34) != 0)
	{
		iVar17 = 3;
		fParam2->f_6 = 9999.9f;
		fParam2->f_7 = 9999.9f;
		fParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = UNK_0x8529439EA7EEBA65(*iParam0, (iVar0 * iVar17), &uVar4, &fVar9, bVar5, fVar13, bVar14);
		if (UNK_0x5DD62183BBF151CD(iVar8))
		{
			UNK_0x8502D8EBA9E78216(iVar8, &vVar1);
			bVar12 = false;
			if (Global_2412474.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412474.f_165 = { vVar1 };
			if (((fParam2->f_10 || fParam2->f_33 > 0) || !UNK_0x5B33870CBB8B6AC1(iVar8)) || UNK_0xD9DC3EBC8290FF92(iVar8))
			{
				UNK_0x968116EE0D84C042(vVar1, &uVar6, &iVar7);
				if (SYSTEM::VDIST(vVar1, fParam2->f_35) > fParam2->f_4)
				{
					if (!func_119(&vVar1, 0))
					{
						if ((fParam2->f_13 || iVar7 & 64 == 0) || fParam2->f_33 == 1)
						{
							if (fParam2->f_14 || iVar7 & 16 == 0)
							{
								if ((iVar7 & 128 == 0 && iVar7 & 256 == 0) && iVar7 & 512 == 0)
								{
									if (!func_171(vVar1))
									{
										vVar1 = { func_167(vVar1, &uVar4, fVar9, fParam2->f_9, *fParam2, bVar10, fParam2->f_11, fParam2->f_34, &bVar11, bVar12, 1, fParam2->f_51) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_38(vVar1, 5f))
											{
												if (vVar1.z >= (fParam2->f_35.f_2 - fParam2->f_7) || fParam2->f_33 >= 2)
												{
													if (vVar1.z <= (fParam2->f_35.f_2 + fParam2->f_6) || fParam2->f_33 >= 2)
													{
														if (func_166(vVar1, fParam2))
														{
															if ((fParam2->f_48 && !func_172(&vVar1, 0)) || fParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (SYSTEM::VMAG(vVar1) > 0f)
																{
																	if (((fParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, fParam2->f_35, fParam2->f_35.f_1, 0f) < fParam2->f_5) || fParam2->f_5 <= 0f) || fParam2->f_33 >= 2)
																	{
																		if ((fParam2->f_12 && !func_162(vVar1, uVar4, fParam2->f_34, UNK_0xD803B885F5E47A62(), 0, fParam2->f_56)) || !fParam2->f_12)
																		{
																			if (!fParam2->f_15 || !func_50(fParam2->f_35, &vVar1, &(fParam2->f_38), &(fParam2->f_45), 0, 1))
																			{
																				if (fParam2->f_8)
																				{
																					bVar19 = fParam2->f_31;
																					iVar20 = 1;
																					bVar21 = true;
																					bVar22 = fParam2->f_49;
																					if (!fParam2->f_55)
																					{
																						bVar19 = false;
																						iVar20 = 0;
																						bVar21 = false;
																						bVar22 = 1f;
																					}
																					else if (fParam2->f_17)
																					{
																						bVar19 = false;
																						iVar20 = 0;
																						bVar21 = false;
																						if (fParam2->f_33 == 1)
																						{
																							bVar22 = (bVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						iVar20 = 1;
																						bVar21 = true;
																						if (fParam2->f_28)
																						{
																							if (fParam2->f_33 == 1)
																							{
																								bVar22 = (bVar22 * 0.375f);
																							}
																						}
																					}
																					bVar23 = false;
																					if (!func_161(vVar1, uVar4, fParam2->f_34))
																					{
																						if (fParam2->f_3 > 7f)
																						{
																							if (func_178(vVar1, 6f, 1f, 1f, 5f, bVar19, iVar20, bVar21, bVar22, fParam2->f_58, -1, 1, fParam2->f_3, 0, 0, 0, 0))
																							{
																								bVar23 = true;
																							}
																						}
																						else if (func_178(vVar1, 6f, 1f, 1f, 5f, bVar19, iVar20, bVar21, bVar22, fParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_159(vVar1, uVar4, fParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							bVar23 = true;
																						}
																					}
																					if (bVar23 || fParam2->f_33 >= 2)
																					{
																						if (((fParam2->f_29 || fParam2->f_30) || fParam2->f_52) || fParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (fParam2->f_52)
																							{
																								iVar24 = func_158(vVar1, fParam2->f_54, &fVar25);
																							}
																							if (!fParam2->f_52 || (fParam2->f_52 && iVar24 <= fParam2->f_53))
																							{
																								if (fParam2->f_52)
																								{
																									if (iVar24 < fParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412474.f_162)
																										{
																											Global_2412474[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2412474.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412474.f_162 = 0;
																										fParam2->f_53 = iVar24;
																									}
																								}
																								if (fParam2->f_30)
																								{
																									if (Global_2412474.f_162 == 0)
																									{
																										Global_2412474[0 /*3*/] = { vVar1 };
																										Global_2412474.f_121[0] = uVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412474.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(vVar1, fParam2->f_35) < SYSTEM::VDIST2(Global_2412474[iVar16 /*3*/], fParam2->f_35))
																												{
																													func_157(vVar1, uVar4, iVar16);
																													iVar16 = Global_2412474.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412474.f_162++;
																									if (Global_2412474.f_162 >= 5)
																									{
																										if ((fParam2->f_52 && fParam2->f_53 == 0) || fParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412474[Global_2412474.f_162 /*3*/] = { vVar1 };
																									Global_2412474.f_121[Global_2412474.f_162] = uVar4;
																									Global_2412474.f_162++;
																									if (func_166(vVar1, fParam2))
																									{
																										Global_2412474.f_163++;
																									}
																									if (Global_2412474.f_162 >= 10)
																									{
																										if ((fParam2->f_52 && fParam2->f_53 == 0) || fParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*iParam0 = { vVar1 };
																							*uParam1 = uVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*iParam0 = { vVar1 };
																					*uParam1 = uVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!fParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2412474.f_162 > 0 && ((fParam2->f_29 || fParam2->f_30) || fParam2->f_33 >= 2))
				{
					if (fParam2->f_30)
					{
						*iParam0 = { Global_2412474[0 /*3*/] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
						{
							func_155(0, fParam2);
						}
						iVar26 = UNK_0x09AC81E49EA267F7(false, Global_2412474.f_162);
						if (fParam2->f_18 && fParam2->f_30)
						{
							iVar26 = 0;
						}
						vVar27 = { Global_2412474[0 /*3*/] };
						uVar30 = Global_2412474.f_121[0];
						Global_2412474[0 /*3*/] = { Global_2412474[iVar26 /*3*/] };
						Global_2412474.f_121[0] = Global_2412474.f_121[iVar26];
						Global_2412474[iVar26 /*3*/] = { vVar27 };
						Global_2412474.f_121[iVar26] = uVar30;
						*iParam0 = { Global_2412474[0 /*3*/] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
				}
				else
				{
					fParam2->f_33++;
					if (fParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_154(iVar15, *iParam0, &iVar0, &vVar1, &uVar4, fParam2, bVar10, fVar9, bVar5, fVar13, bVar14, bVar11);
						vVar31 = { vVar1 };
						uVar34 = uVar4;
						if (!fParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_50(fParam2->f_35, &vVar31, &(fParam2->f_38), &(fParam2->f_45), bVar35, 1) || func_172(&vVar31, bVar35))
						{
							if (!fParam2->f_50)
							{
								fParam2->f_33 = 0;
								fParam2->f_50 = 1;
								*iParam0 = { vVar31 };
								*uParam1 = uVar34;
								fParam2->f_6 = 9999.9f;
								fParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*iParam0 = { vVar31 };
								*uParam1 = uVar34;
								return 1;
							}
						}
						else
						{
							*iParam0 = { vVar31 };
							*uParam1 = uVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			fParam2->f_33++;
			if (fParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_153(&Global_1312061, iParam0, uParam1, *iParam0);
				if (fParam2->f_11)
				{
					fParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412474.f_164 = iVar8;
	}
	return 0;
}

void func_153(var uParam0, int iParam1, var uParam2, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_124(*(uParam0[iVar2 /*4*/]), 5f, UNK_0xD803B885F5E47A62(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*iParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_154(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = UNK_0x09AC81E49EA267F7((1 + iParam0), (40 + iParam0));
		UNK_0x4A13F7D4B1E239A0(vParam1, *iParam4, fParam5, bParam6, &fParam9, bParam10, bParam11, bParam12);
		*fParam5 = { func_167(*fParam5, bParam6, fParam9, fParam7->f_9, *fParam7, bParam8, fParam7->f_11, fParam7->f_34, &bParam13, 0, 0, fParam7->f_51) };
		if (!func_171(*fParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_155(int iParam0, float fParam1)
{
	if (!func_166(Global_2412474[iParam0 /*3*/], fParam1))
	{
		Global_2412474.f_162 = (Global_2412474.f_162 - 1);
		func_156(iParam0);
		if (Global_2412474.f_162 > Global_2412474.f_163)
		{
			func_155(iParam0, fParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_155(iParam0 + 1, fParam1);
	}
}

void func_156(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412474[iParam0 /*3*/] = { Global_2412474[iParam0 + 1 /*3*/] };
			Global_2412474.f_121[iParam0] = Global_2412474.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_157(vector3 vParam0, var uParam3, int iParam4)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { Global_2412474[iParam4 /*3*/] };
	uVar3 = Global_2412474.f_121[iParam4];
	Global_2412474[iParam4 /*3*/] = { vParam0 };
	Global_2412474.f_121[iParam4] = uParam3;
	if (iParam4 <= Global_2412474.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_157(vVar0, uVar3, iParam4 + 1);
		}
	}
}

int func_158(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	bool bVar5;
	float fVar6;
	float fVar7;

	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar5 = iVar0;
		if (func_85(bVar5))
		{
			vVar1 = { func_84(bVar5) };
			fVar7 = SYSTEM::VDIST(vParam0, vVar1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

bool func_159(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	bool bVar3;
	int iVar4;
	vector3 vVar5;
	bool bVar8;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam9 == 1 && UNK_0xD803B885F5E47A62() != bVar1) || iParam9 == 0)
		{
			if (func_1115(bVar1, bParam5, bParam6))
			{
				if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
				{
					if (!bParam8 || (!UNK_0xEB6A8945D1AC98A1(UNK_0x9539D44F3E4492F6(bVar1)) && func_80(bVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) != UNK_0x08067D4957B73C02(bVar1))) || UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1)
						{
							if (((UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1 && bParam10) && bParam7) && func_86(bVar1))
							{
							}
							else if (UNK_0xC844350D5D58C99A(UNK_0x9539D44F3E4492F6(bVar1)))
							{
								fVar2 = 0.1f;
								if (UNK_0x405E212DDE472467(UNK_0x9539D44F3E4492F6(bVar1), 0))
								{
									bVar3 = UNK_0x6937EA2286828455(UNK_0x9539D44F3E4492F6(bVar1), 0);
									if (UNK_0xC844350D5D58C99A(bVar3) && !UNK_0x437347B10A200C4B(bVar3, 0))
									{
										iVar4 = UNK_0x134B62B726CEC8E6(bVar3);
										vVar5 = { UNK_0x68F4C0EC296D3901(bVar3, false) };
										bVar8 = UNK_0xD9522BA9E27E1349(bVar3);
										if (func_160(vParam0, iParam3, iParam4, vVar5, bVar8, iVar4, 0))
										{
											return true;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_39(func_84(bVar1), vParam0, iParam3, iParam4, fVar2))
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

bool func_160(vector3 vParam0, bool bParam3, bool bParam4, vector3 vParam5, bool bParam8, int iParam9, bool bParam10)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;

	if (func_39(vParam0, vParam5, bParam8, iParam9, 1036831949 /* Float: 0.1f */))
	{
		return true;
	}
	func_41(bParam4, &vVar14, &vVar17, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	vVar20 = { 0f, vVar17.y, 0f };
	func_26(&vVar20, 0f, 0f, bParam3);
	vVar23 = { 0f, vVar14.y, 0f };
	func_26(&vVar23, 0f, 0f, bParam3);
	vVar26 = { (UNK_0x755FF954DAE327E1((vVar17.x - vVar14.x)) * 0.5f), 0f, 0f };
	func_26(&vVar26, 0f, 0f, bParam3);
	vVar1[0 /*3*/] = { vParam0 + vVar20 + vVar26 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * UNK_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar20 - vVar26 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * UNK_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar23 + vVar26 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * UNK_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar23 - vVar26 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * UNK_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_39(vVar1[iVar0 /*3*/], vParam5, bParam8, iParam9, 1036831949 /* Float: 0.1f */))
		{
			return true;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_160(vParam5, bParam8, iParam9, vParam0, bParam3, bParam4, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_161(vector3 vParam0, int iParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;

	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	bVar1 = UNK_0x83C1D4B63BBD91F6(vParam0, 30f, false, iVar0);
	if (UNK_0xC844350D5D58C99A(bVar1) && !UNK_0x437347B10A200C4B(bVar1, 0))
	{
		iVar2 = UNK_0x134B62B726CEC8E6(bVar1);
		vVar3 = { UNK_0x68F4C0EC296D3901(bVar1, false) };
		bVar6 = UNK_0xD9522BA9E27E1349(bVar1);
		if (func_160(vParam0, iParam3, iParam4, vVar3, bVar6, iVar2, 0))
		{
			return true;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	bVar1 = UNK_0x83C1D4B63BBD91F6(vParam0, 30f, false, iVar0);
	if (UNK_0xC844350D5D58C99A(bVar1) && !UNK_0x437347B10A200C4B(bVar1, 0))
	{
		iVar2 = UNK_0x134B62B726CEC8E6(bVar1);
		vVar3 = { UNK_0x68F4C0EC296D3901(bVar1, false) };
		bVar6 = UNK_0xD9522BA9E27E1349(bVar1);
		if (func_160(vParam0, iParam3, iParam4, vVar3, bVar6, iVar2, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_162(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_165(vParam0, iParam3, iParam4, iParam5, iParam6) || func_163(vParam0, iParam3, iParam4, iParam5, iParam7))
	{
		return true;
	}
	return false;
}

int func_163(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (!bParam5 == bVar0 || iParam6 == 1)
		{
			bVar2 = bVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_164(vParam0, iParam4, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_160(vParam0, iParam3, iParam4, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_1115(bVar2, 0, 1) && func_1115(bParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		bVar0++;
	}
	return 0;
}

bool func_164(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_46(bParam3, 1008981770 /* Float: 0.01f */);
	fVar1 = func_46(bParam7, 1008981770 /* Float: 0.01f */);
	fVar2 = SYSTEM::VDIST(vParam0, vParam4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return true;
	}
	return false;
}

int func_165(vector3 vParam0, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (!bParam5 == bVar0 || iParam6 == 1)
		{
			bVar1 = bVar0;
			if (func_1115(bVar1, 0, 1) && func_1115(bParam5, 0, 1))
			{
				if (Global_2417897.f_261[bVar0])
				{
					if (func_39(Global_2417897.f_131[bVar0 /*3*/], vParam0, bParam3, iParam4, 1036831949 /* Float: 0.1f */))
					{
						return 1;
					}
				}
				else if (func_39(func_84(bVar1), vParam0, bParam3, iParam4, 1036831949 /* Float: 0.1f */))
				{
					return 1;
				}
			}
			else if (Global_2417897.f_261[bVar0])
			{
				if (func_39(Global_2417897.f_131[bVar0 /*3*/], vParam0, bParam3, iParam4, 1036831949 /* Float: 0.1f */))
				{
					return 1;
				}
			}
			else if (func_1115(bVar1, 0, 0))
			{
				if (UNK_0xC844350D5D58C99A(UNK_0x9539D44F3E4492F6(bVar1)))
				{
					if (func_39(func_84(bVar1), vParam0, bParam3, iParam4, 1036831949 /* Float: 0.1f */))
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool func_166(vector3 vParam0, float fParam3)
{
	if (fParam3->f_18)
	{
		switch (fParam3->f_26)
		{
			case 0:
				if (func_150(vParam0, fParam3->f_19, fParam3->f_25, 0, 0))
				{
					return true;
				}
				break;
			case 1:
				if (func_65(vParam0, fParam3->f_19, fParam3->f_22, 0, 0))
				{
					return true;
				}
				break;
			case 2:
				if (UNK_0x0399732A9EBC368E(vParam0, fParam3->f_19, fParam3->f_22, fParam3->f_25, 0, true))
				{
					return true;
				}
				break;
		}
		return false;
	}
	return true;
}

Vector3 func_167(vector3 vParam0, bool bParam3, int iParam4, bool bParam5, vector3 vParam6, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;

	if (bParam15)
	{
		if (SYSTEM::VMAG(vParam6) > 0f)
		{
			if (!func_170(vParam0, *bParam3, vParam6))
			{
				*bParam3 = (*bParam3 + 180f);
			}
		}
		return vParam0;
	}
	UNK_0x968116EE0D84C042(vParam0, &uVar3, &iVar4);
	if (iVar4 & 1024 == 0 && !bParam10)
	{
		UNK_0xC05DA9D35DAF88FD(vParam0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, bParam9);
		if (iVar8 == iVar9)
		{
			*bParam12 = 1;
		}
		if (bParam14)
		{
			if (!iVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!iVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!iVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (UNK_0xAFB8495D36825275(bParam11) && func_169(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (bParam13 && *bParam12)
		{
			*bParam3 = (*bParam3 + 180f);
			if (*bParam3 > 360f)
			{
				*bParam3 = (*bParam3 + -360f);
			}
		}
		if (*bParam3 <= 90f || *bParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			bVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					bVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
				}
				else
				{
					bVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						bVar11 = (bVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					bVar11 = (bVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					bVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar9) * 0.5f));
				}
				else
				{
					bVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						bVar11 = (bVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					bVar11 = (bVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!iVar4 & 64 == 0)
			{
				bVar11 = (bVar11 + (0.95f * fVar10));
			}
			if (!iVar4 & 4 == 0 || !iVar4 & 8 == 0)
			{
				bVar11 = (bVar11 + -0.5f);
			}
			if ((!iVar4 & 32 == 0 && iVar4 & 4 == 0) && iVar4 & 8 == 0)
			{
				bVar11 = (bVar11 + -1f);
			}
			if (!bParam5 || !iVar4 & 8 == 0)
			{
				bVar11 = (bVar11 + (4.2f * -0.5f));
			}
			if (!bParam11 == 0)
			{
				if (iVar4 & 8 != 0)
				{
					fVar14 = func_168(bParam11, 3.5f);
				}
				else
				{
					fVar14 = func_168(bParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					bVar11 = (bVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(vParam6) > 0f)
	{
		if (!func_170(vParam0, *bParam3, vParam6))
		{
			if (bParam5 || ((iVar4 & 1024 != 0 || vParam0.z == 0f) && bParam10))
			{
				*bParam3 = (*bParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (bVar11 < 0f)
	{
		bVar11 = 0f;
	}
	vVar0 = { UNK_0x8A5E176FF719A014(vParam0, *bParam3, bVar11, 0f, 0f) };
	if (bParam5)
	{
		if (UNK_0x2E466A8362971293(vParam0, *bParam3, &vVar15))
		{
			vVar18 = { vVar15 - vParam0 };
			if (!bParam11 == 0)
			{
				vVar21 = { vVar18 / FtoV(SYSTEM::VMAG(vVar18)) };
				if (iVar4 & 8 != 0)
				{
					fVar14 = func_168(bParam11, 3.5f);
				}
				else
				{
					fVar14 = func_168(bParam11, 1.5f);
				}
				vVar21 = { vVar21 * FtoV((fVar14 * 0.5f)) };
				vVar18 = { vVar18 - vVar21 };
				vVar15 = { vParam0 + vVar18 };
			}
			vVar21 = { vVar0 - vVar15 };
			vVar0 = { vVar15 };
		}
	}
	return vVar0;
}

float func_168(bool bParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;

	func_41(bParam0, &fVar0, &fVar3, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

bool func_169(vector3 vParam0)
{
	float fVar0;

	if (UNK_0xE82754C349C7B581(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return true;
		}
	}
	return false;
}

bool func_170(vector3 vParam0, bool bParam3, vector3 vParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { 0f, 1f, 0f };
	func_26(&vVar0, 0f, 0f, bParam3);
	vVar3 = { vParam4 - vParam0 };
	if (func_22(vVar3, vVar0) >= 0f)
	{
		return true;
	}
	return false;
}

bool func_171(vector3 vParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = func_37(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412181[iVar1])
	{
		if (func_36(vParam0, &(Global_2411478[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412181[8])
	{
		if (func_36(vParam0, &(Global_2411478[8 /*78*/][iVar0 /*7*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_172(int iParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (Global_2405072.f_26.f_18)
	{
		switch (Global_2405072.f_26.f_17)
		{
			case 0:
				if (func_150(*iParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			case 1:
				if (func_65(*iParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			case 2:
				if (UNK_0x0399732A9EBC368E(*iParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, 0, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*iParam0 = { func_27(*iParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, Global_2405072.f_26.f_17, 1036831949 /* Float: 0.1f */, 0) };
			}
		}
	}
	return bVar0;
}

int func_173(int iParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	float fVar13;
	int iVar14;
	vector3 vVar15;
	var uVar18;

	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(fParam2->f_35) > 0f)
		{
			fParam2->f_35 = { *iParam0 };
		}
		if (fParam2->f_15)
		{
			if (func_50(fParam2->f_35, iParam0, &(fParam2->f_38), &(fParam2->f_45), 1, 1))
			{
				fParam2->f_6 = 9999.9f;
				fParam2->f_7 = 9999.9f;
			}
		}
		if (fParam2->f_48)
		{
			if (func_172(iParam0, 1))
			{
				fParam2->f_6 = 9999.9f;
				fParam2->f_7 = 9999.9f;
			}
		}
		if (iParam0->f_2 < -80f)
		{
			fParam2->f_6 = 9999.9f;
			fParam2->f_7 = 9999.9f;
		}
		Global_2412474.f_162 = 0;
		Global_2412474.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2412474[iVar6 /*3*/] = { 0f, 0f, 0f };
			Global_2412474.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_174(*iParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_1746)
		{
			iVar1 = Global_2405072.f_2152[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405072.f_1747[iVar1 /*4*/] };
				uVar5 = Global_2405072.f_1747[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar2) > 0f)
				{
					if ((fParam2->f_57 && SYSTEM::VDIST(vVar2, fParam2->f_35) > fParam2->f_4) || fParam2->f_57 == 0)
					{
						if ((fParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, fParam2->f_35, fParam2->f_35.f_1, 0f) < fParam2->f_5) || fParam2->f_5 <= 0f)
						{
							if ((fParam2->f_12 && !func_162(vVar2, uVar5, fParam2->f_34, UNK_0xD803B885F5E47A62(), 0, fParam2->f_56)) || !fParam2->f_12)
							{
								if (!fParam2->f_15 || !func_50(fParam2->f_35, &vVar2, &(fParam2->f_38), &(fParam2->f_45), 0, 1))
								{
									if (fParam2->f_8)
									{
										bVar7 = fParam2->f_31;
										iVar8 = 1;
										bVar9 = true;
										bVar10 = fParam2->f_49;
										if (!fParam2->f_55)
										{
											bVar7 = false;
											iVar8 = 0;
											bVar9 = false;
											bVar10 = 1f;
										}
										else if (fParam2->f_17)
										{
											bVar7 = false;
											iVar8 = 0;
											bVar9 = false;
											if (fParam2->f_33 == 1)
											{
												bVar10 = (bVar10 * 0.375f);
											}
										}
										else
										{
											iVar8 = 1;
											bVar9 = true;
											if (fParam2->f_28)
											{
												if (fParam2->f_33 == 1)
												{
													bVar10 = (bVar10 * 0.375f);
												}
											}
										}
										bVar11 = false;
										if (!func_161(vVar2, uVar5, fParam2->f_34))
										{
											if (fParam2->f_3 > 7f)
											{
												if (func_178(vVar2, 6f, 1f, 1f, 5f, bVar7, iVar8, bVar9, bVar10, fParam2->f_58, -1, 1, fParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_178(vVar2, 6f, 1f, 1f, 5f, bVar7, iVar8, bVar9, bVar10, fParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_159(vVar2, uVar5, fParam2->f_34, 1, 1, 0, 0, fParam2->f_58, 0))
											{
												bVar11 = true;
											}
										}
										if (bVar11)
										{
											if ((fParam2->f_29 || fParam2->f_30) || fParam2->f_52)
											{
												fVar13 = 0f;
												if (fParam2->f_52)
												{
													iVar12 = func_158(vVar2, fParam2->f_54, &fVar13);
												}
												if (!fParam2->f_52 || (fParam2->f_52 && iVar12 <= fParam2->f_53))
												{
													if (fParam2->f_52)
													{
														if (iVar12 < fParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2412474.f_162)
															{
																Global_2412474[iVar6 /*3*/] = { 0f, 0f, 0f };
																Global_2412474.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2412474.f_162 = 0;
															fParam2->f_53 = iVar12;
														}
													}
													if (fParam2->f_30)
													{
														if (Global_2412474.f_162 == 0)
														{
															Global_2412474[0 /*3*/] = { vVar2 };
															Global_2412474.f_121[0] = uVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2412474.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (SYSTEM::VDIST2(vVar2, fParam2->f_35) < SYSTEM::VDIST2(Global_2412474[iVar6 /*3*/], fParam2->f_35))
																	{
																		func_157(vVar2, uVar5, iVar6);
																		iVar6 = Global_2412474.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 5)
														{
															if ((fParam2->f_52 && fParam2->f_53 == 0) || fParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
													else
													{
														Global_2412474[Global_2412474.f_162 /*3*/] = { vVar2 };
														Global_2412474.f_121[Global_2412474.f_162] = uVar5;
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 10)
														{
															if ((fParam2->f_52 && fParam2->f_53 == 0) || fParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
												}
											}
											else
											{
												*iParam0 = { vVar2 };
												*uParam1 = uVar5;
												return 1;
											}
										}
									}
									else
									{
										*iParam0 = { vVar2 };
										*uParam1 = uVar5;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2412474.f_162 > 0)
		{
			if (fParam2->f_30)
			{
				*iParam0 = { Global_2412474[0 /*3*/] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
				{
					func_155(0, fParam2);
				}
				iVar14 = UNK_0x09AC81E49EA267F7(false, Global_2412474.f_162);
				vVar15 = { Global_2412474[0 /*3*/] };
				uVar18 = Global_2412474.f_121[0];
				Global_2412474[0 /*3*/] = { Global_2412474[iVar14 /*3*/] };
				Global_2412474.f_121[0] = Global_2412474.f_121[iVar14];
				Global_2412474[iVar14 /*3*/] = { vVar15 };
				Global_2412474.f_121[iVar14] = uVar18;
				*iParam0 = { Global_2412474[0 /*3*/] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
		}
		else
		{
			fParam2->f_33++;
			if (fParam2->f_33 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_174(vector3 vParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = -1f;
	while (iVar2 < Global_2405072.f_1746)
	{
		iVar1 = func_175(vParam0, fVar0, &fVar0);
		Global_2405072.f_2152[iVar2] = iVar1;
		iVar2++;
	}
}

int func_175(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405072.f_1746)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_2405072.f_1747[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

bool func_176(int iParam0)
{
	return iParam0 == 50;
}

void func_177(float fParam0, float fParam1)
{
	UNK_0x8A1BBF3B7D62C45F(fParam0, fParam1, 0.1f);
	Global_2405072.f_2466 = UNK_0x0D0A574C76D769AC();
	Global_2405072.f_2464 = 1;
	Global_2405072.f_2467 = UNK_0x2B6E0A53779D29EA();
}

bool func_178(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)
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
		if (func_133(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return false;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_120(vParam0, fParam6, bParam7, bParam9, bParam10, bParam11, bParam12, bParam16, bParam17))
			{
				return false;
			}
		}
	}
	Global_2405072.f_2++;
	return true;
}

void func_179()
{
	func_184();
	func_183();
	func_182();
	func_181();
	func_180();
}

void func_180()
{
	struct<10> Var0;
	int iVar10;

	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 128)
	{
		Global_2408006[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_181()
{
	struct<10> Var0;
	int iVar10;

	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2405072.f_2483.f_90[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_182()
{
	struct<4> Var0;
	int iVar4;

	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2405072.f_2483.f_57[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_183()
{
	struct<10> Var0;
	int iVar10;

	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 5)
	{
		Global_2405072.f_2483.f_6[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_184()
{
	struct<6> Var0;

	Var0.f_3 = -1;
	Global_2405072.f_2483 = { Var0 };
}

void func_185()
{
	if (Global_2405072.f_2464)
	{
		if (UNK_0x0D0A574C76D769AC() == Global_2405072.f_2466)
		{
			UNK_0xDA46A23FFDBCF876();
		}
		else
		{
			UNK_0xDA46A23FFDBCF876();
		}
		Global_2405072.f_2464 = 0;
	}
}

int func_186(bool bParam0)
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

Vector3 func_187()
{
	return Local_176.f_38[Local_176.f_36 /*3*/];
}

void func_188()
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = 0;
	bVar1 = false;
	if (Local_176 != 4)
	{
		bLocal_431 = false;
		while (bLocal_431 < UNK_0x54EABC0DD106045B())
		{
			if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bLocal_431)))
			{
				bVar2 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(bLocal_431));
				if (func_1115(bVar2, 1, 1))
				{
				}
				if (!UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, true))
				{
					if (UNK_0xEAE0D21A50E6C7F4(Local_236[bLocal_431 /*6*/].f_1, 2))
					{
						if (Local_176.f_37 != bVar2)
						{
							Local_176.f_37 = bVar2;
						}
					}
				}
				if (!UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, true))
				{
					if (Local_236[bLocal_431 /*6*/].f_5 > 0)
					{
						iVar0 = (iVar0 + Local_236[bLocal_431 /*6*/].f_5);
					}
				}
				if (!UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, 4))
				{
					if (UNK_0xEAE0D21A50E6C7F4(Local_236[bLocal_431 /*6*/].f_1, 5))
					{
						UNK_0x5D96D8530B3D0904(&(Local_176.f_1), 4);
						Local_176.f_35 = bVar2;
					}
				}
				if (!UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, 2))
				{
					if (!bVar1)
					{
						if (((UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, true) || UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, 3)) || UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, 4)) || UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, 5))
						{
							if (!UNK_0xEAE0D21A50E6C7F4(Local_236[bLocal_431 /*6*/].f_1, 4))
							{
								bVar1 = true;
							}
						}
						else
						{
							bVar1 = true;
						}
					}
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, 5))
			{
				if (Local_176.f_33 > -1)
				{
					if (bLocal_431 == Local_176.f_33)
					{
						UNK_0x5D96D8530B3D0904(&(Local_176.f_1), 5);
					}
				}
			}
			bLocal_431++;
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, true))
		{
			iVar0 = (iVar0 + Local_176.f_6);
			if (iVar0 >= func_189())
			{
				UNK_0x5D96D8530B3D0904(&(Local_176.f_1), true);
			}
			if (Local_176.f_5 != iVar0)
			{
				if (Local_176.f_5 < iVar0)
				{
					Local_176.f_5 = iVar0;
				}
				else if (Local_176.f_6 != (Local_176.f_5 - iVar0))
				{
					Local_176.f_6 = (Local_176.f_5 - iVar0);
				}
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, 2))
		{
			if (!bVar1)
			{
				UNK_0x5D96D8530B3D0904(&(Local_176.f_1), 2);
			}
		}
	}
}

int func_189()
{
	return Global_262145.f_12504;
}

bool func_190()
{
	int iVar0;
	int iVar1;

	if (func_194() != -1)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_193(Local_176.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				iVar1 = UNK_0x09AC81E49EA267F7(false, 20);
				if (func_191(iVar1))
				{
					Local_176.f_38[iVar0 /*3*/] = { vLocal_742[iVar1 /*3*/] };
					vLocal_742[iVar1 /*3*/] = { 0f, 0f, 0f };
				}
			}
			iVar0++;
		}
	}
	else
	{
		return false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_193(Local_176.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_191(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_193(vLocal_742[iParam0 /*3*/], 0f, 0f, 0f, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 < iParam0)
		{
			if (!func_193(Local_176.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				fVar1 = UNK_0x0EB28750412C3A5A(Local_176.f_38[iVar0 /*3*/], vLocal_742[iParam0 /*3*/], 1);
				if (fVar1 < func_192())
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

float func_192()
{
	return SYSTEM::TO_FLOAT(Global_262145.f_12505);
}

bool func_193(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_194()
{
	int iVar0;

	if (Local_176.f_48 != -1)
	{
		return Local_176.f_48;
	}
	iVar0 = UNK_0x09AC81E49EA267F7(false, 4);
	if (!func_196(iVar0))
	{
		Local_176.f_48 = iVar0;
		func_195();
	}
	return Local_176.f_48;
}

void func_195()
{
	switch (Local_176.f_48)
	{
		case 0:
			vLocal_742[0 /*3*/] = { 959.4771f, -1673.839f, 29.0562f };
			vLocal_742[1 /*3*/] = { 711.3848f, -1230.569f, 25.5556f };
			vLocal_742[2 /*3*/] = { 282.5148f, -217.2699f, 62.4801f };
			vLocal_742[3 /*3*/] = { 388.7341f, -356.1966f, 47.023f };
			vLocal_742[4 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			vLocal_742[5 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			vLocal_742[6 /*3*/] = { 175.7449f, 557.355f, 179.142f };
			vLocal_742[7 /*3*/] = { 1061.679f, 214.6577f, 83.9904f };
			vLocal_742[8 /*3*/] = { 768.462f, 1279.458f, 359.2967f };
			vLocal_742[9 /*3*/] = { 2590.469f, 486.6694f, 107.69f };
			vLocal_742[10 /*3*/] = { 2820.659f, -760.044f, 1.4262f };
			vLocal_742[11 /*3*/] = { 1169.637f, -1382.508f, 33.7916f };
			vLocal_742[12 /*3*/] = { 1590.301f, -1691.78f, 87.103f };
			vLocal_742[13 /*3*/] = { 857.6887f, -2497.098f, 27.3195f };
			vLocal_742[14 /*3*/] = { 1292.737f, -3097.068f, 4.9066f };
			vLocal_742[15 /*3*/] = { 590.4111f, -2902.535f, 5.2464f };
			vLocal_742[16 /*3*/] = { 491.5606f, -2122.398f, 4.9175f };
			vLocal_742[17 /*3*/] = { 210.1278f, -937.7384f, 23.1416f };
			vLocal_742[18 /*3*/] = { 483.4742f, -1480.009f, 28.2904f };
			vLocal_742[19 /*3*/] = { 2288.854f, 1727.706f, 67.0398f };
			break;
		case 1:
			vLocal_742[0 /*3*/] = { -884.5568f, -2477.55f, 12.9877f };
			vLocal_742[1 /*3*/] = { -81.4004f, -2707.403f, 5.4398f };
			vLocal_742[2 /*3*/] = { -176.0256f, -633.2856f, 47.9812f };
			vLocal_742[3 /*3*/] = { -777.4452f, 20.5786f, 39.6541f };
			vLocal_742[4 /*3*/] = { -2333.458f, 237.6722f, 168.602f };
			vLocal_742[5 /*3*/] = { -1096.042f, -323.1984f, 36.8237f };
			vLocal_742[6 /*3*/] = { -822.8544f, -1222.888f, 6.3704f };
			vLocal_742[7 /*3*/] = { -590.8558f, -911.0305f, 22.8747f };
			vLocal_742[8 /*3*/] = { -110.7806f, 356.4308f, 111.6961f };
			vLocal_742[9 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			vLocal_742[10 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			vLocal_742[11 /*3*/] = { -255.1383f, -1543.092f, 30.9032f };
			vLocal_742[12 /*3*/] = { -1659.014f, 235.419f, 61.391f };
			vLocal_742[13 /*3*/] = { -3276.446f, 967.604f, 7.3522f };
			vLocal_742[14 /*3*/] = { -1997.696f, -257.592f, 28.0968f };
			vLocal_742[15 /*3*/] = { -388.8625f, -2282.671f, 6.6082f };
			vLocal_742[16 /*3*/] = { -1048.599f, -1120.179f, 1.1586f };
			vLocal_742[17 /*3*/] = { -287.5583f, 11.2136f, 53.7525f };
			vLocal_742[18 /*3*/] = { -481.1961f, 1101.528f, 324.8545f };
			vLocal_742[19 /*3*/] = { -1521.989f, 1493.556f, 110.593f };
			break;
		case 2:
			vLocal_742[0 /*3*/] = { -1585.629f, 2084.206f, 71.3231f };
			vLocal_742[1 /*3*/] = { -2188.034f, 4249.606f, 47.9395f };
			vLocal_742[2 /*3*/] = { -685.67f, 5794.155f, 16.331f };
			vLocal_742[3 /*3*/] = { -329.5496f, 6150.002f, 31.3133f };
			vLocal_742[4 /*3*/] = { -275.9802f, 6637.051f, 6.4552f };
			vLocal_742[5 /*3*/] = { -800.4709f, 5392.421f, 33.4985f };
			vLocal_742[6 /*3*/] = { -59.013f, 4416.56f, 55.8893f };
			vLocal_742[7 /*3*/] = { -207.2786f, 3658.027f, 50.7524f };
			vLocal_742[8 /*3*/] = { -596.9946f, 2091.172f, 130.4128f };
			vLocal_742[9 /*3*/] = { -2080.822f, 2608.639f, 2.089f };
			vLocal_742[10 /*3*/] = { -1622.297f, 3191.923f, 29.2567f };
			vLocal_742[11 /*3*/] = { -1098.166f, 2725.338f, 17.8007f };
			vLocal_742[12 /*3*/] = { -31.1729f, 1953.42f, 189.1861f };
			vLocal_742[13 /*3*/] = { -281.9674f, 2847.181f, 52.8867f };
			vLocal_742[14 /*3*/] = { -1633.186f, 4736.728f, 52.2963f };
			vLocal_742[15 /*3*/] = { -520.748f, 5307.176f, 79.2448f };
			vLocal_742[16 /*3*/] = { 50.1324f, 7117.781f, 2.1957f };
			vLocal_742[17 /*3*/] = { 163.8223f, 6654.26f, 30.5682f };
			vLocal_742[18 /*3*/] = { 59.0807f, 6310.772f, 30.3764f };
			vLocal_742[19 /*3*/] = { -1901.756f, 1911.103f, 165.2867f };
			break;
		case 3:
			vLocal_742[0 /*3*/] = { 721.9799f, 2314.477f, 49.4146f };
			vLocal_742[1 /*3*/] = { 376.9765f, 2628.43f, 43.6444f };
			vLocal_742[2 /*3*/] = { 1535.214f, 6597.865f, 2.1543f };
			vLocal_742[3 /*3*/] = { 2446.757f, 4963.825f, 45.5766f };
			vLocal_742[4 /*3*/] = { 2467.821f, 4080.605f, 37.0648f };
			vLocal_742[5 /*3*/] = { 1648.711f, 3811.429f, 37.6556f };
			vLocal_742[6 /*3*/] = { 1297.271f, 4342.019f, 40.3207f };
			vLocal_742[7 /*3*/] = { 1541.145f, 6335.578f, 23.0751f };
			vLocal_742[8 /*3*/] = { 2014.187f, 4721.405f, 40.609f };
			vLocal_742[9 /*3*/] = { 3800.848f, 4475.054f, 4.9977f };
			vLocal_742[10 /*3*/] = { 2661.859f, 3467.084f, 54.8171f };
			vLocal_742[11 /*3*/] = { 430.2967f, 6467.513f, 27.7718f };
			vLocal_742[12 /*3*/] = { 2930.072f, 4623.018f, 47.7272f };
			vLocal_742[13 /*3*/] = { 2973.685f, 3480.115f, 70.4423f };
			vLocal_742[14 /*3*/] = { 1989.081f, 3781.611f, 31.1808f };
			vLocal_742[15 /*3*/] = { 908.6296f, 3648.458f, 35.1522f };
			vLocal_742[16 /*3*/] = { 1560.581f, 2167.013f, 77.7169f };
			vLocal_742[17 /*3*/] = { 1230.12f, 2742.618f, 37.0054f };
			vLocal_742[18 /*3*/] = { 2545.243f, 2588.249f, 36.9449f };
			vLocal_742[19 /*3*/] = { 260.401f, 3180.358f, 41.6992f };
			break;
	}
}

bool func_196(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_12447;
		case 1:
			return Global_262145.f_12448;
		case 2:
			return Global_262145.f_12446;
		case 3:
			return Global_262145.f_12445;
		default:
			break;
	}
	return false;
}

bool func_197(var uParam0)
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

void func_198(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (UNK_0xBFF81ED3B99522C7())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_199()
{
	func_201();
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_430, 9))
	{
		return;
	}
	if (func_1005())
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_430, false))
		{
			UNK_0x7352ACF3368DF65F("DisableFlightMusic", 1);
			UNK_0x7352ACF3368DF65F("WantedMusicDisabled", 1);
			UNK_0x5D96D8530B3D0904(&bLocal_430, false);
		}
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_430, true))
		{
			if (UNK_0xC92DB9682A650680("BG_SIGHTSEER_START"))
			{
				UNK_0x5D96D8530B3D0904(&bLocal_430, true);
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_430, true))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_430, 3))
			{
				if (Local_176.f_5 == 1)
				{
					if (UNK_0xC92DB9682A650680("BG_SIGHTSEER_MID"))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_430, 3);
					}
				}
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_430, 3))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_430, 4))
			{
				if (Local_176.f_5 == 2)
				{
					if (UNK_0xC92DB9682A650680("BG_SIGHTSEER_FINAL"))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_430, 4);
					}
				}
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, true) || UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, 4))
		{
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_430, 4))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_430, 6))
				{
					if (UNK_0xC92DB9682A650680("BG_SIGHTSEER_STOP"))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_430, 6);
						UNK_0x5D96D8530B3D0904(&bLocal_430, 2);
						UNK_0x7352ACF3368DF65F("DisableFlightMusic", 0);
						UNK_0x7352ACF3368DF65F("WantedMusicDisabled", 0);
					}
				}
			}
		}
	}
	if (func_411())
	{
		if (func_200(UNK_0xD803B885F5E47A62(), 20))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_430, false))
			{
				UNK_0x7352ACF3368DF65F("DisableFlightMusic", 1);
				UNK_0x7352ACF3368DF65F("WantedMusicDisabled", 1);
				UNK_0x5D96D8530B3D0904(&bLocal_430, false);
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_430, 7))
			{
				if (UNK_0xC92DB9682A650680("BG_SIGHTSEER_START_ATTACK"))
				{
					UNK_0x5D96D8530B3D0904(&bLocal_430, 7);
				}
			}
			if (UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, true) || UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, 4))
			{
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_430, 7))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_430, 6))
					{
						if (UNK_0xC92DB9682A650680("BG_SIGHTSEER_STOP"))
						{
							UNK_0x5D96D8530B3D0904(&bLocal_430, 6);
							UNK_0x5D96D8530B3D0904(&bLocal_430, 2);
							UNK_0x7352ACF3368DF65F("DisableFlightMusic", 0);
							UNK_0x7352ACF3368DF65F("WantedMusicDisabled", 0);
						}
					}
				}
			}
		}
	}
}

bool func_200(bool bParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_11.f_4, bParam1);
}

void func_201()
{
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_430, 8))
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_430, 9))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_430, 10))
			{
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_430, 11))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_430, 12))
					{
						UNK_0xBEF52C1D400C0A44(1);
						UNK_0x7352ACF3368DF65F("AllowScoreAndRadio", 0);
					}
				}
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_430, 15))
				{
					if (UNK_0xC92DB9682A650680("APT_COUNTDOWN_30S_KILL"))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_430, 15);
					}
				}
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_430, 15))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_430, 13))
					{
						if (UNK_0xC92DB9682A650680("APT_FADE_IN_RADIO"))
						{
							UNK_0x5D96D8530B3D0904(&bLocal_430, 13);
						}
					}
					if (UNK_0xEAE0D21A50E6C7F4(bLocal_430, 13))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_430, 10);
					}
				}
			}
		}
	}
}

void func_202()
{
	vector3 vVar0;
	bool bVar3;

	if (!func_1005() && !func_411())
	{
		return;
	}
	if (Local_176.f_34 > -1)
	{
		bVar3 = UNK_0x117658E336116132(Local_176.f_34);
		if (UNK_0x40B8C182D63932FC(bVar3))
		{
			vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bVar3), false) };
		}
	}
	if (!func_193(vVar0, 0f, 0f, 0f, 0))
	{
		func_203(142, vVar0, &uLocal_810, 1140457472 /* Float: 500f */, 1144750080 /* Float: 750f */, 0);
	}
}

void func_203(int iParam0, vector3 vParam1, int iParam4, float fParam5, float fParam6, bool bParam7)
{
	float fVar0;
	float fVar1;

	if ((((func_138(UNK_0xD803B885F5E47A62()) && !func_257(UNK_0xD803B885F5E47A62())) && !UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, 8)) && (func_256(UNK_0xD803B885F5E47A62()) || func_255(UNK_0xD803B885F5E47A62()))) || func_122(vParam1))
	{
		return;
	}
	Global_1674347 = { vParam1 };
	fVar0 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vParam1);
	func_251(iParam0, fVar0);
	if (UNK_0x798A3F1296751F46() && UNK_0x8BB17FEBE0394018() == 15)
	{
		if (func_250(UNK_0xD803B885F5E47A62()) || func_248(UNK_0xD803B885F5E47A62()))
		{
			if (!UNK_0x70305AA977EFE679(1344549371))
			{
				UNK_0x8134AB7E30C9809E(1344549371);
			}
		}
		else if (UNK_0x70305AA977EFE679(1344549371))
		{
			UNK_0x64366F76B4845277(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!(func_247(UNK_0xD803B885F5E47A62(), 21) || func_247(UNK_0xD803B885F5E47A62(), 25)))
		{
			func_246(vParam1, 1, 0);
		}
		if (!*iParam4 && func_1115(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			*iParam4 = 1;
			if (func_245(iParam0))
			{
				UNK_0x51B096AAC60548C1(func_244(iParam0));
				if (func_243(iParam0, -1))
				{
					UNK_0x34D79252800B23FF(0);
					if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
					{
						UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 1);
						UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 1);
					}
					UNK_0x5D96D8530B3D0904(&(Global_1674347.f_3), false);
				}
			}
			if (func_242(iParam0))
			{
				fVar1 = func_241(iParam0);
				if (fVar1 != 1f)
				{
					func_238(fVar1);
					UNK_0x5D96D8530B3D0904(&(Global_1674347.f_3), true);
				}
			}
			if (!Global_2391045)
			{
				if (func_237(iParam0) && func_250(UNK_0xD803B885F5E47A62()))
				{
					func_235(1);
					func_234(2);
				}
			}
			func_233(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_200(UNK_0xD803B885F5E47A62(), 19))
			{
				func_232(19);
			}
		}
		if (*iParam4 && func_1115(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			*iParam4 = 0;
			if (func_245(iParam0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, false))
				{
					UNK_0x51B096AAC60548C1(1f);
					UNK_0x34D79252800B23FF(5);
					UNK_0x0674E58A79778E99(&(Global_1674347.f_3), false);
				}
			}
			if (func_242(iParam0))
			{
				func_231();
				UNK_0x0674E58A79778E99(&(Global_1674347.f_3), true);
			}
			if (bParam7 && !func_138(UNK_0xD803B885F5E47A62()))
			{
				if (func_230(UNK_0xD803B885F5E47A62()) != 152)
				{
					func_206();
				}
			}
			if (func_205(2))
			{
				func_235(0);
				func_204(2);
			}
		}
	}
}

void func_204(bool bParam0)
{
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_45), bParam0);
}

bool func_205(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_45, bParam0);
}

void func_206()
{
	UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_24), &Global_2409327, 2);
	UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_26), &Global_2409329, 19);
	func_228();
	func_209(1, 1, 0);
	func_207();
}

void func_207()
{
	func_208(0, 0);
}

void func_208(int iParam0, int iParam1)
{
	Global_2405072.f_22 = iParam0;
	Global_2405072.f_23 = iParam1;
}

void func_209(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_45), &Global_2409348, 320);
	}
	else
	{
		Global_2405072.f_45 = { Global_2409348 };
		Global_2405072.f_45.f_49 = { Global_2409348.f_49 };
		Global_2405072.f_45.f_52 = Global_2409348.f_52;
		Global_2405072.f_45.f_53 = Global_2409348.f_53;
	}
	if (bParam0)
	{
		func_227();
	}
	if (!bParam2)
	{
		func_212(0, 1, 0, 1060320051 /* Float: 0.7f */, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1088421888 /* Float: 7f */, 1084227584 /* Float: 5f */, 0, 1066192077 /* Float: 1.1f */, 0, 0, 1, 0, 1109393408 /* Float: 40f */);
	}
	func_211(0);
	func_210();
}

void func_210()
{
	struct<6> Var0;

	if (Global_2405072.f_487.f_1 == UNK_0x0D0A574C76D769AC())
	{
		Global_2405072.f_487 = { Var0 };
	}
}

void func_211(bool bParam0)
{
	if (bParam0)
	{
		Global_2405072.f_705 = 0;
	}
	else
	{
		Global_2405072.f_705 = 1;
	}
}

void func_212(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_226())
		{
			func_225();
		}
		Global_2405072.f_706.f_518 = UNK_0x0D0A574C76D769AC();
		Global_2405072.f_706.f_504 = iParam1;
		Global_2405072.f_706.f_505 = iParam2;
		Global_2405072.f_706.f_506 = iParam10;
		func_223();
		func_216(8, 0, 0, 0, 0);
		Global_2405072.f_706.f_507 = iParam11;
		Global_2405072.f_706.f_512 = iParam3;
		Global_2405072.f_706.f_513 = iParam4;
		Global_2405072.f_706.f_510 = iParam5;
		Global_2405072.f_706.f_511 = iParam6;
		Global_2405072.f_706.f_514 = iParam7;
		Global_2405072.f_706.f_515 = iParam8;
		Global_2405072.f_706.f_516 = iParam9;
		Global_2405072.f_706.f_517 = iParam14;
		Global_2405072.f_706.f_508 = iParam12;
		Global_2405072.f_706.f_509 = iParam13;
		Global_2405072.f_1745 = 1;
	}
	else
	{
		func_213();
	}
}

void func_213()
{
	if (func_226() && !func_215())
	{
		func_225();
	}
	if (func_215())
	{
		func_214();
	}
	else
	{
		func_223();
		func_216(0, 0, 0, 0, 0);
		Global_2405072.f_1745 = 0;
		Global_2405072.f_1744 = 0;
	}
}

void func_214()
{
	UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_706), &(Global_2405072.f_1225), 519);
	Global_2405072.f_487 = { Global_2405072.f_493 };
	if (UNK_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518)
	{
		Global_2405072.f_1744 = 0;
	}
}

bool func_215()
{
	if ((Global_2405072.f_1744 && !UNK_0x0D0A574C76D769AC() == Global_2405072.f_1225.f_518) && UNK_0x1727A44C562FBED2(Global_2405072.f_1225.f_518))
	{
		return true;
	}
	return false;
}

void func_216(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2439138.f_1894.f_703.f_16 != func_32())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[Global_2439138.f_1894.f_703.f_16 /*421*/].f_404, false) && func_217())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412642 = 0;
	}
	Global_2405072.f_487 = iParam0;
	Global_2405072.f_487.f_1 = UNK_0x0D0A574C76D769AC();
	Global_2405072.f_487.f_2 = iParam1;
	Global_2405072.f_487.f_3 = iParam2;
	Global_2405072.f_487.f_4 = iParam3;
	Global_2405072.f_487.f_5 = iParam4;
}

bool func_217()
{
	if ((((((func_230(UNK_0xD803B885F5E47A62()) == 229 || func_230(UNK_0xD803B885F5E47A62()) == 191) || func_222()) || func_221()) || func_220(UNK_0xD803B885F5E47A62())) || Global_2513890.f_226 == 1) || (Global_2405072.f_1745 && func_218(UNK_0xD803B885F5E47A62())))
	{
		return false;
	}
	return true;
}

int func_218(int iParam0)
{
	if (func_256(iParam0))
	{
		return 1;
	}
	if (func_219(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_219(bool bParam0)
{
	return func_200(bParam0, 20);
}

bool func_220(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (!UNK_0x8CD06866876216F2())
	{
		return false;
	}
	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		return Global_2513889;
	}
	else
	{
		bVar0 = UNK_0x9539D44F3E4492F6(bParam0);
		if (UNK_0xC844350D5D58C99A(bVar0))
		{
			iVar1 = UNK_0x134B62B726CEC8E6(bVar0);
			if (iVar1 == joaat("MP_M_FREEMODE_01") || iVar1 == joaat("MP_F_FREEMODE_01"))
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_221()
{
	return Global_1574405;
}

bool func_222()
{
	if (Global_4456448 == 6)
	{
		return true;
	}
	return false;
}

void func_223()
{
	if (func_226() && !func_215())
	{
		func_225();
	}
	func_224();
	Global_2405072.f_706 = 0;
}

void func_224()
{
	int iVar0;
	struct<5> Var1;

	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405072.f_706.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_225()
{
	if (func_215())
	{
		if (Global_2405072.f_706.f_518 == Global_2405072.f_1225.f_518)
		{
			return;
		}
	}
	if (!UNK_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518)
	{
		UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_1225), &(Global_2405072.f_706), 519);
		Global_2405072.f_493 = { Global_2405072.f_487 };
		Global_2405072.f_1744 = 1;
	}
}

bool func_226()
{
	if ((Global_2405072.f_1745 && !UNK_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518) && UNK_0x1727A44C562FBED2(Global_2405072.f_706.f_518))
	{
		return true;
	}
	return false;
}

void func_227()
{
	UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_365), &Global_2409668, 121);
}

void func_228()
{
	func_229();
	Global_2405072.f_2254 = 0;
}

void func_229()
{
	int iVar0;
	struct<4> Var1;

	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405072.f_2255[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_230(bool bParam0)
{
	if (func_137(bParam0, 0))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

void func_231()
{
	if (UNK_0x1727A44C562FBED2(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == UNK_0x0D0A574C76D769AC() && Global_2537071.f_5119 < 1f)
		{
			return;
		}
	}
	Global_2537071.f_5120 = -1;
	Global_2537071.f_5119 = 1f;
}

void func_232(bool bParam0)
{
	UNK_0x0674E58A79778E99(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_4), bParam0);
}

void func_233(bool bParam0)
{
	UNK_0x5D96D8530B3D0904(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_4), bParam0);
}

void func_234(bool bParam0)
{
	UNK_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_45), bParam0);
}

void func_235(int iParam0)
{
	if (func_236() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_236()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

bool func_237(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return true;
		default:
			break;
	}
	return false;
}

void func_238(float fParam0)
{
	bool bVar0;

	if (UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) == func_239())
	{
		return;
	}
	bVar0 = (Global_2537071.f_5119 - fParam0);
	if (UNK_0x1727A44C562FBED2(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == UNK_0x0D0A574C76D769AC() && UNK_0x755FF954DAE327E1(bVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2537071.f_5119 = fParam0;
	Global_2537071.f_5120 = UNK_0x0D0A574C76D769AC();
}

int func_239()
{
	switch (func_63())
	{
		case 0:
			return func_240();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_240()
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

float func_241(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0f;
		default:
			break;
	}
	return 1f;
}

bool func_242(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return true;
		default:
			break;
	}
	return false;
}

bool func_243(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return true;
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return true;
			}
			break;
		case 170:
		case 166:
		case 173:
			return true;
		case 179:
		case 183:
		case 181:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return true;
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return true;
			}
			break;
	}
	return false;
}

float func_244(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		case 144:
			return 0f;
		case 185:
			return 0f;
		default:
			break;
	}
	return 1f;
}

bool func_245(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return true;
		default:
			break;
	}
	return false;
}

void func_246(vector3 vParam0, int iParam3, int iParam4)
{
	Global_2405072.f_45.f_49 = { vParam0 };
	Global_2405072.f_45.f_52 = iParam3;
	Global_2405072.f_45.f_53 = iParam4;
}

bool func_247(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_208, bParam1);
}

bool func_248(bool bParam0)
{
	if (func_249(bParam0))
	{
		if (func_250(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_249(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_32())
		{
			return Global_1628237[bParam0 /*615*/].f_11 == bParam0;
		}
	}
	return false;
}

bool func_250(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return func_200(bParam0, 9);
	}
	return false;
}

void func_251(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = func_254(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_252();
	}
}

void func_252()
{
	if (!func_253(UNK_0xD803B885F5E47A62()))
	{
		func_233(25);
	}
}

bool func_253(bool bParam0)
{
	return func_200(bParam0, 25);
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12522;
		case 142:
			return Global_262145.f_12510;
		case 157:
			return Global_262145.f_12477;
		case 159:
			return Global_262145.f_12460;
		case 162:
			return Global_262145.f_12571;
		case 173:
			return 100;
		case 170:
			return 100;
		default:
			break;
	}
	return -1;
}

bool func_255(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bVar0 /*615*/].f_1, false);
	}
	return false;
}

bool func_256(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bVar0 /*615*/].f_1, 7);
	}
	return false;
}

bool func_257(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 2);
}

void func_258(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	bool bVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	var uVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	char cVar57[16];

	if (func_401(iParam2))
	{
		return;
	}
	bVar45 = -1f;
	bVar46 = -1;
	bVar47 = -1;
	bVar49 = false;
	bVar50 = false;
	uParam3->f_36 = 0;
	if (func_399() || iParam2 == 28)
	{
		if (func_345(iParam1, iParam2, uParam3, Global_1574185, 0, func_397(), bParam7))
		{
			func_344(1);
			if ((!func_342() && !func_340()) || UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, true))
			{
				if (func_339())
				{
					func_334();
				}
				else
				{
					UNK_0xD02CE72B4B66DC29(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_333(1);
						Global_1574185 = 0;
						iVar54 = -1;
						if (Global_1574406 != 1)
						{
							func_332(iParam1, 0, 0);
							if (UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
							{
								UNK_0x0674E58A79778E99(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							bVar52 = false;
							while (bVar52 < 32)
							{
								iVar1[bVar52] = -1;
								bVar52++;
							}
							bVar52 = false;
							while (bVar52 < 32)
							{
								if (func_1115(UNK_0x117658E336116132(bVar52), 0, 1))
								{
									bVar35 = UNK_0x117658E336116132(bVar52);
									if (!func_147(bVar35, 0))
									{
										if ((func_331(bVar35) || Global_2425662[bVar35 /*421*/].f_236 != -1) || func_116(bVar35))
										{
											bVar44 = bVar35;
											if (func_249(bVar35))
											{
												iVar1[bVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_328(&iVar1, bVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								bVar52++;
							}
						}
						if (!func_325(UNK_0xD803B885F5E47A62(), 0) && func_230(UNK_0xD803B885F5E47A62()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						bVar52 = false;
						while (bVar52 < 32)
						{
							if (func_324())
							{
								if (func_1115(UNK_0x117658E336116132(bVar52), 0, 1))
								{
									bVar35 = UNK_0x117658E336116132(bVar52);
								}
								else
								{
									bVar35 = func_32();
								}
							}
							else
							{
								bVar35 = (uParam0[bVar52 /*42*/])->f_1;
							}
							if ((func_323(bVar35) && func_319(bVar35, iParam2)) && func_1115(bVar35, 0, 1))
							{
								bVar44 = bVar35;
								uVar42 = Global_1590535[bVar44 /*876*/].f_211.f_6;
								Var38 = { func_314(bVar35) };
								if (bVar35 == UNK_0xD803B885F5E47A62())
								{
									uParam3->f_35 = bVar53;
								}
								StringCopy(&(uParam3->f_1), UNK_0x6E524813889AECF8(bVar35), 64);
								*(uParam4[bVar52 /*13*/]) = { func_89(bVar35) };
								iVar37 = func_308(bVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = UNK_0x5283D58F79627134(iVar37);
								}
								Global_1574185++;
								if ((uParam0[bVar52 /*42*/])->f_22 != -1f)
								{
									bVar45 = (uParam0[bVar52 /*42*/])->f_22;
								}
								if ((uParam0[bVar52 /*42*/])->f_31 != -1)
								{
									bVar46 = (uParam0[bVar52 /*42*/])->f_31;
								}
								if ((uParam0[bVar52 /*42*/])->f_41 != -1)
								{
									bVar47 = (uParam0[bVar52 /*42*/])->f_41;
								}
								bVar43 = (uParam0[bVar52 /*42*/])->f_9;
								if (((uParam0[bVar52 /*42*/])->f_9 != -1 || (uParam0[bVar52 /*42*/])->f_22 != -1f) || (uParam0[bVar52 /*42*/])->f_31 != -1)
								{
									if (!func_324())
									{
										bVar50 = true;
									}
								}
								if (iParam5 != -1)
								{
									func_303(&bVar43, &bVar45, (uParam0[bVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_302(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									bVar48 = (uParam0[bVar52 /*42*/])->f_2 + 1;
									if (iVar54 != bVar48)
									{
										iVar54 = bVar48;
									}
									else
									{
										bVar48 = -2;
									}
								}
								bVar51 = func_297(bVar35, 0);
								if (bVar34)
								{
									if (func_296(bVar35, 1) && iVar1[bVar44] != -1)
									{
										bVar53 = iVar1[bVar44];
									}
									else
									{
										bVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[bVar44 /*2*/].f_1 = bVar53;
								if ((uParam0[bVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&cVar57, "UW_TM", 16);
									StringIntConCat(&cVar57, (uParam0[bVar52 /*42*/])->f_39, 16);
								}
								if (func_295(iParam5))
								{
									func_294(bVar35, iParam1, uParam3, bVar53, Var38, sVar36, uVar42, bVar43, bVar51, bVar50, bVar45, bVar43, bVar47, &cVar57, (uParam0[bVar52 /*42*/])->f_40, bVar48, bParam6);
								}
								else
								{
									func_294(bVar35, iParam1, uParam3, bVar53, Var38, sVar36, uVar42, bVar43, bVar51, bVar50, bVar45, bVar46, bVar47, &cVar57, (uParam0[bVar52 /*42*/])->f_40, bVar48, bParam6);
								}
								UNK_0x5D96D8530B3D0904(&bVar49, bVar35);
								bVar53++;
							}
							bVar52++;
						}
						bVar52 = false;
						while (bVar52 < 32)
						{
							bVar35 = UNK_0x117658E336116132(bVar52);
							if (func_1115(bVar35, 0, 1) && !UNK_0xEAE0D21A50E6C7F4(bVar49, bVar35))
							{
								bVar35 = UNK_0x117658E336116132(bVar52);
							}
							else
							{
								bVar35 = func_32();
							}
							if (func_323(bVar35))
							{
								if (func_1115(UNK_0x117658E336116132(bVar52), 0, 1))
								{
									bVar44 = bVar35;
									uVar42 = Global_1590535[bVar44 /*876*/].f_211.f_6;
									Var38 = { func_314(bVar35) };
									*(uParam4[bVar52 /*13*/]) = { func_89(bVar35) };
									iVar37 = func_308(bVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = UNK_0x5283D58F79627134(iVar37);
									}
									Global_1574185++;
									bVar51 = func_297(bVar35, 1);
									if (bVar34)
									{
										if (func_296(bVar35, 1))
										{
											bVar53 = iVar1[bVar52];
										}
										else
										{
											bVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[bVar44 /*2*/].f_1 = bVar53;
									func_272(bVar35, UNK_0x6E524813889AECF8(bVar35), iParam1, uParam3, bVar53, Var38, sVar36, uVar42, bVar51, bVar50);
									bVar53++;
								}
							}
							bVar52++;
						}
						if (UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 11))
						{
							func_269(uParam3, iParam1, iParam2);
						}
						func_268(&(uParam3->f_21));
						func_267();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
						{
							func_266(uParam3, iParam1);
							func_265(iParam1, 0, 1);
							UNK_0x5D96D8530B3D0904(&(uParam3->f_33), 7);
						}
						func_266(uParam3, iParam1);
						if (!UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 11))
						{
							UNK_0x5D96D8530B3D0904(&(uParam3->f_33), 11);
						}
						if (func_261(uParam3))
						{
							Global_1574406 = 1;
						}
						func_259(uParam3);
						if (Global_1574406 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574406 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (UNK_0x83D8570832F172A7(*iParam1))
					{
						UNK_0xD9ACBBA59FD5A09E(7);
						UNK_0xEF45C43067063F18(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						UNK_0xD9ACBBA59FD5A09E(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_267();
			func_333(0);
			if (UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
			{
				UNK_0x0674E58A79778E99(&(uParam3->f_33), 7);
			}
			if (UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 10))
			{
				UNK_0x0674E58A79778E99(&(uParam3->f_33), 10);
			}
		}
	}
	UNK_0xD59EF13BB60323B9();
}

void func_259(var uParam0)
{
	if (!func_9(&(uParam0->f_21)))
	{
		func_8(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_268(&(uParam0->f_21));
		func_260(0);
	}
}

void func_260(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574406 != 2)
		{
			Global_1574406 = 2;
		}
	}
	else
	{
		switch (Global_1574406)
		{
			case 0:
				Global_1574406 = 1;
				break;
			case 1:
				break;
			case 2:
				break;
		}
	}
}

bool func_261(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;

	iVar16 = 0;
	iVar0 = uParam0->f_37;
	bVar15 = UNK_0x117658E336116132(uParam0->f_37);
	if (bVar15 != func_32() && func_1115(bVar15, 0, 1))
	{
		Var2 = { func_89(bVar15) };
		iVar1 = func_264(uParam0, uParam0->f_37);
		if (func_263(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (UNK_0xD01DD90A3EAEC725(&Var2))
					{
						if (UNK_0x8086012EEEB2D3DF(&Var2))
						{
							iVar16 = 1;
							func_262(uParam0, iVar0, 2);
						}
					}
					else if (UNK_0x74684D5E87B13DBD(&Var2))
					{
						iVar16 = 1;
						func_262(uParam0, iVar0, 1);
					}
					break;
				case 2:
					if (UNK_0xD01DD90A3EAEC725(&Var2))
					{
						if (!UNK_0x8086012EEEB2D3DF(&Var2))
						{
							iVar16 = 1;
							func_262(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_262(uParam0, iVar0, 0);
					}
					break;
				case 1:
					if (UNK_0xD01DD90A3EAEC725(&Var2))
					{
						if (!UNK_0x74684D5E87B13DBD(&Var2))
						{
							iVar16 = 1;
							func_262(uParam0, iVar0, 0);
						}
					}
					else if (!UNK_0x74684D5E87B13DBD(&Var2))
					{
						iVar16 = 1;
						func_262(uParam0, iVar0, 0);
					}
					break;
			}
		}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_262(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_263(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return UNK_0x83F946529771616E(&uParam0, 13);
}

int func_264(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_265(int iParam0, bool bParam1, int iParam2)
{
	if (UNK_0x7E60C62A7CE58FC8(*iParam0, "COLLAPSE"))
	{
		UNK_0x1200CC973A2399C8(bParam1);
		UNK_0x7E60D21B163E9D56();
	}
	if (iParam2 == 1)
	{
		if (UNK_0x7E60C62A7CE58FC8(*iParam0, "DISPLAY_VIEW"))
		{
			UNK_0x7E60D21B163E9D56();
		}
	}
}

void func_266(var uParam0, int iParam1)
{
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_33, 10))
	{
		UNK_0x7E60C62A7CE58FC8(*iParam1, "SET_HIGHLIGHT");
		UNK_0x3CAEA85DA607305E(uParam0->f_35);
		UNK_0x7E60D21B163E9D56();
		UNK_0x5D96D8530B3D0904(&(uParam0->f_33), 10);
	}
}

void func_267()
{
	if (Global_1574406 != 0)
	{
		Global_1574406 = 0;
	}
}

void func_268(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_269(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = false;
	while (bVar0 < 32)
	{
		bVar2 = UNK_0x117658E336116132(bVar0);
		if (bVar2 != func_32())
		{
			if (func_1115(bVar2, 0, 1))
			{
				if (uParam0->f_38[bVar0 /*2*/].f_1 != -1)
				{
					bVar1 = func_271(uParam0->f_38[bVar0 /*2*/], 0, iParam2);
					func_270(iParam1, uParam0->f_38[bVar0 /*2*/].f_1, bVar1, Global_1590535[bVar0 /*876*/].f_211.f_6);
				}
			}
		}
		bVar0++;
	}
}

void func_270(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		if (UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_ICON"))
		{
			UNK_0x3CAEA85DA607305E(bParam1);
			UNK_0x3CAEA85DA607305E(bParam2);
			if (bParam2 == 65)
			{
				UNK_0x3CAEA85DA607305E(bParam3);
			}
			UNK_0x7E60D21B163E9D56();
		}
	}
}

int func_271(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		case 1:
			return 49;
		default:
			break;
	}
	return iVar0;
}

void func_272(bool bParam0, bool bParam1, int iParam2, var uParam3, bool bParam4, var uParam5, char* sParam6, var uParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	char* sVar1;

	if (bParam4 >= func_293() && bParam4 < func_292())
	{
		bParam4 = (bParam4 % 16);
		iVar0 = bParam4 + 1;
		if (Global_1574187)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (UNK_0x7E60C62A7CE58FC8(*iParam2, sVar1))
		{
			UNK_0x3CAEA85DA607305E(bParam4);
			if (UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_291("");
			}
			else
			{
				UNK_0x3CAEA85DA607305E(bParam10);
			}
			func_291(bParam1);
			UNK_0x3CAEA85DA607305E(bParam11);
			if (uParam3->f_108 == 6)
			{
				func_291("");
			}
			else
			{
				UNK_0x3CAEA85DA607305E(65);
			}
			UNK_0x3CAEA85DA607305E(-1);
			func_291("");
			if (uParam3->f_108 == 6)
			{
				func_291("");
			}
			else
			{
				func_291(&uParam5);
			}
			func_277(uParam3, bParam0);
			UNK_0x024BC5F58A72410C(bParam9);
			UNK_0x024BC5F58A72410C(bParam9);
			if (func_276(uParam3))
			{
				func_275("DPAD_FRIEND");
			}
			else if (func_274(uParam3))
			{
				func_275("DPAD_FRIEND");
			}
			else if (func_273(uParam3))
			{
				func_275("DPAD_CREW");
			}
			else
			{
				func_275("");
			}
			UNK_0x7E60D21B163E9D56();
		}
	}
}

bool func_273(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(uParam0->f_33, 6);
}

bool func_274(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(uParam0->f_33, 5);
}

void func_275(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

bool func_276(var uParam0)
{
	if (func_274(uParam0) && func_273(uParam0))
	{
		return true;
	}
	return false;
}

void func_277(var uParam0, bool bParam1)
{
	if (func_290(bParam1))
	{
		UNK_0x3CAEA85DA607305E(121);
	}
	else if (func_282(bParam1))
	{
		UNK_0x3CAEA85DA607305E(122);
	}
	else if (((UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_27, 15) && bParam1 > -1) && bParam1 < 32) && UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam1 /*421*/].f_413, false))
	{
		UNK_0x3CAEA85DA607305E(123);
	}
	else
	{
		if (func_278())
		{
			uParam0->f_36 = 0;
		}
		UNK_0x1200CC973A2399C8(uParam0->f_36);
	}
}

bool func_278()
{
	if (UNK_0xA14BB9332558B949())
	{
		if (func_280() || func_279())
		{
			return true;
		}
	}
	return false;
}

var func_279()
{
	return Global_2450632.f_15;
}

int func_280()
{
	if (UNK_0xA14BB9332558B949())
	{
		return func_279();
	}
	return func_281(Global_4456448.f_194990);
}

int func_281(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_282(bool bParam0)
{
	if ((func_1115(bParam0, 0, 1) && func_286()) && func_283(bParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_283(bool bParam0, bool bParam1)
{
	return func_284(bParam0, bParam1, 1);
}

int func_284(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (bParam0 == func_32())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_285(bParam0, iParam2))
		{
			return 0;
		}
	}
	bVar0 = Global_1628237[bParam0 /*615*/].f_11;
	if (bVar0 != func_32() && Global_1628237[bVar0 /*615*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_285(bool bParam0, int iParam1)
{
	if (bParam0 != func_32())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_32())
		{
			if (Global_1628237[bParam0 /*615*/].f_11 == bParam0 && Global_1628237[bParam0 /*615*/].f_11.f_450 == iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_286()
{
	if (func_138(UNK_0xD803B885F5E47A62()) || func_289())
	{
		if (!func_287(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	return true;
}

bool func_287(int iParam0)
{
	if (func_288(iParam0) == 236 || func_288(iParam0) == 150)
	{
		return func_256(iParam0);
	}
	return false;
}

int func_288(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/];
	}
	return -1;
}

bool func_289()
{
	switch (func_230(UNK_0xD803B885F5E47A62()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return true;
		default:
			break;
	}
	return false;
}

bool func_290(bool bParam0)
{
	if (func_278())
	{
		if (func_1115(bParam0, 0, 1))
		{
			return func_249(bParam0);
		}
	}
	if ((func_1115(bParam0, 0, 1) && func_286()) && func_285(bParam0, 0))
	{
		return true;
	}
	return false;
}

void func_291(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

bool func_292()
{
	int iVar0;

	if (Global_1574187)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

bool func_293()
{
	int iVar0;

	iVar0 = 0;
	if (Global_1574187)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_294(bool bParam0, int iParam1, var uParam2, bool bParam3, var uParam4, char* sParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19)
{
	bool bVar0;
	char* sVar1;

	if (bParam3 >= func_293() && bParam3 < func_292())
	{
		bParam3 = (bParam3 % 16);
		bVar0 = bParam3 + 1;
		if (Global_1574187)
		{
			bVar0 += 16;
		}
		if (bParam19)
		{
			bVar0 = bParam18;
			if (bVar0 == -2)
			{
				bParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (UNK_0x83D8570832F172A7(*iParam1))
		{
			if (UNK_0x7E60C62A7CE58FC8(*iParam1, sVar1))
			{
				UNK_0x3CAEA85DA607305E(bParam3);
				if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_291("");
				}
				else
				{
					UNK_0x3CAEA85DA607305E(bParam9);
				}
				if (uParam2->f_108 == 6 && !UNK_0xEA6BC48857E0AC4C(bParam16))
				{
					func_275(bParam16);
				}
				else
				{
					func_291(&(uParam2->f_1));
				}
				UNK_0x3CAEA85DA607305E(bParam11);
				if (uParam2->f_108 == 6)
				{
					func_291("");
				}
				else
				{
					UNK_0x3CAEA85DA607305E(65);
				}
				if (bParam12 == 1)
				{
					UNK_0x3CAEA85DA607305E(bVar0);
				}
				else
				{
					UNK_0x3CAEA85DA607305E(-1);
				}
				if (func_324())
				{
					func_291("");
				}
				else if (uParam2->f_108 == 6 && !UNK_0xEA6BC48857E0AC4C(bParam16))
				{
					UNK_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					UNK_0x6B012227B3921E18(bParam16);
					UNK_0x6D99DF8263D35CE5(bParam17);
					UNK_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 5 && !UNK_0xEA6BC48857E0AC4C(bParam16))
				{
					UNK_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					UNK_0x6B012227B3921E18(bParam16);
					UNK_0x6D99DF8263D35CE5(bParam17);
					UNK_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 7 && !UNK_0xEA6BC48857E0AC4C(bParam16))
				{
					UNK_0x7ACC3006A87F8B39("FM_AE_TWO_INT");
					UNK_0x6B012227B3921E18(bParam16);
					UNK_0x6D99DF8263D35CE5(bParam17);
					UNK_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 8 && !UNK_0xEA6BC48857E0AC4C(&(uParam2->f_104)))
				{
					UNK_0x7ACC3006A87F8B39("FM_AE_UNIT");
					if (bParam13 != -1f)
					{
						UNK_0x21994591120B91F0(bParam13, 1);
					}
					if (bParam10 != -1)
					{
						UNK_0x6D99DF8263D35CE5(bParam10);
					}
					UNK_0x6B012227B3921E18(&(uParam2->f_104));
					UNK_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 9)
				{
					UNK_0x7ACC3006A87F8B39("FM_AE_CASH");
					UNK_0xCBD015EC7E4226BC(bParam10, 1);
					UNK_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 10)
				{
					if (bParam10 == 0)
					{
						UNK_0x7ACC3006A87F8B39("FM_AE_CASH");
						UNK_0xCBD015EC7E4226BC(bParam10, 1);
						UNK_0x779B34565F4D71B1();
					}
					else
					{
						UNK_0x7ACC3006A87F8B39("FM_NG_CASH");
						UNK_0xCBD015EC7E4226BC(bParam10, 1);
						UNK_0x779B34565F4D71B1();
					}
				}
				else if (bParam15 > -1)
				{
					if (bParam15 == 0 && !UNK_0xEA6BC48857E0AC4C(&(uParam2->f_104)))
					{
						func_275(&(uParam2->f_104));
					}
					else
					{
						func_291("");
					}
				}
				else if (bParam14 != -1)
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam14, 6);
					UNK_0x779B34565F4D71B1();
				}
				else if (bParam13 != -1f)
				{
					UNK_0x7ACC3006A87F8B39("NUMBER");
					UNK_0x21994591120B91F0(bParam13, 1);
					UNK_0x779B34565F4D71B1();
				}
				else if (bParam10 != -1)
				{
					UNK_0x3CAEA85DA607305E(bParam10);
				}
				else
				{
					func_291("");
				}
				if (uParam2->f_108 == 6)
				{
					func_291("");
				}
				else
				{
					func_291(&uParam4);
				}
				func_277(uParam2, bParam0);
				if (bParam12 == 1 || UNK_0xEA6BC48857E0AC4C(bParam8))
				{
					func_291("");
					func_291("");
				}
				else
				{
					UNK_0x024BC5F58A72410C(bParam8);
					UNK_0x024BC5F58A72410C(bParam8);
				}
				if (func_276(uParam2))
				{
					func_275("DPAD_FRIEND");
				}
				else if (func_274(uParam2))
				{
					func_275("DPAD_FRIEND");
				}
				else if (func_273(uParam2))
				{
					func_275("DPAD_CREW");
				}
				else
				{
					func_275("");
				}
				UNK_0x7E60D21B163E9D56();
			}
		}
	}
}

bool func_295(int iParam0)
{
	return false;
	switch (iParam0)
	{
		case 11:
		case 12:
			return true;
		default:
			break;
	}
	return false;
}

bool func_296(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_249(bParam0))
		{
			return false;
		}
	}
	return Global_1628237[bParam0 /*615*/].f_11 != func_32();
}

int func_297(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 116;
	if ((!bParam1 && func_138(bParam0)) && !func_219(bParam0))
	{
		iVar0 = func_301();
	}
	iVar1 = func_300(bParam0);
	if (!iVar1 == -1)
	{
		return func_298(iVar1);
	}
	return iVar0;
}

int func_298(int iParam0)
{
	int iVar0;

	if (iParam0 > -1)
	{
		iVar0 = func_299(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			case 1:
				return 193;
			case 2:
				return 194;
			case 3:
				return 195;
			case 4:
				return 196;
			case 5:
				return 197;
			case 6:
				return 198;
			case 7:
				return 199;
			case 8:
				return 200;
			case 9:
				return 201;
			case 10:
				return 202;
			case 11:
				return 203;
			case 12:
				return 204;
			case 13:
				return 205;
			case 14:
				return 206;
			default:
				break;
		}
	}
	return 1;
}

int func_299(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_300(bool bParam0)
{
	if (!bParam0 == func_32())
	{
		if (func_296(bParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_88(bParam0)];
		}
	}
	return -1;
}

int func_301()
{
	return 21;
}

char* func_302(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (UNK_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		case 2:
			if (UNK_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_303(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (func_307(iParam3))
	{
		*bParam1 = (func_304(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_295(iParam3))
	{
		*bParam1 = (func_304(iParam3, iParam2) / 1000f);
		return 1;
	}
	*bParam0 = iParam2;
	return 0;
}

float func_304(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (UNK_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_306(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		case 2:
			if (UNK_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_305(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_305(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_306(float fParam0)
{
	return (fParam0 / 0.3048f);
}

bool func_307(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return true;
		default:
			break;
	}
	return false;
}

int func_308(bool bParam0)
{
	int iVar0;

	iVar0 = func_311(bParam0);
	if (iVar0 == -1)
	{
		func_309(bParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_309(bool bParam0, bool bParam1)
{
	if (!func_1115(bParam0, 0, 1))
	{
		return;
	}
	if (func_311(bParam0) != -1)
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
	if (func_310(bParam0))
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

bool func_310(bool bParam0)
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

int func_311(bool bParam0)
{
	int iVar0;

	if (!func_1115(bParam0, 0, 1))
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
			func_312(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_312(int iParam0)
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
	func_313(&(Global_1389078[iVar32 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_313(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_32();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (UNK_0x8CD06866876216F2())
	{
		uParam0->f_3 = UNK_0x2B6E0A53779D29EA();
	}
}

struct<4> func_314(bool bParam0)
{
	char cVar0[32];

	if (func_1115(bParam0, 0, 1))
	{
		Global_2513218 = { func_89(bParam0) };
		if (UNK_0xDC30EF462887322E())
		{
			if (func_263(Global_2513218))
			{
				if (!UNK_0x5B9BB2932920F9CD(&Global_2513218))
				{
					return cVar0;
				}
			}
		}
		else if (!UNK_0x4DEB7B48DD0AABA4(0))
		{
			return cVar0;
		}
		if (func_318(&Global_2513218))
		{
			Global_2513148 = { func_316(bParam0) };
			func_315(&Global_2513148, &cVar0);
		}
	}
	return cVar0;
}

void func_315(var uParam0, char* sParam1)
{
	UNK_0xC6B7299B3E15AD8B(uParam0, 35, sParam1);
}

struct<35> func_316(bool bParam0)
{
	struct<13> Var0;
	struct<35> Var13;

	if (func_317(bParam0))
	{
		return Global_1312909[UNK_0xD803B885F5E47A62() /*35*/];
	}
	Var0 = { func_89(bParam0) };
	UNK_0xD9DA83C40D038174(&Var13, 35, &Var0);
	return Var13;
}

bool func_317(bool bParam0)
{
	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		return true;
	}
	return false;
}

bool func_318(var uParam0)
{
	if (UNK_0x1963B11DE70153E0())
	{
		if (UNK_0x080E9D045AEE5605() && UNK_0xF2EC2A39FF9E838D(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_319(bool bParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_257(bParam0) || func_322(bParam0)) || func_321(bParam0))
		{
			return false;
		}
	}
	if (!func_320(bParam0))
	{
		return false;
	}
	if ((!func_331(bParam0) && Global_2425662[bParam0 /*421*/].f_236 == -1) && !func_116(bParam0))
	{
		return false;
	}
	return true;
}

bool func_320(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_142, 22);
}

bool func_321(bool bParam0)
{
	if (func_257(bParam0))
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 8);
}

bool func_322(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return (UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 10) || UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 9));
	}
	return false;
}

bool func_323(bool bParam0)
{
	bool bVar0;

	if (bParam0 == func_32())
	{
		return false;
	}
	if (func_147(bParam0, 0))
	{
		return false;
	}
	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bVar0 /*876*/].f_142, 2))
		{
			return false;
		}
	}
	return true;
}

bool func_324()
{
	switch (func_230(UNK_0xD803B885F5E47A62()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return true;
		default:
			break;
	}
	switch (func_288(UNK_0xD803B885F5E47A62()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return true;
	}
	if (func_219(UNK_0xD803B885F5E47A62()))
	{
		switch (func_230(UNK_0xD803B885F5E47A62()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return true;
		}
	}
	if (func_287(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	return false;
}

bool func_325(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 && func_326(Global_1628237[iParam0 /*615*/].f_11.f_33))
	{
		return true;
	}
	if (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1)
	{
		if (func_326(Global_1628237[iParam0 /*615*/].f_11.f_32))
		{
			return true;
		}
	}
	return false;
}

bool func_326(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return true;
		default:
			break;
	}
	return func_327(iParam0, 0);
	return false;
}

bool func_327(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return true;
		default:
			break;
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return true;
			default:
				break;
		}
	}
	return false;
}

void func_328(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (func_1115(UNK_0x117658E336116132(bVar0), 0, 1))
		{
			bVar1 = UNK_0x117658E336116132(bVar0);
			if (!func_147(bVar1, 0))
			{
				if ((func_331(bVar1) || Global_2425662[bVar1 /*421*/].f_236 != -1) || func_116(bVar1))
				{
					if (func_329(bVar1, bParam1, 0))
					{
						(*iParam0)[bVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		bVar0++;
	}
}

bool func_329(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1 != func_32())
	{
		if (!bParam2)
		{
			if (func_330(bParam0, bParam1))
			{
				return false;
			}
		}
		if (Global_1628237[bParam0 /*615*/].f_11 != func_32())
		{
			return bParam1 == Global_1628237[bParam0 /*615*/].f_11;
		}
	}
	return false;
}

bool func_330(bool bParam0, bool bParam1)
{
	if (bParam1 != func_32())
	{
		if (bParam0 != func_32())
		{
			if (Global_1628237[bParam0 /*615*/].f_11 != func_32())
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

bool func_331(bool bParam0)
{
	if (func_1115(bParam0, 0, 1))
	{
		if (func_1115(UNK_0xD803B885F5E47A62(), 0, 1))
		{
			if (UNK_0xF816C4B5324CB295(bParam0, UNK_0xD803B885F5E47A62()) || func_230(bParam0) == 233)
			{
				return true;
			}
		}
	}
	return false;
}

void func_332(int iParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT_EMPTY");
		UNK_0x3CAEA85DA607305E(bParam1);
		UNK_0x3CAEA85DA607305E(bParam2);
		UNK_0x7E60D21B163E9D56();
	}
}

void func_333(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1377167.f_2 == 0)
		{
			Global_1377167.f_2 = 1;
		}
	}
	else if (Global_1377167.f_2 == 1)
	{
		Global_1377167.f_2 = 0;
	}
}

void func_334()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, true))
	{
		if (func_338())
		{
			func_335();
		}
	}
}

void func_335()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_2 != 0)
		{
			Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			func_336(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_336(var uParam0, int iParam1)
{
	func_337(uParam0, iParam1);
}

void func_337(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_338()
{
	return Global_2439138.f_2723[0 /*80*/].f_1 != 0;
}

bool func_339()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, false) && func_338())
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, true) && func_338())
	{
		return true;
	}
	return false;
}

bool func_340()
{
	if (func_338())
	{
		if (func_341(Global_2439138.f_2723[0 /*80*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_341(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return true;
		default:
			break;
	}
	return false;
}

bool func_342()
{
	if (func_338())
	{
		if (func_343(Global_2439138.f_2723[0 /*80*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_343(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return true;
		default:
			break;
	}
	return false;
}

void func_344(int iParam0)
{
	if (Global_1377167.f_1 != Global_1377167)
	{
		Global_1377167.f_1 = Global_1377167;
	}
	if (Global_1377167 != iParam0)
	{
		Global_1377167 = iParam0;
	}
}

bool func_345(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;

	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_396(iParam1);
	fVar7 = func_395();
	bVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_394())
		{
			if (func_393() > 0 && Global_1574187)
			{
				UNK_0xB8E3919889462ACD();
				UNK_0xD668DA5CA4A1D2C8(fVar7);
				UNK_0x3584F71E5CA29322(18);
				if (UNK_0xFEBC1E4EC9E001F0())
				{
					UNK_0xE19C2AAC820D8ED5();
				}
				UNK_0x3584F71E5CA29322(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_379())
		{
			func_378(iParam0, uParam2, 1);
			return false;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 26))
	{
		func_378(iParam0, uParam2, 1);
		return false;
	}
	if (!func_9(&(uParam2->f_19)))
	{
		if (func_393() == 1)
		{
			func_377(bVar6, iParam0, 0);
			func_8(&(uParam2->f_19), 0, 0);
			func_378(iParam0, uParam2, 0);
			UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4592), 5);
		}
	}
	if (func_9(&(uParam2->f_19)) || bParam5)
	{
		if (UNK_0xFEBC1E4EC9E001F0())
		{
			UNK_0xE19C2AAC820D8ED5();
		}
		UNK_0x3584F71E5CA29322(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_393() == 0 && !bParam5))
		{
			func_378(iParam0, uParam2, 1);
			return false;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_376();
				if (iParam1 == 27 || iParam1 == 28)
				{
					UNK_0xB8E3919889462ACD();
				}
				UNK_0x3584F71E5CA29322(18);
			}
			if (!UNK_0xEAE0D21A50E6C7F4(uParam2->f_33, false))
			{
				if (bVar5 == 0)
				{
					func_376();
					if (iParam1 == 27 || iParam1 == 28)
					{
						UNK_0xB8E3919889462ACD();
					}
					UNK_0x3584F71E5CA29322(18);
				}
				UNK_0xD668DA5CA4A1D2C8(fVar7);
				if (func_377(bVar6, iParam0, 0))
				{
					func_332(iParam0, 0, 0);
					bVar4 = func_374(iParam1, &(Global_4456448.f_194997), bParam4);
					Var0 = { func_372(iParam1) };
					if (bParam4)
					{
						func_369(iParam0, bVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_362(iParam0, func_366(uParam2), func_363(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						bVar9 = func_355(uParam2);
						if (!UNK_0xEA6BC48857E0AC4C(bParam6))
						{
							bVar9 = bParam6;
						}
						func_353(iParam0, bVar9, func_354(), -1);
					}
					else if (func_278())
					{
						uParam2->f_34 = Global_1574186;
						func_369(iParam0, bVar4, &Var0, 1, -1, Global_1574186, 1);
					}
					else if (bVar5)
					{
						bVar8 = func_346(iParam1);
						uParam2->f_34 = Global_1574186;
						func_369(iParam0, bVar4, "", 0, bVar8, Global_1574186, 1);
					}
					else
					{
						bVar8 = func_346(iParam1);
						func_369(iParam0, bVar4, &Var0, 1, bVar8, -1, 1);
					}
					UNK_0x5D96D8530B3D0904(&(uParam2->f_33), false);
				}
			}
			if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_33, false))
			{
				Global_1574185 = uParam3;
				Global_1574184 = 1;
				UNK_0xD668DA5CA4A1D2C8(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574186)
					{
						UNK_0x0674E58A79778E99(&(uParam2->f_33), false);
					}
				}
				return true;
			}
		}
	}
	return false;
}

int func_346(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_352())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			iVar0 = 3;
			break;
		case 2:
			iVar0 = 3;
			break;
		case 1:
			iVar0 = 6;
			break;
		case 3:
			iVar0 = 5;
			break;
		case 26:
			iVar0 = 21;
			break;
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		case 7:
			iVar0 = 10;
			break;
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		case 15:
			iVar0 = 17;
			break;
		case 16:
			iVar0 = 18;
			break;
		case 18:
			if (func_351(UNK_0xD803B885F5E47A62()))
			{
				iVar0 = 20;
			}
			if (func_350(UNK_0xD803B885F5E47A62()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_349(UNK_0xD803B885F5E47A62()))
	{
		iVar0 = 2;
	}
	if (func_347())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_347()
{
	if (UNK_0xA14BB9332558B949())
	{
		return func_123();
	}
	return func_348(Global_4456448.f_194990);
}

int func_348(int iParam0)
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

bool func_349(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 4;
}

bool func_350(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

bool func_351(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_352()
{
	return Global_4456448.f_1 == 0;
}

void func_353(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (UNK_0xEA6BC48857E0AC4C(bParam2))
		{
			func_275(bParam1);
		}
		else
		{
			UNK_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			UNK_0x6B012227B3921E18(bParam1);
			UNK_0x6B012227B3921E18(bParam2);
			UNK_0x779B34565F4D71B1();
		}
		func_275("");
		if (bParam3 != -1)
		{
			UNK_0x3CAEA85DA607305E(bParam3);
		}
		UNK_0x7E60D21B163E9D56();
	}
}

bool func_354()
{
	switch (func_230(UNK_0xD803B885F5E47A62()))
	{
		case 163:
			return "BD_SORT_1";
		case 160:
			return "BD_SORT_4";
		case 154:
			return "BD_SORT_3";
		case 155:
			return "BD_SORT_3";
	}
	return "";
}

char* func_355(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
		case 1:
			return "GR_DPD_F";
		case 2:
			return "GR_DPD_S";
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
		case 1:
			return "GR_DPD_B";
		case 2:
			return "GR_DPD_C";
		case 3:
			return "GR_DPD_D";
	}
	switch (func_230(UNK_0xD803B885F5E47A62()))
	{
		case 233:
			return "H2_DPAD_SET";
		case 180:
			return "GB_BIGUNLOAD_T";
		case 182:
			return "DEAL_DEALN";
		case 194:
			return "PI_BIK_13_0";
		case 189:
			return "PI_BIK_4_1";
		case 193:
			return "PI_BIK_13_1";
		case 205:
			return "PI_BIK_13_3";
		case 186:
			return "CELL_BIKER_CK";
		case 207:
			return "DV_SH_TITLE";
		case 208:
			return "BA_SH_TITLE";
		case 209:
			return "SHU_SH_TITLE";
		case 210:
			return "PI_BIK_13_4";
		case 183:
			return "CELL_BIKER_RESC";
		case 199:
			return "CELL_BIKER_SEAR";
		case 201:
			return "CELL_BIKER_STAN";
		case 142:
			return "PIM_MAGM210";
		case 163:
			return "PIM_MAGM608";
		case 160:
			return "PIM_MAGM604";
		case 154:
			return "PIM_MAGM602";
		case 155:
			return "PIM_MAGM603";
		case 148:
			if (func_358())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
		case 151:
			if (func_357(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
		case 152:
			return "PIM_MAGM204";
		case 153:
			if (func_357(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
		case 157:
			return "PIM_MAGM207";
		case 159:
			return "PIM_MAGM206";
		case 162:
			return "PIM_MAGM607";
		case 164:
			return "PIM_MAGM212";
		case 166:
			return "GB_DPAD_HEAD";
		case 167:
			return "GB_DPAD_BUY";
		case 168:
			return "GB_DPAD_SELL";
		case 169:
			return "GB_DPAD_DEF";
		case 170:
			return "GB_DPAD_AIR";
		case 171:
			return "GB_DPAD_CASH";
		case 172:
			return "GB_DPAD_SAL";
		case 173:
			return "GB_DPAD_FRA";
		case 178:
			return "VEX_TITLEa";
		case 188:
			return "VEX_TITLEb";
		case 218:
			return "FRT_MODE";
		case 217:
			return "FRT_TRNS";
		case 214:
			return "MODE_PLW";
		case 215:
			return "MODE_FUL";
		case 216:
			return "MODE_AA";
		case 219:
			return "MODE_VEL";
		case 220:
			return "MODE_RMP";
		case 221:
			return "MODE_STK";
		case 225:
			return "GR_TITLEL";
		case 226:
			return "GRS_TITLEL";
		case 227:
			return "GRD_TITLEL";
		case 195:
			return "GB_STEAL_T";
		case 198:
			return "SC_MENU_TITLE";
		case 190:
			return "GB_DPAD_BSEL";
		case 191:
			return "GB_DPAD_BDEF";
		case 185:
			return "GB_DPAD_GFH";
		case 197:
			return "GB_DPAD_JB";
		case 179:
			return "CELL_JOUST";
		case 200:
			return "CAG_BLIP";
		case 192:
			if (func_356(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
	}
	return "";
}

bool func_356(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return true;
		default:
			break;
	}
	return false;
}

bool func_357(bool bParam0)
{
	return func_283(UNK_0xD803B885F5E47A62(), bParam0);
}

bool func_358()
{
	return (func_361() && func_359(func_360()));
}

bool func_359(bool bParam0)
{
	return func_285(bParam0, 1);
}

bool func_360()
{
	return Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_35;
}

bool func_361()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 148;
}

void func_362(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (UNK_0xEA6BC48857E0AC4C(bParam2))
		{
			func_275(bParam1);
		}
		else if (func_288(UNK_0xD803B885F5E47A62()) == 133)
		{
			UNK_0x7ACC3006A87F8B39("FM_AE_BRACKT_C");
			UNK_0x6B012227B3921E18(bParam1);
			UNK_0x6B012227B3921E18(bParam2);
			UNK_0x779B34565F4D71B1();
		}
		else
		{
			UNK_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			UNK_0x6B012227B3921E18(bParam1);
			UNK_0x6B012227B3921E18(bParam2);
			UNK_0x779B34565F4D71B1();
		}
		func_275("");
		if (bParam3 != -1)
		{
			UNK_0x3CAEA85DA607305E(bParam3);
		}
		UNK_0x7E60D21B163E9D56();
	}
}

bool func_363(var uParam0)
{
	int iVar0;

	iVar0 = func_288(UNK_0xD803B885F5E47A62());
	if (func_365())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		case 132:
			return "FM_AE_SORT_5";
		case 133:
			switch (func_364())
			{
				case 0:
					return "FM_AE_SORT_2";
				case 1:
					return "FM_AE_SORT_2";
				case 2:
					return "FM_AE_SORT_3";
				case 3:
					return "FM_AE_SORT_2";
				case 4:
					return "FM_AE_SORT_2";
				case 5:
					return "FM_AE_SORT_2";
				case 6:
					return "FM_AE_SORT_2";
				case 7:
					return "FM_AE_SORT_13";
				case 8:
					return "FM_AE_SORT_4";
				case 9:
					return "FM_AE_SORT_2";
				case 10:
					return "FM_AE_SORT_2";
				case 11:
					return "FM_AE_SORT_2";
				case 12:
					return "FM_AE_SORT_2";
				case 13:
					return "FM_AE_SORT_2";
				case 14:
					return "FM_AE_SORT_5";
				case 15:
					return "FM_AE_SORT_9";
				case 16:
					return "FM_AE_SORT_9";
				case 17:
					return "FM_AE_SORT_9";
				case 18:
					return "FM_AE_SORT_9";
				default:
					break;
			}
			break;
		case 136:
			return "";
		case 138:
			return "";
		case 139:
			return "FM_AE_SORT_10";
		case 140:
			return "";
		case 141:
			return "FM_AE_SORT_5";
		case 144:
			return "FM_AE_SORT_1";
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_364()
{
	if (func_288(UNK_0xD803B885F5E47A62()) == 133)
	{
		return Global_2537071.f_5045;
	}
	return -1;
}

bool func_365()
{
	return Global_1590408;
}

bool func_366(var uParam0)
{
	int iVar0;

	iVar0 = func_288(UNK_0xD803B885F5E47A62());
	if (func_365())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		case 132:
			if (func_368() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_368() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
		case 133:
			switch (func_364())
			{
				case 0:
					return "AMCH_0SLC";
				case 1:
					return "AMCH_1SLC";
				case 2:
					return "AMCH_2SLC";
				case 3:
					return "AMCH_3SLC";
				case 4:
					return "AMCH_4SLC";
				case 5:
					return "AMCH_5SLC";
				case 6:
					return "AMCH_6SLC";
				case 7:
					return "AMCH_7SLC";
				case 8:
					return "AMCH_8SLC";
				case 9:
					return "AMCH_12SLC";
				case 10:
					return "AMCH_13SLC";
				case 11:
					return "AMCH_15SLC";
				case 12:
					return "AMCH_16SLC";
				case 13:
					return "AMCH_23SLC";
				case 14:
					return "AMCH_9SLC";
				case 15:
					return "AMCH_19SLC";
				case 16:
					return "AMCH_20SLC";
				case 17:
					return "AMCH_21SLC";
				case 18:
					return "AMCH_22SLC";
				default:
					break;
			}
			break;
		case 136:
			return "PIM_TA10";
		case 138:
			return "PIM_TA4";
		case 139:
			return "PIM_TA5";
		case 140:
			return "PIM_TA3";
		case 141:
			return "PIM_TA8";
		case 144:
			return "PIM_TA2";
		case 129:
			if (func_367() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_367()
{
	return Global_2537071.f_5048;
}

int func_368()
{
	if (func_288(UNK_0xD803B885F5E47A62()) == 132)
	{
		return Global_2537071.f_5043;
	}
	return -1;
}

void func_369(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;

	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_291(bParam1);
		}
		else if (bParam5 != -1)
		{
			UNK_0x7ACC3006A87F8B39(bParam1);
			UNK_0x6D99DF8263D35CE5(bParam5);
			UNK_0x779B34565F4D71B1();
		}
		else
		{
			func_275(bParam1);
		}
		if (func_394() && bParam6)
		{
			if (func_371())
			{
				bVar0 = 2;
				bVar1 = 2;
			}
			else
			{
				bVar0 = true;
				bVar1 = 2;
			}
			UNK_0x7ACC3006A87F8B39("LBD_DPD_CNT");
			UNK_0x6D99DF8263D35CE5(bVar0);
			UNK_0x6D99DF8263D35CE5(bVar1);
			UNK_0x779B34565F4D71B1();
		}
		else
		{
			func_275(bParam2);
		}
		if (bParam4 != -1)
		{
			UNK_0x3CAEA85DA607305E(bParam4);
			if (func_370(UNK_0xD803B885F5E47A62()))
			{
				UNK_0x3CAEA85DA607305E(166);
			}
			else if (func_123())
			{
				UNK_0x3CAEA85DA607305E(220);
			}
		}
		UNK_0x7E60D21B163E9D56();
	}
}

bool func_370(int iParam0)
{
	if (func_351(iParam0) || func_350(iParam0))
	{
		return true;
	}
	return false;
}

bool func_371()
{
	return Global_1574187;
}

struct<4> func_372(int iParam0)
{
	struct<4> Var0;

	StringCopy(&Var0, "", 16);
	if (func_373(UNK_0xD803B885F5E47A62()) || func_349(UNK_0xD803B885F5E47A62()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_204, 16);
			break;
	}
	if (func_278() && UNK_0xA14BB9332558B949())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_204, 16);
	}
	return Var0;
}

bool func_373(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 5;
}

bool func_374(int iParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	if (iParam0 == 20 && (!func_278() || UNK_0xEA6BC48857E0AC4C(bParam1)))
	{
		sVar0 = func_375();
		return sVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		if (Global_1574425 == 1)
		{
			Global_1574425 = 0;
		}
		return bParam1;
	}
	else
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
			case 1:
				return "HUD_LBD_TDM";
			case 5:
				return "HUD_LBD_GRCE";
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
			case 7:
				return "HUD_LBD_BRCE";
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
			case 3:
				return "HUD_LBD_HRD";
			case 22:
				return "HUD_LBD_SHOO";
		}
	}
	return bParam1;
}

char* func_375()
{
	if (UNK_0xB9110623D4211889())
	{
		return "HUD_LBD_FMF";
	}
	if (UNK_0x4CE7C0420678C221())
	{
		return "HUD_LBD_FMC";
	}
	if (UNK_0xB56AF77A4FB2CF82())
	{
		return "HUD_LBD_FMS";
	}
	if (UNK_0xBADE9A39B01F3DEC())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_376()
{
	Global_42351 = 1;
}

bool func_377(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = UNK_0xB01F55A0FD1CFD49("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = UNK_0xB01F55A0FD1CFD49("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = UNK_0xB01F55A0FD1CFD49("mp_matchmaking_card");
	}
	return UNK_0x83D8570832F172A7(*iParam1);
}

void func_378(int iParam0, var uParam1, bool bParam2)
{
	UNK_0x0674E58A79778E99(&(uParam1->f_33), 7);
	Global_1574185 = 0;
	func_267();
	Global_1574184 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_19)))
		{
			func_268(&(uParam1->f_19));
			UNK_0x0674E58A79778E99(&(Global_2537071.f_4592), 5);
		}
	}
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0xE17FDF9E3068281B(iParam0);
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_33, false))
	{
		UNK_0x0674E58A79778E99(&(uParam1->f_33), false);
	}
	UNK_0xD668DA5CA4A1D2C8(0f);
}

bool func_379()
{
	if (func_392())
	{
		return false;
	}
	if (func_391())
	{
		return false;
	}
	if (!func_389())
	{
		return false;
	}
	if (!func_387())
	{
		return false;
	}
	if (func_386(8, -1))
	{
		return false;
	}
	if (func_393() == 2)
	{
		return false;
	}
	if (Global_2537071.f_4543)
	{
		return false;
	}
	if (func_385())
	{
		return false;
	}
	else if (!func_47(UNK_0xD803B885F5E47A62(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return false;
	}
	if (((func_384(1) || func_382(1)) || Global_22211.f_124) || Global_22211)
	{
		return false;
	}
	if (UNK_0x798A3F1296751F46())
	{
		return false;
	}
	if (func_381() && Global_1695468 == 2)
	{
		return false;
	}
	if (func_92(UNK_0xD803B885F5E47A62()) && !func_381())
	{
		return false;
	}
	if (Global_1662006)
	{
		return false;
	}
	if (Global_1662011)
	{
		return false;
	}
	if (func_205(0))
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, 4))
	{
		return false;
	}
	if (Global_1370230)
	{
		return false;
	}
	if ((Global_1688696.f_718.f_5 || Global_1691522.f_718.f_5) || Global_1687724.f_718.f_5)
	{
		return false;
	}
	if ((Global_1696433.f_724.f_5 || Global_1696433.f_744.f_724.f_5) || Global_1696433.f_1497.f_724.f_5)
	{
		return false;
	}
	if (func_380(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if ((Global_1370265 || Global_1370266) || Global_1370267)
	{
		return false;
	}
	return true;
}

bool func_380(int iParam0)
{
	if (iParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310.f_4, 6);
}

bool func_381()
{
	return (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_30, 12) && UNK_0xEAE0D21A50E6C7F4(Global_1695469, false));
}

bool func_382(bool bParam0)
{
	if (UNK_0xD6C3CB7DCE462DB4())
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (func_383(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x06F8112AA79C53D9(0, 25) || UNK_0x06F8112AA79C53D9(0, 68))
				{
					return false;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return false;
	}
	if (UNK_0x06F8112AA79C53D9(0, 19) || (!bParam0 && UNK_0x7FEE810EE9E768EB(0, 19)))
	{
		return true;
	}
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (((UNK_0x06F8112AA79C53D9(0, 166) || UNK_0x06F8112AA79C53D9(0, 167)) || UNK_0x06F8112AA79C53D9(0, 168)) || UNK_0x06F8112AA79C53D9(0, 169))
		{
			return true;
		}
		if (!bParam0)
		{
			if (((UNK_0x7FEE810EE9E768EB(0, 166) || UNK_0x7FEE810EE9E768EB(0, 167)) || UNK_0x7FEE810EE9E768EB(0, 168)) || UNK_0x7FEE810EE9E768EB(0, 169))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_383(bool bParam0)
{
	int iVar0;

	if (UNK_0x18AF0C72ABD5543B())
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			UNK_0xCAE036C45E7FC720(bParam0, &iVar0, 1);
			if (((iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER")) || iVar0 == joaat("WEAPON_MARKSMANRIFLE")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_384(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_385()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_196 != 0;
}

bool func_386(bool bParam0, int iParam1)
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

bool func_387()
{
	if (func_388() == 0)
	{
		return true;
	}
	return false;
}

int func_388()
{
	return Global_1312467.f_18;
}

bool func_389()
{
	if (func_390())
	{
		return true;
	}
	if (UNK_0x757EF87A33649210())
	{
		return false;
	}
	if (UNK_0xD0BB2359EC70FC37() || UNK_0x7BCE0E6DD4A1F749())
	{
		return false;
	}
	if (UNK_0x06980BB66EBA4D95())
	{
		return false;
	}
	return true;
}

bool func_390()
{
	return Global_1312440;
}

bool func_391()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 5;
}

bool func_392()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_393()
{
	return Global_1377170.f_68;
}

bool func_394()
{
	if (Global_1574186 > 16)
	{
		return true;
	}
	return false;
}

float func_395()
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - UNK_0x57C534E6A9384F53()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_396(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_397()
{
	if (func_398(UNK_0xD803B885F5E47A62()))
	{
		return Global_1319101;
	}
	return false;
}

bool func_398(bool bParam0)
{
	if (UNK_0x8CD06866876216F2())
	{
		if (func_147(bParam0, 0))
		{
			return UNK_0xB9BE6EF14AC6F8DE(bParam0);
		}
	}
	return false;
}

bool func_399()
{
	if (func_397())
	{
		return true;
	}
	if (func_321(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (func_365())
	{
		return true;
	}
	if (func_138(UNK_0xD803B885F5E47A62()))
	{
		switch (func_288(UNK_0xD803B885F5E47A62()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return true;
			case 140:
				if (!func_400(UNK_0xD803B885F5E47A62()))
				{
					return true;
				}
				break;
			case 129:
				if (!func_400(UNK_0xD803B885F5E47A62()))
				{
					return true;
				}
				break;
			case 174:
				if (!func_400(UNK_0xD803B885F5E47A62()))
				{
					return true;
				}
				break;
			case 175:
				return true;
		}
	}
	return false;
}

bool func_400(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_1, 4);
}

bool func_401(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_138(UNK_0xD803B885F5E47A62()) && !func_219(UNK_0xD803B885F5E47A62())) && !func_287(UNK_0xD803B885F5E47A62()))
		{
			return true;
		}
	}
	if (iParam0 == 27)
	{
		if (func_137(UNK_0xD803B885F5E47A62(), 0) && func_219(UNK_0xD803B885F5E47A62()))
		{
			return true;
		}
		if (func_402(UNK_0xD803B885F5E47A62()) == 3)
		{
			return true;
		}
	}
	return false;
}

int func_402(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = 2;
	bVar1 = ((func_138(bParam0) && !func_257(bParam0)) && !UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 8));
	bVar2 = func_219(bParam0);
	bVar3 = func_410();
	bVar4 = func_404();
	if ((bVar1 && (func_256(bParam0) || func_255(bParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_250(bParam0)) && !func_403(bParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2537071.f_5124.f_216 != iVar0)
	{
		Global_2537071.f_5124.f_216 = iVar0;
	}
	return iVar0;
}

bool func_403(bool bParam0)
{
	return func_200(bParam0, 19);
}

bool func_404()
{
	if ((func_200(UNK_0xD803B885F5E47A62(), 21) || func_200(UNK_0xD803B885F5E47A62(), 22)) || func_407())
	{
		return true;
	}
	if (func_405())
	{
		func_233(22);
		return true;
	}
	return false;
}

bool func_405()
{
	if (func_137(UNK_0xD803B885F5E47A62(), 0))
	{
		if (((func_410() && !func_406()) || func_247(UNK_0xD803B885F5E47A62(), 21)) || func_247(UNK_0xD803B885F5E47A62(), 25))
		{
			return true;
		}
		else
		{
			func_232(27);
		}
	}
	return false;
}

bool func_406()
{
	return Global_1312418.f_1;
}

bool func_407()
{
	return func_408(358, -1);
}

bool func_408(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_409(iParam1)];
	if (UNK_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return false;
}

int func_409(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_149();
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

bool func_410()
{
	return Global_1312418;
}

bool func_411()
{
	return UNK_0xEAE0D21A50E6C7F4(Local_236[UNK_0x57270EE11514DC67() /*6*/].f_1, true);
}

void func_412()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < UNK_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = UNK_0xB98DB26FBF676FA1(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_413(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_413(int iParam0)
{
	struct<6> Var0;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;

	if (UNK_0x218F818E64020C17(1, iParam0, &Var0, 13))
	{
		if (Local_176.f_34 > -1)
		{
			if (func_411())
			{
				if (!func_404())
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_236[UNK_0x57270EE11514DC67() /*6*/].f_1, 5))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, 4))
						{
							if (UNK_0xC844350D5D58C99A(Var0))
							{
								if (Var0.f_5)
								{
									if (UNK_0xEC560E589DF8370E(Var0))
									{
										bVar14 = UNK_0x940C1429253D3B1B(Var0);
										if (UNK_0x34BFC6F0CB887BC2(bVar14))
										{
											bVar15 = UNK_0x83FACCC48B68F9D1(bVar14);
											if (bVar15 == UNK_0x117658E336116132(Local_176.f_34))
											{
												if (UNK_0xC844350D5D58C99A(Var0.f_1))
												{
													if (UNK_0xEC560E589DF8370E(Var0.f_1))
													{
														bVar13 = UNK_0x940C1429253D3B1B(Var0.f_1);
														if (UNK_0x34BFC6F0CB887BC2(bVar13))
														{
															iVar16 = UNK_0x83FACCC48B68F9D1(bVar13);
															if (iVar16 == UNK_0xD803B885F5E47A62())
															{
																UNK_0x5D96D8530B3D0904(&(Local_236[UNK_0x57270EE11514DC67() /*6*/].f_1), 5);
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
				}
			}
		}
	}
	if (func_411())
	{
		if (!func_200(UNK_0xD803B885F5E47A62(), 20))
		{
			if (UNK_0xC844350D5D58C99A(Var0))
			{
				if (UNK_0xEC560E589DF8370E(Var0))
				{
					bVar14 = UNK_0x940C1429253D3B1B(Var0);
					if (UNK_0x34BFC6F0CB887BC2(bVar14))
					{
						bVar15 = UNK_0x83FACCC48B68F9D1(bVar14);
						if (UNK_0xC844350D5D58C99A(Var0.f_1))
						{
							if (UNK_0xEC560E589DF8370E(Var0.f_1))
							{
								bVar13 = UNK_0x940C1429253D3B1B(Var0.f_1);
								if (UNK_0x34BFC6F0CB887BC2(bVar13))
								{
									iVar16 = UNK_0x83FACCC48B68F9D1(bVar13);
									if (iVar16 == UNK_0xD803B885F5E47A62())
									{
										if (UNK_0xFB75B0F82CA525F6(bVar15))
										{
											if (func_296(bVar15, 1))
											{
												if (Local_176.f_33 > -1)
												{
													bVar17 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(Local_176.f_33));
													if (func_329(bVar15, bVar17, 1))
													{
														func_414(0);
														func_252();
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
		}
	}
}

void func_414(bool bParam0)
{
	if (!func_219(UNK_0xD803B885F5E47A62()))
	{
		if (bParam0 || func_402(UNK_0xD803B885F5E47A62()) != 0)
		{
			func_233(20);
			func_415(func_417());
			if (func_138(UNK_0xD803B885F5E47A62()))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, 8))
				{
					UNK_0x5D96D8530B3D0904(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1), 8);
				}
			}
		}
	}
}

void func_415(int iParam0)
{
	int iVar0;

	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_416() /*10930*/].f_6174.f_4111[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_416()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

int func_417()
{
	int iVar0;

	iVar0 = func_230(UNK_0xD803B885F5E47A62());
	if (func_421(iVar0) == 0)
	{
		return -1;
	}
	if (func_420(iVar0))
	{
		return 65;
	}
	if (func_419(iVar0))
	{
		return 66;
	}
	if (func_418(iVar0))
	{
		return 63;
	}
	return 64;
}

bool func_418(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return true;
		default:
			break;
	}
	return false;
}

bool func_419(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return true;
		default:
			break;
	}
	return false;
}

bool func_420(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return true;
		default:
			break;
	}
	return false;
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0;
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
		case 24:
		case 26:
			return 1;
		case 148:
		case 179:
			return 2;
		default:
			break;
	}
	return -1;
}

void func_422()
{
	switch (Local_236[UNK_0x57270EE11514DC67() /*6*/].f_2)
	{
		case 0:
			func_842();
			func_423();
			if (Local_176.f_32 == 2)
			{
				Local_236[UNK_0x57270EE11514DC67() /*6*/].f_2 = 2;
			}
			else if (Local_176.f_32 == 3)
			{
				Local_236[UNK_0x57270EE11514DC67() /*6*/].f_2 = 3;
			}
			break;
		case 2:
			func_423();
			if (Local_176.f_32 == 3)
			{
				Local_236[UNK_0x57270EE11514DC67() /*6*/].f_2 = 3;
			}
			break;
		case 3:
			func_1018();
			break;
	}
}

void func_423()
{
	struct<20> Var0;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;

	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	bVar23 = func_32();
	bVar24 = func_32();
	bVar25 = func_32();
	if (!UNK_0xEAE0D21A50E6C7F4(Local_236[UNK_0x57270EE11514DC67() /*6*/].f_1, 4))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 9))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, true))
			{
				if (UNK_0x57270EE11514DC67() == Local_176.f_33 || func_1006() == Local_176.f_33)
				{
					if (func_402(UNK_0xD803B885F5E47A62()) >= 2)
					{
						bVar26 = func_841();
						iVar27 = func_840(UNK_0xD803B885F5E47A62());
						func_838(87, "GB_WINNER", "BIGM_SGHTYD", bVar26, iVar27, 0, -1, -1, -1, 2, -1);
					}
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 6))
					{
						func_726(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
						UNK_0x5D96D8530B3D0904(&bLocal_429, 6);
					}
					func_546(142, 1, &Var0, 0);
					UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
				}
				else if (func_411())
				{
					if (func_296(UNK_0xD803B885F5E47A62(), 1))
					{
						if (func_402(UNK_0xD803B885F5E47A62()) >= 2)
						{
							bVar26 = func_540(UNK_0x117658E336116132(Local_176.f_34));
							iVar27 = func_840(UNK_0x117658E336116132(Local_176.f_34));
							func_838(88, "GB_WORK_OVER", "BIGM_SGHTFD3", bVar26, iVar27, 0, -1, -1, -1, 2, -1);
						}
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 6))
						{
							func_726(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							UNK_0x5D96D8530B3D0904(&bLocal_429, 6);
						}
						func_546(142, 0, &Var0, 0);
					}
					else
					{
						if (func_402(UNK_0xD803B885F5E47A62()) >= 2)
						{
							bVar26 = func_540(UNK_0x117658E336116132(Local_176.f_34));
							iVar27 = func_840(UNK_0x117658E336116132(Local_176.f_34));
							func_838(88, "GB_WORK_OVER", "BIGM_SGHTFD5", bVar26, iVar27, 0, -1, -1, -1, 2, -1);
						}
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 6))
						{
							func_726(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							UNK_0x5D96D8530B3D0904(&bLocal_429, 6);
						}
						func_546(142, 0, &Var0, 0);
					}
				}
				UNK_0x5D96D8530B3D0904(&bLocal_429, 9);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, 3))
			{
				func_539(88, "GB_WORK_OVER", "BIGM_SGHTFT", 1, -1, 2, 1, 0);
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 6))
				{
					func_726(0, 7, 0, 0, -1, -1, -1, -1, -1, 0);
					UNK_0x5D96D8530B3D0904(&bLocal_429, 6);
				}
				func_546(142, 0, &Var0, 0);
				UNK_0x5D96D8530B3D0904(&bLocal_429, 9);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, 4))
			{
				if (Local_176.f_35 > -1)
				{
					bVar24 = UNK_0x117658E336116132(Local_176.f_35);
				}
				if (UNK_0x57270EE11514DC67() == Local_176.f_33)
				{
					if (func_402(UNK_0xD803B885F5E47A62()) >= 2)
					{
						if (UNK_0x40B8C182D63932FC(bVar24))
						{
							if (func_296(bVar24, 1))
							{
								bVar26 = func_540(bVar24);
								iVar27 = func_840(bVar24);
							}
							else
							{
								bVar26 = UNK_0x6E524813889AECF8(bVar24);
								iVar27 = 1;
							}
							func_838(88, "GB_WORK_OVER", "BIGM_SGHTFMK", bVar26, iVar27, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_838(88, "GB_WORK_OVER", "BIGM_SGHTFD2", bVar26, iVar27, 0, -1, -1, -1, 2, -1);
						}
					}
					func_546(142, 0, &Var0, 0);
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 6))
					{
						func_726(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
						UNK_0x5D96D8530B3D0904(&bLocal_429, 6);
					}
				}
				else if (func_1006() == Local_176.f_33)
				{
					bVar23 = UNK_0x117658E336116132(Local_176.f_34);
					if (bVar23 != func_32())
					{
						if (func_402(UNK_0xD803B885F5E47A62()) >= 2)
						{
							if (UNK_0x40B8C182D63932FC(bVar24))
							{
								if (func_296(bVar24, 1))
								{
									bVar26 = func_540(bVar24);
									iVar27 = func_840(bVar24);
								}
								else
								{
									bVar26 = UNK_0x6E524813889AECF8(bVar24);
									iVar27 = 1;
								}
								func_838(88, "GB_WORK_OVER", "BIGM_SGHTGK", bVar26, iVar27, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_838(88, "GB_WORK_OVER", "BIGM_SGHTFD2", bVar26, iVar27, 0, -1, -1, -1, 2, -1);
							}
						}
						func_546(142, 0, &Var0, 0);
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 6))
						{
							func_726(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							UNK_0x5D96D8530B3D0904(&bLocal_429, 6);
						}
					}
				}
				else if (func_411())
				{
					bVar24 = UNK_0x117658E336116132(Local_176.f_35);
					if (bVar24 != func_32())
					{
						if (bVar24 == UNK_0xD803B885F5E47A62())
						{
							if (func_402(UNK_0xD803B885F5E47A62()) >= 2)
							{
								if (func_538(1))
								{
									func_539(87, "GB_WINNER", "BIGM_SGHTYK", 1, -1, 2, 1, 0);
								}
								else
								{
									func_539(87, "GB_WINNER", "BIGM_SGHTYK2", 1, -1, 2, 1, 0);
								}
							}
							UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
							if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 6))
							{
								func_726(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
								UNK_0x5D96D8530B3D0904(&bLocal_429, 6);
							}
							func_546(142, 1, &Var0, 0);
						}
						else if (func_538(1))
						{
							bVar25 = func_537();
							if (func_329(bVar24, bVar25, 1))
							{
								if (func_402(UNK_0xD803B885F5E47A62()) >= 2)
								{
									func_501(87, bVar24, -1, "BIGM_SGHTWK", "GB_WINNER", 1, -1, 2, 0);
								}
								if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 6))
								{
									func_726(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
									UNK_0x5D96D8530B3D0904(&bLocal_429, 6);
								}
								func_546(142, 0, &Var0, 0);
							}
							else
							{
								if (func_402(UNK_0xD803B885F5E47A62()) >= 2)
								{
									if (UNK_0x40B8C182D63932FC(bVar24))
									{
										if (func_296(bVar24, 1))
										{
											bVar26 = func_540(bVar24);
											iVar27 = func_840(bVar24);
										}
										else
										{
											bVar26 = UNK_0x6E524813889AECF8(bVar24);
											iVar27 = 1;
										}
										func_838(88, "GB_WORK_OVER", "BIGM_SGHTWK", bVar26, iVar27, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_539(88, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2, 1, 0);
									}
								}
								if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 6))
								{
									func_726(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
									UNK_0x5D96D8530B3D0904(&bLocal_429, 6);
								}
								func_546(142, 0, &Var0, 0);
							}
						}
						else
						{
							if (func_402(UNK_0xD803B885F5E47A62()) >= 2)
							{
								if (UNK_0x40B8C182D63932FC(bVar24))
								{
									if (func_296(bVar24, 1))
									{
										bVar26 = func_540(bVar24);
										iVar27 = func_840(bVar24);
									}
									else
									{
										bVar26 = UNK_0x6E524813889AECF8(bVar24);
										iVar27 = 1;
									}
									func_838(88, "GB_WORK_OVER", "BIGM_SGHTNGK", bVar26, iVar27, 0, -1, -1, -1, 2, -1);
								}
								else
								{
									func_539(88, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2, 1, 0);
								}
							}
							if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 6))
							{
								func_726(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								UNK_0x5D96D8530B3D0904(&bLocal_429, 6);
							}
							func_546(142, 0, &Var0, 0);
						}
					}
				}
				UNK_0x5D96D8530B3D0904(&bLocal_429, 9);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, 5))
			{
				if (func_457())
				{
					if (func_1005())
					{
						if (func_402(UNK_0xD803B885F5E47A62()) >= 2)
						{
						}
					}
					else if (func_402(UNK_0xD803B885F5E47A62()) >= 2)
					{
						func_539(88, "GB_WORK_OVER", "BIGM_SGHTRBQ", 1, -1, 2, 1, 0);
					}
				}
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 6))
				{
					func_726(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
					UNK_0x5D96D8530B3D0904(&bLocal_429, 6);
				}
				func_546(159, 0, &Var0, 0);
				UNK_0x5D96D8530B3D0904(&bLocal_429, 9);
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_429, 9))
		{
			func_450();
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_430, 8))
			{
				UNK_0x5D96D8530B3D0904(&bLocal_430, 8);
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 10))
			{
				if (Local_176.f_34 != -1)
				{
					if (UNK_0xEAE0D21A50E6C7F4(bLocal_429, 5))
					{
						if (UNK_0x40B8C182D63932FC(UNK_0x117658E336116132(Local_176.f_34)))
						{
							func_448(UNK_0x117658E336116132(Local_176.f_34), 432, 0, 0);
							func_447(UNK_0x117658E336116132(Local_176.f_34), 1, 0, 0);
							func_446(UNK_0x117658E336116132(Local_176.f_34), 0, 0, 0);
							func_445(UNK_0x117658E336116132(Local_176.f_34), 0);
							func_442(UNK_0x117658E336116132(Local_176.f_34), Global_262145.f_12355, 0, 0);
							UNK_0x5D96D8530B3D0904(&bLocal_429, 10);
						}
					}
				}
			}
			if (func_424(&uLocal_803, 1, 0))
			{
				UNK_0x5D96D8530B3D0904(&(Local_236[UNK_0x57270EE11514DC67() /*6*/].f_1), 4);
			}
		}
	}
}

bool func_424(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	func_233(29);
	if ((*uParam0 > 0 && !func_338()) && func_402(UNK_0xD803B885F5E47A62()) != 0)
	{
		if (!func_440())
		{
			func_439();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_9(&(uParam0->f_3)))
			{
				func_8(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				UNK_0x5D96D8530B3D0904(&(Global_1674347.f_3), 2);
				if (bParam1)
				{
					UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4588), false);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_438(uParam0, 1);
			}
			break;
		case 1:
			if (func_9(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
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
				func_431(bParam2);
				func_438(uParam0, 2);
			}
			break;
		case 2:
			func_431(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_425(func_426(0)))
				{
					UNK_0xA37A90C62806D848(1);
				}
				func_438(uParam0, 3);
			}
			break;
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				UNK_0x0674E58A79778E99(&(Global_2537071.f_4588), true);
				UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 2);
				func_438(uParam0, 4);
				return true;
			}
			break;
		case 4:
			UNK_0x0674E58A79778E99(&(Global_2537071.f_4588), true);
			UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 2);
			return true;
	}
	return false;
}

bool func_425(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

bool func_426(bool bParam0)
{
	if (((func_429(UNK_0xD803B885F5E47A62()) || func_428(UNK_0xD803B885F5E47A62())) || func_358()) || bParam0)
	{
		if (func_428(UNK_0xD803B885F5E47A62()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_326(func_427()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_427()
{
	return Global_1650640;
}

bool func_428(bool bParam0)
{
	return func_327(func_230(bParam0), 0);
}

bool func_429(bool bParam0)
{
	return func_430(func_230(bParam0));
}

bool func_430(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 148 && func_285(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_35, 1))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return true;
	}
	return false;
}

void func_431(bool bParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, false))
	{
		if (((((((((((!UNK_0x0178C60FEA5C5A75() && !UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_795, 2)) && func_1115(UNK_0xD803B885F5E47A62(), 1, 1)) && !Global_73825) && !Global_58693) && !UNK_0x757EF87A33649210()) && !func_200(UNK_0xD803B885F5E47A62(), 22)) && func_402(UNK_0xD803B885F5E47A62()) != 0) && !func_436(func_437())) && !func_429(UNK_0xD803B885F5E47A62())) && !func_435(func_230(UNK_0xD803B885F5E47A62()))) && !func_434(func_230(UNK_0xD803B885F5E47A62())))
		{
			UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4588), true);
			func_433(func_426(bParam0), -1);
			func_432(1);
			UNK_0x0674E58A79778E99(&(Global_2537071.f_4588), false);
		}
	}
}

void func_432(bool bParam0)
{
	bool bVar0;

	bVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_357(1))
	{
		bVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (bParam0 && !func_338())
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Boss_Message_Orange", bVar0, 0);
	}
}

void func_433(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, false, iParam1);
}

bool func_434(int iParam0)
{
	switch (iParam0)
	{
		case 150:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return true;
		default:
			break;
	}
	return false;
}

bool func_435(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return true;
		default:
			break;
	}
	return false;
}

bool func_436(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return true;
		default:
			break;
	}
	return false;
}

int func_437()
{
	bool bVar0;

	bVar0 = UNK_0xBB0808A181D4745C();
	if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_438(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_439()
{
	Global_2462222 = 1;
}

bool func_440()
{
	if (((((((func_230(UNK_0xD803B885F5E47A62()) == 170 || func_230(UNK_0xD803B885F5E47A62()) == 219) || func_230(UNK_0xD803B885F5E47A62()) == 221) || func_230(UNK_0xD803B885F5E47A62()) == 220) || func_230(UNK_0xD803B885F5E47A62()) == 216) || func_230(UNK_0xD803B885F5E47A62()) == 215) || func_230(UNK_0xD803B885F5E47A62()) == 214) || func_230(UNK_0xD803B885F5E47A62()) == 218)
	{
		return true;
	}
	if (func_441(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	return false;
}

bool func_441(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1115(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_31(Global_2425662[bParam0 /*421*/].f_310.f_5) == 2;
			}
		}
	}
	return false;
}

void func_442(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_444(bParam0))
	{
		return;
	}
	if (func_443(&(Global_2416079.f_753[bParam0]), &(Global_2416079.f_1116[bParam0]), &(Global_2416079.f_392), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_555[bParam0] = uParam1;
		}
	}
}

bool func_443(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		if (!UNK_0x1727A44C562FBED2(*uParam1) || *uParam1 == UNK_0x0D0A574C76D769AC())
		{
			*uParam1 = UNK_0x0D0A574C76D769AC();
			*uParam0 = UNK_0x0D0A574C76D769AC();
		}
	}
	if (!UNK_0x1727A44C562FBED2(*uParam0) || *uParam0 == UNK_0x0D0A574C76D769AC())
	{
		if (bParam3)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(*bParam2, bParam4))
			{
				*bParam6 = 1;
				UNK_0x5D96D8530B3D0904(bParam2, bParam4);
			}
			*uParam0 = UNK_0x0D0A574C76D769AC();
		}
		else
		{
			if (UNK_0xEAE0D21A50E6C7F4(*bParam2, bParam4))
			{
				*bParam6 = 1;
				UNK_0x0674E58A79778E99(bParam2, bParam4);
			}
			if (*uParam1 == UNK_0x0D0A574C76D769AC())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return true;
	}
	else if (UNK_0x1727A44C562FBED2(*uParam1) && !*uParam1 == UNK_0x0D0A574C76D769AC())
	{
	}
	return false;
}

bool func_444(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return true;
	}
	if (UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) == func_239())
	{
		return true;
	}
	return false;
}

void func_445(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_2416079.f_368), bParam0);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_2416079.f_368), bParam0);
	}
	if (UNK_0xE4EDC4B0E92C078B(Global_2416079[bParam0]))
	{
		if (bParam1)
		{
			UNK_0x6ABCCE651368DB93(Global_2416079[bParam0], false);
		}
		else
		{
			UNK_0x6ABCCE651368DB93(Global_2416079[bParam0], true);
		}
	}
}

void func_446(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_444(bParam0))
	{
		return;
	}
	if (func_443(&(Global_2416079.f_819[bParam0]), &(Global_2416079.f_1182[bParam0]), &(Global_2416079.f_367), bParam1, bParam0, bParam3, &uVar0))
	{
		func_445(bParam0, bParam2);
	}
}

void func_447(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_444(bParam0))
	{
		return;
	}
	if (func_443(&(Global_2416079.f_621[bParam0]), &(Global_2416079.f_984[bParam0]), &(Global_2416079.f_389), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_456[bParam0] = iParam1;
		}
	}
}

void func_448(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;

	if (func_444(bParam0))
	{
		return;
	}
	if (func_443(&(Global_2416079.f_588[bParam0]), &(Global_2416079.f_951[bParam0]), &(Global_2416079.f_388), bParam2, bParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_423[bParam0] = iParam1;
		}
		if (bVar0)
		{
			func_449();
		}
	}
}

void func_449()
{
	Global_2416079.f_1614 = 1;
}

void func_450()
{
	if (!func_456())
	{
		return;
	}
	if (!UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) == Global_1312585.f_9)
	{
		return;
	}
	func_451();
}

void func_451()
{
	func_453();
	func_452(0);
}

void func_452(bool bParam0)
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

void func_453()
{
	if (!func_455())
	{
	}
	if (func_456())
	{
		UNK_0x400C0D66EFD08603(&(Global_1312585.f_12));
		func_454();
		UNK_0x35F2C6537D10DAEB();
	}
}

void func_454()
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

bool func_455()
{
	if (!func_456())
	{
		return false;
	}
	UNK_0x18B60B994182620C(&(Global_1312585.f_12));
	func_454();
	return UNK_0xB165082A56EE6E7F();
}

bool func_456()
{
	if (Global_1312585 == 20)
	{
		return false;
	}
	return true;
}

bool func_457()
{
	if (!func_458(1, 1, 1, 0))
	{
		return false;
	}
	if (func_404())
	{
		return false;
	}
	return true;
}

bool func_458(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_500(UNK_0xD803B885F5E47A62(), 29))
	{
		return false;
	}
	if (func_247(UNK_0xD803B885F5E47A62(), 21))
	{
		return false;
	}
	if (func_247(UNK_0xD803B885F5E47A62(), 25))
	{
		return false;
	}
	if (bParam2)
	{
		if (UNK_0x09BE1E6DF7B80B43())
		{
			return false;
		}
	}
	if (!func_320(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (bParam0)
	{
		if (UNK_0xF929B1A0A409FF93())
		{
			return false;
		}
	}
	if (func_117(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (func_499())
	{
		return false;
	}
	if (func_391())
	{
		return false;
	}
	if (func_498())
	{
		return false;
	}
	if (func_385())
	{
		return false;
	}
	if (UNK_0xA14BB9332558B949())
	{
		return false;
	}
	if (func_48(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (!func_387())
	{
		return false;
	}
	if (func_247(UNK_0xD803B885F5E47A62(), 0) || func_247(UNK_0xD803B885F5E47A62(), 3))
	{
		return false;
	}
	if ((func_247(UNK_0xD803B885F5E47A62(), 12) || func_247(UNK_0xD803B885F5E47A62(), 14)) || func_247(UNK_0xD803B885F5E47A62(), 13))
	{
		return false;
	}
	if (func_491(UNK_0xD803B885F5E47A62(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_467())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (func_466())
		{
			return false;
		}
	}
	if (Global_1662006)
	{
		return false;
	}
	if (func_136(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (func_465())
	{
		return false;
	}
	if (func_464(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if ((func_463(UNK_0xD803B885F5E47A62()) && func_462(UNK_0xD803B885F5E47A62()) == 123) && !bParam3)
	{
		return false;
	}
	if (func_461())
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, 4))
	{
		return false;
	}
	if (func_460(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (func_220(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (!func_219(UNK_0xD803B885F5E47A62()))
	{
		if (func_459(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	return true;
}

bool func_459(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1703159[iVar0 /*13*/].f_12 != 0;
	}
	return false;
}

bool func_460(int iParam0)
{
	if (Global_2425662[iParam0 /*421*/].f_261.f_4 != 0 || Global_2425662[iParam0 /*421*/].f_261.f_5)
	{
		return true;
	}
	return false;
}

bool func_461()
{
	return Global_1676377.f_4303 != -1;
}

int func_462(bool bParam0)
{
	if (bParam0 != func_32() && func_1115(bParam0, 1, 1))
	{
		return Global_2425662[bParam0 /*421*/].f_310.f_14;
	}
	return -1;
}

bool func_463(bool bParam0)
{
	if (bParam0 != func_32() && func_1115(bParam0, 1, 1))
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310, 3);
	}
	return false;
}

bool func_464(int iParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 14))
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 11))
	{
		return true;
	}
	return false;
}

bool func_465()
{
	if (Global_4254512.f_943 > -1)
	{
		return true;
	}
	return false;
}

bool func_466()
{
	return Global_98796.f_346 > 0;
}

bool func_467()
{
	int iVar0;

	iVar0 = func_230(UNK_0xD803B885F5E47A62());
	if (((func_490(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_28) || func_489(UNK_0xD803B885F5E47A62())) || func_488(UNK_0xD803B885F5E47A62())) || func_483(UNK_0xD803B885F5E47A62()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return true;
		}
	}
	if (func_481(UNK_0xD803B885F5E47A62()))
	{
		if (func_419(iVar0) || func_480(iVar0))
		{
			return true;
		}
	}
	if (func_441(UNK_0xD803B885F5E47A62()))
	{
		if (func_480(iVar0))
		{
			return true;
		}
	}
	if (func_479(UNK_0xD803B885F5E47A62()))
	{
		if (func_478(iVar0))
		{
			return true;
		}
	}
	if (func_477(UNK_0xD803B885F5E47A62()))
	{
		if (func_476(iVar0))
		{
			return true;
		}
	}
	if (func_475(UNK_0xD803B885F5E47A62()))
	{
		if (func_474(iVar0))
		{
			return true;
		}
	}
	if (func_473(UNK_0xD803B885F5E47A62()))
	{
		if (func_472(iVar0))
		{
			return true;
		}
	}
	if (func_30(UNK_0xD803B885F5E47A62(), 0))
	{
		if (func_418(iVar0))
		{
			if (func_470(UNK_0xD803B885F5E47A62()))
			{
				return true;
			}
		}
	}
	if (func_469(UNK_0xD803B885F5E47A62()))
	{
		if (func_468(iVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_468(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return true;
		default:
			break;
	}
	return false;
}

bool func_469(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1115(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_31(Global_2425662[bParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return false;
}

bool func_470(bool bParam0)
{
	if (func_471(bParam0) != func_32())
	{
		return func_471(bParam0) == func_88(bParam0);
	}
	return false;
}

bool func_471(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_11.f_35;
}

bool func_472(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return true;
		default:
			break;
	}
	return false;
}

bool func_473(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1115(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_31(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_474(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return true;
		default:
			break;
	}
	return false;
}

bool func_475(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1115(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_31(Global_2425662[bParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return false;
}

bool func_476(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return true;
		default:
			break;
	}
	return false;
}

bool func_477(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1115(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_31(Global_2425662[bParam0 /*421*/].f_310.f_5) == 7;
			}
		}
	}
	return false;
}

bool func_478(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return true;
		default:
			break;
	}
	return false;
}

bool func_479(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1115(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_31(Global_2425662[bParam0 /*421*/].f_310.f_5) == 4;
			}
		}
	}
	return false;
}

bool func_480(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return true;
		default:
			break;
	}
	return false;
}

bool func_481(int iParam0)
{
	if (func_482(Global_1590535[iParam0 /*876*/].f_274.f_28, -1))
	{
		return true;
	}
	return false;
}

bool func_482(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return true;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}
	return false;
}

bool func_483(int iParam0)
{
	if (func_484(Global_1590535[iParam0 /*876*/].f_274.f_28, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_484(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_485(UNK_0xD803B885F5E47A62(), 0);
	}
	if (bParam1)
	{
		if (func_485(UNK_0xD803B885F5E47A62(), 0))
		{
			return false;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return true;
		}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return true;
	}
	return false;
}

bool func_485(int iParam0, bool bParam1)
{
	if (Global_1590373 != func_32())
	{
		if (!func_487(Global_1590373))
		{
			return false;
		}
		if (bParam1)
		{
			if (UNK_0xD803B885F5E47A62() != Global_1590373)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[Global_1590373 /*421*/].f_195, 24) || func_486(Global_1590373))
				{
					return true;
				}
			}
		}
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_195, 24);
}

bool func_486(int iParam0)
{
	if (iParam0 != func_32())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_195, 9);
	}
	return false;
}

bool func_487(int iParam0)
{
	if (iParam0 != func_32())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_351, 2);
	}
	return false;
}

bool func_488(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1115(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_31(Global_2425662[bParam0 /*421*/].f_310.f_5) == 1;
			}
		}
	}
	return false;
}

bool func_489(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1115(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_31(Global_2425662[bParam0 /*421*/].f_310.f_5) == 0;
			}
		}
	}
	return false;
}

bool func_490(int iParam0)
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

bool func_491(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590535[bParam0 /*876*/].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, false))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (!bParam2)
	{
		if (func_489(bParam0))
		{
			return true;
		}
	}
	if (!bParam3)
	{
		if (func_441(bParam0))
		{
			return true;
		}
	}
	if (!bParam4)
	{
		if (func_488(bParam0))
		{
			return true;
		}
	}
	if (!bParam5)
	{
		if (func_479(bParam0))
		{
			return true;
		}
	}
	if (!bParam6)
	{
		if (func_477(bParam0))
		{
			return true;
		}
	}
	if (!bParam7)
	{
		if (func_475(bParam0))
		{
			return true;
		}
	}
	if (!bParam8)
	{
		if (func_497(bParam0))
		{
			return true;
		}
	}
	if (!bParam9)
	{
		if (func_473(bParam0))
		{
			return true;
		}
	}
	if (!bParam10)
	{
		if (func_496(bParam0))
		{
			return true;
		}
	}
	if (!bParam11)
	{
		if (func_30(bParam0, 0))
		{
			return true;
		}
	}
	if (!bParam12)
	{
		if (func_495(bParam0))
		{
			return true;
		}
	}
	if (!bParam13)
	{
		if (func_469(bParam0))
		{
			return true;
		}
	}
	if (!bParam14)
	{
		if (func_494(bParam0))
		{
			return true;
		}
	}
	if (!bParam15)
	{
		if (func_493(bParam0))
		{
			return true;
		}
	}
	if (!bParam16)
	{
		if (func_492(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_492(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1115(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_31(Global_2425662[bParam0 /*421*/].f_310.f_5) == 17;
			}
		}
	}
	return false;
}

bool func_493(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1115(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_31(Global_2425662[bParam0 /*421*/].f_310.f_5) == 16;
			}
		}
	}
	return false;
}

bool func_494(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1115(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_31(Global_2425662[bParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return false;
}

bool func_495(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1115(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_31(Global_2425662[bParam0 /*421*/].f_310.f_5) == 13;
			}
		}
	}
	return false;
}

bool func_496(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1115(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_31(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_497(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1115(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_32())
			{
				return func_31(Global_2425662[bParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return false;
}

bool func_498()
{
	return Global_1312877;
}

bool func_499()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, false);
}

bool func_500(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_5, bParam1);
}

int func_501(int iParam0, bool bParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<80> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_536(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = bParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		func_336(&(Var0.f_69), iParam8);
	}
	return func_502(&Var0);
}

int func_502(var uParam0)
{
	int iVar0;

	if (uParam0->f_1 == 1)
	{
		if (Global_2439138.f_3045)
		{
			return 0;
		}
	}
	func_513(uParam0, uParam0->f_17);
	func_512(uParam0);
	if (func_123())
	{
		func_512(uParam0);
	}
	if (func_511(uParam0->f_1))
	{
		func_504();
		if (Global_2439138.f_2723[0 /*80*/].f_2 == 0)
		{
			Global_2439138.f_2723[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2439138.f_2723[0 /*80*/].f_1 == 13 || Global_2439138.f_2723[0 /*80*/].f_1 == 53) || Global_2439138.f_2723[0 /*80*/].f_1 == 54) || Global_2439138.f_2723[0 /*80*/].f_1 == 58)
		{
			Global_2439138.f_2723[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2439138.f_2723[iVar0 + 1 /*80*/] = { Global_2439138.f_2723[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2439138.f_2723[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_2 == 0)
		{
			Global_2439138.f_2723[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_504();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_336(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 2);
				Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_503(uParam0->f_69, 128))
			{
				if (func_341(Global_2439138.f_2723[iVar0 /*80*/].f_1))
				{
					Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
					func_336(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_503(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_504()
{
	bool bVar0;

	if (Global_2439138.f_3046)
	{
		return;
	}
	if (!Global_76890)
	{
		Global_76890 = 1;
		bVar0 = true;
	}
	func_505();
	if (bVar0)
	{
		Global_76890 = 0;
	}
}

void func_505()
{
	Global_2439138.f_3047 = 0;
	Global_2439138.f_3047.f_578 = 0;
	func_509(&(Global_2439138.f_3047.f_1));
	Global_2439138.f_3047.f_1.f_1 = 0;
	func_506(&(Global_2439138.f_3047.f_1));
}

void func_506(var uParam0)
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
				if (UNK_0x757EF87A33649210() && !func_508(0))
				{
					UNK_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_507(0);
}

void func_507(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_508(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_509(var uParam0)
{
	func_510(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_510(var uParam0)
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

bool func_511(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return true;
	}
	return false;
}

void func_512(var uParam0)
{
	if (func_343(uParam0->f_1))
	{
		uParam0->f_72 = func_301();
	}
}

void func_513(var uParam0, bool bParam1)
{
	if (func_343(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == func_32() || !func_1115(bParam1, 0, 1))
	{
		return;
	}
	if (func_341(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_514(bParam1, -2, 0, 0, 0);
		}
	}
}

int func_514(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (func_92(bParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = UNK_0x08067D4957B73C02(bParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_190067[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_92(UNK_0xD803B885F5E47A62()) || (func_535() && func_534())) && !UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 31)) && !bParam4)
	{
		bVar1 = func_533();
		if (UNK_0xC844350D5D58C99A(bVar1))
		{
			if (UNK_0x34BFC6F0CB887BC2(bVar1))
			{
				if (UNK_0x83FACCC48B68F9D1(bVar1) != -1)
				{
					if (func_1115(UNK_0x83FACCC48B68F9D1(bVar1), 0, 1))
					{
						if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_531(iParam1, bParam0, 0);
							}
							else
							{
								return func_526(bParam0, UNK_0x83FACCC48B68F9D1(bVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_526(bParam0, UNK_0x83FACCC48B68F9D1(bVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_531(iParam1, bParam0, 0);
				}
				else
				{
					return func_515(0, -1, 0);
				}
			}
			else
			{
				return func_515(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_531(iParam1, bParam0, 0);
		}
		else
		{
			return func_526(bParam0, UNK_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_526(bParam0, UNK_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_515(bool bParam0, int iParam1, bool bParam2)
{
	return func_516(UNK_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_516(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!UNK_0x40B8C182D63932FC(bParam0))
	{
		return 3;
	}
	iVar0 = UNK_0x08067D4957B73C02(bParam0);
	if ((func_525() || (func_524() && func_522())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_521(iParam2, iVar0);
		}
		else
		{
			return func_521(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_91(iVar0, iParam2, 0) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_520(1);
				}
				else
				{
					return func_520(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 20))
			{
				return func_517(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_517(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_520(1);
	}
	return func_520(0);
}

int func_517(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_519(iParam0, iParam1, iParam3);
	if (func_518(Global_4456448.f_194990, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			case 1:
				return 29;
			case 2:
				return 30;
			case 3:
				return 31;
			case 4:
				return 32;
			case 5:
				return 33;
			case 6:
				return 34;
			case 7:
				return 35;
			case 8:
				return 36;
			case 9:
				return 37;
			case 10:
				return 38;
			case 11:
				return 39;
			case 12:
				return 40;
			case 13:
				return 41;
			case 14:
				return 42;
			case 15:
				return 43;
			default:
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			case 1:
				return 29;
			case 2:
				return 30;
			default:
				break;
		}
	}
	return 28;
}

bool func_518(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (Global_4456448.f_232883 == 65)
		{
			return true;
		}
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_519(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_91(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_520(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_521(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_519(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 21;
		case 2:
			return 24;
		case 3:
			return 18;
		default:
			break;
	}
	return 28;
}

bool func_522()
{
	if (func_523())
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 4);
}

bool func_523()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_524()
{
	if (UNK_0xA14BB9332558B949())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, false);
	}
	return ((UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, false) || Global_1653478) && UNK_0x8A22C4C08282BF26(joaat("FM_DEATHMATCH_CREATOR")) > 0);
}

bool func_525()
{
	if (func_523() && UNK_0xA14BB9332558B949())
	{
		return true;
	}
	return false;
}

int func_526(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if (iParam2 == -2)
	{
		iVar0 = UNK_0x08067D4957B73C02(bParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 148)
	{
		bVar1 = true;
	}
	bVar2 = bParam0;
	if (bVar2 > -1)
	{
		if (Global_1590535[bVar2 /*876*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_528())
			{
				iVar3 = func_300(bParam0);
				if (!iVar3 == -1)
				{
					return func_298(iVar3);
				}
			}
			if ((func_130(bParam1, bParam0, iVar0, 0) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)) || ((func_91(UNK_0x08067D4957B73C02(bParam1), UNK_0x08067D4957B73C02(bParam0), 0) && UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 23)) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)))
			{
				return func_520(1);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26))
			{
				return func_527(1);
			}
			else
			{
				return func_516(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[bParam0 /*876*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_520(1);
			}
			else
			{
				return func_516(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_300(bParam0);
	if (!iVar4 == -1)
	{
		return func_298(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_527(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_528()
{
	if (((func_279() || func_530()) || func_123()) || func_529())
	{
		return true;
	}
	return false;
}

bool func_529()
{
	return Global_2450632.f_19;
}

var func_530()
{
	return Global_2450632.f_16;
}

int func_531(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = Global_969031.f_14[iParam0];
	if (func_528())
	{
		iVar2 = func_300(bParam1);
		if (!iVar2 == -1)
		{
			return func_298(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iParam0 /*15700*/].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_32())
	{
		if (Global_4456448.f_190067[iParam0] != -1 && Global_4456448.f_190067[iParam0] <= 4)
		{
			if (Global_4456448.f_190067[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_190067[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_190067[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_190067[iParam0] == 4)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_190067[iParam0];
			}
		}
		else
		{
			iVar0 = func_516(bParam1, !bParam2, iParam0, 0);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_21, 13))
		{
			iVar0 = func_532(iParam0);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26) && !func_91(iParam0, UNK_0x08067D4957B73C02(bParam1), 0))
		{
			iVar0 = func_527(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_532(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_233007;
			break;
		case 1:
			iVar0 = Global_4456448.f_233008;
			break;
		case 2:
			iVar0 = Global_4456448.f_233009;
			break;
		case 3:
			iVar0 = Global_4456448.f_233010;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		case 1:
			return 21;
		case 2:
			return 24;
		case 3:
			return 18;
		case 4:
			return 6;
		case 5:
			return 9;
		case 6:
			return 3;
		case 7:
			return 1;
		case 8:
			return 12;
		case 9:
			return 2;
		default:
			break;
	}
	return 2;
}

bool func_533()
{
	return Global_2359302.f_2;
}

bool func_534()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 4);
}

bool func_535()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

void func_536(int iParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_32();
	uParam1->f_18 = func_32();
	uParam1->f_19 = func_32();
	uParam1->f_20 = func_32();
	uParam1->f_1 = iParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

bool func_537()
{
	return Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11;
}

bool func_538(bool bParam0)
{
	return func_296(UNK_0xD803B885F5E47A62(), bParam0);
}

int func_539(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_536(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_336(&(Var0.f_69), iParam7);
	}
	return func_502(&Var0);
}

bool func_540(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_545(&(Global_1628237[bParam0 /*615*/].f_11.f_104));
		return bVar0;
	}
	if (Global_1628237[bParam0 /*615*/].f_11.f_120 != Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_120)
	{
		bVar0 = func_543(bParam0, 0);
		return bVar0;
	}
	if (((func_200(bParam0, 28) || func_200(UNK_0xD803B885F5E47A62(), 28)) || func_542(bParam0)) && !func_541(bParam0))
	{
		return func_543(bParam0, 0);
	}
	bVar1 = func_88(bParam0);
	if (bVar1 != func_32())
	{
		if (bVar1 != UNK_0xD803B885F5E47A62())
		{
			if (!UNK_0xDC30EF462887322E() && !UNK_0x05449BDA851F5199(0, -1, 1))
			{
				return func_543(bVar1, 0);
			}
		}
	}
	if (bVar1 != func_32())
	{
		bVar0 = func_545(&(Global_1628237[bVar1 /*615*/].f_11.f_104));
		if (UNK_0xEA6BC48857E0AC4C(bVar0))
		{
			return func_543(bVar1, 0);
		}
		else
		{
			return bVar0;
		}
	}
	return "";
}

bool func_541(bool bParam0)
{
	struct<13> Var0;

	Var0 = { func_89(bParam0) };
	if (UNK_0xDC30EF462887322E())
	{
		if (UNK_0x4DEB7B48DD0AABA4(0))
		{
			if (UNK_0x5B9BB2932920F9CD(&Var0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_542(bool bParam0)
{
	struct<13> Var0;

	if (bParam0 != func_32())
	{
		Var0 = { func_89(bParam0) };
		if (UNK_0x33A494591F2C1975() || UNK_0x0EFF6B4415DAF4A1())
		{
			if (UNK_0x4DEB7B48DD0AABA4(0))
			{
				return false;
			}
		}
		else if (UNK_0xDC30EF462887322E())
		{
			if (UNK_0x4DEB7B48DD0AABA4(0))
			{
				if (UNK_0x5B9BB2932920F9CD(&Var0))
				{
					return false;
				}
			}
		}
	}
	return true;
}

char* func_543(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_283(bParam0, 1))
		{
			return func_544();
		}
	}
	return UNK_0x19C9F30A7697B43C("GB_REST_ACC");
}

char* func_544()
{
	return UNK_0x19C9F30A7697B43C("GB_REST_ACCM");
}

char* func_545(var uParam0)
{
	return uParam0;
}

void func_546(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;

	func_724(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		bVar0 = (bVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_723(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		bVar0 = (bVar0 + func_722(iParam0, bParam3));
		bVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(bVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		bVar0 = SYSTEM::ROUND((IntToFloat(bVar0) * fVar2));
		bVar0 = SYSTEM::ROUND((IntToFloat(bVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		bVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(bVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		bVar0 = SYSTEM::ROUND((IntToFloat(bVar0) * fVar2));
		bVar0 = SYSTEM::ROUND((IntToFloat(bVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		bVar0 = (bVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_720(iParam0))
	{
		if (bParam1)
		{
			if (func_719(UNK_0xD803B885F5E47A62()) > 0)
			{
				func_718();
			}
			else
			{
				func_717();
			}
		}
		else
		{
			func_716();
		}
	}
	func_700(iParam0, bParam1, uParam2, &bVar0, &iVar4);
	func_698(iParam0, uParam2, &bVar0, &iVar5);
	func_673(iParam0, uParam2, &bVar0, &iVar5);
	func_670(iParam0, uParam2, &bVar0, &iVar5, &iVar7);
	func_653(iParam0, uParam2, &bVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2537071.f_5124.f_382 = iVar4;
	}
	else
	{
		Global_2537071.f_5124.f_382 = iVar5;
	}
	bVar8 = func_360();
	if (bVar8 != func_32() && iParam0 != 148)
	{
		if (func_296(UNK_0xD803B885F5E47A62(), 0))
		{
			if (!func_329(UNK_0xD803B885F5E47A62(), bVar8, 1))
			{
				func_638(&bVar0, 1);
			}
		}
	}
	func_634(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	bVar0 = (bVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1674356.f_10 = iVar1;
		func_633();
		func_590(0, UNK_0x16F2683693E537C9(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (bVar0 > 0)
	{
		Global_1674356.f_9 = bVar0;
		func_567(iParam0, bVar0, iVar7, iVar4, iVar5, uParam2);
		func_566(iParam0, bVar0);
		if (func_565(iParam0))
		{
			if (func_564(iParam0) > -1)
			{
				func_563(func_564(iParam0), bVar0);
			}
		}
		Global_2462880 = bVar0;
		func_562(&Global_2461144, 0, 0);
	}
	if (func_250(UNK_0xD803B885F5E47A62()) || func_219(UNK_0xD803B885F5E47A62()))
	{
		func_553(iParam0);
	}
	if (func_430(iParam0))
	{
		Global_1674374.f_13 = bVar0;
		Global_1674374.f_14 = iVar1;
	}
	if (func_435(iParam0))
	{
		Global_1674428.f_13 = bVar0;
		Global_1674428.f_14 = iVar1;
	}
	if (func_478(iParam0))
	{
		Global_1674491.f_12 = bVar0;
		Global_1674491.f_13 = iVar1;
	}
	if (func_476(iParam0))
	{
		Global_1674535.f_12 = bVar0;
		Global_1674535.f_13 = iVar1;
	}
	if (func_474(iParam0))
	{
		Global_1674589.f_12 = bVar0;
		Global_1674589.f_13 = iVar1;
	}
	if (func_434(iParam0))
	{
		if (func_552(iParam0))
		{
			Global_1674671.f_12 = bVar0;
			Global_1674671.f_13 = iVar1;
		}
		else if (func_548(iParam0))
		{
			Global_1674725.f_12 = bVar0;
			Global_1674725.f_13 = iVar1;
		}
	}
	if (func_547(iParam0))
	{
		Global_1674809.f_12 = bVar0;
		Global_1674809.f_13 = iVar1;
	}
	if (func_468(iParam0))
	{
		Global_1674884.f_16 = bVar0;
		Global_1674884.f_17 = iVar1;
	}
}

bool func_547(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return true;
		default:
			break;
	}
	return false;
}

bool func_548(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_549(func_550(UNK_0xD803B885F5E47A62()))))
	{
		return true;
	}
	return false;
}

bool func_549(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

int func_550(bool bParam0)
{
	if (func_230(bParam0) == 237 || func_230(bParam0) == 250)
	{
		return func_551(bParam0);
	}
	return -1;
}

int func_551(bool bParam0)
{
	if (func_137(bParam0, 0))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

bool func_552(int iParam0)
{
	if (iParam0 == 237)
	{
		return true;
	}
	return false;
}

void func_553(int iParam0)
{
	if (func_561(UNK_0xD803B885F5E47A62()) && func_560())
	{
		if (func_419(iParam0))
		{
			func_555(10146, -1);
		}
		else if (func_420(iParam0))
		{
			func_555(10148, -1);
		}
		else if (func_327(iParam0, 1))
		{
			func_555(10149, -1);
		}
		else if (func_554(iParam0))
		{
			func_555(10150, -1);
		}
	}
}

bool func_554(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return true;
		default:
			break;
	}
	return false;
}

void func_555(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_559(iParam0, func_409(iParam1), 0);
	bVar0++;
	if (!func_558(iParam0))
	{
		func_557(iParam0, bVar0, iParam1, 1, 0);
	}
	else
	{
		func_556(iParam0, bVar0, iParam1, 1);
	}
}

void func_556(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = Global_2548434[iParam0 /*3*/][func_409(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_409(iParam2)] = bParam1;
			break;
		case 788:
			Global_1387994[func_409(iParam2)] = bParam1;
			break;
		case 789:
			Global_1388000[func_409(iParam2)] = bParam1;
			break;
		case 790:
			Global_1388006[func_409(iParam2)] = bParam1;
			break;
		case 8726:
			Global_1388012[func_409(iParam2)] = bParam1;
			break;
		case 777:
			Global_1387958[func_409(iParam2)] = bParam1;
			break;
		case 778:
			Global_1387964[func_409(iParam2)] = bParam1;
			break;
		case 779:
			Global_1387970[func_409(iParam2)] = bParam1;
			break;
		case 780:
			Global_1387976[func_409(iParam2)] = bParam1;
			break;
		case 8728:
			Global_1387982[func_409(iParam2)] = bParam1;
			break;
		case 767:
			Global_1387928[func_409(iParam2)] = bParam1;
			break;
		case 768:
			Global_1387934[func_409(iParam2)] = bParam1;
			break;
		case 769:
			Global_1387940[func_409(iParam2)] = bParam1;
			break;
		case 770:
			Global_1387946[func_409(iParam2)] = bParam1;
			break;
		case 8730:
			Global_1387952[func_409(iParam2)] = bParam1;
			break;
		case 757:
			Global_1388018[func_409(iParam2)] = bParam1;
			break;
		case 758:
			Global_1388024[func_409(iParam2)] = bParam1;
			break;
		case 759:
			Global_1388030[func_409(iParam2)] = bParam1;
			break;
		case 760:
			Global_1388036[func_409(iParam2)] = bParam1;
			break;
		case 8732:
			Global_1388042[func_409(iParam2)] = bParam1;
			break;
		case 1303:
			Global_1388048[func_409(iParam2)] = bParam1;
			break;
		case 7233:
			Global_1388054[func_409(iParam2)] = bParam1;
			break;
		case 639:
			Global_1388060[func_409(iParam2)] = bParam1;
			break;
		case 1278:
			Global_1388066[func_409(iParam2)] = bParam1;
			break;
		case 1876:
			Global_2586065[0 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 2267:
			Global_2586065[1 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 2929:
			Global_2586065[2 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3058:
			Global_2586065[3 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 10016:
			Global_2586214[func_409(iParam2)] = bParam1;
			break;
		case 764:
			Global_1388072[func_409(iParam2)] = bParam1;
			break;
		case 765:
			Global_1388078[func_409(iParam2)] = bParam1;
			break;
		case 766:
			Global_1388084[func_409(iParam2)] = bParam1;
			break;
		case 8731:
			Global_1388090[func_409(iParam2)] = bParam1;
			break;
		case 1236:
			Global_1388096[func_409(iParam2)] = bParam1;
			break;
		case 3053:
			Global_2586138[0 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3054:
			Global_2586138[1 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3055:
			Global_2586138[2 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3056:
			Global_2586138[3 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3057:
			Global_2586138[4 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3636:
			Global_2586217[0 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3637:
			Global_2586217[1 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3638:
			Global_2586217[2 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3639:
			Global_2586217[3 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3640:
			Global_2586217[4 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3641:
			Global_2586233[0 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3642:
			Global_2586233[1 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3643:
			Global_2586233[2 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3644:
			Global_2586233[3 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3645:
			Global_2586233[4 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3221:
			Global_2586138[5 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3227:
			Global_2586065[4 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3663:
			Global_2586249[func_409(iParam2)] = bParam1;
			break;
		case 3664:
			Global_2586258[func_409(iParam2)] = bParam1;
			break;
		case 3665:
			Global_2586252[func_409(iParam2)] = bParam1;
			break;
		case 3666:
			Global_2586261[func_409(iParam2)] = bParam1;
			break;
		case 3667:
			Global_2586255[func_409(iParam2)] = bParam1;
			break;
		case 3668:
			Global_2586264[func_409(iParam2)] = bParam1;
			break;
		case 3689:
			Global_2586267[func_409(iParam2)] = bParam1;
			break;
		case 3229:
			Global_2586138[6 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3230:
			Global_2586065[5 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3234:
			Global_2586138[7 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 3232:
			Global_2586065[6 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 4019:
			Global_2586138[8 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 4020:
			Global_2586065[7 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 4022:
			Global_2586138[9 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 4023:
			Global_2586065[8 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 4025:
			Global_2586138[10 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 4026:
			Global_2586065[9 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 4028:
			Global_2586138[11 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 4029:
			Global_2586065[10 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 6109:
			Global_2586138[12 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 6110:
			Global_2586065[11 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 6167:
			Global_2586138[13 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 6168:
			Global_2586065[12 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 6545:
			Global_2586138[14 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 6546:
			Global_2586065[13 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 6558:
			Global_2586138[15 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 6559:
			Global_2586065[14 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 6561:
			Global_2586138[16 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 6562:
			Global_2586065[15 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 6564:
			Global_2586138[17 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 6565:
			Global_2586065[16 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 7283:
			Global_2586065[17 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 7285:
			Global_2586065[18 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 7287:
			Global_2586065[19 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 8010:
			Global_2586065[20 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 8282:
			Global_2586270[func_409(iParam2)] = bParam1;
			break;
		case 8283:
			Global_2586273[func_409(iParam2)] = bParam1;
			break;
		case 8284:
			Global_2586276[func_409(iParam2)] = bParam1;
			break;
		case 8285:
			Global_2586279[func_409(iParam2)] = bParam1;
			break;
		case 8286:
			Global_2586282[func_409(iParam2)] = bParam1;
			break;
		case 8287:
			Global_2586285[func_409(iParam2)] = bParam1;
			break;
		case 8288:
			Global_2586288[func_409(iParam2)] = bParam1;
			break;
		case 8289:
			Global_2586291[func_409(iParam2)] = bParam1;
			break;
		case 8290:
			Global_2586294[func_409(iParam2)] = bParam1;
			break;
		case 8291:
			Global_2586297[func_409(iParam2)] = bParam1;
			break;
		case 8292:
			Global_2586300[func_409(iParam2)] = bParam1;
			break;
		case 8293:
			Global_2586303[func_409(iParam2)] = bParam1;
			break;
		case 8294:
			Global_2586306[func_409(iParam2)] = bParam1;
			break;
		case 8900:
			Global_2586309[func_409(iParam2)] = bParam1;
			break;
		case 8534:
			Global_2586065[21 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 8977:
			Global_2586138[23 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 8975:
			Global_2586065[22 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 8980:
			Global_2586138[24 /*3*/][func_409(iParam2)] = bParam1;
			break;
		case 8978:
			Global_2586065[23 /*3*/][func_409(iParam2)] = bParam1;
			break;
		default:
			break;
	}
}

void func_557(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_409(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

bool func_558(int iParam0)
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

int func_559(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_409(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_560()
{
	return func_359(UNK_0xD803B885F5E47A62());
}

bool func_561(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_123, 14);
}

void func_562(var uParam0, bool bParam1, bool bParam2)
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

void func_563(int iParam0, bool bParam1)
{
	if (bParam1 > 0)
	{
		if (Global_262145.f_23489 == 0 || Global_262145.f_23489 == 1)
		{
			if (!UNK_0x0EFF6B4415DAF4A1() || Global_262145.f_23489 == 1)
			{
				Global_2537071.f_283 = iParam0;
				if (bParam1 > Global_262145.f_6584)
				{
					bParam1 = Global_262145.f_6584;
				}
				Global_2537071.f_284 = bParam1;
				Global_2537071.f_285 = 0;
			}
		}
	}
}

int func_564(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		case 157:
			return 22;
		case 159:
			return 21;
		case 151:
			return 33;
		case 148:
			return 23;
		case 164:
			return 24;
		case 152:
			return 26;
		case 153:
			return 30;
		case 154:
			return 32;
		case 155:
			return 28;
		case 160:
			return 29;
		case 162:
			return 31;
		case 163:
			return 27;
		case 166:
			return 38;
		case 170:
			return 34;
		case 171:
			return 35;
		case 172:
			return 36;
		case 173:
			return 37;
		case 179:
			return 23;
		default:
			break;
	}
	return 0;
}

bool func_565(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		case 169:
			iVar0 = 0;
			break;
		case 168:
			iVar0 = 0;
			break;
		case 166:
			iVar0 = 0;
			break;
		case 190:
			iVar0 = 0;
			break;
		case 191:
			iVar0 = 0;
			break;
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_566(int iParam0, bool bParam1)
{
	if (func_561(UNK_0xD803B885F5E47A62()) && func_560())
	{
		if (func_419(iParam0) && bParam1 > 0)
		{
			func_557(10147, (func_559(10147, -1, 0) + bParam1), -1, 1, 0);
		}
	}
}

void func_567(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	struct<2> Var7;

	bVar5 = func_537();
	if (bVar5 != func_32())
	{
		func_589(bVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_538(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_588())
			{
				UNK_0x114C796E8DF14FB1(bParam1, iParam3);
			}
			break;
		case 190:
			if (func_560())
			{
				if (!func_588())
				{
					Var7 = { func_587() };
					UNK_0x52E03D7A828118C8(bParam1, UNK_0x12AB0310C2281427(func_586(Var7)), func_585(Var7), iParam4);
				}
			}
			else if (func_588())
			{
				func_573(-856006867, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x114C796E8DF14FB1(bParam1, iParam4);
			}
			break;
		case 226:
			if (func_989())
			{
				if (!func_588())
				{
					UNK_0x52E03D7A828118C8(bParam1, UNK_0x12AB0310C2281427(func_586(func_572(UNK_0xD803B885F5E47A62()))), 5, iParam4);
				}
			}
			else if (func_588())
			{
				func_573(-856006867, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x114C796E8DF14FB1(bParam1, iParam4);
			}
			break;
		case 230:
			if (func_989())
			{
				if (!func_588())
				{
					iVar2 = func_568(uParam5->f_16, iParam4);
					bVar3 = bParam1;
					if (iVar2 > 0)
					{
						bVar3 = (bVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						bVar3 = (bVar3 - iParam2);
					}
					UNK_0x13A30CD1AD15553C(bVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_588())
			{
				func_573(463142405, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x3CF6953686BFBF61(uVar0, uVar1, bParam1, bVar6);
			}
			break;
		case 233:
			if (func_588())
			{
				func_573(1407278493, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x53D560AAF6BF3D4E(bParam1);
			}
			break;
		case 237:
			if (func_989())
			{
				if (!func_588())
				{
					UNK_0x5D421B9474B610E6(bParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_588())
			{
				func_573(-856006867, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x114C796E8DF14FB1(bParam1, iParam4);
			}
			break;
		case 250:
			if (func_588())
			{
				func_573(-961034881, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0xA106C1682C790290(bParam1);
			}
			break;
		case 249:
			if (func_588())
			{
				func_573(1135468152, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x546613D1293DBF87(bParam1);
			}
			break;
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_588())
			{
				func_573(-634726636, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x163F1C05711ACF77(bParam1);
			}
			break;
		case 243:
			if (func_588())
			{
				func_573(1698417709, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0xA8C1B24657FB32B3(bParam1);
			}
			break;
		case 158:
			if (uParam5->f_22)
			{
				if (func_588())
				{
					func_573(1668610896, bParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					UNK_0xB0E03FD240577D6C(bParam1, 0, false, 1, bParam1, 0, false);
				}
			}
			else if (func_588())
			{
				func_573(-2032529561, bParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				UNK_0xB0E03FD240577D6C(bParam1, 1, bParam1, 0, false, 0, false);
			}
			break;
		default:
			if (func_588())
			{
				func_573(-856006867, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x0C06D61FE6218C43(uVar0, uVar1, bParam1, bVar6);
			}
			break;
	}
}

int func_568(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_571(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_569(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_569(int iParam0, int iParam1)
{
	return (func_570(iParam0) * iParam1);
}

int func_570(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22306;
		case 0:
			return Global_262145.f_22307;
		case 1:
			return Global_262145.f_22308;
		case 2:
			return Global_262145.f_22309;
		case 3:
			return Global_262145.f_22310;
		case 4:
			return Global_262145.f_22311;
		case 5:
			return Global_262145.f_22312;
		case 6:
			return Global_262145.f_22313;
		case 7:
			return Global_262145.f_22314;
		default:
			break;
	}
	return 0;
}

float func_571(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22316);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		case 7:
			fVar0 = Global_262145.f_22318;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22315);
			break;
		case 3:
			fVar0 = Global_262145.f_22318;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22315);
			break;
		case 0:
			fVar0 = Global_262145.f_22319;
			break;
		case 1:
			fVar0 = Global_262145.f_22319;
			break;
		case 4:
			fVar0 = Global_262145.f_22319;
			break;
		case 6:
			fVar0 = Global_262145.f_22320;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22317);
			break;
		case 2:
			fVar0 = Global_262145.f_22320;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22317);
			break;
		case 5:
			fVar0 = Global_262145.f_22320;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22317);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_572(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return 0;
	}
	return Global_1590535[bParam0 /*876*/].f_274.f_183[5 /*12*/];
}

void func_573(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_588())
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
				func_574(iParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
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
			func_574(iParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
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
				func_574(iParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
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
			func_574(iParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
			break;
	}
}

int func_574(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	bVar0 = false;
	if (!func_588())
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (!bVar0)
	{
		if (!UNK_0x79B28160739BC9E6(func_149()) || UNK_0xDD2EE1F5DA6A6AB0())
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
			*iParam0 = func_581(iVar4, iParam1, iParam4, iParam2, iParam3, bParam5, 0, iParam6, iParam7, 1, 1);
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
			func_580(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_575(-1, iParam4, iParam6, bParam5, -1);
		}
	}
	return 0;
}

void func_575(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			UNK_0x5D96D8530B3D0904(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_122.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_576(iParam0);
	}
}

void func_576(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_588())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_579(iParam0))
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
		func_577(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_577(var uParam0)
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
	func_578(&(uParam0->f_14));
	func_578(&(uParam0->f_14.f_13));
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

void func_578(var uParam0)
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

bool func_579(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return false;
}

void func_580(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_581(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_588())
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
				func_582(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_582(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	bVar36 = func_584(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!bVar36 == 0)
	{
		func_583();
		UNK_0xFB061A86A7AC749F(1, &vVar0, 36, bVar36);
	}
}

void func_583()
{
	UNK_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

bool func_584(bool bParam0)
{
	var uVar0;

	if (bParam0 != -1)
	{
		UNK_0x5D96D8530B3D0904(&uVar0, bParam0);
	}
	return uVar0;
}

int func_585(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		case 2:
			return 1;
		case 3:
			return 4;
		case 4:
			return 2;
		case 5:
			return 0;
		case 6:
			return 3;
		case 7:
			return 1;
		case 8:
			return 4;
		case 9:
			return 2;
		case 10:
			return 0;
		case 11:
			return 3;
		case 12:
			return 1;
		case 13:
			return 4;
		case 14:
			return 2;
		case 15:
			return 0;
		case 16:
			return 3;
		case 17:
			return 1;
		case 18:
			return 4;
		case 19:
			return 2;
		case 20:
			return 0;
		case 21:
			return 5;
		case 22:
			return 5;
		case 23:
			return 5;
		case 24:
			return 5;
		case 25:
			return 5;
		case 26:
			return 5;
		case 27:
			return 5;
		case 28:
			return 5;
		case 29:
			return 5;
		case 30:
			return 5;
		case 31:
			return 5;
		default:
			break;
	}
	return -1;
}

char* func_586(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_587()
{
	return Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_193;
}

bool func_588()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

void func_589(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1628237[bParam0 /*615*/].f_11.f_8[0];
	*uParam2 = Global_1628237[bParam0 /*615*/].f_11.f_8[1];
}

bool func_590(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	return func_591(iParam0, bParam1, bParam2, bParam3, iParam4, iParam5, iParam6, iParam7, iParam8, bParam9, iParam10);
}

bool func_591(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_601(iParam0, bParam2, bParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (UNK_0xC844350D5D58C99A(bParam1))
		{
			if (UNK_0xEC560E589DF8370E(bParam1))
			{
				bVar1 = UNK_0x940C1429253D3B1B(bParam1);
				func_597(UNK_0x64430C979F516F7A(bVar1, 31086, 0f, 0f, 0f), bVar0, 0, iParam8, iParam10);
			}
		}
	}
	else
	{
		func_592(bParam1, bVar0, iParam8, iParam10);
	}
	return bVar0;
}

void func_592(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	vector3 vVar0;

	vVar0 = { func_595(bParam0, 1) };
	if (bParam0 == func_594(UNK_0x16F2683693E537C9()))
	{
		func_593(1);
	}
	func_597(vVar0, bParam1, 0, bParam2, iParam3);
}

void func_593(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_594(int iParam0)
{
	return iParam0;
}

Vector3 func_595(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;

	if (UNK_0x19C7D1907D1DDDAB())
	{
		vVar3 = { UNK_0x3B276DB863622D2E(2) };
	}
	if (bParam0 == func_596(UNK_0x16F2683693E537C9()) && UNK_0xA4FD7964FEE91ED8(UNK_0x5A0033B025D45F1B()) == 4)
	{
		vVar0 = { UNK_0x68E4ADDDDCD7BDDE(bParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	bVar6 = 0f;
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		bVar6 = UNK_0xD9522BA9E27E1349(bParam0);
		if (UNK_0xA4FD7964FEE91ED8(UNK_0x5A0033B025D45F1B()) == 4)
		{
			bVar6 = vVar3.z;
		}
	}
	UNK_0xA6B02C1DB14DDA13(UNK_0x134B62B726CEC8E6(bParam0), &vVar7, &vVar10);
	if (bParam1)
	{
		fVar13 = (vVar10.z + 0.18f);
	}
	else
	{
		fVar13 = (vVar7.z + 0.18f);
	}
	vVar0 = { UNK_0x8A5E176FF719A014(vVar0, bVar6, 0f, 0f, fVar13) };
	return vVar0;
}

bool func_596(int iParam0)
{
	return iParam0;
}

void func_597(vector3 vParam0, bool bParam3, int iParam4, char* sParam5, bool bParam6)
{
	int iVar0;
	int iVar1;

	if (bParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2439138.f_1290[iVar0 /*30*/].f_6 == 0 || Global_2439138.f_1290[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2439138.f_1290[iVar1 /*30*/] = { vParam0 };
			Global_2439138.f_1290[iVar1 /*30*/].f_6 = 1;
			Global_2439138.f_1290[iVar1 /*30*/].f_4 = func_600(Global_2439138.f_1290[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1 /*30*/].f_7 = UNK_0x2B6E0A53779D29EA();
			Global_2439138.f_1290[iVar1 /*30*/].f_3 = bParam3;
			Global_2439138.f_1290[iVar1 /*30*/].f_8 = iParam4;
			Global_2439138.f_1290[iVar1 /*30*/].f_9 = func_599();
			Global_2439138.f_1290[iVar1 /*30*/].f_10 = func_598();
			StringCopy(&(Global_2439138.f_1290[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1 /*30*/].f_26 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), bParam6);
		}
	}
}

int func_598()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_599()
{
	var uVar0;

	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_600(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = UNK_0x0EB28750412C3A5A(UNK_0x07DAF5424BC6779A(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

bool func_601(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;

	bVar0 = func_602(iParam0, 0, bParam1, iParam4, iParam5, 0, iParam6, 1, bParam2, iParam3, bParam7);
	return bVar0;
}

bool func_602(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	float fVar3;

	if (func_632(UNK_0xD803B885F5E47A62()) || func_631(UNK_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_9635 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9635;
		}
	}
	else if (func_347() || func_630(UNK_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_22774 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22774;
		}
	}
	else if (Global_262145.f_6635 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6635;
	}
	if (func_629(bParam2))
	{
	}
	if (func_628())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		bVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		bVar1 = func_626(bVar1);
		fVar3 = (SYSTEM::TO_FLOAT(bVar1) * Global_262145.f_1);
		bVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			bVar1 = func_625(&bVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_623(0, &bVar1);
					break;
				case 3:
					func_623(1, &bVar1);
					break;
				case 1:
					func_621(&bVar1);
					break;
			}
		}
		if (bVar1 > Global_1686714)
		{
			return false;
		}
		if (iParam1 == 0)
		{
			if (bVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					bVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					bVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_620(1164, bVar1, -1);
			if (iParam1 == 0)
			{
				func_612((func_619(UNK_0xD803B885F5E47A62()) + bVar1), iParam9, 0);
				if (bParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				UNK_0x189A6F4108CDFDD6(bVar1, bParam8, iParam9);
				if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_2 != -1)
				{
					func_620(1165, bVar1, -1);
				}
				func_607(bVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_603((func_605(UNK_0xD803B885F5E47A62()) + bVar1));
			}
			else
			{
				func_603((func_605(UNK_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return bVar1;
}

void func_603(bool bParam0)
{
	if (func_628())
	{
		Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_5 = bParam0;
		func_604(joaat("MPPLY_GLOBALXP"), bParam0);
	}
}

void func_604(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, 1);
	}
}

int func_605(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (func_1115(bParam0, 0, 1))
		{
			if (bParam0 == UNK_0xD803B885F5E47A62())
			{
				return func_606(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_5;
			}
		}
		else
		{
			return func_606(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_606(int iParam0)
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

void func_607(bool bParam0)
{
	struct<13> Var0;
	int iVar13;

	Var0 = { func_89(UNK_0xD803B885F5E47A62()) };
	if (UNK_0x080E9D045AEE5605())
	{
		if (UNK_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar13 = func_610(func_611(&Var0));
			if (iVar13 == 0)
			{
				func_609(&Global_1387915, bParam0);
				func_608(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_609(&Global_1387916, bParam0);
				func_608(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_609(&Global_1387917, bParam0);
				func_608(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_609(&Global_1387918, bParam0);
				func_608(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_609(&Global_1387919, bParam0);
				func_608(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1387919);
			}
		}
	}
}

void func_608(int iParam0, bool bParam1)
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

void func_609(var uParam0, bool bParam1)
{
	*uParam0 = (*uParam0 + bParam1);
}

int func_610(int iParam0)
{
	if (iParam0 == Global_1387910)
	{
		return 0;
	}
	else if (iParam0 == Global_1387911)
	{
		return 1;
	}
	else if (iParam0 == Global_1387912)
	{
		return 2;
	}
	else if (iParam0 == Global_1387913)
	{
		return 3;
	}
	else if (iParam0 == Global_1387914)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_611(var uParam0)
{
	if (UNK_0x080E9D045AEE5605())
	{
		if (UNK_0xF2EC2A39FF9E838D(uParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

void func_612(bool bParam0, int iParam1, int iParam2)
{
	if (func_628())
	{
		if (bParam0 >= 1787576850)
		{
			bParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (bParam0 < Global_1388060[func_409(-1)])
				{
					UNK_0x189A6F4108CDFDD6(bParam0, -523908350, iParam1);
					return;
				}
				else if (bParam0 == Global_1388060[func_409(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (bParam0 == 0)
			{
				UNK_0x189A6F4108CDFDD6(bParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (bParam0 < 0)
			{
				UNK_0x189A6F4108CDFDD6(bParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_618(UNK_0xD803B885F5E47A62()))
		{
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_1 = bParam0;
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_6 = func_616(bParam0, 1);
		}
		func_556(639, bParam0, -1, 1);
		func_557(640, func_616(bParam0, 1), -1, 1, 0);
		Global_1388060[func_409(-1)] = bParam0;
		func_613(-1109644434, 7, 0);
	}
}

void func_613(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_615(iParam1, bParam2))
	{
		iVar0 = func_614();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_614()
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

bool func_615(int iParam0, bool bParam1)
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

int func_616(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_617(bParam0, 0);
}

int func_617(bool bParam0, int iParam1)
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
		if (Global_291133[iVar3] == bParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < bParam0)
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

bool func_618(bool bParam0)
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

int func_619(bool bParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (bParam0 > -1)
		{
			if (bParam0 == UNK_0xD803B885F5E47A62())
			{
				return Global_1388060[func_409(-1)];
			}
			else if (func_618(bParam0))
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_409(-1)];
	}
	return 0;
}

void func_620(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	bVar0 = func_559(iParam0, func_409(iParam2), 0);
	bVar0 = (bVar0 + bParam1);
	if (!func_558(iParam0))
	{
		func_557(iParam0, bVar0, iParam2, 1, 0);
	}
	else
	{
		func_556(iParam0, bVar0, iParam2, 1);
	}
}

void func_621(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;

	iVar1 = UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62());
	bVar0 = false;
	while (bVar0 < UNK_0x54EABC0DD106045B())
	{
		bVar4 = UNK_0xF4FB3A22FC4991C8(bVar0);
		if (UNK_0x81A93C8315C28F58(bVar4))
		{
			bVar5 = UNK_0x4B2BFE4A3BC248ED(bVar4);
			if (UNK_0x08067D4957B73C02(bVar5) != -1)
			{
				if (UNK_0x08067D4957B73C02(bVar5) == iVar1 || func_91(UNK_0x08067D4957B73C02(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != UNK_0xD803B885F5E47A62())
					{
						if (func_90(UNK_0xD803B885F5E47A62(), bVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_622(*bParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_622(*bParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*bParam0 = (*bParam0 + iVar6);
	*bParam0 = (*bParam0 + iVar7);
}

float func_622(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_623(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < UNK_0x54EABC0DD106045B())
		{
			bVar3 = iVar0;
			if (UNK_0x81A93C8315C28F58(bVar3))
			{
				bVar4 = UNK_0x4B2BFE4A3BC248ED(bVar3);
				if (func_1115(bVar4, 0, 1))
				{
					if (bVar4 != UNK_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_90(UNK_0xD803B885F5E47A62(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar4 = iVar0;
			if (func_1115(bVar4, 1, 1))
			{
				if (bVar4 != UNK_0xD803B885F5E47A62())
				{
					if (func_624(UNK_0xD803B885F5E47A62(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_90(UNK_0xD803B885F5E47A62(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_622(*bParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_622(*bParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*bParam1 = (*bParam1 + iVar5);
	*bParam1 = (*bParam1 + iVar6);
}

float func_624(bool bParam0, bool bParam1)
{
	return SYSTEM::VDIST(func_84(bParam0), func_84(bParam1));
	return 0f;
}

bool func_625(bool bParam0)
{
	int iVar0;

	if (UNK_0xA0501A3E65437842() != 3)
	{
		return *bParam0;
	}
	iVar0 = SYSTEM::ROUND((func_622(*bParam0, 100) * 25f));
	*bParam0 = (*bParam0 + iVar0);
	return *bParam0;
}

bool func_626(bool bParam0)
{
	if (bParam0 < 0)
	{
		if (UNK_0x51D1D19912234EA0(bParam0) > func_619(UNK_0xD803B885F5E47A62()))
		{
			bParam0 = -func_619(UNK_0xD803B885F5E47A62());
		}
	}
	if (func_627(8000, 0, 0) > 0)
	{
		if (func_627(8000, 0, 0) < (bParam0 + func_619(UNK_0xD803B885F5E47A62())))
		{
			bParam0 = (func_627(8000, 0, 0) - func_619(UNK_0xD803B885F5E47A62()));
		}
	}
	return bParam0;
}

int func_627(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_291133[iParam0];
}

bool func_628()
{
	return true;
}

bool func_629(bool bParam0)
{
	if (UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		return true;
	}
	else if (UNK_0x7F8A39872A07D2CE(bParam0, "") || UNK_0x7F8A39872A07D2CE(bParam0, "0"))
	{
		return true;
	}
	return false;
}

bool func_630(bool bParam0)
{
	return func_474(func_230(bParam0));
}

bool func_631(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_632(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

void func_633()
{
	Global_2462221 = 1;
}

void func_634(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*iParam1 = 0;
	*iParam2 = 0;
	if (!func_205(7))
	{
		return;
	}
	iVar0 = func_637(iParam0);
	iVar1 = func_636(iParam0);
	iVar2 = UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(Global_2537071.f_5124.f_265, UNK_0x2B6E0A53779D29EA()));
	if (func_635(iParam0) != -1)
	{
		if (iVar2 > func_635(iParam0))
		{
			iVar2 = func_635(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12395)
	{
		iVar2 = Global_262145.f_12395;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*iParam1 = (iVar3 * iVar1);
	*iParam2 = (iVar3 * iVar0);
}

int func_635(int iParam0)
{
	if (func_327(iParam0, 0) || func_420(iParam0))
	{
		return Global_262145.f_18487;
	}
	if (func_419(iParam0))
	{
		return Global_262145.f_18486;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18483;
		case 191:
			return Global_262145.f_18485;
		case 190:
			return Global_262145.f_18484;
		case 227:
			return Global_262145.f_21043;
		case 226:
			return Global_262145.f_21031;
		case 225:
			return Global_262145.f_21051;
		case 230:
			return Global_262145.f_22303;
		case 229:
			return Global_262145.f_22207;
		case 233:
			return Global_262145.f_22779;
		case 237:
			return Global_262145.f_23942;
		case 238:
			return Global_262145.f_24053;
		case 249:
			return Global_262145.f_24069;
		case 243:
			return Global_262145.f_26301;
		default:
			break;
	}
	return -1;
}

int func_636(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12486;
		case 152:
			return Global_262145.f_12521;
		case 151:
			return 0;
		case 142:
			return Global_262145.f_12509;
		case 157:
			return Global_262145.f_12476;
		case 159:
			return Global_262145.f_12459;
		case 164:
			return Global_262145.f_12499;
		case 160:
			return Global_262145.f_12549;
		case 162:
			return Global_262145.f_12569;
		case 163:
			return Global_262145.f_12534;
		case 154:
			return Global_262145.f_12604;
		case 155:
			return Global_262145.f_12594;
		case 153:
			return Global_262145.f_12558;
		case 170:
			return Global_262145.f_14995;
		case 171:
			return Global_262145.f_15054;
		case 172:
			return Global_262145.f_15072;
		case 173:
			return Global_262145.f_15013;
		case 166:
			return Global_262145.f_15028;
		case 167:
			return Global_262145.f_15119;
		case 169:
			return Global_262145.f_15091;
		case 168:
			return Global_262145.f_15084;
		case 179:
			return Global_262145.f_18366;
		case 180:
			return Global_262145.f_18144;
		case 182:
			return Global_262145.f_18144;
		case 183:
			return Global_262145.f_18144;
		case 185:
			return Global_262145.f_18144;
		case 186:
			return Global_262145.f_18144;
		case 189:
			return Global_262145.f_18366;
		case 190:
			return Global_262145.f_18020;
		case 191:
			return Global_262145.f_18111;
		case 192:
			return Global_262145.f_17905;
		case 193:
			return Global_262145.f_18366;
		case 194:
			return Global_262145.f_18366;
		case 195:
			return Global_262145.f_18144;
		case 197:
			return Global_262145.f_18144;
		case 198:
			return Global_262145.f_18144;
		case 199:
			return Global_262145.f_18366;
		case 200:
			return Global_262145.f_18366;
		case 201:
			return Global_262145.f_18366;
		case 205:
			return Global_262145.f_18366;
		case 207:
			return Global_262145.f_18144;
		case 208:
			return Global_262145.f_18144;
		case 209:
			return Global_262145.f_18144;
		case 210:
			return Global_262145.f_18366;
		case 211:
			return Global_262145.f_18366;
		case 214:
			return Global_262145.f_19216;
		case 215:
			return Global_262145.f_19218;
		case 216:
			return Global_262145.f_19220;
		case 217:
			return Global_262145.f_19222;
		case 218:
			return Global_262145.f_19224;
		case 219:
			return Global_262145.f_19226;
		case 220:
			return Global_262145.f_19228;
		case 221:
			return Global_262145.f_19230;
		case 225:
			if (!func_989())
			{
				return Global_262145.f_21053;
			}
			break;
		case 226:
			if (!func_989())
			{
				return Global_262145.f_21033;
			}
			break;
		case 227:
			if (!func_989())
			{
				return Global_262145.f_21045;
			}
			break;
		case 229:
			if (!func_989())
			{
				return Global_262145.f_22209;
			}
			break;
		case 230:
			if (!func_989())
			{
				return Global_262145.f_22305;
			}
			break;
		case 233:
			if (!func_989())
			{
				return Global_262145.f_22778;
			}
			break;
		case 241:
			return 100;
		case 242:
			return 100;
		case 244:
			return 100;
		case 248:
			return 100;
		case 239:
			return 100;
		case 240:
			return 100;
		case 250:
			return 100;
		case 237:
			if (!func_989())
			{
				return Global_262145.f_23944;
			}
			break;
		case 238:
			if (!func_989())
			{
				return Global_262145.f_24055;
			}
			break;
		case 249:
			if (!func_989())
			{
				return Global_262145.f_24071;
			}
			break;
		case 243:
			if (!func_989())
			{
				return Global_262145.f_26304;
			}
			break;
		case 158:
			if (!func_989())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_637(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12485;
		case 152:
			return Global_262145.f_12520;
		case 151:
			return 0;
		case 142:
			return Global_262145.f_12508;
		case 157:
			return Global_262145.f_12475;
		case 159:
			return Global_262145.f_12458;
		case 164:
			return Global_262145.f_12498;
		case 160:
			return Global_262145.f_12548;
		case 162:
			return Global_262145.f_12568;
		case 163:
			return Global_262145.f_12533;
		case 154:
			return Global_262145.f_12603;
		case 155:
			return Global_262145.f_12593;
		case 153:
			return Global_262145.f_12557;
		case 170:
			return Global_262145.f_14994;
		case 171:
			return Global_262145.f_15053;
		case 172:
			return Global_262145.f_15071;
		case 173:
			return Global_262145.f_15012;
		case 166:
			return Global_262145.f_15027;
		case 179:
			return Global_262145.f_18365;
		case 180:
			return Global_262145.f_18143;
		case 182:
			return Global_262145.f_18143;
		case 183:
			return Global_262145.f_18143;
		case 185:
			return Global_262145.f_18143;
		case 186:
			return Global_262145.f_18143;
		case 189:
			return Global_262145.f_18365;
		case 193:
			return Global_262145.f_18365;
		case 194:
			return Global_262145.f_18365;
		case 195:
			return Global_262145.f_18143;
		case 197:
			return Global_262145.f_18143;
		case 198:
			return Global_262145.f_18143;
		case 199:
			return Global_262145.f_18365;
		case 200:
			return Global_262145.f_18365;
		case 201:
			return Global_262145.f_18365;
		case 205:
			return Global_262145.f_18365;
		case 207:
			return Global_262145.f_18143;
		case 208:
			return Global_262145.f_18143;
		case 209:
			return Global_262145.f_18143;
		case 210:
			return Global_262145.f_18365;
		case 211:
			return Global_262145.f_18365;
		case 190:
			if (func_357(0))
			{
				return Global_262145.f_18019;
			}
			else
			{
				return 0;
			}
			break;
		case 191:
			if (func_357(0))
			{
				return Global_262145.f_18110;
			}
			else
			{
				return 0;
			}
			break;
		case 192:
			if (func_357(0))
			{
				return Global_262145.f_17904;
			}
			else
			{
				return 0;
			}
			break;
		case 214:
			return Global_262145.f_19215;
		case 215:
			return Global_262145.f_19217;
		case 216:
			return Global_262145.f_19219;
		case 217:
			return Global_262145.f_19221;
		case 218:
			return Global_262145.f_19223;
		case 219:
			return Global_262145.f_19225;
		case 220:
			return Global_262145.f_19227;
		case 221:
			return Global_262145.f_19229;
		case 225:
			if (func_357(0))
			{
				return Global_262145.f_21052;
			}
			break;
		case 226:
			if (func_357(0))
			{
				return Global_262145.f_21032;
			}
			break;
		case 227:
			if (func_357(0))
			{
				return Global_262145.f_21044;
			}
			break;
		case 229:
			if (func_357(0))
			{
				return Global_262145.f_22208;
			}
			break;
		case 230:
			if (func_357(0))
			{
				return Global_262145.f_22304;
			}
			break;
		case 233:
			if (func_357(0))
			{
				return Global_262145.f_22780;
			}
			break;
		case 241:
			return 500;
		case 242:
			return 500;
		case 244:
			return 500;
		case 248:
			return 500;
		case 239:
			return 500;
		case 240:
			return 500;
		case 250:
			return 500;
		case 237:
			if (func_357(0))
			{
				return Global_262145.f_23943;
			}
			break;
		case 238:
			if (func_357(0))
			{
				return Global_262145.f_24054;
			}
			break;
		case 249:
			if (func_357(0))
			{
				return Global_262145.f_24070;
			}
			break;
		case 243:
			return Global_262145.f_26300;
		case 158:
			if (func_357(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

void func_638(bool bParam0, int iParam1)
{
	bool bVar0;

	if (*bParam0 > 0)
	{
		if (!func_989())
		{
			if (func_538(0))
			{
				if (!func_357(0))
				{
					if (UNK_0x40B8C182D63932FC(func_537()))
					{
						if (func_652() == 100)
						{
							bVar0 = *bParam0;
							*bParam0 = 0;
						}
						else
						{
							bVar0 = ((*bParam0 / 100) * func_652());
							*bParam0 = (*bParam0 - bVar0);
						}
						func_650(&bVar0, 0);
						if (iParam1 == 1)
						{
							func_643("GB_BCUT_TICK1", func_537(), bVar0, 0, 0, 1);
						}
						func_642(20);
						func_639(func_537(), bVar0, 1);
					}
				}
			}
		}
	}
}

void func_639(bool bParam0, bool bParam1, int iParam2)
{
	struct<8> Var0;

	if (func_1115(bParam0, 0, 1))
	{
		Var0 = -1294585740;
		Var0.f_1 = UNK_0xD803B885F5E47A62();
		Var0.f_2 = bParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_641(bParam0);
		func_640(&(Var0.f_6), &(Var0.f_7));
		UNK_0xFB061A86A7AC749F(1, &Var0, 8, func_584(bParam0));
	}
}

void func_640(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

var func_641(bool bParam0)
{
	return Global_1628237[bParam0 /*615*/].f_533;
}

void func_642(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_7[iVar0]), bVar1);
}

int func_643(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	char cVar1[64];

	iVar0 = -1;
	if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bParam1) || bParam5)
	{
		if (!bParam4)
		{
			StringCopy(&cVar1, UNK_0x6E524813889AECF8(bParam1), 64);
		}
		else
		{
			StringCopy(&cVar1, UNK_0x6E524813889AECF8(bParam1), 64);
		}
		if (UNK_0xEA6BC48857E0AC4C(&cVar1))
		{
		}
		UNK_0x1E64CE678ED5F61E(bParam0);
		UNK_0x3A820E495A7BA3E5(func_514(bParam1, -2, 1, 0, 0));
		UNK_0xD06AC7C87A34A6AD(func_648(&cVar1));
		if (!bParam3 == 0)
		{
			UNK_0x3A820E495A7BA3E5(bParam3);
		}
		UNK_0x6D99DF8263D35CE5(bParam2);
		iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
		func_644(27, bParam0, 1, &cVar1, bParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_644(int iParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;

	if ((!func_647() || !UNK_0xA14BB9332558B949()) || !func_147(UNK_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_645(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0 /*53*/] = iParam0;
		Global_1670846.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0 /*53*/].f_2[0] = bParam4;
		Global_1670846.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1670846.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1670846.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1670846.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_645(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0 /*53*/].f_1)
		{
			func_646(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1670846++;
	if (Global_1670846 > 5)
	{
		Global_1670846 = 5;
		return Global_1670846;
	}
	return (Global_1670846 - 1);
}

void func_646(int iParam0)
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0 /*53*/] = { Global_1670846.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_647()
{
	return UNK_0xC146D5FBD23C6954(-1762644250);
}

var func_648(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_649(&cVar0);
}

char[] func_649(char[4] cParam0)
{
	return cParam0;
}

void func_650(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		iVar1 = func_651(1);
	}
	else
	{
		iVar1 = func_651(0);
	}
	iVar0 = ((*bParam0 / 100) * iVar1);
	*bParam0 = (*bParam0 - iVar0);
}

int func_651(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_652()
{
	return Global_262145.f_12389;
}

void func_653(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	bool bVar23;

	bVar18 = func_357(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_989())
		{
			bVar17 = UNK_0xD803B885F5E47A62();
		}
		else
		{
			bVar17 = func_537();
		}
		bVar11 = bVar17;
		if (bVar11 != -1)
		{
			iVar0 = Global_1590535[bVar11 /*876*/].f_854.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*iParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590535[bVar11 /*876*/].f_854.f_2;
			}
			else
			{
				iVar2 = func_669(Global_1590535[bVar11 /*876*/].f_854, *iParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*bParam2 = (*bParam2 + iVar2);
			bVar10 = func_668(*bParam2);
			if (bVar10 > 0)
			{
				if (bVar17 == UNK_0xD803B885F5E47A62())
				{
					func_667("TICK_TCUT", bVar10);
				}
				*bParam2 = (*bParam2 - bVar10);
			}
			Global_1674671.f_49 = *iParam3;
			if (bVar17 == UNK_0xD803B885F5E47A62())
			{
				if (iVar2 > 0)
				{
					func_666(iVar2);
				}
				if (*iParam3 > 0)
				{
					func_664(*iParam3);
				}
				iVar6 = func_663(&uVar5);
				iVar7 = Global_262145.f_23973;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_23972));
				iVar8 = ((*bParam2 / 100) * iVar9);
				*bParam2 = (*bParam2 + iVar8);
				if (*bParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_642(140);
					}
				}
				if (*bParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < UNK_0x54EABC0DD106045B())
						{
							bVar22 = iVar21;
							if (UNK_0x81A93C8315C28F58(bVar22))
							{
								bVar23 = UNK_0x4B2BFE4A3BC248ED(bVar22);
								if (func_662(bVar23))
								{
									func_654(bVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *bParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23945;
				iVar3 = SYSTEM::CEIL((IntToFloat(*bParam2) * fVar16));
				*bParam2 = iVar3;
				iVar4 = Global_262145.f_23946;
				if (*bParam2 > iVar4)
				{
					*bParam2 = iVar4;
				}
				if (*bParam2 > 0)
				{
					Global_1686723 = *bParam2;
					func_642(121);
				}
			}
			else
			{
				*bParam2 = 0;
			}
		}
	}
}

void func_654(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_656(bParam0);
	func_655(bParam0, iVar0, iParam1, iParam2);
}

void func_655(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	struct<8> Var0;

	Var0 = -601653676;
	Var0.f_1 = UNK_0xD803B885F5E47A62();
	Var0.f_2 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_3 = iParam3;
	Var0.f_5 = func_641(bParam0);
	func_640(&(Var0.f_6), &(Var0.f_7));
	if (bParam0 != func_32())
	{
		if (UNK_0x40B8C182D63932FC(bParam0))
		{
			UNK_0xFB061A86A7AC749F(1, &Var0, 8, func_584(bParam0));
		}
	}
}

int func_656(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_661();
	iVar0 = func_659(bParam0, iVar0);
	iVar1 = Global_1628237[func_537() /*615*/].f_11.f_449;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14955));
	if (iVar0 < func_658())
	{
		iVar0 = func_658();
	}
	if (iVar0 > func_657())
	{
		iVar0 = func_657();
	}
	return iVar0;
}

int func_657()
{
	return Global_262145.f_14956;
}

int func_658()
{
	return Global_262145.f_16131;
}

int func_659(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = (func_719(bParam0) * func_660());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_660()
{
	return Global_262145.f_16130;
}

int func_661()
{
	return Global_262145.f_12381;
}

bool func_662(bool bParam0)
{
	if (UNK_0x40B8C182D63932FC(bParam0))
	{
		if (bParam0 != UNK_0xD803B885F5E47A62())
		{
			if (func_329(bParam0, UNK_0xD803B885F5E47A62(), 0))
			{
				if (!func_200(bParam0, 26))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_663(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (UNK_0x40B8C182D63932FC(UNK_0x117658E336116132(bVar0)))
		{
			bVar2 = UNK_0x117658E336116132(bVar0);
			if (!func_147(bVar2, 0) && !func_329(bVar2, UNK_0xD803B885F5E47A62(), 1))
			{
				iVar1++;
			}
			else if (func_147(bVar2, 0))
			{
				*uParam0++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

void func_664(int iParam0)
{
	func_665(iParam0, 7236);
}

void func_665(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_559(iParam1, -1, 0);
	func_557(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_666(int iParam0)
{
	func_665(iParam0, 7231);
}

int func_667(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1;
	UNK_0x1E64CE678ED5F61E(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
	func_644(3, bParam0, 1, "", bParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_668(int iParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23974);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_669(struct<5> Param0, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;

	if (iParam5 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_670(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;

	*iParam4 = 0;
	bVar16 = func_357(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_989())
		{
			bVar15 = UNK_0xD803B885F5E47A62();
		}
		else
		{
			bVar15 = func_537();
		}
		if (bVar15 != -1)
		{
			iVar0 = (uParam1->f_15 + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*iParam3 = iVar1;
			iVar2 = func_569(uParam1->f_16, *iParam3);
			*bParam2 = (*bParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_568(uParam1->f_16, *iParam3);
				if (iVar9 > 0)
				{
					*bParam2 = (*bParam2 + iVar9);
				}
			}
			if (func_672(*bParam2) > 0)
			{
				if (bVar15 == UNK_0xD803B885F5E47A62())
				{
					func_667("SMTICK_RONCUT", func_672(*bParam2));
				}
				*bParam2 = (*bParam2 - func_672(*bParam2));
			}
			if (bVar15 == UNK_0xD803B885F5E47A62())
			{
				func_671(iVar2, iVar9);
				iVar6 = func_663(&uVar5);
				iVar7 = Global_262145.f_22322;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_22321));
				*iParam4 = ((*bParam2 / 100) * iVar8);
				*bParam2 = (*bParam2 + *iParam4);
				if (*bParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_642(44);
					}
				}
				if (*bParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < UNK_0x54EABC0DD106045B())
						{
							bVar19 = iVar18;
							if (UNK_0x81A93C8315C28F58(bVar19))
							{
								bVar20 = UNK_0x4B2BFE4A3BC248ED(bVar19);
								if (func_662(bVar20))
								{
									func_654(bVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *bParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22255;
				iVar3 = SYSTEM::CEIL((IntToFloat(*bParam2) * fVar14));
				*bParam2 = iVar3;
				iVar4 = Global_262145.f_22256;
				if (*bParam2 > iVar4)
				{
					*bParam2 = iVar4;
				}
				if (*bParam2 > 0)
				{
					Global_1686723 = *bParam2;
					func_642(121);
				}
			}
			else
			{
				*bParam2 = 0;
			}
		}
	}
}

void func_671(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_665(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_665(iParam1, 6117);
	}
}

bool func_672(int iParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22289);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_262145.f_22290))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22290);
	}
	return SYSTEM::ROUND(fVar1);
}

void func_673(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;

	bVar17 = func_357(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_989())
		{
			bVar15 = UNK_0xD803B885F5E47A62();
		}
		else
		{
			bVar15 = func_537();
		}
		if (bVar15 != -1)
		{
			iVar16 = func_572(bVar15);
			iVar0 = (func_697(bVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*iParam3 = iVar1;
			iVar2 = func_693(bVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21035));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21034));
			}
			*bParam2 = (*bParam2 + iVar2);
			if (bVar15 == UNK_0xD803B885F5E47A62())
			{
				func_687(iVar16, iVar2);
				if (func_683(iVar16) >= Global_262145.f_20583 || iVar2 >= Global_262145.f_20583)
				{
					func_674(5);
				}
				iVar6 = func_663(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_21037);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_21036));
				iVar9 = ((*bParam2 / 100) * iVar8);
				*bParam2 = (*bParam2 + iVar9);
				if (*bParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_642(108);
					}
					else
					{
						func_642(110);
					}
				}
				if (*bParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < UNK_0x54EABC0DD106045B())
						{
							bVar19 = iVar18;
							if (UNK_0x81A93C8315C28F58(bVar19))
							{
								bVar20 = UNK_0x4B2BFE4A3BC248ED(bVar19);
								if (func_662(bVar20))
								{
									func_654(bVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *bParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21038;
				iVar3 = SYSTEM::CEIL((IntToFloat(*bParam2) * fVar14));
				*bParam2 = iVar3;
				iVar4 = Global_262145.f_21039;
				if (*bParam2 > iVar4)
				{
					*bParam2 = iVar4;
				}
				if (*bParam2 > 0)
				{
					Global_1686723 = *bParam2;
					func_642(112);
				}
			}
			else
			{
				*bParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_674(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20571)
			{
				if (func_676(Global_262145.f_20572))
				{
					func_675("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		case 1:
			if (Global_262145.f_20573)
			{
				if (func_676(Global_262145.f_20574))
				{
					func_675("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		case 2:
			if (Global_262145.f_20575)
			{
				if (func_676(Global_262145.f_20576))
				{
					func_675("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		case 3:
			if (Global_262145.f_20577)
			{
				if (func_676(Global_262145.f_20578))
				{
					func_675("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		case 4:
			if (Global_262145.f_20579)
			{
				if (func_676(Global_262145.f_20580))
				{
					func_675("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		case 5:
			if (Global_262145.f_20581)
			{
				if (func_676(Global_262145.f_20582))
				{
					func_667("CLOTHAWDSTRAP3", Global_262145.f_20583);
				}
			}
			break;
		case 6:
			if (Global_262145.f_20584)
			{
				if (func_676(Global_262145.f_20585))
				{
					func_667("CLOTHAWDSTRAP5", Global_262145.f_20717);
				}
			}
			break;
		case 7:
			if (Global_262145.f_20587)
			{
				if (func_676(Global_262145.f_20588))
				{
					func_675("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		case 8:
			if (Global_262145.f_20589)
			{
				if (func_676(Global_262145.f_20590))
				{
					func_675("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		case 9:
			if (Global_262145.f_20591)
			{
				if (func_676(Global_262145.f_20592))
				{
					func_675("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		case 10:
			if (Global_262145.f_20593)
			{
				if (func_676(Global_262145.f_20594))
				{
					func_675("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		case 11:
			if (Global_262145.f_20595)
			{
				if (func_676(Global_262145.f_20596))
				{
					func_675("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		case 12:
			if (Global_262145.f_20597)
			{
				if (func_676(Global_262145.f_20598))
				{
					func_675("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		case 13:
			if (Global_262145.f_20599)
			{
				if (func_676(Global_262145.f_20600))
				{
					func_675("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		case 14:
			if (Global_262145.f_20601)
			{
				if (func_676(Global_262145.f_20602))
				{
					func_675("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_675(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	UNK_0x1E64CE678ED5F61E(bParam0);
	if (!bParam2 == 0)
	{
		UNK_0x3A820E495A7BA3E5(bParam2);
	}
	if (!bParam3 == 0)
	{
		UNK_0x3A820E495A7BA3E5(bParam3);
	}
	UNK_0x6B012227B3921E18(bParam1);
	if (!bParam4)
	{
		iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
	}
	else
	{
		Global_2513218 = { func_89(UNK_0xD803B885F5E47A62()) };
		if (UNK_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218))
		{
			iVar1 = 0;
			if (UNK_0x7F8A39872A07D2CE(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2513148.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = UNK_0x0D020422A92A2236(iVar2, UNK_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar1, 0, Global_2513148, UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62()), Global_1314034, Global_1314035, Global_1314036);
		}
		else
		{
			iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
		}
	}
	func_644(8, bParam0, 1, bParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

bool func_676(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case joaat("CLO_GRM_U_19_0"):
		case joaat("CLO_GRF_U_25_0"):
			if (!func_680(15417, -1, -1))
			{
				func_679(15417, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case joaat("CLO_GRM_U_19_1"):
		case joaat("CLO_GRF_U_25_1"):
			if (!func_680(15418, -1, -1))
			{
				func_679(15418, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case joaat("CLO_GRF_U_26_0"):
			if (!func_680(15425, -1, -1))
			{
				func_679(15425, 1, -1, 1);
				return true;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case joaat("CLO_GRM_DECL_19"):
		case joaat("CLO_GRF_DECL_19"):
			if (!func_680(15405, -1, -1))
			{
				func_679(15405, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case joaat("CLO_GRF_DECL_20"):
			if (!func_680(15393, -1, -1))
			{
				func_679(15393, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case joaat("CLO_GRF_DECL_21"):
			if (!func_680(15409, -1, -1))
			{
				func_679(15409, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case joaat("CLO_GRM_DECL_22"):
		case joaat("CLO_GRF_DECL_22"):
			if (!func_680(15396, -1, -1))
			{
				func_679(15396, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case joaat("CLO_GRF_DECL_23"):
			if (!func_680(15412, -1, -1))
			{
				func_679(15412, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case joaat("CLO_GRM_DECL_24"):
		case joaat("CLO_GRF_DECL_24"):
			if (!func_408(209, -1))
			{
				func_677(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case joaat("CLO_GRF_DECL_25"):
			if (!func_680(15403, -1, -1))
			{
				func_679(15403, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case joaat("CLO_GRM_DECL_26"):
		case joaat("CLO_GRF_DECL_26"):
			if (!func_408(209, -1))
			{
				func_677(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case joaat("CLO_GRF_DECL_27"):
			if (!func_680(15389, -1, -1))
			{
				func_679(15389, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case joaat("CLO_GRM_DECL_28"):
		case joaat("CLO_GRF_DECL_28"):
			if (!func_408(209, -1))
			{
				func_677(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case joaat("CLO_GRF_DECL_29"):
			if (!func_680(15398, -1, -1))
			{
				func_679(15398, 1, -1, 1);
				return true;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case joaat("CLO_GRM_PH_6_0"):
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_680(15400, -1, -1))
			{
				func_679(15400, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case joaat("CLO_GRM_PH_6_1"):
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_408(209, -1))
			{
				func_677(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case joaat("CLO_GRM_PH_6_2"):
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_680(15408, -1, -1))
			{
				func_679(15408, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case joaat("CLO_GRM_PH_6_3"):
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_408(209, -1))
			{
				func_677(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case joaat("CLO_GRM_PH_6_4"):
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_680(15411, -1, -1))
			{
				func_679(15411, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case joaat("CLO_GRM_PH_6_5"):
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_680(15397, -1, -1))
			{
				func_679(15397, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case joaat("CLO_GRM_PH_6_6"):
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_680(15413, -1, -1))
			{
				func_679(15413, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case joaat("CLO_GRM_PH_6_7"):
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_680(15391, -1, -1))
			{
				func_679(15391, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case joaat("CLO_GRF_PH_6_8"):
			if (!func_680(15388, -1, -1))
			{
				func_679(15388, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case joaat("CLO_GRM_PH_6_9"):
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_408(209, -1))
			{
				func_677(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case joaat("CLO_GRF_PH_6_10"):
			if (!func_680(15401, -1, -1))
			{
				func_679(15401, 1, -1, 1);
				return true;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_GUNRUNNING_AWARD_000_M"):
		case joaat("MP_GUNRUNNING_AWARD_000_F"):
		case joaat("CLO_GRM_DECL_0"):
		case joaat("CLO_GRF_DECL_0"):
			if (!func_680(15394, -1, -1))
			{
				func_679(15394, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_001_M"):
		case joaat("MP_GUNRUNNING_AWARD_001_F"):
		case joaat("CLO_GRM_DECL_1"):
		case joaat("CLO_GRF_DECL_1"):
			if (!func_408(209, -1))
			{
				func_677(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_002_M"):
		case joaat("MP_GUNRUNNING_AWARD_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case joaat("CLO_GRF_DECL_2"):
			if (!func_680(15406, -1, -1))
			{
				func_679(15406, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_003_M"):
		case joaat("MP_GUNRUNNING_AWARD_003_F"):
		case joaat("CLO_GRM_DECL_3"):
		case joaat("CLO_GRF_DECL_3"):
			if (!func_680(15395, -1, -1))
			{
				func_679(15395, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_004_M"):
		case joaat("MP_GUNRUNNING_AWARD_004_F"):
		case joaat("CLO_GRM_DECL_4"):
		case joaat("CLO_GRF_DECL_4"):
			if (!func_408(209, -1))
			{
				func_677(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_005_M"):
		case joaat("MP_GUNRUNNING_AWARD_005_F"):
		case joaat("CLO_GRM_DECL_5"):
		case joaat("CLO_GRF_DECL_5"):
			if (!func_680(15410, -1, -1))
			{
				func_679(15410, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_006_M"):
		case joaat("MP_GUNRUNNING_AWARD_006_F"):
		case joaat("CLO_GRM_DECL_6"):
		case joaat("CLO_GRF_DECL_6"):
			if (!func_680(15407, -1, -1))
			{
				func_679(15407, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_007_M"):
		case joaat("MP_GUNRUNNING_AWARD_007_F"):
		case joaat("CLO_GRM_DECL_7"):
		case joaat("CLO_GRF_DECL_7"):
			if (!func_408(209, -1))
			{
				func_677(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_008_M"):
		case joaat("MP_GUNRUNNING_AWARD_008_F"):
		case joaat("CLO_GRM_DECL_8"):
		case joaat("CLO_GRF_DECL_8"):
			if (!func_408(209, -1))
			{
				func_677(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_009_M"):
		case joaat("MP_GUNRUNNING_AWARD_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case joaat("CLO_GRF_DECL_9"):
			if (!func_680(15414, -1, -1))
			{
				func_679(15414, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_010_M"):
		case joaat("MP_GUNRUNNING_AWARD_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case joaat("CLO_GRF_DECL_10"):
			if (!func_680(15415, -1, -1))
			{
				func_679(15415, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_011_M"):
		case joaat("MP_GUNRUNNING_AWARD_011_F"):
		case joaat("CLO_GRM_DECL_11"):
		case joaat("CLO_GRF_DECL_11"):
			if (!func_680(15399, -1, -1))
			{
				func_679(15399, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_012_M"):
		case joaat("MP_GUNRUNNING_AWARD_012_F"):
		case joaat("CLO_GRM_DECL_12"):
		case joaat("CLO_GRF_DECL_12"):
			if (!func_680(15404, -1, -1))
			{
				func_679(15404, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_013_M"):
		case joaat("MP_GUNRUNNING_AWARD_013_F"):
		case joaat("CLO_GRM_DECL_13"):
		case joaat("CLO_GRF_DECL_13"):
			if (!func_408(209, -1))
			{
				func_677(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_014_M"):
		case joaat("MP_GUNRUNNING_AWARD_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case joaat("CLO_GRF_DECL_14"):
			if (!func_680(15392, -1, -1))
			{
				func_679(15392, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_015_M"):
		case joaat("MP_GUNRUNNING_AWARD_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case joaat("CLO_GRF_DECL_15"):
			if (!func_680(15390, -1, -1))
			{
				func_679(15390, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_016_M"):
		case joaat("MP_GUNRUNNING_AWARD_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case joaat("CLO_GRF_DECL_16"):
			if (!func_680(15402, -1, -1))
			{
				func_679(15402, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_017_M"):
		case joaat("MP_GUNRUNNING_AWARD_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case joaat("CLO_GRF_DECL_17"):
			if (!func_680(15416, -1, -1))
			{
				func_679(15416, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_018_M"):
		case joaat("MP_GUNRUNNING_AWARD_018_F"):
		case joaat("CLO_GRM_DECL_18"):
		case joaat("CLO_GRF_DECL_18"):
			if (!func_408(209, -1))
			{
				func_677(209, 1, -1, 1);
				return true;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_GUNRUNNING_AWARD_019_M"):
		case joaat("MP_GUNRUNNING_AWARD_025_F"):
		case joaat("CLO_GRM_DECL_30"):
		case joaat("CLO_GRF_DECL_30"):
			if (!func_680(15426, -1, -1))
			{
				func_679(15426, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_020_M"):
		case joaat("MP_GUNRUNNING_AWARD_020_F"):
		case joaat("CLO_GRM_DECL_31"):
		case joaat("CLO_GRF_DECL_31"):
			if (!func_680(15422, -1, -1))
			{
				func_679(15422, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_020_M_ALT"):
		case joaat("MP_GUNRUNNING_AWARD_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_680(15423, -1, -1))
			{
				func_679(15423, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_021_M"):
		case joaat("MP_GUNRUNNING_AWARD_021_F"):
		case joaat("CLO_GRM_DECL_33"):
		case joaat("CLO_GRF_DECL_33"):
			if (!func_680(15421, -1, -1))
			{
				func_679(15421, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_022_M"):
		case joaat("MP_GUNRUNNING_AWARD_026_F"):
		case joaat("CLO_GRM_DECL_34"):
		case joaat("CLO_GRF_DECL_34"):
			if (!func_680(15427, -1, -1))
			{
				func_679(15427, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_023_M"):
		case joaat("MP_GUNRUNNING_AWARD_023_F"):
		case joaat("CLO_GRM_DECL_35"):
		case joaat("CLO_GRF_DECL_35"):
			if (!func_680(15419, -1, -1))
			{
				func_679(15419, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_024_M"):
		case joaat("MP_GUNRUNNING_AWARD_024_F"):
		case joaat("CLO_GRM_DECL_36"):
		case joaat("CLO_GRF_DECL_36"):
			if (!func_680(15420, -1, -1))
			{
				func_679(15420, 1, -1, 1);
				return true;
			}
			break;
	}
	return false;
}

void func_677(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (func_678())
	{
		iVar0 = Global_2583656[iParam0 /*3*/][func_409(iParam2)];
		if (iVar0 != 0)
		{
			UNK_0xD8B681091EBE4064(iVar0, bParam1, iParam3);
		}
	}
}

bool func_678()
{
	return true;
	return false;
}

int func_679(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_149();
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

bool func_680(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_149();
	}
	iVar1 = func_682(iParam0, bParam1);
	iVar2 = func_681(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_681(int iParam0)
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

int func_682(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_149();
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

int func_683(int iParam0)
{
	int iVar0;

	iVar0 = func_685(iParam0);
	return func_559(func_684(iVar0), -1, 0);
}

int func_684(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		case 1:
			return 3952;
		case 2:
			return 3953;
		case 3:
			return 3954;
		case 4:
			return 3955;
		case 5:
			return 5456;
		default:
			break;
	}
	return 3951;
}

int func_685(int iParam0)
{
	int iVar0;

	if (func_686(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_183[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_686(bool bParam0)
{
	if (bParam0 == 32 || bParam0 == 0)
	{
		return false;
	}
	return true;
}

void func_687(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	iVar0 = func_685(iParam0);
	iVar1 = func_684(iVar0);
	bVar2 = (func_559(iVar1, -1, 0) + iParam1);
	func_557(iVar1, bVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_690(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_183[iVar0 /*12*/] != 0)
			{
				iVar1 = func_684(iVar0);
				iVar3 = (iVar3 + func_559(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_689(iVar4))
			{
				bVar5 = iVar4;
			}
			iVar4++;
		}
		func_688(9357, bVar5, -1, 1);
	}
}

var func_688(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (bParam2 == -1)
	{
		bParam2 = func_149();
	}
	if (bParam1 < 0)
	{
		bParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, bParam2);
		iVar1 = ((iParam0 - 384) - UNK_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, bParam2);
		iVar1 = ((iParam0 - 457) - UNK_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, false);
		iVar1 = ((iParam0 - 1281) - UNK_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, false);
		iVar1 = ((iParam0 - 1305) - UNK_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = UNK_0xF92652620E6134B6((iParam0 - 1393), 0, 1, bParam2);
		iVar1 = ((iParam0 - 1393) - UNK_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = UNK_0xF92652620E6134B6((iParam0 - 1361), 0, 0, false);
		iVar1 = ((iParam0 - 1361) - UNK_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, bParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - UNK_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, false, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - UNK_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, bParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - UNK_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, bParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - UNK_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, bParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - UNK_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, bParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - UNK_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, bParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - UNK_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, bParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - UNK_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, bParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - UNK_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, bParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - UNK_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, bParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - UNK_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, bParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - UNK_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, bParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - UNK_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, bParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - UNK_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, bParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - UNK_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, bParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - UNK_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, false, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - UNK_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = UNK_0xB8E1F940D68B4FA6(iVar0, bParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_689(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
		case 2:
			return 300000;
		case 3:
			return 500000;
	}
	return 0;
}

int func_690(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam1 == -1)
	{
		bParam1 = func_149();
	}
	iVar0 = 0;
	iVar1 = func_692(iParam0, bParam1);
	iVar2 = func_691(iParam0);
	if (0 != iVar1)
	{
		if (!UNK_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_691(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - UNK_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - UNK_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - UNK_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - UNK_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - UNK_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - UNK_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - UNK_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - UNK_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - UNK_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - UNK_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - UNK_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - UNK_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - UNK_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - UNK_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - UNK_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - UNK_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - UNK_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - UNK_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - UNK_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - UNK_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - UNK_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - UNK_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - UNK_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	return iVar0;
}

int func_692(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_149();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, bParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, bParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, false);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, false);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = UNK_0xF92652620E6134B6((iParam0 - 1361), 0, 0, false);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = UNK_0xF92652620E6134B6((iParam0 - 1393), 0, 1, bParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, false, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, bParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, bParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, bParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, bParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, bParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, bParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, bParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, false, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, bParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, bParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, bParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, bParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, bParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, bParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, bParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, bParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

int func_693(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_585(iParam1);
	if (func_686(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16960;
				if (func_694(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16965);
				}
				if (func_694(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16970);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 3:
				iVar0 = Global_262145.f_16959;
				if (func_694(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16964);
				}
				if (func_694(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16969);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 4:
				iVar0 = Global_262145.f_16958;
				if (func_694(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16963);
				}
				if (func_694(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16968);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 0:
				iVar0 = Global_262145.f_16956;
				if (func_694(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16961);
				}
				if (func_694(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16966);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 2:
				iVar0 = Global_262145.f_16957;
				if (func_694(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16962);
				}
				if (func_694(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16967);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 5:
				iVar0 = Global_262145.f_21060;
				if (func_694(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21062);
				}
				if (func_694(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21061);
				}
				iVar0 = (iVar0 * iParam2);
				break;
		}
	}
	return iVar0;
}

bool func_694(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_696(bParam0, iParam1))
	{
		iVar0 = func_695(bParam0, iParam1);
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_5, bParam2);
	}
	return false;
}

int func_695(bool bParam0, bool bParam1)
{
	int iVar0;

	if (func_686(bParam1) && bParam0 != func_32())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == bParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_696(bool bParam0, bool bParam1)
{
	int iVar0;

	if (func_686(bParam1) && bParam0 != func_32())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == bParam1)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

int func_697(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == func_32())
	{
		return 0;
	}
	if (func_686(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_698(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;

	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_560())
			{
				Var0 = { func_587() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*iParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar3 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*iParam3 = SYSTEM::CEIL(fVar6);
				}
				iVar7 = func_693(UNK_0xD803B885F5E47A62(), Var0, *iParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18595);
					iVar7 = SYSTEM::ROUND(fVar8);
				}
				else
				{
					fVar9 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18594);
					iVar7 = SYSTEM::ROUND(fVar9);
				}
				*bParam2 = (*bParam2 + iVar7);
				iVar11 = func_663(&uVar10);
				iVar12 = SYSTEM::ROUND(Global_262145.f_18585);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = SYSTEM::CEIL((IntToFloat(iVar11) * Global_262145.f_18584));
				iVar14 = ((*bParam2 / 100) * iVar13);
				*bParam2 = (*bParam2 + iVar14);
				if (uParam1->f_6)
				{
					*bParam2 = (*bParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*bParam2 = (*bParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*bParam2 = (*bParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_642(86);
				}
				Global_2537071.f_5124.f_381 = *bParam2;
			}
			else if (func_357(0))
			{
				Var15 = { func_699(func_537()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*iParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar18 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*iParam3 = SYSTEM::CEIL(fVar21);
				}
				iVar22 = func_693(func_537(), Var15, *iParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18595));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18594));
				}
				*bParam2 = (*bParam2 + iVar22);
				fVar23 = Global_262145.f_18634;
				iVar24 = SYSTEM::CEIL((IntToFloat(*bParam2) * fVar23));
				*bParam2 = iVar24;
				iVar25 = Global_262145.f_18635;
				if (*bParam2 > iVar25)
				{
					*bParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*bParam2 = (*bParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_699(bool bParam0)
{
	return Global_1628237[bParam0 /*615*/].f_11.f_193;
}

void func_700(int iParam0, bool bParam1, var uParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;

	if (iParam0 == 167)
	{
		if (func_249(UNK_0xD803B885F5E47A62()))
		{
			if (bParam1)
			{
				func_715();
			}
			func_714();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_249(UNK_0xD803B885F5E47A62()))
			{
				if (uParam2->f_5)
				{
					*bParam3 = (*bParam3 + func_706(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_182));
				}
				else
				{
					*iParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*iParam4 = (*iParam4 + uParam2->f_8);
					}
					iVar0 = func_705(*iParam4);
					iVar1 = (iVar0 * *iParam4);
					*bParam3 = (*bParam3 + iVar1);
					iVar3 = func_663(&uVar2);
					iVar4 = Global_262145.f_16141;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_262145.f_15350));
					iVar6 = ((*bParam3 / 100) * iVar5);
					*bParam3 = (*bParam3 + iVar6);
					if (uParam2->f_6)
					{
						*bParam3 = (*bParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_642(44);
					}
				}
				func_703(*bParam3);
				func_702();
				Global_2537071.f_5124.f_381 = *bParam3;
				iVar7 = 0;
				while (iVar7 < UNK_0x54EABC0DD106045B())
				{
					bVar8 = iVar7;
					if (UNK_0x81A93C8315C28F58(bVar8))
					{
						bVar9 = UNK_0x4B2BFE4A3BC248ED(bVar8);
						if (func_662(bVar9))
						{
							func_654(bVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_249(UNK_0xD803B885F5E47A62()))
		{
			func_701();
		}
	}
}

void func_701()
{
	bool bVar0;

	bVar0 = Global_2586255[func_149()];
	bVar0++;
	func_556(3667, bVar0, -1, 1);
}

void func_702()
{
	bool bVar0;

	bVar0 = Global_2586261[func_149()];
	bVar0++;
	func_556(3666, bVar0, -1, 1);
}

void func_703(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = Global_2586264[func_149()];
	bVar0 = (bVar0 + iParam0);
	func_556(3668, bVar0, -1, 1);
	if (func_690(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (bVar0 >= func_704(iVar1))
			{
				bVar2 = iVar1;
			}
			iVar1++;
		}
		func_688(7666, bVar2, -1, 1);
	}
}

int func_704(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16274;
		case 2:
			return Global_262145.f_16275;
		case 3:
			return Global_262145.f_16276;
		case 4:
			return Global_262145.f_16277;
		case 5:
			return Global_262145.f_16278;
		case 6:
			return Global_262145.f_16279;
		case 7:
			return Global_262145.f_16280;
		case 8:
			return Global_262145.f_16281;
		case 9:
			return Global_262145.f_16282;
		case 10:
			return Global_262145.f_16283;
		case 11:
			return Global_262145.f_16284;
		case 12:
			return Global_262145.f_16285;
		case 13:
			return Global_262145.f_16286;
		case 14:
			return Global_262145.f_16287;
		case 15:
			return Global_262145.f_16288;
		case 16:
			return Global_262145.f_16289;
		case 17:
			return Global_262145.f_16290;
		case 18:
			return Global_262145.f_16291;
		case 19:
			return Global_262145.f_16292;
		case 20:
			return Global_262145.f_16293;
		case 21:
			return Global_262145.f_16294;
		case 22:
			return Global_262145.f_16295;
		case 23:
			return Global_262145.f_16296;
		case 24:
			return Global_262145.f_16297;
	}
	return 0;
}

int func_705(int iParam0)
{
	if (iParam0 >= Global_262145.f_15328)
	{
		return Global_262145.f_15349;
	}
	else if (iParam0 >= Global_262145.f_15327)
	{
		return Global_262145.f_15348;
	}
	else if (iParam0 >= Global_262145.f_15326)
	{
		return Global_262145.f_15347;
	}
	else if (iParam0 >= Global_262145.f_15325)
	{
		return Global_262145.f_15346;
	}
	else if (iParam0 >= Global_262145.f_15324)
	{
		return Global_262145.f_15345;
	}
	else if (iParam0 >= Global_262145.f_15323)
	{
		return Global_262145.f_15344;
	}
	else if (iParam0 >= Global_262145.f_15322)
	{
		return Global_262145.f_15343;
	}
	else if (iParam0 >= Global_262145.f_15321)
	{
		return Global_262145.f_15342;
	}
	else if (iParam0 >= Global_262145.f_15320)
	{
		return Global_262145.f_15341;
	}
	else if (iParam0 >= Global_262145.f_15319)
	{
		return Global_262145.f_15340;
	}
	else if (iParam0 >= Global_262145.f_15318)
	{
		return Global_262145.f_15339;
	}
	else if (iParam0 >= Global_262145.f_15317)
	{
		return Global_262145.f_15338;
	}
	else if (iParam0 >= Global_262145.f_15316)
	{
		return Global_262145.f_15337;
	}
	else if (iParam0 >= Global_262145.f_15315)
	{
		return Global_262145.f_15336;
	}
	else if (iParam0 >= Global_262145.f_15314)
	{
		return Global_262145.f_15335;
	}
	else if (iParam0 >= Global_262145.f_15313)
	{
		return Global_262145.f_15334;
	}
	else if (iParam0 >= Global_262145.f_15312)
	{
		return Global_262145.f_15333;
	}
	else if (iParam0 >= Global_262145.f_15311)
	{
		return Global_262145.f_15332;
	}
	else if (iParam0 >= Global_262145.f_15310)
	{
		return Global_262145.f_15331;
	}
	else if (iParam0 >= Global_262145.f_15309)
	{
		return Global_262145.f_15330;
	}
	return Global_262145.f_15329;
}

int func_706(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_713(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_712(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_711(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_707(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_707(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_711(UNK_0x09AC81E49EA267F7(true, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_707(int iParam0)
{
	int iVar0;

	if (func_710(iParam0))
	{
		iVar0 = func_708(func_709(iParam0));
		return func_559(iVar0, -1, 0);
	}
	return 0;
}

int func_708(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_709(int iParam0)
{
	int iVar0;

	if (func_710(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_106[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_710(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_711(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15528;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15526;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15530;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15524;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15522;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15532;
	}
	return 0;
}

bool func_712(int iParam0, int iParam1)
{
	int iVar0;

	if (func_710(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1676087[iVar0] == iParam1 && Global_1676094[iVar0] == iParam0)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_713(int iParam0)
{
	int iVar0;

	if (func_710(iParam0))
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

void func_714()
{
	bool bVar0;

	bVar0 = Global_2586252[func_149()];
	bVar0++;
	Global_2586252[func_149()] = bVar0;
	func_556(3665, bVar0, -1, 1);
}

void func_715()
{
	bool bVar0;
	bool bVar1;

	bVar0 = Global_2586249[func_149()];
	bVar1 = Global_2586258[func_149()];
	bVar0++;
	bVar1++;
	Global_2586249[func_149()] = bVar0;
	Global_2586258[func_149()] = bVar1;
	Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_128 = bVar1;
	func_556(3663, bVar0, -1, 1);
	func_556(3664, bVar1, -1, 1);
}

void func_716()
{
	if (func_989())
	{
		Global_2451426.f_3074.f_134 = 0;
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_449 = Global_2451426.f_3074.f_134;
	}
}

void func_717()
{
	if (func_989())
	{
		if (Global_2451426.f_3074.f_134 < 10)
		{
			Global_2451426.f_3074.f_134++;
			Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_449 = Global_2451426.f_3074.f_134;
		}
	}
}

void func_718()
{
	if (func_989())
	{
		if (Global_2451426.f_3074.f_134 > 0)
		{
			Global_2451426.f_3074.f_134 = (Global_2451426.f_3074.f_134 - 1);
			Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_449 = Global_2451426.f_3074.f_134;
		}
	}
}

int func_719(bool bParam0)
{
	return Global_1628237[bParam0 /*615*/].f_11.f_28;
}

bool func_720(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return true;
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
			if (func_538(1) && !func_357(1))
			{
				if (func_721(func_537()))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_721(bool bParam0)
{
	if (bParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, 26);
}

int func_722(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18281;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12506) * Global_262145.f_12511));
		case 157:
			return 0;
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12456) * Global_262145.f_12461));
		case 151:
			return 0;
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12483) * Global_262145.f_12487));
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12496) * Global_262145.f_12500));
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12518) * Global_262145.f_12523));
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12680) * Global_262145.f_12681));
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12686) * Global_262145.f_12687));
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12684) * Global_262145.f_12685));
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12678) * Global_262145.f_12679));
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12682) * Global_262145.f_12683));
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12676) * Global_262145.f_12677));
		case 170:
			return 0;
		case 171:
			return Global_262145.f_15051;
		case 172:
			return Global_262145.f_15067;
		case 173:
			return Global_262145.f_15010;
		case 166:
			return 0;
		case 179:
			return Global_262145.f_18289;
		case 180:
			return Global_262145.f_18164;
		case 182:
			return 0;
		case 183:
			return Global_262145.f_18172;
		case 185:
			return Global_262145.f_18181;
		case 186:
			return 0;
		case 189:
			return Global_262145.f_18377;
		case 190:
			return 0;
		case 191:
			return 0;
		case 192:
			return 0;
		case 193:
			return Global_262145.f_18394;
		case 194:
			return 0;
		case 195:
			return 0;
		case 197:
			return Global_262145.f_18241;
		case 198:
			return 0;
		case 199:
			return Global_262145.f_18425;
		case 200:
			return 0;
		case 201:
			return Global_262145.f_18303;
		case 205:
			return Global_262145.f_18412;
		case 207:
			return 0;
		case 208:
			return Global_262145.f_18270;
		case 209:
			return 0;
		case 210:
			return Global_262145.f_18407;
		case 211:
			return Global_262145.f_18371;
		case 214:
			return Global_262145.f_18965;
		case 215:
			return Global_262145.f_18975;
		case 216:
			return Global_262145.f_18985;
		case 217:
			return Global_262145.f_18994;
		case 218:
			return Global_262145.f_19003;
		case 219:
			return Global_262145.f_19019;
		case 241:
			return Global_262145.f_24090;
		case 242:
			return Global_262145.f_24086;
		case 248:
			return Global_262145.f_24089;
		case 244:
			return Global_262145.f_24087;
		case 239:
			return Global_262145.f_24091;
		case 240:
			return Global_262145.f_24092;
		case 243:
			return Global_262145.f_26299;
		default:
			break;
	}
	return 0;
}

int func_723(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18282;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12507) * Global_262145.f_12512));
		case 157:
			return 0;
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12457) * Global_262145.f_12462));
		case 151:
			return 0;
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12484) * Global_262145.f_12488));
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12497) * Global_262145.f_12501));
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12519) * Global_262145.f_12524));
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12556) * Global_262145.f_12559));
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12602) * Global_262145.f_12605));
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12592) * Global_262145.f_12595));
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12547) * Global_262145.f_12550));
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12567) * Global_262145.f_12572));
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12532) * Global_262145.f_12535));
		case 170:
			return Global_262145.f_14993;
		case 171:
			return Global_262145.f_15052;
		case 172:
			return Global_262145.f_15068;
		case 173:
			return Global_262145.f_15011;
		case 166:
			return 0;
		case 167:
			return Global_262145.f_17090;
		case 168:
			return Global_262145.f_17089;
		case 179:
			return Global_262145.f_18290;
		case 180:
			return Global_262145.f_18165;
		case 182:
			return 0;
		case 183:
			return Global_262145.f_18173;
		case 185:
			return Global_262145.f_18182;
		case 186:
			return 0;
		case 189:
			return Global_262145.f_18378;
		case 190:
			return 0;
		case 191:
			return 0;
		case 192:
			return 0;
		case 193:
			return Global_262145.f_18395;
		case 194:
			return 0;
		case 195:
			return 0;
		case 197:
			return Global_262145.f_18242;
		case 198:
			return 0;
		case 199:
			return Global_262145.f_18426;
		case 200:
			return 0;
		case 201:
			return Global_262145.f_18304;
		case 205:
			return Global_262145.f_18413;
		case 207:
			return 0;
		case 208:
			return Global_262145.f_18271;
		case 209:
			return 0;
		case 210:
			return Global_262145.f_18408;
		case 211:
			return Global_262145.f_18372;
		case 214:
			return Global_262145.f_18966;
		case 215:
			return Global_262145.f_18976;
		case 216:
			return Global_262145.f_18986;
		case 217:
			return Global_262145.f_18995;
		case 218:
			return Global_262145.f_19004;
		case 219:
			return Global_262145.f_19020;
		case 178:
			if (func_989())
			{
				return Global_262145.f_18843;
			}
			else if (bParam1)
			{
				return Global_262145.f_18844;
			}
			break;
		case 188:
			if (func_989())
			{
				return Global_262145.f_18927;
			}
			else if (bParam1)
			{
				return Global_262145.f_18928;
			}
			break;
		case 225:
			if (func_989() && !func_560())
			{
				if (func_721(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_21048;
				}
				else
				{
					return Global_262145.f_21049;
				}
			}
			else if (func_560())
			{
				return Global_262145.f_21050;
			}
			break;
		case 226:
			if (func_989() && !func_560())
			{
				if (func_721(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_21028;
				}
				else
				{
					return Global_262145.f_21029;
				}
			}
			else if (func_560())
			{
				return Global_262145.f_21030;
			}
			break;
		case 227:
			if (func_989() && !func_560())
			{
				if (func_721(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_21040;
				}
				else
				{
					return Global_262145.f_21041;
				}
			}
			else if (func_560())
			{
				return Global_262145.f_21042;
			}
			break;
		case 229:
			if (func_989() && !func_560())
			{
				if (func_721(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_22204;
				}
				else
				{
					return Global_262145.f_22205;
				}
			}
			else if (func_560())
			{
				return Global_262145.f_22206;
			}
			break;
		case 230:
			if (func_989() && !func_560())
			{
				if (func_721(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_22300;
				}
				else
				{
					return Global_262145.f_22301;
				}
			}
			else if (func_560())
			{
				return Global_262145.f_22302;
			}
			break;
		case 233:
			if (func_989() && !func_560())
			{
				if (func_721(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_22776;
				}
				else
				{
					return Global_262145.f_22777;
				}
			}
			else if (func_560())
			{
				return Global_262145.f_22775;
			}
			break;
		case 241:
			return Global_262145.f_24097;
		case 242:
			return Global_262145.f_24093;
		case 244:
			return Global_262145.f_24094;
		case 248:
			return Global_262145.f_24096;
		case 239:
			return Global_262145.f_24098;
		case 240:
			return Global_262145.f_24099;
		case 237:
			if (func_989() && !func_560())
			{
				if (func_721(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_23939;
				}
				else
				{
					return Global_262145.f_23940;
				}
			}
			else if (func_560())
			{
				return Global_262145.f_23941;
			}
			break;
		case 238:
			if (func_989() && !func_560())
			{
				if (func_721(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_24050;
				}
				else
				{
					return Global_262145.f_24051;
				}
			}
			else if (func_560())
			{
				return Global_262145.f_24052;
			}
			break;
		case 249:
			if (func_989() && !func_560())
			{
				if (func_721(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_24066;
				}
				else
				{
					return Global_262145.f_24067;
				}
			}
			else if (func_560())
			{
				return Global_262145.f_24068;
			}
			break;
		case 243:
			if (func_989() && !func_560())
			{
				if (func_721(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_26302;
				}
				else
				{
					return Global_262145.f_26303;
				}
			}
			else if (func_560())
			{
				return Global_262145.f_26302;
			}
			break;
		case 158:
			if (func_989() && !func_560())
			{
				if (func_721(UNK_0xD803B885F5E47A62()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_560())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_724(int iParam0, float fParam1, float fParam2)
{
	bool bVar0;

	if (iParam0 == 157)
	{
		*fParam1 = 1f;
		*fParam2 = 1f;
		return;
	}
	if (func_725(iParam0))
	{
		if (!func_989())
		{
			*fParam1 = 1f;
			*fParam2 = Global_262145.f_12400;
		}
		else
		{
			*fParam1 = 1f;
			*fParam2 = 1f;
		}
		return;
	}
	if (func_296(UNK_0xD803B885F5E47A62(), 1))
	{
		if (func_430(iParam0))
		{
			*fParam1 = (Global_262145.f_18141 / 100f);
			*fParam2 = (Global_262145.f_18141 / 100f);
		}
		else if (iParam0 == 242)
		{
			*fParam1 = Global_262145.f_24100;
			*fParam2 = Global_262145.f_24100;
		}
		else if (iParam0 == 244)
		{
			*fParam1 = Global_262145.f_24101;
			*fParam2 = Global_262145.f_24101;
		}
		else if (iParam0 == 248)
		{
			*fParam1 = Global_262145.f_24103;
			*fParam2 = Global_262145.f_24103;
		}
		else if (iParam0 == 241)
		{
			*fParam1 = Global_262145.f_24104;
			*fParam2 = Global_262145.f_24104;
		}
		else if (iParam0 == 239)
		{
			*fParam1 = Global_262145.f_24105;
			*fParam2 = Global_262145.f_24105;
		}
		else if (iParam0 == 240)
		{
			*fParam1 = Global_262145.f_24106;
			*fParam2 = Global_262145.f_24106;
		}
		else
		{
			*fParam1 = Global_262145.f_12397;
			*fParam2 = Global_262145.f_12396;
		}
	}
	else if (func_430(iParam0))
	{
		*fParam1 = (Global_262145.f_18142 / 100f);
		*fParam2 = (Global_262145.f_18142 / 100f);
	}
	else if (iParam0 == 242)
	{
		*fParam1 = Global_262145.f_24107;
		*fParam2 = Global_262145.f_24107;
	}
	else if (iParam0 == 244)
	{
		*fParam1 = Global_262145.f_24108;
		*fParam2 = Global_262145.f_24108;
	}
	else if (iParam0 == 248)
	{
		*fParam1 = Global_262145.f_24110;
		*fParam2 = Global_262145.f_24110;
	}
	else if (iParam0 == 241)
	{
		*fParam1 = Global_262145.f_24111;
		*fParam2 = Global_262145.f_24111;
	}
	else if (iParam0 == 239)
	{
		*fParam1 = Global_262145.f_24112;
		*fParam2 = Global_262145.f_24112;
	}
	else if (iParam0 == 240)
	{
		*fParam1 = Global_262145.f_24113;
		*fParam2 = Global_262145.f_24113;
	}
	else
	{
		*fParam1 = Global_262145.f_12399;
		*fParam2 = Global_262145.f_12398;
	}
	bVar0 = func_360();
	if (bVar0 != func_32())
	{
		if (func_329(UNK_0xD803B885F5E47A62(), bVar0, 1))
		{
			*fParam1 = 1f;
			*fParam2 = 1f;
		}
	}
}

bool func_725(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return true;
		default:
			break;
	}
	return false;
}

void func_726(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!UNK_0x8CD06866876216F2())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_288(UNK_0xD803B885F5E47A62());
		Global_1674635.f_4 = func_837();
		Global_1674635.f_5 = func_836();
		if (func_255(UNK_0xD803B885F5E47A62()) || func_256(UNK_0xD803B885F5E47A62()))
		{
			Global_1674635.f_6 = 1;
		}
		else
		{
			Global_1674635.f_6 = 0;
		}
		Global_1674635.f_1 = func_830(bParam9);
		Global_1674635.f_8 = UNK_0xDD0E7998AE8AD485();
		Global_1674635.f_9 = func_829(bParam0);
		Global_1674635.f_10 = iParam1;
		Global_1674635.f_17 = Global_1674635.f_2;
		Global_1674635.f_18 = Global_1674635.f_2;
		Global_1674635.f_19 = func_828();
		Global_1674635.f_21 = (Global_1674635.f_8 - Global_1674635.f_7);
		if (func_296(UNK_0xD803B885F5E47A62(), 1))
		{
			Global_1674635.f_23 = func_829(func_357(1));
		}
		Global_1674635.f_24 = func_827(UNK_0xD803B885F5E47A62());
		Global_1674635.f_28 = func_826(UNK_0xD803B885F5E47A62());
		if (Global_1674635.f_24 > 2)
		{
			Global_1674635.f_24 = 2;
		}
		func_824(iVar0);
	}
	else
	{
		iVar0 = func_230(UNK_0xD803B885F5E47A62());
	}
	if (func_430(iVar0))
	{
		Global_1674374.f_2 = func_837();
		Global_1674374.f_3 = func_836();
		Global_1674374.f_50 = iParam4;
		Global_1674374.f_51 = iParam5;
		Global_1674374.f_10 = UNK_0xDD0E7998AE8AD485();
		Global_1674374.f_20 = (Global_1674374.f_10 - Global_1674374.f_9);
		Global_1674374.f_12 = iParam1;
		Global_1674374.f_19 = func_820(iVar0, bParam0, func_823(bParam3));
		if (bParam0)
		{
			Global_1674374.f_11 = 1;
		}
		else
		{
			Global_1674374.f_11 = 0;
		}
		if ((func_250(UNK_0xD803B885F5E47A62()) || func_403(UNK_0xD803B885F5E47A62())) || func_219(UNK_0xD803B885F5E47A62()))
		{
			Global_1674374.f_8 = 1;
		}
		else
		{
			Global_1674374.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1674374.f_43 = 0;
			Global_1674374.f_45 = func_819(func_537(), iParam2);
			Global_1674374.f_47 = iParam7;
			Global_1674374.f_46 = iParam6;
			Global_1674374.f_52 = func_818(func_537(), iParam2);
		}
		func_816(iVar0);
	}
	else if (func_435(iVar0))
	{
		Global_1674428.f_2 = func_837();
		Global_1674428.f_3 = func_836();
		Global_1674428.f_10 = UNK_0xDD0E7998AE8AD485();
		Global_1674428.f_19 = (Global_1674428.f_10 - Global_1674428.f_9);
		Global_1674428.f_12 = iParam1;
		if (bParam0)
		{
			Global_1674428.f_11 = 1;
		}
		else
		{
			Global_1674428.f_11 = 0;
		}
		if ((func_250(UNK_0xD803B885F5E47A62()) || func_403(UNK_0xD803B885F5E47A62())) || func_219(UNK_0xD803B885F5E47A62()))
		{
			Global_1674428.f_8 = 1;
		}
		else
		{
			Global_1674428.f_8 = 0;
		}
		func_814(iVar0);
	}
	else if (func_478(iVar0))
	{
		Global_1674491.f_2 = func_837();
		Global_1674491.f_3 = func_836();
		Global_1674491.f_9 = UNK_0xDD0E7998AE8AD485();
		Global_1674491.f_18 = (Global_1674491.f_9 - Global_1674491.f_8);
		Global_1674491.f_11 = iParam1;
		Global_1674491.f_7 = func_828();
		Global_1674491.f_42 = func_812(func_149(), 5);
		bVar1 = UNK_0xD803B885F5E47A62();
		iVar2 = func_572(bVar1);
		Global_1674491.f_28 = iVar2;
		Global_1674491.f_29 = func_829((func_811(bVar1) || func_810(bVar1)));
		Global_1674491.f_30 = func_829(func_809(bVar1));
		Global_1674491.f_32 = func_829(func_808(bVar1));
		Global_1674491.f_33 = func_829(func_807(bVar1));
		Global_1674491.f_34 = func_829(func_806(bVar1));
		Global_1674491.f_35 = func_829(func_805(0, bVar1) == 1);
		Global_1674491.f_36 = func_829(func_804(bVar1));
		Global_1674491.f_37 = func_829(func_803(bVar1));
		Global_1674491.f_38 = func_829(func_802(bVar1));
		Global_1674491.f_39 = func_829(func_694(bVar1, iVar2, 0));
		Global_1674491.f_40 = func_829(func_694(bVar1, iVar2, 2));
		Global_1674491.f_41 = func_829(func_694(bVar1, iVar2, 1));
		if (func_801(bVar1))
		{
			Global_1674491.f_31 = 2;
		}
		else if (func_800(bVar1))
		{
			Global_1674491.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1674491.f_10 = 1;
		}
		else
		{
			Global_1674491.f_10 = 0;
		}
		if ((func_250(UNK_0xD803B885F5E47A62()) || func_403(UNK_0xD803B885F5E47A62())) || func_219(UNK_0xD803B885F5E47A62()))
		{
			Global_1674491.f_6 = 1;
		}
		else
		{
			Global_1674491.f_6 = 0;
		}
		Global_1674491.f_21 = -2;
		Global_1674491.f_22 = -2;
		func_798(iVar0);
	}
	else if (func_476(iVar0))
	{
		Global_1674535.f_2 = func_837();
		Global_1674535.f_3 = func_836();
		if ((func_250(UNK_0xD803B885F5E47A62()) || func_403(UNK_0xD803B885F5E47A62())) || func_219(UNK_0xD803B885F5E47A62()))
		{
			Global_1674535.f_6 = 1;
		}
		else
		{
			Global_1674535.f_6 = 0;
		}
		Global_1674535.f_9 = UNK_0xDD0E7998AE8AD485();
		Global_1674535.f_10 = func_829(bParam0);
		Global_1674535.f_11 = iParam1;
		Global_1674535.f_17 = func_797(func_360());
		Global_1674535.f_18 = (Global_1674535.f_9 - Global_1674535.f_8);
		Global_1674535.f_20 = iParam8;
		Global_1674535.f_21 = -2;
		Global_1674535.f_22 = -2;
		Global_1674535.f_27 = func_796();
		Global_1674535.f_29 = func_559(6107, -1, 0);
		Global_1674535.f_30 = func_559(6103, -1, 0);
		Global_1674535.f_31 = func_559(6104, -1, 0);
		Global_1674535.f_32 = func_559(6106, -1, 0);
		Global_1674535.f_33 = func_559(6105, -1, 0);
		Global_1674535.f_34 = func_559(6108, -1, 0);
		Global_1674535.f_36 = func_829(func_357(1));
		Global_1674535.f_37 = func_794();
		func_780();
		func_778(iVar0);
	}
	else if (func_474(iVar0))
	{
		Global_1674589.f_2 = func_837();
		Global_1674589.f_3 = func_836();
		if ((func_250(UNK_0xD803B885F5E47A62()) || func_403(UNK_0xD803B885F5E47A62())) || func_219(UNK_0xD803B885F5E47A62()))
		{
			Global_1674589.f_6 = 1;
		}
		else
		{
			Global_1674589.f_6 = 0;
		}
		Global_1674589.f_9 = UNK_0xDD0E7998AE8AD485();
		Global_1674589.f_10 = func_829(bParam0);
		Global_1674589.f_11 = iParam1;
		Global_1674589.f_18 = (Global_1674589.f_9 - Global_1674589.f_8);
		Global_1674589.f_20 = iParam8;
		Global_1674589.f_23 = Global_786547;
		Global_1674589.f_36 = Global_786547.f_1;
		Global_1674589.f_24 = func_559(6157, -1, 0);
		Global_1674589.f_25 = func_559(6162, -1, 0);
		Global_1674589.f_26 = func_559(6163, -1, 0);
		Global_1674589.f_27 = func_829((((func_777() || func_776()) || func_775()) || func_774(UNK_0xD803B885F5E47A62())));
		Global_1674589.f_28 = func_559(6164, -1, 0);
		Global_1674589.f_29 = func_829(func_773());
		Global_1674589.f_35 = -1;
		Global_1674589.f_38 = -1;
		Global_1674589.f_39 = Global_1674589.f_4;
		Global_1674589.f_40 = Global_1674589.f_5;
		Global_1674589.f_41 = func_837();
		Global_1674589.f_42 = func_829(func_357(1));
		Global_1674589.f_44 = Global_1674589.f_18;
		func_771(iVar0);
	}
	else if (func_548(iVar0))
	{
		if (Global_1674725.f_2 == -1)
		{
			Global_1674725.f_2 = func_837();
		}
		if (Global_1674725.f_3 == -1)
		{
			Global_1674725.f_3 = func_836();
		}
		if ((func_250(UNK_0xD803B885F5E47A62()) || func_403(UNK_0xD803B885F5E47A62())) || func_219(UNK_0xD803B885F5E47A62()))
		{
			Global_1674725.f_6 = 1;
		}
		else
		{
			Global_1674725.f_6 = 0;
		}
		Global_1674725.f_1 = func_830(0);
		Global_1674725.f_7 = func_828();
		Global_1674725.f_9 = UNK_0xDD0E7998AE8AD485();
		Global_1674725.f_10 = func_829(bParam0);
		Global_1674725.f_11 = iParam1;
		if (func_537() != -1)
		{
			Global_1674725.f_17 = func_770(func_537());
		}
		Global_1674725.f_18 = (Global_1674725.f_9 - Global_1674725.f_8);
		Global_1674725.f_19 = Global_2537071.f_6579;
		Global_1674725.f_28 = func_826(UNK_0xD803B885F5E47A62());
		Global_1674725.f_29 = func_829(func_769(UNK_0xD803B885F5E47A62()));
		Global_1674725.f_30 = func_829(func_768(UNK_0xD803B885F5E47A62()));
		Global_1674725.f_31 = func_767(UNK_0xD803B885F5E47A62());
		if (func_296(UNK_0xD803B885F5E47A62(), 1))
		{
			Global_1674725.f_33 = func_829(func_357(1));
		}
		if (Global_1674725.f_34 > 2)
		{
			Global_1674725.f_34 = 2;
		}
		func_765(iVar0);
	}
	else if (func_552(iVar0))
	{
		Global_1674671.f_2 = func_837();
		Global_1674671.f_3 = func_836();
		if ((func_250(UNK_0xD803B885F5E47A62()) || func_403(UNK_0xD803B885F5E47A62())) || func_219(UNK_0xD803B885F5E47A62()))
		{
			Global_1674671.f_6 = 1;
		}
		else
		{
			Global_1674671.f_6 = 0;
		}
		Global_1674671.f_1 = func_830(0);
		Global_1674671.f_9 = UNK_0xDD0E7998AE8AD485();
		Global_1674671.f_10 = func_829(bParam0);
		Global_1674671.f_11 = iParam1;
		Global_1674671.f_18 = (Global_1674671.f_9 - Global_1674671.f_8);
		Global_1674671.f_28 = func_826(UNK_0xD803B885F5E47A62());
		if (Global_1674671.f_28)
		{
			Global_1674671.f_29 = func_764(UNK_0xD803B885F5E47A62());
		}
		else
		{
			Global_1674671.f_29 = 0;
		}
		Global_1674671.f_30 = func_748(UNK_0xD803B885F5E47A62(), 4, -1);
		Global_1674671.f_31 = func_767(UNK_0xD803B885F5E47A62());
		Global_1674671.f_32 = func_829(func_747(UNK_0xD803B885F5E47A62()));
		Global_1674671.f_33 = func_829(func_746(UNK_0xD803B885F5E47A62()));
		Global_1674671.f_34 = func_829(func_745(UNK_0xD803B885F5E47A62()));
		Global_1674671.f_35 = func_829(func_744(UNK_0xD803B885F5E47A62()));
		Global_1674671.f_36 = func_743(UNK_0xD803B885F5E47A62());
		Global_1674671.f_37 = func_742(UNK_0xD803B885F5E47A62());
		Global_1674671.f_39 = func_741(UNK_0xD803B885F5E47A62());
		if (func_296(UNK_0xD803B885F5E47A62(), 1))
		{
			Global_1674671.f_41 = func_829(func_357(1));
		}
		if (Global_1674671.f_42 > 2)
		{
			Global_1674671.f_42 = 2;
		}
		func_739(iVar0);
	}
	else if (func_547(iVar0))
	{
		Global_1674809.f_2 = func_837();
		Global_1674809.f_3 = func_836();
		Global_1674809.f_4 = func_738(func_537());
		Global_1674809.f_5 = func_737(func_537());
		if ((func_250(UNK_0xD803B885F5E47A62()) || func_403(UNK_0xD803B885F5E47A62())) || func_219(UNK_0xD803B885F5E47A62()))
		{
			Global_1674809.f_6 = 1;
		}
		else
		{
			Global_1674809.f_6 = 0;
		}
		Global_1674809.f_7 = func_828();
		Global_1674809.f_9 = UNK_0xDD0E7998AE8AD485();
		Global_1674809.f_10 = func_829(bParam0);
		Global_1674809.f_11 = iParam1;
		if (func_360() != -1)
		{
			Global_1674809.f_17 = func_770(func_360());
		}
		Global_1674809.f_18 = (Global_1674809.f_9 - Global_1674809.f_8);
		Global_1674809.f_21 = 1;
		Global_1674809.f_22 = 1;
		Global_1674809.f_25 = func_736(UNK_0xD803B885F5E47A62());
		Global_1674809.f_27 = func_829(func_735(UNK_0xD803B885F5E47A62()));
		Global_1674809.f_28 = func_732(21, -1);
		Global_1674809.f_29 = func_829(func_731(UNK_0xD803B885F5E47A62()));
		func_729(iVar0);
	}
	else if (func_468(iVar0))
	{
		Global_1674884.f_6 = func_738(func_537());
		Global_1674884.f_7 = func_737(func_537());
		if (func_296(UNK_0xD803B885F5E47A62(), 1))
		{
			Global_1674884.f_8 = func_829(func_357(1));
		}
		Global_1674884.f_10 = func_828();
		Global_1674884.f_11 = 1;
		Global_1674884.f_13 = (UNK_0xDD0E7998AE8AD485() - Global_1702973);
		Global_1674884.f_14 = iParam1;
		Global_1674884.f_19 = 1;
		Global_1674884.f_20 = 1;
		func_727(iVar0);
	}
	else
	{
		Global_1674356.f_6 = UNK_0xDD0E7998AE8AD485();
		if (bParam0)
		{
			Global_1674356.f_7 = 1;
		}
		else
		{
			Global_1674356.f_7 = 0;
		}
		Global_1674356.f_8 = iParam1;
		if (Global_1674356.f_4 == 0)
		{
			if ((func_250(UNK_0xD803B885F5E47A62()) || func_403(UNK_0xD803B885F5E47A62())) || func_219(UNK_0xD803B885F5E47A62()))
			{
				Global_1674356.f_4 = 1;
			}
		}
	}
}

void func_727(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	UNK_0x9CA4259CC8E87599(&Global_1674884);
	func_728();
}

void func_728()
{
	struct<36> Var0;

	Global_1674884 = { Var0 };
	Global_1674884.f_23 = 0;
	Global_1674884.f_22 = 0;
	Global_1674884.f_21 = 0;
}

void func_729(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	UNK_0x62CC3DEF90BBBB82(&Global_1674809);
	func_730();
}

void func_730()
{
	struct<31> Var0;

	Global_1674809 = { Var0 };
}

bool func_731(int iParam0)
{
	if (iParam0 != func_32())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_369.f_2, 6);
	}
	return false;
}

int func_732(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_149();
	}
	if (iParam0 == 7 && !Global_262145.f_16984)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_734(iParam0);
		if (iVar1 == 0 && func_559(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_733(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_826(UNK_0xD803B885F5E47A62()) && iVar1 == 1)
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

bool func_733(int iParam0)
{
	if (!Global_262145.f_23663)
	{
		return false;
	}
	return func_559(7207, iParam0, 0) != 0;
}

int func_734(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

bool func_735(int iParam0)
{
	if (iParam0 != func_32())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_369 != 0;
	}
	return false;
}

int func_736(bool bParam0)
{
	if (func_230(bParam0) == 243)
	{
		return func_551(bParam0);
	}
	return -1;
}

int func_737(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return -1;
	}
	return Global_1628237[bParam0 /*615*/].f_11.f_8[1];
}

int func_738(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return -1;
	}
	return Global_1628237[bParam0 /*615*/].f_11.f_8[0];
}

void func_739(int iParam0)
{
	UNK_0x26ABE31DF89E0806(&Global_1674671);
	func_740();
}

void func_740()
{
	struct<54> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1674671 = { Var0 };
}

bool func_741(int iParam0)
{
	if (iParam0 != func_32())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_334, 12);
	}
	return false;
}

bool func_742(int iParam0)
{
	if (iParam0 != func_32())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_334, 10);
	}
	return false;
}

bool func_743(int iParam0)
{
	if (iParam0 != func_32())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_334, 11);
	}
	return false;
}

bool func_744(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 4);
}

bool func_745(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 3);
}

bool func_746(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 2);
}

bool func_747(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, true);
}

bool func_748(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0 == func_32() || !func_763(iParam1))
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			return func_758(bParam0, iParam2);
		case 1:
			return func_756(bParam0, iParam2);
		case 3:
			return func_755(bParam0);
		case 2:
			return func_750(bParam0, iParam2);
		case 4:
			return func_749(bParam0);
		default:
			break;
	}
	return false;
}

bool func_749(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 6);
}

bool func_750(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_754(bParam0);
		case 11:
			return func_753(bParam0);
		case 12:
			return func_752(bParam0);
		case 13:
			return func_751(bParam0);
		default:
			break;
	}
	return false;
}

bool func_751(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 15);
}

bool func_752(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 14);
}

bool func_753(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 13);
}

bool func_754(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 12);
}

bool func_755(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 5);
}

bool func_756(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_757(bParam0);
		case 6:
			return func_747(bParam0);
		case 7:
			return func_746(bParam0);
		case 8:
			return func_745(bParam0);
		case 9:
			return func_744(bParam0);
		default:
			break;
	}
	return false;
}

bool func_757(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, false);
}

bool func_758(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_762(bParam0);
		case 1:
			return func_761(bParam0);
		case 2:
			return func_760(bParam0);
		case 3:
			return func_759(bParam0);
		case 4:
			return func_767(bParam0);
		default:
			break;
	}
	return false;
}

bool func_759(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 10);
}

bool func_760(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 9);
}

bool func_761(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 8);
}

bool func_762(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 7);
}

bool func_763(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_764(bool bParam0)
{
	int iVar0;

	if (bParam0 == func_32())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_748(bParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_748(bParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_748(bParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_748(bParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_765(int iParam0)
{
	UNK_0xEB3BD00621D19C22(&Global_1674725);
	func_766();
}

void func_766()
{
	struct<39> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1674725 = { Var0 };
}

bool func_767(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_351, 31);
}

bool func_768(int iParam0)
{
	if (iParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_322.f_1, false);
}

bool func_769(int iParam0)
{
	if (iParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_322.f_1, 19);
}

var func_770(bool bParam0)
{
	return Global_1590535[bParam0 /*876*/].f_211.f_6;
}

void func_771(int iParam0)
{
	UNK_0xD620402A9DD91217(&Global_1674589);
	func_772();
}

void func_772()
{
	struct<46> Var0;

	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1674589 = { Var0 };
	Global_1674589.f_16 = 0;
}

bool func_773()
{
	return func_559(6156, -1, 0) != 0;
}

bool func_774(int iParam0)
{
	if (iParam0 != func_32())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_271 != 0;
	}
	return false;
}

bool func_775()
{
	return func_559(6164, -1, 0) == 3;
}

bool func_776()
{
	return func_559(6164, -1, 0) == 2;
}

bool func_777()
{
	return func_559(6164, -1, 0) == 1;
}

void func_778(int iParam0)
{
	UNK_0x51EB431C1612B9CA(&Global_1674535);
	func_779();
}

void func_779()
{
	struct<54> Var0;

	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674535 = { Var0 };
	Global_1674535.f_23 = 0;
	Global_1674535.f_24 = 0;
	Global_1674535.f_16 = 0;
}

void func_780()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_791(12));
		func_790(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323615[iVar1 /*141*/].f_66 != 0 && func_782(Global_1323615[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2537071.f_896 != iVar1)
				{
					if (func_781(Global_1323615[iVar1 /*141*/].f_66))
					{
						if (Global_1323615[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1323615[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1674535.f_38 = iVar3;
								break;
							case 1:
								Global_1674535.f_39 = iVar3;
								break;
							case 2:
								Global_1674535.f_40 = iVar3;
								break;
							case 3:
								Global_1674535.f_41 = iVar3;
								break;
							case 4:
								Global_1674535.f_42 = iVar3;
								break;
							case 5:
								Global_1674535.f_43 = iVar3;
								break;
							case 6:
								Global_1674535.f_44 = iVar3;
								break;
							case 7:
								Global_1674535.f_45 = iVar3;
								break;
							case 8:
								Global_1674535.f_46 = iVar3;
								break;
							case 9:
								Global_1674535.f_47 = iVar3;
								break;
						}
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_781(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BUZZARD"):
		case joaat("SAVAGE"):
		case joaat("VALKYRIE"):
		case joaat("HYDRA"):
		case joaat("CARGOBOB"):
		case joaat("CARGOBOB2"):
		case joaat("HAVOK"):
		case joaat("HUNTER"):
		case joaat("VOLATUS"):
		case joaat("SUPERVOLITO"):
		case joaat("SUPERVOLITO2"):
		case joaat("SWIFT"):
		case joaat("SWIFT2"):
		case joaat("FROGGER"):
		case joaat("MAVERICK"):
		case joaat("ANNIHILATOR"):
		case joaat("MOGUL"):
		case joaat("ROGUE"):
		case joaat("STARLING"):
		case joaat("SEABREEZE"):
		case joaat("MICROLIGHT"):
		case joaat("TULA"):
		case joaat("LAZER"):
		case joaat("PYRO"):
		case joaat("MOLOTOK"):
		case joaat("NOKOTA"):
		case joaat("HOWARD"):
		case joaat("BOMBUSHKA"):
		case joaat("ALPHAZ1"):
		case joaat("NIMBUS"):
		case joaat("LUXOR2"):
		case joaat("VELUM2"):
		case joaat("DODO"):
		case joaat("MILJET"):
		case joaat("BESRA"):
		case joaat("VESTRA"):
		case joaat("DUSTER"):
		case joaat("SHAMAL"):
		case joaat("CUBAN800"):
		case joaat("LUXOR"):
		case joaat("STUNT"):
		case joaat("MAMMATUS"):
		case joaat("TITAN"):
		case joaat("VELUM"):
		case joaat("AKULA"):
		case joaat("VOLATOL"):
		case joaat("SEASPARROW"):
			return true;
		default:
			break;
	}
	if (iParam0 == joaat("STRIKEFORCE"))
	{
		return true;
	}
	return false;
}

bool func_782(bool bParam0, bool bParam1)
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
		if (!func_789())
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
		if ((((!func_788() && !func_787()) && !func_786()) && !func_785()) && !func_789())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_786())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_784(bParam0))
		{
			return false;
		}
	}
	if (!func_783(bParam0))
	{
		return false;
	}
	return true;
}

bool func_783(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_588())
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

bool func_784(bool bParam0)
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

bool func_785()
{
	return false;
}

bool func_786()
{
	return true;
}

bool func_787()
{
	return true;
}

bool func_788()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_789()
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

void func_790(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10163)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1671199[iParam0] - 1);
		if (bParam2)
		{
			if ((UNK_0xF4CCC8CB6DE7F1AE() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_791(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 8:
			return 88;
		case 9:
			return 108;
		case 10:
			return 128;
		case 11:
			return 148;
		case 6:
			return 65;
		case 7:
			return 75;
		case 5:
			return -1;
		case 12:
			return 159;
		case 13:
			return 179;
		case 14:
			return 191;
		case 15:
			return 192;
		case 16:
			return 202;
		case 17:
			return 212;
		case 18:
			return 227;
		case 19:
			return 237;
		case 20:
			return 247;
		case 21:
			return 258;
		case 22:
			return 268;
		case 23:
			return 281;
		case 24:
			return 294;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_734(iParam0);
		return func_793(iVar0);
	}
	return (func_792(iParam0, -1) * iParam0);
}

int func_792(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_484(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_490(iParam1))
			{
				return 0;
			}
			else if (func_482(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049922[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049922[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049922[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
		case 5:
			return 0;
		case 6:
			return 10;
		case 8:
		case 9:
		case 10:
			return 20;
		case 11:
			return 8;
		case 12:
			return 20;
		case 13:
			return 7;
		case 14:
			return 1;
		case 15:
		case 16:
		case 17:
			return 10;
		case 18:
		case 19:
		case 20:
			return 10;
		case 21:
			return 10;
		case 22:
			return 10;
	}
	return 0;
}

int func_793(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		case 2:
			return 223;
		case 1:
			return 224;
		default:
			break;
	}
	return -1;
}

int func_794()
{
	int iVar0;

	iVar0 = func_795();
	if (!func_989())
	{
		if (func_537() != func_32())
		{
			iVar0 = func_827(func_537()) + 1;
		}
	}
	return iVar0;
}

int func_795()
{
	return func_827(UNK_0xD803B885F5E47A62()) + 1;
}

int func_796()
{
	return func_559(6113, -1, 0);
}

int func_797(bool bParam0)
{
	if (func_296(bParam0, 1))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_451;
	}
	return -1;
}

void func_798(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	UNK_0x09B65A782EA88A3D(&Global_1674491);
	func_799();
}

void func_799()
{
	struct<44> Var0;

	Global_1674491 = { Var0 };
	Global_1674491.f_23 = 0;
	Global_1674491.f_24 = 0;
	Global_1674491.f_16 = 0;
}

bool func_800(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_351, 12);
}

bool func_801(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_351, 13);
}

bool func_802(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 12) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 13)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 14))
		{
			return true;
		}
	}
	return false;
}

bool func_803(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, true)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 2))
		{
			return true;
		}
	}
	return false;
}

bool func_804(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (((((UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 3) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 4)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 5)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, false)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, true)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 2))
		{
			return true;
		}
	}
	return false;
}

int func_805(int iParam0, bool bParam1)
{
	if (bParam1 == func_32())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, false))
			{
				return 3;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 3))
			{
				return 2;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 6))
			{
				return 4;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 9))
			{
				return 1;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 12))
			{
				return 7;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 15))
			{
				return 5;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 18))
			{
				return 6;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 21))
			{
				return 0;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 24))
			{
				return 8;
			}
			break;
		case 1:
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, true))
			{
				return 3;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 4))
			{
				return 2;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 7))
			{
				return 4;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 10))
			{
				return 1;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 13))
			{
				return 7;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 16))
			{
				return 5;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 19))
			{
				return 6;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 22))
			{
				return 0;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 25))
			{
				return 8;
			}
			break;
		case 2:
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 2))
			{
				return 3;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 5))
			{
				return 2;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 8))
			{
				return 4;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 11))
			{
				return 1;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 14))
			{
				return 7;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 17))
			{
				return 5;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 20))
			{
				return 6;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 23))
			{
				return 0;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

bool func_806(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 6) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 7)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 8))
		{
			return true;
		}
	}
	return false;
}

bool func_807(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_351, 8);
}

bool func_808(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_351, 7);
}

bool func_809(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_351, 9);
}

bool func_810(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_351, 11);
}

bool func_811(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_351, 10);
}

int func_812(int iParam0, int iParam1)
{
	return func_559(func_813(iParam1), iParam0, 0);
}

int func_813(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		case 1:
			return 3927;
		case 2:
			return 3931;
		case 3:
			return 3935;
		case 4:
			return 3939;
		case 5:
			return 5450;
		default:
			break;
	}
	return 3898;
}

void func_814(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	UNK_0x3315867670EACADD(&Global_1674428);
	func_815();
}

void func_815()
{
	struct<63> Var0;

	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1674428 = { Var0 };
	Global_1674428.f_24 = 0;
	Global_1674428.f_25 = 0;
	Global_1674428.f_17 = 0;
}

void func_816(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	UNK_0x9D44809E7CAF1A79(&Global_1674374);
	func_817();
}

void func_817()
{
	struct<54> Var0;

	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674374 = { Var0 };
	Global_1674374.f_29 = 0;
	Global_1674374.f_30 = 0;
	Global_1674374.f_17 = 0;
}

int func_818(bool bParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = func_694(bParam0, iParam1, 2);
	bVar1 = func_694(bParam0, iParam1, 1);
	bVar2 = func_694(bParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_819(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == func_32())
	{
		return 0;
	}
	if (func_686(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_820(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (func_419(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17699;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17698;
		}
		else
		{
			iVar0 = Global_262145.f_17680;
		}
		iVar1 = 19;
	}
	else if (func_480(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_327(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17679;
			iVar1 = 20;
		}
	}
	else if (func_430(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17699;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17698;
		}
		else
		{
			iVar0 = Global_262145.f_17680;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		UNK_0xF9647457141B11A7(func_738(func_537()), func_737(func_537()), func_837(), func_836(), iVar1, iVar0);
	}
	func_822(iVar0);
	func_821(iVar0);
	return iVar0;
}

void func_821(int iParam0)
{
	bool bVar0;

	bVar0 = func_559(3968, -1, 0);
	bVar0 = (bVar0 + iParam0);
	if (bVar0 < 0)
	{
		bVar0 = false;
	}
	if (bVar0 > 9999)
	{
		bVar0 = 9999;
	}
	Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_490 = bVar0;
	func_557(3968, bVar0, -1, 1, 0);
}

void func_822(int iParam0)
{
	int iVar0;

	iVar0 = UNK_0xD803B885F5E47A62();
	Global_1628237[iVar0 /*615*/].f_11.f_489 = (Global_1628237[iVar0 /*615*/].f_11.f_489 + iParam0);
	if (Global_1628237[iVar0 /*615*/].f_11.f_489 < -9999)
	{
		Global_1628237[iVar0 /*615*/].f_11.f_489 = 9999;
	}
	else if (Global_1628237[iVar0 /*615*/].f_11.f_489 > 9999)
	{
		Global_1628237[iVar0 /*615*/].f_11.f_489 = 9999;
	}
}

bool func_823(bool bParam0)
{
	if (bParam0)
	{
		return false;
	}
	if (func_250(UNK_0xD803B885F5E47A62()) || func_219(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	return false;
}

void func_824(int iParam0)
{
	UNK_0xC56A8C7E94A60EE3(&Global_1674635);
	func_825();
}

void func_825()
{
	struct<36> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1674635 = { Var0 };
}

bool func_826(int iParam0)
{
	if (iParam0 != func_32())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_322 != 0;
	}
	return false;
}

int func_827(bool bParam0)
{
	if (func_88(bParam0) == func_32())
	{
		return 0;
	}
	return Global_1628237[bParam0 /*615*/].f_11.f_19;
}

int func_828()
{
	int iVar0;

	if (func_560())
	{
		return 4;
	}
	else if (func_989())
	{
		if (func_721(UNK_0xD803B885F5E47A62()))
		{
			return 8;
		}
		return 6;
	}
	if (func_357(1))
	{
		iVar0 = func_797(UNK_0xD803B885F5E47A62());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_538(1))
	{
		if (func_721(func_537()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_829(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_830(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_288(UNK_0xD803B885F5E47A62());
	}
	else
	{
		iVar0 = func_230(UNK_0xD803B885F5E47A62());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_835(UNK_0xD803B885F5E47A62());
			iVar1 = iVar2;
			break;
		case 150:
			iVar2 = func_833(UNK_0xD803B885F5E47A62());
			iVar1 = iVar2;
			break;
		case 237:
			iVar2 = func_832(UNK_0xD803B885F5E47A62());
			if (func_549(func_550(UNK_0xD803B885F5E47A62())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		case 250:
			iVar2 = func_832(UNK_0xD803B885F5E47A62());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		case 238:
			iVar2 = func_831(UNK_0xD803B885F5E47A62());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		case 249:
			iVar2 = func_831(UNK_0xD803B885F5E47A62());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		case 239:
			iVar1 = 600;
			break;
		case 240:
			iVar1 = 700;
			break;
		case 241:
			iVar1 = 800;
			break;
		case 242:
			iVar1 = 900;
			break;
		case 244:
			iVar1 = 1100;
			break;
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_831(int iParam0)
{
	if (func_230(UNK_0xD803B885F5E47A62()) == 238 || func_230(UNK_0xD803B885F5E47A62()) == 249)
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_499;
	}
	return -1;
}

int func_832(int iParam0)
{
	if (func_230(UNK_0xD803B885F5E47A62()) == 237 || func_230(UNK_0xD803B885F5E47A62()) == 250)
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_498;
	}
	return -1;
}

int func_833(int iParam0)
{
	return func_834(iParam0, 150);
}

int func_834(int iParam0, int iParam1)
{
	if (func_288(iParam0) == iParam1)
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_496;
	}
	return -1;
}

int func_835(int iParam0)
{
	return func_834(iParam0, 236);
}

int func_836()
{
	if (Global_1674356.f_3 != 0)
	{
		return Global_1674356.f_3;
	}
	return -1;
}

int func_837()
{
	if (Global_1674356.f_2 != 0)
	{
		return Global_1674356.f_2;
	}
	return -1;
}

int func_838(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = func_32();
	bVar1 = func_32();
	bVar2 = func_32();
	return func_839(iParam0, sParam1, sParam2, bParam3, iParam4, bVar0, bVar1, bVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_839(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<80> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_536(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_17 = bParam5;
	Var0.f_18 = bParam6;
	Var0.f_19 = bParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = iParam4;
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam13;
	Var0.f_72 = iParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_336(&(Var0.f_69), 4);
	return func_502(&Var0);
}

int func_840(bool bParam0)
{
	int iVar0;

	iVar0 = func_300(bParam0);
	if (iVar0 != -1)
	{
		return func_298(iVar0);
	}
	return 1;
}

bool func_841()
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_88(UNK_0xD803B885F5E47A62());
	if (bVar0 != func_32())
	{
		if (bVar0 != UNK_0xD803B885F5E47A62())
		{
			if (((func_200(bVar0, 28) || func_200(UNK_0xD803B885F5E47A62(), 28)) || func_542(bVar0)) && !func_541(bVar0))
			{
				return func_543(bVar0, 0);
			}
			if (!UNK_0xDC30EF462887322E() && !UNK_0x05449BDA851F5199(0, -1, 1))
			{
				return func_543(bVar0, 0);
			}
		}
		bVar1 = func_545(&(Global_1628237[bVar0 /*615*/].f_11.f_104));
		if (UNK_0xEA6BC48857E0AC4C(bVar1))
		{
			return func_543(bVar0, 0);
		}
		else
		{
			return bVar1;
		}
	}
	return "";
}

void func_842()
{
	func_984();
	func_938();
	func_927();
	func_917();
	func_864();
	func_859();
	func_846();
	func_843();
}

void func_843()
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (iLocal_741 != Local_176.f_5)
	{
		if (Local_176.f_34 != -1)
		{
			if (func_457())
			{
				if (func_402(UNK_0xD803B885F5E47A62()) >= 1)
				{
					if (Local_176.f_5 > 0)
					{
						if (Local_176.f_37 > -1)
						{
							bVar0 = UNK_0x117658E336116132(Local_176.f_37);
							if (UNK_0x40B8C182D63932FC(bVar0))
							{
								if (bVar0 != UNK_0xD803B885F5E47A62())
								{
									if (func_296(bVar0, 1))
									{
										iVar1 = func_300(bVar0);
										if (iVar1 > -1)
										{
											bVar2 = func_298(iVar1);
											func_844("GB_SGHT_TCKC", bVar0, bVar2, 0, 0, 0, 1, 0);
										}
									}
									else
									{
										func_844("GB_SGHT_TCKC", bVar0, 1, 0, 0, 0, 1, 0);
									}
								}
							}
						}
					}
				}
			}
			iLocal_741 = Local_176.f_5;
		}
	}
}

int func_844(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;

	iVar0 = -1;
	if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bParam1) || bParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, UNK_0x6E524813889AECF8(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, UNK_0x6E524813889AECF8(bParam1), 64);
		}
		if (UNK_0xEA6BC48857E0AC4C(&Var1))
		{
		}
		UNK_0x1E64CE678ED5F61E(bParam0);
		UNK_0x3A820E495A7BA3E5(bParam2);
		UNK_0xD06AC7C87A34A6AD(func_648(&Var1));
		if (!bParam5)
		{
			iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
		}
		else
		{
			Global_2513218 = { func_89(bParam1) };
			if (UNK_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218))
			{
				iVar17 = 0;
				if (UNK_0x7F8A39872A07D2CE(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2513148.f_21 > 0)
				{
					iVar18 = 0;
				}
				else
				{
					iVar18 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var1 = { func_845(&Var1) };
					}
					iVar0 = UNK_0x0D020422A92A2236(iVar18, UNK_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar17, 0, Global_2513148, &Var1, Global_1314034, Global_1314035, Global_1314036);
				}
				else
				{
					iVar0 = UNK_0xDCEBC63DB246F9AE(iVar18, UNK_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar17, 0, Global_2513148, Global_1314034, Global_1314035, Global_1314036);
				}
			}
			else
			{
				iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
			}
		}
		func_644(14, bParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_845(char* sParam0)
{
	struct<16> Var0;

	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_846()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1005() && !func_411())
	{
		return;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_442, false))
	{
		return;
	}
	if (!func_457())
	{
		return;
	}
	iVar0 = func_402(UNK_0xD803B885F5E47A62());
	if (iVar0 < 3)
	{
		return;
	}
	if (func_9(&(Local_176.f_51)))
	{
		iVar1 = (func_11() - func_858(&(Local_176.f_51), 0, 0));
		iVar2 = (func_189() - Local_176.f_5);
		func_857(iVar1);
		if (iVar1 > 30000)
		{
			func_847(iVar2, "GB_SGHT_HUD", iVar1, 1, "GB_WORK_END");
		}
		else if (iVar1 > 0)
		{
			func_847(iVar2, "GB_SGHT_HUD", iVar1, 6, "GB_WORK_END");
		}
		else
		{
			func_847(iVar2, "GB_SGHT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_847(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	bool bVar0;

	if (func_855(0) == 0)
	{
		return;
	}
	func_854();
	func_851(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	bVar0 = "HUD_COUNTDOWN";
	if (!func_629(bParam4))
	{
		bVar0 = bParam4;
	}
	func_848(iParam2, bVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0, -1);
}

void func_848(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	bool bVar1;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_850(7, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_849(7, bVar0);
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

void func_849(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), bParam1);
}

bool func_850(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], bParam1);
}

void func_851(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_850(6, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_849(6, bVar0);
		Global_1378678.f_3944[bVar0] = iParam0;
		StringCopy(&(Global_1378678.f_3944.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_3944.f_183[bVar0] = iParam3;
		Global_1378678.f_3944.f_172[bVar0] = iParam2;
		Global_1378678.f_3944.f_260[bVar0] = iParam4;
		Global_1378678.f_3944.f_271[bVar0] = iParam5;
		StringCopy(&(Global_1378678.f_3944.f_282[bVar0 /*16*/]), sParam6, 64);
		Global_1378678.f_3944.f_443[bVar0] = iParam7;
		Global_1378678.f_3944.f_454[bVar0] = iParam8;
		Global_1378678.f_3944.f_497[bVar0] = iParam9;
		Global_1378678.f_3944.f_508[bVar0] = iParam10;
		Global_1378678.f_3944.f_205[bVar0] = iParam11;
		Global_1378678.f_3944.f_216[bVar0] = iParam12;
		Global_1378678.f_3944.f_227[bVar0] = iParam13;
		Global_1378678.f_3944.f_238[bVar0] = iParam14;
		Global_1378678.f_3944.f_249[bVar0] = iParam15;
		Global_1378678.f_3944.f_519[bVar0] = iParam16;
		Global_1378678.f_3944.f_530[bVar0] = iParam17;
		Global_1378678.f_3944.f_541[bVar0] = iParam18;
		Global_1378678.f_3944.f_552[bVar0] = iParam19;
		Global_1378678.f_3944.f_563[bVar0] = iParam20;
		Global_1378678.f_3944.f_574[bVar0] = iParam21;
		Global_1378678.f_3944.f_585[bVar0] = iParam22;
		Global_1378678.f_3944.f_596[bVar0] = iParam23;
		Global_1378678.f_3944.f_607[bVar0] = iParam24;
		Global_1378678.f_3944.f_194[bVar0] = iParam25;
		if (iParam15 == 5 && func_853())
		{
			Global_1378678.f_1130 = 1;
		}
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			bVar2 = false;
			UNK_0xE5AC5CA7914F5BAE(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				bVar2 = true;
			}
			if (iParam0 > 99999999)
			{
				Global_1378678.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || bVar2)
			{
				Global_1378678.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1378678.f_1130 = 1;
			}
			if (func_852())
			{
				Global_1378678.f_1134 = 1;
			}
		}
	}
}

bool func_852()
{
	int iVar0;
	var uVar1;

	if (UNK_0x0EFF6B4415DAF4A1())
	{
		UNK_0xE5AC5CA7914F5BAE(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return true;
		}
	}
	return false;
}

bool func_853()
{
	if (((UNK_0xB3260A60545D3F11() == 8 || UNK_0xB3260A60545D3F11() == 9) || UNK_0xB3260A60545D3F11() == 10) || UNK_0xB3260A60545D3F11() == 12)
	{
		return true;
	}
	return false;
}

void func_854()
{
	UNK_0x3584F71E5CA29322(8);
	UNK_0x3584F71E5CA29322(9);
	UNK_0x3584F71E5CA29322(6);
	UNK_0x3584F71E5CA29322(7);
	Global_2462225 = 1;
}

int func_855(bool bParam0)
{
	if (func_856())
	{
		return 0;
	}
	if (func_385())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_1115(UNK_0xD803B885F5E47A62(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_856()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 12);
}

void func_857(int iParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_430, 8))
	{
		func_201();
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_430, 15))
	{
		if (iParam0 <= 35000)
		{
			if (UNK_0xC92DB9682A650680("APT_PRE_COUNTDOWN_STOP"))
			{
				UNK_0x5D96D8530B3D0904(&bLocal_430, 15);
				UNK_0x5D96D8530B3D0904(&bLocal_430, 9);
			}
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_430, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_430, 11))
			{
				if (UNK_0x13896FDECC859926("APT_COUNTDOWN_30S_KILL"))
				{
					UNK_0x7352ACF3368DF65F("AllowScoreAndRadio", 1);
					UNK_0xBEF52C1D400C0A44(0);
					UNK_0x5D96D8530B3D0904(&bLocal_430, 11);
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_430, 14))
			{
				if (UNK_0xC92DB9682A650680("APT_COUNTDOWN_30S"))
				{
					UNK_0x5D96D8530B3D0904(&bLocal_430, 14);
				}
			}
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_430, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_430, 12))
					{
						UNK_0xBEF52C1D400C0A44(1);
						UNK_0x7352ACF3368DF65F("AllowScoreAndRadio", 0);
						UNK_0x5D96D8530B3D0904(&bLocal_430, 12);
					}
					if (iParam0 <= 500)
					{
						if (UNK_0xC92DB9682A650680("APT_FADE_IN_RADIO"))
						{
							UNK_0x38DC636F3D2D2FA8("APT_COUNTDOWN_30S_KILL");
							UNK_0x0674E58A79778E99(&bLocal_430, 9);
						}
					}
				}
			}
		}
	}
}

int func_858(var uParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			return UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), *uParam0);
		}
		else
		{
			return UNK_0x519D13E6C1911A0B(UNK_0x6794171A1021C2D8(), *uParam0);
		}
	}
	return UNK_0x519D13E6C1911A0B(UNK_0x1C0640BA9A7327B3(), *uParam0);
}

void func_859()
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0xE5DBF9B6126856CA(Local_176.f_3))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_236[UNK_0x57270EE11514DC67() /*6*/].f_1, 2))
			{
				if (UNK_0x50B5F6F3C29E9380(UNK_0x09AD4CE7DA179533(Local_176.f_3), UNK_0x16F2683693E537C9()))
				{
					UNK_0x5D96D8530B3D0904(&(Local_236[UNK_0x57270EE11514DC67() /*6*/].f_1), 2);
					iLocal_739 = UNK_0xD68EA767274B7444();
					if (func_357(1))
					{
						UNK_0x4D7F4CC43D4D0DE3(iLocal_739, "Pickup_Briefcase", "GTAO_Biker_Modes_Soundset", 0);
					}
					else
					{
						UNK_0x4D7F4CC43D4D0DE3(iLocal_739, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", 0);
					}
					Local_236[UNK_0x57270EE11514DC67() /*6*/].f_5++;
				}
			}
		}
	}
	if (iLocal_432 != Local_176.f_5)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_236[UNK_0x57270EE11514DC67() /*6*/].f_1, 3))
		{
			UNK_0x0674E58A79778E99(&(Local_236[UNK_0x57270EE11514DC67() /*6*/].f_1), 3);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Local_236[UNK_0x57270EE11514DC67() /*6*/].f_1, 2))
		{
			if (UNK_0x526BC32A660C89E6(Local_176.f_3))
			{
				bVar0 = UNK_0xA5FBBC2F619A4DE2(Local_176.f_3);
				UNK_0x2ABAFAE29D459CE5(&bVar0);
				UNK_0x0674E58A79778E99(&(Local_236[UNK_0x57270EE11514DC67() /*6*/].f_1), 2);
			}
			else
			{
				UNK_0x8D30F6387EE75385(Local_176.f_3);
			}
		}
		else
		{
			iLocal_432 = Local_176.f_5;
		}
	}
	if (UNK_0xE5DBF9B6126856CA(Local_176.f_3))
	{
		if (func_989())
		{
			if (func_1005())
			{
				func_861();
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 13))
		{
			if (!func_1005() || !func_989())
			{
				UNK_0x3192B0FF798E63C8(UNK_0x09AD4CE7DA179533(Local_176.f_3), 1, 1);
				UNK_0x5D96D8530B3D0904(&bLocal_429, 13);
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 3))
		{
			UNK_0x25BD67336EA4AECE(UNK_0x09AD4CE7DA179533(Local_176.f_3), 1200);
			UNK_0x5D96D8530B3D0904(&bLocal_429, 3);
		}
	}
	else
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_429, 13))
		{
			UNK_0x0674E58A79778E99(&bLocal_429, 13);
		}
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_429, 3))
		{
			UNK_0x0674E58A79778E99(&bLocal_429, 3);
		}
		if (UNK_0xE4EDC4B0E92C078B(iLocal_434))
		{
			UNK_0x142CC44DB769B57E(&iLocal_434);
		}
	}
	func_860();
}

void func_860()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;

	if (!func_457())
	{
		return;
	}
	if (func_402(UNK_0xD803B885F5E47A62()) >= 1)
	{
		if (UNK_0xE9F78D191AD5EDBA(Local_176.f_3) && !UNK_0x437347B10A200C4B(UNK_0x09AD4CE7DA179533(Local_176.f_3), 0))
		{
			if (!UNK_0xBDEB2DEEF1D23A18(UNK_0x09AD4CE7DA179533(Local_176.f_3)))
			{
				UNK_0xA402F6C87C08815C(18, &bVar0, &bVar1, &bVar2, &uVar3);
				UNK_0x922D0EFFF8F2403B(2, UNK_0x68F4C0EC296D3901(UNK_0xA5FBBC2F619A4DE2(Local_176.f_3), true) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, bVar0, bVar1, bVar2, 100, 1, 1, 2, false, false, false, false);
			}
		}
	}
}

void func_861()
{
	int iVar0;

	iVar0 = func_402(UNK_0xD803B885F5E47A62());
	if (iVar0 < 2)
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_434))
		{
			UNK_0x142CC44DB769B57E(&iLocal_434);
		}
		return;
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_434))
	{
		return;
	}
	UNK_0x0674E58A79778E99(&bLocal_429, 11);
	iLocal_434 = UNK_0x5C3B41825F6AC5A0(UNK_0xA5FBBC2F619A4DE2(Local_176.f_3));
	UNK_0x2A065371C9D96655(iLocal_434, 12);
	UNK_0xBC8E0A7390523199(iLocal_434, 459);
	UNK_0xDC5B2F9D0CCE3A10(iLocal_434, "GB_SGHT_BLP");
	UNK_0x661342B9651D16E2(iLocal_434, true);
	UNK_0x516E63E474722206(iLocal_434, Global_262145.f_12355);
	if (func_1005())
	{
		func_862(&iLocal_434, 18);
	}
	UNK_0xF2D30B8ACAF12A39(iLocal_434, true);
	iLocal_740 = UNK_0xD68EA767274B7444();
	if (func_357(1))
	{
		UNK_0x4D7F4CC43D4D0DE3(iLocal_740, "Blip_Pickup", "GTAO_Biker_Modes_Soundset", 0);
	}
	else
	{
		UNK_0x4D7F4CC43D4D0DE3(iLocal_740, "Blip_Pickup", "GTAO_Magnate_Boss_Modes_Soundset", 0);
	}
}

void func_862(int iParam0, bool bParam1)
{
	bool bVar0;

	if (UNK_0xE4EDC4B0E92C078B(*iParam0))
	{
		bVar0 = func_863(bParam1);
		UNK_0x61755AC17D8F538E(*iParam0, bVar0);
	}
}

int func_863(bool bParam0)
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

void func_864()
{
	if (UNK_0x57270EE11514DC67() != Local_176.f_33)
	{
		return;
	}
	if (UNK_0xE5DBF9B6126856CA(Local_176.f_3))
	{
		if (iLocal_736 != -1)
		{
			iLocal_736 = -1;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4269765, 20))
		{
			UNK_0x0674E58A79778E99(&Global_4269765, 20);
		}
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 20))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 21))
		{
			if (iLocal_736 < 0)
			{
				UNK_0x5D96D8530B3D0904(&Global_4269765, 20);
			}
		}
	}
	if (iLocal_737 == -1)
	{
		iLocal_737 = UNK_0x09AC81E49EA267F7(false, 3);
	}
	if (iLocal_736 < 0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_4269765, 21))
		{
			UNK_0x0674E58A79778E99(&Global_4269765, 21);
			iLocal_736 = 0;
		}
	}
	func_865();
}

void func_865()
{
	bool bVar0;

	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 4))
	{
		if (iLocal_736 >= 0)
		{
			if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				UNK_0x0674E58A79778E99(&Local_442, false);
				iLocal_736 = -1;
			}
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
				{
					func_916(1);
				}
			}
		}
	}
	else if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		func_915(&Local_442);
		func_914(&Local_442);
		UNK_0x0674E58A79778E99(&bLocal_429, 4);
	}
	switch (iLocal_736)
	{
		case 0:
			func_913(1);
			UNK_0xD7992BEF7A9D109E("HACK", 3);
			iLocal_736++;
			break;
		case 1:
			if (func_912(1) && UNK_0x67C1D9E5B91B2E37(3))
			{
				UNK_0x5D96D8530B3D0904(&Local_442, false);
				UNK_0x5D96D8530B3D0904(&(Local_442.f_1), false);
				func_450();
				iLocal_738 = 10;
				if (iLocal_737 == 2)
				{
					Local_442.f_22 = 1;
				}
				else if (iLocal_737 == 1)
				{
					Local_442.f_22 = 0;
					iLocal_738 = 77;
				}
				else if (iLocal_737 == 0)
				{
					iLocal_738 = 50;
					Local_442.f_22 = 0;
				}
				func_903(UNK_0xD803B885F5E47A62(), 0, 66048, 0);
				iLocal_736++;
			}
			else
			{
				if (!func_912(1))
				{
				}
				if (!UNK_0x67C1D9E5B91B2E37(3))
				{
				}
			}
			break;
		case 2:
			UNK_0x3FC8DBCC154CA56B();
			UNK_0x5024DE80A08E9E70(19);
			if (!func_205(0))
			{
				func_234(0);
			}
			if (iLocal_737 == 0)
			{
				func_881(&Local_442, 5, 5, iLocal_738, 10, 8, 10, 0, 1, 0, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_880(&Local_442, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_737 == 1)
			{
				func_881(&Local_442, 5, 5, iLocal_738, 10, 8, 10, 0, 0, 1, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_879(&Local_442, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_737 == 2)
			{
				func_881(&Local_442, 5, 5, iLocal_738, 10, 8, 10, 0, 0, 0, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_866(&Local_442, 1))
				{
					bVar0 = true;
				}
			}
			if (UNK_0xEAE0D21A50E6C7F4(Local_442.f_1, true))
			{
				UNK_0x0674E58A79778E99(&Local_442, false);
				func_915(&Local_442);
				func_903(UNK_0xD803B885F5E47A62(), 1, 0, 0);
				if (func_205(0))
				{
					func_204(0);
				}
				iLocal_736 = -1;
			}
			else if (bVar0)
			{
				UNK_0x0674E58A79778E99(&Local_442, false);
				func_915(&Local_442);
				Local_236[UNK_0x57270EE11514DC67() /*6*/].f_4++;
				UNK_0x5D96D8530B3D0904(&(Local_236[UNK_0x57270EE11514DC67() /*6*/].f_1), 3);
				iLocal_737++;
				if (iLocal_737 >= 3)
				{
					iLocal_737 = 0;
				}
				if (func_205(0))
				{
					func_204(0);
				}
				func_903(UNK_0xD803B885F5E47A62(), 1, 0, 0);
				iLocal_736++;
			}
			break;
	}
}

bool func_866(bool bParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 26))
	{
		if (bParam1)
		{
			func_867(bParam0, 1, 1);
			return true;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_867(bool bParam0, bool bParam1, bool bParam2)
{
	UNK_0x0674E58A79778E99(bParam0, false);
	UNK_0x5D96D8530B3D0904(bParam0, 12);
	UNK_0x5DD950F92F816F03(0);
	if (bParam2)
	{
		if (!UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
		{
			UNK_0x76B892E21D01B885(UNK_0x16F2683693E537C9(), 1, 1, 1, 0);
		}
	}
	if (UNK_0xC8BC75555A67090D())
	{
		UNK_0xC5A93869E686EE32(0);
	}
	UNK_0xA37A90C62806D848(1);
	if (bParam1)
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	}
	UNK_0x9A8DDC7C522F5BF5(iLocal_77, 0);
	func_871(0);
	func_870();
	UNK_0xD1D3393F08AA59CD(0);
	func_869(bParam0, 1, 1, 0);
	func_868(0, 1, 1, 0);
}

int func_868(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

void func_869(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!bParam3)
	{
		iVar0 = 4;
		while (iVar0 <= 0)
		{
			if (iLocal_68[iVar0] != -1)
			{
				if (!UNK_0x8AA6DC470ABA63A2(iLocal_68[iVar0]))
				{
					UNK_0x55D0A2DB35045A35(iLocal_68[iVar0]);
					UNK_0x43A06902454A1172(iLocal_68[iVar0]);
					iLocal_68[iVar0] = -1;
				}
			}
			iVar0++;
		}
		if (bParam0->f_20 > -1)
		{
			if (!UNK_0x8AA6DC470ABA63A2(bParam0->f_20))
			{
				UNK_0x55D0A2DB35045A35(bParam0->f_20);
				UNK_0x43A06902454A1172(bParam0->f_20);
				bParam0->f_20 = -1;
			}
		}
	}
	UNK_0x0674E58A79778E99(bParam0, 25);
	UNK_0x0674E58A79778E99(bParam0, 5);
	if (iParam2 == 1)
	{
		UNK_0x0674E58A79778E99(bParam0, 12);
		UNK_0x0674E58A79778E99(bParam0, 9);
		UNK_0x0674E58A79778E99(bParam0, 18);
		UNK_0x0674E58A79778E99(bParam0, 27);
		UNK_0x0674E58A79778E99(bParam0, 28);
	}
	bParam0->f_1 = 0;
	bParam0->f_7 = bParam0->f_6;
	iLocal_80 = 0;
	if (bParam1)
	{
		UNK_0xE17FDF9E3068281B(&iLocal_79);
	}
	UNK_0x0674E58A79778E99(bParam0, 29);
	func_868(0, 1, 1, 0);
}

void func_870()
{
	int iVar0;

	Global_1377170.f_1047 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1377170.f_170[iVar0] = 0;
		iVar0++;
	}
	Global_2537071.f_4532 = 1;
}

void func_871(bool bParam0)
{
	if (bParam0)
	{
		func_878();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_877(0))
		{
			func_872(0);
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

void func_872(int iParam0)
{
	if (func_876())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_875())
		{
			func_874(1, 1);
		}
		else
		{
			func_874(0, 0);
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
	if (!func_873())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_873()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_874(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_877(0))
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

bool func_875()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_876()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

bool func_877(int iParam0)
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

void func_878()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

bool func_879(bool bParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 9))
	{
		if (bParam1)
		{
			func_867(bParam0, 1, 1);
			return true;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_880(bool bParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 18))
	{
		if (bParam1)
		{
			func_867(bParam0, 1, 1);
			return true;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_881(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	if (UNK_0xEAE0D21A50E6C7F4(*bParam0, false))
	{
		func_882(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, iParam14, bParam15, bParam16, bParam17, bParam18);
	}
}

void func_882(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11[4];
	int iVar16;
	int iVar17;

	UNK_0xA2E3EDD0E119882F(0);
	UNK_0xA2E3EDD0E119882F(2);
	UNK_0x5DD950F92F816F03(1);
	if (bParam17)
	{
		func_902(1);
	}
	func_901(4, -1);
	func_900(0);
	if (func_912(bParam16))
	{
		if (!UNK_0x798A3F1296751F46())
		{
			UNK_0x3FC8DBCC154CA56B();
			UNK_0xD9ACBBA59FD5A09E(1);
			if (UNK_0x8BB17FEBE0394018() == 0 && !UNK_0x798A3F1296751F46())
			{
				UNK_0x6567AE843FADBA94(iLocal_79, 255, 255, 255, false, 0);
			}
		}
		if (UNK_0x9E6C8D8976DA0ECD(2))
		{
			bParam0->f_290 = UNK_0x659FAE9DBE6F38F5(2, 239);
			bParam0->f_291 = UNK_0x659FAE9DBE6F38F5(2, 240);
			if (bParam0->f_292 != bParam0->f_290 || bParam0->f_293 != bParam0->f_291)
			{
				UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_CURSOR");
				UNK_0x7C19E5E4784BD7CF(bParam0->f_290);
				UNK_0x7C19E5E4784BD7CF(bParam0->f_291);
				UNK_0x7E60D21B163E9D56();
			}
			bParam0->f_292 = bParam0->f_290;
			bParam0->f_293 = bParam0->f_291;
		}
		else
		{
			func_899(&iVar2, &iVar3, &iVar4, &iVar5, 0);
			if (iVar4 < 0 || iVar5 < 0)
			{
			}
			bVar6 = ((SYSTEM::TO_FLOAT(iVar2) * 8f) * SYSTEM::TIMESTEP());
			bVar7 = ((SYSTEM::TO_FLOAT(iVar3) * 8f) * SYSTEM::TIMESTEP());
			if (iLocal_80 != 8)
			{
				if (((bVar6 > 1f || bVar7 > 1f) || bVar6 < -1f) || bVar7 < -1f)
				{
					UNK_0x7E60C62A7CE58FC8(iLocal_79, "MOVE_CURSOR");
					UNK_0x7C19E5E4784BD7CF(bVar6);
					UNK_0x7C19E5E4784BD7CF(bVar7);
					UNK_0x7E60D21B163E9D56();
				}
			}
		}
		if (iLocal_80 > 4)
		{
			if (UNK_0x9E6C8D8976DA0ECD(2))
			{
				bParam0->f_290 = UNK_0x4F3973434662D795(2, 239);
				bParam0->f_291 = UNK_0x4F3973434662D795(2, 240);
				if (UNK_0x33A494591F2C1975())
				{
					if (bParam0->f_292 != bParam0->f_290)
					{
						if (bParam0->f_290 < 0.49f)
						{
							UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_MOVE_CURSOR", false, 1);
							UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT");
							UNK_0x3CAEA85DA607305E(10);
							UNK_0x7E60D21B163E9D56();
						}
						else if (bParam0->f_290 > 0.51f)
						{
							UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_MOVE_CURSOR", false, 1);
							UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT");
							UNK_0x3CAEA85DA607305E(11);
							UNK_0x7E60D21B163E9D56();
						}
					}
				}
				bParam0->f_292 = bParam0->f_290;
				bParam0->f_293 = bParam0->f_291;
			}
			if (UNK_0x91E3F625EF57450D(2))
			{
				fVar8 = UNK_0x4B7163B4D6E4A3C2(2, 1);
				fVar9 = UNK_0x4B7163B4D6E4A3C2(2, 2);
				bVar10 = false;
				fLocal_67 = (fLocal_67 + SYSTEM::TIMESTEP());
				bLocal_74 = (bLocal_74 + fVar8);
				bLocal_75 = (bLocal_75 + fVar9);
				fLocal_76 = (fLocal_76 + 1f);
				if (fLocal_67 > 0.15f)
				{
					fLocal_67 = 0f;
					bLocal_74 = (bLocal_74 / fLocal_76);
					bLocal_75 = (bLocal_75 / fLocal_76);
					if (UNK_0x755FF954DAE327E1(bLocal_75) < 0.2f)
					{
						if (bLocal_74 < 0f)
						{
							bVar10 = true;
							UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT");
							UNK_0x3CAEA85DA607305E(10);
							UNK_0x7E60D21B163E9D56();
						}
						else if (bLocal_74 > 0f)
						{
							bVar10 = true;
							UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT");
							UNK_0x3CAEA85DA607305E(11);
							UNK_0x7E60D21B163E9D56();
						}
					}
					if (UNK_0x755FF954DAE327E1(bLocal_74) < 0.2f)
					{
						if (bLocal_75 < 0f)
						{
							bVar10 = true;
							UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT");
							UNK_0x3CAEA85DA607305E(8);
							UNK_0x7E60D21B163E9D56();
						}
						else if (bLocal_75 > 0f)
						{
							bVar10 = true;
							UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT");
							UNK_0x3CAEA85DA607305E(9);
							UNK_0x7E60D21B163E9D56();
						}
					}
					if (bVar10)
					{
						UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_MOVE_CURSOR", false, 1);
					}
					bLocal_74 = 0f;
					bLocal_75 = 0f;
					fLocal_76 = 0f;
				}
			}
			func_898(&(iVar11[0]), &(iVar11[1]), &(iVar11[2]), &(iVar11[3]), 0, 0);
			iVar16 = 0;
			while (iVar16 < iVar11)
			{
				if (UNK_0x51D1D19912234EA0(iVar11[iVar16]) > 0)
				{
					if (iVar16 == 0 || iVar16 == 1)
					{
						if (UNK_0x8AA6DC470ABA63A2(bParam0->f_20))
						{
							if (iLocal_80 != 8)
							{
								UNK_0x4D7F4CC43D4D0DE3(bParam0->f_20, "HACKING_MOVE_CURSOR", false, 1);
							}
						}
					}
				}
				iVar16++;
			}
			if (((UNK_0xBFC0798A6E3417F9(2, 195) || UNK_0xBFC0798A6E3417F9(2, 196)) || UNK_0x06F8112AA79C53D9(2, 195)) || UNK_0x06F8112AA79C53D9(2, 196))
			{
			}
			if (UNK_0x91E3F625EF57450D(2))
			{
				if (UNK_0xBFC0798A6E3417F9(2, 32) || UNK_0xBFC0798A6E3417F9(2, 172))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_MOVE_CURSOR", false, 1);
					UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT");
					UNK_0x3CAEA85DA607305E(8);
					UNK_0x7E60D21B163E9D56();
				}
				else if (UNK_0xBFC0798A6E3417F9(2, 33) || UNK_0xBFC0798A6E3417F9(2, 173))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_MOVE_CURSOR", false, 1);
					UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT");
					UNK_0x3CAEA85DA607305E(9);
					UNK_0x7E60D21B163E9D56();
				}
				else if (UNK_0xBFC0798A6E3417F9(2, 34) || UNK_0xBFC0798A6E3417F9(2, 174))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_MOVE_CURSOR", false, 1);
					UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT");
					UNK_0x3CAEA85DA607305E(10);
					UNK_0x7E60D21B163E9D56();
				}
				else if (UNK_0xBFC0798A6E3417F9(2, 35) || UNK_0xBFC0798A6E3417F9(2, 175))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_MOVE_CURSOR", false, 1);
					UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT");
					UNK_0x3CAEA85DA607305E(11);
					UNK_0x7E60D21B163E9D56();
				}
			}
			else if (UNK_0xBFC0798A6E3417F9(2, 188))
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_MOVE_CURSOR", false, 1);
				UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT");
				UNK_0x3CAEA85DA607305E(8);
				UNK_0x7E60D21B163E9D56();
			}
			else if (UNK_0xBFC0798A6E3417F9(2, 187))
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_MOVE_CURSOR", false, 1);
				UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT");
				UNK_0x3CAEA85DA607305E(9);
				UNK_0x7E60D21B163E9D56();
			}
			else if (UNK_0xBFC0798A6E3417F9(2, 189))
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_MOVE_CURSOR", false, 1);
				UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT");
				UNK_0x3CAEA85DA607305E(10);
				UNK_0x7E60D21B163E9D56();
			}
			else if (UNK_0xBFC0798A6E3417F9(2, 190))
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_MOVE_CURSOR", false, 1);
				UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT");
				UNK_0x3CAEA85DA607305E(11);
				UNK_0x7E60D21B163E9D56();
			}
		}
		if (bParam12)
		{
			if (UNK_0xBFC0798A6E3417F9(2, 201) || UNK_0xBFC0798A6E3417F9(2, 237))
			{
				UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT_SELECT");
				iLocal_78 = UNK_0x7A8BB56B212464AC();
			}
			if (UNK_0xC95D7AEEDEF4946B(iLocal_78))
			{
				iVar0 = UNK_0xA52833FE33F41C53(iLocal_78);
				if (iVar0 == 6)
				{
					func_897(bParam0);
				}
			}
		}
		func_896();
	}
	if (iLocal_80 == 5 || iLocal_80 == 6)
	{
		if (bLocal_64)
		{
			func_895((iParam15 - (UNK_0x1C0640BA9A7327B3() - iLocal_63)), &iLocal_60, &iLocal_61, &iLocal_62);
			if ((iLocal_60 >= 0 && iLocal_61 >= 0) && iLocal_62 >= 0)
			{
				UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COUNTDOWN", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			else
			{
				iLocal_60 = 0;
				iLocal_61 = 0;
				iLocal_62 = 0;
				UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COUNTDOWN", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
		}
	}
	if (iLocal_80 == 5)
	{
		if (func_894(&iLocal_81, (10000 / iParam4)))
		{
			if (bParam0->f_9 > 20f)
			{
				bParam0->f_9 = (bParam0->f_9 - 1f);
				UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_SPEED", bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				iLocal_81 = UNK_0x1C0640BA9A7327B3();
			}
		}
	}
	if (iLocal_80 == 6)
	{
		if (func_894(&iLocal_81, (10000 / iParam4)))
		{
			if (bParam0->f_9 > 20f)
			{
				bParam0->f_9 = (bParam0->f_9 - 1f);
				UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 0f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 1f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 2f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 3f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 4f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 5f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 6f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 7f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				iLocal_81 = UNK_0x1C0640BA9A7327B3();
			}
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, false))
	{
		if (iLocal_80 == 2)
		{
			iLocal_80 = 3;
		}
		else if (iLocal_80 == 3)
		{
			iVar0 = 81;
		}
		else if (iLocal_80 == 4)
		{
			if (bParam8)
			{
				iVar0 = 82;
			}
			else if (bParam9)
			{
				iVar0 = 83;
			}
		}
	}
	switch (iLocal_80)
	{
		case 0:
			if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 29))
			{
				func_893(bParam0, iParam14);
			}
			func_913(1);
			UNK_0xD1D3393F08AA59CD(1);
			bParam0->f_20 = UNK_0xD68EA767274B7444();
			iLocal_154 = 0;
			bLocal_155 = false;
			bParam0->f_23 = 0;
			iLocal_80++;
			break;
		case 1:
			iVar17 = 0;
			while (iVar17 < 5)
			{
				iLocal_68[iVar17] = -1;
				iVar17++;
			}
			UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), SYSTEM::TO_FLOAT(iParam2), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_SPEED", SYSTEM::TO_FLOAT(iParam3), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			if (bParam12 == 1)
			{
				UNK_0x4728AD8A6BE3AED3(iLocal_79, "ADD_PROGRAM", SYSTEM::TO_FLOAT(7), SYSTEM::TO_FLOAT(6), -1f, -1f, -1f, "EXIT", 0, 0, 0, 0);
			}
			iParam5 = iParam5;
			iParam6 = iParam6;
			bParam0->f_7 = iParam1;
			bParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
			UNK_0x0674E58A79778E99(bParam0, true);
			bLocal_74 = 0f;
			bLocal_75 = 0f;
			fLocal_76 = 0f;
			iLocal_68[0] = UNK_0xD68EA767274B7444();
			iLocal_68[1] = UNK_0xD68EA767274B7444();
			func_868(1, 0, 1, 0);
			if (bParam0->f_22)
			{
				iLocal_80 = 8;
			}
			else
			{
				iLocal_80++;
			}
			break;
		case 2:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					if (!func_425("H_EXIT_PROMPT"))
					{
						if (!func_425("HACKOBJ1"))
						{
							func_892("HACKOBJ1");
							iLocal_65 = 1;
						}
					}
				}
			}
			if (!UNK_0x798A3F1296751F46())
			{
				if (UNK_0x9E6C8D8976DA0ECD(2))
				{
					if (UNK_0xBFC0798A6E3417F9(2, 201) || UNK_0xBFC0798A6E3417F9(2, 237))
					{
						UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT_SELECT");
						iLocal_78 = UNK_0x7A8BB56B212464AC();
					}
				}
				else if (UNK_0xBFC0798A6E3417F9(2, 201) || UNK_0xBFC0798A6E3417F9(2, 237))
				{
					UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT_SELECT");
					iLocal_78 = UNK_0x7A8BB56B212464AC();
				}
			}
			if (UNK_0xC95D7AEEDEF4946B(iLocal_78))
			{
				iVar0 = UNK_0xA52833FE33F41C53(iLocal_78);
				if (iVar0 == 4)
				{
					if (iParam7 == 1)
					{
						if (func_425("H_EXIT_PROMPT"))
						{
							UNK_0xA37A90C62806D848(1);
						}
					}
					iLocal_65 = 0;
					iLocal_80++;
				}
			}
			if (iLocal_83 == 1)
			{
				if ((UNK_0x1C0640BA9A7327B3() - iLocal_82) > 500)
				{
					if (((UNK_0x1C0640BA9A7327B3() - iLocal_82) > 2500 || UNK_0xBFC0798A6E3417F9(2, 201)) || UNK_0xBFC0798A6E3417F9(2, 237))
					{
						func_891(0, "");
					}
				}
			}
			if (UNK_0xC95D7AEEDEF4946B(iLocal_78))
			{
				iVar0 = UNK_0xA52833FE33F41C53(iLocal_78);
				if (iVar0 == 80)
				{
					if (iLocal_83 == 0)
					{
						UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_CLICK_BAD", false, 1);
						func_891(1, "ACCESSD");
					}
				}
			}
			break;
		case 3:
			if (iParam7 == 1)
			{
				if (iLocal_80 == 3)
				{
					if (iLocal_65 == 0)
					{
						if (!func_425("HACKOBJ2"))
						{
							func_892("HACKOBJ2");
							iLocal_65 = 1;
						}
					}
				}
			}
			if (!UNK_0x798A3F1296751F46())
			{
				if (!UNK_0xC95D7AEEDEF4946B(iLocal_78))
				{
					if (UNK_0x9E6C8D8976DA0ECD(2))
					{
						if (UNK_0xBFC0798A6E3417F9(2, 201) || UNK_0xBFC0798A6E3417F9(2, 237))
						{
							UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT_SELECT");
							iLocal_78 = UNK_0x7A8BB56B212464AC();
						}
					}
					else if (UNK_0xBFC0798A6E3417F9(2, 201) || UNK_0xBFC0798A6E3417F9(2, 237))
					{
						UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT_SELECT");
						iLocal_78 = UNK_0x7A8BB56B212464AC();
					}
				}
			}
			if (!UNK_0x798A3F1296751F46())
			{
				if (iLocal_83 == 0)
				{
					if (!UNK_0xC95D7AEEDEF4946B(iLocal_78))
					{
						if (UNK_0xBFC0798A6E3417F9(2, 202))
						{
							UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT_BACK");
							iLocal_78 = UNK_0x7A8BB56B212464AC();
							if (iParam7 == 1)
							{
								if (func_425("HACKOBJ2"))
								{
									UNK_0xA37A90C62806D848(1);
								}
								func_892("H_EXIT_PROMPT");
								iLocal_65 = 0;
								iLocal_80 = (iLocal_80 - 1);
							}
						}
					}
				}
			}
			if (iLocal_83 == 1)
			{
				if ((UNK_0x1C0640BA9A7327B3() - iLocal_82) > 500)
				{
					if (((UNK_0x1C0640BA9A7327B3() - iLocal_82) > 2500 || UNK_0xBFC0798A6E3417F9(2, 201)) || UNK_0xBFC0798A6E3417F9(2, 237))
					{
						func_891(0, "");
					}
				}
			}
			if (iLocal_83 == 0)
			{
				if (UNK_0xC95D7AEEDEF4946B(iLocal_78))
				{
					iVar0 = UNK_0xA52833FE33F41C53(iLocal_78);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_83 == 0)
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_CLICK_BAD", false, 1);
					func_891(1, "ACCESSD");
				}
			}
			if (iVar0 == 81)
			{
				iLocal_65 = 0;
				iLocal_80++;
			}
			break;
		case 4:
			if (iLocal_68[1] != -1)
			{
				if (!UNK_0x8AA6DC470ABA63A2(iLocal_68[1]))
				{
					UNK_0x55D0A2DB35045A35(iLocal_68[1]);
					iLocal_68[1] = -1;
				}
			}
			if (iLocal_68[0] != -1)
			{
				if (!UNK_0x8AA6DC470ABA63A2(iLocal_68[0]))
				{
					UNK_0x55D0A2DB35045A35(iLocal_68[0]);
					iLocal_68[0] = -1;
				}
			}
			if (iLocal_68[1] != -1)
			{
				if (!UNK_0x8AA6DC470ABA63A2(iLocal_68[1]))
				{
					UNK_0x55D0A2DB35045A35(iLocal_68[1]);
					iLocal_68[1] = -1;
				}
			}
			if (iParam7 == 1)
			{
				if (iLocal_80 == 4)
				{
					if (bParam9 == 1)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 5))
						{
							if (iLocal_65 == 0)
							{
								if (!func_425("HACKOBJ5"))
								{
									func_892("HACKOBJ5");
									iLocal_65 = 1;
								}
							}
						}
					}
					else if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 18))
					{
						if (iLocal_65 == 0)
						{
							if (!func_425("HACKOBJ3"))
							{
								func_892("HACKOBJ3");
								iLocal_65 = 1;
							}
						}
					}
					else if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 5))
					{
						if (iLocal_65 == 0)
						{
							if (!func_425("HACKOBJ5"))
							{
								func_892("HACKOBJ5");
								iLocal_65 = 1;
							}
						}
					}
					else if (iLocal_65 == 1)
					{
						if (func_425("HACKOBJ5"))
						{
							UNK_0xA37A90C62806D848(1);
							iLocal_65 = 0;
						}
					}
				}
			}
			if (!UNK_0x798A3F1296751F46())
			{
				if (iLocal_83 == 0)
				{
					if (!UNK_0xC95D7AEEDEF4946B(iLocal_78))
					{
						if (UNK_0x9E6C8D8976DA0ECD(2))
						{
							if (UNK_0xBFC0798A6E3417F9(2, 201) || UNK_0xBFC0798A6E3417F9(2, 237))
							{
								UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT_SELECT");
								iLocal_78 = UNK_0x7A8BB56B212464AC();
							}
						}
						else if (UNK_0xBFC0798A6E3417F9(2, 201) || UNK_0xBFC0798A6E3417F9(2, 237))
						{
							UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT_SELECT");
							iLocal_78 = UNK_0x7A8BB56B212464AC();
						}
					}
				}
			}
			if (iLocal_83 == 0)
			{
				if (!UNK_0xC95D7AEEDEF4946B(iLocal_78))
				{
					if (UNK_0xBFC0798A6E3417F9(2, 202))
					{
						UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT_BACK");
						iLocal_78 = UNK_0x7A8BB56B212464AC();
						if (iParam7 == 1)
						{
							if (func_425("HACKOBJ5") || func_425("HACKOBJ3"))
							{
								UNK_0xA37A90C62806D848(1);
							}
							iLocal_65 = 0;
							iLocal_80 = (iLocal_80 - 1);
						}
					}
				}
			}
			if (iLocal_83 == 1)
			{
				if ((UNK_0x1C0640BA9A7327B3() - iLocal_82) > 500)
				{
					if (((UNK_0x1C0640BA9A7327B3() - iLocal_82) > 2500 || UNK_0xBFC0798A6E3417F9(2, 201)) || UNK_0xBFC0798A6E3417F9(2, 237))
					{
						func_891(0, "");
					}
				}
			}
			if (!UNK_0x798A3F1296751F46())
			{
				if (UNK_0xC95D7AEEDEF4946B(iLocal_78))
				{
					iVar0 = UNK_0xA52833FE33F41C53(iLocal_78);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_83 == 0)
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_CLICK_BAD", false, 1);
					func_891(1, "ACCESSD");
				}
			}
			if (iVar0 == 82)
			{
				if (bParam9 == 0)
				{
					if (bParam8 == 1)
					{
						iLocal_81 = UNK_0x1C0640BA9A7327B3();
						bParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
						if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, false))
						{
							UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
							UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_SPEED", bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
							UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(0), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						}
						else
						{
							UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
							UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_SPEED", bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
							UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "RUN_PROGRAM", SYSTEM::TO_FLOAT(4), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
							UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(0), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						}
						iLocal_63 = UNK_0x1C0640BA9A7327B3();
						bLocal_64 = true;
						iLocal_65 = 0;
						iLocal_68[0] = UNK_0xD68EA767274B7444();
						UNK_0x4D7F4CC43D4D0DE3(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", false, 1);
						iLocal_80++;
					}
					else if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 18))
					{
						iLocal_81 = UNK_0x1C0640BA9A7327B3();
						bParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_SPEED", bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(0), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						iLocal_63 = UNK_0x1C0640BA9A7327B3();
						bLocal_64 = true;
						iLocal_65 = 0;
						iLocal_68[0] = UNK_0xD68EA767274B7444();
						UNK_0x4D7F4CC43D4D0DE3(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", false, 1);
						iLocal_80++;
					}
					else
					{
						if (iLocal_83 == 1)
						{
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_82) > 500)
							{
								if (((UNK_0x1C0640BA9A7327B3() - iLocal_82) > 2500 || UNK_0xBFC0798A6E3417F9(2, 201)) || UNK_0xBFC0798A6E3417F9(2, 237))
								{
									func_891(0, "");
								}
							}
						}
						if (iLocal_83 == 0)
						{
							UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_CLICK_BAD", false, 1);
							if (bParam13 && UNK_0xEAE0D21A50E6C7F4(*bParam0, 9))
							{
								func_891(1, "TRYDL");
							}
							else
							{
								func_891(1, "TRYBRUTE");
							}
						}
					}
				}
				else
				{
					if (iLocal_83 == 1)
					{
						if ((UNK_0x1C0640BA9A7327B3() - iLocal_82) > 500)
						{
							if (((UNK_0x1C0640BA9A7327B3() - iLocal_82) > 2500 || UNK_0xBFC0798A6E3417F9(2, 201)) || UNK_0xBFC0798A6E3417F9(2, 237))
							{
								func_891(0, "");
							}
						}
					}
					if (iLocal_83 == 0)
					{
						UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_CLICK_BAD", false, 1);
						if (bParam13 && UNK_0xEAE0D21A50E6C7F4(*bParam0, 9))
						{
							func_891(1, "TRYDL");
						}
						else
						{
							func_891(1, "TRYBRUTE");
						}
					}
				}
			}
			if (iVar0 == 83)
			{
				if (bParam8 == 0)
				{
					if (bParam9 == 1)
					{
						iLocal_81 = UNK_0x1C0640BA9A7327B3();
						bParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_SPEED", SYSTEM::TO_FLOAT(iParam3), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 0f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 1f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 2f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 3f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 4f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 5f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 6f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 7f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, false))
						{
							UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						}
						else
						{
							UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "RUN_PROGRAM", SYSTEM::TO_FLOAT(4), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
							UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						}
						iLocal_63 = UNK_0x1C0640BA9A7327B3();
						bLocal_64 = true;
						iLocal_65 = 0;
						iLocal_68[1] = UNK_0xD68EA767274B7444();
						if (bParam10)
						{
							func_890(bParam0, bParam18);
						}
						UNK_0x6A04A7E7A3017382(iLocal_79, "SET_ROULETTE_WORD", &(bParam0->f_14), 0, 0, 0, 0);
						UNK_0x4D7F4CC43D4D0DE3(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", false, 1);
						iLocal_80 = 6;
					}
					else if ((!bParam11 || UNK_0xEAE0D21A50E6C7F4(*bParam0, 18)) && !UNK_0xEAE0D21A50E6C7F4(*bParam0, 9))
					{
						iLocal_81 = UNK_0x1C0640BA9A7327B3();
						bParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_SPEED", SYSTEM::TO_FLOAT(iParam3), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 0f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 1f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 2f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 3f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 4f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 5f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 6f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_COLUMN_SPEED", 7f, bParam0->f_9, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						iLocal_63 = UNK_0x1C0640BA9A7327B3();
						bLocal_64 = true;
						iLocal_65 = 0;
						iLocal_68[1] = UNK_0xD68EA767274B7444();
						if (bParam10)
						{
							func_890(bParam0, bParam18);
						}
						if (func_425("HACKOBJ5"))
						{
							UNK_0xA37A90C62806D848(1);
						}
						UNK_0x6A04A7E7A3017382(iLocal_79, "SET_ROULETTE_WORD", &(bParam0->f_14), 0, 0, 0, 0);
						UNK_0x4D7F4CC43D4D0DE3(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", false, 1);
						iLocal_80 = 6;
					}
					else
					{
						if (iLocal_83 == 1)
						{
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_82) > 500)
							{
								if (((UNK_0x1C0640BA9A7327B3() - iLocal_82) > 2500 || UNK_0xBFC0798A6E3417F9(2, 201)) || UNK_0xBFC0798A6E3417F9(2, 237))
								{
									func_891(0, "");
								}
							}
						}
						if (iLocal_83 == 0)
						{
							UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_CLICK_BAD", false, 1);
							if (bParam13 && UNK_0xEAE0D21A50E6C7F4(*bParam0, 18))
							{
								func_891(1, "TRYDL");
							}
							else
							{
								func_891(1, "TRYHACK");
							}
						}
					}
				}
				else
				{
					if (iLocal_83 == 1)
					{
						if ((UNK_0x1C0640BA9A7327B3() - iLocal_82) > 500)
						{
							if (((UNK_0x1C0640BA9A7327B3() - iLocal_82) > 2500 || UNK_0xBFC0798A6E3417F9(2, 201)) || UNK_0xBFC0798A6E3417F9(2, 237))
							{
								func_891(0, "");
							}
						}
					}
					if (iLocal_83 == 0)
					{
						UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_CLICK_BAD", false, 1);
						if (bParam13 && UNK_0xEAE0D21A50E6C7F4(*bParam0, 18))
						{
							func_891(1, "TRYDL");
						}
						else
						{
							func_891(1, "TRYHACK");
						}
					}
				}
			}
			if (bParam13)
			{
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 18))
				{
					if (iVar0 == 93)
					{
						if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 18) && UNK_0xEAE0D21A50E6C7F4(*bParam0, 9))
						{
							if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 28))
							{
								UNK_0x5D96D8530B3D0904(bParam0, 28);
								iLocal_80 = 8;
							}
						}
						else
						{
							if (iLocal_83 == 1)
							{
								if ((UNK_0x1C0640BA9A7327B3() - iLocal_82) > 500)
								{
									if (((UNK_0x1C0640BA9A7327B3() - iLocal_82) > 2500 || UNK_0xBFC0798A6E3417F9(2, 201)) || UNK_0xBFC0798A6E3417F9(2, 237))
									{
										func_891(0, "");
									}
								}
							}
							if (iLocal_83 == 0)
							{
								UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_CLICK_BAD", false, 1);
								if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 18))
								{
									func_891(1, "TRYBRUTE");
								}
								else
								{
									func_891(1, "TRYHACK");
								}
							}
						}
					}
				}
			}
			break;
		case 5:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					func_889("H_USE_PC6", -1);
					iLocal_65 = 1;
				}
				else if (iLocal_66 == 1)
				{
					func_889("H_USE_PC7", -1);
					iLocal_66 = 0;
				}
			}
			if (!UNK_0x798A3F1296751F46())
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, true))
				{
					if (!UNK_0xC95D7AEEDEF4946B(iLocal_78))
					{
						if (UNK_0xBFC0798A6E3417F9(2, 202))
						{
							bParam0->f_7 = iParam1;
							UNK_0x7526D52FFFAB1652(iLocal_79, "CLOSE_APP");
							if (iLocal_68[1] != -1)
							{
								if (!UNK_0x8AA6DC470ABA63A2(iLocal_68[1]))
								{
									UNK_0x55D0A2DB35045A35(iLocal_68[1]);
									iLocal_68[1] = -1;
								}
							}
							if (iLocal_68[0] != -1)
							{
								if (!UNK_0x8AA6DC470ABA63A2(iLocal_68[0]))
								{
									UNK_0x55D0A2DB35045A35(iLocal_68[0]);
									iLocal_68[0] = -1;
								}
							}
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, false))
							{
								iLocal_80 = 4;
							}
							else
							{
								UNK_0x5D96D8530B3D0904(&(bParam0->f_1), true);
							}
						}
					}
				}
			}
			if (!UNK_0x798A3F1296751F46())
			{
				if (!UNK_0xC95D7AEEDEF4946B(iLocal_78))
				{
					if (UNK_0x9E6C8D8976DA0ECD(2))
					{
						if (UNK_0xBFC0798A6E3417F9(2, 201) || UNK_0xBFC0798A6E3417F9(2, 237))
						{
							UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT_SELECT");
							iLocal_78 = UNK_0x7A8BB56B212464AC();
						}
					}
					else if (UNK_0xBFC0798A6E3417F9(2, 201) || UNK_0xBFC0798A6E3417F9(2, 237))
					{
						UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT_SELECT");
						iLocal_78 = UNK_0x7A8BB56B212464AC();
					}
				}
				if (UNK_0xC95D7AEEDEF4946B(iLocal_78))
				{
					iVar0 = UNK_0xA52833FE33F41C53(iLocal_78);
				}
			}
			if (iVar0 == 85)
			{
				if (bParam0->f_7 > 1)
				{
					bParam0->f_7 = (bParam0->f_7 - 1);
					UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(bParam0->f_7), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
					UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_CLICK_BAD", false, 1);
				}
				else
				{
					if (!UNK_0x8AA6DC470ABA63A2(iLocal_68[0]))
					{
						UNK_0x55D0A2DB35045A35(iLocal_68[0]);
					}
					UNK_0x5D96D8530B3D0904(bParam0, 25);
					bLocal_64 = false;
					iLocal_66 = 1;
					UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_FAILURE", false, 1);
					UNK_0x4728AD8A6BE3AED3(iLocal_79, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 90)
			{
				bParam0->f_7 = iParam1;
				UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				bParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
				iLocal_63 = UNK_0x1C0640BA9A7327B3();
				iLocal_68[0] = UNK_0xD68EA767274B7444();
				UNK_0x4D7F4CC43D4D0DE3(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", false, 1);
				UNK_0x5D96D8530B3D0904(bParam0, 25);
				bLocal_64 = true;
			}
			if (iVar0 == 91)
			{
				bParam0->f_7 = iParam1;
				UNK_0x7526D52FFFAB1652(iLocal_79, "CLOSE_APP");
				if (iLocal_68[0] != -1)
				{
					if (!UNK_0x8AA6DC470ABA63A2(iLocal_68[0]))
					{
						UNK_0x55D0A2DB35045A35(iLocal_68[0]);
						iLocal_68[0] = -1;
					}
				}
				UNK_0x5D96D8530B3D0904(bParam0, 25);
				iLocal_80 = 4;
			}
			if (bLocal_64 == 1)
			{
				iVar1 = (60000 - (UNK_0x1C0640BA9A7327B3() - iLocal_63));
				if (iVar1 < 1)
				{
					UNK_0x5D96D8530B3D0904(bParam0, 25);
					bParam0->f_7 = iParam1;
					UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
					bParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
					iLocal_63 = UNK_0x1C0640BA9A7327B3();
					bLocal_64 = false;
					iLocal_66 = 1;
					UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_FAILURE", false, 1);
					if (iLocal_68[0] != -1)
					{
						if (!UNK_0x8AA6DC470ABA63A2(iLocal_68[0]))
						{
							UNK_0x55D0A2DB35045A35(iLocal_68[0]);
							iLocal_68[0] = -1;
						}
					}
					UNK_0x4728AD8A6BE3AED3(iLocal_79, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 84)
			{
				UNK_0x4728AD8A6BE3AED3(iLocal_79, "SET_IP_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINIP", 0, 0, 0, 0);
				iLocal_81 = UNK_0x1C0640BA9A7327B3();
				UNK_0x5D96D8530B3D0904(bParam0, 18);
				bLocal_64 = false;
				iLocal_65 = 0;
				UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_CLICK_GOOD", false, 1);
				if (iLocal_68[0] != -1)
				{
					if (!UNK_0x8AA6DC470ABA63A2(iLocal_68[0]))
					{
						UNK_0x55D0A2DB35045A35(iLocal_68[0]);
						iLocal_68[0] = -1;
					}
				}
				iLocal_80 = 7;
			}
			break;
		case 6:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					func_889("H_USE_PC8", -1);
					iLocal_65 = 1;
				}
				else if (iLocal_66 == 1)
				{
					func_889("H_USE_PC9", -1);
					iLocal_66 = 0;
				}
			}
			if (!UNK_0x798A3F1296751F46())
			{
				if (!UNK_0xC95D7AEEDEF4946B(iLocal_78))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, true))
					{
						if (UNK_0xBFC0798A6E3417F9(2, 202))
						{
							bParam0->f_7 = iParam1;
							UNK_0x7526D52FFFAB1652(iLocal_79, "CLOSE_APP");
							if (!UNK_0x8AA6DC470ABA63A2(iLocal_68[0]))
							{
								UNK_0x55D0A2DB35045A35(iLocal_68[0]);
							}
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, false))
							{
								iLocal_80 = 4;
							}
							else
							{
								UNK_0x5D96D8530B3D0904(&(bParam0->f_1), true);
							}
						}
					}
				}
				if (!UNK_0xC95D7AEEDEF4946B(iLocal_78))
				{
					if (UNK_0x9E6C8D8976DA0ECD(2))
					{
						if (UNK_0xBFC0798A6E3417F9(2, 201) || UNK_0xBFC0798A6E3417F9(2, 237))
						{
							UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT_SELECT");
							iLocal_78 = UNK_0x7A8BB56B212464AC();
						}
					}
					else if (UNK_0xBFC0798A6E3417F9(2, 201) || UNK_0xBFC0798A6E3417F9(2, 237))
					{
						UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_INPUT_EVENT_SELECT");
						iLocal_78 = UNK_0x7A8BB56B212464AC();
					}
				}
				if (UNK_0xC95D7AEEDEF4946B(iLocal_78))
				{
					iVar0 = UNK_0xA52833FE33F41C53(iLocal_78);
				}
			}
			if (iVar0 == 86)
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_CLICK_GOOD", false, 1);
			}
			if (iVar0 == 92)
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_CLICK", false, 1);
			}
			if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 23))
			{
				if (func_894(&(bParam0->f_10), 500))
				{
					UNK_0x7526D52FFFAB1652(iLocal_79, "RESET_ROULETTE");
					UNK_0x0674E58A79778E99(bParam0, 23);
				}
			}
			if (iVar0 == 87)
			{
				if (bParam0->f_7 > 1)
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_CLICK_BAD", false, 1);
					UNK_0x7526D52FFFAB1652(iLocal_79, "STOP_ROULETTE");
					bParam0->f_10 = UNK_0x1C0640BA9A7327B3();
					UNK_0x5D96D8530B3D0904(bParam0, 23);
					UNK_0x5D96D8530B3D0904(bParam0, 31);
					if (func_63() == 0)
					{
						bParam0->f_7 = (bParam0->f_7 - 1);
						UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(bParam0->f_7), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
					}
				}
				else
				{
					UNK_0x5D96D8530B3D0904(bParam0, 25);
					UNK_0x5D96D8530B3D0904(bParam0, 31);
					UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_FAILURE", false, 1);
					bParam0->f_7 = iParam1;
					UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
					bParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
					iLocal_63 = UNK_0x1C0640BA9A7327B3();
					if (iLocal_68[1] != -1)
					{
						if (!UNK_0x8AA6DC470ABA63A2(iLocal_68[1]))
						{
							UNK_0x55D0A2DB35045A35(iLocal_68[1]);
							iLocal_68[1] = -1;
						}
					}
					if (func_63() == 0)
					{
						UNK_0x4728AD8A6BE3AED3(iLocal_79, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
					}
				}
			}
			if (bLocal_64 == 1)
			{
				iVar1 = (60000 - (UNK_0x1C0640BA9A7327B3() - iLocal_63));
				if (iVar1 < 1)
				{
					bParam0->f_7 = iParam1;
					UNK_0x5D96D8530B3D0904(bParam0, 25);
					UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
					bParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
					iLocal_63 = UNK_0x1C0640BA9A7327B3();
					bLocal_64 = false;
					iLocal_66 = 1;
					UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_FAILURE", false, 1);
					UNK_0xA37A90C62806D848(1);
					if (iLocal_68[1] != -1)
					{
						if (!UNK_0x8AA6DC470ABA63A2(iLocal_68[1]))
						{
							UNK_0x55D0A2DB35045A35(iLocal_68[1]);
							iLocal_68[1] = -1;
						}
					}
					UNK_0x4728AD8A6BE3AED3(iLocal_79, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 88)
			{
				bParam0->f_7 = iParam1;
				UNK_0x5D96D8530B3D0904(bParam0, 25);
				UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				bParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
				iLocal_63 = UNK_0x1C0640BA9A7327B3();
				iLocal_68[1] = UNK_0xD68EA767274B7444();
				UNK_0x4D7F4CC43D4D0DE3(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", false, 1);
				bLocal_64 = true;
			}
			if (iVar0 == 89)
			{
				bParam0->f_7 = iParam1;
				UNK_0x5D96D8530B3D0904(bParam0, 25);
				UNK_0x7526D52FFFAB1652(iLocal_79, "CLOSE_APP");
				if (iLocal_68[1] != -1)
				{
					if (!UNK_0x8AA6DC470ABA63A2(iLocal_68[1]))
					{
						UNK_0x55D0A2DB35045A35(iLocal_68[1]);
						iLocal_68[1] = -1;
					}
				}
				iLocal_80 = 4;
			}
			if (iVar0 == 86)
			{
				UNK_0x4728AD8A6BE3AED3(iLocal_79, "SET_ROULETTE_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINBRUTE", 0, 0, 0, 0);
				iLocal_81 = UNK_0x1C0640BA9A7327B3();
				UNK_0x5D96D8530B3D0904(bParam0, 9);
				if (bParam19)
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "Hack_Success", "DLC_GR_Steal_Railguns_Sounds", 1);
				}
				else
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_SUCCESS", false, 1);
				}
				if (iLocal_68[1] != -1)
				{
					if (!UNK_0x8AA6DC470ABA63A2(iLocal_68[1]))
					{
						UNK_0x55D0A2DB35045A35(iLocal_68[1]);
						iLocal_68[1] = -1;
					}
				}
				iLocal_80 = 7;
			}
			break;
		case 7:
			if (iParam7 == 1)
			{
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 9) && UNK_0xEAE0D21A50E6C7F4(*bParam0, 18))
				{
					if (iLocal_154 == 0)
					{
						if (!func_425("HACKOBJ7"))
						{
							func_892("HACKOBJ7");
							iLocal_154 = 1;
						}
					}
				}
				if (((func_425("H_USE_PC6") || func_425("H_USE_PC7")) || func_425("H_USE_PC8")) || func_425("H_USE_PC9"))
				{
					UNK_0xA37A90C62806D848(1);
				}
			}
			if ((UNK_0xEAE0D21A50E6C7F4(*bParam0, 9) && UNK_0xEAE0D21A50E6C7F4(*bParam0, 18)) && (!bParam13 || (bParam13 && UNK_0xEAE0D21A50E6C7F4(*bParam0, 28))))
			{
				if (func_425("HACKOBJ7"))
				{
					UNK_0xA37A90C62806D848(1);
				}
				if (!bLocal_155)
				{
					UNK_0xCEAA091B490F8407(-1, "unlocked_bleep", UNK_0x16F2683693E537C9(), "HACKING_DOOR_UNLOCK_SOUNDS", 0, 0);
					bLocal_155 = true;
				}
				if (func_894(&iLocal_81, 3000))
				{
					UNK_0x0674E58A79778E99(bParam0, false);
					UNK_0x5D96D8530B3D0904(bParam0, 12);
					UNK_0xD1D3393F08AA59CD(0);
				}
			}
			else
			{
				if (((bParam13 && !UNK_0xEAE0D21A50E6C7F4(*bParam0, 27)) && UNK_0xEAE0D21A50E6C7F4(*bParam0, 9)) && UNK_0xEAE0D21A50E6C7F4(*bParam0, 18))
				{
					UNK_0x7E60C62A7CE58FC8(iLocal_79, "OPEN_DOWNLOAD");
					UNK_0x1200CC973A2399C8(true);
					UNK_0x7E60D21B163E9D56();
					UNK_0x5D96D8530B3D0904(bParam0, 27);
				}
				if (func_894(&iLocal_81, 2000))
				{
					UNK_0x7526D52FFFAB1652(iLocal_79, "CLOSE_APP");
					iLocal_80 = 4;
				}
			}
			break;
		case 8:
			func_883(bParam0);
			break;
	}
}

void func_883(bool bParam0)
{
	bool bVar0;

	bVar0 = false;
	if (bParam0->f_23 > 0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 22))
		{
			if (UNK_0x27117E2CDD4D67C3("hackingNG"))
			{
				if (!UNK_0x798A3F1296751F46())
				{
					UNK_0x539E86AE011A8B38("hackingNG", "DHMain", Local_84, Local_84.f_1, 0.731f, 1.306f, 0f, 255, 255, 255, 255, 0);
				}
			}
		}
	}
	if (((((((Local_105[0 /*4*/] == 1 && Local_105[1 /*4*/] == 1) && Local_105[2 /*4*/] == 1) && Local_105[3 /*4*/] == 1) && Local_105[4 /*4*/] == 1) && Local_105[5 /*4*/] == 1) && Local_105[6 /*4*/] == 1) && Local_105[7 /*4*/] == 1)
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Hack_Success", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
		if (func_425("H1_HNG"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			if (func_425("H1_HNG_KM"))
			{
				UNK_0xA37A90C62806D848(1);
			}
		}
		UNK_0x5D96D8530B3D0904(bParam0, 26);
	}
	else if (UNK_0x91E3F625EF57450D(2))
	{
		if (!func_425("H1_HNG_KM"))
		{
			func_892("H1_HNG_KM");
		}
	}
	else if (!func_425("H1_HNG"))
	{
		func_892("H1_HNG");
	}
	switch (bParam0->f_23)
	{
		case 0:
			UNK_0x0D3BE1DE0262A012("hackingNG", 0);
			UNK_0x0674E58A79778E99(bParam0, 22);
			func_888();
			iLocal_143 = UNK_0x1C0640BA9A7327B3();
			Local_103 = false;
			UNK_0x0674E58A79778E99(&bLocal_153, false);
			UNK_0x0674E58A79778E99(&bLocal_153, true);
			UNK_0x0674E58A79778E99(&bLocal_153, 2);
			UNK_0x0674E58A79778E99(&bLocal_153, 3);
			UNK_0x0674E58A79778E99(&bLocal_153, 4);
			UNK_0x0674E58A79778E99(&bLocal_153, 5);
			UNK_0x0674E58A79778E99(&bLocal_153, 6);
			UNK_0x0674E58A79778E99(&bLocal_153, 7);
			bParam0->f_23++;
			break;
		case 1:
			if (UNK_0x27117E2CDD4D67C3("hackingNG"))
			{
				UNK_0x5D96D8530B3D0904(bParam0, 22);
				UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_CURSOR_VISIBILITY");
				UNK_0x1200CC973A2399C8(false);
				UNK_0x7E60D21B163E9D56();
				bParam0->f_23++;
			}
			break;
		case 2:
			bVar0 = false;
			while (bVar0 <= 7)
			{
				if (Local_105[bVar0 /*4*/].f_3 == 1)
				{
					if (Local_105[bVar0 /*4*/].f_2 < 1f)
					{
						Local_105[bVar0 /*4*/].f_2 = (Local_105[bVar0 /*4*/].f_2 + ((Local_105[bVar0 /*4*/].f_1 * SYSTEM::TIMESTEP()) * fLocal_142));
					}
					else
					{
						Local_105[bVar0 /*4*/].f_3 = 0;
					}
				}
				else if (Local_105[bVar0 /*4*/].f_2 > 0f)
				{
					Local_105[bVar0 /*4*/].f_2 = (Local_105[bVar0 /*4*/].f_2 - ((Local_105[bVar0 /*4*/].f_1 * SYSTEM::TIMESTEP()) * fLocal_142));
				}
				else
				{
					Local_105[bVar0 /*4*/].f_3 = 1;
				}
				if (Local_105[bVar0 /*4*/] == 0)
				{
					Local_86[bVar0 /*2*/].f_1 = func_886(0.744f, 0.4f, Local_105[bVar0 /*4*/].f_2);
				}
				bVar0++;
			}
			bVar0 = false;
			while (bVar0 <= 7)
			{
				if (Local_105[bVar0 /*4*/] == 0)
				{
					if (Local_103 == bVar0)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_153, bVar0))
						{
							iLocal_144[bVar0] = UNK_0xD68EA767274B7444();
							UNK_0x4D7F4CC43D4D0DE3(iLocal_144[bVar0], "Pin_Movement", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
							UNK_0x5D96D8530B3D0904(&bLocal_153, bVar0);
						}
						else
						{
							if (Local_105[bVar0 /*4*/].f_2 >= 0.5f)
							{
								bLocal_138 = (2f * (1f - Local_105[bVar0 /*4*/].f_2));
							}
							else
							{
								bLocal_138 = (2f * Local_105[bVar0 /*4*/].f_2);
							}
							UNK_0x6F6BA3FE885E6C91(iLocal_144[bVar0], "PinMovementY", bLocal_138);
						}
					}
				}
				else if (UNK_0xEAE0D21A50E6C7F4(bLocal_153, bVar0))
				{
					UNK_0x55D0A2DB35045A35(iLocal_144[bVar0]);
					UNK_0x43A06902454A1172(iLocal_144[bVar0]);
					UNK_0x0674E58A79778E99(&bLocal_153, bVar0);
					iLocal_144[bVar0] = -1;
				}
				bVar0++;
			}
			if (func_885(Local_103))
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "Pin_Centred", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
			}
			if (UNK_0xBFC0798A6E3417F9(2, 201) || UNK_0xBFC0798A6E3417F9(2, 237))
			{
				if (func_894(&iLocal_143, 300))
				{
					if (func_884(Local_103))
					{
						Local_105[Local_103 /*4*/] = 1;
						Local_86[Local_103 /*2*/].f_1 = 0.572f;
						UNK_0x4D7F4CC43D4D0DE3(-1, "Pin_Good", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						if (Local_103 != 7)
						{
							Local_103++;
						}
					}
					else
					{
						if (Local_103 != 0)
						{
							if (UNK_0xEAE0D21A50E6C7F4(bLocal_153, Local_103))
							{
								UNK_0x55D0A2DB35045A35(iLocal_144[Local_103]);
								UNK_0x43A06902454A1172(iLocal_144[Local_103]);
								UNK_0x0674E58A79778E99(&bLocal_153, Local_103);
								iLocal_144[Local_103] = -1;
							}
							Local_105[(Local_103 - 1) /*4*/] = 0;
							Local_103 = (Local_103 - 1);
						}
						if (!UNK_0x798A3F1296751F46())
						{
							UNK_0xC1032CAC14DE468A(0.5f, 0.5f, 4f, 4f, 255, 0, 0, 100, 0);
						}
						iLocal_143 = UNK_0x1C0640BA9A7327B3();
						UNK_0x5E858A00EAFA5B24(0, 100, 100);
						UNK_0x4D7F4CC43D4D0DE3(-1, "Pin_Bad", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						Local_103.f_1 = 1;
					}
				}
				else
				{
					if (!UNK_0x798A3F1296751F46())
					{
						UNK_0x539E86AE011A8B38("hackingNG", "DHMain", Local_84, Local_84.f_1, 0.731f, 1.306f, 0f, 255, 0, 0, 100, 0);
					}
					iLocal_143 = UNK_0x1C0640BA9A7327B3();
					UNK_0x5E858A00EAFA5B24(0, 100, 100);
				}
			}
			if (!UNK_0x798A3F1296751F46())
			{
				if (Local_103 == 0)
				{
					UNK_0x539E86AE011A8B38("hackingNG", "DHCompHi", Local_86[0 /*2*/], Local_86[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					UNK_0x539E86AE011A8B38("hackingNG", "DHComp", Local_86[0 /*2*/], Local_86[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 1)
				{
					UNK_0x539E86AE011A8B38("hackingNG", "DHCompHi", Local_86[1 /*2*/], Local_86[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					UNK_0x539E86AE011A8B38("hackingNG", "DHComp", Local_86[1 /*2*/], Local_86[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 2)
				{
					UNK_0x539E86AE011A8B38("hackingNG", "DHCompHi", Local_86[2 /*2*/], Local_86[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					UNK_0x539E86AE011A8B38("hackingNG", "DHComp", Local_86[2 /*2*/], Local_86[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 3)
				{
					UNK_0x539E86AE011A8B38("hackingNG", "DHCompHi", Local_86[3 /*2*/], Local_86[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					UNK_0x539E86AE011A8B38("hackingNG", "DHComp", Local_86[3 /*2*/], Local_86[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 4)
				{
					UNK_0x539E86AE011A8B38("hackingNG", "DHCompHi", Local_86[4 /*2*/], Local_86[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					UNK_0x539E86AE011A8B38("hackingNG", "DHComp", Local_86[4 /*2*/], Local_86[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 5)
				{
					UNK_0x539E86AE011A8B38("hackingNG", "DHCompHi", Local_86[5 /*2*/], Local_86[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					UNK_0x539E86AE011A8B38("hackingNG", "DHComp", Local_86[5 /*2*/], Local_86[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 6)
				{
					UNK_0x539E86AE011A8B38("hackingNG", "DHCompHi", Local_86[6 /*2*/], Local_86[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					UNK_0x539E86AE011A8B38("hackingNG", "DHComp", Local_86[6 /*2*/], Local_86[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 7)
				{
					UNK_0x539E86AE011A8B38("hackingNG", "DHCompHi", Local_86[7 /*2*/], Local_86[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					UNK_0x539E86AE011A8B38("hackingNG", "DHComp", Local_86[7 /*2*/], Local_86[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, false))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_1, true))
					{
						if (UNK_0xBFC0798A6E3417F9(2, 202))
						{
							UNK_0x5D96D8530B3D0904(&(bParam0->f_1), true);
							UNK_0xA37A90C62806D848(1);
						}
					}
				}
			}
			break;
	}
}

bool func_884(int iParam0)
{
	if (Local_86[iParam0 /*2*/].f_1 >= fLocal_140 && Local_86[iParam0 /*2*/].f_1 <= fLocal_139)
	{
		return true;
	}
	return false;
}

bool func_885(int iParam0)
{
	if (Local_86[iParam0 /*2*/].f_1 == 0.5f)
	{
		return true;
	}
	return false;
}

float func_886(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	fVar0 = ((1f - SYSTEM::COS(func_887((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_887(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_888()
{
	fLocal_139 = 0.6f;
	fLocal_140 = 0.53f;
	Local_105[0 /*4*/].f_1 = (0.02f * fLocal_141);
	Local_105[1 /*4*/].f_1 = (0.025f * fLocal_141);
	Local_105[2 /*4*/].f_1 = (0.03f * fLocal_141);
	Local_105[3 /*4*/].f_1 = (0.035f * fLocal_141);
	Local_105[4 /*4*/].f_1 = (0.04f * fLocal_141);
	Local_105[5 /*4*/].f_1 = (0.045f * fLocal_141);
	Local_105[6 /*4*/].f_1 = (0.048f * fLocal_141);
	Local_105[7 /*4*/].f_1 = (0.05f * fLocal_141);
	Local_105[0 /*4*/] = 0;
	Local_105[1 /*4*/] = 0;
	Local_105[2 /*4*/] = 0;
	Local_105[3 /*4*/] = 0;
	Local_105[4 /*4*/] = 0;
	Local_105[5 /*4*/] = 0;
	Local_105[6 /*4*/] = 0;
	Local_105[7 /*4*/] = 0;
	Local_84 = 0.5f;
	Local_84.f_1 = 0.5f;
	Local_86[0 /*2*/] = 0.35f;
	Local_86[0 /*2*/].f_1 = 0.4f;
	Local_86[1 /*2*/] = 0.39f;
	Local_86[1 /*2*/].f_1 = 0.4f;
	Local_86[2 /*2*/] = 0.43f;
	Local_86[2 /*2*/].f_1 = 0.4f;
	Local_86[3 /*2*/] = 0.47f;
	Local_86[3 /*2*/].f_1 = 0.4f;
	Local_86[4 /*2*/] = 0.51f;
	Local_86[4 /*2*/].f_1 = 0.74f;
	Local_86[5 /*2*/] = 0.55f;
	Local_86[5 /*2*/].f_1 = 0.74f;
	Local_86[6 /*2*/] = 0.59f;
	Local_86[6 /*2*/].f_1 = 0.74f;
	Local_86[7 /*2*/] = 0.63f;
	Local_86[7 /*2*/].f_1 = 0.74f;
}

void func_889(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_890(bool bParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		iVar0 = UNK_0x09AC81E49EA267F7(false, 15);
		if (iVar0 == 0)
		{
			StringCopy(&(bParam0->f_14), "GR_PWD_RA", 24);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&(bParam0->f_14), "GR_PWD_PA", 24);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&(bParam0->f_14), "GR_PWD_PE", 24);
		}
		else if (iVar0 == 3)
		{
			StringCopy(&(bParam0->f_14), "GR_PWD_GE", 24);
		}
		else if (iVar0 == 4)
		{
			StringCopy(&(bParam0->f_14), "GR_PWD_CH", 24);
		}
		else if (iVar0 == 5)
		{
			StringCopy(&(bParam0->f_14), "GR_PWD_FI", 24);
		}
		else if (iVar0 == 6)
		{
			StringCopy(&(bParam0->f_14), "GR_PWD_PR", 24);
		}
		else if (iVar0 == 7)
		{
			StringCopy(&(bParam0->f_14), "GR_PWD_UN", 24);
		}
		else if (iVar0 == 8)
		{
			StringCopy(&(bParam0->f_14), "GR_PWD_DE", 24);
		}
		else if (iVar0 == 9)
		{
			StringCopy(&(bParam0->f_14), "GR_PWD_FO", 24);
		}
		else if (iVar0 == 10)
		{
			StringCopy(&(bParam0->f_14), "GR_PWD_AR", 24);
		}
		else if (iVar0 == 11)
		{
			StringCopy(&(bParam0->f_14), "GR_PWD_TO", 24);
		}
		else if (iVar0 == 12)
		{
			StringCopy(&(bParam0->f_14), "GR_PWD_IN", 24);
		}
		else if (iVar0 == 13)
		{
			StringCopy(&(bParam0->f_14), "GR_PWD_PRI", 24);
		}
		else if (iVar0 == 14)
		{
			StringCopy(&(bParam0->f_14), "GR_PWD_LA", 24);
		}
		else
		{
			StringCopy(&(bParam0->f_14), "GR_PWD_PA", 24);
		}
	}
	else
	{
		iVar0 = UNK_0x09AC81E49EA267F7(false, 8);
		if (iVar0 == 0)
		{
			StringCopy(&(bParam0->f_14), "PASSWORD", 24);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&(bParam0->f_14), "PETSNAME", 24);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&(bParam0->f_14), "DYNAMITE", 24);
		}
		else if (iVar0 == 3)
		{
			StringCopy(&(bParam0->f_14), "BACKDOOR", 24);
		}
		else if (iVar0 == 4)
		{
			StringCopy(&(bParam0->f_14), "MORPHEUS", 24);
		}
		else if (iVar0 == 5)
		{
			StringCopy(&(bParam0->f_14), "CREAMPIE", 24);
		}
		else if (iVar0 == 6)
		{
			StringCopy(&(bParam0->f_14), "WORMSIGN", 24);
		}
		else if (iVar0 == 7)
		{
			StringCopy(&(bParam0->f_14), "UNLOCKED", 24);
		}
		else if (iVar0 == 8)
		{
			StringCopy(&(bParam0->f_14), "BLUEBOOK", 24);
		}
		else if (iVar0 == 9)
		{
			StringCopy(&(bParam0->f_14), "DECIPHER", 24);
		}
		else if (iVar0 == 10)
		{
			StringCopy(&(bParam0->f_14), "JUNKYARD", 24);
		}
		else
		{
			StringCopy(&(bParam0->f_14), "PASSWORD", 24);
		}
	}
}

void func_891(bool bParam0, char* sParam1)
{
	if (bParam0)
	{
		UNK_0x4728AD8A6BE3AED3(iLocal_79, "OPEN_ERROR_POPUP", SYSTEM::TO_FLOAT(1), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_82 = UNK_0x1C0640BA9A7327B3();
		iLocal_83 = 1;
	}
	else
	{
		UNK_0x4728AD8A6BE3AED3(iLocal_79, "OPEN_ERROR_POPUP", SYSTEM::TO_FLOAT(0), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_83 = 0;
	}
}

void func_892(bool bParam0)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

void func_893(bool bParam0, int iParam1)
{
	if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 29))
	{
		UNK_0x1FF2BF40EEFA5ABC(iLocal_79, "SET_BACKGROUND", SYSTEM::TO_FLOAT(iParam1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		if (UNK_0x0D71AFA59EF5104F())
		{
			UNK_0x4728AD8A6BE3AED3(iLocal_79, "ADD_PROGRAM", SYSTEM::TO_FLOAT(7), SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		else
		{
			UNK_0x4728AD8A6BE3AED3(iLocal_79, "ADD_PROGRAM", SYSTEM::TO_FLOAT(8), SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		UNK_0x7E60C62A7CE58FC8(iLocal_79, "SET_LABELS");
		func_275("H_ICON_1");
		if (iParam1 == 0)
		{
			func_275("H_ICON_2a");
		}
		else
		{
			func_275("H_ICON_2");
		}
		func_275("H_ICON_3");
		func_275("H_ICON_4");
		func_275("H_ICON_5");
		func_275("H_ICON_6");
		UNK_0x7E60D21B163E9D56();
		UNK_0x5D96D8530B3D0904(bParam0, 29);
	}
}

bool func_894(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = UNK_0x1C0640BA9A7327B3();
	if ((iVar0 - *iParam0) > iParam1)
	{
		return true;
	}
	return false;
}

void func_895(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = ((iParam0 % 3600000) / 60000);
	*iParam2 = (((iParam0 % 3600000) % 60000) / 1000);
	*iParam3 = (((iParam0 % 3600000) % 60000) % 1000);
}

void func_896()
{
	if (iLocal_80 < 5)
	{
		if (UNK_0xBFC0798A6E3417F9(2, 201) || UNK_0xBFC0798A6E3417F9(2, 237))
		{
			UNK_0x4D7F4CC43D4D0DE3(-1, "HACKING_CLICK", false, 1);
		}
	}
}

void func_897(bool bParam0)
{
	UNK_0x76B892E21D01B885(UNK_0x16F2683693E537C9(), 1, 1, 1, 0);
	if (UNK_0xC8BC75555A67090D())
	{
		UNK_0xC5A93869E686EE32(0);
	}
	UNK_0xA37A90C62806D848(1);
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	UNK_0x9A8DDC7C522F5BF5(iLocal_77, 0);
	func_871(0);
	func_870();
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0xD1D3393F08AA59CD(0);
	func_869(bParam0, 1, 0, 0);
	func_868(0, 1, 1, 0);
}

void func_898(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = SYSTEM::FLOOR((UNK_0x659FAE9DBE6F38F5(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((UNK_0x659FAE9DBE6F38F5(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((UNK_0x659FAE9DBE6F38F5(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((UNK_0x659FAE9DBE6F38F5(2, 221) * 127f));
	if (bParam4)
	{
		if (!UNK_0x718E6F84AA2510BB(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((UNK_0x8A6BC5D9CAEACD0F(2, 218) * 127f));
		}
		if (!UNK_0x718E6F84AA2510BB(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((UNK_0x8A6BC5D9CAEACD0F(2, 219) * 127f));
		}
		if (!UNK_0x718E6F84AA2510BB(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((UNK_0x8A6BC5D9CAEACD0F(2, 220) * 127f));
		}
		if (!UNK_0x718E6F84AA2510BB(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((UNK_0x8A6BC5D9CAEACD0F(2, 221) * 127f));
		}
	}
	if (UNK_0x91E3F625EF57450D(2))
	{
		if (bParam5)
		{
			if (UNK_0x89DF0B812BA6383B())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (UNK_0x8EB1E94243F14479())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_899(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam0 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 218) * 127f));
	*iParam1 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 219) * 127f));
	*iParam2 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 220) * 127f));
	*iParam3 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*iParam0) == 0f && IntToFloat(*iParam1) == 0f)
		{
			*iParam0 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 218) * 127f));
			*iParam1 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 219) * 127f));
		}
		if (IntToFloat(*iParam2) == 0f && IntToFloat(*iParam3) == 0f)
		{
			*iParam2 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 220) * 127f));
			*iParam3 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 221) * 127f));
		}
	}
}

void func_900(int iParam0)
{
	if (func_876())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_877(0))
		{
			func_872(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_901(bool bParam0, int iParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_1377170.f_1047), bParam0);
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1377170.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_902(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_903(bool bParam0, bool bParam1, int iParam2, bool bParam3)
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
	if (func_911())
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
		if (!func_387())
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
				else if (bVar14 || (!func_147(UNK_0xD803B885F5E47A62(), 0) && !func_93()))
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
					func_908(0, 0, 0);
					if (bVar25)
					{
						UNK_0x066C43E677C08D5C();
					}
				}
				if (!func_907(bVar27) && !UNK_0x20906E1D6BDC7044(bVar27))
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
					func_906();
					func_905();
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
				if (!func_907(bVar27) && !UNK_0x20906E1D6BDC7044(bVar27))
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
					if (func_904(Global_4456448.f_232883))
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

bool func_904(int iParam0)
{
	return iParam0 == 17;
}

void func_905()
{
	vector3 vVar0;

	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_906()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

bool func_907(bool bParam0)
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

void func_908(bool bParam0, bool bParam1, int iParam2)
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
				func_910();
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
		if (func_147(UNK_0xD803B885F5E47A62(), 0))
		{
			UNK_0xD51AAA59D51D8056(bParam0, bParam1, 1);
		}
		else
		{
			UNK_0x7AEFB64DFEBF60B0(bParam0, bParam1);
		}
		UNK_0xF374D547F2AC15B0(bParam0, bParam1);
		func_909(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_909(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xD8B681091EBE4064(iVar0, bParam1, 1);
	}
}

void func_910()
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

bool func_911()
{
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return true;
	}
	return false;
}

bool func_912(bool bParam0)
{
	if (UNK_0x83D8570832F172A7(iLocal_79) && (!bParam0 || (((((UNK_0x27117E2CDD4D67C3("HACKING_PC_desktop_0") && UNK_0x27117E2CDD4D67C3("HACKING_PC_desktop_1")) && UNK_0x27117E2CDD4D67C3("HACKING_PC_desktop_2")) && UNK_0x27117E2CDD4D67C3("HACKING_PC_desktop_3")) && UNK_0x27117E2CDD4D67C3("HACKING_PC_desktop_4")) && UNK_0x27117E2CDD4D67C3("HACKING_PC_desktop_5"))))
	{
		return true;
	}
	return false;
}

void func_913(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x0D3BE1DE0262A012("HACKING_PC_desktop_0", 0);
		UNK_0x0D3BE1DE0262A012("HACKING_PC_desktop_1", 0);
		UNK_0x0D3BE1DE0262A012("HACKING_PC_desktop_2", 0);
		UNK_0x0D3BE1DE0262A012("HACKING_PC_desktop_3", 0);
		UNK_0x0D3BE1DE0262A012("HACKING_PC_desktop_4", 0);
		UNK_0x0D3BE1DE0262A012("HACKING_PC_desktop_5", 0);
	}
	iLocal_79 = UNK_0x9749EEF2F67871D8("Hacking_PC");
}

void func_914(bool bParam0)
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x76B892E21D01B885(UNK_0x16F2683693E537C9(), 1, 1, 1, 0);
	}
	if (UNK_0xC8BC75555A67090D())
	{
		UNK_0xC5A93869E686EE32(0);
	}
	UNK_0x5DD950F92F816F03(0);
	UNK_0xA37A90C62806D848(1);
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	UNK_0x9A8DDC7C522F5BF5(iLocal_77, 0);
	UNK_0x0674E58A79778E99(bParam0, false);
	UNK_0x0674E58A79778E99(bParam0, 12);
	func_871(0);
	func_870();
	UNK_0xD1D3393F08AA59CD(0);
}

void func_915(bool bParam0)
{
	func_869(bParam0, 1, 1, 0);
	*bParam0 = 0;
	bParam0->f_23 = 0;
	Local_103 = false;
	Local_103.f_1 = 0;
	UNK_0x0674E58A79778E99(bParam0, 26);
	Local_105[0 /*4*/] = 0;
	Local_105[1 /*4*/] = 0;
	Local_105[2 /*4*/] = 0;
	Local_105[3 /*4*/] = 0;
	Local_105[4 /*4*/] = 0;
	Local_105[5 /*4*/] = 0;
	Local_105[6 /*4*/] = 0;
	Local_105[7 /*4*/] = 0;
}

void func_916(bool bParam0)
{
	UNK_0x38C3A68D7861DCFD(0, 71, 1);
	UNK_0x38C3A68D7861DCFD(0, 72, 1);
	UNK_0x38C3A68D7861DCFD(0, 76, 1);
	UNK_0x38C3A68D7861DCFD(0, 59, 1);
	UNK_0x38C3A68D7861DCFD(0, 60, 1);
	if (bParam0)
	{
		UNK_0x38C3A68D7861DCFD(0, 75, 1);
	}
	UNK_0x38C3A68D7861DCFD(0, 80, 1);
	UNK_0x38C3A68D7861DCFD(0, 69, 1);
	UNK_0x38C3A68D7861DCFD(0, 70, 1);
	UNK_0x38C3A68D7861DCFD(0, 68, 1);
	UNK_0x38C3A68D7861DCFD(0, 74, 1);
	UNK_0x38C3A68D7861DCFD(0, 86, 1);
	UNK_0x38C3A68D7861DCFD(0, 81, 1);
	UNK_0x38C3A68D7861DCFD(0, 82, 1);
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
}

void func_917()
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (UNK_0xEAE0D21A50E6C7F4(Local_442, false))
	{
		return;
	}
	if (!func_457())
	{
		if (func_425("GB_SGHT_HLP1"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		if (func_425("GB_SGHT_HLP2"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		if (func_411())
		{
			bVar0 = func_540(UNK_0x117658E336116132(Local_176.f_34));
			bVar1 = func_840(UNK_0x117658E336116132(Local_176.f_34));
			if (func_296(UNK_0xD803B885F5E47A62(), 1))
			{
				if (func_926("GB_SGHT_HLP3", bVar0, bVar1, "GB_SGHT_TGT", bVar1))
				{
					UNK_0xA37A90C62806D848(1);
				}
			}
			else if (func_926("GB_SGHT_HLP4", bVar0, bVar1, "GB_SGHT_TGT", bVar1))
			{
				UNK_0xA37A90C62806D848(1);
			}
		}
		if (func_425("GB_SGHT_RVL"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		return;
	}
	iVar2 = func_402(UNK_0xD803B885F5E47A62());
	if (iVar2 < 2)
	{
		if (func_425("GB_SGHT_HLP1"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		if (func_425("GB_SGHT_HLP2"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		if (func_411())
		{
			bVar0 = func_540(UNK_0x117658E336116132(Local_176.f_34));
			bVar1 = func_840(UNK_0x117658E336116132(Local_176.f_34));
			if (func_296(UNK_0xD803B885F5E47A62(), 1))
			{
				if (func_926("GB_SGHT_HLP3", bVar0, bVar1, "GB_SGHT_TGT", bVar1))
				{
					UNK_0xA37A90C62806D848(1);
				}
			}
			else if (func_926("GB_SGHT_HLP4", bVar0, bVar1, "GB_SGHT_TGT", bVar1))
			{
				UNK_0xA37A90C62806D848(1);
			}
		}
		if (func_425("GB_SGHT_RVL"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 2))
	{
		if (!func_925(86))
		{
			if (iLocal_736 == -1)
			{
				if (func_919(0, 1, 1, 1))
				{
					if (UNK_0x57270EE11514DC67() == Local_176.f_33)
					{
						func_433("GB_SGHT_HLP1", -1);
						func_432(1);
						UNK_0x5D96D8530B3D0904(&bLocal_429, 2);
					}
					else if (func_1006() == Local_176.f_33)
					{
						func_433("GB_SGHT_HLP2", -1);
						func_432(1);
						UNK_0x5D96D8530B3D0904(&bLocal_429, 2);
					}
					else if (func_411())
					{
						bVar0 = func_540(UNK_0x117658E336116132(Local_176.f_34));
						bVar1 = func_840(UNK_0x117658E336116132(Local_176.f_34));
						if (func_296(UNK_0xD803B885F5E47A62(), 1))
						{
							func_918("GB_SGHT_HLP3", bVar0, bVar1, "GB_SGHT_TGT", bVar1, -1);
							func_432(1);
						}
						else
						{
							func_918("GB_SGHT_HLP4", bVar0, bVar1, "GB_SGHT_TGT", bVar1, -1);
							func_432(1);
						}
						UNK_0x5D96D8530B3D0904(&bLocal_429, 2);
					}
				}
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&bLocal_429, 2);
			}
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_429, 2))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 7))
		{
			if (iLocal_736 == -1)
			{
				if (UNK_0x57270EE11514DC67() == Local_176.f_33)
				{
					if (func_919(0, 1, 1, 1))
					{
						func_433("GB_SGHT_APPH", -1);
						func_432(1);
						UNK_0x5D96D8530B3D0904(&bLocal_429, 7);
					}
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&bLocal_429, 7);
				}
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&bLocal_429, 7);
			}
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 8))
	{
		if (func_1005())
		{
			if (func_989())
			{
				if (UNK_0xE5DBF9B6126856CA(Local_176.f_3))
				{
					if (func_919(0, 1, 1, 1))
					{
						func_433("GB_SGHT_PKGH", -1);
						func_432(1);
						UNK_0x5D96D8530B3D0904(&bLocal_429, 8);
					}
				}
			}
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 12))
	{
		if (func_1005())
		{
			if (Local_176.f_5 > 0 || UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, 6))
			{
				if (func_919(0, 1, 1, 1))
				{
					func_433("GB_SGHT_RVL", -1);
					func_432(1);
					UNK_0x5D96D8530B3D0904(&bLocal_429, 12);
				}
			}
		}
	}
}

void func_918(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	if (!bParam2 == 0)
	{
		UNK_0x3A820E495A7BA3E5(bParam2);
	}
	UNK_0xD06AC7C87A34A6AD(bParam1);
	if (!bParam4 == 0)
	{
		UNK_0x3A820E495A7BA3E5(bParam4);
	}
	UNK_0x6B012227B3921E18(bParam3);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, false, iParam5);
}

bool func_919(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && UNK_0xFEBC1E4EC9E001F0())
	{
		return false;
	}
	if (func_924())
	{
		return false;
	}
	if (!UNK_0x0F1CCD77290EE12F())
	{
		return false;
	}
	if (func_392())
	{
		return false;
	}
	if (func_499())
	{
		return false;
	}
	if (bParam1)
	{
		if (func_47(UNK_0xD803B885F5E47A62(), 1, 0))
		{
			return false;
		}
	}
	if (bParam0)
	{
		if (func_923(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	if (func_922())
	{
		return false;
	}
	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		return false;
	}
	if (UNK_0x798A3F1296751F46())
	{
		return false;
	}
	if (bParam3)
	{
		if (!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	if (Global_1574184)
	{
		return false;
	}
	if (func_921())
	{
		return false;
	}
	if (func_920())
	{
		return false;
	}
	if (func_385())
	{
		return false;
	}
	if (Global_73825)
	{
		return false;
	}
	if (Global_2547056)
	{
		return false;
	}
	if (func_220(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_920()
{
	return Global_2450632.f_591;
}

bool func_921()
{
	return Global_2450632.f_744;
}

bool func_922()
{
	return Global_2439138.f_3047.f_578;
}

bool func_923(int iParam0)
{
	if (Global_2425662[iParam0 /*421*/].f_208 == 0)
	{
		return false;
	}
	return true;
}

bool func_924()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

bool func_925(int iParam0)
{
	return Global_2439138.f_2723[0 /*80*/].f_1 == iParam0;
}

bool func_926(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	if (!bParam2 == 0)
	{
		UNK_0x3A820E495A7BA3E5(bParam2);
	}
	UNK_0xD06AC7C87A34A6AD(bParam1);
	if (!bParam4 == 0)
	{
		UNK_0x3A820E495A7BA3E5(bParam4);
	}
	UNK_0x6B012227B3921E18(bParam3);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_927()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (UNK_0xEAE0D21A50E6C7F4(Local_442, false))
	{
		return;
	}
	if (!func_457())
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_429, 5))
		{
			if (Local_176.f_34 != -1)
			{
				iVar0 = func_300(UNK_0x117658E336116132(Local_176.f_34));
				if (iVar0 > -1)
				{
					if (UNK_0x40B8C182D63932FC(UNK_0x117658E336116132(Local_176.f_34)))
					{
						bVar1 = func_298(iVar0);
						iVar2 = func_863(bVar1);
						func_448(UNK_0x117658E336116132(Local_176.f_34), 432, 0, 0);
						func_447(UNK_0x117658E336116132(Local_176.f_34), iVar2, 0, 0);
						func_446(UNK_0x117658E336116132(Local_176.f_34), 0, 0, 0);
						func_445(UNK_0x117658E336116132(Local_176.f_34), 0);
						func_442(UNK_0x117658E336116132(Local_176.f_34), Global_262145.f_12355, 0, 0);
						UNK_0x0674E58A79778E99(&bLocal_429, 5);
					}
					else
					{
						UNK_0x0674E58A79778E99(&bLocal_429, 5);
					}
				}
			}
			func_450();
		}
		return;
	}
	if (!UNK_0xE5DBF9B6126856CA(Local_176.f_3))
	{
		if (UNK_0x57270EE11514DC67() == Local_176.f_33)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_236[UNK_0x57270EE11514DC67() /*6*/].f_1, 3))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_442, false))
				{
					if (Local_236[UNK_0x57270EE11514DC67() /*6*/].f_5 < 3)
					{
						if (func_402(UNK_0xD803B885F5E47A62()) == 3)
						{
							if (!func_937("GB_SGHT_HCK"))
							{
								func_934("GB_SGHT_HCK", 0);
							}
						}
						else if (func_937("GB_SGHT_HCK"))
						{
							func_450();
						}
					}
					else
					{
						func_450();
					}
				}
			}
		}
		else if (func_1006() == Local_176.f_33)
		{
			if (Local_176.f_34 != -1)
			{
				if (func_402(UNK_0xD803B885F5E47A62()) == 3)
				{
					if (!func_937("GB_SGHT_PROT"))
					{
						iVar0 = func_300(UNK_0x117658E336116132(Local_176.f_34));
						if (iVar0 > -1)
						{
							bVar1 = func_298(iVar0);
							func_928("GB_SGHT_PROT", UNK_0x117658E336116132(Local_176.f_34), "GB_SGHT_BOSS", 1, bVar1, 0);
						}
					}
				}
				else if (func_937("GB_SGHT_PROT"))
				{
					func_450();
				}
			}
		}
		else if (func_411())
		{
			if (Local_176.f_34 != -1)
			{
				if (func_402(UNK_0xD803B885F5E47A62()) == 3)
				{
					if (Local_176.f_34 != -1)
					{
						iVar0 = func_300(UNK_0x117658E336116132(Local_176.f_34));
						if (iVar0 > -1)
						{
							bVar1 = func_298(iVar0);
							if (func_296(UNK_0xD803B885F5E47A62(), 1))
							{
								if (!func_937("GB_SGHT_STOP"))
								{
									func_928("GB_SGHT_STOP", UNK_0x117658E336116132(Local_176.f_34), "GB_SGHT_BOSS", 1, bVar1, 0);
								}
							}
							else if (!func_937("GB_SGHT_STOP"))
							{
								func_928("GB_SGHT_STOP", UNK_0x117658E336116132(Local_176.f_34), "GB_SGHT_BOSS", 1, bVar1, 0);
							}
						}
					}
				}
				else
				{
					if (func_937("GB_SGHT_STOP"))
					{
						func_450();
					}
					if (func_937("GB_SGHT_STOP2"))
					{
						func_450();
					}
				}
				if (func_402(UNK_0xD803B885F5E47A62()) >= 2)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 5))
					{
						if (Local_176.f_34 != -1)
						{
							if (UNK_0x40B8C182D63932FC(UNK_0x117658E336116132(Local_176.f_34)))
							{
								if (func_1115(UNK_0x117658E336116132(Local_176.f_34), 1, 1))
								{
									iVar0 = func_300(UNK_0x117658E336116132(Local_176.f_34));
									if (iVar0 > -1)
									{
										bVar1 = func_298(iVar0);
										iVar2 = func_863(bVar1);
										func_448(UNK_0x117658E336116132(Local_176.f_34), 432, 1, 0);
										func_447(UNK_0x117658E336116132(Local_176.f_34), iVar2, 1, 0);
										func_446(UNK_0x117658E336116132(Local_176.f_34), 1, 1, 0);
										func_445(UNK_0x117658E336116132(Local_176.f_34), 1);
										func_442(UNK_0x117658E336116132(Local_176.f_34), Global_262145.f_12355, 1, 0);
										UNK_0x5D96D8530B3D0904(&bLocal_429, 5);
									}
								}
							}
						}
					}
				}
				else if (UNK_0xEAE0D21A50E6C7F4(bLocal_429, 5))
				{
					if (Local_176.f_34 != -1)
					{
						iVar0 = func_300(UNK_0x117658E336116132(Local_176.f_34));
						if (iVar0 > -1)
						{
							bVar1 = func_298(iVar0);
							iVar2 = func_863(bVar1);
							func_448(UNK_0x117658E336116132(Local_176.f_34), 432, 0, 0);
							func_447(UNK_0x117658E336116132(Local_176.f_34), iVar2, 0, 0);
							func_446(UNK_0x117658E336116132(Local_176.f_34), 0, 0, 0);
							func_445(UNK_0x117658E336116132(Local_176.f_34), 0);
							func_442(UNK_0x117658E336116132(Local_176.f_34), Global_262145.f_12355, 0, 0);
							UNK_0x0674E58A79778E99(&bLocal_429, 5);
						}
					}
				}
			}
		}
	}
	else if (func_402(UNK_0xD803B885F5E47A62()) == 3)
	{
		if (UNK_0x57270EE11514DC67() == Local_176.f_33)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_442, false))
			{
				if (!func_937("GB_SGHT_RETP"))
				{
					func_934("GB_SGHT_RETP", 0);
				}
			}
		}
		else if (func_1006() == Local_176.f_33)
		{
			if (Local_176.f_34 != -1)
			{
				if (!func_937("GB_SGHT_PROT"))
				{
					iVar0 = func_300(UNK_0x117658E336116132(Local_176.f_34));
					if (iVar0 > -1)
					{
						bVar1 = func_298(iVar0);
						func_928("GB_SGHT_PROT", UNK_0x117658E336116132(Local_176.f_34), "GB_SGHT_BOSS", 1, bVar1, 0);
					}
				}
			}
		}
		else if (func_411())
		{
			if (Local_176.f_34 != -1)
			{
				iVar0 = func_300(UNK_0x117658E336116132(Local_176.f_34));
				if (iVar0 > -1)
				{
					bVar1 = func_298(iVar0);
					if (func_296(UNK_0xD803B885F5E47A62(), 1))
					{
						if (!func_937("GB_SGHT_STOP"))
						{
							func_928("GB_SGHT_STOP", UNK_0x117658E336116132(Local_176.f_34), "GB_SGHT_BOSS", 1, bVar1, 0);
						}
					}
					else if (!func_937("GB_SGHT_STOP"))
					{
						func_928("GB_SGHT_STOP", UNK_0x117658E336116132(Local_176.f_34), "GB_SGHT_BOSS", 1, bVar1, 0);
					}
				}
			}
		}
	}
	else
	{
		if (func_937("GB_SGHT_PROT"))
		{
			func_450();
		}
		if (func_937("GB_SGHT_RETP"))
		{
			func_450();
		}
		if (func_937("GB_SGHT_STOP"))
		{
			func_450();
		}
		if (func_937("GB_SGHT_STOP2"))
		{
			func_450();
		}
	}
}

void func_928(char* sParam0, bool bParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (func_929(sParam0, UNK_0x6E524813889AECF8(bParam1), sParam2, bParam5, iParam3))
	{
		Global_1312585 = 15;
		Global_1312585.f_56 = iParam3;
		Global_1312585.f_57 = bParam4;
		Global_1312585.f_54 = bParam1;
	}
}

bool func_929(char* sParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	if (UNK_0xEA6BC48857E0AC4C(sParam0))
	{
		return false;
	}
	if (UNK_0x7724E025FD444F45(sParam0) > 23)
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(sParam1))
	{
		return false;
	}
	if (UNK_0x7724E025FD444F45(sParam1) > 63)
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(sParam2))
	{
		return false;
	}
	if (UNK_0x7724E025FD444F45(sParam2) > 63)
	{
		return false;
	}
	if (func_933(sParam0, sParam1, sParam2) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return false;
	}
	func_451();
	Global_1312585 = 10;
	StringCopy(&(Global_1312585.f_1), UNK_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = UNK_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	StringCopy(&(Global_1312585.f_32), sParam2, 64);
	Global_1312585.f_58 = iParam4;
	Global_1312585.f_56 = iParam4;
	func_932();
	func_931(bParam3);
	func_930();
	return true;
}

void func_930()
{
	UNK_0x5D96D8530B3D0904(&(Global_1312585.f_59), true);
}

void func_931(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x5D96D8530B3D0904(&(Global_1312585.f_59), false);
		return;
	}
	UNK_0x0674E58A79778E99(&(Global_1312585.f_59), false);
}

void func_932()
{
	Global_1312585.f_10 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), 86400000);
	Global_1312585.f_11 = UNK_0x2B6E0A53779D29EA();
}

bool func_933(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_456())
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam2))
	{
		return false;
	}
	if (!UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_12)))
	{
		return false;
	}
	if (!UNK_0x12AB0310C2281427(bParam1) == UNK_0x12AB0310C2281427(&(Global_1312585.f_16)))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam2) == UNK_0x12AB0310C2281427(&(Global_1312585.f_32));
}

void func_934(char* sParam0, bool bParam1)
{
	if (UNK_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (UNK_0x7724E025FD444F45(sParam0) > 23)
	{
		return;
	}
	if (func_935(sParam0))
	{
		return;
	}
	func_451();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), UNK_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = UNK_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_932();
	func_931(bParam1);
	func_930();
}

bool func_935(bool bParam0)
{
	if (!func_456())
	{
		return false;
	}
	if (Global_1312585 == 11)
	{
		return func_936(bParam0);
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_12));
}

bool func_936(bool bParam0)
{
	if (!func_456())
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_16));
}

bool func_937(bool bParam0)
{
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	if (!func_456())
	{
		return false;
	}
	if (Global_1312585 == 11)
	{
		if (UNK_0x7724E025FD444F45(bParam0) > 63)
		{
			return false;
		}
	}
	else if (UNK_0x7724E025FD444F45(bParam0) > 23)
	{
		return false;
	}
	return func_935(bParam0);
}

void func_938()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!func_1005() && !func_411())
	{
		return;
	}
	if (!func_457())
	{
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, true))
	{
		iVar0 = func_402(UNK_0xD803B885F5E47A62());
		if (iVar0 >= 2)
		{
			if (UNK_0x57270EE11514DC67() == Local_176.f_33 || func_1006() == Local_176.f_33)
			{
				if (func_963(82, "GB_INTTXT_SS", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_539(86, "BIGM_SGHTN", "BIGM_SGHTBD", 1, -1, 2, 1, 0);
					UNK_0x74ECD24F904DEAD4(1);
					UNK_0xA28F9D904B25A147(UNK_0xD803B885F5E47A62(), joaat("PICKUP_PORTABLE_PACKAGE"), 1);
					func_962(1);
					func_939(-1, 0, 0, -1, 0, 0);
				}
			}
			else if (func_296(UNK_0xD803B885F5E47A62(), 1))
			{
				bVar1 = func_540(UNK_0x117658E336116132(Local_176.f_34));
				iVar2 = func_840(UNK_0x117658E336116132(Local_176.f_34));
				func_838(86, "BIGM_SGHTN", "BIGM_SGHTRD", bVar1, iVar2, 0, -1, -1, -1, 2, -1);
				func_939(-1, 0, 0, -1, 0, 0);
			}
			else
			{
				bVar1 = func_540(UNK_0x117658E336116132(Local_176.f_34));
				iVar2 = func_840(UNK_0x117658E336116132(Local_176.f_34));
				func_838(86, "BIGM_SGHTN", "BIGM_SGHTRD", bVar1, iVar2, 0, -1, -1, -1, 2, -1);
				func_939(-1, 0, 0, -1, 0, 0);
			}
		}
		UNK_0x5D96D8530B3D0904(&bLocal_429, true);
	}
}

void func_939(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	if (bParam5)
	{
		iVar0 = func_288(UNK_0xD803B885F5E47A62());
		Global_1674635 = iVar0;
		Global_1674635.f_1 = iParam0;
		if (func_537() != func_32())
		{
			Global_1674635.f_2 = func_738(func_537());
			Global_1674635.f_3 = func_737(func_537());
		}
		if (func_360() != func_32())
		{
			func_589(func_360(), &(Global_1674635.f_2), &(Global_1674635.f_3));
		}
		Global_1674635.f_7 = UNK_0xDD0E7998AE8AD485();
		Global_1674635.f_28 = func_826(UNK_0xD803B885F5E47A62());
		Global_1674635.f_13 = 0;
		Global_1674635.f_14 = 0;
		if (func_296(UNK_0xD803B885F5E47A62(), 1))
		{
			Global_1674635.f_23 = func_829(func_357(1));
		}
	}
	else
	{
		iVar0 = func_230(UNK_0xD803B885F5E47A62());
	}
	if (bParam2 || func_430(iVar0))
	{
		if (iParam3 != -1 && bParam2)
		{
			iVar0 = iParam3;
		}
		Global_1674374 = iVar0;
		if (func_419(iVar0))
		{
			Global_1674374.f_1 = 4;
		}
		else if (func_480(iVar0))
		{
			Global_1674374.f_1 = 5;
		}
		else if (func_327(iVar0, 0))
		{
			Global_1674374.f_1 = 2;
			if (func_554(iVar0))
			{
				Global_1674374.f_1 = 3;
			}
		}
		else
		{
			Global_1674374.f_1 = 1;
		}
		if (func_537() != func_32())
		{
			Global_1674374.f_4 = func_738(func_537());
			Global_1674374.f_5 = func_737(func_537());
		}
		if (func_360() != func_32())
		{
			func_589(func_360(), &(Global_1674374.f_6), &(Global_1674374.f_7));
		}
		Global_1674374.f_9 = UNK_0xDD0E7998AE8AD485();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1674374.f_27 = 1;
			Global_1674374.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1674374.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1674374.f_40 = func_585(iParam1);
			Global_1674374.f_41 = func_961();
			Global_1674374.f_42 = func_697(UNK_0xD803B885F5E47A62(), iParam1);
			Global_1674374.f_44 = func_819(UNK_0xD803B885F5E47A62(), iParam1);
		}
		if (!func_989() || iVar0 != 192)
		{
			Global_1674374.f_53 = 0;
		}
	}
	else if (func_478(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1674491 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1674491 = iParam0 + 1;
		}
		else
		{
			Global_1674491 = func_960(UNK_0xD803B885F5E47A62());
		}
		switch (iVar0)
		{
			case 225:
				if (func_551(UNK_0xD803B885F5E47A62()) == 0)
				{
					Global_1674491.f_1 = 0;
				}
				else
				{
					Global_1674491.f_1 = 1;
				}
				break;
			case 226:
				Global_1674491.f_1 = 2;
				break;
			case 227:
				Global_1674491.f_1 = 3;
				break;
		}
		Global_1674491.f_21 = 1;
		Global_1674491.f_22 = 1;
		if (func_537() != func_32())
		{
			Global_1674491.f_4 = func_738(func_537());
			Global_1674491.f_5 = func_737(func_537());
		}
		if (func_360() != func_32())
		{
			func_589(func_360(), &(Global_1674491.f_4), &(Global_1674491.f_5));
		}
		Global_1674491.f_8 = UNK_0xDD0E7998AE8AD485();
		if (iParam0 != -1)
		{
			Global_1674491.f_20 = iParam0;
		}
	}
	else if (func_435(iVar0))
	{
		if (iParam3 != -1 && bParam2)
		{
		}
		Global_1674428 = iVar0;
		Global_1674374.f_1 = 1;
		if (func_537() != func_32())
		{
			Global_1674428.f_4 = func_738(func_537());
			Global_1674428.f_5 = func_737(func_537());
		}
		if (func_360() != func_32())
		{
			func_589(func_360(), &(Global_1674428.f_6), &(Global_1674428.f_7));
		}
		Global_1674428.f_9 = UNK_0xDD0E7998AE8AD485();
		if (iParam0 != -1)
		{
			Global_1674428.f_21 = iParam0;
		}
	}
	else if (func_476(iVar0))
	{
		Global_1674535 = iVar0;
		Global_1674535.f_1 = iParam0;
		Global_1674535.f_21 = 1;
		Global_1674535.f_22 = 1;
		if (func_537() != func_32())
		{
			Global_1674535.f_4 = func_738(func_537());
			Global_1674535.f_5 = func_737(func_537());
		}
		if (func_360() != func_32())
		{
			func_589(func_360(), &(Global_1674535.f_4), &(Global_1674535.f_5));
		}
		Global_1674535.f_8 = UNK_0xDD0E7998AE8AD485();
		if (iParam0 != -1)
		{
			Global_1674535.f_20 = iParam0;
		}
		Global_1674535.f_27 = func_812(func_149(), 5);
		Global_1674535.f_28 = func_829(func_959(UNK_0xD803B885F5E47A62()));
		Global_1674535.f_29 = func_559(6107, -1, 0);
		Global_1674535.f_30 = func_559(6103, -1, 0);
		Global_1674535.f_31 = func_559(6104, -1, 0);
		Global_1674535.f_32 = func_559(6106, -1, 0);
		Global_1674535.f_33 = func_559(6105, -1, 0);
		Global_1674535.f_34 = func_559(6108, -1, 0);
		Global_1674535.f_7 = func_828();
		Global_1674535.f_51 = func_829(bParam4);
	}
	else if (func_474(iVar0))
	{
		Global_1674589 = iVar0;
		Global_1674589.f_1 = iParam0;
		Global_1674589.f_21 = 1;
		Global_1674589.f_22 = 1;
		if (func_537() != func_32())
		{
			Global_1674589.f_4 = func_738(func_537());
			Global_1674589.f_5 = func_737(func_537());
		}
		if (func_360() != func_32())
		{
			func_589(func_360(), &(Global_1674589.f_4), &(Global_1674589.f_5));
		}
		Global_1674589.f_8 = UNK_0xDD0E7998AE8AD485();
		if (iParam0 != -1)
		{
			Global_1674589.f_20 = iParam0;
		}
		Global_1674589.f_24 = func_559(6157, -1, 0);
		Global_1674589.f_25 = func_559(6162, -1, 0);
		Global_1674589.f_26 = func_559(6163, -1, 0);
		Global_1674589.f_27 = func_829((((func_777() || func_776()) || func_775()) || func_774(UNK_0xD803B885F5E47A62())));
		Global_1674589.f_28 = func_559(6164, -1, 0);
		Global_1674589.f_29 = func_829(func_773());
		Global_1674589.f_31 = 0;
		Global_1674589.f_30 = 0;
		Global_1674589.f_32 = 0;
		Global_1674589.f_33 = 0;
		Global_1674589.f_34 = 0;
		Global_1674589.f_16 = 0;
		Global_1674589.f_7 = func_828();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_549(func_550(UNK_0xD803B885F5E47A62()))))
	{
		Global_1674725 = iVar0;
		Global_1674725.f_1 = iParam0;
		Global_1674725.f_21 = 1;
		Global_1674725.f_22 = 1;
		Global_1674725.f_7 = func_828();
		if (func_537() != func_32())
		{
			Global_1674725.f_4 = func_738(func_537());
			Global_1674725.f_5 = func_737(func_537());
		}
		if (func_360() != func_32())
		{
			func_589(func_360(), &(Global_1674725.f_4), &(Global_1674725.f_5));
		}
		if (func_537() != -1)
		{
			Global_1674725.f_17 = func_770(func_537());
		}
		Global_1674725.f_8 = UNK_0xDD0E7998AE8AD485();
		Global_1674725.f_28 = func_826(UNK_0xD803B885F5E47A62());
		Global_1674725.f_16 = 0;
		Global_1674725.f_24 = 0;
		Global_1674725.f_23 = 0;
		if (func_296(UNK_0xD803B885F5E47A62(), 1))
		{
			Global_1674725.f_33 = func_829(func_357(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1674671 = iVar0;
		Global_1674671.f_1 = iParam0;
		Global_1674671.f_21 = 1;
		Global_1674671.f_22 = 1;
		Global_1674671.f_7 = func_828();
		Global_1674671.f_24 = 0;
		Global_1674671.f_23 = 0;
		Global_1674671.f_16 = 0;
		if (func_537() != func_32())
		{
			Global_1674671.f_4 = func_738(func_537());
			Global_1674671.f_5 = func_737(func_537());
		}
		Global_1674671.f_28 = func_826(UNK_0xD803B885F5E47A62());
		if (Global_1674671.f_28)
		{
			Global_1674671.f_29 = func_764(UNK_0xD803B885F5E47A62());
		}
		else
		{
			Global_1674671.f_29 = 0;
		}
		Global_1674671.f_30 = func_748(UNK_0xD803B885F5E47A62(), 4, -1);
		Global_1674671.f_31 = func_767(UNK_0xD803B885F5E47A62());
		Global_1674671.f_32 = func_829(func_747(UNK_0xD803B885F5E47A62()));
		Global_1674671.f_33 = func_829(func_746(UNK_0xD803B885F5E47A62()));
		Global_1674671.f_34 = func_829(func_745(UNK_0xD803B885F5E47A62()));
		Global_1674671.f_35 = func_829(func_744(UNK_0xD803B885F5E47A62()));
		Global_1674671.f_36 = func_743(UNK_0xD803B885F5E47A62());
		Global_1674671.f_37 = func_742(UNK_0xD803B885F5E47A62());
		Global_1674671.f_39 = func_741(UNK_0xD803B885F5E47A62());
		if (func_296(UNK_0xD803B885F5E47A62(), 1))
		{
			Global_1674671.f_41 = func_829(func_357(1));
		}
		if (func_360() != func_32())
		{
			func_589(func_360(), &(Global_1674671.f_4), &(Global_1674671.f_5));
		}
		Global_1674671.f_8 = UNK_0xDD0E7998AE8AD485();
		Global_1674671.f_28 = func_826(UNK_0xD803B885F5E47A62());
	}
	else if (func_547(iVar0))
	{
		Global_1674809 = iVar0;
		Global_1674809.f_1 = func_551(UNK_0xD803B885F5E47A62());
		Global_1674809.f_2 = func_837();
		Global_1674809.f_3 = func_836();
		Global_1674809.f_4 = func_738(func_537());
		Global_1674809.f_5 = func_737(func_537());
		Global_1674809.f_7 = func_828();
		Global_1674809.f_8 = UNK_0xDD0E7998AE8AD485();
		if (func_537() != -1)
		{
			Global_1674809.f_17 = func_770(func_537());
		}
		Global_1674809.f_21 = 1;
		Global_1674809.f_22 = 1;
		Global_1674809.f_25 = iParam0;
		Global_1674809.f_27 = func_829(func_735(UNK_0xD803B885F5E47A62()));
		Global_1674809.f_28 = func_732(21, -1);
	}
	else if (func_468(iVar0))
	{
		Global_1674884 = Global_786547.f_1;
		Global_1674884.f_2 = Global_786547;
		Global_1674884.f_6 = func_738(func_537());
		Global_1674884.f_7 = func_737(func_537());
		if (func_296(UNK_0xD803B885F5E47A62(), 1))
		{
			Global_1674884.f_8 = func_829(func_357(1));
		}
		if (func_537() != -1)
		{
			Global_1674884.f_9 = func_770(func_537());
		}
		Global_1674884.f_10 = func_828();
		Global_1674884.f_19 = 1;
		Global_1674884.f_20 = 1;
		Global_1674884.f_21 = 0;
		Global_1674884.f_22 = 0;
		Global_1674884.f_23 = 0;
		Global_1702973 = UNK_0xDD0E7998AE8AD485();
	}
	else
	{
		if (func_537() != func_32())
		{
			Global_1674356 = func_738(func_537());
			Global_1674356.f_1 = func_737(func_537());
		}
		Global_1674356.f_5 = UNK_0xDD0E7998AE8AD485();
		Global_1674356.f_13 = func_958();
		Global_1674356.f_15 = 0;
		if (func_538(1))
		{
			if (func_360() == func_537())
			{
				Global_1674356.f_15 = 1;
			}
		}
		if (func_957())
		{
			Global_1674491.f_28 = 1;
		}
		if (((((func_956() || func_955()) || func_954()) || func_953()) || func_952()) || func_951(UNK_0xD803B885F5E47A62()))
		{
			Global_1674491.f_30 = 1;
		}
		if (func_949(func_950(joaat("TRAILERSMALL2"))))
		{
			Global_1674491.f_32 = 1;
		}
		if (func_943(func_948(joaat("CADDY"))))
		{
			Global_1674491.f_31 = 1;
		}
		if (func_811(UNK_0xD803B885F5E47A62()) || func_810(UNK_0xD803B885F5E47A62()))
		{
			Global_1674491.f_29 = 1;
		}
		if (func_807(UNK_0xD803B885F5E47A62()))
		{
			Global_1674491.f_33 = 1;
			Global_1674491.f_34 = 1;
		}
		if (func_808(UNK_0xD803B885F5E47A62()))
		{
			Global_1674491.f_36 = 1;
		}
		if (func_805(0, UNK_0xD803B885F5E47A62()) == 1)
		{
			Global_1674491.f_35 = 1;
		}
		if (func_942(UNK_0xD803B885F5E47A62(), 3, &uVar1))
		{
			Global_1674491.f_37 = 1;
		}
		if (func_942(UNK_0xD803B885F5E47A62(), 7, &uVar1))
		{
			Global_1674491.f_38 = 1;
		}
		if (func_941(UNK_0xD803B885F5E47A62()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_940(UNK_0xD803B885F5E47A62(), iVar2);
				if (func_694(UNK_0xD803B885F5E47A62(), iVar3, 0))
				{
					Global_1674491.f_39 = 1;
				}
				if (func_694(UNK_0xD803B885F5E47A62(), iVar3, 2))
				{
					Global_1674491.f_40 = 1;
				}
				if (func_694(UNK_0xD803B885F5E47A62(), iVar3, 1))
				{
					Global_1674491.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_940(int iParam0, int iParam1)
{
	var uVar0;

	if (iParam0 == func_32())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_686(Global_1590535[iParam0 /*876*/].f_274.f_183[iParam1 /*12*/]))
	{
		uVar0 = Global_1590535[iParam0 /*876*/].f_274.f_183[iParam1 /*12*/];
	}
	return uVar0;
}

bool func_941(int iParam0)
{
	int iVar0;

	if (iParam0 == func_32())
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_942(bool bParam0, int iParam1, var uParam2)
{
	int iVar0;

	if (bParam0 != func_32())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_805(iVar0, bParam0))
			{
				*uParam2 = iVar0;
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_943(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_732(11, -1) == 0)
	{
		return false;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_791(11));
		func_790(iVar1, &iVar0, 1);
		iVar2 = func_732(func_945(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_559(func_944(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_944(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				case 1:
					return 1636;
				case 2:
					return 1643;
				case 3:
					return 1650;
				case 4:
					return 1657;
				case 5:
					return 1664;
				case 6:
					return 1671;
				case 7:
					return 1678;
				case 8:
					return 1685;
				case 9:
					return 1692;
				case 10:
					return 1699;
				case 11:
					return 1705;
				case 12:
					return 1711;
				case 13:
					return 1717;
				case 14:
					return 1795;
				case 15:
					return 1802;
				case 16:
					return 1809;
				case 17:
					return 1816;
				case 18:
					return 1823;
				case 19:
					return 1830;
				case 20:
					return 1837;
				case 21:
					return 1844;
				case 22:
					return 1851;
				case 23:
					return 1858;
				case 24:
					return 1864;
				case 25:
					return 1870;
				case 26:
					return 2165;
				case 27:
					return 2172;
				case 28:
					return 2179;
				case 29:
					return 2186;
				case 30:
					return 2193;
				case 31:
					return 2200;
				case 32:
					return 2207;
				case 33:
					return 2214;
				case 34:
					return 2221;
				case 35:
					return 2228;
				case 36:
					return 2235;
				case 37:
					return 2241;
				case 38:
					return 2247;
				case 39:
					return 2828;
				case 40:
					return 2835;
				case 41:
					return 2842;
				case 42:
					return 2849;
				case 43:
					return 2856;
				case 44:
					return 2863;
				case 45:
					return 2870;
				case 46:
					return 2877;
				case 47:
					return 2884;
				case 48:
					return 2891;
				case 49:
					return 2898;
				case 50:
					return 2904;
				case 51:
					return 2910;
				case 52:
					return 2952;
				case 53:
					return 2959;
				case 54:
					return 2966;
				case 55:
					return 2973;
				case 56:
					return 2980;
				case 57:
					return 2987;
				case 58:
					return 2994;
				case 59:
					return 3001;
				case 60:
					return 3008;
				case 61:
					return 3015;
				case 62:
					return 3022;
				case 63:
					return 3028;
				case 64:
					return 3034;
				case 65:
					return 3235;
				case 66:
					return 3243;
				case 67:
					return 3251;
				case 68:
					return 3259;
				case 69:
					return 3267;
				case 70:
					return 3275;
				case 71:
					return 3283;
				case 72:
					return 3291;
				case 73:
					return 3299;
				case 74:
					return 3307;
				case 75:
					return 3315;
				case 76:
					return 3323;
				case 77:
					return 3331;
				case 78:
					return 3339;
				case 79:
					return 3347;
				case 80:
					return 3355;
				case 81:
					return 3363;
				case 82:
					return 3371;
				case 83:
					return 3379;
				case 84:
					return 3387;
				case 85:
					return 3395;
				case 86:
					return 3402;
				case 87:
					return 3409;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				case 89:
					return 4039;
				case 90:
					return 4047;
				case 91:
					return 4055;
				case 92:
					return 4063;
				case 93:
					return 4071;
				case 94:
					return 4079;
				case 95:
					return 4087;
				case 96:
					return 4095;
				case 97:
					return 4103;
				case 98:
					return 4111;
				case 99:
					return 4119;
				case 100:
					return 4127;
				case 101:
					return 4135;
				case 102:
					return 4143;
				case 103:
					return 4151;
				case 104:
					return 4159;
				case 105:
					return 4167;
				case 106:
					return 4175;
				case 107:
					return 4183;
				case 108:
					return 4191;
				case 109:
					return 4199;
				case 110:
					return 4207;
				case 111:
					return 4215;
				case 112:
					return 4223;
				case 113:
					return 4231;
				case 114:
					return 4239;
				case 115:
					return 4247;
				case 116:
					return 4255;
				case 117:
					return 4263;
				case 118:
					return 4271;
				case 119:
					return 4279;
				case 120:
					return 4287;
				case 121:
					return 4295;
				case 122:
					return 4303;
				case 123:
					return 4311;
				case 124:
					return 4319;
				case 125:
					return 4327;
				case 126:
					return 4335;
				case 127:
					return 4343;
				case 128:
					return 4351;
				case 129:
					return 4359;
				case 130:
					return 4367;
				case 131:
					return 4375;
				case 132:
					return 4383;
				case 133:
					return 4391;
				case 134:
					return 4399;
				case 135:
					return 4407;
				case 136:
					return 4415;
				case 137:
					return 4423;
				case 138:
					return 4431;
				case 139:
					return 4439;
				case 140:
					return 4447;
				case 141:
					return 4455;
				case 142:
					return 4463;
				case 143:
					return 4471;
				case 144:
					return 4479;
				case 145:
					return 4487;
				case 146:
					return 4495;
				case 147:
					return 4503;
				case 148:
					return 4511;
				case 149:
					return 4519;
				case 150:
					return 4527;
				case 151:
					return 4535;
				case 152:
					return 4543;
				case 153:
					return 4551;
				case 154:
					return 4559;
				case 155:
					return 4567;
				case 156:
					return 4575;
				case 157:
					return 4583;
				case 158:
					return 5476;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				case 160:
					return 5932;
				case 161:
					return 5939;
				case 162:
					return 5946;
				case 163:
					return 5953;
				case 164:
					return 5960;
				case 165:
					return 5967;
				case 166:
					return 5974;
				case 167:
					return 5981;
				case 168:
					return 5988;
				case 169:
					return 5995;
				case 170:
					return 6002;
				case 171:
					return 6009;
				case 172:
					return 6016;
				case 173:
					return 6023;
				case 174:
					return 6030;
				case 175:
					return 6037;
				case 176:
					return 6044;
				case 177:
					return 6051;
				case 178:
					return 6058;
				case 179:
					return 6065;
				case 180:
					return 6072;
				case 181:
					return 6079;
				case 182:
					return 6086;
				case 183:
					return 6093;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				case 185:
					return 6177;
				case 186:
					return 6184;
				case 187:
					return 6191;
				case 188:
					return 6198;
				case 189:
					return 6205;
				case 190:
					return 6212;
				case 191:
					return 6219;
				case 192:
					return 6226;
				case 193:
					return 6233;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				case 195:
					return 6574;
				case 196:
					return 6581;
				case 197:
					return 6588;
				case 198:
					return 6595;
				case 199:
					return 6602;
				case 200:
					return 6609;
				case 201:
					return 6616;
				case 202:
					return 6623;
				case 203:
					return 6630;
				case 204:
					return 6637;
				case 205:
					return 6644;
				case 206:
					return 6651;
				case 207:
					return 6658;
				case 208:
					return 6665;
				case 209:
					return 6672;
				case 210:
					return 6679;
				case 211:
					return 6686;
				case 212:
					return 6693;
				case 213:
					return 6700;
				case 214:
					return 6707;
				case 215:
					return 6714;
				case 216:
					return 6721;
				case 217:
					return 6728;
				case 218:
					return 6735;
				case 219:
					return 6742;
				case 220:
					return 6749;
				case 221:
					return 6756;
				case 222:
					return 6763;
				case 223:
					return 6770;
				case 224:
					return 6777;
				case 225:
					return 6784;
				case 226:
					return 6791;
				case 227:
					return 6798;
				case 228:
					return 6805;
				case 229:
					return 6812;
				case 230:
					return 6819;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				case 232:
					return 7296;
				case 233:
					return 7303;
				case 234:
					return 7310;
				case 235:
					return 7317;
				case 236:
					return 7324;
				case 237:
					return 7331;
				case 238:
					return 7338;
				case 239:
					return 7345;
				case 240:
					return 7352;
				case 241:
					return 7359;
				case 242:
					return 7366;
				case 243:
					return 7373;
				case 244:
					return 7380;
				case 245:
					return 7387;
				case 246:
					return 7394;
				case 247:
					return 7401;
				case 248:
					return 7408;
				case 249:
					return 7415;
				case 250:
					return 7422;
				case 251:
					return 7429;
				case 252:
					return 7436;
				case 253:
					return 7443;
				case 254:
					return 7450;
				case 255:
					return 7457;
				case 256:
					return 7464;
				case 257:
					return 7471;
				case 258:
					return 7478;
				case 259:
					return 7485;
				case 260:
					return 7492;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				case 262:
					return 8019;
				case 263:
					return 8026;
				case 264:
					return 8033;
				case 265:
					return 8040;
				case 266:
					return 8047;
				case 267:
					return 8054;
				case 268:
					return 8061;
				case 269:
					return 8068;
				case 270:
					return 8075;
				case 271:
					return 8536;
				case 272:
					return 8543;
				case 273:
					return 8550;
				case 274:
					return 8557;
				case 275:
					return 8564;
				case 276:
					return 8571;
				case 277:
					return 8578;
				case 278:
					return 8585;
				case 279:
					return 8592;
				case 280:
					return 8599;
				case 281:
					return 8981;
				case 282:
					return 8988;
				case 283:
					return 8995;
				case 284:
					return 9002;
				case 285:
					return 9009;
				case 286:
					return 9016;
				case 287:
					return 9023;
				case 288:
					return 9030;
				case 289:
					return 9037;
				case 290:
					return 9044;
				case 291:
					return 9051;
				case 292:
					return 9057;
				case 293:
					return 9063;
				case 294:
					return 9069;
				case 295:
					return 9076;
				case 296:
					return 9083;
				case 297:
					return 9090;
				case 298:
					return 9097;
				case 299:
					return 9104;
				case 300:
					return 9111;
				case 301:
					return 9118;
				case 302:
					return 9125;
				case 303:
					return 9132;
				case 304:
					return 9139;
				case 305:
					return 9145;
				case 306:
					return 9151;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				case 1:
					return 1637;
				case 2:
					return 1644;
				case 3:
					return 1651;
				case 4:
					return 1658;
				case 5:
					return 1665;
				case 6:
					return 1672;
				case 7:
					return 1679;
				case 8:
					return 1686;
				case 9:
					return 1693;
				case 10:
					return 1700;
				case 11:
					return 1706;
				case 12:
					return 1712;
				case 13:
					return 1718;
				case 14:
					return 1796;
				case 15:
					return 1803;
				case 16:
					return 1810;
				case 17:
					return 1817;
				case 18:
					return 1824;
				case 19:
					return 1831;
				case 20:
					return 1838;
				case 21:
					return 1845;
				case 22:
					return 1852;
				case 23:
					return 1859;
				case 24:
					return 1865;
				case 25:
					return 1871;
				case 26:
					return 2166;
				case 27:
					return 2173;
				case 28:
					return 2180;
				case 29:
					return 2187;
				case 30:
					return 2194;
				case 31:
					return 2201;
				case 32:
					return 2208;
				case 33:
					return 2215;
				case 34:
					return 2222;
				case 35:
					return 2229;
				case 36:
					return 2236;
				case 37:
					return 2242;
				case 38:
					return 2248;
				case 39:
					return 2829;
				case 40:
					return 2836;
				case 41:
					return 2843;
				case 42:
					return 2850;
				case 43:
					return 2857;
				case 44:
					return 2864;
				case 45:
					return 2871;
				case 46:
					return 2878;
				case 47:
					return 2885;
				case 48:
					return 2892;
				case 49:
					return 2899;
				case 50:
					return 2905;
				case 51:
					return 2911;
				case 52:
					return 2953;
				case 53:
					return 2960;
				case 54:
					return 2967;
				case 55:
					return 2974;
				case 56:
					return 2981;
				case 57:
					return 2988;
				case 58:
					return 2995;
				case 59:
					return 3002;
				case 60:
					return 3009;
				case 61:
					return 3016;
				case 62:
					return 3023;
				case 63:
					return 3029;
				case 64:
					return 3035;
				case 65:
					return 3236;
				case 66:
					return 3244;
				case 67:
					return 3252;
				case 68:
					return 3260;
				case 69:
					return 3268;
				case 70:
					return 3276;
				case 71:
					return 3284;
				case 72:
					return 3292;
				case 73:
					return 3300;
				case 74:
					return 3308;
				case 75:
					return 3316;
				case 76:
					return 3324;
				case 77:
					return 3332;
				case 78:
					return 3340;
				case 79:
					return 3348;
				case 80:
					return 3356;
				case 81:
					return 3364;
				case 82:
					return 3372;
				case 83:
					return 3380;
				case 84:
					return 3388;
				case 85:
					return 3396;
				case 86:
					return 3403;
				case 87:
					return 3410;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				case 89:
					return 4040;
				case 90:
					return 4048;
				case 91:
					return 4056;
				case 92:
					return 4064;
				case 93:
					return 4072;
				case 94:
					return 4080;
				case 95:
					return 4088;
				case 96:
					return 4096;
				case 97:
					return 4104;
				case 98:
					return 4112;
				case 99:
					return 4120;
				case 100:
					return 4128;
				case 101:
					return 4136;
				case 102:
					return 4144;
				case 103:
					return 4152;
				case 104:
					return 4160;
				case 105:
					return 4168;
				case 106:
					return 4176;
				case 107:
					return 4184;
				case 108:
					return 4192;
				case 109:
					return 4200;
				case 110:
					return 4208;
				case 111:
					return 4216;
				case 112:
					return 4224;
				case 113:
					return 4232;
				case 114:
					return 4240;
				case 115:
					return 4248;
				case 116:
					return 4256;
				case 117:
					return 4264;
				case 118:
					return 4272;
				case 119:
					return 4280;
				case 120:
					return 4288;
				case 121:
					return 4296;
				case 122:
					return 4304;
				case 123:
					return 4312;
				case 124:
					return 4320;
				case 125:
					return 4328;
				case 126:
					return 4336;
				case 127:
					return 4344;
				case 128:
					return 4352;
				case 129:
					return 4360;
				case 130:
					return 4368;
				case 131:
					return 4376;
				case 132:
					return 4384;
				case 133:
					return 4392;
				case 134:
					return 4400;
				case 135:
					return 4408;
				case 136:
					return 4416;
				case 137:
					return 4424;
				case 138:
					return 4432;
				case 139:
					return 4440;
				case 140:
					return 4448;
				case 141:
					return 4456;
				case 142:
					return 4464;
				case 143:
					return 4472;
				case 144:
					return 4480;
				case 145:
					return 4488;
				case 146:
					return 4496;
				case 147:
					return 4504;
				case 148:
					return 4512;
				case 149:
					return 4520;
				case 150:
					return 4528;
				case 151:
					return 4536;
				case 152:
					return 4544;
				case 153:
					return 4552;
				case 154:
					return 4560;
				case 155:
					return 4568;
				case 156:
					return 4576;
				case 157:
					return 4584;
				case 158:
					return 5477;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				case 160:
					return 5933;
				case 161:
					return 5940;
				case 162:
					return 5947;
				case 163:
					return 5954;
				case 164:
					return 5961;
				case 165:
					return 5968;
				case 166:
					return 5975;
				case 167:
					return 5982;
				case 168:
					return 5989;
				case 169:
					return 5996;
				case 170:
					return 6003;
				case 171:
					return 6010;
				case 172:
					return 6017;
				case 173:
					return 6024;
				case 174:
					return 6031;
				case 175:
					return 6038;
				case 176:
					return 6045;
				case 177:
					return 6052;
				case 178:
					return 6059;
				case 179:
					return 6066;
				case 180:
					return 6073;
				case 181:
					return 6080;
				case 182:
					return 6087;
				case 183:
					return 6094;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				case 185:
					return 6178;
				case 186:
					return 6185;
				case 187:
					return 6192;
				case 188:
					return 6199;
				case 189:
					return 6206;
				case 190:
					return 6213;
				case 191:
					return 6220;
				case 192:
					return 6227;
				case 193:
					return 6234;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				case 195:
					return 6575;
				case 196:
					return 6582;
				case 197:
					return 6589;
				case 198:
					return 6596;
				case 199:
					return 6603;
				case 200:
					return 6610;
				case 201:
					return 6617;
				case 202:
					return 6624;
				case 203:
					return 6631;
				case 204:
					return 6638;
				case 205:
					return 6645;
				case 206:
					return 6652;
				case 207:
					return 6659;
				case 208:
					return 6666;
				case 209:
					return 6673;
				case 210:
					return 6680;
				case 211:
					return 6687;
				case 212:
					return 6694;
				case 213:
					return 6701;
				case 214:
					return 6708;
				case 215:
					return 6715;
				case 216:
					return 6722;
				case 217:
					return 6729;
				case 218:
					return 6736;
				case 219:
					return 6743;
				case 220:
					return 6750;
				case 221:
					return 6757;
				case 222:
					return 6764;
				case 223:
					return 6771;
				case 224:
					return 6778;
				case 225:
					return 6785;
				case 226:
					return 6792;
				case 227:
					return 6799;
				case 228:
					return 6806;
				case 229:
					return 6813;
				case 230:
					return 6820;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				case 232:
					return 7297;
				case 233:
					return 7304;
				case 234:
					return 7311;
				case 235:
					return 7318;
				case 236:
					return 7325;
				case 237:
					return 7332;
				case 238:
					return 7339;
				case 239:
					return 7346;
				case 240:
					return 7353;
				case 241:
					return 7360;
				case 242:
					return 7367;
				case 243:
					return 7374;
				case 244:
					return 7381;
				case 245:
					return 7388;
				case 246:
					return 7395;
				case 247:
					return 7402;
				case 248:
					return 7409;
				case 249:
					return 7416;
				case 250:
					return 7423;
				case 251:
					return 7430;
				case 252:
					return 7437;
				case 253:
					return 7444;
				case 254:
					return 7451;
				case 255:
					return 7458;
				case 256:
					return 7465;
				case 257:
					return 7472;
				case 258:
					return 7479;
				case 259:
					return 7486;
				case 260:
					return 7493;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				case 262:
					return 8020;
				case 263:
					return 8027;
				case 264:
					return 8034;
				case 265:
					return 8041;
				case 266:
					return 8048;
				case 267:
					return 8055;
				case 268:
					return 8062;
				case 269:
					return 8069;
				case 270:
					return 8076;
				case 271:
					return 8537;
				case 272:
					return 8544;
				case 273:
					return 8551;
				case 274:
					return 8558;
				case 275:
					return 8565;
				case 276:
					return 8572;
				case 277:
					return 8579;
				case 278:
					return 8586;
				case 279:
					return 8593;
				case 280:
					return 8600;
				case 281:
					return 8982;
				case 282:
					return 8989;
				case 283:
					return 8996;
				case 284:
					return 9003;
				case 285:
					return 9010;
				case 286:
					return 9017;
				case 287:
					return 9024;
				case 288:
					return 9031;
				case 289:
					return 9038;
				case 290:
					return 9045;
				case 291:
					return 9052;
				case 292:
					return 9058;
				case 293:
					return 9064;
				case 294:
					return 9070;
				case 295:
					return 9077;
				case 296:
					return 9084;
				case 297:
					return 9091;
				case 298:
					return 9098;
				case 299:
					return 9105;
				case 300:
					return 9112;
				case 301:
					return 9119;
				case 302:
					return 9126;
				case 303:
					return 9133;
				case 304:
					return 9140;
				case 305:
					return 9146;
				case 306:
					return 9152;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				case 1:
					return 1638;
				case 2:
					return 1645;
				case 3:
					return 1652;
				case 4:
					return 1659;
				case 5:
					return 1666;
				case 6:
					return 1673;
				case 7:
					return 1680;
				case 8:
					return 1687;
				case 9:
					return 1694;
				case 10:
					return 1701;
				case 11:
					return 1707;
				case 12:
					return 1713;
				case 13:
					return 1719;
				case 14:
					return 1797;
				case 15:
					return 1804;
				case 16:
					return 1811;
				case 17:
					return 1818;
				case 18:
					return 1825;
				case 19:
					return 1832;
				case 20:
					return 1839;
				case 21:
					return 1846;
				case 22:
					return 1853;
				case 23:
					return 1860;
				case 24:
					return 1866;
				case 25:
					return 1872;
				case 26:
					return 2167;
				case 27:
					return 2174;
				case 28:
					return 2181;
				case 29:
					return 2188;
				case 30:
					return 2195;
				case 31:
					return 2202;
				case 32:
					return 2209;
				case 33:
					return 2216;
				case 34:
					return 2223;
				case 35:
					return 2230;
				case 36:
					return 2237;
				case 37:
					return 2243;
				case 38:
					return 2249;
				case 39:
					return 2830;
				case 40:
					return 2837;
				case 41:
					return 2844;
				case 42:
					return 2851;
				case 43:
					return 2858;
				case 44:
					return 2865;
				case 45:
					return 2872;
				case 46:
					return 2879;
				case 47:
					return 2886;
				case 48:
					return 2893;
				case 49:
					return 2900;
				case 50:
					return 2906;
				case 51:
					return 2912;
				case 52:
					return 2954;
				case 53:
					return 2961;
				case 54:
					return 2968;
				case 55:
					return 2975;
				case 56:
					return 2982;
				case 57:
					return 2989;
				case 58:
					return 2996;
				case 59:
					return 3003;
				case 60:
					return 3010;
				case 61:
					return 3017;
				case 62:
					return 3024;
				case 63:
					return 3030;
				case 64:
					return 3036;
				case 65:
					return 3237;
				case 66:
					return 3245;
				case 67:
					return 3253;
				case 68:
					return 3261;
				case 69:
					return 3269;
				case 70:
					return 3277;
				case 71:
					return 3285;
				case 72:
					return 3293;
				case 73:
					return 3301;
				case 74:
					return 3309;
				case 75:
					return 3317;
				case 76:
					return 3325;
				case 77:
					return 3333;
				case 78:
					return 3341;
				case 79:
					return 3349;
				case 80:
					return 3357;
				case 81:
					return 3365;
				case 82:
					return 3373;
				case 83:
					return 3381;
				case 84:
					return 3389;
				case 85:
					return 3397;
				case 86:
					return 3404;
				case 87:
					return 3411;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				case 89:
					return 4041;
				case 90:
					return 4049;
				case 91:
					return 4057;
				case 92:
					return 4065;
				case 93:
					return 4073;
				case 94:
					return 4081;
				case 95:
					return 4089;
				case 96:
					return 4097;
				case 97:
					return 4105;
				case 98:
					return 4113;
				case 99:
					return 4121;
				case 100:
					return 4129;
				case 101:
					return 4137;
				case 102:
					return 4145;
				case 103:
					return 4153;
				case 104:
					return 4161;
				case 105:
					return 4169;
				case 106:
					return 4177;
				case 107:
					return 4185;
				case 108:
					return 4193;
				case 109:
					return 4201;
				case 110:
					return 4209;
				case 111:
					return 4217;
				case 112:
					return 4225;
				case 113:
					return 4233;
				case 114:
					return 4241;
				case 115:
					return 4249;
				case 116:
					return 4257;
				case 117:
					return 4265;
				case 118:
					return 4273;
				case 119:
					return 4281;
				case 120:
					return 4289;
				case 121:
					return 4297;
				case 122:
					return 4305;
				case 123:
					return 4313;
				case 124:
					return 4321;
				case 125:
					return 4329;
				case 126:
					return 4337;
				case 127:
					return 4345;
				case 128:
					return 4353;
				case 129:
					return 4361;
				case 130:
					return 4369;
				case 131:
					return 4377;
				case 132:
					return 4385;
				case 133:
					return 4393;
				case 134:
					return 4401;
				case 135:
					return 4409;
				case 136:
					return 4417;
				case 137:
					return 4425;
				case 138:
					return 4433;
				case 139:
					return 4441;
				case 140:
					return 4449;
				case 141:
					return 4457;
				case 142:
					return 4465;
				case 143:
					return 4473;
				case 144:
					return 4481;
				case 145:
					return 4489;
				case 146:
					return 4497;
				case 147:
					return 4505;
				case 148:
					return 4513;
				case 149:
					return 4521;
				case 150:
					return 4529;
				case 151:
					return 4537;
				case 152:
					return 4545;
				case 153:
					return 4553;
				case 154:
					return 4561;
				case 155:
					return 4569;
				case 156:
					return 4577;
				case 157:
					return 4585;
				case 158:
					return 5478;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				case 160:
					return 5934;
				case 161:
					return 5941;
				case 162:
					return 5948;
				case 163:
					return 5955;
				case 164:
					return 5962;
				case 165:
					return 5969;
				case 166:
					return 5976;
				case 167:
					return 5983;
				case 168:
					return 5990;
				case 169:
					return 5997;
				case 170:
					return 6004;
				case 171:
					return 6011;
				case 172:
					return 6018;
				case 173:
					return 6025;
				case 174:
					return 6032;
				case 175:
					return 6039;
				case 176:
					return 6046;
				case 177:
					return 6053;
				case 178:
					return 6060;
				case 179:
					return 6067;
				case 180:
					return 6074;
				case 181:
					return 6081;
				case 182:
					return 6088;
				case 183:
					return 6095;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				case 185:
					return 6179;
				case 186:
					return 6186;
				case 187:
					return 6193;
				case 188:
					return 6200;
				case 189:
					return 6207;
				case 190:
					return 6214;
				case 191:
					return 6221;
				case 192:
					return 6228;
				case 193:
					return 6235;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				case 195:
					return 6576;
				case 196:
					return 6583;
				case 197:
					return 6590;
				case 198:
					return 6597;
				case 199:
					return 6604;
				case 200:
					return 6611;
				case 201:
					return 6618;
				case 202:
					return 6625;
				case 203:
					return 6632;
				case 204:
					return 6639;
				case 205:
					return 6646;
				case 206:
					return 6653;
				case 207:
					return 6660;
				case 208:
					return 6667;
				case 209:
					return 6674;
				case 210:
					return 6681;
				case 211:
					return 6688;
				case 212:
					return 6695;
				case 213:
					return 6702;
				case 214:
					return 6709;
				case 215:
					return 6716;
				case 216:
					return 6723;
				case 217:
					return 6730;
				case 218:
					return 6737;
				case 219:
					return 6744;
				case 220:
					return 6751;
				case 221:
					return 6758;
				case 222:
					return 6765;
				case 223:
					return 6772;
				case 224:
					return 6779;
				case 225:
					return 6786;
				case 226:
					return 6793;
				case 227:
					return 6800;
				case 228:
					return 6807;
				case 229:
					return 6814;
				case 230:
					return 6821;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				case 232:
					return 7298;
				case 233:
					return 7305;
				case 234:
					return 7312;
				case 235:
					return 7319;
				case 236:
					return 7326;
				case 237:
					return 7333;
				case 238:
					return 7340;
				case 239:
					return 7347;
				case 240:
					return 7354;
				case 241:
					return 7361;
				case 242:
					return 7368;
				case 243:
					return 7375;
				case 244:
					return 7382;
				case 245:
					return 7389;
				case 246:
					return 7396;
				case 247:
					return 7403;
				case 248:
					return 7410;
				case 249:
					return 7417;
				case 250:
					return 7424;
				case 251:
					return 7431;
				case 252:
					return 7438;
				case 253:
					return 7445;
				case 254:
					return 7452;
				case 255:
					return 7459;
				case 256:
					return 7466;
				case 257:
					return 7473;
				case 258:
					return 7480;
				case 259:
					return 7487;
				case 260:
					return 7494;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				case 262:
					return 8021;
				case 263:
					return 8028;
				case 264:
					return 8035;
				case 265:
					return 8042;
				case 266:
					return 8049;
				case 267:
					return 8056;
				case 268:
					return 8063;
				case 269:
					return 8070;
				case 270:
					return 8077;
				case 271:
					return 8538;
				case 272:
					return 8545;
				case 273:
					return 8552;
				case 274:
					return 8559;
				case 275:
					return 8566;
				case 276:
					return 8573;
				case 277:
					return 8580;
				case 278:
					return 8587;
				case 279:
					return 8594;
				case 280:
					return 8601;
				case 281:
					return 8983;
				case 282:
					return 8990;
				case 283:
					return 8997;
				case 284:
					return 9004;
				case 285:
					return 9011;
				case 286:
					return 9018;
				case 287:
					return 9025;
				case 288:
					return 9032;
				case 289:
					return 9039;
				case 290:
					return 9046;
				case 291:
					return 9053;
				case 292:
					return 9059;
				case 293:
					return 9065;
				case 294:
					return 9071;
				case 295:
					return 9078;
				case 296:
					return 9085;
				case 297:
					return 9092;
				case 298:
					return 9099;
				case 299:
					return 9106;
				case 300:
					return 9113;
				case 301:
					return 9120;
				case 302:
					return 9127;
				case 303:
					return 9134;
				case 304:
					return 9141;
				case 305:
					return 9147;
				case 306:
					return 9153;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				case 1:
					return 1639;
				case 2:
					return 1646;
				case 3:
					return 1653;
				case 4:
					return 1660;
				case 5:
					return 1667;
				case 6:
					return 1674;
				case 7:
					return 1681;
				case 8:
					return 1688;
				case 9:
					return 1695;
				case 10:
					return 1702;
				case 11:
					return 1708;
				case 12:
					return 1714;
				case 13:
					return 1720;
				case 14:
					return 1798;
				case 15:
					return 1805;
				case 16:
					return 1812;
				case 17:
					return 1819;
				case 18:
					return 1826;
				case 19:
					return 1833;
				case 20:
					return 1840;
				case 21:
					return 1847;
				case 22:
					return 1854;
				case 23:
					return 1861;
				case 24:
					return 1867;
				case 25:
					return 1873;
				case 26:
					return 2168;
				case 27:
					return 2175;
				case 28:
					return 2182;
				case 29:
					return 2189;
				case 30:
					return 2196;
				case 31:
					return 2203;
				case 32:
					return 2210;
				case 33:
					return 2217;
				case 34:
					return 2224;
				case 35:
					return 2231;
				case 36:
					return 2238;
				case 37:
					return 2244;
				case 38:
					return 2250;
				case 39:
					return 2831;
				case 40:
					return 2838;
				case 41:
					return 2845;
				case 42:
					return 2852;
				case 43:
					return 2859;
				case 44:
					return 2866;
				case 45:
					return 2873;
				case 46:
					return 2880;
				case 47:
					return 2887;
				case 48:
					return 2894;
				case 49:
					return 2901;
				case 50:
					return 2907;
				case 51:
					return 2913;
				case 52:
					return 2955;
				case 53:
					return 2962;
				case 54:
					return 2969;
				case 55:
					return 2976;
				case 56:
					return 2983;
				case 57:
					return 2990;
				case 58:
					return 2997;
				case 59:
					return 3004;
				case 60:
					return 3011;
				case 61:
					return 3018;
				case 62:
					return 3025;
				case 63:
					return 3031;
				case 64:
					return 3037;
				case 65:
					return 3238;
				case 66:
					return 3246;
				case 67:
					return 3254;
				case 68:
					return 3262;
				case 69:
					return 3270;
				case 70:
					return 3278;
				case 71:
					return 3286;
				case 72:
					return 3294;
				case 73:
					return 3302;
				case 74:
					return 3310;
				case 75:
					return 3318;
				case 76:
					return 3326;
				case 77:
					return 3334;
				case 78:
					return 3342;
				case 79:
					return 3350;
				case 80:
					return 3358;
				case 81:
					return 3366;
				case 82:
					return 3374;
				case 83:
					return 3382;
				case 84:
					return 3390;
				case 85:
					return 3398;
				case 86:
					return 3405;
				case 87:
					return 3412;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				case 89:
					return 4042;
				case 90:
					return 4050;
				case 91:
					return 4058;
				case 92:
					return 4066;
				case 93:
					return 4074;
				case 94:
					return 4082;
				case 95:
					return 4090;
				case 96:
					return 4098;
				case 97:
					return 4106;
				case 98:
					return 4114;
				case 99:
					return 4122;
				case 100:
					return 4130;
				case 101:
					return 4138;
				case 102:
					return 4146;
				case 103:
					return 4154;
				case 104:
					return 4162;
				case 105:
					return 4170;
				case 106:
					return 4178;
				case 107:
					return 4186;
				case 108:
					return 4194;
				case 109:
					return 4202;
				case 110:
					return 4210;
				case 111:
					return 4218;
				case 112:
					return 4226;
				case 113:
					return 4234;
				case 114:
					return 4242;
				case 115:
					return 4250;
				case 116:
					return 4258;
				case 117:
					return 4266;
				case 118:
					return 4274;
				case 119:
					return 4282;
				case 120:
					return 4290;
				case 121:
					return 4298;
				case 122:
					return 4306;
				case 123:
					return 4314;
				case 124:
					return 4322;
				case 125:
					return 4330;
				case 126:
					return 4338;
				case 127:
					return 4346;
				case 128:
					return 4354;
				case 129:
					return 4362;
				case 130:
					return 4370;
				case 131:
					return 4378;
				case 132:
					return 4386;
				case 133:
					return 4394;
				case 134:
					return 4402;
				case 135:
					return 4410;
				case 136:
					return 4418;
				case 137:
					return 4426;
				case 138:
					return 4434;
				case 139:
					return 4442;
				case 140:
					return 4450;
				case 141:
					return 4458;
				case 142:
					return 4466;
				case 143:
					return 4474;
				case 144:
					return 4482;
				case 145:
					return 4490;
				case 146:
					return 4498;
				case 147:
					return 4506;
				case 148:
					return 4514;
				case 149:
					return 4522;
				case 150:
					return 4530;
				case 151:
					return 4538;
				case 152:
					return 4546;
				case 153:
					return 4554;
				case 154:
					return 4562;
				case 155:
					return 4570;
				case 156:
					return 4578;
				case 157:
					return 4586;
				case 158:
					return 5479;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				case 160:
					return 5935;
				case 161:
					return 5942;
				case 162:
					return 5949;
				case 163:
					return 5956;
				case 164:
					return 5963;
				case 165:
					return 5970;
				case 166:
					return 5977;
				case 167:
					return 5984;
				case 168:
					return 5991;
				case 169:
					return 5998;
				case 170:
					return 6005;
				case 171:
					return 6012;
				case 172:
					return 6019;
				case 173:
					return 6026;
				case 174:
					return 6033;
				case 175:
					return 6040;
				case 176:
					return 6047;
				case 177:
					return 6054;
				case 178:
					return 6061;
				case 179:
					return 6068;
				case 180:
					return 6075;
				case 181:
					return 6082;
				case 182:
					return 6089;
				case 183:
					return 6096;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				case 185:
					return 6180;
				case 186:
					return 6187;
				case 187:
					return 6194;
				case 188:
					return 6201;
				case 189:
					return 6208;
				case 190:
					return 6215;
				case 191:
					return 6222;
				case 192:
					return 6229;
				case 193:
					return 6236;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				case 195:
					return 6577;
				case 196:
					return 6584;
				case 197:
					return 6591;
				case 198:
					return 6598;
				case 199:
					return 6605;
				case 200:
					return 6612;
				case 201:
					return 6619;
				case 202:
					return 6626;
				case 203:
					return 6633;
				case 204:
					return 6640;
				case 205:
					return 6647;
				case 206:
					return 6654;
				case 207:
					return 6661;
				case 208:
					return 6668;
				case 209:
					return 6675;
				case 210:
					return 6682;
				case 211:
					return 6689;
				case 212:
					return 6696;
				case 213:
					return 6703;
				case 214:
					return 6710;
				case 215:
					return 6717;
				case 216:
					return 6724;
				case 217:
					return 6731;
				case 218:
					return 6738;
				case 219:
					return 6745;
				case 220:
					return 6752;
				case 221:
					return 6759;
				case 222:
					return 6766;
				case 223:
					return 6773;
				case 224:
					return 6780;
				case 225:
					return 6787;
				case 226:
					return 6794;
				case 227:
					return 6801;
				case 228:
					return 6808;
				case 229:
					return 6815;
				case 230:
					return 6822;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				case 232:
					return 7299;
				case 233:
					return 7306;
				case 234:
					return 7313;
				case 235:
					return 7320;
				case 236:
					return 7327;
				case 237:
					return 7334;
				case 238:
					return 7341;
				case 239:
					return 7348;
				case 240:
					return 7355;
				case 241:
					return 7362;
				case 242:
					return 7369;
				case 243:
					return 7376;
				case 244:
					return 7383;
				case 245:
					return 7390;
				case 246:
					return 7397;
				case 247:
					return 7404;
				case 248:
					return 7411;
				case 249:
					return 7418;
				case 250:
					return 7425;
				case 251:
					return 7432;
				case 252:
					return 7439;
				case 253:
					return 7446;
				case 254:
					return 7453;
				case 255:
					return 7460;
				case 256:
					return 7467;
				case 257:
					return 7474;
				case 258:
					return 7481;
				case 259:
					return 7488;
				case 260:
					return 7495;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				case 262:
					return 8022;
				case 263:
					return 8029;
				case 264:
					return 8036;
				case 265:
					return 8043;
				case 266:
					return 8050;
				case 267:
					return 8057;
				case 268:
					return 8064;
				case 269:
					return 8071;
				case 270:
					return 8078;
				case 271:
					return 8539;
				case 272:
					return 8546;
				case 273:
					return 8553;
				case 274:
					return 8560;
				case 275:
					return 8567;
				case 276:
					return 8574;
				case 277:
					return 8581;
				case 278:
					return 8588;
				case 279:
					return 8595;
				case 280:
					return 8602;
				case 281:
					return 8984;
				case 282:
					return 8991;
				case 283:
					return 8998;
				case 284:
					return 9005;
				case 285:
					return 9012;
				case 286:
					return 9019;
				case 287:
					return 9026;
				case 288:
					return 9033;
				case 289:
					return 9040;
				case 290:
					return 9047;
				case 291:
					return 9054;
				case 292:
					return 9060;
				case 293:
					return 9066;
				case 294:
					return 9072;
				case 295:
					return 9079;
				case 296:
					return 9086;
				case 297:
					return 9093;
				case 298:
					return 9100;
				case 299:
					return 9107;
				case 300:
					return 9114;
				case 301:
					return 9121;
				case 302:
					return 9128;
				case 303:
					return 9135;
				case 304:
					return 9142;
				case 305:
					return 9148;
				case 306:
					return 9154;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				case 1:
					return 1640;
				case 2:
					return 1647;
				case 3:
					return 1654;
				case 4:
					return 1661;
				case 5:
					return 1668;
				case 6:
					return 1675;
				case 7:
					return 1682;
				case 8:
					return 1689;
				case 9:
					return 1696;
				case 10:
					return 1703;
				case 11:
					return 1709;
				case 12:
					return 1715;
				case 13:
					return 1721;
				case 14:
					return 1799;
				case 15:
					return 1806;
				case 16:
					return 1813;
				case 17:
					return 1820;
				case 18:
					return 1827;
				case 19:
					return 1834;
				case 20:
					return 1841;
				case 21:
					return 1848;
				case 22:
					return 1855;
				case 23:
					return 1862;
				case 24:
					return 1868;
				case 25:
					return 1874;
				case 26:
					return 2169;
				case 27:
					return 2176;
				case 28:
					return 2183;
				case 29:
					return 2190;
				case 30:
					return 2197;
				case 31:
					return 2204;
				case 32:
					return 2211;
				case 33:
					return 2218;
				case 34:
					return 2225;
				case 35:
					return 2232;
				case 36:
					return 2239;
				case 37:
					return 2245;
				case 38:
					return 2251;
				case 39:
					return 2832;
				case 40:
					return 2839;
				case 41:
					return 2846;
				case 42:
					return 2853;
				case 43:
					return 2860;
				case 44:
					return 2867;
				case 45:
					return 2874;
				case 46:
					return 2881;
				case 47:
					return 2888;
				case 48:
					return 2895;
				case 49:
					return 2902;
				case 50:
					return 2908;
				case 51:
					return 2914;
				case 52:
					return 2956;
				case 53:
					return 2963;
				case 54:
					return 2970;
				case 55:
					return 2977;
				case 56:
					return 2984;
				case 57:
					return 2991;
				case 58:
					return 2998;
				case 59:
					return 3005;
				case 60:
					return 3012;
				case 61:
					return 3019;
				case 62:
					return 3026;
				case 63:
					return 3032;
				case 64:
					return 3038;
				case 65:
					return 3239;
				case 66:
					return 3247;
				case 67:
					return 3255;
				case 68:
					return 3263;
				case 69:
					return 3271;
				case 70:
					return 3279;
				case 71:
					return 3287;
				case 72:
					return 3295;
				case 73:
					return 3303;
				case 74:
					return 3311;
				case 75:
					return 3319;
				case 76:
					return 3327;
				case 77:
					return 3335;
				case 78:
					return 3343;
				case 79:
					return 3351;
				case 80:
					return 3359;
				case 81:
					return 3367;
				case 82:
					return 3375;
				case 83:
					return 3383;
				case 84:
					return 3391;
				case 85:
					return 3399;
				case 86:
					return 3406;
				case 87:
					return 3413;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				case 89:
					return 4043;
				case 90:
					return 4051;
				case 91:
					return 4059;
				case 92:
					return 4067;
				case 93:
					return 4075;
				case 94:
					return 4083;
				case 95:
					return 4091;
				case 96:
					return 4099;
				case 97:
					return 4107;
				case 98:
					return 4115;
				case 99:
					return 4123;
				case 100:
					return 4131;
				case 101:
					return 4139;
				case 102:
					return 4147;
				case 103:
					return 4155;
				case 104:
					return 4163;
				case 105:
					return 4171;
				case 106:
					return 4179;
				case 107:
					return 4187;
				case 108:
					return 4195;
				case 109:
					return 4203;
				case 110:
					return 4211;
				case 111:
					return 4219;
				case 112:
					return 4227;
				case 113:
					return 4235;
				case 114:
					return 4243;
				case 115:
					return 4251;
				case 116:
					return 4259;
				case 117:
					return 4267;
				case 118:
					return 4275;
				case 119:
					return 4283;
				case 120:
					return 4291;
				case 121:
					return 4299;
				case 122:
					return 4307;
				case 123:
					return 4315;
				case 124:
					return 4323;
				case 125:
					return 4331;
				case 126:
					return 4339;
				case 127:
					return 4347;
				case 128:
					return 4355;
				case 129:
					return 4363;
				case 130:
					return 4371;
				case 131:
					return 4379;
				case 132:
					return 4387;
				case 133:
					return 4395;
				case 134:
					return 4403;
				case 135:
					return 4411;
				case 136:
					return 4419;
				case 137:
					return 4427;
				case 138:
					return 4435;
				case 139:
					return 4443;
				case 140:
					return 4451;
				case 141:
					return 4459;
				case 142:
					return 4467;
				case 143:
					return 4475;
				case 144:
					return 4483;
				case 145:
					return 4491;
				case 146:
					return 4499;
				case 147:
					return 4507;
				case 148:
					return 4515;
				case 149:
					return 4523;
				case 150:
					return 4531;
				case 151:
					return 4539;
				case 152:
					return 4547;
				case 153:
					return 4555;
				case 154:
					return 4563;
				case 155:
					return 4571;
				case 156:
					return 4579;
				case 157:
					return 4587;
				case 158:
					return 5480;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				case 160:
					return 5936;
				case 161:
					return 5943;
				case 162:
					return 5950;
				case 163:
					return 5957;
				case 164:
					return 5964;
				case 165:
					return 5971;
				case 166:
					return 5978;
				case 167:
					return 5985;
				case 168:
					return 5992;
				case 169:
					return 5999;
				case 170:
					return 6006;
				case 171:
					return 6013;
				case 172:
					return 6020;
				case 173:
					return 6027;
				case 174:
					return 6034;
				case 175:
					return 6041;
				case 176:
					return 6048;
				case 177:
					return 6055;
				case 178:
					return 6062;
				case 179:
					return 6069;
				case 180:
					return 6076;
				case 181:
					return 6083;
				case 182:
					return 6090;
				case 183:
					return 6097;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				case 185:
					return 6181;
				case 186:
					return 6188;
				case 187:
					return 6195;
				case 188:
					return 6202;
				case 189:
					return 6209;
				case 190:
					return 6216;
				case 191:
					return 6223;
				case 192:
					return 6230;
				case 193:
					return 6237;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				case 195:
					return 6578;
				case 196:
					return 6585;
				case 197:
					return 6592;
				case 198:
					return 6599;
				case 199:
					return 6606;
				case 200:
					return 6613;
				case 201:
					return 6620;
				case 202:
					return 6627;
				case 203:
					return 6634;
				case 204:
					return 6641;
				case 205:
					return 6648;
				case 206:
					return 6655;
				case 207:
					return 6662;
				case 208:
					return 6669;
				case 209:
					return 6676;
				case 210:
					return 6683;
				case 211:
					return 6690;
				case 212:
					return 6697;
				case 213:
					return 6704;
				case 214:
					return 6711;
				case 215:
					return 6718;
				case 216:
					return 6725;
				case 217:
					return 6732;
				case 218:
					return 6739;
				case 219:
					return 6746;
				case 220:
					return 6753;
				case 221:
					return 6760;
				case 222:
					return 6767;
				case 223:
					return 6774;
				case 224:
					return 6781;
				case 225:
					return 6788;
				case 226:
					return 6795;
				case 227:
					return 6802;
				case 228:
					return 6809;
				case 229:
					return 6816;
				case 230:
					return 6823;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				case 232:
					return 7300;
				case 233:
					return 7307;
				case 234:
					return 7314;
				case 235:
					return 7321;
				case 236:
					return 7328;
				case 237:
					return 7335;
				case 238:
					return 7342;
				case 239:
					return 7349;
				case 240:
					return 7356;
				case 241:
					return 7363;
				case 242:
					return 7370;
				case 243:
					return 7377;
				case 244:
					return 7384;
				case 245:
					return 7391;
				case 246:
					return 7398;
				case 247:
					return 7405;
				case 248:
					return 7412;
				case 249:
					return 7419;
				case 250:
					return 7426;
				case 251:
					return 7433;
				case 252:
					return 7440;
				case 253:
					return 7447;
				case 254:
					return 7454;
				case 255:
					return 7461;
				case 256:
					return 7468;
				case 257:
					return 7475;
				case 258:
					return 7482;
				case 259:
					return 7489;
				case 260:
					return 7496;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				case 262:
					return 8023;
				case 263:
					return 8030;
				case 264:
					return 8037;
				case 265:
					return 8044;
				case 266:
					return 8051;
				case 267:
					return 8058;
				case 268:
					return 8065;
				case 269:
					return 8072;
				case 270:
					return 8079;
				case 271:
					return 8540;
				case 272:
					return 8547;
				case 273:
					return 8554;
				case 274:
					return 8561;
				case 275:
					return 8568;
				case 276:
					return 8575;
				case 277:
					return 8582;
				case 278:
					return 8589;
				case 279:
					return 8596;
				case 280:
					return 8603;
				case 281:
					return 8985;
				case 282:
					return 8992;
				case 283:
					return 8999;
				case 284:
					return 9006;
				case 285:
					return 9013;
				case 286:
					return 9020;
				case 287:
					return 9027;
				case 288:
					return 9034;
				case 289:
					return 9041;
				case 290:
					return 9048;
				case 291:
					return 9055;
				case 292:
					return 9061;
				case 293:
					return 9067;
				case 294:
					return 9073;
				case 295:
					return 9080;
				case 296:
					return 9087;
				case 297:
					return 9094;
				case 298:
					return 9101;
				case 299:
					return 9108;
				case 300:
					return 9115;
				case 301:
					return 9122;
				case 302:
					return 9129;
				case 303:
					return 9136;
				case 304:
					return 9143;
				case 305:
					return 9149;
				case 306:
					return 9155;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				case 1:
					return 1642;
				case 2:
					return 1649;
				case 3:
					return 1656;
				case 4:
					return 1663;
				case 5:
					return 1670;
				case 6:
					return 1677;
				case 7:
					return 1684;
				case 8:
					return 1691;
				case 9:
					return 1698;
				case 13:
					return 1723;
				case 14:
					return 1801;
				case 15:
					return 1808;
				case 16:
					return 1815;
				case 17:
					return 1822;
				case 18:
					return 1829;
				case 19:
					return 1836;
				case 20:
					return 1843;
				case 21:
					return 1850;
				case 22:
					return 1857;
				case 26:
					return 2171;
				case 27:
					return 2178;
				case 28:
					return 2185;
				case 29:
					return 2192;
				case 30:
					return 2199;
				case 31:
					return 2206;
				case 32:
					return 2213;
				case 33:
					return 2220;
				case 34:
					return 2227;
				case 35:
					return 2234;
				case 39:
					return 2834;
				case 40:
					return 2841;
				case 41:
					return 2848;
				case 42:
					return 2855;
				case 43:
					return 2862;
				case 44:
					return 2869;
				case 45:
					return 2876;
				case 46:
					return 2883;
				case 47:
					return 2890;
				case 48:
					return 2897;
				case 52:
					return 2958;
				case 53:
					return 2965;
				case 54:
					return 2972;
				case 55:
					return 2979;
				case 56:
					return 2986;
				case 57:
					return 2993;
				case 58:
					return 3000;
				case 59:
					return 3007;
				case 60:
					return 3014;
				case 61:
					return 3021;
				case 65:
					return 3242;
				case 66:
					return 3250;
				case 67:
					return 3258;
				case 68:
					return 3266;
				case 69:
					return 3274;
				case 70:
					return 3282;
				case 71:
					return 3290;
				case 72:
					return 3298;
				case 73:
					return 3306;
				case 74:
					return 3314;
				case 75:
					return 3322;
				case 76:
					return 3330;
				case 77:
					return 3338;
				case 78:
					return 3346;
				case 79:
					return 3354;
				case 80:
					return 3362;
				case 81:
					return 3370;
				case 82:
					return 3378;
				case 83:
					return 3386;
				case 84:
					return 3394;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				case 89:
					return 4046;
				case 90:
					return 4054;
				case 91:
					return 4062;
				case 92:
					return 4070;
				case 93:
					return 4078;
				case 94:
					return 4086;
				case 95:
					return 4094;
				case 96:
					return 4102;
				case 97:
					return 4110;
				case 98:
					return 4118;
				case 99:
					return 4126;
				case 100:
					return 4134;
				case 101:
					return 4142;
				case 102:
					return 4150;
				case 103:
					return 4158;
				case 104:
					return 4166;
				case 105:
					return 4174;
				case 106:
					return 4182;
				case 107:
					return 4190;
				case 108:
					return 4198;
				case 109:
					return 4206;
				case 110:
					return 4214;
				case 111:
					return 4222;
				case 112:
					return 4230;
				case 113:
					return 4238;
				case 114:
					return 4246;
				case 115:
					return 4254;
				case 116:
					return 4262;
				case 117:
					return 4270;
				case 118:
					return 4278;
				case 119:
					return 4286;
				case 120:
					return 4294;
				case 121:
					return 4302;
				case 122:
					return 4310;
				case 123:
					return 4318;
				case 124:
					return 4326;
				case 125:
					return 4334;
				case 126:
					return 4342;
				case 127:
					return 4350;
				case 128:
					return 4358;
				case 129:
					return 4366;
				case 130:
					return 4374;
				case 131:
					return 4382;
				case 132:
					return 4390;
				case 133:
					return 4398;
				case 134:
					return 4406;
				case 135:
					return 4414;
				case 136:
					return 4422;
				case 137:
					return 4430;
				case 138:
					return 4438;
				case 139:
					return 4446;
				case 140:
					return 4454;
				case 141:
					return 4462;
				case 142:
					return 4470;
				case 143:
					return 4478;
				case 144:
					return 4486;
				case 145:
					return 4494;
				case 146:
					return 4502;
				case 147:
					return 4510;
				case 148:
					return 4518;
				case 149:
					return 4526;
				case 150:
					return 4534;
				case 151:
					return 4542;
				case 152:
					return 4550;
				case 153:
					return 4558;
				case 154:
					return 4566;
				case 155:
					return 4574;
				case 156:
					return 4582;
				case 157:
					return 4590;
				case 158:
					return 5483;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				case 160:
					return 5938;
				case 161:
					return 5945;
				case 162:
					return 5952;
				case 163:
					return 5959;
				case 164:
					return 5966;
				case 165:
					return 5973;
				case 166:
					return 5980;
				case 167:
					return 5987;
				case 168:
					return 5994;
				case 169:
					return 6001;
				case 170:
					return 6008;
				case 171:
					return 6015;
				case 172:
					return 6022;
				case 173:
					return 6029;
				case 174:
					return 6036;
				case 175:
					return 6043;
				case 176:
					return 6050;
				case 177:
					return 6057;
				case 178:
					return 6064;
				case 179:
					return 6071;
				case 180:
					return 6078;
				case 181:
					return 6085;
				case 182:
					return 6092;
				case 183:
					return 6099;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				case 185:
					return 6183;
				case 186:
					return 6190;
				case 187:
					return 6197;
				case 188:
					return 6204;
				case 189:
					return 6211;
				case 190:
					return 6218;
				case 191:
					return 6225;
				case 192:
					return 6232;
				case 193:
					return 6239;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				case 195:
					return 6580;
				case 196:
					return 6587;
				case 197:
					return 6594;
				case 198:
					return 6601;
				case 199:
					return 6608;
				case 200:
					return 6615;
				case 201:
					return 6622;
				case 202:
					return 6629;
				case 203:
					return 6636;
				case 204:
					return 6643;
				case 205:
					return 6650;
				case 206:
					return 6657;
				case 207:
					return 6664;
				case 208:
					return 6671;
				case 209:
					return 6678;
				case 210:
					return 6685;
				case 211:
					return 6692;
				case 212:
					return 6699;
				case 213:
					return 6706;
				case 214:
					return 6713;
				case 215:
					return 6720;
				case 216:
					return 6727;
				case 217:
					return 6734;
				case 218:
					return 6741;
				case 219:
					return 6748;
				case 220:
					return 6755;
				case 221:
					return 6762;
				case 222:
					return 6769;
				case 223:
					return 6776;
				case 224:
					return 6783;
				case 225:
					return 6790;
				case 226:
					return 6797;
				case 227:
					return 6804;
				case 228:
					return 6811;
				case 229:
					return 6818;
				case 230:
					return 6825;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				case 232:
					return 7302;
				case 233:
					return 7309;
				case 234:
					return 7316;
				case 235:
					return 7323;
				case 236:
					return 7330;
				case 237:
					return 7337;
				case 238:
					return 7344;
				case 239:
					return 7351;
				case 240:
					return 7358;
				case 241:
					return 7365;
				case 242:
					return 7372;
				case 243:
					return 7379 /* GXTEntry: "1100000" */;
				case 244:
					return 7386;
				case 245:
					return 7393;
				case 246:
					return 7400;
				case 247:
					return 7407;
				case 248:
					return 7414;
				case 249:
					return 7421;
				case 250:
					return 7428;
				case 251:
					return 7435;
				case 252:
					return 7442;
				case 253:
					return 7449;
				case 254:
					return 7456;
				case 255:
					return 7463;
				case 256:
					return 7470;
				case 257:
					return 7477;
				case 258:
					return 7484;
				case 259:
					return 7491;
				case 260:
					return 7498;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				case 262:
					return 8025;
				case 263:
					return 8032;
				case 264:
					return 8039;
				case 265:
					return 8046;
				case 266:
					return 8053;
				case 267:
					return 8060;
				case 268:
					return 8067;
				case 269:
					return 8074;
				case 270:
					return 8081;
				case 271:
					return 8542;
				case 272:
					return 8549;
				case 273:
					return 8556;
				case 274:
					return 8563;
				case 275:
					return 8570;
				case 276:
					return 8577;
				case 277:
					return 8584;
				case 278:
					return 8591;
				case 279:
					return 8598;
				case 280:
					return 8605;
				case 281:
					return 8987;
				case 282:
					return 8994;
				case 283:
					return 9001;
				case 284:
					return 9008;
				case 285:
					return 9015;
				case 286:
					return 9022;
				case 287:
					return 9029;
				case 288:
					return 9036;
				case 289:
					return 9043;
				case 290:
					return 9050;
				case 294:
					return 9075;
				case 295:
					return 9082;
				case 296:
					return 9089;
				case 297:
					return 9096;
				case 298:
					return 9103;
				case 299:
					return 9110;
				case 300:
					return 9117;
				case 301:
					return 9124;
				case 302:
					return 9131;
				case 303:
					return 9138;
				default:
					break;
			}
			Jump @26140; //curOff = 22401
			switch (iParam1)
			{
				case 0:
					return 1634;
				case 1:
					return 1641;
				case 2:
					return 1648;
				case 3:
					return 1655;
				case 4:
					return 1662;
				case 5:
					return 1669;
				case 6:
					return 1676;
				case 7:
					return 1683;
				case 8:
					return 1690;
				case 9:
					return 1697;
				case 10:
					return 1704;
				case 11:
					return 1710;
				case 12:
					return 1716;
				case 13:
					return 1722;
				case 14:
					return 1800;
				case 15:
					return 1807;
				case 16:
					return 1814;
				case 17:
					return 1821;
				case 18:
					return 1828;
				case 19:
					return 1835;
				case 20:
					return 1842;
				case 21:
					return 1849;
				case 22:
					return 1856;
				case 23:
					return 1863;
				case 24:
					return 1869;
				case 25:
					return 1875;
				case 26:
					return 2170;
				case 27:
					return 2177;
				case 28:
					return 2184;
				case 29:
					return 2191;
				case 30:
					return 2198;
				case 31:
					return 2205;
				case 32:
					return 2212;
				case 33:
					return 2219;
				case 34:
					return 2226;
				case 35:
					return 2233;
				case 36:
					return 2240;
				case 37:
					return 2246;
				case 38:
					return 2252;
				case 39:
					return 2833;
				case 40:
					return 2840;
				case 41:
					return 2847;
				case 42:
					return 2854;
				case 43:
					return 2861;
				case 44:
					return 2868;
				case 45:
					return 2875;
				case 46:
					return 2882;
				case 47:
					return 2889;
				case 48:
					return 2896;
				case 49:
					return 2903;
				case 50:
					return 2909;
				case 51:
					return 2915;
				case 52:
					return 2957;
				case 53:
					return 2964;
				case 54:
					return 2971;
				case 55:
					return 2978;
				case 56:
					return 2985;
				case 57:
					return 2992;
				case 58:
					return 2999;
				case 59:
					return 3006;
				case 60:
					return 3013;
				case 61:
					return 3020;
				case 62:
					return 3027;
				case 63:
					return 3033;
				case 64:
					return 3039;
				case 65:
					return 3240;
				case 66:
					return 3248;
				case 67:
					return 3256;
				case 68:
					return 3264;
				case 69:
					return 3272;
				case 70:
					return 3280;
				case 71:
					return 3288;
				case 72:
					return 3296;
				case 73:
					return 3304;
				case 74:
					return 3312;
				case 75:
					return 3320;
				case 76:
					return 3328;
				case 77:
					return 3337;
				case 78:
					return 3345;
				case 79:
					return 3352;
				case 80:
					return 3360;
				case 81:
					return 3368;
				case 82:
					return 3376;
				case 83:
					return 3384;
				case 84:
					return 3392;
				case 85:
					return 3400;
				case 86:
					return 3407;
				case 87:
					return 3414;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				case 89:
					return 4044;
				case 90:
					return 4052;
				case 91:
					return 4060;
				case 92:
					return 4068;
				case 93:
					return 4076;
				case 94:
					return 4084;
				case 95:
					return 4092;
				case 96:
					return 4100;
				case 97:
					return 4108;
				case 98:
					return 4116;
				case 99:
					return 4124;
				case 100:
					return 4133;
				case 101:
					return 4141;
				case 102:
					return 4148;
				case 103:
					return 4156;
				case 104:
					return 4164;
				case 105:
					return 4172;
				case 106:
					return 4180;
				case 107:
					return 4188;
				case 108:
					return 4196;
				case 109:
					return 4204;
				case 110:
					return 4212;
				case 111:
					return 4220;
				case 112:
					return 4228;
				case 113:
					return 4236;
				case 114:
					return 4244;
				case 115:
					return 4252;
				case 116:
					return 4260;
				case 117:
					return 4268;
				case 118:
					return 4276;
				case 119:
					return 4284;
				case 120:
					return 4293;
				case 121:
					return 4301;
				case 122:
					return 4308;
				case 123:
					return 4316;
				case 124:
					return 4324;
				case 125:
					return 4332;
				case 126:
					return 4340;
				case 127:
					return 4348;
				case 128:
					return 4356;
				case 129:
					return 4364;
				case 130:
					return 4372;
				case 131:
					return 4380;
				case 132:
					return 4388;
				case 133:
					return 4396;
				case 134:
					return 4404;
				case 135:
					return 4412;
				case 136:
					return 4420;
				case 137:
					return 4428;
				case 138:
					return 4436;
				case 139:
					return 4444;
				case 140:
					return 4453;
				case 141:
					return 4461;
				case 142:
					return 4468;
				case 143:
					return 4476;
				case 144:
					return 4484;
				case 145:
					return 4492;
				case 146:
					return 4500;
				case 147:
					return 4508;
				case 148:
					return 4516;
				case 149:
					return 4524;
				case 150:
					return 4532;
				case 151:
					return 4540;
				case 152:
					return 4548;
				case 153:
					return 4556;
				case 154:
					return 4564;
				case 155:
					return 4572;
				case 156:
					return 4580;
				case 157:
					return 4588;
				case 158:
					return 5481;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				case 160:
					return 5937;
				case 161:
					return 5944;
				case 162:
					return 5951;
				case 163:
					return 5958;
				case 164:
					return 5965;
				case 165:
					return 5972;
				case 166:
					return 5979;
				case 167:
					return 5986;
				case 168:
					return 5993;
				case 169:
					return 6000;
				case 170:
					return 6007;
				case 171:
					return 6014;
				case 172:
					return 6021;
				case 173:
					return 6028;
				case 174:
					return 6035;
				case 175:
					return 6042;
				case 176:
					return 6049;
				case 177:
					return 6056;
				case 178:
					return 6063;
				case 179:
					return 6070;
				case 180:
					return 6077;
				case 181:
					return 6084;
				case 182:
					return 6091;
				case 183:
					return 6098;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				case 185:
					return 6182;
				case 186:
					return 6189;
				case 187:
					return 6196;
				case 188:
					return 6203;
				case 189:
					return 6210;
				case 190:
					return 6217;
				case 191:
					return 6224;
				case 192:
					return 6231;
				case 193:
					return 6238;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				case 195:
					return 6579;
				case 196:
					return 6586;
				case 197:
					return 6593;
				case 198:
					return 6600;
				case 199:
					return 6607;
				case 200:
					return 6614;
				case 201:
					return 6621;
				case 202:
					return 6628;
				case 203:
					return 6635;
				case 204:
					return 6642;
				case 205:
					return 6649;
				case 206:
					return 6656;
				case 207:
					return 6663;
				case 208:
					return 6670;
				case 209:
					return 6677;
				case 210:
					return 6684;
				case 211:
					return 6691;
				case 212:
					return 6698;
				case 213:
					return 6705;
				case 214:
					return 6712;
				case 215:
					return 6719;
				case 216:
					return 6726;
				case 217:
					return 6733;
				case 218:
					return 6740;
				case 219:
					return 6747;
				case 220:
					return 6754;
				case 221:
					return 6761;
				case 222:
					return 6768;
				case 223:
					return 6775;
				case 224:
					return 6782;
				case 225:
					return 6789;
				case 226:
					return 6796;
				case 227:
					return 6803;
				case 228:
					return 6810;
				case 229:
					return 6817;
				case 230:
					return 6824;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				case 232:
					return 7301;
				case 233:
					return 7308;
				case 234:
					return 7315;
				case 235:
					return 7322;
				case 236:
					return 7329;
				case 237:
					return 7336;
				case 238:
					return 7343;
				case 239:
					return 7350;
				case 240:
					return 7357;
				case 241:
					return 7364;
				case 242:
					return 7371;
				case 243:
					return 7378;
				case 244:
					return 7385;
				case 245:
					return 7392;
				case 246:
					return 7399;
				case 247:
					return 7406;
				case 248:
					return 7413;
				case 249:
					return 7420;
				case 250:
					return 7427;
				case 251:
					return 7434;
				case 252:
					return 7441;
				case 253:
					return 7448;
				case 254:
					return 7455;
				case 255:
					return 7462;
				case 256:
					return 7469;
				case 257:
					return 7476;
				case 258:
					return 7483;
				case 259:
					return 7490;
				case 260:
					return 7497;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				case 262:
					return 8024;
				case 263:
					return 8031;
				case 264:
					return 8038;
				case 265:
					return 8045;
				case 266:
					return 8052;
				case 267:
					return 8059;
				case 268:
					return 8066;
				case 269:
					return 8073;
				case 270:
					return 8080;
				case 271:
					return 8541;
				case 272:
					return 8548;
				case 273:
					return 8555;
				case 274:
					return 8562;
				case 275:
					return 8569;
				case 276:
					return 8576;
				case 277:
					return 8583;
				case 278:
					return 8590;
				case 279:
					return 8597;
				case 280:
					return 8604;
				case 281:
					return 8986;
				case 282:
					return 8993;
				case 283:
					return 9000;
				case 284:
					return 9007;
				case 285:
					return 9014;
				case 286:
					return 9021;
				case 287:
					return 9028;
				case 288:
					return 9035;
				case 289:
					return 9042;
				case 290:
					return 9049;
				case 291:
					return 9056;
				case 292:
					return 9062;
				case 293:
					return 9068;
				case 294:
					return 9074;
				case 295:
					return 9081;
				case 296:
					return 9088;
				case 297:
					return 9095;
				case 298:
					return 9102;
				case 299:
					return 9109;
				case 300:
					return 9116;
				case 301:
					return 9123;
				case 302:
					return 9130;
				case 303:
					return 9137;
				case 304:
					return 9144;
				case 305:
					return 9150;
				case 306:
					return 9156;
				default:
					break;
			}
			return 1629;
		}

int func_945(int iParam0)
{
	int iVar0;

	if (iParam0 < 307)
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (iParam0 >= func_791(iVar0) && iParam0 < func_946(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_946(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 8:
			return 108;
		case 9:
			return 128;
		case 10:
			return 148;
		case 11:
			return 156;
		case 6:
			return 75;
		case 7:
			return 88;
		case 5:
			return -1;
		case 12:
			return 179;
		case 13:
			return 186;
		case 14:
			return 192;
		case 15:
			return 202;
		case 16:
			return 212;
		case 17:
			return 222;
		case 18:
			return 236;
		case 19:
			return 246;
		case 20:
			return 256;
		case 21:
			return 268;
		case 22:
			return 278;
		case 23:
			return 294;
		case 24:
			return 307;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_734(iParam0);
		return func_947(iVar0);
	}
	return (func_792(iParam0, -1) * iParam0 + 1);
}

int func_947(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		case 2:
			return 224;
		case 1:
			return 227;
		default:
			break;
	}
	return -1;
}

int func_948(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("TECHNICAL2"):
			return 0;
		case joaat("BOXVILLE5"):
			return 1;
		case joaat("WASTELANDER"):
			return 2;
		case joaat("PHANTOM2"):
			return 3;
		case joaat("VOLTIC2"):
			return 4;
		case joaat("DUNE4"):
			return 5;
		case joaat("DUNE5"):
			return 5;
		case joaat("RUINER2"):
			return 6;
		case joaat("BLAZER5"):
			return 7;
	}
	return -1;
}

bool func_949(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_790(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_559(func_944(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_950(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TRAILERSMALL2"):
			return 0;
	}
	return -1;
}

bool func_951(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (Global_1590535[iParam0 /*876*/].f_274.f_339 != 0)
		{
			return true;
		}
	}
	return false;
}

bool func_952()
{
	return func_559(6542, -1, 0) != 0;
}

bool func_953()
{
	return func_559(6163, -1, 0) != 0;
}

bool func_954()
{
	return func_559(5380, -1, 0) != 0;
}

bool func_955()
{
	return func_559(3828, -1, 0) != 0;
}

bool func_956()
{
	return func_559(3223, -1, 0) != 0;
}

bool func_957()
{
	return func_559(5379, -1, 0) != 0;
}

int func_958()
{
	bool bVar0;

	bVar0 = func_537();
	if (bVar0 != func_32())
	{
		return Global_1628237[bVar0 /*615*/].f_11.f_98;
	}
	return 0;
}

bool func_959(int iParam0)
{
	if (iParam0 != func_32())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_264 != 0;
	}
	return false;
}

int func_960(bool bParam0)
{
	if (func_230(bParam0) == 225 || func_230(bParam0) == 226)
	{
		return func_551(bParam0);
	}
	return -1;
}

var func_961()
{
	bool bVar0;
	var uVar1;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (func_696(UNK_0xD803B885F5E47A62(), bVar0))
		{
			UNK_0x5D96D8530B3D0904(&uVar1, bVar0);
		}
		bVar0++;
	}
	return uVar1;
}

void func_962(bool bParam0)
{
	if (bParam0)
	{
		if (!func_200(UNK_0xD803B885F5E47A62(), 9))
		{
			if (func_402(UNK_0xD803B885F5E47A62()) != 0)
			{
				func_233(9);
			}
		}
	}
	else if (func_200(UNK_0xD803B885F5E47A62(), 9))
	{
		func_232(9);
	}
}

bool func_963(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_965(bParam0, bParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_964(bParam0) };
			Global_8043 = bParam0;
			UNK_0x5D96D8530B3D0904(&Global_7356, true);
			UNK_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return true;
	}
	return false;
}

struct<4> func_964(bool bParam0)
{
	return Global_1798[bParam0 /*29*/].f_3;
}

int func_965(bool bParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;

	if (iParam13 > 99)
	{
	}
	if (UNK_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_977();
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
	if (func_976() == 0)
	{
		func_974();
		return 0;
	}
	func_973(Global_21872);
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
		func_972(0);
		func_972(2);
		func_972(1);
	}
	else
	{
		func_977();
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
					func_972(0);
					Global_8062 = 0;
					break;
				case 1:
					func_972(1);
					Global_8062 = 1;
					break;
				case 2:
					func_972(2);
					Global_8062 = 2;
					break;
				case 3:
					func_972(3);
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
		func_977();
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
			if (!func_498())
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_971(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_968(1);
			func_971(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	func_966(bParam0, bParam1);
	return 1;
}

void func_966(bool bParam0, bool bParam1)
{
	if (!func_967())
	{
		return;
	}
	UNK_0x6DFDEDC7A51E8DAE(bParam0, 1654525105, UNK_0x12AB0310C2281427(bParam1), 0);
}

bool func_967()
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
	if (func_219(UNK_0xD803B885F5E47A62()))
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

void func_968(int iParam0)
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
		if (func_970(14))
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
								func_275(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(bVar2);
								UNK_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_969(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_969(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_969(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_969(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_969(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_275(&(Global_7363[iVar1 /*15*/]));
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
								func_275(&(Global_7363[iVar1 /*15*/]));
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
								func_275(&(Global_7363[iVar1 /*15*/]));
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
								func_275(&(Global_7363[iVar1 /*15*/]));
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
								func_275(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(42);
								UNK_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_969(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_969(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_969(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
		func_275(bParam7);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		func_275(bParam8);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam9))
	{
		func_275(bParam9);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam10))
	{
		func_275(bParam10);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam11))
	{
		func_275(bParam11);
	}
	UNK_0x7E60D21B163E9D56();
}

bool func_970(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_971(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_972(int iParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = Global_111638.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_973(int iParam0)
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

void func_974()
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
		if (!func_975(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_24 = 1;
}

bool func_975(struct<6> Param0, struct<6> Param6)
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

int func_976()
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
			if (!func_975(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
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

void func_977()
{
	if (func_970(14))
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
		Global_19486 = func_978();
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

var func_978()
{
	func_979();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_979()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_982(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_981(UNK_0x16F2683693E537C9());
			if (func_980(iVar0) && (!func_970(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_980(Global_111638.f_2358.f_539.f_4321))
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

bool func_980(int iParam0)
{
	return iParam0 < 3;
}

int func_981(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_982(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_982(int iParam0)
{
	if (func_980(iParam0))
	{
		return func_983(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_983(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_984()
{
	if (!UNK_0xEAE0D21A50E6C7F4(Local_236[UNK_0x57270EE11514DC67() /*6*/].f_1, true))
	{
		if (!func_1005())
		{
			if (Local_176.f_5 > 0 || UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, 6))
			{
				func_235(1);
				UNK_0x5D96D8530B3D0904(&(Local_236[UNK_0x57270EE11514DC67() /*6*/].f_1), true);
			}
		}
	}
}

bool func_985(bool bParam0)
{
	if (func_988(1))
	{
		return true;
	}
	if (Global_2537071.f_5124.f_41)
	{
		Global_2537071.f_5124.f_41 = 0;
		return true;
	}
	if (bParam0)
	{
		if (func_360() == func_32() || !func_1115(func_360(), 0, 1))
		{
			return true;
		}
	}
	if (!func_470(UNK_0xD803B885F5E47A62()))
	{
		if (func_987(UNK_0xD803B885F5E47A62()) && func_986())
		{
			return true;
		}
	}
	return false;
}

bool func_986()
{
	switch (func_31(func_462(UNK_0xD803B885F5E47A62())))
	{
		case 11:
		case 14:
			return true;
		default:
			break;
	}
	return false;
}

bool func_987(bool bParam0)
{
	if (bParam0 != func_32() && func_1115(bParam0, 1, 1))
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310, 4);
	}
	return false;
}

bool func_988(bool bParam0)
{
	bool bVar0;

	if (!func_538(1))
	{
		bVar0 = false;
		if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57 != func_32())
		{
			if (func_1115(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57, 0, 1))
			{
				if ((Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_24 == 4 || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_24 == 8) || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_421(func_230(UNK_0xD803B885F5E47A62())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_642(31);
				if (func_430(func_230(UNK_0xD803B885F5E47A62())))
				{
					func_642(81);
				}
				if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57 != func_32() && UNK_0x40B8C182D63932FC(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57))
				{
					Global_1626725 = func_514(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_359(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57))
					{
						func_642(88);
					}
				}
				else
				{
					Global_1626725 = 1;
				}
				Global_1626709 = { Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_104 };
			}
			return true;
		}
	}
	return false;
}

bool func_989()
{
	return func_249(UNK_0xD803B885F5E47A62());
}

void func_990(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	float fVar0;

	if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 != iParam0)
	{
		func_1004(-1);
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 = iParam0;
		if (func_1003() != -1)
		{
			func_1002(-1);
		}
		if (func_1001() != -1)
		{
			func_1000(-1);
		}
		func_999(iParam2);
		func_997(iParam0);
		if (!func_242(iParam0))
		{
			fVar0 = func_241(iParam0);
			if (fVar0 != 1f)
			{
				func_238(fVar0);
				UNK_0x5D96D8530B3D0904(&(Global_1674347.f_3), true);
			}
		}
		if (!func_245(iParam0) || bParam3)
		{
			if (func_243(iParam0, iParam2) && bParam3 == 1)
			{
				UNK_0x34D79252800B23FF(0);
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
					UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
				}
				UNK_0x5D96D8530B3D0904(&(Global_1674347.f_3), false);
			}
			else if (UNK_0x02A813E6E0380440() < 5)
			{
				UNK_0x51B096AAC60548C1(1f);
				UNK_0x34D79252800B23FF(5);
			}
		}
		if (func_410())
		{
			func_233(27);
		}
		if (bParam1)
		{
			if (!func_404())
			{
				func_235(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, true) || UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 4)) || UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, false))
			{
				func_642(6);
			}
			func_996();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			UNK_0x15EA7F4313456B1D(3, false);
			UNK_0x15EA7F4313456B1D(5, false);
		}
		if (func_138(UNK_0xD803B885F5E47A62()) && func_250(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x5D96D8530B3D0904(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1), 8);
		}
		func_992();
		if (func_991(iParam0))
		{
			UNK_0x15EA7F4313456B1D(3, false);
			UNK_0x15EA7F4313456B1D(5, false);
			UNK_0x5D96D8530B3D0904(&(Global_1674347.f_3), 6);
		}
		Global_2537071.f_6579 = 0;
	}
}

bool func_991(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return true;
		default:
			break;
	}
	return false;
}

void func_992()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar3 = func_995();
	bVar2 = func_88(UNK_0xD803B885F5E47A62());
	bVar0 = false;
	while (bVar0 < 32)
	{
		bVar1 = UNK_0x117658E336116132(bVar0);
		if (UNK_0x40B8C182D63932FC(bVar1))
		{
			if (func_329(bVar1, bVar2, 1) || func_993(bVar1, UNK_0xD803B885F5E47A62()))
			{
				UNK_0xD463D0CE3DC66332(UNK_0xD803B885F5E47A62(), bVar1, bVar3);
				UNK_0xD463D0CE3DC66332(bVar1, UNK_0xD803B885F5E47A62(), bVar3);
			}
		}
		bVar0++;
	}
}

bool func_993(bool bParam0, bool bParam1)
{
	if (func_296(bParam0, 1) && func_296(bParam1, 1))
	{
		return (func_994(bParam0) == func_88(bParam1) || func_994(bParam1) == func_88(bParam0));
	}
	return false;
}

bool func_994(bool bParam0)
{
	if (func_296(bParam0, 1))
	{
		return Global_1628237[func_88(bParam0) /*615*/].f_11.f_484;
	}
	return func_32();
}

bool func_995()
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_537();
	if (bVar0 != func_32())
	{
		if (func_1115(bVar0, 0, 1))
		{
			bVar1 = bVar0;
			if (bVar1 != -1)
			{
				return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bVar1 /*615*/].f_1, 16);
			}
		}
	}
	return false;
}

void func_996()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, true))
	{
		UNK_0x0674E58A79778E99(&(Global_2537071.f_4555), true);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 4))
	{
		UNK_0x0674E58A79778E99(&(Global_2537071.f_4555), 4);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 6))
	{
		UNK_0x0674E58A79778E99(&(Global_2537071.f_4555), 6);
	}
	UNK_0x0674E58A79778E99(&(Global_2537071.f_4555), false);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_4555), 2);
	Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_751 = 0;
	if (Global_2537071.f_4557 > 0)
	{
		UNK_0x34D79252800B23FF(Global_2537071.f_4557);
	}
	Global_2537071.f_4556 = 0;
}

void func_997(int iParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_559(3791, -1, 0);
	bVar1 = func_998(iParam0);
	if (bVar1 != -1)
	{
		UNK_0x5D96D8530B3D0904(&bVar0, bVar1);
		func_557(3791, bVar0, -1, 1, 0);
	}
}

int func_998(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		case 166:
			return 1;
		case 171:
			return 2;
		case 172:
			return 3;
		case 173:
			return 4;
		case 214:
			return 5;
		case 215:
			return 6;
		case 216:
			return 7;
		case 217:
			return 8;
		case 218:
			return 9;
		case 219:
			return 10;
		case 220:
			return 11;
		case 221:
			return 12;
		default:
			break;
	}
	return -1;
}

void func_999(int iParam0)
{
	int iVar0;

	iVar0 = UNK_0xD803B885F5E47A62();
	if (Global_1628237[iVar0 /*615*/].f_11.f_181 != iParam0)
	{
		Global_1628237[iVar0 /*615*/].f_11.f_181 = iParam0;
	}
}

void func_1000(int iParam0)
{
	if (Global_2537071.f_5124.f_340 != iParam0)
	{
		Global_2537071.f_5124.f_340 = iParam0;
	}
}

int func_1001()
{
	return Global_2537071.f_5124.f_340;
}

void func_1002(int iParam0)
{
	if (Global_2537071.f_5124.f_339 != iParam0)
	{
		Global_2537071.f_5124.f_339 = iParam0;
	}
}

int func_1003()
{
	return Global_2537071.f_5124.f_339;
}

void func_1004(int iParam0)
{
	Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_32 = iParam0;
}

bool func_1005()
{
	int iVar0;

	iVar0 = func_1006();
	if (iVar0 > -1)
	{
		if (Local_176.f_33 == iVar0)
		{
			return true;
		}
	}
	return false;
}

int func_1006()
{
	bool bVar0;

	if (Local_236[UNK_0x57270EE11514DC67() /*6*/].f_3 != -1)
	{
		return Local_236[UNK_0x57270EE11514DC67() /*6*/].f_3;
	}
	if (func_249(UNK_0xD803B885F5E47A62()))
	{
		Local_236[UNK_0x57270EE11514DC67() /*6*/].f_3 = UNK_0x57270EE11514DC67();
		if (UNK_0x57270EE11514DC67() == Local_176.f_33)
		{
			func_962(1);
		}
	}
	else if (func_296(UNK_0xD803B885F5E47A62(), 1))
	{
		bVar0 = func_537();
		if (bVar0 != func_32())
		{
			if (UNK_0xFB75B0F82CA525F6(bVar0))
			{
				Local_236[UNK_0x57270EE11514DC67() /*6*/].f_3 = UNK_0x7B9C1F53FE442D06(bVar0);
			}
		}
	}
	return Local_236[UNK_0x57270EE11514DC67() /*6*/].f_3;
}

int func_1007()
{
	return Local_176;
}

int func_1008(int iParam0)
{
	return Local_236[iParam0 /*6*/];
}

bool func_1009()
{
	var uVar0;

	func_1014(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_1013())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_1012())
	{
		return true;
	}
	if (func_1011(159))
	{
		if (!func_1010())
		{
			return true;
		}
	}
	if (func_1011(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_239() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_239()) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_1010()
{
	return Global_2450632.f_598;
}

bool func_1011(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_1012()
{
	return Global_2460680;
}

bool func_1013()
{
	return Global_2450632.f_593;
}

void func_1014(var uParam0)
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
					func_1015(iVar0);
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

void func_1015(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_1115(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_1016(bVar4, &bVar5))
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

bool func_1016(bool bParam0, bool bParam1)
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

void func_1017()
{
	SYSTEM::WAIT(0);
}

void func_1018()
{
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_429, 6))
	{
		if (UNK_0x8CD06866876216F2())
		{
			if (func_1005() || func_411())
			{
				func_726(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
				UNK_0x5D96D8530B3D0904(&bLocal_429, 6);
			}
		}
	}
	func_1064(3, 3, -1, -1082130432 /* Float: -1f */);
	if (UNK_0x8CD06866876216F2())
	{
		if (UNK_0x57270EE11514DC67() == Local_176.f_33)
		{
			if (iLocal_736 >= 0)
			{
				func_915(&Local_442);
				func_914(&Local_442);
			}
		}
	}
	if (UNK_0xD09DF7101876AFB8(UNK_0x16F2683693E537C9()) == bLocal_435)
	{
		UNK_0x6DF7BF67E86AAE86(UNK_0x16F2683693E537C9(), bLocal_437);
	}
	if (iLocal_736 > 0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_176.f_1, 3))
		{
			func_903(UNK_0xD803B885F5E47A62(), 1, 0, 0);
		}
	}
	func_1063();
	if (Local_176.f_34 != -1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_429, 5))
		{
			if (UNK_0x40B8C182D63932FC(UNK_0x117658E336116132(Local_176.f_34)))
			{
				func_448(UNK_0x117658E336116132(Local_176.f_34), 432, 0, 0);
				func_447(UNK_0x117658E336116132(Local_176.f_34), 1, 0, 0);
				func_446(UNK_0x117658E336116132(Local_176.f_34), 0, 0, 0);
				func_445(UNK_0x117658E336116132(Local_176.f_34), 0);
				func_442(UNK_0x117658E336116132(Local_176.f_34), Global_262145.f_12355, 0, 0);
			}
		}
	}
	if (func_205(0))
	{
		func_204(0);
	}
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_430, false))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_430, 2))
		{
			UNK_0x7352ACF3368DF65F("DisableFlightMusic", 0);
			UNK_0x7352ACF3368DF65F("WantedMusicDisabled", 0);
			UNK_0xC92DB9682A650680("BG_SIGHTSEER_STOP");
		}
	}
	UNK_0x5D96D8530B3D0904(&bLocal_430, 8);
	func_201();
	UNK_0x74ECD24F904DEAD4(1);
	func_962(0);
	func_1020(1, 0);
	UNK_0x34D79252800B23FF(5);
	UNK_0x0674E58A79778E99(&Global_4269765, 21);
	UNK_0x0674E58A79778E99(&Global_4269765, 20);
	func_1019();
}

void func_1019()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_1020(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1366905.f_1.f_108 != 0)
	{
		Global_1366905.f_1.f_108 = 0;
	}
	Global_1366905.f_1.f_109 = -1;
	Global_1366905.f_1.f_110 = -1;
	if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 167 || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 168)
	{
		func_1061();
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 4);
	}
	if ((func_560() && iParam1 != 0) && Global_262145.f_16981)
	{
		if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 190 || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 192)
		{
			func_1043(UNK_0xD803B885F5E47A62(), iParam1, 1, 0);
		}
	}
	if (((Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 164 || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 208) || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 250) || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 237)
	{
		UNK_0x15EA7F4313456B1D(3, true);
		UNK_0x15EA7F4313456B1D(5, true);
	}
	if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 != -1)
	{
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 = -1;
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 14) && !func_138(UNK_0xD803B885F5E47A62()))
		{
			func_235(0);
		}
	}
	else if (func_1041(UNK_0xD803B885F5E47A62()) != -1)
	{
		func_1004(-1);
	}
	func_1040(func_32());
	if (func_205(16))
	{
		func_204(16);
	}
	func_1037(0);
	func_999(-1);
	func_1036();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1035(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_1033(iVar1);
		iVar1++;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, false))
	{
		UNK_0x51B096AAC60548C1(1f);
		UNK_0x34D79252800B23FF(5);
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), false);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 5))
	{
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 5);
	}
	iVar2 = func_437();
	if ((func_326(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_1032(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_419(iVar2))
	{
		func_1029(-1, 1);
	}
	else if (((((func_436(iVar2) || func_1028(iVar2)) || func_1027(iVar2)) || func_478(iVar2)) || func_476(iVar2)) || func_474(iVar2))
	{
	}
	else
	{
		func_1029(-1, 1);
	}
	func_232(19);
	func_232(20);
	func_232(21);
	func_232(22);
	func_232(27);
	func_204(3);
	func_204(4);
	func_204(7);
	func_1026();
	if (func_250(UNK_0xD803B885F5E47A62()))
	{
		func_962(0);
	}
	func_232(29);
	Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57 = func_32();
	if (Global_2537071.f_5124.f_41 != 0)
	{
		Global_2537071.f_5124.f_41 = 0;
	}
	if (bParam0)
	{
		func_206();
	}
	if (!func_138(UNK_0xD803B885F5E47A62()))
	{
		func_231();
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), true);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 6))
	{
		UNK_0x15EA7F4313456B1D(3, true);
		UNK_0x15EA7F4313456B1D(5, true);
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 6);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 7))
	{
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 7);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 8))
	{
		func_1025("IMPEXP_SELFDES", 0);
		func_1023("IMPEXP_SELFDES");
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 8);
	}
	func_1021(iVar2, 0);
}

void func_1021(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 9))
		{
			UNK_0x8BC9595FD2792B5D(func_1022(iParam0));
			UNK_0x5D96D8530B3D0904(&(Global_1674347.f_3), 9);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 9))
	{
		UNK_0x8910D3D58E0132B8(func_1022(iParam0));
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 9);
	}
}

char* func_1022(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		default:
			break;
	}
	return "";
}

void func_1023(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!UNK_0x2EBF5002C6B6A06C(&(Global_111638.f_14136[iVar0 /*104*/])))
		{
			if (UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar0 /*104*/]), bParam0))
			{
				if (Global_111638.f_14136[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_977();
					Global_111638.f_14136[iVar0 /*104*/].f_99[Global_19486] = 0;
					if (func_1024(iVar0))
					{
					}
					else
					{
						Global_111638.f_14136[iVar0 /*104*/].f_24 = 0;
						Global_111638.f_14136[iVar0 /*104*/].f_28 = 0;
						Global_111638.f_14136[iVar0 /*104*/].f_29 = 0;
					}
					UNK_0xD59AE843FA2C6B40(Global_111638.f_14136[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

bool func_1024(int iParam0)
{
	if ((Global_111638.f_14136[iParam0 /*104*/].f_99[0] == 1 || Global_111638.f_14136[iParam0 /*104*/].f_99[1] == 1) || Global_111638.f_14136[iParam0 /*104*/].f_99[2] == 1)
	{
		return true;
	}
	return false;
}

void func_1025(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!UNK_0x2EBF5002C6B6A06C(&(Global_111638.f_14136[iVar0 /*104*/])))
		{
			if (UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar0 /*104*/]), bParam0))
			{
				if (Global_111638.f_14136[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_111638.f_14136[iVar0 /*104*/].f_24 = 1;
				if (Global_111638.f_14136[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_111638.f_14046[0 /*20*/].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_111638.f_14046[1 /*20*/].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_111638.f_14046[2 /*20*/].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_111638.f_14046[3 /*20*/].f_17 = 0;
					}
					Global_111638.f_14136[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111638.f_14136[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1026()
{
	if (func_253(UNK_0xD803B885F5E47A62()))
	{
		func_232(25);
	}
}

bool func_1027(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1028(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return true;
	}
	return false;
}

void func_1029(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iParam0 = func_437();
	}
	if (iParam0 > 0)
	{
		if (func_537() != func_32())
		{
			if (func_471(UNK_0xD803B885F5E47A62()) == UNK_0xD803B885F5E47A62())
			{
				Global_2514606.f_93[func_1031(iParam0)] = 1;
			}
		}
		iVar0 = func_1031(159);
		if (func_1030(iVar0, Global_262145.f_12606, bParam1))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(157);
		if (func_1030(iVar0, Global_262145.f_12606, bParam1))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(148);
		if (func_1030(iVar0, Global_262145.f_12606, bParam1))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(164);
		if (func_1030(iVar0, Global_262145.f_12606, bParam1))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(142);
		if (func_1030(iVar0, Global_262145.f_12606, bParam1))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(152);
		if (func_1030(iVar0, Global_262145.f_12606, bParam1))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(166);
		if (func_1030(iVar0, Global_262145.f_12606, bParam1))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(170);
		if (func_1030(iVar0, Global_262145.f_12606, bParam1))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(173);
		if (func_1030(iVar0, Global_262145.f_12606, bParam1))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(179);
		if (func_1030(iVar0, Global_262145.f_12606, bParam1))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(200);
		if (func_1030(iVar0, Global_262145.f_12606, bParam1))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(201);
		if (func_1030(iVar0, Global_262145.f_12606, bParam1))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(182);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(183);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(185);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(186);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(180);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(195);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(197);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(198);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(207);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(208);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(209);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(214);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(215);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(216);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(217);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(218);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(219);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(220);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(221);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
	}
}

bool func_1030(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_200(UNK_0xD803B885F5E47A62(), 19) && !func_200(UNK_0xD803B885F5E47A62(), 20)) && !func_200(UNK_0xD803B885F5E47A62(), 9))
		{
			return false;
		}
	}
	if (Global_2514606.f_93[iParam0] == 1 && func_9(&(Global_2514606[iParam0 /*2*/])))
	{
		if (func_858(&(Global_2514606[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2514606.f_93[iParam0] = 0;
			return true;
		}
		return false;
	}
	return true;
}

int func_1031(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		case 157:
			return 12;
		case 148:
			return 13;
		case 164:
			return 14;
		case 142:
			return 15;
		case 152:
			return 16;
		case 163:
			return 17;
		case 155:
			return 18;
		case 160:
			return 19;
		case 153:
			return 20;
		case 162:
			return 21;
		case 154:
			return 22;
		case 166:
			return 8;
		case 170:
			return 9;
		case 173:
			return 10;
		case 171:
			return 23;
		case 172:
			return 24;
		case 179:
			return 25;
		case 189:
			return 26;
		case 193:
			return 27;
		case 194:
			return 28;
		case 199:
			return 29;
		case 201:
			return 30;
		case 200:
			return 31;
		case 205:
			return 32;
		case 210:
			return 33;
		case 182:
			return 34;
		case 183:
			return 35;
		case 185:
			return 36;
		case 186:
			return 37;
		case 180:
			return 38;
		case 195:
			return 39;
		case 197:
			return 40;
		case 198:
			return 41;
		case 207:
			return 42;
		case 208:
			return 43;
		case 209:
			return 44;
		case 211:
			return 45;
		case 214:
			return 0;
		case 215:
			return 1;
		case 216:
			return 2;
		case 217:
			return 3;
		case 218:
			return 4;
		case 219:
			return 5;
		case 220:
			return 6;
		case 221:
			return 7;
		default:
			break;
	}
	return -1;
}

void func_1032(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iParam0 = func_437();
	}
	if (iParam0 > 0)
	{
		if (func_537() != func_32())
		{
			Global_2514606.f_93[func_1031(iParam0)] = 1;
		}
		iVar0 = func_1031(155);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(163);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(160);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(153);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(162);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(154);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(171);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(172);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(199);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(194);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(193);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(210);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(205);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(189);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1031(211);
		if (func_1030(iVar0, Global_262145.f_12607, 0))
		{
			func_268(&(Global_2514606[iVar0 /*2*/]));
			func_8(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_1033(int iParam0)
{
	if (!func_193(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_337[iParam0 /*3*/], func_1034(), 0))
	{
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_337[iParam0 /*3*/] = { func_1034() };
	}
	if (!func_193(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_324[iParam0 /*3*/], func_1034(), 0))
	{
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_324[iParam0 /*3*/] = { func_1034() };
	}
}

Vector3 func_1034()
{
	vector3 vVar0;

	return vVar0;
}

void func_1035(int iParam0)
{
	if (!func_193(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_150[iParam0 /*3*/], func_1034(), 0))
	{
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_150[iParam0 /*3*/] = { func_1034() };
	}
	if (!func_193(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_125[iParam0 /*3*/], func_1034(), 0))
	{
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_125[iParam0 /*3*/] = { func_1034() };
	}
}

void func_1036()
{
	struct<20> Var0;

	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573902 = { Var0 };
	Global_1573902.f_13 = func_32();
	if (UNK_0xEAE0D21A50E6C7F4(Global_1573344, 3))
	{
		UNK_0x0674E58A79778E99(&Global_1573344, 3);
	}
}

void func_1037(bool bParam0)
{
	if (bParam0)
	{
		if (!func_500(UNK_0xD803B885F5E47A62(), 14))
		{
			func_1039(14);
		}
	}
	else if (func_500(UNK_0xD803B885F5E47A62(), 14))
	{
		func_1038(14);
	}
}

void func_1038(bool bParam0)
{
	UNK_0x0674E58A79778E99(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_5), bParam0);
}

void func_1039(bool bParam0)
{
	UNK_0x5D96D8530B3D0904(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_5), bParam0);
}

void func_1040(bool bParam0)
{
	if (func_249(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xD803B885F5E47A62() != bParam0)
		{
			if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_484 != bParam0)
			{
				Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_484 = bParam0;
				if (bParam0 != func_32())
				{
				}
			}
		}
	}
}

int func_1041(int iParam0)
{
	if (func_1042(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_32;
	}
	return -1;
}

bool func_1042(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_32 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_33 != -1))
	{
		return true;
	}
	return false;
}

void func_1043(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (func_696(bParam0, bParam1) && func_1060(bParam0, bParam1))
	{
		iVar0 = func_695(bParam0, bParam1);
		func_1047(iVar0, bParam2, bParam3);
		func_1044(iVar0, 1);
	}
}

void func_1044(int iParam0, bool bParam1)
{
	if (!func_1046(iParam0))
	{
		return;
	}
	func_679(func_1045(iParam0), bParam1, -1, 1);
	Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_183[iParam0 /*12*/].f_6 = bParam1;
}

int func_1045(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		case 1:
			return 7629;
		case 2:
			return 7630;
		case 3:
			return 7631;
		case 4:
			return 7632;
		case 5:
			return 15373;
		default:
			break;
	}
	return 7628;
}

bool func_1046(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_1047(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;

	bVar1 = false;
	iVar2 = func_940(UNK_0xD803B885F5E47A62(), iParam0);
	if (!bParam1)
	{
		func_1059(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2513475[iParam0];
		iVar0 = func_1058(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1676233 = -1;
		}
		func_1057(iParam0, 0, bParam2);
	}
	else if (func_1055(iParam0, bParam2))
	{
		iVar0 = func_1054(iVar2, 0);
		iVar3 = func_819(UNK_0xD803B885F5E47A62(), iVar2);
		iVar4 = func_1053(iVar2, bParam2);
		iVar5 = func_1054(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1052(iVar2) && func_1051(UNK_0xD803B885F5E47A62(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1059(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1050(UNK_0xD803B885F5E47A62(), iVar2) > 0)
		{
			func_1049(iParam0, (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_183[iParam0 /*12*/].f_2 - (func_1053(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1054(iVar2, bParam2) / func_1050(UNK_0xD803B885F5E47A62(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1052(iVar2) && func_1051(UNK_0xD803B885F5E47A62(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1048(UNK_0xD803B885F5E47A62(), iVar2, iVar0, bParam2);
}

void func_1048(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == func_32())
	{
		return;
	}
	if (func_686(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590535[iParam0 /*876*/].f_274.f_257 = iParam2;
				}
				else
				{
					Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1049(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_183[iParam0 /*12*/].f_2)
	{
		Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_183[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1050(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == func_32())
	{
		return 0;
	}
	if (func_686(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1051(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == func_32())
	{
		return 0;
	}
	if (func_686(iParam1) && func_1052(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1052(int iParam0)
{
	return func_585(iParam0) == 5;
}

int func_1053(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;

	iVar1 = func_585(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16950;
			if (func_694(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16955;
			}
			break;
		case 3:
			uVar0 = Global_262145.f_16949;
			if (func_694(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16954;
			}
			break;
		case 4:
			uVar0 = Global_262145.f_16948;
			if (func_694(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16953;
			}
			break;
		case 0:
			uVar0 = Global_262145.f_16946;
			if (func_694(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16951;
			}
			break;
		case 2:
			uVar0 = Global_262145.f_16947;
			if (func_694(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16952;
			}
			break;
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21074;
				if (func_694(UNK_0xD803B885F5E47A62(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21075;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21058;
				if (func_694(UNK_0xD803B885F5E47A62(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21059;
				}
			}
			break;
	}
	return uVar0;
}

int func_1054(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_585(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16931;
			if (func_694(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16940);
			}
			if (func_694(UNK_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16945);
			}
			break;
		case 3:
			iVar0 = Global_262145.f_16932;
			if (func_694(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16939);
			}
			if (func_694(UNK_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16944);
			}
			break;
		case 4:
			iVar0 = Global_262145.f_16933;
			if (func_694(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16938);
			}
			if (func_694(UNK_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16943);
			}
			break;
		case 0:
			iVar0 = Global_262145.f_16934;
			if (func_694(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16936);
			}
			if (func_694(UNK_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16941);
			}
			break;
		case 2:
			iVar0 = Global_262145.f_16935;
			if (func_694(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16937);
			}
			if (func_694(UNK_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16942);
			}
			break;
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21071;
			}
			else
			{
				iVar0 = Global_262145.f_21055;
			}
			if (func_694(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21072);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21056);
				}
			}
			if (func_694(UNK_0xD803B885F5E47A62(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21073);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21057);
				}
			}
			if (func_1051(UNK_0xD803B885F5E47A62(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1055(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_680(15384, -1, -1);
	}
	return func_680(func_1056(iParam0), -1, -1);
}

int func_1056(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		case 1:
			return 9417;
		case 2:
			return 9418;
		case 3:
			return 9419;
		case 4:
			return 9420;
		case 5:
			return 15372;
		default:
			break;
	}
	return 9416;
}

void func_1057(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_679(15384, bParam1, -1, 1);
		return;
	}
	func_679(func_1056(iParam0), bParam1, -1, 1);
}

int func_1058(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_2513475[iParam0];
	iVar1 = func_940(UNK_0xD803B885F5E47A62(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2513482;
	}
	if (func_1052(iVar1))
	{
		if (func_1051(UNK_0xD803B885F5E47A62(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1059(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2513482 = iParam1;
		return;
	}
	Global_2513475[iParam0] = iParam1;
}

bool func_1060(bool bParam0, bool bParam1)
{
	int iVar0;

	if (func_696(bParam0, bParam1))
	{
		iVar0 = func_695(bParam0, bParam1);
		if (Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_4 > 0 && Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_7)
		{
			return true;
		}
	}
	return false;
}

void func_1061()
{
	UNK_0x0674E58A79778E99(&(Global_2537071.f_1737), 28);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_1737), 29);
	func_1062(24);
}

void func_1062(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_7[iVar0]), bVar1);
}

void func_1063()
{
	UNK_0x51732B934211201A(bLocal_436);
	UNK_0x51732B934211201A(bLocal_435);
}

void func_1064(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	struct<14> Var1;
	struct<17> Var15;
	struct<17> Var32;
	struct<16> Var49;
	struct<17> Var65;
	struct<16> Var82;
	struct<18> Var98;
	struct<18> Var116;
	struct<19> Var134;
	struct<18> Var153;

	bVar0 = UNK_0xBB0808A181D4745C();
	Var1 = Global_1674356;
	Var1.f_1 = Global_1674356.f_1;
	Var1.f_2 = Global_1674356.f_2;
	Var1.f_3 = Global_1674356.f_3;
	Var1.f_4 = Global_1674356.f_4;
	Var1.f_5 = Global_1674356.f_5;
	Var1.f_6 = Global_1674356.f_6;
	Var1.f_7 = Global_1674356.f_7;
	Var1.f_8 = Global_1674356.f_8;
	Var1.f_9 = Global_1674356.f_9;
	Var1.f_10 = Global_1674356.f_10;
	Var1.f_11 = Global_1674356.f_11;
	Var1.f_12 = Global_1674356.f_12;
	Var1.f_13 = Global_1674356.f_14;
	if (UNK_0x8CD06866876216F2())
	{
		if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1674356.f_15;
			Var15.f_15 = Global_1674356.f_16;
			Var15.f_16 = Global_1674356.f_17;
			UNK_0x28C4917D9A295449(&Var15);
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1674356.f_15;
			Var32.f_15 = iParam0;
			Var32.f_16 = iParam1;
			UNK_0x9E59224EB51EDA45(&Var32);
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1674356.f_15;
			Var49.f_15 = iParam0;
			UNK_0xB1DA4601C652C7C5(&Var49);
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1674356.f_15;
			Var65.f_15 = iParam0;
			Var65.f_16 = iParam1;
			UNK_0xBC121608DEC826ED(&Var65);
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1674356.f_15;
			Var82.f_15 = iParam0;
			UNK_0x8CE98B2741F42F3A(&Var82);
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1674356.f_15;
			Var98.f_15 = iParam0;
			Var98.f_16 = iParam1;
			Var98.f_17 = iParam2;
			UNK_0xD97D13FD5AE7CC65(&Var98);
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = iParam0;
			Var116.f_15 = iParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1674356.f_15;
			UNK_0x7E3D8B81F0B41A06(&Var116);
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = iParam0;
			Var134.f_16 = iParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1674356.f_15;
			UNK_0xAB72C270A0CBFA80(&Var134);
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = iParam0;
			Var153.f_15 = iParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1674356.f_15;
			UNK_0x4C3BFB72890DD032(&Var153);
		}
	}
	func_1065();
}

void func_1065()
{
	struct<18> Var0;

	Global_1674356 = { Var0 };
}

void func_1066(struct<21> Param0)
{
	func_1113(func_1114(Param0), Param0);
	UNK_0x3A4967AE7C71F999(3);
	func_1111(0, -1, 0);
	UNK_0x9752E7BAEABA939E(&Local_176, 60);
	UNK_0x35B62793EAE9ADDF(&Local_236, 193);
	if (!func_1110())
	{
		func_1018();
	}
	if (UNK_0x8CD06866876216F2())
	{
		UNK_0x256D93AFAE851A7A(0);
		if (UNK_0xBFF81ED3B99522C7())
		{
		}
		func_1109();
		func_1067(0, 0, 0);
		Local_236[UNK_0x57270EE11514DC67() /*6*/] = 0;
	}
	else
	{
		func_1018();
	}
}

void func_1067(int iParam0, bool bParam1, bool bParam2)
{
	func_1108();
	if (func_470(UNK_0xD803B885F5E47A62()))
	{
		func_1070(1);
	}
	if ((iParam0 != 0 && UNK_0x40B8C182D63932FC(bParam1)) && func_1069(bParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				UNK_0x5D96D8530B3D0904(&Global_1674342, false);
				break;
		}
	}
	if (!func_989() && !func_296(UNK_0xD803B885F5E47A62(), 1))
	{
		if (func_407())
		{
			func_234(3);
		}
	}
	func_234(4);
	if (func_538(0))
	{
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57 = func_537();
	}
	if (func_430(iParam0))
	{
		func_817();
		Global_1674374.f_18 = func_797(func_360());
	}
	else if (func_435(func_1041(UNK_0xD803B885F5E47A62())))
	{
		func_815();
		Global_1674428.f_18 = func_797(func_360());
	}
	if (bParam2)
	{
		if (!func_404())
		{
			func_235(1);
		}
	}
	func_1068();
}

void func_1068()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1366905.f_534[iVar0 /*42*/].f_1 = func_32();
		Global_1366905.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

bool func_1069(bool bParam0, bool bParam1)
{
	return func_329(UNK_0xD803B885F5E47A62(), bParam0, bParam1);
}

void func_1070(bool bParam0)
{
	int iVar0;

	func_1062(33);
	func_1062(34);
	func_1062(35);
	func_1062(36);
	func_1062(37);
	func_1062(38);
	func_1062(39);
	func_1062(40);
	func_1062(43);
	func_1062(41);
	func_1062(54);
	func_1062(42);
	func_1062(47);
	func_1107(23);
	func_1107(24);
	func_1062(92);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_1737), 2);
	func_1106();
	func_1101();
	func_1096();
	func_1091();
	func_1080();
	func_1076();
	func_1072();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2537071.f_5124.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1071(3))
	{
		func_1107(3);
	}
	else if (func_1071(4))
	{
		func_1107(4);
	}
	else if (func_1071(5))
	{
		func_1107(5);
	}
	else if (func_1071(6))
	{
		func_1107(6);
	}
	else if (func_1071(7))
	{
		func_1107(7);
	}
	else if (((((((((((((((((func_1071(0) || func_1071(1)) || func_1071(2)) || func_1071(8)) || func_1071(9)) || func_1071(10)) || func_1071(11)) || func_1071(12)) || func_1071(13)) || func_1071(14)) || func_1071(15)) || func_1071(16)) || func_1071(17)) || func_1071(18)) || func_1071(19)) || func_1071(20)) || func_1071(21)) || func_1071(22))
	{
		func_1107(8);
		func_1107(0);
		func_1107(1);
		func_1107(2);
		func_1107(9);
		func_1107(10);
		func_1107(11);
		func_1107(12);
		func_1107(13);
		func_1107(14);
		func_1107(15);
		func_1107(16);
		func_1107(17);
		func_1107(18);
		func_1107(19);
		func_1107(20);
		func_1107(21);
		func_1107(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2537071.f_5124.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1071(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_14[iVar0], bVar1);
}

void func_1072()
{
	if (func_1074())
	{
		func_1073(0);
		func_1073(1);
		func_1073(2);
		func_1073(3);
	}
}

void func_1073(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_33[iVar0]), bVar1);
}

bool func_1074()
{
	if (((func_1075(0) || func_1075(1)) || func_1075(2)) || func_1075(3))
	{
		return true;
	}
	return false;
}

bool func_1075(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_33[iVar0], bVar1);
}

void func_1076()
{
	if (func_1078())
	{
		func_1077(4);
		func_1077(5);
		func_1077(6);
		func_1077(7);
	}
}

void func_1077(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_31[iVar0]), bVar1);
}

bool func_1078()
{
	if (((func_1079(4) || func_1079(5)) || func_1079(6)) || func_1079(7))
	{
		return true;
	}
	return false;
}

bool func_1079(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_31[iVar0], bVar1);
}

void func_1080()
{
	bool bVar0;

	if (func_1090())
	{
		func_1089(8);
		func_1089(9);
		func_1089(10);
		func_1089(12);
		func_1089(13);
		func_1089(14);
		func_1089(19);
		func_1089(20);
		func_1089(21);
		func_1089(22);
		func_1089(23);
		func_1089(24);
		func_1089(25);
		func_1089(26);
		func_1089(15);
		func_1089(16);
		func_1089(17);
		func_1089(18);
		func_1089(35);
		func_1089(45);
		func_1089(46);
		if (func_1088(11))
		{
			func_1089(11);
			bVar0 = func_559(7226, -1, 0);
			UNK_0x5D96D8530B3D0904(&bVar0, 2);
			func_557(7226, bVar0, -1, 1, 0);
		}
	}
	if (func_1088(48))
	{
		if (func_1086(151, 3))
		{
			func_1084(151, 3);
		}
		func_1089(48);
	}
	if (func_1088(49))
	{
		if (func_1086(152, 3))
		{
			func_1084(152, 3);
		}
		func_1089(49);
	}
	if (func_1088(50))
	{
		if (func_1086(153, 3))
		{
			func_1084(153, 3);
		}
		func_1089(50);
	}
	if (func_1088(51))
	{
		if (func_1086(func_1081(), 3))
		{
			func_1084(func_1081(), 3);
		}
		func_1089(51);
	}
}

int func_1081()
{
	if (func_1083())
	{
		func_1082(154, Global_19486, 1);
	}
	return 154;
}

void func_1082(int iParam0, int iParam1, int iParam2)
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

bool func_1083()
{
	bool bVar0;

	bVar0 = func_88(UNK_0xD803B885F5E47A62());
	if (((bVar0 != UNK_0xD803B885F5E47A62() && bVar0 != func_32()) && UNK_0x40B8C182D63932FC(bVar0)) && bVar0 != -1)
	{
		return true;
	}
	return false;
}

void func_1084(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_1085(iParam0, iVar0, 0);
			func_1082(iParam0, iVar0, 0);
		}
	}
}

void func_1085(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

bool func_1086(int iParam0, int iParam1)
{
	if (func_1087(iParam0, iParam1) == 1)
	{
		return true;
	}
	return false;
}

int func_1087(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

bool func_1088(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_26[iVar0], bVar1);
}

void func_1089(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_26[iVar0]), bVar1);
}

bool func_1090()
{
	if (((((((((((((((((((((func_1088(8) || func_1088(9)) || func_1088(10)) || func_1088(12)) || func_1088(11)) || func_1088(13)) || func_1088(14)) || func_1088(19)) || func_1088(20)) || func_1088(21)) || func_1088(22)) || func_1088(23)) || func_1088(24)) || func_1088(25)) || func_1088(26)) || func_1088(15)) || func_1088(16)) || func_1088(17)) || func_1088(18)) || func_1088(35)) || func_1088(45)) || func_1088(46))
	{
		return true;
	}
	return false;
}

void func_1091()
{
	if (func_1095())
	{
		func_1094(0);
		func_1094(1);
		func_1094(2);
		func_1094(3);
		func_1094(4);
		func_1094(5);
		if (func_1093(32))
		{
			if (func_1086(func_1092(), 3))
			{
				func_1084(func_1092(), 3);
			}
			func_1094(32);
		}
	}
}

int func_1092()
{
	if (func_1083())
	{
		func_1082(12, Global_19486, 1);
	}
	return 12;
}

bool func_1093(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_23[iVar0], bVar1);
}

void func_1094(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_23[iVar0]), bVar1);
}

bool func_1095()
{
	if ((((func_1093(1) || func_1093(0)) || func_1093(2)) || func_1093(4)) || func_1093(5))
	{
		return true;
	}
	return false;
}

void func_1096()
{
	if (func_1100())
	{
		func_1099(0);
		func_1099(1);
		func_1099(2);
		func_1099(3);
		func_1099(4);
		func_1099(5);
		func_1099(6);
		func_1099(7);
		if (func_1098(8))
		{
			func_1099(8);
		}
		if (func_1098(15))
		{
			if (func_1086(func_1097(), 3))
			{
				func_1084(func_1097(), 3);
			}
			func_1099(15);
		}
	}
}

int func_1097()
{
	if (func_1083())
	{
		func_1082(20, Global_19486, 1);
	}
	return 20;
}

bool func_1098(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_21[iVar0], bVar1);
}

void func_1099(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_21[iVar0]), bVar1);
}

bool func_1100()
{
	if ((((((((func_1098(0) || func_1098(1)) || func_1098(2)) || func_1098(3)) || func_1098(4)) || func_1098(5)) || func_1098(6)) || func_1098(7)) || func_1098(8))
	{
		return true;
	}
	return false;
}

void func_1101()
{
	if (func_1105())
	{
		func_1104(0);
		func_1104(1);
		func_1104(2);
		func_1104(3);
		func_1104(4);
		func_1104(5);
		func_1104(6);
		func_1104(7);
		func_1104(8);
		func_1104(9);
		func_1104(10);
		func_1104(11);
		func_1104(12);
		if (func_1103(13))
		{
			if (func_1086(func_1102(), 3))
			{
				func_1084(func_1102(), 3);
			}
			func_1104(13);
		}
	}
}

int func_1102()
{
	if (func_1083())
	{
		func_1082(76, Global_19486, 1);
	}
	return 76;
}

bool func_1103(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_19[iVar0], bVar1);
}

void func_1104(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_19[iVar0]), bVar1);
}

bool func_1105()
{
	if ((((((((((((func_1103(0) || func_1103(1)) || func_1103(2)) || func_1103(3)) || func_1103(4)) || func_1103(5)) || func_1103(6)) || func_1103(7)) || func_1103(8)) || func_1103(9)) || func_1103(10)) || func_1103(11)) || func_1103(12))
	{
		return true;
	}
	return false;
}

void func_1106()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2537071.f_5124.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_1107(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_14[iVar0]), bVar1);
}

void func_1108()
{
	struct<14> Var0;

	Global_1674356 = { Var0 };
	Global_1674356.f_14 = 0;
	Global_1674356.f_15 = 0;
}

void func_1109()
{
}

bool func_1110()
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
		if (func_1013())
		{
			return false;
		}
		if (func_1011(157))
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

int func_1111(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1019();
			}
			else
			{
				return 0;
			}
		}
		if (!func_1112())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_1019();
					}
					else
					{
						return 0;
					}
				}
				if (func_1013())
				{
					if (!bParam2)
					{
						func_1019();
					}
					else
					{
						return 0;
					}
				}
				if (func_1011(157))
				{
					if (!bParam2)
					{
						func_1019();
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
					func_1019();
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
				func_1019();
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
			func_1019();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_1112()
{
	return Global_1312854;
}

void func_1113(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!UNK_0x8CD06866876216F2())
	{
		func_1019();
	}
	UNK_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_1114(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		case 1:
			return 32;
		case 32:
			return 32;
		case 33:
			return 32;
		case 34:
			return 32;
		case 35:
			return 32;
		case 36:
			return 32;
		case 37:
			return 32;
		case 38:
			return 32;
		case 39:
			return 32;
		case 40:
			return 32;
		case 41:
			return 32;
		case 42:
			return 32;
		case 43:
			return 32;
		case 44:
			return 32;
		case 45:
			return 32;
		case 46:
			return 32;
		case 47:
			return 32;
		case 48:
			return 32;
		case 49:
			return 32;
		case 50:
			return 4;
		case 51:
			return 32;
		case 52:
			return 32;
		case 53:
			return 32;
		case 54:
			return 32;
		case 55:
			return 32;
		case 56:
			return 32;
		case 57:
			return 32;
		case 58:
			return 32;
		case 59:
			return 32;
		case 60:
			return 32;
		case 61:
			return 32;
		case 62:
			return 32;
		case 63:
			return 32;
		case 64:
			return 4;
		case 65:
			return 32;
		case 66:
			return 4;
		case 67:
			return 4;
		case 68:
			return 32;
		case 69:
			return 32;
		case 70:
			return 4;
		case 71:
			return 32;
		case 72:
			return 32;
		case 73:
		case 74:
			return 4;
		case 75:
			return 32;
		case 76:
			return 32;
		case 77:
			return 32;
		case 78:
			return 32;
		case 79:
			return 32;
		case 80:
			return 32;
		case 81:
			return 32;
		case 82:
			return 32;
		case 84:
			return 32;
		case 83:
			return 32;
		case 85:
			return 32;
		case 86:
			return 8;
		case 87:
			return 32;
		case 88:
			return 32;
		case 89:
			return 32;
		case 90:
			return 32;
		case 91:
			return 8;
		case 92:
			return 32;
		case 93:
			return 8;
		case 94:
			return 8;
		case 102:
			return 8;
		case 95:
			return 8;
		case 96:
			return 32;
		case 97:
			return 32;
		case 98:
			return 32;
		case 99:
			return 8;
		case 100:
			return 32;
		case 101:
			return 32;
		case 103:
			return 32;
		case 104:
			return 32;
		case 105:
			return 32;
		case 106:
			return 8;
		case 107:
			return 8;
		case 108:
			return 8;
		case 109:
			return 8;
		case 110:
			return 8;
		case 111:
			return 8;
		case 112:
			return 8;
		case 113:
			return 8;
		case 114:
			return 32;
		case 115:
			return 8;
		case 116:
			return 8;
		case 117:
			return 8;
		case 118:
			return 8;
		case 119:
			return 32;
		case 120:
			return 32;
		case 121:
			return 32;
		case 122:
			return 32;
		case 123:
			return 8;
		case 124:
			return 8;
		case 125:
			return 8;
		case 126:
			return 8;
		case 127:
			return 32;
		case 128:
			return 32;
		case 129:
			return 32;
		case 12:
			return 32;
		case 4:
			return 16;
		case 13:
			return 32;
		case 5:
			return 16;
		case 6:
			return 2;
		case 8:
			return 2;
		case 9:
			return 2;
		case 7:
			return 16;
		case 10:
			return 2;
		case 11:
			return 4;
		case 15:
			return 32;
		case 16:
			return 32;
		case 27:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 18:
			return 32;
		case 28:
			return 32;
		case 29:
			return 2;
		case 30:
			return 32;
		case 31:
			return 32;
		case 17:
			return 2;
		case 130:
			return 32;
		case 131:
			return 32;
		case 19:
			return 32;
		case 22:
			return 32;
		case 23:
			return 32;
		case 24:
			return 32;
		case 20:
			return 2;
		case 0:
			return 0;
		case 21:
			return 32;
		case 142:
			return 32;
		case 143:
			return 32;
		case 132:
			return 32;
		case 133:
			return 32;
		case 137:
			return 32;
		case 135:
			return 32;
		case 136:
			return 32;
		case 140:
			return 32;
		case 141:
			return 32;
		case 138:
			return 32;
		case 139:
			return 32;
		case 144:
			return 32;
		case 145:
			return 32;
		case 146:
			return 32;
		case 147:
			return 32;
		case 148:
			return 2;
		case 153:
			return 1;
		case 149:
			return 2;
		case 150:
			return 4;
		case 151:
			return 2;
		case 152:
			return 2;
		case 134:
			return 1;
		case 154:
			return 2;
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		case 176:
			return 1;
		case 161:
			return 4;
		case 164:
			return 4;
		case 165:
			return 1;
		case 166:
			return 1;
		case 172:
			return 1;
		case 168:
			return 2;
		case 173:
			return 1;
		case 169:
			return 1;
		case 167:
			return 2;
		case 170:
			return 8;
		case 171:
			return 8;
		case 174:
			return 1;
		case 162:
			return 16;
		case 163:
			return 32;
		default:
			break;
	}
	return 0;
}

bool func_1115(bool bParam0, bool bParam1, bool bParam2)
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

