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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	struct<14> Local_47[30];
	var uLocal_468 = 0;
	var uLocal_469 = -1;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = -1;
	var uLocal_474 = -1;
	var uLocal_475 = -1;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	bool bLocal_484 = false;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (func_78())
	{
		while (!func_64())
		{
			func_11();
			SYSTEM::WAIT(0);
		}
	}
	func_1();
}

void func_1()
{
	UNK_0x0674E58A79778E99(&Global_1573978, true);
	func_3(&Local_47);
	func_2();
}

void func_2()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_3(int iParam0)
{
	func_9(&(iParam0->f_421.f_5));
	func_4(iParam0, 1);
}

void func_4(int iParam0, bool bParam1)
{
	if (func_5(iParam0))
	{
		UNK_0xA37A90C62806D848(1);
	}
	if (bParam1)
	{
		func_9(&(iParam0->f_421.f_5));
	}
}

bool func_5(int iParam0)
{
	var uVar0;
	var uVar4;

	func_7(iParam0, iParam0->f_421.f_2, &uVar0);
	func_7(iParam0, iParam0->f_421.f_2, &uVar4);
	return (func_6(&uVar0) || func_6(&uVar4));
}

int func_6(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_7(int iParam0, int iParam1, char* sParam2)
{
	if (func_8(&(iParam0->f_421), 7))
	{
		Stack.Push(iParam0[iParam1 /*14*/]);
		Stack.Push(iParam1);
		Stack.Push(sParam2);
		Call_Loc(iParam0->f_421.f_14);
	}
	else
	{
		StringCopy(sParam2, "MPJAC_EXIT", 16);
	}
}

bool func_8(var uParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, bParam1);
}

void func_9(var uParam0)
{
	int iVar0;

	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_10(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_10(int iParam0)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_11()
{
	func_19(&Local_47);
	if (Global_1590380 == UNK_0xD803B885F5E47A62() && !UNK_0xEAE0D21A50E6C7F4(Global_1692770[UNK_0x6E61BE9E61434AC1() /*39*/].f_27, 5))
	{
		if (func_18(&Local_47, 1, 1))
		{
			func_17(&Local_47);
		}
		if (func_18(&Local_47, 0, 0))
		{
			UNK_0x5D96D8530B3D0904(&Global_1573978, true);
			if ((((((bLocal_484 == 0 && !UNK_0xEAE0D21A50E6C7F4(Global_1692770[UNK_0x6E61BE9E61434AC1() /*39*/].f_27, 3)) && !func_16()) && !UNK_0x798A3F1296751F46()) && !func_15(0)) && !func_14()) && UNK_0xD245978525608929(0, 225))
			{
				func_12(&Local_47);
			}
		}
		else
		{
			UNK_0x0674E58A79778E99(&Global_1573978, true);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_1573978, true);
	}
	bLocal_484 = false;
	if (UNK_0xEAE0D21A50E6C7F4(Global_1692770[UNK_0x6E61BE9E61434AC1() /*39*/].f_27, 3))
	{
		UNK_0x5D96D8530B3D0904(&bLocal_484, false);
	}
	if (func_16())
	{
		UNK_0x5D96D8530B3D0904(&bLocal_484, true);
	}
	if (UNK_0x798A3F1296751F46())
	{
		UNK_0x5D96D8530B3D0904(&bLocal_484, 2);
	}
	if (func_14())
	{
		UNK_0x5D96D8530B3D0904(&bLocal_484, 4);
	}
	if (func_15(0))
	{
		UNK_0x5D96D8530B3D0904(&bLocal_484, 3);
	}
}

void func_12(int iParam0)
{
	func_13(&(iParam0->f_421), 10);
}

void func_13(bool bParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(bParam0, bParam1);
}

bool func_14()
{
	return Global_73825;
}

bool func_15(int iParam0)
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

bool func_16()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return false;
	}
	return true;
}

void func_17(int iParam0)
{
	func_13(&(iParam0->f_421), 9);
}

bool func_18(int iParam0, bool bParam1, bool bParam2)
{
	return ((iParam0->f_421.f_4 > 2 && (bParam1 || func_8(&(iParam0->f_421), 11))) && (bParam2 || iParam0->f_421.f_4 < 8));
}

void func_19(int iParam0)
{
	var uVar0;
	var uVar16;
	struct<14> Var20;
	vector3 vVar34;
	vector3 vVar37;
	bool bVar40;
	int iVar41;
	int iVar42;
	int iVar43;

	func_62(iParam0);
	func_60(iParam0);
	Var20.f_1.f_6 = 1061158912;
	Var20 = { *(iParam0[iParam0->f_421.f_2 /*14*/]) };
	switch (iParam0->f_421.f_4)
	{
		case 0:
			func_59(&(iParam0->f_421), 11);
			func_58(iParam0, 1);
			break;
		case 1:
			if (func_57(iParam0))
			{
				iParam0->f_421.f_6 = UNK_0x1C0640BA9A7327B3();
				func_58(iParam0, 2);
			}
			break;
		case 2:
			if (func_56(UNK_0x16F2683693E537C9(), iParam0[iParam0->f_421.f_2 /*14*/]))
			{
				if ((func_55(iParam0) || func_53(iParam0)) || !func_52(iParam0))
				{
					func_4(iParam0, 1);
					func_58(iParam0, 1);
				}
				else if (iParam0->f_421.f_5 == -1)
				{
					if ((UNK_0x1C0640BA9A7327B3() - iParam0->f_421.f_6) > 150)
					{
						func_51(&(iParam0->f_421.f_5), 4, "MPJAC_SIT", 0, 0, 0, 0);
					}
				}
				else if (UNK_0xBFC0798A6E3417F9(0, 51))
				{
					func_9(&(iParam0->f_421.f_5));
					func_48(iParam0);
					func_58(iParam0, 3);
				}
			}
			else
			{
				func_4(iParam0, 1);
				func_58(iParam0, 1);
			}
			break;
		case 3:
			func_47(iParam0, &uVar0);
			UNK_0x3F423BF5B8125A50(&uVar0);
			if (UNK_0xB4AE0788C1587752(&uVar0))
			{
				func_58(iParam0, 4);
			}
			break;
		case 4:
			func_47(iParam0, &uVar0);
			func_46(iParam0, &uVar16);
			if (Var20 != 3)
			{
				vVar34 = { UNK_0x1BB04F10296A1C5E(&uVar0, &uVar16, func_45(iParam0), func_44(iParam0), false, 2) };
				vVar37 = { UNK_0xEEB20D14BD38615E(&uVar0, &uVar16, func_45(iParam0), func_44(iParam0), false, 2) };
				bVar40 = vVar37.z;
				UNK_0x80AA372E04ED318D(UNK_0x16F2683693E537C9(), vVar34, 1f, 500, bVar40, 0.15f);
			}
			func_58(iParam0, 5);
			break;
		case 5:
			func_33(iParam0);
			func_47(iParam0, &uVar0);
			func_46(iParam0, &uVar16);
			if (Var20 == 3)
			{
				iVar41 = UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), 1920390111);
			}
			else
			{
				iVar41 = UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), 2106541073);
			}
			if (iVar41 != 1 && iVar41 != 0)
			{
				iParam0->f_421.f_1 = UNK_0xF66E5A439A080021(func_45(iParam0), func_44(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
				UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), iParam0->f_421.f_1, &uVar0, &uVar16, 2f, -1000f, 13, 16, 1.5f, 0);
				UNK_0x914E6894744915F8(iParam0->f_421.f_1);
				iParam0->f_421.f_8.f_4 = UNK_0x1C0640BA9A7327B3();
				func_13(&(iParam0->f_421), 8);
				func_58(iParam0, 6);
			}
			break;
		case 6:
			if (func_8(&(iParam0->f_421), 10))
			{
				func_59(&(iParam0->f_421), 10);
				func_32(iParam0);
			}
			func_33(iParam0);
			func_26(iParam0);
			iVar42 = UNK_0xF958843510932FF6(iParam0->f_421.f_1);
			if (UNK_0x69DF961355195C3C(iVar42))
			{
				if (UNK_0xA45992A6CE82FB43(iVar42) >= 1f)
				{
					func_20(iParam0, 0);
					func_47(iParam0, &uVar0);
					func_46(iParam0, &uVar16);
					iParam0->f_421.f_1 = UNK_0xF66E5A439A080021(func_45(iParam0), func_44(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
					UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), iParam0->f_421.f_1, &uVar0, &uVar16, 4f, -1.5f, 13, 16, 1000f, 0);
					UNK_0x914E6894744915F8(iParam0->f_421.f_1);
					func_13(&(iParam0->f_421), 8);
					func_13(&(iParam0->f_421), 11);
				}
				else
				{
					func_59(&(iParam0->f_421), 8);
				}
			}
			else if (!func_8(&(iParam0->f_421), 8))
			{
				func_58(iParam0, 8);
			}
			break;
		case 7:
			UNK_0x45934E8E3471AAA9(iParam0->f_421.f_1);
			func_58(iParam0, 8);
			break;
		case 8:
			iVar43 = UNK_0xF958843510932FF6(iParam0->f_421.f_1);
			if (UNK_0x69DF961355195C3C(iVar43))
			{
				if ((UNK_0xA45992A6CE82FB43(iVar43) >= 1f || UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), 364629851)) || UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), 2116425869))
				{
					UNK_0x45934E8E3471AAA9(iParam0->f_421.f_1);
					func_4(iParam0, 1);
					func_58(iParam0, 0);
				}
			}
			else
			{
				func_4(iParam0, 1);
				func_58(iParam0, 0);
			}
			break;
	}
}

void func_20(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (bParam1)
	{
		iVar1 = func_21(iParam0);
		if (iVar1 != iParam0->f_421.f_8.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + iParam0->f_421.f_8.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = iParam0->f_421.f_8.f_2;
		}
		iVar1 = iParam0->f_421.f_8.f_1;
	}
	else if (iParam0->f_421.f_8.f_2 == 5)
	{
		iVar1 = iParam0->f_421.f_8.f_1;
		bVar2 = 3;
		iVar0 = UNK_0x09AC81E49EA267F7(false, bVar2);
		if (iVar0 == iParam0->f_421.f_8.f_3)
		{
			iVar0 = (iVar0 + 1 % bVar2);
		}
	}
	else
	{
		if (iParam0->f_421.f_8.f_2 > 6)
		{
			iVar1 = func_21(iParam0);
			iParam0->f_421.f_8.f_4 = UNK_0x1C0640BA9A7327B3();
		}
		else
		{
			iVar1 = iParam0->f_421.f_8.f_1;
		}
		if ((UNK_0x1C0640BA9A7327B3() - iParam0->f_421.f_8.f_4) >= 90000)
		{
			iVar1 = func_21(iParam0);
			if (iVar1 != iParam0->f_421.f_8.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + iParam0->f_421.f_8.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = iParam0->f_421.f_8.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	iParam0->f_421.f_8.f_3 = iParam0->f_421.f_8.f_2;
	iParam0->f_421.f_8.f_2 = iVar0;
	iParam0->f_421.f_8.f_1 = iVar1;
}

int func_21(int iParam0)
{
	if (iParam0->f_421.f_8 == 2)
	{
		return iParam0->f_421.f_8.f_1;
	}
	return (iParam0->f_421.f_8.f_1 + 1 % func_22(iParam0->f_421.f_8));
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return func_23(func_24(), 4, 5);
		case 2:
			return 5;
		default:
			break;
	}
	return 0;
}

int func_23(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_24()
{
	return func_25(UNK_0xD803B885F5E47A62());
}

int func_25(bool bParam0)
{
	if (UNK_0x134B62B726CEC8E6(UNK_0x9539D44F3E4492F6(bParam0)) == joaat("MP_F_FREEMODE_01"))
	{
		return 1;
	}
	return 0;
}

void func_26(int iParam0)
{
	vector3 vVar0;
	float fVar3;

	if (iParam0->f_421.f_4 == 6)
	{
		vVar0 = { UNK_0x4F3973434662D795(0, 218), UNK_0x4F3973434662D795(0, 219), 0f };
		fVar3 = SYSTEM::VMAG(vVar0);
		if ((iParam0->f_421.f_4 == 6 && !UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), -1322051853)) && !func_8(&(iParam0->f_421), 12))
		{
			if (fVar3 >= 0.35f)
			{
				func_31(iParam0);
			}
		}
		if (UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), -1322051853))
		{
			func_4(iParam0, 1);
		}
		else if (func_30(iParam0))
		{
			func_4(iParam0, 1);
		}
		else
		{
			UNK_0xA2E3EDD0E119882F(2);
			UNK_0x38C3A68D7861DCFD(0, 24, 1);
			UNK_0x38C3A68D7861DCFD(0, 257, 1);
			UNK_0x38C3A68D7861DCFD(0, 142, 1);
			UNK_0x38C3A68D7861DCFD(0, 141, 1);
			UNK_0x38C3A68D7861DCFD(0, 140, 1);
			UNK_0x38C3A68D7861DCFD(0, 263, 1);
			UNK_0x38C3A68D7861DCFD(0, 264, 1);
			UNK_0x38C3A68D7861DCFD(0, 143, 1);
			UNK_0x38C3A68D7861DCFD(2, 200, 1);
			if (((((!UNK_0x798A3F1296751F46() && !func_8(&(iParam0->f_421), 0)) && !func_8(&(iParam0->f_421), 4)) && !func_29()) && !func_27(1)) && iParam0->f_421.f_8.f_2 != 3)
			{
				if (iParam0->f_421.f_5 == -1)
				{
					func_51(&(iParam0->f_421.f_5), 4, "MPJAC_EXIT", 0, 0, 0, 0);
				}
				if (iParam0->f_421.f_4 == 6)
				{
					if (UNK_0xBFC0798A6E3417F9(0, 51))
					{
						func_32(iParam0);
					}
				}
			}
		}
	}
	func_59(&(iParam0->f_421), 9);
}

bool func_27(bool bParam0)
{
	if (UNK_0xD6C3CB7DCE462DB4())
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (func_28(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x06F8112AA79C53D9(0, 25) || UNK_0x06F8112AA79C53D9(0, 68))
				{
					return false;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return false;
	}
	if (UNK_0x06F8112AA79C53D9(0, 19) || (!bParam0 && UNK_0x7FEE810EE9E768EB(0, 19)))
	{
		return true;
	}
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (((UNK_0x06F8112AA79C53D9(0, 166) || UNK_0x06F8112AA79C53D9(0, 167)) || UNK_0x06F8112AA79C53D9(0, 168)) || UNK_0x06F8112AA79C53D9(0, 169))
		{
			return true;
		}
		if (!bParam0)
		{
			if (((UNK_0x7FEE810EE9E768EB(0, 166) || UNK_0x7FEE810EE9E768EB(0, 167)) || UNK_0x7FEE810EE9E768EB(0, 168)) || UNK_0x7FEE810EE9E768EB(0, 169))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_28(bool bParam0)
{
	int iVar0;

	if (UNK_0x18AF0C72ABD5543B())
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			UNK_0xCAE036C45E7FC720(bParam0, &iVar0, 1);
			if (((iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER")) || iVar0 == joaat("WEAPON_MARKSMANRIFLE")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_29()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return false;
	}
	return true;
}

bool func_30(int iParam0)
{
	return func_8(&(iParam0->f_421), 9);
}

void func_31(int iParam0)
{
	var uVar0;
	var uVar16;

	if (((func_21(iParam0) != iParam0->f_421.f_8.f_1 && iParam0->f_421.f_8.f_2 < 6) && iParam0->f_421.f_8.f_2 != 3) && iParam0->f_421.f_8.f_2 != 4)
	{
		func_20(iParam0, 1);
		func_47(iParam0, &uVar0);
		func_46(iParam0, &uVar16);
		iParam0->f_421.f_1 = UNK_0xF66E5A439A080021(func_45(iParam0), func_44(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
		UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), iParam0->f_421.f_1, &uVar0, &uVar16, 4f, -1.5f, 13, 16, 1000f, 0);
		UNK_0x914E6894744915F8(iParam0->f_421.f_1);
		func_13(&(iParam0->f_421), 8);
		UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
	}
}

void func_32(int iParam0)
{
	var uVar0;

	iParam0->f_421.f_1 = UNK_0xF66E5A439A080021(func_45(iParam0), func_44(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
	func_47(iParam0, &uVar0);
	UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), iParam0->f_421.f_1, &uVar0, "exit", 4f, -4f, 13, 16, 1000f, 0);
	UNK_0x914E6894744915F8(iParam0->f_421.f_1);
	func_9(&(iParam0->f_421.f_5));
	func_58(iParam0, 8);
}

void func_33(int iParam0)
{
	int iVar0;

	switch (iParam0->f_421.f_4)
	{
		case 4:
		case 8:
			func_38(1);
		case 6:
			UNK_0x2103752056F874E1();
			UNK_0x770C703CAD045196(0);
			UNK_0x69FCF499804D6AE7(0);
			UNK_0x3584F71E5CA29322(19);
			UNK_0x3584F71E5CA29322(2);
			UNK_0x5A89B88F77C0FC3B();
			func_37();
			if (UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar0, 1) && iVar0 != joaat("WEAPON_UNARMED"))
			{
				UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
			}
			UNK_0x38C3A68D7861DCFD(0, 37, 1);
			func_35(1);
			func_34();
			break;
	}
}

void func_34()
{
	Global_22211.f_6 = 1;
}

void func_35(bool bParam0)
{
	if (bParam0)
	{
		if (func_36())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

bool func_36()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

void func_37()
{
	UNK_0x5D96D8530B3D0904(&Global_7357, 4);
}

void func_38(int iParam0)
{
	if (func_43())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_15(0))
		{
			func_39(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_39(int iParam0)
{
	if (func_43())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_42())
		{
			func_41(1, 1);
		}
		else
		{
			func_41(0, 0);
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
	if (!func_40())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_40()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_41(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
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

bool func_42()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_43()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

Vector3 func_44(int iParam0)
{
	vector3 vVar0;

	vVar0 = { (iParam0[iParam0->f_421.f_2 /*14*/])->f_8.f_3 };
	if (func_24() && iParam0->f_421.f_8 == 0)
	{
		vVar0.f_2 = (vVar0.z - 4f);
	}
	return vVar0;
}

Vector3 func_45(int iParam0)
{
	return (iParam0[iParam0->f_421.f_2 /*14*/])->f_8;
}

void func_46(int iParam0, char* sParam1)
{
	switch (iParam0->f_421.f_8.f_2)
	{
		case 0:
			StringCopy(sParam1, "IDLE_A", 16);
			break;
		case 1:
			StringCopy(sParam1, "IDLE_B", 16);
			break;
		case 2:
			StringCopy(sParam1, "IDLE_C", 16);
			break;
		case 3:
			StringCopy(sParam1, "ENTER", 16);
			break;
		case 5:
			StringCopy(sParam1, "BASE", 16);
			break;
		case 4:
			StringCopy(sParam1, "EXIT", 16);
			break;
		case 7:
			StringCopy(sParam1, "A_TO_B", 16);
			break;
		case 8:
			StringCopy(sParam1, "B_TO_C", 16);
			break;
		case 9:
			StringCopy(sParam1, "C_TO_D", 16);
			break;
		case 10:
			StringCopy(sParam1, "D_TO_E", 16);
			break;
		case 12:
			StringCopy(sParam1, "B_TO_E", 16);
			break;
		case 13:
			StringCopy(sParam1, "C_TO_A", 16);
			break;
		case 14:
			StringCopy(sParam1, "D_TO_A", 16);
			break;
		case 15:
			StringCopy(sParam1, "E_TO_A", 16);
			break;
		default:
			StringCopy(sParam1, "invalid_clip", 16);
			break;
	}
}

void func_47(int iParam0, char* sParam1)
{
	switch (iParam0->f_421.f_8)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@CLUBHOUSE@SEATING", 64);
			break;
		case 1:
			StringCopy(sParam1, "ANIM@AMB@OFFICE@SEATING", 64);
			break;
		case 2:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
	}
	if (func_24())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (iParam0->f_421.f_8)
	{
		case 1:
		case 0:
			switch (iParam0->f_421.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@BASE@", 64);
					break;
				case 1:
					StringConCat(sParam1, "@VAR_B@BASE@", 64);
					break;
				case 2:
					StringConCat(sParam1, "@VAR_C@BASE@", 64);
					break;
				case 3:
					StringConCat(sParam1, "@VAR_D@BASE@", 64);
					break;
				case 4:
					StringConCat(sParam1, "@VAR_E@BASE@", 64);
					break;
			}
			break;
		case 2:
			switch (iParam0->f_421.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				case 1:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				case 2:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				case 3:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				case 4:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
	}
}

void func_48(int iParam0)
{
	iParam0->f_421.f_8 = func_50((*iParam0)[iParam0->f_421.f_2 /*14*/]);
	iParam0->f_421.f_8.f_1 = func_49(iParam0);
	iParam0->f_421.f_8.f_2 = 3;
	iParam0->f_421.f_8.f_3 = 3;
}

int func_49(int iParam0)
{
	int iVar0;

	switch (iParam0->f_421.f_8)
	{
		case 2:
			iVar0 = UNK_0x09AC81E49EA267F7(false, 4);
			if (iVar0 >= 1)
			{
				iVar0++;
			}
			break;
		default:
			iVar0 = UNK_0x09AC81E49EA267F7(false, func_22(iParam0->f_421.f_8));
			break;
	}
	return iVar0;
}

int func_50(int iParam0)
{
	if (iParam0 >= 11)
	{
		return 0;
	}
	else if (iParam0 >= 9)
	{
		return 0;
	}
	else if (iParam0 >= 7)
	{
		return 0;
	}
	else if (iParam0 >= 4)
	{
		return 0;
	}
	else if (iParam0 > 1)
	{
		return 2;
	}
	return 0;
}

void func_51(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;

	if (UNK_0x8A22C4C08282BF26(joaat("CONTEXT_CONTROLLER")) < 1)
	{
	}
	if (UNK_0x991B1F0980C62628())
	{
		if (!*uParam0 == -1)
		{
			func_9(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/] = 1;
			Global_42151[iVar0 /*32*/].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0 /*32*/].f_4 = 0;
			Global_42151[iVar0 /*32*/].f_29 = 0;
			Global_42151[iVar0 /*32*/].f_5 = 0;
			Global_42151[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42151[iVar0 /*32*/].f_6 = iParam3;
			Global_42151[iVar0 /*32*/].f_31 = UNK_0x0D0A574C76D769AC();
			Global_42151[iVar0 /*32*/].f_7 = 0;
			Global_42151[iVar0 /*32*/].f_3 = iParam5;
			if (!UNK_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_42151[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42151[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42151[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0 /*32*/].f_12 = 0;
				Global_42151[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_42151[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_52(int iParam0)
{
	Stack.Push(!func_8(&(iParam0->f_421), 5));
	Stack.Push(iParam0[iParam0->f_421.f_2 /*14*/]);
	Stack.Push(iParam0->f_421.f_2);
	Call_Loc(iParam0->f_421.f_13);
	return (StackVal || StackVal);
}

bool func_53(int iParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	while (bVar0 < UNK_0x54EABC0DD106045B())
	{
		if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bVar0)))
		{
			bVar1 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(bVar0));
			if ((bVar1 != UNK_0xD803B885F5E47A62() && func_54(bVar1, 1, 1)) && func_56(UNK_0x9539D44F3E4492F6(bVar1), iParam0[iParam0->f_421.f_2 /*14*/]))
			{
				return true;
			}
		}
		bVar0++;
	}
	return false;
}

bool func_54(bool bParam0, bool bParam1, bool bParam2)
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

bool func_55(int iParam0)
{
	return iParam0->f_421 & 31 > 0;
}

bool func_56(bool bParam0, var uParam1)
{
	return UNK_0x3D1053F9EB43B7AD(bParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, 0, true, 0);
}

bool func_57(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_56(UNK_0x16F2683693E537C9(), iParam0[iParam0->f_421.f_2 /*14*/]))
		{
			return true;
		}
		else
		{
			iParam0->f_421.f_2 = (iParam0->f_421.f_2 + 1 % 30);
		}
		iVar0++;
	}
	return false;
}

void func_58(int iParam0, int iParam1)
{
	iParam0->f_421.f_4 = iParam1;
}

void func_59(bool bParam0, bool bParam1)
{
	UNK_0x0674E58A79778E99(bParam0, bParam1);
}

void func_60(int iParam0)
{
	if (iParam0->f_421.f_4 == 6)
	{
	}
	else if (iParam0->f_421.f_4 > 4)
	{
		UNK_0x797A01B0F40196A9(UNK_0x16F2683693E537C9());
		UNK_0x7EB60BF335619074(UNK_0x16F2683693E537C9(), func_61(iParam0));
		iParam0->f_421.f_7 = UNK_0xF4CCC8CB6DE7F1AE();
	}
	else if (iParam0->f_421.f_4 > 1)
	{
		UNK_0x7EB60BF335619074(UNK_0x16F2683693E537C9(), func_61(iParam0));
		iParam0->f_421.f_7 = UNK_0xF4CCC8CB6DE7F1AE();
	}
	else if ((UNK_0xF4CCC8CB6DE7F1AE() - iParam0->f_421.f_7) < 5)
	{
		UNK_0x7EB60BF335619074(UNK_0x16F2683693E537C9(), func_61(iParam0));
	}
}

float func_61(int iParam0)
{
	switch ((*iParam0)[iParam0->f_421.f_2 /*14*/])
	{
		case 12:
		case 10:
		case 6:
			return 0.24f;
		case 2:
			return 0.16f;
		case 3:
			return 0.18f;
		default:
			break;
	}
	return 0.13f;
}

void func_62(int iParam0)
{
	func_63(&(iParam0->f_421), 4, func_14());
	func_63(&(iParam0->f_421), 1, UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0));
	func_63(&(iParam0->f_421), 3, UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1));
	func_63(&(iParam0->f_421), 0, func_15(0));
	func_63(&(iParam0->f_421), 2, UNK_0x093C93CCF7F0ECDB(UNK_0x16F2683693E537C9()));
}

void func_63(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = iParam1;
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(bParam0, bVar0);
	}
	else
	{
		UNK_0x0674E58A79778E99(bParam0, bVar0);
	}
}

bool func_64()
{
	if (!func_77(UNK_0x16F2683693E537C9()))
	{
		return true;
	}
	if (func_66())
	{
		return true;
	}
	if (Global_1590380 == func_65())
	{
		return true;
	}
	return false;
}

int func_65()
{
	return -1;
}

bool func_66()
{
	var uVar0;

	func_74(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_73())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_72())
	{
		return true;
	}
	if (func_71(159))
	{
		if (!func_70())
		{
			return true;
		}
	}
	if (func_71(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_67() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_67()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_67()
{
	switch (func_69())
	{
		case 0:
			return func_68();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_68()
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

int func_69()
{
	return Global_30768;
}

bool func_70()
{
	return Global_2450632.f_598;
}

bool func_71(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_72()
{
	return Global_2460680;
}

bool func_73()
{
	return Global_2450632.f_593;
}

void func_74(var uParam0)
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
					func_75(iVar0);
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

void func_75(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_54(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_76(bVar4, &bVar5))
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

bool func_76(bool bParam0, var uParam1)
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

bool func_77(bool bParam0)
{
	return UNK_0x3D1053F9EB43B7AD(bParam0, 354.4375f, 4877.2f, -62.34054f, 345.1211f, 4864.095f, -55.11187f, 16f, 0, true, 0);
}

bool func_78()
{
	if (Global_1590380 != func_65())
	{
		if (UNK_0xADC2AA9A68E522A1("base_heist_seats", Global_1590380, 1, 0))
		{
			return false;
		}
		UNK_0x37AD2AB54480FA6A(32, 0, Global_1590380);
		func_90(0, -1, 0);
		UNK_0x256D93AFAE851A7A(0);
		func_79();
		return true;
	}
	return false;
}

void func_79()
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_89() };
	vVar3 = { func_88() };
	func_85(0, func_87(343.93f, 4875.389f, -60.44f, -90f), -90f, vVar0, vVar3);
	func_85(1, func_87(344.08f, 4874.239f, -60.44f, -86f), -86f, vVar0, vVar3);
	func_85(2, func_87(344.33f, 4873.189f, -60.44f, -78f), -78f, vVar0, vVar3);
	func_85(3, func_87(344.7f, 4872.239f, -60.44f, -72f), -72f, vVar0, vVar3);
	func_85(4, func_87(345.06f, 4871.48f, -60.44f, -67f), -67f, vVar0, vVar3);
	func_85(5, func_87(345.86f, 4870.289f, -60.44f, -60f), -60f, vVar0, vVar3);
	func_85(6, func_87(350.41f, 4867.05f, -60.44f, -26f), -26f, vVar0, vVar3);
	func_85(7, func_87(351.51f, 4866.75f, -60.44f, -17f), -17f, vVar0, vVar3);
	func_85(8, func_87(352.66f, 4866.6f, -60.44f, -10f), -10f, vVar0, vVar3);
	func_85(9, func_87(353.6f, 4866.58f, -60.44f, -4f), -4f, vVar0, vVar3);
	func_85(10, func_87(354.7f, 4866.68f, -60.44f, 4f), 4f, vVar0, vVar3);
	func_85(11, func_87(355.85f, 4866.91f, -60.44f, 10f), 10f, vVar0, vVar3);
	func_85(12, func_87(346.02f, 4876.871f, -60.838f, -102f), -102f, vVar0, vVar3);
	func_85(13, func_87(345.97f, 4875.721f, -60.838f, -93f), -93f, vVar0, vVar3);
	func_85(14, func_87(346.19f, 4874.21f, -60.838f, -81f), -81f, vVar0, vVar3);
	func_85(15, func_87(346.62f, 4873.01f, -60.838f, -73f), -73f, vVar0, vVar3);
	func_85(16, func_87(347.27f, 4871.86f, -60.838f, -62f), -62f, vVar0, vVar3);
	func_85(17, func_87(351.57f, 4868.86f, -60.838f, -20f), -20f, vVar0, vVar3);
	func_85(18, func_87(352.89f, 4868.65f, -60.838f, -9f), -9f, vVar0, vVar3);
	func_85(19, func_87(354.17f, 4868.68f, -60.838f, 0f), 0f, vVar0, vVar3);
	func_85(20, func_87(355.12f, 4868.85f, -60.838f, 10f), 8f, vVar0, vVar3);
	func_85(21, func_87(356.58f, 4869.38f, -60.838f, 10f), 20f, vVar0, vVar3);
	func_85(22, func_87(348.2f, 4876.56f, -61.24f, -101f), -101f, vVar0, vVar3);
	func_85(23, func_87(348.2f, 4875.31f, -61.24f, -88f), -88f, vVar0, vVar3);
	func_85(24, func_87(348.47f, 4874.28f, -61.24f, -76f), -76f, vVar0, vVar3);
	func_85(25, func_87(349.17f, 4872.97f, -61.24f, -60f), -60f, vVar0, vVar3);
	func_85(26, func_87(352.12f, 4870.98f, -61.24f, -20f), -20f, vVar0, vVar3);
	func_85(27, func_87(353.42f, 4870.84f, -61.24f, -6f), -6f, vVar0, vVar3);
	func_85(28, func_87(354.67f, 4870.995f, -61.24f, 8f), 8f, vVar0, vVar3);
	func_85(29, func_87(356.02f, 4871.545f, -61.24f, 25f), 25f, vVar0, vVar3);
	func_80(&Local_47, 8404);
}

void func_80(int iParam0, int iParam1)
{
	iParam0->f_421.f_13 = iParam1;
	func_13(&(iParam0->f_421), 5);
}

bool func_81(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	bool bVar13;

	if (iParam1 < 22)
	{
		return true;
	}
	if (!UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()) || UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		return false;
	}
	if (func_84(UNK_0xD803B885F5E47A62()) || UNK_0xEAE0D21A50E6C7F4(bLocal_484, false))
	{
		return false;
	}
	vVar0 = { uParam0->f_1 };
	vVar3 = { uParam0->f_1.f_3 };
	vVar0.f_2 = 0f;
	vVar3.f_2 = 0f;
	vVar6 = { func_83(vVar0 - vVar3) };
	vVar9 = { UNK_0x08D89CE2E20AE305(UNK_0x16F2683693E537C9()) };
	fVar12 = func_82(vVar6, vVar9);
	bVar13 = fVar12 > 0.36f;
	return bVar13;
}

float func_82(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_83(vector3 vParam0)
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

bool func_84(bool bParam0)
{
	if (bParam0 != func_65())
	{
		if (func_54(bParam0, 1, 1))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_1692770[bParam0 /*39*/].f_27, 3))
			{
				return true;
			}
		}
	}
	return false;
}

void func_85(int iParam0, vector3 vParam1, float fParam4, vector3 vParam5, vector3 vParam8)
{
	Local_47[iParam0 /*14*/] = 3;
	Local_47[iParam0 /*14*/].f_1 = { vParam1 + func_86(vParam5, (fParam4 - 180f)) };
	Local_47[iParam0 /*14*/].f_1.f_3 = { vParam1 + func_86(vParam8, (fParam4 - 180f)) };
	Local_47[iParam0 /*14*/].f_1.f_6 = 1f;
	Local_47[iParam0 /*14*/].f_8 = { vParam1 };
	Local_47[iParam0 /*14*/].f_8.f_3 = { 0f, 0f, fParam4 };
}

Vector3 func_86(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

Vector3 func_87(vector3 vParam0, float fParam3)
{
	return vParam0 + func_86(0f, 0.01f, 0.015f, fParam3);
}

Vector3 func_88()
{
	return 0f, -0.7f, -1f;
}

Vector3 func_89()
{
	return 0f, 0.1f, 1f;
}

int func_90(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_91())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_73())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_71(157))
				{
					if (!bParam2)
					{
						func_2();
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
					func_2();
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
				func_2();
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
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_91()
{
	return Global_1312854;
}

