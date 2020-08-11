#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	switch (ScriptParam_0)
	{
		case 3:
			while (true)
			{
				SYSTEM::WAIT(5000);
			}
			break;
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1705870862, 25, 1, "PM_PANE_AUD", 0, 0);
				func_2(1, 1, -1705870862, 50, 1, "PM_PANE_DIS", 0, 0);
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1705871862)
			{
			}
			break;
		case 2:
			switch (ScriptParam_0.f_1)
			{
				case -1931845307:
					break;
				case -1705871862:
					switch (ScriptParam_0.f_3)
					{
						case 25:
							break;
						case 50:
							break;
					}
					break;
			}
			break;
	}
	UNK_0x10FAF14A60A0DBE1();
}

void func_1(bool bParam0)
{
	if (UNK_0x673DE2AC97BFD28A("DISPLAY_DATA_SLOT"))
	{
		UNK_0x3CAEA85DA607305E(bParam0);
		UNK_0x7E60D21B163E9D56();
	}
}

void func_2(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (UNK_0x673DE2AC97BFD28A("SET_DATA_SLOT"))
	{
		UNK_0x3CAEA85DA607305E(bParam0);
		UNK_0x3CAEA85DA607305E(bParam1);
		UNK_0x3CAEA85DA607305E(bParam2);
		UNK_0x3CAEA85DA607305E(bParam3);
		UNK_0x3CAEA85DA607305E(bParam7);
		UNK_0x3CAEA85DA607305E(false);
		if (bParam4)
		{
			UNK_0x3CAEA85DA607305E(true);
		}
		else
		{
			UNK_0x3CAEA85DA607305E(false);
		}
		if (iParam6 == 0)
		{
			func_3(bParam5);
		}
		else
		{
			UNK_0x045A0775396CC970(bParam5);
		}
		UNK_0x7E60D21B163E9D56();
	}
}

void func_3(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

