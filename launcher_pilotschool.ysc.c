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
	vector3 vLocal_45 = { 0f, 0f, 0f };
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	char cLocal_53[64] = "";
	struct<16> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_85 = false;
	var uLocal_86 = 0;
	vector3 vLocal_87 = { 0f, 0f, 0f };
	vector3 vLocal_90 = { 0f, 0f, 0f };
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = false;
	int iLocal_100 = 0;
	bool bLocal_101 = false;
	float fLocal_102 = 0f;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	float fLocal_110 = 0f;
	vector3 vLocal_111 = { 0f, 0f, 0f };
	vector3 vLocal_114 = { 0f, 0f, 0f };
	bool bLocal_117 = false;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	bool bLocal_123 = false;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
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
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

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
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_96 = -1;
	iLocal_97 = 2050;
	iLocal_98 = -1;
	bLocal_99 = -1;
	bLocal_101 = "CC_SUBSTR";
	fLocal_102 = 125f;
	iLocal_103 = 1;
	iLocal_105 = 263;
	bLocal_117 = 4f;
	vLocal_90 = { ScriptParam_0.f_1[0 /*3*/] };
	vLocal_90 = { vLocal_90 };
	uLocal_86 = uLocal_86;
	Local_69 = { Local_69 };
	bVar0 = false;
	if (UNK_0x2EBF608FFE6CA406(82))
	{
		func_90(1);
	}
	bLocal_85 = UNK_0x9539D44F3E4492F6(UNK_0xD803B885F5E47A62());
	iLocal_95 = 0;
	func_88(&Global_110289, 0);
	func_87();
	if (func_86(uLocal_94, 1))
	{
		iLocal_100 = 10;
	}
	else
	{
		iLocal_100 = 9;
	}
	while (!Global_37199)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_86(uLocal_94, 8))
	{
		if (!func_84(iLocal_100))
		{
			if (func_83(0, bLocal_99))
			{
				func_90(0);
			}
			else
			{
				func_90(1);
			}
		}
	}
	if (bLocal_99 != -1)
	{
		if (!func_83(0, bLocal_99))
		{
			func_90(1);
		}
	}
	if (func_86(uLocal_94, 8388608))
	{
		func_90(1);
	}
	if (func_86(uLocal_94, 524288) && (func_82() && !func_81()))
	{
		func_90(1);
	}
	if (UNK_0x8A22C4C08282BF26(UNK_0x7CF4675EC2B8ED0B()) > 1 && !func_86(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_80(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_79(10);
	}
	while (true)
	{
		if (!func_86(uLocal_94, 268435456))
		{
			fVar1 = 0f;
			if (UNK_0xE82754C349C7B581(ScriptParam_0.f_1[0 /*3*/], &fVar1, 0, 0))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_0.f_1[0 /*3*/].f_2 = fVar1;
					func_78(&uLocal_94, 268435456);
				}
			}
		}
		bLocal_85 = UNK_0x9539D44F3E4492F6(UNK_0xD803B885F5E47A62());
		if (func_86(uLocal_94, 1048576))
		{
			if (UNK_0x437347B10A200C4B(bLocal_85, 0))
			{
				func_90(1);
			}
		}
		if (UNK_0xC844350D5D58C99A(bLocal_85) && !UNK_0x437347B10A200C4B(bLocal_85, 0))
		{
			vLocal_87 = { UNK_0x68F4C0EC296D3901(bLocal_85, true) };
			fLocal_93 = SYSTEM::VDIST2(vLocal_87, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			vLocal_111 = { vLocal_87 };
			vLocal_114 = { ScriptParam_0.f_1[0 /*3*/] };
			vLocal_111.f_2 = 0f;
			vLocal_114.f_2 = 0f;
			fLocal_110 = SYSTEM::VDIST2(vLocal_111, vLocal_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_84(iLocal_100) || (func_86(uLocal_94, 16) && !func_86(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_77();
						func_79(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_80(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_79(10);
						}
						if ((vLocal_87.z - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				case 1:
					if (func_76() && fLocal_93 > ((bLocal_117 * 1.5f) * (bLocal_117 * 1.5f)))
					{
						iLocal_103 = iLocal_103;
						func_79(3);
					}
					else
					{
						func_77();
					}
					break;
				case 3:
					if (UNK_0x8FE4F98FD4BE2689())
					{
						func_90(1);
						return;
					}
					if (!func_84(iLocal_100))
					{
						if (!func_86(uLocal_94, 8))
						{
							bVar2 = true;
							if (UNK_0x7F8A39872A07D2CE(&(Global_98744.f_3), &Local_69))
							{
								Local_69 = { cLocal_53 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_90(0);
							}
							else
							{
								if (!func_86(uLocal_94, 4))
								{
									func_75();
									func_78(&uLocal_94, 4);
								}
								if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_98778)
								{
									if (iLocal_105 != 263)
									{
										if (func_74(6) && !func_73(iLocal_105))
										{
										}
										else
										{
											func_80(iLocal_105, 1, 0);
											iLocal_105 = 263;
										}
									}
									func_79(10);
								}
								else
								{
									Local_69 = { cLocal_53 };
									bVar3 = !func_86(uLocal_94, 64);
									func_88(&uLocal_94, 128);
									if (!func_72(3) && !Global_98778)
									{
										if (func_86(uLocal_94, 2097152))
										{
											if ((!func_86(uLocal_94, 1) || !UNK_0xC844350D5D58C99A(func_71())) && !Global_98778)
											{
												func_79(10);
											}
											else
											{
												if (func_86(uLocal_94, 524288) && (func_82() && !func_81()))
												{
													func_90(1);
												}
												if (func_70())
												{
													func_90(1);
												}
												if ((!func_56(6) || Global_110685) || func_55())
												{
													bVar3 = false;
												}
												if (func_86(uLocal_94, 1))
												{
													if (!func_54())
													{
														func_52(&uLocal_94, 128);
														bVar3 = false;
													}
												}
												if (func_51(1))
												{
													bVar3 = false;
												}
												if (Global_76622)
												{
													bVar3 = false;
												}
												if (func_50())
												{
													bVar3 = false;
												}
												if (UNK_0x991B1F0980C62628())
												{
													bVar3 = false;
												}
												if (func_49() || func_48(8, -1))
												{
													bVar3 = false;
												}
												if (!UNK_0xD79EDC28CA84B527(UNK_0xD803B885F5E47A62()))
												{
													bVar3 = false;
												}
												if (!UNK_0x04B2EAD6D5301B36(UNK_0xD803B885F5E47A62()))
												{
													bVar3 = false;
												}
												if (func_47(0) || func_46())
												{
													bVar3 = false;
												}
												if (bVar3)
												{
													if (!UNK_0x5A91F08DF773C39D(bLocal_85, ScriptParam_0.f_1[0 /*3*/], bLocal_117, bLocal_117, 2f, false, true, iLocal_103))
													{
														bVar3 = false;
													}
													if (!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
													{
														bVar3 = false;
													}
													if (bVar3)
													{
														UNK_0x558EC149EB2BC0A2(0, 51);
														if (func_45(uLocal_86))
														{
															if (iLocal_96 == -1)
															{
																func_44(&iLocal_96, 4, bLocal_101, 0, 0, 0, 0);
																func_52(&uLocal_94, 2048);
															}
															else if (!func_86(uLocal_94, 2048) || !UNK_0xFEBC1E4EC9E001F0())
															{
																func_43(&iLocal_96);
																func_88(&uLocal_94, 2048);
															}
															if (func_41(iLocal_96, 1))
															{
																bLocal_101 = bLocal_101;
																func_43(&iLocal_96);
																func_88(&uLocal_94, 2048);
																UNK_0x92DCE5C81176D2B4(&Local_69);
																UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 56);
																func_79(5);
															}
														}
														else
														{
															bLocal_101 = bLocal_101;
															func_43(&iLocal_96);
															func_88(&uLocal_94, 2048);
															UNK_0x92DCE5C81176D2B4(&Local_69);
															UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 56);
															func_79(5);
														}
													}
												}
												if (!bVar3)
												{
													if (iLocal_96 != -1)
													{
														func_43(&iLocal_96);
														func_88(&uLocal_94, 2048);
														UNK_0xA37A90C62806D848(0);
													}
												}
												func_40();
												Jump @2666; //curOff = 1684
												UNK_0x558EC149EB2BC0A2(0, 51);
												if (UNK_0x1FBF08B001C4788A(&Local_69))
												{
													if (iLocal_96 != -1)
													{
														func_43(&iLocal_96);
													}
													iVar4 = 2;
													bVar0 = false;
													if (func_86(uLocal_94, 1))
													{
														if (func_74(6) || func_74(7))
														{
															iVar4 = 1;
															bVar0 = true;
														}
													}
													if (iVar4 != 1)
													{
														iVar4 = func_37(&iLocal_98, 6, iLocal_100, 0, 0);
													}
													if (iVar4 == 1)
													{
														if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
														{
															UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
														}
														func_36();
														if (Global_42596)
														{
															func_27(UNK_0x16F2683693E537C9());
														}
														UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, 56);
														iLocal_52 = func_26();
														func_88(&uLocal_94, 4);
														func_25();
														func_52(&uLocal_94, 2);
														func_79(6);
														func_21(&uLocal_107);
														if (bLocal_99 != -1)
														{
															func_20(bLocal_99);
															func_17(func_19(bLocal_99), 0, 0);
														}
													}
													else if (iVar4 == 2)
													{
														func_16();
													}
													else if (iVar4 == 0)
													{
														func_79(10);
													}
												}
												else
												{
													func_16();
												}
												Jump @2666; //curOff = 1923
												if (!func_86(uLocal_94, 256))
												{
													if (UNK_0xD0BB2359EC70FC37() || UNK_0x0F1CCD77290EE12F())
													{
														UNK_0x558EC149EB2BC0A2(0, 51);
													}
													else if (UNK_0x757EF87A33649210())
													{
														func_52(&uLocal_94, 256);
													}
												}
												if (func_86(Global_110289, 262144))
												{
													func_88(&Global_110289, 262144);
													func_15();
												}
												if (func_86(uLocal_94, 2097152))
												{
													if (!func_72(3) && !UNK_0x1727A44C562FBED2(iLocal_52))
													{
														func_79(10);
													}
												}
												if (!UNK_0x1727A44C562FBED2(iLocal_52))
												{
													UNK_0x11E0F00830F70E15(SYSTEM::ROUND((func_11(&uLocal_107) * 1000f)), bLocal_99, 0);
													func_10(&uLocal_107);
													func_88(&uLocal_94, 256);
													func_9();
													if (bVar0)
													{
														func_88(&uLocal_94, 2);
													}
													else if (func_86(uLocal_94, 2))
													{
														if (func_86(Global_110289, 0))
														{
															func_8(&iLocal_98);
															iLocal_98 = -1;
															func_88(&uLocal_94, 2);
														}
														else
														{
															func_8(&iLocal_98);
															iLocal_98 = -1;
															func_88(&uLocal_94, 2);
														}
													}
													func_79(0);
													if (bLocal_99 != -1)
													{
														if (func_86(Global_110289, 0))
														{
															UNK_0x353729B0A07DC11A(func_19(bLocal_99), 0, Global_98781, 0);
															func_7(func_19(bLocal_99), 0, Global_98781, 1, 0);
														}
														else
														{
															UNK_0x353729B0A07DC11A(func_19(bLocal_99), 0, Global_98781, 0);
															func_7(func_19(bLocal_99), 0, Global_98781, 0, 0);
														}
													}
													func_4();
													func_88(&Global_110289, 0);
													if (func_86(uLocal_94, 16777216))
													{
														func_90(1);
													}
													if (bLocal_99 != -1)
													{
														if (Global_111638.f_9080)
														{
															if (!func_83(0, bLocal_99))
															{
																func_90(1);
															}
														}
													}
												}
												func_3();
												Jump @2666; //curOff = 2338
												func_79(0);
												Jump @2666; //curOff = 2346
												func_90(1);
												Jump @2666; //curOff = 2354
												if (fLocal_110 > (fLocal_102 * fLocal_102))
												{
													if (iLocal_105 != 263)
													{
														func_80(iLocal_105, 1, 0);
														iLocal_105 = 263;
													}
													func_79(10);
												}
												Jump @2666; //curOff = 2395
												func_2();
												if (iLocal_105 != 263)
												{
													func_80(iLocal_105, 0, 0);
												}
												if (iLocal_96 != -1)
												{
													func_43(&iLocal_96);
												}
												if (!UNK_0xEA6BC48857E0AC4C(bLocal_101))
												{
													if (func_1(bLocal_101))
													{
														UNK_0xA37A90C62806D848(1);
													}
												}
												func_79(4);
												Jump @2666; //curOff = 2459
												if ((iLocal_104 % 150) == 0)
												{
													if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
													{
														if (iLocal_106 == 2)
														{
															if (iLocal_106 == 2)
															{
																if (func_84(iLocal_100) && func_83(0, bLocal_99))
																{
																	func_87();
																	if (iLocal_105 != 263)
																	{
																		func_80(iLocal_105, 1, 0);
																	}
																	func_79(0);
																}
															}
														}
														else if (iLocal_106 == 0)
														{
															if (fLocal_110 > (fLocal_102 * fLocal_102))
															{
																if (iLocal_105 != 263)
																{
																	func_80(iLocal_105, 1, 0);
																	iLocal_105 = 263;
																}
																func_79(10);
															}
														}
														else if (iLocal_106 == 1)
														{
															if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
															{
																func_87();
																if (iLocal_105 != 263)
																{
																	func_80(iLocal_105, 1, 0);
																}
																func_79(0);
															}
														}
													}
													else
													{
														func_80(iLocal_105, 1, 0);
													}
												}
												else
												{
													iLocal_104++;
												}
											}
											SYSTEM::WAIT(0);
										}
									}
								}
							}
						}
					}
					default:
						break;
			}
		}
	}
}

bool func_1(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_2()
{
}

void func_3()
{
}

void func_4()
{
	func_5(&uLocal_122);
}

void func_5(var uParam0)
{
	bool bVar0;

	bVar0 = *uParam0;
	if (UNK_0xC844350D5D58C99A(bVar0))
	{
		if (!func_6(bVar0))
		{
			UNK_0x20641932E5104B25(bVar0, true, 0);
			UNK_0x4A4806F9D471E491(bVar0, true, 0);
			UNK_0x1E9649458B15960F(bVar0, false);
		}
	}
}

bool func_6(bool bParam0)
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

void func_7(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (UNK_0xEA6BC48857E0AC4C(&Global_95814))
	{
		return;
	}
	if (UNK_0xF166B8FB0B765CF2(bParam0, &Global_95814, 0, -1) != 0)
	{
		return;
	}
	UNK_0x73B08BBDEAC9B885(bParam0, iParam1, iParam2, iParam3, iParam4, Global_92921);
	StringCopy(&Global_95814, "", 64);
}

void func_8(int iParam0)
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

void func_9()
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

void func_10(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_11(var uParam0)
{
	if (func_14(uParam0))
	{
		if (func_13(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_12(UNK_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_12(bool bParam0)
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

bool func_13(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_14(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, true);
}

int func_15()
{
	return 1;
}

void func_16()
{
}

void func_17(char* sParam0, int iParam1, int iParam2)
{
	if (!UNK_0xEA6BC48857E0AC4C(&Global_95814))
	{
		UNK_0x73B08BBDEAC9B885(&Global_95814, 0, 0, 0, 1, 0);
		StringCopy(&Global_95814, "", 64);
	}
	StringCopy(&Global_95814, sParam0, 64);
	UNK_0x1AE6E2984A30CB9E(sParam0, iParam1, iParam2, func_18(0));
}

bool func_18(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

bool func_19(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "OJBJ";
		case 1:
			return "MGDT";
		case 2:
			return "MGGF";
		case 3:
			return "OJHU";
		case 4:
			return "MGOR";
		case 5:
			return "MGPS";
		case 6:
			return "MGRP";
		case 7:
			return "MGSEA";
		case 8:
			return "MGSTR";
		case 9:
			return "MGSC";
		case 10:
			return "MGSP";
		case 11:
			return "MGSRm";
		case 12:
			return "OJTX";
		case 13:
			return "MGTN";
		case 14:
			return "OJTW";
		case 15:
			return "OJDA";
		case 16:
			return "OJDG";
		case 17:
			return "MGTR";
		case 18:
			return "MGYG";
		case 19:
			return "MGCR";
	}
	return "INVALID!";
}

void func_20(bool bParam0)
{
	bool bVar0;
	vector3 vVar1[24];

	if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
	{
		bVar0 = bParam0;
		UNK_0x3CFFF3C8EACD8DC1(8, &bVar0, 1, 1);
	}
	else if (UNK_0xBA301E03A078FA59() || UNK_0x33A494591F2C1975())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, bParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		UNK_0x8DECFDD6715449E4(8, &cVar1);
	}
}

void func_21(bool bParam0)
{
	if (!func_14(bParam0))
	{
		func_24(bParam0);
	}
	else
	{
		func_22(bParam0);
	}
}

void func_22(bool bParam0)
{
	func_23(bParam0, 0f);
}

void func_23(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_12(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

void func_24(bool bParam0)
{
	if (!func_14(bParam0))
	{
		func_22(bParam0);
	}
}

void func_25()
{
	UNK_0xB5376EA942202450(-1093.842f, -2375.285f, -100f, -1007.24f, -2425.285f, 100f, 150f, 0, true, 1);
}

int func_26()
{
	int iVar0;

	iVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&cLocal_53, &uLocal_118, 4, iLocal_97);
	UNK_0x5E8C29AE121DF1C7(&cLocal_53);
	return iVar0;
}

void func_27(bool bParam0)
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
	iVar0 = func_35(bParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0 /*5*/];
		func_30(1, iVar1, 1);
		return;
	}
	iVar2 = func_29(bParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_28(iVar2);
}

void func_28(int iParam0)
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

int func_29(bool bParam0)
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

void func_30(int iParam0, int iParam1, int iParam2)
{
	func_31(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_31(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_33(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_32();
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

int func_32()
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

bool func_33(int iParam0, int iParam1, int iParam2)
{
	if (func_34(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_34(int iParam0, int iParam1, int iParam2)
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

int func_35(bool bParam0)
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

void func_36()
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

int func_37(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_39(0))
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
		if (!func_84(iParam2))
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
			func_38(iParam0, iParam4);
		}
	}
	return 2;
}

void func_38(int iParam0, int iParam1)
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

bool func_39(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_84(iParam0))
	{
		return false;
	}
	return true;
}

void func_40()
{
	if (func_73(76))
	{
		UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), -1154.11f, -2715.203f, 18.8074f, 0f, 0f, 1.8f, true, true, 0);
	}
}

bool func_41(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_42(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!UNK_0xE1DBBD6CE209517C(UNK_0xA30EC016B12C03E4()))
	{
		return false;
	}
	if (func_47(0))
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

int func_42(int iParam0)
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

void func_43(int iParam0)
{
	int iVar0;

	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_42(*iParam0);
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

void func_44(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
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

bool func_45(var uParam0)
{
	return true;
}

bool func_46()
{
	return Global_73825;
}

bool func_47(int iParam0)
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

bool func_48(bool bParam0, int iParam1)
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

bool func_49()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

bool func_50()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_51(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

void func_52(var uParam0, int iParam1)
{
	func_53(uParam0, iParam1);
}

void func_53(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_54()
{
	return true;
}

bool func_55()
{
	int iVar0;
	bool bVar1;

	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		return false;
	}
	UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED")) || iVar0 == joaat("WEAPON_ELECTRIC_FENCE")) || iVar0 == joaat("GADGET_PARACHUTE"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		return ((((bVar1 && UNK_0x06F8112AA79C53D9(0, 69)) || (bVar1 && UNK_0x06F8112AA79C53D9(0, 70))) || (bVar1 && UNK_0x06F8112AA79C53D9(0, 68))) || UNK_0xBBFFD1937ED16008(UNK_0xD803B885F5E47A62()));
	}
	return (((((bVar1 && UNK_0x06F8112AA79C53D9(0, 24)) || (bVar1 && UNK_0x06F8112AA79C53D9(0, 25))) || (bVar1 && UNK_0x06F8112AA79C53D9(0, 47))) || UNK_0x05569C69D7945F99(UNK_0x16F2683693E537C9())) || UNK_0xBBFFD1937ED16008(UNK_0xD803B885F5E47A62()));
}

bool func_56(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_65();
				if (!func_64(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_63()) || Global_110685) || Global_30770) || func_62()) || func_48(8, -1)) || func_61()) || func_60()) || func_59()) || func_50()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_63()) || Global_30770) || func_62()) || func_48(8, -1)) || func_59()) || func_61()) || func_60()) || func_50()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_63()) || Global_110685) || Global_30770) || func_62()) || func_48(8, -1)) || func_59()) || func_61()) || func_60()) || func_50()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_63()) || Global_110685) || Global_30770) || func_62()) || func_48(8, -1)) || func_61()) || func_60()) || func_50()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_63() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_48(8, -1)) || func_50()) || func_58()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_48(8, -1) || func_61()) || func_60()) || func_58()) || func_57())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_63()) || Global_30770) || func_62()) || func_48(8, -1)) || func_60()) || func_59()) || func_50()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_63()) || func_60()) || Global_110685) || Global_30770) || func_62()) || Global_42596) || func_48(8, -1)) || func_59()) || func_58()) || func_50()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_63()) || Global_110685) || Global_30770) || func_62()) || func_48(8, -1)) || func_59()) || func_58()) || func_61()) || func_60()) || func_50())
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

bool func_57()
{
	return Global_98783.f_1;
}

bool func_58()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_59()
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

bool func_60()
{
	return Global_98796.f_346 > 0;
}

bool func_61()
{
	return Global_98796.f_345 > 0;
}

bool func_62()
{
	return Global_1312877;
}

bool func_63()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_64(int iParam0)
{
	return iParam0 < 3;
}

var func_65()
{
	func_66();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_66()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_68(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_67(UNK_0x16F2683693E537C9());
			if (func_64(iVar0) && (!func_74(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_64(Global_111638.f_2358.f_539.f_4321))
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

int func_67(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_68(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_68(int iParam0)
{
	if (func_64(iParam0))
	{
		return func_69(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_69(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_70()
{
	if (UNK_0x8A22C4C08282BF26(joaat("STRIPPERHOME")) > 0)
	{
		return true;
	}
	return false;
}

var func_71()
{
	return Global_94576;
}

bool func_72(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			if (func_74(6) || func_74(7))
			{
				return true;
			}
			else
			{
				return func_72(3);
			}
			break;
		case 2:
			return true;
		case 3:
			if (func_84(5))
			{
				if (func_56(4))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_73(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return false;
	}
	return UNK_0xE4EDC4B0E92C078B(Global_31146[iVar0 /*23*/].f_19);
}

bool func_74(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_75()
{
}

bool func_76()
{
	return true;
}

void func_77()
{
}

void func_78(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_79(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_80(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, false))
	{
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 18);
		if (Global_31143 == 1)
		{
			Global_31144 = 1;
		}
		Global_31143 = 1;
	}
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), false);
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 15);
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), false);
		UNK_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), 15);
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, false))
	{
		if (UNK_0xE4EDC4B0E92C078B(Global_31146[iVar0 /*23*/].f_19))
		{
			UNK_0xCD816869CA451988(1);
			UNK_0x142CC44DB769B57E(&(Global_31146[iVar0 /*23*/].f_19));
			UNK_0xCD816869CA451988(0);
		}
	}
}

bool func_81()
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

bool func_82()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_83(int iParam0, bool bParam1)
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

int func_84(int iParam0)
{
	return func_85(iParam0, Global_41431);
}

int func_85(int iParam0, int iParam1)
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

bool func_86(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_87()
{
	bLocal_99 = 5;
	bLocal_101 = "PLAY_PSCHOOL";
	StringCopy(&cLocal_53, "Pilot_School", 64);
	iLocal_97 = 35000;
}

void func_88(var uParam0, int iParam1)
{
	func_89(uParam0, iParam1);
}

void func_89(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_90(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_80(iLocal_105, 0, 0);
		}
	}
	func_43(&iLocal_96);
	if (func_86(uLocal_94, 2))
	{
		func_4();
		func_88(&uLocal_94, 2);
		func_8(&iLocal_98);
	}
	iLocal_98 = -1;
	func_91();
	UNK_0x10FAF14A60A0DBE1();
}

void func_91()
{
	func_88(&uLocal_94, 4);
	func_92();
	if (UNK_0x1727A44C562FBED2(iLocal_52))
	{
		UNK_0x4000D538E4D54254(iLocal_52, 3);
	}
	if (!UNK_0x2EBF5002C6B6A06C(&Local_69))
	{
		if (UNK_0x4880526EC51D1C27(&Local_69) != 0)
		{
			UNK_0x5E8C29AE121DF1C7(&Local_69);
		}
	}
}

void func_92()
{
	if (bLocal_123)
	{
		func_93(76);
	}
}

void func_93(int iParam0)
{
	if (iParam0 != 263)
	{
		func_80(iParam0, 1, 0);
	}
}

