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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_117[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_186[68] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	bool bLocal_391 = false;
	bool bLocal_392 = false;
	int iLocal_393[6] = { 0, 0, 0, 0, 0, 0 };
	bool bLocal_400 = false;
	bool bLocal_401 = false;
	struct<114> Local_402 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_516 = { 0, 0, 0, 0, 0 } ;
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
	struct<74> Local_546 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3 } ;
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
	var uLocal_632 = 2;
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
	bool bLocal_645 = false;
	int iLocal_646[4] = { 0, 0, 0, 0 };
	bool bLocal_651 = false;
	int iLocal_652[1] = { 0 };
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	bool bLocal_657 = false;
	bool bLocal_658 = false;
	bool bLocal_659 = false;
	bool bLocal_660 = false;
	int iLocal_661 = 0;
	bool bLocal_662 = false;
	bool bLocal_663 = false;
	int iLocal_664[2] = { 0, 0 };
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	bool bLocal_670 = false;
	bool bLocal_671 = false;
	int iLocal_672 = 0;
	bool bLocal_673 = false;
	struct<21> Local_674 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	struct<81> Local_695 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	struct<78> Local_776 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_854 = false;
	int iLocal_855 = 0;
	bool bLocal_856 = false;
	int iLocal_857 = 0;
	int iLocal_858[6] = { 0, 0, 0, 0, 0, 0 };
	bool bLocal_865 = false;
	int iLocal_866 = 0;
	int iLocal_867[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_936[3] = { 0, 0, 0 };
	int iLocal_940 = 0;
	float fLocal_941[68] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	int iLocal_1012 = 0;
	int iLocal_1013 = 0;
	bool bLocal_1014 = false;
	bool bLocal_1015 = false;
	bool bLocal_1016 = false;
	bool bLocal_1017 = false;
	bool bLocal_1018 = false;
	char cLocal_1019[16] = "";
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	char cLocal_1023[16] = "";
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	bool bLocal_1027 = false;
	bool bLocal_1028 = false;
	bool bLocal_1029 = false;
	bool bLocal_1030 = false;
	bool bLocal_1031 = false;
	bool bLocal_1032 = false;
	int iLocal_1033 = 0;
	bool bLocal_1034 = false;
	bool bLocal_1035 = false;
	int iLocal_1036 = 0;
	bool bLocal_1037 = false;
	float fLocal_1038 = 0f;
	int iLocal_1039 = 0;
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
	iLocal_655 = -1;
	iLocal_656 = -1;
	iLocal_661 = -1;
	iLocal_668 = -1;
	iLocal_940 = -1;
	UNK_0x256D93AFAE851A7A(0);
	Local_402.f_5 = -1;
	Local_402 = -1;
	Local_402.f_1 = 99999.99f;
	func_485(&uLocal_521);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_96123[iVar0 /*3*/][0] = -1;
		Global_96123[iVar0 /*3*/][1] = -1;
		iVar0++;
	}
	if (!Global_111638.f_32744.f_4802)
	{
		iVar0 = 0;
		while (iVar0 < 312)
		{
			Global_111638.f_32744.f_1982[0 /*939*/].f_626[iVar0] = -15;
			Global_111638.f_32744.f_1982[1 /*939*/].f_626[iVar0] = -15;
			Global_111638.f_32744.f_1982[2 /*939*/].f_626[iVar0] = -15;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 23)
		{
			Global_111638.f_32744.f_1934[iVar0] = -1f;
			iVar0++;
		}
		Global_111638.f_32744.f_4801 = -15;
		Global_111638.f_32744.f_4802 = 1;
	}
	if (((!func_484() && !func_483()) && !func_482()) && !func_481())
	{
		func_480(60, 0);
		func_480(61, 0);
	}
	func_479();
	iVar0 = 0;
	while (iVar0 < 68)
	{
		func_478(iVar0);
		iVar0++;
	}
	while (true)
	{
		if (!bLocal_401)
		{
			bLocal_401 = true;
			if (UNK_0x2EBF608FFE6CA406(98))
			{
				if (UNK_0x3E653638C7A26115() == 64)
				{
					if (!Global_76430)
					{
						bLocal_401 = false;
					}
					else
					{
						func_477();
						func_476();
					}
					Global_76430 = 0;
				}
				else
				{
					func_477();
					func_476();
				}
			}
		}
		SYSTEM::WAIT(0);
		if (UNK_0x89DE52DB50601487() != 5)
		{
			iLocal_672 = func_474();
			func_438();
			func_436();
			func_404(&uLocal_521);
			func_374();
			func_28();
			func_20();
			func_17(&uLocal_1010);
		}
		func_1(&uLocal_521);
	}
}

void func_1(bool bParam0)
{
	bool bVar0;
	float fVar1;

	if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10011.f_25, 7))
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && func_14(func_16()))
		{
			bVar0 = false;
			if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 6) && UNK_0xEAE0D21A50E6C7F4(*bParam0, 12))
			{
				fVar1 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), bParam0->f_6);
				if (fVar1 > 25f && fVar1 < 1600f)
				{
					bVar0 = true;
					if (bParam0->f_2 == -1)
					{
						bParam0->f_2 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(10000, 15000));
					}
					else
					{
						if (func_13())
						{
							bParam0->f_2 = func_12(bParam0->f_2, (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(2000, 4000)));
						}
						if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 23))
						{
							func_11(bParam0, &(bParam0->f_9));
						}
						else if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 30))
						{
							if (UNK_0xAE317D00A5A55DF6(&(bParam0->f_9), 0, -1))
							{
								if (UNK_0x1C0640BA9A7327B3() > bParam0->f_2)
								{
									if (func_9() != 7 && func_8(0, 0))
									{
										func_4(bParam0, func_6(bParam0));
										func_3(0);
										UNK_0x5D96D8530B3D0904(bParam0, 30);
									}
								}
							}
						}
						else if (UNK_0x8AA6DC470ABA63A2(bParam0->f_1))
						{
							UNK_0x0674E58A79778E99(bParam0, 30);
							UNK_0x43A06902454A1172(bParam0->f_1);
							bParam0->f_1 = -1;
							bParam0->f_2 = -1;
						}
					}
				}
			}
			if (!bVar0)
			{
				if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 23))
				{
					func_2(bParam0);
				}
				UNK_0x0674E58A79778E99(bParam0, 30);
				bParam0->f_2 = -1;
			}
		}
	}
}

void func_2(bool bParam0)
{
	UNK_0x8C26F31DFF77D124();
	UNK_0x0674E58A79778E99(bParam0, 23);
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_10011.f_25), 22);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_10011.f_25), 22);
	}
}

void func_4(bool bParam0, vector3 vParam1)
{
	struct<16> Var0;
	struct<16> Var16;

	Var0 = { func_5("EAS", "B", "ALLS", "T_C") };
	Var16 = { func_5("ENTS_SA", "FM_EV", "CH_SOUNDS", "SQUAT") };
	bParam0->f_1 = UNK_0xD68EA767274B7444();
	UNK_0xEB819BD1E585E9CB(bParam0->f_1, &Var0, vParam1, &Var16, false, 0, 0);
}

struct<16> func_5(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	struct<16> Var0;

	StringCopy(&Var0, sParam1, 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, sParam3, 64);
	StringConCat(&Var0, sParam2, 64);
	return Var0;
}

Vector3 func_6(bool bParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		vVar6 = { func_7(bParam0->f_6 - vVar3) * Vector(52.5f, 52.5f, 52.5f) };
		vVar0 = { vVar3 + vVar6 };
	}
	return vVar0;
}

Vector3 func_7(vector3 vParam0)
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

bool func_8(bool bParam0, int iParam1)
{
	bool bVar0;

	if (UNK_0xD245978525608929(0, 36))
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_10011.f_25), 22);
	}
	bVar0 = UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10011.f_25, 22);
	if (bParam0 && bVar0)
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_10011.f_25), 22);
	}
	iParam1 = iParam1;
	return bVar0;
}

int func_9()
{
	int iVar0;

	iVar0 = func_10(Global_111638.f_10011.f_25, 14336, 11);
	return iVar0;
}

int func_10(var uParam0, int iParam1, int iParam2)
{
	return SYSTEM::SHIFT_RIGHT((uParam0 && iParam1), iParam2);
}

void func_11(bool bParam0, bool bParam1)
{
	UNK_0xAE317D00A5A55DF6(bParam1, 0, -1);
	UNK_0x5D96D8530B3D0904(bParam0, 23);
}

int func_12(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool func_13()
{
	bool bVar0;

	bVar0 = UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10011.f_25, 22);
	return (func_8(0, 0) && !bVar0);
}

bool func_14(int iParam0)
{
	return iParam0 == func_15();
}

int func_15()
{
	return joaat("IG_ORLEANS");
}

int func_16()
{
	return UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9());
}

void func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1323117.f_21)
	{
		iVar1 = func_19(*uParam0, uParam0->f_1);
		if (iVar1 == -1)
		{
			*uParam0++;
			uParam0->f_1 = 0;
			if (*uParam0 >= 4)
			{
				Global_1323117.f_21 = 1;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = func_18(iVar0);
			if (Global_1323117[*uParam0 /*5*/][0] < fVar2)
			{
				Global_1323117[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = UNK_0x3DA0AC70B6394B0C(iVar0);
			if (Global_1323117[*uParam0 /*5*/][1] < fVar2)
			{
				Global_1323117[*uParam0 /*5*/][1] = fVar2;
			}
			if ((iVar0 == 15 || iVar0 == 16) || iVar0 == 14)
			{
				fVar2 = UNK_0xE488F7D7B8CC550E(iVar0);
			}
			else
			{
				fVar2 = UNK_0x10576FBC42CC7EB6(iVar0);
			}
			if (Global_1323117[*uParam0 /*5*/][3] < fVar2)
			{
				Global_1323117[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = UNK_0xFE46E8A54FA10801(iVar0);
			if (Global_1323117[*uParam0 /*5*/][2] < fVar2)
			{
				Global_1323117[*uParam0 /*5*/][2] = fVar2;
			}
			uParam0->f_1++;
		}
	}
}

float func_18(int iParam0)
{
	if (iParam0 == 7)
	{
		return 51.77096f;
	}
	return UNK_0x01E5CB1E14C2721C(iParam0);
}

int func_19(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
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
					return 5;
				case 6:
					return 6;
				case 7:
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
					return 17;
				case 15:
					return 18;
				case 16:
					return 19;
				case 17:
					return 20;
				case 18:
					return 22;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 14;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 15;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 16;
				default:
					break;
			}
			break;
	}
	return -1;
}

void func_20()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	if (UNK_0xE4EDC4B0E92C078B(Global_75441.f_583))
	{
		bVar0 = false;
		if (iLocal_672 != Global_75441.f_582)
		{
			bVar0 = true;
		}
		else if (((((func_27(0) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(13)) || func_27(14))
		{
			bVar0 = true;
		}
		else if (Global_75441.f_590)
		{
			if (!func_26(Global_75441.f_584, UNK_0xAC14F6E4B17D7835(Global_75441.f_583), 1056964608 /* Float: 0.5f */, 0) || func_22(Global_75441.f_582, func_23(Global_75441.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if (Global_75441.f_591)
		{
			if (!func_26(Global_75441.f_587, UNK_0xAC14F6E4B17D7835(Global_75441.f_583), 1056964608 /* Float: 0.5f */, 0) || func_22(Global_75441.f_582, func_23(Global_75441.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if ((!UNK_0xC844350D5D58C99A(Global_75441.f_581) || !UNK_0xDF1306B443CD3D15(Global_75441.f_581, 0)) || (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Global_75441.f_581, 0)))
		{
			if (UNK_0xC844350D5D58C99A(Global_75441.f_581) && !UNK_0xDF1306B443CD3D15(Global_75441.f_581, 0))
			{
				Global_75441.f_587 = { 0f, 0f, 0f };
			}
			bVar0 = true;
		}
		else if (UNK_0xC844350D5D58C99A(Global_75441.f_581))
		{
			if (UNK_0xDF1306B443CD3D15(Global_75441.f_581, 0))
			{
				Global_75441.f_587 = { UNK_0x68F4C0EC296D3901(Global_75441.f_581, true) };
			}
			else
			{
				Global_75441.f_587 = { 0f, 0f, 0f };
			}
		}
		if (bVar0)
		{
			UNK_0x142CC44DB769B57E(&(Global_75441.f_583));
			Global_75441.f_590 = 0;
			Global_75441.f_591 = 0;
			Global_75441.f_581 = 0;
		}
	}
	else
	{
		Global_75441.f_590 = 0;
		Global_75441.f_591 = 0;
		Global_75441.f_581 = 0;
	}
	if ((((((!UNK_0xE4EDC4B0E92C078B(Global_75441.f_583) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(13)) && !func_27(14))
	{
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if ((((((Global_96085[iVar2] != 145 && Global_96095[iVar2] != 0) && UNK_0xC844350D5D58C99A(Global_96075[iVar2])) && UNK_0xDF1306B443CD3D15(Global_96075[iVar2], 0)) && !UNK_0xE4EDC4B0E92C078B(UNK_0xC0E5DA578D275A41(Global_96075[iVar2]))) && Global_96085[iVar2] == iLocal_672) && UNK_0x8E39AC3C76C8AA58(UNK_0x134B62B726CEC8E6(Global_96075[iVar2])))
			{
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Global_96075[iVar2], 0))
				{
					Global_75441.f_581 = Global_96075[iVar2];
					Global_75441.f_582 = iLocal_672;
					Global_75441.f_590 = 0;
					Global_75441.f_583 = UNK_0x5C3B41825F6AC5A0(Global_75441.f_581);
				}
				iVar2 = 10;
				bVar1 = true;
			}
			iVar2++;
		}
		if (!bVar1)
		{
			if (!UNK_0xE4EDC4B0E92C078B(Global_75441.f_583) && !func_21(Global_75441.f_584, 0f, 0f, 0f, 0))
			{
				Global_75441.f_581 = 0;
				Global_75441.f_582 = iLocal_672;
				Global_75441.f_590 = 1;
				Global_75441.f_583 = UNK_0x6CC513A908911CF0(Global_75441.f_584);
			}
			if (!UNK_0xE4EDC4B0E92C078B(Global_75441.f_583) && !func_21(Global_75441.f_587, 0f, 0f, 0f, 0))
			{
				Global_75441.f_581 = 0;
				Global_75441.f_582 = iLocal_672;
				Global_75441.f_591 = 1;
				Global_75441.f_583 = UNK_0x6CC513A908911CF0(Global_75441.f_587);
			}
		}
		else
		{
			Global_75441.f_590 = 0;
			Global_75441.f_591 = 0;
		}
		if (UNK_0xE4EDC4B0E92C078B(Global_75441.f_583))
		{
			UNK_0xBC8E0A7390523199(Global_75441.f_583, 225);
			UNK_0xDC5B2F9D0CCE3A10(Global_75441.f_583, "PVEHICLE");
			UNK_0x6ABCCE651368DB93(Global_75441.f_583, false);
			UNK_0x2A065371C9D96655(Global_75441.f_583, 3);
			if (iLocal_672 == 0)
			{
				bVar3 = 42;
			}
			else if (iLocal_672 == 1)
			{
				bVar3 = 43;
			}
			else if (iLocal_672 == 2)
			{
				bVar3 = 44;
			}
			UNK_0x61755AC17D8F538E(Global_75441.f_583, bVar3);
		}
	}
}

bool func_21(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_22(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96075[iVar1]) && UNK_0xDF1306B443CD3D15(Global_96075[iVar1], 0))
		{
			if (Global_96085[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == UNK_0x134B62B726CEC8E6(Global_96075[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_23(int iParam0, int iParam1)
{
	struct<82> Var0;

	if (func_25(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_24(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_24(int iParam0, var uParam1, int iParam2)
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

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

bool func_26(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_27(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_28()
{
	func_314();
	func_229();
	func_68();
	func_29();
}

void func_29()
{
	bool bVar0;
	bool bVar1;

	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (((((Local_402.f_29.f_80 && !Local_402.f_29.f_69) && Local_402 != -1) && func_67(Local_402, 0)) && func_67(Local_402, 5)) && UNK_0x8A22C4C08282BF26(joaat("MICHAEL1")) == 0)
		{
			if (!UNK_0xC844350D5D58C99A(Local_402.f_113))
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
					if (UNK_0xC844350D5D58C99A(bVar0) && UNK_0xDF1306B443CD3D15(bVar0, 0))
					{
						bVar1 = UNK_0x134B62B726CEC8E6(bVar0);
						if (func_64(bVar1))
						{
							Local_402.f_113 = bVar0;
						}
					}
				}
			}
			else if (UNK_0xDF1306B443CD3D15(Local_402.f_113, 0) && func_64(UNK_0x134B62B726CEC8E6(Local_402.f_113)))
			{
				if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_402.f_113, 0))
				{
					if (UNK_0x3D1053F9EB43B7AD(Local_402.f_113, Local_402.f_29.f_48, Local_402.f_29.f_51, Local_402.f_29.f_54, 0, true, 0))
					{
						if ((!func_63(Local_402.f_113) && !func_62(Local_402.f_113)) && Local_402.f_113 != Global_75441.f_484[Local_402])
						{
							func_30(Local_402, Local_402.f_113, 1);
						}
						Local_402.f_113 = 0;
					}
				}
			}
			else
			{
				Local_402.f_113 = 0;
			}
		}
		else
		{
			Local_402.f_113 = 0;
		}
	}
}

void func_30(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_61(&(Global_75441.f_555[0 /*21*/]), iParam0))
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
				Global_111638.f_32744.f_4801 = func_50();
			}
			if (bParam1 != Global_75441.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					bVar0 = func_49(iParam0);
					if ((UNK_0xC844350D5D58C99A(bVar0) && UNK_0xDF1306B443CD3D15(bVar0, 0)) && bParam1 != bVar0)
					{
						func_31(bVar0, 145);
					}
				}
				Global_76347 = bParam1;
				Global_76348 = iParam0;
				Global_76349 = iParam2;
			}
		}
	}
}

void func_31(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_37(bParam0))
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
	func_32(bParam0, &(Global_111638.f_32744.f_5510));
}

void func_32(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_36(uParam1);
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
		if (uParam1->f_65 == -1 && !func_35(uParam1->f_66))
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
		func_34(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_33(iVar0 + 1));
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

int func_33(int iParam0)
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

int func_34(bool bParam0, var uParam1, var uParam2)
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

bool func_35(int iParam0)
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

void func_36(var uParam0)
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

bool func_37(bool bParam0)
{
	if ((((((((((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || func_47(bParam0, 0, 0)) || func_47(bParam0, 1, 0)) || func_47(bParam0, 2, 0)) || func_46(bParam0) != 145) || func_45(bParam0)) || func_63(bParam0)) || func_62(bParam0)) || func_44(bParam0)) || !func_38(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		if (func_63(bParam0))
		{
		}
		if (func_63(bParam0))
		{
		}
		if (func_47(bParam0, 0, 0))
		{
		}
		if (func_47(bParam0, 1, 0))
		{
		}
		if (func_47(bParam0, 2, 0))
		{
		}
		if (func_46(bParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_38(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (!func_39(bParam0, 0))
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

bool func_39(bool bParam0, bool bParam1)
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
		if (!func_43())
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
		if ((((!func_484() && !func_483()) && !func_482()) && !func_481()) && !func_43())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_482())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_42(bParam0))
		{
			return false;
		}
	}
	if (!func_40(bParam0))
	{
		return false;
	}
	return true;
}

bool func_40(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_41())
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

bool func_41()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_42(bool bParam0)
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

bool func_43()
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

bool func_44(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	bVar1 = UNK_0x7888A5D2621AAF2D(bParam0);
	if (bVar0 == joaat("SPEEDO") && UNK_0x7F8A39872A07D2CE(bVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_39(bVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_45(bool bParam0)
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

int func_46(bool bParam0)
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

bool func_47(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_48(iParam1, iVar0, &uVar1, &iVar9))
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

bool func_48(int iParam0, int iParam1, char* sParam2, int iParam3)
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

bool func_49(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return Global_75441.f_139[iParam0];
}

bool func_50()
{
	var uVar0;

	func_60(&uVar0, UNK_0x4460E481B9E33ADA());
	func_59(&uVar0, UNK_0x8D199E381D262EEF());
	func_58(&uVar0, UNK_0xD8A54335F18763BA());
	func_53(&uVar0, UNK_0x972A296334C9D57B());
	func_52(&uVar0, UNK_0x118229AD063C3C1D());
	func_51(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_51(bool bParam0, int iParam1)
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

void func_52(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_53(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_57(*bParam0);
	iVar1 = func_55(*bParam0);
	if (iParam1 < 1 || iParam1 > func_54(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_54(bool bParam0, int iParam1)
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

int func_55(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_56(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_56(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_57(bool bParam0)
{
	return (bParam0 && 15);
}

void func_58(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_59(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_60(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_61(var uParam0, int iParam1)
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
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_23(2, 1);
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
			if (func_43())
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
			if (func_43())
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
		if (!func_21(Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_21(Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_21(Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

bool func_62(bool bParam0)
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

bool func_63(bool bParam0)
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

bool func_64(bool bParam0)
{
	switch (Local_402.f_6)
	{
		case 0:
			return func_66(bParam0);
		case 1:
			if (((UNK_0xA7082C42B8809BF2(bParam0) || UNK_0x83496B932152D4D4(bParam0)) || bParam0 == joaat("SUBMERSIBLE2")) || bParam0 == joaat("DODO"))
			{
				return true;
			}
			break;
		case 3:
			return func_65(bParam0);
		case 2:
			return (UNK_0xAFB8495D36825275(bParam0) && bParam0 != joaat("SKYLIFT"));
	}
	return false;
}

bool func_65(bool bParam0)
{
	if ((bParam0 == joaat("MARSHALL") || bParam0 == joaat("BARRACKS")) || bParam0 == joaat("CRUSADER"))
	{
		return false;
	}
	if (bParam0 == joaat("RHINO"))
	{
		return false;
	}
	if (((!UNK_0x8E39AC3C76C8AA58(bParam0) && !UNK_0x7D8B2A8F9EA82DB7(bParam0)) && !UNK_0xAD09C9A4B56FA133(bParam0)) && !UNK_0xD1CC995EE5EB1EC1(bParam0))
	{
		return false;
	}
	return true;
}

bool func_66(bool bParam0)
{
	if (bParam0 == joaat("JET"))
	{
		return false;
	}
	if ((((!UNK_0xC41A9202669A24C4(bParam0) && bParam0 != joaat("MARSHALL")) && bParam0 != joaat("RHINO")) && bParam0 != joaat("BARRACKS")) && bParam0 != joaat("CRUSADER"))
	{
		return false;
	}
	return true;
}

bool func_67(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], bParam1);
}

void func_68()
{
	struct<101> Var0;
	struct<78> Var102;
	bool bVar180;
	int iVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	int iVar185;
	struct<4> Var186;
	int iVar190;
	bool bVar191;
	bool bVar192;
	int iVar193;
	bool bVar194;
	int iVar195;
	int iVar196;
	bool bVar197;
	int iVar198;
	bool bVar199;
	bool bVar200;
	int iVar201;
	bool bVar202;
	int iVar203;
	bool bVar204;
	char cVar205[16];
	bool bVar209;
	bool bVar210;
	bool bVar211;
	bool bVar212;
	var uVar213;

	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Var102.f_9 = 49;
	Var102.f_59 = 2;
	bVar180 = false;
	iVar181 = 0;
	if (iLocal_654 > 0 && iLocal_654 != 99)
	{
		if (((((((((((((((Local_402 == -1 || UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), Local_402.f_29.f_7, Local_402.f_29.f_10, Local_402.f_29.f_13, 0, true, 0)) || ((UNK_0xC844350D5D58C99A(Global_75441.f_484[Local_402]) && UNK_0xDF1306B443CD3D15(Global_75441.f_484[Local_402], 0)) && (UNK_0x64E716CF8C283BF5(UNK_0x16F2683693E537C9(), Global_75441.f_484[Local_402]) || UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Global_75441.f_484[Local_402], 1)))) || ((UNK_0xC844350D5D58C99A(Global_75441.f_484[Local_402]) && UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9())) && ((UNK_0xEE9925602B29903C(UNK_0x16F2683693E537C9()) - 1f) > 0.15f && UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), Global_75441.f_484[Local_402])))) || ((UNK_0xC844350D5D58C99A(Global_75441.f_484[Local_402]) && UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9())) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Global_75441.f_484[Local_402], 1))) || (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()) && UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9()))) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || func_228(0) != bLocal_1018) || bLocal_854) || func_227(-1082130432 /* Float: -1f */))
		{
			iLocal_654 = 99;
		}
	}
	switch (iLocal_654)
	{
		case 0:
			if ((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) && !Global_73825) && !bLocal_854) && !UNK_0x757EF87A33649210())
			{
				if ((((((((((Local_402.f_29.f_80 && Local_402.f_2 == 0) && (Global_75441.f_592[0] != -1 || func_226() != 0)) && Local_402 != -1) && !bLocal_1016) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(14)) && !func_227(-1082130432 /* Float: -1f */))
				{
					if (iLocal_656 != -1)
					{
					}
					else if (func_67(Local_402, 0) && func_67(Local_402, 5))
					{
						if ((UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), Local_402.f_29.f_7, Local_402.f_29.f_10, Local_402.f_29.f_13, 0, true, 0) && !UNK_0x39E5E51C6E21A69B(UNK_0x16F2683693E537C9())) && !UNK_0xD59B17D2DFF98E26(UNK_0x16F2683693E537C9()))
						{
							if ((!UNK_0xC844350D5D58C99A(Global_75441.f_484[Local_402]) || !UNK_0xDF1306B443CD3D15(Global_75441.f_484[Local_402], 0)) || (!UNK_0x64E716CF8C283BF5(UNK_0x16F2683693E537C9(), Global_75441.f_484[Local_402]) && !UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Global_75441.f_484[Local_402], 1)))
							{
								iVar184 = func_226();
								iVar185 = 0;
								while (iVar185 < iVar184)
								{
									if (func_64(func_222(iVar185)))
									{
										iVar183++;
									}
									iVar185++;
								}
								iVar182 = 0;
								while (iVar182 < Global_75441.f_592)
								{
									if (Global_75441.f_592[iVar182] != -1)
									{
										if ((func_221(Global_75441.f_592[iVar182], iLocal_672) && Global_111638.f_32744.f_1982[iLocal_672 /*939*/].f_626[Global_75441.f_592[iVar182]] == -15) && (Global_75441.f_592[iVar182] != 200 || !Global_111638.f_25068.f_7))
										{
											iVar183++;
										}
									}
									iVar182++;
								}
								if (iVar183 > 0)
								{
									if (!UNK_0xFEBC1E4EC9E001F0())
									{
										bLocal_856 = true;
										if (Local_402.f_6 == 3)
										{
											func_220(&iLocal_655, 3, "WEB_VEH_TRIG2", 0, 0, 0, 0);
										}
										else
										{
											func_220(&iLocal_655, 3, "WEB_VEH_TRIG", 0, 0, 0, 0);
										}
										bLocal_1018 = func_228(0);
										iLocal_654++;
									}
								}
								else if (!bLocal_856)
								{
									if (Local_402.f_6 == 0)
									{
										if (!UNK_0xFEBC1E4EC9E001F0() || func_219("HANGAR_NO"))
										{
											func_218("HANGAR_NO", -1);
											StringCopy(&cLocal_1019, "HANGAR_NO", 16);
										}
										bVar180 = true;
									}
									else if (Local_402.f_6 == 1)
									{
										if (!UNK_0xFEBC1E4EC9E001F0() || func_219("MARINA_NO"))
										{
											func_218("MARINA_NO", -1);
											StringCopy(&cLocal_1019, "MARINA_NO", 16);
										}
										bVar180 = true;
									}
									else if (Local_402.f_6 == 2)
									{
										if (!UNK_0xFEBC1E4EC9E001F0() || func_219("HELIPAD_NO"))
										{
											func_218("HELIPAD_NO", -1);
											StringCopy(&cLocal_1019, "HELIPAD_NO", 16);
										}
										bVar180 = true;
									}
									else if (Local_402.f_6 == 3)
									{
										StringCopy(&Var186, "CAR_GAR_NO", 16);
										if (UNK_0xBA301E03A078FA59() || UNK_0x33A494591F2C1975())
										{
											StringConCat(&Var186, "_1", 16);
										}
										else if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
										{
											StringConCat(&Var186, "_2", 16);
										}
										if (!UNK_0xFEBC1E4EC9E001F0() || func_219(&Var186))
										{
											func_218(&Var186, -1);
											cLocal_1019 = { Var186 };
										}
										bVar180 = true;
									}
								}
							}
						}
						else
						{
							bLocal_856 = false;
						}
					}
				}
			}
			break;
		case 1:
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && func_216(0, -1, 0))
			{
				if (iLocal_656 != -1)
				{
					iLocal_654 = 0;
					return;
				}
				if (func_215(iLocal_655, 1))
				{
					UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
					if (UNK_0xA4FD7964FEE91ED8(UNK_0x5A0033B025D45F1B()) == 4)
					{
						UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
					}
					else
					{
						UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 256);
					}
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
						{
							UNK_0x3E5CE368CD085FFA(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0);
						}
					}
					func_214();
					bLocal_657 = false;
					bLocal_658 = false;
					bLocal_659 = false;
					bLocal_645 = -1;
					iLocal_654++;
					return;
				}
			}
			break;
		case 2:
			if (!bLocal_657 || bLocal_658)
			{
				func_213(0, 0);
				func_212(1, 4, 0, 0, 0);
				func_211(1, 2, 1, 1, 1);
				func_210("WEB_VEH_TITLE");
				iVar190 = 0;
				while (iVar190 < iLocal_646)
				{
					iLocal_646[iVar190] = 0;
					iVar190++;
				}
				bVar191 = -1;
				bVar192 = false;
				func_61(&(Local_402.f_8), Local_402);
				bVar194 = false;
				iVar195 = func_226();
				iVar193 = 0;
				while (iVar193 < iVar195)
				{
					if (func_64(func_222(iVar193)))
					{
						if (bVar191 == -1)
						{
							bVar191 = bVar194;
						}
						if (Local_402.f_8.f_4 == func_222(iVar193))
						{
							bLocal_645 = bVar194;
							bVar192 = true;
						}
						bVar194++;
					}
					iVar193++;
				}
				iVar193 = 0;
				while (iVar193 < Global_75441.f_592)
				{
					if (Global_75441.f_592[iVar193] != -1)
					{
						if ((func_221(Global_75441.f_592[iVar193], iLocal_672) && Global_111638.f_32744.f_1982[iLocal_672 /*939*/].f_626[Global_75441.f_592[iVar193]] == -15) && (Global_75441.f_592[iVar193] != 200 || !Global_111638.f_25068.f_7))
						{
							func_138(Global_75441.f_592[iVar193], &Var0, 0, iLocal_672, -1, -1);
							if (bVar191 == -1)
							{
								bVar191 = bVar194;
							}
							if (Local_402.f_8.f_4 == Var0.f_66)
							{
								bLocal_645 = bVar194;
								bVar192 = true;
							}
							bVar194++;
						}
					}
					iVar193++;
				}
				if (bLocal_645 == -1)
				{
					bLocal_645 = bVar191;
				}
				bVar194 = false;
				iVar195 = func_226();
				iVar193 = 0;
				while (iVar193 < iVar195)
				{
					if (func_64(func_222(iVar193)))
					{
						UNK_0x5D96D8530B3D0904(&(iLocal_646[(bVar194 / 32)]), (bVar194 % 32));
						func_134(bVar194, UNK_0x1739BA50603D849C(func_222(iVar193)), 0, 1, 0, 0);
						if ((bLocal_645 == bVar194 && bVar192) && Local_402.f_6 != 3)
						{
							func_133(bVar194, 4, 0);
						}
						else
						{
							func_133(bVar194, 0, 0);
						}
						bVar194++;
					}
					iVar193++;
				}
				iVar193 = 0;
				while (iVar193 < Global_75441.f_592)
				{
					if (Global_75441.f_592[iVar193] != -1)
					{
						if ((func_221(Global_75441.f_592[iVar193], iLocal_672) && Global_111638.f_32744.f_1982[iLocal_672 /*939*/].f_626[Global_75441.f_592[iVar193]] == -15) && (Global_75441.f_592[iVar193] != 200 || !Global_111638.f_25068.f_7))
						{
							UNK_0x5D96D8530B3D0904(&(iLocal_646[(bVar194 / 32)]), (bVar194 % 32));
							func_138(Global_75441.f_592[iVar193], &Var0, 0, iLocal_672, -1, -1);
							if (Global_75441.f_592[iVar193] != 164)
							{
								func_134(bVar194, func_131(Global_75441.f_592[iVar193]), 0, 1, 0, 0);
							}
							else if (Var0.f_67 == 0)
							{
								func_134(bVar194, "TWOSTRINGS", 2, 1, 0, 0);
								func_128(func_131(Global_75441.f_592[iVar193]), 0);
								func_128("VNX_SWFTC", 0);
							}
							else if (Var0.f_67 == 1)
							{
								func_134(bVar194, "TWOSTRINGS", 2, 1, 0, 0);
								func_128(func_131(Global_75441.f_592[iVar193]), 0);
								func_128("VNX_SWFTB", 0);
							}
							else
							{
								func_134(bVar194, func_131(Global_75441.f_592[iVar193]), 0, 1, 0, 0);
							}
							if (bLocal_645 == bVar194 && bVar192)
							{
								func_133(bVar194, 4, 0);
							}
							else
							{
								func_133(bVar194, 0, 0);
							}
							bVar194++;
						}
					}
					iVar193++;
				}
				func_127(bLocal_645, 1, 1);
				bLocal_660 = true;
				bLocal_658 = false;
				bLocal_657 = true;
			}
			else
			{
				iVar181 = 0;
				if (UNK_0x0EFF6B4415DAF4A1())
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
						func_124(0, 0, 0, 1);
						func_123(0, -1, 1);
						if (func_122())
						{
							if (Global_4268497 != bLocal_645)
							{
								UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								bLocal_645 = Global_4268497;
								func_127(bLocal_645, 1, 1);
								bLocal_660 = true;
							}
							else
							{
								iVar181 = 1;
							}
						}
					}
				}
				if (UNK_0xBFC0798A6E3417F9(2, 188) || UNK_0xBFC0798A6E3417F9(2, 241))
				{
					bLocal_660 = true;
					UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar196 = (bLocal_645 - 1);
					while (iVar196 >= 0)
					{
						if (UNK_0xEAE0D21A50E6C7F4(iLocal_646[(iVar196 / 32)], (iVar196 % 32)))
						{
							bLocal_645 = iVar196;
							bVar197 = true;
							iVar196 = 0;
						}
						iVar196 = (iVar196 + -1);
					}
					if (!bVar197)
					{
						iVar196 = (iLocal_646 * 32 - 1);
						while (iVar196 >= bLocal_645 + 1)
						{
							if (UNK_0xEAE0D21A50E6C7F4(iLocal_646[(iVar196 / 32)], (iVar196 % 32)))
							{
								bLocal_645 = iVar196;
								bVar197 = true;
								iVar196 = 0;
							}
							iVar196 = (iVar196 + -1);
						}
					}
					if (bVar197)
					{
						func_127(bLocal_645, 1, 1);
					}
				}
				else if (UNK_0xBFC0798A6E3417F9(2, 187) || UNK_0xBFC0798A6E3417F9(2, 242))
				{
					bLocal_660 = true;
					UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar198 = bLocal_645 + 1;
					while (iVar198 <= (iLocal_646 * 32 - 1))
					{
						if (UNK_0xEAE0D21A50E6C7F4(iLocal_646[(iVar198 / 32)], (iVar198 % 32)))
						{
							bLocal_645 = iVar198;
							bVar199 = true;
							iVar198 = iLocal_646 * 32 + 1;
						}
						iVar198++;
					}
					if (!bVar199)
					{
						iVar198 = 0;
						while (iVar198 <= (bLocal_645 - 1))
						{
							if (UNK_0xEAE0D21A50E6C7F4(iLocal_646[(iVar198 / 32)], (iVar198 % 32)))
							{
								bLocal_645 = iVar198;
								bVar199 = true;
								iVar198 = iLocal_646 * 32 + 1;
							}
							iVar198++;
						}
					}
					if (bVar199)
					{
						func_127(bLocal_645, 1, 1);
					}
				}
				else if (UNK_0xB9132A06AE472728(2, 201) || iVar181 == 1)
				{
					bVar200 = false;
					iVar181 = 0;
					UNK_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar202 = false;
					iVar203 = func_226();
					iVar201 = 0;
					while (iVar201 < iVar203)
					{
						if (func_64(func_222(iVar201)))
						{
							if (bLocal_645 == bVar202 && (((((Local_402.f_8.f_4 != func_222(iVar201) || !UNK_0xC844350D5D58C99A(Global_75441.f_484[Local_402])) || !UNK_0xDF1306B443CD3D15(Global_75441.f_484[Local_402], 0)) || Local_402 == 21) || Local_402 == 22) || Local_402 == 23))
							{
								bVar200 = true;
								if ((((!bLocal_659 && Local_402.f_8.f_4 != func_222(iVar201)) || (!bLocal_659 && Local_402 == 21)) || (!bLocal_659 && Local_402 == 22)) || (!bLocal_659 && Local_402 == 23))
								{
									func_121("VEH_SELECT_CNFA", 0, 0);
									func_120(-1);
									func_119(201, "ITEM_YES", -1);
									func_119(202, "ITEM_NO", -1);
									bLocal_659 = true;
									iVar201 = func_226() + 1;
								}
								else if (Local_402.f_6 == 3)
								{
									if (func_118(func_222(iVar201)))
									{
										bLocal_1017 = func_222(iVar201);
										bLocal_657 = false;
										bLocal_658 = false;
										bLocal_651 = false;
										iLocal_654++;
									}
									else
									{
										bLocal_1016 = true;
										bLocal_1017 = func_222(iVar201);
										iLocal_654 = 99;
									}
								}
								else if (Local_402.f_6 == 0 && func_118(func_222(iVar201)))
								{
									bLocal_1017 = func_222(iVar201);
									bLocal_657 = false;
									bLocal_658 = false;
									bLocal_651 = false;
									iLocal_654++;
								}
								else
								{
									if (UNK_0xC844350D5D58C99A(Global_75441.f_484[Local_402]))
									{
										UNK_0x73270B3C9CC833FD(Global_75441.f_484[Local_402], false, 1);
										UNK_0xA954465BA6FDEFE2(&(Global_75441.f_484[Local_402]));
									}
									Var102.f_66 = func_222(iVar201);
									UNK_0x5D96D8530B3D0904(&(Var102.f_77), 14);
									func_115(Local_402, &Var102, 0f, 0f, 0f, -1f, 145);
									func_114(Local_402);
									func_61(&(Local_402.f_8), Local_402);
									iVar201 = func_226() + 1;
									bLocal_658 = true;
								}
							}
							bVar202++;
						}
						iVar201++;
					}
					if (!bVar200)
					{
						iVar201 = 0;
						while (iVar201 < Global_75441.f_592)
						{
							if (Global_75441.f_592[iVar201] != -1)
							{
								if ((func_221(Global_75441.f_592[iVar201], iLocal_672) && Global_111638.f_32744.f_1982[iLocal_672 /*939*/].f_626[Global_75441.f_592[iVar201]] == -15) && (Global_75441.f_592[iVar201] != 200 || !Global_111638.f_25068.f_7))
								{
									func_138(Global_75441.f_592[iVar201], &Var0, 0, iLocal_672, -1, -1);
									if (bLocal_645 == bVar202 && ((Local_402.f_8.f_4 != Var0.f_66 || !UNK_0xC844350D5D58C99A(Global_75441.f_484[Local_402])) || !UNK_0xDF1306B443CD3D15(Global_75441.f_484[Local_402], 0)))
									{
										bVar200 = true;
										if (!bLocal_659)
										{
											if (Local_402.f_6 == 3)
											{
												func_121("VEH_SELECT_CNF", 0, 0);
											}
											else
											{
												func_121("VEH_SELECT_CNFA", 0, 0);
											}
											func_120(-1);
											func_119(201, "ITEM_YES", -1);
											func_119(202, "ITEM_NO", -1);
											bLocal_659 = true;
											iVar201 = Global_75441.f_592 + 1;
										}
										else if (Var0.f_66 == joaat("MARSHALL"))
										{
											iLocal_654 = 3;
											bLocal_658 = true;
											iVar201 = Global_75441.f_592 + 1;
										}
										else
										{
											if (UNK_0xC844350D5D58C99A(Global_75441.f_484[Local_402]))
											{
												UNK_0x73270B3C9CC833FD(Global_75441.f_484[Local_402], false, 1);
												UNK_0xA954465BA6FDEFE2(&(Global_75441.f_484[Local_402]));
											}
											func_138(Global_75441.f_592[iVar201], &Var0, 0, iLocal_672, -1, -1);
											UNK_0x5D96D8530B3D0904(&(Var0.f_77), 14);
											if (UNK_0xC41A9202669A24C4(Var0.f_66))
											{
												UNK_0x5D96D8530B3D0904(&(Var0.f_77), 22);
											}
											func_115(Local_402, &Var0, 0f, 0f, 0f, -1f, 145);
											func_114(Local_402);
											func_61(&(Local_402.f_8), Local_402);
											iVar201 = Global_75441.f_592 + 1;
											bLocal_658 = true;
										}
									}
									bVar202++;
								}
							}
							iVar201++;
						}
					}
				}
				else if (UNK_0xB9132A06AE472728(2, 202) || UNK_0xB9132A06AE472728(2, 238))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (bLocal_659)
					{
						bLocal_660 = true;
						bLocal_659 = false;
					}
					else
					{
						iLocal_654 = 99;
					}
				}
			}
			UNK_0x3FC8DBCC154CA56B();
			if (bLocal_660)
			{
				func_121("", 0, 0);
				func_120(-1);
				func_119(201, "ITEM_SELECT", -1);
				func_119(202, "ITEM_EXIT", -1);
				bLocal_659 = false;
				bLocal_660 = false;
			}
			func_74(1, -1, 1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1);
			break;
		case 3:
			if (!bLocal_657 || bLocal_658)
			{
				func_213(0, 0);
				func_212(1, 0, 0, 0, 0);
				func_211(1, 1, 1, 1, 1);
				bVar204 = false;
				while (bVar204 < iLocal_652)
				{
					iLocal_652[bVar204] = 0;
					bVar204++;
				}
				func_210("WEB_VEH_TITLE2");
				bVar204 = false;
				while (bVar204 < 25)
				{
					StringCopy(&cVar205, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&cVar205, bVar204, 16);
					func_134(bVar204, &cVar205, 0, 1, 0, 0);
					UNK_0x5D96D8530B3D0904(&(iLocal_652[(bVar204 / 32)]), (bVar204 % 32));
					bVar204++;
				}
				if (Local_674.f_12 == 0)
				{
					bLocal_651 = Global_111638.f_25177.f_313[200];
				}
				else if (Local_674.f_12 == 1)
				{
					bLocal_651 = Global_111638.f_25177.f_626[200];
				}
				else
				{
					bLocal_651 = Global_111638.f_25177.f_939[200];
				}
				func_127(bLocal_651, 1, 1);
				bLocal_660 = true;
				bLocal_658 = false;
				bLocal_657 = true;
			}
			else
			{
				iVar181 = 0;
				if (UNK_0x0EFF6B4415DAF4A1())
				{
					if (UNK_0x9E6C8D8976DA0ECD(2))
					{
						UNK_0x38C3A68D7861DCFD(0, 1, 1);
						UNK_0x38C3A68D7861DCFD(0, 2, 1);
						UNK_0xEAB026E686C0D991(0, 237, 1);
						UNK_0xEAB026E686C0D991(0, 238, 1);
						UNK_0xEAB026E686C0D991(0, 241, 1);
						UNK_0xEAB026E686C0D991(0, 242, 1);
						func_124(0, 0, 0, 1);
						func_123(0, -1, 1);
						if (func_122())
						{
							if (Global_4268497 != bLocal_651)
							{
								UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								bLocal_651 = Global_4268497;
								func_127(bLocal_651, 1, 1);
								bLocal_660 = true;
							}
							else
							{
								iVar181 = 1;
							}
						}
					}
				}
				if (UNK_0xBFC0798A6E3417F9(2, 188) || UNK_0xBFC0798A6E3417F9(2, 241))
				{
					bLocal_660 = true;
					UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar209 = (bLocal_651 - 1);
					while (bVar209 >= 0)
					{
						if (UNK_0xEAE0D21A50E6C7F4(iLocal_652[(bVar209 / 32)], (bVar209 % 32)))
						{
							bLocal_651 = bVar209;
							bVar210 = true;
							bVar209 = false;
						}
						bVar209 = (bVar209 + -1);
					}
					if (!bVar210)
					{
						bVar209 = 31;
						while (bVar209 >= bLocal_651 + 1)
						{
							if (UNK_0xEAE0D21A50E6C7F4(iLocal_652[(bVar209 / 32)], (bVar209 % 32)))
							{
								bLocal_651 = bVar209;
								bVar210 = true;
								bVar209 = bLocal_651;
							}
							bVar209 = (bVar209 + -1);
						}
					}
					if (bVar210)
					{
						func_127(bLocal_651, 1, 1);
					}
				}
				else if (UNK_0xBFC0798A6E3417F9(2, 187) || UNK_0xBFC0798A6E3417F9(2, 242))
				{
					bLocal_660 = true;
					UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar211 = bLocal_651 + 1;
					while (bVar211 <= 31)
					{
						if (UNK_0xEAE0D21A50E6C7F4(iLocal_652[(bVar211 / 32)], (bVar211 % 32)))
						{
							bLocal_651 = bVar211;
							bVar212 = true;
							bVar211 = 31;
						}
						bVar211++;
					}
					if (!bVar212)
					{
						bVar211 = false;
						while (bVar211 <= (bLocal_651 - 1))
						{
							if (UNK_0xEAE0D21A50E6C7F4(iLocal_652[(bVar211 / 32)], (bVar211 % 32)))
							{
								bLocal_651 = bVar211;
								bVar212 = true;
								bVar211 = bLocal_651;
							}
							bVar211++;
						}
					}
					if (bVar212)
					{
						func_127(bLocal_651, 1, 1);
					}
				}
				else if (UNK_0xB9132A06AE472728(2, 201) || iVar181 == 1)
				{
					iVar181 = 0;
					UNK_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (UNK_0xC844350D5D58C99A(Global_75441.f_484[Local_402]))
					{
						UNK_0x73270B3C9CC833FD(Global_75441.f_484[Local_402], false, 1);
						UNK_0xA954465BA6FDEFE2(&(Global_75441.f_484[Local_402]));
					}
					uVar213 = bLocal_651 + 1;
					if (iLocal_672 == 0)
					{
						Global_111638.f_25177.f_313[200] = uVar213;
					}
					else if (iLocal_672 == 1)
					{
						Global_111638.f_25177.f_626[200] = uVar213;
					}
					else if (iLocal_672 == 2)
					{
						Global_111638.f_25177.f_939[200] = uVar213;
					}
					func_138(200, &Var0, 0, iLocal_672, -1, -1);
					UNK_0x5D96D8530B3D0904(&(Var0.f_77), 14);
					if (UNK_0xC41A9202669A24C4(Var0.f_66))
					{
						UNK_0x5D96D8530B3D0904(&(Var0.f_77), 22);
					}
					func_115(Local_402, &Var0, 0f, 0f, 0f, -1f, 145);
					func_114(Local_402);
					func_61(&(Local_402.f_8), Local_402);
					bLocal_658 = true;
					iLocal_654 = 2;
				}
				else if (UNK_0xB9132A06AE472728(2, 202) || UNK_0xB9132A06AE472728(2, 238))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bLocal_657 = false;
					bLocal_658 = false;
					iLocal_654 = (iLocal_654 - 1);
				}
			}
			UNK_0x3FC8DBCC154CA56B();
			if (bLocal_660)
			{
				func_121("", 0, 0);
				func_120(-1);
				func_119(201, "ITEM_SELECT", -1);
				func_119(202, "ITEM_EXIT", -1);
				bLocal_659 = false;
				bLocal_660 = false;
			}
			func_74(1, -1, 1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1);
			break;
		case 70:
			break;
		case 99:
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			}
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
				{
					if (!UNK_0x93A8B5F2A6FEDE1A())
					{
						UNK_0x3E5CE368CD085FFA(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 1);
					}
				}
			}
			func_71(1, -1);
			iLocal_654 = 0;
			func_69(&iLocal_655);
			iLocal_655 = -1;
			break;
	}
	if (!bVar180 && UNK_0xFEBC1E4EC9E001F0())
	{
		if (!UNK_0xEA6BC48857E0AC4C(&cLocal_1019))
		{
			if ((((func_219("HANGAR_NO") || func_219("MARINA_NO")) || func_219("HELIPAD_NO")) || func_219("CAR_GAR_NO_1")) || func_219("CAR_GAR_NO_2"))
			{
				UNK_0xA37A90C62806D848(1);
			}
			StringCopy(&cLocal_1019, "", 16);
		}
	}
}

void func_69(int iParam0)
{
	int iVar0;

	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_70(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_70(int iParam0)
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

void func_71(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_73(&iVar0, 0, iParam1))
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
		func_72(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_72(int iParam0)
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

bool func_73(int iParam0, bool bParam1, int iParam2)
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

void func_74(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8)
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

	if (!func_73(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_111(0, bParam6))
	{
		return;
	}
	UNK_0xD02CE72B4B66DC29(76, 84);
	UNK_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22350)
	{
		if (func_109(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_108())
		{
			iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) * fVar63));
		}
		fVar64 = (SYSTEM::TO_FLOAT(iVar60) / SYSTEM::TO_FLOAT(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_108())
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
			func_134(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
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
					StringCopy(&cVar65, func_107(29), 64);
					StringCopy(&cVar81, func_104(29, 1), 64);
					if (UNK_0x12AB0310C2281427(&(Global_22350.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_103(Global_22347, Global_22348, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
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
				func_103(Global_22347, (Global_22348 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, bVar4);
				fVar51 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
				if (UNK_0x12AB0310C2281427(&(Global_22350.f_1)) != 0)
				{
					func_102();
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
					func_102();
					func_100((((Global_22347 + fParam5) - 0.00390625f) - func_101("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_102();
						func_100((((Global_22347 + fParam5) - 0.00390625f) - func_101("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
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
				func_103(Global_22347, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, bVar4);
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
					func_109(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_99(fVar42);
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
				func_103(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, bVar4);
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
				func_99(fVar42);
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
					func_109(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_98(Global_22350.f_4768, 1, &iVar47, &iVar48, &iVar49, &bVar50);
					UNK_0x539E86AE011A8B38(func_107(Global_22350.f_4768), func_104(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
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
					func_109(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_99(fVar42);
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
				func_103(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, bVar4);
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
				func_99(fVar42);
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
					func_109(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_98(Global_4268421.f_67, 1, &iVar47, &iVar48, &iVar49, &bVar50);
					UNK_0x539E86AE011A8B38(func_107(Global_4268421.f_67), func_104(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
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
			func_90(iVar60, iParam1, bParam8, 0, 0, 0, bParam4, 1, 0);
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
											func_88(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
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
												if (func_109(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
										if (func_109(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[bVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_109(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_98(26, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_107(26), func_104(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
										if (func_109(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_109(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_98(27, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_107(27), func_104(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
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
										func_88(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_87(bVar32);
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
												if (func_109(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_109(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_98(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &bVar50);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[bVar8] == 2)
															{
																UNK_0x539E86AE011A8B38(func_107(Global_22350.f_4433[(iVar22 + iVar28)]), func_104(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
															else
															{
																UNK_0x539E86AE011A8B38(func_107(Global_22350.f_4433[(iVar22 + iVar28)]), func_104(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
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
											if (func_86() && UNK_0x8A22C4C08282BF26(joaat("FM_MISSION_CREATOR")) > 0)
											{
												if (bVar8 == 0)
												{
													func_88(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
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
												if (func_109(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_109(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_98(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &bVar50);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																UNK_0x539E86AE011A8B38(func_107(Global_22350.f_4433[(iVar22 + iVar14)]), func_104(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
															else if (Global_22350.f_5083[bVar8] == 2)
															{
																UNK_0x539E86AE011A8B38(func_107(Global_22350.f_4433[(iVar22 + iVar14)]), func_104(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
															else
															{
																UNK_0x539E86AE011A8B38(func_107(Global_22350.f_4433[(iVar22 + iVar14)]), func_104(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
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
										func_88(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_87(bVar32);
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
										if (func_109(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[bVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_109(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_98(26, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_107(26), func_104(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
										if (func_109(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_109(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_98(27, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_107(27), func_104(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_88(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										func_85((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
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
										func_88(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_87(bVar32);
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
										if (func_109(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[bVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_109(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_98(26, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_107(26), func_104(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
										if (func_109(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_109(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_98(27, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_107(27), func_104(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
									}
									func_88(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
									func_84((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							case 4:
								if (bVar33)
								{
									if (func_109(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_109(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[bVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_109(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_98(26, 1, &iVar47, &iVar48, &iVar49, &bVar50);
													if (iVar5 == 1)
													{
														UNK_0x539E86AE011A8B38(func_107(26), func_104(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
													}
												}
											}
											if (func_109(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_109(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_98(27, 1, &iVar47, &iVar48, &iVar49, &bVar50);
													if (iVar5 == 1)
													{
														UNK_0x539E86AE011A8B38(func_107(27), func_104(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_109(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_98(Global_22350.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &bVar50);
												UNK_0x539E86AE011A8B38(func_107(Global_22350.f_4433[iVar22]), func_104(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_83(Global_22350.f_4433[iVar22])), (fVar37 * func_83(Global_22350.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, bVar50, 0);
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
								if (func_109(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_76(0);
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
		func_75(1);
	}
	UNK_0xD59EF13BB60323B9();
}

void func_75(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_76(int iParam0)
{
	if (func_82())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_81(0))
		{
			func_77(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_77(int iParam0)
{
	if (func_82())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_80())
		{
			func_79(1, 1);
		}
		else
		{
			func_79(0, 0);
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
	if (!func_78())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_78()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_79(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_81(0))
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

bool func_80()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_81(int iParam0)
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

bool func_82()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

float func_83(int iParam0)
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

void func_84(float fParam0, float fParam1, bool bParam2, bool bParam3, int iParam4)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0x21994591120B91F0(bParam3, iParam4);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_85(float fParam0, float fParam1, bool bParam2, bool bParam3, int iParam4)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0x6D99DF8263D35CE5(bParam3);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_86()
{
	return UNK_0xC146D5FBD23C6954(-1762644250);
}

void func_87(bool bParam0)
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

void func_88(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (bParam2)
	{
		if (bParam3)
		{
			func_89(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_89(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_90(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	if (!func_73(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (bParam3 && !func_111(bParam4, bParam8))
	{
		return;
	}
	if (func_96())
	{
		return;
	}
	if (UNK_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_93(UNK_0xD803B885F5E47A62(), 0))
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
					func_92(&(Global_22350.f_4771[bVar1 /*16*/]));
					iVar2 = bVar1 + 1;
					while (iVar2 < 12 && UNK_0x12AB0310C2281427(&(Global_22350.f_4964[iVar2 /*4*/])) == UNK_0x12AB0310C2281427("PREV"))
					{
						func_92(&(Global_22350.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22350.f_5013[bVar1] == -1)
					{
						func_91(&(Global_22350.f_4964[bVar1 /*4*/]));
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
				func_92(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_91(&(Global_4268421.f_16));
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

void func_91(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_92(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

bool func_93(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_94(-1, 0) == 8;
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

int func_94(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_95();
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

int func_95()
{
	return Global_1312745;
}

bool func_96()
{
	vector3 vVar0;

	if (Global_19486.f_1 > 3)
	{
		return true;
	}
	if (func_97())
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

bool func_97()
{
	if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		return true;
	}
	return false;
}

void func_98(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

void func_99(float fParam0)
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

void func_100(float fParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0x6D99DF8263D35CE5(bParam3);
	UNK_0x6D99DF8263D35CE5(bParam4);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

float func_101(bool bParam0, bool bParam1, bool bParam2)
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
	func_102();
	UNK_0xBBA442527B4BB1A6(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	UNK_0x6D99DF8263D35CE5(bParam2);
	return UNK_0x79E367314AFBB5CA(1);
}

void func_102()
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

void func_103(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	UNK_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, bParam7, 0);
}

char* func_104(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;

	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_7029[iParam0 /*16*/])))
	{
		if (UNK_0x12AB0310C2281427(&(Global_22350.f_7029[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_106(UNK_0xD803B885F5E47A62()) };
			if (UNK_0x205FB5BBF81D8900(&Var19, &uVar3))
			{
				return func_105(&uVar3);
			}
		}
		else
		{
			return func_105(&(Global_22350.f_7029[iParam0 /*16*/]));
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

var func_105(var uParam0)
{
	return uParam0;
}

struct<13> func_106(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

char* func_107(int iParam0)
{
	var uVar0;
	struct<13> Var16;

	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_6020[iParam0 /*16*/])))
	{
		if (UNK_0x12AB0310C2281427(&(Global_22350.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_106(UNK_0xD803B885F5E47A62()) };
			UNK_0x205FB5BBF81D8900(&Var16, &uVar0);
			return func_105(&uVar0);
		}
		else
		{
			return func_105(&(Global_22350.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

bool func_108()
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

bool func_109(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;

	StringCopy(&cVar0, func_107(iParam0), 64);
	StringCopy(&cVar16, func_104(iParam0, bParam1), 64);
	if (UNK_0x12AB0310C2281427(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			UNK_0xE5AC5CA7914F5BAE(&iVar32, &iVar33);
			fVar35 = UNK_0x33D480CCE15C991A(0);
			if (func_108())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_108())
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
		vVar37.x = (vVar37.x * (func_110(iParam0) / fVar34));
		vVar37.f_1 = (vVar37.y * (func_110(iParam0) / fVar34));
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

float func_110(int iParam0)
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

bool func_111(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return true;
	}
	if ((((((((!UNK_0x0F1CCD77290EE12F() || (func_113(8, -1) && func_112() != 65)) || (UNK_0x8BB17FEBE0394018() != 0 && !bParam1)) || (UNK_0x991B1F0980C62628() && !bParam0)) || UNK_0x590766B2AF637235()) || Global_76882) || Global_22350.f_8416) || UNK_0xE57E602827E07C9D()) || Global_98796.f_1417)
	{
		return false;
	}
	return true;
}

int func_112()
{
	return Global_1312812;
}

bool func_113(bool bParam0, int iParam1)
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

void func_114(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_75441[iParam0] = 0;
	Global_75441.f_69[iParam0] = 0;
}

void func_115(int iParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (func_61(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 10))
		{
			func_117(iParam0);
			func_116(uParam1, &(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]));
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
			func_480(iParam0, 1);
		}
	}
}

void func_116(var uParam0, var uParam1)
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

void func_117(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_61(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			UNK_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
			UNK_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
			Global_75441.f_139[iParam0] = 0;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 13))
		{
			func_480(iParam0, 0);
		}
	}
}

bool func_118(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("MARSHALL"):
			return true;
	}
	return false;
}

void func_119(int iParam0, char* sParam1, int iParam2)
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
	UNK_0x0674E58A79778E99(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769 /*4*/]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_120(int iParam0)
{
	int iVar0;
	int iVar1;

	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0 /*4*/]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_22350.f_5052 = 0;
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (!func_73(&iVar1, 0, iParam0))
		{
			return;
		}
		UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		UNK_0x1200CC973A2399C8(false);
		UNK_0x7E60D21B163E9D56();
	}
}

void func_121(char* sParam0, int iParam1, int iParam2)
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

bool func_122()
{
	if (UNK_0x91E3F625EF57450D(2))
	{
		if (Global_4268497 > -1)
		{
			if (UNK_0xB9132A06AE472728(2, 237))
			{
				return true;
			}
		}
	}
	return false;
}

int func_123(bool bParam0, int iParam1, bool bParam2)
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

void func_124(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	func_126();
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
				func_125(0);
			}
			return;
		}
		if (((Global_4268491 >= fVar0 && Global_4268491 <= fVar2) && Global_4268492 >= (fVar3 + fVar6)) && Global_4268492 < (fVar3 + 0.034722f))
		{
			Global_4268497 = -3;
			if (bParam3)
			{
				func_125(0);
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
				func_103(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22349, (0.034722f - 0.0015f), 255, 255, 255, bVar10);
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

void func_125(bool bParam0)
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
		func_103(fVar0, fVar1, Global_22349, fVar2, 255, 255, 255, bVar3);
	}
	else if (Global_4268497 == -3)
	{
		func_103(fVar0, (fVar1 + fVar2), Global_22349, fVar2, 255, 255, 255, bVar3);
	}
	UNK_0xD59EF13BB60323B9();
}

void func_126()
{
	Global_4268493 = Global_4268491;
	Global_4268494 = Global_4268492;
	Global_4268491 = UNK_0x4B7163B4D6E4A3C2(2, 239);
	Global_4268492 = UNK_0x4B7163B4D6E4A3C2(2, 240);
	Global_4268495 = (Global_4268491 - Global_4268493);
	Global_4268496 = (Global_4268492 - Global_4268494);
}

void func_127(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	Global_22350.f_5739 = bParam0;
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

void func_128(char* sParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]), sParam0, 24);
	Global_22350.f_5220++;
	Global_22350.f_2124[Global_22350.f_5742 /*5*/][Global_22350.f_5743] = 1;
	Global_22350.f_5743++;
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_130();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_109(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_129();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

float func_129()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;

	iVar0 = 0;
	while (iVar0 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)] != 0)
		{
			if (func_109(Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > UNK_0x9153358B38685E6E(0.35f, 0))
	{
		return fVar2;
	}
	return UNK_0x9153358B38685E6E(0.35f, 0);
}

float func_130()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_88(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
	{
		UNK_0xBBA442527B4BB1A6(&(Global_22350.f_73[Global_22350.f_5742 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				UNK_0x6B012227B3921E18(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				UNK_0x6B012227B3921E18(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 2)
		{
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				UNK_0x6D99DF8263D35CE5(Global_22350.f_3918[((Global_22350.f_5222 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 3)
		{
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				UNK_0x21994591120B91F0(Global_22350.f_4175[((Global_22350.f_5223 - iVar4) + iVar10)], Global_22350.f_4304[((Global_22350.f_5223 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 5)
		{
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				UNK_0xD06AC7C87A34A6AD(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 6)
		{
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				UNK_0x6B012227B3921E18(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 7)
		{
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				UNK_0xD06AC7C87A34A6AD(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 9)
		{
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				UNK_0xD06AC7C87A34A6AD(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
	{
		fVar0 = UNK_0x79E367314AFBB5CA(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)] != 0)
		{
			func_109(Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

bool func_131(int iParam0)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return "";
	}
	if (iParam0 == 8)
	{
		return "";
	}
	bVar0 = func_132(iParam0, -1);
	if (bVar0 == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 31:
			return "SUBMERSIBLE";
		case 68:
			return "SANCHEZ";
		case 105:
			return "REBEL";
		case 107:
			return "SANCHEZ2";
		case 117:
			return "COQUETTE_TLESS";
		case 118:
			return "BANSHEE_TLESS";
		case 119:
			return "STINGER_TLESS";
		case 120:
			return "VOLTIC_HTOP";
		case 154:
			return "BLAZER3";
		case 155:
			return "REBEL2";
		case 158:
			return "BUFFALO2";
		case 159:
			return "TAILGATER";
		case 166:
			return "COQUETTE2_TLESS";
		case 170:
			return "KALAHARI_TLESS";
		case 171:
			return "BOXVILLE4";
		case 173:
			return "DINGHY3";
		case 183:
			return "MULE3";
		case 191:
			return "LANDSTALKER";
		case 192:
			return "MESA3";
		case 194:
			return "ORACLE1";
		case 196:
			return "SCHAFTER2";
		case 207:
			return "DOMINATOR2";
		case 245:
			return "BIG_YACHT";
		case 254:
			return "CARGOBOB2";
		case 323:
			return "BIG_TRUCK";
		case 324:
			return "BALLISTIC";
		case 357:
			return "BIG_PLANE";
		case 402:
			return "HACKER_TRUCK";
		default:
			break;
	}
	return UNK_0x1739BA50603D849C(bVar0);
}

int func_132(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ZTYPE");
		case 1:
			return joaat("STINGER");
		case 2:
			return joaat("JB700");
		case 3:
			return joaat("CHEETAH");
		case 4:
			return joaat("ENTITYXF");
		case 5:
			return joaat("ADDER");
		case 6:
			return joaat("MONROE");
		case 7:
			return joaat("COGCABRIO");
		case 10:
			return joaat("SHAMAL");
		case 11:
			return joaat("STUNT");
		case 12:
			return joaat("CUBAN800");
		case 13:
			return joaat("DUSTER");
		case 14:
			return joaat("LUXOR");
		case 15:
			return joaat("FROGGER");
		case 16:
			return joaat("MAVERICK");
		case 17:
			return joaat("RHINO");
		case 18:
			return joaat("TITAN");
		case 19:
			return joaat("CARGOBOB");
		case 20:
			return joaat("BUZZARD");
		case 21:
			return joaat("CRUSADER");
		case 22:
			return joaat("BARRACKS");
		case 24:
			return joaat("MARQUIS");
		case 25:
			return joaat("JETMAX");
		case 27:
			return joaat("SQUALO");
		case 29:
			return joaat("TROPIC");
		case 30:
			return joaat("SEASHARK");
		case 31:
			return joaat("SUBMERSIBLE");
		case 32:
			return joaat("SUNTRAP");
		case 258:
			return joaat("TUG");
		case 33:
			return joaat("BMX");
		case 34:
			return joaat("SCORCHER");
		case 35:
			return joaat("TRIBIKE");
		case 36:
			return joaat("TRIBIKE2");
		case 37:
			return joaat("TRIBIKE3");
		case 38:
			return joaat("CRUISER");
		case 39:
			return joaat("SCHWARZER");
		case 40:
			return joaat("ZION");
		case 41:
			return joaat("GAUNTLET");
		case 42:
			return joaat("VIGERO");
		case 43:
			return joaat("ISSI2");
		case 44:
			return joaat("INFERNUS");
		case 45:
			return joaat("SURANO");
		case 46:
			return joaat("VACCA");
		case 47:
			return joaat("NINEF");
		case 48:
			return joaat("COMET2");
		case 49:
			return joaat("BANSHEE");
		case 50:
			return joaat("FELTZER2");
		case 51:
			return joaat("BFINJECTION");
		case 52:
			return joaat("SANDKING");
		case 53:
			return joaat("FUGITIVE");
		case 54:
			return joaat("DILETTANTE");
		case 55:
			return joaat("SUPERD");
		case 56:
			return joaat("EXEMPLAR");
		case 57:
			return joaat("BALLER2");
		case 58:
			return joaat("CAVALCADE");
		case 59:
			return joaat("ROCOTO");
		case 60:
			return joaat("FELON");
		case 61:
			return joaat("ORACLE2");
		case 62:
			return joaat("BATI");
		case 63:
			return joaat("AKUMA");
		case 64:
			return joaat("RUFFIAN");
		case 65:
			return joaat("VADER");
		case 66:
			return joaat("BLAZER");
		case 67:
			return joaat("PCJ");
		case 68:
			return joaat("SANCHEZ");
		case 69:
			return joaat("FAGGIO2");
		case 70:
			return joaat("BULLET");
		case 71:
			return joaat("CARBONIZZARE");
		case 72:
			return joaat("COQUETTE");
		case 73:
			return joaat("NINEF2");
		case 74:
			return joaat("RAPIDGT");
		case 75:
			return joaat("RAPIDGT2");
		case 76:
			return joaat("STINGERGT");
		case 77:
			return joaat("VOLTIC");
		case 78:
			return joaat("ANNIHILATOR");
		case 79:
			return joaat("MAMMATUS");
		case 80:
			return joaat("VELUM");
		case 81:
			return joaat("DUMP");
		case 82:
			return joaat("AIRBUS");
		case 83:
			return joaat("BUS");
		case 84:
			return joaat("COACH");
		case 85:
			return joaat("JOURNEY");
		case 86:
			return joaat("MULE");
		case 87:
			return joaat("RENTALBUS");
		case 88:
			return joaat("STRETCH");
		case 89:
			return joaat("BISON");
		case 90:
			return joaat("DOUBLE");
		case 91:
			return joaat("FELON2");
		case 92:
			return joaat("HEXER");
		case 93:
			return joaat("ZION2");
		case 94:
			return joaat("BATI2");
		case 95:
			return joaat("ELEGY2");
		case 96:
			return joaat("KHAMELION");
		case 97:
			return joaat("HOTKNIFE");
		case 98:
			return joaat("CARBONRS");
		default:
			break;
	}
	switch (iParam0)
	{
		case 99:
			return joaat("BIFTA");
		case 100:
			return joaat("KALAHARI");
		case 101:
			return joaat("PARADISE");
		case 102:
			return joaat("SPEEDER");
		case 103:
			return joaat("BODHI2");
		case 104:
			return joaat("DUNE");
		case 105:
			return joaat("REBEL");
		case 106:
			return joaat("SADLER");
		case 107:
			return joaat("SANCHEZ2");
		case 108:
			return joaat("SANDKING2");
		case 109:
			return joaat("BTYPE");
		case 111:
			return joaat("JESTER");
		case 114:
			return joaat("MASSACRO");
		case 112:
			return joaat("TURISMOR");
		case 115:
			return joaat("ZENTORNO");
		case 116:
			return joaat("HUNTLEY");
		case 110:
			return joaat("ALPHA");
		case 113:
			return joaat("VESTRA");
		case 117:
			return joaat("COQUETTE");
		case 118:
			return joaat("BANSHEE");
		case 119:
			return joaat("STINGER");
		case 120:
			return joaat("VOLTIC");
		case 121:
			return joaat("THRUST");
		case 128:
			return joaat("ASEA");
		case 129:
			return joaat("ASTEROPE");
		case 130:
			return joaat("BOBCATXL");
		case 131:
			return joaat("CAVALCADE2");
		case 132:
			return joaat("GRANGER");
		case 133:
			return joaat("INGOT");
		case 134:
			return joaat("INTRUDER");
		case 135:
			return joaat("MINIVAN");
		case 136:
			return joaat("PREMIER");
		case 137:
			return joaat("RADI");
		case 138:
			return joaat("RANCHERXL");
		case 139:
			return joaat("RATLOADER");
		case 140:
			return joaat("STANIER");
		case 141:
			return joaat("STRATUM");
		case 142:
			return joaat("WASHINGTON");
		case 122:
			return joaat("DOMINATOR");
		case 123:
			return joaat("F620");
		case 124:
			return joaat("FUSILADE");
		case 125:
			return joaat("PENUMBRA");
		case 126:
			return joaat("SENTINEL");
		case 127:
			return joaat("SENTINEL2");
		default:
			break;
	}
	switch (iParam0)
	{
		case 143:
			return joaat("BLADE");
		case 144:
			return joaat("WARRENER");
		case 145:
			return joaat("GLENDALE");
		case 146:
			return joaat("RHAPSODY");
		case 147:
			return joaat("PANTO");
		case 148:
			return joaat("DUBSTA3");
		case 149:
			return joaat("PIGALLE");
		case 150:
			return joaat("PICADOR");
		case 151:
			return joaat("REGINA");
		case 152:
			return joaat("SURFER");
		case 153:
			return joaat("YOUGA");
		case 154:
			return joaat("BLAZER3");
		case 155:
			return joaat("REBEL2");
		case 156:
			return joaat("PRIMO");
		case 157:
			return joaat("BUFFALO");
		case 158:
			return joaat("BUFFALO2");
		case 159:
			return joaat("TAILGATER");
		case 160:
			return joaat("MONSTER");
		case 161:
			return joaat("SOVEREIGN");
		case 162:
			return joaat("MILJET");
		case 163:
			return joaat("BESRA");
		case 164:
			return joaat("SWIFT");
		case 165:
			return joaat("COQUETTE2");
		case 166:
			return joaat("COQUETTE2");
		case 167:
			return joaat("INNOVATION");
		case 168:
			return joaat("HAKUCHOU");
		case 169:
			return joaat("FUROREGT");
		case 170:
			return joaat("KALAHARI");
		case 187:
			return joaat("VALKYRIE");
		case 177:
			return joaat("HYDRA");
		case 185:
			return joaat("SAVAGE");
		case 174:
			return joaat("ENDURO");
		case 171:
			return joaat("BOXVILLE4");
		case 172:
			return joaat("CASCO");
		case 173:
			return joaat("DINGHY3");
		case 175:
			return joaat("GBURRITO2");
		case 176:
			return joaat("GUARDIAN");
		case 178:
			return joaat("INSURGENT");
		case 179:
			return joaat("INSURGENT2");
		case 183:
			return joaat("MULE3");
		case 180:
			return joaat("KURUMA");
		case 181:
			return joaat("KURUMA2");
		case 182:
			return joaat("LECTRO");
		case 184:
			return joaat("PBUS");
		case 186:
			return joaat("TECHNICAL");
		case 188:
			return joaat("VELUM2");
		case 189:
			return joaat("GRESLEY");
		case 190:
			return joaat("JACKAL");
		case 191:
			return joaat("LANDSTALKER");
		case 192:
			return joaat("MESA3");
		case 193:
			return joaat("NEMESIS");
		case 194:
			return joaat("ORACLE");
		case 195:
			return joaat("RUMPO");
		case 196:
			return joaat("SCHAFTER2");
		case 197:
			return joaat("SEMINOLE");
		case 198:
			return joaat("SURGE");
		case 199:
			return joaat("DODO");
		case 200:
			return joaat("MARSHALL");
		case 201:
			return joaat("SUBMERSIBLE2");
		case 202:
			return joaat("BLISTA2");
		case 203:
			return joaat("STALION");
		case 204:
			return joaat("DUKES");
		case 205:
			return joaat("DUKES2");
		case 206:
			return joaat("STALION2");
		case 207:
			return joaat("DOMINATOR2");
		case 208:
			return joaat("GAUNTLET2");
		case 209:
			return joaat("BUFFALO3");
		case 210:
			return joaat("SLAMVAN");
		case 211:
			return joaat("RATLOADER2");
		case 212:
			return joaat("JESTER2");
		case 213:
			return joaat("MASSACRO2");
		case 214:
			return joaat("FELTZER3");
		case 215:
			return joaat("LUXOR2");
		case 216:
			return joaat("OSIRIS");
		case 217:
			return joaat("SWIFT2");
		case 218:
			return joaat("VIRGO");
		case 219:
			return joaat("WINDSOR");
		case 220:
			return joaat("BRAWLER");
		case 221:
			return joaat("CHINO");
		case 222:
			return joaat("COQUETTE3");
		case 223:
			return joaat("T20");
		case 224:
			return joaat("TORO");
		case 225:
			return joaat("VINDICATOR");
		case 229:
			return joaat("PRIMO");
		case 228:
			return joaat("MOONBEAM");
		case 227:
			return joaat("FACTION");
		case 226:
			return joaat("BUCCANEER");
		case 230:
			return joaat("VOODOO2");
		case 263:
			if (iParam1 == 0)
			{
				return joaat("XLS");
			}
			else if (iParam1 == 1)
			{
				return joaat("XLS2");
			}
			else
			{
				return joaat("XLS");
			}
			break;
		case 264:
			return joaat("SEVEN70");
		case 259:
			return joaat("WINDSOR2");
		case 260:
			return joaat("PROTOTIPO");
		case 261:
			return joaat("FMJ");
		case 262:
			return joaat("BESTIAGTS");
		case 265:
			return joaat("PFISTER811");
		case 266:
			return joaat("REAPER");
		case 231:
			return joaat("BTYPE2");
		case 232:
			return joaat("LURCHER");
		case 233:
			if (iParam1 == 0)
			{
				return joaat("BALLER3");
			}
			else if (iParam1 == 1)
			{
				return joaat("BALLER5");
			}
			else
			{
				return joaat("BALLER3");
			}
			break;
		case 234:
			if (iParam1 == 0)
			{
				return joaat("BALLER4");
			}
			else if (iParam1 == 1)
			{
				return joaat("BALLER6");
			}
			else
			{
				return joaat("BALLER4");
			}
			break;
		case 235:
			if (iParam1 == 0)
			{
				return joaat("COG55");
			}
			else if (iParam1 == 1)
			{
				return joaat("COG552");
			}
			else
			{
				return joaat("COG55");
			}
			break;
		case 236:
			if (iParam1 == 0)
			{
				return joaat("COGNOSCENTI");
			}
			else if (iParam1 == 1)
			{
				return joaat("COGNOSCENTI2");
			}
			else
			{
				return joaat("COGNOSCENTI");
			}
			break;
		case 237:
			return joaat("LIMO2");
		case 238:
			return joaat("MAMBA");
		case 239:
			return joaat("NIGHTSHADE");
		case 240:
			if (iParam1 == 0)
			{
				return joaat("SCHAFTER3");
			}
			else if (iParam1 == 1)
			{
				return joaat("SCHAFTER5");
			}
			else
			{
				return joaat("SCHAFTER3");
			}
			break;
		case 241:
			if (iParam1 == 0)
			{
				return joaat("SCHAFTER4");
			}
			else if (iParam1 == 1)
			{
				return joaat("SCHAFTER6");
			}
			else
			{
				return joaat("SCHAFTER4");
			}
			break;
		case 242:
			return joaat("VERLIERER2");
		case 243:
			return joaat("SUPERVOLITO");
		case 244:
			return joaat("SUPERVOLITO2");
		case 245:
			return Global_73804;
		case 251:
			return joaat("VIRGO3");
		case 250:
			return joaat("TORNADO");
		case 249:
			return joaat("SABREGT");
		case 252:
			return joaat("FACTION");
		case 246:
			return joaat("TAMPA");
		case 247:
			return joaat("SULTAN");
		case 49:
			return joaat("BANSHEE");
		case 248:
			return joaat("BTYPE3");
		case 253:
			return joaat("VOLATUS");
		case 254:
			return joaat("CARGOBOB2");
		case 255:
			return joaat("RUMPO3");
		case 256:
			return joaat("BRICKADE");
		case 257:
			return joaat("NIMBUS");
		case 267:
			return joaat("LE7B");
		case 268:
			return joaat("OMNIS");
		case 269:
			return joaat("TROPOS");
		case 270:
			return joaat("BRIOSO");
		case 271:
			return joaat("TROPHYTRUCK");
		case 272:
			return joaat("TROPHYTRUCK2");
		case 273:
			return joaat("CONTENDER");
		case 274:
			return joaat("CLIFFHANGER");
		case 275:
			return joaat("BF400");
		case 279:
			return joaat("TYRUS");
		case 280:
			return joaat("LYNX");
		case 281:
			return joaat("SHEAVA");
		case 276:
			return joaat("RALLYTRUCK");
		case 277:
			return joaat("TAMPA2");
		case 278:
			return joaat("GARGOYLE");
		case 282:
			return joaat("BAGGER");
		case 283:
			return joaat("ESSKEY");
		case 284:
			return joaat("NIGHTBLADE");
		case 285:
			return joaat("DEFILER");
		case 286:
			return joaat("AVARUS");
		case 287:
			return joaat("ZOMBIEA");
		case 288:
			return joaat("ZOMBIEB");
		case 289:
			return joaat("CHIMERA");
		case 290:
			return joaat("DAEMON2");
		case 291:
			return joaat("RATBIKE");
		case 292:
			return joaat("SHOTARO");
		case 293:
			return joaat("RAPTOR");
		case 294:
			return joaat("HAKUCHOU2");
		case 296:
			return joaat("BLAZER4");
		case 297:
			return joaat("SANCTUS");
		case 295:
			return joaat("VORTEX");
		case 298:
			return joaat("MANCHEZ");
		case 299:
			return joaat("TORNADO6");
		case 300:
			return joaat("YOUGA2");
		case 301:
			return joaat("WOLFSBANE");
		case 302:
			return joaat("FAGGIO3");
		case 303:
			return joaat("FAGGIO");
		case 304:
			return joaat("DUNE5");
		case 305:
			return joaat("PHANTOM2");
		case 306:
			return joaat("TECHNICAL2");
		case 307:
			return joaat("BLAZER5");
		case 308:
			return joaat("BOXVILLE5");
		case 309:
			return joaat("WASTELANDER");
		case 310:
			return joaat("RUINER2");
		case 311:
			return joaat("VOLTIC2");
		case 312:
			return joaat("PENETRATOR");
		case 313:
			return joaat("TEMPESTA");
		case 314:
			return joaat("ITALIGTB");
		case 315:
			return joaat("NERO");
		case 316:
			return joaat("DIABLOUS");
		case 317:
			return joaat("FCR");
		case 318:
			return joaat("SPECTER");
		case 319:
			return joaat("GP1");
		case 320:
			return joaat("INFERNUS2");
		case 321:
			return joaat("RUSTON");
		case 322:
			return joaat("TURISMO2");
	}
	switch (iParam0)
	{
		case 323:
			return Global_73805;
		case 324:
			return Global_73806;
		case 325:
			return joaat("CHEETAH2");
		case 326:
			return joaat("TORERO");
		case 327:
			return joaat("VAGNER");
		case 328:
			return joaat("XA21");
		case 329:
			return joaat("APC");
		case 330:
			return joaat("DUNE3");
		case 331:
			return joaat("HALFTRACK");
		case 332:
			return joaat("OPPRESSOR");
		case 333:
			return joaat("TAMPA3");
		case 334:
			return joaat("TRAILERSMALL2");
		case 335:
			return joaat("ARDENT");
		case 336:
			return joaat("NIGHTSHARK");
		case 337:
			return joaat("LAZER");
		case 338:
			return joaat("MICROLIGHT");
		case 339:
			return joaat("MOGUL");
		case 340:
			return joaat("ROGUE");
		case 341:
			return joaat("STARLING");
		case 342:
			return joaat("SEABREEZE");
		case 343:
			return joaat("TULA");
		case 344:
			return joaat("PYRO");
		case 345:
			return joaat("MOLOTOK");
		case 346:
			return joaat("NOKOTA");
		case 347:
			return joaat("BOMBUSHKA");
		case 348:
			return joaat("HUNTER");
		case 349:
			return joaat("HAVOK");
		case 350:
			return joaat("HOWARD");
		case 351:
			return joaat("ALPHAZ1");
		case 352:
			return joaat("CYCLONE");
		case 353:
			return joaat("VISIONE");
		case 354:
			return joaat("RETINUE");
		case 355:
			return joaat("RAPIDGT3");
		case 356:
			return joaat("VIGILANTE");
		case 357:
			return Global_73807;
		case 358:
			return joaat("DELUXO");
		case 359:
			return joaat("STROMBERG");
		case 360:
			return joaat("RIOT2");
		case 361:
			return joaat("CHERNOBOG");
		case 362:
			return joaat("KHANJALI");
		case 363:
			return joaat("AKULA");
		case 364:
			return joaat("THRUSTER");
		case 365:
			return joaat("BARRAGE");
		case 366:
			return joaat("VOLATOL");
		case 367:
			return joaat("COMET4");
		case 368:
			return joaat("NEON");
		case 369:
			return joaat("STREITER");
		case 370:
			return joaat("SENTINEL3");
		case 371:
			return joaat("YOSEMITE");
		case 372:
			return joaat("SC1");
		case 373:
			return joaat("AUTARCH");
		case 374:
			return joaat("GT500");
		case 375:
			return joaat("HUSTLER");
		case 376:
			return joaat("REVOLTER");
		case 377:
			return joaat("PARIAH");
		case 378:
			return joaat("RAIDEN");
		case 379:
			return joaat("SAVESTRA");
		case 380:
			return joaat("RIATA");
		case 381:
			return joaat("HERMES");
		case 382:
			return joaat("COMET5");
		case 383:
			return joaat("Z190");
		case 384:
			return joaat("VISERIS");
		case 385:
			return joaat("KAMACHO");
		case 386:
			return joaat("GB200");
		case 387:
			return joaat("FAGALOA");
		case 388:
			return joaat("ELLIE");
		case 389:
			return joaat("ISSI3");
		case 390:
			return joaat("MICHELLI");
		case 391:
			return joaat("FLASHGT");
		case 392:
			return joaat("HOTRING");
		case 393:
			return joaat("TEZERACT");
		case 394:
			return joaat("TYRANT");
		case 395:
			return joaat("DOMINATOR3");
		case 396:
			return joaat("TAIPAN");
		case 397:
			return joaat("ENTITY2");
		case 398:
			return joaat("JESTER3");
		case 399:
			return joaat("CHEBUREK");
		case 400:
			return joaat("CARACARA");
		case 401:
			return joaat("SEASPARROW");
		case 402:
			return Global_73808;
		case 403:
			return joaat("MULE4");
		case 404:
			return joaat("POUNDER2");
		case 405:
			return joaat("SWINGER");
		case 406:
			return joaat("MENACER");
		case 407:
			return joaat("SCRAMJET");
		case 408:
			return joaat("STRIKEFORCE");
		case 409:
			return joaat("OPPRESSOR2");
		case 410:
			return joaat("PATRIOT2");
		case 411:
			return joaat("STAFFORD");
		case 412:
			return joaat("FREECRAWLER");
		case 415:
			return joaat("FUTO");
		case 416:
			return joaat("RUINER");
		case 417:
			return joaat("ROMERO");
		case 418:
			return joaat("PRAIRIE");
		case 419:
			return joaat("BALLER");
		case 420:
			return joaat("SERRANO");
		case 421:
			return joaat("BJXL");
		case 422:
			return joaat("HABANERO");
		case 423:
			return joaat("FQ2");
		case 424:
			return joaat("PATRIOT");
		case 413:
			return joaat("BLIMP3");
		case 414:
			return joaat("PBUS2");
		case 425:
			return joaat("CERBERUS");
		case 426:
			return joaat("CERBERUS2");
		case 427:
			return joaat("CERBERUS3");
		case 428:
			return joaat("BRUTUS");
		case 429:
			return joaat("BRUTUS2");
		case 430:
			return joaat("BRUTUS3");
		case 431:
			return joaat("SCARAB");
		case 432:
			return joaat("SCARAB2");
		case 433:
			return joaat("SCARAB3");
		case 434:
			return joaat("IMPERATOR");
		case 435:
			return joaat("IMPERATOR2");
		case 436:
			return joaat("IMPERATOR3");
		case 437:
			return joaat("ZR380");
		case 438:
			return joaat("ZR3802");
		case 439:
			return joaat("ZR3803");
		case 440:
			return joaat("IMPALER");
		case 450:
			return joaat("TAXI");
		case 451:
			return joaat("BULLDOZER");
		case 452:
			return joaat("SPEEDO2");
		case 453:
			return joaat("TRASH2");
		case 454:
			return joaat("BARRACKS2");
		case 455:
			return joaat("MIXER");
		case 456:
			return joaat("DUNE2");
		case 457:
			return joaat("TRACTOR");
		case 458:
			return joaat("BLISTA3");
		case 441:
			return joaat("VAMOS");
		case 442:
			return joaat("TULIP");
		case 443:
			return joaat("DEVESTE");
		case 444:
			return joaat("SCHLAGEN");
		case 445:
			return joaat("TOROS");
		case 446:
			return joaat("DEVIANT");
		case 447:
			return joaat("CLIQUE");
		case 448:
			return joaat("ITALIGTO");
		case 449:
			return joaat("RCBANDITO");
		case 459:
			return 1044193113;
		case 460:
			return 686471183;
		case 461:
			return joaat("LOCUST");
		case 462:
			return -1829436850;
		case 463:
			return -682108547;
		case 464:
			return 722226637;
		case 465:
			return 1854776567;
		case 466:
			return 1862507111;
		case 467:
			return -882629065;
		case 468:
			return -362150785;
		case 469:
			return 310284501;
		case 470:
			return 916547552;
		case 471:
			return -1804415708;
		case 472:
			return 1934384720;
		case 473:
			return -1349095620;
		case 474:
			return -208911803;
		case 475:
			return -324618589;
		case 476:
			return -664141241;
		case 477:
			return 1323778901;
		case 478:
			return -1620126302;
		case 479:
			return -447711397;
		case 480:
			return joaat("FIRETRUK");
		case 481:
			return joaat("BURRITO2");
		case 482:
			return joaat("BOXVILLE");
		case 483:
			return joaat("STOCKADE");
		case 484:
			return joaat("LGUARD");
		case 485:
			return joaat("BLAZER2");
		case 486:
			return 1284356689;
		case 487:
			return -1254331310;
		case 488:
			return 394110044;
		case 489:
			return 301304410;
		case 490:
			return 1456336509;
		case 491:
			return 340154634;
		case 492:
			return -1132721664;
		case 493:
			return -1960756985;
		case 494:
			return 960812448;
		case 495:
			return 83136452;
		case 496:
			return 740289177;
		case 497:
			return 2031587082;
		case 498:
			return 1693751655;
		case 499:
			return -834353991;
		case 500:
			return 872704284;
		case 501:
			return 987469656;
		case 502:
			return -1756021720;
		case 503:
			return 1118611807;
		case 504:
			return 409049982;
		case 505:
			return joaat("OUTLAW");
		default:
			break;
	}
	switch (iParam0)
	{
		case 506:
			return joaat("CLUB");
		case 507:
			return 2134119907;
		case 508:
			return 67753863;
		case 509:
			return -631322662;
		case 510:
			return -838099166;
		case 511:
			return -1810806490;
		case 512:
			return -1358197432;
		case 513:
			return 1492612435;
		case 514:
			return 1181339704;
		case 515:
			return -1728685474;
		case 516:
			return joaat("MANANA");
		case 517:
			return joaat("PEYOTE");
		default:
			break;
	}
	return 0;
}

void func_133(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	var uVar4;

	if (Global_22350.f_5218 > bParam0)
	{
		return;
	}
	if (Global_22350.f_5218 >= 128)
	{
		return;
	}
	if (Global_22350.f_5224 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 < Global_22350.f_5741)
	{
		return;
	}
	if (Global_22350.f_5218 != bParam0)
	{
		Global_22350.f_5218 = bParam0;
		Global_22350.f_5219 = 0;
	}
	iVar0 = Global_22350.f_5056[Global_22350.f_5219];
	if (iVar0 != 4)
	{
		while (Global_22350.f_5219 < 4 && iVar0 != 4)
		{
			Global_22350.f_5219++;
			iVar0 = Global_22350.f_5056[Global_22350.f_5219];
		}
		if (iVar0 != 4)
		{
			return;
		}
	}
	Global_22350.f_4433[Global_22350.f_5224] = iParam1;
	Global_22350.f_5224++;
	if (iParam1 != 0)
	{
		func_109(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_109(26, 1, 0, &fVar3, &uVar4, 0);
			fVar1 = (fVar1 + (fVar3 * 2f));
		}
		if (fVar1 > Global_22350.f_5068[Global_22350.f_5219])
		{
			Global_22350.f_5068[Global_22350.f_5219] = fVar1;
		}
		if (bParam2)
		{
			if (fVar2 > Global_22350.f_5745[bParam0])
			{
				Global_22350.f_5745[bParam0] = fVar2;
			}
		}
	}
	UNK_0x5D96D8530B3D0904(&(Global_22350.f_5089[bParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 4;
}

void func_134(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;

	if (Global_22350.f_5218 > bParam0)
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
	if (Global_22350.f_5218 != bParam0)
	{
		Global_22350.f_5218 = bParam0;
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
		func_137(Global_22350.f_5218, 1);
	}
	else
	{
		func_137(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_136(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_109(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_135(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
			if (fVar4 > Global_22350.f_5745[bParam0])
			{
				Global_22350.f_5745[bParam0] = fVar4;
			}
		}
	}
	UNK_0x5D96D8530B3D0904(&(Global_22350.f_5089[bParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 1;
	Global_22350.f_5742 = (Global_22350.f_5220 - 1);
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = iParam2;
}

float func_135(bool bParam0)
{
	if (!UNK_0xEF07223F00EBE9C9(bParam0))
	{
	}
	return UNK_0x9153358B38685E6E(0.35f, 0);
}

float func_136(bool bParam0)
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
	func_88(0, 1, 0, 0, 0, 0, 0);
	UNK_0xBBA442527B4BB1A6(bParam0);
	return UNK_0x79E367314AFBB5CA(1);
}

void func_137(int iParam0, bool bParam1)
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

void func_138(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	int iVar14;
	var uVar15;
	int iVar19;
	var uVar20;
	var uVar21;
	int iVar22;
	var uVar23;
	int iVar27;
	var uVar28;
	var uVar29;

	uParam1->f_66 = func_132(iParam0, iParam4);
	if (uParam1->f_66 == 0)
	{
		if (bParam2)
		{
		}
		return;
	}
	if (iParam3 == 2 && uParam1->f_66 == joaat("FROGGER"))
	{
		uParam1->f_66 = joaat("FROGGER2");
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_67 = 1;
		return;
	}
	uParam1->f_77 = 0;
	func_209(iParam0, &(uParam1->f_77));
	uParam1->f_9[16] = 0;
	if ((iParam0 == 181 || iParam0 == 178) || iParam0 == 179)
	{
		uParam1->f_9[16] = 4;
	}
	else if (func_208(iParam0))
	{
		if (Global_75375)
		{
			uParam1->f_9[16] = 4;
		}
	}
	uParam1->f_9[23] = 0;
	if (iParam0 == 218)
	{
		uParam1->f_9[23] = 7;
	}
	*uParam1 = 0;
	if (iParam0 == 360)
	{
		*uParam1 = 4;
	}
	uParam1->f_9[48] = 0;
	if (iParam0 == 447)
	{
		if (iParam4 == -1)
		{
			uParam1->f_9[48] = -1;
		}
		else if (iParam4 == 1)
		{
			uParam1->f_9[48] = 11;
		}
	}
	else if (func_207(uParam1->f_66))
	{
		uParam1->f_9[48] = 1;
	}
	uParam1->f_9[42] = 0;
	switch (uParam1->f_66)
	{
		case joaat("BRUTUS"):
		case joaat("BRUTUS2"):
		case joaat("BRUTUS3"):
			uParam1->f_9[42] = 4;
			break;
		case joaat("SCARAB"):
		case joaat("SCARAB2"):
		case joaat("SCARAB3"):
			uParam1->f_9[42] = 4;
			break;
		case joaat("IMPERATOR"):
		case joaat("IMPERATOR2"):
		case joaat("IMPERATOR3"):
			uParam1->f_9[42] = 1;
			break;
		case joaat("ZR380"):
		case joaat("ZR3802"):
		case joaat("ZR3803"):
			uParam1->f_9[42] = 1;
			break;
		case joaat("CERBERUS"):
		case joaat("CERBERUS2"):
		case joaat("CERBERUS3"):
			uParam1->f_9[42] = 4;
			break;
	}
	uParam1->f_9[41] = 0;
	if (iParam0 == 449)
	{
		uParam1->f_9[41] = 1;
	}
	uParam1->f_99 = 0;
	if (iParam0 == 251)
	{
		uParam1->f_99 = 4;
	}
	uParam1->f_65 = 0;
	if (iParam0 == 263)
	{
		if (Global_75375)
		{
			uParam1->f_65 = 1;
		}
	}
	uParam1->f_9[0] = 0;
	if (((((iParam0 == 320 || iParam0 == 321) || iParam0 == 322) || iParam0 == 327) || iParam0 == 382) || iParam0 == 391)
	{
		uParam1->f_9[0] = 1;
	}
	if (((((iParam0 == 329 || iParam0 == 330) || iParam0 == 331) || iParam0 == 334) || iParam0 == 332) || iParam0 == 333)
	{
		uParam1->f_9[10] = 0;
	}
	if (func_206(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
	{
		uParam1->f_80 = fVar0;
	}
	if (bParam2)
	{
		iVar1 = Global_75374;
	}
	else if (iParam3 == 0)
	{
		iVar1 = Global_111638.f_25177.f_313[iParam0];
	}
	else if (iParam3 == 1)
	{
		iVar1 = Global_111638.f_25177.f_626[iParam0];
	}
	else if (iParam3 == 2)
	{
		iVar1 = Global_111638.f_25177.f_939[iParam0];
	}
	uParam1->f_5 = 0;
	uParam1->f_6 = 0;
	uParam1->f_7 = 0;
	uParam1->f_8 = 156;
	uParam1->f_67 = -1;
	if (iParam0 == 200)
	{
		switch (iVar1)
		{
			case 1:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 2:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 3:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 4:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 5:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 6:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 7:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 8:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 9:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 10:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 11:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 12:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 13:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 14:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 15:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 16:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 17:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 18:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 19:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 20:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 21:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 22:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 23:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 24:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			case 25:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_148(func_162(iParam0, iVar1));
				break;
			default:
				break;
		}
	}
	else if (iParam0 == 219)
	{
		switch (iVar1)
		{
			case 1:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 1;
				break;
			case 2:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 2;
				break;
			case 3:
				uParam1->f_5 = 135;
				uParam1->f_6 = 135;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 3;
				break;
			case 4:
				uParam1->f_5 = 59;
				uParam1->f_6 = 59;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 8;
				break;
			case 5:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 4;
				break;
			case 6:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 5;
				break;
			case 7:
				uParam1->f_5 = 42;
				uParam1->f_6 = 42;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 7;
				break;
			case 8:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 6;
				break;
			default:
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case 1:
				if (func_147(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_146(iParam0, iVar1, &uVar2))
						{
							uParam1->f_9[48] = uVar2;
						}
						else if (func_145(iParam0, iVar1, &uVar3, &uVar4, &uVar2))
						{
							uParam1->f_5 = uVar3;
							uParam1->f_6 = uVar4;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_99 = 134;
							}
							else
							{
								uParam1->f_99 = 0;
							}
							uParam1->f_9[48] = uVar2;
						}
						else
						{
							uParam1->f_67 = 0;
						}
					}
					else
					{
						uParam1->f_67 = func_148(func_162(iParam0, iVar1));
					}
				}
				else if (func_208(iParam0))
				{
					if (!Global_75375)
					{
						uParam1->f_5 = 143;
						uParam1->f_6 = 34;
						uParam1->f_7 = 31;
						uParam1->f_97 = 99;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 40;
						uParam1->f_6 = 40;
						uParam1->f_97 = 93;
						uParam1->f_67 = -1;
					}
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 89;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_67 = -1;
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				break;
			case 2:
				if (func_147(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_146(iParam0, iVar1, &uVar5))
						{
							uParam1->f_9[48] = uVar5;
						}
						else if (func_145(iParam0, iVar1, &uVar6, &uVar7, &uVar5))
						{
							uParam1->f_5 = uVar6;
							uParam1->f_6 = uVar7;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_99 = 134;
							}
							else
							{
								uParam1->f_99 = 0;
							}
							uParam1->f_9[48] = uVar5;
						}
						else
						{
							uParam1->f_67 = 1;
						}
					}
					else
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 10;
						uParam1->f_7 = 4;
						uParam1->f_8 = 156;
						uParam1->f_67 = func_148(func_162(iParam0, iVar1));
					}
				}
				else if (func_208(iParam0))
				{
					if (!Global_75375)
					{
						uParam1->f_5 = 8;
						uParam1->f_6 = 8;
						uParam1->f_7 = 5;
						uParam1->f_97 = 106;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 14;
						uParam1->f_6 = 14;
						uParam1->f_97 = 108;
						uParam1->f_67 = -1;
					}
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 67;
					uParam1->f_67 = -1;
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				break;
			case 3:
				if (func_147(iParam0))
				{
					if (func_146(iParam0, iVar1, &uVar8))
					{
						uParam1->f_9[48] = uVar8;
					}
					else if (func_145(iParam0, iVar1, &uVar9, &uVar10, &uVar8))
					{
						uParam1->f_5 = uVar9;
						uParam1->f_6 = uVar10;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_97 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_99 = 134;
						}
						else
						{
							uParam1->f_99 = 0;
						}
						uParam1->f_9[48] = uVar8;
					}
					else
					{
						uParam1->f_67 = 2;
					}
				}
				else if (func_208(iParam0))
				{
					if (!Global_75375)
					{
						uParam1->f_5 = 100;
						uParam1->f_6 = 100;
						uParam1->f_7 = 100;
						uParam1->f_97 = 22;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 152;
						uParam1->f_6 = 152;
						uParam1->f_97 = 22;
						uParam1->f_67 = -1;
					}
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 28;
					uParam1->f_67 = -1;
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				break;
			case 4:
				if (func_147(iParam0))
				{
					if (func_146(iParam0, iVar1, &uVar11))
					{
						uParam1->f_9[48] = uVar11;
					}
					else if (func_145(iParam0, iVar1, &uVar12, &uVar13, &uVar11))
					{
						uParam1->f_5 = uVar12;
						uParam1->f_6 = uVar13;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_97 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_99 = 134;
						}
						else
						{
							uParam1->f_99 = 0;
						}
						uParam1->f_9[48] = uVar11;
					}
					else
					{
						uParam1->f_67 = 3;
					}
				}
				else if (func_208(iParam0))
				{
					if (!Global_75375)
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_7 = 106;
						uParam1->f_97 = 101;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_97 = 48;
						uParam1->f_67 = -1;
					}
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 81;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 27;
					while (func_142(iVar14, &uVar15, &iVar19, &uVar20, &uVar21))
					{
						if (UNK_0x7F8A39872A07D2CE(&uVar15, "ORANGE") && iVar19 == 1)
						{
							uParam1->f_5 = uVar20;
							uParam1->f_6 = uVar21;
							iVar14 = -99;
						}
						iVar14++;
					}
					uParam1->f_67 = -1;
				}
				break;
			case 5:
				if (func_208(iParam0))
				{
					if (!Global_75375)
					{
						uParam1->f_5 = 49;
						uParam1->f_6 = 49;
						uParam1->f_7 = 52;
						uParam1->f_97 = 98;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 128;
						uParam1->f_6 = 128;
						uParam1->f_97 = 99;
						uParam1->f_67 = -1;
					}
				}
				else if ((iParam0 == 178 || iParam0 == 179) || iParam0 == 192)
				{
					uParam1->f_5 = 152;
					uParam1->f_6 = 152;
					uParam1->f_7 = 18;
					uParam1->f_8 = 152;
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 55;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 41;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 55;
					uParam1->f_6 = 55;
					uParam1->f_67 = -1;
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 128;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 0;
					while (func_142(iVar22, &uVar23, &iVar27, &uVar28, &uVar29))
					{
						if (UNK_0x7F8A39872A07D2CE(&uVar23, "LIME_GREEN") && iVar27 == 1)
						{
							uParam1->f_5 = uVar28;
							uParam1->f_6 = uVar29;
							iVar22 = -99;
						}
						iVar22++;
					}
					uParam1->f_67 = -1;
				}
				break;
			case 6:
				if (func_208(iParam0))
				{
					if (!Global_75375)
					{
						uParam1->f_5 = 141;
						uParam1->f_6 = 141;
						uParam1->f_7 = 73;
						uParam1->f_97 = 5;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 84;
						uParam1->f_6 = 84;
						uParam1->f_97 = 24;
						uParam1->f_67 = -1;
					}
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 63;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 111;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_67 = -1;
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 68;
					uParam1->f_67 = -1;
				}
				break;
			case 7:
				if (uParam1->f_66 == joaat("KURUMA2"))
				{
					uParam1->f_5 = 12;
					uParam1->f_6 = 12;
					uParam1->f_7 = 13;
					uParam1->f_8 = 156;
					uParam1->f_67 = -1;
				}
				else if (func_208(iParam0))
				{
					if (!Global_75375)
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 0;
						uParam1->f_7 = 10;
						uParam1->f_97 = 1;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 12;
						uParam1->f_6 = 12;
						uParam1->f_97 = 0;
						uParam1->f_67 = -1;
					}
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 5;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 81;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 333)
				{
					uParam1->f_5 = 154;
					uParam1->f_6 = 3;
					uParam1->f_97 = 0;
					uParam1->f_67 = -1;
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 10;
					uParam1->f_67 = -1;
				}
				break;
			case 8:
				if (func_208(iParam0))
				{
					if (!Global_75375)
					{
						uParam1->f_5 = 112;
						uParam1->f_6 = 112;
						uParam1->f_7 = 0;
						uParam1->f_97 = 7;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 131;
						uParam1->f_6 = 131;
						uParam1->f_97 = 78;
						uParam1->f_67 = -1;
					}
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 27;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				break;
			default:
				break;
		}
	}
	if (iVar1 == 0)
	{
		switch (iParam0)
		{
			case 32:
				uParam1->f_5 = 111;
				uParam1->f_6 = 65;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 13:
				uParam1->f_5 = 46;
				uParam1->f_6 = 24;
				uParam1->f_7 = 46;
				uParam1->f_8 = 24;
				uParam1->f_67 = -1;
				break;
			case 33:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 34:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 35:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 36:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 37:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 38:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 206:
				uParam1->f_5 = 2;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_67 = -1;
				break;
			case 207:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 126;
				uParam1->f_67 = -1;
				break;
			case 208:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_67 = -1;
				break;
			case 209:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 139;
				uParam1->f_67 = -1;
				break;
			case 210:
				if (iParam5 != 29)
				{
					uParam1->f_5 = 28;
					uParam1->f_6 = 0;
					uParam1->f_7 = 14;
					uParam1->f_8 = 156;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 66;
					uParam1->f_7 = 63;
					uParam1->f_8 = 156;
					uParam1->f_97 = 1;
					uParam1->f_99 = 132;
				}
				break;
			case 213:
				uParam1->f_5 = 38;
				uParam1->f_6 = 38;
				uParam1->f_7 = 42;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 212:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 27;
				uParam1->f_67 = -1;
				break;
			case 17:
				uParam1->f_5 = 30;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 215:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 217:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 205:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 12;
				uParam1->f_67 = -1;
				break;
			case 227:
				uParam1->f_5 = 0;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			case 226:
				uParam1->f_5 = 36;
				uParam1->f_6 = 36;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 230:
				uParam1->f_5 = 41;
				uParam1->f_6 = 41;
				uParam1->f_7 = 156;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			case 338:
				uParam1->f_5 = 64;
				uParam1->f_6 = 5;
				uParam1->f_7 = 111;
				uParam1->f_8 = 5;
				uParam1->f_97 = 0;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 339:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 340:
				uParam1->f_5 = 24;
				uParam1->f_6 = 29;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 341:
				uParam1->f_5 = 3;
				uParam1->f_6 = 4;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 342:
				uParam1->f_5 = 111;
				uParam1->f_6 = 89;
				uParam1->f_7 = 111;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 343:
				uParam1->f_5 = 14;
				uParam1->f_6 = 121;
				uParam1->f_7 = 121;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 344:
				uParam1->f_5 = 50;
				uParam1->f_6 = 91;
				uParam1->f_7 = 0;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 345:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 346:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 347:
				uParam1->f_5 = 14;
				uParam1->f_6 = 5;
				uParam1->f_67 = -1;
				break;
			case 348:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 349:
				uParam1->f_5 = 27;
				uParam1->f_6 = 111;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 350:
				uParam1->f_5 = 119;
				uParam1->f_6 = 73;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 351:
				uParam1->f_5 = 67;
				uParam1->f_6 = 1;
				uParam1->f_7 = 5;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 356:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			case 363:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 361:
				uParam1->f_5 = 154;
				uParam1->f_6 = 13;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 358:
				uParam1->f_5 = 117;
				uParam1->f_6 = 118;
				uParam1->f_7 = 18;
				uParam1->f_8 = 0;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 362:
				uParam1->f_5 = 13;
				uParam1->f_6 = 8;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 360:
				uParam1->f_5 = 9;
				uParam1->f_6 = 9;
				uParam1->f_7 = 7;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 359:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 364:
				uParam1->f_5 = 8;
				uParam1->f_6 = 14;
				uParam1->f_7 = 5;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 425:
				uParam1->f_5 = 153;
				uParam1->f_6 = 159;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 428:
				uParam1->f_5 = 12;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 431:
				uParam1->f_5 = 153;
				uParam1->f_6 = 154;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 434:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 437:
				uParam1->f_5 = 13;
				uParam1->f_6 = 131;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 426:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 429:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 432:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 435:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 438:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 427:
				uParam1->f_5 = 131;
				uParam1->f_6 = 135;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 430:
				uParam1->f_5 = 131;
				uParam1->f_6 = 39;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 433:
				uParam1->f_5 = 87;
				uParam1->f_6 = 138;
				uParam1->f_7 = 7;
				uParam1->f_8 = 135;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 436:
				uParam1->f_5 = 12;
				uParam1->f_6 = 55;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 439:
				uParam1->f_5 = 131;
				uParam1->f_6 = 55;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 211:
				uParam1->f_5 = 30;
				uParam1->f_6 = 30;
				uParam1->f_7 = 30;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 145:
				uParam1->f_5 = 68;
				uParam1->f_6 = 2;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 122:
				uParam1->f_5 = 111;
				uParam1->f_6 = 64;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 440:
				uParam1->f_5 = 6;
				uParam1->f_6 = 120;
				uParam1->f_7 = 7;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 389:
				uParam1->f_5 = 29;
				uParam1->f_6 = 111;
				uParam1->f_7 = 7;
				uParam1->f_8 = 5;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			default:
				break;
		}
	}
	if (iParam0 == 161)
	{
		uParam1->f_5 = 111;
		uParam1->f_6 = 111;
		uParam1->f_7 = 111;
		uParam1->f_8 = 156;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 231)
	{
		uParam1->f_5 = 142;
		uParam1->f_6 = 0;
		uParam1->f_7 = 145;
		uParam1->f_8 = 90;
	}
	if (iParam0 == 290)
	{
		uParam1->f_6 = 0;
	}
	if (iParam0 == 291)
	{
		uParam1->f_5 = 131;
		uParam1->f_6 = 131;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 304)
	{
		uParam1->f_5 = 22;
		uParam1->f_6 = 12;
		uParam1->f_7 = 134;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 305)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 306)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 307)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 308)
	{
		uParam1->f_5 = 12;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 309)
	{
		uParam1->f_5 = 151;
		uParam1->f_6 = 129;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 310)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 311)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 6;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 329)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 330)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 331)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 0;
		uParam1->f_8 = 154;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 332)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 120;
		uParam1->f_7 = 35;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 334)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 323)
	{
		if (iParam4 == 0)
		{
			uParam1->f_66 = joaat("PHANTOM3");
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 0;
			uParam1->f_99 = 0;
			uParam1->f_67 = -1;
		}
		else if (iParam4 == 1)
		{
			uParam1->f_66 = joaat("HAULER2");
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 0;
			uParam1->f_99 = 0;
			uParam1->f_67 = -1;
		}
	}
	if (func_141(uParam1->f_66))
	{
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 357)
	{
		uParam1->f_66 = func_140();
		uParam1->f_5 = 14;
		uParam1->f_6 = 131;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 365)
	{
		uParam1->f_5 = 128;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 364)
	{
		uParam1->f_5 = 32;
		uParam1->f_6 = 112;
		uParam1->f_7 = 25;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 366)
	{
		uParam1->f_5 = 65;
		uParam1->f_6 = 65;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 387)
	{
		uParam1->f_6 = 120;
	}
	if (iParam0 == 400)
	{
		uParam1->f_5 = 64;
		uParam1->f_6 = 2;
		uParam1->f_7 = 68;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
		uParam1->f_74 = 255;
		uParam1->f_76 = 255;
	}
	if (iParam0 == 401)
	{
		uParam1->f_5 = 5;
		uParam1->f_6 = 106;
		uParam1->f_7 = 5;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 402)
	{
		uParam1->f_66 = func_139();
		uParam1->f_5 = 9;
		uParam1->f_7 = 7;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 409)
	{
		uParam1->f_5 = 141;
		uParam1->f_7 = 73;
		uParam1->f_8 = 112;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_69 = 6;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
		uParam1->f_74 = 255;
		uParam1->f_76 = 255;
	}
	if (iParam0 == 408)
	{
		uParam1->f_5 = 119;
		uParam1->f_6 = 119;
		uParam1->f_7 = 1;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 407)
	{
		uParam1->f_5 = 111;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 406)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 12;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 404)
	{
		uParam1->f_5 = 112;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 403)
	{
		uParam1->f_5 = 8;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 487)
	{
		uParam1->f_5 = 102;
		uParam1->f_6 = 144;
		uParam1->f_7 = 105;
		uParam1->f_8 = 144;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
	}
	if (iParam0 == 485)
	{
		uParam1->f_5 = 111;
		uParam1->f_6 = 0;
		uParam1->f_7 = 0;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
	}
	if (iParam0 == 486)
	{
		uParam1->f_5 = 102;
		uParam1->f_6 = 102;
		uParam1->f_7 = 105;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
	}
	if (uParam1->f_67 >= 0)
	{
	}
	else if (iParam0 == 195)
	{
		uParam1->f_67 = 1;
	}
}

int func_139()
{
	return joaat("TERBYTE");
}

int func_140()
{
	return joaat("AVENGER");
}

bool func_141(int iParam0)
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

bool func_142(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
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

bool func_143(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 398 || iParam0 == 386) || iParam0 == 391) || iParam0 == 394) || iParam0 == 393) || iParam0 == 397) || iParam0 == 396) || iParam0 == 390) || iParam0 == 395) || iParam0 == 389) || iParam0 == 388) || iParam0 == 392) || iParam0 == 399) || iParam0 == 410) || iParam0 == 411) || iParam0 == 412) || iParam0 == 405) || iParam0 == 415) || iParam0 == 417) || iParam0 == 418) || iParam0 == 424) || iParam0 == 420) || iParam0 == 421) || iParam0 == 423) || iParam0 == 422) || iParam0 == 449) || iParam0 == 442) || iParam0 == 441) || iParam0 == 444) || iParam0 == 446) || iParam0 == 448) || iParam0 == 447) || iParam0 == 445) || iParam0 == 443) || iParam0 == 459) || iParam0 == 460) || iParam0 == 461) || iParam0 == 462) || iParam0 == 463) || iParam0 == 464) || iParam0 == 465) || iParam0 == 466) || iParam0 == 467) || iParam0 == 468) || iParam0 == 469) || iParam0 == 470) || iParam0 == 471) || iParam0 == 472) || iParam0 == 473) || iParam0 == 474) || iParam0 == 475) || iParam0 == 476) || iParam0 == 477) || iParam0 == 478) || iParam0 == 479) || iParam0 == 489) || iParam0 == 490) || iParam0 == 491) || iParam0 == 492) || iParam0 == 493) || iParam0 == 494) || iParam0 == 495) || iParam0 == 496) || iParam0 == 497) || iParam0 == 498) || iParam0 == 500) || iParam0 == 501) || iParam0 == 502) || iParam0 == 503) || iParam0 == 504) || iParam0 == 505)
	{
		return true;
	}
	return false;
}

bool func_144(int iParam0)
{
	if (((((iParam0 == 286 || iParam0 == 289) || iParam0 == 290) || iParam0 == 301) || iParam0 == 287) || iParam0 == 288)
	{
		return true;
	}
	return false;
}

bool func_145(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	if (iParam0 == 275)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return true;
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return true;
		}
		return false;
	}
	else if (iParam0 == 270)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return true;
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return true;
		}
		return false;
	}
	else if (iParam0 == 274)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return true;
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return true;
		}
		return false;
	}
	else if (iParam0 == 278)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return true;
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return true;
		}
		return false;
	}
	else if (iParam0 == 267)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return true;
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return true;
		}
		return false;
	}
	else if (iParam0 == 280)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return true;
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return true;
		}
		return false;
	}
	else if (iParam0 == 268)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return true;
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return true;
		}
		return false;
	}
	else if (iParam0 == 276)
	{
		switch (iParam1)
		{
			case 1:
				func_161(func_162(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 1;
				return true;
			case 2:
				func_161(func_162(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 2;
				return true;
		}
		return false;
	}
	else if (iParam0 == 281)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return true;
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return true;
		}
		return false;
	}
	else if (iParam0 == 277)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return true;
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return true;
		}
		return false;
	}
	else if (iParam0 == 271)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return true;
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return true;
		}
		return false;
	}
	else if (iParam0 == 272)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 38;
				*uParam3 = 0;
				*uParam4 = 1;
				return true;
			case 2:
				*uParam2 = 88;
				*uParam3 = 88;
				*uParam4 = 2;
				return true;
		}
		return false;
	}
	else if (iParam0 == 269)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return true;
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return true;
		}
		return false;
	}
	else if (iParam0 == 279)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return true;
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return true;
		}
		return false;
	}
	return false;
}

bool func_146(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 == 231)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 4;
				return true;
			case 2:
				*uParam2 = 1;
				return true;
			case 3:
				*uParam2 = 2;
				return true;
			case 4:
				*uParam2 = 3;
				return true;
		}
		*uParam2 = -1;
		return false;
	}
	else if (iParam0 == 232)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 2;
				return true;
			case 2:
				*uParam2 = 1;
				return true;
		}
		*uParam2 = -1;
		return false;
	}
	else if (iParam0 == 276)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 1;
				return true;
			case 2:
				*uParam2 = 2;
				return true;
		}
		*uParam2 = -1;
		return false;
	}
	*uParam2 = -1;
	return false;
}

bool func_147(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219) || iParam0 == 231) || iParam0 == 232) || iParam0 == 275) || iParam0 == 270) || iParam0 == 274) || iParam0 == 278) || iParam0 == 267) || iParam0 == 280) || iParam0 == 268) || iParam0 == 276) || iParam0 == 281) || iParam0 == 277) || iParam0 == 271) || iParam0 == 272) || iParam0 == 269) || iParam0 == 279) || iParam0 == 413) || iParam0 == 414)
	{
		return true;
	}
	return false;
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 39:
			return 0;
		case 40:
			return 1;
		case 43:
			return 0;
		case 44:
			return 1;
		case 45:
			return 2;
		case 46:
			return 3;
		case 47:
			return 4;
		case 48:
			return 5;
		case 49:
			return 6;
		case 50:
			return 7;
		case 51:
			return 8;
		case 52:
			return 9;
		case 53:
			return 10;
		case 54:
			return 11;
		case 55:
			return 12;
		case 56:
			return 13;
		case 57:
			return 14;
		case 58:
			return 15;
		case 59:
			return 16;
		case 60:
			return 17;
		case 61:
			return 18;
		case 62:
			return 19;
		case 63:
			return 20;
		case 64:
			return 21;
		case 65:
			return 22;
		case 66:
			return 23;
		case 67:
			return 24;
		case 82:
			return 0;
		case 83:
			return 1;
		case 90:
			return 0;
		case 91:
			return 1;
		case 97:
			return 0;
		case 98:
			return 1;
		case 99:
			return 2;
		case 100:
			return 3;
		case 101:
			return 4;
		case 102:
			return 5;
		case 103:
			return 6;
		case 104:
			if (func_160(UNK_0xD803B885F5E47A62(), 0))
			{
				return 14;
			}
			else if (func_160(UNK_0xD803B885F5E47A62(), 1))
			{
				return 13;
			}
			else if (func_160(UNK_0xD803B885F5E47A62(), 2))
			{
				return 8;
			}
			else if (func_160(UNK_0xD803B885F5E47A62(), 3))
			{
				return 12;
			}
			else if (func_160(UNK_0xD803B885F5E47A62(), 4))
			{
				return 11;
			}
			else if (func_160(UNK_0xD803B885F5E47A62(), 5))
			{
				return 10;
			}
			else if (func_160(UNK_0xD803B885F5E47A62(), 6))
			{
				return 9;
			}
			else if (func_160(UNK_0xD803B885F5E47A62(), 7))
			{
				return 7;
			}
			else if (func_160(UNK_0xD803B885F5E47A62(), 8))
			{
				return 15;
			}
			if (func_149(UNK_0xD803B885F5E47A62()))
			{
			}
			return -1;
		case 105:
			return 0;
		case 106:
			return 1;
		case 107:
			return 2;
		case 108:
			return 3;
		case 109:
			return 4;
		case 110:
			return 5;
		case 111:
			return 6;
		case 112:
			return 7;
		case 113:
			return 8;
		case 114:
			return 9;
	}
	return -1;
}

bool func_149(int iParam0)
{
	if ((((((((func_159(iParam0) || func_158(iParam0)) || func_157(iParam0)) || func_156(iParam0)) || func_155(iParam0)) || func_154(iParam0)) || func_153(iParam0)) || func_152(iParam0)) || func_150(iParam0))
	{
		return true;
	}
	return false;
}

bool func_150(int iParam0)
{
	if (iParam0 == func_151())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_322.f_2, false);
}

int func_151()
{
	return -1;
}

bool func_152(int iParam0)
{
	if (iParam0 == func_151())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_322.f_1, 31);
}

bool func_153(int iParam0)
{
	if (iParam0 == func_151())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_322.f_1, 30);
}

bool func_154(int iParam0)
{
	if (iParam0 == func_151())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_322.f_1, 29);
}

bool func_155(int iParam0)
{
	if (iParam0 == func_151())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_322.f_1, 28);
}

bool func_156(int iParam0)
{
	if (iParam0 == func_151())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_322.f_1, 27);
}

bool func_157(int iParam0)
{
	if (iParam0 == func_151())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_322.f_1, 26);
}

bool func_158(int iParam0)
{
	if (iParam0 == func_151())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_322.f_1, 25);
}

bool func_159(int iParam0)
{
	if (iParam0 == func_151())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_322.f_1, 24);
}

bool func_160(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 4:
			return func_159(iParam0);
		case 3:
			return func_158(iParam0);
		case 6:
			return func_157(iParam0);
		case 1:
			return func_156(iParam0);
		case 0:
			return func_155(iParam0);
		case 7:
			return func_154(iParam0);
		case 2:
			return func_153(iParam0);
		case 5:
			return func_152(iParam0);
		case 8:
			return func_150(iParam0);
		default:
			break;
	}
	return false;
}

int func_161(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = -1;
	*uParam2 = -1;
	switch (iParam0)
	{
		case 39:
			*uParam1 = 0;
			*uParam2 = 11;
			return 1;
		case 43:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		case 44:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		case 45:
			*uParam1 = 53;
			*uParam2 = 89;
			return 1;
		case 46:
			*uParam1 = 28;
			*uParam2 = 89;
			return 1;
		case 47:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		case 48:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		case 49:
			*uParam1 = 1;
			*uParam2 = 89;
			return 1;
		case 50:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		case 51:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		case 52:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		case 53:
			*uParam1 = 53;
			*uParam2 = 111;
			return 1;
		case 54:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		case 55:
			*uParam1 = 1;
			*uParam2 = 53;
			return 1;
		case 56:
			*uParam1 = 88;
			*uParam2 = 64;
			return 1;
		case 57:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		case 58:
			*uParam1 = 70;
			*uParam2 = 88;
			return 1;
		case 59:
			*uParam1 = 1;
			*uParam2 = 88;
			return 1;
		case 60:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		case 61:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		case 62:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		case 63:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		case 64:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		case 65:
			*uParam1 = 53;
			*uParam2 = 38;
			return 1;
		case 66:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		case 67:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		case 90:
			*uParam1 = 27;
			*uParam2 = 27;
			return 1;
		case 91:
			*uParam1 = 111;
			*uParam2 = 0;
			return 1;
		case 115:
			*uParam1 = 40;
			*uParam2 = 12;
			return 1;
		case 116:
			*uParam1 = 58;
			*uParam2 = 1;
			return 1;
		case 118:
			*uParam1 = 111;
			return 1;
		case 119:
			*uParam1 = 120;
			return 1;
		case 120:
			*uParam1 = 1;
			*uParam2 = 1;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_162(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		case 9:
			return 1;
		case 10:
			return 2;
		case 11:
			return 3;
		case 12:
			return 4;
		case 13:
			return 5;
		case 14:
			return 6;
		case 15:
			return 7;
		case 16:
			return 8;
		case 19:
			return 9;
		case 22:
			return 10;
		case 23:
			return 11;
		case 24:
			return 12;
		case 25:
			return 13;
		case 27:
			return 14;
		case 28:
			return 15;
		case 29:
			return 16;
		case 30:
			return 17;
		case 31:
			return 18;
		case 20:
			return 19;
		case 32:
			return 20;
		case 21:
			return 21;
		case 78:
			return 22;
		case 79:
			return 23;
		case 80:
			return 24;
		case 18:
			return 25;
		case 81:
			return 26;
		case 82:
			return 27;
		case 83:
			return 28;
		case 84:
			return 29;
		case 85:
			return 30;
		case 86:
			return 31;
		case 87:
			return 32;
		case 88:
			return 33;
		case 102:
			return 34;
		case 113:
			return 35;
		case 160:
			return 36;
		case 163:
			return 37;
		case 162:
			return 38;
		case 164:
			if (func_163(iParam0, 11, iParam1))
			{
				return 40;
			}
			return 39;
		case 199:
			return 41;
		case 201:
			return 42;
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				case 2:
					return 44;
				case 3:
					return 45;
				case 4:
					return 46;
				case 5:
					return 47;
				case 6:
					return 48;
				case 7:
					return 49;
				case 8:
					return 50;
				case 9:
					return 51;
				case 10:
					return 52;
				case 11:
					return 53;
				case 12:
					return 54;
				case 13:
					return 55;
				case 14:
					return 56;
				case 15:
					return 57;
				case 16:
					return 58;
				case 17:
					return 59;
				case 18:
					return 60;
				case 19:
					return 61;
				case 20:
					return 62;
				case 21:
					return 63;
				case 22:
					return 64;
				case 23:
					return 65;
				case 24:
					return 66;
				case 25:
					return 67;
				default:
					break;
			}
			return 43;
		case 171:
			return 68;
		case 187:
			return 69;
		case 177:
			return 70;
		case 183:
			return 71;
		case 185:
			return 72;
		case 184:
			return 73;
		case 188:
			return 74;
		case 173:
			return 75;
		case 178:
			return 76;
		case 186:
			return 77;
		case 215:
			return 78;
		case 217:
			return 79;
		case 224:
			return 80;
		case 237:
			return 81;
		case 243:
			return 82;
		case 244:
			return 83;
		case 245:
			return 84;
		case 253:
			return 85;
		case 254:
			return 86;
		case 256:
			return 87;
		case 257:
			return 88;
		case 258:
			return 89;
		case 276:
			if (func_163(iParam0, 16, iParam1))
			{
				return 91;
			}
			return 90;
		case 323:
			return 92;
		case 324:
			return 93;
		case 337:
			return 94;
		case 357:
			return 95;
		case 402:
			return 96;
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				case 2:
					return 98;
				case 3:
					return 99;
				case 4:
					return 100;
				case 5:
					return 101;
				case 6:
					return 102;
				case 7:
					return 103;
				case 8:
					return 104;
				default:
					break;
			}
			return 97;
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				case 2:
					return 106;
				case 3:
					return 107;
				case 4:
					return 108;
				case 5:
					return 109;
				case 6:
					return 110;
				case 7:
					return 111;
				case 8:
					return 112;
				case 9:
					return 113;
				case 10:
					return 114;
				default:
					break;
			}
			return 105;
		case 450:
			return 115;
		case 451:
			return 116;
		case 452:
			return 117;
		case 453:
			return 118;
		case 454:
			return 119;
		case 455:
			return 120;
		case 456:
			return 121;
		case 457:
			return 122;
		case 480:
			return 123;
		case 482:
			return 124;
		case 483:
			return 125;
		default:
			break;
	}
	return -1;
}

bool func_163(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_132(iParam0, -1);
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return true;
		}
		return false;
	}
	if (iParam0 == 276)
	{
		if (iParam2 == 2)
		{
			return true;
		}
		return false;
	}
	if (iParam0 == 95)
	{
		if (UNK_0xC2F420D189FDB329())
		{
			return true;
		}
		return false;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_43() && func_205())
		{
			return true;
		}
		return false;
	}
	if ((((iParam0 == 206 && UNK_0x8CD06866876216F2()) || (iParam0 == 207 && UNK_0x8CD06866876216F2())) || (iParam0 == 208 && UNK_0x8CD06866876216F2())) || (iParam0 == 209 && UNK_0x8CD06866876216F2()))
	{
		if (func_43())
		{
			return true;
		}
		return false;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return true;
	}
	if (iParam0 == 221 || iParam0 == 135)
	{
		if (iParam1 == 26)
		{
			return true;
		}
		return false;
	}
	if (func_208(iParam0))
	{
		if (Global_75375)
		{
			return true;
		}
		return false;
	}
	iVar1 = func_204(iVar0);
	if (iVar1 != -1)
	{
		if (func_202(func_203(iVar0)))
		{
			return true;
		}
		return false;
	}
	if (func_201(iParam0))
	{
		if (func_43())
		{
			if ((iParam0 == 205 && Global_262145.f_19751) || (iParam0 != 205 && Global_262145.f_19750))
			{
				return true;
			}
			return false;
		}
		return false;
	}
	if (func_200(iParam0))
	{
		if (func_191(iParam0))
		{
			return false;
		}
		return true;
	}
	iVar2 = func_190(iVar0);
	if (iVar2 != -1)
	{
		if (func_188(func_189(iVar0)))
		{
			return true;
		}
		return false;
	}
	iVar3 = func_187(iVar0);
	if (iVar3 > 0)
	{
		if (func_185(iVar0))
		{
			return true;
		}
		return false;
	}
	iVar4 = func_184(iVar0);
	if (iVar4 != -1)
	{
		if (func_182(iVar0))
		{
			return true;
		}
		return false;
	}
	iVar5 = func_181(iVar0);
	if (iVar5 != -1)
	{
		if (func_176(iVar0))
		{
			return true;
		}
		return false;
	}
	iVar6 = func_175(iVar0);
	if (iVar6 != -1)
	{
		if (func_168(iVar0))
		{
			return true;
		}
		return false;
	}
	if ((iVar0 == joaat("FIRETRUK") || iVar0 == joaat("BOXVILLE")) || iVar0 == joaat("STOCKADE"))
	{
		if (func_165(iVar0))
		{
			return false;
		}
		return true;
	}
	iVar7 = func_164(iVar0);
	if (iVar7 != -1)
	{
		if (func_165(iVar0))
		{
			return true;
		}
		return false;
	}
	return false;
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FIRETRUK"):
			return 0;
		case joaat("BURRITO2"):
			return 1;
		case joaat("BOXVILLE"):
			return 2;
		case joaat("STOCKADE"):
			return 3;
		case 1118611807:
			return 4;
		case 409049982:
			return 5;
		case -1756021720:
			return 6;
		case 2031587082:
			return 7;
		case 1693751655:
			return 8;
		case 987469656:
			return 9;
		case 872704284:
			return 10;
		case joaat("OUTLAW"):
			return 11;
		case 740289177:
			return 12;
		case -834353991:
			return 13;
		case 301304410:
			return 14;
		case 960812448:
			return 15;
		case 1284356689:
			return 16;
		case -208911803:
			return 17;
		case joaat("SENTINEL3"):
			return 18;
		case 722226637:
			return 19;
		case joaat("ELLIE"):
			return 20;
		case joaat("DEFILER"):
			return 21;
		case joaat("MANCHEZ"):
			return 22;
	}
	return -1;
}

bool func_165(int iParam0)
{
	bool bVar0;

	if (!Global_76622)
	{
		return false;
	}
	bVar0 = func_166(8833, -1, 0);
	switch (iParam0)
	{
		case joaat("FIRETRUK"):
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, false) || Global_262145.f_27796)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("BURRITO2"):
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, true) || Global_262145.f_27797)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("BOXVILLE"):
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 2) || Global_262145.f_27798)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("STOCKADE"):
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 3) || Global_262145.f_27799)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 1118611807:
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 4) || Global_262145.f_27800)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 409049982:
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 5) || Global_262145.f_27801)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case -1756021720:
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 6) || Global_262145.f_27802)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 2031587082:
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 7) || Global_262145.f_27803)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 1693751655:
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 8) || Global_262145.f_27804)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 987469656:
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 9) || Global_262145.f_27805)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 872704284:
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 10) || Global_262145.f_27806)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("OUTLAW"):
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 11) || Global_262145.f_27807)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 740289177:
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 12) || Global_262145.f_27808)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case -834353991:
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 13) || Global_262145.f_27809)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 301304410:
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 14) || Global_262145.f_27810)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 960812448:
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 15) || Global_262145.f_27811)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 1284356689:
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 16) || Global_262145.f_27812)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case -208911803:
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 17) || Global_262145.f_27813)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("SENTINEL3"):
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 18) || Global_262145.f_27814)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 722226637:
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 19) || Global_262145.f_27815)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("ELLIE"):
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 20) || Global_262145.f_27816)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("DEFILER"):
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 21) || Global_262145.f_27817)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("MANCHEZ"):
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 22) || Global_262145.f_27818)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
	}
	return false;
}

int func_166(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_167(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_167(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_95();
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

bool func_168(int iParam0)
{
	if (!Global_76622)
	{
		return false;
	}
	if (iParam0 == joaat("COGNOSCENTI") || iParam0 == joaat("COGNOSCENTI2"))
	{
		return false;
	}
	if (func_175(iParam0) != -1)
	{
		if (func_169(func_174(iParam0)))
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

int func_169(int iParam0)
{
	return func_170(func_173(iParam0), -1, -1);
}

int func_170(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_95();
	}
	iVar1 = func_172(iParam0, bParam1);
	iVar2 = func_171(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_171(int iParam0)
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

int func_172(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_95();
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

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 24963;
		case 9:
			return 24964;
		case 10:
			return 24966;
		case 11:
			return 24965;
		case 12:
			return 24968;
		case 13:
			return 25101;
		case 14:
			return 24967;
		case 15:
			return 25105;
		case 16:
			return 25106;
		case 20:
			return 25102;
		case 21:
			return 25103;
		case 22:
			return 25104;
		case 102:
			return 24969;
		case 17:
			return 25107;
		case 18:
			return 25108;
		case 19:
			return 25109;
		case 103:
			return 24972;
		case 104:
			return 24973;
		case 105:
			return 24974;
		case 106:
			return 24975;
		case 107:
			return 24976;
		case 108:
			return 24978;
		case 109:
			return 24980;
		case 110:
			return 24981;
		case 111:
			return 24982;
		case 112:
			return 24983;
		case 113:
			return 24984;
		case 114:
			return 24985;
		case 115:
			return 24986;
		case 116:
			return 24987;
		case 117:
			return 24988;
		case 118:
			return 24989;
		case 119:
			return 24990;
		case 120:
			return 24991;
		case 0:
			return 24992;
		case 1:
			return 24993;
		case 2:
			return 24994;
		case 3:
			return 24995;
		case 4:
			return 24996;
		case 5:
			return 24997;
		case 6:
			return 24998;
		case 7:
			return 24999;
		case 127:
			return 25117;
		case 128:
			return 25118;
		case 23:
			return 25119;
		case 139:
			return 25125;
		case 140:
			return 25127;
		case 141:
			return 25128;
		case 27:
			return 25129;
		case 160:
			return 25136;
		case 161:
			return 25139;
		case 162:
			return 25140;
		case 31:
			return 25141;
		case 181:
			return 25148;
		case 182:
			return 25151;
		case 183:
			return 25152;
		case 35:
			return 25153;
		case 193:
			return 25160;
		case 194:
			return 25161;
		case 39:
			return 25162;
		case 206:
			return 25168;
		case 207:
			return 25169;
		case 208:
			return 25170;
		case 209:
			return 25173;
		case 210:
			return 25174;
		case 43:
			return 25175;
		case 234:
			return 25179;
		case 235:
			return 25183;
		case 236:
			return 25184;
		case 47:
			return 25185;
		case 248:
			return 25188;
		case 249:
			return 25191;
		case 250:
			return 25192;
		case 51:
			return 25193;
		case 259:
			return 25198;
		case 260:
			return 25202;
		case 261:
			return 25203;
		case 55:
			return 25204;
		case 274:
			return 25209;
		case 275:
			return 25212;
		case 276:
			return 25213;
		case 59:
			return 25214;
		case 284:
			return 25217;
		case 285:
			return 25221;
		case 286:
			return 25222;
		case 63:
			return 25223;
		case 307:
			return 25228;
		case 308:
			return 24979;
		case 309:
			return 25229;
		case 310:
			return 25111;
		case 67:
			return 25230;
		case 68:
			return 25112;
		case 72:
			return 25231;
		case 73:
			return 25233;
		case 74:
			return 25234;
		case 75:
			return 25235;
		case 76:
			return 25236;
		case 77:
			return 25394;
		case 121:
			return 25395;
		case 122:
			return 25396;
		case 123:
			return 25397;
		case 124:
			return 25398;
		case 125:
			return 25399;
		case 126:
			return 25400;
	}
	switch (iParam0)
	{
		case 78:
			return 25244;
		case 79:
			return 25245;
		case 80:
			return 25246;
		case 81:
			return 25247;
		case 82:
			return 25248;
		case 83:
			return 25249;
		case 84:
			return 25250;
		case 85:
			return 25000;
		case 86:
			return 25251;
		case 87:
			return 25252;
		case 88:
			return 25253;
		case 89:
			return 25254;
		case 90:
			return 25255;
		case 91:
			return 25256;
		case 92:
			return 25257;
		case 93:
			return 25258;
		case 94:
			return 25259;
		case 95:
			return 25260;
		case 96:
			return 25261;
		case 97:
			return 25262;
		case 98:
			return 25263;
		case 99:
			return 25264;
		case 100:
			return 25225;
		case 101:
			return 25178;
		case 311:
			return 25265;
		case 312:
			return 25266;
		case 313:
			return 25267;
		case 314:
			return 25268;
		case 315:
			return 24977;
		case 316:
			return 25269;
		case 317:
			return 25270;
		case 318:
			return 25271;
		case 319:
			return 25272;
		case 320:
			return 25273;
		case 321:
			return 25274;
		case 322:
			return 25275;
		case 323:
			return 25276;
		case 324:
			return 25277;
		case 325:
			return 25278;
		case 326:
			return 25279;
		case 327:
			return 25280;
		case 328:
			return 25281;
		case 329:
			return 25282;
		case 330:
			return 25283;
		case 331:
			return 25284;
		case 332:
			return 25285;
		case 333:
			return 25286;
		case 334:
			return 25287;
		case 335:
			return 25288;
		case 336:
			return 25289;
		case 337:
			return 25290;
		case 338:
			return 25291;
		case 339:
			return 25292;
		case 340:
			return 25293;
		case 341:
			return 25294;
		case 342:
			return 25295;
		case 343:
			return 25296;
		case 344:
			return 25297;
		case 345:
			return 25298;
		case 346:
			return 25299;
		case 347:
			return 25300;
		case 348:
			return 25301;
		case 349:
			return 25302;
		case 350:
			return 25303;
		case 351:
			return 25304;
		case 352:
			return 25305;
		case 353:
			return 25306;
		case 354:
			return 25307;
		case 355:
			return 25308;
		case 356:
			return 25309;
		case 357:
			return 25310;
		case 358:
			return 25311;
		case 359:
			return 25312;
		case 360:
			return 25313;
		case 361:
			return 25314;
		case 362:
			return 25315;
		case 363:
			return 25316;
		case 364:
			return 25317;
		case 365:
			return 25318;
		case 366:
			return 25319;
		case 367:
			return 25320;
		case 368:
			return 25321;
		case 369:
			return 25322;
		case 370:
			return 25323;
		case 371:
			return 25324;
		case 372:
			return 25325;
		case 373:
			return 25326;
		case 374:
			return 25327;
		case 375:
			return 25328;
		case 376:
			return 25329;
		case 377:
			return 25330;
		case 378:
			return 25331;
		case 379:
			return 25332;
		case 380:
			return 25333;
		case 381:
			return 25334;
		case 382:
			return 25335;
		case 383:
			return 25336;
		case 384:
			return 25337;
		case 385:
			return 25338;
		case 386:
			return 25339;
		case 387:
			return 25340;
		case 388:
			return 25341;
		case 389:
			return 25342;
		case 390:
			return 25343;
		case 391:
			return 25344;
		case 392:
			return 25345;
		case 393:
			return 25346;
		case 394:
			return 25347;
		case 395:
			return 24970;
		case 396:
			return 25348;
		case 397:
			return 25349;
		case 398:
			return 25350;
		case 399:
			return 25351;
		case 400:
			return 25352;
		case 401:
			return 25353;
		case 402:
			return 25354;
		case 403:
			return 25355;
		case 404:
			return 25356;
		case 405:
			return 25357;
		case 406:
			return 25358;
		case 407:
			return 25359;
		case 408:
			return 25360;
		case 409:
			return 25361;
		case 410:
			return 25362;
		case 411:
			return 25363;
		case 412:
			return 25364;
		case 413:
			return 25365;
		case 414:
			return 25366;
		case 415:
			return 25367;
		case 416:
			return 25368;
		case 417:
			return 25369;
		case 418:
			return 25370;
		case 419:
			return 25371;
		case 420:
			return 25373;
		case 421:
			return 25374;
		case 422:
			return 25375;
		case 423:
			return 25377;
		case 424:
			return 25378;
		case 425:
			return 25379;
		case 426:
			return 25382;
		case 427:
			return 25383;
		case 428:
			return 25386;
		case 429:
			return 25390;
		case 430:
			return 25391;
		case 431:
			return 25392;
		case 432:
			return 25393;
	}
	switch (iParam0)
	{
		case 24:
			return 24971;
		case 25:
			return 25113;
		case 26:
			return 25114;
		case 28:
			return 25115;
		case 29:
			return 25116;
		case 30:
			return 25120;
		case 32:
			return 25121;
		case 33:
			return 25122;
		case 34:
			return 25123;
		case 36:
			return 25124;
		case 37:
			return 25126;
		case 38:
			return 25130;
		case 40:
			return 25131;
		case 41:
			return 25132;
		case 42:
			return 25133;
		case 44:
			return 25134;
		case 45:
			return 25137;
		case 46:
			return 25138;
		case 48:
			return 25142;
		case 49:
			return 25143;
		case 50:
			return 25144;
		case 52:
			return 25145;
		case 53:
			return 25146;
		case 54:
			return 25147;
		case 56:
			return 25149;
		case 57:
			return 25150;
		case 58:
			return 25154;
		case 60:
			return 25155;
		case 61:
			return 25156;
		case 62:
			return 25157;
		case 64:
			return 25158;
		case 65:
			return 25159;
		case 66:
			return 25163;
		case 69:
			return 25164;
		case 70:
			return 25165;
		case 71:
			return 25166;
		case 129:
			return 25167;
		case 130:
			return 25171;
		case 131:
			return 25172;
		case 132:
			return 25176;
		case 133:
			return 25177;
		case 134:
			return 25181;
		case 135:
			return 25182;
		case 136:
			return 25186;
		case 137:
			return 25187;
		case 138:
			return 25189;
		case 142:
			return 25190;
		case 143:
			return 25194;
		case 144:
			return 25195;
		case 145:
			return 25196;
		case 146:
			return 25197;
		case 147:
			return 25199;
		case 148:
			return 25200;
		case 149:
			return 25201;
		case 150:
			return 25205;
		case 151:
			return 25206;
		case 152:
			return 25207;
		case 153:
			return 25208;
		case 154:
			return 25210;
		case 155:
			return 25211;
		case 156:
			return 25215;
		case 157:
			return 25216;
		case 158:
			return 25218;
		case 159:
			return 25219;
		case 163:
			return 25220;
		case 164:
			return 25224;
		case 165:
			return 25226;
		case 166:
			return 25227;
		case 167:
			return 25232;
		case 168:
			return 25372;
		case 169:
			return 25376;
		case 170:
			return 25380;
		case 171:
			return 25381;
		case 172:
			return 25384;
		case 173:
			return 25385;
		case 174:
			return 25387;
		case 175:
			return 25388;
		case 176:
			return 25389;
		case 177:
			return 25407;
		case 178:
			return 25408;
		case 179:
			return 25409;
		case 180:
			return 25410;
		case 184:
			return 25411;
		case 185:
			return 25412;
		case 186:
			return 25413;
		case 187:
			return 25414;
		case 188:
			return 25415;
		case 189:
			return 25416;
		case 190:
			return 25417;
		case 191:
			return 25418;
		case 192:
			return 25419;
		case 195:
			return 25420;
		case 196:
			return 25421;
		case 197:
			return 25422;
		case 198:
			return 25423;
		case 199:
			return 25424;
		case 200:
			return 25425;
		case 201:
			return 25426;
		case 202:
			return 25427;
		case 203:
			return 25428;
		case 204:
			return 25429;
		case 205:
			return 25430;
		case 211:
			return 25431;
		case 212:
			return 25432;
		case 213:
			return 25433;
		case 214:
			return 25434;
		case 215:
			return 25435;
		case 216:
			return 25436;
		case 217:
			return 25437;
		case 218:
			return 25438;
		case 219:
			return 25439;
		case 220:
			return 25440;
		case 221:
			return 25441;
		case 222:
			return 25442;
		case 223:
			return 25443;
		case 224:
			return 25444;
		case 225:
			return 25445;
		case 226:
			return 25446;
		case 227:
			return 25447;
		case 228:
			return 25448;
		case 229:
			return 25449;
		case 230:
			return 25450;
		case 231:
			return 25451;
		case 232:
			return 25452;
		case 233:
			return 25453;
		case 237:
			return 25454;
		case 238:
			return 25455;
		case 239:
			return 25456;
		case 240:
			return 25457;
		case 241:
			return 25458;
		case 242:
			return 25459;
		case 243:
			return 25460;
		case 244:
			return 25461;
		case 245:
			return 25462;
		case 246:
			return 25463;
		case 247:
			return 25464;
		case 251:
			return 25465;
		case 252:
			return 25466;
		case 253:
			return 25467;
		case 254:
			return 25468;
		case 255:
			return 25469;
		case 256:
			return 25470;
		case 257:
			return 25471;
		case 258:
			return 25472;
		case 262:
			return 25473;
		case 263:
			return 25474;
		case 264:
			return 25475;
		case 265:
			return 25476;
		case 266:
			return 25477;
		case 267:
			return 25478;
		case 268:
			return 25479;
		case 269:
			return 25480;
		case 270:
			return 25481;
		case 271:
			return 25482;
		case 272:
			return 25483;
		case 273:
			return 25484;
		case 277:
			return 25485;
		case 278:
			return 25486;
		case 279:
			return 25487;
		case 280:
			return 25488;
		case 281:
			return 25489;
		case 282:
			return 25490;
		case 283:
			return 25491;
		case 287:
			return 25492;
		case 288:
			return 25493;
		case 289:
			return 25494;
		case 290:
			return 25495;
		case 291:
			return 25496;
		case 292:
			return 25497;
		case 293:
			return 25498;
		case 294:
			return 25499;
		case 295:
			return 25500;
		case 296:
			return 25501;
		case 297:
			return 25502;
		case 298:
			return 25503;
		case 299:
			return 25504;
		case 300:
			return 25505;
		case 301:
			return 25506;
		case 302:
			return 25507;
		case 303:
			return 25508;
		case 304:
			return 25509;
		case 305:
			return 25510;
		case 306:
			return 25511;
	}
	return 0;
}

int func_174(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CERBERUS"):
			return 8;
		case joaat("CERBERUS2"):
			return 9;
		case joaat("CERBERUS3"):
			return 10;
		case joaat("BRUTUS"):
			return 11;
		case joaat("BRUTUS2"):
			return 12;
		case joaat("BRUTUS3"):
			return 13;
		case joaat("ZR380"):
			return 14;
		case joaat("ZR3802"):
			return 15;
		case joaat("ZR3803"):
			return 16;
		case joaat("SCARAB"):
			return 20;
		case joaat("SCARAB2"):
			return 21;
		case joaat("SCARAB3"):
			return 22;
		case joaat("IMPERATOR"):
			return 17;
		case joaat("IMPERATOR2"):
			return 18;
		case joaat("IMPERATOR3"):
			return 19;
		case joaat("IMPALER"):
			return 102;
		case joaat("RATLOADER2"):
			return 103;
		case joaat("GLENDALE"):
			return 104;
		case joaat("SLAMVAN"):
			return 105;
		case joaat("DOMINATOR"):
			return 106;
		case joaat("ISSI3"):
			return 107;
		case joaat("GARGOYLE"):
			return 108;
	}
	return -1;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CERBERUS"):
			return 0;
		case joaat("CERBERUS2"):
			return 1;
		case joaat("CERBERUS3"):
			return 2;
		case joaat("BRUTUS"):
			return 3;
		case joaat("BRUTUS2"):
			return 4;
		case joaat("BRUTUS3"):
			return 5;
		case joaat("SCARAB"):
			return 6;
		case joaat("SCARAB2"):
			return 7;
		case joaat("SCARAB3"):
			return 8;
		case joaat("IMPERATOR"):
			return 9;
		case joaat("IMPERATOR2"):
			return 10;
		case joaat("IMPERATOR3"):
			return 11;
		case joaat("ZR380"):
			return 12;
		case joaat("ZR3802"):
			return 13;
		case joaat("ZR3803"):
			return 14;
		case joaat("RATLOADER2"):
			return 15;
		case joaat("GLENDALE"):
			return 16;
		case joaat("SLAMVAN"):
			return 17;
		case joaat("DOMINATOR"):
			return 18;
		case joaat("IMPALER"):
			return 19;
		case joaat("ISSI3"):
			return 20;
		case joaat("GARGOYLE"):
			return 21;
		default:
			break;
	}
	return -1;
}

bool func_176(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MULE4"):
			if (func_166(7230, -1, 0) >= func_180(iParam0) || Global_262145.f_24161)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("POUNDER2"):
			if (func_166(7230, -1, 0) >= func_180(iParam0) || Global_262145.f_24162)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("OPPRESSOR2"):
			if (func_177(22050, -1, -1) >= func_180(iParam0) || Global_262145.f_24163)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("PBUS2"):
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_281.f_7, true) || Global_262145.f_24165)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("PATRIOT2"):
			if (func_166(7228, -1, 0) >= func_180(iParam0) || Global_262145.f_24166)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("BLIMP3"):
			if (func_166(7228, -1, 0) >= func_180(iParam0) || Global_262145.f_24167)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("SCRAMJET"):
			if (func_170(22123, -1, -1) || Global_262145.f_24164)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
	}
	return false;
}

int func_177(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam1 == -1)
	{
		bParam1 = func_95();
	}
	iVar0 = 0;
	iVar1 = func_179(iParam0, bParam1);
	iVar2 = func_178(iParam0);
	if (0 != iVar1)
	{
		if (!UNK_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_178(int iParam0)
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

int func_179(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_95();
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

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MULE4"):
			return Global_262145.f_24168;
		case joaat("POUNDER2"):
			return Global_262145.f_24169;
		case joaat("OPPRESSOR2"):
			return Global_262145.f_24170;
		case joaat("PATRIOT2"):
			return Global_262145.f_24171;
		case joaat("BLIMP3"):
			return Global_262145.f_24172;
	}
	return 0;
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MULE4"):
			return 0;
		case joaat("POUNDER2"):
			return 1;
		case joaat("OPPRESSOR2"):
			return 2;
		case joaat("SCRAMJET"):
			return 3;
		case joaat("PBUS2"):
			return 4;
		case joaat("PATRIOT2"):
			return 5;
		case joaat("BLIMP3"):
			return 6;
	}
	return -1;
}

bool func_182(int iParam0)
{
	bool bVar0;

	if (!Global_76622)
	{
		return false;
	}
	bVar0 = func_166(5661, -1, 0);
	switch (iParam0)
	{
		case joaat("DELUXO"):
			return UNK_0xEAE0D21A50E6C7F4(bVar0, func_183(1));
		case joaat("AKULA"):
			return UNK_0xEAE0D21A50E6C7F4(bVar0, func_183(2));
		case joaat("RIOT2"):
			return UNK_0xEAE0D21A50E6C7F4(bVar0, func_183(6));
		case joaat("STROMBERG"):
			return UNK_0xEAE0D21A50E6C7F4(bVar0, func_183(7));
		case joaat("CHERNOBOG"):
			return UNK_0xEAE0D21A50E6C7F4(bVar0, func_183(10));
		case joaat("BARRAGE"):
			return UNK_0xEAE0D21A50E6C7F4(bVar0, func_183(11));
		case joaat("KHANJALI"):
			return UNK_0xEAE0D21A50E6C7F4(bVar0, func_183(12));
		case joaat("VOLATOL"):
			return UNK_0xEAE0D21A50E6C7F4(bVar0, func_183(13));
		case joaat("THRUSTER"):
			return UNK_0xEAE0D21A50E6C7F4(bVar0, func_183(15));
		default:
			break;
	}
	return false;
}

int func_183(int iParam0)
{
	switch (iParam0)
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
		default:
			break;
	}
	return -1;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DELUXO"):
			return 0;
		case joaat("AKULA"):
			return 1;
		case joaat("RIOT2"):
			return 2;
		case joaat("STROMBERG"):
			return 3;
		case joaat("CHERNOBOG"):
			return 4;
		case joaat("BARRAGE"):
			return 5;
		case joaat("KHANJALI"):
			return 6;
		case joaat("VOLATOL"):
			return 7;
		case joaat("THRUSTER"):
			return 8;
	}
	return -1;
}

bool func_185(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_76622)
	{
		return false;
	}
	iVar0 = func_187(iParam0);
	iVar1 = func_186();
	if (iVar1 >= iVar0)
	{
		return true;
	}
	return false;
}

int func_186()
{
	return func_166(6113, -1, 0);
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MICROLIGHT"):
			return Global_262145.f_22210;
		case joaat("ROGUE"):
			return Global_262145.f_22211;
		case joaat("ALPHAZ1"):
			return Global_262145.f_22212;
		case joaat("HAVOK"):
			return Global_262145.f_22213;
		case joaat("STARLING"):
			return Global_262145.f_22214;
		case joaat("MOLOTOK"):
			return Global_262145.f_22215;
		case joaat("TULA"):
			return Global_262145.f_22216;
		case joaat("BOMBUSHKA"):
			return Global_262145.f_22217;
		case joaat("HOWARD"):
			return Global_262145.f_22218;
		case joaat("MOGUL"):
			return Global_262145.f_22219;
		case joaat("PYRO"):
			return Global_262145.f_22220;
		case joaat("SEABREEZE"):
			return Global_262145.f_22221;
		case joaat("NOKOTA"):
			return Global_262145.f_22222;
		case joaat("HUNTER"):
			return Global_262145.f_22223;
		default:
			break;
	}
	return 0;
}

bool func_188(bool bParam0)
{
	if (!Global_76622)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(func_166(5463, -1, 0), bParam0);
}

bool func_189(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DUNE3"):
			return false;
		case joaat("HALFTRACK"):
			return true;
		case joaat("TRAILERSMALL2"):
			return 2;
		case joaat("APC"):
			return 3;
		case joaat("TAMPA3"):
			return 5;
		case joaat("OPPRESSOR"):
			return 7;
		default:
			break;
	}
	return 3;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DUNE3"):
			return 0;
		case joaat("HALFTRACK"):
			return 1;
		case joaat("TRAILERSMALL2"):
			return 2;
		case joaat("APC"):
			return 3;
		case joaat("TAMPA3"):
			return 4;
		case joaat("OPPRESSOR"):
			return 5;
	}
	return -1;
}

bool func_191(int iParam0)
{
	int iVar0;

	if (!Global_76622)
	{
		return false;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 187:
			iVar0 = 16;
			break;
		case 177:
			iVar0 = 12;
			break;
		case 185:
			iVar0 = 14;
			break;
		case 174:
			iVar0 = 9;
			break;
		case 171:
			iVar0 = 20;
			break;
		case 172:
			iVar0 = 7;
			break;
		case 173:
			iVar0 = 8;
			break;
		case 175:
			iVar0 = 10;
			break;
		case 176:
			iVar0 = 11;
			break;
		case 178:
			iVar0 = 5;
			break;
		case 179:
			iVar0 = 6;
			break;
		case 183:
			iVar0 = 21;
			break;
		case 180:
			iVar0 = 18;
			break;
		case 181:
			iVar0 = 22;
			break;
		case 182:
			iVar0 = 19;
			break;
		case 184:
			iVar0 = 13;
			break;
		case 186:
			iVar0 = 15;
			break;
		case 188:
			iVar0 = 17;
			break;
	}
	return func_192(iVar0);
}

bool func_192(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (func_199())
	{
		return false;
	}
	bVar0 = func_194(iParam0);
	iVar1 = iParam0;
	return UNK_0xEAE0D21A50E6C7F4(bVar0, func_193(iVar1));
}

int func_193(int iParam0)
{
	return (iParam0 % 32);
}

int func_194(int iParam0)
{
	int iVar0;

	iVar0 = func_166(func_195(iParam0), -1, 0);
	return iVar0;
}

int func_195(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = func_198(iVar0);
	if ((func_197() == 0 || func_196() == 0) || (func_197() == 999 && func_196() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 738;
			case 1:
				return 739;
		}
	}
	return 11511;
}

int func_196()
{
	return Global_30769;
}

int func_197()
{
	return Global_30768;
}

int func_198(int iParam0)
{
	return (iParam0 / 32);
}

bool func_199()
{
	return Global_1312856;
}

bool func_200(int iParam0)
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return true;
	}
	return false;
}

bool func_201(int iParam0)
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return true;
	}
	return false;
}

bool func_202(bool bParam0)
{
	if (!Global_76622)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(func_166(5326, -1, 0), bParam0);
}

bool func_203(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DUNE4"):
			return false;
		case joaat("DUNE5"):
			return false;
		case joaat("WASTELANDER"):
			return true;
		case joaat("BLAZER5"):
			return 2;
		case joaat("PHANTOM2"):
			return 3;
		case joaat("VOLTIC2"):
			return 4;
		case joaat("TECHNICAL2"):
			return 5;
		case joaat("BOXVILLE5"):
			return 6;
		case joaat("RUINER2"):
			return 7;
		default:
			break;
	}
	return false;
}

int func_204(int iParam0)
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

bool func_205()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	if (UNK_0xEAE0D21A50E6C7F4(Global_25, 5))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_25, true) || UNK_0xEAE0D21A50E6C7F4(Global_25, 3))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &bVar0, -1))
	{
		if (UNK_0xEAE0D21A50E6C7F4(bVar0, 5))
		{
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, true) || UNK_0xEAE0D21A50E6C7F4(bVar0, 3))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (UNK_0x0556D13739839AFD(false))
	{
		if (Global_150473.f_3)
		{
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
			if (UNK_0x6FB46C25CCB7E6D5(iVar2, &bVar1, -1))
			{
				if (UNK_0xEAE0D21A50E6C7F4(bVar1, 5))
				{
					return true;
				}
			}
		}
	}
	if (UNK_0xE0DC536BD2AC0301())
	{
		bVar3 = UNK_0x0A4C9A3D51EAE31F(866);
		if (UNK_0xEAE0D21A50E6C7F4(bVar3, true) || UNK_0xEAE0D21A50E6C7F4(bVar3, 3))
		{
			return true;
		}
	}
	if (UNK_0x61D9362D70D2DD56())
	{
		if (UNK_0x999A3BFD3E9B5D2C())
		{
			if (UNK_0xDA1BF71E2E8A1C89())
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &bVar4, -1);
				UNK_0x5D96D8530B3D0904(&bVar4, true);
				UNK_0x5D96D8530B3D0904(&bVar4, 3);
				UNK_0x5D96D8530B3D0904(&bVar4, 5);
				UNK_0x5D96D8530B3D0904(&Global_25, true);
				UNK_0x5D96D8530B3D0904(&Global_25, 3);
				UNK_0x5D96D8530B3D0904(&Global_25, 5);
				UNK_0xCDC520E5E48E63D9(joaat("SP_UNLOCK_EXCLUS_CONTENT"), bVar4, 1);
				if (UNK_0xE0DC536BD2AC0301())
				{
					bVar4 = UNK_0x0A4C9A3D51EAE31F(866);
					UNK_0x5D96D8530B3D0904(&bVar4, true);
					UNK_0x5D96D8530B3D0904(&bVar4, 3);
					UNK_0x9F2BE984EBF8A0F4(bVar4);
				}
				return true;
			}
		}
	}
	return false;
}

bool func_206(int iParam0, float fParam1)
{
	*fParam1 = -1f;
	switch (iParam0)
	{
		case joaat("DUNE5"):
			*fParam1 = 1f;
			break;
		case joaat("BOXVILLE5"):
			*fParam1 = 1f;
			break;
		case joaat("WASTELANDER"):
			*fParam1 = 1f;
			break;
		case joaat("ALPHAZ1"):
			*fParam1 = 0.2f;
			break;
		case joaat("BOMBUSHKA"):
			*fParam1 = 0.15f;
			break;
		case joaat("HOWARD"):
			*fParam1 = 0.3f;
			break;
		case joaat("HUNTER"):
			*fParam1 = 0.5f;
			break;
		case joaat("MICROLIGHT"):
			*fParam1 = 0.3f;
			break;
		case joaat("MOGUL"):
			*fParam1 = 0.4f;
			break;
		case joaat("MOLOTOK"):
			*fParam1 = 0.3f;
			break;
		case joaat("NOKOTA"):
			*fParam1 = 0.4f;
			break;
		case joaat("PYRO"):
			*fParam1 = 0.4f;
			break;
		case joaat("ROGUE"):
			*fParam1 = 0.4f;
			break;
		case joaat("SEABREEZE"):
			*fParam1 = 0.3f;
			break;
		case joaat("STARLING"):
			*fParam1 = 0.5f;
			break;
		case joaat("TULA"):
			*fParam1 = 0.15f;
			break;
		case joaat("KHANJALI"):
			*fParam1 = 0.6f;
			break;
		case joaat("BRUISER"):
			*fParam1 = 1f;
			break;
		case joaat("BRUISER2"):
			*fParam1 = 1f;
			break;
		case joaat("BRUISER3"):
			*fParam1 = 1f;
			break;
		case joaat("BRUTUS"):
			*fParam1 = 1f;
			break;
		case joaat("BRUTUS2"):
			*fParam1 = 1f;
			break;
		case joaat("BRUTUS3"):
			*fParam1 = 1f;
			break;
		case joaat("CERBERUS"):
			*fParam1 = 1f;
			break;
		case joaat("CERBERUS2"):
			*fParam1 = 1f;
			break;
		case joaat("CERBERUS3"):
			*fParam1 = 1f;
			break;
		case joaat("DEATHBIKE"):
			*fParam1 = 1f;
			break;
		case joaat("DEATHBIKE2"):
			*fParam1 = 1f;
			break;
		case joaat("DEATHBIKE3"):
			*fParam1 = 1f;
			break;
		case joaat("DOMINATOR4"):
			*fParam1 = 1f;
			break;
		case joaat("DOMINATOR5"):
			*fParam1 = 1f;
			break;
		case joaat("DOMINATOR6"):
			*fParam1 = 1f;
			break;
		case joaat("IMPALER2"):
			*fParam1 = 1f;
			break;
		case joaat("IMPALER3"):
			*fParam1 = 1f;
			break;
		case joaat("IMPALER4"):
			*fParam1 = 1f;
			break;
		case joaat("IMPERATOR"):
			*fParam1 = 1f;
			break;
		case joaat("IMPERATOR2"):
			*fParam1 = 1f;
			break;
		case joaat("IMPERATOR3"):
			*fParam1 = 1f;
			break;
		case joaat("ISSI4"):
			*fParam1 = 1f;
			break;
		case joaat("ISSI5"):
			*fParam1 = 1f;
			break;
		case joaat("ISSI6"):
			*fParam1 = 1f;
			break;
		case joaat("MONSTER3"):
			*fParam1 = 1f;
			break;
		case joaat("MONSTER4"):
			*fParam1 = 1f;
			break;
		case joaat("MONSTER5"):
			*fParam1 = 1f;
			break;
		case joaat("SCARAB"):
			*fParam1 = 1f;
			break;
		case joaat("SCARAB2"):
			*fParam1 = 1f;
			break;
		case joaat("SCARAB3"):
			*fParam1 = 1f;
			break;
		case joaat("SLAMVAN4"):
			*fParam1 = 1f;
			break;
		case joaat("SLAMVAN5"):
			*fParam1 = 1f;
			break;
		case joaat("SLAMVAN6"):
			*fParam1 = 1f;
			break;
		case joaat("ZR380"):
			*fParam1 = 1f;
			break;
		case joaat("ZR3802"):
			*fParam1 = 1f;
			break;
		case joaat("ZR3803"):
			*fParam1 = 1f;
			break;
	}
	return *fParam1 != -1f;
}

bool func_207(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SCARAB"):
		case joaat("BRUISER"):
		case joaat("CERBERUS"):
		case joaat("MONSTER3"):
		case joaat("DOMINATOR4"):
		case joaat("IMPALER2"):
		case joaat("IMPERATOR"):
		case joaat("ISSI4"):
		case joaat("DEATHBIKE"):
		case joaat("ZR380"):
		case joaat("SLAMVAN4"):
		case joaat("BRUTUS"):
		case joaat("IMPERATOR2"):
		case joaat("IMPERATOR3"):
		case joaat("DEATHBIKE3"):
		case joaat("DEATHBIKE2"):
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
			return true;
		default:
			break;
	}
	return false;
}

bool func_208(int iParam0)
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return true;
	}
	return false;
}

void func_209(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 64:
			UNK_0x5D96D8530B3D0904(bParam1, 4);
			break;
		case 67:
			UNK_0x5D96D8530B3D0904(bParam1, 4);
			break;
		case 72:
			UNK_0x5D96D8530B3D0904(bParam1, true);
			break;
		case 117:
			UNK_0x0674E58A79778E99(bParam1, true);
			break;
		case 49:
			UNK_0x0674E58A79778E99(bParam1, false);
			UNK_0x5D96D8530B3D0904(bParam1, true);
			break;
		case 118:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			UNK_0x0674E58A79778E99(bParam1, true);
			break;
		case 1:
			UNK_0x5D96D8530B3D0904(bParam1, true);
			break;
		case 119:
			UNK_0x0674E58A79778E99(bParam1, true);
			break;
		case 77:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			UNK_0x0674E58A79778E99(bParam1, true);
			UNK_0x0674E58A79778E99(bParam1, 2);
			break;
		case 120:
			UNK_0x0674E58A79778E99(bParam1, false);
			UNK_0x5D96D8530B3D0904(bParam1, true);
			UNK_0x0674E58A79778E99(bParam1, 2);
			break;
		case 130:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			break;
		case 132:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			break;
		case 135:
			UNK_0x0674E58A79778E99(bParam1, false);
			UNK_0x5D96D8530B3D0904(bParam1, true);
			break;
		case 137:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			break;
		case 141:
			UNK_0x5D96D8530B3D0904(bParam1, true);
			UNK_0x0674E58A79778E99(bParam1, 6);
			break;
		case 147:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			UNK_0x5D96D8530B3D0904(bParam1, true);
			UNK_0x5D96D8530B3D0904(bParam1, 2);
			UNK_0x5D96D8530B3D0904(bParam1, 3);
			UNK_0x5D96D8530B3D0904(bParam1, 4);
			UNK_0x5D96D8530B3D0904(bParam1, 5);
			UNK_0x5D96D8530B3D0904(bParam1, 6);
			UNK_0x5D96D8530B3D0904(bParam1, 7);
			UNK_0x5D96D8530B3D0904(bParam1, 8);
			break;
		case 203:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			UNK_0x0674E58A79778E99(bParam1, true);
			UNK_0x0674E58A79778E99(bParam1, 2);
			break;
		case 100:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			UNK_0x5D96D8530B3D0904(bParam1, true);
			UNK_0x5D96D8530B3D0904(bParam1, 2);
			break;
		case 170:
			UNK_0x0674E58A79778E99(bParam1, false);
			UNK_0x0674E58A79778E99(bParam1, true);
			UNK_0x0674E58A79778E99(bParam1, 2);
			break;
		case 160:
			UNK_0x5D96D8530B3D0904(bParam1, 15);
			break;
		case 161:
			UNK_0x5D96D8530B3D0904(bParam1, 15);
			break;
		case 192:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			UNK_0x5D96D8530B3D0904(bParam1, true);
			UNK_0x0674E58A79778E99(bParam1, 2);
			break;
		case 221:
			UNK_0x0674E58A79778E99(bParam1, false);
			UNK_0x5D96D8530B3D0904(bParam1, true);
			UNK_0x0674E58A79778E99(bParam1, 2);
			break;
		case 222:
			UNK_0x5D96D8530B3D0904(bParam1, true);
			break;
		case 172:
			UNK_0x5D96D8530B3D0904(bParam1, true);
			break;
		case 165:
			UNK_0x0674E58A79778E99(bParam1, false);
			UNK_0x5D96D8530B3D0904(bParam1, true);
			break;
		case 166:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			UNK_0x0674E58A79778E99(bParam1, true);
			break;
		case 139:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			break;
		case 104:
			UNK_0x5D96D8530B3D0904(bParam1, true);
			break;
		case 109:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			UNK_0x5D96D8530B3D0904(bParam1, true);
			UNK_0x5D96D8530B3D0904(bParam1, 2);
			break;
		case 227:
		case 252:
			UNK_0x5D96D8530B3D0904(bParam1, true);
			UNK_0x0674E58A79778E99(bParam1, 2);
			UNK_0x0674E58A79778E99(bParam1, 4);
			break;
		case 97:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			UNK_0x5D96D8530B3D0904(bParam1, true);
			break;
		case 52:
			UNK_0x5D96D8530B3D0904(bParam1, true);
			break;
		case 108:
			UNK_0x5D96D8530B3D0904(bParam1, true);
			break;
		case 237:
			UNK_0x5D96D8530B3D0904(bParam1, 9);
			break;
		case 238:
			UNK_0x0674E58A79778E99(bParam1, false);
			UNK_0x5D96D8530B3D0904(bParam1, true);
			UNK_0x5D96D8530B3D0904(bParam1, 2);
			break;
		case 233:
		case 234:
		case 235:
		case 236:
		case 240:
		case 241:
		case 263:
			if (Global_75375)
			{
				UNK_0x5D96D8530B3D0904(bParam1, 9);
			}
			break;
		case 271:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			UNK_0x5D96D8530B3D0904(bParam1, true);
			UNK_0x5D96D8530B3D0904(bParam1, 2);
			UNK_0x5D96D8530B3D0904(bParam1, 3);
			UNK_0x5D96D8530B3D0904(bParam1, 4);
			break;
		case 272:
			UNK_0x5D96D8530B3D0904(bParam1, 3);
			UNK_0x5D96D8530B3D0904(bParam1, 4);
			break;
		case 273:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			break;
		case 281:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			break;
		case 267:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			break;
		case 268:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			break;
		case 292:
			UNK_0x5D96D8530B3D0904(bParam1, 9);
			break;
		case 309:
			UNK_0x5D96D8530B3D0904(bParam1, 9);
			break;
		case 329:
			UNK_0x5D96D8530B3D0904(bParam1, 9);
			break;
		case 364:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			UNK_0x5D96D8530B3D0904(bParam1, true);
			UNK_0x5D96D8530B3D0904(bParam1, 9);
			break;
		case 360:
			UNK_0x5D96D8530B3D0904(bParam1, 9);
			break;
		case 401:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			UNK_0x5D96D8530B3D0904(bParam1, true);
			UNK_0x5D96D8530B3D0904(bParam1, 6);
			UNK_0x5D96D8530B3D0904(bParam1, 9);
			break;
		case 406:
			UNK_0x5D96D8530B3D0904(bParam1, 9);
			break;
		case 404:
			UNK_0x5D96D8530B3D0904(bParam1, 9);
			break;
		case 425:
		case 426:
		case 427:
			UNK_0x5D96D8530B3D0904(bParam1, 9);
			break;
		case 431:
		case 432:
		case 433:
			UNK_0x5D96D8530B3D0904(bParam1, 9);
			break;
		case 471:
			UNK_0x5D96D8530B3D0904(bParam1, 3);
			UNK_0x5D96D8530B3D0904(bParam1, 7);
			break;
		case 493:
		case 491:
			UNK_0x5D96D8530B3D0904(bParam1, false);
			UNK_0x5D96D8530B3D0904(bParam1, true);
			UNK_0x5D96D8530B3D0904(bParam1, 2);
			UNK_0x5D96D8530B3D0904(bParam1, 3);
			UNK_0x5D96D8530B3D0904(bParam1, 4);
			UNK_0x5D96D8530B3D0904(bParam1, 5);
			UNK_0x5D96D8530B3D0904(bParam1, 6);
			UNK_0x5D96D8530B3D0904(bParam1, 7);
			break;
		default:
			return;
	}
}

void func_210(char* sParam0)
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

void func_211(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5083[0] = iParam0;
	Global_22350.f_5083[1] = iParam1;
	Global_22350.f_5083[2] = iParam2;
	Global_22350.f_5083[3] = iParam3;
	Global_22350.f_5083[4] = iParam4;
}

void func_212(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_213(bool bParam0, bool bParam1)
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

void func_214()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		UNK_0x336D6E75517F233F(0.325f, 0.3f);
	}
}

bool func_215(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_70(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!UNK_0xE1DBBD6CE209517C(UNK_0xA30EC016B12C03E4()))
	{
		return false;
	}
	if (func_81(0))
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

bool func_216(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_73(&iVar0, 1, iParam1))
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
	bVar2 = func_217(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_217(var uParam0)
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

void func_218(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_219(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_220(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;

	if (UNK_0x8A22C4C08282BF26(joaat("CONTEXT_CONTROLLER")) < 1)
	{
	}
	if (UNK_0x991B1F0980C62628())
	{
		if (!*iParam0 == -1)
		{
			func_69(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
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
			*iParam0 = Global_42151[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_221(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam0 >= 312)
	{
		return false;
	}
	bVar0 = iParam1;
	if (bVar0 < 0 || bVar0 > 2)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_25177[iParam0], bVar0);
}

bool func_222(int iParam0)
{
	int iVar0;
	int iVar1[128];

	if (func_225(1, 1))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("ELEGY2");
			iVar0++;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[45 /*6*/], 3))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("DUNE2");
			iVar0++;
		}
	}
	if (func_43() && !UNK_0x8CD06866876216F2())
	{
		if (func_224(33, 0) && !func_223(1751306471))
		{
			iVar1[iVar0] = joaat("BLISTA3");
			iVar0++;
		}
		if (Global_111638.f_25068.f_3)
		{
			iVar1[iVar0] = joaat("STALION2");
			iVar0++;
		}
		if (Global_111638.f_25068.f_4)
		{
			iVar1[iVar0] = joaat("GAUNTLET2");
			iVar0++;
		}
		if (Global_111638.f_25068.f_5)
		{
			iVar1[iVar0] = joaat("DOMINATOR2");
			iVar0++;
		}
		if (Global_111638.f_25068.f_6)
		{
			iVar1[iVar0] = joaat("BUFFALO3");
			iVar0++;
		}
		if (Global_111638.f_25068.f_7)
		{
			iVar1[iVar0] = joaat("MARSHALL");
			iVar0++;
		}
	}
	if (iParam0 >= 0 && iParam0 < iVar0)
	{
		return iVar1[iParam0];
	}
	return false;
}

bool func_223(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_764)
	{
		if (Global_111638.f_7683.f_651[iVar0 /*14*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_224(int iParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], bParam1))
	{
		return true;
	}
	return false;
}

bool func_225(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668.f_1312, 2))
		{
			return true;
		}
	}
	if (UNK_0xC2F420D189FDB329())
	{
		if (!bParam1 || UNK_0x58424C49F8924842())
		{
			if (!UNK_0xBA301E03A078FA59() && !UNK_0x33A494591F2C1975())
			{
				return true;
			}
		}
	}
	if (bParam1)
	{
		if (UNK_0x9AE561F9BC3F06D8())
		{
			return false;
		}
	}
	if (UNK_0xC2F420D189FDB329())
	{
		return true;
	}
	return false;
}

int func_226()
{
	int iVar0;

	iVar0 = 0;
	if (func_225(1, 1))
	{
		if (!UNK_0x8CD06866876216F2())
		{
			iVar0++;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[45 /*6*/], 3))
	{
		if (!UNK_0x8CD06866876216F2())
		{
			iVar0++;
		}
	}
	if (func_43() && !UNK_0x8CD06866876216F2())
	{
		if (func_224(33, 0) && !func_223(1751306471))
		{
			iVar0++;
		}
		if (Global_111638.f_25068.f_3)
		{
			iVar0++;
		}
		if (Global_111638.f_25068.f_4)
		{
			iVar0++;
		}
		if (Global_111638.f_25068.f_5)
		{
			iVar0++;
		}
		if (Global_111638.f_25068.f_6)
		{
			iVar0++;
		}
		if (Global_111638.f_25068.f_7)
		{
			iVar0++;
		}
	}
	return iVar0;
}

bool func_227(float fParam0)
{
	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (fParam0 <= 0f)
		{
			return UNK_0x7D563EECE9515353(UNK_0x16F2683693E537C9()) > 0;
		}
		else
		{
			return UNK_0xFCF127F1F950630C(UNK_0x16F2683693E537C9(), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), fParam0) > 0;
		}
	}
	return false;
}

bool func_228(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_229()
{
	var uVar0[10];
	bool bVar11;
	bool bVar12;
	float fVar13;
	bool bVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	int iVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	int iVar29;
	vector3 vVar30;
	bool bVar51;
	float fVar52;
	bool bVar53;
	vector3 vVar54;
	vector3 vVar57;
	int iVar60;
	vector3 vVar61;
	bool bVar82;
	float fVar83;
	int iVar84;
	bool bVar85;
	struct<4> Var86;
	bool bVar90;
	int iVar91;
	struct<4> Var92;
	struct<60> Var113;
	int iVar191;
	int iVar192;
	bool bVar193;
	bool bVar194;
	float fVar195;
	int iVar196;
	struct<60> Var197;
	int iVar275;
	bool bVar276;
	bool bVar277;
	bool bVar278;
	int iVar279;
	bool bVar280;
	bool bVar281;
	bool bVar282;

	bVar11 = false;
	if ((((((((((((((((Local_402.f_29.f_80 && Local_402.f_29.f_69) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9())) && Local_402.f_2 == 0) && Local_402 != -1) && func_67(Local_402, 0)) && func_67(Local_402, 5)) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(5)) && !func_27(14)) && !Global_73825) && !func_228(1)) && !func_313()) || (((Local_402.f_3 > 1 && !func_228(0)) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9())) && !func_313()))
	{
		func_312(Local_402, &Local_546);
		fVar13 = 0f;
		bVar14 = "ANIM@APT_TRANS@GARAGE";
		vVar15 = { 198.3659f, -1020.273f, -100f };
		vVar18 = { vVar15 };
		vVar21 = { 198.9538f, -1026.13f, -100f };
		iVar24 = func_311(Local_402);
		switch (Local_402.f_3)
		{
			case 0:
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0) && !UNK_0x991B1F0980C62628())
				{
					Local_402.f_3 = 10;
					return;
				}
				if ((((((UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, true, 0) && (func_310(UNK_0xD9522BA9E27E1349(UNK_0x16F2683693E537C9()), Local_402.f_29.f_68, 90f) || UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))) && UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) && !UNK_0x36646919F20EAFFC(UNK_0x16F2683693E537C9())) && !UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) && !UNK_0x8B8AFAD7ED240B7F(UNK_0x16F2683693E537C9(), 2)) && (iVar24 == iLocal_672 || iVar24 == 145))
				{
					if (func_309())
					{
						bVar25 = true;
						if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
						{
							bVar12 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 1);
							if (UNK_0xC844350D5D58C99A(bVar12))
							{
								if (UNK_0xDF1306B443CD3D15(bVar12, 0))
								{
									bVar26 = UNK_0x134B62B726CEC8E6(bVar12);
									if (((((((((!func_64(bVar26) || func_63(bVar12)) || func_62(bVar12)) || !func_39(bVar26, 0)) || UNK_0x56E1CD81AE700E98(bVar12)) || ((!UNK_0x8E39AC3C76C8AA58(bVar26) && !UNK_0x7D8B2A8F9EA82DB7(bVar26)) && !UNK_0xD1CC995EE5EB1EC1(bVar26))) || bVar26 == joaat("MONSTER")) || UNK_0x4E861BC5B1EDA7BD(bVar12)) || UNK_0x6CFEA4CFD9C496C8(bVar12)) || (UNK_0x7EBBF23C1CD917AA(UNK_0x16F2683693E537C9()) && UNK_0x8A22C4C08282BF26(joaat("TAXI_PROCEDURAL")) > 0))
									{
										bVar25 = false;
									}
								}
								else
								{
									bVar25 = false;
								}
							}
						}
						else if (UNK_0x720928A330953059(bVar14))
						{
							UNK_0x3F423BF5B8125A50(bVar14);
							if (!UNK_0xB4AE0788C1587752(bVar14))
							{
								bVar25 = false;
							}
						}
						if (bVar25)
						{
							func_220(&iLocal_656, 3, "WEB_VEH_ENTER", 0, 0, 0, 0);
							bLocal_1034 = false;
							Local_402.f_3 = 1;
						}
						else if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
						{
							if (!UNK_0xFEBC1E4EC9E001F0() || func_219("WEB_VEH_INV"))
							{
								func_218("WEB_VEH_INV", -1);
								StringCopy(&cLocal_1023, "WEB_VEH_INV", 16);
								bVar11 = true;
							}
						}
					}
					else if (!UNK_0xFEBC1E4EC9E001F0() || func_219("WEB_VEH_FULL"))
					{
						func_218("WEB_VEH_FULL", -1);
						StringCopy(&cLocal_1023, "WEB_VEH_FULL", 16);
						bVar11 = true;
					}
				}
				break;
			case 1:
				if (!bLocal_1032)
				{
					if (!UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
					{
						bLocal_1032 = false;
						UNK_0x3F423BF5B8125A50(bVar14);
						if (UNK_0xB4AE0788C1587752(bVar14))
						{
							bLocal_1032 = true;
						}
					}
					else
					{
						UNK_0x8D17794CE3273D70(bVar14);
						bLocal_1032 = true;
					}
				}
				bVar27 = true;
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
				{
					bVar12 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 1);
					if (UNK_0xC844350D5D58C99A(bVar12))
					{
						if (UNK_0xDF1306B443CD3D15(bVar12, 0))
						{
							bVar28 = UNK_0x134B62B726CEC8E6(bVar12);
							if ((((((((!func_64(bVar28) || func_63(bVar12)) || func_62(bVar12)) || UNK_0x56E1CD81AE700E98(bVar12)) || ((!UNK_0x8E39AC3C76C8AA58(bVar28) && !UNK_0x7D8B2A8F9EA82DB7(bVar28)) && !UNK_0xD1CC995EE5EB1EC1(bVar28))) || bVar28 == joaat("MONSTER")) || UNK_0x4E861BC5B1EDA7BD(bVar12)) || UNK_0x6CFEA4CFD9C496C8(bVar12)) || (UNK_0x7EBBF23C1CD917AA(UNK_0x16F2683693E537C9()) && UNK_0x8A22C4C08282BF26(joaat("TAXI_PROCEDURAL")) > 0))
							{
								bVar27 = false;
							}
						}
						else
						{
							bVar27 = false;
						}
					}
				}
				if (((((((((UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, true, 0) && (func_310(UNK_0xD9522BA9E27E1349(UNK_0x16F2683693E537C9()), Local_402.f_29.f_68, 90f) || UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))) && UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) && func_309()) && !UNK_0x36646919F20EAFFC(UNK_0x16F2683693E537C9())) && !UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) && !UNK_0x8B8AFAD7ED240B7F(UNK_0x16F2683693E537C9(), 2)) && !func_313()) && (iVar24 == iLocal_672 || iVar24 == 145)) && bVar27)
				{
					if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()) || (UNK_0xB4AE0788C1587752(bVar14) || !UNK_0x720928A330953059(bVar14)))
					{
						if (func_215(iLocal_656, 1))
						{
							func_69(&iLocal_656);
							bLocal_1032 = false;
							Local_402.f_3 = 2;
						}
						func_307(47, 0);
						func_302(47, 0);
						Local_402.f_112 = UNK_0x0D1736C2E221BCEA(vVar15, "v_garagem_sp");
						if (UNK_0x31609A585163CBAC(Local_402.f_112))
						{
							if (!UNK_0xBD307E66C0669BFC(Local_402.f_112))
							{
								if ((UNK_0xF4CCC8CB6DE7F1AE() % 10) == 0)
								{
									UNK_0x0007C2367F4F23F3(Local_402.f_112);
								}
							}
							StringCopy(&Global_38153, "v_garagem_sp", 32);
						}
						if (!bLocal_1031 && !UNK_0xEB880D98B5988D0C())
						{
							if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
							{
								iVar29 = func_300(Local_402);
								func_61(&vVar30, iVar29);
								vVar18 = { vVar30 };
								UNK_0x9E632F16E887F781(vVar18, 20f, 0);
							}
							else
							{
								UNK_0x9E632F16E887F781(vVar21 + Vector(1f, 0f, 0f), 20f, 0);
							}
							bLocal_1031 = true;
						}
					}
				}
				else
				{
					if (bLocal_1031 && UNK_0xEB880D98B5988D0C())
					{
						UNK_0x486B4ADE317F0689();
						bLocal_1031 = false;
					}
					bLocal_1032 = false;
					func_69(&iLocal_656);
					UNK_0x8D17794CE3273D70(bVar14);
					Local_402.f_3 = 0;
				}
				break;
			case 2:
				func_307(47, 0);
				func_302(47, 0);
				UNK_0x4C7B0415764B64BA(8);
				Global_75441.f_577 = 1;
				Global_75441.f_578 = { Local_402.f_29.f_55 };
				iLocal_1012 = UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62());
				UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
				UNK_0x6E8BDA9057564534(UNK_0x16F2683693E537C9(), 0, 0);
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
				UNK_0x8BCB70EB440DED83(0);
				UNK_0xBFE31971E49FA500(0);
				UNK_0x34FABD75496259E4(UNK_0xD803B885F5E47A62());
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					bVar12 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
					if (UNK_0xC844350D5D58C99A(bVar12) && UNK_0xDF1306B443CD3D15(bVar12, 0))
					{
						if (func_310(UNK_0xD9522BA9E27E1349(bVar12), Local_402.f_29.f_68, 90f))
						{
							bLocal_1034 = false;
						}
						else
						{
							bLocal_1034 = true;
						}
						UNK_0xAA6B3A4292417750(bVar12, true, true, true, true, true, true, 0, false);
						UNK_0x75CFD6AD66ADFDD1(Local_546.f_86[0 /*6*/], 20f, 0);
						UNK_0x679C321F8CAA2CFA(Local_546.f_86[0 /*6*/], 20f, 0);
						UNK_0xD7AD2803AD9697F7(Local_546.f_86[0 /*6*/], 7f);
						UNK_0xA47B46945FF6DE74(bVar12, Local_546.f_86[0 /*6*/], 1, 0, 0, 1);
						if (bLocal_1034 && !UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
						{
							UNK_0xD8F6A53F4799FAFE(bVar12, (Local_546.f_86[0 /*6*/].f_3.f_2 + 180f));
						}
						else
						{
							UNK_0xD8F6A53F4799FAFE(bVar12, Local_546.f_86[0 /*6*/].f_3.f_2);
						}
						if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
						{
							UNK_0x83F619A03CDDE284(UNK_0x16F2683693E537C9(), 0, 0, -1);
							UNK_0xCC095276B3DD380E(UNK_0x16F2683693E537C9(), 1);
						}
						UNK_0xB9FD7450C0DAB575(bVar12, 1084227584 /* Float: 5f */);
					}
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
					func_294(1, 1, 1, 0, 0, 0);
					func_293(&(Local_546[1 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
					Local_402.f_3 = 3;
				}
				else
				{
					if (UNK_0xC844350D5D58C99A(bLocal_1027) && !UNK_0x437347B10A200C4B(bLocal_1027, 0))
					{
						if (UNK_0xAF6690C489CC6203(bLocal_1027) && UNK_0x9C77D2D0559097F0(bLocal_1027, 1))
						{
							UNK_0x046C362CF15F1935(&bLocal_1027);
						}
					}
					bLocal_1027 = UNK_0x728870EB733D12A1();
					if ((((UNK_0xC844350D5D58C99A(bLocal_1027) && UNK_0xDF1306B443CD3D15(bLocal_1027, 0)) && !UNK_0xAFB8495D36825275(UNK_0x134B62B726CEC8E6(bLocal_1027))) && !UNK_0xC41A9202669A24C4(UNK_0x134B62B726CEC8E6(bLocal_1027))) && !UNK_0xA7082C42B8809BF2(UNK_0x134B62B726CEC8E6(bLocal_1027)))
					{
						if (!UNK_0xAF6690C489CC6203(bLocal_1027))
						{
							UNK_0x73270B3C9CC833FD(bLocal_1027, false, 0);
						}
						if (UNK_0xC844350D5D58C99A(bLocal_1027) && UNK_0xDF1306B443CD3D15(bLocal_1027, 0))
						{
							if (!bVar51)
							{
								if (UNK_0x3D1053F9EB43B7AD(bLocal_1027, Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, true, 0))
								{
									bVar51 = true;
								}
							}
							if (!bVar51)
							{
								fVar52 = SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bLocal_1027, true), Local_546[0 /*15*/]);
								if (fVar52 < (5f * 5f))
								{
									bVar51 = true;
								}
							}
							if (bVar51)
							{
								bVar53 = func_49(24);
								if (func_292(&Local_776, 24))
								{
									func_287(&Local_776, func_474());
									if (UNK_0xC844350D5D58C99A(bVar53))
									{
										UNK_0xA954465BA6FDEFE2(&bVar53);
									}
								}
								if (Local_402 == 21)
								{
									UNK_0x536F1BE96C726C4B(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, false);
									func_285(bLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
								}
								else if (Local_402 == 22)
								{
									UNK_0x536F1BE96C726C4B(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, false);
									func_285(bLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
								}
								else if (Local_402 == 23)
								{
									UNK_0x536F1BE96C726C4B(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, false);
									func_285(bLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
								}
								UNK_0xB9FD7450C0DAB575(bLocal_1027, 1084227584 /* Float: 5f */);
							}
						}
					}
					else
					{
						bLocal_1027 = false;
					}
					vVar54 = { Local_402.f_29 * Vector(2f, 2f, 2f) + Local_402.f_29.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f) };
					vVar57 = { Local_402.f_29 * Vector(1f, 1f, 1f) + Local_402.f_29.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f) };
					if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), Local_402.f_29, vVar54.x, vVar54.y, Local_402.f_29.f_3.f_2, Local_402.f_29.f_6, 0, true, 0))
					{
						bLocal_1035 = "";
						switch (UNK_0x09AC81E49EA267F7(false, 2))
						{
							case 0:
								bLocal_1035 = "gar_open_1_left";
								break;
							case 1:
								bLocal_1035 = "gar_open_2_left";
								break;
						}
					}
					else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vVar54.x, vVar54.y, Local_402.f_29.f_2, vVar57.x, vVar57.y, Local_402.f_29.f_3.f_2, Local_402.f_29.f_6, 0, true, 0))
					{
						bLocal_1035 = "";
						switch (UNK_0x09AC81E49EA267F7(false, 2))
						{
							case 0:
								bLocal_1035 = "gar_open_1_left";
								break;
							case 1:
								bLocal_1035 = "gar_open_1_right";
								break;
						}
					}
					else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vVar57.x, vVar57.y, Local_402.f_29.f_2, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, true, 0))
					{
						bLocal_1035 = "";
						switch (UNK_0x09AC81E49EA267F7(false, 2))
						{
							case 0:
								bLocal_1035 = "gar_open_1_right";
								break;
							case 1:
								bLocal_1035 = "gar_open_2_right";
								break;
						}
					}
					else
					{
						bLocal_1035 = "";
						switch (UNK_0x09AC81E49EA267F7(false, 6))
						{
							case 0:
								bLocal_1035 = "gar_open_1_left";
								break;
							case 1:
								bLocal_1035 = "gar_open_1_right";
								break;
							case 2:
								bLocal_1035 = "gar_open_2_left";
								break;
							case 3:
								bLocal_1035 = "gar_open_2_right";
								break;
							case 4:
								bLocal_1035 = "gar_open_3_left";
								break;
							case 5:
								bLocal_1035 = "gar_open_3_right";
								break;
						}
					}
					UNK_0x75CFD6AD66ADFDD1(Local_546.f_73[0 /*4*/], 20f, 0);
					UNK_0x679C321F8CAA2CFA(Local_546.f_86[0 /*6*/], 20f, 0);
					UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), Local_546.f_73[0 /*4*/], 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), Local_546.f_73[0 /*4*/].f_3);
					iLocal_661 = UNK_0xE9744DB7B8CA6965(Local_546.f_73[0 /*4*/], 0f, 0f, Local_546.f_73[0 /*4*/].f_3, 2);
					UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), iLocal_661, bVar14, bLocal_1035, 8f, -8f, 0, 0, 1148846080, 0);
					func_294(1, 1, 1, 0, 0, 0);
					func_293(&(Local_546[0 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
					Local_402.f_3 = 4;
				}
				Local_402.f_112 = UNK_0x0D1736C2E221BCEA(vVar15, "v_garagem_sp");
				if (UNK_0x31609A585163CBAC(Local_402.f_112))
				{
					if (!UNK_0xBD307E66C0669BFC(Local_402.f_112))
					{
						UNK_0x0007C2367F4F23F3(Local_402.f_112);
					}
					StringCopy(&Global_38153, "v_garagem_sp", 32);
				}
				if (!bLocal_1031)
				{
					if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
					{
						iVar60 = func_300(Local_402);
						func_61(&vVar61, iVar60);
						vVar18 = { vVar61 };
						UNK_0x9E632F16E887F781(vVar18, 20f, 0);
					}
					else
					{
						UNK_0x9E632F16E887F781(vVar21, 20f, 0);
					}
				}
				UNK_0x5D96D8530B3D0904(&(Local_674.f_9), 25);
				func_281(198.0043f, -999.7775f, -100f, 50f, 0);
				func_114(Local_402);
				func_114(26);
				func_114(29);
				func_114(32);
				func_114(28);
				func_114(31);
				func_114(34);
				func_114(27);
				func_114(30);
				func_114(33);
				SYSTEM::SETTIMERA(0);
				iLocal_1033 = 0;
				break;
			case 4:
				bVar82 = true;
				if (!UNK_0xEB880D98B5988D0C())
				{
				}
				else if (UNK_0x68367101660E33F0())
				{
				}
				else
				{
					bVar82 = false;
				}
				if (UNK_0x31609A585163CBAC(Local_402.f_112))
				{
					if (!UNK_0xBD307E66C0669BFC(Local_402.f_112))
					{
						UNK_0x0007C2367F4F23F3(Local_402.f_112);
					}
					StringCopy(&Global_38153, "v_garagem_sp", 32);
				}
				else
				{
					Local_402.f_112 = UNK_0x0D1736C2E221BCEA(vVar15, "v_garagem_sp");
				}
				if (func_280())
				{
				}
				else
				{
					bVar82 = false;
				}
				if (UNK_0x9F4FE516EAACCFC5(Local_402.f_110) && UNK_0x9CF8D5C7090408A2(Local_402.f_110))
				{
					if (UNK_0xFA06B985B30FB0FC(Local_402.f_110))
					{
						bVar82 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_546[0 /*15*/].f_14 * 1000f))
					{
						bVar82 = false;
					}
				}
				else if (UNK_0x9F4FE516EAACCFC5(Local_402.f_111) && UNK_0x9CF8D5C7090408A2(Local_402.f_111))
				{
					if (UNK_0xFA06B985B30FB0FC(Local_402.f_111))
					{
						bVar82 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_546[0 /*15*/].f_14 * 1000f))
					{
						bVar82 = false;
					}
				}
				else
				{
					bVar82 = false;
				}
				if (UNK_0x69DF961355195C3C(iLocal_661))
				{
					fVar83 = UNK_0xA45992A6CE82FB43(iLocal_661);
					if (fVar83 < 0.4f)
					{
						bVar82 = false;
					}
				}
				if (bVar82)
				{
					UNK_0x53491B90E4FD0E56(800);
					Local_402.f_3 = 5;
				}
				break;
			case 5:
				if (UNK_0x757EF87A33649210())
				{
					iVar84 = UNK_0xD68EA767274B7444();
					UNK_0x4D7F4CC43D4D0DE3(iVar84, "GARAGE_DOOR_SCRIPTED_CLOSE", false, 1);
					UNK_0x6F6BA3FE885E6C91(iVar84, "hold", (2250f / 1000f));
					func_294(0, 1, 1, 0, 0, 0);
					UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
					if (UNK_0x9F4FE516EAACCFC5(Local_402.f_110))
					{
						UNK_0xE3BB8E05FCEB3FBE(Local_402.f_110, false);
						UNK_0x9A8DDC7C522F5BF5(Local_402.f_110, 0);
					}
					if (UNK_0x9F4FE516EAACCFC5(Local_402.f_111))
					{
						UNK_0xE3BB8E05FCEB3FBE(Local_402.f_111, false);
						UNK_0x9A8DDC7C522F5BF5(Local_402.f_111, 0);
					}
					if (UNK_0xC844350D5D58C99A(bLocal_1037))
					{
						UNK_0x20641932E5104B25(bLocal_1037, true, 0);
						UNK_0x1E9649458B15960F(bLocal_1037, false);
						bLocal_1037 = false;
					}
					UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
					UNK_0x4C7B0415764B64BA(8);
					if (UNK_0x69DF961355195C3C(iLocal_661))
					{
						UNK_0xB46854F2D1C7DFA9(iLocal_661);
					}
					iLocal_661 = -1;
					UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
					UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), 194.5394f, -1026.32f, -100f, 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 334.1665f);
					UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), true);
					UNK_0x2FB9A57162E54BAB(0f);
					UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
					SYSTEM::SETTIMERA(0);
					Local_402.f_3 = 6;
				}
				break;
			case 6:
				func_279(Local_402);
				if (UNK_0x757EF87A33649210() && SYSTEM::TIMERA() > 2250)
				{
					UNK_0x8D17794CE3273D70(bVar14);
					func_278();
					if (UNK_0xEB880D98B5988D0C())
					{
						UNK_0x486B4ADE317F0689();
					}
					UNK_0x82E51BCA72537B6C(800);
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
					UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
					SYSTEM::SETTIMERA(0);
					iLocal_1013 = 0;
					bLocal_1031 = false;
					Local_402.f_3 = 10;
				}
				break;
			case 3:
				func_279(Local_402);
				bVar85 = true;
				if (!UNK_0xEB880D98B5988D0C())
				{
				}
				else if (UNK_0x68367101660E33F0())
				{
				}
				else
				{
					bVar85 = false;
				}
				if (UNK_0x31609A585163CBAC(Local_402.f_112))
				{
					if (!UNK_0xBD307E66C0669BFC(Local_402.f_112))
					{
						UNK_0x0007C2367F4F23F3(Local_402.f_112);
					}
					StringCopy(&Global_38153, "v_garagem_sp", 32);
				}
				else
				{
					Local_402.f_112 = UNK_0x0D1736C2E221BCEA(vVar15, "v_garagem_sp");
				}
				if (func_280())
				{
				}
				else
				{
					bVar85 = false;
				}
				if (UNK_0x9F4FE516EAACCFC5(Local_402.f_110) && UNK_0x9CF8D5C7090408A2(Local_402.f_110))
				{
					if (UNK_0xFA06B985B30FB0FC(Local_402.f_110))
					{
						bVar85 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_546[1 /*15*/].f_14 * 1000f))
					{
						bVar85 = false;
					}
				}
				else if (UNK_0x9F4FE516EAACCFC5(Local_402.f_111) && UNK_0x9CF8D5C7090408A2(Local_402.f_111))
				{
					if (UNK_0xFA06B985B30FB0FC(Local_402.f_111))
					{
						bVar85 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_546[1 /*15*/].f_14 * 1000f))
					{
						bVar85 = false;
					}
				}
				else
				{
					bVar85 = false;
				}
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					Var86 = { 0f, 0f, 0f };
					Var86.f_3 = 0f;
					func_270(UNK_0x16F2683693E537C9(), Local_546.f_86[0 /*6*/], Local_546.f_66[0 /*3*/], ((Local_546[1 /*15*/].f_14 * 1000f) - 500f), Var86, 2, &fVar13);
				}
				if (bVar85)
				{
					func_278();
					SYSTEM::SETTIMERA(0);
					UNK_0x53491B90E4FD0E56(800);
					Local_402.f_3 = 35;
				}
				break;
			case 35:
				bVar90 = true;
				func_279(Local_402);
				if (IntToFloat(SYSTEM::TIMERA()) <= (Local_546.f_61[1] * 1000f))
				{
					bVar90 = false;
				}
				if (bVar90)
				{
					func_278();
					func_294(0, 1, 1, 0, 0, 0);
					UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
					if (UNK_0x9F4FE516EAACCFC5(Local_402.f_110))
					{
						UNK_0xE3BB8E05FCEB3FBE(Local_402.f_110, false);
						UNK_0x9A8DDC7C522F5BF5(Local_402.f_110, 0);
					}
					if (UNK_0x9F4FE516EAACCFC5(Local_402.f_111))
					{
						UNK_0xE3BB8E05FCEB3FBE(Local_402.f_111, false);
						UNK_0x9A8DDC7C522F5BF5(Local_402.f_111, 0);
					}
					if (UNK_0xC844350D5D58C99A(bLocal_1037))
					{
						UNK_0x20641932E5104B25(bLocal_1037, true, 0);
						UNK_0x1E9649458B15960F(bLocal_1037, false);
						bLocal_1037 = false;
					}
					UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
					UNK_0x4C7B0415764B64BA(8);
					if (UNK_0xEB880D98B5988D0C())
					{
						UNK_0x486B4ADE317F0689();
					}
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						bVar12 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
						if (UNK_0xC844350D5D58C99A(bVar12) && UNK_0xDF1306B443CD3D15(bVar12, 0))
						{
							iVar91 = func_300(Local_402);
							func_61(&Var92, iVar91);
							UNK_0xA47B46945FF6DE74(bVar12, Var92, 1, 0, 0, 1);
							UNK_0xD8F6A53F4799FAFE(bVar12, Var92.f_3);
							UNK_0x05CA0E7946B27A19(bVar12, 1);
							UNK_0x56FDC9ADE35F7DB0(bVar12, false, true, 0);
							UNK_0x0882E3DC0C991680(bVar12, 4);
							UNK_0x9FEF282C0366A41B(bVar12, 1, 0);
							UNK_0x9FEF282C0366A41B(bVar12, 0, 0);
							UNK_0x3E5CE368CD085FFA(bVar12, 0);
							UNK_0xAA6B3A4292417750(bVar12, false, false, false, false, false, false, 0, false);
							UNK_0x45F014B3D0466974(UNK_0x16F2683693E537C9(), bVar12, 0);
							UNK_0x1E9649458B15960F(bVar12, false);
							Var113.f_9 = 49;
							Var113.f_59 = 2;
							func_32(bVar12, &Var113);
							func_115(iVar91, &Var113, 0f, 0f, 0f, -1f, 145);
							func_30(iVar91, bVar12, 1);
							func_269(bVar12);
						}
						UNK_0x2FB9A57162E54BAB(0f);
						UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
					}
					iVar191 = UNK_0x263615A674FCA6E9(UNK_0x16F2683693E537C9(), &uVar0, -1);
					iVar192 = 0;
					while (iVar192 < iVar191)
					{
						if ((UNK_0xC844350D5D58C99A(uVar0[iVar192]) && !UNK_0xEB6A8945D1AC98A1(uVar0[iVar192])) && UNK_0xBFDE4EE64C4BF2D6(uVar0[iVar192], UNK_0x5D08BBCCCC2F43A4(UNK_0xD803B885F5E47A62())))
						{
							UNK_0x08841CDB215AE18F(uVar0[iVar192], 206.802f, -1018.011f, -100f, 0, 0, 1);
						}
						iVar192++;
					}
					SYSTEM::SETTIMERA(0);
					iLocal_1013 = 0;
					bLocal_1031 = false;
					UNK_0x82E51BCA72537B6C(800);
					Local_402.f_3 = 10;
				}
				break;
			case 10:
				if (SYSTEM::TIMERA() < 7000 || !Global_111638.f_32744.f_4800)
				{
					if (!Global_111638.f_32744.f_4800)
					{
						if (iLocal_1013 == 0)
						{
							func_218("CAR_GAR_05", -1);
							StringCopy(&cLocal_1023, "CAR_GAR_05", 16);
							bVar11 = true;
							if (SYSTEM::TIMERA() >= 7000)
							{
								SYSTEM::SETTIMERA(0);
								iLocal_1013++;
							}
						}
						else if (iLocal_1013 == 1)
						{
							func_218("CAR_GAR_06", -1);
							StringCopy(&cLocal_1023, "CAR_GAR_06", 16);
							bVar11 = true;
							if (SYSTEM::TIMERA() >= 7000)
							{
								SYSTEM::SETTIMERA(0);
								Global_111638.f_32744.f_4800 = 1;
							}
						}
					}
					else
					{
						func_218("CAR_GAR_EXIT", -1);
						StringCopy(&cLocal_1023, "CAR_GAR_EXIT", 16);
						bVar11 = true;
					}
				}
				else
				{
					Global_111638.f_32744.f_4800 = 1;
				}
				bVar193 = false;
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					if (iLocal_656 != -1)
					{
						func_69(&iLocal_656);
					}
					bVar12 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
					if (UNK_0xC844350D5D58C99A(bVar12) && UNK_0xDF1306B443CD3D15(bVar12, 0))
					{
						if (UNK_0x2F6DBDA9ACD7D3AB(bVar12) || UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
						{
							if (!(UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && !UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9())))
							{
								if ((((UNK_0x8A6BC5D9CAEACD0F(0, 71) != 0f || UNK_0xBFC0798A6E3417F9(0, 71)) || UNK_0x06F8112AA79C53D9(0, 71)) || UNK_0xD245978525608929(0, 71)) || UNK_0x7FEE810EE9E768EB(0, 71))
								{
									bVar193 = true;
								}
								if ((((UNK_0x8A6BC5D9CAEACD0F(0, 72) != 0f || UNK_0xBFC0798A6E3417F9(0, 72)) || UNK_0x06F8112AA79C53D9(0, 72)) || UNK_0xD245978525608929(0, 72)) || UNK_0x7FEE810EE9E768EB(0, 72))
								{
									bVar193 = true;
								}
							}
						}
					}
				}
				else
				{
					UNK_0x3F423BF5B8125A50(bVar14);
					if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 191.0491f, -1026.318f, -105f, 198.0297f, -1026.322f, -96.81246f, 2.0625f, 0, true, 0) && func_310(UNK_0xD9522BA9E27E1349(UNK_0x16F2683693E537C9()), 180f, 90f))
					{
						if (iLocal_655 != -1)
						{
							func_69(&iLocal_655);
						}
						if (iLocal_656 == -1)
						{
							func_220(&iLocal_656, 3, "WEB_VEH_EXIT", 0, 0, 0, 0);
						}
						if (!iLocal_655 != -1 && !iLocal_656 == -1)
						{
							if (func_215(iLocal_656, 1))
							{
								func_69(&iLocal_656);
								bVar193 = true;
							}
						}
					}
					else if (iLocal_656 != -1)
					{
						func_69(&iLocal_656);
					}
				}
				if (bLocal_1016)
				{
					bVar193 = true;
				}
				if (bVar193 && !func_268())
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) || bLocal_1016)
					{
						SYSTEM::SETTIMERA(0);
						UNK_0x9E632F16E887F781(Local_546.f_73[2 /*4*/], 20f, 0);
						if (iLocal_656 != -1)
						{
							func_69(&iLocal_656);
						}
						Local_402.f_3 = 12;
					}
					else if (UNK_0xB4AE0788C1587752(bVar14))
					{
						bLocal_1035 = "";
						switch (UNK_0x09AC81E49EA267F7(false, 6))
						{
							case 0:
								bLocal_1035 = "gar_open_1_left";
								break;
							case 1:
								bLocal_1035 = "gar_open_1_right";
								break;
							case 2:
								bLocal_1035 = "gar_open_2_left";
								break;
							case 3:
								bLocal_1035 = "gar_open_2_right";
								break;
							case 4:
								bLocal_1035 = "gar_open_3_left";
								break;
							case 5:
								bLocal_1035 = "gar_open_3_right";
								break;
						}
						iLocal_661 = UNK_0xE9744DB7B8CA6965(Local_546.f_73[1 /*4*/], 0f, 0f, Local_546.f_73[1 /*4*/].f_3, 2);
						UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), iLocal_661, bVar14, bLocal_1035, 8f, -8f, 0, 0, 1148846080, 0);
						func_294(1, 1, 1, 0, 0, 0);
						func_293(&(Local_546[2 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
						UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
						UNK_0x9E632F16E887F781(Local_546.f_73[2 /*4*/], 20f, 0);
						SYSTEM::SETTIMERA(0);
						if (iLocal_656 != -1)
						{
							func_69(&iLocal_656);
						}
						Local_402.f_3 = 11;
					}
					else if (!UNK_0x720928A330953059(bVar14))
					{
						UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), Local_546.f_73[1 /*4*/], 1, 0, 0, 1);
						UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), Local_546.f_73[1 /*4*/].f_3);
						func_294(1, 1, 1, 0, 0, 0);
						func_293(&(Local_546[2 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
						UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
						UNK_0x9E632F16E887F781(Local_546.f_73[2 /*4*/], 20f, 0);
						SYSTEM::SETTIMERA(0);
						if (iLocal_656 != -1)
						{
							func_69(&iLocal_656);
						}
						Local_402.f_3 = 11;
					}
				}
				break;
			case 11:
				bVar194 = true;
				if (!UNK_0xEB880D98B5988D0C())
				{
				}
				else if (UNK_0x68367101660E33F0())
				{
				}
				else
				{
					bVar194 = false;
				}
				if (func_280())
				{
				}
				else
				{
					bVar194 = false;
				}
				if (UNK_0x9F4FE516EAACCFC5(Local_402.f_110) && UNK_0x9CF8D5C7090408A2(Local_402.f_110))
				{
					if (UNK_0xFA06B985B30FB0FC(Local_402.f_110))
					{
						bVar194 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_546[2 /*15*/].f_14 * 1000f))
					{
						bVar194 = false;
					}
				}
				else if (UNK_0x9F4FE516EAACCFC5(Local_402.f_111) && UNK_0x9CF8D5C7090408A2(Local_402.f_111))
				{
					if (UNK_0xFA06B985B30FB0FC(Local_402.f_111))
					{
						bVar194 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_546[2 /*15*/].f_14 * 1000f))
					{
						bVar194 = false;
					}
				}
				else
				{
					bVar194 = false;
				}
				if (UNK_0x69DF961355195C3C(iLocal_661))
				{
					fVar195 = UNK_0xA45992A6CE82FB43(iLocal_661);
					if (fVar195 < 0.4f)
					{
						bVar194 = false;
					}
				}
				if (bVar194)
				{
					iLocal_1013 = 0;
					bLocal_1031 = false;
					UNK_0x53491B90E4FD0E56(800);
					SYSTEM::SETTIMERA(0);
					Local_402.f_3 = 13;
				}
				break;
			case 12:
				UNK_0x38C3A68D7861DCFD(0, 75, 1);
				if (SYSTEM::TIMERA() > 500)
				{
					iVar196 = func_267();
					if ((iVar196 == 21 || iVar196 == 22) || iVar196 == 23)
					{
						Var197.f_9 = 49;
						Var197.f_59 = 2;
						func_115(iVar196, &Var197, 0f, 0f, 0f, -1f, 145);
						func_117(iVar196);
					}
					else if (iVar196 != -1)
					{
						if (!bLocal_1016)
						{
							func_480(iVar196, 0);
							func_117(iVar196);
						}
					}
					UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
					UNK_0x6E8BDA9057564534(UNK_0x16F2683693E537C9(), 0, 0);
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
					UNK_0x8D17794CE3273D70(bVar14);
					UNK_0x53491B90E4FD0E56(800);
					Local_402.f_3 = 13;
				}
				break;
			case 13:
				if (UNK_0x757EF87A33649210())
				{
					iVar275 = UNK_0xD68EA767274B7444();
					UNK_0x4D7F4CC43D4D0DE3(iVar275, "GARAGE_DOOR_SCRIPTED_CLOSE", false, 1);
					UNK_0x6F6BA3FE885E6C91(iVar275, "hold", (2250f / 1000f));
					UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
					if (UNK_0x9F4FE516EAACCFC5(Local_402.f_110))
					{
						UNK_0xE3BB8E05FCEB3FBE(Local_402.f_110, false);
						UNK_0x9A8DDC7C522F5BF5(Local_402.f_110, 0);
					}
					if (UNK_0x9F4FE516EAACCFC5(Local_402.f_111))
					{
						UNK_0xE3BB8E05FCEB3FBE(Local_402.f_111, false);
						UNK_0x9A8DDC7C522F5BF5(Local_402.f_111, 0);
					}
					if (UNK_0xC844350D5D58C99A(bLocal_1037))
					{
						UNK_0x20641932E5104B25(bLocal_1037, true, 0);
						UNK_0x1E9649458B15960F(bLocal_1037, false);
						bLocal_1037 = false;
					}
					UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
					UNK_0x4C7B0415764B64BA(8);
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if (!bLocal_1016)
						{
							bVar12 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
							if (UNK_0xC844350D5D58C99A(bVar12) && UNK_0xDF1306B443CD3D15(bVar12, 0))
							{
								UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
								UNK_0xA47B46945FF6DE74(bVar12, Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
								UNK_0xD8F6A53F4799FAFE(bVar12, Local_402.f_29.f_77[1]);
								UNK_0xB9FD7450C0DAB575(bVar12, 1084227584 /* Float: 5f */);
							}
						}
					}
					else
					{
						if (UNK_0x69DF961355195C3C(iLocal_661))
						{
							UNK_0xB46854F2D1C7DFA9(iLocal_661);
						}
						iLocal_661 = -1;
						UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
						UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
						UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), Local_402.f_29.f_77[1]);
					}
					UNK_0x2FB9A57162E54BAB(0f);
					UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
					SYSTEM::SETTIMERA(0);
					Local_402.f_3 = 14;
				}
				break;
			case 14:
				if (UNK_0x757EF87A33649210() && SYSTEM::TIMERA() > 2250)
				{
					bVar276 = true;
					if (bLocal_1016)
					{
						UNK_0x523BCC9DC80CD82F(bLocal_1017);
						if (UNK_0xB87F6CF6E5628C67(bLocal_1017))
						{
							bVar277 = UNK_0x122AAB0B1D6F55AD(bLocal_1017, Local_402.f_29.f_70[0 /*3*/], Local_402.f_29.f_77[0], true, true, false);
							if (bLocal_1017 == joaat("WINDSOR"))
							{
								UNK_0x446EA2500F021666(bVar277, false);
							}
							if (UNK_0xC844350D5D58C99A(bVar277) && UNK_0xDF1306B443CD3D15(bVar277, 0))
							{
								UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), bVar277, -1);
								UNK_0xCCD53AC1B5D5E456(bVar277, 0f);
								UNK_0x71199B01895C6202(bLocal_1017);
								if (func_118(bLocal_1017))
								{
									switch (bLocal_1017)
									{
										case joaat("MARSHALL"):
											UNK_0x446EA2500F021666(bVar277, bLocal_651);
											break;
									}
								}
								UNK_0x046C362CF15F1935(&bVar277);
							}
							bLocal_1016 = false;
						}
						else
						{
							bVar276 = false;
						}
					}
					if (!UNK_0xEB880D98B5988D0C())
					{
					}
					else if (UNK_0x68367101660E33F0())
					{
					}
					else
					{
						bVar276 = false;
					}
					if (bVar276)
					{
						if (UNK_0xC844350D5D58C99A(bLocal_1027) && UNK_0xDF1306B443CD3D15(bLocal_1027, 0))
						{
							bVar278 = func_49(24);
							if (func_292(&Local_776, 24))
							{
								func_287(&Local_776, func_474());
								if (UNK_0xC844350D5D58C99A(bVar278))
								{
									UNK_0xA954465BA6FDEFE2(&bVar278);
								}
							}
							if (Local_402 == 21)
							{
								UNK_0x536F1BE96C726C4B(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, false);
								UNK_0xA47B46945FF6DE74(bLocal_1027, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
								UNK_0xD8F6A53F4799FAFE(bLocal_1027, 154.4846f);
								func_285(bLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
							}
							else if (Local_402 == 22)
							{
								UNK_0x536F1BE96C726C4B(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, false);
								UNK_0xA47B46945FF6DE74(bLocal_1027, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
								UNK_0xD8F6A53F4799FAFE(bLocal_1027, 319.6985f);
								func_285(bLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
							}
							else if (Local_402 == 23)
							{
								UNK_0x536F1BE96C726C4B(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, false);
								UNK_0xA47B46945FF6DE74(bLocal_1027, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
								UNK_0xD8F6A53F4799FAFE(bLocal_1027, 270.8741f);
								func_285(bLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
							}
							UNK_0xB9FD7450C0DAB575(bLocal_1027, 1084227584 /* Float: 5f */);
						}
						if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
						{
							bVar12 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
							if (UNK_0xC844350D5D58C99A(bVar12) && UNK_0xDF1306B443CD3D15(bVar12, 0))
							{
								UNK_0xA47B46945FF6DE74(bVar12, Local_546.f_66[1 /*3*/], 1, 0, 0, 1);
								UNK_0xD8F6A53F4799FAFE(bVar12, Local_402.f_29.f_77[0]);
								UNK_0xB9FD7450C0DAB575(bVar12, 1084227584 /* Float: 5f */);
								if ((bLocal_1017 == joaat("MONSTER") || bLocal_1017 == joaat("MARSHALL")) || bLocal_1017 == joaat("RHINO"))
								{
									UNK_0x626D5ADA3EFAE431(bVar12, 0);
								}
								else
								{
									UNK_0x626D5ADA3EFAE431(bVar12, 1);
								}
								if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
								{
									UNK_0x83F619A03CDDE284(UNK_0x16F2683693E537C9(), 0, 0, -1);
									UNK_0xCC095276B3DD380E(UNK_0x16F2683693E537C9(), 1);
								}
								UNK_0x3E5CE368CD085FFA(bVar12, 1);
								func_235(func_474(), &bVar12, 3, 1);
							}
							UNK_0x82E51BCA72537B6C(800);
							func_294(1, 1, 1, 0, 0, 0);
							func_293(&(Local_546[3 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
							bLocal_1034 = false;
							iLocal_1036 = -1;
							Local_402.f_3 = 15;
						}
						else
						{
							UNK_0x8D17794CE3273D70(bVar14);
							func_278();
							UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
							if (UNK_0x9F4FE516EAACCFC5(Local_402.f_110))
							{
								UNK_0xE3BB8E05FCEB3FBE(Local_402.f_110, false);
								UNK_0x9A8DDC7C522F5BF5(Local_402.f_110, 0);
							}
							if (UNK_0x9F4FE516EAACCFC5(Local_402.f_111))
							{
								UNK_0xE3BB8E05FCEB3FBE(Local_402.f_111, false);
								UNK_0x9A8DDC7C522F5BF5(Local_402.f_111, 0);
							}
							if (UNK_0xC844350D5D58C99A(bLocal_1037))
							{
								UNK_0x20641932E5104B25(bLocal_1037, true, 0);
								UNK_0x1E9649458B15960F(bLocal_1037, false);
								bLocal_1037 = false;
							}
							UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
							UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
							UNK_0x4C7B0415764B64BA(8);
							UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
							UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
							UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), Local_402.f_29.f_77[1]);
							UNK_0x82E51BCA72537B6C(800);
							SYSTEM::SETTIMERA(0);
							func_281(198.0043f, -999.7775f, -100f, 50f, 0);
							UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
							Local_402.f_3 = 16;
						}
						if (Local_402.f_3 != 16)
						{
							UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
						}
						UNK_0x8BCB70EB440DED83(0);
						UNK_0xBFE31971E49FA500(0);
						SYSTEM::SETTIMERA(0);
						UNK_0x2FB9A57162E54BAB(0f);
						UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
						iVar279 = UNK_0x263615A674FCA6E9(UNK_0x16F2683693E537C9(), &uVar0, -1);
						bVar280 = false;
						while (bVar280 < iVar279)
						{
							if ((UNK_0xC844350D5D58C99A(uVar0[bVar280]) && !UNK_0xEB6A8945D1AC98A1(uVar0[bVar280])) && UNK_0xBFDE4EE64C4BF2D6(uVar0[bVar280], UNK_0x5D08BBCCCC2F43A4(UNK_0xD803B885F5E47A62())))
							{
								if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
								{
									bVar12 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
									if ((UNK_0xC844350D5D58C99A(bVar12) && UNK_0xDF1306B443CD3D15(bVar12, 0)) && UNK_0xD6DF381716822EFE(bVar12) > bVar280)
									{
										UNK_0xF821F915BC24D246(uVar0[bVar280], bVar12, bVar280);
									}
								}
								else
								{
									UNK_0x08841CDB215AE18F(uVar0[bVar280], Local_402.f_29.f_70[1 /*3*/], 0, 0, 1);
								}
							}
							bVar280++;
						}
						UNK_0x4C7B0415764B64BA(8);
						iLocal_1033 = 0;
					}
				}
				break;
			case 15:
				bVar281 = true;
				if (!UNK_0xEB880D98B5988D0C())
				{
				}
				else if (UNK_0x68367101660E33F0())
				{
				}
				else
				{
					bVar281 = false;
				}
				if (func_280())
				{
				}
				else
				{
					bVar281 = false;
				}
				if (UNK_0x9F4FE516EAACCFC5(Local_402.f_110) && UNK_0x9CF8D5C7090408A2(Local_402.f_110))
				{
					if (UNK_0xFA06B985B30FB0FC(Local_402.f_110))
					{
						bVar281 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_546[3 /*15*/].f_14 * 1000f))
					{
						bVar281 = false;
					}
				}
				else if (UNK_0x9F4FE516EAACCFC5(Local_402.f_111) && UNK_0x9CF8D5C7090408A2(Local_402.f_111))
				{
					if (UNK_0xFA06B985B30FB0FC(Local_402.f_111))
					{
						bVar281 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_546[3 /*15*/].f_14 * 1000f))
					{
						bVar281 = false;
					}
				}
				else
				{
					bVar281 = false;
				}
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					func_270(UNK_0x16F2683693E537C9(), Local_546.f_86[1 /*6*/], Local_546.f_66[1 /*3*/], ((Local_546[3 /*15*/].f_14 * 1000f) - 500f), Local_546.f_73[2 /*4*/], 3, &fVar13);
				}
				if (iLocal_1036 < 1 && func_234(UNK_0x16F2683693E537C9(), 198.0043f, -999.7775f, -100f, 1) > 55f)
				{
					if (iLocal_1036 == 0)
					{
						func_281(198.0043f, -999.7775f, -100f, 50f, 0);
					}
					iLocal_1036++;
				}
				if (bVar281)
				{
					SYSTEM::SETTIMERA(0);
					Local_402.f_3 = 16;
				}
				else
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
				}
				break;
			case 16:
				bVar282 = true;
				if (IntToFloat(SYSTEM::TIMERA()) <= (Local_546.f_61[3] * 1000f))
				{
					bVar282 = false;
				}
				if (bVar282)
				{
					Local_402.f_3 = 17;
				}
				break;
			case 17:
				if (UNK_0x31609A585163CBAC(Local_402.f_112))
				{
					UNK_0x25BB71BA267FE042(Local_402.f_112);
				}
				StringCopy(&Global_38153, "", 32);
				if (UNK_0xEB880D98B5988D0C())
				{
					UNK_0x486B4ADE317F0689();
				}
				func_233(47, 1);
				func_231(47, 1);
				Global_75441.f_577 = 0;
				if (UNK_0x757EF87A33649210() || UNK_0xD0BB2359EC70FC37())
				{
					UNK_0x82E51BCA72537B6C(250);
				}
				SYSTEM::SETTIMERA(0);
				UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				if (UNK_0x9F4FE516EAACCFC5(Local_402.f_110))
				{
					UNK_0xE3BB8E05FCEB3FBE(Local_402.f_110, false);
					UNK_0x9A8DDC7C522F5BF5(Local_402.f_110, 0);
				}
				if (UNK_0x9F4FE516EAACCFC5(Local_402.f_111))
				{
					UNK_0xE3BB8E05FCEB3FBE(Local_402.f_111, false);
					UNK_0x9A8DDC7C522F5BF5(Local_402.f_111, 0);
				}
				if (UNK_0xC844350D5D58C99A(bLocal_1037))
				{
					UNK_0x20641932E5104B25(bLocal_1037, true, 0);
					UNK_0x1E9649458B15960F(bLocal_1037, false);
					bLocal_1037 = false;
				}
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					bVar12 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
					if (UNK_0xC844350D5D58C99A(bVar12) && UNK_0xDF1306B443CD3D15(bVar12, 0))
					{
						UNK_0xA47B46945FF6DE74(bVar12, Local_546.f_73[2 /*4*/], 1, 0, 0, 1);
						UNK_0xD8F6A53F4799FAFE(bVar12, Local_546.f_73[2 /*4*/].f_3);
						UNK_0xB9FD7450C0DAB575(bVar12, 1084227584 /* Float: 5f */);
						UNK_0x2FB9A57162E54BAB(0f);
						UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
					}
				}
				UNK_0x8BCB70EB440DED83(1);
				UNK_0xBFE31971E49FA500(1);
				func_294(0, 1, 1, 0, 0, 0);
				UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
				if (iLocal_1012 > 0)
				{
					UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), iLocal_1012, 0);
					UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
				}
				if (((UNK_0xC844350D5D58C99A(bLocal_1027) && UNK_0xAF6690C489CC6203(bLocal_1027)) && UNK_0x9C77D2D0559097F0(bLocal_1027, 0)) && bLocal_1027 != func_49(24))
				{
					UNK_0x046C362CF15F1935(&bLocal_1027);
				}
				UNK_0x0674E58A79778E99(&(Local_674.f_9), 25);
				bLocal_1031 = false;
				Local_402.f_3 = 18;
				break;
			case 18:
				if (UNK_0x0F1CCD77290EE12F())
				{
					Local_402.f_3 = 0;
				}
				break;
		}
	}
	else
	{
		if (Global_75441.f_577)
		{
			func_233(47, 1);
			func_231(47, 1);
			Global_75441.f_577 = 0;
		}
		Local_402.f_3 = 0;
		if (iLocal_656 != -1)
		{
			func_69(&iLocal_656);
		}
	}
	if (Global_75441.f_577)
	{
		UNK_0xE1F2A9D550245608();
		func_230();
		func_76(0);
		UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
		UNK_0x558EC149EB2BC0A2(2, 202);
		UNK_0x38C3A68D7861DCFD(0, 37, 1);
		UNK_0x38C3A68D7861DCFD(0, 157, 1);
		UNK_0x38C3A68D7861DCFD(0, 158, 1);
		UNK_0x38C3A68D7861DCFD(0, 159, 1);
		UNK_0x38C3A68D7861DCFD(0, 160, 1);
		UNK_0x38C3A68D7861DCFD(0, 161, 1);
		UNK_0x38C3A68D7861DCFD(0, 162, 1);
		UNK_0x38C3A68D7861DCFD(0, 163, 1);
		UNK_0x38C3A68D7861DCFD(0, 164, 1);
		UNK_0x38C3A68D7861DCFD(0, 165, 1);
		UNK_0x38C3A68D7861DCFD(0, 14, 1);
		UNK_0x38C3A68D7861DCFD(0, 15, 1);
		UNK_0x38C3A68D7861DCFD(0, 53, 1);
		UNK_0x38C3A68D7861DCFD(0, 54, 1);
		UNK_0x38C3A68D7861DCFD(0, 140, 1);
		UNK_0x38C3A68D7861DCFD(0, 141, 1);
		UNK_0x38C3A68D7861DCFD(0, 142, 1);
		UNK_0x38C3A68D7861DCFD(0, 143, 1);
		UNK_0x38C3A68D7861DCFD(0, 143, 1);
		UNK_0x38C3A68D7861DCFD(0, 47, 1);
		UNK_0x38C3A68D7861DCFD(0, 38, 1);
		UNK_0x38C3A68D7861DCFD(0, 22, 1);
		UNK_0x38C3A68D7861DCFD(0, 102, 1);
		UNK_0x38C3A68D7861DCFD(0, 69, 1);
		UNK_0x38C3A68D7861DCFD(0, 70, 1);
		UNK_0x38C3A68D7861DCFD(0, 68, 1);
		UNK_0x38C3A68D7861DCFD(0, 92, 1);
		UNK_0x38C3A68D7861DCFD(0, 99, 1);
		UNK_0x38C3A68D7861DCFD(0, 115, 1);
		UNK_0x38C3A68D7861DCFD(0, 46, 1);
		UNK_0x38C3A68D7861DCFD(0, 25, 1);
	}
	if (!bVar11 && Local_402.f_2 == 0)
	{
		if (UNK_0xFEBC1E4EC9E001F0())
		{
			if (!UNK_0xEA6BC48857E0AC4C(&cLocal_1023))
			{
				if ((((func_219("WEB_VEH_INV") || func_219("WEB_VEH_FULL")) || func_219("CAR_GAR_05")) || func_219("CAR_GAR_06")) || func_219("CAR_GAR_EXIT"))
				{
					UNK_0xA37A90C62806D848(1);
				}
				StringCopy(&cLocal_1023, "", 16);
			}
		}
	}
}

void func_230()
{
	Global_22211.f_6 = 1;
}

void func_231(int iParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = { func_232(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_37208[Var0.f_1]), Var0);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_37208[Var0.f_1]), Var0);
	}
}

struct<2> func_232(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;

	iVar0 = iParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 7)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_233(int iParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = { func_232(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_37200[Var0.f_1]), Var0);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_37200[Var0.f_1]), Var0);
	}
}

float func_234(bool bParam0, vector3 vParam1, int iParam4)
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

void func_235(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;

	if ((func_25(iParam0) && UNK_0xC844350D5D58C99A(*bParam1)) && UNK_0xDF1306B443CD3D15(*bParam1, 0))
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
			func_31(*bParam1, iParam0);
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
		if (UNK_0x67303E186EA6C9A0(*bParam1) >= 0 && func_238(*bParam1, 0, &uVar0))
		{
			func_34(bParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
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
				Global_111638.f_20113[iParam0 /*43*/].f_31 = func_237(*bParam1);
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
				func_236(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_111638.f_20113[iParam0 /*43*/].f_1));
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
				func_236(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_111638.f_20113[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_236(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;

	iVar0 = 0;
	while (func_142(iVar0, &uVar2, &iVar1, &iVar6, &iVar7))
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

float func_237(bool bParam0)
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

bool func_238(bool bParam0, bool bParam1, var uParam2)
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
	if ((!func_265(bVar0, bParam1, uParam2) && !func_264(UNK_0xD803B885F5E47A62())) && !func_247(bParam0))
	{
		return false;
	}
	if (func_264(UNK_0xD803B885F5E47A62()))
	{
		if (func_246(bVar0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bVar1 = false;
	if (func_245(UNK_0xD803B885F5E47A62()) && (UNK_0xAFB8495D36825275(bVar0) || UNK_0xC41A9202669A24C4(bVar0)))
	{
		bVar1 = true;
	}
	if (((UNK_0x56E1CD81AE700E98(bParam0) && !func_243(bParam0)) && !bVar1) && !(func_242(UNK_0x134B62B726CEC8E6(bParam0)) && func_239(UNK_0xD803B885F5E47A62())))
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
		if ((func_62(bParam0) && UNK_0x134B62B726CEC8E6(bParam0) != joaat("SENTINEL2")) && UNK_0x134B62B726CEC8E6(bParam0) != joaat("ISSI2"))
		{
			*uParam2 = 2;
			return false;
		}
	}
	return true;
}

bool func_239(bool bParam0)
{
	if (bParam0 != func_151())
	{
		if (func_241(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_240(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

int func_240(int iParam0)
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

bool func_241(bool bParam0, bool bParam1, bool bParam2)
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

bool func_242(int iParam0)
{
	if (((iParam0 == joaat("MULE4") || iParam0 == joaat("POUNDER2")) || iParam0 == joaat("SPEEDO4")) || iParam0 == joaat("TERBYTE"))
	{
		return true;
	}
	return false;
}

bool func_243(bool bParam0)
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
			if (func_244(UNK_0xD803B885F5E47A62()))
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

bool func_244(bool bParam0)
{
	if (bParam0 != func_151())
	{
		if (func_241(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_240(Global_2425662[bParam0 /*421*/].f_310.f_5) == 13;
			}
		}
	}
	return false;
}

bool func_245(bool bParam0)
{
	if (bParam0 != func_151())
	{
		if (func_241(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_240(Global_2425662[bParam0 /*421*/].f_310.f_5) == 7;
			}
		}
	}
	return false;
}

bool func_246(bool bParam0)
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

bool func_247(bool bParam0)
{
	if (func_263(UNK_0xD803B885F5E47A62()) || func_262(UNK_0xD803B885F5E47A62()))
	{
		if (func_248(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_248(bool bParam0)
{
	if ((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return false;
	}
	if (func_251(bParam0, 0))
	{
		return true;
	}
	if (UNK_0x30F813723591D02E(bParam0, "Player_Vehicle"))
	{
		if (UNK_0x1E2DFB0EF4BB4566(bParam0, "Player_Vehicle") == UNK_0xE86C2816EDC6CAF0(UNK_0xD803B885F5E47A62()))
		{
			if (func_249(bParam0))
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

bool func_249(bool bParam0)
{
	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	if (func_250(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		return true;
	}
	return false;
}

bool func_250(int iParam0)
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

bool func_251(bool bParam0, bool bParam1)
{
	switch (UNK_0x134B62B726CEC8E6(bParam0))
	{
		case joaat("TECHNICAL"):
		case joaat("INSURGENT"):
			if (func_253(UNK_0x134B62B726CEC8E6(bParam0), 0))
			{
				if (Global_2537071.f_301 == bParam0)
				{
					return true;
				}
				else if (func_252(bParam0) != -1 && !bParam1)
				{
					return true;
				}
			}
			break;
	}
	return false;
}

int func_252(bool bParam0)
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

bool func_253(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_261(iParam0, 0))
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
			return func_260();
		case joaat("SABREGT"):
			if (Global_262145.f_14219)
			{
				return func_259();
			}
			break;
		case joaat("TORNADO"):
		case joaat("TORNADO2"):
		case joaat("TORNADO3"):
			if (Global_262145.f_14220)
			{
				return func_259();
			}
			break;
		case joaat("VIRGO3"):
			if (Global_262145.f_14218)
			{
				return func_259();
			}
			break;
		case joaat("MINIVAN"):
			if (Global_262145.f_14221)
			{
				return func_259();
			}
			break;
		case joaat("SLAMVAN"):
			if (Global_262145.f_14223)
			{
				return func_259();
			}
			break;
		case joaat("SULTAN"):
		case joaat("BANSHEE"):
			return func_258();
		case joaat("COMET2"):
			if (Global_262145.f_18669)
			{
				return func_257();
			}
			break;
		case joaat("DIABLOUS"):
			if (Global_262145.f_18671)
			{
				return func_257();
			}
			break;
		case joaat("FCR"):
			if (Global_262145.f_18675)
			{
				return func_257();
			}
			break;
		case joaat("ELEGY2"):
			if (Global_262145.f_18672)
			{
				return func_257();
			}
			break;
		case joaat("NERO"):
			if (Global_262145.f_18679)
			{
				return func_257();
			}
			break;
		case joaat("ITALIGTB"):
			if (Global_262145.f_18677)
			{
				return func_257();
			}
			break;
		case joaat("SPECTER"):
			if (Global_262145.f_18682)
			{
				return func_257();
			}
			break;
		case joaat("TECHNICAL"):
			if (Global_262145.f_20625)
			{
				return func_256();
			}
			break;
		case joaat("INSURGENT"):
			if (Global_262145.f_20626)
			{
				return func_256();
			}
			break;
		case joaat("RATLOADER"):
		case joaat("RATLOADER2"):
			return func_255();
		case joaat("GLENDALE"):
			if (func_255() || func_254())
			{
				return true;
			}
			break;
		case joaat("IMPALER"):
			return func_255();
		case joaat("ISSI3"):
			return func_255();
		case joaat("GARGOYLE"):
			return func_255();
		case joaat("DOMINATOR"):
			return func_255();
		case joaat("DOMINATOR2"):
			return func_255();
		case joaat("IMPERATOR"):
			return func_255();
		case joaat("IMPERATOR2"):
			return func_255();
		case joaat("IMPERATOR3"):
			return func_255();
		case joaat("DEATHBIKE"):
			return func_255();
		case joaat("DEATHBIKE2"):
			return func_255();
		case joaat("DEATHBIKE3"):
			return func_255();
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
			return func_255();
		case joaat("YOUGA2"):
			if (Global_262145.f_28524)
			{
				return func_254();
			}
			break;
		case 722226637:
			if (Global_262145.f_28874)
			{
				return func_254();
			}
			break;
		case joaat("MANANA"):
			if (Global_262145.f_28523)
			{
				return func_254();
			}
			break;
		case joaat("PEYOTE"):
			if (Global_262145.f_28873)
			{
				return func_254();
			}
			break;
		case joaat("YOSEMITE"):
			if (Global_262145.f_28872)
			{
				return func_254();
			}
			break;
	}
	return false;
}

bool func_254()
{
	return UNK_0xC146D5FBD23C6954(1815791016);
}

bool func_255()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPCHRISTMAS2018"));
}

bool func_256()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPGUNRUNNING"));
}

bool func_257()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPIMPORTEXPORT"));
}

bool func_258()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPJANUARY2016"));
}

bool func_259()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPLOWRIDER2"));
}

bool func_260()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPLOWRIDER"));
}

bool func_261(int iParam0, int iParam1)
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

bool func_262(bool bParam0)
{
	if (bParam0 != func_151())
	{
		if (func_241(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_151())
			{
				return func_240(Global_2425662[bParam0 /*421*/].f_310.f_5) == 5;
			}
		}
	}
	return false;
}

bool func_263(bool bParam0)
{
	if (bParam0 != func_151())
	{
		if (func_241(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_151())
			{
				return func_240(Global_2425662[bParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return false;
}

bool func_264(bool bParam0)
{
	if (bParam0 != func_151())
	{
		if (func_241(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_240(Global_2425662[bParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return false;
}

bool func_265(bool bParam0, bool bParam1, var uParam2)
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
	if (func_245(UNK_0xD803B885F5E47A62()) && (UNK_0xAFB8495D36825275(bParam0) || UNK_0xC41A9202669A24C4(bParam0)))
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
		if (func_266(bParam0))
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

bool func_266(bool bParam0)
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

int func_267()
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (UNK_0xC844350D5D58C99A(bVar0) && UNK_0xDF1306B443CD3D15(bVar0, 0))
		{
			if (bVar0 == Global_75441.f_484[21])
			{
				return 21;
			}
			if (bVar0 == Global_75441.f_484[26])
			{
				return 26;
			}
			if (bVar0 == Global_75441.f_484[29])
			{
				return 29;
			}
			if (bVar0 == Global_75441.f_484[32])
			{
				return 32;
			}
			if (bVar0 == Global_75441.f_484[22])
			{
				return 22;
			}
			if (bVar0 == Global_75441.f_484[27])
			{
				return 27;
			}
			if (bVar0 == Global_75441.f_484[30])
			{
				return 30;
			}
			if (bVar0 == Global_75441.f_484[33])
			{
				return 33;
			}
			if (bVar0 == Global_75441.f_484[23])
			{
				return 23;
			}
			if (bVar0 == Global_75441.f_484[28])
			{
				return 28;
			}
			if (bVar0 == Global_75441.f_484[31])
			{
				return 31;
			}
			if (bVar0 == Global_75441.f_484[34])
			{
				return 34;
			}
		}
	}
	return -1;
}

bool func_268()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_269(bool bParam0)
{
	if ((UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0)) && bParam0 == Global_76346)
	{
		Global_111638.f_32744.f_5588 = 0;
		Global_76346 = 0;
	}
}

int func_270(bool bParam0, struct<4> Param1, int iParam5, var uParam6, vector3 vParam7, float fParam10, struct<4> Param11, int iParam15, float fParam16)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	vector3 vVar13;
	bool bVar16;
	bool bVar17;
	bool bVar18;

	vVar0 = { Param1 };
	vVar3 = { Param1.f_3 };
	vVar6 = { vParam7 };
	vVar9 = { Param1.f_3 };
	if (iLocal_1033 == 0)
	{
		iVar12 = UNK_0x6937EA2286828455(bParam0, 0);
		bLocal_1037 = iVar12;
		UNK_0x05CA0E7946B27A19(bLocal_1037, 1);
		UNK_0x71EDC33E5A423750(bLocal_1037, 1);
		UNK_0xB9FD7450C0DAB575(bLocal_1037, 1084227584 /* Float: 5f */);
		UNK_0x56FDC9ADE35F7DB0(bLocal_1037, true, true, 0);
		if (UNK_0x7A649D473D0B6339(bParam0))
		{
			UNK_0x83F619A03CDDE284(bParam0, 0, 0, -1);
			UNK_0xCC095276B3DD380E(bParam0, 1);
		}
		vVar13 = { UNK_0x68F4C0EC296D3901(bLocal_1037, true) };
		fLocal_1038 = (vVar13.z - vVar0.z);
		UNK_0xA47B46945FF6DE74(bLocal_1037, vVar0 + Vector(-10f, 0f, 0f), 1, 0, 0, 1);
		if (UNK_0xDF1306B443CD3D15(bLocal_1037, 0))
		{
			UNK_0x0882E3DC0C991680(bLocal_1037, 3);
		}
		iLocal_1039 = UNK_0x1C0640BA9A7327B3();
		iLocal_1033 = 1;
	}
	if (iLocal_1033 == 1)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_1037) && UNK_0xDF1306B443CD3D15(bLocal_1037, 0))
		{
			bVar16 = SYSTEM::TO_FLOAT(iLocal_1039);
			bVar17 = (bVar16 + fParam10);
			bVar18 = func_277(SYSTEM::TO_FLOAT(UNK_0x1C0640BA9A7327B3()), bVar16, bVar17);
			bVar18 = (bVar18 - bVar16);
			bVar18 = (bVar18 / fParam10);
			if (iParam15 == 1)
			{
				bVar18 = func_276(bVar18);
			}
			else if (iParam15 == 2)
			{
				bVar18 = func_275(bVar18);
			}
			else if (iParam15 == 3)
			{
				bVar18 = func_273(bVar18);
			}
			bVar18 = (bVar18 * fParam10);
			bVar18 = (bVar18 + bVar16);
			UNK_0x38C3A68D7861DCFD(0, 72, 1);
			UNK_0x08841CDB215AE18F(bLocal_1037, func_271(vVar0 + Vector(fLocal_1038, 0f, 0f), vVar6 + Vector(fLocal_1038, 0f, 0f), bVar16, bVar17, bVar18), 0, 0, 1);
			if (bLocal_1034 && !UNK_0x7A649D473D0B6339(bParam0))
			{
				UNK_0xC023D1C4BF532815(bLocal_1037, func_271((0f - vVar3.x), (0f - vVar3.y), (vVar3.z + 180f), (0f - vVar9.x), (0f - vVar9.y), (vVar9.z + 180f), bVar16, bVar17, bVar18), 2, 1);
			}
			else
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam0))
				{
					if (UNK_0x7A649D473D0B6339(bParam0))
					{
						UNK_0x9DD8618CA5BF832D(bParam0, 236, true);
						UNK_0x9DD8618CA5BF832D(bParam0, 309, true);
					}
				}
				UNK_0xC023D1C4BF532815(bLocal_1037, func_271(vVar3, vVar9, bVar16, bVar17, bVar18), 2, 1);
			}
			UNK_0x20641932E5104B25(bLocal_1037, false, 0);
			UNK_0x1E9649458B15960F(bLocal_1037, true);
		}
		else
		{
			iLocal_1033 = 2;
			return 0;
		}
		if (SYSTEM::TO_FLOAT(UNK_0x1C0640BA9A7327B3()) > (SYSTEM::TO_FLOAT(iLocal_1039) + fParam10) && SYSTEM::TO_FLOAT(UNK_0x1C0640BA9A7327B3()) > ((SYSTEM::TO_FLOAT(iLocal_1039) + fParam10) + 2600f))
		{
			iLocal_1033 = 2;
			return 0;
		}
	}
	if (iLocal_1033 == 2)
	{
		UNK_0x9DD8618CA5BF832D(bParam0, 236, false);
		UNK_0x9DD8618CA5BF832D(bParam0, 309, false);
		if (UNK_0xC844350D5D58C99A(bLocal_1037))
		{
			if (!func_21(Param11, 0f, 0f, 0f, 0))
			{
				UNK_0xA47B46945FF6DE74(bLocal_1037, Param11, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(bLocal_1037, Param11.f_3);
				UNK_0xB9FD7450C0DAB575(bLocal_1037, 1084227584 /* Float: 5f */);
			}
			UNK_0x20641932E5104B25(bLocal_1037, true, 0);
			UNK_0x1E9649458B15960F(bLocal_1037, false);
			bLocal_1037 = false;
		}
		if (UNK_0x7A649D473D0B6339(bParam0))
		{
			UNK_0xE731059548189243(bParam0, 0);
		}
		return 1;
	}
	return 0;
}

Vector3 func_271(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8)
{
	return func_272(vParam0.x, vParam3.x, bParam6, bParam7, bParam8), func_272(vParam0.y, vParam3.y, bParam6, bParam7, bParam8), func_272(vParam0.z, vParam3.z, bParam6, bParam7, bParam8);
}

float func_272(float fParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return ((((bParam1 - fParam0) / (bParam3 - bParam2)) * (bParam4 - bParam2)) + fParam0);
}

float func_273(bool bParam0)
{
	float fVar0;

	if (bParam0 > 0f)
	{
		if (bParam0 < 1f)
		{
			fVar0 = SYSTEM::SIN(func_274(((bParam0 * 3.141593f) * 0.5f)));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_274(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_275(bool bParam0)
{
	float fVar0;

	if (bParam0 > 0f)
	{
		if (bParam0 < 1f)
		{
			fVar0 = (1f - SYSTEM::COS(func_274(((bParam0 * 3.141593f) * 0.5f))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_276(bool bParam0)
{
	float fVar0;

	if (bParam0 > 0f)
	{
		if (bParam0 < 1f)
		{
			fVar0 = (0.5f * (1f - SYSTEM::COS(func_274((bParam0 * 3.141593f)))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

bool func_277(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0 > bParam2)
	{
		return bParam2;
	}
	else if (bParam0 < bParam1)
	{
		return bParam1;
	}
	return bParam0;
}

void func_278()
{
	Global_75441.f_553 = 1;
	Global_75441.f_554 = 0;
}

void func_279(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = iParam0;
		iVar1 = (9 + (iVar2 - 21));
		if (iVar0 > 0)
		{
			iVar2 = (iVar2 + 2 + iVar0 * 3);
			iVar1 = ((9 + (iVar2 - 21)) - 2);
		}
		iLocal_117[iVar2] = Global_111638.f_32744.f_69[iVar1 /*78*/].f_66;
		if (iLocal_117[iVar2] != 0)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(uLocal_48[iVar2], 2))
			{
				UNK_0x523BCC9DC80CD82F(iLocal_117[iVar2]);
				UNK_0x5D96D8530B3D0904(&(uLocal_48[iVar2]), 2);
				func_478(iVar2);
			}
		}
		iVar0++;
	}
}

bool func_280()
{
	return !Global_75441.f_553;
}

void func_281(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_61(&(Global_75441.f_555[0 /*21*/]), iVar0))
		{
			if (UNK_0x0EB28750412C3A5A(vParam0, Global_75441.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_282(iVar0);
			}
		}
		iVar0++;
	}
}

void func_282(int iParam0)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (func_61(&(Global_75441.f_555[0 /*21*/]), iParam0))
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
			if (((((iParam0 == 24 && func_67(iParam0, 0)) && Global_76350.f_66 == 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] != 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] > 3) && (!func_283(0, Global_75441.f_555[0 /*21*/].f_12) || !func_283(1, Global_75441.f_555[0 /*21*/].f_12)))
			{
				func_116(&(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]), &Global_76350);
				Global_76428 = Global_111638.f_32744.f_5591;
			}
			func_480(iParam0, 0);
		}
	}
}

bool func_283(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_284(&(Global_111638.f_32744.f_5038[iVar0 /*157*/])))
	{
		return false;
	}
	return func_39(Global_111638.f_32744.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_284(var uParam0)
{
	return *uParam0;
}

void func_285(bool bParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6)
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
		func_286(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_32(bParam0, &Var0);
		if (func_21(vParam1, 0f, 0f, 0f, 0))
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
		func_115(iParam5, &Var0, vParam1, iParam4, func_46(bParam0));
		func_30(iParam5, bParam0, 0);
	}
}

void func_286(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_117(iParam0);
	func_480(iParam0, 0);
}

int func_287(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_38(uParam0->f_66))
	{
		return 0;
	}
	if (UNK_0xC844350D5D58C99A(Global_76347))
	{
		return 0;
	}
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
		default:
			return 0;
	}
	if (!func_283(0, iParam1))
	{
		Global_111638.f_32744.f_5592[iVar0] = 0;
	}
	else if (!func_283(1, iParam1))
	{
		Global_111638.f_32744.f_5592[iVar0] = 1;
	}
	func_288(iParam1, UNK_0x1739BA50603D849C(uParam0->f_66));
	func_116(uParam0, &(Global_111638.f_32744.f_5038[iVar0 /*157*/][Global_111638.f_32744.f_5592[iVar0] /*78*/]));
	Global_111638.f_32744.f_5592[iVar0]++;
	if (Global_111638.f_32744.f_5592[iVar0] >= func_284(&(Global_111638.f_32744.f_5038[iVar0 /*157*/])))
	{
		Global_111638.f_32744.f_5592[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_98148[iVar0 /*98*/] == uParam0->f_66 && UNK_0x7F8A39872A07D2CE(&(Global_98148[iVar0 /*98*/].f_27), &(uParam0->f_1)))
		{
			Global_98148[iVar0 /*98*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

void func_288(int iParam0, char* sParam1)
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (!Global_111638.f_32744.f_5596[iParam0])
	{
		switch (iParam0)
		{
			case 0:
				func_289("IMPOUND_HELPM", sParam1, 2, UNK_0x09AC81E49EA267F7(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
			case 1:
				func_289("IMPOUND_HELPF", sParam1, 2, UNK_0x09AC81E49EA267F7(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
			case 2:
				func_289("IMPOUND_HELPT", sParam1, 2, UNK_0x09AC81E49EA267F7(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
		Global_111638.f_32744.f_5596[iParam0] = 1;
	}
}

void func_289(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_290(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_290(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_291();
	}
}

void func_291()
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

bool func_292(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (!func_61(&(Global_75441.f_555[0 /*21*/]), iParam1))
	{
		return false;
	}
	else
	{
		func_116(&(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return true;
}

int func_293(var uParam0, var uParam1, var uParam2)
{
	if (UNK_0x9F4FE516EAACCFC5(*uParam1))
	{
		UNK_0x9A8DDC7C522F5BF5(*uParam1, 0);
	}
	if (UNK_0x9F4FE516EAACCFC5(*uParam2))
	{
		UNK_0x9A8DDC7C522F5BF5(*uParam2, 0);
	}
	*uParam1 = UNK_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
	*uParam2 = UNK_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
	if (UNK_0x9F4FE516EAACCFC5(*uParam1) && UNK_0x9F4FE516EAACCFC5(*uParam2))
	{
		UNK_0x608A456FDD8A83D8(*uParam1, *uParam0);
		UNK_0x5F3CBA6EB9341C90(*uParam1, uParam0->f_3, 2);
		UNK_0x5818C8D5303DCCF8(*uParam1, uParam0->f_12);
		UNK_0x608A456FDD8A83D8(*uParam2, uParam0->f_6);
		UNK_0x5F3CBA6EB9341C90(*uParam2, uParam0->f_6.f_3, 2);
		UNK_0x5818C8D5303DCCF8(*uParam2, uParam0->f_12);
		UNK_0x91F5B0244AAE6222(*uParam1, "HAND_SHAKE", uParam0->f_13);
		UNK_0x91F5B0244AAE6222(*uParam2, "HAND_SHAKE", uParam0->f_13);
		if (uParam0->f_14 > 0.1f)
		{
			UNK_0xF1E4C781086FABC1(*uParam2, *uParam1, SYSTEM::ROUND((uParam0->f_14 * 1000f)), 1, 1);
		}
		else
		{
			UNK_0xE3BB8E05FCEB3FBE(*uParam1, true);
		}
		UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

void func_294(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_299(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_78())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_298(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_299(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_298(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_296(UNK_0xD803B885F5E47A62())) && !func_93(UNK_0xD803B885F5E47A62(), 0)) && !func_295()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_296(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_295()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_296(bool bParam0)
{
	if (func_93(bParam0, 0))
	{
		return true;
	}
	if (func_297())
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

bool func_297()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_298(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

void func_299(int iParam0)
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

int func_300(int iParam0)
{
	func_61(&(Global_75441.f_555[0 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 21:
			if (Global_75441.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_301(26))
			{
				return 26;
			}
			if (!func_301(29))
			{
				return 29;
			}
			if (!func_301(32))
			{
				return 32;
			}
			break;
		case 22:
			if (Global_75441.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_301(27))
			{
				return 27;
			}
			if (!func_301(30))
			{
				return 30;
			}
			if (!func_301(33))
			{
				return 33;
			}
			break;
		case 23:
			if (Global_75441.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_301(28))
			{
				return 28;
			}
			if (!func_301(31))
			{
				return 31;
			}
			if (!func_301(34))
			{
				return 34;
			}
			break;
	}
	return -1;
}

bool func_301(int iParam0)
{
	return func_67(iParam0, 0);
}

void func_302(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = "NULL";
	iVar1 = 0;
	bVar0 = func_304(iParam0, &iVar1);
	if (!UNK_0x7F8A39872A07D2CE("NONE", bVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (UNK_0x13CCE7704923A895(iVar1))
			{
				return;
			}
			if (UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == iVar1)
			{
				func_231(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!UNK_0x13CCE7704923A895(iVar1))
			{
				return;
			}
			if (func_303(iParam0))
			{
				func_231(iParam0, 0);
			}
		}
		UNK_0xD65FA6F2BAD953C8(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

bool func_303(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_232(iParam0) };
	if (Var0.f_1 != -1 && UNK_0xEAE0D21A50E6C7F4(Global_37208[Var0.f_1], Var0))
	{
		return true;
	}
	return false;
}

char* func_304(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_305(iParam0) };
	*iParam1 = UNK_0x0D1736C2E221BCEA(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_305(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		case 25:
			vVar5 = { func_306(1, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		case 26:
			vVar5 = { func_306(2, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		case 27:
			vVar5 = { func_306(3, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		case 28:
			vVar5 = { func_306(4, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		case 29:
			vVar5 = { func_306(5, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		case 30:
			vVar5 = { func_306(6, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		case 31:
			vVar5 = { func_306(7, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		case 32:
			Var0 = { Global_1049922[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		case 33:
			vVar5 = { func_306(35, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		case 34:
			vVar5 = { func_306(36, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		case 35:
			vVar5 = { func_306(37, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		case 36:
			vVar5 = { func_306(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		case 37:
			vVar5 = { func_306(39, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		case 38:
			vVar5 = { func_306(40, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		case 39:
			vVar5 = { func_306(41, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		case 40:
			vVar5 = { func_306(42, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		case 41:
			vVar5 = { func_306(43, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		case 83:
			vVar5 = { func_306(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 84:
			vVar5 = { func_306(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 85:
			vVar5 = { func_306(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 86:
			vVar5 = { func_306(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 87:
			vVar5 = { func_306(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 88:
			vVar5 = { func_306(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 89:
			vVar5 = { func_306(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 90:
			vVar5 = { func_306(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 91:
			vVar5 = { func_306(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 92:
			vVar5 = { func_306(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 93:
			vVar5 = { func_306(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 94:
			vVar5 = { func_306(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 95:
			vVar5 = { func_306(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 96:
			vVar5 = { func_306(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 97:
			vVar5 = { func_306(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 98:
			vVar5 = { func_306(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 99:
			vVar5 = { func_306(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 100:
			vVar5 = { func_306(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 101:
			vVar5 = { func_306(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 102:
			vVar5 = { func_306(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 103:
			vVar5 = { func_306(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 104:
			vVar5 = { func_306(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 105:
			vVar5 = { func_306(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 106:
			vVar5 = { func_306(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 107:
			vVar5 = { func_306(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 108:
			vVar5 = { func_306(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 109:
			vVar5 = { func_306(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 110:
			vVar5 = { func_306(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 111:
			vVar5 = { func_306(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 112:
			vVar5 = { func_306(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 113:
			vVar5 = { func_306(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 114:
			vVar5 = { func_306(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 115:
			vVar5 = { func_306(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 116:
			vVar5 = { func_306(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 117:
			vVar5 = { func_306(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 118:
			vVar5 = { func_306(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 119:
			vVar5 = { func_306(91, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 120:
			vVar5 = { func_306(97, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 121:
			vVar5 = { func_306(103, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 122:
			vVar5 = { func_306(104, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 123:
			vVar5 = { func_306(105, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 124:
			vVar5 = { func_306(106, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 125:
			vVar5 = { func_306(107, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 126:
			vVar5 = { func_306(108, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 127:
			vVar5 = { func_306(109, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 128:
			vVar5 = { func_306(110, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 129:
			vVar5 = { func_306(111, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 130:
			vVar5 = { func_306(112, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 131:
			vVar5 = { func_306(113, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 132:
			vVar5 = { func_306(114, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 133:
			vVar5 = { func_306(103, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 134:
			vVar5 = { func_306(106, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 135:
			vVar5 = { func_306(109, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 136:
			vVar5 = { func_306(112, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		case 192:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		case 193:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		case 194:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		case 195:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 196:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		case 197:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		case 198:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		case 199:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		case 200:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		case 201:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		case 202:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		case 203:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		case 204:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		case 205:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		case 206:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		case 207:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		case 208:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		case 209:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		case 210:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		case 211:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		case 212:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		case 213:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
			default:
				break;
	}
}

struct<6> func_306(int iParam0, bool bParam1)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

void func_307(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = "NULL";
	iVar1 = 0;
	bVar0 = func_304(iParam0, &iVar1);
	if (!UNK_0x7F8A39872A07D2CE("NONE", bVar0) && iVar1 != 0)
	{
		if (bParam1 && !UNK_0x3C4C57B70481C643(iVar1))
		{
			if (UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == iVar1)
			{
				func_233(iParam0, 1);
				return;
			}
			UNK_0xE9C847D3387E544A(iVar1, 1);
		}
		else if (!bParam1 && UNK_0x3C4C57B70481C643(iVar1))
		{
			if (func_308(iParam0))
			{
				func_233(iParam0, 0);
			}
			UNK_0xE9C847D3387E544A(iVar1, 0);
		}
		else if (!bParam1)
		{
			if (func_308(iParam0))
			{
				func_233(iParam0, 0);
			}
		}
	}
}

bool func_308(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_232(iParam0) };
	if (Var0.f_1 != -1 && UNK_0xEAE0D21A50E6C7F4(Global_37200[Var0.f_1], Var0))
	{
		return true;
	}
	return false;
}

bool func_309()
{
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) || func_300(Local_402) != -1)
	{
		return true;
	}
	return false;
}

bool func_310(float fParam0, float fParam1, float fParam2)
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

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 26:
		case 29:
		case 32:
			return 0;
		case 23:
		case 28:
		case 31:
		case 34:
			return 2;
		case 22:
		case 27:
		case 30:
		case 33:
			return 1;
	}
	return 145;
}

int func_312(int iParam0, var uParam1)
{
	uParam1->f_73[1 /*4*/] = { 194.674f, -1026.984f, -100f };
	uParam1->f_73[1 /*4*/].f_3 = 285f;
	*(uParam1[2 /*15*/]) = { 198.9908f, -1025.956f, -98.8981f };
	(uParam1[2 /*15*/])->f_3 = { -4.5679f, -0.0266f, 110.7275f };
	(uParam1[2 /*15*/])->f_6 = { 198.6016f, -1026.103f, -98.9313f };
	(uParam1[2 /*15*/])->f_6.f_3 = { -5.3499f, -0.0266f, 110.7275f };
	(uParam1[2 /*15*/])->f_12 = 25.2218f;
	(uParam1[2 /*15*/])->f_13 = 0.2f;
	(uParam1[2 /*15*/])->f_14 = 3.5f;
	uParam1->f_61[2] = 0f;
	switch (iParam0)
	{
		case 21:
			*(uParam1[0 /*15*/]) = { -84.4891f, 95.2463f, 72.7397f };
			(uParam1[0 /*15*/])->f_3 = { -1.0236f, 0.0007f, -126.7439f };
			(uParam1[0 /*15*/])->f_6 = { -84.1568f, 94.9229f, 72.7318f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -1.0236f, 0.0007f, -127.1499f };
			(uParam1[0 /*15*/])->f_12 = 25.1687f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -62.5434f, 80.2917f, 70.5644f };
			uParam1->f_73[0 /*4*/].f_3 = 345f;
			*(uParam1[1 /*15*/]) = { -61.075f, 81.2555f, 84.5867f };
			(uParam1[1 /*15*/])->f_3 = { -69.9271f, 0f, 103.892f };
			(uParam1[1 /*15*/])->f_6 = { -60.6284f, 81.2036f, 84.5867f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -73.4239f, 0f, 108.7693f };
			(uParam1[1 /*15*/])->f_12 = 29.9579f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 3f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -60.3859f, 78.4352f, 70.5249f };
			uParam1->f_86[0 /*6*/] = { -67.0129f, 81.9471f, 70.5249f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, -117.9206f };
			*(uParam1[3 /*15*/]) = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[3 /*15*/])->f_3 = { -57.747f, 0f, 34.1968f };
			(uParam1[3 /*15*/])->f_6 = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -48.0008f, 0f, 49.6137f };
			(uParam1[3 /*15*/])->f_12 = 30.0324f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 3f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -62.6272f, 79.7534f, 70.6161f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, 65f };
			uParam1->f_66[1 /*3*/] = { -79.1059f, 87.1091f, 70.5157f };
			uParam1->f_73[2 /*4*/] = { -88.4f, 70.8f, 72f };
			uParam1->f_73[2 /*4*/].f_3 = 150f;
			return 1;
		case 22:
			*(uParam1[0 /*15*/]) = { -66.6121f, -1842.122f, 26.6941f };
			(uParam1[0 /*15*/])->f_3 = { 3.4131f, -0.0009f, 17.9566f };
			(uParam1[0 /*15*/])->f_6 = { -66.5137f, -1841.616f, 26.7211f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 3.1669f, -0.0009f, 18.0384f };
			(uParam1[0 /*15*/])->f_12 = 25.1856f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -72.5431f, -1820.447f, 25.9424f };
			uParam1->f_73[0 /*4*/].f_3 = 140f;
			*(uParam1[1 /*15*/]) = { -72.7256f, -1823.283f, 41.0951f };
			(uParam1[1 /*15*/])->f_3 = { -81.9335f, 0f, -58.1415f };
			(uParam1[1 /*15*/])->f_6 = { -72.9027f, -1822.998f, 41.0951f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.6657f, 0f, -29.6554f };
			(uParam1[1 /*15*/])->f_12 = 29.9864f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 3f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -76.7939f, -1816.77f, 26.6473f };
			uParam1->f_86[0 /*6*/] = { -69.2183f, -1823.258f, 25.9421f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, 49.4214f };
			*(uParam1[3 /*15*/]) = { -70.9492f, -1820.936f, 45.3628f };
			(uParam1[3 /*15*/])->f_3 = { -85.5171f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_6 = { -70.9836f, -1821.023f, 45.3628f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -89.4995f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_12 = 28.4803f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 4f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -75.3386f, -1818.249f, 26.0241f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, -132.7699f };
			uParam1->f_66[1 /*3*/] = { -63.988f, -1829.39f, 26.423f };
			uParam1->f_73[2 /*4*/] = { -49.738f, -1830.147f, 25.5591f };
			uParam1->f_73[2 /*4*/].f_3 = 317.3589f;
			return 1;
			Jump @2034; //curOff = 1432
			*(uParam1[0 /*15*/]) = { -237.074f, -1170.391f, 23.479f };
			(uParam1[0 /*15*/])->f_3 = { 7.619f, 0f, -69.7398f };
			(uParam1[0 /*15*/])->f_6 = { -237.2166f, -1169.672f, 23.4931f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 7.619f, 0f, -71.3391f };
			(uParam1[0 /*15*/])->f_12 = 40.0015f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -218.0289f, -1162.392f, 22.0242f };
			uParam1->f_73[0 /*4*/].f_3 = 15f;
			*(uParam1[1 /*15*/]) = { -219.5507f, -1159.951f, 36.8399f };
			(uParam1[1 /*15*/])->f_3 = { -81.7188f, 0f, 170.4291f };
			(uParam1[1 /*15*/])->f_6 = { -219.1442f, -1160.019f, 36.8399f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.5726f, 0f, -168.992f };
			(uParam1[1 /*15*/])->f_12 = 30.0319f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 4f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -211.6438f, -1162.407f, 22.0234f };
			uParam1->f_86[0 /*6*/] = { -221.6438f, -1162.407f, 22.0234f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, -90f };
			*(uParam1[3 /*15*/]) = { -218.5983f, -1159.061f, 31.4452f };
			(uParam1[3 /*15*/])->f_3 = { -62.4689f, 0f, -142.2907f };
			(uParam1[3 /*15*/])->f_6 = { -218.6533f, -1159.067f, 31.4471f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -62.4689f, 0f, -172.3491f };
			(uParam1[3 /*15*/])->f_12 = 30f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 3f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -214.5676f, -1162.658f, 21.9591f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, 90f };
			uParam1->f_66[1 /*3*/] = { -227.7619f, -1162.848f, 22.0085f };
			uParam1->f_73[2 /*4*/] = { -221.6f, -1156.3f, 22.6f };
			uParam1->f_73[2 /*4*/].f_3 = 0f;
			return 1;
			return 0;
		}

bool func_313()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

void func_314()
{
	int iVar0;
	struct<5> Var1;
	bool bVar22;
	int iVar23;
	int iVar24;
	bool bVar25;
	char cVar26[16];
	float fVar30;
	int iVar31;
	vector3 vVar32;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	int iVar38;
	int iVar39;

	if ((((((UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || !func_25(iLocal_672))
	{
		return;
	}
	if (!Global_73825)
	{
		if (Global_111638.f_32744.f_1982[iLocal_672 /*939*/].f_626[iLocal_855] != -15)
		{
			if (!Global_75441[Global_111638.f_32744.f_1982[iLocal_672 /*939*/].f_313[iLocal_855]])
			{
				if (func_368(func_50(), Global_111638.f_32744.f_1982[iLocal_672 /*939*/].f_626[iLocal_855]))
				{
					iVar0 = Global_111638.f_32744.f_1982[iLocal_672 /*939*/][iLocal_855];
					func_366(iVar0, iLocal_855, iLocal_672);
					func_61(&Var1, Global_111638.f_32744.f_1982[iLocal_672 /*939*/].f_313[iLocal_855]);
					if (Var1.f_4 == 0)
					{
					}
					else
					{
						func_480(Global_111638.f_32744.f_1982[iLocal_672 /*939*/].f_313[iLocal_855], 1);
					}
					Global_111638.f_32744.f_1982[iLocal_672 /*939*/].f_626[iLocal_855] = -15;
				}
			}
		}
		iLocal_855++;
		if (iLocal_855 >= 312)
		{
			iLocal_855 = 0;
		}
	}
	if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) != Local_402.f_7 || Local_402.f_2 == 99)
	{
		if (Local_402.f_5 != -1)
		{
			func_69(&(Local_402.f_5));
		}
		if (Local_402.f_2 > 0)
		{
			UNK_0xA37A90C62806D848(1);
		}
		Local_402.f_7 = UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9());
		Local_402.f_5 = -1;
		Local_402.f_2 = 0;
		Local_402.f_4 = 0;
		if (bLocal_854)
		{
			if (UNK_0xFEBC1E4EC9E001F0())
			{
				UNK_0xA37A90C62806D848(1);
			}
			UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			if (UNK_0x9F4FE516EAACCFC5(Local_402.f_110))
			{
				UNK_0xE3BB8E05FCEB3FBE(Local_402.f_110, false);
				UNK_0x9A8DDC7C522F5BF5(Local_402.f_110, 0);
			}
			if (UNK_0x9F4FE516EAACCFC5(Local_402.f_111))
			{
				UNK_0xE3BB8E05FCEB3FBE(Local_402.f_111, false);
				UNK_0x9A8DDC7C522F5BF5(Local_402.f_111, 0);
			}
			UNK_0x4A4806F9D471E491(UNK_0x16F2683693E537C9(), true, 0);
			UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
				UNK_0xBC03DF6093E8E71F(UNK_0xD803B885F5E47A62(), 0);
			}
			bVar22 = UNK_0x728870EB733D12A1();
			if (UNK_0xC844350D5D58C99A(bVar22) && UNK_0xDF1306B443CD3D15(bVar22, 0))
			{
				UNK_0x4A4806F9D471E491(bVar22, true, 0);
				UNK_0x1E9649458B15960F(bVar22, false);
				if (UNK_0x9C77D2D0559097F0(bVar22, 1))
				{
					UNK_0x046C362CF15F1935(&bVar22);
				}
			}
			iVar23 = 5000;
			iVar24 = UNK_0x1C0640BA9A7327B3();
			while (!UNK_0x19C7D1907D1DDDAB() && (UNK_0x1C0640BA9A7327B3() - iVar24) < iVar23)
			{
				SYSTEM::WAIT(0);
			}
			if (UNK_0x31609A585163CBAC(Local_402.f_112))
			{
				UNK_0x25BB71BA267FE042(Local_402.f_112);
			}
			StringCopy(&Global_38153, "", 32);
			if ((Local_402 == 21 || Local_402 == 22) || Local_402 == 23)
			{
				func_307(47, 1);
				func_302(47, 1);
			}
			UNK_0x486B4ADE317F0689();
			UNK_0x066C43E677C08D5C();
			UNK_0x8BCB70EB440DED83(1);
			UNK_0xBFE31971E49FA500(1);
			func_294(0, 1, 1, 0, 0, 0);
			bLocal_854 = false;
			Global_31024 = 0;
		}
	}
	bVar25 = false;
	if ((((((((((((!bLocal_854 && !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, true, 0)) || (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) && !Local_402.f_29.f_69)) || (!UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()) && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))) || (!bLocal_854 && func_67(Local_402, 5))) || (!bLocal_854 && UNK_0xBFC0798A6E3417F9(2, 199))) || (!bLocal_854 && UNK_0x798A3F1296751F46())) || !func_364(0)) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0x39E5E51C6E21A69B(UNK_0x16F2683693E537C9())) || UNK_0x7ED67A9BE53DAC95(UNK_0x16F2683693E537C9())) || Global_30918) || (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0x36646919F20EAFFC(UNK_0x16F2683693E537C9())))
	{
		if (Local_402.f_2 > 0 && Local_402.f_2 != 90)
		{
			bLocal_1014 = true;
			Local_402.f_2 = 99;
		}
		bVar25 = true;
	}
	fVar30 = 20f;
	iVar31 = 3;
	switch (Local_402.f_2)
	{
		case 0:
			if ((((Local_402 != -1 && func_67(Local_402, 0)) && !func_67(Local_402, 5)) && !bLocal_1015) && !bVar25)
			{
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, true, 0) && !UNK_0xFEBC1E4EC9E001F0())
				{
					cVar26 = { Local_402.f_29.f_63 };
					StringConCat(&cVar26, "_01", 16);
					func_220(&(Local_402.f_5), 3, &cVar26, 0, 0, 0, 0);
					Local_402.f_2 = 1;
				}
			}
			break;
		case 1:
			if (func_215(Local_402.f_5, 1))
			{
				if (func_363(iLocal_672) < Local_402.f_29.f_67)
				{
					Local_402.f_4 = UNK_0x1C0640BA9A7327B3();
					func_69(&(Local_402.f_5));
					iLocal_669 = 0;
					Local_402.f_2 = 90;
				}
				else
				{
					iLocal_669 = 0;
					Local_402.f_4 = UNK_0x1C0640BA9A7327B3();
					func_69(&(Local_402.f_5));
					Local_402.f_2 = 2;
				}
			}
			break;
		case 2:
			iLocal_669++;
			if (iLocal_669 >= 3)
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_02", 16);
				func_220(&(Local_402.f_5), 3, &cVar26, 0, 0, 0, 0);
				Local_402.f_2 = 3;
			}
			break;
		case 3:
			if (func_215(Local_402.f_5, 1))
			{
				if (func_363(iLocal_672) < Local_402.f_29.f_67)
				{
					Local_402.f_4 = UNK_0x1C0640BA9A7327B3();
					Local_402.f_2 = 90;
				}
				else
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", 1);
					bLocal_854 = false;
					if ((Local_402 == 15 || Local_402 == 17) || Local_402 == 16)
					{
						Local_516.f_4 = 114;
						bLocal_854 = true;
					}
					else if (Local_402 == 18 || Local_402 == 19)
					{
						Local_516.f_4 = 116;
						bLocal_854 = true;
					}
					else if (Local_402 == 12 || Local_402 == 13)
					{
						Local_516.f_4 = 115;
						bLocal_854 = true;
					}
					else if ((Local_402 == 21 || Local_402 == 22) || Local_402 == 23)
					{
						Local_516.f_4 = 117;
						bLocal_854 = true;
					}
					Local_516 = UNK_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
					Local_516.f_1 = 0;
					Local_516.f_3 = 0;
					Local_516.f_2 = 0;
					bLocal_856 = true;
					Global_31024 = 1;
					if (bLocal_854)
					{
						if ((Local_402 == 21 || Local_402 == 22) || Local_402 == 23)
						{
							func_307(47, 0);
							func_302(47, 0);
							Local_402.f_112 = UNK_0x0D1736C2E221BCEA(198.3659f, -1020.273f, -100f, "v_garagem_sp");
							if (UNK_0x31609A585163CBAC(Local_402.f_112))
							{
								if (!UNK_0xBD307E66C0669BFC(Local_402.f_112))
								{
									UNK_0x0007C2367F4F23F3(Local_402.f_112);
								}
								StringCopy(&Global_38153, "v_garagem_sp", 32);
							}
						}
						UNK_0x62DE699599F0417E(UNK_0xD803B885F5E47A62(), 1);
						UNK_0x486B4ADE317F0689();
						Local_402.f_4 = UNK_0x1C0640BA9A7327B3();
						Local_402.f_2 = 4;
					}
					else
					{
						Local_402.f_2 = 8;
					}
					func_69(&(Local_402.f_5));
				}
			}
			break;
		case 4:
			bVar35 = true;
			if ((Local_402 == 21 || Local_402 == 22) || Local_402 == 23)
			{
				Local_402.f_112 = UNK_0x0D1736C2E221BCEA(198.3659f, -1020.273f, -100f, "v_garagem_sp");
				if ((!UNK_0x31609A585163CBAC(Local_402.f_112) || UNK_0x3C4C57B70481C643(Local_402.f_112)) || UNK_0x13CCE7704923A895(Local_402.f_112))
				{
					func_307(47, 0);
					func_302(47, 0);
					bVar35 = false;
				}
			}
			if (bVar35)
			{
				if (Local_402 == 12)
				{
					fVar30 = 95f;
					iVar31 = 2;
				}
				else if (Local_402 == 13)
				{
					fVar30 = 150f;
					iVar31 = 2;
				}
				else if ((Local_402 == 21 || Local_402 == 22) || Local_402 == 23)
				{
					fVar30 = 150f;
					iVar31 = 2;
				}
				vVar32 = { SYSTEM::COS((Local_402.f_29.f_14.f_3.f_2 + 90f)), SYSTEM::SIN((Local_402.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if ((Local_402 == 21 || Local_402 == 22) || Local_402 == 23)
				{
					if (UNK_0x9E632F16E887F781(200.4651f, -1020.631f, -100f, 50f, 0) || (UNK_0x1C0640BA9A7327B3() - Local_402.f_4) > 3500)
					{
						Local_402.f_4 = UNK_0x1C0640BA9A7327B3();
						Local_402.f_2 = 5;
					}
				}
				else if (UNK_0xD67D6A3F0D653D93(Local_402.f_29.f_14, vVar32, fVar30, iVar31) || (UNK_0x1C0640BA9A7327B3() - Local_402.f_4) > 3500)
				{
					Local_402.f_4 = UNK_0x1C0640BA9A7327B3();
					Local_402.f_2 = 5;
				}
			}
			break;
		case 5:
			if (((UNK_0xEB880D98B5988D0C() && UNK_0x68367101660E33F0()) && (!UNK_0x31609A585163CBAC(Local_402.f_112) || UNK_0xBD307E66C0669BFC(Local_402.f_112))) || (UNK_0x1C0640BA9A7327B3() - Local_402.f_4) > 10000)
			{
				Local_402.f_4 = UNK_0x1C0640BA9A7327B3();
				Local_402.f_2 = 6;
			}
			break;
		case 6:
			if ((UNK_0x1C0640BA9A7327B3() - Local_402.f_4) > 1000)
			{
				if ((UNK_0xC844350D5D58C99A(bLocal_1027) && UNK_0xAF6690C489CC6203(bLocal_1027)) && UNK_0x9C77D2D0559097F0(bLocal_1027, 1))
				{
					UNK_0x046C362CF15F1935(&bLocal_1027);
				}
				bLocal_1027 = UNK_0x728870EB733D12A1();
				if ((((UNK_0xC844350D5D58C99A(bLocal_1027) && UNK_0xDF1306B443CD3D15(bLocal_1027, 0)) && !UNK_0xAFB8495D36825275(UNK_0x134B62B726CEC8E6(bLocal_1027))) && !UNK_0xC41A9202669A24C4(UNK_0x134B62B726CEC8E6(bLocal_1027))) && !UNK_0xA7082C42B8809BF2(UNK_0x134B62B726CEC8E6(bLocal_1027)))
				{
					if (!UNK_0xAF6690C489CC6203(bLocal_1027))
					{
						UNK_0x73270B3C9CC833FD(bLocal_1027, false, 0);
					}
				}
				else
				{
					bLocal_1027 = false;
				}
				UNK_0x4A4806F9D471E491(UNK_0x16F2683693E537C9(), false, 0);
				if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), true);
				}
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 16);
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 32);
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 128);
					UNK_0xBC03DF6093E8E71F(UNK_0xD803B885F5E47A62(), 1);
				}
				func_294(1, 1, 1, 0, 0, 0);
				UNK_0x790015DC92C918E2();
				UNK_0xA37A90C62806D848(1);
				vVar32 = { SYSTEM::COS((Local_402.f_29.f_14.f_3.f_2 + 90f)), SYSTEM::SIN((Local_402.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if (!Local_402.f_29.f_69)
				{
					UNK_0xF49D1BC9EF1C3EF4(Local_402.f_29.f_14, vVar32);
				}
				if (!UNK_0x9F4FE516EAACCFC5(Local_402.f_110))
				{
					Local_402.f_110 = UNK_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", true);
				}
				if (UNK_0x9F4FE516EAACCFC5(Local_402.f_110))
				{
					if (Local_402.f_29.f_69)
					{
						UNK_0xB8842F7C7761A196("GtaMloRoom001");
					}
					func_294(1, 1, 1, 0, 0, 0);
					func_293(&(Local_402.f_29.f_14), &(Local_402.f_110), &(Local_402.f_111));
				}
				UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				UNK_0x8BCB70EB440DED83(0);
				UNK_0xBFE31971E49FA500(0);
				UNK_0x486B4ADE317F0689();
				Local_402.f_2 = 7;
				Local_402.f_4 = UNK_0x1C0640BA9A7327B3();
				func_69(&(Local_402.f_5));
			}
			break;
		case 7:
			if ((UNK_0x1C0640BA9A7327B3() - Local_402.f_4) < 7000 && !func_361(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_05", 16);
				func_218(&cVar26, -1);
				if (!UNK_0xEB880D98B5988D0C())
				{
					if (Local_402 == 12 || Local_402 == 13)
					{
						fVar30 = 85f;
						iVar31 = 2;
					}
					vVar32 = { SYSTEM::COS((Local_402.f_29.f_29.f_2 + 90f)), SYSTEM::SIN((Local_402.f_29.f_29.f_2 + 90f)), 0f };
					UNK_0xD67D6A3F0D653D93(Local_402.f_29.f_29, vVar32, fVar30, iVar31);
				}
			}
			else
			{
				if (UNK_0x9F4FE516EAACCFC5(Local_402.f_110))
				{
					if (Local_402.f_29.f_69)
					{
						UNK_0xB8842F7C7761A196("GtaMloRoom001");
					}
					func_294(1, 1, 1, 0, 0, 0);
					func_293(&(Local_402.f_29.f_29), &(Local_402.f_110), &(Local_402.f_111));
				}
				UNK_0x066C43E677C08D5C();
				UNK_0xA37A90C62806D848(1);
				Local_402.f_4 = UNK_0x1C0640BA9A7327B3();
				Local_402.f_2 = 8;
			}
			break;
		case 8:
			if ((UNK_0x1C0640BA9A7327B3() - Local_402.f_4) < 7000 && !func_361(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_06", 16);
				if (!UNK_0xFEBC1E4EC9E001F0())
				{
					func_218(&cVar26, 7000);
				}
			}
			else
			{
				UNK_0xA37A90C62806D848(1);
				Local_402.f_4 = UNK_0x1C0640BA9A7327B3();
				Local_402.f_2 = 9;
			}
			break;
		case 9:
			if ((UNK_0x1C0640BA9A7327B3() - Local_402.f_4) < 3500 && !func_361(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_03", 16);
				if (UNK_0x83D8570832F172A7(Local_516))
				{
					if (Local_516.f_1)
					{
						if (!Local_516.f_3)
						{
							UNK_0x4D7F4CC43D4D0DE3(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
							Local_516.f_3 = 1;
						}
						UNK_0x6567AE843FADBA94(Local_516, 255, 255, 255, 255, 0);
					}
					else
					{
						UNK_0x7E60C62A7CE58FC8(Local_516, "SHOW_SHARD_MIDSIZED_MESSAGE");
						func_91(&cVar26);
						UNK_0x7A8BB56B212464AC();
						Local_516.f_1 = 1;
					}
				}
			}
			else if ((UNK_0x1C0640BA9A7327B3() - Local_402.f_4) < 4000 && !func_361(1000))
			{
				if (UNK_0x83D8570832F172A7(Local_516))
				{
					if (Local_516.f_2)
					{
						UNK_0x6567AE843FADBA94(Local_516, 255, 255, 255, 255, 0);
					}
					else
					{
						UNK_0x7E60C62A7CE58FC8(Local_516, "SHARD_ANIM_OUT");
						UNK_0x3CAEA85DA607305E(true);
						UNK_0x7C19E5E4784BD7CF(0.33f);
						UNK_0x7E60D21B163E9D56();
						Local_516.f_2 = 1;
					}
				}
			}
			else
			{
				if (bLocal_854)
				{
					UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
					if (UNK_0x9F4FE516EAACCFC5(Local_402.f_110))
					{
						UNK_0xE3BB8E05FCEB3FBE(Local_402.f_110, false);
						UNK_0x9A8DDC7C522F5BF5(Local_402.f_110, 0);
					}
					if (UNK_0x9F4FE516EAACCFC5(Local_402.f_111))
					{
						UNK_0xE3BB8E05FCEB3FBE(Local_402.f_111, false);
						UNK_0x9A8DDC7C522F5BF5(Local_402.f_111, 0);
					}
					UNK_0x2FB9A57162E54BAB(0f);
					UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
					UNK_0x4A4806F9D471E491(UNK_0x16F2683693E537C9(), true, 0);
					UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
					bVar36 = UNK_0x728870EB733D12A1();
					if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
						UNK_0xBC03DF6093E8E71F(UNK_0xD803B885F5E47A62(), 0);
						if ((UNK_0xC844350D5D58C99A(bVar36) && UNK_0xDF1306B443CD3D15(bVar36, 0)) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bVar36, 0))
						{
							UNK_0xA47B46945FF6DE74(bVar36, Local_402.f_29.f_44, 1, 1, 0, 1);
							UNK_0xD8F6A53F4799FAFE(bVar36, Local_402.f_29.f_47);
							UNK_0xB9FD7450C0DAB575(bVar36, 1084227584 /* Float: 5f */);
						}
						else
						{
							UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), Local_402.f_29.f_44, 1, 1, 0, 1);
							UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), Local_402.f_29.f_47);
						}
					}
					if (UNK_0xC844350D5D58C99A(bLocal_1027) && UNK_0xDF1306B443CD3D15(bLocal_1027, 0))
					{
						bVar37 = func_49(24);
						if (func_292(&Local_776, 24))
						{
							func_287(&Local_776, func_474());
							if (UNK_0xC844350D5D58C99A(bVar37))
							{
								UNK_0xA954465BA6FDEFE2(&bVar37);
							}
						}
						if (Local_402 == 21)
						{
							UNK_0x536F1BE96C726C4B(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, false);
							UNK_0xA47B46945FF6DE74(bLocal_1027, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
							UNK_0xD8F6A53F4799FAFE(bLocal_1027, 154.4846f);
							func_285(bLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
						}
						else if (Local_402 == 22)
						{
							UNK_0x536F1BE96C726C4B(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, false);
							UNK_0xA47B46945FF6DE74(bLocal_1027, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
							UNK_0xD8F6A53F4799FAFE(bLocal_1027, 319.6985f);
							func_285(bLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
						}
						else if (Local_402 == 23)
						{
							UNK_0x536F1BE96C726C4B(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, false);
							UNK_0xA47B46945FF6DE74(bLocal_1027, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
							UNK_0xD8F6A53F4799FAFE(bLocal_1027, 270.8741f);
							func_285(bLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
						}
						UNK_0xB9FD7450C0DAB575(bLocal_1027, 1084227584 /* Float: 5f */);
					}
					if (UNK_0xC844350D5D58C99A(bVar36) && UNK_0xDF1306B443CD3D15(bVar36, 0))
					{
						UNK_0x4A4806F9D471E491(bVar36, true, 0);
						UNK_0x1E9649458B15960F(bVar36, false);
						if (UNK_0x9C77D2D0559097F0(bVar36, 1))
						{
							UNK_0x046C362CF15F1935(&bVar36);
						}
					}
					iVar38 = 5000;
					iVar39 = UNK_0x1C0640BA9A7327B3();
					while (!UNK_0x19C7D1907D1DDDAB() && (UNK_0x1C0640BA9A7327B3() - iVar39) < iVar38)
					{
						SYSTEM::WAIT(0);
					}
					if (UNK_0x31609A585163CBAC(Local_402.f_112))
					{
						UNK_0x25BB71BA267FE042(Local_402.f_112);
					}
					StringCopy(&Global_38153, "", 32);
					if ((Local_402 == 21 || Local_402 == 22) || Local_402 == 23)
					{
						func_307(47, 1);
						func_302(47, 1);
						Global_111638.f_32744.f_4800 = 1;
					}
					UNK_0x486B4ADE317F0689();
					UNK_0x066C43E677C08D5C();
					UNK_0x8BCB70EB440DED83(1);
					UNK_0xBFE31971E49FA500(1);
					func_294(0, 1, 1, 0, 0, 0);
					bLocal_854 = false;
					Global_31024 = 0;
				}
				if (UNK_0x83D8570832F172A7(Local_516))
				{
					UNK_0xE17FDF9E3068281B(&Local_516);
				}
				func_331(iLocal_672, Local_516.f_4, Local_402.f_29.f_67);
				func_330(Local_402, 5, 1);
				func_317(Local_402);
				if (UNK_0xE4EDC4B0E92C078B(Global_75441.f_208[Local_402]))
				{
					UNK_0x142CC44DB769B57E(&(Global_75441.f_208[Local_402]));
				}
				iLocal_940 = Local_402;
				func_316();
				Local_402.f_2 = 99;
			}
			break;
		case 90:
			iLocal_669++;
			if (iLocal_669 >= 3)
			{
				if ((UNK_0x1C0640BA9A7327B3() - Local_402.f_4) < 4000)
				{
					cVar26 = { Local_402.f_29.f_63 };
					StringConCat(&cVar26, "_04", 16);
					func_315(&cVar26);
				}
				else
				{
					Local_402.f_2 = 99;
				}
			}
			break;
	}
}

void func_315(bool bParam0)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

int func_316()
{
	if (func_228(0))
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

void func_317(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case 21:
			iVar0 = 20;
			iVar1 = 155;
			break;
		case 22:
			iVar0 = 21;
			iVar1 = 156;
			break;
		case 23:
			iVar0 = 22;
			iVar1 = 157;
			break;
		case 12:
			iVar0 = 13;
			iVar1 = 57;
			break;
		case 13:
			iVar0 = 16;
			iVar1 = 62;
			break;
		case 14:
			iVar0 = 19;
			iVar1 = 63;
			break;
		case 15:
			iVar0 = 12;
			iVar1 = 56;
			break;
		case 16:
			iVar0 = 15;
			iVar1 = 60;
			break;
		case 17:
			iVar0 = 18;
			iVar1 = 61;
			break;
		case 18:
			iVar0 = 11;
			iVar1 = 55;
			break;
		case 19:
			iVar0 = 14;
			iVar1 = 58;
			break;
	}
	func_329(iVar0, 0);
	iVar2 = func_328(iVar0, iVar1, 1);
	if (iVar2 != 0)
	{
	}
	else
	{
		func_327(iVar0);
		if (func_325(iVar0, iVar1, 1))
		{
			func_318(iVar0);
			func_327(iVar0);
		}
	}
}

void func_318(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	bool bVar8;

	iVar0 = func_324(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_51915[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_51915[iVar0 /*203*/].f_10[(Global_51915[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_51915[iVar0 /*203*/].f_9 - 1);
	if (!Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_323(Global_42615[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				bVar8 = "PW_FEED_EM_1";
				break;
			case 269:
				bVar8 = "PW_FEED_EM_3";
				break;
			default:
				bVar8 = "PW_FEED_EM_2";
				break;
		}
		func_319(1, Global_42615[iVar1 /*12*/].f_2, iVar1, bVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_42615[iVar1 /*12*/].f_3)
		{
			case 0:
				func_319(0, Global_42615[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			case 1:
				func_319(1, Global_42615[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			case 2:
				func_319(2, Global_42615[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
		}
	}
}

void func_319(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];

	if (UNK_0x22A8E52414415B76())
	{
		return;
	}
	iVar0 = func_474();
	bVar1 = false;
	StringCopy(&cVar2, func_322(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				UNK_0x1E64CE678ED5F61E("PROPR_INCEMAIL1");
				break;
			case 73:
				UNK_0x1E64CE678ED5F61E("PROPR_INCEMAIL3");
				break;
			case 74:
				UNK_0x1E64CE678ED5F61E("PROPR_INCEMAIL2");
				break;
			default:
				UNK_0x1E64CE678ED5F61E(bParam3);
				if (!UNK_0xEA6BC48857E0AC4C(bParam4))
				{
					UNK_0x6B012227B3921E18(bParam4);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam5))
				{
					UNK_0x6B012227B3921E18(bParam5);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam6))
				{
					UNK_0x6B012227B3921E18(bParam6);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam7))
				{
					UNK_0x6B012227B3921E18(bParam7);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam8))
				{
					UNK_0x6B012227B3921E18(bParam8);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam9))
				{
					UNK_0x6B012227B3921E18(bParam9);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam10))
				{
					UNK_0x6B012227B3921E18(bParam10);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam11))
				{
					UNK_0x6B012227B3921E18(bParam11);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam12))
				{
					UNK_0x6B012227B3921E18(bParam12);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam13))
				{
					UNK_0x6B012227B3921E18(bParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_320(UNK_0x1AEA174B291A9906(&cVar2, &cVar2, 0, 2, UNK_0x19C9F30A7697B43C(func_321(iParam1)), 0));
		}
		else
		{
			func_320(UNK_0x1AEA174B291A9906("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, UNK_0x19C9F30A7697B43C(func_321(iParam1)), 0));
		}
		switch (Global_19486)
		{
			case 0:
				StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
				Global_42607++;
				if (Global_42607 > 16)
				{
					Global_42607 = 16;
				}
				break;
			case 2:
				StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
				Global_42609++;
				if (Global_42609 > 16)
				{
					Global_42609 = 16;
				}
				break;
			case 1:
				StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
				Global_42608++;
				if (Global_42608 > 16)
				{
					Global_42608 = 16;
				}
				break;
			default:
				StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
				break;
		}
		UNK_0x4D7F4CC43D4D0DE3(-1, "Notification", &Global_19475, 1);
	}
}

void func_320(int iParam0)
{
	Global_42610[Global_42614] = iParam0;
	Global_21863 = 1;
	Global_21862 = iParam0;
	Global_42614++;
	if (Global_42614 == 3)
	{
		Global_42614 = 0;
	}
}

char* func_321(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		case 3:
			return "EMSTR_3";
		case 1:
			return "EMSTR_6";
		case 2:
			return "EMSTR_9";
		case 4:
			return "EMSTR_12";
		case 5:
			return "EMSTR_29";
		case 6:
			return "EMSTR_36";
		case 7:
			return "EMSTR_39";
		case 8:
			return "EMSTR_52";
		case 9:
			return "EMSTR_55";
		case 10:
			return "EMSTR_58";
		case 11:
			return "EMSTR_78";
		case 12:
			return "EMSTR_81";
		case 13:
			return "EMSTR_84";
		case 14:
			return "EMSTR_87";
		case 15:
			return "EMSTR_106";
		case 16:
			return "EMSTR_114";
		case 17:
			return "EMSTR_142";
		case 18:
			return "EMSTR_145";
		case 19:
			return "EMSTR_152";
		case 20:
			return "EMSTR_157";
		case 21:
			return "EMSTR_163";
		case 22:
			return "EMSTR_182";
		case 23:
			return "EMSTR_187";
		case 24:
			return "EMSTR_190";
		case 25:
			return "EMSTR_206";
		case 26:
			return "EMSTR_219";
		case 27:
			return "EMSTR_226";
		case 28:
			return "EMSTR_233";
		case 29:
			return "EMSTR_242";
		case 30:
			return "EMSTR_249";
		case 31:
			return "EMSTR_262";
		case 32:
			return "EMSTR_269";
		case 33:
			return "EMSTR_319";
		case 34:
			return "EMSTR_340";
		case 35:
			return "EMSTR_348";
		case 36:
			return "EMSTR_182";
		case 37:
			return "EMSTR_357";
		case 38:
			return "EMSTR_360";
		case 39:
			return "EMSTR_369";
		case 40:
			return "EMSTR_376";
		case 41:
			return "EMSTR_379";
		case 42:
			return "EMSTR_382";
		case 43:
			return "EMSTR_384";
		case 44:
			return "EMSTR_387";
		case 45:
			return "EMSTR_390";
		case 46:
			return "EMSTR_393";
		case 47:
			return "EMSTR_396";
		case 48:
			return "EMSTR_399";
		case 49:
			return "EMSTR_402";
		case 50:
			return "EMSTR_405";
		case 51:
			return "EMSTR_408";
		case 52:
			return "EMSTR_411";
		case 53:
			return "EMSTR_414";
		case 54:
			return "EMSTR_465";
		case 55:
			return "EMSTR_468";
		case 56:
			return "EMSTR_489";
		case 57:
			return "EMSTR_492";
		case 58:
			return "EMSTR_495";
		case 59:
			return "EMSTR_498";
		case 60:
			return "EMSTR_501";
		case 61:
			return "EMSTR_504";
		case 62:
			return "EMSTR_507";
		case 63:
			return "EMSTR_640";
		case 64:
			return "EMSTR_643";
		case 65:
			return "EMSTR_652";
		default:
			break;
	}
	return "NULL";
}

char* func_322(int iParam0, bool bParam1)
{
	*bParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[0 /*29*/].f_7));
		case 1:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[1 /*29*/].f_7));
		case 2:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[2 /*29*/].f_7));
		case 7:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[12 /*29*/].f_7));
		case 4:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[60 /*29*/].f_7));
		case 6:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[62 /*29*/].f_7));
		case 3:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[14 /*29*/].f_7));
		case 16:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[97 /*29*/].f_7));
		case 19:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[99 /*29*/].f_7));
		case 15:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[96 /*29*/].f_7));
		case 63:
			return "CHAR_CARSITE2";
		case 64:
			return "CHAR_BOATSITE";
		case 8:
			return "CHAR_BANK_MAZE";
		case 9:
			return "CHAR_BANK_FLEECA";
		case 10:
			return "CHAR_BANK_BOL";
		case 21:
			return "CHAR_MINOTAUR";
		case 25:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[15 /*29*/].f_7));
		case 26:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[30 /*29*/].f_7));
		case 27:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[17 /*29*/].f_7));
		case 29:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[20 /*29*/].f_7));
		case 30:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[43 /*29*/].f_7));
		case 31:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[44 /*29*/].f_7));
		case 32:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[19 /*29*/].f_7));
		case 34:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[40 /*29*/].f_7));
		case 36:
			return UNK_0x19C9F30A7697B43C("CELL_E_381");
		case 38:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[64 /*29*/].f_7));
		case 5:
			return "CHAR_EPSILON";
		case 13:
			return "CHAR_MILSITE";
		case 11:
			return "CHAR_CARSITE";
		case 14:
			return "CHAR_BOATSITE";
		case 12:
			return "CHAR_PLANESITE";
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		case 55:
			return "CHAR_CARSITE2";
		case 54:
			return "CHAR_BIKESITE";
		case 39:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[122 /*29*/].f_7));
		case 40:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[125 /*29*/].f_7));
		case 41:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[113 /*29*/].f_7));
		case 42:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[126 /*29*/].f_7));
		case 43:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[127 /*29*/].f_7));
		case 44:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[124 /*29*/].f_7));
		case 45:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[114 /*29*/].f_7));
		case 46:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[115 /*29*/].f_7));
		case 47:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[116 /*29*/].f_7));
		case 48:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[123 /*29*/].f_7));
		case 49:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[117 /*29*/].f_7));
		case 50:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[118 /*29*/].f_7));
		case 51:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[119 /*29*/].f_7));
		case 52:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[120 /*29*/].f_7));
		case 53:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[121 /*29*/].f_7));
		default:
			break;
	}
	*bParam1 = 0;
	return "ERROR!";
}

struct<16> func_323(int iParam0)
{
	struct<16> Var0;
	struct<16> Var16;

	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_324(int iParam0)
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

bool func_325(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_329(iParam0, 1);
	if (iVar0 == -1)
	{
		return false;
	}
	if (Global_51915[iVar0 /*203*/].f_9 == 4)
	{
		return false;
	}
	Global_51915[iVar0 /*203*/].f_2 = iParam0;
	Global_51915[iVar0 /*203*/].f_10[Global_51915[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_51915[iVar0 /*203*/].f_10[Global_51915[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_51915[iVar0 /*203*/].f_10[Global_51915[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_51915[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_51915[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_51915[iVar0 /*203*/].f_4[iVar1] == Global_42615[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_51915[iVar0 /*203*/].f_3 == 4)
		{
			return false;
		}
		else
		{
			Global_51915[iVar0 /*203*/].f_4[Global_51915[iVar0 /*203*/].f_3] = Global_42615[iParam1 /*12*/].f_3;
			Global_51915[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_51915[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_51915[iVar0 /*203*/].f_4[iVar1] == Global_42615[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_51915[iVar0 /*203*/].f_3 == 4)
		{
			return false;
		}
		else
		{
			Global_51915[iVar0 /*203*/].f_4[Global_51915[iVar0 /*203*/].f_3] = Global_42615[iParam1 /*12*/].f_2;
			Global_51915[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_51915[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_51915[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_326(Global_51915[iVar0 /*203*/].f_4[iVar1], Global_51915[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return true;
}

void func_326(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;

	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_45940[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_45940[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_323(Global_42615[iVar20 /*12*/].f_1) };
		if (Global_42615[iVar20 /*12*/].f_2 == iParam0 && !Global_42615[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_42615[iVar20 /*12*/].f_2;
		iVar0 = Global_51553[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_51553[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_42607 = (Global_42607 - 1);
						if (Global_42607 < 0)
						{
							Global_42607 = 0;
						}
						break;
					case 1:
						Global_42608 = (Global_42608 - 1);
						if (Global_42608 < 0)
						{
							Global_42608 = 0;
						}
						break;
					case 2:
						Global_42609 = (Global_42609 - 1);
						if (Global_42609 < 0)
						{
							Global_42609 = 0;
						}
						break;
				}
			}
		}
		Global_51553[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_51553[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_51553[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_51553[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_51553[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_51553[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_51553[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_51553[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_42607 = (Global_42607 - 1);
						if (Global_42607 < 0)
						{
							Global_42607 = 0;
						}
						break;
					case 1:
						Global_42608 = (Global_42608 - 1);
						if (Global_42608 < 0)
						{
							Global_42608 = 0;
						}
						break;
					case 2:
						Global_42609 = (Global_42609 - 1);
						if (Global_42609 < 0)
						{
							Global_42609 = 0;
						}
						break;
				}
			}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_51915[iVar24 /*203*/].f_1 == iParam1 && Global_51915[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_51553[iParam0 /*120*/].f_18[iVar0] = Global_51915[iVar23 /*203*/].f_1;
		Global_51553[iParam0 /*120*/].f_1[iVar0] = (Global_51915[iVar23 /*203*/].f_9 - 1);
		Global_51553[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_51553[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_51553[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_51553[iParam0 /*120*/]++;
		iVar25 = Global_51553[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_51915[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_42615[iVar26 /*12*/].f_2;
		if (Global_51915[iVar23 /*203*/].f_10[(Global_51915[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_51915[iVar23 /*203*/].f_10[(Global_51915[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_323(Global_42615[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_51553[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_319(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				case 1:
					if (iVar2 == 249)
					{
						func_319(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_319(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				case 2:
					func_319(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			}
		}
	}
}

void func_327(int iParam0)
{
	int iVar0;

	if (iParam0 == 26)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24981, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_324(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_51915[iVar0 /*203*/] = 0;
}

int func_328(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (iParam2 < 1)
	{
		return 0;
	}
	if (Global_53337 == 8)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_51915[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_51915[iVar1 /*203*/].f_1 > 0)
			{
				iVar0 = Global_51915[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (Global_53338[iVar1 /*53*/].f_52 == 0)
		{
			Global_53338[iVar1 /*53*/].f_52 = iVar0;
			Global_53338[iVar1 /*53*/] = iParam0;
			Global_53338[iVar1 /*53*/].f_1 = iParam1;
			Global_53338[iVar1 /*53*/].f_2 = iParam2;
			Global_111638.f_21032.f_310++;
			if (Global_111638.f_21032.f_310 == 0)
			{
				Global_111638.f_21032.f_310 = 1;
			}
			Global_53338[iVar1 /*53*/].f_10 = 0;
			Global_53338[iVar1 /*53*/].f_3 = Global_111638.f_21032.f_310;
			Global_53338[iVar1 /*53*/].f_4 = 1;
			Global_53337++;
			return Global_53338[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

int func_329(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_324(iParam0);
	if (iVar0 > -1)
	{
		if (Global_51915[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_51915[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_51915[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_51915[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_51915[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_51915[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_51915[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_51915[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_51553[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_51553[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_51553[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_51553[iVar6 /*120*/].f_18[iVar8] == Global_51915[iVar4 /*203*/].f_1)
							{
								if (Global_51553[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_42607 = (Global_42607 - 1);
											break;
										case 1:
											Global_42608 = (Global_42608 - 1);
											break;
										case 2:
											Global_42609 = (Global_42609 - 1);
											break;
									}
								}
							}
						}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_51915[iVar4 /*203*/].f_2 = iParam0;
	Global_51915[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_51915[iVar4 /*203*/] = 1;
	}
	Global_111638.f_21032.f_310++;
	if (Global_111638.f_21032.f_310 == 0)
	{
		Global_111638.f_21032.f_310 = 1;
	}
	Global_51915[iVar4 /*203*/].f_1 = Global_111638.f_21032.f_310;
	Global_51915[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_330(int iParam0, bool bParam1, bool bParam2)
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

int func_331(int iParam0, int iParam1, int iParam2)
{
	if (func_360(iParam0) == 3)
	{
		return 0;
	}
	if (func_360(iParam0) == 4)
	{
		return 0;
	}
	return func_332(func_360(iParam0), 0, iParam1, iParam2, 0);
}

int func_332(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_359();
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
					func_358(99, 1);
					func_357(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_357(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_357(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_342(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_341(5))
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
							func_357(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_357(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_357(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_341(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_357(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_357(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_357(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_357(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_357(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_357(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_357(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_357(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_357(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_357(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_357(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_357(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_357(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_357(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_357(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_341(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_357(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_357(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_357(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_357(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_357(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_357(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_340(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_358(95, iParam3);
					break;
				case 1:
					func_358(97, iParam3);
					break;
				case 2:
					func_358(96, iParam3);
					break;
			}
			func_358(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_335(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_335(bVar1);
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
					func_357(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					func_357(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					func_357(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
	func_334(iParam0);
	if (Global_41431 == 15)
	{
		func_333(0);
	}
	return 1;
}

void func_333(bool bParam0)
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

void func_334(int iParam0)
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

void func_335(bool bParam0)
{
	bool bVar0;
	char cVar1[64];

	if (bParam0 == 8)
	{
		func_339(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_339(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_339(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_339(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_338(8269, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_338(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_338(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_338(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_338(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_338(8274, 0, -1, 1, 0);
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
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0) || UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_337() /*10930*/].f_6174.f_10, bParam0))
	{
		bVar0 = true;
		UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		UNK_0x0674E58A79778E99(&(Global_2097152[func_337() /*10930*/].f_6174.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UNK_0x1E64CE678ED5F61E("COUP_RED");
		UNK_0x6B012227B3921E18(func_336(bParam0));
		UNK_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_336(bool bParam0)
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

int func_337()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_338(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_167(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_339(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_95();
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

void func_340(int iParam0)
{
	func_358(93, iParam0);
	func_358(29, iParam0);
	func_358(30, iParam0);
}

bool func_341(bool bParam0)
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
		return func_170(129, -1, -1);
	}
	if (bParam0 == 9)
	{
		return func_170(135, -1, -1);
	}
	if (bParam0 == 10)
	{
		return func_170(136, -1, -1);
	}
	if (bParam0 == 11)
	{
		return func_170(137, -1, -1);
	}
	if (bParam0 == 12)
	{
		iVar0 = UNK_0xDD0E7998AE8AD485();
		iVar1 = func_166(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 13)
	{
		iVar2 = UNK_0xDD0E7998AE8AD485();
		iVar3 = func_166(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 14)
	{
		iVar4 = UNK_0xDD0E7998AE8AD485();
		iVar5 = func_166(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 15)
	{
		iVar6 = UNK_0xDD0E7998AE8AD485();
		iVar7 = func_166(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 16)
	{
		iVar8 = UNK_0xDD0E7998AE8AD485();
		iVar9 = func_166(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 17)
	{
		iVar10 = UNK_0xDD0E7998AE8AD485();
		iVar11 = func_166(8274, -1, 0);
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
	return UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_337() /*10930*/].f_6174.f_10, bParam0);
}

int func_342(bool bParam0)
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
		func_356(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_343(27, 1);
	return 1;
}

int func_343(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_344(iParam0, iParam1);
}

int func_344(int iParam0, int iParam1)
{
	if (func_27(14) && !func_355(iParam0))
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
	if (func_354(&Global_4270065))
	{
		if (func_352(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_345(&Global_4270065, iParam0))
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

bool func_345(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_27(14) && !func_355(iParam1))
	{
		return false;
	}
	if (func_352(uParam0, iParam1))
	{
		return false;
	}
	if (func_351(uParam0) < 0f)
	{
		func_350(uParam0, 0);
	}
	func_348(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_346(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_346(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_355(iParam1))
	{
		return 0;
	}
	if (func_352(uParam0, iParam1))
	{
		return 0;
	}
	if (func_351(uParam0) < 0f)
	{
		func_350(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_347(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_347(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_348(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_349(uParam0, iVar0);
		iVar0++;
	}
	func_350(uParam0, (Global_4270064 - 0.5f));
}

void func_349(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_350(var uParam0, float fParam1)
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

float func_351(var uParam0)
{
	return uParam0->f_80;
}

bool func_352(var uParam0, int iParam1)
{
	return func_353(uParam0, iParam1) != -1;
}

int func_353(var uParam0, int iParam1)
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

bool func_354(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_355(int iParam0)
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

int func_356(int iParam0, bool bParam1)
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

void func_357(int iParam0, int iParam1)
{
	bool bVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	UNK_0xCDC520E5E48E63D9(iParam0, bVar0, 1);
}

void func_358(int iParam0, int iParam1)
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

void func_359()
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

int func_360(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

bool func_361(int iParam0)
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
			if (func_362())
			{
				Global_27 = UNK_0x1C0640BA9A7327B3();
				return true;
			}
		}
	}
	return false;
}

bool func_362()
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

int func_363(int iParam0)
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

bool func_364(int iParam0)
{
	return func_365(iParam0, Global_41431);
}

int func_365(int iParam0, int iParam1)
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

void func_366(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = func_474();
	if (iParam2 != 145)
	{
		iVar2 = iParam2;
	}
	bVar3 = func_131(iParam1);
	switch (iParam0)
	{
		case 10:
			iVar0 = 5;
			switch (iVar2)
			{
				case 0:
					iVar1 = 32;
					break;
				case 2:
					iVar1 = 33;
					break;
				case 1:
					iVar1 = 31;
					break;
			}
			break;
		case 11:
			iVar0 = 7;
			if (((iParam1 == 15 || iParam1 == 16) || iParam1 == 164) || iParam1 == 217)
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 191;
						break;
					case 2:
						iVar1 = 193;
						break;
					case 1:
						iVar1 = 192;
						break;
				}
			}
			else
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 40;
						break;
					case 2:
						iVar1 = 42;
						break;
					case 1:
						iVar1 = 41;
						break;
				}
			}
			break;
		case 12:
			iVar0 = 6;
			switch (iVar2)
			{
				case 0:
					iVar1 = 34;
					break;
				case 2:
					iVar1 = 36;
					break;
				case 1:
					iVar1 = 35;
					break;
			}
			break;
		case 13:
			iVar0 = 8;
			switch (iVar2)
			{
				case 0:
					iVar1 = 37;
					break;
				case 2:
					iVar1 = 39;
					break;
				case 1:
					iVar1 = 38;
					break;
			}
			break;
		case 15:
			iVar0 = 9;
			switch (iVar2)
			{
				case 0:
					iVar1 = 186;
					break;
				case 2:
					iVar1 = 188;
					break;
				case 1:
					iVar1 = 185;
					break;
			}
			break;
		case 16:
			iVar0 = 10;
			switch (iVar2)
			{
				case 0:
					iVar1 = 189;
					break;
				case 2:
					iVar1 = 190;
					break;
				case 1:
					iVar1 = 187;
					break;
			}
			break;
		default:
			return;
	}
	if (func_325(iVar0, iVar1, 1))
	{
		func_367(iVar0, bVar3);
		func_318(iVar0);
		func_327(iVar0);
	}
}

void func_367(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_324(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_51915[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_51915[iVar0 /*203*/].f_10[(Global_51915[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_51915[iVar0 /*203*/].f_10[(Global_51915[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_51915[iVar0 /*203*/].f_10[(Global_51915[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_51915[iVar0 /*203*/].f_10[(Global_51915[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

bool func_368(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_373(bParam1) || !func_373(bParam0))
	{
		return true;
	}
	bVar0 = func_55(bParam0);
	bVar1 = func_55(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_57(bParam0);
	bVar1 = func_57(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_372(bParam0);
	bVar1 = func_372(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_371(bParam0);
	bVar1 = func_371(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_370(bParam0);
	bVar1 = func_370(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_369(bParam0);
	bVar1 = func_369(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	return false;
}

int func_369(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_370(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_371(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_372(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

bool func_373(bool bParam0)
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
	iVar0 = func_369(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_370(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_371(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_55(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_57(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_372(bParam0);
	if (iVar5 < 1 || iVar5 > func_54(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_374()
{
	int iVar0;
	var uVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	vector3 vVar15;
	int iVar18;
	bool bVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	vector3 vVar26;
	int iVar29;

	iVar0 = 0;
	if (UNK_0x8A22C4C08282BF26(joaat("STARTUP_POSITIONING")) == 0)
	{
		if (Global_111638.f_32744.f_5588)
		{
			if (!UNK_0xC844350D5D58C99A(Global_76346))
			{
				func_287(&(Global_111638.f_32744.f_5510), Global_111638.f_32744.f_5590);
				Global_111638.f_32744.f_5588 = 0;
			}
			else if (!UNK_0xDF1306B443CD3D15(Global_76346, 0) || func_47(Global_76346, Global_111638.f_32744.f_5590, 1))
			{
				Global_111638.f_32744.f_5588 = 0;
			}
			else
			{
				if ((UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0) == Global_76346) && func_401(UNK_0x16F2683693E537C9()) != Global_111638.f_32744.f_5590)
				{
					Global_111638.f_32744.f_5590 = func_401(UNK_0x16F2683693E537C9());
				}
				if (Global_76346 != bLocal_671)
				{
					bVar2 = UNK_0xA712FAE854841798(Global_76346, &uVar1);
					if (!UNK_0xEA6BC48857E0AC4C(bVar2))
					{
						if (UNK_0x12AB0310C2281427(bVar2) == UNK_0x12AB0310C2281427("vehicle_gen_controller"))
						{
							Global_111638.f_32744.f_5588 = 0;
							bLocal_1028 = Global_76346;
							if (Global_75441.f_139[24] == Global_76346 || (Global_76347 == Global_76346 && Global_76348 == 24))
							{
								func_400(458, 24, -1, 1);
							}
							else
							{
								func_400(458, 0, -1, 1);
							}
							Global_76346 = 0;
						}
					}
				}
				if (((Global_111638.f_32744.f_5590 != func_474() && Global_98148[Global_111638.f_32744.f_5590 /*98*/] == Global_111638.f_32744.f_5510.f_66) && UNK_0x7F8A39872A07D2CE(&(Global_98148[Global_111638.f_32744.f_5590 /*98*/].f_27), &(Global_111638.f_32744.f_5510.f_1))) && !UNK_0x991B1F0980C62628())
				{
					func_116(&(Global_111638.f_32744.f_5510), &(Global_111638.f_32744.f_5600[Global_111638.f_32744.f_5590 /*78*/]));
					Global_111638.f_32744.f_5588 = 0;
					bLocal_1028 = false;
					func_400(458, 0, -1, 1);
					Global_76346 = 0;
				}
			}
		}
		else if ((UNK_0xC844350D5D58C99A(Global_76346) && UNK_0xDF1306B443CD3D15(Global_76346, 0)) && !func_47(Global_76346, Global_111638.f_32744.f_5590, 1))
		{
			Global_111638.f_32744.f_5588 = 1;
		}
		if (UNK_0xC844350D5D58C99A(bLocal_1028) && UNK_0xDF1306B443CD3D15(bLocal_1028, 0))
		{
			if (((!Global_111638.f_32744.f_5588 && bLocal_1028 != Global_76346) && bLocal_1028 != bLocal_1029) && !UNK_0x9C77D2D0559097F0(bLocal_1028, 1))
			{
				func_31(bLocal_1028, 145);
				bLocal_1028 = false;
				func_400(458, 0, -1, 1);
			}
		}
		else if (bLocal_1028 != 0)
		{
			bLocal_1028 = false;
			func_400(458, 0, -1, 1);
		}
		if (UNK_0xC844350D5D58C99A(bLocal_1029) && UNK_0xDF1306B443CD3D15(bLocal_1029, 0))
		{
		}
		else if (bLocal_1029 != 0)
		{
			bLocal_1029 = false;
		}
	}
	if (Global_76350.f_66 != 0 && Global_76347 == 0)
	{
		func_287(&Global_76350, Global_76428);
		Global_76350.f_66 = 0;
	}
	vVar3 = { 433.6721f, -1006.538f, 25.96351f };
	vVar6 = { 433.6578f, -1017.5f, 32.09895f };
	bVar9 = 11.25f;
	if (iLocal_667 > 0 && iLocal_667 < 99)
	{
		if (iLocal_667 != 3)
		{
			if (((((UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) || !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vVar3, vVar6, bVar9, 0, true, 0)) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(14))
			{
				iLocal_667 = 99;
			}
		}
	}
	if (func_399(iLocal_672))
	{
		if (!UNK_0xE4EDC4B0E92C078B(iLocal_857))
		{
			if (((func_27(15) || func_27(12)) && iLocal_667 != 3) && !UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
			{
				iLocal_857 = func_397(428.37f, -1013.5f, 27.93f, 0);
				UNK_0xBC8E0A7390523199(iLocal_857, 225);
				UNK_0xDC5B2F9D0CCE3A10(iLocal_857, "IMPOUND_BLIPNAME");
				UNK_0x6ABCCE651368DB93(iLocal_857, true);
			}
		}
		else if ((!(func_27(15) || func_27(12)) || iLocal_667 == 3) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
		{
			UNK_0x142CC44DB769B57E(&iLocal_857);
		}
	}
	else if (UNK_0xE4EDC4B0E92C078B(iLocal_857))
	{
		UNK_0x142CC44DB769B57E(&iLocal_857);
	}
	switch (iLocal_667)
	{
		case 0:
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if ((Local_402.f_2 == 0 && (func_27(15) || func_27(12))) && !UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
				{
					if (func_399(iLocal_672))
					{
						if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vVar3, vVar6, bVar9, 0, true, 0))
						{
							if (func_363(iLocal_672) >= 250)
							{
								iVar10 = 0;
								iVar11 = 0;
								while (iVar11 < 2)
								{
									if (func_283(iVar11, iLocal_672))
									{
										iVar10++;
									}
									iVar11++;
								}
								if (iVar10 > 1)
								{
									func_220(&iLocal_668, 3, "IMPOUND_TRIG2", 0, 0, 0, 0);
								}
								else
								{
									func_220(&iLocal_668, 3, "IMPOUND_TRIG1", 0, 0, 0, 0);
								}
								iLocal_667 = 1;
							}
							else
							{
								func_218("SCLUB_NO_MONEY", -1);
							}
						}
					}
				}
			}
			break;
		case 1:
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && func_216(0, -1, 0))
			{
				if (func_215(iLocal_668, 1))
				{
					func_69(&iLocal_668);
					UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
					func_396();
					iVar12 = 0;
					iVar13 = 0;
					while (iVar13 < 2)
					{
						if (func_283(iVar13, iLocal_672))
						{
							iVar12++;
						}
						iVar13++;
					}
					if (iVar12 > 1)
					{
						bLocal_657 = false;
						bLocal_658 = false;
						bLocal_659 = false;
						bLocal_662 = -1;
						iLocal_667++;
					}
					else
					{
						iVar14 = 0;
						while (iVar14 < 2)
						{
							if (func_283(iVar14, iLocal_672))
							{
								if (iVar14 == 0)
								{
									vVar15 = { 431.4f, -997.33f, 24.76f };
								}
								else
								{
									vVar15 = { 436.39f, -997.25f, 24.76f };
								}
								while (!func_380(&bLocal_671, iVar14, vVar15, 179.24f, 1))
								{
									SYSTEM::WAIT(0);
								}
								if (UNK_0xC844350D5D58C99A(bLocal_671))
								{
									if (iVar14 == 0)
									{
										func_379(18, 1, 0);
									}
									else
									{
										func_379(19, 1, 0);
									}
									if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
									{
										UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
									}
									func_331(iLocal_672, 119, 250);
									func_378(iVar14);
									func_31(bLocal_671, func_474());
									func_71(1, -1);
									iLocal_667 = 3;
									func_69(&iLocal_668);
									iLocal_668 = -1;
									bLocal_659 = false;
								}
							}
							iVar14++;
						}
					}
				}
			}
			break;
		case 2:
			switch (func_474())
			{
				case 0:
					iVar18 = 0;
					break;
				case 1:
					iVar18 = 1;
					break;
				case 2:
					iVar18 = 2;
					break;
			}
			func_396();
			if (!bLocal_657 || bLocal_658)
			{
				func_213(0, 0);
				func_212(1, 1, 0, 0, 0);
				func_211(1, 2, 1, 1, 1);
				func_210("IMPOUND_TITLE");
				bLocal_663 = false;
				bVar19 = -1;
				bVar21 = false;
				iVar20 = 0;
				while (iVar20 < 2)
				{
					if (func_283(iVar20, iLocal_672))
					{
						func_134(bVar21, UNK_0x1739BA50603D849C(Global_111638.f_32744.f_5038[iVar18 /*157*/][iVar20 /*78*/].f_66), 0, 1, 0, 0);
						if (bVar19 == -1)
						{
							bVar19 = bVar21;
							bLocal_662 = bVar21;
						}
						UNK_0x5D96D8530B3D0904(&bLocal_663, bVar21);
						iLocal_664[bVar21] = iVar20;
						func_134(bVar21, "IMPOUND_COST", 1, 1, 0, 0);
						func_377(250, 0);
						bVar21++;
					}
					iVar20++;
				}
				bVar21 = false;
				func_127(bLocal_662, 1, 1);
				bLocal_660 = true;
				bLocal_658 = false;
				bLocal_657 = true;
			}
			else
			{
				iVar0 = 0;
				if (UNK_0x0EFF6B4415DAF4A1())
				{
					if (UNK_0x9E6C8D8976DA0ECD(2))
					{
						UNK_0x38C3A68D7861DCFD(0, 1, 1);
						UNK_0x38C3A68D7861DCFD(0, 2, 1);
						UNK_0xEAB026E686C0D991(0, 237, 1);
						UNK_0xEAB026E686C0D991(0, 238, 1);
						UNK_0xEAB026E686C0D991(0, 241, 1);
						UNK_0xEAB026E686C0D991(0, 242, 1);
						func_124(0, 0, 0, 1);
						func_123(0, -1, 1);
						if (func_122())
						{
							if (Global_4268497 != bLocal_662)
							{
								UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								bLocal_662 = Global_4268497;
								func_127(bLocal_662, 1, 1);
								bLocal_660 = true;
							}
							else
							{
								iVar0 = 1;
							}
						}
					}
				}
				if (UNK_0xBFC0798A6E3417F9(2, 188) || UNK_0xBFC0798A6E3417F9(2, 241))
				{
					if (!bLocal_659)
					{
						bLocal_660 = true;
						UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						bVar22 = (bLocal_662 - 1);
						while (bVar22 >= 0)
						{
							if (UNK_0xEAE0D21A50E6C7F4(bLocal_663, bVar22))
							{
								bLocal_662 = bVar22;
								bVar23 = true;
								bVar22 = false;
							}
							bVar22 = (bVar22 + -1);
						}
						if (!bVar23)
						{
							bVar22 = 31;
							while (bVar22 >= bLocal_662 + 1)
							{
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_663, bVar22))
								{
									bLocal_662 = bVar22;
									bVar23 = true;
									bVar22 = bLocal_662;
								}
								bVar22 = (bVar22 + -1);
							}
						}
						if (bVar23)
						{
							func_127(bLocal_662, 1, 1);
						}
					}
				}
				else if (UNK_0xBFC0798A6E3417F9(2, 187) || UNK_0xBFC0798A6E3417F9(2, 242))
				{
					if (!bLocal_659)
					{
						bLocal_660 = true;
						UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						bVar24 = bLocal_662 + 1;
						while (bVar24 <= 31)
						{
							if (UNK_0xEAE0D21A50E6C7F4(bLocal_663, bVar24))
							{
								bLocal_662 = bVar24;
								bVar25 = true;
								bVar24 = 31;
							}
							bVar24++;
						}
						if (!bVar25)
						{
							bVar24 = false;
							while (bVar24 <= (bLocal_662 - 1))
							{
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_663, bVar24))
								{
									bLocal_662 = bVar24;
									bVar25 = true;
									bVar24 = bLocal_662;
								}
								bVar24++;
							}
						}
						if (bVar25)
						{
							func_127(bLocal_662, 1, 1);
						}
					}
				}
				else if (UNK_0xB9132A06AE472728(2, 201) || iVar0 == 1)
				{
					iVar0 = 0;
					UNK_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!bLocal_659)
					{
						func_121("IMPOUND_CNF", 0, 0);
						func_120(-1);
						func_119(201, "ITEM_YES", -1);
						func_119(202, "ITEM_NO", -1);
						bLocal_659 = true;
					}
					else
					{
						if (bLocal_662 == 0)
						{
							vVar26 = { 431.4f, -997.33f, 24.76f };
						}
						else
						{
							vVar26 = { 436.39f, -997.25f, 24.76f };
						}
						if (func_283(iLocal_664[bLocal_662], iLocal_672))
						{
							while (!func_380(&bLocal_671, iLocal_664[bLocal_662], vVar26, 179.24f, 1))
							{
								SYSTEM::WAIT(0);
							}
							if (UNK_0xC844350D5D58C99A(bLocal_671))
							{
								if (bLocal_662 == 0)
								{
									func_379(18, 1, 0);
								}
								else
								{
									func_379(19, 1, 0);
								}
								if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
								{
									UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
								}
								func_331(iLocal_672, 119, 250);
								func_378(iLocal_664[bLocal_662]);
								func_31(bLocal_671, func_474());
								func_71(1, -1);
								iLocal_667++;
								func_69(&iLocal_668);
								iLocal_668 = -1;
								bLocal_659 = false;
							}
						}
						bLocal_658 = true;
					}
				}
				else if (UNK_0xB9132A06AE472728(2, 202) || UNK_0xB9132A06AE472728(2, 238))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (bLocal_659)
					{
						bLocal_660 = true;
						bLocal_659 = false;
					}
					else
					{
						iLocal_667 = 99;
					}
				}
			}
			UNK_0x3FC8DBCC154CA56B();
			if (bLocal_660)
			{
				func_121("", 0, 0);
				func_120(-1);
				func_119(201, "ITEM_SELECT", -1);
				func_119(202, "ITEM_EXIT", -1);
				bLocal_659 = false;
				bLocal_660 = false;
			}
			if (func_216(0, -1, 0))
			{
				func_74(1, -1, 1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1);
			}
			break;
		case 3:
			if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), 431.4f, -997.33f, 24.76f, 1) > 20f && !func_376())
			{
				func_31(bLocal_671, func_474());
				iLocal_667 = 99;
			}
			else if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), 431.4f, -997.33f, 24.76f, 1) > 100f)
			{
				if (UNK_0xC844350D5D58C99A(bLocal_671))
				{
					if (!UNK_0x437347B10A200C4B(bLocal_671, 0))
					{
						if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_671, 0) && UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bLocal_671, true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), 1) > 100f)
						{
							if (!UNK_0x0A059E0DB9253280(bLocal_671))
							{
								func_375(bLocal_671, 1, 145);
								UNK_0xA954465BA6FDEFE2(&bLocal_671);
								UNK_0x28F5E4DA506AC0CA(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false, 0);
								iLocal_667 = 99;
							}
						}
						else if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_671, 0))
						{
							UNK_0x28F5E4DA506AC0CA(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false, 0);
							func_31(bLocal_671, func_474());
							iLocal_667 = 99;
						}
					}
					else
					{
						UNK_0x28F5E4DA506AC0CA(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false, 0);
						iLocal_667 = 99;
					}
				}
				else
				{
					UNK_0x28F5E4DA506AC0CA(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false, 0);
					iLocal_667 = 99;
				}
			}
			break;
		case 99:
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			}
			func_69(&iLocal_668);
			iVar29 = 0;
			while (iVar29 < 2)
			{
				iLocal_664[iVar29] = -1;
				iVar29++;
			}
			func_379(18, 0, 0);
			func_379(19, 0, 0);
			if (UNK_0xC844350D5D58C99A(bLocal_671))
			{
				UNK_0x046C362CF15F1935(&bLocal_671);
			}
			iLocal_667 = 0;
			break;
	}
	if (iLocal_667 == 0)
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 428.2928f, -996.6834f, 24.48864f, 439.5438f, -996.7114f, 28.10333f, 8.6875f, 0, true, 0))
		{
			if (!bLocal_670)
			{
				func_379(18, 1, 0);
				bLocal_670 = true;
			}
		}
		else if (bLocal_670 && !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 431.2715f, -1004.059f, 23.98198f, 431.0394f, -993.621f, 27.61868f, 6.8125f, 0, true, 0))
		{
			func_379(18, 0, 0);
			bLocal_670 = false;
		}
	}
}

int func_375(bool bParam0, int iParam1, int iParam2)
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
	func_31(bParam0, iParam2);
	return 1;
}

bool func_376()
{
	if (UNK_0xF65264B66E133BD8(431.4424f, -997.7308f, 24.76161f, 4.75f, 0, 1, 1, 0, 0, false, 0))
	{
		return true;
	}
	else if (UNK_0xF65264B66E133BD8(436.6913f, -997.5869f, 24.75582f, 4.75f, 0, 1, 1, 0, 0, false, 0))
	{
		return true;
	}
	else if (UNK_0xF65264B66E133BD8(431.07f, -1005.57f, 26.2f, 4.75f, 0, 1, 1, 0, 0, false, 0))
	{
		return true;
	}
	else if (UNK_0xF65264B66E133BD8(436.52f, -1005.47f, 26.17f, 4.75f, 0, 1, 1, 0, 0, false, 0))
	{
		return true;
	}
	return false;
}

void func_377(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	if (Global_22350.f_5222 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	Global_22350.f_3918[Global_22350.f_5222] = iParam0;
	Global_22350.f_5222++;
	Global_22350.f_2124[Global_22350.f_5742 /*5*/][Global_22350.f_5743] = 2;
	Global_22350.f_5743++;
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_130();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_109(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_129();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

void func_378(int iParam0)
{
	int iVar0;

	switch (func_474())
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
	if (iParam0 < 0 || iParam0 >= func_284(&(Global_111638.f_32744.f_5038[iVar0 /*157*/])))
	{
		return;
	}
	Global_111638.f_32744.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66 = 0;
}

void func_379(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_40554[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_40554[iParam0 /*31*/].f_1, true))
			{
				Global_40554[iParam0 /*31*/].f_22 = -1f;
			}
			else
			{
				Global_40554[iParam0 /*31*/].f_22 = 1f;
			}
			UNK_0x838CC054A9235BEC(Global_40554[iParam0 /*31*/], Global_40554[iParam0 /*31*/].f_22, false, false);
			UNK_0x1BA7FCEAFCE8D46E(Global_40554[iParam0 /*31*/], 1, false, true);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_40554[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			Global_40554[iParam0 /*31*/].f_22 = 0f;
			UNK_0x838CC054A9235BEC(Global_40554[iParam0 /*31*/], Global_40554[iParam0 /*31*/].f_22, false, false);
			UNK_0x1BA7FCEAFCE8D46E(Global_40554[iParam0 /*31*/], 1, false, true);
		}
	}
}

bool func_380(bool bParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	int iVar0;

	if (!func_283(iParam1, func_474()) || UNK_0xC844350D5D58C99A(*bParam0))
	{
		return false;
	}
	switch (func_474())
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
	UNK_0x523BCC9DC80CD82F(Global_111638.f_32744.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
	if (UNK_0xB87F6CF6E5628C67(Global_111638.f_32744.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66))
	{
		*bParam0 = UNK_0x122AAB0B1D6F55AD(Global_111638.f_32744.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66, vParam2, bParam5, false, false, false);
		func_381(*bParam0, &(Global_111638.f_32744.f_5038[iVar0 /*157*/][iParam1 /*78*/]), 0, 1);
		UNK_0xB9FD7450C0DAB575(*bParam0, 1084227584 /* Float: 5f */);
		UNK_0x316958DDB94DF3FC(*bParam0, 0);
		UNK_0x44A200C9B6E1CEA6(*bParam0, true);
		if (bParam6)
		{
			UNK_0x71199B01895C6202(Global_111638.f_32744.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
		}
		return true;
	}
	return false;
}

void func_381(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (!func_389(bParam0))
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
			if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_33(iVar0 + 1)))
			{
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_33(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("SANDKING") || uParam1->f_66 == joaat("SANDKING2"))
		{
			iVar1 = 1;
			if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_33(iVar1 + 1)))
			{
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_33(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_33(iVar2)))
				{
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_33(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_33(iVar3)))
				{
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_33(iVar3));
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
					if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_33(iVar4)))
					{
					}
					else
					{
						UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_33(iVar4));
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
		if (((UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 15) || func_388(bParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_387())
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
		if (uParam1->f_65 == -1 && !func_35(uParam1->f_66))
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
						func_386(bParam0, uParam1->f_69);
					}
				}
				else
				{
					func_386(bParam0, uParam1->f_69);
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
			func_382(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!UNK_0xAFB8495D36825275(uParam1->f_66) && !UNK_0xA7082C42B8809BF2(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_33(iVar5 + 1)))
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

int func_382(bool bParam0, var uParam1, var uParam2)
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
	if (func_261(UNK_0x134B62B726CEC8E6(*bParam0), 1) && UNK_0x0ECB5CA5140957AD(*bParam0, 24) != func_385(*bParam0, ((*uParam1)[38] - 1)))
	{
		UNK_0xEE6A1776A67F70C1(*bParam0, 24, func_385(*bParam0, ((*uParam1)[38] - 1)), false);
	}
	func_384(bParam0);
	if (func_383(*bParam0))
	{
		UNK_0xD5A0214B20BCBAD8(*bParam0, 1);
		UNK_0x44A200C9B6E1CEA6(*bParam0, true);
	}
	return 1;
}

bool func_383(bool bParam0)
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

void func_384(bool bParam0)
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

int func_385(bool bParam0, int iParam1)
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

void func_386(bool bParam0, int iParam1)
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

bool func_387()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPINDEPENDENCE"));
}

bool func_388(bool bParam0)
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

bool func_389(bool bParam0)
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!func_395(UNK_0xD803B885F5E47A62(), -1))
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
	if (func_391(UNK_0xD803B885F5E47A62()) == 3)
	{
		if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (func_390(bParam0) != -1)
			{
				return true;
			}
		}
	}
	return false;
}

int func_390(bool bParam0)
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

int func_391(int iParam0)
{
	if (func_394(iParam0) == 233)
	{
		return func_392(iParam0);
	}
	return -1;
}

int func_392(int iParam0)
{
	if (func_393(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

bool func_393(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

int func_394(int iParam0)
{
	if (func_393(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_395(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (func_241(bParam0, 1, 1))
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

void func_396()
{
	UNK_0x5EEBDFEE72949D59(0);
	UNK_0xEAB026E686C0D991(0, 188, 1);
	UNK_0xEAB026E686C0D991(0, 187, 1);
	UNK_0xEAB026E686C0D991(0, 201, 1);
	UNK_0xEAB026E686C0D991(0, 202, 1);
	UNK_0xEAB026E686C0D991(0, 1, 1);
	UNK_0xEAB026E686C0D991(0, 2, 1);
	UNK_0xEAB026E686C0D991(0, 239, 1);
	UNK_0xEAB026E686C0D991(0, 240, 1);
}

int func_397(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_398(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

float func_398(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_399(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_283(iVar0, iParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

var func_400(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (bParam2 == -1)
	{
		bParam2 = func_95();
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

int func_401(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_402(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_402(int iParam0)
{
	if (func_25(iParam0))
	{
		return func_403(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_403(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_404(bool bParam0)
{
	int iVar0;
	struct<8> Var1;

	if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10011.f_25, 7))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 6))
		{
			if (func_27(13) && func_14(func_16()))
			{
				UNK_0x5D96D8530B3D0904(bParam0, 6);
				iVar0 = func_9();
				bParam0->f_6 = { func_435(iVar0) };
				if (Global_31043 == iVar0 || Global_31043 == 0)
				{
					func_3(1);
					Var1 = { func_434("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
					UNK_0x8BC9595FD2792B5D(&Var1);
					iVar0 = (Global_31043 + 1 % 8);
					func_432(bParam0, iVar0);
					bParam0->f_2 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(8000, 12000));
					UNK_0x5D96D8530B3D0904(bParam0, 12);
					if (iVar0 == 7)
					{
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_10011.f_25), 7);
						func_431(255, 0);
					}
				}
				else
				{
					func_432(bParam0, 0);
					UNK_0x0674E58A79778E99(&(Global_111638.f_10011.f_25), 12);
				}
			}
		}
		else
		{
			func_430();
			if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 31))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 25))
				{
					func_429(bParam0);
				}
				else if (func_428())
				{
					func_412(bParam0);
					bParam0->f_3 = UNK_0x1C0640BA9A7327B3() + 2000;
				}
				if (!func_411(0))
				{
					func_431(255, 0);
				}
			}
			else if (func_411(0))
			{
				if (UNK_0x1C0640BA9A7327B3() > bParam0->f_3)
				{
					func_431(0, 800);
				}
			}
			if (!func_27(13) || !func_14(func_16()))
			{
				func_405(bParam0);
			}
		}
	}
}

void func_405(bool bParam0)
{
	struct<8> Var0;

	if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 31))
	{
		func_410(bParam0);
	}
	if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 25))
	{
		func_406(bParam0);
	}
	Var0 = { func_434("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
	if (UNK_0x562F77A7F33D2E46(&Var0))
	{
		UNK_0x8910D3D58E0132B8(&Var0);
	}
	UNK_0x0674E58A79778E99(bParam0, 6);
	UNK_0x0674E58A79778E99(bParam0, 30);
	UNK_0x0674E58A79778E99(bParam0, 8);
}

void func_406(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = func_9();
	iVar1 = func_409(iVar0);
	bVar2 = func_408(iVar1);
	bVar3 = func_407(iVar1);
	if (bVar2 != 0)
	{
		UNK_0x71199B01895C6202(bVar2);
	}
	if (bVar3 != 0)
	{
		UNK_0x71199B01895C6202(bVar3);
	}
	UNK_0x0674E58A79778E99(bParam0, 25);
}

int func_407(int iParam0)
{
	switch (iParam0)
	{
		case 17:
			return joaat("U_M_Y_CYCLIST_01");
		case 49:
			return joaat("DUNE");
		default:
			break;
	}
	return 0;
}

int func_408(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return joaat("A_C_RABBIT_01");
		case 109:
			return joaat("A_C_BOAR");
		case 43:
			return joaat("A_C_DEER");
		case 35:
			return joaat("EMPEROR2");
		case 17:
			return joaat("SCORCHER");
		case 28:
			return joaat("A_C_MTLION");
		case 49:
			return joaat("CS_HUNTER");
		case 25:
			return joaat("A_M_Y_HIKER_01");
		case 14:
			return joaat("A_F_Y_HIPPIE_01");
		case 86:
			return joaat("A_M_M_HILLBILLY_01");
		default:
			break;
	}
	return 0;
}

int func_409(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 12;
		case 2:
			return 43;
		case 3:
			return 35;
		case 4:
			return 109;
		case 5:
			return 28;
		case 6:
			return 17;
		default:
			break;
	}
	return -1;
}

void func_410(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0->f_4))
	{
		UNK_0x58B5D6A0F1D7754D(UNK_0x68F4C0EC296D3901(bParam0->f_4, false), 10f);
		UNK_0xA954465BA6FDEFE2(&(bParam0->f_4));
	}
	if (UNK_0xC844350D5D58C99A(bParam0->f_5))
	{
		UNK_0x58B5D6A0F1D7754D(UNK_0x68F4C0EC296D3901(bParam0->f_5, false), 10f);
		UNK_0xEBA53F35D0085654(&(bParam0->f_5));
	}
	UNK_0x0674E58A79778E99(bParam0, 31);
}

bool func_411(bool bParam0)
{
	if (bParam0)
	{
		return Global_108386.f_2 > 0.5f;
	}
	return Global_108386.f_2 >= 255f;
}

void func_412(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_9();
	iVar1 = func_409(iVar0);
	func_413(iVar1, &(bParam0->f_5), &(bParam0->f_4), func_427(iVar0), func_426(iVar0), 1);
	UNK_0x5D96D8530B3D0904(bParam0, 31);
}

void func_413(int iParam0, var uParam1, var uParam2, vector3 vParam3, float fParam6, int iParam7)
{
	switch (iParam0)
	{
		case 12:
			func_425(uParam1, vParam3, fParam6, iParam7);
			break;
		case 109:
			func_424(uParam1, vParam3, fParam6, iParam7);
			break;
		case 43:
			func_423(uParam1, vParam3, fParam6, iParam7);
			break;
		case 35:
			func_422(uParam2, vParam3, fParam6, iParam7);
			break;
		case 28:
			func_421(uParam1, vParam3, fParam6, iParam7);
			break;
		case 17:
			func_420(uParam1, uParam2, vParam3, fParam6, iParam7);
			break;
		case 49:
			func_418(uParam1, uParam2, vParam3, fParam6);
			break;
		case 25:
			func_417(uParam1, vParam3, fParam6);
			break;
		case 14:
			func_416(uParam1, vParam3, fParam6);
			break;
		case 86:
			func_414(uParam1, vParam3, fParam6);
			break;
	}
}

void func_414(var uParam0, vector3 vParam1, bool bParam4)
{
	bool bVar0;

	bVar0 = func_408(86);
	if (UNK_0xB87F6CF6E5628C67(bVar0))
	{
		*uParam0 = UNK_0x36F2404464202779(5, bVar0, vParam1, bParam4, 1, true);
		UNK_0xCAC78D14D05349E7(*uParam0, 1);
		UNK_0x4E885A246A9D983A(*uParam0, 227, true);
		UNK_0x71199B01895C6202(bVar0);
		UNK_0xD458AC1C1D29C3B4(*uParam0, false, false);
		UNK_0xAC0C6241732E36F6(*uParam0);
		UNK_0x1776B2F0999C29AC(1110, (vParam1.x + 0.1f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		UNK_0x1776B2F0999C29AC(1110, (vParam1.x - 0.03f), (vParam1.y + 0.3f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		UNK_0x1776B2F0999C29AC(1110, (vParam1.x - 0.2f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		UNK_0x1776B2F0999C29AC(1110, (vParam1.x - 0.5f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		UNK_0x1776B2F0999C29AC(1110, (vParam1.x + 0.01f), (vParam1.y - 0.4f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		UNK_0x1776B2F0999C29AC(1110, (vParam1.x + 0.01f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		UNK_0x1776B2F0999C29AC(1110, (vParam1.x - 0.6f), (vParam1.y - 0.35f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_415(*uParam0);
		return;
	}
}

void func_415(bool bParam0)
{
	UNK_0xBC92C4B04B43E102(bParam0, 1, 0.431f, 0.667f, 179.593f, 0.889f, 2, 0f, "BasicSlash");
	UNK_0xBC92C4B04B43E102(bParam0, 1, 0.556f, 0.292f, 161.805f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	UNK_0xBC92C4B04B43E102(bParam0, 1, 0.708f, 0.688f, 167.897f, 0f, 1, 0f, "ShotgunLargeMonolithic");
	UNK_0xBC92C4B04B43E102(bParam0, 2, 0.472f, 0.347f, 146.133f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	UNK_0xBC92C4B04B43E102(bParam0, 2, 0.799f, 0.451f, 158.294f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	UNK_0xBC92C4B04B43E102(bParam0, 0, 0.681f, 0.507f, 158.707f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	UNK_0xBC92C4B04B43E102(bParam0, 0, 0.819f, 0.813f, 174.811f, 0.056f, 1, 0f, "ShotgunLargeMonolithic");
	UNK_0xBC92C4B04B43E102(bParam0, 0, 0.174f, 0.438f, 211.521f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	UNK_0xBC92C4B04B43E102(bParam0, 0, 0.174f, 0.486f, 213.237f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	UNK_0xBC92C4B04B43E102(bParam0, 0, 0.174f, 0.542f, 215.168f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	UNK_0xBC92C4B04B43E102(bParam0, 0, 0.236f, 0.542f, 213.752f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	UNK_0xBC92C4B04B43E102(bParam0, 0, 0.278f, 0.542f, 212.851f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	UNK_0xBC92C4B04B43E102(bParam0, 0, 0.313f, 0.542f, 212.127f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	UNK_0xBC92C4B04B43E102(bParam0, 5, 0.639f, 0.313f, 149.248f, 1f, 1, 0f, "stab");
	UNK_0xBC92C4B04B43E102(bParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "stab");
	UNK_0xBC92C4B04B43E102(bParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "BasicSlash");
	UNK_0xBC92C4B04B43E102(bParam0, 3, 0.618f, 0.451f, 204.207f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	UNK_0xBC92C4B04B43E102(bParam0, 3, 0.785f, 0.597f, 206.103f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	UNK_0xBC92C4B04B43E102(bParam0, 4, 0.688f, 0.438f, 202.91f, 1f, 1, 0f, "BasicSlash");
	UNK_0xBC92C4B04B43E102(bParam0, 4, 0.688f, 0.424f, 202.492f, 1f, 1, 0f, "BasicSlash");
	UNK_0xBC92C4B04B43E102(bParam0, 4, 0.688f, 0.347f, 200.181f, 1f, 1, 0f, "BasicSlash");
	UNK_0xBC92C4B04B43E102(bParam0, 4, 0.688f, 0.278f, 198.043f, 1f, 1, 0f, "BasicSlash");
	UNK_0xBC92C4B04B43E102(bParam0, 4, 0.688f, 0.222f, 196.275f, 1f, 1, 0f, "BasicSlash");
	UNK_0xBC92C4B04B43E102(bParam0, 4, 0.653f, 0.222f, 196.609f, 1f, 3, 0f, "BasicSlash");
	UNK_0xBC92C4B04B43E102(bParam0, 4, 0.75f, 0.222f, 195.716f, 1f, 2, 0f, "BasicSlash");
	UNK_0xBC92C4B04B43E102(bParam0, 4, 1f, 0.326f, 196.621f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	UNK_0xBC92C4B04B43E102(bParam0, 4, 0.93f, 0.451f, 200.584f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	UNK_0xBC92C4B04B43E102(bParam0, 4, 0.618f, 0.451f, 204.207f, 1f, 0, 0f, "ShotgunLargeMonolithic");
}

void func_416(var uParam0, vector3 vParam1, bool bParam4)
{
	bool bVar0;

	bVar0 = func_408(14);
	if (UNK_0xB87F6CF6E5628C67(bVar0))
	{
		*uParam0 = UNK_0x36F2404464202779(5, bVar0, vParam1, bParam4, 1, true);
		UNK_0xCAC78D14D05349E7(*uParam0, 1);
		UNK_0x4E885A246A9D983A(*uParam0, 227, true);
		UNK_0x71199B01895C6202(bVar0);
		UNK_0xD458AC1C1D29C3B4(*uParam0, false, false);
		UNK_0xAC0C6241732E36F6(*uParam0);
		UNK_0x1776B2F0999C29AC(1110, (vParam1.x + 0.1f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		UNK_0x1776B2F0999C29AC(1110, (vParam1.x - 0.03f), (vParam1.y + 0.3f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		UNK_0x1776B2F0999C29AC(1110, (vParam1.x - 0.2f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		UNK_0x1776B2F0999C29AC(1110, (vParam1.x - 0.5f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		UNK_0x1776B2F0999C29AC(1110, (vParam1.x + 0.01f), (vParam1.y - 0.4f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		UNK_0x1776B2F0999C29AC(1110, (vParam1.x + 0.01f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		UNK_0x1776B2F0999C29AC(1110, (vParam1.x - 0.6f), (vParam1.y - 0.35f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_415(*uParam0);
		return;
	}
}

void func_417(var uParam0, vector3 vParam1, bool bParam4)
{
	bool bVar0;

	bVar0 = func_408(25);
	if (UNK_0xB87F6CF6E5628C67(bVar0))
	{
		*uParam0 = UNK_0x36F2404464202779(4, bVar0, vParam1, bParam4, 1, true);
		UNK_0xCAC78D14D05349E7(*uParam0, 1);
		UNK_0x4E885A246A9D983A(*uParam0, 227, true);
		UNK_0x71199B01895C6202(bVar0);
		UNK_0xD458AC1C1D29C3B4(*uParam0, false, false);
		UNK_0xAC0C6241732E36F6(*uParam0);
		UNK_0x1776B2F0999C29AC(1110, (vParam1.x + 0.02f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		UNK_0x1776B2F0999C29AC(1110, (vParam1.x - 0.23f), (vParam1.y + 0.04f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		UNK_0x1776B2F0999C29AC(1110, (vParam1.x - 0.05f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		UNK_0x1776B2F0999C29AC(1110, (vParam1.x - 0.05f), (vParam1.y - 0.11f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		UNK_0x1776B2F0999C29AC(1110, (vParam1.x + 0.09f), (vParam1.y - 0.06f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_415(*uParam0);
		return;
	}
}

void func_418(var uParam0, var uParam1, vector3 vParam2, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;

	bVar0 = func_408(49);
	bVar1 = func_407(49);
	if (UNK_0xB87F6CF6E5628C67(bVar0) && UNK_0xB87F6CF6E5628C67(bVar1))
	{
		*uParam0 = UNK_0x36F2404464202779(4, bVar0, vParam2, bParam5, 1, true);
		UNK_0xCAC78D14D05349E7(*uParam0, 1);
		UNK_0x4E885A246A9D983A(*uParam0, 227, true);
		UNK_0x71199B01895C6202(bVar0);
		UNK_0xD458AC1C1D29C3B4(*uParam0, false, false);
		UNK_0xAC0C6241732E36F6(*uParam0);
		UNK_0x1776B2F0999C29AC(1110, ((vParam2.x + 0.12f) - 0.3f), ((vParam2.y - 0.01f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		UNK_0x1776B2F0999C29AC(1110, ((vParam2.x - 0.03f) - 0.3f), ((vParam2.y + 0.04f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		UNK_0x1776B2F0999C29AC(1110, ((vParam2.x - 0.2f) - 0.3f), ((vParam2.y - 0.01f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		UNK_0x1776B2F0999C29AC(1110, ((vParam2.x - 0.05f) - 0.3f), ((vParam2.y - 0.15f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		UNK_0x1776B2F0999C29AC(1110, ((vParam2.x + 0.01f) - 0.3f), ((vParam2.y - 0.06f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_415(*uParam0);
		vVar2 = { 9.9929f, 4.6946f, -7.1469f };
		*uParam1 = UNK_0x122AAB0B1D6F55AD(bVar1, vParam2 + vVar2, bParam5, true, true, false);
		UNK_0x71199B01895C6202(bVar1);
		UNK_0x5DAB50E08C3C504A(*uParam1, 2f);
		UNK_0xB9FD7450C0DAB575(*uParam1, 1084227584 /* Float: 5f */);
		UNK_0xA4C7B5E63E8F6EB3(*uParam1, 2f);
		UNK_0x723F1A9961414262(*uParam1, 1f);
		UNK_0x44C45BC1FDF14D14(*uParam1, false, func_419());
		UNK_0x44C45BC1FDF14D14(*uParam1, true, func_419());
		UNK_0x44C45BC1FDF14D14(*uParam1, 2, func_419());
		UNK_0x44C45BC1FDF14D14(*uParam1, 3, func_419());
		UNK_0x44C45BC1FDF14D14(*uParam1, 4, func_419());
		UNK_0x44C45BC1FDF14D14(*uParam1, 5, func_419());
		UNK_0xCCD53AC1B5D5E456(*uParam1, 15f);
		UNK_0xDB6256BE50B66FE6(*uParam1, 3);
		UNK_0x0882E3DC0C991680(*uParam1, 2);
		UNK_0x5A751CC648EB6940(*uParam1, 1);
		UNK_0xAC0C6241732E36F6(*uParam1);
		return;
	}
}

int func_419()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return 1;
	}
	return 0;
}

void func_420(var uParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;

	bVar0 = func_408(17);
	bVar1 = func_407(17);
	if (UNK_0xB87F6CF6E5628C67(bVar0) && UNK_0xB87F6CF6E5628C67(bVar1))
	{
		*uParam0 = UNK_0x36F2404464202779(4, bVar1, vParam2, bParam5, 1, true);
		UNK_0xCAC78D14D05349E7(*uParam0, 1);
		UNK_0x4E885A246A9D983A(*uParam0, 227, true);
		UNK_0x71199B01895C6202(bVar1);
		UNK_0xD458AC1C1D29C3B4(*uParam0, false, false);
		UNK_0xAC0C6241732E36F6(*uParam0);
		vVar2 = { 0.02f, -0.01f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = { 0.23f, 0.04f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = { -0.05f, -0.01f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = { -0.05f, -0.11f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = { 0.09f, -0.06f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam6)
		{
			vVar2 = { 0.5783f, 0.1357f, -0.0683f };
			UNK_0x1776B2F0999C29AC(2020, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar2 = { 1.0477f, 0.1103f, -0.1388f };
			UNK_0x1776B2F0999C29AC(2020, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar2 = { 1.5048f, 0.4595f, -0.1953f };
			UNK_0x1776B2F0999C29AC(2020, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
		}
		func_415(*uParam0);
		*uParam1 = UNK_0x122AAB0B1D6F55AD(bVar0, (vParam2.x - 0.4f), (vParam2.y - 0.5f), vParam2.z, bParam5, true, true, false);
		UNK_0x71199B01895C6202(bVar0);
		UNK_0xC023D1C4BF532815(*uParam1, 0f, 85f, 0f, 2, 1);
		UNK_0xA4C7B5E63E8F6EB3(*uParam1, 20.5f);
		UNK_0xCCD53AC1B5D5E456(*uParam1, 15f);
		UNK_0xAC0C6241732E36F6(*uParam1);
		return;
	}
}

void func_421(var uParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	bool bVar0;
	vector3 vVar1;

	bVar0 = func_408(28);
	if (UNK_0xB87F6CF6E5628C67(bVar0))
	{
		*uParam0 = UNK_0x36F2404464202779(28, bVar0, vParam1, bParam4, 1, true);
		UNK_0xCAC78D14D05349E7(*uParam0, 1);
		UNK_0x4E885A246A9D983A(*uParam0, 227, true);
		UNK_0x71199B01895C6202(bVar0);
		UNK_0xD458AC1C1D29C3B4(*uParam0, false, false);
		UNK_0xAC0C6241732E36F6(*uParam0);
		vVar1 = { 0.02f, -0.01f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.6f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.03f, 0.04f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.05f, -0.01f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { 0.01f, -0.06f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			vVar1 = { 0.5206f, 0f, 0.003f };
			UNK_0x1776B2F0999C29AC(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.309f, -0.9511f, 0f, 0.19f, 0.33f, 0.113f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 1.1258f, 0.0362f, -0.0837f };
			UNK_0x1776B2F0999C29AC(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 1.6107f, 0.4678f, -0.0815f };
			UNK_0x1776B2F0999C29AC(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 0.8f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_422(var uParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	bool bVar0;
	vector3 vVar1;

	bVar0 = func_408(35);
	if (UNK_0xB87F6CF6E5628C67(bVar0))
	{
		*uParam0 = UNK_0x122AAB0B1D6F55AD(bVar0, vParam1, bParam4, true, true, false);
		UNK_0x71199B01895C6202(bVar0);
		UNK_0xC023D1C4BF532815(*uParam0, 0f, 170f, 0f, 2, 1);
		UNK_0x5DAB50E08C3C504A(*uParam0, 1f);
		UNK_0xA4C7B5E63E8F6EB3(*uParam0, 1f);
		UNK_0xCCD53AC1B5D5E456(*uParam0, 15f);
		UNK_0x44C45BC1FDF14D14(*uParam0, false, func_419());
		UNK_0x44C45BC1FDF14D14(*uParam0, true, func_419());
		UNK_0x44C45BC1FDF14D14(*uParam0, 2, func_419());
		UNK_0x44C45BC1FDF14D14(*uParam0, 3, func_419());
		UNK_0x44C45BC1FDF14D14(*uParam0, 4, func_419());
		UNK_0x44C45BC1FDF14D14(*uParam0, 5, func_419());
		UNK_0xDB6256BE50B66FE6(*uParam0, 3);
		UNK_0x0882E3DC0C991680(*uParam0, 2);
		UNK_0x5A751CC648EB6940(*uParam0, 1);
		UNK_0xAC0C6241732E36F6(*uParam0);
		if (bParam5)
		{
			vVar1 = { 0.4947f, 2.3632f, 0.1294f };
			UNK_0x1776B2F0999C29AC(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.7f, -1f, 1, 0, 0);
			vVar1 = { 0.9243f, 2.6606f, 0.1951f };
			UNK_0x1776B2F0999C29AC(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.66f, -1f, 1, 0, 0);
			vVar1 = { 1.5467f, 2.5044f, 0.2418f };
			UNK_0x1776B2F0999C29AC(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.58f, -1f, 1, 0, 0);
			vVar1 = { 1.357f, 3.8779f, 0.3259f };
			UNK_0x1776B2F0999C29AC(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.48f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_423(var uParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	bool bVar0;
	vector3 vVar1;

	bVar0 = func_408(43);
	if (UNK_0xB87F6CF6E5628C67(bVar0))
	{
		*uParam0 = UNK_0x36F2404464202779(28, bVar0, vParam1, bParam4, 1, true);
		UNK_0xCAC78D14D05349E7(*uParam0, 1);
		UNK_0x4E885A246A9D983A(*uParam0, 227, true);
		UNK_0x71199B01895C6202(bVar0);
		UNK_0xD458AC1C1D29C3B4(*uParam0, false, false);
		UNK_0xAC0C6241732E36F6(*uParam0);
		vVar1 = { 0.12f, -0.01f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.03f, 0.04f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.2f, -0.01f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.05f, -0.15f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			vVar1 = { 0.4125f, -0.5815f, -0.2056f };
			UNK_0x1776B2F0999C29AC(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.5358f, -0.8443f, 0f, 0.19f, 0.33f, 0.234f, 0f, 0f, 0.9f, -1f, 1, 0, 0);
			vVar1 = { 0.6332f, -1.1758f, -0.7106f };
			UNK_0x1776B2F0999C29AC(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.7026f, -0.7115f, 0f, 0.19f, 0.33f, 0.26f, 0f, 0f, 0.75f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_424(var uParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	bool bVar0;
	vector3 vVar1;

	bVar0 = func_408(109);
	if (UNK_0xB87F6CF6E5628C67(bVar0))
	{
		*uParam0 = UNK_0x36F2404464202779(28, bVar0, vParam1, bParam4, 1, true);
		UNK_0xCAC78D14D05349E7(*uParam0, 1);
		UNK_0x71199B01895C6202(bVar0);
		UNK_0xD458AC1C1D29C3B4(*uParam0, false, false);
		UNK_0xAC0C6241732E36F6(*uParam0);
		vVar1 = { 0.12f, -0.01f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.03f, 0.04f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.2f, -0.01f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.05f, -0.15f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { 0.01f, -0.06f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			vVar1 = { 0.4936f, -0.1763f, -0.0522f };
			UNK_0x1776B2F0999C29AC(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 1.0645f, 0.0483f, -0.0698f };
			UNK_0x1776B2F0999C29AC(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 1.6011f, -0.1704f, -0.1473f };
			UNK_0x1776B2F0999C29AC(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 0.808f, -1f, 1, 0, 0);
		}
		func_415(*uParam0);
		return;
	}
}

void func_425(var uParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	bool bVar0;
	vector3 vVar1;

	bVar0 = func_408(12);
	if (UNK_0xB87F6CF6E5628C67(bVar0))
	{
		*uParam0 = UNK_0x36F2404464202779(28, bVar0, vParam1, bParam4, 1, true);
		UNK_0xCAC78D14D05349E7(*uParam0, 1);
		UNK_0x71199B01895C6202(bVar0);
		UNK_0xD458AC1C1D29C3B4(*uParam0, false, false);
		UNK_0xAC0C6241732E36F6(*uParam0);
		vVar1 = { 0.04f, 0.02f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.01f, 0.05f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.03f, -0.01f, 0f };
		UNK_0x1776B2F0999C29AC(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			vVar1 = { 0.2417f, -0.3975f, -0.2282f };
			UNK_0x1776B2F0999C29AC(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 0.0747f, -0.8188f, -0.2576f };
			UNK_0x1776B2F0999C29AC(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 0.4322f, -1.1548f, -0.4902f };
			UNK_0x1776B2F0999C29AC(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 0.802f, -1f, 1, 0, 0);
		}
		func_415(*uParam0);
		return;
	}
}

float func_426(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 190.1056f;
		case 2:
			return 132.9326f;
		case 3:
			return 355.7119f;
		case 4:
			return 209.0264f;
		case 5:
			return 122.6722f;
		case 6:
			return 174.841f;
		default:
			break;
	}
	return 0f;
}

Vector3 func_427(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_108363[0 /*3*/];
		case 2:
			return Global_108363[1 /*3*/];
		case 3:
			return Global_108363[2 /*3*/];
		case 4:
			return Global_108363[3 /*3*/];
		case 5:
			return Global_108363[4 /*3*/];
		case 6:
			return Global_108363[5 /*3*/];
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_428()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = func_9();
	iVar1 = func_409(iVar0);
	bVar2 = func_408(iVar1);
	bVar3 = func_407(iVar1);
	if (bVar2 != 0)
	{
		if (!UNK_0xB87F6CF6E5628C67(bVar2))
		{
			return false;
		}
	}
	if (bVar3 != 0)
	{
		if (!UNK_0xB87F6CF6E5628C67(bVar3))
		{
			return false;
		}
	}
	return true;
}

void func_429(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = func_9();
	iVar1 = func_409(iVar0);
	bVar2 = func_408(iVar1);
	bVar3 = func_407(iVar1);
	if (bVar2 != 0)
	{
		UNK_0x523BCC9DC80CD82F(bVar2);
	}
	if (bVar3 != 0)
	{
		UNK_0x523BCC9DC80CD82F(bVar3);
	}
	UNK_0x5D96D8530B3D0904(bParam0, 25);
}

void func_430()
{
	if (Global_108386.f_3 == UNK_0xF4CCC8CB6DE7F1AE())
	{
		return;
	}
	Global_108386.f_3 = UNK_0xF4CCC8CB6DE7F1AE();
	if (Global_108386.f_2 == 0f && Global_108386.f_1 == 0f)
	{
		return;
	}
	if (Global_108386.f_2 != Global_108386.f_1)
	{
		Global_108386.f_2 = (Global_108386.f_2 + Global_108386);
		if (Global_108386 <= 0f)
		{
			if (Global_108386.f_2 < Global_108386.f_1)
			{
				Global_108386.f_2 = Global_108386.f_1;
			}
		}
		else if (Global_108386.f_2 > Global_108386.f_1)
		{
			Global_108386.f_2 = Global_108386.f_1;
		}
	}
	UNK_0xC1032CAC14DE468A(0.5f, 0.5f, 1f, 1f, 255, 255, 255, SYSTEM::ROUND(Global_108386.f_2), 0);
}

void func_431(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	if (iParam1 <= 0)
	{
		Global_108386 = 0f;
		Global_108386.f_1 = fVar0;
		Global_108386.f_2 = fVar0;
	}
	else
	{
		fVar1 = (fVar0 - Global_108386.f_2);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1) / (UNK_0x6117725E0134737F() * 1000f));
		Global_108386 = (fVar1 / fVar2);
		Global_108386.f_1 = fVar0;
	}
}

void func_432(bool bParam0, int iParam1)
{
	func_433(&(Global_111638.f_10011.f_25), iParam1, 14336, 11);
}

void func_433(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam2));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, iParam3));
}

struct<8> func_434(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	struct<8> Var0;

	StringCopy(&Var0, sParam1, 32);
	StringConCat(&Var0, sParam0, 32);
	StringConCat(&Var0, sParam3, 32);
	StringConCat(&Var0, sParam2, 32);
	return Var0;
}

Vector3 func_435(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 7)
	{
		return Global_108341[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

void func_436()
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = -1308.545f;
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 475.192f, -1313.48f, 28.2074f) < 1000f)
		{
			if (!bLocal_392)
			{
				UNK_0x523BCC9DC80CD82F(joaat("V_ILEV_UVLINE"));
				bLocal_391 = true;
				if (UNK_0xB87F6CF6E5628C67(joaat("V_ILEV_UVLINE")))
				{
					if (func_437(8))
					{
						iLocal_393[4] = UNK_0x7707E48765093646(joaat("V_ILEV_UVLINE"), 471.48f, fVar0, 30.33f, true, true, false);
						UNK_0xA47B46945FF6DE74(iLocal_393[4], 471.48f, fVar0, 30.33f, 1, 0, 0, 1);
						UNK_0xC023D1C4BF532815(iLocal_393[4], 0f, 0f, 116.9f, 2, 1);
						iLocal_393[1] = UNK_0x7707E48765093646(joaat("V_ILEV_UVLINE"), 471.48f, fVar0, 30.15f, true, true, false);
						UNK_0xA47B46945FF6DE74(iLocal_393[1], 471.48f, fVar0, 30.15f, 1, 0, 0, 1);
						UNK_0xC023D1C4BF532815(iLocal_393[1], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_437(9))
					{
						iLocal_393[5] = UNK_0x7707E48765093646(joaat("V_ILEV_UVLINE"), 471.48f, fVar0, 29.98f, true, true, false);
						UNK_0xA47B46945FF6DE74(iLocal_393[5], 471.48f, fVar0, 29.98f, 1, 0, 0, 1);
						UNK_0xC023D1C4BF532815(iLocal_393[5], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_437(10))
					{
						iLocal_393[3] = UNK_0x7707E48765093646(joaat("V_ILEV_UVLINE"), 471.48f, fVar0, 29.82f, true, true, false);
						UNK_0xA47B46945FF6DE74(iLocal_393[3], 471.48f, fVar0, 29.82f, 1, 0, 0, 1);
						UNK_0xC023D1C4BF532815(iLocal_393[3], 0f, 0f, 116.9f, 2, 1);
					}
					iVar1 = UNK_0x0D1736C2E221BCEA(475.192f, -1313.48f, 28.2074f, "v_chopshop");
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (UNK_0xC844350D5D58C99A(iLocal_393[iVar2]))
						{
							UNK_0x4A4806F9D471E491(iLocal_393[iVar2], true, 0);
							UNK_0x5834B6B817326C89(iLocal_393[iVar2], 1);
							UNK_0xAA738CBC845A2BD8(iLocal_393[iVar2], iVar1);
						}
						iVar2++;
					}
					UNK_0x71199B01895C6202(joaat("V_ILEV_UVLINE"));
					bLocal_392 = true;
				}
			}
		}
		else
		{
			if (bLocal_391)
			{
				UNK_0x71199B01895C6202(joaat("V_ILEV_UVLINE"));
				bLocal_391 = false;
			}
			if (bLocal_392)
			{
				func_477();
				bLocal_392 = false;
			}
		}
	}
}

bool func_437(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

void func_438()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_75441.f_553)
	{
		if (!bLocal_400)
		{
			Global_75441.f_554 = 0;
			bLocal_400 = true;
		}
		else if (Global_75441.f_554 >= 68)
		{
			Global_75441.f_553 = 0;
			bLocal_400 = false;
		}
	}
	else
	{
		bLocal_400 = false;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_866)
	{
		iVar1 = iLocal_867[iVar0];
		if (func_61(&Local_674, iVar1))
		{
			func_473(&Local_695, iVar1);
			if ((Local_695.f_69 && Local_402.f_3 == 0) || iVar1 == 14)
			{
				fLocal_941[iVar1] = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), Local_695.f_55, 0);
			}
			else
			{
				fLocal_941[iVar1] = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), Local_674, 0);
			}
			if (func_472())
			{
				func_471(iVar1);
				func_469(iVar1);
				func_468(iVar1);
				func_467(iVar1);
				func_465(iVar1);
				func_464(iVar1);
				func_463(iVar1);
				func_440(iVar1);
				if (UNK_0xEAE0D21A50E6C7F4(uLocal_48[iVar1], 2))
				{
					if (Global_75441.f_553)
					{
						bLocal_400 = false;
					}
					func_478(iVar1);
				}
			}
			else
			{
				func_439(iVar1);
			}
		}
		iVar0++;
	}
	iVar2 = iLocal_866;
	iLocal_866 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_936)
	{
		iLocal_936[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (UNK_0xEAE0D21A50E6C7F4(uLocal_48[iLocal_867[iVar0]], 2))
		{
			func_478(iLocal_867[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_940 != -1)
	{
		func_478(iLocal_940);
		iLocal_940 = -1;
	}
	iLocal_47++;
	if (iLocal_47 >= 68)
	{
		iLocal_47 = 0;
	}
	func_478(iLocal_47);
	if (bLocal_1014)
	{
		func_478(21);
		func_478(22);
		func_478(23);
		bLocal_1014 = false;
		bLocal_1015 = true;
	}
	else if (bLocal_1015)
	{
		bLocal_1015 = false;
	}
	if (Global_75441.f_553)
	{
		Global_75441.f_554++;
	}
}

void func_439(int iParam0)
{
	if (iLocal_117[iParam0] != 0)
	{
		UNK_0x71199B01895C6202(iLocal_117[iParam0]);
		iLocal_117[iParam0] = 0;
	}
}

void func_440(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	bool bVar6;
	bool bVar7;
	vector3 vVar8;
	struct<60> Var11;
	int iVar89;
	bool bVar90;
	bool bVar91;
	bool bVar92;
	int iVar93;
	vector3 vVar94[24];
	vector3 vVar100[24];
	int iVar106;

	fVar0 = 210f;
	fVar1 = 200f;
	if (!UNK_0xEAE0D21A50E6C7F4(uLocal_48[iParam0], 2))
	{
		func_439(iParam0);
	}
	UNK_0x0674E58A79778E99(&(uLocal_48[iParam0]), 2);
	if (UNK_0xEAE0D21A50E6C7F4(uLocal_48[iParam0], true))
	{
		fVar2 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vLocal_186[iParam0 /*3*/], 1);
	}
	else
	{
		fVar2 = 99999.99f;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 23))
	{
		if (Local_674.f_4 == joaat("BLIMP"))
		{
			fVar0 = 1010f;
			fVar1 = 1000f;
		}
		else
		{
			fVar0 = 410f;
			fVar1 = 400f;
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 24))
	{
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (((UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 19) || UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 20)) || iParam0 == 24) || iParam0 == 25)
	{
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 25) && (((iLocal_672 == 0 && Local_402 == 21) || (iLocal_672 == 0 && Local_402 == 22)) || (iLocal_672 == 0 && Local_402 == 23)))
	{
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (UNK_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
	{
		if (UNK_0xDF1306B443CD3D15(Global_75441.f_139[iParam0], 0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (iParam0 == 24)
				{
					bVar3 = UNK_0xA30B8362589C124A(Global_75441.f_139[iParam0], -1, 0);
					if (!UNK_0xC844350D5D58C99A(bVar3))
					{
						bVar3 = UNK_0xB0326EA5AFB4EFA7(Global_75441.f_139[iParam0], -1);
					}
					iVar4 = func_401(bVar3);
					if (iVar4 != Global_111638.f_32744.f_5591)
					{
						if (func_25(iVar4))
						{
							func_462("Updating last character to use vehicle gen", iVar4);
							Global_111638.f_32744.f_5591 = iVar4;
						}
					}
				}
				if (!UNK_0x9C77D2D0559097F0(Global_75441.f_139[iParam0], 1))
				{
					func_461("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 24 && !func_63(Global_75441.f_139[iParam0])) && !func_62(Global_75441.f_139[iParam0])) && UNK_0x134B62B726CEC8E6(Global_75441.f_139[iParam0]) != joaat("MONSTER"))
					{
						UNK_0x626D5ADA3EFAE431(Global_75441.f_139[iParam0], 1);
					}
					Global_75441.f_139[iParam0] = 0;
					Global_75441[iParam0] = 1;
					func_460(iParam0);
					return;
				}
				if (((UNK_0xEAE0D21A50E6C7F4(uLocal_48[iParam0], false) && !UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 27)) && iParam0 != 24) && iParam0 != 25)
				{
					func_461("No longer needed: Player used vehicle");
					if (((iParam0 == 24 && !func_63(Global_75441.f_139[iParam0])) && !func_62(Global_75441.f_139[iParam0])) && UNK_0x134B62B726CEC8E6(Global_75441.f_139[iParam0]) != joaat("MONSTER"))
					{
						UNK_0x626D5ADA3EFAE431(Global_75441.f_139[iParam0], 1);
					}
					UNK_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
					Global_75441.f_139[iParam0] = 0;
					Global_75441[iParam0] = 1;
					func_460(iParam0);
					return;
				}
				if ((!UNK_0xEAE0D21A50E6C7F4(uLocal_48[iParam0], true) && iParam0 != 24) && iParam0 != 25)
				{
					if (UNK_0xB87D13D0C064E9D1(Global_75441.f_139[iParam0], UNK_0x16F2683693E537C9(), 1))
					{
						func_461("No longer needed: Player damaged vehicle");
						if (((iParam0 == 24 && !func_63(Global_75441.f_139[iParam0])) && !func_62(Global_75441.f_139[iParam0])) && UNK_0x134B62B726CEC8E6(Global_75441.f_139[iParam0]) != joaat("MONSTER"))
						{
							UNK_0x626D5ADA3EFAE431(Global_75441.f_139[iParam0], 1);
						}
						UNK_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
						Global_75441.f_139[iParam0] = 0;
						Global_75441[iParam0] = 1;
						func_460(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 26) || iParam0 == 29) || iParam0 == 32) || iParam0 == 27) || iParam0 == 30) || iParam0 == 33) || iParam0 == 28) || iParam0 == 31) || iParam0 == 34)
				{
					fVar5 = 20f;
				}
				if ((UNK_0xEAE0D21A50E6C7F4(uLocal_48[iParam0], true) && UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(Global_75441.f_139[iParam0], true), vLocal_186[iParam0 /*3*/], 1) > fVar5) || (!UNK_0xEAE0D21A50E6C7F4(uLocal_48[iParam0], true) && UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(Global_75441.f_139[iParam0], true), Local_674, 1) > fVar5))
				{
					func_461("No longer needed: Vehicle has been moved");
					if (((iParam0 == 24 && !func_63(Global_75441.f_139[iParam0])) && !func_62(Global_75441.f_139[iParam0])) && UNK_0x134B62B726CEC8E6(Global_75441.f_139[iParam0]) != joaat("MONSTER"))
					{
						UNK_0x626D5ADA3EFAE431(Global_75441.f_139[iParam0], 1);
					}
					UNK_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
					Global_75441.f_139[iParam0] = 0;
					Global_75441[iParam0] = 1;
					func_460(iParam0);
					return;
				}
				if (!func_67(iParam0, 0))
				{
					func_461("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 24 && !func_63(Global_75441.f_139[iParam0])) && !func_62(Global_75441.f_139[iParam0])) && UNK_0x134B62B726CEC8E6(Global_75441.f_139[iParam0]) != joaat("MONSTER"))
					{
						UNK_0x626D5ADA3EFAE431(Global_75441.f_139[iParam0], 1);
					}
					UNK_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
					Global_75441.f_139[iParam0] = 0;
					Global_75441[iParam0] = 1;
					func_460(iParam0);
					return;
				}
				if (iParam0 == 24)
				{
					if ((func_47(Global_75441.f_139[iParam0], iLocal_672, 1) && !func_63(Global_75441.f_139[iParam0])) && !func_62(Global_75441.f_139[iParam0]))
					{
						func_461("No longer needed: Mission vehicle gen moved to players garage");
						if (UNK_0x134B62B726CEC8E6(Global_75441.f_139[iParam0]) != joaat("MONSTER"))
						{
							UNK_0x626D5ADA3EFAE431(Global_75441.f_139[iParam0], 1);
						}
						Global_75441.f_139[iParam0] = 0;
						Global_75441[iParam0] = 1;
						func_460(iParam0);
						return;
					}
				}
				if (fLocal_941[iParam0] > fVar0 && (!UNK_0xEAE0D21A50E6C7F4(uLocal_48[iParam0], true) || fVar2 > fVar0))
				{
					if (iParam0 == 24)
					{
						bVar6 = func_50();
						bVar7 = Global_111638.f_32744.f_4801;
						func_458(&bVar7, 0, 0, 17, 0, 0, 0);
						if (func_368(bVar6, bVar7))
						{
							if ((!func_63(Global_75441.f_139[iParam0]) && !func_62(Global_75441.f_139[iParam0])) && UNK_0x134B62B726CEC8E6(Global_75441.f_139[iParam0]) != joaat("MONSTER"))
							{
								UNK_0x626D5ADA3EFAE431(Global_75441.f_139[iParam0], 1);
							}
							func_31(Global_75441.f_139[iParam0], Global_111638.f_32744.f_5591);
							Global_75441[iParam0] = 1;
							func_460(iParam0);
						}
						else if (func_37(Global_75441.f_139[iParam0]))
						{
							func_32(Global_75441.f_139[iParam0], &Global_2462119);
							Global_2462118 = Global_111638.f_32744.f_5591;
							bLocal_1029 = Global_75441.f_139[iParam0];
						}
					}
					func_461("No longer needed: Player out for range");
					UNK_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
					UNK_0x536F1BE96C726C4B(Local_674, 3f, 0, 0, 0, false);
					UNK_0x28F5E4DA506AC0CA(Local_674, 3f, 0, 0, 0, 0, false, 0);
					Global_75441.f_139[iParam0] = 0;
					if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
					{
						Global_75441.f_584 = { Local_674 };
						Global_75441.f_587 = { 0f, 0f, 0f };
					}
					return;
				}
				if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 30))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 31))
					{
						if (!UNK_0xE608C809F9416F00(Global_75441.f_139[iParam0]) && !UNK_0xD59B17D2DFF98E26(Global_75441.f_139[iParam0]))
						{
							vVar8 = { UNK_0x68F4C0EC296D3901(Global_75441.f_139[iParam0], true) };
							if (vVar8.z >= func_457(iParam0))
							{
								UNK_0xB078AFA7242F1F7B(Global_75441.f_139[iParam0], true);
								UNK_0x5D96D8530B3D0904(&(Local_674.f_9), 31);
							}
						}
					}
				}
			}
			return;
		}
	}
	else
	{
		Global_75441.f_139[iParam0] = 0;
	}
	if (UNK_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
	{
		func_461("No longer needed: Vehicle not driveable");
		UNK_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
		Global_75441.f_139[iParam0] = 0;
		Global_75441[iParam0] = 1;
		func_460(iParam0);
		return;
	}
	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		return;
	}
	if (Global_76348 == iParam0)
	{
		func_461("Processing a vehgen vehicle handover request.");
		if (UNK_0xC844350D5D58C99A(Global_76347) && UNK_0xDF1306B443CD3D15(Global_76347, 0))
		{
			if (UNK_0xC844350D5D58C99A(Global_75441.f_139[iParam0]) && UNK_0xDF1306B443CD3D15(Global_75441.f_139[iParam0], 0))
			{
				if (Global_75441.f_139[iParam0] == Global_76347)
				{
					func_461("Vehicle to be handed over is the same vehicle.");
					Global_76348 = -1;
					Global_76347 = 0;
					return;
				}
				else
				{
					func_461("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 24 && !func_63(Global_75441.f_139[iParam0])) && !func_62(Global_75441.f_139[iParam0])) && UNK_0x134B62B726CEC8E6(Global_75441.f_139[iParam0]) != joaat("MONSTER"))
					{
						UNK_0x626D5ADA3EFAE431(Global_75441.f_139[iParam0], 1);
					}
					UNK_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
					Global_75441.f_139[iParam0] = 0;
				}
			}
			Global_75441.f_139[iParam0] = Global_76347;
			Global_75441[iParam0] = 1;
			UNK_0x0674E58A79778E99(&(uLocal_48[iParam0]), false);
			UNK_0x5D96D8530B3D0904(&(uLocal_48[iParam0]), true);
			UNK_0x0674E58A79778E99(&(uLocal_48[iParam0]), 3);
			vLocal_186[iParam0 /*3*/] = { UNK_0x68F4C0EC296D3901(Global_76347, true) };
			Global_76348 = -1;
			if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 10))
			{
				Var11.f_9 = 49;
				Var11.f_59 = 2;
				func_32(Global_76347, &Var11);
				if (Global_76349)
				{
					func_115(iParam0, &Var11, UNK_0x68F4C0EC296D3901(Global_76347, true), UNK_0xD9522BA9E27E1349(Global_76347), func_46(Global_76347));
				}
				else
				{
					func_115(iParam0, &Var11, Global_111638.f_32744.f_1864[Local_674.f_14 /*3*/], Global_111638.f_32744.f_1934[Local_674.f_14], func_46(Global_76347));
				}
				Global_75441.f_139[iParam0] = Global_76347;
				Global_75441.f_484[iParam0] = Global_75441.f_139[iParam0];
			}
			if (iParam0 == 25)
			{
				iVar89 = func_474();
				if (func_25(iVar89))
				{
					func_461("Players stored switch vehicle cleared for prep getaway.");
					Global_98447[iVar89] = 0;
				}
			}
			UNK_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
			if (iParam0 == 24)
			{
				UNK_0x626D5ADA3EFAE431(Global_75441.f_139[iParam0], 0);
			}
			Global_76347 = 0;
			if (Global_2462119.f_66 != 0)
			{
				func_287(&Global_2462119, Global_2462118);
				Global_2462119.f_66 = 0;
			}
			return;
		}
		if (Global_2462119.f_66 != 0)
		{
			func_287(&Global_2462119, Global_2462118);
			Global_2462119.f_66 = 0;
		}
		func_461("Vehicle to be handed over doesn't exist.");
		Global_76348 = -1;
		Global_76347 = 0;
	}
	if (Global_75441[iParam0])
	{
		if (fLocal_941[iParam0] >= fVar0)
		{
			Global_75441[iParam0] = 0;
			func_461("Leave area flag cleared");
		}
		if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
		{
			Global_75441.f_584 = { 0f, 0f, 0f };
			Global_75441.f_587 = { 0f, 0f, 0f };
		}
		return;
	}
	bVar90 = false;
	if (fLocal_941[iParam0] > fVar1)
	{
		if (((((iParam0 == 24 && Global_111638.f_32744.f_1958[Local_674.f_14] != 0) && Global_111638.f_32744.f_1958[Local_674.f_14] > 3) && Local_674.f_4 != 0) && func_67(iParam0, 0)) && func_39(Local_674.f_4, 0))
		{
			bVar91 = func_50();
			bVar92 = Global_111638.f_32744.f_4801;
			func_458(&bVar92, 0, 0, 17, 0, 0, 0);
			if (func_368(bVar91, bVar92))
			{
				func_287(&(Global_111638.f_32744.f_69[Local_674.f_14 /*78*/]), Global_111638.f_32744.f_5591);
				func_460(iParam0);
				Global_75441[iParam0] = 1;
				func_461("Cannot be created: Vehicle ready for impound");
				Global_2462119.f_66 = 0;
				return;
			}
		}
		if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
		{
			bVar90 = true;
		}
		else
		{
			return;
		}
	}
	if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
	{
		Global_75441.f_584 = { 0f, 0f, 0f };
		Global_75441.f_587 = { 0f, 0f, 0f };
	}
	if (Local_674.f_4 == 0)
	{
		Global_75441[iParam0] = 1;
		func_461("Cannot be created: Dummy model");
		return;
	}
	if (!func_39(Local_674.f_4, 0))
	{
		Global_75441[iParam0] = 1;
		func_461("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!func_67(iParam0, 0))
	{
		Global_75441[iParam0] = 1;
		func_461("Cannot be created: Vehicle gen not available");
		return;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 14) && !func_67(iParam0, 5))
	{
		Global_75441[iParam0] = 1;
		func_461("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((func_456() && func_455(0)) && iParam0 != 24) && iParam0 != 25) && iParam0 != 35)
	{
		Global_75441[iParam0] = 1;
		func_461("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!bLocal_673)
	{
		Global_75441[iParam0] = 1;
		func_461("Cannot be created: Player character not valid");
		return;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 10))
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_484[iParam0]))
		{
			Global_75441[iParam0] = 1;
			func_461("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else
		{
			Global_75441.f_484[iParam0] = 0;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 6))
	{
		if (func_454(Local_674.f_4, -1))
		{
			Global_75441[iParam0] = 1;
			func_461("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_453(Local_674.f_4, -1))
		{
			Global_75441[iParam0] = 1;
			func_461("Cannot be created: Same vehicle model found nearby gen location");
			return;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 29))
	{
		if (Local_402.f_3 == 0)
		{
			return;
		}
	}
	if (func_452(iParam0))
	{
		Global_75441[iParam0] = 1;
		func_461("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (UNK_0x991B1F0980C62628() && UNK_0x19EC8D83154D7CC1() == 3)
	{
		if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
		{
			Global_75441[iParam0] = 1;
			func_461("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar93 = 0;
	if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 19))
	{
		iVar93 = 2;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 20))
	{
		iVar93 = 1;
	}
	if ((iParam0 == 24 && Global_111638.f_32744.f_1958[Local_674.f_14] > 0) && Global_111638.f_32744.f_1958[Local_674.f_14] <= 3)
	{
		if (UNK_0x7D8B2A8F9EA82DB7(Local_674.f_4))
		{
			iVar93 = 2;
			Local_674.f_12 = (Global_111638.f_32744.f_1958[Local_674.f_14] - 1);
		}
		else if (UNK_0x8E39AC3C76C8AA58(Local_674.f_4))
		{
			iVar93 = 1;
			Local_674.f_12 = (Global_111638.f_32744.f_1958[Local_674.f_14] - 1);
		}
	}
	if (iVar93 != 0)
	{
		if (func_451(Local_674.f_12, iVar93, Local_674, -1f))
		{
			Global_75441[iParam0] = 1;
			func_461("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 24)
			{
				func_480(iParam0, 0);
			}
			return;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 19) || UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 20))
		{
			if (iVar93 == 2)
			{
				if (Global_96123[Local_674.f_12 /*3*/][1] != -1 && (UNK_0x1C0640BA9A7327B3() - Global_96123[Local_674.f_12 /*3*/][1]) < UNK_0xFBFCAFA958ABA1CE() * 180)
				{
					Global_75441[iParam0] = 1;
					func_461("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&cVar94, "...", 24);
					StringIntConCat(&cVar94, ((UNK_0xFBFCAFA958ABA1CE() * 180 - (UNK_0x1C0640BA9A7327B3() - Global_96123[Local_674.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&cVar94, " seconds", 24);
					func_461(&cVar94);
					return;
				}
			}
			else if (iVar93 == 1)
			{
				if (Global_96123[Local_674.f_12 /*3*/][0] != -1 && (UNK_0x1C0640BA9A7327B3() - Global_96123[Local_674.f_12 /*3*/][0]) < UNK_0xFBFCAFA958ABA1CE() * 180)
				{
					Global_75441[iParam0] = 1;
					func_461("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&cVar100, "...", 24);
					StringIntConCat(&cVar100, ((UNK_0xFBFCAFA958ABA1CE() * 180 - (UNK_0x1C0640BA9A7327B3() - Global_96123[Local_674.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&cVar100, " seconds", 24);
					func_461(&cVar100);
					return;
				}
			}
		}
	}
	if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
	{
		Global_75441.f_584 = { Local_674 };
	}
	if (bVar90)
	{
		return;
	}
	if (iVar93 != 0)
	{
		iLocal_117[iParam0] = func_23(Local_674.f_12, iVar93);
		UNK_0x523BCC9DC80CD82F(iLocal_117[iParam0]);
		UNK_0x5D96D8530B3D0904(&(uLocal_48[iParam0]), 2);
		if (!UNK_0xB87F6CF6E5628C67(iLocal_117[iParam0]))
		{
			func_461("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_450(iLocal_117[iParam0], Local_674, 1))
		{
			func_461("Cannot be created: Player is too close to spawn position (default vehicle type)");
			return;
		}
		UNK_0x536F1BE96C726C4B(Local_674, 3f, 0, 0, 0, false);
		UNK_0x28F5E4DA506AC0CA(Local_674, 3f, 0, 0, 0, 0, false, 0);
		if (iVar93 == 2)
		{
			func_445(&(Global_75441.f_139[iParam0]), Local_674.f_12, Local_674, Local_674.f_3, 0, 2);
		}
		else if (iVar93 == 1)
		{
			func_445(&(Global_75441.f_139[iParam0]), Local_674.f_12, Local_674, Local_674.f_3, 0, 1);
		}
		else
		{
			Global_75441[iParam0] = 1;
			func_461("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else
	{
		UNK_0x523BCC9DC80CD82F(Local_674.f_4);
		iLocal_117[iParam0] = Local_674.f_4;
		UNK_0x5D96D8530B3D0904(&(uLocal_48[iParam0]), 2);
		if (!UNK_0xB87F6CF6E5628C67(Local_674.f_4))
		{
			func_461("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_450(Local_674.f_4, Local_674, 1))
		{
			func_461("Cannot be created: Player is too close to spawn position (specific vehicle type)");
			return;
		}
		UNK_0x536F1BE96C726C4B(Local_674, 3f, 0, 0, 0, false);
		UNK_0x28F5E4DA506AC0CA(Local_674, 3f, 0, 0, 0, 0, false, 0);
		if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 23))
		{
			UNK_0x5CDCBCDA2C651E97(Local_674);
		}
		if ((iParam0 == 15 || iParam0 == 16) || iParam0 == 17)
		{
			if (Local_674.f_4 == joaat("SUBMERSIBLE2"))
			{
				Local_674.f_2 = -3f;
			}
		}
		Global_75441.f_139[iParam0] = UNK_0x122AAB0B1D6F55AD(Local_674.f_4, Local_674, Local_674.f_3, true, true, false);
		if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 10))
		{
			if (UNK_0xC41A9202669A24C4(Local_674.f_4))
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_32744.f_69[Local_674.f_14 /*78*/].f_77), 22);
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_32744.f_69[Local_674.f_14 /*78*/].f_77, 14))
			{
				func_32(Global_75441.f_139[iParam0], &Local_776);
				func_444(Local_776.f_77, &(Global_111638.f_32744.f_69[Local_674.f_14 /*78*/].f_77), Local_674.f_4);
				UNK_0x0674E58A79778E99(&(Global_111638.f_32744.f_69[Local_674.f_14 /*78*/].f_77), 14);
			}
			func_381(Global_75441.f_139[iParam0], &(Global_111638.f_32744.f_69[Local_674.f_14 /*78*/]), 0, 1);
			Global_75441.f_484[iParam0] = Global_75441.f_139[iParam0];
		}
		else
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 9))
			{
				UNK_0xC002508A277213DE(Global_75441.f_139[iParam0], Local_674.f_10, Local_674.f_11);
			}
			if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 8))
			{
				UNK_0x71EDC33E5A423750(Global_75441.f_139[iParam0], 2);
				UNK_0x6EEAA5C21760E9DB(Global_75441.f_139[iParam0], 0);
				UNK_0x1FC8B874F2C46E6E(Global_75441.f_139[iParam0], 0);
				UNK_0x9BAC3470A92767CB(Global_75441.f_139[iParam0], 0);
				UNK_0xA072915CE3E5C457(Global_75441.f_139[iParam0], 0);
				UNK_0x4D647C1236C18D14(Global_75441.f_139[iParam0], 0);
				UNK_0xA22F71BBC8173C39(Global_75441.f_139[iParam0], false);
				UNK_0xE121AE1BBF90E186(Global_75441.f_139[iParam0], true);
				UNK_0x1E9649458B15960F(Global_75441.f_139[iParam0], true);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
	{
		func_443("Created - Coords: ", Local_674);
		func_442("Created - Dist From Player:", fLocal_941[iParam0]);
		if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
		{
			Global_75441.f_584 = { 0f, 0f, 0f };
		}
		switch (Local_674.f_4)
		{
			case joaat("MILJET"):
				UNK_0xC002508A277213DE(Global_75441.f_139[iParam0], 121, 21);
				UNK_0x58A0C35FA7CA6162(Global_75441.f_139[iParam0], 8, 156);
				break;
			case joaat("BESRA"):
				UNK_0xC002508A277213DE(Global_75441.f_139[iParam0], 122, 89);
				UNK_0x58A0C35FA7CA6162(Global_75441.f_139[iParam0], 25, 121);
				break;
			case joaat("BUZZARD"):
			case joaat("BUZZARD2"):
				UNK_0xC002508A277213DE(Global_75441.f_139[iParam0], false, false);
				UNK_0x58A0C35FA7CA6162(Global_75441.f_139[iParam0], 5, 156);
				break;
			case joaat("DUKES2"):
				break;
			case joaat("RHINO"):
				UNK_0xC002508A277213DE(Global_75441.f_139[iParam0], 131, 132);
				UNK_0x58A0C35FA7CA6162(Global_75441.f_139[iParam0], 132, 156);
				break;
			case joaat("LUXOR2"):
			case joaat("SWIFT2"):
				UNK_0xC002508A277213DE(Global_75441.f_139[iParam0], 159, false);
				UNK_0x58A0C35FA7CA6162(Global_75441.f_139[iParam0], 160, 156);
				break;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 22))
		{
			UNK_0xB078AFA7242F1F7B(Global_75441.f_139[iParam0], true);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 30))
		{
			UNK_0x0674E58A79778E99(&(Local_674.f_9), 31);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 26))
		{
			UNK_0x71EDC33E5A423750(Global_75441.f_139[iParam0], 7);
			UNK_0xAACF4BD59CB35944(Global_75441.f_139[iParam0], 1);
		}
		func_441(Global_75441.f_139[iParam0], iParam0);
		if (!UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 29) && !UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 30))
		{
			UNK_0xB9FD7450C0DAB575(Global_75441.f_139[iParam0], 1084227584 /* Float: 5f */);
		}
		UNK_0xCCD53AC1B5D5E456(Global_75441.f_139[iParam0], 0f);
		UNK_0x120A395B0ECB8EA5(Global_75441.f_139[iParam0], true);
		UNK_0x626D5ADA3EFAE431(Global_75441.f_139[iParam0], UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 5));
	}
	UNK_0x0674E58A79778E99(&(uLocal_48[iParam0]), false);
	UNK_0x0674E58A79778E99(&(uLocal_48[iParam0]), true);
	Global_75441[iParam0] = 1;
	if (iVar93 != 0)
	{
		Global_75441.f_69[iParam0] = 1;
	}
	iVar106 = func_177(458, -1, -1);
	if (iVar106 != 0 && iVar106 == iParam0)
	{
		bLocal_1028 = Global_75441.f_139[iParam0];
	}
	if (iParam0 == 24)
	{
		Global_2462119.f_66 = 0;
	}
}

void func_441(bool bParam0, int iParam1)
{
	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		switch (iParam1)
		{
			case 36:
				UNK_0x26E12C087E2B91F8(bParam0, -0.84f, 2.21f, 0.22f, 100f, 400f, 1);
				UNK_0x26E12C087E2B91F8(bParam0, 0.67f, 2.12f, -0.06f, 100f, 400f, 1);
				UNK_0x26E12C087E2B91F8(bParam0, 0.05f, 1.97f, 0.2f, 100f, 400f, 1);
				break;
			case 35:
				UNK_0xD3421E391490133B(bParam0, 6, false);
				UNK_0xD3421E391490133B(bParam0, true, true);
				break;
		}
	}
}

void func_442(bool bParam0, float fParam1)
{
	if (!UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_443(bool bParam0, float fParam1, var uParam2, var uParam3)
{
	if (!UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_444(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 2147483647;
	switch (iParam2)
	{
		case joaat("COQUETTE2"):
			UNK_0x0674E58A79778E99(&iVar0, false);
			UNK_0x0674E58A79778E99(&iVar0, true);
			break;
		case joaat("KALAHARI"):
			UNK_0x0674E58A79778E99(&iVar0, false);
			UNK_0x0674E58A79778E99(&iVar0, true);
			UNK_0x0674E58A79778E99(&iVar0, 2);
			break;
		case joaat("VOLTIC"):
			UNK_0x0674E58A79778E99(&iVar0, false);
			UNK_0x0674E58A79778E99(&iVar0, true);
			UNK_0x0674E58A79778E99(&iVar0, 2);
			break;
		case joaat("BANSHEE"):
			UNK_0x0674E58A79778E99(&iVar0, false);
			break;
		case joaat("STALION"):
			UNK_0x0674E58A79778E99(&iVar0, false);
			UNK_0x0674E58A79778E99(&iVar0, true);
			UNK_0x0674E58A79778E99(&iVar0, 2);
			break;
		case joaat("CHINO"):
			UNK_0x0674E58A79778E99(&iVar0, false);
			UNK_0x0674E58A79778E99(&iVar0, true);
			UNK_0x0674E58A79778E99(&iVar0, 2);
			break;
	}
	iVar1 = (2147483647 - iVar0);
	iVar0 = (iVar0 && uParam0);
	iVar1 = (*uParam1 && iVar1);
	*uParam1 = (iVar0 || iVar1);
}

int func_445(bool bParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, int iParam7)
{
	bool bVar0;
	var uVar1;
	struct<97> Var5;
	int iVar103;
	int iVar104;
	bool bVar105;
	char cVar106[16];
	int iVar110;

	if (func_25(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_24(iParam1, &Var5, iParam7);
		if (Var5 == 0)
		{
			return 1;
		}
		if (UNK_0xC844350D5D58C99A(*bParam0))
		{
			if (UNK_0x134B62B726CEC8E6(*bParam0) != Var5)
			{
			}
			return 1;
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
				if (func_449(&uVar1, &bVar0))
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
				func_382(bParam0, &(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
				UNK_0x0947AEED9914905B(*bParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (UNK_0x134B62B726CEC8E6(*bParam0) == joaat("BODHI2"))
					{
						func_447(bParam0);
					}
				}
				if (bParam6)
				{
					UNK_0x71199B01895C6202(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
				}
				func_446(*bParam0, iParam1);
				return 1;
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
				if (func_449(&uVar1, &bVar0))
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
				func_382(bParam0, &(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
				UNK_0x0947AEED9914905B(*bParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (UNK_0x134B62B726CEC8E6(*bParam0) == joaat("BODHI2"))
					{
						func_447(bParam0);
					}
				}
				if (bParam6)
				{
					UNK_0x71199B01895C6202(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
				}
				func_446(*bParam0, iParam1);
				return 1;
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
				if (func_449(&uVar1, &bVar0))
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
				func_382(bParam0, &(Var5.f_31), &(Var5.f_81));
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
						func_447(bParam0);
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
					func_235(iParam1, bParam0, 0, 1);
				}
				if (bParam6)
				{
					UNK_0x71199B01895C6202(Var5);
				}
				if (bVar105)
				{
					func_446(*bParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_446(bool bParam0, int iParam1)
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

void func_447(bool bParam0)
{
	if (!func_448(*bParam0))
	{
		UNK_0xD3421E391490133B(*bParam0, 5, !Global_111638.f_9080.f_99.f_58[119]);
	}
}

bool func_448(bool bParam0)
{
	return UNK_0xDD62D560CFE11A27(bParam0, 5);
}

bool func_449(var uParam0, bool bParam1)
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

bool func_450(bool bParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if ((bParam4 && UNK_0x757EF87A33649210()) && UNK_0x8A22C4C08282BF26(joaat("STARTUP_POSITIONING")) > 0)
	{
		func_461("player is in vehicle bounds - \"startup_positioning\" is running.");
		return false;
	}
	UNK_0xA6B02C1DB14DDA13(bParam0, &vVar0, &vVar3);
	fVar6 = UNK_0x0EB28750412C3A5A(vVar3, vVar0, 1);
	if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vParam1, 1) < (fVar6 * 0.5f))
	{
		func_442("player is in vehicle bounds - fLength: ", fVar6);
		func_442("player is in vehicle bounds - fDistance: ", UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vParam1, 1));
		return true;
	}
	return false;
}

bool func_451(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
	int iVar0;
	struct<82> Var1;
	int iVar99;

	if (!func_25(iParam0))
	{
		return false;
	}
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	iVar99 = 0;
	func_24(iParam0, &Var1, iParam1);
	iVar99 = Var1;
	if (iVar99 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]) && UNK_0xDF1306B443CD3D15(Global_96075[iVar0], 0))
			{
				if (UNK_0x134B62B726CEC8E6(Global_96075[iVar0]) == iVar99 && Global_96085[iVar0] == iParam0)
				{
					if (fParam5 == -1f || UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(Global_96075[iVar0], false), vParam2, 1) <= fParam5)
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

bool func_452(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == 20)
	{
		if (Local_674.f_4 == joaat("FROGGER2"))
		{
			if (((func_454(Local_674.f_4, -1) || func_453(Local_674.f_4, -1)) || UNK_0x8A22C4C08282BF26(joaat("EXILE2")) > 0) || !func_437(30))
			{
				return true;
			}
		}
	}
	if (iParam0 == 24)
	{
		if ((UNK_0xC844350D5D58C99A(Global_75441.f_484[20]) && !UNK_0x437347B10A200C4B(Global_75441.f_484[20], 0)) && UNK_0xDF1306B443CD3D15(Global_75441.f_484[20], 0))
		{
			if (Local_674.f_4 == UNK_0x134B62B726CEC8E6(Global_75441.f_484[20]))
			{
				UNK_0x9412F17E127D9759(Global_75441.f_484[20], &iVar0, &iVar1);
				if (iVar0 == Local_674.f_10 && iVar1 == Local_674.f_11)
				{
					func_282(20);
				}
			}
		}
	}
	return false;
}

bool func_453(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = 2174;
	bVar1 = UNK_0x83C1D4B63BBD91F6(Local_674, 200f, bParam0, iVar0);
	if ((UNK_0xC844350D5D58C99A(bVar1) && UNK_0xDF1306B443CD3D15(bVar1, 0)) && UNK_0x134B62B726CEC8E6(bVar1) == bParam0)
	{
		if (iParam1 == -1 || UNK_0xF22DC2D0CA24A151(bVar1) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_454(int iParam0, int iParam1)
{
	var uVar0[50];
	int iVar51;
	int iVar52;

	iVar52 = UNK_0xA361D247A75E0128(UNK_0x16F2683693E537C9(), &uVar0);
	iVar51 = 0;
	while (iVar51 < iVar52)
	{
		if ((UNK_0xC844350D5D58C99A(uVar0[iVar51]) && UNK_0xDF1306B443CD3D15(uVar0[iVar51], 0)) && UNK_0x134B62B726CEC8E6(uVar0[iVar51]) == iParam0)
		{
			if (iParam1 == -1 || UNK_0xF22DC2D0CA24A151(uVar0[iVar51]) == iParam1)
			{
				return true;
			}
		}
		iVar51++;
	}
	return false;
}

int func_455(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_364(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_456()
{
	return Global_75441.f_138;
}

float func_457(int iParam0)
{
	switch (iParam0)
	{
		case 57:
			return -0.7f;
		case 63:
			return -0.8f;
	}
	return 0f;
}

void func_458(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_55(*bParam0);
	bVar1 = func_57(*bParam0);
	iVar2 = func_372(*bParam0);
	iVar3 = func_371(*bParam0);
	iVar4 = func_370(*bParam0);
	iVar5 = func_369(*bParam0);
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
	iVar6 = func_54(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_54(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_459(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_459(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_60(bParam0, iParam1);
	func_59(bParam0, iParam2);
	func_58(bParam0, iParam3);
	func_52(bParam0, bParam5);
	func_53(bParam0, iParam4);
	func_51(bParam0, iParam6);
}

void func_460(int iParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 13))
	{
		func_480(iParam0, 0);
	}
}

void func_461(bool bParam0)
{
	if (!UNK_0xEA6BC48857E0AC4C(bParam0))
	{
	}
}

void func_462(bool bParam0, int iParam1)
{
	if (!UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		if (iParam1 != 0)
		{
		}
	}
}

void func_463(int iParam0)
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	bool bVar6;

	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		return;
	}
	bVar0 = false;
	iVar5 = -1;
	bVar6 = joaat("PROP_FORSALE_DYN_01");
	switch (iParam0)
	{
		case 12:
		case 13:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -961.42f, -2794.47f, 12.96f };
			bVar4 = -209.22f;
			iVar5 = 0;
			bVar6 = joaat("PROP_AIRPORT_SALE_SIGN");
			break;
		case 15:
		case 16:
		case 17:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -827.93f, -1368.14f, 3.9982f };
			bVar4 = -68.75f;
			iVar5 = 1;
			break;
		case 18:
		case 19:
			bVar0 = !func_67(iParam0, 5);
			bVar0 = true;
			vVar1 = { -710.07f, -1414.31f, 4f };
			bVar4 = -41.25f;
			iVar5 = 2;
			break;
		case 21:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -66.21f, 77.76f, 70.51f };
			bVar4 = -27f;
			iVar5 = 3;
			break;
		case 22:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -76.02f, -1825.61f, 25.88f };
			bVar4 = -129.67f;
			iVar5 = 4;
			break;
		case 23:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -218.68f, -1165.76f, 21.99f };
			bVar4 = 89.95f;
			iVar5 = 5;
			break;
	}
	if (bVar0 && UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vVar1, 1) < 250f)
	{
		if (!UNK_0xC844350D5D58C99A(iLocal_858[iVar5]))
		{
			UNK_0x523BCC9DC80CD82F(bVar6);
			bLocal_865 = true;
			if (UNK_0xB87F6CF6E5628C67(bVar6))
			{
				if (bLocal_865)
				{
					iLocal_858[iVar5] = UNK_0xB0BE3DFBBB59A620(bVar6, vVar1, false, true, false);
					UNK_0xC023D1C4BF532815(iLocal_858[iVar5], 0f, 0f, bVar4, 2, 1);
					UNK_0x98868AF51859FC75(iLocal_858[iVar5], 0);
					UNK_0x1E9649458B15960F(iLocal_858[iVar5], true);
					UNK_0x71199B01895C6202(bVar6);
					bLocal_865 = false;
				}
			}
		}
	}
	else if (iVar5 != -1)
	{
		if ((UNK_0xC844350D5D58C99A(iLocal_858[iVar5]) && !UNK_0x0A059E0DB9253280(iLocal_858[iVar5])) && UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vVar1, 1) > 255f)
		{
			UNK_0xF690C84DADBB3551(&(iLocal_858[iVar5]));
			if (bLocal_865)
			{
				UNK_0x71199B01895C6202(bVar6);
				bLocal_865 = false;
			}
		}
	}
}

void func_464(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (func_67(iParam0, 0) && (!UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 14) || func_67(iParam0, 5)))
	{
		bVar0 = true;
	}
	if (Global_75441.f_346[iParam0] != bVar0)
	{
		if (!func_21(Local_674.f_15, 0f, 0f, 0f, 0))
		{
			if (!bVar0)
			{
				if (Global_75441.f_346[iParam0])
				{
					UNK_0x2952D66A502EA873(Global_75441.f_415[iParam0], 0);
				}
			}
			else if (!Global_75441.f_346[iParam0])
			{
				Global_75441.f_415[iParam0] = UNK_0x7D6CA5F52B3748BF(Local_674.f_15, Local_674.f_18, 0, 1, 1, 1);
			}
		}
		Global_75441.f_346[iParam0] = bVar0;
	}
}

void func_465(int iParam0)
{
	int iVar0;

	if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 15))
	{
		if (func_67(iParam0, 0) && !func_67(iParam0, 5))
		{
			iVar0 = 145;
			if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 16))
			{
				iVar0 = func_466(9);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 18))
			{
				iVar0 = func_466(4);
			}
			if (iVar0 == Local_674.f_12)
			{
				func_330(iParam0, 5, 1);
			}
		}
	}
}

int func_466(int iParam0)
{
	return Global_111638.f_24899[iParam0 /*4*/];
}

void func_467(int iParam0)
{
	if (func_67(iParam0, 0) && !func_67(iParam0, 3))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 4))
		{
			func_330(iParam0, 3, 1);
		}
		else
		{
			func_330(iParam0, 3, 1);
		}
	}
}

void func_468(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = true;
	if (func_67(iParam0, 0) && bLocal_673)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, false) || (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 2) && !func_67(iParam0, 2)))
		{
			if ((!UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 21) || (((((((!func_27(0) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(9)) && !func_27(10)) && !func_27(13)) && !func_27(14))) && ((UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0 || func_67(iParam0, 5)) || !UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 28)))
			{
				bVar0 = false;
				if (!UNK_0xE4EDC4B0E92C078B(Global_75441.f_208[iParam0]))
				{
					if (func_437(0))
					{
						if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 14) && !func_67(iParam0, 5))
						{
							Global_75441.f_208[iParam0] = UNK_0x6CC513A908911CF0(Local_695.f_55);
							if (Local_695.f_58 != -1)
							{
								UNK_0xBC8E0A7390523199(Global_75441.f_208[iParam0], Local_695.f_58);
								if (!UNK_0xEA6BC48857E0AC4C(&(Local_695.f_59)))
								{
									UNK_0xDC5B2F9D0CCE3A10(Global_75441.f_208[iParam0], &(Local_695.f_59));
								}
							}
						}
						else if (func_67(iParam0, 5) && (((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 14))
						{
							Global_75441.f_208[iParam0] = UNK_0x6CC513A908911CF0(Local_695.f_55);
							if (Local_674.f_13 != -1)
							{
								UNK_0xBC8E0A7390523199(Global_75441.f_208[iParam0], Local_674.f_13);
								if (!UNK_0xEA6BC48857E0AC4C(&(Local_695.f_59)))
								{
									UNK_0xDC5B2F9D0CCE3A10(Global_75441.f_208[iParam0], &(Local_695.f_59));
								}
								if (Local_674.f_12 == 0)
								{
									bVar1 = 42;
								}
								else if (Local_674.f_12 == 1)
								{
									bVar1 = 43;
								}
								else if (Local_674.f_12 == 2)
								{
									bVar1 = 44;
								}
								UNK_0x61755AC17D8F538E(Global_75441.f_208[iParam0], bVar1);
							}
						}
						else
						{
							Global_75441.f_208[iParam0] = UNK_0x6CC513A908911CF0(Local_674);
							if (Local_674.f_13 != -1)
							{
								UNK_0xBC8E0A7390523199(Global_75441.f_208[iParam0], Local_674.f_13);
								if (!UNK_0xEA6BC48857E0AC4C(&(Local_695.f_59)))
								{
									UNK_0xDC5B2F9D0CCE3A10(Global_75441.f_208[iParam0], &(Local_695.f_59));
								}
								if ((((((((iParam0 == 12 || iParam0 == 13) || iParam0 == 14) || iParam0 == 15) || iParam0 == 16) || iParam0 == 17) || iParam0 == 18) || iParam0 == 19) || iParam0 == 20)
								{
									if (Local_674.f_12 == 0)
									{
										bVar2 = 42;
									}
									else if (Local_674.f_12 == 1)
									{
										bVar2 = 43;
									}
									else if (Local_674.f_12 == 2)
									{
										bVar2 = 44;
									}
									UNK_0x61755AC17D8F538E(Global_75441.f_208[iParam0], bVar2);
								}
							}
						}
						UNK_0x6ABCCE651368DB93(Global_75441.f_208[iParam0], !UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, true));
						UNK_0xF412DD40DE84CE72(Global_75441.f_208[iParam0], 0);
						UNK_0x2A065371C9D96655(Global_75441.f_208[iParam0], 3);
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (UNK_0xE4EDC4B0E92C078B(Global_75441.f_208[iParam0]))
		{
			UNK_0x142CC44DB769B57E(&(Global_75441.f_208[iParam0]));
		}
	}
}

void func_469(int iParam0)
{
	if (func_67(iParam0, 0) && !func_67(iParam0, 1))
	{
		if (func_67(iParam0, 4))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 3))
			{
				func_470(&(Local_674.f_5), 0, 0, -1, 10000, 7, 0, 0, 0);
				func_330(iParam0, 1, 1);
			}
			else
			{
				func_330(iParam0, 1, 1);
			}
		}
	}
}

void func_470(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_290(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_471(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 7) || Local_674.f_12 == iLocal_672)
	{
		bLocal_673 = true;
	}
	else
	{
		bLocal_673 = false;
	}
	if (func_27(14))
	{
		bLocal_673 = false;
	}
	if ((bLocal_673 && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9())) && UNK_0xEAE0D21A50E6C7F4(Local_674.f_9, 14))
	{
		if (Local_402.f_2 == 0 && Local_402.f_3 == 0)
		{
			if (fLocal_941[iParam0] < Local_402.f_1 || Local_402 == iParam0)
			{
				if (Local_402 != iParam0)
				{
					Local_402.f_8 = { Local_674 };
					Local_402.f_29 = { Local_695 };
					Local_402 = iParam0;
					iVar0 = 0;
					while (iVar0 < Global_75441.f_592)
					{
						Global_75441.f_592[iVar0] = -1;
						iVar0++;
					}
					Local_402.f_6 = -1;
					if ((Local_402 == 12 || Local_402 == 13) || Local_402 == 14)
					{
						Local_402.f_6 = 0;
					}
					else if ((Local_402 == 15 || Local_402 == 16) || Local_402 == 17)
					{
						Local_402.f_6 = 1;
					}
					else if ((Local_402 == 18 || Local_402 == 19) || Local_402 == 20)
					{
						Local_402.f_6 = 2;
					}
					else if ((Local_402 == 21 || Local_402 == 22) || Local_402 == 23)
					{
						Local_402.f_6 = 3;
					}
					iVar0 = 0;
					while (iVar0 < 312)
					{
						bVar2 = func_132(iVar0, -1);
						if (bVar2 != 0)
						{
							if (iVar1 < Global_75441.f_592)
							{
								switch (Local_402.f_6)
								{
									case 3:
										if (func_65(bVar2))
										{
											Global_75441.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									case 2:
										if (UNK_0xAFB8495D36825275(bVar2))
										{
											Global_75441.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									case 1:
										if ((UNK_0xA7082C42B8809BF2(bVar2) || UNK_0x83496B932152D4D4(bVar2)) || bVar2 == joaat("SUBMERSIBLE2"))
										{
											Global_75441.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									case 0:
										if (func_66(bVar2))
										{
											Global_75441.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
								}
							}
						}
						iVar0++;
					}
				}
				Local_402.f_1 = fLocal_941[iParam0];
			}
		}
	}
	else if (Local_402 == iParam0)
	{
		Local_402 = -1;
		Local_402.f_1 = 99999.99f;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uLocal_48[iParam0], false))
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			if (UNK_0xDF1306B443CD3D15(Global_75441.f_139[iParam0], 0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Global_75441.f_139[iParam0], 0))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(uLocal_48[iParam0], true) || UNK_0xEAE0D21A50E6C7F4(uLocal_48[iParam0], 3))
						{
							UNK_0x5D96D8530B3D0904(&(uLocal_48[iParam0]), false);
							func_330(iParam0, 4, 1);
							func_330(iParam0, 2, 1);
						}
					}
					else
					{
						UNK_0x5D96D8530B3D0904(&(uLocal_48[iParam0]), 3);
					}
				}
			}
		}
	}
	if (iParam0 == 14)
	{
		if ((UNK_0xC844350D5D58C99A(Global_75441.f_484[iParam0]) && UNK_0xDF1306B443CD3D15(Global_75441.f_484[iParam0], 0)) && UNK_0x134B62B726CEC8E6(Global_75441.f_484[iParam0]) == joaat("HYDRA"))
		{
			if (!bLocal_1030)
			{
				if (UNK_0x3D1053F9EB43B7AD(Global_75441.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, true, 0))
				{
					UNK_0xDC06498DD25E7E3E(Global_75441.f_484[iParam0], 0f);
					bLocal_1030 = true;
				}
			}
			else if (!UNK_0x3D1053F9EB43B7AD(Global_75441.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, true, 0))
			{
				UNK_0xDC06498DD25E7E3E(Global_75441.f_484[iParam0], 1f);
				bLocal_1030 = false;
			}
		}
		else
		{
			bLocal_1030 = false;
		}
	}
}

bool func_472()
{
	return true;
}

var func_473(var uParam0, int iParam1)
{
	uParam0->f_80 = 0;
	uParam0->f_69 = 0;
	StringCopy(&(uParam0->f_59), "", 16);
	switch (iParam1)
	{
		case 12:
			*uParam0 = { -952.8823f, -2795.896f, 12.13233f };
			uParam0->f_3 = { -966.7308f, -2787.975f, 16.13232f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_44 = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_47 = 146.6324f;
			uParam0->f_14 = { -1652.454f, -3059.149f, 24.932f };
			uParam0->f_14.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_14.f_12 = 38.2303f;
			uParam0->f_14.f_6 = { -1651.547f, -3060.478f, 23.8077f };
			uParam0->f_14.f_6.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -1650.431f, -3177.229f, 16.9898f };
			uParam0->f_29.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_29.f_12 = 38.2303f;
			uParam0->f_29.f_6 = { -1647.495f, -3173.728f, 16.6439f };
			uParam0->f_29.f_6.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { -1625.911f, -3167.556f, 11.11455f };
			uParam0->f_10 = { -1688.58f, -3130.741f, 20.13538f };
			uParam0->f_13 = 60.1875f;
			uParam0->f_48 = { -1625.911f, -3167.556f, 11.11455f };
			uParam0->f_51 = { -1688.58f, -3130.741f, 20.13538f };
			uParam0->f_54 = 60.1875f;
			uParam0->f_55 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		case 13:
			*uParam0 = { -952.8823f, -2795.896f, 12.13233f };
			uParam0->f_3 = { -966.7308f, -2787.975f, 16.13232f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_44 = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_47 = 146.6324f;
			uParam0->f_14 = { -1184.2f, -3345f, 17.5f };
			uParam0->f_14.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_14.f_12 = 30.3f;
			uParam0->f_14.f_6 = { -1184.3f, -3345f, 16.6f };
			uParam0->f_14.f_6.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -1272.6f, -3414.7f, 15.6f };
			uParam0->f_29.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_29.f_12 = 37.8f;
			uParam0->f_29.f_6 = { -1274f, -3414.4f, 15.6f };
			uParam0->f_29.f_6.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { -1247.688f, -3408.546f, 20.50418f };
			uParam0->f_10 = { -1309.774f, -3372.294f, 11.36878f };
			uParam0->f_13 = 66.1875f;
			uParam0->f_48 = { -1247.688f, -3408.546f, 20.50418f };
			uParam0->f_51 = { -1309.774f, -3372.294f, 11.36878f };
			uParam0->f_54 = 66.1875f;
			uParam0->f_55 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		case 14:
			*uParam0 = { 1727.302f, 3291.453f, 39.61911f };
			uParam0->f_3 = { 1744.108f, 3296.215f, 44.17199f };
			uParam0->f_6 = 4.6875f;
			uParam0->f_44 = { 1737.53f, 3289.239f, 40.1448f };
			uParam0->f_47 = 14.8763f;
			uParam0->f_14 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_14.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_14.f_12 = 50f;
			uParam0->f_14.f_6 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_14.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_29.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_29.f_12 = 50f;
			uParam0->f_29.f_6 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_29.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { 1718.056f, 3305.019f, 45.70922f };
			uParam0->f_10 = { 1745.706f, 3313.101f, 39.758f };
			uParam0->f_13 = 28.125f;
			uParam0->f_48 = { 1718.056f, 3305.019f, 45.70922f };
			uParam0->f_51 = { 1745.706f, 3313.101f, 39.758f };
			uParam0->f_54 = 28.125f;
			uParam0->f_55 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME2", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		case 18:
			*uParam0 = { -709.095f, -1414.229f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.655f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -739.1531f, -1439.509f, 3.188024f };
			uParam0->f_10 = { -753.7792f, -1426.756f, 7.188024f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -700.9434f, -1418.169f, 4.0005f };
			uParam0->f_47 = 142.6382f;
			uParam0->f_14 = { -738f, -1440f, 6.3f };
			uParam0->f_14.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_14.f_12 = 45f;
			uParam0->f_14.f_6 = { -738f, -1440f, 6f };
			uParam0->f_14.f_6.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -749.3f, -1425.7f, 5.9f };
			uParam0->f_29.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { -749.9f, -1426f, 5.9f };
			uParam0->f_29.f_6.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -738.7791f, -1439.377f, 9.125515f };
			uParam0->f_51 = { -755.9111f, -1425.006f, 1.688014f };
			uParam0->f_54 = 18.0625f;
			uParam0->f_55 = { -708.48f, -1414.66f, 4f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME", 16);
			uParam0->f_67 = 419850;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		case 19:
			*uParam0 = { -709.095f, -1414.229f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.655f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -755.6812f, -1459.234f, 3.188023f };
			uParam0->f_10 = { -770.7671f, -1446.867f, 7.188024f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -700.9434f, -1418.169f, 4.0005f };
			uParam0->f_47 = 142.6382f;
			uParam0->f_14 = { -754.6f, -1460.5f, 6.4f };
			uParam0->f_14.f_3 = { -4.8f, 0f, 48.5f };
			uParam0->f_14.f_12 = 45f;
			uParam0->f_14.f_6 = { -754.6f, -1460.6f, 6.1f };
			uParam0->f_14.f_6.f_3 = { -2.2f, 0f, 48.5f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -771.8f, -1452.6f, 5.7f };
			uParam0->f_29.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { -771.8f, -1452.1f, 5.7f };
			uParam0->f_29.f_6.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -755.5715f, -1459.453f, 9.125514f };
			uParam0->f_51 = { -771.4204f, -1446.235f, 1.688017f };
			uParam0->f_54 = 18.0625f;
			uParam0->f_55 = { -708.48f, -1414.66f, 4f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME", 16);
			uParam0->f_67 = 419850;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		case 20:
			*uParam0 = { 1763.424f, 3238.282f, 40.32022f };
			uParam0->f_3 = { 1786.589f, 3239.016f, 47.18534f };
			uParam0->f_6 = 17.75f;
			uParam0->f_7 = { 1763.424f, 3238.282f, 40.32022f };
			uParam0->f_10 = { 1786.589f, 3239.016f, 47.18534f };
			uParam0->f_13 = 17.75f;
			uParam0->f_44 = { 1761.122f, 3250.125f, 40.733f };
			uParam0->f_47 = 236.5858f;
			uParam0->f_14 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_14.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_14.f_12 = 40f;
			uParam0->f_14.f_6 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_14.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_29.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_29.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { 1802.327f, 3245.165f, 46.95544f };
			uParam0->f_51 = { 1755.04f, 3237.17f, 38.6937f };
			uParam0->f_54 = 28.125f;
			uParam0->f_55 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME2", 16);
			uParam0->f_67 = 0;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		case 15:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -845.2216f, -1356.04f, -0.212093f };
			uParam0->f_10 = { -841.6451f, -1365.777f, 3.787907f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -835.86f, -1358.347f, 0.6102f };
			uParam0->f_47 = 112.3787f;
			uParam0->f_14 = { -859.6f, -1374f, 4.3f };
			uParam0->f_14.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_14.f_12 = 32.9f;
			uParam0->f_14.f_6 = { -859.7f, -1374f, 3f };
			uParam0->f_14.f_6.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -837.2f, -1350.3f, 2.4f };
			uParam0->f_29.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -837.4f, -1350.8f, 2.3f };
			uParam0->f_29.f_6.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		case 16:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -848.8177f, -1347.786f, -0.212093f };
			uParam0->f_10 = { -845.2482f, -1357.936f, 3.787908f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -839.2461f, -1349.525f, 0.6102f };
			uParam0->f_47 = 110.6762f;
			uParam0->f_14 = { -866.1f, -1365.6f, 4.3f };
			uParam0->f_14.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_14.f_12 = 30f;
			uParam0->f_14.f_6 = { -866.1f, -1365.6f, 3f };
			uParam0->f_14.f_6.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -838.7f, -1343.3f, 2.9f };
			uParam0->f_29.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -838.8f, -1343.2f, 2.9f };
			uParam0->f_29.f_6.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		case 17:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -851.6987f, -1339.128f, -0.212129f };
			uParam0->f_10 = { -848.128f, -1349.168f, 3.787905f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -842.0763f, -1341.401f, 0.6102f };
			uParam0->f_47 = 109.8916f;
			uParam0->f_14 = { -866.3f, -1357.9f, 4.3f };
			uParam0->f_14.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_14.f_12 = 31.2f;
			uParam0->f_14.f_6 = { -866.3f, -1357.9f, 3f };
			uParam0->f_14.f_6.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -841.6f, -1336.3f, 2.5f };
			uParam0->f_29.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -841.8f, -1336.1f, 2.5f };
			uParam0->f_29.f_6.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		case 21:
			*uParam0 = { -63.38147f, 84.0594f, 70.52139f };
			uParam0->f_3 = { -66.17774f, 77.95913f, 74.05372f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -65.2041f, 81.0524f, 70.5666f };
			uParam0->f_47 = 243.8699f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -62.62f, 80.03f, 70.62f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME1", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 243.8699f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -67.9068f, 82.2664f, 70.5153f };
			uParam0->f_77[0] = 66.202f;
			uParam0->f_70[1 /*3*/] = { -65.1234f, 81.2517f, 70.5644f };
			uParam0->f_77[1] = 71.6237f;
			uParam0->f_80 = 1;
			break;
		case 22:
			*uParam0 = { -72.41166f, -1824.142f, 25.81704f };
			uParam0->f_3 = { -68.70254f, -1819.642f, 29.37954f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -70.1992f, -1823.225f, 25.942f };
			uParam0->f_47 = 46.1535f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -71.29f, -1821.68f, 25.94f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME2", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 53.0985f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -64.2268f, -1832.598f, 25.8666f };
			uParam0->f_77[0] = 274.6339f;
			uParam0->f_70[1 /*3*/] = { -68.5531f, -1824.377f, 25.9424f };
			uParam0->f_77[1] = 215.8295f;
			uParam0->f_80 = 1;
			break;
		case 23:
			*uParam0 = { -220.7794f, -1159.28f, 21.90302f };
			uParam0->f_3 = { -220.7273f, -1165.265f, 25.45053f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -220.7592f, -1162.277f, 22.0242f };
			uParam0->f_47 = 271.2097f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -218.35f, -1162.18f, 22.02f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME3", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 271.2097f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -222.1935f, -1162.113f, 22.0204f };
			uParam0->f_77[0] = 358.5703f;
			uParam0->f_70[1 /*3*/] = { -220.8189f, -1162.302f, 22.0242f };
			uParam0->f_77[1] = 70.2711f;
			uParam0->f_80 = 1;
			break;
	}
	return uParam0->f_80;
}

int func_474()
{
	func_475();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_475()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_402(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_401(UNK_0x16F2683693E537C9());
			if (func_25(iVar0) && (!func_27(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_25(Global_111638.f_2358.f_539.f_4321))
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

void func_476()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (UNK_0xE4EDC4B0E92C078B(Global_75441.f_208[iVar0]))
		{
			UNK_0x142CC44DB769B57E(&(Global_75441.f_208[iVar0]));
		}
		if (UNK_0xC844350D5D58C99A(Global_75441.f_139[iVar0]))
		{
			if (UNK_0xDF1306B443CD3D15(Global_75441.f_139[iVar0], 0))
			{
				if (UNK_0x9C77D2D0559097F0(Global_75441.f_139[iVar0], 1))
				{
					UNK_0x046C362CF15F1935(&(Global_75441.f_139[iVar0]));
					Global_75441.f_139[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
	if (UNK_0x9F4FE516EAACCFC5(Local_402.f_110))
	{
		UNK_0xE3BB8E05FCEB3FBE(Local_402.f_110, false);
		UNK_0x9A8DDC7C522F5BF5(Local_402.f_110, 0);
	}
	if (UNK_0x9F4FE516EAACCFC5(Local_402.f_111))
	{
		UNK_0xE3BB8E05FCEB3FBE(Local_402.f_111, false);
		UNK_0x9A8DDC7C522F5BF5(Local_402.f_111, 0);
	}
	if (Local_402.f_3 != 0)
	{
		func_278();
		UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
	}
	if (UNK_0xE4EDC4B0E92C078B(Global_75441.f_583))
	{
		UNK_0x142CC44DB769B57E(&(Global_75441.f_583));
	}
	if (iLocal_656 != -1)
	{
		func_69(&iLocal_656);
	}
	if (iLocal_655 != -1)
	{
		func_69(&iLocal_655);
	}
	if (Local_402.f_5 != -1)
	{
		func_69(&(Local_402.f_5));
	}
	if (iLocal_668 != -1)
	{
		func_69(&iLocal_668);
	}
	if (Local_402.f_3 > 0)
	{
		if (Global_75441.f_577)
		{
			func_233(47, 1);
			func_231(47, 1);
			Global_75441.f_577 = 0;
			Local_402.f_3 = 0;
		}
	}
	Global_75441.f_553 = 0;
	UNK_0x10FAF14A60A0DBE1();
}

void func_477()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_393[iVar0]))
		{
			UNK_0xF690C84DADBB3551(&(iLocal_393[iVar0]));
		}
		iVar0++;
	}
}

void func_478(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	if (!UNK_0xEAE0D21A50E6C7F4(iLocal_936[iVar0], bVar1))
	{
		UNK_0x5D96D8530B3D0904(&(iLocal_936[iVar0]), bVar1);
		iLocal_867[iLocal_866] = iParam0;
		iLocal_866++;
	}
}

void func_479()
{
	int iVar0;

	if (func_301(25))
	{
		if (Global_111638.f_32744.f_69[22 /*78*/].f_66 != 0 && !func_39(Global_111638.f_32744.f_69[22 /*78*/].f_66, 0))
		{
			Global_111638.f_32744.f_69[22 /*78*/].f_66 = joaat("FUGITIVE");
			Global_111638.f_32744.f_69[22 /*78*/].f_77 = 0;
			Global_111638.f_32744.f_69[22 /*78*/].f_65 = 0;
			Global_111638.f_32744.f_69[22 /*78*/].f_62 = 255;
			Global_111638.f_32744.f_69[22 /*78*/].f_63 = 255;
			Global_111638.f_32744.f_69[22 /*78*/].f_64 = 255;
			Global_111638.f_32744.f_69[22 /*78*/].f_5 = 0;
			Global_111638.f_32744.f_69[22 /*78*/].f_6 = 0;
			Global_111638.f_32744.f_69[22 /*78*/].f_7 = 0;
			Global_111638.f_32744.f_69[22 /*78*/].f_8 = 156;
			iVar0 = 0;
			while (iVar0 < 49)
			{
				Global_111638.f_32744.f_69[22 /*78*/].f_9[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				Global_111638.f_32744.f_69[22 /*78*/].f_59[iVar0] = 0;
				iVar0++;
			}
		}
	}
	if ((func_301(21) && Global_111638.f_32744.f_69[9 /*78*/].f_66 != 0) && !func_39(Global_111638.f_32744.f_69[9 /*78*/].f_66, 0))
	{
		Global_111638.f_32744.f_69[9 /*78*/].f_66 = 0;
	}
	if ((func_301(22) && Global_111638.f_32744.f_69[10 /*78*/].f_66 != 0) && !func_39(Global_111638.f_32744.f_69[10 /*78*/].f_66, 0))
	{
		Global_111638.f_32744.f_69[10 /*78*/].f_66 = 0;
	}
	if ((func_301(23) && Global_111638.f_32744.f_69[11 /*78*/].f_66 != 0) && !func_39(Global_111638.f_32744.f_69[11 /*78*/].f_66, 0))
	{
		Global_111638.f_32744.f_69[11 /*78*/].f_66 = 0;
	}
	if (func_301(26) && !func_39(Global_111638.f_32744.f_69[12 /*78*/].f_66, 0))
	{
		func_480(26, 0);
	}
	if (func_301(27) && !func_39(Global_111638.f_32744.f_69[13 /*78*/].f_66, 0))
	{
		func_480(27, 0);
	}
	if (func_301(28) && !func_39(Global_111638.f_32744.f_69[14 /*78*/].f_66, 0))
	{
		func_480(28, 0);
	}
	if (func_301(29) && !func_39(Global_111638.f_32744.f_69[15 /*78*/].f_66, 0))
	{
		func_480(29, 0);
	}
	if (func_301(30) && !func_39(Global_111638.f_32744.f_69[16 /*78*/].f_66, 0))
	{
		func_480(30, 0);
	}
	if (func_301(31) && !func_39(Global_111638.f_32744.f_69[17 /*78*/].f_66, 0))
	{
		func_480(31, 0);
	}
	if (func_301(32) && !func_39(Global_111638.f_32744.f_69[18 /*78*/].f_66, 0))
	{
		func_480(32, 0);
	}
	if (func_301(33) && !func_39(Global_111638.f_32744.f_69[19 /*78*/].f_66, 0))
	{
		func_480(33, 0);
	}
	if (func_301(34) && !func_39(Global_111638.f_32744.f_69[20 /*78*/].f_66, 0))
	{
		func_480(34, 0);
	}
}

void func_480(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_67(iParam0, 0))
		{
			func_330(iParam0, 1, 0);
			func_330(iParam0, 2, 0);
			func_330(iParam0, 3, 0);
			func_330(iParam0, 4, 0);
			func_330(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_330(iParam0, 0, 0);
	}
}

bool func_481()
{
	return false;
}

bool func_482()
{
	return true;
}

bool func_483()
{
	return true;
}

bool func_484()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

void func_485(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_9 = { func_5("C_SF", "DL", "AST", "X1/BE") };
	func_489();
	func_488();
	func_486();
}

void func_486()
{
	Global_110016 = 2405.849f;
	Global_110019 = 2408.22f;
	Global_110022 = 2386.096f;
	Global_110025 = 69.1875f;
	Global_110028[0 /*3*/] = 2417.105f;
	Global_110028[1 /*3*/] = 2407.058f;
	Global_110028[2 /*3*/] = 2371.92f;
	Global_110028[3 /*3*/] = 2399.583f;
	Global_110028[4 /*3*/] = 2416.519f;
	Global_110028[5 /*3*/] = 2430.345f;
	Global_110028[6 /*3*/] = 2385.819f;
	Global_110050[0] = 157.8636f;
	Global_110050[1] = 174.7226f;
	Global_110050[2] = 270.7562f;
	Global_110050[3] = 190.7495f;
	Global_110050[4] = 27.6506f;
	Global_110050[5] = 358.1218f;
	Global_110050[6] = 339.4363f;
	Global_110058 = 2399.82f;
	Global_110061 = 2414.7f;
	func_487(&Global_108385, 64);
}

void func_487(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_488()
{
	Global_108390[0 /*3*/].f_1 = 5141.01f;
	Global_108390[1 /*3*/].f_1 = 6048.71f;
	Global_108390[2 /*3*/].f_1 = 6185.32f;
	Global_108390[3 /*3*/].f_1 = 5180.99f;
	Global_108390[4 /*3*/].f_1 = 4582.72f;
	Global_108390[5 /*3*/].f_1 = 4831.82f;
	Global_108390[6 /*3*/].f_1 = 4322.66f;
	Global_108390[7 /*3*/].f_1 = 3503.92f;
	Global_108390[8 /*3*/].f_1 = 3777.54f;
	Global_108390[9 /*3*/].f_1 = 3810.8f;
	Global_108390[10 /*3*/].f_1 = 3095.88f;
	Global_108424[0 /*13*/][0 /*3*/].f_1 = 5222.39f;
	Global_108424[0 /*13*/][1 /*3*/].f_1 = 5333.68f;
	Global_108424[0 /*13*/][2 /*3*/].f_1 = 5534.22f;
	Global_108424[0 /*13*/][3 /*3*/].f_1 = 5843.98f;
	Global_108424[1 /*13*/][0 /*3*/].f_1 = 5178.94f;
	Global_108424[1 /*13*/][1 /*3*/].f_1 = 4956.4f;
	Global_108424[1 /*13*/][2 /*3*/].f_1 = 5063.24f;
	Global_108424[2 /*13*/][0 /*3*/].f_1 = 5027.97f;
	Global_108424[2 /*13*/][1 /*3*/].f_1 = 4854.23f;
	Global_108424[2 /*13*/][2 /*3*/].f_1 = 4770.31f;
	Global_108424[3 /*13*/][0 /*3*/].f_1 = 6052.6f;
	Global_108424[3 /*13*/][1 /*3*/].f_1 = 6086.12f;
	Global_108424[3 /*13*/][2 /*3*/].f_1 = 6165.88f;
	Global_108424[4 /*13*/][0 /*3*/].f_1 = 5880.13f;
	Global_108424[4 /*13*/][1 /*3*/].f_1 = 5515.67f;
	Global_108424[4 /*13*/][2 /*3*/].f_1 = 5195.4f;
	Global_108424[5 /*13*/][0 /*3*/].f_1 = 6380.15f;
	Global_108424[5 /*13*/][1 /*3*/].f_1 = 6193.92f;
	Global_108424[5 /*13*/][2 /*3*/].f_1 = 5909.13f;
	Global_108424[6 /*13*/][0 /*3*/].f_1 = 5072.56f;
	Global_108424[6 /*13*/][1 /*3*/].f_1 = 5062.55f;
	Global_108424[6 /*13*/][2 /*3*/].f_1 = 4964.13f;
	Global_108424[7 /*13*/][0 /*3*/].f_1 = 4956.69f;
	Global_108424[7 /*13*/][1 /*3*/].f_1 = 4767.8f;
	Global_108424[7 /*13*/][2 /*3*/].f_1 = 4588.79f;
	Global_108424[8 /*13*/][0 /*3*/].f_1 = 4783.28f;
	Global_108424[8 /*13*/][1 /*3*/].f_1 = 4613.93f;
	Global_108424[8 /*13*/][2 /*3*/].f_1 = 4737.46f;
	Global_108424[9 /*13*/][0 /*3*/].f_1 = 4624.7f;
	Global_108424[9 /*13*/][1 /*3*/].f_1 = 4286.39f;
	Global_108424[9 /*13*/][2 /*3*/].f_1 = 4500.57f;
	Global_108424[10 /*13*/][0 /*3*/].f_1 = 4618.13f;
	Global_108424[10 /*13*/][1 /*3*/].f_1 = 4534.44f;
	Global_108424[10 /*13*/][2 /*3*/].f_1 = 4493.64f;
	Global_108424[11 /*13*/][0 /*3*/].f_1 = 4282.7f;
	Global_108424[11 /*13*/][1 /*3*/].f_1 = 4111.71f;
	Global_108424[11 /*13*/][2 /*3*/].f_1 = 3914.81f;
	Global_108424[11 /*13*/][3 /*3*/].f_1 = 3894.7f;
	Global_108424[12 /*13*/][0 /*3*/].f_1 = 4038.96f;
	Global_108424[12 /*13*/][1 /*3*/].f_1 = 3849.33f;
	Global_108424[12 /*13*/][2 /*3*/].f_1 = 3699.37f;
	Global_108424[13 /*13*/][0 /*3*/].f_1 = 3970.96f;
	Global_108424[13 /*13*/][1 /*3*/].f_1 = 3926.75f;
	Global_108424[13 /*13*/][2 /*3*/].f_1 = 3874.89f;
	Global_108424[14 /*13*/][0 /*3*/].f_1 = 3291.26f;
	Global_108424[14 /*13*/][1 /*3*/].f_1 = 3436.6f;
	Global_108424[14 /*13*/][2 /*3*/].f_1 = 3592.12f;
	Global_108424[15 /*13*/][0 /*3*/].f_1 = 3710.49f;
	Global_108424[15 /*13*/][1 /*3*/].f_1 = 3945.38f;
	Global_108424[15 /*13*/][2 /*3*/].f_1 = 3854.2f;
	Global_108424[15 /*13*/][3 /*3*/].f_1 = 3757.3f;
	Global_108424[16 /*13*/][0 /*3*/].f_1 = 3528.6f;
	Global_108424[16 /*13*/][1 /*3*/].f_1 = 3328.93f;
	Global_108424[16 /*13*/][2 /*3*/].f_1 = 3157.76f;
	Global_108424[17 /*13*/][0 /*3*/].f_1 = 3809.12f;
	Global_108424[17 /*13*/][1 /*3*/].f_1 = 3826.24f;
	Global_108424[17 /*13*/][2 /*3*/].f_1 = 3727.81f;
	Global_108424[18 /*13*/][0 /*3*/].f_1 = 3610.22f;
	Global_108424[18 /*13*/][1 /*3*/].f_1 = 3314.26f;
	Global_108424[18 /*13*/][2 /*3*/].f_1 = 3034.58f;
	Global_108424[19 /*13*/][0 /*3*/].f_1 = 3572.72f;
	Global_108424[19 /*13*/][1 /*3*/].f_1 = 3261.69f;
	Global_108424[19 /*13*/][2 /*3*/].f_1 = 3184.28f;
	func_487(&Global_108385, 16);
}

void func_489()
{
	Global_108341[0 /*3*/] = -1567.382f;
	Global_108341[1 /*3*/] = -1436.305f;
	Global_108341[2 /*3*/] = 31.2408f;
	Global_108341[3 /*3*/] = 278.1924f;
	Global_108341[4 /*3*/] = 1116.002f;
	Global_108341[5 /*3*/] = 1676.193f;
	Global_108363[0 /*3*/] = -1592.642f;
	Global_108363[1 /*3*/] = -1573.501f;
	Global_108363[2 /*3*/] = -1459.359f;
	Global_108363[3 /*3*/] = 21.1005f;
	Global_108363[4 /*3*/] = 262.9409f;
	Global_108363[5 /*3*/] = 1091.07f;
	func_487(&Global_108385, 1);
}

