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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	struct<91> Local_36 = { 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_127 = 0;
	var uLocal_128 = 3;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 3;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	struct<122> Local_143[5];
	var uLocal_754 = 3;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	UNK_0x7798376279BB5369(1);
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		if (!UNK_0xEA6BC48857E0AC4C(Local_36.f_88))
		{
			UNK_0xC92DB9682A650680(Local_36.f_88);
		}
		func_41(2);
		func_37(&Local_36);
	}
	while (true)
	{
		if (iLocal_142 > UNK_0x1C0640BA9A7327B3())
		{
			UNK_0x9501364A300048C6();
		}
		switch (Local_36)
		{
			case 0:
				func_27();
				break;
			case 1:
				func_4();
				break;
			case 2:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	switch (Local_36.f_1)
	{
		case 1:
			func_3();
			break;
		case 2:
			func_2();
			break;
	}
}

void func_2()
{
	if (!UNK_0xEA6BC48857E0AC4C(Local_36.f_88))
	{
		UNK_0xC92DB9682A650680(Local_36.f_88);
	}
	func_41(2);
	func_37(&Local_36);
}

void func_3()
{
	if (!UNK_0xEA6BC48857E0AC4C(Local_36.f_87))
	{
		UNK_0xC92DB9682A650680(Local_36.f_87);
	}
	func_41(1);
	func_37(&Local_36);
}

void func_4()
{
	switch (Local_36.f_3)
	{
		case 9:
			UNK_0x10FEEAFF01E32639(1435f, -2385f, 1690f, -1885f);
			break;
	}
	switch (Local_36.f_83)
	{
		case 0:
			if (func_26(&Local_36))
			{
				Local_36.f_68 = 0;
				Local_36.f_83++;
			}
			break;
		case 1:
			if (func_25(&Local_36))
			{
				Local_36.f_68 = 0;
				Local_36.f_83++;
			}
			break;
		case 2:
			func_23();
			func_22();
			func_21(&Local_143);
			func_6(&Local_143);
			break;
	}
	if (Local_36.f_70 >= Local_36.f_69)
	{
		Local_36 = 2;
		Local_36.f_1 = 1;
	}
	if (UNK_0x0EB28750412C3A5A(func_5(Local_36.f_3), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1) > 300f)
	{
		Local_36 = 2;
		Local_36.f_1 = 2;
	}
}

Vector3 func_5(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2147.317f, 4795.208f, 40.08961f;
		case 9:
			return 1524.329f, -2108.269f, 75.7248f;
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
		case 1:
			return 898.3718f, -177.0764f, 72.68348f;
		case 4:
			return 1191.302f, 2672.064f, 36.73154f;
		case 3:
			return -1584.333f, 5193.487f, 2.95912f;
		case 0:
			return 408.3429f, -1623.836f, 28.29278f;
		case 8:
			return -1339.489f, -21.19435f, 50.34566f;
		case 5:
			return 336.207f, 172.4251f, 102.2055f;
		case 6:
			return 394.5495f, -703.3795f, 28.27281f;
		case 7:
			return -1413.184f, -206.0555f, 46.29474f;
		case 11:
			return -560.3809f, 274.5476f, 82.02014f;
		case 12:
			return 221.0845f, 340.7849f, 104.5883f;
		case 13:
			return -296.7154f, 6259.732f, 30.49339f;
		case 14:
			return -2201.402f, 4291f, 47.32429f;
	}
	return 10f, 10f, 10f;
}

void func_6(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		switch ((*iParam0)[iVar1 /*122*/])
		{
			case 1:
				switch ((iParam0[iVar1 /*122*/])->f_1)
				{
					case 0:
						if (Local_36.f_70 >= (iParam0[iVar1 /*122*/])->f_116)
						{
							(iParam0[iVar1 /*122*/])->f_1 = 1;
						}
						break;
					case 1:
						if (func_18(&vVar2, &uVar5))
						{
							(iParam0[iVar1 /*122*/])->f_1 = 2;
							(iParam0[iVar1 /*122*/])->f_118 = { vVar2 };
							(iParam0[iVar1 /*122*/])->f_121 = uVar5;
						}
						break;
					case 2:
						if (func_16(iParam0, iVar1))
						{
							if (func_13(iParam0, iVar1))
							{
								func_12(iParam0, iVar1);
								(iParam0[iVar1 /*122*/])->f_1 = 3;
							}
						}
						break;
					case 3:
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (UNK_0xC844350D5D58C99A((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/]))
							{
								if (!UNK_0x437347B10A200C4B((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0))
								{
									switch ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9)
									{
										case 1:
											if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 == 0)
											{
												UNK_0xB35CCEC0D4946813((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0);
												UNK_0x3CC33E4E9CE523F4((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 2);
												UNK_0xAFF39FB306F8E232((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 1, UNK_0x405E212DDE472467((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0));
												UNK_0xAFF39FB306F8E232((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 3, !UNK_0x405E212DDE472467((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0));
												if ((iParam0[iVar1 /*122*/])->f_117 == iVar0)
												{
													UNK_0x67415F01577A142E((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 13, 10f);
													UNK_0xAFF39FB306F8E232((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 31, true);
												}
												if ((iParam0[iVar1 /*122*/])->f_117 != iVar0)
												{
													UNK_0x05FE17D2660001CF((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], (iParam0[iVar1 /*122*/])->f_2[(iParam0[iVar1 /*122*/])->f_117 /*20*/], 0f, 0f, 0f, 5f, 0);
												}
												UNK_0x7C8478BF70C1E072((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 300f, 0);
												UNK_0x11AD11297DC58CC7((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], false);
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17 = UNK_0x1C0640BA9A7327B3();
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 1;
											}
											if ((iParam0[iVar1 /*122*/])->f_117 != iVar0)
											{
												if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17 != 0)
												{
													if ((UNK_0x1C0640BA9A7327B3() - (iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17) > 10000)
													{
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 0;
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 3;
													}
												}
											}
											if ((iParam0[iVar1 /*122*/])->f_117 == iVar0)
											{
												if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17 != 0)
												{
													if ((UNK_0x1C0640BA9A7327B3() - (iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17) > 25000 || UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], true), 1) < 25f)
													{
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 0;
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 3;
													}
												}
											}
											break;
										case 3:
											if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 == 0)
											{
												UNK_0xB3F77607A42FF835((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0);
												UNK_0x3CC33E4E9CE523F4((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 2);
												UNK_0xAFF39FB306F8E232((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 1, false);
												UNK_0xAFF39FB306F8E232((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 3, true);
												UNK_0x7C8478BF70C1E072((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 300f, 0);
												UNK_0x11AD11297DC58CC7((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], false);
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 1;
											}
											break;
									}
									func_10(iParam0, iVar1, iVar0, Local_36.f_84);
								}
								else
								{
									func_8(iParam0, iVar1, iVar0);
									func_7(&Local_36);
								}
							}
							iVar0++;
						}
						break;
				}
				break;
		}
		iVar1++;
	}
}

void func_7(int iParam0)
{
	iParam0->f_70++;
}

void func_8(int iParam0, int iParam1, int iParam2)
{
	if (UNK_0xC844350D5D58C99A((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/]))
	{
		if (!UNK_0x437347B10A200C4B((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], 0))
		{
			UNK_0xFADC0A217229F6B5((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], true);
		}
		UNK_0x6DAD7906B73F064D(&((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/]));
		func_9(&((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_1));
	}
}

void func_9(bool bParam0)
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

void func_10(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_11((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], &((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_1), -1, 0, !bParam3, 0, 300f, 0, -1, -1, 1);
}

int func_11(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
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

void func_12(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < (iParam0[iParam1 /*122*/])->f_111)
	{
		(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 1;
		iVar0++;
	}
}

bool func_13(int iParam0, int iParam1)
{
	int iVar0;

	if ((iParam0[iParam1 /*122*/])->f_113 == (iParam0[iParam1 /*122*/])->f_111)
	{
		return true;
	}
	else
	{
		iVar0 = (iParam0[iParam1 /*122*/])->f_113;
		if (!UNK_0xC844350D5D58C99A((iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/]))
		{
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_10 = { (iParam0[iParam1 /*122*/])->f_118 };
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_13 = (iParam0[iParam1 /*122*/])->f_121;
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/] = func_15(iParam0, iParam1, iVar0);
			func_14((iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/], Local_36, (iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_15);
			(iParam0[iParam1 /*122*/])->f_113++;
		}
	}
	return false;
}

void func_14(bool bParam0, struct<61> Param1, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, int iParam92)
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			bVar0 = Param1.f_60[UNK_0x09AC81E49EA267F7(false, 3)];
			if (iParam92 != 0)
			{
				bVar0 = iParam92;
			}
			UNK_0x262EF6C6306BEA6C(bParam0, bVar0, -1, true, true);
			UNK_0x5745EA6329A91E29(bParam0, bVar0, true);
			UNK_0xDAB3108F02A4255A(bParam0, 1, bVar0);
		}
	}
}

bool func_15(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = UNK_0x36F2404464202779(26, Local_36.f_53[0], (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_10, (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_13, 1, true);
	UNK_0x1365063FA6365BE8(bVar0, true);
	UNK_0x20EC6650986ACDC7(bVar0, 1);
	UNK_0x6DF7BF67E86AAE86(bVar0, Local_36.f_52);
	UNK_0xE2F0767314863BD8(bVar0, 1, 0);
	UNK_0xAFF39FB306F8E232(bVar0, 5, true);
	UNK_0x26A6B1686E33113F(bVar0, 1);
	UNK_0x4E885A246A9D983A(bVar0, 42, true);
	UNK_0x4E885A246A9D983A(bVar0, 132, true);
	UNK_0x67415F01577A142E(bVar0, 12, 30f);
	UNK_0x298903DD96203C2C(bVar0, 5);
	if ((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_18 != -1 && (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_19 != -2)
	{
		iVar1 = (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_18;
		if (UNK_0xC844350D5D58C99A((iParam0[iParam1 /*122*/])->f_83[iVar1 /*9*/]))
		{
			if (!UNK_0x437347B10A200C4B((iParam0[iParam1 /*122*/])->f_83[iVar1 /*9*/], 0))
			{
				UNK_0xF821F915BC24D246(bVar0, (iParam0[iParam1 /*122*/])->f_83[iVar1 /*9*/], (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_19);
			}
		}
	}
	iLocal_142 = UNK_0x1C0640BA9A7327B3() + 1000;
	return bVar0;
}

bool func_16(int iParam0, int iParam1)
{
	int iVar0;

	if ((iParam0[iParam1 /*122*/])->f_114 == (iParam0[iParam1 /*122*/])->f_112)
	{
		return true;
	}
	else
	{
		iVar0 = (iParam0[iParam1 /*122*/])->f_114;
		if (!UNK_0xC844350D5D58C99A((iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/]))
		{
			(iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/].f_1 = { (iParam0[iParam1 /*122*/])->f_118 };
			(iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/].f_7 = (iParam0[iParam1 /*122*/])->f_121;
			(iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/] = func_17(iParam0, iParam1, iVar0);
			(iParam0[iParam1 /*122*/])->f_114++;
		}
	}
	return false;
}

bool func_17(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	bVar0 = UNK_0x122AAB0B1D6F55AD((iParam0[iParam1 /*122*/])->f_83[iParam2 /*9*/].f_8, (iParam0[iParam1 /*122*/])->f_83[iParam2 /*9*/].f_1, (iParam0[iParam1 /*122*/])->f_83[iParam2 /*9*/].f_7, true, true, false);
	UNK_0x67E3D6EA8D96FD85(bVar0, 0);
	return bVar0;
}

bool func_18(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = UNK_0x09AC81E49EA267F7(false, 10);
	vVar1 = { Local_36.f_8[iVar0 /*3*/] };
	if (func_19(vVar1, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */, 1084227584 /* Float: 5f */, 1, 1123024896 /* Float: 120f */, 1, 1103626240 /* Float: 25f */))
	{
		*uParam0 = { vVar1 };
		*uParam1 = Local_36.f_39[iVar0];
		return true;
	}
	return false;
}

bool func_19(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, int iParam9, float fParam10)
{
	if (func_20(vParam0))
	{
		return false;
	}
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
		if (UNK_0x9DD97B5335E52CB9(vParam0, bParam5, 0))
		{
			return false;
		}
	}
	if (iParam9 == 1)
	{
		if (UNK_0xA4F4A1E4DDB4728B(vParam0, 1.5f) > 0)
		{
			return false;
		}
	}
	if (iParam7 == 1)
	{
		if (bParam6 > 0f)
		{
			if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vParam0, 1) <= (fParam8 + bParam6))
			{
				if (UNK_0x8E28E832BEAC3DCE(vParam0, bParam6))
				{
					return false;
				}
			}
		}
	}
	if (fParam10 > 0f)
	{
		if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vParam0, 1) < fParam10)
		{
			return false;
		}
	}
	return true;
}

bool func_20(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_21(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch ((*iParam0)[iVar0 /*122*/])
		{
			case 0:
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (UNK_0xC844350D5D58C99A((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/]))
					{
						if (!UNK_0x437347B10A200C4B((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], 0))
						{
							switch ((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_9)
							{
								case 2:
									if (UNK_0x4734A6196B611C3B((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], false) || Local_36.f_84 == 1)
									{
										Local_36.f_84 = 1;
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_16 = 0;
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_9 = 3;
									}
									break;
								case 3:
									if ((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_16 == 0)
									{
										UNK_0x7C8478BF70C1E072((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], 150f, 0);
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_16 = 1;
									}
									break;
							}
							func_10(iParam0, iVar0, iVar1, Local_36.f_84);
						}
						else
						{
							func_8(iParam0, iVar0, iVar1);
							func_7(&Local_36);
						}
					}
					iVar1++;
				}
				break;
		}
		iVar0++;
	}
}

void func_22()
{
	if (Local_36.f_89 == 0)
	{
		if (Local_36.f_71 == 1)
		{
			if (!UNK_0xEA6BC48857E0AC4C(Local_36.f_85))
			{
				if (UNK_0xC92DB9682A650680(Local_36.f_85))
				{
					Local_36.f_89 = 1;
				}
			}
		}
	}
	if (Local_36.f_90 == 0)
	{
		if (Local_36.f_84 == 1)
		{
			if (!UNK_0xEA6BC48857E0AC4C(Local_36.f_86))
			{
				if (UNK_0xC92DB9682A650680(Local_36.f_86))
				{
					Local_36.f_90 = 1;
				}
			}
		}
	}
}

void func_23()
{
	int iVar0;
	int iVar1;

	if (Local_36.f_71 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar1 == 0)
			{
				if (UNK_0xE4EDC4B0E92C078B(Local_143[0 /*122*/].f_2[iVar0 /*20*/].f_1))
				{
					func_24("PMD_OBJ", 7500, 1);
					iVar1 = 1;
					Local_36.f_71 = 1;
				}
			}
			iVar0++;
		}
	}
}

void func_24(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 0);
}

bool func_25(int iParam0)
{
	int iVar0;

	if (iParam0->f_66 == iParam0->f_64)
	{
		return true;
	}
	else if (Local_143[iParam0->f_68 /*122*/] == 0)
	{
		if (Local_143[iParam0->f_68 /*122*/].f_113 == Local_143[iParam0->f_68 /*122*/].f_111)
		{
			iParam0->f_68++;
		}
		else
		{
			iVar0 = Local_143[iParam0->f_68 /*122*/].f_113;
			if (!UNK_0xC844350D5D58C99A(Local_143[iParam0->f_68 /*122*/].f_2[iVar0 /*20*/]))
			{
				Local_143[iParam0->f_68 /*122*/].f_2[iVar0 /*20*/] = func_15(&Local_143, iParam0->f_68, iVar0);
				func_14(Local_143[iParam0->f_68 /*122*/].f_2[iVar0 /*20*/], Local_36, Local_143[iParam0->f_68 /*122*/].f_2[iVar0 /*20*/].f_15);
				Local_143[iParam0->f_68 /*122*/].f_2[iVar0 /*20*/].f_9 = 2;
				Local_143[iParam0->f_68 /*122*/].f_113++;
				iParam0->f_66++;
			}
		}
	}
	else
	{
		iParam0->f_68++;
	}
	return false;
}

bool func_26(int iParam0)
{
	int iVar0;

	if (iParam0->f_67 == iParam0->f_65)
	{
		return true;
	}
	else if (Local_143[iParam0->f_68 /*122*/] == 0)
	{
		if (Local_143[iParam0->f_68 /*122*/].f_114 == Local_143[iParam0->f_68 /*122*/].f_112)
		{
			iParam0->f_68++;
		}
		else
		{
			iVar0 = Local_143[iParam0->f_68 /*122*/].f_114;
			if (!UNK_0xC844350D5D58C99A(Local_143[iParam0->f_68 /*122*/].f_83[iVar0 /*9*/]))
			{
				Local_143[iParam0->f_68 /*122*/].f_83[iVar0 /*9*/] = func_17(&Local_143, iParam0->f_68, iVar0);
				Local_143[iParam0->f_68 /*122*/].f_114++;
				iParam0->f_67++;
			}
		}
	}
	else
	{
		iParam0->f_68++;
	}
	return false;
}

void func_27()
{
	switch (Local_36.f_51)
	{
		case 0:
			func_31(&Local_36, func_36());
			func_30(&Local_36);
			Local_36.f_51++;
			break;
		case 1:
			func_29(Local_36);
			Local_36.f_51++;
			break;
		case 2:
			if (func_28(Local_36))
			{
				Local_36.f_51++;
			}
			break;
		case 3:
			if (UNK_0xF63400DBE3303D26("PMD_ENEMIES", &(Local_36.f_52)))
			{
				UNK_0x0E2400AB9174FA81(5, joaat("PLAYER"), Local_36.f_52);
				UNK_0x0E2400AB9174FA81(5, Local_36.f_52, joaat("COP"));
				UNK_0x0E2400AB9174FA81(5, Local_36.f_52, joaat("PLAYER"));
				UNK_0x0E2400AB9174FA81(1, Local_36.f_52, Local_36.f_52);
			}
			Local_36 = 1;
			break;
	}
}

bool func_28(struct<61> Param0, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90)
{
	if (((((((((((Param0.f_53[0] == 0 || UNK_0xB87F6CF6E5628C67(Param0.f_53[0])) && (Param0.f_53[1] == 0 || UNK_0xB87F6CF6E5628C67(Param0.f_53[1]))) && (Param0.f_53[2] == 0 || UNK_0xB87F6CF6E5628C67(Param0.f_53[2]))) && (Param0.f_57[0] == 0 || UNK_0xB87F6CF6E5628C67(Param0.f_57[0]))) && (Param0.f_57[1] == 0 || UNK_0xB87F6CF6E5628C67(Param0.f_57[1]))) && (Param0.f_57[0] == 0 || UNK_0x1F04E7FA44219580(Param0.f_57[0]))) && (Param0.f_57[1] == 0 || UNK_0x1F04E7FA44219580(Param0.f_57[1]))) && (Param0.f_60[0] == 0 || UNK_0x1787731C4D1D6B19(Param0.f_60[0]))) && (Param0.f_60[1] == 0 || UNK_0x1787731C4D1D6B19(Param0.f_60[1]))) && (Param0.f_60[2] == 0 || UNK_0x1787731C4D1D6B19(Param0.f_60[2]))) && UNK_0x67C1D9E5B91B2E37(false))
	{
		return true;
	}
	return false;
}

void func_29(struct<61> Param0, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_53[iVar0] != 0)
		{
			UNK_0x523BCC9DC80CD82F(Param0.f_53[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Param0.f_57[iVar0] != 0)
		{
			UNK_0x523BCC9DC80CD82F(Param0.f_57[iVar0]);
			UNK_0xD4D331DFE794EACD(Param0.f_57[iVar0], 3);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_60[iVar0] != 0)
		{
			UNK_0x6D0C93EE4FBA9307(Param0.f_60[iVar0], 31, 0);
		}
		iVar0++;
	}
	UNK_0xD7992BEF7A9D109E("PMD", false);
}

void func_30(int iParam0)
{
	if (!func_20(iParam0->f_76) && !func_20(iParam0->f_79))
	{
		iParam0->f_82 = UNK_0x7D6CA5F52B3748BF((iParam0->f_76 - iParam0->f_79), (iParam0->f_76.f_1 - iParam0->f_79.f_1), (iParam0->f_76.f_2 - iParam0->f_79.f_2), (iParam0->f_76 + iParam0->f_79), (iParam0->f_76.f_1 + iParam0->f_79.f_1), (iParam0->f_76.f_2 + iParam0->f_79.f_2), 0, 1, 1, 1);
	}
	if (!func_20(iParam0->f_72) && !iParam0->f_75 <= 0f)
	{
		UNK_0x536F1BE96C726C4B(iParam0->f_72, iParam0->f_75, 1, 0, 0, false);
	}
}

void func_31(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 9:
			iParam0->f_3 = 9;
			iParam0->f_4 = func_34();
			iParam0->f_5 = { 1533.77f, -2135.35f, 82.04f };
			iParam0->f_2 = 4;
			iParam0->f_53[0] = joaat("G_M_Y_LOST_01");
			iParam0->f_53[1] = 0;
			iParam0->f_53[2] = 0;
			iParam0->f_57[0] = joaat("GBURRITO");
			iParam0->f_57[1] = joaat("HEXER");
			iParam0->f_60[0] = joaat("WEAPON_PISTOL");
			iParam0->f_60[1] = joaat("WEAPON_SAWNOFFSHOTGUN");
			iParam0->f_60[2] = joaat("WEAPON_ASSAULTRIFLE");
			iParam0->f_72 = { 1533.77f, -2135.35f, 82.04f };
			iParam0->f_75 = 90f;
			iParam0->f_76 = { 1533.77f, -2135.35f, 82.04f };
			iParam0->f_79 = { 54f, 72f, 8f };
			iParam0->f_50 = 9;
			iParam0->f_8[0 /*3*/] = { 1578.134f, -2317.858f, 86.636f };
			iParam0->f_39[0] = 36.2503f;
			iParam0->f_8[1 /*3*/] = { 1571.414f, -2314.379f, 86.0904f };
			iParam0->f_39[1] = 37.4325f;
			iParam0->f_8[2 /*3*/] = { 1555.674f, -2321.857f, 85.2531f };
			iParam0->f_39[2] = 2.4637f;
			iParam0->f_8[3 /*3*/] = { 1516.694f, -1980.273f, 70.1538f };
			iParam0->f_39[3] = 203.6018f;
			iParam0->f_8[4 /*3*/] = { 1505.077f, -1978.409f, 69.794f };
			iParam0->f_39[4] = 217.0733f;
			iParam0->f_8[5 /*3*/] = { 1498.166f, -1981.469f, 69.5705f };
			iParam0->f_39[5] = 256.7048f;
			iParam0->f_8[6 /*3*/] = { 1670.858f, -2022.844f, 99.5899f };
			iParam0->f_39[6] = 142.5751f;
			iParam0->f_8[7 /*3*/] = { 1677.085f, -2035.785f, 98.5593f };
			iParam0->f_39[7] = 109.2985f;
			iParam0->f_8[8 /*3*/] = { 1659.187f, -2090.027f, 99.2239f };
			iParam0->f_39[8] = 9.0974f;
			Local_143[0 /*122*/] = 0;
			Local_143[0 /*122*/].f_111 = 4;
			Local_143[0 /*122*/].f_112 = 2;
			Local_143[0 /*122*/].f_83[0 /*9*/].f_1 = { 1533.375f, -2087.209f, 76.0832f };
			Local_143[0 /*122*/].f_83[0 /*9*/].f_7 = 152.9678f;
			Local_143[0 /*122*/].f_83[0 /*9*/].f_8 = joaat("GBURRITO");
			Local_143[0 /*122*/].f_83[1 /*9*/].f_1 = { 1547.824f, -2091.365f, 76.1018f };
			Local_143[0 /*122*/].f_83[1 /*9*/].f_7 = 55.5566f;
			Local_143[0 /*122*/].f_83[1 /*9*/].f_8 = joaat("GBURRITO");
			Local_143[0 /*122*/].f_2[0 /*20*/].f_10 = { 1525.76f, -2092.838f, 76.0174f };
			Local_143[0 /*122*/].f_2[0 /*20*/].f_13 = 232.9176f;
			Local_143[0 /*122*/].f_2[1 /*20*/].f_10 = { 1527.138f, -2091.832f, 76.031f };
			Local_143[0 /*122*/].f_2[1 /*20*/].f_13 = 190.6337f;
			Local_143[0 /*122*/].f_2[2 /*20*/].f_10 = { 1523.108f, -2115.134f, 75.6351f };
			Local_143[0 /*122*/].f_2[2 /*20*/].f_13 = 350.4627f;
			Local_143[0 /*122*/].f_2[3 /*20*/].f_10 = { 1522.629f, -2112.768f, 75.6853f };
			Local_143[0 /*122*/].f_2[3 /*20*/].f_13 = 264.9478f;
			Local_143[1 /*122*/] = 1;
			Local_143[1 /*122*/].f_111 = 4;
			Local_143[1 /*122*/].f_112 = 1;
			Local_143[1 /*122*/].f_116 = 2;
			Local_143[1 /*122*/].f_83[0 /*9*/].f_8 = joaat("GBURRITO");
			Local_143[1 /*122*/].f_2[0 /*20*/].f_18 = 0;
			Local_143[1 /*122*/].f_2[0 /*20*/].f_19 = -1;
			Local_143[1 /*122*/].f_2[0 /*20*/].f_15 = joaat("WEAPON_PISTOL");
			Local_143[1 /*122*/].f_2[1 /*20*/].f_18 = 0;
			Local_143[1 /*122*/].f_2[1 /*20*/].f_19 = 0;
			Local_143[1 /*122*/].f_2[1 /*20*/].f_15 = joaat("WEAPON_PISTOL");
			Local_143[1 /*122*/].f_2[2 /*20*/].f_18 = 0;
			Local_143[1 /*122*/].f_2[2 /*20*/].f_19 = 1;
			Local_143[1 /*122*/].f_2[2 /*20*/].f_15 = joaat("WEAPON_ASSAULTRIFLE");
			Local_143[1 /*122*/].f_2[3 /*20*/].f_18 = 0;
			Local_143[1 /*122*/].f_2[3 /*20*/].f_19 = 2;
			Local_143[1 /*122*/].f_2[3 /*20*/].f_15 = joaat("WEAPON_ASSAULTRIFLE");
			Local_143[2 /*122*/] = 1;
			Local_143[2 /*122*/].f_111 = 4;
			Local_143[2 /*122*/].f_112 = 1;
			Local_143[2 /*122*/].f_116 = 3;
			Local_143[2 /*122*/].f_83[0 /*9*/].f_8 = joaat("GBURRITO");
			Local_143[2 /*122*/].f_2[0 /*20*/].f_18 = 0;
			Local_143[2 /*122*/].f_2[0 /*20*/].f_19 = -1;
			Local_143[2 /*122*/].f_2[0 /*20*/].f_15 = joaat("WEAPON_PISTOL");
			Local_143[2 /*122*/].f_2[1 /*20*/].f_18 = 0;
			Local_143[2 /*122*/].f_2[1 /*20*/].f_19 = 0;
			Local_143[2 /*122*/].f_2[1 /*20*/].f_15 = joaat("WEAPON_PISTOL");
			Local_143[2 /*122*/].f_2[2 /*20*/].f_18 = 0;
			Local_143[2 /*122*/].f_2[2 /*20*/].f_19 = 1;
			Local_143[2 /*122*/].f_2[2 /*20*/].f_15 = joaat("WEAPON_ASSAULTRIFLE");
			Local_143[2 /*122*/].f_2[3 /*20*/].f_18 = 0;
			Local_143[2 /*122*/].f_2[3 /*20*/].f_19 = 2;
			Local_143[2 /*122*/].f_2[3 /*20*/].f_15 = joaat("WEAPON_ASSAULTRIFLE");
			break;
		default:
			iParam0->f_2 = 6;
			iParam0->f_53[0] = joaat("G_M_Y_MEXGOON_01");
			iParam0->f_53[1] = joaat("G_M_Y_MEXGOON_02");
			iParam0->f_53[2] = joaat("G_M_Y_MEXGOON_03");
			iParam0->f_60[0] = joaat("WEAPON_PISTOL");
			iParam0->f_60[1] = joaat("WEAPON_MICROSMG");
			iParam0->f_60[2] = joaat("WEAPON_ASSAULTRIFLE");
			iParam0->f_69 = 10;
			break;
	}
	func_33(iParam0);
	func_32(iParam0);
}

void func_32(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Local_143[iVar0 /*122*/] == 0)
		{
			iParam0->f_64 = (iParam0->f_64 + Local_143[iVar0 /*122*/].f_111);
			iParam0->f_65 = (iParam0->f_65 + Local_143[iVar0 /*122*/].f_112);
		}
		iParam0->f_69 = (iParam0->f_69 + Local_143[iVar0 /*122*/].f_111);
		iVar0++;
	}
}

void func_33(int iParam0)
{
	switch (iParam0->f_3)
	{
		case 9:
			switch (iParam0->f_4)
			{
				case 0:
					iParam0->f_85 = "PM_CV1_START";
					iParam0->f_86 = "PM_CV1_GF";
					iParam0->f_87 = "PM_CV1_STOP";
					iParam0->f_88 = "PM_CV1_FAIL";
					iParam0->f_89 = 0;
					iParam0->f_90 = 0;
					break;
				case 1:
					iParam0->f_85 = "PM_CV2_START";
					iParam0->f_86 = "PM_CV2_GF";
					iParam0->f_87 = "PM_CV2_STOP";
					iParam0->f_88 = "PM_CV2_FAIL";
					iParam0->f_89 = 0;
					iParam0->f_90 = 0;
					break;
			}
			break;
	}
}

int func_34()
{
	return func_35(Global_110348.f_20, Global_110348.f_29);
}

int func_35(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
			}
			break;
	}
	return 0;
}

int func_36()
{
	return Global_110348.f_20;
}

void func_37(var uParam0)
{
	func_40(*uParam0);
	func_39(&Local_143);
	func_38(&Local_143);
	if (uParam0->f_82 != 0)
	{
		UNK_0x2952D66A502EA873(uParam0->f_82, 0);
	}
	UNK_0x10FAF14A60A0DBE1();
}

void func_38(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (UNK_0xC844350D5D58C99A((iParam0[iVar0 /*122*/])->f_83[iVar1 /*9*/]))
			{
				UNK_0x046C362CF15F1935(&((iParam0[iVar0 /*122*/])->f_83[iVar1 /*9*/]));
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_39(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			func_8(iParam0, iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_40(struct<61> Param0, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_53[iVar0] != 0)
		{
			UNK_0x71199B01895C6202(Param0.f_53[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Param0.f_57[iVar0] != 0)
		{
			UNK_0x71199B01895C6202(Param0.f_57[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_60[iVar0] != 0)
		{
			UNK_0x2914827AC2790D54(Param0.f_60[iVar0]);
		}
		iVar0++;
	}
}

void func_41(int iParam0)
{
	Global_110348.f_22 = iParam0;
}

