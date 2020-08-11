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
	bool bLocal_118 = false;
	bool bLocal_119 = false;
	bool bLocal_120 = false;
	bool bLocal_121 = false;
	bool bLocal_122 = false;
	bool bLocal_123 = false;
	bool bLocal_124 = false;
	bool bLocal_125 = false;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	bool bLocal_132 = false;
	bool bLocal_133 = false;
	bool bLocal_134 = false;
	bool bLocal_135 = false;
	bool bLocal_136 = false;
	bool bLocal_137 = false;
	int iLocal_138 = 0;
	bool bLocal_139 = false;
	struct<6> Local_140[3];
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
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
	bool bVar2;
	int iVar3;

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
	bLocal_118 = true;
	bLocal_133 = true;
	vLocal_90 = { ScriptParam_0.f_1[0 /*3*/] };
	vLocal_90 = { vLocal_90 };
	uLocal_86 = uLocal_86;
	Local_69 = { Local_69 };
	bVar0 = false;
	if (UNK_0x2EBF608FFE6CA406(82))
	{
		func_104(1);
	}
	bLocal_85 = UNK_0x9539D44F3E4492F6(UNK_0xD803B885F5E47A62());
	iLocal_95 = 0;
	func_102(&Global_110289, 0);
	func_99();
	if (func_98(uLocal_94, 1))
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
	if (!func_98(uLocal_94, 8))
	{
		if (!func_96(iLocal_100))
		{
			if (func_95(0, bLocal_99))
			{
				func_104(0);
			}
			else
			{
				func_104(1);
			}
		}
	}
	if (bLocal_99 != -1)
	{
		if (!func_95(0, bLocal_99))
		{
			bLocal_118 = false;
		}
	}
	if (func_98(uLocal_94, 8388608))
	{
		func_104(1);
	}
	if (func_98(uLocal_94, 524288) && (func_94() && !func_93()))
	{
		func_104(1);
	}
	if (UNK_0x8A22C4C08282BF26(UNK_0x7CF4675EC2B8ED0B()) > 1 && !func_98(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_92(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_91(10);
	}
	while (true)
	{
		bLocal_85 = UNK_0x9539D44F3E4492F6(UNK_0xD803B885F5E47A62());
		if (func_98(uLocal_94, 1048576))
		{
			if (UNK_0x437347B10A200C4B(bLocal_85, 0))
			{
				func_104(1);
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
					if (func_96(iLocal_100) || (func_98(uLocal_94, 16) && !func_98(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_90();
						func_91(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_92(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_91(10);
						}
						if ((vLocal_87.z - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				case 1:
					if (func_88())
					{
						iLocal_103 = iLocal_103;
						func_91(3);
					}
					else
					{
						func_90();
					}
					break;
				case 3:
					if (UNK_0x8FE4F98FD4BE2689())
					{
						func_104(1);
						return;
					}
					if (!func_96(iLocal_100))
					{
						if (!func_98(uLocal_94, 8))
						{
							bVar1 = true;
							if (UNK_0x7F8A39872A07D2CE(&(Global_98744.f_3), &Local_69))
							{
								Local_69 = { cLocal_53 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_104(0);
							}
							else
							{
								if (!func_98(uLocal_94, 4))
								{
									func_85();
									func_84(&uLocal_94, 4);
								}
								if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_98778)
								{
									if (iLocal_105 != 263)
									{
										if (func_83(6) && !func_82(iLocal_105))
										{
										}
										else
										{
											func_92(iLocal_105, 1, 0);
											iLocal_105 = 263;
										}
									}
									func_91(10);
								}
								else
								{
									Local_69 = { cLocal_53 };
									bVar2 = !func_98(uLocal_94, 64);
									func_102(&uLocal_94, 128);
									if (!func_81(3) && !Global_98778)
									{
										if (func_98(uLocal_94, 2097152))
										{
											if ((!func_98(uLocal_94, 1) || !UNK_0xC844350D5D58C99A(func_80())) && !Global_98778)
											{
												func_91(10);
											}
											else
											{
												if (func_98(uLocal_94, 524288) && (func_94() && !func_93()))
												{
													func_104(1);
												}
												if (func_79())
												{
													func_104(1);
												}
												if ((!func_71(6) || Global_110685) || func_70())
												{
													bVar2 = false;
												}
												if (!bLocal_118)
												{
													func_68(&uLocal_94, 128);
													bVar2 = false;
												}
												if (func_98(uLocal_94, 1))
												{
													if (!func_67())
													{
														func_68(&uLocal_94, 128);
														bVar2 = false;
													}
												}
												if (func_66(1))
												{
													bVar2 = false;
												}
												if (Global_76622)
												{
													bVar2 = false;
												}
												if (func_65())
												{
													bVar2 = false;
												}
												if (UNK_0x991B1F0980C62628())
												{
													bVar2 = false;
												}
												if (func_64() || func_63(8, -1))
												{
													bVar2 = false;
												}
												if (!UNK_0xD79EDC28CA84B527(UNK_0xD803B885F5E47A62()))
												{
													bVar2 = false;
												}
												if (!UNK_0x04B2EAD6D5301B36(UNK_0xD803B885F5E47A62()))
												{
													bVar2 = false;
												}
												if (func_62(0) || func_61())
												{
													bVar2 = false;
												}
												if (bVar2)
												{
													if (!UNK_0x5A91F08DF773C39D(bLocal_85, ScriptParam_0.f_1[0 /*3*/], bLocal_117, bLocal_117, 2f, false, true, iLocal_103))
													{
														bVar2 = false;
													}
													if (bVar2 && func_54(func_55()) < bLocal_119)
													{
														func_68(&uLocal_94, 128);
														bVar2 = false;
														if (!func_98(uLocal_94, 33554432))
														{
															func_53("MG_YOU_IS_BROKE", bLocal_119, -1);
															func_68(&uLocal_94, 33554432);
														}
													}
													else
													{
														func_102(&uLocal_94, 33554432);
													}
													if (!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
													{
														bVar2 = false;
													}
													if (bVar2)
													{
														UNK_0x558EC149EB2BC0A2(0, 51);
														if (func_52(uLocal_86))
														{
															if (iLocal_96 == -1)
															{
																if (bLocal_119 > 0)
																{
																	func_51(&iLocal_96, 4, "", 1, 0, 0, 0);
																	func_50(bLocal_101, bLocal_119);
																	func_68(&uLocal_94, 2048);
																}
																else
																{
																	func_51(&iLocal_96, 4, bLocal_101, 0, 0, 0, 0);
																	func_68(&uLocal_94, 2048);
																}
															}
															else if (!func_98(uLocal_94, 2048) || !UNK_0xFEBC1E4EC9E001F0())
															{
																func_49(&iLocal_96);
																func_102(&uLocal_94, 2048);
															}
															if (func_47(iLocal_96, 1))
															{
																bLocal_101 = bLocal_101;
																func_49(&iLocal_96);
																func_102(&uLocal_94, 2048);
																if (func_98(uLocal_94, 2048))
																{
																	if (UNK_0xFEBC1E4EC9E001F0())
																	{
																		func_102(&uLocal_94, 2048);
																		UNK_0xA37A90C62806D848(0);
																	}
																}
																UNK_0x92DCE5C81176D2B4(&Local_69);
																UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 56);
																func_91(5);
															}
														}
														else
														{
															bLocal_101 = bLocal_101;
															func_49(&iLocal_96);
															func_102(&uLocal_94, 2048);
															if (func_98(uLocal_94, 2048))
															{
																if (UNK_0xFEBC1E4EC9E001F0())
																{
																	func_102(&uLocal_94, 2048);
																	UNK_0xA37A90C62806D848(0);
																}
															}
															UNK_0x92DCE5C81176D2B4(&Local_69);
															UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 56);
															func_91(5);
														}
													}
												}
												if (!bVar2)
												{
													if (iLocal_96 != -1)
													{
														if (UNK_0xFEBC1E4EC9E001F0())
														{
															func_49(&iLocal_96);
															func_102(&uLocal_94, 2048);
															UNK_0xA37A90C62806D848(0);
														}
													}
												}
												func_38();
												Jump @2790; //curOff = 1808
												UNK_0x558EC149EB2BC0A2(0, 51);
												if (UNK_0x1FBF08B001C4788A(&Local_69))
												{
													if (iLocal_96 != -1)
													{
														func_49(&iLocal_96);
													}
													iVar3 = 2;
													bVar0 = false;
													if (func_98(uLocal_94, 1))
													{
														if (func_83(6) || func_83(7))
														{
															iVar3 = 1;
															bVar0 = true;
														}
													}
													if (iVar3 != 1)
													{
														iVar3 = func_35(&iLocal_98, 6, iLocal_100, 0, 0);
													}
													if (iVar3 == 1)
													{
														if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
														{
															UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
														}
														func_34();
														if (Global_42596)
														{
															func_25(UNK_0x16F2683693E537C9());
														}
														UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, 56);
														iLocal_52 = func_24();
														func_102(&uLocal_94, 4);
														func_23();
														func_68(&uLocal_94, 2);
														func_91(6);
														func_19(&uLocal_107);
														if (bLocal_99 != -1)
														{
															func_18(bLocal_99);
															func_15(func_17(bLocal_99), 0, 0);
														}
													}
													else if (iVar3 == 2)
													{
														func_14();
													}
													else if (iVar3 == 0)
													{
														func_91(10);
													}
												}
												else
												{
													func_14();
												}
												Jump @2790; //curOff = 2047
												if (!func_98(uLocal_94, 256))
												{
													if (UNK_0xD0BB2359EC70FC37() || UNK_0x0F1CCD77290EE12F())
													{
														UNK_0x558EC149EB2BC0A2(0, 51);
													}
													else if (UNK_0x757EF87A33649210())
													{
														func_68(&uLocal_94, 256);
													}
												}
												if (func_98(Global_110289, 262144))
												{
													func_102(&Global_110289, 262144);
													func_13();
												}
												if (func_98(uLocal_94, 2097152))
												{
													if (!func_81(3) && !UNK_0x1727A44C562FBED2(iLocal_52))
													{
														func_91(10);
													}
												}
												if (!UNK_0x1727A44C562FBED2(iLocal_52))
												{
													UNK_0x11E0F00830F70E15(SYSTEM::ROUND((func_9(&uLocal_107) * 1000f)), bLocal_99, 0);
													func_8(&uLocal_107);
													func_102(&uLocal_94, 256);
													func_7();
													if (bVar0)
													{
														func_102(&uLocal_94, 2);
													}
													else if (func_98(uLocal_94, 2))
													{
														if (func_98(Global_110289, 0))
														{
															func_6(&iLocal_98);
															iLocal_98 = -1;
															func_102(&uLocal_94, 2);
														}
														else
														{
															func_6(&iLocal_98);
															iLocal_98 = -1;
															func_102(&uLocal_94, 2);
														}
													}
													func_91(0);
													if (bLocal_99 != -1)
													{
														if (func_98(Global_110289, 0))
														{
															UNK_0x353729B0A07DC11A(func_17(bLocal_99), 0, Global_98781, 0);
															func_5(func_17(bLocal_99), 0, Global_98781, 1, 0);
														}
														else
														{
															UNK_0x353729B0A07DC11A(func_17(bLocal_99), 0, Global_98781, 0);
															func_5(func_17(bLocal_99), 0, Global_98781, 0, 0);
														}
													}
													func_4();
													func_102(&Global_110289, 0);
													if (func_98(uLocal_94, 16777216))
													{
														func_104(1);
													}
													if (bLocal_99 != -1)
													{
														if (Global_111638.f_9080)
														{
															if (!func_95(0, bLocal_99))
															{
																func_104(1);
															}
														}
													}
												}
												func_3();
												Jump @2790; //curOff = 2462
												func_91(0);
												Jump @2790; //curOff = 2470
												func_104(1);
												Jump @2790; //curOff = 2478
												if (fLocal_110 > (fLocal_102 * fLocal_102))
												{
													if (iLocal_105 != 263)
													{
														func_92(iLocal_105, 1, 0);
														iLocal_105 = 263;
													}
													func_91(10);
												}
												Jump @2790; //curOff = 2519
												func_2();
												if (iLocal_105 != 263)
												{
													func_92(iLocal_105, 0, 0);
												}
												if (iLocal_96 != -1)
												{
													func_49(&iLocal_96);
												}
												if (!UNK_0xEA6BC48857E0AC4C(bLocal_101))
												{
													if (func_1(bLocal_101))
													{
														UNK_0xA37A90C62806D848(1);
													}
												}
												func_91(4);
												Jump @2790; //curOff = 2583
												if ((iLocal_104 % 150) == 0)
												{
													if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
													{
														if (iLocal_106 == 2)
														{
															if (iLocal_106 == 2)
															{
																if (func_96(iLocal_100) && func_95(0, bLocal_99))
																{
																	func_99();
																	if (iLocal_105 != 263)
																	{
																		func_92(iLocal_105, 1, 0);
																	}
																	func_91(0);
																}
															}
														}
														else if (iLocal_106 == 0)
														{
															if (fLocal_110 > (fLocal_102 * fLocal_102))
															{
																if (iLocal_105 != 263)
																{
																	func_92(iLocal_105, 1, 0);
																	iLocal_105 = 263;
																}
																func_91(10);
															}
														}
														else if (iLocal_106 == 1)
														{
															if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
															{
																func_99();
																if (iLocal_105 != 263)
																{
																	func_92(iLocal_105, 1, 0);
																}
																func_91(0);
															}
														}
													}
													else
													{
														func_92(iLocal_105, 1, 0);
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
	if (bLocal_133)
	{
		UNK_0x71199B01895C6202(joaat("PROP_EAR_DEFENDERS_01"));
		UNK_0x71199B01895C6202(joaat("PROP_SAFETY_GLASSES"));
		UNK_0x71199B01895C6202(joaat("PROP_TARGET_ARM_B"));
		UNK_0x71199B01895C6202(joaat("PROP_TARGET_BACKBOARD_B"));
		UNK_0x71199B01895C6202(joaat("PROP_TARGET_BULL_B"));
		UNK_0x71199B01895C6202(joaat("PROP_TARGET_INNER1"));
		UNK_0x71199B01895C6202(joaat("PROP_TARGET_INNER2_B"));
		UNK_0x71199B01895C6202(joaat("PROP_TARGET_INNER3_B"));
	}
}

void func_3()
{
}

void func_4()
{
}

void func_5(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_6(int iParam0)
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

void func_7()
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

void func_8(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_9(var uParam0)
{
	if (func_12(uParam0))
	{
		if (func_11(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_10(UNK_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_10(bool bParam0)
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

bool func_11(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_12(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, true);
}

int func_13()
{
	return 1;
}

void func_14()
{
}

void func_15(char* sParam0, int iParam1, int iParam2)
{
	if (!UNK_0xEA6BC48857E0AC4C(&Global_95814))
	{
		UNK_0x73B08BBDEAC9B885(&Global_95814, 0, 0, 0, 1, 0);
		StringCopy(&Global_95814, "", 64);
	}
	StringCopy(&Global_95814, sParam0, 64);
	UNK_0x1AE6E2984A30CB9E(sParam0, iParam1, iParam2, func_16(0));
}

bool func_16(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

bool func_17(bool bParam0)
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

void func_18(bool bParam0)
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

void func_19(bool bParam0)
{
	if (!func_12(bParam0))
	{
		func_22(bParam0);
	}
	else
	{
		func_20(bParam0);
	}
}

void func_20(bool bParam0)
{
	func_21(bParam0, 0f);
}

void func_21(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_10(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

void func_22(bool bParam0)
{
	if (!func_12(bParam0))
	{
		func_20(bParam0);
	}
}

void func_23()
{
	int iVar0;

	if (bLocal_132)
	{
		UNK_0xEEEE2E5FA6F78DF0(&uLocal_126);
		UNK_0xEEEE2E5FA6F78DF0(&uLocal_127);
		UNK_0xEEEE2E5FA6F78DF0(&uLocal_128);
		UNK_0xEEEE2E5FA6F78DF0(&uLocal_129);
		UNK_0xEEEE2E5FA6F78DF0(&uLocal_130);
		UNK_0xEEEE2E5FA6F78DF0(&uLocal_131);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			UNK_0xF690C84DADBB3551(&(Local_140[iVar0 /*6*/].f_1));
			UNK_0xF690C84DADBB3551(&(Local_140[iVar0 /*6*/].f_4));
			UNK_0xF690C84DADBB3551(&(Local_140[iVar0 /*6*/].f_3));
			UNK_0xF690C84DADBB3551(&(Local_140[iVar0 /*6*/].f_2));
			UNK_0xF690C84DADBB3551(&(Local_140[iVar0 /*6*/]));
			UNK_0xF690C84DADBB3551(&(Local_140[iVar0 /*6*/].f_5));
			iVar0++;
		}
		UNK_0x51732B934211201A(bLocal_139);
		UNK_0x71199B01895C6202(bLocal_120);
		UNK_0x71199B01895C6202(bLocal_121);
		UNK_0x71199B01895C6202(bLocal_122);
		UNK_0x71199B01895C6202(joaat("PROP_EAR_DEFENDERS_01"));
		UNK_0x71199B01895C6202(joaat("PROP_SAFETY_GLASSES"));
		UNK_0x71199B01895C6202(joaat("PROP_TARGET_ARM_B"));
		UNK_0x71199B01895C6202(joaat("PROP_TARGET_BACKBOARD_B"));
		UNK_0x71199B01895C6202(joaat("PROP_TARGET_BULL_B"));
		UNK_0x71199B01895C6202(joaat("PROP_TARGET_INNER1"));
		UNK_0x71199B01895C6202(joaat("PROP_TARGET_INNER2_B"));
		UNK_0x71199B01895C6202(joaat("PROP_TARGET_INNER3_B"));
	}
	bLocal_132 = false;
}

int func_24()
{
	struct<10> Var0;
	int iVar10;

	Var0.f_1 = bLocal_123;
	Var0.f_2 = bLocal_124;
	Var0.f_3 = bLocal_125;
	Var0.f_4 = uLocal_126;
	Var0.f_5 = uLocal_127;
	Var0.f_6 = uLocal_128;
	Var0.f_7 = uLocal_129;
	Var0.f_8 = uLocal_130;
	Var0.f_9 = uLocal_131;
	Var0 = iLocal_138;
	iVar10 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&cLocal_53, &Var0, 10, iLocal_97);
	UNK_0x5E8C29AE121DF1C7(&cLocal_53);
	if (UNK_0xC844350D5D58C99A(bLocal_123) && !UNK_0x437347B10A200C4B(bLocal_123, 0))
	{
		UNK_0xFADC0A217229F6B5(bLocal_123, true);
		UNK_0x6DAD7906B73F064D(&bLocal_123);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_124) && !UNK_0x437347B10A200C4B(bLocal_124, 0))
	{
		UNK_0xFADC0A217229F6B5(bLocal_124, true);
		UNK_0x6DAD7906B73F064D(&bLocal_124);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_125) && !UNK_0x437347B10A200C4B(bLocal_125, 0))
	{
		UNK_0xFADC0A217229F6B5(bLocal_125, true);
		UNK_0x6DAD7906B73F064D(&bLocal_125);
	}
	return iVar10;
}

void func_25(bool bParam0)
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
	iVar0 = func_33(bParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0 /*5*/];
		func_28(1, iVar1, 1);
		return;
	}
	iVar2 = func_27(bParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_26(iVar2);
}

void func_26(int iParam0)
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

int func_27(bool bParam0)
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

void func_28(int iParam0, int iParam1, int iParam2)
{
	func_29(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_29(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_31(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_30();
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

int func_30()
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

bool func_31(int iParam0, int iParam1, int iParam2)
{
	if (func_32(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_32(int iParam0, int iParam1, int iParam2)
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

int func_33(bool bParam0)
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

void func_34()
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

int func_35(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_37(0))
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
		if (!func_96(iParam2))
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
			func_36(iParam0, iParam4);
		}
	}
	return 2;
}

void func_36(int iParam0, int iParam1)
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

bool func_37(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_96(iParam0))
	{
		return false;
	}
	return true;
}

void func_38()
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	int iVar9;

	UNK_0x5F3EEC968FEB7235(17.325f, -1094.09f, 31.58f, 0.2f, 255, false, false, 255);
	UNK_0x5F3EEC968FEB7235(12.617f, -1092.35f, 31.58f, 0.2f, false, 255, false, 255);
	if (UNK_0xC844350D5D58C99A(bLocal_123) && !UNK_0xEB6A8945D1AC98A1(bLocal_123))
	{
		UNK_0x9DD8618CA5BF832D(bLocal_123, 71, true);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_124) && !UNK_0xEB6A8945D1AC98A1(bLocal_124))
	{
		UNK_0x9DD8618CA5BF832D(bLocal_124, 71, true);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_125) && !UNK_0xEB6A8945D1AC98A1(bLocal_125))
	{
		UNK_0x9DD8618CA5BF832D(bLocal_125, 71, true);
	}
	if (bLocal_133)
	{
		if (!UNK_0x437347B10A200C4B(bLocal_123, 0))
		{
			UNK_0x1E9649458B15960F(bLocal_123, false);
			UNK_0x9DD8618CA5BF832D(bLocal_123, 62, true);
		}
		if (!UNK_0x437347B10A200C4B(bLocal_124, 0))
		{
			UNK_0x1E9649458B15960F(bLocal_124, false);
			UNK_0x9DD8618CA5BF832D(bLocal_124, 62, true);
		}
		if (!UNK_0x437347B10A200C4B(bLocal_125, 0))
		{
			UNK_0x1E9649458B15960F(bLocal_125, false);
			UNK_0x9DD8618CA5BF832D(bLocal_125, 62, true);
		}
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		}
		fVar3 = SYSTEM::VDIST2(vVar0, vLocal_90);
		if (fVar3 < 400f)
		{
			if (!bLocal_134)
			{
				if ((UNK_0xC844350D5D58C99A(Local_140[0 /*6*/].f_1) && UNK_0xC844350D5D58C99A(bLocal_123)) && !UNK_0x28072FDD60CE3A6E(bLocal_123, 1))
				{
					UNK_0x298903DD96203C2C(bLocal_123, 20);
					UNK_0x8A3A3812E5562303(bLocal_123, "move_ped_strafing");
					if (iLocal_138 == 0)
					{
						vVar5 = { UNK_0x68F4C0EC296D3901(Local_140[0 /*6*/].f_1, true) - Vector(0.75f, 0f, 0f) };
					}
					else
					{
						vVar5 = { UNK_0x68F4C0EC296D3901(Local_140[0 /*6*/].f_1, true) - Vector(0.77f, 0f, 0f) };
					}
					UNK_0xDD353D0E9C789D0E(&iVar4);
					UNK_0x731C6942D48648D6(false, vVar5, 3000, 0, 0);
					UNK_0xD43A968A9357B799(false, vVar5, 2000, joaat("FIRING_PATTERN_BURST_FIRE"));
					UNK_0x25644C31B4B6E9F3(iVar4, 1);
					UNK_0x75ABDC5F81978924(iVar4);
					UNK_0x78ADC381772E3D54(bLocal_123, iVar4);
					UNK_0xF82EA857DA10E0CD(&iVar4);
					bLocal_134 = true;
				}
			}
			if (!bLocal_135)
			{
				if ((UNK_0xC844350D5D58C99A(Local_140[1 /*6*/].f_1) && UNK_0xC844350D5D58C99A(bLocal_124)) && !UNK_0x28072FDD60CE3A6E(bLocal_124, 1))
				{
					UNK_0x298903DD96203C2C(bLocal_124, 20);
					UNK_0x8A3A3812E5562303(bLocal_124, "move_ped_strafing");
					if (iLocal_138 == 0)
					{
						vVar5 = { UNK_0x68F4C0EC296D3901(Local_140[1 /*6*/].f_1, true) - Vector(0.7f, 0f, 0f) };
					}
					else
					{
						vVar5 = { UNK_0x68F4C0EC296D3901(Local_140[1 /*6*/].f_1, true) - Vector(0.7f, 0f, 0f) };
					}
					UNK_0xDD353D0E9C789D0E(&iVar4);
					UNK_0x731C6942D48648D6(false, vVar5, 4000, 0, 0);
					UNK_0xD43A968A9357B799(false, vVar5, 1000, joaat("FIRING_PATTERN_BURST_FIRE"));
					UNK_0x25644C31B4B6E9F3(iVar4, 1);
					UNK_0x75ABDC5F81978924(iVar4);
					UNK_0x78ADC381772E3D54(bLocal_124, iVar4);
					UNK_0xF82EA857DA10E0CD(&iVar4);
					bLocal_135 = true;
				}
			}
			if (!bLocal_136)
			{
				if ((UNK_0xC844350D5D58C99A(Local_140[2 /*6*/].f_1) && UNK_0xC844350D5D58C99A(bLocal_125)) && !UNK_0x28072FDD60CE3A6E(bLocal_125, 1))
				{
					UNK_0x298903DD96203C2C(bLocal_125, 20);
					UNK_0x8A3A3812E5562303(bLocal_125, "move_ped_strafing");
					if (iLocal_138 == 0)
					{
						vVar5 = { UNK_0x68F4C0EC296D3901(Local_140[2 /*6*/].f_1, true) - Vector(0.8f, 0f, 0f) };
					}
					else
					{
						vVar5 = { UNK_0x68F4C0EC296D3901(Local_140[2 /*6*/].f_1, true) - Vector(0.68f, 0f, 0f) };
					}
					UNK_0xDD353D0E9C789D0E(&iVar4);
					UNK_0x731C6942D48648D6(false, vVar5, 2000, 0, 0);
					UNK_0xD43A968A9357B799(false, vVar5, 1500, joaat("FIRING_PATTERN_BURST_FIRE"));
					UNK_0x25644C31B4B6E9F3(iVar4, 1);
					UNK_0x75ABDC5F81978924(iVar4);
					UNK_0x78ADC381772E3D54(bLocal_125, iVar4);
					UNK_0xF82EA857DA10E0CD(&iVar4);
					bLocal_136 = true;
				}
			}
		}
		else
		{
			if (bLocal_134)
			{
				if (!UNK_0x437347B10A200C4B(bLocal_123, 0))
				{
					UNK_0x93D47DFD0AE94949(bLocal_123, -1);
					UNK_0x1E9649458B15960F(bLocal_123, true);
				}
				bLocal_134 = false;
			}
			if (bLocal_135)
			{
				if (!UNK_0x437347B10A200C4B(bLocal_124, 0))
				{
					UNK_0x93D47DFD0AE94949(bLocal_124, -1);
					UNK_0x1E9649458B15960F(bLocal_124, true);
				}
				bLocal_135 = false;
			}
			if (bLocal_136)
			{
				if (!UNK_0x437347B10A200C4B(bLocal_125, 0))
				{
					UNK_0x93D47DFD0AE94949(bLocal_125, -1);
					UNK_0x1E9649458B15960F(bLocal_125, true);
				}
				bLocal_136 = false;
			}
		}
	}
	if (iLocal_138 == 0)
	{
		iVar8 = UNK_0xFBD08BECC9B87937(13f, -1098f, 30f);
		if (func_98(uLocal_94, 128))
		{
			if (func_82(91))
			{
				func_92(91, 0, 0);
			}
		}
		else if (!func_82(91))
		{
			func_92(91, 1, 0);
		}
	}
	else
	{
		iVar8 = UNK_0xFBD08BECC9B87937(821f, -2162f, 30f);
		if (func_98(uLocal_94, 128))
		{
			if (func_82(92))
			{
				func_92(92, 0, 0);
			}
		}
		else if (!func_82(92))
		{
			func_92(92, 1, 0);
		}
	}
	iVar9 = UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9());
	if (iVar9 != iVar8)
	{
		func_68(&uLocal_94, 128);
	}
	if (func_40(28) || func_40(38))
	{
		func_39();
		func_68(&uLocal_94, 64);
		func_68(&uLocal_94, 128);
	}
}

void func_39()
{
	if (bLocal_137)
	{
		return;
	}
	bLocal_137 = true;
	if (UNK_0xC844350D5D58C99A(bLocal_123) && !UNK_0x28072FDD60CE3A6E(bLocal_123, 1))
	{
		UNK_0x11AD11297DC58CC7(bLocal_123, false);
		UNK_0x6C3AE6E278DB3D0E(bLocal_123, UNK_0x16F2683693E537C9(), 0, 16);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_124) && !UNK_0x28072FDD60CE3A6E(bLocal_124, 1))
	{
		UNK_0x11AD11297DC58CC7(bLocal_124, false);
		UNK_0x6C3AE6E278DB3D0E(bLocal_124, UNK_0x16F2683693E537C9(), 0, 16);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_125) && !UNK_0x28072FDD60CE3A6E(bLocal_125, 1))
	{
		UNK_0x11AD11297DC58CC7(bLocal_125, false);
		UNK_0x6C3AE6E278DB3D0E(bLocal_125, UNK_0x16F2683693E537C9(), 0, 16);
	}
}

bool func_40(int iParam0)
{
	return func_41(iParam0, 1, 1);
}

bool func_41(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (bParam2)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_98796.f_1357[iParam0], bParam1);
	}
	else if (UNK_0x8CD06866876216F2())
	{
		if (func_46() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_42(func_45(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

int func_42(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_43(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_44();
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

int func_44()
{
	return Global_1312745;
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
		case 1:
			return 828;
		case 2:
			return 829;
		case 3:
			return 830;
		case 4:
			return 831;
		case 5:
			return 832;
		case 6:
			return 833;
		case 7:
			return 834;
		case 8:
			return 835;
		case 9:
			return 836;
		case 10:
			return 837;
		case 11:
			return 838;
		case 12:
			return 839;
		case 13:
			return 840;
		case 14:
			return 841;
		case 15:
			return 843;
		case 16:
			return 844;
		case 17:
			return 845;
		case 18:
			return 846;
		case 19:
			return 847;
		case 20:
			return 848;
		case 21:
			return 849;
		case 22:
			return 850;
		case 23:
			return 851;
		case 24:
			return 852;
		case 25:
			return 853;
		case 26:
			return 854;
		case 27:
			return 855;
		case 28:
			return 856;
		case 29:
			return 857;
		case 30:
			return 858;
		case 31:
			return 859;
		case 32:
			return 860;
		case 33:
			return 861;
		case 34:
			return 862;
		case 35:
			return 863;
		case 36:
			return 864;
		case 37:
			return 865;
		case 38:
			return 866;
		case 39:
			return 867;
		case 40:
			return 871;
		case 41:
			return 872;
		case 42:
			return 873;
		case 43:
			return 874;
		case 44:
			return 9977;
		case 45:
			return 3808;
		case 46:
			return 5383;
		case 47:
			return 6155;
		case 48:
			return 7232;
		case 49:
			return 7878;
		case 52:
			return 8912;
		case 50:
			return 8265;
		case 51:
			return 8267;
		default:
			break;
	}
	return 11511;
}

int func_46()
{
	return Global_30768;
}

bool func_47(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_48(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!UNK_0xE1DBBD6CE209517C(UNK_0xA30EC016B12C03E4()))
	{
		return false;
	}
	if (func_62(0))
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

int func_48(int iParam0)
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

void func_49(int iParam0)
{
	int iVar0;

	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_48(*iParam0);
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

void func_50(bool bParam0, bool bParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

void func_51(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;

	if (UNK_0x8A22C4C08282BF26(joaat("CONTEXT_CONTROLLER")) < 1)
	{
	}
	if (UNK_0x991B1F0980C62628())
	{
		if (!*iParam0 == -1)
		{
			func_49(iParam0);
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

bool func_52(var uParam0)
{
	return true;
}

void func_53(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam2);
}

bool func_54(int iParam0)
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
	return false;
}

int func_55()
{
	func_56();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_56()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_59(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_58(UNK_0x16F2683693E537C9());
			if (func_57(iVar0) && (!func_83(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_57(Global_111638.f_2358.f_539.f_4321))
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

bool func_57(int iParam0)
{
	return iParam0 < 3;
}

int func_58(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_59(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_59(int iParam0)
{
	if (func_57(iParam0))
	{
		return func_60(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_60(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_61()
{
	return Global_73825;
}

bool func_62(int iParam0)
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

bool func_63(bool bParam0, int iParam1)
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

bool func_64()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

bool func_65()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_66(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_67()
{
	return true;
}

void func_68(var uParam0, int iParam1)
{
	func_69(uParam0, iParam1);
}

void func_69(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_70()
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

bool func_71(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_55();
				if (!func_57(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_78()) || Global_110685) || Global_30770) || func_77()) || func_63(8, -1)) || func_76()) || func_75()) || func_74()) || func_65()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_78()) || Global_30770) || func_77()) || func_63(8, -1)) || func_74()) || func_76()) || func_75()) || func_65()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_78()) || Global_110685) || Global_30770) || func_77()) || func_63(8, -1)) || func_74()) || func_76()) || func_75()) || func_65()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_78()) || Global_110685) || Global_30770) || func_77()) || func_63(8, -1)) || func_76()) || func_75()) || func_65()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_78() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_63(8, -1)) || func_65()) || func_73()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_63(8, -1) || func_76()) || func_75()) || func_73()) || func_72())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_78()) || Global_30770) || func_77()) || func_63(8, -1)) || func_75()) || func_74()) || func_65()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_78()) || func_75()) || Global_110685) || Global_30770) || func_77()) || Global_42596) || func_63(8, -1)) || func_74()) || func_73()) || func_65()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_78()) || Global_110685) || Global_30770) || func_77()) || func_63(8, -1)) || func_74()) || func_73()) || func_76()) || func_75()) || func_65())
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

bool func_72()
{
	return Global_98783.f_1;
}

bool func_73()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_74()
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

bool func_75()
{
	return Global_98796.f_346 > 0;
}

bool func_76()
{
	return Global_98796.f_345 > 0;
}

bool func_77()
{
	return Global_1312877;
}

bool func_78()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_79()
{
	if (UNK_0x8A22C4C08282BF26(joaat("STRIPPERHOME")) > 0)
	{
		return true;
	}
	return false;
}

var func_80()
{
	return Global_94576;
}

bool func_81(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			if (func_83(6) || func_83(7))
			{
				return true;
			}
			else
			{
				return func_81(3);
			}
			break;
		case 2:
			return true;
		case 3:
			if (func_96(5))
			{
				if (func_71(4))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_82(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return false;
	}
	return UNK_0xE4EDC4B0E92C078B(Global_31146[iVar0 /*23*/].f_19);
}

bool func_83(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_84(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_85()
{
	vector3 vVar0;
	float fVar3;
	int iVar4;

	if (bLocal_133)
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		fVar3 = SYSTEM::VDIST2(vVar0, vLocal_90);
		if (fVar3 > 225f)
		{
			if (iLocal_138 == 0)
			{
				iVar4 = UNK_0xFBD08BECC9B87937(8.4083f, -1095.428f, 28.8554f);
			}
			else
			{
				iVar4 = UNK_0xFBD08BECC9B87937(824.3015f, -2162.983f, 30.906f);
			}
			if (UNK_0x31609A585163CBAC(iVar4))
			{
				UNK_0x0007C2367F4F23F3(iVar4);
				while (!UNK_0xBD307E66C0669BFC(iVar4))
				{
					SYSTEM::WAIT(0);
				}
				UNK_0x25BB71BA267FE042(iVar4);
			}
			if (iLocal_138 == 0)
			{
				bLocal_123 = UNK_0x36F2404464202779(26, bLocal_120, 8.4083f, -1095.428f, 28.8554f, 336.03f, 1, true);
				bLocal_124 = UNK_0x36F2404464202779(26, bLocal_121, 10.1096f, -1096.135f, 28.8554f, 336.03f, 1, true);
				bLocal_125 = UNK_0x36F2404464202779(26, bLocal_122, 13.7f, -1097.7f, 28.9f, 336.03f, 1, true);
			}
			else
			{
				bLocal_123 = UNK_0x36F2404464202779(26, bLocal_120, 817.0285f, -2163.657f, 28.6569f, 178.1556f, 1, true);
				bLocal_124 = UNK_0x36F2404464202779(26, bLocal_121, 819.0791f, -2163.743f, 28.6568f, 187.0609f, 1, true);
				bLocal_125 = UNK_0x36F2404464202779(26, bLocal_122, 821.4587f, -2163.616f, 28.6567f, 179.3586f, 1, true);
			}
			func_87(bLocal_123, &uLocal_126, &uLocal_129);
			func_87(bLocal_124, &uLocal_127, &uLocal_130);
			func_87(bLocal_125, &uLocal_128, &uLocal_131);
			UNK_0x262EF6C6306BEA6C(bLocal_123, joaat("WEAPON_PISTOL"), -1, true, true);
			UNK_0x262EF6C6306BEA6C(bLocal_124, joaat("WEAPON_COMBATPISTOL"), -1, true, true);
			UNK_0x262EF6C6306BEA6C(bLocal_125, joaat("WEAPON_PISTOL"), -1, true, true);
			UNK_0x73270B3C9CC833FD(bLocal_123, true, 0);
			UNK_0x73270B3C9CC833FD(bLocal_124, true, 0);
			UNK_0x73270B3C9CC833FD(bLocal_125, true, 0);
			UNK_0xF63400DBE3303D26("range_IGNORE", &bLocal_139);
			UNK_0x6DF7BF67E86AAE86(bLocal_123, bLocal_139);
			UNK_0x6DF7BF67E86AAE86(bLocal_124, bLocal_139);
			UNK_0x6DF7BF67E86AAE86(bLocal_125, bLocal_139);
			UNK_0x298903DD96203C2C(bLocal_123, 20);
			UNK_0x298903DD96203C2C(bLocal_124, 10);
			UNK_0x298903DD96203C2C(bLocal_125, 15);
			UNK_0x8A3A3812E5562303(bLocal_123, "move_ped_strafing");
			UNK_0x8A3A3812E5562303(bLocal_124, "move_ped_strafing");
			UNK_0x8A3A3812E5562303(bLocal_125, "move_ped_strafing");
			UNK_0x0E2400AB9174FA81(2, joaat("CIVMALE"), bLocal_139);
			UNK_0x0E2400AB9174FA81(2, joaat("CIVFEMALE"), bLocal_139);
			UNK_0x0E2400AB9174FA81(2, joaat("COP"), bLocal_139);
			UNK_0x0E2400AB9174FA81(2, bLocal_139, joaat("CIVMALE"));
			UNK_0x0E2400AB9174FA81(2, bLocal_139, joaat("CIVFEMALE"));
			UNK_0x0E2400AB9174FA81(2, bLocal_139, joaat("COP"));
			UNK_0x11AD11297DC58CC7(bLocal_123, true);
			UNK_0x11AD11297DC58CC7(bLocal_124, true);
			UNK_0x11AD11297DC58CC7(bLocal_125, true);
			func_86(0);
			func_86(1);
			func_86(2);
			UNK_0x93D47DFD0AE94949(bLocal_123, -1);
			UNK_0x1E9649458B15960F(bLocal_123, true);
			bLocal_134 = false;
			UNK_0x93D47DFD0AE94949(bLocal_124, -1);
			UNK_0x1E9649458B15960F(bLocal_124, true);
			bLocal_135 = false;
			UNK_0x93D47DFD0AE94949(bLocal_125, -1);
			UNK_0x1E9649458B15960F(bLocal_125, true);
			bLocal_136 = false;
			UNK_0x9DD8618CA5BF832D(bLocal_123, 71, true);
			UNK_0x9DD8618CA5BF832D(bLocal_124, 71, true);
			UNK_0x9DD8618CA5BF832D(bLocal_125, 71, true);
			bLocal_132 = true;
		}
		else
		{
			bLocal_132 = false;
		}
	}
	else
	{
		bLocal_132 = false;
	}
}

void func_86(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;

	fVar0 = 0.4f;
	fVar1 = 0.2f;
	fVar2 = 0.5f;
	if (iLocal_138 == 0)
	{
		fVar3 = -0.5f;
		fVar4 = -0.2f;
		fVar5 = 0.5f;
		vVar12 = { Vector(31.58f, -1081.513f, 16.475f) - Vector(31.58f, -1092.35f, 12.617f) };
		vVar15 = { Vector(31.58f, -1094.09f, 17.325f) - Vector(31.58f, -1092.35f, 12.617f) };
		vVar18 = { Vector(31.58f, -1092.35f, 12.617f) + vVar15 * Vector(fVar3, fVar3, fVar3) };
		vVar21 = { Vector(31.58f, -1092.35f, 12.617f) + vVar15 * Vector(fVar4, fVar4, fVar4) };
		vVar24 = { Vector(31.58f, -1092.35f, 12.617f) + vVar15 * Vector(fVar5, fVar5, fVar5) };
	}
	else
	{
		fVar3 = 1.35f;
		fVar4 = 1.05f;
		fVar5 = 0.5f;
		vVar12 = { Vector(31.347f, -2179.773f, 824.3217f) - Vector(31.347f, -2168.039f, 824.2375f) };
		vVar15 = { Vector(32.3f, -2168.008f, 819.2051f) - Vector(32.3f, -2168.039f, 824.2375f) };
		vVar18 = { Vector(31.347f, -2168.039f, 824.2375f) + vVar15 * Vector(fVar3, fVar3, fVar3) };
		vVar21 = { Vector(31.347f, -2168.039f, 824.2375f) + vVar15 * Vector(fVar4, fVar4, fVar4) };
		vVar24 = { Vector(31.347f, -2168.039f, 824.2375f) + vVar15 * Vector(fVar5, fVar5, fVar5) };
	}
	if (iParam0 == 0)
	{
		vVar6 = { vVar12 * Vector(fVar0, fVar0, fVar0) };
		vVar9 = { vVar18 + vVar6 };
	}
	else if (iParam0 == 1)
	{
		vVar6 = { vVar12 * Vector(fVar1, fVar1, fVar1) };
		vVar9 = { vVar21 + vVar6 };
	}
	else
	{
		vVar6 = { vVar12 * Vector(fVar2, fVar2, fVar2) };
		vVar9 = { vVar24 + vVar6 };
	}
	Local_140[iParam0 /*6*/] = UNK_0xB0BE3DFBBB59A620(joaat("PROP_TARGET_BACKBOARD_B"), vVar9, true, true, false);
	Local_140[iParam0 /*6*/].f_1 = UNK_0xB0BE3DFBBB59A620(joaat("PROP_TARGET_BULL_B"), vVar9, true, true, false);
	UNK_0x9F528B1B53FBC5D9(Local_140[iParam0 /*6*/].f_1, Local_140[iParam0 /*6*/], false, 0f, -0.04f, -0.41f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	Local_140[iParam0 /*6*/].f_2 = UNK_0xB0BE3DFBBB59A620(joaat("PROP_TARGET_INNER1"), vVar9, true, true, false);
	UNK_0x9F528B1B53FBC5D9(Local_140[iParam0 /*6*/].f_2, Local_140[iParam0 /*6*/], false, 0f, -0.04f, -0.41f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	Local_140[iParam0 /*6*/].f_3 = UNK_0xB0BE3DFBBB59A620(joaat("PROP_TARGET_INNER2_B"), vVar9, true, true, false);
	UNK_0x9F528B1B53FBC5D9(Local_140[iParam0 /*6*/].f_3, Local_140[iParam0 /*6*/], false, 0f, -0.04f, -0.41f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	Local_140[iParam0 /*6*/].f_4 = UNK_0xB0BE3DFBBB59A620(joaat("PROP_TARGET_INNER3_B"), vVar9, true, true, false);
	UNK_0x9F528B1B53FBC5D9(Local_140[iParam0 /*6*/].f_4, Local_140[iParam0 /*6*/], false, 0f, -0.04f, -0.41f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	Local_140[iParam0 /*6*/].f_5 = UNK_0xB0BE3DFBBB59A620(joaat("PROP_TARGET_ARM_B"), vVar9, true, true, false);
	UNK_0x9F528B1B53FBC5D9(Local_140[iParam0 /*6*/], Local_140[iParam0 /*6*/].f_5, false, 0f, 0.007f, -0.76f, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1);
	if (iLocal_138 == 0)
	{
		UNK_0xC023D1C4BF532815(Local_140[iParam0 /*6*/].f_5, 0f, 0f, 160f, 2, 1);
	}
	else
	{
		UNK_0xC023D1C4BF532815(Local_140[iParam0 /*6*/].f_5, 0f, 0f, 359f, 2, 1);
	}
	UNK_0x1E9649458B15960F(Local_140[iParam0 /*6*/].f_5, true);
	UNK_0xE121AE1BBF90E186(Local_140[iParam0 /*6*/], true);
	UNK_0xE121AE1BBF90E186(Local_140[iParam0 /*6*/].f_1, true);
	UNK_0xE121AE1BBF90E186(Local_140[iParam0 /*6*/].f_2, true);
	UNK_0xE121AE1BBF90E186(Local_140[iParam0 /*6*/].f_3, true);
	UNK_0xE121AE1BBF90E186(Local_140[iParam0 /*6*/].f_4, true);
	UNK_0xE121AE1BBF90E186(Local_140[iParam0 /*6*/].f_5, true);
}

void func_87(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = UNK_0x7707E48765093646(joaat("PROP_EAR_DEFENDERS_01"), UNK_0x68F4C0EC296D3901(bParam0, true), true, true, false);
	UNK_0x9F528B1B53FBC5D9(*uParam1, bParam0, UNK_0x4A089F2B762B8D33(bParam0, 31086), 0.111f, 0f, 0f, 0f, 90f, 0f, 0, 0, 0, 0, 2, 1);
	*uParam2 = UNK_0x7707E48765093646(joaat("PROP_SAFETY_GLASSES"), UNK_0x68F4C0EC296D3901(bParam0, true), true, true, false);
	UNK_0x9F528B1B53FBC5D9(*uParam2, bParam0, UNK_0x4A089F2B762B8D33(bParam0, 31086), 0.059f, 0.067f, 0f, 180f, 90f, 0f, 0, 0, 0, 0, 2, 1);
}

int func_88()
{
	if (bLocal_133)
	{
		return func_89();
	}
	return 1;
}

int func_89()
{
	bLocal_120 = joaat("G_M_M_CHIGOON_02");
	bLocal_121 = joaat("G_M_M_CHIGOON_02");
	bLocal_122 = joaat("G_M_M_CHIGOON_02");
	UNK_0x523BCC9DC80CD82F(bLocal_120);
	if (!UNK_0xB87F6CF6E5628C67(bLocal_120))
	{
		return 0;
	}
	UNK_0x523BCC9DC80CD82F(bLocal_121);
	if (!UNK_0xB87F6CF6E5628C67(bLocal_121))
	{
		return 0;
	}
	UNK_0x523BCC9DC80CD82F(bLocal_122);
	if (!UNK_0xB87F6CF6E5628C67(bLocal_122))
	{
		return 0;
	}
	UNK_0x523BCC9DC80CD82F(joaat("PROP_EAR_DEFENDERS_01"));
	if (!UNK_0xB87F6CF6E5628C67(joaat("PROP_EAR_DEFENDERS_01")))
	{
		return 0;
	}
	UNK_0x523BCC9DC80CD82F(joaat("PROP_SAFETY_GLASSES"));
	if (!UNK_0xB87F6CF6E5628C67(joaat("PROP_SAFETY_GLASSES")))
	{
		return 0;
	}
	UNK_0x523BCC9DC80CD82F(joaat("PROP_TARGET_ARM_B"));
	if (!UNK_0xB87F6CF6E5628C67(joaat("PROP_TARGET_ARM_B")))
	{
		return 0;
	}
	UNK_0x523BCC9DC80CD82F(joaat("PROP_TARGET_BACKBOARD_B"));
	if (!UNK_0xB87F6CF6E5628C67(joaat("PROP_TARGET_BACKBOARD_B")))
	{
		return 0;
	}
	UNK_0x523BCC9DC80CD82F(joaat("PROP_TARGET_BULL_B"));
	if (!UNK_0xB87F6CF6E5628C67(joaat("PROP_TARGET_BULL_B")))
	{
		return 0;
	}
	UNK_0x523BCC9DC80CD82F(joaat("PROP_TARGET_INNER1"));
	if (!UNK_0xB87F6CF6E5628C67(joaat("PROP_TARGET_INNER1")))
	{
		return 0;
	}
	UNK_0x523BCC9DC80CD82F(joaat("PROP_TARGET_INNER2_B"));
	if (!UNK_0xB87F6CF6E5628C67(joaat("PROP_TARGET_INNER2_B")))
	{
		return 0;
	}
	UNK_0x523BCC9DC80CD82F(joaat("PROP_TARGET_INNER3_B"));
	if (!UNK_0xB87F6CF6E5628C67(joaat("PROP_TARGET_INNER3_B")))
	{
		return 0;
	}
	return 1;
}

void func_90()
{
	if (bLocal_133)
	{
		func_89();
	}
}

void func_91(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_92(int iParam0, bool bParam1, bool bParam2)
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

bool func_93()
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

bool func_94()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_95(int iParam0, bool bParam1)
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

int func_96(int iParam0)
{
	return func_97(iParam0, Global_41431);
}

int func_97(int iParam0, int iParam1)
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

bool func_98(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_99()
{
	StringCopy(&cLocal_53, "range_modern", 64);
	bLocal_101 = "PLAY_RANGE";
	bLocal_117 = 2f;
	fLocal_102 = (SYSTEM::TO_FLOAT(func_101(91)) + 5f);
	bLocal_99 = 11;
	if (func_95(0, bLocal_99))
	{
		func_92(91, 1, 0);
		func_92(92, 1, 0);
		bLocal_133 = true;
	}
	else
	{
		bLocal_133 = false;
	}
	if (SYSTEM::VDIST(6.594f, -1100.162f, 28.797f, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false)) < 50f)
	{
		iLocal_138 = 0;
		if (!func_100(28))
		{
			bLocal_133 = false;
		}
	}
	else
	{
		iLocal_138 = 1;
		if (!func_100(38))
		{
			bLocal_133 = false;
		}
	}
	bLocal_119 = 14;
	iLocal_97 = 35000;
}

bool func_100(int iParam0)
{
	return func_41(iParam0, 0, 1);
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
	}
	return -1;
}

void func_102(var uParam0, int iParam1)
{
	func_103(uParam0, iParam1);
}

void func_103(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_104(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_92(iLocal_105, 0, 0);
		}
	}
	func_49(&iLocal_96);
	if (func_98(uLocal_94, 2048))
	{
		if (func_107(bLocal_101, bLocal_119))
		{
			func_102(&uLocal_94, 2048);
			UNK_0xA37A90C62806D848(0);
		}
	}
	if (func_98(uLocal_94, 2))
	{
		func_4();
		func_102(&uLocal_94, 2);
		func_6(&iLocal_98);
	}
	iLocal_98 = -1;
	func_105();
	UNK_0x10FAF14A60A0DBE1();
}

void func_105()
{
	func_102(&uLocal_94, 4);
	func_106();
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

void func_106()
{
}

bool func_107(bool bParam0, bool bParam1)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	return UNK_0xE3789B9938DCEAE8(0);
}

