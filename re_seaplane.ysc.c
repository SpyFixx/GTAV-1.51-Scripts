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
	vector3 vLocal_43 = { 0f, 0f, 0f };
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<6> Local_49[11];
	struct<4> Local_116[5];
	bool bLocal_137 = false;
	bool bLocal_138 = false;
	vector3 vLocal_139 = { 0f, 0f, 0f };
	vector3 vLocal_142 = { 0f, 0f, 0f };
	vector3 vLocal_145 = { 0f, 0f, 0f };
	int iLocal_148 = 0;
	bool bLocal_149 = false;
	var uLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	bool bLocal_153 = false;
	bool bLocal_154 = false;
	bool bLocal_155 = false;
	bool bLocal_156 = false;
	bool bLocal_157 = false;
	var uLocal_158 = 2;
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
	bool bLocal_171 = false;
	int iLocal_172[1] = { 0 };
	var uLocal_174 = 16;
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
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	int iLocal_339 = 0;
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
	bLocal_137 = "RE_SeaPlane1";
	bLocal_138 = "RE_SeaPlane2";
	vLocal_139 = { 0f, 0f, 0f };
	vLocal_145 = { 3097.46f, 2181.55f, 0.5f };
	iLocal_151 = -1;
	iLocal_152 = -1;
	bLocal_153 = joaat("DODO");
	bLocal_154 = joaat("TROPIC");
	bLocal_155 = joaat("G_M_Y_MEXGOON_02");
	bLocal_156 = joaat("SUNTRAP");
	bLocal_157 = joaat("G_M_Y_ARMGOON_02");
	vLocal_142 = { ScriptParam_0.f_1[0 /*3*/] };
	if (UNK_0x2EBF608FFE6CA406(11))
	{
		if (func_199(Local_116[0 /*4*/]))
		{
			UNK_0x71EDC33E5A423750(Local_116[0 /*4*/], 2);
		}
		func_169(1, 0);
	}
	if (func_168() && func_125(vLocal_142, 32, 0, 0, 1))
	{
		func_122(32);
	}
	else
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		if ((UNK_0x338D6FF72D84D90F() || func_121(1)) || func_121(4))
		{
			if (func_121(7))
			{
				func_82();
			}
			switch (iLocal_47)
			{
				case 0:
					func_35();
					break;
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			if (func_199(Local_116[0 /*4*/]))
			{
				UNK_0x71EDC33E5A423750(Local_116[0 /*4*/], 2);
			}
			func_169(1, 0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	switch (iLocal_48)
	{
		case 0:
			iLocal_48 = 1;
			break;
		case 1:
			switch (iLocal_148)
			{
				case 0:
					iLocal_48 = 2;
					break;
			}
			break;
		case 2:
			func_2();
			break;
	}
}

void func_2()
{
	func_32(66, 1);
	func_32(67, 1);
	func_6(-1, 0);
	func_3();
	func_169(1, 0);
}

void func_3()
{
	func_4();
}

int func_4()
{
	if (func_5(0))
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

bool func_5(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_6(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_29(iParam0))
	{
		func_28(iParam0, bParam1);
		if (!func_27(51))
		{
			func_17("RE_REWARD", 1, 0, 4000, 10000, func_20(), 0, 138, 0);
			func_16(51);
		}
		if (func_15(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_14(iParam0, bParam1) != 322)
		{
			func_8(func_14(iParam0, bParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_111626 = bParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_7(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_7(int iParam0)
{
	Global_111624 = iParam0;
}

void func_8(int iParam0, var uParam1, var uParam2)
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
		func_12((891 + iParam0), 1, -1, 1);
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
		func_9();
	}
}

void func_9()
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
		func_11(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_10() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_4();
				}
			}
		}
	}
}

int func_10()
{
	return Global_30768;
}

int func_11(int iParam0, bool bParam1)
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

int func_12(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_13();
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

int func_13()
{
	return Global_1312745;
}

int func_14(int iParam0, bool bParam1)
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

bool func_15(int iParam0)
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

void func_16(int iParam0)
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

void func_17(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_18(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_18(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_19();
	}
}

void func_19()
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

int func_20()
{
	func_21();
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

void func_21()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_25(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_24(UNK_0x16F2683693E537C9());
			if (func_23(iVar0) && (!func_22(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_23(Global_111638.f_2358.f_539.f_4321))
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

bool func_22(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return func_26(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_26(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_27(int iParam0)
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

void func_28(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), bParam1);
}

int func_29(int iParam0)
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

int func_30()
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, UNK_0xBB0808A181D4745C(), 64);
	iVar16 = func_31(Var0);
	return iVar16;
}

int func_31(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_32(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_34(iParam0, 0))
		{
			func_33(iParam0, 1, 0);
			func_33(iParam0, 2, 0);
			func_33(iParam0, 3, 0);
			func_33(iParam0, 4, 0);
			func_33(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_33(iParam0, 0, 0);
	}
}

void func_33(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_32744[iParam0]), bParam1);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_32744[iParam0]), bParam1);
	}
}

bool func_34(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], bParam1);
}

void func_35()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	switch (iLocal_48)
	{
		case 0:
			func_69();
			func_68(7);
			UNK_0x523BCC9DC80CD82F(bLocal_154);
			iLocal_48 = 1;
			break;
		case 1:
			switch (iLocal_148)
			{
				case 0:
					if (UNK_0xB87F6CF6E5628C67(bLocal_154))
					{
						UNK_0x523BCC9DC80CD82F(bLocal_153);
						iLocal_148++;
					}
					break;
				case 1:
					if (UNK_0xB87F6CF6E5628C67(bLocal_153))
					{
						UNK_0x523BCC9DC80CD82F(bLocal_155);
						iLocal_148++;
					}
					break;
				case 2:
					if (UNK_0xB87F6CF6E5628C67(bLocal_155))
					{
						UNK_0x523BCC9DC80CD82F(bLocal_156);
						iLocal_148++;
					}
					break;
				case 3:
					if (UNK_0xB87F6CF6E5628C67(bLocal_156))
					{
						UNK_0x523BCC9DC80CD82F(bLocal_157);
						iLocal_148++;
					}
					break;
				case 4:
					if (UNK_0xB87F6CF6E5628C67(bLocal_157))
					{
						UNK_0x29398344B9E5B8A7(bLocal_137);
						iLocal_148++;
					}
					break;
				case 5:
					if (UNK_0x1C2E18E9C63BEB77(bLocal_137))
					{
						UNK_0x29398344B9E5B8A7(bLocal_138);
						iLocal_148++;
					}
					break;
				case 6:
					if ((((((UNK_0xB87F6CF6E5628C67(bLocal_154) && UNK_0xB87F6CF6E5628C67(bLocal_153)) && UNK_0xB87F6CF6E5628C67(bLocal_155)) && UNK_0xB87F6CF6E5628C67(bLocal_157)) && UNK_0xB87F6CF6E5628C67(bLocal_156)) && UNK_0x1C2E18E9C63BEB77(bLocal_137)) && UNK_0x1C2E18E9C63BEB77(bLocal_138))
					{
						func_64(0, vLocal_139, -1f, 1);
						UNK_0x71199B01895C6202(bLocal_153);
						func_64(1, vLocal_139, -1082130432 /* Float: -1f */, 0);
						func_64(2, vLocal_139, -1082130432 /* Float: -1f */, 0);
						iVar0 = 0;
						while (iVar0 <= 4)
						{
							func_55(iVar0, 0, vLocal_139, -1082130432 /* Float: -1f */);
							iVar0++;
						}
						func_45(1);
						iLocal_148++;
					}
					break;
				case 7:
					if (func_44())
					{
						func_43(&(Local_116[0 /*4*/].f_1));
						func_68(1);
						UNK_0x0E2400AB9174FA81(5, joaat("PLAYER"), bLocal_171);
						UNK_0x0E2400AB9174FA81(5, bLocal_171, joaat("PLAYER"));
						func_64(3, vLocal_139, -1082130432 /* Float: -1f */, 0);
						func_64(4, vLocal_139, -1082130432 /* Float: -1f */, 0);
						UNK_0x71199B01895C6202(bLocal_154);
						UNK_0x71199B01895C6202(bLocal_156);
						func_55(7, 0, vLocal_139, -1082130432 /* Float: -1f */);
						func_55(8, 0, vLocal_139, -1082130432 /* Float: -1f */);
						func_55(9, 0, vLocal_139, -1082130432 /* Float: -1f */);
						func_55(10, 0, vLocal_139, -1082130432 /* Float: -1f */);
						UNK_0x71199B01895C6202(bLocal_155);
						UNK_0x71199B01895C6202(bLocal_157);
						iLocal_148++;
					}
					if (func_42())
					{
						if (!UNK_0xBADF5264209B7544(UNK_0x16F2683693E537C9()))
						{
							UNK_0x0E2400AB9174FA81(5, joaat("PLAYER"), bLocal_171);
							UNK_0x0E2400AB9174FA81(5, bLocal_171, joaat("PLAYER"));
						}
						else if (!func_121(2))
						{
							UNK_0x0E2400AB9174FA81(3, joaat("PLAYER"), bLocal_171);
							UNK_0x0E2400AB9174FA81(3, bLocal_171, joaat("PLAYER"));
						}
					}
					break;
				case 8:
					bVar1 = true;
					iVar2 = 0;
					while (iVar2 <= 10)
					{
						if (!func_39(iVar2, 0))
						{
							bVar1 = false;
						}
						iVar2++;
					}
					if (bVar1)
					{
						iLocal_148++;
					}
					break;
				case 9:
					if (func_199(Local_116[0 /*4*/]))
					{
						if (func_38(UNK_0x16F2683693E537C9(), vLocal_145, 1) >= 200f && func_38(Local_116[0 /*4*/], vLocal_145, 1) >= 200f)
						{
							iLocal_48 = 2;
						}
					}
					else
					{
						func_37();
					}
					break;
			}
			break;
		case 2:
			func_36(1);
			break;
	}
}

void func_36(int iParam0)
{
	iLocal_148 = 0;
	iLocal_48 = 0;
	iLocal_47 = iParam0;
}

void func_37()
{
	if (func_199(Local_116[0 /*4*/]))
	{
		UNK_0x71EDC33E5A423750(Local_116[0 /*4*/], 2);
	}
	func_169(1, 0);
}

float func_38(bool bParam0, vector3 vParam1, int iParam4)
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

bool func_39(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_199(Local_49[iParam0 /*6*/]))
	{
		return true;
	}
	else
	{
		if (func_41(Local_49[iParam0 /*6*/], UNK_0x16F2683693E537C9(), 1) >= 400f)
		{
			func_40(iParam0, 0);
			return true;
		}
		if (bParam1)
		{
			iVar0 = iParam0;
			if (iVar0 >= 7 && !UNK_0xE4EDC4B0E92C078B(Local_49[iParam0 /*6*/].f_1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_40(int iParam0, bool bParam1)
{
	if (UNK_0xC844350D5D58C99A(Local_49[iParam0 /*6*/]))
	{
		func_43(&(Local_49[iParam0 /*6*/].f_1));
		if ((((func_199(Local_49[iParam0 /*6*/]) && UNK_0xD59B17D2DFF98E26(Local_49[iParam0 /*6*/])) && !UNK_0x405E212DDE472467(Local_49[iParam0 /*6*/], 1)) && !UNK_0x0E0E6175453415CB(Local_49[iParam0 /*6*/])) && !UNK_0x81A5359F25512A04(Local_49[iParam0 /*6*/]))
		{
			UNK_0x15AFB6CBDE990FB6(Local_49[iParam0 /*6*/], 1, true);
		}
		if (bParam1)
		{
			UNK_0xEBA53F35D0085654(&(Local_49[iParam0 /*6*/]));
		}
		else
		{
			UNK_0x6DAD7906B73F064D(&(Local_49[iParam0 /*6*/]));
		}
		Local_49[iParam0 /*6*/].f_3 = 0;
		Local_49[iParam0 /*6*/].f_2 = 0;
	}
}

float func_41(bool bParam0, bool bParam1, int iParam2)
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

bool func_42()
{
	return UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 3150.508f, 2179.343f, -3.388727f, 3064.608f, 2223.616f, 12.38177f, 103f, 0, true, 0);
}

void func_43(bool bParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		UNK_0x661342B9651D16E2(*bParam0, false);
		UNK_0x142CC44DB769B57E(bParam0);
	}
}

bool func_44()
{
	if (func_199(Local_116[0 /*4*/]) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_116[0 /*4*/], 0))
	{
		return true;
	}
	return false;
}

int func_45(bool bParam0)
{
	if (func_49())
	{
		Global_111628 = 1;
		Global_111625 = UNK_0x1C0640BA9A7327B3();
		if (func_15(Global_111627))
		{
			func_46(0);
		}
		UNK_0x974531784BE14213(1, "RE_TITLE");
		if (bParam0 && func_15(Global_111627))
		{
			UNK_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_46(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_47(func_48(iParam0), -1);
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
					func_47(func_48(iParam0), -1);
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
					func_47(func_48(iParam0), -1);
					Global_111638.f_24990.f_4++;
					UNK_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_47(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_48(int iParam0)
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

bool func_49()
{
	switch (func_50(&Global_30827, 0, 5, 0, UNK_0x0D0A574C76D769AC()))
	{
		case 1:
			return true;
		case 0:
			return true;
	}
	return false;
}

int func_50(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_54(0))
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
		if (!func_52(iParam2))
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
			func_51(uParam0, iParam4);
		}
	}
	return 2;
}

void func_51(var uParam0, int iParam1)
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

bool func_52(int iParam0)
{
	return func_53(iParam0, Global_41431);
}

int func_53(int iParam0, int iParam1)
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

bool func_54(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_52(iParam0))
	{
		return false;
	}
	return true;
}

int func_55(int iParam0, bool bParam1, vector3 vParam2, float fParam5)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	vector3 vVar9;
	vector3 vVar12;
	int iVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	float fVar20;
	float fVar21;
	bool bVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	bool bVar56;
	int iVar57;
	bool bVar58;
	int iVar59;
	int iVar60;
	bool bVar61;
	bool bVar62;
	bool bVar63;
	int iVar64;
	bool bVar65;
	bool bVar66;
	bool bVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	bool bVar71;
	bool bVar72;
	bool bVar73;
	bool bVar74;

	if (!UNK_0xC844350D5D58C99A(Local_49[iParam0 /*6*/]))
	{
		bVar5 = joaat("WEAPON_UNARMED");
		bVar6 = false;
		bVar7 = -1;
		vVar9 = { vLocal_139 };
		vVar12 = { vLocal_139 };
		iVar15 = 0;
		iVar16 = 1;
		bVar17 = false;
		bVar18 = false;
		bVar19 = true;
		fVar20 = 0.75f;
		fVar21 = 0.95f;
		bVar22 = 60f;
		fVar23 = 5f;
		fVar24 = 120f;
		fVar25 = -90f;
		fVar26 = 90f;
		bVar27 = 125f;
		bVar28 = bLocal_171;
		bVar29 = true;
		bVar30 = true;
		bVar31 = false;
		bVar32 = true;
		bVar33 = true;
		bVar34 = false;
		bVar35 = false;
		bVar36 = false;
		bVar37 = false;
		bVar38 = true;
		bVar39 = true;
		bVar40 = true;
		bVar41 = false;
		bVar42 = true;
		bVar43 = false;
		bVar44 = true;
		bVar45 = true;
		bVar46 = true;
		iVar47 = 1;
		bVar48 = true;
		bVar49 = true;
		bVar50 = false;
		bVar51 = false;
		bVar52 = false;
		bVar53 = false;
		bVar54 = false;
		bVar55 = false;
		bVar56 = true;
		iVar57 = 0;
		bVar58 = false;
		iVar59 = 0;
		iVar60 = 1;
		bVar61 = true;
		bVar62 = false;
		bVar63 = false;
		iVar64 = 0;
		bVar65 = false;
		bVar66 = false;
		bVar67 = false;
		bVar68 = false;
		bVar69 = false;
		bVar70 = false;
		bVar71 = false;
		bVar72 = false;
		bVar73 = false;
		switch (iParam0)
		{
			case 0:
				bVar4 = bLocal_157;
				bVar6 = Local_116[1 /*4*/];
				bVar5 = joaat("WEAPON_PISTOL");
				bVar37 = true;
				bVar38 = false;
				bVar49 = false;
				bVar72 = true;
				break;
			case 1:
				bVar4 = bLocal_157;
				vVar0 = { UNK_0x68E4ADDDDCD7BDDE(Local_116[1 /*4*/], 0f, -1.7f, 0.9f) };
				bVar3 = (UNK_0xD9522BA9E27E1349(Local_116[1 /*4*/]) + 90f);
				bVar74 = "WORLD_HUMAN_HANG_OUT_STREET";
				bVar5 = joaat("WEAPON_MICROSMG");
				bVar37 = true;
				bVar38 = false;
				bVar49 = false;
				bVar72 = true;
				break;
			case 2:
				bVar4 = bLocal_155;
				bVar6 = Local_116[2 /*4*/];
				bVar5 = joaat("WEAPON_PISTOL");
				bVar37 = true;
				bVar38 = false;
				bVar49 = false;
				bVar72 = true;
				break;
			case 3:
				bVar4 = bLocal_155;
				vVar0 = { UNK_0x68E4ADDDDCD7BDDE(Local_116[2 /*4*/], 0f, -1.5f, 0.9f) };
				bVar3 = (UNK_0xD9522BA9E27E1349(Local_116[2 /*4*/]) + 90f);
				bVar74 = "WORLD_HUMAN_HANG_OUT_STREET";
				bVar5 = joaat("WEAPON_MICROSMG");
				bVar37 = true;
				bVar38 = false;
				bVar49 = false;
				bVar72 = true;
				break;
			case 4:
				bVar4 = bLocal_155;
				vVar0 = { UNK_0x68E4ADDDDCD7BDDE(Local_116[2 /*4*/], 0f, -2.3f, 0.9f) };
				bVar3 = (UNK_0xD9522BA9E27E1349(Local_116[2 /*4*/]) + 90f);
				bVar74 = "WORLD_HUMAN_HANG_OUT_STREET";
				bVar5 = joaat("WEAPON_PISTOL");
				bVar37 = true;
				bVar38 = false;
				bVar49 = false;
				bVar72 = true;
				break;
			case 7:
				bVar4 = bLocal_155;
				bVar6 = Local_116[3 /*4*/];
				bVar5 = joaat("WEAPON_PISTOL");
				bVar37 = true;
				bVar38 = false;
				bVar49 = false;
				bVar72 = true;
				break;
			case 8:
				bVar4 = bLocal_155;
				bVar6 = Local_116[3 /*4*/];
				bVar7 = false;
				bVar5 = joaat("WEAPON_MICROSMG");
				bVar37 = true;
				bVar38 = false;
				bVar49 = false;
				bVar72 = true;
				break;
			case 9:
				bVar4 = bLocal_157;
				bVar6 = Local_116[4 /*4*/];
				bVar5 = joaat("WEAPON_PISTOL");
				bVar37 = true;
				bVar38 = false;
				bVar49 = false;
				bVar72 = true;
				break;
			case 10:
				bVar4 = bLocal_157;
				bVar6 = Local_116[4 /*4*/];
				bVar7 = false;
				bVar5 = joaat("WEAPON_MICROSMG");
				bVar37 = true;
				bVar38 = false;
				bVar49 = false;
				bVar72 = true;
				break;
			default:
				break;
		}
		if (!UNK_0xB87F6CF6E5628C67(bVar4))
		{
			return 0;
		}
		if (!func_63(vParam2, vLocal_139, 0))
		{
			if (!UNK_0xC844350D5D58C99A(bVar8))
			{
				vVar0 = { vParam2 };
			}
			else
			{
				vVar9 = { vParam2 };
			}
		}
		if (fParam5 != -1f)
		{
			bVar3 = fParam5;
		}
		if (func_199(bVar6))
		{
			Local_49[iParam0 /*6*/] = UNK_0x852A19533F896693(bVar6, 26, bVar4, bVar7, 1, true);
		}
		else
		{
			Local_49[iParam0 /*6*/] = UNK_0x36F2404464202779(26, bVar4, vVar0, bVar3, 1, true);
			UNK_0x20641932E5104B25(Local_49[iParam0 /*6*/], bVar42, 0);
			UNK_0xCDCD90141EA7E6EE(Local_49[iParam0 /*6*/], !bVar66, 0);
		}
		if (bVar41)
		{
			UNK_0x08841CDB215AE18F(Local_49[iParam0 /*6*/], vVar0, 0, 0, 1);
		}
		if (bParam1)
		{
			if (bVar28 == bLocal_171)
			{
				Local_49[iParam0 /*6*/].f_1 = func_60(Local_49[iParam0 /*6*/], 1, 145);
			}
			else
			{
				Local_49[iParam0 /*6*/].f_1 = func_60(Local_49[iParam0 /*6*/], 0, 145);
			}
		}
		UNK_0x6895ED13649CBD25(Local_49[iParam0 /*6*/], iVar60);
		UNK_0x4E885A246A9D983A(Local_49[iParam0 /*6*/], 213, bVar29);
		UNK_0x4E885A246A9D983A(Local_49[iParam0 /*6*/], 212, bVar30);
		UNK_0x11AD11297DC58CC7(Local_49[iParam0 /*6*/], bVar31);
		UNK_0xFADC0A217229F6B5(Local_49[iParam0 /*6*/], bVar32);
		UNK_0x1365063FA6365BE8(Local_49[iParam0 /*6*/], bVar33);
		UNK_0x4E885A246A9D983A(Local_49[iParam0 /*6*/], 188, bVar56);
		UNK_0x4E885A246A9D983A(Local_49[iParam0 /*6*/], 42, !bVar34);
		UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 9, bVar36);
		UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 3, bVar38);
		UNK_0x4E885A246A9D983A(Local_49[iParam0 /*6*/], 342, bVar58);
		UNK_0xE8832A9E16A57A1F(Local_49[iParam0 /*6*/], bVar37, 1);
		UNK_0x0B42C743EF171FF5(Local_49[iParam0 /*6*/], bVar18);
		UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 8, bVar40);
		UNK_0x4A4806F9D471E491(Local_49[iParam0 /*6*/], bVar39, 0);
		UNK_0xE121AE1BBF90E186(Local_49[iParam0 /*6*/], bVar43);
		UNK_0x262EF6C6306BEA6C(Local_49[iParam0 /*6*/], bVar5, -1, bVar35, bVar35);
		UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 2, bVar44);
		UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 1, bVar45);
		UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 52, bVar46);
		UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 13, bVar69);
		UNK_0x00A6D36F507FD6EA(Local_49[iParam0 /*6*/], iVar47);
		UNK_0x25C5402CC10F76CD(Local_49[iParam0 /*6*/], bVar48);
		UNK_0x4E885A246A9D983A(Local_49[iParam0 /*6*/], 118, bVar49);
		UNK_0x4E885A246A9D983A(Local_49[iParam0 /*6*/], 115, bVar50);
		UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 12, bVar51);
		UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 36, bVar52);
		UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 35, bVar53);
		UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 29, bVar54);
		UNK_0x4E885A246A9D983A(Local_49[iParam0 /*6*/], 185, bVar55);
		UNK_0x2051F535F4A99479(Local_49[iParam0 /*6*/], iVar57);
		UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 17, bVar63);
		UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 5, bVar72);
		UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 46, bVar73);
		UNK_0xCAC78D14D05349E7(Local_49[iParam0 /*6*/], iVar64);
		UNK_0x33CE5A9E32EA10B2(Local_49[iParam0 /*6*/], iVar59);
		func_59(Local_49[iParam0 /*6*/], bVar22, fVar23, fVar24, fVar25, fVar26);
		UNK_0x1E9649458B15960F(Local_49[iParam0 /*6*/], bVar67);
		UNK_0x4E885A246A9D983A(Local_49[iParam0 /*6*/], 203, bVar68);
		UNK_0xF5B281233FC43E54(Local_49[iParam0 /*6*/], !bVar68);
		if (!bVar61)
		{
			func_58(iParam0, 2);
		}
		if (!UNK_0xEA6BC48857E0AC4C(bVar74))
		{
			UNK_0x509B8296EBA9B408(Local_49[iParam0 /*6*/], bVar74, -1, 0);
		}
		if (bVar17 > 0)
		{
			if (bVar17 > UNK_0xC08489BCA49ECCA8(Local_49[iParam0 /*6*/]) || bVar62)
			{
				UNK_0x722454E43E496678(Local_49[iParam0 /*6*/], bVar17);
			}
			UNK_0xD458AC1C1D29C3B4(Local_49[iParam0 /*6*/], bVar17, false);
		}
		if (bVar19 > 0)
		{
			UNK_0x298903DD96203C2C(Local_49[iParam0 /*6*/], bVar19);
		}
		if (bVar27 >= 0f)
		{
			UNK_0x967762C930C0C5FD(Local_49[iParam0 /*6*/], bVar27);
		}
		if (fVar20 > 0f || fVar21 > 0f)
		{
			UNK_0x9FC2699ACD081EC0(Local_49[iParam0 /*6*/], fVar20, fVar21);
		}
		if (bVar70)
		{
			UNK_0xED253B8DDB3FFB77(Local_49[iParam0 /*6*/], vVar0, 5f, 0, 0);
		}
		if (bVar71)
		{
			UNK_0x561C1BF2863AB0B1(Local_49[iParam0 /*6*/]);
		}
		UNK_0x6DF7BF67E86AAE86(Local_49[iParam0 /*6*/], bVar28);
		if (UNK_0xC844350D5D58C99A(bVar8))
		{
			UNK_0x9F528B1B53FBC5D9(Local_49[iParam0 /*6*/], bVar8, -1, vVar9, vVar12, 1, 1, 1, 0, 2, 1);
			UNK_0x46CB381A452EF99D(Local_49[iParam0 /*6*/], 0);
			func_58(iParam0, 1);
		}
		func_57(iParam0);
		func_56(iParam0);
		if (iVar15 != 0)
		{
			UNK_0x1F6FCCC72D02C71A(Local_49[iParam0 /*6*/], bVar5, iVar15);
			UNK_0x5745EA6329A91E29(Local_49[iParam0 /*6*/], bVar5, true);
		}
		UNK_0x083F03A847B640E9(Local_49[iParam0 /*6*/], iVar16);
		if (bVar65)
		{
			UNK_0x6E8BDA9057564534(Local_49[iParam0 /*6*/], 1, "DEFAULT_ACTION");
		}
		return 1;
	}
	return 0;
}

void func_56(int iParam0)
{
	if (func_199(Local_49[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
				break;
		}
	}
}

void func_57(int iParam0)
{
	if (func_199(Local_49[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], false, false, false, 0);
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], 3, false, false, 0);
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], 4, false, false, 0);
				break;
			case 1:
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], false, true, true, 0);
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], 3, true, 2, 0);
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], 4, false, true, 0);
				break;
			case 2:
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], false, false, false, 0);
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], 3, false, false, 0);
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], 4, false, false, 0);
				break;
			case 3:
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], false, true, false, 0);
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], 3, true, false, 0);
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], 4, false, true, 0);
				break;
			case 4:
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], false, true, 2, 0);
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], 3, false, true, 0);
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], 4, true, false, 0);
				break;
			case 7:
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], false, false, 2, 0);
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], 3, true, 2, 0);
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], 4, true, 2, 0);
				break;
			case 8:
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], false, true, true, 0);
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], 3, false, 2, 0);
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], 4, false, 2, 0);
				break;
			case 9:
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], false, true, 2, 0);
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], 3, false, true, 0);
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], 4, false, 2, 0);
				break;
			case 10:
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], false, false, true, 0);
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], 3, true, true, 0);
				UNK_0x64F9F278AB9DCA2C(Local_49[iParam0 /*6*/], 4, true, false, 0);
				break;
		}
	}
}

void func_58(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Local_49[iParam0 /*6*/].f_2), bParam1);
}

void func_59(bool bParam0, bool bParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		UNK_0x9FA191B317572861(bParam0, bParam1);
		UNK_0xB21189153A095FA1(bParam0, fParam2);
		UNK_0xCF443519BC24A3CB(bParam0, (fParam3 / 2f));
		UNK_0x8979D9784F39DF46(bParam0, fParam4);
		UNK_0xBEC9D6BBD21A735F(bParam0, fParam5);
	}
}

int func_60(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_61(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_61(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_62(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_62(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_62(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_62(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_63(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_64(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	int iVar22;
	bool bVar23;
	float fVar24;
	float fVar25;
	bool bVar26;
	vector3 vVar27;
	vector3 vVar30;
	bool bVar33;

	if (!UNK_0xC844350D5D58C99A(Local_116[iParam0 /*4*/]))
	{
		iVar5 = 0;
		bVar6 = true;
		bVar7 = true;
		iVar8 = 0;
		bVar9 = false;
		bVar10 = true;
		bVar11 = false;
		bVar12 = false;
		bVar13 = true;
		bVar14 = false;
		bVar15 = false;
		iVar16 = 0;
		iVar17 = 0;
		iVar18 = 0;
		iVar19 = 1;
		bVar20 = false;
		bVar21 = false;
		iVar22 = 1;
		fVar24 = -1f;
		fVar25 = -1f;
		switch (iParam0)
		{
			case 0:
				vVar0 = { vLocal_145 };
				bVar3 = 163.5528f;
				bVar4 = bLocal_153;
				bVar13 = false;
				iVar18 = 1;
				iVar19 = 0;
				bVar21 = true;
				iVar8 = 1;
				break;
			case 1:
				vVar0 = { 3087.114f, 2195.558f, 2f };
				bVar3 = 157.68f;
				bVar4 = bLocal_156;
				bVar20 = true;
				bVar11 = true;
				bVar21 = true;
				iVar22 = 0;
				iVar18 = 1;
				iVar19 = 0;
				break;
			case 2:
				vVar0 = { 3092.788f, 2197.243f, 2f };
				bVar3 = -22.32f;
				bVar4 = bLocal_154;
				bVar20 = true;
				bVar11 = true;
				bVar21 = true;
				iVar22 = 0;
				iVar18 = 1;
				iVar19 = 0;
				break;
			case 3:
				vVar0 = { 3170.401f, 1964.587f, 0.2889f };
				bVar3 = 341.1273f;
				bVar4 = bLocal_154;
				bVar20 = true;
				bVar11 = true;
				bVar21 = true;
				iVar22 = 0;
				iVar18 = 1;
				iVar19 = 0;
				break;
			case 4:
				vVar0 = { 3227.12f, 2074.91f, 0.75f };
				bVar3 = 175.16f;
				bVar4 = bLocal_156;
				bVar20 = true;
				bVar11 = true;
				bVar21 = true;
				iVar22 = 0;
				iVar18 = 1;
				iVar19 = 0;
				break;
			default:
				break;
		}
		if (!UNK_0xB87F6CF6E5628C67(bVar4))
		{
			return 0;
		}
		if (!func_63(vParam1, vLocal_139, 0))
		{
			vVar0 = { vParam1 };
		}
		if (fParam4 != -1f)
		{
			bVar3 = fParam4;
		}
		Local_116[iParam0 /*4*/] = UNK_0x122AAB0B1D6F55AD(bVar4, vVar0, bVar3, true, true, false);
		func_67(iParam0);
		func_66(iParam0);
		UNK_0x4A4806F9D471E491(Local_116[iParam0 /*4*/], bVar7, 0);
		if (UNK_0xC844350D5D58C99A(bVar26))
		{
			UNK_0x9F528B1B53FBC5D9(Local_116[iParam0 /*4*/], bVar26, -1, vVar27, vVar30, 0, 0, 0, 0, 2, 1);
		}
		else
		{
			UNK_0x20641932E5104B25(Local_116[iParam0 /*4*/], bVar6, 0);
		}
		UNK_0xD5A0214B20BCBAD8(Local_116[iParam0 /*4*/], iVar8);
		UNK_0x1E9649458B15960F(Local_116[iParam0 /*4*/], bVar9);
		UNK_0xA22F71BBC8173C39(Local_116[iParam0 /*4*/], bVar10);
		if (bVar11)
		{
			UNK_0x56FDC9ADE35F7DB0(Local_116[iParam0 /*4*/], bVar11, true, 0);
		}
		UNK_0xE121AE1BBF90E186(Local_116[iParam0 /*4*/], bVar14);
		UNK_0xE8832A9E16A57A1F(Local_116[iParam0 /*4*/], bVar15, 1);
		UNK_0x1FC8B874F2C46E6E(Local_116[iParam0 /*4*/], iVar16);
		UNK_0x63147A4193F1B604(Local_116[iParam0 /*4*/], iVar17);
		UNK_0x9A8BCD43DBDDCDCA(Local_116[iParam0 /*4*/], iVar19, 0);
		UNK_0xF3F7BF451A720FDF(Local_116[iParam0 /*4*/], iVar18);
		UNK_0x7980D72D61BEF4D5(Local_116[iParam0 /*4*/], bVar20);
		UNK_0x05EC10F460C3A4AF(Local_116[iParam0 /*4*/], iVar22);
		if (!UNK_0xEA6BC48857E0AC4C(bVar33))
		{
			UNK_0x55A3C4ED4728EA42(Local_116[iParam0 /*4*/], bVar33);
		}
		if (bVar23 > 0f)
		{
			UNK_0x1AEF7184B203A58D(Local_116[iParam0 /*4*/], bVar23);
		}
		if (bVar12)
		{
			UNK_0x873BCADC75FF6D20(Local_116[iParam0 /*4*/]);
		}
		if (fVar24 >= 0f)
		{
			UNK_0x238274410BB56EE5(Local_116[iParam0 /*4*/], fVar24);
		}
		if (fVar25 >= 0f)
		{
			UNK_0x552A77B585309C2B(Local_116[iParam0 /*4*/], fVar25);
		}
		if (bVar21)
		{
			UNK_0xB078AFA7242F1F7B(Local_116[iParam0 /*4*/], true);
		}
		if (iVar5 != 0)
		{
			UNK_0x71EDC33E5A423750(Local_116[iParam0 /*4*/], iVar5);
		}
		if (bParam5)
		{
			Local_116[iParam0 /*4*/].f_1 = func_65(Local_116[iParam0 /*4*/], bVar13, 0);
		}
		if (iParam0 == 0)
		{
			UNK_0xB58CA658A628ED02(Local_116[iParam0 /*4*/], 3);
		}
	}
	return 1;
}

int func_65(bool bParam0, bool bParam1, bool bParam2)
{
	return func_61(bParam0, !bParam1, bParam2);
}

void func_66(int iParam0)
{
	if (func_199(Local_116[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 2:
			case 3:
				UNK_0xD3421E391490133B(Local_116[iParam0 /*4*/], true, true);
				UNK_0xD3421E391490133B(Local_116[iParam0 /*4*/], 2, true);
				UNK_0xD3421E391490133B(Local_116[iParam0 /*4*/], 3, true);
				UNK_0xD3421E391490133B(Local_116[iParam0 /*4*/], 4, true);
				UNK_0xD3421E391490133B(Local_116[iParam0 /*4*/], 5, false);
				break;
			case 1:
			case 4:
				UNK_0xD3421E391490133B(Local_116[iParam0 /*4*/], true, true);
				UNK_0xD3421E391490133B(Local_116[iParam0 /*4*/], 2, true);
				UNK_0xD3421E391490133B(Local_116[iParam0 /*4*/], 3, true);
				UNK_0xD3421E391490133B(Local_116[iParam0 /*4*/], 4, false);
				UNK_0xD3421E391490133B(Local_116[iParam0 /*4*/], 5, true);
				break;
		}
	}
}

void func_67(int iParam0)
{
	if (func_199(Local_116[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 1:
				UNK_0xC002508A277213DE(Local_116[iParam0 /*4*/], 111, 28);
				UNK_0x58A0C35FA7CA6162(Local_116[iParam0 /*4*/], 111, 156);
				break;
			case 2:
				UNK_0xC002508A277213DE(Local_116[iParam0 /*4*/], 121, 20);
				UNK_0x58A0C35FA7CA6162(Local_116[iParam0 /*4*/], false, 156);
				break;
			case 3:
				UNK_0xC002508A277213DE(Local_116[iParam0 /*4*/], 121, 46);
				UNK_0x58A0C35FA7CA6162(Local_116[iParam0 /*4*/], false, 156);
				break;
			case 4:
				UNK_0xC002508A277213DE(Local_116[iParam0 /*4*/], 111, 54);
				UNK_0x58A0C35FA7CA6162(Local_116[iParam0 /*4*/], 112, 156);
				break;
		}
	}
}

void func_68(bool bParam0)
{
	UNK_0x5D96D8530B3D0904(&bLocal_149, bParam0);
}

void func_69()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	}
	func_81(1);
	UNK_0x9CBC55A05A07FC47(1);
	func_80(0);
	UNK_0xE342F209E49C5314(3073.41f, 2161.604f, -20f, 3123.816f, 2216.9f, 9.0777f, false, 1);
	UNK_0x21688103CC7F9B19(3073.41f, 2161.604f, -20f, 3123.816f, 2216.9f, 9.0777f, 0);
	if (!UNK_0x8E28E832BEAC3DCE(3084.41f, 2080.39f, 0f, 2f))
	{
		UNK_0xE342F209E49C5314(3077.523f, 2069.831f, -3.3524f, 3092.296f, 2092.042f, 2.769f, false, 1);
		UNK_0x21688103CC7F9B19(3077.523f, 2069.831f, -3.3524f, 3092.296f, 2092.042f, 2.769f, 0);
	}
	if (!UNK_0x8E28E832BEAC3DCE(3062.67f, 2081.65f, 0f, 2f))
	{
		UNK_0xE342F209E49C5314(3054.367f, 2071.361f, -2.4173f, 3075.652f, 2091.954f, 2.7296f, false, 1);
		UNK_0x21688103CC7F9B19(3054.367f, 2071.361f, -2.4173f, 3075.652f, 2091.954f, 2.7296f, 0);
	}
	if (!UNK_0x8E28E832BEAC3DCE(3075.716f, 2125.59f, 0.8052f, 2f))
	{
		UNK_0x745CE398A4B0A3C6(3075.716f, 2125.59f, 0.8052f, 5f, 0);
	}
	if (!UNK_0x8E28E832BEAC3DCE(3070.882f, 2103.967f, -2.0883f, 2f))
	{
		UNK_0x28F5E4DA506AC0CA(3070.882f, 2103.967f, -2.0883f, 5f, 0, 0, 0, 0, false, 0);
	}
	UNK_0xF63400DBE3303D26("ENEMIES", &bLocal_171);
	UNK_0x0E2400AB9174FA81(1, joaat("PLAYER"), joaat("PLAYER"));
	UNK_0x0E2400AB9174FA81(3, joaat("PLAYER"), bLocal_171);
	UNK_0x0E2400AB9174FA81(1, bLocal_171, bLocal_171);
	UNK_0x0E2400AB9174FA81(3, bLocal_171, joaat("PLAYER"));
	UNK_0x6DF7BF67E86AAE86(UNK_0x16F2683693E537C9(), joaat("PLAYER"));
	func_79(&uLocal_174, 1, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
	UNK_0x51B096AAC60548C1(0f);
	func_70(1);
}

void func_70(bool bParam0)
{
	func_71(39, bParam0);
	func_71(40, bParam0);
	func_71(41, bParam0);
	func_71(42, bParam0);
	func_71(43, bParam0);
	func_71(44, bParam0);
}

void func_71(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_78(iParam0, 2, 1))
		{
			func_77(iParam0, 2, 1);
		}
	}
	else if (func_78(iParam0, 2, 1))
	{
		func_72(iParam0, 2, 1);
	}
}

void func_72(int iParam0, bool bParam1, bool bParam2)
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
		if (func_10() == 0)
		{
			bVar0 = func_75(func_76(iParam0), -1, 0);
			UNK_0x0674E58A79778E99(&bVar0, bParam1);
			func_73(func_76(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

void func_73(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_74(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_74(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
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

int func_75(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_74(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_76(int iParam0)
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

void func_77(int iParam0, bool bParam1, bool bParam2)
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
		if (func_10() == 0)
		{
			bVar0 = func_75(func_76(iParam0), -1, 0);
			UNK_0x5D96D8530B3D0904(&bVar0, bParam1);
			func_73(func_76(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

bool func_78(int iParam0, bool bParam1, bool bParam2)
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
		if (func_10() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_75(func_76(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

void func_79(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_80(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iLocal_172[iParam0] = UNK_0x7D6CA5F52B3748BF(3054.991f, 1995.887f, -20f, 3140.817f, 2225.639f, 10.453f, 0, 1, 1, 1);
			break;
	}
}

void func_81(int iParam0)
{
	iParam0 = iParam0;
}

void func_82()
{
	if (!func_120())
	{
		if (func_107())
		{
			func_169(1, 0);
		}
	}
	UNK_0x1A6DFFFEEC27BF4F("RE_SEAPLANE", 0);
	func_106();
	func_94();
	func_90();
	func_85();
	func_83(&uLocal_158, &uLocal_150);
}

void func_83(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (((((*uParam0)[*uParam1 /*6*/] != 0 && UNK_0xC844350D5D58C99A((*uParam0)[*uParam1 /*6*/])) && (uParam0[*uParam1 /*6*/])->f_1 != 0) && UNK_0xC844350D5D58C99A((uParam0[*uParam1 /*6*/])->f_1)) && (uParam0[*uParam1 /*6*/])->f_4)
	{
		if (func_84((uParam0[*uParam1 /*6*/])->f_2, 2))
		{
			(uParam0[*uParam1 /*6*/])->f_5 = UNK_0x6AB6A474D29FA7D8((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1);
		}
		else
		{
			(uParam0[*uParam1 /*6*/])->f_5 = UNK_0xF649DD3BF44195C7((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1, (uParam0[*uParam1 /*6*/])->f_3);
		}
	}
	iVar0++;
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0;
	}
	while ((((*uParam0)[*uParam1 /*6*/] == 0 || !UNK_0xC844350D5D58C99A((*uParam0)[*uParam1 /*6*/])) || ((uParam0[*uParam1 /*6*/])->f_1 == 0 || !UNK_0xC844350D5D58C99A((uParam0[*uParam1 /*6*/])->f_1))) && iVar0 < *uParam0)
	{
		iVar0++;
		*uParam1++;
		if (*uParam1 >= *uParam0)
		{
			*uParam1 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!(uParam0[iVar1 /*6*/])->f_4)
		{
			(*uParam0)[iVar1 /*6*/] = 0;
			(uParam0[iVar1 /*6*/])->f_1 = 0;
			(uParam0[iVar1 /*6*/])->f_2 = 0;
			(uParam0[iVar1 /*6*/])->f_3 = 0;
			(uParam0[iVar1 /*6*/])->f_5 = 0;
		}
		(uParam0[iVar1 /*6*/])->f_4 = 0;
		iVar1++;
	}
}

bool func_84(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_85()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (UNK_0xC844350D5D58C99A(Local_49[iVar0 /*6*/]) && UNK_0xE4EDC4B0E92C078B(Local_49[iVar0 /*6*/].f_1))
		{
			if (UNK_0x405E212DDE472467(Local_49[iVar0 /*6*/], 0))
			{
				if (!func_89(iVar0, 0))
				{
					UNK_0x516E63E474722206(Local_49[iVar0 /*6*/].f_1, 1f);
					func_58(iVar0, 0);
				}
				if (func_88(Local_49[iVar0 /*6*/], 0) != -1)
				{
					if (func_87(iVar0))
					{
						if (UNK_0x4FA921CB56EDB0F8(Local_49[iVar0 /*6*/].f_1) > 0)
						{
							UNK_0x7F010F50CE03A8AF(Local_49[iVar0 /*6*/].f_1, false);
							UNK_0x54B31D18C3F36EB7(Local_49[iVar0 /*6*/].f_1, 1);
						}
					}
					else if (UNK_0x4FA921CB56EDB0F8(Local_49[iVar0 /*6*/].f_1) == 0)
					{
						UNK_0x7F010F50CE03A8AF(Local_49[iVar0 /*6*/].f_1, 255);
						UNK_0x54B31D18C3F36EB7(Local_49[iVar0 /*6*/].f_1, 0);
					}
				}
			}
			else if (func_89(iVar0, 0))
			{
				UNK_0x516E63E474722206(Local_49[iVar0 /*6*/].f_1, 0.7f);
				func_86(iVar0, 0);
				if (UNK_0x4FA921CB56EDB0F8(Local_49[iVar0 /*6*/].f_1) == 0)
				{
					UNK_0x7F010F50CE03A8AF(Local_49[iVar0 /*6*/].f_1, 255);
					UNK_0x54B31D18C3F36EB7(Local_49[iVar0 /*6*/].f_1, 0);
				}
			}
			if (UNK_0xEB6A8945D1AC98A1(Local_49[iVar0 /*6*/]))
			{
				func_43(&(Local_49[iVar0 /*6*/].f_1));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (UNK_0xC844350D5D58C99A(Local_116[iVar0 /*4*/]) && UNK_0xE4EDC4B0E92C078B(Local_116[iVar0 /*4*/].f_1))
		{
			if (!UNK_0xDF1306B443CD3D15(Local_116[iVar0 /*4*/], 0))
			{
				func_43(&(Local_116[iVar0 /*4*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_86(int iParam0, bool bParam1)
{
	UNK_0x0674E58A79778E99(&(Local_49[iParam0 /*6*/].f_2), bParam1);
}

bool func_87(int iParam0)
{
	if (iParam0 == 1)
	{
		if (!func_199(Local_49[0 /*6*/]))
		{
			return false;
		}
	}
	if (iParam0 == 3)
	{
		if (!func_199(Local_49[2 /*6*/]))
		{
			return false;
		}
	}
	if (iParam0 == 4)
	{
		if (!func_199(Local_49[2 /*6*/]) && !func_199(Local_49[3 /*6*/]))
		{
			return false;
		}
	}
	if (iParam0 == 8)
	{
		if (!func_199(Local_49[7 /*6*/]))
		{
			return false;
		}
	}
	if (iParam0 == 10)
	{
		if (!func_199(Local_49[9 /*6*/]))
		{
			return false;
		}
	}
	return true;
}

bool func_88(bool bParam0, int iParam1)
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

bool func_89(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Local_49[iParam0 /*6*/].f_2, bParam1);
}

void func_90()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (UNK_0xC844350D5D58C99A(Local_116[iVar0 /*4*/]))
		{
			func_91(iVar0);
		}
		iVar0++;
	}
}

void func_91(int iParam0)
{
	if (func_199(Local_116[iParam0 /*4*/]) || iParam0 == 0)
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
				switch (Local_116[iParam0 /*4*/].f_2)
				{
					case 0:
						if (((!func_199(UNK_0xA30B8362589C124A(Local_116[iParam0 /*4*/], -1, 0)) && !func_199(UNK_0xA30B8362589C124A(Local_116[iParam0 /*4*/], false, 0))) && !func_199(UNK_0xA30B8362589C124A(Local_116[iParam0 /*4*/], true, 0))) && !func_199(UNK_0xA30B8362589C124A(Local_116[iParam0 /*4*/], 2, 0)))
						{
							UNK_0x05EC10F460C3A4AF(Local_116[iParam0 /*4*/], 1);
							UNK_0xB078AFA7242F1F7B(Local_116[iParam0 /*4*/], false);
							Local_116[iParam0 /*4*/].f_2++;
						}
						break;
					case 1:
						break;
				}
				break;
		}
	}
	else if (UNK_0x4FC40AB0ECCE6E18(Local_116[iParam0 /*4*/]))
	{
		func_92(iParam0, 0);
	}
	else
	{
		func_92(iParam0, 1);
	}
}

void func_92(int iParam0, bool bParam1)
{
	if (UNK_0xC844350D5D58C99A(Local_116[iParam0 /*4*/]))
	{
		func_43(&(Local_116[iParam0 /*4*/].f_1));
		if (UNK_0x20D6474D5F4B9FC6(Local_116[iParam0 /*4*/]))
		{
			UNK_0xC55F2A0377488064(Local_116[iParam0 /*4*/]);
		}
		if (func_93(&(Local_116[iParam0 /*4*/])))
		{
			if (bParam1)
			{
				UNK_0xA954465BA6FDEFE2(&(Local_116[iParam0 /*4*/]));
			}
			else
			{
				UNK_0x046C362CF15F1935(&(Local_116[iParam0 /*4*/]));
			}
		}
		Local_116[iParam0 /*4*/] = 0;
		Local_116[iParam0 /*4*/].f_2 = 0;
		Local_116[iParam0 /*4*/].f_3 = 0f;
	}
}

bool func_93(var uParam0)
{
	if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *uParam0, 0))
	{
		return false;
	}
	return true;
}

void func_94()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (UNK_0xC844350D5D58C99A(Local_49[iVar0 /*6*/]))
		{
			func_95(iVar0);
		}
		iVar0++;
	}
}

void func_95(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	vector3 vVar6;
	int iVar9;
	bool bVar10;
	bool bVar11;

	if (func_199(Local_49[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
				if (Local_49[iParam0 /*6*/].f_3 >= 2 && Local_49[iParam0 /*6*/].f_3 < 5)
				{
					if ((UNK_0x405E212DDE472467(Local_49[iParam0 /*6*/], 0) && func_199(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0))) && UNK_0x4E861BC5B1EDA7BD(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0)))
					{
						func_105();
						UNK_0xD93EE6549113F9E1(false, 1);
						UNK_0x75CDA8644CD3B5F5(false, UNK_0x09AC81E49EA267F7(500, 1501), 4096);
						UNK_0xD93EE6549113F9E1(false, 0);
						UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
						func_103(Local_49[iParam0 /*6*/]);
						UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 1, false);
						Local_49[iParam0 /*6*/].f_3 = 5;
					}
				}
				switch (Local_49[iParam0 /*6*/].f_3)
				{
					case 0:
						if (iParam0 == 0)
						{
							if (func_199(Local_49[3 /*6*/]))
							{
								UNK_0x50155CDC2C5335FC(Local_49[iParam0 /*6*/], 1, Local_49[3 /*6*/], 31086, vLocal_139, 0, -1, -1);
							}
						}
						else if (func_199(Local_49[1 /*6*/]))
						{
							UNK_0x50155CDC2C5335FC(Local_49[iParam0 /*6*/], 1, Local_49[1 /*6*/], 31086, vLocal_139, 0, -1, -1);
						}
						if (((func_121(1) || UNK_0x4734A6196B611C3B(Local_49[iParam0 /*6*/], UNK_0x16F2683693E537C9())) || func_102()) || func_101())
						{
							func_100(iParam0);
							UNK_0x6C3AE6E278DB3D0E(Local_49[iParam0 /*6*/], UNK_0x16F2683693E537C9(), 0, 16);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					case 1:
						if (iParam0 == 0)
						{
							if (!func_199(Local_49[1 /*6*/]) || (func_199(Local_116[1 /*4*/]) && UNK_0xC42A92762C58E1B9(Local_49[1 /*6*/], Local_116[1 /*4*/], 1)))
							{
								bVar0 = true;
							}
						}
						else if ((!func_199(Local_49[3 /*6*/]) || (func_199(Local_116[2 /*4*/]) && UNK_0xC42A92762C58E1B9(Local_49[3 /*6*/], Local_116[2 /*4*/], 1))) && (!func_199(Local_49[4 /*6*/]) || (func_199(Local_116[2 /*4*/]) && UNK_0xC42A92762C58E1B9(Local_49[4 /*6*/], Local_116[2 /*4*/], 1))))
						{
							bVar0 = true;
						}
						if (bVar0)
						{
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					case 2:
						iVar5 = 526;
						if (iParam0 == 0)
						{
							bVar4 = bLocal_137;
						}
						else
						{
							bVar4 = bLocal_138;
						}
						UNK_0x9414396734E14897(bVar4, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), &iVar1);
						UNK_0x51FE1B68F2818389(bVar4, &iVar3);
						UNK_0x9414396734E14897(bVar4, UNK_0x68F4C0EC296D3901(Local_49[iParam0 /*6*/], true), &iVar2);
						if (iVar1 > 0 && UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
						{
							iVar1 = (iVar1 - 1);
						}
						if (iParam0 == 2 && !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 3108.675f, 2194.121f, 10.95087f, 3143.525f, 2232.265f, -4.598444f, 82.75f, 0, true, 0))
						{
							iVar1 = func_99(iVar1, 22, iVar3);
						}
						if (func_38(UNK_0x16F2683693E537C9(), vLocal_145, 1) >= 225f)
						{
							iVar1 = (iVar3 - 1);
						}
						if (((((iParam0 == 0 && iLocal_151 != iVar1) && iVar1 > iVar2) || ((iParam0 == 2 && iLocal_152 != iVar1) && iVar1 > iVar2)) && func_199(UNK_0x3C66DF04E6EA3587(Local_49[iParam0 /*6*/]))) && !UNK_0x15D0A3E61766C539(Local_49[iParam0 /*6*/], 0))
						{
							if (iParam0 == 0)
							{
								iLocal_151 = iVar1;
							}
							else
							{
								iLocal_152 = iVar1;
							}
							if (func_199(UNK_0x3C66DF04E6EA3587(Local_49[iParam0 /*6*/])))
							{
								UNK_0xB078AFA7242F1F7B(UNK_0x3C66DF04E6EA3587(Local_49[iParam0 /*6*/]), false);
								func_86(iParam0, 5);
							}
							UNK_0x1B901F542DF070CF(Local_49[iParam0 /*6*/], UNK_0x3C66DF04E6EA3587(Local_49[iParam0 /*6*/]), bVar4, 786469, 0, iVar5, iVar1, -1f, 0, 6f);
						}
						if ((!func_98(Local_49[iParam0 /*6*/], -235832601, 1) && UNK_0xD1960163A3042274(Local_49[iParam0 /*6*/], -235832601) == 7) && !func_98(Local_49[iParam0 /*6*/], 538064912, 1))
						{
							UNK_0x7A3479BFA16439E6(Local_49[iParam0 /*6*/], UNK_0x16F2683693E537C9(), 1101004800 /* Float: 20f */);
							if (func_199(UNK_0x3C66DF04E6EA3587(Local_49[iParam0 /*6*/])) && UNK_0x6AC695D09170F27D(UNK_0x3C66DF04E6EA3587(Local_49[iParam0 /*6*/])))
							{
								UNK_0xB078AFA7242F1F7B(UNK_0x3C66DF04E6EA3587(Local_49[iParam0 /*6*/]), true);
								func_58(iParam0, 5);
							}
						}
						if (!func_89(iParam0, 4))
						{
							if (UNK_0x15D0A3E61766C539(Local_49[iParam0 /*6*/], 0))
							{
								func_58(iParam0, 4);
								UNK_0xA3BF0AA5A2608191(Local_49[iParam0 /*6*/]);
								if (!func_89(iParam0, 5) && UNK_0x6AC695D09170F27D(UNK_0x3C66DF04E6EA3587(Local_49[iParam0 /*6*/])))
								{
									UNK_0xB078AFA7242F1F7B(UNK_0x3C66DF04E6EA3587(Local_49[iParam0 /*6*/]), true);
								}
							}
						}
						else if (!UNK_0x15D0A3E61766C539(Local_49[iParam0 /*6*/], 0))
						{
							func_86(iParam0, 4);
							if (!func_89(iParam0, 5))
							{
								UNK_0xB078AFA7242F1F7B(UNK_0x3C66DF04E6EA3587(Local_49[iParam0 /*6*/]), false);
							}
						}
						if ((UNK_0xD1960163A3042274(Local_49[iParam0 /*6*/], -235832601) == 1 && !UNK_0x8B38C0DAEEDB5F9C(UNK_0x3C66DF04E6EA3587(Local_49[iParam0 /*6*/]))) && !UNK_0x6B4464DA5794D055(Local_49[iParam0 /*6*/]))
						{
							UNK_0xFFDDE8CC59EB6D40(Local_49[iParam0 /*6*/], UNK_0x16F2683693E537C9(), false, vLocal_139, 500f, 100, 1, joaat("FIRING_PATTERN_BURST_FIRE"));
						}
						UNK_0xEF8F639897C675D5(bVar4, (iVar3 - 1), &vVar6);
						if (UNK_0x5A91F08DF773C39D(Local_49[iParam0 /*6*/], vVar6, 8f, 8f, 8f, false, true, 0))
						{
							UNK_0x11AD11297DC58CC7(Local_49[iParam0 /*6*/], true);
							UNK_0x5B54B463A4225B9F(Local_49[iParam0 /*6*/], UNK_0x3C66DF04E6EA3587(Local_49[iParam0 /*6*/]), false, UNK_0x16F2683693E537C9(), vLocal_139, 7, 20f, 786469, 5f, 7);
							func_68(5);
							UNK_0x2F3540C2227116A3(bVar4);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					case 3:
						if (UNK_0x405E212DDE472467(Local_49[iParam0 /*6*/], 0) && func_199(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0)))
						{
							if (UNK_0x7B5606C651AB51B5(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0), 3, 6000) || func_97(iParam0, 5000))
							{
								UNK_0x1A9C605516346AA9(Local_49[iParam0 /*6*/], -1);
								UNK_0x11AD11297DC58CC7(Local_49[iParam0 /*6*/], true);
								UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 1, false);
								Local_49[iParam0 /*6*/].f_3++;
							}
							else if (UNK_0xD1960163A3042274(Local_49[iParam0 /*6*/], -1273030092) == 1 && !UNK_0x6B4464DA5794D055(Local_49[iParam0 /*6*/]))
							{
								UNK_0xFFDDE8CC59EB6D40(Local_49[iParam0 /*6*/], UNK_0x16F2683693E537C9(), false, vLocal_139, 500f, 100, 1, joaat("FIRING_PATTERN_BURST_FIRE"));
							}
						}
						break;
					case 4:
						if (!func_98(Local_49[iParam0 /*6*/], -1708676711, 1))
						{
							if (!UNK_0x7ED67A9BE53DAC95(Local_49[iParam0 /*6*/]))
							{
								UNK_0x11AD11297DC58CC7(Local_49[iParam0 /*6*/], false);
								UNK_0x6C3AE6E278DB3D0E(Local_49[iParam0 /*6*/], UNK_0x16F2683693E537C9(), 0, 16);
							}
							else
							{
								UNK_0x1A9C605516346AA9(Local_49[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			case 1:
			case 3:
			case 4:
				switch (Local_49[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((iParam0 == 1 && func_98(Local_49[iParam0 /*6*/], 993674639, 1)) && func_199(Local_49[3 /*6*/]))
						{
							UNK_0x50155CDC2C5335FC(Local_49[iParam0 /*6*/], 1, Local_49[3 /*6*/], 31086, vLocal_139, 0, -1, -1);
						}
						if (((iParam0 == 3 || iParam0 == 4) && func_199(Local_49[1 /*6*/])) && func_98(Local_49[iParam0 /*6*/], 993674639, 1))
						{
							UNK_0x50155CDC2C5335FC(Local_49[iParam0 /*6*/], 1, Local_49[1 /*6*/], 31086, vLocal_139, 0, -1, -1);
						}
						if (((func_121(1) || UNK_0x4734A6196B611C3B(Local_49[iParam0 /*6*/], UNK_0x16F2683693E537C9())) || func_102()) || func_101())
						{
							func_100(iParam0);
							Local_49[iParam0 /*6*/].f_4 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(1250, 1501));
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					case 1:
						if (UNK_0x1C0640BA9A7327B3() >= Local_49[iParam0 /*6*/].f_4)
						{
							if ((iParam0 == 1 && func_199(Local_116[1 /*4*/])) && func_199(UNK_0xA30B8362589C124A(Local_116[1 /*4*/], -1, 0)))
							{
								UNK_0xA3BF0AA5A2608191(Local_49[iParam0 /*6*/]);
								UNK_0x5B1D360B9C6F0A09(Local_49[iParam0 /*6*/], Local_116[1 /*4*/], 20000, false, 3f, 1, 0);
								UNK_0x11AD11297DC58CC7(Local_49[iParam0 /*6*/], true);
							}
							if ((iParam0 == 3 && func_199(Local_116[2 /*4*/])) && func_199(UNK_0xA30B8362589C124A(Local_116[2 /*4*/], -1, 0)))
							{
								UNK_0xA3BF0AA5A2608191(Local_49[iParam0 /*6*/]);
								UNK_0x5B1D360B9C6F0A09(Local_49[iParam0 /*6*/], Local_116[2 /*4*/], 20000, false, 3f, 1, 0);
								UNK_0x11AD11297DC58CC7(Local_49[iParam0 /*6*/], true);
							}
							if ((iParam0 == 4 && func_199(Local_116[2 /*4*/])) && func_199(UNK_0xA30B8362589C124A(Local_116[2 /*4*/], -1, 0)))
							{
								UNK_0xA3BF0AA5A2608191(Local_49[iParam0 /*6*/]);
								UNK_0x5B1D360B9C6F0A09(Local_49[iParam0 /*6*/], Local_116[2 /*4*/], 20000, true, 3f, 1, 0);
								UNK_0x11AD11297DC58CC7(Local_49[iParam0 /*6*/], true);
							}
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					case 2:
						switch (iParam0)
						{
							case 1:
								iVar9 = 1;
								break;
							case 3:
								iVar9 = 2;
								break;
							case 4:
								iVar9 = 2;
								break;
						}
						if (UNK_0x405E212DDE472467(Local_49[iParam0 /*6*/], 1) || !func_199(UNK_0xA30B8362589C124A(Local_116[iVar9 /*4*/], -1, 0)))
						{
							UNK_0x11AD11297DC58CC7(Local_49[iParam0 /*6*/], false);
							UNK_0x6C3AE6E278DB3D0E(Local_49[iParam0 /*6*/], UNK_0x16F2683693E537C9(), 0, 16);
							Local_49[iParam0 /*6*/].f_3++;
						}
						else if (!func_98(Local_49[iParam0 /*6*/], -1794415470, 1))
						{
							if (iParam0 == 1 || (iParam0 == 3 && func_199(Local_116[iVar9 /*4*/])))
							{
								UNK_0x5B1D360B9C6F0A09(Local_49[iParam0 /*6*/], Local_116[iVar9 /*4*/], 20000, false, 3f, 1, 0);
							}
							if (iParam0 == 4 && func_199(Local_116[iVar9 /*4*/]))
							{
								UNK_0x5B1D360B9C6F0A09(Local_49[iParam0 /*6*/], Local_116[iVar9 /*4*/], 20000, true, 3f, 1, 0);
							}
						}
						break;
					case 3:
						if (UNK_0x405E212DDE472467(Local_49[iParam0 /*6*/], 0) && func_199(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0)))
						{
							if (UNK_0x4E861BC5B1EDA7BD(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0)))
							{
								func_105();
								UNK_0xD93EE6549113F9E1(false, 1);
								UNK_0x75CDA8644CD3B5F5(false, UNK_0x09AC81E49EA267F7(500, 1501), 4096);
								UNK_0xD93EE6549113F9E1(false, 0);
								UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
								func_103(Local_49[iParam0 /*6*/]);
								UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 1, false);
								Local_49[iParam0 /*6*/].f_3++;
							}
							if (Local_49[iParam0 /*6*/].f_3 == 3)
							{
								if ((UNK_0x7B5606C651AB51B5(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0), 3, 6000) || func_97(iParam0, 5000)) && func_121(5))
								{
									UNK_0x1A9C605516346AA9(Local_49[iParam0 /*6*/], 20000);
									UNK_0x11AD11297DC58CC7(Local_49[iParam0 /*6*/], true);
									UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 1, false);
									Local_49[iParam0 /*6*/].f_3 = 5;
								}
								else if (!func_199(UNK_0xA30B8362589C124A(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0), -1, 0)))
								{
									UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 3, true);
									UNK_0x6C3AE6E278DB3D0E(Local_49[iParam0 /*6*/], UNK_0x16F2683693E537C9(), 0, 16);
									Local_49[iParam0 /*6*/].f_3++;
								}
							}
						}
						break;
					case 4:
						break;
					case 5:
						if (!func_98(Local_49[iParam0 /*6*/], -1708676711, 1))
						{
							if (!UNK_0x7ED67A9BE53DAC95(Local_49[iParam0 /*6*/]))
							{
								UNK_0x11AD11297DC58CC7(Local_49[iParam0 /*6*/], false);
								UNK_0x6C3AE6E278DB3D0E(Local_49[iParam0 /*6*/], UNK_0x16F2683693E537C9(), 0, 16);
							}
							else
							{
								UNK_0x1A9C605516346AA9(Local_49[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			case 7:
				if (Local_49[iParam0 /*6*/].f_3 >= 1 && Local_49[iParam0 /*6*/].f_3 < 3)
				{
					if ((UNK_0x405E212DDE472467(Local_49[iParam0 /*6*/], 0) && func_199(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0))) && UNK_0x4E861BC5B1EDA7BD(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0)))
					{
						func_105();
						UNK_0xD93EE6549113F9E1(false, 1);
						UNK_0x75CDA8644CD3B5F5(false, UNK_0x09AC81E49EA267F7(500, 1501), 4096);
						UNK_0xD93EE6549113F9E1(false, 0);
						UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
						func_103(Local_49[iParam0 /*6*/]);
						UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 1, false);
						Local_49[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_49[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((((func_44() && func_41(UNK_0x16F2683693E537C9(), Local_49[iParam0 /*6*/], 1) <= 125f) || ((UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()) && !UNK_0x70EED0761B82965E(UNK_0x16F2683693E537C9())) && func_41(UNK_0x16F2683693E537C9(), Local_49[iParam0 /*6*/], 1) <= 150f)) || (UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()) && !UNK_0x03068588A1FCED1A(Local_49[iParam0 /*6*/]))) || func_121(6))
						{
							if (func_199(Local_116[3 /*4*/]))
							{
								UNK_0xB078AFA7242F1F7B(UNK_0x3C66DF04E6EA3587(Local_49[iParam0 /*6*/]), false);
								bVar10 = UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9());
								bVar10 = func_96(bVar10, 10f, 40f);
								UNK_0x1AEF7184B203A58D(Local_116[3 /*4*/], bVar10);
							}
							UNK_0x5745EA6329A91E29(Local_49[iParam0 /*6*/], joaat("WEAPON_PISTOL"), false);
							UNK_0x5B54B463A4225B9F(Local_49[iParam0 /*6*/], UNK_0x3C66DF04E6EA3587(Local_49[iParam0 /*6*/]), false, UNK_0x16F2683693E537C9(), vLocal_139, 7, 20f, 786469, 5f, 7);
							UNK_0x11AD11297DC58CC7(Local_49[iParam0 /*6*/], true);
							Local_49[iParam0 /*6*/].f_1 = func_60(Local_49[iParam0 /*6*/], 1, 145);
							func_68(6);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					case 1:
						if (UNK_0x405E212DDE472467(Local_49[iParam0 /*6*/], 0) && func_199(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0)))
						{
							if (UNK_0x7B5606C651AB51B5(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0), 3, 6000) || func_97(iParam0, 5000))
							{
								UNK_0x1A9C605516346AA9(Local_49[iParam0 /*6*/], -1);
								UNK_0x11AD11297DC58CC7(Local_49[iParam0 /*6*/], true);
								UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 1, false);
								Local_49[iParam0 /*6*/].f_3++;
							}
							else if (UNK_0xD1960163A3042274(Local_49[iParam0 /*6*/], -1273030092) == 1 && !UNK_0x6B4464DA5794D055(Local_49[iParam0 /*6*/]))
							{
								UNK_0xFFDDE8CC59EB6D40(Local_49[iParam0 /*6*/], UNK_0x16F2683693E537C9(), false, vLocal_139, 500f, 100, 1, joaat("FIRING_PATTERN_BURST_FIRE"));
							}
						}
						break;
					case 2:
						if (!func_98(Local_49[iParam0 /*6*/], -1708676711, 1))
						{
							if (!UNK_0x7ED67A9BE53DAC95(Local_49[iParam0 /*6*/]))
							{
								UNK_0x11AD11297DC58CC7(Local_49[iParam0 /*6*/], false);
								UNK_0x6C3AE6E278DB3D0E(Local_49[iParam0 /*6*/], UNK_0x16F2683693E537C9(), 0, 16);
							}
							else
							{
								UNK_0x1A9C605516346AA9(Local_49[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			case 9:
				if (Local_49[iParam0 /*6*/].f_3 >= 1 && Local_49[iParam0 /*6*/].f_3 < 3)
				{
					if ((UNK_0x405E212DDE472467(Local_49[iParam0 /*6*/], 0) && func_199(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0))) && UNK_0x4E861BC5B1EDA7BD(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0)))
					{
						func_105();
						UNK_0xD93EE6549113F9E1(false, 1);
						UNK_0x75CDA8644CD3B5F5(false, UNK_0x09AC81E49EA267F7(500, 1501), 4096);
						UNK_0xD93EE6549113F9E1(false, 0);
						UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
						func_103(Local_49[iParam0 /*6*/]);
						UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 1, false);
						Local_49[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_49[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((((func_44() && func_41(UNK_0x16F2683693E537C9(), Local_49[iParam0 /*6*/], 1) <= 125f) || ((UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()) && !UNK_0x70EED0761B82965E(UNK_0x16F2683693E537C9())) && func_41(UNK_0x16F2683693E537C9(), Local_49[iParam0 /*6*/], 1) <= 150f)) || (UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()) && !UNK_0x03068588A1FCED1A(Local_49[iParam0 /*6*/]))) || func_121(6))
						{
							if (func_199(Local_116[4 /*4*/]))
							{
								UNK_0xB078AFA7242F1F7B(UNK_0x3C66DF04E6EA3587(Local_49[iParam0 /*6*/]), false);
								bVar11 = UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9());
								bVar11 = func_96(bVar11, 10f, 40f);
								UNK_0x1AEF7184B203A58D(Local_116[4 /*4*/], bVar11);
							}
							UNK_0x5745EA6329A91E29(Local_49[iParam0 /*6*/], joaat("WEAPON_PISTOL"), false);
							UNK_0x5B54B463A4225B9F(Local_49[iParam0 /*6*/], UNK_0x3C66DF04E6EA3587(Local_49[iParam0 /*6*/]), false, UNK_0x16F2683693E537C9(), vLocal_139, 7, 20f, 786469, 5f, 7);
							UNK_0x11AD11297DC58CC7(Local_49[iParam0 /*6*/], true);
							Local_49[iParam0 /*6*/].f_1 = func_60(Local_49[iParam0 /*6*/], 1, 145);
							func_68(6);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					case 1:
						if (UNK_0x405E212DDE472467(Local_49[iParam0 /*6*/], 0) && func_199(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0)))
						{
							if (UNK_0x7B5606C651AB51B5(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0), 3, 6000) || func_97(iParam0, 5000))
							{
								UNK_0x1A9C605516346AA9(Local_49[iParam0 /*6*/], -1);
								UNK_0x11AD11297DC58CC7(Local_49[iParam0 /*6*/], true);
								UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 1, false);
								Local_49[iParam0 /*6*/].f_3++;
							}
							else if (UNK_0xD1960163A3042274(Local_49[iParam0 /*6*/], -1273030092) == 1 && !UNK_0x6B4464DA5794D055(Local_49[iParam0 /*6*/]))
							{
								UNK_0xFFDDE8CC59EB6D40(Local_49[iParam0 /*6*/], UNK_0x16F2683693E537C9(), false, vLocal_139, 500f, 100, 1, joaat("FIRING_PATTERN_BURST_FIRE"));
							}
						}
						break;
					case 2:
						if (!func_98(Local_49[iParam0 /*6*/], -1708676711, 1))
						{
							if (!UNK_0x7ED67A9BE53DAC95(Local_49[iParam0 /*6*/]))
							{
								UNK_0x11AD11297DC58CC7(Local_49[iParam0 /*6*/], false);
								UNK_0x6C3AE6E278DB3D0E(Local_49[iParam0 /*6*/], UNK_0x16F2683693E537C9(), 0, 16);
							}
							else
							{
								UNK_0x1A9C605516346AA9(Local_49[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			case 8:
			case 10:
				if (Local_49[iParam0 /*6*/].f_3 >= 1 && Local_49[iParam0 /*6*/].f_3 < 3)
				{
					if ((UNK_0x405E212DDE472467(Local_49[iParam0 /*6*/], 0) && func_199(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0))) && UNK_0x4E861BC5B1EDA7BD(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0)))
					{
						func_105();
						UNK_0xD93EE6549113F9E1(false, 1);
						UNK_0x75CDA8644CD3B5F5(false, UNK_0x09AC81E49EA267F7(500, 1501), 4096);
						UNK_0xD93EE6549113F9E1(false, 0);
						UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
						func_103(Local_49[iParam0 /*6*/]);
						UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 1, false);
						Local_49[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_49[iParam0 /*6*/].f_3)
				{
					case 0:
						if (((func_44() && func_41(UNK_0x16F2683693E537C9(), Local_49[iParam0 /*6*/], 1) <= 125f) || ((UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()) && !UNK_0x70EED0761B82965E(UNK_0x16F2683693E537C9())) && func_41(UNK_0x16F2683693E537C9(), Local_49[iParam0 /*6*/], 1) <= 150f)) || (UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()) && !UNK_0x03068588A1FCED1A(Local_49[iParam0 /*6*/])))
						{
							Local_49[iParam0 /*6*/].f_1 = func_60(Local_49[iParam0 /*6*/], 1, 145);
							UNK_0x7F010F50CE03A8AF(Local_49[iParam0 /*6*/].f_1, false);
							UNK_0x54B31D18C3F36EB7(Local_49[iParam0 /*6*/].f_1, 1);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					case 1:
						if (UNK_0x405E212DDE472467(Local_49[iParam0 /*6*/], 0))
						{
							if (func_199(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0)))
							{
								if (UNK_0x7B5606C651AB51B5(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0), 3, 6000) || func_97(iParam0, 5000))
								{
									UNK_0x1A9C605516346AA9(Local_49[iParam0 /*6*/], -1);
									UNK_0x11AD11297DC58CC7(Local_49[iParam0 /*6*/], true);
									UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 1, false);
									Local_49[iParam0 /*6*/].f_3++;
								}
								else if (!func_199(UNK_0xA30B8362589C124A(UNK_0x6937EA2286828455(Local_49[iParam0 /*6*/], 0), -1, 0)))
								{
									UNK_0xAFF39FB306F8E232(Local_49[iParam0 /*6*/], 3, true);
									UNK_0x6C3AE6E278DB3D0E(Local_49[iParam0 /*6*/], UNK_0x16F2683693E537C9(), 0, 16);
									Local_49[iParam0 /*6*/].f_3 = 3;
								}
							}
						}
						else
						{
							UNK_0x6C3AE6E278DB3D0E(Local_49[iParam0 /*6*/], UNK_0x16F2683693E537C9(), 0, 16);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					case 2:
						if (!func_98(Local_49[iParam0 /*6*/], -1708676711, 1))
						{
							if (!UNK_0x7ED67A9BE53DAC95(Local_49[iParam0 /*6*/]))
							{
								UNK_0x11AD11297DC58CC7(Local_49[iParam0 /*6*/], false);
								UNK_0x6C3AE6E278DB3D0E(Local_49[iParam0 /*6*/], UNK_0x16F2683693E537C9(), 0, 16);
							}
							else
							{
								UNK_0x1A9C605516346AA9(Local_49[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
		}
	}
	else
	{
		if (func_89(iParam0, 1))
		{
			UNK_0x46CB381A452EF99D(Local_49[iParam0 /*6*/], 1);
			UNK_0x15AFB6CBDE990FB6(Local_49[iParam0 /*6*/], 1, false);
			func_86(iParam0, 1);
		}
		if (!func_89(iParam0, 2))
		{
			if (UNK_0x4FC40AB0ECCE6E18(Local_49[iParam0 /*6*/]))
			{
				func_40(iParam0, 0);
			}
			else
			{
				func_40(iParam0, 1);
			}
		}
	}
}

float func_96(float fParam0, float fParam1, float fParam2)
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

bool func_97(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
		case 1:
			iVar0 = 1;
			break;
		case 2:
		case 3:
		case 4:
			iVar0 = 2;
			break;
		case 7:
		case 8:
			iVar0 = 3;
			break;
		case 9:
		case 10:
			iVar0 = 4;
			break;
	}
	if (func_199(Local_116[iVar0 /*4*/]))
	{
		if (!UNK_0x70EED0761B82965E(Local_116[iVar0 /*4*/]))
		{
			Local_116[iVar0 /*4*/].f_3 = (Local_116[iVar0 /*4*/].f_3 + UNK_0x6117725E0134737F());
		}
		else
		{
			Local_116[iVar0 /*4*/].f_3 = 0f;
		}
	}
	if (Local_116[iVar0 /*4*/].f_3 >= IntToFloat(iParam1))
	{
		return true;
	}
	return false;
}

bool func_98(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xD1960163A3042274(bParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return true;
		}
	}
	return false;
}

int func_99(int iParam0, int iParam1, int iParam2)
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

void func_100(int iParam0)
{
	func_58(iParam0, 3);
	if (!func_121(4))
	{
		func_68(4);
	}
	if (!func_121(2))
	{
		func_68(2);
	}
	Local_49[iParam0 /*6*/].f_1 = func_60(Local_49[iParam0 /*6*/], 1, 145);
	UNK_0x9FA191B317572861(Local_49[iParam0 /*6*/], 200f);
	if (UNK_0x405E212DDE472467(Local_49[iParam0 /*6*/], 0))
	{
		if (func_88(Local_49[iParam0 /*6*/], 0) != -1)
		{
			UNK_0x7F010F50CE03A8AF(Local_49[iParam0 /*6*/].f_1, false);
			UNK_0x54B31D18C3F36EB7(Local_49[iParam0 /*6*/].f_1, 1);
		}
		else
		{
			UNK_0xA3BF0AA5A2608191(Local_49[iParam0 /*6*/]);
			UNK_0x11AD11297DC58CC7(Local_49[iParam0 /*6*/], true);
		}
	}
}

bool func_101()
{
	return UNK_0x6AD0ABEEDDABA1F8(-1, 3150.508f, 2179.343f, -30f, 3064.608f, 2223.616f, 12.38177f, 103f);
}

bool func_102()
{
	bool bVar0;

	bVar0 = UNK_0x728870EB733D12A1();
	if (func_199(bVar0) && UNK_0x3D1053F9EB43B7AD(bVar0, 3083.23f, 2195.516f, -3.22382f, 3096.519f, 2195.455f, 4.949678f, 15f, 0, true, 0))
	{
		return true;
	}
	return false;
}

void func_103(bool bParam0)
{
	if (func_121(0))
	{
		UNK_0x75ABDC5F81978924(iLocal_339);
		func_104(0);
	}
	UNK_0x78ADC381772E3D54(bParam0, iLocal_339);
	UNK_0xF82EA857DA10E0CD(&iLocal_339);
}

void func_104(bool bParam0)
{
	UNK_0x0674E58A79778E99(&bLocal_149, bParam0);
}

void func_105()
{
	if (!func_121(0))
	{
		UNK_0xF82EA857DA10E0CD(&iLocal_339);
		UNK_0xDD353D0E9C789D0E(&iLocal_339);
		func_68(0);
	}
}

void func_106()
{
	bool bVar0;
	int iVar1;

	if (func_121(1) || func_121(4))
	{
		if (func_199(Local_116[0 /*4*/]) && func_41(UNK_0x16F2683693E537C9(), Local_116[0 /*4*/], 1) >= 250f)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 <= 10)
			{
				if (!func_39(iVar1, 1))
				{
					bVar0 = false;
				}
				iVar1++;
			}
			if (bVar0)
			{
				func_37();
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(Local_116[0 /*4*/]) && !func_199(Local_116[0 /*4*/]))
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= 10)
		{
			if (!func_39(iVar1, 1))
			{
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0)
		{
			func_37();
		}
	}
}

bool func_107()
{
	if (!func_52(5))
	{
		return true;
	}
	if (func_116())
	{
		return true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_115())
		{
			return false;
		}
	}
	if (func_108(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_108(float fParam0, bool bParam1)
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
		if (func_23(func_114()))
		{
			iVar36 = func_20();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 2) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 3))
				{
					func_109(iVar32, &Var0);
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

void func_109(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_110(uParam1, "Abigail1", func_112(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		case 1:
			func_110(uParam1, "Abigail2", func_112(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		case 2:
			func_110(uParam1, "Barry1", func_112(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		case 3:
			func_110(uParam1, "Barry2", func_112(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		case 4:
			func_110(uParam1, "Barry3", func_112(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		case 5:
			func_110(uParam1, "Barry3A", func_112(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 6:
			func_110(uParam1, "Barry3C", func_112(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 7:
			func_110(uParam1, "Barry4", func_112(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_111(iParam0), 0, 0);
			break;
		case 8:
			func_110(uParam1, "Dreyfuss1", func_112(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		case 9:
			func_110(uParam1, "Epsilon1", func_112(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		case 10:
			func_110(uParam1, "Epsilon2", func_112(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		case 11:
			func_110(uParam1, "Epsilon3", func_112(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		case 12:
			func_110(uParam1, "Epsilon4", func_112(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		case 13:
			func_110(uParam1, "Epsilon5", func_112(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		case 14:
			func_110(uParam1, "Epsilon6", func_112(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 15:
			func_110(uParam1, "Epsilon7", func_112(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		case 16:
			func_110(uParam1, "Epsilon8", func_112(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		case 17:
			func_110(uParam1, "Extreme1", func_112(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 18:
			func_110(uParam1, "Extreme2", func_112(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 19:
			func_110(uParam1, "Extreme3", func_112(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 20:
			func_110(uParam1, "Extreme4", func_112(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		case 21:
			func_110(uParam1, "Fanatic1", func_112(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_111(iParam0), 1, 0);
			break;
		case 22:
			func_110(uParam1, "Fanatic2", func_112(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_111(iParam0), 1, 0);
			break;
		case 23:
			func_110(uParam1, "Fanatic3", func_112(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_111(iParam0), 0, 1);
			break;
		case 24:
			func_110(uParam1, "Hao1", func_112(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_111(iParam0), 0, 1);
			break;
		case 25:
			func_110(uParam1, "Hunting1", func_112(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 26:
			func_110(uParam1, "Hunting2", func_112(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 27:
			func_110(uParam1, "Josh1", func_112(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		case 28:
			func_110(uParam1, "Josh2", func_112(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		case 29:
			func_110(uParam1, "Josh3", func_112(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		case 30:
			func_110(uParam1, "Josh4", func_112(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		case 31:
			func_110(uParam1, "Maude1", func_112(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 32:
			func_110(uParam1, "Minute1", func_112(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 33:
			func_110(uParam1, "Minute2", func_112(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 34:
			func_110(uParam1, "Minute3", func_112(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 35:
			func_110(uParam1, "MrsPhilips1", func_112(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		case 36:
			func_110(uParam1, "MrsPhilips2", func_112(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		case 37:
			func_110(uParam1, "Nigel1", func_112(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		case 38:
			func_110(uParam1, "Nigel1A", func_112(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		case 39:
			func_110(uParam1, "Nigel1B", func_112(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_111(iParam0), 1, 1);
			break;
		case 40:
			func_110(uParam1, "Nigel1C", func_112(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_111(iParam0), 1, 1);
			break;
		case 41:
			func_110(uParam1, "Nigel1D", func_112(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_111(iParam0), 1, 1);
			break;
		case 42:
			func_110(uParam1, "Nigel2", func_112(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		case 43:
			func_110(uParam1, "Nigel3", func_112(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		case 44:
			func_110(uParam1, "Omega1", func_112(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		case 45:
			func_110(uParam1, "Omega2", func_112(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		case 46:
			func_110(uParam1, "Paparazzo1", func_112(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 47:
			func_110(uParam1, "Paparazzo2", func_112(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 48:
			func_110(uParam1, "Paparazzo3", func_112(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		case 49:
			func_110(uParam1, "Paparazzo3A", func_112(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 50:
			func_110(uParam1, "Paparazzo3B", func_112(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 51:
			func_110(uParam1, "Paparazzo4", func_112(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		case 52:
			func_110(uParam1, "Rampage1", func_112(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		case 54:
			func_110(uParam1, "Rampage3", func_112(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		case 55:
			func_110(uParam1, "Rampage4", func_112(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		case 56:
			func_110(uParam1, "Rampage5", func_112(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		case 53:
			func_110(uParam1, "Rampage2", func_112(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		case 57:
			func_110(uParam1, "TheLastOne", func_112(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 58:
			func_110(uParam1, "Tonya1", func_112(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 59:
			func_110(uParam1, "Tonya2", func_112(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 60:
			func_110(uParam1, "Tonya3", func_112(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 61:
			func_110(uParam1, "Tonya4", func_112(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		case 62:
			func_110(uParam1, "Tonya5", func_112(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_110(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
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

int func_111(int iParam0)
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

struct<2> func_112(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_113(iParam0) };
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

struct<2> func_113(int iParam0)
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

int func_114()
{
	func_21();
	return Global_111638.f_2358.f_539.f_4321;
}

bool func_115()
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

bool func_116()
{
	if (func_119() && !func_115())
	{
		return true;
	}
	if (func_118() && func_117())
	{
		return true;
	}
	return false;
}

bool func_117()
{
	return Global_111356 > 0;
}

bool func_118()
{
	if (Global_95666 != -1)
	{
		return true;
	}
	return false;
}

bool func_119()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_120()
{
	if ((Global_111627 == func_30() && UNK_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return true;
	}
	return false;
}

bool func_121(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(bLocal_149, bParam0);
}

void func_122(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_124(iParam0);
	UNK_0x24D1A8A556F3252A(0);
	UNK_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_123();
}

void func_123()
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

void func_124(int iParam0)
{
	Global_111627 = iParam0;
}

int func_125(vector3 vParam0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	bool bVar8;

	if (!Global_150217)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_30();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_167())
		{
			return 0;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_115())
			{
				return 0;
			}
		}
		if (!Global_111638.f_9080)
		{
			return 0;
		}
		if (func_5(0))
		{
			return 0;
		}
		if (func_116())
		{
			return 0;
		}
		if (func_166())
		{
			return 0;
		}
		if (Global_111627 != -1)
		{
			return 0;
		}
		if (func_23(func_114()))
		{
			if (func_108(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !bParam6)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_165(iParam3))
		{
			return 0;
		}
		if (func_23(func_114()))
		{
			if (func_164(func_114()) == 4 || func_164(func_114()) == 5)
			{
				return 0;
			}
		}
		if (func_23(func_114()))
		{
			if (!func_163(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_162(Global_111638.f_24990.f_43[iParam3]))
		{
			return 0;
		}
		if ((UNK_0x1C0640BA9A7327B3() - Global_111629) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_160())
		{
			return 0;
		}
		if (UNK_0x2C1AA3A291786CDC())
		{
			return 0;
		}
		if (UNK_0xD4A2BF1975E2C50F())
		{
			return 0;
		}
		if (!func_150(4))
		{
			return 0;
		}
		if (!func_52(5))
		{
			return 0;
		}
		if (func_149(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (UNK_0x31609A585163CBAC(UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9())))
		{
			if ((UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == UNK_0xFBD08BECC9B87937(377.153f, -717.567f, 10.0536f) || UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == UNK_0xFBD08BECC9B87937(320.9934f, 265.2515f, 82.1221f)) || UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == UNK_0xFBD08BECC9B87937(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_149(0, 0))
		{
			return 0;
		}
		if (Global_30914)
		{
			return 0;
		}
		if (func_165(30) && !func_149(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_23(func_114()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111638.f_2358.f_539.f_2300[iVar4 /*3*/] };
				bVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_148(bVar8))
				{
					if (func_126(iVar4))
					{
						if (!func_63(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar5) < (210f * 210f))
							{
								if (func_114() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

int func_126(int iParam0)
{
	bool bVar0;

	bVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_127(bVar0);
}

int func_127(bool bParam0)
{
	return func_128(bParam0, 1);
}

int func_128(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_148(bParam0))
	{
		return 0;
	}
	func_129(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_129(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_130(func_141(), bParam0, uParam1, uParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_130(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_140(bParam0, bParam1))
	{
		iVar0 = func_139(bParam1);
		iVar1 = func_137(bParam0);
		iVar2 = (func_137(bParam0) - func_137(bParam1));
		iVar3 = (func_139(bParam0) - func_139(bParam1));
		iVar4 = (func_136(bParam0) - func_136(bParam1));
		iVar5 = (func_135(bParam0) - func_135(bParam1));
		iVar6 = (func_134(bParam0) - func_134(bParam1));
		iVar7 = (func_133(bParam0) - func_133(bParam1));
	}
	else
	{
		iVar0 = func_139(bParam0);
		iVar1 = func_137(bParam1);
		iVar2 = (func_137(bParam1) - func_137(bParam0));
		iVar3 = (func_139(bParam1) - func_139(bParam0));
		iVar4 = (func_136(bParam1) - func_136(bParam0));
		iVar5 = (func_135(bParam1) - func_135(bParam0));
		iVar6 = (func_134(bParam1) - func_134(bParam0));
		iVar7 = (func_133(bParam1) - func_133(bParam0));
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
		iVar4 = (iVar4 + func_132(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_131(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_131(float fParam0, float fParam1, float fParam2)
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

int func_132(bool bParam0, int iParam1)
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

int func_133(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_134(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_135(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_136(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

int func_137(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_138(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_138(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_139(bool bParam0)
{
	return (bParam0 && 15);
}

bool func_140(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_148(bParam1) || !func_148(bParam0))
	{
		return true;
	}
	bVar0 = func_137(bParam0);
	bVar1 = func_137(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_139(bParam0);
	bVar1 = func_139(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_136(bParam0);
	bVar1 = func_136(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_135(bParam0);
	bVar1 = func_135(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_134(bParam0);
	bVar1 = func_134(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_133(bParam0);
	bVar1 = func_133(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	return false;
}

bool func_141()
{
	var uVar0;

	func_147(&uVar0, UNK_0x4460E481B9E33ADA());
	func_146(&uVar0, UNK_0x8D199E381D262EEF());
	func_145(&uVar0, UNK_0xD8A54335F18763BA());
	func_144(&uVar0, UNK_0x972A296334C9D57B());
	func_143(&uVar0, UNK_0x118229AD063C3C1D());
	func_142(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_142(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_143(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_144(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_139(*uParam0);
	iVar1 = func_137(*uParam0);
	if (iParam1 < 1 || iParam1 > func_132(bVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_145(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_146(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_147(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_148(bool bParam0)
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
	iVar0 = func_133(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_134(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_135(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_137(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_139(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_136(bParam0);
	if (iVar5 < 1 || iVar5 > func_132(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_149(int iParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], bParam1))
	{
		return true;
	}
	return false;
}

bool func_150(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_114();
				if (!func_23(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_159()) || Global_110685) || Global_30770) || func_158()) || func_157(8, -1)) || func_156()) || func_155()) || func_154()) || func_153()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_159()) || Global_30770) || func_158()) || func_157(8, -1)) || func_154()) || func_156()) || func_155()) || func_153()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_159()) || Global_110685) || Global_30770) || func_158()) || func_157(8, -1)) || func_154()) || func_156()) || func_155()) || func_153()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_159()) || Global_110685) || Global_30770) || func_158()) || func_157(8, -1)) || func_156()) || func_155()) || func_153()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_159() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_157(8, -1)) || func_153()) || func_152()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_157(8, -1) || func_156()) || func_155()) || func_152()) || func_151())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_159()) || Global_30770) || func_158()) || func_157(8, -1)) || func_155()) || func_154()) || func_153()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_159()) || func_155()) || Global_110685) || Global_30770) || func_158()) || Global_42596) || func_157(8, -1)) || func_154()) || func_152()) || func_153()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_159()) || Global_110685) || Global_30770) || func_158()) || func_157(8, -1)) || func_154()) || func_152()) || func_156()) || func_155()) || func_153())
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

bool func_151()
{
	return Global_98783.f_1;
}

bool func_152()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_153()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_154()
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

bool func_155()
{
	return Global_98796.f_346 > 0;
}

bool func_156()
{
	return Global_98796.f_345 > 0;
}

bool func_157(bool bParam0, int iParam1)
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

bool func_158()
{
	return Global_1312877;
}

bool func_159()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_160()
{
	func_161();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

void func_161()
{
	if (func_22(14))
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
		Global_19486 = func_114();
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

bool func_162(bool bParam0)
{
	return func_140(func_141(), bParam0);
}

bool func_163(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_114();
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

int func_164(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_165(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_167())
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

bool func_166()
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

bool func_167()
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

int func_168()
{
	vector3 vVar0;
	float fVar3;

	if (func_199(UNK_0x16F2683693E537C9()))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		UNK_0xE82754C349C7B581(vVar0, &fVar3, 0, 0);
		if ((vVar0.y < 2149.042f && (UNK_0xC7BC967711A8A063(UNK_0x16F2683693E537C9()) || (UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9()) && (vVar0.z - fVar3) >= 7.5f))) && (vVar0.z - fVar3) >= 3f)
		{
			return 0;
		}
		if (vVar0.z >= 100f && UNK_0xC7BC967711A8A063(UNK_0x16F2683693E537C9()))
		{
			return 0;
		}
	}
	return 1;
}

void func_169(bool bParam0, bool bParam1)
{
	func_198();
	func_197();
	func_81(0);
	func_195(1, 1, 1, 0);
	func_193(0);
	func_191();
	UNK_0xE342F209E49C5314(3054.991f, 1995.887f, -20f, 3140.817f, 2225.639f, 10.453f, true, 1);
	UNK_0x225CFE81EA219E44();
	UNK_0xBFE31971E49FA500(1);
	UNK_0x5C2EBB66AD2EA5FF(0);
	func_190();
	func_189();
	func_188();
	func_187(bParam1);
	func_186(bParam1);
	UNK_0x51732B934211201A(bLocal_171);
	UNK_0x51B096AAC60548C1(1f);
	func_184();
	func_182();
	func_181(&uLocal_174, 1);
	func_181(&uLocal_174, 3);
	func_181(&uLocal_174, 4);
	func_181(&uLocal_174, 5);
	UNK_0x5CAFA5DD13658DFE(0);
	UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
	func_70(0);
	if (bParam0)
	{
		func_170(-1);
		UNK_0x10FAF14A60A0DBE1();
	}
}

void func_170(int iParam0)
{
	char cVar0[64];

	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_120())
	{
		func_174(iParam0);
		UNK_0x974531784BE14213(0, 0);
		Global_111629 = UNK_0x1C0640BA9A7327B3();
		func_173(30000);
		StringCopy(&cVar0, func_172(Global_111627, 1), 64);
		if (func_29(Global_111627) > 0)
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
	func_171(&Global_30827);
	Global_111628 = 0;
	func_124(-1);
}

void func_171(var uParam0)
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

char* func_172(int iParam0, bool bParam1)
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

void func_173(int iParam0)
{
	Global_41982 = (UNK_0x1C0640BA9A7327B3() + iParam0);
}

void func_174(int iParam0)
{
	func_175(iParam0, 0, func_180(iParam0));
}

void func_175(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;

	uVar0 = func_141();
	func_178(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_177(iParam0, &uVar0);
	Var1 = { func_176(&uVar0) };
}

struct<16> func_176(var uParam0)
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, "", 64);
	iVar16 = func_135(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_134(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_133(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_136(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_139(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_137(*uParam0), 64);
	return Var0;
}

void func_177(int iParam0, var uParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *uParam1;
}

void func_178(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_137(*uParam0);
	iVar1 = func_139(*uParam0);
	iVar2 = func_136(*uParam0);
	iVar3 = func_135(*uParam0);
	iVar4 = func_134(*uParam0);
	iVar5 = func_133(*uParam0);
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
	iVar6 = func_132(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_132(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_179(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_179(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_147(uParam0, iParam1);
	func_146(uParam0, iParam2);
	func_145(uParam0, iParam3);
	func_143(uParam0, iParam5);
	func_144(uParam0, iParam4);
	func_142(uParam0, iParam6);
}

int func_180(int iParam0)
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

void func_181(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_182()
{
	Global_19671 = 0;
	func_183();
}

void func_183()
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

void func_184()
{
	Global_19671 = 0;
	func_185();
}

void func_185()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_186(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_92(iVar0, bParam0);
		iVar0++;
	}
}

void func_187(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_40(iVar0, bParam0);
		iVar0++;
	}
}

void func_188()
{
}

void func_189()
{
	UNK_0x2F3540C2227116A3(bLocal_137);
	UNK_0x2F3540C2227116A3(bLocal_138);
}

void func_190()
{
}

void func_191()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_192(iVar0);
		iVar0++;
	}
}

void func_192(int iParam0)
{
	if (iLocal_172[iParam0] != 0)
	{
		UNK_0x2952D66A502EA873(iLocal_172[iParam0], 0);
		iLocal_172[iParam0] = 0;
	}
}

void func_193(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
		UNK_0x34D79252800B23FF(0);
		UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
		UNK_0x51B096AAC60548C1(0f);
		UNK_0xCE1A2E36474A9D6F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0x060F249A9A3E3F4E(false);
		UNK_0x15EA7F4313456B1D(3, false);
		UNK_0x15EA7F4313456B1D(1, false);
		UNK_0x15EA7F4313456B1D(8, false);
		UNK_0x15EA7F4313456B1D(2, false);
		UNK_0x15EA7F4313456B1D(6, false);
		UNK_0x15EA7F4313456B1D(4, false);
		UNK_0x15EA7F4313456B1D(12, false);
		UNK_0x15EA7F4313456B1D(5, false);
		func_194(9, 1);
		func_194(8, 1);
	}
	else
	{
		UNK_0x34D79252800B23FF(5);
		UNK_0x51B096AAC60548C1(1f);
		UNK_0xCE1A2E36474A9D6F(UNK_0xD803B885F5E47A62(), 1);
		UNK_0x060F249A9A3E3F4E(true);
		UNK_0x15EA7F4313456B1D(3, true);
		UNK_0x15EA7F4313456B1D(1, true);
		UNK_0x15EA7F4313456B1D(8, true);
		UNK_0x15EA7F4313456B1D(2, true);
		UNK_0x15EA7F4313456B1D(6, true);
		UNK_0x15EA7F4313456B1D(4, true);
		UNK_0x15EA7F4313456B1D(12, true);
		UNK_0x15EA7F4313456B1D(5, true);
		func_194(9, 0);
		func_194(8, 0);
	}
}

void func_194(bool bParam0, bool bParam1)
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

void func_195(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam0)
	{
		func_182();
	}
	if (bParam1)
	{
		if (!func_196() || (bParam0 && !bParam3))
		{
			UNK_0x790015DC92C918E2();
		}
		UNK_0xECEC50E724D52DC1();
	}
	if (bParam2)
	{
		UNK_0xA37A90C62806D848(1);
	}
}

bool func_196()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_197()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_43(&(Local_49[iVar0 /*6*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_43(&(Local_116[iVar0 /*4*/].f_1));
		iVar0++;
	}
}

void func_198()
{
	iLocal_47 = 0;
	iLocal_48 = 0;
	iLocal_148 = 0;
	bLocal_149 = false;
}

bool func_199(bool bParam0)
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

