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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	bool bLocal_80 = false;
	bool bLocal_81 = false;
	int iLocal_82 = 0;
	bool bLocal_83 = false;
	bool bLocal_84 = false;
	bool bLocal_85 = false;
	bool bLocal_86 = false;
	var uLocal_87 = 2;
	var uLocal_88 = 0;
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
	struct<5> Local_104 = { 0, 0, 0, 0, 0 } ;
	var uLocal_109 = 0;
	struct<60> Local_110 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	struct<9> Local_188 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	var uLocal_200 = 3;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204[5] = { 0, 0, 0, 0, 0 };
	vector3 vLocal_210[1] = {{ 0f, 0f, 0f } };
	struct<7> Local_214 = { 0, 0, -1, 0, 0, 0, -1 } ;
	struct<14> Local_221 = { 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	struct<9> Local_243 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_252 = 0;
	struct<13> Local_253 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	int iLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	struct<21> Local_323[2];
	int iLocal_366[2] = { 0, 0 };
	struct<5> Local_369[32];
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (!func_183(&uLocal_179))
	{
		func_182(&uLocal_179);
	}
	bVar2 = false;
	while (!bVar0)
	{
		SYSTEM::WAIT(0);
		if (func_173())
		{
			func_170();
		}
		if ((UNK_0x1C0640BA9A7327B3() % 1000) > 50)
		{
			bVar2 = true;
		}
		else
		{
			bVar2 = false;
		}
		if ((!func_169(UNK_0xA30EC016B12C03E4()) && func_154(UNK_0xA30EC016B12C03E4(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) || func_152(UNK_0xD803B885F5E47A62()))
		{
			if (func_151(UNK_0xA30EC016B12C03E4()))
			{
				if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_28 != -1)
				{
					iVar1 = Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_28;
					bVar0 = true;
					func_150(&uLocal_179);
				}
				else if (bVar2)
				{
				}
			}
			else if (func_152(UNK_0xD803B885F5E47A62()))
			{
				bVar0 = true;
				func_150(&uLocal_179);
			}
			else if (bVar2)
			{
			}
		}
		if (!bVar0 && func_149(&uLocal_179) >= 25f)
		{
			func_170();
		}
	}
	if (UNK_0x8CD06866876216F2())
	{
		func_140();
	}
	else
	{
		func_170();
	}
	iLocal_199 = UNK_0x57270EE11514DC67();
	Local_214.f_6 = Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_29;
	if (func_138(UNK_0xD803B885F5E47A62()))
	{
		Local_214.f_6 = Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310.f_6 + 32;
	}
	func_136(&(Local_214.f_5));
	func_135(&(Local_214.f_5));
	func_134(&uLocal_87);
	func_132(0, -1, 0);
	func_131(&vLocal_210);
	iLocal_82 = 0;
	func_130(&uLocal_200, &uLocal_204);
	Local_221.f_13 = Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_29;
	if (func_129(iVar1, 91))
	{
		iLocal_313 = 0;
	}
	else if (func_129(iVar1, 97))
	{
		iLocal_313 = 1;
	}
	else if (func_152(UNK_0xD803B885F5E47A62()))
	{
		Local_221.f_13 = Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310.f_6 + 32;
		iLocal_313 = 2;
	}
	func_126(&Local_323, iLocal_313);
	func_125(&uLocal_87, &Local_323);
	Global_4456448.f_197232 = 1;
	Global_4456448.f_197233 = uLocal_204[iLocal_198];
	bVar3 = false;
	while (bVar3 <= 1)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_214.f_5, bVar3))
		{
			func_124(&uLocal_87, bVar3, 3f);
		}
		bVar3++;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_173())
		{
			func_170();
		}
		if (!func_169(UNK_0xA30EC016B12C03E4()))
		{
			if ((((!func_154(UNK_0xA30EC016B12C03E4(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) && !func_151(UNK_0xA30EC016B12C03E4())) && !UNK_0x433E615D274A2FC6(UNK_0xA30EC016B12C03E4())) && !func_152(UNK_0xD803B885F5E47A62())) && Local_369[UNK_0x57270EE11514DC67() /*5*/].f_4 < 6)
			{
				if (func_123(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 6))
				{
					if ((UNK_0x1C0640BA9A7327B3() % 3000) > 50)
					{
					}
				}
			}
		}
		switch (Local_369[UNK_0x57270EE11514DC67() /*5*/].f_2)
		{
			case 0:
				if (func_122() == 1)
				{
					Local_369[UNK_0x57270EE11514DC67() /*5*/].f_2 = 1;
				}
				else if (func_122() == 4)
				{
					Local_369[UNK_0x57270EE11514DC67() /*5*/].f_2 = 3;
				}
				break;
			case 1:
				if (func_122() == 1)
				{
					func_25(&Local_221, &uLocal_236, &uLocal_87);
				}
				else if (func_122() == 4)
				{
					Local_369[UNK_0x57270EE11514DC67() /*5*/].f_2 = 3;
				}
				break;
			case 3:
				if (func_24(&(Local_243.f_8)))
				{
					Local_369[UNK_0x57270EE11514DC67() /*5*/].f_2 = 4;
				}
				break;
			case 2:
				Local_369[UNK_0x57270EE11514DC67() /*5*/].f_2 = 4;
			case 4:
				func_170();
				break;
		}
		if (UNK_0xBFF81ED3B99522C7())
		{
			switch (func_122())
			{
				case 0:
					Local_243.f_4 = 1;
					break;
				case 1:
					func_2();
					if (func_1())
					{
						Local_243.f_4 = 4;
					}
					break;
				case 4:
					break;
			}
		}
	}
}

bool func_1()
{
	return false;
}

void func_2()
{
	func_3();
	switch (Local_243.f_7)
	{
		case 0:
			break;
		case 4:
			break;
		case 6:
			break;
	}
}

void func_3()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;

	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < UNK_0xDFB2BAED99ED0A2E(1))
	{
		switch (UNK_0xB98DB26FBF676FA1(1, iVar2))
		{
			case 174:
				Local_104 = 589125870;
				if (func_23(iVar2, &Local_104, 1))
				{
					switch (Local_104)
					{
						case 575251425:
							iVar0 = Local_104.f_3;
							iVar1 = Local_104.f_4;
							break;
						case -844166385:
							if (func_22(Local_104.f_2, 1))
							{
								if (iLocal_366[Local_104.f_3] <= Local_323[Local_104.f_3 /*21*/].f_11)
								{
									func_21(Local_104.f_4, Local_104.f_3, 1);
								}
								else
								{
									func_21(Local_104.f_4, Local_104.f_3, 0);
								}
							}
							break;
					}
				}
				break;
		}
		iVar2++;
	}
	bVar4 = false;
	bVar4 = false;
	while (bVar4 < 2)
	{
		iLocal_366[bVar4] = func_20(&Local_369, bVar4);
		bVar6 = false;
		bVar7 = false;
		bVar3 = false;
		while (bVar3 < UNK_0x54EABC0DD106045B())
		{
			bVar5 = UNK_0xF4FB3A22FC4991C8(bVar3);
			if (UNK_0x81A93C8315C28F58(bVar5))
			{
				if ((func_19(&(Local_369[bVar3 /*5*/]), 1) && func_19(&(Local_369[bVar3 /*5*/]), 7)) && Local_369[bVar3 /*5*/].f_1 == bVar4)
				{
					bVar7 = true;
				}
				if (iLocal_366[bVar4] > Local_323[bVar4 /*21*/].f_11)
				{
					if (!bVar6)
					{
						if (Local_369[bVar3 /*5*/].f_1 == bVar4 && func_19(&(Local_369[bVar3 /*5*/]), 1))
						{
							func_18(1764980958, UNK_0x4B2BFE4A3BC248ED(bVar5), bVar4);
							bVar6 = true;
						}
					}
				}
			}
			bVar3++;
		}
		func_17(&(Local_243.f_3), bVar4, bVar7);
		func_17(&(Local_243.f_1), bVar4, iLocal_366[bVar4] < Local_323[bVar4 /*21*/].f_11);
		func_17(&(Local_243.f_2), bVar4, iLocal_366[bVar4] >= Local_323[bVar4 /*21*/].f_10);
		if (iLocal_366[bVar4] > 0)
		{
			if (!func_183(&uLocal_320))
			{
				func_16(&uLocal_320, 1f);
			}
			else if (func_14(&uLocal_320) >= 1f)
			{
				func_11(&uLocal_320);
				bVar8 = -1;
				bVar9 = false;
				bVar3 = false;
				while (bVar3 < UNK_0x54EABC0DD106045B())
				{
					if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bVar3)))
					{
						if (Local_369[bVar3 /*5*/].f_1 == bVar4 && func_19(&(Local_369[bVar3 /*5*/]), 1))
						{
							bVar8 = bVar3;
							if (func_19(&(Local_369[bVar3 /*5*/]), 0))
							{
								bVar9 = true;
							}
						}
						else
						{
							switch (bVar4)
							{
								case 0:
									if (UNK_0xEAE0D21A50E6C7F4(Local_243.f_5, bVar3))
									{
										UNK_0x0674E58A79778E99(&(Local_243.f_5), bVar3);
									}
									break;
								case 1:
									if (UNK_0xEAE0D21A50E6C7F4(Local_243.f_6, bVar3))
									{
										UNK_0x0674E58A79778E99(&(Local_243.f_6), bVar3);
									}
									break;
							}
						}
					}
					bVar3++;
				}
				if (!bVar9)
				{
					if (!func_10(bVar4, &Local_243, bVar8))
					{
					}
				}
			}
		}
		if (bVar4 == iVar0)
		{
			if (iLocal_366[bVar4] >= Local_323[bVar4 /*21*/].f_10)
			{
				func_9(&Local_110, iLocal_313, bVar4);
				bVar10 = func_7(&Local_369, Local_110, bVar4);
				iVar11 = 0;
				iVar12 = Local_323[bVar4 /*21*/].f_11;
				iVar13 = UNK_0x09AC81E49EA267F7(false, 65535);
				bVar3 = false;
				while (bVar3 < UNK_0x54EABC0DD106045B())
				{
					if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bVar3)))
					{
						bVar14 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(bVar3));
						if (func_19(&(Local_369[bVar3 /*5*/]), 1) && Local_369[bVar3 /*5*/].f_1 == bVar4)
						{
							if (iVar11 <= iVar12)
							{
								bVar15 = false;
								if (bVar14 == iVar1)
								{
									bVar15 = true;
									if (bVar10 == -1)
									{
										bVar10 = bVar14;
									}
								}
								bVar16 = false;
								if (bVar10 == bVar14)
								{
									bVar16 = true;
								}
								func_4(iVar13, bVar14, bVar4, 0, bVar15, bVar16);
								iVar11++;
							}
						}
					}
					bVar3++;
				}
			}
		}
		bVar4++;
	}
}

void func_4(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	struct<6> Var0;

	Var0 = -849785785;
	Var0.f_1 = UNK_0xD803B885F5E47A62();
	func_6(&(Var0.f_2), 4, bParam3);
	func_6(&(Var0.f_2), 2, bParam4);
	func_6(&(Var0.f_2), 5, bParam5);
	Var0.f_4 = bParam1;
	Var0.f_3 = bParam2;
	Var0.f_5 = iParam0;
	UNK_0xFB061A86A7AC749F(1, &Var0, 6, func_5(bParam1));
}

var func_5(bool bParam0)
{
	var uVar0;

	if (bParam0 != -1)
	{
		UNK_0x5D96D8530B3D0904(&uVar0, bParam0);
	}
	return uVar0;
}

void func_6(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = UNK_0xEAE0D21A50E6C7F4(*bParam0, bParam1);
	if (bParam2)
	{
		if (!bVar0)
		{
			UNK_0x5D96D8530B3D0904(bParam0, bParam1);
		}
	}
	else if (bVar0)
	{
		UNK_0x0674E58A79778E99(bParam0, bParam1);
	}
}

bool func_7(var uParam0, struct<13>[] Param1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, bool bParam61)
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;

	bVar0 = -1;
	fVar1 = 0f;
	bVar4 = false;
	while (bVar4 < UNK_0x54EABC0DD106045B())
	{
		bVar5 = UNK_0xF4FB3A22FC4991C8(bVar4);
		if (UNK_0x81A93C8315C28F58(bVar5))
		{
			bVar2 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(bVar4));
			if ((uParam0[bVar4 /*5*/])->f_1 == bParam61 && func_19(uParam0[bVar4 /*5*/], 1))
			{
				bVar3 = UNK_0x9539D44F3E4492F6(bVar2);
				if (func_8(bVar3))
				{
					if (func_8(bVar3))
					{
						if (bVar0 == -1)
						{
							bVar0 = bVar4;
							fVar1 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bVar3, true), Param1[0 /*13*/], 1);
						}
						else
						{
							fVar6 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bVar3, true), Param1[0 /*13*/], 1);
							if (fVar6 < fVar1)
							{
								fVar1 = fVar6;
								bVar0 = bVar4;
							}
						}
					}
				}
			}
		}
		bVar4++;
	}
	if (bVar0 >= 0)
	{
		bVar2 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(bVar0));
	}
	return bVar2;
}

bool func_8(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_9(var uParam0, int iParam1, bool bParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (bParam2)
			{
				case 0:
					uParam0->f_59 = 1;
					uParam0->f_53 = { 1119.064f, -3156.995f, -36.56f };
					uParam0->f_56 = { 0.8f, 0.8f, 0.8f };
					*(uParam0[0 /*13*/]) = { 1117.34f, -3156.68f, -37.0669f };
					(uParam0[0 /*13*/])->f_4 = { 1119.88f, -3157.026f, -36.3397f };
					(uParam0[0 /*13*/])->f_7 = { 1f, 1f, 1f };
					(uParam0[0 /*13*/])->f_10 = "";
					(uParam0[0 /*13*/])->f_11 = "darts_ig_idle_guy1";
					(uParam0[0 /*13*/])->f_12 = "";
					*(uParam0[1 /*13*/]) = { 1117.34f, -3157.38f, -38.0669f };
					(uParam0[1 /*13*/])->f_4 = { 1119.88f, -3157.026f, -36.3397f };
					(uParam0[1 /*13*/])->f_4 = { 1f, 1f, 1f };
					(uParam0[1 /*13*/])->f_10 = "";
					(uParam0[1 /*13*/])->f_11 = "darts_ig_idle_guy1";
					(uParam0[1 /*13*/])->f_12 = "";
					break;
				case 1:
					uParam0->f_59 = 2;
					uParam0->f_53 = { 1116.5f, -3153.27f, -36.56f };
					uParam0->f_56 = { 1.2f, 1.2f, 1.2f };
					*(uParam0[0 /*13*/]) = { 1115.92f, -3153.15f, -37.036f };
					(uParam0[0 /*13*/])->f_4 = { 1116.51f, -3153.28f, -37.569f };
					(uParam0[0 /*13*/])->f_7 = { 0.5f, 0.5f, 1f };
					(uParam0[0 /*13*/])->f_10 = "";
					(uParam0[0 /*13*/])->f_11 = "base";
					(uParam0[0 /*13*/])->f_12 = "";
					*(uParam0[1 /*13*/]) = { 1117.11f, -3153.4f, -37.036f };
					(uParam0[1 /*13*/])->f_4 = { 1116.51f, -3153.28f, -37.569f };
					(uParam0[1 /*13*/])->f_7 = { 0.5f, 0.5f, 1f };
					(uParam0[1 /*13*/])->f_10 = "";
					(uParam0[1 /*13*/])->f_11 = "base";
					(uParam0[1 /*13*/])->f_12 = "";
					break;
			}
			break;
		case 1:
			switch (bParam2)
			{
				case 0:
					uParam0->f_59 = 1;
					uParam0->f_53 = { 1000.851f, -3163.978f, -34.0646f };
					uParam0->f_56 = { 0.8f, 0.8f, 0.8f };
					*(uParam0[0 /*13*/]) = { 1000.59f, -3165.35f, -35.054f };
					(uParam0[0 /*13*/])->f_4 = { 1000.93f, -3162.82f, -33.4827f };
					(uParam0[0 /*13*/])->f_7 = { 1f, 1f, 1f };
					(uParam0[0 /*13*/])->f_10 = "";
					(uParam0[0 /*13*/])->f_11 = "darts_ig_idle_guy1";
					(uParam0[0 /*13*/])->f_12 = "";
					*(uParam0[1 /*13*/]) = { 1001.28f, -3165.35f, -35.054f };
					(uParam0[1 /*13*/])->f_4 = { 1000.93f, -3162.82f, -33.4827f };
					(uParam0[1 /*13*/])->f_10 = "";
					(uParam0[1 /*13*/])->f_11 = "darts_ig_idle_guy1";
					(uParam0[1 /*13*/])->f_12 = "";
					break;
				case 1:
					uParam0->f_59 = 2;
					uParam0->f_53 = { 1003.23f, -3165.73f, -34.0646f };
					uParam0->f_56 = { 1.2f, 1.2f, 1.2f };
					*(uParam0[0 /*13*/]) = { 1003.35f, -3165.14f, -34.0646f };
					(uParam0[0 /*13*/])->f_4 = { 1003.23f, -3165.74f, -34.5976f };
					(uParam0[0 /*13*/])->f_7 = { 0.5f, 0.5f, 1f };
					(uParam0[0 /*13*/])->f_10 = "";
					(uParam0[0 /*13*/])->f_11 = "base";
					(uParam0[0 /*13*/])->f_12 = "";
					*(uParam0[1 /*13*/]) = { 1003.11f, -3166.33f, -34.0646f };
					(uParam0[1 /*13*/])->f_4 = { 1003.23f, -3165.74f, -34.5976f };
					(uParam0[1 /*13*/])->f_7 = { 0.5f, 0.5f, 1f };
					(uParam0[1 /*13*/])->f_10 = "";
					(uParam0[1 /*13*/])->f_11 = "base";
					(uParam0[1 /*13*/])->f_12 = "";
					break;
			}
			break;
		case 2:
			switch (bParam2)
			{
				case 0:
					uParam0->f_59 = 1;
					uParam0->f_53 = { 2708.47f, -358.8301f, -55.0523f };
					uParam0->f_56 = { 0.8f, 0.8f, 0.8f };
					*(uParam0[0 /*13*/]) = { 2708.21f, -360.2018f, -56.0417f };
					(uParam0[0 /*13*/])->f_4 = { 2708.55f, -357.6718f, -54.4704f };
					(uParam0[0 /*13*/])->f_7 = { 1f, 1f, 1f };
					(uParam0[0 /*13*/])->f_10 = "";
					(uParam0[0 /*13*/])->f_11 = "darts_ig_idle_guy1";
					(uParam0[0 /*13*/])->f_12 = "";
					*(uParam0[1 /*13*/]) = { 2708.9f, -360.2018f, -56.0417f };
					(uParam0[1 /*13*/])->f_4 = { 2708.55f, -357.6718f, -54.4704f };
					(uParam0[1 /*13*/])->f_7 = { 1f, 1f, 1f };
					(uParam0[1 /*13*/])->f_10 = "";
					(uParam0[1 /*13*/])->f_11 = "darts_ig_idle_guy1";
					(uParam0[1 /*13*/])->f_12 = "";
					break;
			}
			break;
	}
}

bool func_10(bool bParam0, var uParam1, bool bParam2)
{
	switch (bParam0)
	{
		case 0:
			if (func_17(&(uParam1->f_5), bParam2, 1))
			{
				return true;
			}
			break;
		case 1:
			if (func_17(&(uParam1->f_6), bParam2, 1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_11(bool bParam0)
{
	func_12(bParam0, 0f);
}

void func_12(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_13(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

float func_13(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(UNK_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (UNK_0x8CD06866876216F2())
	{
		iVar2 = UNK_0x2B6E0A53779D29EA();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(UNK_0x1C0640BA9A7327B3()) / 1000f);
}

float func_14(bool bParam0)
{
	if (func_183(bParam0))
	{
		if (func_15(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_13(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return bParam0->f_1;
}

bool func_15(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, 2);
}

void func_16(bool bParam0, float fParam1)
{
	if (!func_183(bParam0))
	{
		func_12(bParam0, fParam1);
	}
}

bool func_17(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = UNK_0xEAE0D21A50E6C7F4(*bParam0, bParam1);
	if (bParam2)
	{
		if (!bVar0)
		{
			UNK_0x5D96D8530B3D0904(bParam0, bParam1);
			return true;
		}
	}
	else if (bVar0)
	{
		UNK_0x0674E58A79778E99(bParam0, bParam1);
		return true;
	}
	return false;
}

void func_18(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;

	Var0 = iParam0;
	Var0.f_1 = UNK_0xD803B885F5E47A62();
	Var0.f_4 = bParam1;
	Var0.f_3 = bParam2;
	UNK_0xFB061A86A7AC749F(1, &Var0, 6, func_5(bParam1));
}

bool func_19(var uParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(uParam0->f_3, bParam1);
}

int func_20(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = 0;
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < UNK_0x54EABC0DD106045B())
	{
		bVar2 = UNK_0xF4FB3A22FC4991C8(bVar1);
		if (UNK_0x81A93C8315C28F58(bVar2))
		{
			bVar3 = UNK_0x4B2BFE4A3BC248ED(bVar2);
			if (UNK_0x40B8C182D63932FC(bVar3))
			{
				if (bParam1 >= 0 && bParam1 <= 1)
				{
					if (bParam1 == (uParam0[bVar1 /*5*/])->f_1)
					{
						if (func_19(uParam0[bVar1 /*5*/], 1))
						{
							iVar0++;
						}
					}
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

void func_21(bool bParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;

	Var0 = -991724954;
	Var0.f_1 = UNK_0xD803B885F5E47A62();
	func_6(&(Var0.f_2), 0, bParam2);
	func_6(&(Var0.f_2), 3, 0);
	Var0.f_4 = bParam0;
	Var0.f_3 = uParam1;
	UNK_0xFB061A86A7AC749F(1, &Var0, 6, func_5(bParam0));
}

bool func_22(bool bParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(bParam0, bParam1);
}

bool func_23(int iParam0, int iParam1, int iParam2)
{
	if (UNK_0x218F818E64020C17(1, iParam0, iParam1, 6))
	{
		if (func_22(iParam1->f_2, 3) == iParam2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_24(var uParam0)
{
	if (uParam0->f_1)
	{
		if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), *uParam0)) >= 1000)
		{
			return true;
		}
	}
	return false;
}

void func_25(var uParam0, var uParam1, var uParam2)
{
	if (!UNK_0x28072FDD60CE3A6E(UNK_0x16F2683693E537C9(), 1))
	{
		if (func_121(UNK_0xA30EC016B12C03E4()))
		{
			func_123(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 5);
		}
	}
	func_120(&Local_369, &Local_214, uParam2, &Local_323);
	func_117(uParam2);
	switch (Local_369[UNK_0x57270EE11514DC67() /*5*/].f_4)
	{
		case 0:
			if (!UNK_0xEAE0D21A50E6C7F4(Local_369[UNK_0x57270EE11514DC67() /*5*/].f_3, 2))
			{
				func_46(uParam1, uParam0, &Local_214);
			}
			if (func_45(&(Local_369[UNK_0x57270EE11514DC67() /*5*/].f_3), 8))
			{
				if (!func_183(&uLocal_185))
				{
					func_182(&uLocal_185);
				}
				else if (func_14(&uLocal_185) >= 4f)
				{
					func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 8, 0);
					func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 2, 0);
					func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 7, 0);
					func_43(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), -1);
					func_42(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]));
					func_123(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 0);
					func_41(&Local_214, 0);
					func_38(&uLocal_197);
					func_11(&uLocal_170);
					func_150(&uLocal_185);
				}
			}
			break;
		case 1:
			if (Local_369[UNK_0x57270EE11514DC67() /*5*/].f_1 >= 0)
			{
				if (!UNK_0xEA6BC48857E0AC4C(Local_214.f_3))
				{
					if (UNK_0x1FBF08B001C4788A(Local_214.f_3))
					{
						func_123(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 2);
					}
					else if (UNK_0x59F00CC3C33B17AD(Local_214.f_3))
					{
						UNK_0x92DCE5C81176D2B4(Local_214.f_3);
					}
				}
			}
			else
			{
				if (func_183(&uLocal_185))
				{
					func_150(&uLocal_185);
				}
				func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 8, 0);
				func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 2, 0);
				func_123(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 0);
			}
			break;
		case 2:
			if (!func_183(&uLocal_176))
			{
				func_182(&uLocal_176);
			}
			if (func_183(&uLocal_185))
			{
				func_150(&uLocal_185);
			}
			func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 8, 0);
			func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 7, 1);
			bLocal_86 = true;
			if (!func_19(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 0) && !UNK_0xADC2AA9A68E522A1(Local_214.f_3, Local_214.f_6, 0, 0))
			{
				bLocal_86 = false;
				if (func_14(&uLocal_176) >= 30f)
				{
					func_123(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 4);
				}
			}
			if (bLocal_86)
			{
				if (Local_369[UNK_0x57270EE11514DC67() /*5*/].f_1 == 0)
				{
				}
				if (func_35(Local_214.f_3, 8344, Local_214.f_6, 0, func_19(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 0), func_19(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 5)))
				{
					func_150(&uLocal_170);
					func_150(&uLocal_182);
					bLocal_85 = false;
					func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 3, 0);
					func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 6, 0);
					func_17(&uLocal_197, 2, 0);
					bLocal_86 = false;
					func_123(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 3);
				}
			}
			break;
		case 3:
			if (!func_183(&uLocal_182))
			{
				func_182(&uLocal_182);
				bLocal_85 = false;
			}
			else if (func_14(&uLocal_182) >= 30f)
			{
				bLocal_85 = true;
			}
			if (!UNK_0xEA6BC48857E0AC4C(Local_214.f_3))
			{
				if (UNK_0xADC2AA9A68E522A1(Local_214.f_3, Local_214.f_6, 1, 0))
				{
					bLocal_85 = true;
				}
			}
			else if ((UNK_0x1C0640BA9A7327B3() % 1000) > 100)
			{
			}
			if (bLocal_85)
			{
				bLocal_85 = false;
				func_150(&uLocal_182);
				func_123(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 4);
			}
			break;
		case 4:
			if ((!UNK_0xADC2AA9A68E522A1(Local_214.f_3, Local_214.f_6, 1, 0) || (UNK_0x8A22C4C08282BF26(-1424690702) == 0 && Local_214.f_2 == 0)) || (UNK_0x8A22C4C08282BF26(1774039768) == 0 && Local_214.f_2 == 1))
			{
				func_38(&uLocal_197);
				func_42(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]));
				func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 7, 0);
				func_43(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), -1);
				func_11(&uLocal_170);
				func_41(&Local_214, 0);
				func_123(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 0);
			}
			break;
		case 5:
			if (!bLocal_80)
			{
				bLocal_80 = true;
				UNK_0xA37A90C62806D848(1);
				func_34(0, 0);
			}
			break;
		case 6:
			func_170();
			break;
	}
	func_136(&(Local_214.f_5));
	func_26(&uLocal_197);
}

void func_26(bool bParam0)
{
	bool bVar0;

	if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 2))
	{
		UNK_0x857E3CE01DEA2D26();
	}
	if (func_45(bParam0, 0))
	{
		UNK_0x2103752056F874E1();
	}
	bVar0 = UNK_0xEAE0D21A50E6C7F4(*bParam0, 3);
	if (bVar0 != UNK_0xEAE0D21A50E6C7F4(*bParam0, 4))
	{
		if (func_8(UNK_0x16F2683693E537C9()))
		{
			UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 185, bVar0);
			UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 108, bVar0);
		}
		func_17(bParam0, 4, bVar0);
	}
	if (UNK_0xEAE0D21A50E6C7F4(*bParam0, true))
	{
		func_27(0);
	}
	if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 5))
	{
		UNK_0x38C3A68D7861DCFD(0, 30, 1);
		UNK_0x38C3A68D7861DCFD(0, 31, 1);
	}
	else
	{
		UNK_0xEAB026E686C0D991(0, 30, 1);
		UNK_0xEAB026E686C0D991(0, 31, 1);
	}
	if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 7))
	{
		UNK_0x3584F71E5CA29322(5);
		UNK_0x3584F71E5CA29322(18);
		UNK_0x3584F71E5CA29322(10);
	}
}

void func_27(int iParam0)
{
	if (func_33())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_32(0))
		{
			func_28(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_28(int iParam0)
{
	if (func_33())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_31())
		{
			func_30(1, 1);
		}
		else
		{
			func_30(0, 0);
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
	if (!func_29())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_29()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_30(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_32(0))
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

bool func_31()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_32(int iParam0)
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

bool func_33()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_34(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22350.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22350.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2461220[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_5089[iVar0] = 0;
		Global_22350.f_5227[iVar0] = 0;
		Global_22350.f_5356[iVar0] = 0;
		Global_22350.f_5879[iVar0] = 0f;
		Global_22350.f_5485[iVar0] = 0;
		Global_22350.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22350.f_5056[iVar0] = 0;
		Global_22350.f_5068[iVar0] = 0f;
		Global_22350.f_5062[iVar0] = -1f;
		Global_22350.f_5075[iVar0] = 0;
		Global_22350.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0 /*4*/]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22350.f_6020[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22350.f_7029[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22350.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	Global_22350 = 0;
	Global_22350.f_5218 = 0;
	Global_22350.f_5219 = 0;
	Global_22350.f_5220 = 0;
	Global_22350.f_5222 = 0;
	Global_22350.f_5223 = 0;
	Global_22350.f_5224 = 0;
	Global_22350.f_5221 = 0;
	Global_22350.f_5874 = 0;
	Global_22350.f_6014 = 0;
	Global_22350.f_5739 = 0;
	Global_22350.f_5738 = 0;
	Global_22350.f_5740 = 0;
	StringCopy(&(Global_22350.f_4690), "", 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = 0;
	Global_22350.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_4768 = 0;
	StringCopy(&(Global_4268421.f_21), "", 16);
	Global_4268421.f_61 = 0;
	Global_4268421.f_62 = 0;
	Global_4268421.f_63 = 0;
	Global_4268421.f_64 = 0;
	Global_4268421.f_65 = 0;
	Global_4268421.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4268421.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4268421.f_67 = 0;
	StringCopy(&(Global_22350.f_1), "", 16);
	Global_22350.f_5074 = 0f;
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_5744 = 0;
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = 0;
	Global_22350.f_5742 = 0;
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	Global_22350.f_5225 = 10;
	Global_22350.f_5226 = 0;
	Global_22350.f_5876 = 0f;
	Global_22350.f_5877 = 0f;
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	Global_22350.f_5730 = 0f;
	Global_22350.f_5731 = 0;
	Global_22350.f_5733 = 0;
	Global_22350.f_5732 = 0;
	Global_22350.f_5734 = 0;
	Global_22350.f_5735 = 0;
	Global_22350.f_5736 = 0;
	Global_22350.f_5737 = 0;
	Global_22350.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22350.f_6008[iVar0] = -1;
		Global_22350.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22350.f_5081 = 0f;
	Global_22350.f_5052 = 0;
	Global_22350.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22350.f_6015)
	{
		Global_22350.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_8392 = 0;
	Global_22350.f_8387 = 0;
	Global_22350.f_8397 = 0;
	Global_22350.f_8402 = 0;
	Global_22350.f_8407 = 0;
	Global_22350.f_8409 = 0;
	Global_22350.f_8415 = 0;
	Global_22347 = 0.05f;
	Global_22348 = 0.05f;
	Global_22349 = 0.225f;
	fVar2 = UNK_0x33D480CCE15C991A(0);
	if (bParam0)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22349 = 0.225f;
	}
}

bool func_35(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	struct<21> Var0;

	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	if (bParam3)
	{
		UNK_0x5D96D8530B3D0904(&(Var0.f_18), true);
	}
	if (bParam4)
	{
		UNK_0x5D96D8530B3D0904(&(Var0.f_18), 2);
	}
	if (bParam5)
	{
		UNK_0x5D96D8530B3D0904(&(Var0.f_18), 3);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Var0.f_18), 3);
	}
	Var0.f_16 = uParam2;
	if (!UNK_0xADC2AA9A68E522A1(bParam0, Var0.f_16, 1, 0))
	{
		Global_1590535[UNK_0xA30EC016B12C03E4() /*876*/] = -1;
		if (func_36(bParam0, iParam1, Var0, 0, 0, 1, 1, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_36(bool bParam0, int iParam1, struct<17> Param2, var uParam19, var uParam20, var uParam21, var uParam22, bool bParam23, bool bParam24, bool bParam25, bool bParam26, bool bParam27)
{
	if (UNK_0x59F00CC3C33B17AD(bParam0))
	{
		if (bParam24 && Param2.f_16 != -1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18), 4);
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_1 = Param2.f_16;
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 256);
			if (bParam27)
			{
				UNK_0x3FC8DBCC154CA56B();
			}
		}
		if (bParam23)
		{
			UNK_0x7BBABEC524CBF883(0);
			if (!UNK_0x757EF87A33649210() && !UNK_0xD0BB2359EC70FC37())
			{
				UNK_0x53491B90E4FD0E56(1000);
			}
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), true);
			}
		}
		UNK_0x92DCE5C81176D2B4(bParam0);
		if (UNK_0x1FBF08B001C4788A(bParam0))
		{
			if (bParam23)
			{
				if (!UNK_0x757EF87A33649210())
				{
					return false;
				}
			}
			if (iParam1 <= 0)
			{
				iParam1 = 512;
			}
			SYSTEM::START_NEW_SCRIPT_WITH_ARGS(bParam0, &Param2, 21, iParam1);
			UNK_0x5E8C29AE121DF1C7(bParam0);
			if (!bParam26)
			{
				UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18), false);
			}
			UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18), 4);
			if (bParam25)
			{
				if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
				{
					func_37();
					UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
				}
			}
			return true;
		}
	}
	return false;
}

void func_37()
{
	if (Global_2537071.f_3963 != 0)
	{
		Global_2537071.f_3963 = 5;
	}
}

void func_38(bool bParam0)
{
	UNK_0x0674E58A79778E99(bParam0, 2);
	UNK_0x0674E58A79778E99(bParam0, 3);
	UNK_0x0674E58A79778E99(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 5);
	UNK_0x0674E58A79778E99(bParam0, 7);
	func_39(bParam0, 0);
	func_26(bParam0);
}

void func_39(bool bParam0, int iParam1)
{
	func_40(bParam0, iParam1);
}

void func_40(bool bParam0, int iParam1)
{
	*bParam0 = (*bParam0 - (*bParam0 && iParam1));
}

void func_41(bool bParam0, int iParam1)
{
	bParam0->f_4 = iParam1;
}

void func_42(var uParam0)
{
	func_44(uParam0, 0, 0);
	func_44(uParam0, 1, 0);
	func_44(uParam0, 2, 0);
	func_44(uParam0, 5, 0);
}

int func_43(var uParam0, bool bParam1)
{
	if (uParam0->f_1 != bParam1)
	{
		uParam0->f_1 = bParam1;
		return 1;
	}
	return 0;
}

bool func_44(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_19(uParam0, bParam1);
	if (bParam2)
	{
		if (!bVar0)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_3), bParam1);
			return true;
		}
	}
	else if (bVar0)
	{
		UNK_0x0674E58A79778E99(&(uParam0->f_3), bParam1);
		return true;
	}
	return false;
}

bool func_45(bool bParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, bParam1);
}

void func_46(var uParam0, var uParam1, bool bParam2)
{
	bool bVar0;

	func_114(uParam1);
	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (!UNK_0x28072FDD60CE3A6E(UNK_0x16F2683693E537C9(), 1))
		{
			if (Local_369[UNK_0x57270EE11514DC67() /*5*/].f_1 == -1)
			{
				if (func_112(&uLocal_170))
				{
					func_108(uParam0, uParam1);
				}
				bVar0 = false;
				while (bVar0 <= 1)
				{
					if (Local_369[UNK_0x57270EE11514DC67() /*5*/].f_1 == -1)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bParam2->f_5, bVar0))
						{
							func_47(Local_323[bVar0 /*21*/], uParam1->f_12);
						}
					}
					bVar0++;
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(bParam2->f_5, Local_369[UNK_0x57270EE11514DC67() /*5*/].f_1))
			{
				func_47(Local_323[uParam1->f_10 /*21*/], uParam1->f_12);
			}
			else
			{
				func_41(bParam2, 8);
				func_47(Local_323[Local_369[UNK_0x57270EE11514DC67() /*5*/].f_1 /*21*/], 1);
			}
		}
	}
	else if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
	{
		if (func_183(&uLocal_170))
		{
		}
	}
}

void func_47(struct<21> Param0, bool bParam21)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	float fVar7;
	float fVar8;
	bool bVar9;

	func_107(&Local_188);
	if (!UNK_0xEAE0D21A50E6C7F4(Local_369[UNK_0x57270EE11514DC67() /*5*/].f_3, 2))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), Param0.f_3, 1) < 2f)
			{
				func_9(&Local_253, iLocal_313, Param0.f_2);
				Local_188.f_3 = 1;
				if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), Local_253.f_53, Local_253.f_56, false, true, 0))
				{
					Local_188.f_2 = 1;
					if (Param0 == 1)
					{
						iVar0 = 0;
						while (iVar0 < Local_253.f_59)
						{
							if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), Local_253[iVar0 /*13*/], Local_253[iVar0 /*13*/].f_7, false, true, 0))
							{
								Local_188.f_4 = 1;
								Local_188.f_8 = iVar0;
							}
							iVar0++;
						}
						bVar1 = false;
						while (bVar1 < UNK_0x54EABC0DD106045B())
						{
							bVar2 = UNK_0xF4FB3A22FC4991C8(bVar1);
							if (bVar1 != UNK_0x57270EE11514DC67())
							{
								if (UNK_0x81A93C8315C28F58(bVar2))
								{
									if ((Local_369[bVar1 /*5*/].f_1 == Param0 && UNK_0xEAE0D21A50E6C7F4(Local_369[bVar1 /*5*/].f_3, 6)) && UNK_0xEAE0D21A50E6C7F4(Local_369[bVar1 /*5*/].f_3, true))
									{
										Local_188.f_5 = 1;
										if (Local_188.f_8 >= 0)
										{
											if (Local_188.f_8 == 0 && UNK_0xEAE0D21A50E6C7F4(Local_369[bVar1 /*5*/].f_3, 5))
											{
												Local_188.f_6 = 1;
											}
											else if (Local_188.f_8 == 1 && !UNK_0xEAE0D21A50E6C7F4(Local_369[bVar1 /*5*/].f_3, 5))
											{
												Local_188.f_6 = 1;
											}
										}
									}
								}
							}
							bVar1++;
						}
						if (Local_188.f_4)
						{
							if (!Local_188.f_6)
							{
								Local_188.f_7 = 1;
								if (Local_188.f_8 == 0)
								{
									func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 5, 1);
								}
							}
							else
							{
								func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 5, 0);
								func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 6, 0);
							}
						}
						if (Local_214.f_4 == 0)
						{
							if (((!Local_188.f_4 && Local_188.f_5) || (Local_188.f_4 && Local_188.f_6)) && UNK_0xEAE0D21A50E6C7F4(Local_243.f_1, Param0))
							{
								func_104("ARMW_A_SIDE", 1);
							}
							else
							{
								func_104("ARMW_A_SIDE", 0);
							}
						}
					}
					else
					{
						Local_188.f_7 = 1;
						Local_188.f_4 = 1;
					}
				}
				else if (Param0 == 1)
				{
					func_104("ARMW_A_SIDE", 0);
				}
			}
		}
	}
	if (bParam21)
	{
		switch (Local_214.f_4)
		{
			case 0:
				if (Local_188.f_4 && Local_188.f_7)
				{
					Local_188 = false;
					func_43(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), Param0);
					if (UNK_0xEAE0D21A50E6C7F4(Local_243.f_3, Param0))
					{
						func_104(func_103(Param0, 6), 0);
						func_104(func_103(Param0, 7), 0);
						if (!func_19(&(Local_369[iLocal_199 /*5*/]), 1))
						{
							func_104(func_103(Param0, 0), 1);
						}
					}
					else if (!UNK_0xEAE0D21A50E6C7F4(Local_243.f_1, Param0))
					{
						func_104(func_103(Param0, 6), 0);
						func_104(func_103(Param0, 7), 1);
					}
					else
					{
						func_104(func_103(Param0, 0), 0);
						if (UNK_0xBFC0798A6E3417F9(2, 51))
						{
							func_102(UNK_0xA30EC016B12C03E4(), Param0, 1);
							func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 1, 1);
							func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 6, 1);
							func_17(&uLocal_197, 1, 1);
							func_17(&uLocal_197, 2, 1);
							func_17(&uLocal_197, 3, 0);
							func_17(&uLocal_197, 5, 1);
							Local_188 = true;
							if (!func_183(&uLocal_176))
							{
								func_182(&uLocal_176);
							}
							else
							{
								func_11(&uLocal_176);
							}
							func_41(&Local_214, 1);
						}
						else
						{
							func_104(func_103(Param0, 7), 0);
							func_104(func_103(Param0, 6), 1);
						}
					}
				}
				if (!Local_188.f_4)
				{
					func_104(func_103(Param0, 6), 0);
					if (Local_369[UNK_0x57270EE11514DC67() /*5*/].f_1 == Param0)
					{
						func_43(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), -1);
						Local_188 = true;
					}
				}
				break;
			case 1:
				bVar3 = false;
				UNK_0x38C3A68D7861DCFD(0, 37, 1);
				UNK_0x38C3A68D7861DCFD(0, 12, 1);
				UNK_0x38C3A68D7861DCFD(0, 13, 1);
				if (Local_214.f_1 == 1)
				{
					Local_214.f_1 = 0;
					bVar3 = true;
					if (Local_214)
					{
						if (Param0 == 0)
						{
							func_41(&Local_214, 6);
						}
						else
						{
							func_41(&Local_214, 2);
						}
					}
					else
					{
						func_41(&Local_214, 8);
					}
				}
				if (!func_183(&uLocal_176))
				{
					func_182(&uLocal_176);
				}
				else if (func_14(&uLocal_176) >= 3f)
				{
					bVar3 = true;
					func_41(&Local_214, 8);
				}
				if (bVar3)
				{
					if (func_183(&uLocal_176))
					{
						func_150(&uLocal_176);
					}
				}
				break;
			case 2:
				UNK_0x38C3A68D7861DCFD(0, 37, 1);
				UNK_0x38C3A68D7861DCFD(0, 12, 1);
				UNK_0x38C3A68D7861DCFD(0, 13, 1);
				fVar7 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), Local_253[0 /*13*/], 1);
				fVar8 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), Local_253[1 /*13*/], 1);
				if (fVar7 < fVar8)
				{
					vVar4 = { Local_253[0 /*13*/] };
				}
				else
				{
					vVar4 = { Local_253[1 /*13*/] };
				}
				bVar9 = func_101(vVar4, Local_253[0 /*13*/].f_4);
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					UNK_0x80AA372E04ED318D(UNK_0x16F2683693E537C9(), vVar4, 1f, 300, bVar9, 0.05f);
				}
				func_41(&Local_214, 6);
				break;
			case 6:
				UNK_0x38C3A68D7861DCFD(0, 37, 1);
				UNK_0x38C3A68D7861DCFD(0, 12, 1);
				UNK_0x38C3A68D7861DCFD(0, 13, 1);
				if (func_183(&uLocal_314))
				{
					func_150(&uLocal_314);
				}
				if (!func_183(&uLocal_317))
				{
					func_16(&uLocal_317, 1f);
				}
				else if (func_14(&uLocal_317) >= 1f || !func_19(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 3))
				{
					func_11(&uLocal_317);
					if (func_100(Param0, &Local_243))
					{
						if (func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 0, 1))
						{
							func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 3, 1);
						}
					}
					else if (func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 0, 0))
					{
					}
				}
				if (!func_183(&uLocal_173))
				{
					func_182(&uLocal_173);
				}
				else if (func_14(&uLocal_173) >= 1f)
				{
					if (!func_19(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 3))
					{
						func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 3, 1);
					}
				}
				if ((UNK_0xBFC0798A6E3417F9(2, func_99(0)) || UNK_0xEAE0D21A50E6C7F4(Local_243.f_3, Param0)) && !bLocal_83)
				{
					func_41(&Local_214, 8);
				}
				func_17(&uLocal_197, 0, 1);
				func_17(&uLocal_197, 1, 0);
				func_17(&uLocal_197, 2, 1);
				func_17(&uLocal_197, 3, 1);
				func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 1, 1);
				if (func_19(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 3))
				{
					if (func_19(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 0))
					{
						if ((UNK_0xBFC0798A6E3417F9(2, 201) && UNK_0xEAE0D21A50E6C7F4(Local_243.f_2, Param0)) && !bLocal_83)
						{
							func_41(&Local_214, 7);
						}
						if (Param0.f_2 == 0)
						{
							Local_188.f_1 = 1;
							if (func_132(0, -1, 0))
							{
								func_97();
								func_89(Param0);
								func_51(1, -1, 1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1);
							}
						}
						func_104(func_103(Param0, 5), 0);
						if (UNK_0xEAE0D21A50E6C7F4(Local_243.f_2, Param0))
						{
							if (Local_188.f_1)
							{
								func_104(func_103(Param0, 1), 0);
								func_104(func_103(Param0, 2), 0);
							}
							else if (UNK_0xEAE0D21A50E6C7F4(Local_243.f_1, Param0))
							{
								func_104(func_103(Param0, 1), 1);
							}
							else
							{
								func_104(func_103(Param0, 2), 1);
							}
						}
						else
						{
							func_104(func_103(Param0, 1), 0);
							func_104(func_103(Param0, 2), 0);
							if (!Local_188.f_1)
							{
								func_104(func_103(Param0, 5), 0);
								func_104(func_103(Param0, 4), 1);
							}
						}
					}
					else
					{
						if (UNK_0xEAE0D21A50E6C7F4(Local_243.f_1, Local_369[UNK_0x57270EE11514DC67() /*5*/].f_1))
						{
							func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 1, 1);
						}
						if (func_19(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 1))
						{
							func_104(func_103(Param0, 5), 1);
						}
						else
						{
							func_104(func_103(Param0, 5), 0);
						}
					}
				}
				break;
			case 7:
				UNK_0x38C3A68D7861DCFD(0, 37, 1);
				UNK_0x38C3A68D7861DCFD(0, 12, 1);
				UNK_0x38C3A68D7861DCFD(0, 13, 1);
				func_48(UNK_0xA30EC016B12C03E4(), Param0);
				func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 8, 1);
				func_17(&uLocal_197, 1, 1);
				func_17(&uLocal_197, 7, 1);
				func_17(&uLocal_197, 2, 1);
				func_11(&uLocal_170);
				func_150(&uLocal_173);
				func_150(&uLocal_317);
				func_41(&Local_214, 0);
				break;
			case 8:
				bLocal_84 = false;
				Local_188 = true;
				func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 1, 0);
				func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 0, 0);
				func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 3, 0);
				func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 6, 0);
				func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 5, 0);
				func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 7, 0);
				func_38(&uLocal_197);
				func_150(&uLocal_173);
				func_150(&uLocal_317);
				func_43(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), -1);
				func_11(&uLocal_170);
				func_107(&Local_188);
				UNK_0xA37A90C62806D848(1);
				func_41(&Local_214, 0);
				break;
		}
	}
	if (!Local_188.f_4 && Local_214.f_4 == 0)
	{
		if (bLocal_84)
		{
			bLocal_84 = false;
		}
		func_38(&uLocal_197);
	}
	if (!Local_188.f_4 && !Local_188.f_3)
	{
		func_44(&(Local_369[UNK_0x57270EE11514DC67() /*5*/]), 5, 0);
		if (Local_214.f_4 > 0 && Local_214.f_4 != 8)
		{
			func_41(&Local_214, 8);
		}
	}
	if (Local_188)
	{
		func_104(func_103(Param0, 7), 0);
		func_104(func_103(Param0, 0), 0);
		func_104(func_103(Param0, 1), 0);
		func_104(func_103(Param0, 2), 0);
		func_104(func_103(Param0, 4), 0);
		func_104(func_103(Param0, 5), 0);
		func_104(func_103(Param0, 6), 0);
		func_104("ARMW_A_SIDE", 0);
	}
}

void func_48(int iParam0, var uParam1)
{
	struct<5> Var0;

	Var0 = 575251425;
	Var0.f_1 = UNK_0xD803B885F5E47A62();
	Var0.f_3 = uParam1;
	Var0.f_4 = iParam0;
	func_6(&(Var0.f_2), 3, 1);
	UNK_0xFB061A86A7AC749F(1, &Var0, 6, func_49());
}

var func_49()
{
	var uVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = UNK_0x0D03A641486A2001();
	if (UNK_0x81A93C8315C28F58(bVar1))
	{
		bVar2 = UNK_0x4B2BFE4A3BC248ED(bVar1);
		if (func_50(bVar2, 0, 0))
		{
			UNK_0x5D96D8530B3D0904(&uVar0, bVar2);
		}
	}
	return uVar0;
}

bool func_50(bool bParam0, bool bParam1, bool bParam2)
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

void func_51(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	bool bVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int iVar60;
	int iVar61;
	float fVar62;
	float fVar63;
	float fVar64;
	char cVar65[64];
	char cVar81[64];
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	bool bVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;

	if (!func_88(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_85(0, bParam6))
	{
		return;
	}
	UNK_0xD02CE72B4B66DC29(76, 84);
	UNK_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22350)
	{
		if (func_83(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar57 = fVar37;
			fVar58 = fVar36;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_22350 = 0;
		}
	}
	if (UNK_0x12AB0310C2281427(&(Global_22350.f_1)) == UNK_0x12AB0310C2281427("HIDE"))
	{
		fVar59 = Global_22348;
	}
	else
	{
		fVar59 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22349;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		UNK_0xE5AC5CA7914F5BAE(&iVar60, &iVar61);
		fVar63 = UNK_0x33D480CCE15C991A(0);
		if (func_82())
		{
			iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) * fVar63));
		}
		fVar64 = (SYSTEM::TO_FLOAT(iVar60) / SYSTEM::TO_FLOAT(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_82())
		{
			fVar62 = 1f;
		}
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar62));
		iVar61 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) / fVar62));
	}
	else
	{
		UNK_0x8A462DAA7D1D9008(&iVar60, &iVar61);
	}
	if (bParam3)
	{
		if (Global_22350.f_5218 <= 1)
		{
			func_78(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22350.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22350.f_5728)
		{
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_1)) == UNK_0x12AB0310C2281427("HIDE"))
			{
				fVar51 = Global_22348;
			}
			else
			{
				if (Global_22350)
				{
					StringCopy(&cVar65, func_77(29), 64);
					StringCopy(&cVar81, func_74(29, 1), 64);
					if (UNK_0x12AB0310C2281427(&(Global_22350.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_73(Global_22347, Global_22348, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						UNK_0x539E86AE011A8B38(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						UNK_0x539E86AE011A8B38(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22350.f_8387)
				{
					iVar1 = Global_22350.f_8383;
					iVar2 = Global_22350.f_8384;
					iVar3 = Global_22350.f_8385;
					bVar4 = Global_22350.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					bVar4 = 255;
				}
				func_73(Global_22347, (Global_22348 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, bVar4);
				fVar51 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
				if (UNK_0x12AB0310C2281427(&(Global_22350.f_1)) != 0)
				{
					func_72();
					UNK_0x070005E852D4C0E9(&(Global_22350.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22350.f_68)
					{
						if (Global_22350.f_5[iVar14] == 2)
						{
							UNK_0x6D99DF8263D35CE5(Global_22350.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22350.f_5[iVar14] == 3)
						{
							UNK_0x21994591120B91F0(Global_22350.f_14[iVar16], Global_22350.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22350.f_5[iVar14] == 1)
						{
							UNK_0x6B012227B3921E18(&(Global_22350.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 8)
						{
							UNK_0x6B012227B3921E18(&(Global_22350.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 5)
						{
							UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 6)
						{
							UNK_0x6B012227B3921E18(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 7)
						{
							UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 9)
						{
							UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					UNK_0xE0026608C37C7C41((Global_22347 + 0.00390625f), ((Global_22348 + fVar57) + 0.00416664f), 0);
				}
				if (Global_22350.f_5735)
				{
					func_72();
					func_70((((Global_22347 + fParam5) - 0.00390625f) - func_71("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_72();
						func_70((((Global_22347 + fParam5) - 0.00390625f) - func_71("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
					}
				}
			}
			iVar6 = Global_22350.f_5738;
			iVar9 = 0;
			fVar97 = fVar51;
			if (Global_22350.f_8397)
			{
				iVar1 = Global_22350.f_8393;
				iVar2 = Global_22350.f_8394;
				iVar3 = Global_22350.f_8395;
				bVar4 = Global_22350.f_8396;
			}
			else
			{
				UNK_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &bVar4);
			}
			while (iVar9 < Global_22350.f_5225 && iVar6 <= Global_22350.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22350.f_5485[iVar6])
					{
						if (Global_22350.f_5356[iVar6] && iVar6 != Global_22350.f_5738)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar56 = Global_22350.f_5745[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			UNK_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar97 + ((fVar51 - fVar97) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar97), 0f, 255, 255, 255, 255, 0);
			if (Global_22350.f_5731 > Global_22350.f_5225)
			{
				if (Global_22350.f_8402)
				{
					iVar1 = Global_22350.f_8398;
					iVar2 = Global_22350.f_8399;
					iVar3 = Global_22350.f_8400;
					bVar4 = Global_22350.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					bVar4 = 204;
				}
				func_73(Global_22347, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, bVar4);
				vVar38 = { UNK_0xDE43A059FBFFF38A("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar62));
				vVar38.f_1 = (vVar38.y * (0.5f / fVar62));
				if (Global_22350.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					bVar4 = 255;
				}
				else
				{
					UNK_0xA402F6C87C08815C(true, &iVar1, &iVar2, &iVar3, &bVar4);
				}
				UNK_0x539E86AE011A8B38("CommonMenu", "shop_arrows_upANDdown", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar62), ((vVar38.y / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, bVar4, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_4690)) != 0 && Global_22350.f_4766 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_22350.f_4768 != 0)
				{
					func_83(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_69(fVar42);
				UNK_0xA1868A78E3C3D56B(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						UNK_0x6D99DF8263D35CE5(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						UNK_0x21994591120B91F0(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						UNK_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						UNK_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UNK_0x5D2FD44A8C086959(fVar42, (fVar51 + 0.00277776f));
				UNK_0xA402F6C87C08815C(2, &iVar1, &iVar2, &iVar3, &bVar4);
				func_73(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, bVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					bVar4 = Global_22350.f_8406;
				}
				else
				{
					UNK_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &bVar4);
				}
				UNK_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, bVar4, 0);
				func_69(fVar42);
				UNK_0x070005E852D4C0E9(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						UNK_0x6D99DF8263D35CE5(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						UNK_0x21994591120B91F0(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						UNK_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						UNK_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 8)
					{
						UNK_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				UNK_0xE0026608C37C7C41(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_22350.f_4768 != 0)
				{
					func_83(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_68(Global_22350.f_4768, 1, &iVar47, &iVar48, &iVar49, &bVar50);
					UNK_0x539E86AE011A8B38(func_77(Global_22350.f_4768), func_74(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
				}
				fVar51 = (fVar51 + (((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22350.f_4766 > 0)
				{
					if ((UNK_0x1C0640BA9A7327B3() - Global_22350.f_4767) > Global_22350.f_4766)
					{
						StringCopy(&(Global_22350.f_4690), "", 24);
						Global_22350.f_4766 = -1;
					}
				}
			}
			if (UNK_0x12AB0310C2281427(&(Global_4268421.f_21)) != 0 && Global_4268421.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_4268421.f_67 != 0)
				{
					func_83(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_69(fVar42);
				UNK_0xA1868A78E3C3D56B(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						UNK_0x6D99DF8263D35CE5(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						UNK_0x21994591120B91F0(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UNK_0x5D2FD44A8C086959(fVar42, (fVar51 + 0.00277776f));
				UNK_0xA402F6C87C08815C(2, &iVar1, &iVar2, &iVar3, &bVar4);
				func_73(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, bVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					bVar4 = Global_22350.f_8406;
				}
				else
				{
					UNK_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &bVar4);
				}
				UNK_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, bVar4, 0);
				func_69(fVar42);
				UNK_0x070005E852D4C0E9(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						UNK_0x6D99DF8263D35CE5(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						UNK_0x21994591120B91F0(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				UNK_0xE0026608C37C7C41(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4268421.f_67 != 0)
				{
					func_83(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_68(Global_4268421.f_67, 1, &iVar47, &iVar48, &iVar49, &bVar50);
					UNK_0x539E86AE011A8B38(func_77(Global_4268421.f_67), func_74(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
				}
				fVar51 = (fVar51 + (((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4268421.f_65 > 0)
				{
					if ((UNK_0x1C0640BA9A7327B3() - Global_4268421.f_66) > Global_4268421.f_65)
					{
						StringCopy(&(Global_4268421.f_21), "", 16);
						Global_4268421.f_65 = -1;
					}
				}
			}
			func_60(iVar60, iParam1, bParam8, 0, 0, 0, bParam4, 1, 0);
			UNK_0xD02CE72B4B66DC29(76, 84);
			UNK_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22350.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_22350.f_5218;
			if (Global_22350.f_5729)
			{
				iVar98 = (Global_22350.f_5732 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_22350.f_5745[iVar6] != 0f)
				{
					fVar56 = Global_22350.f_5745[iVar6];
				}
				if (Global_22350.f_5729)
				{
					iVar6 = Global_22350.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22350.f_5738 && iVar9 < Global_22350.f_5225)
				{
					bVar33 = true;
					if (Global_22350.f_5739 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_22350.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22350.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22347 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_22350.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					bVar105 = 255;
					if (Global_22350.f_8409)
					{
						UNK_0xA402F6C87C08815C(Global_22350.f_8408, &iVar102, &iVar103, &iVar104, &bVar105);
					}
					else
					{
						UNK_0xA402F6C87C08815C(true, &iVar102, &iVar103, &iVar104, &bVar105);
					}
					UNK_0x539E86AE011A8B38("CommonMenu", "Gradient_Nav", (Global_22347 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, bVar105, 0);
					Global_22350.f_5877 = fVar35;
				}
				bVar8 = false;
				while (bVar8 < Global_22350.f_5226)
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_22350.f_5089[iVar6], bVar8) || Global_22350.f_5056[bVar8] == 5)
					{
						if (Global_22350.f_5729)
						{
							iVar19 = Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + bVar8)];
							iVar20 = Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + bVar8)];
							iVar21 = Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + bVar8)];
							iVar22 = Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + bVar8)];
							iVar23 = Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + bVar8)];
						}
						else
						{
							Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + bVar8)] = iVar19;
							Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + bVar8)] = iVar20;
							Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + bVar8)] = iVar21;
							Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + bVar8)] = iVar22;
							Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + bVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_22350.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + bVar8) == Global_22350.f_6008[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_22350.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + bVar8) == Global_22350.f_6008[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_22350.f_5062[bVar8] != -1f)
						{
							fVar34 = ((Global_22347 + 0.0046875f) + Global_22350.f_5062[bVar8]);
						}
						if ((bVar8 < 4 && Global_22350.f_5062[bVar8 + 1] != -1f) && fVar34 < Global_22350.f_5062[bVar8 + 1])
						{
							fVar46 = (Global_22350.f_5062[bVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_22347 + Global_22349) - 0.0046875f) - fVar34);
						}
						if ((Global_22350.f_5075[bVar8] && Global_22350.f_5874) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_22350.f_5056[bVar8])
						{
							case 0:
								break;
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_58(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
											UNK_0xBBA442527B4BB1A6(&(Global_22350.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0x6B012227B3921E18(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0x6D99DF8263D35CE5(Global_22350.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0x21994591120B91F0(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
										{
											fVar43 = UNK_0x79E367314AFBB5CA(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_83(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_22350.f_4433[(iVar22 + iVar14)] == 2 || Global_22350.f_4433[(iVar22 + iVar14)] == 51) || Global_22350.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_22350.f_5083[bVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[bVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar43;
										Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar44;
										if (Global_22350.f_5083[bVar8] == 2)
										{
											iVar101 = (bVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_22350.f_5083[iVar101] == 2)
												{
													Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] = (Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] - Global_22350.f_5068[bVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)];
										fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + bVar8)];
									}
									if (bVar54)
									{
										if (func_83(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[bVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_83(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(26, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_77(26), func_74(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
										if (func_83(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_83(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(27, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_77(27), func_74(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										func_58(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_57(bVar32);
										}
										UNK_0x070005E852D4C0E9(&(Global_22350.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0x6B012227B3921E18(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0x6D99DF8263D35CE5(Global_22350.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0x21994591120B91F0(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar28)] == 2 || Global_22350.f_4433[(iVar22 + iVar28)] == 51) || Global_22350.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_83(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_83(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_68(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &bVar50);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[bVar8] == 2)
															{
																UNK_0x539E86AE011A8B38(func_77(Global_22350.f_4433[(iVar22 + iVar28)]), func_74(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
															else
															{
																UNK_0x539E86AE011A8B38(func_77(Global_22350.f_4433[(iVar22 + iVar28)]), func_74(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22350.f_5083[bVar8] == 2)
										{
											UNK_0xE0026608C37C7C41(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											UNK_0xE0026608C37C7C41((fVar34 + fVar42), fVar35, 0);
											if (func_56() && UNK_0x8A22C4C08282BF26(joaat("FM_MISSION_CREATOR")) > 0)
											{
												if (bVar8 == 0)
												{
													func_58(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													UNK_0xD3539A877EC25E86(0f, (0.35f * 0.7f));
													UNK_0x7178F32F6742C936(255, 255, 255, 150);
													UNK_0xC1032CAC14DE468A((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), 0);
													UNK_0x070005E852D4C0E9(&cVar107);
													UNK_0x6D99DF8263D35CE5((Global_22350.f_5738 + iVar30));
													UNK_0xE0026608C37C7C41((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar14)] != 2 && Global_22350.f_4433[(iVar22 + iVar14)] != 51) && Global_22350.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_83(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_83(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_68(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &bVar50);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																UNK_0x539E86AE011A8B38(func_77(Global_22350.f_4433[(iVar22 + iVar14)]), func_74(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
															else if (Global_22350.f_5083[bVar8] == 2)
															{
																UNK_0x539E86AE011A8B38(func_77(Global_22350.f_4433[(iVar22 + iVar14)]), func_74(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
															else
															{
																UNK_0x539E86AE011A8B38(func_77(Global_22350.f_4433[(iVar22 + iVar14)]), func_74(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							case 2:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_58(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_57(bVar32);
										}
										UNK_0xBBA442527B4BB1A6("NUMBER");
										UNK_0x6D99DF8263D35CE5(Global_22350.f_3918[iVar20]);
										fVar43 = UNK_0x79E367314AFBB5CA(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[bVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[bVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)];
									}
									if (bVar54)
									{
										if (func_83(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[bVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_83(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(26, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_77(26), func_74(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
										if (func_83(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_83(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(27, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_77(27), func_74(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_58(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										func_55((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							case 3:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_58(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_57(bVar32);
										}
										UNK_0xBBA442527B4BB1A6("NUMBER");
										UNK_0x21994591120B91F0(Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
										fVar43 = UNK_0x79E367314AFBB5CA(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[bVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[bVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)];
									}
									if (bVar54)
									{
										if (func_83(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[bVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_83(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(26, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_77(26), func_74(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
										if (func_83(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_83(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(27, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_77(27), func_74(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
									}
									func_58(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
									func_54((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							case 4:
								if (bVar33)
								{
									if (func_83(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22350.f_5729)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_22350.f_5083[bVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_22350.f_5083[bVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar42;
											Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)];
											fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + bVar8)];
										}
										if (bVar54)
										{
											if (func_83(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[bVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_83(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_68(26, 1, &iVar47, &iVar48, &iVar49, &bVar50);
													if (iVar5 == 1)
													{
														UNK_0x539E86AE011A8B38(func_77(26), func_74(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
													}
												}
											}
											if (func_83(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_83(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_68(27, 1, &iVar47, &iVar48, &iVar49, &bVar50);
													if (iVar5 == 1)
													{
														UNK_0x539E86AE011A8B38(func_77(27), func_74(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_83(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(Global_22350.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &bVar50);
												UNK_0x539E86AE011A8B38(func_77(Global_22350.f_4433[iVar22]), func_74(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_53(Global_22350.f_4433[iVar22])), (fVar37 * func_53(Global_22350.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, bVar50, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_22350.f_5056[bVar8] == 5)
						{
							if (Global_22350.f_5068[bVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22350.f_5068[bVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22350.f_5068[bVar8]);
							if (Global_22350.f_5075[bVar8])
							{
								if (func_83(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22350.f_5068[bVar8]);
					}
					bVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_22350.f_8038[iVar9] = iVar6;
						Global_22350.f_5740 = iVar6;
						iVar9++;
						if (Global_22350.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_22350.f_5745[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_22350.f_5728)
					{
						Global_22350.f_5485[iVar6] = 1;
						if (Global_22350.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22350.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22350.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22350.f_5728)
			{
				Global_22350.f_5730 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_22350.f_5733 = iVar11;
				Global_22350.f_5731 = iVar10;
				Global_22350.f_5728 = 1;
			}
		}
		if (!Global_22350.f_5729)
		{
			Global_22350.f_5732 = iVar9;
			Global_22350.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22350.f_5876 = fVar51;
	Global_22350.f_5878 = UNK_0x1C0640BA9A7327B3();
	UNK_0xD668DA5CA4A1D2C8(Global_22350.f_5876);
	if (!Global_22350.f_8382)
	{
		func_27(0);
	}
	Global_22350.f_8382 = 0;
	if (bParam2)
	{
		UNK_0x3584F71E5CA29322(10);
	}
	UNK_0x3584F71E5CA29322(6);
	UNK_0x3584F71E5CA29322(7);
	UNK_0x3584F71E5CA29322(9);
	UNK_0x3584F71E5CA29322(8);
	if (bParam0)
	{
		func_52(1);
	}
	UNK_0xD59EF13BB60323B9();
}

void func_52(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

float func_53(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
	}
	return 1f;
}

void func_54(float fParam0, float fParam1, bool bParam2, bool bParam3, int iParam4)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0x21994591120B91F0(bParam3, iParam4);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_55(float fParam0, float fParam1, bool bParam2, bool bParam3, int iParam4)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0x6D99DF8263D35CE5(bParam3);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_56()
{
	return UNK_0xC146D5FBD23C6954(-1762644250);
}

void func_57(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (bParam0)
	{
		UNK_0xA402F6C87C08815C(Global_22350.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		UNK_0xA402F6C87C08815C(Global_22350.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
}

void func_58(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (bParam2)
	{
		if (bParam3)
		{
			func_59(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					UNK_0xA402F6C87C08815C(true, &iVar0, &iVar1, &iVar2, &bVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				UNK_0xA402F6C87C08815C(14, &iVar0, &iVar1, &iVar2, &bVar3);
				UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				UNK_0xA402F6C87C08815C(12, &iVar0, &iVar1, &iVar2, &bVar3);
				UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			UNK_0x7178F32F6742C936(155, 155, 155, 255);
		}
		else
		{
			UNK_0x7178F32F6742C936(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			UNK_0x7178F32F6742C936(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			UNK_0xA402F6C87C08815C(true, &iVar0, &iVar1, &iVar2, &bVar3);
			UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, bVar3);
		}
	}
	else if (bParam0)
	{
		UNK_0x7178F32F6742C936(155, 155, 155, 255);
	}
	else
	{
		UNK_0x7178F32F6742C936(155, 155, 155, 255);
	}
	UNK_0xD3539A877EC25E86(0f, 0.35f);
	UNK_0xEEF67251E263A87F(1);
	if (bParam5)
	{
		UNK_0xD3539A877EC25E86(0f, 0.425f);
		UNK_0x7BBAC160090910C3(4);
	}
	else if (bParam6)
	{
		UNK_0xD3539A877EC25E86(0f, 0.425f);
		UNK_0x7BBAC160090910C3(6);
	}
	else
	{
		UNK_0x7BBAC160090910C3(0);
	}
	UNK_0xF1F881BAAAFB43B1(0f, 1f);
	UNK_0xAAE406A7DA443B93(0);
	UNK_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	UNK_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_59(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 8;
			*iParam2 = 8;
			*iParam3 = 8;
			break;
		case 1:
			*iParam1 = 37;
			*iParam2 = 37;
			*iParam3 = 39;
			break;
		case 22:
			*iParam1 = 140;
			*iParam2 = 146;
			*iParam3 = 154;
			break;
		case 23:
			*iParam1 = 91;
			*iParam2 = 93;
			*iParam3 = 94;
			break;
		case 6:
			*iParam1 = 81;
			*iParam2 = 84;
			*iParam3 = 89;
			break;
		case 111:
			*iParam1 = 240;
			*iParam2 = 240;
			*iParam3 = 240;
			break;
		case 28:
			*iParam1 = 150;
			*iParam2 = 8;
			*iParam3 = 0;
			break;
		case 34:
			*iParam1 = 38;
			*iParam2 = 3;
			*iParam3 = 6;
			break;
		case 88:
			*iParam1 = 245;
			*iParam2 = 137;
			*iParam3 = 15;
			break;
		case 45:
			*iParam1 = 74;
			*iParam2 = 22;
			*iParam3 = 7;
			break;
		case 56:
			*iParam1 = 45;
			*iParam2 = 58;
			*iParam3 = 53;
			break;
		case 58:
			*iParam1 = 71;
			*iParam2 = 120;
			*iParam3 = 60;
			break;
		case 54:
			*iParam1 = 77;
			*iParam2 = 98;
			*iParam3 = 104;
			break;
		case 73:
			*iParam1 = 14;
			*iParam2 = 49;
			*iParam3 = 109;
			break;
		case 68:
			*iParam1 = 22;
			*iParam2 = 34;
			*iParam3 = 72;
			break;
		case 140:
			*iParam1 = 0;
			*iParam2 = 174;
			*iParam3 = 239;
			break;
		case 131:
			*iParam1 = 255;
			*iParam2 = 183;
			*iParam3 = 0;
			break;
		case 90:
			*iParam1 = 142;
			*iParam2 = 140;
			*iParam3 = 70;
			break;
		case 97:
			*iParam1 = 156;
			*iParam2 = 141;
			*iParam3 = 113;
			break;
		case 89:
			*iParam1 = 145;
			*iParam2 = 115;
			*iParam3 = 71;
			break;
		case 105:
			*iParam1 = 98;
			*iParam2 = 68;
			*iParam3 = 40;
			break;
		case 100:
			*iParam1 = 124;
			*iParam2 = 27;
			*iParam3 = 68;
			break;
		case 99:
			*iParam1 = 114;
			*iParam2 = 42;
			*iParam3 = 63;
			break;
		case 136:
			*iParam1 = 246;
			*iParam2 = 151;
			*iParam3 = 153;
			break;
		case 49:
			*iParam1 = 32;
			*iParam2 = 32;
			*iParam3 = 44;
			break;
		case 146:
			*iParam1 = 26;
			*iParam2 = 1;
			*iParam3 = 23;
			break;
		default:
			*iParam1 = 255;
			*iParam2 = 255;
			*iParam3 = 255;
			break;
	}
}

void func_60(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	if (!func_88(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (bParam3 && !func_85(bParam4, bParam8))
	{
		return;
	}
	if (func_66())
	{
		return;
	}
	if (UNK_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_63(UNK_0xD803B885F5E47A62(), 0))
		{
			return;
		}
	}
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (UNK_0xDAC65F45B0B2D176() == 0 || UNK_0x4FD68D5821EE3E19())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (UNK_0xB8E3620B82AD47D7(2))
		{
			bVar1 = false;
			while (bVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[bVar1] != 361)
				{
					StringCopy(&(Global_22350.f_4771[bVar1 /*16*/]), UNK_0xF59058FCB716F903(2, Global_22350.f_5026[bVar1], true), 64);
				}
				else if (Global_22350.f_5039[bVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[bVar1 /*16*/]), UNK_0xE32F7AC5E6DF304A(2, Global_22350.f_5039[bVar1], true), 64);
				}
				bVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			UNK_0x7C19E5E4784BD7CF((1f - (Global_22350.f_5081 / 100f)));
			UNK_0x7E60D21B163E9D56();
			if (UNK_0x0EFF6B4415DAF4A1())
			{
				UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				UNK_0x1200CC973A2399C8(true);
				UNK_0x7E60D21B163E9D56();
			}
			bVar1 = false;
			while (bVar1 < Global_22350.f_4769)
			{
				if (UNK_0x12AB0310C2281427(&(Global_22350.f_4964[bVar1 /*4*/])) != UNK_0x12AB0310C2281427("PREV"))
				{
					UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(bVar1);
					func_62(&(Global_22350.f_4771[bVar1 /*16*/]));
					iVar2 = bVar1 + 1;
					while (iVar2 < 12 && UNK_0x12AB0310C2281427(&(Global_22350.f_4964[iVar2 /*4*/])) == UNK_0x12AB0310C2281427("PREV"))
					{
						func_62(&(Global_22350.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22350.f_5013[bVar1] == -1)
					{
						func_61(&(Global_22350.f_4964[bVar1 /*4*/]));
					}
					else
					{
						bVar3 = Global_22350.f_5013[bVar1];
						if (bParam2 >= 0)
						{
							bVar3 = bParam2;
						}
						UNK_0x7ACC3006A87F8B39(&(Global_22350.f_4964[bVar1 /*4*/]));
						if (bParam5)
						{
							UNK_0x164431059FF80580(bVar3, 70);
						}
						else
						{
							UNK_0x6D99DF8263D35CE5(bVar3);
						}
						UNK_0x779B34565F4D71B1();
					}
					if (UNK_0x0EFF6B4415DAF4A1())
					{
						if (Global_22350.f_5026[bVar1] != 361 && UNK_0xEAE0D21A50E6C7F4(Global_22350.f_5052, bVar1))
						{
							UNK_0x1200CC973A2399C8(true);
							UNK_0x3CAEA85DA607305E(Global_22350.f_5026[bVar1]);
						}
						else
						{
							UNK_0x1200CC973A2399C8(false);
							UNK_0x3CAEA85DA607305E(361);
						}
					}
					UNK_0x7E60D21B163E9D56();
				}
				bVar1++;
			}
			if (UNK_0x12AB0310C2281427(&(Global_4268421.f_16)) != UNK_0x12AB0310C2281427(""))
			{
				UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(Global_22350.f_4769);
				func_62(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_61(&(Global_4268421.f_16));
				}
				else
				{
					bVar4 = Global_22350.f_5013[bVar1];
					if (bParam2 >= 0)
					{
						bVar4 = bParam2;
					}
					UNK_0x7ACC3006A87F8B39(&(Global_4268421.f_16));
					if (bParam5)
					{
						UNK_0x164431059FF80580(bVar4, 70);
					}
					else
					{
						UNK_0x6D99DF8263D35CE5(bVar4);
					}
					UNK_0x779B34565F4D71B1();
				}
				UNK_0x7E60D21B163E9D56();
			}
			UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(80);
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				UNK_0x3CAEA85DA607305E(true);
			}
			else
			{
				UNK_0x3CAEA85DA607305E(false);
			}
			UNK_0x7E60D21B163E9D56();
			Global_22350.f_4770 = 1;
		}
		bVar1 = false;
		while (bVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[bVar1] != -1)
			{
				if (bParam2 > 0)
				{
					UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					UNK_0x3CAEA85DA607305E(bVar1);
					UNK_0x7ACC3006A87F8B39(&(Global_22350.f_4964[bVar1 /*4*/]));
					if (bParam5)
					{
						UNK_0x164431059FF80580(bParam2, 70);
					}
					else
					{
						UNK_0x6D99DF8263D35CE5(bParam2);
					}
					UNK_0x779B34565F4D71B1();
					UNK_0x7E60D21B163E9D56();
				}
			}
			bVar1++;
		}
		if (Global_4268421.f_20 != -1)
		{
			if (bParam2 > 0)
			{
				UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				UNK_0x3CAEA85DA607305E(bVar1);
				UNK_0x7ACC3006A87F8B39(&(Global_4268421.f_16));
				if (bParam5)
				{
					UNK_0x164431059FF80580(bParam2, 70);
				}
				else
				{
					UNK_0x6D99DF8263D35CE5(bParam2);
				}
				UNK_0x779B34565F4D71B1();
				UNK_0x7E60D21B163E9D56();
			}
		}
		UNK_0xD02CE72B4B66DC29(76, 66);
		UNK_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8417)
			{
				UNK_0x744B56EE9DE7B57F(15, 0f, -0.0375f);
				Global_22350.f_8417 = 1;
			}
		}
		else if (Global_22350.f_8417)
		{
			UNK_0xA5E3ADAAA4CD5D6C(15);
			Global_22350.f_8417 = 0;
		}
		UNK_0xD59EF13BB60323B9();
		if (Global_22350.f_5055)
		{
			UNK_0xD02CE72B4B66DC29(82, 66);
			UNK_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
			UNK_0xEF45C43067063F18(Global_22350.f_5660[iVar0 /*10*/], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			UNK_0xD59EF13BB60323B9();
		}
		else
		{
			UNK_0x6567AE843FADBA94(Global_22350.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_61(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_62(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

bool func_63(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_64(-1, 0) == 8;
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

int func_64(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_65();
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

int func_65()
{
	return Global_1312745;
}

bool func_66()
{
	vector3 vVar0;

	if (Global_19486.f_1 > 3)
	{
		return true;
	}
	if (func_67())
	{
		vVar0 = { 0f, -500f, 0f };
		UNK_0x1CFAC524932A967E(&vVar0);
		if (Global_19431 == 0)
		{
			if (vVar0.y > -119f)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (vVar0.y > -101f)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_67()
{
	if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		return true;
	}
	return false;
}

void func_68(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	UNK_0xA402F6C87C08815C(true, bParam2, bParam3, bParam4, bParam5);
	*bParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*bParam2 = 194;
			*bParam3 = 80;
			*bParam4 = 80;
			break;
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*bParam2 = 0;
				*bParam3 = 0;
				*bParam4 = 0;
			}
			break;
		case 54:
			*bParam5 = 100;
			break;
		case 62:
			*bParam5 = 100;
			break;
		case 55:
			UNK_0xA402F6C87C08815C(24, bParam2, bParam3, bParam4, bParam5);
			*bParam5 = 255;
			break;
	}
}

void func_69(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	UNK_0xA402F6C87C08815C(true, &iVar0, &iVar1, &iVar2, &bVar3);
	UNK_0x7BBAC160090910C3(0);
	UNK_0xD3539A877EC25E86(0f, 0.35f);
	UNK_0x4B9228CE1CF0DACA(2);
	UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, bVar3);
	UNK_0xF1F881BAAAFB43B1(fParam0, ((Global_22347 + Global_22349) - 0.0046875f));
	UNK_0xAAE406A7DA443B93(0);
	UNK_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	UNK_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_70(float fParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0x6D99DF8263D35CE5(bParam3);
	UNK_0x6D99DF8263D35CE5(bParam4);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

float func_71(bool bParam0, bool bParam1, bool bParam2)
{
	if (!UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		if (UNK_0x12AB0310C2281427(bParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_72();
	UNK_0xBBA442527B4BB1A6(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	UNK_0x6D99DF8263D35CE5(bParam2);
	return UNK_0x79E367314AFBB5CA(1);
}

void func_72()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	UNK_0xA402F6C87C08815C(true, &iVar0, &iVar1, &iVar2, &bVar3);
	if (Global_22350.f_8392)
	{
		iVar0 = Global_22350.f_8388;
		iVar1 = Global_22350.f_8389;
		iVar2 = Global_22350.f_8390;
		bVar3 = Global_22350.f_8391;
	}
	UNK_0x7BBAC160090910C3(0);
	UNK_0xD3539A877EC25E86(0f, 0.35f);
	UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, bVar3);
	UNK_0xF1F881BAAAFB43B1((Global_22347 + 0.0046875f), ((Global_22347 + Global_22349) - 0.0046875f));
	UNK_0xAAE406A7DA443B93(0);
	UNK_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	UNK_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_73(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	UNK_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, bParam7, 0);
}

char* func_74(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;

	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_7029[iParam0 /*16*/])))
	{
		if (UNK_0x12AB0310C2281427(&(Global_22350.f_7029[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_76(UNK_0xD803B885F5E47A62()) };
			if (UNK_0x205FB5BBF81D8900(&Var19, &uVar3))
			{
				return func_75(&uVar3);
			}
		}
		else
		{
			return func_75(&(Global_22350.f_7029[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_75(var uParam0)
{
	return uParam0;
}

struct<13> func_76(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

char* func_77(int iParam0)
{
	var uVar0;
	struct<13> Var16;

	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_6020[iParam0 /*16*/])))
	{
		if (UNK_0x12AB0310C2281427(&(Global_22350.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_76(UNK_0xD803B885F5E47A62()) };
			UNK_0x205FB5BBF81D8900(&Var16, &uVar0);
			return func_75(&uVar0);
		}
		else
		{
			return func_75(&(Global_22350.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_78(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;

	if (Global_22350.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22350.f_5218 >= 128)
	{
		return;
	}
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 < Global_22350.f_5741)
	{
		return;
	}
	if (Global_22350.f_5218 != iParam0)
	{
		Global_22350.f_5218 = iParam0;
		Global_22350.f_5219 = 0;
	}
	iVar0 = Global_22350.f_5056[Global_22350.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22350.f_5219 < 4 && iVar0 != 1)
		{
			Global_22350.f_5219++;
			iVar0 = Global_22350.f_5056[Global_22350.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]), bParam1, 24);
	if (!UNK_0xEA6BC48857E0AC4C(bParam1) && !UNK_0xEF07223F00EBE9C9(bParam1))
	{
	}
	Global_22350.f_1610[Global_22350.f_5220] = bParam3;
	Global_22350.f_1867[Global_22350.f_5220] = iParam4;
	Global_22350.f_5220++;
	if (!bParam3)
	{
		func_81(Global_22350.f_5218, 1);
	}
	else
	{
		func_81(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_80(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_83(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22350.f_5068[Global_22350.f_5219])
		{
			Global_22350.f_5068[Global_22350.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_79(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
			if (fVar4 > Global_22350.f_5745[iParam0])
			{
				Global_22350.f_5745[iParam0] = fVar4;
			}
		}
	}
	UNK_0x5D96D8530B3D0904(&(Global_22350.f_5089[iParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 1;
	Global_22350.f_5742 = (Global_22350.f_5220 - 1);
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = iParam2;
}

float func_79(bool bParam0)
{
	if (!UNK_0xEF07223F00EBE9C9(bParam0))
	{
	}
	return UNK_0x9153358B38685E6E(0.35f, 0);
}

float func_80(bool bParam0)
{
	if (!UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		if (UNK_0x12AB0310C2281427(bParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_58(0, 1, 0, 0, 0, 0, 0);
	UNK_0xBBA442527B4BB1A6(bParam0);
	return UNK_0x79E367314AFBB5CA(1);
}

void func_81(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

bool func_82()
{
	int iVar0;
	int iVar1;
	float fVar2;

	UNK_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return true;
	}
	return false;
}

bool func_83(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;

	StringCopy(&cVar0, func_77(iParam0), 64);
	StringCopy(&cVar16, func_74(iParam0, bParam1), 64);
	if (UNK_0x12AB0310C2281427(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			UNK_0xE5AC5CA7914F5BAE(&iVar32, &iVar33);
			fVar35 = UNK_0x33D480CCE15C991A(0);
			if (func_82())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_82())
			{
				fVar34 = 1f;
			}
			if (UNK_0x8A22C4C08282BF26(joaat("DIRECTOR_MODE")) > 0)
			{
				UNK_0x8A462DAA7D1D9008(&iVar32, &iVar33);
			}
			iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar32) / fVar34));
			iVar33 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) / fVar34));
		}
		else
		{
			UNK_0x8A462DAA7D1D9008(&iVar32, &iVar33);
		}
		vVar37 = { UNK_0xDE43A059FBFFF38A(&cVar0, &cVar16) };
		vVar37.x = (vVar37.x * (func_84(iParam0) / fVar34));
		vVar37.f_1 = (vVar37.y * (func_84(iParam0) / fVar34));
		if (!bParam2)
		{
			vVar37.x = (vVar37.x - 2f);
			vVar37.f_1 = (vVar37.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar37.x = 288f;
			vVar37.f_1 = 106f;
		}
		if (iParam0 == 29 && UNK_0x12AB0310C2281427(&(Global_22350.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			vVar37.x = 106f;
			vVar37.f_1 = 106f;
		}
		*fParam3 = ((vVar37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((vVar37.y / IntToFloat(iVar33)) / (vVar37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!UNK_0x0D71AFA59EF5104F() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return true;
	}
	return false;
}

float func_84(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
		case 61:
			return 0.8f;
	}
	return 1f;
}

bool func_85(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return true;
	}
	if ((((((((!UNK_0x0F1CCD77290EE12F() || (func_87(8, -1) && func_86() != 65)) || (UNK_0x8BB17FEBE0394018() != 0 && !bParam1)) || (UNK_0x991B1F0980C62628() && !bParam0)) || UNK_0x590766B2AF637235()) || Global_76882) || Global_22350.f_8416) || UNK_0xE57E602827E07C9D()) || Global_98796.f_1417)
	{
		return false;
	}
	return true;
}

int func_86()
{
	return Global_1312812;
}

bool func_87(bool bParam0, int iParam1)
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

bool func_88(int iParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;

	if (iParam2 == -1)
	{
		if (UNK_0x8CD06866876216F2() && UNK_0x2E9F2B9C010D34D9())
		{
			iParam2 = UNK_0xF35A91B88CC1915F();
		}
	}
	StringCopy(&cVar0, UNK_0xBB0808A181D4745C(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = UNK_0x12AB0310C2281427(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*iParam0 = iVar17;
			return true;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*iParam0 = iVar18;
			return true;
		}
	}
	return false;
}

void func_89(struct<21> Param0)
{
	char cVar0[16];
	int iVar4;

	func_34(0, 0);
	func_96(1, 1, 0, 0, 0);
	func_95(1, 2, 1, 1, 1);
	func_94("DART_A_SET");
	func_78(0, vLocal_210[0 /*3*/], 0, 1, 0, 0);
	StringCopy(&cVar0, "DART_A_S", 16);
	StringIntConCat(&cVar0, iLocal_198, 16);
	func_78(0, &cVar0, 0, 1, 0, 0);
	if (UNK_0xEAE0D21A50E6C7F4(Local_243.f_1, Local_369[UNK_0x57270EE11514DC67() /*5*/].f_1))
	{
		func_93(201, func_103(Param0, 1), -1, 0);
	}
	else
	{
		func_93(201, func_103(Param0, 2), -1, 0);
	}
	if (UNK_0x91E3F625EF57450D(2))
	{
		iVar4 = 225;
	}
	else
	{
		iVar4 = 202;
	}
	func_93(iVar4, "DART_A_MENU_C", -1, 0);
	func_92(0, 1, 0, 0, 0);
	func_91(iLocal_82, 1, 1);
	func_90("DART_A_GNT", 0, 0);
}

void func_90(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;

	StringCopy(&(Global_22350.f_4690), sParam0, 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = iParam1;
	Global_22350.f_4767 = UNK_0x1C0640BA9A7327B3();
	Global_22350.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_91(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	Global_22350.f_5739 = iParam0;
	Global_22350.f_5874 = iParam2;
	if (Global_22350.f_5739 < Global_22350.f_5738)
	{
		Global_22350.f_5738 = Global_22350.f_5739;
	}
	else if ((Global_22350.f_5729 && Global_22350.f_5739 > Global_22350.f_5740) || (!Global_22350.f_5729 && Global_22350.f_5739 >= (Global_22350.f_5738 + Global_22350.f_5225)))
	{
		iVar0 = Global_22350.f_5738;
		while (iVar0 <= Global_22350.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22350.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22350.f_5225 && Global_22350.f_5738 < 128)
		{
			Global_22350.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22350.f_5738;
			while (iVar0 <= Global_22350.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22350.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22350.f_4690), "", 24);
		StringCopy(&(Global_4268421.f_21), "", 16);
	}
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5075[0] = iParam0;
	Global_22350.f_5075[1] = iParam1;
	Global_22350.f_5075[2] = iParam2;
	Global_22350.f_5075[3] = iParam3;
	Global_22350.f_5075[4] = iParam4;
}

void func_93(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;

	sVar0 = UNK_0xF59058FCB716F903(2, iParam0, true);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		UNK_0x5D96D8530B3D0904(&(Global_22350.f_5052), Global_22350.f_4769);
	}
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769 /*4*/]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_94(char* sParam0)
{
	int iVar0;

	StringCopy(&(Global_22350.f_1), sParam0, 16);
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_95(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5083[0] = iParam0;
	Global_22350.f_5083[1] = iParam1;
	Global_22350.f_5083[2] = iParam2;
	Global_22350.f_5083[3] = iParam3;
	Global_22350.f_5083[4] = iParam4;
}

void func_96(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5056[0] = iParam0;
	Global_22350.f_5056[1] = iParam1;
	Global_22350.f_5056[2] = iParam2;
	Global_22350.f_5056[3] = iParam3;
	Global_22350.f_5056[4] = iParam4;
	Global_22350.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22350.f_5226++;
	}
}

void func_97()
{
	int iVar0;

	if (!bLocal_84)
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		bLocal_84 = true;
	}
	if (UNK_0xBFC0798A6E3417F9(2, 201))
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	}
	if (UNK_0x91E3F625EF57450D(2))
	{
		iVar0 = 225;
	}
	else
	{
		iVar0 = 202;
	}
	if (UNK_0xBFC0798A6E3417F9(2, iVar0))
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	}
	if (UNK_0xBFC0798A6E3417F9(2, 174))
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_98(&iLocal_198, 5, 0, 1);
		bLocal_81 = true;
	}
	if (UNK_0xBFC0798A6E3417F9(2, 175))
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_98(&iLocal_198, 5, 1, 1);
		bLocal_81 = true;
	}
	if (bLocal_81)
	{
		Global_4456448.f_197232 = 1;
		Global_4456448.f_197233 = uLocal_204[iLocal_198];
		bLocal_81 = false;
	}
}

void func_98(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (bParam3)
	{
		iVar0 = (iParam1 - 1);
	}
	else
	{
		iVar0 = iParam1;
	}
	iVar1 = 0;
	if (*iParam0 < iVar1)
	{
		*iParam0 = iVar1;
	}
	switch (iParam2)
	{
		case 1:
			if (*iParam0 < iVar0)
			{
				*iParam0++;
			}
			else if (*iParam0 >= iVar0)
			{
				*iParam0 = iVar1;
			}
			break;
		case 0:
			if (*iParam0 > iVar1)
			{
				*iParam0 = (*iParam0 - 1);
			}
			else if (*iParam0 <= iVar0)
			{
				*iParam0 = iVar0;
			}
			break;
	}
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (UNK_0x91E3F625EF57450D(2))
			{
				return 225;
			}
			else
			{
				return 202;
			}
			break;
	}
	return 202;
}

bool func_100(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_5, UNK_0x57270EE11514DC67()))
			{
				return true;
			}
			break;
		case 1:
			if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_6, UNK_0x57270EE11514DC67()))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_101(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return UNK_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_102(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;

	Var0 = -844166385;
	Var0.f_1 = UNK_0xD803B885F5E47A62();
	Var0.f_3 = uParam1;
	Var0.f_4 = iParam0;
	func_6(&(Var0.f_2), 1, bParam2);
	func_6(&(Var0.f_2), 3, 1);
	UNK_0xFB061A86A7AC749F(1, &Var0, 6, func_49());
}

bool func_103(struct<13> Param0, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, int iParam21)
{
	if (UNK_0x91E3F625EF57450D(2))
	{
		switch (iParam21)
		{
			case 5:
				if (Param0 == 0)
				{
					return "DART_A_LWAITPC";
				}
				else
				{
					return "ARMW_A_LWAITPC";
				}
				break;
			case 2:
				if (Param0 == 0)
				{
					return "DART_A_TWO";
				}
				else
				{
					return "ARMW_A_TWOPC";
				}
				break;
			case 4:
				if (Param0 == 0)
				{
					return "";
				}
				else
				{
					return "ARMW_A_PWAITPC";
				}
				break;
		}
	}
	return Param0.f_12[iParam21];
}

void func_104(bool bParam0, bool bParam1)
{
	if (!UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		if (bParam1)
		{
			if (!func_106(bParam0))
			{
				func_105(bParam0);
			}
		}
		else if (func_106(bParam0))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
}

void func_105(bool bParam0)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

bool func_106(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_107(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = 0;
	bParam0->f_2 = 0;
	bParam0->f_3 = 0;
	bParam0->f_5 = 0;
	bParam0->f_6 = 0;
	bParam0->f_7 = 0;
	bParam0->f_4 = 0;
	bParam0->f_8 = 0;
}

void func_108(var uParam0, var uParam1)
{
	struct<21> Var0;
	bool bVar21;
	bool bVar22;
	bool bVar23;

	Var0 = { Local_323[uParam0->f_4 /*21*/] };
	bVar21 = true;
	if (bLocal_83)
	{
		bVar21 = false;
		func_111(uParam0, 4);
	}
	if ((UNK_0xFEBC1E4EC9E001F0() && !func_106(func_103(Var0, 3))) || func_109())
	{
		bVar21 = false;
		func_111(uParam0, 4);
	}
	if (uParam1->f_10 >= 0)
	{
		bVar21 = false;
	}
	if ((!uParam1->f_1[uParam0->f_4] && (*uParam0 >= 1 && *uParam0 <= 3)) || UNK_0xEAE0D21A50E6C7F4(Local_243.f_3, uParam0->f_4))
	{
		bVar21 = false;
		func_111(uParam0, 4);
	}
	switch (*uParam0)
	{
		case 0:
			func_150(&(uParam0->f_1));
			bVar22 = true;
			bVar23 = false;
			while (bVar23 <= 1)
			{
				if ((bVar23 != uParam0->f_4 && uParam1->f_1[bVar23]) && !UNK_0xEAE0D21A50E6C7F4(Local_243.f_3, bVar23))
				{
					uParam0->f_4 = bVar23;
					uParam1->f_14 = 4f;
					func_111(uParam0, 1);
					Jump @648; //curOff = 275
				}
				else if (uParam1->f_1[uParam0->f_4])
				{
					bVar22 = false;
				}
				bVar23++;
			}
			if (!bVar22)
			{
				uParam1->f_14 = 9f;
				uParam0->f_5 = 2;
				func_111(uParam0, 1);
			}
			break;
		case 1:
			if (!uParam0->f_6)
			{
				func_104(func_103(Var0, 3), 1);
				uParam0->f_6 = 1;
			}
			if (!func_183(&(uParam0->f_1)))
			{
				func_182(&(uParam0->f_1));
			}
			else if (func_14(&(uParam0->f_1)) >= uParam1->f_14)
			{
				uParam0->f_5++;
				func_104(func_103(Var0, 3), 0);
				uParam0->f_6 = 0;
				func_11(&(uParam0->f_1));
				func_111(uParam0, 2);
			}
			break;
		case 2:
			if (!func_183(&(uParam0->f_1)))
			{
				func_182(&(uParam0->f_1));
			}
			else if (func_14(&(uParam0->f_1)) >= 2f)
			{
				if (uParam0->f_5 >= 2)
				{
					func_11(&(uParam0->f_1));
					func_111(uParam0, 3);
				}
				else
				{
					func_111(uParam0, 0);
				}
			}
			break;
		case 3:
			if (!func_183(&(uParam0->f_1)))
			{
				func_182(&(uParam0->f_1));
			}
			else if (func_14(&(uParam0->f_1)) >= 9f)
			{
				uParam0->f_5 = 0;
				func_111(uParam0, 0);
			}
			break;
		case 4:
			if (func_183(&(uParam0->f_1)))
			{
				func_150(&(uParam0->f_1));
			}
			if (!bVar21)
			{
				if (uParam0->f_6)
				{
					func_104(func_103(Var0, 3), 0);
					uParam0->f_6 = 0;
				}
			}
			else
			{
				uParam0->f_5 = 0;
				func_111(uParam0, 0);
			}
			break;
	}
}

bool func_109()
{
	if (func_110() != -1)
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

int func_110()
{
	return Global_2460709;
}

void func_111(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_112(bool bParam0)
{
	if (func_183(bParam0))
	{
		if (func_14(bParam0) >= 1f)
		{
			func_113(bParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_113(bool bParam0)
{
	if (func_183(bParam0))
	{
		if (!func_15(bParam0))
		{
			bParam0->f_2 = (func_13(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - bParam0->f_1);
			UNK_0x5D96D8530B3D0904(bParam0, 2);
		}
	}
}

void func_114(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	bVar0 = true;
	bVar1 = true;
	if (((func_32(0) || UNK_0x798A3F1296751F46()) || func_116()) || func_115())
	{
		bVar0 = false;
		bLocal_83 = true;
	}
	else if (bLocal_83)
	{
		func_11(&uLocal_170);
		bLocal_83 = false;
	}
	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (!UNK_0x28072FDD60CE3A6E(UNK_0x16F2683693E537C9(), 1))
		{
			bVar1 = !UNK_0x093C93CCF7F0ECDB(UNK_0x16F2683693E537C9());
		}
	}
	uParam0->f_12 = 1;
	if ((!func_112(&uLocal_170) || !bVar0) || !bVar1)
	{
		uParam0->f_12 = 0;
	}
	uParam0->f_11 = bVar1;
	uParam0->f_10 = Local_369[UNK_0x57270EE11514DC67() /*5*/].f_1;
	bVar2 = false;
	while (bVar2 <= 1)
	{
		uParam0->f_4[bVar2] = UNK_0xADC2AA9A68E522A1(Local_323[bVar2 /*21*/].f_1, uParam0->f_13, 0, 0);
		uParam0->f_7[bVar2] = UNK_0xADC2AA9A68E522A1(Local_323[bVar2 /*21*/].f_1, uParam0->f_13, 1, 0);
		iVar3 = 0;
		if ((UNK_0xEAE0D21A50E6C7F4(Local_243.f_1, bVar2) && !UNK_0xADC2AA9A68E522A1(Local_323[bVar2 /*21*/].f_1, uParam0->f_13, 0, 0)) && func_20(&Local_369, bVar2) > 0)
		{
			iVar3 = 1;
		}
		uParam0->f_1[bVar2] = iVar3;
		bVar2++;
	}
}

bool func_115()
{
	return Global_73825;
}

bool func_116()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return false;
	}
	return true;
}

void func_117(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if ((uParam0[iVar0 /*8*/])->f_2)
		{
			func_118(uParam0[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_118(var uParam0)
{
	struct<21> Var0;

	if (!func_183(&(uParam0->f_4)) && uParam0->f_2)
	{
	}
	if (func_183(&(uParam0->f_4)))
	{
		if ((func_14(&(uParam0->f_4)) < uParam0->f_7 && uParam0->f_2) && !UNK_0xADC2AA9A68E522A1(uParam0->f_1, uParam0->f_3, 1, 0))
		{
			Var0.f_1 = -1;
			Var0.f_2 = -1;
			Var0.f_9 = -1;
			Var0.f_16 = -1;
			Var0.f_19 = -1;
			Var0.f_20 = -1;
			Var0.f_16 = uParam0->f_3;
			UNK_0x5D96D8530B3D0904(&(Var0.f_18), true);
			if (func_119())
			{
				if (UNK_0xADC2AA9A68E522A1(uParam0->f_1, uParam0->f_3, 0, 0) && !UNK_0xADC2AA9A68E522A1(uParam0->f_1, uParam0->f_3, 1, 0))
				{
					if (func_36(uParam0->f_1, 8344, Var0, 0, 0, 1, 1, 1))
					{
						uParam0->f_2 = 0;
					}
				}
			}
		}
		else
		{
			func_150(&(uParam0->f_4));
			uParam0->f_2 = 0;
		}
	}
}

bool func_119()
{
	if (!func_169(UNK_0xA30EC016B12C03E4()))
	{
		if (((!func_154(UNK_0xA30EC016B12C03E4(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) && !func_151(UNK_0xA30EC016B12C03E4())) && !UNK_0x433E615D274A2FC6(UNK_0xA30EC016B12C03E4())) && !func_152(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	return true;
}

void func_120(var uParam0, bool bParam1, var uParam2, var uParam3)
{
	struct<5> Var0;
	struct<5> Var5;
	int iVar11;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	iVar11 = 0;
	iVar11 = 0;
	while (iVar11 < UNK_0xDFB2BAED99ED0A2E(1))
	{
		switch (UNK_0xB98DB26FBF676FA1(1, iVar11))
		{
			case 174:
				if (func_23(iVar11, &Var5, 0) && (uParam0[UNK_0x57270EE11514DC67() /*5*/])->f_4 == 0)
				{
					switch (Var5)
					{
						case -991724954:
							if (Var5.f_3 == (uParam0[UNK_0x57270EE11514DC67() /*5*/])->f_1 && Var5.f_4 == UNK_0xA30EC016B12C03E4())
							{
								bParam1->f_1 = 1;
								bParam1->f_2 = Var5.f_3;
								bParam1->f_3 = (uParam3[bParam1->f_2 /*21*/])->f_1;
								*bParam1 = func_22(Var5.f_2, 0);
							}
							break;
						case 1764980958:
							if (Var5.f_3 == (uParam0[UNK_0x57270EE11514DC67() /*5*/])->f_1 && Var5.f_4 == UNK_0xA30EC016B12C03E4())
							{
								bParam1->f_2 = Var5.f_3;
								bParam1->f_3 = (uParam3[bParam1->f_2 /*21*/])->f_1;
								func_41(bParam1, 8);
							}
							break;
						case -849785785:
							if (Var5.f_4 == UNK_0xA30EC016B12C03E4())
							{
								if (Var5.f_3 >= 0 && Var5.f_3 <= 1)
								{
									if (!UNK_0xEAE0D21A50E6C7F4(bParam1->f_5, Var5.f_3))
									{
										if (!func_22(Var5.f_2, 4))
										{
											bParam1->f_2 = Var5.f_3;
											bParam1->f_3 = (uParam3[bParam1->f_2 /*21*/])->f_1;
											func_44(uParam0[UNK_0x57270EE11514DC67() /*5*/], 2, 1);
											if (func_44(uParam0[UNK_0x57270EE11514DC67() /*5*/], 0, func_22(Var5.f_2, 2)) && Var5.f_3 == (uParam0[UNK_0x57270EE11514DC67() /*5*/])->f_1)
											{
											}
											func_44(uParam0[UNK_0x57270EE11514DC67() /*5*/], 5, func_22(Var5.f_2, 5));
											func_123(uParam0[UNK_0x57270EE11514DC67() /*5*/], 1);
										}
									}
								}
							}
							break;
					}
				}
				if (UNK_0x218F818E64020C17(1, iVar11, &Var0, 5))
				{
					switch (Var0)
					{
						case -1352061319:
							if (Var0.f_3 == bParam1->f_6 && Var0.f_2 != UNK_0xD803B885F5E47A62())
							{
								if (!(func_19(uParam0[UNK_0x57270EE11514DC67() /*5*/], 2) && (uParam0[UNK_0x57270EE11514DC67() /*5*/])->f_1 == Var0.f_4))
								{
									if (func_119())
									{
										func_124(uParam2, Var0.f_4, 1092616192 /* Float: 10f */);
									}
								}
							}
							break;
					}
				}
				break;
		}
		iVar11++;
	}
}

bool func_121(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 14);
}

int func_122()
{
	return Local_243.f_4;
}

bool func_123(var uParam0, int iParam1)
{
	if (uParam0->f_4 != iParam1)
	{
		uParam0->f_4 = iParam1;
		return true;
	}
	return false;
}

void func_124(var uParam0, bool bParam1, float fParam2)
{
	(uParam0[bParam1 /*8*/])->f_7 = fParam2;
	(uParam0[bParam1 /*8*/])->f_2 = 1;
	if (!func_183(&((uParam0[bParam1 /*8*/])->f_4)))
	{
		func_182(&((uParam0[bParam1 /*8*/])->f_4));
	}
	else
	{
		func_11(&((uParam0[bParam1 /*8*/])->f_4));
	}
}

void func_125(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(uParam0[iVar0 /*8*/])->f_1 = (uParam1[iVar0 /*21*/])->f_1;
		(uParam0[iVar0 /*8*/])->f_7 = 10f;
		(uParam0[iVar0 /*8*/])->f_3 = Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_29;
		if (func_138(UNK_0xD803B885F5E47A62()))
		{
			(uParam0[iVar0 /*8*/])->f_3 = Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310.f_6 + 32;
		}
		iVar0++;
	}
}

void func_126(var uParam0, int iParam1)
{
	struct<21> Var0;

	Var0.f_12 = 8;
	Var0 = 0;
	Var0.f_1 = "AM_Darts_Apartment";
	Var0.f_2 = 0;
	Var0.f_3 = { func_128(iParam1) };
	Var0.f_6 = { 1f, 1f, 1f };
	Var0.f_9 = 0;
	Var0.f_10 = 1;
	Var0.f_11 = 2;
	Var0.f_12[0] = "DART_A_PROG";
	Var0.f_12[1] = "DART_A_ONE";
	Var0.f_12[2] = "DART_A_TWO";
	Var0.f_12[3] = "DART_A_JOIN";
	Var0.f_12[4] = "";
	Var0.f_12[5] = "DART_A_LWAIT";
	Var0.f_12[6] = "DART_A_PREP";
	Var0.f_12[7] = "DART_A_MANY";
	*(uParam0[0 /*21*/]) = { Var0 };
	Var0 = 1;
	Var0.f_1 = "AM_Armwrestling_Apartment";
	Var0.f_2 = 1;
	Var0.f_3 = { func_127(iParam1) };
	Var0.f_6 = { 1f, 1f, 1f };
	Var0.f_9 = 0;
	Var0.f_10 = 2;
	Var0.f_11 = 2;
	Var0.f_12[0] = "ARMW_A_PROG";
	Var0.f_12[1] = "";
	Var0.f_12[2] = "ARMW_A_TWO";
	Var0.f_12[3] = "ARMW_A_JOIN";
	Var0.f_12[4] = "ARMW_A_PWAIT";
	Var0.f_12[5] = "ARMW_A_LWAIT";
	Var0.f_12[6] = "ARMW_A_PREP";
	Var0.f_12[7] = "ARMW_A_MANY";
	*(uParam0[1 /*21*/]) = { Var0 };
}

Vector3 func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1116.5f, -3153.2f, -37.5f;
		case 1:
			return 1003.1f, -3165.7f, -33.6f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_128(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1118.489f, -3157.188f, -37.5628f;
		case 1:
			return 1001f, -3164.3f, -33.6f;
		case 2:
			return 2708.62f, -359.1518f, -54.5877f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_129(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return true;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}
	return false;
}

void func_130(var uParam0, var uParam1)
{
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 1;
	(*uParam0)[2] = 2;
	(*uParam1)[0] = 1;
	(*uParam1)[1] = 2;
	(*uParam1)[2] = 3;
	(*uParam1)[3] = 4;
	(*uParam1)[4] = 5;
}

void func_131(var uParam0)
{
	(*uParam0)[0 /*3*/] = "DART_A_GN";
	(uParam0[0 /*3*/])->f_1 = 5;
	(uParam0[0 /*3*/])->f_2 = 0;
}

bool func_132(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_88(&iVar0, 1, iParam1))
	{
		return false;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_5635[iVar0 /*4*/])))
	{
		UNK_0xD7992BEF7A9D109E(&(Global_22350.f_5635[iVar0 /*4*/]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!UNK_0x01C309A4BDFCAD82(&(Global_22350.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	UNK_0x0D3BE1DE0262A012("CommonMenu", 0);
	Global_22350.f_5614[iVar0] = 1;
	if (!UNK_0x27117E2CDD4D67C3("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		UNK_0x0D3BE1DE0262A012("MPShopSale", 0);
		Global_22350.f_5621[iVar0] = 1;
		if (!UNK_0x27117E2CDD4D67C3("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_133(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_133(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!UNK_0x83D8570832F172A7(*uParam0))
			{
				*uParam0 = UNK_0xB01F55A0FD1CFD49(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (UNK_0x83D8570832F172A7(*uParam0))
					{
						uParam0->f_8 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = UNK_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		case 1:
			if (UNK_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_8 = UNK_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		case 2:
			if (!UNK_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_134(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(uParam0[iVar0 /*8*/])->f_2 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 10f;
		func_150(&((uParam0[iVar0 /*8*/])->f_4));
		iVar0++;
	}
}

void func_135(var uParam0)
{
}

void func_136(bool bParam0)
{
	func_137(bParam0, 0, Global_262145.f_17725);
	func_137(bParam0, 1, Global_262145.f_17726);
	if (UNK_0xA14BB9332558B949())
	{
		func_137(bParam0, 0, 1);
		func_137(bParam0, 1, 1);
	}
}

void func_137(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0xEAE0D21A50E6C7F4(*bParam0, bParam1) != bParam2)
	{
		func_17(bParam0, bParam1, bParam2);
	}
}

bool func_138(bool bParam0)
{
	if (bParam0 != func_139())
	{
		if (func_50(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && bParam0 == UNK_0xD803B885F5E47A62()) && func_50(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

int func_139()
{
	return -1;
}

void func_140()
{
	struct<21> Var0;

	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_16 = Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_29;
	if (func_138(UNK_0xD803B885F5E47A62()))
	{
		Var0.f_16 = Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310.f_6 + 32;
	}
	if (Var0 != 12)
	{
		Var0 = 12;
	}
	func_147(func_148(Var0), Var0);
	func_144(0, -1, 0);
	UNK_0x9752E7BAEABA939E(&Local_243, 10);
	UNK_0x35B62793EAE9ADDF(&Local_369, 161);
	if (!func_141())
	{
		func_170();
	}
	if (UNK_0x8CD06866876216F2())
	{
		UNK_0x256D93AFAE851A7A(0);
		Local_369[UNK_0x57270EE11514DC67() /*5*/].f_2 = 0;
	}
	else
	{
		func_170();
	}
}

bool func_141()
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
		if (func_143())
		{
			return false;
		}
		if (func_142(157))
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

bool func_142(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_143()
{
	return Global_2450632.f_593;
}

int func_144(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_146();
			}
			else
			{
				return 0;
			}
		}
		if (!func_145())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_146();
					}
					else
					{
						return 0;
					}
				}
				if (func_143())
				{
					if (!bParam2)
					{
						func_146();
					}
					else
					{
						return 0;
					}
				}
				if (func_142(157))
				{
					if (!bParam2)
					{
						func_146();
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
					func_146();
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
				func_146();
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
			func_146();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_145()
{
	return Global_1312854;
}

void func_146()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_147(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!UNK_0x8CD06866876216F2())
	{
		func_146();
	}
	UNK_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		case 1:
			return 32;
		case 32:
			return 32;
		case 33:
			return 32;
		case 34:
			return 32;
		case 35:
			return 32;
		case 36:
			return 32;
		case 37:
			return 32;
		case 38:
			return 32;
		case 39:
			return 32;
		case 40:
			return 32;
		case 41:
			return 32;
		case 42:
			return 32;
		case 43:
			return 32;
		case 44:
			return 32;
		case 45:
			return 32;
		case 46:
			return 32;
		case 47:
			return 32;
		case 48:
			return 32;
		case 49:
			return 32;
		case 50:
			return 4;
		case 51:
			return 32;
		case 52:
			return 32;
		case 53:
			return 32;
		case 54:
			return 32;
		case 55:
			return 32;
		case 56:
			return 32;
		case 57:
			return 32;
		case 58:
			return 32;
		case 59:
			return 32;
		case 60:
			return 32;
		case 61:
			return 32;
		case 62:
			return 32;
		case 63:
			return 32;
		case 64:
			return 4;
		case 65:
			return 32;
		case 66:
			return 4;
		case 67:
			return 4;
		case 68:
			return 32;
		case 69:
			return 32;
		case 70:
			return 4;
		case 71:
			return 32;
		case 72:
			return 32;
		case 73:
		case 74:
			return 4;
		case 75:
			return 32;
		case 76:
			return 32;
		case 77:
			return 32;
		case 78:
			return 32;
		case 79:
			return 32;
		case 80:
			return 32;
		case 81:
			return 32;
		case 82:
			return 32;
		case 84:
			return 32;
		case 83:
			return 32;
		case 85:
			return 32;
		case 86:
			return 8;
		case 87:
			return 32;
		case 88:
			return 32;
		case 89:
			return 32;
		case 90:
			return 32;
		case 91:
			return 8;
		case 92:
			return 32;
		case 93:
			return 8;
		case 94:
			return 8;
		case 102:
			return 8;
		case 95:
			return 8;
		case 96:
			return 32;
		case 97:
			return 32;
		case 98:
			return 32;
		case 99:
			return 8;
		case 100:
			return 32;
		case 101:
			return 32;
		case 103:
			return 32;
		case 104:
			return 32;
		case 105:
			return 32;
		case 106:
			return 8;
		case 107:
			return 8;
		case 108:
			return 8;
		case 109:
			return 8;
		case 110:
			return 8;
		case 111:
			return 8;
		case 112:
			return 8;
		case 113:
			return 8;
		case 114:
			return 32;
		case 115:
			return 8;
		case 116:
			return 8;
		case 117:
			return 8;
		case 118:
			return 8;
		case 119:
			return 32;
		case 120:
			return 32;
		case 121:
			return 32;
		case 122:
			return 32;
		case 123:
			return 8;
		case 124:
			return 8;
		case 125:
			return 8;
		case 126:
			return 8;
		case 127:
			return 32;
		case 128:
			return 32;
		case 129:
			return 32;
		case 12:
			return 32;
		case 4:
			return 16;
		case 13:
			return 32;
		case 5:
			return 16;
		case 6:
			return 2;
		case 8:
			return 2;
		case 9:
			return 2;
		case 7:
			return 16;
		case 10:
			return 2;
		case 11:
			return 4;
		case 15:
			return 32;
		case 16:
			return 32;
		case 27:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 18:
			return 32;
		case 28:
			return 32;
		case 29:
			return 2;
		case 30:
			return 32;
		case 31:
			return 32;
		case 17:
			return 2;
		case 130:
			return 32;
		case 131:
			return 32;
		case 19:
			return 32;
		case 22:
			return 32;
		case 23:
			return 32;
		case 24:
			return 32;
		case 20:
			return 2;
		case 0:
			return 0;
		case 21:
			return 32;
		case 142:
			return 32;
		case 143:
			return 32;
		case 132:
			return 32;
		case 133:
			return 32;
		case 137:
			return 32;
		case 135:
			return 32;
		case 136:
			return 32;
		case 140:
			return 32;
		case 141:
			return 32;
		case 138:
			return 32;
		case 139:
			return 32;
		case 144:
			return 32;
		case 145:
			return 32;
		case 146:
			return 32;
		case 147:
			return 32;
		case 148:
			return 2;
		case 153:
			return 1;
		case 149:
			return 2;
		case 150:
			return 4;
		case 151:
			return 2;
		case 152:
			return 2;
		case 134:
			return 1;
		case 154:
			return 2;
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		case 176:
			return 1;
		case 161:
			return 4;
		case 164:
			return 4;
		case 165:
			return 1;
		case 166:
			return 1;
		case 172:
			return 1;
		case 168:
			return 2;
		case 173:
			return 1;
		case 169:
			return 1;
		case 167:
			return 2;
		case 170:
			return 8;
		case 171:
			return 8;
		case 174:
			return 1;
		case 162:
			return 16;
		case 163:
			return 32;
		default:
			break;
	}
	return 0;
}

float func_149(bool bParam0)
{
	if (func_183(bParam0))
	{
		if (func_15(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_13(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return 0f;
}

void func_150(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_151(int iParam0)
{
	if (func_129(Global_1590535[iParam0 /*876*/].f_274.f_28, -1))
	{
		return true;
	}
	return false;
}

bool func_152(bool bParam0)
{
	if (bParam0 != func_139())
	{
		if (func_50(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[bParam0 /*421*/].f_310.f_5) == 17;
			}
		}
	}
	return false;
}

int func_153(int iParam0)
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

bool func_154(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590535[bParam0 /*876*/].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, false))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (!bParam2)
	{
		if (func_168(bParam0))
		{
			return true;
		}
	}
	if (!bParam3)
	{
		if (func_167(bParam0))
		{
			return true;
		}
	}
	if (!bParam4)
	{
		if (func_166(bParam0))
		{
			return true;
		}
	}
	if (!bParam5)
	{
		if (func_165(bParam0))
		{
			return true;
		}
	}
	if (!bParam6)
	{
		if (func_164(bParam0))
		{
			return true;
		}
	}
	if (!bParam7)
	{
		if (func_163(bParam0))
		{
			return true;
		}
	}
	if (!bParam8)
	{
		if (func_162(bParam0))
		{
			return true;
		}
	}
	if (!bParam9)
	{
		if (func_161(bParam0))
		{
			return true;
		}
	}
	if (!bParam10)
	{
		if (func_160(bParam0))
		{
			return true;
		}
	}
	if (!bParam11)
	{
		if (func_159(bParam0, 0))
		{
			return true;
		}
	}
	if (!bParam12)
	{
		if (func_158(bParam0))
		{
			return true;
		}
	}
	if (!bParam13)
	{
		if (func_157(bParam0))
		{
			return true;
		}
	}
	if (!bParam14)
	{
		if (func_156(bParam0))
		{
			return true;
		}
	}
	if (!bParam15)
	{
		if (func_155(bParam0))
		{
			return true;
		}
	}
	if (!bParam16)
	{
		if (func_152(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_155(bool bParam0)
{
	if (bParam0 != func_139())
	{
		if (func_50(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[bParam0 /*421*/].f_310.f_5) == 16;
			}
		}
	}
	return false;
}

bool func_156(bool bParam0)
{
	if (bParam0 != func_139())
	{
		if (func_50(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[bParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return false;
}

bool func_157(bool bParam0)
{
	if (bParam0 != func_139())
	{
		if (func_50(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[bParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return false;
}

bool func_158(bool bParam0)
{
	if (bParam0 != func_139())
	{
		if (func_50(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[bParam0 /*421*/].f_310.f_5) == 13;
			}
		}
	}
	return false;
}

bool func_159(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (bParam1)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("TERBYTE"))
			{
				return true;
			}
		}
	}
	if (bParam0 != func_139())
	{
		if (func_50(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_139())
			{
				return func_153(Global_2425662[bParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return false;
}

bool func_160(bool bParam0)
{
	if (bParam0 != func_139())
	{
		if (func_50(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_161(bool bParam0)
{
	if (bParam0 != func_139())
	{
		if (func_50(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_162(bool bParam0)
{
	if (bParam0 != func_139())
	{
		if (func_50(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_139())
			{
				return func_153(Global_2425662[bParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return false;
}

bool func_163(bool bParam0)
{
	if (bParam0 != func_139())
	{
		if (func_50(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[bParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return false;
}

bool func_164(bool bParam0)
{
	if (bParam0 != func_139())
	{
		if (func_50(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[bParam0 /*421*/].f_310.f_5) == 7;
			}
		}
	}
	return false;
}

bool func_165(bool bParam0)
{
	if (bParam0 != func_139())
	{
		if (func_50(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[bParam0 /*421*/].f_310.f_5) == 4;
			}
		}
	}
	return false;
}

bool func_166(bool bParam0)
{
	if (bParam0 != func_139())
	{
		if (func_50(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[bParam0 /*421*/].f_310.f_5) == 1;
			}
		}
	}
	return false;
}

bool func_167(bool bParam0)
{
	if (bParam0 != func_139())
	{
		if (func_50(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[bParam0 /*421*/].f_310.f_5) == 2;
			}
		}
	}
	return false;
}

bool func_168(bool bParam0)
{
	if (bParam0 != func_139())
	{
		if (func_50(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[bParam0 /*421*/].f_310.f_5) == 0;
			}
		}
	}
	return false;
}

bool func_169(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 11);
}

void func_170()
{
	func_34(0, 0);
	func_171(1, -1);
	func_38(&uLocal_197);
	func_146();
}

void func_171(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_88(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8417)
	{
		UNK_0xA5E3ADAAA4CD5D6C(15);
		Global_22350.f_8417 = 0;
	}
	UNK_0xD668DA5CA4A1D2C8(0f);
	if (Global_22350.f_5628[iVar0])
	{
		UNK_0x11CCD0ACA866C6C5(9, 0);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		UNK_0xF5A41F3D3B38EFE3("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		UNK_0xF5A41F3D3B38EFE3("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_172(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_172(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (UNK_0x83D8570832F172A7(*iParam0))
		{
			UNK_0xE17FDF9E3068281B(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

bool func_173()
{
	var uVar0;

	func_179(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_143())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_178())
	{
		return true;
	}
	if (func_142(159))
	{
		if (!func_177())
		{
			return true;
		}
	}
	if (func_142(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_174() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_174()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_174()
{
	switch (func_176())
	{
		case 0:
			return func_175();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_175()
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

int func_176()
{
	return Global_30768;
}

bool func_177()
{
	return Global_2450632.f_598;
}

bool func_178()
{
	return Global_2460680;
}

void func_179(var uParam0)
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
					func_180(iVar0);
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

void func_180(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_50(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_181(bVar4, &bVar5))
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

bool func_181(bool bParam0, bool bParam1)
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

void func_182(bool bParam0)
{
	if (!func_183(bParam0))
	{
		func_11(bParam0);
	}
}

bool func_183(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, true);
}

