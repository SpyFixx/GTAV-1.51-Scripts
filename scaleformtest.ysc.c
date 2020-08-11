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
		func_5();
	}
	iLocal_19 = UNK_0xB01F55A0FD1CFD49("instructional_buttons");
	while (!UNK_0x83D8570832F172A7(iLocal_19))
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		UNK_0x6567AE843FADBA94(iLocal_19, 255, 255, 255, false, 0);
		func_4();
		func_1(iLocal_18, iLocal_19);
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			UNK_0x7E60C62A7CE58FC8(iParam1, "CLEAR_ALL");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iParam1, "SET_CLEAR_SPACE");
			UNK_0x3CAEA85DA607305E(200);
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(false);
			func_3(UNK_0xF59058FCB716F903(2, 191, true));
			func_2("PRESS A");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(true);
			func_3(UNK_0xF59058FCB716F903(2, 194, true));
			func_2("PRESS B");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(2);
			func_3(UNK_0xF59058FCB716F903(2, 193, true));
			func_2("PRESS X");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(3);
			func_3(UNK_0xF59058FCB716F903(2, 192, true));
			func_2("PRESS Y");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iParam1, "SET_BACKGROUND_COLOUR");
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(80);
			UNK_0x7E60D21B163E9D56();
			iLocal_18 = -1;
			break;
		case 1:
			UNK_0x7E60C62A7CE58FC8(iParam1, "CLEAR_ALL");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iParam1, "SET_CLEAR_SPACE");
			UNK_0x3CAEA85DA607305E(200);
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(false);
			func_3(UNK_0xF59058FCB716F903(2, 187, true));
			func_2("DOWN");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(true);
			func_3(UNK_0xF59058FCB716F903(2, 188, true));
			func_2("UP");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(2);
			func_3(UNK_0xF59058FCB716F903(2, 190, true));
			func_2("LEFT");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(3);
			func_3(UNK_0xF59058FCB716F903(2, 189, true));
			func_2("RIGHT");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iParam1, "SET_BACKGROUND_COLOUR");
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(80);
			UNK_0x7E60D21B163E9D56();
			iLocal_18 = -1;
			break;
		case 2:
			UNK_0x7E60C62A7CE58FC8(iParam1, "CLEAR_ALL");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iParam1, "SET_CLEAR_SPACE");
			UNK_0x3CAEA85DA607305E(200);
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(false);
			func_3(UNK_0xF59058FCB716F903(2, 202, true));
			func_2("BACK");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iParam1, "SET_BACKGROUND_COLOUR");
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(80);
			UNK_0x7E60D21B163E9D56();
			iLocal_18 = -1;
			break;
		default:
			break;
	}
}

void func_2(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_3(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

void func_4()
{
	if (Global_19465 == 0)
	{
		if (((((((((UNK_0x06F8112AA79C53D9(2, 189) || UNK_0x06F8112AA79C53D9(2, 190)) || UNK_0x06F8112AA79C53D9(2, 188)) || UNK_0x06F8112AA79C53D9(2, 187)) || UNK_0x06F8112AA79C53D9(2, 205)) || UNK_0x06F8112AA79C53D9(2, 206)) || UNK_0x06F8112AA79C53D9(2, 207)) || UNK_0x06F8112AA79C53D9(2, 208)) || UNK_0x06F8112AA79C53D9(2, 201)) || UNK_0x06F8112AA79C53D9(2, 202))
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
		if (UNK_0x06F8112AA79C53D9(2, 217))
		{
			iLocal_18 = 1;
		}
		if (UNK_0x06F8112AA79C53D9(2, 189))
		{
			iLocal_18 = 2;
		}
		if (UNK_0x06F8112AA79C53D9(2, 190))
		{
			iLocal_18 = 2;
		}
		if (UNK_0x06F8112AA79C53D9(2, 205))
		{
		}
		if (UNK_0x06F8112AA79C53D9(2, 206))
		{
		}
		if (UNK_0x06F8112AA79C53D9(2, 207))
		{
		}
		if (UNK_0x06F8112AA79C53D9(2, 208))
		{
		}
		if (UNK_0x06F8112AA79C53D9(2, 188))
		{
			iLocal_18 = 2;
		}
		if (UNK_0x06F8112AA79C53D9(2, 187))
		{
			iLocal_18 = 2;
		}
		if (UNK_0x06F8112AA79C53D9(2, 201))
		{
			iLocal_18 = 1;
		}
		if (UNK_0x06F8112AA79C53D9(2, 202))
		{
			iLocal_18 = 0;
		}
		if (UNK_0x06F8112AA79C53D9(2, 203))
		{
			iLocal_18 = 1;
		}
		if (UNK_0x06F8112AA79C53D9(2, 204))
		{
			iLocal_18 = 1;
		}
	}
}

void func_5()
{
	func_6(0);
	UNK_0x21387C9EECC2B220(false);
	UNK_0xE17FDF9E3068281B(&iLocal_19);
	UNK_0x10FAF14A60A0DBE1();
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		func_13();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_12(0))
		{
			func_7(0);
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

void func_7(int iParam0)
{
	if (func_11())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_10())
		{
			func_9(1, 1);
		}
		else
		{
			func_9(0, 0);
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
	if (!func_8())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_8()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_12(0))
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

bool func_10()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_11()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

bool func_12(int iParam0)
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

void func_13()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

