#region Local Var
	int iLocal_0 = 0;
	vector3 vLocal_1 = { 0f, 0f, 0f };
	int iLocal_4 = 0;
	float fLocal_5 = 0f;
	bool bLocal_6 = false;
	bool bLocal_7 = false;
	bool bLocal_8 = false;
	bool bLocal_9 = false;
#endregion

void __EntryFunction__()
{
	vLocal_1 = { 613f, 6438f, 31f };
	fLocal_5 = 5f;
	bLocal_6 = true;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_1();
	}
	VEHICLE::SET_RANDOM_TRAINS(false);
	VEHICLE::DELETE_ALL_TRAINS();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 626.68f, 6442.31f, 30.88f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), -177f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	STREAMING::REQUEST_MODEL(joaat("FREIGHT"));
	STREAMING::REQUEST_MODEL(joaat("FREIGHTCAR"));
	STREAMING::REQUEST_MODEL(joaat("FREIGHTGRAIN"));
	STREAMING::REQUEST_MODEL(joaat("FREIGHTCONT1"));
	STREAMING::REQUEST_MODEL(joaat("FREIGHTCONT2"));
	STREAMING::REQUEST_MODEL(joaat("TANKERCAR"));
	STREAMING::REQUEST_MODEL(joaat("METROTRAIN"));
	while ((((((!STREAMING::HAS_MODEL_LOADED(joaat("FREIGHT")) || !STREAMING::HAS_MODEL_LOADED(joaat("FREIGHTCAR"))) || !STREAMING::HAS_MODEL_LOADED(joaat("FREIGHTGRAIN"))) || !STREAMING::HAS_MODEL_LOADED(joaat("FREIGHTCONT1"))) || !STREAMING::HAS_MODEL_LOADED(joaat("FREIGHTCONT2"))) || !STREAMING::HAS_MODEL_LOADED(joaat("TANKERCAR"))) || !STREAMING::HAS_MODEL_LOADED(joaat("METROTRAIN")))
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (bLocal_7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
				{
					VEHICLE::DELETE_MISSION_TRAIN(&iLocal_0);
				}
				iLocal_0 = VEHICLE::CREATE_MISSION_TRAIN(iLocal_4, vLocal_1, bLocal_6);
				bLocal_7 = false;
			}
			if (bLocal_9)
			{
				vLocal_1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				bLocal_9 = false;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_0, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_0, false))
			{
				VEHICLE::SET_TRAIN_SPEED(iLocal_0, fLocal_5);
				VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_0, fLocal_5);
			}
			if (bLocal_8)
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	VEHICLE::SET_RANDOM_TRAINS(true);
	SCRIPT::TERMINATE_THIS_THREAD();
}

