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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_56 = 0;
	bool bLocal_57 = false;
	bool bLocal_58 = false;
	bool bLocal_59 = false;
	bool bLocal_60 = false;
	bool bLocal_61 = false;
	var uLocal_62 = 0;
	bool bLocal_63 = false;
	int iLocal_64 = 0;
	vector3 vLocal_65 = { 0f, 0f, 0f };
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	bLocal_63 = 277.7314f;
	vLocal_65 = { -196.045f, -580.13f, 135.0004f };
	UNK_0x53491B90E4FD0E56(800);
	func_20();
	while (true)
	{
		UNK_0x8A720CAB8C49754F();
		func_19();
		if (func_7() || uLocal_62)
		{
			func_3();
		}
		if (!bLocal_58)
		{
			if (!bLocal_57 && UNK_0x757EF87A33649210())
			{
				UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vLocal_65, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), bLocal_63);
				UNK_0x9E632F16E887F781(vLocal_65, 2500f, 0);
				UNK_0x2FB9A57162E54BAB(0f);
				bLocal_57 = true;
			}
			else if (UNK_0xEB880D98B5988D0C())
			{
				if (!bLocal_61)
				{
					bLocal_61 = func_2();
				}
				else if (!bLocal_59)
				{
					bLocal_59 = func_1();
				}
				else
				{
					UNK_0x82E51BCA72537B6C(800);
					bLocal_58 = true;
				}
			}
		}
	}
}

int func_1()
{
	if (!UNK_0xC30A04502B3FE8A8(iLocal_64, "garage_decor_01"))
	{
		UNK_0x8A12C90BAA1275CC(iLocal_64, "garage_decor_01");
	}
	else
	{
		UNK_0xF1ABF0D4BF2D0A54(iLocal_64);
		return 1;
	}
	return 0;
}

int func_2()
{
	iLocal_64 = UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9());
	if (UNK_0x31609A585163CBAC(iLocal_64))
	{
		if (!bLocal_60)
		{
			UNK_0x0007C2367F4F23F3(iLocal_64);
			bLocal_60 = true;
		}
		else if (UNK_0xBD307E66C0669BFC(iLocal_64))
		{
			UNK_0x25BB71BA267FE042(iLocal_64);
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_56)
	{
		func_5(iVar0);
		iVar0++;
	}
	func_4();
}

void func_4()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_5(int iParam0)
{
	func_6(&(uLocal_35[iParam0]));
	UNK_0x28E5F00F131890E3((UNK_0x11225ACFD0C1477E(0, 0) - 1));
}

void func_6(var uParam0)
{
	bool bVar0;

	if (UNK_0xE9F78D191AD5EDBA(*uParam0))
	{
		if (!UNK_0x526BC32A660C89E6(*uParam0))
		{
		}
	}
	if (UNK_0xE5DBF9B6126856CA(*uParam0))
	{
		bVar0 = UNK_0xA5FBBC2F619A4DE2(*uParam0);
		UNK_0x2ABAFAE29D459CE5(&bVar0);
	}
}

int func_7()
{
	var uVar0;

	func_15(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_14())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_13())
	{
		return 1;
	}
	if (func_12(159))
	{
		if (!func_11())
		{
			return 1;
		}
	}
	if (func_12(157))
	{
		return 1;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_8() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_8()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_8()
{
	switch (func_10())
	{
		case 0:
			return func_9();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_9()
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

int func_10()
{
	return Global_30768;
}

bool func_11()
{
	return Global_2450632.f_598;
}

bool func_12(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_13()
{
	return Global_2460680;
}

bool func_14()
{
	return Global_2450632.f_593;
}

void func_15(var uParam0)
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
					func_16(iVar0);
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

void func_16(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_18(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_17(bVar4, &bVar5))
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

bool func_17(bool bParam0, bool bParam1)
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
					*bParam1 = 1;
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

bool func_18(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
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
				if (!Global_2439138.f_3[bVar0])
				{
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

void func_19()
{
	SYSTEM::WAIT(0);
}

void func_20()
{
	UNK_0x37AD2AB54480FA6A(32, 0, -1);
	func_22(0, -1, 0);
	UNK_0x9752E7BAEABA939E(&uLocal_35, 21);
	if (!func_21())
	{
		func_3();
	}
	UNK_0x256D93AFAE851A7A(0);
	if (!UNK_0xBCFF5481C5F58C19("imp_dt1_02_cargarage_a"))
	{
		UNK_0x2404539258C5376B("imp_dt1_02_cargarage_a");
	}
}

bool func_21()
{
	int iVar0;

	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!UNK_0x8CD06866876216F2())
		{
			return false;
		}
		if (UNK_0x67CCE3DFA3467CAD())
		{
			return true;
		}
		if (func_14())
		{
			return false;
		}
		if (func_12(157))
		{
			return false;
		}
		if (iVar0 >= 3600)
		{
			return false;
		}
		SYSTEM::WAIT(0);
	}
	return false;
}

int func_22(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_4();
			}
			else
			{
				return 0;
			}
		}
		if (!func_23())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_14())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_12(157))
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!UNK_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_4();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = UNK_0xDA9EEE4F835948F9();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_4();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!UNK_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_4();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_23()
{
	return Global_1312854;
}

