#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	vector3 vLocal_2 = { 0f, 0f, 0f };
	float fLocal_5 = 0f;
	char* sLocal_6 = NULL;
	int iLocal_7 = 0;
	char* sLocal_8 = NULL;
	bool bLocal_9 = false;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	sLocal_6 = "Poledance_01";
	iLocal_7 = joaat("A_F_Y_BEACH_01");
	sLocal_8 = "MISSSTRIP_CLUB";
	if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iScriptParam_0, true);
		vLocal_2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iScriptParam_0, 0f, 0f, 0f) };
		fLocal_5 = ENTITY::GET_ENTITY_HEADING(iScriptParam_0);
		ENTITY::SET_ENTITY_COLLISION(iScriptParam_0, false, false);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_0))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_0))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					case 2:
						func_3();
						if (func_2())
						{
							ENTITY::SET_ENTITY_COLLISION(iScriptParam_0, true, false);
							iLocal_0 = 3;
						}
						break;
					case 3:
						if (!PED::IS_PED_INJURED(iLocal_1))
						{
							TASK::TASK_COWER(iLocal_1, -1);
							PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
							PED::SET_PED_KEEP_TASK(iLocal_1, true);
							SCRIPT::TERMINATE_THIS_THREAD();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1, false))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1))
		{
			PED::DELETE_PED(&iLocal_1);
		}
		else
		{
			PED::SET_PED_KEEP_TASK(iLocal_1, true);
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

bool func_2()
{
	vector3 vVar0;

	vVar0 = { 2f, 2f, 0.5f };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(iLocal_1))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1, vVar0, false, true, 0))
			{
				return true;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1, PLAYER::PLAYER_PED_ID(), true))
			{
				return true;
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1))
			{
				return true;
			}
		}
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			return true;
		}
	}
	return false;
}

void func_3()
{
	if (!PED::IS_PED_INJURED(iLocal_1))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1, -2017877118) == 7)
		{
			TASK::TASK_PLAY_ANIM(iLocal_1, sLocal_8, sLocal_6, 8f, -8f, -1, 0, 0f, false, false, false);
		}
		else if (ENTITY::HAS_ENTITY_ANIM_FINISHED(iLocal_1, sLocal_8, sLocal_6, 3))
		{
			TASK::TASK_PLAY_ANIM(iLocal_1, sLocal_8, sLocal_6, 8f, -8f, -1, 0, 0f, false, false, false);
		}
		else if (!bLocal_9)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1, sLocal_8, sLocal_6, 3))
			{
				ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_1, sLocal_8, sLocal_6, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f));
				bLocal_9 = true;
			}
		}
	}
}

void func_4()
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_1, false))
	{
		iLocal_1 = PED::CREATE_PED(5, iLocal_7, vLocal_2.x, vLocal_2.y, vLocal_2.z, fLocal_5, true, true);
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_1, 0);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_1, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1, true);
	}
}

bool func_5()
{
	STREAMING::REQUEST_MODEL(iLocal_7);
	STREAMING::REQUEST_ANIM_DICT(sLocal_8);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_7) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_8))
	{
		return true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_7);
		STREAMING::REQUEST_ANIM_DICT(sLocal_8);
	}
	return false;
}

