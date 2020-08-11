void __EntryFunction__()
{
	UNK_0xB57F88F0123F4C38();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_110290)
	{
		if (Global_110290[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (UNK_0x1C0640BA9A7327B3() > Global_110290[iVar0 /*28*/].f_21 && Global_110290[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					UNK_0x2CBCC7DC0EEFF804(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_110290[iVar0 /*28*/].f_21 != -1)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Global_110290[iVar0 /*28*/].f_27, false))
					{
						Global_110290[iVar0 /*28*/].f_21 = (Global_110290[iVar0 /*28*/].f_21 + SYSTEM::ROUND((UNK_0x6117725E0134737F() * 1000f)));
						if (UNK_0x9C6E1680B00A79AE(iVar1))
						{
							UNK_0x5D96D8530B3D0904(&(Global_110290[iVar0 /*28*/].f_27), false);
						}
					}
				}
				if (Global_110290[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_110290[iVar0 /*28*/].f_23 != 0)
					{
						if (!UNK_0x437347B10A200C4B(Global_110290[iVar0 /*28*/].f_23, 0))
						{
							if (!UNK_0xEAE0D21A50E6C7F4(Global_110290[iVar0 /*28*/].f_27, 3))
							{
								UNK_0xB5CBBD8CB1D39B8F(iVar1, UNK_0x68E4ADDDDCD7BDDE(Global_110290[iVar0 /*28*/].f_23, Global_110290[iVar0 /*28*/].f_24));
							}
							else
							{
								UNK_0xC7FCEAE8809CD8DE(iVar1, Global_110290[iVar0 /*28*/].f_23, Global_110290[iVar0 /*28*/].f_24, Global_110290[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_110290[iVar0 /*28*/].f_24 != 0f || Global_110290[iVar0 /*28*/].f_24.f_1 != 0f) || Global_110290[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						UNK_0xB5CBBD8CB1D39B8F(iVar1, Global_110290[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					UNK_0x5FFE0E021F604464(iVar1, Global_110290[iVar0 /*28*/].f_24, Global_110290[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((UNK_0x1C0640BA9A7327B3() - Global_110290[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_110290[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_110290[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_110290[iParam0 /*28*/].f_4), "", 64);
	Global_110290[iParam0 /*28*/].f_23 = 0;
	Global_110290[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_110290[iParam0 /*28*/].f_27 = 0;
	Global_110290[iParam0 /*28*/].f_20 = 0;
	Global_110290[iParam0 /*28*/].f_22 = 0;
}

bool func_3(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (!UNK_0x7F8A39872A07D2CE(&(Global_110290[iParam0 /*28*/]), "") && !UNK_0x2EBF5002C6B6A06C(&(Global_110290[iParam0 /*28*/])))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_110290[iParam0 /*28*/].f_27, true))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_110290[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_110290[iParam0 /*28*/]), &(Global_110290[iParam0 /*28*/].f_4), Global_110290[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_110290[iParam0 /*28*/]), &(Global_110290[iParam0 /*28*/].f_4));
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(Global_110290[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_110290[iParam0 /*28*/]), Global_110290[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_110290[iParam0 /*28*/]));
		}
	}
	return false;
}

int func_4(int iParam0, bool bParam1)
{
	UNK_0xCECE25C7ECD44603(bParam1);
	return UNK_0xE3789B9938DCEAE8((1 + iParam0));
}

int func_5(int iParam0, bool bParam1, bool bParam2)
{
	UNK_0xCECE25C7ECD44603(bParam1);
	UNK_0x6D99DF8263D35CE5(bParam2);
	return UNK_0xE3789B9938DCEAE8((1 + iParam0));
}

int func_6(int iParam0, bool bParam1, bool bParam2)
{
	UNK_0xCECE25C7ECD44603(bParam1);
	UNK_0x6B012227B3921E18(bParam2);
	return UNK_0xE3789B9938DCEAE8((1 + iParam0));
}

int func_7(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	UNK_0xCECE25C7ECD44603(bParam1);
	UNK_0x6B012227B3921E18(bParam2);
	UNK_0x6D99DF8263D35CE5(bParam3);
	return UNK_0xE3789B9938DCEAE8((1 + iParam0));
}

