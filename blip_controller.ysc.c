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
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	char* sLocal_23 = NULL;
	vector3 vLocal_24 = { 0f, 0f, 0f };
	vector3 vLocal_27 = { 0f, 0f, 0f };
	int iLocal_30 = 0;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	bool bLocal_45 = false;
	bool bLocal_46 = false;
	bool bLocal_47 = false;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = false;
	int iLocal_51 = 0;
	bool bLocal_52 = false;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = false;
	bool bLocal_66 = false;
	bool bLocal_67 = false;
	bool bLocal_68 = false;
	bool bLocal_69 = false;
	bool bLocal_70 = false;
	int iLocal_71 = 0;
	bool bLocal_72 = false;
	bool bLocal_73 = false;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;

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
	sLocal_21 = "CHECKPOINT_NORMAL";
	sLocal_22 = "CHECKPOINT_MISSED";
	sLocal_23 = "CHECKPOINT_PERFECT";
	vLocal_24 = { 1694.74f, 3276.502f, 41.2796f };
	vLocal_27 = { 8.79494f, 0.59893f, 154.8464f };
	iLocal_30 = 3;
	fLocal_31 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	fLocal_39 = 80f;
	fLocal_40 = 140f;
	fLocal_41 = 180f;
	bLocal_50 = true;
	iLocal_53 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_51();
	}
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		iVar1 = func_50(iVar0);
		func_47(iVar1, func_48(iVar0));
		iVar0++;
	}
	func_46(91, 1);
	func_46(92, 1);
	Global_31143 = 1;
	while (Global_31145)
	{
		if ((MISC::GET_GAME_TIMER() % 250) == 0)
		{
		}
		SYSTEM::WAIT(0);
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iLocal_55[iVar2] = -1;
		iVar2++;
	}
	MISC::SET_BIT(&(Global_31146[iVar2 /*23*/].f_11), 18);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 263)
	{
		MISC::SET_BIT(&(Global_31146[iVar2 /*23*/].f_11), 18);
		iVar2++;
	}
	iLocal_71 = Global_37197;
	bVar3 = false;
	func_45();
	func_43();
	while (true)
	{
		if (!bVar3)
		{
			func_42();
		}
		bVar3 = func_35();
		if (bVar3)
		{
			Global_31143 = 1;
		}
		iVar4 = 0;
		iVar5 = 0;
		iVar2 = 0;
		if (Global_31143)
		{
			func_45();
			func_43();
			iVar6 = 0;
			iVar2 = 0;
			while (iVar2 < 263)
			{
				bVar7 = MISC::IS_BIT_SET(Global_31146[iVar2 /*23*/].f_11, 18);
				if (!bVar7)
				{
					if (func_34(iVar2))
					{
						iVar5++;
						bVar7 = true;
					}
				}
				iVar4++;
				if (bVar7)
				{
					iVar8 = 0;
					iVar9 = 0;
					if (Global_37197)
					{
						iVar8++;
						iVar9++;
					}
					else
					{
						if (MISC::IS_BIT_SET(Global_31146[iVar2 /*23*/].f_11, 13))
						{
							if (func_33())
							{
								iVar8++;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_31146[iVar2 /*23*/].f_11, 1))
						{
							if (!bLocal_50)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_31146[iVar2 /*23*/].f_11, 2))
						{
							if (bLocal_50)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_31146[iVar2 /*23*/].f_11, 7))
						{
							if (!func_32(15))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_31146[iVar2 /*23*/].f_11, 16))
						{
							if (!func_30(Global_31146[iVar2 /*23*/].f_22))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_31146[iVar2 /*23*/].f_11, 14))
						{
							if (func_32(5))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_31146[iVar2 /*23*/].f_11, 8))
						{
							if (Global_31146[iVar2 /*23*/].f_16 != 4 && Global_31146[iVar2 /*23*/].f_16 != 8)
							{
								if (!func_29(iVar2))
								{
									iVar8++;
								}
								iVar9++;
							}
						}
						if (MISC::IS_BIT_SET(Global_31146[iVar2 /*23*/].f_11, 19))
						{
							switch (iLocal_64)
							{
								case 1:
								case 0:
								case 2:
									break;
								default:
									iVar8++;
									break;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_31146[iVar2 /*23*/].f_11, 27))
						{
							if (bLocal_45)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (Global_31146[iVar2 /*23*/].f_16 == 1)
						{
							func_23();
						}
					}
					if (iVar9 > 0)
					{
						if (iVar8 > 0)
						{
							MISC::CLEAR_BIT(&(Global_31146[iVar2 /*23*/].f_11), 0);
						}
						else if (MISC::IS_BIT_SET(Global_31146[iVar2 /*23*/].f_11, 15))
						{
							MISC::SET_BIT(&(Global_31146[iVar2 /*23*/].f_11), 0);
						}
					}
					else if (MISC::IS_BIT_SET(Global_31146[iVar2 /*23*/].f_11, 15))
					{
						MISC::SET_BIT(&(Global_31146[iVar2 /*23*/].f_11), 0);
					}
					if (MISC::IS_BIT_SET(Global_31146[iVar2 /*23*/].f_11, 0) && MISC::IS_BIT_SET(Global_31146[iVar2 /*23*/].f_11, 3))
					{
						bVar10 = false;
						if (!HUD::DOES_BLIP_EXIST(Global_31146[iVar2 /*23*/].f_19))
						{
							while (!HUD::GET_NUMBER_OF_ACTIVE_BLIPS() < 150)
							{
								SYSTEM::WAIT(2000);
							}
							if (MISC::IS_BIT_SET(Global_31146[iVar2 /*23*/].f_11, 19))
							{
								switch (iLocal_64)
								{
									case 1:
									case 0:
									case 2:
										if (MISC::IS_BIT_SET(Global_31146[iVar2 /*23*/].f_11, 28))
										{
											Global_31146[iVar2 /*23*/].f_19 = HUD::ADD_BLIP_FOR_RADIUS(Global_31146[iVar2 /*23*/][0 /*3*/], Global_31146[iVar2 /*23*/].f_10);
											HUD::SET_BLIP_ALPHA(Global_31146[iVar2 /*23*/].f_19, 128);
											HUD::SHOW_HEIGHT_ON_BLIP(Global_31146[iVar2 /*23*/].f_19, false);
										}
										else
										{
											Global_31146[iVar2 /*23*/].f_19 = HUD::ADD_BLIP_FOR_COORD(Global_31146[iVar2 /*23*/][iLocal_64 /*3*/]);
											HUD::SET_BLIP_SPRITE(Global_31146[iVar2 /*23*/].f_19, Global_31146[iVar2 /*23*/].f_12[iLocal_64]);
										}
										break;
									default:
										Global_31146[iVar2 /*23*/].f_19 = HUD::ADD_BLIP_FOR_COORD(1f, 2f, 3f);
										break;
								}
							}
							else if (MISC::IS_BIT_SET(Global_31146[iVar2 /*23*/].f_11, 28))
							{
								Global_31146[iVar2 /*23*/].f_19 = HUD::ADD_BLIP_FOR_RADIUS(Global_31146[iVar2 /*23*/][0 /*3*/], Global_31146[iVar2 /*23*/].f_10);
								HUD::SET_BLIP_ALPHA(Global_31146[iVar2 /*23*/].f_19, 128);
								HUD::SHOW_HEIGHT_ON_BLIP(Global_31146[iVar2 /*23*/].f_19, false);
							}
							else
							{
								Global_31146[iVar2 /*23*/].f_19 = HUD::ADD_BLIP_FOR_COORD(Global_31146[iVar2 /*23*/][0 /*3*/]);
								HUD::SET_BLIP_SPRITE(Global_31146[iVar2 /*23*/].f_19, Global_31146[iVar2 /*23*/].f_12[0]);
							}
							if (Global_31146[iVar2 /*23*/].f_16 == 1)
							{
								bVar10 = true;
							}
						}
						else
						{
							if (MISC::IS_BIT_SET(Global_31146[iVar2 /*23*/].f_11, 19))
							{
								switch (iLocal_64)
								{
									case 1:
									case 0:
									case 2:
										HUD::SET_BLIP_COORDS(Global_31146[iVar2 /*23*/].f_19, Global_31146[iVar2 /*23*/][iLocal_64 /*3*/]);
										break;
									default:
										break;
								}
							}
							else
							{
								HUD::SET_BLIP_COORDS(Global_31146[iVar2 /*23*/].f_19, Global_31146[iVar2 /*23*/][0 /*3*/]);
							}
							if (MISC::IS_BIT_SET(Global_31146[iVar2 /*23*/].f_11, 9))
							{
								if (bLocal_47)
								{
									HUD::SET_BLIP_FLASHES(Global_31146[iVar2 /*23*/].f_19, true);
									bLocal_47 = false;
								}
								else
								{
									HUD::SET_BLIP_FLASHES_ALTERNATE(Global_31146[iVar2 /*23*/].f_19, true);
									bLocal_47 = true;
								}
								HUD::SET_BLIP_FLASH_TIMER(Global_31146[iVar2 /*23*/].f_19, 10000);
								MISC::CLEAR_BIT(&(Global_31146[iVar2 /*23*/].f_11), 9);
							}
							else
							{
								HUD::SET_BLIP_FLASHES(Global_31146[iVar2 /*23*/].f_19, false);
							}
						}
						func_20(Global_31146[iVar2 /*23*/].f_19, iVar2);
						if (bVar10)
						{
							func_19(iVar2);
						}
						iVar5++;
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Global_31146[iVar2 /*23*/].f_19))
						{
							HUD::REMOVE_BLIP(&(Global_31146[iVar2 /*23*/].f_19));
							iVar5++;
							if (Global_31146[iVar2 /*23*/].f_16 == 1)
							{
								func_18(iVar2);
							}
						}
						Global_31146[iVar2 /*23*/].f_19 = 0;
					}
				}
				MISC::CLEAR_BIT(&(Global_31146[iVar2 /*23*/].f_11), 18);
				iVar11 = 30;
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iVar11 = 250;
				}
				if (iVar5 > iVar11)
				{
					SYSTEM::WAIT(0);
					iVar5 = 0;
				}
				if ((iVar4 / 20) > iVar6)
				{
					iVar6 = (iVar4 / 20);
					SYSTEM::WAIT(0);
				}
				iVar2++;
			}
		}
		Global_31143 = Global_31144;
		Global_31144 = 0;
		if (iVar4 == 0)
		{
			func_11();
			func_7();
			SYSTEM::WAIT(500);
			iLocal_64 = func_1();
		}
	}
}

int func_1()
{
	func_2();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_2()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_5(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_4(PLAYER::PLAYER_PED_ID());
			if (func_3(iVar0) && (!func_32(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_3(Global_111638.f_2358.f_539.f_4321))
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

bool func_3(int iParam0)
{
	return iParam0 < 3;
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_5(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_5(int iParam0)
{
	if (func_3(iParam0))
	{
		return func_6(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_6(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_7()
{
	if (func_1() == 1)
	{
		if (func_10(63))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (func_10(126))
				{
					if (func_9(138))
					{
						func_8(138, 0, 0);
					}
					if (!func_9(139))
					{
						if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CHOP")) == 0)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 19.3f, 528.24f, 169.63f, true) > 50f)
							{
								func_8(139, 1, 0);
							}
						}
					}
				}
				else
				{
					if (func_9(139))
					{
						func_8(139, 0, 0);
					}
					if (!func_9(138))
					{
						if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CHOP")) == 0)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -11.15f, -1425.56f, 29.67f, true) > 50f)
							{
								func_8(138, 1, 0);
							}
						}
					}
				}
			}
		}
	}
}

void func_8(int iParam0, bool bParam1, bool bParam2)
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

bool func_9(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return false;
	}
	return HUD::DOES_BLIP_EXIST(Global_31146[iVar0 /*23*/].f_19);
}

bool func_10(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_11()
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	vVar0 = { func_17(PLAYER::GET_PLAYER_INDEX()) };
	iVar3 = -1;
	fVar4 = 1000000f;
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if (iLocal_55[iVar5] != -1)
		{
			if (HUD::DOES_BLIP_EXIST(Global_31146[iLocal_55[iVar5] /*23*/].f_19))
			{
				fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, HUD::GET_BLIP_COORDS(Global_31146[iLocal_55[iVar5] /*23*/].f_19), true);
				if (fVar6 < fVar4)
				{
					fVar4 = fVar6;
					iVar3 = iVar5;
				}
			}
		}
		iVar5++;
	}
	if (iLocal_53 == iVar3)
	{
		return;
	}
	iLocal_53 = iVar3;
	if (iVar3 == -1)
	{
		return;
	}
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if (iLocal_55[iVar5] != -1)
		{
			if (iVar5 == iVar3)
			{
				if (HUD::DOES_BLIP_EXIST(Global_31146[iLocal_55[iVar5] /*23*/].f_19))
				{
					func_16(iLocal_55[iVar5]);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Global_31146[iLocal_55[iVar5] /*23*/].f_19))
			{
				func_12(iLocal_55[iVar5]);
			}
		}
		iVar5++;
	}
}

void func_12(int iParam0)
{
	func_15(iParam0, 0, 0);
	func_14(iParam0, 1);
	func_13(iParam0, 1);
}

void func_13(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == MISC::IS_BIT_SET(Global_31146[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_31146[iVar0 /*23*/].f_11), 4);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 18);
}

void func_14(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == MISC::IS_BIT_SET(Global_31146[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_31146[iVar0 /*23*/].f_11), 5);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 18);
}

void func_15(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == MISC::IS_BIT_SET(Global_31146[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_31146[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_31146[iVar0 /*23*/].f_11), 11);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 18);
}

void func_16(int iParam0)
{
	func_15(iParam0, 1, 0);
	func_14(iParam0, 1);
	func_13(iParam0, 1);
}

Vector3 func_17(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_18(int iParam0)
{
	int iVar0;

	if (iLocal_54 < 1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_55[iVar0] == iParam0)
		{
			iLocal_54 = (iLocal_54 - 1);
			iLocal_55[iVar0] = -1;
			if (iParam0 == iLocal_53)
			{
				iLocal_53 = -1;
			}
			return;
		}
		iVar0++;
	}
}

void func_19(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iLocal_54 == 7)
	{
		return;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < iLocal_54)
	{
		if (iLocal_55[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_55[iVar0] == -1)
		{
			iVar1 = iVar0;
			iVar0 = 7;
		}
		iVar0++;
	}
	iLocal_55[iVar1] = iParam0;
	iLocal_54++;
}

void func_20(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = func_1();
	HUD::_SET_BLIP_DISPLAY_INDICATOR_ON_BLIP(iParam0, true);
	HUD::SET_BLIP_PRIORITY(iParam0, 2);
	HUD::SET_BLIP_COLOUR(iParam0, func_22(iParam1));
	if (Global_31146[iParam1 /*23*/].f_16 == 4 || Global_31146[iParam1 /*23*/].f_16 == 8)
	{
		switch (iVar0)
		{
			case 0:
				HUD::SET_BLIP_COLOUR(iParam0, 42);
				break;
			case 1:
				HUD::SET_BLIP_COLOUR(iParam0, 43);
				break;
			case 2:
				HUD::SET_BLIP_COLOUR(iParam0, 44);
				break;
		}
	}
	if (!MISC::IS_BIT_SET(Global_31146[iParam1 /*23*/].f_11, 28))
	{
		HUD::SET_BLIP_SCALE(iParam0, 1f);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_31146[iParam1 /*23*/].f_20)))
	{
		if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_31146[iParam1 /*23*/].f_20)))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam0, &(Global_31146[iParam1 /*23*/].f_20));
		}
	}
	bVar1 = MISC::IS_BIT_SET(Global_31146[iParam1 /*23*/].f_11, 4);
	bVar2 = MISC::IS_BIT_SET(Global_31146[iParam1 /*23*/].f_11, 5);
	bVar3 = MISC::IS_BIT_SET(Global_31146[iParam1 /*23*/].f_11, 6);
	bVar4 = false;
	if (func_21(0))
	{
		bVar4 = MISC::IS_BIT_SET(Global_31146[iParam1 /*23*/].f_11, 11);
	}
	if (bVar3 && !bVar4)
	{
		HUD::SET_BLIP_AS_SHORT_RANGE(iParam0, false);
	}
	else
	{
		HUD::SET_BLIP_AS_SHORT_RANGE(iParam0, true);
	}
	if (bVar2 && bVar1)
	{
		HUD::SET_BLIP_DISPLAY(iParam0, 4);
	}
	else
	{
		if (bVar2)
		{
			HUD::SET_BLIP_DISPLAY(iParam0, 5);
		}
		if (bVar1)
		{
			HUD::SET_BLIP_DISPLAY(iParam0, 3);
		}
	}
	switch (Global_31146[iParam1 /*23*/].f_16)
	{
		case 7:
			HUD::SET_BLIP_PRIORITY(iParam0, 2);
			HUD::SET_BLIP_HIGH_DETAIL(iParam0, false);
			break;
		case 6:
		case 5:
			HUD::SET_BLIP_PRIORITY(iParam0, 2);
			HUD::SET_BLIP_HIGH_DETAIL(iParam0, false);
			break;
		case 1:
			HUD::SET_BLIP_PRIORITY(iParam0, 3);
			HUD::SET_BLIP_HIGH_DETAIL(iParam0, true);
			break;
		case 9:
			HUD::SET_BLIP_PRIORITY(iParam0, 1);
			HUD::SET_BLIP_CATEGORY(iParam0, 10);
			HUD::SET_BLIP_HIGH_DETAIL(iParam0, false);
			break;
		case 4:
		case 8:
			HUD::SET_BLIP_HIGH_DETAIL(iParam0, true);
			if (Global_31146[iParam1 /*23*/].f_16 == 4)
			{
				HUD::SET_BLIP_PRIORITY(iParam0, 7);
			}
			else
			{
				HUD::SET_BLIP_PRIORITY(iParam0, 5);
			}
			if (MISC::IS_BIT_SET(Global_31146[iParam1 /*23*/].f_11, 8))
			{
				if (!func_29(iParam1))
				{
					if (MISC::IS_BIT_SET(Global_31146[iParam1 /*23*/].f_11, 28))
					{
						HUD::SET_BLIP_ALPHA(iParam0, 0);
					}
					else
					{
						if (Global_31146[iParam1 /*23*/].f_17 == 0)
						{
							HUD::SET_BLIP_COLOUR(iParam0, 42);
						}
						if (Global_31146[iParam1 /*23*/].f_17 == 1)
						{
							HUD::SET_BLIP_COLOUR(iParam0, 43);
						}
						if (Global_31146[iParam1 /*23*/].f_17 == 2)
						{
							HUD::SET_BLIP_COLOUR(iParam0, 44);
						}
						if (Global_31146[iParam1 /*23*/].f_16 == 8)
						{
							HUD::SET_BLIP_AS_SHORT_RANGE(iParam0, MISC::IS_BIT_SET(Global_31146[iParam1 /*23*/].f_11, 5));
							HUD::SET_BLIP_PRIORITY(iParam0, 3);
							HUD::SET_BLIP_AS_SHORT_RANGE(iParam0, true);
							HUD::SET_BLIP_HIDDEN_ON_LEGEND(iParam0, true);
							HUD::SET_BLIP_SCALE(iParam0, 0.77f);
						}
						else
						{
							HUD::SET_BLIP_SCALE(iParam0, 0.72f);
						}
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(Global_31146[iParam1 /*23*/].f_11, 28))
					{
						HUD::SET_BLIP_ALPHA(iParam0, 128);
					}
					if (Global_31146[iParam1 /*23*/].f_16 == 8)
					{
						HUD::SET_BLIP_HIDDEN_ON_LEGEND(iParam0, false);
					}
				}
			}
			break;
		default:
			HUD::SET_BLIP_PRIORITY(iParam0, 5);
			break;
	}
	switch (iParam1)
	{
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
			HUD::SET_BLIP_HIGH_DETAIL(iParam0, true);
			break;
	}
	if (MISC::IS_BIT_SET(Global_31146[iParam1 /*23*/].f_11, 19))
	{
		switch (iVar0)
		{
			case 1:
			case 0:
			case 2:
				HUD::SET_BLIP_COORDS(Global_31146[iParam1 /*23*/].f_19, Global_31146[iParam1 /*23*/][iVar0 /*3*/]);
				break;
		}
	}
	if (MISC::IS_BIT_SET(Global_31146[iParam1 /*23*/].f_11, 17))
	{
		HUD::SET_BLIP_AS_MISSION_CREATOR_BLIP(iParam0, true);
	}
	else
	{
		HUD::SET_BLIP_AS_MISSION_CREATOR_BLIP(iParam0, false);
	}
	if (MISC::IS_BIT_SET(Global_31146[iParam1 /*23*/].f_11, 20))
	{
		HUD::SHOW_TICK_ON_BLIP(iParam0, true);
	}
	else
	{
		HUD::SHOW_TICK_ON_BLIP(iParam0, false);
	}
	if (MISC::IS_BIT_SET(Global_31146[iParam1 /*23*/].f_11, 29))
	{
		HUD::SET_BLIP_COLOUR(iParam0, 39);
	}
}

bool func_21(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_30(iParam0))
	{
		return false;
	}
	return true;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	iVar1 = MISC::GET_BITS_IN_RANGE(Global_31146[iVar0 /*23*/].f_11, 21, 26);
	return iVar1;
}

void func_23()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_24(iVar0);
		iVar0++;
	}
}

void func_24(int iParam0)
{
	bool bVar0;

	if (iParam0 == 10)
	{
		return;
	}
	if (Global_93782[iParam0 /*10*/].f_7 == 263)
	{
		return;
	}
	bVar0 = false;
	if (MISC::IS_BIT_SET(Global_111638.f_7224[iParam0], 0))
	{
		if (Global_93782[iParam0 /*10*/].f_9 != func_28())
		{
			bVar0 = true;
		}
		else if (!func_26(iParam0))
		{
			bVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (func_25(6))
		{
			bVar0 = false;
		}
	}
	if (func_21(14))
	{
		bVar0 = false;
	}
	func_8(Global_93782[iParam0 /*10*/].f_7, bVar0, 0);
}

bool func_25(int iParam0)
{
	return MISC::IS_BIT_SET(Global_111638.f_7224[iParam0], 0);
}

bool func_26(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (Global_98796.f_343 == 0)
	{
		return false;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_26(iVar0))
			{
				return true;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_27(iParam0, &uVar1);
		iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_93782[iParam0 /*10*/].f_3, &uVar1);
		if (iVar9 != 0 && Global_98796.f_343 == iVar9)
		{
			return true;
		}
	}
	return false;
}

bool func_27(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		case 2:
		case 1:
			if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !MISC::ARE_STRINGS_EQUAL(sParam1, "");
}

int func_28()
{
	func_2();
	return Global_111638.f_2358.f_539.f_4321;
}

bool func_29(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return false;
	}
	if (!MISC::IS_BIT_SET(Global_31146[iVar0 /*23*/].f_11, 8))
	{
		return false;
	}
	if (Global_31146[iVar0 /*23*/].f_17 == func_1())
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(Global_31146[iVar0 /*23*/].f_11, 10))
	{
		return false;
	}
	if (Global_31146[iVar0 /*23*/].f_18 == func_1())
	{
		return true;
	}
	return false;
}

int func_30(int iParam0)
{
	return func_31(iParam0, Global_41431);
}

int func_31(int iParam0, int iParam1)
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

bool func_32(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_33()
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) != 0)
	{
		return true;
	}
	return false;
}

bool func_34(int iParam0)
{
	if (bLocal_68 && MISC::IS_BIT_SET(Global_31146[iParam0 /*23*/].f_11, 13))
	{
		MISC::SET_BIT(&(Global_31146[iParam0 /*23*/].f_11), 18);
		return true;
	}
	if (bLocal_69 && ((MISC::IS_BIT_SET(Global_31146[iParam0 /*23*/].f_11, 7) || MISC::IS_BIT_SET(Global_31146[iParam0 /*23*/].f_11, 11)) || MISC::IS_BIT_SET(Global_31146[iParam0 /*23*/].f_11, 16)))
	{
		MISC::SET_BIT(&(Global_31146[iParam0 /*23*/].f_11), 18);
		return true;
	}
	if (bLocal_70 && MISC::IS_BIT_SET(Global_31146[iParam0 /*23*/].f_11, 14))
	{
		MISC::SET_BIT(&(Global_31146[iParam0 /*23*/].f_11), 18);
		return true;
	}
	if (bLocal_65 && ((MISC::IS_BIT_SET(Global_31146[iParam0 /*23*/].f_11, 10) || MISC::IS_BIT_SET(Global_31146[iParam0 /*23*/].f_11, 8)) || MISC::IS_BIT_SET(Global_31146[iParam0 /*23*/].f_11, 19)))
	{
		MISC::SET_BIT(&(Global_31146[iParam0 /*23*/].f_11), 18);
		return true;
	}
	if (bLocal_66)
	{
		MISC::SET_BIT(&(Global_31146[iParam0 /*23*/].f_11), 18);
		return true;
	}
	if (bLocal_72 && MISC::IS_BIT_SET(Global_31146[iParam0 /*23*/].f_11, 27))
	{
		MISC::SET_BIT(&(Global_31146[iParam0 /*23*/].f_11), 18);
		return true;
	}
	if ((bLocal_73 && (MISC::IS_BIT_SET(Global_31146[iParam0 /*23*/].f_11, 1) || MISC::IS_BIT_SET(Global_31146[iParam0 /*23*/].f_11, 2))) || Global_31146[iParam0 /*23*/].f_16 == 1)
	{
		MISC::SET_BIT(&(Global_31146[iParam0 /*23*/].f_11), 18);
		return true;
	}
	return false;
}

int func_35()
{
	int iVar0;

	iVar0 = 0;
	if (func_41())
	{
		if (!bLocal_67)
		{
			bLocal_67 = true;
			iVar0 = 1;
		}
	}
	if (func_40())
	{
		if (!bLocal_68)
		{
			bLocal_68 = true;
			iVar0 = 1;
		}
	}
	if (func_39())
	{
		if (!bLocal_69)
		{
			bLocal_69 = true;
			iVar0 = 1;
		}
	}
	if (func_38())
	{
		if (!bLocal_70)
		{
			bLocal_70 = true;
			iVar0 = 1;
		}
	}
	bLocal_66 = false;
	if (Global_37197 != iLocal_71)
	{
		iLocal_71 = Global_37197;
		if (!bLocal_66)
		{
			bLocal_66 = true;
			iVar0 = 1;
		}
	}
	if (func_36())
	{
		if (!bLocal_73)
		{
			bLocal_73 = true;
			iVar0 = 1;
		}
	}
	iLocal_64 = func_1();
	if (iLocal_64 != iLocal_63)
	{
		iLocal_63 = iLocal_64;
		bLocal_65 = true;
		iVar0 = 1;
	}
	bLocal_46 = bLocal_45;
	if (func_10(130))
	{
		bLocal_45 = true;
	}
	if (func_10(131))
	{
		bLocal_45 = false;
	}
	if (bLocal_45 != bLocal_46)
	{
		if (!bLocal_72)
		{
			iVar0 = 1;
		}
		bLocal_72 = true;
	}
	return iVar0;
}

bool func_36()
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false))
	{
		return false;
	}
	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
	if (iLocal_51 != iVar0)
	{
		iLocal_51 = iVar0;
		if (iVar0 == 0 || func_37(iVar0))
		{
			bLocal_50 = true;
		}
		else
		{
			bLocal_50 = false;
		}
		return true;
	}
	return false;
}

bool func_37(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		if (Global_30[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_38()
{
	if (bLocal_52 != func_21(0))
	{
		bLocal_52 = func_21(0);
		return true;
	}
	return false;
}

bool func_39()
{
	bool bVar0;

	bVar0 = Global_37198;
	Global_37198 = 0;
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_40()
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) != iLocal_49)
	{
		iLocal_49 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
		return true;
	}
	return false;
}

bool func_41()
{
	if (Global_41431 != 15)
	{
		return false;
	}
	if (CLOCK::GET_CLOCK_HOURS() != iLocal_48)
	{
		iLocal_48 = CLOCK::GET_CLOCK_HOURS();
		return true;
	}
	return false;
}

void func_42()
{
	bLocal_65 = false;
	bLocal_66 = false;
	bLocal_67 = false;
	bLocal_68 = false;
	bLocal_69 = false;
	bLocal_70 = false;
	iLocal_71 = 0;
	bLocal_72 = false;
	bLocal_73 = false;
}

void func_43()
{
	if (func_44(0) == 1 && !func_32(6))
	{
		func_8(112, 1, 0);
		func_8(113, 1, 0);
		func_8(114, 1, 0);
	}
}

int func_44(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

void func_45()
{
	if (func_44(0) == 1 && !func_32(6))
	{
		func_8(156, 1, 0);
		func_8(157, 1, 0);
		func_8(161, 1, 0);
		func_8(160, 1, 0);
		func_8(158, 1, 0);
		func_12(158);
		func_8(159, 1, 0);
		func_12(159);
	}
}

void func_46(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == MISC::IS_BIT_SET(Global_31146[iVar0 /*23*/].f_11, 2))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_31146[iVar0 /*23*/].f_11), 2);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 18);
}

void func_47(int iParam0, char* sParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	StringCopy(&(Global_31146[iVar0 /*23*/].f_20), sParam1, 8);
	if (HUD::DOES_BLIP_EXIST(Global_31146[iVar0 /*23*/].f_19))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_31146[iVar0 /*23*/].f_19, sParam1);
	}
}

char* func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL";
		case 1:
			return "SB_BAR";
		case 2:
			return "SB_BAR";
		case 3:
			return "SB_BAR";
		case 4:
			return "SB_BAR";
		case 5:
			return "SB_BAR";
		case 6:
			return "SB_BAR";
		case 7:
			return func_49(iParam0, 0);
		case 8:
			return func_49(iParam0, 0);
		case 9:
			return func_49(iParam0, 0);
		case 10:
			return func_49(iParam0, 0);
		case 11:
			return func_49(iParam0, 0);
		case 12:
			return func_49(iParam0, 0);
		case 13:
			return func_49(iParam0, 0);
		case 14:
			return func_49(iParam0, 0);
		case 15:
			return func_49(iParam0, 0);
		case 16:
			return func_49(iParam0, 0);
		case 17:
			return func_49(iParam0, 0);
		case 18:
			return func_49(iParam0, 0);
		case 19:
			return func_49(iParam0, 0);
		case 20:
			return func_49(iParam0, 0);
		case 21:
			return func_49(iParam0, 0);
		case 22:
			return "SB_TAT";
		case 23:
			return "SB_TAT";
		case 24:
			return "SB_TAT";
		case 25:
			return "SB_TAT";
		case 26:
			return "SB_TAT";
		case 27:
			return "SB_TAT";
		case 28:
			return "SB_AMU2";
		case 29:
			return "SB_AMU";
		case 30:
			return "SB_AMU";
		case 31:
			return "SB_AMU";
		case 32:
			return "SB_AMU";
		case 33:
			return "SB_AMU";
		case 34:
			return "SB_AMU";
		case 35:
			return "SB_AMU";
		case 36:
			return "SB_AMU";
		case 37:
			return "SB_AMU";
		case 38:
			return "SB_AMU2";
		case 39:
			return func_49(iParam0, 0);
		case 40:
			return func_49(iParam0, 0);
		case 41:
			return func_49(iParam0, 0);
		case 42:
			return func_49(iParam0, 0);
		case 43:
			return func_49(iParam0, 0);
		case 44:
			return func_49(iParam0, 0);
		case 45:
			return func_49(iParam0, 0);
		case 46:
			return "SB_AMU";
		case 47:
			return "SB_AMU";
		case 48:
			return "SB_AMU";
		case 49:
			return "SB_AMU";
		case 52:
			return "SB_AMU";
		case 50:
			return "SB_BAR";
		case 51:
			return "S_CL_BL";
	}
	return "SHOP_BLIP_INV";
}

char* func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
		case 0:
			return "S_H_01";
		case 1:
			return "S_H_02";
		case 2:
			return "S_H_03";
		case 3:
			return "S_H_04";
		case 4:
			return "S_H_05";
		case 5:
			return "S_H_06";
		case 6:
			return "S_H_07";
		case 7:
			return "S_CL_01";
		case 8:
			return "S_CL_02";
		case 9:
			return "S_CL_03";
		case 10:
			return "S_CL_04";
		case 11:
			return "S_CL_05";
		case 12:
			return "S_CL_06";
		case 13:
			return "S_CL_07";
		case 14:
			return "S_CM_01";
		case 15:
			return "S_CM_03";
		case 16:
			return "S_CM_04";
		case 17:
			return "S_CM_05";
		case 18:
			return "S_CH_01";
		case 19:
			return "S_CH_02";
		case 20:
			return "S_CH_03";
		case 21:
			return "S_CA_01";
		case 22:
			return "S_T_01";
		case 23:
			return "S_T_02";
		case 24:
			return "S_T_03";
		case 25:
			return "S_T_04";
		case 26:
			return "S_T_05";
		case 27:
			return "S_T_06";
		case 28:
			return "S_G_01";
		case 29:
			return "S_G_02";
		case 30:
			return "S_G_03";
		case 31:
			return "S_G_04";
		case 32:
			return "S_G_05";
		case 33:
			return "S_G_06";
		case 34:
			return "S_G_07";
		case 35:
			return "S_G_08";
		case 36:
			return "S_G_09";
		case 37:
			return "S_G_10";
		case 38:
			return "S_G_11";
		case 39:
			return "S_MO_01";
		case 40:
			return "S_MO_05";
		case 41:
			return "S_MO_06";
		case 42:
			return "S_MO_07";
		case 43:
			return "S_MO_08";
		case 44:
			return "S_MO_09";
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "S_MO_10";
				case 11:
					return "S_MO_B";
				case 10:
					return "S_MO_T";
				case 12:
					return "S_MO_HA";
				case 13:
					return "S_MO_AOC";
				case 14:
					return "S_MO_AOC";
				case 15:
					return "S_MO_AOC";
				case 16:
					return "S_MO_AOC";
				case 17:
					return "S_MO_AOC";
			}
			return "S_MO_11";
		case 46:
			return "S_G_12";
		case 47:
			return "S_G_13";
		case 48:
			return "S_G_14";
		case 49:
			return "S_G_15";
		case 52:
			return "S_G_16";
		case 50:
			return "S_H_08";
		case 51:
			return "S_CL_09";
	}
	return "SHOP_NAME_EMPTY";
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 263;
		case 0:
			return 19;
		case 1:
			return 20;
		case 2:
			return 21;
		case 3:
			return 22;
		case 4:
			return 23;
		case 5:
			return 24;
		case 6:
			return 25;
		case 7:
			return 26;
		case 8:
			return 27;
		case 9:
			return 28;
		case 10:
			return 29;
		case 11:
			return 30;
		case 12:
			return 31;
		case 13:
			return 32;
		case 14:
			return 33;
		case 15:
			return 35;
		case 16:
			return 36;
		case 17:
			return 37;
		case 18:
			return 38;
		case 19:
			return 39;
		case 20:
			return 40;
		case 21:
			return 41;
		case 22:
			return 42;
		case 23:
			return 43;
		case 24:
			return 44;
		case 25:
			return 45;
		case 26:
			return 46;
		case 27:
			return 47;
		case 28:
			return 48;
		case 29:
			return 49;
		case 30:
			return 50;
		case 31:
			return 51;
		case 32:
			return 52;
		case 33:
			return 53;
		case 34:
			return 54;
		case 35:
			return 55;
		case 36:
			return 56;
		case 37:
			return 57;
		case 38:
			return 58;
		case 39:
			return 59;
		case 40:
			return 60;
		case 41:
			return 61;
		case 42:
			return 62;
		case 43:
			return 63;
		case 44:
			return 64;
		case 45:
			return 64;
		case 46:
			return 48;
		case 47:
			return 48;
		case 48:
			return 48;
		case 49:
			return 48;
		case 52:
			return 48;
		case 50:
			return 25;
		case 51:
			return 40;
		default:
			break;
	}
	return 263;
}

void func_51()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

