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
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	vector3 vLocal_87 = { 0f, 0f, 0f };
	vector3 vLocal_90 = { 0f, 0f, 0f };
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	char* sLocal_101 = NULL;
	float fLocal_102 = 0f;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	float fLocal_110 = 0f;
	vector3 vLocal_111 = { 0f, 0f, 0f };
	vector3 vLocal_114 = { 0f, 0f, 0f };
	float fLocal_117 = 0f;
	int iLocal_118 = 0;
	struct<13> Local_119 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_132 = false;
	bool bLocal_133 = false;
	vector3 vLocal_134 = { 0f, 0f, 0f };
	vector3 vLocal_137 = { 0f, 0f, 0f };
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	bool bLocal_146 = false;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	struct<7> Local_149 = { 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	bool bLocal_159 = false;
	bool bLocal_160 = false;
	bool bLocal_161 = false;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	struct<18> Var0;
	bool bVar23;
	float fVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;

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
	iLocal_99 = -1;
	sLocal_101 = "CC_SUBSTR";
	fLocal_102 = 125f;
	iLocal_103 = 1;
	iLocal_105 = 263;
	fLocal_117 = 4f;
	bLocal_132 = true;
	bLocal_146 = true;
	iLocal_147 = -1;
	Var0.f_1 = 5;
	Var0.f_17 = 5;
	if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_0))
	{
		vLocal_90 = { ENTITY::GET_ENTITY_COORDS(iScriptParam_0, true) };
		iLocal_156 = iScriptParam_0;
		Var0.f_1[0 /*3*/] = { vLocal_90 };
		iLocal_118 = ENTITY::GET_ENTITY_MODEL(iLocal_156);
	}
	else
	{
		iLocal_156 = iScriptParam_0;
		Var0.f_1[0 /*3*/] = { vLocal_90 };
	}
	uLocal_86 = uLocal_86;
	Local_69 = { Local_69 };
	bVar23 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_119(1);
	}
	iLocal_85 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_95 = 0;
	func_117(&Global_110289, 0);
	func_116();
	if (func_115(uLocal_94, 1))
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
	if (!func_115(uLocal_94, 8))
	{
		if (!func_113(iLocal_100))
		{
			if (func_112(0, iLocal_99))
			{
				func_119(0);
			}
			else
			{
				func_119(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_112(0, iLocal_99))
		{
			func_119(1);
		}
	}
	if (func_115(uLocal_94, 8388608))
	{
		func_119(1);
	}
	if (func_115(uLocal_94, 524288) && (func_111() && !func_110()))
	{
		func_119(1);
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_115(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_109(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_108(10);
	}
	while (true)
	{
		if (!func_115(uLocal_94, 268435456))
		{
			fVar24 = 0f;
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0.f_1[0 /*3*/], &fVar24, false, false))
			{
				if (fVar24 != 0f)
				{
					Var0.f_1[0 /*3*/].f_2 = fVar24;
					func_107(&uLocal_94, 268435456);
				}
			}
		}
		iLocal_85 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (func_115(uLocal_94, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_85, false))
			{
				func_119(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_85) && !ENTITY::IS_ENTITY_DEAD(iLocal_85, false))
		{
			vLocal_87 = { ENTITY::GET_ENTITY_COORDS(iLocal_85, true) };
			fLocal_93 = SYSTEM::VDIST2(vLocal_87, Var0.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			vLocal_111 = { vLocal_87 };
			vLocal_114 = { Var0.f_1[0 /*3*/] };
			vLocal_111.f_2 = 0f;
			vLocal_114.f_2 = 0f;
			fLocal_110 = SYSTEM::VDIST2(vLocal_111, vLocal_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_113(iLocal_100) || (func_115(uLocal_94, 16) && !func_115(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_106();
						func_108(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_109(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_108(10);
						}
						if ((vLocal_87.z - Var0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				case 1:
					if (func_105())
					{
						iLocal_103 = iLocal_103;
						func_108(3);
					}
					else
					{
						func_106();
					}
					break;
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_119(1);
						return;
					}
					if (!func_113(iLocal_100))
					{
						if (!func_115(uLocal_94, 8))
						{
							bVar25 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_98744.f_3), &Local_69))
							{
								Local_69 = { cLocal_53 };
								bVar25 = false;
							}
							if (bVar25)
							{
								func_119(0);
							}
							else
							{
								if (!func_115(uLocal_94, 4))
								{
									func_102();
									func_107(&uLocal_94, 4);
								}
								if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_98778)
								{
									if (iLocal_105 != 263)
									{
										if (func_101(6) && !func_100(iLocal_105))
										{
										}
										else
										{
											func_109(iLocal_105, 1, 0);
											iLocal_105 = 263;
										}
									}
									func_108(10);
								}
								else
								{
									Local_69 = { cLocal_53 };
									bVar26 = !func_115(uLocal_94, 64);
									func_117(&uLocal_94, 128);
									if (!func_99(3) && !Global_98778)
									{
										if (func_115(uLocal_94, 2097152))
										{
											if ((!func_115(uLocal_94, 1) || !ENTITY::DOES_ENTITY_EXIST(func_98())) && !Global_98778)
											{
												func_108(10);
											}
											else
											{
												if (func_115(uLocal_94, 524288) && (func_111() && !func_110()))
												{
													func_119(1);
												}
												if (func_97())
												{
													func_119(1);
												}
												if ((!func_89(6) || Global_110685) || func_88())
												{
													bVar26 = false;
												}
												if (func_115(uLocal_94, 1))
												{
													if (!func_87())
													{
														func_85(&uLocal_94, 128);
														bVar26 = false;
													}
												}
												if (func_84(1))
												{
													bVar26 = false;
												}
												if (Global_76622)
												{
													bVar26 = false;
												}
												if (func_83())
												{
													bVar26 = false;
												}
												if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
												{
													bVar26 = false;
												}
												if (func_82() || func_81(8, -1))
												{
													bVar26 = false;
												}
												if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
												{
													bVar26 = false;
												}
												if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
												{
													bVar26 = false;
												}
												if (func_80(0) || func_79())
												{
													bVar26 = false;
												}
												if (bVar26)
												{
													if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_85, Var0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, false, true, iLocal_103))
													{
														bVar26 = false;
													}
													if (ENTITY::IS_ENTITY_DEAD(iLocal_156, false))
													{
														iLocal_156 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vLocal_90, 2f, iLocal_118, true, false, true);
														func_85(&uLocal_94, 128);
														bVar26 = false;
													}
													else
													{
														vLocal_137 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_156, vLocal_134) };
														if (func_78(&Local_119, vLocal_87, vLocal_137, iLocal_156))
														{
															bLocal_132 = false;
														}
														else if (Local_119.f_12 == 1)
														{
															bLocal_132 = true;
														}
														if (bLocal_132)
														{
															bVar26 = false;
														}
													}
													if (!bLocal_133)
													{
														bVar26 = false;
													}
													if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != iLocal_140)
													{
														bVar26 = false;
													}
													if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
													{
														bVar26 = false;
													}
													if (bVar26)
													{
														PAD::SET_INPUT_EXCLUSIVE(0, 51);
														if (func_77(uLocal_86))
														{
															if (iLocal_96 == -1)
															{
																func_76(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
																func_85(&uLocal_94, 2048);
															}
															else if (!func_115(uLocal_94, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
															{
																func_75(&iLocal_96);
																func_117(&uLocal_94, 2048);
															}
															if (func_73(iLocal_96, 1))
															{
																sLocal_101 = sLocal_101;
																func_75(&iLocal_96);
																func_117(&uLocal_94, 2048);
																SCRIPT::REQUEST_SCRIPT(&Local_69);
																PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
																func_108(5);
															}
														}
														else
														{
															sLocal_101 = sLocal_101;
															func_75(&iLocal_96);
															func_117(&uLocal_94, 2048);
															SCRIPT::REQUEST_SCRIPT(&Local_69);
															PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
															func_108(5);
														}
													}
												}
												if (!bVar26)
												{
													if (iLocal_96 != -1)
													{
														func_75(&iLocal_96);
														func_117(&uLocal_94, 2048);
														HUD::CLEAR_HELP(false);
													}
												}
												func_37();
												Jump @2765; //curOff = 1850
												PAD::SET_INPUT_EXCLUSIVE(0, 51);
												if (SCRIPT::HAS_SCRIPT_LOADED(&Local_69))
												{
													if (iLocal_96 != -1)
													{
														func_75(&iLocal_96);
													}
													iVar27 = 2;
													bVar23 = false;
													if (func_115(uLocal_94, 1))
													{
														if (func_101(6) || func_101(7))
														{
															iVar27 = 1;
															bVar23 = true;
														}
													}
													if (iVar27 != 1)
													{
														iVar27 = func_34(&iLocal_98, 6, iLocal_100, 0, 0);
													}
													if (iVar27 == 1)
													{
														if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
														{
															PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
														}
														func_33();
														if (Global_42596)
														{
															func_24(PLAYER::PLAYER_PED_ID());
														}
														PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 56);
														iLocal_52 = func_23();
														func_85(&uLocal_94, 2);
														func_108(6);
														func_19(&iLocal_107);
														if (iLocal_99 != -1)
														{
															func_18(iLocal_99);
															func_15(func_17(iLocal_99), 0, 0);
														}
													}
													else if (iVar27 == 2)
													{
														func_14();
													}
													else if (iVar27 == 0)
													{
														func_108(10);
													}
												}
												else
												{
													func_14();
												}
												Jump @2765; //curOff = 2078
												if (func_115(Global_110289, 262144))
												{
													func_117(&Global_110289, 262144);
													func_13();
												}
												if (func_115(uLocal_94, 2097152))
												{
													if (!func_99(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_52))
													{
														func_108(10);
													}
												}
												if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_52))
												{
													STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_9(&iLocal_107) * 1000f)), iLocal_99, 0);
													func_8(&iLocal_107);
													func_117(&uLocal_94, 256);
													func_7();
													if (bVar23)
													{
														func_117(&uLocal_94, 2);
													}
													else if (func_115(uLocal_94, 2))
													{
														if (func_115(Global_110289, 0))
														{
															func_6(&iLocal_98);
															iLocal_98 = -1;
															func_117(&uLocal_94, 2);
														}
														else
														{
															func_6(&iLocal_98);
															iLocal_98 = -1;
															func_117(&uLocal_94, 2);
														}
													}
													func_108(0);
													if (iLocal_99 != -1)
													{
														if (func_115(Global_110289, 0))
														{
															STATS::PLAYSTATS_MISSION_CHECKPOINT(func_17(iLocal_99), 0, Global_98781, 0);
															func_5(func_17(iLocal_99), 0, Global_98781, 1, 0);
														}
														else
														{
															STATS::PLAYSTATS_MISSION_CHECKPOINT(func_17(iLocal_99), 0, Global_98781, 0);
															func_5(func_17(iLocal_99), 0, Global_98781, 0, 0);
														}
													}
													func_4();
													func_117(&Global_110289, 0);
													if (func_115(uLocal_94, 16777216))
													{
														func_119(1);
													}
													if (iLocal_99 != -1)
													{
														if (Global_111638.f_9080)
														{
															if (!func_112(0, iLocal_99))
															{
																func_119(1);
															}
														}
													}
												}
												func_3();
												Jump @2765; //curOff = 2437
												func_108(0);
												Jump @2765; //curOff = 2445
												func_119(1);
												Jump @2765; //curOff = 2453
												if (fLocal_110 > (fLocal_102 * fLocal_102))
												{
													if (iLocal_105 != 263)
													{
														func_109(iLocal_105, 1, 0);
														iLocal_105 = 263;
													}
													func_108(10);
												}
												Jump @2765; //curOff = 2494
												func_2();
												if (iLocal_105 != 263)
												{
													func_109(iLocal_105, 0, 0);
												}
												if (iLocal_96 != -1)
												{
													func_75(&iLocal_96);
												}
												if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_101))
												{
													if (func_1(sLocal_101))
													{
														HUD::CLEAR_HELP(true);
													}
												}
												func_108(4);
												Jump @2765; //curOff = 2558
												if ((iLocal_104 % 150) == 0)
												{
													if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
													{
														if (iLocal_106 == 2)
														{
															if (iLocal_106 == 2)
															{
																if (func_113(iLocal_100) && func_112(0, iLocal_99))
																{
																	func_116();
																	if (iLocal_105 != 263)
																	{
																		func_109(iLocal_105, 1, 0);
																	}
																	func_108(0);
																}
															}
														}
														else if (iLocal_106 == 0)
														{
															if (fLocal_110 > (fLocal_102 * fLocal_102))
															{
																if (iLocal_105 != 263)
																{
																	func_109(iLocal_105, 1, 0);
																	iLocal_105 = 263;
																}
																func_108(10);
															}
														}
														else if (iLocal_106 == 1)
														{
															if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
															{
																func_116();
																if (iLocal_105 != 263)
																{
																	func_109(iLocal_105, 1, 0);
																}
																func_108(0);
															}
														}
													}
													else
													{
														func_109(iLocal_105, 1, 0);
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

bool func_1(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2()
{
	if (bLocal_146)
	{
		if (iLocal_141 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_141);
		}
		if (iLocal_142 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_142);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_DART_1"));
	}
}

void func_3()
{
}

void func_4()
{
}

void func_5(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_95814))
	{
		return;
	}
	if (MISC::COMPARE_STRINGS(sParam0, &Global_95814, false, -1) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, bParam3, bParam4, Global_92921);
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

	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
	}
}

void func_8(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_9(int iParam0)
{
	if (func_12(iParam0))
	{
		if (func_11(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_10(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_10(bool bParam0)
{
	float fVar0;
	float fVar1;
	void fVar2;
	float fVar3;
	float fVar4;

	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		fVar2 = NETWORK::_0xBA7F0B77D80A4EB7();
		fVar3 = SYSTEM::TO_FLOAT(fVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_11(int iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 2);
}

bool func_12(int iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 1);
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
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_95814))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_95814, 0, 0, false, true, false);
		StringCopy(&Global_95814, "", 64);
	}
	StringCopy(&Global_95814, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_16(0));
}

bool func_16(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

char* func_17(int iParam0)
{
	switch (iParam0)
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

void func_18(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];

	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

void func_19(int* iParam0)
{
	if (!func_12(iParam0))
	{
		func_22(iParam0);
	}
	else
	{
		func_20(iParam0);
	}
}

void func_20(int* iParam0)
{
	func_21(iParam0, 0f);
}

void func_21(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_10(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_22(int* iParam0)
{
	if (!func_12(iParam0))
	{
		func_20(iParam0);
	}
}

int func_23()
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_156, 2) };
	Local_149 = { ENTITY::GET_ENTITY_COORDS(iLocal_156, true) };
	Local_149.f_3 = vVar0.z;
	Local_149.f_4 = iLocal_156;
	if (!MISC::IS_BIT_SET(Global_111599, 10))
	{
		Local_149.f_6 = iLocal_142;
		Local_149.f_5 = iLocal_143;
	}
	else
	{
		Local_149.f_6 = iLocal_141;
		Local_149.f_5 = iLocal_144;
	}
	iVar3 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&cLocal_53, &Local_149, 7, iLocal_97);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_53);
	return iVar3;
}

void func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_32(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0 /*5*/];
		func_27(1, iVar1, 1);
		return;
	}
	iVar2 = func_26(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_25(iVar2);
}

void func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42357[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42357[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
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

int func_26(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_27(int iParam0, int iParam1, int iParam2)
{
	func_28(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_28(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_30(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_29();
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

int func_29()
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

bool func_30(int iParam0, int iParam1, int iParam2)
{
	if (func_31(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_31(int iParam0, int iParam1, int iParam2)
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

int func_32(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42383[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42383[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_33()
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
	MISC::CLEAR_BIT(&Global_7356, 25);
	MISC::SET_BIT(&Global_7357, 11);
}

int func_34(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_36(0))
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
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
		if (!func_113(iParam2))
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
			func_35(iParam0, iParam4);
		}
	}
	return 2;
}

void func_35(int iParam0, int iParam1)
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

bool func_36(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_113(iParam0))
	{
		return false;
	}
	return true;
}

void func_37()
{
	var uVar0[25];
	int iVar26;
	int iVar27;
	bool bVar28;
	vector3 vVar29;
	float fVar32;

	bVar28 = false;
	if (bLocal_146)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vVar29 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		fVar32 = SYSTEM::VDIST2(vVar29, vLocal_90);
		if (iLocal_147 == 0)
		{
			if (fVar32 < (10f * 10f))
			{
				iLocal_147 = 1;
				if (!func_101(6) && !func_101(7))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_143, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_143, false);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_143, iLocal_144, -1, 2049, 3);
						TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_143, "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_144, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_144, false);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_144, iLocal_143, -1, 2049, 3);
						TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_144, "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
					}
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_143, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_143, false);
						if (TASK::DOES_SCENARIO_EXIST_IN_AREA(1991.677f, 3044.957f, 46.21505f, 0.5f, true))
						{
							TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_143, 1991.677f, 3044.957f, 46.21505f, 0.5f, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_143, 1991.677f, 3044.957f, 46.21505f, 1f, 20000, 0.25f, false, 40000f);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_143);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_144, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_144, false);
						if (TASK::DOES_SCENARIO_EXIST_IN_AREA(1990.37f, 3045.121f, 46.21502f, 0.5f, true))
						{
							TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_144, 1990.37f, 3045.121f, 46.21502f, 0.5f, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_144, 1990.37f, 3045.121f, 46.21502f, 1f, 20000, 0.25f, false, 40000f);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_144);
					}
				}
			}
		}
		else if (iLocal_147 == 1)
		{
			if (fVar32 >= (10f * 10f))
			{
				iLocal_147 = 0;
				if (!func_101(6) && !func_101(7))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_143, false))
					{
						TASK::TASK_STAND_STILL(iLocal_143, -1);
						if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_143))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_143, true);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_144, false))
					{
						TASK::TASK_STAND_STILL(iLocal_144, -1);
						if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_144))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_144, true);
						}
					}
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_143, false))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_143, 1991.677f, 3044.957f, 46.21505f, true, false, false, true);
						TASK::TASK_STAND_STILL(iLocal_143, -1);
						if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_143))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_143, true);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_144, false))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_144, 1990.37f, 3045.121f, 46.21502f, true, false, false, true);
						TASK::TASK_STAND_STILL(iLocal_144, -1);
						if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_144))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_144, true);
						}
					}
				}
			}
		}
	}
	if (!bLocal_159)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0)) || PED::IS_ANY_PED_SHOOTING_IN_AREA(937.0616f, -117.8927f, 72.9163f, 1021.849f, -120.5357f, 72.9163f, true, true)) || MISC::IS_PROJECTILE_IN_AREA(1991.473f, 3045.98f, 49.532f, 1996.906f, 3052.17f, 46.3392f, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_143, false))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_143, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_144, false))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_144, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				}
				bVar28 = true;
			}
			else
			{
				iVar26 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
				iVar27 = 0;
				while (iVar27 < iVar26)
				{
					if (!PED::IS_PED_INJURED(uVar0[iVar27]))
					{
						if (PED::IS_PED_IN_MELEE_COMBAT(uVar0[iVar27]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uVar0[iVar27]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_143, false))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_143, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_144, false))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_144, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
							}
							bVar28 = true;
						}
					}
					iVar27++;
				}
			}
		}
		if (!func_101(6) && !func_101(7))
		{
			if (!PED::IS_PED_INJURED(iLocal_143) && !PED::IS_PED_INJURED(iLocal_144))
			{
				if (PED::IS_PED_FLEEING(iLocal_143) || PED::IS_PED_FLEEING(iLocal_144))
				{
					bVar28 = true;
				}
			}
			else
			{
				bVar28 = true;
			}
		}
		if (bVar28)
		{
			if (func_100(func_70()))
			{
				bLocal_159 = true;
				func_69(0);
			}
			if (bLocal_161)
			{
				STREAMING::REMOVE_ANIM_DICT("mini@dartsintro");
				STREAMING::REMOVE_ANIM_DICT("mini@dartsintro_alt1");
				bLocal_161 = false;
				bLocal_133 = false;
			}
		}
	}
	if (iLocal_148 == 1)
	{
		if (!INTERIOR::IS_VALID_INTERIOR(iLocal_157))
		{
			iLocal_157 = INTERIOR::GET_INTERIOR_AT_COORDS(-573.3155f, 291.2963f, 79.5509f);
		}
		else if (iLocal_157 == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
		{
			func_38(140, 3);
			func_38(139, 3);
			if (!PED::IS_PED_INJURED(iLocal_143) && !PED::IS_PED_INJURED(iLocal_144))
			{
				if (bLocal_160)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_143, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_144, false);
					bLocal_160 = false;
				}
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_143) && !PED::IS_PED_INJURED(iLocal_144))
		{
			if (!bLocal_160)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_143, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_144, true);
				bLocal_160 = true;
			}
		}
	}
	else if (iLocal_148 == 2)
	{
		if (!INTERIOR::IS_VALID_INTERIOR(iLocal_158))
		{
			iLocal_158 = INTERIOR::GET_INTERIOR_AT_COORDS(1995.614f, 3049.877f, 46.2153f);
		}
		else if (iLocal_158 == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(iLocal_143) && !PED::IS_PED_INJURED(iLocal_144))
			{
				if (bLocal_160)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_143, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_144, false);
					bLocal_160 = false;
				}
			}
			if (!bLocal_161)
			{
				STREAMING::REQUEST_ANIM_DICT("mini@dartsintro");
				STREAMING::REQUEST_ANIM_DICT("mini@dartsintro_alt1");
				bLocal_161 = true;
			}
			if (bLocal_161)
			{
				if (!bLocal_133)
				{
					if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@dartsintro") || !STREAMING::HAS_ANIM_DICT_LOADED("mini@dartsintro_alt1"))
					{
					}
					else
					{
						bLocal_133 = true;
					}
				}
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_143) && !PED::IS_PED_INJURED(iLocal_144))
			{
				if (!bLocal_160)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_143, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_144, true);
					bLocal_160 = true;
				}
			}
			if (bLocal_161)
			{
				STREAMING::REMOVE_ANIM_DICT("mini@dartsintro");
				STREAMING::REMOVE_ANIM_DICT("mini@dartsintro_alt1");
				bLocal_161 = false;
				bLocal_133 = false;
			}
		}
	}
}

void func_38(int iParam0, int iParam1)
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
		if (iVar0 != iParam1 || MISC::IS_BIT_SET(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				MISC::SET_BIT(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
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
			MISC::SET_BIT(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
			func_40(iParam0);
			if (MISC::IS_BIT_SET(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_39(iParam0);
			}
		}
	}
}

void func_39(int iParam0)
{
	if (!MISC::IS_BIT_SET(Global_38161.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		MISC::SET_BIT(&(Global_38161.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_38161[Global_38161.f_227] = iParam0;
		Global_38161.f_227++;
	}
}

void func_40(int iParam0)
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

	if (!func_66())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { func_65(iParam0) };
	if (MISC::IS_BIT_SET(Var0.f_4, 2))
	{
		func_51(iParam0, &Var0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
	if ((MISC::IS_BIT_SET(Global_37227[(iParam0 / 32)], (iParam0 % 32)) && Global_37690[iParam0] == 2) && fVar10 > 210f)
	{
		MISC::CLEAR_BIT(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
		Global_37236[iParam0] = 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("STARTUP_POSITIONING")) == 0)
	{
		if (MISC::IS_BIT_SET(Global_37463[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_98796.f_343 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						Global_98796.f_343 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar11 = Global_98796.f_343;
				iVar12 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					MISC::SET_BIT(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
					Global_37690[iParam0] = 3;
					MISC::SET_BIT(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			MISC::CLEAR_BIT(&(Global_37463[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (MISC::IS_BIT_SET(Global_37227[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_37690[iParam0];
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 0))
	{
		if (Global_111638.f_9080)
		{
			iVar9 = func_48(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_101(14))
		{
			iVar9 = 0;
		}
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 1) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("AMBIENT_SOLOMON")) == 0)
	{
		if (func_41())
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
	if (MISC::IS_BIT_SET(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!MISC::IS_BIT_SET(Global_37227[(iParam0 / 32)], (iParam0 % 32)) || (Global_37236[iParam0] == 0 && Global_37690[iParam0] != 2))
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
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, false, false, false);
			}
			switch (iVar9)
			{
				case 1:
					if (MISC::IS_BIT_SET(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <= 0.015f)
					{
						iVar14 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar15 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
						}
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
						bVar8 = true;
					}
					break;
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, true);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, false, true);
					bVar8 = true;
					break;
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
			}
		}
		if (bVar8)
		{
			MISC::CLEAR_BIT(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
			Global_37917[iParam0] = iVar9;
		}
	}
	if (MISC::IS_BIT_SET(Global_37227[(iParam0 / 32)], (iParam0 % 32)) && Global_37690[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
		func_39(iParam0);
		if (Global_37236[iParam0] < 2)
		{
			Global_37236[iParam0]++;
		}
	}
}

bool func_41()
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return false;
	}
	switch (func_42())
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

int func_42()
{
	func_43();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_43()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_46(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_45(PLAYER::PLAYER_PED_ID());
			if (func_44(iVar0) && (!func_101(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_44(Global_111638.f_2358.f_539.f_4321))
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

bool func_44(int iParam0)
{
	return iParam0 < 3;
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_46(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_46(int iParam0)
{
	if (func_44(iParam0))
	{
		return func_47(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_47(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_48(int iParam0)
{
	int iVar0;

	iVar0 = func_42();
	if (func_49(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (MISC::IS_BIT_SET(Global_111638.f_7224[5], 0) || MISC::IS_BIT_SET(Global_111638.f_7224[6], 0))
			{
				return 0;
			}
		}
		if (func_44(iVar0))
		{
			if (MISC::IS_BIT_SET(Global_93771[5], iVar0))
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
			if (iVar0 == 0)
			{
				if (MISC::IS_BIT_SET(Global_111638.f_7224[0], 0))
				{
					return 0;
				}
			}
			if (func_44(iVar0))
			{
				if (MISC::IS_BIT_SET(Global_93771[0], iVar0))
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
			if (iVar0 == 1)
			{
				if (MISC::IS_BIT_SET(Global_111638.f_7224[5], 0))
				{
					return 0;
				}
			}
			if (func_44(iVar0))
			{
				if (MISC::IS_BIT_SET(Global_93771[5], iVar0))
				{
					return 0;
				}
			}
			break;
		case 50:
			if (iVar0 == 1)
			{
				if (MISC::IS_BIT_SET(Global_111638.f_7224[6], 0))
				{
					return 0;
				}
			}
			if (func_44(iVar0))
			{
				if (MISC::IS_BIT_SET(Global_93771[6], iVar0))
				{
					return 0;
				}
			}
			break;
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (MISC::IS_BIT_SET(Global_111638.f_7224[2], 0))
				{
					return 0;
				}
				if (func_44(iVar0))
				{
					if (MISC::IS_BIT_SET(Global_93771[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (MISC::IS_BIT_SET(Global_111638.f_7224[1], 0))
				{
					return 0;
				}
				if (func_44(iVar0))
				{
					if (MISC::IS_BIT_SET(Global_93771[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		case 53:
			if (iVar0 == 2)
			{
				if (MISC::IS_BIT_SET(Global_111638.f_7224[3], 0))
				{
					return 0;
				}
			}
			if (func_44(iVar0))
			{
				if (MISC::IS_BIT_SET(Global_93771[3], iVar0))
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

bool func_49(int iParam0)
{
	int iVar0;

	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(func_50(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true)));
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

int func_50(int iParam0)
{
	return iParam0;
}

void func_51(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!MISC::IS_BIT_SET(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_54();
	iVar1 = func_53(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_52(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_111638.f_7256[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_52(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_111638.f_7256[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 141:
		case 142:
			if (func_52(iParam0))
			{
				if ((SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("JEWELRY_HEIST")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("JEWELRY_SETUP1")) == 0) && !Global_111638.f_9080.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_111638.f_7256[iParam0] = 0;
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
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
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (Global_111638.f_9080.f_99.f_58[4])
			{
				Global_111638.f_7256[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("JEWELRY_HEIST")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("JEWELRY_SETUP1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 18f)
					{
						Global_111638.f_7256[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
				else if (iVar1 < 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 18f)
					{
						Global_111638.f_7256[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
			}
			break;
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_52(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_111638.f_7256[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 40f)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (iVar1 < 9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 40f)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 147:
		case 148:
			if (!func_52(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_52(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ASSASSIN_VALET")) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ASSASSIN_VALET")) > 0)
			{
				Global_111638.f_7256[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 158:
		case 159:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_89532[70 /*34*/].f_6) == 0)
			{
				if (!func_52(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 160:
		case 161:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("OMEGA2")) == 0)
			{
				if (!func_52(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 70:
		case 71:
		case 72:
			if (!func_52(iParam0) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_89532[26 /*34*/].f_6) == 0)
			{
				Global_111638.f_7256[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
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
			if (!func_52(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_89532[43 /*34*/].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 190:
		case 191:
			if (!func_52(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 193:
			if (!func_52(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_89532[93 /*34*/].f_6) > 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 198:
			if (!func_52(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 80:
			if (!func_52(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_89532[8 /*34*/].f_6) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_89532[10 /*34*/].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 205:
		case 206:
			if (!func_52(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_89532[47 /*34*/].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 207:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_89532[70 /*34*/].f_6) == 0)
			{
				if (!func_52(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
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
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_89532[48 /*34*/].f_6) == 0)
			{
				if (!func_52(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 99:
		case 100:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_89532[39 /*34*/].f_6) == 0)
			{
				if (!func_52(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 216:
			if (!func_52(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 217:
		case 218:
			if (!func_52(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_52(iParam0))
			{
				Global_111638.f_7256[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
	}
}

bool func_52(int iParam0)
{
	struct<7> Var0;
	int iVar7;

	Var0 = { func_65(iParam0) };
	iVar7 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_53(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

var func_54()
{
	var uVar0;

	func_64(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_63(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_62(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_57(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_56(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_55(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_55(var uParam0, int iParam1)
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

void func_56(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_57(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_61(*uParam0);
	iVar1 = func_59(*uParam0);
	if (iParam1 < 1 || iParam1 > func_58(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_58(int iParam0, int iParam1)
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

var func_59(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_60(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_60(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_61(int iParam0)
{
	return iParam0 & 15;
}

void func_62(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_63(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_64(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

struct<7> func_65(int iParam0)
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
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		case 39:
			Var0.f_3 = joaat("V_ILEV_MM_DOORM_R");
			Var0 = { -816f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		case 40:
			Var0.f_3 = joaat("PROP_LD_GARAGED_01");
			Var0 = { -815f, 186f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		case 41:
			Var0.f_3 = joaat("PROP_BH1_48_BACKDOOR_L");
			Var0 = { -797f, 177f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		case 42:
			Var0.f_3 = joaat("PROP_BH1_48_BACKDOOR_R");
			Var0 = { -795f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		case 43:
			Var0.f_3 = joaat("PROP_BH1_48_BACKDOOR_L");
			Var0 = { -793f, 181f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		case 44:
			Var0.f_3 = joaat("PROP_BH1_48_BACKDOOR_R");
			Var0 = { -794f, 183f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		case 45:
			Var0.f_3 = joaat("PROP_BH1_48_GATE_1");
			Var0 = { -849f, 179f, 70f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		case 46:
			Var0.f_3 = joaat("V_ILEV_MM_WINDOWWC");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		case 47:
			Var0.f_3 = joaat("V_ILEV_FA_FRONTDOOR");
			Var0 = { -14f, -1441f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		case 48:
			Var0.f_3 = joaat("V_ILEV_FH_FRNTDOOR");
			Var0 = { -15f, -1427f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		case 49:
			Var0.f_3 = joaat("PROP_SC1_21_G_DOOR_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		case 50:
			Var0.f_3 = joaat("V_ILEV_FH_FRONTDOOR");
			Var0 = { 7.52f, 539.53f, 176.18f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		case 51:
			Var0.f_3 = joaat("V_ILEV_TREVTRAILDR");
			Var0 = { 1973f, 3815f, 34f };
			MISC::SET_BIT(&(Var0.f_4), 0);
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
			MISC::SET_BIT(&(Var0.f_4), 0);
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
			Jump @9611; //curOff = 3589
			Var0.f_3 = joaat("PROP_ID2_11_GDOOR");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			Jump @9611; //curOff = 3638
			Var0.f_3 = joaat("PROP_COM_LS_DOOR_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			Jump @9611; //curOff = 3687
			Var0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			Jump @9611; //curOff = 3736
			Var0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			Jump @9611; //curOff = 3785
			Var0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			Jump @9611; //curOff = 3834
			Var0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			Jump @9611; //curOff = 3883
			Var0.f_3 = joaat("LR_PROP_SUPERMOD_DOOR_01");
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			Jump @9611; //curOff = 3932
			Var0.f_3 = joaat("V_ILEV_JANITOR_FRONTDOOR");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			Jump @9611; //curOff = 3972
			Var0.f_3 = joaat("V_ILEV_SS_DOOR8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			Jump @9611; //curOff = 4012
			Var0.f_3 = joaat("V_ILEV_SS_DOOR7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			Jump @9611; //curOff = 4052
			Var0.f_3 = joaat("V_ILEV_SS_DOOR02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			Jump @9611; //curOff = 4092
			Var0.f_3 = joaat("V_ILEV_SS_DOOR03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			Jump @9611; //curOff = 4132
			Var0.f_3 = joaat("V_ILEV_STORE_DOOR");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			Jump @9611; //curOff = 4172
			Var0.f_3 = joaat("V_ILEV_ML_DOOR1");
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			Jump @9611; //curOff = 4212
			Var0.f_3 = joaat("V_ILEV_ML_DOOR1");
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			Jump @9611; //curOff = 4252
			Var0.f_3 = joaat("V_ILEV_SS_DOOR04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			Jump @9611; //curOff = 4292
			Var0.f_3 = joaat("PROP_RON_DOOR_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 4341
			Var0.f_3 = joaat("PROP_RON_DOOR_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 4390
			Var0.f_3 = joaat("PROP_RON_DOOR_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 4439
			Var0.f_3 = joaat("V_ILEV_BANK4DOOR02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			Jump @9611; //curOff = 4479
			Var0.f_3 = joaat("V_ILEV_BANK4DOOR01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			Jump @9611; //curOff = 4519
			Var0.f_3 = joaat("V_ILEV_LESTER_DOORFRONT");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			Jump @9611; //curOff = 4559
			Var0.f_3 = joaat("V_ILEV_LESTER_DOORVERANDA");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			Jump @9611; //curOff = 4599
			Var0.f_3 = joaat("V_ILEV_LESTER_DOORVERANDA");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			Jump @9611; //curOff = 4639
			Var0.f_3 = joaat("V_ILEV_DEVIANTFRONTDOOR");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			Jump @9611; //curOff = 4679
			Var0.f_3 = joaat("PROP_COM_GAR_DOOR_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			Jump @9611; //curOff = 4719
			Var0.f_3 = joaat("V_ILEV_CS_DOOR");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 4768
			Var0.f_3 = joaat("PROP_STRIP_DOOR_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			Jump @9611; //curOff = 4808
			Var0.f_3 = joaat("PROP_MAGENTA_DOOR");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			Jump @9611; //curOff = 4848
			Var0.f_3 = joaat("PROP_MOTEL_DOOR_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			Jump @9611; //curOff = 4888
			Var0.f_3 = joaat("V_ILEV_GANGSAFEDOOR");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			MISC::SET_BIT(&(Var0.f_4), 3);
			Jump @9611; //curOff = 4937
			Var0.f_3 = joaat("V_ILEV_GANGSAFEDOOR");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			MISC::SET_BIT(&(Var0.f_4), 3);
			Jump @9611; //curOff = 4986
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_L");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			Jump @9611; //curOff = 5026
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_R");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			Jump @9611; //curOff = 5066
			Var0.f_3 = joaat("PROP_CS6_03_DOOR_L");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			Jump @9611; //curOff = 5106
			Var0.f_3 = joaat("PROP_CS6_03_DOOR_R");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			Jump @9611; //curOff = 5146
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_L");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			Jump @9611; //curOff = 5186
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_R");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			Jump @9611; //curOff = 5226
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_L");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			Jump @9611; //curOff = 5266
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_R");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			Jump @9611; //curOff = 5306
			Var0.f_3 = joaat("PROP_GAR_DOOR_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			Jump @9611; //curOff = 5342
			Var0.f_3 = joaat("PROP_GAR_DOOR_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			Jump @9611; //curOff = 5378
			Var0.f_3 = joaat("PROP_MAP_DOOR_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			Jump @9611; //curOff = 5418
			Var0.f_3 = joaat("V_ILEV_FIB_DOOR1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			Jump @9611; //curOff = 5458
			Var0.f_3 = joaat("V_ILEV_TORT_DOOR");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			Jump @9611; //curOff = 5498
			Var0.f_3 = joaat("V_ILEV_BL_SHUTTER2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 5547
			Var0.f_3 = joaat("V_ILEV_BL_SHUTTER2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 5596
			Var0.f_3 = joaat("V_ILEV_RC_DOOR3_L");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 5645
			Var0.f_3 = joaat("V_ILEV_RC_DOOR3_R");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 5694
			Var0.f_3 = joaat("V_ILEV_RC_DOOR3_L");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 5743
			Var0.f_3 = joaat("V_ILEV_RC_DOOR3_R");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 5792
			Var0.f_3 = joaat("V_ILEV_SS_DOOR04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			Jump @9611; //curOff = 5832
			Var0.f_3 = joaat("V_ILEV_FH_DOOR4");
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			Jump @9611; //curOff = 5872
			Var0.f_3 = joaat("PROP_EPSILON_DOOR_L");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			Jump @9611; //curOff = 5912
			Var0.f_3 = joaat("PROP_EPSILON_DOOR_R");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			Jump @9611; //curOff = 5952
			Var0.f_3 = joaat("V_ILEV_EPSSTOREDOOR");
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			Jump @9611; //curOff = 5992
			Var0.f_3 = joaat("PROP_CH2_09C_GARAGE_DOOR");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			Jump @9611; //curOff = 6032
			Var0.f_3 = joaat("V_ILEV_DOOR_ORANGESOLID");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			Jump @9611; //curOff = 6072
			Var0.f_3 = joaat("PROP_MAGENTA_DOOR");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			Jump @9611; //curOff = 6112
			Var0.f_3 = joaat("PROP_CS4_05_TDOOR");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			Jump @9611; //curOff = 6152
			Var0.f_3 = joaat("V_ILEV_HOUSEDOOR1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			Jump @9611; //curOff = 6192
			Var0.f_3 = joaat("V_ILEV_FH_FRNTDOOR");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			Jump @9611; //curOff = 6228
			Var0.f_3 = joaat("P_CUT_DOOR_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			Jump @9611; //curOff = 6268
			Var0.f_3 = joaat("P_CUT_DOOR_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			Jump @9611; //curOff = 6308
			Var0.f_3 = joaat("V_ILEV_PO_DOOR");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			Jump @9611; //curOff = 6348
			Var0.f_3 = joaat("PROP_SS1_10_DOOR_L");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			Jump @9611; //curOff = 6388
			Var0.f_3 = joaat("PROP_SS1_10_DOOR_R");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			Jump @9611; //curOff = 6428
			Var0.f_3 = joaat("V_ILEV_FIBL_DOOR02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			Jump @9611; //curOff = 6468
			Var0.f_3 = joaat("V_ILEV_FIBL_DOOR01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			Jump @9611; //curOff = 6508
			Var0.f_3 = joaat("V_ILEV_CT_DOOR01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			Jump @9611; //curOff = 6548
			Var0.f_3 = joaat("V_ILEV_CT_DOOR01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			Jump @9611; //curOff = 6588
			Var0.f_3 = joaat("AP1_02_DOOR_L");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			Jump @9611; //curOff = 6628
			Var0.f_3 = joaat("AP1_02_DOOR_R");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			Jump @9611; //curOff = 6668
			Var0.f_3 = joaat("V_ILEV_FB_DOORSHORTL");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			Jump @9611; //curOff = 6708
			Var0.f_3 = joaat("V_ILEV_FB_DOORSHORTR");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			Jump @9611; //curOff = 6748
			Var0.f_3 = joaat("V_ILEV_FB_DOOR01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			Jump @9611; //curOff = 6788
			Var0.f_3 = joaat("V_ILEV_FB_DOOR02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			Jump @9611; //curOff = 6828
			Var0.f_3 = joaat("V_ILEV_GTDOOR");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			Jump @9611; //curOff = 6868
			Var0.f_3 = joaat("PROP_DAMDOOR_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = -884051216;
			Jump @9611; //curOff = 6908
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 6957
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 7006
			Var0.f_3 = joaat("PROP_SEC_BARRIER_LD_01A");
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			MISC::SET_BIT(&(Var0.f_4), 1);
			Jump @9611; //curOff = 7055
			Var0.f_3 = joaat("PROP_SEC_BARRIER_LD_01A");
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			MISC::SET_BIT(&(Var0.f_4), 1);
			Jump @9611; //curOff = 7104
			Var0.f_3 = joaat("PROP_SEC_BARRIER_LD_02A");
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			MISC::SET_BIT(&(Var0.f_4), 1);
			Jump @9611; //curOff = 7153
			Var0.f_3 = joaat("PROP_SEC_BARRIER_LD_02A");
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			MISC::SET_BIT(&(Var0.f_4), 1);
			Jump @9611; //curOff = 7202
			Var0.f_3 = joaat("V_ILEV_ROC_DOOR4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			Jump @9611; //curOff = 7242
			Var0.f_3 = joaat("V_ILEV_ROC_DOOR4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			Jump @9611; //curOff = 7282
			Var0.f_3 = joaat("P_JEWEL_DOOR_L");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 7331
			Var0.f_3 = joaat("P_JEWEL_DOOR_R1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 7379
			Var0.f_3 = joaat("PROP_LD_BANKDOORS_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 7428
			Var0.f_3 = joaat("PROP_LD_BANKDOORS_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 7477
			Var0.f_3 = joaat("HEI_PROP_HEI_BANKDOOR_NEW");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 7526
			Var0.f_3 = joaat("HEI_PROP_HEI_BANKDOOR_NEW");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 7575
			Var0.f_3 = joaat("HEI_V_ILEV_BK_GATE_PRIS");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 7624
			Var0.f_3 = joaat("V_ILEV_BK_DOOR");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 7673
			Var0.f_3 = joaat("V_ILEV_SHRF2DOOR");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = -588495243;
			Jump @9611; //curOff = 7713
			Var0.f_3 = joaat("V_ILEV_SHRF2DOOR");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			Jump @9611; //curOff = 7753
			Var0.f_3 = joaat("V_ILEV_SHRFDOOR");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			Jump @9611; //curOff = 7793
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_L");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 7842
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_R");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 7891
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_L");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 7940
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_R");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 7989
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_L");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 8038
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_R");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 8087
			Var0.f_3 = joaat("PROP_CH3_04_DOOR_01L");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 8136
			Var0.f_3 = joaat("PROP_CH3_04_DOOR_01R");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 8185
			Var0.f_3 = joaat("PROP_CH3_01_TRLRDOOR_L");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 8234
			Var0.f_3 = joaat("PROP_CH3_01_TRLRDOOR_R");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 8283
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			Jump @9611; //curOff = 8323
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = -2119023917;
			Jump @9611; //curOff = 8363
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = -1488490473;
			Jump @9611; //curOff = 8403
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = -511187813;
			Jump @9611; //curOff = 8443
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			Jump @9611; //curOff = 8483
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			Jump @9611; //curOff = 8523
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			Jump @9611; //curOff = 8563
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			Jump @9611; //curOff = 8603
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			Jump @9611; //curOff = 8643
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			Jump @9611; //curOff = 8683
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			Jump @9611; //curOff = 8723
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			Jump @9611; //curOff = 8763
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			Jump @9611; //curOff = 8803
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			Jump @9611; //curOff = 8843
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			Jump @9611; //curOff = 8883
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = -1796714665;
			Jump @9611; //curOff = 8923
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = -1155247245;
			Jump @9611; //curOff = 8963
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			Jump @9611; //curOff = 9003
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			Jump @9611; //curOff = 9043
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			Jump @9611; //curOff = 9083
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			Jump @9611; //curOff = 9123
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = -2119023917;
			Jump @9611; //curOff = 9163
			Var0.f_3 = joaat("V_ILEV_GC_DOOR01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			MISC::SET_BIT(&(Var0.f_4), 3);
			Jump @9611; //curOff = 9212
			Var0.f_3 = joaat("V_ILEV_GC_DOOR01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			MISC::SET_BIT(&(Var0.f_4), 3);
			Jump @9611; //curOff = 9261
			Var0.f_3 = joaat("PROP_LRGGATE_01C_L");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			Jump @9611; //curOff = 9301
			Var0.f_3 = joaat("PROP_LRGGATE_01C_R");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			Jump @9611; //curOff = 9341
			Var0.f_3 = joaat("PROP_LRGGATE_01C_L");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			Jump @9611; //curOff = 9381
			Var0.f_3 = joaat("PROP_LRGGATE_01C_R");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			Jump @9611; //curOff = 9421
			Var0.f_3 = joaat("V_ILEV_BL_DOOREL_L");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 9470
			Var0.f_3 = joaat("V_ILEV_BL_DOOREL_R");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			MISC::SET_BIT(&(Var0.f_4), 2);
			Jump @9611; //curOff = 9519
			Var0.f_3 = joaat("V_ILEV_CBANKCOUNTDOOR01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			Jump @9611; //curOff = 9559
			Var0.f_3 = joaat("PROP_FNCLINK_03GATE5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			MISC::SET_BIT(&(Var0.f_4), 2);
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
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 199:
					Var0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
					Var0 = { 316.39f, -276.49f, 54.52f };
					Var0.f_5 = -93934272;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 200:
					Var0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
					Var0 = { 313.96f, -275.6f, 54.52f };
					Var0.f_5 = 667682830;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 201:
					Var0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
					Var0 = { -2965.71f, 484.22f, 16.05f };
					Var0.f_5 = 1876735830;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 202:
					Var0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
					Var0 = { -2965.82f, 481.63f, 16.05f };
					Var0.f_5 = -2112857171;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 205:
					Var0.f_3 = joaat("V_ILEV_ABBMAINDOOR");
					Var0 = { 962.1f, -2183.83f, 31.06f };
					Var0.f_5 = 2046930518;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 206:
					Var0.f_3 = joaat("V_ILEV_ABBMAINDOOR2");
					Var0 = { 961.79f, -2187.08f, 31.06f };
					Var0.f_5 = 1208502884;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 207:
					Var0.f_3 = joaat("PROP_CH3_04_DOOR_02");
					Var0 = { 2508.43f, -336.63f, 115.76f };
					Var0.f_5 = 1986432421;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 208:
					Var0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
					Var0 = { -2255.19f, 322.26f, 184.93f };
					Var0.f_5 = -722798986;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 209:
					Var0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
					Var0 = { -2254.06f, 319.7f, 184.93f };
					Var0.f_5 = 204301578;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 210:
					Var0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
					Var0 = { -2301.13f, 336.91f, 184.93f };
					Var0.f_5 = -320140460;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 211:
					Var0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
					Var0 = { -2298.57f, 338.05f, 184.93f };
					Var0.f_5 = 65222916;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 212:
					Var0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
					Var0 = { -2222.32f, 305.86f, 184.93f };
					Var0.f_5 = -920027322;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 213:
					Var0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
					Var0 = { -2221.19f, 303.3f, 184.93f };
					Var0.f_5 = -58432001;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 214:
					Var0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
					Var0 = { -2280.6f, 265.43f, 184.93f };
					Var0.f_5 = -2007378629;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 215:
					Var0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
					Var0 = { -2278.04f, 266.57f, 184.93f };
					Var0.f_5 = 418772613;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 216:
					Var0.f_3 = joaat("PROP_GAR_DOOR_04");
					Var0 = { 778.31f, -1867.49f, 30.66f };
					Var0.f_5 = 1679064921;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 217:
					Var0.f_3 = joaat("PROP_GATE_TEP_01_L");
					Var0 = { -721.35f, 91.01f, 56.68f };
					Var0.f_5 = 412198396;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 218:
					Var0.f_3 = joaat("PROP_GATE_TEP_01_R");
					Var0 = { -728.84f, 88.64f, 56.68f };
					Var0.f_5 = -1053755588;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 219:
					Var0.f_3 = joaat("PROP_ARTGALLERY_02_DR");
					Var0 = { -2287.62f, 363.9f, 174.93f };
					Var0.f_5 = -53446139;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 220:
					Var0.f_3 = joaat("PROP_ARTGALLERY_02_DL");
					Var0 = { -2289.78f, 362.91f, 174.93f };
					Var0.f_5 = 1333960556;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 221:
					Var0.f_3 = joaat("PROP_ARTGALLERY_02_DR");
					Var0 = { -2289.86f, 362.88f, 174.93f };
					Var0.f_5 = -41786493;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 222:
					Var0.f_3 = joaat("PROP_ARTGALLERY_02_DL");
					Var0 = { -2292.01f, 361.89f, 174.93f };
					Var0.f_5 = 1750120734;
					MISC::SET_BIT(&(Var0.f_4), 2);
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
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 204:
					Var0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
					Var0 = { -351.26f, -46.41f, 49.39f };
					Var0.f_5 = -74083138;
					MISC::SET_BIT(&(Var0.f_4), 2);
					break;
				case 224:
					Var0.f_3 = joaat("PROP_ABAT_SLIDE");
					Var0 = { 962.9084f, -2105.814f, 34.6432f };
					Var0.f_5 = -1670085357;
					break;
			}
			return Var0;
		}

bool func_66()
{
	if ((func_68() == -1 || func_68() == 999) && !func_67() == 0)
	{
		return true;
	}
	return false;
}

int func_67()
{
	return Global_30769;
}

int func_68()
{
	return Global_30768;
}

void func_69(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_106 = iParam0;
	iLocal_104 = 0;
	iLocal_95 = 7;
}

int func_70()
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		vVar0 = { vLocal_90 };
		fVar3 = 999999f;
		iVar5 = 1;
		iVar5 = 0;
		while (iVar5 < func_72() + 1)
		{
			if (iVar5 > 0)
			{
				fVar4 = SYSTEM::VDIST2(vVar0, func_71(iVar5));
				if (fVar3 > fVar4)
				{
					fVar3 = fVar4;
				}
			}
			iVar5++;
		}
	}
	return 67;
}

Vector3 func_71(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -572.041f, 294.196f, 79.9374f;
		case 2:
			return 1992.27f, 3050.6f, 47.89f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_72()
{
	return 1;
}

bool func_73(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_74(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	if (func_80(0))
	{
		return false;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
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

int func_74(int iParam0)
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

void func_75(int iParam0)
{
	int iVar0;

	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_74(*iParam0);
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

void func_76(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;

	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CONTEXT_CONTROLLER")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_75(iParam0);
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
			Global_42151[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_42151[iVar0 /*32*/].f_7 = 0;
			Global_42151[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
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

bool func_77(var uParam0)
{
	return true;
}

bool func_78(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	int iVar0;
	var uVar1;
	var uVar4;

	uParam0->f_12 = 0;
	iVar0 = 0;
	switch (*uParam0)
	{
		case 0:
			uParam0->f_2 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 19, iParam7, 7);
			*uParam0 = 1;
			break;
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_2, &(uParam0->f_9), &uVar1, &uVar4, &iVar0) == 2)
			{
				if (uParam0->f_9 == 0)
				{
					*uParam0 = 3;
					return true;
				}
				else
				{
					uParam0->f_12 = 1;
					*uParam0 = 0;
					return false;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_2, &(uParam0->f_9), &uVar1, &uVar4, &iVar0) == 0)
			{
				*uParam0 = 3;
			}
			break;
		case 3:
			*uParam0 = 0;
			break;
	}
	return false;
}

bool func_79()
{
	return Global_73825;
}

bool func_80(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7356, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		return true;
	}
	if (Global_19486.f_1 > 3)
	{
		return true;
	}
	return false;
}

bool func_81(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1377170.f_1048, iParam0);
}

bool func_82()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

bool func_83()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_84(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

void func_85(var uParam0, int iParam1)
{
	func_86(uParam0, iParam1);
}

void func_86(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_87()
{
	if (func_101(6) || func_101(7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			return func_100(67);
		}
	}
	return true;
}

bool func_88()
{
	int iVar0;
	bool bVar1;

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
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
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return ((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 69)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 70))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 68))) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
	}
	return (((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 24)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 25))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 47))) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
}

bool func_89(int iParam0)
{
	int iVar0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_42();
				if (!func_44(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_96()) || Global_110685) || Global_30770) || func_95()) || func_81(8, -1)) || func_94()) || func_93()) || func_92()) || func_83()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_96()) || Global_30770) || func_95()) || func_81(8, -1)) || func_92()) || func_94()) || func_93()) || func_83()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_96()) || Global_110685) || Global_30770) || func_95()) || func_81(8, -1)) || func_92()) || func_94()) || func_93()) || func_83()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_96()) || Global_110685) || Global_30770) || func_95()) || func_81(8, -1)) || func_94()) || func_93()) || func_83()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_96() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_81(8, -1)) || func_83()) || func_91()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_81(8, -1) || func_94()) || func_93()) || func_91()) || func_90())
						{
							return false;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return false;
						}
						break;
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_96()) || Global_30770) || func_95()) || func_81(8, -1)) || func_93()) || func_92()) || func_83()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_96()) || func_93()) || Global_110685) || Global_30770) || func_95()) || Global_42596) || func_81(8, -1)) || func_92()) || func_91()) || func_83()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_96()) || Global_110685) || Global_30770) || func_95()) || func_81(8, -1)) || func_92()) || func_91()) || func_94()) || func_93()) || func_83())
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

bool func_90()
{
	return Global_98783.f_1;
}

bool func_91()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_92()
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

bool func_93()
{
	return Global_98796.f_346 > 0;
}

bool func_94()
{
	return Global_98796.f_345 > 0;
}

bool func_95()
{
	return Global_1312877;
}

bool func_96()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_97()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("STRIPPERHOME")) > 0)
	{
		return true;
	}
	return false;
}

var func_98()
{
	return Global_94576;
}

bool func_99(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			if (func_101(6) || func_101(7))
			{
				return true;
			}
			else
			{
				return func_99(3);
			}
			break;
		case 2:
			return true;
		case 3:
			if (func_113(5))
			{
				if (func_89(4))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_100(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return false;
	}
	return HUD::DOES_BLIP_EXIST(Global_31146[iVar0 /*23*/].f_19);
}

bool func_101(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_102()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	int iVar23;

	if (bLocal_146)
	{
		vVar0 = { func_71(iLocal_148) };
		vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		fVar6 = SYSTEM::VDIST2(vVar3, vVar0);
		if ((fVar6 > 45f || Global_111600) && !ENTITY::DOES_ENTITY_EXIST(iLocal_143))
		{
			if (Global_111600)
			{
				Global_111600 = 0;
			}
			vVar7 = { -573.1373f, 294.0269f, 78.1765f };
			vVar10 = { -574.1169f, 292.7964f, 78.1766f };
			vVar13 = { 1995.614f, 3049.877f, 46.2153f };
			vVar16 = { 1995.488f, 3047.383f, 46.2153f };
			fVar19 = 172.6813f;
			fVar20 = 274.5094f;
			fVar21 = 142.6717f;
			fVar22 = 44.8785f;
			iVar23 = INTERIOR::GET_INTERIOR_AT_COORDS(func_71(iLocal_148));
			if (INTERIOR::IS_VALID_INTERIOR(iVar23))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar23);
				while (!INTERIOR::IS_INTERIOR_READY(iVar23))
				{
					SYSTEM::WAIT(0);
				}
				INTERIOR::UNPIN_INTERIOR(iVar23);
			}
			iLocal_143 = PED::CREATE_PED(26, iLocal_141, func_104(iLocal_148 == 1, vVar7, vVar13), func_103(iLocal_148 == 1, fVar19, fVar21), true, true);
			iLocal_144 = PED::CREATE_PED(26, iLocal_142, func_104(iLocal_148 == 1, vVar10, vVar16), func_103(iLocal_148 == 1, fVar20, fVar22), true, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_143, true, false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_144, true, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_143, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_144, true);
			bLocal_160 = true;
			MISC::CLEAR_BIT(&Global_111599, 10);
			iLocal_147 = -1;
			if (fVar6 < (20f * 20f))
			{
				iLocal_147 = 1;
				TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_143, "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
				TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_144, "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
			}
			else
			{
				iLocal_147 = 0;
				TASK::TASK_STAND_STILL(iLocal_143, -1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_143, true);
				TASK::TASK_STAND_STILL(iLocal_144, -1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_144, true);
			}
			iLocal_145 = 1;
		}
		else
		{
			if (fVar6 <= 45f)
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
			{
			}
			iLocal_145 = 0;
		}
	}
	else
	{
		iLocal_145 = 0;
	}
}

float func_103(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_104(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

bool func_105()
{
	if (bLocal_146)
	{
		return ((STREAMING::HAS_MODEL_LOADED(iLocal_141) && STREAMING::HAS_MODEL_LOADED(iLocal_142)) && STREAMING::HAS_MODEL_LOADED(joaat("PROP_DART_1")));
	}
	return true;
}

void func_106()
{
	int iVar0;

	if (bLocal_146)
	{
		iVar0 = func_70();
		switch (iVar0)
		{
			case 66:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
				{
					case 0:
						iLocal_141 = joaat("A_M_Y_VINEWOOD_01");
						break;
					case 1:
						iLocal_141 = joaat("A_M_Y_STLAT_01");
						break;
					case 2:
						iLocal_141 = joaat("A_M_Y_VINEWOOD_04");
						break;
				}
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
						iLocal_142 = joaat("A_M_Y_STWHI_02");
						break;
					case 1:
						iLocal_142 = joaat("A_M_Y_VINEWOOD_03");
						break;
				}
				iLocal_148 = 1;
				break;
			case 67:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
						iLocal_141 = joaat("A_F_M_SALTON_01");
						iLocal_142 = joaat("A_F_O_SALTON_01");
						break;
					case 1:
						iLocal_141 = joaat("A_F_O_SALTON_01");
						iLocal_142 = joaat("A_F_M_SALTON_01");
						break;
				}
				iLocal_148 = 2;
				break;
		}
		STREAMING::REQUEST_MODEL(iLocal_141);
		STREAMING::REQUEST_MODEL(iLocal_142);
		STREAMING::REQUEST_MODEL(joaat("PROP_DART_1"));
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_143, true, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_144))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_144, true, false);
		}
	}
}

void func_107(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_108(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_109(int iParam0, bool bParam1, bool bParam2)
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
		bVar1 = MISC::IS_BIT_SET(Global_31146[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != MISC::IS_BIT_SET(Global_31146[iVar0 /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 18);
		if (Global_31143 == 1)
		{
			Global_31144 = 1;
		}
		Global_31143 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_31146[iVar0 /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_31146[iVar0 /*23*/].f_11), 15);
	}
	if (!MISC::IS_BIT_SET(Global_31146[iVar0 /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_31146[iVar0 /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_31146[iVar0 /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}
}

bool func_110()
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return true;
		}
	}
	return false;
}

bool func_111()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_112(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam0 == 11 || iParam0 == -1)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	bVar0 = MISC::IS_BIT_SET(Global_111638.f_9080.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

int func_113(int iParam0)
{
	return func_114(iParam0, Global_41431);
}

int func_114(int iParam0, int iParam1)
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

bool func_115(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_116()
{
	bool bVar0;

	StringCopy(&cLocal_53, "Darts", 64);
	sLocal_101 = "PLAY_DARTS";
	iLocal_99 = 1;
	fLocal_117 = 2.5f;
	vLocal_134 = { 0f, -0.5f, 0f };
	iLocal_105 = 67;
	bVar0 = false;
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_71(2), 100f, 100f, 100f, false, false, 0))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		func_69(0);
	}
	if (func_101(6) || func_101(7))
	{
		iLocal_103 = 0;
	}
	iLocal_140 = INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_90);
	func_107(&uLocal_94, 1);
	func_85(&uLocal_94, 524288);
	iLocal_97 = 35000;
}

void func_117(var uParam0, int iParam1)
{
	func_118(uParam0, iParam1);
}

void func_118(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_119(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_109(iLocal_105, 0, 0);
		}
	}
	func_75(&iLocal_96);
	if (func_115(uLocal_94, 2))
	{
		func_4();
		func_117(&uLocal_94, 2);
		func_6(&iLocal_98);
	}
	iLocal_98 = -1;
	func_120();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_120()
{
	func_117(&uLocal_94, 4);
	func_121();
	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_52))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_52, 3);
	}
	if (!MISC::IS_STRING_NULL(&Local_69))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_69) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_69);
		}
	}
}

void func_121()
{
	if (bLocal_159)
	{
		func_122(func_70());
	}
}

void func_122(int iParam0)
{
	if (iParam0 != 263)
	{
		func_109(iParam0, 1, 0);
	}
}

