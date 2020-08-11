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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	struct<24> Local_40[2];
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
	var uLocal_101 = -1;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	bool bLocal_106 = false;
	vector3 vLocal_107[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_114[2] = { 0, 0 };
	int iLocal_117[2] = { 0, 0 };
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	int iVar5;

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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	vVar2 = { ScriptParam_0.f_1[0 /*3*/] };
	if (UNK_0x8A22C4C08282BF26(joaat("LAUNCHER_CARWASH")) > 1)
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	if (UNK_0x8CD06866876216F2())
	{
		UNK_0xB57F88F0123F4C38();
		UNK_0x256D93AFAE851A7A(0);
	}
	else if (UNK_0x2EBF608FFE6CA406(99))
	{
		func_71();
	}
	if (Global_2621550)
	{
		if (UNK_0x8A22C4C08282BF26(-949873222) == 0)
		{
			UNK_0x8CFFBE74CB5C864A(-949873222);
			while (!UNK_0x64EF15C5E09BAD76(-949873222))
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(-949873222, &ScriptParam_0, 23, 1424);
		}
		UNK_0x10FAF14A60A0DBE1();
	}
	if (func_70(UNK_0x16F2683693E537C9()))
	{
	}
	func_64();
	while (true)
	{
		func_70(UNK_0x16F2683693E537C9());
		if (func_63(UNK_0x16F2683693E537C9(), vVar2, 0) > (100f + 20f))
		{
			func_71();
		}
		bVar0 = false;
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar1 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			bVar0 = (func_60(bVar1) || func_59(bVar1));
			bLocal_106 = UNK_0xD7B43F1BE8526992(bVar1);
			func_58(bLocal_106);
		}
		iVar5 = 0;
		while (iVar5 < Local_40)
		{
			func_57(iVar5);
			iVar5++;
		}
		if (func_1(&Local_40, &uLocal_89, bVar0, 0, 1, 1424))
		{
			func_71();
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (uParam1->f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			func_52(iParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (func_45(uParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *iParam0)
				{
					if (func_42(iParam0[iVar0 /*24*/]) && (*iParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if ((iParam0[iVar0 /*24*/])->f_7 || (UNK_0x2C1AA3A291786CDC() && uParam1->f_16 == 0))
						{
							func_41(uParam1, 6);
						}
						else if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
						{
							func_41(uParam1, 8);
						}
						else if (bParam2)
						{
							func_41(uParam1, 3);
						}
						else if ((iParam0[iVar0 /*24*/])->f_8)
						{
							func_41(uParam1, 2);
						}
						else if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
						{
							func_41(uParam1, 1);
						}
						else if (func_25())
						{
							func_41(uParam1, 7);
						}
						else
						{
							func_41(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_24(uParam1);
			}
			break;
		case 2:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_6);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || (iParam0[iVar0 /*24*/])->f_8 == 0)
			{
				func_41(uParam1, 0);
				return false;
			}
			break;
		case 1:
			if (!uParam1->f_9)
			{
				func_13(uParam1, uParam1->f_2, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_30() >= (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_41(uParam1, 0);
				return false;
			}
			break;
		case 6:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_1);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return false;
			}
			break;
		case 3:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_3);
			}
			if ((func_18(iParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return false;
			}
			break;
		case 7:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_5);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return false;
			}
			break;
		case 8:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_4);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
			{
				func_41(uParam1, 0);
				return false;
			}
			break;
		case 9:
			if (!uParam1->f_9)
			{
				if (func_12())
				{
					func_22(uParam1, uParam1->f_7);
				}
				else
				{
					func_22(uParam1, uParam1->f_8);
				}
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_9(iParam0[uParam1->f_12 /*24*/]))
			{
				func_41(uParam1, 0);
				return false;
			}
			break;
		case 4:
			UNK_0x558EC149EB2BC0A2(2, 51);
			UNK_0x38C3A68D7861DCFD(0, 101, 1);
			func_8();
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
			{
				func_41(uParam1, 8);
				return false;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_8)
			{
				func_41(uParam1, 2);
				return false;
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return false;
			}
			if (Global_73825)
			{
				return false;
			}
			if (func_5(1))
			{
				return false;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) || func_4(UNK_0x16F2683693E537C9(), 0) != -1)
				{
					func_41(uParam1, 0);
					return false;
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_7 || (UNK_0x2C1AA3A291786CDC() && uParam1->f_16 == 0))
			{
				func_41(uParam1, 6);
				return false;
			}
			if (func_25())
			{
				func_41(uParam1, 7);
				return false;
			}
			if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_41(uParam1, 1);
				return false;
			}
			if (!uParam1->f_9)
			{
				func_13(uParam1, *uParam1, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && !UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
				{
					return false;
				}
			}
			if (UNK_0x798A3F1296751F46() || UNK_0x1A72D8C9F025E5E3())
			{
				return false;
			}
			if (UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
			{
				if ((UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9()) || UNK_0x9832A1748E6D3DBF(UNK_0x16F2683693E537C9())) || UNK_0x7F69A7C512ACACFD(UNK_0x16F2683693E537C9()))
				{
					return false;
				}
				if ((UNK_0x4580010DFDF4D53F(UNK_0x16F2683693E537C9()) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0xA48EBBEA418ADC94(UNK_0x16F2683693E537C9()))
				{
					return false;
				}
				if (UNK_0x39E5E51C6E21A69B(UNK_0x16F2683693E537C9()))
				{
					return false;
				}
				if (UNK_0x82F88FD400E98881(UNK_0x16F2683693E537C9()) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9()))
				{
					return false;
				}
				if (UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) > 0.05f)
				{
					return false;
				}
			}
			if (UNK_0xBFC0798A6E3417F9(2, 51) && uParam1->f_9 == 1)
			{
				if (!func_9(iParam0[uParam1->f_12 /*24*/]))
				{
					func_41(uParam1, 9);
				}
				else
				{
					func_41(uParam1, 5);
				}
			}
			break;
		case 5:
			func_24(uParam1);
			(iParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				func_41(uParam1, 0);
				return true;
			}
			UNK_0xA37A90C62806D848(1);
			UNK_0x679C321F8CAA2CFA(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 20f, 0);
			if (!UNK_0xEA6BC48857E0AC4C((iParam0[uParam1->f_12 /*24*/])->f_5))
			{
				UNK_0x92DCE5C81176D2B4((iParam0[uParam1->f_12 /*24*/])->f_5);
				while (!UNK_0x1FBF08B001C4788A((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					func_8();
					if (func_70(UNK_0x16F2683693E537C9()))
					{
						if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && !Global_76622)
						{
							func_2(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 2f, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0);
							UNK_0xACCB31D58716FE8F(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0);
						}
					}
					UNK_0x558EC149EB2BC0A2(2, 51);
					UNK_0x92DCE5C81176D2B4((iParam0[uParam1->f_12 /*24*/])->f_5);
					UNK_0x38C3A68D7861DCFD(0, 101, 1);
					UNK_0x38C3A68D7861DCFD(0, 75, 1);
					UNK_0x38C3A68D7861DCFD(0, 23, 1);
					SYSTEM::WAIT(0);
				}
				if (bParam3)
				{
					UNK_0x53491B90E4FD0E56(250);
				}
				if (UNK_0x1FBF08B001C4788A((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!UNK_0x757EF87A33649210())
						{
							if (func_70(UNK_0x16F2683693E537C9()))
							{
								if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && !Global_76622)
								{
									func_2(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 2f, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0);
									UNK_0xACCB31D58716FE8F(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0);
								}
							}
							UNK_0x558EC149EB2BC0A2(2, 51);
							UNK_0x38C3A68D7861DCFD(0, 101, 1);
							UNK_0x38C3A68D7861DCFD(0, 75, 1);
							UNK_0x38C3A68D7861DCFD(0, 23, 1);
							func_8();
							SYSTEM::WAIT(0);
						}
					}
					SYSTEM::START_NEW_SCRIPT((iParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					UNK_0x5E8C29AE121DF1C7((iParam0[uParam1->f_12 /*24*/])->f_5);
					return true;
				}
			}
			break;
	}
	return false;
}

int func_2(bool bParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_3(bParam0);
	if ((UNK_0x1C0640BA9A7327B3() - Global_29) > 500)
	{
		UNK_0xE0C0351D5B931E37(bParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = UNK_0x1C0640BA9A7327B3();
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x755FF954DAE327E1(UNK_0x9C66D99E63E8E24C(bParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_3(bool bParam0)
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

bool func_4(bool bParam0, int iParam1)
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

bool func_5(bool bParam0)
{
	if (bParam0)
	{
		if (func_7())
		{
			return true;
		}
	}
	if (func_6(14))
	{
		return true;
	}
	return false;
}

bool func_6(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_7()
{
	if (Global_110583)
	{
		return true;
	}
	if (!func_6(14) && UNK_0x8A22C4C08282BF26(joaat("DIRECTOR_MODE")) > 0)
	{
		return true;
	}
	return false;
}

void func_8()
{
	Global_22211.f_6 = 1;
}

bool func_9(var uParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;

	bVar4 = UNK_0x16F2683693E537C9();
	if (uParam0->f_15 == 360f)
	{
		return true;
	}
	if (func_11(uParam0->f_12))
	{
		return true;
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar3 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (func_70(bVar3))
		{
			vVar0 = { UNK_0x835730A2D89F6093(bVar3, 2) };
			if (vVar0.y > 45f || vVar0.y < -45f)
			{
				return false;
			}
			bVar4 = bVar3;
		}
	}
	vVar0 = { UNK_0x08D89CE2E20AE305(bVar4) };
	if (func_10(uParam0->f_12, vVar0) > SYSTEM::COS(uParam0->f_15))
	{
		return true;
	}
	return false;
}

float func_10(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0 * Param3) + (Param0.f_1 * Param3.f_1));
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
	bool bVar0;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		return UNK_0x10BA239D3B8FDC7F(bVar0, 90f);
	}
	return UNK_0x10BA239D3B8FDC7F(UNK_0x16F2683693E537C9(), 90f);
}

int func_13(var uParam0, bool bParam1, bool bParam2)
{
	if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !UNK_0xFEBC1E4EC9E001F0())
	{
		UNK_0xA37A90C62806D848(1);
		func_14(bParam1, bParam2);
		uParam0->f_14 = bParam1;
		uParam0->f_15 = bParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

bool func_15(var uParam0)
{
	if (UNK_0xEA6BC48857E0AC4C(uParam0->f_14))
	{
		return false;
	}
	if (!UNK_0xFEBC1E4EC9E001F0())
	{
		return false;
	}
	if (UNK_0x7F8A39872A07D2CE(*uParam0, uParam0->f_14) || UNK_0x7F8A39872A07D2CE(uParam0->f_2, uParam0->f_14))
	{
		return func_17(uParam0->f_14, uParam0->f_15);
	}
	return func_16(uParam0->f_14);
}

int func_16(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

int func_17(bool bParam0, bool bParam1)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	return UNK_0xE3789B9938DCEAE8(0);
}

bool func_18(var uParam0)
{
	struct<8> Var0;

	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			return true;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			return true;
		}
		if (func_4(UNK_0x16F2683693E537C9(), 0) != -1)
		{
			return true;
		}
	}
	if (uParam0->f_11 == 0)
	{
		return !func_21(UNK_0x16F2683693E537C9(), uParam0->f_1, (uParam0->f_10 + 2f));
	}
	Var0 = { func_19(uParam0->f_16, 2f) };
	return !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, true, 0);
}

struct<8> func_19(struct<8> Param0, float fParam8)
{
	struct<8> Var0;
	vector3 vVar8;

	Var0 = 2;
	vVar8 = { func_20(Param0[1 /*3*/] - Param0[0 /*3*/]) * Vector(fParam8, fParam8, fParam8) };
	Var0[0 /*3*/] = { Param0[0 /*3*/] - vVar8 };
	Var0[1 /*3*/] = { Param0[1 /*3*/] + vVar8 };
	Var0.f_7 = (Param0.f_7 + (fParam8 * 2f));
	return Var0;
}

Vector3 func_20(vector3 vParam0)
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

bool func_21(bool bParam0, vector3 vParam1, float fParam4)
{
	return SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bParam0, true), vParam1) <= (fParam4 * fParam4);
}

int func_22(var uParam0, bool bParam1)
{
	if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !UNK_0xFEBC1E4EC9E001F0())
	{
		UNK_0xA37A90C62806D848(1);
		func_23(bParam1);
		uParam0->f_14 = bParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_23(bool bParam0)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

void func_24(var uParam0)
{
	if (func_15(uParam0))
	{
		UNK_0xA37A90C62806D848(1);
	}
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	if (uParam0->f_9 == 1)
	{
		uParam0->f_9 = 0;
	}
}

bool func_25()
{
	bool bVar0;

	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		return false;
	}
	bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
	if (UNK_0x4E861BC5B1EDA7BD(bVar0))
	{
		return true;
	}
	if (func_29(bVar0))
	{
		return true;
	}
	if (func_26(bVar0, 3))
	{
		return true;
	}
	return !UNK_0xDF1306B443CD3D15(bVar0, 0);
}

bool func_26(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_27(bParam0))
	{
		iVar0 = 0;
		if (UNK_0x464B3D84B739AE72(bParam0, false, 0) && UNK_0x464B3D84B739AE72(bParam0, true, 0))
		{
			return true;
		}
		if (UNK_0x464B3D84B739AE72(bParam0, 4, 0) && UNK_0x464B3D84B739AE72(bParam0, 5, 0))
		{
			return true;
		}
		if (UNK_0x464B3D84B739AE72(bParam0, false, 0))
		{
			iVar0++;
		}
		if (UNK_0x464B3D84B739AE72(bParam0, true, 0))
		{
			iVar0++;
		}
		if (UNK_0x464B3D84B739AE72(bParam0, 4, 0))
		{
			iVar0++;
		}
		if (UNK_0x464B3D84B739AE72(bParam0, 5, 0))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_27(bool bParam0)
{
	if (func_28(bParam0))
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

bool func_28(bool bParam0)
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

bool func_29(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0x437347B10A200C4B(bParam0, 0))
		{
			return true;
		}
		else if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (!UNK_0x4E861BC5B1EDA7BD(bParam0))
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

int func_30()
{
	if (UNK_0x8CD06866876216F2())
	{
		return func_38(UNK_0xD803B885F5E47A62());
	}
	switch (func_32())
	{
		case 2:
			return func_31(2);
		case 0:
			return func_31(0);
		case 1:
			return func_31(1);
		default:
			break;
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_58686[iParam0];
}

int func_32()
{
	func_33();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_33()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_36(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_35(UNK_0x16F2683693E537C9());
			if (func_34(iVar0) && (!func_6(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_34(Global_111638.f_2358.f_539.f_4321))
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

bool func_34(int iParam0)
{
	return iParam0 < 3;
}

int func_35(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)
{
	if (func_34(iParam0))
	{
		return func_37(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_37(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_38(bool bParam0)
{
	int iVar0;

	iVar0 = func_39(bParam0);
	return iVar0;
}

int func_39(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (bParam0 == UNK_0xD803B885F5E47A62())
		{
			return UNK_0x62F8C2EDB26F57B3(-1);
		}
		else if (func_40(bParam0))
		{
			return Global_1590535[bParam0 /*876*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_40(bool bParam0)
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

void func_41(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
	func_24(uParam0);
}

bool func_42(var uParam0)
{
	func_70(UNK_0x16F2683693E537C9());
	if (*uParam0 == 0)
	{
		return false;
	}
	if (func_44(0))
	{
		return false;
	}
	if (func_43())
	{
		return false;
	}
	if (uParam0->f_6 == 0)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			return false;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			return false;
		}
		if (func_4(UNK_0x16F2683693E537C9(), 0) != -1)
		{
			return false;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, 0, true, 0);
	}
	return func_21(UNK_0x16F2683693E537C9(), uParam0->f_1, uParam0->f_10);
}

bool func_43()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

bool func_44(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_45(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_51())
		{
			return false;
		}
	}
	if (UNK_0x798A3F1296751F46())
	{
		return false;
	}
	if (UNK_0x1A72D8C9F025E5E3())
	{
		return false;
	}
	if (func_43())
	{
		return false;
	}
	if (Global_61506)
	{
		return false;
	}
	if (func_44(0))
	{
		return false;
	}
	if (func_50(0))
	{
		return false;
	}
	if (func_46(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_46(int iParam0)
{
	if (func_49(iParam0))
	{
		return true;
	}
	if (func_47(iParam0))
	{
		return true;
	}
	return false;
}

bool func_47(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_48(iParam0, 9);
	}
	return false;
}

bool func_48(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

bool func_49(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iVar0 /*615*/].f_1, false);
	}
	return false;
}

bool func_50(int iParam0)
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

bool func_51()
{
	if (Global_41431 == 15)
	{
		return false;
	}
	return true;
}

void func_52(var uParam0)
{
	if (uParam0->f_11 == 1)
	{
		func_54(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		func_53(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

void func_53(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;

	fVar1 = (360f / SYSTEM::TO_FLOAT(iParam8));
	vVar2 = { vParam0 };
	vVar5 = { vParam0 };
	fVar8 = 0f;
	vVar2 = { vParam0 };
	vVar2.x = (vVar2.x + (SYSTEM::SIN((fVar8 - fVar1)) * fParam3));
	vVar2.f_1 = (vVar2.y + (SYSTEM::COS((fVar8 - fVar1)) * fParam3));
	iVar0 = 0;
	while (iVar0 <= iParam8)
	{
		vVar5 = { vParam0 };
		vVar5.x = (vVar5.x + (SYSTEM::SIN(fVar8) * fParam3));
		vVar5.f_1 = (vVar5.y + (SYSTEM::COS(fVar8) * fParam3));
		UNK_0x4ADCCF23C40DC113(vVar2, vVar5, bParam4, bParam5, bParam6, iParam7);
		vVar2 = { vVar5 };
		fVar8 = (fVar8 + fVar1);
		iVar0++;
	}
}

void func_54(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	func_55(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, fParam4);
}

void func_55(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13[8];
	int iVar38;

	if (fParam6 == 0f)
	{
		return;
	}
	vVar0 = { func_20(vParam3 - vParam0) };
	vVar3 = { func_56(vVar0, 0f, 0f, 1f) };
	fVar6 = (fParam6 / 2f);
	vVar7 = { vParam0 };
	vVar10 = { vParam3 };
	vVar10.f_2 = vParam0.z;
	vVar13[0 /*3*/] = { vVar7 - vVar3 * Vector(fVar6, fVar6, fVar6) };
	vVar13[1 /*3*/] = { vVar7 + vVar3 * Vector(fVar6, fVar6, fVar6) };
	vVar13[2 /*3*/] = { vVar10 + vVar3 * Vector(fVar6, fVar6, fVar6) };
	vVar13[3 /*3*/] = { vVar10 - vVar3 * Vector(fVar6, fVar6, fVar6) };
	UNK_0x4ADCCF23C40DC113(vVar13[0 /*3*/], vVar13[1 /*3*/], bParam7, bParam8, bParam9, iParam10);
	UNK_0x4ADCCF23C40DC113(vVar13[1 /*3*/], vVar13[2 /*3*/], bParam7, bParam8, bParam9, iParam10);
	UNK_0x4ADCCF23C40DC113(vVar13[2 /*3*/], vVar13[3 /*3*/], bParam7, bParam8, bParam9, iParam10);
	UNK_0x4ADCCF23C40DC113(vVar13[3 /*3*/], vVar13[0 /*3*/], bParam7, bParam8, bParam9, iParam10);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		vVar13[(4 + iVar38) /*3*/] = { vVar13[iVar38 /*3*/] };
		vVar13[(4 + iVar38) /*3*/].f_2 = vParam3.z;
		iVar38++;
	}
	UNK_0x4ADCCF23C40DC113(vVar13[4 /*3*/], vVar13[5 /*3*/], bParam7, bParam8, bParam9, iParam10);
	UNK_0x4ADCCF23C40DC113(vVar13[5 /*3*/], vVar13[6 /*3*/], bParam7, bParam8, bParam9, iParam10);
	UNK_0x4ADCCF23C40DC113(vVar13[6 /*3*/], vVar13[7 /*3*/], bParam7, bParam8, bParam9, iParam10);
	UNK_0x4ADCCF23C40DC113(vVar13[7 /*3*/], vVar13[4 /*3*/], bParam7, bParam8, bParam9, iParam10);
	UNK_0x4ADCCF23C40DC113(vVar13[0 /*3*/], vVar13[4 /*3*/], bParam7, bParam8, bParam9, iParam10);
	UNK_0x4ADCCF23C40DC113(vVar13[1 /*3*/], vVar13[5 /*3*/], bParam7, bParam8, bParam9, iParam10);
	UNK_0x4ADCCF23C40DC113(vVar13[2 /*3*/], vVar13[6 /*3*/], bParam7, bParam8, bParam9, iParam10);
	UNK_0x4ADCCF23C40DC113(vVar13[3 /*3*/], vVar13[7 /*3*/], bParam7, bParam8, bParam9, iParam10);
}

Vector3 func_56(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

void func_57(int iParam0)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	var uVar5;
	int iVar8;

	if (!func_42(&(Local_40[iParam0 /*24*/])))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_117[iParam0] = 0;
		return;
	}
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_117[iParam0] = 0;
		return;
	}
	if (iLocal_117[iParam0] == 0)
	{
		if (UNK_0x1C0640BA9A7327B3() > uLocal_114[iParam0])
		{
			iLocal_117[iParam0] = UNK_0xD7C553FB028E03E7(vLocal_107[iParam0 /*3*/], vLocal_107[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 4);
		}
	}
	else
	{
		iVar0 = UNK_0x1EC301670B54C6DE(iLocal_117[iParam0], &iVar8, &uVar2, &uVar5, &bVar1);
		if (iVar0 == 2)
		{
			Local_40[iParam0 /*24*/].f_8 = 0;
			if (iVar8 > 0)
			{
				if (UNK_0xC844350D5D58C99A(bVar1))
				{
					if (UNK_0xE2F1E99DD161A861(bVar1))
					{
						Local_40[iParam0 /*24*/].f_8 = 1;
					}
				}
			}
			iLocal_117[iParam0] = 0;
		}
		if (iVar0 == 0)
		{
			iLocal_117[iParam0] = 0;
		}
		uLocal_114[iParam0] = UNK_0x1C0640BA9A7327B3() + 250;
	}
}

void func_58(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_59(bool bParam0)
{
	if (!UNK_0x8E39AC3C76C8AA58(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		return 1;
	}
	if (UNK_0x1150BCE24B1630AC(bParam0, false))
	{
		return 1;
	}
	if (UNK_0x1150BCE24B1630AC(bParam0, true))
	{
		return 1;
	}
	if (UNK_0x1150BCE24B1630AC(bParam0, 2))
	{
		return 1;
	}
	if (UNK_0x1150BCE24B1630AC(bParam0, 3))
	{
		return 1;
	}
	if (UNK_0x587993B327460A82(bParam0, 1))
	{
		if (UNK_0x74A7D92E3874B5C7(bParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_60(bool bParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!func_28(bParam0))
	{
		return 0;
	}
	if (!UNK_0xD7B43F1BE8526992(bParam0))
	{
		return 1;
	}
	if (UNK_0x6CFEA4CFD9C496C8(bParam0))
	{
		return 1;
	}
	if (!UNK_0x8E39AC3C76C8AA58(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		return 1;
	}
	if (UNK_0x4E861BC5B1EDA7BD(bParam0))
	{
		return 1;
	}
	if (func_61(bParam0))
	{
		return 1;
	}
	UNK_0xA6B02C1DB14DDA13(UNK_0x134B62B726CEC8E6(bParam0), &vVar0, &vVar3);
	if (UNK_0x755FF954DAE327E1((vVar3.x - vVar0.x)) > 3.4f)
	{
		return 1;
	}
	if (UNK_0x755FF954DAE327E1((vVar3.z - vVar0.z)) > 2.9f)
	{
		return 1;
	}
	if (Global_76622)
	{
		if (!UNK_0xAFE0D3608EDA7039(bParam0))
		{
			return 0;
		}
	}
	if (UNK_0x587993B327460A82(bParam0, 1) && !UNK_0xD7B43F1BE8526992(bParam0))
	{
		return 1;
	}
	if (!UNK_0x587993B327460A82(bParam0, 1) && !UNK_0xD7B43F1BE8526992(bParam0))
	{
		return 1;
	}
	if (UNK_0x134B62B726CEC8E6(bParam0) == joaat("BTYPE") || UNK_0x134B62B726CEC8E6(bParam0) == joaat("BTYPE3"))
	{
		if (((((func_28(UNK_0xA30B8362589C124A(bParam0, 3, 0)) || func_28(UNK_0xA30B8362589C124A(bParam0, 4, 0))) || func_28(UNK_0xA30B8362589C124A(bParam0, 5, 0))) || func_28(UNK_0xA30B8362589C124A(bParam0, 6, 0))) || func_28(UNK_0xA30B8362589C124A(bParam0, 7, 0))) || func_28(UNK_0xA30B8362589C124A(bParam0, 8, 0)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_61(bool bParam0)
{
	bool bVar0;

	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	if (func_62(bVar0))
	{
		return true;
	}
	if (bVar0 == joaat("REGINA"))
	{
		if (UNK_0xDD62D560CFE11A27(bParam0, 2))
		{
			return true;
		}
		if (UNK_0xDD62D560CFE11A27(bParam0, 3) && UNK_0xDD62D560CFE11A27(bParam0, 4))
		{
			return true;
		}
	}
	if (bVar0 == joaat("BANSHEE") && UNK_0xDD62D560CFE11A27(bParam0, true))
	{
		return true;
	}
	if (bVar0 == joaat("PEYOTE") && UNK_0xDD62D560CFE11A27(bParam0, true))
	{
		return true;
	}
	if (bVar0 == joaat("COQUETTE") && !UNK_0xD7B43F1BE8526992(bParam0))
	{
		return true;
	}
	if (bVar0 == joaat("MANANA") && UNK_0xDD62D560CFE11A27(bParam0, true))
	{
		return true;
	}
	if (bVar0 == joaat("MESA") && !UNK_0xDD62D560CFE11A27(bParam0, true))
	{
		return true;
	}
	if (bVar0 == joaat("VOLTIC") && UNK_0xDD62D560CFE11A27(bParam0, true))
	{
		return true;
	}
	if (bVar0 == joaat("BOBCATXL") && !UNK_0xDD62D560CFE11A27(bParam0, true))
	{
		return true;
	}
	if (bVar0 == joaat("RUINER"))
	{
		if (UNK_0xDD62D560CFE11A27(bParam0, 3) && !UNK_0xDD62D560CFE11A27(bParam0, 7))
		{
			return false;
		}
		return true;
	}
	if (bVar0 == 67753863)
	{
		if (UNK_0x0ECB5CA5140957AD(bParam0, 5) == 4)
		{
			return true;
		}
	}
	return false;
}

bool func_62(bool bParam0)
{
	if (!UNK_0x8E39AC3C76C8AA58(bParam0))
	{
		return true;
	}
	switch (bParam0)
	{
		case joaat("AMBULANCE"):
		case joaat("ARMYTRAILER"):
		case joaat("AIRTUG"):
		case joaat("BIFTA"):
		case joaat("BISON2"):
		case joaat("BISON3"):
		case joaat("BODHI2"):
		case joaat("BOXVILLE"):
		case joaat("BOXVILLE2"):
		case joaat("BOXVILLE3"):
		case joaat("BULLDOZER"):
		case joaat("CADDY"):
		case joaat("CADDY2"):
		case joaat("CUTTER"):
		case joaat("DILETTANTE2"):
		case joaat("DUBSTA3"):
		case joaat("DUMP"):
		case joaat("DUNE"):
		case joaat("DLOADER"):
		case joaat("FORKLIFT"):
		case joaat("GUARDIAN"):
		case joaat("GRAINTRAILER"):
		case joaat("HANDLER"):
		case joaat("INSURGENT"):
		case joaat("INSURGENT2"):
		case joaat("KALAHARI"):
		case joaat("MESA3"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
		case joaat("MOWER"):
		case joaat("PACKER"):
		case joaat("PBUS"):
		case joaat("RATLOADER"):
		case joaat("RENTALBUS"):
		case joaat("RHINO"):
		case joaat("RIPLEY"):
		case joaat("RIOT"):
		case joaat("SADLER"):
		case joaat("SADLER2"):
		case joaat("SANDKING"):
		case joaat("SANDKING2"):
		case joaat("SCRAP"):
		case joaat("STOCKADE"):
		case joaat("STOCKADE3"):
		case joaat("TECHNICAL"):
		case joaat("TRACTOR"):
		case joaat("TRACTOR2"):
		case joaat("TORNADO4"):
		case joaat("TOURBUS"):
		case joaat("LIMO2"):
		case joaat("RAPTOR"):
		case joaat("RATLOADER2"):
		case joaat("DUNE3"):
		case joaat("DUNE4"):
		case joaat("DUNE5"):
		case joaat("VIGILANTE"):
		case joaat("DELUXO"):
		case joaat("CARACARA"):
		case joaat("SCRAMJET"):
		case joaat("MENACER"):
		case -1349095620:
		case joaat("LOCUST"):
		case -208911803:
		case -682108547:
		case 340154634:
		case -1756021720:
		case 1284356689:
		case joaat("OUTLAW"):
		case 740289177:
		case -1960756985:
		case -1254331310:
		case 1107404867:
		case 1802742206:
		case 1492612435:
		case 1181339704:
			return true;
		default:
			break;
	}
	return false;
}

float func_63(bool bParam0, vector3 vParam1, int iParam4)
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

void func_64()
{
	func_68(&(Local_40[0 /*24*/]), 1, "Carwash1", func_69(156), 15, "", 0, 4f);
	func_68(&(Local_40[1 /*24*/]), 1, "Carwash2", func_69(157), 15, "", 0, 4f);
	func_66(&(Local_40[0 /*24*/]), -1f, 0f, 0f, 360f);
	func_66(&(Local_40[1 /*24*/]), 0f, -1f, 0f, 360f);
	func_65(&uLocal_89, 0);
	vLocal_107[0 /*3*/] = { 47.6f, -1392f, 29.4f };
	vLocal_107[1 /*3*/] = { -700f, -925.3f, 19f };
}

void func_65(var uParam0, int iParam1)
{
	*uParam0 = "CWASH_RIDEHLP";
	uParam0->f_1 = "";
	uParam0->f_3 = "CWASH_NOWAY";
	uParam0->f_4 = "CWASH_WANTED";
	uParam0->f_5 = "CWASH_CARBROKE";
	uParam0->f_6 = "CWASH_BLOCKED";
	uParam0->f_7 = "CWASH_WRONGWAY";
	uParam0->f_8 = "CWASH_UPSIDEDO";
	uParam0->f_16 = iParam1;
	if (!Global_76622)
	{
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (UNK_0xBA301E03A078FA59() || UNK_0x33A494591F2C1975())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
	{
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

void func_66(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_12 = { func_20(vParam1 * Vector(5f, 5f, 5f)) };
	uParam0->f_15 = func_67(fParam4, 0f, 360f);
}

float func_67(float fParam0, float fParam1, float fParam2)
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

void func_68(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6, char* sParam7, int iParam8, float fParam9)
{
	uParam0->f_5 = sParam2;
	uParam0->f_1 = { vParam3 };
	uParam0->f_4 = sParam7;
	uParam0->f_9 = iParam6;
	uParam0->f_7 = iParam8;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 0;
	*uParam0 = 1;
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 360f;
	if (iParam1 == 0)
	{
		uParam0->f_10 = 2.75f;
	}
	else
	{
		uParam0->f_10 = (2.75f * 2f);
	}
	if (fParam9 > 0f)
	{
		uParam0->f_10 = fParam9;
	}
}

Vector3 func_69(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return Global_31146[iVar0 /*23*/][0 /*3*/];
}

bool func_70(bool bParam0)
{
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return false;
	}
	return !UNK_0x437347B10A200C4B(bParam0, 0);
}

void func_71()
{
	func_72(&Local_40);
	func_24(&uLocal_89);
	UNK_0x10FAF14A60A0DBE1();
}

void func_72(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_73(iParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_73(var uParam0)
{
	*uParam0 = 0;
}

