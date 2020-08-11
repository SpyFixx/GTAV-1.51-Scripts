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
	int iLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	struct<67> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2147483647 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	struct<2> Local_107 = { 0, 0 } ;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 1;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	bool bLocal_153 = false;
	struct<34> ScriptParam_0 = { 2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_14 = -1;
	fLocal_15 = 0.001f;
	sLocal_18 = "NULL";
	if (UNK_0x8CD06866876216F2())
	{
		func_52(ScriptParam_0);
	}
	else
	{
		func_50();
	}
	while (true)
	{
		func_49();
		if (Global_262145.f_23568)
		{
			func_50();
		}
		if (func_38())
		{
			func_50();
		}
		func_1();
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	if (Global_4264520)
	{
		if (Global_4268347[iLocal_21 /*12*/].f_11)
		{
			func_35(iLocal_21);
			Global_4268347[iLocal_21 /*12*/].f_11 = 0;
		}
	}
	if (Local_22.f_66.f_8)
	{
		func_17(Local_22.f_66);
	}
	if ((Local_22.f_66.f_2 == 1 && Global_4264521) && func_16(&Local_22))
	{
		bVar0 = true;
	}
	if (Global_4263954[iLocal_21 /*85*/].f_66 == 2147483647 && Local_22.f_66.f_12)
	{
		if (bVar0)
		{
			func_15(0);
		}
		func_50();
	}
	if (Local_22.f_66.f_18 > 0 && !func_14())
	{
		iVar2 = (1000 / SYSTEM::ROUND((UNK_0x6117725E0134737F() * 1000f)));
		if ((UNK_0xF4CCC8CB6DE7F1AE() - Local_22.f_66.f_18) > iVar2 * 10)
		{
			Local_22.f_66.f_18 = -1;
		}
	}
	if (((func_13() && Local_22.f_66.f_2 == 1) && Local_22.f_66.f_13) && !Local_22.f_66.f_12)
	{
		if (UNK_0xF4CCC8CB6DE7F1AE() - Local_22.f_66.f_14) >= func_12(Local_22.f_66.f_5)
		{
			iVar1 = 0;
			if (!UNK_0x79B28160739BC9E6(func_11()) || UNK_0xDD2EE1F5DA6A6AB0())
			{
				iVar1 = 1;
			}
			else if (Local_22.f_66.f_2 != 1)
			{
				iVar1 = 2;
			}
			else if (Local_22.f_66.f_5 != 1 && !UNK_0x98212517C34835B2(&(Local_22.f_66), Local_22.f_66.f_6, Local_22.f_66.f_4, Local_22.f_66.f_7, Local_22.f_66.f_1, Local_22.f_66.f_10))
			{
				iVar1 = 3;
			}
			else if (!UNK_0x80C74F9931DCF063(Local_22.f_66))
			{
				iVar1 = 4;
			}
			else
			{
				Local_22.f_66.f_12 = 1;
				Global_4263954[iLocal_21 /*85*/].f_66.f_12 = 1;
				Global_4263954[iLocal_21 /*85*/].f_66 = Local_22.f_66;
			}
			if (iVar1 != 0)
			{
				func_7(iLocal_21);
				func_50();
			}
		}
	}
	if (!bLocal_153)
	{
		if (bVar0)
		{
			func_5(&Local_107, 0);
			bLocal_153 = true;
		}
	}
	else if (bVar0)
	{
		StringCopy(&(Local_107.f_1), "HUD_TRANSP", 64);
		func_2(&Local_107, func_4(&Local_107));
	}
	else
	{
		bLocal_153 = false;
		func_15(0);
	}
}

void func_2(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_3(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0x6D99DF8263D35CE5(uParam0->f_33);
			UNK_0x6D99DF8263D35CE5(uParam0->f_34);
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0x6D99DF8263D35CE5(uParam0->f_33);
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0xD06AC7C87A34A6AD(&(uParam0->f_17));
			UNK_0x6D99DF8263D35CE5(uParam0->f_33);
			UNK_0x6D99DF8263D35CE5(uParam0->f_34);
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0xD06AC7C87A34A6AD(&(uParam0->f_17));
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0x164431059FF80580(uParam0->f_33, 70);
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_3(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_4(var uParam0)
{
	return uParam0->f_35;
}

void func_5(var uParam0, bool bParam1)
{
	func_6(uParam0);
	if (bParam1)
	{
		func_15(0);
	}
	uParam0->f_35 = 1;
}

void func_6(var uParam0)
{
	struct<46> Var0;

	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_7(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_10(iParam0))
		{
			if (!bVar0)
			{
				UNK_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			UNK_0xA6EF5385F39BAC90(Global_4263954[iParam0 /*85*/].f_66);
		}
		func_8(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_8(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_9(&(uParam0->f_14));
	func_9(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_9(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

bool func_10(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return false;
}

var func_11()
{
	return Global_1312745;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_4264523;
		case 1:
			return Global_4264522;
	}
	return 0;
}

bool func_13()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_14()
{
	return Global_98796.f_346 > 0;
}

void func_15(bool bParam0)
{
	UNK_0xBBCE9616B024A2BF();
	if (bParam0)
	{
		UNK_0xA3B57116ADBCDF5F();
	}
}

bool func_16(var uParam0)
{
	if (uParam0->f_66.f_4 == 2043854386)
	{
		return false;
	}
	return true;
}

void func_17(int iParam0)
{
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	struct<67> Var10;
	bool bVar95;
	var uVar96;
	int iVar101;
	int iVar102;
	int iVar103;

	bVar7 = false;
	bVar8 = false;
	if (!func_13())
	{
		bVar7 = true;
		Var0 = iParam0;
		Var0.f_2 = 0;
	}
	if (bVar7 || UNK_0x218F818E64020C17(1, iParam0, &Var0, 7))
	{
		Var10.f_66 = 2147483647;
		iVar9 = func_34(Var0, &Var10);
		if (iVar9 != -1)
		{
			Global_4263954[iVar9 /*85*/].f_66.f_8 = 0;
			if (Global_4263954[iVar9 /*85*/].f_66.f_18 == 0)
			{
				Global_4263954[iVar9 /*85*/].f_66.f_18 = UNK_0xF4CCC8CB6DE7F1AE();
			}
		}
		bVar95 = true;
		if (iVar9 != -1)
		{
			Global_4263954[iVar9 /*85*/].f_66.f_17 = Var0.f_2;
		}
		else
		{
			Global_4264508.f_4 = Var0.f_2;
			Global_4264508.f_6 = Var0.f_3;
			Global_4264508.f_7 = Var0.f_4;
			Global_4264508.f_8 = Var0.f_5;
			Global_4264508.f_9 = Var0.f_6;
			if (Global_4264508.f_10 == 0)
			{
				Global_4264508.f_10 = UNK_0xF4CCC8CB6DE7F1AE();
			}
		}
		switch (Var0.f_2)
		{
			case 0:
				if (iVar9 != -1)
				{
					Global_4268347[iVar9 /*12*/] = Global_4263954[iVar9 /*85*/].f_66.f_3;
					Global_4268347[iVar9 /*12*/].f_1 = Global_4263954[iVar9 /*85*/].f_66.f_7;
					Global_4268347[iVar9 /*12*/].f_2 = Global_4263954[iVar9 /*85*/].f_66.f_4;
					Global_4268347[iVar9 /*12*/].f_3 = Global_4263954[iVar9 /*85*/].f_66.f_1;
					Global_4268347[iVar9 /*12*/].f_5 = Var0.f_1;
					Global_4268347[iVar9 /*12*/].f_6 = Var0.f_3;
					Global_4268347[iVar9 /*12*/].f_7 = Var0.f_4;
					Global_4268347[iVar9 /*12*/].f_8 = Var0.f_5;
					Global_4268347[iVar9 /*12*/].f_9 = Var0.f_6;
					Global_4268347[iVar9 /*12*/].f_11 = 1;
					Global_4263954[iVar9 /*85*/].f_66.f_2 = 2;
					if (Global_4263954[iVar9 /*85*/].f_66.f_11 & 4 != 0)
					{
						func_32(iVar9, bVar95);
					}
					else if (func_13())
					{
						if (bVar95)
						{
							UNK_0x1D18B90CF9028441(Global_4263954[iVar9 /*85*/].f_66, &uVar96);
						}
					}
				}
				break;
			default:
				if (iVar9 != -1)
				{
					Global_4263954[iVar9 /*85*/].f_66.f_2 = 3;
					if ((Global_4263954[iVar9 /*85*/].f_66.f_11 & 1 != 0 && Global_4263954[iVar9 /*85*/].f_66.f_9 < 2) && func_31(Var0.f_2))
					{
						if (func_10(iVar9))
						{
							if (func_24())
							{
								Global_4263954[iVar9 /*85*/].f_66.f_2 = 1;
								Global_4263954[iVar9 /*85*/].f_66.f_9++;
							}
							else if (Global_4263954[iVar9 /*85*/].f_66.f_11 & 2 != 0)
							{
								Global_4264538 = Global_4263954[iVar9 /*85*/].f_66.f_4;
								Global_4264540 = Global_4263954[iVar9 /*85*/].f_66.f_6;
								Global_4264541 = Var0.f_2;
								Global_4264539 = Global_4263954[iVar9 /*85*/].f_66.f_1;
								if (func_23(Global_4264538) && func_13())
								{
									if (!func_22(Global_4263954[iVar9 /*85*/].f_66))
									{
										iVar101 = func_21();
										Global_4264465[iVar101 /*7*/] = Global_4263954[iVar9 /*85*/].f_66;
										Global_4264465[iVar101 /*7*/].f_2 = Global_4264538;
										Global_4264465[iVar101 /*7*/].f_3 = Global_4264540;
										Global_4264465[iVar101 /*7*/].f_1 = Global_4264539;
										Global_4264465[iVar101 /*7*/].f_4 = UNK_0x2B6E0A53779D29EA();
									}
								}
								else
								{
									Global_4264535 = 1;
								}
							}
						}
						else if (func_20(&iVar9))
						{
							Global_4263954[iVar9 /*85*/].f_66.f_2 = 1;
							Global_4263954[iVar9 /*85*/].f_66.f_9++;
						}
						else if (Global_4263954[iVar9 /*85*/].f_66.f_11 & 2 != 0)
						{
							Global_4264538 = Global_4263954[iVar9 /*85*/].f_66.f_4;
							Global_4264540 = Global_4263954[iVar9 /*85*/].f_66.f_6;
							Global_4264541 = Var0.f_2;
							Global_4264539 = Global_4263954[iVar9 /*85*/].f_66.f_1;
							if (func_23(Global_4264538) && func_13())
							{
								if (!func_22(Global_4263954[iVar9 /*85*/].f_66))
								{
									iVar102 = func_21();
									Global_4264465[iVar102 /*7*/] = Global_4263954[iVar9 /*85*/].f_66;
									Global_4264465[iVar102 /*7*/].f_2 = Global_4264538;
									Global_4264465[iVar102 /*7*/].f_3 = Global_4264540;
									Global_4264465[iVar102 /*7*/].f_1 = Global_4264539;
									Global_4264465[iVar102 /*7*/].f_4 = UNK_0x2B6E0A53779D29EA();
								}
							}
							else
							{
								Global_4264535 = 1;
							}
						}
					}
					else if (Global_4263954[iVar9 /*85*/].f_66.f_11 & 2 != 0)
					{
						Global_4264538 = Global_4263954[iVar9 /*85*/].f_66.f_4;
						Global_4264540 = Global_4263954[iVar9 /*85*/].f_66.f_6;
						Global_4264541 = Var0.f_2;
						Global_4264539 = Global_4263954[iVar9 /*85*/].f_66.f_1;
						if ((func_23(Global_4264538) && func_13()) && func_31(Var0.f_2))
						{
							if (!func_22(Global_4263954[iVar9 /*85*/].f_66))
							{
								iVar103 = func_21();
								Global_4264465[iVar103 /*7*/] = Global_4263954[iVar9 /*85*/].f_66;
								Global_4264465[iVar103 /*7*/].f_2 = Global_4264538;
								Global_4264465[iVar103 /*7*/].f_3 = Global_4264540;
								Global_4264465[iVar103 /*7*/].f_1 = Global_4264539;
								Global_4264465[iVar103 /*7*/].f_4 = UNK_0x2B6E0A53779D29EA();
							}
						}
						else
						{
							Global_4264535 = 1;
						}
					}
					if (Global_4263954[iVar9 /*85*/].f_66.f_2 == 3)
					{
						if (bVar8)
						{
							func_19(1, Global_4263954[iVar9 /*85*/].f_66.f_4);
							Global_4264535 = 0;
						}
						if (Global_4263954[iVar9 /*85*/].f_66.f_11 & 4 != 0)
						{
							func_18(iVar9, Global_4263954[iVar9 /*85*/].f_66.f_4, Global_4263954[iVar9 /*85*/].f_66.f_10, Global_4263954[iVar9 /*85*/].f_66.f_1, Var0.f_2);
						}
					}
				}
				break;
		}
	}
}

void func_18(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			UNK_0x5D96D8530B3D0904(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_122.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_7(iParam0);
	}
}

void func_19(int iParam0, var uParam1)
{
	Global_2463019 = uParam1;
	Global_2463018 = iParam0;
}

bool func_20(int iParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (*iParam0 == -1 || func_10(*iParam0))
	{
		return false;
	}
	if (!bVar0)
	{
		if (!UNK_0x79B28160739BC9E6(func_11()) || UNK_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return false;
		}
		if (Global_2461839)
		{
			if (Global_4263954[*iParam0 /*85*/].f_66.f_6 == 1067618600 || Global_4263954[*iParam0 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4264537 = 1;
				return false;
			}
		}
	}
	if ((bVar0 || bVar1) || UNK_0x80C74F9931DCF063(Global_4263954[*iParam0 /*85*/].f_66))
	{
		if (bVar1 && !bVar0)
		{
		}
		Global_4263954[*iParam0 /*85*/].f_66.f_13 = 1;
		Global_4263954[*iParam0 /*85*/].f_66.f_12 = 0;
		Global_4263954[*iParam0 /*85*/].f_66.f_14 = UNK_0xF4CCC8CB6DE7F1AE();
		if (bVar0)
		{
			if (*iParam0 != -1)
			{
				Global_4263954[*iParam0 /*85*/].f_66.f_8 = 1;
				Global_4263954[*iParam0 /*85*/].f_66.f_12 = 1;
			}
		}
		Global_4263954[*iParam0 /*85*/].f_66.f_18 = 0;
		return true;
	}
	return false;
}

int func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = Global_4264465;
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (Global_4264465[iVar0 /*7*/] != 0 && Global_4264465[iVar0 /*7*/] != 2147483647)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= iVar2)
	{
		return 0;
	}
	return iVar1;
}

bool func_22(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = Global_4264465;
	if (iParam0 == 2147483647 || iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (Global_4264465[iVar0 /*7*/] == iParam0)
		{
			return true;
		}
		if (Global_4264465[iVar0 /*7*/].f_6 == iParam0)
		{
			Global_4264465[iVar0 /*7*/].f_4 = UNK_0x2B6E0A53779D29EA();
			Global_4264465[iVar0 /*7*/].f_6 = 2147483647;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_23(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 1780666425 || iParam0 == -2043695058) || iParam0 == -1586170317) || iParam0 == 393059668) || iParam0 == -1027218631) || iParam0 == 1048226110) || iParam0 == 569170531) || iParam0 == -856006867) || iParam0 == 848090538) || iParam0 == -293060240) || iParam0 == -47546905) || iParam0 == 463142405) || iParam0 == 1550217370) || iParam0 == -101307780) || iParam0 == 1052472386) || iParam0 == -2130199671) || iParam0 == -1227654538) || iParam0 == -876012764) || iParam0 == -722894325) || iParam0 == 1407278493) || iParam0 == -1579394494) || iParam0 == 1179783540) || iParam0 == 923419301) || iParam0 == -308826175) || iParam0 == 603298940) || iParam0 == -12619854) || iParam0 == -311112675) || iParam0 == 870439158) || iParam0 == -974288740) || iParam0 == -4138654) || iParam0 == -1180954122) || iParam0 == -1918051016) || iParam0 == 844330594) || iParam0 == 1934825517) || iParam0 == 1852024236) || iParam0 == 2099238988) || iParam0 == 1952643559) || iParam0 == -1172900789) || iParam0 == -2015399333) || iParam0 == -1574795641) || iParam0 == -961034881) || iParam0 == 1135468152) || iParam0 == 1265272476) || iParam0 == -634726636) || iParam0 == 696556762) || iParam0 == 443347049) || iParam0 == 403506509) || iParam0 == -883876414) || iParam0 == -1064150715) || iParam0 == -1387253055) || iParam0 == -716963152) || iParam0 == 1138089938) || iParam0 == -561012053) || iParam0 == 1240683675) || iParam0 == 1241904665) || iParam0 == -494565059) || iParam0 == 827308208) || iParam0 == -1857685192) || iParam0 == 1698417709) || iParam0 == -2017925037) || iParam0 == 1057653594) || iParam0 == 1810506918) || iParam0 == 451427308) || iParam0 == 824622151) || iParam0 == 1253978276) || iParam0 == -1576080766) || iParam0 == 1508411869) || iParam0 == 1428501742) || iParam0 == -1918967151) || iParam0 == 1261538664) || iParam0 == 1180397655) || iParam0 == 1414674366) || iParam0 == 261460130) || iParam0 == -2027658376) || iParam0 == 1668610896) || iParam0 == -2032529561) || iParam0 == -1224479447) || iParam0 == -319306689) || iParam0 == -466527264) || iParam0 == 1925965142) || iParam0 == 592152676) || iParam0 == 2035612943) || iParam0 == 1568659720) || iParam0 == 1220095570) || iParam0 == 2050320631) || iParam0 == 592672421) || iParam0 == 1775876058) || iParam0 == -842062976)
	{
		return true;
	}
	return false;
}

bool func_24()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	bVar1 = true;
	iVar2 = func_30();
	if (iVar2 == -1)
	{
		return false;
	}
	if (!bVar0)
	{
		if (!UNK_0x79B28160739BC9E6(func_11()) || UNK_0xDD2EE1F5DA6A6AB0())
		{
			if (func_29(Global_4263954[iVar2 /*85*/].f_66.f_6, Global_4263954[iVar2 /*85*/].f_66.f_4, Global_4263954[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4264536 = 1;
			}
			return false;
		}
		if (Global_2461839)
		{
			if (Global_4263954[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4263954[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4264537 = 1;
				return false;
			}
		}
	}
	iVar3 = func_28(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || bVar1) || UNK_0x80C74F9931DCF063(iVar3))
		{
			Global_4263954[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4263954[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4263954[iVar2 /*85*/].f_66.f_14 = UNK_0xF4CCC8CB6DE7F1AE();
			if (bVar0)
			{
				Global_4263954[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4263954[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4263954[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || bVar1)
			{
				func_25(Global_4263954[iVar2 /*85*/], iVar2);
			}
			Global_4264521 = 1;
			return true;
		}
	}
	return false;
}

void func_25(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	vector3 vVar0;
	bool bVar36;

	if (iParam85 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 285918879;
	vVar0.f_1 = UNK_0xD803B885F5E47A62();
	vVar0.f_2 = { Param0.f_66 };
	vVar0.f_2.f_33 = iParam85;
	bVar36 = func_27(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!bVar36 == 0)
	{
		func_26();
		UNK_0xFB061A86A7AC749F(1, &vVar0, 36, bVar36);
	}
}

void func_26()
{
	UNK_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

bool func_27(bool bParam0)
{
	var uVar0;

	if (bParam0 != -1)
	{
		UNK_0x5D96D8530B3D0904(&uVar0, bParam0);
	}
	return uVar0;
}

int func_28(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			case 1982688246:
				return 0;
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
			default:
				return 0;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
				return 1;
			case 1775876058:
				return 2;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_30()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_28(iVar0) != 2147483647)
		{
			if (func_10(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_31(int iParam0)
{
	if ((iParam0 >= 500 && iParam0 <= 599) || iParam0 == 408)
	{
		return true;
	}
	return false;
}

void func_32(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar6;

	if (iParam0 == -1)
	{
		return;
	}
	UNK_0x7A87D9FAFCB10ADC(func_28(iParam0));
	if (Global_4263954[iParam0 /*85*/].f_66.f_10 == 1)
	{
	}
	else if (Global_4263954[iParam0 /*85*/].f_66.f_10 == 4)
	{
		bVar0 = true;
	}
	else if (Global_4263954[iParam0 /*85*/].f_66.f_10 == 2)
	{
		bVar1 = true;
	}
	switch (Global_4263954[iParam0 /*85*/].f_66.f_4)
	{
		case 631654431:
			UNK_0x39CD4F3FBE26D45B(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case -180141073:
			UNK_0xAB3CCBD224F88BA8(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14), bVar1, bVar0);
			break;
		case 68030260:
			UNK_0xA30EA38144B3C88C(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], &(Global_4263954[iParam0 /*85*/].f_14), bVar1, bVar0);
			break;
		case -982394051:
			UNK_0x111D9D61331BF845(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case 454359403:
			UNK_0xB39DD8D66E65AB2A(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, Global_4263954[iParam0 /*85*/].f_2, bVar0);
			break;
		case -1586170317:
			UNK_0xF0BDBC17AD7AA68A(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), &(Global_4263954[iParam0 /*85*/].f_14.f_34));
			break;
		case 650665123:
			UNK_0x0C123A45910161F5(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case 1654961868:
			UNK_0x720F06601D6A3D91(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14), bVar1, bVar0);
			break;
		case 1182673174:
			UNK_0x9A5DFC6851A069B1(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case 563463121:
			UNK_0x42507720ABD2E3DB(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case 1940862352:
			UNK_0xA63FA0129D34AA99(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), bVar1, bVar0);
			break;
		case -1389227906:
			UNK_0xA63FA0129D34AA99(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), bVar1, bVar0);
			break;
		case -516219046:
			UNK_0x7CAD30CCC63BF1EB(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case -1398318418:
			UNK_0x045C859ACF224811(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_34));
			break;
		case 2043854386:
			UNK_0x7FA34B11E2FA5AE3(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case 277665518:
			UNK_0xA10182A479573A30(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case -1077156170:
			UNK_0x478F5BB792BA9EE0(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_34), -1);
			break;
		case -96593501:
			UNK_0x82910C1B770BE0D2(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case 742499889:
			UNK_0x516FAA390D131925(Global_4263954[iParam0 /*85*/].f_6, Global_4263954[iParam0 /*85*/].f_7, Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case 2050093329:
			UNK_0x2DDA9F27020A3199(Global_4263954[iParam0 /*85*/].f_6, Global_4263954[iParam0 /*85*/].f_7, Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case -1752488069:
			UNK_0x89426D1648CBE232(Global_4263954[iParam0 /*85*/].f_6, Global_4263954[iParam0 /*85*/].f_7, Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case 634375935:
			UNK_0x6C2E7021DF2545F7(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case -1027218631:
			UNK_0xFDC65A7AB2E4C168(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26));
			break;
		case -47546905:
			UNK_0x4D6E04834D849B43(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26));
			break;
		case 291576838:
			UNK_0xA4F4B39459FDE0FD(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], 14, true, bVar1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 0, 0, 0, bVar0);
			break;
		case 1612072658:
			UNK_0x007780E78643FBFA(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case -990286235:
			UNK_0x94E33A9479106442(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14), &(Global_4263954[iParam0 /*85*/].f_14.f_13), 1);
			break;
		case 1349151477:
			UNK_0x1A60C32FB1BCE2C8(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case -31156877:
		case -327918414:
		case 550898518:
		case 835976347:
			UNK_0x74342D5B553E1DFB(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case -1186079845:
			UNK_0xA2CF14803B9069FC(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case 1734805203:
			UNK_0xDACD1EB0C24D33AC(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case -1645229221:
			UNK_0x57050D488B359913(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case -585718395:
			UNK_0x0637A4F2922611B2(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case 763367758:
			UNK_0xE1D92C288D286562(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case 1850983186:
			UNK_0x57050D488B359913(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case -2129781826:
			UNK_0xC939BD4F5FD7E665(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], bVar1, bVar0);
			break;
		case 1941570214:
			UNK_0x65C09F8D6A9B310C(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], bVar1, bVar0);
			break;
		case 1869490922:
			UNK_0x776C9C3A04B65D9A(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case -336803850:
			UNK_0x776C9C3A04B65D9A(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case -1412692765:
			UNK_0x776C9C3A04B65D9A(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case 618167454:
			UNK_0x776C9C3A04B65D9A(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case 980623936:
			UNK_0x776C9C3A04B65D9A(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case -664597565:
		case -1100963799:
			UNK_0x70C6C7E43DEB92C4(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_40), &(Global_4263954[iParam0 /*85*/].f_14.f_44), bVar1);
			break;
		case 312105838:
			UNK_0x661D2111769889E2(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case -1922554349:
			UNK_0x9AC21D04D5646532(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_DESTROY_VEH", &uVar2);
			break;
		case -2043695058:
			UNK_0x9AC21D04D5646532(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_DISTRACT_COPS", &uVar2);
			break;
		case 1780666425:
			UNK_0x9AC21D04D5646532(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_PLANE_TAKEDOWN", &uVar2);
			break;
		case 1643659499:
			UNK_0x6C5C42DFA8BC6886(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case 1839532116:
			UNK_0x6BCFB59E6D5AD205(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		case 941287179:
			UNK_0x530219CFD5D2CF9D(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_3);
			break;
		case -352356931:
			UNK_0xDF9A19F19D39D17D(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/]);
			break;
		case 1948102096:
			UNK_0x8A174305CB36B1A5(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case -1834046564:
			UNK_0xD6F9EF2CBF17C39A(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case 393059668:
			UNK_0x959E7CBD93B47040(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26));
			break;
		case -57868256:
			UNK_0xCE7D7A810252082C(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_34), Global_4263954[iParam0 /*85*/].f_4);
			break;
		case -1127021384:
			UNK_0x86F09E9726155438(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case 1564537328:
			UNK_0xA63FA0129D34AA99(Global_4263954[iParam0 /*85*/].f_66.f_1, "RaceToPoint", false, false);
			break;
		case -1359375127:
			UNK_0xD189E5E11FBABB3C(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		case 283351220:
			UNK_0xA4F4B39459FDE0FD(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_5, true, bVar1, &(Global_4263954[iParam0 /*85*/].f_14.f_40), 0, 0, 0, bVar0);
			break;
		case -2085313189:
			switch (Global_4263954[iParam0 /*85*/].f_66.f_6)
			{
				case 1067618600:
					UNK_0xA4F4B39459FDE0FD(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_5, true, bVar1, &(Global_4263954[iParam0 /*85*/].f_14.f_40), 0, 0, 0, bVar0);
					break;
			}
			break;
		case 1704445500:
			UNK_0x7CC825DF8865404E(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, &(Global_4263954[iParam0 /*85*/].f_14.f_34), 0, 0);
			break;
		case 1620609399:
			UNK_0x9AC21D04D5646532(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
			break;
		case 1961641934:
			UNK_0x9AC21D04D5646532(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_KILL", &uVar2);
			break;
		case 210955503:
			UNK_0x9AC21D04D5646532(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_KILL_LIST", &uVar2);
			break;
		case -59668082:
			UNK_0x9AC21D04D5646532(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_CP_COLLECTION", &uVar2);
			break;
		case 1736933716:
			UNK_0x9AC21D04D5646532(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_TIME_TRIAL", &uVar2);
			break;
		case -1468524125:
			UNK_0x9AC21D04D5646532(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_CHALLENGES", &uVar2);
			break;
		case 111573502:
			UNK_0x9AC21D04D5646532(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_HELI", &uVar2);
			break;
		case 1525644423:
			UNK_0x9AC21D04D5646532(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_DEAD_DROP", &uVar2);
			break;
		case 968073639:
			UNK_0x9AC21D04D5646532(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_PENNED_IN", &uVar2);
			break;
		case 1577781788:
			UNK_0x9AC21D04D5646532(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_PASS_THE_PARCEL", &uVar2);
			break;
		case -934465332:
			UNK_0x9AC21D04D5646532(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
			break;
		case -1194253122:
			UNK_0x9AC21D04D5646532(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_HOT_PROPERTY", &uVar2);
			break;
		case -212607085:
			UNK_0x9AC21D04D5646532(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_KING_OF_THE_HILL", &uVar2);
			break;
		case -815546555:
			UNK_0x9AC21D04D5646532(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_HUNT_THE_BEAST", &uVar2);
			break;
		case 1048226110:
			UNK_0x9D6EB12A8E6A1B47(Global_4263954[iParam0 /*85*/].f_6, Global_4263954[iParam0 /*85*/].f_7, Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case 569170531:
			UNK_0x017FA3B50AA7BBCB(Global_4263954[iParam0 /*85*/].f_6, Global_4263954[iParam0 /*85*/].f_7, Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case -856006867:
			UNK_0x0C06D61FE6218C43(Global_4263954[iParam0 /*85*/].f_6, Global_4263954[iParam0 /*85*/].f_7, Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_8);
			break;
		case 208223429:
			UNK_0x114C796E8DF14FB1(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_9);
			break;
		case 848090538:
			UNK_0xBE795B7771B253F0(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case 665109499:
			UNK_0x249B09B41E203013(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], 0, 1);
			break;
		case -1330755006:
			UNK_0xC6DCFD38EB6C5D6A(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], 0, 1);
			break;
		case 1976384368:
			UNK_0x9F7862A93AF57E41(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], 0, 0);
			break;
		case 268924934:
			UNK_0x01823E47A902289C(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_1, Global_4263954[iParam0 /*85*/].f_9);
			break;
		case -293060240:
			UNK_0x3B7EF88C105FB69A(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_6, Global_4263954[iParam0 /*85*/].f_7);
			break;
		case 437291904:
			UNK_0xAEA694ECF02129DB(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4263954[iParam0 /*85*/].f_6, Global_4263954[iParam0 /*85*/].f_7, Global_4263954[iParam0 /*85*/].f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_10, Global_4263954[iParam0 /*85*/].f_11, Global_4263954[iParam0 /*85*/].f_12);
			break;
		case -135813048:
			UNK_0xC5BC97E47ECB22E9(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		case 463142405:
			UNK_0x3CF6953686BFBF61(Global_4263954[iParam0 /*85*/].f_6, Global_4263954[iParam0 /*85*/].f_7, Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_8);
			break;
		case 1550217370:
			UNK_0x434FE3A4DF341381(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case -101307780:
			UNK_0xDA90C799534A72C9(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case 599804707:
			UNK_0x9AC21D04D5646532(Global_4263954[iParam0 /*85*/].f_66.f_1, "GB_SALVAGE", &uVar2);
			break;
		case 1347433368:
			UNK_0x50ED0C960093D63C(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case 1052472386:
			UNK_0x3925A46749966B4D(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), &(Global_4263954[iParam0 /*85*/].f_14.f_34));
			break;
		case -2130199671:
			UNK_0x53F58BDC6DFB17E6(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), &(Global_4263954[iParam0 /*85*/].f_14.f_34));
			break;
		case -1227654538:
			UNK_0xE9C48D19F762914B(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), &(Global_4263954[iParam0 /*85*/].f_14.f_34));
			break;
		case -930104477:
			UNK_0x1940B733B2B94AE2(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4263954[iParam0 /*85*/]);
			break;
		case 1864522104:
			UNK_0xE37616809557C456(Global_4263954[iParam0 /*85*/].f_66.f_1, 0);
			break;
		case 215608230:
			UNK_0xE37616809557C456(Global_4263954[iParam0 /*85*/].f_66.f_1, 1);
			break;
		case -876012764:
			UNK_0x59DD36892C82F08B(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/]);
			break;
		case -722894325:
			UNK_0xC55B5E1A710EA4BE(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/]);
			break;
		case 1407278493:
			UNK_0x53D560AAF6BF3D4E(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case -1579394494:
		case -27443911:
			UNK_0x8A202B38FB66794C(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26));
			break;
		case 1179783540:
			UNK_0xDB82D526B3C3DB77(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26));
			break;
		case 923419301:
			UNK_0x183EBF404A6BDA94(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 0);
			break;
		case -308826175:
			UNK_0x183EBF404A6BDA94(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 1);
			break;
		case 603298940:
			UNK_0x183EBF404A6BDA94(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 2);
			break;
		case -12619854:
			UNK_0x183EBF404A6BDA94(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 3);
			break;
		case -311112675:
			UNK_0x183EBF404A6BDA94(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 4);
			break;
		case 870439158:
			UNK_0x183EBF404A6BDA94(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 5);
			break;
		case -974288740:
			UNK_0x183EBF404A6BDA94(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 6);
			break;
		case -4138654:
			UNK_0x183EBF404A6BDA94(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 7);
			break;
		case -1180954122:
			UNK_0x183EBF404A6BDA94(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 8);
			break;
		case -1918051016:
			UNK_0x183EBF404A6BDA94(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 9);
			break;
		case 844330594:
			UNK_0x183EBF404A6BDA94(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 10);
			break;
		case 1934825517:
			UNK_0xF6F512DCB0C25FE1(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 0);
			break;
		case 1852024236:
			UNK_0xF6F512DCB0C25FE1(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 1);
			break;
		case 2099238988:
			UNK_0xF6F512DCB0C25FE1(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 2);
			break;
		case 1952643559:
			break;
		case 2039302543:
			break;
		case -1172900789:
			UNK_0xDB13FA8DB5E86B00(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_9);
			break;
		case -1733398043:
			UNK_0x61F4393459646833(Global_4263954[iParam0 /*85*/].f_9, Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		case -1892760262:
			UNK_0xFEFC69A008980415(Global_4263954[iParam0 /*85*/].f_9, Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		case -2015399333:
			UNK_0x86CC628276254AC2(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case 402505853:
			if (func_33(UNK_0x117658E336116132(Global_4263954[iParam0 /*85*/]), 0, 0))
			{
				UNK_0x29F1378957C4338C(UNK_0x117658E336116132(Global_4263954[iParam0 /*85*/]), Global_4263954[iParam0 /*85*/].f_1, Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1);
			}
			break;
		case 1678112166:
			UNK_0xF919FABD5349A968(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], 0, 1);
			break;
		case -1143510182:
			UNK_0x77BA509759C279CE(Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		case -1574795641:
			UNK_0x81D2E6A33B59B618(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case -961034881:
			UNK_0xA106C1682C790290(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case 1135468152:
			UNK_0x546613D1293DBF87(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case 1265272476:
			UNK_0x5D421B9474B610E6(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_1, Global_4263954[iParam0 /*85*/].f_9);
			break;
		case -634726636:
			UNK_0x163F1C05711ACF77(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case 696556762:
			UNK_0x5ECAFBC8E34D6EFE(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case 837955913:
			UNK_0x90FA66AB36899698(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_66.f_15, 0, 1);
			break;
		case 403506509:
			UNK_0xD11BB1F07683633E(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case -883876414:
			UNK_0xC7D6090C222E61FA(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_66.f_15);
			break;
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
			UNK_0x6A2B8A4070C0594A(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_66.f_15);
			break;
		case -1532467144:
			UNK_0xF18D08B59CE9E875(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], 0, 1);
			break;
		case 1815541181:
			UNK_0xFCA4582C61D6101E(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		case -561012053:
			UNK_0xAF721C887699EBE1(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case -1342064661:
			UNK_0xD2305C2E3F5D8E9C(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		case 1240683675:
			UNK_0xCA06E60B6B41CD39(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case 1241904665:
			UNK_0xAABADC392B147D80(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_66.f_16, Global_4263954[iParam0 /*85*/].f_1);
			break;
		case -494565059:
			UNK_0xDEB9E7D80C47A76D(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case 827308208:
			UNK_0xFA7D82562F8AB32D(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case -1857685192:
			UNK_0x24CC5BC765961690(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case 1698417709:
			UNK_0xA8C1B24657FB32B3(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case -2017925037:
			UNK_0xB42761A25890EDEA(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
			UNK_0x2DF294D394338472(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/]);
			break;
		case -1693570755:
			UNK_0xFB43929E288533F1(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), Global_4263954[iParam0 /*85*/]);
			break;
		case 1868043300:
			UNK_0x0A920FD5AB632774(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case -697248883:
			UNK_0x0AE713861459290A(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case -1295545795:
			UNK_0x566FF9B925CB8BDA(Global_4263954[iParam0 /*85*/].f_9, Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		case 914079366:
			UNK_0xFF90259E892D5F8A(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1, 1, Global_4263954[iParam0 /*85*/].f_66.f_1, 0, false, 0, false, 0, false);
			break;
		case 395122350:
			UNK_0xFF90259E892D5F8A(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1, 0, false, 1, Global_4263954[iParam0 /*85*/].f_66.f_1, 0, false, 0, false);
			break;
		case -331981076:
			UNK_0xFF90259E892D5F8A(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1, 0, false, 0, false, 1, Global_4263954[iParam0 /*85*/].f_66.f_1, 0, false);
			break;
		case 1671535231:
			UNK_0xFF90259E892D5F8A(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1, 0, false, 0, false, 0, false, 1, Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case 1982688246:
			break;
	}
	switch (Global_4263954[iParam0 /*85*/].f_66.f_4)
	{
		case 1668610896:
			UNK_0xB0E03FD240577D6C(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, false, 1, Global_4263954[iParam0 /*85*/].f_66.f_1, 0, false);
			break;
		case -2032529561:
			UNK_0xB0E03FD240577D6C(Global_4263954[iParam0 /*85*/].f_66.f_1, 1, Global_4263954[iParam0 /*85*/].f_66.f_1, 0, false, 0, false);
			break;
		case -1224479447:
			UNK_0xB0E03FD240577D6C(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, false, 0, false, 1, Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
			UNK_0x2BAB01599473BCB8(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_66.f_1, 0, false);
			break;
		case 1220095570:
		case 2050320631:
		case 592672421:
			UNK_0x2BAB01599473BCB8(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, false, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		case 1775876058:
			UNK_0xC0DE18944A7A9044(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/]);
			break;
		case -842062976:
			UNK_0x5C9B198AF5A54FA6(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/]);
			break;
	}
	if (func_13())
	{
		if (bParam1)
		{
			UNK_0x1D18B90CF9028441(Global_4263954[iParam0 /*85*/].f_66, &uVar6);
		}
	}
	func_7(iParam0);
}

bool func_33(bool bParam0, bool bParam1, bool bParam2)
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

int func_34(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66 == iParam0)
		{
			*uParam1 = { Global_4263954[iVar0 /*85*/] };
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_35(int iParam0)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (Global_4268347[iParam0 /*12*/].f_1 == Global_4268347[iParam0 /*12*/].f_6)
	{
		if (Global_4268347[iParam0 /*12*/].f_1 != 1445302971 && Global_4268347[iParam0 /*12*/].f_1 != -1316591359)
		{
			return;
		}
	}
	iVar0 = 0;
	bVar2 = "Wardrobe";
	iVar0 = UNK_0x12AB0310C2281427(bVar2);
	iVar0 = (iVar0 || func_37());
	iVar0 = (iVar0 + Global_4266291);
	func_36(&uVar1);
	iVar0 = (iVar0 || uVar1);
	UNK_0x0674E58A79778E99(&iVar0, 28);
	UNK_0x0674E58A79778E99(&iVar0, 29);
	UNK_0x0674E58A79778E99(&iVar0, 26);
	iVar3 = (Global_4268347[iParam0 /*12*/].f_9 && iVar0);
	iVar4 = (Global_4268347[iParam0 /*12*/].f_8 && iVar0);
	iVar5 = Global_4268347[iParam0 /*12*/].f_7;
	if (iVar5 == 0)
	{
		iVar5 = -2085313189;
	}
	if (((Global_4268347[iParam0 /*12*/] != Global_4268347[iParam0 /*12*/].f_5 || Global_4268347[iParam0 /*12*/].f_1 != Global_4268347[iParam0 /*12*/].f_6) || Global_4268347[iParam0 /*12*/].f_2 != iVar5) || Global_4268347[iParam0 /*12*/].f_3 != (iVar4 + iVar3))
	{
		Global_108340 = 1;
	}
}

int func_36(var uParam0)
{
	*uParam0 = SYSTEM::SHIFT_LEFT(1, 2);
	return 5410420;
}

int func_37()
{
	return SYSTEM::SHIFT_LEFT(1, 25);
}

bool func_38()
{
	var uVar0;

	func_46(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_45())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_44())
	{
		return true;
	}
	if (func_43(159))
	{
		if (!func_42())
		{
			return true;
		}
	}
	if (func_43(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_39() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_39()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_39()
{
	switch (func_41())
	{
		case 0:
			return func_40();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_40()
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

int func_41()
{
	return Global_30768;
}

bool func_42()
{
	return Global_2450632.f_598;
}

bool func_43(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_44()
{
	return Global_2460680;
}

bool func_45()
{
	return Global_2450632.f_593;
}

void func_46(var uParam0)
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
					func_47(iVar0);
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

void func_47(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_33(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_48(bVar4, &bVar5))
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

bool func_48(bool bParam0, var uParam1)
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

void func_49()
{
	SYSTEM::WAIT(0);
}

void func_50()
{
	func_51();
}

void func_51()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_52(struct<34> Param0)
{
	if (Global_262145.f_23568)
	{
		func_50();
	}
	Local_22.f_66 = { Param0 };
	Local_22 = { Param0.f_19 };
	Local_22.f_14 = { Global_4263954[Param0.f_33 /*85*/].f_14 };
	iLocal_21 = Param0.f_33;
	if (Param0.f_33 < 0)
	{
		func_50();
	}
	if (!func_53(Param0, Param0.f_33))
	{
		func_7(Param0.f_33);
		func_50();
	}
	if (Local_22.f_66.f_2 != 0)
	{
		Local_22.f_66.f_2 = 1;
	}
}

bool func_53(struct<18> Param0, var uParam18, int iParam19)
{
	if (Global_4263954[iParam19 /*85*/].f_66.f_1 != Param0.f_1)
	{
		return false;
	}
	if (Global_4263954[iParam19 /*85*/].f_66.f_3 != Param0.f_3)
	{
		return false;
	}
	if (Global_4263954[iParam19 /*85*/].f_66.f_4 != Param0.f_4)
	{
		return false;
	}
	if (Global_4263954[iParam19 /*85*/].f_66.f_5 != Param0.f_5)
	{
		return false;
	}
	if (Global_4263954[iParam19 /*85*/].f_66.f_6 != Param0.f_6)
	{
		return false;
	}
	if (Global_4263954[iParam19 /*85*/].f_66.f_7 != Param0.f_7)
	{
		return false;
	}
	if (Global_4263954[iParam19 /*85*/].f_66.f_14 != Param0.f_14)
	{
		return false;
	}
	if (Global_4263954[iParam19 /*85*/].f_66.f_17 != Param0.f_17)
	{
		return false;
	}
	return true;
}

