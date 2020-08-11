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
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	bool bLocal_41 = false;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	bool bLocal_45 = false;
	bool bLocal_46 = false;
	bool bLocal_47 = false;
	bool bLocal_48 = false;
	int iLocal_49[4] = { 0, 0, 0, 0 };
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 4;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 4;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 4;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 4;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 4;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 4;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	struct<485> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_36 = 202;
	iLocal_37 = 201;
	iLocal_38 = 24;
	iLocal_39 = 202;
	iLocal_40 = 25;
	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_44 = -1;
	iLocal_94 = -1;
	if (UNK_0x2EBF608FFE6CA406(82))
	{
		func_345();
	}
	func_344(0);
	func_332(&(Local_95.f_1), func_343(Global_94773[6 /*19*/], Global_94773[7 /*19*/]));
	func_331(&Local_95, 3);
	while (!func_330(2))
	{
		if (!Global_76891)
		{
			func_328();
			if (func_327(3, 0))
			{
				if (!func_326(66))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 8))
					{
						Local_95.f_1.f_141[0 /*2*/] = 302;
						Local_95.f_1.f_141[0 /*2*/].f_1 = 191;
						Local_95.f_1.f_141[1 /*2*/] = 309;
						Local_95.f_1.f_141[1 /*2*/].f_1 = 109;
						Local_95.f_1.f_141[2 /*2*/] = 196;
						Local_95.f_1.f_141[2 /*2*/].f_1 = 318;
						Local_95.f_1.f_141[3 /*2*/] = 220;
						Local_95.f_1.f_141[3 /*2*/].f_1 = 227;
						UNK_0x5D96D8530B3D0904(&bLocal_41, 8);
					}
				}
				else if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 9))
				{
					Local_95.f_1.f_141[0 /*2*/] = 0;
					Local_95.f_1.f_141[0 /*2*/].f_1 = 0;
					Local_95.f_1.f_141[1 /*2*/] = 0;
					Local_95.f_1.f_141[1 /*2*/].f_1 = 0;
					Local_95.f_1.f_141[2 /*2*/] = 0;
					Local_95.f_1.f_141[2 /*2*/].f_1 = 0;
					Local_95.f_1.f_141[3 /*2*/] = 0;
					Local_95.f_1.f_141[3 /*2*/].f_1 = 0;
					UNK_0x5D96D8530B3D0904(&bLocal_41, 9);
				}
			}
			func_327(3, 0);
			if (Global_111638.f_7256.f_227[71] == 1 && !func_325(14))
			{
				func_314(&Local_95, 40f, 50f);
				func_312(&Local_95);
				func_289();
				func_156();
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_95.f_449, false))
			{
				func_152(&Local_95);
			}
			if (func_150(0) || UNK_0xEAE0D21A50E6C7F4(Local_95.f_449, 2))
			{
				func_68(&Local_95);
				func_6(&Local_95);
				func_5(&Local_95);
			}
		}
		if (UNK_0x8A22C4C08282BF26(joaat("AGENCY_HEIST3A")) > 0 || UNK_0x8A22C4C08282BF26(joaat("AGENCY_HEIST3B")) > 0)
		{
			func_4();
		}
		if (func_330(12))
		{
			if (!func_3(0))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_120[3], 8))
				{
					func_2(3, 8, 1);
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_120[3], 8))
			{
				func_2(3, 8, 0);
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_120[3], 8))
		{
			func_2(3, 8, 0);
		}
		SYSTEM::WAIT(0);
	}
	func_1(0);
	func_345();
}

int func_1(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iVar0], bVar1))
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_9080.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

void func_2(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_120[bParam0]), bParam1);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_120[bParam0]), bParam1);
	}
	UNK_0x5D96D8530B3D0904(&Global_94752, bParam0);
}

bool func_3(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_4()
{
	int iVar0;

	if (Global_76882)
	{
		return;
	}
	if (!UNK_0xE1DBBD6CE209517C(UNK_0xA30EC016B12C03E4()))
	{
		return;
	}
	iVar0 = SYSTEM::ROUND((1f + (1000f * SYSTEM::TIMESTEP())));
	Global_94964.f_8 = (Global_94964.f_8 + iVar0);
}

void func_5(var uParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_94752, *uParam0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, true))
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 15);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 16);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 14);
			UNK_0x0674E58A79778E99(&Global_94752, *uParam0);
		}
	}
}

void func_6(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_66(func_67(*uParam0));
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return;
	}
	iVar1 = iVar0;
	if ((iVar1 != uParam0->f_464 && !(iVar1 == 2 && uParam0->f_464 == 4)) && !((*uParam0 == 1 && iVar1 == 3) && uParam0->f_464 == 4))
	{
		if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
		{
			func_7(uParam0, iVar1, 0);
		}
		else
		{
			uParam0->f_464 = iVar1;
		}
	}
}

void func_7(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 != uParam0->f_464)
	{
		if (uParam0->f_680 == 0)
		{
			func_65(uParam0);
			uParam0->f_464 = iParam1;
			func_8(uParam0, iParam1, iParam2);
		}
	}
}

void func_8(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			func_64(uParam0);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 5);
			UNK_0x0674E58A79778E99(&(uParam0->f_449), 4);
			break;
		case 1:
			func_64(uParam0);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 5);
			UNK_0x0674E58A79778E99(&(uParam0->f_449), 4);
			uParam0->f_452 = -1;
			break;
		case 2:
			func_36(uParam0, uParam0->f_417, iParam2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 5);
			UNK_0x0674E58A79778E99(&(uParam0->f_449), 4);
			uParam0->f_457 = UNK_0x1C0640BA9A7327B3();
			break;
		case 3:
			func_19(uParam0);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 5);
			UNK_0x0674E58A79778E99(&(uParam0->f_449), 4);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 9);
			uParam0->f_457 = UNK_0x1C0640BA9A7327B3();
			break;
		case 4:
			func_15(&(uParam0->f_1.f_108[0 /*4*/]), 1);
			func_15(&(uParam0->f_1.f_108[1 /*4*/]), 1);
			Global_111638.f_1.f_6[*uParam0] = 1;
			UNK_0xA37A90C62806D848(0);
			func_13(uParam0, 0);
			func_64(uParam0);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 5);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 4);
			uParam0->f_457 = UNK_0x1C0640BA9A7327B3();
			break;
	}
	func_9(uParam0);
}

void func_9(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = UNK_0xE32F7AC5E6DF304A(2, 13, true);
	bVar1 = UNK_0xE32F7AC5E6DF304A(2, 11, true);
	bVar2 = UNK_0xF59058FCB716F903(0, 32, true);
	bVar3 = UNK_0xE32F7AC5E6DF304A(0, 1, true);
	bVar4 = UNK_0xF59058FCB716F903(2, 201, true);
	bVar5 = UNK_0xF59058FCB716F903(2, 202, true);
	if (UNK_0x91E3F625EF57450D(2))
	{
		bVar0 = UNK_0xE32F7AC5E6DF304A(2, 6, true);
		bVar1 = UNK_0xE32F7AC5E6DF304A(2, 7, true);
		bVar2 = UNK_0xE32F7AC5E6DF304A(0, 29, true);
	}
	bVar6 = func_12(1, *uParam0);
	UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_MAX_WIDTH");
	UNK_0x7C19E5E4784BD7CF(0.6f);
	UNK_0x7E60D21B163E9D56();
	switch (uParam0->f_464)
	{
		case 0:
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
			{
				if (bVar6)
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(true);
					func_11(bVar2);
					func_10("PB_H_ZOOM");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(false);
					func_11(bVar3);
					func_10("PB_H_LOOK");
					UNK_0x7E60D21B163E9D56();
				}
				else
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(2);
					func_11(bVar2);
					func_10("PB_H_ZOOM");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(true);
					func_11(bVar3);
					func_10("PB_H_LOOK");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(false);
					func_11(bVar5);
					func_10("PB_H_EXIT");
					UNK_0x7E60D21B163E9D56();
				}
				UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				UNK_0x1200CC973A2399C8(false);
				UNK_0x7E60D21B163E9D56();
			}
			break;
		case 1:
			UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
			UNK_0x1200CC973A2399C8(false);
			UNK_0x7E60D21B163E9D56();
			break;
		case 2:
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
			{
				UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				UNK_0x7E60D21B163E9D56();
				if (*uParam0 == 2)
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(2);
					func_11(bVar0);
					func_10("PB_H_SELCT");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(true);
					func_11(bVar3);
					func_10("PB_H_LOOK");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(false);
					func_11(bVar4);
					func_10("PB_H_TRIG");
					UNK_0x7E60D21B163E9D56();
				}
				else
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(3);
					func_11(bVar0);
					func_10("PB_H_SELCT");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(2);
					func_11(bVar3);
					func_10("PB_H_LOOK");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(true);
					func_11(bVar5);
					func_10("PB_H_UNDO");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(false);
					func_11(bVar4);
					func_10("PB_H_TRIG");
					UNK_0x7E60D21B163E9D56();
				}
				UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				UNK_0x1200CC973A2399C8(false);
				UNK_0x7E60D21B163E9D56();
			}
			break;
		case 3:
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 9))
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(true);
					func_11(bVar1);
					func_10("PB_H_SELCT");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(false);
					func_11(bVar3);
					func_10("PB_H_LOOK");
					UNK_0x7E60D21B163E9D56();
				}
				else
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(2);
					func_11(bVar1);
					func_10("PB_H_SELCT");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(true);
					func_11(bVar3);
					func_10("PB_H_LOOK");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(false);
					func_11(bVar4);
					func_10("PB_H_TRIG");
					UNK_0x7E60D21B163E9D56();
				}
				UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				UNK_0x1200CC973A2399C8(false);
				UNK_0x7E60D21B163E9D56();
			}
			break;
		case 4:
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
			{
				UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				UNK_0x7E60D21B163E9D56();
				UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(3);
				func_11(bVar2);
				func_10("PB_H_ZOOM");
				UNK_0x7E60D21B163E9D56();
				UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(2);
				func_11(bVar3);
				func_10("PB_H_LOOK");
				UNK_0x7E60D21B163E9D56();
				UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(true);
				func_11(bVar5);
				func_10("PB_H_UNDO");
				UNK_0x7E60D21B163E9D56();
				UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(false);
				func_11(bVar4);
				func_10("PB_H_CONF");
				UNK_0x7E60D21B163E9D56();
				UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				UNK_0x1200CC973A2399C8(false);
				UNK_0x7E60D21B163E9D56();
			}
			break;
	}
}

void func_10(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_11(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

bool func_12(int iParam0, bool bParam1)
{
	bool bVar0;

	if (iParam0 == 11 || iParam0 == -1)
	{
		return false;
	}
	if (bParam1 < 0 || bParam1 >= 32)
	{
		return false;
	}
	bVar0 = UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iParam0], bParam1);
	return bVar0;
}

void func_13(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 18);
		if (((!func_14(&(uParam0->f_1.f_20[0 /*4*/])) && !func_14(&(uParam0->f_1.f_20[1 /*4*/]))) && !func_14(&(uParam0->f_1.f_108[0 /*4*/]))) && !func_14(&(uParam0->f_1.f_108[1 /*4*/])))
		{
			UNK_0xA37A90C62806D848(0);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(uParam0->f_449), 18);
	}
}

bool func_14(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_15(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (Global_110278 && iParam1)
	{
		if (func_14(bParam0) && !UNK_0x79BBCD5833294FD5())
		{
			UNK_0xA37A90C62806D848(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (UNK_0x7F8A39872A07D2CE(bParam0, &(Global_111638.f_20405[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_111638.f_20405.f_145 - 2))
			{
				func_18(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_17((Global_111638.f_20405.f_145 - 1));
			Global_111638.f_20405.f_145 = (Global_111638.f_20405.f_145 - 1);
			func_16();
			return;
		}
		iVar0++;
	}
}

void func_16()
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

void func_17(int iParam0)
{
	StringCopy(&(Global_111638.f_20405[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_111638.f_20405[iParam0 /*16*/].f_4), "", 16);
	Global_111638.f_20405[iParam0 /*16*/].f_8 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_9 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_11 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_10 = -1;
	Global_111638.f_20405[iParam0 /*16*/].f_12 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_13 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_14 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_15 = 0;
}

void func_18(int iParam0, int iParam1)
{
	Global_111638.f_20405[iParam0 /*16*/] = { Global_111638.f_20405[iParam1 /*16*/] };
	Global_111638.f_20405[iParam0 /*16*/].f_4 = { Global_111638.f_20405[iParam1 /*16*/].f_4 };
	Global_111638.f_20405[iParam0 /*16*/].f_8 = Global_111638.f_20405[iParam1 /*16*/].f_8;
	Global_111638.f_20405[iParam0 /*16*/].f_10 = Global_111638.f_20405[iParam1 /*16*/].f_10;
	Global_111638.f_20405[iParam0 /*16*/].f_9 = Global_111638.f_20405[iParam1 /*16*/].f_9;
	Global_111638.f_20405[iParam0 /*16*/].f_11 = Global_111638.f_20405[iParam1 /*16*/].f_11;
	Global_111638.f_20405[iParam0 /*16*/].f_12 = Global_111638.f_20405[iParam1 /*16*/].f_12;
	Global_111638.f_20405[iParam0 /*16*/].f_13 = Global_111638.f_20405[iParam1 /*16*/].f_13;
	Global_111638.f_20405[iParam0 /*16*/].f_14 = Global_111638.f_20405[iParam1 /*16*/].f_14;
	Global_111638.f_20405[iParam0 /*16*/].f_15 = Global_111638.f_20405[iParam1 /*16*/].f_15;
}

void func_19(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	func_35(uParam0);
	func_33(uParam0);
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
	UNK_0x3CAEA85DA607305E(uParam0->f_415);
	UNK_0x7E60D21B163E9D56();
	iVar0 = func_66(func_32(*uParam0));
	if (iVar0 != 0)
	{
		if (iVar0 == func_31(*uParam0, 0))
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(8);
			UNK_0x7E60D21B163E9D56();
		}
		else if (iVar0 == func_31(*uParam0, 1))
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(9);
			UNK_0x7E60D21B163E9D56();
		}
	}
	Var1 = (uParam0->f_1.f_16 + uParam0->f_1.f_18);
	Var1.f_1 = (uParam0->f_1.f_16.f_1 + uParam0->f_1.f_18.f_1);
	func_27(uParam0, &Var1, uParam0->f_1.f_10);
	func_25(uParam0, 1, 1);
	func_13(uParam0, 0);
	func_20(uParam0);
}

void func_20(var uParam0)
{
	int iVar0;

	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 7))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 18))
		{
			switch (uParam0->f_464)
			{
				case 3:
					if (!Global_111638.f_1[*uParam0])
					{
						if (!UNK_0x7F8A39872A07D2CE(&(uParam0->f_1.f_20[0 /*4*/]), ""))
						{
							func_23(&(uParam0->f_1.f_20[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!UNK_0x7F8A39872A07D2CE(&(uParam0->f_1.f_20[1 /*4*/]), ""))
						{
							func_23(&(uParam0->f_1.f_20[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_111638.f_1[*uParam0] = 1;
					}
					else if (func_22() && !UNK_0xFEBC1E4EC9E001F0())
					{
						if (((!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 11) && !UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 10)) && !func_21()) && uParam0->f_483 == 0)
						{
							UNK_0xB6A2CAEFEE28197D("PB_H_CHOICE");
							UNK_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
						}
					}
					break;
				case 2:
					if (!Global_111638.f_1.f_6[*uParam0])
					{
						if (!UNK_0x7F8A39872A07D2CE(&(uParam0->f_1.f_108[0 /*4*/]), ""))
						{
							func_23(&(uParam0->f_1.f_108[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!UNK_0x7F8A39872A07D2CE(&(uParam0->f_1.f_108[1 /*4*/]), ""))
						{
							func_23(&(uParam0->f_1.f_108[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_111638.f_1.f_6[*uParam0] = 1;
					}
					else if (func_22() && !UNK_0xFEBC1E4EC9E001F0())
					{
						if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 10))
						{
							if ((!func_14("PB_H_GUNM") && !func_14("PB_H_HACK")) && !func_14("PB_H_DRIV"))
							{
								iVar0 = func_66(func_32(*uParam0));
								if (uParam0->f_417 < 5)
								{
									if (((!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 11) && !UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 10)) && !func_21()) && uParam0->f_483 == 0)
									{
										switch (Global_94773[iVar0 /*19*/].f_1[uParam0->f_417])
										{
											case 1:
												UNK_0xB6A2CAEFEE28197D("PB_H_GUNM");
												UNK_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
												break;
											case 2:
												UNK_0xB6A2CAEFEE28197D("PB_H_HACK");
												UNK_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
												break;
											case 3:
												UNK_0xB6A2CAEFEE28197D("PB_H_DRIV");
												UNK_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
												break;
										}
									}
								}
							}
						}
					}
					break;
			}
		}
	}
}

bool func_21()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

bool func_22()
{
	if (Global_111638.f_20405.f_145 > 0)
	{
		return false;
	}
	return true;
}

void func_23(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_24(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_24(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_16();
	}
}

void func_25(var uParam0, bool bParam1, int iParam2)
{
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_1.f_303, bParam1))
	{
		if (!UNK_0x7F8A39872A07D2CE(&(uParam0->f_1.f_280[bParam1 /*2*/]), ""))
		{
			func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[bParam1 /*2*/], iParam2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_1.f_303), bParam1);
		}
	}
}

void func_26(var uParam0, struct<2> Param1, struct<2> Param3, int iParam5)
{
	if (uParam0->f_483 == 3)
	{
		return;
	}
	if (!UNK_0xEA6BC48857E0AC4C(&Param3))
	{
		uParam0->f_467[uParam0->f_483 /*5*/] = { Param1 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_2 = { Param3 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_4 = iParam5;
		uParam0->f_483++;
	}
}

void func_27(var uParam0, var uParam1, float fParam2)
{
	vector3 vVar0;

	uParam0->f_411 = *uParam1;
	uParam0->f_411.f_1 = uParam1->f_1;
	uParam0->f_454 = UNK_0x1C0640BA9A7327B3() + 1000;
	vVar0 = { func_29(uParam0, &(uParam0->f_411)) };
	func_28(&(uParam0->f_649), vVar0, fParam2);
}

void func_28(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_11 = { vParam1 };
	if (fParam4 != -1f)
	{
		uParam0->f_7 = fParam4;
	}
}

Vector3 func_29(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;

	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_30(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_404;
	vVar7 = { uParam0->f_401 };
	vVar7 = { vVar7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	fVar10 = fVar4;
	fVar11 = UNK_0x10FCEF75D66B7A3B((fVar10 / uParam0->f_1.f_8));
	fVar12 = (uParam0->f_401.f_2 - uParam0->f_649.f_1.f_2);
	fVar13 = (vVar7.z - uParam0->f_649.f_1.f_2);
	fVar14 = (fVar13 - fVar12);
	fVar15 = UNK_0x10FCEF75D66B7A3B((fVar14 / uParam0->f_1.f_8));
	fVar16 = ((fVar11 * 3f) / 18f);
	return (fVar15 * 0.95f), fVar16, (-fVar11 * 0.85f);
}

void func_30(var uParam0, var uParam1, float fParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam0->f_1.f_2;
	iVar1 = uParam0->f_1.f_3;
	if (*uParam1 < 0 || *uParam1 > iVar0)
	{
		return;
	}
	if (uParam1->f_1 < 0 || uParam1->f_1 > iVar1)
	{
		return;
	}
	*fParam2 = (SYSTEM::TO_FLOAT(*uParam1) / SYSTEM::TO_FLOAT(iVar0));
	*fParam3 = (SYSTEM::TO_FLOAT(uParam1->f_1) / SYSTEM::TO_FLOAT(iVar1));
}

int func_31(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				case 1:
					return 4;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6;
				case 1:
					return 7;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 8;
				case 1:
					return 9;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_32(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		case 1:
			iVar0 = 8;
			break;
		case 2:
			iVar0 = 9;
			break;
		case 3:
			iVar0 = 10;
			break;
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_33(var uParam0)
{
	int iVar0;

	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "CREATE_VIEW");
	UNK_0x3CAEA85DA607305E(uParam0->f_415);
	UNK_0x3CAEA85DA607305E(true);
	UNK_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_16));
	UNK_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_16.f_1));
	UNK_0x7E60D21B163E9D56();
	func_34(uParam0);
	switch (*uParam0)
	{
		case 0:
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(uParam0->f_415);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(2);
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(uParam0->f_415);
			UNK_0x3CAEA85DA607305E(true);
			UNK_0x3CAEA85DA607305E(true);
			UNK_0x7E60D21B163E9D56();
			break;
		case 1:
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(uParam0->f_415);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(3);
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(uParam0->f_415);
			UNK_0x3CAEA85DA607305E(true);
			UNK_0x3CAEA85DA607305E(4);
			UNK_0x7E60D21B163E9D56();
			break;
		case 3:
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(uParam0->f_415);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(6);
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(uParam0->f_415);
			UNK_0x3CAEA85DA607305E(true);
			UNK_0x3CAEA85DA607305E(7);
			UNK_0x7E60D21B163E9D56();
			break;
		case 4:
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(uParam0->f_415);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(8);
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(uParam0->f_415);
			UNK_0x3CAEA85DA607305E(true);
			UNK_0x3CAEA85DA607305E(9);
			UNK_0x7E60D21B163E9D56();
			break;
	}
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "DISPLAY_VIEW");
	UNK_0x3CAEA85DA607305E(uParam0->f_415);
	UNK_0x7E60D21B163E9D56();
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
	UNK_0x3CAEA85DA607305E(uParam0->f_415);
	UNK_0x1200CC973A2399C8(func_327(*uParam0, uParam0->f_1.f_29));
	UNK_0x7E60D21B163E9D56();
	iVar0 = func_66(func_32(*uParam0));
	if (iVar0 != 0)
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
		UNK_0x3CAEA85DA607305E(uParam0->f_415);
		UNK_0x7E60D21B163E9D56();
		if (iVar0 == func_31(*uParam0, 0))
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(8);
			UNK_0x7E60D21B163E9D56();
		}
		else if (iVar0 == func_31(*uParam0, 1))
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(9);
			UNK_0x7E60D21B163E9D56();
		}
		UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
		UNK_0x3CAEA85DA607305E(99);
		UNK_0x7E60D21B163E9D56();
	}
}

void func_34(var uParam0)
{
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_LABELS");
	func_10("H_CRW_NAME");
	func_10("H_CRW_TYPE");
	func_10("H_CRW_SKILLS");
	switch (*uParam0)
	{
		case 0:
			func_10("H_LBL_JWL");
			break;
		case 1:
			func_10("H_LBL_DOC");
			break;
		case 2:
			func_10("H_LBL_RUR");
			break;
		case 3:
			func_10("H_LBL_AGN");
			break;
		case 4:
			func_10("H_LBL_FA");
			func_10("H_LBL_FB");
			break;
	}
	if (*uParam0 != 1)
	{
		func_10("H_LBL_CRW");
	}
	func_10("H_LBL_TODO");
	if (*uParam0 != 2)
	{
		func_10("H_LBL_APP");
	}
	switch (*uParam0)
	{
		case 0:
			func_10("H_LBL_J1");
			func_10("H_LBL_J2");
			func_10("H_LBL_J3");
			func_10("H_LBL_J4");
			func_10("HC_J_IMPACT");
			func_10("HC_J_STEALTH");
			break;
		case 1:
			func_10("HC_D_BLOW_UP");
			func_10("HC_D_DEEP_SEA");
			break;
		case 2:
			func_10("H_LBL_R1");
			func_10("H_LBL_R2");
			func_10("H_LBL_R3");
			func_10("H_LBL_R4");
			func_10("H_LBL_R5");
			func_10("H_LBL_R6");
			func_10("H_LBL_R7");
			func_10("H_LBL_R8");
			func_10("H_LBL_R9");
			func_10("H_LBL_R10");
			func_10("H_LBL_R11");
			func_10("H_LBL_R12");
			break;
		case 3:
			func_10("H_LBL_A1");
			func_10("H_LBL_A2");
			func_10("H_LBL_A3");
			func_10("H_LBL_A4");
			func_10("H_LBL_A5");
			func_10("HC_A_FIRETRUCK");
			func_10("HC_A_HELICOPTER");
			break;
		case 4:
			func_10("H_LBL_F1");
			func_10("H_LBL_F2");
			func_10("H_LBL_F3");
			func_10("H_LBL_F4");
			func_10("H_LBL_F5");
			func_10("HC_F_TRAFFCONT");
			func_10("HC_F_HELI");
			break;
	}
	UNK_0x7E60D21B163E9D56();
}

void func_35(var uParam0)
{
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	UNK_0x3CAEA85DA607305E(uParam0->f_415);
	UNK_0x7E60D21B163E9D56();
}

void func_36(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam1 < 0 || bParam1 >= uParam0->f_1.f_96)
	{
		return;
	}
	func_25(uParam0, 2, 1);
	iVar0 = func_66(func_32(*uParam0));
	iVar1 = Global_94773[iVar0 /*19*/].f_1[bParam1];
	switch (iVar1)
	{
		case 1:
			func_63(uParam0, iVar0, 1);
			break;
		case 2:
			func_63(uParam0, iVar0, 3);
			break;
		case 3:
			func_63(uParam0, iVar0, 2);
			break;
	}
	func_62(uParam0, uParam0->f_417);
	func_37(uParam0, uParam0->f_417);
	uParam0->f_450 = bParam1;
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x1200CC973A2399C8(true);
	UNK_0x7E60D21B163E9D56();
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x7E60D21B163E9D56();
	func_27(uParam0, &(uParam0->f_1.f_97[bParam1 /*2*/]), uParam0->f_1.f_10);
	if (iParam2 != 0)
	{
		iVar2 = 0;
		while (uParam0->f_418[iVar2] != iParam2)
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(9);
			UNK_0x7E60D21B163E9D56();
			iVar2++;
			if (iVar2 > 7)
			{
				return;
			}
		}
	}
	func_13(uParam0, 0);
	func_20(uParam0);
}

void func_37(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	iVar0 = func_32(*uParam0);
	iVar1 = func_66(iVar0);
	iVar2 = Global_94773[iVar1 /*19*/].f_1[bParam1];
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "CREATE_VIEW");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x3CAEA85DA607305E(false);
	UNK_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_97[bParam1 /*2*/]));
	UNK_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_97[bParam1 /*2*/].f_1));
	UNK_0x7E60D21B163E9D56();
	func_34(uParam0);
	bVar3 = false;
	if (Global_111638.f_1.f_12[iVar1 /*6*/][bParam1] != 0)
	{
		bVar4 = Global_111638.f_1.f_12[iVar1 /*6*/][bParam1];
		func_42(uParam0->f_413, bVar4, bParam1, bVar3, bVar4);
	}
	else
	{
		bVar5 = false;
		while (bVar5 < 14)
		{
			bVar6 = bVar5;
			if (func_41(bVar6) == iVar2)
			{
				if (func_40(bVar6))
				{
					if (!func_39(bVar6))
					{
						if (!func_38(uParam0, bVar6))
						{
							if (!(bVar6 == 11 && *uParam0 == 3))
							{
								func_42(uParam0->f_413, bVar6, bParam1, bVar3, bVar5);
								uParam0->f_418[bVar3] = bVar6;
								bVar3++;
							}
						}
					}
				}
			}
			bVar5++;
		}
	}
	if (Global_111638.f_1.f_12[iVar1 /*6*/][bParam1] != 0)
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
		UNK_0x3CAEA85DA607305E(bParam1);
		UNK_0x1200CC973A2399C8(true);
		UNK_0x7E60D21B163E9D56();
	}
	else
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
		UNK_0x3CAEA85DA607305E(bParam1);
		UNK_0x1200CC973A2399C8(false);
		UNK_0x7E60D21B163E9D56();
	}
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "DISPLAY_VIEW");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x7E60D21B163E9D56();
}

bool func_38(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_66(func_32(*uParam0));
	iVar1 = 0;
	while (iVar1 < uParam0->f_417)
	{
		if (Global_111638.f_1.f_12[iVar0 /*6*/][iVar1] == bParam1)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_39(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_118, bParam0);
}

bool func_40(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_116, bParam0);
}

int func_41(bool bParam0)
{
	return Global_94619[bParam0 /*5*/];
}

void func_42(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(bParam2);
	UNK_0x3CAEA85DA607305E(bParam3);
	UNK_0x3CAEA85DA607305E(bParam4);
	func_10(func_60(bParam1));
	func_10(func_59(bParam1));
	switch (func_41(bParam1))
	{
		case 1:
			func_10(func_58(0));
			UNK_0x3CAEA85DA607305E(func_55(bParam1, 0));
			func_10(func_58(1));
			UNK_0x3CAEA85DA607305E(func_55(bParam1, 1));
			func_10(func_58(2));
			UNK_0x3CAEA85DA607305E(func_55(bParam1, 2));
			func_10(func_58(3));
			UNK_0x3CAEA85DA607305E(func_55(bParam1, 3));
			break;
		case 2:
			func_10(func_54(0));
			UNK_0x3CAEA85DA607305E(func_51(bParam1, 0));
			func_10(func_54(1));
			UNK_0x3CAEA85DA607305E(func_51(bParam1, 1));
			func_10(func_54(2));
			UNK_0x3CAEA85DA607305E(func_51(bParam1, 2));
			break;
		case 3:
			func_10(func_49(0));
			UNK_0x3CAEA85DA607305E(func_44(bParam1, 0));
			func_10(func_49(1));
			UNK_0x3CAEA85DA607305E(func_44(bParam1, 1));
			func_10(func_49(2));
			UNK_0x3CAEA85DA607305E(func_44(bParam1, 2));
			break;
	}
	func_10("H_CRW_CUT");
	UNK_0x3CAEA85DA607305E(func_43(bParam1));
	UNK_0x7E60D21B163E9D56();
}

var func_43(bool bParam0)
{
	return Global_94619[bParam0 /*5*/].f_1;
}

int func_44(bool bParam0, int iParam1)
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_46(bParam0, iParam1)) / SYSTEM::TO_FLOAT(func_45(iParam1))) * 100f));
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 100;
		case 1:
			return 100;
		case 2:
			return 100;
	}
	return 0;
}

int func_46(bool bParam0, int iParam1)
{
	if (func_41(bParam0) != 3)
	{
		return -1;
	}
	return func_47(bParam0, iParam1);
}

int func_47(bool bParam0, int iParam1)
{
	return func_48(iParam1, Global_111638.f_1.f_73[bParam0 /*3*/].f_1, Global_111638.f_1.f_73[bParam0 /*3*/].f_2);
}

int func_48(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return SYSTEM::SHIFT_RIGHT(iParam1, (15 * iParam0)) & 32767;
		case 2:
		case 3:
			return SYSTEM::SHIFT_RIGHT(iParam2, (15 * (iParam0 - 2))) & 32767;
	}
	return -1;
}

char* func_49(int iParam0)
{
	return func_50(3, iParam0);
}

char* func_50(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_G1";
				case 1:
					return "HC_STA_G2";
				case 2:
					return "HC_STA_G3";
				case 3:
					return "HC_STA_G4";
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_H1";
				case 1:
					return "HC_STA_H2";
				case 2:
					return "HC_STA_H3";
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_D1";
				case 1:
					return "HC_STA_D2";
				case 2:
					return "HC_STA_D3";
			}
			break;
	}
	return "ERROR!";
}

int func_51(bool bParam0, int iParam1)
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_53(bParam0, iParam1)) / SYSTEM::TO_FLOAT(func_52(iParam1))) * 100f));
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 100;
		case 1:
			return 100;
		case 2:
			return 100;
	}
	return 0;
}

int func_53(bool bParam0, int iParam1)
{
	if (func_41(bParam0) != 2)
	{
		return -1;
	}
	return func_47(bParam0, iParam1);
}

char* func_54(int iParam0)
{
	return func_50(2, iParam0);
}

int func_55(bool bParam0, int iParam1)
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_57(bParam0, iParam1)) / SYSTEM::TO_FLOAT(func_56(iParam1))) * 100f));
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1000;
		case 1:
			return 100;
		case 2:
			return 100;
		case 3:
			return 100;
	}
	return 0;
}

int func_57(bool bParam0, int iParam1)
{
	if (func_41(bParam0) != 1)
	{
		return -1;
	}
	return func_47(bParam0, iParam1);
}

char* func_58(int iParam0)
{
	return func_50(1, iParam0);
}

bool func_59(bool bParam0)
{
	switch (Global_94619[bParam0 /*5*/])
	{
		case 1:
			return "HC_TYPE_G";
		case 2:
			return "HC_TYPE_H";
		case 3:
			return "HC_TYPE_D";
	}
	return "ERROR!";
}

char* func_60(bool bParam0)
{
	return func_61(bParam0);
}

char* func_61(bool bParam0)
{
	switch (bParam0)
	{
		case 1:
			return "HC_N_GUS";
		case 2:
			return "HC_N_KAR";
		case 10:
			return "HC_N_PAC";
		case 11:
			return "HC_N_CHE";
		case 3:
			return "HC_N_HUG";
		case 4:
			return "HC_N_NOR";
		case 5:
			return "HC_N_DAR";
		case 6:
			return "HC_N_PAI";
		case 7:
			return "HC_N_CHR";
		case 12:
			return "HC_N_RIC";
		case 8:
			return "HC_N_EDD";
		case 13:
			return "HC_N_TAL";
		case 9:
			return "HC_N_KRM";
	}
	return "ERROR!";
}

void func_62(var uParam0, bool bParam1)
{
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x7E60D21B163E9D56();
}

void func_63(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xEAE0D21A50E6C7F4(Global_94773[iParam1 /*19*/].f_18, bParam2))
	{
		if (!UNK_0x7F8A39872A07D2CE(&(Global_94773[iParam1 /*19*/].f_7[bParam2 /*2*/]), ""))
		{
			func_26(uParam0, uParam0->f_1.f_276, Global_94773[iParam1 /*19*/].f_7[bParam2 /*2*/], 1);
			UNK_0x5D96D8530B3D0904(&(Global_94773[iParam1 /*19*/].f_18), bParam2);
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (UNK_0x7F8A39872A07D2CE(&(Global_94773[iParam1 /*19*/].f_7[bParam2 /*2*/]), &(Global_94773[iVar0 /*19*/].f_7[bParam2 /*2*/])))
				{
					UNK_0x5D96D8530B3D0904(&(Global_94773[iVar0 /*19*/].f_18), bParam2);
				}
				iVar0++;
			}
		}
	}
}

void func_64(var uParam0)
{
	func_27(uParam0, &(uParam0->f_1.f_12), 45f);
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
	UNK_0x3CAEA85DA607305E(99);
	UNK_0x7E60D21B163E9D56();
	func_20(uParam0);
}

void func_65(var uParam0)
{
	switch (uParam0->f_464)
	{
		case 1:
		case 2:
		case 3:
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
			UNK_0x3CAEA85DA607305E(99);
			UNK_0x7E60D21B163E9D56();
			break;
	}
	UNK_0xA37A90C62806D848(0);
}

int func_66(int iParam0)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_205[iParam0];
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 6;
	}
	return -1;
}

void func_68(var uParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, true))
	{
		func_69(uParam0);
	}
}

void func_69(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;

	bVar0 = false;
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (!func_149(0))
			{
				if (func_140(8))
				{
					if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), uParam0->f_401) < 4f)
					{
						vVar1 = { uParam0->f_401 - UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
						fVar4 = UNK_0xE7D606C557C86100(vVar1.x, vVar1.y);
						fVar5 = UNK_0x755FF954DAE327E1((uParam0->f_404 - fVar4));
						if (fVar5 <= 70f)
						{
							bVar0 = true;
						}
						else
						{
							fVar6 = uParam0->f_404;
							if (fVar6 > 180f)
							{
								fVar6 = (fVar6 - 360f);
							}
							else if (fVar6 < -180f)
							{
								fVar6 = (fVar6 + 360f);
							}
							if ((fVar6 - fVar4) < fVar5)
							{
								fVar5 = UNK_0x755FF954DAE327E1((fVar6 - fVar4));
							}
							if (fVar5 <= 70f)
							{
								bVar0 = true;
							}
							else
							{
								if (fVar4 > 180f)
								{
									fVar4 = (fVar4 - 360f);
								}
								else if (fVar4 < -180f)
								{
									fVar4 = (fVar4 + 360f);
								}
								if ((uParam0->f_404 - fVar4) < fVar5)
								{
									fVar5 = UNK_0x755FF954DAE327E1((uParam0->f_404 - fVar4));
								}
								if (fVar5 <= 70f)
								{
									bVar0 = true;
								}
								else
								{
									if ((fVar6 - fVar4) < fVar5)
									{
										fVar5 = UNK_0x755FF954DAE327E1((fVar6 - fVar4));
									}
									if (fVar5 <= 70f)
									{
										bVar0 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar0)
		{
			if (uParam0->f_451 == -1)
			{
				func_139(&(uParam0->f_451), 3, "PB_H_ENT", 0, 0, 0, 0);
			}
			else if (func_138(uParam0->f_451, 1))
			{
				func_136(&(uParam0->f_451));
				func_122(uParam0);
			}
		}
		else if (uParam0->f_451 != -1)
		{
			func_136(&(uParam0->f_451));
		}
	}
	else
	{
		bVar7 = func_12(1, *uParam0);
		func_80(uParam0);
		if (((!bVar7 && uParam0->f_453 > 15) && (UNK_0xBFC0798A6E3417F9(2, iLocal_36) || UNK_0xBFC0798A6E3417F9(2, 238))) || UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 8))
		{
			UNK_0x0674E58A79778E99(&(uParam0->f_449), 8);
			func_70(uParam0, 0);
		}
	}
}

void func_70(var uParam0, bool bParam1)
{
	vector3 vVar0;
	int iVar3;

	uParam0->f_453 = 0;
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
		if (!bParam1)
		{
			vVar0 = { uParam0->f_401 };
			vVar0 = { vVar0 + Vector(0f, (1f * SYSTEM::COS((180f - uParam0->f_404))), (1f * SYSTEM::SIN((180f - uParam0->f_404)))) };
			UNK_0xE82754C349C7B581(vVar0, &(vVar0.f_2), 0, 0);
			UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vVar0, 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), uParam0->f_404);
			UNK_0x2FB9A57162E54BAB(0f);
			UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
			UNK_0xBD453909DC26A85D(UNK_0x16F2683693E537C9(), joaat("MOTIONSTATE_IDLE"), false, 0, 0);
			UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 1, 0);
		}
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, 134);
	}
	UNK_0xBFE31971E49FA500(1);
	func_73(0);
	func_72();
	UNK_0x17D339215F817B98();
	UNK_0xA5E3ADAAA4CD5D6C(17);
	UNK_0x911B98CDC647AC76(false);
	func_71(&(uParam0->f_649), 0, 1);
	func_15(&(uParam0->f_1.f_20[0 /*4*/]), 1);
	func_15(&(uParam0->f_1.f_20[1 /*4*/]), 1);
	func_15(&(uParam0->f_1.f_108[0 /*4*/]), 1);
	func_15(&(uParam0->f_1.f_108[1 /*4*/]), 1);
	UNK_0xA37A90C62806D848(1);
	while (UNK_0xFEBC1E4EC9E001F0())
	{
		UNK_0xA37A90C62806D848(1);
		SYSTEM::WAIT(0);
	}
	iVar3 = UNK_0xFBD08BECC9B87937(uParam0->f_401);
	if (iVar3 != 0)
	{
		UNK_0x25BB71BA267FE042(iVar3);
	}
	UNK_0x5372553242EA2414();
	func_65(uParam0);
	UNK_0x0674E58A79778E99(&(uParam0->f_449), 7);
	UNK_0x0674E58A79778E99(&(uParam0->f_449), 2);
	Global_94751 = 0;
}

void func_71(var uParam0, int iParam1, bool bParam2)
{
	if (UNK_0x9F4FE516EAACCFC5(*uParam0))
	{
		if (bParam2)
		{
			UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, iParam1, 0);
		}
		if (UNK_0xFBB4F23D534EB790(*uParam0))
		{
			UNK_0xE3BB8E05FCEB3FBE(*uParam0, false);
		}
		UNK_0x9A8DDC7C522F5BF5(*uParam0, iParam1);
	}
	if (uParam0->f_23)
	{
		UNK_0xF737A3AD8873CE16();
		uParam0->f_23 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0f;
}

void func_72()
{
	Global_22211.f_5 = 0;
}

void func_73(bool bParam0)
{
	if (bParam0)
	{
		func_79();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_149(0))
		{
			func_74(0);
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

void func_74(int iParam0)
{
	if (func_78())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_77())
		{
			func_76(1, 1);
		}
		else
		{
			func_76(0, 0);
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
	if (!func_75())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_75()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_76(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_149(0))
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

bool func_77()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_78()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_79()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_80(var uParam0)
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;

	bVar0 = UNK_0xE32F7AC5E6DF304A(0, 1, true);
	if (!UNK_0x7F8A39872A07D2CE(bVar0, uParam0->f_466))
	{
		func_9(uParam0);
	}
	uParam0->f_466 = bVar0;
	func_120();
	func_110(uParam0);
	func_88(uParam0);
	if (uParam0->f_464 == 1)
	{
		func_85(uParam0);
	}
	if (func_22())
	{
		func_20(uParam0);
	}
	bVar1 = uParam0->f_454 > UNK_0x1C0640BA9A7327B3();
	func_81(&(uParam0->f_649), UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 4), (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 5) && !bVar1), 1, 0, 1045220557 /* Float: 0.2f */, 1, 1065353216 /* Float: 1f */, 0);
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 7))
	{
		if ((!UNK_0x22A8E52414415B76() && UNK_0x0F1CCD77290EE12F()) && !UNK_0x798A3F1296751F46())
		{
			if (uParam0->f_464 != 1)
			{
				if (uParam0->f_464 == 0 || (((!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 11) && !UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 10)) && !func_21()) && uParam0->f_483 == 0))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 18) || uParam0->f_464 == 2)
					{
						UNK_0x6567AE843FADBA94(uParam0->f_414, 255, 255, 255, false, 0);
					}
				}
			}
		}
	}
	UNK_0xBFE31971E49FA500(0);
	UNK_0x3584F71E5CA29322(2);
	UNK_0x3584F71E5CA29322(1);
	UNK_0x3584F71E5CA29322(8);
	UNK_0x3584F71E5CA29322(7);
	UNK_0x3584F71E5CA29322(3);
	UNK_0xB8E3919889462ACD();
	UNK_0xD02CE72B4B66DC29(82, 66);
	UNK_0x744B56EE9DE7B57F(17, 0.612f, 0.818f);
	UNK_0xD59EF13BB60323B9();
	if (!UNK_0x22A8E52414415B76())
	{
		UNK_0x558EC149EB2BC0A2(2, 201);
	}
	UNK_0x558EC149EB2BC0A2(2, 202);
	UNK_0x558EC149EB2BC0A2(2, 188);
	UNK_0x558EC149EB2BC0A2(2, 187);
	UNK_0x558EC149EB2BC0A2(2, 189);
	UNK_0x558EC149EB2BC0A2(2, 190);
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 7))
	{
		if (!UNK_0x22A8E52414415B76())
		{
			vVar2 = { uParam0->f_401 };
			vVar2 = { vVar2 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_404))), (2.9f * SYSTEM::SIN((180f - uParam0->f_404)))) };
			UNK_0xE82754C349C7B581(vVar2, &(vVar2.f_2), 0, 0);
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 134);
			UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
			UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), true);
			UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vVar2, 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), uParam0->f_404);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 7);
		}
	}
}

void func_81(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	int iVar0[4];
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	vector3 vVar10;
	int iVar13;
	int iVar14;

	UNK_0xA2E3EDD0E119882F(2);
	func_84(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (UNK_0x89DF0B812BA6383B())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (UNK_0x91E3F625EF57450D(2))
	{
		fVar5 = UNK_0x659FAE9DBE6F38F5(2, 239);
		fVar6 = UNK_0x659FAE9DBE6F38F5(2, 240);
		fVar7 = (fVar5 - uParam0->f_29);
		fVar8 = (fVar6 - uParam0->f_30);
		uParam0->f_29 = fVar5;
		uParam0->f_30 = fVar6;
		if (bParam4)
		{
			iVar0[2] = -SYSTEM::ROUND(((fVar7 * fParam5) * 127f));
			iVar0[3] = -SYSTEM::ROUND(((fVar8 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = SYSTEM::ROUND(((UNK_0x659FAE9DBE6F38F5(2, 290) * fParam5) * 127f));
			iVar0[3] = SYSTEM::ROUND(((UNK_0x659FAE9DBE6F38F5(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_83((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_83((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < UNK_0x1C0640BA9A7327B3())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (UNK_0x91E3F625EF57450D(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = UNK_0x1C0640BA9A7327B3() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(SYSTEM::TO_FLOAT(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(SYSTEM::TO_FLOAT(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar9 = (30f * SYSTEM::TIMESTEP());
	vVar10 = { uParam0->f_8 + uParam0->f_11 };
	if ((UNK_0x91E3F625EF57450D(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = vVar10.x;
		uParam0->f_14.f_1 = vVar10.y;
		uParam0->f_14.f_2 = vVar10.z;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_82(((((vVar10.x - uParam0->f_14) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_82(((((vVar10.y - uParam0->f_14.f_1) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_82(((((vVar10.z - uParam0->f_14.f_2) * 0.05f) * fVar9) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_82(uParam0->f_14, SYSTEM::TO_FLOAT(-uParam0->f_21), SYSTEM::TO_FLOAT(uParam0->f_21));
		uParam0->f_14.f_1 = func_82(uParam0->f_14.f_1, SYSTEM::TO_FLOAT(-uParam0->f_22), SYSTEM::TO_FLOAT(uParam0->f_22));
		uParam0->f_14.f_2 = func_82(uParam0->f_14.f_2, SYSTEM::TO_FLOAT(-uParam0->f_20), SYSTEM::TO_FLOAT(uParam0->f_20));
	}
	if (UNK_0x91E3F625EF57450D(0) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (UNK_0x91E3F625EF57450D(0))
		{
			iVar13 = 40;
			iVar14 = 41;
			if (bParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (UNK_0xD245978525608929(0, iVar13))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = UNK_0x1C0640BA9A7327B3() + 4000;
				uParam0->f_28 = 0;
			}
			else if (UNK_0xD245978525608929(0, iVar14))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = UNK_0x1C0640BA9A7327B3() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_82(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_82(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = UNK_0x0DED1C1B8250FA57(2, 207);
			iVar0[3] = UNK_0x0DED1C1B8250FA57(2, 208);
			if (bParam3)
			{
				if (SYSTEM::TO_FLOAT(iVar0[3]) > 127f)
				{
					uParam0->f_17 = (uParam0->f_17 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * (uParam0->f_19 / 2f)))));
				}
			}
			else
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_19))));
				uParam0->f_17 = (uParam0->f_17 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * uParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0.06f) * fVar9));
	UNK_0x86F44313DFA8F00C(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (UNK_0x9F4FE516EAACCFC5(*uParam0))
	{
		if (UNK_0xFBB4F23D534EB790(*uParam0))
		{
			if (UNK_0x9CF8D5C7090408A2(*uParam0))
			{
				UNK_0x9501364A300048C6();
			}
		}
	}
}

float func_82(float fParam0, float fParam1, float fParam2)
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

int func_83(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_84(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
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

void func_85(var uParam0)
{
	bool bVar0;
	bool bVar1;

	if (!func_12(3, *uParam0))
	{
		if (uParam0->f_483 == 0 && uParam0->f_455 > 3)
		{
			if (uParam0->f_452 == -1)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 19))
				{
					uParam0->f_452 = UNK_0x1C0640BA9A7327B3() + 500;
				}
				else
				{
					uParam0->f_452 = UNK_0x1C0640BA9A7327B3();
				}
			}
			else if (UNK_0x1C0640BA9A7327B3() > uParam0->f_452)
			{
				bVar0 = false;
				bVar1 = false;
				while (bVar1 < uParam0->f_1.f_369)
				{
					if (!bVar0)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_1.f_303, bVar1 + 4))
						{
							func_87(uParam0, bVar1);
							if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_1.f_370, bVar1))
							{
								UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 19);
							}
							else
							{
								UNK_0x0674E58A79778E99(&(uParam0->f_449), 19);
							}
							bVar0 = true;
						}
					}
					bVar1++;
				}
				if (!bVar0)
				{
					func_86(3, *uParam0, 1);
				}
			}
		}
	}
}

void func_86(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (bParam1 < 0 || bParam1 >= 32)
	{
		return;
	}
	bVar0 = UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iParam0], bParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_9080.f_99.f_219[iParam0]), bParam1);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_9080.f_99.f_219[iParam0]), bParam1);
	}
}

void func_87(var uParam0, int iParam1)
{
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
	UNK_0x3CAEA85DA607305E(99);
	UNK_0x7E60D21B163E9D56();
	func_27(uParam0, &(uParam0->f_1.f_371[iParam1 /*2*/]), uParam0->f_1.f_11);
	func_25(uParam0, iParam1 + 4, 1);
	uParam0->f_452 = -1;
}

void func_88(var uParam0)
{
	int iVar0;
	int iVar1;

	if ((!func_21() && UNK_0x0F1CCD77290EE12F()) && !UNK_0x22A8E52414415B76())
	{
		if (uParam0->f_483 > 0)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 13))
			{
				if (func_89(&(uParam0->f_484), &(uParam0->f_467[0 /*5*/]), &(uParam0->f_467[0 /*5*/].f_2), 4, 0, 0, 0))
				{
					uParam0->f_455 = 0;
					if (uParam0->f_467[0 /*5*/].f_4)
					{
						UNK_0x0674E58A79778E99(&(uParam0->f_449), 11);
					}
					else
					{
						UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 11);
					}
					iVar0 = 0;
					while (iVar0 < 2)
					{
						uParam0->f_467[iVar0 /*5*/] = { uParam0->f_467[iVar0 + 1 /*5*/] };
						uParam0->f_467[iVar0 /*5*/].f_2 = { uParam0->f_467[iVar0 + 1 /*5*/].f_2 };
						uParam0->f_467[iVar0 /*5*/].f_4 = uParam0->f_467[iVar0 + 1 /*5*/].f_4;
						iVar0++;
					}
					uParam0->f_483 = (uParam0->f_483 - 1);
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					uParam0->f_467[iVar1 /*5*/] = { uParam0->f_467[iVar1 + 1 /*5*/] };
					uParam0->f_467[iVar1 /*5*/].f_2 = { uParam0->f_467[iVar1 + 1 /*5*/].f_2 };
					uParam0->f_467[iVar1 /*5*/].f_4 = uParam0->f_467[iVar1 + 1 /*5*/].f_4;
					iVar1++;
				}
				uParam0->f_483 = (uParam0->f_483 - 1);
				UNK_0x0674E58A79778E99(&(uParam0->f_449), 13);
				UNK_0x0674E58A79778E99(&(uParam0->f_449), 11);
			}
		}
		else
		{
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 11))
			{
				UNK_0x0674E58A79778E99(&(uParam0->f_449), 11);
			}
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 13))
			{
				UNK_0x0674E58A79778E99(&(uParam0->f_449), 13);
			}
			uParam0->f_455++;
		}
	}
}

int func_89(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_109(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_90(sParam2, iParam3, 0);
}

int func_90(char* sParam0, int iParam1, bool bParam2)
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
					func_108();
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
		if (func_107(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_106();
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
				func_99();
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
				if (func_98())
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
			if (func_75())
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
			func_97();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_96();
		func_91();
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
		func_108();
	}
	return 0;
}

void func_91()
{
	if (!func_92())
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

bool func_92()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_95())
	{
		return false;
	}
	if (func_93(UNK_0xD803B885F5E47A62()))
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

bool func_93(int iParam0)
{
	return func_94(iParam0, 20);
}

bool func_94(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_95()
{
	return -1;
}

void func_96()
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

void func_97()
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

bool func_98()
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

void func_99()
{
	if (func_325(14))
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
		Global_19486 = func_100();
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

bool func_100()
{
	func_101();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_101()
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_104(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			bVar0 = func_103(UNK_0x16F2683693E537C9());
			if (func_102(bVar0) && (!func_325(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != bVar0 && func_102(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = bVar0;
				Global_111638.f_2358.f_539.f_4321 = bVar0;
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

bool func_102(bool bParam0)
{
	return bParam0 < 3;
}

int func_103(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_104(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_104(bool bParam0)
{
	if (func_102(bParam0))
	{
		return func_105(bParam0);
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

var func_105(bool bParam0)
{
	return Global_1798[bParam0 /*29*/];
}

void func_106()
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

bool func_107(bool bParam0, int iParam1)
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

void func_108()
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

void func_109(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_110(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;

	uParam0->f_453++;
	if (UNK_0xB8E3620B82AD47D7(2))
	{
		func_9(uParam0);
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 11))
	{
		if ((UNK_0xBFC0798A6E3417F9(2, iLocal_37) || UNK_0xBFC0798A6E3417F9(2, iLocal_39)) || (UNK_0x91E3F625EF57450D(2) && (UNK_0xBFC0798A6E3417F9(2, iLocal_38) || UNK_0xBFC0798A6E3417F9(2, iLocal_40))))
		{
			func_118();
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 12))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 13);
				UNK_0x0674E58A79778E99(&(uParam0->f_449), 11);
				UNK_0x0674E58A79778E99(&(uParam0->f_449), 10);
			}
			UNK_0x0674E58A79778E99(&(uParam0->f_449), 12);
		}
	}
	func_84(&(uParam0->f_458[0]), &(uParam0->f_458[1]), &(uParam0->f_458[2]), &(uParam0->f_458[3]), 0, 0);
	if (UNK_0x91E3F625EF57450D(2))
	{
		uParam0->f_458[2] = (uParam0->f_458[2] / 10);
		uParam0->f_458[3] = (uParam0->f_458[3] / 10);
		uParam0->f_458[2] = func_83((uParam0->f_458[2] + uParam0->f_649.f_24), -127, 127);
		uParam0->f_458[3] = func_83((uParam0->f_458[3] + uParam0->f_649.f_25), -127, 127);
	}
	uParam0->f_649.f_24 = uParam0->f_458[2];
	uParam0->f_649.f_25 = uParam0->f_458[3];
	if (UNK_0x89DF0B812BA6383B())
	{
		uParam0->f_458[3] = -uParam0->f_458[3];
	}
	if (uParam0->f_454 > UNK_0x1C0640BA9A7327B3())
	{
		uParam0->f_458[2] = 0;
		uParam0->f_458[3] = 0;
	}
	if (uParam0->f_464 == 0 || uParam0->f_464 == 4)
	{
		if (uParam0->f_453 > 15)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 4);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(uParam0->f_449), 4);
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 10))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 11))
		{
			if ((UNK_0x1C0640BA9A7327B3() - uParam0->f_456) > 200)
			{
				if ((uParam0->f_464 == 2 || uParam0->f_464 == 3) || uParam0->f_464 == 4)
				{
					if ((UNK_0x1C0640BA9A7327B3() - uParam0->f_457) > 25000)
					{
						func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[3 /*2*/], 1);
						uParam0->f_457 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(false, 8000));
					}
				}
				if (uParam0->f_464 == 2)
				{
					if ((((uParam0->f_458[1] < -85 || uParam0->f_458[0] < -85) || UNK_0x06F8112AA79C53D9(2, 188)) || UNK_0x06F8112AA79C53D9(2, 189)) || (UNK_0x91E3F625EF57450D(2) && UNK_0xD245978525608929(2, 241)))
					{
						UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
						UNK_0x3CAEA85DA607305E(8);
						UNK_0x7E60D21B163E9D56();
						UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = UNK_0x7A8BB56B212464AC();
						uParam0->f_456 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((((uParam0->f_458[1] > 85 || uParam0->f_458[0] > 85) || UNK_0x06F8112AA79C53D9(2, 187)) || UNK_0x06F8112AA79C53D9(2, 190)) || (UNK_0x91E3F625EF57450D(2) && UNK_0xD245978525608929(0, 242)))
					{
						UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
						UNK_0x3CAEA85DA607305E(9);
						UNK_0x7E60D21B163E9D56();
						UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = UNK_0x7A8BB56B212464AC();
						uParam0->f_456 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (uParam0->f_464 == 3)
				{
					if ((uParam0->f_458[1] < -85 || UNK_0x06F8112AA79C53D9(2, 188)) || (UNK_0x91E3F625EF57450D(2) && UNK_0xD245978525608929(0, 40)))
					{
						UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
						UNK_0x3CAEA85DA607305E(8);
						UNK_0x7E60D21B163E9D56();
						if (uParam0->f_416 != 0)
						{
							UNK_0x4D7F4CC43D4D0DE3(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						uParam0->f_416 = 0;
						if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 9))
						{
							UNK_0x0674E58A79778E99(&(uParam0->f_449), 9);
							func_9(uParam0);
						}
						uParam0->f_456 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((uParam0->f_458[1] > 85 || UNK_0x06F8112AA79C53D9(2, 187)) || (UNK_0x91E3F625EF57450D(2) && UNK_0xD245978525608929(0, 41)))
					{
						UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
						UNK_0x3CAEA85DA607305E(9);
						UNK_0x7E60D21B163E9D56();
						if (uParam0->f_416 != 1)
						{
							UNK_0x4D7F4CC43D4D0DE3(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						uParam0->f_416 = 1;
						if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 9))
						{
							UNK_0x0674E58A79778E99(&(uParam0->f_449), 9);
							func_9(uParam0);
						}
						uParam0->f_456 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (!func_21() || UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 13))
				{
					if (UNK_0xBFC0798A6E3417F9(2, iLocal_37) || (UNK_0x91E3F625EF57450D(2) && UNK_0xBFC0798A6E3417F9(2, iLocal_38)))
					{
						switch (uParam0->f_464)
						{
							case 3:
								if (!func_21())
								{
									if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 9))
									{
										uParam0->f_456 = UNK_0x1C0640BA9A7327B3();
										iVar0 = func_32(*uParam0);
										if (iVar0 != -1)
										{
											UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "GET_CURRENT_SELECTION");
											uParam0->f_680 = UNK_0x7A8BB56B212464AC();
											func_13(uParam0, 1);
											func_15(&(uParam0->f_1.f_20[0 /*4*/]), 1);
											func_15(&(uParam0->f_1.f_20[1 /*4*/]), 1);
											Global_111638.f_1[*uParam0] = 1;
											UNK_0xA37A90C62806D848(0);
										}
									}
								}
								break;
							case 2:
								if (!func_12(4, *uParam0))
								{
									iVar0 = func_32(*uParam0);
									iVar1 = func_66(iVar0);
									if (uParam0->f_450 < Global_94773[iVar1 /*19*/])
									{
										UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "GET_CURRENT_SELECTION");
										uParam0->f_681 = UNK_0x7A8BB56B212464AC();
										func_13(uParam0, 1);
									}
								}
								break;
							case 4:
								if (*uParam0 != 1)
								{
									func_86(4, *uParam0, 1);
									if (!func_3(0))
									{
										func_116(*uParam0);
									}
								}
								else
								{
									func_86(5, *uParam0, 1);
								}
								UNK_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iVar0 = func_32(*uParam0);
								iVar1 = func_66(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_94773[iVar1 /*19*/])
								{
									if (Global_111638.f_1.f_12[iVar1 /*6*/][iVar2] == 0 || func_41(Global_111638.f_1.f_12[iVar1 /*6*/][iVar2]) != Global_94773[iVar1 /*19*/].f_1[iVar2])
									{
										bVar4 = false;
										iVar5 = 0;
										while (iVar5 < 14)
										{
											if (!bVar4)
											{
												bVar4 = true;
												bVar3 = iVar5;
												if (bVar3 != 0)
												{
													if (Global_94619[bVar3 /*5*/] != Global_94773[iVar1 /*19*/].f_1[iVar2])
													{
														bVar4 = false;
													}
													if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_116, bVar3))
													{
														bVar4 = false;
													}
													if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_118, bVar3))
													{
														bVar4 = false;
													}
													if (bVar3 == 11 && *uParam0 == 3)
													{
														bVar4 = false;
													}
													if (func_38(uParam0, bVar3))
													{
														bVar4 = false;
													}
												}
												else
												{
													bVar4 = false;
												}
											}
											iVar5++;
										}
										Global_111638.f_1.f_12[iVar1 /*6*/][iVar2] = bVar3;
									}
									iVar2++;
								}
								func_13(uParam0, 1);
								func_63(uParam0, iVar1, 4);
								break;
						}
						uParam0->f_427 = 0;
					}
					if (UNK_0xBFC0798A6E3417F9(2, iLocal_39) || (UNK_0x91E3F625EF57450D(2) && UNK_0xBFC0798A6E3417F9(2, iLocal_40)))
					{
						switch (uParam0->f_464)
						{
							case 2:
								iVar0 = func_32(*uParam0);
								iVar1 = func_66(iVar0);
								if (uParam0->f_450 > 0)
								{
									func_13(uParam0, 1);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar6 = Global_111638.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_111638.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_94773[iVar1 /*19*/].f_1[uParam0->f_450];
									func_36(uParam0, uParam0->f_450, iVar6);
									UNK_0x4D7F4CC43D4D0DE3(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
									uParam0->f_427 = 0;
									uParam0->f_456 = UNK_0x1C0640BA9A7327B3();
								}
								else if (!func_330(0))
								{
									if (*uParam0 != 2)
									{
										bVar7 = false;
										while (bVar7 < uParam0->f_1.f_96)
										{
											UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											UNK_0x3CAEA85DA607305E(bVar7);
											UNK_0x7E60D21B163E9D56();
											UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											UNK_0x3CAEA85DA607305E(bVar7);
											UNK_0x1200CC973A2399C8(true);
											UNK_0x7E60D21B163E9D56();
											bVar7++;
										}
										UNK_0x4D7F4CC43D4D0DE3(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
										bVar7 = false;
										while (bVar7 < 2)
										{
											if (uParam0->f_1.f_30[bVar7] != 13)
											{
												func_2(*uParam0, uParam0->f_1.f_30[bVar7], 0);
											}
											bVar7++;
										}
										uParam0->f_427 = 0;
										func_13(uParam0, 1);
										uParam0->f_456 = UNK_0x1C0640BA9A7327B3();
										uParam0->f_465 = 0;
										func_115(0, 1);
									}
								}
								break;
							case 4:
								if (*uParam0 != 1)
								{
									iVar0 = func_32(*uParam0);
									iVar1 = func_66(iVar0);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar8 = Global_111638.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_111638.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_94773[iVar1 /*19*/].f_1[uParam0->f_450];
									func_7(uParam0, 2, iVar8);
								}
								else
								{
									iVar9 = 0;
									while (iVar9 < 2)
									{
										if (uParam0->f_1.f_30[iVar9] != 13)
										{
											func_2(*uParam0, uParam0->f_1.f_30[iVar9], 0);
										}
										iVar9++;
									}
									func_114(8, 0);
									func_86(5, 1, 0);
									uParam0->f_427 = 0;
									func_13(uParam0, 1);
									uParam0->f_456 = UNK_0x1C0640BA9A7327B3();
									func_7(uParam0, 3, 0);
								}
								UNK_0x4D7F4CC43D4D0DE3(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
								break;
						}
					}
				}
			}
		}
	}
	else if (uParam0->f_455 > 5)
	{
		iVar0 = func_32(*uParam0);
		iVar1 = func_66(iVar0);
		if (uParam0->f_450 >= Global_94773[iVar1 /*19*/] || (*uParam0 == 1 && uParam0->f_450 > uParam0->f_415))
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
			UNK_0x3CAEA85DA607305E(99);
			UNK_0x3CAEA85DA607305E(-1);
			UNK_0x7E60D21B163E9D56();
			func_25(uParam0, 0, 1);
			func_7(uParam0, 4, 0);
		}
		else
		{
			if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 17))
			{
				iVar10 = Global_111638.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
				Global_111638.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
				uParam0->f_465 = Global_94773[iVar1 /*19*/].f_1[uParam0->f_450];
				func_36(uParam0, uParam0->f_450, iVar10);
			}
			UNK_0x0674E58A79778E99(&(uParam0->f_449), 17);
		}
		uParam0->f_457 = UNK_0x1C0640BA9A7327B3();
		UNK_0x0674E58A79778E99(&(uParam0->f_449), 10);
	}
	else if (UNK_0xFEBC1E4EC9E001F0())
	{
		if (((!func_14(&(uParam0->f_1.f_108[0 /*4*/])) && !func_14(&(uParam0->f_1.f_108[1 /*4*/]))) && !func_14(&(uParam0->f_1.f_20[0 /*4*/]))) && !func_14(&(uParam0->f_1.f_20[1 /*4*/])))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
	if (uParam0->f_680 != 0)
	{
		if (UNK_0xC95D7AEEDEF4946B(uParam0->f_680))
		{
			iVar11 = UNK_0xA52833FE33F41C53(uParam0->f_680);
			iVar1 = func_31(*uParam0, iVar11);
			iVar0 = func_32(*uParam0);
			func_114(iVar0, iVar1);
			if (!func_3(0))
			{
				func_113(*uParam0);
			}
			UNK_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_63(uParam0, iVar1, 0);
			if (uParam0->f_1.f_30[iVar11] != 13)
			{
				func_2(*uParam0, uParam0->f_1.f_30[iVar11], 1);
			}
			bVar12 = false;
			while (bVar12 < uParam0->f_1.f_96)
			{
				func_62(uParam0, bVar12);
				if (bVar12 < Global_94773[iVar1 /*19*/])
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
					UNK_0x3CAEA85DA607305E(bVar12);
					UNK_0x1200CC973A2399C8(true);
					UNK_0x7E60D21B163E9D56();
				}
				else
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
					UNK_0x3CAEA85DA607305E(bVar12);
					UNK_0x1200CC973A2399C8(false);
					UNK_0x7E60D21B163E9D56();
				}
				bVar12++;
			}
			if (*uParam0 != 1)
			{
				func_86(5, *uParam0, 1);
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 10);
				uParam0->f_450++;
			}
			UNK_0xA37A90C62806D848(0);
			uParam0->f_680 = 0;
		}
	}
	if (uParam0->f_681 != 0)
	{
		if (UNK_0xC95D7AEEDEF4946B(uParam0->f_681))
		{
			bVar13 = UNK_0xA52833FE33F41C53(uParam0->f_681);
			iVar0 = func_32(*uParam0);
			iVar1 = func_66(iVar0);
			Global_111638.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = uParam0->f_418[bVar13];
			bVar14 = Global_111638.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "UPDATE_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(uParam0->f_450);
			UNK_0x3CAEA85DA607305E(bVar13);
			UNK_0x3CAEA85DA607305E(bVar14);
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
			UNK_0x3CAEA85DA607305E(99);
			UNK_0x7E60D21B163E9D56();
			UNK_0x4D7F4CC43D4D0DE3(-1, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
			UNK_0x0674E58A79778E99(&(uParam0->f_449), 17);
			func_112(uParam0, bVar14);
			uParam0->f_450++;
			uParam0->f_417 = uParam0->f_450;
			uParam0->f_456 = UNK_0x1C0640BA9A7327B3();
			uParam0->f_457 = uParam0->f_456;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 10);
			if (!func_14(&(uParam0->f_1.f_108[0 /*4*/])) && !func_14(&(uParam0->f_1.f_108[1 /*4*/])))
			{
				UNK_0xA37A90C62806D848(0);
			}
			uParam0->f_681 = 0;
		}
	}
	if (uParam0->f_682 != 0)
	{
		if (UNK_0xC95D7AEEDEF4946B(uParam0->f_682))
		{
			iVar15 = UNK_0xA52833FE33F41C53(uParam0->f_682);
			if (iVar15 != -1)
			{
				iVar16 = uParam0->f_418[iVar15];
				if (iVar16 != uParam0->f_427)
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
				}
				uParam0->f_427 = iVar16;
			}
			uParam0->f_682 = 0;
		}
	}
	if (uParam0->f_427 != 0)
	{
		func_111(uParam0, uParam0->f_427);
	}
}

void func_111(var uParam0, int iParam1)
{
	if (!func_21())
	{
		if (uParam0->f_483 == 0)
		{
			switch (iParam1)
			{
				case 10:
					if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_119, 14))
					{
						if (!UNK_0x7F8A39872A07D2CE(&(uParam0->f_1.f_304[14 /*2*/]), ""))
						{
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 10);
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 17);
							func_26(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[14 /*2*/], 1);
							UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 14);
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				case 13:
					if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_119, 16))
					{
						if (!UNK_0x7F8A39872A07D2CE(&(uParam0->f_1.f_304[16 /*2*/]), ""))
						{
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 10);
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 17);
							func_26(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[16 /*2*/], 1);
							UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 16);
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				case 12:
					if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_119, 15))
					{
						if (!UNK_0x7F8A39872A07D2CE(&(uParam0->f_1.f_304[15 /*2*/]), ""))
						{
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 10);
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 17);
							func_26(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[15 /*2*/], 1);
							UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 15);
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				case 11:
					if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_119, 17))
					{
						if (!UNK_0x7F8A39872A07D2CE(&(uParam0->f_1.f_304[17 /*2*/]), ""))
						{
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 10);
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 17);
							func_26(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[17 /*2*/], 1);
							UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 17);
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
			}
		}
	}
}

void func_112(var uParam0, bool bParam1)
{
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_463, bParam1))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_119, bParam1))
		{
			if (!UNK_0x7F8A39872A07D2CE(&(uParam0->f_1.f_304[bParam1 /*2*/]), ""))
			{
				func_26(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[bParam1 /*2*/], 1);
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_119), bParam1);
			}
		}
		else
		{
			switch (*uParam0)
			{
				case 2:
					switch (bParam1)
					{
						case 1:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, false))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						case 10:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, true))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				case 3:
					switch (bParam1)
					{
						case 12:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 3))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
							}
							break;
						case 9:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 6))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
							}
							break;
						case 1:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, false))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 7))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 7))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						case 10:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, true))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 8))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 8))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						case 6:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 4))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						case 7:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 2))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						case 8:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 5))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				case 4:
					switch (bParam1)
					{
						case 12:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 15))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 3))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[25 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
								}
							}
							break;
						case 7:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 2))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 14))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[30 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[28 /*2*/], 1);
								}
							}
							else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 14))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[29 /*2*/], 1);
							}
							break;
						case 9:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 18))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 6))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[27 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
								}
							}
							break;
						case 4:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 17))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						case 5:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 12))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						case 1:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 10))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, false))
								{
									if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 7))
									{
										func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						case 10:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 11))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, true))
								{
									if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 8))
									{
										func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						case 3:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 13))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
						case 6:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 19))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 4))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						case 8:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 16))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 5))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						case 13:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 20))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
					}
					break;
			}
		}
		UNK_0x5D96D8530B3D0904(&(uParam0->f_463), bParam1);
	}
}

void func_113(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = Global_111638.f_9080.f_99.f_205[7];
			if (iVar0 == 1)
			{
				UNK_0xD8B681091EBE4064(joaat("SP_HEIST_CHOSE_JEWEL_STEALTH"), true, 1);
			}
			else
			{
				UNK_0xD8B681091EBE4064(joaat("SP_HEIST_CHOSE_JEWEL_STEALTH"), false, 1);
			}
			break;
		case 1:
			iVar0 = Global_111638.f_9080.f_99.f_205[8];
			if (iVar0 == 3)
			{
				UNK_0xD8B681091EBE4064(joaat("SP_HEIST_CHOSE_DOCKS_SINK_SHIP"), true, 1);
			}
			else
			{
				UNK_0xD8B681091EBE4064(joaat("SP_HEIST_CHOSE_DOCKS_SINK_SHIP"), false, 1);
			}
			break;
		case 3:
			iVar0 = Global_111638.f_9080.f_99.f_205[10];
			if (iVar0 == 6)
			{
				UNK_0xD8B681091EBE4064(joaat("SP_HEIST_CHOSE_BUREAU_FIRECREW"), true, 1);
			}
			else
			{
				UNK_0xD8B681091EBE4064(joaat("SP_HEIST_CHOSE_BUREAU_FIRECREW"), false, 1);
			}
			break;
		case 4:
			iVar0 = Global_111638.f_9080.f_99.f_205[11];
			if (iVar0 == 8)
			{
				UNK_0xD8B681091EBE4064(joaat("SP_HEIST_CHOSE_BIGS_TRAFFIC"), true, 1);
			}
			else
			{
				UNK_0xD8B681091EBE4064(joaat("SP_HEIST_CHOSE_BIGS_TRAFFIC"), false, 1);
			}
			break;
	}
}

void func_114(int iParam0, int iParam1)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_111638.f_9080.f_99.f_205[iParam0] == iParam1)
	{
		return;
	}
	Global_111638.f_9080.f_99.f_205[iParam0] = iParam1;
}

void func_115(int iParam0, int iParam1)
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

void func_116(int iParam0)
{
	int iVar0;
	int iVar1;

	func_117(iParam0);
	switch (iParam0)
	{
		case 0:
			iVar1 = Global_111638.f_9080.f_99.f_205[7];
			iVar0 = 0;
			while (iVar0 < Global_94773[iVar1 /*19*/])
			{
				switch (Global_111638.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), false);
						break;
					case 10:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), true);
						UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 14);
						break;
					case 7:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 2);
						break;
					case 12:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 3);
						UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 15);
						break;
					case 6:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 4);
						break;
					case 8:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 5);
						break;
					case 9:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 6);
						break;
				}
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_119), Global_111638.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		case 2:
			iVar1 = Global_111638.f_9080.f_99.f_205[9];
			iVar0 = 0;
			while (iVar0 < Global_94773[iVar1 /*19*/])
			{
				switch (Global_111638.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 7);
						break;
					case 10:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 8);
						UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 14);
						break;
					case 11:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 9);
						UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 17);
						break;
				}
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_119), Global_111638.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		case 3:
			iVar1 = Global_111638.f_9080.f_99.f_205[10];
			iVar0 = 0;
			while (iVar0 < Global_94773[iVar1 /*19*/])
			{
				switch (Global_111638.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 10);
						break;
					case 10:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 11);
						UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 14);
						break;
					case 5:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 12);
						break;
					case 3:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 13);
						break;
					case 4:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 17);
						break;
					case 7:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 14);
						break;
					case 12:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 15);
						UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 15);
						break;
					case 6:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 19);
						break;
					case 8:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 16);
						break;
					case 9:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 18);
						break;
					case 13:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 20);
						UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 16);
						break;
				}
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_119), Global_111638.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
	}
}

void func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), false);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), true);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 2);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 3);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 4);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 5);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 6);
			break;
		case 2:
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 7);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 8);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 9);
			break;
		case 3:
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 10);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 11);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 12);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 13);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 14);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 15);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 16);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 17);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 18);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 19);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 20);
			break;
	}
}

void func_118()
{
	Global_19671 = 0;
	func_119();
}

void func_119()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_120()
{
	UNK_0xC2127C0F64D6A3B9();
	func_121();
}

void func_121()
{
	Global_22211.f_134 = 1;
}

void func_122(var uParam0)
{
	vector3 vVar0;
	int iVar3;

	uParam0->f_453 = 0;
	uParam0->f_463 = 0;
	UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 9);
	func_13(uParam0, 0);
	if (!UNK_0x22A8E52414415B76())
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (Global_42596 == 1)
			{
				func_127(UNK_0x16F2683693E537C9());
			}
			vVar0 = { uParam0->f_401 };
			vVar0 = { vVar0 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_404))), (2.9f * SYSTEM::SIN((180f - uParam0->f_404)))) };
			UNK_0xE82754C349C7B581(vVar0, &(vVar0.f_2), 0, 0);
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 134);
			UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vVar0, 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), uParam0->f_404);
			UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
			UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), true);
		}
		UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 7);
	}
	UNK_0xBFE31971E49FA500(0);
	func_73(1);
	func_126();
	UNK_0x56FCE5C6DA4AA600();
	UNK_0x536F1BE96C726C4B(uParam0->f_401, 5f, 1, 1, 0, false);
	UNK_0xD7AD2803AD9697F7(uParam0->f_401, 5f);
	UNK_0x911B98CDC647AC76(true);
	UNK_0xD02CE72B4B66DC29(82, 66);
	UNK_0x744B56EE9DE7B57F(17, 0.612f, 0.818f);
	UNK_0xD59EF13BB60323B9();
	func_125(&(uParam0->f_649), uParam0->f_405, uParam0->f_408, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, -1082130432 /* Float: -1f */, 0);
	iVar3 = UNK_0xFBD08BECC9B87937(uParam0->f_401);
	if (iVar3 != 0)
	{
		UNK_0x0007C2367F4F23F3(iVar3);
	}
	UNK_0xB8842F7C7761A196(&(Global_94690[uParam0->f_1.f_1 /*15*/].f_7));
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x445BDC28669C33B9(UNK_0xB1C09B89AED111A5(UNK_0x16F2683693E537C9()));
	}
	func_124(0);
	func_123();
	UNK_0x9CBC55A05A07FC47(0);
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "TOGGLE_MOUSE_BUTTONS");
		UNK_0x1200CC973A2399C8(false);
		UNK_0x7E60D21B163E9D56();
	}
	uParam0->f_466 = UNK_0xE32F7AC5E6DF304A(2, 10, true);
	UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 2);
	Global_94751 = 1;
	func_8(uParam0, uParam0->f_464, 0);
}

void func_123()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		func_17(iVar0);
		iVar0++;
	}
	Global_111638.f_20405.f_145 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_111638.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	if (UNK_0xFEBC1E4EC9E001F0())
	{
		UNK_0xA37A90C62806D848(1);
	}
}

void func_124(bool bParam0)
{
	if (!bParam0)
	{
		Global_110280 = UNK_0x1C0640BA9A7327B3() + 250;
	}
	Global_110277 = bParam0;
}

void func_125(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam4 };
	uParam0->f_7 = fParam7;
	uParam0->f_20 = iParam8;
	uParam0->f_21 = iParam9;
	uParam0->f_22 = iParam10;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam7;
	uParam0->f_18 = fParam7;
	uParam0->f_23 = iParam12;
	uParam0->f_19 = iParam11;
	*uParam0 = UNK_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
	UNK_0xE3BB8E05FCEB3FBE(*uParam0, true);
	UNK_0x86F44313DFA8F00C(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		UNK_0x91F5B0244AAE6222(*uParam0, "HAND_SHAKE", 0.19f);
	}
	UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	if (fParam14 > 0f)
	{
		UNK_0xDC3CC6D1845B0567(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		UNK_0x3B05E4399DC8490C(iParam13);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_126()
{
	Global_22211.f_5 = 1;
}

void func_127(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam0 == 0)
	{
		return;
	}
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return;
	}
	iVar0 = func_135(bParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0 /*5*/];
		func_130(1, iVar1, 1);
		return;
	}
	iVar2 = func_129(bParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_128(iVar2);
}

void func_128(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42357[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42357[iParam0 /*5*/].f_1 == UNK_0x16F2683693E537C9())
		{
			Global_42594 = 0;
		}
	}
	Global_42357[iParam0 /*5*/] = 13;
	Global_42357[iParam0 /*5*/].f_1 = 0;
	Global_42357[iParam0 /*5*/].f_2 = 0;
	Global_42357[iParam0 /*5*/].f_3 = 0;
	Global_42357[iParam0 /*5*/].f_4 = 0;
	Global_42355 = (Global_42355 - 1);
	if (Global_42355 < 0)
	{
		Global_42355 = 0;
	}
}

int func_129(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0 /*5*/].f_1 == bParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_130(int iParam0, int iParam1, int iParam2)
{
	func_131(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_133(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_132();
	if (iVar0 == -1)
	{
		return;
	}
	Global_42464[iVar0 /*6*/] = iParam0;
	Global_42464[iVar0 /*6*/].f_1 = iParam1;
	Global_42464[iVar0 /*6*/].f_2 = iParam2;
	Global_42464[iVar0 /*6*/].f_3 = iParam3;
	Global_42464[iVar0 /*6*/].f_4 = iParam4;
	Global_42464[iVar0 /*6*/].f_5 = iParam5;
}

int func_132()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42464[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_133(int iParam0, int iParam1, int iParam2)
{
	if (func_134(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_134(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_42464[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_42464[iVar0 /*6*/])
			{
				if (iParam1 == Global_42464[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_135(bool bParam0)
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
		if (!Global_42383[iVar0 /*5*/] == -1)
		{
			if (bParam0 == Global_42383[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_136(var uParam0)
{
	int iVar0;

	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_137(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_137(int iParam0)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_138(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_137(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!UNK_0xE1DBBD6CE209517C(UNK_0xA30EC016B12C03E4()))
	{
		return false;
	}
	if (func_149(0))
	{
		return false;
	}
	if (UNK_0x22A8E52414415B76())
	{
		return false;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/] == 1 && Global_42151[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42151[iVar0 /*32*/].f_29)
				{
					return false;
				}
			}
			Global_42151[iVar0 /*32*/].f_5 = 1;
			Global_42151[iVar0 /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			if (Global_42151[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42151[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return false;
}

void func_139(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;

	if (UNK_0x8A22C4C08282BF26(joaat("CONTEXT_CONTROLLER")) < 1)
	{
	}
	if (UNK_0x991B1F0980C62628())
	{
		if (!*uParam0 == -1)
		{
			func_136(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/] = 1;
			Global_42151[iVar0 /*32*/].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0 /*32*/].f_4 = 0;
			Global_42151[iVar0 /*32*/].f_29 = 0;
			Global_42151[iVar0 /*32*/].f_5 = 0;
			Global_42151[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42151[iVar0 /*32*/].f_6 = iParam3;
			Global_42151[iVar0 /*32*/].f_31 = UNK_0x0D0A574C76D769AC();
			Global_42151[iVar0 /*32*/].f_7 = 0;
			Global_42151[iVar0 /*32*/].f_3 = iParam5;
			if (!UNK_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_42151[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42151[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42151[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0 /*32*/].f_12 = 0;
				Global_42151[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_42151[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_140(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_100();
				if (!func_102(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_148()) || Global_110685) || Global_30770) || func_147()) || func_107(8, -1)) || func_146()) || func_145()) || func_144()) || func_143()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_148()) || Global_30770) || func_147()) || func_107(8, -1)) || func_144()) || func_146()) || func_145()) || func_143()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_148()) || Global_110685) || Global_30770) || func_147()) || func_107(8, -1)) || func_144()) || func_146()) || func_145()) || func_143()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_148()) || Global_110685) || Global_30770) || func_147()) || func_107(8, -1)) || func_146()) || func_145()) || func_143()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_148() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_107(8, -1)) || func_143()) || func_142()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_107(8, -1) || func_146()) || func_145()) || func_142()) || func_141())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_148()) || Global_30770) || func_147()) || func_107(8, -1)) || func_145()) || func_144()) || func_143()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_148()) || func_145()) || Global_110685) || Global_30770) || func_147()) || Global_42596) || func_107(8, -1)) || func_144()) || func_142()) || func_143()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_148()) || Global_110685) || Global_30770) || func_147()) || func_107(8, -1)) || func_144()) || func_142()) || func_146()) || func_145()) || func_143())
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

bool func_141()
{
	return Global_98783.f_1;
}

bool func_142()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_143()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_144()
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

bool func_145()
{
	return Global_98796.f_346 > 0;
}

bool func_146()
{
	return Global_98796.f_345 > 0;
}

bool func_147()
{
	return Global_1312877;
}

bool func_148()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_149(int iParam0)
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

bool func_150(int iParam0)
{
	return func_151(iParam0, Global_41431);
}

int func_151(int iParam0, int iParam1)
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

bool func_152(var uParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, true))
	{
		func_154(uParam0);
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, false))
	{
		func_153(uParam0);
	}
	return true;
}

void func_153(var uParam0)
{
	UNK_0x42740B44BA8D7B43("HEIST_BULLETIN_BOARD");
	UNK_0x71199B01895C6202(joaat("PROP_LD_PLANNING_PIN_01"));
	UNK_0x71199B01895C6202(joaat("PROP_LD_PLANNING_PIN_02"));
	UNK_0x71199B01895C6202(joaat("PROP_LD_PLANNING_PIN_03"));
	if (uParam0->f_413 != 0)
	{
		UNK_0xE17FDF9E3068281B(&(uParam0->f_413));
	}
	if (uParam0->f_414 != 0)
	{
		UNK_0xE17FDF9E3068281B(&(uParam0->f_414));
	}
	UNK_0x11CCD0ACA866C6C5(5, 0);
	UNK_0x0674E58A79778E99(&Global_94754, *uParam0);
	UNK_0x0674E58A79778E99(&(uParam0->f_449), false);
}

void func_154(var uParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, true))
	{
		if (!UNK_0x22A8E52414415B76())
		{
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
			{
				func_70(uParam0, 0);
			}
		}
		func_155(uParam0);
		UNK_0x0674E58A79778E99(&(uParam0->f_449), true);
		UNK_0x0674E58A79778E99(&Global_94753, *uParam0);
	}
}

void func_155(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (UNK_0xC844350D5D58C99A(uParam0->f_428[iVar0]))
		{
			UNK_0xF690C84DADBB3551(&(uParam0->f_428[iVar0]));
		}
		iVar0++;
	}
}

void func_156()
{
	int iVar0;
	bool bVar1;

	if (func_330(7))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 7))
		{
			UNK_0xAE1670DD12E839C3("AH_2_EXT_P4", 8);
			UNK_0x92DCE5C81176D2B4("lesterHandler");
			UNK_0x523BCC9DC80CD82F(joaat("PROP_LAPTOP_01A"));
			UNK_0x5D96D8530B3D0904(&bLocal_41, 7);
		}
		else if (UNK_0x75EECC9B0572F772())
		{
			UNK_0xA2888AACD3C45CCA("LESTER", true, 0, 0, false);
		}
	}
	if (func_330(8))
	{
		if (func_330(7))
		{
			if ((UNK_0xA0F4292EA950943D("AH_2_EXT_P4") && UNK_0x1FBF08B001C4788A("lesterHandler")) && UNK_0xB87F6CF6E5628C67(joaat("PROP_LAPTOP_01A")))
			{
				if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
				{
					if (!func_3(0) || func_100() == 0)
					{
						UNK_0x29E8331978B73E7F(UNK_0x16F2683693E537C9(), "MICHAEL", 0, joaat("PLAYER_ZERO"), 0);
					}
					else
					{
						UNK_0x29E8331978B73E7F(iLocal_49[0], "MICHAEL", 2, joaat("PLAYER_ZERO"), 0);
						UNK_0x5D96D8530B3D0904(&bLocal_41, 12);
					}
				}
				if (func_3(0))
				{
					if (UNK_0xC844350D5D58C99A(bLocal_45))
					{
						UNK_0x29E8331978B73E7F(bLocal_45, "FRANKLIN", 1, joaat("PLAYER_ONE"), 0);
					}
				}
				UNK_0x29E8331978B73E7F(bLocal_46, "LESTER", 2, joaat("IG_LESTERCREST"), 0);
				UNK_0x5D96D8530B3D0904(&bLocal_41, 10);
				func_288(0);
				func_124(1);
				func_280(1, 1, 1, 0, 0, 0);
				func_73(1);
				iVar0 = 0;
				while (iVar0 < func_279(3))
				{
					if (func_277(3, iVar0) == 12)
					{
						func_263(406771743);
					}
					iVar0++;
				}
				UNK_0x4C902758BEA97C68(256);
				if (func_3(0))
				{
					UNK_0xFCA2A436FD40C153(0, 0, 0, 0);
				}
				func_115(7, 0);
				iLocal_44 = UNK_0x1C0640BA9A7327B3();
			}
		}
		else if (UNK_0x22A8E52414415B76())
		{
			func_120();
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_41, 5))
			{
				if (UNK_0xC844350D5D58C99A(UNK_0x6450C2A9FBA3C3BF("MICHAEL", joaat("PLAYER_ZERO"))))
				{
					UNK_0x4A4806F9D471E491(UNK_0x6450C2A9FBA3C3BF("MICHAEL", joaat("PLAYER_ZERO")), true, 0);
				}
				UNK_0x0674E58A79778E99(&bLocal_41, 5);
			}
			if (func_100() != 0)
			{
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_41, 12))
				{
					if (UNK_0xC844350D5D58C99A(UNK_0x6450C2A9FBA3C3BF("MICHAEL", joaat("PLAYER_ZERO"))))
					{
						iLocal_49[0] = UNK_0x940C1429253D3B1B(UNK_0x6450C2A9FBA3C3BF("MICHAEL", joaat("PLAYER_ZERO")));
						UNK_0x0674E58A79778E99(&bLocal_41, 12);
					}
				}
			}
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_41, 10))
			{
				if (UNK_0xC844350D5D58C99A(UNK_0x6450C2A9FBA3C3BF("LESTER", joaat("IG_LESTERCREST"))))
				{
					bLocal_46 = UNK_0x940C1429253D3B1B(UNK_0x6450C2A9FBA3C3BF("LESTER", joaat("IG_LESTERCREST")));
					UNK_0x0674E58A79778E99(&bLocal_41, 10);
				}
			}
			if (UNK_0x3148AE92ED70DC30("MICHAEL", 0))
			{
				if (func_100() != 0)
				{
					bLocal_45 = UNK_0x16F2683693E537C9();
					func_258(&iLocal_49, 0);
					func_196(&iLocal_49, 1, 0, 0);
					UNK_0x71199B01895C6202(joaat("PLAYER_ZERO"));
				}
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					UNK_0xBD453909DC26A85D(UNK_0x16F2683693E537C9(), joaat("MOTIONSTATE_WALK"), false, 1, 0);
					UNK_0xDEAC6BC509D10068(UNK_0x16F2683693E537C9(), 1f);
					if (UNK_0xA4FD7964FEE91ED8(0) == 4)
					{
						UNK_0x5A9FF5F994E904B8(UNK_0xD803B885F5E47A62(), 1f, 2000, false, 1, 0);
					}
					UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 208, false);
					UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 118, true);
					UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 213, true);
					UNK_0x11AD11297DC58CC7(UNK_0x16F2683693E537C9(), false);
					iLocal_43 = UNK_0x1C0640BA9A7327B3();
				}
			}
			UNK_0xDEAC6BC509D10068(UNK_0x16F2683693E537C9(), 1f);
			if (UNK_0x3148AE92ED70DC30("LESTER", joaat("IG_LESTERCREST")))
			{
				if (!UNK_0x437347B10A200C4B(bLocal_46, 0))
				{
					bVar1 = bLocal_46;
					SYSTEM::START_NEW_SCRIPT_WITH_ARGS("lesterHandler", &bVar1, 1, 1424);
					UNK_0x5E8C29AE121DF1C7("lesterHandler");
				}
			}
			if (UNK_0xEABED1927EFB48CA(0))
			{
				func_288(1);
			}
		}
		else
		{
			if (func_3(0))
			{
				if (UNK_0xC844350D5D58C99A(bLocal_45))
				{
					UNK_0xEBA53F35D0085654(&bLocal_45);
				}
				if (UNK_0xC844350D5D58C99A(bLocal_46))
				{
					UNK_0xEBA53F35D0085654(&bLocal_46);
				}
				UNK_0x53491B90E4FD0E56(0);
			}
			else
			{
				Global_61512 = 0;
				Global_98783 = 0;
				func_195();
			}
			func_280(0, 1, 1, 0, 0, 0);
			func_73(0);
			func_194(20000);
			func_192(&(Global_111638.f_2358.f_539), 67);
			func_164(&(Global_111638.f_2358.f_539), 67);
			UNK_0x71199B01895C6202(joaat("PROP_LAPTOP_01A"));
			func_163(&iLocal_42);
			UNK_0x0674E58A79778E99(&bLocal_41, 2);
			UNK_0xDEAC6BC509D10068(UNK_0x16F2683693E537C9(), 1f);
			if (UNK_0xA4FD7964FEE91ED8(0) == 4)
			{
				UNK_0xBD453909DC26A85D(UNK_0x16F2683693E537C9(), joaat("MOTIONSTATE_WALK"), false, 0, 0);
				UNK_0x5A9FF5F994E904B8(UNK_0xD803B885F5E47A62(), 1f, 2000, false, 1, 0);
			}
			UNK_0x2952D66A502EA873(iLocal_93, 0);
			if (iLocal_94 != -1)
			{
				if (UNK_0x49083FDB78AC0509(iLocal_94))
				{
					UNK_0xDDABC98CFF1A4C60(iLocal_94);
				}
			}
			UNK_0xEFED0CD6E25037B9();
			UNK_0x17E8C6920A1E386F(Local_95.f_1.f_394 - Local_95.f_1.f_397, Local_95.f_1.f_394 + Local_95.f_1.f_397, true, 0);
			UNK_0x34D79252800B23FF(5);
			func_157(3, 0);
			func_115(8, 0);
		}
	}
	else if (!func_330(7))
	{
		if (UNK_0xA0F4292EA950943D("AH_2_EXT_P4"))
		{
			UNK_0x5C8D148FC238F38A();
		}
	}
	if (iLocal_43 != -1)
	{
		if ((UNK_0x1C0640BA9A7327B3() - iLocal_43) > 2000)
		{
			UNK_0xDEAC6BC509D10068(UNK_0x16F2683693E537C9(), 1f);
			iLocal_43 = -1;
		}
	}
}

void func_157(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		bVar1 = iVar0;
		if (func_40(bVar1) || func_39(bVar1))
		{
			if (!(bVar1 == 11 && iParam0 == 3))
			{
				switch (bVar1)
				{
					case 1:
						func_160(4, 1);
						break;
					case 4:
						func_160(8, 1);
						break;
					case 6:
						func_160(10, 1);
						break;
					case 7:
						func_160(1, 1);
						break;
					case 8:
						func_160(3, 1);
						break;
					case 9:
						func_160(6, 1);
						break;
					case 10:
						func_160(9, 1);
						break;
					case 12:
						func_160(11, 1);
						break;
					case 13:
						func_160(12, 1);
						break;
					case 11:
						if (func_326(91))
						{
							func_160(0, 1);
						}
						break;
					case 5:
						if (func_326(91))
						{
							func_160(2, 1);
						}
						break;
					case 3:
						if (func_326(67))
						{
							func_160(5, 1);
						}
						break;
					case 2:
						if (func_326(77))
						{
							func_160(7, 1);
						}
						break;
				}
			}
		}
		iVar0++;
	}
	if (!func_40(10) && UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[4], false))
	{
		func_160(9, 1);
	}
	if (!func_40(13) && UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[16], false))
	{
		func_160(12, 1);
	}
	if (!func_40(12))
	{
		if (iParam0 == 4)
		{
			func_160(11, 1);
		}
	}
	if (!bParam1)
	{
		if (!func_159(69))
		{
			func_23("DI_HLP_HST", 2, 0, 20000, 10000, 7, 0, 209, 0);
		}
		func_158("DI_FEED_HST");
	}
}

void func_158(char* sParam0)
{
	UNK_0x1E64CE678ED5F61E("");
	UNK_0x49E52B24E5A757B3("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

bool func_159(int iParam0)
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

void func_160(bool bParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 >= 0 && bVar0 <= 31)
	{
		if (!func_162(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_26429.f_1), bVar0);
			if (!bParam1)
			{
				func_158(func_161(bParam0));
			}
		}
	}
}

char* func_161(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "CM_HSTCHE";
		case 1:
			return "CM_HSTCHR";
		case 2:
			return "CM_HSTDAR";
		case 3:
			return "CM_HSTEDD";
		case 4:
			return "CM_HSTGUS";
		case 5:
			return "CM_HSTHUG";
		case 6:
			return "CM_HSTKRM";
		case 7:
			return "CM_HSTKAR";
		case 8:
			return "CM_HSTNOR";
		case 9:
			return "CM_HSTPAC";
		case 10:
			return "CM_HSTPAI";
		case 11:
			return "CM_HSTRIC";
		case 12:
			return "CM_HSTTAL";
	}
	return "ERROR!";
}

bool func_162(bool bParam0)
{
	if (bParam0 != -1 && bParam0 != 13)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_26429.f_1, bParam0);
	}
	return false;
}

void func_163(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_41393)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

void func_164(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 17:
			func_165(uParam0, 0, 12);
			break;
		case 19:
			func_165(uParam0, 1, 13);
			break;
		case 29:
			func_165(uParam0, 1, 14);
			break;
		case 30:
			func_165(uParam0, 2, 15);
			func_165(uParam0, 1, 29);
			break;
		case 32:
			func_165(uParam0, 1, 16);
			func_165(uParam0, 0, 17);
			break;
		case 39:
			func_165(uParam0, 0, 21);
			func_165(uParam0, 1, 20);
			break;
		case 31:
			func_165(uParam0, 0, 18);
			break;
		case 20:
			func_165(uParam0, 2, 22);
			break;
		case 66:
			func_165(uParam0, 1, 23);
			break;
		case 68:
			func_165(uParam0, 1, 24);
			break;
		case 70:
			func_165(uParam0, 1, 67);
			break;
		case 8:
			func_165(uParam0, 1, 25);
			func_165(uParam0, 2, 26);
			break;
		case 67:
			func_165(uParam0, 1, 27);
			break;
		case 9:
			func_165(uParam0, 2, 28);
			break;
		case 38:
			func_165(uParam0, 2, 30);
			func_165(uParam0, 1, 19);
			break;
		case 83:
			func_165(uParam0, 2, 33);
			break;
		case 45:
			func_165(uParam0, 1, 35);
			break;
		case 64:
			func_165(uParam0, 0, 36);
			func_165(uParam0, 1, 37);
			break;
		case 91:
			func_165(uParam0, 0, 41);
			break;
		case 42:
			func_165(uParam0, 0, 58);
			Global_98148[0 /*98*/] = 0;
			func_165(uParam0, 2, 59);
			Global_98148[2 /*98*/] = 0;
			break;
		case 41:
			func_165(uParam0, 1, 42);
			func_165(uParam0, 2, 42);
			break;
		case 15:
			func_165(uParam0, 0, 46);
			func_165(uParam0, 1, 47);
			break;
		case 16:
			func_165(uParam0, 0, 48);
			break;
		case 48:
			func_165(uParam0, 1, 50);
			func_165(uParam0, 2, 51);
			break;
		case 74:
			func_165(uParam0, 0, 52);
			func_165(uParam0, 1, 66);
			break;
		case 76:
			func_165(uParam0, 1, 53);
			func_165(uParam0, 2, 54);
			func_165(uParam0, 0, 62);
			break;
		case 75:
			func_165(uParam0, 0, 61);
			func_165(uParam0, 1, 31);
			break;
		case 69:
			func_165(uParam0, 1, 63);
			break;
		case 84:
			func_165(uParam0, 0, 68);
			func_165(uParam0, 2, 69);
			break;
		case 85:
			func_165(uParam0, 0, 64);
			func_165(uParam0, 2, 65);
			break;
		case 93:
			func_165(uParam0, 1, 38);
			func_165(uParam0, 2, 39);
			break;
		case 11:
			func_165(uParam0, 2, 55);
			break;
		case 77:
			func_165(uParam0, 1, 56);
			func_165(uParam0, 2, 57);
			break;
		default:
			break;
	}
}

int func_165(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<98> Var1;
	var uVar99;
	var uVar102;
	var uVar103;
	var uVar106;

	if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[0], 9))
	{
		iVar0 = Global_111638.f_18528[iParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_111638.f_18528[iParam1] = iParam2;
	uParam0->f_2296[iParam1] = func_181();
	if (!func_180(iParam2, &(uParam0->f_2300[iParam1 /*3*/]), &(uParam0->f_2310[iParam1])))
	{
		return 0;
	}
	if (!func_179(uParam0->f_2300[iParam1 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_179(Global_97183[iParam2 /*3*/], 0f, 0f, 0f, 0))
		{
			Var1.f_11 = 12;
			Var1.f_31 = 49;
			Var1.f_81 = 2;
			if (func_166(iParam1, iParam2, &Var1, &uVar99, &uVar102, &uVar103, &uVar106))
			{
				Global_98148[iParam1 /*98*/] = { Var1 };
			}
		}
	}
	uParam0->f_2314[iParam1] = 0;
	uParam0->f_2318[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_2328[iParam1] = 0;
	return 1;
}

bool func_166(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_84 = 255;
	uParam2->f_85 = 255;
	uParam2->f_86 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_98148[iParam0 /*98*/] };
			if (Global_98443[iParam0] != 2)
			{
				if (UNK_0x0399732A9EBC368E(Global_98451[iParam0 /*3*/], -829.7478f, 192.117f, 76.73248f, -827.1384f, 153.8595f, 59.96172f, 33.25f, 0, true))
				{
					if (Global_98443[iParam0] == 1)
					{
						*uParam3 = { Global_98451[iParam0 /*3*/] - Global_111638.f_2358.f_539.f_2300[iParam0 /*3*/] };
						*uParam4 = (Global_98461[iParam0] - Global_111638.f_2358.f_539.f_2310[iParam0]);
						if (SYSTEM::VMAG2(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return false;
						}
					}
				}
				*uParam3 = { Global_98451[iParam0 /*3*/] - Global_111638.f_2358.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_98461[iParam0] - Global_111638.f_2358.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return true;
		case 6:
			*uParam2 = { Global_98148[iParam0 /*98*/] };
			if (Global_98443[iParam0] != 2)
			{
				*uParam3 = { Global_98451[iParam0 /*3*/] - Global_111638.f_2358.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_98461[iParam0] - Global_111638.f_2358.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return true;
		case 7:
			*uParam2 = { Global_98148[iParam0 /*98*/] };
			if (Global_98443[iParam0] != 2)
			{
				*uParam3 = { Global_98451[iParam0 /*3*/] - Global_111638.f_2358.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_98461[iParam0] - Global_111638.f_2358.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return true;
		case 11:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 37.43f, -23.81f, 0f };
			*uParam4 = 127f;
			return true;
		case 8:
			uParam2->f_97 = 0;
			*uParam2 = joaat("MESA");
			*uParam3 = { Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.195f, -90.0089f) };
			*uParam4 = (1.27f - 194.1887f);
			return true;
		case 9:
			return func_166(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 10:
			return func_166(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 13:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return true;
		case 14:
			func_168(iParam0, uParam2, 2);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return true;
		case 15:
			uParam2->f_97 = 0;
			*uParam2 = joaat("FROGGER");
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return true;
		case 55:
			uParam2->f_97 = 0;
			*uParam2 = joaat("MESA");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return true;
		case 56:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return true;
		case 57:
			uParam2->f_97 = 0;
			*uParam2 = joaat("PENUMBRA");
			*uParam3 = { Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.52f, 37.5988f) };
			*uParam4 = (141.28f - 90.0339f);
			return true;
		case 12:
			uParam2->f_97 = 0;
			*uParam2 = joaat("TAXI");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return true;
		case 16:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return true;
		case 17:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return true;
		case 18:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return true;
		case 19:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return true;
		case 20:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return true;
		case 23:
			return func_166(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 24:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return true;
		case 67:
			func_168(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return true;
		case 58:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return true;
		case 59:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return true;
		case 60:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return true;
		case 22:
			uParam2->f_97 = 0;
			*uParam2 = joaat("PHANTOM");
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return true;
		case 74:
			func_168(iParam0, uParam2, 1);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return true;
		case 38:
			func_168(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return true;
		case 41:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -2.72f, 0.45f, 1f };
			*uParam4 = -137f;
			return true;
		case 25:
			uParam2->f_97 = 0;
			*uParam2 = joaat("BLISTA");
			*uParam3 = { Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.68f, 72.2278f) };
			*uParam4 = (0.72f - 156.8827f);
			return true;
		case 27:
			uParam2->f_97 = 0;
			*uParam2 = joaat("SEMINOLE");
			*uParam3 = { Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f) };
			*uParam4 = (2.23f - 7.2736f);
			return true;
		case 26:
			uParam2->f_97 = 0;
			*uParam2 = joaat("PEYOTE");
			*uParam3 = { Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.786f, 257.9167f) };
			*uParam4 = (-1f - 97.2736f);
			return true;
		case 40:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return true;
		case 28:
			uParam2->f_97 = 0;
			*uParam2 = joaat("POLMAV");
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return true;
		case 234:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return true;
		case 75:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return true;
		case 76:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return true;
		case 42:
			uParam2->f_97 = 0;
			*uParam2 = joaat("MESA");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return true;
		case 43:
			uParam2->f_97 = 0;
			*uParam2 = joaat("MESA");
			*uParam3 = { Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.479f, 709.0244f) };
			*uParam4 = (247.4806f - 355.326f);
			return true;
		case 44:
			uParam2->f_97 = 0;
			*uParam2 = joaat("SADLER");
			*uParam3 = { Vector(5.1176f, -2936.843f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f) };
			*uParam4 = (253.776f - 334.1068f);
			return true;
		case 45:
			uParam2->f_97 = 0;
			*uParam2 = joaat("MIXER");
			*uParam3 = { Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.085f, 594.4415f) };
			*uParam4 = (2.62f - 299.0519f);
			return true;
		case 47:
			uParam2->f_97 = 0;
			*uParam2 = joaat("CAVALCADE");
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			StringCopy(&(uParam2->f_27), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return true;
		case 49:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return true;
		case 48:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = (164.2466f - 180f);
			return true;
		case 50:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return true;
		case 51:
			uParam2->f_97 = 0;
			*uParam2 = joaat("STRETCH");
			*uParam3 = { Vector(28.1755f, -550.2679f, -1170.72f) - Vector(30.2361f, -526.9999f, -1257.5f) };
			*uParam4 = (310.4708f - 220.9554f);
			return true;
		case 52:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return true;
		case 66:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return true;
		case 61:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return true;
		case 62:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return true;
		case 63:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return true;
		case 64:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return true;
		case 69:
			uParam2->f_97 = 0;
			*uParam2 = joaat("PRAIRIE");
			*uParam3 = { Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64.1848f - 180f);
			return true;
		case 65:
		case 54:
			uParam2->f_97 = 0;
			*uParam2 = joaat("FROGGER2");
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			uParam2->f_89 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = { 5.5414f, -6.6035f, 1.0473f };
				*uParam4 = -83.2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = { 5.7209f, -12.3958f, 1.0746f };
				*uParam4 = -152.2593f;
			}
			return true;
		case 112:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f };
			*uParam4 = UNK_0x79833B02DBD2A244(-180f, 180f);
			return true;
		case 113:
			if (func_166(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = UNK_0x79833B02DBD2A244(-180f, 180f);
				return true;
			}
			break;
		case 118:
			uParam2->f_97 = 0;
			*uParam2 = joaat("SCORCHER");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12.5f, 0f };
			*uParam6 = 5f;
			return true;
		case 119:
			if (func_166(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return true;
			}
			break;
		case 120:
			if (func_166(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return true;
			}
			break;
		case 173:
			uParam2->f_97 = 0;
			*uParam2 = joaat("CRUISER");
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return true;
		case 114:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return true;
		case 105:
			func_168(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return true;
		case 106:
			return func_166(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 107:
			return func_166(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 98:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return true;
		case 99:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return true;
		case 100:
			return func_166(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 101:
			return func_166(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 102:
			return func_166(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 123:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return true;
		case 125:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -13.7322f, 1.8783f, 1.0593f };
			*uParam4 = 55.3652f;
			return true;
		case 133:
			uParam2->f_97 = 0;
			*uParam2 = joaat("TROPIC");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_11[0] = 0;
			uParam2->f_11[1] = 0;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 0;
			uParam2->f_11[4] = 0;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return true;
		case 89:
		case 90:
		case 127:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return true;
		case 91:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return true;
		case 93:
			if (func_166(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return true;
			}
			break;
		case 121:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return true;
		case 115:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) };
			*uParam4 = ((177.259f - 180f) - 69f);
			return true;
		case 116:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return true;
		case 117:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return true;
		case 94:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return true;
		case 96:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return true;
		case 108:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return true;
		case 109:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return true;
		case 135:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f };
			*uParam4 = UNK_0x79833B02DBD2A244(-180f, 180f);
			return true;
		case 136:
			if (func_166(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = UNK_0x79833B02DBD2A244(-180f, 180f);
				return true;
			}
			break;
		case 137:
			if (func_166(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = UNK_0x79833B02DBD2A244(-180f, 180f);
				return true;
			}
			break;
		case 138:
			if (func_166(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = UNK_0x79833B02DBD2A244(-180f, 180f);
				return true;
			}
			break;
		case 139:
			if (func_166(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return true;
			}
			break;
		case 140:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
		case 141:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return true;
			}
			break;
		case 142:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return true;
		case 143:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
		case 144:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
		case 145:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
		case 146:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
		case 147:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return true;
			}
			break;
		case 148:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
		case 149:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
		case 151:
			if (func_166(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return true;
			}
			break;
		case 162:
			if (func_166(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return true;
			}
			break;
		case 158:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return true;
		case 166:
			return func_166(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 170:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return true;
		case 171:
			return func_166(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 172:
			return func_166(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 208:
			func_168(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return true;
		case 209:
			return func_166(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 210:
			return func_166(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 211:
			func_167(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return true;
		case 212:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return true;
		case 213:
			if (func_166(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return true;
			}
			break;
		case 214:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2.291f, 1.0879f, 0.0635f };
			*uParam4 = 177.798f;
			return true;
		case 215:
			uParam2->f_97 = 0;
			*uParam2 = joaat("TAXI");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0.9714f, 1.6112f, -0.2773f };
			*uParam4 = -7.0583f;
			*uParam5 = { Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f) };
			*uParam6 = 10f;
			return true;
		case 196:
			uParam2->f_97 = 0;
			*uParam2 = joaat("TAXI");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { Vector(29.4846f, -1457.915f, -17.4132f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam4 = (89.0026f - -1.5f);
			*uParam5 = { Vector(33.6125f, -1563.461f, -147.0307f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam6 = 10f;
			return true;
		case 221:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) };
			*uParam4 = (357.1407f - 84.96f);
			return true;
		case 216:
			if (func_166(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return true;
			}
			break;
		case 217:
			if (func_166(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return true;
			}
			break;
		case 232:
		case 233:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { Vector(28.225f, -1015.11f, -70.4456f) - Vector(27.5447f, -1019.235f, -78.4023f) };
			*uParam4 = (162.098f - 109.0206f);
			return true;
		case 192:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.7514f, -1573.632f, -1174.458f) };
			*uParam4 = (302.182f - 105.981f);
			return true;
		case 193:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.3599f, -1573.692f, -1175.298f) };
			*uParam4 = (302.182f - 172.9187f);
			return true;
		case 194:
			if (func_166(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return true;
			}
			break;
		case 195:
			if (func_166(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return true;
			}
			break;
		case 200:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.4055f, -1607.568f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.286f, 2.8895f) };
			*uParam4 = (318.2674f - (310.879f - 180f));
			return true;
		case 201:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.1773f, -1592.787f, 3.6009f) - Vector(29.2903f, -1607.286f, 2.8895f) };
			*uParam4 = (322.6286f - 130.879f);
			return true;
		case 202:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return true;
		case 222:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return true;
		case 223:
			if (func_166(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return true;
			}
			break;
		case 224:
			return func_166(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 226:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) };
			*uParam4 = ((270.1767f - 160f) - 180f);
			return true;
		case 227:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return true;
		case 228:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return true;
		case 229:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return true;
		case 230:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return true;
		case 238:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return true;
		case 250:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return true;
		case 251:
			if (func_166(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return true;
			}
			break;
		case 252:
			if (func_166(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return true;
			}
			break;
		case 253:
			if (func_166(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return true;
			}
			break;
		case 281:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return true;
		case 282:
			if (func_166(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return true;
			}
			break;
		case 283:
			if (func_166(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return true;
			}
			break;
		case 284:
			if (func_166(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("FAGGIO2");
				uParam2->f_91 = 0;
				return true;
			}
			break;
		case 275:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return true;
		case 276:
			return func_166(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 277:
			return func_166(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 280:
			if (!Global_3)
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("TROPIC");
				uParam2->f_11[0] = 0;
				uParam2->f_11[1] = 0;
				uParam2->f_11[2] = 1;
				uParam2->f_11[3] = 0;
				uParam2->f_11[4] = 0;
				uParam2->f_11[5] = 1;
				uParam2->f_11[6] = 1;
				uParam2->f_11[7] = 1;
				uParam2->f_11[8] = 1;
			}
			else
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("DINGHY");
			}
			*uParam3 = { Vector(-0.6187f, -1440.421f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f) };
			uParam3->f_2 = (uParam3->f_2 + 0.5f);
			*uParam4 = (340.0835f - 4.44f);
			*uParam3 = { Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f) };
			*uParam4 = (23.6441f + 90f);
			*uParam3 = { -4.0164f, 19.9594f, 0f };
			*uParam4 = 113.6465f;
			*uParam3 = { *uParam3 * Vector(1.1f, 1.1f, 1.1f) };
			return true;
		case 247:
			uParam2->f_97 = 0;
			*uParam2 = joaat("SANCHEZ");
			*uParam3 = { 9.8707f, 13.0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return true;
		case 288:
			uParam2->f_97 = 0;
			*uParam2 = joaat("SPEEDO");
			*uParam3 = { -7.7078f, 23.9099f, 1.7307f };
			*uParam4 = 24.3187f;
			return true;
		case 309:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, (0.9455f - 1.7f) };
			*uParam4 = -138.6056f;
			return true;
		case 305:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.8797f, 3597.047f, 1399.662f) - Vector(37.9419f, 3602.284f, 1394.208f) };
			*uParam4 = (315.9865f - 122.5269f);
			return true;
		case 310:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 10.5999f, 3.3997f, 1.0212f };
			*uParam4 = -50.3062f;
			return true;
		case 255:
			uParam2->f_97 = 0;
			*uParam2 = joaat("ROMERO");
			*uParam3 = { -13.2279f, -7.5348f, 0f };
			*uParam4 = 4.32f;
			return true;
		case 265:
			uParam2->f_97 = 0;
			*uParam2 = joaat("BMX");
			*uParam3 = { 11.9596f, 0.345f, -1.0016f };
			*uParam4 = -42.4225f;
			return true;
		case 285:
			uParam2->f_97 = 0;
			*uParam2 = joaat("GBURRITO");
			*uParam3 = { 3.424f, 7.6462f, 0.8227f };
			*uParam4 = -150f;
			return true;
		case 256:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(7.1164f, -1094.205f, -1243.65f) - Vector(7.1f, -1105.15f, -1242.68f) };
			*uParam4 = (14.0848f - 120f);
			return true;
		case 257:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.8143f, -930.5448f, -1672.535f) - Vector(6.479f, -974.7168f, -1667.148f) };
			*uParam4 = (144.9416f - 171.253f);
			return true;
		case 258:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.3025f, 6276.12f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f) };
			*uParam4 = (130.9896f - 10.247f);
			return true;
		case 314:
			uParam2->f_97 = 0;
			*uParam2 = joaat("CUBAN800");
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return true;
	}
	switch (iParam1)
	{
		case 110:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.5629f, -387.5143f, -147.166f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (341.4322f - 133f);
			return true;
		case 111:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(24.4283f, -689.1462f, -1306.782f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (214.6826f - 33f);
			return true;
		case 153:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -176.25f);
			return true;
		case 154:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -147.192f);
			return true;
		case 165:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.0054f, -441.1681f, -1100.878f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (297.5568f - -144.622f);
			return true;
		case 159:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.3852f, -199.5354f, -825.3141f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (29.4869f - -62.5f);
			return true;
		case 160:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.2086f, -144.1027f, -730.8218f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (28.532f - 119f);
			return true;
		case 167:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(31.7307f, -523.2257f, -1144.174f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (299.2956f - -22.32f);
			return true;
		case 152:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9436f, 314.6989f, -1421.8f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (335.4134f - 72f);
			return true;
		case 157:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.469f, 255.3143f, -706.187f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (117.3069f - 37.27f);
			return true;
		case 225:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7165f, -1677.734f, 185.4888f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (54.2538f - -83.8f);
			return true;
		case 218:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.3218f, -1405.159f, -17.556f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (91.3098f - -70.4124f);
			return true;
		case 219:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.2611f, -1492.151f, -219.3172f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (139.2572f - -12f);
			return true;
		case 220:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(25.3018f, -1811.693f, -22.6138f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (141.0423f - -117.356f);
			return true;
		case 206:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(208.5337f, 773.6719f, 164.1308f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (136.3104f - -36f);
			return true;
		case 207:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(108.9995f, 396.924f, -263.3745f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (284.4611f - -95.588f);
			return true;
		case 274:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(139.5782f, 2030.446f, -1883.836f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (340.5746f - 9f);
			return true;
		case 312:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.0296f, 6560.557f, -200.684f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (134.5505f - 110.5931f);
			return true;
		case 271:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.4647f, -1083.751f, -1278.023f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (115.8919f - 26.3597f);
			return true;
		case 248:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(102.4417f, 164.5124f, 325.8113f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (68.4108f - 10.77f);
			return true;
		case 242:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(56.616f, -122.9896f, -1622.22f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (210.8653f - 13.7207f);
			return true;
		case 254:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.0019f, -213.7796f, 172.442f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (250.3032f - -40f);
			return true;
		case 287:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(17.3426f, -836.0328f, -887.9977f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (270.8607f - -81f);
			return true;
		case 286:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.8359f, -1182.704f, -1264.218f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (298.4328f - -150f);
			return true;
		case 239:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(104.8218f, 289.0073f, -80.4564f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (247.6446f - -122f);
			return true;
		case 243:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (228.6353f - 18f);
			return true;
		case 244:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (228.6353f - -51f);
			return true;
		case 249:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(103.1881f, 177.7729f, 288.977f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (68.9831f - (138f - 180f));
			return true;
		case 273:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.7794f, -432.4635f, -161.4589f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (340.0368f - -153f);
			return true;
		case 92:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(202.1143f, 828.3607f, -806.8813f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (101.1612f - -54.347f);
			return true;
		case 103:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.0174f, -1108.081f, -1724.72f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (319.8931f - 143.4931f);
			return true;
		case 109:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.2248f, -628.4899f, -1859.505f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (229.0784f - 99f);
			return true;
		case 81:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.1469f, 90.4242f, -1393.442f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (123.1782f - -45f);
			return true;
		case 95:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(101.921f, 186.1865f, 370.5876f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (159.7861f - 70f);
			return true;
		case 97:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(45.9871f, -188.5636f, -1391.156f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (36.5172f - -45f);
			return true;
		case 134:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(46.0567f, 3076.742f, 2001.918f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (328.101f - -33.128f);
			return true;
		case 88:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9442f, 314.7191f, -1421.821f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (336.5938f - -132f);
			return true;
		case 306:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(37.4888f, 5643.726f, -569.3535f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (296.1685f - UNK_0xE7D606C557C86100(7.4998f, -7.4995f));
			return true;
		case 307:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(47.4526f, 4717.728f, -1555.593f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (236.223f - UNK_0xE7D606C557C86100(-10.6345f, -0.7246f));
			return true;
		case 308:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(22.7549f, 4629.148f, -1553.861f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (332.7842f - UNK_0xE7D606C557C86100(3.4271f, 13.6787f));
			return true;
		case 278:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.9161f, -1009.745f, 631.8275f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (98.8128f - -33.77f);
			return true;
		case 279:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(234.6825f, 900.8749f, -111.9033f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (6.1087f - 155.68f);
			return true;
		case 240:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.5351f, 3636.151f, 1546.323f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (298.4009f - -4.124f);
			return true;
		case 241:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.512f, 6439.667f, -179.4242f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (225.5593f - 108f);
			return true;
		case 264:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2977f, -1390.545f, 486.7419f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (178.298f - -90f);
			return true;
		case 266:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.5662f, 143.2342f, -3052.895f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (85.3429f - 68.8227f);
			return true;
		case 267:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(39.9155f, 4934.08f, 2202.375f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (314.2654f - 56.2037f);
			return true;
		case 269:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.149f, -782.0952f, 401.2502f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (179.9905f - -106.6605f);
			return true;
		case 246:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.3919f, -1534.507f, -1195.256f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (305.8221f - -165f);
			return true;
		case 263:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.8792f, -1241.213f, -573.3765f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (316.9941f - -171f);
			return true;
		case 259:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.0002f, -1298.539f, -724.429f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (230.5715f - -32.488f);
			return true;
		case 260:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(61.203f, 250.8387f, -1309.114f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (10.7756f - -29.093f);
			return true;
		case 261:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.764f, 60.3233f, 917.6678f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (148.021f - 229.6085f);
			return true;
		case 270:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = UNK_0x79833B02DBD2A244(-180f, 180f);
			return true;
		case 289:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return true;
	}
	return false;
}

void func_167(int iParam0, var uParam1, int iParam2)
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

int func_168(int iParam0, var uParam1, int iParam2)
{
	if (Global_98148[iParam0 /*98*/] == 0)
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("BLIMP"))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (func_178(iParam0))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (UNK_0xA7082C42B8809BF2(Global_98148[iParam0 /*98*/]))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (UNK_0xC41A9202669A24C4(Global_98148[iParam0 /*98*/]))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (UNK_0xAFB8495D36825275(Global_98148[iParam0 /*98*/]))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (UNK_0xA7D7011F9888A365(Global_98148[iParam0 /*98*/]))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!UNK_0x8E39AC3C76C8AA58(Global_98148[iParam0 /*98*/]))
		{
			func_167(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!UNK_0x7D8B2A8F9EA82DB7(Global_98148[iParam0 /*98*/]))
		{
			func_167(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	if (!func_169(Global_98148[iParam0 /*98*/], 0))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		if (Global_98148[iParam0 /*98*/] != *uParam1)
		{
			*uParam1 = { Global_98148[iParam0 /*98*/] };
			uParam1->f_91 = 0;
			return 0;
		}
	}
	else
	{
		func_167(iParam0, uParam1, 1);
		uParam1->f_91 = 1;
		if (Global_98148[iParam0 /*98*/] == *uParam1)
		{
			func_167(iParam0, uParam1, 1);
			uParam1->f_91 = 1;
			return 1;
		}
		func_167(iParam0, uParam1, 2);
		uParam1->f_91 = 2;
		if (Global_98148[iParam0 /*98*/] == *uParam1)
		{
			func_167(iParam0, uParam1, 2);
			uParam1->f_91 = 2;
			return 1;
		}
		*uParam1 = { Global_98148[iParam0 /*98*/] };
		uParam1->f_91 = 0;
		return 0;
	}
	func_167(iParam0, uParam1, iParam2);
	uParam1->f_91 = iParam2;
	return 1;
}

bool func_169(bool bParam0, bool bParam1)
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
		if (!func_177())
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
		if ((((!func_176() && !func_175()) && !func_174()) && !func_173()) && !func_177())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_174())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_172(bParam0))
		{
			return false;
		}
	}
	if (!func_170(bParam0))
	{
		return false;
	}
	return true;
}

bool func_170(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_171())
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

bool func_171()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_172(bool bParam0)
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

bool func_173()
{
	return false;
}

bool func_174()
{
	return true;
}

bool func_175()
{
	return true;
}

bool func_176()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_177()
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

bool func_178(int iParam0)
{
	if (Global_98148[iParam0 /*98*/] == joaat("BLIMP") || Global_98148[iParam0 /*98*/] == joaat("BLIMP2"))
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("SUBMERSIBLE") || Global_98148[iParam0 /*98*/] == joaat("SUBMERSIBLE2"))
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("FREIGHT"))
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("PACKER"))
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("ASEA2"))
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("BURRITO2") || Global_98148[iParam0 /*98*/] == joaat("FBI2"))
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("ENTITYXF") && !Global_111638.f_9080.f_330[8 /*6*/])
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("CHEETAH") && !Global_111638.f_9080.f_330[8 /*6*/])
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("POLICEB") && !Global_111638.f_9080.f_330[8 /*6*/])
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("ZTYPE") && !Global_111638.f_9080.f_330[9 /*6*/])
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("POLMAV") && !Global_111638.f_9080.f_330[9 /*6*/])
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("JB700") && !Global_111638.f_9080.f_330[10 /*6*/])
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("MONROE") && !Global_111638.f_9080.f_330[11 /*6*/])
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("FIRETRUK"))
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("HANDLER"))
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("MONROE"))
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("PHANTOM"))
	{
		return true;
	}
	if (((Global_98148[iParam0 /*98*/] == joaat("GAUNTLET") && !Global_111638.f_9080.f_330[80 /*6*/]) && !Global_111638.f_9080.f_330[81 /*6*/]) && !Global_111638.f_9080.f_330[82 /*6*/])
	{
		return true;
	}
	return false;
}

bool func_179(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_180(int iParam0, var uParam1, float fParam2)
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
			return func_180(8, uParam1, fParam2);
		case 10:
			return func_180(8, uParam1, fParam2);
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

int func_181()
{
	var uVar0;

	func_191(&uVar0, UNK_0x4460E481B9E33ADA());
	func_190(&uVar0, UNK_0x8D199E381D262EEF());
	func_189(&uVar0, UNK_0xD8A54335F18763BA());
	func_184(&uVar0, UNK_0x972A296334C9D57B());
	func_183(&uVar0, UNK_0x118229AD063C3C1D());
	func_182(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_182(var uParam0, int iParam1)
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

void func_183(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_184(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_188(*uParam0);
	iVar1 = func_186(*uParam0);
	if (iParam1 < 1 || iParam1 > func_185(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_185(int iParam0, int iParam1)
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

int func_186(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_187(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_187(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_188(int iParam0)
{
	return iParam0 & 15;
}

void func_189(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_190(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_191(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_192(var uParam0, int iParam1)
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
			if (!func_180(Global_111638.f_18528[iVar0], &vVar2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_193(&(uParam0->f_2296[iVar0]));
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

void func_193(var uParam0)
{
	*uParam0 = -15;
}

void func_194(int iParam0)
{
	Global_41982 = (UNK_0x1C0640BA9A7327B3() + iParam0);
}

int func_195()
{
	if (func_3(0))
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

int func_196(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	bool bVar22;
	var uVar23;
	bool bVar24;

	if (!iParam0->f_39)
	{
		if (iParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!UNK_0xEB6A8945D1AC98A1((*iParam0)[iParam0->f_7]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9())) && (*iParam0)[iParam0->f_7] != UNK_0x16F2683693E537C9())
	{
		if (!bParam2)
		{
			if ((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) && !UNK_0x4E861BC5B1EDA7BD(UNK_0x16F2683693E537C9())) && !UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9()))
			{
				UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
			}
			else
			{
				UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
			}
			if ((UNK_0x869EFD0BC0868856((*iParam0)[iParam0->f_7]) && !UNK_0x4E861BC5B1EDA7BD((*iParam0)[iParam0->f_7])) && !UNK_0x81A5359F25512A04((*iParam0)[iParam0->f_7]))
			{
				UNK_0x327AAEE25F323797((*iParam0)[iParam0->f_7]);
			}
			else
			{
				UNK_0xA3BF0AA5A2608191((*iParam0)[iParam0->f_7]);
			}
		}
		bVar0 = UNK_0x16F2683693E537C9();
		bVar1 = func_100();
		if (!iParam0->f_23)
		{
			func_245(bVar0, 0);
		}
		func_243(bVar1, &bVar0);
		UNK_0x4E885A246A9D983A(bVar0, 32, true);
		UNK_0x4E885A246A9D983A(bVar0, 250, true);
		bVar2 = func_242(iParam0->f_7);
		func_245((*iParam0)[iParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(UNK_0x7F6DC62EA9922664((*iParam0)[iParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(UNK_0x65BC0B7172CA52DD((*iParam0)[iParam0->f_7])) - 100f)) * 100f);
		switch (func_103(UNK_0x16F2683693E537C9()))
		{
			case 0:
				if (UNK_0xED4934AFB6EC6451("BulletTime"))
				{
					UNK_0x9A1335ECD7BD117F("BulletTime");
				}
				if (UNK_0xED4934AFB6EC6451("BulletTimeOut"))
				{
					UNK_0x9A1335ECD7BD117F("BulletTimeOut");
				}
				break;
			case 1:
				if (UNK_0xED4934AFB6EC6451("DrivingFocus"))
				{
					UNK_0x9A1335ECD7BD117F("DrivingFocus");
				}
				if (UNK_0xED4934AFB6EC6451("DrivingFocusOut"))
				{
					UNK_0x9A1335ECD7BD117F("DrivingFocusOut");
				}
				break;
			case 2:
				if (UNK_0xED4934AFB6EC6451("REDMIST"))
				{
					UNK_0x9A1335ECD7BD117F("REDMIST");
				}
				if (UNK_0xED4934AFB6EC6451("REDMISTOut"))
				{
					UNK_0x9A1335ECD7BD117F("REDMISTOut");
				}
				break;
		}
		if (func_102(func_100()))
		{
			if (UNK_0x3114787DB5A129EF(UNK_0xD803B885F5E47A62(), 0))
			{
				UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
			}
		}
		UNK_0xA9B99C3482AC0D20(UNK_0xD803B885F5E47A62(), (*iParam0)[iParam0->f_7], bParam2, 0);
		UNK_0x3584F71E5CA29322(3);
		UNK_0x3584F71E5CA29322(13);
		if (iParam3 & 1 != 0)
		{
			UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 210, false);
		}
		if (func_241(0) || func_241(3))
		{
			if (Global_22211.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_89496[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_89532[Global_76891.f_109[iVar5 /*4*/] /*34*/]), 64);
						UNK_0x9505C13496579D28(UNK_0x12AB0310C2281427(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_22211.f_13 = 0;
		iParam0->f_5 = func_240(bVar1);
		if (iParam0->f_5 == 4)
		{
			iParam0->f_5 = 3;
		}
		(*iParam0)[iParam0->f_5] = bVar0;
		(*iParam0)[iParam0->f_7] = 0;
		iParam0->f_6 = func_240(bVar2);
		iParam0->f_7 = 4;
		bVar22 = UNK_0x16F2683693E537C9();
		UNK_0x4A4806F9D471E491(UNK_0x16F2683693E537C9(), true, 0);
		func_239(bVar22);
		UNK_0x1160BAA065E2C9E5(bVar22, 0, 0);
		if (fVar3 < 25f && !UNK_0xBADF5264209B7544(UNK_0x16F2683693E537C9()))
		{
			UNK_0xD458AC1C1D29C3B4(UNK_0x16F2683693E537C9(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(UNK_0x65BC0B7172CA52DD(UNK_0x16F2683693E537C9())) - 100f)) + 100f)), false);
		}
		if (bParam1)
		{
			if (UNK_0xC844350D5D58C99A(bVar0))
			{
				UNK_0x4A4806F9D471E491(bVar0, true, 0);
				func_239(bVar0);
				UNK_0x1160BAA065E2C9E5(bVar0, 0, 0);
				UNK_0x6E8BDA9057564534(bVar0, 0, 0);
			}
		}
		else if (UNK_0xC844350D5D58C99A(bVar0))
		{
			bVar24 = UNK_0xA712FAE854841798(bVar0, &uVar23);
			if (!UNK_0x2EBF5002C6B6A06C(bVar24))
			{
				if (!UNK_0x7F8A39872A07D2CE(bVar24, UNK_0xBB0808A181D4745C()))
				{
					UNK_0x73270B3C9CC833FD(bVar0, false, 1);
				}
				UNK_0xEBA53F35D0085654(&bVar0);
			}
		}
		Global_96026 = 1;
		func_237(UNK_0x16F2683693E537C9());
		func_236();
		func_235(bVar2);
		func_226();
		func_220(bVar2);
		func_203(func_218(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 145, 0));
		UNK_0x324CFDE7809E2EC2(UNK_0xD803B885F5E47A62());
		UNK_0x7980D72D61BEF4D5(UNK_0x16F2683693E537C9(), false);
		UNK_0x5507FCD92D15E617(UNK_0x16F2683693E537C9(), 1);
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x27E404AD7AC8083F(UNK_0xD803B885F5E47A62(), func_330(67));
		}
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0xE21702DBF1967A40(UNK_0xD803B885F5E47A62(), func_330(68));
		}
		func_200(bVar2, &bVar22);
		if (((func_325(0) || func_325(3)) || func_325(2)) || func_325(4))
		{
			UNK_0x4E885A246A9D983A(bVar22, 32, false);
			UNK_0x4E885A246A9D983A(bVar22, 250, false);
		}
		else
		{
			UNK_0x4E885A246A9D983A(bVar22, 32, true);
			UNK_0x4E885A246A9D983A(bVar22, 250, true);
		}
		if (!func_199())
		{
			func_197();
		}
		Global_95663 = 0;
		return 1;
	}
	else
	{
		if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
		}
		if (UNK_0xEB6A8945D1AC98A1((*iParam0)[iParam0->f_7]))
		{
		}
		if (UNK_0x16F2683693E537C9() == (*iParam0)[iParam0->f_7])
		{
		}
	}
	return 0;
}

void func_197()
{
	if (Global_96056)
	{
		func_101();
		UNK_0x9BF51DDC898CF6FE(func_198(Global_111638.f_2358.f_539.f_4321));
	}
	else
	{
		UNK_0x9BF51DDC898CF6FE("");
	}
}

char* func_198(var uParam0)
{
	uParam0 = uParam0;
	return "";
}

bool func_199()
{
	return Global_22209;
}

void func_200(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			func_201(4, *bParam1);
			func_201(7, *bParam1);
			func_201(8, *bParam1);
			func_201(11, *bParam1);
			break;
		case 1:
			if (Global_111638.f_9080.f_330[2 /*6*/])
			{
				func_201(4, *bParam1);
			}
			func_201(7, *bParam1);
			func_201(8, *bParam1);
			func_201(11, *bParam1);
			if (Global_111638.f_9080.f_99.f_58[126])
			{
				func_201(12, *bParam1);
			}
			break;
		case 2:
			if (Global_111638.f_9080.f_330[20 /*6*/])
			{
				func_201(4, *bParam1);
			}
			func_201(7, *bParam1);
			func_201(8, *bParam1);
			func_201(11, *bParam1);
			break;
	}
}

void func_201(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!UNK_0xC844350D5D58C99A(bParam1))
	{
		return;
	}
	if (func_202(iParam0, bParam1))
	{
		return;
	}
	if (Global_40554[iParam0 /*31*/].f_24 < 5)
	{
		Global_40554[iParam0 /*31*/].f_25[Global_40554[iParam0 /*31*/].f_24] = bParam1;
		Global_40554[iParam0 /*31*/].f_24++;
	}
	else
	{
		bVar2 = false;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			bVar1 = Global_40554[iParam0 /*31*/].f_25[iVar0];
			if (!UNK_0xC844350D5D58C99A(bVar1) || UNK_0xEB6A8945D1AC98A1(bVar1))
			{
				Global_40554[iParam0 /*31*/].f_25[iVar0] = bParam1;
				bVar2 = true;
				iVar0 = 6;
			}
			iVar0++;
		}
		if (!bVar2)
		{
		}
	}
}

bool func_202(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40554[iParam0 /*31*/].f_24)
	{
		if (bParam1 == Global_40554[iParam0 /*31*/].f_25[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_203(int iParam0)
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			UNK_0x5D96D8530B3D0904(&(Global_37218[(38 / 32)]), (38 % 32));
			func_204(38, 0);
			UNK_0x5D96D8530B3D0904(&(Global_37218[(41 / 32)]), (41 % 32));
			func_204(41, 0);
			UNK_0x5D96D8530B3D0904(&(Global_37218[(43 / 32)]), (43 % 32));
			func_204(43, 0);
			UNK_0x5D96D8530B3D0904(&(Global_37218[(42 / 32)]), (42 % 32));
			func_204(42, 0);
			UNK_0x5D96D8530B3D0904(&(Global_37218[(44 / 32)]), (44 % 32));
			func_204(44, 0);
			break;
		case 1:
			UNK_0x5D96D8530B3D0904(&(Global_37218[(51 / 32)]), (51 % 32));
			func_204(51, 0);
			break;
		case 2:
			UNK_0x5D96D8530B3D0904(&(Global_37218[(51 / 32)]), (51 % 32));
			func_204(51, 0);
			break;
		case 3:
			UNK_0x5D96D8530B3D0904(&(Global_37218[(53 / 32)]), (53 % 32));
			func_204(53, 0);
			break;
		case 4:
			UNK_0x5D96D8530B3D0904(&(Global_37218[(81 / 32)]), (81 % 32));
			func_204(81, 0);
			UNK_0x5D96D8530B3D0904(&(Global_37218[(82 / 32)]), (82 % 32));
			func_204(82, 0);
			break;
		case 5:
			UNK_0x5D96D8530B3D0904(&(Global_37218[(47 / 32)]), (47 % 32));
			func_204(47, 0);
			UNK_0x5D96D8530B3D0904(&(Global_37218[(50 / 32)]), (50 % 32));
			func_204(50, 0);
			break;
		case 6:
			UNK_0x5D96D8530B3D0904(&(Global_37218[(50 / 32)]), (50 % 32));
			func_204(50, 0);
			break;
	}
}

void func_204(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 != 226)
	{
		if (Global_76622)
		{
			iVar0 = Global_2439138.f_75[iParam0];
		}
		else
		{
			iVar0 = Global_111638.f_7256[iParam0];
		}
		if (iVar0 != iParam1 || UNK_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				UNK_0x5D96D8530B3D0904(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
				Global_37690[iParam0] = iParam1;
			}
			else if (Global_76622)
			{
				Global_2439138.f_75[iParam0] = iParam1;
			}
			else
			{
				Global_111638.f_7256[iParam0] = iParam1;
			}
			UNK_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
			func_206(iParam0);
			if (UNK_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_205(iParam0);
			}
		}
	}
}

void func_205(int iParam0)
{
	if (!UNK_0xEAE0D21A50E6C7F4(Global_38161.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		UNK_0x5D96D8530B3D0904(&(Global_38161.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_38161[Global_38161.f_227] = iParam0;
		Global_38161.f_227++;
	}
}

void func_206(int iParam0)
{
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (!func_215())
	{
		return;
	}
	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		return;
	}
	Var0 = { func_214(iParam0) };
	if (UNK_0xEAE0D21A50E6C7F4(Var0.f_4, 2))
	{
		func_211(iParam0, &Var0);
	}
	if (!UNK_0x76395FF5E8D5E643(Var0.f_5))
	{
		if (UNK_0x22A8E52414415B76())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = UNK_0x0EB28750412C3A5A(Var0, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1);
	if ((UNK_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) && Global_37690[iParam0] == 2) && fVar10 > 210f)
	{
		UNK_0x0674E58A79778E99(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
		Global_37236[iParam0] = 0;
	}
	if (UNK_0x8A22C4C08282BF26(joaat("STARTUP_POSITIONING")) == 0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_37463[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_98796.f_343 == 0)
				{
					if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
					{
						Global_98796.f_343 = UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9());
					}
				}
				iVar11 = Global_98796.f_343;
				iVar12 = UNK_0xFBD08BECC9B87937(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					UNK_0x5D96D8530B3D0904(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
					Global_37690[iParam0] = 3;
					UNK_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			UNK_0x0674E58A79778E99(&(Global_37463[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_37690[iParam0];
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Var0.f_4, false))
	{
		if (Global_111638.f_9080)
		{
			iVar9 = func_208(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_325(14))
		{
			iVar9 = 0;
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Var0.f_4, true) && UNK_0x8A22C4C08282BF26(joaat("AMBIENT_SOLOMON")) == 0)
	{
		if (func_207())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_111638.f_7256[iParam0];
	}
	if (Global_37917[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) || (Global_37236[iParam0] == 0 && Global_37690[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_37217)
		{
		}
		else
		{
			if (!UNK_0x76395FF5E8D5E643(Var0.f_5))
			{
				UNK_0x8010B3127F058F0F(Var0.f_5, Var0.f_3, Var0, 0, false, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (UNK_0xEAE0D21A50E6C7F4(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || UNK_0x755FF954DAE327E1(UNK_0x9CED8DAD53D1A397(Var0.f_5)) <= 0.015f)
					{
						iVar14 = UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9());
						iVar15 = UNK_0xFBD08BECC9B87937(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
						}
						UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
						bVar8 = true;
					}
					break;
				case 4:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				case 2:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				case 0:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 1);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				case 3:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, 0, false, true);
					bVar8 = true;
					break;
				case 5:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				case 6:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				default:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
			}
		}
		if (bVar8)
		{
			UNK_0x0674E58A79778E99(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
			Global_37917[iParam0] = iVar9;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) && Global_37690[iParam0] != 2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
		func_205(iParam0);
		if (Global_37236[iParam0] < 2)
		{
			Global_37236[iParam0]++;
		}
	}
}

bool func_207()
{
	if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
	{
		return false;
	}
	switch (func_100())
	{
		case 0:
			if (Global_111638.f_9080.f_99.f_58[65])
			{
				return true;
			}
			break;
		case 1:
			if (Global_111638.f_9080.f_99.f_58[66])
			{
				return true;
			}
			break;
		case 2:
			if (Global_111638.f_9080.f_99.f_58[65])
			{
				return true;
			}
			break;
	}
	return false;
}

int func_208(int iParam0)
{
	bool bVar0;

	bVar0 = func_100();
	if (func_209(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (bVar0 == 1)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[5], false) || UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[6], false))
			{
				return 0;
			}
		}
		if (func_102(bVar0))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_93771[5], bVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (bVar0 == 0)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[0], false))
				{
					return 0;
				}
			}
			if (func_102(bVar0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_93771[0], bVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		case 47:
		case 48:
		case 49:
			if (bVar0 == 1)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[5], false))
				{
					return 0;
				}
			}
			if (func_102(bVar0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_93771[5], bVar0))
				{
					return 0;
				}
			}
			break;
		case 50:
			if (bVar0 == 1)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[6], false))
				{
					return 0;
				}
			}
			if (func_102(bVar0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_93771[6], bVar0))
				{
					return 0;
				}
			}
			break;
		case 51:
		case 52:
			if (bVar0 == 2)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[2], false))
				{
					return 0;
				}
				if (func_102(bVar0))
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_93771[2], bVar0))
					{
						return 0;
					}
				}
			}
			else if (bVar0 == 0)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[1], false))
				{
					return 0;
				}
				if (func_102(bVar0))
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_93771[1], bVar0))
					{
						return 0;
					}
				}
			}
			break;
		case 53:
			if (bVar0 == 2)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[3], false))
				{
					return 0;
				}
			}
			if (func_102(bVar0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_93771[3], bVar0))
				{
					return 0;
				}
			}
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_209(int iParam0)
{
	int iVar0;

	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
			{
				iVar0 = UNK_0x134B62B726CEC8E6(func_210(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 1)));
				switch (iVar0)
				{
					case joaat("UTILLITRUCK"):
					case joaat("MONSTER"):
						return true;
				}
			}
		}
	}
	return false;
}

int func_210(int iParam0)
{
	return iParam0;
}

void func_211(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_181();
	iVar1 = func_213(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_212(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_111638.f_7256[iParam0] = 0;
						UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_212(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_111638.f_7256[iParam0] = 0;
						UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 141:
		case 142:
			if (func_212(iParam0))
			{
				if ((UNK_0x8A22C4C08282BF26(joaat("JEWELRY_HEIST")) == 0 && UNK_0x8A22C4C08282BF26(joaat("JEWELRY_SETUP1")) == 0) && !Global_111638.f_9080.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_111638.f_7256[iParam0] = 0;
							UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_111638.f_9080.f_99.f_58[4])
				{
					Global_111638.f_7256[iParam0] = 0;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (Global_111638.f_9080.f_99.f_58[4])
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			else if (UNK_0x8A22C4C08282BF26(joaat("JEWELRY_HEIST")) == 0 && UNK_0x8A22C4C08282BF26(joaat("JEWELRY_SETUP1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 18f)
					{
						Global_111638.f_7256[iParam0] = 1;
						UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
				else if (iVar1 < 7)
				{
					if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 18f)
					{
						Global_111638.f_7256[iParam0] = 1;
						UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
			}
			break;
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_212(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_111638.f_7256[iParam0] = 0;
						UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 40f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (iVar1 < 9)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 40f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 147:
		case 148:
			if (!func_212(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_212(iParam0))
			{
				if (UNK_0x8A22C4C08282BF26(joaat("ASSASSIN_VALET")) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (UNK_0x8A22C4C08282BF26(joaat("ASSASSIN_VALET")) > 0)
			{
				Global_111638.f_7256[iParam0] = 0;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 158:
		case 159:
			if (UNK_0x8A22C4C08282BF26(Global_89532[70 /*34*/].f_6) == 0)
			{
				if (!func_212(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 160:
		case 161:
			if (UNK_0x8A22C4C08282BF26(joaat("OMEGA2")) == 0)
			{
				if (!func_212(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 70:
		case 71:
		case 72:
			if (!func_212(iParam0) && UNK_0x8A22C4C08282BF26(Global_89532[26 /*34*/].f_6) == 0)
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			else
			{
				return;
			}
			break;
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_212(iParam0))
			{
				if (UNK_0x8A22C4C08282BF26(Global_89532[43 /*34*/].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 190:
		case 191:
			if (!func_212(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 193:
			if (!func_212(iParam0))
			{
				if (UNK_0x8A22C4C08282BF26(Global_89532[93 /*34*/].f_6) > 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 198:
			if (!func_212(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 80:
			if (!func_212(iParam0))
			{
				if (UNK_0x8A22C4C08282BF26(Global_89532[8 /*34*/].f_6) == 0 && UNK_0x8A22C4C08282BF26(Global_89532[10 /*34*/].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 205:
		case 206:
			if (!func_212(iParam0))
			{
				if (UNK_0x8A22C4C08282BF26(Global_89532[47 /*34*/].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 207:
			if (UNK_0x8A22C4C08282BF26(Global_89532[70 /*34*/].f_6) == 0)
			{
				if (!func_212(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (UNK_0x8A22C4C08282BF26(Global_89532[48 /*34*/].f_6) == 0)
			{
				if (!func_212(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 99:
		case 100:
			if (UNK_0x8A22C4C08282BF26(Global_89532[39 /*34*/].f_6) == 0)
			{
				if (!func_212(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 216:
			if (!func_212(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 217:
		case 218:
			if (!func_212(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_212(iParam0))
			{
				Global_111638.f_7256[iParam0] = 0;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
	}
}

bool func_212(int iParam0)
{
	struct<7> Var0;
	int iVar7;

	Var0 = { func_214(iParam0) };
	iVar7 = UNK_0x51D3DB30DC0C68AD(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_213(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

struct<7> func_214(int iParam0)
{
	struct<7> Var0;

	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		case 1:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		case 2:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		case 3:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		case 4:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		case 5:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		case 6:
			Var0.f_3 = joaat("V_ILEV_HD_DOOR_L");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		case 7:
			Var0.f_3 = joaat("V_ILEV_HD_DOOR_R");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		case 8:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		case 9:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		case 10:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		case 11:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		case 12:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		case 13:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		case 14:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		case 15:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		case 16:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		case 17:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		case 18:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		case 19:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		case 20:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		case 21:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		case 22:
			Var0.f_3 = joaat("V_ILEV_CLOTHMIDDOOR");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		case 23:
			Var0.f_3 = joaat("V_ILEV_CLOTHMIDDOOR");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		case 24:
			Var0.f_3 = joaat("V_ILEV_CLOTHMIDDOOR");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		case 25:
			Var0.f_3 = joaat("V_ILEV_CLOTHMIDDOOR");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		case 26:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		case 27:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		case 28:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		case 29:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		case 30:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		case 31:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		case 32:
			Var0.f_3 = joaat("V_ILEV_TA_DOOR");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		case 33:
			Var0.f_3 = joaat("V_ILEV_ML_DOOR1");
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		case 34:
			Var0.f_3 = joaat("V_ILEV_ML_DOOR1");
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		case 35:
			Var0.f_3 = joaat("V_ILEV_TA_DOOR");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		case 36:
			Var0.f_3 = joaat("V_ILEV_TA_DOOR");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		case 37:
			Var0.f_3 = joaat("V_ILEV_TA_DOOR");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		case 38:
			Var0.f_3 = joaat("V_ILEV_MM_DOORM_L");
			Var0 = { -817f, 179f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -2097039789;
			break;
		case 39:
			Var0.f_3 = joaat("V_ILEV_MM_DOORM_R");
			Var0 = { -816f, 178f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -2127416656;
			break;
		case 40:
			Var0.f_3 = joaat("PROP_LD_GARAGED_01");
			Var0 = { -815f, 186f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		case 41:
			Var0.f_3 = joaat("PROP_BH1_48_BACKDOOR_L");
			Var0 = { -797f, 177f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 776026812;
			break;
		case 42:
			Var0.f_3 = joaat("PROP_BH1_48_BACKDOOR_R");
			Var0 = { -795f, 178f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 698422331;
			break;
		case 43:
			Var0.f_3 = joaat("PROP_BH1_48_BACKDOOR_L");
			Var0 = { -793f, 181f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 535076355;
			break;
		case 44:
			Var0.f_3 = joaat("PROP_BH1_48_BACKDOOR_R");
			Var0 = { -794f, 183f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 474675599;
			break;
		case 45:
			Var0.f_3 = joaat("PROP_BH1_48_GATE_1");
			Var0 = { -849f, 179f, 70f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -1978427516;
			break;
		case 46:
			Var0.f_3 = joaat("V_ILEV_MM_WINDOWWC");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -1700375831;
			break;
		case 47:
			Var0.f_3 = joaat("V_ILEV_FA_FRONTDOOR");
			Var0 = { -14f, -1441f, 31f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 613961892;
			break;
		case 48:
			Var0.f_3 = joaat("V_ILEV_FH_FRNTDOOR");
			Var0 = { -15f, -1427f, 31f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -272570634;
			break;
		case 49:
			Var0.f_3 = joaat("PROP_SC1_21_G_DOOR_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -1040675994;
			break;
		case 50:
			Var0.f_3 = joaat("V_ILEV_FH_FRONTDOOR");
			Var0 = { 7.52f, 539.53f, 176.18f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 1201219326;
			break;
		case 51:
			Var0.f_3 = joaat("V_ILEV_TREVTRAILDR");
			Var0 = { 1973f, 3815f, 34f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 1736361794;
			break;
		case 52:
			Var0.f_3 = joaat("PROP_CS4_10_TR_GD_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		case 53:
			Var0.f_3 = joaat("V_ILEV_TREV_DOORFRONT");
			Var0 = { -1150f, -1521f, 11f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("PROP_COM_LS_DOOR_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		case 55:
			Var0.f_3 = joaat("PROP_ID2_11_GDOOR");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		case 56:
			Var0.f_3 = joaat("PROP_COM_LS_DOOR_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		case 57:
			Var0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		case 58:
			Var0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		case 59:
			Var0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		case 60:
			Var0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		case 225:
			Var0.f_3 = joaat("LR_PROP_SUPERMOD_DOOR_01");
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		case 61:
			Var0.f_3 = joaat("V_ILEV_JANITOR_FRONTDOOR");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		case 62:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		case 63:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		case 64:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		case 65:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		case 66:
			Var0.f_3 = joaat("V_ILEV_STORE_DOOR");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		case 67:
			Var0.f_3 = joaat("V_ILEV_ML_DOOR1");
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		case 68:
			Var0.f_3 = joaat("V_ILEV_ML_DOOR1");
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		case 69:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		case 70:
			Var0.f_3 = joaat("PROP_RON_DOOR_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 71:
			Var0.f_3 = joaat("PROP_RON_DOOR_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 72:
			Var0.f_3 = joaat("PROP_RON_DOOR_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 73:
			Var0.f_3 = joaat("V_ILEV_BANK4DOOR02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		case 74:
			Var0.f_3 = joaat("V_ILEV_BANK4DOOR01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		case 75:
			Var0.f_3 = joaat("V_ILEV_LESTER_DOORFRONT");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		case 76:
			Var0.f_3 = joaat("V_ILEV_LESTER_DOORVERANDA");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		case 77:
			Var0.f_3 = joaat("V_ILEV_LESTER_DOORVERANDA");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		case 78:
			Var0.f_3 = joaat("V_ILEV_DEVIANTFRONTDOOR");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		case 79:
			Var0.f_3 = joaat("PROP_COM_GAR_DOOR_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		case 80:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 81:
			Var0.f_3 = joaat("PROP_STRIP_DOOR_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		case 82:
			Var0.f_3 = joaat("PROP_MAGENTA_DOOR");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		case 83:
			Var0.f_3 = joaat("PROP_MOTEL_DOOR_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		case 84:
			Var0.f_3 = joaat("V_ILEV_GANGSAFEDOOR");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		case 85:
			Var0.f_3 = joaat("V_ILEV_GANGSAFEDOOR");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		case 86:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_L");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		case 87:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_R");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		case 88:
			Var0.f_3 = joaat("PROP_CS6_03_DOOR_L");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		case 89:
			Var0.f_3 = joaat("PROP_CS6_03_DOOR_R");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		case 90:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_L");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		case 91:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_R");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		case 92:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_L");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		case 93:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_R");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		case 94:
			Var0.f_3 = joaat("PROP_GAR_DOOR_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		case 95:
			Var0.f_3 = joaat("PROP_GAR_DOOR_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		case 96:
			Var0.f_3 = joaat("PROP_MAP_DOOR_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		case 97:
			Var0.f_3 = joaat("V_ILEV_FIB_DOOR1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		case 98:
			Var0.f_3 = joaat("V_ILEV_TORT_DOOR");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		case 99:
			Var0.f_3 = joaat("V_ILEV_BL_SHUTTER2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 100:
			Var0.f_3 = joaat("V_ILEV_BL_SHUTTER2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 101:
			Var0.f_3 = joaat("V_ILEV_RC_DOOR3_L");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 102:
			Var0.f_3 = joaat("V_ILEV_RC_DOOR3_R");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 103:
			Var0.f_3 = joaat("V_ILEV_RC_DOOR3_L");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 104:
			Var0.f_3 = joaat("V_ILEV_RC_DOOR3_R");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 105:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		case 106:
			Var0.f_3 = joaat("V_ILEV_FH_DOOR4");
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		case 107:
			Var0.f_3 = joaat("PROP_EPSILON_DOOR_L");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		case 108:
			Var0.f_3 = joaat("PROP_EPSILON_DOOR_R");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		case 109:
			Var0.f_3 = joaat("V_ILEV_EPSSTOREDOOR");
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		case 110:
			Var0.f_3 = joaat("PROP_CH2_09C_GARAGE_DOOR");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		case 111:
			Var0.f_3 = joaat("V_ILEV_DOOR_ORANGESOLID");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		case 112:
			Var0.f_3 = joaat("PROP_MAGENTA_DOOR");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		case 113:
			Var0.f_3 = joaat("PROP_CS4_05_TDOOR");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		case 114:
			Var0.f_3 = joaat("V_ILEV_HOUSEDOOR1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		case 115:
			Var0.f_3 = joaat("V_ILEV_FH_FRNTDOOR");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		case 116:
			Var0.f_3 = joaat("P_CUT_DOOR_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		case 117:
			Var0.f_3 = joaat("P_CUT_DOOR_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		case 118:
			Var0.f_3 = joaat("V_ILEV_PO_DOOR");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		case 119:
			Var0.f_3 = joaat("PROP_SS1_10_DOOR_L");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		case 120:
			Var0.f_3 = joaat("PROP_SS1_10_DOOR_R");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		case 121:
			Var0.f_3 = joaat("V_ILEV_FIBL_DOOR02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		case 122:
			Var0.f_3 = joaat("V_ILEV_FIBL_DOOR01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		case 123:
			Var0.f_3 = joaat("V_ILEV_CT_DOOR01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		case 124:
			Var0.f_3 = joaat("V_ILEV_CT_DOOR01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		case 125:
			Var0.f_3 = joaat("AP1_02_DOOR_L");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		case 126:
			Var0.f_3 = joaat("AP1_02_DOOR_R");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		case 128:
			Var0.f_3 = joaat("V_ILEV_FB_DOORSHORTL");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		case 129:
			Var0.f_3 = joaat("V_ILEV_FB_DOORSHORTR");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		case 130:
			Var0.f_3 = joaat("V_ILEV_FB_DOOR01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		case 131:
			Var0.f_3 = joaat("V_ILEV_FB_DOOR02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		case 127:
			Var0.f_3 = joaat("V_ILEV_GTDOOR");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		case 132:
			Var0.f_3 = joaat("PROP_DAMDOOR_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		case 133:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 134:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 135:
			Var0.f_3 = joaat("PROP_SEC_BARRIER_LD_01A");
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), true);
			break;
		case 136:
			Var0.f_3 = joaat("PROP_SEC_BARRIER_LD_01A");
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), true);
			break;
		case 137:
			Var0.f_3 = joaat("PROP_SEC_BARRIER_LD_02A");
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), true);
			break;
		case 138:
			Var0.f_3 = joaat("PROP_SEC_BARRIER_LD_02A");
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), true);
			break;
		case 139:
			Var0.f_3 = joaat("V_ILEV_ROC_DOOR4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		case 140:
			Var0.f_3 = joaat("V_ILEV_ROC_DOOR4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		case 141:
			Var0.f_3 = joaat("P_JEWEL_DOOR_L");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 142:
			Var0.f_3 = joaat("P_JEWEL_DOOR_R1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 145:
			Var0.f_3 = joaat("PROP_LD_BANKDOORS_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 146:
			Var0.f_3 = joaat("PROP_LD_BANKDOORS_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 143:
			Var0.f_3 = joaat("HEI_PROP_HEI_BANKDOOR_NEW");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 144:
			Var0.f_3 = joaat("HEI_PROP_HEI_BANKDOOR_NEW");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 148:
			Var0.f_3 = joaat("HEI_V_ILEV_BK_GATE_PRIS");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 147:
			Var0.f_3 = joaat("V_ILEV_BK_DOOR");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 149:
			Var0.f_3 = joaat("V_ILEV_SHRF2DOOR");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		case 150:
			Var0.f_3 = joaat("V_ILEV_SHRF2DOOR");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		case 151:
			Var0.f_3 = joaat("V_ILEV_SHRFDOOR");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		case 152:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_L");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 153:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_R");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 154:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_L");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 155:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_R");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 156:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_L");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 157:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_R");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 158:
			Var0.f_3 = joaat("PROP_CH3_04_DOOR_01L");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 159:
			Var0.f_3 = joaat("PROP_CH3_04_DOOR_01R");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 160:
			Var0.f_3 = joaat("PROP_CH3_01_TRLRDOOR_L");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 161:
			Var0.f_3 = joaat("PROP_CH3_01_TRLRDOOR_R");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 162:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		case 163:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		case 165:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		case 166:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		case 167:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		case 168:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		case 169:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		case 170:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		case 171:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		case 172:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		case 173:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		case 174:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		case 175:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		case 176:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		case 177:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		case 178:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		case 179:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		case 180:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		case 181:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		case 182:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		case 183:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		case 184:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		case 164:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		case 185:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		case 186:
			Var0.f_3 = joaat("PROP_LRGGATE_01C_L");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		case 187:
			Var0.f_3 = joaat("PROP_LRGGATE_01C_R");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		case 188:
			Var0.f_3 = joaat("PROP_LRGGATE_01C_L");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		case 189:
			Var0.f_3 = joaat("PROP_LRGGATE_01C_R");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		case 190:
			Var0.f_3 = joaat("V_ILEV_BL_DOOREL_L");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 191:
			Var0.f_3 = joaat("V_ILEV_BL_DOOREL_R");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 192:
			Var0.f_3 = joaat("V_ILEV_CBANKCOUNTDOOR01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		case 193:
			Var0.f_3 = joaat("PROP_FNCLINK_03GATE5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("V_ILEV_CSR_DOOR_L");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		case 197:
			Var0.f_3 = joaat("V_ILEV_CSR_DOOR_R");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		case 194:
			Var0.f_3 = joaat("V_ILEV_CSR_DOOR_L");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		case 195:
			Var0.f_3 = joaat("V_ILEV_CSR_DOOR_R");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		case 198:
			Var0.f_3 = joaat("PROP_RON_DOOR_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 199:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 200:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 201:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 202:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 205:
			Var0.f_3 = joaat("V_ILEV_ABBMAINDOOR");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 206:
			Var0.f_3 = joaat("V_ILEV_ABBMAINDOOR2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 207:
			Var0.f_3 = joaat("PROP_CH3_04_DOOR_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 208:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 209:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 210:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 211:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 212:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 213:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 214:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 215:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 216:
			Var0.f_3 = joaat("PROP_GAR_DOOR_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 217:
			Var0.f_3 = joaat("PROP_GATE_TEP_01_L");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 218:
			Var0.f_3 = joaat("PROP_GATE_TEP_01_R");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 219:
			Var0.f_3 = joaat("PROP_ARTGALLERY_02_DR");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 220:
			Var0.f_3 = joaat("PROP_ARTGALLERY_02_DL");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 221:
			Var0.f_3 = joaat("PROP_ARTGALLERY_02_DR");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 222:
			Var0.f_3 = joaat("PROP_ARTGALLERY_02_DL");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 223:
			Var0.f_3 = joaat("PROP_FNCLINK_07GATE1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		case 203:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 204:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 224:
			Var0.f_3 = joaat("PROP_ABAT_SLIDE");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

bool func_215()
{
	if ((func_217() == -1 || func_217() == 999) && !func_216() == 0)
	{
		return true;
	}
	return false;
}

int func_216()
{
	return Global_30769;
}

int func_217()
{
	return Global_30768;
}

int func_218(vector3 vParam0, int iParam3, int iParam4)
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
				if (func_219(iVar0) || iParam4 == 0)
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

bool func_219(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iParam0], false);
}

void func_220(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_221(bParam0, iVar0);
		iVar0++;
	}
}

void func_221(bool bParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (((bParam0 != 0 || bParam0 != 1) || bParam0 != 2) || bParam0 != 3)
	{
		return;
	}
	func_225(bParam0, iParam1, &iVar2, &iVar3);
	if (UNK_0x8CD06866876216F2())
	{
		iVar0 = func_222(iVar3, -1, 0);
	}
	else
	{
		UNK_0x6FB46C25CCB7E6D5(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (SYSTEM::TO_FLOAT(iVar0) / 100f)));
			UNK_0xF7599E37AEBF26E7(UNK_0xD803B885F5E47A62(), fVar1, 1);
			break;
		case 7:
			if (UNK_0x8A22C4C08282BF26(joaat("ARMENIAN3")) != 0 || UNK_0x8A22C4C08282BF26(joaat("TREVOR3")) != 0)
			{
				Global_96027 = 1;
			}
			else
			{
				fVar1 = (1f - (SYSTEM::TO_FLOAT(iVar0) / 100f));
				UNK_0x0FFE8B6DB75A4C39(UNK_0xD803B885F5E47A62(), fVar1);
				UNK_0xE78BAF6C6D97879A(UNK_0xD803B885F5E47A62(), fVar1);
				UNK_0xEE195B25E889FD63(UNK_0xD803B885F5E47A62(), fVar1);
			}
			break;
	}
}

int func_222(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_223(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_223(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_224();
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

int func_224()
{
	return Global_1312745;
}

void func_225(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	switch (bParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*iParam2 = joaat("SP0_SPECIAL_ABILITY_UNLOCKED");
					break;
				case 1:
					*iParam2 = joaat("SP0_STAMINA");
					break;
				case 3:
					*iParam2 = joaat("SP0_LUNG_CAPACITY");
					break;
				case 2:
					*iParam2 = joaat("SP0_STRENGTH");
					break;
				case 4:
					*iParam2 = joaat("SP0_WHEELIE_ABILITY");
					break;
				case 5:
					*iParam2 = joaat("SP0_FLYING_ABILITY");
					break;
				case 6:
					*iParam2 = joaat("SP0_SHOOTING_ABILITY");
					break;
				case 7:
					*iParam2 = joaat("SP0_STEALTH_ABILITY");
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					*iParam2 = joaat("SP1_SPECIAL_ABILITY_UNLOCKED");
					break;
				case 1:
					*iParam2 = joaat("SP1_STAMINA");
					break;
				case 3:
					*iParam2 = joaat("SP1_LUNG_CAPACITY");
					break;
				case 2:
					*iParam2 = joaat("SP1_STRENGTH");
					break;
				case 4:
					*iParam2 = joaat("SP1_WHEELIE_ABILITY");
					break;
				case 5:
					*iParam2 = joaat("SP1_FLYING_ABILITY");
					break;
				case 6:
					*iParam2 = joaat("SP1_SHOOTING_ABILITY");
					break;
				case 7:
					*iParam2 = joaat("SP1_STEALTH_ABILITY");
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					*iParam2 = joaat("SP2_SPECIAL_ABILITY_UNLOCKED");
					break;
				case 1:
					*iParam2 = joaat("SP2_STAMINA");
					break;
				case 3:
					*iParam2 = joaat("SP2_LUNG_CAPACITY");
					break;
				case 2:
					*iParam2 = joaat("SP2_STRENGTH");
					break;
				case 4:
					*iParam2 = joaat("SP2_WHEELIE_ABILITY");
					break;
				case 5:
					*iParam2 = joaat("SP2_FLYING_ABILITY");
					break;
				case 6:
					*iParam2 = joaat("SP2_SHOOTING_ABILITY");
					break;
				case 7:
					*iParam2 = joaat("SP2_STEALTH_ABILITY");
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					*iParam3 = 64;
					break;
				case 1:
					*iParam3 = 65;
					break;
				case 3:
					*iParam3 = 67;
					break;
				case 2:
					*iParam3 = 66;
					break;
				case 4:
					*iParam3 = 68;
					break;
				case 5:
					*iParam3 = 69;
					break;
				case 6:
					*iParam3 = 70;
					break;
				case 7:
					*iParam3 = 71;
					break;
			}
			break;
	}
}

void func_226()
{
	struct<50> Var0;

	if ((UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) || !func_102(func_100())) || !func_232())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_228(UNK_0x16F2683693E537C9(), &Var0, 1, -1);
	func_227(1306, Var0[0], -1, 1);
	func_227(1307, Var0[1], -1, 1);
	func_227(1308, Var0[2], -1, 1);
	func_227(1309, Var0[3], -1, 1);
	func_227(1310, Var0[4], -1, 1);
	func_227(1311, Var0[5], -1, 1);
	func_227(1312, Var0[6], -1, 1);
	func_227(1313, Var0[7], -1, 1);
	func_227(1314, Var0[8], -1, 1);
	func_227(1315, Var0[9], -1, 1);
	func_227(1316, Var0[10], -1, 1);
	func_227(1317, Var0[11], -1, 1);
	func_227(1318, Var0.f_13[0], -1, 1);
	func_227(1319, Var0.f_13[1], -1, 1);
	func_227(1320, Var0.f_13[2], -1, 1);
	func_227(1321, Var0.f_13[3], -1, 1);
	func_227(1322, Var0.f_13[4], -1, 1);
	func_227(1323, Var0.f_13[5], -1, 1);
	func_227(1324, Var0.f_13[6], -1, 1);
	func_227(1325, Var0.f_13[7], -1, 1);
	func_227(1326, Var0.f_13[8], -1, 1);
	func_227(1327, Var0.f_13[9], -1, 1);
	func_227(1328, Var0.f_13[10], -1, 1);
	func_227(1329, Var0.f_13[11], -1, 1);
	func_227(1330, Var0.f_26[0], -1, 1);
	func_227(1331, Var0.f_26[1], -1, 1);
	func_227(1332, Var0.f_26[2], -1, 1);
	func_227(1333, Var0.f_26[3], -1, 1);
	func_227(1334, Var0.f_26[4], -1, 1);
	func_227(1335, Var0.f_26[5], -1, 1);
	func_227(1336, Var0.f_26[6], -1, 1);
	func_227(1337, Var0.f_26[7], -1, 1);
	func_227(1338, Var0.f_26[8], -1, 1);
	func_227(1339, Var0.f_26[9], -1, 1);
	func_227(1340, Var0.f_26[10], -1, 1);
	func_227(1341, Var0.f_26[11], -1, 1);
	func_227(1342, Var0.f_39[0], -1, 1);
	func_227(1343, Var0.f_39[1], -1, 1);
	func_227(1344, Var0.f_39[2], -1, 1);
	func_227(1345, Var0.f_39[3], -1, 1);
	func_227(1346, Var0.f_39[4], -1, 1);
	func_227(1347, Var0.f_39[5], -1, 1);
	func_227(1348, Var0.f_39[6], -1, 1);
	func_227(1349, Var0.f_39[7], -1, 1);
	func_227(1350, Var0.f_39[8], -1, 1);
	func_227(1351, Var0.f_49[0], -1, 1);
	func_227(1352, Var0.f_49[1], -1, 1);
	func_227(1353, Var0.f_49[2], -1, 1);
	func_227(1354, Var0.f_49[3], -1, 1);
	func_227(1355, Var0.f_49[4], -1, 1);
	func_227(1356, Var0.f_49[5], -1, 1);
	func_227(1357, Var0.f_49[6], -1, 1);
	func_227(1358, Var0.f_49[7], -1, 1);
	func_227(1359, Var0.f_49[8], -1, 1);
	func_227(1360, func_100(), -1, 1);
	UNK_0xD8B681091EBE4064(joaat("CLO_STORED_INITIAL"), true, 1);
	Global_111638.f_2358.f_539.f_4315 = 1;
}

var func_227(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (bParam2 == -1)
	{
		bParam2 = func_224();
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

void func_228(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		bVar0 = func_103(bParam0);
		bVar1 = false;
		while (bVar1 < 12)
		{
			func_231(bParam0, bVar1, &(uParam1->f_13[bVar1]), uParam1[bVar1], &(uParam1->f_26[bVar1]), iParam2, 145);
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 9)
		{
			func_230(bParam0, bVar1, &(uParam1->f_39[bVar1]), &(uParam1->f_49[bVar1]), iParam2, 145);
			bVar1++;
		}
		if (func_102(bVar0))
		{
			uParam1->f_59 = Global_111638.f_2358.f_539[bVar0 /*65*/].f_59;
			uParam1->f_60 = Global_111638.f_2358.f_539[bVar0 /*65*/].f_60;
			uParam1->f_61 = Global_111638.f_2358.f_539[bVar0 /*65*/].f_61;
			uParam1->f_62 = Global_111638.f_2358.f_539[bVar0 /*65*/].f_62;
			uParam1->f_63 = Global_111638.f_2358.f_539[bVar0 /*65*/].f_63;
			uParam1->f_64 = Global_111638.f_2358.f_539[bVar0 /*65*/].f_64;
		}
		else if (UNK_0x8CD06866876216F2() && UNK_0x134B62B726CEC8E6(bParam0) == UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			if (func_229(161, iParam3))
			{
				uParam1->f_59 = func_222(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_222(752, iParam3, 0);
			}
			uParam1->f_60 = func_222(753, iParam3, 0);
			uParam1->f_61 = func_222(754, iParam3, 0);
		}
		if (UNK_0x8CD06866876216F2() && bParam0 == UNK_0x16F2683693E537C9())
		{
			if (func_229(161, iParam3))
			{
				uParam1->f_59 = func_222(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_222(752, iParam3, 0);
			}
		}
	}
}

bool func_229(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_223(iParam1)];
	if (UNK_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return false;
}

void func_230(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;

	iVar0 = func_103(bParam0);
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

void func_231(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;

	iVar0 = func_103(bParam0);
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

bool func_232()
{
	if (func_234() && func_233(0))
	{
		return true;
	}
	return false;
}

var func_233(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_234()
{
	return func_233(func_224() + 1);
}

void func_235(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			UNK_0x0E2400AB9174FA81(255, joaat("AMBIENT_GANG_FAMILY"), joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(2, joaat("PLAYER"), joaat("AMBIENT_GANG_LOST"));
			UNK_0x0E2400AB9174FA81(255, joaat("AMBIENT_GANG_LOST"), joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(1, Global_93747, joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(1, joaat("PLAYER"), Global_93747);
			UNK_0x0E2400AB9174FA81(1, Global_93748, joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(1, joaat("PLAYER"), Global_93748);
			UNK_0x0E2400AB9174FA81(1, Global_93749, joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(1, joaat("PLAYER"), Global_93749);
			break;
		case 1:
			UNK_0x0E2400AB9174FA81(1, joaat("AMBIENT_GANG_FAMILY"), joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(2, joaat("PLAYER"), joaat("AMBIENT_GANG_LOST"));
			UNK_0x0E2400AB9174FA81(255, joaat("AMBIENT_GANG_LOST"), joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(1, Global_93747, joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(1, joaat("PLAYER"), Global_93747);
			UNK_0x0E2400AB9174FA81(1, Global_93748, joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(1, joaat("PLAYER"), Global_93748);
			UNK_0x0E2400AB9174FA81(1, Global_93749, joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(1, joaat("PLAYER"), Global_93749);
			break;
		case 2:
			UNK_0x0E2400AB9174FA81(255, joaat("AMBIENT_GANG_FAMILY"), joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(5, joaat("PLAYER"), joaat("AMBIENT_GANG_LOST"));
			UNK_0x0E2400AB9174FA81(5, joaat("AMBIENT_GANG_LOST"), joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(1, Global_93747, joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(1, joaat("PLAYER"), Global_93747);
			UNK_0x0E2400AB9174FA81(1, Global_93748, joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(1, joaat("PLAYER"), Global_93748);
			UNK_0x0E2400AB9174FA81(1, Global_93749, joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(1, joaat("PLAYER"), Global_93749);
			break;
		default:
			break;
	}
}

void func_236()
{
	int iVar0;
	int iVar1;

	func_101();
	iVar0 = UNK_0x023428EEA3027652();
	if (UNK_0xE4EDC4B0E92C078B(iVar0))
	{
		iVar1 = Global_111638.f_2358.f_539.f_4321;
		if (func_325(14))
		{
			iVar1 = func_103(UNK_0x16F2683693E537C9());
		}
		if (iVar1 == 0)
		{
			UNK_0xDC5B2F9D0CCE3A10(iVar0, "BLIP_MICHAEL");
		}
		else if (iVar1 == 1)
		{
			UNK_0xDC5B2F9D0CCE3A10(iVar0, "BLIP_FRANKLIN");
		}
		else if (iVar1 == 2)
		{
			UNK_0xDC5B2F9D0CCE3A10(iVar0, "BLIP_TREV");
		}
		else
		{
			UNK_0xDC5B2F9D0CCE3A10(iVar0, "BLIP_PLAYER");
		}
	}
}

void func_237(bool bParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;

	iVar0 = 0;
	while (iVar0 < 44)
	{
		iVar2 = func_238(iVar0);
		if (iVar2 != 0)
		{
			bVar3 = UNK_0x3F0B5EEC37A0EDD3(bParam0, iVar2);
			if ((bVar3 != 0 && bVar3 != joaat("WEAPON_UNARMED")) && bVar3 != joaat("OBJECT"))
			{
				if (UNK_0xD2AEDBB0268DF71A(bParam0, bVar3) == -1)
				{
					if (UNK_0x9AEFFB8166364079(bParam0, bVar3, &uVar1))
					{
						UNK_0xDAB3108F02A4255A(bParam0, 0, bVar3);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = UNK_0x037F36BEA9A47381();
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (UNK_0x6532540B34EE6273(iVar4, &Var6))
		{
			bVar3 = Var6.f_1;
			if (UNK_0xD2AEDBB0268DF71A(bParam0, bVar3) == -1)
			{
				if (UNK_0x9AEFFB8166364079(bParam0, bVar3, &uVar1))
				{
					UNK_0xDAB3108F02A4255A(bParam0, 0, bVar3);
				}
			}
		}
		iVar4++;
	}
}

int func_238(int iParam0)
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

void func_239(bool bParam0)
{
	bool bVar0;

	bVar0 = func_103(bParam0);
	if (func_102(bVar0) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (bParam0 == UNK_0x16F2683693E537C9() && UNK_0x65BC0B7172CA52DD(bParam0) == 200)
		{
			UNK_0x093A734E5AEA758F(bParam0, SYSTEM::ROUND((IntToFloat(UNK_0x65BC0B7172CA52DD(bParam0)) * Global_262145.f_106)));
		}
		if (Global_111638.f_2358.f_539.f_290[bVar0] <= 0f)
		{
			Global_111638.f_2358.f_539.f_290[bVar0] = 100f;
		}
		else if (Global_111638.f_2358.f_539.f_290[bVar0] <= 10f)
		{
			Global_111638.f_2358.f_539.f_290[bVar0] = 10f;
		}
		UNK_0xD458AC1C1D29C3B4(bParam0, SYSTEM::ROUND((((Global_111638.f_2358.f_539.f_290[bVar0] / 100f) * (SYSTEM::TO_FLOAT(UNK_0x65BC0B7172CA52DD(bParam0)) - 100f)) + 100f)), false);
	}
}

bool func_240(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	else if (bParam0 == 2)
	{
		return 2;
	}
	else if (bParam0 == 1)
	{
		return true;
	}
	else if (bParam0 == 145)
	{
		return 3;
	}
	return 4;
}

bool func_241(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_150(iParam0))
	{
		return false;
	}
	return true;
}

int func_242(bool bParam0)
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
	return 145;
}

void func_243(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			func_244(4, *bParam1, 0);
			func_244(7, *bParam1, 0);
			func_244(8, *bParam1, 0);
			func_244(11, *bParam1, 0);
			break;
		case 1:
			func_244(4, *bParam1, 0);
			func_244(7, *bParam1, 0);
			func_244(8, *bParam1, 0);
			func_244(11, *bParam1, 0);
			if (Global_111638.f_9080.f_99.f_58[126])
			{
				func_244(12, *bParam1, 0);
			}
			break;
		case 2:
			func_244(4, *bParam1, 0);
			func_244(7, *bParam1, 0);
			func_244(8, *bParam1, 0);
			func_244(11, *bParam1, 0);
			break;
	}
}

void func_244(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	if (!bParam2)
	{
		if (!UNK_0xC844350D5D58C99A(bParam1))
		{
			return;
		}
	}
	if (Global_40554[iParam0 /*31*/].f_24 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_40554[iParam0 /*31*/].f_24)
	{
		if (bVar1)
		{
			Global_40554[iParam0 /*31*/].f_25[(iVar0 - 1)] = Global_40554[iParam0 /*31*/].f_25[iVar0];
			Global_40554[iParam0 /*31*/].f_25[iVar0] = 0;
		}
		else if (bParam1 == Global_40554[iParam0 /*31*/].f_25[iVar0])
		{
			Global_40554[iParam0 /*31*/].f_25[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_40554[iParam0 /*31*/].f_24 = (Global_40554[iParam0 /*31*/].f_24 - 1);
	}
}

void func_245(bool bParam0, bool bParam1)
{
	func_257(bParam0);
	func_251(bParam0, bParam1);
	func_250(bParam0);
	func_249(bParam0);
	func_248(bParam0);
	func_247(bParam0);
	func_246(bParam0);
}

void func_246(bool bParam0)
{
	bool bVar0;

	bVar0 = func_103(bParam0);
	if (func_102(bVar0) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (bParam0 == UNK_0x16F2683693E537C9())
		{
			Global_111638.f_2358.f_539.f_2328[bVar0] = UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62());
		}
	}
}

void func_247(bool bParam0)
{
	bool bVar0;

	bVar0 = func_103(bParam0);
	if (func_102(bVar0) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		Global_111638.f_2358.f_539.f_2318[bVar0 /*3*/] = { UNK_0x56E9E0FD5ACCD35D(bParam0) };
	}
}

void func_248(bool bParam0)
{
	bool bVar0;

	bVar0 = func_103(bParam0);
	if (func_102(bVar0) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0x991B1F0980C62628() && UNK_0x19EC8D83154D7CC1() != 3)
		{
			if (UNK_0x00A15D69BCAA5267() == 8)
			{
				return;
			}
		}
		Global_111638.f_2358.f_539.f_2300[bVar0 /*3*/] = { UNK_0x68F4C0EC296D3901(bParam0, true) };
		Global_111638.f_2358.f_539.f_2310[bVar0] = UNK_0xD9522BA9E27E1349(bParam0);
		Global_111638.f_2358.f_539.f_2314[bVar0] = UNK_0xB0A50BC6EDB99CA9(bParam0);
		if (Global_111638.f_2358.f_539.f_2300[bVar0 /*3*/] >= 8000f)
		{
			Global_111638.f_2358.f_539.f_2300[bVar0 /*3*/] = 7500f;
		}
		else if (Global_111638.f_2358.f_539.f_2300[bVar0 /*3*/] <= -8000f)
		{
			Global_111638.f_2358.f_539.f_2300[bVar0 /*3*/] = -7500f;
		}
		if (Global_111638.f_2358.f_539.f_2300[bVar0 /*3*/].f_1 >= 8000f)
		{
			Global_111638.f_2358.f_539.f_2300[bVar0 /*3*/].f_1 = 7500f;
		}
		else if (Global_111638.f_2358.f_539.f_2300[bVar0 /*3*/].f_1 <= -8000f)
		{
			Global_111638.f_2358.f_539.f_2300[bVar0 /*3*/].f_1 = -7500f;
		}
		if (Global_111638.f_2358.f_539.f_2300[bVar0 /*3*/].f_2 >= 2500f)
		{
			Global_111638.f_2358.f_539.f_2300[bVar0 /*3*/].f_2 = 2000f;
		}
	}
}

void func_249(bool bParam0)
{
	bool bVar0;

	bVar0 = func_103(bParam0);
	if (func_102(bVar0) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		Global_111638.f_2358.f_539.f_294[bVar0] = UNK_0x34460709B9A5160B(bParam0);
	}
}

void func_250(bool bParam0)
{
	bool bVar0;

	bVar0 = func_103(bParam0);
	if (func_102(bVar0) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		Global_111638.f_2358.f_539.f_290[bVar0] = (((SYSTEM::TO_FLOAT(UNK_0x7F6DC62EA9922664(bParam0)) - 100f) / (SYSTEM::TO_FLOAT(UNK_0x65BC0B7172CA52DD(bParam0)) - 100f)) * 100f);
	}
}

void func_251(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	bVar0 = func_103(bParam0);
	if (func_102(bVar0) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (bParam0 == UNK_0x16F2683693E537C9())
		{
			func_252(bParam0, &(Global_111638.f_2358.f_539.f_298[bVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_111638.f_2358.f_539.f_1730[iVar2 /*4*/][bVar0] = UNK_0x923C832C9AB56966(iVar2);
				if (bParam1)
				{
					iVar1 = UNK_0xFA91242148B28E7D();
					if (Global_111638.f_2358.f_539.f_1730[iVar2 /*4*/][bVar0] == iVar1)
					{
						Global_111638.f_2358.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			UNK_0x812D6591566D640E(UNK_0xD803B885F5E47A62(), &bVar3);
			if (bVar0 == 0)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP0_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
			else if (bVar0 == 1)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP1_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
			else if (bVar0 == 2)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP2_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
		}
	}
}

void func_252(bool bParam0, var uParam1)
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
			iVar3 = func_238(iVar0);
			if (iVar3 != 0)
			{
				Var4 = UNK_0x3F0B5EEC37A0EDD3(bParam0, func_238(iVar0));
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
					iVar2 = func_255(Var4, bVar1);
					while (iVar2 != 0)
					{
						if (UNK_0xAFB8387ED2D7213E(bParam0, Var4, iVar2))
						{
							UNK_0x5D96D8530B3D0904(&(Var4.f_2), bVar1);
						}
						bVar1++;
						iVar2 = func_255(Var4, bVar1);
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
			if ((UNK_0x310836EE7129BA33(iVar9, &Var11) && !func_254(Var11.f_1)) && iVar72 < 51)
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
							if (!func_253(Var50.f_3))
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

bool func_253(int iParam0)
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

bool func_254(int iParam0)
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

int func_255(int iParam0, bool bParam1)
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
				iVar1 = func_256(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					bVar2 = false;
					while (bVar2 < UNK_0xA942498EEAA3EEAD(iVar1))
					{
						if (UNK_0x8B27EE8DAA2A39B3(iVar1, bVar2, &Var43))
						{
							if (!func_253(Var43.f_3))
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

int func_256(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = UNK_0x037F36BEA9A47381();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (UNK_0x6532540B34EE6273(iVar0, iParam1))
		{
			if (iParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_257(bool bParam0)
{
	bool bVar0;

	bVar0 = func_103(bParam0);
	if (func_102(bVar0) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		Global_111638.f_2358.f_539.f_2296[bVar0] = func_181();
	}
}

int func_258(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!iParam0->f_39)
	{
		iParam0->f_7 = 4;
		iParam0->f_39 = 1;
	}
	if ((bParam1 != 0 && bParam1 != 2) && bParam1 != 1)
	{
	}
	else
	{
		bVar0 = iParam0->f_34[bParam1] == 2;
		if (func_240(func_100()) != bParam1 || bVar0)
		{
			bVar1 = false;
			if ((bVar0 || iParam0->f_24[bParam1] != 0) || ((func_262(bParam1) && func_259(bParam1)) && !iParam0->f_18[bParam1]))
			{
				if (!iParam0->f_23)
				{
					if (!UNK_0xEB6A8945D1AC98A1((*iParam0)[bParam1]) || bVar0)
					{
						if (iParam0->f_34[bParam1] != 1 && iParam0->f_34[bParam1] != 3)
						{
							bVar1 = true;
						}
					}
				}
				else if ((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && (UNK_0x8CD06866876216F2() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)) && !UNK_0xEAE0D21A50E6C7F4(Global_96222.f_47, bParam1))
				{
					bVar1 = true;
				}
			}
			else if (!((UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_2[27 /*3*/], true) && !Global_3) && !func_3(0)))
			{
				if (iParam0->f_23)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				iParam0->f_7 = bParam1;
				return 1;
			}
		}
	}
	iParam0->f_39 = 0;
	return 0;
}

int func_259(bool bParam0)
{
	if (Global_111638.f_9080 || Global_3)
	{
		if (!Global_76622 || (Global_76622 && bParam0 != func_240(func_261())))
		{
			if (!func_260(func_242(bParam0)))
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_260(bool bParam0)
{
	if (func_102(bParam0))
	{
		if ((Global_111638.f_9080 || Global_3) || func_3(0))
		{
			return Global_111638.f_2358.f_539.f_2348[bParam0];
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_261()
{
	return Global_111638.f_2358.f_539.f_4323;
}

int func_262(bool bParam0)
{
	if ((Global_111638.f_9080 || Global_3) || func_3(0))
	{
		if (!Global_76622 || (Global_76622 && bParam0 != func_240(func_261())))
		{
			if (((bParam0 == 0 && !func_330(115)) || (bParam0 == 1 && !func_330(116))) || (bParam0 == 2 && !func_330(117)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_263(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (Global_111638.f_7683[iVar0 /*15*/] == iParam0)
		{
			if (Global_41978 != iVar0)
			{
				func_276(iVar0);
				func_268(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_198)
	{
		if (Global_111638.f_7683.f_137[iVar0 /*15*/] == iParam0)
		{
			func_268(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_650)
	{
		if (Global_111638.f_7683.f_199[iVar0 /*15*/] == iParam0)
		{
			func_267(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_764)
	{
		if (Global_111638.f_7683.f_651[iVar0 /*14*/] == iParam0)
		{
			func_265(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_866)
	{
		if (Global_111638.f_7683.f_765[iVar0 /*10*/] == iParam0)
		{
			func_264(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_264(int iParam0)
{
	int iVar0;
	struct<10> Var1;

	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_866)
	{
		return;
	}
	if (Global_111638.f_7683.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_111638.f_7683.f_866 - 2))
		{
			Global_111638.f_7683.f_765[iVar0 /*10*/] = { Global_111638.f_7683.f_765[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_111638.f_7683.f_866 > 0)
	{
		Global_111638.f_7683.f_765[(Global_111638.f_7683.f_866 - 1) /*10*/] = { Var1 };
		Global_111638.f_7683.f_866 = (Global_111638.f_7683.f_866 - 1);
	}
}

void func_265(int iParam0)
{
	int iVar0;
	struct<14> Var1;

	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_764)
	{
		return;
	}
	if (Global_111638.f_7683.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_111638.f_7683.f_764 - 2))
		{
			Global_111638.f_7683.f_651[iVar0 /*14*/] = { Global_111638.f_7683.f_651[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_111638.f_7683.f_764 > 0)
	{
		Global_111638.f_7683.f_651[(Global_111638.f_7683.f_764 - 1) /*14*/] = { Var1 };
		Global_111638.f_7683.f_764 = (Global_111638.f_7683.f_764 - 1);
	}
	func_266(0);
	func_266(1);
	func_266(2);
}

void func_266(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_102(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7683[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_111638.f_7683[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_111638.f_7683[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_111638.f_7683.f_764)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7683.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_111638.f_7683.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_111638.f_7683.f_919[bParam0] = iVar1;
}

void func_267(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;

	iVar15 = 0;
	while (iVar15 < Global_111638.f_7683.f_650)
	{
		if (Global_111638.f_7683.f_199[iVar15 /*15*/] == iParam0)
		{
			iVar16 = iVar15;
			while (iVar16 <= (Global_111638.f_7683.f_650 - 2))
			{
				Global_111638.f_7683.f_199[iVar16 /*15*/] = { Global_111638.f_7683.f_199[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_111638.f_7683.f_199[(Global_111638.f_7683.f_650 - 1) /*15*/] = { Var0 };
			Global_111638.f_7683.f_650 = (Global_111638.f_7683.f_650 - 1);
			return;
		}
		iVar15++;
	}
}

void func_268(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;

	iVar15 = 0;
	while (iVar15 < Global_111638.f_7683.f_198)
	{
		if (Global_111638.f_7683.f_137[iVar15 /*15*/] == iParam0)
		{
			func_269(Global_111638.f_7683.f_137[iVar15 /*15*/].f_6);
			iVar16 = iVar15;
			while (iVar16 <= (Global_111638.f_7683.f_198 - 2))
			{
				Global_111638.f_7683.f_137[iVar16 /*15*/] = { Global_111638.f_7683.f_137[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_111638.f_7683.f_137[(Global_111638.f_7683.f_198 - 1) /*15*/] = { Var0 };
			Global_111638.f_7683.f_198 = (Global_111638.f_7683.f_198 - 1);
			return;
		}
		iVar15++;
	}
}

int func_269(int iParam0)
{
	int iVar0;

	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (func_275(iParam0, Global_19486) == 1)
		{
			func_274(iParam0, Global_19486, 0);
			if (func_273(iParam0, Global_19486) == 0)
			{
				iVar0 = Global_19486;
				func_270(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_270(int iParam0, int iParam1)
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
			func_272(iParam0, iVar0, 0);
			func_271(iParam0, iVar0, 0);
		}
	}
}

void func_271(int iParam0, int iParam1, int iParam2)
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

void func_272(int iParam0, int iParam1, int iParam2)
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

int func_273(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

void func_274(int iParam0, int iParam1, int iParam2)
{
	Global_1798[iParam0 /*29*/].f_19[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_19[iParam1] = iParam2;
	}
}

int func_275(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_19[iParam1];
}

void func_276(int iParam0)
{
	bool bVar0;
	bool bVar1;
	struct<15> Var2;

	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_136)
	{
		return;
	}
	bVar1 = Global_111638.f_7683[iParam0 /*15*/].f_2;
	if (Global_111638.f_7683.f_136 > 1)
	{
		bVar0 = iParam0;
		while (bVar0 <= (Global_111638.f_7683.f_136 - 2))
		{
			Global_111638.f_7683[bVar0 /*15*/] = { Global_111638.f_7683[bVar0 + 1 /*15*/] };
			bVar0++;
		}
	}
	if (Global_111638.f_7683.f_136 > 0)
	{
		Global_111638.f_7683[(Global_111638.f_7683.f_136 - 1) /*15*/] = { Var2 };
		Global_111638.f_7683.f_136 = (Global_111638.f_7683.f_136 - 1);
	}
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bVar1, bVar0))
		{
			func_266(bVar0);
		}
		bVar0++;
	}
}

int func_277(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_66(func_278(iParam0));
	if (iVar0 < 0)
	{
		return 15;
	}
	if (iVar0 >= 10)
	{
		return 15;
	}
	return Global_111638.f_1.f_12[iVar0 /*6*/][iParam1];
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		case 1:
			return 8;
		case 2:
			return 9;
		case 3:
			return 10;
		case 4:
			return 11;
	}
	return -1;
}

int func_279(int iParam0)
{
	int iVar0;

	iVar0 = func_66(func_278(iParam0));
	return Global_94773[iVar0 /*19*/];
}

void func_280(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_287(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_75())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_286(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_287(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_286(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_284(UNK_0xD803B885F5E47A62())) && !func_282(UNK_0xD803B885F5E47A62(), 0)) && !func_281()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_284(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_281()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_282(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_283(-1, 0) == 8;
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

int func_283(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_224();
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

bool func_284(bool bParam0)
{
	if (func_282(bParam0, 0))
	{
		return true;
	}
	if (func_285())
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

bool func_285()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_286(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

void func_287(int iParam0)
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

void func_288(bool bParam0)
{
	if (!bParam0)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_48))
		{
			UNK_0xF690C84DADBB3551(&bLocal_48);
		}
		UNK_0x3124890FDA752DE4(707.3041f, -967.6456f, 30.376f, 1f, joaat("PROP_LAPTOP_01A"), 0);
	}
	else
	{
		UNK_0x77ADAEFF81EAE1E4(707.3041f, -967.6456f, 30.376f, 1f, joaat("PROP_LAPTOP_01A"), 0);
		if (UNK_0xB87F6CF6E5628C67(joaat("PROP_LAPTOP_01A")))
		{
			bLocal_48 = UNK_0x7707E48765093646(joaat("PROP_LAPTOP_01A"), 707.3041f, -967.6456f, 30.376f, true, true, false);
			UNK_0xD8F6A53F4799FAFE(bLocal_48, 183.14f);
			UNK_0x1E9649458B15960F(bLocal_48, true);
		}
	}
}

void func_289()
{
	if (func_330(6))
	{
		if (!func_3(0))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 6))
			{
				UNK_0xAE1670DD12E839C3("AH_2_EXT_ALT", 8);
				UNK_0x523BCC9DC80CD82F(joaat("PROP_LAPTOP_01A"));
				Local_95.f_1.f_141[2 /*2*/] = 0;
				Local_95.f_1.f_141[2 /*2*/].f_1 = 0;
				Local_95.f_1.f_141[3 /*2*/] = 0;
				Local_95.f_1.f_141[3 /*2*/].f_1 = 0;
				Local_95.f_1.f_141[7 /*2*/] = 0;
				Local_95.f_1.f_141[7 /*2*/].f_1 = 0;
				Local_95.f_1.f_141[8 /*2*/] = 0;
				Local_95.f_1.f_141[8 /*2*/].f_1 = 0;
				UNK_0x5D96D8530B3D0904(&bLocal_41, 6);
			}
			else if (UNK_0x75EECC9B0572F772())
			{
				UNK_0xA2888AACD3C45CCA("LESTER", true, 0, 0, false);
			}
			if (func_326(67))
			{
				if (!func_241(0))
				{
					if (func_310(&iLocal_42, 0, 0, 0, 0) == 1)
					{
						UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
						func_309();
						if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
						{
							UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
							UNK_0x34D79252800B23FF(0);
						}
						iLocal_93 = UNK_0x7D6CA5F52B3748BF(Local_95.f_1.f_394 - Local_95.f_1.f_397, Local_95.f_1.f_394 + Local_95.f_1.f_397, 0, 1, 1, 1);
						iLocal_94 = UNK_0x544B74C043CE9948(Local_95.f_1.f_394, Local_95.f_1.f_397 * Vector(1.5f, 1.5f, 1.5f), 0f, 0, 7);
						UNK_0x10F3BFFADF2CE3DA(Local_95.f_1.f_394 - Local_95.f_1.f_397, Local_95.f_1.f_394 + Local_95.f_1.f_397);
						UNK_0x17E8C6920A1E386F(Local_95.f_1.f_394 - Local_95.f_1.f_397, Local_95.f_1.f_394 + Local_95.f_1.f_397, false, 0);
						UNK_0x5D96D8530B3D0904(&bLocal_41, 2);
					}
				}
			}
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_41, 2))
			{
				if (func_308("AH_2_EXT_ALT") && UNK_0xB87F6CF6E5628C67(joaat("PROP_LAPTOP_01A")))
				{
					if (!UNK_0x22A8E52414415B76())
					{
						if (UNK_0xC844350D5D58C99A(Global_95241.f_9[0]) && !UNK_0x437347B10A200C4B(Global_95241.f_9[0], 0))
						{
							bLocal_46 = Global_95241.f_9[0];
							UNK_0x73270B3C9CC833FD(bLocal_46, false, 1);
							UNK_0x29E8331978B73E7F(bLocal_46, "LESTER", 1, joaat("IG_LESTERCREST"), 0);
						}
						if (UNK_0xC844350D5D58C99A(Global_95241.f_28[0]) && !UNK_0x437347B10A200C4B(Global_95241.f_28[0], 0))
						{
							bLocal_47 = Global_95241.f_28[0];
							UNK_0x73270B3C9CC833FD(Global_95241.f_28[0], false, 1);
							UNK_0x29E8331978B73E7F(bLocal_47, "WALKINGSTICK_LESTER", 1, joaat("PROP_CS_WALKING_STICK"), 0);
						}
						if (UNK_0xC844350D5D58C99A(Global_95241.f_9[1]) && !UNK_0x437347B10A200C4B(Global_95241.f_9[1], 0))
						{
							iLocal_49[0] = Global_95241.f_9[1];
							UNK_0x73270B3C9CC833FD(iLocal_49[0], false, 1);
							UNK_0x29E8331978B73E7F(iLocal_49[0], "MICHAEL", 0, joaat("PLAYER_ZERO"), 0);
						}
						else
						{
							UNK_0x29E8331978B73E7F(iLocal_49[0], "MICHAEL", 2, joaat("PLAYER_ZERO"), 0);
							UNK_0x5D96D8530B3D0904(&bLocal_41, 12);
						}
						if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
						{
							bLocal_45 = UNK_0x16F2683693E537C9();
							UNK_0x29E8331978B73E7F(bLocal_45, "FRANKLIN", 1, joaat("PLAYER_ONE"), 0);
						}
						func_307(&(Local_95.f_484), 0, 0, "MICHAEL", 1, 1);
						func_307(&(Local_95.f_484), 1, 0, "FRANKLIN", 1, 1);
						func_307(&(Local_95.f_484), 3, 0, "LESTER", 1, 1);
						func_73(1);
						func_280(1, 1, 1, 0, 0, 0);
						func_288(0);
						UNK_0x1BA7FCEAFCE8D46E(949391213, 3, true, false);
						UNK_0x838CC054A9235BEC(949391213, 0f, true, false);
						UNK_0x4C902758BEA97C68(2048);
						UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
						iLocal_44 = UNK_0x1C0640BA9A7327B3();
					}
					else
					{
						func_120();
						if (UNK_0xC844350D5D58C99A(Global_95241[0]) && !UNK_0x437347B10A200C4B(Global_95241[0], 0))
						{
							UNK_0x73270B3C9CC833FD(Global_95241[0], false, 1);
							func_291(Global_95241[0], 0, 1);
							UNK_0xA954465BA6FDEFE2(&(Global_95241[0]));
						}
						if (UNK_0xC844350D5D58C99A(UNK_0x728870EB733D12A1()))
						{
							Global_95241[0] = UNK_0x728870EB733D12A1();
							UNK_0x73270B3C9CC833FD(Global_95241[0], false, 1);
							func_291(Global_95241[0], 0, func_100());
							UNK_0xA954465BA6FDEFE2(&(Global_95241[0]));
						}
						if (UNK_0x98F1B512A2CC07C5(UNK_0x16F2683693E537C9(), false) == 7)
						{
							UNK_0x3BFC3B9ADD2EE7B7(UNK_0x16F2683693E537C9(), false);
						}
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 13))
						{
							if (!UNK_0x0F1CCD77290EE12F() && !UNK_0x7BCE0E6DD4A1F749())
							{
								UNK_0x82E51BCA72537B6C(800);
							}
							UNK_0x5D96D8530B3D0904(&bLocal_41, 13);
						}
						if (UNK_0xEAD40E09B5AA81FC())
						{
							UNK_0x5D96D8530B3D0904(&bLocal_41, 14);
						}
						if (UNK_0xEAE0D21A50E6C7F4(bLocal_41, 14))
						{
							if (UNK_0x757EF87A33649210())
							{
								if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, true))
								{
									func_290();
									UNK_0x5D96D8530B3D0904(&bLocal_41, true);
								}
								if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 3))
								{
									func_2(3, 3, 1);
									UNK_0x5D96D8530B3D0904(&bLocal_41, 3);
								}
							}
						}
						if (UNK_0xEAE0D21A50E6C7F4(bLocal_41, 12))
						{
							if (UNK_0xC844350D5D58C99A(UNK_0x6450C2A9FBA3C3BF("MICHAEL", joaat("PLAYER_ZERO"))))
							{
								iLocal_49[0] = UNK_0x940C1429253D3B1B(UNK_0x6450C2A9FBA3C3BF("MICHAEL", joaat("PLAYER_ZERO")));
								UNK_0x0674E58A79778E99(&bLocal_41, 12);
							}
						}
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 3))
						{
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_44) > 15848)
							{
								func_2(3, 3, 1);
								UNK_0x5D96D8530B3D0904(&bLocal_41, 3);
							}
						}
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, true))
						{
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_44) > 5000)
							{
								func_290();
								UNK_0x5D96D8530B3D0904(&bLocal_41, true);
							}
						}
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 4))
						{
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_44) > 71550)
							{
								if (UNK_0xC844350D5D58C99A(UNK_0x8D0D3FE7FF5DD3EC("FRANKLIN", 0)))
								{
									if (!UNK_0x437347B10A200C4B(UNK_0x8D0D3FE7FF5DD3EC("FRANKLIN", 0), 0))
									{
										UNK_0x4A4806F9D471E491(UNK_0x8D0D3FE7FF5DD3EC("FRANKLIN", 0), false, 0);
									}
								}
								if (UNK_0xC844350D5D58C99A(UNK_0x8D0D3FE7FF5DD3EC("LESTER", 0)))
								{
									if (!UNK_0x437347B10A200C4B(UNK_0x8D0D3FE7FF5DD3EC("LESTER", 0), 0))
									{
										UNK_0x4A4806F9D471E491(UNK_0x8D0D3FE7FF5DD3EC("LESTER", 0), false, 0);
									}
								}
								if (UNK_0xC844350D5D58C99A(UNK_0x8D0D3FE7FF5DD3EC("WALKINGSTICK_LESTER", 0)))
								{
									if (UNK_0xC844350D5D58C99A(UNK_0x8D0D3FE7FF5DD3EC("WALKINGSTICK_LESTER", 0)))
									{
										UNK_0x4A4806F9D471E491(UNK_0x8D0D3FE7FF5DD3EC("WALKINGSTICK_LESTER", 0), false, 0);
									}
								}
								UNK_0x5D96D8530B3D0904(&bLocal_41, 4);
							}
						}
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 5))
						{
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_44) > 73900)
							{
								if (UNK_0xC844350D5D58C99A(iLocal_49[0]))
								{
									UNK_0x4A4806F9D471E491(iLocal_49[0], false, 0);
								}
								UNK_0x5D96D8530B3D0904(&bLocal_41, 5);
							}
						}
						if (UNK_0x3148AE92ED70DC30("MICHAEL", joaat("PLAYER_ZERO")))
						{
							if (!UNK_0x437347B10A200C4B(iLocal_49[0], 0))
							{
								UNK_0x4E885A246A9D983A(iLocal_49[0], 208, true);
								UNK_0x4E885A246A9D983A(iLocal_49[0], 118, false);
								UNK_0x4E885A246A9D983A(iLocal_49[0], 213, false);
								UNK_0x11AD11297DC58CC7(iLocal_49[0], true);
							}
							if (func_100() != 0)
							{
								func_258(&iLocal_49, 0);
								func_196(&iLocal_49, 0, 0, 0);
								UNK_0x71199B01895C6202(joaat("PLAYER_ZERO"));
								func_307(&(Local_95.f_484), 0, UNK_0x16F2683693E537C9(), "MICHAEL", 1, 1);
							}
							if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, true))
							{
								func_290();
								UNK_0x5D96D8530B3D0904(&bLocal_41, true);
							}
							func_115(6, 0);
						}
						if (UNK_0xEABED1927EFB48CA(0))
						{
							func_288(1);
							if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 4))
							{
								if (UNK_0xC844350D5D58C99A(UNK_0x8D0D3FE7FF5DD3EC("FRANKLIN", 0)))
								{
									if (!UNK_0x437347B10A200C4B(UNK_0x8D0D3FE7FF5DD3EC("FRANKLIN", 0), 0))
									{
										UNK_0x4A4806F9D471E491(UNK_0x8D0D3FE7FF5DD3EC("FRANKLIN", 0), false, 0);
									}
								}
								if (UNK_0xC844350D5D58C99A(UNK_0x8D0D3FE7FF5DD3EC("LESTER", 0)))
								{
									if (!UNK_0x437347B10A200C4B(UNK_0x8D0D3FE7FF5DD3EC("LESTER", 0), 0))
									{
										UNK_0x4A4806F9D471E491(UNK_0x8D0D3FE7FF5DD3EC("LESTER", 0), false, 0);
									}
								}
								if (UNK_0xC844350D5D58C99A(UNK_0x8D0D3FE7FF5DD3EC("WALKINGSTICK_LESTER", 0)))
								{
									if (UNK_0xC844350D5D58C99A(UNK_0x8D0D3FE7FF5DD3EC("WALKINGSTICK_LESTER", 0)))
									{
										UNK_0x4A4806F9D471E491(UNK_0x8D0D3FE7FF5DD3EC("WALKINGSTICK_LESTER", 0), false, 0);
									}
								}
								UNK_0x5D96D8530B3D0904(&bLocal_41, 4);
							}
							if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 5))
							{
								if (UNK_0xC844350D5D58C99A(iLocal_49[0]))
								{
									UNK_0x4A4806F9D471E491(iLocal_49[0], false, 0);
								}
								UNK_0x5D96D8530B3D0904(&bLocal_41, 5);
							}
						}
					}
				}
			}
		}
		else
		{
			if (func_150(0))
			{
				if (func_310(&iLocal_42, 0, 0, 0, 0) == 1)
				{
					UNK_0x5D96D8530B3D0904(&bLocal_41, 2);
				}
			}
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_41, 2))
			{
				func_307(&(Local_95.f_484), 0, 0, "MICHAEL", 1, 1);
				func_307(&(Local_95.f_484), 1, 0, "FRANKLIN", 1, 1);
				func_307(&(Local_95.f_484), 3, 0, "LESTER", 1, 1);
				func_290();
				func_115(6, 0);
			}
		}
	}
	else
	{
		if (UNK_0xA0F4292EA950943D("AH_2_EXT_ALT"))
		{
			UNK_0x5C8D148FC238F38A();
		}
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_41, 6))
		{
			UNK_0x0674E58A79778E99(&bLocal_41, 6);
		}
	}
}

void func_290()
{
	func_86(1, 3, 1);
	func_86(2, 3, 1);
	func_312(&Local_95);
	func_68(&Local_95);
}

int func_291(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;
	bool bVar1;

	if (iParam1 == 0)
	{
		bVar1 = UNK_0xA712FAE854841798(bParam0, &uVar0);
		if (!UNK_0xEA6BC48857E0AC4C(bVar1))
		{
			if (UNK_0x12AB0310C2281427(bVar1) == UNK_0x12AB0310C2281427("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_292(bParam0, bParam2);
	return 1;
}

void func_292(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_298(bParam0))
	{
		return;
	}
	if ((bParam1 != 0 && bParam1 != 1) && bParam1 != 2)
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
				bParam1 = false;
			}
			else if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("PLAYER_ONE"))
			{
				bParam1 = true;
			}
			else if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("PLAYER_TWO"))
			{
				bParam1 = 2;
			}
		}
		if ((bParam1 != 0 && bParam1 != 1) && bParam1 != 2)
		{
			bParam1 = Global_111638.f_2358.f_539.f_4321;
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
	Global_111638.f_32744.f_5590 = bParam1;
	Global_76346 = bParam0;
	Global_111638.f_32744.f_5588 = 1;
	func_293(bParam0, &(Global_111638.f_32744.f_5510));
}

void func_293(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_297(uParam1);
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
		if (uParam1->f_65 == -1 && !func_296(uParam1->f_66))
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
		func_295(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_294(iVar0 + 1));
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

int func_294(int iParam0)
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

int func_295(bool bParam0, var uParam1, var uParam2)
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

bool func_296(int iParam0)
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

void func_297(var uParam0)
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

bool func_298(bool bParam0)
{
	if ((((((((((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || func_305(bParam0, 0, 0)) || func_305(bParam0, 1, 0)) || func_305(bParam0, 2, 0)) || func_304(bParam0) != 145) || func_303(bParam0)) || func_302(bParam0)) || func_301(bParam0)) || func_300(bParam0)) || !func_299(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		if (func_302(bParam0))
		{
		}
		if (func_302(bParam0))
		{
		}
		if (func_305(bParam0, 0, 0))
		{
		}
		if (func_305(bParam0, 1, 0))
		{
		}
		if (func_305(bParam0, 2, 0))
		{
		}
		if (func_304(bParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_299(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (!func_169(bParam0, 0))
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

bool func_300(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	bVar1 = UNK_0x7888A5D2621AAF2D(bParam0);
	if (bVar0 == joaat("SPEEDO") && UNK_0x7F8A39872A07D2CE(bVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_169(bVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_301(bool bParam0)
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

bool func_302(bool bParam0)
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

bool func_303(bool bParam0)
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

int func_304(bool bParam0)
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

bool func_305(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_306(iParam1, iVar0, &uVar1, &iVar9))
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

bool func_306(int iParam0, int iParam1, char* sParam2, int iParam3)
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

void func_307(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_308(bool bParam0)
{
	bool bVar0;

	bVar0 = UNK_0xA0F4292EA950943D(bParam0);
	if (!Global_76621)
	{
		if (!bVar0)
		{
			Global_76621 = 1;
		}
	}
	return bVar0;
}

void func_309()
{
	Global_98783 = 1;
}

int func_310(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_241(0))
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		UNK_0x62DE699599F0417E(UNK_0xA30EC016B12C03E4(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			UNK_0x4C7B0415764B64BA(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *iParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_150(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		Global_41398[Global_41392 /*4*/] = Global_41395;
		Global_41398[Global_41392 /*4*/].f_1 = iParam1;
		Global_41398[Global_41392 /*4*/].f_2 = iParam2;
		Global_41398[Global_41392 /*4*/].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_311(iParam0, iParam4);
		}
	}
	return 2;
}

void func_311(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_41392 == 0)
	{
		return;
	}
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0 /*4*/] == *iParam0)
		{
			Global_41398[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*iParam0 = -1;
}

void func_312(var uParam0)
{
	if (func_12(2, *uParam0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, true))
		{
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
			{
				func_70(uParam0, func_313(*uParam0));
				func_86(2, *uParam0, 0);
			}
			else
			{
				func_122(uParam0);
				func_86(2, *uParam0, 0);
			}
		}
	}
}

bool func_313(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_330(18);
		case 1:
			return func_330(22);
		case 2:
			return func_330(40);
		case 3:
			return func_330(8);
		case 4:
			return func_330(26);
		default:
			break;
	}
	return false;
}

void func_314(var uParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		fVar0 = SYSTEM::VDIST2(uParam0->f_401, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true));
		if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, true))
		{
			func_322(uParam0);
		}
		else if (fVar0 < (fParam1 * fParam1) || UNK_0xEAE0D21A50E6C7F4(Global_94753, *uParam0))
		{
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, false))
			{
				if (func_321(uParam0))
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_94753, *uParam0))
					{
						if (UNK_0xEAE0D21A50E6C7F4(Global_94755, *uParam0))
						{
							func_316(uParam0);
						}
					}
					else
					{
						func_316(uParam0);
					}
				}
			}
			else
			{
				func_315(uParam0);
			}
		}
		if (fVar0 > (fParam2 * fParam2) && !UNK_0xEAE0D21A50E6C7F4(Global_94753, *uParam0))
		{
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, false))
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, true))
				{
					func_154(uParam0);
				}
				func_153(uParam0);
			}
		}
	}
}

void func_315(var uParam0)
{
	if (!UNK_0x1D6041CB88128065())
	{
		return;
	}
	UNK_0xD7992BEF7A9D109E(&(uParam0->f_1.f_272), 5);
	UNK_0xAE317D00A5A55DF6("HEIST_BULLETIN_BOARD", 0, -1);
	if (*uParam0 != 1)
	{
		UNK_0x523BCC9DC80CD82F(joaat("PROP_LD_PLANNING_PIN_01"));
		UNK_0x523BCC9DC80CD82F(joaat("PROP_LD_PLANNING_PIN_02"));
		UNK_0x523BCC9DC80CD82F(joaat("PROP_LD_PLANNING_PIN_03"));
	}
	uParam0->f_413 = UNK_0x5275223F099DEF26(&(uParam0->f_1.f_268));
	uParam0->f_414 = UNK_0x5275223F099DEF26("INSTRUCTIONAL_BUTTONS");
	UNK_0x5D96D8530B3D0904(&Global_94752, *uParam0);
	UNK_0x5D96D8530B3D0904(&(uParam0->f_449), false);
}

void func_316(var uParam0)
{
	bool bVar0;

	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, true))
	{
		bVar0 = false;
		while (bVar0 < uParam0->f_1.f_96)
		{
			func_37(uParam0, bVar0);
			bVar0++;
		}
		func_34(uParam0);
		func_33(uParam0);
		func_320(uParam0);
		func_319(uParam0);
		func_317(uParam0);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_449), true);
	}
}

void func_317(var uParam0)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (func_327(*uParam0, uParam0->f_1.f_75[iVar0]))
		{
			switch ((iVar0 % 3))
			{
				case 0:
					bVar1 = joaat("PROP_LD_PLANNING_PIN_01");
					break;
				case 1:
					bVar1 = joaat("PROP_LD_PLANNING_PIN_02");
					break;
				case 2:
					bVar1 = joaat("PROP_LD_PLANNING_PIN_03");
					break;
			}
			fVar2 = (SYSTEM::TO_FLOAT((UNK_0x09AC81E49EA267F7(false, 65535) - 32767)) / 4000f);
			fVar3 = (SYSTEM::TO_FLOAT((UNK_0x09AC81E49EA267F7(false, 65535) - 32767)) / 4000f);
			vVar4 = { func_318(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
			uParam0->f_428[iVar0] = UNK_0x7707E48765093646(bVar1, vVar4, true, true, false);
			UNK_0xC023D1C4BF532815(uParam0->f_428[iVar0], fVar2, 0f, (uParam0->f_404 + fVar3), 2, 1);
			UNK_0x73270B3C9CC833FD(uParam0->f_428[iVar0], true, 0);
			UNK_0xE121AE1BBF90E186(uParam0->f_428[iVar0], true);
			UNK_0x20641932E5104B25(uParam0->f_428[iVar0], false, 0);
			UNK_0x08543B8F6DBE0B08(uParam0->f_428[iVar0], 0);
			UNK_0x1E9649458B15960F(uParam0->f_428[iVar0], true);
		}
		iVar0++;
	}
	UNK_0x0674E58A79778E99(&Global_94755, *uParam0);
}

Vector3 func_318(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;

	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_30(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_404;
	vVar7 = { uParam0->f_401 };
	vVar7 = { vVar7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	return vVar7;
}

void func_319(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_117)
	{
		bVar2 = uParam0->f_1.f_186[iVar0];
		bVar3 = UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_120[iVar1], bVar2);
		if (uParam0->f_1.f_141[iVar0 /*2*/] == 0 && uParam0->f_1.f_141[iVar0 /*2*/].f_1 == 0)
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_HEIST_ASSET");
			UNK_0x3CAEA85DA607305E(uParam0->f_1.f_118[iVar0]);
			UNK_0x1200CC973A2399C8(bVar3);
			UNK_0x7E60D21B163E9D56();
		}
		else
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_HEIST_ASSET");
			UNK_0x3CAEA85DA607305E(uParam0->f_1.f_118[iVar0]);
			UNK_0x1200CC973A2399C8(bVar3);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_141[iVar0 /*2*/]));
			UNK_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_141[iVar0 /*2*/].f_1));
			UNK_0x7E60D21B163E9D56();
		}
		iVar0++;
	}
}

void func_320(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "CREATE_VIEW");
	UNK_0x3CAEA85DA607305E(uParam0->f_415 + 1);
	UNK_0x3CAEA85DA607305E(2);
	UNK_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_14));
	UNK_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_14.f_1));
	UNK_0x7E60D21B163E9D56();
	iVar0 = *uParam0;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 < uParam0->f_1.f_209)
	{
		if (func_327(iVar0, uParam0->f_1.f_248[iVar2]))
		{
			bVar3 = false;
			if (func_327(iVar0, uParam0->f_1.f_258[iVar2]))
			{
				bVar3 = true;
			}
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(uParam0->f_415 + 1);
			UNK_0x3CAEA85DA607305E(bVar1);
			UNK_0x3CAEA85DA607305E(bVar3);
			func_10(&(uParam0->f_1.f_211[iVar2 /*4*/]));
			UNK_0x7E60D21B163E9D56();
			bVar1++;
		}
		iVar2++;
	}
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "DISPLAY_VIEW");
	UNK_0x3CAEA85DA607305E(uParam0->f_415 + 1);
	UNK_0x7E60D21B163E9D56();
	if (func_327(*uParam0, uParam0->f_1.f_210))
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
		UNK_0x3CAEA85DA607305E(uParam0->f_415 + 1);
		UNK_0x1200CC973A2399C8(true);
		UNK_0x7E60D21B163E9D56();
	}
	else
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
		UNK_0x3CAEA85DA607305E(uParam0->f_415 + 1);
		UNK_0x1200CC973A2399C8(false);
		UNK_0x7E60D21B163E9D56();
	}
}

bool func_321(var uParam0)
{
	if (!UNK_0x83D8570832F172A7(uParam0->f_413))
	{
		return false;
	}
	if (!UNK_0x83D8570832F172A7(uParam0->f_414))
	{
		return false;
	}
	if (!UNK_0x67C1D9E5B91B2E37(5))
	{
		return false;
	}
	if (UNK_0x1D6041CB88128065())
	{
		if (!UNK_0xAE317D00A5A55DF6("HEIST_BULLETIN_BOARD", 0, -1))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	if (*uParam0 != 1)
	{
		if ((!UNK_0xB87F6CF6E5628C67(joaat("PROP_LD_PLANNING_PIN_01")) || !UNK_0xB87F6CF6E5628C67(joaat("PROP_LD_PLANNING_PIN_02"))) || !UNK_0xB87F6CF6E5628C67(joaat("PROP_LD_PLANNING_PIN_03")))
		{
			return false;
		}
	}
	UNK_0x5D96D8530B3D0904(&Global_94754, *uParam0);
	return true;
}

void func_322(var uParam0)
{
	float fVar0;
	float fVar1;

	if (func_327(*uParam0, 0))
	{
		func_323(uParam0);
		fVar0 = (-uParam0->f_1.f_4 * 0.5f);
		fVar1 = (uParam0->f_1.f_5 * 0.5f);
		UNK_0x0103165890FA9E7F(uParam0->f_413, uParam0->f_401 + Vector(fVar1, (fVar0 * SYSTEM::COS((90f - uParam0->f_404))), (fVar0 * SYSTEM::SIN((90f - uParam0->f_404)))), 180f, 0f, uParam0->f_404, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
	}
}

void func_323(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;

	if (UNK_0xEAE0D21A50E6C7F4(Global_94752, *uParam0))
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 16);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 15);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 14);
		UNK_0x0674E58A79778E99(&Global_94752, *uParam0);
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 16))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_117)
		{
			bVar1 = uParam0->f_1.f_186[iVar0];
			bVar2 = func_327(*uParam0, bVar1);
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_HEIST_ASSET");
			UNK_0x3CAEA85DA607305E(uParam0->f_1.f_118[iVar0]);
			UNK_0x1200CC973A2399C8(bVar2);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x7E60D21B163E9D56();
			iVar0++;
		}
		UNK_0x0674E58A79778E99(&(uParam0->f_449), 16);
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 15))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_33)
		{
			if (func_327(*uParam0, uParam0->f_1.f_75[iVar0]))
			{
				if (!UNK_0xC844350D5D58C99A(uParam0->f_428[iVar0]))
				{
					switch ((iVar0 % 3))
					{
						case 0:
							bVar3 = joaat("PROP_LD_PLANNING_PIN_01");
							break;
						case 1:
							bVar3 = joaat("PROP_LD_PLANNING_PIN_02");
							break;
						case 2:
							bVar3 = joaat("PROP_LD_PLANNING_PIN_03");
							break;
					}
					fVar4 = (SYSTEM::TO_FLOAT((UNK_0x09AC81E49EA267F7(false, 65535) - 32767)) / 4000f);
					fVar5 = (SYSTEM::TO_FLOAT((UNK_0x09AC81E49EA267F7(false, 65535) - 32767)) / 4000f);
					vVar6 = { func_318(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
					uParam0->f_428[iVar0] = UNK_0x7707E48765093646(bVar3, vVar6, true, true, false);
					UNK_0xC023D1C4BF532815(uParam0->f_428[iVar0], fVar4, 0f, (uParam0->f_404 + fVar5), 2, 1);
					UNK_0x73270B3C9CC833FD(uParam0->f_428[iVar0], true, 0);
					UNK_0xE121AE1BBF90E186(uParam0->f_428[iVar0], true);
					UNK_0x20641932E5104B25(uParam0->f_428[iVar0], false, 0);
					UNK_0x08543B8F6DBE0B08(uParam0->f_428[iVar0], 0);
					UNK_0x1E9649458B15960F(uParam0->f_428[iVar0], true);
				}
			}
			else if (!UNK_0xC844350D5D58C99A(uParam0->f_428[iVar0]))
			{
				UNK_0xF690C84DADBB3551(&(uParam0->f_428[iVar0]));
			}
			iVar0++;
		}
		UNK_0x0674E58A79778E99(&(uParam0->f_449), 15);
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 14))
	{
		func_324(uParam0);
		func_34(uParam0);
		func_320(uParam0);
		UNK_0x0674E58A79778E99(&(uParam0->f_449), 14);
	}
}

void func_324(var uParam0)
{
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	UNK_0x3CAEA85DA607305E(uParam0->f_415 + 1);
	UNK_0x7E60D21B163E9D56();
}

bool func_325(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_326(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

bool func_327(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_120[iParam0], bParam1);
}

void func_328()
{
	bool bVar0;

	bVar0 = func_100();
	if (func_102(bVar0))
	{
		if (!func_241(0))
		{
			if (!func_326(69) && !func_326(70))
			{
				if (func_329(69) || func_329(70))
				{
					if (Global_111638.f_7256.f_227[70] != 1)
					{
						Global_111638.f_7256.f_227[70] = 1;
						Global_38398[70] = 0;
						Global_38597[70] = 1;
					}
					if (Global_111638.f_7256.f_227[71] != 2)
					{
						Global_111638.f_7256.f_227[71] = 2;
						Global_38398[71] = 0;
						Global_38597[71] = 1;
					}
					if (Global_111638.f_7256.f_227[73] != 1)
					{
						Global_111638.f_7256.f_227[73] = 1;
						Global_38398[73] = 0;
						Global_38597[73] = 1;
					}
					if (Global_111638.f_7256.f_227[72] != 0)
					{
						Global_111638.f_7256.f_227[72] = 0;
						Global_38398[72] = 0;
						Global_38597[72] = 1;
					}
					if (Global_111638.f_7256.f_227[74] != 0)
					{
						Global_111638.f_7256.f_227[74] = 0;
						Global_38398[74] = 0;
						Global_38597[74] = 1;
					}
				}
			}
		}
	}
}

int func_329(int iParam0)
{
	int iVar0;

	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_92729[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_89496)
	{
		if (Global_89496[iVar0 /*5*/] != -1)
		{
			if (Global_76891.f_109[Global_89496[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_330(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_331(var uParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;

	*uParam0 = iParam1;
	vVar0 = { Global_94690[uParam0->f_1.f_1 /*15*/].f_3 };
	fVar3 = Global_94690[uParam0->f_1.f_1 /*15*/].f_6;
	uParam0->f_401 = { vVar0 };
	uParam0->f_404 = fVar3;
	uParam0->f_405 = { vVar0 + Vector(0f, (-uParam0->f_1.f_8 * SYSTEM::COS((360f - fVar3))), (-uParam0->f_1.f_8 * SYSTEM::SIN((360f - fVar3)))) };
	uParam0->f_408 = { -0.85f, 0f, fVar3 };
	UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 4);
	uParam0->f_415 = uParam0->f_1.f_96;
	uParam0->f_416 = -1;
	UNK_0x0674E58A79778E99(&(uParam0->f_449), false);
	UNK_0x0674E58A79778E99(&(uParam0->f_449), true);
	UNK_0x0674E58A79778E99(&(uParam0->f_449), 2);
	uParam0->f_464 = 0;
	uParam0->f_451 = -1;
}

void func_332(var uParam0, int iParam1)
{
	func_342(uParam0, 1, "HEIST_AGENCY", "BOARD5", "AHFAUD", "CRWAUD", 3, 0, 6, 13, iParam1, 708.9957f, -965.256f, 31.39533f, 5.5f, 6.25f, 2f);
	func_341(uParam0, 750, 540, 2.1f, 1.47f, 3.6f, 2.05f, 2f, 375, 250, 136, 411, 268, 415, 401, 418, 482, 413, 0, 0, 670, 350, 0, 85, 684, 106);
	func_340(uParam0, 20f, 22f, 28f);
	func_339(uParam0, "", "", "", "", "AHP12", "", "AHP13", "AHLONG");
	func_338(uParam0, 1, "CRW_GM", "");
	func_338(uParam0, 3, "CRW_HW", "");
	func_338(uParam0, 4, "CRW_NR", "");
	func_338(uParam0, 5, "CRW_DJ", "");
	func_338(uParam0, 6, "CRW_PH", "");
	func_338(uParam0, 7, "CRW_CF", "");
	func_338(uParam0, 8, "CRW_ET", "");
	func_338(uParam0, 9, "CRW_KD", "");
	func_338(uParam0, 10, "CRW_PM", "CRM_PM");
	func_338(uParam0, 12, "CRW_RL", "CRM_RL");
	func_338(uParam0, 13, "CRW_TM", "CRM_TM");
	func_337(uParam0, 24, "AHRIC1");
	func_337(uParam0, 26, "AHKAR1");
	func_337(uParam0, 18, "AHJH");
	func_337(uParam0, 19, "AHPAL");
	func_337(uParam0, 21, "AHBOTH");
	func_336(uParam0, 3, 0, 0, 0);
	func_336(uParam0, 2, 0, 0, 0);
	func_336(uParam0, 7, 0, 0, 0);
	func_336(uParam0, 8, 0, 0, 0);
	func_336(uParam0, 5, 2, 0, 0);
	func_336(uParam0, 6, 2, 0, 0);
	func_336(uParam0, 4, 2, 0, 0);
	func_336(uParam0, 9, 2, 0, 0);
	func_336(uParam0, 0, 3, 0, 0);
	func_336(uParam0, 1, 3, 0, 0);
	func_335(uParam0, 0, 1, "H_TD_JANI");
	func_335(uParam0, 1, 3, "H_TD_BLUP");
	func_335(uParam0, 2, 4, "H_TD_PLAN");
	func_335(uParam0, 2, 5, "H_TD_CREW");
	func_335(uParam0, 6, 7, "H_TD_FIRE");
	func_335(uParam0, 6, 8, "H_TD_GETA");
	func_334(uParam0, 2, 70, 71);
	func_334(uParam0, 2, 44, 174);
	func_334(uParam0, 2, 45, 209);
	func_334(uParam0, 3, 178, 68);
	func_334(uParam0, 3, 321, 65);
	func_334(uParam0, 2, 538, 52);
	func_334(uParam0, 2, 470, 82);
	func_334(uParam0, 2, 455, 207);
	func_334(uParam0, 2, 566, 207);
	func_334(uParam0, 2, 673, 339);
	func_334(uParam0, 2, 679, 442);
	func_334(uParam0, 2, 689, 63);
	func_333(uParam0, 2, "AHP8", 55, 197, 1);
	func_333(uParam0, 2, "AHP9", 252, 150, 1);
	func_333(uParam0, 2, "AHP10", 70, 97, 1);
	func_333(uParam0, 2, "AHP11", 504, 106, 1);
}

void func_333(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<2> Var0;

	if (uParam0->f_369 < 7)
	{
		StringCopy(&Var0, sParam2, 8);
		uParam0->f_386[uParam0->f_369] = iParam1;
		uParam0->f_371[uParam0->f_369 /*2*/] = iParam3;
		uParam0->f_371[uParam0->f_369 /*2*/].f_1 = iParam4;
		uParam0->f_280[uParam0->f_369 + 4 /*2*/] = { Var0 };
		if (bParam5)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_370), uParam0->f_369);
		}
		uParam0->f_369++;
	}
}

void func_334(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_33 < 20)
	{
		uParam0->f_75[uParam0->f_33] = iParam1;
		uParam0->f_34[uParam0->f_33 /*2*/] = iParam2;
		uParam0->f_34[uParam0->f_33 /*2*/].f_1 = iParam3;
		uParam0->f_33++;
	}
}

void func_335(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	struct<8> Var0;

	if (uParam0->f_209 < 9)
	{
		StringCopy(&Var0, sParam3, 32);
		uParam0->f_248[uParam0->f_209] = iParam1;
		uParam0->f_258[uParam0->f_209] = iParam2;
		MemCopy(&(uParam0->f_211[uParam0->f_209 /*4*/]), {Var0}, 4);
		uParam0->f_209++;
	}
}

void func_336(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (uParam0->f_117 < 22)
	{
		uParam0->f_118[uParam0->f_117] = iParam1;
		uParam0->f_186[uParam0->f_117] = iParam2;
		uParam0->f_141[uParam0->f_117 /*2*/] = iParam3;
		uParam0->f_141[uParam0->f_117 /*2*/].f_1 = iParam4;
		uParam0->f_117++;
	}
}

void func_337(var uParam0, int iParam1, bool bParam2)
{
	struct<2> Var0;

	StringCopy(&Var0, bParam2, 8);
	if (UNK_0x7F8A39872A07D2CE(bParam2, ""))
	{
		return;
	}
	uParam0->f_304[iParam1 /*2*/] = { Var0 };
}

void func_338(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	struct<2> Var0;
	struct<2> Var2;

	StringCopy(&Var0, sParam2, 8);
	StringCopy(&Var2, bParam3, 8);
	uParam0->f_304[iParam1 /*2*/] = { Var0 };
	if (!UNK_0x7F8A39872A07D2CE(bParam3, ""))
	{
		switch (iParam1)
		{
			case 10:
				uParam0->f_304[14 /*2*/] = { Var2 };
				break;
			case 13:
				uParam0->f_304[16 /*2*/] = { Var2 };
				break;
			case 12:
				uParam0->f_304[15 /*2*/] = { Var2 };
				break;
			case 11:
				uParam0->f_304[17 /*2*/] = { Var2 };
				break;
			default:
				break;
		}
	}
}

void func_339(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
{
	struct<4> Var0;
	struct<4> Var4;
	struct<4> Var8;
	struct<4> Var12;
	struct<2> Var16;
	struct<2> Var18;
	struct<2> Var20;
	struct<2> Var22;

	StringCopy(&Var0, sParam1, 16);
	StringCopy(&Var4, sParam2, 16);
	StringCopy(&Var8, sParam3, 16);
	StringCopy(&Var12, sParam4, 16);
	StringCopy(&Var16, sParam5, 8);
	StringCopy(&Var18, sParam6, 8);
	StringCopy(&Var20, sParam7, 8);
	StringCopy(&Var22, sParam8, 8);
	uParam0->f_20[0 /*4*/] = { Var0 };
	uParam0->f_20[1 /*4*/] = { Var4 };
	uParam0->f_108[0 /*4*/] = { Var8 };
	uParam0->f_108[1 /*4*/] = { Var12 };
	uParam0->f_280[1 /*2*/] = { Var16 };
	uParam0->f_280[2 /*2*/] = { Var18 };
	uParam0->f_280[0 /*2*/] = { Var20 };
	uParam0->f_280[3 /*2*/] = { Var22 };
}

void func_340(var uParam0, float fParam1, float fParam2, float fParam3)
{
	uParam0->f_9 = fParam1;
	uParam0->f_10 = fParam2;
	uParam0->f_11 = fParam3;
}

void func_341(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = fParam3;
	uParam0->f_5 = fParam4;
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_12 = iParam8;
	uParam0->f_12.f_1 = iParam9;
	uParam0->f_97[0 /*2*/] = iParam10;
	uParam0->f_97[0 /*2*/].f_1 = iParam11;
	uParam0->f_97[1 /*2*/] = iParam12;
	uParam0->f_97[1 /*2*/].f_1 = iParam13;
	uParam0->f_97[2 /*2*/] = iParam14;
	uParam0->f_97[2 /*2*/].f_1 = iParam15;
	uParam0->f_97[3 /*2*/] = iParam16;
	uParam0->f_97[3 /*2*/].f_1 = iParam17;
	uParam0->f_97[4 /*2*/] = iParam18;
	uParam0->f_97[4 /*2*/].f_1 = iParam19;
	uParam0->f_16 = iParam20;
	uParam0->f_16.f_1 = iParam21;
	uParam0->f_18 = iParam22;
	uParam0->f_18.f_1 = iParam23;
	uParam0->f_14 = iParam24;
	uParam0->f_14.f_1 = iParam25;
}

void func_342(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, vector3 vParam11, vector3 vParam14)
{
	uParam0->f_1 = iParam1;
	StringCopy(&(uParam0->f_268), sParam2, 16);
	StringCopy(&(uParam0->f_272), sParam3, 16);
	StringCopy(&(uParam0->f_276), sParam4, 8);
	StringCopy(&(uParam0->f_278), sParam5, 8);
	uParam0->f_29 = iParam6;
	uParam0->f_30[0] = iParam8;
	uParam0->f_30[1] = iParam9;
	uParam0->f_210 = iParam7;
	uParam0->f_96 = iParam10;
	uParam0->f_394 = { vParam11 };
	uParam0->f_397 = { vParam14 };
}

int func_343(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_344(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_9080.f_99.f_219[iVar0]), bVar1);
	return 1;
}

void func_345()
{
	while (!func_152(&Local_95))
	{
		SYSTEM::WAIT(0);
	}
	func_115(6, 0);
	func_115(8, 0);
	func_115(7, 0);
	func_86(1, 3, 0);
	func_86(2, 3, 0);
	UNK_0x2952D66A502EA873(iLocal_93, 0);
	if (iLocal_94 != -1)
	{
		if (UNK_0x49083FDB78AC0509(iLocal_94))
		{
			UNK_0xDDABC98CFF1A4C60(iLocal_94);
		}
	}
	UNK_0xEFED0CD6E25037B9();
	UNK_0x17E8C6920A1E386F(Local_95.f_1.f_394 - Local_95.f_1.f_397, Local_95.f_1.f_394 + Local_95.f_1.f_397, true, 0);
	UNK_0x34D79252800B23FF(5);
	UNK_0x5C8D148FC238F38A();
	if (iLocal_42 != -1)
	{
		func_163(&iLocal_42);
	}
	UNK_0x10FAF14A60A0DBE1();
}

