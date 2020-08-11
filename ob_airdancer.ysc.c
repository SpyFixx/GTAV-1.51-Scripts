#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	bool bScriptParam_0 = false;
#endregion

void __EntryFunction__()
{
	if (UNK_0x2EBF608FFE6CA406(2))
	{
		func_1();
	}
	if (UNK_0xC844350D5D58C99A(bScriptParam_0))
	{
		UNK_0x1E9649458B15960F(bScriptParam_0, true);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (UNK_0xC844350D5D58C99A(bScriptParam_0))
		{
			if (UNK_0x63D2C15453688621(bScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (UNK_0x1A5AE8A9B1D42A10(bScriptParam_0))
						{
							UNK_0x3F423BF5B8125A50("map_objects");
							if (UNK_0xB4AE0788C1587752("map_objects"))
							{
								UNK_0xD65E6E13E145467B(bScriptParam_0, "airdancer_test", "map_objects", 1f, true, false, 0, false, 0);
								iLocal_2 = 1;
							}
						}
						break;
					case 1:
						break;
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	func_2("ob_airdancer Terminated >>>>>>>>>>>>>>>>>\n");
	UNK_0x10FAF14A60A0DBE1();
}

void func_2(bool bParam0)
{
	func_3(bParam0);
}

void func_3(bool bParam0)
{
	if (UNK_0x7F8A39872A07D2CE(bParam0, bParam0))
	{
	}
}

