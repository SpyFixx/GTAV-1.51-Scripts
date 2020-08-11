#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	bool bLocal_2 = false;
#endregion

void __EntryFunction__()
{
	if (UNK_0x2EBF608FFE6CA406(83))
	{
		func_10();
	}
	UNK_0x98AB0CC3E937A146(0);
	UNK_0x0674E58A79778E99(&(Global_111638.f_10011.f_25), true);
	func_7();
	UNK_0x31A33F7BCB08CB80(true);
	if (!UNK_0x757EF87A33649210())
	{
		UNK_0x53491B90E4FD0E56(0);
	}
	iLocal_0 = UNK_0xB01F55A0FD1CFD49("OPENING_CREDITS");
	while (!UNK_0x83D8570832F172A7(iLocal_0))
	{
		func_7();
		SYSTEM::WAIT(0);
	}
	while (!UNK_0x757EF87A33649210())
	{
		func_7();
		SYSTEM::WAIT(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (UNK_0x1C0640BA9A7327B3() + 8000 + SYSTEM::ROUND((2f * 1000f)));
	while (!UNK_0x22A8E52414415B76())
	{
		func_7();
		if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10011.f_25, true))
		{
			UNK_0x6567AE843FADBA94(iLocal_0, 255, 255, 255, 255, 0);
			if (!bLocal_2)
			{
				if (UNK_0x1C0640BA9A7327B3() > iLocal_1)
				{
					func_5("TITLE");
					bLocal_2 = true;
					iLocal_1 = (UNK_0x1C0640BA9A7327B3() + SYSTEM::ROUND((2f * 1000f)));
				}
			}
			else if (UNK_0x1C0640BA9A7327B3() > iLocal_1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_10011.f_25), true);
				if (UNK_0xE7E2C8B4B9C58AE9() || UNK_0x0EFF6B4415DAF4A1())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		SYSTEM::WAIT(0);
	}
	func_10();
}

void func_1()
{
	Global_98783 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_4(int iParam0, int iParam1)
{
	Global_98783.f_7 = iParam0;
	Global_98783.f_8 = iParam1;
}

void func_5(bool bParam0)
{
	UNK_0x7E60C62A7CE58FC8(iLocal_0, "HIDE_LOGO");
	UNK_0x7ACC3006A87F8B39("STRING");
	UNK_0xD06AC7C87A34A6AD(bParam0);
	UNK_0x779B34565F4D71B1();
	UNK_0x7E60D21B163E9D56();
}

void func_6(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	UNK_0x7E60C62A7CE58FC8(iLocal_0, "SHOW_LOGO");
	UNK_0x7ACC3006A87F8B39("STRING");
	UNK_0xD06AC7C87A34A6AD(bParam0);
	UNK_0x779B34565F4D71B1();
	UNK_0x7C19E5E4784BD7CF(bParam1);
	UNK_0x7C19E5E4784BD7CF(bParam2);
	UNK_0x7C19E5E4784BD7CF(bParam3);
	UNK_0x7C19E5E4784BD7CF(bParam4);
	UNK_0x7C19E5E4784BD7CF(bParam5);
	UNK_0x7C19E5E4784BD7CF(bParam6);
	UNK_0x7C19E5E4784BD7CF(bParam7);
	UNK_0x7E60D21B163E9D56();
}

void func_7()
{
	UNK_0xBD706C594F6DCD4A();
	UNK_0x38C3A68D7861DCFD(2, 199, 1);
	UNK_0xD9ACBBA59FD5A09E(7);
	func_8();
}

void func_8()
{
	UNK_0xC2127C0F64D6A3B9();
	func_9();
}

void func_9()
{
	Global_22211.f_134 = 1;
}

void func_10()
{
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_10011.f_25), true);
	if (iLocal_0 != 0)
	{
		UNK_0xE17FDF9E3068281B(&iLocal_0);
	}
	UNK_0xD9ACBBA59FD5A09E(4);
	UNK_0x31A33F7BCB08CB80(false);
	UNK_0x98AB0CC3E937A146(1);
	UNK_0x10FAF14A60A0DBE1();
}

