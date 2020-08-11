#region Local Var
	int iLocal_0 = 0;
	bool bLocal_1 = false;
	vector3 vLocal_2 = { 0f, 0f, 0f };
	bool bLocal_5 = false;
	bool bLocal_6 = false;
	bool bLocal_7 = false;
	bool bLocal_8 = false;
	bool bLocal_9 = false;
	bool bScriptParam_0 = false;
#endregion

void __EntryFunction__()
{
	bLocal_6 = "Poledance_01";
	bLocal_7 = joaat("A_F_Y_BEACH_01");
	bLocal_8 = "MISSSTRIP_CLUB";
	if (UNK_0xC844350D5D58C99A(bScriptParam_0))
	{
		UNK_0x1E9649458B15960F(bScriptParam_0, true);
		vLocal_2 = { UNK_0x68E4ADDDDCD7BDDE(bScriptParam_0, 0f, 0f, 0f) };
		bLocal_5 = UNK_0xD9522BA9E27E1349(bScriptParam_0);
		UNK_0x20641932E5104B25(bScriptParam_0, false, 0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (UNK_0xC844350D5D58C99A(bScriptParam_0))
		{
			if (UNK_0x63D2C15453688621(bScriptParam_0))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					case 2:
						func_3();
						if (func_2())
						{
							UNK_0x20641932E5104B25(bScriptParam_0, true, 0);
							iLocal_0 = 3;
						}
						break;
					case 3:
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_1))
						{
							UNK_0x8BE3D040D15AEA1D(bLocal_1, -1);
							UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
							UNK_0xFADC0A217229F6B5(bLocal_1, true);
							UNK_0x10FAF14A60A0DBE1();
						}
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
	if (!UNK_0x437347B10A200C4B(bLocal_1, 0))
	{
		if (!UNK_0x0A059E0DB9253280(bLocal_1))
		{
			UNK_0xEBA53F35D0085654(&bLocal_1);
		}
		else
		{
			UNK_0xFADC0A217229F6B5(bLocal_1, true);
		}
	}
	UNK_0x10FAF14A60A0DBE1();
}

bool func_2()
{
	vector3 vVar0;

	vVar0 = { 2f, 2f, 0.5f };
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_1))
		{
			if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_1, vVar0, 0, 1, 0))
			{
				return true;
			}
			if (UNK_0xB87D13D0C064E9D1(bLocal_1, UNK_0x16F2683693E537C9(), 1))
			{
				return true;
			}
			if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), bLocal_1))
			{
				return true;
			}
		}
		if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
		{
			return true;
		}
	}
	return false;
}

void func_3()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_1))
	{
		if (UNK_0xD1960163A3042274(bLocal_1, -2017877118) == 7)
		{
			UNK_0xC6EB89C59F2AF6B8(bLocal_1, bLocal_8, bLocal_6, 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
		}
		else if (UNK_0xFCCE56DAE67AA889(bLocal_1, bLocal_8, bLocal_6, 3))
		{
			UNK_0xC6EB89C59F2AF6B8(bLocal_1, bLocal_8, bLocal_6, 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
		}
		else if (!bLocal_9)
		{
			if (UNK_0xB4ECF989E2C1DAC8(bLocal_1, bLocal_8, bLocal_6, 3))
			{
				UNK_0x4E6D1F54D3FBC5B1(bLocal_1, bLocal_8, bLocal_6, UNK_0x79833B02DBD2A244(0f, 1f));
				bLocal_9 = true;
			}
		}
	}
}

void func_4()
{
	if (UNK_0x437347B10A200C4B(bLocal_1, 0))
	{
		bLocal_1 = UNK_0x36F2404464202779(5, bLocal_7, vLocal_2.x, vLocal_2.y, vLocal_2.z, bLocal_5, 1, true);
		UNK_0xC743BD39A24D0583(bLocal_1, 0);
		UNK_0x25C5402CC10F76CD(bLocal_1, false);
		UNK_0x11AD11297DC58CC7(bLocal_1, true);
	}
}

bool func_5()
{
	UNK_0x523BCC9DC80CD82F(bLocal_7);
	UNK_0x3F423BF5B8125A50(bLocal_8);
	if (UNK_0xB87F6CF6E5628C67(bLocal_7) && UNK_0xB4AE0788C1587752(bLocal_8))
	{
		return true;
	}
	else
	{
		UNK_0x523BCC9DC80CD82F(bLocal_7);
		UNK_0x3F423BF5B8125A50(bLocal_8);
	}
	return false;
}

