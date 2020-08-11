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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_64 = { 0f, 0f, 0f };
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72[4] = { 0, 0, 0, 0 };
	int iLocal_77[4] = { 0, 0, 0, 0 };
	vector3 vLocal_82 = { 0f, 0f, 0f };
	float fLocal_85 = 0f;
	vector3 vLocal_86[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_99[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_112[4] = { 0, 0, 0, 0 };
	char cLocal_117[32] = "";
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<8> Local_125[4];
	int iLocal_158 = 0;
	int iLocal_159[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_166[6] = { 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_173[6] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
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
	vLocal_61 = { 0f, 0f, 0f };
	vLocal_64 = { 0f, 0f, 0f };
	iLocal_67 = -1;
	iLocal_70 = 318;
	iLocal_71 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_34();
	}
	SYSTEM::WAIT(0);
	func_22();
	func_20();
	func_16();
	while (iLocal_71 && func_6(4, 0))
	{
		SYSTEM::WAIT(0);
		switch (iLocal_69)
		{
			case 0:
				if (func_4())
				{
					iLocal_69 = 1;
				}
				break;
			case 1:
				if (func_2())
				{
					iLocal_69 = 2;
				}
				break;
			case 2:
				func_1();
				break;
		}
	}
	func_34();
}

void func_1()
{
	iLocal_71 = 0;
}

bool func_2()
{
	float fVar0;

	func_3(&iLocal_72, &iLocal_112);
	fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vLocal_82);
	if (fVar0 > (100f * 100f))
	{
		return true;
	}
	return false;
}

int func_3(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[iVar1]))
		{
			switch ((*iParam1)[iVar1])
			{
				case 0:
					break;
				case 1:
					break;
				default:
					break;
			}
			iVar0 = 1;
		}
		else if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar1]))
		{
		}
		iVar1++;
	}
	return iVar0;
}

bool func_4()
{
	func_3(&iLocal_72, &iLocal_112);
	if (!func_5())
	{
		return true;
	}
	return false;
}

bool func_5()
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
	{
		return false;
	}
	if (STREAMING::GET_PLAYER_SWITCH_STATE() > 8)
	{
		if (STREAMING::GET_PLAYER_SWITCH_STATE() != 11)
		{
			return false;
		}
		if (STREAMING::GET_PLAYER_SWITCH_STATE() == 11)
		{
			if (STREAMING::GET_PLAYER_SWITCH_INTERP_OUT_DURATION() > 0)
			{
				if (STREAMING::_0x5B48A06DD0E792A5() > 100)
				{
					return false;
				}
			}
		}
	}
	return true;
}

int func_6(int iParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() <= 2 && STREAMING::GET_PLAYER_SWITCH_STATE() != 1)
			{
				return 1;
			}
		}
	}
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (func_15(14))
		{
			return 0;
		}
		if (MISC::GET_IS_PLAYER_IN_ANIMAL_FORM())
		{
			return 0;
		}
		if (!func_8(iParam0, func_9()))
		{
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
			fVar3 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vVar0);
			if (fVar3 > 250f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam1))
					{
						return 0;
					}
				}
				else if (!CAM::IS_SPHERE_VISIBLE(vVar0, 1.5f))
				{
					return 0;
				}
			}
		}
		else if (iParam1 == func_7(Global_98465) && iParam1 != 0)
		{
			Global_98465 = 0;
		}
	}
	return 1;
}

int func_7(var uParam0)
{
	return uParam0;
}

bool func_8(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_9()
{
	func_10();
	switch (Global_111638.f_2358.f_539.f_4321)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
	}
	return 0;
}

void func_10()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_13(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_12(PLAYER::PLAYER_PED_ID());
			if (func_11(iVar0) && (!func_15(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_11(Global_111638.f_2358.f_539.f_4321))
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

bool func_11(int iParam0)
{
	return iParam0 < 3;
}

int func_12(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_13(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_13(int iParam0)
{
	if (func_11(iParam0))
	{
		return func_14(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_14(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_15(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_16()
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_19();
		}
		return;
	}
	if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
	{
		func_19();
		return;
	}
	func_17();
	if (Global_98467 > 0)
	{
		return;
	}
	STREAMING::_0x74DE2E8739086740();
}

void func_17()
{
	func_18((Global_98467 - 1));
}

void func_18(int iParam0)
{
	Global_98467 = iParam0;
}

void func_19()
{
	func_18(0);
}

void func_20()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;

	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 400)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 < iLocal_77)
		{
			if (iLocal_77[iVar0] != 0)
			{
				STREAMING::REQUEST_MODEL(iLocal_77[iVar0]);
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_77[iVar0]))
				{
					STREAMING::REQUEST_MODEL(iLocal_77[iVar0]);
					bVar2 = false;
				}
			}
			iVar0++;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_117))
		{
			STREAMING::REQUEST_ANIM_DICT(&cLocal_117);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_117))
			{
				STREAMING::REQUEST_ANIM_DICT(&cLocal_117);
				bVar2 = false;
			}
		}
		if (!bVar2)
		{
			iVar1++;
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_72)
	{
		if (iLocal_77[iVar0] != 0)
		{
			iLocal_72[iVar0] = PED::CREATE_PED(26, iLocal_77[iVar0], vLocal_82 + vLocal_86[iVar0 /*3*/], 0f, true, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_72[iVar0], Vector(fLocal_85, 0f, 0f) + vLocal_99[iVar0 /*3*/], 2, true);
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_72[iVar0], 0);
			if (iLocal_70 == 288)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_72[iVar0], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_72[iVar0], 4, 0, 0, 0);
			}
			else
			{
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_72[iVar0], 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_72[iVar0], 13, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_72[iVar0], 17, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_72[iVar0], true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_72[iVar0], false);
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_72[iVar0], &cLocal_117, &(Local_125[iVar0 /*8*/]), vLocal_82 + vLocal_86[iVar0 /*3*/], Vector(fLocal_85, 0f, 0f) + vLocal_99[iVar0 /*3*/], 1000f, -8f, -1, iLocal_158, 0f, 2, 0);
			PED::_0x2208438012482A1A(iLocal_72[iVar0], false, false);
			PED::SET_PED_KEEP_TASK(iLocal_72[iVar0], true);
			PED::SET_PED_RESET_FLAG(iLocal_72[iVar0], 55, true);
			if (iLocal_166[iVar0] > 0)
			{
				PED::APPLY_PED_BLOOD_BY_ZONE(iLocal_72[iVar0], 1, 0.36f, 0.71f, "ShotgunSmall");
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iLocal_72[iVar0], 1, 0.81f, 0.733f, 4);
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iLocal_72[iVar0], 0, 0.94f, 0.59f, 3);
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iLocal_72[iVar0], 3, 0.24f, 0.62f, 4);
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iLocal_72[iVar0], 2, 0f, 0.15f, 2);
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iLocal_72[iVar0], 5, 0.46f, 0.853f, 3);
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iLocal_72[iVar0], 4, 0.308f, 0.786f, 3);
				PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_72[iVar0], 3, 0.375f, 0.398f, 0f, 1f, -1, 0f, "BasicSlash");
				PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_72[iVar0], 3, 0.5f, 0.6f, 0f, 1f, -1, 0f, "BasicSlash");
				PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_72[iVar0], 3, 0.6f, 0.25f, 50f, 0.5f, -1, 0f, "BasicSlash");
				PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_72[iVar0], 3, 0.65f, 0.325f, 50f, 0.5f, -1, 0f, "BasicSlash");
				PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_72[iVar0], 0, 0.58f, 0.704f, 0f, 1f, -1, 0f, "ShotgunLarge");
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_159)
	{
		if (iLocal_166[iVar0] > 0)
		{
			vVar3 = { 0f, 0f, -1f };
			vVar6 = { func_21(0f, 1f, 0f) };
			fVar9 = 1.5f;
			fVar10 = 1.5f;
			fVar11 = 0.196f;
			fVar12 = 0f;
			fVar13 = 0f;
			fVar14 = 1f;
			fVar15 = -1f;
			iLocal_159[iVar0] = GRAPHICS::ADD_DECAL(iLocal_166[iVar0], vLocal_82 + vLocal_173[iVar0 /*3*/], vVar3, vVar6, fVar9, fVar10, fVar11, fVar12, fVar13, fVar14, fVar15, false, false, false);
			SYSTEM::WAIT(0);
		}
		iVar0++;
	}
}

Vector3 func_21(vector3 vParam0)
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

void func_22()
{
	char[] cVar0[8];
	struct<109> Var8;
	struct<97> Var117;

	iLocal_70 = Global_98147;
	func_26(iLocal_70, &vLocal_82, &fLocal_85, &cVar0);
	Var8.f_1 = -1;
	Var8.f_17 = 4;
	Var8.f_17.f_8 = 4;
	Var8.f_17.f_13 = 4;
	Var8.f_17.f_18 = 4;
	Var8.f_17.f_24 = 4;
	Var8.f_17.f_29 = 4;
	Var8.f_17.f_34 = 4;
	Var8.f_62 = 8;
	Var8.f_96.f_7 = 21;
	Var8.f_96.f_8 = 6;
	Var117.f_1 = -1;
	Var117.f_17 = 4;
	Var117.f_17.f_8 = 4;
	Var117.f_17.f_13 = 4;
	Var117.f_17.f_18 = 4;
	Var117.f_17.f_24 = 4;
	Var117.f_17.f_29 = 4;
	Var117.f_17.f_34 = 4;
	Var117.f_62 = 8;
	Var117.f_96.f_7 = 21;
	Var117.f_96.f_8 = 6;
	Var8 = 0;
	Var8.f_2 = iLocal_70;
	Var8.f_3 = Global_96222.f_45;
	func_23(Var8, &Var117);
	switch (iLocal_70)
	{
		case 280:
			StringCopy(&cLocal_117, "DEAD", 32);
			StringCopy(&(Local_125[0 /*8*/]), "Dead_A", 32);
			StringCopy(&(Local_125[1 /*8*/]), "Dead_D", 32);
			StringCopy(&(Local_125[2 /*8*/]), "Dead_E", 32);
			StringCopy(&(Local_125[3 /*8*/]), "Dead_G", 32);
			vLocal_86[0 /*3*/] = { 14.613f, 8.4563f, 0.9751f };
			vLocal_86[1 /*3*/] = { 10.6489f, 8.6708f, 0.7701f };
			vLocal_86[2 /*3*/] = { 6.3982f, 1.4604f, 1.1f };
			vLocal_86[3 /*3*/] = { 4.2327f, 5.864f, (0.9f - 0.15f) };
			vLocal_99[0 /*3*/] = { 0f, 0f, 23.047f };
			vLocal_99[1 /*3*/] = { 0f, 0f, 97.2582f };
			vLocal_99[2 /*3*/] = { 0f, 0f, 34.2158f };
			vLocal_99[3 /*3*/] = { 0f, 0f, 61.2158f };
			iLocal_77[0] = joaat("G_M_Y_LOST_01");
			iLocal_77[1] = joaat("G_M_Y_LOST_01");
			iLocal_77[2] = joaat("G_M_Y_LOST_02");
			iLocal_77[3] = joaat("G_M_Y_LOST_03");
			iLocal_158 = 2621440;
			iLocal_112[0] = 1;
			iLocal_112[1] = 1;
			iLocal_112[2] = 1;
			iLocal_112[3] = 1;
			iLocal_166[0] = 1110;
			iLocal_166[1] = 1110;
			iLocal_166[2] = 1110;
			iLocal_166[3] = 1110;
			vLocal_173[0 /*3*/] = { Vector(0.37364f, -1445.534f, 2803.76f) - vLocal_82 + Vector(0.1f, 0f, 0f) };
			vLocal_173[1 /*3*/] = { Vector(0.28778f, -1444.863f, 2800.022f) - vLocal_82 + Vector(0.1f, 0f, 0f) };
			vLocal_173[2 /*3*/] = { Vector(0.6045f, -1452.404f, 2795.934f) - vLocal_82 + Vector(0.1f, 0f, 0f) };
			vLocal_173[3 /*3*/] = { Vector(0.28483f, -1448.033f, 2794.301f) - vLocal_82 + Vector(0.1f, 0f, 0f) };
			iLocal_166[4] = 1015; /* GXTEntry: "You have been awarded the following liveries for the ~a~:~n~~a~~n~~a~~n~~a~~n~~a~" +
    "~n~~a~~n~~a~~n~~a~~n~Visit an appropriate mod shop or vehicle workshop to apply " +
    "these liveries." */
			iLocal_166[5] = 1015; /* GXTEntry: "You have been awarded the following liveries for the ~a~:~n~~a~~n~~a~~n~~a~~n~~a~" +
    "~n~~a~~n~~a~~n~~a~~n~Visit an appropriate mod shop or vehicle workshop to apply " +
    "these liveries." */
			vLocal_173[4 /*3*/] = { vLocal_173[0 /*3*/] + vLocal_173[2 /*3*/] / Vector(2f, 2f, 2f) + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 0.5f)) };
			vLocal_173[5 /*3*/] = { vLocal_173[1 /*3*/] + vLocal_173[2 /*3*/] / Vector(2f, 2f, 2f) + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 0.5f)) };
			break;
		default:
			StringCopy(&cLocal_117, "", 32);
			StringCopy(&(Local_125[0 /*8*/]), "", 32);
			StringCopy(&(Local_125[1 /*8*/]), "", 32);
			StringCopy(&(Local_125[2 /*8*/]), "", 32);
			StringCopy(&(Local_125[3 /*8*/]), "", 32);
			iLocal_77[0] = 0;
			vLocal_86[0 /*3*/] = { 0f, 0f, 0f };
			vLocal_99[0 /*3*/] = { 0f, 0f, 0f };
			iLocal_77[1] = 0;
			vLocal_86[1 /*3*/] = { 0f, 0f, 0f };
			vLocal_99[1 /*3*/] = { 0f, 0f, 0f };
			iLocal_77[2] = 0;
			vLocal_86[2 /*3*/] = { 0f, 0f, 0f };
			vLocal_99[2 /*3*/] = { 0f, 0f, 0f };
			iLocal_77[3] = 0;
			vLocal_86[3 /*3*/] = { 0f, 0f, 0f };
			vLocal_99[3 /*3*/] = { 0f, 0f, 0f };
			iLocal_158 = 0;
			iLocal_112[0] = -1;
			iLocal_112[1] = -1;
			iLocal_112[2] = -1;
			iLocal_112[3] = -1;
			iLocal_166[0] = -1;
			iLocal_166[1] = -1;
			iLocal_166[2] = -1;
			iLocal_166[3] = -1;
			iLocal_166[4] = -1;
			iLocal_166[5] = -1;
			break;
	}
}

int func_23(struct<109> Param0, var uParam109)
{
	uParam109->f_119 = 0;
	switch (Param0.f_2)
	{
		case 0:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1435919172;
			uParam109->f_110 = 1435919172;
			func_25(uParam109);
			uParam109->f_118 = 0;
			return 0;
		case 1:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = 0;
			return 1;
		case 2:
			*uParam109 = { Global_96855[0 /*109*/] };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = Global_98443[0];
			return 1;
		case 3:
			*uParam109 = { Global_96855[1 /*109*/] };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = Global_98443[1];
			return 1;
		case 4:
			*uParam109 = { Global_96855[2 /*109*/] };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = Global_98443[2];
			return 1;
		case 5:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = Global_98443[Param0.f_3];
			return 1;
		case 6:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = Global_98443[Param0.f_3];
			return 1;
		case 7:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = Global_98443[Param0.f_3];
			return 1;
		case 8:
		case 9:
		case 10:
			*uParam109 = { Param0 };
			uParam109->f_109 = 936589729;
			uParam109->f_110 = 936589729;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 11:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 14:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 13:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 15:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 54:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 55:
			*uParam109 = { Param0 };
			uParam109->f_109 = 936589729;
			uParam109->f_110 = 936589729;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 56:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 57:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 12:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = joaat("SCRIPT_TASK_LEAVE_VEHICLE");
			func_24(uParam109, 144, -982327190, -982327190, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 16:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 17:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 18:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 19:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 20:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 22:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 74:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 67:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 58:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 59:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 60:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 25:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 26:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 27:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 28:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 38:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 40:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 42:
		case 43:
		case 44:
		case 45:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1959848946;
			uParam109->f_110 = -1959848946;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 47:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 49:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 48:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -1794415470;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 50:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 51:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 52:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 66:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 61:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 62:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 63:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 69:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 64:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 65:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 234:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 316:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 315:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 75:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = -235832601;
			func_24(uParam109, 30, -982327190, -982327190, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 76:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = -235832601;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 77:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 17, 1785177548, 1785177548, -0.7035f, -0.0282f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 78:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 17, 1785177548, 1785177548, -3.03f, -0.72f, 0.08f, 168f);
			uParam109->f_118 = 1;
			return 1;
		case 79:
		case 80:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 17, -2017877118, -2017877118, Vector(2.6407f, 8.164f, -14.1564f) + Vector(-1f, 0.03f, -2.16f), (-66f + -56f));
			if (Param0.f_2 == 80)
			{
				func_25(uParam109);
			}
			uParam109->f_118 = 1;
			return 1;
		case 124:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 82:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 84:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 83:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 85:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 291:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 86:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 87:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 88:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 89:
		case 90:
		case 127:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 91:
		case 92:
		case 93:
		case 104:
		case 81:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			if (Param0.f_2 == 92)
			{
				uParam109->f_118 = 1;
			}
			if (Param0.f_2 == 104)
			{
				uParam109->f_118 = 0;
			}
			if (Param0.f_2 == 81)
			{
				func_25(uParam109);
				uParam109->f_118 = 1;
			}
			return 1;
		case 94:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			if (Param0.f_2 == 94)
			{
				func_24(uParam109, 17, 1785177548, 1785177548, -1.71f, 1.05f, 0f, -138f);
			}
			uParam109->f_118 = 1;
			return 1;
		case 95:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 96:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 134:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 108:
		case 109:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 41:
		case 112:
		case 113:
		case 123:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 150:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 20, 1785177548, 1785177548, 0.98f, 0.8017f, -0.42f, -180f);
			uParam109->f_118 = 1;
			return 1;
		case 118:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 119:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 120:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 114:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 105:
		case 106:
		case 107:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -2017877118;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 98:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 17, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 99:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_24(uParam109, 15, -982327190, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 100:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_24(uParam109, 15, -982327190, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 101:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_24(uParam109, 14, -982327190, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 102:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_24(uParam109, 14, -982327190, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 103:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 121:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 122:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 17, 1785177548, 1785177548, -2.04f, -0.15f, 0f, 14.4f);
			uParam109->f_118 = 1;
			return 1;
		case 125:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 115:
		case 116:
		case 117:
		case 97:
		case 162:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 110:
		case 111:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 131:
		case 132:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 126:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 128:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 129:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 130:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 133:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 151:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 17, 1785177548, 1785177548, -1.71f, 1.05f, 0f, -138f);
			uParam109->f_118 = 1;
			return 1;
		case 152:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 17, 1785177548, 1785177548, 1.1779f, 2.4276f, 0f, 162.1022f);
			uParam109->f_118 = 1;
			return 1;
		case 153:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 154:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 155:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 17, 1785177548, 1785177548, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
		case 156:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 14, 1785177548, 1785177548, 0.3427f, 1.1592f, 1.0351f, 139.912f);
			uParam109->f_118 = 1;
			return 1;
		case 157:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 158:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, 1785177548, 1785177548, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
		case 159:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 160:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 161:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 163:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 17, 1785177548, 1785177548, -3.03f, -0.72f, 0.08f, 168f);
			uParam109->f_118 = 1;
			return 1;
		case 164:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 165:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 166:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 167:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 14, -982327190, 1785177548, -0.8472f, 0.155f, 0f, 152.556f);
			uParam109->f_118 = 1;
			return 1;
		case 168:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 169:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 14, 1785177548, 1785177548, -0.3577f, -0.8968f, -0.0003f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 170:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 17, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 171:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 14, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 172:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 15, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 173:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 174:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = 0;
			return 1;
	}
	switch (Param0.f_2)
	{
		case 175:
		case 176:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 177:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 178:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 179:
		case 180:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 181:
		case 182:
		case 183:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 192:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, 1785177548, 1785177548, 1f, 1f, 0f, 0f);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
		case 193:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, -982327190, 1785177548, 4.2943f, -6.7858f, 0f, -133.5332f);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
		case 194:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_25(uParam109);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
		case 195:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_25(uParam109);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
		case 198:
		case 199:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 200:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 201:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 202:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 184:
		case 185:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 186:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 187:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 188:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 189:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 190:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 191:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 196:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 43, 1785177548, 1785177548, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
		case 197:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 203:
		case 206:
		case 207:
		case 204:
		case 205:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, 1785177548, 1785177548, 3.4381f, -0.8269f, 0f, -87.6612f);
			if (Param0.f_2 != 205)
			{
				uParam109->f_112 = { 3.4381f, -0.8269f, 0f };
				uParam109->f_115 = -87.6612f;
			}
			uParam109->f_118 = 1;
			return 1;
		case 23:
		case 208:
		case 209:
		case 210:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 24:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 211:
		case 213:
		case 216:
		case 217:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 212:
		case 214:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 215:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, 1785177548, 1785177548, 3.4381f, -0.8269f, 0f, -87.6612f);
			uParam109->f_118 = 1;
			return 1;
		case 221:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, 1785177548, 1785177548, -0.7949f, -0.508f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 222:
		case 223:
		case 224:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 226:
		case 227:
		case 228:
		case 229:
		case 230:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 218:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 19, 1785177548, 1785177548, 1.29f, 1.41f, 0f, 57.52f);
			uParam109->f_118 = 1;
			return 1;
		case 219:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 19, 1785177548, 1785177548, 1.29f, 1.41f, 0f, 57.52f);
			uParam109->f_118 = 1;
			return 1;
		case 220:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 19, 1785177548, 1785177548, 0.5504f, -0.2322f, 0f, -9.9741f);
			uParam109->f_118 = 1;
			return 1;
		case 225:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 19, 1785177548, 1785177548, 1.23f, 0.6f, -1f, 34.56f);
			uParam109->f_118 = 1;
			return 1;
		case 231:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = 0;
			return 1;
		case 232:
		case 233:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 235:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 236:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, 1785177548, 1785177548, 1.5033f, 1.2118f, 0f, -78.0449f);
			uParam109->f_118 = 1;
			return 1;
		case 237:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, 1785177548, 1785177548, 1.5033f, 1.2118f, 0f, -78.0449f);
			uParam109->f_118 = 1;
			return 1;
		case 238:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 239:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 240:
		case 241:
		case 242:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 273:
		case 274:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 245:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 250:
		case 251:
		case 252:
		case 253:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 243:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 244:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 271:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 280:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 272:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			uParam109->f_118 = 1;
			func_25(uParam109);
			if (Param0.f_2 == 265)
			{
				uParam109->f_118 = 1;
			}
			if (Param0.f_2 == 268)
			{
				uParam109->f_118 = 0;
			}
			if (Param0.f_2 == 267)
			{
				func_24(uParam109, 144, -982327190, 2106541073, -2.4166f, -0.15f, 0f, -148.7555f);
			}
			if (Param0.f_2 == 266)
			{
				func_24(uParam109, 144, 2106541073, 2106541073, -5.7915f, -11.0439f, 0.67f, -72.589f);
			}
			return 1;
		case 246:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 247:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 263:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 278:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 279:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 264:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 255:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 248:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, 1785177548, 1785177548, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
		case 249:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, 1785177548, 1785177548, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
		case 281:
		case 282:
		case 283:
		case 284:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = -235832601;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 275:
		case 276:
		case 277:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = -235832601;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 254:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 285:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 256:
		case 257:
		case 258:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 259:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 260:
		case 261:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 286:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 287:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 288:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 262:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 289:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, -2017877118, -2017877118, -3.264f, -14.7895f, 14.1815f, -0.6311f);
			uParam109->f_118 = 1;
			return 1;
		case 290:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 292:
		case 295:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 32, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 293:
		case 294:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 32, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 299:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 32, 1785177548, 1785177548, 0.24f, 0.33f, -0.5f, -11.88f);
			uParam109->f_118 = 1;
			return 1;
		case 300:
		case 301:
		case 302:
		case 303:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 32, 1785177548, 1785177548, 0.24f, 0.33f, -0.5f, -11.88f);
			uParam109->f_118 = 1;
			return 1;
		case 296:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 32, 1785177548, 1785177548, 1.41f, 1.35f, 0f, 168f);
			uParam109->f_118 = 1;
			return 1;
		case 297:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 32, 1785177548, 1785177548, 1.7491f, 0.6423f, 0f, 166.479f);
			uParam109->f_118 = 1;
			return 1;
		case 298:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 32, 1785177548, 1785177548, 0.72f, -0.69f, 0f, 172.44f);
			uParam109->f_118 = 1;
			return 1;
		case 304:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 305:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 306:
		case 307:
		case 308:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 309:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 310:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 311:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 312:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1630799643;
			uParam109->f_110 = 1630799643;
			func_24(uParam109, 144, 474215631, -1519143300, -9.5443f, -3.191f, -0.3f, 180f);
			uParam109->f_118 = 1;
			return 1;
		case 313:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = 0;
			return 1;
		case 314:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	}
	*uParam109 = { Param0 };
	uParam109->f_109 = 1435919172;
	uParam109->f_110 = 1435919172;
	func_25(uParam109);
	uParam109->f_118 = 0;
	return 0;
}

void func_24(var uParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam7)
{
	uParam0->f_111 = iParam1;
	uParam0->f_116 = iParam2;
	uParam0->f_117 = iParam3;
	uParam0->f_112 = { vParam4 };
	uParam0->f_115 = fParam7;
}

void func_25(var uParam0)
{
	func_24(uParam0, 145, 1435919172, 1435919172, 0f, 0f, 0f, 0f);
}

int func_26(int iParam0, var uParam1, float fParam2, char* sParam3)
{
	int iVar0;

	if (func_29(iParam0, fParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				func_27(&iVar0);
				if (iVar0 < 5)
				{
					*uParam1 = { Global_93947[iVar0 /*9*/].f_3 };
					*fParam2 = Global_93947[iVar0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				else
				{
					*uParam1 = { Global_93947[0 /*9*/].f_3 };
					*fParam2 = Global_93947[0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				break;
			case 2:
				*uParam1 = { Global_96855[0 /*109*/].f_4 };
				*fParam2 = Global_96855[0 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
			case 3:
				*uParam1 = { Global_96855[1 /*109*/].f_4 };
				*fParam2 = Global_96855[1 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
			case 4:
				*uParam1 = { Global_96855[2 /*109*/].f_4 };
				*fParam2 = Global_96855[2 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
			case 5:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[0 /*3*/] + Vector(-1f, 0f, 0f) };
				*fParam2 = Global_111638.f_2358.f_539.f_2310[0];
				StringCopy(sParam3, "", 32);
				return 1;
			case 6:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[1 /*3*/] + Vector(-1f, 0f, 0f) };
				*fParam2 = Global_111638.f_2358.f_539.f_2310[1];
				StringCopy(sParam3, "", 32);
				return 1;
			case 7:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[2 /*3*/] + Vector(-1f, 0f, 0f) };
				*fParam2 = Global_111638.f_2358.f_539.f_2310[2];
				StringCopy(sParam3, "", 32);
				return 1;
		}
		*uParam1 = { Global_97183[iParam0 /*3*/] };
		return 1;
	}
	return 0;
}

bool func_27(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	vector3 vVar6;
	float fVar9;

	iVar0 = Global_111638.f_2358.f_539.f_4323;
	vVar1 = { Global_111638.f_2358.f_539.f_2300[iVar0 /*3*/] };
	if (func_28(vVar1, 0f, 0f, 0f, 0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	}
	*iParam0 = 5;
	fVar4 = 9999999f;
	iVar5 = 0;
	while (iVar5 < 5)
	{
		if (MISC::IS_BIT_SET(Global_111638.f_7224.f_11[iVar5], 0))
		{
			vVar6 = { Global_93947[iVar5 /*9*/].f_3 };
			fVar9 = SYSTEM::VDIST(vVar1, vVar6);
			if (fVar9 > 150f)
			{
				if (fVar9 < fVar4)
				{
					*iParam0 = iVar5;
					fVar4 = fVar9;
				}
			}
		}
		iVar5++;
	}
	return *iParam0 != 5;
}

bool func_28(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_29(int iParam0, float fParam1, char* sParam2)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	vector3 vVar17;

	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			func_27(&iVar3);
			if (iVar3 < 5)
			{
				*fParam1 = Global_93947[iVar3 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return true;
			}
			else
			{
				*fParam1 = Global_93947[0 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 2:
			*fParam1 = Global_96855[0 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return true;
		case 3:
			*fParam1 = Global_96855[1 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return true;
		case 4:
			*fParam1 = Global_96855[2 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return true;
		case 5:
			*fParam1 = Global_111638.f_2358.f_539.f_2310[0];
			StringCopy(sParam2, func_33(Global_111638.f_2358.f_539.f_2314[0]), 32);
			return true;
		case 6:
			*fParam1 = Global_111638.f_2358.f_539.f_2310[1];
			StringCopy(sParam2, func_33(Global_111638.f_2358.f_539.f_2314[1]), 32);
			return true;
		case 7:
			*fParam1 = Global_111638.f_2358.f_539.f_2310[2];
			StringCopy(sParam2, func_33(Global_111638.f_2358.f_539.f_2314[2]), 32);
			return true;
		case 11:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return true;
			}
			break;
		case 8:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 9:
			return func_29(8, fParam1, sParam2);
		case 10:
			return func_29(8, fParam1, sParam2);
		case 13:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 14:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 15:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 12:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 16:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 17:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 18:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 19:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 20:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 21:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 22:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 74:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 23:
			return func_29(208, fParam1, sParam2);
		case 24:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 67:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 25:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 26:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 27:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 28:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 29:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 30:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 31:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 32:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 33:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 34:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 35:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 36:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 37:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 58:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 59:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 60:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 38:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 39:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 40:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return true;
			}
			break;
		case 41:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 42:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 43:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 44:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 45:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 46:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 47:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 49:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 48:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 124:
			vVar0 = { -803.734f, 168.148f, 76.3542f };
			*fParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 50:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 51:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 52:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 66:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 53:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 54:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 55:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 56:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 57:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 61:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 62:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 63:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 68:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 69:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 64:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 65:
			if (func_32(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 70:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 71:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 72:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 73:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 234:
			*fParam1 = 122.69f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 316:
			*fParam1 = -60.31f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 315:
			*fParam1 = (41.654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 75:
			*fParam1 = -172.697f;
			StringCopy(sParam2, "", 32);
			return true;
		case 76:
			*fParam1 = (181.8927f - 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 77:
			*fParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 78:
			*fParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 79:
			*fParam1 = 20.353f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 80:
			*fParam1 = (-48.53f + 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 81:
			*fParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return true;
		case 82:
			*fParam1 = -113.748f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 83:
			*fParam1 = -173.748f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 84:
			*fParam1 = 32.7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 85:
			*fParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 86:
			*fParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 87:
			*fParam1 = 166.32f;
			StringCopy(sParam2, "", 32);
			return true;
		case 88:
			*fParam1 = 21f;
			*fParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return true;
		case 89:
			*fParam1 = -84.8108f;
			StringCopy(sParam2, "", 32);
			return true;
		case 90:
			*fParam1 = -90.5046f;
			StringCopy(sParam2, "", 32);
			return true;
		case 91:
			*fParam1 = 105.0795f;
			StringCopy(sParam2, "", 32);
			return true;
		case 92:
			*fParam1 = -54.347f;
			StringCopy(sParam2, "", 32);
			return true;
		case 93:
			*fParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return true;
		case 94:
			*fParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return true;
		case 95:
			*fParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return true;
		case 96:
			*fParam1 = 34.621f;
			StringCopy(sParam2, "", 32);
			return true;
		case 97:
			*fParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return true;
		case 98:
			*fParam1 = (-150.6148f + 0.0095f);
			*fParam1 = (*fParam1 + 0.0004f);
			*fParam1 = (*fParam1 + 0.0015f);
			*fParam1 = (*fParam1 + 0.0002f);
			*fParam1 = (*fParam1 + -0.0009f);
			StringCopy(sParam2, "", 32);
			return true;
		case 99:
			*fParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return true;
		case 100:
			*fParam1 = 84.6073f;
			StringCopy(sParam2, "", 32);
			return true;
		case 101:
			*fParam1 = 249.0753f;
			StringCopy(sParam2, "", 32);
			return true;
		case 102:
			*fParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return true;
		case 103:
			*fParam1 = 143.4931f;
			StringCopy(sParam2, "", 32);
			return true;
		case 104:
			*fParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return true;
		case 105:
			*fParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return true;
		case 106:
			*fParam1 = 63.4995f;
			StringCopy(sParam2, "", 32);
			return true;
		case 107:
			*fParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return true;
		case 108:
			*fParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return true;
		case 109:
			*fParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return true;
		case 110:
			*fParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return true;
		case 111:
			*fParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return true;
		case 112:
			*fParam1 = -162.311f;
			StringCopy(sParam2, "", 32);
			return true;
		case 113:
			*fParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return true;
		case 135:
			*fParam1 = -59.25f;
			StringCopy(sParam2, "", 32);
			return true;
		case 136:
			*fParam1 = 82.254f;
			StringCopy(sParam2, "", 32);
			return true;
		case 137:
			*fParam1 = -152.965f;
			StringCopy(sParam2, "", 32);
			return true;
		case 138:
			*fParam1 = -10.099f;
			StringCopy(sParam2, "", 32);
			return true;
		case 139:
			*fParam1 = 158.5974f;
			StringCopy(sParam2, "", 32);
			return true;
		case 140:
			*fParam1 = 99.18f;
			StringCopy(sParam2, "", 32);
			return true;
		case 141:
			*fParam1 = 218.4774f;
			StringCopy(sParam2, "", 32);
			return true;
		case 142:
			*fParam1 = 125.6193f;
			StringCopy(sParam2, "", 32);
			return true;
		case 143:
			*fParam1 = 142.373f;
			StringCopy(sParam2, "", 32);
			return true;
		case 144:
			*fParam1 = -34.878f;
			StringCopy(sParam2, "", 32);
			return true;
		case 145:
			*fParam1 = -172.419f;
			StringCopy(sParam2, "", 32);
			return true;
		case 146:
			*fParam1 = -107.439f;
			StringCopy(sParam2, "", 32);
			return true;
		case 147:
			*fParam1 = 157.311f;
			StringCopy(sParam2, "", 32);
			return true;
		case 148:
			*fParam1 = -68.812f;
			StringCopy(sParam2, "", 32);
			return true;
		case 149:
			*fParam1 = 4.693f;
			StringCopy(sParam2, "", 32);
			return true;
		case 150:
			*fParam1 = 78.65f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 114:
			*fParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return true;
		case 115:
			*fParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return true;
		case 116:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return true;
		case 117:
			*fParam1 = -74.7818f;
			StringCopy(sParam2, "", 32);
			return true;
		case 118:
			*fParam1 = -48.36f;
			StringCopy(sParam2, "", 32);
			return true;
		case 119:
			*fParam1 = 144.178f;
			StringCopy(sParam2, "", 32);
			return true;
		case 120:
			*fParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return true;
		case 121:
			*fParam1 = 101.5f;
			StringCopy(sParam2, "", 32);
			return true;
		case 122:
			*fParam1 = 99.72f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 123:
			*fParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return true;
		case 125:
			*fParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return true;
		case 126:
			*fParam1 = -158.0894f;
			StringCopy(sParam2, "", 32);
			return true;
		case 127:
			*fParam1 = -76.3681f;
			StringCopy(sParam2, "", 32);
			return true;
		case 128:
			*fParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 129:
			*fParam1 = -80.6f;
			StringCopy(sParam2, "", 32);
			return true;
		case 130:
			*fParam1 = -9.1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 131:
			*fParam1 = -86.0894f;
			StringCopy(sParam2, "", 32);
			return true;
		case 132:
			*fParam1 = -161.0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 133:
			*fParam1 = (226.5579f - 270f);
			StringCopy(sParam2, "", 32);
			return true;
		case 134:
			*fParam1 = -33.128f;
			StringCopy(sParam2, "", 32);
			return true;
		case 151:
			*fParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return true;
		case 152:
			*fParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return true;
		case 153:
			*fParam1 = -176.25f;
			StringCopy(sParam2, "", 32);
			return true;
		case 154:
			*fParam1 = -147.192f;
			StringCopy(sParam2, "", 32);
			return true;
		case 155:
			*fParam1 = 59.082f;
			StringCopy(sParam2, "", 32);
			return true;
		case 156:
			*fParam1 = 26.087f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 157:
			*fParam1 = 37.27f;
			StringCopy(sParam2, "", 32);
			return true;
		case 158:
			*fParam1 = -13.8153f;
			StringCopy(sParam2, "", 32);
			return true;
		case 159:
			*fParam1 = -62.5f;
			StringCopy(sParam2, "", 32);
			return true;
		case 160:
			*fParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return true;
		case 161:
			*fParam1 = 86.3776f;
			StringCopy(sParam2, "", 32);
			return true;
		case 162:
			*fParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return true;
		case 163:
			*fParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 164:
			*fParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return true;
		case 165:
			*fParam1 = -144.622f;
			StringCopy(sParam2, "", 32);
			return true;
		case 166:
			*fParam1 = -61.2262f;
			StringCopy(sParam2, "", 32);
			return true;
		case 167:
			*fParam1 = -22.32f;
			StringCopy(sParam2, "", 32);
			return true;
		case 168:
			if (func_30(0, 25, &uVar4, &fVar7))
			{
				*fParam1 = (fVar7 + 222.8314f);
				StringCopy(sParam2, "v_michael", 32);
				return true;
			}
			break;
		case 169:
			*fParam1 = 112.841f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 170:
			*fParam1 = (-103.8158f + 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 171:
			*fParam1 = -28.0926f;
			StringCopy(sParam2, "", 32);
			return true;
		case 173:
			*fParam1 = -0.0301f;
			StringCopy(sParam2, "", 32);
			return true;
		case 172:
			*fParam1 = -30.185f;
			*fParam1 = (*fParam1 + 0.003f);
			StringCopy(sParam2, "", 32);
			return true;
		case 174:
			*fParam1 = 14.98f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
	}
	switch (iParam0)
	{
		case 175:
			*fParam1 = -179.653f;
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 176:
			*fParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 177:
			*fParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 178:
			*fParam1 = -95.4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 179:
			*fParam1 = (-16.0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 180:
			*fParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 181:
			*fParam1 = -86.613f;
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 182:
			*fParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return true;
		case 183:
			*fParam1 = 111.688f;
			StringCopy(sParam2, "", 32);
			return true;
		case 184:
			*fParam1 = 143.7974f;
			StringCopy(sParam2, "", 32);
			return true;
		case 185:
			*fParam1 = 143.792f;
			StringCopy(sParam2, "", 32);
			return true;
		case 186:
			*fParam1 = 4.6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 187:
			*fParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 188:
			*fParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 189:
			*fParam1 = -172.2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 190:
			*fParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 191:
			*fParam1 = -12.5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 196:
			*fParam1 = -1.5f;
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 197:
			*fParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 192:
			*fParam1 = 107.981f;
			StringCopy(sParam2, "", 32);
			return true;
		case 193:
			*fParam1 = 172.9187f;
			StringCopy(sParam2, "", 32);
			return true;
		case 194:
			*fParam1 = -67.608f;
			StringCopy(sParam2, "", 32);
			return true;
		case 195:
			*fParam1 = 74.1158f;
			StringCopy(sParam2, "", 32);
			return true;
		case 198:
			*fParam1 = 1.0411f;
			StringCopy(sParam2, "", 32);
			return true;
		case 199:
			*fParam1 = -152.203f;
			StringCopy(sParam2, "", 32);
			return true;
		case 200:
			*fParam1 = (310.879f - 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 201:
			*fParam1 = 130.879f;
			StringCopy(sParam2, "", 32);
			return true;
		case 202:
			*fParam1 = 35.604f;
			StringCopy(sParam2, "", 32);
			return true;
		case 203:
			*fParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return true;
		case 204:
			*fParam1 = -119.3944f;
			StringCopy(sParam2, "", 32);
			return true;
		case 205:
			*fParam1 = 121.9322f;
			StringCopy(sParam2, "", 32);
			return true;
		case 206:
			*fParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return true;
		case 207:
			*fParam1 = -95.588f;
			StringCopy(sParam2, "", 32);
			return true;
		case 208:
			*fParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return true;
		case 209:
			*fParam1 = 230.78f;
			StringCopy(sParam2, "", 32);
			return true;
		case 210:
			*fParam1 = 165.7751f;
			StringCopy(sParam2, "", 32);
			return true;
		case 211:
			*fParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return true;
		case 212:
			*fParam1 = 1.2709f;
			StringCopy(sParam2, "", 32);
			return true;
		case 213:
			*fParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return true;
		case 214:
			*fParam1 = -117.03f;
			StringCopy(sParam2, "", 32);
			return true;
		case 215:
			*fParam1 = -49.0324f;
			StringCopy(sParam2, "", 32);
			return true;
		case 216:
			*fParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return true;
		case 217:
			*fParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return true;
		case 221:
			*fParam1 = 84.96f;
			StringCopy(sParam2, "", 32);
			return true;
		case 222:
			*fParam1 = -59.3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return true;
		case 223:
			*fParam1 = 43.82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return true;
		case 224:
			return func_29(222, fParam1, sParam2);
		case 226:
			*fParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return true;
		case 227:
			*fParam1 = -14.749f;
			StringCopy(sParam2, "", 32);
			return true;
		case 228:
			*fParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return true;
		case 229:
			*fParam1 = 96.0116f;
			StringCopy(sParam2, "", 32);
			return true;
		case 230:
			*fParam1 = -43.6661f;
			StringCopy(sParam2, "", 32);
			return true;
		case 218:
			*fParam1 = -70.4124f;
			StringCopy(sParam2, "", 32);
			return true;
		case 219:
			*fParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return true;
		case 220:
			*fParam1 = -117.356f;
			StringCopy(sParam2, "", 32);
			return true;
		case 225:
			*fParam1 = -83.8f;
			StringCopy(sParam2, "", 32);
			return true;
		case 231:
			*fParam1 = 350.3382f;
			StringCopy(sParam2, "", 32);
			return true;
		case 232:
			*fParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return true;
		case 233:
			*fParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return true;
		case 235:
			*fParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return true;
		case 236:
			*fParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return true;
		case 237:
			*fParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return true;
		case 238:
			*fParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return true;
		case 239:
			*fParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return true;
		case 240:
			*fParam1 = -4.124f;
			StringCopy(sParam2, "", 32);
			return true;
		case 241:
			*fParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return true;
		case 242:
			*fParam1 = 13.7207f;
			StringCopy(sParam2, "", 32);
			return true;
		case 245:
			*fParam1 = 27.746f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 243:
			*fParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return true;
		case 244:
			*fParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return true;
		case 246:
			*fParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return true;
		case 247:
			*fParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return true;
		case 248:
			*fParam1 = 10.77f;
			StringCopy(sParam2, "", 32);
			return true;
		case 249:
			*fParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 250:
			*fParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return true;
		case 251:
			*fParam1 = -42.8529f;
			StringCopy(sParam2, "", 32);
			return true;
		case 252:
			*fParam1 = 2.6497f;
			StringCopy(sParam2, "", 32);
			return true;
		case 253:
			*fParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return true;
		case 254:
			*fParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return true;
		case 255:
			*fParam1 = 30.24f;
			StringCopy(sParam2, "", 32);
			return true;
		case 264:
			*fParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return true;
		case 265:
			*fParam1 = -144.274f;
			StringCopy(sParam2, "", 32);
			return true;
		case 266:
			*fParam1 = 68.8227f;
			StringCopy(sParam2, "", 32);
			return true;
		case 267:
			*fParam1 = 56.2037f;
			StringCopy(sParam2, "", 32);
			return true;
		case 268:
			*fParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return true;
		case 269:
			*fParam1 = -106.6605f;
			StringCopy(sParam2, "", 32);
			return true;
		case 270:
			*fParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return true;
		case 271:
			*fParam1 = 26.3597f;
			StringCopy(sParam2, "", 32);
			return true;
		case 272:
			*fParam1 = -83.3175f;
			StringCopy(sParam2, "", 32);
			return true;
		case 273:
			*fParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return true;
		case 274:
			*fParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return true;
		case 275:
			*fParam1 = (277.613f - 360f);
			StringCopy(sParam2, "", 32);
			return true;
		case 276:
			*fParam1 = -4.7459f;
			StringCopy(sParam2, "", 32);
			return true;
		case 277:
			*fParam1 = -98.56f;
			StringCopy(sParam2, "", 32);
			return true;
		case 278:
			*fParam1 = -33.77f;
			StringCopy(sParam2, "", 32);
			return true;
		case 279:
			*fParam1 = 155.68f;
			StringCopy(sParam2, "", 32);
			return true;
		case 280:
			*fParam1 = -49.56f;
			StringCopy(sParam2, "", 32);
			return true;
		case 281:
			*fParam1 = -5.8739f;
			StringCopy(sParam2, "", 32);
			return true;
		case 282:
			*fParam1 = 70.1627f;
			StringCopy(sParam2, "", 32);
			return true;
		case 283:
			*fParam1 = 158.979f;
			StringCopy(sParam2, "", 32);
			return true;
		case 284:
			*fParam1 = -67.1851f;
			StringCopy(sParam2, "", 32);
			return true;
		case 285:
			*fParam1 = 47.054f;
			StringCopy(sParam2, "", 32);
			return true;
		case 256:
			*fParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return true;
		case 257:
			*fParam1 = 171.253f;
			StringCopy(sParam2, "", 32);
			return true;
		case 258:
			*fParam1 = 10.247f;
			StringCopy(sParam2, "", 32);
			return true;
		case 259:
			*fParam1 = -32.488f;
			StringCopy(sParam2, "", 32);
			return true;
		case 260:
			*fParam1 = -29.093f;
			StringCopy(sParam2, "", 32);
			return true;
		case 261:
			*fParam1 = 229.6085f;
			StringCopy(sParam2, "", 32);
			return true;
		case 286:
			*fParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return true;
		case 287:
			*fParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return true;
		case 288:
			*fParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return true;
		case 262:
			*fParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return true;
		case 263:
			*fParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return true;
		case 289:
			*fParam1 = -11.5018f;
			StringCopy(sParam2, "", 32);
			return true;
		case 290:
			*fParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return true;
		case 291:
			*fParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 292:
			*fParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 293:
			*fParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 294:
			return func_29(293, fParam1, sParam2);
		case 295:
			return func_29(292, fParam1, sParam2);
		case 299:
			*fParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 300:
			return func_29(303, fParam1, sParam2);
		case 301:
			return func_29(303, fParam1, sParam2);
		case 302:
			return func_29(303, fParam1, sParam2);
		case 303:
			*fParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 296:
			*fParam1 = 116.742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 297:
			*fParam1 = 100.46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 298:
			*fParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 304:
			*fParam1 = -152.0894f;
			StringCopy(sParam2, "", 32);
			return true;
		case 305:
			*fParam1 = 122.5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return true;
		case 306:
			vVar8 = { -7.4998f, 7.4995f, -0.5258f };
			*fParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-vVar8.x, -vVar8.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 307:
			vVar11 = { 10.6345f, 0.7246f, 1.2508f };
			*fParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-vVar11.x, -vVar11.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 308:
			vVar14 = { -3.4271f, -13.6787f, -1.4107f };
			*fParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-vVar14.x, -vVar14.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 309:
			vVar17 = { -19.6582f, 7.896f, 0.1334f };
			*fParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-vVar17.x, -vVar17.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 310:
			*fParam1 = -87.7215f;
			StringCopy(sParam2, "", 32);
			return true;
		case 311:
			*fParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 312:
			*fParam1 = ((103.2841f + 88.7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return true;
		case 313:
			*fParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 314:
			*fParam1 = 327.7746f;
			StringCopy(sParam2, "", 32);
			return true;
	}
	*fParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return false;
}

bool func_30(int iParam0, int iParam1, var uParam2, float fParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13.904f, 1.193f, 0.7f };
					*fParam3 = -144f;
					return true;
				case 1:
					if (func_30(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1.1731f, 0.809f) };
						*fParam3 = (*fParam3 + (456.7661f - 360f));
						return true;
					}
					break;
				case 2:
					*uParam2 = { Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((16f - 222.8314f) + 360f);
					return true;
			}
			return false;
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 10.9793f, -5.9f, 4.6f };
					*fParam3 = 163.0716f;
					return true;
				case 1:
					if (func_30(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0.25f, -0.6f) };
						*fParam3 = (*fParam3 + 0f);
						return true;
					}
					break;
				case 2:
					if (func_30(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0.5f, -1.2f) };
						*fParam3 = (*fParam3 + 0f);
						return true;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = (((16f + 90f) - 222.8314f) + 360f);
					return true;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { 6.8878f, -5.5247f, 1.5228f };
					*fParam3 = 160f;
					return true;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.1937f, -9.0309f, 4.5877f };
					*fParam3 = 255f;
					return true;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.4577f, -9.6399f, 4.5876f };
					*fParam3 = 252f;
					return true;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.799f, -9.41f, 4.5877f };
					*fParam3 = 273f;
					return true;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_30(0, 5, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*fParam3 = (*fParam3 + 0f);
						return true;
					}
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 12.552f, 4.373f, (4.6f + 1f) };
					*fParam3 = 318f;
					return true;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0.4395f, -11.0022f, 0.0747f };
					*fParam3 = 306f;
					return true;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5.5001f, -12.4406f, 4.6f };
					*fParam3 = 0f;
					return true;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.5f, -9.1f, 4.6f };
					*fParam3 = 330f;
					return true;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0.849f, 1.575f, 0f };
					*fParam3 = 272.857f;
					return true;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 8.183f, -3.0467f, 5.5876f };
					*fParam3 = 158f;
					return true;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 9.383f, -3.3887f, 5.73f };
					*fParam3 = 339f;
					return true;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-159.23f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-159.23f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.488f, -9.098f, 5.4864f };
					*fParam3 = 147f;
					return true;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9.04f, 5.71f, 1.44f };
					*fParam3 = 159.3182f;
					return true;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.25f, -9.53f, 4.588f };
					*fParam3 = 333f;
					return true;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11.0022f, -0.4395f) + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f)) };
					*fParam3 = (306f + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 10f));
					return true;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0.95f, 0.95f, 0.95f) };
					*fParam3 = MISC::GET_HEADING_FROM_VECTOR_2D(*uParam2, uParam2->f_1);
					return true;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((26.087f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((13f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-28.7112f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27.9648f, 8.3766f, 0.7f };
					*fParam3 = 319f;
					return true;
			}
			break;
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f) };
					*fParam3 = 78f;
					return true;
			}
			break;
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0.3142f, -10.9926f, 0.0747f };
					*fParam3 = 304.1026f;
					return true;
			}
			break;
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.3f, -6.5f, 4.6f };
					*fParam3 = 180f;
					return true;
			}
			break;
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_30(1, 32, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*fParam3 = (*fParam3 + 0f);
						return true;
					}
					break;
			}
			break;
		case 38:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.505f, -10.9717f, 4.6019f };
					*fParam3 = 228f;
					return true;
			}
			break;
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12.7165f, 4.7109f, (4.6f + 1f) };
					*fParam3 = 310.6696f;
					return true;
			}
			break;
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.0529f, -8.9175f, 1.6907f };
					*fParam3 = 102.156f;
					return true;
			}
			break;
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.4799f, -7.5315f, 0.682f };
					*fParam3 = 264f;
					return true;
			}
			break;
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.352f, -3.356f, 5.7338f };
					*fParam3 = 338f;
					return true;
			}
			break;
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.3003f, -10.3127f, 4.5874f };
					*fParam3 = 262.789f;
					return true;
			}
			break;
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.76f, -5.95f, 4.59f };
					*fParam3 = 177.6766f;
					return true;
			}
			break;
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.6691f, -7.6405f, 0.6817f };
					*fParam3 = 159.156f;
					return true;
			}
			break;
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 1.228f, 4.044f, 0.7665f };
					*fParam3 = 165f;
					return true;
			}
			break;
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.2365f, -7.6073f, 6.2761f };
					*fParam3 = 157.0716f;
					return true;
			}
			break;
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.161f, -7.562f, 2.17f };
					*fParam3 = 78f;
					return true;
			}
			break;
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.7668f, -7.8757f, 5.5559f };
					*fParam3 = 144.6939f;
					return true;
			}
			break;
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.6257f, -9.4927f, 5.5876f };
					*fParam3 = 257.4583f;
					return true;
			}
			break;
		case 46:
			return func_30(iParam0, 26, uParam2, fParam3);
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 8.4451f, 3.1568f, 1.47f };
					*fParam3 = 159f;
					return true;
			}
			break;
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 9.0477f, -7.9397f, 0.6817f };
					*fParam3 = 88.5686f;
					return true;
			}
			break;
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					return false;
			}
			break;
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 21.7f, 9f, 1.7029f };
					*fParam3 = 0f;
					return true;
			}
			break;
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 1.3278f, 1.534f, 0f };
					*fParam3 = 159.72f;
					return true;
			}
			break;
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -3.0265f, 1.7627f, 0.1273f };
					*fParam3 = 338.5f;
					return true;
			}
			break;
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 15.2374f, 8.723f, 1.4495f };
					*fParam3 = 205.677f;
					return true;
			}
			break;
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 28.7f, 8.8241f, 0.6f };
					*fParam3 = 39f;
					return true;
			}
			break;
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(1.1936f, -9.0107f, 9.0567f) + Vector((0.03f - 0.02f), 0f, 0f) };
					*fParam3 = 94.2086f;
					return true;
			}
			break;
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(5.2891f, 2.0403f, -2.8213f) + Vector((0.03f - 0.05f), 0f, 0f) };
					*fParam3 = 336f;
					return true;
			}
			break;
		case 56:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.84f };
					*fParam3 = 311.4f;
					return true;
			}
			break;
		case 57:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.8418f };
					*fParam3 = 306.6f;
					return true;
			}
			break;
		case 58:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 5.8092f, 5.7965f, 3.85f };
					*fParam3 = 337.4f;
					return true;
			}
			break;
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 13.3221f, 0.0684f, 0.6817f };
					*fParam3 = 277.317f;
					return true;
			}
			break;
		case 60:
			if (func_30(iParam0, 59, uParam2, fParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
				*fParam3 = (*fParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
				return true;
			}
			break;
		case 61:
		case 62:
		case 63:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -2.235f, 1.725f, 4.5877f };
					*fParam3 = 172.714f;
					return true;
			}
			break;
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-158f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-164f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 7.394f, 5.368f, 1.451f };
					*fParam3 = 235.0656f;
					return true;
			}
			break;
		case 74:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 1.0704f, -1.4624f, 0.999f };
					*fParam3 = 157.44f;
					return true;
			}
			break;
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 14.8186f, 6.8253f, 0.5f };
					*fParam3 = 87.3368f;
					return true;
			}
			break;
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 13.6486f, 6.2253f, 0.45f };
					*fParam3 = 262.32f;
					return true;
			}
			break;
		case 77:
			if (func_30(iParam0, 47, uParam2, fParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*fParam3 = (*fParam3 + 0f);
				return true;
			}
			break;
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 16.319f, -1.375f, 0.6817f };
					*fParam3 = 334.126f;
					return true;
			}
			break;
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { -0.39f, 3.27f, 0f };
					*fParam3 = 154.126f;
					return true;
			}
			break;
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.0213f, 6.9622f, 1.39f };
					*fParam3 = 142.889f;
					return true;
			}
			break;
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.128f, 6.842f, 0.4524f };
					*fParam3 = 54f;
					return true;
			}
			break;
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9019f, -23.8349f, -2.1f };
					*fParam3 = 339f;
					return true;
			}
			break;
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9937f, -24.9005f, -2.18f };
					*fParam3 = 314.2132f;
					return true;
			}
			break;
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 31.7401f, -1.0943f, 0.6822f };
					*fParam3 = 147f;
					return true;
			}
			break;
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -27.1728f, -3.75f, -1.626f };
					*fParam3 = (147f + 90f);
					return true;
			}
			break;
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 14.7722f, -10.9336f, -0.537f };
					*fParam3 = 110.8505f;
					return true;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -17.2536f, 2.451f, -0.6f };
					*fParam3 = 0f;
					return true;
			}
			break;
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 23.9716f, -20.3533f, -3.18f };
					*fParam3 = 324f;
					return true;
			}
			break;
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.1416f, -2.0799f, -0.0145f };
					*fParam3 = 33f;
					return true;
			}
			break;
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.2746f, -4.1995f, -0.0144f };
					*fParam3 = 69f;
					return true;
			}
			break;
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 2.983f, -4.094f, 0.4629f };
					*fParam3 = 33f;
					return true;
			}
			break;
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 5.5235f, 2.9133f, 0.7288f };
					*fParam3 = 71f;
					return true;
			}
			break;
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = { Vector(30.7131f, -1454.676f, -42.2059f) - Vector(30.116f, -1435.997f, -14.3064f) };
					*fParam3 = (84.7009f - 188.5817f);
					return true;
				case 7:
					*uParam2 = { Vector(30.6803f, -1455.848f, -40.7478f) - Vector(30.116f, -1435.997f, -14.3064f) };
					*fParam3 = (90.6417f - 188.5817f);
					return true;
			}
			break;
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 2.0126f, 0.3422f, -0.0086f };
					*fParam3 = 354f;
					return true;
			}
			break;
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.2931f, 1.4476f, 1.0127f };
					*fParam3 = 61.7525f;
					return true;
			}
			break;
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 0.0158f, 1.4182f, 0.9913f };
					*fParam3 = 119.008f;
					return true;
			}
			break;
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -3.467f, 0.074f, 0f };
					*fParam3 = 30f;
					return true;
			}
			break;
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.1014f, -5.4089f, -0.013f };
					*fParam3 = 123.753f;
					return true;
			}
			break;
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.802f, -6.3295f, -0.01f };
					*fParam3 = 42.757f;
					return true;
					Jump @7968; //curOff = 6027
					switch (iParam0)
					{
						case 8:
							*uParam2 = { -2.156f, -4.9564f, 1.4886f };
							*fParam3 = 136.309f;
							return true;
					}
					Jump @7968; //curOff = 6077
					switch (iParam0)
					{
						case 8:
							*uParam2 = { 7.2656f, 3.022f, -0.9061f };
							*fParam3 = 92.8891f;
							return true;
					}
					Jump @7968; //curOff = 6127
					switch (iParam0)
					{
						case 8:
							*uParam2 = { 0.5066f, 1.6992f, 0.0168f };
							*fParam3 = 115.77f;
							return true;
					}
					Jump @7968; //curOff = 6177
					switch (iParam0)
					{
						case 8:
							*uParam2 = { -0.2121f, -6.2791f, -0.0089f };
							*fParam3 = 114.3391f;
							return true;
					}
					Jump @7968; //curOff = 6227
					switch (iParam0)
					{
						case 9:
						case 11:
							*uParam2 = { 8.2458f, -0.7136f, -0.2503f };
							*fParam3 = 252.2687f;
							return true;
					}
					Jump @7968; //curOff = 6283
					switch (iParam0)
					{
						case 9:
						case 11:
							*uParam2 = { 2.334f, 1.6889f, 0.586f };
							*fParam3 = 109f;
							return true;
					}
					Jump @7968; //curOff = 6339
					switch (iParam0)
					{
						case 9:
							*uParam2 = { -0.6331f, 1.2093f, -0.0086f };
							*fParam3 = 137.1861f;
							return true;
					}
					Jump @7968; //curOff = 6389
					switch (iParam0)
					{
						case 9:
							*uParam2 = { -3.887f, -0.166f, 0f };
							*fParam3 = 30f;
							return true;
					}
					Jump @7968; //curOff = 6435
					switch (iParam0)
					{
						case 9:
							*uParam2 = { 3.5179f, 9.1355f, -1f };
							*fParam3 = 141.79f;
							return true;
					}
					Jump @7968; //curOff = 6481
					switch (iParam0)
					{
						case 9:
							*uParam2 = { Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f) };
							*fParam3 = 121.6591f;
							return true;
					}
					Jump @7968; //curOff = 6535
					switch (iParam0)
					{
						case 10:
							*uParam2 = { 10.2823f, 2.2595f, -1.0742f };
							*fParam3 = (170.2796f - 180f);
							return true;
					}
					Jump @7968; //curOff = 6591
					switch (iParam0)
					{
						case 10:
							*uParam2 = { 1.077f, -5.1446f, 0.9904f };
							*fParam3 = 107.1399f;
							return true;
					}
					Jump @7968; //curOff = 6641
					switch (iParam0)
					{
						case 10:
							*uParam2 = { -12.903f, -6.623f, -0.0406f };
							*fParam3 = 63.48f;
							return true;
					}
					Jump @7968; //curOff = 6691
					switch (iParam0)
					{
						case 10:
							*uParam2 = { 10.5514f, 5.393f, -0.0998f };
							*fParam3 = 327.483f;
							return true;
					}
					Jump @7968; //curOff = 6741
					switch (iParam0)
					{
						case 11:
							*uParam2 = { 0.9794f, -0.3043f, 0f };
							*fParam3 = 179.7612f;
							return true;
					}
					Jump @7968; //curOff = 6787
					switch (iParam0)
					{
						case 11:
							*uParam2 = { 11.9759f, 1f, -1.0728f };
							*fParam3 = 238.9422f;
							return true;
					}
					Jump @7968; //curOff = 6833
					switch (iParam0)
					{
						case 11:
						case 8:
							*uParam2 = { -0.576f, 1.671f, 0.601f };
							*fParam3 = 296f;
							return true;
					}
					Jump @7968; //curOff = 6889
					switch (iParam0)
					{
						case 12:
							*uParam2 = { -0.6532f, 0.9556f, -0.0087f };
							*fParam3 = 121.0556f;
							return true;
					}
					Jump @7968; //curOff = 6939
					switch (iParam0)
					{
						case 13:
							*uParam2 = { -0.18f, -4.173f, 0.9981f };
							*fParam3 = 216.61f;
							return true;
					}
					Jump @7968; //curOff = 6989
					switch (iParam0)
					{
						case 13:
							*uParam2 = { 6.5937f, 0.3521f, 1f };
							*fParam3 = 119.4f;
							return true;
					}
					Jump @7968; //curOff = 7035
					switch (iParam0)
					{
						case 13:
							if (Global_111638.f_18528[2] == 299)
							{
								*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
								*fParam3 = (34.661f - 90.6729f);
								return true;
							}
							else if (((Global_111638.f_18528[2] == 300 || Global_111638.f_18528[2] == 301) || Global_111638.f_18528[2] == 302) || Global_111638.f_18528[2] == 303)
							{
								*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
								*fParam3 = (32f - 90.6729f);
								return true;
							}
							if (func_31())
							{
								*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
								*fParam3 = (34.661f - 90.6729f);
								return true;
							}
							else
							{
								*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
								*fParam3 = (32f - 90.6729f);
								return true;
							}
							break;
					}
					Jump @7968; //curOff = 7372
					switch (iParam0)
					{
						case 13:
							*uParam2 = { Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.571f) };
							*fParam3 = (102f - 90.6729f);
							return true;
					}
					Jump @7968; //curOff = 7444
					switch (iParam0)
					{
						case 13:
							*uParam2 = { -2.8352f, 0.0552f, 0f };
							*fParam3 = 334.44f;
							return true;
					}
					Jump @7968; //curOff = 7490
					switch (iParam0)
					{
						case 13:
							if (func_30(iParam0, 130, uParam2, fParam3))
							{
								*uParam2 = { *uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
								*fParam3 = (*fParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
								return true;
							}
							break;
					}
					Jump @7968; //curOff = 7571
					switch (iParam0)
					{
						case 13:
							*uParam2 = { -7.213f, -1.4536f, 0.9981f };
							*fParam3 = 42.6f;
							return true;
					}
					Jump @7968; //curOff = 7621
					switch (iParam0)
					{
						case 13:
							*uParam2 = { Vector((9.6327f + 1f), -1518.736f, -1148.466f) - Vector(9.6346f, -1517.601f, -1152.571f) };
							*fParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return true;
					}
					Jump @7968; //curOff = 7694
					switch (iParam0)
					{
						case 13:
							*uParam2 = { 5.24f, 6.217f, 0.998f };
							*fParam3 = 315.72f;
							return true;
					}
					Jump @7968; //curOff = 7744
					switch (iParam0)
					{
						case 13:
							*uParam2 = { 6.6447f, 0.7635f, 1.0507f };
							*fParam3 = 296.683f;
							return true;
					}
					Jump @7968; //curOff = 7794
					switch (iParam0)
					{
						case 13:
							*uParam2 = { 3.968f, -1.04f, 0f };
							*fParam3 = 214.92f;
							return true;
						case 14:
							*uParam2 = { 4.617f, -1.1314f, 0f };
							*fParam3 = 39.4085f;
							return true;
					}
					Jump @7968; //curOff = 7876
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					return false;
					Jump @7968; //curOff = 7894
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					return false;
					Jump @7968; //curOff = 7912
					*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
					*fParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					return false;
					*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
					*fParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					return false;
				}

bool func_31()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return true;
	}
	return false;
}

bool func_32(int iParam0, var uParam1, float fParam2)
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
			return func_32(8, uParam1, fParam2);
		case 10:
			return func_32(8, uParam1, fParam2);
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

char* func_33(int iParam0)
{
	switch (iParam0)
	{
		case joaat("V_CHOPSHOP"):
			return "v_chopshop";
		case joaat("V_FRANKLINS"):
			return "v_franklins";
		case joaat("V_FRANKLINSHOUSE"):
			return "v_franklinshouse";
		case joaat("V_METHLAB"):
			return "v_methlab";
		case joaat("V_MICHAEL"):
			return "v_michael";
		case joaat("V_STRIP3"):
			return "v_strip3";
		case joaat("V_TRAILER"):
			return "v_trailer";
		case joaat("V_TREVORS"):
			return "v_Trevors";
	}
	return "";
}

void func_34()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_77)
	{
		if (iLocal_77[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_77[iVar0]);
		}
		iVar0++;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_117))
	{
		STREAMING::REMOVE_ANIM_DICT(&cLocal_117);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_159)
	{
		if (GRAPHICS::IS_DECAL_ALIVE(iLocal_159[iVar0]))
		{
		}
		iVar0++;
	}
	MISC::SET_GAME_PAUSED(false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

