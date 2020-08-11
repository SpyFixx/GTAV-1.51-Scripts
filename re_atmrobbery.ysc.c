#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	struct<4> Local_49[10];
	bool bLocal_90 = false;
	vector3 vLocal_91 = { 0f, 0f, 0f };
	int iLocal_94 = 0;
	vector3 vLocal_95 = { 0f, 0f, 0f };
	bool bLocal_98 = false;
	bool bLocal_99 = false;
	bool bLocal_100 = false;
	bool bLocal_101 = false;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	bool bLocal_117 = false;
	vector3 vLocal_118 = { 0f, 0f, 0f };
	vector3 vLocal_121 = { 0f, 0f, 0f };
	bool bLocal_124 = false;
	bool bLocal_125 = false;
	vector3 vLocal_126 = { 0f, 0f, 0f };
	vector3 vLocal_129 = { 0f, 0f, 0f };
	bool bLocal_132 = false;
	bool bLocal_133 = false;
	float fLocal_134 = 0f;
	bool bLocal_135 = false;
	float fLocal_136 = 0f;
	bool bLocal_137 = false;
	bool bLocal_138 = false;
	bool bLocal_139 = false;
	bool bLocal_140 = false;
	int iLocal_141 = 0;
	bool bLocal_142 = false;
	bool bLocal_143 = false;
	bool bLocal_144 = false;
	bool bLocal_145 = false;
	bool bLocal_146 = false;
	bool bLocal_147 = false;
	bool bLocal_148 = false;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	bool bLocal_151 = false;
	bool bLocal_152 = false;
	bool bLocal_153 = false;
	bool bLocal_154 = false;
	int iLocal_155 = 0;
	bool bLocal_156 = false;
	bool bLocal_157 = false;
	bool bLocal_158 = false;
	struct<10> Local_159[16];
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	char* sLocal_324 = NULL;
	char* sLocal_325 = NULL;
	char* sLocal_326 = NULL;
	char* sLocal_327 = NULL;
	char* sLocal_328 = NULL;
	char* sLocal_329 = NULL;
	char* sLocal_330 = NULL;
	char* sLocal_331 = NULL;
	char[] cLocal_332[8] = 0;
	char* sLocal_333 = NULL;
	char* sLocal_334 = NULL;
	char[] cLocal_335[8] = 0;
	char* sLocal_336 = NULL;
	char* sLocal_337 = NULL;
	bool bLocal_338 = false;
	bool bLocal_339 = false;
	bool bLocal_340 = false;
	bool bLocal_341 = false;
	bool bLocal_342 = false;
	bool bLocal_343 = false;
	bool bLocal_344 = false;
	bool bLocal_345 = false;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	vector3 vLocal_348 = { 0f, 0f, 0f };
	vector3 vLocal_351 = { 0f, 0f, 0f };
	vector3 vLocal_354 = { 0f, 0f, 0f };
	float fLocal_357 = 0f;
	vector3 vLocal_358 = { 0f, 0f, 0f };
	bool bLocal_361 = false;
	bool bLocal_362 = false;
	bool bLocal_363 = false;
	bool bLocal_364 = false;
	bool bLocal_365 = false;
	bool bLocal_366 = false;
	bool bLocal_367 = false;
	bool bLocal_368 = false;
	bool bLocal_369 = false;
	bool bLocal_370 = false;
	bool bLocal_371 = false;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = -1;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 1000;
	var uLocal_382 = 1000;
	var uLocal_383 = 0;
	struct<147> Local_384 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_531 = 1;
	struct<18> ScriptParam_0 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;

	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = UNK_0xAD1355DD1E5D2D9B();
	iLocal_47 = UNK_0x817B3657F78A517A();
	iLocal_109 = 3;
	bLocal_132 = true;
	bLocal_144 = "RANDOM@ATMROBBERYGEN";
	bLocal_145 = "RANDOM@ATMROBBERYGEN";
	bLocal_153 = joaat("PROP_LD_WALLET_01_S");
	bLocal_154 = joaat("PROP_LD_WALLET_01_S");
	bLocal_345 = 500;
	iLocal_346 = -1;
	iLocal_347 = -1;
	fLocal_357 = 0f;
	bLocal_361 = 0f;
	vLocal_95 = { ScriptParam_0.f_1[0 /*3*/] };
	bLocal_98 = ScriptParam_0.f_17[0];
	if (UNK_0x2EBF608FFE6CA406(11))
	{
		if (bLocal_147)
		{
			bLocal_148 = true;
			func_296(0);
		}
		else
		{
			func_278();
		}
	}
	if (SYSTEM::VDIST(vLocal_95, -203.758f, -861.738f, 29.2684f) < 5f)
	{
		iLocal_109 = 1;
	}
	else if (SYSTEM::VDIST(vLocal_95, -2957.61f, 488.29f, 14.47f) < 5f)
	{
		iLocal_109 = 1;
	}
	else if (SYSTEM::VDIST(vLocal_95, 288.973f, -1256.79f, 28.4407f) < 5f)
	{
		iLocal_109 = 2;
	}
	else if (SYSTEM::VDIST(vLocal_95, -3043.93f, 594.84f, 6.6115f) < 5f)
	{
		iLocal_109 = 3;
	}
	else if (SYSTEM::VDIST(vLocal_95, 174.715f, 6637.77f, 30.5733f) < 5f)
	{
		iLocal_109 = 4;
	}
	else
	{
		iLocal_109 = 5;
	}
	if (func_236(vLocal_95, 1, iLocal_109, 1, 0))
	{
		func_233(-1);
	}
	else
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	SYSTEM::SETTIMERA(0);
	func_232();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_231();
		func_230(iLocal_102, &uLocal_108);
		func_227(&Local_384);
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x34FABD75496259E4(UNK_0xD803B885F5E47A62());
		}
		if (!func_224())
		{
			if (func_223())
			{
				func_278();
			}
			if (UNK_0x338D6FF72D84D90F())
			{
				switch (iLocal_94)
				{
					case 0:
						if (func_197())
						{
							iLocal_94 = 1;
						}
						break;
					case 1:
						func_196();
						if (iLocal_113 == 0)
						{
							iLocal_113 = UNK_0x7D0D8317DC09FF68(101, vLocal_95, 30000f);
						}
						if (UNK_0xC844350D5D58C99A(bLocal_99))
						{
						}
						if (UNK_0xC844350D5D58C99A(bLocal_100))
						{
						}
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_99))
						{
							if (UNK_0xEB6A8945D1AC98A1(bLocal_100))
							{
								UNK_0xEEB67C3D0A71A47B(bLocal_99, vLocal_95, 200f, -1, 0, 0);
								UNK_0xFADC0A217229F6B5(bLocal_99, true);
								SYSTEM::WAIT(0);
								func_278();
							}
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_100))
							{
								if (UNK_0x8E28E832BEAC3DCE(vLocal_95, 2.5f))
								{
									if (iLocal_109 == 2)
									{
										if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_100, 120f, 120f, 8f, 0, 1, 0) || func_195())
										{
											func_186();
										}
									}
									else if (iLocal_109 == 1)
									{
										if (SYSTEM::VDIST(vLocal_95, -203.758f, -861.738f, 29.2684f) < 5f)
										{
											if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_100, 100f, 100f, 8f, 0, 1, 0) || func_195())
											{
												func_186();
											}
										}
										else if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_100, 170f, 170f, 8f, 0, 1, 0) || func_195())
										{
											func_186();
										}
									}
									else if (SYSTEM::VDIST(vLocal_95, -3044.06f, 594.93f, 6.74f) < 5f)
									{
										if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_100, 65f, 65f, 5f, 0, 1, 0) || func_195())
										{
											func_186();
										}
									}
									else if (UNK_0x0EB28750412C3A5A(vLocal_95, -712.9f, -819.32f, 22.73f, 1) < 5f)
									{
										if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_100, 50f, 50f, 5f, 0, 1, 0) || func_195())
										{
											func_186();
										}
									}
									else if (UNK_0x0EB28750412C3A5A(vLocal_95, 24.13f, -946.84f, 28.36f, 1) < 5f)
									{
										if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_100, 60f, 60f, 5f, 0, 1, 0) || func_195())
										{
											func_186();
										}
									}
									else if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_100, 30f, 30f, 8f, 0, 1, 0) || func_195())
									{
										func_186();
									}
								}
							}
						}
						else
						{
							if (Local_159[2 /*10*/].f_7)
							{
								func_185(&Local_159, 2);
							}
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_100))
							{
								UNK_0xEEB67C3D0A71A47B(bLocal_100, vLocal_95, 200f, -1, 0, 0);
								UNK_0xFADC0A217229F6B5(bLocal_100, true);
								SYSTEM::WAIT(0);
							}
							func_278();
						}
						break;
				}
			}
			else
			{
				func_183("IF NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()\n");
				func_278();
			}
		}
		else
		{
			if (UNK_0xC844350D5D58C99A(bLocal_99))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_99))
				{
					if (func_182(bLocal_99, -251125078))
					{
						if (func_181(bLocal_99, vLocal_95, 1) >= 190f)
						{
							UNK_0xA3BF0AA5A2608191(bLocal_99);
							UNK_0xF3268524E9BE6D6E(bLocal_99, UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
						}
					}
					else if (func_182(bLocal_99, -982327190))
					{
						UNK_0xA3BF0AA5A2608191(bLocal_99);
						UNK_0xF3268524E9BE6D6E(bLocal_99, UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
					}
				}
			}
			if (UNK_0xC844350D5D58C99A(bLocal_100))
			{
			}
			if (UNK_0x1C0640BA9A7327B3() > iLocal_110 + 3000)
			{
				func_152();
			}
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (!func_132() && !func_129())
				{
					UNK_0x05C6848E923D332F(UNK_0xD803B885F5E47A62());
					if (!bLocal_137 && !bLocal_142)
					{
						if (UNK_0xC844350D5D58C99A(bLocal_100))
						{
							if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bLocal_100, false), -2956.26f, 487.97f, 15.46f) < 5f)
							{
								if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_100, 100f, 100f, 15f, 0, 1, 0))
								{
									if (func_122(&Local_159, cLocal_335, sLocal_327, 3, 0, 0, 0))
									{
										bLocal_137 = true;
									}
								}
							}
							else if (UNK_0x0EB28750412C3A5A(vLocal_95, -203.72f, -861.8f, 29.27f, 1) < 5f)
							{
								if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_100, 40f, 40f, 15f, 0, 1, 0))
								{
									if (func_122(&Local_159, cLocal_335, sLocal_327, 3, 0, 0, 0))
									{
										bLocal_137 = true;
									}
								}
							}
							else if (UNK_0x0EB28750412C3A5A(vLocal_95, 288.46f, -1256.71f, 28.44f, 1) < 5f)
							{
								if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_100, 50f, 50f, 15f, 0, 1, 0))
								{
									if (func_122(&Local_159, cLocal_335, sLocal_327, 3, 0, 0, 0))
									{
										bLocal_137 = true;
									}
								}
							}
							else if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_100, 50f, 50f, 15f, 0, 1, 0))
							{
								if (func_122(&Local_159, cLocal_335, sLocal_327, 3, 0, 0, 0))
								{
									bLocal_137 = true;
								}
							}
						}
					}
					if (UNK_0xE4EDC4B0E92C078B(iLocal_103))
					{
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_99))
						{
							if (bLocal_338)
							{
								if (UNK_0x12DE711B1C681E9E(bLocal_99, UNK_0x16F2683693E537C9(), bLocal_344, bLocal_344, bLocal_344, 0, 1, 0))
								{
									if (!UNK_0x405E212DDE472467(bLocal_99, 0))
									{
										if (SYSTEM::TIMERA() > 1000)
										{
											if (UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bLocal_99))
											{
												bLocal_344 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_99, true));
												bLocal_344 = (bLocal_344 * 1.5f);
												SYSTEM::SETTIMERA(0);
											}
											UNK_0xAFF39FB306F8E232(bLocal_99, 17, false);
										}
									}
								}
								else if (!bLocal_340)
								{
									if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_99, 25f, 25f, 25f, 0, 1, 0))
									{
										if (!UNK_0x405E212DDE472467(bLocal_99, 0))
										{
											UNK_0xAFF39FB306F8E232(bLocal_99, 17, true);
											UNK_0xAFF39FB306F8E232(bLocal_99, 13, false);
											func_121();
											bLocal_340 = true;
										}
									}
								}
							}
							else if (!bLocal_139)
							{
								if ((UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bLocal_99) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bLocal_99)) || UNK_0xB87D13D0C064E9D1(bLocal_99, UNK_0x16F2683693E537C9(), 0))
								{
									func_122(&Local_159, cLocal_335, sLocal_325, 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									bLocal_344 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_99, true));
									bLocal_344 = (bLocal_344 * 1.5f);
									bLocal_338 = true;
									bLocal_139 = true;
								}
								if (UNK_0xDF1306B443CD3D15(bLocal_117, 0))
								{
									if (UNK_0xB87D13D0C064E9D1(bLocal_117, UNK_0x16F2683693E537C9(), 1))
									{
										UNK_0xAFF39FB306F8E232(bLocal_99, 17, false);
										if (UNK_0x0E0E6175453415CB(bLocal_99))
										{
											UNK_0x89258193691A7600(bLocal_99, bLocal_117, UNK_0x16F2683693E537C9(), 8, 35f, 4, 10f, 10f, 1);
										}
										else
										{
											UNK_0xF3268524E9BE6D6E(bLocal_99, UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
										}
										func_122(&Local_159, cLocal_335, sLocal_325, 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										bLocal_344 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_99, true));
										bLocal_344 = (bLocal_344 * 1.5f);
										bLocal_338 = true;
										bLocal_139 = true;
									}
								}
							}
							if ((bLocal_340 || bLocal_338) || bLocal_342)
							{
								if (UNK_0xE4EDC4B0E92C078B(iLocal_103))
								{
									if (UNK_0x8FBD6436A27198B4(iLocal_103) == 1)
									{
									}
									else
									{
										UNK_0x321E019A46034F39(iLocal_103, false);
										UNK_0x61755AC17D8F538E(iLocal_103, true);
									}
								}
								if (!bLocal_340)
								{
									func_121();
									bLocal_340 = true;
								}
							}
							else
							{
								if (UNK_0x4734A6196B611C3B(bLocal_99, UNK_0x16F2683693E537C9()))
								{
									bLocal_342 = true;
								}
								func_119(iLocal_103, &uLocal_114);
							}
							if (UNK_0xC844350D5D58C99A(bLocal_100))
							{
								if (!bLocal_139)
								{
									if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_100, 15f, 15f, 10f, 0, 1, 0))
									{
										if (func_122(&Local_159, cLocal_335, sLocal_328, 4, 0, 0, 0))
										{
											UNK_0xDD353D0E9C789D0E(&iLocal_105);
											UNK_0xC6EB89C59F2AF6B8(false, bLocal_368, bLocal_369, 8f, -4f, -1, 0, false, 0, 0, 0);
											UNK_0xC6EB89C59F2AF6B8(false, bLocal_368, bLocal_370, 8f, -4f, -1, 0, false, 0, 0, 0);
											UNK_0xC6EB89C59F2AF6B8(false, bLocal_368, bLocal_371, 8f, -4f, -1, 0, false, 0, 0, 0);
											UNK_0xC6EB89C59F2AF6B8(false, bLocal_368, bLocal_369, 8f, -4f, -1, 0, false, 0, 0, 0);
											UNK_0xC6EB89C59F2AF6B8(false, bLocal_368, bLocal_370, 8f, -4f, -1, 0, false, 0, 0, 0);
											UNK_0xC6EB89C59F2AF6B8(false, bLocal_368, bLocal_371, 8f, -4f, -1, 1, false, 0, 0, 0);
											UNK_0x75ABDC5F81978924(iLocal_105);
											UNK_0x78ADC381772E3D54(bLocal_100, iLocal_105);
											UNK_0xF82EA857DA10E0CD(&iLocal_105);
											SYSTEM::SETTIMERA(0);
											bLocal_139 = true;
										}
									}
								}
								else if (!bLocal_140)
								{
									if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_100, 15f, 15f, 10f, 0, 1, 0))
									{
										if (((!UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bLocal_99) && !UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bLocal_99)) && !UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9())) && func_118(bLocal_100, bLocal_99, 1) > 30f)
										{
											if (func_122(&Local_159, cLocal_335, sLocal_329, 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												bLocal_140 = true;
											}
										}
									}
								}
								else if (!UNK_0x7DECE00E09F41C95(bLocal_100))
								{
									func_116(bLocal_100, "GENERIC_CURSE_MED", 24);
								}
							}
							if (func_114())
							{
								func_113();
								if (UNK_0xC844350D5D58C99A(bLocal_100))
								{
									vVar0 = { UNK_0x68F4C0EC296D3901(bLocal_100, true) };
								}
								if (!UNK_0x5A91F08DF773C39D(bLocal_99, vVar0, 25f, 25f, 25f, false, true, 0) && UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_99, 12f, 12f, 12f, 0, 1, 0))
								{
									if (SYSTEM::TIMERA() > 20000)
									{
										if (func_112(bLocal_99) && !UNK_0x869EFD0BC0868856(bLocal_99))
										{
											if (func_122(&Local_159, cLocal_335, sLocal_330, 4, 0, 0, 0))
											{
												bLocal_342 = true;
												SYSTEM::SETTIMERA(0);
											}
										}
									}
								}
							}
							else if (func_112(bLocal_100))
							{
								if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_100, Global_19, 0, 1, 0))
								{
									if (func_122(&Local_159, cLocal_335, sLocal_333, 4, 0, 0, 0))
									{
										UNK_0xDD353D0E9C789D0E(&iLocal_105);
										UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 3000);
										UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
										UNK_0x75ABDC5F81978924(iLocal_105);
										UNK_0x78ADC381772E3D54(bLocal_100, iLocal_105);
										UNK_0xF82EA857DA10E0CD(&iLocal_105);
										bLocal_339 = true;
										func_278();
									}
								}
								else if (bLocal_342)
								{
									if (func_122(&Local_159, cLocal_335, sLocal_334, 4, 0, 0, 0))
									{
										UNK_0x01E4BB5190DF7317(bLocal_100, 1193033728, 0);
										UNK_0xBD453909DC26A85D(bLocal_100, joaat("MOTIONSTATE_WALK"), false, 0, 0);
										bLocal_339 = true;
										func_278();
									}
								}
								else
								{
									UNK_0x01E4BB5190DF7317(bLocal_100, 1193033728, 0);
									UNK_0xBD453909DC26A85D(bLocal_100, joaat("MOTIONSTATE_WALK"), false, 0, 0);
									bLocal_339 = true;
									func_278();
								}
							}
							else
							{
								bLocal_339 = true;
								func_278();
							}
						}
						else if (func_114())
						{
							if ((UNK_0xEB6A8945D1AC98A1(bLocal_99) || UNK_0x28072FDD60CE3A6E(bLocal_99, 1)) || func_182(bLocal_99, -1899872703))
							{
								func_122(&Local_159, cLocal_335, sLocal_337, 4, 0, 0, 0);
								func_109();
								func_185(&Local_159, 2);
								UNK_0x142CC44DB769B57E(&iLocal_103);
							}
						}
					}
					else if (!UNK_0xE4EDC4B0E92C078B(iLocal_102))
					{
						if (bLocal_147)
						{
							if (UNK_0xE4EDC4B0E92C078B(iLocal_104))
							{
								UNK_0x142CC44DB769B57E(&iLocal_104);
							}
							iLocal_104 = 0;
							UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
							iLocal_102 = func_105(bLocal_100, 0, 0);
							func_104(&uLocal_108);
							if (UNK_0xC844350D5D58C99A(bLocal_100))
							{
								fLocal_134 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_100, false));
								UNK_0xE910A68AA670B4AA(bLocal_100);
							}
							if (fLocal_134 > 750f)
							{
								func_296(0);
							}
						}
						else
						{
							func_101();
						}
					}
					else
					{
						if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
						{
							if (bLocal_147)
							{
								func_296(0);
							}
							else
							{
								func_278();
							}
						}
						if (bLocal_152)
						{
						}
						else
						{
							func_2();
						}
						if (!bLocal_152)
						{
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_100))
							{
								if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_100, false)) > (fLocal_134 + 100f))
								{
									if (bLocal_147)
									{
										func_296(0);
									}
									else
									{
										UNK_0xF3268524E9BE6D6E(bLocal_100, UNK_0x16F2683693E537C9(), 100f, -1, 0, 0);
										func_278();
									}
								}
								else if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_100, false)) < fLocal_134)
								{
									fLocal_134 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_100, false));
								}
								if (UNK_0xB87D13D0C064E9D1(bLocal_100, UNK_0x16F2683693E537C9(), 1))
								{
									if (bLocal_147)
									{
										func_296(0);
									}
								}
							}
						}
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
}

void func_1()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_100))
	{
		UNK_0xF3268524E9BE6D6E(bLocal_100, UNK_0x16F2683693E537C9(), 100f, -1, 0, 0);
		func_116(bLocal_100, "GENERIC_FRIGHTENED_HIGH", 24);
		UNK_0xFADC0A217229F6B5(bLocal_100, true);
		UNK_0x11AD11297DC58CC7(bLocal_100, false);
		UNK_0x25C5402CC10F76CD(bLocal_100, true);
		UNK_0x6DAD7906B73F064D(&bLocal_100);
	}
	func_101();
	if (bLocal_142)
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_104))
		{
			if (UNK_0x762119754C50557A(iLocal_141))
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0xE925E52ACABA4CE7(iLocal_141)) > 100f)
				{
					func_278();
				}
			}
		}
		else if (bLocal_147)
		{
			func_296(0);
		}
		else if (UNK_0xEB6A8945D1AC98A1(bLocal_99))
		{
			func_278();
		}
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_103))
	{
		if (UNK_0xEB6A8945D1AC98A1(bLocal_99))
		{
			UNK_0x142CC44DB769B57E(&iLocal_103);
		}
		else if (!func_114())
		{
			func_278();
		}
	}
}

void func_2()
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	vector3 vVar19;
	bool bVar22;
	float fVar23;
	float fVar24;
	char cVar25[16];
	char cVar29[16];
	var uVar33;
	int iVar34;

	if (!UNK_0xEB6A8945D1AC98A1(bLocal_100))
	{
		if (!bLocal_151)
		{
			if (bLocal_341)
			{
				if (!bLocal_343)
				{
					if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_100, 15f, 15f, 20f, 0, 1, 0))
					{
						func_116(bLocal_100, "GENERIC_HI", 5);
						bLocal_343 = true;
					}
				}
				if (UNK_0x0EB28750412C3A5A(vLocal_95, 296.13f, -894.01f, 28.23f, 1) < 5f)
				{
					if (bLocal_135 == 6f)
					{
						bLocal_135 = 5f;
					}
				}
				else if (UNK_0x0EB28750412C3A5A(vLocal_95, -2072.88f, -317.19f, 12.32f, 1) < 5f)
				{
					if (bLocal_135 == 6f)
					{
						bLocal_135 = 4f;
					}
				}
				if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_100, bLocal_135, bLocal_135, bLocal_135, 0, 1, 0) && !func_100())
				{
					if (func_97(2))
					{
						UNK_0xA37A90C62806D848(1);
					}
					if (!func_129())
					{
						if (UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
						{
							if (func_96(1, 0, 1))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(Global_7356, 11) || func_95())
								{
									if (!UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()))
									{
										UNK_0xA37A90C62806D848(1);
										if (func_94())
										{
											func_93();
										}
										if (bLocal_153 == joaat("PROP_LD_WALLET_PICKUP"))
										{
											bLocal_101 = UNK_0x7707E48765093646(bLocal_154, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), true, true, false);
										}
										else
										{
											bLocal_101 = UNK_0x7707E48765093646(bLocal_153, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), true, true, false);
										}
										if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
										{
											UNK_0x9F528B1B53FBC5D9(bLocal_101, UNK_0x16F2683693E537C9(), UNK_0x4A089F2B762B8D33(UNK_0x16F2683693E537C9(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
										}
										UNK_0x4A4806F9D471E491(bLocal_101, false, 0);
										func_85(1, 1, 1, 0, 0, 0);
										if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
										{
											if (UNK_0xC844350D5D58C99A(bLocal_101))
											{
												while ((!func_83(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), fLocal_136, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0) || func_94()) || !UNK_0x1A5AE8A9B1D42A10(bLocal_101))
												{
													if (!func_83(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), fLocal_136, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0))
													{
													}
													if (func_94())
													{
													}
													if (!UNK_0x1A5AE8A9B1D42A10(bLocal_101))
													{
													}
													SYSTEM::WAIT(0);
												}
												if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
												{
													UNK_0x75CDA8644CD3B5F5(UNK_0x16F2683693E537C9(), 0, 0);
												}
											}
										}
										else if (UNK_0xC844350D5D58C99A(bLocal_101))
										{
											while (func_94() || !UNK_0x1A5AE8A9B1D42A10(bLocal_101))
											{
												SYSTEM::WAIT(0);
											}
										}
										UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
										if (!UNK_0xEB6A8945D1AC98A1(bLocal_100))
										{
											UNK_0x46CB381A452EF99D(bLocal_100, 0);
										}
										UNK_0x68F065432F4692FB(0);
										UNK_0x850CF499433B183D(iLocal_113);
										UNK_0x6E8BDA9057564534(UNK_0x16F2683693E537C9(), 0, 0);
										func_81();
										func_75(0);
										SYSTEM::WAIT(0);
										if (func_112(bLocal_100))
										{
											if (UNK_0xCED082ADD3739B9F(bLocal_100))
											{
												bLocal_146 = "move_m@hurry@b";
											}
											else
											{
												bLocal_146 = "move_f@hurry@a";
											}
										}
										UNK_0x4E09E67A27F104A7(bLocal_146);
										bLocal_151 = true;
										SYSTEM::SETTIMERA(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_73(UNK_0x68F4C0EC296D3901(bLocal_100, true), &bLocal_135, &fLocal_136);
					if (!func_100())
					{
						if (!func_182(bLocal_100, 1227113341) && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
						{
							UNK_0xA3BF0AA5A2608191(bLocal_100);
							UNK_0xE185F110925D87DB(bLocal_100, UNK_0x16F2683693E537C9(), 20000, 0.5f, 1f, 1073741824 /* Float: 2f */, 0);
						}
					}
					else if (func_182(bLocal_100, 1227113341))
					{
						UNK_0xA3BF0AA5A2608191(bLocal_100);
						UNK_0xF82EA857DA10E0CD(&iLocal_105);
						UNK_0xDD353D0E9C789D0E(&iLocal_105);
						UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2048, 2);
						UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
						UNK_0xC6EB89C59F2AF6B8(false, bLocal_368, bLocal_369, 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
						UNK_0xC6EB89C59F2AF6B8(false, bLocal_368, bLocal_371, 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
						UNK_0xC6EB89C59F2AF6B8(false, bLocal_368, bLocal_370, 1090519040, -1056964608, -1, 1, false, 0, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_105);
						UNK_0x78ADC381772E3D54(bLocal_100, iLocal_105);
						UNK_0xF82EA857DA10E0CD(&iLocal_105);
						UNK_0xF895E10BF4C72645(bLocal_100, 0, 0);
					}
				}
			}
			else if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_100, 25f, 25f, 20f, 0, 1, 1) || UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_100, 30f, 30f, 20f, 0, 1, 2))
			{
				if (!func_100())
				{
					if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
					{
						UNK_0xA3BF0AA5A2608191(bLocal_100);
						UNK_0xF82EA857DA10E0CD(&iLocal_105);
						UNK_0xDD353D0E9C789D0E(&iLocal_105);
						UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2048, 2);
						UNK_0xE185F110925D87DB(false, UNK_0x16F2683693E537C9(), 20000, 0.5f, 1f, 1073741824 /* Float: 2f */, 0);
						UNK_0x75ABDC5F81978924(iLocal_105);
						UNK_0x78ADC381772E3D54(bLocal_100, iLocal_105);
						UNK_0xF82EA857DA10E0CD(&iLocal_105);
					}
					bLocal_341 = true;
				}
			}
		}
		if (bLocal_151)
		{
			switch (iLocal_150)
			{
				case 0:
					if (((!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) && !UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) && !UNK_0x4D1EAD5574D867CF(UNK_0x16F2683693E537C9())) && !UNK_0xA48EBBEA418ADC94(UNK_0x16F2683693E537C9()))
					{
						if (bLocal_132)
						{
							if (UNK_0x0EB28750412C3A5A(vLocal_95, -712.9f, -819.32f, 22.73f, 1) < 5f && UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -709.9229f, -824.0863f, 22.0751f, -715.2137f, -824.2247f, 25.01217f, 3.25f, 0, true, 0))
							{
								vLocal_126 = { -710.1279f, -821.3084f, 22.6169f };
								vLocal_129 = { 0f, 0f, 266.962f };
							}
							else if (!UNK_0xEB6A8945D1AC98A1(bLocal_100))
							{
								vVar19 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
								func_70(bLocal_100, &vLocal_126, &vLocal_129, bLocal_362, bLocal_364);
								if ((vLocal_126.z - vVar19.z) > 20f)
								{
									vLocal_126 = { vVar19 };
								}
								vLocal_126.f_2 = (vLocal_126.z + 2f);
								UNK_0xE82754C349C7B581(vLocal_126, &(vLocal_126.f_2), 0, 0);
								if (vLocal_126.z == 0f)
								{
									vLocal_126 = { vLocal_354 };
									vLocal_129.f_2 = fLocal_357;
								}
								if (UNK_0x0EB28750412C3A5A(vLocal_95, -203.72f, -861.8f, 29.27f, 1) < 5f)
								{
									if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -202.4218f, -864.449f, 27.88059f, -211.4486f, -861.5274f, 31.75401f, 9.5f, 0, true, 0))
									{
										if (vLocal_129.z > 315f && vLocal_129.z < 360f)
										{
											vLocal_129.f_2 = 251.4238f;
										}
										else if (vLocal_129.z > 120f && vLocal_129.z < 212f)
										{
											vLocal_129.f_2 = 67.2304f;
										}
										vLocal_126 = { -205.81f, -865.2f, 28.5f };
									}
								}
								else if (UNK_0x0EB28750412C3A5A(vLocal_95, -821.33f, -1082.43f, 10.14f, 1) < 5f && UNK_0x0399732A9EBC368E(vLocal_126, -826.1744f, -1083.943f, 9.137519f, -811.6559f, -1075.567f, 13.88779f, 6f, 0, true))
								{
									vLocal_126 = { -814.0593f, -1082.483f, 10.0671f };
									vLocal_129.f_2 = 275.5752f;
								}
								else if (UNK_0x0EB28750412C3A5A(vLocal_95, -387.12f, 6045.79f, 30.5f, 1) < 5f && UNK_0x0399732A9EBC368E(vLocal_126, -377.5788f, 6033.821f, 29.29119f, -373.0138f, 6029.14f, 33.75382f, 4.75f, 0, true))
								{
									vLocal_126 = { -375.0627f, 6030.533f, 30.5313f };
									vLocal_129.f_2 = 222.9049f;
								}
								else if (UNK_0x0EB28750412C3A5A(vLocal_95, -387.12f, 6045.79f, 30.5f, 1) < 5f && UNK_0x0399732A9EBC368E(vLocal_126, -381.4607f, 6031.481f, 29.24971f, -376.6766f, 6026.68f, 33.76656f, 3f, 0, true))
								{
									vLocal_126 = { -379.7835f, 6029.472f, 30.5014f };
									vLocal_129.f_2 = 213.2611f;
								}
								else if (UNK_0x0EB28750412C3A5A(vLocal_95, 89.39f, 2f, 67.34f, 1) < 5f)
								{
									if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 73.30347f, 4.781172f, 66.79439f, 107.6572f, -8.330787f, 69.16833f, 9.75f, 0, true, 0))
									{
										if (vLocal_129.z > 128f && vLocal_129.z < 195f)
										{
											if (vLocal_129.z > 162f)
											{
												vLocal_129.f_2 = 220f;
											}
											else
											{
												vLocal_129.f_2 = 107f;
											}
										}
									}
								}
								else if (UNK_0x0EB28750412C3A5A(vLocal_95, 174.53f, 6637.64f, 30.57f, 1) < 5f)
								{
									if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 176.3895f, 6635.983f, 29.87799f, 181.7585f, 6641.302f, 33.556f, 7.75f, 0, true, 0))
									{
										if (vLocal_129.z > 244.444f && vLocal_129.z < 326.2103f)
										{
											vLocal_129.f_2 = 343.1367f;
										}
									}
								}
								else if (UNK_0x0EB28750412C3A5A(vLocal_95, -3044.11f, 594.34f, 6.73f, 1) < 5f)
								{
									if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -3042.549f, 597.1118f, 6.612578f, -3046.965f, 595.6973f, 9.065809f, 5f, 0, true, 0))
									{
										vLocal_126 = { -3045.4f, 598.65f, 6.51f };
									}
								}
								vVar10 = { UNK_0x1BB04F10296A1C5E(bLocal_362, bLocal_364, vLocal_126, vLocal_129, 0f, 2) };
								vVar13 = { vVar10 - vLocal_126 };
								vVar13.f_2 = 0f;
								fVar24 = SYSTEM::VMAG(vVar13);
								UNK_0xE82754C349C7B581(vVar10, &(vVar10.f_2), 0, 0);
								fVar23 = (vLocal_126.z - vVar10.z);
								vLocal_129.x = UNK_0x5D8ABF6396A76564(fVar23, fVar24);
								if (vLocal_129.x > 20f || vLocal_129.x < -330f)
								{
									vLocal_126 = { vLocal_354 };
									vLocal_129.x = 0f;
									vLocal_129.f_2 = fLocal_357;
									vVar10 = { UNK_0x1BB04F10296A1C5E(bLocal_362, bLocal_364, vLocal_126, vLocal_129, 0f, 2) };
									vVar13 = { vVar10 - vLocal_126 };
									vVar13.f_2 = 0f;
									fVar24 = SYSTEM::VMAG(vVar13);
									UNK_0xE82754C349C7B581(vVar10, &(vVar10.f_2), 0, 0);
									fVar23 = (vLocal_126.z - vVar10.z);
								}
							}
							if (func_69(vLocal_95, -526.58f, -1222.79f, 17.46f, 10f, 0))
							{
								if (UNK_0x0399732A9EBC368E(vLocal_126, -538.4412f, -1214.903f, 16.79794f, -520.3268f, -1223.249f, 20.556f, 6.5f, 0, true))
								{
									if (vLocal_129.z < 35f || vLocal_129.z > 275f)
									{
										if (vLocal_129.z < 335f)
										{
											vLocal_129.f_2 = 260f;
										}
										else
										{
											vLocal_129.f_2 = 55f;
										}
									}
									else if (vLocal_129.z > 107.2072f && vLocal_129.z < 210f)
									{
										if (vLocal_129.z > 154.6742f)
										{
											vLocal_129.f_2 = 233f;
										}
										else
										{
											vLocal_129.f_2 = 73f;
										}
									}
								}
							}
						}
						else if (iLocal_109 == 4)
						{
							if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), 183.6065f, 6636.653f, 30.6299f) < SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), 172.2291f, 6631.007f, 30.7398f))
							{
								vLocal_126 = { 183.6065f, 6636.653f, 30.6299f };
								vLocal_129 = { 0f, 0f, 265f };
							}
							else
							{
								vLocal_126 = { 172.2291f, 6631.007f, 30.7398f };
								vLocal_129 = { 0f, 0f, 132f };
							}
						}
						else
						{
							vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_100))
							{
								vVar4 = { UNK_0x68F4C0EC296D3901(bLocal_100, true) };
							}
							vVar7 = { vVar1 - vVar4 };
							vLocal_126 = { vVar1 };
							vLocal_126 = { vLocal_126.x, vLocal_126.y, (vLocal_126.z - 1f) };
							vLocal_129 = { 0f, 0f, UNK_0xE7D606C557C86100(vVar7.x, vVar7.y) };
						}
						if (UNK_0x0EB28750412C3A5A(vLocal_126, -535.795f, -1222.23f, 17.4567f, 1) < 5f)
						{
							vLocal_126 = { -521.475f, -1210.47f, 17.1848f };
							vLocal_129 = { 0f, 0f, 308.502f };
						}
						if (UNK_0xDF1306B443CD3D15(bLocal_117, 0))
						{
							UNK_0x046C362CF15F1935(&bLocal_117);
						}
						if (UNK_0xDF1306B443CD3D15(UNK_0x728870EB733D12A1(), 0))
						{
							if (!UNK_0xDF1306B443CD3D15(bVar0, 0))
							{
								bVar0 = UNK_0x728870EB733D12A1();
								UNK_0xA6B02C1DB14DDA13(UNK_0x134B62B726CEC8E6(bVar0), &vLocal_348, &vLocal_351);
								if (UNK_0x5A91F08DF773C39D(bVar0, vLocal_126, (vLocal_351.y + 1f), (vLocal_351.y + 1f), 3f, false, true, 0) || UNK_0x5A91F08DF773C39D(bVar0, UNK_0x1BB04F10296A1C5E(bLocal_362, bLocal_364, vLocal_126, vLocal_129, false, 2), (vLocal_351.y + 1f), (vLocal_351.y + 1f), 3f, false, true, 0))
								{
									if (func_69(vLocal_95, -526.58f, -1222.79f, 17.46f, 10f, 0) && (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, true, 0) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -529.7477f, -1218.399f, 16.78482f, -520.9798f, -1222.305f, 20.55204f, 7.5f, 0, true, 0)))
									{
										if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, true, 0))
										{
											vVar16 = { 2.9f, 12f, 8f };
											vLocal_121 = { -543.34f, -1216.8f, 17.96f };
											bLocal_125 = 337.5f;
											bVar22 = true;
										}
										else
										{
											vVar16 = { 2.9f, 12f, 8f };
											vLocal_121 = { -522.4418f, -1214.57f, 17.1848f };
											bLocal_125 = 246.7714f;
											bVar22 = true;
										}
										if ((vLocal_351.x - vLocal_348.x) > vVar16.x)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.y - vLocal_348.y) > vVar16.y)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.z - vLocal_348.z) > vVar16.z)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_68(bVar0))
											{
												UNK_0xA47B46945FF6DE74(bVar0, vLocal_121, 1, 0, 0, 1);
												UNK_0xD8F6A53F4799FAFE(bVar0, bLocal_125);
												UNK_0x2EA10555AEBEA739(bVar0, false, 1, 1, 1);
												UNK_0xB9FD7450C0DAB575(bVar0, 1084227584 /* Float: 5f */);
											}
										}
										else if (UNK_0xC844350D5D58C99A(bVar0))
										{
											if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bVar0, 0))
											{
												UNK_0xA954465BA6FDEFE2(&bVar0);
											}
										}
									}
									else if (UNK_0x0EB28750412C3A5A(vLocal_95, -203.72f, -861.8f, 29.27f, 1) < 5f && UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -197.7616f, -865.9772f, 27.31116f, -191.161f, -849.0546f, 32.89275f, 10.25f, 0, true, 0))
									{
										vVar16 = { 2.9f, 12f, 8f };
										vLocal_121 = { -187f, -855.51f, 29.02f };
										bLocal_125 = 158.28f;
										bVar22 = true;
										if ((vLocal_351.x - vLocal_348.x) > vVar16.x)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.y - vLocal_348.y) > vVar16.y)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.z - vLocal_348.z) > vVar16.z)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_68(bVar0))
											{
												UNK_0xA47B46945FF6DE74(bVar0, vLocal_121, 1, 0, 0, 1);
												UNK_0xD8F6A53F4799FAFE(bVar0, bLocal_125);
												UNK_0xB9FD7450C0DAB575(bVar0, 1084227584 /* Float: 5f */);
											}
										}
										else if (UNK_0xC844350D5D58C99A(bVar0))
										{
											if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bVar0, 0))
											{
												UNK_0xA954465BA6FDEFE2(&bVar0);
											}
										}
									}
									else if (UNK_0x0EB28750412C3A5A(vLocal_95, -387.12f, 6045.79f, 30.5f, 1) < 5f && UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -390.4536f, 6044.05f, 29.99868f, -380.4771f, 6032.985f, 33.24879f, 6f, 0, true, 0))
									{
										vVar16 = { 2.9f, 12f, 8f };
										vLocal_121 = { -395.84f, 6051.16f, 31.19f };
										bLocal_125 = 139.92f;
										bVar22 = true;
										if ((vLocal_351.x - vLocal_348.x) > vVar16.x)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.y - vLocal_348.y) > vVar16.y)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.z - vLocal_348.z) > vVar16.z)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_68(bVar0))
											{
												UNK_0xA47B46945FF6DE74(bVar0, vLocal_121, 1, 0, 0, 1);
												UNK_0xD8F6A53F4799FAFE(bVar0, bLocal_125);
												UNK_0xB9FD7450C0DAB575(bVar0, 1084227584 /* Float: 5f */);
											}
										}
										else if (UNK_0xC844350D5D58C99A(bVar0))
										{
											if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bVar0, 0))
											{
												UNK_0xA954465BA6FDEFE2(&bVar0);
											}
										}
									}
									else if (UNK_0x0EB28750412C3A5A(vLocal_95, -2956.78f, 488.19f, 14.47f, 1) < 5f && UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -2955.234f, 492.4626f, 13.80307f, -2967.116f, 493.0511f, 17.05663f, 9.75f, 0, true, 0))
									{
										vVar16 = { 2.9f, 12f, 8f };
										vLocal_121 = { -2972.31f, 490.07f, 15.03f };
										bLocal_125 = 357.64f;
										bVar22 = true;
										if ((vLocal_351.x - vLocal_348.x) > vVar16.x)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.y - vLocal_348.y) > vVar16.y)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.z - vLocal_348.z) > vVar16.z)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_68(bVar0))
											{
												UNK_0xA47B46945FF6DE74(bVar0, vLocal_121, 1, 0, 0, 1);
												UNK_0xD8F6A53F4799FAFE(bVar0, bLocal_125);
												UNK_0xB9FD7450C0DAB575(bVar0, 1084227584 /* Float: 5f */);
											}
										}
										else if (UNK_0xC844350D5D58C99A(bVar0))
										{
											if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bVar0, 0))
											{
												UNK_0xA954465BA6FDEFE2(&bVar0);
											}
										}
									}
									else if ((UNK_0x0EB28750412C3A5A(vLocal_95, 174.53f, 6637.64f, 30.57f, 1) < 5f && UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 178.246f, 6638.824f, 30.5274f, 173.4713f, 6634.083f, 33.6823f, 6f, 0, true, 0)) && UNK_0x3D1053F9EB43B7AD(bVar0, 180.1225f, 6640.33f, 30.78129f, 171.623f, 6631.794f, 33.69934f, 8f, 0, true, 0))
									{
										vVar16 = { 2.9f, 12f, 8f };
										vLocal_121 = { 184.05f, 6628.75f, 31.27f };
										bLocal_125 = 89.37f;
										bVar22 = true;
										if ((vLocal_351.x - vLocal_348.x) > vVar16.x)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.y - vLocal_348.y) > vVar16.y)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.z - vLocal_348.z) > vVar16.z)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_68(bVar0))
											{
												UNK_0xA47B46945FF6DE74(bVar0, vLocal_121, 1, 0, 0, 1);
												UNK_0xD8F6A53F4799FAFE(bVar0, bLocal_125);
												UNK_0xB9FD7450C0DAB575(bVar0, 1084227584 /* Float: 5f */);
											}
										}
										else if (UNK_0xC844350D5D58C99A(bVar0))
										{
											if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bVar0, 0))
											{
												UNK_0xA954465BA6FDEFE2(&bVar0);
											}
										}
									}
									else
									{
										vVar16 = { 2.9f, 12f, 8f };
										bLocal_125 = UNK_0xD9522BA9E27E1349(bVar0);
										vLocal_121 = { func_66(vLocal_126, UNK_0x1BB04F10296A1C5E(bLocal_362, bLocal_364, vLocal_126, vLocal_129, false, 2)) };
										if (func_65(0f, 0f, 0f, vLocal_121, 0))
										{
											vLocal_121 = { UNK_0x68F4C0EC296D3901(bVar0, true) };
										}
										if (UNK_0xAFB8495D36825275(UNK_0x134B62B726CEC8E6(bVar0)))
										{
											vLocal_351.x = (vLocal_351.x + 3f);
											vLocal_351.f_1 = (vLocal_351.y + 3f);
										}
										bVar22 = true;
										if ((vLocal_351.x - vLocal_348.x) > vVar16.x)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.y - vLocal_348.y) > vVar16.y)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.z - vLocal_348.z) > vVar16.z)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_68(bVar0))
											{
												UNK_0xA47B46945FF6DE74(bVar0, vLocal_121, 1, 0, 0, 1);
												UNK_0xD8F6A53F4799FAFE(bVar0, bLocal_125);
												UNK_0xB9FD7450C0DAB575(bVar0, 1084227584 /* Float: 5f */);
											}
										}
										else if (UNK_0xC844350D5D58C99A(bVar0))
										{
											if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bVar0, 0))
											{
												UNK_0xA954465BA6FDEFE2(&bVar0);
											}
										}
									}
								}
							}
						}
						if (func_68(bVar0))
						{
							UNK_0xA6B02C1DB14DDA13(UNK_0x134B62B726CEC8E6(bVar0), &vLocal_348, &vLocal_351);
							if (UNK_0x5A91F08DF773C39D(bVar0, vLocal_126, (vLocal_351.y + 1f), (vLocal_351.y + 1f), 1f, false, true, 0) || UNK_0x5A91F08DF773C39D(bVar0, UNK_0x1BB04F10296A1C5E(bLocal_362, bLocal_364, vLocal_126, vLocal_129, false, 2), (vLocal_351.y + 1f), (vLocal_351.y + 1f), 1f, false, true, 0))
							{
								UNK_0xA47B46945FF6DE74(bVar0, vLocal_358, 1, 0, 0, 1);
								UNK_0xD8F6A53F4799FAFE(bVar0, bLocal_361);
								UNK_0xB9FD7450C0DAB575(bVar0, 1084227584 /* Float: 5f */);
							}
						}
						if (UNK_0xC844350D5D58C99A(bLocal_101))
						{
							UNK_0x4A4806F9D471E491(bLocal_101, true, 0);
						}
						UNK_0x21688103CC7F9B19(vLocal_126 - Vector(10f, 10f, 10f), vLocal_126 + Vector(10f, 10f, 10f), 0);
						UNK_0x679C321F8CAA2CFA(vLocal_126, 20f, 0);
						UNK_0x745CE398A4B0A3C6(vLocal_126, 10f, 0);
						UNK_0x536F1BE96C726C4B(vLocal_126, (vLocal_351.y + 1f), 1, 0, 0, false);
						UNK_0x7800CEC090C01D4D(vLocal_126, 25f);
						UNK_0x6C5B8C4234CEA349(UNK_0x16F2683693E537C9(), true);
						UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
						iLocal_112 = UNK_0xE9744DB7B8CA6965(vLocal_126, vLocal_129, 2);
						UNK_0xEFC3DF9D33E248D8(iLocal_112, false);
						iLocal_149 = UNK_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", false);
						UNK_0x5818C8D5303DCCF8(iLocal_149, 15f);
						UNK_0x93E9ED66DAB9FBE3(iLocal_149, iLocal_112, bLocal_365, bLocal_362);
						UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
						UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
						UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), iLocal_112, bLocal_362, bLocal_363, 1000f, -1000f, 1024, 0, 1148846080, 0);
						UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_100))
						{
							UNK_0x327AAEE25F323797(bLocal_100);
							UNK_0x915804B434753CBD(bLocal_100, iLocal_112, bLocal_362, bLocal_364, 1000f, -4f, 0, 0, 1148846080, 0);
						}
						UNK_0xE3BB8E05FCEB3FBE(iLocal_149, true);
						UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
						StringCopy(&cVar25, sLocal_336, 16);
						StringConCat(&cVar25, "_1", 16);
						StringCopy(&cVar29, cLocal_332, 16);
						StringConCat(&cVar29, "_1", 16);
						func_53(&Local_159, cLocal_335, sLocal_336, &cVar25, cLocal_332, &cVar29, 7, 0, 0);
						SYSTEM::SETTIMERA(0);
						UNK_0x68F065432F4692FB(0);
						func_52(joaat("RC_WALLETS_RETURNED"), 1);
						UNK_0x6FB46C25CCB7E6D5(joaat("RC_WALLETS_RETURNED"), &uVar33, -1);
						iLocal_150++;
					}
					else
					{
						if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
						{
						}
						if (UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()))
						{
						}
						if (UNK_0x4D1EAD5574D867CF(UNK_0x16F2683693E537C9()))
						{
						}
						if (UNK_0xA48EBBEA418ADC94(UNK_0x16F2683693E537C9()))
						{
						}
					}
					UNK_0x3FC8DBCC154CA56B();
					break;
				case 1:
					if ((UNK_0x69DF961355195C3C(iLocal_112) && UNK_0xA45992A6CE82FB43(iLocal_112) == 1f) || func_49())
					{
						UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
						UNK_0x94FD98915D03BAC2(UNK_0xD803B885F5E47A62(), 0, 0);
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_100))
						{
							UNK_0x6D80F1AEBA734886(bLocal_100, (bLocal_345 - (bLocal_345 / 10)));
							UNK_0x11AD11297DC58CC7(bLocal_100, false);
							UNK_0x79C43E2BAC7C696F(bLocal_100, bLocal_146, 1048576000 /* Float: 0.25f */);
						}
						if (UNK_0x757EF87A33649210())
						{
							UNK_0x327AAEE25F323797(bLocal_100);
							vVar10 = { UNK_0x1BB04F10296A1C5E(bLocal_362, bLocal_364, vLocal_126, vLocal_129, 1f, 2) };
							UNK_0xE82754C349C7B581(vVar10, &(vVar10.f_2), 0, 0);
							UNK_0xA47B46945FF6DE74(bLocal_100, vVar10, 1, 0, 0, 1);
							vVar10 = { UNK_0xEEB20D14BD38615E(bLocal_362, bLocal_364, vLocal_126, vLocal_129, 1f, 2) };
							UNK_0xD8F6A53F4799FAFE(bLocal_100, vVar10.z);
						}
						vVar10 = { UNK_0xEEB20D14BD38615E(bLocal_362, bLocal_364, vLocal_126, vLocal_129, 1f, 2) };
						if (func_69(vLocal_95, -526.58f, -1222.79f, 17.46f, 10f, 0))
						{
							if (func_48(UNK_0x16F2683693E537C9(), 215.68f, 60f))
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_105);
								UNK_0x96167B03C5A77156(false, UNK_0x68E4ADDDDCD7BDDE(bLocal_100, 0f, 3.5f, 0f), 1f, 20000, 1048576000 /* Float: 0.25f */, 5, 1193033728);
								UNK_0x96167B03C5A77156(false, -503.46f, -1199.39f, 19.02f, 1f, 20000, 1048576000 /* Float: 0.25f */, 5, 1193033728);
								UNK_0x01E4BB5190DF7317(false, UNK_0xD9522BA9E27E1349(bLocal_100), 1);
								UNK_0x75ABDC5F81978924(iLocal_105);
								UNK_0x78ADC381772E3D54(bLocal_100, iLocal_105);
								UNK_0xF82EA857DA10E0CD(&iLocal_105);
							}
							else if (func_48(UNK_0x16F2683693E537C9(), 122.0371f, 60f))
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_105);
								UNK_0x96167B03C5A77156(false, UNK_0x68E4ADDDDCD7BDDE(bLocal_100, 0f, 3.5f, 0f), 1f, 20000, 1048576000 /* Float: 0.25f */, 5, 1193033728);
								UNK_0x96167B03C5A77156(false, -543.35f, -1208.09f, 16.73f, 1f, 20000, 1048576000 /* Float: 0.25f */, 5, 1193033728);
								UNK_0x01E4BB5190DF7317(false, UNK_0xD9522BA9E27E1349(bLocal_100), 1);
								UNK_0x75ABDC5F81978924(iLocal_105);
								UNK_0x78ADC381772E3D54(bLocal_100, iLocal_105);
								UNK_0xF82EA857DA10E0CD(&iLocal_105);
							}
							else
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_105);
								UNK_0x96167B03C5A77156(false, UNK_0x68E4ADDDDCD7BDDE(bLocal_100, 0f, 3.5f, 0f), 1f, 20000, 1048576000 /* Float: 0.25f */, 5, 1193033728);
								UNK_0x01E4BB5190DF7317(false, UNK_0xD9522BA9E27E1349(bLocal_100), 1);
								UNK_0x75ABDC5F81978924(iLocal_105);
								UNK_0x78ADC381772E3D54(bLocal_100, iLocal_105);
								UNK_0xF82EA857DA10E0CD(&iLocal_105);
							}
						}
						else if (UNK_0x0EB28750412C3A5A(vLocal_95, 288.46f, -1256.71f, 28.44f, 1) < 5f)
						{
							if (func_48(UNK_0x16F2683693E537C9(), 200.8887f, 60f))
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_105);
								UNK_0x96167B03C5A77156(false, UNK_0x68E4ADDDDCD7BDDE(bLocal_100, 0f, 3.5f, 0f), 1f, 20000, 1048576000 /* Float: 0.25f */, 5, 1193033728);
								UNK_0x96167B03C5A77156(false, 289.08f, -1286.56f, 28.68f, 1f, 20000, 1048576000 /* Float: 0.25f */, 5, 1193033728);
								UNK_0x01E4BB5190DF7317(false, UNK_0xD9522BA9E27E1349(bLocal_100), 1);
								UNK_0x75ABDC5F81978924(iLocal_105);
								UNK_0x78ADC381772E3D54(bLocal_100, iLocal_105);
								UNK_0xF82EA857DA10E0CD(&iLocal_105);
							}
							else if (func_48(UNK_0x16F2683693E537C9(), 347.8599f, 60f))
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_105);
								UNK_0x96167B03C5A77156(false, UNK_0x68E4ADDDDCD7BDDE(bLocal_100, 0f, 3.5f, 0f), 1f, 20000, 1048576000 /* Float: 0.25f */, 5, 1193033728);
								UNK_0x96167B03C5A77156(false, 241.22f, -1236.76f, 28.26f, 1f, 20000, 1048576000 /* Float: 0.25f */, 5, 1193033728);
								UNK_0x01E4BB5190DF7317(false, UNK_0xD9522BA9E27E1349(bLocal_100), 1);
								UNK_0x75ABDC5F81978924(iLocal_105);
								UNK_0x78ADC381772E3D54(bLocal_100, iLocal_105);
								UNK_0xF82EA857DA10E0CD(&iLocal_105);
							}
							else
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_105);
								UNK_0x96167B03C5A77156(false, UNK_0x68E4ADDDDCD7BDDE(bLocal_100, 0f, 3.5f, 0f), 1f, 20000, 1048576000 /* Float: 0.25f */, 5, 1193033728);
								UNK_0x01E4BB5190DF7317(false, UNK_0xD9522BA9E27E1349(bLocal_100), 1);
								UNK_0x75ABDC5F81978924(iLocal_105);
								UNK_0x78ADC381772E3D54(bLocal_100, iLocal_105);
								UNK_0xF82EA857DA10E0CD(&iLocal_105);
							}
						}
						else
						{
							UNK_0xDD353D0E9C789D0E(&iLocal_105);
							UNK_0x96167B03C5A77156(false, UNK_0x68E4ADDDDCD7BDDE(bLocal_100, 0f, 2.5f, 0f), 1f, 20000, 1048576000 /* Float: 0.25f */, 5, 1193033728);
							UNK_0x01E4BB5190DF7317(false, UNK_0xD9522BA9E27E1349(bLocal_100), 1);
							UNK_0x75ABDC5F81978924(iLocal_105);
							UNK_0x78ADC381772E3D54(bLocal_100, iLocal_105);
							UNK_0xF82EA857DA10E0CD(&iLocal_105);
						}
						UNK_0xBD453909DC26A85D(bLocal_100, joaat("MOTIONSTATE_WALK"), true, 0, 0);
						UNK_0x46CB381A452EF99D(bLocal_100, 1);
						UNK_0xFADC0A217229F6B5(bLocal_100, true);
						func_47(&bLocal_117);
						SYSTEM::SETTIMERB(0);
						UNK_0x29D5132FBDCF2B1E(0);
						if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
						{
							UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
							if (!func_46())
							{
								UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
							}
						}
						if (UNK_0xC844350D5D58C99A(bLocal_101))
						{
							UNK_0xF690C84DADBB3551(&bLocal_101);
						}
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_100))
						{
							UNK_0x6D80F1AEBA734886(bLocal_100, (bLocal_345 - (bLocal_345 / 10)));
						}
						UNK_0x6C5B8C4234CEA349(UNK_0x16F2683693E537C9(), false);
						UNK_0x2FB9A57162E54BAB(0f);
						UNK_0xE3BB8E05FCEB3FBE(iLocal_149, false);
						func_45();
						UNK_0x9A8DDC7C522F5BF5(iLocal_149, 0);
						UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
						if (UNK_0x757EF87A33649210())
						{
							UNK_0x82E51BCA72537B6C(500);
							while (UNK_0x7BCE0E6DD4A1F749())
							{
								SYSTEM::WAIT(0);
							}
						}
						iVar34 = (bLocal_345 / 100);
						iVar34 *= 90;
						SYSTEM::WAIT(0);
						UNK_0x04B065D07D2FB5B9(0, 0, 3, 0);
						func_85(0, 1, 1, 0, 0, 0);
						func_3(func_39(), 1, iVar34);
						func_296(1);
					}
					else
					{
						UNK_0x3FC8DBCC154CA56B();
						if (UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), joaat("DETACH")))
						{
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_100) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
							{
								if (UNK_0x50B5F6F3C29E9380(bLocal_101, UNK_0x16F2683693E537C9()))
								{
									UNK_0x15AFB6CBDE990FB6(bLocal_101, 0, true);
									if (UNK_0xCED082ADD3739B9F(bLocal_100))
									{
										UNK_0x9F528B1B53FBC5D9(bLocal_101, bLocal_100, UNK_0x4A089F2B762B8D33(bLocal_100, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
									else
									{
										UNK_0x9F528B1B53FBC5D9(bLocal_101, bLocal_100, UNK_0x4A089F2B762B8D33(bLocal_100, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
								}
							}
						}
					}
					break;
			}
		}
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (func_38(iParam0) == 3)
	{
		return 0;
	}
	if (func_38(iParam0) == 4)
	{
		return 0;
	}
	return func_4(func_38(iParam0), 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_37();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_36(99, 1);
					func_52(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_52(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_52(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_20(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_15(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_52(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_52(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_52(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_15(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_52(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_52(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_52(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_52(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_52(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_52(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_52(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_52(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_52(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				default:
					switch (UNK_0x7CF4675EC2B8ED0B())
					{
						case joaat("CLOTHES_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_52(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_52(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_52(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_52(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_52(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_52(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_15(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_52(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_52(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_52(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_52(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_52(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_52(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_14(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_36(95, iParam3);
					break;
				case 1:
					func_36(97, iParam3);
					break;
				case 2:
					func_36(96, iParam3);
					break;
			}
			func_36(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_7(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_7(bVar1);
	}
	iVar5 = (Global_58686[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58686[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58686[iVar2] = 2147483647;
				}
				else
				{
					Global_58686[iVar2] = (Global_58686[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_52(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					func_52(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					func_52(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		case 0:
			if (!bParam4)
			{
				if ((Global_58686[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58686[iVar2];
			Global_58686[iVar2] = (Global_58686[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111638.f_20559.f_233[iVar2 /*69*/]++;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_1++;
		if (Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_6(iParam0);
	if (Global_41431 == 15)
	{
		func_5(0);
	}
	return 1;
}

void func_5(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0 /*3*/][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0 /*3*/][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0 /*3*/][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0 /*3*/][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0 /*3*/][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0 /*3*/][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0 /*3*/][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0 /*3*/][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0 /*3*/][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0 /*3*/][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0 /*3*/][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0 /*3*/][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0 /*3*/][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0 /*3*/][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0 /*3*/][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0 /*3*/][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0 /*3*/][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0 /*3*/][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_6(int iParam0)
{
	bool bVar0;

	bVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			UNK_0xCDC520E5E48E63D9(joaat("SP0_TOTAL_CASH"), bVar0, 1);
			break;
		case 1:
			UNK_0xCDC520E5E48E63D9(joaat("SP1_TOTAL_CASH"), bVar0, 1);
			break;
		case 2:
			UNK_0xCDC520E5E48E63D9(joaat("SP2_TOTAL_CASH"), bVar0, 1);
			break;
	}
}

void func_7(bool bParam0)
{
	bool bVar0;
	char cVar1[64];

	if (bParam0 == 8)
	{
		func_13(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_13(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_13(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_13(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_10(8269, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_10(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_10(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_10(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_10(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_10(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!UNK_0x8CD06866876216F2())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0))
		{
			bVar0 = true;
			UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0) || UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_9() /*10930*/].f_6174.f_10, bParam0))
	{
		bVar0 = true;
		UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		UNK_0x0674E58A79778E99(&(Global_2097152[func_9() /*10930*/].f_6174.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UNK_0x1E64CE678ED5F61E("COUP_RED");
		UNK_0x6B012227B3921E18(func_8(bParam0));
		UNK_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_8(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		case 1:
			return "COUP_TATTOO";
		case 2:
			return "COUP_WARSTOCK";
		case 3:
			return "COUP_MOSPORT";
		case 4:
			return "COUP_ELITAS";
		case 5:
			return "COUP_MEDSPENS";
		case 6:
			return "COUP_SPRUNK";
		case 7:
			return "COUP_RESPRAY";
		case 8:
			return "COUP_XMAS2017";
		case 9:
			return "COUP_CAR_XMAS2018";
		case 10:
			return "COUP_HELI_XMAS2018";
		case 11:
			return "COUP_CAR2_XMAS2018";
		case 12:
			return "COUP_CAS_ELITAS";
		case 13:
			return "COUP_CAS_DOCKTEASE";
		case 14:
			return "COUP_CAS_MOSPORT";
		case 15:
			return "COUP_CAS_SSASA";
		case 16:
			return "COUP_CAS_WARSTOCK";
		case 17:
			return "COUP_CAS_PANDM";
		default:
			break;
	}
	return "";
}

int func_9()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_10(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_11(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1312745;
}

int func_13(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
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

	if (bParam2 == -1)
	{
		bParam2 = func_12();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, bParam2);
		iVar1 = ((iParam0 - 0) - UNK_0x04D746E8DA20611E((iParam0 - 0)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, bParam2);
		iVar1 = ((iParam0 - 192) - UNK_0x04D746E8DA20611E((iParam0 - 192)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, false);
		iVar1 = ((iParam0 - 513) - UNK_0x04D746E8DA20611E((iParam0 - 513)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, false);
		iVar1 = ((iParam0 - 705) - UNK_0x04D746E8DA20611E((iParam0 - 705)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = UNK_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, bParam2);
		iVar1 = ((iParam0 - 3111) - UNK_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = UNK_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, false);
		iVar1 = ((iParam0 - 2919) - UNK_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = UNK_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, bParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - UNK_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = UNK_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, false, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - UNK_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = UNK_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, bParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - UNK_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = UNK_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, bParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - UNK_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = UNK_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, false, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - UNK_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = UNK_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, bParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - UNK_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = UNK_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, bParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - UNK_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = UNK_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, bParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - UNK_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = UNK_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, bParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - UNK_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = UNK_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, bParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - UNK_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = UNK_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, bParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - UNK_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = UNK_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, bParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - UNK_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = UNK_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, bParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - UNK_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = UNK_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, bParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - UNK_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = UNK_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, bParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - UNK_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = UNK_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, bParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - UNK_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = UNK_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, bParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - UNK_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_14(int iParam0)
{
	func_36(93, iParam0);
	func_36(29, iParam0);
	func_36(30, iParam0);
}

bool func_15(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (bParam0 == 8)
	{
		return func_17(129, -1, -1);
	}
	if (bParam0 == 9)
	{
		return func_17(135, -1, -1);
	}
	if (bParam0 == 10)
	{
		return func_17(136, -1, -1);
	}
	if (bParam0 == 11)
	{
		return func_17(137, -1, -1);
	}
	if (bParam0 == 12)
	{
		iVar0 = UNK_0xDD0E7998AE8AD485();
		iVar1 = func_16(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 13)
	{
		iVar2 = UNK_0xDD0E7998AE8AD485();
		iVar3 = func_16(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 14)
	{
		iVar4 = UNK_0xDD0E7998AE8AD485();
		iVar5 = func_16(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 15)
	{
		iVar6 = UNK_0xDD0E7998AE8AD485();
		iVar7 = func_16(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 16)
	{
		iVar8 = UNK_0xDD0E7998AE8AD485();
		iVar9 = func_16(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 17)
	{
		iVar10 = UNK_0xDD0E7998AE8AD485();
		iVar11 = func_16(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return false;
		}
		return true;
	}
	if (!UNK_0x8CD06866876216F2())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0);
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_9() /*10930*/].f_6174.f_10, bParam0);
}

int func_16(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_11(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_17(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_12();
	}
	iVar1 = func_19(iParam0, bParam1);
	iVar2 = func_18(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_18(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - UNK_0x04D746E8DA20611E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - UNK_0x04D746E8DA20611E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - UNK_0x04D746E8DA20611E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - UNK_0x04D746E8DA20611E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - UNK_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - UNK_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - UNK_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - UNK_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - UNK_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - UNK_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - UNK_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - UNK_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - UNK_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - UNK_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - UNK_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - UNK_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - UNK_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - UNK_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - UNK_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - UNK_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - UNK_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - UNK_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - UNK_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_19(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_12();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, bParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, bParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, false);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, false);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = UNK_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, false);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = UNK_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, bParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, false, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, bParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, bParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, false, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, bParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, bParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, bParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, bParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, bParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, bParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, bParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, bParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, bParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, bParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, bParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, bParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, bParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_20(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	if (UNK_0x5E109EC687D2605A(27))
	{
		return 0;
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	UNK_0x6FB46C25CCB7E6D5(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (bVar1 > 0 && (iVar2 / 2000000) != (bVar1 / 2000000))
	{
		UNK_0xCDC520E5E48E63D9(joaat("NUM_CASH_SPENT"), bVar1, 1);
		func_35(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_21(27, 1);
	return 1;
}

int func_21(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_22(iParam0, iParam1);
}

int func_22(int iParam0, int iParam1)
{
	if (func_34(14) && !func_33(iParam0))
	{
		return 0;
	}
	if (UNK_0x5E109EC687D2605A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31017 != 0 && !Global_76622)
	{
		return 0;
	}
	if (func_32(&Global_4270065))
	{
		if (func_30(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_23(&Global_4270065, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!UNK_0x5A66449FC9BDF808(iParam0))
		{
			return 0;
		}
		if (UNK_0x5E109EC687D2605A(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

bool func_23(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_34(14) && !func_33(iParam1))
	{
		return false;
	}
	if (func_30(uParam0, iParam1))
	{
		return false;
	}
	if (func_29(uParam0) < 0f)
	{
		func_28(uParam0, 0);
	}
	func_26(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_24(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_24(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_34(14) && !func_33(iParam1))
	{
		return 0;
	}
	if (func_30(uParam0, iParam1))
	{
		return 0;
	}
	if (func_29(uParam0) < 0f)
	{
		func_28(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_25(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_25(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_26(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_27(uParam0, iVar0);
		iVar0++;
	}
	func_28(uParam0, (Global_4270064 - 0.5f));
}

void func_27(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_28(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_29(var uParam0)
{
	return uParam0->f_80;
}

bool func_30(var uParam0, int iParam1)
{
	return func_31(uParam0, iParam1) != -1;
}

int func_31(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_32(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_33(int iParam0)
{
	switch (iParam0)
	{
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
			return true;
		default:
			break;
	}
	return false;
}

bool func_34(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_35(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (bParam1 <= 0 || bParam1 > 100)
	{
		return 0;
	}
	iVar0 = UNK_0xBD47F720AB99D749(iParam0);
	if (bParam1 > iVar0)
	{
		return UNK_0x12ABC45272B87562(iParam0, bParam1);
	}
	return 0;
}

void func_36(int iParam0, int iParam1)
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

void func_37()
{
	int iVar0;

	if (UNK_0x61D9362D70D2DD56())
	{
		UNK_0x6FB46C25CCB7E6D5(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[0] == iVar0)
		{
			Global_58686[0] = iVar0;
		}
		UNK_0x6FB46C25CCB7E6D5(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[1] == iVar0)
		{
			Global_58686[1] = iVar0;
		}
		UNK_0x6FB46C25CCB7E6D5(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[2] == iVar0)
		{
			Global_58686[2] = iVar0;
		}
	}
}

int func_38(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

int func_39()
{
	func_40();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_40()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_43(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_42(UNK_0x16F2683693E537C9());
			if (func_41(iVar0) && (!func_34(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_41(Global_111638.f_2358.f_539.f_4321))
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

bool func_41(int iParam0)
{
	return iParam0 < 3;
}

int func_42(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_43(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_43(int iParam0)
{
	if (func_41(iParam0))
	{
		return func_44(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_44(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_45()
{
	int iVar0;

	iVar0 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), UNK_0x68E4ADDDDCD7BDDE(UNK_0x16F2683693E537C9(), 0.5f, -1f, 0.5f), 0f, 0f, UNK_0xD9522BA9E27E1349(UNK_0x16F2683693E537C9()), 65f, 1, 2);
	UNK_0xE3BB8E05FCEB3FBE(iVar0, true);
}

bool func_46()
{
	if (UNK_0xA4FD7964FEE91ED8(UNK_0x5A0033B025D45F1B()) == 4)
	{
		return true;
	}
	return false;
}

void func_47(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		UNK_0x437347B10A200C4B(*bParam0, 0);
		if (UNK_0xAF6690C489CC6203(*bParam0) && UNK_0x9C77D2D0559097F0(*bParam0, 1))
		{
			UNK_0x046C362CF15F1935(bParam0);
		}
	}
}

bool func_48(bool bParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;

	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (fVar0 > fVar1)
		{
			if (UNK_0xD9522BA9E27E1349(bParam0) < fVar0 && UNK_0xD9522BA9E27E1349(bParam0) > fVar1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (UNK_0xD9522BA9E27E1349(bParam0) < fVar0 || UNK_0xD9522BA9E27E1349(bParam0) > fVar1)
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

bool func_49()
{
	if (func_50(1000))
	{
		UNK_0x53491B90E4FD0E56(500);
		while (UNK_0xD0BB2359EC70FC37())
		{
			UNK_0x3FC8DBCC154CA56B();
			SYSTEM::WAIT(0);
		}
		return true;
	}
	return false;
}

bool func_50(int iParam0)
{
	if (UNK_0x0F1CCD77290EE12F())
	{
		if ((UNK_0x1C0640BA9A7327B3() - Global_28) > iParam0)
		{
			Global_27 = UNK_0x1C0640BA9A7327B3();
		}
		Global_28 = UNK_0x1C0640BA9A7327B3();
		if ((UNK_0x1C0640BA9A7327B3() - Global_27) > iParam0)
		{
			if (func_51())
			{
				Global_27 = UNK_0x1C0640BA9A7327B3();
				return true;
			}
		}
	}
	return false;
}

bool func_51()
{
	if (UNK_0x798A3F1296751F46())
	{
		return false;
	}
	if (UNK_0xBFC0798A6E3417F9(0, 18) || UNK_0xBFC0798A6E3417F9(2, 18))
	{
		return true;
	}
	return false;
}

void func_52(int iParam0, int iParam1)
{
	bool bVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	UNK_0xCDC520E5E48E63D9(iParam0, bVar0, 1);
}

int func_53(var uParam0, char* sParam1, char[4] cParam2, char[4] cParam3, char* sParam4, char[4] cParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar11;

	func_64(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar11 = 10;
	func_63(2, &uVar0, &uVar11, cParam2, cParam3, sParam4, cParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_54(&uVar0, &uVar11, iParam6, 0);
}

int func_54(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam2 > Global_20807)
			{
				if (bParam3 == 0)
				{
					UNK_0x5CEB4DB888A62073(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
				}
				else
				{
					func_62();
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
		if (func_61(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_60();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21801 = Global_21802;
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20424.f_370 = Global_21794;
		Global_20801 = Global_20802;
		Global_20803 = Global_20804;
		if (Global_21063 == 0)
		{
			Global_20959[0 /*6*/] = { Global_20985[0 /*6*/] };
			Global_20959[1 /*6*/] = { Global_20985[1 /*6*/] };
			Global_21011[0 /*6*/] = { Global_21037[0 /*6*/] };
			Global_21011[1 /*6*/] = { Global_21037[1 /*6*/] };
			Global_20972[0 /*6*/] = { Global_20998[0 /*6*/] };
			Global_20972[1 /*6*/] = { Global_20998[1 /*6*/] };
			Global_21024[0 /*6*/] = { Global_21050[0 /*6*/] };
			Global_21024[1 /*6*/] = { Global_21050[1 /*6*/] };
		}
		if (Global_20811)
		{
			UNK_0x0674E58A79778E99(&Global_7356, 20);
			UNK_0x0674E58A79778E99(&Global_7357, 17);
			UNK_0x0674E58A79778E99(&Global_7358, false);
			if (bParam3)
			{
				func_59();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_58())
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
					if (Global_21063 == 0)
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
			}
			if (func_57())
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
			}
			func_56();
			Global_20815 = bParam3;
		}
		Global_20807 = iParam2;
		if (Global_20801 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_20801)
			{
				StringCopy(&(Global_20424.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_20424.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_19671 = 0;
		func_55();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_20807 || iParam2 == Global_20807)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_62();
	}
	return 0;
}

void func_55()
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

void func_56()
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

bool func_57()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_58()
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

void func_59()
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
		Global_19486 = func_39();
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

void func_60()
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

bool func_61(bool bParam0, int iParam1)
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

void func_62()
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

void func_63(int iParam0, var uParam1, var uParam2, char* sParam3, char[4] cParam4, char* sParam5, char[4] cParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_20802 = iParam0;
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	(*uParam1)[0] = sParam3;
	(*uParam2)[0] = cParam4;
	(*uParam1)[1] = sParam5;
	(*uParam2)[1] = cParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_64(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_65(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_66(vector3 vParam0, vector3 vParam3)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	var uVar19;
	vector3 vVar22;
	vector3 vVar25;
	var uVar28;
	int iVar29;

	iVar13 = 0;
	iVar14 = 1;
	bVar0 = UNK_0x728870EB733D12A1();
	if (!UNK_0xAF6690C489CC6203(bVar0))
	{
		UNK_0x73270B3C9CC833FD(bVar0, true, 0);
	}
	UNK_0xA6B02C1DB14DDA13(UNK_0x134B62B726CEC8E6(bVar0), &vVar7, &vVar10);
	UNK_0x4490D017C57827E9(vParam0, 3, &vVar4, 1, 3f, 0f);
	if (SYSTEM::VDIST(vParam0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		vVar1 = { -3045.49f, 604.46f, 7.02f };
		iVar13 = 8;
	}
	else if (SYSTEM::VDIST(vParam0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		vVar1 = { 278.97f, -1255.06f, 28.88f };
		iVar13 = 8;
	}
	while (iVar13 < 8)
	{
		switch (iVar13)
		{
			case 0:
				if (SYSTEM::VDIST(vVar4, UNK_0x68E4ADDDDCD7BDDE(bVar0, 0f, (vVar10.y + IntToFloat(iVar14)), 0f)) < SYSTEM::VDIST(vVar4, UNK_0x68E4ADDDDCD7BDDE(bVar0, 0f, -(vVar10.y + IntToFloat(iVar14)), 0f)))
				{
					vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bVar0, 0f, (vVar10.y + IntToFloat(iVar14)), 0f) };
				}
				else
				{
					vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bVar0, 0f, -(vVar10.y + IntToFloat(iVar14)), 0f) };
				}
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					if (!UNK_0x437347B10A200C4B(bVar0, 0))
					{
						vVar22 = { func_67(vVar1, 0f, vVar10) };
						vVar25 = { func_67(vVar1, 0f, vVar7) };
						iVar29 = UNK_0xCD02F8660C47B801(vVar22, vVar25, 511, bVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			case 1:
				if (UNK_0x1EC301670B54C6DE(iVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else if (UNK_0x0EB28750412C3A5A(vVar1, vParam0, 1) <= 5f || UNK_0x0EB28750412C3A5A(vVar1, vParam3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			case 2:
				if (SYSTEM::VDIST(vVar4, UNK_0x68E4ADDDDCD7BDDE(bVar0, 0f, (vVar10.y - IntToFloat(iVar14)), 0f)) < SYSTEM::VDIST(vVar4, UNK_0x68E4ADDDDCD7BDDE(bVar0, 0f, -(vVar10.y - IntToFloat(iVar14)), 0f)))
				{
					vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bVar0, 0f, (vVar10.y - IntToFloat(iVar14)), 0f) };
				}
				else
				{
					vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bVar0, 0f, -(vVar10.y - IntToFloat(iVar14)), 0f) };
				}
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					if (!UNK_0x437347B10A200C4B(bVar0, 0))
					{
						vVar22 = { func_67(vVar1, 0f, vVar10) };
						vVar25 = { func_67(vVar1, 0f, vVar7) };
						iVar29 = UNK_0xCD02F8660C47B801(vVar22, vVar25, 511, bVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			case 3:
				if (UNK_0x1EC301670B54C6DE(iVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else if (UNK_0x0EB28750412C3A5A(vVar1, vParam0, 1) <= 5f || UNK_0x0EB28750412C3A5A(vVar1, vParam3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			case 4:
				if (SYSTEM::VDIST(vVar4, UNK_0x68E4ADDDDCD7BDDE(bVar0, (vVar10.x + IntToFloat(iVar14)), 0f, 0f)) < SYSTEM::VDIST(vVar4, UNK_0x68E4ADDDDCD7BDDE(bVar0, -(vVar10.x + IntToFloat(iVar14)), 0f, 0f)))
				{
					vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bVar0, (vVar10.x + IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bVar0, -(vVar10.x + IntToFloat(iVar14)), 0f, 0f) };
				}
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					if (!UNK_0x437347B10A200C4B(bVar0, 0))
					{
						vVar22 = { func_67(vVar1, 0f, vVar10) };
						vVar25 = { func_67(vVar1, 0f, vVar7) };
						iVar29 = UNK_0xCD02F8660C47B801(vVar22, vVar25, 511, bVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			case 5:
				if (UNK_0x1EC301670B54C6DE(iVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else if (UNK_0x0EB28750412C3A5A(vVar1, vParam0, 1) <= 5f || UNK_0x0EB28750412C3A5A(vVar1, vParam3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			case 6:
				if (SYSTEM::VDIST(vVar4, UNK_0x68E4ADDDDCD7BDDE(bVar0, (vVar10.x - IntToFloat(iVar14)), 0f, 0f)) < SYSTEM::VDIST(vVar4, UNK_0x68E4ADDDDCD7BDDE(bVar0, -(vVar10.x - IntToFloat(iVar14)), 0f, 0f)))
				{
					vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bVar0, (vVar10.x - IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bVar0, -(vVar10.x - IntToFloat(iVar14)), 0f, 0f) };
				}
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					if (!UNK_0x437347B10A200C4B(bVar0, 0))
					{
						vVar22 = { func_67(vVar1, 0f, vVar10) };
						vVar25 = { func_67(vVar1, 0f, vVar7) };
						iVar29 = UNK_0xCD02F8660C47B801(vVar22, vVar25, 511, bVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			case 7:
				if (UNK_0x1EC301670B54C6DE(iVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else if (UNK_0x0EB28750412C3A5A(vVar1, vParam0, 1) <= 5f || UNK_0x0EB28750412C3A5A(vVar1, vParam3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			case 8:
				break;
		}
		SYSTEM::WAIT(0);
	}
	return vVar1;
}

Vector3 func_67(vector3 vParam0, float fParam3, struct<2> Param4, var uParam6)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;

	fVar3 = fParam3;
	fVar4 = SYSTEM::COS(fVar3);
	fVar5 = SYSTEM::SIN(fVar3);
	vVar0.x = ((Param4 * fVar4) + (Param4.f_1 * fVar5));
	vVar0.f_1 = ((Param4.f_1 * fVar4) - (Param4 * fVar5));
	vVar6 = { vParam0 + vVar0 };
	return vVar6;
}

bool func_68(bool bParam0)
{
	if (func_112(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (!UNK_0x4E861BC5B1EDA7BD(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_69(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_70(bool bParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	var uVar19;

	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
	fParam2->f_2 = func_72(bParam0, UNK_0x16F2683693E537C9(), 1);
	fVar3 = func_72(bParam0, UNK_0x16F2683693E537C9(), 1);
	bVar4 = func_72(bParam0, UNK_0x16F2683693E537C9(), 1);
	vVar16 = { UNK_0x68F4C0EC296D3901(bParam0, false) - UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
	if (UNK_0xB4AE0788C1587752(bParam3))
	{
		vVar13 = { UNK_0x1BB04F10296A1C5E(bParam3, bParam4, *uParam1, *fParam2, false, 2) };
	}
	else
	{
		vVar13 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					fParam2->f_2 = func_71(UNK_0x68F4C0EC296D3901(bParam0, false), *uParam1, 1);
					*uParam1 = { UNK_0x8A5E176FF719A014(UNK_0x68F4C0EC296D3901(bParam0, false), fParam2->f_2, vVar16) };
					iVar0 = 2;
				}
				else
				{
					iVar5 = UNK_0x6D4C9F7CF124AE37(*uParam1, vVar13 + Vector(-1f, 0f, 0f), 0.5f, 17, false, 4);
					iVar0++;
				}
				break;
			case 1:
				if (UNK_0x1EC301670B54C6DE(iVar5, &iVar6, &vVar10, &uVar7, &uVar19) == 2)
				{
					if (iVar6 != 0)
					{
						if (vVar10.z > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								bVar4 = (bVar4 + 7.5f);
							}
							else
							{
								bVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { UNK_0x8A5E176FF719A014(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), bVar4, vVar16) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							fParam2->f_2 = func_71(vVar13 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			case 2:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

float func_71(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = UNK_0x5D8ABF6396A76564(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_72(bool bParam0, bool bParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, false) };
	return func_71(vVar0, vVar3, iParam2);
}

void func_73(vector3 vParam0, var uParam3, var uParam4)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;

	bVar0 = false;
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) - vParam0 };
		iVar4 = UNK_0xE7D606C557C86100(vVar1.x, vVar1.y);
		if (func_74(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), iVar4, 15f))
		{
			bVar0 = true;
		}
		vVar1 = { vParam0 - UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		iVar4 = UNK_0xE7D606C557C86100(vVar1.x, vVar1.y);
		if (func_74(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), iVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) > 30f)
		{
			*uParam3 = (6f * 4f);
		}
		else if (UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) > 20f)
		{
			*uParam3 = (6f * 3f);
		}
		else if (UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) > 10f)
		{
			*uParam3 = (6f * 2f);
		}
		else
		{
			*uParam3 = 6f;
		}
		*uParam4 = ((*uParam3 / 1.33f) - 1f);
	}
	else
	{
		*uParam3 = 6f;
		*uParam4 = ((*uParam3 / 1.33f) - 1f);
	}
}

bool func_74(bool bParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		fVar0 = UNK_0xD9522BA9E27E1349(bParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return true;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return true;
		}
	}
	return false;
}

void func_75(int iParam0)
{
	if (func_80())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_79(0))
		{
			func_76(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_76(int iParam0)
{
	if (func_80())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_78())
		{
			func_77(1, 1);
		}
		else
		{
			func_77(0, 0);
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
	if (!func_57())
	{
		Global_19486.f_1 = 3;
	}
}

void func_77(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_79(0))
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

bool func_78()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_79(int iParam0)
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

bool func_80()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_81()
{
	Global_19671 = 0;
	func_82();
}

void func_82()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

bool func_83(bool bParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	UNK_0x38C3A68D7861DCFD(0, 71, 1);
	UNK_0x38C3A68D7861DCFD(0, 72, 1);
	UNK_0x38C3A68D7861DCFD(0, 76, 1);
	UNK_0x38C3A68D7861DCFD(0, 73, 1);
	UNK_0x38C3A68D7861DCFD(0, 59, 1);
	UNK_0x38C3A68D7861DCFD(0, 60, 1);
	if (bParam5)
	{
		UNK_0x38C3A68D7861DCFD(0, 75, 1);
	}
	UNK_0x38C3A68D7861DCFD(0, 80, 1);
	if (!bParam6)
	{
		UNK_0x38C3A68D7861DCFD(0, 69, 1);
		UNK_0x38C3A68D7861DCFD(0, 70, 1);
		UNK_0x38C3A68D7861DCFD(0, 68, 1);
	}
	UNK_0x38C3A68D7861DCFD(0, 74, 1);
	UNK_0x38C3A68D7861DCFD(0, 86, 1);
	UNK_0x38C3A68D7861DCFD(0, 81, 1);
	UNK_0x38C3A68D7861DCFD(0, 82, 1);
	UNK_0x38C3A68D7861DCFD(0, 138, 1);
	UNK_0x38C3A68D7861DCFD(0, 136, 1);
	UNK_0x38C3A68D7861DCFD(0, 114, 1);
	UNK_0x38C3A68D7861DCFD(0, 107, 1);
	UNK_0x38C3A68D7861DCFD(0, 110, 1);
	UNK_0x38C3A68D7861DCFD(0, 89, 1);
	UNK_0x38C3A68D7861DCFD(0, 89, 1);
	UNK_0x38C3A68D7861DCFD(0, 87, 1);
	UNK_0x38C3A68D7861DCFD(0, 88, 1);
	UNK_0x38C3A68D7861DCFD(0, 113, 1);
	UNK_0x38C3A68D7861DCFD(0, 115, 1);
	UNK_0x38C3A68D7861DCFD(0, 116, 1);
	UNK_0x38C3A68D7861DCFD(0, 117, 1);
	UNK_0x38C3A68D7861DCFD(0, 118, 1);
	UNK_0x38C3A68D7861DCFD(0, 119, 1);
	UNK_0x38C3A68D7861DCFD(0, 352, 1);
	UNK_0x38C3A68D7861DCFD(0, 131, 1);
	UNK_0x38C3A68D7861DCFD(0, 132, 1);
	UNK_0x38C3A68D7861DCFD(0, 123, 1);
	UNK_0x38C3A68D7861DCFD(0, 126, 1);
	UNK_0x38C3A68D7861DCFD(0, 129, 1);
	UNK_0x38C3A68D7861DCFD(0, 130, 1);
	UNK_0x38C3A68D7861DCFD(0, 133, 1);
	UNK_0x38C3A68D7861DCFD(0, 134, 1);
	UNK_0xCFAE3195DD6AE715();
	func_84(bParam0);
	if ((UNK_0x1C0640BA9A7327B3() - Global_29) > 500)
	{
		UNK_0xE0C0351D5B931E37(bParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = UNK_0x1C0640BA9A7327B3();
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x755FF954DAE327E1(UNK_0x9C66D99E63E8E24C(bParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

void func_84(bool bParam0)
{
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x2668265160B1C0E5(bParam0))
		{
			if (UNK_0x08D499BC1F863857(bParam0))
			{
				UNK_0xF356D74F6AE75D16(bParam0, 0);
			}
		}
	}
}

void func_85(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_92(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_57())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_91(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_92(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_91(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_89(UNK_0xD803B885F5E47A62())) && !func_87(UNK_0xD803B885F5E47A62(), 0)) && !func_86()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_89(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_86()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_87(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_88(-1, 0) == 8;
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

int func_88(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

bool func_89(bool bParam0)
{
	if (func_87(bParam0, 0))
	{
		return true;
	}
	if (func_90())
	{
		if (bParam0 == UNK_0xD803B885F5E47A62())
		{
			return true;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_195, 2))
	{
		return true;
	}
	return false;
}

bool func_90()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_91(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (UNK_0xFA2492ED90D43443() != bParam0 && bParam2)
		{
			UNK_0xF3B6BD1C0DC44D29(bParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_92(int iParam0)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7356, 13);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7356, 13);
	}
}

void func_93()
{
	Global_19671 = 0;
	func_62();
}

bool func_94()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

bool func_95()
{
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (func_94())
		{
			return true;
		}
	}
	return false;
}

bool func_96(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (UNK_0xC8BC75555A67090D())
	{
		return false;
	}
	if (bParam0)
	{
		if (UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			return false;
		}
	}
	bVar0 = false;
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
		{
			return false;
		}
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (bParam0)
		{
			if (UNK_0x437347B10A200C4B(bVar0, 0))
			{
				return false;
			}
		}
		if (bParam2)
		{
			if (!UNK_0x437347B10A200C4B(bVar0, 0))
			{
				if (UNK_0xA30B8362589C124A(bVar0, -1, 0) != UNK_0x16F2683693E537C9())
				{
					return false;
				}
			}
		}
		if (!UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0x30C0A7C378403357(bVar0) < 0.95f || UNK_0x30C0A7C378403357(bVar0) > 1.011f)
			{
				return false;
			}
		}
	}
	else if (bParam1)
	{
		return false;
	}
	if (!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (!UNK_0xD79EDC28CA84B527(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_97(int iParam0)
{
	return func_98(func_99(iParam0));
}

bool func_98(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

bool func_99(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

bool func_100()
{
	switch (iLocal_116)
	{
		case 1:
			if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -190.8152f, -801.3224f, 25.45401f, -214.8212f, -866.6472f, 35.0318f, 40f, 0, true, 0))
			{
				return true;
			}
			break;
		case 2:
			if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 270.5801f, -1290.954f, 24.16572f, 270.499f, -1238.311f, 34.52738f, 58.25f, 0, true, 0))
			{
				return true;
			}
			break;
		case 3:
			if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -3038.987f, 606.4774f, 2.589385f, -3057.039f, 599.7103f, 12.70948f, 19.25f, 0, true, 0))
			{
				return true;
			}
			break;
		case 4:
			if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 170.8581f, 6619.894f, 30.31941f, 183.9522f, 6632.882f, 34.06088f, 22.25f, 0, true, 0))
			{
				return true;
			}
			break;
		case 6:
			if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -9.663248f, -938.2167f, 24.29024f, 48.12534f, -959.4428f, 34.60982f, 7.5f, 0, true, 0))
			{
				return true;
			}
			break;
		case 8:
			if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 283.0487f, -923.3091f, 24.13956f, 301.367f, -871.6924f, 34.4707f, 6.75f, 0, true, 0))
			{
				return true;
			}
			break;
		case 11:
			if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1053.799f, -772.7601f, 53.31232f, 1112.018f, -772.2864f, 60.16156f, 14.75f, 0, true, 0))
			{
				return true;
			}
			break;
		case 16:
			if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -2097.21f, -292.7766f, 8.141721f, -2101.908f, -345.41f, 18.23235f, 54.25f, 0, true, 0))
			{
				return true;
			}
			break;
		case 17:
			if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -799.6841f, -1117.781f, 5.659806f, -820.5555f, -1080.585f, 16.38764f, 29.5f, 0, true, 0))
			{
				return true;
			}
			break;
		case 18:
			if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -731.1746f, -820.053f, 18.06713f, -670.6583f, -821.2724f, 29.66125f, 8f, 0, true, 0))
			{
				return true;
			}
			break;
		case 19:
			if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -379.9555f, 6033.261f, 29.74875f, -394.2914f, 6047.678f, 33.9986f, 7f, 0, true, 0) && !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -393.6422f, 6056.547f, 29.75011f, -402.4834f, 6047.817f, 33.99312f, 17.5f, 0, true, 0))
			{
				return true;
			}
			break;
		case 22:
			if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -294.338f, -833.5905f, 26.65178f, -330.661f, -827.2508f, 38.64983f, 16.5f, 0, true, 0) && !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -294.1309f, -836.8602f, 26.72095f, -284.6938f, -814.233f, 37.38612f, 11f, 0, true, 0))
			{
				return true;
			}
			break;
		case 23:
			if ((!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -253.9362f, -689.096f, 28.56934f, -278.4698f, -682.0773f, 38.52502f, 9.5f, 0, true, 0) && !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -253.3138f, -687.6628f, 28.5611f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, true, 0)) && !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -255.6709f, -726.2742f, 28.5187f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, true, 0))
			{
				return true;
			}
			break;
		case 25:
			if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 114.2641f, -9.324284f, 62.78819f, 75.47891f, 4.897117f, 73.96004f, 7f, 0, true, 0))
			{
				return true;
			}
			break;
		case 30:
			if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -544.5211f, -1200.006f, 12.87966f, -509.3911f, -1216.772f, 23.72543f, 41f, 0, true, 0))
			{
				return true;
			}
			break;
		case 31:
			if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -2945.132f, 491.4792f, 13.2899f, -2971.825f, 492.9101f, 18.0671f, 10f, 0, true, 0))
			{
				return true;
			}
			break;
		default:
			break;
	}
	if (UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) != 0)
	{
		return true;
	}
	return false;
}

void func_101()
{
	var uVar0;

	if (!bLocal_147)
	{
		if (bLocal_338)
		{
			func_109();
		}
		else
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_99))
			{
				if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bLocal_99) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bLocal_99))
				{
					if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_99, 25f, 25f, 25f, 0, 1, 0))
					{
						bLocal_338 = true;
					}
				}
			}
			else
			{
				bLocal_338 = true;
			}
			func_119(iLocal_103, &uLocal_114);
		}
		if (!bLocal_339)
		{
			if (bLocal_142)
			{
				if (UNK_0xEB751B41BC4080D4(iLocal_141))
				{
					func_52(joaat("RC_WALLETS_RECOVERED"), 1);
					UNK_0x6FB46C25CCB7E6D5(joaat("RC_WALLETS_RECOVERED"), &uVar0, -1);
					UNK_0x5E858A00EAFA5B24(0, 200, 250);
					func_102(2);
					bLocal_147 = true;
				}
				else if (UNK_0xE4EDC4B0E92C078B(iLocal_104))
				{
					if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0xE925E52ACABA4CE7(iLocal_141)) > 150f)
					{
						if (UNK_0xEB6A8945D1AC98A1(bLocal_100))
						{
							func_278();
						}
						else if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_100, true)) > 100f)
						{
							func_278();
						}
					}
				}
			}
		}
	}
}

void func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_103(func_99(iParam0), -1);
					Global_111638.f_24990.f_2++;
					UNK_0x5D96D8530B3D0904(&Global_111634, false);
				}
			}
			break;
		case 1:
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111634, true))
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_103(func_99(iParam0), -1);
					Global_111638.f_24990.f_3++;
					UNK_0x5D96D8530B3D0904(&Global_111634, true);
				}
			}
			break;
		case 2:
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111634, 2))
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_103(func_99(iParam0), -1);
					Global_111638.f_24990.f_4++;
					UNK_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_103(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_104(var uParam0)
{
	*uParam0 = -99;
}

int func_105(bool bParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_106(bParam0, bParam1, 145);
}

int func_106(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_107(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_107(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_108(UNK_0x8CD06866876216F2(), 1f, 1f));
		if (!bParam2)
		{
			UNK_0x321E019A46034F39(iVar0, bParam1);
		}
		else
		{
			UNK_0x61755AC17D8F538E(iVar0, 2);
		}
	}
	else if (UNK_0xEC560E589DF8370E(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_108(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_108(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_108(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_109()
{
	int iVar0;
	bool bVar1;

	iVar0 = joaat("PICKUP_MONEY_PURSE");
	if (!bLocal_142)
	{
		UNK_0x5D96D8530B3D0904(&bVar1, 3);
		UNK_0x5D96D8530B3D0904(&bVar1, 4);
		UNK_0x5D96D8530B3D0904(&bVar1, true);
		iLocal_141 = UNK_0xA6FF0828D17CF374(iVar0, UNK_0xC6151A4F2BB0AC79(bLocal_99, 1067030938 /* Float: 1.2f */, 1069547520 /* Float: 1.5f */), bVar1, bLocal_345, 1, bLocal_153);
		bLocal_142 = true;
		iLocal_104 = func_110(iLocal_141);
		func_122(&Local_159, cLocal_335, sLocal_331, 4, 0, 0, 0);
		if (UNK_0xE4EDC4B0E92C078B(iLocal_103))
		{
			UNK_0x142CC44DB769B57E(&iLocal_103);
		}
		if (func_112(bLocal_100))
		{
			UNK_0xA3BF0AA5A2608191(bLocal_100);
		}
	}
	else
	{
		if (!bLocal_143)
		{
			if (!func_182(bLocal_100, 242628503) && !UNK_0xEB6A8945D1AC98A1(bLocal_100))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_105);
				if (!UNK_0x5A91F08DF773C39D(bLocal_100, vLocal_354, 0.5f, 0.5f, 0.5f, false, true, 0))
				{
					UNK_0x80AA372E04ED318D(false, vLocal_354, 1f, 20000, 1193033728, 1056964608 /* Float: 0.5f */);
				}
				UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_368, bLocal_369, 1090519040, -2f, -1, 0, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_368, bLocal_371, 1090519040, -2f, -1, 0, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_368, bLocal_370, 1090519040, -2f, -1, 1, false, 0, 0, 0);
				UNK_0x75ABDC5F81978924(iLocal_105);
				UNK_0x78ADC381772E3D54(bLocal_100, iLocal_105);
				UNK_0xF82EA857DA10E0CD(&iLocal_105);
			}
		}
		if (bLocal_143)
		{
			if (!bLocal_147)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_100))
				{
					if (UNK_0xB4ECF989E2C1DAC8(bLocal_100, bLocal_145, "pickup_low", 3))
					{
						if (UNK_0x8CA9406E01C7EE58(bLocal_100, bLocal_145, "pickup_low") > 0.35f)
						{
							if (UNK_0x762119754C50557A(iLocal_141))
							{
								func_122(&Local_159, cLocal_335, cLocal_332, 4, 0, 0, 0);
								UNK_0x40B7230FD4C59AA2(iLocal_141);
								UNK_0x6D80F1AEBA734886(bLocal_100, bLocal_345);
								UNK_0x11AD11297DC58CC7(bLocal_100, false);
								UNK_0x6DAD7906B73F064D(&bLocal_100);
								func_296(1);
							}
						}
					}
					else if (UNK_0xD1960163A3042274(bLocal_100, 242628503) == 7)
					{
						UNK_0xA3BF0AA5A2608191(bLocal_100);
						UNK_0xDD353D0E9C789D0E(&iLocal_105);
						UNK_0xC6EB89C59F2AF6B8(false, bLocal_145, "pickup_low", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
						UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 3000, 2048, 2);
						UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 3000);
						UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
						UNK_0x75ABDC5F81978924(iLocal_105);
						UNK_0x78ADC381772E3D54(bLocal_100, iLocal_105);
						UNK_0xF82EA857DA10E0CD(&iLocal_105);
						UNK_0xFADC0A217229F6B5(bLocal_100, true);
					}
				}
			}
		}
		else if (!UNK_0xEB6A8945D1AC98A1(bLocal_100))
		{
			if (UNK_0x762119754C50557A(iLocal_141))
			{
				if (UNK_0x5A91F08DF773C39D(bLocal_100, UNK_0xE925E52ACABA4CE7(iLocal_141), 10f, 10f, 7f, false, true, 0))
				{
					UNK_0xA3BF0AA5A2608191(bLocal_100);
					UNK_0xDD353D0E9C789D0E(&iLocal_105);
					UNK_0x96167B03C5A77156(false, UNK_0xE925E52ACABA4CE7(iLocal_141), 1f, 20000, 1f, 512, 1193033728);
					UNK_0x796BDF31572BB055(false, UNK_0xE925E52ACABA4CE7(iLocal_141), 0);
					UNK_0xC6EB89C59F2AF6B8(false, bLocal_145, "pickup_low", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 3000, 2048, 2);
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 3000);
					UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
					UNK_0x75ABDC5F81978924(iLocal_105);
					UNK_0x78ADC381772E3D54(bLocal_100, iLocal_105);
					UNK_0xF82EA857DA10E0CD(&iLocal_105);
					UNK_0xFADC0A217229F6B5(bLocal_100, true);
					bLocal_143 = true;
				}
			}
		}
	}
}

int func_110(int iParam0)
{
	return func_111(iParam0);
}

int func_111(int iParam0)
{
	int iVar0;

	if (!UNK_0x762119754C50557A(iParam0))
	{
		return 0;
	}
	iVar0 = UNK_0xA0556E31F2661AF4(iParam0);
	UNK_0x516E63E474722206(iVar0, func_108(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	return iVar0;
}

bool func_112(bool bParam0)
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

void func_113()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	switch (iLocal_109)
	{
		case 1:
		case 2:
			if (UNK_0xB87D13D0C064E9D1(bLocal_99, UNK_0x16F2683693E537C9(), 1))
			{
				UNK_0xE910A68AA670B4AA(bLocal_99);
				bVar0 = true;
			}
			if (UNK_0xDF1306B443CD3D15(bLocal_117, 0) && UNK_0xC42A92762C58E1B9(bLocal_99, bLocal_117, 0))
			{
				if (UNK_0x4DA54CAC0D81A673(bLocal_117))
				{
					if (UNK_0x5B17F10380E80E5B(bLocal_117))
					{
						bVar0 = true;
					}
				}
			}
			else if (!UNK_0xDF1306B443CD3D15(bLocal_117, 0) || !func_182(bLocal_99, -1273030092))
			{
				bVar0 = true;
			}
			if (!UNK_0xE9FDA1035CFEA94F(bLocal_99))
			{
				if (UNK_0xD1960163A3042274(bLocal_99, -1273030092) == 7)
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				if (!bLocal_138)
				{
					if (UNK_0xC42A92762C58E1B9(bLocal_99, bLocal_117, 0))
					{
						if (UNK_0xD1960163A3042274(bLocal_99, 242628503) != 1 && UNK_0xD1960163A3042274(bLocal_99, 242628503) != 0)
						{
							UNK_0xDD353D0E9C789D0E(&iLocal_106);
							UNK_0x75CDA8644CD3B5F5(false, 0, 0);
							UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
							UNK_0x75ABDC5F81978924(iLocal_106);
							UNK_0x78ADC381772E3D54(bLocal_99, iLocal_106);
							UNK_0xF82EA857DA10E0CD(&iLocal_106);
						}
					}
					else if (UNK_0xD1960163A3042274(bLocal_99, 242628503) != 1 && UNK_0xD1960163A3042274(bLocal_99, 242628503) != 0)
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_106);
						UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_106);
						UNK_0x78ADC381772E3D54(bLocal_99, iLocal_106);
						UNK_0xF82EA857DA10E0CD(&iLocal_106);
					}
					iVar1 = UNK_0x1C97A5F82B15E49A(bLocal_99);
					if (iVar1 == 2)
					{
						UNK_0xA3BF0AA5A2608191(bLocal_99);
						if (func_112(UNK_0x16F2683693E537C9()))
						{
							UNK_0x6C3AE6E278DB3D0E(bLocal_99, UNK_0x16F2683693E537C9(), 0, 16);
						}
						bLocal_138 = true;
					}
				}
			}
			break;
	}
}

bool func_114()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_99))
	{
		if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_99, 180f, 180f, 50f, 0, 1, 0) || !UNK_0x03068588A1FCED1A(bLocal_99))
		{
			func_115(iLocal_103, bLocal_99, 180f, 1061158912 /* Float: 0.75f */, 0);
			return true;
		}
		else
		{
			if (Local_159[2 /*10*/].f_7)
			{
				func_185(&Local_159, 2);
			}
			UNK_0xEBA53F35D0085654(&bLocal_99);
			if (UNK_0xDF1306B443CD3D15(bLocal_117, 0))
			{
				if (UNK_0x03068588A1FCED1A(bLocal_117))
				{
					UNK_0xA954465BA6FDEFE2(&bLocal_117);
				}
			}
		}
	}
	else if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(bLocal_99, false)) < 300f)
	{
		return true;
	}
	return false;
}

void func_115(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;

	fVar2 = (fParam2 * fParam3);
	if (UNK_0xE4EDC4B0E92C078B(iParam0))
	{
		if ((UNK_0xC844350D5D58C99A(bParam1) && UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9())) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0xE2F1E99DD161A861(bParam1))
			{
				if (UNK_0xDF1306B443CD3D15(UNK_0x96A5FE5834B81CE7(bParam1), 0))
				{
					fVar1 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bParam1, true), 1);
					if (fVar1 >= fVar2 || bParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						UNK_0xF412DD40DE84CE72(iParam0, 1);
						UNK_0x7F010F50CE03A8AF(iParam0, (255 - iVar0));
					}
					else
					{
						UNK_0xF412DD40DE84CE72(iParam0, 0);
						UNK_0x7F010F50CE03A8AF(iParam0, 255);
					}
				}
			}
			else if (UNK_0xEC560E589DF8370E(bParam1))
			{
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x940C1429253D3B1B(bParam1)))
				{
					fVar1 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bParam1, true), 1);
					if (fVar1 >= fVar2 || bParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						UNK_0xF412DD40DE84CE72(iParam0, 1);
						UNK_0x7F010F50CE03A8AF(iParam0, (255 - iVar0));
					}
					else
					{
						UNK_0xF412DD40DE84CE72(iParam0, 0);
						UNK_0x7F010F50CE03A8AF(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_116(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_117(iParam2), 1);
}

int func_117(int iParam0)
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

float func_118(bool bParam0, bool bParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
	}
	else
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, false) };
	}
	return UNK_0x0EB28750412C3A5A(vVar0, vVar3, iParam2);
}

void func_119(int iParam0, var uParam1)
{
	if (UNK_0xE4EDC4B0E92C078B(iParam0))
	{
		if (UNK_0x1C0640BA9A7327B3() > *uParam1 + 500)
		{
			if (UNK_0x8FBD6436A27198B4(iParam0) == 1)
			{
				UNK_0x321E019A46034F39(iParam0, true);
			}
			else
			{
				UNK_0x321E019A46034F39(iParam0, false);
				UNK_0x61755AC17D8F538E(iParam0, true);
			}
			*uParam1 = UNK_0x1C0640BA9A7327B3();
		}
		if (!UNK_0xFEBC1E4EC9E001F0() && func_120(0))
		{
			func_102(1);
		}
	}
}

bool func_120(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_111634, bParam0);
}

void func_121()
{
	switch (iLocal_109)
	{
		case 1:
		case 2:
			if (UNK_0xDF1306B443CD3D15(bLocal_117, 0))
			{
				if (bLocal_338)
				{
					if (UNK_0x82CCEAB29E9451DD(bLocal_99, bLocal_117) || UNK_0xD1960163A3042274(bLocal_99, -1273030092) == 1)
					{
						UNK_0x132B85BCE016BCA0(bLocal_99, bLocal_117, vLocal_95, 8, 35f, 786469, 10f, 10f, 1);
					}
					else
					{
						UNK_0xF3268524E9BE6D6E(bLocal_99, UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
					}
				}
				else
				{
					if (!UNK_0x4DA54CAC0D81A673(bLocal_117))
					{
						UNK_0xC869A329D6194F52(bLocal_117, 0.1f, 1000, 0, 0, 0, -1);
					}
					UNK_0x132B85BCE016BCA0(bLocal_99, bLocal_117, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), 8, 35f, 786469, 10f, 10f, 1);
				}
			}
			else
			{
				UNK_0xF3268524E9BE6D6E(bLocal_99, UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
			}
			break;
		case 4:
			if (!bLocal_338)
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_105);
				UNK_0x96167B03C5A77156(false, 182.61f, 6637.91f, 30.54f, 3f, 20000, 0.25f, 1, 1193033728);
				UNK_0x96167B03C5A77156(false, 240.53f, 6694.1f, 28.62f, 3f, 20000, 0.25f, 1, 1193033728);
				UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
				UNK_0x75ABDC5F81978924(iLocal_105);
				UNK_0x78ADC381772E3D54(bLocal_99, iLocal_105);
				UNK_0xF82EA857DA10E0CD(&iLocal_105);
			}
			else
			{
				UNK_0xF3268524E9BE6D6E(bLocal_99, UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
			}
			break;
		default:
			if (UNK_0x0EB28750412C3A5A(vLocal_95, -3044.11f, 594.34f, 6.73f, 1) < 5f)
			{
				UNK_0xEEB67C3D0A71A47B(bLocal_99, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
				UNK_0xF82EA857DA10E0CD(&iLocal_105);
			}
			else if (bLocal_338)
			{
				UNK_0xF3268524E9BE6D6E(bLocal_99, UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
			}
			else
			{
				UNK_0xEEB67C3D0A71A47B(bLocal_99, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
			}
			break;
	}
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_99))
	{
		UNK_0xFADC0A217229F6B5(bLocal_99, true);
	}
}

bool func_122(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_64(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_123(sParam2, iParam3, 0);
}

int func_123(char* sParam0, int iParam1, bool bParam2)
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
					func_62();
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
		if (func_61(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_60();
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
				func_59();
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
				if (func_58())
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
			if (func_57())
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
			func_56();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_55();
		func_124();
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
		func_62();
	}
	return 0;
}

void func_124()
{
	if (!func_125())
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

bool func_125()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_128())
	{
		return false;
	}
	if (func_126(UNK_0xD803B885F5E47A62()))
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

bool func_126(int iParam0)
{
	return func_127(iParam0, 20);
}

bool func_127(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_128()
{
	return -1;
}

bool func_129()
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;

	vVar1 = { 6f, 6f, 6f };
	vVar4 = { -6f, -6f, -6f };
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_100))
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bLocal_100))
			{
				iLocal_111++;
				if (iLocal_111 > 60)
				{
					bVar0 = true;
				}
			}
			else
			{
				iLocal_111 = 0;
			}
		}
		if (UNK_0xD3DCEC81D13AAFB1(UNK_0x64430C979F516F7A(bLocal_100, 31086, 0f, 0f, 0f), 2f, true))
		{
			bVar0 = true;
		}
		vVar1 = { vVar1 + UNK_0x64430C979F516F7A(bLocal_100, 31086, 0f, 0f, 0f) };
		vVar4 = { vVar4 + UNK_0x64430C979F516F7A(bLocal_100, 31086, 0f, 0f, 0f) };
		if ((UNK_0xBBE430A566D01EF3(vVar4, vVar1, joaat("WEAPON_SMOKEGRENADE"), 1) || UNK_0xBBE430A566D01EF3(vVar4, vVar1, joaat("WEAPON_GRENADE"), 1)) || UNK_0xBBE430A566D01EF3(vVar4, vVar1, joaat("WEAPON_STICKYBOMB"), 1))
		{
			bVar0 = true;
		}
		if (UNK_0x8ADFEA7B4409B2F8(UNK_0x64430C979F516F7A(bLocal_100, 31086, 0f, 0f, 0f), 12f))
		{
			bVar0 = true;
		}
		if (UNK_0x681F21BF9F7B449B(-1, UNK_0x64430C979F516F7A(bLocal_100, 31086, 0f, 0f, 0f), 50f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!func_131())
		{
		}
		else
		{
			bVar0 = false;
			if (UNK_0xD1960163A3042274(bLocal_100, 474215631) != 1)
			{
				if (func_130(bLocal_100))
				{
					UNK_0x8BE3D040D15AEA1D(bLocal_100, 2000);
				}
			}
		}
	}
	return bVar0;
}

bool func_130(bool bParam0)
{
	if (func_112(bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_131()
{
	if (func_112(bLocal_99))
	{
		if (func_118(bLocal_100, bLocal_99, 1) < 22f)
		{
			return true;
		}
	}
	return false;
}

bool func_132()
{
	bool bVar0;

	bVar0 = false;
	if (UNK_0xC844350D5D58C99A(bLocal_100))
	{
		if (UNK_0xEB6A8945D1AC98A1(bLocal_100))
		{
			bVar0 = true;
		}
		else
		{
			if (UNK_0xB87D13D0C064E9D1(bLocal_100, UNK_0x16F2683693E537C9(), 1) && UNK_0x869EFD0BC0868856(bLocal_100))
			{
				bVar0 = true;
				UNK_0xE910A68AA670B4AA(bLocal_100);
			}
			if (UNK_0xD3DCEC81D13AAFB1(UNK_0x68F4C0EC296D3901(bLocal_100, true), 1f, true))
			{
				bVar0 = true;
			}
			if (func_133(bLocal_100, 0, 1116471296 /* Float: 70f */, 1126825984 /* Float: 170f */, 0, 1, 0, 0))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		if (func_131())
		{
			bVar0 = false;
			if (UNK_0xD1960163A3042274(bLocal_100, 474215631) != 1)
			{
				if (func_130(bLocal_100))
				{
					UNK_0x8BE3D040D15AEA1D(bLocal_100, 2000);
				}
			}
		}
		else if (!UNK_0xEB6A8945D1AC98A1(bLocal_99))
		{
			if (UNK_0xD1960163A3042274(bLocal_99, 1805844857) == 7)
			{
				UNK_0xAFF39FB306F8E232(bLocal_99, 17, true);
				UNK_0xAFF39FB306F8E232(bLocal_99, 13, false);
				UNK_0xF3268524E9BE6D6E(bLocal_99, UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
			}
		}
	}
	return bVar0;
}

bool func_133(bool bParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	vector3 vVar0;

	if (func_112(UNK_0x16F2683693E537C9()) && func_112(bParam0))
	{
		if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
		{
			return true;
		}
		if (func_147(bParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return true;
		}
		if (!UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
		{
			if (UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()))
			{
				vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) - UNK_0x68F4C0EC296D3901(bParam0, true) };
				if ((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)) <= 5f)
				{
					return func_146(UNK_0x16F2683693E537C9(), bParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return false;
		}
		else if (func_134(bParam0, fParam3))
		{
			return true;
		}
	}
	return false;
}

bool func_134(bool bParam0, float fParam1)
{
	bool bVar0;

	if (func_112(UNK_0x16F2683693E537C9()) && func_112(bParam0))
	{
		if (func_145(bParam0) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0))
		{
			if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
			{
				bVar0 = 40f;
			}
			else
			{
				bVar0 = 3f;
			}
			if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam0, bVar0, bVar0, bVar0, 0, 1, 0))
			{
				if (func_135(bParam0, fParam1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_135(bool bParam0, float fParam1)
{
	return func_136(bParam0, UNK_0x16F2683693E537C9(), fParam1, 1, 250, 7);
}

bool func_136(bool bParam0, bool bParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;

	iVar4 = func_144(bParam0, bParam1);
	if (!func_112(bParam0) || !func_112(bParam1))
	{
		if (iVar4 != -1)
		{
			func_143(&(Local_49[iVar4 /*4*/]));
		}
		return false;
	}
	if (!func_140(bParam0, bParam1, fParam2, iParam3))
	{
		return false;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_139();
		if (iVar4 == -1)
		{
			return false;
		}
		Local_49[iVar4 /*4*/].f_1 = bParam0;
		Local_49[iVar4 /*4*/].f_2 = bParam1;
	}
	vVar1 = { UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f) };
	bVar0 = func_137(&(Local_49[iVar4 /*4*/]), vVar1, bParam1, &(Local_49[iVar4 /*4*/].f_3), bParam0, iParam5);
	return (bVar0 || (UNK_0x1C0640BA9A7327B3() - Local_49[iVar4 /*4*/].f_3) < iParam4);
}

int func_137(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	var uVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar7;
	int iVar8;

	bVar7 = false;
	if (!func_112(bParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_138(bParam4, iParam7) };
		*uParam0 = UNK_0xCD02F8660C47B801(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, bParam6, 7);
		return 0;
	}
	iVar8 = UNK_0x1EC301670B54C6DE(*uParam0, &uVar0, &vVar1, &uVar4, &bVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (UNK_0xEC560E589DF8370E(bVar7))
	{
		func_112(bVar7);
		if (UNK_0x940C1429253D3B1B(bVar7) == bParam4)
		{
			if (bLocal_90)
			{
				UNK_0xBA5BBB3ADDA49094(vParam1, UNK_0x68F4C0EC296D3901(bParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*iParam5 = UNK_0x1C0640BA9A7327B3();
			return 1;
		}
		return 0;
	}
	if (UNK_0xE2F1E99DD161A861(bVar7))
	{
		func_112(bVar7);
		if (UNK_0x405E212DDE472467(bParam4, 0))
		{
			if (UNK_0x96A5FE5834B81CE7(bVar7) == UNK_0x6937EA2286828455(bParam4, 0))
			{
				if (bLocal_90)
				{
					UNK_0xBA5BBB3ADDA49094(vParam1, UNK_0x68F4C0EC296D3901(bParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*iParam5 = UNK_0x1C0640BA9A7327B3();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_138(bool bParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 7)
	{
		iVar0 = UNK_0x09AC81E49EA267F7(false, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return UNK_0x68F4C0EC296D3901(bParam0, true);
	}
	else if (iParam1 == 1)
	{
		return UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return UNK_0x64430C979F516F7A(bParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return UNK_0x64430C979F516F7A(bParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return UNK_0x64430C979F516F7A(bParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return UNK_0x64430C979F516F7A(bParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return UNK_0x64430C979F516F7A(bParam0, 36864, 0f, 0f, 0f);
	}
	return UNK_0x68F4C0EC296D3901(bParam0, true);
}

int func_139()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_49)
	{
		if ((Local_49[iVar0 /*4*/] == 0 && Local_49[iVar0 /*4*/].f_1 == 0) && Local_49[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_140(bool bParam0, bool bParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = { func_142(UNK_0x68F4C0EC296D3901(bParam1, true) - UNK_0x68F4C0EC296D3901(bParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return true;
	}
	if (iParam3 == 0)
	{
		vVar3 = { UNK_0x08D89CE2E20AE305(bParam0) };
	}
	else
	{
		vVar3 = { func_142(UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 5f, 0f) - UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_141(vVar3, vVar0);
	if (fVar6 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return false;
	}
	return true;
}

float func_141(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_142(vector3 vParam0)
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

void func_143(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_144(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_49)
	{
		if (Local_49[iVar0 /*4*/].f_1 == bParam0 && Local_49[iVar0 /*4*/].f_2 == bParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_145(bool bParam0)
{
	if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0) && UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
	{
		return true;
	}
	return false;
}

bool func_146(bool bParam0, bool bParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { UNK_0x08D89CE2E20AE305(bParam0) };
	vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, true) - UNK_0x68F4C0EC296D3901(bParam0, true) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / SYSTEM::VDIST(vVar3, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

bool func_147(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	fVar0 = 8f;
	bVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		bVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_112(UNK_0x16F2683693E537C9()) && func_112(bParam0))
	{
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar2, 1);
		if (iVar2 == joaat("WEAPON_PETROLCAN"))
		{
			fVar0 = 3f;
			bVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_151(bParam0, bParam1, fVar0, bVar1))
			{
				return true;
			}
			if (func_148(bParam0, bVar1, bParam3, bParam4))
			{
				return true;
			}
		}
		else
		{
			if (UNK_0x52AE17073D025311(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xD3DCEC81D13AAFB1(UNK_0x68F4C0EC296D3901(bParam0, true), fVar0, true))
					{
						return true;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					bVar1 = 1.86f;
				}
				if (func_151(bParam0, bParam1, fVar0, bVar1))
				{
					return true;
				}
			}
			if (func_148(bParam0, bVar1, bParam3, bParam4))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_148(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	vVar3 = { vVar0 };
	vVar0.x = (vVar0.x - bParam1);
	vVar0.f_1 = (vVar0.y - bParam1);
	vVar0.f_2 = (vVar0.z - bParam1);
	vVar3.x = (vVar3.x + bParam1);
	vVar3.f_1 = (vVar3.y + bParam1);
	vVar3.f_2 = (vVar3.z + bParam1);
	if (bParam2)
	{
		if (((UNK_0x0A4F3CD1EDAEF9D0(UNK_0x68F4C0EC296D3901(bParam0, true), joaat("WEAPON_GRENADE"), bParam1, 1) || UNK_0x0A4F3CD1EDAEF9D0(UNK_0x68F4C0EC296D3901(bParam0, true), joaat("WEAPON_MOLOTOV"), bParam1, 1)) || UNK_0x0A4F3CD1EDAEF9D0(UNK_0x68F4C0EC296D3901(bParam0, true), joaat("WEAPON_SMOKEGRENADE"), bParam1, 1)) || UNK_0x0A4F3CD1EDAEF9D0(UNK_0x68F4C0EC296D3901(bParam0, true), joaat("WEAPON_STICKYBOMB"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_149(bParam0, bParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_149(bParam0, bParam1))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		if (UNK_0x723EE7F83DF1497D(vVar0, vVar3, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_149(bool bParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;

	if ((((UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_GRENADE"), bParam1, &vVar1, &uVar0, 0) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_SMOKEGRENADE"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_BZGAS"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_STICKYBOMB"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_MOLOTOV"), bParam1, &vVar1, &uVar0, 0))
	{
		if (func_150(bParam0, vVar1, 90f, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_150(bool bParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = { func_142(vParam1 - UNK_0x68F4C0EC296D3901(bParam0, true)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return true;
	}
	if (iParam5 == 0)
	{
		vVar3 = { UNK_0x08D89CE2E20AE305(bParam0) };
	}
	else
	{
		vVar3 = { func_142(UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 5f, 0f) - UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_141(vVar3, vVar0);
	if (fVar6 <= SYSTEM::COS((fParam4 / 2f)))
	{
		return false;
	}
	return true;
}

bool func_151(bool bParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (bParam1)
	{
		if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam0, bParam3, bParam3, bParam3, 0, 1, 0))
			{
				return true;
			}
		}
	}
	if (UNK_0xD3DCEC81D13AAFB1(UNK_0x68F4C0EC296D3901(bParam0, true), fParam2, true))
	{
		return true;
	}
	return false;
}

void func_152()
{
	if (bLocal_142 || UNK_0x437347B10A200C4B(bLocal_99, 0))
	{
		func_180(&uLocal_372, 0, 0);
	}
	else
	{
		func_153(&uLocal_372, bLocal_99, "ATM_CHASEHINT", 0, 1, 1, 1);
	}
}

void func_153(var uParam0, bool bParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_154(uParam0, bParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_154(var uParam0, bool bParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_155(uParam0, bParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_155(var uParam0, bool bParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
	{
		func_180(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_156(uParam0, bParam1, vParam2, sParam5, iParam6, bParam7, iParam8, bParam9);
}

void func_156(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	bool bVar0;
	bool bVar1;

	if (uParam0->f_1 && UNK_0x8C74DE122769E1BF())
	{
		if (UNK_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	bVar0 = bParam5;
	if (UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (!UNK_0x8CD06866876216F2())
		{
			bVar0 = "CMN_HINT";
		}
		else
		{
			bVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_98(bVar0))
	{
		func_179();
	}
	if (func_178(bParam1) && UNK_0x4FC40AB0ECCE6E18(bParam1))
	{
		bVar1 = false;
		if (UNK_0xEC560E589DF8370E(bParam1))
		{
			UNK_0x4862370C9F046219(UNK_0x940C1429253D3B1B(bParam1));
			UNK_0xB9099320B5179E0A(UNK_0x940C1429253D3B1B(bParam1), 1);
			if (UNK_0x71313E3D03CEEB37(UNK_0x940C1429253D3B1B(bParam1)))
			{
				bVar1 = true;
			}
		}
		else if (UNK_0xE2F1E99DD161A861(bParam1))
		{
			UNK_0x00D1596840E78F77(UNK_0x96A5FE5834B81CE7(bParam1));
			if (UNK_0xC03F94FBD72F6D02(UNK_0x96A5FE5834B81CE7(bParam1)))
			{
				bVar1 = true;
			}
		}
		else if (UNK_0x6BC06B42AD71CD8B(bParam1))
		{
			UNK_0xFF7829816FC6D977(UNK_0x486F67509A82DB2D(bParam1));
			if (UNK_0x660643587812C91B(UNK_0x486F67509A82DB2D(bParam1)))
			{
				bVar1 = true;
			}
		}
		if (!UNK_0x8C74DE122769E1BF())
		{
			if (func_173(uParam0, bParam7, bParam9, 0))
			{
				func_170(uParam0, bParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_160(bVar0))
				{
					if ((UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0)) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if ((bVar1 && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
						{
							if (!func_98(bVar0))
							{
								func_103(bVar0, -1);
								uParam0->f_3 = bVar0;
								if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
								{
									func_159(1);
								}
							}
						}
					}
				}
			}
			else if (func_160(bVar0))
			{
				if (UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0))
				{
					if (((UNK_0x0A059E0DB9253280(bParam1) && bVar1) && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
					{
						if (!func_98(bVar0))
						{
							func_103(bVar0, -1);
							uParam0->f_3 = bVar0;
							if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
							{
								func_159(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!UNK_0x2EBF5002C6B6A06C(bParam5))
			{
				if (func_98(bParam5))
				{
					UNK_0xA37A90C62806D848(1);
				}
			}
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
			{
				if (UNK_0xC8676198F2355F9F(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(3) == 3 || UNK_0xA4FD7964FEE91ED8(3) == 4)
					{
						func_180(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(6) == 3 || UNK_0xA4FD7964FEE91ED8(6) == 4)
					{
						func_180(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(4) == 3 || UNK_0xA4FD7964FEE91ED8(4) == 4)
					{
						func_180(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(5) == 3 || UNK_0xA4FD7964FEE91ED8(5) == 4)
					{
						func_180(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(2) == 3 || UNK_0xA4FD7964FEE91ED8(2) == 4)
					{
						func_180(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0xF3545351E9CBB11F() == 3 || UNK_0xF3545351E9CBB11F() == 4)
				{
					func_180(uParam0, bVar0, 1);
				}
			}
			if (!func_173(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_158(uParam0))
				{
					func_157(uParam0);
				}
			}
		}
	}
	else
	{
		func_180(uParam0, bVar0, 0);
	}
}

void func_157(var uParam0)
{
	if (func_178(UNK_0x16F2683693E537C9()))
	{
		UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
	}
	if (UNK_0x8C74DE122769E1BF())
	{
		UNK_0xF3039DE1FDB4F6FD(1);
		UNK_0x29D5132FBDCF2B1E(0);
		UNK_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		UNK_0x9A1335ECD7BD117F("FocusIn");
		if (uParam0->f_11)
		{
			UNK_0x82A772610883F395("FocusOut", 0, 0);
			UNK_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

bool func_158(var uParam0)
{
	int iVar0;

	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > UNK_0x1C0640BA9A7327B3()
		{
			return true;
		}
	}
	return false;
}

int func_159(bool bParam0)
{
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111638.f_10044.f_100++;
			}
			return Global_111638.f_10044.f_100;
		case 4:
			if (bParam0)
			{
				Global_111638.f_10044.f_101++;
			}
			return Global_111638.f_10044.f_101;
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111638.f_10044.f_102++;
			}
			return Global_111638.f_10044.f_102;
		default:
			break;
	}
	return 3;
}

bool func_160(bool bParam0)
{
	if (!func_161(1, 1, 0))
	{
		if ((!UNK_0xEA6BC48857E0AC4C(bParam0) && func_98(bParam0)) || func_98("CMN_HINT"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		return false;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_159(0) < 3)
			{
				return true;
			}
			break;
		case 4:
			if (func_159(0) < 1)
			{
				return true;
			}
			break;
		case 5:
		case 15:
			if (func_159(0) < 1)
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

bool func_161(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	if (bParam0)
	{
		if (!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	if (bParam2)
	{
		return true;
	}
	if (UNK_0x991B1F0980C62628())
	{
		return false;
	}
	if (func_79(0))
	{
		return false;
	}
	if (func_169())
	{
		return false;
	}
	if (UNK_0x4FD68D5821EE3E19())
	{
		return false;
	}
	if (Global_73825)
	{
		return false;
	}
	if (UNK_0x8A22C4C08282BF26(joaat("APPINTERNET")) > 0)
	{
		return false;
	}
	if (Global_58693)
	{
		return false;
	}
	if (bParam1)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
		{
			if (UNK_0xC8676198F2355F9F(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(3) == 3 || UNK_0xA4FD7964FEE91ED8(3) == 4)
				{
					return false;
				}
			}
			else if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(6) == 3 || UNK_0xA4FD7964FEE91ED8(6) == 4)
				{
					return false;
				}
			}
			else if (UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(4) == 3 || UNK_0xA4FD7964FEE91ED8(4) == 4)
				{
					return false;
				}
			}
			else if (UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(5) == 3 || UNK_0xA4FD7964FEE91ED8(5) == 4)
				{
					return false;
				}
			}
			else if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(2) == 3 || UNK_0xA4FD7964FEE91ED8(2) == 4)
				{
					return false;
				}
			}
			else if (UNK_0xF3545351E9CBB11F() == 3 || UNK_0xF3545351E9CBB11F() == 4)
			{
				return false;
			}
			if (UNK_0xC4E6FF7CA2A185EA())
			{
				return false;
			}
		}
	}
	if ((func_168() || func_167(Global_4456448.f_232883)) || func_166())
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			bVar1 = func_165(UNK_0x16F2683693E537C9(), 0);
			if (((UNK_0x137240CA2BADB0D2(bVar0, bVar1) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("APC") && bVar1 != -1)) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("AKULA") && bVar1 != -1)) || (((UNK_0x134B62B726CEC8E6(bVar0) == joaat("RIOT2") && bVar1 == 0) && func_164(bVar0, 10)) && UNK_0x0ECB5CA5140957AD(bVar0, 10) != -1))
			{
				return false;
			}
		}
	}
	if (Global_1686722)
	{
		return false;
	}
	if (func_162(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_162(bool bParam0)
{
	if (bParam0 != func_128())
	{
		if (func_163(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && bParam0 == UNK_0xD803B885F5E47A62()) && func_163(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

bool func_163(bool bParam0, bool bParam1, bool bParam2)
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

bool func_164(bool bParam0, int iParam1)
{
	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (UNK_0x40B3F576B41FA183(bParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return true;
				default:
					if (UNK_0x461CAC843A21E4B6(bParam0, iParam1) > 0)
					{
						return true;
					}
					break;
			}
		}
	}
	return false;
}

bool func_165(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0x405E212DDE472467(bParam0, iParam1))
		{
			bVar0 = UNK_0x6937EA2286828455(bParam0, iParam1);
			if (UNK_0xC844350D5D58C99A(bVar0))
			{
				iVar1 = UNK_0x7087E053058E9F6C(UNK_0x134B62B726CEC8E6(bVar0));
				if (iVar1 == 1)
				{
					bVar3 = -1;
					return bVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					bVar3 = (iVar2 - 1);
					if (!UNK_0xBBA8A868118C90ED(bVar0, bVar3, 0))
					{
						if (UNK_0xA30B8362589C124A(bVar0, bVar3, 0) == bParam0)
						{
							return bVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return bVar3;
}

bool func_166()
{
	return Global_2450632.f_17;
}

bool func_167(int iParam0)
{
	return iParam0 == 51;
}

bool func_168()
{
	return Global_2450632.f_16;
}

bool func_169()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_170(var uParam0, bool bParam1, vector3 vParam2, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (Global_1319117 == 1)
	{
		return;
	}
	if (UNK_0x437347B10A200C4B(bParam1, 0))
	{
		func_180(uParam0, 0, 0);
	}
	if (func_65(vParam2, 0f, 0f, 0f, 0))
	{
		if (UNK_0xEC560E589DF8370E(bParam1))
		{
			bVar0 = UNK_0x940C1429253D3B1B(bParam1);
			if (!UNK_0x405E212DDE472467(bVar0, 0))
			{
				if (UNK_0x34BFC6F0CB887BC2(bVar0))
				{
					if (!func_171())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (UNK_0xCED082ADD3739B9F(bVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	UNK_0xF3039DE1FDB4F6FD(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (bParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	UNK_0xC0B0B9E466C0ED17(bParam1, vParam2, 1, -1, iVar1, iVar2, bParam5);
	iVar3 = 2048;
	iVar4 = 3;
	UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), bParam1, -1, iVar3, iVar4);
	UNK_0x82A772610883F395("FocusIn", 0, 0);
	UNK_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	UNK_0x4D7F4CC43D4D0DE3(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = UNK_0x1C0640BA9A7327B3();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_171()
{
	return func_172(UNK_0xD803B885F5E47A62());
}

int func_172(bool bParam0)
{
	if (UNK_0x134B62B726CEC8E6(UNK_0x9539D44F3E4492F6(bParam0)) == joaat("MP_F_FREEMODE_01"))
	{
		return 1;
	}
	return 0;
}

bool func_173(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (UNK_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
				{
					if (func_177(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_176(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_176(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_177(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_158(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		case 1:
			if ((UNK_0x1C0640BA9A7327B3() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
					{
						if (!func_177(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_176(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_176(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_177(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
				{
					if (!func_177(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_176(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_176(bParam1, bParam2, bParam3) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || UNK_0x8B8AFAD7ED240B7F(UNK_0x16F2683693E537C9(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_177(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		case 3:
			if ((UNK_0x1C0640BA9A7327B3() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
					{
						if (func_175(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_174(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || func_174(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || UNK_0x8B8AFAD7ED240B7F(UNK_0x16F2683693E537C9(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_175(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		case 4:
			if (!func_158(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_161(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_179();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_174(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_161(bParam0, bParam1, bParam2))
	{
		return false;
	}
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!UNK_0xBBFFD1937ED16008(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x38C3A68D7861DCFD(0, 140, 1);
			UNK_0x38C3A68D7861DCFD(0, 80, 1);
			if (UNK_0x9A01369A10646AFE(0, 80))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_175(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_161(bParam0, bParam1, bParam2))
	{
		return false;
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x38C3A68D7861DCFD(0, 80, 1);
		if (UNK_0x0F01D47446BE1FEB())
		{
			if (UNK_0x9A01369A10646AFE(0, 80))
			{
				UNK_0xF3039DE1FDB4F6FD(0);
				return true;
			}
		}
	}
	return false;
}

bool func_176(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_161(bParam0, bParam1, bParam2))
	{
		return false;
	}
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!UNK_0xBBFFD1937ED16008(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x38C3A68D7861DCFD(0, 140, 1);
			UNK_0x38C3A68D7861DCFD(0, 80, 1);
			if (UNK_0x7FEE810EE9E768EB(0, 80) && UNK_0x1C0640BA9A7327B3() > Global_116)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_177(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_161(bParam0, bParam1, bParam2))
	{
		return false;
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x38C3A68D7861DCFD(0, 80, 1);
		if (UNK_0x0F01D47446BE1FEB())
		{
			if (UNK_0x7FEE810EE9E768EB(0, 80) && UNK_0x1C0640BA9A7327B3() > Global_116)
			{
				UNK_0xF3039DE1FDB4F6FD(0);
				return true;
			}
		}
	}
	return false;
}

bool func_178(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xE2F1E99DD161A861(bParam0))
		{
			if (UNK_0xDF1306B443CD3D15(UNK_0x96A5FE5834B81CE7(bParam0), 0))
			{
				return true;
			}
		}
		else if (UNK_0xEC560E589DF8370E(bParam0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x940C1429253D3B1B(bParam0)))
			{
				return true;
			}
		}
		else if (UNK_0x6BC06B42AD71CD8B(bParam0))
		{
			return true;
		}
	}
	return false;
}

void func_179()
{
	UNK_0x5D96D8530B3D0904(&Global_7357, 4);
}

void func_180(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (UNK_0x8CD06866876216F2())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 26))
		{
			return;
		}
	}
	if (UNK_0x8C74DE122769E1BF())
	{
		UNK_0x29D5132FBDCF2B1E(iParam2);
		UNK_0x9A1335ECD7BD117F("FocusIn");
		UNK_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			UNK_0x82A772610883F395("FocusOut", 0, 0);
			UNK_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	UNK_0xF3039DE1FDB4F6FD(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	bVar0 = bParam1;
	if (UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (!UNK_0x8CD06866876216F2())
		{
			bVar0 = "CMN_HINT";
		}
		else
		{
			bVar0 = "FM_IHELP_HNT";
		}
	}
	if (!UNK_0x2EBF5002C6B6A06C(uParam0->f_3))
	{
		if (func_98(uParam0->f_3))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
	if (!UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (func_98(bVar0))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
}

float func_181(bool bParam0, vector3 vParam1, int iParam4)
{
	vector3 vVar0;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	return UNK_0x0EB28750412C3A5A(vVar0, vParam1, iParam4);
}

bool func_182(bool bParam0, int iParam1)
{
	if (func_130(bParam0))
	{
		if (UNK_0xD1960163A3042274(bParam0, iParam1) == 1 || UNK_0xD1960163A3042274(bParam0, iParam1) == 0)
		{
			return true;
		}
	}
	return false;
}

void func_183(bool bParam0)
{
	func_184(bParam0);
}

void func_184(bool bParam0)
{
	if (UNK_0x7F8A39872A07D2CE(bParam0, bParam0))
	{
	}
}

void func_185(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_186()
{
	UNK_0xDD353D0E9C789D0E(&iLocal_105);
	UNK_0xF96A174EE26D7588(false, bLocal_99, 750);
	UNK_0xC6EB89C59F2AF6B8(false, bLocal_368, bLocal_369, 8f, -8f, -1, 0, false, 0, 0, 0);
	UNK_0xC6EB89C59F2AF6B8(false, bLocal_368, bLocal_370, 8f, -2f, -1, 0, false, 0, 0, 0);
	UNK_0xC6EB89C59F2AF6B8(false, bLocal_368, bLocal_371, 8f, -2f, -1, 0, false, 0, 0, 0);
	UNK_0xC6EB89C59F2AF6B8(false, bLocal_368, bLocal_369, 8f, -2f, -1, 0, false, 0, 0, 0);
	UNK_0xC6EB89C59F2AF6B8(false, bLocal_368, bLocal_370, 8f, -2f, -1, 0, false, 0, 0, 0);
	UNK_0xC6EB89C59F2AF6B8(false, bLocal_368, bLocal_371, 8f, -2f, -1, 1, false, 0, 0, 0);
	UNK_0x75ABDC5F81978924(iLocal_105);
	UNK_0x78ADC381772E3D54(bLocal_100, iLocal_105);
	UNK_0xF82EA857DA10E0CD(&iLocal_105);
	if (UNK_0xE4EDC4B0E92C078B(iLocal_102))
	{
		UNK_0x142CC44DB769B57E(&iLocal_102);
	}
	if (!UNK_0xE4EDC4B0E92C078B(iLocal_103))
	{
		iLocal_103 = func_105(bLocal_99, 1, 0);
	}
	UNK_0xF2D30B8ACAF12A39(iLocal_103, true);
	UNK_0x060F249A9A3E3F4E(false);
	UNK_0x51B096AAC60548C1(0.1f);
	func_121();
	if ((SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bLocal_100, false), -2956.26f, 487.97f, 15.46f) > 5f && UNK_0x0EB28750412C3A5A(vLocal_95, -203.72f, -861.8f, 29.27f, 1) > 5f) && UNK_0x0EB28750412C3A5A(vLocal_95, 288.46f, -1256.71f, 28.44f, 1) > 5f)
	{
		if (func_118(UNK_0x16F2683693E537C9(), bLocal_100, 1) < 50f)
		{
			func_122(&Local_159, cLocal_335, sLocal_327, 3, 0, 0, 0);
			bLocal_137 = true;
		}
	}
	iLocal_110 = UNK_0x1C0640BA9A7327B3();
	SYSTEM::SETTIMERA(0);
	if (func_112(UNK_0x16F2683693E537C9()))
	{
		UNK_0x33CE5A9E32EA10B2(UNK_0x16F2683693E537C9(), 1);
	}
	func_187(1);
}

int func_187(bool bParam0)
{
	if (func_189())
	{
		Global_111628 = 1;
		Global_111625 = UNK_0x1C0640BA9A7327B3();
		if (func_188(Global_111627))
		{
			func_102(0);
		}
		UNK_0x974531784BE14213(1, "RE_TITLE");
		if (bParam0 && func_188(Global_111627))
		{
			UNK_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

bool func_188(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return false;
	}
	return true;
}

bool func_189()
{
	switch (func_190(&Global_30827, 0, 5, 0, UNK_0x0D0A574C76D769AC()))
	{
		case 1:
			return true;
		case 0:
			return true;
	}
	return false;
}

int func_190(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96222.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_194(0))
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		UNK_0x62DE699599F0417E(UNK_0xA30EC016B12C03E4(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			UNK_0x4C7B0415764B64BA(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *uParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_192(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		Global_41398[Global_41392 /*4*/] = Global_41395;
		Global_41398[Global_41392 /*4*/].f_1 = iParam1;
		Global_41398[Global_41392 /*4*/].f_2 = iParam2;
		Global_41398[Global_41392 /*4*/].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_191(uParam0, iParam4);
		}
	}
	return 2;
}

void func_191(var uParam0, int iParam1)
{
	int iVar0;

	if (Global_41392 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0 /*4*/] == *uParam0)
		{
			Global_41398[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_192(int iParam0)
{
	return func_193(iParam0, Global_41431);
}

int func_193(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
			return 1;
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		case 5:
			break;
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}
	return 0;
}

bool func_194(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_192(iParam0))
	{
		return false;
	}
	return true;
}

bool func_195()
{
	if (iLocal_346 == -1)
	{
		if (UNK_0x18AF0C72ABD5543B())
		{
			if (UNK_0x0A059E0DB9253280(bLocal_99))
			{
				iLocal_346 = UNK_0x1C0640BA9A7327B3();
			}
		}
	}
	else if (UNK_0x1C0640BA9A7327B3() > iLocal_346 + 1000)
	{
		return true;
	}
	if (UNK_0x681F21BF9F7B449B(-1, vLocal_95, 50f))
	{
		return true;
	}
	if ((UNK_0x1C0640BA9A7327B3() - iLocal_347) > 30000)
	{
		if (!UNK_0x03068588A1FCED1A(bLocal_99))
		{
			return true;
		}
		else
		{
			func_278();
		}
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_103))
	{
		if ((UNK_0x0EB28750412C3A5A(vLocal_95, -3044.11f, 594.34f, 6.73f, 1) > 5f && UNK_0x0EB28750412C3A5A(vLocal_95, -712.9f, -819.32f, 22.73f, 1) > 5f) && UNK_0x0EB28750412C3A5A(vLocal_95, 24.13f, -946.84f, 28.36f, 1) > 5f)
		{
			if (UNK_0x8E28E832BEAC3DCE(UNK_0x68F4C0EC296D3901(bLocal_99, false), 2.5f))
			{
				return true;
			}
		}
	}
	return false;
}

void func_196()
{
	if (SYSTEM::VDIST(vLocal_95, -3044.06f, 594.93f, 6.74f) < 5f)
	{
		if (!UNK_0xE4EDC4B0E92C078B(iLocal_103))
		{
			if (func_112(bLocal_100) && func_112(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_100, 60f, 90f, 12f, 0, 1, 0))
				{
					iLocal_103 = func_105(bLocal_99, 1, 0);
					UNK_0xF2D30B8ACAF12A39(iLocal_103, false);
				}
			}
		}
		else
		{
			func_119(iLocal_103, &uLocal_114);
		}
	}
	else if (!UNK_0xE4EDC4B0E92C078B(iLocal_103))
	{
		if (func_112(bLocal_100) && func_112(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_100, 90f, 90f, 8f, 0, 1, 0))
			{
				iLocal_103 = func_105(bLocal_99, 1, 0);
				UNK_0xF2D30B8ACAF12A39(iLocal_103, false);
			}
		}
	}
	else
	{
		func_119(iLocal_103, &uLocal_114);
	}
	if (iLocal_347 == -1)
	{
		iLocal_347 = UNK_0x1C0640BA9A7327B3();
	}
}

bool func_197()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar0 = { vLocal_95 };
	vVar3 = { 0f, 0f, bLocal_98 };
	vVar6 = { 10f, 10f, 5f };
	if (iLocal_109 == 1)
	{
		func_221();
		if (SYSTEM::VDIST(vLocal_95, -203.758f, -861.738f, 29.2684f) < 5f)
		{
			vLocal_118 = { -197.9643f, -868.5554f, 28.2738f };
			bLocal_124 = 196f;
			vLocal_121 = { -187.5415f, -858.1728f, 28.1863f };
			bLocal_125 = 160.391f;
			vLocal_348 = { -259.0351f, -865.7119f, 28f };
			vLocal_351 = { -130.3981f, -908.8096f, 40f };
			UNK_0x8A222F0405967452("ATM_1");
			UNK_0x523BCC9DC80CD82F(bLocal_158);
			while (!UNK_0xB87F6CF6E5628C67(bLocal_158))
			{
				if (func_208())
				{
					func_278();
				}
				SYSTEM::WAIT(0);
			}
			UNK_0xAB8E2DDC7AF955E0(bLocal_158, true);
		}
		else
		{
			vLocal_118 = { -2968.5f, 494.48f, 14.82f };
			bLocal_124 = 55.24f;
			vLocal_121 = { -2973.03f, 496.38f, 14.96f };
			bLocal_125 = 3.18f;
			vLocal_348 = { -259.0351f, -865.7119f, 28f };
			vLocal_351 = { -130.3981f, -908.8096f, 40f };
			UNK_0x523BCC9DC80CD82F(bLocal_158);
			while (!UNK_0xB87F6CF6E5628C67(bLocal_158))
			{
				if (func_208())
				{
					func_278();
				}
				SYSTEM::WAIT(0);
			}
			UNK_0xAB8E2DDC7AF955E0(bLocal_158, true);
		}
	}
	else if (iLocal_109 == 2)
	{
		func_221();
		vLocal_118 = { 283.31f, -1249.51f, 28.95f };
		bLocal_124 = 78.25f;
		vLocal_121 = { 288.9906f, -1248.443f, 28.2847f };
		bLocal_125 = 75.9756f;
		vLocal_348 = { 266.3643f, -1313.829f, 28.59103f };
		vLocal_351 = { 265.1489f, -1215.932f, 36.20192f };
		UNK_0x523BCC9DC80CD82F(bLocal_158);
		while (!UNK_0xB87F6CF6E5628C67(bLocal_158))
		{
			if (func_208())
			{
				func_278();
			}
			SYSTEM::WAIT(0);
		}
		UNK_0xAB8E2DDC7AF955E0(bLocal_158, true);
	}
	else if (iLocal_109 == 3)
	{
		func_221();
		vLocal_121 = { -1587.15f, -539.9152f, 34.3644f };
		bLocal_125 = 327f;
		vLocal_348 = { -1596.203f, -474.8844f, 32f };
		vLocal_351 = { -1595.572f, -565.8368f, 48f };
	}
	else if (iLocal_109 == 4)
	{
		func_221();
		vLocal_118 = { 181.2355f, 6632.627f, 30.5732f };
		bLocal_124 = 182f;
		vLocal_121 = { 200.0727f, 6630.587f, 30.517f };
		bLocal_125 = 165f;
		vLocal_348 = { 178.1817f, 6660.375f, 31f };
		vLocal_351 = { 179.1249f, 6530.043f, 38f };
		UNK_0x73EBD15DD6536BC2(0);
		UNK_0xE342F209E49C5314(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, false, 1);
		UNK_0x523BCC9DC80CD82F(bLocal_158);
		while (!UNK_0xB87F6CF6E5628C67(bLocal_158))
		{
			if (func_208())
			{
				func_278();
			}
			SYSTEM::WAIT(0);
		}
		UNK_0xAB8E2DDC7AF955E0(bLocal_158, true);
	}
	else if (iLocal_109 == 5)
	{
		func_221();
	}
	if (func_199())
	{
		UNK_0x536F1BE96C726C4B(vLocal_95, vVar6.x, 0, 0, 0, false);
		iLocal_107 = UNK_0x7D6CA5F52B3748BF(vLocal_95 - vVar6, vLocal_95 + vVar6, 0, 1, 1, 1);
		bLocal_100 = UNK_0x36F2404464202779(5, bLocal_157, vLocal_95, bLocal_98, 1, true);
		UNK_0xAFF39FB306F8E232(bLocal_100, 13, false);
		UNK_0xAFF39FB306F8E232(bLocal_100, 11, true);
		UNK_0xAFF39FB306F8E232(bLocal_100, 17, false);
		UNK_0x64F9F278AB9DCA2C(bLocal_100, 6, true, false, 0);
		UNK_0xE8832A9E16A57A1F(bLocal_100, true, 1);
		UNK_0x7980D72D61BEF4D5(bLocal_100, true);
		UNK_0x25C5402CC10F76CD(bLocal_100, false);
		UNK_0x4F39CC3882DD074E(bLocal_100, bLocal_367);
		UNK_0x6D80F1AEBA734886(bLocal_100, false);
		if (iLocal_115 == 1)
		{
			UNK_0x64F9F278AB9DCA2C(bLocal_100, false, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bLocal_100, 2, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(bLocal_100, 3, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(bLocal_100, 4, false, 2, 0);
		}
		bLocal_99 = UNK_0x36F2404464202779(22, bLocal_156, vLocal_95, false, 1, true);
		UNK_0xAFF39FB306F8E232(bLocal_99, 17, true);
		UNK_0xAFF39FB306F8E232(bLocal_99, 13, false);
		UNK_0xAFF39FB306F8E232(bLocal_99, 6, true);
		UNK_0xBAFED2F6486F771A(bLocal_99, 128, true);
		UNK_0xE8832A9E16A57A1F(bLocal_99, true, 1);
		UNK_0x11AD11297DC58CC7(bLocal_99, true);
		UNK_0x4E885A246A9D983A(bLocal_99, 42, true);
		UNK_0x4E885A246A9D983A(bLocal_99, 281, true);
		UNK_0x4E885A246A9D983A(bLocal_99, 172, false);
		UNK_0x4E885A246A9D983A(bLocal_99, 137, true);
		UNK_0xFBAC0F6D4E00C891(bLocal_99);
		UNK_0x4F39CC3882DD074E(bLocal_99, bLocal_366);
		UNK_0x26A6B1686E33113F(bLocal_99, 1);
		UNK_0x08841CDB215AE18F(bLocal_99, UNK_0x1BB04F10296A1C5E(bLocal_144, "b_atm_mugging", vVar0, vVar3, false, 2), 0, 0, 1);
		vVar9 = { UNK_0xEEB20D14BD38615E(bLocal_144, "b_atm_mugging", vVar0, vVar3, false, 2) };
		UNK_0xD8F6A53F4799FAFE(bLocal_99, vVar9.z);
		if (func_112(bLocal_100))
		{
			if (UNK_0xCED082ADD3739B9F(bLocal_100))
			{
				UNK_0x08841CDB215AE18F(bLocal_100, UNK_0x1BB04F10296A1C5E("random@atmrobberygen@male", "idle_a", vVar0, vVar3, false, 2), 0, 0, 1);
				vVar9 = { UNK_0xEEB20D14BD38615E("random@atmrobberygen@male", "idle_a", vVar0, vVar3, false, 2) };
			}
			else
			{
				UNK_0x08841CDB215AE18F(bLocal_100, UNK_0x1BB04F10296A1C5E("random@atmrobberygen@female", "idle_a", vVar0, vVar3, false, 2), 0, 0, 1);
				vVar9 = { UNK_0xEEB20D14BD38615E("random@atmrobberygen@female", "idle_a", vVar0, vVar3, false, 2) };
			}
			UNK_0xD8F6A53F4799FAFE(bLocal_100, vVar9.z);
		}
		UNK_0xC6EB89C59F2AF6B8(bLocal_99, bLocal_144, "b_atm_mugging", 1000f, -4f, -1, 1, false, 0, 0, 0);
		if (UNK_0xCED082ADD3739B9F(bLocal_100))
		{
			UNK_0xC6EB89C59F2AF6B8(bLocal_100, "random@atmrobberygen@male", "idle_a", 1000f, -4f, -1, 1, false, 0, 0, 0);
			UNK_0x8D17794CE3273D70("random@atmrobberygen@female");
		}
		else
		{
			UNK_0xC6EB89C59F2AF6B8(bLocal_100, "random@atmrobberygen@female", "idle_a", 1000f, -4f, -1, 1, false, 0, 0, 0);
			UNK_0x8D17794CE3273D70("random@atmrobberygen@male");
		}
		UNK_0x20EC6650986ACDC7(bLocal_99, 1);
		UNK_0x11AD11297DC58CC7(bLocal_100, true);
		UNK_0x262EF6C6306BEA6C(bLocal_99, joaat("WEAPON_PISTOL"), -1, true, true);
		UNK_0x155F8B27DA5061F5(bLocal_99, joaat("WEAPON_PISTOL"), 34, 0);
		UNK_0x5745EA6329A91E29(bLocal_99, joaat("WEAPON_PISTOL"), false);
		UNK_0xE2F0767314863BD8(bLocal_99, 1, 0);
		switch (func_39())
		{
			case 0:
				sLocal_324 = "MICHAEL";
				break;
			case 1:
				sLocal_324 = "FRANKLIN";
				break;
			case 2:
				sLocal_324 = "TREVOR";
				break;
		}
		func_198(&Local_159, 0, UNK_0x16F2683693E537C9(), sLocal_324, 0, 1);
		func_198(&Local_159, 1, bLocal_100, sLocal_326, 0, 1);
		func_198(&Local_159, 2, bLocal_99, "ATMRobber", 0, 1);
		if (iLocal_109 == 1 || iLocal_109 == 2)
		{
			bLocal_117 = UNK_0x122AAB0B1D6F55AD(bLocal_158, vLocal_118, bLocal_124, true, true, false);
			UNK_0x56FDC9ADE35F7DB0(bLocal_117, true, true, 0);
			UNK_0x2F625BED8BF7F26A(bLocal_117);
			UNK_0xDC2C59BD0989562B(bLocal_117, 1);
			if (iLocal_109 == 2)
			{
				UNK_0x611DFA9294B339CA(bLocal_117, false, 0, false);
			}
			else if (iLocal_109 == 1)
			{
				UNK_0xCC095276B3DD380E(bLocal_99, 0);
				UNK_0x545E1397F38D9D5A(bLocal_99, 3);
			}
			else if (iLocal_109 == 4)
			{
				UNK_0x71EDC33E5A423750(bLocal_117, 3);
			}
		}
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, false);
		return true;
	}
	else if (func_208())
	{
		func_278();
	}
	return false;
}

void func_198(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_199()
{
	UNK_0x3F423BF5B8125A50("random@atmrobberygen@male");
	UNK_0x3F423BF5B8125A50("random@atmrobberygen@female");
	if (!bLocal_133)
	{
		func_207(&Local_384, 3);
		Local_384.f_146 = UNK_0xF4CCC8CB6DE7F1AE();
		func_206(&Local_384, bLocal_156);
		func_206(&Local_384, bLocal_157);
		func_206(&Local_384, bLocal_153);
		func_206(&Local_384, bLocal_154);
		func_204(&Local_384, bLocal_144);
		func_204(&Local_384, bLocal_368);
		func_204(&Local_384, bLocal_362);
		func_204(&Local_384, bLocal_145);
		bLocal_133 = true;
	}
	if ((UNK_0xB4AE0788C1587752("random@atmrobberygen@male") && UNK_0xB4AE0788C1587752("random@atmrobberygen@female")) && func_200(&Local_384))
	{
		return true;
	}
	return false;
}

bool func_200(var uParam0)
{
	int iVar0;

	if (!uParam0->f_145)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 29))
			{
				return false;
			}
			if (!func_201(uParam0[iVar0 /*18*/]))
			{
				return false;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return true;
}

bool func_201(var uParam0)
{
	return func_202(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

bool func_202(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0xEAE0D21A50E6C7F4(bParam0, 30))
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam0, 29))
		{
			switch (func_203(bParam0))
			{
				case 0:
					return UNK_0xB87F6CF6E5628C67(bParam2);
				case 1:
					return UNK_0xB4AE0788C1587752(bParam1);
				case 2:
					return UNK_0x59F02DA2266A744C(bParam1);
				case 3:
					return UNK_0x27117E2CDD4D67C3(bParam1);
				case 4:
					return UNK_0x3DDA6C6A285628E4(bParam2, bParam1);
				case 5:
					return UNK_0x1C2E18E9C63BEB77(bParam1);
				case 6:
					return UNK_0xAE317D00A5A55DF6(bParam1, UNK_0xEAE0D21A50E6C7F4(bParam0, 27), -1);
				case 7:
					return UNK_0x64EF15C5E09BAD76(bParam2);
				case 8:
					return UNK_0x67C1D9E5B91B2E37(bParam2);
				case 9:
					return UNK_0x25F7A4D42AF2AB93();
				default:
					break;
			}
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_203(bool bParam0)
{
	bool bVar0;

	bVar0 = false;
	while (bVar0 < 10)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_204(var uParam0, bool bParam1)
{
	func_205(uParam0, 1, -1, bParam1, 0);
}

void func_205(var uParam0, bool bParam1, bool bParam2, char* sParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], bParam1))
			{
				if (bParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == bParam2)
					{
						return;
					}
				}
				if (bParam1 != 4)
				{
					if (!UNK_0x7F8A39872A07D2CE(sParam3, "NULL"))
					{
						if (UNK_0x7F8A39872A07D2CE(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = bParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			UNK_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], bParam1);
			UNK_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_206(var uParam0, bool bParam1)
{
	func_205(uParam0, 0, bParam1, "NULL", 0);
}

void func_207(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

bool func_208()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_91) < (75f * 75f))
		{
			return true;
		}
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_220())
		{
			return false;
		}
	}
	if (func_216())
	{
		return true;
	}
	if (func_209(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_209(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;

	iVar33 = -1;
	fVar34 = fParam0;
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (func_41(func_39()))
		{
			iVar36 = func_215();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 2) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 3))
				{
					func_210(iVar32, &Var0);
					fVar35 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_210(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_211(uParam1, "Abigail1", func_213(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		case 1:
			func_211(uParam1, "Abigail2", func_213(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		case 2:
			func_211(uParam1, "Barry1", func_213(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		case 3:
			func_211(uParam1, "Barry2", func_213(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		case 4:
			func_211(uParam1, "Barry3", func_213(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		case 5:
			func_211(uParam1, "Barry3A", func_213(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		case 6:
			func_211(uParam1, "Barry3C", func_213(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		case 7:
			func_211(uParam1, "Barry4", func_213(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_212(iParam0), 0, 0);
			break;
		case 8:
			func_211(uParam1, "Dreyfuss1", func_213(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		case 9:
			func_211(uParam1, "Epsilon1", func_213(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
			break;
		case 10:
			func_211(uParam1, "Epsilon2", func_213(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		case 11:
			func_211(uParam1, "Epsilon3", func_213(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
			break;
		case 12:
			func_211(uParam1, "Epsilon4", func_213(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
			break;
		case 13:
			func_211(uParam1, "Epsilon5", func_213(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		case 14:
			func_211(uParam1, "Epsilon6", func_213(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_212(iParam0), 0, 1);
			break;
		case 15:
			func_211(uParam1, "Epsilon7", func_213(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
			break;
		case 16:
			func_211(uParam1, "Epsilon8", func_213(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		case 17:
			func_211(uParam1, "Extreme1", func_213(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		case 18:
			func_211(uParam1, "Extreme2", func_213(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		case 19:
			func_211(uParam1, "Extreme3", func_213(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		case 20:
			func_211(uParam1, "Extreme4", func_213(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		case 21:
			func_211(uParam1, "Fanatic1", func_213(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_212(iParam0), 1, 0);
			break;
		case 22:
			func_211(uParam1, "Fanatic2", func_213(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_212(iParam0), 1, 0);
			break;
		case 23:
			func_211(uParam1, "Fanatic3", func_213(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_212(iParam0), 0, 1);
			break;
		case 24:
			func_211(uParam1, "Hao1", func_213(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_212(iParam0), 0, 1);
			break;
		case 25:
			func_211(uParam1, "Hunting1", func_213(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		case 26:
			func_211(uParam1, "Hunting2", func_213(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		case 27:
			func_211(uParam1, "Josh1", func_213(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		case 28:
			func_211(uParam1, "Josh2", func_213(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		case 29:
			func_211(uParam1, "Josh3", func_213(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		case 30:
			func_211(uParam1, "Josh4", func_213(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		case 31:
			func_211(uParam1, "Maude1", func_213(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		case 32:
			func_211(uParam1, "Minute1", func_213(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		case 33:
			func_211(uParam1, "Minute2", func_213(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		case 34:
			func_211(uParam1, "Minute3", func_213(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		case 35:
			func_211(uParam1, "MrsPhilips1", func_213(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
			break;
		case 36:
			func_211(uParam1, "MrsPhilips2", func_213(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
			break;
		case 37:
			func_211(uParam1, "Nigel1", func_213(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		case 38:
			func_211(uParam1, "Nigel1A", func_213(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		case 39:
			func_211(uParam1, "Nigel1B", func_213(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
			break;
		case 40:
			func_211(uParam1, "Nigel1C", func_213(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
			break;
		case 41:
			func_211(uParam1, "Nigel1D", func_213(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
			Jump @4533; //curOff = 3159
			func_211(uParam1, "Nigel2", func_213(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			Jump @4533; //curOff = 3224
			func_211(uParam1, "Nigel3", func_213(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			Jump @4533; //curOff = 3290
			func_211(uParam1, "Omega1", func_213(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			Jump @4533; //curOff = 3356
			func_211(uParam1, "Omega2", func_213(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			Jump @4533; //curOff = 3423
			func_211(uParam1, "Paparazzo1", func_213(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			Jump @4533; //curOff = 3488
			func_211(uParam1, "Paparazzo2", func_213(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			Jump @4533; //curOff = 3555
			func_211(uParam1, "Paparazzo3", func_213(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_212(iParam0), 0, 0);
			Jump @4533; //curOff = 3622
			func_211(uParam1, "Paparazzo3A", func_213(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			Jump @4533; //curOff = 3691
			func_211(uParam1, "Paparazzo3B", func_213(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			Jump @4533; //curOff = 3759
			func_211(uParam1, "Paparazzo4", func_213(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			Jump @4533; //curOff = 3825
			func_211(uParam1, "Rampage1", func_213(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
			Jump @4533; //curOff = 3890
			func_211(uParam1, "Rampage3", func_213(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			Jump @4533; //curOff = 3955
			func_211(uParam1, "Rampage4", func_213(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			Jump @4533; //curOff = 4020
			func_211(uParam1, "Rampage5", func_213(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
			Jump @4533; //curOff = 4085
			func_211(uParam1, "Rampage2", func_213(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			Jump @4533; //curOff = 4150
			func_211(uParam1, "TheLastOne", func_213(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			Jump @4533; //curOff = 4215
			func_211(uParam1, "Tonya1", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			Jump @4533; //curOff = 4284
			func_211(uParam1, "Tonya2", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			Jump @4533; //curOff = 4354
			func_211(uParam1, "Tonya3", func_213(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			Jump @4533; //curOff = 4408
			func_211(uParam1, "Tonya4", func_213(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			Jump @4533; //curOff = 4461
			func_211(uParam1, "Tonya5", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
		}

void func_211(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { vParam7 };
	uParam0->f_9 = sParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = sParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = uParam24;
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 0;
		case 5:
			return 1;
		case 6:
			return 1;
		case 7:
			return 0;
		case 8:
			return 1;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 0;
		case 12:
			return 1;
		case 13:
			return 0;
		case 14:
			return 1;
		case 15:
			return 0;
		case 16:
			return 1;
		case 17:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 1;
		case 24:
			return 1;
		case 25:
			return 1;
		case 26:
			return 1;
		case 27:
			return 0;
		case 28:
			return 1;
		case 29:
			return 1;
		case 30:
			return 1;
		case 31:
			return 0;
		case 32:
			return 1;
		case 33:
			return 1;
		case 34:
			return 1;
		case 35:
			return 0;
		case 36:
			return 0;
		case 37:
			return 0;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 1;
		case 41:
			return 1;
		case 42:
			return 1;
		case 43:
			return 1;
		case 44:
			return 0;
		case 45:
			return 0;
		case 46:
			return 1;
		case 47:
			return 1;
		case 48:
			return 0;
		case 49:
			return 1;
		case 50:
			return 1;
		case 51:
			return 1;
		case 52:
			return 1;
		case 54:
			return 1;
		case 55:
			return 1;
		case 56:
			return 1;
		case 53:
			return 1;
		case 57:
			return 1;
		case 58:
			return 1;
		case 59:
			return 1;
		case 60:
			return 1;
		case 61:
			return 1;
		case 62:
			return 1;
		default:
			break;
	}
	return 0;
}

struct<2> func_213(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_214(iParam0) };
	if (UNK_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_214(int iParam0)
{
	struct<2> Var0;

	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		default:
			break;
	}
	return Var0;
}

int func_215()
{
	func_40();
	switch (Global_111638.f_2358.f_539.f_4321)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
	}
	return 0;
}

bool func_216()
{
	if (func_219() && !func_220())
	{
		return true;
	}
	if (func_218() && func_217())
	{
		return true;
	}
	return false;
}

bool func_217()
{
	return Global_111356 > 0;
}

bool func_218()
{
	if (Global_95666 != -1)
	{
		return true;
	}
	return false;
}

bool func_219()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_220()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (UNK_0xBA19B87E031E2390() == 1f)
		{
			return true;
		}
	}
	return false;
}

void func_221()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (iLocal_115 == 0 && iLocal_109 == 5)
	{
		iLocal_115 = UNK_0x09AC81E49EA267F7(true, 5);
	}
	else if (iLocal_109 != 5)
	{
		iLocal_115 = iLocal_109;
	}
	switch (iLocal_115)
	{
		case 1:
			bLocal_156 = joaat("G_M_Y_ARMGOON_02");
			bLocal_366 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_01";
			bLocal_157 = joaat("A_F_M_TOURIST_01");
			bLocal_367 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
			bLocal_158 = joaat("SANCHEZ");
			sLocal_327 = "REAR1_ATTR";
			sLocal_328 = "REAR1_HELP";
			sLocal_329 = "REAR1_PROMPT";
			sLocal_330 = "REAR1_CHASE";
			sLocal_331 = "REAR1_FLEE";
			cLocal_332 = "REAR1_THX";
			sLocal_333 = "REAR1_DAMN";
			switch (func_39())
			{
				case 0:
					sLocal_336 = "REAR1_REM";
					sLocal_334 = "REAR1_FKM";
					sLocal_325 = "REAR1_WM";
					sLocal_337 = "REAR1_GYM";
					break;
				case 1:
					sLocal_336 = "REAR1_REF";
					sLocal_334 = "REAR1_FKF";
					sLocal_325 = "REAR1_WF";
					sLocal_337 = "REAR1_GYF";
					break;
				case 2:
					sLocal_336 = "REAR1_RET";
					sLocal_334 = "REAR1_FKT";
					sLocal_325 = "REAR1_WT";
					sLocal_337 = "REAR1_GYT";
					break;
			}
			sLocal_326 = "ATMRobVictim1";
			cLocal_335 = "REAR1AU";
			if (iLocal_155 == 0)
			{
				iVar0 = UNK_0x09AC81E49EA267F7(false, 3);
				if (iVar0 == 0)
				{
					bLocal_153 = joaat("PROP_LD_PURSE_01");
				}
				else if (iVar0 == 1)
				{
					bLocal_153 = joaat("PROP_LD_WALLET_01");
				}
				else if (iVar0 == 2)
				{
					bVar1 = func_222();
					if (bVar1)
					{
						bLocal_153 = joaat("PROP_LD_WALLET_PICKUP");
					}
					else
					{
						bLocal_153 = joaat("PROP_LD_PURSE_01");
					}
				}
				iLocal_155 = 1;
			}
			bLocal_362 = "RANDOM@ATMROBBERY1";
			bLocal_363 = "Return_Wallet_Positive_A_Player";
			bLocal_364 = "Return_Wallet_Positive_A_Female";
			bLocal_365 = "Return_Wallet_Positive_A_Cam";
			bLocal_368 = "random@car_thief@waiting_ig_4";
			bLocal_369 = "waiting";
			bLocal_370 = "waiting";
			bLocal_371 = "waiting";
			break;
		case 2:
			bLocal_156 = joaat("G_M_Y_FAMFOR_01");
			bLocal_366 = "G_M_Y_FamFor_01_BLACK_MINI_01";
			bLocal_157 = joaat("A_M_Y_HIPSTER_02");
			bLocal_367 = "A_M_Y_Hipster_02_White_Full_01";
			bLocal_158 = joaat("RUINER");
			sLocal_327 = "REAR2_ATTR";
			sLocal_328 = "REAR2_HELP";
			sLocal_329 = "REAR2_PROMPT";
			sLocal_330 = "REAR2_CHASE";
			sLocal_331 = "REAR2_FLEE";
			cLocal_332 = "REAR2_THX";
			sLocal_333 = "REAR2_DAMN";
			switch (func_39())
			{
				case 0:
					sLocal_336 = "REAR2_REM";
					sLocal_334 = "REAR2_FKM";
					sLocal_325 = "REAR2_WM";
					sLocal_337 = "REAR2_GYM";
					break;
				case 1:
					sLocal_336 = "REAR2_REF";
					sLocal_334 = "REAR2_FKF";
					sLocal_325 = "REAR2_WF";
					sLocal_337 = "REAR2_GYF";
					break;
				case 2:
					sLocal_336 = "REAR2_RET";
					sLocal_334 = "REAR2_FKT";
					sLocal_325 = "REAR2_WT";
					sLocal_337 = "REAR2_GYT";
					break;
			}
			sLocal_326 = "ATMRobVictim2";
			cLocal_335 = "REAR2AU";
			bLocal_153 = joaat("PROP_LD_WALLET_PICKUP");
			bLocal_362 = "RANDOM@ATMROBBERY2";
			bLocal_363 = "Return_Wallet_Positive_A_Player";
			bLocal_364 = "Return_Wallet_Positive_A_Male";
			bLocal_365 = "Return_Wallet_Positive_A_Cam";
			bLocal_368 = "RANDOM@BICYCLE_THIEF@IDLE_A";
			bLocal_369 = "IDLE_A";
			bLocal_370 = "IDLE_B";
			bLocal_371 = "IDLE_C";
			break;
		case 3:
			bLocal_157 = joaat("A_F_M_TOURIST_01");
			bLocal_367 = "A_F_Y_Tourist_01_White_Mini_01";
			bLocal_156 = joaat("G_M_Y_SALVAGOON_02");
			bLocal_366 = "G_M_Y_SalvaGoon_02_SALVADORIAN_MINI_03";
			sLocal_327 = "REAR5_ATTR";
			sLocal_328 = "REAR5_HELP";
			sLocal_329 = "REAR5_PROMPT";
			sLocal_330 = "REAR5_CHASE";
			sLocal_331 = "REAR5_FLEE";
			cLocal_332 = "REAR5_THX";
			sLocal_333 = "REAR5_DAMN";
			switch (func_39())
			{
				case 0:
					sLocal_336 = "REAR5_REM";
					sLocal_334 = "REAR5_FKM";
					sLocal_325 = "REAR5_WM";
					sLocal_337 = "REAR5_GYM";
					break;
				case 1:
					sLocal_336 = "REAR5_REF";
					sLocal_334 = "REAR5_FKF";
					sLocal_325 = "REAR5_WF";
					sLocal_337 = "REAR5_GYF";
					break;
				case 2:
					sLocal_336 = "REAR5_RET";
					sLocal_334 = "REAR5_FKT";
					sLocal_325 = "REAR5_WT";
					sLocal_337 = "REAR5_GYT";
					break;
			}
			sLocal_326 = "ATMRobVictim5";
			cLocal_335 = "REAR5AU";
			if (iLocal_155 == 0)
			{
				iVar0 = UNK_0x09AC81E49EA267F7(false, 3);
				if (iVar0 == 0)
				{
					bLocal_153 = joaat("PROP_LD_PURSE_01");
				}
				else if (iVar0 == 1)
				{
					bLocal_153 = joaat("PROP_LD_WALLET_01");
				}
				else if (iVar0 == 2)
				{
					bVar2 = func_222();
					if (bVar2)
					{
						bLocal_153 = joaat("PROP_LD_WALLET_PICKUP");
					}
					else
					{
						bLocal_153 = joaat("PROP_LD_WALLET_01");
					}
				}
				iLocal_155 = 1;
			}
			bLocal_362 = "RANDOM@ATMROBBERY3";
			bLocal_363 = "Return_Wallet_Positive_B_Player";
			bLocal_364 = "Return_Wallet_Positive_B_Female";
			bLocal_365 = "Return_Wallet_Positive_B_Cam";
			bLocal_368 = "random@car_thief@waiting_ig_4";
			bLocal_369 = "waiting";
			bLocal_370 = "waiting";
			bLocal_371 = "waiting";
			break;
		case 4:
			bLocal_157 = joaat("A_F_M_TOURIST_01");
			bLocal_367 = "A_F_M_BevHills_02_WHITE_FULL_01";
			bLocal_158 = joaat("RUINER");
			bLocal_156 = joaat("G_M_Y_AZTECA_01");
			bLocal_366 = "G_M_Y_Latino01_Latino_MINI_01";
			sLocal_327 = "REAR3_ATTR";
			sLocal_328 = "REAR3_HELP";
			sLocal_329 = "REAR3_PROMPT";
			sLocal_330 = "REAR3_CHASE";
			sLocal_331 = "REAR3_FLEE";
			cLocal_332 = "REAR3_THX";
			sLocal_333 = "REAR3_DAMN";
			switch (func_39())
			{
				case 0:
					sLocal_336 = "REAR3_REM";
					sLocal_334 = "REAR3_FKM";
					sLocal_325 = "REAR3_WM";
					sLocal_337 = "REAR3_GYM";
					break;
				case 1:
					sLocal_336 = "REAR3_REF";
					sLocal_334 = "REAR3_FKF";
					sLocal_325 = "REAR3_WF";
					sLocal_337 = "REAR3_GYF";
					break;
				case 2:
					sLocal_336 = "REAR3_RET";
					sLocal_334 = "REAR3_FKT";
					sLocal_325 = "REAR3_WT";
					sLocal_337 = "REAR3_GYT";
					break;
			}
			sLocal_326 = "ATMRobVictim3";
			cLocal_335 = "REAR3AU";
			if (iLocal_155 == 0)
			{
				iVar0 = UNK_0x09AC81E49EA267F7(false, 3);
				if (iVar0 == 0)
				{
					bLocal_153 = joaat("PROP_LD_PURSE_01");
				}
				else if (iVar0 == 1)
				{
					bLocal_153 = joaat("PROP_LD_WALLET_01");
				}
				else if (iVar0 == 2)
				{
					bVar3 = func_222();
					if (bVar3)
					{
						bLocal_153 = joaat("PROP_LD_WALLET_PICKUP");
					}
					else
					{
						bLocal_153 = joaat("PROP_LD_PURSE_01");
					}
				}
				iLocal_155 = 1;
			}
			bLocal_362 = "RANDOM@ATMROBBERY4";
			bLocal_363 = "Return_Wallet_Positive_C_Player";
			bLocal_364 = "Return_Wallet_Positive_C_Female";
			bLocal_365 = "Return_Wallet_Positive_C_Cam";
			bLocal_368 = "random@car_thief@waiting_ig_4";
			bLocal_369 = "waiting";
			bLocal_370 = "waiting";
			bLocal_371 = "waiting";
			break;
	}
	if (UNK_0x0EB28750412C3A5A(vLocal_95, -203.72f, -861.8f, 29.27f, 1) < 5f)
	{
		vLocal_354 = { -197.64f, -863.25f, 28.33f };
		fLocal_357 = 334.5007f;
		vLocal_358 = { -187.24f, -856.77f, 28.97f };
		bLocal_361 = 162.69f;
		iLocal_116 = 1;
	}
	else if (UNK_0x0EB28750412C3A5A(vLocal_95, 288.46f, -1256.71f, 28.44f, 1) < 5f)
	{
		vLocal_354 = { 286.5f, -1256.73f, 28.29f };
		fLocal_357 = 167.3216f;
		vLocal_358 = { 250.55f, -1239.27f, 28.84f };
		bLocal_361 = 265.51f;
		iLocal_116 = 2;
	}
	else if (UNK_0x0EB28750412C3A5A(vLocal_95, -3044.11f, 594.34f, 6.73f, 1) < 5f)
	{
		vLocal_354 = { -3044.66f, 595.7f, 6.59f };
		fLocal_357 = 296.7338f;
		vLocal_358 = { -3037.55f, 608.53f, 7.34f };
		bLocal_361 = 202.3f;
		iLocal_116 = 3;
	}
	else if (UNK_0x0EB28750412C3A5A(vLocal_95, 174.53f, 6637.64f, 30.57f, 1) < 5f)
	{
		vLocal_354 = { 175.57f, 6636.58f, 30.57f };
		fLocal_357 = 260.4868f;
		vLocal_358 = { 188.97f, 6616.2f, 31.48f };
		bLocal_361 = 93.97f;
		iLocal_116 = 4;
	}
	else if (UNK_0x0EB28750412C3A5A(vLocal_95, 24.13f, -946.84f, 28.36f, 1) < 5f)
	{
		vLocal_354 = { 23.65f, -948.26f, 28.36f };
		fLocal_357 = 258.8732f;
		vLocal_358 = { 22.19f, -955.82f, 28.94f };
		bLocal_361 = 70.66f;
		iLocal_116 = 6;
	}
	else if (UNK_0x0EB28750412C3A5A(vLocal_95, 296.13f, -894.01f, 28.23f, 1) < 5f)
	{
		vLocal_354 = { 294.64f, -893.6f, 28.18f };
		fLocal_357 = 156.7222f;
		vLocal_358 = { 286.4f, -897.28f, 28.57f };
		bLocal_361 = 341.97f;
		iLocal_116 = 8;
	}
	else if (UNK_0x0EB28750412C3A5A(vLocal_95, 1077.69f, -775.73f, 57.21f, 1) < 5f)
	{
		vLocal_354 = { 1077.64f, -773.86f, 57.09f };
		fLocal_357 = 275.6593f;
		vLocal_358 = { 1081.93f, -764.08f, 57.35f };
		bLocal_361 = 268.57f;
		iLocal_116 = 11;
	}
	else if (UNK_0x0EB28750412C3A5A(vLocal_95, -2072.88f, -317.19f, 12.32f, 1) < 5f)
	{
		vLocal_354 = { -2074.93f, -316.75f, 12.16f };
		fLocal_357 = 157.3363f;
		vLocal_358 = { -2101.2f, -293.74f, 12.74f };
		bLocal_361 = 263.12f;
		iLocal_116 = 16;
	}
	else if (UNK_0x0EB28750412C3A5A(vLocal_95, -821.33f, -1082.43f, 10.14f, 1) < 5f)
	{
		vLocal_354 = { -819.39f, -1084.12f, 10.03f };
		fLocal_357 = 236.6294f;
		vLocal_358 = { -803.18f, -1075.91f, 11.13f };
		bLocal_361 = 209.53f;
		iLocal_116 = 17;
	}
	else if (UNK_0x0EB28750412C3A5A(vLocal_95, -712.9f, -819.32f, 22.73f, 1) < 5f)
	{
		vLocal_354 = { -712.88f, -820.47f, 22.61f };
		fLocal_357 = 268.2568f;
		vLocal_358 = { -721.63f, -826.84f, 22.82f };
		bLocal_361 = 93.14f;
		iLocal_116 = 18;
	}
	else if (UNK_0x0EB28750412C3A5A(vLocal_95, -387.12f, 6045.79f, 30.5f, 1) < 5f)
	{
		vLocal_354 = { -389.5633f, 6042.153f, 30.4989f };
		fLocal_357 = 223.2838f;
		vLocal_358 = { -406.23f, 6045.69f, 31.06f };
		bLocal_361 = 229.52f;
		iLocal_116 = 19;
	}
	else if (UNK_0x0EB28750412C3A5A(vLocal_95, -301.84f, -830.39f, 31.38f, 1) < 5f)
	{
		vLocal_354 = { -304.1459f, -837.4778f, 30.6799f };
		fLocal_357 = 286.139f;
		vLocal_358 = { -304.56f, -840.76f, 31.26f };
		bLocal_361 = 77.59f;
		iLocal_116 = 22;
	}
	else if (UNK_0x0EB28750412C3A5A(vLocal_95, -254.3f, -691.96f, 32.61f, 1) < 5f)
	{
		vLocal_354 = { -253.51f, -689.26f, 32.57f };
		fLocal_357 = 209.9227f;
		vLocal_358 = { -250.91f, -684.01f, 33f };
		bLocal_361 = 230.65f;
		iLocal_116 = 23;
	}
	else if (UNK_0x0EB28750412C3A5A(vLocal_95, 89.39f, 2f, 67.34f, 1) < 5f)
	{
		vLocal_354 = { 88.7f, 0.01f, 67.38f };
		fLocal_357 = 71.0114f;
		vLocal_358 = { 91.35f, -7.07f, 67.82f };
		bLocal_361 = 70.28f;
		iLocal_116 = 25;
	}
	else if (UNK_0x0EB28750412C3A5A(vLocal_95, -526.42f, -1222.51f, 17.46f, 1) < 5f)
	{
		vLocal_354 = { -530.11f, -1217.33f, 17.26f };
		fLocal_357 = 53.768f;
		vLocal_358 = { -522.45f, -1196.35f, 18.45f };
		bLocal_361 = 297.22f;
		iLocal_116 = 30;
	}
	else if (UNK_0x0EB28750412C3A5A(vLocal_95, -2956.78f, 488.19f, 14.47f, 1) < 5f)
	{
		vLocal_354 = { -2956.78f, 488.19f, 14.47f };
		fLocal_357 = 80.0912f;
		vLocal_358 = { -2974.34f, 491.96f, 15f };
		bLocal_361 = 1.95f;
		iLocal_116 = 31;
	}
	else
	{
		vLocal_354 = { vLocal_95 };
	}
}

int func_222()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return 1;
	}
	return 0;
}

bool func_223()
{
	if (!func_192(5))
	{
		return true;
	}
	if (func_216())
	{
		return true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_220())
		{
			return false;
		}
	}
	if (func_209(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_224()
{
	if ((Global_111627 == func_225() && UNK_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return true;
	}
	return false;
}

int func_225()
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, UNK_0xBB0808A181D4745C(), 64);
	iVar16 = func_226(Var0);
	return iVar16;
}

int func_226(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (UNK_0x12AB0310C2281427(&cParam0))
	{
		case joaat("RE_ABANDONEDCAR"):
			return 23;
		case joaat("RE_ACCIDENT"):
			return 0;
		case joaat("RE_ARRESTS"):
			return 15;
		case joaat("RE_ATMROBBERY"):
			return 1;
		case joaat("RE_BIKETHIEF"):
			return 26;
		case joaat("RE_BORDER"):
			return 29;
		case joaat("RE_BURIALS"):
			return 24;
		case joaat("RE_BUS_TOURS"):
			return 2;
		case joaat("RE_CARTHEFT"):
			return 17;
		case joaat("RE_CHASETHIEVES"):
			return 11;
		case joaat("RE_CRASHRESCUE"):
			return 16;
		case joaat("RE_CULTSHOOTOUT"):
			return 18;
		case joaat("RE_DEALGONEWRONG"):
			return 12;
		case joaat("RE_DOMESTIC"):
			return 3;
		case joaat("RE_DRUNKDRIVER"):
			return 27;
		case joaat("RE_GANG_INTIMIDATION"):
			return 20;
		case joaat("RE_GANGFIGHT"):
			return 19;
		case joaat("RE_GETAWAY_DRIVER"):
			return 4;
		case joaat("RE_HITCH_LIFT"):
			return 13;
		case joaat("RE_HOMELAND_SECURITY"):
			return 28;
		case joaat("RE_LURED"):
			return 7;
		case joaat("RE_MUGGINGS"):
			return 25;
		case joaat("RE_PAPARAZZI"):
			return 10;
		case joaat("RE_PRISONERLIFT"):
			return 22;
		case joaat("RE_PRISONVANBREAK"):
			return 21;
		case joaat("RE_SECURITYVAN"):
			return 9;
		case joaat("RE_SHOPROBBERY"):
			return 5;
		case joaat("RE_SNATCHED"):
			return 6;
		case joaat("RE_STAG_DO"):
			return 14;
		case joaat("RE_YETARIAN"):
			return 30;
		case joaat("RE_DUEL"):
			return 31;
		case joaat("RE_SEAPLANE"):
			return 32;
		case joaat("RE_MONKEY"):
			return 33;
	}
	return -1;
}

void func_227(var uParam0)
{
	int iVar0;

	if (uParam0->f_145)
	{
		if ((UNK_0xF4CCC8CB6DE7F1AE() >= (uParam0->f_146 + uParam0->f_147) || UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 2)) || UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 29))
					{
						func_228(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = UNK_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_228(bool bParam0)
{
	func_229(bParam0, &(bParam0->f_2), bParam0->f_1);
}

void func_229(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 30))
	{
		switch (func_203(*bParam0))
		{
			case 0:
				UNK_0x523BCC9DC80CD82F(bParam2);
				break;
			case 1:
				UNK_0x3F423BF5B8125A50(bParam1);
				break;
			case 2:
				UNK_0x4E09E67A27F104A7(bParam1);
				break;
			case 3:
				UNK_0x0D3BE1DE0262A012(bParam1, UNK_0xEAE0D21A50E6C7F4(*bParam0, 28));
				break;
			case 4:
				UNK_0x36187931D29E5BBE(bParam2, bParam1);
				break;
			case 5:
				UNK_0x29398344B9E5B8A7(bParam1);
				break;
			case 6:
				UNK_0xAE317D00A5A55DF6(bParam1, UNK_0xEAE0D21A50E6C7F4(*bParam0, 27), -1);
				break;
			case 7:
				UNK_0x8CFFBE74CB5C864A(bParam2);
				break;
			case 8:
				UNK_0xD7992BEF7A9D109E(bParam1, bParam2);
				break;
			case 9:
				UNK_0x9E5E60D8C63FD9D1();
				break;
			default:
				break;
		}
		UNK_0x5D96D8530B3D0904(bParam0, 29);
	}
}

void func_230(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (*uParam1 == -99)
	{
		*uParam1 = UNK_0x1C0640BA9A7327B3();
	}
	if (UNK_0xE4EDC4B0E92C078B(iParam0))
	{
		iVar0 = (UNK_0x1C0640BA9A7327B3() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (UNK_0x4FA921CB56EDB0F8(iParam0) != 255)
				{
					UNK_0x7F010F50CE03A8AF(iParam0, 255);
				}
			}
			else if (UNK_0x4FA921CB56EDB0F8(iParam0) != 0)
			{
				UNK_0x7F010F50CE03A8AF(iParam0, false);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (UNK_0x4FA921CB56EDB0F8(iParam0) != 255)
			{
				UNK_0x7F010F50CE03A8AF(iParam0, 255);
			}
		}
	}
}

void func_231()
{
}

void func_232()
{
}

void func_233(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_225();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_235(iParam0);
	UNK_0x24D1A8A556F3252A(0);
	UNK_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_234();
}

void func_234()
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			UNK_0xAB8E2DDC7AF955E0(UNK_0x134B62B726CEC8E6(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)), true);
		}
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, false);
	}
}

void func_235(int iParam0)
{
	Global_111627 = iParam0;
}

bool func_236(vector3 vParam0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	bool bVar8;

	if (!Global_150217)
	{
		return false;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_225();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_277())
		{
			return false;
		}
	}
	vLocal_91 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_220())
			{
				return false;
			}
		}
		if (!Global_111638.f_9080)
		{
			return false;
		}
		if (func_276(0))
		{
			return false;
		}
		if (func_216())
		{
			return false;
		}
		if (func_275())
		{
			return false;
		}
		if (Global_111627 != -1)
		{
			return false;
		}
		if (func_41(func_39()))
		{
			if (func_209(100f, 1) != -1)
			{
				return false;
			}
		}
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !bParam6)
		{
			if ((vVar1.z - vLocal_91.z) > 50f)
			{
				return false;
			}
		}
		if (!func_274(iParam3))
		{
			return false;
		}
		if (func_41(func_39()))
		{
			if (func_273(func_39()) == 4 || func_273(func_39()) == 5)
			{
				return false;
			}
		}
		if (func_41(func_39()))
		{
			if (!func_272(iParam3, bParam4, 145))
			{
				return false;
			}
		}
		if (!func_271(Global_111638.f_24990.f_43[iParam3]))
		{
			return false;
		}
		if ((UNK_0x1C0640BA9A7327B3() - Global_111629) < 150000)
		{
			if (iParam3 != 30)
			{
				return false;
			}
		}
		if (func_270())
		{
			return false;
		}
		if (UNK_0x2C1AA3A291786CDC())
		{
			return false;
		}
		if (UNK_0xD4A2BF1975E2C50F())
		{
			return false;
		}
		if (!func_261(4))
		{
			return false;
		}
		if (!func_192(5))
		{
			return false;
		}
		if (func_260(iParam3, bParam4) && !bParam5)
		{
			return false;
		}
		if (Global_3 && iParam3 != 10)
		{
			return false;
		}
		if (UNK_0x31609A585163CBAC(UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9())))
		{
			if ((UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == UNK_0xFBD08BECC9B87937(377.153f, -717.567f, 10.0536f) || UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == UNK_0xFBD08BECC9B87937(320.9934f, 265.2515f, 82.1221f)) || UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == UNK_0xFBD08BECC9B87937(-1425.564f, -244.3f, 15.8053f))
			{
				return false;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_260(0, 0))
		{
			return false;
		}
		if (Global_30914)
		{
			return false;
		}
		if (func_274(30) && !func_260(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_41(func_39()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111638.f_2358.f_539.f_2300[iVar4 /*3*/] };
				bVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_259(bVar8))
				{
					if (func_237(iVar4))
					{
						if (!func_65(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar5) < (210f * 210f))
							{
								if (func_39() != iVar4)
								{
									return false;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return true;
}

int func_237(int iParam0)
{
	bool bVar0;

	bVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_238(bVar0);
}

int func_238(bool bParam0)
{
	return func_239(bParam0, 1);
}

int func_239(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_259(bParam0))
	{
		return 0;
	}
	func_240(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_240(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_241(func_252(), bParam0, uParam1, uParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_241(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_251(bParam0, bParam1))
	{
		iVar0 = func_250(bParam1);
		iVar1 = func_248(bParam0);
		iVar2 = (func_248(bParam0) - func_248(bParam1));
		iVar3 = (func_250(bParam0) - func_250(bParam1));
		iVar4 = (func_247(bParam0) - func_247(bParam1));
		iVar5 = (func_246(bParam0) - func_246(bParam1));
		iVar6 = (func_245(bParam0) - func_245(bParam1));
		iVar7 = (func_244(bParam0) - func_244(bParam1));
	}
	else
	{
		iVar0 = func_250(bParam0);
		iVar1 = func_248(bParam1);
		iVar2 = (func_248(bParam1) - func_248(bParam0));
		iVar3 = (func_250(bParam1) - func_250(bParam0));
		iVar4 = (func_247(bParam1) - func_247(bParam0));
		iVar5 = (func_246(bParam1) - func_246(bParam0));
		iVar6 = (func_245(bParam1) - func_245(bParam0));
		iVar7 = (func_244(bParam1) - func_244(bParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_243(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_242(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

float func_242(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_243(bool bParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (bParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
	}
	return 30;
}

int func_244(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_245(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_246(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_247(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

int func_248(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_249(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_249(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_250(bool bParam0)
{
	return (bParam0 && 15);
}

bool func_251(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_259(bParam1) || !func_259(bParam0))
	{
		return true;
	}
	bVar0 = func_248(bParam0);
	bVar1 = func_248(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_250(bParam0);
	bVar1 = func_250(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_247(bParam0);
	bVar1 = func_247(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_246(bParam0);
	bVar1 = func_246(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_245(bParam0);
	bVar1 = func_245(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_244(bParam0);
	bVar1 = func_244(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	return false;
}

bool func_252()
{
	var uVar0;

	func_258(&uVar0, UNK_0x4460E481B9E33ADA());
	func_257(&uVar0, UNK_0x8D199E381D262EEF());
	func_256(&uVar0, UNK_0xD8A54335F18763BA());
	func_255(&uVar0, UNK_0x972A296334C9D57B());
	func_254(&uVar0, UNK_0x118229AD063C3C1D());
	func_253(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_253(bool bParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*bParam0 |= -2147483648;
	}
	else
	{
		*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*bParam0 = (*bParam0 - *bParam0 & -2147483648);
	}
}

void func_254(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_255(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_250(*bParam0);
	iVar1 = func_248(*bParam0);
	if (iParam1 < 1 || iParam1 > func_243(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_256(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_257(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_258(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_259(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	if (bParam0 == -15)
	{
		return false;
	}
	iVar0 = func_244(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_245(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_246(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_248(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_250(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_247(bParam0);
	if (iVar5 < 1 || iVar5 > func_243(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_260(int iParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], bParam1))
	{
		return true;
	}
	return false;
}

bool func_261(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_39();
				if (!func_41(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_269()) || Global_110685) || Global_30770) || func_268()) || func_61(8, -1)) || func_267()) || func_266()) || func_265()) || func_264()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_269()) || Global_30770) || func_268()) || func_61(8, -1)) || func_265()) || func_267()) || func_266()) || func_264()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_269()) || Global_110685) || Global_30770) || func_268()) || func_61(8, -1)) || func_265()) || func_267()) || func_266()) || func_264()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_269()) || Global_110685) || Global_30770) || func_268()) || func_61(8, -1)) || func_267()) || func_266()) || func_264()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_269() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_61(8, -1)) || func_264()) || func_263()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_61(8, -1) || func_267()) || func_266()) || func_263()) || func_262())
						{
							return false;
						}
						if ((UNK_0x991B1F0980C62628() && UNK_0x19EC8D83154D7CC1() != 3) && UNK_0x00A15D69BCAA5267() < 8)
						{
							return false;
						}
						break;
					case 6:
						if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
						{
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_269()) || Global_30770) || func_268()) || func_61(8, -1)) || func_266()) || func_265()) || func_264()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_269()) || func_266()) || Global_110685) || Global_30770) || func_268()) || Global_42596) || func_61(8, -1)) || func_265()) || func_263()) || func_264()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_269()) || Global_110685) || Global_30770) || func_268()) || func_61(8, -1)) || func_265()) || func_263()) || func_267()) || func_266()) || func_264())
						{
							return false;
						}
						break;
				}
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
	else
	{
		return false;
	}
	return true;
}

bool func_262()
{
	return Global_98783.f_1;
}

bool func_263()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_264()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_265()
{
	if (Global_76882)
	{
		return true;
	}
	else if (Global_61506 && !Global_61512)
	{
		return true;
	}
	return false;
}

bool func_266()
{
	return Global_98796.f_346 > 0;
}

bool func_267()
{
	return Global_98796.f_345 > 0;
}

bool func_268()
{
	return Global_1312877;
}

bool func_269()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_270()
{
	func_59();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

bool func_271(bool bParam0)
{
	return func_251(func_252(), bParam0);
}

bool func_272(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_39();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 13:
			if (iVar1 == 0)
			{
				if (bParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 22:
			if (bParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_273(int iParam0)
{
	if (!func_41(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_274(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_277())
		{
			return false;
		}
	}
	bVar0 = iParam0;
	if (bVar0 < 31)
	{
		bVar1 = UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990, bVar0);
	}
	else
	{
		bVar0 = (bVar0 - 31);
		bVar1 = UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_1, bVar0);
	}
	return bVar1;
}

bool func_275()
{
	bool bVar0;

	if (Global_30918)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0xA30B8362589C124A(bVar0, false, 0)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_276(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

bool func_277()
{
	bool bVar0;

	if (UNK_0x61D9362D70D2DD56())
	{
		if (UNK_0x999A3BFD3E9B5D2C())
		{
			if (UNK_0x5CD8D2FE4603C900())
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &bVar0, -1);
				UNK_0x5D96D8530B3D0904(&bVar0, 2);
				UNK_0x5D96D8530B3D0904(&bVar0, 4);
				UNK_0x5D96D8530B3D0904(&bVar0, 6);
				UNK_0x5D96D8530B3D0904(&Global_25, 2);
				UNK_0x5D96D8530B3D0904(&Global_25, 4);
				UNK_0x5D96D8530B3D0904(&Global_25, 6);
				UNK_0xCDC520E5E48E63D9(joaat("SP_UNLOCK_EXCLUS_CONTENT"), bVar0, 1);
				if (UNK_0xE0DC536BD2AC0301())
				{
					bVar0 = UNK_0x0A4C9A3D51EAE31F(866);
					UNK_0x5D96D8530B3D0904(&bVar0, false);
					UNK_0x9F2BE984EBF8A0F4(bVar0);
				}
				return true;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return true;
	}
	else if (Global_150472 == 3)
	{
		return false;
	}
	if (UNK_0xE0DC536BD2AC0301())
	{
		if (UNK_0xEAE0D21A50E6C7F4(UNK_0x0A4C9A3D51EAE31F(866), false))
		{
			return true;
		}
	}
	return false;
}

void func_278()
{
	if (bLocal_339)
	{
		if (UNK_0xDF1306B443CD3D15(bLocal_117, 0))
		{
			if (UNK_0x4DA54CAC0D81A673(bLocal_117))
			{
				UNK_0x78CCB85A0DC35709(bLocal_117);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(bLocal_99))
	{
		UNK_0x6DAD7906B73F064D(&bLocal_99);
	}
	UNK_0x68F065432F4692FB(0);
	if (iLocal_113 != 0)
	{
		UNK_0x850CF499433B183D(iLocal_113);
	}
	UNK_0x68F065432F4692FB(0);
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_100))
	{
		UNK_0x11AD11297DC58CC7(bLocal_100, false);
		UNK_0x25C5402CC10F76CD(bLocal_100, true);
		UNK_0x6DAD7906B73F064D(&bLocal_100);
	}
	if (iLocal_109 == 4)
	{
		UNK_0xE342F209E49C5314(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, true, 1);
	}
	func_180(&uLocal_372, 0, 0);
	if (func_224())
	{
		UNK_0x51B096AAC60548C1(1f);
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x33CE5A9E32EA10B2(UNK_0x16F2683693E537C9(), 0);
	}
	func_291(&Local_384, 0);
	func_279(-1);
	UNK_0x73EBD15DD6536BC2(1);
	UNK_0x2952D66A502EA873(iLocal_107, 0);
	UNK_0x10FAF14A60A0DBE1();
}

void func_279(int iParam0)
{
	char cVar0[64];

	if (iParam0 == -1)
	{
		iParam0 = func_225();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_224())
	{
		func_284(iParam0);
		UNK_0x974531784BE14213(0, 0);
		Global_111629 = UNK_0x1C0640BA9A7327B3();
		func_283(30000);
		StringCopy(&cVar0, func_282(Global_111627, 1), 64);
		if (func_281(Global_111627) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111626, 64);
		}
		UNK_0xCDD9EADCF57830A9(&cVar0, Global_111624, (UNK_0x1C0640BA9A7327B3() - Global_111625), 0);
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111634, false) && Global_111638.f_24990.f_2 < 3)
	{
		UNK_0x0674E58A79778E99(&Global_111634, false);
	}
	func_280(&Global_30827);
	Global_111628 = 0;
	func_235(-1);
}

void func_280(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41393)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

int func_281(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		case 5:
			iVar0 = 2;
			break;
		case 9:
			iVar0 = 10;
			break;
		case 11:
			iVar0 = 4;
			break;
		case 13:
			iVar0 = 4;
			break;
		case 15:
			iVar0 = 2;
			break;
		case 17:
			iVar0 = 2;
			break;
		case 22:
			iVar0 = 2;
			break;
		case 23:
			iVar0 = 2;
			break;
		case 25:
			iVar0 = 3;
			break;
		case 26:
			iVar0 = 2;
			break;
		case 27:
			iVar0 = 2;
			break;
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_282(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
		case 1:
			return "RE_ATMROBBERY";
		case 2:
			return "RE_BUSTOUR";
		case 3:
			return "RE_DOMESTIC";
		case 4:
			return "RE_GETAWAYDRIVER";
		case 5:
			return "RE_SHOPROBBERY";
		case 6:
			return "RE_SNATCHED";
		case 7:
			return "RE_LURED";
		case 8:
			return "RE_BIKETHIEFSTAMP";
		case 9:
			return "RE_SECURITYVAN";
		case 10:
			return "RE_PAPARAZZI";
		case 11:
			return "RE_CHASETHIEVES";
		case 12:
			return "RE_DEALGONEWRONG";
		case 13:
			return "RE_HITCHLIFT";
		case 14:
			return "RE_STAG";
		case 15:
			return "RE_ARREST";
		case 16:
			return "RE_CRASHRESCUE";
		case 17:
			return "RE_CARTHEFT";
		case 18:
			return "RE_CULTSHOOTOUT";
		case 19:
			return "RE_GANGFIGHT";
		case 20:
			return "RE_GANGINTIMIDATION";
		case 21:
			return "RE_PRISONVANBREAK";
		case 22:
			return "RE_PRISONERLIFT";
		case 23:
			return "RE_ABANDONEDCAR";
		case 24:
			return "RE_BURIAL";
		case 25:
			return "RE_MUGGING";
		case 26:
			return "RE_BIKETHIEF";
		case 27:
			return "RE_DRUNKDRIVER";
		case 28:
			return "RE_HOMELANDSECURITY";
		case 29:
			return "RE_BORDERPATROL";
		case 30:
			return "RE_SIMEONYETARIAN";
		case 31:
			return "RE_DUEL";
		case 32:
			return "RE_SEAPLANE";
		case 33:
			return "RE_MONKEYPHOTO";
		case -1:
			return "RE_NONE";
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_283(int iParam0)
{
	Global_41982 = (UNK_0x1C0640BA9A7327B3() + iParam0);
}

void func_284(int iParam0)
{
	func_285(iParam0, 0, func_290(iParam0));
}

void func_285(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<16> Var1;

	bVar0 = func_252();
	func_288(&bVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_287(iParam0, &bVar0);
	Var1 = { func_286(&bVar0) };
}

struct<16> func_286(bool bParam0)
{
	struct<16> Var0;
	bool bVar16;

	StringCopy(&Var0, "", 64);
	bVar16 = func_246(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_245(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_244(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "  ", 64);
	bVar16 = func_247(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "/", 64);
	bVar16 = func_250(*bParam0);
	if (bVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_248(*bParam0), 64);
	return Var0;
}

void func_287(int iParam0, bool bParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *bParam1;
}

void func_288(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_248(*bParam0);
	bVar1 = func_250(*bParam0);
	iVar2 = func_247(*bParam0);
	iVar3 = func_246(*bParam0);
	iVar4 = func_245(*bParam0);
	iVar5 = func_244(*bParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_243(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_243(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_289(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_289(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_258(bParam0, iParam1);
	func_257(bParam0, iParam2);
	func_256(bParam0, iParam3);
	func_254(bParam0, bParam5);
	func_255(bParam0, iParam4);
	func_253(bParam0, iParam6);
}

int func_290(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		case 0:
			iVar0 = 30;
			break;
		case 15:
			iVar0 = 30;
			break;
		case 1:
			iVar0 = 200;
			break;
		case 26:
			iVar0 = 30;
			break;
		case 8:
			iVar0 = 30;
			break;
		case 29:
			iVar0 = 30;
			break;
		case 24:
			iVar0 = 30;
			break;
		case 2:
			iVar0 = 0;
			break;
		case 17:
			iVar0 = 30;
			break;
		case 11:
			iVar0 = 30;
			break;
		case 16:
			iVar0 = 30;
			break;
		case 18:
			iVar0 = 30;
			break;
		case 12:
			iVar0 = 120;
			break;
		case 3:
			iVar0 = 60;
			break;
		case 27:
			iVar0 = 60;
			break;
		case 19:
			iVar0 = 30;
			break;
		case 20:
			iVar0 = 30;
			break;
		case 4:
			iVar0 = 60;
			break;
		case 28:
			iVar0 = 30;
			break;
		case 13:
			iVar0 = 35;
			break;
		case 7:
			iVar0 = 30;
			break;
		case 25:
			iVar0 = 40;
			break;
		case 10:
			iVar0 = 30;
			break;
		case 22:
			iVar0 = 30;
			break;
		case 21:
			iVar0 = 30;
			break;
		case 5:
			iVar0 = 30;
			break;
		case 30:
			iVar0 = 60;
			break;
		case 9:
			iVar0 = 60;
			break;
		case 6:
			iVar0 = 40;
			break;
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_291(var uParam0, bool bParam1)
{
	int iVar0;

	if (!bParam1)
	{
		func_293(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_292(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_292(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_293(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			func_294(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_294(var uParam0)
{
	func_295(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_295(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0xEAE0D21A50E6C7F4(bParam0, 30))
	{
		switch (func_203(bParam0))
		{
			case 0:
				UNK_0x71199B01895C6202(bParam2);
				break;
			case 1:
				UNK_0x8D17794CE3273D70(bParam1);
				break;
			case 2:
				UNK_0x413168EF79E35C7B(bParam1);
				break;
			case 3:
				UNK_0xF5A41F3D3B38EFE3(bParam1);
				break;
			case 4:
				UNK_0xDB8844D4B7C60440(bParam2, bParam1);
				break;
			case 5:
				UNK_0x2F3540C2227116A3(bParam1);
				break;
			case 6:
				UNK_0x8C26F31DFF77D124();
				break;
			case 7:
				UNK_0xB60B60856BF98DCE(bParam2);
				break;
			case 8:
				UNK_0x11CCD0ACA866C6C5(bParam2, UNK_0xEAE0D21A50E6C7F4(bParam0, 26));
				break;
			case 9:
				UNK_0x29D7581AEF4440C2();
				break;
			default:
				break;
		}
	}
}

void func_296(bool bParam0)
{
	Global_111630 = { vLocal_95 };
	if (bParam0)
	{
		func_311(3);
	}
	func_300(1, 0);
	if (!bLocal_148)
	{
		func_299();
	}
	func_297();
	func_278();
}

void func_297()
{
	func_298();
}

int func_298()
{
	if (func_276(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

int func_299()
{
	return 1;
}

void func_300(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_225();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_281(iParam0))
	{
		func_310(iParam0, bParam1);
		if (!func_309(51))
		{
			func_306("RE_REWARD", 1, 0, 4000, 10000, func_215(), 0, 138, 0);
			func_305(51);
		}
		if (func_188(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_304(iParam0, bParam1) != 322)
		{
			func_301(func_304(iParam0, bParam1), vLocal_91.x, vLocal_91.y);
		}
		Global_111626 = bParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_311(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_311(7);
			}
			else
			{
				func_311(1);
			}
		}
	}
}

void func_301(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;

	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_13((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111638.f_10189[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111638.f_10189[iParam0 /*12*/].f_6 == 11 || Global_111638.f_10189[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111638.f_10189[iParam0 /*12*/].f_5 = 1;
		Global_111638.f_10189[iParam0 /*12*/].f_10 = uParam1;
		Global_111638.f_10189[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			UNK_0xE7B2B6A56C007908(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			UNK_0xE7B2B6A56C007908(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			UNK_0xE7B2B6A56C007908(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_302();
	}
}

void func_302()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	bool bVar9;

	iVar0 = 0;
	Global_111374 = 0;
	Global_111375 = 0;
	Global_111376 = 0;
	Global_111377 = 0;
	Global_111378 = 0;
	Global_111379 = 0;
	Global_111380 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111638.f_10189.f_3853;
	Global_111638.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111638.f_10189[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111638.f_10189[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111374++;
					fVar1 = (fVar1 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 3:
					Global_111375++;
					fVar2 = (fVar2 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 5:
					Global_111376++;
					fVar3 = (fVar3 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 7:
					Global_111377++;
					fVar4 = (fVar4 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 9:
					Global_111378++;
					fVar5 = (fVar5 + (Global_111638.f_10189[iVar0 /*12*/].f_4 * 4f));
					break;
				case 11:
					Global_111379++;
					fVar6 = (fVar6 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 13:
					Global_111380++;
					fVar7 = (fVar7 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
	if (Global_111357 > 0)
	{
		if (Global_111374 == Global_111357)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111358 > 0)
	{
		if (Global_111375 == Global_111358)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111359 > 0)
	{
		if (Global_111376 == Global_111359)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111360 > 0)
	{
		if (Global_111377 == Global_111360)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111361 > 0)
	{
		if (((Global_111378 == Global_111361 || (Global_111361 * 10 / Global_111378) < 41) || Global_111378 > Global_111364) || Global_111378 == Global_111364)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					UNK_0xE7B2B6A56C007908(joaat("NUM_RNDEVENTS_COMPLETED"), Global_111361, 0);
					UNK_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111362 > 0)
	{
		if (Global_111379 == Global_111362)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111363 > 0)
	{
		if (Global_111380 == Global_111363)
		{
			fVar7 = 5f;
		}
	}
	Global_111638.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111378 > Global_111364 || Global_111378 == Global_111364)
	{
		bVar9 = Global_111364;
	}
	else
	{
		bVar9 = Global_111378;
	}
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MISSIONS_COMPLETED"), Global_111374, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MISSIONS_AVAILABLE"), Global_111357, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MINIGAMES_COMPLETED"), Global_111375, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MINIGAMES_AVAILABLE"), Global_111358, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_ODDJOBS_COMPLETED"), Global_111376, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_ODDJOBS_AVAILABLE"), Global_111359, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_111377, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_111360, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_RNDEVENTS_COMPLETED"), bVar9, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_111364, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MISC_COMPLETED"), (Global_111380 + Global_111379), 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MISC_AVAILABLE"), (Global_111363 + Global_111362), 1);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + bVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	UNK_0x11F69E56D7B5F3C7(joaat("TOTAL_PROGRESS_MADE"), Global_111638.f_10189.f_3853, 1);
	UNK_0xCDC520E5E48E63D9(joaat("PERCENT_STORY_MISSIONS"), Global_111381, 1);
	UNK_0xCDC520E5E48E63D9(joaat("PERCENT_AMBIENT_MISSIONS"), Global_111382, 1);
	UNK_0xCDC520E5E48E63D9(joaat("PERCENT_ODDJOBS"), Global_111383, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111638.f_10189.f_3853))
	{
		func_35(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_303() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_298();
				}
			}
		}
	}
}

int func_303()
{
	return Global_30768;
}

int func_304(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
		case 1:
			return 226;
		case 2:
			return 243;
		case 3:
			return 256;
		case 4:
			return 259;
		case 5:
			if (bParam1 == 1)
			{
				return 281;
			}
			if (bParam1 == 2)
			{
				return 282;
			}
			break;
		case 6:
			return 265;
		case 7:
			return 218;
		case 9:
			if (bParam1 == 1)
			{
				return 271;
			}
			if (bParam1 == 2)
			{
				return 272;
			}
			if (bParam1 == 3)
			{
				return 273;
			}
			if (bParam1 == 4)
			{
				return 274;
			}
			if (bParam1 == 5)
			{
				return 275;
			}
			if (bParam1 == 6)
			{
				return 276;
			}
			if (bParam1 == 7)
			{
				return 277;
			}
			if (bParam1 == 8)
			{
				return 278;
			}
			if (bParam1 == 9)
			{
				return 279;
			}
			if (bParam1 == 10)
			{
				return 280;
			}
			break;
		case 10:
			return 219;
		case 11:
			if (bParam1 == 1)
			{
				return 246;
			}
			if (bParam1 == 2)
			{
				return 247;
			}
			if (bParam1 == 3)
			{
				return 248;
			}
			if (bParam1 == 4)
			{
				return 249;
			}
			break;
		case 12:
			return 254;
		case 13:
			if (bParam1 == 1)
			{
				return 260;
			}
			if (bParam1 == 2)
			{
				return 261;
			}
			if (bParam1 == 3)
			{
				return 262;
			}
			if (bParam1 == 4)
			{
				return 264;
			}
			break;
		case 14:
			return 283;
		case 15:
			if (bParam1 == 1)
			{
				return 224;
			}
			if (bParam1 == 2)
			{
				return 225;
			}
			break;
		case 16:
			return 252;
		case 17:
			if (bParam1 == 1)
			{
				return 244;
			}
			if (bParam1 == 2)
			{
				return 245;
			}
			break;
		case 18:
			return 253;
		case 19:
			return 215;
		case 20:
			return 216;
		case 21:
			return 251;
		case 22:
			if (bParam1 == 1)
			{
				return 221;
			}
			if (bParam1 == 2)
			{
				return 222;
			}
			break;
		case 23:
			if (bParam1 == 1)
			{
				return 213;
			}
			if (bParam1 == 2)
			{
				return 214;
			}
			break;
		case 24:
			return 242;
		case 25:
			if (bParam1 == 1)
			{
				return 267;
			}
			if (bParam1 == 2)
			{
				return 268;
			}
			if (bParam1 == 3)
			{
				return 269;
			}
			break;
		case 8:
			return 255;
		case 26:
			if (bParam1 == 1)
			{
				return 227;
			}
			if (bParam1 == 2)
			{
				return 228;
			}
			break;
		case 27:
			if (bParam1 == 1)
			{
				return 257;
			}
			if (bParam1 == 2)
			{
				return 258;
			}
			break;
		case 28:
			return 217;
		case 29:
			if (bParam1 == 1)
			{
				return 229;
			}
			if (bParam1 == 2)
			{
				return 230;
			}
			if (bParam1 == 3)
			{
				return 231;
			}
			break;
		case 30:
			return 285;
		case 31:
			return 318;
		case 32:
			return 319;
		case 33:
			return 320;
	}
	return 322;
}

void func_305(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = iParam0;
	iVar1 = 0;
	while (bVar0 > 31)
	{
		bVar0 = (bVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_20405.f_150[iVar1]), bVar0);
	}
}

void func_306(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_307(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_307(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;

	if (UNK_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (UNK_0x7F8A39872A07D2CE(&(Global_111638.f_20405[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111638.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_4), sParam1, 16);
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_8 = (UNK_0x1C0640BA9A7327B3() + iParam3);
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_9 = iParam5;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_11 = iParam6;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_12 = iParam2;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_13 = iParam7;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_14 = iParam8;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_15 = iParam9;
		if (iParam4 != -1)
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_10 = ((UNK_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_10 = -1;
		}
		Global_111638.f_20405.f_145++;
		func_308();
	}
}

void func_308()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111638.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, false))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[0])
			{
				Global_111638.f_20405.f_146[0] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, true))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[1])
			{
				Global_111638.f_20405.f_146[1] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[2])
			{
				Global_111638.f_20405.f_146[2] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

bool func_309(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = iParam0;
	iVar1 = 0;
	while (bVar0 > 31)
	{
		bVar0 = (bVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20405.f_150[iVar1], bVar0);
	}
	return false;
}

void func_310(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), bParam1);
}

void func_311(int iParam0)
{
	Global_111624 = iParam0;
}

