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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
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
	vector3 vLocal_45 = { 0f, 0f, 0f };
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	char cLocal_53[64] = "";
	struct<16> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_85 = false;
	var uLocal_86 = 0;
	vector3 vLocal_87 = { 0f, 0f, 0f };
	vector3 vLocal_90 = { 0f, 0f, 0f };
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = false;
	int iLocal_100 = 0;
	bool bLocal_101 = false;
	float fLocal_102 = 0f;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	float fLocal_110 = 0f;
	vector3 vLocal_111 = { 0f, 0f, 0f };
	vector3 vLocal_114 = { 0f, 0f, 0f };
	bool bLocal_117 = false;
	var uLocal_118 = 1;
	var uLocal_119 = 0;
	var uLocal_120 = 1;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	vector3 vLocal_123 = { 0f, 0f, 0f };
	var uLocal_126 = 0;
	var uLocal_127 = 16;
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
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
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
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
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
	bool bLocal_296 = false;
	bool bLocal_297 = false;
	int iLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

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
	sLocal_20 = "NULL";
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
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_96 = -1;
	iLocal_97 = 2050;
	iLocal_98 = -1;
	bLocal_99 = -1;
	bLocal_101 = "CC_SUBSTR";
	fLocal_102 = 125f;
	iLocal_103 = 1;
	iLocal_105 = 263;
	bLocal_117 = 4f;
	vLocal_90 = { ScriptParam_0.f_1[0 /*3*/] };
	vLocal_90 = { vLocal_90 };
	uLocal_86 = uLocal_86;
	Local_69 = { Local_69 };
	bVar0 = false;
	if (UNK_0x2EBF608FFE6CA406(114))
	{
		func_141(1);
	}
	bLocal_85 = UNK_0x9539D44F3E4492F6(UNK_0xD803B885F5E47A62());
	iLocal_95 = 0;
	func_139(&Global_110289, 0);
	func_133();
	UNK_0xDF8BDD00CF1D4043(1);
	if (func_132(uLocal_94, 1))
	{
		iLocal_100 = 10;
	}
	else
	{
		iLocal_100 = 9;
	}
	while (!Global_37199)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_132(uLocal_94, 8))
	{
		if (!func_130(iLocal_100))
		{
			if (func_129(0, bLocal_99))
			{
				func_141(0);
			}
			else
			{
				func_141(1);
			}
		}
	}
	if (bLocal_99 != -1)
	{
		if (!func_129(0, bLocal_99))
		{
			func_141(1);
		}
	}
	if (func_132(uLocal_94, 8388608))
	{
		func_141(1);
	}
	if (func_132(uLocal_94, 524288) && (func_128() && !func_127()))
	{
		func_141(1);
	}
	if (UNK_0x8A22C4C08282BF26(UNK_0x7CF4675EC2B8ED0B()) > 1 && !func_132(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_126(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_125(10);
	}
	while (true)
	{
		if (Global_3)
		{
			func_141(1);
		}
		bLocal_85 = UNK_0x9539D44F3E4492F6(UNK_0xD803B885F5E47A62());
		if (func_132(uLocal_94, 1048576))
		{
			if (UNK_0x437347B10A200C4B(bLocal_85, 0))
			{
				func_141(1);
			}
		}
		if (UNK_0xC844350D5D58C99A(bLocal_85) && !UNK_0x437347B10A200C4B(bLocal_85, 0))
		{
			vLocal_87 = { UNK_0x68F4C0EC296D3901(bLocal_85, true) };
			fLocal_93 = SYSTEM::VDIST2(vLocal_87, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			vLocal_111 = { vLocal_87 };
			vLocal_114 = { ScriptParam_0.f_1[0 /*3*/] };
			vLocal_111.f_2 = 0f;
			vLocal_114.f_2 = 0f;
			fLocal_110 = SYSTEM::VDIST2(vLocal_111, vLocal_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_130(iLocal_100) || (func_132(uLocal_94, 16) && !func_132(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_121();
						func_125(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_126(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_125(10);
						}
						if ((vLocal_87.z - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				case 1:
					if (func_119())
					{
						iLocal_103 = iLocal_103;
						func_125(3);
					}
					else
					{
						func_121();
					}
					break;
				case 3:
					if (UNK_0x8FE4F98FD4BE2689())
					{
						func_141(1);
						return;
					}
					if (!func_130(iLocal_100))
					{
						if (!func_132(uLocal_94, 8))
						{
							bVar1 = true;
							if (UNK_0x7F8A39872A07D2CE(&(Global_98744.f_3), &Local_69))
							{
								Local_69 = { cLocal_53 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_141(0);
							}
							else
							{
								if (!func_132(uLocal_94, 4))
								{
									func_116();
									func_115(&uLocal_94, 4);
								}
								if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_98778)
								{
									if (iLocal_105 != 263)
									{
										if (func_114(6) && !func_113(iLocal_105))
										{
										}
										else
										{
											func_126(iLocal_105, 1, 0);
											iLocal_105 = 263;
										}
									}
									func_125(10);
								}
								else
								{
									Local_69 = { cLocal_53 };
									bVar2 = !func_132(uLocal_94, 64);
									func_139(&uLocal_94, 128);
									if (!func_112(3) && !Global_98778)
									{
										if (func_132(uLocal_94, 2097152))
										{
											if ((!func_132(uLocal_94, 1) || !UNK_0xC844350D5D58C99A(func_111())) && !Global_98778)
											{
												func_125(10);
											}
											else
											{
												if (func_132(uLocal_94, 524288) && (func_128() && !func_127()))
												{
													func_141(1);
												}
												if (func_110())
												{
													func_141(1);
												}
												if ((!func_102(6) || Global_110685) || func_101())
												{
													bVar2 = false;
												}
												if (func_132(uLocal_94, 1))
												{
													if (!func_100())
													{
														func_98(&uLocal_94, 128);
														bVar2 = false;
													}
												}
												if (func_97(1))
												{
													bVar2 = false;
												}
												if (Global_76622)
												{
													bVar2 = false;
												}
												if (func_96())
												{
													bVar2 = false;
												}
												if (UNK_0x991B1F0980C62628())
												{
													bVar2 = false;
												}
												if (func_95() || func_94(8, -1))
												{
													bVar2 = false;
												}
												if (!UNK_0xD79EDC28CA84B527(UNK_0xD803B885F5E47A62()))
												{
													bVar2 = false;
												}
												if (!UNK_0x04B2EAD6D5301B36(UNK_0xD803B885F5E47A62()))
												{
													bVar2 = false;
												}
												if (func_93(0) || func_92())
												{
													bVar2 = false;
												}
												if (bVar2)
												{
													if (!UNK_0x5A91F08DF773C39D(bLocal_85, ScriptParam_0.f_1[0 /*3*/], bLocal_117, bLocal_117, 2f, false, true, iLocal_103))
													{
														bVar2 = false;
													}
													if (!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
													{
														bVar2 = false;
													}
													if (bVar2)
													{
														UNK_0x558EC149EB2BC0A2(0, 51);
														if (func_91(uLocal_86))
														{
															if (iLocal_96 == -1)
															{
																func_90(&iLocal_96, 4, bLocal_101, 0, 0, 0, 0);
																func_98(&uLocal_94, 2048);
															}
															else if (!func_132(uLocal_94, 2048) || !UNK_0xFEBC1E4EC9E001F0())
															{
																func_89(&iLocal_96);
																func_139(&uLocal_94, 2048);
															}
															if (func_87(iLocal_96, 1))
															{
																bLocal_101 = bLocal_101;
																func_89(&iLocal_96);
																func_139(&uLocal_94, 2048);
																UNK_0x92DCE5C81176D2B4(&Local_69);
																UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 56);
																func_125(5);
															}
														}
														else
														{
															bLocal_101 = bLocal_101;
															func_89(&iLocal_96);
															func_139(&uLocal_94, 2048);
															UNK_0x92DCE5C81176D2B4(&Local_69);
															UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 56);
															func_125(5);
														}
													}
												}
												if (!bVar2)
												{
													if (iLocal_96 != -1)
													{
														func_89(&iLocal_96);
														func_139(&uLocal_94, 2048);
														UNK_0xA37A90C62806D848(0);
													}
												}
												func_84();
												Jump @2528; //curOff = 1613
												UNK_0x558EC149EB2BC0A2(0, 51);
												if (UNK_0x1FBF08B001C4788A(&Local_69))
												{
													if (iLocal_96 != -1)
													{
														func_89(&iLocal_96);
													}
													iVar3 = 2;
													bVar0 = false;
													if (func_132(uLocal_94, 1))
													{
														if (func_114(6) || func_114(7))
														{
															iVar3 = 1;
															bVar0 = true;
														}
													}
													if (iVar3 != 1)
													{
														iVar3 = func_81(&iLocal_98, 6, iLocal_100, 0, 0);
													}
													if (iVar3 == 1)
													{
														if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
														{
															UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
														}
														func_80();
														if (Global_42596)
														{
															func_71(UNK_0x16F2683693E537C9());
														}
														UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, 56);
														iLocal_52 = func_24();
														func_98(&uLocal_94, 2);
														func_125(6);
														func_20(&uLocal_107);
														if (bLocal_99 != -1)
														{
															func_19(bLocal_99);
															func_16(func_18(bLocal_99), 0, 0);
														}
													}
													else if (iVar3 == 2)
													{
														func_15();
													}
													else if (iVar3 == 0)
													{
														func_125(10);
													}
												}
												else
												{
													func_15();
												}
												Jump @2528; //curOff = 1841
												if (func_132(Global_110289, 262144))
												{
													func_139(&Global_110289, 262144);
													func_14();
												}
												if (func_132(uLocal_94, 2097152))
												{
													if (!func_112(3) && !UNK_0x1727A44C562FBED2(iLocal_52))
													{
														func_125(10);
													}
												}
												if (!UNK_0x1727A44C562FBED2(iLocal_52))
												{
													UNK_0x11E0F00830F70E15(SYSTEM::ROUND((func_10(&uLocal_107) * 1000f)), bLocal_99, 0);
													func_9(&uLocal_107);
													func_139(&uLocal_94, 256);
													func_8();
													if (bVar0)
													{
														func_139(&uLocal_94, 2);
													}
													else if (func_132(uLocal_94, 2))
													{
														if (func_132(Global_110289, 0))
														{
															func_7(&iLocal_98);
															iLocal_98 = -1;
															func_139(&uLocal_94, 2);
														}
														else
														{
															func_7(&iLocal_98);
															iLocal_98 = -1;
															func_139(&uLocal_94, 2);
														}
													}
													func_125(0);
													if (bLocal_99 != -1)
													{
														if (func_132(Global_110289, 0))
														{
															UNK_0x353729B0A07DC11A(func_18(bLocal_99), 0, Global_98781, 0);
															func_6(func_18(bLocal_99), 0, Global_98781, 1, 0);
														}
														else
														{
															UNK_0x353729B0A07DC11A(func_18(bLocal_99), 0, Global_98781, 0);
															func_6(func_18(bLocal_99), 0, Global_98781, 0, 0);
														}
													}
													func_5();
													func_139(&Global_110289, 0);
													if (func_132(uLocal_94, 16777216))
													{
														func_141(1);
													}
													if (bLocal_99 != -1)
													{
														if (Global_111638.f_9080)
														{
															if (!func_129(0, bLocal_99))
															{
																func_141(1);
															}
														}
													}
												}
												func_4();
												Jump @2528; //curOff = 2200
												func_125(0);
												Jump @2528; //curOff = 2208
												func_141(1);
												Jump @2528; //curOff = 2216
												if (fLocal_110 > (fLocal_102 * fLocal_102))
												{
													if (iLocal_105 != 263)
													{
														func_126(iLocal_105, 1, 0);
														iLocal_105 = 263;
													}
													func_125(10);
												}
												Jump @2528; //curOff = 2257
												func_2();
												if (iLocal_105 != 263)
												{
													func_126(iLocal_105, 0, 0);
												}
												if (iLocal_96 != -1)
												{
													func_89(&iLocal_96);
												}
												if (!UNK_0xEA6BC48857E0AC4C(bLocal_101))
												{
													if (func_1(bLocal_101))
													{
														UNK_0xA37A90C62806D848(1);
													}
												}
												func_125(4);
												Jump @2528; //curOff = 2321
												if ((iLocal_104 % 150) == 0)
												{
													if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
													{
														if (iLocal_106 == 2)
														{
															if (iLocal_106 == 2)
															{
																if (func_130(iLocal_100) && func_129(0, bLocal_99))
																{
																	func_133();
																	if (iLocal_105 != 263)
																	{
																		func_126(iLocal_105, 1, 0);
																	}
																	func_125(0);
																}
															}
														}
														else if (iLocal_106 == 0)
														{
															if (fLocal_110 > (fLocal_102 * fLocal_102))
															{
																if (iLocal_105 != 263)
																{
																	func_126(iLocal_105, 1, 0);
																	iLocal_105 = 263;
																}
																func_125(10);
															}
														}
														else if (iLocal_106 == 1)
														{
															if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
															{
																func_133();
																if (iLocal_105 != 263)
																{
																	func_126(iLocal_105, 1, 0);
																}
																func_125(0);
															}
														}
													}
													else
													{
														func_126(iLocal_105, 1, 0);
													}
												}
												else
												{
													iLocal_104++;
												}
											}
											SYSTEM::WAIT(0);
										}
									}
								}
							}
						}
					}
					default:
						break;
			}
		}
	}
}

bool func_1(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_2()
{
	func_3(&uLocal_118);
	func_3(&uLocal_120);
	UNK_0x8D17794CE3273D70("pickup_object");
	UNK_0x8D17794CE3273D70("oddjobs@basejump@ig_15");
}

void func_3(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			UNK_0x71199B01895C6202((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
}

void func_6(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (UNK_0xEA6BC48857E0AC4C(&Global_95814))
	{
		return;
	}
	if (UNK_0xF166B8FB0B765CF2(bParam0, &Global_95814, 0, -1) != 0)
	{
		return;
	}
	UNK_0x73B08BBDEAC9B885(bParam0, iParam1, iParam2, iParam3, iParam4, Global_92921);
	StringCopy(&Global_95814, "", 64);
}

void func_7(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_41393)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

void func_8()
{
	vector3 vVar0[24];

	if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
	{
		UNK_0x3CFFF3C8EACD8DC1(StackVal, 0, 0, 0);
	}
	else if (UNK_0xBA301E03A078FA59() || UNK_0x33A494591F2C1975())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		UNK_0x8DECFDD6715449E4(0, &cVar0);
	}
}

void func_9(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_10(var uParam0)
{
	if (func_13(uParam0))
	{
		if (func_12(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_11(UNK_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_11(bool bParam0)
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

bool func_12(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_13(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, true);
}

int func_14()
{
	return 1;
}

void func_15()
{
}

void func_16(char* sParam0, int iParam1, int iParam2)
{
	if (!UNK_0xEA6BC48857E0AC4C(&Global_95814))
	{
		UNK_0x73B08BBDEAC9B885(&Global_95814, 0, 0, 0, 1, 0);
		StringCopy(&Global_95814, "", 64);
	}
	StringCopy(&Global_95814, sParam0, 64);
	UNK_0x1AE6E2984A30CB9E(sParam0, iParam1, iParam2, func_17(0));
}

bool func_17(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

bool func_18(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "OJBJ";
		case 1:
			return "MGDT";
		case 2:
			return "MGGF";
		case 3:
			return "OJHU";
		case 4:
			return "MGOR";
		case 5:
			return "MGPS";
		case 6:
			return "MGRP";
		case 7:
			return "MGSEA";
		case 8:
			return "MGSTR";
		case 9:
			return "MGSC";
		case 10:
			return "MGSP";
		case 11:
			return "MGSRm";
		case 12:
			return "OJTX";
		case 13:
			return "MGTN";
		case 14:
			return "OJTW";
		case 15:
			return "OJDA";
		case 16:
			return "OJDG";
		case 17:
			return "MGTR";
		case 18:
			return "MGYG";
		case 19:
			return "MGCR";
	}
	return "INVALID!";
}

void func_19(bool bParam0)
{
	bool bVar0;
	vector3 vVar1[24];

	if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
	{
		bVar0 = bParam0;
		UNK_0x3CFFF3C8EACD8DC1(8, &bVar0, 1, 1);
	}
	else if (UNK_0xBA301E03A078FA59() || UNK_0x33A494591F2C1975())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, bParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		UNK_0x8DECFDD6715449E4(8, &cVar1);
	}
}

void func_20(bool bParam0)
{
	if (!func_13(bParam0))
	{
		func_23(bParam0);
	}
	else
	{
		func_21(bParam0);
	}
}

void func_21(bool bParam0)
{
	func_22(bParam0, 0f);
}

void func_22(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_11(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

void func_23(bool bParam0)
{
	if (!func_13(bParam0))
	{
		func_21(bParam0);
	}
}

int func_24()
{
	int iVar0;

	Global_111638.f_18962 = iLocal_122;
	switch (iLocal_122)
	{
		case 4:
		case 8:
			func_25(1);
			break;
		case 5:
		case 12:
		case 6:
			func_25(0);
			break;
		default:
			break;
	}
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 177, true);
	}
	iVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&cLocal_53, &vLocal_123, 170, iLocal_97);
	UNK_0x5E8C29AE121DF1C7(&cLocal_53);
	return iVar0;
}

void func_25(bool bParam0)
{
	var uVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	bool bVar16;

	vVar12 = { func_70(iLocal_122) };
	vVar12 = { func_69(SYSTEM::COS(vVar12.z), SYSTEM::SIN(vVar12.z), UNK_0x76F7F8AA07822C28(vVar12.x)) };
	UNK_0xD67D6A3F0D653D93(func_68(iLocal_122), vVar12, 5000f, 0);
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 256);
	UNK_0x8BCB70EB440DED83(0);
	UNK_0xBFE31971E49FA500(0);
	func_66(1);
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
		UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 177, true);
		if (UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) > 0.3f)
		{
			UNK_0x93D47DFD0AE94949(UNK_0x16F2683693E537C9(), -1);
			while (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) > 0.3f)
			{
				SYSTEM::WAIT(0);
				if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
				{
					UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 177, true);
				}
			}
		}
		if (UNK_0xC844350D5D58C99A(bLocal_297))
		{
			vVar6 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) - UNK_0x68F4C0EC296D3901(bLocal_297, false) };
			vVar6.f_2 = 0f;
			fVar15 = SYSTEM::VMAG(vVar6);
			UNK_0xDD353D0E9C789D0E(&iVar3);
			if (fVar15 > 0.8f)
			{
				vVar6 = { vVar6 * FtoV((0.78f / fVar15)) };
				vVar9 = { UNK_0x68F4C0EC296D3901(bLocal_297, false) + vVar6 };
				if (iLocal_122 == 12)
				{
					UNK_0x96167B03C5A77156(false, vVar9, 1f, 20000, 1048576000 /* Float: 0.25f */, 0, func_65(vVar9, UNK_0x68F4C0EC296D3901(bLocal_297, false)));
				}
				else
				{
					UNK_0x80AA372E04ED318D(false, vVar9, 1f, -1, func_65(vVar9, UNK_0x68F4C0EC296D3901(bLocal_297, false)), 1056964608 /* Float: 0.5f */);
				}
			}
			else if (fVar15 > 0.15f)
			{
				UNK_0xE655C47E46F9A7E4(false, func_65(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_297, false)), 0);
			}
			UNK_0xC6EB89C59F2AF6B8(false, "pickup_object", "pickup_low", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
			UNK_0x75ABDC5F81978924(iVar3);
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
				UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 177, true);
				UNK_0x78ADC381772E3D54(UNK_0x16F2683693E537C9(), iVar3);
			}
			UNK_0xF82EA857DA10E0CD(&iVar3);
			func_66(1);
		}
	}
	func_23(&uLocal_293);
	while ((func_10(&uLocal_293) < 6f && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0)) && !UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "pickup_object", "pickup_low", 3))
	{
		UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 177, true);
		SYSTEM::WAIT(0);
	}
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "pickup_object", "pickup_low", 3))
	{
		UNK_0x8352CA08CF578D18(UNK_0x16F2683693E537C9(), "pickup_object", "pickup_low", 0.8f);
		bVar16 = true;
	}
	while ((func_10(&uLocal_293) < 6f && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0)) && UNK_0x8CA9406E01C7EE58(UNK_0x16F2683693E537C9(), "pickup_object", "pickup_low") < 0.22f)
	{
		UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 177, true);
		if (!bVar16 && UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "pickup_object", "pickup_low", 3))
		{
			UNK_0x8352CA08CF578D18(UNK_0x16F2683693E537C9(), "pickup_object", "pickup_low", 0.8f);
			bVar16 = true;
		}
		SYSTEM::WAIT(0);
	}
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (!bVar16 && UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "pickup_object", "pickup_low", 3))
		{
			UNK_0x8352CA08CF578D18(UNK_0x16F2683693E537C9(), "pickup_object", "pickup_low", 0.7f);
			bVar16 = true;
		}
		UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 177, true);
	}
	func_9(&uLocal_293);
	func_41();
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (func_35() == 0)
		{
			UNK_0x64F9F278AB9DCA2C(UNK_0x16F2683693E537C9(), 9, 5, false, 0);
		}
		else if (func_35() == 1)
		{
			UNK_0x64F9F278AB9DCA2C(UNK_0x16F2683693E537C9(), 8, true, false, 0);
		}
		else if (func_35() == 2)
		{
			UNK_0x64F9F278AB9DCA2C(UNK_0x16F2683693E537C9(), 8, 3, false, 0);
		}
	}
	if (bParam0)
	{
		if (!func_33(func_34(iLocal_122)) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
			UNK_0x96167B03C5A77156(UNK_0x16F2683693E537C9(), func_34(iLocal_122), 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
		}
		if (UNK_0xC844350D5D58C99A(bLocal_297))
		{
			UNK_0xF690C84DADBB3551(&bLocal_297);
		}
		iVar4 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), func_32(iLocal_122), func_31(iLocal_122), func_30(iLocal_122), 1, 2);
		iVar5 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), func_29(iLocal_122), func_28(iLocal_122), func_27(iLocal_122), 0, 2);
		UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
		UNK_0x297734EBF6EB6285("HAND_SHAKE", 0.2f);
		func_23(&uVar0);
		while (func_10(&uVar0) < 1.5f)
		{
			SYSTEM::WAIT(0);
		}
		UNK_0xF1E4C781086FABC1(iVar5, iVar4, func_26(iLocal_122), 1, 1);
		func_21(&uVar0);
		while (func_10(&uVar0) < ((SYSTEM::TO_FLOAT(func_26(iLocal_122)) / 1000f) + 0.3f))
		{
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 177, true);
			}
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		vLocal_123.f_2 = bLocal_297;
	}
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 177, true);
	}
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
			return 3500;
	}
	return 0;
}

float func_27(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		case 8:
			return 50f;
		default:
			break;
	}
	return 60f;
}

Vector3 func_28(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 58.4197f, 0f, -47.9402f;
		case 8:
			return 47.6798f, 0f, -55.2921f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_29(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_30(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		case 8:
			return 50f;
		default:
			break;
	}
	return 60f;
}

Vector3 func_31(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -4.0151f, 0f, -47.5544f;
		case 8:
			return 2.5127f, 0f, -55.2921f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_32(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_33(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_34(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -83.4741f, -835.4191f, 39.5575f;
		case 8:
			return -772.8513f, 312.9656f, 84.6996f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_35()
{
	func_36();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_36()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_39(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_38(UNK_0x16F2683693E537C9());
			if (func_37(iVar0) && (!func_114(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_37(Global_111638.f_2358.f_539.f_4321))
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

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return func_40(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_40(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_41()
{
	vector3 vVar0;
	var uVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;

	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		return;
	}
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
	if (UNK_0xC844350D5D58C99A(bLocal_297))
	{
		UNK_0xF690C84DADBB3551(&bLocal_297);
	}
	func_49(0, 0, 1);
	bLocal_297 = UNK_0xB0BE3DFBBB59A620(joaat("P_PARACHUTE_S"), func_48(iLocal_122), true, true, false);
	UNK_0xC023D1C4BF532815(bLocal_297, func_47(iLocal_122), 2, 1);
	func_42(&vVar0, &uVar3);
	vVar4 = { 0f, 0f, uVar3 };
	iVar7 = UNK_0xE9744DB7B8CA6965(vVar0, vVar4, 2);
	UNK_0xE14EC663EED44AD5(bLocal_297, iVar7, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f, -1000f, 1, 1148846080 /* Float: 1000f */);
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
		UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), iVar7, "oddjobs@basejump@ig_15", "puton_parachute", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	UNK_0x4D7F4CC43D4D0DE3(-1, "Grab_Parachute", "BASEJUMPS_SOUNDS", 1);
	iVar8 = UNK_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", false);
	UNK_0x93E9ED66DAB9FBE3(iVar8, iVar7, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	UNK_0xE3BB8E05FCEB3FBE(iVar8, true);
	UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	while (UNK_0xA45992A6CE82FB43(iVar7) < 0.6f)
	{
		SYSTEM::WAIT(0);
	}
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
}

void func_42(var uParam0, var uParam1)
{
	*uParam0 = { func_46(iLocal_122) };
	switch (iLocal_122)
	{
		case 5:
			*uParam1 = -1.8f;
			break;
		case 4:
			*uParam1 = func_45(func_65(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_44(*uParam1, 111.6f);
			}
			else
			{
				*uParam1 = func_43(*uParam1, -104.04f);
			}
			break;
		case 8:
			*uParam1 = func_45(func_65(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_44(*uParam1, 79.28f);
			}
			else
			{
				*uParam1 = func_43(*uParam1, -8f);
			}
			break;
		case 6:
			*uParam1 = func_45(func_65(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), *uParam0), -180f, 180f);
			break;
		case 12:
			*uParam1 = func_45(func_65(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), *uParam0), -180f, 180f);
			break;
	}
}

float func_43(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_44(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_45(float fParam0, float fParam1, float fParam2)
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

Vector3 func_46(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -829.3729f, -1289.817f, 4.0005f;
		case 1:
			return 1208.2f, 174.3914f, 80.1245f;
		case 2:
			return 2463.793f, 1509.956f, 35.0349f;
		case 3:
			return -274.6549f, 6633.898f, 7.1166f;
		case 4:
			return -92.35f, -854.3f, 39.571f;
		case 5:
			return -120.92f, -976.05f, 295.49f;
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		case 7:
			return -742.5269f, 4493.315f, 75.1444f;
		case 8:
			return -801.3582f, 298.8532f, 84.949f;
		case 9:
			return -1367.595f, 4381.943f, 41.132f;
		case 10:
			return 2517.931f, 4971.752f, 44.7082f;
		case 11:
			return 1054.534f, -179.6562f, 70.3066f;
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_47(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 12f, 0f, 12.77f;
		case 5:
			return 10f, 0f, -134.58f;
		case 6:
			return 76f, 0f, -89.95f;
		case 8:
			return 12f, 0f, 89.56f;
		case 12:
			return 0f, 75f, -22f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_48(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -92.25f, -854.28f, 39.85f;
		case 5:
			return -120.92f, -976.05f, 295.49f;
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		case 8:
			return -801.57f, 298.85f, 85.25f;
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_49(bool bParam0, int iParam1, bool bParam2)
{
	UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), false, bParam0);
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x7800CEC090C01D4D(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 15f);
	}
	UNK_0x2D23BE319D971F4C(iParam1);
	func_61(0);
	func_51(1, 1, bParam2, 0, 0, 0);
	UNK_0xBFE31971E49FA500(0);
	UNK_0x8BCB70EB440DED83(0);
	func_50(23, 1);
}

void func_50(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&Global_31015, bParam0);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_31015, bParam0);
	}
}

void func_51(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_60(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_59())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_58(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_60(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_58(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_56(UNK_0xD803B885F5E47A62())) && !func_53(UNK_0xD803B885F5E47A62(), 0)) && !func_52()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_56(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_52()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_53(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_54(-1, 0) == 8;
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

int func_54(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_55();
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

int func_55()
{
	return Global_1312745;
}

bool func_56(bool bParam0)
{
	if (func_53(bParam0, 0))
	{
		return true;
	}
	if (func_57())
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

bool func_57()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_58(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_59()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_60(int iParam0)
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

void func_61(int iParam0)
{
	if (func_64())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_63())
		{
			func_62(1, 1);
		}
		else
		{
			func_62(0, 0);
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
	if (!func_59())
	{
		Global_19486.f_1 = 3;
	}
}

void func_62(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_93(0))
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

bool func_63()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_64()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

int func_65(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return UNK_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_66(bool bParam0)
{
	if (bParam0)
	{
		func_67();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_93(0))
		{
			func_61(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_67()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

Vector3 func_68(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1143.586f, -1859.747f, 208.3878f;
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		case 2:
			return 2041.231f, 1978.98f, 585.9358f;
		case 3:
			return 405.2326f, 5705.887f, 697.2318f;
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		case 6:
			return -1237.465f, 4526.661f, 181.7929f;
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		case 9:
			return -1286.926f, 3660.203f, 1076.051f;
		case 10:
			return 1022.178f, 3975.738f, 1362.533f;
		case 11:
			return 1608.553f, -434.5186f, 1321.916f;
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_69(vector3 vParam0)
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

Vector3 func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -21.7965f, -0.0328f, 70.0438f;
		case 1:
			return -26.5541f, 0.0092f, -86.4416f;
		case 2:
			return -11.2825f, 0.0213f, 148.5283f;
		case 3:
			return -39.935f, 0f, 12.8174f;
		case 4:
			return 0.9749f, 0f, -5.2236f;
		case 5:
			return -12.889f, 0f, 1.6227f;
		case 6:
			return -48.5605f, 0f, 160.4909f;
		case 7:
			return -37.0509f, 0.0324f, 24.0288f;
		case 8:
			return -17.4118f, 0f, 117.7175f;
		case 9:
			return -15.4633f, 0.0328f, -5.1142f;
		case 10:
			return -20.9567f, 0f, 170.5743f;
		case 11:
			return 1.9344f, 0f, -55.2084f;
		case 12:
			return -46.0342f, 0f, 37.5935f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_71(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam0 == 0)
	{
		return;
	}
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return;
	}
	iVar0 = func_79(bParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0 /*5*/];
		func_74(1, iVar1, 1);
		return;
	}
	iVar2 = func_73(bParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_72(iVar2);
}

void func_72(int iParam0)
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

int func_73(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0 /*5*/].f_1 == bParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_74(int iParam0, int iParam1, int iParam2)
{
	func_75(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_75(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_77(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_76();
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

int func_76()
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

bool func_77(int iParam0, int iParam1, int iParam2)
{
	if (func_78(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_78(int iParam0, int iParam1, int iParam2)
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

int func_79(bool bParam0)
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
		if (!Global_42383[iVar0 /*5*/] == -1)
		{
			if (bParam0 == Global_42383[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_80()
{
	if (Global_8161[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	UNK_0x0674E58A79778E99(&Global_7356, 25);
	UNK_0x5D96D8530B3D0904(&Global_7357, 11);
}

int func_81(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_83(0))
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		UNK_0x62DE699599F0417E(UNK_0xA30EC016B12C03E4(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			UNK_0x4C7B0415764B64BA(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *iParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_130(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		Global_41398[Global_41392 /*4*/] = Global_41395;
		Global_41398[Global_41392 /*4*/].f_1 = iParam1;
		Global_41398[Global_41392 /*4*/].f_2 = iParam2;
		Global_41398[Global_41392 /*4*/].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_82(iParam0, iParam4);
		}
	}
	return 2;
}

void func_82(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_41392 == 0)
	{
		return;
	}
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0 /*4*/] == *iParam0)
		{
			Global_41398[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*iParam0 = -1;
}

bool func_83(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_130(iParam0))
	{
		return false;
	}
	return true;
}

void func_84()
{
	switch (iLocal_122)
	{
		case 4:
		case 5:
		case 6:
		case 8:
		case 12:
			func_85();
			break;
		default:
			break;
	}
}

void func_85()
{
	bool bVar0;
	vector3 vVar1;

	bVar0 = UNK_0x728870EB733D12A1();
	if (UNK_0xC844350D5D58C99A(bVar0))
	{
		vLocal_123.f_1 = bVar0;
	}
	if (UNK_0xC844350D5D58C99A(bLocal_297))
	{
		vVar1 = { UNK_0x68F4C0EC296D3901(bLocal_297, true) };
		if (SYSTEM::VDIST2(vVar1, vLocal_90) > 25f)
		{
			func_86(0);
		}
	}
}

void func_86(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_106 = iParam0;
	iLocal_104 = 0;
	iLocal_95 = 7;
}

bool func_87(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_88(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!UNK_0xE1DBBD6CE209517C(UNK_0xA30EC016B12C03E4()))
	{
		return false;
	}
	if (func_93(0))
	{
		return false;
	}
	if (UNK_0x22A8E52414415B76())
	{
		return false;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/] == 1 && Global_42151[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42151[iVar0 /*32*/].f_29)
				{
					return false;
				}
			}
			Global_42151[iVar0 /*32*/].f_5 = 1;
			Global_42151[iVar0 /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			if (Global_42151[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42151[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return false;
}

int func_88(int iParam0)
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

void func_89(int iParam0)
{
	int iVar0;

	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_88(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_90(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;

	if (UNK_0x8A22C4C08282BF26(joaat("CONTEXT_CONTROLLER")) < 1)
	{
	}
	if (UNK_0x991B1F0980C62628())
	{
		if (!*iParam0 == -1)
		{
			func_89(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
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
			*iParam0 = Global_42151[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_91(var uParam0)
{
	return true;
}

bool func_92()
{
	return Global_73825;
}

bool func_93(int iParam0)
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

bool func_94(bool bParam0, int iParam1)
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

bool func_95()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

bool func_96()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_97(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

void func_98(var uParam0, int iParam1)
{
	func_99(uParam0, iParam1);
}

void func_99(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_100()
{
	return true;
}

bool func_101()
{
	int iVar0;
	bool bVar1;

	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		return false;
	}
	UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED")) || iVar0 == joaat("WEAPON_ELECTRIC_FENCE")) || iVar0 == joaat("GADGET_PARACHUTE"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		return ((((bVar1 && UNK_0x06F8112AA79C53D9(0, 69)) || (bVar1 && UNK_0x06F8112AA79C53D9(0, 70))) || (bVar1 && UNK_0x06F8112AA79C53D9(0, 68))) || UNK_0xBBFFD1937ED16008(UNK_0xD803B885F5E47A62()));
	}
	return (((((bVar1 && UNK_0x06F8112AA79C53D9(0, 24)) || (bVar1 && UNK_0x06F8112AA79C53D9(0, 25))) || (bVar1 && UNK_0x06F8112AA79C53D9(0, 47))) || UNK_0x05569C69D7945F99(UNK_0x16F2683693E537C9())) || UNK_0xBBFFD1937ED16008(UNK_0xD803B885F5E47A62()));
}

bool func_102(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_35();
				if (!func_37(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_109()) || Global_110685) || Global_30770) || func_108()) || func_94(8, -1)) || func_107()) || func_106()) || func_105()) || func_96()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_109()) || Global_30770) || func_108()) || func_94(8, -1)) || func_105()) || func_107()) || func_106()) || func_96()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_109()) || Global_110685) || Global_30770) || func_108()) || func_94(8, -1)) || func_105()) || func_107()) || func_106()) || func_96()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_109()) || Global_110685) || Global_30770) || func_108()) || func_94(8, -1)) || func_107()) || func_106()) || func_96()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_109() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_94(8, -1)) || func_96()) || func_104()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_94(8, -1) || func_107()) || func_106()) || func_104()) || func_103())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_109()) || Global_30770) || func_108()) || func_94(8, -1)) || func_106()) || func_105()) || func_96()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_109()) || func_106()) || Global_110685) || Global_30770) || func_108()) || Global_42596) || func_94(8, -1)) || func_105()) || func_104()) || func_96()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_109()) || Global_110685) || Global_30770) || func_108()) || func_94(8, -1)) || func_105()) || func_104()) || func_107()) || func_106()) || func_96())
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

bool func_103()
{
	return Global_98783.f_1;
}

bool func_104()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_105()
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

bool func_106()
{
	return Global_98796.f_346 > 0;
}

bool func_107()
{
	return Global_98796.f_345 > 0;
}

bool func_108()
{
	return Global_1312877;
}

bool func_109()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_110()
{
	if (UNK_0x8A22C4C08282BF26(joaat("STRIPPERHOME")) > 0)
	{
		return true;
	}
	return false;
}

var func_111()
{
	return Global_94576;
}

bool func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			if (func_114(6) || func_114(7))
			{
				return true;
			}
			else
			{
				return func_112(3);
			}
			break;
		case 2:
			return true;
		case 3:
			if (func_130(5))
			{
				if (func_102(4))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_113(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return false;
	}
	return UNK_0xE4EDC4B0E92C078B(Global_31146[iVar0 /*23*/].f_19);
}

bool func_114(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_115(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_116()
{
	vector3 vVar0;

	if (bLocal_296)
	{
		switch (iLocal_122)
		{
			case 4:
			case 5:
			case 8:
				bLocal_297 = UNK_0xB0BE3DFBBB59A620(joaat("P_PARACHUTE_S"), func_48(iLocal_122), true, true, false);
				UNK_0xC023D1C4BF532815(bLocal_297, func_47(iLocal_122), 2, 1);
				UNK_0x1E9649458B15960F(bLocal_297, true);
				break;
			case 6:
			case 12:
				bLocal_297 = UNK_0xB0BE3DFBBB59A620(joaat("P_PARACHUTE_S"), func_48(iLocal_122), true, true, false);
				UNK_0xC023D1C4BF532815(bLocal_297, func_47(iLocal_122), 2, 1);
				UNK_0xAEAAE8FB447447B5(bLocal_297);
				vVar0 = { func_118(iLocal_122) };
				if (!func_33(vVar0))
				{
					iLocal_298 = UNK_0x122AAB0B1D6F55AD(joaat("BATI"), vVar0, func_117(iLocal_122), true, true, false);
					iLocal_298 = iLocal_298;
				}
				break;
			default:
				break;
		}
	}
}

float func_117(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 165.0425f;
		default:
			break;
	}
	return 0f;
}

Vector3 func_118(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return -1243.606f, 4543.016f, 185.9527f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_119()
{
	switch (iLocal_122)
	{
		case 5:
		case 4:
		case 8:
		case 6:
			return (((UNK_0xB4AE0788C1587752("pickup_object") && UNK_0xB4AE0788C1587752("oddjobs@basejump@ig_15")) && func_120(&uLocal_118)) && func_120(&uLocal_120));
		case 12:
			return ((UNK_0xB4AE0788C1587752("pickup_object") && UNK_0xB4AE0788C1587752("oddjobs@basejump@ig_15")) && func_120(&uLocal_118));
		default:
			break;
	}
	return (func_120(&uLocal_118) && func_120(&uLocal_120));
}

bool func_120(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!UNK_0xB87F6CF6E5628C67((*uParam0)[iVar0]))
			{
				if (!UNK_0xB87F6CF6E5628C67((*uParam0)[iVar0]))
				{
				}
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_121()
{
	switch (iLocal_122)
	{
		case 5:
		case 8:
			func_123(&uLocal_118, joaat("P_PARACHUTE_S"));
			UNK_0x3F423BF5B8125A50("pickup_object");
			UNK_0x3F423BF5B8125A50("oddjobs@basejump@ig_15");
			break;
		case 4:
		case 6:
			func_123(&uLocal_118, joaat("P_PARACHUTE_S"));
			func_123(&uLocal_120, joaat("BATI"));
			UNK_0x3F423BF5B8125A50("pickup_object");
			UNK_0x3F423BF5B8125A50("oddjobs@basejump@ig_15");
			break;
		case 12:
			func_123(&uLocal_118, joaat("P_PARACHUTE_S"));
			UNK_0x3F423BF5B8125A50("pickup_object");
			UNK_0x3F423BF5B8125A50("oddjobs@basejump@ig_15");
			break;
		default:
			break;
	}
	func_122(&uLocal_118);
	func_122(&uLocal_120);
}

void func_122(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			UNK_0x523BCC9DC80CD82F((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_123(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_124(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_124(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_125(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_126(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, false))
	{
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 18);
		if (Global_31143 == 1)
		{
			Global_31144 = 1;
		}
		Global_31143 = 1;
	}
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), false);
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 15);
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), false);
		UNK_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), 15);
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, false))
	{
		if (UNK_0xE4EDC4B0E92C078B(Global_31146[iVar0 /*23*/].f_19))
		{
			UNK_0xCD816869CA451988(1);
			UNK_0x142CC44DB769B57E(&(Global_31146[iVar0 /*23*/].f_19));
			UNK_0xCD816869CA451988(0);
		}
	}
}

bool func_127()
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

bool func_128()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_129(int iParam0, bool bParam1)
{
	bool bVar0;

	if (iParam0 == 11 || iParam0 == -1)
	{
		return false;
	}
	if (bParam1 < 0 || bParam1 >= 32)
	{
		return false;
	}
	bVar0 = UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iParam0], bParam1);
	return bVar0;
}

int func_130(int iParam0)
{
	return func_131(iParam0, Global_41431);
}

int func_131(int iParam0, int iParam1)
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

bool func_132(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_133()
{
	if (UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		func_98(&uLocal_94, 8388608);
		return;
	}
	StringCopy(&cLocal_53, "bj", 64);
	iLocal_122 = func_137(vLocal_90, 0);
	switch (iLocal_122)
	{
		case 4:
			iLocal_105 = 129;
			break;
		case 5:
			iLocal_105 = 130;
			break;
		case 6:
			iLocal_105 = 131;
			break;
		case 8:
			iLocal_105 = 133;
			break;
		case 12:
			iLocal_105 = 137;
			break;
		default:
			break;
	}
	if (iLocal_105 == 129)
	{
		if (func_136(19))
		{
			func_135(iLocal_105);
		}
	}
	func_98(&uLocal_94, 4194304);
	bLocal_99 = false;
	fLocal_102 = (SYSTEM::TO_FLOAT(func_134(iLocal_105)) + 5f);
	bLocal_117 = 1.1f;
	bLocal_101 = "PLAY_BASEJUMP_G";
	if (iLocal_105 != 263)
	{
		if (!func_129(0, bLocal_99))
		{
			bLocal_296 = false;
			func_135(iLocal_105);
		}
		else
		{
			bLocal_296 = true;
		}
	}
	else
	{
		bLocal_296 = false;
	}
	if (UNK_0x8A22C4C08282BF26(joaat("BJ")) > 0)
	{
		func_98(&uLocal_94, 8);
	}
	else
	{
		func_139(&uLocal_94, 8);
	}
	if (func_114(12))
	{
		func_98(&uLocal_94, 8);
	}
	iLocal_97 = 35000;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
	}
	return -1;
}

void func_135(int iParam0)
{
	if (iLocal_95 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_126(iParam0, 0, 0);
		}
		iLocal_105 = 263;
		func_89(&iLocal_96);
		iLocal_95 = 9;
	}
}

bool func_136(int iParam0)
{
	return Global_110725[iParam0 /*10*/].f_1;
}

int func_137(vector3 vParam0, int iParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam3 == func_138(iVar3))
		{
			fVar1 = SYSTEM::VDIST2(vParam0, func_46(iVar3));
			if (fVar0 > fVar1)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 7:
		case 9:
		case 10:
		case 11:
			return 1;
	}
	return 0;
}

void func_139(var uParam0, int iParam1)
{
	func_140(uParam0, iParam1);
}

void func_140(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_141(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_126(iLocal_105, 0, 0);
		}
	}
	func_89(&iLocal_96);
	if (func_132(uLocal_94, 2))
	{
		func_5();
		func_139(&uLocal_94, 2);
		func_7(&iLocal_98);
	}
	iLocal_98 = -1;
	func_142();
	UNK_0x10FAF14A60A0DBE1();
}

void func_142()
{
	func_139(&uLocal_94, 4);
	func_143();
	if (UNK_0x1727A44C562FBED2(iLocal_52))
	{
		UNK_0x4000D538E4D54254(iLocal_52, 3);
	}
	if (!UNK_0x2EBF5002C6B6A06C(&Local_69))
	{
		if (UNK_0x4880526EC51D1C27(&Local_69) != 0)
		{
			UNK_0x5E8C29AE121DF1C7(&Local_69);
		}
	}
}

void func_143()
{
}

