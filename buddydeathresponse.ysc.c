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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	bool bLocal_20 = false;
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
	if (UNK_0x2EBF608FFE6CA406(2) || UNK_0x28CDCD4EC82F21C0())
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	func_1();
}

void func_1()
{
	vector3 vVar0;
	int iVar3;

	while (!func_9(&bLocal_20))
	{
		SYSTEM::WAIT(0);
	}
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_20))
	{
		if (!Global_95239)
		{
			UNK_0x73270B3C9CC833FD(bLocal_20, true, 1);
			if (UNK_0xD1960163A3042274(bLocal_20, 1435919172) != 7)
			{
				UNK_0xA3BF0AA5A2608191(bLocal_20);
			}
			vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
			UNK_0x11AD11297DC58CC7(bLocal_20, true);
			UNK_0xDD353D0E9C789D0E(&iVar3);
			if (!UNK_0x405E212DDE472467(bLocal_20, 0))
			{
				if (!UNK_0x4734A6196B611C3B(bLocal_20, false) && !UNK_0x405E212DDE472467(bLocal_20, 0))
				{
					UNK_0x796BDF31572BB055(false, vVar0, 6000);
				}
			}
			UNK_0xDBE4EC9C88839074(false, vVar0, 6000, 0, 2);
			UNK_0x75ABDC5F81978924(iVar3);
			UNK_0x78ADC381772E3D54(bLocal_20, iVar3);
		}
		func_2(bLocal_20);
	}
	while (!UNK_0x757EF87A33649210())
	{
		SYSTEM::WAIT(0);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_20))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_20))
		{
			UNK_0xFADC0A217229F6B5(bLocal_20, true);
		}
		UNK_0x6DAD7906B73F064D(&bLocal_20);
	}
	Global_95239 = 0;
	UNK_0x10FAF14A60A0DBE1();
}

void func_2(bool bParam0)
{
	int iVar0;

	iVar0 = UNK_0x1C0640BA9A7327B3() + 1000;
	while (UNK_0x1C0640BA9A7327B3() < iVar0 && !UNK_0x757EF87A33649210())
	{
		SYSTEM::WAIT(0);
	}
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(UNK_0x16F2683693E537C9()))
			{
				case 2:
					func_3(bParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
				case 0:
					func_3(bParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 2)
		{
			switch (func_5(UNK_0x16F2683693E537C9()))
			{
				case 1:
					func_3(bParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
				case 0:
					func_3(bParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 0)
		{
			switch (func_5(UNK_0x16F2683693E537C9()))
			{
				case 2:
					func_3(bParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3);
					break;
				case 1:
					func_3(bParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3);
					break;
			}
		}
	}
}

void func_3(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	UNK_0xEB0A515D699A7E90(bParam0, bParam1, bParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		case 2:
			return "SPEECH_PARAMS_BEAT";
		case 3:
			return "SPEECH_PARAMS_FORCE";
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		case 14:
			return "SPEECH_PARAMS_HELI";
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		default:
			break;
	}
	iVar0 = 0;
	return iVar0;
}

int func_5(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_6(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_6(int iParam0)
{
	if (func_8(iParam0))
	{
		return func_7(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_7(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_8(int iParam0)
{
	return iParam0 < 3;
}

bool func_9(bool bParam0)
{
	bool bVar0;

	iLocal_18 = 0;
	while (iLocal_18 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96113[iLocal_18]) && !UNK_0xEB6A8945D1AC98A1(Global_96113[iLocal_18]))
		{
			if (Global_96113[iLocal_18] != UNK_0x16F2683693E537C9())
			{
				if (!UNK_0xAF6690C489CC6203(Global_96113[iLocal_18]))
				{
					if (UNK_0x405E212DDE472467(Global_96113[iLocal_18], 0) || !UNK_0xD59B17D2DFF98E26(Global_96113[iLocal_18]))
					{
						if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(Global_96113[iLocal_18], true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), 1) < 10f)
						{
							iLocal_19 = func_5(Global_96113[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_10())
								{
									if (UNK_0xF649DD3BF44195C7(Global_96113[iLocal_18], UNK_0x16F2683693E537C9(), 17))
									{
										if (UNK_0x405E212DDE472467(Global_96113[iLocal_18], 0))
										{
											bVar0 = UNK_0x6937EA2286828455(Global_96113[iLocal_18], 0);
										}
										if ((UNK_0xC844350D5D58C99A(bVar0) && UNK_0xDF1306B443CD3D15(bVar0, 0)) || !UNK_0xC844350D5D58C99A(bVar0))
										{
											*bParam0 = Global_96113[iLocal_18];
											return true;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_18++;
	}
	if (UNK_0x757EF87A33649210())
	{
		return true;
	}
	return false;
}

int func_10()
{
	func_11();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_11()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_6(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_5(UNK_0x16F2683693E537C9());
			if (func_8(iVar0) && (!func_12(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_8(Global_111638.f_2358.f_539.f_4321))
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

bool func_12(int iParam0)
{
	return Global_41431 == iParam0;
}

