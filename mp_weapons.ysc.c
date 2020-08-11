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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66[56] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;

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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_64 = 4;
	iLocal_65 = 12;
	if (func_159() == 2)
	{
		while (true)
		{
			SYSTEM::WAIT(0);
		}
	}
	HUD::_LOG_DEBUG_INFO(1);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_1312436 = 1;
	iVar0 = 0;
	Global_1375642.f_281 = 1;
	Global_1373206.f_1 = 0;
	Global_1373206.f_3 = 0;
	Global_1373206.f_5 = 0;
	func_157(&Global_1375642);
	func_156(&Global_1375642);
	func_155(&Global_1375642);
	func_151();
	func_150(0, &Global_1375642);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(337714004);
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(-1884422346);
	HUD::_0x4895BDEA16E7C080(0);
	func_149();
	iVar5 = 1;
	switch (iScriptParam_0)
	{
		case 3:
			while (iVar0 == 0)
			{
				SYSTEM::WAIT(0);
				if (iVar5 == 1)
				{
					if (iVar6 == 0)
					{
						if (HUD::IS_FRONTEND_READY_FOR_CONTROL())
						{
							HUD::_0xEC9264727EEC0F28();
							iVar6 = 1;
						}
					}
				}
				if (func_148(201))
				{
					if (iVar5 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						Global_1373206.f_1 = 0;
						Global_1373206.f_3 = 0;
						iVar5 = 1;
						func_150(0, &Global_1375642);
						func_156(&Global_1375642);
						func_155(&Global_1375642);
						func_147(&Global_1375642, &Global_1373206);
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
				}
				if (iVar5 == 0)
				{
					if (func_148(189) || func_148(190))
					{
						iVar0 = 1;
					}
				}
				if (func_148(202))
				{
					func_145();
					if (iVar5 == 1)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(337714004);
						HUD::_0x4895BDEA16E7C080(0);
						func_156(&Global_1375642);
						func_155(&Global_1375642);
						func_150(-1, &Global_1375642);
						iVar5 = 0;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						iVar0 = 1;
						HUD::_0x14621BB1DF14E2B2();
					}
				}
				if (HUD::_0xF284AC67940C6812())
				{
					HUD::_0x36C1451A88A09630(&iVar2, &uVar3);
				}
				if (HUD::_0x2E22FEFA0100275E())
				{
					HUD::_0x7E17BE53E1AAABAF(&uVar1, &iVar2, &uVar3);
					iVar4 = iVar2 + 1000;
					if (iVar4 >= 0)
					{
						if (iVar4 >= 9)
						{
							iVar4 = 8;
						}
						Global_1373206.f_1 = (iVar4 % 3);
						Global_1373206.f_3 = (iVar4 / 3);
						func_150(iVar4, &Global_1375642);
						func_155(&Global_1375642);
					}
				}
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsCommon", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsGang0", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsGang1", false);
				func_9(&Global_1375642, &Global_1373206);
				if (iVar5 == 1)
				{
					func_1(&Global_1375642, &Global_1373206, &uLocal_123);
				}
			}
			break;
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
	}
	HUD::_0x14621BB1DF14E2B2();
	HUD::_LOG_DEBUG_INFO(0);
	Global_1312436 = 0;
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	while (true)
	{
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_8(uParam2) || (func_8(uParam2) && func_7(uParam2, 250, 0)))
	{
		bVar0 = true;
	}
	if ((PAD::IS_CONTROL_PRESSED(2, 187) || func_6(187, &(Global_1377170.f_1060), 1)) && bVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_285), 0);
	}
	if ((PAD::IS_CONTROL_PRESSED(2, 188) || func_6(188, &(Global_1377170.f_1060), 1)) && bVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_285), 1);
	}
	if (((PAD::IS_CONTROL_PRESSED(2, 189) || PAD::IS_CONTROL_PRESSED(2, 241)) || func_6(189, &(Global_1377170.f_1060), 1)) && bVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_285), 2);
	}
	if (((PAD::IS_CONTROL_PRESSED(2, 190) || PAD::IS_CONTROL_PRESSED(2, 242)) || func_6(190, &(Global_1377170.f_1060), 1)) && bVar0)
	{
		MISC::SET_BIT(&(uParam0->f_285), 3);
		func_5(uParam2);
		func_4(uParam2, 0, 0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_285, 1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 1);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		uParam1->f_3 = (uParam1->f_3 - 1);
		if (uParam1->f_3 < 0)
		{
			uParam1->f_3 = 2;
		}
		func_150(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 188), uParam0);
		func_156(uParam0);
		func_155(uParam0);
		func_147(uParam0, uParam1);
	}
	if (MISC::IS_BIT_SET(uParam0->f_285, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 0);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		uParam1->f_3++;
		if (uParam1->f_3 > 2)
		{
			uParam1->f_3 = 0;
		}
		func_150(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 187), uParam0);
		func_156(uParam0);
		func_155(uParam0);
		func_147(uParam0, uParam1);
	}
	if (MISC::IS_BIT_SET(uParam0->f_285, 2))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 2);
		uParam1->f_1 = (uParam1->f_1 - 1);
		if (uParam1->f_1 < 0)
		{
			if (iLocal_64 > 1)
			{
				func_157(uParam0);
				*uParam0 = 0;
				func_2(uParam0);
			}
			if (uParam1->f_5 > 0)
			{
				uParam1->f_5 = (uParam1->f_5 - 1);
				uParam1->f_1 = 2;
			}
			else
			{
				uParam1->f_5 = iLocal_64;
				uParam1->f_1 = 2;
				iVar1 = (uParam1->f_1 + uParam1->f_3 * 3);
				if (iVar1 >= iLocal_65)
				{
					uParam1->f_1 = ((iLocal_65 - 1) % 3);
					uParam1->f_3 = ((iLocal_65 - 1) / 3);
				}
			}
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_150(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 189), uParam0);
		func_156(uParam0);
		func_155(uParam0);
		func_147(uParam0, uParam1);
	}
	if (MISC::IS_BIT_SET(uParam0->f_285, 3))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 3);
		uParam1->f_1++;
		iVar2 = (uParam1->f_1 + uParam1->f_3 * 3);
		if (uParam1->f_1 > 2 || (uParam1->f_5 == iLocal_64 && iVar2 >= iLocal_65))
		{
			if (iLocal_64 > 1)
			{
				func_157(uParam0);
				*uParam0 = 0;
				func_2(uParam0);
			}
			uParam1->f_1 = 0;
			uParam1->f_5++;
			if (uParam1->f_5 > iLocal_64)
			{
				uParam1->f_5 = 0;
			}
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_150(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 190), uParam0);
		func_156(uParam0);
		func_155(uParam0);
		func_147(uParam0, uParam1);
	}
}

void func_2(var uParam0)
{
	uParam0->f_281 = 0;
}

int func_3(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = (*uParam0 + *uParam1 * 3);
	switch (iParam3)
	{
		case 188:
			if (iParam2 == iLocal_64)
			{
				if (iVar0 > (iLocal_65 - 1))
				{
					*uParam1 = 0;
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
		case 187:
			if (iParam2 == iLocal_64)
			{
				if (iVar0 > (iLocal_65 - 1))
				{
					if (*uParam1 > 0)
					{
						*uParam1 = (*uParam1 - 1);
					}
					else
					{
						*uParam1 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
		case 189:
			break;
		case 190:
			if (iParam2 == iLocal_64)
			{
				if (*uParam0 == 0)
				{
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 > (iLocal_65 - 1))
						{
							*uParam1 = (*uParam1 - 1);
							iVar0 = (*uParam0 + *uParam1 * 3);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
				else if (iVar0 > (iLocal_65 - 1))
				{
					if (*uParam0 > 0)
					{
						*uParam0 = (*uParam0 - 1);
					}
					else
					{
						*uParam0 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
	}
	return iVar0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)
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

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_6(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (PAD::GET_CONTROL_VALUE(2, 195) - 127);
	iVar1 = (PAD::GET_CONTROL_VALUE(2, 196) - 127);
	iVar2 = (PAD::GET_CONTROL_VALUE(2, 197) - 127);
	switch (iParam0)
	{
		case 189:
			if (iVar0 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
		case 190:
			if (iVar0 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
		case 188:
			if (iVar1 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
		case 187:
			if (iVar1 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
		case 194:
			if (iVar2 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
		case 193:
			if (iVar2 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_7(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_4(uParam0, bParam2, 0);
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

bool func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9(var uParam0, var uParam1)
{
	if ((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsCommon") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsGang0")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsGang1"))
	{
		if (func_144(8, -1) == 0)
		{
			*uParam1 = func_143();
		}
		func_149();
		switch (uParam1->f_5)
		{
			case 0:
				if (!uParam0->f_1[0])
				{
					func_107(joaat("WEAPON_PISTOL"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_COMBATPISTOL"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_APPISTOL"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_MICROSMG"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_SMG"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_ASSAULTRIFLE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_CARBINERIFLE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_ADVANCEDRIFLE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_MG"), uParam0, *uParam1, 0);
				}
				break;
			case 1:
				if (!uParam0->f_1[0])
				{
					func_107(joaat("WEAPON_COMBATMG"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_ASSAULTSMG"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_PUMPSHOTGUN"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_ASSAULTSHOTGUN"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_SNIPERRIFLE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_HEAVYSNIPER"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_GRENADELAUNCHER"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_MINIGUN"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_RPG"), uParam0, *uParam1, 0);
				}
				break;
			case 2:
				if (!uParam0->f_1[0])
				{
					func_107(joaat("WEAPON_KNIFE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_NIGHTSTICK"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_BAT"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_CROWBAR"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_GOLFCLUB"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_MOLOTOV"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_GRENADE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_SMOKEGRENADE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_STICKYBOMB"), uParam0, *uParam1, 0);
				}
				break;
			default:
				if (!uParam0->f_1[0])
				{
					func_98(uParam0, uParam1);
				}
				break;
		}
		func_10(uParam0, func_97(uParam0));
	}
}

void func_10(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_2(uParam0);
	}
	if (*uParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			iVar5 = 0;
			iVar6 = 0;
			iVar7 = 0;
			if (uParam0->f_1[iVar0] == 1)
			{
				if (uParam0->f_85[iVar0] != 0)
				{
					if (func_96(uParam0->f_85[iVar0]))
					{
						if (func_94(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), func_95(uParam0->f_85[iVar0]), -1))
						{
							bVar2 = true;
						}
						else
						{
							bVar2 = false;
						}
					}
					else if (func_90(uParam0->f_85[iVar0], uParam0->f_276, 0))
					{
						bVar2 = true;
					}
					else
					{
						bVar2 = false;
					}
				}
				bVar3 = func_87(uParam0->f_85[iVar0], uParam0->f_276, 0);
				iVar1 = 0;
				while (iVar1 <= 35)
				{
					iVar4 = func_85(uParam0->f_85[iVar0], iVar1);
					if (!bVar3)
					{
						func_69(iVar4, uParam0->f_85[iVar0], 0, 0, 0);
						func_65(iVar4, uParam0->f_85[iVar0], 0);
						func_59(iVar4, uParam0->f_85[iVar0], 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(func_58(iVar4, uParam0->f_85[iVar0]), "WCT_CLIP1"))
					{
						func_69(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						if (!bVar3)
						{
							func_65(iVar4, uParam0->f_85[iVar0], 1);
							func_59(iVar4, uParam0->f_85[iVar0], 1);
						}
					}
					if (MISC::ARE_STRINGS_EQUAL(func_58(iVar4, uParam0->f_85[iVar0]), "WCT_SCOPE_LRG"))
					{
						func_69(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						if (!bVar3)
						{
							func_65(iVar4, uParam0->f_85[iVar0], 1);
							func_59(iVar4, uParam0->f_85[iVar0], 1);
						}
					}
					if ((uParam0->f_85[iVar0] == joaat("WEAPON_BULLPUPSHOTGUN") || uParam0->f_85[iVar0] == joaat("WEAPON_PISTOL50")) || uParam0->f_85[iVar0] == joaat("WEAPON_SNSPISTOL"))
					{
						func_69(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						func_65(iVar4, uParam0->f_85[iVar0], 1);
						func_59(iVar4, uParam0->f_85[iVar0], 1);
					}
					if (bVar3 && func_53(iVar4, uParam0->f_85[iVar0], uParam0->f_276))
					{
						if (bVar2 && func_94(iVar4, uParam0->f_85[iVar0], uParam0->f_276))
						{
							iVar5 = (iVar5 + func_51(iVar4, uParam0->f_85[iVar0], 8));
							iVar6 = (iVar6 + func_49(iVar4, uParam0->f_85[iVar0], 8));
							iVar7 = (iVar7 + func_47(iVar4, uParam0->f_85[iVar0], 8));
						}
					}
					else if (iVar4 != 0)
					{
						iVar5 = (iVar5 + func_51(iVar4, uParam0->f_85[iVar0], 4));
						iVar6 = (iVar6 + func_49(iVar4, uParam0->f_85[iVar0], 4));
						iVar7 = (iVar7 + func_47(iVar4, uParam0->f_85[iVar0], 4));
					}
					iVar1++;
				}
			}
			iVar8 = 0;
			if (uParam0->f_85[iVar0] != 0)
			{
				if (bVar3)
				{
					if (func_96(uParam0->f_85[iVar0]))
					{
						if (func_94(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), func_95(uParam0->f_85[iVar0]), -1))
						{
							bVar2 = true;
						}
						else
						{
							bVar2 = false;
						}
					}
					else if (func_90(uParam0->f_85[iVar0], uParam0->f_276, 0))
					{
						bVar2 = true;
					}
					else
					{
						bVar2 = false;
					}
					if (((bVar2 || (uParam0->f_85[iVar0] == joaat("WEAPON_PISTOL") && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), false))) || func_45(uParam0->f_85[iVar0])) || func_29(uParam0->f_85[iVar0], uParam0->f_276))
					{
						if (func_96(uParam0->f_85[iVar0]))
						{
							if (bVar2)
							{
								iVar8++;
							}
							else
							{
								iVar8 += 2;
							}
						}
						else
						{
							iVar8++;
						}
					}
					else
					{
						iVar8 += 2;
					}
				}
				else
				{
					iVar8 += 4;
				}
			}
			if (uParam0->f_1[iVar0] == 0 || MISC::ARE_STRINGS_EQUAL(func_26(uParam0->f_85[iVar0], 0), func_26(0, 0)))
			{
				iVar8 = 0;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_85[iVar0]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar0++;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*uParam0 = 1;
	}
	func_23(uParam0, func_25(uParam0));
	func_14(uParam0, func_22(uParam0));
	func_11(uParam0, func_13(uParam0));
}

void func_11(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		uParam0->f_279 = 0;
		func_12(uParam0);
	}
	if (uParam0->f_279 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_277);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		uParam0->f_279 = 1;
	}
}

void func_12(var uParam0)
{
	uParam0->f_283 = 0;
}

int func_13(var uParam0)
{
	return uParam0->f_283;
}

void func_14(var uParam0, int iParam1)
{
	char cVar0[16];
	int iVar4;

	StringCopy(&cVar0, " ", 16);
	if (iParam1 == 1)
	{
		uParam0->f_280 = 0;
		func_21(uParam0);
	}
	if (uParam0->f_280 == 0)
	{
		if (uParam0->f_277 > -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DESCRIPTION");
			iVar4 = (uParam0->f_215[uParam0->f_277] - uParam0->f_165[uParam0->f_277]);
			if (iVar4 < 0)
			{
				iVar4 = 0;
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_20(&(uParam0->f_11[uParam0->f_277 /*4*/]));
			func_20(&(uParam0->f_48[uParam0->f_277 /*4*/]));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_95[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_105[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_135[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_115[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_145[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_155[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_165[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_185[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_195[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_205[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_225[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_125[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_175[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_235[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_16(uParam0->f_85[uParam0->f_277]));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (func_15(uParam0->f_85[uParam0->f_277]))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20(&cVar0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20(&cVar0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20(&cVar0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20(&cVar0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20(&cVar0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20("PM_ACCURACY");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20("PM_RANGE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20("PM_CLIPSIZE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20("PM_KD_RATIO");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20("PM_HEADSHOTS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_20("PM_MY_ACCURACY");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		uParam0->f_280 = 1;
	}
}

bool func_15(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_BAT"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_GOLFCLUB"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_PROXMINE"):
		case joaat("WEAPON_KNUCKLE"):
		case joaat("WEAPON_MACHETE"):
		case joaat("WEAPON_FLASHLIGHT"):
		case joaat("WEAPON_SWITCHBLADE"):
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_PIPEBOMB"):
		case joaat("WEAPON_POOLCUE"):
		case joaat("WEAPON_WRENCH"):
		case joaat("WEAPON_STONE_HATCHET"):
			return true;
	}
	return false;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return 0;
		case joaat("WEAPON_KNIFE"):
			return 0;
		case joaat("WEAPON_MICROSMG"):
			return 5;
		case joaat("WEAPON_ASSAULTSMG"):
			return 29;
		case joaat("WEAPON_NIGHTSTICK"):
			return 3;
		case joaat("WEAPON_COMBATPISTOL"):
			return 9;
		case joaat("WEAPON_SMG"):
			return 11;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 24;
		case joaat("WEAPON_SNIPERRIFLE"):
			return 21;
		case joaat("WEAPON_STICKYBOMB"):
			return 19;
		case joaat("WEAPON_PETROLCAN"):
			return 20;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 17;
		case joaat("WEAPON_APPISTOL"):
			return 33;
		case joaat("WEAPON_SMOKEGRENADE"):
			return 13;
		case joaat("WEAPON_GRENADE"):
			return 15;
		case joaat("WEAPON_CARBINERIFLE"):
			if (func_17(3741, -1, -1))
			{
				return 0;
			}
			else
			{
				return 42;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 37;
		case joaat("WEAPON_MOLOTOV"):
			if (func_17(3741, -1, -1))
			{
				return 0;
			}
			else
			{
				return 31;
			}
			break;
		case joaat("WEAPON_MG"):
			return 50;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 70;
		case joaat("WEAPON_COMBATMG"):
			return 80;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 60;
		case joaat("WEAPON_HEAVYSNIPER"):
			return 90;
		case joaat("WEAPON_RPG"):
			return 100;
		case joaat("WEAPON_MINIGUN"):
			return 120;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 0;
		case joaat("WEAPON_GOLFCLUB"):
			return 0;
		case joaat("WEAPON_CROWBAR"):
			return 0;
		case joaat("WEAPON_BAT"):
			return 0;
	}
	return 0;
}

bool func_17(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_143();
	}
	iVar1 = func_19(iParam0, iParam1);
	iVar2 = func_18(iParam0);
	if (0 != iVar1)
	{
		bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_18(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_19(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = func_143();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

void func_20(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_21(var uParam0)
{
	uParam0->f_284 = 0;
}

int func_22(var uParam0)
{
	return uParam0->f_284;
}

void func_23(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		uParam0->f_278 = 0;
		func_24(uParam0);
	}
	if (uParam0->f_278 == 0)
	{
		if (uParam0->f_275 != 9999)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_275);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_275 = 9999;
			uParam0->f_278 = 1;
		}
	}
}

void func_24(var uParam0)
{
	uParam0->f_282 = 0;
}

int func_25(var uParam0)
{
	return uParam0->f_282;
}

char* func_26(int iParam0, bool bParam1)
{
	struct<32> Var0;

	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		case joaat("WEAPON_UNARMED"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		case joaat("WEAPON_PISTOL"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		case joaat("WEAPON_SMG"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		case joaat("WEAPON_MG"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		case joaat("WEAPON_REMOTESNIPER"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		case joaat("WEAPON_RPG"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		case joaat("WEAPON_GRENADE"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		case joaat("WEAPON_STICKYBOMB"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		case joaat("WEAPON_MOLOTOV"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		case joaat("WEAPON_STUNGUN"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		case joaat("WEAPON_PETROLCAN"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		case joaat("WEAPON_ELECTRIC_FENCE"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		case joaat("VEHICLE_WEAPON_TANK"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		case joaat("VEHICLE_WEAPON_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		case joaat("OBJECT"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		case joaat("GADGET_PARACHUTE"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		case joaat("WEAPON_KNIFE"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		case joaat("WEAPON_NIGHTSTICK"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		case joaat("WEAPON_HAMMER"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		case joaat("WEAPON_BAT"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		case joaat("WEAPON_CROWBAR"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		case joaat("WEAPON_GOLFCLUB"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		case joaat("WEAPON_RAMMED_BY_CAR"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		case joaat("WEAPON_RUN_OVER_BY_CAR"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		case joaat("WEAPON_BOTTLE"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		case joaat("WEAPON_GUSENBERG"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		case joaat("WEAPON_DAGGER"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		case joaat("WEAPON_FLAREGUN"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		case joaat("WEAPON_HEAVYPISTOL"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		case joaat("WEAPON_MUSKET"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		case joaat("WEAPON_FIREWORK"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		case joaat("WEAPON_PROXMINE"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		case joaat("WEAPON_HATCHET"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		case joaat("WEAPON_RAILGUN"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		case joaat("WEAPON_KNUCKLE"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		case joaat("WEAPON_MACHETE"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		case joaat("WEAPON_FLASHLIGHT"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		case joaat("WEAPON_DBSHOTGUN"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		case joaat("WEAPON_AUTOSHOTGUN"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		case joaat("WEAPON_BATTLEAXE"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		case joaat("WEAPON_MINISMG"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		case joaat("WEAPON_PIPEBOMB"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		case joaat("WEAPON_POOLCUE"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		case joaat("WEAPON_WRENCH"):
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		case joaat("WEAPON_COUGAR"):
			return "WT_RAGE";
		case -159960575:
			return "WT_VEH_WEP";
		case joaat("WEAPON_PISTOL_MK2"):
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		case joaat("WEAPON_DOUBLEACTION"):
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		case joaat("WEAPON_STONE_HATCHET"):
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		case joaat("WEAPON_RAYPISTOL"):
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		case joaat("WEAPON_RAYCARBINE"):
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		case joaat("WEAPON_RAYMINIGUN"):
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		case joaat("WEAPON_NAVYREVOLVER"):
			if (bParam1)
			{
				return "WTU_REV_NV";
			}
			else
			{
				return "WT_REV_NV";
			}
			break;
		case joaat("WEAPON_CERAMICPISTOL"):
			if (bParam1)
			{
				return "WTU_CERPST";
			}
			else
			{
				return "WT_CERPST";
			}
			break;
		default:
			if (func_28(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_27(&(Var0.f_31));
				}
				else
				{
					return func_27(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_27(var uParam0)
{
	return uParam0;
}

int func_28(int iParam0, int* iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, iParam1))
		{
			if (iParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_29(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_42() == 0)
	{
		return false;
	}
	if (func_41())
	{
		return false;
	}
	iVar0 = func_40(iParam0);
	if (iVar0 != 414 && func_39(iVar0, -1))
	{
		return true;
	}
	else
	{
		return false;
	}
	iVar1 = func_33(iParam0, iParam1);
	iVar2 = func_31(iParam0);
	return MISC::IS_BIT_SET(iVar1, func_30(iVar2));
}

int func_30(int iParam0)
{
	return (iParam0 % 32);
}

int func_31(int iParam0)
{
	return func_32(iParam0);
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 0;
		case joaat("WEAPON_PISTOL"):
			return 1;
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
		case joaat("WEAPON_APPISTOL"):
			return 3;
		case joaat("WEAPON_PISTOL50"):
			return 4;
		case joaat("WEAPON_SMG"):
			return 5;
		case joaat("WEAPON_ASSAULTSMG"):
			return 6;
		case joaat("WEAPON_MICROSMG"):
			return 7;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 8;
		case joaat("WEAPON_CARBINERIFLE"):
			return 9;
		case joaat("WEAPON_HEAVYRIFLE"):
			return 10;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 11;
		case joaat("WEAPON_MG"):
			return 12;
		case joaat("WEAPON_COMBATMG"):
			return 13;
		case joaat("WEAPON_ASSAULTMG"):
			return 14;
		case joaat("WEAPON_STICKYBOMB"):
			return 15;
		case joaat("WEAPON_GRENADE"):
			return 16;
		case joaat("WEAPON_SMOKEGRENADE"):
			return 17;
		case joaat("WEAPON_REMOTESNIPER"):
			return 18;
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 19;
		case joaat("WEAPON_SNIPERRIFLE"):
			return 20;
		case joaat("WEAPON_HEAVYSNIPER"):
			return 21;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 22;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 23;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 24;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 25;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 26;
		case joaat("WEAPON_RPG"):
			return 27;
		case joaat("WEAPON_MINIGUN"):
			return 28;
		case joaat("WEAPON_LOUDHAILER"):
			return 29;
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return 30;
		case joaat("WEAPON_STUNGUN"):
			return 31;
		case joaat("WEAPON_RUBBERGUN"):
			return 32;
		case joaat("GADGET_PARACHUTE"):
			return 33;
		case joaat("WEAPON_KNIFE"):
			return 34;
		case joaat("WEAPON_NIGHTSTICK"):
			return 35;
		case joaat("WEAPON_HAMMER"):
			return 36;
		case joaat("WEAPON_BAT"):
			return 37;
		case joaat("WEAPON_CROWBAR"):
			return 38;
		case joaat("WEAPON_GOLFCLUB"):
			return 39;
		case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
			return 40;
		case joaat("WEAPON_MOLOTOV"):
			return 41;
		case joaat("WEAPON_FIREEXTINGUISHER"):
			return 42;
		case joaat("WEAPON_PETROLCAN"):
			return 43;
		case joaat("WEAPON_DIGISCANNER"):
			return 44;
		case joaat("WEAPON_BOTTLE"):
			return 45;
		case joaat("WEAPON_SPECIALCARBINE"):
			return 46;
		case joaat("WEAPON_SNSPISTOL"):
			return 47;
		case joaat("WEAPON_HEAVYPISTOL"):
			return 49;
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 48;
		case joaat("WEAPON_GUSENBERG"):
			return 50;
		case joaat("WEAPON_DAGGER"):
			return 51;
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 52;
		case joaat("WEAPON_FLAREGUN"):
			return 57;
		case joaat("WEAPON_MUSKET"):
			return 53;
		case joaat("WEAPON_FIREWORK"):
			return 54;
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 56;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 55;
		case joaat("WEAPON_PROXMINE"):
			return 60;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 61;
		case joaat("WEAPON_HATCHET"):
			return 58;
		case joaat("WEAPON_RAILGUN"):
			return 59;
		case joaat("WEAPON_COMBATPDW"):
			return 64;
		case joaat("WEAPON_KNUCKLE"):
			return 62;
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 63;
		case joaat("WEAPON_MACHETE"):
			return 65;
		case joaat("WEAPON_MACHINEPISTOL"):
			return 68;
		case joaat("WEAPON_DBSHOTGUN"):
			return 66;
		case joaat("WEAPON_COMPACTRIFLE"):
			return 67;
		case joaat("WEAPON_FLASHLIGHT"):
			return 69;
		case joaat("WEAPON_REVOLVER"):
			return 70;
		case joaat("WEAPON_SWITCHBLADE"):
			return 71;
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 72;
		case joaat("WEAPON_MINISMG"):
			return 73;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 74;
		case joaat("WEAPON_BATTLEAXE"):
			return 75;
		case joaat("WEAPON_PIPEBOMB"):
			return 76;
		case joaat("WEAPON_POOLCUE"):
			return 77;
		case joaat("WEAPON_WRENCH"):
			return 78;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 8;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 9;
		case joaat("WEAPON_COMBATMG_MK2"):
			return 13;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 21;
		case joaat("WEAPON_PISTOL_MK2"):
			return 1;
		case joaat("WEAPON_SMG_MK2"):
			return 5;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 22;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 46;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 47;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 56;
		case joaat("WEAPON_REVOLVER_MK2"):
			return 70;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
		case joaat("WEAPON_DOUBLEACTION"):
			return 79;
		case joaat("WEAPON_STONE_HATCHET"):
			return 80;
		case joaat("WEAPON_RAYPISTOL"):
			return 81;
		case joaat("WEAPON_RAYCARBINE"):
			return 82;
		case joaat("WEAPON_RAYMINIGUN"):
			return 83;
		case joaat("WEAPON_NAVYREVOLVER"):
			return 84;
		case joaat("WEAPON_CERAMICPISTOL"):
			return 85;
	}
	return 0;
}

int func_33(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_34(func_36(iParam0), iParam1, 0);
	return iVar0;
}

int func_34(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_35(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_143();
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

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0 || func_37() == 0) || (func_159() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 685;
			case 1:
				return 686;
			case 2:
				return 2419;
		}
	}
	return 11511;
}

int func_37()
{
	return Global_30769;
}

int func_38(int iParam0)
{
	return (iParam0 / 32);
}

bool func_39(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_35(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return false;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return 17;
		case joaat("WEAPON_COMBATPISTOL"):
			return 19;
		case joaat("WEAPON_APPISTOL"):
			return 23;
		case joaat("WEAPON_PISTOL50"):
			return 21;
		case joaat("WEAPON_SMG"):
			return 27;
		case joaat("WEAPON_MICROSMG"):
			return 25;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 31;
		case joaat("WEAPON_CARBINERIFLE"):
			return 33;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 35;
		case joaat("WEAPON_MG"):
			return 37;
		case joaat("WEAPON_COMBATMG"):
			return 39;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 43;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 45;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 49;
		case joaat("WEAPON_HEAVYSNIPER"):
			return 55;
		case joaat("WEAPON_SNIPERRIFLE"):
			return 53;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 59;
		case joaat("WEAPON_RPG"):
			return 61;
		case joaat("WEAPON_MINIGUN"):
			return 63;
		case joaat("WEAPON_GRENADE"):
			return 65;
		case joaat("WEAPON_SMOKEGRENADE"):
			return 67;
		case joaat("WEAPON_STICKYBOMB"):
			return 69;
		case joaat("WEAPON_MOLOTOV"):
			return 71;
		case joaat("WEAPON_PETROLCAN"):
			return 74;
		case joaat("GADGET_PARACHUTE"):
			return 73;
		case joaat("WEAPON_KNIFE"):
			return 1;
		case joaat("WEAPON_NIGHTSTICK"):
			return 3;
		case joaat("WEAPON_HAMMER"):
			return 11;
		case joaat("WEAPON_BAT"):
			return 13;
		case joaat("WEAPON_CROWBAR"):
			return 5;
		case joaat("WEAPON_GOLFCLUB"):
			return 15;
		case joaat("WEAPON_ASSAULTMG"):
			return 41;
		case joaat("WEAPON_ASSAULTSMG"):
			return 29;
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 57;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 47;
		case joaat("WEAPON_BOTTLE"):
			return 142;
		case joaat("WEAPON_SPECIALCARBINE"):
			return 282;
		case joaat("WEAPON_SNSPISTOL"):
			return 144;
		case joaat("WEAPON_HEAVYPISTOL"):
			return 280;
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 284;
		case joaat("WEAPON_GUSENBERG"):
			return 286;
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 309;
		case joaat("WEAPON_DAGGER"):
			return 307;
		case joaat("WEAPON_MUSKET"):
			return 313;
		case joaat("WEAPON_FIREWORK"):
			return 311;
		case joaat("WEAPON_FLAREGUN"):
			return 301;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 325;
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 327;
		case joaat("WEAPON_PROXMINE"):
			return 331;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 333;
		case joaat("WEAPON_HATCHET"):
			return 329;
		case joaat("WEAPON_COMBATPDW"):
			return 335;
		case joaat("WEAPON_KNUCKLE"):
			return 337;
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 339;
		case joaat("WEAPON_MACHETE"):
			return 341;
		case joaat("WEAPON_MACHINEPISTOL"):
			return 343;
		case joaat("WEAPON_DBSHOTGUN"):
			return 348;
		case joaat("WEAPON_COMPACTRIFLE"):
			return 346;
		case joaat("WEAPON_FLASHLIGHT"):
			return 350;
		case joaat("WEAPON_REVOLVER"):
			return 353;
		case joaat("WEAPON_SWITCHBLADE"):
			return 355;
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 360;
		case joaat("WEAPON_MINISMG"):
			return 366;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 364;
		case joaat("WEAPON_BATTLEAXE"):
			return 362;
		case joaat("WEAPON_PIPEBOMB"):
			return 368;
		case joaat("WEAPON_POOLCUE"):
			return 370;
		case joaat("WEAPON_WRENCH"):
			return 9;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 31;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 33;
		case joaat("WEAPON_COMBATMG_MK2"):
			return 39;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 55;
		case joaat("WEAPON_PISTOL_MK2"):
			return 17;
		case joaat("WEAPON_SMG_MK2"):
			return 27;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 47;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 327;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 43;
		case joaat("WEAPON_REVOLVER_MK2"):
			return 353;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 144;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 282;
		case joaat("WEAPON_DOUBLEACTION"):
			return 394;
		case joaat("WEAPON_RAYPISTOL"):
			return 402;
		case joaat("WEAPON_RAYCARBINE"):
			return 404;
		case joaat("WEAPON_RAYMINIGUN"):
			return 406;
		case joaat("WEAPON_STONE_HATCHET"):
			return 400;
		case joaat("WEAPON_NAVYREVOLVER"):
			return 410;
		case joaat("WEAPON_CERAMICPISTOL"):
			return 408;
	}
	return 414;
}

bool func_41()
{
	return Global_1312856;
}

int func_42()
{
	if (func_44() && func_43(0))
	{
		return 1;
	}
	return 0;
}

var func_43(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_44()
{
	return func_43(func_143() + 1);
}

bool func_45(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam0)
	{
		case joaat("WEAPON_MOLOTOV"):
			bVar0 = true;
			iVar3 = 493;
			break;
		case joaat("WEAPON_GOLFCLUB"):
			bVar0 = true;
			iVar3 = 247;
			break;
		case joaat("WEAPON_BAT"):
			bVar0 = true;
			iVar3 = 240;
			break;
		case joaat("WEAPON_CROWBAR"):
			bVar0 = true;
			iVar3 = 212;
			break;
	}
	if (bVar0)
	{
		iVar1 = func_46(PLAYER::PLAYER_ID());
		iVar2 = func_16(iParam0);
		if (iVar1 >= iVar2)
		{
			if (func_34(iVar3, -1, 0) > 0)
			{
				return true;
			}
		}
	}
	return false;
}

var func_46(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_211.f_6;
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_48(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
				case 1:
					return 1;
				case 8:
					return 4;
			}
			break;
		case 2:
			switch (iParam2)
			{
				case 4:
					return 2;
				case 1:
					return 1;
				case 8:
					return 4;
			}
			break;
		case 4:
			switch (iParam2)
			{
				case 4:
					return 16;
				case 1:
					return 8;
				case 8:
					return 32;
			}
			break;
		case 8:
			switch (iParam2)
			{
				case 4:
					return 128;
				case 1:
					return 64;
				case 8:
					return 256;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 1;
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 2;
				case joaat("COMPONENT_AT_SB_BARREL_01"):
					return 4;
				case joaat("COMPONENT_AT_SB_BARREL_02"):
					return 8;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
					return 2;
				case joaat("COMPONENT_AT_SR_BARREL_01"):
					return 4;
				case joaat("COMPONENT_AT_SR_BARREL_02"):
					return 8;
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 1;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 2;
				case joaat("COMPONENT_AT_MG_BARREL_01"):
					return 4;
				case joaat("COMPONENT_AT_MG_BARREL_02"):
					return 8;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 1;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 2;
				case joaat("COMPONENT_AT_AR_BARREL_01"):
					return 4;
				case joaat("COMPONENT_AT_AR_BARREL_02"):
					return 8;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 1;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 2;
				case joaat("COMPONENT_AT_CR_BARREL_01"):
					return 4;
				case joaat("COMPONENT_AT_CR_BARREL_02"):
					return 8;
			}
			break;
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_50(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
				case 1:
					return 1;
				case 8:
					return 4;
			}
			break;
		case 2:
			switch (iParam2)
			{
				case 4:
					return 16;
				case 1:
					return 8;
				case 8:
					return 32;
			}
			break;
		case 4:
			switch (iParam2)
			{
				case 4:
					return 128;
				case 1:
					return 64;
				case 8:
					return 256;
			}
			break;
		case 7:
			switch (iParam2)
			{
				case 4:
					return 1024;
				case 1:
					return 512;
				case 8:
					return 2048;
			}
			break;
		case 16:
			switch (iParam2)
			{
				case 4:
					return 8192;
				case 1:
					return 4096;
				case 8:
					return 16384;
			}
			break;
		case 32:
			switch (iParam2)
			{
				case 4:
					return 65536;
				case 1:
					return 1;
				case 8:
					return 131072;
			}
			break;
		case 64:
			switch (iParam2)
			{
				case 4:
					return 2;
				case 1:
					return 1;
				case 8:
					return 1048576;
			}
			break;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 1;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 2;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 4;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 7;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 16;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 32;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 64;
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 1;
				case joaat("COMPONENT_AT_MUZZLE_09"):
					return 2;
			}
			break;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_52(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
				case 1:
					return 1;
				case 8:
					return 4;
			}
			break;
		case 2:
			switch (iParam2)
			{
				case 4:
					return 16;
				case 1:
					return 8;
				case 8:
					return 32;
			}
			break;
		case 4:
			switch (iParam2)
			{
				case 4:
					return 128;
				case 1:
					return 64;
				case 8:
					return 256;
			}
			break;
		case 8:
			switch (iParam2)
			{
				case 4:
					return 1024;
				case 1:
					return 512;
				case 8:
					return 2048;
			}
			break;
		case 16:
			switch (iParam2)
			{
				case 4:
					return 8192;
				case 1:
					return 4096;
				case 8:
					return 16384;
			}
			break;
		case 32:
			switch (iParam2)
			{
				case 4:
					return 65536;
				case 1:
					return 32768;
				case 8:
					return 131072;
			}
			break;
		case 256:
			switch (iParam2)
			{
				case 4:
					return 33554432;
				case 1:
					return 16777216;
				case 8:
					return 67108864;
			}
			break;
		case 64:
			switch (iParam2)
			{
				case 4:
					return 524288;
				case 1:
					return 262144;
				case 8:
					return 1048576;
			}
			break;
		case 128:
			switch (iParam2)
			{
				case 4:
					return 4194304;
				case 1:
					return 2097152;
				case 8:
					return 8388608;
			}
			break;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_CLIP_01"):
					return 16;
				case joaat("COMPONENT_PISTOL_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 1;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL50_CLIP_01"):
					return 16;
				case joaat("COMPONENT_PISTOL50_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
					return 16;
				case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_APPISTOL_CLIP_01"):
					return 16;
				case joaat("COMPONENT_APPISTOL_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MICROSMG_CLIP_01"):
					return 16;
				case joaat("COMPONENT_MICROSMG_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 64;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
					return 16;
				case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 64;
			}
			break;
		case joaat("WEAPON_SMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_CLIP_01"):
					return 16;
				case joaat("COMPONENT_SMG_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
				case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
					return 64;
				case joaat("COMPONENT_SMG_CLIP_03"):
					return 256;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
					return 16;
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 64;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
					return 256;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
					return 16;
				case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 64;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
				case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
					return 256;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
					return 16;
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 64;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
					return 256;
				default:
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
					return 16;
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 64;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
				default:
					break;
			}
			break;
		case joaat("WEAPON_HEAVYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
					return 16;
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
				default:
					break;
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
					return 16;
				case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
					return 32;
				default:
					break;
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
					return 16;
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 64;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MG_CLIP_01"):
					return 16;
				case joaat("COMPONENT_MG_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
					return 64;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_CLIP_01"):
					return 16;
				case joaat("COMPONENT_COMBATMG_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 64;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SR_SUPP"):
					return 1;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
					return 16;
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 4;
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 64;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 4;
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 64;
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 64;
			}
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
					return 16;
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
			}
			break;
		case joaat("WEAPON_GUSENBERG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GUSENBERG_CLIP_01"):
					return 16;
				case joaat("COMPONENT_GUSENBERG_CLIP_02"):
					return 32;
			}
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
					return 16;
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
					return 256;
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
					return 16;
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
					return 64;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
			}
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
					return 16;
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPDW_CLIP_01"):
					return 16;
				case joaat("COMPONENT_COMBATPDW_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 64;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				case joaat("COMPONENT_COMBATPDW_CLIP_03"):
					return 256;
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
					return 16;
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
					return 256;
			}
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
					return 16;
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
					return 32;
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
					return 256;
			}
			break;
		case joaat("WEAPON_MINISMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINISMG_CLIP_01"):
					return 16;
				case joaat("COMPONENT_MINISMG_CLIP_02"):
					return 32;
			}
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
					return 16;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
					return 32;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
					return 256;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 256;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
					return 256;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
					return 256;
				case joaat("COMPONENT_AT_PI_FLSH_02"):
					return 2;
				case joaat("COMPONENT_AT_PI_RAIL"):
					return 128;
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 1;
				case joaat("COMPONENT_AT_PI_COMP"):
					return 128;
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_MK2_CLIP_01"):
					return 16;
				case joaat("COMPONENT_SMG_MK2_CLIP_02"):
					return 32;
				case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
					return 256;
				case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
					return 256;
				case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
					return 256;
				case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
					return 256;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_SIGHTS_SMG"):
					return 64;
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 4;
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 64;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 8;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
					return 16;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
					return 32;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
					return 256;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
					return 256;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
					return 256;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
					return 256;
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 4;
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 64;
				case joaat("COMPONENT_AT_SCOPE_NV"):
					return 8;
				case joaat("COMPONENT_AT_SCOPE_THERMAL"):
					return 8;
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
					return 16;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
					return 32;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
					return 256;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
					return 256;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
					return 256;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
					return 256;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 128;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 64;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
					return 16;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
					return 32;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 256;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
					return 256;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
					return 256;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
					return 256;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 128;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 64;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 4;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 8;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
					return 16;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
					return 32;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
					return 256;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
					return 256;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
					return 256;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
					return 256;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 128;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 64;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 4;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 8;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
			}
			break;
	}
	return 0;
}

bool func_53(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (func_41())
	{
		return false;
	}
	iVar0 = func_56(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

int func_54(int iParam0, int iParam1)
{
	return func_55(iParam0, iParam1);
}

int func_55(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_CLIP_01"):
					return 1;
				case joaat("COMPONENT_PISTOL_CLIP_02"):
					return 2;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 3;
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 4;
				case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
					return 175;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 211;
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
					return 5;
				case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
					return 6;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 7;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 8;
				case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
					return 186;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_APPISTOL_CLIP_01"):
					return 11;
				case joaat("COMPONENT_APPISTOL_CLIP_02"):
					return 12;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 13;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 14;
				case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
					return 164;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MICROSMG_CLIP_01"):
					return 15;
				case joaat("COMPONENT_MICROSMG_CLIP_02"):
					return 16;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 17;
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 18;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 19;
				case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
					return 174;
			}
			break;
		case joaat("WEAPON_SMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_CLIP_01"):
					return 22;
				case joaat("COMPONENT_SMG_CLIP_02"):
					return 23;
				case joaat("COMPONENT_SMG_CLIP_03"):
					return 207;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 24;
				case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
					return 25;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 26;
				case joaat("COMPONENT_SMG_VARMOD_LUXE"):
					return 179;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 212;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
					return 27;
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
					return 28;
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
					return 201;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 29;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 30;
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 31;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 32;
				case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
					return 165;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 213;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
					return 33;
				case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
					return 34;
				case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
					return 202;
				case joaat("COMPONENT_AT_RAILCOVER_01"):
					return 35;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 36;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 37;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 38;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 39;
				case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
					return 168;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 214;
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
					return 44;
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
					return 45;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 47;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 48;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 49;
				case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
					return 163;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MG_CLIP_01"):
					return 50;
				case joaat("COMPONENT_MG_CLIP_02"):
					return 51;
				case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
					return 52;
				case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
					return 187;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_CLIP_01"):
					return 53;
				case joaat("COMPONENT_COMBATMG_CLIP_02"):
					return 54;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 55;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 56;
				case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
					return 188;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 215;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SR_SUPP"):
					return 59;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 60;
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
					return 193;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 389;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
					return 64;
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
					return 65;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 66;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 67;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 68;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
					return 69;
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 70;
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 71;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 72;
				case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
					return 180;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
					return 76;
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 77;
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 82;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 216;
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 78;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 79;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 80;
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINIGUN_CLIP_01"):
					return 81;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
					return 83;
				case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
					return 84;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 85;
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 86;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 87;
				case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
					return 189;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 88;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 89;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 90;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL50_CLIP_01"):
					return 91;
				case joaat("COMPONENT_PISTOL50_CLIP_02"):
					return 92;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 93;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 94;
				case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
					return 176;
			}
			break;
		case joaat("WEAPON_ASSAULTSNIPER"):
			switch (iParam0)
			{
				case 195735895:
					return 95;
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 96;
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 97;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 98;
			}
			break;
		case joaat("WEAPON_HEAVYRIFLE"):
			switch (iParam0)
			{
				case 1525977990:
					return 99;
				case 1824470811:
					return 100;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 101;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 102;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 103;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 104;
			}
			break;
		case joaat("WEAPON_ASSAULTMG"):
			switch (iParam0)
			{
				case -890514874:
					return 105;
				case -507117574:
					return 106;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 107;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 108;
			}
			break;
		case joaat("WEAPON_PROGRAMMABLEAR"):
			switch (iParam0)
			{
				case -124428919:
					return 109;
				case 1048471894:
					return 110;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
					return 111;
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
					return 112;
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
					return 208;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 113;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 114;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 115;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 116;
				case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
					return 190;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 390;
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
					return 117;
				case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
					return 118;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 119;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 120;
				case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
					return 191;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 391;
			}
			break;
		case joaat("WEAPON_HEAVYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
					return 121;
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
					return 122;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 123;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 124;
				case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
					return 171;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
					return 131;
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
					return 132;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 127;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 128;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 129;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 130;
				case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
					return 192;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 394;
			}
			break;
		case joaat("WEAPON_GUSENBERG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GUSENBERG_CLIP_01"):
					return 125;
				case joaat("COMPONENT_GUSENBERG_CLIP_02"):
					return 126;
			}
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
					return 133;
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
					return 134;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 136;
			}
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
					return 137;
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
					return 140;
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
					return 205;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 145;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 146;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 147;
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
					return 138;
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
					return 139;
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
					return 141;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 142;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 143;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 144;
				case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
					return 172;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 392;
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPDW_CLIP_01"):
					return 149;
				case joaat("COMPONENT_COMBATPDW_CLIP_02"):
					return 150;
				case joaat("COMPONENT_COMBATPDW_CLIP_03"):
					return 203;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 151;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 152;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 153;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
					return 178;
			}
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
					return 148;
			}
			break;
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
					return 154;
				case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
					return 155;
				case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
					return 156;
				case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
					return 157;
				case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
					return 158;
				case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
					return 159;
				case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
					return 160;
				case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
					return 161;
				case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
					return 162;
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
					return 184;
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
					return 185;
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
					return 206;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 183;
			}
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
					return 194;
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
					return 195;
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_CLIP_01"):
					return 196;
				case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
					return 197;
				case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
					return 198;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 393;
			}
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
					return 199;
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
					return 200;
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
					return 204;
			}
			break;
		case joaat("WEAPON_MINISMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINISMG_CLIP_01"):
					return 209;
				case joaat("COMPONENT_MINISMG_CLIP_02"):
					return 210;
			}
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
					return 217;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
					return 218;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
					return 219;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 220;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
					return 221;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
					return 222;
				case joaat("COMPONENT_AT_PI_FLSH_02"):
					return 223;
				case joaat("COMPONENT_AT_PI_RAIL"):
					return 224;
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 225;
				case joaat("COMPONENT_AT_PI_COMP"):
					return 226;
				case joaat("COMPONENT_PISTOL_MK2_CAMO"):
					return 367;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
					return 368;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
					return 369;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
					return 370;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
					return 371;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
					return 372;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
					return 373;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
					return 374;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
					return 375;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
					return 376;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
					return 377;
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_MK2_CLIP_01"):
					return 227;
				case joaat("COMPONENT_SMG_MK2_CLIP_02"):
					return 228;
				case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
					return 229;
				case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
					return 230;
				case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
					return 231;
				case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
					return 232;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 233;
				case joaat("COMPONENT_AT_SIGHTS_SMG"):
					return 234;
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 235;
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 236;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 237;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 238;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 239;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 240;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 241;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 242;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 243;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 244;
				case joaat("COMPONENT_AT_SB_BARREL_01"):
					return 245;
				case joaat("COMPONENT_AT_SB_BARREL_02"):
					return 246;
				case joaat("COMPONENT_SMG_MK2_CAMO"):
					return 378;
				case joaat("COMPONENT_SMG_MK2_CAMO_02"):
					return 379;
				case joaat("COMPONENT_SMG_MK2_CAMO_03"):
					return 380;
				case joaat("COMPONENT_SMG_MK2_CAMO_04"):
					return 381;
				case joaat("COMPONENT_SMG_MK2_CAMO_05"):
					return 382;
				case joaat("COMPONENT_SMG_MK2_CAMO_06"):
					return 383;
				case joaat("COMPONENT_SMG_MK2_CAMO_07"):
					return 384;
				case joaat("COMPONENT_SMG_MK2_CAMO_08"):
					return 385;
				case joaat("COMPONENT_SMG_MK2_CAMO_09"):
					return 386;
				case joaat("COMPONENT_SMG_MK2_CAMO_10"):
					return 387;
				case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
					return 388;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
					return 247;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
					return 248;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
					return 249;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
					return 250;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
					return 251;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
					return 252;
				case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
					return 253;
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 254;
				case joaat("COMPONENT_AT_SCOPE_NV"):
					return 255;
				case joaat("COMPONENT_AT_SCOPE_THERMAL"):
					return 256;
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 257;
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 258;
				case joaat("COMPONENT_AT_MUZZLE_09"):
					return 259;
				case joaat("COMPONENT_AT_SR_BARREL_01"):
					return 260;
				case joaat("COMPONENT_AT_SR_BARREL_02"):
					return 261;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
					return 356;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
					return 357;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
					return 358;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
					return 359;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
					return 360;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
					return 361;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
					return 362;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
					return 363;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
					return 364;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
					return 365;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
					return 366;
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
					return 262;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
					return 263;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
					return 264;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
					return 265;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
					return 266;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
					return 267;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 268;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 269;
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 270;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 271;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 272;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 273;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 274;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 275;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 276;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 277;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 278;
				case joaat("COMPONENT_AT_MG_BARREL_01"):
					return 279;
				case joaat("COMPONENT_AT_MG_BARREL_02"):
					return 280;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
					return 345;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
					return 346;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
					return 347;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
					return 348;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
					return 349;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
					return 350;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
					return 351;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
					return 352;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
					return 353;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
					return 354;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
					return 355;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
					return 281;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
					return 282;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 283;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
					return 284;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
					return 285;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
					return 286;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 287;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 288;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 289;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 290;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 291;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 292;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 293;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 294;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 295;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 296;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 297;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 298;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 299;
				case joaat("COMPONENT_AT_AR_BARREL_01"):
					return 300;
				case joaat("COMPONENT_AT_AR_BARREL_02"):
					return 301;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
					return 323;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
					return 324;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
					return 325;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
					return 326;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
					return 327;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
					return 328;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
					return 329;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
					return 330;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
					return 331;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
					return 332;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
					return 333;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
					return 302;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
					return 303;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
					return 304;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
					return 305;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
					return 306;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
					return 307;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 308;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 309;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 310;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 311;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 312;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 313;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 314;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 315;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 316;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 317;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 318;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 319;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 320;
				case joaat("COMPONENT_AT_CR_BARREL_01"):
					return 321;
				case joaat("COMPONENT_AT_CR_BARREL_02"):
					return 322;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
					return 334;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
					return 335;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
					return 336;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
					return 337;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
					return 338;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
					return 339;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
					return 340;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
					return 341;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
					return 342;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
					return 343;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
					return 344;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
					return 395;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
					return 396;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
					return 397;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
					return 398;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
					return 399;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 400;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 401;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 402;
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 403;
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 404;
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 405;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
					return 488;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
					return 489;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
					return 490;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
					return 491;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
					return 492;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
					return 493;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
					return 494;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
					return 495;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
					return 496;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
					return 497;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
					return 498;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
					return 406;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
					return 407;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
					return 408;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
					return 409;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
					return 410;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
					return 411;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 412;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 413;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 414;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 415;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 416;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 417;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 418;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 419;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 420;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 421;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 422;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 423;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 424;
				case joaat("COMPONENT_AT_SC_BARREL_01"):
					return 425;
				case joaat("COMPONENT_AT_SC_BARREL_02"):
					return 426;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
					return 532;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
					return 533;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
					return 534;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
					return 535;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
					return 536;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
					return 537;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
					return 538;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
					return 539;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
					return 540;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
					return 541;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
					return 542;
			}
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
					return 427;
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
					return 428;
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
					return 429;
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 430;
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
					return 431;
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
					return 432;
				case joaat("COMPONENT_AT_PI_FLSH_03"):
					return 433;
				case joaat("COMPONENT_AT_PI_RAIL_02"):
					return 434;
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 435;
				case joaat("COMPONENT_AT_PI_COMP_02"):
					return 436;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
					return 510;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
					return 511;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
					return 512;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
					return 513;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
					return 514;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
					return 515;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
					return 516;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
					return 517;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
					return 518;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
					return 519;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
					return 520;
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
					return 437;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
					return 438;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 439;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
					return 440;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
					return 441;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
					return 442;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 443;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 444;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 445;
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
					return 446;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 447;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 448;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 449;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 450;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 451;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 452;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 453;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 454;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 455;
				case joaat("COMPONENT_AT_MRFL_BARREL_01"):
					return 456;
				case joaat("COMPONENT_AT_MRFL_BARREL_02"):
					return 457;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
					return 521;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
					return 522;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
					return 523;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
					return 524;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
					return 525;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
					return 526;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
					return 527;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
					return 528;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
					return 529;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
					return 530;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
					return 531;
			}
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
					return 458;
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
					return 459;
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
					return 460;
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
					return 461;
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
					return 462;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 463;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 464;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 465;
				case joaat("COMPONENT_AT_PI_COMP_03"):
					return 466;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
					return 499;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
					return 500;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
					return 501;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
					return 502;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
					return 503;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
					return 504;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
					return 505;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
					return 506;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
					return 507;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
					return 508;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
					return 509;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
					return 467;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
					return 468;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 469;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
					return 470;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
					return 471;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
					return 472;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 473;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 474;
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
					return 475;
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 476;
				case joaat("COMPONENT_AT_BP_BARREL_01"):
					return 477;
				case joaat("COMPONENT_AT_BP_BARREL_02"):
					return 478;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 479;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 480;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 481;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 482;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 483;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 484;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 485;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 486;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 487;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
					return 543;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
					return 544;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
					return 545;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
					return 546;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
					return 547;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
					return 548;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
					return 549;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
					return 550;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
					return 551;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
					return 552;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
					return 553;
			}
			break;
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
					return 554;
			}
			break;
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
					return 555;
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
					return 556;
				case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
					return 557;
			}
			break;
	}
	return 0;
}

int func_56(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_34(func_57(iParam0, iParam1), iParam2, 0);
	return iVar0;
}

int func_57(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0 || func_37() == 0) || (func_159() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 681;
			case 1:
				return 682;
			case 2:
				return 683;
			case 3:
				return 684;
			case 4:
				return 1750;
			case 5:
				return 2432;
			case 6:
				return 2824;
			case 7:
				return 5498;
			case 8:
				return 5502;
			case 9:
				return 5506;
			case 10:
				return 5619;
			case 11:
				return 5623;
			case 12:
				return 5627;
			case 13:
				return 5631;
			case 14:
				return 6370;
			case 15:
				return 6493;
			case 16:
				return 6513;
			case 17:
				return 6519;
		}
	}
	return 1750;
}

char* func_58(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<7> Var41;

	if (iParam1 == joaat("WEAPON_KNUCKLE"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_KNUCKLE_VARMOD_BASE"):
				return "WT_KNUCKLE";
			case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
				return "WCT_KNUCK_02";
			case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
				return "WCT_KNUCK_BG";
			case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
				return "WCT_KNUCK_DLR";
			case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
				return "WCT_KNUCK_DMD";
			case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
				return "WCT_KNUCK_HT";
			case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
				return "WCT_KNUCK_LV";
			case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
				return "WCT_KNUCK_PC";
			case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
				return "WCT_KNUCK_SLG";
			case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
				return "WCT_KNUCK_VG";
		}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE";
		case joaat("COMPONENT_AT_RAILCOVER_01"):
			return "WCT_RAIL";
		case joaat("COMPONENT_AT_AR_AFGRIP"):
			return "WCT_GRIP";
		case joaat("COMPONENT_AT_PI_FLSH"):
			return "WCT_FLASH";
		case joaat("COMPONENT_AT_AR_FLSH"):
			return "WCT_FLASH";
		case joaat("COMPONENT_AT_SCOPE_MACRO"):
			return "WCT_SCOPE_MAC";
		case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
			return "WCT_SCOPE_MAC";
		case joaat("COMPONENT_AT_SCOPE_SMALL"):
			return "WCT_SCOPE_SML";
		case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
			return "WCT_SCOPE_SML";
		case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
			return "WCT_SCOPE_MED";
		case joaat("COMPONENT_AT_SCOPE_LARGE"):
			return "WCT_SCOPE_LRG";
		case joaat("COMPONENT_AT_SCOPE_MAX"):
			return "WCT_SCOPE_MAX";
		case joaat("COMPONENT_AT_PI_SUPP"):
			return "WCT_SUPP";
		case joaat("COMPONENT_AT_AR_SUPP"):
			return "WCT_SUPP";
		case joaat("COMPONENT_AT_AR_SUPP_02"):
			return "WCT_SUPP";
		case joaat("COMPONENT_AT_SR_SUPP"):
			return "WCT_SUPP";
		case joaat("COMPONENT_PISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_APPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_MICROSMG_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_SMG_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_SMG_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_MG_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_MG_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_COMBATMG_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_MINIGUN_CLIP_01"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_PISTOL50_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return "WCT_CLIP2";
		case 195735895:
			return "WCT_CLIP1";
		case 1525977990:
			return "WCT_CLIP1";
		case 1824470811:
			return "WCT_CLIP2";
		case -890514874:
			return "WCT_CLIP1";
		case -507117574:
			return "WCT_CLIP2";
		case -124428919:
			return "WCT_CLIP1";
		case 1048471894:
			return "WCT_CLIP2";
		case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
			return "WCT_SCOPE_LRG";
		case joaat("COMPONENT_AT_PI_SUPP_02"):
			return "WCT_SUPP";
		case joaat("COMPONENT_COMBATPDW_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_COMBATPDW_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
		case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
		case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
			return "WCT_VAR_SIL";
		case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_WOOD";
		case joaat("COMPONENT_SMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
		case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_WOOD";
		case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
			return "WCT_VAR_METAL";
		case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM";
		case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_WOOD";
		case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM";
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
			return "WCT_SB_BASE";
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
			return "WCT_SB_VAR1";
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
			return "WCT_SB_VAR2";
		case joaat("COMPONENT_REVOLVER_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
			return "WCT_REV_VARB";
		case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
			return "WCT_REV_VARG";
		case joaat("COMPONENT_SMG_CLIP_03"):
			return "WCT_CLIP_DRM";
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return "WCT_CLIP_BOX";
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return "WCT_CLIP_DRM";
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			return "WCT_CLIP_DRM";
		case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
			return "WCT_VAR_GUN";
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
		case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
			return "WCT_SCOPE_MAC2";
		case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
			return "WCT_SCOPE_SML2";
		case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
			return "WCT_VAR_RAY18";
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
			return "WCT_SUPP";
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_28(iParam1, &iVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var41))
						{
							if (Var41.f_3 == iParam0)
							{
								return func_27(&(Var41.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

void func_59(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_64(iParam0, iParam1, -1))
		{
			func_60(iParam0, iParam1, 1);
		}
	}
	else if (func_64(iParam0, iParam1, -1))
	{
		func_60(iParam0, iParam1, 0);
	}
}

void func_60(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_63(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, func_30(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_30(iVar1));
		}
		func_61(func_62(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

void func_61(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0 || func_37() == 0) || (func_159() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 687;
			case 1:
				return 688;
			case 2:
				return 689;
			case 3:
				return 690;
			case 4:
				return 1753;
			case 5:
				return 2435;
			case 6:
				return 2827;
			case 7:
				return 5501;
			case 8:
				return 5505;
			case 9:
				return 5509;
			case 10:
				return 5622;
			case 11:
				return 5626;
			case 12:
				return 5630;
			case 13:
				return 5634;
			case 14:
				return 6373;
			case 15:
				return 6496;
			case 16:
				return 6516;
			case 17:
				return 6522;
		}
	}
	return 1753;
}

int func_63(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_34(func_62(iParam0, iParam1), iParam2, 0);
	return iVar0;
}

bool func_64(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (func_41())
	{
		return false;
	}
	iVar0 = func_63(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

void func_65(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_94(iParam0, iParam1, -1))
		{
			func_66(iParam0, iParam1, 1);
		}
	}
	else if (func_94(iParam0, iParam1, -1))
	{
		func_66(iParam0, iParam1, 0);
	}
}

void func_66(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_68(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, func_30(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_30(iVar1));
		}
		func_61(func_67(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

int func_67(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0 || func_37() == 0) || (func_159() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 810;
			case 1:
				return 811;
			case 2:
				return 812;
			case 3:
				return 813;
			case 4:
				return 1751;
			case 5:
				return 2433;
			case 6:
				return 2825;
			case 7:
				return 5499;
			case 8:
				return 5503;
			case 9:
				return 5507;
			case 10:
				return 5620;
			case 11:
				return 5624;
			case 12:
				return 5628;
			case 13:
				return 5632;
			case 14:
				return 6371;
			case 15:
				return 6494;
			case 16:
				return 6514;
			case 17:
				return 6520;
		}
	}
	return 11511;
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_34(func_67(iParam0, iParam1), iParam2, 0);
	return iVar0;
}

void func_69(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_53(iParam0, iParam1, -1))
		{
			func_84(iParam0, iParam1, 1);
		}
		if (bParam3)
		{
			if (func_82(iParam0, iParam1) == 0)
			{
				func_77(16, func_58(iParam0, 0), func_81(iParam0, 0), func_80(iParam1), func_79(iParam1), -1, 0, 0, 0, -1, 0);
				func_75(iParam0, iParam1, 1);
			}
		}
		if (bParam4)
		{
			func_70(iParam0, iParam1, 1);
		}
	}
	else if (func_53(iParam0, iParam1, -1))
	{
		func_84(iParam0, iParam1, 0);
	}
}

void func_70(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_74(iParam0, iParam1, -1))
		{
			func_71(iParam0, iParam1, 1);
		}
	}
	else if (func_74(iParam0, iParam1, -1))
	{
		func_71(iParam0, iParam1, 0);
	}
}

void func_71(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_73(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, func_30(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_30(iVar1));
		}
		func_61(func_72(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

int func_72(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0 || func_37() == 0) || (func_159() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 654;
			case 1:
				return 655;
			case 2:
				return 656;
			case 3:
				return 657;
			case 4:
				return 1752;
			case 5:
				return 2434;
			case 6:
				return 2826;
			case 7:
				return 5500;
			case 8:
				return 5504;
			case 9:
				return 5508;
			case 10:
				return 5621;
			case 11:
				return 5625;
			case 12:
				return 5629;
			case 13:
				return 5633;
			case 14:
				return 6372;
			case 15:
				return 6495;
			case 16:
				return 6515;
			case 17:
				return 6521;
		}
	}
	return 11511;
}

int func_73(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_34(func_72(iParam0, iParam1), iParam2, 0);
	return iVar0;
}

bool func_74(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (func_41())
	{
		return false;
	}
	iVar0 = func_73(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

void func_75(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_54(iParam0, iParam1);
	if (iVar0 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&(Global_2547060.f_991[func_76(iParam0, iParam1)]), func_30(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2547060.f_991[func_76(iParam0, iParam1)]), func_30(iVar0));
		}
	}
}

int func_76(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_54(iParam0, iParam1);
	switch (func_38(iVar0))
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 11;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 14;
	}
	return 0;
}

void func_77(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	int iVar0;

	iVar0 = func_78(&Global_1385029);
	Global_1385029[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1385029[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1385029[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1385029[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1385029[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1385029[iVar0 /*106*/].f_97 = iParam5;
	Global_1385029[iVar0 /*106*/].f_104 = iParam9;
	Global_1385029[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		StringCopy(&(Global_1385029[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_78(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_79(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
			return "MPWeaponsUnusedForNow";
		case joaat("WEAPON_STUNGUN"):
			return "MPWeaponsGang0_small";
		case joaat("WEAPON_PISTOL"):
			return "MPWeaponsGang1_small";
		case joaat("WEAPON_APPISTOL"):
			return "MPWeaponsGang1_small";
		case joaat("GADGET_PARACHUTE"):
			return "MPWeaponsGang1_small";
		case joaat("WEAPON_SMG"):
			return "MPWeaponsGang0_small";
		case joaat("WEAPON_SNIPERRIFLE"):
			return "MPWeaponsGang0_small";
		case joaat("WEAPON_CARBINERIFLE"):
			return "MPWeaponsGang0_small";
		case joaat("WEAPON_SPECIALCARBINE"):
			return "MPWeaponsCommon_small";
		case joaat("WEAPON_SNSPISTOL"):
			return "MPWeaponsCommon_small";
		case joaat("WEAPON_PUMPSHOTGUN"):
			return "MPWeaponsCommon_small";
		case joaat("WEAPON_GRENADE"):
			return "MPWeaponsGang0_small";
		case joaat("WEAPON_STICKYBOMB"):
			return "MPWeaponsCommon_small";
		case joaat("WEAPON_GRENADELAUNCHER"):
			return "MPWeaponsCommon_small";
		case joaat("WEAPON_COMBATMG"):
			return "MPWeaponsGang0_small";
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return "MPWeaponsCommon_small";
		case joaat("WEAPON_RPG"):
			return "MPWeaponsCommon_small";
		case joaat("WEAPON_HEAVYSNIPER"):
			return "MPWeaponsGang0_small";
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return "MPWeaponsGang0_small";
		case joaat("WEAPON_MICROSMG"):
			return "MPWeaponsCommon_small";
		case joaat("WEAPON_ASSAULTRIFLE"):
			return "MPWeaponsGang1_small";
		case joaat("WEAPON_MG"):
			return "MPWeaponsGang1_small";
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return "MPWeaponsGang1_small";
		case joaat("WEAPON_MINIGUN"):
			return "MPWeaponsGang1_small";
		case joaat("WEAPON_COMBATPISTOL"):
			return "MPWeaponsCommon_small";
		case joaat("WEAPON_SMOKEGRENADE"):
			return "MPWeaponsCommon_small";
		case joaat("AMMO_SPACE_ROCKET"):
			return "MPWeaponsCommon_small";
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			return "MPWeaponsCommon_small";
		case joaat("WEAPON_MOLOTOV"):
			return "MPWeaponsUnusedForNow";
		case joaat("WEAPON_PETROLCAN"):
			return "MPWeaponsUnusedForNow";
	}
	return "";
}

char* func_80(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
			return "W_ME_KNIFE_01";
		case joaat("WEAPON_STUNGUN"):
			return "W_PI_Stungun";
		case joaat("WEAPON_PISTOL"):
			return "W_PI_Pistol";
		case joaat("GADGET_PARACHUTE"):
			return "Parachute_Main";
		case joaat("WEAPON_SMG"):
			return "W_SB_SMG";
		case joaat("WEAPON_SNIPERRIFLE"):
			return "W_SR_SniperRifle";
		case joaat("WEAPON_CARBINERIFLE"):
			return "W_AR_CarbineRifle";
		case joaat("WEAPON_SPECIALCARBINE"):
			return "W_AR_DLC_SpecialCarbine";
		case joaat("WEAPON_SNSPISTOL"):
			return "W_AR_DLC_SNSPISTOL";
		case joaat("WEAPON_PUMPSHOTGUN"):
			return "W_SG_PumpShotgun";
		case joaat("WEAPON_GRENADE"):
			return "W_Ex_GrenadeFrag";
		case joaat("WEAPON_STICKYBOMB"):
			return "W_Ex_PE";
		case joaat("WEAPON_GRENADELAUNCHER"):
			return "W_R_GrenadeLauncher";
		case joaat("WEAPON_COMBATMG"):
			return "W_MG_CombatMG";
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return "W_SG_AssaultShotgun";
		case joaat("WEAPON_APPISTOL"):
			return "W_PI_AppPistol";
		case joaat("WEAPON_RPG"):
			return "W_LR_RPG";
		case joaat("WEAPON_HEAVYSNIPER"):
			return "W_SR_HeavySniper";
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return "W_AR_AdvancedRifle";
		case joaat("WEAPON_MICROSMG"):
			return "W_SB_MicroSMG";
		case joaat("WEAPON_ASSAULTRIFLE"):
			return "W_AR_AssaultRifle";
		case joaat("WEAPON_MG"):
			return "W_MG_MG";
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return "W_SG_SAWNOFF";
		case joaat("WEAPON_MINIGUN"):
			return "W_MG_Minigun";
		case joaat("WEAPON_COMBATPISTOL"):
			return "W_PI_CombatPistol";
		case joaat("WEAPON_SMOKEGRENADE"):
			return "W_Ex_GrenadeSmoke";
		case joaat("WEAPON_PETROLCAN"):
			return "W_AM_Jerrycan";
		case joaat("WEAPON_MOLOTOV"):
			return "W_EX_Molotov";
		case joaat("AMMO_SPACE_ROCKET"):
			return "rocket";
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			return "rocket";
	}
	return "";
}

char* func_81(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<15> Var41;

	switch (iParam0)
	{
		case 0:
			return "WCD_NONE";
		case joaat("COMPONENT_AT_RAILCOVER_01"):
			return "WCD_AT_RAIL";
		case joaat("COMPONENT_AT_AR_AFGRIP"):
			return "WCD_GRIP";
		case joaat("COMPONENT_AT_PI_FLSH"):
			return "WCD_FLASH";
		case joaat("COMPONENT_AT_AR_FLSH"):
			return "WCD_FLASH";
		case joaat("COMPONENT_AT_SCOPE_MACRO"):
			return "WCD_SCOPE_MAC";
		case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
			return "WCD_SCOPE_MAC";
		case joaat("COMPONENT_AT_SCOPE_SMALL"):
			return "WCD_SCOPE_SML";
		case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
			return "WCD_SCOPE_SML";
		case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
			return "WCD_SCOPE_MED";
		case joaat("COMPONENT_AT_SCOPE_LARGE"):
			return "WCD_SCOPE_LRG";
		case joaat("COMPONENT_AT_SCOPE_MAX"):
			return "WCD_SCOPE_MAX";
		case joaat("COMPONENT_AT_PI_SUPP"):
			return "WCD_PI_SUPP";
		case joaat("COMPONENT_AT_PI_SUPP_02"):
			return "WCD_PI_SUPP";
		case joaat("COMPONENT_AT_AR_SUPP"):
			return "WCD_AR_SUPP";
		case joaat("COMPONENT_AT_AR_SUPP_02"):
			return "WCD_AR_SUPP2";
		case joaat("COMPONENT_AT_SR_SUPP"):
			return "WCD_SR_SUPP";
		case joaat("COMPONENT_PISTOL_CLIP_01"):
			return "WCD_P_CLIP1";
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return "WCD_P_CLIP2";
		case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
			return "WCD_CP_CLIP1";
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return "WCD_CP_CLIP2";
		case joaat("COMPONENT_APPISTOL_CLIP_01"):
			return "WCD_AP_CLIP1";
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return "WCD_AP_CLIP2";
		case joaat("COMPONENT_MICROSMG_CLIP_01"):
			return "WCDMSMG_CLIP1";
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return "WCDMSMG_CLIP2";
		case joaat("COMPONENT_SMG_CLIP_01"):
			return "WCD_SMG_CLIP1";
		case joaat("COMPONENT_SMG_CLIP_02"):
			return "WCD_SMG_CLIP2";
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
			return "WCD_AR_CLIP1";
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return "WCD_AR_CLIP2";
		case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
			return "WCD_CR_CLIP1";
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return "WCD_CR_CLIP2";
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
			return "WCD_ADR_CLIP1";
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return "WCD_ADR_CLIP2";
		case joaat("COMPONENT_MG_CLIP_01"):
			return "WCD_MG_CLIP1";
		case joaat("COMPONENT_MG_CLIP_02"):
			return "WCD_MG_CLIP2";
		case joaat("COMPONENT_COMBATMG_CLIP_01"):
			return "WCDCMG_CLIP1";
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return "WCDCMG_CLIP2";
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
			return "WCD_AS_CLIP1";
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return "WCD_AS_CLIP2";
		case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
			return "WCD_SR_CLIP1";
		case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
			return "WCD_HS_CLIP1";
		case joaat("COMPONENT_MINIGUN_CLIP_01"):
			return "WCD_MIG_CLIP2";
		case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
			return "WCD_ASMG_CLIP1";
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return "WCD_ASMG_CLIP2";
		case joaat("COMPONENT_PISTOL50_CLIP_01"):
			return "WCD_P50_CLIP1";
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return "WCD_P50_CLIP2";
		case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
			return "WCD_VAR_AR";
		case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
			return "WCD_VAR_ADR";
		case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
			return "WCD_VAR_CR";
		case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
			return "WCD_VAR_AP";
		case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
			return "WCD_VAR_P";
		case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
			return "WCD_VAR_P50";
		case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
			return "WCD_VAR_HPST";
		case joaat("COMPONENT_SMG_VARMOD_LUXE"):
			return "WCD_VAR_SMG";
		case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
			return "WCD_VAR_MSMG";
		case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
			return "WCD_VAR_SOF";
		case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
			return "WCD_VAR_SNP";
		case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
			return "WCD_VAR_MKRF";
		case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
			return "WCD_VAR_DESC";
		case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
			return "WCD_VAR_DESC";
		case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
			return "WCD_VAR_DESC";
		case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
			return "WCD_VAR_DESC";
		case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
			return "WCD_VAR_DESC";
		case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
			return "WCD_VAR_DESC";
		case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
			return "WCD_VAR_DESC";
		case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
			return "WCD_VAR_DESC";
		case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
			return "WCD_VAR_DESC";
		case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
			return "WCD_VAR_ASMG";
		case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
			return "WCD_VAR_BPR";
		case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
			return "WCD_VAR_CBMG";
		case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
			return "WCD_VAR_CBP";
		case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
			return "WCD_VAR_MG";
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
			return "WCD_VAR_PSHT";
		case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
			return "WCD_VAR_SNS";
		case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
			return "WCD_VAR_SCAR";
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
			return "WCD_VAR_DESC";
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
			return "WCD_VAR_DESC";
		case joaat("COMPONENT_REVOLVER_CLIP_01"):
			return "WCD_P_CLIP1";
		case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
			return "WCD_REV_VARB";
		case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
			return "WCD_REV_VARG";
		case joaat("COMPONENT_SMG_CLIP_03"):
			return "WCD_CLIP3";
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return "WCD_CLIP3";
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return "WCD_CLIP3";
		case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
			return "WCD_VAR_GUN";
		case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
			return "WCD_CLIP2";
		case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
			return "WCD_SCOPE_MAC";
		case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
			return "WCD_SCOPE_SML";
		case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
			return "WCD_VAR_RAY18";
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
			return "WCD_CLIP2";
		case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
			return "WCD_PI_SUPP";
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_28(iParam1, &iVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var41))
						{
							if (Var41.f_3 == iParam0)
							{
								return func_27(&(Var41.f_14));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCD_INVALID";
}

bool func_82(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_83(iParam0, iParam1);
	iVar1 = func_54(iParam0, iParam1);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

var func_83(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_2547060.f_991[func_76(iParam0, iParam1)];
	return uVar0;
}

void func_84(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_56(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, func_30(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_30(iVar1));
		}
		func_61(func_57(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<4> Var43;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SMG_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SMG_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_SMG_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 9:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_SR_SUPP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_28(iParam0, &iVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var43))
						{
							if (!func_86(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

bool func_86(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return true;
	}
	return false;
}

bool func_87(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (iParam2 == 0)
	{
	}
	if (func_41())
	{
		return false;
	}
	iVar0 = func_88(iParam0, iParam1);
	iVar1 = func_31(iParam0);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

int func_88(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_34(func_89(iParam0), iParam1, 0);
	return iVar0;
}

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0 || func_37() == 0) || (func_159() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 679;
			case 1:
				return 680;
			case 2:
				return 2427;
		}
	}
	return 11511;
}

bool func_90(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (iParam2 == 0)
	{
	}
	if (func_41())
	{
		return false;
	}
	if (func_42() == 0)
	{
		return false;
	}
	if (iParam0 != joaat("GADGET_PARACHUTE") && iParam0 != joaat("WEAPON_RAILGUN"))
	{
		if (func_39(func_93(iParam0), -1))
		{
			return false;
		}
	}
	iVar0 = func_91(iParam0, iParam1);
	iVar1 = func_31(iParam0);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

int func_91(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_34(func_92(iParam0), iParam1, 0);
	return iVar0;
}

int func_92(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0 || func_37() == 0) || (func_159() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 799;
			case 1:
				return 800;
			case 2:
				return 2418;
		}
	}
	return 11511;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 18;
		case joaat("WEAPON_GRENADE"):
			return 66;
		case joaat("WEAPON_SMOKEGRENADE"):
			return 68;
		case joaat("WEAPON_STICKYBOMB"):
			return 70;
		case joaat("WEAPON_MOLOTOV"):
			return 72;
		case joaat("WEAPON_PISTOL"):
			return 18;
		case joaat("WEAPON_COMBATPISTOL"):
			return 40;
		case joaat("WEAPON_PISTOL50"):
			return 22;
		case joaat("WEAPON_APPISTOL"):
			return 24;
		case joaat("WEAPON_MICROSMG"):
			return 26;
		case joaat("WEAPON_SMG"):
			return 28;
		case joaat("WEAPON_ASSAULTSMG"):
			return 30;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 32;
		case joaat("WEAPON_CARBINERIFLE"):
			return 34;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 36;
		case joaat("WEAPON_MG"):
			return 38;
		case joaat("WEAPON_ASSAULTMG"):
			return 42;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 44;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 46;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 48;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 50;
		case joaat("WEAPON_SNIPERRIFLE"):
			return 54;
		case joaat("WEAPON_HEAVYSNIPER"):
			return 56;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 60;
		case joaat("WEAPON_RPG"):
			return 62;
		case joaat("WEAPON_MINIGUN"):
			return 64;
		case joaat("WEAPON_STUNGUN"):
			return 52;
		case joaat("WEAPON_PETROLCAN"):
			return 75;
		case joaat("WEAPON_KNIFE"):
			return 2;
		case joaat("WEAPON_NIGHTSTICK"):
			return 4;
		case joaat("WEAPON_HAMMER"):
			return 12;
		case joaat("WEAPON_BAT"):
			return 14;
		case joaat("WEAPON_CROWBAR"):
			return 6;
		case joaat("WEAPON_GOLFCLUB"):
			return 16;
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 58;
		case joaat("WEAPON_COMBATMG"):
			return 40;
		case joaat("WEAPON_BOTTLE"):
			return 143;
		case joaat("WEAPON_SPECIALCARBINE"):
			return 283;
		case joaat("WEAPON_SNSPISTOL"):
			return 145;
		case joaat("WEAPON_HEAVYPISTOL"):
			return 281;
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 285;
		case joaat("WEAPON_GUSENBERG"):
			return 287;
		case joaat("WEAPON_DAGGER"):
			return 308;
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 310;
		case joaat("WEAPON_FIREWORK"):
			return 312;
		case joaat("WEAPON_MUSKET"):
			return 314;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 326;
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 328;
		case joaat("WEAPON_PROXMINE"):
			return 332;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 334;
		case joaat("WEAPON_COMBATPDW"):
			return 336;
		case joaat("WEAPON_KNUCKLE"):
			return 338;
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 340;
		case joaat("WEAPON_HATCHET"):
			return 330;
		case joaat("WEAPON_MACHETE"):
			return 342;
		case joaat("WEAPON_MACHINEPISTOL"):
			return 344;
		case joaat("WEAPON_COMPACTRIFLE"):
			return 347;
		case joaat("WEAPON_DBSHOTGUN"):
			return 349;
		case joaat("WEAPON_FLASHLIGHT"):
			return 351;
		case joaat("WEAPON_REVOLVER"):
			return 354;
		case joaat("WEAPON_SWITCHBLADE"):
			return 356;
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 361;
		case joaat("WEAPON_MINISMG"):
			return 367;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 365;
		case joaat("WEAPON_BATTLEAXE"):
			return 363;
		case joaat("WEAPON_PIPEBOMB"):
			return 369;
		case joaat("WEAPON_POOLCUE"):
			return 371;
		case joaat("WEAPON_WRENCH"):
			return 10;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 32;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 34;
		case joaat("WEAPON_COMBATMG_MK2"):
			return 40;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 56;
		case joaat("WEAPON_PISTOL_MK2"):
			return 18;
		case joaat("WEAPON_SMG_MK2"):
			return 28;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 328;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 44;
		case joaat("WEAPON_REVOLVER_MK2"):
			return 354;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 145;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 283;
		case joaat("WEAPON_DOUBLEACTION"):
			return 395;
		case joaat("WEAPON_STONE_HATCHET"):
			return 401;
		case joaat("WEAPON_RAYPISTOL"):
			return 403;
		case joaat("WEAPON_RAYCARBINE"):
			return 403;
		case joaat("WEAPON_RAYMINIGUN"):
			return 403;
		case joaat("WEAPON_NAVYREVOLVER"):
			return 411;
		case joaat("WEAPON_CERAMICPISTOL"):
			return 409;
		case joaat("WEAPON_HAZARDCAN"):
			return 413;
	}
	return 2;
}

bool func_94(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (func_41())
	{
		return false;
	}
	iVar0 = func_68(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
			return joaat("WEAPON_PISTOL");
		case joaat("WEAPON_SMG_MK2"):
			return joaat("WEAPON_SMG");
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return joaat("WEAPON_ASSAULTRIFLE");
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return joaat("WEAPON_CARBINERIFLE");
		case joaat("WEAPON_COMBATMG_MK2"):
			return joaat("WEAPON_COMBATMG");
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return joaat("WEAPON_HEAVYSNIPER");
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return joaat("WEAPON_BULLPUPRIFLE");
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return joaat("WEAPON_MARKSMANRIFLE");
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return joaat("WEAPON_PUMPSHOTGUN");
		case joaat("WEAPON_REVOLVER_MK2"):
			return joaat("WEAPON_REVOLVER");
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return joaat("WEAPON_SNSPISTOL");
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return joaat("WEAPON_SPECIALCARBINE");
		default:
			break;
	}
	return 0;
}

bool func_96(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return true;
	}
	return false;
}

int func_97(var uParam0)
{
	return uParam0->f_281;
}

void func_98(var uParam0, var uParam1)
{
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HAMMER")) && iLocal_66[10] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_HAMMER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PISTOL50")) && iLocal_66[0] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_PISTOL50"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPSHOTGUN")) && iLocal_66[1] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_BULLPUPSHOTGUN"), uParam0, *uParam1, 0);
	}
	if (func_106(1, 0))
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SAWNOFFSHOTGUN")) && iLocal_66[2] == uParam1->f_5)
		{
			func_107(joaat("WEAPON_SAWNOFFSHOTGUN"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BOTTLE")) && iLocal_66[3] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_BOTTLE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SNSPISTOL")) && iLocal_66[4] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_SNSPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_GUSENBERG")) && iLocal_66[11] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_GUSENBERG"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYPISTOL")) && iLocal_66[7] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_HEAVYPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SPECIALCARBINE")) && iLocal_66[5] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_SPECIALCARBINE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPRIFLE")) && iLocal_66[6] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_BULLPUPRIFLE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DAGGER")) && iLocal_66[8] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_DAGGER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_VINTAGEPISTOL")) && iLocal_66[9] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_VINTAGEPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FIREWORK")) && iLocal_66[14] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_FIREWORK"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MUSKET")) && iLocal_66[13] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MUSKET"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FLAREGUN")) && iLocal_66[12] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_FLAREGUN"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYSHOTGUN")) && iLocal_66[15] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_HEAVYSHOTGUN"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANRIFLE")) && iLocal_66[16] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MARKSMANRIFLE"), uParam0, *uParam1, 0);
	}
	if (func_105() || Global_262145.f_19752)
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HATCHET")) && iLocal_66[22] == uParam1->f_5)
		{
			func_107(joaat("WEAPON_HATCHET"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PROXMINE")) && iLocal_66[17] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_PROXMINE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HOMINGLAUNCHER")) && iLocal_66[18] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_HOMINGLAUNCHER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMBATPDW")) && iLocal_66[19] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_COMBATPDW"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANPISTOL")) && iLocal_66[20] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MARKSMANPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_KNUCKLE")) && iLocal_66[21] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_KNUCKLE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MACHETE")) && iLocal_66[23] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MACHETE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MACHINEPISTOL")) && iLocal_66[24] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MACHINEPISTOL"), uParam0, *uParam1, 0);
	}
	if ((Global_262145.f_11577 && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FLASHLIGHT"))) && iLocal_66[25] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_FLASHLIGHT"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_REVOLVER")) && iLocal_66[26] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_REVOLVER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SWITCHBLADE")) && iLocal_66[27] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_SWITCHBLADE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DBSHOTGUN")) && iLocal_66[28] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_DBSHOTGUN"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMPACTRIFLE")) && iLocal_66[29] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_COMPACTRIFLE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_AUTOSHOTGUN")) && iLocal_66[30] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_AUTOSHOTGUN"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BATTLEAXE")) && iLocal_66[31] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_BATTLEAXE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMPACTLAUNCHER")) && iLocal_66[32] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_COMPACTLAUNCHER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MINISMG")) && iLocal_66[33] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MINISMG"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PIPEBOMB")) && iLocal_66[34] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_PIPEBOMB"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_POOLCUE")) && iLocal_66[35] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_POOLCUE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_WRENCH")) && iLocal_66[36] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_WRENCH"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_ASSAULTRIFLE_MK2")) && iLocal_66[37] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_ASSAULTRIFLE_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_CARBINERIFLE_MK2")) && iLocal_66[38] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_CARBINERIFLE_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMBATMG_MK2")) && iLocal_66[39] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_COMBATMG_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYSNIPER_MK2")) && iLocal_66[40] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_HEAVYSNIPER_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PISTOL_MK2")) && iLocal_66[41] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_PISTOL_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SMG_MK2")) && iLocal_66[42] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_SMG_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPRIFLE_MK2")) && iLocal_66[43] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_BULLPUPRIFLE_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANRIFLE_MK2")) && iLocal_66[44] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MARKSMANRIFLE_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PUMPSHOTGUN_MK2")) && iLocal_66[45] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_PUMPSHOTGUN_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_REVOLVER_MK2")) && iLocal_66[46] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_REVOLVER_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SNSPISTOL_MK2")) && iLocal_66[47] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_SNSPISTOL_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SPECIALCARBINE_MK2")) && iLocal_66[48] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_SPECIALCARBINE_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DOUBLEACTION")) && iLocal_66[49] == uParam1->f_5)
	{
		if (Global_262145.f_22936 && (func_104() || Global_1694124))
		{
			func_107(joaat("WEAPON_DOUBLEACTION"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_STONE_HATCHET")) && iLocal_66[50] == uParam1->f_5)
	{
		if (Global_262145.f_23635 && func_100())
		{
			func_107(joaat("WEAPON_STONE_HATCHET"), uParam0, *uParam1, 0);
		}
	}
	if ((WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYCARBINE")) && iLocal_66[51] == uParam1->f_5) && Global_262145.f_25970)
	{
		func_107(joaat("WEAPON_RAYCARBINE"), uParam0, *uParam1, 0);
	}
	if ((WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYMINIGUN")) && iLocal_66[52] == uParam1->f_5) && Global_262145.f_25969)
	{
		func_107(joaat("WEAPON_RAYMINIGUN"), uParam0, *uParam1, 0);
	}
	if ((WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYPISTOL")) && (((func_17(25007, -1, -1) || func_17(25002, -1, -1)) || func_90(joaat("WEAPON_RAYPISTOL"), -1, 0)) || Global_262145.f_24978)) && iLocal_66[53] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_RAYPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_CERAMICPISTOL")) && iLocal_66[54] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_CERAMICPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_NAVYREVOLVER")) && iLocal_66[55] == uParam1->f_5)
	{
		if (Global_262145.f_27592 && (func_99() || Global_1694130))
		{
			func_107(joaat("WEAPON_NAVYREVOLVER"), uParam0, *uParam1, 0);
		}
	}
}

int func_99()
{
	if (func_17(28158, -1, -1))
	{
		return 1;
	}
	return 0;
}

bool func_100()
{
	if (func_101(7315, -1, -1) >= 6)
	{
		return true;
	}
	return false;
}

int func_101(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == -1)
	{
		iParam1 = func_143();
	}
	iVar0 = 0;
	iVar1 = func_103(iParam0, iParam1);
	iVar2 = func_102(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_102(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - STATS::_0x94F12ABF9C79E339((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - STATS::_0x94F12ABF9C79E339((iParam0 - 28483)) * 8) * 8;
	}
	return iVar0;
}

int func_103(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = func_143();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), false, true, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), true, true, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), false, false, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), true, false, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), false, false, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), false, true, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), false, false, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), false, true, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), false, true, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), false, true, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), false, true, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), false, true, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), false, true, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), false, true, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), false, false, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), false, true, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), false, true, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), false, true, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), false, true, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), false, true, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), false, true, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), false, true, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), false, true, iParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

int func_104()
{
	if (func_101(18981, -1, -1) >= 4)
	{
		return 1;
	}
	return 0;
}

int func_105()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAVE_JUST_UPLOAD_LATER())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return 1;
	}
	else if (Global_150472 == 3)
	{
		return 0;
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_106(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (MISC::IS_BIT_SET(Global_111638.f_668.f_1312, 2))
		{
			return true;
		}
	}
	if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
	{
		if (!bParam1 || NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			if (!MISC::IS_PS3_VERSION() && !MISC::IS_ORBIS_VERSION())
			{
				return true;
			}
		}
	}
	if (bParam1)
	{
		if (NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
		{
			return false;
		}
	}
	if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
	{
		return true;
	}
	return false;
}

void func_107(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char cVar0[16];
	char cVar4[16];
	float fVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	struct<5> Var13;
	struct<5> Var18;
	struct<5> Var23;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;

	iParam3 = iParam3;
	StringCopy(&cVar0, func_26(iParam0, 0), 16);
	if (((iParam0 == joaat("WEAPON_DOUBLEACTION") || iParam0 == joaat("WEAPON_COMPACTRIFLE")) || iParam0 == joaat("WEAPON_COMPACTLAUNCHER")) || iParam0 == joaat("WEAPON_MARKSMANRIFLE"))
	{
		StringCopy(&cVar4, func_137(iParam0, 1), 16);
	}
	else
	{
		StringCopy(&cVar4, func_137(iParam0, 0), 16);
	}
	fVar8 = func_134(iParam0);
	iVar9 = func_133(iParam0, iParam2);
	iVar10 = func_132(iParam0, iParam2);
	iVar11 = func_131(iParam0, iParam2);
	fVar12 = func_130(iParam0, iParam2);
	WEAPON::GET_WEAPON_HUD_STATS(iParam0, &Var13);
	Var13.f_2 = WEAPON::GET_WEAPON_CLIP_SIZE(iParam0);
	bVar31 = false;
	iVar30 = 0;
	while (iVar30 <= 8)
	{
		if (uParam1->f_1[iVar30] == 0 && WEAPON::IS_WEAPON_VALID(iParam0))
		{
			if (func_96(iParam0))
			{
				if (func_94(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), func_95(iParam0), -1))
				{
					bVar31 = true;
				}
				else
				{
					bVar31 = false;
				}
			}
			else if (func_90(iParam0, iParam2, 0))
			{
				bVar31 = true;
				if (bVar31)
				{
				}
			}
			else
			{
				bVar31 = false;
			}
			iVar29 = 0;
			while (iVar29 <= 35)
			{
				iVar28 = func_85(iParam0, iVar29);
				if (iVar28 != 0)
				{
					if (func_53(iVar28, iParam0, iParam2) && bVar31)
					{
						if (WEAPON::GET_WEAPON_COMPONENT_HUD_STATS(iVar28, &Var18))
						{
							Var23 = (Var23 + Var18);
							Var23.f_1 = (Var23.f_1 + Var18.f_1);
							Var23.f_3 = (Var23.f_3 + Var18.f_3);
							Var23.f_4 = (Var23.f_4 + Var18.f_4);
						}
					}
					if (func_64(iVar28, iParam0, iParam2))
					{
						if (func_129(iVar28))
						{
							Var23.f_2 = func_128(iParam0);
						}
						else if (func_127(iVar28))
						{
							Var23.f_2 = func_126(iParam0);
						}
					}
					if (func_94(iVar28, iParam0, iParam2))
					{
					}
				}
				iVar29++;
			}
			if (Var23.f_2 == 0)
			{
				Var23.f_2 = Var13.f_2;
			}
			func_125(iVar30, &cVar0, &cVar4, uParam1);
			func_124(iVar30, Var13, uParam1);
			func_123(iVar30, Var23, uParam1);
			if (func_15(iParam0))
			{
				func_122(iVar30, -1, uParam1);
				func_121(iVar30, Var23.f_3, uParam1);
				func_120(iVar30, -1, uParam1);
				func_119(iVar30, Var23.f_4, uParam1);
				func_118(iVar30, -1, uParam1);
				func_117(iVar30, Var23.f_2, uParam1);
			}
			else
			{
				func_122(iVar30, Var13.f_3, uParam1);
				func_121(iVar30, Var23.f_3, uParam1);
				func_120(iVar30, Var13.f_4, uParam1);
				func_119(iVar30, Var23.f_4, uParam1);
				func_118(iVar30, Var13.f_2, uParam1);
				func_117(iVar30, Var23.f_2, uParam1);
			}
			func_116(iVar30, iVar10, uParam1);
			func_115(iVar30, iVar9, uParam1);
			if (func_15(iParam0))
			{
				func_114(iVar30, -1f, uParam1);
				func_113(iVar30, -1, uParam1);
			}
			else
			{
				func_114(iVar30, fVar8, uParam1);
				func_113(iVar30, iVar11, uParam1);
			}
			func_112(iVar30, fVar12, uParam1);
			func_111(iVar30, Var13.f_1, uParam1);
			func_110(iVar30, Var23.f_1, uParam1);
			func_109(iVar30, iParam0, uParam1);
			func_108(iParam2, uParam1);
			uParam1->f_1[iVar30] = 1;
			iVar30 = 9;
		}
		iVar30++;
	}
}

void func_108(int iParam0, var uParam1)
{
	uParam1->f_276 = iParam0;
}

void func_109(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_85[iParam0] = iParam1;
}

void func_110(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_205[iParam0] = uParam1;
}

void func_111(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_155[iParam0] = uParam1;
}

void func_112(int iParam0, float fParam1, var uParam2)
{
	uParam2->f_135[iParam0] = fParam1;
}

void func_113(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_125[iParam0] = iParam1;
}

void func_114(int iParam0, float fParam1, var uParam2)
{
	uParam2->f_115[iParam0] = fParam1;
}

void func_115(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_95[iParam0] = iParam1;
}

void func_116(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_105[iParam0] = iParam1;
}

void func_117(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_215[iParam0] = uParam1;
}

void func_118(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_165[iParam0] = iParam1;
}

void func_119(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_235[iParam0] = uParam1;
}

void func_120(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_175[iParam0] = iParam1;
}

void func_121(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_225[iParam0] = uParam1;
}

void func_122(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_185[iParam0] = iParam1;
}

void func_123(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_195[iParam0] = uParam1;
}

void func_124(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_145[iParam0] = uParam1;
}

void func_125(int iParam0, char* sParam1, char* sParam2, var uParam3)
{
	StringCopy(&(uParam3->f_11[iParam0 /*4*/]), sParam1, 16);
	StringCopy(&(uParam3->f_48[iParam0 /*4*/]), sParam2, 16);
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return 16;
		case joaat("WEAPON_COMBATPISTOL"):
			return 16;
		case joaat("WEAPON_APPISTOL"):
			return 36;
		case joaat("WEAPON_PISTOL_MK2"):
			return 16;
		case joaat("WEAPON_MICROSMG"):
			return 30;
		case joaat("WEAPON_SMG"):
			return 60;
		case joaat("WEAPON_SMG_MK2"):
			return 60;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 60;
		case joaat("WEAPON_CARBINERIFLE"):
			return 60;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 60;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 60;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 60;
		case joaat("WEAPON_MG"):
			return 100;
		case joaat("WEAPON_COMBATMG"):
			return 200;
		case joaat("WEAPON_COMBATMG_MK2"):
			return 200;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 32;
		case joaat("WEAPON_PISTOL50"):
			return 12;
		case joaat("WEAPON_ASSAULTSMG"):
			return 60;
		case joaat("WEAPON_SNSPISTOL"):
			return 12;
		case joaat("WEAPON_SPECIALCARBINE"):
			return 60;
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 60;
		case joaat("WEAPON_HEAVYPISTOL"):
			return 36;
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 14;
		case joaat("WEAPON_GUSENBERG"):
			return 50;
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 16;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 12;
		case joaat("WEAPON_COMBATPDW"):
			return 60;
		case joaat("WEAPON_COMPACTRIFLE"):
			return 60;
		case joaat("WEAPON_MACHINEPISTOL"):
			return 20;
		case joaat("WEAPON_MINISMG"):
			return 30;
		default:
			break;
	}
	return 0;
	return 0;
}

bool func_127(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return true;
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return true;
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return true;
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return true;
		case joaat("COMPONENT_SMG_CLIP_02"):
			return true;
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return true;
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return true;
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return true;
		case joaat("COMPONENT_MG_CLIP_02"):
			return true;
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return true;
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return true;
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return true;
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return true;
		case -507117574:
			return true;
		case 1048471894:
			return true;
		case 1824470811:
			return true;
		case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
			return true;
		case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
			return true;
		case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
			return true;
		case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
			return true;
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
			return true;
		case joaat("COMPONENT_GUSENBERG_CLIP_02"):
			return true;
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
			return true;
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
			return true;
		case joaat("COMPONENT_COMBATPDW_CLIP_02"):
			return true;
		case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
			return true;
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
			return true;
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
			return true;
		case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
			return true;
		case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
			return true;
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
			return true;
		case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
			return true;
		case joaat("COMPONENT_SMG_MK2_CLIP_02"):
			return true;
		case joaat("COMPONENT_MINISMG_CLIP_02"):
			return true;
	}
	return false;
}

int func_128(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_SMG"):
			return 100;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 100;
		case joaat("WEAPON_CARBINERIFLE"):
			return 100;
		case joaat("WEAPON_SMG_MK2"):
			return 100;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 100;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 100;
		case joaat("WEAPON_SPECIALCARBINE"):
			return 100;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 30;
		case joaat("WEAPON_COMBATPDW"):
			return 100;
		case joaat("WEAPON_COMPACTRIFLE"):
			return 100;
		case joaat("WEAPON_MACHINEPISTOL"):
			return 30;
		default:
			break;
	}
	return 0;
	return 0;
}

bool func_129(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return true;
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return true;
		case joaat("COMPONENT_COMBATPDW_CLIP_03"):
			return true;
		case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
			return true;
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			return true;
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
			return true;
		case joaat("COMPONENT_SMG_CLIP_03"):
			return true;
		case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
			return true;
	}
	return false;
}

float func_130(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
		case joaat("WEAPON_PISTOL_MK2"):
			return (SYSTEM::TO_FLOAT(func_34(250, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(251, iParam1, 0)));
		case joaat("WEAPON_COMBATPISTOL"):
			return (SYSTEM::TO_FLOAT(func_34(260, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(261, iParam1, 0)));
		case joaat("WEAPON_APPISTOL"):
			return (SYSTEM::TO_FLOAT(func_34(280, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(281, iParam1, 0)));
		case joaat("WEAPON_MICROSMG"):
			return (SYSTEM::TO_FLOAT(func_34(290, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(291, iParam1, 0)));
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_SMG_MK2"):
			return (SYSTEM::TO_FLOAT(func_34(300, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(301, iParam1, 0)));
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return (SYSTEM::TO_FLOAT(func_34(320, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(321, iParam1, 0)));
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return (SYSTEM::TO_FLOAT(func_34(329, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(330, iParam1, 0)));
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return (SYSTEM::TO_FLOAT(func_34(338, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(339, iParam1, 0)));
		case joaat("WEAPON_MG"):
			return (SYSTEM::TO_FLOAT(func_34(347, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(348, iParam1, 0)));
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_COMBATMG_MK2"):
			return (SYSTEM::TO_FLOAT(func_34(356, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(357, iParam1, 0)));
		case joaat("WEAPON_PUMPSHOTGUN"):
			return (SYSTEM::TO_FLOAT(func_34(374, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(375, iParam1, 0)));
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return (SYSTEM::TO_FLOAT(func_34(383, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(384, iParam1, 0)));
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return (SYSTEM::TO_FLOAT(func_34(402, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(403, iParam1, 0)));
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return (SYSTEM::TO_FLOAT(func_34(421, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(422, iParam1, 0)));
		case joaat("WEAPON_HEAVYSNIPER"):
			return (SYSTEM::TO_FLOAT(func_34(430, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(431, iParam1, 0)));
		case joaat("WEAPON_GRENADELAUNCHER"):
			return (SYSTEM::TO_FLOAT(func_34(441, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(442, iParam1, 0)));
		case joaat("WEAPON_RPG"):
			return (SYSTEM::TO_FLOAT(func_34(448, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(449, iParam1, 0)));
		case joaat("WEAPON_MINIGUN"):
			return (SYSTEM::TO_FLOAT(func_34(455, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(456, iParam1, 0)));
		case joaat("WEAPON_GRENADE"):
			return (SYSTEM::TO_FLOAT(func_34(464, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(465, iParam1, 0)));
		case joaat("WEAPON_SMOKEGRENADE"):
			return (SYSTEM::TO_FLOAT(func_34(472, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(473, iParam1, 0)));
		case joaat("WEAPON_STICKYBOMB"):
			return (SYSTEM::TO_FLOAT(func_34(481, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(482, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(489, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(490, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(411, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(412, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(193, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(195, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(201, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(203, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(229, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(231, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(236, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(238, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(208, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(210, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(243, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(245, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(270, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(271, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(310, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(311, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(393, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(394, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(365, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(366, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(320, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(321, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(430, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(431, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(320, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(321, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(1729, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(1730, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(1739, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(1740, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(9487, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9488, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(9497, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9498, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(9477, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9478, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(9780, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9781, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(9790, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9791, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(9507, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9508, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(9810, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9811, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(9800, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9801, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(9888, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9889, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(9898, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9899, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(9924, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9925, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(9916, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9917, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(9932, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9933, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(9949, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9950, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(9942, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9943, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(9959, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9960, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(9967, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9968, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(10005, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10006, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(10033, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10034, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(10023, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10024, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(9995, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9996, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(9985, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9986, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(9908, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9909, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(10074, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10075, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(10084, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10085, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(10090, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10091, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(10100, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10101, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(10110, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10111, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(10118, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10119, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(222, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(224, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(10582, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10583, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(10602, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10603, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(10592, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10593, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(10612, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10613, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(10632, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10633, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(10642, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10643, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(10622, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10623, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(10845, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10846, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(11002, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(11003, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(11012, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(11013, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(11022, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(11023, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(11453, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(11454, iParam1, 0)));
			return (SYSTEM::TO_FLOAT(func_34(11443, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(11444, iParam1, 0)));
			return 0f;
		}

int func_131(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return func_34(254, iParam1, 0);
		case joaat("WEAPON_COMBATPISTOL"):
			return func_34(264, iParam1, 0);
		case joaat("WEAPON_APPISTOL"):
			return func_34(284, iParam1, 0);
		case joaat("WEAPON_MICROSMG"):
			return func_34(294, iParam1, 0);
		case joaat("WEAPON_SMG"):
			return func_34(304, iParam1, 0);
		case joaat("WEAPON_ASSAULTRIFLE"):
			return func_34(324, iParam1, 0);
		case joaat("WEAPON_CARBINERIFLE"):
			return func_34(333, iParam1, 0);
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return func_34(342, iParam1, 0);
		case joaat("WEAPON_MG"):
			return func_34(351, iParam1, 0);
		case joaat("WEAPON_COMBATMG"):
			return func_34(360, iParam1, 0);
		case joaat("WEAPON_PUMPSHOTGUN"):
			return func_34(378, iParam1, 0);
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return func_34(387, iParam1, 0);
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return func_34(406, iParam1, 0);
		case joaat("WEAPON_SNIPERRIFLE"):
			return func_34(425, iParam1, 0);
		case joaat("WEAPON_HEAVYSNIPER"):
			return func_34(434, iParam1, 0);
		case joaat("WEAPON_MINIGUN"):
			return func_34(459, iParam1, 0);
		case joaat("WEAPON_PISTOL50"):
			return func_34(274, iParam1, 0);
		case joaat("WEAPON_ASSAULTSMG"):
			return func_34(314, iParam1, 0);
		case joaat("WEAPON_HEAVYRIFLE"):
			return func_34(434, iParam1, 0);
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return func_34(397, iParam1, 0);
		case joaat("WEAPON_ASSAULTMG"):
			return func_34(369, iParam1, 0);
		case joaat("WEAPON_ASSAULTSNIPER"):
			return func_34(324, iParam1, 0);
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return func_34(324, iParam1, 0);
		case joaat("WEAPON_RUBBERGUN"):
			return func_34(324, iParam1, 0);
		case joaat("WEAPON_SNSPISTOL"):
			return func_34(1743, iParam1, 0);
		case joaat("WEAPON_SPECIALCARBINE"):
			return func_34(9491, iParam1, 0);
		case joaat("WEAPON_BULLPUPRIFLE"):
			return func_34(9501, iParam1, 0);
		case joaat("WEAPON_HEAVYPISTOL"):
			return func_34(9481, iParam1, 0);
		case joaat("WEAPON_VINTAGEPISTOL"):
			return func_34(9794, iParam1, 0);
		case joaat("WEAPON_GUSENBERG"):
			return func_34(9511, iParam1, 0);
		case joaat("WEAPON_MUSKET"):
			return func_34(9814, iParam1, 0);
		case joaat("WEAPON_FIREWORK"):
			return func_34(9804, iParam1, 0);
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return func_34(9892, iParam1, 0);
		case joaat("WEAPON_MARKSMANRIFLE"):
			return func_34(9902, iParam1, 0);
		case joaat("WEAPON_COMBATPDW"):
			return func_34(9936, iParam1, 0);
		case joaat("WEAPON_MARKSMANPISTOL"):
			return func_34(9953, iParam1, 0);
		case joaat("WEAPON_MACHINEPISTOL"):
			return func_34(9971, iParam1, 0);
		case joaat("WEAPON_REVOLVER"):
			return func_34(10027, iParam1, 0);
		case joaat("WEAPON_DBSHOTGUN"):
			return func_34(9999, iParam1, 0);
		case joaat("WEAPON_COMPACTRIFLE"):
			return func_34(9989, iParam1, 0);
		case joaat("WEAPON_AUTOSHOTGUN"):
			return func_34(10078, iParam1, 0);
		case joaat("WEAPON_MINISMG"):
			return func_34(10104, iParam1, 0);
		case joaat("WEAPON_PISTOL_MK2"):
			return func_34(254, iParam1, 0);
		case joaat("WEAPON_SMG_MK2"):
			return func_34(304, iParam1, 0);
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return func_34(434, iParam1, 0);
		case joaat("WEAPON_COMBATMG_MK2"):
			return func_34(360, iParam1, 0);
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return func_34(324, iParam1, 0);
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return func_34(333, iParam1, 0);
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return func_34(10586, iParam1, 0);
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return func_34(10606, iParam1, 0);
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return func_34(10596, iParam1, 0);
		case joaat("WEAPON_REVOLVER_MK2"):
			return func_34(10616, iParam1, 0);
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return func_34(10636, iParam1, 0);
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return func_34(10646, iParam1, 0);
		case joaat("WEAPON_DOUBLEACTION"):
			return func_34(10626, iParam1, 0);
		case joaat("WEAPON_RAYPISTOL"):
			return func_34(11006, iParam1, 0);
		case joaat("WEAPON_RAYCARBINE"):
			return func_34(11016, iParam1, 0);
		case joaat("WEAPON_RAYMINIGUN"):
			return func_34(11026, iParam1, 0);
		default:
			break;
	}
	return 0;
}

int func_132(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return func_34(251, iParam1, 0);
		case joaat("WEAPON_COMBATPISTOL"):
			return func_34(261, iParam1, 0);
		case joaat("WEAPON_APPISTOL"):
			return func_34(281, iParam1, 0);
		case joaat("WEAPON_MICROSMG"):
			return func_34(291, iParam1, 0);
		case joaat("WEAPON_SMG"):
			return func_34(301, iParam1, 0);
		case joaat("WEAPON_ASSAULTRIFLE"):
			return func_34(321, iParam1, 0);
		case joaat("WEAPON_CARBINERIFLE"):
			return func_34(330, iParam1, 0);
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return func_34(339, iParam1, 0);
		case joaat("WEAPON_MG"):
			return func_34(348, iParam1, 0);
		case joaat("WEAPON_COMBATMG"):
			return func_34(357, iParam1, 0);
		case joaat("WEAPON_PUMPSHOTGUN"):
			return func_34(375, iParam1, 0);
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return func_34(384, iParam1, 0);
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return func_34(403, iParam1, 0);
		case joaat("WEAPON_SNIPERRIFLE"):
			return func_34(422, iParam1, 0);
		case joaat("WEAPON_HEAVYSNIPER"):
			return func_34(431, iParam1, 0);
		case joaat("WEAPON_GRENADELAUNCHER"):
			return func_34(442, iParam1, 0);
		case joaat("WEAPON_RPG"):
			return func_34(449, iParam1, 0);
		case joaat("WEAPON_MINIGUN"):
			return func_34(456, iParam1, 0);
		case joaat("WEAPON_GRENADE"):
			return func_34(465, iParam1, 0);
		case joaat("WEAPON_SMOKEGRENADE"):
			return func_34(473, iParam1, 0);
		case joaat("WEAPON_STICKYBOMB"):
			return func_34(482, iParam1, 0);
		case joaat("WEAPON_MOLOTOV"):
			return func_34(490, iParam1, 0);
		case joaat("WEAPON_STUNGUN"):
			return func_34(412, iParam1, 0);
		case joaat("WEAPON_KNIFE"):
			return func_34(195, iParam1, 0);
		case joaat("WEAPON_NIGHTSTICK"):
			return func_34(203, iParam1, 0);
		case joaat("WEAPON_HAMMER"):
			return func_34(231, iParam1, 0);
		case joaat("WEAPON_BAT"):
			return func_34(238, iParam1, 0);
		case joaat("WEAPON_CROWBAR"):
			return func_34(210, iParam1, 0);
		case joaat("WEAPON_GOLFCLUB"):
			return func_34(245, iParam1, 0);
		case joaat("WEAPON_PISTOL50"):
			return func_34(271, iParam1, 0);
		case joaat("WEAPON_ASSAULTSMG"):
			return func_34(311, iParam1, 0);
		case joaat("WEAPON_HEAVYRIFLE"):
			return func_34(431, iParam1, 0);
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return func_34(394, iParam1, 0);
		case joaat("WEAPON_ASSAULTMG"):
			return func_34(366, iParam1, 0);
		case joaat("WEAPON_ASSAULTSNIPER"):
			return func_34(321, iParam1, 0);
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return func_34(321, iParam1, 0);
		case joaat("WEAPON_RUBBERGUN"):
			return func_34(321, iParam1, 0);
		case joaat("WEAPON_BOTTLE"):
			return func_34(1730, iParam1, 0);
		case joaat("WEAPON_SNSPISTOL"):
			return func_34(1740, iParam1, 0);
		case joaat("WEAPON_SPECIALCARBINE"):
			return func_34(9488, iParam1, 0);
		case joaat("WEAPON_BULLPUPRIFLE"):
			return func_34(9498, iParam1, 0);
		case joaat("WEAPON_HEAVYPISTOL"):
			return func_34(9478, iParam1, 0);
		case joaat("WEAPON_DAGGER"):
			return func_34(9781, iParam1, 0);
		case joaat("WEAPON_VINTAGEPISTOL"):
			return func_34(9791, iParam1, 0);
		case joaat("WEAPON_GUSENBERG"):
			return func_34(9508, iParam1, 0);
		case joaat("WEAPON_MUSKET"):
			return func_34(9811, iParam1, 0);
		case joaat("WEAPON_FIREWORK"):
			return func_34(9801, iParam1, 0);
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return func_34(9889, iParam1, 0);
		case joaat("WEAPON_MARKSMANRIFLE"):
			return func_34(9899, iParam1, 0);
		case joaat("WEAPON_PROXMINE"):
			return func_34(9917, iParam1, 0);
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return func_34(9925, iParam1, 0);
		case joaat("WEAPON_COMBATPDW"):
			return func_34(9933, iParam1, 0);
		case joaat("WEAPON_MARKSMANPISTOL"):
			return func_34(9950, iParam1, 0);
		case joaat("WEAPON_KNUCKLE"):
			return func_34(9943, iParam1, 0);
		case joaat("WEAPON_MACHETE"):
			return func_34(9960, iParam1, 0);
		case joaat("WEAPON_MACHINEPISTOL"):
			return func_34(9968, iParam1, 0);
		case joaat("WEAPON_FLASHLIGHT"):
			return func_34(10006, iParam1, 0);
		case joaat("WEAPON_SWITCHBLADE"):
			return func_34(10034, iParam1, 0);
		case joaat("WEAPON_REVOLVER"):
			return func_34(10024, iParam1, 0);
		case joaat("WEAPON_DBSHOTGUN"):
			return func_34(9996, iParam1, 0);
		case joaat("WEAPON_COMPACTRIFLE"):
			return func_34(9986, iParam1, 0);
		case joaat("WEAPON_HATCHET"):
			return func_34(9909, iParam1, 0);
		case joaat("WEAPON_AUTOSHOTGUN"):
			return func_34(10075, iParam1, 0);
		case joaat("WEAPON_BATTLEAXE"):
			return func_34(10085, iParam1, 0);
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return func_34(10091, iParam1, 0);
		case joaat("WEAPON_MINISMG"):
			return func_34(10101, iParam1, 0);
		case joaat("WEAPON_PIPEBOMB"):
			return func_34(10111, iParam1, 0);
		case joaat("WEAPON_POOLCUE"):
			return func_34(10119, iParam1, 0);
		case joaat("WEAPON_WRENCH"):
			return func_34(224, iParam1, 0);
		case joaat("WEAPON_PISTOL_MK2"):
			return func_34(251, iParam1, 0);
		case joaat("WEAPON_SMG_MK2"):
			return func_34(301, iParam1, 0);
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return func_34(431, iParam1, 0);
		case joaat("WEAPON_COMBATMG_MK2"):
			return func_34(357, iParam1, 0);
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return func_34(321, iParam1, 0);
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return func_34(330, iParam1, 0);
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return func_34(10583, iParam1, 0);
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return func_34(10603, iParam1, 0);
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return func_34(10593, iParam1, 0);
		case joaat("WEAPON_REVOLVER_MK2"):
			return func_34(10613, iParam1, 0);
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return func_34(10633, iParam1, 0);
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return func_34(10643, iParam1, 0);
		case joaat("WEAPON_DOUBLEACTION"):
			return func_34(10623, iParam1, 0);
		case joaat("WEAPON_STONE_HATCHET"):
			return func_34(10846, iParam1, 0);
		case joaat("WEAPON_RAYPISTOL"):
			return func_34(11003, iParam1, 0);
		case joaat("WEAPON_RAYCARBINE"):
			return func_34(11013, iParam1, 0);
		case joaat("WEAPON_RAYMINIGUN"):
			return func_34(11023, iParam1, 0);
		case joaat("WEAPON_NAVYREVOLVER"):
			return func_34(11454, iParam1, 0);
		case joaat("WEAPON_CERAMICPISTOL"):
			return func_34(11444, iParam1, 0);
		default:
			break;
	}
	return 0;
}

int func_133(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return func_34(250, iParam1, 0);
		case joaat("WEAPON_COMBATPISTOL"):
			return func_34(260, iParam1, 0);
		case joaat("WEAPON_APPISTOL"):
			return func_34(280, iParam1, 0);
		case joaat("WEAPON_MICROSMG"):
			return func_34(290, iParam1, 0);
		case joaat("WEAPON_SMG"):
			return func_34(300, iParam1, 0);
		case joaat("WEAPON_ASSAULTRIFLE"):
			return func_34(320, iParam1, 0);
		case joaat("WEAPON_CARBINERIFLE"):
			return func_34(329, iParam1, 0);
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return func_34(338, iParam1, 0);
		case joaat("WEAPON_MG"):
			return func_34(347, iParam1, 0);
		case joaat("WEAPON_COMBATMG"):
			return func_34(356, iParam1, 0);
		case joaat("WEAPON_PUMPSHOTGUN"):
			return func_34(374, iParam1, 0);
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return func_34(383, iParam1, 0);
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return func_34(402, iParam1, 0);
		case joaat("WEAPON_SNIPERRIFLE"):
			return func_34(421, iParam1, 0);
		case joaat("WEAPON_HEAVYSNIPER"):
			return func_34(430, iParam1, 0);
		case joaat("WEAPON_GRENADELAUNCHER"):
			return func_34(441, iParam1, 0);
		case joaat("WEAPON_RPG"):
			return func_34(448, iParam1, 0);
		case joaat("WEAPON_MINIGUN"):
			return func_34(455, iParam1, 0);
		case joaat("WEAPON_GRENADE"):
			return func_34(464, iParam1, 0);
		case joaat("WEAPON_SMOKEGRENADE"):
			return func_34(472, iParam1, 0);
		case joaat("WEAPON_STICKYBOMB"):
			return func_34(481, iParam1, 0);
		case joaat("WEAPON_MOLOTOV"):
			return func_34(489, iParam1, 0);
		case joaat("WEAPON_STUNGUN"):
			return func_34(411, iParam1, 0);
		case joaat("WEAPON_KNIFE"):
			return func_34(193, iParam1, 0);
		case joaat("WEAPON_NIGHTSTICK"):
			return func_34(201, iParam1, 0);
		case joaat("WEAPON_HAMMER"):
			return func_34(229, iParam1, 0);
		case joaat("WEAPON_BAT"):
			return func_34(236, iParam1, 0);
		case joaat("WEAPON_CROWBAR"):
			return func_34(208, iParam1, 0);
		case joaat("WEAPON_GOLFCLUB"):
			return func_34(243, iParam1, 0);
		case joaat("WEAPON_PISTOL50"):
			return func_34(270, iParam1, 0);
		case joaat("WEAPON_ASSAULTSMG"):
			return func_34(310, iParam1, 0);
		case joaat("WEAPON_HEAVYRIFLE"):
			return func_34(430, iParam1, 0);
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return func_34(393, iParam1, 0);
		case joaat("WEAPON_ASSAULTMG"):
			return func_34(365, iParam1, 0);
		case joaat("WEAPON_ASSAULTSNIPER"):
			return func_34(320, iParam1, 0);
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return func_34(320, iParam1, 0);
		case joaat("WEAPON_RUBBERGUN"):
			return func_34(320, iParam1, 0);
		case joaat("WEAPON_BOTTLE"):
			return func_34(1729, iParam1, 0);
		case joaat("WEAPON_SNSPISTOL"):
			return func_34(1739, iParam1, 0);
		case joaat("WEAPON_SPECIALCARBINE"):
			return func_34(9487, iParam1, 0);
		case joaat("WEAPON_BULLPUPRIFLE"):
			return func_34(9497, iParam1, 0);
		case joaat("WEAPON_HEAVYPISTOL"):
			return func_34(9477, iParam1, 0);
		case joaat("WEAPON_DAGGER"):
			return func_34(9780, iParam1, 0);
		case joaat("WEAPON_VINTAGEPISTOL"):
			return func_34(9790, iParam1, 0);
		case joaat("WEAPON_GUSENBERG"):
			return func_34(9507, iParam1, 0);
		case joaat("WEAPON_MUSKET"):
			return func_34(9810, iParam1, 0);
		case joaat("WEAPON_FIREWORK"):
			return func_34(9800, iParam1, 0);
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return func_34(9888, iParam1, 0);
		case joaat("WEAPON_MARKSMANRIFLE"):
			return func_34(9898, iParam1, 0);
		case joaat("WEAPON_PROXMINE"):
			return func_34(9916, iParam1, 0);
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return func_34(9924, iParam1, 0);
		case joaat("WEAPON_COMBATPDW"):
			return func_34(9932, iParam1, 0);
		case joaat("WEAPON_MARKSMANPISTOL"):
			return func_34(9949, iParam1, 0);
		case joaat("WEAPON_KNUCKLE"):
			return func_34(9942, iParam1, 0);
		case joaat("WEAPON_MACHETE"):
			return func_34(9959, iParam1, 0);
		case joaat("WEAPON_MACHINEPISTOL"):
			return func_34(9967, iParam1, 0);
		case joaat("WEAPON_FLASHLIGHT"):
			return func_34(10005, iParam1, 0);
		case joaat("WEAPON_SWITCHBLADE"):
			return func_34(10033, iParam1, 0);
		case joaat("WEAPON_REVOLVER"):
			return func_34(10023, iParam1, 0);
		case joaat("WEAPON_DBSHOTGUN"):
			return func_34(9995, iParam1, 0);
		case joaat("WEAPON_COMPACTRIFLE"):
			return func_34(9985, iParam1, 0);
		case joaat("WEAPON_HATCHET"):
			return func_34(9908, iParam1, 0);
		case joaat("WEAPON_AUTOSHOTGUN"):
			return func_34(10074, iParam1, 0);
		case joaat("WEAPON_BATTLEAXE"):
			return func_34(10084, iParam1, 0);
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return func_34(10090, iParam1, 0);
		case joaat("WEAPON_MINISMG"):
			return func_34(10100, iParam1, 0);
		case joaat("WEAPON_PIPEBOMB"):
			return func_34(10110, iParam1, 0);
		case joaat("WEAPON_POOLCUE"):
			return func_34(10118, iParam1, 0);
		case joaat("WEAPON_WRENCH"):
			return func_34(222, iParam1, 0);
		case joaat("WEAPON_PISTOL_MK2"):
			return func_34(250, iParam1, 0);
		case joaat("WEAPON_SMG_MK2"):
			return func_34(300, iParam1, 0);
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return func_34(430, iParam1, 0);
		case joaat("WEAPON_COMBATMG_MK2"):
			return func_34(356, iParam1, 0);
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return func_34(320, iParam1, 0);
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return func_34(329, iParam1, 0);
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return func_34(10582, iParam1, 0);
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return func_34(10602, iParam1, 0);
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return func_34(10592, iParam1, 0);
		case joaat("WEAPON_REVOLVER_MK2"):
			return func_34(10612, iParam1, 0);
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return func_34(10632, iParam1, 0);
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return func_34(10642, iParam1, 0);
		case joaat("WEAPON_DOUBLEACTION"):
			return func_34(10622, iParam1, 0);
		case joaat("WEAPON_STONE_HATCHET"):
			return func_34(10845, iParam1, 0);
		case joaat("WEAPON_RAYPISTOL"):
			return func_34(11002, iParam1, 0);
		case joaat("WEAPON_RAYCARBINE"):
			return func_34(11012, iParam1, 0);
		case joaat("WEAPON_RAYMINIGUN"):
			return func_34(11022, iParam1, 0);
		case joaat("WEAPON_NAVYREVOLVER"):
			return func_34(11453, iParam1, 0);
		case joaat("WEAPON_CERAMICPISTOL"):
			return func_34(11443, iParam1, 0);
		default:
			break;
	}
	return 0;
}

float func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;

	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			iVar0 = 252;
			iVar1 = 253;
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			iVar0 = 252;
			iVar1 = 253;
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			iVar0 = 262;
			iVar1 = 263;
			break;
		case joaat("WEAPON_APPISTOL"):
			iVar0 = 282;
			iVar1 = 283;
			break;
		case joaat("WEAPON_MICROSMG"):
			iVar0 = 292;
			iVar1 = 293;
			break;
		case joaat("WEAPON_SMG"):
			iVar0 = 302;
			iVar1 = 303;
			break;
		case joaat("WEAPON_SMG_MK2"):
			iVar0 = 302;
			iVar1 = 303;
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			iVar0 = 322;
			iVar1 = 323;
			break;
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			iVar0 = 331;
			iVar1 = 332;
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			iVar0 = 9489;
			iVar1 = 9490;
			break;
		case joaat("WEAPON_SNSPISTOL"):
			iVar0 = 1741;
			iVar1 = 1742;
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			iVar0 = 340;
			iVar1 = 341;
			break;
		case joaat("WEAPON_MG"):
			iVar0 = 349;
			iVar1 = 350;
			break;
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_COMBATMG_MK2"):
			iVar0 = 358;
			iVar1 = 359;
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			iVar0 = 385;
			iVar1 = 386;
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			iVar0 = 376;
			iVar1 = 377;
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			iVar0 = 404;
			iVar1 = 405;
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			iVar0 = 423;
			iVar1 = 424;
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			iVar0 = 432;
			iVar1 = 433;
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			iVar0 = 443;
			iVar1 = 441;
			break;
		case joaat("WEAPON_MINIGUN"):
			iVar0 = 457;
			iVar1 = 458;
			break;
		case joaat("WEAPON_RPG"):
			iVar0 = 450;
			iVar1 = 448;
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			iVar0 = 395;
			iVar1 = 396;
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			iVar0 = 312;
			iVar1 = 313;
			break;
		case joaat("WEAPON_PISTOL50"):
			iVar0 = 272;
			iVar1 = 273;
			break;
		case joaat("WEAPON_HEAVYPISTOL"):
			iVar0 = 9479;
			iVar1 = 9480;
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			iVar0 = 9499;
			iVar1 = 9500;
			break;
		case joaat("WEAPON_GUSENBERG"):
			iVar0 = 9509;
			iVar1 = 9510;
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			iVar0 = 9792;
			iVar1 = 9793;
			break;
		case joaat("WEAPON_MUSKET"):
			iVar0 = 9812;
			iVar1 = 9813;
			break;
		case joaat("WEAPON_FIREWORK"):
			iVar0 = 9802;
			iVar1 = 9803;
			break;
		case joaat("WEAPON_FLAREGUN"):
			iVar0 = 9545;
			iVar1 = 9546;
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			iVar0 = 9890;
			iVar1 = 9891;
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			iVar0 = 9900;
			iVar1 = 9901;
			break;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			iVar0 = 9926;
			iVar1 = 9924;
			break;
		case joaat("WEAPON_PROXMINE"):
			iVar0 = 9918;
			iVar1 = 9916;
			break;
		case joaat("WEAPON_COMBATPDW"):
			iVar0 = 9934;
			iVar1 = 9935;
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			iVar0 = 9951;
			iVar1 = 9952;
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			iVar0 = 9969;
			iVar1 = 9970;
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			iVar0 = 9987;
			iVar1 = 9988;
			break;
		case joaat("WEAPON_DBSHOTGUN"):
			iVar0 = 9997;
			iVar1 = 9998;
			break;
		case joaat("WEAPON_REVOLVER"):
			iVar0 = 10025;
			iVar1 = 10026;
			break;
		case joaat("WEAPON_AUTOSHOTGUN"):
			iVar0 = 10076;
			iVar1 = 10077;
			break;
		case joaat("WEAPON_MINISMG"):
			iVar0 = 10102;
			iVar1 = 10103;
			break;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			iVar0 = 10092;
			iVar1 = 10090;
			break;
		case joaat("WEAPON_DOUBLEACTION"):
			iVar0 = 10624;
			iVar1 = 10625;
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			iVar1 = 10582;
			iVar0 = 10584;
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			iVar1 = 10602;
			iVar0 = 10604;
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			iVar1 = 10592;
			iVar0 = 10594;
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			iVar1 = 10612;
			iVar0 = 10614;
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			iVar1 = 10632;
			iVar0 = 10634;
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			iVar1 = 10642;
			iVar0 = 10644;
			break;
		case joaat("WEAPON_RAYCARBINE"):
			iVar0 = 11014;
			iVar1 = 11015;
			break;
		case joaat("WEAPON_RAYMINIGUN"):
			iVar0 = 11024;
			iVar1 = 11025;
			break;
		case joaat("WEAPON_RAYPISTOL"):
			iVar0 = 11004;
			iVar1 = 11005;
			break;
		case joaat("WEAPON_NAVYREVOLVER"):
			iVar0 = 11455;
			iVar1 = 11456;
			break;
		case joaat("WEAPON_CERAMICPISTOL"):
			iVar0 = 11445;
			iVar1 = 11446;
			break;
	}
	if ((func_136(iParam0) || iParam0 == joaat("WEAPON_FLASHLIGHT")) || func_135(iParam0))
	{
	}
	else
	{
		fVar2 = SYSTEM::TO_FLOAT(func_34(iVar0, -1, 0));
		fVar3 = SYSTEM::TO_FLOAT(func_34(iVar1, -1, 0));
		if (fVar2 > 0f)
		{
			fVar4 = (fVar3 / fVar2);
			if (fVar4 > 1f)
			{
				fVar4 = 1f;
			}
			fVar4 = (fVar4 * 100f);
			iVar5 = SYSTEM::ROUND(fVar4);
			fVar4 = SYSTEM::TO_FLOAT(iVar5);
			return fVar4;
		}
	}
	return 0f;
}

bool func_135(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_PROXMINE"):
			return true;
		case joaat("WEAPON_PIPEBOMB"):
			return true;
	}
	return false;
}

bool func_136(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_BAT"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_GOLFCLUB"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_KNUCKLE"):
		case joaat("WEAPON_HATCHET"):
		case joaat("WEAPON_MACHETE"):
		case joaat("WEAPON_SWITCHBLADE"):
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_POOLCUE"):
		case joaat("WEAPON_WRENCH"):
		case joaat("WEAPON_STONE_HATCHET"):
			return true;
		default:
			break;
	}
	return false;
}

char* func_137(int iParam0, bool bParam1)
{
	struct<16> Var0;
	struct<16> Var39;
	struct<16> Var78;
	struct<16> Var117;

	if (func_139(iParam0) && !bParam1)
	{
		switch (iParam0)
		{
			case joaat("WEAPON_MARKSMANRIFLE"):
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MARKSMANRIFLE_MK2"), false))
					{
						return "WCD_MK1_LOCK";
					}
				}
				return "WTDE2_MKRIFLE";
			case joaat("WEAPON_COMPACTRIFLE"):
				return "WTDE2_CMPRIFLE";
			case joaat("WEAPON_COMPACTLAUNCHER"):
				return "WTDE2_CMPGL";
			default:
				break;
		}
	}
	switch (iParam0)
	{
		case 0:
			return "";
		case joaat("WEAPON_UNARMED"):
			return "";
		case joaat("WEAPON_PISTOL"):
			return "WT_PIST_DESC";
		case joaat("WEAPON_COMBATPISTOL"):
			return "WTD_PIST_CBT";
		case joaat("WEAPON_APPISTOL"):
			return "WTD_PIST_AP";
		case joaat("WEAPON_SMG"):
			return "WTD_SMG";
		case joaat("WEAPON_MICROSMG"):
			return "WTD_SMG_MCR";
		case joaat("WEAPON_ASSAULTRIFLE"):
			return "WTD_RIFLE_ASL";
		case joaat("WEAPON_CARBINERIFLE"):
			return "WTD_RIFLE_CBN";
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return "WTD_RIFLE_ADV";
		case joaat("WEAPON_MG"):
			return "WTD_MG";
		case joaat("WEAPON_COMBATMG"):
			return "WTD_MG_CBT";
		case joaat("WEAPON_PUMPSHOTGUN"):
			return "WTD_SG_PMP";
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return "WTD_SG_SOF";
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return "WTD_SG_ASL";
		case joaat("WEAPON_HEAVYSNIPER"):
			return "WTD_SNIP_HVY";
		case joaat("WEAPON_REMOTESNIPER"):
			return "WTD_SNIP_RMT";
		case joaat("WEAPON_SNIPERRIFLE"):
			return "WTD_SNIP_RIF";
		case joaat("WEAPON_GRENADELAUNCHER"):
			return "WTD_GL";
		case joaat("WEAPON_RPG"):
			return "WTD_RPG";
		case joaat("WEAPON_MINIGUN"):
			return "WTD_MINIGUN";
		case joaat("WEAPON_GRENADE"):
			return "WTD_GNADE";
		case joaat("WEAPON_SMOKEGRENADE"):
			return "WTD_GNADE_SMK";
		case joaat("WEAPON_STICKYBOMB"):
			return "WTD_GNADE_STK";
		case joaat("WEAPON_MOLOTOV"):
			return "WTD_MOLOTOV";
		case joaat("WEAPON_STUNGUN"):
			return "WTD_STUN";
		case joaat("WEAPON_PETROLCAN"):
			return "WTD_PETROL";
		case joaat("WEAPON_DIGISCANNER"):
			return "WTD_DIGI";
		case joaat("WEAPON_ELECTRIC_FENCE"):
			return "WTD_ELCFEN";
		case joaat("VEHICLE_WEAPON_TANK"):
			return "";
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			return "";
		case joaat("VEHICLE_WEAPON_PLAYER_LASER"):
			return "";
		case joaat("OBJECT"):
			return "";
		case joaat("GADGET_PARACHUTE"):
			return "WTD_PARA";
		case joaat("AMMO_RPG"):
			return "";
		case joaat("AMMO_TANK"):
			return "";
		case joaat("AMMO_SPACE_ROCKET"):
			return "";
		case joaat("AMMO_PLAYER_LASER"):
			return "";
		case joaat("AMMO_ENEMY_LASER"):
			return "";
		case joaat("WEAPON_KNIFE"):
			return "WTD_KNIFE";
		case joaat("WEAPON_NIGHTSTICK"):
			return "WTD_NGTSTK";
		case joaat("WEAPON_HAMMER"):
			return "WTD_HAMMER";
		case joaat("WEAPON_BAT"):
			return "WTD_BAT";
		case joaat("WEAPON_CROWBAR"):
			return "WTD_CROWBAR";
		case joaat("WEAPON_GOLFCLUB"):
			return "WTD_GOLFCLUB";
		case joaat("WEAPON_HATCHET"):
			return "WTD_DLC_HATCHET";
		case joaat("WEAPON_RAMMED_BY_CAR"):
			return "";
		case joaat("WEAPON_RUN_OVER_BY_CAR"):
			return "";
		case joaat("WEAPON_ASSAULTSMG"):
			return "WTD_SMG_ASL";
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return "WTD_SG_BLP";
		case joaat("WEAPON_PISTOL50"):
			return "WTD_PIST_50";
		case joaat("WEAPON_VINTAGEPISTOL"):
			return "WTD_VPISTOL";
		case joaat("WEAPON_DAGGER"):
			return "WTD_DAGGER";
		case joaat("WEAPON_PROXMINE"):
			return "WTD_PRXMINE";
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return "WTD_HOMLNCH";
		case joaat("WEAPON_MACHETE"):
			return "WTD_MACHETE";
		case joaat("WEAPON_MACHINEPISTOL"):
			return "WTD_MCHPIST";
		case joaat("WEAPON_FLASHLIGHT"):
			return "WTD_FLASHLIGHT";
		case joaat("WEAPON_DBSHOTGUN"):
			return "WTD_DBSHGN";
		case joaat("WEAPON_COMPACTRIFLE"):
			return "WTD_CMPRIFLE";
		case joaat("WEAPON_SWITCHBLADE"):
			return "WTD_SWBLADE";
		case joaat("WEAPON_REVOLVER"):
			return "WTD_REVOLVER";
		case joaat("WEAPON_DOUBLEACTION"):
			if (func_138(joaat("MPPLY_HEADSHOTCHLENGECOMPLETED")) || bParam1)
			{
				return "WTD_REV_DA";
			}
			else if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
			{
				return "WTD_REV_DA_2";
			}
			else
			{
				return "WTD_REV_DA_3";
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SPECIALCARBINE_MK2"), false))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_28(iParam0, &Var0) != -1)
			{
				return func_27(&(Var0.f_15));
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MARKSMANRIFLE_MK2"), false))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_28(iParam0, &Var39) != -1)
			{
				return func_27(&(Var39.f_15));
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BULLPUPRIFLE_MK2"), false))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_28(iParam0, &Var78) != -1)
			{
				return func_27(&(Var78.f_15));
			}
			break;
		case joaat("WEAPON_RAYPISTOL"):
			return "WTD_RAYPISTOL";
		case joaat("WEAPON_RAYCARBINE"):
			return "WTD_RAYCARBINE";
		case joaat("WEAPON_RAYMINIGUN"):
			return "WTD_RAYMINIGUN";
		case joaat("WEAPON_NAVYREVOLVER"):
			return "WTD_REV_NV";
		case joaat("WEAPON_CERAMICPISTOL"):
			return "WTD_CERPST";
		default:
			if (func_28(iParam0, &Var117) != -1)
			{
				return func_27(&(Var117.f_15));
			}
			break;
	}
	return "WT_INVALID";
}

bool func_138(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return false;
}

bool func_139(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_140())
		{
			if ((iParam0 == joaat("WEAPON_MARKSMANRIFLE") || iParam0 == joaat("WEAPON_COMPACTRIFLE")) || iParam0 == joaat("WEAPON_COMPACTLAUNCHER"))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_140()
{
	return (func_142() || func_141());
}

int func_141()
{
	switch (NETWORK::_0x155467ACA0F55705())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_142()
{
	switch (NETWORK::_0x754615490A029508())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_143()
{
	return Global_1312745;
}

bool func_144(int iParam0, int iParam1)
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

void func_145()
{
	func_146(0, -1, -1, 0, 0);
}

void func_146(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		func_20("");
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_147(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_149();
	iVar0 = 9;
	iVar1 = uParam0->f_277;
	if (uParam1->f_5 < iLocal_64)
	{
		iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
	}
	else
	{
		iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
	}
	iVar2 = uParam1->f_5 + 1;
	iVar3 = iLocal_64 + 1;
	func_146(0, iVar2, iVar3, "HUD_PAGE", 0);
}

bool func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = func_38(iVar0);
	iVar2 = func_30(iVar0);
	if ((PAD::IS_CONTROL_JUST_RELEASED(2, iParam0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, iParam0)) || func_6(iParam0, &(Global_1377170.f_1060), 1))
	{
		if (!MISC::IS_BIT_SET(Global_1377170.f_1049[iVar1], iVar2))
		{
			MISC::SET_BIT(&(Global_1377170.f_1049[iVar1]), iVar2);
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(Global_1377170.f_1049[iVar1], iVar2))
	{
		MISC::CLEAR_BIT(&(Global_1377170.f_1049[iVar1]), iVar2);
	}
	return false;
}

void func_149()
{
	iLocal_65 = 0;
	iLocal_64 = 3;
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HAMMER")))
	{
		iLocal_66[10] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[10] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PISTOL50")))
	{
		iLocal_66[0] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPSHOTGUN")))
	{
		iLocal_66[1] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[1] = -1;
	}
	if (func_106(1, 0))
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SAWNOFFSHOTGUN")))
		{
			iLocal_66[2] = ((iLocal_65 / 9) + iLocal_64);
			iLocal_65++;
		}
		else
		{
			iLocal_66[2] = -1;
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BOTTLE")))
	{
		iLocal_66[3] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[3] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SNSPISTOL")))
	{
		iLocal_66[4] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[4] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_GUSENBERG")))
	{
		iLocal_66[11] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[11] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYPISTOL")))
	{
		iLocal_66[7] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[7] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SPECIALCARBINE")))
	{
		iLocal_66[5] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[5] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPRIFLE")))
	{
		iLocal_66[6] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[6] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DAGGER")))
	{
		iLocal_66[8] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[8] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_VINTAGEPISTOL")))
	{
		iLocal_66[9] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[9] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FIREWORK")))
	{
		iLocal_66[14] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[14] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MUSKET")))
	{
		iLocal_66[13] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[13] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYSHOTGUN")))
	{
		iLocal_66[15] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[15] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANRIFLE")))
	{
		iLocal_66[16] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[16] = -1;
	}
	if (func_105() || Global_262145.f_19752)
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HATCHET")))
		{
			iLocal_66[22] = ((iLocal_65 / 9) + iLocal_64);
			iLocal_65++;
		}
		else
		{
			iLocal_66[22] = -1;
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HOMINGLAUNCHER")))
	{
		iLocal_66[18] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[18] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PROXMINE")))
	{
		iLocal_66[17] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[17] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FLAREGUN")))
	{
		iLocal_66[12] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[12] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMBATPDW")))
	{
		iLocal_66[19] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[19] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANPISTOL")))
	{
		iLocal_66[20] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[20] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_KNUCKLE")))
	{
		iLocal_66[21] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[21] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MACHETE")))
	{
		iLocal_66[23] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[23] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MACHINEPISTOL")))
	{
		iLocal_66[24] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[24] = -1;
	}
	if (Global_262145.f_11577 && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FLASHLIGHT")))
	{
		iLocal_66[25] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[25] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_REVOLVER")))
	{
		iLocal_66[26] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[26] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SWITCHBLADE")))
	{
		iLocal_66[27] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[27] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DBSHOTGUN")))
	{
		iLocal_66[28] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[28] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMPACTRIFLE")))
	{
		iLocal_66[29] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[29] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_AUTOSHOTGUN")))
	{
		iLocal_66[30] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[30] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BATTLEAXE")))
	{
		iLocal_66[31] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[31] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMPACTLAUNCHER")))
	{
		iLocal_66[32] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[32] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MINISMG")))
	{
		iLocal_66[33] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[33] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PIPEBOMB")))
	{
		iLocal_66[34] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[34] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_POOLCUE")))
	{
		iLocal_66[35] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[35] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_WRENCH")))
	{
		iLocal_66[36] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[36] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_ASSAULTRIFLE_MK2")))
	{
		iLocal_66[37] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[37] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_CARBINERIFLE_MK2")))
	{
		iLocal_66[38] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[38] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMBATMG_MK2")))
	{
		iLocal_66[39] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[39] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYSNIPER_MK2")))
	{
		iLocal_66[40] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[40] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PISTOL_MK2")))
	{
		iLocal_66[41] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[41] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SMG_MK2")))
	{
		iLocal_66[42] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[42] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPRIFLE_MK2")))
	{
		iLocal_66[43] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[43] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANRIFLE_MK2")))
	{
		iLocal_66[44] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[44] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PUMPSHOTGUN_MK2")))
	{
		iLocal_66[45] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[45] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_REVOLVER_MK2")))
	{
		iLocal_66[46] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[46] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SNSPISTOL_MK2")))
	{
		iLocal_66[47] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[47] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SPECIALCARBINE_MK2")))
	{
		iLocal_66[48] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[48] = -1;
	}
	if ((Global_262145.f_22936 && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DOUBLEACTION"))) && (func_104() || Global_1694124))
	{
		iLocal_66[49] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[49] = -1;
	}
	if ((Global_262145.f_23635 && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_STONE_HATCHET"))) && func_100())
	{
		iLocal_66[50] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[50] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYCARBINE")) && Global_262145.f_25970)
	{
		iLocal_66[51] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[51] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYMINIGUN")) && Global_262145.f_25969)
	{
		iLocal_66[52] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[52] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYPISTOL")) && (((func_17(25007, -1, -1) || func_17(25002, -1, -1)) || func_90(joaat("WEAPON_RAYPISTOL"), -1, 0)) || Global_262145.f_24978))
	{
		iLocal_66[53] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[53] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_CERAMICPISTOL")))
	{
		iLocal_66[54] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[54] = -1;
	}
	if ((Global_262145.f_27592 && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_NAVYREVOLVER"))) && (func_99() || Global_1694130))
	{
		iLocal_66[55] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[55] = -1;
	}
	if (iLocal_65 == 0)
	{
		iLocal_64 = 2;
		iLocal_65 = 9;
	}
	else
	{
		iLocal_64 = (iLocal_64 + (iLocal_65 / 9));
		iLocal_65 = (iLocal_65 - (9 * (iLocal_65 / 9)));
		if (iLocal_65 == 0)
		{
			iLocal_64 = (iLocal_64 - 1);
			iLocal_65 = 9;
		}
	}
}

void func_150(int iParam0, var uParam1)
{
	uParam1->f_277 = iParam0;
}

void func_151()
{
	func_149();
	func_152();
	func_146(0, 1, iLocal_64 + 1, "HUD_PAGE", 0);
}

void func_152()
{
	func_153(1);
}

void func_153(bool bParam0)
{
	if (bParam0)
	{
		func_154(0, 3, 0, 2, 0, 0);
	}
	else
	{
		func_154(0, 2, 0, 2, 1, 0);
	}
}

void func_154(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("INIT_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_155(var uParam0)
{
	uParam0->f_284 = 1;
}

void func_156(var uParam0)
{
	uParam0->f_283 = 1;
}

void func_157(var uParam0)
{
	func_158(uParam0);
	uParam0->f_281 = 1;
}

void func_158(var uParam0)
{
	*uParam0 = { Global_1375356 };
}

int func_159()
{
	return Global_30768;
}

