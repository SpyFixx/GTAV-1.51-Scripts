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
	if (UNK_0x757EF87A33649210())
	{
		UNK_0x82E51BCA72537B6C(500);
	}
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		func_2();
	}
	iLocal_18 = UNK_0xB01F55A0FD1CFD49("graphic_design");
	while (!UNK_0x83D8570832F172A7(iLocal_18))
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		UNK_0xEF45C43067063F18(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)
{
	if (Global_19465 == 0)
	{
		if (((((((UNK_0x06F8112AA79C53D9(2, 189) || UNK_0x06F8112AA79C53D9(2, 190)) || UNK_0x06F8112AA79C53D9(2, 188)) || UNK_0x06F8112AA79C53D9(2, 187)) || UNK_0x06F8112AA79C53D9(2, 205)) || UNK_0x06F8112AA79C53D9(2, 206)) || UNK_0x06F8112AA79C53D9(2, 201)) || UNK_0x06F8112AA79C53D9(2, 202))
		{
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	else if (SYSTEM::TIMERA() > 50)
	{
		Global_19465 = 0;
	}
	if (Global_19465 == 0)
	{
		if (UNK_0x06F8112AA79C53D9(2, 189))
		{
			UNK_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(10);
			UNK_0x7E60D21B163E9D56();
		}
		if (UNK_0x06F8112AA79C53D9(2, 190))
		{
			UNK_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(11);
			UNK_0x7E60D21B163E9D56();
		}
		if (UNK_0x06F8112AA79C53D9(2, 205))
		{
			UNK_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(4);
			UNK_0x7E60D21B163E9D56();
		}
		if (UNK_0x06F8112AA79C53D9(2, 206))
		{
			UNK_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(6);
			UNK_0x7E60D21B163E9D56();
		}
		if (UNK_0x06F8112AA79C53D9(2, 188))
		{
			UNK_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(8);
			UNK_0x7E60D21B163E9D56();
		}
		if (UNK_0x06F8112AA79C53D9(2, 187))
		{
			UNK_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(9);
			UNK_0x7E60D21B163E9D56();
		}
		if (UNK_0x06F8112AA79C53D9(2, 201))
		{
			UNK_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(16);
			UNK_0x7E60D21B163E9D56();
		}
		if (UNK_0x06F8112AA79C53D9(2, 202))
		{
			UNK_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(17);
			UNK_0x7E60D21B163E9D56();
		}
	}
}

void func_2()
{
	func_3(0);
	UNK_0x21387C9EECC2B220(false);
	UNK_0xE17FDF9E3068281B(&iLocal_18);
	UNK_0x10FAF14A60A0DBE1();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		UNK_0x5D96D8530B3D0904(&Global_7357, 16);
	}
	if (UNK_0x1EE04CEA36EF313B())
	{
		UNK_0x5CEB4DB888A62073(false);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7356, 30);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7356, 30);
	}
	if (!func_5())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_5()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				UNK_0x1CFAC524932A967E(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			UNK_0x39F06A2B18483C68(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			UNK_0x39F06A2B18483C68(Global_19423);
		}
		else
		{
			UNK_0x39F06A2B18483C68(Global_19414);
		}
	}
}

bool func_7()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_8()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

bool func_9(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 14))
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
	if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		return true;
	}
	if (Global_19486.f_1 > 3)
	{
		return true;
	}
	return false;
}

void func_10()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

