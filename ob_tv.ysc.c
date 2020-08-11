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
	int iLocal_21 = 0;
	bool bLocal_22 = false;
	bool bLocal_23 = false;
	int iLocal_24 = 0;
	bool bLocal_25 = false;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	vector3 vLocal_31 = { 0f, 0f, 0f };
	bool bLocal_34 = false;
	int iLocal_35 = 0;
	bool bLocal_36 = false;
	bool bLocal_37 = false;
	bool bLocal_38 = false;
	bool bLocal_39 = false;
	bool bLocal_40 = false;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	char cLocal_46[64] = "";
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	char cLocal_62[64] = "";
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	vector3 vLocal_79 = { 0f, 0f, 0f };
	vector3 vLocal_82 = { 0f, 0f, 0f };
	bool bLocal_85 = false;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	vector3 vLocal_88 = { 0f, 0f, 0f };
	bool bScriptParam_0 = false;
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
	iLocal_21 = 3;
	bLocal_25 = true;
	iLocal_35 = -1;
	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_44 = -1;
	StringCopy(&cLocal_46, "NULL", 64);
	StringCopy(&cLocal_62, "NULL", 64);
	if (UNK_0x2EBF608FFE6CA406(2))
	{
		func_68();
	}
	if (UNK_0xC844350D5D58C99A(bScriptParam_0))
	{
		bLocal_37 = bScriptParam_0;
		bLocal_40 = bScriptParam_0;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_67();
		if (UNK_0xC844350D5D58C99A(bScriptParam_0))
		{
			if ((iLocal_43 != -1 && (func_66() && !func_65())) && !func_64(iLocal_43))
			{
				func_68();
			}
			if ((UNK_0x991B1F0980C62628() && UNK_0x19EC8D83154D7CC1() != 3) && UNK_0x00A15D69BCAA5267() == 3)
			{
				func_68();
			}
			if (func_63(13) || func_63(14))
			{
				func_68();
			}
			if (UNK_0x713261485D0F1B6C(bScriptParam_0, 0))
			{
				func_68();
			}
			if (UNK_0x63D2C15453688621(bScriptParam_0))
			{
				if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
				{
					func_62();
					if (UNK_0x7F6DC62EA9922664(bScriptParam_0) < 950)
					{
						func_68();
					}
					switch (iLocal_29)
					{
						case 0:
							func_59();
							if (iLocal_43 == 5)
							{
								if (func_58(18) == 1 && func_58(20) == 0)
								{
									uLocal_41 = UNK_0x57651D42225429CC(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (UNK_0xB39672D8C1F6BB48(uLocal_41))
									{
										UNK_0xCADC8175C61F28E5(uLocal_41, 9);
									}
									UNK_0x10FAF14A60A0DBE1();
								}
							}
							if (iLocal_43 == -1)
							{
								func_68();
							}
							else
							{
								func_57();
								UNK_0xE98E714BAA9A8D42("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								UNK_0x9CBC55A05A07FC47(0);
								Global_30828[iLocal_43 /*11*/].f_2 = 0;
								Global_30828[iLocal_43 /*11*/].f_6 = 1;
								Global_30828[iLocal_43 /*11*/] = UNK_0x09AC81E49EA267F7(false, 2);
								Global_30828[iLocal_43 /*11*/].f_1 = 0;
								Global_30828[iLocal_43 /*11*/].f_4 = 0;
								Global_30828[iLocal_43 /*11*/].f_7 = 0;
								Global_30828[iLocal_43 /*11*/].f_8 = 0;
								Global_30828[iLocal_43 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_55(&uLocal_26);
								func_53();
								func_52();
								SYSTEM::WAIT(0);
								iLocal_29 = 1;
							}
							break;
						case 1:
							if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
							{
								SYSTEM::WAIT(0);
							}
							else if (UNK_0xC57D0A75AFA332A3(bLocal_37) && UNK_0x10BA239D3B8FDC7F(bLocal_37, 90f))
							{
								if (func_44() || Global_30828[iLocal_43 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_43(&iLocal_42);
							}
							break;
						case 2:
							func_53();
							if (!func_64(iLocal_43))
							{
								func_43(&iLocal_42);
								if (func_42("TV_HLP1"))
								{
									UNK_0xA37A90C62806D848(1);
								}
							}
							if (UNK_0xC844350D5D58C99A(bLocal_37))
							{
								if (!UNK_0x4FC40AB0ECCE6E18(bLocal_37))
								{
									UNK_0x4A4806F9D471E491(bLocal_37, true, 0);
								}
							}
							if (UNK_0xC844350D5D58C99A(bLocal_39))
							{
								if (!UNK_0x4FC40AB0ECCE6E18(bLocal_39))
								{
									UNK_0x4A4806F9D471E491(bLocal_39, true, 0);
								}
							}
							if (UNK_0xC844350D5D58C99A(bLocal_38))
							{
								if (UNK_0x4FC40AB0ECCE6E18(bLocal_38))
								{
									UNK_0x4A4806F9D471E491(bLocal_38, false, 0);
								}
							}
							if (!UNK_0x7F8A39872A07D2CE(&cLocal_46, "NULL"))
							{
								UNK_0x837C600ECEE8ABA2(&cLocal_46, false);
							}
							UNK_0x187EF8E398A98A81(0);
							SYSTEM::WAIT(0);
							if (UNK_0xC844350D5D58C99A(bLocal_40))
							{
								UNK_0x2CD9DD012B079672(bLocal_40);
							}
							if (!func_64(iLocal_43))
							{
								if ((Global_30828[iLocal_43 /*11*/] == 3 || Global_30828[iLocal_43 /*11*/] == 2) || Global_30828[iLocal_43 /*11*/] == -1)
								{
									Global_30828[iLocal_43 /*11*/] = UNK_0x09AC81E49EA267F7(false, 2);
								}
								UNK_0x188BA9B758DB0D5E(Global_30828[iLocal_43 /*11*/]);
								UNK_0x2DF5312E3DA3CB39(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_30828[iLocal_43 /*11*/];
								iLocal_45 = Global_30828[iLocal_43 /*11*/].f_1;
								UNK_0xACBA63CD73292795(iLocal_44, func_41(iLocal_45), Global_30828[iLocal_43 /*11*/].f_9);
								UNK_0x188BA9B758DB0D5E(iLocal_44);
								if (Global_30828[iLocal_43 /*11*/].f_7)
								{
									Global_30828[iLocal_43 /*11*/].f_5 = 0;
									Global_30828[iLocal_43 /*11*/].f_7 = 0;
								}
							}
							Global_30828[iLocal_43 /*11*/].f_2 = 1;
							func_40(133, 1);
							func_40(131, 1);
							func_40(132, 1);
							iLocal_29 = 3;
							break;
						case 3:
							if (Global_30828[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_30828[iLocal_43 /*11*/].f_7 && func_64(iLocal_43))
							{
								Global_30828[iLocal_43 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_38(iLocal_43))
							{
								func_37();
								iLocal_29 = 5;
							}
							else
							{
								func_35();
								if (UNK_0x04639A879AC88653() == -1)
								{
									UNK_0x188BA9B758DB0D5E(Global_30828[iLocal_43 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						case 5:
							if (func_38(iLocal_43))
							{
								iLocal_29 = 2;
							}
							if (Global_30828[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						case 6:
							func_1();
							if (iLocal_42 != -1)
							{
								func_43(&iLocal_42);
							}
							Global_30828[iLocal_43 /*11*/].f_5 = 0;
							Global_30828[iLocal_43 /*11*/].f_4 = 0;
							Global_30828[iLocal_43 /*11*/].f_1 = 0;
							Global_30828[iLocal_43 /*11*/].f_2 = 0;
							Global_30828[iLocal_43 /*11*/].f_7 = 0;
							Global_30828[iLocal_43 /*11*/].f_8 = 0;
							Global_30828[iLocal_43 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
					}
				}
			}
		}
		else
		{
			func_68();
			UNK_0x10FAF14A60A0DBE1();
		}
	}
	func_68();
	UNK_0x10FAF14A60A0DBE1();
}

void func_1()
{
	if (iLocal_43 != -1)
	{
		Global_30828[iLocal_43 /*11*/] = UNK_0x04639A879AC88653();
	}
	fLocal_30 = UNK_0x16EA32E2BE4AB9D3();
	UNK_0x188BA9B758DB0D5E(-1);
	func_4();
	if (UNK_0x8A22C4C08282BF26(joaat("FAMILY5")) == 0)
	{
		if (!UNK_0x7F8A39872A07D2CE(&cLocal_46, "NULL"))
		{
			UNK_0x837C600ECEE8ABA2(&cLocal_46, true);
		}
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		UNK_0xA37A90C62806D848(1);
	}
	func_3();
	func_52();
	if (UNK_0xC844350D5D58C99A(bLocal_38))
	{
		if (!UNK_0x4FC40AB0ECCE6E18(bLocal_38))
		{
			UNK_0x4A4806F9D471E491(bLocal_38, true, 0);
		}
	}
	UNK_0xD251FFCFFF3A13CC(0);
	func_2();
}

void func_2()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (iLocal_87 == 1)
		{
			UNK_0xA68C4874B560B1C0();
			iLocal_87 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_35 == -1)
	{
		UNK_0x3039591AD3E735CE(iLocal_35);
		if (UNK_0xC844350D5D58C99A(bLocal_37))
		{
			if (UNK_0x134B62B726CEC8E6(bLocal_37) == joaat("V_ILEV_MM_SCREEN2") || UNK_0x134B62B726CEC8E6(bLocal_37) == joaat("V_ILEV_MM_SCRE_OFF"))
			{
				UNK_0x4A4806F9D471E491(bLocal_37, false, 0);
				if (UNK_0x134B62B726CEC8E6(bLocal_37) == joaat("V_ILEV_MM_SCRE_OFF"))
				{
					UNK_0xC1032CAC14DE468A(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				UNK_0xC1032CAC14DE468A(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(bLocal_39))
	{
		UNK_0x4A4806F9D471E491(bLocal_39, false, 0);
	}
}

void func_4()
{
	if (bLocal_85)
	{
		UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		if (UNK_0xFBB4F23D534EB790(iLocal_78))
		{
			UNK_0xE3BB8E05FCEB3FBE(iLocal_78, false);
		}
		UNK_0x9A8DDC7C522F5BF5(iLocal_78, 0);
		UNK_0x2FB9A57162E54BAB(0f);
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
			UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
			UNK_0xDBE4EC9C88839074(UNK_0x16F2683693E537C9(), vLocal_31, true, 0, 2);
			if (!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
			{
				if (bLocal_36 == 1)
				{
					bLocal_36 = false;
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
				}
			}
			UNK_0x4A4806F9D471E491(UNK_0x16F2683693E537C9(), true, 0);
		}
		if (!UNK_0x7F8A39872A07D2CE(&cLocal_62, "NULL"))
		{
			if (UNK_0x562F77A7F33D2E46(&cLocal_62))
			{
				UNK_0x8910D3D58E0132B8(&cLocal_62);
			}
		}
		if (UNK_0xC844350D5D58C99A(bLocal_39))
		{
			UNK_0x4A4806F9D471E491(bLocal_39, true, 0);
		}
		func_5(0, 1, 0, 0, 0, 0);
		UNK_0xD251FFCFFF3A13CC(0);
		bLocal_85 = false;
	}
}

void func_5(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_14(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_13())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_12(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_14(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_12(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_10(UNK_0xD803B885F5E47A62())) && !func_7(UNK_0xD803B885F5E47A62(), 0)) && !func_6()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_10(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_6()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_7(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_8(-1, 0) == 8;
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

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

int func_9()
{
	return Global_1312745;
}

bool func_10(bool bParam0)
{
	if (func_7(bParam0, 0))
	{
		return true;
	}
	if (func_11())
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

bool func_11()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_12(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_13()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_14(int iParam0)
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

bool func_15()
{
	if (!func_64(iLocal_43))
	{
		if (((((((func_31(&uLocal_26) >= 1f && UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_88, 1f, 1f, 1.5f, false, true, 0)) && UNK_0x4D570FEF9D230CE7(bLocal_37) == UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9())) && !func_30(8, -1)) && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0)) && UNK_0xBFDF2644D7CBD7C5(UNK_0x16F2683693E537C9(), vLocal_31, 90f)) && !UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) && !UNK_0x991B1F0980C62628())
		{
			if (iLocal_42 == -1)
			{
				func_29();
				func_28(&iLocal_42, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_26(iLocal_42, 1))
			{
				func_43(&iLocal_42);
				func_55(&uLocal_26);
				Global_30828[iLocal_43 /*11*/].f_7 = 0;
				if (UNK_0x64F604CF561734A9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "MICHAEL_SOFA_TV_ON_MASTER", false, 1);
				}
				return true;
			}
			func_16();
		}
		else
		{
			if (func_42("TV_HLP5"))
			{
				UNK_0xA37A90C62806D848(1);
			}
			func_2();
			func_43(&iLocal_42);
		}
	}
	return false;
}

void func_16()
{
	if (bLocal_85 == 0)
	{
		UNK_0x558EC149EB2BC0A2(2, 222);
		if (UNK_0xBFC0798A6E3417F9(2, 222))
		{
			func_43(&iLocal_42);
			func_28(&iLocal_42, 3, "TV_HLP6", 0, 0, 0, 0);
			func_25();
		}
	}
	else
	{
		UNK_0x38C3A68D7861DCFD(2, 200, 1);
		if (UNK_0x4FC40AB0ECCE6E18(UNK_0x16F2683693E537C9()))
		{
			UNK_0x4A4806F9D471E491(UNK_0x16F2683693E537C9(), false, 0);
		}
		if (bLocal_36)
		{
			if (UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
			{
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
			}
		}
		UNK_0x3FC8DBCC154CA56B();
		UNK_0x47C6DEE1E7231AC3(UNK_0x16F2683693E537C9());
		func_23(1, 1);
		UNK_0x558EC149EB2BC0A2(2, 222);
		func_17(0);
		if (UNK_0xBFC0798A6E3417F9(2, 222) || (UNK_0x91E3F625EF57450D(2) && UNK_0x9A01369A10646AFE(2, 200)))
		{
			func_43(&iLocal_42);
			func_4();
		}
	}
}

void func_17(int iParam0)
{
	if (func_22())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_21(0))
		{
			func_18(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_18(int iParam0)
{
	if (func_22())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_20())
		{
			func_19(1, 1);
		}
		else
		{
			func_19(0, 0);
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
	if (!func_13())
	{
		Global_19486.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_21(0))
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

bool func_20()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_21(int iParam0)
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

bool func_22()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_23(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = 64;
	if (bParam0)
	{
		if (func_24(0))
		{
			if (!bLocal_22)
			{
				if (UNK_0x64F604CF561734A9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", false, 1);
				}
				if (UNK_0x04639A879AC88653() == 0)
				{
					UNK_0x188BA9B758DB0D5E(1);
				}
				else
				{
					UNK_0x188BA9B758DB0D5E(0);
				}
				bLocal_22 = true;
			}
		}
		else if (bLocal_22)
		{
			bLocal_22 = false;
		}
	}
	if (bParam1)
	{
		iVar1 = (UNK_0x0DED1C1B8250FA57(2, 219) - 127);
		if (!bLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = UNK_0x16EA32E2BE4AB9D3();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				UNK_0x2DF5312E3DA3CB39(fVar2);
				iLocal_24 = UNK_0x1C0640BA9A7327B3();
				bLocal_23 = true;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = UNK_0x16EA32E2BE4AB9D3();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				UNK_0x2DF5312E3DA3CB39(fVar2);
				iLocal_24 = UNK_0x1C0640BA9A7327B3();
				bLocal_23 = true;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				bLocal_25 = true;
			}
			else if (bLocal_25)
			{
				if (UNK_0x64F604CF561734A9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						UNK_0x4D7F4CC43D4D0DE3(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", false, 1);
					}
					bLocal_25 = false;
				}
			}
		}
		if (bLocal_23)
		{
			if (iVar1 == 0 || UNK_0x1C0640BA9A7327B3() > iLocal_24 + 24)
			{
				bLocal_23 = false;
			}
		}
	}
}

bool func_24(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 64;
	iVar1 = (UNK_0x0DED1C1B8250FA57(2, 218) - 127);
	if (bParam0 || SYSTEM::TIMERA() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			SYSTEM::SETTIMERA(0);
			return true;
		}
	}
	return false;
}

void func_25()
{
	bool bVar0;

	bVar0 = 50f;
	if (bLocal_85 == 0)
	{
		iLocal_78 = UNK_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", vLocal_79, vLocal_82, bVar0, 0, 2);
		UNK_0x1EC4A41E2AED1EE1(iLocal_78, 100f);
		UNK_0xE3BB8E05FCEB3FBE(iLocal_78, true);
		UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
		if (UNK_0xC844350D5D58C99A(bLocal_39))
		{
			UNK_0x4A4806F9D471E491(bLocal_39, false, 0);
		}
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), true);
			UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
			if (UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
			{
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
				bLocal_36 = true;
			}
			UNK_0xDBE4EC9C88839074(UNK_0x16F2683693E537C9(), vLocal_31, -1, 0, 2);
			UNK_0x4A4806F9D471E491(UNK_0x16F2683693E537C9(), false, 0);
		}
		if (!UNK_0x7F8A39872A07D2CE(&cLocal_62, "NULL"))
		{
			if (!UNK_0x562F77A7F33D2E46(&cLocal_62))
			{
				UNK_0x8BC9595FD2792B5D(&cLocal_62);
			}
		}
		func_5(1, 1, 0, 0, 0, 0);
		UNK_0xD251FFCFFF3A13CC(1);
		bLocal_85 = true;
	}
}

bool func_26(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_27(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!UNK_0xE1DBBD6CE209517C(UNK_0xA30EC016B12C03E4()))
	{
		return false;
	}
	if (func_21(0))
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

int func_27(int iParam0)
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

void func_28(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;

	if (UNK_0x8A22C4C08282BF26(joaat("CONTEXT_CONTROLLER")) < 1)
	{
	}
	if (UNK_0x991B1F0980C62628())
	{
		if (!*iParam0 == -1)
		{
			func_43(iParam0);
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

void func_29()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (iLocal_87 == 0)
		{
			UNK_0x6787351639998696("TV_Controls");
			iLocal_87 = 1;
		}
	}
}

bool func_30(bool bParam0, int iParam1)
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

float func_31(var uParam0)
{
	if (func_34(uParam0))
	{
		if (func_33(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_32(UNK_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_32(bool bParam0)
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

bool func_33(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_34(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, true);
}

void func_35()
{
	float fVar0;

	fVar0 = 1f;
	func_36(&fVar0);
	UNK_0x3039591AD3E735CE(iLocal_35);
	UNK_0xD9ACBBA59FD5A09E(4);
	UNK_0x5DD950F92F816F03(1);
	UNK_0xAD77DDB686D4F8D3(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	UNK_0x3039591AD3E735CE(UNK_0x1D14FD94FCD601B4());
}

void func_36(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = UNK_0x33D480CCE15C991A(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_37()
{
	Global_30828[iLocal_43 /*11*/].f_7 = 0;
	Global_30828[iLocal_43 /*11*/] = UNK_0x04639A879AC88653();
	fLocal_30 = UNK_0x16EA32E2BE4AB9D3();
	if (UNK_0x562F77A7F33D2E46(&cLocal_62))
	{
		UNK_0x8910D3D58E0132B8(&cLocal_62);
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		UNK_0xA37A90C62806D848(1);
	}
	func_43(&iLocal_42);
	UNK_0x188BA9B758DB0D5E(-1);
	SYSTEM::WAIT(0);
	func_3();
	func_52();
}

bool func_38(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_39(UNK_0xD803B885F5E47A62()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return true;
		case 4:
			if (vVar0.z < 74f)
			{
				return true;
			}
			break;
		case 5:
			if (vVar0.z > 75f)
			{
				return true;
			}
			break;
	}
	return false;
}

Vector3 func_39(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

void func_40(int iParam0, int iParam1)
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

char* func_41(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

bool func_42(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_43(int iParam0)
{
	int iVar0;

	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_27(*iParam0);
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

int func_44()
{
	if (func_31(&uLocal_26) < 1f)
	{
		func_43(&iLocal_42);
		return 0;
	}
	if ((!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_88, 1f, 1f, 1.5f, false, true, 0) || !UNK_0xBFDF2644D7CBD7C5(UNK_0x16F2683693E537C9(), vLocal_31, 90f)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()))
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (UNK_0x4D570FEF9D230CE7(bLocal_37) != UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()))
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (func_30(8, -1))
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (Global_95672)
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (Global_30828[iLocal_43 /*11*/].f_8)
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (iLocal_42 == -1)
	{
		func_28(&iLocal_42, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_26(iLocal_42, 1))
	{
		func_43(&iLocal_42);
		func_55(&uLocal_26);
		Global_30828[iLocal_43 /*11*/].f_7 = 1;
		if (UNK_0x64F604CF561734A9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			UNK_0x4D7F4CC43D4D0DE3(-1, "MICHAEL_SOFA_TV_ON_MASTER", false, 1);
		}
		func_45(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_45(int iParam0, int iParam1, int iParam2)
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
		func_51((891 + iParam0), 1, -1, 1);
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
		func_46();
	}
}

void func_46()
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
		func_50(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_49() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_47();
				}
			}
		}
	}
}

int func_47()
{
	if (func_48(0))
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

bool func_48(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

int func_49()
{
	return Global_30768;
}

int func_50(int iParam0, bool bParam1)
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

int func_51(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_9();
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

void func_52()
{
	SYSTEM::WAIT(0);
	if (UNK_0xE6CD5C6925050049("tvscreen"))
	{
		UNK_0x683413D9B7010687("tvscreen");
		iLocal_35 = -1;
		UNK_0x3039591AD3E735CE(UNK_0x1D14FD94FCD601B4());
	}
}

void func_53()
{
	bool bVar0;

	if (iLocal_43 == 4)
	{
		func_54();
	}
	if (UNK_0xE6CD5C6925050049("tvscreen"))
	{
		UNK_0x683413D9B7010687("tvscreen");
	}
	SYSTEM::WAIT(0);
	if (!UNK_0xC844350D5D58C99A(bLocal_37))
	{
		func_68();
	}
	bVar0 = UNK_0x134B62B726CEC8E6(bLocal_37);
	UNK_0x268029E44B2B3E36("tvscreen", 0);
	UNK_0x064E7408AD6E15E5(bVar0);
	SYSTEM::WAIT(0);
	if (iLocal_43 != 4)
	{
		while (!UNK_0x55CB69E8157C5B54(bVar0))
		{
			if (!UNK_0xC844350D5D58C99A(bLocal_37))
			{
				func_68();
			}
			if (!UNK_0x63D2C15453688621(bLocal_37))
			{
				func_68();
			}
			if (!UNK_0xE6CD5C6925050049("tvscreen"))
			{
				UNK_0x268029E44B2B3E36("tvscreen", 0);
			}
			if (!UNK_0x55CB69E8157C5B54(bVar0))
			{
				UNK_0x064E7408AD6E15E5(bVar0);
			}
			SYSTEM::WAIT(0);
		}
	}
	iLocal_35 = UNK_0x3FF702268B97B673("tvscreen");
	func_3();
}

void func_54()
{
	if (UNK_0xC844350D5D58C99A(bLocal_37))
	{
		if (UNK_0x134B62B726CEC8E6(bLocal_37) == joaat("V_ILEV_MM_SCREEN2"))
		{
			return;
		}
	}
	bLocal_37 = false;
	bLocal_37 = UNK_0xB0BE3DFBBB59A620(joaat("V_ILEV_MM_SCREEN2"), vLocal_31, true, true, false);
	UNK_0xD8F6A53F4799FAFE(bLocal_37, bLocal_34);
	UNK_0x1E9649458B15960F(bLocal_37, true);
	UNK_0x4A4806F9D471E491(bLocal_37, false, 0);
	bLocal_39 = false;
	bLocal_39 = UNK_0xB0BE3DFBBB59A620(joaat("V_ILEV_MM_SCREEN2_VL"), vLocal_31, true, true, false);
	UNK_0xD8F6A53F4799FAFE(bLocal_39, bLocal_34);
	UNK_0x1E9649458B15960F(bLocal_39, true);
	UNK_0x4A4806F9D471E491(bLocal_39, false, 0);
}

void func_55(bool bParam0)
{
	func_56(bParam0, 0f);
}

void func_56(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_32(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

void func_57()
{
}

bool func_58(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

void func_59()
{
	vLocal_31 = { UNK_0x68F4C0EC296D3901(bLocal_37, true) };
	bLocal_34 = UNK_0xD9522BA9E27E1349(bLocal_37);
	func_61();
	if (UNK_0x134B62B726CEC8E6(bLocal_37) == joaat("PROP_TV_03"))
	{
		if (SYSTEM::VDIST(vLocal_31, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_43 = 0;
			vLocal_79 = { -9.8135f, -1440.913f, 31.3654f };
			vLocal_82 = { 0f, 0f, -134.3211f };
			vLocal_88 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_46, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (UNK_0x134B62B726CEC8E6(bLocal_37) == joaat("PROP_TREV_TV_01"))
	{
		if (SYSTEM::VDIST(vLocal_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_43 = 2;
			vLocal_79 = { 1978.23f, 3819.65f, 34.2724f };
			vLocal_82 = { 0f, 0f, -105.15f };
			vLocal_88 = { 1978.33f, 3819.717f, 32.4501f };
			func_60();
			StringCopy(&cLocal_46, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (UNK_0x134B62B726CEC8E6(bLocal_37) == joaat("PROP_TV_FLAT_01"))
	{
		if (SYSTEM::VDIST(vLocal_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_43 = 1;
			vLocal_79 = { 2.5724f, 527.9989f, 176.1619f };
			vLocal_82 = { 0f, 0f, -29.9488f };
			vLocal_88 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_46, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (UNK_0x134B62B726CEC8E6(bLocal_37) == joaat("PROP_TV_FLAT_02"))
	{
		if (SYSTEM::VDIST(vLocal_31, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_43 = 3;
			vLocal_79 = { -1160.502f, -1520.76f, 10.7393f };
			vLocal_82 = { 0f, 0f, 60.061f };
			vLocal_88 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_46, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_62, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (UNK_0x134B62B726CEC8E6(bLocal_37) == joaat("V_ILEV_MM_SCREEN2") || UNK_0x134B62B726CEC8E6(bLocal_37) == joaat("V_ILEV_MM_SCRE_OFF"))
	{
		if (SYSTEM::VDIST(vLocal_31, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_43 = 4;
			vLocal_79 = { -802.8972f, 172.537f, 74.5801f };
			vLocal_82 = { 0f, 0f, -69.0273f };
			vLocal_88 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (UNK_0x134B62B726CEC8E6(bLocal_37) == joaat("DES_TVSMASH_START"))
	{
		if (SYSTEM::VDIST(vLocal_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_43 = 5;
			vLocal_79 = { -808.3051f, 171.2623f, 77.2822f };
			vLocal_82 = { 1.8886f, 0f, 110.9232f };
			vLocal_88 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_60()
{
	bLocal_38 = UNK_0xB0BE3DFBBB59A620(joaat("PROP_TT_SCREENSTATIC"), vLocal_31, true, true, false);
	UNK_0xD8F6A53F4799FAFE(bLocal_38, bLocal_34);
	UNK_0x4A4806F9D471E491(bLocal_38, true, 0);
	UNK_0x1E9649458B15960F(bLocal_38, true);
}

void func_61()
{
	UNK_0xACBA63CD73292795(0, func_41(1), 0);
	if (func_58(22))
	{
		UNK_0xACBA63CD73292795(1, func_41(12), 0);
	}
	else
	{
		UNK_0xACBA63CD73292795(1, func_41(2), 0);
	}
}

void func_62()
{
	if (iLocal_43 == -1)
	{
		return;
	}
	if (Global_30828[iLocal_43 /*11*/].f_10 == 0)
	{
		if (iLocal_86 == 1)
		{
			if (UNK_0xC844350D5D58C99A(bLocal_40))
			{
				UNK_0xE121AE1BBF90E186(bLocal_40, false);
			}
			if (UNK_0xC844350D5D58C99A(bLocal_37))
			{
				UNK_0xE121AE1BBF90E186(bLocal_37, false);
			}
			if (UNK_0xC844350D5D58C99A(bLocal_39))
			{
				UNK_0xE121AE1BBF90E186(bLocal_39, false);
			}
			if (UNK_0xC844350D5D58C99A(bLocal_38))
			{
				UNK_0xE121AE1BBF90E186(bLocal_38, false);
			}
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_40))
		{
			UNK_0xE121AE1BBF90E186(bLocal_40, true);
		}
		if (UNK_0xC844350D5D58C99A(bLocal_37))
		{
			UNK_0xE121AE1BBF90E186(bLocal_37, true);
		}
		if (UNK_0xC844350D5D58C99A(bLocal_39))
		{
			UNK_0xE121AE1BBF90E186(bLocal_39, true);
		}
		if (UNK_0xC844350D5D58C99A(bLocal_38))
		{
			UNK_0xE121AE1BBF90E186(bLocal_38, true);
		}
		iLocal_86 = 1;
	}
}

bool func_63(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_64(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_30828[iParam0 /*11*/].f_5)
		{
			return true;
		}
	}
	return false;
}

bool func_65()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (UNK_0xBA19B87E031E2390() == 1f)
		{
			return true;
		}
	}
	return false;
}

bool func_66()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

void func_67()
{
}

void func_68()
{
	if (iLocal_43 == -1)
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	func_43(&iLocal_42);
	if (iLocal_43 != -1)
	{
		func_1();
		Global_30828[iLocal_43 /*11*/].f_6 = 0;
		Global_30828[iLocal_43 /*11*/].f_7 = 0;
		Global_30828[iLocal_43 /*11*/].f_8 = 0;
		Global_30828[iLocal_43 /*11*/].f_4 = 0;
		Global_30828[iLocal_43 /*11*/].f_5 = 0;
		Global_30828[iLocal_43 /*11*/].f_2 = 0;
		Global_30828[iLocal_43 /*11*/] = -1;
		Global_30828[iLocal_43 /*11*/].f_1 = 0;
		Global_30828[iLocal_43 /*11*/].f_10 = 0;
	}
	if ((func_42("TV_HLP1") || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		UNK_0xA37A90C62806D848(1);
	}
	SYSTEM::WAIT(0);
	func_69();
	if (UNK_0x562F77A7F33D2E46(&cLocal_62))
	{
		UNK_0x8910D3D58E0132B8(&cLocal_62);
	}
	UNK_0xB3EE19CC0D64759A();
	func_2();
	UNK_0x10FAF14A60A0DBE1();
}

void func_69()
{
	func_52();
	if (UNK_0xC844350D5D58C99A(bLocal_37))
	{
		if (UNK_0x134B62B726CEC8E6(bLocal_37) == joaat("V_ILEV_MM_SCREEN2"))
		{
			UNK_0xF690C84DADBB3551(&bLocal_37);
			UNK_0x71199B01895C6202(joaat("V_ILEV_MM_SCREEN2"));
		}
	}
	if (UNK_0xC844350D5D58C99A(bLocal_39))
	{
		UNK_0xF690C84DADBB3551(&bLocal_39);
		UNK_0x71199B01895C6202(joaat("V_ILEV_MM_SCREEN2_VL"));
	}
	if (UNK_0xC844350D5D58C99A(bLocal_38))
	{
		UNK_0xF690C84DADBB3551(&bLocal_38);
		UNK_0x71199B01895C6202(joaat("PROP_TT_SCREENSTATIC"));
	}
}

