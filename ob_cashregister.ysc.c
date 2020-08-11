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
	vector3 vLocal_19 = { 0f, 0f, 0f };
	int iLocal_22 = 0;
	bool bScriptParam_0 = false;
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
	if (UNK_0x8CD06866876216F2())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1389296, true))
		{
			func_18();
		}
		else
		{
			UNK_0x37AD2AB54480FA6A(32, 0, -1);
			func_15(0, -1, 0);
			UNK_0x256D93AFAE851A7A(0);
			iLocal_22 = 1;
		}
	}
	else if (UNK_0x2EBF608FFE6CA406(2))
	{
		func_18();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_22 == 1)
		{
			if (func_3())
			{
				func_18();
			}
		}
		if (UNK_0xC844350D5D58C99A(bScriptParam_0))
		{
			if (UNK_0x63D2C15453688621(bScriptParam_0))
			{
				switch (iLocal_18)
				{
					case 0:
						if (UNK_0x1A5AE8A9B1D42A10(bScriptParam_0))
						{
							vLocal_19 = { UNK_0x68F4C0EC296D3901(bScriptParam_0, true) };
							iLocal_18 = 1;
						}
						break;
					case 1:
						if ((UNK_0x713261485D0F1B6C(bScriptParam_0, 0) && UNK_0x4FC40AB0ECCE6E18(bScriptParam_0)) && !UNK_0xAF6690C489CC6203(bScriptParam_0))
						{
							func_1();
							iLocal_18 = 2;
						}
						break;
					case 2:
						break;
				}
			}
			else
			{
				func_18();
			}
		}
		else
		{
			func_18();
		}
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = joaat("PROP_MONEY_BAG_01");
	iVar1 = joaat("PICKUP_MONEY_MED_BAG");
	bVar3 = UNK_0x09AC81E49EA267F7(70, 121);
	if (UNK_0x8CD06866876216F2())
	{
		bVar0 = joaat("PROP_CASH_PILE_01");
		bVar3 = UNK_0x09AC81E49EA267F7(50, 101);
		bVar3 = func_2(bVar3, 1);
	}
	UNK_0x5D96D8530B3D0904(&bVar2, 3);
	UNK_0x5D96D8530B3D0904(&bVar2, 4);
	UNK_0x523BCC9DC80CD82F(bVar0);
	while (!UNK_0xB87F6CF6E5628C67(bVar0))
	{
		SYSTEM::WAIT(0);
	}
	if (UNK_0x8CD06866876216F2())
	{
		UNK_0xB8D1BBEFD1257857(iVar1, UNK_0x550B1459B4642A86(vLocal_19, 1.2f, 1.5f), bVar2, bVar3, bVar0, 0, 0);
	}
	else
	{
		UNK_0xA6FF0828D17CF374(iVar1, UNK_0x550B1459B4642A86(vLocal_19, 1.2f, 1.5f), bVar2, bVar3, 0, bVar0);
	}
}

int func_2(int iParam0, int iParam1)
{
	float fVar0;

	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(iParam0) * Global_262145);
				iParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		default:
			break;
	}
	return iParam0;
}

bool func_3()
{
	var uVar0;

	func_11(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_10())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_9())
	{
		return true;
	}
	if (func_8(159))
	{
		if (!func_7())
		{
			return true;
		}
	}
	if (func_8(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_4() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_4()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_4()
{
	switch (func_6())
	{
		case 0:
			return func_5();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_5()
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

int func_6()
{
	return Global_30768;
}

bool func_7()
{
	return Global_2450632.f_598;
}

bool func_8(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_9()
{
	return Global_2460680;
}

bool func_10()
{
	return Global_2450632.f_593;
}

void func_11(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < UNK_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = UNK_0xB98DB26FBF676FA1(1, iVar0);
		if (iVar1 == 174)
		{
			UNK_0x218F818E64020C17(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_12(iVar0);
					break;
				case 589125870:
					UNK_0x218F818E64020C17(1, iVar0, &vVar4, 4);
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

void func_12(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_14(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_13(bVar4, &bVar5))
						{
							UNK_0x920D29D81E211607(bVar4, vVar0.z);
						}
						if (bVar5)
						{
							UNK_0x046C362CF15F1935(&bVar4);
						}
					}
				}
			}
		}
	}
}

bool func_13(bool bParam0, var uParam1)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0xAF6690C489CC6203(bParam0))
		{
			if (UNK_0x7DDF43006A714856(bParam0))
			{
				if (!UNK_0xA7D7011F9888A365(UNK_0x134B62B726CEC8E6(bParam0)))
				{
					UNK_0x73270B3C9CC833FD(bParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (UNK_0x9C77D2D0559097F0(bParam0, 0))
		{
			if (UNK_0xAFE0D3608EDA7039(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_14(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (UNK_0x40B8C182D63932FC(bParam0))
		{
			if (bParam1)
			{
				if (!UNK_0xE1DBBD6CE209517C(bParam0))
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

int func_15(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_17();
			}
			else
			{
				return 0;
			}
		}
		if (!func_16())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_17();
					}
					else
					{
						return 0;
					}
				}
				if (func_10())
				{
					if (!bParam2)
					{
						func_17();
					}
					else
					{
						return 0;
					}
				}
				if (func_8(157))
				{
					if (!bParam2)
					{
						func_17();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!UNK_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_17();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = UNK_0xDA9EEE4F835948F9();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_17();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!UNK_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_17();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_16()
{
	return Global_1312854;
}

void func_17()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_18()
{
	UNK_0x10FAF14A60A0DBE1();
}

