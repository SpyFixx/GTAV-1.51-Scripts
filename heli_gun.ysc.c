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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	vector3 vLocal_66 = { 0f, 0f, 0f };
	int iLocal_69 = 0;
	bool bLocal_70 = false;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	struct<215> Local_73 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1056964608, 1084227584, 0, 1109393408, 0, 0, 1125515264, 0, 0, 0, 0, 0, 0, 0, 1065848144, 1074048008, 1073959928, 1077206319, -1033122611, -1055016354, 0, 0, 0, 0, 0, 0, 1105199104, 1092616192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1101004800, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0 } ;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	struct<2> Local_290 = { 0, 0 } ;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	bool bLocal_297 = false;
	bool bLocal_298 = false;
	bool bLocal_299 = false;
	bool bLocal_300 = false;
	bool bLocal_301 = false;
	bool bLocal_302 = false;
	bool bLocal_303 = false;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	bool bLocal_306 = false;
	bool bLocal_307 = false;
	bool bLocal_308 = false;
	bool bLocal_309 = false;
	bool bLocal_310 = false;
	bool bLocal_311 = false;
	bool bLocal_312 = false;
	float fLocal_313 = 0f;
	bool bLocal_314 = false;
	bool bLocal_315 = false;
	bool bLocal_316 = false;
	int iLocal_317 = 0;
	bool bLocal_318 = false;
	bool bLocal_319 = false;
	bool bLocal_320 = false;
	int iLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	bool bLocal_326 = false;
	bool bLocal_327 = false;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	vector3 vLocal_333 = { 0f, 0f, 0f };
	float fLocal_336 = 0f;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	bool bLocal_339 = false;
	int iLocal_340 = 0;
	bool bLocal_341 = false;
	bool bLocal_342 = false;
	bool bLocal_343 = false;
	bool bLocal_344 = false;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	int iLocal_349 = 0;
	struct<2> Local_350[2];
	bool bLocal_355 = false;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	int iLocal_360 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_313 = 0.1f;
	iLocal_328 = -2;
	vLocal_333 = { 0.1f, 0.1f, 0.1f };
	fLocal_336 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_226(ScriptParam_0);
	}
	while (true)
	{
		func_225();
		if (func_215())
		{
			func_210();
		}
		func_208();
		if (func_195())
		{
			func_210();
		}
		func_194(&uLocal_288, 0, 0);
		if (func_193(PLAYER::PLAYER_ID()))
		{
			HUD::SHOW_HUD_COMPONENT_THIS_FRAME(1);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::PARTICIPANT_ID_TO_INT() != -1)
		{
			switch (Local_350[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/])
			{
				case 0:
					func_192(1);
					break;
				case 1:
					if ((func_191(bLocal_339) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true) != Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_732)
					{
						if (!MISC::IS_BIT_SET(iLocal_330, 0))
						{
							MISC::SET_BIT(&iLocal_330, 0);
							if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true))
							{
								MISC::SET_BIT(&iLocal_330, 1);
							}
						}
						if (!Global_1573984)
						{
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_732);
						}
					}
					func_1();
					Global_2462227 = 0;
					if (iLocal_349 >= 3)
					{
						func_192(3);
					}
					break;
				case 2:
					break;
				case 3:
					func_210();
					break;
				default:
					break;
			}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (iLocal_349)
			{
				case 0:
					iLocal_349 = 1;
					break;
				case 1:
					break;
				case 2:
					break;
				case 3:
					func_210();
					break;
				default:
					break;
			}
		}
	}
}

void func_1()
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	float fVar7;
	vector3 vVar8;
	float fVar11;
	float fVar12;
	vector3 vVar13;
	int iVar16;
	int iVar17;

	func_190();
	func_188();
	func_187();
	func_186();
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(bLocal_339, false) && NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(bLocal_339)) && !func_185(PLAYER::PLAYER_ID()) == 129) && (((bLocal_301 || bLocal_302) || bLocal_303) || Global_1319116 != -1))
	{
		func_184();
		bLocal_298 = true;
	}
	else
	{
		bLocal_298 = false;
	}
	Global_1573326 = 0;
	func_183();
	func_182();
	if (func_181(&Local_73))
	{
		if (!bLocal_312 && func_180())
		{
			AUDIO::SET_AUDIO_FLAG("ForceSniperAudio", true);
			bLocal_312 = true;
		}
	}
	else if (bLocal_312)
	{
		AUDIO::SET_AUDIO_FLAG("ForceSniperAudio", false);
		bLocal_312 = false;
	}
	if (MISC::IS_BIT_SET(Global_4456448.f_226417, 1))
	{
		if (bLocal_343 == PLAYER::PLAYER_ID())
		{
			if (!bLocal_310)
			{
				VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_SPACE_ROCKET"), bLocal_339, PLAYER::PLAYER_PED_ID());
				bLocal_310 = true;
			}
		}
	}
	else if (func_179())
	{
		if (bLocal_343 == PLAYER::PLAYER_ID())
		{
			if (!bLocal_310 && iLocal_295 != joaat("HUNTER"))
			{
				VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_SPACE_ROCKET"), bLocal_339, PLAYER::PLAYER_PED_ID());
				bLocal_310 = true;
			}
		}
	}
	else if (bLocal_343 == PLAYER::PLAYER_ID())
	{
		if (bLocal_310)
		{
			VEHICLE::DISABLE_VEHICLE_WEAPON(false, joaat("VEHICLE_WEAPON_SPACE_ROCKET"), bLocal_339, PLAYER::PLAYER_PED_ID());
			bLocal_310 = false;
		}
	}
	func_177();
	func_175();
	func_173();
	switch (Local_350[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/].f_1)
	{
		case 0:
			func_172();
			func_164();
			func_161();
			Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_732 = 0;
			Global_1573326 = 0;
			if (func_150())
			{
				func_149(1);
			}
			else if ((bLocal_301 || bLocal_302) || bLocal_303)
			{
				if (func_148(bLocal_339))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 24, true);
					PAD::DISABLE_CONTROL_ACTION(0, 66, true);
					PAD::DISABLE_CONTROL_ACTION(0, 67, true);
					PAD::DISABLE_CONTROL_ACTION(0, 68, true);
					PAD::DISABLE_CONTROL_ACTION(0, 114, true);
					PAD::DISABLE_CONTROL_ACTION(0, 69, true);
					PAD::DISABLE_CONTROL_ACTION(0, 70, true);
					PAD::DISABLE_CONTROL_ACTION(0, 91, true);
					PAD::DISABLE_CONTROL_ACTION(0, 92, true);
					PAD::DISABLE_CONTROL_ACTION(0, 99, true);
					PAD::DISABLE_CONTROL_ACTION(0, 100, true);
					PAD::DISABLE_CONTROL_ACTION(0, 37, true);
				}
			}
			func_147(&uLocal_292);
			break;
		case 1:
			func_146();
			func_145(1);
			if (Global_1319116 != -1)
			{
				func_147(&uLocal_292);
				func_144(&uLocal_292, 0, 0);
			}
			if (Global_1319110 != -1 || Global_1319116 != -1)
			{
				CAM::DO_SCREEN_FADE_OUT(250);
				iLocal_71 = UNK_0xB01F55A0FD1CFD49(func_143());
				if (Local_73.f_214)
				{
					Local_73.f_214 = 0;
				}
				if (func_193(PLAYER::PLAYER_ID()) || func_142(PLAYER::PLAYER_ID()))
				{
					if (PLAYER::GET_MAX_WANTED_LEVEL() > 0)
					{
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.65f);
						iLocal_294 = 1;
					}
				}
				if (func_141(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID()))
				{
					if (PLAYER::GET_MAX_WANTED_LEVEL() > 0)
					{
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(Global_262145.f_22581);
						iLocal_294 = 1;
					}
				}
			}
			else if (func_191(bLocal_339))
			{
				iLocal_71 = UNK_0xB01F55A0FD1CFD49(func_143());
			}
			else
			{
				iLocal_71 = UNK_0xB01F55A0FD1CFD49(func_143());
			}
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", false);
			func_139();
			if ((func_138(&Local_73, 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_71)) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud"))
			{
				if (Global_2461147)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() == 0 || STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						if (STREAMING::IS_ENTITY_FOCUS(PLAYER::PLAYER_PED_ID()))
						{
							STREAMING::CLEAR_FOCUS();
						}
					}
				}
				Local_73.f_9 = func_137(bLocal_339);
				Local_73.f_4 = 1;
				Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_732 = 1;
				func_135(&Local_73, bLocal_339, 1, bLocal_339, 1);
				Global_2547057 = 1;
				func_133();
				ENTITY::SET_ENTITY_ALWAYS_PRERENDER(bLocal_339, true);
				func_149(2);
				if (ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("VOLATOL"))
				{
					GRAPHICS::SET_PARTICLE_FX_OVERRIDE("muz_xm_volatol_twinmg", "scr_xm_volatol_turret_camera");
				}
				if (((!bLocal_301 && !bLocal_302) && !bLocal_303) && Global_1319116 == -1)
				{
					Local_73.f_7 = 1;
					func_130();
				}
				if (!(Global_1319110 != -1 || Global_1319116 != -1))
				{
					func_129();
				}
			}
			func_128();
			break;
		case 2:
			if ((Global_1319110 != -1 || Global_1319116 != -1) || func_191(bLocal_339))
			{
				func_127();
			}
			if ((MISC::GET_FRAME_COUNT() % 30) == 0)
			{
				Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_848 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
			}
			iLocal_296 = joaat("W_LR_RPG_ROCKET");
			if (iLocal_296 != 0)
			{
				STREAMING::REQUEST_MODEL(iLocal_296);
			}
			if ((Global_1319110 != -1 || func_191(bLocal_339)) || Global_1319116 != -1)
			{
				INTERIOR::_0x483ACA1176CA93F1();
				func_126(&Local_73, 0);
				if (Local_73.f_212 && Local_73.f_213)
				{
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					Local_73.f_213 = 0;
					GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
					if (func_125())
					{
						func_144(&uLocal_347, 0, 0);
					}
					return;
				}
				if (!Local_73.f_212)
				{
					Local_73.f_42 = { CAM::GET_CAM_ROT(Local_73.f_32, 2) };
					Local_73.f_212 = 1;
					return;
				}
				if (Local_73.f_213)
				{
					return;
				}
				else if (!Global_76890 || func_124(3))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!func_125())
						{
							CAM::DO_SCREEN_FADE_IN(250);
						}
						else if (func_123(bLocal_339))
						{
							if (func_122(&uLocal_347) && func_121(&uLocal_347, 3000, 0))
							{
								func_147(&uLocal_347);
								CAM::DO_SCREEN_FADE_IN(250);
							}
						}
					}
				}
			}
			if (func_120())
			{
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_71);
			}
			else if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_71))
			{
				iLocal_71 = UNK_0xB01F55A0FD1CFD49(func_143());
			}
			func_139();
			func_114(0);
			func_126(&Local_73, 1);
			Local_73.f_4 = 1;
			if (ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("AVENGER"))
			{
				if (CAM::DOES_CAM_EXIST(Local_73.f_32))
				{
					fVar3 = Local_73.f_40;
					fVar3 = (fVar3 + 5f);
					CAM::SET_CAM_FOV(Local_73.f_32, fVar3);
				}
				STREAMING::_0x472397322E92A856();
			}
			if (func_113(bLocal_339) || func_112())
			{
				PAD::DISABLE_CONTROL_ACTION(0, 91, true);
				PAD::DISABLE_CONTROL_ACTION(0, 92, true);
			}
			PAD::DISABLE_CONTROL_ACTION(0, 91, true);
			PAD::DISABLE_CONTROL_ACTION(0, 68, true);
			PAD::DISABLE_CONTROL_ACTION(0, 69, true);
			PAD::DISABLE_CONTROL_ACTION(0, 80, true);
			PAD::DISABLE_CONTROL_ACTION(0, 65, true);
			PAD::DISABLE_CONTROL_ACTION(0, 99, true);
			PAD::DISABLE_CONTROL_ACTION(0, 100, true);
			PAD::DISABLE_CONTROL_ACTION(1, 1, true);
			PAD::DISABLE_CONTROL_ACTION(1, 2, true);
			PAD::DISABLE_CONTROL_ACTION(0, 37, true);
			if ((bLocal_301 || bLocal_302) || bLocal_303)
			{
				PAD::DISABLE_CONTROL_ACTION(1, 85, true);
			}
			func_108();
			func_107();
			func_129();
			if (Global_1319110 != -1)
			{
				if (!Global_1319111)
				{
					Global_1319111 = 1;
				}
				Local_73.f_25 = 50f;
				if (Global_1319110 == 1)
				{
					func_83(&Local_73, 0, 30f, -12f, -50f, 50f, 1041865114 /* Float: 0.15f */);
				}
				else if (Global_1319110 == 2)
				{
					func_83(&Local_73, 0, 30f, -55f, -85f, 140f, 1041865114 /* Float: 0.15f */);
				}
				else if (Global_1319110 == 3)
				{
					func_83(&Local_73, 0, 30f, -55f, -140f, 85f, 1041865114 /* Float: 0.15f */);
				}
				else
				{
					func_83(&Local_73, 0, 1086324736 /* Float: 6f */, -1030356992 /* Float: -75f */, -1020002304 /* Float: -180f */, 1127481344 /* Float: 180f */, 1041865114 /* Float: 0.15f */);
				}
				vVar0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				if ((((HUD::IS_PAUSE_MENU_ACTIVE() || func_120()) || PAD::IS_CONTROL_JUST_PRESSED(2, 199)) || PAD::IS_CONTROL_PRESSED(2, 199)) || PAD::IS_CONTROL_JUST_RELEASED(2, 199))
				{
					HUD::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(vVar0.x, vVar0.y);
					if (HUD::IS_PAUSE_MENU_ACTIVE() || func_120())
					{
						if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
						{
							HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 255);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
				{
					HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 0);
				}
				HUD::LOCK_MINIMAP_POSITION(vVar0.x, vVar0.y);
				HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
				HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
				HUD::SET_RADAR_ZOOM(0);
				vVar4 = { CAM::GET_FINAL_RENDERED_CAM_ROT(0) };
				vVar4 = { func_82(vVar4) };
				if (!HUD::DOES_BLIP_EXIST(iLocal_345))
				{
					iLocal_346 = func_80(vVar0, 0);
					HUD::SET_BLIP_SPRITE(iLocal_346, 425);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_346, false);
					HUD::SET_BLIP_DISPLAY(iLocal_346, 4);
					HUD::SET_BLIP_COLOUR(iLocal_346, func_79(2));
					HUD::SET_BLIP_SHOW_CONE(iLocal_346, true);
					HUD::SET_BLIP_SCALE(iLocal_346, 0.54f);
					HUD::SET_BLIP_PRIORITY(iLocal_346, 13 + 1);
					iLocal_345 = func_80(vVar0, 0);
					HUD::SET_BLIP_SPRITE(iLocal_345, 425);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_345, false);
					HUD::SET_BLIP_DISPLAY(iLocal_345, 4);
					HUD::SET_BLIP_COLOUR(iLocal_345, func_79(18));
					HUD::SET_BLIP_SHOW_CONE(iLocal_345, true);
					HUD::SET_BLIP_SCALE(iLocal_345, 0.44f);
					HUD::SET_BLIP_PRIORITY(iLocal_345, 13 + 1);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(iLocal_345, true);
					HUD::SET_BLIP_ROTATION(iLocal_345, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(vVar4.x, vVar4.y)));
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(iLocal_346, true);
					HUD::SET_BLIP_ROTATION(iLocal_346, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(vVar4.x, vVar4.y)));
				}
				else
				{
					HUD::SET_BLIP_COORDS(iLocal_345, vVar0);
					HUD::SET_BLIP_ROTATION(iLocal_345, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(vVar4.x, vVar4.y)));
					HUD::SET_BLIP_DISPLAY(iLocal_345, 5);
					HUD::SET_BLIP_COORDS(iLocal_346, vVar0);
					HUD::SET_BLIP_ROTATION(iLocal_346, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(vVar4.x, vVar4.y)));
					HUD::SET_BLIP_DISPLAY(iLocal_346, 5);
				}
			}
			else if (func_191(bLocal_339))
			{
				Local_73.f_36 = 0.002f;
				if (ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("AKULA"))
				{
					switch (func_78())
					{
						case 0:
							Local_73.f_25 = 180f;
							func_83(&Local_73, 0, 10f, -70f, -100f, 100f, fLocal_313);
							break;
						case 1:
							Local_73.f_25 = 170f;
							func_83(&Local_73, 0, 16.5f, -70f, -180f, 180f, fLocal_313);
							break;
						case 2:
							Local_73.f_25 = 170f;
							func_83(&Local_73, 0, 16.5f, -70f, -180f, 180f, fLocal_313);
							break;
						default:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 54f, -12f, -50f, 50f, fLocal_313);
							break;
					}
				}
				else if (ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("VOLATOL"))
				{
					if (!MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(bLocal_339, true), &fVar7, true, false))
					{
						fVar7 = -1000f;
					}
					vVar8 = { ENTITY::GET_ENTITY_COORDS(bLocal_339, true) };
					fVar11 = (vVar8.z - fVar7);
					fVar12 = func_77(((Local_73.f_40 - Local_73.f_39) / (Local_73.f_38 - Local_73.f_39)), 0f, 1f);
					Local_73.f_39 = func_76(10f, 27.9f, (1f - func_77(((fVar11 - 2f) / 40f), 0f, 1f)));
					Local_73.f_40 = func_76(Local_73.f_39, Local_73.f_38, fVar12);
					switch (func_78())
					{
						case 1:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 6.5f, -70f, -100f, 100f, fLocal_313);
							break;
						case 2:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 50f, 5f, -100f, 100f, fLocal_313);
							break;
						default:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 54f, -12f, -50f, 50f, fLocal_313);
							break;
					}
				}
				else
				{
					switch (func_78())
					{
						case 1:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 13f, -80f, -50f, 50f, fLocal_313);
							break;
						case 0:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 54f, -12f, -50f, 50f, fLocal_313);
							break;
						case 2:
							Local_73.f_25 = 70f;
							func_83(&Local_73, 0, 48f, -45f, -100f, 100f, fLocal_313);
							break;
						default:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 54f, -12f, -50f, 50f, fLocal_313);
							break;
					}
				}
			}
			else if (Global_1319116 != -1)
			{
				Local_73.f_36 = 0.002f;
				if (!func_124(3))
				{
					if (!Global_1319111)
					{
						Global_1319111 = 1;
					}
				}
				if (func_141(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID()))
				{
					switch (Global_1319116)
					{
						case 1:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 15f, -80f, -100f, 100f, fLocal_313);
							break;
						case 2:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 80f, -20f, -100f, 100f, fLocal_313);
							break;
						case 3:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 15f, -80f, -100f, 100f, fLocal_313);
							break;
						default:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 54f, -80f, -50f, 50f, fLocal_313);
							break;
					}
				}
				else if (!func_75(PLAYER::PLAYER_ID()) && !func_124(3))
				{
					switch (Global_1319116)
					{
						case 1:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 13f, -80f, -50f, 50f, fLocal_313);
							break;
						case 0:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 54f, -80f, -50f, 50f, fLocal_313);
							break;
						case 2:
							Local_73.f_25 = 70f;
							func_83(&Local_73, 0, 48f, -80f, -100f, 100f, fLocal_313);
							break;
						default:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 54f, -80f, -50f, 50f, fLocal_313);
							break;
					}
				}
				else if (func_124(3))
				{
					switch (Global_1319116)
					{
						case 1:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 88f, -80f, -100f, 100f, fLocal_313);
							break;
						case 0:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 88f, -80f, -100f, 100f, fLocal_313);
							break;
						case 2:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 88f, -80f, -100f, 100f, fLocal_313);
							break;
						default:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 88f, -80f, -100f, 100f, fLocal_313);
							break;
					}
				}
				else
				{
					switch (Global_1319116)
					{
						case 1:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 13f, -80f, -50f, 50f, fLocal_313);
							break;
						case 0:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 13f, -80f, -50f, 50f, fLocal_313);
							break;
						case 2:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 13f, -80f, -50f, 50f, fLocal_313);
							break;
						default:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 13f, -80f, -50f, 50f, fLocal_313);
							break;
					}
				}
				vVar0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				if ((((HUD::IS_PAUSE_MENU_ACTIVE() || func_120()) || PAD::IS_CONTROL_JUST_PRESSED(2, 199)) || PAD::IS_CONTROL_PRESSED(2, 199)) || PAD::IS_CONTROL_JUST_RELEASED(2, 199))
				{
					HUD::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(vVar0.x, vVar0.y);
					if (HUD::IS_PAUSE_MENU_ACTIVE() || func_120())
					{
						if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
						{
							HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 255);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
				{
					HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 0);
				}
				HUD::LOCK_MINIMAP_POSITION(vVar0.x, vVar0.y);
				HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
				HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
				HUD::SET_RADAR_ZOOM(0);
				vVar13 = { CAM::GET_FINAL_RENDERED_CAM_ROT(0) };
				vVar13 = { func_82(vVar13) };
				if (!HUD::DOES_BLIP_EXIST(iLocal_345))
				{
					iLocal_346 = func_80(vVar0, 0);
					HUD::SET_BLIP_SPRITE(iLocal_346, 425);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_346, false);
					HUD::SET_BLIP_DISPLAY(iLocal_346, 4);
					HUD::SET_BLIP_COLOUR(iLocal_346, func_79(2));
					HUD::SET_BLIP_SHOW_CONE(iLocal_346, true);
					HUD::SET_BLIP_SCALE(iLocal_346, 0.54f);
					HUD::SET_BLIP_PRIORITY(iLocal_346, 13 + 1);
					iLocal_345 = func_80(vVar0, 0);
					HUD::SET_BLIP_SPRITE(iLocal_345, 425);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_345, false);
					HUD::SET_BLIP_DISPLAY(iLocal_345, 4);
					HUD::SET_BLIP_COLOUR(iLocal_345, func_79(18));
					HUD::SET_BLIP_SHOW_CONE(iLocal_345, true);
					HUD::SET_BLIP_SCALE(iLocal_345, 0.44f);
					HUD::SET_BLIP_PRIORITY(iLocal_345, 13 + 1);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(iLocal_345, true);
					HUD::SET_BLIP_ROTATION(iLocal_345, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(vVar13.x, vVar13.y)));
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(iLocal_346, true);
					HUD::SET_BLIP_ROTATION(iLocal_346, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(vVar13.x, vVar13.y)));
				}
				else
				{
					HUD::SET_BLIP_COORDS(iLocal_345, vVar0);
					HUD::SET_BLIP_ROTATION(iLocal_345, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(vVar13.x, vVar13.y)));
					HUD::SET_BLIP_DISPLAY(iLocal_345, 5);
					HUD::SET_BLIP_COORDS(iLocal_346, vVar0);
					HUD::SET_BLIP_ROTATION(iLocal_346, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(vVar13.x, vVar13.y)));
					HUD::SET_BLIP_DISPLAY(iLocal_346, 5);
				}
			}
			else
			{
				Local_73.f_25 = 90f;
				func_83(&Local_73, 0, 1086324736 /* Float: 6f */, -1030356992 /* Float: -75f */, -1020002304 /* Float: -180f */, 1127481344 /* Float: 180f */, 1041865114 /* Float: 0.15f */);
			}
			func_72();
			Local_73.f_87 = 1;
			if (Local_73.f_34)
			{
				if (Global_1319116 != -1)
				{
					func_149(0);
					Local_73.f_34 = 0;
					if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_847)
					{
						HUD::UNLOCK_MINIMAP_POSITION();
					}
					Global_2513487 = 0;
					Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_847 = 0;
					func_70();
				}
				else
				{
					func_210();
				}
			}
			if (((((!bLocal_301 && !bLocal_302) && !bLocal_303) && iLocal_295 != joaat("HUNTER")) && iLocal_295 != joaat("AKULA")) && Global_1319116 == -1)
			{
				Local_73.f_7 = 1;
				func_130();
			}
			if (((bLocal_301 || bLocal_302) || bLocal_303) || func_112())
			{
				func_57();
				if (iLocal_295 != joaat("BOMBUSHKA"))
				{
					func_46();
				}
			}
			if (bLocal_355)
			{
				if (func_191(bLocal_339))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 75, true);
				}
			}
			if (((((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_45()) && !func_44(0)) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) || ((Global_1319110 != -1 && func_43(Global_1590374)) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || ((Global_1319116 != -1 && func_43(Global_1590374)) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
			{
				iVar16 = 51;
				iVar17 = 0;
				if (Global_1319110 != -1 || Global_1319116 != -1)
				{
					iVar17 = 2;
					iVar16 = 225;
				}
				if (func_191(bLocal_339))
				{
					iVar17 = 2;
					iVar16 = 225;
					PAD::DISABLE_CONTROL_ACTION(0, 80, true);
				}
				if ((((PAD::IS_CONTROL_JUST_PRESSED(iVar17, iVar16) || !VEHICLE::IS_VEHICLE_DRIVEABLE(bLocal_339, false)) || func_42(bLocal_339, 0)) || func_41("HUNTGUN_T_3")) || func_27())
				{
					bLocal_297 = false;
					if (func_191(bLocal_339))
					{
						func_144(&uLocal_324, 1, 0);
						Global_1319117 = 1;
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_345))
					{
						HUD::REMOVE_BLIP(&iLocal_345);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_346))
					{
						HUD::REMOVE_BLIP(&iLocal_346);
					}
					if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
					{
						HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 255);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
					if (Global_1319110 != -1 || Global_1319116 != -1)
					{
						Global_1319111 = 0;
						func_70();
						if (func_41(func_9(bLocal_339)))
						{
							HUD::CLEAR_HELP(true);
						}
						CAM::DO_SCREEN_FADE_OUT(0);
						Global_2513487 = 0;
						Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_847 = 0;
						Global_2513488 = 1;
						func_149(0);
						vVar0 = { func_8(PLAYER::PLAYER_ID()) };
						if (!func_7(vVar0))
						{
							HUD::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(vVar0.x, vVar0.y);
						}
						HUD::UNLOCK_MINIMAP_POSITION();
					}
					else if (func_191(bLocal_339))
					{
						func_149(0);
						func_70();
						PAD::DISABLE_CONTROL_ACTION(0, 80, true);
					}
					else
					{
						func_192(3);
					}
					Global_1676377.f_3320 = 0;
				}
			}
			break;
	}
	func_2();
}

void func_2()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	bVar1 = Global_1590535[PLAYER::GET_PLAYER_INDEX() /*876*/].f_732;
	if (func_193(PLAYER::PLAYER_ID()) || func_142(PLAYER::PLAYER_ID()))
	{
		if (bVar1)
		{
			iVar0 = 1;
		}
		else if (func_6())
		{
			iVar0 = 2;
		}
	}
	else if (func_141(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID()))
	{
		if (bVar1)
		{
			iVar0 = 3;
		}
		else if (func_6())
		{
			iVar0 = 4;
		}
	}
	else if (func_124(3))
	{
		iVar0 = 5;
	}
	if (iVar0 != iLocal_331)
	{
		if (iLocal_331 != 0)
		{
			AUDIO::STOP_AUDIO_SCENE(func_5(iLocal_331));
		}
		if (iVar0 != 0)
		{
			AUDIO::START_AUDIO_SCENE(func_5(iVar0));
		}
	}
	iLocal_331 = iVar0;
	if (bVar1)
	{
		if (Local_73.f_211 == -1)
		{
			Local_73.f_211 = AUDIO::GET_SOUND_ID();
			if (Local_73.f_211 != -1)
			{
				AUDIO::PLAY_SOUND_FRONTEND(Local_73.f_211, func_4(iLocal_332, 1), func_3(iLocal_332), true);
			}
		}
	}
	else if (Local_73.f_211 != -1)
	{
		AUDIO::STOP_SOUND(Local_73.f_211);
		AUDIO::RELEASE_SOUND_ID(Local_73.f_211);
		Local_73.f_211 = -1;
	}
}

char* func_3(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "DLC_GR_MOC_Turret_Sounds";
		case 2:
			return "dlc_xm_avngr_turret_Sounds";
		case 3:
			return "DLC_XM17_IAA_Finale_Remote_Turrets_Sounds";
		case 4:
			return "";
		default:
			break;
	}
	return "INVALID_TURRET_FIRE_SOUNDS";
}

char* func_4(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			if (func_124(3))
			{
				return "Background_Loop";
			}
			return "Turret_Camera_Hum_Loop";
		case 2:
			switch (iParam0)
			{
				case 4:
					return "SPL_ROCKET_HELI_NPC_master";
				default:
					break;
			}
			if (func_124(3))
			{
				return "Fire_Missile_Oneshot";
			}
			return "Fire";
		case 3:
			if (func_124(3))
			{
				return "Fire_MG_Loop";
			}
			return "Fire";
	}
	return "INVALID_TURRET_FIRE_KEY";
}

char* func_5(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "DLC_GR_MOC_Turret_View_Scene";
		case 2:
			return "MCU_FirstPerson_Seated_Scene";
		case 3:
			return "dlc_xm_avenger_turret_scene";
		case 4:
			return "dlc_xm_avenger_first_person_seated_scene";
		case 5:
			return "dlc_xm17_IAA_Turret_Scene";
		default:
			break;
	}
	return "INVALID_INTERIOR_AUDIO_SCENE";
}

bool func_6()
{
	if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		return true;
	}
	return false;
}

bool func_7(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_8(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

char* func_9(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (Global_1319110 != -1)
	{
		if (func_43(Global_1590374) && !MISC::IS_BIT_SET(Global_4456448.f_25, 7))
		{
			return "HUNTGUN_T_3";
		}
		else
		{
			return "HUNTGUN_T_2b";
		}
	}
	if (func_124(3))
	{
		iVar2 = func_26(1);
		if (iVar2 != Global_1319116)
		{
			bVar0 = func_25(iVar2);
			if (bVar0)
			{
				switch (iVar2)
				{
					case 1:
						if (!func_25(1))
						{
							bVar0 = false;
						}
						break;
					case 2:
						if (!func_25(2))
						{
							bVar0 = false;
						}
						break;
					case 3:
						if (!func_25(3))
						{
							bVar0 = false;
						}
						break;
					case 4:
						if (!func_25(4))
						{
							bVar0 = false;
						}
						break;
				}
			}
		}
		else
		{
			bVar0 = false;
		}
		iVar3 = func_26(0);
		if (iVar3 != Global_1319116)
		{
			bVar1 = func_25(iVar3);
			if (bVar1)
			{
				switch (iVar3)
				{
					case 1:
						if (!func_25(1))
						{
							bVar1 = false;
						}
						break;
					case 2:
						if (!func_25(2))
						{
							bVar1 = false;
						}
						break;
					case 3:
						if (!func_25(3))
						{
							bVar1 = false;
						}
						break;
					case 4:
						if (!func_25(4))
						{
							bVar1 = false;
						}
						break;
				}
			}
			else
			{
				bVar1 = false;
			}
		}
		else
		{
			bVar1 = false;
		}
		switch (Global_1319116)
		{
			case 1:
				if (bVar0 && bVar1)
				{
					return "IAA_T_2_OSM1";
				}
				else if (bVar1)
				{
					return "IAA_T_2_OSL1";
				}
				else if (bVar0)
				{
					return "IAA_T_2_OSR1";
				}
				else
				{
					return "IAA_T_2_OSN1";
				}
				break;
			case 2:
				if (bVar0 && bVar1)
				{
					return "IAA_T_2_OSM2";
				}
				else if (bVar1)
				{
					return "IAA_T_2_OSL2";
				}
				else if (bVar0)
				{
					return "IAA_T_2_OSR2";
				}
				else
				{
					return "IAA_T_2_OSN2";
				}
				break;
			case 3:
				if (bVar0 && bVar1)
				{
					return "IAA_T_2_OSM3";
				}
				else if (bVar1)
				{
					return "IAA_T_2_OSL3";
				}
				else if (bVar0)
				{
					return "IAA_T_2_OSR3";
				}
				else
				{
					return "IAA_T_2_OSN3";
				}
				break;
			case 4:
				if (bVar0 && bVar1)
				{
					return "IAA_T_2_OSM4";
				}
				else if (bVar1)
				{
					return "IAA_T_2_OSL4";
				}
				else if (bVar0)
				{
					return "IAA_T_2_OSR4";
				}
				else
				{
					return "IAA_T_2_OSN4";
				}
				break;
		}
	}
	bVar1 = false;
	bVar0 = false;
	if (func_141(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID()))
	{
		iVar4 = func_22(1);
		if (iVar4 != Global_1319116)
		{
			bVar0 = func_21(iVar4);
			if (bVar0)
			{
				switch (iVar4)
				{
					case 1:
						if (!func_19())
						{
							bVar0 = false;
						}
						break;
					case 2:
						if (!func_18())
						{
							bVar0 = false;
						}
						break;
					case 3:
						if (!func_10())
						{
							bVar0 = false;
						}
						break;
				}
			}
		}
		else
		{
			bVar0 = false;
		}
		iVar5 = func_22(0);
		if (iVar5 != Global_1319116)
		{
			bVar1 = func_21(iVar5);
			if (bVar1)
			{
				switch (func_22(0))
				{
					case 1:
						if (!func_19())
						{
							bVar1 = false;
						}
						break;
					case 2:
						if (!func_18())
						{
							bVar1 = false;
						}
						break;
					case 3:
						if (!func_10())
						{
							bVar1 = false;
						}
						break;
				}
			}
			else
			{
				bVar1 = false;
			}
		}
		else
		{
			bVar1 = false;
		}
		switch (Global_1319116)
		{
			case 1:
				if (bVar0 && bVar1)
				{
					return "HUNTGUN_T_2_OSM1";
				}
				else if (bVar1)
				{
					return "HUNTGUN_T_2_OSL1";
				}
				else if (bVar0)
				{
					return "HUNTGUN_T_2_OSR1";
				}
				else
				{
					return "HUNTGUN_T_2_OSN1";
				}
				break;
			case 2:
				if (bVar0 && bVar1)
				{
					return "HUNTGUN_T_2_OSM3";
				}
				else if (bVar1)
				{
					return "HUNTGUN_T_2_OSL3";
				}
				else if (bVar0)
				{
					return "HUNTGUN_T_2_OSR3";
				}
				else
				{
					return "HUNTGUN_T_2_OSN3";
				}
				break;
			case 3:
				if (bVar0 && bVar1)
				{
					return "HUNTGUN_T_2_OSM2";
				}
				else if (bVar1)
				{
					return "HUNTGUN_T_2_OSL2";
				}
				else if (bVar0)
				{
					return "HUNTGUN_T_2_OSR2";
				}
				else
				{
					return "HUNTGUN_T_2_OSN2";
				}
				break;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		switch (ENTITY::GET_ENTITY_MODEL(bParam0))
		{
			case joaat("BOMBUSHKA"):
				return "BOMBGUN_T_2c";
			case joaat("RHINO"):
				return "BOMBGUN_T_2c";
			case joaat("AKULA"):
				return "AKULAGUN_P2";
		}
	}
	return "";
}

bool func_10()
{
	int iVar0;

	if (func_141(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_16(0, 0);
	}
	else if (func_140(PLAYER::PLAYER_ID()))
	{
		iVar0 = Global_2537071.f_307;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (func_141(PLAYER::PLAYER_ID()))
			{
				if (VEHICLE::GET_VEHICLE_MOD(iVar0, 10) == 1 && !func_11())
				{
					return true;
				}
			}
			if (func_140(PLAYER::PLAYER_ID()))
			{
				if (VEHICLE::GET_VEHICLE_MOD(iVar0, 10) == 1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_11()
{
	int iVar0;
	vector3 vVar1;

	if (func_15(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_261.f_22 != 0)
		{
			iVar0 = func_14(PLAYER::PLAYER_ID());
			if (func_13(iVar0))
			{
				vVar1 = { func_12(iVar0) };
				if (ENTITY::DOES_ENTITY_EXIST(func_16(0, 0)))
				{
					if (!ENTITY::IS_ENTITY_DEAD(func_16(0, 0), false))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_16(0, 0), true), vVar1, true) < 150f)
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

Vector3 func_12(int iParam0)
{
	return Global_4008564[iParam0 /*45*/].f_4;
}

bool func_13(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 37)
	{
		return true;
	}
	return false;
}

int func_14(int iParam0)
{
	return Global_2420771[iParam0 /*3*/];
}

bool func_15(int iParam0, bool bParam1, bool bParam2)
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

int func_16(bool bParam0, bool bParam1)
{
	if (func_141(PLAYER::PLAYER_ID()) || bParam0)
	{
		if (Global_1590379 != func_17())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1694019[Global_1590379]))
			{
				return Global_1370251;
			}
			return Global_1694019[Global_1590379];
		}
	}
	if (bParam1)
	{
		if (Global_1590380 != func_17())
		{
			return Global_1694019[Global_1590380];
		}
	}
	return -1;
}

int func_17()
{
	return -1;
}

bool func_18()
{
	int iVar0;

	if (func_141(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_16(0, 0);
	}
	else if (func_140(PLAYER::PLAYER_ID()))
	{
		iVar0 = Global_2537071.f_307;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (func_141(PLAYER::PLAYER_ID()))
			{
				if (VEHICLE::GET_VEHICLE_MOD(iVar0, 10) == 1 && !func_11())
				{
					return true;
				}
			}
			if (func_140(PLAYER::PLAYER_ID()))
			{
				if (VEHICLE::GET_VEHICLE_MOD(iVar0, 10) == 1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_19()
{
	if (func_141(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_16(0, 0)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_16(0, 0), false))
			{
				if (func_20(Global_1590379) && !func_11())
				{
					return true;
				}
				if ((VEHICLE::GET_VEHICLE_MOD(func_16(0, 0), 10) == 0 || VEHICLE::GET_VEHICLE_MOD(func_16(0, 0), 10) == 1) && !func_11())
				{
					return true;
				}
			}
		}
	}
	if (func_140(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2537071.f_307))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_2537071.f_307, false))
			{
				if (VEHICLE::GET_VEHICLE_MOD(Global_2537071.f_307, 10) == 0 || VEHICLE::GET_VEHICLE_MOD(Global_2537071.f_307, 10) == 1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_20(int iParam0)
{
	if (iParam0 != func_17())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_278, 0);
	}
	return false;
}

bool func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_310.f_6;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_15(iVar2, 1, 1) && iVar2 != PLAYER::PLAYER_ID())
		{
			if (Global_2425662[iVar2 /*421*/].f_310.f_6 == iVar0)
			{
				if (Global_1590535[iVar2 /*876*/].f_846 == iParam0)
				{
					return false;
				}
			}
		}
		iVar1++;
	}
	return true;
}

int func_22(int iParam0)
{
	int iVar0;

	if (func_141(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::IS_ENTITY_DEAD(Global_1370251, false))
		{
			return -1;
		}
	}
	else if (func_140(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::IS_ENTITY_DEAD(Global_2537071.f_307, false))
		{
			return -1;
		}
	}
	if (iParam0 == 0)
	{
		iVar0 = (Global_1319116 % 3) + 1;
		while (!func_24(iVar0))
		{
			iVar0 = (iVar0 % 3) + 1;
		}
		return iVar0;
	}
	iVar0 = func_23(Global_1319116 == 1, 3, (Global_1319116 - 1));
	while (!func_24(iVar0))
	{
		iVar0 = func_23(iVar0 <= 1, 3, (iVar0 - 1));
	}
	return iVar0;
}

int func_23(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_24(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (func_19() && func_21(iParam0))
			{
				return true;
			}
			break;
		case 2:
			if (func_18() && func_21(iParam0))
			{
				return true;
			}
			break;
		case 3:
			if (func_10() && func_21(iParam0))
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_310.f_6;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_15(iVar2, 1, 1) && iVar2 != PLAYER::PLAYER_ID())
		{
			if (Global_2425662[iVar2 /*421*/].f_310.f_6 == iVar0)
			{
				if (Global_1590535[iVar2 /*876*/].f_846 == iParam0)
				{
					return false;
				}
			}
		}
		iVar1++;
	}
	return true;
}

int func_26(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(bLocal_339, false))
	{
		return -1;
	}
	if (iParam0 == 0)
	{
		iVar0 = (Global_1319116 % 4) + 1;
		while (!func_25(iVar0))
		{
			iVar0 = (iVar0 % 4) + 1;
		}
		return iVar0;
	}
	iVar0 = func_23(Global_1319116 == 1, 4, (Global_1319116 - 1));
	while (!func_25(iVar0))
	{
		iVar0 = func_23(iVar0 <= 1, 4, (iVar0 - 1));
	}
	return iVar0;
}

bool func_27()
{
	int iVar0;

	if (func_193(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_40(PLAYER::PLAYER_ID());
		if (func_15(iVar0, 0, 1))
		{
			if ((((((func_39(iVar0) && func_37(func_38(iVar0)) == 4) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false))) && func_36(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false)))
			{
				return true;
			}
			if (!func_35(Global_4456448.f_194990))
			{
				if (func_193(iVar0))
				{
					if (func_43(iVar0))
					{
						return true;
					}
					else if (func_39(PLAYER::PLAYER_ID()) || func_34())
					{
						return true;
					}
				}
			}
		}
	}
	if (Global_1687716)
	{
		return true;
	}
	if (func_141(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_33(PLAYER::PLAYER_ID());
		if (func_15(iVar0, 0, 1))
		{
			if ((((((func_39(iVar0) && func_37(func_38(iVar0)) == 9) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false)) == joaat("AVENGER"))
			{
				return true;
			}
			if (func_32(iVar0))
			{
				return true;
			}
			else if (func_39(PLAYER::PLAYER_ID()) || func_34())
			{
				return true;
			}
		}
	}
	if (func_31(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_30(PLAYER::PLAYER_ID());
		if (func_15(iVar0, 0, 1))
		{
			if ((((Global_1590382 != func_17() && func_39(Global_1590382)) && func_37(func_38(Global_1590382)) == 11) && func_29(Global_1590382, -1)) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(Global_1590382), false), joaat("TERBYTE")))
			{
				return true;
			}
			else if (func_28(iVar0))
			{
				return true;
			}
			else if (func_39(PLAYER::PLAYER_ID()) || func_34())
			{
				return true;
			}
		}
	}
	if (func_141(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID()))
	{
		switch (Global_1319116)
		{
			case 1:
				if (Global_262145.f_22584)
				{
					return true;
				}
				break;
			case 2:
				if (Global_262145.f_22585)
				{
					return true;
				}
				break;
			case 3:
				if (Global_262145.f_22586)
				{
					return true;
				}
				break;
		}
	}
	if (Global_1319114 == 1)
	{
		return true;
	}
	if (func_124(3))
	{
		if (Global_1573352 == 185)
		{
			if (Global_1574442 != 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_28(int iParam0)
{
	if (iParam0 != func_17())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310.f_3, 4);
	}
	return false;
}

bool func_29(int iParam0, int iParam1)
{
	int iVar0;

	if (func_15(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, false))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_30(int iParam0)
{
	if (iParam0 == func_17())
	{
		return iParam0;
	}
	return Global_2425662[iParam0 /*421*/].f_310.f_8;
}

bool func_31(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("TERBYTE"))
			{
				return true;
			}
		}
	}
	if (iParam0 != func_17())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[iParam0 /*421*/].f_310.f_8 != func_17())
			{
				return func_37(Global_2425662[iParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return false;
}

bool func_32(int iParam0)
{
	if (iParam0 != func_17())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310.f_2, 6);
	}
	return false;
}

int func_33(int iParam0)
{
	if (iParam0 == func_17())
	{
		return iParam0;
	}
	return Global_2425662[iParam0 /*421*/].f_310.f_8;
}

bool func_34()
{
	return MISC::IS_BIT_SET(Global_1676377, 6);
}

bool func_35(int iParam0)
{
	return Global_262145.f_4999[4] == iParam0;
}

bool func_36(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("HAULER2") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("PHANTOM3"))
	{
		return true;
	}
	return false;
}

int func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
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
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
		case 81:
			return 5;
		case 82:
			return 6;
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
		case 88:
			return 8;
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
		case 101:
			return 10;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
		case 117:
			return 12;
		case 122:
			return 13;
		case 123:
			return 14;
		case 124:
			return 15;
		case 125:
			return 16;
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
		case 145:
			return 18;
	}
	return -1;
}

int func_38(int iParam0)
{
	if (iParam0 != func_17() && func_15(iParam0, 1, 1))
	{
		return Global_2425662[iParam0 /*421*/].f_310.f_14;
	}
	return -1;
}

bool func_39(int iParam0)
{
	if (iParam0 != func_17() && func_15(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310, 3);
	}
	return false;
}

int func_40(int iParam0)
{
	if (iParam0 == func_17())
	{
		return iParam0;
	}
	return Global_2425662[iParam0 /*421*/].f_310.f_8;
}

bool func_41(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_42(bool bParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(bParam0, false) || bParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(bParam0) >= 0.7f)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_43(int iParam0)
{
	if (iParam0 != func_17())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310, 6);
	}
	return false;
}

bool func_44(int iParam0)
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

bool func_45()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

void func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	var uVar14;
	var uVar15;
	bool bVar16;
	bool bVar17;

	if (func_56())
	{
		return;
	}
	fVar10 = 99999f;
	iVar11 = -1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar16 = MISC::IS_BIT_SET(Global_1574316, iVar0);
		iVar2 = iVar0;
		if (iVar2 != PLAYER::PLAYER_ID())
		{
			if (func_15(iVar2, 1, 1))
			{
				iVar1 = PLAYER::GET_PLAYER_PED(iVar2);
				vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar1, true) };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vVar3, true) <= 150f)
				{
					if (func_55(iVar2, -1))
					{
						if (GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar3, &fVar12, &fVar13))
						{
							if (!bVar16)
							{
								if (func_54(fVar12, fVar13, 0.4f, 0.4f, 0.6f, 0.6f))
								{
									fVar9 = func_53(fVar12, fVar13, &uVar14, &uVar15);
									if (fVar9 < fVar10)
									{
										fVar10 = fVar9;
										iVar11 = iVar0;
										vVar6 = { vVar3 };
									}
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar11 != -1)
	{
		if (GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar6 + Vector(-1f, 0f, 0f), &fVar12, &fVar13))
		{
			func_47(fVar12, fVar13);
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				bVar17 = false;
				if (PAD::_IS_INPUT_DISABLED(0))
				{
					bVar17 = PAD::IS_CONTROL_JUST_PRESSED(0, 25);
				}
				else
				{
					bVar17 = PAD::IS_CONTROL_JUST_PRESSED(2, 201);
				}
				if (bVar17)
				{
					MISC::SET_BIT(&Global_1574316, iVar11);
				}
			}
		}
	}
}

void func_47(float fParam0, float fParam1)
{
	var uVar0;
	var uVar2;

	if (func_56())
	{
		return;
	}
	func_49(&uVar0, &uVar2, fParam0, fParam1);
	if (PAD::_IS_INPUT_DISABLED(0))
	{
		func_48("HUNTGUN_5_KM", -1);
	}
	else
	{
		func_48("HUNTGUN_5", -1);
	}
}

void func_48(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_49(var uParam0, var uParam1, float fParam2, float fParam3)
{
	*uParam0 = fParam2;
	uParam0->f_1 = fParam3;
	*uParam1 = 0;
	uParam1->f_1 = 0.25f;
	uParam1->f_2 = 0.25f;
	uParam1->f_7 = 2;
	func_50(func_51(1), &(uParam1->f_3), &(uParam1->f_4), &(uParam1->f_5), &(uParam1->f_6));
}

void func_50(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = MISC::GET_BITS_IN_RANGE(iParam0, 24, 31);
	*uParam2 = MISC::GET_BITS_IN_RANGE(iParam0, 16, 23);
	*uParam3 = MISC::GET_BITS_IN_RANGE(iParam0, 8, 15);
	*uParam4 = MISC::GET_BITS_IN_RANGE(iParam0, 0, 7);
}

var func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return func_52(iVar0, iVar1, iVar2, iVar3);
}

var func_52(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;

	MISC::SET_BITS_IN_RANGE(&uVar0, 24, 31, iParam0);
	MISC::SET_BITS_IN_RANGE(&uVar0, 16, 23, iParam1);
	MISC::SET_BITS_IN_RANGE(&uVar0, 8, 15, iParam2);
	MISC::SET_BITS_IN_RANGE(&uVar0, 0, 7, iParam3);
	return uVar0;
}

float func_53(float fParam0, float fParam1, var uParam2, var uParam3)
{
	float fVar0;
	float fVar1;

	if (fParam0 <= 0.5f)
	{
		fVar0 = (0.5f - fParam0);
	}
	else
	{
		fVar0 = (fParam0 - 0.5f);
	}
	if (fParam1 <= 0.5f)
	{
		fVar1 = (0.5f - fParam1);
	}
	else
	{
		fVar1 = (fParam1 - 0.5f);
	}
	*uParam2 = fVar0;
	*uParam3 = fVar1;
	return (fVar0 + fVar1);
}

bool func_54(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (fParam0 >= fParam2 && fParam0 <= fParam4)
	{
		if (fParam1 >= fParam3 && fParam1 <= fParam5)
		{
			return true;
		}
	}
	return false;
}

bool func_55(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return MISC::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_33, iParam0);
	}
	else if (Global_2439138.f_3781[iParam0] >= iParam1)
	{
		return true;
	}
	return false;
}

bool func_56()
{
	if (MISC::IS_BIT_SET(Global_4456448.f_33, 24))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(Global_4456448.f_33, 25))
	{
		return true;
	}
	return false;
}

void func_57()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	int iVar20;
	bool bVar21;
	vector3 vVar22;
	vector3 vVar25;
	struct<2> Var28;
	struct<2> Var30;
	struct<2> Var32;
	struct<2> Var34;
	struct<2> Var36;

	if (func_113(bLocal_339) || (func_112() && !HUD::IS_PAUSE_MENU_ACTIVE()))
	{
		if (!func_69())
		{
			if (func_124(3))
			{
				iVar0 = joaat("W_EX_VEHICLEMISSILE_3");
			}
			else if (((func_193(PLAYER::PLAYER_ID()) || func_142(PLAYER::PLAYER_ID())) || func_141(PLAYER::PLAYER_ID())) || func_140(PLAYER::PLAYER_ID()))
			{
				iVar0 = joaat("W_LR_RPG_ROCKET");
			}
			else
			{
				iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(func_68(bLocal_339));
			}
			STREAMING::REQUEST_MODEL(iVar0);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				if (((PAD::IS_DISABLED_CONTROL_PRESSED(2, 229) || PAD::IS_CONTROL_PRESSED(2, 229)) && !bLocal_298) && !func_122(&(Global_2439138.f_4000)))
				{
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (CAM::DOES_CAM_EXIST(Local_73.f_32))
							{
								if (CAM::IS_CAM_ACTIVE(Local_73.f_32))
								{
									iVar1 = 250;
									if (func_65(PLAYER::PLAYER_ID(), 0))
									{
										iVar2 = -1;
										if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MC_EntityID", 3))
										{
											if (DECORATOR::DECOR_EXIST_ON(bLocal_339, "MC_EntityID"))
											{
												iVar2 = DECORATOR::DECOR_GET_INT(bLocal_339, "MC_EntityID");
											}
										}
										if (iVar2 != -1 && Global_4456448.f_124065[iVar2 /*325*/].f_219 != -1)
										{
											iVar1 = Global_4456448.f_124065[iVar2 /*325*/].f_219;
										}
									}
									bVar3 = bLocal_339;
									if (func_64(bLocal_339, Global_1319115) || func_112())
									{
										if (func_62())
										{
											if (!ENTITY::IS_ENTITY_DEAD(Local_73.f_9, false))
											{
												bVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_73.f_9);
											}
											vVar4 = { func_59() };
											if (func_141(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID()))
											{
												vVar4 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
												vVar7 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
												vVar10 = { (-SYSTEM::SIN(vVar7.z) * SYSTEM::COS(vVar7.x)), (SYSTEM::COS(vVar7.z) * SYSTEM::COS(vVar7.x)), SYSTEM::SIN(vVar7.x) };
												vVar13 = { 10f, 10f, 10f };
												vVar16 = { vVar4 + vVar10 * vVar13 };
												MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(vVar4, vVar16, iVar1, true, func_68(bLocal_339), PLAYER::PLAYER_PED_ID(), true, true, -1f, bVar3, false, false, false, true, 0, 1);
											}
											else
											{
												MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(vVar4, Local_73.f_45, iVar1, true, func_68(bLocal_339), PLAYER::PLAYER_PED_ID(), true, true, -1f, bVar3, false, false, false, true, 0, 1);
											}
											func_144(&(Global_2439138.f_4000), 0, 0);
											if (iLocal_332 != 0)
											{
												AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_4(iLocal_332, 2), bLocal_339, func_3(iLocal_332), true, func_58(iLocal_332, 2));
												if (iLocal_332 == 4)
												{
													AUDIO::PLAY_SOUND_FRONTEND(-1, func_4(iLocal_332, 2), 0, true);
												}
											}
										}
									}
									else if (!func_64(bLocal_339, Global_1319115))
									{
									}
								}
							}
						}
					}
				}
			}
			if (func_124(3))
			{
				if (STREAMING::HAS_MODEL_LOADED(iVar0))
				{
					if ((PAD::IS_DISABLED_CONTROL_PRESSED(2, 228) || PAD::IS_CONTROL_PRESSED(2, 228)) && !func_122(&Local_290))
					{
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							{
								if (CAM::DOES_CAM_EXIST(Local_73.f_32))
								{
									if (CAM::IS_CAM_ACTIVE(Local_73.f_32))
									{
										iVar19 = 250;
										if (func_65(PLAYER::PLAYER_ID(), 0))
										{
											iVar20 = -1;
											if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MC_EntityID", 3))
											{
												if (DECORATOR::DECOR_EXIST_ON(bLocal_339, "MC_EntityID"))
												{
													iVar20 = DECORATOR::DECOR_GET_INT(bLocal_339, "MC_EntityID");
												}
											}
											if (iVar20 != -1 && Global_4456448.f_124065[iVar20 /*325*/].f_219 != -1)
											{
												iVar19 = Global_4456448.f_124065[iVar20 /*325*/].f_219;
											}
										}
										bVar21 = bLocal_339;
										if (func_64(bLocal_339, Global_1319115) || func_112())
										{
											if (!ENTITY::IS_ENTITY_DEAD(Local_73.f_9, false))
											{
												bVar21 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_73.f_9);
											}
											vVar22 = { func_59() };
											if (func_124(3))
											{
												vVar25 = { CAM::GET_CAM_ROT(CAM::GET_RENDERING_CAM(), 2) };
												vVar22 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar22, vVar25.z, -0.5f, 0f, 0f) };
											}
											MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(vVar22, Local_73.f_45, iVar19, true, joaat("VEHICLE_WEAPON_PLAYER_BULLET"), PLAYER::PLAYER_PED_ID(), true, true, -1f, bVar21, false, false, false, true, 0, 1);
											func_144(&Local_290, 0, 0);
											if (iLocal_332 != 0)
											{
												AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_4(iLocal_332, 3), bLocal_339, func_3(iLocal_332), true, 120);
											}
										}
										else if (!func_64(bLocal_339, Global_1319115))
										{
										}
									}
								}
							}
						}
					}
					else if (!(((PAD::IS_DISABLED_CONTROL_PRESSED(2, 25) || PAD::IS_CONTROL_PRESSED(2, 25)) && func_124(3)) && !func_122(&Local_290)))
					{
						if (func_122(&Local_290))
						{
						}
					}
				}
			}
			if (func_122(&(Global_2439138.f_4000)) || func_122(&Local_290))
			{
				if (func_64(bLocal_339, Global_1319115) || func_112())
				{
					if (func_193(PLAYER::PLAYER_ID()) || func_142(PLAYER::PLAYER_ID()))
					{
						if (func_121(&(Global_2439138.f_4000), 1000, 0))
						{
							func_147(&(Global_2439138.f_4000));
							Global_2439138.f_4000 = { Var28 };
						}
					}
					else if (func_141(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID()))
					{
						if (func_121(&(Global_2439138.f_4000), 500, 0))
						{
							func_147(&(Global_2439138.f_4000));
							Global_2439138.f_4000 = { Var30 };
						}
					}
					else if (func_124(3))
					{
						if (func_122(&(Global_2439138.f_4000)))
						{
							if (func_121(&(Global_2439138.f_4000), 500, 0))
							{
								func_147(&(Global_2439138.f_4000));
								Global_2439138.f_4000 = { Var32 };
							}
						}
						if (func_122(&Local_290))
						{
							if (func_121(&Local_290, 50, 0))
							{
								func_147(&Local_290);
								Local_290 = { Var34 };
							}
						}
					}
					else if (func_121(&(Global_2439138.f_4000), 2000, 0))
					{
						func_147(&(Global_2439138.f_4000));
						Global_2439138.f_4000 = { Var36 };
					}
				}
			}
		}
	}
}

int func_58(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			return 250;
		default:
			break;
	}
	return 120;
}

Vector3 func_59()
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	vector3 vVar17;

	if (func_61(bLocal_339, &uVar4))
	{
	}
	switch (iLocal_295)
	{
		case joaat("BUZZARD"):
		case joaat("SAVAGE"):
			switch (func_60())
			{
				case 0:
					vVar1 = { 1.59f, 0.415f, -0.43f };
					break;
				case 1:
					vVar1 = { -1.59f, 0.415f, -0.43f };
					break;
			}
			break;
		case joaat("VALKYRIE"):
			switch (func_60())
			{
				case 0:
					vVar1 = { 2.89f, 1.215f, -0.43f };
					break;
				case 1:
					vVar1 = { -2.89f, 1.215f, -0.43f };
					break;
			}
			break;
		case joaat("HUNTER"):
			switch (func_60())
			{
				case 0:
					vVar1 = { 2.89f, 1.215f, -0.43f };
					break;
				case 1:
					vVar1 = { -2.89f, 1.215f, -0.43f };
					break;
			}
			break;
	}
	if (func_191(bLocal_339))
	{
		switch (func_78())
		{
			case 0:
				vVar1 = { 0.0122f, 8.7349f, 0.7239f };
				break;
			case 1:
				vVar1 = { 0.0082f, 1.1879f, 5.2393f };
				break;
			case 2:
				vVar1 = { -0.0083f, -22.7956f, 4.218f };
				break;
		}
	}
	if (Global_1319116 != -1)
	{
		if (ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("BOMBUSHKA"))
		{
			switch (Global_1319116)
			{
				case 0:
					vVar1 = { 0.0122f, 8.7349f, 0.7239f };
					break;
				case 1:
					vVar1 = { 0.0082f, 1.1879f, 5.2393f };
					break;
				case 2:
					vVar1 = { -0.0083f, -22.7956f, 4.218f };
					break;
			}
		}
		if (ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("VOLATOL"))
		{
			switch (Global_1319116)
			{
				case 0:
					vVar1 = { 0.0122f, 8.7349f, 0.7239f };
					break;
				case 1:
					vVar1 = { 0.0082f, 1.1879f, 5.2393f };
					break;
				case 2:
					vVar1 = { -0.0083f, -22.7956f, 4.218f };
					break;
			}
		}
	}
	if (func_75(PLAYER::PLAYER_ID()) || func_124(3))
	{
		vVar5 = { 2065.848f, 2967.32f, 45.2947f };
		vVar8 = { 2049.612f, 2947.657f, 49.556f };
		vVar11 = { 2045.091f, 2943.258f, 49.4991f };
		vVar14 = { 2040.365f, 2952.754f, 49.5688f };
		vVar17 = { 2049.385f, 2953.971f, 49.9635f };
		switch (Global_1319116)
		{
			case 1:
				vVar1 = { vVar8 - vVar5 };
				break;
			case 2:
				vVar1 = { vVar11 - vVar5 };
				break;
			case 3:
				vVar1 = { vVar14 - vVar5 };
				break;
			case 4:
				vVar1 = { vVar17 - vVar5 };
				break;
		}
	}
	if (Global_1319110 != -1)
	{
		switch (Global_1319110)
		{
			case 1:
				vVar1 = { 0f, 9f, 0.92f };
				break;
			case 2:
				vVar1 = { -2.4f, -8f, 1.14f };
				break;
			case 3:
				vVar1 = { 2.4f, -8f, 1.14f };
				break;
			case 4:
				vVar1 = { Vector(1.7578f, 9.3693f, -1.3829f) + Vector(0f, 0.2053f, 1.3666f) };
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(bLocal_339))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(bLocal_339, vVar1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, vVar1);
			}
			else if (func_112())
			{
				return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(bLocal_339, vVar1);
			}
		}
	}
	return 0f, 0f, 0f;
}

int func_60()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;

	vVar6 = { CAM::GET_CAM_ROT(Local_73.f_32, 2) };
	vVar3 = { (-SYSTEM::SIN(vVar6.z) * SYSTEM::COS(vVar6.x)), (SYSTEM::COS(vVar6.z) * SYSTEM::COS(vVar6.x)), SYSTEM::SIN(vVar6.x) };
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_73.f_8) };
	fVar10 = MISC::ATAN2(vVar3.y, vVar3.x);
	fVar9 = MISC::ATAN2(vVar0.y, vVar0.x);
	if (fVar10 < -3.14f)
	{
		fVar10 = -3.14f;
	}
	if (fVar10 > 3.14f)
	{
		fVar10 = 3.14f;
	}
	if (fVar9 < -3.14f)
	{
		fVar9 = -3.14f;
	}
	if (fVar9 > 3.14f)
	{
		fVar9 = 3.14f;
	}
	fVar11 = (fVar10 - fVar9);
	if (fVar11 <= 0f)
	{
		return 0;
	}
	return 1;
}

bool func_61(bool bParam0, var uParam1)
{
	switch (ENTITY::GET_ENTITY_MODEL(bParam0))
	{
		case joaat("BUZZARD"):
			return true;
		case joaat("BUZZARD2"):
			return true;
		case joaat("POLMAV"):
			return true;
		case joaat("FROGGER"):
			return true;
		case joaat("MAVERICK"):
			return true;
		case joaat("ANNIHILATOR"):
			return true;
		case joaat("VALKYRIE"):
			*uParam1 = 1;
			return true;
		case joaat("SAVAGE"):
			return true;
		case joaat("HUNTER"):
			return true;
		case joaat("BOMBUSHKA"):
			return true;
		case joaat("VOLATOL"):
			return true;
		case joaat("AKULA"):
			return true;
	}
	return func_191(bParam0);
	return false;
}

bool func_62()
{
	float fVar0;
	bool bVar1;
	int iVar2;

	fVar0 = MISC::ABSF(Local_73.f_186.f_2);
	bVar1 = true;
	switch (ENTITY::GET_ENTITY_MODEL(bLocal_339))
	{
		case joaat("AVENGER"):
			switch (Global_1319116)
			{
				case 1:
					if (VEHICLE::_GET_VEHICLE_FLIGHT_NOZZLE_POSITION(bLocal_339) >= 0.4f)
					{
						if ((fVar0 > 122.6f && fVar0 < 131.3f) && Local_73.f_186 > 7.87f)
						{
							bVar1 = false;
						}
						else if ((fVar0 > 140.5f && fVar0 < 159.5f) && Local_73.f_186 > func_63(6f, 15f, -159.5f, -140.5f, -fVar0))
						{
							bVar1 = false;
						}
					}
					if (bVar1 && VEHICLE::_DOES_VEHICLE_HAVE_LANDING_GEAR(bLocal_339))
					{
						iVar2 = VEHICLE::GET_LANDING_GEAR_STATE(bLocal_339);
						if ((iVar2 == 0 || iVar2 == 3) || iVar2 == 1)
						{
							if (Local_73.f_186 > -13f)
							{
								if (Local_73.f_186 > -3.7f)
								{
									bVar1 = !fVar0 > 157f;
								}
								else
								{
									bVar1 = !(fVar0 > 164f && fVar0 < 177f);
								}
							}
						}
						else
						{
							bVar1 = !(fVar0 > 140.5f && Local_73.f_186 > func_63(0.5f, 15f, -180f, -140.5f, -fVar0));
						}
					}
					break;
				case 2:
					if (VEHICLE::_GET_VEHICLE_FLIGHT_NOZZLE_POSITION(bLocal_339) >= 0.4f)
					{
						bVar1 = !((fVar0 > 111.2f && fVar0 < 125.8f) && Local_73.f_186 < 20f);
					}
					if (bVar1)
					{
						bVar1 = !((fVar0 > 20f && fVar0 < 27.6f) && Local_73.f_186 < 10.9f);
					}
					if (bVar1)
					{
						bVar1 = !((fVar0 < 28f && Local_73.f_186 < -8.5f) && Local_73.f_186 > -12f);
					}
					if (bVar1)
					{
						bVar1 = !((fVar0 < 28f && Local_73.f_186 < -8.5f) && Local_73.f_186 > -12f);
					}
					if (bVar1)
					{
						if (fVar0 < func_63(10.6f, 15.6f, 13.23f, 20f, -Local_73.f_186) && Local_73.f_186 < -13.23f)
						{
							bVar1 = false;
						}
						else if ((fVar0 > 108f && Local_73.f_186 >= -func_63(3.8f, 38f, 108f, 180f, fVar0)) && Local_73.f_186 < -func_63(1.3f, 7f, 125f, 180f, fVar0))
						{
							bVar1 = false;
						}
					}
					break;
				case 3:
					if (VEHICLE::_GET_VEHICLE_FLIGHT_NOZZLE_POSITION(bLocal_339) >= 0.4f)
					{
						bVar1 = !((fVar0 > 141.3f && fVar0 < 147.7f) && Local_73.f_186 > -3.7f);
					}
					if (bVar1)
					{
						bVar1 = !(Local_73.f_186 > -18f && fVar0 > func_63(148f, 170f, -4.5f, 17.5f, -Local_73.f_186));
					}
					if (bVar1)
					{
						bVar1 = !((fVar0 > 59.4f && fVar0 < 106f) && Local_73.f_186 > func_63(5.5f, 11.8f, -106f, -59.4f, -fVar0));
					}
					break;
			}
			break;
	}
	return bVar1;
}

float func_63(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	fParam4 = ((fParam4 - fParam2) / (fParam3 - fParam2));
	return func_76(fParam0, fParam1, fParam4);
}

bool func_64(bool bParam0, int iParam1)
{
	switch (ENTITY::GET_ENTITY_MODEL(bParam0))
	{
		case joaat("BUZZARD"):
			return true;
		case joaat("SAVAGE"):
			return true;
	}
	if (iParam1 != -1)
	{
		if (func_191(bParam0))
		{
		}
	}
	return false;
}

bool func_65(int iParam0, int iParam1)
{
	int iVar0;

	if (func_67() != 0)
	{
		return false;
	}
	if (!func_66(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (Global_1590535[iVar0 /*876*/] == iParam1)
	{
		return true;
	}
	return false;
}

bool func_66(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2439138.f_1, iParam0);
	}
	return true;
}

int func_67()
{
	return Global_30768;
}

int func_68(bool bParam0)
{
	int iVar0;

	iVar0 = ENTITY::GET_ENTITY_MODEL(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(bParam0));
	if (func_141(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID()))
	{
		return joaat("VEHICLE_WEAPON_AVENGER_CANNON");
	}
	switch (iVar0)
	{
		case joaat("SAVAGE"):
		case joaat("BUZZARD"):
			return joaat("WEAPON_PASSENGER_ROCKET");
		case joaat("AVENGER"):
			return joaat("VEHICLE_WEAPON_MOBILEOPS_CANNON");
	}
	if (func_124(3))
	{
		return joaat("VEHICLE_WEAPON_MOBILEOPS_CANNON");
	}
	return joaat("VEHICLE_WEAPON_MOBILEOPS_CANNON");
}

bool func_69()
{
	return Global_1312418;
}

void func_70()
{
	bool bVar0;

	func_145(0);
	func_71();
	func_146();
	Global_1319109 = 0;
	func_71();
	func_135(&Local_73, bVar0, 0, bLocal_339, 1);
	Global_2547057 = 0;
	Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_732 = 0;
	if (ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("VOLATOL"))
	{
		GRAPHICS::RESET_PARTICLE_FX_OVERRIDE("muz_xm_volatol_twinmg");
	}
	if ((Global_1319110 != -1 || func_191(bLocal_339)) || Global_1319116 != -1)
	{
		if (!func_191(bLocal_339) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_339))
		{
			VEHICLE::_0x78CEEE41F49F421F(bLocal_339, 1);
		}
	}
	if (Global_2461147)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!STREAMING::IS_ENTITY_FOCUS(PLAYER::PLAYER_PED_ID()))
			{
				STREAMING::CLEAR_FOCUS();
			}
		}
	}
	AUDIO::STOP_AUDIO_SCENE("CAR_2_HELI_FILTERING");
	if (iLocal_338 != 99 && iLocal_338 > 0)
	{
		AUDIO::STOP_AUDIO_SCENE("MP_HELI_CAM_FILTERING");
		iLocal_338 = 0;
	}
}

void func_71()
{
	if (func_41("HUNTGUN_2"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_41("HUNTGUN_2b"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_41("HUNTGUN_2c"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_41("HUNTGUN_4"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_41("HUNTGUN_4b"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_41("HUNTGUN_4c"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_41("HUNTGUN_5"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_41("HUNTGUN_6"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_41("AKULAGUN_P1"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_41("AKULAGUN_P2"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (MISC::IS_PC_VERSION())
	{
		if (func_41("HUNTGUN_5_KM"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (func_41("HUNTGUN_6_KM"))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if ((((func_41("BOMBGUN_T_2b") || func_41("BOMBGUN_T_2c")) || func_41("BOMBGUN_T_2d")) || func_41("VOLGUN_T_2b")) || func_41("VOLGUN_T_2c"))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_72()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;

	if (!func_112())
	{
		return;
	}
	if (!func_122(&uLocal_358))
	{
		func_144(&uLocal_358, 0, 0);
	}
	if (!func_121(&uLocal_358, 1000, 0))
	{
		return;
	}
	func_147(&uLocal_358);
	func_144(&uLocal_358, 0, 0);
	iVar0 = func_74();
	if (iVar0 < 0 || iVar0 > 3)
	{
		return;
	}
	if (!func_7(Local_73.f_45))
	{
		if (!MISC::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_382, iVar0))
		{
			MISC::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_382), iVar0);
		}
		if (Local_73.f_45 > 9999f)
		{
			Local_73.f_45 = 9999f;
		}
		if (Local_73.f_45.f_1 > 9999f)
		{
			Local_73.f_45.f_1 = 9999f;
		}
		if (Local_73.f_45.f_2 > 9999f)
		{
			Local_73.f_45.f_2 = 9999f;
		}
		if (!func_141(PLAYER::PLAYER_ID()) && !func_140(PLAYER::PLAYER_ID()))
		{
			if (!func_73(Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_383[iVar0 /*3*/], Local_73.f_45, 1056964608 /* Float: 0.5f */, 0))
			{
				Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_383[iVar0 /*3*/] = { Local_73.f_45 };
			}
		}
		else
		{
			vVar2 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
			vVar5 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
			vVar8 = { (-SYSTEM::SIN(vVar5.z) * SYSTEM::COS(vVar5.x)), (SYSTEM::COS(vVar5.z) * SYSTEM::COS(vVar5.x)), SYSTEM::SIN(vVar5.x) };
			vVar11 = { 10f, 10f, 10f };
			vVar14 = { vVar2 + vVar8 * vVar11 };
			Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_383[iVar0 /*3*/] = { vVar14 };
			if (!func_73(Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_383[iVar0 /*3*/], vVar14, 1056964608 /* Float: 0.5f */, 0))
			{
				Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_383[iVar0 /*3*/] = { vVar14 };
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iVar0 != iVar1)
		{
			if (MISC::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_382, iVar1))
			{
				MISC::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_382), iVar1);
			}
		}
		iVar1++;
	}
}

bool func_73(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
		{
			if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
			{
				if (MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
				{
					return true;
				}
			}
		}
	}
	else if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			return true;
		}
	}
	return false;
}

int func_74()
{
	if (func_193(PLAYER::PLAYER_ID()) || func_142(PLAYER::PLAYER_ID()))
	{
		switch (Global_1319110)
		{
			case 1:
				return -1;
				return 0;
			case 2:
				return 2;
			case 3:
				return 1;
			}
			else if (func_141(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID()))
			{
				switch (Global_1319116)
				{
					case 1:
						return -1;
						return 0;
					case 2:
						return 1;
					case 3:
						return 2;
						return -1;
						default:
							break;
				}
			}
		}

bool func_75(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_37(Global_2425662[iParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return false;
}

float func_76(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_77(float fParam0, float fParam1, float fParam2)
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

int func_78()
{
	if (bLocal_301)
	{
		return 0;
	}
	else if (bLocal_302)
	{
		return 1;
	}
	else if (bLocal_303)
	{
		return 2;
	}
	return -1;
}

int func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam0)
	{
		case 1:
			return 4;
		case 0:
			return 4;
		case 6:
			return 59;
		case 18:
			return 2;
		case 13:
			return 5;
		case 116:
			return 38;
		case 28:
			return 6;
		case 29:
			return 7;
		case 30:
			return 8;
		case 31:
			return 9;
		case 32:
			return 10;
		case 33:
			return 11;
		case 34:
			return 12;
		case 35:
			return 13;
		case 36:
			return 14;
		case 37:
			return 15;
		case 38:
			return 16;
		case 39:
			return 17;
		case 40:
			return 18;
		case 41:
			return 19;
		case 42:
			return 20;
		case 43:
			return 21;
		case 44:
			return 22;
		case 45:
			return 23;
		case 46:
			return 24;
		case 47:
			return 25;
		case 48:
			return 26;
		case 49:
			return 27;
		case 50:
			return 28;
		case 51:
			return 29;
		case 52:
			return 30;
		case 53:
			return 31;
		case 54:
			return 32;
		case 55:
			return 33;
		case 56:
			return 34;
		case 57:
			return 35;
		case 58:
			return 36;
		case 59:
			return 37;
		case 9:
			return 57;
		case 10:
			return 53;
		case 118:
			return 57;
		case 14:
			return 56;
		case 3:
			return 55;
		case 21:
			return 50;
		case 15:
			return 51;
		case 20:
			return 52;
		case 11:
			return 54;
		case 23:
			return 58;
		case 12:
			return 60;
		case 24:
			return 61;
		case 4:
			return 62;
		default:
			break;
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_80(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_81(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_81(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_82(vector3 vParam0)
{
	vector3 vVar0;

	vVar0.x = SYSTEM::COS(vParam0.x);
	vVar0.f_1 = SYSTEM::COS(vParam0.z);
	vVar0.f_2 = SYSTEM::SIN(vParam0.x);
	vVar0.f_1 = (vVar0.y * vVar0.x);
	vVar0.x = (vVar0.x * -SYSTEM::SIN(vParam0.z));
	return vVar0;
}

void func_83(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_32))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		uParam0->f_9 = func_137(uParam0->f_8);
	}
	if (*uParam0 == 0)
	{
		if (func_138(uParam0, iParam1))
		{
			*uParam0 = 1;
		}
	}
	else
	{
		if (iParam1 == 0)
		{
			func_105(uParam0);
			func_99(uParam0, fParam2, fParam3, fParam4, fParam5, fParam6);
			func_98(uParam0);
		}
		func_97(uParam0);
		func_85(uParam0, iParam1, fParam4, fParam5);
		func_84();
	}
}

void func_84()
{
	Global_96028 = 1;
}

void func_85(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	var uVar19;
	int iVar20;
	float fVar21;
	vector3 vVar22;
	int iVar25;
	vector3 vVar26;
	int iVar29;
	vector3 vVar30;
	vector3 vVar33;
	vector3 vVar36;
	float fVar39;
	vector3 vVar40;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	float fVar47;

	if (uParam0->f_50 == 1)
	{
		fVar0 = ((uParam0->f_42 - uParam0->f_31) / (uParam0->f_30 - uParam0->f_31));
		if (fVar0 < 0f)
		{
			fVar0 = 0f;
		}
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
		fVar1 = (uParam0->f_26 + ((uParam0->f_28 - uParam0->f_26) * fVar0));
		fVar2 = (uParam0->f_27 + ((uParam0->f_29 - uParam0->f_27) * fVar0));
		STREAMING::_0xBED8CA5FF5E04113(1.7f, 4.7f, fVar1, fVar2);
		fVar3 = ENTITY::GET_ENTITY_SPEED(uParam0->f_8);
		if (fVar3 > 30f)
		{
			STREAMING::_0x472397322E92A856();
		}
		STREAMING::_0x03F1A106BDA7DD3E();
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud") || (iParam1 == 0 && !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_71)))
		{
			uParam0->f_86 = 0;
		}
		else
		{
			uParam0->f_80 = (1f - (2f * uParam0->f_54));
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			if (iParam1 == 0)
			{
				if (Global_1319110 != -1 && uParam0->f_213)
				{
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(0);
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_71, 255, 255, 255, 0, 1);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
					if (!uParam0->f_86)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_8, false))
						{
							if (ENTITY::GET_ENTITY_MODEL(uParam0->f_8) == joaat("POLMAV") && VEHICLE::GET_VEHICLE_LIVERY(uParam0->f_8) == 0)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_71, "SET_CAM_LOGO");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_71, "SET_CAM_LOGO");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						}
						else
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_71, "SET_CAM_LOGO");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
				}
			}
			uParam0->f_86 = 1;
		}
		if (uParam0->f_86 == 1)
		{
			if (iParam1 == 0)
			{
			}
			fVar18 = uParam0->f_157;
			iVar20 = -1;
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
			{
				vVar22 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_9, true) };
			}
			if (uParam0->f_87 == 0)
			{
				iVar4 = 0;
				uParam0->f_53 = 0;
				iVar4 = 0;
				while (iVar4 < uParam0->f_175)
				{
					if (MISC::IS_BIT_SET(uParam0->f_175[iVar4 /*10*/].f_2, 9))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_175[iVar4 /*10*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_175[iVar4 /*10*/], false))
							{
								if (MISC::IS_BIT_SET(uParam0->f_175[iVar4 /*10*/].f_2, 0))
								{
									switch (uParam0->f_175[iVar4 /*10*/].f_4)
									{
										case 2:
											func_95(uParam0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_175[iVar4 /*10*/], 0), uParam0->f_65, uParam0->f_65.f_1, uParam0->f_65.f_2);
											break;
										case 3:
											func_95(uParam0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_175[iVar4 /*10*/], 0), uParam0->f_68, uParam0->f_68.f_1, uParam0->f_68.f_2);
											break;
										case 0:
											func_95(uParam0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_175[iVar4 /*10*/], 0), uParam0->f_62, uParam0->f_62.f_1, uParam0->f_62.f_2);
											break;
										case 1:
											func_95(uParam0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_175[iVar4 /*10*/], 0), uParam0->f_68, uParam0->f_68.f_1, uParam0->f_68.f_2);
											break;
									}
								}
								else if (CLOCK::GET_CLOCK_HOURS() < 19 && CLOCK::GET_CLOCK_HOURS() > 7)
								{
									func_95(uParam0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_175[iVar4 /*10*/], 0), uParam0->f_62, uParam0->f_62.f_1, uParam0->f_62.f_2);
								}
								else
								{
									func_95(uParam0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_175[iVar4 /*10*/], 0), uParam0->f_62, uParam0->f_62.f_1, uParam0->f_62.f_2);
								}
							}
						}
					}
					iVar4++;
				}
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
				{
					MISC::GET_GROUND_Z_FOR_3D_COORD(vVar22, &uVar19, false, false);
					if (uParam0->f_52 == 0 && uParam0->f_48 > 0)
					{
						iVar4 = 0;
						while (iVar4 <= (uParam0->f_48 - 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_175[iVar4 /*10*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_175[iVar4 /*10*/], false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
								{
									vVar12 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_175[iVar4 /*10*/], 0) };
									if (ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_175[iVar4 /*10*/]))
									{
										fVar8 = 0f;
										fVar9 = 0f;
										fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar12, ENTITY::GET_ENTITY_COORDS(uParam0->f_9, true), true);
										fVar21 = func_94(uParam0, uParam0->f_175[iVar4 /*10*/], uParam0->f_9);
										fVar17 = (uParam0->f_74 * fVar21);
										if (MISC::IS_BIT_SET(uParam0->f_175[iVar4 /*10*/].f_2, 2) || iVar4 == uParam0->f_92)
										{
											if (MISC::IS_BIT_SET(uParam0->f_175[iVar4 /*10*/].f_2, 0))
											{
												if ((SYSTEM::TIMERA() - uParam0->f_175[iVar4 /*10*/].f_1) < 500)
												{
													func_93(uParam0, vVar12, fVar21, uParam0->f_175[iVar4 /*10*/].f_4, -1, -1, -1);
													uParam0->f_175[iVar4 /*10*/].f_6 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_175[iVar4 /*10*/], true) };
												}
												else
												{
													func_92(uParam0, uParam0->f_175[iVar4 /*10*/].f_4, &iVar5, &iVar6, &iVar7);
													GRAPHICS::SET_DRAW_ORIGIN(uParam0->f_175[iVar4 /*10*/].f_6, 0);
													GRAPHICS::DRAW_SPRITE("helicopterhud", "TargetLost", fVar8, fVar9, fVar17, (fVar17 * 2f), 0f, iVar5, iVar6, iVar7, 200, true);
													GRAPHICS::CLEAR_DRAW_ORIGIN();
													func_91(iVar5, iVar6, iVar7, 0.5f, 1);
													uParam0->f_53 = 1;
												}
											}
											else
											{
												func_92(uParam0, 3, &iVar5, &iVar6, &iVar7);
												if (iVar4 == uParam0->f_92)
												{
													func_93(uParam0, vVar12, fVar21, uParam0->f_175[iVar4 /*10*/].f_4, uParam0->f_62, uParam0->f_62.f_1, uParam0->f_62.f_2);
												}
												else
												{
													func_93(uParam0, vVar12, fVar21, uParam0->f_175[iVar4 /*10*/].f_4, uParam0->f_62, uParam0->f_62.f_1, uParam0->f_62.f_2);
												}
											}
											if (MISC::IS_BIT_SET(uParam0->f_175[iVar4 /*10*/].f_2, 7))
											{
												func_93(uParam0, vVar12, fVar21, uParam0->f_175[iVar4 /*10*/].f_4, 227, 24, 234);
											}
										}
										iVar25 = 0;
										vVar26 = { 0f, 0f, 0f };
										iVar29 = 0;
										switch (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_175[iVar4 /*10*/].f_9, &iVar25, &vVar26, &vVar26, &iVar29))
										{
											case 0:
												vVar30 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_8, true) };
												vVar33 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_175[iVar4 /*10*/], true) + Vector(0.5f, 0f, 0f) };
												uParam0->f_175[iVar4 /*10*/].f_9 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar30, vVar33, 1, 0, 7);
												break;
											case 2:
												if (iVar25 == 0)
												{
													uParam0->f_175[iVar4 /*10*/].f_1 = SYSTEM::TIMERA();
												}
												break;
										}
										if ((SYSTEM::TIMERA() - uParam0->f_175[iVar4 /*10*/].f_1) < 1500 || MISC::IS_BIT_SET(uParam0->f_175[iVar4 /*10*/].f_2, 0))
										{
											if ((uParam0->f_78 / (uParam0->f_40 * fVar16)) > 1f)
											{
												GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar12, &fVar8, &fVar9);
												fVar15 = SYSTEM::SQRT((((fVar8 - 0.5f) * (fVar8 - 0.5f)) + ((fVar9 - 0.5f) * (fVar9 - 0.5f))));
												if (fVar15 < fVar18)
												{
													fVar10 = fVar8;
													fVar11 = fVar9;
													fVar10 = fVar10;
													fVar11 = fVar11;
													fVar18 = fVar15;
													iVar20 = iVar4;
												}
											}
										}
										GRAPHICS::CLEAR_DRAW_ORIGIN();
									}
								}
							}
							iVar4++;
						}
					}
					uParam0->f_76++;
					if (uParam0->f_76 > (uParam0->f_48 - 1))
					{
						uParam0->f_76 = 0;
					}
				}
				if (uParam0->f_92 != iVar20)
				{
					if (uParam0->f_204 != -1)
					{
						if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_204))
						{
							AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_204, "COP_HELI_CAM_BLEEP", 0, true);
						}
					}
				}
				uParam0->f_92 = iVar20;
				uParam0->f_49 = 0;
				if (uParam0->f_92 != -1 && uParam0->f_2 == 1)
				{
					if (!MISC::IS_BIT_SET(uParam0->f_175[uParam0->f_92 /*10*/].f_2, 0))
					{
						if (PAD::IS_CONTROL_PRESSED(2, 229))
						{
							if ((uParam0->f_77 / (uParam0->f_40 * fVar16)) > 0.5f)
							{
								if (uParam0->f_201 == 1)
								{
									if (uParam0->f_209 != -1)
									{
										if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_209))
										{
											AUDIO::STOP_SOUND(uParam0->f_209);
										}
									}
									uParam0->f_201 = 0;
								}
								uParam0->f_49 = 1;
								if (uParam0->f_175[uParam0->f_92 /*10*/].f_3 < 1f)
								{
									if (uParam0->f_206 != -1)
									{
										if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_206))
										{
											AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_206, "COP_HELI_CAM_SCAN_PED_LOOP", 0, true);
										}
									}
									fVar18 = MISC::ABSF((1f - fVar18));
									uParam0->f_175[uParam0->f_92 /*10*/].f_3 = (uParam0->f_175[uParam0->f_92 /*10*/].f_3 + ((fVar18 * SYSTEM::TIMESTEP()) / 3.5f));
									fVar21 = func_94(uParam0, uParam0->f_175[uParam0->f_92 /*10*/], uParam0->f_9);
									fVar17 = (uParam0->f_74 * fVar21);
									func_91(255, 0, 0, 0.5f, 1);
									if ((SYSTEM::TIMERA() % 600) < 300)
									{
										func_90(0.5f, 0.68f, "scan", 1);
									}
									fVar21 = func_94(uParam0, uParam0->f_175[uParam0->f_92 /*10*/], uParam0->f_9);
									fVar17 = 0.03f;
									GRAPHICS::SET_DRAW_ORIGIN(ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_175[uParam0->f_92 /*10*/], 0), 0);
									func_88(uParam0, uParam0->f_175[uParam0->f_92 /*10*/], uParam0->f_175[uParam0->f_92 /*10*/].f_3, fVar21);
									GRAPHICS::CLEAR_DRAW_ORIGIN();
								}
								else
								{
									if (MISC::IS_BIT_SET(uParam0->f_175[uParam0->f_92 /*10*/].f_2, 3))
									{
										MISC::SET_BIT(&(uParam0->f_175[uParam0->f_92 /*10*/].f_2), 2);
									}
									MISC::SET_BIT(&(uParam0->f_175[uParam0->f_92 /*10*/].f_2), 0);
									uParam0->f_55 = uParam0->f_175[uParam0->f_92 /*10*/];
									if (uParam0->f_206 != -1)
									{
										if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_206))
										{
											AUDIO::STOP_SOUND(uParam0->f_206);
										}
									}
									if (uParam0->f_175[uParam0->f_92 /*10*/].f_4 == 2)
									{
										if (uParam0->f_207 != -1)
										{
											if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_207))
											{
												AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_207, "COP_HELI_CAM_SCAN_PED_SUCCESS", 0, true);
											}
										}
									}
									else if (uParam0->f_208 != -1)
									{
										if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_208))
										{
											AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_208, "COP_HELI_CAM_SCAN_PED_FAILURE", 0, true);
										}
									}
								}
							}
							else
							{
								fVar21 = func_94(uParam0, uParam0->f_175[uParam0->f_92 /*10*/], uParam0->f_9);
								fVar17 = (uParam0->f_74 * fVar21);
								func_91(255, 0, 0, 0.5f, 1);
								func_90(0.5f, 0.68f, "HUD_RNG", 0);
								if (!uParam0->f_201)
								{
									if (uParam0->f_209 != -1)
									{
										if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_209))
										{
											AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_209, "COP_HELI_CAM_BLEEP_TOO_FAR", 0, true);
											uParam0->f_201 = 1;
										}
									}
								}
							}
						}
						else if (uParam0->f_201 == 1)
						{
							if (uParam0->f_209 != -1)
							{
								if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_209))
								{
									AUDIO::STOP_SOUND(uParam0->f_209);
								}
							}
							uParam0->f_201 = 0;
						}
					}
					else if (PAD::IS_CONTROL_PRESSED(2, 229) || (MISC::GET_GAME_TIMER() < uParam0->f_94 && uParam0->f_93 == uParam0->f_92))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_175[uParam0->f_92 /*10*/], false))
						{
							if ((SYSTEM::TIMERA() - uParam0->f_175[uParam0->f_92 /*10*/].f_1) < 500)
							{
								if (!uParam0->f_53)
								{
									uParam0->f_93 = uParam0->f_92;
									uParam0->f_94 = MISC::GET_GAME_TIMER() + 3000;
									GRAPHICS::SET_DRAW_ORIGIN(ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_175[uParam0->f_92 /*10*/], 0), 0);
									fVar21 = func_94(uParam0, uParam0->f_175[uParam0->f_92 /*10*/], uParam0->f_9);
									fVar8 = 0f;
									fVar9 = 0f;
									func_92(uParam0, uParam0->f_175[uParam0->f_92 /*10*/].f_4, &iVar5, &iVar6, &iVar7);
									GRAPHICS::CLEAR_DRAW_ORIGIN();
									if (uParam0->f_175[uParam0->f_92 /*10*/].f_4 == 2)
									{
										func_87(uParam0, uParam0->f_92, ((fVar8 - (fVar17 / 2f)) + (fVar17 * 0.04f)), ((fVar9 + fVar17) + 0.005f), iVar5, iVar6, iVar7, fVar21, 1);
									}
									else
									{
										func_87(uParam0, uParam0->f_92, ((fVar8 - (fVar17 / 2f)) + (fVar17 * 0.04f)), ((fVar9 + fVar17) + 0.005f), iVar5, iVar6, iVar7, fVar21, 0);
									}
								}
							}
						}
					}
				}
				if (uParam0->f_49 == 0)
				{
					if (uParam0->f_206 != -1)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_206))
						{
							AUDIO::STOP_SOUND(uParam0->f_206);
						}
					}
				}
			}
			if (uParam0->f_162 > 0)
			{
				iVar4 = 0;
				while (iVar4 <= 0)
				{
					if (uParam0->f_163[iVar4 /*11*/].f_5 != -1)
					{
						if (GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(uParam0->f_163[iVar4 /*11*/], &fVar8, &fVar9))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_8, false))
							{
								vVar36 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_8, true) };
							}
							else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
							{
								vVar36 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_9, true) };
							}
							GRAPHICS::SET_DRAW_ORIGIN(uParam0->f_163[iVar4 /*11*/], 0);
							fVar8 = 0f;
							fVar9 = 0f;
							if (uParam0->f_163[iVar4 /*11*/].f_6 == 1)
							{
								fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_163[iVar4 /*11*/], vVar36, true);
								fVar21 = (uParam0->f_79 / (uParam0->f_40 * fVar16));
								if (fVar21 < 0.4f)
								{
									fVar21 = 0.4f;
								}
								if (fVar21 > 2f)
								{
									fVar21 = 2f;
								}
								func_93(uParam0, uParam0->f_163[iVar4 /*11*/], fVar21, 0, -1, -1, -1);
								GRAPHICS::SET_DRAW_ORIGIN(uParam0->f_163[iVar4 /*11*/], 0);
							}
							else
							{
								GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_dest", fVar8, fVar9, 0.042f, 0.042f, 0f, uParam0->f_163[iVar4 /*11*/].f_8, uParam0->f_163[iVar4 /*11*/].f_9, uParam0->f_163[iVar4 /*11*/].f_10, 255, true);
							}
							GRAPHICS::CLEAR_DRAW_ORIGIN();
						}
						else if (uParam0->f_163[iVar4 /*11*/].f_6 == 1)
						{
							func_95(uParam0, uParam0->f_163[iVar4 /*11*/], uParam0->f_163[iVar4 /*11*/].f_8, uParam0->f_163[iVar4 /*11*/].f_9, uParam0->f_163[iVar4 /*11*/].f_10);
						}
						else
						{
							func_95(uParam0, uParam0->f_163[iVar4 /*11*/], uParam0->f_163[iVar4 /*11*/].f_8, uParam0->f_163[iVar4 /*11*/].f_9, uParam0->f_163[iVar4 /*11*/].f_10);
						}
					}
					iVar4++;
				}
			}
			if (iParam1 == 0)
			{
				fVar39 = uParam0->f_42.f_2;
				if (func_191(uParam0->f_8) || func_86())
				{
					fVar39 = uParam0->f_186.f_2;
				}
				vVar40 = { 0f, 0f, 0f };
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
					{
						vVar40 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_9, true) };
						fVar44 = ENTITY::GET_ENTITY_HEADING(uParam0->f_9);
					}
				}
				if (Global_1319110 != -1)
				{
					if (Global_1319110 == 2 || Global_1319110 == 3)
					{
						fVar44 = (fVar44 - 174.4552f);
					}
				}
				while (fVar39 < 0f)
				{
					fVar39 = (fVar39 + 360f);
				}
				while (fVar39 > 360f)
				{
					fVar39 = (fVar39 - 360f);
				}
				while (fVar44 < 0f)
				{
					fVar44 = (fVar44 + 360f);
				}
				while (fVar44 > 360f)
				{
					fVar44 = (fVar44 - 360f);
				}
				fVar47 = fVar39;
				if (Global_1319110 != -1)
				{
					fVar45 = (fVar44 - MISC::ABSF(fParam3));
					fVar46 = (fVar44 + MISC::ABSF(fParam2));
				}
				else if (func_191(uParam0->f_8) || func_86())
				{
					fVar45 = -(uParam0->f_25 * 0.5f);
					fVar46 = (uParam0->f_25 * 0.5f);
				}
				else
				{
					fVar45 = (fVar44 - uParam0->f_25);
					fVar46 = (fVar44 + uParam0->f_25);
				}
				if (fVar47 < fVar45 && (fVar47 + 360f) <= fVar46)
				{
					fVar47 = (fVar47 + 360f);
				}
				if (fVar47 > fVar46 && (fVar47 - 360f) >= fVar45)
				{
					fVar47 = (fVar47 - 360f);
				}
				fVar43 = ((fVar47 - fVar45) / (fVar46 - fVar45));
				if (fVar43 == 2f)
				{
					fVar43 = 0f;
				}
				else if (fVar43 == -1f)
				{
					fVar43 = 1f;
				}
				else if (fVar43 < 0f && fVar43 >= -0.5f)
				{
					fVar43 = 0f;
				}
				else if (fVar43 < 0f && fVar43 > -1f)
				{
					fVar43 = 1f;
				}
				else if (fVar43 > 1.5f && fVar43 < 2f)
				{
					fVar43 = 0f;
				}
				else if (fVar43 > 2f || fVar43 < -1f)
				{
					fVar43 = 0.5f;
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_71, "SET_ALT_FOV_HEADING");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(vVar40.z);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar43);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(((uParam0->f_40 - uParam0->f_39) / (uParam0->f_38 - uParam0->f_39)));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar39);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
				if (!uParam0->f_51)
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				}
			}
		}
	}
}

bool func_86()
{
	if (func_141(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

int func_87(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8)
{
	char cVar0[16];
	int iVar4;
	int iVar5;

	func_91(iParam4, iParam5, iParam6, 0.43f, bParam8);
	if (fParam7 < 0.7f)
	{
		fParam7 = 0.7f;
	}
	if (fParam7 > 1.5f)
	{
		fParam7 = 1.5f;
	}
	if (MISC::IS_BIT_SET(uParam0->f_175[iParam1 /*10*/].f_2, 8))
	{
	}
	iVar4 = 24;
	while (iVar4 <= 31)
	{
		if (MISC::IS_BIT_SET(uParam0->f_175[iParam1 /*10*/].f_5, iVar4))
		{
			StringCopy(&cVar0, "crimes_", 16);
			StringIntConCat(&cVar0, (iVar4 - 23), 16);
			func_91(iParam4, iParam5, iParam6, 0.43f, bParam8);
			func_90(0.5f, (0.68f + (0.037f * IntToFloat(iVar5 + 1))), &cVar0, 1);
			iVar5++;
		}
		iVar4++;
	}
	if (iVar5 == 0)
	{
		func_91(iParam4, iParam5, iParam6, 0.43f, bParam8);
		func_90(fParam2, (fParam3 + (uParam0->f_196 * fParam7)), "unknown", 1);
	}
	if (uParam0->f_175[iParam1 /*10*/].f_4 == 0)
	{
		func_91(iParam4, iParam5, iParam6, 0.43f, bParam8);
		func_90(fParam2, (fParam3 + (uParam0->f_196 * fParam7)), "HUD_ID2", 1);
	}
	return 1;
}

void func_88(var uParam0, int iParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	float fVar15;
	float fVar16;

	vVar12 = { 0f, 0f, 0f };
	if (fParam2 < 0.5f)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			vVar0 = { PED::GET_PED_BONE_COORDS(iParam1, 14201, vVar12) };
			vVar3 = { PED::GET_PED_BONE_COORDS(iParam1, 63931, vVar12) };
			GRAPHICS::SET_DRAW_ORIGIN(vVar0, 0);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar0, &fVar8, &fVar9);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0f;
		fVar16 = 0.3f;
		func_89(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216 /* Float: 1f */);
		if (!PED::IS_PED_INJURED(iParam1))
		{
			vVar0 = { PED::GET_PED_BONE_COORDS(iParam1, 52301, vVar12) };
			vVar3 = { PED::GET_PED_BONE_COORDS(iParam1, 36864, vVar12) };
			GRAPHICS::SET_DRAW_ORIGIN(vVar0, 0);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar0, &fVar8, &fVar9);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0f;
		fVar16 = 0.3f;
		func_89(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216 /* Float: 1f */);
	}
	if (fParam2 > 0.15f && fParam2 < 0.7f)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			vVar0 = { PED::GET_PED_BONE_COORDS(iParam1, 36864, vVar12) };
			vVar3 = { PED::GET_PED_BONE_COORDS(iParam1, 51826, vVar12) };
			GRAPHICS::SET_DRAW_ORIGIN(vVar0, 0);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar0, &fVar8, &fVar9);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0.15f;
		fVar16 = 0.3f;
		func_89(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216 /* Float: 1f */);
		if (!PED::IS_PED_INJURED(iParam1))
		{
			vVar0 = { PED::GET_PED_BONE_COORDS(iParam1, 63931, vVar12) };
			vVar3 = { PED::GET_PED_BONE_COORDS(iParam1, 58271, vVar12) };
			GRAPHICS::SET_DRAW_ORIGIN(vVar0, 0);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar0, &fVar8, &fVar9);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0.15f;
		fVar16 = 0.3f;
		func_89(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216 /* Float: 1f */);
	}
	if (fParam2 > 0.3f && fParam2 < 1f)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			vVar0 = { PED::GET_PED_BONE_COORDS(iParam1, 11816, vVar12) };
			vVar3 = { PED::GET_PED_BONE_COORDS(iParam1, 39317, vVar12) };
			GRAPHICS::SET_DRAW_ORIGIN(vVar0, 0);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar0, &fVar8, &fVar9);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0.3f;
		fVar16 = 0.5f;
		func_89(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 2f);
	}
	if (fParam2 > 0.6f && fParam2 < 1f)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			vVar0 = { PED::GET_PED_BONE_COORDS(iParam1, 31086, vVar12) };
			vVar3 = { vVar0 + vVar0 - PED::GET_PED_BONE_COORDS(iParam1, 39317, vVar12) * Vector(3f, 3f, 3f) };
			GRAPHICS::SET_DRAW_ORIGIN(vVar0, 0);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar0, &fVar8, &fVar9);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0.6f;
		fVar16 = 0.3f;
		func_89(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1.3f);
	}
	if (fParam2 > 0.6f && fParam2 < 1f)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			vVar0 = { PED::GET_PED_BONE_COORDS(iParam1, 40269, vVar12) };
			vVar3 = { PED::GET_PED_BONE_COORDS(iParam1, 28252, vVar12) };
			GRAPHICS::SET_DRAW_ORIGIN(vVar0, 0);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar0, &fVar8, &fVar9);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0.6f;
		fVar16 = 0.3f;
		func_89(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216 /* Float: 1f */);
		if (!PED::IS_PED_INJURED(iParam1))
		{
			vVar0 = { PED::GET_PED_BONE_COORDS(iParam1, 45509, vVar12) };
			vVar3 = { PED::GET_PED_BONE_COORDS(iParam1, 61163, vVar12) };
			GRAPHICS::SET_DRAW_ORIGIN(vVar0, 0);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar0, &fVar8, &fVar9);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0.6f;
		fVar16 = 0.3f;
		func_89(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216 /* Float: 1f */);
	}
	if (fParam2 > 0.75f && fParam2 < 1f)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			vVar0 = { PED::GET_PED_BONE_COORDS(iParam1, 28252, vVar12) };
			vVar3 = { PED::GET_PED_BONE_COORDS(iParam1, 57005, vVar12) };
			GRAPHICS::SET_DRAW_ORIGIN(vVar0, 0);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar0, &fVar8, &fVar9);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0.75f;
		fVar16 = 0.25f;
		func_89(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216 /* Float: 1f */);
		if (!PED::IS_PED_INJURED(iParam1))
		{
			vVar0 = { PED::GET_PED_BONE_COORDS(iParam1, 61163, vVar12) };
			vVar3 = { PED::GET_PED_BONE_COORDS(iParam1, 18905, vVar12) };
			GRAPHICS::SET_DRAW_ORIGIN(vVar0, 0);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar0, &fVar8, &fVar9);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0.75f;
		fVar16 = 0.3f;
		func_89(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216 /* Float: 1f */);
	}
	GRAPHICS::CLEAR_DRAW_ORIGIN();
}

void func_89(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11)
{
	int iVar0;
	float fVar1;
	float fVar2;

	fVar2 = (fParam3 / 10f);
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		fVar1 = (fParam1 - (fParam2 + (IntToFloat(iVar0) * fVar2)));
		if (fVar1 > 0f && fVar1 < 0.3f)
		{
			fVar1 = SYSTEM::SIN((fVar1 * 600f));
			GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_line", (fParam4 * IntToFloat(iVar0)), (fParam5 * IntToFloat(iVar0)), ((fParam6 * fParam11) * 0.01f), ((fParam6 * fParam11) * 0.01f), MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, 1f, (fParam7 - fParam8), (fParam9 - fParam10)), uParam0->f_71, uParam0->f_71.f_1, uParam0->f_71.f_2, SYSTEM::FLOOR((fVar1 * 32f)), true);
		}
		iVar0++;
	}
}

void func_90(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_91(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	HUD::SET_TEXT_SCALE(fParam3, fParam3);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, 150);
	if (bParam4)
	{
		HUD::SET_TEXT_DROPSHADOW(5, 0, 0, 0, 255);
	}
	HUD::SET_TEXT_CENTRE(true);
	HUD::SET_TEXT_FONT(0);
}

int func_92(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0:
			*iParam2 = uParam0->f_62;
			*iParam3 = uParam0->f_62.f_1;
			*iParam4 = uParam0->f_62.f_2;
			return 1;
		case 1:
			*iParam2 = 255;
			*iParam3 = 255;
			*iParam4 = 0;
			return 1;
		case 2:
			*iParam2 = uParam0->f_65;
			*iParam3 = uParam0->f_65.f_1;
			*iParam4 = uParam0->f_65.f_2;
			return 1;
		case 3:
			*iParam2 = uParam0->f_68;
			*iParam3 = uParam0->f_68.f_1;
			*iParam4 = uParam0->f_68.f_2;
			return 1;
	}
	return 0;
}

void func_93(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_92(uParam0, iParam5, &iVar0, &iVar1, &iVar2);
	GRAPHICS::SET_DRAW_ORIGIN(vParam1, 0);
	if (iParam6 != -1)
	{
		iVar0 = iParam6;
		iVar1 = iParam7;
		iVar2 = iParam8;
	}
	fParam4 = (fParam4 * 0.03f);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fParam4 * 0.5f), -fParam4, 0.013f, 0.013f, 0f, iVar0, iVar1, iVar2, 200, true);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fParam4 * 0.5f), -fParam4, 0.013f, 0.013f, 90f, iVar0, iVar1, iVar2, 200, true);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fParam4 * 0.5f), fParam4, 0.013f, 0.013f, 270f, iVar0, iVar1, iVar2, 200, true);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fParam4 * 0.5f), fParam4, 0.013f, 0.013f, 180f, iVar0, iVar1, iVar2, 200, true);
	GRAPHICS::CLEAR_DRAW_ORIGIN();
}

float func_94(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		vVar0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam1, 0) };
		if (!ENTITY::IS_ENTITY_DEAD(iParam2, false))
		{
			fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, ENTITY::GET_ENTITY_COORDS(iParam2, true), true);
			fVar4 = (uParam0->f_79 / (uParam0->f_40 * fVar3));
			if (fVar4 < 0.4f)
			{
				fVar4 = 0.4f;
			}
			if (fVar4 > 2f)
			{
				fVar4 = 2f;
			}
			return fVar4;
		}
	}
	return 0f;
}

void func_95(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;

	if (CAM::DOES_CAM_EXIST(CAM::GET_RENDERING_CAM()))
	{
		if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vParam1, &uVar0, &uVar0))
		{
			vVar1 = { CAM::GET_CAM_COORD(CAM::GET_RENDERING_CAM()) };
			vVar4 = { CAM::GET_CAM_ROT(CAM::GET_RENDERING_CAM(), 2) };
			fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1.x, vVar1.y, 0f, vParam1.x, vParam1.y, 0f, true);
			fVar8 = (vParam1.z - vVar1.z);
			if (fVar7 > 0f)
			{
				fVar9 = MISC::ATAN((fVar8 / fVar7));
			}
			else
			{
				fVar9 = 0f;
			}
			fVar10 = func_96(vVar1, vParam1, 0);
			fVar11 = MISC::ATAN2(((SYSTEM::COS(vVar4.x) * SYSTEM::SIN(fVar9)) - ((SYSTEM::SIN(vVar4.x) * SYSTEM::COS(fVar9)) * SYSTEM::COS(((fVar10 * -1f) - vVar4.z)))), (SYSTEM::SIN(((fVar10 * -1f) - vVar4.z)) * SYSTEM::COS(fVar9)));
			if (uParam0->f_10 > 0f)
			{
			}
			fVar12 = (0.5f - (SYSTEM::COS(fVar11) * 0.29f));
			fVar13 = (0.5f - (SYSTEM::SIN(fVar11) * 0.29f));
			GRAPHICS::DRAW_SPRITE("helicopterhud", "hudArrow", fVar12, fVar13, 0.02f, 0.04f, (fVar11 - 90f), iParam4, iParam5, iParam6, 255, true);
			HUD::SET_TEXT_CENTRE(true);
		}
	}
}

float func_96(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_97(var uParam0)
{
	if (uParam0->f_200 == 0)
	{
		if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\POLICE_CHOPPER_CAM", false, -1))
		{
			uParam0->f_200 = 1;
			uParam0->f_202 = AUDIO::GET_SOUND_ID();
			uParam0->f_203 = AUDIO::GET_SOUND_ID();
			uParam0->f_205 = AUDIO::GET_SOUND_ID();
			uParam0->f_204 = AUDIO::GET_SOUND_ID();
			uParam0->f_206 = AUDIO::GET_SOUND_ID();
			uParam0->f_207 = AUDIO::GET_SOUND_ID();
			uParam0->f_208 = AUDIO::GET_SOUND_ID();
			uParam0->f_209 = AUDIO::GET_SOUND_ID();
		}
	}
}

void func_98(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_163)
	{
		if (uParam0->f_163[iVar0 /*11*/].f_5 != -1)
		{
			if (uParam0->f_163[iVar0 /*11*/].f_3 != 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_163[iVar0 /*11*/].f_3, false))
				{
					uParam0->f_163[iVar0 /*11*/] = { ENTITY::GET_ENTITY_COORDS(uParam0->f_163[iVar0 /*11*/].f_3, true) };
				}
			}
			if (uParam0->f_163[iVar0 /*11*/].f_4 != 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_163[iVar0 /*11*/].f_4, false))
				{
					uParam0->f_163[iVar0 /*11*/] = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_163[iVar0 /*11*/].f_4, 0) };
				}
			}
		}
		iVar0++;
	}
}

void func_99(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	vector3 vVar25;
	float fVar28;
	int iVar29;
	vector3 vVar30;
	float fVar33;
	vector3 vVar34;
	bool bVar37;
	float fVar38;
	float fVar39;
	int iVar40;
	float fVar41;
	float fVar42;
	vector3 vVar43;
	vector3 vVar46;
	float fVar49;
	int iVar50;
	float fVar51;
	float fVar52;
	int iVar53;
	vector3 vVar54;
	float fVar57;
	vector3 vVar58;
	vector3 vVar61;
	vector3 vVar64;
	int iVar67;
	int iVar68;
	float fVar69;
	vector3 vVar70;
	float fVar73;

	fVar5 = fParam2;
	if (uParam0->f_214)
	{
		fVar5 = -25f;
	}
	if (uParam0->f_33 == 1)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_32))
		{
			if (!CAM::IS_CAM_ACTIVE(uParam0->f_32))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_32, true);
				if (Global_1319110 != -1 || Global_1319116 != -1)
				{
					uParam0->f_213 = 1;
				}
				else
				{
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
			}
		}
		if (uParam0->f_35)
		{
			if (CAM::DOES_CAM_EXIST(uParam0->f_32))
			{
				vVar6 = { CAM::GET_CAM_COORD(uParam0->f_32) };
				Global_1573326 = 1;
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar6.x, vVar6.y, (vVar6.z + 1f), &fVar9, false, false) || ENTITY::IS_ENTITY_IN_WATER(uParam0->f_8))
				{
					if (fVar9 > vVar6.z)
					{
						if (Global_1319110 != -1 || Global_1319116 != -1)
						{
							if (uParam0->f_210 > 10)
							{
								if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(uParam0->f_8) >= 0.01f)
								{
									if (Global_1319110 != -1 || Global_1319116 != -1)
									{
										func_48("TUR_WATER", -1);
										uParam0->f_34 = 1;
									}
								}
								if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar6.x, vVar6.y, (vVar6.z - 1f), &fVar9, false, false))
								{
								}
								else
								{
									if (Global_1319116 != -1)
									{
										func_48("TUR_GR", -1);
									}
									uParam0->f_34 = 1;
								}
							}
							else
							{
								uParam0->f_210++;
							}
						}
						else
						{
							uParam0->f_34 = 1;
						}
					}
					else if (uParam0->f_210 != 0)
					{
						uParam0->f_210 = 0;
					}
				}
			}
		}
		if (uParam0->f_35 == 0)
		{
			if (CAM::DOES_CAM_EXIST(uParam0->f_32))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
					{
						if (uParam0->f_4)
						{
							switch (ENTITY::GET_ENTITY_MODEL(uParam0->f_9))
							{
								case joaat("VALKYRIE"):
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, 0f, 5.32f, -0.3f, true);
									break;
								case joaat("POLMAV"):
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, 0f, 2.75f, -1.25f, true);
									break;
								case joaat("MAVERICK"):
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, 0f, 2.75f, -1.25f, true);
									break;
								case joaat("SAVAGE"):
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, 0f, 5.75f, -0.75f, true);
									break;
								case joaat("HUNTER"):
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, -0.0066f, 8.9038f, -0.5f, true);
									break;
								case joaat("TRAILERLARGE"):
									switch (Global_1319110)
									{
										case 1:
											vVar10 = { 0f, 8.4f, 1.3f };
											break;
										case 2:
											vVar10 = { -2.4f, -7.6f, 0.92f };
											break;
										case 3:
											vVar10 = { 2.4f, -7.6f, 0.92f };
											break;
									}
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, vVar10, true);
									break;
								case joaat("ADDER"):
									vVar13 = { 2065.848f, 2967.32f, 45.2947f };
									vVar16 = { 2049.612f, 2947.657f, 49.556f };
									vVar19 = { 2045.091f, 2943.258f, 49.4991f };
									vVar22 = { 2040.365f, 2952.754f, 49.5688f };
									vVar25 = { 2049.385f, 2953.971f, 49.9635f };
									switch (Global_1319116)
									{
										case 1:
											vVar10 = { vVar16 - vVar13 };
											break;
										case 2:
											vVar10 = { vVar19 - vVar13 };
											break;
										case 3:
											vVar10 = { vVar22 - vVar13 };
											break;
										case 4:
											vVar10 = { vVar25 - vVar13 };
											break;
									}
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, vVar10, true);
									break;
								default:
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, 0f, 1.958f, -0.618f, true);
									break;
							}
						}
						else
						{
							switch (ENTITY::GET_ENTITY_MODEL(uParam0->f_9))
							{
								case joaat("BUZZARD"):
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, 0f, 1.958f, -0.468f, true);
									break;
								case joaat("POLMAV"):
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, 0f, 2.75f, -1.25f, true);
									break;
								case joaat("BUZZARD2"):
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, 0f, 1.958f, -0.618f, true);
									break;
								case joaat("VALKYRIE"):
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, 0f, 5.32f, -0.3f, true);
									break;
								default:
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, 0f, 1.958f, -0.618f, true);
									break;
							}
						}
						uParam0->f_35 = 1;
					}
				}
			}
		}
		if (uParam0->f_35 == 1 && uParam0->f_7 == 0)
		{
			fVar28 = 128f;
			if (CAM::DOES_CAM_EXIST(uParam0->f_32))
			{
				if (CAM::IS_CAM_ACTIVE(uParam0->f_32))
				{
					if (!func_104(1))
					{
						if (!PAD::IS_CONTROL_PRESSED(2, 19) && !HUD::IS_PAUSE_MENU_ACTIVE())
						{
							PAD::SET_INPUT_EXCLUSIVE(0, 39);
							if (PAD::_IS_INPUT_DISABLED(0))
							{
								fVar28 = 15f;
								fVar3 = (PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291) * -fVar28);
								fVar4 = (PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290) * fVar28);
							}
							else
							{
								iVar2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291) * -fVar28));
								iVar1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290) * fVar28));
							}
							iVar0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(0, 39) * 128f));
						}
						if (!PAD::_IS_INPUT_DISABLED(0))
						{
							iVar29 = SYSTEM::ROUND((fParam5 * fVar28));
							if (MISC::ABSI(iVar0) < iVar29)
							{
								iVar0 = 0;
							}
							vVar30 = { IntToFloat(iVar2), IntToFloat(iVar1), 0f };
							if (SYSTEM::VMAG(vVar30) < IntToFloat(iVar29))
							{
								iVar2 = 0;
								iVar1 = 0;
							}
						}
						fVar33 = ((uParam0->f_42 / fParam2) * 0.5f);
						if (fVar33 > 0f)
						{
							fVar33 = (fVar33 + 1f);
						}
						else
						{
							fVar33 = 1f;
						}
						if (PAD::_IS_INPUT_DISABLED(0))
						{
							uParam0->f_56 = ((fVar3 * uParam0->f_40) * uParam0->f_36);
							uParam0->f_57 = (((fVar4 * uParam0->f_40) * uParam0->f_36) * fVar33);
						}
						else
						{
							uParam0->f_56 = (((SYSTEM::TO_FLOAT(iVar2) * uParam0->f_40) * uParam0->f_36) * SYSTEM::TIMESTEP());
							uParam0->f_57 = ((((SYSTEM::TO_FLOAT(iVar1) * uParam0->f_40) * uParam0->f_36) * fVar33) * SYSTEM::TIMESTEP());
						}
						uParam0->f_57 = func_103(uParam0->f_57, fParam3, fParam4);
						if (func_102(uParam0->f_45, 0f, 0f, 0f, 0))
						{
							vVar34 = { CAM::GET_CAM_COORD(uParam0->f_32) };
							uParam0->f_45 = (SYSTEM::SIN(uParam0->f_42.f_2) * 150f);
							uParam0->f_45.f_1 = (SYSTEM::COS(uParam0->f_42.f_2) * 150f);
							uParam0->f_45.f_2 = vVar34.z;
						}
						if (uParam0->f_4)
						{
							if ((!func_191(uParam0->f_8) && !func_86()) || Global_1319110 != -1)
							{
								if (iVar2 != 0 && iVar1 != 0)
								{
									uParam0->f_42 = { CAM::GET_CAM_ROT(uParam0->f_32, 2) };
								}
							}
						}
						else
						{
							uParam0->f_42 = { CAM::GET_CAM_ROT(uParam0->f_32, 2) };
						}
						if (!func_102(CAM::GET_CAM_COORD(uParam0->f_32), 0f, 0f, 0f, 0))
						{
							if (((uParam0->f_25 != 0f && !func_191(uParam0->f_8)) && !func_86()) || Global_1319110 != -1)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_8, false))
								{
									fVar38 = ENTITY::GET_ENTITY_HEADING(uParam0->f_8);
									if (Global_1319110 == 2 || Global_1319110 == 3)
									{
										fVar38 = (fVar38 - 174.4552f);
									}
									fVar39 = (fVar38 - uParam0->f_42.f_2);
									while (MISC::ABSF(fVar39) >= 180f && iVar40 < 30)
									{
										if (fVar39 < 0f)
										{
											fVar39 = (fVar39 + 360f);
										}
										else
										{
											fVar39 = (fVar39 - 360f);
										}
										iVar40++;
										if (iVar40 == 30)
										{
										}
									}
									if (Global_1319110 != -1)
									{
										if (fVar39 >= fParam4)
										{
											bVar37 = true;
											if (fVar39 > 0f)
											{
												uParam0->f_42.f_2 = (fVar38 - fParam4);
											}
											else
											{
												uParam0->f_42.f_2 = (fVar38 + fParam4);
											}
										}
										if (fVar39 < fParam3)
										{
											bVar37 = true;
											if (fVar39 > 0f)
											{
												uParam0->f_42.f_2 = (fVar38 - MISC::ABSF(fParam3));
											}
											else
											{
												uParam0->f_42.f_2 = (fVar38 + MISC::ABSF(fParam3));
											}
										}
									}
									else if (MISC::ABSF(fVar39) > uParam0->f_25)
									{
										bVar37 = true;
										if (fVar39 > 0f)
										{
											uParam0->f_42.f_2 = (fVar38 - uParam0->f_25);
										}
										else
										{
											uParam0->f_42.f_2 = (fVar38 + uParam0->f_25);
										}
									}
								}
							}
							fVar41 = 0f;
							fVar42 = 0f;
							if (func_191(uParam0->f_8) || func_86())
							{
								if (func_102(uParam0->f_189, 0f, 0f, 0f, 0))
								{
									vVar43 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_8, 2) };
									uParam0->f_189 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_8, 2) };
								}
								else
								{
									vVar46 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_8, 2) };
									if (func_191(uParam0->f_8))
									{
										switch (Global_1319115)
										{
											case 0:
												fVar49 = ((MISC::ABSF(uParam0->f_186.f_2) - 90f) / 90f);
												break;
											case 1:
												fVar49 = ((MISC::ABSF(uParam0->f_186.f_2) - 90f) / 90f);
												break;
											case 2:
												fVar49 = ((MISC::ABSF(uParam0->f_186.f_2) - 90f) / -90f);
												break;
											default:
												fVar49 = ((MISC::ABSF(uParam0->f_186.f_2) - 90f) / 90f);
												break;
										}
									}
									if (func_86())
									{
										switch (ENTITY::GET_ENTITY_MODEL(uParam0->f_8))
										{
											case joaat("AVENGER"):
												switch (Global_1319116)
												{
													case 1:
														fVar49 = ((MISC::ABSF(uParam0->f_186.f_2) - 90f) / 90f);
														break;
													case 2:
														fVar49 = ((MISC::ABSF(uParam0->f_186.f_2) - 90f) / -90f);
														break;
													case 3:
														fVar49 = ((MISC::ABSF(uParam0->f_186.f_2) - 90f) / -90f);
														break;
													default:
														fVar49 = ((MISC::ABSF(uParam0->f_186.f_2) - 90f) / 90f);
														break;
												}
												break;
											default:
												switch (Global_1319116)
												{
													case 1:
														fVar49 = ((MISC::ABSF(uParam0->f_186.f_2) - 90f) / 90f);
														break;
													case 2:
														fVar49 = ((MISC::ABSF(uParam0->f_186.f_2) - 90f) / 90f);
														break;
													case 3:
														fVar49 = ((MISC::ABSF(uParam0->f_186.f_2) - 90f) / -90f);
														break;
													default:
														fVar49 = ((MISC::ABSF(uParam0->f_186.f_2) - 90f) / 90f);
														break;
												}
												break;
										}
									}
									fVar41 = (fVar41 - ((vVar46.x - uParam0->f_189) * fVar49));
									fVar42 = (fVar42 + (vVar46.z - uParam0->f_189.f_2));
									if (fVar42 > 180f)
									{
										fVar42 = (fVar42 - 360f);
									}
									if (fVar42 < -180f)
									{
										fVar42 = (fVar42 + 360f);
									}
									if (vVar46.x < -80f || vVar46.x > 80f)
									{
										fVar41 = 0f;
										fVar42 = 0f;
									}
									if (ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_8))
									{
										fVar41 = 0f;
										fVar42 = 0f;
									}
									uParam0->f_189 = { vVar46 };
								}
							}
							if (func_191(uParam0->f_8))
							{
								if (uParam0->f_57 != 0f && !(uParam0->f_186.f_2 == (-uParam0->f_25 / 2f) || uParam0->f_186.f_2 == (uParam0->f_25 / 2f)))
								{
									bLocal_70 = false;
									iLocal_69 = 0;
								}
								else if (uParam0->f_56 != 0f && !(uParam0->f_186 == fVar5 || uParam0->f_186 == fParam1))
								{
									bLocal_70 = false;
									iLocal_69 = 0;
								}
								else if (iLocal_69 > 5)
								{
									bLocal_70 = true;
								}
								iLocal_69++;
							}
							if (((uParam0->f_56 != 0f || uParam0->f_57 != 0f) || fVar41 != 0f) || fVar42 != 0f)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_8, false))
								{
									iVar50 = ENTITY::GET_ENTITY_MODEL(uParam0->f_8);
								}
								if (Global_1319115 != -1 || Global_1319116 != -1)
								{
									if (!func_124(3))
									{
										fVar51 = (((uParam0->f_40 - (uParam0->f_39 - 1f)) / (uParam0->f_38 - (uParam0->f_39 - 1f))) * 6f);
									}
									else if (func_75(PLAYER::PLAYER_ID()) || func_124(3))
									{
										fVar51 = (((uParam0->f_40 - (uParam0->f_39 - 1f)) / (uParam0->f_38 - (uParam0->f_39 - 1f))) * 8f);
									}
									if (fVar51 < 3f)
									{
										fVar51 = 3f;
									}
									uParam0->f_56 = (uParam0->f_56 * fVar51);
									uParam0->f_57 = (uParam0->f_57 * fVar51);
								}
								else if (iVar50 == joaat("HUNTER"))
								{
									uParam0->f_56 = (uParam0->f_56 * 4f);
									uParam0->f_57 = (uParam0->f_57 * 4f);
								}
								if (func_191(uParam0->f_8) || func_86())
								{
									uParam0->f_186 = (uParam0->f_186 + uParam0->f_56);
									uParam0->f_186.f_2 = (uParam0->f_186.f_2 - uParam0->f_57);
									uParam0->f_186 = (uParam0->f_186 - fVar41);
									uParam0->f_186.f_2 = (uParam0->f_186.f_2 - fVar42);
									if (uParam0->f_186 < fVar5)
									{
										uParam0->f_186 = fVar5;
									}
									if (uParam0->f_186 > fParam1)
									{
										uParam0->f_186 = fParam1;
									}
									if (uParam0->f_25 >= 360f)
									{
										while (uParam0->f_186.f_2 > 180f)
										{
											uParam0->f_186.f_2 = (uParam0->f_186.f_2 - 360f);
										}
										while (uParam0->f_186.f_2 < -180f)
										{
											uParam0->f_186.f_2 = (uParam0->f_186.f_2 + 360f);
										}
									}
									else
									{
										if (uParam0->f_186.f_2 < (-uParam0->f_25 / 2f))
										{
											uParam0->f_186.f_2 = (-uParam0->f_25 / 2f);
											bVar37 = true;
										}
										if (uParam0->f_186.f_2 > (uParam0->f_25 / 2f))
										{
											uParam0->f_186.f_2 = (uParam0->f_25 / 2f);
											bVar37 = true;
										}
									}
								}
								else
								{
									iLocal_69++;
									uParam0->f_42 = { uParam0->f_42 + Vector(-uParam0->f_57, 0f, uParam0->f_56) };
									if (uParam0->f_42 < fVar5)
									{
										uParam0->f_42 = fVar5;
									}
									if (uParam0->f_42 > fParam1)
									{
										uParam0->f_42 = fParam1;
									}
									if (iLocal_69 > 5)
									{
										if (!func_73(vLocal_66, uParam0->f_42, 0.05f, 0))
										{
											vLocal_66 = { uParam0->f_42 };
											bLocal_70 = false;
										}
										else
										{
											bLocal_70 = true;
										}
										iLocal_69 = 0;
									}
								}
								if (uParam0->f_203 != -1)
								{
									if (bVar37)
									{
										fVar52 = 0f;
									}
									else
									{
										fVar52 = (fVar52 + MISC::ABSF(uParam0->f_57));
										if (MISC::ABSF(uParam0->f_57) > 0f)
										{
											bLocal_70 = false;
										}
									}
									if (func_191(uParam0->f_8) || func_86())
									{
										if (uParam0->f_186 < fParam1 && uParam0->f_186 > fParam2)
										{
											fVar52 = (fVar52 + MISC::ABSF(uParam0->f_56));
											if (MISC::ABSF(uParam0->f_56) > 0f)
											{
												bLocal_70 = false;
											}
										}
									}
									else if (uParam0->f_42 < fParam1 && uParam0->f_42 > fParam2)
									{
										fVar52 = (fVar52 + MISC::ABSF(uParam0->f_56));
										if (MISC::ABSF(uParam0->f_56) > 0f)
										{
											bLocal_70 = false;
										}
									}
									if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_203) && !bLocal_70)
									{
										if (func_124(3))
										{
											AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_203, "Pan_Loop", func_3(3), true);
										}
										else
										{
											iVar53 = func_101();
											if (iVar53 != 0)
											{
												AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_203, "Pan", func_3(iVar53), true);
											}
											else
											{
												AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_203, "COP_HELI_CAM_TURN", 0, true);
											}
										}
									}
									if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_203))
									{
										if (!bLocal_70 && fVar52 > 0f)
										{
											AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_203, "Ctrl", fVar52);
										}
										else
										{
											AUDIO::STOP_SOUND(uParam0->f_203);
											bLocal_70 = true;
											iLocal_69 = 6;
										}
									}
								}
							}
							else if (uParam0->f_203 != -1)
							{
								if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_203))
								{
									AUDIO::STOP_SOUND(uParam0->f_203);
									bLocal_70 = true;
									iLocal_69 = 6;
								}
							}
							if ((!func_191(uParam0->f_8) && !func_86()) || Global_1319110 != -1)
							{
								vVar54 = { uParam0->f_159 };
								if (uParam0->f_4)
								{
									fVar57 = 150f;
								}
								else
								{
									fVar57 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar54, CAM::GET_CAM_COORD(uParam0->f_32), true);
								}
								uParam0->f_45 = ((SYSTEM::COS(uParam0->f_42) * fVar57) * SYSTEM::SIN(-uParam0->f_42.f_2));
								uParam0->f_45.f_1 = ((SYSTEM::COS(uParam0->f_42) * fVar57) * SYSTEM::COS(-uParam0->f_42.f_2));
								uParam0->f_45.f_2 = (SYSTEM::SIN(uParam0->f_42) * fVar57);
								uParam0->f_45 = { uParam0->f_45 + CAM::GET_CAM_COORD(uParam0->f_32) };
								CAM::POINT_CAM_AT_COORD(uParam0->f_32, uParam0->f_45);
							}
							else
							{
								if (ENTITY::GET_ENTITY_MODEL(uParam0->f_9) == joaat("VOLATOL"))
								{
									switch (Global_1319115)
									{
										case 1:
											vVar64 = { 0f, 7.1f, -1.52f };
											vVar58 = { vVar64 + func_100(0f, 0.18f, 0f, uParam0->f_186.f_2) };
											vVar61 = { -7f, 0f, 0f };
											break;
										case 2:
											vVar64 = { 0f, 4.7f, 2.56f };
											vVar58 = { vVar64 + func_100(0f, 0f, 0.5f, uParam0->f_186.f_2) };
											vVar61 = { -5.8f, 0f, 0f };
											break;
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(uParam0->f_9) == joaat("BOMBUSHKA"))
								{
									switch (Global_1319115)
									{
										case 0:
											vVar58 = { Vector(2.43f, -4.26f, -3.42f) + Vector(0f, -1.25f, 2.82f) };
											vVar61 = { 0f, 0f, 0f };
											break;
										case 1:
											if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false) && VEHICLE::GET_VEHICLE_MOD(uParam0->f_8, 10) == 0)
											{
												vVar58 = { Vector(-1.5f, -0.22f, -5.2f) + Vector(-0.4f, 0f, 0.2f) };
												vVar61 = { 0f, 0f, 90f };
											}
											else
											{
												vVar58 = { -5.2f, -0.3f, -1.5f };
												vVar61 = { 0f, 0f, 90f };
											}
											break;
										case 2:
											vVar58 = { 23f, -0.18f, 1.23f };
											vVar61 = { 0f, 0f, -90f };
											break;
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(uParam0->f_9) == joaat("AVENGER"))
								{
									switch (Global_1319116)
									{
										case 1:
											vVar58 = { 0f, 9.8f, -2.315f };
											vVar61 = { 0f, 0f, 0f };
											break;
										case 2:
											vVar58 = { 0f, -1.85f, 2.65f };
											vVar61 = { 0f, 0f, 180f };
											break;
										case 3:
											vVar58 = { 0f, -9.5f, 0.11f };
											vVar61 = { 0f, 0f, 180f };
											break;
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(uParam0->f_9) == joaat("AKULA"))
								{
									switch (Global_1319115)
									{
										case 0:
											vVar58 = { 0f, 9f, -1.2f };
											vVar61 = { -10.2537f, 0f, 0f };
											break;
										case 1:
											vVar58 = { -1.26f, 3.278f, 0.695f };
											vVar61 = { 0f, 0f, 90f };
											break;
										case 2:
											vVar58 = { 1.26f, 3.278f, 0.695f };
											vVar61 = { 0f, 0f, -90f };
											break;
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(uParam0->f_9) == joaat("PHANTOM3"))
								{
									switch (Global_1319115)
									{
										case 0:
											vVar58 = { 0f, 0f, 0f };
											vVar61 = { 0f, 0f, 0f };
											break;
										case 1:
											vVar58 = { 0f, 0f, 0f };
											vVar61 = { 0f, 0f, 0f };
											break;
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(uParam0->f_8) == joaat("BOMBUSHKA"))
								{
									CAM::_ATTACH_CAM_TO_PED_BONE_2(uParam0->f_32, PLAYER::PLAYER_PED_ID(), -1, vVar61 + Vector(uParam0->f_186.f_2, 0f, uParam0->f_186), vVar58, true);
								}
								else if (Global_1319116 != -1 || (func_191(uParam0->f_8) && ENTITY::GET_ENTITY_MODEL(uParam0->f_8) != joaat("BOMBUSHKA")))
								{
									CAM::_ATTACH_CAM_TO_VEHICLE_BONE(uParam0->f_32, uParam0->f_9, 0, true, vVar61 + Vector(uParam0->f_186.f_2, 0f, uParam0->f_186), vVar58, true);
								}
							}
						}
						if (!((iVar0 == 0 || uParam0->f_40 == uParam0->f_38) || uParam0->f_40 == uParam0->f_39))
						{
							if (uParam0->f_202 != -1)
							{
								if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_202))
								{
									if (func_124(3))
									{
										AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_202, "Zoom_Loop", func_3(3), true);
									}
									else
									{
										iVar67 = func_101();
										if (iVar67 != 0)
										{
											AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_202, "Zoom", func_3(iVar67), true);
										}
										else
										{
											AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_202, "COP_HELI_CAM_ZOOM", 0, true);
										}
									}
								}
							}
							if (uParam0->f_202 != -1)
							{
								if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_202))
								{
									AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_202, "Ctrl", MISC::ABSF((SYSTEM::TO_FLOAT(iVar0) / 128f)));
									if (iVar0 < 0)
									{
										AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_202, "Dir", -1f);
									}
								}
							}
						}
						else if (uParam0->f_202 != -1)
						{
							if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_202))
							{
								AUDIO::STOP_SOUND(uParam0->f_202);
							}
						}
						iVar68 = 4;
						if (func_124(3))
						{
							uParam0->f_37 = 5f;
						}
						if (func_191(uParam0->f_8) || func_86())
						{
							uParam0->f_40 = (uParam0->f_40 + (((SYSTEM::TO_FLOAT(iVar0) / uParam0->f_37) * SYSTEM::TIMESTEP()) * IntToFloat(iVar68)));
						}
						else
						{
							uParam0->f_40 = (uParam0->f_40 + ((SYSTEM::TO_FLOAT(iVar0) / uParam0->f_37) * SYSTEM::TIMESTEP()));
						}
						if (uParam0->f_40 > uParam0->f_38)
						{
							uParam0->f_40 = uParam0->f_38;
						}
						if (uParam0->f_40 < uParam0->f_39)
						{
							uParam0->f_40 = uParam0->f_39;
						}
						CAM::_0x487A82C650EB7799(1f);
						CAM::SET_CAM_FOV(uParam0->f_32, uParam0->f_40);
						fVar69 = ((uParam0->f_40 - 5f) / 42f);
						GRAPHICS::_0xE2892E7E55D7073A(fVar69);
					}
				}
			}
		}
		else if (uParam0->f_35 == 1 && uParam0->f_7 == 1)
		{
			vVar70 = { uParam0->f_159 };
			fVar73 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar70, CAM::GET_CAM_COORD(uParam0->f_32), true);
			uParam0->f_45 = ((SYSTEM::COS(uParam0->f_42) * fVar73) * SYSTEM::SIN(-uParam0->f_42.f_2));
			uParam0->f_45.f_1 = ((SYSTEM::COS(uParam0->f_42) * fVar73) * SYSTEM::COS(-uParam0->f_42.f_2));
			uParam0->f_45.f_2 = (SYSTEM::SIN(uParam0->f_42) * fVar73);
			uParam0->f_45 = { uParam0->f_45 + CAM::GET_CAM_COORD(uParam0->f_32) };
			CAM::POINT_CAM_AT_COORD(uParam0->f_32, uParam0->f_45);
			CAM::SET_CAM_FOV(uParam0->f_32, uParam0->f_40);
		}
	}
	else if (CAM::DOES_CAM_EXIST(uParam0->f_32))
	{
		if (CAM::IS_CAM_ACTIVE(uParam0->f_32))
		{
			CAM::SET_CAM_ACTIVE(uParam0->f_32, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
	}
}

Vector3 func_100(vector3 vParam0, float fParam3)
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

int func_101()
{
	if (func_193(PLAYER::PLAYER_ID()) || func_142(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	else if (func_141(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID()))
	{
		return 2;
	}
	else if (func_124(3))
	{
		return 3;
	}
	return 0;
}

bool func_102(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_103(float fParam0, float fParam1, float fParam2)
{
	while (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + 360f);
	}
	while (fParam0 > fParam2)
	{
		fParam0 = (fParam0 - 360f);
	}
	return fParam0;
}

bool func_104(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

void func_105(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;
	float fVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;

	if (((CAM::DOES_CAM_EXIST(uParam0->f_32) && uParam0->f_7 == 0) && uParam0->f_35) && !uParam0->f_4)
	{
		iVar12 = 2;
		iVar12 = iVar12;
		vVar0 = { CAM::GET_CAM_COORD(uParam0->f_32) };
		vVar3 = { CAM::GET_CAM_ROT(uParam0->f_32, 2) };
		fVar17 = 0f;
		iVar18 = 0;
		iVar19 = 0;
		iVar19 = iVar19;
		fVar20 = vVar0.z;
		fVar20 = fVar20;
		if (iVar18 == 0)
		{
			fVar21 = 0f;
			fVar22 = (SYSTEM::COS(vVar3.x) * 50f);
			while (iVar12 < 21)
			{
				iVar12++;
				fVar11 = (fVar22 * IntToFloat(iVar12));
				fVar9 = ((SYSTEM::SIN(vVar3.z) * fVar11) * -1f);
				fVar10 = (SYSTEM::COS(vVar3.z) * fVar11);
				fVar21 = PATHFIND::_GET_HEIGHTMAP_TOP_Z_FOR_AREA(((vVar0.x + fVar9) - 3f), ((vVar0.y + fVar10) - 3f), ((vVar0.x + fVar9) + 3f), ((vVar0.y + fVar10) + 3f));
				fVar21 = (fVar21 - 20f);
				fVar20 = (vVar0.z + (SYSTEM::SIN(vVar3.x) * (50f * IntToFloat(iVar12))));
				if (fVar21 > fVar20)
				{
					if (iVar18 == 0)
					{
						iVar18 = 1;
						fVar17 = fVar21;
						iVar12 = 21;
					}
				}
			}
		}
		if (iVar18 == 0)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &fVar24, false, false))
			{
				fVar23 = (vVar0.z - fVar24);
				if (fVar23 < 150f)
				{
					fVar23 = 150f;
				}
			}
			else
			{
				fVar23 = 150f;
			}
			if (vVar3.x < 0f)
			{
				fVar11 = MISC::ABSF((fVar23 / MISC::TAN(vVar3.x)));
				fVar17 = (vVar0.z - fVar23);
			}
			else
			{
				fVar11 = 1000f;
				fVar17 = (vVar0.z + (fVar11 * MISC::TAN(vVar3.x)));
			}
		}
		fVar9 = ((SYSTEM::SIN(vVar3.z) * fVar11) * -1f);
		fVar10 = (SYSTEM::COS(vVar3.z) * fVar11);
		vVar6 = { (fVar9 + vVar0.x), (fVar10 + vVar0.y), fVar17 };
		iVar13 = 0;
		while (iVar13 < uParam0->f_175)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_175[iVar13 /*10*/]))
			{
				if (func_106(ENTITY::GET_ENTITY_COORDS(uParam0->f_175[iVar13 /*10*/], true), 0.4f, 0.4f, 0.6f, 0.6f))
				{
					iVar18 = 1;
					iVar19 = 1;
					vVar6 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_175[iVar13 /*10*/], true) };
					fVar17 = vVar14.z;
				}
			}
			iVar13++;
		}
		uParam0->f_159 = { vVar6 };
	}
}

bool func_106(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;

	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vParam0, &fVar0, &fVar1);
	if (fVar0 >= fParam3 && fVar0 <= fParam5)
	{
		if (fVar1 >= fParam4 && fVar1 <= fParam6)
		{
			return true;
		}
	}
	return false;
}

void func_107()
{
	if (bLocal_311)
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), bLocal_339, false))
		{
			switch (iLocal_338)
			{
				case 0:
					if (func_181(&Local_73))
					{
						if (AUDIO::START_AUDIO_SCENE("MP_HELI_CAM_FILTERING"))
						{
							iLocal_338++;
						}
					}
					break;
				case 1:
					AUDIO::SET_AUDIO_SCENE_VARIABLE("MP_HELI_CAM_FILTERING", "HeliFiltering", ENTITY::GET_ENTITY_SPEED(bLocal_339));
					break;
			}
		}
		else if (iLocal_338 != 99 && iLocal_338 > 0)
		{
			AUDIO::STOP_AUDIO_SCENE("MP_HELI_CAM_FILTERING");
			iLocal_338 = 99;
		}
	}
}

void func_108()
{
	switch (iLocal_337)
	{
		case 0:
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !(HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("MC_PLAY", 0) && func_41("SUBJOB_HELP_7")))
			{
				if (bLocal_301)
				{
					if (iLocal_295 == joaat("BUZZARD") || iLocal_295 == joaat("SAVAGE"))
					{
						func_48("HUNTGUN_2", -1);
					}
					else if (iLocal_295 == joaat("VALKYRIE"))
					{
						func_48("HUNTGUN_2c", -1);
					}
					else if (iLocal_295 == joaat("HUNTER"))
					{
						func_48("HUNTGUN_2c", -1);
					}
					else if (func_191(bLocal_339))
					{
						func_48(func_9(bLocal_339), -1);
					}
					else if (Global_1319110 != -1 || Global_1319116 != -1)
					{
						func_48(func_9(bLocal_339), -1);
					}
					else
					{
						func_48("HUNTGUN_2b", -1);
					}
				}
				else if (bLocal_302)
				{
					if (ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("BOMBUSHKA"))
					{
						func_48("BOMBGUN_T_2b", -1);
					}
					if (ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("AKULA"))
					{
						func_48("AKULAGUN_P1", -1);
					}
					if (ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("VOLATOL"))
					{
						func_48("VOLGUN_T_2b", -1);
					}
				}
				else if (bLocal_303)
				{
					if (ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("BOMBUSHKA"))
					{
						func_48("BOMBGUN_T_2d", -1);
					}
					if (ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("AKULA"))
					{
						func_48("AKULAGUN_P1", -1);
					}
					if (ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("VOLATOL"))
					{
						func_48("VOLGUN_T_2c", -1);
					}
				}
				else if (!func_191(bLocal_339))
				{
					if (iLocal_295 == joaat("BUZZARD") || iLocal_295 == joaat("SAVAGE"))
					{
						func_48("HUNTGUN_4", -1);
					}
					else if (iLocal_295 == joaat("VALKYRIE") || iLocal_295 == joaat("HUNTER"))
					{
						func_48("HUNTGUN_4c", -1);
					}
					else if (func_124(3))
					{
						func_48("IAAGUN_1", -1);
					}
					else
					{
						func_48("HUNTGUN_4b", -1);
					}
				}
				iLocal_337++;
			}
			break;
		case 1:
			if ((((func_41("HUNTGUN_2") || func_41("HUNTGUN_4")) || func_41("HUNTGUN_2b")) || func_41("HUNTGUN_4b")) && Global_1319116 == -1)
			{
				iLocal_337++;
			}
			if (Global_1319110 != -1 || Global_1319116 != -1)
			{
				if (func_43(Global_1590374) && !MISC::IS_BIT_SET(Global_4456448.f_25, 7))
				{
					func_48(func_9(bLocal_339), -1);
				}
				else if (func_111())
				{
					func_48(func_9(bLocal_339), -1);
					if (!func_122(&uLocal_292))
					{
						func_144(&uLocal_292, 0, 0);
					}
				}
				else if (func_41(func_9(bLocal_339)))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			break;
		case 2:
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (bLocal_301)
				{
					if (func_110(PLAYER::PLAYER_ID(), 19))
					{
						if (!func_109())
						{
							if (PAD::_IS_INPUT_DISABLED(0))
							{
								func_48("HUNTGUN_6_KM", -1);
							}
							else
							{
								func_48("HUNTGUN_6", -1);
							}
						}
					}
				}
				iLocal_337++;
			}
			break;
	}
}

bool func_109()
{
	return MISC::IS_BIT_SET(Global_2537071.f_1734, 11);
}

bool func_110(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_208, iParam1);
}

bool func_111()
{
	if ((func_141(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID())) || func_124(3))
	{
		return true;
	}
	return !func_121(&uLocal_292, 7500, 0);
}

bool func_112()
{
	if (func_193(PLAYER::PLAYER_ID()) || func_142(PLAYER::PLAYER_ID()))
	{
		if (Global_1319110 != -1)
		{
			return true;
		}
	}
	if (((func_141(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID())) || func_75(PLAYER::PLAYER_ID())) || func_124(3))
	{
		if (Global_1319116 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_113(bool bParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(bParam0))
	{
		case joaat("TRAILERLARGE"):
		case joaat("BUZZARD"):
		case joaat("SAVAGE"):
			return true;
	}
	return false;
}

void func_114(int iParam0)
{
	if (func_119())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_44(0))
		{
			func_115(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_115(int iParam0)
{
	if (func_119())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_118())
		{
			func_117(1, 1);
		}
		else
		{
			func_117(0, 0);
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
	if (!func_116())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_116()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_117(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
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

bool func_118()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

bool func_119()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

bool func_120()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

bool func_121(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_144(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::IS_TIME_EQUAL_TO(NETWORK::_0xBA7F0B77D80A4EB7(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (MISC::ABSI(NETWORK::IS_TIME_EQUAL_TO(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

bool func_122(var uParam0)
{
	return uParam0->f_1;
}

bool func_123(bool bParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(bParam0, false))
		{
			return true;
		}
	}
	return false;
}

bool func_124(int iParam0)
{
	return Global_262145.f_5008[iParam0] == Global_4456448.f_194990;
}

bool func_125()
{
	if ((((func_141(PLAYER::PLAYER_ID()) || func_193(PLAYER::PLAYER_ID())) || func_140(PLAYER::PLAYER_ID())) || func_75(PLAYER::PLAYER_ID())) || func_124(3))
	{
		return true;
	}
	return false;
}

void func_126(var uParam0, int iParam1)
{
	uParam0->f_51 = iParam1;
}

void func_127()
{
	if (MISC::IS_PC_VERSION())
	{
		if (bLocal_355 == 0)
		{
			PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("Turret");
			bLocal_355 = true;
		}
	}
}

void func_128()
{
	iLocal_332 = 0;
	if (func_193(PLAYER::PLAYER_ID()) || func_142(PLAYER::PLAYER_ID()))
	{
		iLocal_332 = 1;
	}
	else if (func_141(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID()))
	{
		iLocal_332 = 2;
	}
	else if (func_124(3))
	{
		iLocal_332 = 3;
	}
	else if (ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("BUZZARD") || ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("SAVAGE"))
	{
		iLocal_332 = 4;
	}
}

void func_129()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_73.f_9))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(Local_73.f_9, false) && !(!ENTITY::IS_ENTITY_DEAD(Global_1370234, false) && ENTITY::GET_ENTITY_MODEL(Local_73.f_9) == ENTITY::GET_ENTITY_MODEL(Global_1370234))) && !func_191(bLocal_339))
		{
			if ((((ENTITY::GET_ENTITY_MODEL(Local_73.f_9) != joaat("VALKYRIE") && ENTITY::GET_ENTITY_MODEL(Local_73.f_9) != joaat("SAVAGE")) && ENTITY::GET_ENTITY_MODEL(Local_73.f_9) != joaat("HUNTER")) && !func_141(PLAYER::PLAYER_ID())) && !func_140(PLAYER::PLAYER_ID()))
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(Local_73.f_9);
				if (!bLocal_307)
				{
					NETWORK::SET_LOCAL_PLAYER_VISIBLE_LOCALLY(bLocal_343, 0);
				}
				if (!bLocal_309)
				{
					NETWORK::SET_LOCAL_PLAYER_VISIBLE_LOCALLY(bLocal_344, 0);
				}
			}
		}
	}
}

void func_130()
{
	vector3 vVar0;
	float fVar3;

	if (bLocal_308)
	{
		if (!bLocal_309 && bLocal_344 != -1)
		{
			vVar0 = { CAM::GET_FINAL_RENDERED_IN_WHEN_FRIENDLY_ROT(bLocal_344, 2) };
			fVar3 = CAM::GET_FINAL_RENDERED_IN_WHEN_FRIENDLY_FOV(bLocal_344);
			switch (iLocal_357)
			{
				case 0:
					if (CAM::DOES_CAM_EXIST(Local_73.f_32))
					{
						Local_73.f_42 = { vVar0 };
						Local_73.f_40 = fVar3;
						CAM::SET_CAM_ROT(Local_73.f_32, Local_73.f_42, 2);
						CAM::SET_CAM_FOV(Local_73.f_32, Local_73.f_40);
						iLocal_357++;
					}
					break;
				case 1:
					vVar0 = { func_132(vVar0, Local_73.f_42) };
					fVar3 = func_131(fVar3, Local_73.f_40);
					if (CAM::DOES_CAM_EXIST(Local_73.f_32))
					{
						Local_73.f_42 = { vVar0 };
						Local_73.f_40 = fVar3;
						CAM::SET_CAM_ROT(Local_73.f_32, Local_73.f_42, 2);
						CAM::SET_CAM_FOV(Local_73.f_32, Local_73.f_40);
					}
					break;
			}
		}
	}
}

float func_131(float fParam0, float fParam1)
{
	float fVar0;

	fVar0 = (fParam1 + ((fParam0 - fParam1) * vLocal_333.x));
	if (MISC::ABSF((fVar0 - fParam0)) < fLocal_336)
	{
		fVar0 = fParam0;
	}
	return fVar0;
}

Vector3 func_132(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;
	float fVar3;

	fVar3 = (vParam0.z - vParam3.z);
	if (MISC::ABSF(fVar3) > 180f)
	{
		if (fVar3 > 0f)
		{
			fVar3 = (fVar3 - 360f);
		}
		else
		{
			fVar3 = (fVar3 + 360f);
		}
		vParam3.f_2 = (vParam0.z - fVar3);
	}
	vVar0 = { vParam3 + vParam0 - vParam3 * vLocal_333 };
	if (MISC::ABSF((vVar0.x - vParam0.x)) < fLocal_336)
	{
		vVar0 = { vParam0 };
	}
	if (MISC::ABSF((vVar0.y - vParam0.y)) < fLocal_336)
	{
		vVar0 = { vParam0 };
	}
	if (MISC::ABSF((vVar0.z - vParam0.z)) < fLocal_336)
	{
		vVar0 = { vParam0 };
	}
	return vVar0;
}

void func_133()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (((bLocal_311 || Global_1319110 != -1) || Global_1319116 != -1) || func_191(bLocal_339))
	{
		if (Global_1319110 != -1)
		{
			switch (Global_1319110)
			{
				case 1:
					vVar3 = { 0f, 50f, 1f };
					break;
				case 2:
					vVar3 = { 0f, -50f, 1f };
					break;
				case 3:
					vVar3 = { 0f, -50f, 1f };
					break;
			}
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(bLocal_339, vVar3) };
		}
		else if (Global_1319116 != -1)
		{
			switch (Global_1319110)
			{
				case 1:
					vVar6 = { 0f, 50f, 1f };
					break;
				case 2:
					vVar6 = { 0f, -50f, 1f };
					break;
				case 3:
					vVar6 = { 0f, -50f, 1f };
					break;
			}
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(bLocal_339, vVar6) };
		}
		else
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(bLocal_339, 0f, 20f, -1f) };
		}
		func_83(&Local_73, 0, 1086324736 /* Float: 6f */, -1030356992 /* Float: -75f */, -1020002304 /* Float: -180f */, 1127481344 /* Float: 180f */, 1041865114 /* Float: 0.15f */);
		func_99(&Local_73, 1086324736 /* Float: 6f */, -1030356992 /* Float: -75f */, -1020002304 /* Float: -180f */, 1127481344 /* Float: 180f */, 1041865114 /* Float: 0.15f */);
		func_134(&Local_73, vVar0);
		CAM::_0x661B5C8654ADD825(Local_73.f_32, true);
		if ((Global_1319110 != -1 || func_191(bLocal_339)) || Global_1319116 != -1)
		{
			return;
		}
		Local_73.f_42 = { ENTITY::GET_ENTITY_ROTATION(bLocal_339, 2) - Vector(0f, 0f, 3f) };
	}
}

void func_134(var uParam0, vector3 vParam1)
{
	if ((!func_191(uParam0->f_8) && !func_125()) || Global_1319110 != -1)
	{
		uParam0->f_45 = { vParam1 };
		CAM::POINT_CAM_AT_COORD(uParam0->f_32, uParam0->f_45);
		uParam0->f_159 = { vParam1 };
	}
}

int func_135(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	float fVar7;

	if (iParam2 == 1 && uParam0->f_1 == 0)
	{
		if (uParam0->f_5 == 0)
		{
			if (Global_1319110 != -1)
			{
				iLocal_71 = UNK_0xB01F55A0FD1CFD49(func_143());
			}
			else
			{
				iLocal_71 = UNK_0xB01F55A0FD1CFD49(func_143());
			}
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", false);
		if (!CAM::DOES_CAM_EXIST(uParam0->f_32))
		{
			uParam0->f_35 = 0;
			uParam0->f_32 = CAM::CREATE_CAM("default_scripted_camera", false);
			if (func_191(bParam3) || func_125())
			{
				uParam0->f_12 = 0.1f;
			}
			CAM::SET_CAM_NEAR_CLIP(uParam0->f_32, uParam0->f_12);
		}
		MISC::SET_INSTANCE_PRIORITY_HINT(4);
		func_136(1, 1, 1, 0);
		if (!ENTITY::IS_ENTITY_DEAD(bParam1, false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(bParam1))
				{
					uParam0->f_8 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(bParam1);
					VEHICLE::SET_LIGHTS_CUTOFF_DISTANCE_TWEAK(300f);
				}
				VEHICLE::SET_LIGHTS_CUTOFF_DISTANCE_TWEAK(300f);
				uParam0->f_6 = 1;
				uParam0->f_33 = 1;
				uParam0->f_50 = 1;
				uParam0->f_2 = 1;
				uParam0->f_9 = bParam1;
				vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam1, true) };
				uParam0->f_22 = vVar0.z;
				vVar3 = { ENTITY::GET_ENTITY_ROTATION(bParam1, 2) };
				uParam0->f_41 = vVar3.z;
				if (uParam0->f_4)
				{
					PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				}
				else
				{
					PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
					PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
				}
				GRAPHICS::PUSH_TIMECYCLE_MODIFIER();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_8, false))
				{
					iVar6 = ENTITY::GET_ENTITY_MODEL(uParam0->f_8);
				}
				if (iVar6 == joaat("BUZZARD") || iVar6 == joaat("SAVAGE"))
				{
					GRAPHICS::SET_TIMECYCLE_MODIFIER("heliGunCam");
				}
				else if (iVar6 == joaat("VALKYRIE") || iVar6 == joaat("HUNTER"))
				{
					GRAPHICS::SET_TIMECYCLE_MODIFIER("heliGunCam");
				}
				else if (Global_1319110 != -1)
				{
				}
				else
				{
					GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
				}
				GRAPHICS::_0x6DDBF9DFFC4AC080(true);
				MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &fVar7, false, false);
				uParam0->f_199 = (fVar7 * 10f);
				if (uParam0->f_200 == 1)
				{
					if (uParam0->f_205 != -1)
					{
						if (Global_1319110 == -1)
						{
							if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_205))
							{
								AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_205, "COP_HELI_CAM_BACKGROUND", 0, true);
							}
						}
					}
				}
				func_97(uParam0);
				uParam0->f_1 = 1;
			}
		}
		return 0;
	}
	else
	{
		if (uParam0->f_1 == 1 && iParam2 == 1)
		{
			if (uParam0->f_86 == 0)
			{
				func_85(uParam0, 0, -1020002304 /* Float: -180f */, 1127481344 /* Float: 180f */);
				func_84();
			}
			else
			{
				return 1;
			}
		}
		if (uParam0->f_1 == 1 && iParam2 == 0)
		{
			if (iParam4 == 0)
			{
				uParam0->f_48 = 0;
			}
			uParam0->f_6 = 0;
			uParam0->f_33 = 0;
			uParam0->f_50 = 0;
			uParam0->f_9 = 0;
			uParam0->f_2 = 0;
			uParam0->f_55 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_8, false))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(uParam0->f_8))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_8, true, true);
				}
				if (!uParam0->f_4)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_8, false);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_8, false);
					ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_8, true);
					VEHICLE::SET_VEHICLE_GRAVITY(uParam0->f_8, true);
				}
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			if (CAM::DOES_CAM_EXIST(uParam0->f_32))
			{
				if (CAM::IS_CAM_ACTIVE(uParam0->f_32))
				{
					CAM::SET_CAM_ACTIVE(uParam0->f_32, false);
				}
				if (CAM::IS_CAM_RENDERING(uParam0->f_32))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
				CAM::DESTROY_CAM(uParam0->f_32, false);
			}
			if (uParam0->f_202 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_202))
				{
					AUDIO::STOP_SOUND(uParam0->f_202);
				}
			}
			if (uParam0->f_203 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_203))
				{
					AUDIO::STOP_SOUND(uParam0->f_203);
				}
			}
			if (uParam0->f_204 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_204))
				{
					AUDIO::STOP_SOUND(uParam0->f_204);
				}
			}
			if (uParam0->f_206 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_206))
				{
					AUDIO::STOP_SOUND(uParam0->f_206);
				}
			}
			if (uParam0->f_207 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_207))
				{
					AUDIO::STOP_SOUND(uParam0->f_207);
				}
			}
			if (uParam0->f_208 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_208))
				{
					AUDIO::STOP_SOUND(uParam0->f_208);
				}
			}
			if (uParam0->f_205 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_205))
				{
					AUDIO::STOP_SOUND(uParam0->f_205);
				}
			}
			if (uParam0->f_209 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_209))
				{
					AUDIO::STOP_SOUND(uParam0->f_209);
				}
			}
			if (uParam0->f_200 == 1)
			{
				AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
				AUDIO::RELEASE_SOUND_ID(uParam0->f_205);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_202);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_203);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_204);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_206);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_207);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_208);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_209);
				uParam0->f_205 = -1;
				uParam0->f_202 = -1;
				uParam0->f_203 = -1;
				uParam0->f_204 = -1;
				uParam0->f_206 = -1;
				uParam0->f_207 = -1;
				uParam0->f_208 = -1;
				uParam0->f_209 = -1;
				uParam0->f_200 = 0;
			}
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
			GRAPHICS::_0x6DDBF9DFFC4AC080(false);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("helicopterHUD");
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_71);
			GRAPHICS::POP_TIMECYCLE_MODIFIER();
			func_136(0, 0, 1, 0);
			uParam0->f_8 = 0;
			uParam0->f_1 = 0;
			func_97(uParam0);
			return 1;
		}
	}
	return 0;
}

int func_136(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != bParam0 && bParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_137(bool bParam0)
{
	return bParam0;
}

bool func_138(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
	uParam0->f_62 = 93;
	uParam0->f_62.f_1 = 182;
	uParam0->f_62.f_2 = 229;
	uParam0->f_65 = 255;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_68 = 255;
	uParam0->f_68.f_1 = 255;
	uParam0->f_68.f_2 = 255;
	uParam0->f_71 = 255;
	uParam0->f_71.f_1 = 40;
	uParam0->f_71.f_2 = 0;
	uParam0->f_15 = 40f;
	uParam0->f_36 = 0.0075f;
	uParam0->f_37 = 20f;
	uParam0->f_40 = 28f;
	if (func_140(PLAYER::PLAYER_ID()) || func_141(PLAYER::PLAYER_ID()))
	{
		uParam0->f_40 = 40f;
	}
	uParam0->f_54 = 0.234f;
	uParam0->f_58 = 22;
	uParam0->f_59 = 201;
	uParam0->f_60 = 39;
	uParam0->f_61 = 181;
	uParam0->f_74 = 0.044f;
	uParam0->f_75 = 0.02f;
	uParam0->f_77 = 1240f;
	uParam0->f_78 = 5000f;
	uParam0->f_79 = 1000f;
	uParam0->f_81 = 0.829f;
	uParam0->f_82 = 0.096f;
	uParam0->f_83 = 0.865f;
	uParam0->f_84 = 0.567f;
	uParam0->f_85 = 0.087f;
	uParam0->f_18 = 140f;
	uParam0->f_19 = 1f;
	uParam0->f_20 = 3f;
	uParam0->f_21 = 1f;
	uParam0->f_88 = 0.052f;
	uParam0->f_89 = 0.75f;
	uParam0->f_90 = 0.86f;
	uParam0->f_91 = 0.02f;
	uParam0->f_195 = 0.65f;
	uParam0->f_196 = 0.024f;
	uParam0->f_157 = 0.12f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		HUD::REQUEST_ADDITIONAL_TEXT("CHOPPER", 5);
		if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("CHOPPER", 5))
		{
			return true;
		}
	}
	else
	{
		HUD::REQUEST_ADDITIONAL_TEXT("CHOPPER", 3);
		if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("CHOPPER", 3))
		{
			return true;
		}
	}
	return false;
}

void func_139()
{
	MISC::SET_BIT(&Global_7357, 4);
}

bool func_140(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_37(Global_2425662[iParam0 /*421*/].f_310.f_5) == 10;
			}
		}
	}
	return false;
}

bool func_141(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[iParam0 /*421*/].f_310.f_8 != func_17())
			{
				return func_37(Global_2425662[iParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return false;
}

bool func_142(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_37(Global_2425662[iParam0 /*421*/].f_310.f_5) == 6;
			}
		}
	}
	return false;
}

char* func_143()
{
	if ((((func_141(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID())) || func_193(PLAYER::PLAYER_ID())) || func_142(PLAYER::PLAYER_ID())) || Global_1319116 != -1)
	{
		return "turret_cam";
	}
	return "heli_cam";
}

void func_144(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::_0xBA7F0B77D80A4EB7();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_145(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(bLocal_339) && !ENTITY::IS_ENTITY_DEAD(bLocal_339, false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(bLocal_339);
		switch (iVar0)
		{
			case joaat("AVENGER"):
				VEHICLE::_0xC60060EB0D8AC7B1(bLocal_339, 0, iParam0);
				VEHICLE::_0xC60060EB0D8AC7B1(bLocal_339, 1, iParam0);
				VEHICLE::_0xC60060EB0D8AC7B1(bLocal_339, 2, iParam0);
				break;
		}
	}
}

void func_146()
{
	if (func_41("HUNTGUN_1"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_41("HUNTGUN_1b"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_41("HUNTGUN_1c"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_41("HUNTGUN_3"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_41("HUNTGUN_3b"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_41("HUNTGUN_3c"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (((((((((((((((((((((func_41("BOMBGUN_1c") || func_41("BOMBGUN_1c1")) || func_41("BOMBGUN_1c2")) || func_41("BOMBGUN_2c")) || func_41("BOMBGUN_2c1")) || func_41("BOMBGUN_2c2")) || func_41("BOMBGUN_3c")) || func_41("BOMBGUN_3c1")) || func_41("BOMBGUN_3c2")) || func_41("BOMBGUN_FULL")) || func_41("BOMBGUN_BUSY")) || func_41("AKULAGUN_2")) || func_41("AKULAGUN_1")) || func_41("VOLGUN_1c")) || func_41("VOLGUN_1c1")) || func_41("VOLGUN_1c2")) || func_41("VOLGUN_2c")) || func_41("VOLGUN_2c1")) || func_41("VOLGUN_2c2")) || func_41("VOLGUN_3c")) || func_41("VOLGUN_3c1")) || func_41("VOLGUN_3c2"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_41("HUNTGUNH_1c"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_41(func_9(bLocal_339)))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_147(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_148(bool bParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(bParam0) == joaat("AKULA"))
	{
		return true;
	}
	switch (ENTITY::GET_ENTITY_MODEL(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(bParam0)))
	{
		case joaat("VALKYRIE"):
		case joaat("BOMBUSHKA"):
		case joaat("VOLATOL"):
		case joaat("HUNTER"):
		case joaat("SAVAGE"):
			return true;
	}
	return false;
}

void func_149(int iParam0)
{
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		Local_350[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/].f_1 = iParam0;
	}
}

bool func_150()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (((!bLocal_301 && !bLocal_302) && !bLocal_303) && func_191(bLocal_339))
	{
		return false;
	}
	if (func_157())
	{
		return false;
	}
	if (func_156(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_75(PLAYER::PLAYER_ID()) || func_27())
	{
		return false;
	}
	if (Global_1316759)
	{
		return false;
	}
	iVar1 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 355471868);
	if ((iVar1 == 1 || iVar1 == 0) || PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
	{
		return false;
	}
	if (func_41("TUR_GR") || func_41("TUR_WATER"))
	{
		return false;
	}
	if ((((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_45()) && !func_44(0)) && !Global_1312791) && !Global_1315732)
	{
		if (func_155())
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 51) && iLocal_305 < 1)
			{
				func_146();
				func_48("BOMBGUN_BUSY", -1);
				iLocal_305++;
			}
		}
		else
		{
			iVar2 = 51;
			iVar3 = 0;
			if (Global_1319110 != -1 || Global_1319116 != -1)
			{
				iVar3 = 2;
				iVar2 = 176;
			}
			if (Global_1319110 != -1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(bLocal_339))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_1370236))
					{
						bLocal_339 = Global_1370236;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(bLocal_339))
			{
				if (!ENTITY::IS_ENTITY_DEAD(bLocal_339, false))
				{
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(bLocal_339, -1, false))
					{
						bLocal_341 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(bLocal_339, -1, false);
					}
				}
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(iVar3, iVar2))
			{
				func_144(&uLocal_322, 1, 0);
			}
			if (PAD::IS_CONTROL_JUST_RELEASED(iVar3, iVar2))
			{
				if (func_122(&uLocal_322))
				{
					if (func_121(&uLocal_322, 500, 1))
					{
						if (bLocal_327 == 0)
						{
							func_147(&uLocal_322);
							bLocal_327 = true;
						}
					}
					else if (bLocal_326 == 0)
					{
						if (func_154())
						{
							func_147(&uLocal_322);
							bLocal_326 = true;
						}
						else
						{
							func_147(&uLocal_322);
						}
					}
				}
			}
			else if (bLocal_327 == 0)
			{
				if (func_122(&uLocal_322))
				{
					if (func_121(&uLocal_322, 500, 1))
					{
						func_147(&uLocal_322);
						bLocal_327 = true;
					}
				}
			}
			if (!func_157())
			{
				if (((((PAD::IS_CONTROL_JUST_RELEASED(iVar3, iVar2) && !(bLocal_341 == PLAYER::PLAYER_PED_ID() && iLocal_295 == joaat("HUNTER"))) && !func_191(bLocal_339)) || (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iVar3, iVar2) && Global_1319110 != -1)) || (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iVar3, iVar2) && Global_1319116 != -1)) || bLocal_326)
				{
					bLocal_326 = false;
					if (func_151())
					{
						if (!MISC::IS_BIT_SET(Global_4456448.f_15, 12) && !Global_2460715)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(bLocal_339, false) && !func_42(bLocal_339, 0))
							{
								bVar0 = true;
								Global_2513487 = 1;
								Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_847 = 1;
							}
							else
							{
								if (!VEHICLE::IS_VEHICLE_DRIVEABLE(bLocal_339, false) && ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("AVENGER"))
								{
									bVar0 = true;
									Global_2513487 = 1;
									Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_847 = 1;
								}
								if (!VEHICLE::IS_VEHICLE_DRIVEABLE(bLocal_339, false) && ENTITY::GET_ENTITY_MODEL(bLocal_339) != joaat("AVENGER"))
								{
								}
							}
						}
						else
						{
							return false;
						}
					}
				}
			}
		}
	}
	if ((func_141(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID())) || func_125())
	{
		return bVar0;
	}
	if ((bLocal_301 || bLocal_302) || bLocal_303)
	{
		if (bVar0)
		{
		}
		return bVar0;
	}
	else if (func_179())
	{
		if (bVar0)
		{
			if (iLocal_295 != joaat("HUNTER"))
			{
				return bVar0;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}

bool func_151()
{
	if (Global_1319110 != -1 || Global_1319116 != -1)
	{
		if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_152(PLAYER::PLAYER_PED_ID(), 2106541073))
		{
			return false;
		}
		if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3))
		{
			return false;
		}
		if (func_27())
		{
			return false;
		}
	}
	if (func_124(3))
	{
		if (Global_1573352 == 185)
		{
			if (Global_1574442 != 0)
			{
				return false;
			}
		}
	}
	return true;
}

bool func_152(int iParam0, int iParam1)
{
	if (func_153(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_153(bool bParam0)
{
	if (func_123(bParam0))
	{
		if (!PED::IS_PED_INJURED(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_154()
{
	if (ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("VOLATOL") && bLocal_301)
	{
		return false;
	}
	return true;
}

bool func_155()
{
	if (func_191(bLocal_339))
	{
		return iLocal_329;
	}
	return false;
}

bool func_156(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_37(Global_2425662[iParam0 /*421*/].f_310.f_5) == 7;
			}
		}
	}
	return false;
}

bool func_157()
{
	if (!func_160(PLAYER::PLAYER_ID()))
	{
		if (func_41("BHH_LEFTRANGE"))
		{
			return true;
		}
		if (func_158(PLAYER::PLAYER_ID()) == 239)
		{
			return true;
		}
	}
	return false;
}

int func_158(int iParam0)
{
	if (func_159(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_159(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

bool func_160(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_15(iParam0, 1, 1))
		{
			return Global_2425662[iParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == PLAYER::PLAYER_ID()) && func_15(iParam0, 1, 0))
		{
			return Global_2425662[iParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

void func_161()
{
	if (ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("VOLATOL"))
	{
		func_163();
	}
	else
	{
		func_162();
	}
}

void func_162()
{
	if (!func_191(bLocal_339) || ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("AKULA"))
	{
		bLocal_327 = false;
		return;
	}
	if (bLocal_327)
	{
		func_146();
		bLocal_327 = false;
		if (bLocal_301)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(bLocal_339, 1, false))
			{
				TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(PLAYER::PLAYER_PED_ID(), bLocal_339, 0);
				iLocal_328 = 1;
			}
			else if (VEHICLE::IS_VEHICLE_SEAT_FREE(bLocal_339, 2, false))
			{
				TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(PLAYER::PLAYER_PED_ID(), bLocal_339, 1);
				iLocal_328 = 2;
			}
			else if (iLocal_304 < 1)
			{
				func_48("BOMBGUN_FULL", -1);
				iLocal_304++;
			}
		}
		else if (bLocal_302)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(bLocal_339, 2, false))
			{
				TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(PLAYER::PLAYER_PED_ID(), bLocal_339, 0);
				iLocal_328 = 2;
			}
			else if (VEHICLE::IS_VEHICLE_SEAT_FREE(bLocal_339, 0, false))
			{
				TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(PLAYER::PLAYER_PED_ID(), bLocal_339, 1);
				iLocal_328 = 0;
			}
			else if (iLocal_304 < 1)
			{
				func_48("BOMBGUN_FULL", -1);
				iLocal_304++;
			}
		}
		else if (bLocal_303)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(bLocal_339, 0, false))
			{
				TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(PLAYER::PLAYER_PED_ID(), bLocal_339, 0);
				iLocal_328 = 0;
			}
			else if (VEHICLE::IS_VEHICLE_SEAT_FREE(bLocal_339, 1, false))
			{
				TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(PLAYER::PLAYER_PED_ID(), bLocal_339, 1);
				iLocal_328 = 1;
			}
			else if (iLocal_304 < 1)
			{
				func_48("BOMBGUN_FULL", -1);
				iLocal_304++;
			}
		}
	}
	if (iLocal_328 != -2)
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(bLocal_339, iLocal_328, false) == PLAYER::PLAYER_PED_ID())
		{
			iLocal_329 = 0;
			iLocal_328 = -2;
			bLocal_297 = false;
		}
		else
		{
			iLocal_329 = 1;
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(bLocal_339, iLocal_328, false))
			{
				switch (iLocal_328)
				{
					case 0:
						func_48("BOMBGUN_1o", 1000);
						break;
					case 1:
						func_48("BOMBGUN_2o", 1000);
						break;
					case 2:
						func_48("BOMBGUN_3o", 1000);
						break;
				}
				iLocal_329 = 0;
				iLocal_328 = -2;
				bLocal_297 = false;
			}
		}
	}
}

void func_163()
{
	if (!func_191(bLocal_339))
	{
		bLocal_327 = false;
		return;
	}
	if (bLocal_327)
	{
		func_146();
		bLocal_327 = false;
		if (bLocal_302)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(bLocal_339, 2, false))
			{
				TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(PLAYER::PLAYER_PED_ID(), bLocal_339, 0);
				iLocal_328 = 2;
			}
			else if (iLocal_304 < 1)
			{
				func_48("BOMBGUN_FULL", -1);
				iLocal_304++;
			}
		}
		else if (bLocal_303)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(bLocal_339, 1, false))
			{
				TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(PLAYER::PLAYER_PED_ID(), bLocal_339, 1);
				iLocal_328 = 1;
			}
			else if (iLocal_304 < 1)
			{
				func_48("BOMBGUN_FULL", -1);
				iLocal_304++;
			}
		}
	}
	if (iLocal_328 != -2)
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(bLocal_339, iLocal_328, false) == PLAYER::PLAYER_PED_ID())
		{
			iLocal_329 = 0;
			iLocal_328 = -2;
			bLocal_297 = false;
		}
		else
		{
			iLocal_329 = 1;
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(bLocal_339, iLocal_328, false))
			{
				switch (iLocal_328)
				{
					case 1:
						func_48("BOMBGUN_2o", 1000);
						break;
					case 2:
						func_48("BOMBGUN_1o", 1000);
						break;
				}
				iLocal_329 = 0;
				iLocal_328 = -2;
				bLocal_297 = false;
			}
		}
	}
}

void func_164()
{
	bool bVar0;

	if (!func_170())
	{
		return;
	}
	if ((MISC::IS_BIT_SET(Global_4456448.f_15, 12) || Global_2460715) || Global_1315732)
	{
		return;
	}
	if (func_157())
	{
		return;
	}
	if (((bLocal_339 != Global_2537071.f_4535 || Global_1319110 != -1) || func_191(bLocal_339)) || Global_1319116 != -1)
	{
		if (!bLocal_297 || Global_1319110 != -1)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if ((bLocal_301 || bLocal_302) || bLocal_303)
				{
					if (iLocal_295 == joaat("BUZZARD") || iLocal_295 == joaat("SAVAGE"))
					{
						if (func_110(PLAYER::PLAYER_ID(), 19))
						{
							if (!func_109())
							{
								bVar0 = true;
							}
						}
						if (!bVar0)
						{
							func_48("HUNTGUN_1", -1);
						}
					}
					else if (iLocal_295 == joaat("VALKYRIE"))
					{
						if (func_110(PLAYER::PLAYER_ID(), 19))
						{
							if (!func_109())
							{
								bVar0 = true;
							}
						}
						if (!bVar0)
						{
							func_48("HUNTGUN_1c", -1);
						}
					}
					else if (iLocal_295 == joaat("HUNTER"))
					{
						if (func_110(PLAYER::PLAYER_ID(), 19))
						{
							if (!func_109())
							{
								bVar0 = true;
							}
						}
						if (!bVar0)
						{
							func_48("HUNTGUNH_1c", -1);
						}
					}
					else if (Global_1319110 != -1)
					{
					}
					else if (func_191(bLocal_339))
					{
						if (!func_156(PLAYER::PLAYER_ID()))
						{
							if (iLocal_295 == joaat("AKULA"))
							{
								if (bLocal_301)
								{
									func_48("AKULAGUN_1", -1);
								}
								else if (bLocal_302)
								{
									func_48("AKULAGUN_2", -1);
								}
								else if (bLocal_303)
								{
									func_48("AKULAGUN_2", -1);
								}
							}
							else if (iLocal_295 == joaat("VOLATOL"))
							{
								if (bLocal_302)
								{
									if (!bLocal_319)
									{
										func_48("VOLGUN_1c2", -1);
									}
									else
									{
										func_48("VOLGUN_1c", -1);
									}
								}
								else if (bLocal_303)
								{
									if (!bLocal_315)
									{
										func_48("VOLGUN_2c1", -1);
									}
									else
									{
										func_48("VOLGUN_2c", -1);
									}
								}
							}
							else if (bLocal_301)
							{
								if (!bLocal_315)
								{
									func_48("BOMBGUN_1c1", -1);
								}
								else if (!bLocal_319)
								{
									func_48("BOMBGUN_1c2", -1);
								}
								else
								{
									func_48("BOMBGUN_1c", -1);
								}
							}
							else if (bLocal_302)
							{
								if (!bLocal_319)
								{
									func_48("BOMBGUN_2c2", -1);
								}
								else if (!bLocal_308)
								{
									func_48("BOMBGUN_2c1", -1);
								}
								else
								{
									func_48("BOMBGUN_2c", -1);
								}
							}
							else if (bLocal_303)
							{
								if (!bLocal_308)
								{
									func_48("BOMBGUN_3c1", -1);
								}
								else if (!bLocal_315)
								{
									func_48("BOMBGUN_3c2", -1);
								}
								else
								{
									func_48("BOMBGUN_3c", -1);
								}
							}
						}
					}
					else
					{
						func_48("HUNTGUN_1b", -1);
					}
					bLocal_297 = true;
				}
				else if ((((func_179() && !Global_2460715.f_132) && !Global_1315732) && iLocal_295 != joaat("HUNTER")) && !func_191(bLocal_339))
				{
					if (iLocal_295 == joaat("BUZZARD") || iLocal_295 == joaat("SAVAGE"))
					{
						func_48("HUNTGUN_3", -1);
					}
					else if (iLocal_295 == joaat("VALKYRIE"))
					{
						func_48("HUNTGUN_3c", -1);
					}
					else
					{
						func_48("HUNTGUN_3b", -1);
					}
					bLocal_297 = true;
				}
			}
			else if (func_41("VEX_EYEHLPe"))
			{
				bLocal_297 = true;
			}
		}
		else if (func_169(PLAYER::PLAYER_ID(), 1) || func_166(PLAYER::PLAYER_ID(), 1, 0))
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!bLocal_300)
				{
					if (!bLocal_301)
					{
						if (func_165())
						{
							bLocal_300 = true;
							Global_2537071.f_4535 = bLocal_339;
						}
					}
					else
					{
						bLocal_300 = true;
						Global_2537071.f_4535 = bLocal_339;
					}
				}
			}
		}
		else
		{
			bLocal_300 = true;
			Global_2537071.f_4535 = bLocal_339;
		}
	}
	else
	{
		bLocal_297 = true;
		bLocal_300 = true;
	}
}

bool func_165()
{
	return false;
}

int func_166(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_167(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0 /*876*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_167(int iParam0)
{
	return func_168(iParam0);
}

bool func_168(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_13.f_1, 0);
}

int func_169(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_167(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_1590535[iParam0 /*876*/] == 2 || Global_1590535[iParam0 /*876*/] == 1) || Global_1590535[iParam0 /*876*/] == 0) || Global_1590535[iParam0 /*876*/] == 3) || Global_1590535[iParam0 /*876*/] == 8)
	{
		return 1;
	}
	return 0;
}

bool func_170()
{
	return ((((((((((((!bLocal_297 && !func_156(PLAYER::PLAYER_ID())) && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && CAM::IS_SCREEN_FADED_IN()) && !HUD::IS_RADAR_HIDDEN()) && HUD::IS_MINIMAP_RENDERING()) && !func_45()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !NETWORK::NETWORK_SET_IN_MP_CUTSCENE()) && !func_171()) && !func_39(PLAYER::PLAYER_ID()));
}

bool func_171()
{
	return Global_1676377.f_474;
}

void func_172()
{
	if (MISC::IS_PC_VERSION())
	{
		if (bLocal_355 == 1)
		{
			PAD::_RESET_INPUT_MAPPING_SCHEME();
			bLocal_355 = false;
		}
	}
}

void func_173()
{
	func_174();
	if (ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("AKULA") && (bLocal_302 || bLocal_303))
	{
		if (Local_350[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/].f_1 == 2)
		{
			if (iLocal_360 == 0)
			{
				switch (iLocal_356)
				{
					case 0:
						GRAPHICS::SET_NIGHTVISION(false);
						if (GRAPHICS::GET_USINGSEETHROUGH())
						{
							GRAPHICS::_SEETHROUGH_SET_MAX_THICKNESS(Global_1661288);
							Global_1661288 = -1f;
							GRAPHICS::SET_SEETHROUGH(false);
						}
						break;
					case 1:
						GRAPHICS::SET_NIGHTVISION(true);
						if (GRAPHICS::GET_USINGSEETHROUGH())
						{
							GRAPHICS::_SEETHROUGH_SET_MAX_THICKNESS(Global_1661288);
							Global_1661288 = -1f;
							GRAPHICS::SET_SEETHROUGH(false);
						}
						break;
					case 2:
						GRAPHICS::SET_NIGHTVISION(false);
						GRAPHICS::SET_SEETHROUGH(true);
						Global_1661288 = GRAPHICS::_SEETHROUGH_GET_MAX_THICKNESS();
						GRAPHICS::_SEETHROUGH_SET_MAX_THICKNESS(0.5f);
						break;
				}
				iLocal_360 = 1;
			}
		}
		else if (iLocal_356 != 0)
		{
			GRAPHICS::SET_NIGHTVISION(false);
			if (GRAPHICS::GET_USINGSEETHROUGH())
			{
				GRAPHICS::_SEETHROUGH_SET_MAX_THICKNESS(Global_1661288);
				Global_1661288 = -1f;
				GRAPHICS::SET_SEETHROUGH(false);
			}
			iLocal_356 = 0;
		}
	}
}

void func_174()
{
	if (ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("AKULA") && (bLocal_302 || bLocal_303))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, 226))
		{
			if (iLocal_356 == 2)
			{
				iLocal_356 = 0;
			}
			else
			{
				iLocal_356++;
			}
			iLocal_360 = 0;
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(0, 227))
		{
			if (iLocal_356 == 0)
			{
				iLocal_356 = 2;
			}
			else
			{
				iLocal_356 = (iLocal_356 - 1);
			}
			iLocal_360 = 0;
		}
	}
}

void func_175()
{
	switch (iLocal_295)
	{
		case joaat("AKULA"):
			return;
		default:
			break;
	}
	if (MISC::IS_BIT_SET(Global_4456448.f_15, 12) || Global_2460715)
	{
		return;
	}
	if (bLocal_343 == PLAYER::PLAYER_ID() && iLocal_295 != joaat("BOMBUSHKA"))
	{
		if (func_176(bLocal_339))
		{
			if ((bLocal_310 && !bLocal_299) && (PAD::IS_CONTROL_JUST_PRESSED(0, 99) || PAD::IS_CONTROL_JUST_PRESSED(0, 100)))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_48("HUNTGUN_8", -1);
					bLocal_299 = true;
				}
			}
		}
	}
}

bool func_176(bool bParam0)
{
	int iVar0;

	iVar0 = ENTITY::GET_ENTITY_MODEL(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(bParam0));
	if (ENTITY::GET_ENTITY_MODEL(bParam0) == joaat("AKULA"))
	{
		return true;
	}
	if (Global_2462227)
	{
		return false;
	}
	if (iVar0 == joaat("BUZZARD"))
	{
		return true;
	}
	if (iVar0 == joaat("SAVAGE"))
	{
		return true;
	}
	if (Global_1319110 != -1 && MISC::IS_BIT_SET(Global_4456448.f_25, 7))
	{
		return true;
	}
	if (Global_1319110 != -1 && !func_43(Global_1590374))
	{
		return true;
	}
	if (func_191(bParam0))
	{
		return true;
	}
	if (Global_1319116 != -1)
	{
		return true;
	}
	return false;
}

void func_177()
{
	if (ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("AKULA") && (bLocal_302 || bLocal_303))
	{
		return;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(bLocal_339, false))
	{
		if (!ENTITY::IS_ENTITY_IN_AIR(bLocal_339))
		{
			if (func_191(bLocal_339))
			{
				if (func_178())
				{
					if (bLocal_302)
					{
						if (Local_73.f_214 == 0)
						{
							Local_73.f_214 = 1;
						}
					}
				}
				else if (Local_73.f_214 == 1)
				{
					Local_73.f_214 = 0;
				}
			}
			else if (func_179())
			{
				Local_73.f_214 = 1;
			}
			else
			{
				CAM::_CLAMP_GAMEPLAY_CAM_PITCH(-25f, 6f);
				Local_73.f_214 = 0;
			}
		}
		else
		{
			Local_73.f_214 = 0;
		}
	}
}

bool func_178()
{
	int iVar0;

	if (bLocal_315)
	{
		if (!bLocal_316)
		{
			iVar0 = iLocal_317;
			if (iVar0 != -1)
			{
				return Global_1590535[iVar0 /*876*/].f_732;
			}
		}
	}
	return false;
}

bool func_179()
{
	bool bVar0;

	if (bLocal_308)
	{
		if (!bLocal_309)
		{
			bVar0 = bLocal_344;
			if (bVar0 != -1)
			{
				return Global_1590535[bVar0 /*876*/].f_732;
			}
		}
	}
	return false;
}

bool func_180()
{
	if (func_141(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

bool func_181(var uParam0)
{
	if (uParam0->f_1 == 1)
	{
		return true;
	}
	return false;
}

void func_182()
{
	if (func_122(&uLocal_324))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, true);
		Global_1319117 = 1;
		if (func_121(&uLocal_324, 1000, 1))
		{
			func_147(&uLocal_324);
			Global_1319117 = 0;
		}
	}
}

void func_183()
{
	bool bVar0;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		bVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (((ENTITY::DOES_ENTITY_EXIST(bVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(bVar0, false)) && func_191(bVar0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bVar0))
		{
			VEHICLE::_0x78CEEE41F49F421F(bVar0, 0);
		}
	}
}

void func_184()
{
	PAD::DISABLE_CONTROL_ACTION(0, 24, true);
	PAD::DISABLE_CONTROL_ACTION(0, 66, true);
	PAD::DISABLE_CONTROL_ACTION(0, 67, true);
	PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	PAD::DISABLE_CONTROL_ACTION(0, 114, true);
	PAD::DISABLE_CONTROL_ACTION(0, 69, true);
	PAD::DISABLE_CONTROL_ACTION(0, 70, true);
	PAD::DISABLE_CONTROL_ACTION(0, 91, true);
	PAD::DISABLE_CONTROL_ACTION(0, 92, true);
	PAD::DISABLE_CONTROL_ACTION(0, 99, true);
	PAD::DISABLE_CONTROL_ACTION(0, 100, true);
	PAD::DISABLE_CONTROL_ACTION(0, 37, true);
}

int func_185(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/];
	}
	return -1;
}

void func_186()
{
	if (ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("AKULA") || ENTITY::GET_ENTITY_MODEL(bLocal_339) == joaat("PHANTOM3"))
	{
		if (bLocal_302 || bLocal_303)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 24, true);
			PAD::DISABLE_CONTROL_ACTION(0, 66, true);
			PAD::DISABLE_CONTROL_ACTION(0, 67, true);
			PAD::DISABLE_CONTROL_ACTION(0, 114, true);
			PAD::DISABLE_CONTROL_ACTION(0, 69, true);
			PAD::DISABLE_CONTROL_ACTION(0, 91, true);
			PAD::DISABLE_CONTROL_ACTION(0, 92, true);
		}
	}
}

void func_187()
{
	if (func_125())
	{
		if ((((Local_350[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/].f_1 == 1 || Local_350[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/].f_1 == 2) || Global_1319116 != -1) && CAM::DOES_CAM_EXIST(Local_73.f_32)) && CAM::IS_CAM_RENDERING(Local_73.f_32))
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(CAM::GET_CAM_COORD(Local_73.f_32), CAM::GET_CAM_ROT(Local_73.f_32, 2));
			}
		}
	}
}

void func_188()
{
	int iVar0;

	iVar0 = -1;
	if (Global_1319116 != -1 && func_124(3))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, 226))
		{
			iVar0 = func_26(1);
			Local_73.f_186 = { 0f, 0f, 0f };
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(0, 227))
		{
			iVar0 = func_26(0);
			Local_73.f_186 = { 0f, 0f, 0f };
		}
	}
	if (func_25(iVar0))
	{
		func_189(iVar0);
	}
}

void func_189(int iParam0)
{
	Global_1319116 = iParam0;
	Local_73.f_35 = 0;
	func_147(&uLocal_292);
}

void func_190()
{
	int iVar0;

	iVar0 = -1;
	if (Global_1319116 != -1 && (func_141(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID())))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, 226))
		{
			iVar0 = func_22(0);
			Local_73.f_186 = { 0f, 0f, 0f };
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(0, 227))
		{
			iVar0 = func_22(1);
			Local_73.f_186 = { 0f, 0f, 0f };
		}
	}
	if (func_21(iVar0))
	{
		func_189(iVar0);
	}
}

bool func_191(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	switch (iVar0)
	{
		case joaat("BOMBUSHKA"):
		case joaat("VOLATOL"):
		case joaat("AKULA"):
			return true;
		default:
			break;
	}
	return false;
}

void func_192(int iParam0)
{
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		Local_350[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/] = iParam0;
	}
}

bool func_193(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[iParam0 /*421*/].f_310.f_8 != func_17())
			{
				return func_37(Global_2425662[iParam0 /*421*/].f_310.f_5) == 5;
			}
		}
	}
	return false;
}

void func_194(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::_0xBA7F0B77D80A4EB7();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

bool func_195()
{
	if (((func_207(joaat("HUNTER")) && func_123(bLocal_341)) && bLocal_341 == PLAYER::PLAYER_PED_ID()) && !func_123(bLocal_342))
	{
		return true;
	}
	if (func_215())
	{
		return true;
	}
	if (func_197(0))
	{
		return true;
	}
	if (Global_1661981)
	{
		return true;
	}
	if (!func_124(3))
	{
		if (Global_1312791)
		{
			return true;
		}
	}
	if (Global_1319109)
	{
		return true;
	}
	if (Global_1574191)
	{
		return true;
	}
	if (Global_1574397)
	{
		return true;
	}
	if (Global_1662006)
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_210();
	}
	if (func_196())
	{
		return true;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	if (func_69())
	{
		return true;
	}
	if (func_193(PLAYER::PLAYER_ID()) || func_142(PLAYER::PLAYER_ID()))
	{
		if (Global_1319110 == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_141(PLAYER::PLAYER_ID()) || func_140(PLAYER::PLAYER_ID()))
	{
		if (Global_1319116 == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_125())
	{
		if (Global_1319116 == -1)
		{
			return true;
		}
	}
	return false;
}

bool func_196()
{
	return Global_1312877;
}

bool func_197(bool bParam0)
{
	if (func_206())
	{
		if (bParam0)
		{
			if (!Global_1574405 && !func_110(PLAYER::PLAYER_ID(), 2))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, true);
				func_198(0, 0);
			}
		}
		return true;
	}
	return false;
}

void func_198(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_203(1, 0, 1);
	}
	else
	{
		func_199(iParam1);
	}
}

void func_199(int iParam0)
{
	func_202();
	if (iParam0 == 0)
	{
		if (LOADINGSCREEN::_LOADINGSCREEN_GET_LOAD_FREEMODE())
		{
			return;
		}
	}
	if (func_201() == 0 || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_200(1);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
	}
}

void func_200(int iParam0)
{
	if (Global_1312467.f_20 != iParam0)
	{
		Global_1312467.f_20 = iParam0;
	}
}

int func_201()
{
	return Global_1312467.f_20;
}

void func_202()
{
	Global_2462226 = 1;
}

void func_203(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_204())
	{
		return;
	}
	if ((func_201() == 1 || HUD::IS_PAUSE_MENU_ACTIVE()) || bParam0)
	{
		func_200(0);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		if (!bParam1)
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		}
		if (bParam2)
		{
			GRAPHICS::RESET_PAUSED_RENDERPHASES();
		}
	}
}

bool func_204()
{
	if (func_205())
	{
		return Global_2460590;
	}
	return false;
}

bool func_205()
{
	if (Global_2460583)
	{
		return Global_2460582;
	}
	return false;
}

bool func_206()
{
	return Global_2439138.f_2;
}

bool func_207(int iParam0)
{
	return (iLocal_340 == iParam0 && iParam0 != 0);
}

void func_208()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iLocal_340 = 0;
	bLocal_306 = false;
	bLocal_307 = true;
	bLocal_316 = true;
	bLocal_320 = true;
	bLocal_308 = false;
	bLocal_309 = true;
	bLocal_341 = -1;
	bLocal_342 = -1;
	bLocal_343 = func_17();
	bLocal_344 = func_17();
	bLocal_301 = false;
	Global_1574315 = func_17();
	bLocal_311 = false;
	bLocal_314 = -1;
	bLocal_315 = false;
	iLocal_317 = func_17();
	bLocal_318 = -1;
	bLocal_319 = false;
	iLocal_321 = func_17();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(bLocal_339) && VEHICLE::IS_VEHICLE_DRIVEABLE(bLocal_339, false))
			{
				iLocal_340 = ENTITY::GET_ENTITY_MODEL(bLocal_339);
				bLocal_311 = true;
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(bLocal_339, -1, false))
				{
					bLocal_341 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(bLocal_339, -1, false);
					bLocal_306 = ENTITY::DOES_ENTITY_EXIST(bLocal_341);
					if (bLocal_306)
					{
						bLocal_307 = ENTITY::IS_ENTITY_DEAD(bLocal_341, false);
						if (PED::IS_PED_A_PLAYER(bLocal_341))
						{
							bLocal_343 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(bLocal_341);
						}
					}
				}
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(bLocal_339, 0, false))
				{
					bLocal_342 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(bLocal_339, 0, false);
					bLocal_308 = ENTITY::DOES_ENTITY_EXIST(bLocal_342);
					if (bLocal_308)
					{
						bLocal_309 = ENTITY::IS_ENTITY_DEAD(bLocal_342, false);
						if (func_209(bLocal_342, bLocal_339, 0) && PED::IS_PED_IN_VEHICLE(bLocal_342, bLocal_339, false))
						{
							if (PED::IS_PED_A_PLAYER(bLocal_342))
							{
								bLocal_344 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(bLocal_342);
								if (bLocal_344 == PLAYER::PLAYER_ID())
								{
									bLocal_301 = true;
									if (func_191(bLocal_339))
									{
										Global_1319115 = 0;
									}
								}
								else
								{
									bLocal_301 = false;
								}
							}
						}
					}
				}
				else
				{
					bLocal_342 = -1;
					bLocal_308 = false;
					bLocal_301 = false;
				}
				if (func_191(bLocal_339))
				{
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(bLocal_339, 1, false))
					{
						bLocal_314 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(bLocal_339, 1, false);
						bLocal_315 = ENTITY::DOES_ENTITY_EXIST(bLocal_314);
						if (bLocal_315)
						{
							bLocal_316 = ENTITY::IS_ENTITY_DEAD(bLocal_314, false);
							if (func_209(bLocal_314, bLocal_339, 1) && PED::IS_PED_IN_VEHICLE(bLocal_314, bLocal_339, false))
							{
								if (PED::IS_PED_A_PLAYER(bLocal_314))
								{
									iLocal_317 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(bLocal_314);
									if (iLocal_317 == PLAYER::PLAYER_ID())
									{
										Global_1319115 = 1;
										bLocal_302 = true;
									}
									else
									{
										bLocal_302 = false;
									}
								}
							}
						}
					}
					else
					{
						bLocal_314 = -1;
						bLocal_315 = false;
						bLocal_302 = false;
					}
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(bLocal_339, 2, false))
					{
						bLocal_318 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(bLocal_339, 2, false);
						bLocal_319 = ENTITY::DOES_ENTITY_EXIST(bLocal_318);
						if (bLocal_319)
						{
							bLocal_320 = ENTITY::IS_ENTITY_DEAD(bLocal_318, false);
							if (func_209(bLocal_318, bLocal_339, 2) && PED::IS_PED_IN_VEHICLE(bLocal_318, bLocal_339, false))
							{
								if (PED::IS_PED_A_PLAYER(bLocal_318))
								{
									iLocal_321 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(bLocal_318);
									if (iLocal_321 == PLAYER::PLAYER_ID())
									{
										Global_1319115 = 2;
										bLocal_303 = true;
									}
									else
									{
										bLocal_303 = false;
									}
								}
							}
						}
					}
					else
					{
						bLocal_303 = false;
						bLocal_319 = false;
						bLocal_318 = -1;
					}
				}
				if (bLocal_344 == PLAYER::PLAYER_ID())
				{
					if (!bLocal_307)
					{
						Global_1574315 = bLocal_343;
					}
				}
				else if (!bLocal_309)
				{
					Global_1574315 = bLocal_344;
				}
			}
		}
	}
	if (Global_1319110 != -1)
	{
		bLocal_309 = false;
		bLocal_344 = PLAYER::PLAYER_ID();
		if (bLocal_344 == PLAYER::PLAYER_ID())
		{
			bLocal_301 = true;
		}
	}
}

bool func_209(bool bParam0, bool bParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0, false) && !ENTITY::IS_ENTITY_DEAD(bParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(bParam0, bParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(bParam1, iParam2, false) == bParam0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_210()
{
	bool bVar0;

	func_145(0);
	func_172();
	func_214();
	if (MISC::IS_BIT_SET(iLocal_330, 0))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, MISC::IS_BIT_SET(iLocal_330, 1));
	}
	if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_847)
	{
		HUD::UNLOCK_MINIMAP_POSITION();
	}
	Global_2513487 = 0;
	Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_847 = 0;
	func_71();
	func_146();
	Global_1319109 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(bLocal_339))
	{
		if (bLocal_341 == PLAYER::PLAYER_PED_ID() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_339))
		{
			VEHICLE::DISABLE_VEHICLE_WEAPON(false, joaat("VEHICLE_WEAPON_SPACE_ROCKET"), bLocal_339, PLAYER::PLAYER_PED_ID());
		}
	}
	Global_1319117 = 0;
	func_71();
	func_213();
	if (HUD::DOES_BLIP_EXIST(iLocal_345))
	{
		HUD::REMOVE_BLIP(&iLocal_345);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_346))
	{
		HUD::REMOVE_BLIP(&iLocal_346);
	}
	if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
	{
		HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 255);
	}
	func_135(&Local_73, bVar0, 0, bLocal_339, 1);
	Global_2547057 = 0;
	Global_1319111 = 0;
	Global_1573326 = 0;
	Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_732 = 0;
	if ((Global_1319110 != -1 || func_191(bLocal_339)) || Global_1319116 != -1)
	{
		HUD::UNLOCK_MINIMAP_POSITION();
		Global_1319110 = -1;
		Global_1319115 = -1;
		Global_1319116 = -1;
	}
	if (iLocal_294 == 1)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	AUDIO::STOP_AUDIO_SCENE("CAR_2_HELI_FILTERING");
	func_212();
	func_147(&uLocal_292);
	func_211();
}

void func_211()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_212()
{
	if (iLocal_331 != 0)
	{
		AUDIO::STOP_AUDIO_SCENE(func_5(iLocal_331));
	}
	if (Local_73.f_211 != -1)
	{
		AUDIO::STOP_SOUND(Local_73.f_211);
		AUDIO::RELEASE_SOUND_ID(Local_73.f_211);
		Local_73.f_211 = -1;
	}
	if (iLocal_338 != 99 && iLocal_338 > 0)
	{
		AUDIO::STOP_AUDIO_SCENE("MP_HELI_CAM_FILTERING");
		iLocal_338 = 99;
	}
}

void func_213()
{
	if (bLocal_301)
	{
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false);
	}
}

void func_214()
{
	if (iLocal_356 != 0)
	{
		GRAPHICS::SET_NIGHTVISION(false);
		if (GRAPHICS::GET_USINGSEETHROUGH())
		{
			GRAPHICS::_SEETHROUGH_SET_MAX_THICKNESS(Global_1661288);
			Global_1661288 = -1f;
			GRAPHICS::SET_SEETHROUGH(false);
		}
		iLocal_356 = 0;
	}
}

bool func_215()
{
	var uVar0;

	func_222(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return true;
		}
	}
	if (func_221())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_220())
	{
		return true;
	}
	if (func_219(159))
	{
		if (!func_218())
		{
			return true;
		}
	}
	if (func_219(157))
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	if (func_216() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_216()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_216()
{
	switch (func_67())
	{
		case 0:
			return func_217();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_217()
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

bool func_218()
{
	return Global_2450632.f_598;
}

bool func_219(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_220()
{
	return Global_2460680;
}

bool func_221()
{
	return Global_2450632.f_593;
}

void func_222(var uParam0)
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
					func_223(iVar0);
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

void func_223(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_15(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_224(iVar4, &bVar5))
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

bool func_224(int iParam0, bool bParam1)
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
					*bParam1 = 1;
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

void func_225()
{
	SYSTEM::WAIT(0);
}

void func_226(struct<21> Param0)
{
	func_230(func_231(Param0), Param0);
	func_228(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&iLocal_349, 1);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_350, 5);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), false))
				{
					iLocal_295 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()));
					bLocal_339 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
					iLocal_296 = joaat("W_LR_RPG_ROCKET");
					if (iLocal_296 != 0)
					{
						STREAMING::REQUEST_MODEL(iLocal_296);
					}
				}
			}
		}
	}
	if (Global_1319110 != -1 || Global_1319116 != -1)
	{
		if (func_193(PLAYER::PLAYER_ID()) || func_142(PLAYER::PLAYER_ID()))
		{
			if (MISC::IS_BIT_SET(Global_4456448.f_25, 7))
			{
				if (bLocal_339 != Global_2537071.f_305)
				{
					bLocal_339 = Global_2537071.f_305;
				}
			}
			else if (bLocal_339 != Global_1370236)
			{
				bLocal_339 = Global_1370236;
			}
		}
		else if (func_141(PLAYER::PLAYER_ID()))
		{
			bLocal_339 = Global_1370251;
			if (ENTITY::DOES_ENTITY_EXIST(bLocal_339))
			{
			}
		}
		else if (func_140(PLAYER::PLAYER_ID()))
		{
			bLocal_339 = Global_2537071.f_307;
			if (ENTITY::DOES_ENTITY_EXIST(bLocal_339))
			{
			}
		}
		else if (func_75(PLAYER::PLAYER_ID()) || func_124(3))
		{
			bLocal_339 = Global_1676352;
		}
		if (func_140(PLAYER::PLAYER_ID()) || func_141(PLAYER::PLAYER_ID()))
		{
			Local_73.f_38 = 40f;
		}
	}
	if (!func_227())
	{
		func_210();
	}
	func_192(0);
}

bool func_227()
{
	int iVar0;

	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return false;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return true;
		}
		if (func_221())
		{
			return false;
		}
		if (func_219(157))
		{
			return false;
		}
		if (iVar0 >= 3600)
		{
			return false;
		}
		SYSTEM::WAIT(0);
	}
	return false;
}

int func_228(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_211();
			}
			else
			{
				return 0;
			}
		}
		if (!func_229())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_211();
					}
					else
					{
						return 0;
					}
				}
				if (func_221())
				{
					if (!bParam2)
					{
						func_211();
					}
					else
					{
						return 0;
					}
				}
				if (func_219(157))
				{
					if (!bParam2)
					{
						func_211();
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
					func_211();
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
				func_211();
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
			func_211();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_229()
{
	return Global_1312854;
}

void func_230(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_211();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		case 1:
			return 32;
		case 32:
			return 32;
		case 33:
			return 32;
		case 34:
			return 32;
		case 35:
			return 32;
		case 36:
			return 32;
		case 37:
			return 32;
		case 38:
			return 32;
		case 39:
			return 32;
		case 40:
			return 32;
		case 41:
			return 32;
		case 42:
			return 32;
		case 43:
			return 32;
		case 44:
			return 32;
		case 45:
			return 32;
		case 46:
			return 32;
		case 47:
			return 32;
		case 48:
			return 32;
		case 49:
			return 32;
		case 50:
			return 4;
		case 51:
			return 32;
		case 52:
			return 32;
		case 53:
			return 32;
		case 54:
			return 32;
		case 55:
			return 32;
		case 56:
			return 32;
		case 57:
			return 32;
		case 58:
			return 32;
		case 59:
			return 32;
		case 60:
			return 32;
		case 61:
			return 32;
		case 62:
			return 32;
		case 63:
			return 32;
		case 64:
			return 4;
		case 65:
			return 32;
		case 66:
			return 4;
		case 67:
			return 4;
		case 68:
			return 32;
		case 69:
			return 32;
		case 70:
			return 4;
		case 71:
			return 32;
		case 72:
			return 32;
		case 73:
		case 74:
			return 4;
		case 75:
			return 32;
		case 76:
			return 32;
		case 77:
			return 32;
		case 78:
			return 32;
		case 79:
			return 32;
		case 80:
			return 32;
		case 81:
			return 32;
		case 82:
			return 32;
		case 84:
			return 32;
		case 83:
			return 32;
		case 85:
			return 32;
		case 86:
			return 8;
		case 87:
			return 32;
		case 88:
			return 32;
		case 89:
			return 32;
		case 90:
			return 32;
		case 91:
			return 8;
		case 92:
			return 32;
		case 93:
			return 8;
		case 94:
			return 8;
		case 102:
			return 8;
		case 95:
			return 8;
		case 96:
			return 32;
		case 97:
			return 32;
		case 98:
			return 32;
		case 99:
			return 8;
		case 100:
			return 32;
		case 101:
			return 32;
		case 103:
			return 32;
		case 104:
			return 32;
		case 105:
			return 32;
		case 106:
			return 8;
		case 107:
			return 8;
		case 108:
			return 8;
		case 109:
			return 8;
		case 110:
			return 8;
		case 111:
			return 8;
		case 112:
			return 8;
		case 113:
			return 8;
		case 114:
			return 32;
		case 115:
			return 8;
		case 116:
			return 8;
		case 117:
			return 8;
		case 118:
			return 8;
		case 119:
			return 32;
		case 120:
			return 32;
		case 121:
			return 32;
		case 122:
			return 32;
		case 123:
			return 8;
		case 124:
			return 8;
		case 125:
			return 8;
		case 126:
			return 8;
		case 127:
			return 32;
		case 128:
			return 32;
		case 129:
			return 32;
		case 12:
			return 32;
		case 4:
			return 16;
		case 13:
			return 32;
		case 5:
			return 16;
		case 6:
			return 2;
		case 8:
			return 2;
		case 9:
			return 2;
		case 7:
			return 16;
		case 10:
			return 2;
		case 11:
			return 4;
		case 15:
			return 32;
		case 16:
			return 32;
		case 27:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 18:
			return 32;
		case 28:
			return 32;
		case 29:
			return 2;
		case 30:
			return 32;
		case 31:
			return 32;
		case 17:
			return 2;
		case 130:
			return 32;
		case 131:
			return 32;
		case 19:
			return 32;
		case 22:
			return 32;
		case 23:
			return 32;
		case 24:
			return 32;
		case 20:
			return 2;
		case 0:
			return 0;
		case 21:
			return 32;
		case 142:
			return 32;
		case 143:
			return 32;
		case 132:
			return 32;
		case 133:
			return 32;
		case 137:
			return 32;
		case 135:
			return 32;
		case 136:
			return 32;
		case 140:
			return 32;
		case 141:
			return 32;
		case 138:
			return 32;
		case 139:
			return 32;
		case 144:
			return 32;
		case 145:
			return 32;
		case 146:
			return 32;
		case 147:
			return 32;
		case 148:
			return 2;
		case 153:
			return 1;
		case 149:
			return 2;
		case 150:
			return 4;
		case 151:
			return 2;
		case 152:
			return 2;
		case 134:
			return 1;
		case 154:
			return 2;
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		case 176:
			return 1;
		case 161:
			return 4;
		case 164:
			return 4;
		case 165:
			return 1;
		case 166:
			return 1;
		case 172:
			return 1;
		case 168:
			return 2;
		case 173:
			return 1;
		case 169:
			return 1;
		case 167:
			return 2;
		case 170:
			return 8;
		case 171:
			return 8;
		case 174:
			return 1;
		case 162:
			return 16;
		case 163:
			return 32;
		default:
			break;
	}
	return 0;
}

