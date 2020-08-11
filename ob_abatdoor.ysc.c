#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	bool bLocal_3 = false;
	vector3 vLocal_4 = { 0f, 0f, 0f };
	vector3 vLocal_7 = { 0f, 0f, 0f };
	bool bScriptParam_0 = false;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (UNK_0x2EBF608FFE6CA406(2))
	{
		func_4();
	}
	if (UNK_0xC844350D5D58C99A(bScriptParam_0))
	{
		UNK_0x1E9649458B15960F(bScriptParam_0, true);
		vLocal_4 = { UNK_0x68F4C0EC296D3901(bScriptParam_0, true) };
		vLocal_7 = { UNK_0x835730A2D89F6093(bScriptParam_0, 2) };
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
							UNK_0x523BCC9DC80CD82F(joaat("P_ABAT_ROLLER_1_COL"));
							if (UNK_0xB87F6CF6E5628C67(joaat("P_ABAT_ROLLER_1_COL")))
							{
								if (!func_3(vLocal_4, 0f, 0f, 0f, 0))
								{
									bLocal_3 = UNK_0x7707E48765093646(joaat("P_ABAT_ROLLER_1_COL"), vLocal_4, true, true, false);
									UNK_0xC023D1C4BF532815(bLocal_3, vLocal_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					case 1:
						if (UNK_0x1A5AE8A9B1D42A10(bScriptParam_0))
						{
							if (UNK_0x8A22C4C08282BF26(joaat("MICHAEL2")) > 0)
							{
								UNK_0x3F423BF5B8125A50("map_objects");
								if (UNK_0xB4AE0788C1587752("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					case 2:
						if (UNK_0x1A5AE8A9B1D42A10(bScriptParam_0))
						{
							if (UNK_0x8A22C4C08282BF26(joaat("MICHAEL2")) > 0)
							{
								if (Global_95175)
								{
									if (UNK_0xB4AE0788C1587752("map_objects"))
									{
										UNK_0xD65E6E13E145467B(bScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, false, true, 0, false, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					case 3:
						fVar9 = 0.35f;
						vVar0 = { vLocal_4 + Vector(3.45f, 0f, 0f) };
						if (UNK_0xC844350D5D58C99A(bLocal_3))
						{
							vVar3 = { UNK_0x68F4C0EC296D3901(bLocal_3, true) };
							if (!func_2(vVar3, vVar0, 0.1f, 0))
							{
								vVar6 = { vVar0 - vVar3 };
								UNK_0xA47B46945FF6DE74(bLocal_3, vVar3 + func_1(vVar6) * FtoV(UNK_0x6117725E0134737F()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_95176 = 1;
								iLocal_2 = 4;
							}
						}
						break;
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}

Vector3 func_1(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

bool func_2(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (UNK_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
		{
			if (UNK_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
			{
				if (UNK_0x755FF954DAE327E1((vParam0.z - vParam3.z)) <= fParam6)
				{
					return true;
				}
			}
		}
	}
	else if (UNK_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (UNK_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_3(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_4()
{
	if (UNK_0xC844350D5D58C99A(bLocal_3))
	{
		UNK_0xF690C84DADBB3551(&bLocal_3);
	}
	UNK_0x71199B01895C6202(joaat("P_ABAT_ROLLER_1_COL"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	UNK_0x10FAF14A60A0DBE1();
}

void func_5(bool bParam0)
{
	func_6(bParam0);
}

void func_6(bool bParam0)
{
	if (UNK_0x7F8A39872A07D2CE(bParam0, bParam0))
	{
	}
}

