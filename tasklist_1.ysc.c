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
	var uLocal_18[3] = { 0, 0, 0 };
	int iLocal_22 = 0;
	var uLocal_23[3] = { 0, 0, 0 };
	int iLocal_27 = 0;
	int iLocal_28 = 0;
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
	if (UNK_0x2EBF608FFE6CA406(2))
	{
		func_11();
	}
	while (true)
	{
		SYSTEM::WAIT(250);
		switch (iLocal_27)
		{
			case 0:
				if (uLocal_18[0])
				{
					StringCopy(&(Global_21924[1 /*42*/]), "CL_C1A", 16);
					StringCopy(&(Global_21924[1 /*42*/].f_4), "CL_C1A_BR", 16);
					Global_21924[1 /*42*/].f_8 = 0;
					Global_21924[1 /*42*/].f_9 = 2;
					StringCopy(&(Global_21924[1 /*42*/].f_10[1 /*4*/]), "CL_C1A_J1", 16);
					Global_21924[1 /*42*/].f_37[1] = 0;
					Global_21924[1 /*42*/].f_32[1] = 3;
					Global_21924[1 /*42*/].f_27[1] = 0;
					StringCopy(&(Global_21924[1 /*42*/].f_10[2 /*4*/]), "CL_C1A_J2", 16);
					Global_21924[1 /*42*/].f_37[2] = 0;
					Global_21924[1 /*42*/].f_32[2] = 3;
					Global_21924[1 /*42*/].f_27[2] = 0;
					iLocal_22 = 0;
					while (iLocal_22 < Global_21924[1 /*42*/].f_32[1])
					{
						Global_30822[iLocal_22] = 0;
						Global_30818[iLocal_22] = 0;
						iLocal_22++;
					}
					func_4(1, 1, 1, 1);
					func_3("CL_ADDED", "CL_C1A", 3000, 1);
					iLocal_27 = 1;
				}
				break;
			case 1:
				iLocal_22 = 0;
				while (iLocal_22 < Global_21924[1 /*42*/].f_32[1])
				{
					if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						if (UNK_0xC844350D5D58C99A(uLocal_23[iLocal_22]))
						{
							if (UNK_0xEB6A8945D1AC98A1(uLocal_23[iLocal_22]))
							{
								if (UNK_0xB87D13D0C064E9D1(uLocal_23[iLocal_22], UNK_0x16F2683693E537C9(), 1))
								{
									if (!Global_30818[iLocal_22])
									{
										Global_21924[1 /*42*/].f_27[1]++;
										func_2("CL_C1A_J1", Global_21924[1 /*42*/].f_27[1], Global_21924[1 /*42*/].f_32[1], 2000, 1);
										Global_30818[iLocal_22] = 1;
									}
									if (UNK_0x437347B10A200C4B(uLocal_23[iLocal_22], 0))
									{
										if (!Global_30822[iLocal_22])
										{
											if (UNK_0x468DA3FA89B1F574(uLocal_23[iLocal_22]) && func_1())
											{
												Global_21924[1 /*42*/].f_27[2]++;
												func_2("CL_C1A_J2", Global_21924[1 /*42*/].f_27[2], Global_21924[1 /*42*/].f_32[2], 2000, 1);
												Global_30822[iLocal_22] = 1;
											}
										}
									}
									if (Global_21924[1 /*42*/].f_27[1] >= Global_21924[1 /*42*/].f_32[1] && Global_21924[1 /*42*/].f_27[2] >= Global_21924[1 /*42*/].f_32[2])
									{
										func_3("CL_COMPLETE", "CL_C1A", 3000, 1);
										Global_21924[1 /*42*/].f_8 = 1;
										iLocal_27 = 2;
									}
								}
							}
						}
					}
					iLocal_22++;
				}
				break;
			case 2:
				break;
		}
		SYSTEM::WAIT(250);
		switch (iLocal_28)
		{
			case 0:
				if (uLocal_18[1])
				{
					StringCopy(&(Global_21924[2 /*42*/]), "CL_C1B", 16);
					StringCopy(&(Global_21924[2 /*42*/].f_4), "CL_C1B_BR", 16);
					Global_21924[2 /*42*/].f_8 = 0;
					Global_21924[2 /*42*/].f_9 = 3;
					StringCopy(&(Global_21924[2 /*42*/].f_10[1 /*4*/]), "CL_C1B_J1", 16);
					Global_21924[2 /*42*/].f_37[1] = 0;
					Global_21924[2 /*42*/].f_32[1] = -1;
					Global_21924[2 /*42*/].f_27[1] = -1;
					StringCopy(&(Global_21924[2 /*42*/].f_10[2 /*4*/]), "CL_C1B_J2", 16);
					Global_21924[2 /*42*/].f_37[2] = 0;
					Global_21924[2 /*42*/].f_32[2] = -1;
					Global_21924[2 /*42*/].f_27[2] = -1;
					StringCopy(&(Global_21924[2 /*42*/].f_10[3 /*4*/]), "CL_C1B_J3", 16);
					Global_21924[2 /*42*/].f_37[3] = 0;
					Global_21924[2 /*42*/].f_32[3] = -1;
					Global_21924[2 /*42*/].f_27[3] = -1;
					func_4(136, 2, 1, 1);
					func_3("CL_ADDED", "CL_C1B", 3000, 1);
					iLocal_28 = 1;
				}
				break;
			case 1:
				if (!Global_21924[2 /*42*/].f_37[1])
				{
				}
				if (!Global_21924[2 /*42*/].f_37[2])
				{
				}
				if (!Global_21924[2 /*42*/].f_37[3])
				{
				}
				if ((Global_21924[2 /*42*/].f_37[1] == 1 && Global_21924[2 /*42*/].f_37[2] == 1) && Global_21924[2 /*42*/].f_37[3] == 1)
				{
					func_3("CL_COMPLETE", "CL_C1B", 3000, 1);
					Global_21924[2 /*42*/].f_8 = 1;
					iLocal_28 = 2;
				}
				break;
			case 2:
				break;
		}
	}
}

int func_1()
{
	if (Global_21841)
	{
		return 1;
	}
	return 0;
}

void func_2(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	iParam4 = iParam4;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	UNK_0x6D99DF8263D35CE5(bParam2);
	UNK_0x12F275EDEEF63A2B(iParam3, 0);
}

void func_3(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x6B012227B3921E18(bParam1);
	UNK_0x12F275EDEEF63A2B(iParam2, 0);
}

int func_4(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_10())
	{
		return 0;
	}
	if (func_5(iParam0, iParam1, bParam2, iParam3) == 1)
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (UNK_0x8A22C4C08282BF26(joaat("APPSIDETASK")) > 0)
	{
		return 0;
	}
	if (func_8() == 0)
	{
		func_7();
		return 0;
	}
	func_6(Global_21923);
	Global_22093[Global_21923 /*9*/].f_1 = iParam1;
	Global_22093[Global_21923 /*9*/] = iParam0;
	if (iParam3 == 0)
	{
	}
	else
	{
		Global_22093[Global_21923 /*9*/].f_8 = iParam3;
	}
	if (bParam2)
	{
	}
	return 1;
}

void func_6(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;

	iVar0 = UNK_0x4460E481B9E33ADA();
	iVar1 = UNK_0x8D199E381D262EEF();
	iVar2 = UNK_0xD8A54335F18763BA();
	iVar3 = UNK_0x972A296334C9D57B();
	uVar4 = UNK_0x118229AD063C3C1D() + 1;
	iVar5 = UNK_0x1A61A218F5C5EB02();
	Global_22093[iParam0 /*9*/].f_2 = iVar0;
	Global_22093[iParam0 /*9*/].f_2.f_1 = iVar1;
	Global_22093[iParam0 /*9*/].f_2.f_2 = iVar2;
	Global_22093[iParam0 /*9*/].f_2.f_3 = iVar3;
	Global_22093[iParam0 /*9*/].f_2.f_4 = uVar4;
	Global_22093[iParam0 /*9*/].f_2.f_5 = iVar5;
}

void func_7()
{
}

int func_8()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_22093[iVar0 /*9*/].f_8 == 0)
		{
			Global_21923 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	Global_21923 = 3;
	Global_22093[Global_21923 /*9*/].f_2 = -1;
	Global_22093[Global_21923 /*9*/].f_2.f_1 = 0;
	Global_22093[Global_21923 /*9*/].f_2.f_2 = 0;
	Global_22093[Global_21923 /*9*/].f_2.f_3 = 0;
	Global_22093[Global_21923 /*9*/].f_2.f_5 = 99999;
	while (iVar0 < 2)
	{
		if (Global_22093[iVar0 /*9*/].f_8 == 0 || Global_22093[iVar0 /*9*/].f_8 == 1)
		{
			if (!func_9(Global_22093[iVar0 /*9*/].f_2, Global_22093[Global_21923 /*9*/].f_2))
			{
				Global_21923 = iVar0;
			}
		}
		iVar0++;
	}
	if (Global_21923 == 3)
	{
		return 0;
	}
	return 1;
}

bool func_9(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;

	if (Param0.f_5 < Param6.f_5)
	{
		return false;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return true;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return false;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return true;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}

bool func_10()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_11()
{
	UNK_0x10FAF14A60A0DBE1();
}

