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
	struct<5> Local_43 = { 0, 0, 0, 0, 0 } ;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = false;
	bool bLocal_51 = false;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	bool bLocal_54 = false;
	struct<5> Local_55 = { 0, 0, 0, 0, 0 } ;
	vector3 vLocal_60 = { 0f, 0f, 0f };
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
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
	iLocal_48 = -1;
	iLocal_49 = -1;
	fLocal_52 = 1.7f;
	fLocal_53 = 0f;
	bLocal_54 = "";
	iLocal_63 = -1;
	if (UNK_0x2EBF608FFE6CA406(2))
	{
		func_174();
	}
	Local_43 = { ScriptParam_0 };
	func_173();
	func_172();
	func_167(iLocal_48, 0, 0);
	SYSTEM::SETTIMERA(0);
	func_166();
	func_162();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_161(iLocal_48);
		func_160();
		func_158();
		func_151();
		func_167(iLocal_48, 0, 0);
		func_173();
		func_9();
		if ((UNK_0x8CD06866876216F2() && !UNK_0xA14BB9332558B949()) && !func_8())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}
}

void func_2()
{
	if ((!func_4() && !func_3()) && Global_2451425)
	{
		Global_4456448.f_194990 = 0;
	}
}

bool func_3()
{
	return Global_2450632.f_591;
}

bool func_4()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_196 != 0;
}

void func_5()
{
	Global_2450632.f_656 = 1;
}

bool func_6()
{
	return Global_2450632.f_635;
}

bool func_7()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

bool func_8()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2451426.f_1.f_2810, 3);
}

void func_9()
{
	bool bVar0;

	if (UNK_0x437347B10A200C4B(Local_43.f_1, 0))
	{
		func_174();
	}
	if (bLocal_50)
	{
		if (!UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			func_174();
		}
	}
	func_150();
	bVar0 = true;
	switch (vLocal_60.x)
	{
		case 4:
			func_149();
			return;
		case 5:
			func_146();
			return;
		case 6:
			func_144();
			return;
		case 7:
			func_143();
			return;
		case 8:
			func_142();
			return;
		case 9:
			func_140();
			return;
		case 10:
			func_139();
			func_136();
			func_135();
			return;
		case 11:
			func_134();
			return;
		case 12:
			break;
		default:
			bVar0 = false;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!vLocal_60.x == 12)
	{
		return;
	}
	switch (vLocal_60.y)
	{
		case 1:
			if (!func_133())
			{
				func_121();
				func_136();
			}
			break;
		case 2:
			func_119();
			break;
		case 12:
			func_106();
			break;
		case 3:
			func_10();
			break;
		default:
			break;
	}
}

void func_10()
{
	var uVar0;
	char* sVar2;
	struct<53> Var3;
	int iVar61;

	if (!UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_3, 27))
	{
		UNK_0x64B1AD81046CB800(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	}
	Global_1671188 = 1;
	if (!UNK_0x757EF87A33649210())
	{
		UNK_0x53491B90E4FD0E56(2500);
		while (UNK_0xD0BB2359EC70FC37())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (UNK_0x8CD06866876216F2())
	{
		func_105(&uVar0, 0, 0);
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			UNK_0x4AE2D6991D4E4082(UNK_0x16F2683693E537C9(), 0, 1);
		}
		while ((UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0)) && UNK_0x2EAFA036429F20FC(UNK_0x16F2683693E537C9()))
		{
			SYSTEM::WAIT(0);
		}
		UNK_0x0674E58A79778E99(&(Global_1676377.f_3), 27);
		func_91(UNK_0xD803B885F5E47A62(), 0, 57344, 0);
		Global_2405072.f_2672 = 1;
		if (UNK_0xEAE0D21A50E6C7F4(Global_1676377, 15))
		{
			UNK_0x0674E58A79778E99(&Global_1676377, 15);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_2, 6))
		{
			UNK_0x0674E58A79778E99(&(Global_1676377.f_2), 6);
		}
		if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
		{
			Global_2405072.f_2673 = 1;
		}
		else
		{
			Global_2405072.f_2673 = 0;
		}
		if (UNK_0xF45FDB21A0F137CB())
		{
			UNK_0xC1B8EFD8630D086B(0);
		}
		if (func_87(1))
		{
			func_75(0);
		}
		func_73(1);
		func_174();
	}
	sVar2 = "";
	Var3.f_3 = 1064514355;
	Var3.f_30 = 1148829696;
	Var3.f_31 = 1148829696;
	Var3.f_52 = 1148829696;
	iVar61 = 7;
	switch (func_67())
	{
		case 0:
			if (func_65() != 2)
			{
				iVar61 = 0;
			}
			else
			{
				iVar61 = 1;
			}
			break;
		case 1:
			if (!func_64(126))
			{
				iVar61 = 2;
			}
			else
			{
				iVar61 = 3;
			}
			break;
		case 2:
			if (!func_63(4))
			{
				if (func_64(58))
				{
					iVar61 = 4;
				}
				if (func_64(59))
				{
					iVar61 = 5;
				}
				if (iVar61 == 7)
				{
					if (!func_62())
					{
						iVar61 = 4;
					}
					else
					{
						iVar61 = 5;
					}
				}
			}
			else
			{
				iVar61 = 6;
			}
			break;
	}
	switch (iVar61)
	{
		case 0:
			sVar2 = "DWC_MICHAEL_mansion";
			Var3 = "SAVEM_Default@";
			Var3.f_1 = "M_GetOut_R";
			Var3.f_2 = "M_GetOut_R_CAM";
			Var3.f_5 = { -814.181f, 181.1f, 75.74f };
			Var3.f_8 = { 0f, 0f, 21.1994f };
			Var3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
		case 1:
			sVar2 = "DWC_MICHAEL_trailer";
			Var3 = "SAVECountryside@";
			Var3.f_1 = "M_GetOut_countryside";
			Var3.f_2 = "M_GetOut_countryside_CAM";
			Var3.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
		case 2:
			sVar2 = "DWC_FRANKLIN_city";
			Var3 = "SWITCH@FRANKLIN@BED";
			Var3.f_1 = "Sleep_GetUp_RubEyes";
			Var3.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var3.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var3.f_8 = { 0f, 0f, -179.653f };
			Var3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
		case 3:
			sVar2 = "DWC_FRANKLIN_hills";
			Var3 = "SAVEBighouse@";
			Var3.f_1 = "F_GetOut_r_bighouse";
			Var3.f_2 = "F_GetOut_r_bighouse_CAM";
			Var3.f_5 = { -1.049f, 524.283f, 170.064f };
			Var3.f_8 = { 0f, 0f, 24f };
			Var3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
		case 4:
			sVar2 = "DWC_TREVOR_trailer";
			Var3 = "SAVECountryside@";
			Var3.f_1 = "T_GetOut_countryside";
			Var3.f_2 = "T_GetOut_countryside_CAM";
			Var3.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
		case 5:
			sVar2 = "DWC_TREVOR_beach";
			Var3 = "SAVEVeniceB@";
			Var3.f_1 = "T_GetOut_r_veniceB";
			Var3.f_2 = "T_GetOut_r_veniceB_CAM";
			Var3.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var3.f_8 = { 0f, 0f, 36.25f };
			Var3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
		case 6:
			sVar2 = "DWC_TREVOR_stripclub";
			Var3 = "SAVECouch@";
			Var3.f_1 = "T_GetOut_couch";
			Var3.f_2 = "T_GetOut_couch_CAM";
			Var3.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
	}
	if (!UNK_0x437347B10A200C4B(Local_43.f_1, 0))
	{
		UNK_0xA47B46945FF6DE74(Local_43.f_1, Var3.f_5, 1, 0, 0, 1);
	}
	SYSTEM::WAIT(500);
	StringCopy(&(Var3.f_11), "", 16);
	Var3.f_15 = -1f;
	func_12(sVar2, &Var3, "");
	func_11(126, 1);
	func_174();
}

void func_11(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (UNK_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/])
	{
		UNK_0x6FB46C25CCB7E6D5(Global_57254[iParam0 /*7*/].f_1, &bVar0, -1);
		bVar0 = (bVar0 + iParam1);
		UNK_0xCDC520E5E48E63D9(Global_57254[iParam0 /*7*/].f_1, bVar0, 1);
	}
}

void func_12(char* sParam0, var uParam1, bool bParam2)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar174;
	int iVar175;
	char* sVar176;
	bool bVar177;
	bool bVar178;
	int iVar179;
	float fVar180;
	float fVar181;
	bool bVar182;
	int iVar183;
	int iVar184;
	float fVar185;
	vector3 vVar186;
	vector3 vVar189;
	float fVar192;
	float fVar193;
	float fVar194;
	vector3 vVar195;
	int iVar198;
	float fVar199;
	float fVar200;
	vector3 vVar201;
	vector3 vVar204;
	float fVar207;
	int iVar208;
	float fVar209;
	float fVar210;
	vector3 vVar211;
	int iVar214;
	float fVar215;
	float fVar216;
	vector3 vVar217;
	vector3 vVar220;
	float fVar223;
	int iVar224;
	bool bVar225;
	bool bVar226;
	int iVar227;

	fVar0 = 0f;
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), true);
	}
	UNK_0xD7AD2803AD9697F7(uParam1->f_5, 4500f);
	UNK_0x58B5D6A0F1D7754D(uParam1->f_5, 4500f);
	UNK_0x536F1BE96C726C4B(uParam1->f_5, 5f, 1, 0, 0, false);
	UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), uParam1->f_5, 1, 0, 0, 1);
	UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), true);
	SYSTEM::WAIT(0);
	UNK_0x21387C9EECC2B220(true);
	UNK_0x3F423BF5B8125A50(*uParam1);
	if (UNK_0xEA6BC48857E0AC4C(uParam1->f_16))
	{
	}
	else
	{
		UNK_0x3F423BF5B8125A50(uParam1->f_16);
	}
	if (!UNK_0x757EF87A33649210())
	{
		UNK_0x53491B90E4FD0E56(0);
	}
	func_57(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!UNK_0x757EF87A33649210())
	{
		UNK_0x53491B90E4FD0E56(0);
	}
	iVar1 = UNK_0x1C0640BA9A7327B3() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > UNK_0x1C0640BA9A7327B3())
	{
		bVar2 = true;
		UNK_0x3F423BF5B8125A50(*uParam1);
		if (!UNK_0xB4AE0788C1587752(*uParam1))
		{
			bVar2 = false;
		}
		if (!UNK_0xEA6BC48857E0AC4C(uParam1->f_16))
		{
			UNK_0x3F423BF5B8125A50(uParam1->f_16);
			if (!UNK_0xB4AE0788C1587752(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!UNK_0x757EF87A33649210())
		{
			UNK_0x53491B90E4FD0E56(0);
		}
		SYSTEM::WAIT(0);
	}
	func_54();
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		UNK_0xF858EFDE1871B5F2(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, false, 1);
		UNK_0x28F5E4DA506AC0CA(uParam1->f_5 + uParam1->f_19, (SYSTEM::VMAG(uParam1->f_22) + 25f), 0, 0, 0, 0, false, 0);
		UNK_0x536F1BE96C726C4B(uParam1->f_5 + uParam1->f_19, (SYSTEM::VMAG(uParam1->f_22) + 25f), 1, 0, 0, false);
	}
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
		UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
		UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
	}
	UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
	UNK_0x21387C9EECC2B220(false);
	UNK_0x536F1BE96C726C4B(uParam1->f_5, 15f, 1, 0, 0, false);
	UNK_0x5B12BA0B3AB525F5();
	UNK_0x58EA425DFE77472C();
	func_51();
	while (func_50())
	{
		SYSTEM::WAIT(0);
	}
	if (!UNK_0x0F1CCD77290EE12F() && !UNK_0x7BCE0E6DD4A1F749())
	{
		UNK_0x82E51BCA72537B6C(250);
	}
	UNK_0x67E5ECB8FD7F5018(1);
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		iVar4 = UNK_0xE9744DB7B8CA6965(uParam1->f_5, uParam1->f_8, 2);
		UNK_0xC90224D9E95E5E3A(iVar4, false);
		UNK_0xEFC3DF9D33E248D8(iVar4, false);
		iVar5 = UNK_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", true);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MOTIONSTATE_IDLE"))
		{
			iVar6 |= 2;
		}
		func_48(UNK_0x16F2683693E537C9(), uParam1->f_18);
		UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		UNK_0xC46BC31D2529AD8C(UNK_0x16F2683693E537C9(), 1);
		UNK_0xE4D02C9C8A550290(UNK_0xD803B885F5E47A62(), 1);
		bVar3 = UNK_0x4E3CE49FD6DA2735(UNK_0x16F2683693E537C9(), 77);
		UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 77, true);
		UNK_0x93E9ED66DAB9FBE3(iVar5, iVar4, uParam1->f_2, *uParam1);
		UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
		if (!UNK_0xEA6BC48857E0AC4C(uParam1->f_16) && !UNK_0xEA6BC48857E0AC4C(uParam1->f_17))
		{
			UNK_0xC6EB89C59F2AF6B8(UNK_0x16F2683693E537C9(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, false, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!UNK_0xEA6BC48857E0AC4C(bParam2))
		{
			func_47(bParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!UNK_0xEA6BC48857E0AC4C(&(uParam1->f_11)))
	{
		iVar174 = func_67();
		iVar175 = -1;
		sVar176 = "";
		switch (iVar174)
		{
			case 0:
				iVar175 = 0;
				sVar176 = "MICHAEL";
				break;
			case 1:
				iVar175 = 1;
				sVar176 = "FRANKLIN";
				break;
			case 2:
				iVar175 = 2;
				sVar176 = "TREVOR";
				break;
			default:
				break;
		}
		func_46(&uVar9, iVar175, UNK_0x16F2683693E537C9(), sVar176, 0, 1);
	}
	if (UNK_0x69DF961355195C3C(iVar4))
	{
		bVar177 = "WalkInterruptible";
		bVar178 = "ForceBlendout";
		while (UNK_0x69DF961355195C3C(iVar4) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (!bVar8)
			{
				if (!UNK_0x757EF87A33649210())
				{
					if (!UNK_0xEA6BC48857E0AC4C(uParam1->f_26))
					{
						UNK_0x82A772610883F395(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!UNK_0xEA6BC48857E0AC4C(uParam1->f_27))
					{
						if (!UNK_0xEA6BC48857E0AC4C(uParam1->f_28))
						{
							UNK_0x4D7F4CC43D4D0DE3(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!UNK_0xEA6BC48857E0AC4C(uParam1->f_29))
						{
							UNK_0x4D7F4CC43D4D0DE3(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			UNK_0x3FC8DBCC154CA56B();
			UNK_0x3584F71E5CA29322(18);
			UNK_0xECEC50E724D52DC1();
			func_40(0);
			iVar179 = UNK_0x1C0640BA9A7327B3();
			if (iVar179 >= (Global_41982 - 500))
			{
				func_39(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = UNK_0xA45992A6CE82FB43(iVar4);
			if (!UNK_0xEA6BC48857E0AC4C(&(uParam1->f_11)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_15)
					{
						if (func_22(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			bVar182 = false;
			if (UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), UNK_0x12AB0310C2281427(bVar177)))
			{
				iVar183 = (UNK_0x0DED1C1B8250FA57(2, 195) - 128);
				iVar184 = (UNK_0x0DED1C1B8250FA57(2, 196) - 128);
				if (((iVar183 < 64 && iVar183 > -64) && iVar184 < 64) && iVar184 > -64)
				{
				}
				else
				{
					bVar182 = true;
				}
			}
			else
			{
				fVar180 = -1f;
				fVar181 = -1f;
				bVar182 = false;
				uParam1->f_3 = uParam1->f_3;
				fVar180 = fVar180;
				fVar181 = fVar181;
			}
			if (UNK_0x6C3F127AAF415E69() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						vVar186 = { UNK_0xF1EE614CA05DDE75() };
						vVar189 = { UNK_0x64430C979F516F7A(UNK_0x16F2683693E537C9(), 31086, 0f, 0f, 0f) };
						fVar192 = UNK_0x0EB28750412C3A5A(vVar186, vVar189, 1);
						fVar185 = func_21(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_20(&(uParam1->f_34), UNK_0x16F2683693E537C9(), func_67(), 1E-06f, 300, 300, 0, 0, 1045220557 /* Float: 0.2f */);
						func_19(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = UNK_0x1C0640BA9A7327B3();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							vVar195 = { UNK_0x9382F04ED9CDA21A(2) };
							iVar198 = UNK_0xD9522BA9E27E1349(UNK_0x16F2683693E537C9());
							fVar199 = vVar195.z;
							fVar200 = iVar198;
							uParam1->f_57 = (fVar199 - fVar200);
							if (uParam1->f_57 < 360f)
							{
								uParam1->f_57 = (uParam1->f_57 + 360f);
							}
							if (uParam1->f_57 > 360f)
							{
								uParam1->f_57 = (uParam1->f_57 - 360f);
							}
						}
						fVar193 = uParam1->f_56;
						fVar194 = uParam1->f_57;
						UNK_0xEF6276132B396452(fVar193, 1065353216 /* Float: 1f */);
						UNK_0x2FB9A57162E54BAB(fVar194);
						UNK_0x474798B2993FFB5A(fVar193);
						UNK_0x61752392D0C89CEC(fVar194);
						vVar201 = { UNK_0xF1EE614CA05DDE75() };
						vVar204 = { UNK_0x07DAF5424BC6779A() };
						fVar207 = UNK_0x0EB28750412C3A5A(vVar201, vVar204, 1);
						iVar208 = SYSTEM::ROUND((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						UNK_0x61A3AC394D8DC0BC();
						if (func_16(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), UNK_0x12AB0310C2281427(bVar178)) || bVar182)
			{
				if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
				{
					UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
					switch (uParam1->f_4)
					{
						case joaat("MOTIONSTATE_IDLE"):
							UNK_0xBD453909DC26A85D(UNK_0x16F2683693E537C9(), joaat("MOTIONSTATE_IDLE"), true, 0, 0);
							UNK_0x04B065D07D2FB5B9(0, 0, 3, 0);
							break;
						case joaat("MOTIONSTATE_WALK"):
							UNK_0xBD453909DC26A85D(UNK_0x16F2683693E537C9(), joaat("MOTIONSTATE_WALK"), true, 0, 0);
							UNK_0x5A9FF5F994E904B8(UNK_0xD803B885F5E47A62(), 1f, 500, false, 1, 0);
							if (UNK_0x6C3F127AAF415E69() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									vVar211 = { UNK_0x9382F04ED9CDA21A(2) };
									iVar214 = UNK_0xD9522BA9E27E1349(UNK_0x16F2683693E537C9());
									fVar215 = vVar211.z;
									fVar216 = iVar214;
									uParam1->f_31 = (fVar215 - fVar216);
									if (uParam1->f_31 < 360f)
									{
										uParam1->f_31 = (uParam1->f_31 + 360f);
									}
									if (uParam1->f_31 > 360f)
									{
										uParam1->f_31 = (uParam1->f_31 - 360f);
									}
								}
								fVar209 = uParam1->f_30;
								fVar210 = uParam1->f_31;
								UNK_0xEF6276132B396452(fVar209, 1065353216 /* Float: 1f */);
								UNK_0x2FB9A57162E54BAB(fVar210);
								vVar217 = { UNK_0xF1EE614CA05DDE75() };
								vVar220 = { UNK_0x07DAF5424BC6779A() };
								fVar223 = UNK_0x0EB28750412C3A5A(vVar217, vVar220, 1);
								iVar224 = SYSTEM::ROUND((fVar223 * 1000f));
								UNK_0xB3A1B75CB59FEB56(false, true, iVar224, 0, 0, 0);
							}
							break;
						default:
							break;
					}
					if (UNK_0x69DF961355195C3C(iVar4))
					{
						UNK_0xB46854F2D1C7DFA9(iVar4);
						iVar4 = -1;
					}
				}
			}
			SYSTEM::WAIT(0);
		}
	}
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		UNK_0xF5894FEB702E7E76(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
	}
	bVar225 = UNK_0x7686B2698B4F28AD();
	bVar226 = false;
	if (uParam1->f_32)
	{
		UNK_0x61A3AC394D8DC0BC();
		if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while ((bVar225 || bVar226) && !UNK_0x991B1F0980C62628())
		{
			if (bVar225)
			{
			}
			if (bVar226)
			{
			}
			iVar227 = 2;
			func_15(1, 26, &iVar227);
			func_15(1, 79, &iVar227);
			func_15(1, 1, &iVar227);
			func_15(1, 2, &iVar227);
			func_15(0, 22, &iVar227);
			func_15(0, 36, &iVar227);
			func_15(0, 142, &iVar227);
			func_15(0, 141, &iVar227);
			func_15(0, 140, &iVar227);
			func_15(0, 263, &iVar227);
			func_15(0, 264, &iVar227);
			SYSTEM::WAIT(0);
			bVar225 = UNK_0x7686B2698B4F28AD();
			bVar226 = false;
			if (uParam1->f_32)
			{
				UNK_0x61A3AC394D8DC0BC();
				if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!UNK_0xEA6BC48857E0AC4C(uParam1->f_16))
	{
		UNK_0x8D17794CE3273D70(uParam1->f_16);
	}
	UNK_0x8D17794CE3273D70(*uParam1);
	UNK_0x9A8DDC7C522F5BF5(iVar5, 0);
	func_13(&(uParam1->f_34));
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 77, bVar3);
		UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
	}
	sParam0 = sParam0;
}

void func_13(var uParam0)
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_14(var uParam0)
{
	if (UNK_0x9F4FE516EAACCFC5(uParam0->f_1))
	{
		UNK_0x9A8DDC7C522F5BF5(uParam0->f_1, 0);
	}
	if (UNK_0x9F4FE516EAACCFC5(uParam0->f_2))
	{
		UNK_0x9A8DDC7C522F5BF5(uParam0->f_2, 0);
	}
	if (UNK_0x9F4FE516EAACCFC5(uParam0->f_3))
	{
		UNK_0x9A8DDC7C522F5BF5(uParam0->f_3, 0);
	}
	if (UNK_0x9F4FE516EAACCFC5(uParam0->f_4))
	{
		UNK_0x9A8DDC7C522F5BF5(uParam0->f_4, 0);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	UNK_0x38C3A68D7861DCFD(iParam0, iParam1, 1);
	*iParam2++;
}

bool func_16(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	bool bVar21;

	switch (*uParam0)
	{
		case 0:
			func_17();
			if (!UNK_0x437347B10A200C4B(uParam0->f_5, 0))
			{
				func_14(uParam0);
				vVar0 = { UNK_0xF1EE614CA05DDE75() };
				if (bParam1)
				{
					vVar0 = { vVar0 + UNK_0x56E9E0FD5ACCD35D(uParam0->f_5) * FtoV(UNK_0x6117725E0134737F()) };
				}
				vVar3 = { UNK_0x5293C88BD2F4DE13(uParam0->f_5, vVar0) };
				vVar6 = { UNK_0x9382F04ED9CDA21A(2) };
				vVar9 = { vVar6 + uParam0->f_9 };
				vVar12 = { vVar9 - UNK_0x835730A2D89F6093(uParam0->f_5, 2) };
				vVar15 = { (-SYSTEM::SIN(vVar9.z) * SYSTEM::COS(vVar9.x)), (SYSTEM::COS(vVar9.z) * SYSTEM::COS(vVar9.x)), SYSTEM::SIN(vVar9.x) };
				vVar18 = { (-SYSTEM::SIN(vVar12.z) * SYSTEM::COS(vVar12.x)), (SYSTEM::COS(vVar12.z) * SYSTEM::COS(vVar12.x)), SYSTEM::SIN(vVar12.x) };
				bVar21 = UNK_0x1265A70A2DDA35AB();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = UNK_0x92B061D59B9B540A(1775630800, 0);
				}
				uParam0->f_1 = UNK_0x92B061D59B9B540A(joaat("DEFAULT_SCRIPTED_CAMERA"), 1);
				if (bParam1)
				{
					UNK_0xC5940439E4EB9A33(uParam0->f_1, uParam0->f_5, vVar3, 1);
				}
				else
				{
					UNK_0x608A456FDD8A83D8(uParam0->f_1, vVar0);
				}
				UNK_0x5F3CBA6EB9341C90(uParam0->f_1, vVar6, 2);
				UNK_0x5818C8D5303DCCF8(uParam0->f_1, bVar21);
				uParam0->f_2 = UNK_0x92B061D59B9B540A(joaat("DEFAULT_SCRIPTED_CAMERA"), 1);
				if (bParam1 && !bParam4)
				{
					UNK_0xC5940439E4EB9A33(uParam0->f_2, uParam0->f_5, vVar3 + vVar18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					UNK_0x608A456FDD8A83D8(uParam0->f_2, vVar0 + vVar15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				UNK_0x5F3CBA6EB9341C90(uParam0->f_2, vVar6, 2);
				UNK_0x5818C8D5303DCCF8(uParam0->f_2, bVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = UNK_0x92B061D59B9B540A(joaat("DEFAULT_SCRIPTED_CAMERA"), 1);
					if (bParam1 && !bParam4)
					{
						UNK_0xC5940439E4EB9A33(uParam0->f_4, uParam0->f_5, vVar3 + vVar18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						UNK_0x608A456FDD8A83D8(uParam0->f_4, vVar0 + vVar15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					UNK_0x5F3CBA6EB9341C90(uParam0->f_4, vVar6, 2);
					UNK_0x5818C8D5303DCCF8(uParam0->f_4, bVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					UNK_0xF1FB1D7C450AAFA1(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						UNK_0xF1FB1D7C450AAFA1(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					UNK_0xF1FB1D7C450AAFA1(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					UNK_0x34570E685597AE09(uParam0->f_3, iParam6);
					UNK_0xE3BB8E05FCEB3FBE(uParam0->f_3, true);
				}
				else
				{
					UNK_0xF1E4C781086FABC1(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				uParam0->f_7 = UNK_0x1C0640BA9A7327B3();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return true;
			}
			break;
		case 1:
			func_17();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (UNK_0x1C0640BA9A7327B3() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									UNK_0x82A772610883F395("CamPushInFranklin", 0, 0);
									break;
								case 0:
									UNK_0x82A772610883F395("CamPushInMichael", 0, 0);
									break;
								case 2:
									UNK_0x82A772610883F395("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							UNK_0x82A772610883F395("CamPushInNeutral", 0, 0);
						}
						UNK_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (UNK_0x1C0640BA9A7327B3() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_14(uParam0);
					UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				}
				return true;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_17()
{
	UNK_0xC2127C0F64D6A3B9();
	func_18();
}

void func_18()
{
	Global_22211.f_134 = 1;
}

void func_19(var uParam0, vector3 vParam1)
{
	uParam0->f_9 = { vParam1 };
}

void func_20(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

float func_21(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					UNK_0x5CEB4DB888A62073(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_37();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (UNK_0x25037C66EB32B076())
		{
			return 0;
		}
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_35();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			UNK_0x0674E58A79778E99(&Global_7356, 20);
			UNK_0x0674E58A79778E99(&Global_7357, 17);
			UNK_0x0674E58A79778E99(&Global_7358, false);
			if (bParam2)
			{
				func_33();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				if (UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (func_32())
				{
					return 0;
				}
				if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x6438374572DE9B51(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x989FD1982F631EA3(UNK_0x16F2683693E537C9(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (UNK_0x70EED0761B82965E(UNK_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62()))
					{
						return 0;
					}
					if (UNK_0xFB275CE013F3A38C(UNK_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (UNK_0x3114787DB5A129EF(UNK_0xD803B885F5E47A62(), 0))
					{
						return 0;
					}
				}
			}
			if (func_31())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
					case 8:
						return 0;
					case 9:
						break;
					case 10:
						break;
					default:
						break;
				}
				if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 9))
				{
					return 0;
				}
			}
			func_30();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_29();
		func_24();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_37();
	}
	return 0;
}

void func_24()
{
	if (!func_25())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

bool func_25()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_28())
	{
		return false;
	}
	if (func_26(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, 7))
	{
		return false;
	}
	if (UNK_0xA14BB9332558B949())
	{
		return false;
	}
	return true;
}

bool func_26(int iParam0)
{
	return func_27(iParam0, 20);
}

bool func_27(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_28()
{
	return -1;
}

void func_29()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	UNK_0x5CEB4DB888A62073(false);
	Global_20805 = 1;
}

void func_30()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	UNK_0x0674E58A79778E99(&Global_7357, 16);
}

bool func_31()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_32()
{
	int iVar0;
	int iVar1;

	if (Global_76622)
	{
		iVar0 = 0;
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar1, 1);
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
			{
				iVar0 = 1;
			}
		}
		if (UNK_0x5ED715849883FAFF() && iVar0 == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0x24129324CD7C13D0(UNK_0x16F2683693E537C9(), 78, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_33()
{
	if (func_34(14))
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_67();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

bool func_34(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_35()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_36(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1377170.f_1048, bParam0);
}

void func_37()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if ((UNK_0x1EE04CEA36EF313B() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

void func_39(int iParam0)
{
	Global_41982 = (UNK_0x1C0640BA9A7327B3() + iParam0);
}

void func_40(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_44(0))
		{
			func_41(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_41(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_43())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
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
	if (!func_31())
	{
		Global_19486.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
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

bool func_43()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_44(int iParam0)
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

bool func_45()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_46(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = bParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				UNK_0xA245D14CC59CDD36(bParam2, 0);
			}
			else
			{
				UNK_0xA245D14CC59CDD36(bParam2, 1);
			}
		}
		if (!UNK_0xEB6A8945D1AC98A1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				UNK_0x971EF1DE410C56CF(bParam2, 0);
			}
			else
			{
				UNK_0x971EF1DE410C56CF(bParam2, 1);
			}
		}
	}
}

void func_47(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_48(bool bParam0, var uParam1)
{
	if (func_49(uParam1, 1))
	{
		UNK_0xB5F20CC22A70F439(bParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_49(uParam1, 2))
	{
		UNK_0xB5F20CC22A70F439(bParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_49(uParam1, 4))
	{
		UNK_0xB5F20CC22A70F439(bParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_49(uParam1, 8))
	{
		UNK_0xB5F20CC22A70F439(bParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_49(uParam1, 16))
	{
		UNK_0xB5F20CC22A70F439(bParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_49(uParam1, 32))
	{
		UNK_0xB5F20CC22A70F439(bParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_49(uParam1, 64))
	{
		UNK_0xB5F20CC22A70F439(bParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_49(uParam1, 128))
	{
		UNK_0xB5F20CC22A70F439(bParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_49(uParam1, 256))
	{
		UNK_0xB5F20CC22A70F439(bParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_49(uParam1, 512))
	{
		UNK_0xB5F20CC22A70F439(bParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_49(uParam1, 0))
	{
	}
}

bool func_49(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_50()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return false;
	}
	return true;
}

void func_51()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_95677[iVar0 /*17*/] && !Global_95677[iVar0 /*17*/].f_1)
		{
			if (Global_95677[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_95677[iVar0 /*17*/].f_5 != 88 && Global_95677[iVar0 /*17*/].f_5 != 89) && Global_95677[iVar0 /*17*/].f_5 != 92)
				{
					func_52(Global_95677[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_52(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92729[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_92729[iParam0 /*2*/] = 0;
	}
}

bool func_53(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_54()
{
	func_55();
	func_73(1);
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_42383[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_167(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_42357[iVar2 /*5*/] == 0)
		{
			func_56(iVar2);
		}
		iVar2++;
	}
}

void func_56(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42357[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42357[iParam0 /*5*/].f_1 == UNK_0x16F2683693E537C9())
		{
			Global_42594 = 0;
		}
	}
	Global_42357[iParam0 /*5*/] = 13;
	Global_42357[iParam0 /*5*/].f_1 = 0;
	Global_42357[iParam0 /*5*/].f_2 = 0;
	Global_42357[iParam0 /*5*/].f_3 = 0;
	Global_42357[iParam0 /*5*/].f_4 = 0;
	Global_42355 = (Global_42355 - 1);
	if (Global_42355 < 0)
	{
		Global_42355 = 0;
	}
}

int func_57(vector3 vParam0, bool bParam3, int iParam4, int iParam5)
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		func_61(0);
		UNK_0x536F1BE96C726C4B(vParam0, 5f, 1, 0, 0, false);
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vParam0, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), bParam3);
				UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
				UNK_0x2FB9A57162E54BAB(0f);
			}
		}
		UNK_0x9E632F16E887F781(vParam0, 4500f, 0);
		SYSTEM::WAIT(0);
		UNK_0x536F1BE96C726C4B(vParam0, 5000f, 1, 0, 0, false);
		UNK_0x75CFD6AD66ADFDD1(vParam0, 5000f, 0);
		UNK_0xD7AD2803AD9697F7(vParam0, 5000f);
		UNK_0x58B5D6A0F1D7754D(vParam0, 5000f);
		func_60();
		func_59();
		SYSTEM::SETTIMERA(0);
		func_61(1);
		if (!UNK_0xEB880D98B5988D0C())
		{
			while (!UNK_0x9E632F16E887F781(vParam0, 4500f, 0))
			{
				SYSTEM::WAIT(0);
				if (SYSTEM::TIMERA() > 2000)
				{
					UNK_0x21387C9EECC2B220(false);
					return 0;
				}
			}
		}
		SYSTEM::SETTIMERA(0);
		while (!UNK_0x68367101660E33F0())
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				UNK_0x21387C9EECC2B220(false);
				if (UNK_0xEB880D98B5988D0C())
				{
					UNK_0x486B4ADE317F0689();
				}
				return 0;
			}
		}
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xEB880D98B5988D0C())
				{
					UNK_0x486B4ADE317F0689();
				}
				UNK_0x21387C9EECC2B220(false);
				SYSTEM::SETTIMERA(0);
				UNK_0x5B12BA0B3AB525F5();
				if (iParam5 == 1)
				{
					UNK_0x58EA425DFE77472C();
				}
				else
				{
					SYSTEM::SETTIMERA(5000);
				}
				UNK_0xAC7897419A704C8B();
			}
		}
		while ((!UNK_0x0E750251F52DCB41() && !func_58()) && SYSTEM::TIMERA() < 1500)
		{
			SYSTEM::WAIT(0);
		}
		if (SYSTEM::TIMERA() > 1500)
		{
			if (iParam5 == 1)
			{
			}
		}
		if (iParam4 == 1)
		{
			UNK_0xE82754C349C7B581(vParam0, &(vParam0.f_2), 0, 0);
			UNK_0x536F1BE96C726C4B(vParam0, 5f, 1, 0, 0, false);
			if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
			{
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vParam0, 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), bParam3);
				}
			}
		}
		UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
		UNK_0x2FB9A57162E54BAB(0f);
		func_61(0);
		return 1;
	}
	func_61(0);
	return 0;
}

bool func_58()
{
	return !Global_75441.f_553;
}

void func_59()
{
	Global_75441.f_553 = 1;
	Global_75441.f_554 = 0;
}

void func_60()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_75441[iVar0] = 0;
		iVar0++;
	}
}

void func_61(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 2))
			{
				UNK_0x21387C9EECC2B220(true);
				UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 2);
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 2))
		{
			UNK_0x21387C9EECC2B220(false);
			UNK_0x0674E58A79778E99(&(Global_98744.f_20), 2);
		}
	}
}

bool func_62()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return true;
	}
	return false;
}

bool func_63(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iParam0], false);
}

bool func_64(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

int func_65()
{
	if (Global_38796[11] == 1)
	{
		return 4;
	}
	if (!func_66(21))
	{
		return 0;
	}
	if (!func_64(130))
	{
		return 1;
	}
	if (!func_64(131))
	{
		return 2;
	}
	if (!func_66(22))
	{
		return 1;
	}
	if (!func_66(49))
	{
		return 3;
	}
	if (!func_66(28))
	{
		return 1;
	}
	return 3;
}

bool func_66(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

int func_67()
{
	func_68();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_68()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_71(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_70(UNK_0x16F2683693E537C9());
			if (func_69(iVar0) && (!func_34(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_69(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = iVar0;
				Global_111638.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_4321 != 145)
			{
				Global_111638.f_2358.f_539.f_4323 = Global_111638.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111638.f_2358.f_539.f_4321 = 145;
}

bool func_69(int iParam0)
{
	return iParam0 < 3;
}

int func_70(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_71(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_71(int iParam0)
{
	if (func_69(iParam0))
	{
		return func_72(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_72(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_73(bool bParam0)
{
	UNK_0x36629DB72EBCB78C(0f);
	UNK_0x58478905E1A5347E(0f);
	UNK_0xA480BA3CD1C5E797(0f);
	UNK_0x051C254DA616D646(true);
	UNK_0xE788E9364E3EB9B1(0f);
	UNK_0x7E7993893F7C203D(1);
	UNK_0x435B8A00821D00E7(0);
	if (UNK_0x562F77A7F33D2E46("SAFEHOUSE_STONED_MICHAEL"))
	{
		UNK_0x8910D3D58E0132B8("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!UNK_0xEA6BC48857E0AC4C(&Global_42574))
	{
		if (UNK_0x562F77A7F33D2E46(&Global_42574))
		{
			UNK_0x8910D3D58E0132B8(&Global_42574);
		}
	}
	if (UNK_0x9F4FE516EAACCFC5(Global_42563))
	{
		if (UNK_0xB3FFA20AEA3A2D9C(Global_42563))
		{
			UNK_0x97271F6489B78F2D(Global_42563, 0f);
			UNK_0x10486C0590CF176C(Global_42563, 1);
		}
	}
	if (UNK_0xF45FDB21A0F137CB())
	{
		UNK_0xC1B8EFD8630D086B(0);
	}
	if (bParam0)
	{
		if (UNK_0xE0FCC099E413CCBA() != -1 || UNK_0x21AA848387F2A52A() != -1)
		{
			UNK_0x225CFE81EA219E44();
		}
		else if (UNK_0x991B1F0980C62628())
		{
			UNK_0x225CFE81EA219E44();
		}
	}
	Global_42569 = 0f;
	StringCopy(&Global_42570, "", 16);
	StringCopy(&Global_42574, "", 64);
	StringCopy(&Global_42590, "", 16);
	func_74();
}

void func_74()
{
	Global_42562 = 0;
	Global_42563 = 0;
	Global_42564 = 0;
	Global_42565 = 30000;
	Global_42566 = 0f;
	Global_42568 = 0f;
	Global_42567 = 0f;
	Global_42569 = 0f;
	StringCopy(&Global_42570, "", 16);
}

void func_75(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_17692;
			break;
		case 1:
			iVar0 = Global_262145.f_17682;
			break;
		case 2:
			iVar0 = Global_262145.f_17693;
			break;
		case 3:
			iVar0 = Global_262145.f_17685;
			break;
		case 4:
			iVar0 = Global_262145.f_17681;
			break;
		case 6:
			iVar0 = 3;
			break;
		case 7:
			iVar0 = Global_262145.f_17696;
			break;
		case 8:
			iVar0 = Global_262145.f_17697;
			break;
		case 9:
			iVar0 = Global_262145.f_17700;
			break;
		case 22:
			iVar0 = Global_262145.f_17701;
			break;
		case 23:
			iVar0 = Global_262145.f_17694;
			break;
		case 25:
			iVar0 = Global_262145.f_18583;
			break;
		case 26:
			iVar0 = Global_262145.f_18582;
			break;
	}
	if (iVar0 != 0)
	{
		UNK_0xF9647457141B11A7(func_85(func_86()), func_84(func_86()), func_83(), func_82(), iParam0, iVar0);
	}
	func_81(iVar0);
	func_76(iVar0);
}

void func_76(int iParam0)
{
	bool bVar0;

	bVar0 = func_80(3968, -1, 0);
	bVar0 = (bVar0 + iParam0);
	if (bVar0 < 0)
	{
		bVar0 = false;
	}
	if (bVar0 > 9999)
	{
		bVar0 = 9999;
	}
	Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_490 = bVar0;
	func_77(3968, bVar0, -1, 1, 0);
}

void func_77(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_79();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

int func_79()
{
	return Global_1312745;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_78(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_81(int iParam0)
{
	int iVar0;

	iVar0 = UNK_0xD803B885F5E47A62();
	Global_1628237[iVar0 /*615*/].f_11.f_489 = (Global_1628237[iVar0 /*615*/].f_11.f_489 + iParam0);
	if (Global_1628237[iVar0 /*615*/].f_11.f_489 < -9999)
	{
		Global_1628237[iVar0 /*615*/].f_11.f_489 = 9999;
	}
	else if (Global_1628237[iVar0 /*615*/].f_11.f_489 > 9999)
	{
		Global_1628237[iVar0 /*615*/].f_11.f_489 = 9999;
	}
}

int func_82()
{
	if (Global_1674356.f_3 != 0)
	{
		return Global_1674356.f_3;
	}
	return -1;
}

int func_83()
{
	if (Global_1674356.f_2 != 0)
	{
		return Global_1674356.f_2;
	}
	return -1;
}

int func_84(int iParam0)
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1628237[iParam0 /*615*/].f_11.f_8[1];
}

int func_85(int iParam0)
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1628237[iParam0 /*615*/].f_11.f_8[0];
}

int func_86()
{
	return Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11;
}

bool func_87(bool bParam0)
{
	return func_88(UNK_0xD803B885F5E47A62(), bParam0);
}

int func_88(int iParam0, bool bParam1)
{
	return func_89(iParam0, bParam1, 1);
}

int func_89(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam0 == func_28())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_90(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0 /*615*/].f_11;
	if (iVar0 != func_28() && Global_1628237[iVar0 /*615*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_90(int iParam0, int iParam1)
{
	if (iParam0 != func_28())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_28())
		{
			if (Global_1628237[iParam0 /*615*/].f_11 == iParam0 && Global_1628237[iParam0 /*615*/].f_11.f_450 == iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

void func_91(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;

	if (bParam1)
	{
		if (UNK_0xC6F697B2083C83D4())
		{
			UNK_0x31A33F7BCB08CB80(false);
		}
	}
	if (func_104())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			bParam3 = true;
		}
	}
	if (!UNK_0x8CD06866876216F2())
	{
		bVar0 = iParam2;
		UNK_0x98E4DC66A651C9FA(bParam0, bParam1, bVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || UNK_0xA14BB9332558B949())
		{
			bVar1 = false;
		}
		if (!func_102())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (UNK_0x40B8C182D63932FC(bParam0) && (UNK_0xE1DBBD6CE209517C(bParam0) || bParam3 == 1))
		{
			if (bParam3 && UNK_0x437347B10A200C4B(UNK_0x9539D44F3E4492F6(bParam0), 0))
			{
				return;
			}
			bVar27 = UNK_0x9539D44F3E4492F6(bParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && UNK_0x8CD06866876216F2())
				{
					UNK_0x30134914EFF0516E(1);
				}
				else if (bVar14 || (!func_100(UNK_0xD803B885F5E47A62(), 0) && !func_99()))
				{
					UNK_0x4A4806F9D471E491(bVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (UNK_0x8CD06866876216F2() && !bVar19)
					{
						UNK_0x30134914EFF0516E(0);
					}
					Global_2425662[bParam0 /*421*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_96(0, 0, 0);
					if (bVar25)
					{
						UNK_0x066C43E677C08D5C();
					}
				}
				if (!func_95(bVar27) && !UNK_0x20906E1D6BDC7044(bVar27))
				{
					if (!bVar22)
					{
						UNK_0x20641932E5104B25(bVar27, true, 0);
					}
				}
				if (!UNK_0xD59B17D2DFF98E26(bVar27))
				{
					if (!bVar21)
					{
						UNK_0x1E9649458B15960F(bVar27, false);
					}
					UNK_0x120A395B0ECB8EA5(bVar27, true);
				}
				else if (!bVar21)
				{
					UNK_0x1E9649458B15960F(bVar27, false);
				}
				UNK_0x25C5402CC10F76CD(bVar27, true);
				UNK_0x62DE699599F0417E(bParam0, 0);
				UNK_0x7569764C11F70C0A(bParam0, 0);
				if (UNK_0xCCBA4C0B3BD2AB7B(bVar27) && UNK_0x8A83E339B374E53A(bVar27))
				{
					UNK_0xE7EE28867F07D06D(bVar27);
				}
				UNK_0x46CB381A452EF99D(bVar27, 1);
				if (UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()) == 0)
				{
					func_94();
					func_93();
				}
				if (UNK_0x0C2635BB5127C8FB())
				{
					if (!bVar23)
					{
					}
				}
				if (UNK_0xEB880D98B5988D0C())
				{
				}
				Global_2425662[bParam0 /*421*/].f_245 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405072.f_2672)
				{
					Global_2405072.f_2672 = 0;
				}
			}
			else
			{
				if (!func_95(bVar27) && !UNK_0x20906E1D6BDC7044(bVar27))
				{
					if (!bVar22)
					{
						UNK_0x20641932E5104B25(bVar27, !bVar15, 0);
					}
					if (!UNK_0xD59B17D2DFF98E26(bVar27))
					{
						if (!bVar21)
						{
							UNK_0x1E9649458B15960F(bVar27, bVar16);
						}
						if (!bVar16)
						{
							UNK_0x120A395B0ECB8EA5(bVar27, true);
						}
					}
					if (func_92(Global_4456448.f_232883))
					{
						UNK_0x1E9649458B15960F(bVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					UNK_0x62DE699599F0417E(bParam0, 0);
				}
				else
				{
					UNK_0x62DE699599F0417E(bParam0, 1);
				}
				UNK_0x25C5402CC10F76CD(bVar27, bVar17);
				if (bVar3)
				{
					if (!UNK_0x2EF364CB160B45F2(bVar27) && !UNK_0x405E212DDE472467(bVar27, 0))
					{
						UNK_0x327AAEE25F323797(bVar27);
					}
				}
			}
			bVar28 = false;
			if (bVar2)
			{
				bVar28 = (bVar28 || 2);
			}
			if (bVar3)
			{
				bVar28 = (bVar28 || 4);
			}
			if (bVar4)
			{
				bVar28 = (bVar28 || 8);
			}
			if (bVar5)
			{
				bVar28 = (bVar28 || 16);
			}
			if (bVar6)
			{
				bVar28 = (bVar28 || 32);
			}
			if (bVar7)
			{
				bVar28 = (bVar28 || 64);
			}
			if (bVar8)
			{
				bVar28 = (bVar28 || 128);
			}
			if (bVar9)
			{
				bVar28 = (bVar28 || 256);
			}
			if (bVar10)
			{
				bVar28 = (bVar28 || 512);
			}
			if (bVar11)
			{
				bVar28 = (bVar28 || 1024);
			}
			if (bVar12)
			{
				bVar28 = (bVar28 || 2048);
			}
			if (bVar13)
			{
				bVar28 = (bVar28 || 4096);
			}
			UNK_0x98E4DC66A651C9FA(bParam0, bParam1, bVar28);
		}
	}
}

bool func_92(int iParam0)
{
	return iParam0 == 17;
}

void func_93()
{
	vector3 vVar0;

	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_94()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

bool func_95(bool bParam0)
{
	int iVar0;

	if (UNK_0x405E212DDE472467(bParam0, 1))
	{
		return true;
	}
	else
	{
		iVar0 = UNK_0xD1960163A3042274(bParam0, -1794415470);
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

void func_96(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (UNK_0x437347B10A200C4B(bParam1, 0))
	{
	}
	if (bParam0 == 1)
	{
		if (UNK_0xC844350D5D58C99A(bParam1))
		{
			if (UNK_0x34BFC6F0CB887BC2(bParam1))
			{
				if (!UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), UNK_0x83FACCC48B68F9D1(bParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_98();
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(Global_2359302.f_67, true))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						UNK_0x398B6B43792F03FE(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				UNK_0x5D96D8530B3D0904(&(Global_2359302.f_67), true);
			}
		}
		if (func_100(UNK_0xD803B885F5E47A62(), 0))
		{
			UNK_0xD51AAA59D51D8056(bParam0, bParam1, 1);
		}
		else
		{
			UNK_0x7AEFB64DFEBF60B0(bParam0, bParam1);
		}
		UNK_0xF374D547F2AC15B0(bParam0, bParam1);
		func_97(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_97(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xD8B681091EBE4064(iVar0, bParam1, 1);
	}
}

void func_98()
{
	int iVar0;

	if (!UNK_0xB7DDF77EF860941D())
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = UNK_0xA4FD7964FEE91ED8(iVar0);
				iVar0++;
			}
			UNK_0x5D96D8530B3D0904(&(Global_2359302.f_67), 2);
			UNK_0x5D96D8530B3D0904(&(Global_2359302.f_67), false);
		}
	}
}

bool func_99()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_100(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_101(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[bParam0 /*876*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (UNK_0x40B8C182D63932FC(bParam0))
		{
			bVar0 = UNK_0x08067D4957B73C02(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_101(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
	}
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

bool func_102()
{
	if (func_103() == 0)
	{
		return true;
	}
	return false;
}

int func_103()
{
	return Global_1312467.f_18;
}

bool func_104()
{
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return true;
	}
	return false;
}

void func_105(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (UNK_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = UNK_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = UNK_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = UNK_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 1;
	}
}

void func_106()
{
	int iVar0;

	if (bLocal_50)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_107(Global_42383[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	iVar0 = UNK_0x09AC81E49EA267F7(500, 3000);
	vLocal_60.x = 5;
	Local_55.f_2 = (SYSTEM::TIMERA() + iVar0);
}

bool func_107(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_118();
	if (iVar0 == -2)
	{
		return false;
	}
	if (UNK_0xEB6A8945D1AC98A1(Local_43.f_1))
	{
		if (UNK_0x405E212DDE472467(Local_43.f_1, 0) || UNK_0x81A5359F25512A04(Local_43.f_1))
		{
			return false;
		}
		if (UNK_0x4B111E6C3450F2E0(Local_43.f_1))
		{
			return false;
		}
		if (func_114(Local_43.f_1))
		{
			return false;
		}
	}
	if ((Global_42383[iLocal_64 /*5*/].f_3 < 3 && Global_42383[iLocal_64 /*5*/].f_3 != 0) && Global_42383[iLocal_64 /*5*/].f_3 > Global_42383[iLocal_64 /*5*/].f_4)
	{
		return false;
	}
	if ((Global_42383[iLocal_64 /*5*/].f_4 < 9 && Global_42383[iLocal_64 /*5*/].f_4 != 0) && Global_42383[iLocal_64 /*5*/].f_4 > Global_42383[iLocal_64 /*5*/].f_3)
	{
		return false;
	}
	bVar1 = func_113(iParam0);
	if (UNK_0xEA6BC48857E0AC4C(bVar1))
	{
		return false;
	}
	if (func_114(Local_43.f_1))
	{
		return false;
	}
	UNK_0x4E09E67A27F104A7(bVar1);
	if (func_110(Local_43.f_1))
	{
		bVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		bVar3 = "";
		switch (iParam0)
		{
			case 0:
				bVar3 = "";
				break;
			case 2:
				bVar3 = "VERY_TO_MODERATE";
				break;
			case 1:
				bVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			default:
				break;
		}
		if (!UNK_0xEA6BC48857E0AC4C(bVar2) && !UNK_0xEA6BC48857E0AC4C(bVar3))
		{
			UNK_0x3F423BF5B8125A50(bVar2);
			while (!UNK_0xB4AE0788C1587752(bVar2))
			{
				SYSTEM::WAIT(0);
			}
			if (!UNK_0xEB6A8945D1AC98A1(Local_43.f_1))
			{
				UNK_0xC6EB89C59F2AF6B8(Local_43.f_1, bVar2, bVar3, 1.5f, -1.5f, -1, 48, false, 0, 0, 0);
				bLocal_54 = bVar3;
			}
		}
	}
	if (!UNK_0x59F02DA2266A744C(bVar1))
	{
		return false;
	}
	if (UNK_0xEB6A8945D1AC98A1(Local_43.f_1))
	{
		return false;
	}
	UNK_0x79C43E2BAC7C696F(Local_43.f_1, bVar1, 0.75f);
	if (UNK_0x6C3F127AAF415E69() == 4)
	{
		UNK_0x8A3A3812E5562303(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	UNK_0x6569264C5DBAC6F6(Local_43.f_1, 0, bVar1, "idle", 2f, 1);
	vLocal_60.f_2 = bVar1;
	bLocal_51 = true;
	iVar4 = 0;
	switch (func_70(Local_43.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		default:
			if (UNK_0x34BFC6F0CB887BC2(Local_43.f_1))
			{
				if (!func_108())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (UNK_0xCED082ADD3739B9F(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	UNK_0xDCDFC17557D5706C(Local_43.f_1, "mood_drunk_1", iVar4);
	UNK_0x9DD8618CA5BF832D(Local_43.f_1, 200, true);
	UNK_0x9DD8618CA5BF832D(Local_43.f_1, 46, true);
	UNK_0xA245D14CC59CDD36(Local_43.f_1, 0);
	UNK_0xBAFED2F6486F771A(Local_43.f_1, 262144, true);
	UNK_0x8024D396B2F92112(Local_43.f_1, 1);
	return true;
}

int func_108()
{
	return func_109(UNK_0xD803B885F5E47A62());
}

int func_109(bool bParam0)
{
	if (UNK_0x134B62B726CEC8E6(UNK_0x9539D44F3E4492F6(bParam0)) == joaat("MP_F_FREEMODE_01"))
	{
		return 1;
	}
	return 0;
}

bool func_110(bool bParam0)
{
	vector3 vVar0;

	if (UNK_0x405E212DDE472467(bParam0, 1) || UNK_0x81A5359F25512A04(bParam0))
	{
		return false;
	}
	if (UNK_0xD1960163A3042274(bParam0, -2017877118) != 7)
	{
		return false;
	}
	if (UNK_0xD1960163A3042274(bParam0, 1785177548) != 7)
	{
		return false;
	}
	if (UNK_0x168558745A6AC21E(bParam0))
	{
		return false;
	}
	if (UNK_0xE934758D273C899A(bParam0))
	{
		return false;
	}
	if (UNK_0x869EFD0BC0868856(bParam0))
	{
		return false;
	}
	if (UNK_0x39E5E51C6E21A69B(bParam0))
	{
		return false;
	}
	if (Global_73825)
	{
		return false;
	}
	if (func_112())
	{
		return false;
	}
	if (bParam0 == UNK_0x16F2683693E537C9())
	{
		if (!UNK_0x552B9E1FD4519F80(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
		if (!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
		if (UNK_0x85651FDAB8414096(UNK_0xD803B885F5E47A62()) || UNK_0xBBFFD1937ED16008(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
		if (func_111())
		{
			return false;
		}
	}
	vVar0 = { UNK_0x56E9E0FD5ACCD35D(bParam0) };
	if (SYSTEM::VMAG2(vVar0) >= (1f * 1f))
	{
		return false;
	}
	return true;
}

bool func_111()
{
	return Global_98796.f_346 > 0;
}

bool func_112()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
		case 1:
			return "move_m@drunk@slightlydrunk";
		case 2:
			return "move_m@drunk@moderatedrunk";
	}
	return "";
}

bool func_114(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_115(bParam0);
	bVar1 = func_113(iVar0);
	if (UNK_0xEA6BC48857E0AC4C(vLocal_60.z))
	{
		if (UNK_0xEA6BC48857E0AC4C(bVar1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return UNK_0x7F8A39872A07D2CE(vLocal_60.z, bVar1);
}

int func_115(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0 == 0)
	{
		return -1;
	}
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return -1;
	}
	iVar0 = func_117(bParam0);
	iVar1 = func_116(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1 /*5*/].f_2;
}

int func_116(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42383[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_117(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (bParam0 == Global_42383[iVar0 /*5*/].f_1)
		{
			return Global_42383[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_118()
{
	int iVar0;

	if (Local_55 == -2)
	{
		return -2;
	}
	if (Local_55 == -1)
	{
		return -1;
	}
	iVar0 = (Local_55 - SYSTEM::TIMERA());
	if (iVar0 < 0)
	{
		return -2;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_119()
{
	if (bLocal_50)
	{
		return;
	}
	if (!func_120())
	{
		vLocal_60.x = 5;
		Local_55.f_2 = SYSTEM::TIMERA() + 5000;
		return;
	}
	vLocal_60.x = 6;
}

bool func_120()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (Local_43.f_4 == 0)
	{
		return false;
	}
	if (UNK_0x437347B10A200C4B(Local_43.f_4, 0))
	{
		return false;
	}
	vVar0 = { UNK_0x68F4C0EC296D3901(Local_43.f_1, true) };
	vVar3 = { UNK_0x68F4C0EC296D3901(Local_43.f_4, true) };
	fVar6 = UNK_0x0EB28750412C3A5A(vVar0, vVar3, 1);
	return fVar6 < 7f;
}

void func_121()
{
	int iVar0;
	bool bVar1;

	if (Local_43.f_1 == UNK_0x16F2683693E537C9())
	{
		UNK_0x38C3A68D7861DCFD(0, 36, 1);
		if (UNK_0x5F596B0E13677FE9(Local_43.f_1))
		{
			if (Global_42383[iLocal_64 /*5*/].f_2 == 0 || Global_42383[iLocal_64 /*5*/].f_2 == 2)
			{
				UNK_0x6E8BDA9057564534(Local_43.f_1, 0, 0);
			}
		}
		if (UNK_0x82F88FD400E98881(Local_43.f_1))
		{
			UNK_0xDB4B1656BA06B94E(Local_43.f_1, 0);
		}
	}
	if (Local_55 != -2)
	{
		if (Local_55 == -1)
		{
			if (Global_42383[iLocal_64 /*5*/].f_2 != 0)
			{
				Global_42383[iLocal_64 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_55 - SYSTEM::TIMERA());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_42383[iLocal_64 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_42383[iLocal_64 /*5*/].f_2 = 2;
					if (!func_107(2))
					{
						Global_42383[iLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_42383[iLocal_64 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_42383[iLocal_64 /*5*/].f_2 = 1;
					if (!func_107(2))
					{
						Global_42383[iLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_42383[iLocal_64 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!UNK_0xEA6BC48857E0AC4C(bLocal_54))
	{
		if (!func_110(Local_43.f_1))
		{
			bVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (UNK_0xB4ECF989E2C1DAC8(Local_43.f_1, bVar1, bLocal_54, 3))
			{
				UNK_0xFB131B855F2FD560(Local_43.f_1, bVar1, bLocal_54, -4f);
			}
			bLocal_54 = "";
			return;
		}
	}
	if ((Global_42383[iLocal_64 /*5*/].f_3 >= 10 || Global_42383[iLocal_64 /*5*/].f_4 >= 15) || UNK_0xEAE0D21A50E6C7F4(Global_42599, 9))
	{
		if (UNK_0xD1960163A3042274(Local_43.f_1, 1785177548) == 1 && !UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_3, 27))
		{
			return;
		}
		if (UNK_0x7DECE00E09F41C95(Local_43.f_1))
		{
			return;
		}
		if (UNK_0x405E212DDE472467(Local_43.f_1, 1))
		{
			if (Global_42383[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42383[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42383[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42383[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((UNK_0x8CD06866876216F2() && Local_43.f_1 == UNK_0x16F2683693E537C9()) && func_132(UNK_0xD803B885F5E47A62())) && Global_262145.f_23843)
		{
			if (Global_42383[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42383[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42383[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42383[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((UNK_0x8CD06866876216F2() && Local_43.f_1 == UNK_0x16F2683693E537C9()) && func_131())
		{
			if (Global_42383[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42383[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42383[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42383[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((UNK_0x8CD06866876216F2() && UNK_0xA14BB9332558B949()) && func_130())
		{
			if (Global_42383[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42383[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42383[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42383[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((UNK_0x8CD06866876216F2() && Local_43.f_1 == UNK_0x16F2683693E537C9()) && func_129(UNK_0xD803B885F5E47A62())) && Global_262145.f_26243)
		{
			if (Global_42383[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42383[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42383[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42383[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((UNK_0x8CD06866876216F2() && Local_43.f_1 == UNK_0x16F2683693E537C9()) && func_126(UNK_0xD803B885F5E47A62())) && Global_262145.f_26276)
		{
			if (Global_42383[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42383[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42383[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42383[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((UNK_0x8CD06866876216F2() && Local_43.f_1 == UNK_0x16F2683693E537C9()) && func_122(UNK_0xD803B885F5E47A62()) == 15)
		{
			if (Global_42383[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42383[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42383[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42383[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((UNK_0x8CD06866876216F2() && Local_43.f_1 == UNK_0x16F2683693E537C9()) && Global_73825) && !Global_42356)
		{
			if (Global_42383[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42383[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42383[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42383[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		vLocal_60.f_1 = 3;
		return;
	}
	if (!bLocal_51)
	{
		return;
	}
	if (!func_114(Local_43.f_1))
	{
		return;
	}
}

int func_122(int iParam0)
{
	if (func_125(iParam0) == 243)
	{
		return func_123(iParam0);
	}
	return -1;
}

int func_123(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

bool func_124(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

int func_125(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_126(bool bParam0)
{
	if (bParam0 != func_28())
	{
		if (func_128(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_127(Global_2425662[bParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return false;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
		case 81:
			return 5;
		case 82:
			return 6;
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
		case 88:
			return 8;
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
		case 101:
			return 10;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
		case 117:
			return 12;
		case 122:
			return 13;
		case 123:
			return 14;
		case 124:
			return 15;
		case 125:
			return 16;
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
		case 145:
			return 18;
	}
	return -1;
}

bool func_128(bool bParam0, bool bParam1, bool bParam2)
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

bool func_129(bool bParam0)
{
	if (bParam0 != func_28())
	{
		if (func_128(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_127(Global_2425662[bParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return false;
}

bool func_130()
{
	return Global_2450632.f_19;
}

bool func_131()
{
	return Global_2513609;
}

bool func_132(bool bParam0)
{
	if (bParam0 != func_28())
	{
		if (func_128(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_127(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_133()
{
	bool bVar0;

	if (!UNK_0x0E0E6175453415CB(Local_43.f_1))
	{
		return false;
	}
	bVar0 = false;
	bVar0 = UNK_0x6937EA2286828455(Local_43.f_1, 0);
	if (!UNK_0xDF1306B443CD3D15(bVar0, 0))
	{
		return false;
	}
	if (!UNK_0xA30B8362589C124A(bVar0, -1, 0) == Local_43.f_1)
	{
		return false;
	}
	Local_43.f_4 = bVar0;
	vLocal_60.x = 7;
	return true;
}

void func_134()
{
	if (!UNK_0x405E212DDE472467(Local_43.f_1, 0))
	{
		vLocal_60.x = 4;
		return;
	}
}

void func_135()
{
	bool bVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!bLocal_50)
	{
		return;
	}
	if (!UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		return;
	}
	if (!UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
	{
		return;
	}
	if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
	fVar1 = UNK_0x9C66D99E63E8E24C(bVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	vVar2 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	vVar5 = { vVar2 - Vector(3f, 30f, 30f) };
	vVar8 = { vVar2 + Vector(3f, 30f, 30f) };
	if (!UNK_0x9E9FD30CF64A88A8(vVar5, vVar8) && !UNK_0x029064EA9141FCC2(vVar5, vVar8))
	{
		return;
	}
	UNK_0xCB9603FE12CFDEF4(UNK_0xD803B885F5E47A62(), 1, 0);
	UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
	func_11(73, 1);
}

void func_136()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	int iVar4;

	bVar0 = Local_43.f_1;
	if (UNK_0x405E212DDE472467(Local_43.f_1, 0))
	{
		bVar1 = UNK_0x6937EA2286828455(Local_43.f_1, 0);
		iVar2 = UNK_0xA30B8362589C124A(bVar1, -1, 0);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (UNK_0x8CD06866876216F2() && !UNK_0xAFE0D3608EDA7039(bVar1))
		{
			return;
		}
		bVar0 = bVar1;
	}
	else if (!UNK_0x16F2683693E537C9() == Local_43.f_1)
	{
		return;
	}
	else if (!UNK_0x6C3F127AAF415E69() == 4)
	{
		fLocal_53 = 0f;
		func_138(bVar0, 0f);
		return;
	}
	if (SYSTEM::TIMERA() < Local_55.f_4)
	{
		func_138(bVar0, fLocal_53);
		return;
	}
	if (UNK_0xEC560E589DF8370E(bVar0))
	{
		Local_55.f_4 = SYSTEM::TIMERA() + 2000;
	}
	else
	{
		Local_55.f_4 = SYSTEM::TIMERA() + 1000;
	}
	fVar3 = UNK_0x9C66D99E63E8E24C(bVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_53 = 0f;
		func_138(bVar0, 0f);
		return;
	}
	if (Local_55.f_1 == -1)
	{
		fLocal_53 = func_137(bVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_55.f_1 - SYSTEM::TIMERA());
		if (iVar4 < 5000)
		{
			fLocal_53 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_53 = func_137(bVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_53 = func_137(bVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_53 = func_137(bVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_53 = func_137(bVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_53 = func_137(bVar0, 0.13f, 0.06f);
		}
	}
	func_138(bVar0, fLocal_53);
}

float func_137(bool bParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = UNK_0x79833B02DBD2A244(-fParam1, fParam1);
	fVar1 = UNK_0x79833B02DBD2A244(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (UNK_0xEC560E589DF8370E(bParam0))
	{
		if (UNK_0xCE8BF704469FA7EF(UNK_0x940C1429253D3B1B(bParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		bVar2 = UNK_0x134B62B726CEC8E6(bParam0);
		if (UNK_0x7D8B2A8F9EA82DB7(bVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_21(fVar0, -1f, 1f);
	return fVar0;
}

void func_138(bool bParam0, float fParam1)
{
	if (UNK_0x8CD06866876216F2() && !UNK_0xAFE0D3608EDA7039(bParam0))
	{
		return;
	}
	if (UNK_0xEC560E589DF8370E(bParam0))
	{
		UNK_0x95AFA8C4F50B2E00(UNK_0x940C1429253D3B1B(bParam0), fParam1);
	}
	else if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0xBB59E14911FBDDF9(UNK_0x96A5FE5834B81CE7(bParam0), fParam1);
	}
}

void func_139()
{
	bool bVar0;

	if (!UNK_0x405E212DDE472467(Local_43.f_1, 0))
	{
		vLocal_60.x = 4;
		return;
	}
	if (UNK_0x8CD06866876216F2())
	{
		if (Global_42383[iLocal_64 /*5*/].f_3 >= 10 || Global_42383[iLocal_64 /*5*/].f_4 >= 15)
		{
			if (Global_42383[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42383[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42383[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42383[iLocal_64 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_50)
	{
		return;
	}
	bVar0 = UNK_0x6937EA2286828455(Local_43.f_1, 0);
	if (!UNK_0xDF1306B443CD3D15(bVar0, 0))
	{
		UNK_0x75CDA8644CD3B5F5(Local_43.f_1, 0, 0);
		vLocal_60.x = 11;
		return;
	}
}

void func_140()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (SYSTEM::TIMERA() <= Local_55.f_3)
	{
		return;
	}
	iVar0 = UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), 355471868);
	if (!iVar0 == 7)
	{
		Local_55.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!UNK_0x405E212DDE472467(Local_43.f_1, 0))
	{
		vLocal_60.x = 4;
		Local_55.f_3 = -2;
		return;
	}
	bVar1 = UNK_0x6937EA2286828455(Local_43.f_1, 0);
	iVar2 = UNK_0xA30B8362589C124A(bVar1, -1, 0);
	if (iVar2 == Local_43.f_1)
	{
		func_141();
		Local_55.f_3 = -2;
		return;
	}
	UNK_0x16A6C233289238AA(Local_43.f_1, bVar1, 0);
	vLocal_60.x = 9;
	Local_55.f_3 = SYSTEM::TIMERA() + 1000;
}

void func_141()
{
	if (vLocal_60.x == 10)
	{
		return;
	}
	vLocal_60.x = 10;
	if (iLocal_48 == -1)
	{
		return;
	}
	func_167(iLocal_48, 2, 5);
	Local_55.f_4 = SYSTEM::TIMERA();
	fLocal_53 = 0f;
}

void func_142()
{
	if (UNK_0x0E0E6175453415CB(Local_43.f_1))
	{
		vLocal_60.x = 10;
		return;
	}
	if (SYSTEM::TIMERA() < Local_55.f_3)
	{
		return;
	}
	vLocal_60.x = 4;
	Local_55.f_3 = -2;
}

void func_143()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!bLocal_50)
	{
	}
	bVar0 = false;
	bVar1 = false;
	if (bVar1 || UNK_0x0E0E6175453415CB(Local_43.f_1))
	{
		if (!bLocal_50)
		{
		}
		bVar0 = UNK_0x6937EA2286828455(Local_43.f_1, 0);
		if (!bVar0 == Local_43.f_4)
		{
			if (!bLocal_50)
			{
			}
			if (!bLocal_50)
			{
				if (!bLocal_50)
				{
				}
				UNK_0x75CDA8644CD3B5F5(Local_43.f_1, 0, 0);
				vLocal_60.x = 11;
				return;
			}
			Local_43.f_4 = bVar0;
		}
		if (bVar1)
		{
			if (!bLocal_50)
			{
			}
			func_141();
			return;
		}
		if (!bLocal_50)
		{
			if (!bLocal_50)
			{
			}
			func_141();
			return;
		}
		if (!bLocal_50)
		{
		}
		iVar2 = UNK_0xA30B8362589C124A(Local_43.f_4, -1, 0);
		if (iVar2 == Local_43.f_1)
		{
			func_141();
			return;
		}
		UNK_0x16A6C233289238AA(Local_43.f_1, bVar0, 0);
		vLocal_60.x = 9;
		Local_55.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!func_120())
	{
		UNK_0xA3BF0AA5A2608191(Local_43.f_1);
		vLocal_60.x = 4;
		return;
	}
	if (!bLocal_50)
	{
		iVar3 = UNK_0xD1960163A3042274(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!UNK_0x405E212DDE472467(Local_43.f_1, 0))
			{
				UNK_0xA3BF0AA5A2608191(Local_43.f_1);
				vLocal_60.x = 4;
				return;
			}
		}
	}
}

void func_144()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;

	if (bLocal_50)
	{
		return;
	}
	if (Local_43.f_4 == 0)
	{
		vLocal_60.x = 4;
		return;
	}
	if (!UNK_0xDF1306B443CD3D15(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		vLocal_60.x = 4;
		return;
	}
	vVar0 = { UNK_0x68F4C0EC296D3901(Local_43.f_1, true) };
	vVar3 = { UNK_0x68F4C0EC296D3901(Local_43.f_4, true) };
	fVar6 = UNK_0x0EB28750412C3A5A(vVar0, vVar3, 1);
	if (fVar6 > 3f)
	{
		if (!func_107(Global_42383[iLocal_64 /*5*/].f_2))
		{
			vLocal_60.x = 12;
			return;
		}
		vLocal_60.x = 5;
		Local_55.f_2 = SYSTEM::TIMERA() + 2000;
		return;
	}
	iVar7 = UNK_0xD6DF381716822EFE(Local_43.f_4);
	bVar8 = false;
	bVar9 = true;
	bVar8 = true;
	while (bVar9)
	{
		if (bVar8 < iVar7)
		{
			if (UNK_0xBBA8A868118C90ED(Local_43.f_4, bVar8, 0))
			{
				bVar9 = false;
			}
			else
			{
				bVar8++;
			}
		}
		else
		{
			bVar9 = false;
			bVar8 = -1;
		}
	}
	if (bVar8 == -1)
	{
		if (bVar8 == -1)
		{
			vLocal_60.x = 4;
			return;
		}
	}
	func_145();
	UNK_0x5B1D360B9C6F0A09(Local_43.f_1, Local_43.f_4, -1, bVar8, 2f, 1, 0);
	vLocal_60.x = 7;
}

void func_145()
{
	if (!UNK_0xC844350D5D58C99A(Local_43.f_1))
	{
		return;
	}
	if (!UNK_0xEB6A8945D1AC98A1(Local_43.f_1))
	{
		UNK_0x76D5D8AF296F50CE(Local_43.f_1, 1048576000 /* Float: 0.25f */);
		UNK_0xDDB2A6FA0667363C(Local_43.f_1);
		UNK_0x95E9A490A3D0029F(Local_43.f_1, 0, -8f);
		vLocal_60.f_2 = "";
		UNK_0x16BEAC335EC5109B(Local_43.f_1);
		UNK_0x9DD8618CA5BF832D(Local_43.f_1, 200, false);
		UNK_0x9DD8618CA5BF832D(Local_43.f_1, 46, false);
		UNK_0xA245D14CC59CDD36(Local_43.f_1, 1);
		UNK_0xBAFED2F6486F771A(Local_43.f_1, 262144, false);
		UNK_0x8024D396B2F92112(Local_43.f_1, 0);
	}
	if (!bLocal_51)
	{
		return;
	}
	bLocal_51 = false;
}

void func_146()
{
	if (SYSTEM::TIMERA() < Local_55.f_2)
	{
		func_121();
		return;
	}
	func_147();
	Local_55.f_2 = -2;
	vLocal_60.x = 12;
}

int func_147()
{
	if (!func_114(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_51)
	{
		return 0;
	}
	func_148(Local_43.f_1);
	vLocal_60.f_2 = "";
	Global_2537071.f_4540 = 1;
	return 1;
}

void func_148(bool bParam0)
{
	UNK_0x76D5D8AF296F50CE(bParam0, 1048576000 /* Float: 0.25f */);
	UNK_0x95E9A490A3D0029F(bParam0, 0, -8f);
	UNK_0x9DD8618CA5BF832D(bParam0, 200, false);
	UNK_0xA245D14CC59CDD36(bParam0, 1);
	UNK_0xBAFED2F6486F771A(bParam0, 262144, false);
	UNK_0x8024D396B2F92112(bParam0, 0);
}

void func_149()
{
	int iVar0;

	if (Local_55 == -1)
	{
		Global_42383[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_42383[iLocal_64 /*5*/].f_3 < 3 && Global_42383[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_42383[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_42383[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_42383[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_42383[iLocal_64 /*5*/].f_2 = 1;
		}
	}
	if (UNK_0x405E212DDE472467(Local_43.f_1, 0))
	{
		vLocal_60.x = 10;
		return;
	}
	if (func_114(Local_43.f_1))
	{
		vLocal_60.x = 12;
		return;
	}
	if (Local_55 == -2)
	{
		return;
	}
	if (!func_107(Global_42383[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	vLocal_60.x = 12;
}

void func_150()
{
}

void func_151()
{
	int iVar0;
	int iVar1;

	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_42464[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_42464[iVar1 /*6*/].f_1 == iLocal_48)
			{
				func_153(iVar1);
				func_152(iVar1);
			}
			else if (Global_42464[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_49 == -1)
				{
					if (iLocal_49 == Global_42464[iVar1 /*6*/])
					{
						func_153(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_152(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_42464[iParam0 /*6*/] = -1;
	Global_42464[iParam0 /*6*/].f_1 = -1;
	Global_42464[iParam0 /*6*/].f_2 = 6;
	Global_42464[iParam0 /*6*/].f_3 = 0;
	Global_42464[iParam0 /*6*/].f_4 = 0;
}

void func_153(int iParam0)
{
	int iVar0;

	iVar0 = Global_42464[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_174();
			break;
		case 2:
			func_157(Global_42464[iParam0 /*6*/].f_4);
			break;
		case 3:
			func_156(Global_42464[iParam0 /*6*/].f_5);
			break;
		case 4:
			func_155();
			break;
		case 5:
			func_154();
			break;
		case 0:
			break;
		case 6:
			break;
		default:
			break;
	}
}

void func_154()
{
	vLocal_60.f_1 = 2;
}

void func_155()
{
	int iVar0;

	Global_42383[iLocal_64 /*5*/].f_4++;
	if (Local_55 == -1)
	{
		Global_42383[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_42383[iLocal_64 /*5*/].f_4 < 9 && Global_42383[iLocal_64 /*5*/].f_4 != 0)
	{
		Global_42383[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_42383[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_42383[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_42383[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_42383[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_156(int iParam0)
{
	int iVar0;

	Global_42383[iLocal_64 /*5*/].f_3 = (Global_42383[iLocal_64 /*5*/].f_3 + iParam0);
	if (Local_55 == -1)
	{
		Global_42383[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_42383[iLocal_64 /*5*/].f_3 < 3 && Global_42383[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_42383[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_42383[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_42383[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_42383[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_42383[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_157(int iParam0)
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_55.f_1 = (Local_55.f_1 + iParam0);
	Local_55 = (Local_55 + iParam0);
}

void func_158()
{
	int iVar0;

	if (!bLocal_50)
	{
		iLocal_63 = -1;
		return;
	}
	if (iLocal_63 < 0)
	{
		iLocal_63 = UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62());
		return;
	}
	iVar0 = UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62());
	if (iVar0 != iLocal_63)
	{
		if (iVar0 > iLocal_63)
		{
			func_159();
		}
		iLocal_63 = iVar0;
		return;
	}
}

void func_159()
{
}

void func_160()
{
	if (!Local_55 == -1)
	{
		if (!Local_55 == -2)
		{
			if (SYSTEM::TIMERA() >= Local_55)
			{
				func_145();
				Local_55 = -2;
				vLocal_60.x = 12;
			}
		}
		if (SYSTEM::TIMERA() > Local_55.f_1)
		{
			func_174();
		}
	}
}

void func_161(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42464[iVar0 /*6*/])
		{
			func_152(iVar0);
		}
		iVar0++;
	}
}

void func_162()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	vLocal_60.x = 4;
	if (!UNK_0x437347B10A200C4B(Local_43.f_1, 0))
	{
		if (UNK_0x0E0E6175453415CB(Local_43.f_1))
		{
			vLocal_60.x = 10;
		}
	}
	if (bLocal_50)
	{
		func_165();
		func_11(71, 1);
		if (UNK_0x8CD06866876216F2())
		{
			iVar0 = func_80(2057, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_163(iVar1);
			}
			func_77(2057, iVar0 + 1, -1, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			UNK_0x6FB46C25CCB7E6D5(joaat("SP0_SP_NUM_TIMES_DRUNK"), &iVar2, -1);
			UNK_0x6FB46C25CCB7E6D5(joaat("SP1_SP_NUM_TIMES_DRUNK"), &iVar3, -1);
			UNK_0x6FB46C25CCB7E6D5(joaat("SP2_SP_NUM_TIMES_DRUNK"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_163(iVar6);
			}
			switch (func_67())
			{
				case 0:
					UNK_0xCDC520E5E48E63D9(joaat("SP0_SP_NUM_TIMES_DRUNK"), iVar2 + 1, 1);
					break;
				case 1:
					UNK_0xCDC520E5E48E63D9(joaat("SP1_SP_NUM_TIMES_DRUNK"), iVar3 + 1, 1);
					break;
				case 2:
					UNK_0xCDC520E5E48E63D9(joaat("SP2_SP_NUM_TIMES_DRUNK"), iVar4 + 1, 1);
					break;
			}
		}
		vLocal_60.f_1 = 1;
		return;
	}
	vLocal_60.f_1 = 12;
	if (Local_55 == -1)
	{
		Global_42383[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_42383[iLocal_64 /*5*/].f_3 < 3 && Global_42383[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_42383[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_55 - SYSTEM::TIMERA());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_42383[iLocal_64 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_42383[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_42383[iLocal_64 /*5*/].f_2 = 1;
		}
	}
}

void func_163(int iParam0)
{
	int iVar0;

	iVar0 = func_164(81);
	Global_2414418[iVar0 /*83*/] = 81;
	Global_2414418[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2414418[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_164(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414418[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414418[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_165()
{
}

void func_166()
{
	Local_55 = Local_43.f_2;
	Local_55.f_1 = Local_43.f_3;
	Local_55.f_2 = -2;
	Local_55.f_3 = -2;
}

void func_167(int iParam0, int iParam1, int iParam2)
{
	func_168(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_168(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_170(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_169();
	if (iVar0 == -1)
	{
		return;
	}
	Global_42464[iVar0 /*6*/] = iParam0;
	Global_42464[iVar0 /*6*/].f_1 = iParam1;
	Global_42464[iVar0 /*6*/].f_2 = iParam2;
	Global_42464[iVar0 /*6*/].f_3 = iParam3;
	Global_42464[iVar0 /*6*/].f_4 = iParam4;
	Global_42464[iVar0 /*6*/].f_5 = iParam5;
}

int func_169()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42464[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_170(int iParam0, int iParam1, int iParam2)
{
	if (func_171(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_171(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_42464[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_42464[iVar0 /*6*/])
			{
				if (iParam1 == Global_42464[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_172()
{
	int iVar0;

	bLocal_50 = false;
	if (Local_43.f_1 == UNK_0x16F2683693E537C9())
	{
		bLocal_50 = true;
		Global_42595 = 1;
		Global_42597++;
	}
	if (!UNK_0x437347B10A200C4B(Local_43.f_1, 0))
	{
		iVar0 = func_70(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				UNK_0x4F39CC3882DD074E(Local_43.f_1, "AMANDA_DRUNK");
				break;
			case 19:
				UNK_0x4F39CC3882DD074E(Local_43.f_1, "LAMAR_DRUNK");
				break;
		}
	}
}

void func_173()
{
	if (!iLocal_48 == -1)
	{
		return;
	}
	iLocal_48 = func_117(Local_43.f_1);
	if (iLocal_48 == -1)
	{
		return;
	}
	iLocal_64 = func_116(iLocal_48);
}

void func_174()
{
	int iVar0;

	if (!func_34(0) && !func_34(3))
	{
		if (!UNK_0x437347B10A200C4B(Local_43.f_1, 0))
		{
			iVar0 = func_70(Local_43.f_1);
			if (Global_42383[iLocal_64 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_176(Local_43.f_1, "POST_STONED", 24);
						break;
					case 1:
						func_176(Local_43.f_1, "POST_STONED", 24);
						break;
					case 2:
						func_176(Local_43.f_1, "POST_STONED", 24);
						break;
				}
			}
			switch (iVar0)
			{
				case 17:
					UNK_0x4F39CC3882DD074E(Local_43.f_1, "AMANDA_NORMAL");
					break;
				case 19:
					UNK_0x4F39CC3882DD074E(Local_43.f_1, "LAMAR_NORMAL");
					break;
			}
		}
	}
	func_145();
	if (bLocal_50)
	{
		Global_42595 = 0;
	}
	func_175();
	UNK_0x8D17794CE3273D70(func_113(0));
	UNK_0x8D17794CE3273D70(func_113(2));
	UNK_0x8D17794CE3273D70(func_113(1));
	Global_1671188 = 0;
	if (UNK_0x8A22C4C08282BF26(joaat("APPEMAIL")) > 0)
	{
		func_41(0);
	}
	UNK_0x10FAF14A60A0DBE1();
}

void func_175()
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (UNK_0x437347B10A200C4B(Local_43.f_1, 0))
	{
		return;
	}
	bVar0 = Local_43.f_1;
	if (UNK_0x405E212DDE472467(Local_43.f_1, 0))
	{
		bVar1 = UNK_0x6937EA2286828455(Local_43.f_1, 0);
		iVar2 = UNK_0xA30B8362589C124A(bVar1, -1, 0);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		bVar0 = bVar1;
	}
	else if (!UNK_0x6C3F127AAF415E69() == 4 || !UNK_0x16F2683693E537C9() == Local_43.f_1)
	{
		return;
	}
	fLocal_53 = 0f;
	func_138(bVar0, 0f);
}

void func_176(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_177(iParam2), 1);
}

int func_177(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		case 2:
			return "SPEECH_PARAMS_BEAT";
		case 3:
			return "SPEECH_PARAMS_FORCE";
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		case 14:
			return "SPEECH_PARAMS_HELI";
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		default:
			break;
	}
	iVar0 = 0;
	return iVar0;
}

