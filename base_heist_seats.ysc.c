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
	struct<14> Local_47[30];
	var uLocal_468 = 0;
	var uLocal_469 = -1;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = -1;
	var uLocal_474 = -1;
	var uLocal_475 = -1;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	int iLocal_484 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (func_78())
	{
		while (!func_64())
		{
			func_11();
			SYSTEM::WAIT(0);
		}
	}
	func_1();
}

void func_1()
{
	MISC::CLEAR_BIT(&Global_1573978, 1);
	func_3(&Local_47);
	func_2();
}

void func_2()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(int iParam0)
{
	func_9(&(iParam0->f_421.f_5));
	func_4(iParam0, 1);
}

void func_4(int iParam0, bool bParam1)
{
	if (func_5(iParam0))
	{
		HUD::CLEAR_HELP(true);
	}
	if (bParam1)
	{
		func_9(&(iParam0->f_421.f_5));
	}
}

bool func_5(int iParam0)
{
	var uVar0;
	var uVar4;

	func_7(iParam0, iParam0->f_421.f_2, &uVar0);
	func_7(iParam0, iParam0->f_421.f_2, &uVar4);
	return (func_6(&uVar0) || func_6(&uVar4));
}

bool func_6(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_7(int iParam0, int iParam1, char* sParam2)
{
	if (func_8(&(iParam0->f_421), 7))
	{
		Stack.Push(iParam0[iParam1 /*14*/]);
		Stack.Push(iParam1);
		Stack.Push(sParam2);
		Call_Loc(iParam0->f_421.f_14);
	}
	else
	{
		StringCopy(sParam2, "MPJAC_EXIT", 16);
	}
}

bool func_8(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

void func_9(var uParam0)
{
	int iVar0;

	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_10(*uParam0);
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

int func_10(int iParam0)
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

void func_11()
{
	func_19(&Local_47);
	if (Global_1590380 == PLAYER::PLAYER_ID() && !MISC::IS_BIT_SET(Global_1692770[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*39*/].f_27, 5))
	{
		if (func_18(&Local_47, 1, 1))
		{
			func_17(&Local_47);
		}
		if (func_18(&Local_47, 0, 0))
		{
			MISC::SET_BIT(&Global_1573978, 1);
			if ((((((iLocal_484 == 0 && !MISC::IS_BIT_SET(Global_1692770[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*39*/].f_27, 3)) && !func_16()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !func_15(0)) && !func_14()) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 225))
			{
				func_12(&Local_47);
			}
		}
		else
		{
			MISC::CLEAR_BIT(&Global_1573978, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_1573978, 1);
	}
	iLocal_484 = 0;
	if (MISC::IS_BIT_SET(Global_1692770[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*39*/].f_27, 3))
	{
		MISC::SET_BIT(&iLocal_484, 0);
	}
	if (func_16())
	{
		MISC::SET_BIT(&iLocal_484, 1);
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		MISC::SET_BIT(&iLocal_484, 2);
	}
	if (func_14())
	{
		MISC::SET_BIT(&iLocal_484, 4);
	}
	if (func_15(0))
	{
		MISC::SET_BIT(&iLocal_484, 3);
	}
}

void func_12(int iParam0)
{
	func_13(&(iParam0->f_421), 10);
}

void func_13(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_14()
{
	return Global_73825;
}

bool func_15(int iParam0)
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

bool func_16()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return false;
	}
	return true;
}

void func_17(int iParam0)
{
	func_13(&(iParam0->f_421), 9);
}

bool func_18(int iParam0, bool bParam1, bool bParam2)
{
	return ((iParam0->f_421.f_4 > 2 && (bParam1 || func_8(&(iParam0->f_421), 11))) && (bParam2 || iParam0->f_421.f_4 < 8));
}

void func_19(int iParam0)
{
	var uVar0;
	var uVar16;
	struct<14> Var20;
	vector3 vVar34;
	vector3 vVar37;
	float fVar40;
	int iVar41;
	void fVar42;
	void fVar43;

	func_62(iParam0);
	func_60(iParam0);
	Var20.f_1.f_6 = 1061158912;
	Var20 = { *(iParam0[iParam0->f_421.f_2 /*14*/]) };
	switch (iParam0->f_421.f_4)
	{
		case 0:
			func_59(&(iParam0->f_421), 11);
			func_58(iParam0, 1);
			break;
		case 1:
			if (func_57(iParam0))
			{
				iParam0->f_421.f_6 = MISC::GET_GAME_TIMER();
				func_58(iParam0, 2);
			}
			break;
		case 2:
			if (func_56(PLAYER::PLAYER_PED_ID(), iParam0[iParam0->f_421.f_2 /*14*/]))
			{
				if ((func_55(iParam0) || func_53(iParam0)) || !func_52(iParam0))
				{
					func_4(iParam0, 1);
					func_58(iParam0, 1);
				}
				else if (iParam0->f_421.f_5 == -1)
				{
					if ((MISC::GET_GAME_TIMER() - iParam0->f_421.f_6) > 150)
					{
						func_51(&(iParam0->f_421.f_5), 4, "MPJAC_SIT", 0, 0, 0, 0);
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
				{
					func_9(&(iParam0->f_421.f_5));
					func_48(iParam0);
					func_58(iParam0, 3);
				}
			}
			else
			{
				func_4(iParam0, 1);
				func_58(iParam0, 1);
			}
			break;
		case 3:
			func_47(iParam0, &uVar0);
			STREAMING::REQUEST_ANIM_DICT(&uVar0);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&uVar0))
			{
				func_58(iParam0, 4);
			}
			break;
		case 4:
			func_47(iParam0, &uVar0);
			func_46(iParam0, &uVar16);
			if (Var20 != 3)
			{
				vVar34 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&uVar0, &uVar16, func_45(iParam0), func_44(iParam0), 0f, 2) };
				vVar37 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&uVar0, &uVar16, func_45(iParam0), func_44(iParam0), 0f, 2) };
				fVar40 = vVar37.z;
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), vVar34, 1f, 500, fVar40, 0.15f);
			}
			func_58(iParam0, 5);
			break;
		case 5:
			func_33(iParam0);
			func_47(iParam0, &uVar0);
			func_46(iParam0, &uVar16);
			if (Var20 == 3)
			{
				iVar41 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1920390111);
			}
			else
			{
				iVar41 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073);
			}
			if (iVar41 != 1 && iVar41 != 0)
			{
				iParam0->f_421.f_1 = NETWORK::_0x77758139EC9B66C7(func_45(iParam0), func_44(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
				NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_421.f_1, &uVar0, &uVar16, 2f, -1000f, 13, 16, 1.5f, 0);
				NETWORK::NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(iParam0->f_421.f_1);
				iParam0->f_421.f_8.f_4 = MISC::GET_GAME_TIMER();
				func_13(&(iParam0->f_421), 8);
				func_58(iParam0, 6);
			}
			break;
		case 6:
			if (func_8(&(iParam0->f_421), 10))
			{
				func_59(&(iParam0->f_421), 10);
				func_32(iParam0);
			}
			func_33(iParam0);
			func_26(iParam0);
			fVar42 = NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iParam0->f_421.f_1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(fVar42))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(fVar42) >= 1f)
				{
					func_20(iParam0, 0);
					func_47(iParam0, &uVar0);
					func_46(iParam0, &uVar16);
					iParam0->f_421.f_1 = NETWORK::_0x77758139EC9B66C7(func_45(iParam0), func_44(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
					NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_421.f_1, &uVar0, &uVar16, 4f, -1.5f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(iParam0->f_421.f_1);
					func_13(&(iParam0->f_421), 8);
					func_13(&(iParam0->f_421), 11);
				}
				else
				{
					func_59(&(iParam0->f_421), 8);
				}
			}
			else if (!func_8(&(iParam0->f_421), 8))
			{
				func_58(iParam0, 8);
			}
			break;
		case 7:
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam0->f_421.f_1);
			func_58(iParam0, 8);
			break;
		case 8:
			fVar43 = NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iParam0->f_421.f_1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(fVar43))
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(fVar43) >= 1f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 364629851)) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2116425869))
				{
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam0->f_421.f_1);
					func_4(iParam0, 1);
					func_58(iParam0, 0);
				}
			}
			else
			{
				func_4(iParam0, 1);
				func_58(iParam0, 0);
			}
			break;
	}
}

void func_20(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam1)
	{
		iVar1 = func_21(iParam0);
		if (iVar1 != iParam0->f_421.f_8.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + iParam0->f_421.f_8.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = iParam0->f_421.f_8.f_2;
		}
		iVar1 = iParam0->f_421.f_8.f_1;
	}
	else if (iParam0->f_421.f_8.f_2 == 5)
	{
		iVar1 = iParam0->f_421.f_8.f_1;
		iVar2 = 3;
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		if (iVar0 == iParam0->f_421.f_8.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (iParam0->f_421.f_8.f_2 > 6)
		{
			iVar1 = func_21(iParam0);
			iParam0->f_421.f_8.f_4 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = iParam0->f_421.f_8.f_1;
		}
		if ((MISC::GET_GAME_TIMER() - iParam0->f_421.f_8.f_4) >= 90000)
		{
			iVar1 = func_21(iParam0);
			if (iVar1 != iParam0->f_421.f_8.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + iParam0->f_421.f_8.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = iParam0->f_421.f_8.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	iParam0->f_421.f_8.f_3 = iParam0->f_421.f_8.f_2;
	iParam0->f_421.f_8.f_2 = iVar0;
	iParam0->f_421.f_8.f_1 = iVar1;
}

int func_21(int iParam0)
{
	if (iParam0->f_421.f_8 == 2)
	{
		return iParam0->f_421.f_8.f_1;
	}
	return (iParam0->f_421.f_8.f_1 + 1 % func_22(iParam0->f_421.f_8));
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return func_23(func_24(), 4, 5);
		case 2:
			return 5;
		default:
			break;
	}
	return 0;
}

int func_23(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_24()
{
	return func_25(PLAYER::PLAYER_ID());
}

int func_25(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("MP_F_FREEMODE_01"))
	{
		return 1;
	}
	return 0;
}

void func_26(int iParam0)
{
	vector3 vVar0;
	float fVar3;

	if (iParam0->f_421.f_4 == 6)
	{
		vVar0 = { PAD::GET_CONTROL_NORMAL(0, 218), PAD::GET_CONTROL_NORMAL(0, 219), 0f };
		fVar3 = SYSTEM::VMAG(vVar0);
		if ((iParam0->f_421.f_4 == 6 && !ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1322051853)) && !func_8(&(iParam0->f_421), 12))
		{
			if (fVar3 >= 0.35f)
			{
				func_31(iParam0);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1322051853))
		{
			func_4(iParam0, 1);
		}
		else if (func_30(iParam0))
		{
			func_4(iParam0, 1);
		}
		else
		{
			PAD::_0x7F4724035FDCA1DD(2);
			PAD::DISABLE_CONTROL_ACTION(0, 24, true);
			PAD::DISABLE_CONTROL_ACTION(0, 257, true);
			PAD::DISABLE_CONTROL_ACTION(0, 142, true);
			PAD::DISABLE_CONTROL_ACTION(0, 141, true);
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 263, true);
			PAD::DISABLE_CONTROL_ACTION(0, 264, true);
			PAD::DISABLE_CONTROL_ACTION(0, 143, true);
			PAD::DISABLE_CONTROL_ACTION(2, 200, true);
			if (((((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_8(&(iParam0->f_421), 0)) && !func_8(&(iParam0->f_421), 4)) && !func_29()) && !func_27(1)) && iParam0->f_421.f_8.f_2 != 3)
			{
				if (iParam0->f_421.f_5 == -1)
				{
					func_51(&(iParam0->f_421.f_5), 4, "MPJAC_EXIT", 0, 0, 0, 0);
				}
				if (iParam0->f_421.f_4 == 6)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
					{
						func_32(iParam0);
					}
				}
			}
		}
	}
	func_59(&(iParam0->f_421), 9);
}

bool func_27(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_28(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
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
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return true;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return true;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_28(int iParam0)
{
	int iVar0;

	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER")) || iVar0 == joaat("WEAPON_MARKSMANRIFLE")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_29()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return false;
	}
	return true;
}

bool func_30(int iParam0)
{
	return func_8(&(iParam0->f_421), 9);
}

void func_31(int iParam0)
{
	var uVar0;
	var uVar16;

	if (((func_21(iParam0) != iParam0->f_421.f_8.f_1 && iParam0->f_421.f_8.f_2 < 6) && iParam0->f_421.f_8.f_2 != 3) && iParam0->f_421.f_8.f_2 != 4)
	{
		func_20(iParam0, 1);
		func_47(iParam0, &uVar0);
		func_46(iParam0, &uVar16);
		iParam0->f_421.f_1 = NETWORK::_0x77758139EC9B66C7(func_45(iParam0), func_44(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
		NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_421.f_1, &uVar0, &uVar16, 4f, -1.5f, 13, 16, 1000f, 0);
		NETWORK::NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(iParam0->f_421.f_1);
		func_13(&(iParam0->f_421), 8);
		PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), false, false);
	}
}

void func_32(int iParam0)
{
	var uVar0;

	iParam0->f_421.f_1 = NETWORK::_0x77758139EC9B66C7(func_45(iParam0), func_44(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
	func_47(iParam0, &uVar0);
	NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_421.f_1, &uVar0, "exit", 4f, -4f, 13, 16, 1000f, 0);
	NETWORK::NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(iParam0->f_421.f_1);
	func_9(&(iParam0->f_421.f_5));
	func_58(iParam0, 8);
}

void func_33(int iParam0)
{
	int iVar0;

	switch (iParam0->f_421.f_4)
	{
		case 4:
		case 8:
			func_38(1);
		case 6:
			CAM::INVALIDATE_IDLE_CAM();
			HUD::HUD_FORCE_WEAPON_WHEEL(false);
			HUD::DISPLAY_AMMO_THIS_FRAME(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			HUD::_HUD_WEAPON_WHEEL_IGNORE_SELECTION();
			func_37();
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true) && iVar0 != joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
			PAD::DISABLE_CONTROL_ACTION(0, 37, true);
			func_35(1);
			func_34();
			break;
	}
}

void func_34()
{
	Global_22211.f_6 = 1;
}

void func_35(bool bParam0)
{
	if (bParam0)
	{
		if (func_36())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

bool func_36()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 11);
}

void func_37()
{
	MISC::SET_BIT(&Global_7357, 4);
}

void func_38(int iParam0)
{
	if (func_43())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_15(0))
		{
			func_39(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_39(int iParam0)
{
	if (func_43())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_42())
		{
			func_41(1, 1);
		}
		else
		{
			func_41(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_40())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_40()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_41(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19423);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
}

bool func_42()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

bool func_43()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

Vector3 func_44(int iParam0)
{
	vector3 vVar0;

	vVar0 = { (iParam0[iParam0->f_421.f_2 /*14*/])->f_8.f_3 };
	if (func_24() && iParam0->f_421.f_8 == 0)
	{
		vVar0.f_2 = (vVar0.z - 4f);
	}
	return vVar0;
}

Vector3 func_45(int iParam0)
{
	return (iParam0[iParam0->f_421.f_2 /*14*/])->f_8;
}

void func_46(int iParam0, char* sParam1)
{
	switch (iParam0->f_421.f_8.f_2)
	{
		case 0:
			StringCopy(sParam1, "IDLE_A", 16);
			break;
		case 1:
			StringCopy(sParam1, "IDLE_B", 16);
			break;
		case 2:
			StringCopy(sParam1, "IDLE_C", 16);
			break;
		case 3:
			StringCopy(sParam1, "ENTER", 16);
			break;
		case 5:
			StringCopy(sParam1, "BASE", 16);
			break;
		case 4:
			StringCopy(sParam1, "EXIT", 16);
			break;
		case 7:
			StringCopy(sParam1, "A_TO_B", 16);
			break;
		case 8:
			StringCopy(sParam1, "B_TO_C", 16);
			break;
		case 9:
			StringCopy(sParam1, "C_TO_D", 16);
			break;
		case 10:
			StringCopy(sParam1, "D_TO_E", 16);
			break;
		case 12:
			StringCopy(sParam1, "B_TO_E", 16);
			break;
		case 13:
			StringCopy(sParam1, "C_TO_A", 16);
			break;
		case 14:
			StringCopy(sParam1, "D_TO_A", 16);
			break;
		case 15:
			StringCopy(sParam1, "E_TO_A", 16);
			break;
		default:
			StringCopy(sParam1, "invalid_clip", 16);
			break;
	}
}

void func_47(int iParam0, char* sParam1)
{
	switch (iParam0->f_421.f_8)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@CLUBHOUSE@SEATING", 64);
			break;
		case 1:
			StringCopy(sParam1, "ANIM@AMB@OFFICE@SEATING", 64);
			break;
		case 2:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
	}
	if (func_24())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (iParam0->f_421.f_8)
	{
		case 1:
		case 0:
			switch (iParam0->f_421.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@BASE@", 64);
					break;
				case 1:
					StringConCat(sParam1, "@VAR_B@BASE@", 64);
					break;
				case 2:
					StringConCat(sParam1, "@VAR_C@BASE@", 64);
					break;
				case 3:
					StringConCat(sParam1, "@VAR_D@BASE@", 64);
					break;
				case 4:
					StringConCat(sParam1, "@VAR_E@BASE@", 64);
					break;
			}
			break;
		case 2:
			switch (iParam0->f_421.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				case 1:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				case 2:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				case 3:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				case 4:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
	}
}

void func_48(int iParam0)
{
	iParam0->f_421.f_8 = func_50((*iParam0)[iParam0->f_421.f_2 /*14*/]);
	iParam0->f_421.f_8.f_1 = func_49(iParam0);
	iParam0->f_421.f_8.f_2 = 3;
	iParam0->f_421.f_8.f_3 = 3;
}

int func_49(int iParam0)
{
	int iVar0;

	switch (iParam0->f_421.f_8)
	{
		case 2:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			if (iVar0 >= 1)
			{
				iVar0++;
			}
			break;
		default:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_22(iParam0->f_421.f_8));
			break;
	}
	return iVar0;
}

int func_50(int iParam0)
{
	if (iParam0 >= 11)
	{
		return 0;
	}
	else if (iParam0 >= 9)
	{
		return 0;
	}
	else if (iParam0 >= 7)
	{
		return 0;
	}
	else if (iParam0 >= 4)
	{
		return 0;
	}
	else if (iParam0 > 1)
	{
		return 2;
	}
	return 0;
}

void func_51(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;

	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CONTEXT_CONTROLLER")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_9(uParam0);
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
			*uParam0 = Global_42151[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_52(int iParam0)
{
	Stack.Push(!func_8(&(iParam0->f_421), 5));
	Stack.Push(iParam0[iParam0->f_421.f_2 /*14*/]);
	Stack.Push(iParam0->f_421.f_2);
	Call_Loc(iParam0->f_421.f_13);
	return (StackVal || StackVal);
}

bool func_53(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if ((iVar1 != PLAYER::PLAYER_ID() && func_54(iVar1, 1, 1)) && func_56(PLAYER::GET_PLAYER_PED(iVar1), iParam0[iParam0->f_421.f_2 /*14*/]))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_54(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return false;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[iVar0])
				{
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

bool func_55(int iParam0)
{
	return iParam0->f_421 & 31 > 0;
}

bool func_56(int iParam0, var uParam1)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, false, true, 0);
}

bool func_57(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_56(PLAYER::PLAYER_PED_ID(), iParam0[iParam0->f_421.f_2 /*14*/]))
		{
			return true;
		}
		else
		{
			iParam0->f_421.f_2 = (iParam0->f_421.f_2 + 1 % 30);
		}
		iVar0++;
	}
	return false;
}

void func_58(int iParam0, int iParam1)
{
	iParam0->f_421.f_4 = iParam1;
}

void func_59(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_60(int iParam0)
{
	if (iParam0->f_421.f_4 == 6)
	{
	}
	else if (iParam0->f_421.f_4 > 4)
	{
		CAM::_0x2AED6301F67007D5(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_61(iParam0));
		iParam0->f_421.f_7 = MISC::GET_FRAME_COUNT();
	}
	else if (iParam0->f_421.f_4 > 1)
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_61(iParam0));
		iParam0->f_421.f_7 = MISC::GET_FRAME_COUNT();
	}
	else if ((MISC::GET_FRAME_COUNT() - iParam0->f_421.f_7) < 5)
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_61(iParam0));
	}
}

float func_61(int iParam0)
{
	switch ((*iParam0)[iParam0->f_421.f_2 /*14*/])
	{
		case 12:
		case 10:
		case 6:
			return 0.24f;
		case 2:
			return 0.16f;
		case 3:
			return 0.18f;
		default:
			break;
	}
	return 0.13f;
}

void func_62(int iParam0)
{
	func_63(&(iParam0->f_421), 4, func_14());
	func_63(&(iParam0->f_421), 1, ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false));
	func_63(&(iParam0->f_421), 3, PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true));
	func_63(&(iParam0->f_421), 0, func_15(0));
	func_63(&(iParam0->f_421), 2, TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()));
}

void func_63(int* iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam1;
	if (bParam2)
	{
		MISC::SET_BIT(iParam0, iVar0);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, iVar0);
	}
}

bool func_64()
{
	if (!func_77(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (func_66())
	{
		return true;
	}
	if (Global_1590380 == func_65())
	{
		return true;
	}
	return false;
}

int func_65()
{
	return -1;
}

bool func_66()
{
	var uVar0;

	func_74(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return true;
		}
	}
	if (func_73())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_72())
	{
		return true;
	}
	if (func_71(159))
	{
		if (!func_70())
		{
			return true;
		}
	}
	if (func_71(157))
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	if (func_67() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_67()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_67()
{
	switch (func_69())
	{
		case 0:
			return func_68();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_68()
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

int func_69()
{
	return Global_30768;
}

bool func_70()
{
	return Global_2450632.f_598;
}

bool func_71(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_72()
{
	return Global_2460680;
}

bool func_73()
{
	return Global_2450632.f_593;
}

void func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_75(iVar0);
					break;
				case 589125870:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar4, 4);
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

void func_75(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_54(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_76(iVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar4, vVar0.z);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
}

bool func_76(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_77(int iParam0)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 354.4375f, 4877.2f, -62.34054f, 345.1211f, 4864.095f, -55.11187f, 16f, false, true, 0);
}

bool func_78()
{
	if (Global_1590380 != func_65())
	{
		if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("base_heist_seats", Global_1590380, true, 0))
		{
			return false;
		}
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Global_1590380);
		func_90(0, -1, 0);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		func_79();
		return true;
	}
	return false;
}

void func_79()
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_89() };
	vVar3 = { func_88() };
	func_85(0, func_87(343.93f, 4875.389f, -60.44f, -90f), -90f, vVar0, vVar3);
	func_85(1, func_87(344.08f, 4874.239f, -60.44f, -86f), -86f, vVar0, vVar3);
	func_85(2, func_87(344.33f, 4873.189f, -60.44f, -78f), -78f, vVar0, vVar3);
	func_85(3, func_87(344.7f, 4872.239f, -60.44f, -72f), -72f, vVar0, vVar3);
	func_85(4, func_87(345.06f, 4871.48f, -60.44f, -67f), -67f, vVar0, vVar3);
	func_85(5, func_87(345.86f, 4870.289f, -60.44f, -60f), -60f, vVar0, vVar3);
	func_85(6, func_87(350.41f, 4867.05f, -60.44f, -26f), -26f, vVar0, vVar3);
	func_85(7, func_87(351.51f, 4866.75f, -60.44f, -17f), -17f, vVar0, vVar3);
	func_85(8, func_87(352.66f, 4866.6f, -60.44f, -10f), -10f, vVar0, vVar3);
	func_85(9, func_87(353.6f, 4866.58f, -60.44f, -4f), -4f, vVar0, vVar3);
	func_85(10, func_87(354.7f, 4866.68f, -60.44f, 4f), 4f, vVar0, vVar3);
	func_85(11, func_87(355.85f, 4866.91f, -60.44f, 10f), 10f, vVar0, vVar3);
	func_85(12, func_87(346.02f, 4876.871f, -60.838f, -102f), -102f, vVar0, vVar3);
	func_85(13, func_87(345.97f, 4875.721f, -60.838f, -93f), -93f, vVar0, vVar3);
	func_85(14, func_87(346.19f, 4874.21f, -60.838f, -81f), -81f, vVar0, vVar3);
	func_85(15, func_87(346.62f, 4873.01f, -60.838f, -73f), -73f, vVar0, vVar3);
	func_85(16, func_87(347.27f, 4871.86f, -60.838f, -62f), -62f, vVar0, vVar3);
	func_85(17, func_87(351.57f, 4868.86f, -60.838f, -20f), -20f, vVar0, vVar3);
	func_85(18, func_87(352.89f, 4868.65f, -60.838f, -9f), -9f, vVar0, vVar3);
	func_85(19, func_87(354.17f, 4868.68f, -60.838f, 0f), 0f, vVar0, vVar3);
	func_85(20, func_87(355.12f, 4868.85f, -60.838f, 10f), 8f, vVar0, vVar3);
	func_85(21, func_87(356.58f, 4869.38f, -60.838f, 10f), 20f, vVar0, vVar3);
	func_85(22, func_87(348.2f, 4876.56f, -61.24f, -101f), -101f, vVar0, vVar3);
	func_85(23, func_87(348.2f, 4875.31f, -61.24f, -88f), -88f, vVar0, vVar3);
	func_85(24, func_87(348.47f, 4874.28f, -61.24f, -76f), -76f, vVar0, vVar3);
	func_85(25, func_87(349.17f, 4872.97f, -61.24f, -60f), -60f, vVar0, vVar3);
	func_85(26, func_87(352.12f, 4870.98f, -61.24f, -20f), -20f, vVar0, vVar3);
	func_85(27, func_87(353.42f, 4870.84f, -61.24f, -6f), -6f, vVar0, vVar3);
	func_85(28, func_87(354.67f, 4870.995f, -61.24f, 8f), 8f, vVar0, vVar3);
	func_85(29, func_87(356.02f, 4871.545f, -61.24f, 25f), 25f, vVar0, vVar3);
	func_80(&Local_47, 8404);
}

void func_80(int iParam0, int iParam1)
{
	iParam0->f_421.f_13 = iParam1;
	func_13(&(iParam0->f_421), 5);
}

bool func_81(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	bool bVar13;

	if (iParam1 < 22)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return false;
	}
	if (func_84(PLAYER::PLAYER_ID()) || MISC::IS_BIT_SET(iLocal_484, 0))
	{
		return false;
	}
	vVar0 = { uParam0->f_1 };
	vVar3 = { uParam0->f_1.f_3 };
	vVar0.f_2 = 0f;
	vVar3.f_2 = 0f;
	vVar6 = { func_83(vVar0 - vVar3) };
	vVar9 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
	fVar12 = func_82(vVar6, vVar9);
	bVar13 = fVar12 > 0.36f;
	return bVar13;
}

float func_82(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_83(vector3 vParam0)
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

bool func_84(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_54(iParam0, 1, 1))
		{
			if (MISC::IS_BIT_SET(Global_1692770[iParam0 /*39*/].f_27, 3))
			{
				return true;
			}
		}
	}
	return false;
}

void func_85(int iParam0, vector3 vParam1, float fParam4, vector3 vParam5, vector3 vParam8)
{
	Local_47[iParam0 /*14*/] = 3;
	Local_47[iParam0 /*14*/].f_1 = { vParam1 + func_86(vParam5, (fParam4 - 180f)) };
	Local_47[iParam0 /*14*/].f_1.f_3 = { vParam1 + func_86(vParam8, (fParam4 - 180f)) };
	Local_47[iParam0 /*14*/].f_1.f_6 = 1f;
	Local_47[iParam0 /*14*/].f_8 = { vParam1 };
	Local_47[iParam0 /*14*/].f_8.f_3 = { 0f, 0f, fParam4 };
}

Vector3 func_86(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

Vector3 func_87(vector3 vParam0, float fParam3)
{
	return vParam0 + func_86(0f, 0.01f, 0.015f, fParam3);
}

Vector3 func_88()
{
	return 0f, -0.7f, -1f;
}

Vector3 func_89()
{
	return 0f, 0.1f, 1f;
}

int func_90(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_91())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_73())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_71(157))
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_2();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_91()
{
	return Global_1312854;
}

