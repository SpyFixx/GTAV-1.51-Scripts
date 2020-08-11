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
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	char cLocal_53[64] = "";
	struct<16> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_85 = false;
	bool bLocal_86 = false;
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
	bool bLocal_118 = false;
	bool bLocal_119 = false;
	bool bLocal_120 = false;
	vector3 vLocal_121 = { 0f, 0f, 0f };
	int iLocal_124 = 0;
	vector3 vLocal_125[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	float fLocal_150[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_156 = 0f;
	bool bLocal_157 = false;
	bool bLocal_158 = false;
	bool bLocal_159 = false;
	bool bLocal_160 = false;
	bool bLocal_161 = false;
	bool bLocal_162 = false;
	var uLocal_163 = 16;
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
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	int iLocal_328 = 0;
	struct<100> Local_329 = { 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 } ;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
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
	float fVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;

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
	bLocal_118 = true;
	bLocal_119 = 6;
	bLocal_120 = 18;
	iLocal_124 = -1;
	bLocal_158 = true;
	bLocal_159 = true;
	vLocal_90 = { ScriptParam_0.f_1[0 /*3*/] };
	vLocal_90 = { vLocal_90 };
	bLocal_86 = bLocal_86;
	Local_69 = { Local_69 };
	bVar0 = false;
	if (UNK_0x2EBF608FFE6CA406(82))
	{
		func_151(1);
	}
	bLocal_85 = UNK_0x9539D44F3E4492F6(UNK_0xD803B885F5E47A62());
	iLocal_95 = 0;
	func_149(&Global_110289, 0);
	func_143();
	UNK_0xDF8BDD00CF1D4043(1);
	if (func_142(uLocal_94, 1))
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
	if (!func_142(uLocal_94, 8))
	{
		if (!func_140(iLocal_100))
		{
			if (func_139(0, bLocal_99))
			{
				func_151(0);
			}
			else
			{
				func_151(1);
			}
		}
	}
	if (bLocal_99 != -1)
	{
		if (!func_139(0, bLocal_99))
		{
			bLocal_118 = false;
		}
	}
	if (func_142(uLocal_94, 8388608))
	{
		func_151(1);
	}
	if (func_142(uLocal_94, 524288) && (func_138() && !func_137()))
	{
		func_151(1);
	}
	if (UNK_0x8A22C4C08282BF26(UNK_0x7CF4675EC2B8ED0B()) > 1 && !func_142(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_136(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_135(10);
	}
	while (true)
	{
		if (!func_142(uLocal_94, 268435456))
		{
			fVar1 = 0f;
			if (UNK_0xE82754C349C7B581(ScriptParam_0.f_1[0 /*3*/], &fVar1, 0, 0))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_0.f_1[0 /*3*/].f_2 = fVar1;
					func_134(&uLocal_94, 268435456);
				}
			}
		}
		bLocal_85 = UNK_0x9539D44F3E4492F6(UNK_0xD803B885F5E47A62());
		if (func_142(uLocal_94, 1048576))
		{
			if (UNK_0x437347B10A200C4B(bLocal_85, 0))
			{
				func_151(1);
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
					if (func_140(iLocal_100) || (func_142(uLocal_94, 16) && !func_142(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_130();
						func_135(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_136(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_135(10);
						}
						if ((vLocal_87.z - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				case 1:
					if (func_128() && fLocal_93 > ((bLocal_117 * 1.5f) * (bLocal_117 * 1.5f)))
					{
						iLocal_103 = iLocal_103;
						func_135(3);
					}
					else
					{
						func_130();
					}
					break;
				case 3:
					if (UNK_0x8FE4F98FD4BE2689())
					{
						func_151(1);
						return;
					}
					if (!func_140(iLocal_100))
					{
						if (!func_142(uLocal_94, 8))
						{
							bVar2 = true;
							if (UNK_0x7F8A39872A07D2CE(&(Global_98744.f_3), &Local_69))
							{
								Local_69 = { cLocal_53 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_151(0);
							}
							else
							{
								if (!func_142(uLocal_94, 4))
								{
									func_117();
									func_134(&uLocal_94, 4);
								}
								if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_98778)
								{
									if (iLocal_105 != 263)
									{
										if (func_116(6) && !func_115(iLocal_105))
										{
										}
										else
										{
											func_136(iLocal_105, 1, 0);
											iLocal_105 = 263;
										}
									}
									func_135(10);
								}
								else
								{
									Local_69 = { cLocal_53 };
									bVar3 = !func_142(uLocal_94, 64);
									func_149(&uLocal_94, 128);
									if (!func_114(3) && !Global_98778)
									{
										if (func_142(uLocal_94, 2097152))
										{
											if ((!func_142(uLocal_94, 1) || !UNK_0xC844350D5D58C99A(func_113())) && !Global_98778)
											{
												func_135(10);
											}
											else
											{
												if (func_142(uLocal_94, 524288) && (func_138() && !func_137()))
												{
													func_151(1);
												}
												if (func_112())
												{
													func_151(1);
												}
												if ((!func_104(6) || Global_110685) || func_103())
												{
													bVar3 = false;
												}
												if (!bLocal_118)
												{
													func_101(&uLocal_94, 128);
													bVar3 = false;
												}
												if (func_142(uLocal_94, 1))
												{
													if (!func_100())
													{
														func_101(&uLocal_94, 128);
														bVar3 = false;
													}
												}
												if (func_99(1))
												{
													bVar3 = false;
												}
												if (Global_76622)
												{
													bVar3 = false;
												}
												if (func_98())
												{
													bVar3 = false;
												}
												if (UNK_0x991B1F0980C62628())
												{
													bVar3 = false;
												}
												if (func_97() || func_96(8, -1))
												{
													bVar3 = false;
												}
												if (!UNK_0xD79EDC28CA84B527(UNK_0xD803B885F5E47A62()))
												{
													bVar3 = false;
												}
												if (!UNK_0x04B2EAD6D5301B36(UNK_0xD803B885F5E47A62()))
												{
													bVar3 = false;
												}
												if (func_95(0) || func_94())
												{
													bVar3 = false;
												}
												if (bVar3)
												{
													if (!UNK_0x5A91F08DF773C39D(bLocal_85, ScriptParam_0.f_1[0 /*3*/], bLocal_117, bLocal_117, 2f, false, true, iLocal_103))
													{
														bVar3 = false;
													}
													bVar4 = UNK_0xD8A54335F18763BA();
													if (bLocal_119 > bLocal_120)
													{
														if (bVar4 < bLocal_119 && bVar4 >= bLocal_120)
														{
															func_101(&uLocal_94, 128);
															bVar3 = false;
															if (fLocal_93 < ((bLocal_117 * bLocal_117) + 4f))
															{
																if (!func_142(uLocal_94, 134217728))
																{
																	func_93("MG_NA_TIME", bLocal_119, bLocal_120);
																	func_101(&uLocal_94, 134217728);
																}
															}
															else
															{
																func_149(&uLocal_94, 134217728);
															}
														}
													}
													else if (bVar4 < bLocal_119 || bVar4 >= bLocal_120)
													{
														func_101(&uLocal_94, 128);
														bVar3 = false;
														if (fLocal_93 < ((bLocal_117 * bLocal_117) + 4f))
														{
															if (!func_142(uLocal_94, 134217728))
															{
																func_93("MG_NA_TIME", bLocal_119, bLocal_120);
																func_101(&uLocal_94, 134217728);
															}
														}
														else
														{
															func_149(&uLocal_94, 134217728);
														}
													}
													if (!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
													{
														bVar3 = false;
													}
													if (bVar3)
													{
														UNK_0x558EC149EB2BC0A2(0, 51);
														if (func_92(bLocal_86))
														{
															if (iLocal_96 == -1)
															{
																func_91(&iLocal_96, 4, bLocal_101, 0, 0, 0, 0);
																func_101(&uLocal_94, 2048);
															}
															else if (!func_142(uLocal_94, 2048) || !UNK_0xFEBC1E4EC9E001F0())
															{
																func_90(&iLocal_96);
																func_149(&uLocal_94, 2048);
															}
															if (func_88(iLocal_96, 1))
															{
																bLocal_101 = bLocal_101;
																func_90(&iLocal_96);
																func_149(&uLocal_94, 2048);
																UNK_0x92DCE5C81176D2B4(&Local_69);
																UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 56);
																func_135(5);
															}
														}
														else
														{
															bLocal_101 = bLocal_101;
															func_90(&iLocal_96);
															func_149(&uLocal_94, 2048);
															UNK_0x92DCE5C81176D2B4(&Local_69);
															UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 56);
															func_135(5);
														}
													}
												}
												if (!bVar3)
												{
													if (iLocal_96 != -1)
													{
														func_90(&iLocal_96);
														func_149(&uLocal_94, 2048);
														UNK_0xA37A90C62806D848(0);
													}
												}
												func_50();
												Jump @2865; //curOff = 1933
												UNK_0x558EC149EB2BC0A2(0, 51);
												if (UNK_0x1FBF08B001C4788A(&Local_69))
												{
													if (iLocal_96 != -1)
													{
														func_90(&iLocal_96);
													}
													iVar5 = 2;
													bVar0 = false;
													if (func_142(uLocal_94, 1))
													{
														if (func_116(6) || func_116(7))
														{
															iVar5 = 1;
															bVar0 = true;
														}
													}
													if (iVar5 != 1)
													{
														iVar5 = func_47(&iLocal_98, 6, iLocal_100, 0, 0);
													}
													if (iVar5 == 1)
													{
														if (!UNK_0x437347B10A200C4B(bLocal_86, 0))
														{
															UNK_0x046C362CF15F1935(&bLocal_86);
														}
														if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
														{
															UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
														}
														func_46();
														if (Global_42596)
														{
															func_37(UNK_0x16F2683693E537C9());
														}
														UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, 56);
														iLocal_52 = func_36();
														func_101(&uLocal_94, 2);
														func_135(6);
														func_32(&uLocal_107);
														if (bLocal_99 != -1)
														{
															func_31(bLocal_99);
															func_29(func_30(bLocal_99), 0, 0);
														}
													}
													else if (iVar5 == 2)
													{
														func_28();
													}
													else if (iVar5 == 0)
													{
														func_135(10);
													}
												}
												else
												{
													func_28();
												}
												Jump @2865; //curOff = 2178
												if (func_142(Global_110289, 262144))
												{
													func_149(&Global_110289, 262144);
													func_27();
												}
												if (func_142(uLocal_94, 2097152))
												{
													if (!func_114(3) && !UNK_0x1727A44C562FBED2(iLocal_52))
													{
														func_135(10);
													}
												}
												if (!UNK_0x1727A44C562FBED2(iLocal_52))
												{
													UNK_0x11E0F00830F70E15(SYSTEM::ROUND((func_23(&uLocal_107) * 1000f)), bLocal_99, 0);
													func_22(&uLocal_107);
													func_149(&uLocal_94, 256);
													func_21();
													if (bVar0)
													{
														func_149(&uLocal_94, 2);
													}
													else if (func_142(uLocal_94, 2))
													{
														if (func_142(Global_110289, 0))
														{
															func_20(&iLocal_98);
															iLocal_98 = -1;
															func_149(&uLocal_94, 2);
														}
														else
														{
															func_20(&iLocal_98);
															iLocal_98 = -1;
															func_149(&uLocal_94, 2);
														}
													}
													func_135(0);
													if (bLocal_99 != -1)
													{
														if (func_142(Global_110289, 0))
														{
															UNK_0x353729B0A07DC11A(func_30(bLocal_99), 0, Global_98781, 0);
															func_19(func_30(bLocal_99), 0, Global_98781, 1, 0);
														}
														else
														{
															UNK_0x353729B0A07DC11A(func_30(bLocal_99), 0, Global_98781, 0);
															func_19(func_30(bLocal_99), 0, Global_98781, 0, 0);
														}
													}
													func_5();
													func_149(&Global_110289, 0);
													if (func_142(uLocal_94, 16777216))
													{
														func_151(1);
													}
													if (bLocal_99 != -1)
													{
														if (Global_111638.f_9080)
														{
															if (!func_139(0, bLocal_99))
															{
																func_151(1);
															}
														}
													}
												}
												func_4();
												Jump @2865; //curOff = 2537
												func_135(0);
												Jump @2865; //curOff = 2545
												func_151(1);
												Jump @2865; //curOff = 2553
												if (fLocal_110 > (fLocal_102 * fLocal_102))
												{
													if (iLocal_105 != 263)
													{
														func_136(iLocal_105, 1, 0);
														iLocal_105 = 263;
													}
													func_135(10);
												}
												Jump @2865; //curOff = 2594
												func_2();
												if (iLocal_105 != 263)
												{
													func_136(iLocal_105, 0, 0);
												}
												if (iLocal_96 != -1)
												{
													func_90(&iLocal_96);
												}
												if (!UNK_0xEA6BC48857E0AC4C(bLocal_101))
												{
													if (func_1(bLocal_101))
													{
														UNK_0xA37A90C62806D848(1);
													}
												}
												func_135(4);
												Jump @2865; //curOff = 2658
												if ((iLocal_104 % 150) == 0)
												{
													if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
													{
														if (iLocal_106 == 2)
														{
															if (iLocal_106 == 2)
															{
																if (func_140(iLocal_100) && func_139(0, bLocal_99))
																{
																	func_143();
																	if (iLocal_105 != 263)
																	{
																		func_136(iLocal_105, 1, 0);
																	}
																	func_135(0);
																}
															}
														}
														else if (iLocal_106 == 0)
														{
															if (fLocal_110 > (fLocal_102 * fLocal_102))
															{
																if (iLocal_105 != 263)
																{
																	func_136(iLocal_105, 1, 0);
																	iLocal_105 = 263;
																}
																func_135(10);
															}
														}
														else if (iLocal_106 == 1)
														{
															if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
															{
																func_143();
																if (iLocal_105 != 263)
																{
																	func_136(iLocal_105, 1, 0);
																}
																func_135(0);
															}
														}
													}
													else
													{
														func_136(iLocal_105, 1, 0);
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
	bool bVar0;

	func_3(&(Local_329.f_71));
	func_3(&(Local_329.f_77));
	func_3(&(Local_329.f_99));
	UNK_0x8D17794CE3273D70("amb@world_human_hang_out_street@male_a@idle_a");
	UNK_0x8D17794CE3273D70("amb@world_human_hang_out_street@male_b@idle_a");
	UNK_0x8D17794CE3273D70("amb@world_human_hang_out_street@male_c@idle_a");
	UNK_0x8D17794CE3273D70("amb@world_human_aa_smoke@male@idle_a");
	UNK_0x8D17794CE3273D70("random@street_race");
	UNK_0x8D17794CE3273D70("gestures@m@standing@casual");
	switch (iLocal_124)
	{
		case 0:
			bVar0 = "CanyonCliffs_Start";
			break;
		case 1:
			bVar0 = "RidgeRun_Start";
			break;
		case 3:
			bVar0 = "ValleyTrail_Start";
			break;
		case 4:
			bVar0 = "LakesideSplash_Start";
			break;
		case 5:
			bVar0 = "EcoFriendly_Start";
			break;
		case 2:
			bVar0 = "MinewardSpiral_Start";
			break;
	}
	if (!UNK_0xEA6BC48857E0AC4C(bVar0))
	{
		if (UNK_0xDA8F5DDC86FE3C26(bVar0))
		{
			if (UNK_0x8ED9A0095B69A728(bVar0))
			{
				UNK_0x2723524E448F4BDD(bVar0, false);
			}
		}
	}
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
	if (func_142(Global_111638.f_19011, 1))
	{
		func_149(&(Global_111638.f_19011), 1);
		func_18();
		func_8();
		func_6();
	}
}

int func_6()
{
	if (func_7(0))
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

bool func_7(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_8()
{
	if (Global_111638.f_19011.f_18 < Global_111638.f_19011.f_19[iLocal_124] || Global_111638.f_19011.f_19[iLocal_124] == 0)
	{
		Global_111638.f_19011.f_19[iLocal_124] = Global_111638.f_19011.f_18;
		Global_111638.f_19011.f_18 = 999;
	}
	if (iLocal_124 == Global_111638.f_19011.f_1 || Global_111638.f_19011.f_1 == -1)
	{
		if (Global_111638.f_19011.f_1 != 5)
		{
			Global_111638.f_19011.f_1++;
			switch (Global_111638.f_19011.f_1)
			{
				case 1:
					func_136(70, 1, 0);
					func_17(70, 1);
					func_136(71, 1, 0);
					break;
				case 2:
					func_136(70, 1, 0);
					func_17(70, 1);
					func_136(71, 1, 0);
					func_17(71, 1);
					func_136(72, 1, 0);
					break;
				case 3:
					func_136(70, 1, 0);
					func_17(70, 1);
					func_136(71, 1, 0);
					func_17(71, 1);
					func_136(72, 1, 0);
					func_17(72, 1);
					func_136(73, 1, 0);
					break;
				case 4:
					func_136(70, 1, 0);
					func_17(70, 1);
					func_136(71, 1, 0);
					func_17(71, 1);
					func_136(72, 1, 0);
					func_17(72, 1);
					func_136(73, 1, 0);
					func_17(73, 1);
					func_136(74, 1, 0);
					break;
				case 5:
					func_136(70, 1, 0);
					func_17(70, 1);
					func_136(71, 1, 0);
					func_17(71, 1);
					func_136(72, 1, 0);
					func_17(72, 1);
					func_136(73, 1, 0);
					func_17(73, 1);
					func_136(74, 1, 0);
					func_17(74, 1);
					func_136(75, 1, 0);
					break;
			}
			func_14("OFFR_NEW", 0, 0, -1, 10000, 7, 0, 0, 0);
		}
		else
		{
			func_136(70, 1, 0);
			func_17(70, 1);
			func_136(71, 1, 0);
			func_17(71, 1);
			func_136(73, 1, 0);
			func_17(73, 1);
			func_136(74, 1, 0);
			func_17(74, 1);
			func_136(75, 1, 0);
			func_17(75, 1);
			func_136(72, 1, 0);
			func_17(72, 1);
		}
		switch (Global_111638.f_19011.f_1)
		{
			case 0:
				func_13(70);
				func_9(71);
				break;
			case 1:
				func_13(71);
				func_9(72);
				break;
			case 2:
				func_13(72);
				func_9(73);
				break;
			case 3:
				func_13(73);
				func_9(74);
				break;
			case 4:
				func_13(74);
				func_9(75);
				break;
			case 5:
				func_13(75);
				break;
		}
	}
}

void func_9(int iParam0)
{
	func_12(iParam0, 1, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_10(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), 4);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 18);
}

void func_11(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), 5);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 18);
}

void func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), 11);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 18);
}

void func_13(int iParam0)
{
	func_12(iParam0, 0, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_15(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_15(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_16();
	}
}

void func_16()
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

void func_17(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 20);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), 20);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 20);
}

void func_18()
{
	UNK_0xB547E3FFEB27073E();
	UNK_0x008B42B5123B79DB();
	switch (iLocal_124)
	{
		case 0:
			UNK_0x842F1AEB2FCC00B7(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1);
			break;
		case 1:
			UNK_0x842F1AEB2FCC00B7(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 1);
			break;
		case 3:
			UNK_0x842F1AEB2FCC00B7(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1);
			break;
		case 4:
			break;
		case 5:
			UNK_0x842F1AEB2FCC00B7(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 1);
			break;
		case 2:
			UNK_0x842F1AEB2FCC00B7(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1);
			break;
	}
}

void func_19(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_20(int iParam0)
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

void func_21()
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

void func_22(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_23(var uParam0)
{
	if (func_26(uParam0))
	{
		if (func_25(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_24(UNK_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_24(bool bParam0)
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

bool func_25(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_26(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, true);
}

int func_27()
{
	func_8();
	return 1;
}

void func_28()
{
}

void func_29(char* sParam0, int iParam1, int iParam2)
{
	if (!UNK_0xEA6BC48857E0AC4C(&Global_95814))
	{
		UNK_0x73B08BBDEAC9B885(&Global_95814, 0, 0, 0, 1, 0);
		StringCopy(&Global_95814, "", 64);
	}
	StringCopy(&Global_95814, sParam0, 64);
	UNK_0x1AE6E2984A30CB9E(sParam0, iParam1, iParam2, func_7(0));
}

bool func_30(bool bParam0)
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

void func_31(bool bParam0)
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

void func_32(bool bParam0)
{
	if (!func_26(bParam0))
	{
		func_35(bParam0);
	}
	else
	{
		func_33(bParam0);
	}
}

void func_33(bool bParam0)
{
	func_34(bParam0, 0f);
}

void func_34(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_24(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

void func_35(bool bParam0)
{
	if (!func_26(bParam0))
	{
		func_33(bParam0);
	}
}

int func_36()
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	UNK_0xA37A90C62806D848(1);
	Var0.f_4 = 5;
	Var0.f_10 = 5;
	Var0 = iLocal_124;
	Var0.f_1 = { vLocal_121 };
	iVar18 = 0;
	iVar18 = 0;
	while (iVar18 < Var0.f_4)
	{
		Var0.f_4[iVar18] = Local_329[iVar18 /*14*/];
		Var0.f_10[iVar18] = Local_329[iVar18 /*14*/].f_1;
		iVar18++;
	}
	Var0.f_16 = Local_329.f_83;
	Var0.f_17 = Local_329.f_83.f_1;
	UNK_0x82A772610883F395("SwitchSceneNeutral", 0, 1);
	SYSTEM::WAIT(400);
	iVar19 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&cLocal_53, &Var0, 18, iLocal_97);
	UNK_0x5E8C29AE121DF1C7(&cLocal_53);
	return iVar19;
}

void func_37(bool bParam0)
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
	iVar0 = func_45(bParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0 /*5*/];
		func_40(1, iVar1, 1);
		return;
	}
	iVar2 = func_39(bParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_38(iVar2);
}

void func_38(int iParam0)
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

int func_39(bool bParam0)
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

void func_40(int iParam0, int iParam1, int iParam2)
{
	func_41(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_43(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_42();
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

int func_42()
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

bool func_43(int iParam0, int iParam1, int iParam2)
{
	if (func_44(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_44(int iParam0, int iParam1, int iParam2)
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

int func_45(bool bParam0)
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

void func_46()
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

int func_47(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_49(0))
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
		if (!func_140(iParam2))
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
			func_48(iParam0, iParam4);
		}
	}
	return 2;
}

void func_48(int iParam0, int iParam1)
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

bool func_49(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_140(iParam0))
	{
		return false;
	}
	return true;
}

void func_50()
{
	float fVar0;

	fVar0 = SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_121);
	if (fVar0 < 62500f)
	{
		func_80();
		func_77();
		if (bLocal_159)
		{
			if (fVar0 < 64f)
			{
				func_76();
				bLocal_159 = false;
			}
		}
		if (fVar0 < 400f)
		{
			func_54();
		}
	}
	if (!bLocal_160)
	{
		if (func_52())
		{
			bLocal_160 = true;
			func_51();
		}
	}
}

void func_51()
{
	iLocal_48++;
}

bool func_52()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_53())
	{
		if (!UNK_0xC844350D5D58C99A(Local_329[iVar0 /*14*/]) || !UNK_0xC844350D5D58C99A(Local_329[iVar0 /*14*/].f_1))
		{
			return false;
		}
		iVar0++;
	}
	if (!UNK_0xC844350D5D58C99A(Local_329.f_83) || !UNK_0xC844350D5D58C99A(Local_329.f_83.f_1))
	{
		return false;
	}
	return true;
}

int func_53()
{
	switch (iLocal_124)
	{
		case 0:
		case 3:
		case 5:
		case 2:
			return 5;
		case 1:
		case 4:
			return 4;
	}
	return 0;
}

void func_54()
{
	int iVar0;
	char* sVar1;

	if (!func_26(&uLocal_147))
	{
		func_35(&uLocal_147);
		return;
	}
	if (UNK_0xC844350D5D58C99A(bLocal_157) && !UNK_0x437347B10A200C4B(bLocal_157, 0))
	{
		if (UNK_0x65636D4556D82155(bLocal_157))
		{
			return;
		}
	}
	if (func_23(&uLocal_147) >= 8f)
	{
		iVar0 = (UNK_0x09AC81E49EA267F7(false, 65535) % 3) + 1;
		if (iVar0 > 0 && iVar0 <= 3)
		{
			if (UNK_0x437347B10A200C4B(Local_329[(iVar0 - 1) /*14*/], 0))
			{
				return;
			}
			switch (iVar0)
			{
				case 1:
					sVar1 = "ORR_GUY1";
					break;
				case 2:
					sVar1 = "ORR_GUY2";
					break;
				case 3:
					sVar1 = "ORR_GUY3";
					break;
			}
			func_55(&uLocal_163, "ORRAUD", sVar1, 3, 0, 0, 0);
			func_33(&uLocal_147);
		}
	}
}

int func_55(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_75(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_56(sParam2, iParam3, 0);
}

int func_56(char* sParam0, int iParam1, bool bParam2)
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
					func_74();
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
		if (func_96(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_73();
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
				func_66();
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
				if (func_65())
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
			if (func_64())
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
			func_63();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_62();
		func_57();
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
		func_74();
	}
	return 0;
}

void func_57()
{
	if (!func_58())
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

bool func_58()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_61())
	{
		return false;
	}
	if (func_59(UNK_0xD803B885F5E47A62()))
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

bool func_59(int iParam0)
{
	return func_60(iParam0, 20);
}

bool func_60(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_61()
{
	return -1;
}

void func_62()
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

void func_63()
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

bool func_64()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_65()
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

void func_66()
{
	if (func_116(14))
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
			if (func_69(iVar0) && (!func_116(14) || Global_110589))
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

void func_73()
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

void func_74()
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

void func_75(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_76()
{
	bool bVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0x437347B10A200C4B(Local_329.f_83, 0))
	{
		bVar0 = UNK_0xD8A54335F18763BA();
		if (bVar0 <= bLocal_119 && bVar0 >= bLocal_120)
		{
			bLocal_159 = false;
			return;
		}
		UNK_0xC0B0B9E466C0ED17(Local_329.f_83, 0f, 0f, 0.75f, 1, 2000, 2000, 2000, false);
	}
}

void func_77()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = UNK_0xD8A54335F18763BA();
	if (bVar0 <= bLocal_119 && bVar0 >= bLocal_120)
	{
		iLocal_328 = 0;
		return;
	}
	if (!UNK_0x437347B10A200C4B(bLocal_157, 0) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		switch (iLocal_328)
		{
			case 0:
				if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bLocal_157, true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) < 64f && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					bLocal_161 = false;
					bLocal_162 = false;
					iLocal_328 = 1;
				}
				break;
			case 1:
				UNK_0xDD353D0E9C789D0E(&iVar1);
				UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 0, 2);
				UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
				UNK_0x75ABDC5F81978924(iVar1);
				UNK_0x78ADC381772E3D54(bLocal_157, iVar1);
				UNK_0xF82EA857DA10E0CD(&iVar1);
				iLocal_328 = 2;
				break;
			case 2:
				if ((UNK_0xD1960163A3042274(bLocal_157, 242628503) != 1 || UNK_0x7069CC4DE1EA3FAA(bLocal_157, UNK_0x16F2683693E537C9(), 20f)) && !UNK_0x25037C66EB32B076())
				{
					UNK_0xF96A174EE26D7588(bLocal_157, UNK_0x16F2683693E537C9(), -1);
					if (!bLocal_162)
					{
						func_78(bLocal_157, "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_78(bLocal_157, "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_328 = 3;
				}
				break;
			case 3:
				if (!UNK_0x65636D4556D82155(bLocal_157))
				{
					func_33(&uLocal_144);
					UNK_0xC6EB89C59F2AF6B8(bLocal_157, "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, false, 0, 0, 0);
					iLocal_328 = 4;
				}
				break;
			case 4:
				if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bLocal_157, true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) > 225f)
				{
					UNK_0xDD353D0E9C789D0E(&iVar2);
					UNK_0xE655C47E46F9A7E4(false, Local_329.f_83.f_9, 1000);
					UNK_0xC6EB89C59F2AF6B8(false, Local_329.f_83.f_12, Local_329.f_83.f_13, 4f, -8f, -1, 1, false, 0, 0, 0);
					UNK_0x75ABDC5F81978924(iVar2);
					UNK_0x78ADC381772E3D54(bLocal_157, iVar2);
					UNK_0xF82EA857DA10E0CD(&iVar2);
					iLocal_328 = 0;
				}
				if (func_26(&uLocal_144))
				{
					if (func_23(&uLocal_144) >= 5f && !bLocal_161)
					{
						bLocal_161 = true;
						iLocal_328 = 1;
					}
					else if (func_23(&uLocal_144) >= 10f && !bLocal_162)
					{
						bLocal_162 = true;
						iLocal_328 = 1;
					}
				}
				break;
			case 5:
				break;
		}
	}
}

void func_78(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	UNK_0xEB0A515D699A7E90(bParam0, bParam1, bParam2, func_79(iParam3), 0);
}

int func_79(int iParam0)
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

void func_80()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (UNK_0xC844350D5D58C99A(Local_329[iVar2 /*14*/].f_1) && UNK_0xC844350D5D58C99A(Local_329[iVar2 /*14*/]))
		{
			if (func_85(Local_329[iVar2 /*14*/], 1, 0, 0, 0) || UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_329[iVar2 /*14*/].f_1, 1))
			{
				func_83();
				func_82(iLocal_105);
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			}
			if (!UNK_0xEB6A8945D1AC98A1(Local_329[iVar2 /*14*/]))
			{
				if (func_26(&(vLocal_125[iVar2 /*3*/])))
				{
					if (func_23(&(vLocal_125[iVar2 /*3*/])) > fLocal_150[iVar2])
					{
						if (UNK_0xDF1306B443CD3D15(Local_329[iVar2 /*14*/].f_1, 0) && UNK_0xC42A92762C58E1B9(Local_329[iVar2 /*14*/], Local_329[iVar2 /*14*/].f_1, 0))
						{
							iVar0 = UNK_0x09AC81E49EA267F7(250, 500);
							iVar1 = UNK_0x09AC81E49EA267F7(250, 500);
							UNK_0xDD353D0E9C789D0E(&iVar3);
							UNK_0xD1F0F33C375B8446(false, Local_329[iVar2 /*14*/].f_1, 1, iVar0);
							UNK_0xD1F0F33C375B8446(false, Local_329[iVar2 /*14*/].f_1, 31, iVar1);
							UNK_0x75ABDC5F81978924(iVar3);
							if (!UNK_0xEB6A8945D1AC98A1(Local_329[iVar2 /*14*/]))
							{
								UNK_0x78ADC381772E3D54(Local_329[iVar2 /*14*/], iVar3);
							}
							UNK_0xF82EA857DA10E0CD(&iVar3);
						}
						func_33(&(vLocal_125[iVar2 /*3*/]));
						fLocal_150[iVar2] = UNK_0x79833B02DBD2A244(0f, 3f);
					}
				}
				else
				{
					func_35(&(vLocal_125[iVar2 /*3*/]));
				}
			}
			if (!UNK_0x437347B10A200C4B(Local_329[iVar2 /*14*/], 0))
			{
				if ((UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), Local_329[iVar2 /*14*/]) && !UNK_0x869EFD0BC0868856(Local_329[iVar2 /*14*/])) && !UNK_0xA48EBBEA418ADC94(Local_329[iVar2 /*14*/]))
				{
					Local_329[iVar2 /*14*/].f_11 = 1;
				}
				else if (Local_329[iVar2 /*14*/].f_11)
				{
					UNK_0xDD353D0E9C789D0E(&iVar3);
					UNK_0xE655C47E46F9A7E4(false, Local_329[iVar2 /*14*/].f_9, 1000);
					UNK_0xC6EB89C59F2AF6B8(false, Local_329[iVar2 /*14*/].f_12, Local_329[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, false, 0, 0, 0);
					UNK_0x75ABDC5F81978924(iVar3);
					UNK_0x78ADC381772E3D54(Local_329[iVar2 /*14*/], iVar3);
					UNK_0xF82EA857DA10E0CD(&iVar3);
					Local_329[iVar2 /*14*/].f_11 = 0;
				}
				if (UNK_0x869EFD0BC0868856(Local_329[iVar2 /*14*/]) || UNK_0xA48EBBEA418ADC94(Local_329[iVar2 /*14*/]))
				{
					if (!Local_329[iVar2 /*14*/].f_10 && (UNK_0x869EFD0BC0868856(Local_329[iVar2 /*14*/]) || UNK_0xA48EBBEA418ADC94(Local_329[iVar2 /*14*/])))
					{
						Local_329.f_101++;
					}
					Local_329[iVar2 /*14*/].f_10 = 1;
				}
				else if (Local_329[iVar2 /*14*/].f_10)
				{
					UNK_0xDD353D0E9C789D0E(&iVar3);
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 1000);
					UNK_0xC6EB89C59F2AF6B8(false, "gestures@m@standing@casual", func_81(), 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
					UNK_0xE655C47E46F9A7E4(false, Local_329[iVar2 /*14*/].f_9, 1000);
					UNK_0xC6EB89C59F2AF6B8(false, Local_329[iVar2 /*14*/].f_12, Local_329[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, false, 0, 0, 0);
					UNK_0x75ABDC5F81978924(iVar3);
					UNK_0x78ADC381772E3D54(Local_329[iVar2 /*14*/], iVar3);
					UNK_0xF82EA857DA10E0CD(&iVar3);
					Local_329[iVar2 /*14*/].f_10 = 0;
				}
			}
		}
		iVar2++;
	}
	if (UNK_0xC844350D5D58C99A(Local_329.f_83.f_1) && UNK_0xC844350D5D58C99A(Local_329.f_83))
	{
		if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_329.f_83.f_1, 0))
		{
			bLocal_86 = Local_329.f_83.f_1;
		}
		if (func_85(Local_329.f_83, 1, 0, 0, 0))
		{
			func_83();
			func_82(iLocal_105);
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
		}
		if (!UNK_0xEB6A8945D1AC98A1(Local_329.f_83))
		{
			if (func_26(&uLocal_141))
			{
				if (func_23(&uLocal_141) > fLocal_156)
				{
					if (UNK_0xDF1306B443CD3D15(Local_329.f_83.f_1, 0) && UNK_0xC42A92762C58E1B9(Local_329.f_83, Local_329.f_83.f_1, 0))
					{
						iVar0 = UNK_0x09AC81E49EA267F7(250, 500);
						iVar1 = UNK_0x09AC81E49EA267F7(250, 500);
						UNK_0xDD353D0E9C789D0E(&iVar3);
						UNK_0xD1F0F33C375B8446(false, Local_329.f_83.f_1, 1, iVar0);
						UNK_0xD1F0F33C375B8446(false, Local_329.f_83.f_1, 31, iVar1);
						UNK_0x75ABDC5F81978924(iVar3);
						if (!UNK_0xEB6A8945D1AC98A1(Local_329.f_83))
						{
							UNK_0x78ADC381772E3D54(Local_329.f_83, iVar3);
						}
						UNK_0xF82EA857DA10E0CD(&iVar3);
					}
					func_33(&uLocal_141);
					fLocal_156 = UNK_0x79833B02DBD2A244(0f, 3f);
				}
			}
			else
			{
				func_35(&uLocal_141);
			}
		}
		if (!UNK_0x437347B10A200C4B(Local_329.f_83, 0))
		{
			if ((UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), Local_329.f_83) && !UNK_0x869EFD0BC0868856(Local_329.f_83)) && !UNK_0xA48EBBEA418ADC94(Local_329.f_83))
			{
				Local_329.f_83.f_11 = 1;
			}
			else if (Local_329.f_83.f_11)
			{
				UNK_0xDD353D0E9C789D0E(&iVar3);
				UNK_0xE655C47E46F9A7E4(false, Local_329.f_83.f_9, 1000);
				UNK_0xC6EB89C59F2AF6B8(false, Local_329.f_83.f_12, Local_329.f_83.f_13, 4f, -8f, -1, 1, false, 0, 0, 0);
				UNK_0x75ABDC5F81978924(iVar3);
				UNK_0x78ADC381772E3D54(Local_329.f_83, iVar3);
				UNK_0xF82EA857DA10E0CD(&iVar3);
				Local_329.f_83.f_11 = 0;
			}
			if (UNK_0x869EFD0BC0868856(Local_329.f_83) || UNK_0xA48EBBEA418ADC94(Local_329.f_83))
			{
				if (!Local_329.f_83.f_10)
				{
					Local_329.f_101++;
				}
				Local_329.f_83.f_10 = 1;
			}
			else if (Local_329.f_83.f_10)
			{
				UNK_0xDD353D0E9C789D0E(&iVar3);
				UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 1000);
				UNK_0xC6EB89C59F2AF6B8(false, "gestures@m@standing@casual", func_81(), 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
				UNK_0xE655C47E46F9A7E4(false, Local_329.f_83.f_9, 1000);
				UNK_0xC6EB89C59F2AF6B8(false, Local_329.f_83.f_12, Local_329.f_83.f_13, 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
				UNK_0x75ABDC5F81978924(iVar3);
				UNK_0x78ADC381772E3D54(Local_329.f_83, iVar3);
				UNK_0xF82EA857DA10E0CD(&iVar3);
				iLocal_328 = 4;
				func_33(&uLocal_144);
				Local_329.f_83.f_10 = 0;
			}
		}
	}
}

char* func_81()
{
	int iVar0;
	char* sVar1;

	iVar0 = (UNK_0x09AC81E49EA267F7(false, 65535) % 2);
	switch (iVar0)
	{
		case 0:
			sVar1 = "gesture_what_hard";
			break;
		case 1:
		default:
			sVar1 = "gesture_what_soft";
			break;
	}
	return sVar1;
}

void func_82(int iParam0)
{
	if (iLocal_95 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_136(iParam0, 0, 0);
		}
		iLocal_105 = 263;
		func_90(&iLocal_96);
		iLocal_95 = 9;
	}
}

void func_83()
{
	int iVar0[10];
	int iVar11;
	int iVar12;

	UNK_0x263615A674FCA6E9(UNK_0x16F2683693E537C9(), &iVar0, -1);
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 < iVar0)
	{
		if (UNK_0xC844350D5D58C99A(iVar0[iVar12]) && !UNK_0xEB6A8945D1AC98A1(iVar0[iVar12]))
		{
			if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 4))
			{
				UNK_0xF3268524E9BE6D6E(iVar0[iVar12], UNK_0x16F2683693E537C9(), 100f, -1, 0, 0);
			}
			else
			{
				UNK_0xDD353D0E9C789D0E(&iVar11);
				UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), UNK_0x09AC81E49EA267F7(300, 900));
				UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 0);
				UNK_0x75ABDC5F81978924(iVar11);
				UNK_0x78ADC381772E3D54(iVar0[iVar12], iVar11);
				UNK_0xF82EA857DA10E0CD(&iVar11);
			}
		}
		iVar12++;
	}
	switch (Global_111638.f_19011.f_1)
	{
		case 0:
			func_84(0);
			break;
		case 1:
			func_84(0);
			break;
		case 3:
			func_84(0);
			break;
		case 4:
			func_84(0);
			break;
		case 5:
			func_84(0);
			break;
		case 2:
			func_84(0);
			break;
	}
}

void func_84(int iParam0)
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

bool func_85(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	vector3 vVar1;

	bVar0 = UNK_0x16F2683693E537C9();
	if (Local_329.f_101 >= 3)
	{
		return true;
	}
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			vVar1 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
			if (bParam1)
			{
				if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
				{
					return true;
				}
			}
			if (bParam2)
			{
				if (UNK_0x4734A6196B611C3B(bParam0, bVar0))
				{
					return true;
				}
			}
			if (bParam4)
			{
				if (UNK_0x1B3D109B39CC2C89(bVar0, bParam0))
				{
					return true;
				}
			}
			if (bParam3)
			{
				if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0))
				{
					if (func_86(bParam0, 1) < 20f)
					{
						return true;
					}
				}
			}
			if (UNK_0x405E212DDE472467(bParam0, 0))
			{
				if (UNK_0xB87D13D0C064E9D1(UNK_0x6937EA2286828455(bParam0, 0), bVar0, 1))
				{
					return true;
				}
			}
			if (UNK_0xE9FDA1035CFEA94F(bParam0))
			{
				return true;
			}
			if (UNK_0x03A10A5707B2BB1F(bVar0, 4))
			{
				if (UNK_0x168558745A6AC21E(bVar0))
				{
					if (UNK_0x5A91F08DF773C39D(bParam0, UNK_0x68F4C0EC296D3901(bVar0, true), 45f, 45f, 45f, false, true, 0))
					{
						return true;
					}
				}
			}
			if (UNK_0xD3DCEC81D13AAFB1(vVar1, 4f, true))
			{
				return true;
			}
			if (UNK_0x723EE7F83DF1497D((vVar1.x - 5f), (vVar1.y - 5f), (vVar1.z - 5f), (vVar1.x + 5f), (vVar1.y + 5f), (vVar1.z + 5f), 0))
			{
				return true;
			}
			if (UNK_0x36646919F20EAFFC(bParam0))
			{
				if (UNK_0x710D117BA581D7D2(bParam0) == bVar0)
				{
					return true;
				}
			}
			if ((UNK_0x681F21BF9F7B449B(-1, vVar1, 25f) && !UNK_0x681F21BF9F7B449B(11, vVar1, 25f)) && !UNK_0x681F21BF9F7B449B(13, vVar1, 25f))
			{
				return true;
			}
			UNK_0xE910A68AA670B4AA(bParam0);
		}
		else if (bParam1)
		{
			return true;
		}
	}
	return false;
}

float func_86(bool bParam0, int iParam1)
{
	return func_87(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4()), bParam0, iParam1);
}

float func_87(bool bParam0, bool bParam1, int iParam2)
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

bool func_88(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_89(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!UNK_0xE1DBBD6CE209517C(UNK_0xA30EC016B12C03E4()))
	{
		return false;
	}
	if (func_95(0))
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

int func_89(int iParam0)
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

void func_90(int iParam0)
{
	int iVar0;

	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_89(*iParam0);
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

void func_91(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;

	if (UNK_0x8A22C4C08282BF26(joaat("CONTEXT_CONTROLLER")) < 1)
	{
	}
	if (UNK_0x991B1F0980C62628())
	{
		if (!*iParam0 == -1)
		{
			func_90(iParam0);
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

bool func_92(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam0, 0))
	{
		return false;
	}
	else
	{
		return true;
	}
	return true;
}

void func_93(bool bParam0, bool bParam1, bool bParam2)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	UNK_0x6D99DF8263D35CE5(bParam2);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, -1);
}

bool func_94()
{
	return Global_73825;
}

bool func_95(int iParam0)
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

bool func_96(bool bParam0, int iParam1)
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

bool func_97()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

bool func_98()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_99(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_100()
{
	return true;
}

void func_101(var uParam0, int iParam1)
{
	func_102(uParam0, iParam1);
}

void func_102(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_103()
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

bool func_104(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_67();
				if (!func_69(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_111()) || Global_110685) || Global_30770) || func_110()) || func_96(8, -1)) || func_109()) || func_108()) || func_107()) || func_98()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_111()) || Global_30770) || func_110()) || func_96(8, -1)) || func_107()) || func_109()) || func_108()) || func_98()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_111()) || Global_110685) || Global_30770) || func_110()) || func_96(8, -1)) || func_107()) || func_109()) || func_108()) || func_98()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						Jump @1799; //curOff = 726
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_111()) || Global_110685) || Global_30770) || func_110()) || func_96(8, -1)) || func_109()) || func_108()) || func_98()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						Jump @1799; //curOff = 892
						if (((((func_111() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_96(8, -1)) || func_98()) || func_106()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						Jump @1799; //curOff = 977
						if ((((func_96(8, -1) || func_109()) || func_108()) || func_106()) || func_105())
						{
							return false;
						}
						if ((UNK_0x991B1F0980C62628() && UNK_0x19EC8D83154D7CC1() != 3) && UNK_0x00A15D69BCAA5267() < 8)
						{
							return false;
						}
						Jump @1799; //curOff = 1068
						if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
						{
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_111()) || Global_30770) || func_110()) || func_96(8, -1)) || func_108()) || func_107()) || func_98()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						Jump @1799; //curOff = 1279
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_111()) || func_108()) || Global_110685) || Global_30770) || func_110()) || Global_42596) || func_96(8, -1)) || func_107()) || func_106()) || func_98()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						Jump @1799; //curOff = 1519
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_111()) || Global_110685) || Global_30770) || func_110()) || func_96(8, -1)) || func_107()) || func_106()) || func_109()) || func_108()) || func_98())
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
			}
			else
			{
				return false;
			}
			return true;
		}

bool func_105()
{
	return Global_98783.f_1;
}

bool func_106()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_107()
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

bool func_108()
{
	return Global_98796.f_346 > 0;
}

bool func_109()
{
	return Global_98796.f_345 > 0;
}

bool func_110()
{
	return Global_1312877;
}

bool func_111()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_112()
{
	if (UNK_0x8A22C4C08282BF26(joaat("STRIPPERHOME")) > 0)
	{
		return true;
	}
	return false;
}

var func_113()
{
	return Global_94576;
}

bool func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			if (func_116(6) || func_116(7))
			{
				return true;
			}
			else
			{
				return func_114(3);
			}
			break;
		case 2:
			return true;
		case 3:
			if (func_140(5))
			{
				if (func_104(4))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_115(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return false;
	}
	return UNK_0xE4EDC4B0E92C078B(Global_31146[iVar0 /*23*/].f_19);
}

bool func_116(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_117()
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0xD8A54335F18763BA();
	if ((bVar0 <= bLocal_119 && bVar0 >= bLocal_120) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) != 0)
	{
		return;
	}
	if (bLocal_158)
	{
		func_127();
		func_126();
		switch (iLocal_124)
		{
			case 0:
				func_125(-1930.38f, 4441.9f, 38.12f, 260.86f, -1933.442f, 4440.866f, 37.2504f, 184.125f);
				func_125(-1931.24f, 4440.26f, 38.05f, 257.2117f, -1932.795f, 4438.275f, 37.402f, 78.7749f);
				func_125(-1935.01f, 4442.57f, 37.48f, 263.59f, -1934.964f, 4438.306f, 37.1741f, 297.2304f);
				func_125(-1935.5f, 4440.32f, 37.48f, 258.09f, -1937.251f, 4438.761f, 36.9256f, 23.8377f);
				func_125(-1939.63f, 4440.46f, 37.25f, 253.32f, -1938.319f, 4439.913f, 36.7166f, 250.6112f);
				func_124(-1939.564f, 4443.306f, 36.3803f, 262.3551f, -1936.208f, 4444.125f, 36.8594f, 123.8187f);
				break;
			case 1:
				func_125(-520.2097f, 2010.816f, 203.6035f, 17.0169f, -517.2971f, 2008.383f, 204.0454f, 2.9896f);
				func_125(-516.9937f, 2013.98f, 203.5907f, 19.3803f, -517.1741f, 2010.813f, 203.8412f, 125.7555f);
				func_125(-518.3414f, 2005.449f, 204.1878f, 20.7231f, -519.0882f, 2013.649f, 203.3304f, 195.7951f);
				func_125(-514.8247f, 2008.574f, 204.3629f, 20.2278f, -514.2933f, 2004.923f, 204.5935f, 126.8655f);
				func_124(-516.1545f, 1999.374f, 204.7715f, 18.7907f, -515.4201f, 2003.622f, 204.5549f, 1.757f);
				break;
			case 3:
				func_125(-225.41f, 4227.53f, 44.45f, 82.7f, -231.9795f, 4226.31f, 43.8587f, 353.3938f);
				func_125(-233.16f, 4225.81f, 44.29f, 76.66f, -231.3181f, 4229.25f, 43.8681f, 179.3787f);
				func_125(-233.33f, 4228.89f, 44.35f, 80.88f, -229.4769f, 4226.102f, 43.8909f, 311.8915f);
				func_125(-229.58f, 4225.21f, 44.34f, 75.78f, -227.6066f, 4228.867f, 43.9069f, 186.6535f);
				func_125(-228.85f, 4227.71f, 44.57f, 83.38f, -226.7015f, 4226.683f, 43.8597f, 28.0083f);
				func_124(-225.6736f, 4224.503f, 43.8435f, 77.7579f, -227.2893f, 4224.699f, 43.8335f, 36.55f);
				break;
			case 4:
				func_125(1608.91f, 3845.06f, 33.94f, 307.24f, 1610.476f, 3839.163f, 32.9854f, 29.8332f);
				func_125(1606.2f, 3838.41f, 33.62f, 307.44f, 1612.908f, 3841.492f, 32.9721f, 78.3f);
				func_125(1610.47f, 3842.26f, 33.61f, 311.44f, 1608.097f, 3842.676f, 33.3217f, 198.5355f);
				func_125(1604.49f, 3840.42f, 34.18f, 308.19f, 1608.427f, 3837.368f, 32.9989f, 9.9463f);
				func_124(1603.405f, 3836.324f, 33.1144f, 305.055f, 1605.788f, 3840.236f, 33.2826f, 288.7775f);
				break;
			case 5:
				func_125(2046.772f, 2130.442f, 91.9486f, 233.1493f, 2036.123f, 2133.981f, 92.615f, 260.0519f);
				func_125(2045.344f, 2126.352f, 91.9358f, 236.3633f, 2044.422f, 2128.961f, 92.088f, 47.8797f);
				func_125(2036.512f, 2137.807f, 92.6507f, 237.2446f, 2041.778f, 2131.354f, 92.4544f, 226.7534f);
				func_125(2041.739f, 2134.324f, 92.4013f, 232.956f, 2039.603f, 2132.563f, 92.6648f, 61.0834f);
				func_125(2039.775f, 2130.025f, 92.5324f, 241.6337f, 2038.744f, 2134.523f, 92.6235f, 128.98f);
				func_124(2030.898f, 2134.197f, 92.5014f, 249.4471f, 2036.58f, 2135.382f, 92.605f, 233.2111f);
				break;
			case 2:
				func_125(2992.58f, 2786.28f, 43.21f, 26.81f, 2998.772f, 2777.392f, 42.1008f, 29.7228f);
				func_125(2995.76f, 2787.72f, 43.26f, 33.42f, 2993.12f, 2779.783f, 42.3128f, 286.9825f);
				func_125(2994.91f, 2779.79f, 42.73f, 11.43f, 2999.253f, 2783.97f, 42.5421f, 108.7426f);
				func_125(2999.44f, 2781.11f, 43.11f, 23.89f, 2997.582f, 2787.476f, 42.6953f, 157.4885f);
				func_125(3000.06f, 2775.26f, 42.47f, 17.16f, 2994.719f, 2784.905f, 42.6444f, 213.8879f);
				func_124(2995.525f, 2775.522f, 41.98f, 4.3249f, 2993.511f, 2776.948f, 42.0941f, 305.3785f);
				break;
		}
		switch (iLocal_124)
		{
			case 0:
				bVar1 = "CanyonCliffs_Start";
				break;
			case 1:
				bVar1 = "RidgeRun_Start";
				break;
			case 3:
				bVar1 = "ValleyTrail_Start";
				break;
			case 4:
				bVar1 = "LakesideSplash_Start";
				break;
			case 5:
				bVar1 = "EcoFriendly_Start";
				break;
			case 2:
				bVar1 = "MinewardSpiral_Start";
				break;
		}
		if (!UNK_0xEA6BC48857E0AC4C(bVar1))
		{
			if (UNK_0xDA8F5DDC86FE3C26(bVar1))
			{
				if (!UNK_0x8ED9A0095B69A728(bVar1))
				{
					UNK_0x2723524E448F4BDD(bVar1, true);
				}
			}
		}
	}
	func_118();
}

void func_118()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;

	if (fLocal_110 > 9f)
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_329)
		{
			if (!func_123(Local_329[iVar5 /*14*/].f_2))
			{
				Local_329[iVar5 /*14*/].f_1 = UNK_0x122AAB0B1D6F55AD(func_122(0), Local_329[iVar5 /*14*/].f_2, Local_329[iVar5 /*14*/].f_5, true, true, false);
				UNK_0xB9FD7450C0DAB575(Local_329[iVar5 /*14*/].f_1, 1084227584 /* Float: 5f */);
				UNK_0x44A200C9B6E1CEA6(Local_329[iVar5 /*14*/].f_1, true);
				if (func_123(Local_329[iVar5 /*14*/].f_6))
				{
					Local_329[iVar5 /*14*/] = UNK_0x852A19533F896693(Local_329[iVar5 /*14*/].f_1, 4, func_121(), -1, 1, true);
					UNK_0x56FDC9ADE35F7DB0(Local_329[iVar5 /*14*/].f_1, true, false, 0);
				}
				else
				{
					Local_329[iVar5 /*14*/] = UNK_0x36F2404464202779(4, func_121(), Local_329[iVar5 /*14*/].f_6, Local_329[iVar5 /*14*/].f_9, 1, true);
					iVar1 = iVar5;
					switch (iVar1)
					{
						case 0:
						case 3:
							bVar4 = "idle_a";
							break;
						case 1:
						case 4:
							bVar4 = "idle_b";
							break;
						default:
							bVar4 = "idle_c";
							break;
					}
					iVar2 = iVar5;
					switch (iVar2)
					{
						case 0:
						case 4:
							bVar3 = "amb@world_human_hang_out_street@male_a@idle_a";
							break;
						case 1:
						case 3:
							bVar3 = "amb@world_human_hang_out_street@male_b@idle_a";
							break;
						case 2:
						case 5:
							bVar3 = "amb@world_human_hang_out_street@male_c@idle_a";
							break;
					}
					Local_329[iVar5 /*14*/].f_12 = bVar3;
					Local_329[iVar5 /*14*/].f_13 = bVar4;
					UNK_0xDD353D0E9C789D0E(&iVar0);
					UNK_0x78A77CDD64392938(false, UNK_0x09AC81E49EA267F7(100, 500));
					UNK_0xC6EB89C59F2AF6B8(false, bVar3, bVar4, 8f, -8f, -1, 8193, UNK_0x79833B02DBD2A244(0f, 1f), 0, 0, 0);
					UNK_0x75ABDC5F81978924(iVar0);
					UNK_0x78ADC381772E3D54(Local_329[iVar5 /*14*/], iVar0);
					UNK_0xF82EA857DA10E0CD(&iVar0);
				}
				UNK_0xCC095276B3DD380E(Local_329[iVar5 /*14*/], 1);
				UNK_0x83F619A03CDDE284(Local_329[iVar5 /*14*/], 1, 4096, -1);
			}
			iVar5++;
		}
		Local_329.f_83.f_1 = UNK_0x122AAB0B1D6F55AD(func_122(1), Local_329.f_83.f_2, Local_329.f_83.f_5, true, true, false);
		UNK_0xB9FD7450C0DAB575(Local_329.f_83.f_1, 1084227584 /* Float: 5f */);
		UNK_0x44A200C9B6E1CEA6(Local_329.f_83.f_1, true);
		if (func_123(Local_329.f_83.f_6))
		{
			Local_329.f_83 = UNK_0x852A19533F896693(Local_329.f_83.f_1, 4, func_121(), -1, 1, true);
			UNK_0x56FDC9ADE35F7DB0(Local_329.f_83.f_1, true, false, 0);
		}
		else
		{
			Local_329.f_83 = UNK_0x36F2404464202779(4, func_121(), Local_329.f_83.f_6, Local_329.f_83.f_9, 1, true);
			iVar1 = (UNK_0x09AC81E49EA267F7(false, 65535) % 3);
			switch (iVar1)
			{
				case 0:
					bVar4 = "idle_a";
					break;
				case 1:
					bVar4 = "idle_b";
					break;
				default:
					bVar4 = "idle_c";
					break;
			}
			Local_329.f_83.f_12 = "amb@world_human_aa_smoke@male@idle_a";
			Local_329.f_83.f_13 = bVar4;
			UNK_0xDD353D0E9C789D0E(&iVar0);
			UNK_0x93D47DFD0AE94949(false, func_120((UNK_0x09AC81E49EA267F7(false, 65535) % 1000), 1, 1000));
			UNK_0xC6EB89C59F2AF6B8(false, "amb@world_human_aa_smoke@male@idle_a", bVar4, 8f, -8f, -1, 1, UNK_0x79833B02DBD2A244(0f, 1f), 0, 0, 0);
			UNK_0x75ABDC5F81978924(iVar0);
			UNK_0x78ADC381772E3D54(Local_329.f_83, iVar0);
			UNK_0xF82EA857DA10E0CD(&iVar0);
		}
	}
	else if (fLocal_110 < 225f)
	{
	}
	bLocal_157 = Local_329.f_83;
	if (!UNK_0x437347B10A200C4B(Local_329[0 /*14*/], 0))
	{
		func_119(&uLocal_163, 1, Local_329[0 /*14*/], "MALE1", 0, 1);
	}
	if (!UNK_0x437347B10A200C4B(Local_329[1 /*14*/], 0))
	{
		func_119(&uLocal_163, 2, Local_329[1 /*14*/], "MALE2", 0, 1);
	}
	if (!UNK_0x437347B10A200C4B(Local_329[2 /*14*/], 0))
	{
		func_119(&uLocal_163, 3, Local_329[3 /*14*/], "MALE3", 0, 1);
	}
	if (!func_26(&uLocal_147))
	{
		func_35(&uLocal_147);
	}
	else
	{
		func_33(&uLocal_147);
	}
}

void func_119(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

int func_120(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_121()
{
	return joaat("A_M_Y_MOTOX_01");
}

int func_122(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_329.f_71)
	{
		if (UNK_0x4DAC2AD66FE0E696(Local_329.f_71[iVar1]))
		{
			bVar0++;
		}
		iVar1++;
	}
	if (iLocal_124 == 1)
	{
		if (!bParam0)
		{
			bVar0 = (bVar0 - 1);
		}
	}
	bVar0 = UNK_0x09AC81E49EA267F7(false, bVar0);
	if (Local_329.f_71[bVar0] == 0)
	{
		if (Local_329.f_71[0] == 0)
		{
			switch (iLocal_124)
			{
				case 0:
					return joaat("SANCHEZ");
				case 1:
					return joaat("MESA");
				case 3:
					return joaat("SANCHEZ");
				case 4:
					return joaat("SANCHEZ");
				case 5:
					return joaat("MESA");
				case 2:
					return joaat("SANCHEZ");
			}
		}
		else
		{
			return Local_329.f_71[0];
		}
	}
	return Local_329.f_71[bVar0];
}

bool func_123(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_124(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7)
{
	if (func_123(Local_329.f_83.f_2))
	{
		Local_329.f_83.f_2 = { vParam0 };
		Local_329.f_83.f_5 = fParam3;
		Local_329.f_83.f_6 = { vParam4 };
		Local_329.f_83.f_9 = fParam7;
	}
}

void func_125(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Local_329)
	{
		if (!bVar1 && func_123(Local_329[iVar0 /*14*/].f_2))
		{
			Local_329[iVar0 /*14*/].f_2 = { vParam0 };
			Local_329[iVar0 /*14*/].f_5 = fParam3;
			Local_329[iVar0 /*14*/].f_6 = { vParam4 };
			Local_329[iVar0 /*14*/].f_9 = fParam7;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
	}
}

void func_126()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_329)
	{
		Local_329[iVar0 /*14*/].f_2 = { 0f, 0f, 0f };
		Local_329[iVar0 /*14*/].f_5 = 0f;
		iVar0++;
	}
	Local_329.f_83.f_2 = { 0f, 0f, 0f };
	Local_329.f_83.f_5 = 0f;
}

void func_127()
{
	switch (iLocal_124)
	{
		case 0:
			UNK_0xB5376EA942202450(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1, false, 1);
			UNK_0x28F5E4DA506AC0CA(-227.43f, 3888.9f, 36.41f, 50f, 1, 0, 0, 0, false, 0);
			UNK_0xCD7D80FD792F9954("WORLD_HUMAN_HIKER", false);
			break;
		case 1:
			UNK_0xB5376EA942202450(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 0, false, 1);
			break;
		case 3:
			UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", false);
			UNK_0xB5376EA942202450(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1, false, 1);
			UNK_0x10F452EDECF82313(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 0, 0, 0, 0, 0, 0);
			UNK_0xB5376EA942202450(-196.58f, 4217.64f, 50.083f, -202.574f, 4210.926f, 40.0262f, 10f, 1, false, 1);
			UNK_0xCD7D80FD792F9954("WORLD_HUMAN_HIKER", false);
			UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_EMPTY", false);
			UNK_0xCD7D80FD792F9954("WORLD_MOUNTAIN_LION_WANDER", false);
			break;
		case 4:
			UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", false);
			UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_EMPTY", true);
			UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_BIKE_OFF_ROAD_RACE", true);
			break;
		case 5:
			UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_BICYCLE_MOUNTAIN", false);
			UNK_0xB5376EA942202450(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 100f, 1, false, 1);
			UNK_0x10F452EDECF82313(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 0, 0, 0, 0, 0, 0);
			break;
		case 2:
			UNK_0x2723524E448F4BDD("QUARRY", false);
			UNK_0xB5376EA942202450(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1, false, 1);
			UNK_0x10F452EDECF82313(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 0, 0, 0, 0, 0, 0);
			break;
	}
}

bool func_128()
{
	return ((((((((func_129(&(Local_329.f_71)) && func_129(&(Local_329.f_77))) && func_129(&(Local_329.f_99))) && UNK_0xB4AE0788C1587752("amb@world_human_hang_out_street@male_a@idle_a")) && UNK_0xB4AE0788C1587752("amb@world_human_hang_out_street@male_b@idle_a")) && UNK_0xB4AE0788C1587752("amb@world_human_hang_out_street@male_c@idle_a")) && UNK_0xB4AE0788C1587752("amb@world_human_aa_smoke@male@idle_a")) && UNK_0xB4AE0788C1587752("random@street_race")) && UNK_0xB4AE0788C1587752("gestures@m@standing@casual"));
}

int func_129(var uParam0)
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
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_130()
{
	char cVar0[64];

	func_132(&(Local_329.f_77), joaat("A_M_Y_MOTOX_01"));
	func_132(&(Local_329.f_99), joaat("A_M_Y_MOTOX_01"));
	switch (iLocal_124)
	{
		case 0:
			func_132(&(Local_329.f_71), joaat("SANCHEZ"));
			func_132(&(Local_329.f_71), joaat("BLAZER"));
			break;
		case 1:
			func_132(&(Local_329.f_71), joaat("MESA"));
			func_132(&(Local_329.f_71), joaat("BJXL"));
			func_132(&(Local_329.f_71), joaat("PATRIOT"));
			func_132(&(Local_329.f_71), joaat("DUBSTA2"));
			func_132(&(Local_329.f_71), joaat("BFINJECTION"));
			break;
		case 3:
			func_132(&(Local_329.f_71), joaat("SANCHEZ"));
			func_132(&(Local_329.f_71), joaat("BLAZER"));
			break;
		case 4:
			func_132(&(Local_329.f_71), joaat("SANCHEZ"));
			func_132(&(Local_329.f_71), joaat("BLAZER"));
			break;
		case 5:
			func_132(&(Local_329.f_71), joaat("MESA"));
			func_132(&(Local_329.f_71), joaat("BFINJECTION"));
			func_132(&(Local_329.f_71), joaat("BJXL"));
			func_132(&(Local_329.f_71), joaat("SADLER"));
			func_132(&(Local_329.f_71), joaat("REBEL"));
			break;
		case 2:
			func_132(&(Local_329.f_71), joaat("SANCHEZ"));
			func_132(&(Local_329.f_71), joaat("BLAZER"));
			break;
	}
	UNK_0x3F423BF5B8125A50("amb@world_human_hang_out_street@male_a@idle_a");
	UNK_0x3F423BF5B8125A50("amb@world_human_hang_out_street@male_b@idle_a");
	UNK_0x3F423BF5B8125A50("amb@world_human_hang_out_street@male_c@idle_a");
	UNK_0x3F423BF5B8125A50("amb@world_human_aa_smoke@male@idle_a");
	UNK_0x3F423BF5B8125A50("random@street_race");
	UNK_0x3F423BF5B8125A50("gestures@m@standing@casual");
	if (iLocal_124 == 0)
	{
		UNK_0x523BCC9DC80CD82F(joaat("PROP_FNCWOOD_14C"));
		UNK_0x523BCC9DC80CD82F(joaat("PROP_FNCWOOD_14E"));
	}
	StringCopy(&cVar0, "offroadrace", 64);
	switch (iLocal_124)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 64);
			break;
		case 1:
			StringIntConCat(&cVar0, 2, 64);
			break;
		case 2:
			StringIntConCat(&cVar0, 6, 64);
			break;
		case 3:
			StringIntConCat(&cVar0, 3, 64);
			break;
		case 4:
			StringIntConCat(&cVar0, 4, 64);
			break;
		case 5:
			StringIntConCat(&cVar0, 5, 64);
			break;
	}
	StringConCat(&cVar0, "car", 64);
	UNK_0x36187931D29E5BBE(true, &cVar0);
	func_131(&(Local_329.f_77));
	func_131(&(Local_329.f_71));
	func_131(&(Local_329.f_99));
}

void func_131(var uParam0)
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

int func_132(var uParam0, int iParam1)
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
	iVar1 = func_133(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_133(var uParam0)
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

void func_134(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_135(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_136(int iParam0, bool bParam1, bool bParam2)
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

bool func_137()
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

bool func_138()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_139(int iParam0, bool bParam1)
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

int func_140(int iParam0)
{
	return func_141(iParam0, Global_41431);
}

int func_141(int iParam0, int iParam1)
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

bool func_142(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_143()
{
	StringCopy(&cLocal_53, "Offroad_Races", 64);
	UNK_0xDF8BDD00CF1D4043(1);
	bLocal_117 = (6f + 4f);
	bLocal_99 = 4;
	func_101(&uLocal_94, 4194304);
	iLocal_97 = 35000;
	bLocal_86 = false;
	bLocal_119 = false;
	bLocal_120 = 25;
	iLocal_103 = 0;
	iLocal_124 = func_147(vLocal_90, &vLocal_121);
	iLocal_105 = func_146(iLocal_124);
	fLocal_102 = (SYSTEM::TO_FLOAT(func_145(iLocal_105)) + 5f);
	if (func_139(0, bLocal_99))
	{
		bLocal_158 = true;
	}
	else
	{
		func_82(iLocal_105);
		bLocal_158 = false;
	}
	if (iLocal_124 > Global_111638.f_19011.f_1)
	{
		if (func_115(func_146(iLocal_124)))
		{
		}
		iLocal_105 = 263;
		func_82(iLocal_105);
	}
	if (!func_115(func_146(iLocal_124)) && UNK_0x0F1CCD77290EE12F())
	{
		if (iLocal_105 != 263)
		{
			if (func_144(iLocal_105, 1))
			{
				iLocal_105 = 263;
			}
		}
		func_82(iLocal_105);
	}
	if (iLocal_124 == 2)
	{
		bLocal_119 = 20;
		bLocal_120 = 3;
	}
	if (iLocal_124 == 1 || iLocal_124 == 5)
	{
		bLocal_101 = "PLAY_OFFROAD_V";
	}
	else
	{
		bLocal_101 = "PLAY_OFFROAD_M";
	}
}

bool func_144(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return false;
	}
	if (bParam1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, 15);
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, false);
}

int func_145(int iParam0)
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

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 70;
		case 1:
			return 71;
		case 3:
			return 73;
		case 4:
			return 74;
		case 5:
			return 75;
		case 2:
			return 72;
		default:
			break;
	}
	return 263;
}

int func_147(vector3 vParam0, var uParam3)
{
	int iVar0;
	vector3 vVar1[7];
	float fVar23;
	int iVar24;
	float fVar25;

	iVar0 = 0;
	vVar1[0 /*3*/] = { func_148(0) };
	vVar1[1 /*3*/] = { func_148(1) };
	vVar1[3 /*3*/] = { func_148(3) };
	vVar1[4 /*3*/] = { func_148(4) };
	vVar1[5 /*3*/] = { func_148(5) };
	vVar1[2 /*3*/] = { func_148(2) };
	vVar1[6 /*3*/] = { func_148(6) };
	fVar23 = SYSTEM::VDIST2(vParam0, vVar1[0 /*3*/]);
	iVar24 = 0;
	fVar25 = 0f;
	iVar24 = 1;
	while (iVar24 <= (7 - 1))
	{
		fVar25 = SYSTEM::VDIST2(vParam0, vVar1[iVar24 /*3*/]);
		if (fVar25 < fVar23)
		{
			iVar0 = iVar24;
			fVar23 = fVar25;
		}
		iVar24++;
	}
	*uParam3 = { vVar1[iVar0 /*3*/] };
	return iVar0;
}

Vector3 func_148(int iParam0)
{
	if (iParam0 >= 7 || iParam0 <= -1)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -1939.483f, 4443.953f, 37.3474f;
		case 1:
			return -516.9256f, 2008.014f, 204.0998f;
		case 3:
			return -223.6755f, 4224.644f, 43.7304f;
		case 4:
			return 1606.578f, 3841.188f, 33.2931f;
		case 5:
			return 2037.664f, 2137.386f, 92.7095f;
		case 2:
			return 2996.776f, 2774.085f, 43.26f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_149(var uParam0, int iParam1)
{
	func_150(uParam0, iParam1);
}

void func_150(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_151(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_136(iLocal_105, 0, 0);
		}
	}
	func_90(&iLocal_96);
	if (func_142(uLocal_94, 2))
	{
		func_5();
		func_149(&uLocal_94, 2);
		func_20(&iLocal_98);
	}
	iLocal_98 = -1;
	func_152();
	UNK_0x10FAF14A60A0DBE1();
}

void func_152()
{
	func_149(&uLocal_94, 4);
	func_153();
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

void func_153()
{
}

