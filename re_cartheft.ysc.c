#region Local Var
	var uLocal_0 = 0;
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
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	bool bLocal_55 = false;
	bool bLocal_56 = false;
	float fLocal_57 = 0f;
	int iLocal_58 = 0;
	bool bLocal_59 = false;
	bool bLocal_60 = false;
	bool bLocal_61 = false;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	bool bLocal_75 = false;
	bool bLocal_76 = false;
	bool bLocal_77 = false;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	bool bLocal_80 = false;
	bool bLocal_81 = false;
	int iLocal_82 = 0;
	bool bLocal_83 = false;
	bool bLocal_84 = false;
	bool bLocal_85 = false;
	bool bLocal_86 = false;
	vector3 vLocal_87 = { 0f, 0f, 0f };
	vector3 vLocal_90 = { 0f, 0f, 0f };
	vector3 vLocal_93 = { 0f, 0f, 0f };
	vector3 vLocal_96 = { 0f, 0f, 0f };
	vector3 vLocal_99 = { 0f, 0f, 0f };
	vector3 vLocal_102 = { 0f, 0f, 0f };
	bool bLocal_105 = false;
	bool bLocal_106 = false;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	bool bLocal_112 = false;
	vector3 vLocal_113 = { 0f, 0f, 0f };
	vector3 vLocal_116 = { 0f, 0f, 0f };
	bool bLocal_119 = false;
	char* sLocal_120 = NULL;
	char* sLocal_121 = NULL;
	struct<10> Local_122[16];
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	char* sLocal_287 = NULL;
	char* sLocal_288 = NULL;
	char* sLocal_289 = NULL;
	char* sLocal_290 = NULL;
	char* sLocal_291 = NULL;
	char* sLocal_292 = NULL;
	char* sLocal_293 = NULL;
	char[] cLocal_294[8] = 0;
	bool bLocal_295 = false;
	bool bLocal_296 = false;
	bool bLocal_297 = false;
	bool bLocal_298 = false;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	bool bLocal_301 = false;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	bool bLocal_306 = false;
	bool bLocal_307 = false;
	bool bLocal_308 = false;
	bool bLocal_309 = false;
	vector3 vLocal_310 = { 0f, 0f, 0f };
	vector3 vLocal_313 = { 0f, 0f, 0f };
	int iLocal_316 = 0;
	vector3 vLocal_317 = { 0f, 0f, 0f };
	vector3 vLocal_320 = { 0f, 0f, 0f };
	vector3 vLocal_323 = { 0f, 0f, 0f };
	vector3 vLocal_326 = { 0f, 0f, 0f };
	bool bLocal_329 = false;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = -1;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 1000;
	var uLocal_340 = 1000;
	var uLocal_341 = 0;
	bool bLocal_342 = false;
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
	bool bVar3;

	iLocal_3 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	iLocal_19 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	bLocal_56 = 10f;
	fLocal_57 = 7f;
	iLocal_58 = 1;
	bLocal_84 = "random@car_thief@waving_ig_1";
	bLocal_119 = 1f;
	iLocal_299 = 786603;
	iLocal_300 = 786469;
	bLocal_307 = "car_returned_peyote";
	bLocal_308 = "girl_car_returned";
	bLocal_309 = "player_car_returned";
	vLocal_52 = { ScriptParam_0.f_1[0 /*3*/] };
	bLocal_55 = ScriptParam_0.f_17[0];
	if (UNK_0x2EBF608FFE6CA406(11))
	{
		func_237();
	}
	func_236();
	if (bLocal_301 == 2)
	{
		if (func_235(34))
		{
			UNK_0x10FAF14A60A0DBE1();
		}
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xC7BC967711A8A063(UNK_0x16F2683693E537C9()))
			{
				vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
				if (vVar0.z > 23f || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -743.3924f, -2129.82f, 12.07619f, -708.892f, -2160.705f, 19.7035f, 124.5f, 0, true, 0))
				{
					UNK_0x10FAF14A60A0DBE1();
				}
			}
		}
	}
	if (func_194(vLocal_52, 17, bLocal_301, 0, 0))
	{
		func_191(-1);
	}
	else
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_190();
		func_189(iLocal_63, &uLocal_66);
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x24A24DF10A19BBA7(UNK_0xD803B885F5E47A62());
		}
		func_188();
		if (!func_187())
		{
			if (func_186())
			{
				func_237();
			}
			if (UNK_0x338D6FF72D84D90F())
			{
				switch (iLocal_48)
				{
					case 0:
						if (func_169())
						{
							UNK_0x060F249A9A3E3F4E(false);
							iLocal_48 = 1;
						}
						break;
					case 1:
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_76))
						{
							if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !UNK_0xEB6A8945D1AC98A1(bLocal_75)) && func_168(bLocal_77)) && !func_167(0))
							{
								if (func_166())
								{
									if (func_168(bLocal_80))
									{
										UNK_0xA22F71BBC8173C39(bLocal_80, false);
									}
									func_157(1);
									UNK_0x51B096AAC60548C1(0.1f);
									func_152(39, 1);
									func_152(40, 1);
									func_152(41, 1);
									func_152(42, 1);
									func_152(43, 1);
									func_152(44, 1);
									SYSTEM::SETTIMERA(0);
								}
							}
							else
							{
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_75))
								{
									UNK_0xF3268524E9BE6D6E(bLocal_75, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
									UNK_0xFADC0A217229F6B5(bLocal_75, true);
									SYSTEM::WAIT(0);
								}
								func_237();
							}
						}
						else
						{
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_75) && func_168(bLocal_77))
							{
								UNK_0xE072601B4380E9DF(bLocal_75, bLocal_77, 20f, iLocal_299);
								UNK_0xFADC0A217229F6B5(bLocal_75, true);
								SYSTEM::WAIT(0);
							}
							func_120(0);
						}
						break;
				}
			}
			else
			{
				func_237();
			}
		}
		else
		{
			if (UNK_0xEB6A8945D1AC98A1(bLocal_76))
			{
				if (Local_122[2 /*10*/].f_7)
				{
					func_119(&Local_122, 2);
				}
			}
			UNK_0x34FABD75496259E4(UNK_0xD803B885F5E47A62());
			func_111();
			if (func_168(bLocal_77) && !func_110())
			{
				if (func_108())
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_75))
					{
						switch (iLocal_49)
						{
							case 0:
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_76))
								{
									if (UNK_0xC42A92762C58E1B9(bLocal_76, bLocal_77, 0))
									{
										if (bLocal_301 == 2)
										{
											UNK_0xE8832A9E16A57A1F(bLocal_76, true, 1);
											UNK_0xE8832A9E16A57A1F(bLocal_77, true, 1);
											UNK_0xDD353D0E9C789D0E(&iLocal_78);
											UNK_0x89258193691A7600(false, bLocal_77, UNK_0x16F2683693E537C9(), 8, 30f, iLocal_300, 200f, 10f, 0);
											UNK_0x75ABDC5F81978924(iLocal_78);
											UNK_0x78ADC381772E3D54(bLocal_76, iLocal_78);
											UNK_0xF82EA857DA10E0CD(&iLocal_78);
										}
										else
										{
											UNK_0xE8832A9E16A57A1F(bLocal_76, true, 1);
											UNK_0xDD353D0E9C789D0E(&iLocal_78);
											UNK_0xD1F0F33C375B8446(false, bLocal_77, 30, 1000);
											UNK_0x89258193691A7600(false, bLocal_77, UNK_0x16F2683693E537C9(), 8, 40f, iLocal_300, 200f, 10f, 1);
											UNK_0x75ABDC5F81978924(iLocal_78);
											UNK_0x78ADC381772E3D54(bLocal_76, iLocal_78);
											UNK_0xF82EA857DA10E0CD(&iLocal_78);
										}
										vLocal_317 = { UNK_0xBF584557291FDD31(bLocal_77, UNK_0xF653B9B22DA806A9(bLocal_77, "wheel_lr")) };
										vLocal_320 = { UNK_0x5293C88BD2F4DE13(bLocal_77, vLocal_317) };
										UNK_0xE81656B429E5C4B5("scr_wheel_burnout", bLocal_77, vLocal_320 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										vLocal_323 = { UNK_0xBF584557291FDD31(bLocal_77, UNK_0xF653B9B22DA806A9(bLocal_77, "wheel_rr")) };
										vLocal_326 = { UNK_0x5293C88BD2F4DE13(bLocal_77, vLocal_323) };
										UNK_0xE81656B429E5C4B5("scr_wheel_burnout", bLocal_77, vLocal_326 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										if (!UNK_0xE4EDC4B0E92C078B(iLocal_64))
										{
											iLocal_64 = func_106(bLocal_77, 1, 0);
										}
										UNK_0xB975E4541DDAB1F5(2);
										iLocal_49 = 1;
									}
									else if (UNK_0xB87D13D0C064E9D1(bLocal_77, UNK_0x16F2683693E537C9(), 1))
									{
										if (!UNK_0xEB6A8945D1AC98A1(bLocal_76))
										{
											UNK_0xF3268524E9BE6D6E(bLocal_76, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
											UNK_0xFADC0A217229F6B5(bLocal_76, true);
											SYSTEM::WAIT(0);
										}
										func_237();
									}
								}
								else
								{
									UNK_0xE072601B4380E9DF(bLocal_75, bLocal_77, 20f, iLocal_299);
									UNK_0xFADC0A217229F6B5(bLocal_75, true);
									SYSTEM::WAIT(0);
									func_120(0);
								}
								break;
							case 1:
								if (func_168(bLocal_77))
								{
									if (bLocal_301 == 1)
									{
										if (SYSTEM::TIMERA() < 5000)
										{
											if (SYSTEM::TIMERA() > 2000)
											{
												bLocal_119 = (bLocal_119 + 0.4f);
											}
											else
											{
												bLocal_119 = (bLocal_119 + 0.2f);
											}
											if (bLocal_119 > 30f)
											{
												bLocal_119 = 30f;
											}
											UNK_0x1AEF7184B203A58D(bLocal_77, bLocal_119);
											bVar3 = UNK_0x83C1D4B63BBD91F6(UNK_0x68F4C0EC296D3901(bLocal_77, true), 5f, false, 4);
											if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
											{
												if (func_168(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)))
												{
													if (UNK_0x1B3D109B39CC2C89(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), bLocal_77))
													{
														SYSTEM::SETTIMERA(5000);
													}
												}
												if (func_168(bVar3))
												{
													if (bVar3 != bLocal_77)
													{
														if (UNK_0x1B3D109B39CC2C89(bVar3, bLocal_77))
														{
															SYSTEM::SETTIMERA(5000);
														}
													}
												}
											}
										}
									}
									if (UNK_0xD96C5EC6FCB061BA(bLocal_77) < 700f)
									{
										func_237();
									}
								}
								func_76();
								if ((((((func_75() || func_74()) || UNK_0x377BE9A1BF38C7CE(bLocal_77)) || UNK_0x7B5606C651AB51B5(bLocal_77, 1, 5000)) || UNK_0x4E861BC5B1EDA7BD(bLocal_77)) || UNK_0xEB6A8945D1AC98A1(bLocal_76)) || !UNK_0xC42A92762C58E1B9(bLocal_76, bLocal_77, 0))
								{
									if (UNK_0x562F77A7F33D2E46("RE_CAR_STEAL_SCENE"))
									{
										if (func_168(bLocal_77))
										{
											UNK_0x06FF977AA95DCCE3(bLocal_77, 0);
										}
										UNK_0x8910D3D58E0132B8("RE_CAR_STEAL_SCENE");
									}
									if (UNK_0xE4EDC4B0E92C078B(iLocal_64))
									{
										UNK_0x142CC44DB769B57E(&iLocal_64);
									}
									func_73();
									if (UNK_0xE4EDC4B0E92C078B(iLocal_63))
									{
										UNK_0x142CC44DB769B57E(&iLocal_63);
									}
									UNK_0xE910A68AA670B4AA(bLocal_75);
									UNK_0xE0C0351D5B931E37(bLocal_77, 50f, 5, 0);
									iLocal_65 = func_106(bLocal_77, 0, 0);
									fLocal_109 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bLocal_77, true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true));
									fLocal_107 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bLocal_77, true), UNK_0x68F4C0EC296D3901(bLocal_75, true));
									fLocal_108 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_75, true));
									func_71(&uLocal_330, 0, 0);
									iLocal_49 = 2;
								}
								break;
							case 2:
								if (func_168(bLocal_77))
								{
									if (UNK_0xD96C5EC6FCB061BA(bLocal_77) < 700f)
									{
										func_237();
									}
								}
								if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
								{
									func_237();
								}
								if (!UNK_0x437347B10A200C4B(bLocal_76, 0))
								{
									if (!UNK_0xC42A92762C58E1B9(bLocal_76, bLocal_77, 0))
									{
										func_70(bLocal_76, &uLocal_67, -1, 0, 0, 0, -1082130432 /* Float: -1f */, 0, -1, -1, 1);
									}
								}
								else
								{
									func_69(&uLocal_67);
								}
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_76))
								{
									if (!UNK_0x4734A6196B611C3B(bLocal_76, UNK_0x16F2683693E537C9()))
									{
										UNK_0x6C3AE6E278DB3D0E(bLocal_76, UNK_0x16F2683693E537C9(), 0, 16);
										UNK_0x71199B01895C6202(UNK_0x134B62B726CEC8E6(bLocal_76));
									}
								}
								if ((SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bLocal_77, true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) > (fLocal_109 + 220f) || SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bLocal_77, true), UNK_0x68F4C0EC296D3901(bLocal_75, true)) > (fLocal_107 + 220f)) || SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_75, true)) > (fLocal_108 + 220f))
								{
									if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_77, 0))
									{
										func_120(0);
									}
									else
									{
										func_237();
									}
								}
								if (UNK_0xE4EDC4B0E92C078B(iLocal_65))
								{
									if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_77, 0))
									{
										UNK_0x142CC44DB769B57E(&iLocal_65);
										iLocal_63 = func_65(bLocal_75, 0, 0);
										func_64(&uLocal_66);
										func_71(&uLocal_330, 0, 0);
										if (!bLocal_60)
										{
											if (bLocal_301 == 1)
											{
												vLocal_93 = { -2258.759f, 4274.059f, 45.9166f };
											}
											else if (bLocal_61)
											{
												vLocal_93 = { -483.4162f, -2160.874f, 8.359f };
											}
											else
											{
												vLocal_93 = { -485.9905f, -2153.542f, 8.1999f };
											}
											if (!UNK_0x8E28E832BEAC3DCE(vLocal_93, 2f) && !UNK_0x0A059E0DB9253280(bLocal_75))
											{
												UNK_0xA47B46945FF6DE74(bLocal_75, vLocal_93, 1, 0, 0, 1);
												UNK_0xD8F6A53F4799FAFE(bLocal_75, bLocal_106);
												bLocal_60 = true;
											}
										}
										iLocal_50 = 3;
										iLocal_304 = UNK_0x1C0640BA9A7327B3();
									}
									else if (UNK_0x12DE711B1C681E9E(bLocal_77, bLocal_75, 20f, 20f, 7f, 0, 1, 0))
									{
										func_63();
										if (func_62())
										{
											if (UNK_0x3CAA763EEC01ADF7(bLocal_75, bLocal_77, -1, 0, false))
											{
												if (!bLocal_296)
												{
													if (func_47(&Local_122, cLocal_294, sLocal_290, 4, 0, 0, 0))
													{
													}
												}
												UNK_0xE072601B4380E9DF(bLocal_75, bLocal_77, 35f, iLocal_299);
												UNK_0xFADC0A217229F6B5(bLocal_75, true);
												func_120(1);
											}
										}
									}
								}
								else if (UNK_0xE4EDC4B0E92C078B(iLocal_63))
								{
									if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_77, 0))
									{
										if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_75, bLocal_56, bLocal_56, bLocal_56, 0, 1, 0))
										{
											if (func_46(1, 0, 1))
											{
												UNK_0x142CC44DB769B57E(&iLocal_63);
												if (bLocal_301 == 1)
												{
													if (func_45(UNK_0xD9522BA9E27E1349(bLocal_77), 336f, 90f))
													{
														bLocal_306 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
													else
													{
														bLocal_306 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
												}
												else
												{
													bLocal_306 = "RANDOM@CAR_THEFT_1@MCS_3";
												}
												UNK_0x3F423BF5B8125A50(bLocal_306);
												iLocal_50 = 4;
												iLocal_49 = 3;
											}
										}
										else
										{
											func_43(UNK_0x68F4C0EC296D3901(bLocal_75, true), &bLocal_56, &fLocal_57);
										}
									}
									else
									{
										UNK_0x142CC44DB769B57E(&iLocal_63);
										iLocal_65 = func_106(bLocal_77, 0, 0);
										iLocal_50 = 0;
									}
								}
								break;
							case 3:
								if (bLocal_301 == 1)
								{
									if (func_4())
									{
										if (func_3(bLocal_75))
										{
											UNK_0x9DD8618CA5BF832D(bLocal_75, 310, true);
										}
										func_120(1);
									}
								}
								else if (func_4())
								{
									if (func_3(bLocal_75))
									{
										UNK_0x9DD8618CA5BF832D(bLocal_75, 310, true);
									}
									func_120(1);
								}
								break;
						}
					}
					else
					{
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_76))
						{
							if (UNK_0xC42A92762C58E1B9(bLocal_76, bLocal_77, 0))
							{
								UNK_0x89258193691A7600(bLocal_76, bLocal_77, UNK_0x16F2683693E537C9(), 8, 50f, iLocal_300, 10f, 10f, 0);
								UNK_0xFADC0A217229F6B5(bLocal_76, true);
								UNK_0x71199B01895C6202(UNK_0x134B62B726CEC8E6(bLocal_76));
							}
							else
							{
								UNK_0xF3268524E9BE6D6E(bLocal_76, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
								UNK_0xFADC0A217229F6B5(bLocal_76, true);
								UNK_0x71199B01895C6202(UNK_0x134B62B726CEC8E6(bLocal_76));
							}
						}
						SYSTEM::WAIT(0);
						func_237();
					}
				}
				else
				{
					if (iLocal_49 == 1)
					{
						if (func_168(bLocal_77))
						{
							UNK_0xA954465BA6FDEFE2(&bLocal_77);
						}
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_76))
						{
							UNK_0xEBA53F35D0085654(&bLocal_76);
						}
					}
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_75))
					{
						if (UNK_0xB4ECF989E2C1DAC8(bLocal_75, bLocal_83, "agitated_idle_a", 3))
						{
							UNK_0x7720CBBC7DD82563(bLocal_75, "waiting", bLocal_83, -2f);
						}
						func_1(bLocal_75, "GENERIC_CURSE_HIGH", 24);
						UNK_0xDD353D0E9C789D0E(&iLocal_78);
						UNK_0x80AA372E04ED318D(false, vLocal_102, 1f, 20000, 1193033728, 1056964608 /* Float: 0.5f */);
						UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_78);
						UNK_0x78ADC381772E3D54(bLocal_75, iLocal_78);
						UNK_0xF82EA857DA10E0CD(&iLocal_78);
					}
					func_237();
				}
			}
			else
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_76))
				{
					UNK_0xF3268524E9BE6D6E(bLocal_76, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
					UNK_0xFADC0A217229F6B5(bLocal_76, true);
				}
				if (UNK_0xC844350D5D58C99A(bLocal_77))
				{
					UNK_0x5DAB50E08C3C504A(bLocal_77, 50f);
				}
				func_237();
			}
		}
	}
}

void func_1(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_2(iParam2), 1);
}

int func_2(int iParam0)
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

bool func_3(bool bParam0)
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

bool func_4()
{
	vector3 vVar0;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;

	bVar3 = "chassis";
	func_63();
	if (((!UNK_0xEB6A8945D1AC98A1(bLocal_75) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9())) && func_168(bLocal_77)) && UNK_0xB4AE0788C1587752(bLocal_306))
	{
		switch (iLocal_51)
		{
			case 0:
				if (UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
				{
					if (func_46(1, 0, 1))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Global_7356, 11))
						{
							if (!UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()))
							{
								func_35(1, 1, 1, 0, 0, 0);
								if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
								{
									UNK_0xA37A90C62806D848(1);
									while (!func_33(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), fLocal_57, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0))
									{
										UNK_0x3FC8DBCC154CA56B();
										SYSTEM::WAIT(0);
									}
									func_33(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), fLocal_57, 0, 1056964608 /* Float: 0.5f */, 0, 1, 0);
								}
								UNK_0x3FC8DBCC154CA56B();
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_75))
								{
									UNK_0x46CB381A452EF99D(bLocal_75, 0);
								}
								func_31();
								func_24(0);
								UNK_0x3FC8DBCC154CA56B();
								iLocal_51 = 1;
							}
						}
					}
				}
				break;
			case 1:
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
				UNK_0xF50D17A63556B8D4(bLocal_77, false, 0, 0f);
				UNK_0x2EA10555AEBEA739(bLocal_77, false, 1, 1, 1);
				UNK_0x3FC8DBCC154CA56B();
				if (bLocal_301 == 1)
				{
					if (func_168(bLocal_77))
					{
						if (func_45(UNK_0xD9522BA9E27E1349(bLocal_77), 336f, 90f))
						{
							vLocal_90 = { -2254.3f, 4273.361f, 44.9697f };
							bLocal_105 = 336.6557f;
							vLocal_87 = { -2252.683f, 4274.16f, 45.0612f };
							vLocal_93 = { -2257.825f, 4269.189f, 44.6334f };
							bLocal_106 = 272.8688f;
							vLocal_113 = { -2254.588f, 4277.307f, 45.6133f };
							vLocal_116 = { 6.6248f, 0.0369f, 179.5595f };
						}
						else
						{
							vLocal_90 = { -2254.223f, 4272.33f, 44.9193f };
							bLocal_105 = 148.0287f;
							vLocal_93 = { -2255.733f, 4271.32f, 44.8166f };
							bLocal_106 = 179.4774f;
							vLocal_87 = { -2257.088f, 4268.938f, 44.6456f };
							vLocal_113 = { -2255.775f, 4274.144f, 46.0666f };
							vLocal_116 = { 2.8781f, 0.3464f, -146.6097f };
						}
					}
					vVar4 = { -2269.34f, 4279.89f, 45.47f };
					bVar7 = 53.23f;
					bLocal_112 = 50f;
					UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vLocal_87, 1, 0, 0, 1);
					UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
					UNK_0xA47B46945FF6DE74(bLocal_75, vLocal_93, 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(bLocal_77, bLocal_105);
					UNK_0xA47B46945FF6DE74(bLocal_77, vLocal_90, 1, 0, 0, 1);
				}
				else
				{
					if (!func_45(UNK_0xD9522BA9E27E1349(bLocal_77), 64.6764f, 90f))
					{
						vLocal_113 = { -478.7095f, -2163.598f, 10.3091f };
						vLocal_116 = { -7.4391f, 0.0006f, 35.6865f };
						vLocal_90 = { -484.9581f, -2155.266f, 8.248f };
						bLocal_105 = 243.308f;
						bLocal_112 = 22f;
					}
					else
					{
						vLocal_113 = { -488.0143f, -2149.419f, 9.9817f };
						vLocal_116 = { -11.7475f, 0.0006f, -145.0045f };
						vLocal_90 = { -484.3195f, -2154.188f, 8.2182f };
						bLocal_105 = 64.6764f;
						bLocal_112 = 36.9289f;
					}
					vVar4 = { -486.92f, -2169.01f, 8.89f };
					bVar7 = 63.1f;
					UNK_0xA47B46945FF6DE74(bLocal_77, vLocal_90, 1, 0, 0, 1);
					UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
					UNK_0xD8F6A53F4799FAFE(bLocal_77, bLocal_105);
				}
				UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
				if (func_168(bLocal_77))
				{
					UNK_0xB9FD7450C0DAB575(bLocal_77, 1084227584 /* Float: 5f */);
					if (UNK_0xC844350D5D58C99A(bLocal_76))
					{
						if (UNK_0xC42A92762C58E1B9(bLocal_76, bLocal_77, 0))
						{
							UNK_0xEBA53F35D0085654(&bLocal_76);
						}
					}
				}
				vLocal_310 = { 0f, 0f, 0f };
				vLocal_313 = { 0f, 0f, 0f };
				iLocal_302 = UNK_0xE9744DB7B8CA6965(vLocal_310, vLocal_313, 2);
				UNK_0x6BE2EAE992FD7C26(iLocal_302, bLocal_77, UNK_0xF653B9B22DA806A9(bLocal_77, bVar3));
				UNK_0x83CBE93AD851E045(iLocal_302, vLocal_310, vLocal_313, 2);
				UNK_0x915804B434753CBD(bLocal_75, iLocal_302, bLocal_306, bLocal_308, 1000f, -2f, 0, 0, 1148846080, 0);
				UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), iLocal_302, bLocal_306, bLocal_309, 1000f, -2f, 1024, 0, 1148846080, 0);
				iLocal_79 = UNK_0x764D630505EFC040("DEFAULT_ANIMATED_CAMERA", vLocal_113, vLocal_116, bLocal_112, 0, 2);
				UNK_0x93E9ED66DAB9FBE3(iLocal_79, iLocal_302, "car_returned_cam", bLocal_306);
				UNK_0xD65E6E13E145467B(bLocal_77, bLocal_307, bLocal_306, 1000f, false, false, 0, false, 262144);
				vLocal_310 = { UNK_0x68F4C0EC296D3901(bLocal_77, true) };
				vLocal_313 = { UNK_0x835730A2D89F6093(bLocal_77, 2) };
				if (func_168(bLocal_80))
				{
					if (func_23(bLocal_80, vLocal_90, 1) <= 11f)
					{
						UNK_0xA47B46945FF6DE74(bLocal_80, vVar4, 1, 0, 0, 1);
						UNK_0xD8F6A53F4799FAFE(bLocal_80, bVar7);
						UNK_0xB9FD7450C0DAB575(bLocal_80, 1084227584 /* Float: 5f */);
						UNK_0x73270B3C9CC833FD(bLocal_80, true, 0);
					}
				}
				UNK_0x536F1BE96C726C4B(vLocal_90, 10f, 1, 0, 0, false);
				SYSTEM::SETTIMERA(0);
				if (bLocal_301 == 2)
				{
					UNK_0xD4D331DFE794EACD(joaat("ROCOTO"), 15);
				}
				else
				{
					UNK_0xD4D331DFE794EACD(joaat("PEYOTE"), 15);
				}
				UNK_0x7800CEC090C01D4D(vLocal_90, 15f);
				UNK_0xE3BB8E05FCEB3FBE(iLocal_79, true);
				UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				iLocal_51 = 3;
				UNK_0xE4EBD4F12E3C46F1(1f);
				break;
			case 3:
				UNK_0x3FC8DBCC154CA56B();
				if (func_20())
				{
					iLocal_51 = 4;
				}
				if (bLocal_301 == 1)
				{
					if (SYSTEM::TIMERA() > 1500 && !bLocal_342)
					{
						if (func_47(&Local_122, cLocal_294, sLocal_121, 4, 0, 0, 0))
						{
							iLocal_51 = 4;
						}
					}
				}
				else if (UNK_0x69DF961355195C3C(iLocal_302) && !bLocal_342)
				{
					if (UNK_0xA45992A6CE82FB43(iLocal_302) >= 0.2f)
					{
						if (func_47(&Local_122, cLocal_294, sLocal_121, 4, 0, 0, 0))
						{
							iLocal_62 = 0;
							iLocal_51 = 4;
						}
					}
				}
				UNK_0xE4EBD4F12E3C46F1(1f);
				break;
			case 4:
				UNK_0x3FC8DBCC154CA56B();
				if (bLocal_301 == 2)
				{
					if (!func_19())
					{
						if (iLocal_62 == 0)
						{
							if (func_47(&Local_122, cLocal_294, "RECT2_REWARD", 4, 0, 0, 0))
							{
								iLocal_62 = 1;
							}
						}
					}
				}
				UNK_0xE4EBD4F12E3C46F1(1f);
				if (bLocal_301 == 1)
				{
					if (UNK_0x69DF961355195C3C(iLocal_302))
					{
						if (iLocal_316 == 0)
						{
							if (UNK_0xA45992A6CE82FB43(iLocal_302) >= 0.83f)
							{
								UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
								UNK_0xC6EB89C59F2AF6B8(UNK_0x16F2683693E537C9(), bLocal_306, bLocal_309, 1000f, -2f, -1, 1048576, UNK_0xA45992A6CE82FB43(iLocal_302), 0, 0, 0);
								UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 1, 0);
								iLocal_316 = 1;
							}
						}
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_75))
						{
							if (UNK_0xA45992A6CE82FB43(iLocal_302) >= 0.83f)
							{
								if (UNK_0xB4ECF989E2C1DAC8(bLocal_75, bLocal_306, bLocal_308, 2))
								{
									UNK_0x1BF8B16C32704027(bLocal_75, -1000f, 0);
									if (!UNK_0x405E212DDE472467(bLocal_75, 0))
									{
										if (func_168(bLocal_77))
										{
											UNK_0xF821F915BC24D246(bLocal_75, bLocal_77, -1);
											UNK_0x9DD8618CA5BF832D(bLocal_75, 310, true);
										}
									}
									UNK_0xF895E10BF4C72645(bLocal_75, 1, 0);
								}
								else
								{
									UNK_0x9DD8618CA5BF832D(bLocal_75, 310, true);
								}
							}
						}
					}
				}
				else if (UNK_0x69DF961355195C3C(iLocal_302))
				{
					if (iLocal_316 == 0)
					{
						if (UNK_0xA45992A6CE82FB43(iLocal_302) >= 0.86f)
						{
							UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
							UNK_0xC6EB89C59F2AF6B8(UNK_0x16F2683693E537C9(), bLocal_306, bLocal_309, 1000f, -2f, -1, 1048576, UNK_0xA45992A6CE82FB43(iLocal_302), 0, 0, 0);
							UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 1, 0);
							iLocal_316 = 1;
						}
					}
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_75))
					{
						if (UNK_0xA45992A6CE82FB43(iLocal_302) > 0.847f)
						{
							if (UNK_0xB4ECF989E2C1DAC8(bLocal_75, bLocal_306, bLocal_308, 2))
							{
								UNK_0x1BF8B16C32704027(bLocal_75, -1000f, 0);
								if (!UNK_0x405E212DDE472467(bLocal_75, 0))
								{
									if (func_168(bLocal_77))
									{
										UNK_0xF821F915BC24D246(bLocal_75, bLocal_77, -1);
										UNK_0x9DD8618CA5BF832D(bLocal_75, 310, true);
									}
								}
								UNK_0xF895E10BF4C72645(bLocal_75, 1, 0);
							}
							else
							{
								UNK_0x9DD8618CA5BF832D(bLocal_75, 310, true);
							}
						}
					}
				}
				if (((UNK_0x69DF961355195C3C(iLocal_302) && UNK_0xA45992A6CE82FB43(iLocal_302) >= 0.99f) || !UNK_0x69DF961355195C3C(iLocal_302)) || func_20())
				{
					if (!UNK_0x437347B10A200C4B(bLocal_77, 0) && UNK_0xB4ECF989E2C1DAC8(bLocal_77, bLocal_306, bLocal_307, 3))
					{
						UNK_0x4E6D1F54D3FBC5B1(bLocal_77, bLocal_306, bLocal_307, 1f);
					}
					if (UNK_0x69DF961355195C3C(iLocal_302))
					{
						UNK_0x57E0CF9BF653D99A(iLocal_302, 1f);
					}
					if (bLocal_342)
					{
						vVar0 = { UNK_0x1BB04F10296A1C5E(bLocal_306, bLocal_309, vLocal_310, vLocal_313, 1f, 2) };
						UNK_0xE82754C349C7B581(vVar0, &(vVar0.f_2), 0, 0);
						UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vVar0, 1, 0, 0, 1);
						vVar0 = { UNK_0xEEB20D14BD38615E(bLocal_306, bLocal_309, vLocal_310, vLocal_313, 1f, 2) };
						UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), vVar0.z);
						UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
						UNK_0x2FB9A57162E54BAB(0f);
					}
					UNK_0xBD453909DC26A85D(UNK_0x16F2683693E537C9(), joaat("MOTIONSTATE_IDLE"), true, 0, 1);
					if (!UNK_0x405E212DDE472467(bLocal_75, 0))
					{
						if (func_168(bLocal_77))
						{
							UNK_0xF821F915BC24D246(bLocal_75, bLocal_77, -1);
							UNK_0x9DD8618CA5BF832D(bLocal_75, 310, true);
						}
					}
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_75))
					{
						if (UNK_0x405E212DDE472467(bLocal_75, 0))
						{
							if (func_168(bLocal_77))
							{
								UNK_0xF50D17A63556B8D4(bLocal_77, false, 0, 0f);
								UNK_0x2EA10555AEBEA739(bLocal_77, false, 1, 1, 1);
								iLocal_305 = UNK_0x1C0640BA9A7327B3();
								iLocal_51 = 5;
							}
						}
					}
				}
				break;
			case 5:
				UNK_0x3FC8DBCC154CA56B();
				if ((UNK_0x1C0640BA9A7327B3() - iLocal_305) > 100)
				{
					if (func_3(bLocal_75) && func_168(bLocal_77))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_78);
						UNK_0xD1F0F33C375B8446(false, bLocal_77, 9, 1000);
						UNK_0xE072601B4380E9DF(false, bLocal_77, 25f, iLocal_299);
						UNK_0x75ABDC5F81978924(iLocal_78);
						UNK_0x78ADC381772E3D54(bLocal_75, iLocal_78);
						UNK_0xF82EA857DA10E0CD(&iLocal_78);
						UNK_0x9DD8618CA5BF832D(bLocal_75, 310, true);
					}
					func_35(0, 1, 1, 0, 0, 0);
					if (bLocal_342)
					{
						if (UNK_0x9F4FE516EAACCFC5(iLocal_79))
						{
							UNK_0xE3BB8E05FCEB3FBE(iLocal_79, false);
							UNK_0x9A8DDC7C522F5BF5(iLocal_79, 0);
						}
						UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
						SYSTEM::WAIT(750);
						UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
						UNK_0x2FB9A57162E54BAB(0f);
						func_18(500, 1);
					}
					else
					{
						UNK_0x04B065D07D2FB5B9(0, 0, 3, 0);
						UNK_0xE3BB8E05FCEB3FBE(iLocal_79, false);
					}
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
					func_17(&bLocal_77);
					func_5(func_10(), 4, 5);
					return true;
				}
				else if (func_3(bLocal_75))
				{
					UNK_0x9DD8618CA5BF832D(bLocal_75, 310, true);
				}
				break;
		}
	}
	return false;
}

void func_5(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_111638.f_2358.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_111638.f_2358.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		case 3:
			iVar1 = 11511;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				case 3:
					iVar1 = 74;
					break;
				case 2:
					iVar1 = 73;
					break;
				case 4:
					iVar1 = 75;
					break;
				case 5:
					iVar1 = 76;
					break;
				case 6:
					iVar1 = 77;
					break;
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 11511)
			{
				bVar0 = func_9(iVar1, -1, 0);
				bVar0 = (bVar0 + iParam2);
				if (bVar0 > 100)
				{
					bVar0 = 100;
				}
				func_6(iVar1, bVar0, -1, 1, 0);
			}
			break;
	}
}

void func_6(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_8();
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

int func_8()
{
	return Global_1312745;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_7(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_11()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_15(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_14(UNK_0x16F2683693E537C9());
			if (func_13(iVar0) && (!func_12(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_13(Global_111638.f_2358.f_539.f_4321))
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

bool func_12(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_17(bool bParam0)
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

void func_18(int iParam0, bool bParam1)
{
	if (UNK_0x757EF87A33649210() || UNK_0xD0BB2359EC70FC37())
	{
		if (!UNK_0x7BCE0E6DD4A1F749())
		{
			UNK_0x82E51BCA72537B6C(iParam0);
		}
	}
	if (bParam1)
	{
		while (!UNK_0x0F1CCD77290EE12F())
		{
			SYSTEM::WAIT(0);
		}
	}
}

bool func_19()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

bool func_20()
{
	bool bVar0;

	bVar0 = joaat("PEYOTE");
	if (bLocal_301 == 2)
	{
		bVar0 = joaat("ROCOTO");
	}
	if (func_21(1000))
	{
		if (UNK_0x1F04E7FA44219580(bVar0))
		{
			UNK_0xE3BB8E05FCEB3FBE(iLocal_79, false);
			UNK_0x53491B90E4FD0E56(500);
			while (UNK_0xD0BB2359EC70FC37())
			{
				UNK_0x3FC8DBCC154CA56B();
				SYSTEM::WAIT(0);
			}
			bLocal_342 = true;
			return true;
		}
	}
	if (UNK_0x757EF87A33649210())
	{
		if (UNK_0x1F04E7FA44219580(bVar0))
		{
			bLocal_342 = true;
			return true;
		}
	}
	return false;
}

bool func_21(int iParam0)
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
			if (func_22())
			{
				Global_27 = UNK_0x1C0640BA9A7327B3();
				return true;
			}
		}
	}
	return false;
}

bool func_22()
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

float func_23(bool bParam0, vector3 vParam1, int iParam4)
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

void func_24(int iParam0)
{
	if (func_30())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_29(0))
		{
			func_25(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_25(int iParam0)
{
	if (func_30())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_28())
		{
			func_27(1, 1);
		}
		else
		{
			func_27(0, 0);
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
	if (!func_26())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_26()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_27(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_29(0))
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

bool func_28()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_29(int iParam0)
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

bool func_30()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_31()
{
	Global_19671 = 0;
	func_32();
}

void func_32()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

bool func_33(bool bParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_34(bParam0);
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

void func_34(bool bParam0)
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

void func_35(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_42(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_26())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_41(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_42(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_41(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_39(UNK_0xD803B885F5E47A62())) && !func_37(UNK_0xD803B885F5E47A62(), 0)) && !func_36()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_39(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_36()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_37(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_38(-1, 0) == 8;
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

int func_38(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
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

bool func_39(bool bParam0)
{
	if (func_37(bParam0, 0))
	{
		return true;
	}
	if (func_40())
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

bool func_40()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_41(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

void func_42(int iParam0)
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

void func_43(vector3 vParam0, var uParam3, var uParam4)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;

	bVar0 = false;
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) - vParam0 };
		iVar4 = UNK_0xE7D606C557C86100(vVar1.x, vVar1.y);
		if (func_44(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), iVar4, 15f))
		{
			bVar0 = true;
		}
		vVar1 = { vParam0 - UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		iVar4 = UNK_0xE7D606C557C86100(vVar1.x, vVar1.y);
		if (func_44(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), iVar4, 15f))
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

bool func_44(bool bParam0, float fParam1, float fParam2)
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

bool func_45(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;

	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return true;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return true;
	}
	return false;
}

bool func_46(bool bParam0, bool bParam1, bool bParam2)
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

bool func_47(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_61(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_48(sParam2, iParam3, 0);
}

int func_48(char* sParam0, int iParam1, bool bParam2)
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
					func_60();
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
		if (func_59(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_58();
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
				func_57();
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
				if (func_56())
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
			if (func_26())
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
			func_55();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_54();
		func_49();
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
		func_60();
	}
	return 0;
}

void func_49()
{
	if (!func_50())
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

bool func_50()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_53())
	{
		return false;
	}
	if (func_51(UNK_0xD803B885F5E47A62()))
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

bool func_51(int iParam0)
{
	return func_52(iParam0, 20);
}

bool func_52(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_53()
{
	return -1;
}

void func_54()
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

void func_55()
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

bool func_56()
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

void func_57()
{
	if (func_12(14))
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
		Global_19486 = func_10();
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

void func_58()
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

bool func_59(bool bParam0, int iParam1)
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

void func_60()
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

void func_61(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_62()
{
	if (UNK_0xEB6A8945D1AC98A1(bLocal_76))
	{
		return true;
	}
	else if (func_168(bLocal_77))
	{
		if (!UNK_0x12DE711B1C681E9E(bLocal_76, bLocal_77, 10f, 10f, 10f, 0, 1, 0))
		{
			return true;
		}
	}
	return false;
}

void func_63()
{
	float fVar0;
	bool bVar1;
	bool bVar2;

	if (func_168(bLocal_77))
	{
		fVar0 = UNK_0x6EE94F60DA2A2273(bLocal_77);
		if (fVar0 > 0f && fVar0 < 650f)
		{
			bVar2 = true;
		}
		else if (fVar0 > 650f && fVar0 < 950f)
		{
		}
		else
		{
			bVar1 = true;
		}
		if (bVar1 && UNK_0xB8BCFE7E6CA4F9ED(bLocal_77))
		{
			sLocal_121 = sLocal_293;
		}
		else if (bVar2)
		{
			sLocal_121 = sLocal_292;
		}
		else
		{
			sLocal_121 = sLocal_291;
		}
	}
}

void func_64(var uParam0)
{
	*uParam0 = -99;
}

int func_65(bool bParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_66(bParam0, bParam1, 145);
}

int func_66(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_67(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_67(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_68(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_68(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_68(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_68(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_69(bool bParam0)
{
	bool bVar0;
	struct<8> Var1;

	if (UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		UNK_0x142CC44DB769B57E(bParam0);
		bVar0 = true;
	}
	if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1))
	{
		UNK_0x142CC44DB769B57E(&(bParam0->f_1));
		bVar0 = true;
	}
	if (UNK_0xC844350D5D58C99A(bParam0->f_7))
	{
		if (!UNK_0x437347B10A200C4B(bParam0->f_7, 0))
		{
			if (UNK_0x3C583F939C836C5C(bParam0->f_7))
			{
				UNK_0xA29E145196B9739D(bParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*bParam0 = { Var1 };
	}
}

int func_70(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = UNK_0xA30EC016B12C03E4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (!UNK_0x3C583F939C836C5C(bParam0))
		{
			if (bParam8 == -1)
			{
				UNK_0xA29E145196B9739D(bParam0, 1);
			}
			else
			{
				UNK_0xE23B4401F4442A7E(bParam0, 1, bParam8);
			}
			uParam1->f_7 = bParam0;
			UNK_0x03E7282D82C7B3B6(bParam0, iParam2);
			UNK_0xF8BE15A7B963DB56(bParam0, fParam6);
			if (UNK_0xE4EDC4B0E92C078B(*uParam1))
			{
				UNK_0x2A065371C9D96655(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			UNK_0xFABCB9076292E3BA(bParam0, iParam9);
		}
		UNK_0xF947FFD8DA795A7F(bParam0, bParam4);
		UNK_0xB46A36D2F28E60DE(bParam0, bParam5);
		*uParam1 = UNK_0x380B922C6BB1F223(bParam0);
		if (!iParam9 == -1)
		{
			if (UNK_0xE4EDC4B0E92C078B(*uParam1))
			{
				if (!bParam8 == -1)
				{
					UNK_0x61755AC17D8F538E(*uParam1, bParam8);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam7))
				{
					UNK_0x64399B11CDD5A727("STRING");
					if (bParam10)
					{
						UNK_0xD06AC7C87A34A6AD(bParam7);
					}
					else
					{
						UNK_0x6B012227B3921E18(bParam7);
					}
					UNK_0x4FA118D51B4F2476(*uParam1);
				}
				UNK_0x2A065371C9D96655(*uParam1, 7);
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_6, 2))
		{
			if (UNK_0xE4EDC4B0E92C078B(*uParam1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_6), 2);
			}
		}
		if (UNK_0x405E212DDE472467(bParam0, 0))
		{
			uParam1->f_1 = UNK_0x498C79575FE5BBCE(bParam0);
			if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_6, 3))
			{
				if (UNK_0xE4EDC4B0E92C078B(uParam1->f_1))
				{
					if (!bParam8 == -1)
					{
						UNK_0x61755AC17D8F538E(uParam1->f_1, bParam8);
					}
					if (!UNK_0xEA6BC48857E0AC4C(bParam7))
					{
						UNK_0x64399B11CDD5A727("STRING");
						if (bParam10)
						{
							UNK_0xD06AC7C87A34A6AD(bParam7);
						}
						else
						{
							UNK_0x6B012227B3921E18(bParam7);
						}
						UNK_0x4FA118D51B4F2476(uParam1->f_1);
					}
					UNK_0x2A065371C9D96655(uParam1->f_1, 7);
					UNK_0x5D96D8530B3D0904(&(uParam1->f_6), 3);
				}
			}
			else if (!UNK_0xE4EDC4B0E92C078B(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				UNK_0x0674E58A79778E99(&(uParam1->f_6), 3);
			}
		}
		else if (UNK_0xE4EDC4B0E92C078B(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			UNK_0x0674E58A79778E99(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_71(var uParam0, bool bParam1, int iParam2)
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
		if (func_72(uParam0->f_3))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
	if (!UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (func_72(bVar0))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
}

bool func_72(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_73()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_76))
	{
		UNK_0xAFF39FB306F8E232(bLocal_76, 2, false);
		UNK_0xAFF39FB306F8E232(bLocal_76, 6, false);
		UNK_0xAFF39FB306F8E232(bLocal_76, 3, true);
		UNK_0xAFF39FB306F8E232(bLocal_76, 1, false);
		UNK_0x6C3AE6E278DB3D0E(bLocal_76, UNK_0x16F2683693E537C9(), 0, 16);
		UNK_0x11AD11297DC58CC7(bLocal_76, false);
		UNK_0x71199B01895C6202(UNK_0x134B62B726CEC8E6(bLocal_76));
	}
	else
	{
		UNK_0x71199B01895C6202(UNK_0x134B62B726CEC8E6(bLocal_76));
	}
	if (func_168(bLocal_77))
	{
		UNK_0x71EDC33E5A423750(bLocal_77, 1);
	}
}

int func_74()
{
	if (func_168(bLocal_77))
	{
		if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_77, 40f, 40f, 10f, 0, 1, 0))
		{
			if (bLocal_81)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_76))
				{
					if (!bLocal_298)
					{
						if (!UNK_0xE147126C9AD09A60(bLocal_77))
						{
							UNK_0xFFDDE8CC59EB6D40(bLocal_76, UNK_0x16F2683693E537C9(), false, 0f, 0f, 0f, 40f, 100, 1, -753768974);
							bLocal_298 = true;
						}
					}
					if (UNK_0x1C0640BA9A7327B3() > iLocal_303 + 7000)
					{
						if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_77, 20f, 20f, 10f, 0, 1, 0))
						{
							if (func_47(&Local_122, cLocal_294, sLocal_289, 4, 0, 0, 0))
							{
								iLocal_303 = UNK_0x1C0640BA9A7327B3();
							}
						}
					}
					UNK_0xE910A68AA670B4AA(bLocal_77);
					UNK_0x432CE6C256EE1D4A(bLocal_77);
					bLocal_81 = false;
				}
			}
			if (UNK_0xB87D13D0C064E9D1(bLocal_77, UNK_0x16F2683693E537C9(), 1))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_76))
				{
					func_47(&Local_122, cLocal_294, sLocal_289, 4, 0, 0, 0);
				}
				iLocal_82++;
				bLocal_81 = true;
			}
			if (iLocal_82 > 10)
			{
				return 1;
			}
		}
		else
		{
			bLocal_298 = false;
			bLocal_81 = false;
		}
	}
	return 0;
}

int func_75()
{
	if (func_168(bLocal_77))
	{
		if (((UNK_0x464B3D84B739AE72(bLocal_77, false, 0) || UNK_0x464B3D84B739AE72(bLocal_77, true, 0)) || UNK_0x464B3D84B739AE72(bLocal_77, 4, 0)) || UNK_0x464B3D84B739AE72(bLocal_77, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_76()
{
	if (func_168(bLocal_77) && UNK_0xE4EDC4B0E92C078B(iLocal_64))
	{
		func_77(&uLocal_330, bLocal_77, 0, 0, 1, 1, 1);
	}
}

void func_77(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	func_78(uParam0, bParam1, 0f, 0f, 0f, iParam2, iParam3, iParam4, iParam5, bParam6);
}

void func_78(var uParam0, bool bParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	func_79(uParam0, bParam1, vParam2, iParam5, iParam6, iParam7, iParam8, bParam9);
}

void func_79(var uParam0, bool bParam1, vector3 vParam2, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
	{
		func_71(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_80(uParam0, bParam1, vParam2, iParam5, iParam6, bParam7, iParam8, bParam9);
}

void func_80(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_72(bVar0))
	{
		func_105();
	}
	if (func_104(bParam1) && UNK_0x4FC40AB0ECCE6E18(bParam1))
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
			if (func_99(uParam0, bParam7, bParam9, 0))
			{
				func_95(uParam0, bParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_85(bVar0))
				{
					if ((UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0)) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if ((bVar1 && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
						{
							if (!func_72(bVar0))
							{
								func_84(bVar0, -1);
								uParam0->f_3 = bVar0;
								if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
								{
									func_83(1);
								}
							}
						}
					}
				}
			}
			else if (func_85(bVar0))
			{
				if (UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0))
				{
					if (((UNK_0x0A059E0DB9253280(bParam1) && bVar1) && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
					{
						if (!func_72(bVar0))
						{
							func_84(bVar0, -1);
							uParam0->f_3 = bVar0;
							if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
							{
								func_83(1);
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
				if (func_72(bParam5))
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
						func_71(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(6) == 3 || UNK_0xA4FD7964FEE91ED8(6) == 4)
					{
						func_71(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(4) == 3 || UNK_0xA4FD7964FEE91ED8(4) == 4)
					{
						func_71(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(5) == 3 || UNK_0xA4FD7964FEE91ED8(5) == 4)
					{
						func_71(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(2) == 3 || UNK_0xA4FD7964FEE91ED8(2) == 4)
					{
						func_71(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0xF3545351E9CBB11F() == 3 || UNK_0xF3545351E9CBB11F() == 4)
				{
					func_71(uParam0, bVar0, 1);
				}
			}
			if (!func_99(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_82(uParam0))
				{
					func_81(uParam0);
				}
			}
		}
	}
	else
	{
		func_71(uParam0, bVar0, 0);
	}
}

void func_81(var uParam0)
{
	if (func_104(UNK_0x16F2683693E537C9()))
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

bool func_82(var uParam0)
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

int func_83(bool bParam0)
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

void func_84(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_85(bool bParam0)
{
	if (!func_86(1, 1, 0))
	{
		if ((!UNK_0xEA6BC48857E0AC4C(bParam0) && func_72(bParam0)) || func_72("CMN_HINT"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		return false;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_83(0) < 3)
			{
				return true;
			}
			break;
		case 4:
			if (func_83(0) < 1)
			{
				return true;
			}
			break;
		case 5:
		case 15:
			if (func_83(0) < 1)
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

bool func_86(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_29(0))
	{
		return false;
	}
	if (func_94())
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
	if ((func_93() || func_92(Global_4456448.f_232883)) || func_91())
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			bVar1 = func_90(UNK_0x16F2683693E537C9(), 0);
			if (((UNK_0x137240CA2BADB0D2(bVar0, bVar1) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("APC") && bVar1 != -1)) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("AKULA") && bVar1 != -1)) || (((UNK_0x134B62B726CEC8E6(bVar0) == joaat("RIOT2") && bVar1 == 0) && func_89(bVar0, 10)) && UNK_0x0ECB5CA5140957AD(bVar0, 10) != -1))
			{
				return false;
			}
		}
	}
	if (Global_1686722)
	{
		return false;
	}
	if (func_87(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_87(bool bParam0)
{
	if (bParam0 != func_53())
	{
		if (func_88(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && bParam0 == UNK_0xD803B885F5E47A62()) && func_88(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

bool func_88(bool bParam0, bool bParam1, bool bParam2)
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

bool func_89(bool bParam0, int iParam1)
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

bool func_90(bool bParam0, int iParam1)
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

bool func_91()
{
	return Global_2450632.f_17;
}

bool func_92(int iParam0)
{
	return iParam0 == 51;
}

bool func_93()
{
	return Global_2450632.f_16;
}

bool func_94()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_95(var uParam0, bool bParam1, vector3 vParam2, bool bParam5)
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
		func_71(uParam0, 0, 0);
	}
	if (func_98(vParam2, 0f, 0f, 0f, 0))
	{
		if (UNK_0xEC560E589DF8370E(bParam1))
		{
			bVar0 = UNK_0x940C1429253D3B1B(bParam1);
			if (!UNK_0x405E212DDE472467(bVar0, 0))
			{
				if (UNK_0x34BFC6F0CB887BC2(bVar0))
				{
					if (!func_96())
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

int func_96()
{
	return func_97(UNK_0xD803B885F5E47A62());
}

int func_97(bool bParam0)
{
	if (UNK_0x134B62B726CEC8E6(UNK_0x9539D44F3E4492F6(bParam0)) == joaat("MP_F_FREEMODE_01"))
	{
		return 1;
	}
	return 0;
}

bool func_98(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_99(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_103(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_102(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_102(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_103(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_82(uParam0))
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
						if (!func_103(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_102(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_102(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_103(bParam1, bParam2, bParam3))
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
					if (!func_103(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_102(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_102(bParam1, bParam2, bParam3) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
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
				else if (!func_103(bParam1, bParam2, bParam3))
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
						if (func_101(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_100(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || func_100(bParam1, bParam2, bParam3))
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
					else if (func_101(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		case 4:
			if (!func_82(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_86(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_105();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_100(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_86(bParam0, bParam1, bParam2))
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

bool func_101(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_86(bParam0, bParam1, bParam2))
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

bool func_102(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_86(bParam0, bParam1, bParam2))
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

bool func_103(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_86(bParam0, bParam1, bParam2))
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

bool func_104(bool bParam0)
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

void func_105()
{
	UNK_0x5D96D8530B3D0904(&Global_7357, 4);
}

int func_106(bool bParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_107(bParam0, bParam1, 0);
}

int func_107(bool bParam0, bool bParam1, bool bParam2)
{
	return func_67(bParam0, !bParam1, bParam2);
}

bool func_108()
{
	bool bVar0;

	bVar0 = 300f;
	if (bLocal_301 == 1)
	{
		bVar0 = 220f;
	}
	if (func_168(bLocal_77))
	{
		func_109(iLocal_64, bLocal_77, bVar0, 1061158912 /* Float: 0.75f */, 0);
		if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_77, bVar0, bVar0, 100f, 0, 1, 0))
		{
			return true;
		}
		else if (!UNK_0x03068588A1FCED1A(bLocal_77))
		{
			return true;
		}
	}
	return false;
}

void func_109(int iParam0, bool bParam1, bool bParam2, float fParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;

	fVar2 = (bParam2 * fParam3);
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
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (bParam2 - fVar2))));
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
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (bParam2 - fVar2)));
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

bool func_110()
{
	if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_77, 0) && UNK_0x5B17F10380E80E5B(bLocal_77))
	{
		return true;
	}
	return false;
}

void func_111()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_75) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		switch (iLocal_50)
		{
			case 0:
				iLocal_58 = iLocal_58;
				if (!UNK_0x405E212DDE472467(bLocal_75, 0))
				{
					if (bLocal_301 == 1)
					{
						if (func_118())
						{
							iLocal_50 = 1;
						}
					}
					else if (!UNK_0x869EFD0BC0868856(bLocal_75) && !UNK_0xA48EBBEA418ADC94(bLocal_75))
					{
						UNK_0x0C8C0C840C2D1AD2(bLocal_75, UNK_0x16F2683693E537C9(), -1, 0, 2);
						if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -539.4566f, -2094.491f, 6.967173f, -468.4296f, -2152.549f, 18.99127f, 26.75f, 0, true, 0))
						{
							UNK_0xE655C47E46F9A7E4(bLocal_75, 345f, 0);
							iLocal_50 = 1;
						}
						else
						{
							UNK_0xDD353D0E9C789D0E(&iLocal_78);
							UNK_0xC6EB89C59F2AF6B8(false, bLocal_84, "arms_waving", 2f, -8f, -1, 0, false, 0, 0, 0);
							UNK_0xC6EB89C59F2AF6B8(false, bLocal_84, "arms_waving", 8f, -8f, -1, 0, false, 0, 0, 0);
							UNK_0xC6EB89C59F2AF6B8(false, bLocal_84, "arms_waving", 8f, -2f, -1, 0, false, 0, 0, 0);
							UNK_0x75ABDC5F81978924(iLocal_78);
							UNK_0x78ADC381772E3D54(bLocal_75, iLocal_78);
							UNK_0xF82EA857DA10E0CD(&iLocal_78);
							iLocal_304 = UNK_0x1C0640BA9A7327B3();
							iLocal_50 = 2;
						}
					}
				}
				break;
			case 1:
				if (bLocal_301 == 1)
				{
					UNK_0x0C8C0C840C2D1AD2(bLocal_75, UNK_0x16F2683693E537C9(), -1, 0, 2);
					if (UNK_0xD1960163A3042274(bLocal_75, 242628503) != 1)
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_78);
						UNK_0xC6EB89C59F2AF6B8(false, bLocal_84, bLocal_86, 4f, -2f, -1, 0, false, 0, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_78);
						UNK_0x78ADC381772E3D54(bLocal_75, iLocal_78);
						UNK_0xF82EA857DA10E0CD(&iLocal_78);
						iLocal_50 = 2;
					}
				}
				else if (UNK_0x7069CC4DE1EA3FAA(bLocal_75, UNK_0x16F2683693E537C9(), 60f))
				{
					if (UNK_0xD1960163A3042274(bLocal_75, 242628503) != 1)
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_78);
						UNK_0xC6EB89C59F2AF6B8(false, bLocal_84, "arms_waving", 2f, -8f, -1, 0, false, 0, 0, 0);
						if (bLocal_61 == 0)
						{
							UNK_0xC6EB89C59F2AF6B8(false, bLocal_84, "pointing", 8f, -4f, -1, 0, false, 0, 0, 0);
						}
						UNK_0x75ABDC5F81978924(iLocal_78);
						UNK_0x78ADC381772E3D54(bLocal_75, iLocal_78);
						UNK_0xF82EA857DA10E0CD(&iLocal_78);
						iLocal_50 = 2;
					}
				}
				if (func_118())
				{
					if (func_117())
					{
					}
				}
				break;
			case 2:
				if (func_118())
				{
					if (func_117())
					{
					}
				}
				if (bLocal_301 == 2)
				{
					if (!UNK_0x7069CC4DE1EA3FAA(bLocal_75, UNK_0x16F2683693E537C9(), 60f) && !func_115(bLocal_75, -875674219))
					{
						UNK_0xF96A174EE26D7588(bLocal_75, UNK_0x16F2683693E537C9(), 0);
					}
					if (func_114(bLocal_75, UNK_0x16F2683693E537C9(), 1) < 25f)
					{
						if (!func_19())
						{
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_304) > 6000)
							{
								func_113();
							}
						}
					}
				}
				if (UNK_0xD1960163A3042274(bLocal_75, 242628503) != 1 && !func_115(bLocal_75, -875674219))
				{
					if (bLocal_301 == 1)
					{
						vLocal_93 = { -2260.1f, 4274.24f, 44.9f };
						if (!UNK_0x5A91F08DF773C39D(bLocal_75, vLocal_93, 1.5f, 1.5f, 1.5f, false, true, 0))
						{
							if (UNK_0xD1960163A3042274(bLocal_75, 242628503) == 7)
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_78);
								UNK_0x80AA372E04ED318D(false, vLocal_93, 1f, 20000, bLocal_106, 1056964608 /* Float: 0.5f */);
								UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
								UNK_0x75ABDC5F81978924(iLocal_78);
								UNK_0x78ADC381772E3D54(bLocal_75, iLocal_78);
								UNK_0xF82EA857DA10E0CD(&iLocal_78);
							}
						}
						else if (!UNK_0xB4ECF989E2C1DAC8(bLocal_75, bLocal_83, "waiting", 3))
						{
							UNK_0xC6EB89C59F2AF6B8(bLocal_75, bLocal_83, "waiting", 4f, -4f, -1, 0, false, 0, 0, 0);
							if (func_114(bLocal_75, UNK_0x16F2683693E537C9(), 1) < 25f)
							{
								func_113();
							}
						}
					}
					else if (!UNK_0xB4ECF989E2C1DAC8(bLocal_75, bLocal_83, "waiting", 3))
					{
						UNK_0xC6EB89C59F2AF6B8(bLocal_75, bLocal_83, "waiting", 4f, -4f, -1, 0, false, 0, 0, 0);
					}
				}
				break;
			case 3:
				if (!UNK_0xC7E2E6167C09468B(bLocal_75, UNK_0x16F2683693E537C9()))
				{
					UNK_0x0C8C0C840C2D1AD2(bLocal_75, UNK_0x16F2683693E537C9(), -1, 0, 2);
				}
				if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_75, 40f, 40f, 10f, 0, 1, 0) && !UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_75, 9f, 9f, 9f, 0, 1, 0))
				{
					if (func_112())
					{
						if (bLocal_59)
						{
							if (bLocal_301 == 1)
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_78);
								UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
								UNK_0xC6EB89C59F2AF6B8(false, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, false, 0, 0, 0);
								UNK_0x75ABDC5F81978924(iLocal_78);
								UNK_0x78ADC381772E3D54(bLocal_75, iLocal_78);
								UNK_0xF82EA857DA10E0CD(&iLocal_78);
								bLocal_59 = false;
								iLocal_304 = UNK_0x1C0640BA9A7327B3();
							}
							else
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_78);
								UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
								UNK_0xC6EB89C59F2AF6B8(false, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, false, 0, 0, 0);
								UNK_0x75ABDC5F81978924(iLocal_78);
								UNK_0x78ADC381772E3D54(bLocal_75, iLocal_78);
								UNK_0xF82EA857DA10E0CD(&iLocal_78);
								bLocal_59 = false;
								iLocal_304 = UNK_0x1C0640BA9A7327B3();
							}
						}
						else if (!UNK_0xB4ECF989E2C1DAC8(bLocal_75, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3))
						{
							if (UNK_0xD1960163A3042274(bLocal_75, 242628503) == 7)
							{
								if (!UNK_0x7069CC4DE1EA3FAA(bLocal_75, UNK_0x16F2683693E537C9(), 45f))
								{
									UNK_0xDD353D0E9C789D0E(&iLocal_78);
									UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
									UNK_0x75ABDC5F81978924(iLocal_78);
									UNK_0x78ADC381772E3D54(bLocal_75, iLocal_78);
									UNK_0xF82EA857DA10E0CD(&iLocal_78);
								}
								else if ((UNK_0x1C0640BA9A7327B3() - iLocal_304) > 6000)
								{
									bLocal_59 = true;
								}
							}
						}
						else if (!UNK_0x7069CC4DE1EA3FAA(bLocal_75, UNK_0x16F2683693E537C9(), 70f))
						{
							UNK_0xA3BF0AA5A2608191(bLocal_75);
							UNK_0xDD353D0E9C789D0E(&iLocal_78);
							UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
							UNK_0x75ABDC5F81978924(iLocal_78);
							UNK_0x78ADC381772E3D54(bLocal_75, iLocal_78);
							UNK_0xF82EA857DA10E0CD(&iLocal_78);
							iLocal_304 += 4000;
						}
					}
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_76))
					{
						UNK_0xF3268524E9BE6D6E(bLocal_76, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
						UNK_0xFADC0A217229F6B5(bLocal_76, true);
						UNK_0x6DAD7906B73F064D(&bLocal_76);
					}
				}
				else
				{
					if (bLocal_301 == 1)
					{
						vLocal_93 = { -2260.1f, 4274.24f, 44.9f };
					}
					else if (bLocal_61)
					{
						vLocal_93 = { -483.4162f, -2160.874f, 8.359f };
					}
					else
					{
						vLocal_93 = { -485.9905f, -2153.542f, 8.1999f };
					}
					if (!UNK_0x5A91F08DF773C39D(bLocal_75, vLocal_93, 4f, 4f, 4f, false, true, 0))
					{
						if (UNK_0xD1960163A3042274(bLocal_75, 2106541073) == 7)
						{
							UNK_0x80AA372E04ED318D(bLocal_75, vLocal_93, 1f, 20000, bLocal_106, 1056964608 /* Float: 0.5f */);
						}
					}
					else if (!UNK_0x7069CC4DE1EA3FAA(bLocal_75, UNK_0x16F2683693E537C9(), 50f))
					{
						UNK_0xF96A174EE26D7588(bLocal_75, UNK_0x16F2683693E537C9(), -1);
					}
					bLocal_59 = true;
				}
				break;
			case 4:
				break;
		}
	}
	if (func_167(1))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_75))
		{
			UNK_0xF3268524E9BE6D6E(bLocal_75, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
			UNK_0xFADC0A217229F6B5(bLocal_75, true);
			SYSTEM::WAIT(0);
		}
		func_237();
	}
}

bool func_112()
{
	if (!bLocal_296)
	{
		if (func_47(&Local_122, cLocal_294, sLocal_290, 4, 0, 0, 0))
		{
			bLocal_296 = true;
		}
	}
	return bLocal_296;
}

bool func_113()
{
	if (!bLocal_297)
	{
		if (func_47(&Local_122, cLocal_294, sLocal_288, 4, 0, 0, 0))
		{
			bLocal_297 = true;
		}
	}
	return bLocal_297;
}

float func_114(bool bParam0, bool bParam1, int iParam2)
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

bool func_115(bool bParam0, int iParam1)
{
	if (func_116(bParam0))
	{
		if (UNK_0xD1960163A3042274(bParam0, iParam1) == 1 || UNK_0xD1960163A3042274(bParam0, iParam1) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_116(bool bParam0)
{
	if (func_3(bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_117()
{
	if (!bLocal_295)
	{
		if (SYSTEM::TIMERA() > 2000)
		{
			if (func_47(&Local_122, cLocal_294, sLocal_287, 4, 0, 0, 0))
			{
				bLocal_295 = true;
			}
		}
	}
	return bLocal_295;
}

bool func_118()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_76) && !UNK_0xEB6A8945D1AC98A1(bLocal_75))
	{
		if (func_168(bLocal_77))
		{
			if (UNK_0x82CCEAB29E9451DD(bLocal_76, bLocal_77))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_119(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_120(bool bParam0)
{
	int iVar0;

	if (bLocal_301 == 2)
	{
		iVar0 = func_10();
		switch (iVar0)
		{
			case 0:
				while (!func_143(319357731, 6, 1, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(bLocal_75))
					{
						UNK_0x9DD8618CA5BF832D(bLocal_75, 310, true);
					}
					SYSTEM::WAIT(0);
				}
				break;
			case 1:
				while (!func_143(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(bLocal_75))
					{
						UNK_0x9DD8618CA5BF832D(bLocal_75, 310, true);
					}
					SYSTEM::WAIT(0);
				}
				break;
			case 2:
				while (!func_143(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(bLocal_75))
					{
						UNK_0x9DD8618CA5BF832D(bLocal_75, 310, true);
					}
					SYSTEM::WAIT(0);
				}
				break;
		}
	}
	if (bParam0)
	{
		func_142(8);
	}
	func_124(17, bLocal_301);
	func_121();
	func_237();
}

void func_121()
{
	func_122();
}

int func_122()
{
	if (func_123(0))
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

bool func_123(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_124(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_140();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_139(iParam0))
	{
		func_138(iParam0, bParam1);
		if (!func_137(51))
		{
			func_133("RE_REWARD", 1, 0, 4000, 10000, func_136(), 0, 138, 0);
			func_132(51);
		}
		if (func_131(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_130(iParam0, bParam1) != 322)
		{
			func_125(func_130(iParam0, bParam1), vLocal_45.x, vLocal_45.y);
		}
		Global_111626 = bParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_142(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_142(7);
			}
			else
			{
				func_142(1);
			}
		}
	}
}

void func_125(int iParam0, var uParam1, var uParam2)
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
		func_129((891 + iParam0), 1, -1, 1);
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
		func_126();
	}
}

void func_126()
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
		func_128(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_127() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_122();
				}
			}
		}
	}
}

int func_127()
{
	return Global_30768;
}

int func_128(int iParam0, bool bParam1)
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

int func_129(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_8();
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

int func_130(int iParam0, bool bParam1)
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

bool func_131(int iParam0)
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

void func_132(int iParam0)
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

void func_133(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_134(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_134(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_135();
	}
}

void func_135()
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

int func_136()
{
	func_11();
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

bool func_137(int iParam0)
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

void func_138(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), bParam1);
}

int func_139(int iParam0)
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

int func_140()
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, UNK_0xBB0808A181D4745C(), 64);
	iVar16 = func_141(Var0);
	return iVar16;
}

int func_141(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_142(int iParam0)
{
	Global_111624 = iParam0;
}

bool func_143(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	struct<10> Var10;
	int iVar20;
	int iVar21;

	if (func_123(0))
	{
		return false;
	}
	if (iParam4 < 0)
	{
		return false;
	}
	if (iParam5 < 0)
	{
		return false;
	}
	if (iParam6 == 76)
	{
		return false;
	}
	if (iParam7 == 235)
	{
		return false;
	}
	if (bParam3 < 3)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam2, bParam3))
		{
			return false;
		}
	}
	if (bParam2 < 1 || bParam2 > 7)
	{
		return false;
	}
	if (Global_111638.f_7683.f_866 < 10)
	{
		Var0 = iParam0;
		Var0.f_3 = func_151(iParam1);
		Var0.f_4 = (UNK_0x1C0640BA9A7327B3() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = bParam2;
		Var0.f_6 = bParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		UNK_0x0674E58A79778E99(&(Var0.f_1), false);
		Global_111638.f_7683.f_765[Global_111638.f_7683.f_866 /*10*/] = { Var0 };
		Global_111638.f_7683.f_866++;
		return true;
	}
	else
	{
		Var10 = { func_150(iParam0, iParam1, bParam2, bParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar20 = 0;
		func_149(&iVar20);
		iVar21 = func_148(Var10, Global_111638.f_7683.f_765[iVar20 /*10*/]);
		if (iVar21 == 2)
		{
			func_146(Global_111638.f_7683.f_765[iVar20 /*10*/]);
			Global_111638.f_7683.f_765[iVar20 /*10*/] = { Var10 };
			func_145(&Var10);
			return true;
		}
		else if (iVar21 == 1)
		{
			if (func_144(Var10))
			{
				func_146(Global_111638.f_7683.f_765[iVar20 /*10*/]);
				Global_111638.f_7683.f_765[iVar20 /*10*/] = { Var10 };
				func_145(&Var10);
				return true;
			}
			else
			{
				if (!func_144(Global_111638.f_7683.f_765[iVar20 /*10*/]))
				{
					Global_111638.f_7683.f_765[iVar20 /*10*/] = { Var10 };
					func_145(&Var10);
					return true;
				}
				func_145(&Var10);
				return true;
			}
		}
		else
		{
			func_146(Var10);
			func_145(&Var10);
			return true;
		}
	}
	return false;
}

bool func_144(struct<9> Param0, var uParam9)
{
	if (Param0.f_8 == 0)
	{
		return false;
	}
	return true;
}

void func_145(var uParam0)
{
	struct<10> Var0;

	*uParam0 = { Var0 };
}

void func_146(struct<10> Param0)
{
	if (func_144(Param0))
	{
		func_147(Param0.f_8, 0);
	}
}

void func_147(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_111638.f_8608[iParam0] = 1;
	Global_111638.f_8608.f_236[iParam0] = (UNK_0x1C0640BA9A7327B3() + iParam1);
}

int func_148(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, struct<4> Param10, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19)
{
	int iVar0;
	int iVar1;

	iVar0 = Param0.f_3;
	iVar1 = Param10.f_3;
	if (iVar0 > iVar1)
	{
		return 2;
	}
	if (iVar0 < iVar1)
	{
		return 0;
	}
	return 1;
}

void func_149(int iParam0)
{
	int iVar0;

	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_866)
	{
		if (func_148(Global_111638.f_7683.f_765[iVar0 /*10*/], Global_111638.f_7683.f_765[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_150(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;

	Var0 = iParam0;
	Var0.f_3 = func_151(iParam1);
	Var0.f_4 = (UNK_0x1C0640BA9A7327B3() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = iParam9;
	Var0.f_2 = bParam2;
	Var0.f_6 = bParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = iParam8;
	UNK_0x0674E58A79778E99(&(Var0.f_1), false);
	return Var0;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
		case 7:
			return 4;
		case 2:
			return 3;
		case 1:
			return 2;
		case 3:
			return 1;
		case 5:
		case 6:
			return 0;
	}
	return 7;
}

void func_152(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_156(iParam0, 2, 1))
		{
			func_155(iParam0, 2, 1);
		}
	}
	else if (func_156(iParam0, 2, 1))
	{
		func_153(iParam0, 2, 1);
	}
}

void func_153(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		UNK_0x0674E58A79778E99(&(Global_98796.f_1357[iParam0]), bParam1);
	}
	else if (UNK_0x8CD06866876216F2())
	{
		if (func_127() == 0)
		{
			bVar0 = func_9(func_154(iParam0), -1, 0);
			UNK_0x0674E58A79778E99(&bVar0, bParam1);
			func_6(func_154(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
		case 1:
			return 828;
		case 2:
			return 829;
		case 3:
			return 830;
		case 4:
			return 831;
		case 5:
			return 832;
		case 6:
			return 833;
		case 7:
			return 834;
		case 8:
			return 835;
		case 9:
			return 836;
		case 10:
			return 837;
		case 11:
			return 838;
		case 12:
			return 839;
		case 13:
			return 840;
		case 14:
			return 841;
		case 15:
			return 843;
		case 16:
			return 844;
		case 17:
			return 845;
		case 18:
			return 846;
		case 19:
			return 847;
		case 20:
			return 848;
		case 21:
			return 849;
		case 22:
			return 850;
		case 23:
			return 851;
		case 24:
			return 852;
		case 25:
			return 853;
		case 26:
			return 854;
		case 27:
			return 855;
		case 28:
			return 856;
		case 29:
			return 857;
		case 30:
			return 858;
		case 31:
			return 859;
		case 32:
			return 860;
		case 33:
			return 861;
		case 34:
			return 862;
		case 35:
			return 863;
		case 36:
			return 864;
		case 37:
			return 865;
		case 38:
			return 866;
		case 39:
			return 867;
		case 40:
			return 871;
		case 41:
			return 872;
		case 42:
			return 873;
		case 43:
			return 874;
		case 44:
			return 9977;
		case 45:
			return 3808;
		case 46:
			return 5383;
		case 47:
			return 6155;
		case 48:
			return 7232;
		case 49:
			return 7878;
		case 52:
			return 8912;
		case 50:
			return 8265;
		case 51:
			return 8267;
		default:
			break;
	}
	return 11511;
}

void func_155(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_98796.f_1357[iParam0]), bParam1);
	}
	else if (UNK_0x8CD06866876216F2())
	{
		if (func_127() == 0)
		{
			bVar0 = func_9(func_154(iParam0), -1, 0);
			UNK_0x5D96D8530B3D0904(&bVar0, bParam1);
			func_6(func_154(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

bool func_156(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (bParam2)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_98796.f_1357[iParam0], bParam1);
	}
	else if (UNK_0x8CD06866876216F2())
	{
		if (func_127() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_9(func_154(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

int func_157(bool bParam0)
{
	if (func_160())
	{
		Global_111628 = 1;
		Global_111625 = UNK_0x1C0640BA9A7327B3();
		if (func_131(Global_111627))
		{
			func_158(0);
		}
		UNK_0x974531784BE14213(1, "RE_TITLE");
		if (bParam0 && func_131(Global_111627))
		{
			UNK_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_158(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_84(func_159(iParam0), -1);
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
					func_84(func_159(iParam0), -1);
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
					func_84(func_159(iParam0), -1);
					Global_111638.f_24990.f_4++;
					UNK_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

bool func_159(int iParam0)
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

bool func_160()
{
	switch (func_161(&Global_30827, 0, 5, 0, UNK_0x0D0A574C76D769AC()))
	{
		case 1:
			return true;
		case 0:
			return true;
	}
	return false;
}

int func_161(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_165(0))
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
		if (!func_163(iParam2))
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
			func_162(uParam0, iParam4);
		}
	}
	return 2;
}

void func_162(var uParam0, int iParam1)
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

bool func_163(int iParam0)
{
	return func_164(iParam0, Global_41431);
}

int func_164(int iParam0, int iParam1)
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

bool func_165(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_163(iParam0))
	{
		return false;
	}
	return true;
}

bool func_166()
{
	bool bVar0;

	switch (bLocal_301)
	{
		case 1:
			if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -2300.317f, 4179.612f, 36.98159f, -2191.317f, 4368.794f, 74.89676f, 70.75f, 0, true, 0))
			{
				return true;
			}
			break;
		case 2:
			if (bLocal_61)
			{
				bVar0 = 80f;
			}
			else
			{
				bVar0 = 80f;
			}
			if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), -487.5048f, -2157.99f, 8.2627f, bVar0, bVar0, 40f, false, true, 0))
			{
				return true;
			}
			break;
	}
	if (UNK_0x18AF0C72ABD5543B())
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_75))
		{
			if (UNK_0x0A059E0DB9253280(bLocal_75))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_167(int iParam0)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;

	vVar1 = { 6f, 6f, 6f };
	vVar4 = { -6f, -6f, -6f };
	if (UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_75))
		{
			if (iParam0 == 0 || func_114(bLocal_75, bLocal_76, 1) > 15f)
			{
				if (UNK_0xD3DCEC81D13AAFB1(UNK_0x64430C979F516F7A(bLocal_75, 31086, 0f, 0f, 0f), 4f, false))
				{
					bVar0 = true;
				}
				vVar1 = { vVar1 + UNK_0x64430C979F516F7A(bLocal_75, 31086, 0f, 0f, 0f) };
				vVar4 = { vVar4 + UNK_0x64430C979F516F7A(bLocal_75, 31086, 0f, 0f, 0f) };
				if ((UNK_0xBBE430A566D01EF3(vVar4, vVar1, joaat("WEAPON_SMOKEGRENADE"), 1) || UNK_0xBBE430A566D01EF3(vVar4, vVar1, joaat("WEAPON_GRENADE"), 1)) || UNK_0xBBE430A566D01EF3(vVar4, vVar1, joaat("WEAPON_STICKYBOMB"), 1))
				{
					bVar0 = true;
				}
			}
			if (UNK_0x8ADFEA7B4409B2F8(UNK_0x64430C979F516F7A(bLocal_75, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (UNK_0x681F21BF9F7B449B(-1, UNK_0x64430C979F516F7A(bLocal_75, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (UNK_0xB87D13D0C064E9D1(bLocal_75, UNK_0x16F2683693E537C9(), 1))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_168(bool bParam0)
{
	if (func_3(bParam0))
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

bool func_169()
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	char* sVar10;
	bool bVar11;
	bool bVar12;

	vVar3 = { vLocal_99 };
	bVar6 = fLocal_111;
	switch (bLocal_301)
	{
		case 1:
			vLocal_96 = { -2257.482f, 4266.638f, 44.5095f };
			fLocal_110 = 293.9091f;
			vLocal_99 = { -2253.763f, 4273.17f, 44.977f };
			fLocal_111 = 185.5212f;
			bVar7 = joaat("A_F_Y_VINEWOOD_04");
			bVar9 = joaat("PEYOTE");
			bVar8 = joaat("G_M_Y_SALVAGOON_01");
			sVar10 = "CThiefVictim";
			bVar11 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
			sLocal_287 = "RECT1_ATTR";
			sLocal_288 = "RECT1_HELP";
			sLocal_289 = "RECT1_FYOU";
			sLocal_290 = "RECT1_JOY";
			sLocal_291 = "RECT1_OK";
			sLocal_292 = "RECT1_BAD";
			sLocal_293 = "RECT1_GOOD";
			cLocal_294 = "RECT1AU";
			bLocal_83 = "RANDOM@CAR_THIEF@waiting_ig_4";
			bLocal_85 = "random@car_thief@waving_ig_1";
			vLocal_102 = { -2270.632f, 4287.437f, 44.9008f };
			fLocal_57 = 3f;
			if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_96) < SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_99))
			{
				vVar3 = { vLocal_96 };
				bVar6 = fLocal_110;
				bLocal_61 = true;
				bLocal_84 = "random@car_thief@waving_ig_2";
				bLocal_86 = "waving_l";
			}
			else
			{
				bLocal_86 = "waving";
				bLocal_84 = "random@car_thief@waving_ig_1";
				vVar3 = { vLocal_99 };
				bVar6 = fLocal_111;
			}
			break;
		case 2:
			vLocal_99 = { -538.6718f, -2183.442f, 5.2336f };
			vLocal_96 = { -365.7f, -2179.26f, 9.3184f };
			bVar7 = joaat("A_F_Y_INDIAN_01");
			bVar9 = joaat("ROCOTO");
			bVar8 = joaat("A_M_M_SOUCENT_04");
			sVar10 = "CThiefGolfer";
			bVar12 = "A_M_M_SOUCENT_04_BLACK_MINI_01";
			sLocal_287 = "RECT2_ATTR";
			sLocal_288 = "RECT2_HELP";
			sLocal_289 = "RECT2_FYOU";
			sLocal_290 = "RECT2_JOY";
			sLocal_291 = "RECT2_OK";
			sLocal_292 = "RECT2_BAD";
			sLocal_293 = "RECT2_GOOD";
			cLocal_294 = "RECT2AU";
			bLocal_83 = "RANDOM@CAR_THIEF@waiting_ig_4";
			bLocal_84 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			bLocal_85 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			vLocal_102 = { -505.1966f, -2159.228f, 7.6466f };
			bLocal_56 = 15f;
			fLocal_57 = 3f;
			if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_96) < SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_99))
			{
				bLocal_61 = true;
			}
			break;
	}
	UNK_0x523BCC9DC80CD82F(bVar7);
	UNK_0x523BCC9DC80CD82F(bVar8);
	UNK_0x523BCC9DC80CD82F(bVar9);
	UNK_0x3F423BF5B8125A50(bLocal_83);
	UNK_0x3F423BF5B8125A50(bLocal_84);
	UNK_0x3F423BF5B8125A50(bLocal_85);
	UNK_0x3F423BF5B8125A50("RANDOM@CAR_THIEF@WAITING_IG_4");
	UNK_0x9E5E60D8C63FD9D1();
	if (((((((UNK_0xB87F6CF6E5628C67(bVar7) && UNK_0xB87F6CF6E5628C67(bVar8)) && UNK_0xB87F6CF6E5628C67(bVar9)) && UNK_0xB4AE0788C1587752(bLocal_83)) && UNK_0xB4AE0788C1587752(bLocal_84)) && UNK_0xB4AE0788C1587752(bLocal_85)) && UNK_0xB4AE0788C1587752("RANDOM@CAR_THIEF@WAITING_IG_4")) && UNK_0x25F7A4D42AF2AB93())
	{
		if (bLocal_301 == 1)
		{
			func_183("re_cartheft - Distance to vTop = ", SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_96));
			func_183("re_cartheft - Distance to vBottom = ", SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_99));
			bLocal_77 = UNK_0x122AAB0B1D6F55AD(bVar9, vVar3, bVar6, true, true, false);
			UNK_0x2E81FA494A883541(bLocal_77, 0, 0);
			UNK_0xA22F71BBC8173C39(bLocal_77, false);
			UNK_0x44A200C9B6E1CEA6(bLocal_77, true);
			UNK_0xA072915CE3E5C457(bLocal_77, 0);
			UNK_0x4D647C1236C18D14(bLocal_77, 0);
			UNK_0xD3421E391490133B(bLocal_77, 2, false);
			bLocal_76 = UNK_0x852A19533F896693(bLocal_77, 22, bVar8, -1, 1, true);
			UNK_0x4E885A246A9D983A(bLocal_76, 42, true);
			UNK_0xAFF39FB306F8E232(bLocal_76, 3, true);
			UNK_0x262EF6C6306BEA6C(bLocal_76, joaat("WEAPON_PISTOL"), -1, true, true);
			UNK_0x298903DD96203C2C(bLocal_76, 10);
			UNK_0x9992C3A6A1766168(bLocal_76, 1f);
			UNK_0x7D9DF2375774CFE5(bLocal_76, 1f);
			UNK_0xC002508A277213DE(bLocal_77, 135, 135);
			UNK_0xF63400DBE3303D26("re_cartheft relGroupThief", &bLocal_329);
			UNK_0x0E2400AB9174FA81(5, bLocal_329, joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(2, bLocal_329, joaat("CIVMALE"));
			UNK_0x0E2400AB9174FA81(2, joaat("CIVMALE"), bLocal_329);
			UNK_0x6DF7BF67E86AAE86(bLocal_76, bLocal_329);
			UNK_0x7980D72D61BEF4D5(bLocal_77, true);
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) - vLocal_52 };
				bLocal_55 = UNK_0xE7D606C557C86100(vVar0.x, vVar0.y);
			}
			bLocal_75 = UNK_0x36F2404464202779(5, bVar7, vLocal_52, bLocal_55, 1, true);
			UNK_0x4F39CC3882DD074E(bLocal_75, bVar11);
			UNK_0x0C8C0C840C2D1AD2(bLocal_75, UNK_0x16F2683693E537C9(), -1, 2048, 2);
			UNK_0x64F9F278AB9DCA2C(bLocal_75, false, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(bLocal_75, 2, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(bLocal_75, 3, true, true, 0);
			UNK_0x64F9F278AB9DCA2C(bLocal_75, 4, true, true, 0);
			UNK_0x33CE5A9E32EA10B2(bLocal_75, 1);
			if (bLocal_61)
			{
				vLocal_90 = { -2254.413f, 4270.227f, 44.8028f };
				bLocal_105 = 124.6557f;
				vLocal_87 = { -2252.683f, 4274.16f, 45.0612f };
				vLocal_93 = { -2257.825f, 4269.189f, 44.6334f };
				bLocal_106 = 272.8688f;
				vLocal_113 = { -2258.04f, 4272.244f, 45.75466f };
				vLocal_116 = { 1.729481f, 0f, -114.9352f };
			}
			else
			{
				vLocal_90 = { -2253.634f, 4269.119f, 44.7686f };
				bLocal_105 = 336.143f;
				vLocal_93 = { -2255.733f, 4271.32f, 44.8166f };
				bLocal_106 = 179.4774f;
				vLocal_87 = { -2257.088f, 4268.938f, 44.6456f };
				vLocal_113 = { -2254.886f, 4273.539f, 46.2282f };
				vLocal_116 = { -7.492095f, 0f, -168.1909f };
			}
		}
		else
		{
			if (bLocal_61)
			{
				bLocal_77 = UNK_0x122AAB0B1D6F55AD(bVar9, -488.7506f, -2159.325f, 8.2581f, 15.0886f, true, true, false);
			}
			else
			{
				bLocal_77 = UNK_0x122AAB0B1D6F55AD(bVar9, -486.3563f, -2159.942f, 8.2887f, 288.8187f, true, true, false);
			}
			UNK_0x2E81FA494A883541(bLocal_77, 0, 0);
			UNK_0xA22F71BBC8173C39(bLocal_77, false);
			UNK_0xC6A6B4DDD6DC073A(bLocal_77, 3);
			UNK_0x44A200C9B6E1CEA6(bLocal_77, true);
			UNK_0xF95FF0A179413A39(bLocal_77, 0);
			UNK_0xEE6A1776A67F70C1(bLocal_77, 11, 2, false);
			UNK_0xEE6A1776A67F70C1(bLocal_77, 16, 3, false);
			UNK_0xEE6A1776A67F70C1(bLocal_77, 12, true, false);
			UNK_0xEE6A1776A67F70C1(bLocal_77, 13, true, false);
			UNK_0x920DACD685EA4957(bLocal_77, 3);
			UNK_0xEE6A1776A67F70C1(bLocal_77, 23, 6, false);
			UNK_0x8BF0BEF985EB6D43(bLocal_77, 3);
			UNK_0x73BEC6F1685574E6(bLocal_77, 18, true);
			UNK_0x73BEC6F1685574E6(bLocal_77, 22, true);
			UNK_0xC002508A277213DE(bLocal_77, 143, false);
			UNK_0x58A0C35FA7CA6162(bLocal_77, 31, 2);
			UNK_0xA072915CE3E5C457(bLocal_77, 0);
			UNK_0x4D647C1236C18D14(bLocal_77, 0);
			if (bLocal_61)
			{
				bLocal_75 = UNK_0x36F2404464202779(5, bVar7, -490.4008f, -2160.755f, 8.2498f, 314.0037f, 1, true);
			}
			else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -583.0884f, -2234.249f, 4.523423f, -685.1817f, -2350.904f, 17.07073f, 178f, 0, true, 0))
			{
				bLocal_75 = UNK_0x36F2404464202779(5, bVar7, -486.81f, -2156.99f, 8.27f, -172.34f, 1, true);
			}
			else
			{
				bLocal_75 = UNK_0x36F2404464202779(5, bVar7, -486.2511f, -2161.808f, 8.3041f, 353.4264f, 1, true);
			}
			UNK_0x64F9F278AB9DCA2C(bLocal_75, false, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bLocal_75, 2, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(bLocal_75, 3, true, 2, 0);
			UNK_0x64F9F278AB9DCA2C(bLocal_75, 4, true, 2, 0);
			bLocal_76 = UNK_0x852A19533F896693(bLocal_77, 22, bVar8, -1, 1, true);
			UNK_0x262EF6C6306BEA6C(bLocal_76, joaat("WEAPON_PISTOL"), -1, true, true);
			UNK_0x298903DD96203C2C(bLocal_76, 10);
			UNK_0x9992C3A6A1766168(bLocal_76, 1f);
			UNK_0x7D9DF2375774CFE5(bLocal_76, 1f);
			UNK_0x4E885A246A9D983A(bLocal_76, 42, true);
			UNK_0x4F39CC3882DD074E(bLocal_76, bVar12);
			vLocal_90 = { -501.9105f, -2148.019f, 8.0392f };
			bLocal_105 = 294.4744f;
			vLocal_87 = { -501.0442f, -2150.799f, 8.139f };
			vLocal_93 = { -493.8062f, -2156.036f, 8.1978f };
			vLocal_113 = { -504.365f, -2144.534f, 9.8585f };
			vLocal_116 = { -6.6935f, 0f, -127.8147f };
		}
		UNK_0x25C5402CC10F76CD(bLocal_75, false);
		UNK_0x4E885A246A9D983A(bLocal_75, 185, true);
		UNK_0x78341603A22715E4(bLocal_77, 0);
		UNK_0x56FDC9ADE35F7DB0(bLocal_77, true, true, 0);
		UNK_0x11AD11297DC58CC7(bLocal_75, true);
		UNK_0x11AD11297DC58CC7(bLocal_76, true);
		UNK_0x0C8C0C840C2D1AD2(bLocal_75, bLocal_76, -1, 0, 2);
		UNK_0x2F625BED8BF7F26A(bLocal_77);
		UNK_0x7980D72D61BEF4D5(bLocal_77, true);
		UNK_0x9A8BCD43DBDDCDCA(bLocal_77, 0, 0);
		UNK_0xAB8E2DDC7AF955E0(bVar9, true);
		UNK_0x8BC9595FD2792B5D("RE_CAR_STEAL_SCENE");
		UNK_0x2E1E5367A885F9B7(bLocal_77, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		UNK_0xDC2C59BD0989562B(bLocal_77, 1);
		UNK_0xAFF39FB306F8E232(bLocal_75, 17, false);
		UNK_0xBAFED2F6486F771A(bLocal_75, 512, true);
		switch (func_10())
		{
			case 0:
				sLocal_120 = "MICHAEL";
				break;
			case 1:
				sLocal_120 = "FRANKLIN";
				break;
			case 2:
				sLocal_120 = "TREVOR";
				break;
		}
		func_182(&Local_122, 0, UNK_0x16F2683693E537C9(), sLocal_120, 0, 1);
		func_182(&Local_122, 1, bLocal_75, sVar10, 0, 1);
		func_182(&Local_122, 2, bLocal_76, "CThief", 0, 1);
		return true;
	}
	else if (func_170())
	{
		func_237();
	}
	return false;
}

bool func_170()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_45) < (75f * 75f))
		{
			return true;
		}
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_181())
		{
			return false;
		}
	}
	if (func_177())
	{
		return true;
	}
	if (func_171(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_171(float fParam0, bool bParam1)
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
		if (func_13(func_10()))
		{
			iVar36 = func_136();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 2) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 3))
				{
					func_172(iVar32, &Var0);
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

void func_172(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_173(uParam1, "Abigail1", func_175(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		case 1:
			func_173(uParam1, "Abigail2", func_175(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		case 2:
			func_173(uParam1, "Barry1", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		case 3:
			func_173(uParam1, "Barry2", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		case 4:
			func_173(uParam1, "Barry3", func_175(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		case 5:
			func_173(uParam1, "Barry3A", func_175(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 6:
			func_173(uParam1, "Barry3C", func_175(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 7:
			func_173(uParam1, "Barry4", func_175(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_174(iParam0), 0, 0);
			break;
		case 8:
			func_173(uParam1, "Dreyfuss1", func_175(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		case 9:
			func_173(uParam1, "Epsilon1", func_175(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		case 10:
			func_173(uParam1, "Epsilon2", func_175(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		case 11:
			func_173(uParam1, "Epsilon3", func_175(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		case 12:
			func_173(uParam1, "Epsilon4", func_175(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		case 13:
			func_173(uParam1, "Epsilon5", func_175(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		case 14:
			func_173(uParam1, "Epsilon6", func_175(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 15:
			func_173(uParam1, "Epsilon7", func_175(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		case 16:
			func_173(uParam1, "Epsilon8", func_175(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		case 17:
			func_173(uParam1, "Extreme1", func_175(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 18:
			func_173(uParam1, "Extreme2", func_175(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 19:
			func_173(uParam1, "Extreme3", func_175(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 20:
			func_173(uParam1, "Extreme4", func_175(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		case 21:
			func_173(uParam1, "Fanatic1", func_175(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_174(iParam0), 1, 0);
			break;
		case 22:
			func_173(uParam1, "Fanatic2", func_175(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_174(iParam0), 1, 0);
			break;
		case 23:
			func_173(uParam1, "Fanatic3", func_175(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_174(iParam0), 0, 1);
			break;
		case 24:
			func_173(uParam1, "Hao1", func_175(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_174(iParam0), 0, 1);
			break;
		case 25:
			func_173(uParam1, "Hunting1", func_175(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 26:
			func_173(uParam1, "Hunting2", func_175(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 27:
			func_173(uParam1, "Josh1", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		case 28:
			func_173(uParam1, "Josh2", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		case 29:
			func_173(uParam1, "Josh3", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		case 30:
			func_173(uParam1, "Josh4", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		case 31:
			func_173(uParam1, "Maude1", func_175(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 32:
			func_173(uParam1, "Minute1", func_175(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 33:
			func_173(uParam1, "Minute2", func_175(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 34:
			func_173(uParam1, "Minute3", func_175(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 35:
			func_173(uParam1, "MrsPhilips1", func_175(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		case 36:
			func_173(uParam1, "MrsPhilips2", func_175(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		case 37:
			func_173(uParam1, "Nigel1", func_175(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		case 38:
			func_173(uParam1, "Nigel1A", func_175(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		case 39:
			func_173(uParam1, "Nigel1B", func_175(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		case 40:
			func_173(uParam1, "Nigel1C", func_175(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		case 41:
			func_173(uParam1, "Nigel1D", func_175(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		case 42:
			func_173(uParam1, "Nigel2", func_175(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		case 43:
			func_173(uParam1, "Nigel3", func_175(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		case 44:
			func_173(uParam1, "Omega1", func_175(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		case 45:
			func_173(uParam1, "Omega2", func_175(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		case 46:
			func_173(uParam1, "Paparazzo1", func_175(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 47:
			func_173(uParam1, "Paparazzo2", func_175(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 48:
			func_173(uParam1, "Paparazzo3", func_175(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		case 49:
			func_173(uParam1, "Paparazzo3A", func_175(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 50:
			func_173(uParam1, "Paparazzo3B", func_175(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 51:
			func_173(uParam1, "Paparazzo4", func_175(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		case 52:
			func_173(uParam1, "Rampage1", func_175(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		case 54:
			func_173(uParam1, "Rampage3", func_175(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		case 55:
			func_173(uParam1, "Rampage4", func_175(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		case 56:
			func_173(uParam1, "Rampage5", func_175(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		case 53:
			func_173(uParam1, "Rampage2", func_175(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		case 57:
			func_173(uParam1, "TheLastOne", func_175(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 58:
			func_173(uParam1, "Tonya1", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 59:
			func_173(uParam1, "Tonya2", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 60:
			func_173(uParam1, "Tonya3", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 61:
			func_173(uParam1, "Tonya4", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		case 62:
			func_173(uParam1, "Tonya5", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_173(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
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

int func_174(int iParam0)
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

struct<2> func_175(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_176(iParam0) };
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

struct<2> func_176(int iParam0)
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

bool func_177()
{
	if (func_180() && !func_181())
	{
		return true;
	}
	if (func_179() && func_178())
	{
		return true;
	}
	return false;
}

bool func_178()
{
	return Global_111356 > 0;
}

bool func_179()
{
	if (Global_95666 != -1)
	{
		return true;
	}
	return false;
}

bool func_180()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_181()
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

void func_182(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_183(bool bParam0, float fParam1)
{
	func_185(bParam0);
	func_184(fParam1);
}

void func_184(float fParam0)
{
	if (fParam0 != 0f)
	{
	}
}

void func_185(bool bParam0)
{
	if (UNK_0x7F8A39872A07D2CE(bParam0, bParam0))
	{
	}
}

bool func_186()
{
	if (!func_163(5))
	{
		return true;
	}
	if (func_177())
	{
		return true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_181())
		{
			return false;
		}
	}
	if (func_171(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_187()
{
	if ((Global_111627 == func_140() && UNK_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return true;
	}
	return false;
}

void func_188()
{
	if (func_116(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0) != bLocal_77 && UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0) != bLocal_80)
			{
				bLocal_80 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			}
		}
	}
}

void func_189(int iParam0, var uParam1)
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

void func_190()
{
}

void func_191(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_140();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_193(iParam0);
	UNK_0x24D1A8A556F3252A(0);
	UNK_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_192();
}

void func_192()
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

void func_193(int iParam0)
{
	Global_111627 = iParam0;
}

bool func_194(vector3 vParam0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_140();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_234())
		{
			return false;
		}
	}
	vLocal_45 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_181())
			{
				return false;
			}
		}
		if (!Global_111638.f_9080)
		{
			return false;
		}
		if (func_123(0))
		{
			return false;
		}
		if (func_177())
		{
			return false;
		}
		if (func_233())
		{
			return false;
		}
		if (Global_111627 != -1)
		{
			return false;
		}
		if (func_13(func_10()))
		{
			if (func_171(100f, 1) != -1)
			{
				return false;
			}
		}
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !bParam6)
		{
			if ((vVar1.z - vLocal_45.z) > 50f)
			{
				return false;
			}
		}
		if (!func_232(iParam3))
		{
			return false;
		}
		if (func_13(func_10()))
		{
			if (func_231(func_10()) == 4 || func_231(func_10()) == 5)
			{
				return false;
			}
		}
		if (func_13(func_10()))
		{
			if (!func_230(iParam3, bParam4, 145))
			{
				return false;
			}
		}
		if (!func_229(Global_111638.f_24990.f_43[iParam3]))
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
		if (func_228())
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
		if (!func_219(4))
		{
			return false;
		}
		if (!func_163(5))
		{
			return false;
		}
		if (func_218(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_218(0, 0))
		{
			return false;
		}
		if (Global_30914)
		{
			return false;
		}
		if (func_232(30) && !func_218(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_13(func_10()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111638.f_2358.f_539.f_2300[iVar4 /*3*/] };
				bVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_217(bVar8))
				{
					if (func_195(iVar4))
					{
						if (!func_98(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar5) < (210f * 210f))
							{
								if (func_10() != iVar4)
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

int func_195(int iParam0)
{
	bool bVar0;

	bVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_196(bVar0);
}

int func_196(bool bParam0)
{
	return func_197(bParam0, 1);
}

int func_197(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_217(bParam0))
	{
		return 0;
	}
	func_198(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_198(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_199(func_210(), bParam0, uParam1, uParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_199(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_209(bParam0, bParam1))
	{
		iVar0 = func_208(bParam1);
		iVar1 = func_206(bParam0);
		iVar2 = (func_206(bParam0) - func_206(bParam1));
		iVar3 = (func_208(bParam0) - func_208(bParam1));
		iVar4 = (func_205(bParam0) - func_205(bParam1));
		iVar5 = (func_204(bParam0) - func_204(bParam1));
		iVar6 = (func_203(bParam0) - func_203(bParam1));
		iVar7 = (func_202(bParam0) - func_202(bParam1));
	}
	else
	{
		iVar0 = func_208(bParam0);
		iVar1 = func_206(bParam1);
		iVar2 = (func_206(bParam1) - func_206(bParam0));
		iVar3 = (func_208(bParam1) - func_208(bParam0));
		iVar4 = (func_205(bParam1) - func_205(bParam0));
		iVar5 = (func_204(bParam1) - func_204(bParam0));
		iVar6 = (func_203(bParam1) - func_203(bParam0));
		iVar7 = (func_202(bParam1) - func_202(bParam0));
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
		iVar4 = (iVar4 + func_201(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_200(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_200(float fParam0, float fParam1, float fParam2)
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

int func_201(bool bParam0, int iParam1)
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

int func_202(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_203(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_204(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_205(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

int func_206(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_207(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_207(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_208(bool bParam0)
{
	return (bParam0 && 15);
}

bool func_209(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_217(bParam1) || !func_217(bParam0))
	{
		return true;
	}
	bVar0 = func_206(bParam0);
	bVar1 = func_206(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_208(bParam0);
	bVar1 = func_208(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_205(bParam0);
	bVar1 = func_205(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_204(bParam0);
	bVar1 = func_204(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_203(bParam0);
	bVar1 = func_203(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_202(bParam0);
	bVar1 = func_202(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	return false;
}

bool func_210()
{
	var uVar0;

	func_216(&uVar0, UNK_0x4460E481B9E33ADA());
	func_215(&uVar0, UNK_0x8D199E381D262EEF());
	func_214(&uVar0, UNK_0xD8A54335F18763BA());
	func_213(&uVar0, UNK_0x972A296334C9D57B());
	func_212(&uVar0, UNK_0x118229AD063C3C1D());
	func_211(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_211(bool bParam0, int iParam1)
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

void func_212(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_213(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_208(*bParam0);
	iVar1 = func_206(*bParam0);
	if (iParam1 < 1 || iParam1 > func_201(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_214(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_215(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_216(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_217(bool bParam0)
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
	iVar0 = func_202(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_203(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_204(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_206(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_208(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_205(bParam0);
	if (iVar5 < 1 || iVar5 > func_201(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_218(int iParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], bParam1))
	{
		return true;
	}
	return false;
}

bool func_219(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_10();
				if (!func_13(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_227()) || Global_110685) || Global_30770) || func_226()) || func_59(8, -1)) || func_225()) || func_224()) || func_223()) || func_222()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_227()) || Global_30770) || func_226()) || func_59(8, -1)) || func_223()) || func_225()) || func_224()) || func_222()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_227()) || Global_110685) || Global_30770) || func_226()) || func_59(8, -1)) || func_223()) || func_225()) || func_224()) || func_222()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_227()) || Global_110685) || Global_30770) || func_226()) || func_59(8, -1)) || func_225()) || func_224()) || func_222()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_227() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_59(8, -1)) || func_222()) || func_221()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_59(8, -1) || func_225()) || func_224()) || func_221()) || func_220())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_227()) || Global_30770) || func_226()) || func_59(8, -1)) || func_224()) || func_223()) || func_222()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_227()) || func_224()) || Global_110685) || Global_30770) || func_226()) || Global_42596) || func_59(8, -1)) || func_223()) || func_221()) || func_222()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_227()) || Global_110685) || Global_30770) || func_226()) || func_59(8, -1)) || func_223()) || func_221()) || func_225()) || func_224()) || func_222())
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

bool func_220()
{
	return Global_98783.f_1;
}

bool func_221()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_222()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_223()
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

bool func_224()
{
	return Global_98796.f_346 > 0;
}

bool func_225()
{
	return Global_98796.f_345 > 0;
}

bool func_226()
{
	return Global_1312877;
}

bool func_227()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_228()
{
	func_57();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

bool func_229(bool bParam0)
{
	return func_209(func_210(), bParam0);
}

bool func_230(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_10();
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

int func_231(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_232(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_234())
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

bool func_233()
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

bool func_234()
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

bool func_235(int iParam0)
{
	int iVar0;

	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	if (Global_92729[iParam0 /*2*/])
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Global_89496)
	{
		if (Global_89496[iVar0 /*5*/] != -1)
		{
			if (Global_76891.f_109[Global_89496[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_236()
{
	if (SYSTEM::VDIST(vLocal_52, -2255.21f, 4271.04f, 44.875f) < 5f)
	{
		bLocal_301 = true;
	}
	else if (SYSTEM::VDIST(vLocal_52, -500.924f, -2165.36f, 7.6988f) < 5f)
	{
		bLocal_301 = 2;
	}
}

void func_237()
{
	if (UNK_0xC844350D5D58C99A(bLocal_76) && !UNK_0x437347B10A200C4B(bLocal_76, 0))
	{
		UNK_0x11AD11297DC58CC7(bLocal_76, false);
		UNK_0x71199B01895C6202(UNK_0x134B62B726CEC8E6(bLocal_76));
		func_249(&bLocal_76, 1, 0, 1);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_75) && !UNK_0x437347B10A200C4B(bLocal_75, 0))
	{
		UNK_0x9DD8618CA5BF832D(bLocal_75, 310, true);
		UNK_0x11AD11297DC58CC7(bLocal_75, false);
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_64))
	{
		UNK_0x142CC44DB769B57E(&iLocal_64);
	}
	func_69(&uLocal_67);
	if (UNK_0xE4EDC4B0E92C078B(iLocal_65))
	{
		UNK_0x142CC44DB769B57E(&iLocal_65);
	}
	if (UNK_0x562F77A7F33D2E46("RE_CAR_STEAL_SCENE"))
	{
		if (func_168(bLocal_77))
		{
			UNK_0x06FF977AA95DCCE3(bLocal_77, 0);
		}
		UNK_0x8910D3D58E0132B8("RE_CAR_STEAL_SCENE");
	}
	if (bLocal_301 == 2)
	{
		UNK_0x058E3033265DBA9A(joaat("ROCOTO"));
	}
	else
	{
		UNK_0x058E3033265DBA9A(joaat("PEYOTE"));
	}
	func_17(&bLocal_77);
	if (func_168(bLocal_80))
	{
		UNK_0xA22F71BBC8173C39(bLocal_80, true);
	}
	UNK_0xB975E4541DDAB1F5(0);
	UNK_0x51B096AAC60548C1(1f);
	func_152(39, 0);
	func_152(40, 0);
	func_152(41, 0);
	func_152(42, 0);
	func_152(43, 0);
	func_152(44, 0);
	func_238(-1);
	func_71(&uLocal_330, 0, 0);
	UNK_0x10FAF14A60A0DBE1();
}

void func_238(int iParam0)
{
	char cVar0[64];

	if (iParam0 == -1)
	{
		iParam0 = func_140();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_187())
	{
		func_242(iParam0);
		UNK_0x974531784BE14213(0, 0);
		Global_111629 = UNK_0x1C0640BA9A7327B3();
		func_241(30000);
		StringCopy(&cVar0, func_240(Global_111627, 1), 64);
		if (func_139(Global_111627) > 0)
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
	func_239(&Global_30827);
	Global_111628 = 0;
	func_193(-1);
}

void func_239(var uParam0)
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

char* func_240(int iParam0, bool bParam1)
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

void func_241(int iParam0)
{
	Global_41982 = (UNK_0x1C0640BA9A7327B3() + iParam0);
}

void func_242(int iParam0)
{
	func_243(iParam0, 0, func_248(iParam0));
}

void func_243(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<16> Var1;

	bVar0 = func_210();
	func_246(&bVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_245(iParam0, &bVar0);
	Var1 = { func_244(&bVar0) };
}

struct<16> func_244(bool bParam0)
{
	struct<16> Var0;
	bool bVar16;

	StringCopy(&Var0, "", 64);
	bVar16 = func_204(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_203(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_202(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "  ", 64);
	bVar16 = func_205(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "/", 64);
	bVar16 = func_208(*bParam0);
	if (bVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_206(*bParam0), 64);
	return Var0;
}

void func_245(int iParam0, bool bParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *bParam1;
}

void func_246(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_206(*bParam0);
	bVar1 = func_208(*bParam0);
	iVar2 = func_205(*bParam0);
	iVar3 = func_204(*bParam0);
	iVar4 = func_203(*bParam0);
	iVar5 = func_202(*bParam0);
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
	iVar6 = func_201(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_201(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_247(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_247(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_216(bParam0, iParam1);
	func_215(bParam0, iParam2);
	func_214(bParam0, iParam3);
	func_212(bParam0, bParam5);
	func_213(bParam0, iParam4);
	func_211(bParam0, iParam6);
}

int func_248(int iParam0)
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

void func_249(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(*bParam0))
		{
			UNK_0xE8832A9E16A57A1F(*bParam0, false, 1);
			if (iParam3 == 0)
			{
				UNK_0x8FB4E06C94958F84(*bParam0);
			}
			UNK_0xFADC0A217229F6B5(*bParam0, bParam1);
			if (iParam2 == 1)
			{
				UNK_0x11AD11297DC58CC7(*bParam0, false);
			}
		}
		UNK_0x6DAD7906B73F064D(bParam0);
	}
}

