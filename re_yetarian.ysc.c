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
	struct<20> Local_47[2];
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	bool bLocal_90 = false;
	bool bLocal_91 = false;
	bool bLocal_92 = false;
	int iLocal_93 = 0;
	bool bLocal_94 = false;
	bool bLocal_95 = false;
	bool bLocal_96 = false;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	vector3 vLocal_99 = { 0f, 0f, 0f };
	float fLocal_102 = 0f;
	vector3 vLocal_103 = { 0f, 0f, 0f };
	float fLocal_106 = 0f;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	bool bLocal_109 = false;
	bool bLocal_110 = false;
	bool bLocal_111 = false;
	bool bLocal_112 = false;
	bool bLocal_113 = false;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116[2] = { 0, 0 };
	int iLocal_119 = 0;
	bool bLocal_120 = false;
	bool bLocal_121 = false;
	bool bLocal_122 = false;
	bool bLocal_123 = false;
	bool bLocal_124 = false;
	bool bLocal_125 = false;
	vector3 vLocal_126 = { 0f, 0f, 0f };
	vector3 vLocal_129 = { 0f, 0f, 0f };
	vector3 vLocal_132[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_139[2] = { 0f, 0f };
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	bool bLocal_148 = false;
	bool bLocal_149 = false;
	bool bLocal_150 = false;
	char[] cLocal_151[8] = 0;
	var uLocal_152 = 16;
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
	float fVar0;
	int iVar1;
	int iVar2;

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
	iLocal_12 = 3;
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
	iLocal_97 = -1;
	iLocal_98 = -1;
	bLocal_122 = joaat("P_AMB_PHONE_01");
	vLocal_126 = { -35.607f, -1110.046f, 26.4364f };
	vLocal_129 = { -126.1154f, -1129.347f, 23.4329f };
	iLocal_143 = -1;
	iLocal_144 = -1;
	iLocal_145 = -1;
	iLocal_146 = -1;
	cLocal_151 = "REYE_AU";
	func_173(ScriptParam_0.f_1[0 /*3*/]);
	if (UNK_0x2EBF608FFE6CA406(27))
	{
		func_172();
	}
	if (func_145(ScriptParam_0.f_1[0 /*3*/], 30, 0, 0, 0))
	{
		func_143(30);
	}
	else
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	func_130();
	while (true)
	{
		if (!func_129())
		{
			if (func_128())
			{
				func_100();
			}
		}
		if (UNK_0xDA8F5DDC86FE3C26("DEALERSHIP"))
		{
			if (UNK_0x8ED9A0095B69A728("DEALERSHIP"))
			{
				UNK_0x2723524E448F4BDD("DEALERSHIP", false);
			}
		}
		fVar0 = (UNK_0xFF085400D959E27C() + 20f);
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vLocal_99) < (fVar0 * fVar0))
		{
			UNK_0x9501364A300048C6();
		}
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vLocal_103) < (fVar0 * fVar0))
		{
			UNK_0x9501364A300048C6();
		}
		if (UNK_0x338D6FF72D84D90F())
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				func_97(iVar1);
				iVar1++;
			}
			switch (iLocal_88)
			{
				case 0:
					func_79();
					break;
				case 1:
					func_61();
					break;
				case 2:
					func_3();
					break;
			}
		}
		else if (bLocal_120)
		{
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 2)
			{
				func_97(iVar2);
				iVar2++;
			}
			switch (iLocal_88)
			{
				case 0:
					func_79();
					break;
				case 1:
					func_61();
					break;
				case 2:
					func_3();
					break;
			}
			if (func_2(bLocal_90))
			{
				if (func_1(bLocal_90, UNK_0x16F2683693E537C9(), 1) > 120f)
				{
					func_100();
				}
			}
		}
		else
		{
			func_100();
		}
		SYSTEM::WAIT(0);
	}
}

float func_1(bool bParam0, bool bParam1, int iParam2)
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

bool func_2(bool bParam0)
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

void func_3()
{
	switch (iLocal_89)
	{
		case 0:
			if (func_60())
			{
				iLocal_89 = 1;
			}
			func_59();
			break;
		case 1:
			func_59();
			if (func_2(bLocal_90))
			{
				if (func_58())
				{
					if (!bLocal_112)
					{
						bLocal_113 = true;
						iLocal_108 = 1;
						UNK_0xA3BF0AA5A2608191(bLocal_90);
						if (UNK_0xC844350D5D58C99A(bLocal_94))
						{
							UNK_0xF690C84DADBB3551(&bLocal_94);
						}
						if (!bLocal_110)
						{
							if (!bLocal_111)
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_147);
								UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 0, 2);
								UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 1500);
								UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
								UNK_0x75ABDC5F81978924(iLocal_147);
							}
							else
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_147);
								UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 0, 2);
								UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
								UNK_0x75ABDC5F81978924(iLocal_147);
							}
							UNK_0x78ADC381772E3D54(bLocal_90, iLocal_147);
							UNK_0xF82EA857DA10E0CD(&iLocal_147);
							bLocal_112 = true;
						}
						else
						{
							if (!bLocal_111)
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_147);
								UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 0, 2);
								if (func_1(bLocal_90, UNK_0x16F2683693E537C9(), 1) <= 4f)
								{
									UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 1500);
								}
								UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 150f, -1, 1, 0);
								UNK_0x75ABDC5F81978924(iLocal_147);
							}
							else
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_147);
								UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 0, 2);
								UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 150f, -1, 1, 0);
								UNK_0x75ABDC5F81978924(iLocal_147);
							}
							UNK_0x78ADC381772E3D54(bLocal_90, iLocal_147);
							UNK_0xF82EA857DA10E0CD(&iLocal_147);
							bLocal_112 = true;
						}
					}
					else
					{
						func_36();
						UNK_0xCAF7AE54F764D5AA(bLocal_90, 2f);
						if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(bLocal_90, false), 1) >= 100f && !UNK_0x8E28E832BEAC3DCE(UNK_0x68F4C0EC296D3901(bLocal_90, false), 3f))
						{
							UNK_0xEBA53F35D0085654(&bLocal_90);
						}
						if (Local_47[0 /*20*/].f_18 >= 5 && Local_47[1 /*20*/].f_18 >= 5)
						{
							func_4();
						}
					}
				}
				else
				{
					func_36();
					UNK_0xCAF7AE54F764D5AA(bLocal_90, 2f);
					if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(bLocal_90, false), 1) >= 100f && !UNK_0x8E28E832BEAC3DCE(UNK_0x68F4C0EC296D3901(bLocal_90, false), 3f))
					{
						UNK_0xEBA53F35D0085654(&bLocal_90);
					}
					if (Local_47[0 /*20*/].f_18 >= 5 && Local_47[1 /*20*/].f_18 >= 5)
					{
						if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -69.62395f, -1087.37f, 24.59833f, -11.27861f, -1108.28f, 34.17205f, 47.5f, 0, true, 0))
						{
							func_4();
						}
					}
					if (func_2(bLocal_90))
					{
						UNK_0x9DD8618CA5BF832D(bLocal_90, 60, true);
					}
				}
			}
			else
			{
				if (UNK_0xE4EDC4B0E92C078B(iLocal_93))
				{
					UNK_0x142CC44DB769B57E(&iLocal_93);
				}
				if (UNK_0xC844350D5D58C99A(bLocal_90))
				{
					if (UNK_0x437347B10A200C4B(bLocal_90, 0))
					{
						if (!bLocal_121)
						{
							bLocal_121 = true;
						}
					}
				}
				bLocal_113 = true;
				if (Local_47[0 /*20*/].f_18 >= 5 && Local_47[1 /*20*/].f_18 >= 5)
				{
					if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -69.62395f, -1087.37f, 24.59833f, -11.27861f, -1108.28f, 34.17205f, 47.5f, 0, true, 0))
					{
						func_4();
					}
				}
			}
			break;
	}
}

void func_4()
{
	func_35(&bLocal_90, 1, 0, 1);
	while (!func_34())
	{
		SYSTEM::WAIT(0);
	}
	if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
	{
		UNK_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_SIMEON_01", 0f);
	}
	func_8(-1, 0);
	func_5();
	func_100();
}

void func_5()
{
	func_6();
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

void func_8(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_32();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_31(iParam0))
	{
		func_30(iParam0, bParam1);
		if (!func_29(51))
		{
			func_19("RE_REWARD", 1, 0, 4000, 10000, func_22(), 0, 138, 0);
			func_18(51);
		}
		if (func_17(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_16(iParam0, bParam1) != 322)
		{
			func_10(func_16(iParam0, bParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_111626 = bParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_9(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_9(7);
			}
			else
			{
				func_9(1);
			}
		}
	}
}

void func_9(int iParam0)
{
	Global_111624 = iParam0;
}

void func_10(int iParam0, var uParam1, var uParam2)
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
		func_14((891 + iParam0), 1, -1, 1);
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
		func_11();
	}
}

void func_11()
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
		func_13(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_12() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_6();
				}
			}
		}
	}
}

int func_12()
{
	return Global_30768;
}

int func_13(int iParam0, bool bParam1)
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

int func_14(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_15();
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

int func_15()
{
	return Global_1312745;
}

int func_16(int iParam0, bool bParam1)
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

bool func_17(int iParam0)
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

void func_18(int iParam0)
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

void func_19(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_20(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_20(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_21();
	}
}

void func_21()
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

int func_22()
{
	func_23();
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

void func_23()
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_27(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			bVar0 = func_26(UNK_0x16F2683693E537C9());
			if (func_25(bVar0) && (!func_24(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != bVar0 && func_25(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = bVar0;
				Global_111638.f_2358.f_539.f_4321 = bVar0;
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

bool func_24(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_25(bool bParam0)
{
	return bParam0 < 3;
}

int func_26(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_27(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_27(bool bParam0)
{
	if (func_25(bParam0))
	{
		return func_28(bParam0);
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

var func_28(bool bParam0)
{
	return Global_1798[bParam0 /*29*/];
}

bool func_29(int iParam0)
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

void func_30(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), bParam1);
}

int func_31(int iParam0)
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

int func_32()
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, UNK_0xBB0808A181D4745C(), 64);
	iVar16 = func_33(Var0);
	return iVar16;
}

int func_33(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

bool func_34()
{
	return true;
}

void func_35(bool bParam0, bool bParam1, int iParam2, int iParam3)
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

void func_36()
{
	if (iLocal_114 == 0)
	{
		if (!func_57())
		{
			if (func_2(Local_47[0 /*20*/].f_1))
			{
				func_56(&uLocal_152, 5, Local_47[0 /*20*/].f_1, "YETARIAN_GOON", 0, 1);
			}
			else if (func_2(Local_47[1 /*20*/].f_1))
			{
				func_56(&uLocal_152, 5, Local_47[1 /*20*/].f_1, "YETARIAN_GOON", 0, 1);
			}
			else
			{
				iLocal_114 = 1;
				iLocal_115 = 1;
			}
			if (iLocal_114 == 0)
			{
				if (func_55() == 0)
				{
					if (func_39(&uLocal_152, cLocal_151, "RE_YETA_MIKE", 7, 0, 0, 0))
					{
						iLocal_114 = 1;
					}
				}
				else if (func_39(&uLocal_152, cLocal_151, "RE_YETA_FRAN", 7, 0, 0, 0))
				{
					iLocal_114 = 1;
				}
			}
		}
	}
	else if (iLocal_115 == 0)
	{
		if (!func_57())
		{
			if (func_2(Local_47[0 /*20*/].f_1))
			{
				func_37(Local_47[0 /*20*/].f_1, "FIGHT", 34);
				iLocal_115 = 1;
			}
			else if (func_2(Local_47[1 /*20*/].f_1))
			{
				func_37(Local_47[1 /*20*/].f_1, "FIGHT", 34);
				iLocal_115 = 1;
			}
			else
			{
				iLocal_115 = 1;
			}
		}
	}
}

void func_37(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_38(iParam2), 1);
}

int func_38(int iParam0)
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

int func_39(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_54(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_40(sParam2, iParam3, 0);
}

int func_40(char* sParam0, int iParam1, bool bParam2)
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
					func_53();
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
		if (func_52(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_51();
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
				func_50();
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
				if (func_49())
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
			if (func_48())
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
			func_47();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_46();
		func_41();
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
		func_53();
	}
	return 0;
}

void func_41()
{
	if (!func_42())
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

bool func_42()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_45())
	{
		return false;
	}
	if (func_43(UNK_0xD803B885F5E47A62()))
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

bool func_43(int iParam0)
{
	return func_44(iParam0, 20);
}

bool func_44(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_45()
{
	return -1;
}

void func_46()
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

void func_47()
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

bool func_48()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_49()
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

void func_50()
{
	if (func_24(14))
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
		Global_19486 = func_55();
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

void func_51()
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

bool func_52(bool bParam0, int iParam1)
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

void func_53()
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

void func_54(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_55()
{
	func_23();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_56(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_57()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

bool func_58()
{
	if (func_2(bLocal_90))
	{
		if (!bLocal_110)
		{
			if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(bLocal_90, false), 1) <= 7f || UNK_0xD1960163A3042274(bLocal_90, 242628503) == 7)
			{
				if (!bLocal_112)
				{
					if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(bLocal_90, false), 1) <= 7f)
					{
					}
					if (UNK_0xD1960163A3042274(bLocal_90, 242628503) == 7)
					{
					}
				}
				return true;
			}
		}
		else if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(bLocal_90, false), 1) <= 4.5f || UNK_0xD1960163A3042274(bLocal_90, 242628503) == 7)
		{
			if (!bLocal_112)
			{
				if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(bLocal_90, false), 1) <= 4.5f)
				{
				}
				if (UNK_0xD1960163A3042274(bLocal_90, 242628503) == 7)
				{
				}
			}
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_59()
{
	if (func_2(bLocal_90))
	{
		if (UNK_0xB4ECF989E2C1DAC8(bLocal_90, "cellphone@", "cellphone_call_out", 3))
		{
			if (UNK_0x8CA9406E01C7EE58(bLocal_90, "cellphone@", "cellphone_call_out") >= 0.24f)
			{
				if (UNK_0xC844350D5D58C99A(bLocal_94))
				{
					UNK_0xF690C84DADBB3551(&bLocal_94);
				}
			}
		}
	}
}

bool func_60()
{
	int iVar0;

	iVar0 = UNK_0xFBD08BECC9B87937(Local_47[0 /*20*/].f_10);
	if (iVar0 != 0)
	{
		UNK_0x0007C2367F4F23F3(iVar0);
		if (UNK_0xBD307E66C0669BFC(iVar0))
		{
			return true;
		}
	}
	return false;
}

void func_61()
{
	switch (iLocal_89)
	{
		case 0:
			iLocal_89 = 1;
			break;
		case 1:
			if (func_60())
			{
				if (!UNK_0x76395FF5E8D5E643(-1831288286))
				{
					UNK_0x8010B3127F058F0F(-1831288286, joaat("V_ILEV_FIB_DOOR1"), -31.72f, -1101.85f, 26.57f, 1, true, 0);
				}
				else if (UNK_0x9CED8DAD53D1A397(-1831288286) < 1f)
				{
					UNK_0x838CC054A9235BEC(-1831288286, 1f, false, false);
					UNK_0x1BA7FCEAFCE8D46E(-1831288286, 1, false, true);
				}
			}
			func_59();
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				if (func_2(bLocal_91) || func_2(bLocal_92))
				{
					if (func_65())
					{
						if (iLocal_119 == 0)
						{
							if (bLocal_109)
							{
								UNK_0xA3BF0AA5A2608191(bLocal_90);
								UNK_0xDD353D0E9C789D0E(&iLocal_147);
								UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 12, 2);
								UNK_0xC6EB89C59F2AF6B8(false, "cellphone@", "cellphone_call_out", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
								UNK_0x75ABDC5F81978924(iLocal_147);
								UNK_0x78ADC381772E3D54(bLocal_90, iLocal_147);
								UNK_0xF82EA857DA10E0CD(&iLocal_147);
							}
							else
							{
								UNK_0xA3BF0AA5A2608191(bLocal_90);
								UNK_0xDD353D0E9C789D0E(&iLocal_147);
								UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 12, 2);
								UNK_0xC6EB89C59F2AF6B8(false, "cellphone@", "cellphone_call_out", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
								UNK_0x75ABDC5F81978924(iLocal_147);
								UNK_0x78ADC381772E3D54(bLocal_90, iLocal_147);
								UNK_0xF82EA857DA10E0CD(&iLocal_147);
							}
							bLocal_120 = true;
							iLocal_119 = 1;
						}
						if (!bLocal_110 && !bLocal_109)
						{
							if (iLocal_97 == -1)
							{
								iLocal_97 = UNK_0x1C0640BA9A7327B3();
							}
							if (iLocal_98 == -1)
							{
								iLocal_98 = 4000;
							}
						}
						else
						{
							if (iLocal_97 == -1)
							{
								iLocal_97 = UNK_0x1C0640BA9A7327B3();
							}
							if (iLocal_98 == -1)
							{
								iLocal_98 = 1000;
							}
						}
						if (iLocal_97 != -1 && iLocal_98 != 1)
						{
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_97) >= iLocal_98)
							{
								func_62();
								UNK_0xC92DB9682A650680("RE9_SPOTTED");
								iLocal_107 = 1;
								iLocal_89 = 2;
							}
						}
					}
				}
				else
				{
					if (UNK_0xE4EDC4B0E92C078B(iLocal_93))
					{
						UNK_0x142CC44DB769B57E(&iLocal_93);
					}
					if (UNK_0xC844350D5D58C99A(bLocal_90))
					{
						if (UNK_0x437347B10A200C4B(bLocal_90, 0))
						{
							if (!bLocal_121)
							{
								bLocal_121 = true;
							}
						}
					}
					bLocal_113 = true;
					if (Local_47[0 /*20*/].f_18 >= 5 && Local_47[1 /*20*/].f_18 >= 5)
					{
						if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -69.62395f, -1087.37f, 24.59833f, -11.27861f, -1108.28f, 34.17205f, 47.5f, 0, true, 0))
						{
							func_4();
						}
					}
				}
			}
			break;
		case 2:
			iLocal_88 = 2;
			iLocal_89 = 0;
			break;
	}
}

void func_62()
{
	if (func_55() == 1)
	{
		func_56(&uLocal_152, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_56(&uLocal_152, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	}
	func_56(&uLocal_152, 4, bLocal_90, "SIMEON", 0, 1);
	if (bLocal_111)
	{
		func_39(&uLocal_152, cLocal_151, "RE_YETA_SNIP", 7, 0, 0, 0);
	}
	else if (bLocal_109)
	{
		func_39(&uLocal_152, cLocal_151, "RE_YETA_EXT", 7, 1, 0, 0);
	}
	else if (func_63())
	{
		if (func_55() == 0)
		{
			func_39(&uLocal_152, cLocal_151, "RE_YETAM", 7, 0, 0, 0);
		}
		else if (func_55() == 1)
		{
			func_39(&uLocal_152, cLocal_151, "RE_YETAF", 7, 0, 0, 0);
		}
	}
	else
	{
		func_39(&uLocal_152, cLocal_151, "RE_YETA_SNIP", 7, 0, 0, 0);
	}
}

bool func_63()
{
	if ((((((((func_64(UNK_0x16F2683693E537C9()) != joaat("WEAPON_UNARMED") && func_64(UNK_0x16F2683693E537C9()) != joaat("OBJECT")) && func_64(UNK_0x16F2683693E537C9()) != joaat("WEAPON_KNIFE")) && func_64(UNK_0x16F2683693E537C9()) != joaat("WEAPON_NIGHTSTICK")) && func_64(UNK_0x16F2683693E537C9()) != joaat("WEAPON_HAMMER")) && func_64(UNK_0x16F2683693E537C9()) != joaat("WEAPON_BAT")) && func_64(UNK_0x16F2683693E537C9()) != joaat("WEAPON_CROWBAR")) && func_64(UNK_0x16F2683693E537C9()) != joaat("WEAPON_GOLFCLUB")) && func_64(UNK_0x16F2683693E537C9()) != joaat("WEAPON_BOTTLE"))
	{
		if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			return false;
		}
		else if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
		{
			return false;
		}
	}
	return true;
}

int func_64(bool bParam0)
{
	var uVar0;

	UNK_0xCAE036C45E7FC720(bParam0, &uVar0, 1);
	return uVar0;
}

bool func_65()
{
	if (!UNK_0x029064EA9141FCC2(vLocal_126, vLocal_129) && !(UNK_0xF65264B66E133BD8(-61.01321f, -1093.393f, 25.75297f, 2f, 0, 1, 0, 0, 0, false, 0) && UNK_0xF65264B66E133BD8(-38.59683f, -1109.284f, 25.68742f, 2f, 0, 1, 0, 0, 0, false, 0)))
	{
		if (UNK_0xB0A50BC6EDB99CA9(UNK_0x16F2683693E537C9()) == UNK_0x12AB0310C2281427("rm_showroom"))
		{
			if (!func_129())
			{
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -41.19015f, -1104.137f, 24.42232f, -33.7943f, -1107.183f, 28.67232f, 8.5f, 0, true, 0))
				{
					bLocal_110 = true;
					func_77(0);
				}
				else
				{
					bLocal_110 = false;
					func_77(1);
				}
				func_67(1);
			}
			return true;
		}
	}
	else if (UNK_0x029064EA9141FCC2(vLocal_126, vLocal_129) || (UNK_0xF65264B66E133BD8(-61.01321f, -1093.393f, 25.75297f, 2f, 0, 1, 0, 0, 0, false, 0) && UNK_0xF65264B66E133BD8(-38.59683f, -1109.284f, 25.68742f, 2f, 0, 1, 0, 0, 0, false, 0)))
	{
		if (UNK_0xB0A50BC6EDB99CA9(UNK_0x16F2683693E537C9()) == UNK_0x12AB0310C2281427("rm_showroom"))
		{
			func_35(&(Local_47[0 /*20*/].f_1), 1, 0, 1);
			func_35(&(Local_47[1 /*20*/].f_1), 1, 0, 1);
			func_66(&bLocal_92);
			func_66(&bLocal_91);
			func_100();
		}
	}
	return false;
}

void func_66(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!UNK_0x437347B10A200C4B(*bParam0, 0))
		{
			UNK_0xE8832A9E16A57A1F(*bParam0, false, 1);
		}
		if (!UNK_0xAF6690C489CC6203(*bParam0))
		{
			UNK_0x73270B3C9CC833FD(*bParam0, true, 0);
		}
		UNK_0xEBA53F35D0085654(bParam0);
	}
}

int func_67(bool bParam0)
{
	if (func_71())
	{
		Global_111628 = 1;
		Global_111625 = UNK_0x1C0640BA9A7327B3();
		if (func_17(Global_111627))
		{
			func_68(0);
		}
		UNK_0x974531784BE14213(1, "RE_TITLE");
		if (bParam0 && func_17(Global_111627))
		{
			UNK_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_68(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_69(func_70(iParam0), -1);
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
					func_69(func_70(iParam0), -1);
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
					func_69(func_70(iParam0), -1);
					Global_111638.f_24990.f_4++;
					UNK_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_69(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_70(int iParam0)
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

bool func_71()
{
	switch (func_72(&Global_30827, 0, 5, 0, UNK_0x0D0A574C76D769AC()))
	{
		case 1:
			return true;
		case 0:
			return true;
	}
	return false;
}

int func_72(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_76(0))
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
		if (!func_74(iParam2))
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
			func_73(uParam0, iParam4);
		}
	}
	return 2;
}

void func_73(var uParam0, int iParam1)
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

bool func_74(int iParam0)
{
	return func_75(iParam0, Global_41431);
}

int func_75(int iParam0, int iParam1)
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

bool func_76(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_74(iParam0))
	{
		return false;
	}
	return true;
}

void func_77(bool bParam0)
{
	if (bParam0)
	{
		if (func_2(bLocal_92))
		{
			UNK_0x4A4806F9D471E491(bLocal_92, true, 0);
			UNK_0x1E9649458B15960F(bLocal_92, false);
			UNK_0x98868AF51859FC75(bLocal_92, 1);
			bLocal_90 = bLocal_92;
			bLocal_94 = bLocal_96;
			func_66(&bLocal_91);
			func_78(&bLocal_95);
		}
	}
	else if (func_2(bLocal_91))
	{
		UNK_0x4A4806F9D471E491(bLocal_91, true, 0);
		UNK_0x1E9649458B15960F(bLocal_91, false);
		UNK_0x98868AF51859FC75(bLocal_91, 1);
		bLocal_90 = bLocal_91;
		bLocal_94 = bLocal_95;
		func_66(&bLocal_92);
		func_78(&bLocal_96);
	}
}

void func_78(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (UNK_0xBDEB2DEEF1D23A18(*bParam0))
		{
			UNK_0x15AFB6CBDE990FB6(*bParam0, 1, true);
		}
		UNK_0xF690C84DADBB3551(bParam0);
	}
}

void func_79()
{
	switch (iLocal_89)
	{
		case 0:
			if (func_96())
			{
				iLocal_89 = 1;
			}
			else if (func_84())
			{
				func_100();
			}
			UNK_0xE342F209E49C5314(-51.89f, -1097.35f, 23.42f, -45.71f, -1092.1f, 27.42f, false, 1);
			UNK_0x10F452EDECF82313(-53.57574f, -1095.356f, 24.17232f, -46.52551f, -1094.587f, 27.42232f, 3.75f, 0, 0, 0, 0, 0, 0);
			break;
		case 1:
			if (!func_2(bLocal_91) || !func_2(bLocal_92))
			{
				func_81(&bLocal_91, 18, vLocal_99, fLocal_102, 1);
				if (func_2(bLocal_91))
				{
					UNK_0x4A4806F9D471E491(bLocal_91, false, 0);
					UNK_0x98868AF51859FC75(bLocal_91, 0);
					UNK_0x25C5402CC10F76CD(bLocal_91, false);
					UNK_0x11AD11297DC58CC7(bLocal_91, true);
					UNK_0x6DF7BF67E86AAE86(bLocal_91, bLocal_150);
					UNK_0x7980D72D61BEF4D5(bLocal_91, true);
					UNK_0x262EF6C6306BEA6C(bLocal_91, joaat("WEAPON_PISTOL"), 999, false, false);
					UNK_0xCA84BD02FBA0BEA4(bLocal_91, 0, bLocal_148);
					UNK_0x0E2400AB9174FA81(5, bLocal_148, joaat("PLAYER"));
					UNK_0xE8832A9E16A57A1F(bLocal_91, true, 1);
					UNK_0x4E885A246A9D983A(bLocal_91, 104, true);
					bLocal_95 = UNK_0x7707E48765093646(bLocal_122, UNK_0x68F4C0EC296D3901(bLocal_91, true), true, true, false);
					UNK_0x9F528B1B53FBC5D9(bLocal_95, bLocal_91, UNK_0x4A089F2B762B8D33(bLocal_91, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
					UNK_0xDD353D0E9C789D0E(&iLocal_147);
					UNK_0xC6EB89C59F2AF6B8(false, "cellphone@str", "cellphone_call_listen_b", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
					UNK_0xC6EB89C59F2AF6B8(false, "cellphone@str", "cellphone_call_listen_f", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
					UNK_0xC6EB89C59F2AF6B8(false, "cellphone@str", "cellphone_call_listen_no_a", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
					UNK_0xC6EB89C59F2AF6B8(false, "cellphone@str", "cellphone_call_listen_d", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
					UNK_0x25644C31B4B6E9F3(iLocal_147, 1);
					UNK_0x75ABDC5F81978924(iLocal_147);
					UNK_0x78ADC381772E3D54(bLocal_91, iLocal_147);
					UNK_0xF82EA857DA10E0CD(&iLocal_147);
					UNK_0x1E9649458B15960F(bLocal_91, true);
				}
				func_81(&bLocal_92, 18, vLocal_103, fLocal_106, 1);
				if (func_2(bLocal_92))
				{
					UNK_0x4A4806F9D471E491(bLocal_92, false, 0);
					UNK_0x98868AF51859FC75(bLocal_92, 0);
					UNK_0x25C5402CC10F76CD(bLocal_92, false);
					UNK_0x11AD11297DC58CC7(bLocal_92, true);
					UNK_0x6DF7BF67E86AAE86(bLocal_92, bLocal_150);
					UNK_0x7980D72D61BEF4D5(bLocal_92, true);
					UNK_0x262EF6C6306BEA6C(bLocal_92, joaat("WEAPON_PISTOL"), 999, false, false);
					UNK_0xCA84BD02FBA0BEA4(bLocal_92, 0, bLocal_148);
					UNK_0x0E2400AB9174FA81(5, bLocal_148, joaat("PLAYER"));
					UNK_0xE8832A9E16A57A1F(bLocal_92, true, 1);
					UNK_0x4E885A246A9D983A(bLocal_92, 104, true);
					bLocal_96 = UNK_0x7707E48765093646(bLocal_122, UNK_0x68F4C0EC296D3901(bLocal_92, true), true, true, false);
					UNK_0x9F528B1B53FBC5D9(bLocal_96, bLocal_92, UNK_0x4A089F2B762B8D33(bLocal_92, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
					UNK_0xDD353D0E9C789D0E(&iLocal_147);
					UNK_0xC6EB89C59F2AF6B8(false, "cellphone@str", "cellphone_call_listen_b", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
					UNK_0xC6EB89C59F2AF6B8(false, "cellphone@str", "cellphone_call_listen_f", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
					UNK_0xC6EB89C59F2AF6B8(false, "cellphone@str", "cellphone_call_listen_no_a", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
					UNK_0xC6EB89C59F2AF6B8(false, "cellphone@str", "cellphone_call_listen_d", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
					UNK_0x25644C31B4B6E9F3(iLocal_147, 1);
					UNK_0x75ABDC5F81978924(iLocal_147);
					UNK_0x78ADC381772E3D54(bLocal_92, iLocal_147);
					UNK_0xF82EA857DA10E0CD(&iLocal_147);
					UNK_0x1E9649458B15960F(bLocal_91, true);
				}
			}
			else
			{
				func_80();
				bLocal_123 = UNK_0x122AAB0B1D6F55AD(joaat("BALLER2"), -46.2722f, -1097.466f, 25.42f, 112.5363f, true, true, false);
				UNK_0xC6A6B4DDD6DC073A(bLocal_123, 7);
				UNK_0x8BF0BEF985EB6D43(bLocal_123, 3);
				UNK_0x71EDC33E5A423750(bLocal_123, 2);
				UNK_0x05EC10F460C3A4AF(bLocal_123, 0);
				bLocal_124 = UNK_0x122AAB0B1D6F55AD(joaat("TAILGATER"), -41.07354f, -1099.567f, 25.42f, 138.4292f, true, true, false);
				UNK_0xC6A6B4DDD6DC073A(bLocal_124, 12);
				UNK_0x71EDC33E5A423750(bLocal_124, 2);
				UNK_0x05EC10F460C3A4AF(bLocal_124, 0);
				bLocal_125 = UNK_0x122AAB0B1D6F55AD(joaat("BJXL"), -36.74456f, -1101.583f, 25.42f, 155.1573f, true, true, false);
				UNK_0xC6A6B4DDD6DC073A(bLocal_125, 4);
				UNK_0x8BF0BEF985EB6D43(bLocal_125, 3);
				UNK_0x71EDC33E5A423750(bLocal_125, 2);
				UNK_0x05EC10F460C3A4AF(bLocal_125, 0);
				iLocal_89 = 2;
			}
			break;
		case 2:
			iLocal_88 = 1;
			iLocal_89 = 0;
			break;
	}
}

void func_80()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_47[iVar0 /*20*/].f_18 = 1;
		iVar0++;
	}
}

int func_81(bool bParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	bool bVar0;

	if (!func_25(bParam1))
	{
		bVar0 = func_83(bParam1);
		UNK_0x523BCC9DC80CD82F(bVar0);
		if (UNK_0xB87F6CF6E5628C67(bVar0))
		{
			if (UNK_0xC844350D5D58C99A(*bParam0))
			{
				UNK_0xEBA53F35D0085654(bParam0);
			}
			*bParam0 = UNK_0x36F2404464202779(26, bVar0, vParam2, bParam5, 0, false);
			UNK_0x78ED16BE998AECC7(*bParam0);
			if (bVar0 == joaat("IG_LAMARDAVIS"))
			{
				if (UNK_0x36C584991B4C183F(*bParam0, 3) == 0)
				{
					UNK_0x64F9F278AB9DCA2C(*bParam0, 5, 2, false, 0);
				}
			}
			func_82(*bParam0, bParam1);
			if (bParam6)
			{
				UNK_0x71199B01895C6202(bVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_82(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 7;
	if (bParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (bParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (bParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_94578[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_83(bool bParam0)
{
	if (!func_25(bParam0))
	{
		return func_28(bParam0);
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

bool func_84()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_43) < (75f * 75f))
		{
			return true;
		}
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_95())
		{
			return false;
		}
	}
	if (func_91())
	{
		return true;
	}
	if (func_85(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_85(float fParam0, bool bParam1)
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
		if (func_25(func_55()))
		{
			iVar36 = func_22();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 2) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 3))
				{
					func_86(iVar32, &Var0);
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

void func_86(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_87(uParam1, "Abigail1", func_89(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
		case 1:
			func_87(uParam1, "Abigail2", func_89(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
		case 2:
			func_87(uParam1, "Barry1", func_89(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
		case 3:
			func_87(uParam1, "Barry2", func_89(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
		case 4:
			func_87(uParam1, "Barry3", func_89(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		case 5:
			func_87(uParam1, "Barry3A", func_89(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 6:
			func_87(uParam1, "Barry3C", func_89(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 7:
			func_87(uParam1, "Barry4", func_89(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_88(iParam0), 0, 0);
			break;
		case 8:
			func_87(uParam1, "Dreyfuss1", func_89(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		case 9:
			func_87(uParam1, "Epsilon1", func_89(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_88(iParam0), 0, 0);
			break;
		case 10:
			func_87(uParam1, "Epsilon2", func_89(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
		case 11:
			func_87(uParam1, "Epsilon3", func_89(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_88(iParam0), 0, 0);
			break;
		case 12:
			func_87(uParam1, "Epsilon4", func_89(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_88(iParam0), 0, 0);
			break;
		case 13:
			func_87(uParam1, "Epsilon5", func_89(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
		case 14:
			func_87(uParam1, "Epsilon6", func_89(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 15:
			func_87(uParam1, "Epsilon7", func_89(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_88(iParam0), 0, 0);
			break;
		case 16:
			func_87(uParam1, "Epsilon8", func_89(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
		case 17:
			func_87(uParam1, "Extreme1", func_89(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 18:
			func_87(uParam1, "Extreme2", func_89(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 19:
			func_87(uParam1, "Extreme3", func_89(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 20:
			func_87(uParam1, "Extreme4", func_89(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		case 21:
			func_87(uParam1, "Fanatic1", func_89(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_88(iParam0), 1, 0);
			break;
		case 22:
			func_87(uParam1, "Fanatic2", func_89(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_88(iParam0), 1, 0);
			break;
		case 23:
			func_87(uParam1, "Fanatic3", func_89(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_88(iParam0), 0, 1);
			break;
		case 24:
			func_87(uParam1, "Hao1", func_89(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_88(iParam0), 0, 1);
			break;
		case 25:
			func_87(uParam1, "Hunting1", func_89(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 26:
			func_87(uParam1, "Hunting2", func_89(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 27:
			func_87(uParam1, "Josh1", func_89(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
		case 28:
			func_87(uParam1, "Josh2", func_89(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
		case 29:
			func_87(uParam1, "Josh3", func_89(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
		case 30:
			func_87(uParam1, "Josh4", func_89(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
		case 31:
			func_87(uParam1, "Maude1", func_89(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 32:
			func_87(uParam1, "Minute1", func_89(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 33:
			func_87(uParam1, "Minute2", func_89(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 34:
			func_87(uParam1, "Minute3", func_89(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 35:
			func_87(uParam1, "MrsPhilips1", func_89(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_88(iParam0), 0, 0);
			break;
		case 36:
			func_87(uParam1, "MrsPhilips2", func_89(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_88(iParam0), 0, 0);
			break;
		case 37:
			func_87(uParam1, "Nigel1", func_89(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
		case 38:
			func_87(uParam1, "Nigel1A", func_89(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
		case 39:
			func_87(uParam1, "Nigel1B", func_89(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_88(iParam0), 1, 1);
			break;
		case 40:
			func_87(uParam1, "Nigel1C", func_89(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_88(iParam0), 1, 1);
			break;
		case 41:
			func_87(uParam1, "Nigel1D", func_89(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_88(iParam0), 1, 1);
			break;
		case 42:
			func_87(uParam1, "Nigel2", func_89(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
		case 43:
			func_87(uParam1, "Nigel3", func_89(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
		case 44:
			func_87(uParam1, "Omega1", func_89(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		case 45:
			func_87(uParam1, "Omega2", func_89(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		case 46:
			func_87(uParam1, "Paparazzo1", func_89(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 47:
			func_87(uParam1, "Paparazzo2", func_89(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 48:
			func_87(uParam1, "Paparazzo3", func_89(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		case 49:
			func_87(uParam1, "Paparazzo3A", func_89(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 50:
			func_87(uParam1, "Paparazzo3B", func_89(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 51:
			func_87(uParam1, "Paparazzo4", func_89(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		case 52:
			func_87(uParam1, "Rampage1", func_89(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_88(iParam0), 0, 0);
			break;
		case 54:
			func_87(uParam1, "Rampage3", func_89(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
		case 55:
			func_87(uParam1, "Rampage4", func_89(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
		case 56:
			func_87(uParam1, "Rampage5", func_89(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_88(iParam0), 0, 0);
			break;
		case 53:
			func_87(uParam1, "Rampage2", func_89(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
		case 57:
			func_87(uParam1, "TheLastOne", func_89(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 58:
			func_87(uParam1, "Tonya1", func_89(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 59:
			func_87(uParam1, "Tonya2", func_89(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 60:
			func_87(uParam1, "Tonya3", func_89(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 61:
			func_87(uParam1, "Tonya4", func_89(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		case 62:
			func_87(uParam1, "Tonya5", func_89(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_87(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
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

int func_88(int iParam0)
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

struct<2> func_89(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_90(iParam0) };
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

struct<2> func_90(int iParam0)
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

bool func_91()
{
	if (func_94() && !func_95())
	{
		return true;
	}
	if (func_93() && func_92())
	{
		return true;
	}
	return false;
}

bool func_92()
{
	return Global_111356 > 0;
}

bool func_93()
{
	if (Global_95666 != -1)
	{
		return true;
	}
	return false;
}

bool func_94()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_95()
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

bool func_96()
{
	if (((((((((((UNK_0xB87F6CF6E5628C67(Local_47[0 /*20*/]) && UNK_0xB87F6CF6E5628C67(Local_47[1 /*20*/])) && UNK_0x1787731C4D1D6B19(Local_47[0 /*20*/].f_17)) && UNK_0x1787731C4D1D6B19(Local_47[1 /*20*/].f_17)) && func_60()) && UNK_0xB4AE0788C1587752("cellphone@")) && UNK_0xB4AE0788C1587752("cellphone@str")) && UNK_0x1C2E18E9C63BEB77("reyetarian_simeonoffice")) && UNK_0xB87F6CF6E5628C67(bLocal_122)) && UNK_0xB87F6CF6E5628C67(joaat("BJXL"))) && UNK_0xB87F6CF6E5628C67(joaat("TAILGATER"))) && UNK_0xB87F6CF6E5628C67(joaat("BALLER2")))
	{
		return true;
	}
	return false;
}

void func_97(int iParam0)
{
	switch (Local_47[iParam0 /*20*/].f_18)
	{
		case 0:
			break;
		case 1:
			if (!Local_47[iParam0 /*20*/].f_19)
			{
				if (!func_2(Local_47[iParam0 /*20*/].f_1))
				{
					Local_47[iParam0 /*20*/].f_1 = UNK_0x36F2404464202779(22, Local_47[iParam0 /*20*/], Local_47[iParam0 /*20*/].f_10, Local_47[iParam0 /*20*/].f_13, 1, true);
					if (func_2(Local_47[iParam0 /*20*/].f_1))
					{
						if (iParam0 == 0)
						{
							UNK_0x0B7C52F2BC1DC8EB(Local_47[iParam0 /*20*/].f_1, "PROP_HUMAN_SEAT_CHAIR", vLocal_132[iParam0 /*3*/], fLocal_139[iParam0], 0, 0, 1);
							UNK_0xD35BB27936A678E2(Local_47[iParam0 /*20*/].f_1);
							UNK_0xCE025D02CE77A931(Local_47[iParam0 /*20*/].f_1, 1);
							UNK_0xED253B8DDB3FFB77(Local_47[iParam0 /*20*/].f_1, -37.34785f, -1102.022f, 25.42232f, 3f, 0, 0);
							UNK_0xAFF39FB306F8E232(Local_47[iParam0 /*20*/].f_1, 37, true);
						}
						UNK_0x11AD11297DC58CC7(Local_47[iParam0 /*20*/].f_1, true);
						UNK_0x6DF7BF67E86AAE86(Local_47[iParam0 /*20*/].f_1, bLocal_148);
						UNK_0xCA84BD02FBA0BEA4(Local_47[iParam0 /*20*/].f_1, 0, bLocal_148);
						UNK_0xAFF39FB306F8E232(Local_47[iParam0 /*20*/].f_1, 23, false);
						UNK_0xAFF39FB306F8E232(Local_47[iParam0 /*20*/].f_1, 1, false);
						UNK_0xAFF39FB306F8E232(Local_47[iParam0 /*20*/].f_1, 28, true);
						UNK_0x9FC2699ACD081EC0(Local_47[iParam0 /*20*/].f_1, 0.7f, 0.3f);
						iLocal_116[iParam0] = 0;
						if (func_55() == 0)
						{
							UNK_0x262EF6C6306BEA6C(Local_47[iParam0 /*20*/].f_1, Local_47[iParam0 /*20*/].f_17, -1, true, true);
						}
						UNK_0x71199B01895C6202(Local_47[iParam0 /*20*/]);
						Local_47[iParam0 /*20*/].f_19 = 1;
						Local_47[iParam0 /*20*/].f_18 = 2;
					}
				}
			}
			break;
		case 2:
			if (func_2(Local_47[iParam0 /*20*/].f_1))
			{
				if (bLocal_113)
				{
					func_99(Local_47[iParam0 /*20*/].f_1, &(Local_47[iParam0 /*20*/].f_2), -1, 0, 0, 0, -1082130432 /* Float: -1f */, 0, -1, -1, 1);
					UNK_0xA3BF0AA5A2608191(Local_47[iParam0 /*20*/].f_1);
					UNK_0xD5EF6A937E06E46F(Local_47[iParam0 /*20*/].f_1, 1, -1, "DEFAULT_ACTION");
					UNK_0xDD353D0E9C789D0E(&iLocal_147);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 12, 2);
					UNK_0x96167B03C5A77156(false, Local_47[iParam0 /*20*/].f_14, 1f, -1, 3f, 0, 1193033728);
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
					UNK_0x75ABDC5F81978924(iLocal_147);
					UNK_0x78ADC381772E3D54(Local_47[iParam0 /*20*/].f_1, iLocal_147);
					UNK_0xF82EA857DA10E0CD(&iLocal_147);
					Local_47[iParam0 /*20*/].f_18 = 3;
				}
				if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(Local_47[iParam0 /*20*/].f_1, false), 1) >= 250f)
				{
					Local_47[iParam0 /*20*/].f_18 = 5;
				}
			}
			else
			{
				Local_47[iParam0 /*20*/].f_18 = 5;
			}
			break;
		case 3:
			if (func_2(Local_47[iParam0 /*20*/].f_1))
			{
				func_99(Local_47[iParam0 /*20*/].f_1, &(Local_47[iParam0 /*20*/].f_2), -1, 0, 0, 0, -1082130432 /* Float: -1f */, 0, -1, -1, 1);
				if (UNK_0xD1960163A3042274(Local_47[iParam0 /*20*/].f_1, 242628503) == 7 || UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(Local_47[iParam0 /*20*/].f_1, false), 1) <= 5f)
				{
					UNK_0x0C8C0C840C2D1AD2(Local_47[iParam0 /*20*/].f_1, UNK_0x16F2683693E537C9(), -1, 0, 2);
					UNK_0x6C3AE6E278DB3D0E(Local_47[iParam0 /*20*/].f_1, UNK_0x16F2683693E537C9(), 0, 16);
					UNK_0xEBE904C8FC460B66(Local_47[iParam0 /*20*/].f_1, 3);
					UNK_0xFADC0A217229F6B5(Local_47[iParam0 /*20*/].f_1, true);
					Local_47[iParam0 /*20*/].f_18 = 4;
				}
				if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(Local_47[iParam0 /*20*/].f_1, false), 1) >= 250f)
				{
					Local_47[iParam0 /*20*/].f_18 = 5;
				}
			}
			else
			{
				Local_47[iParam0 /*20*/].f_18 = 5;
			}
			break;
		case 4:
			func_99(Local_47[iParam0 /*20*/].f_1, &(Local_47[iParam0 /*20*/].f_2), -1, 0, 0, 0, -1082130432 /* Float: -1f */, 0, -1, -1, 1);
			if (!func_2(Local_47[iParam0 /*20*/].f_1))
			{
				Local_47[iParam0 /*20*/].f_18 = 5;
			}
			else
			{
				if (iLocal_116[iParam0] == 0)
				{
					if (!func_63() || func_55() == 0)
					{
						UNK_0x262EF6C6306BEA6C(Local_47[iParam0 /*20*/].f_1, Local_47[iParam0 /*20*/].f_17, -1, false, true);
						iLocal_116[iParam0] = 1;
					}
				}
				if (UNK_0xD1960163A3042274(Local_47[iParam0 /*20*/].f_1, 780511057) == 7)
				{
					UNK_0x6C3AE6E278DB3D0E(Local_47[iParam0 /*20*/].f_1, UNK_0x16F2683693E537C9(), 0, 16);
				}
				if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(Local_47[iParam0 /*20*/].f_1, false), 1) >= 75f)
				{
					Local_47[iParam0 /*20*/].f_18 = 5;
				}
			}
			break;
		case 5:
			func_98(&(Local_47[iParam0 /*20*/].f_2));
			if (UNK_0xC844350D5D58C99A(Local_47[iParam0 /*20*/].f_1))
			{
				UNK_0x6DAD7906B73F064D(&(Local_47[iParam0 /*20*/].f_1));
			}
			Local_47[iParam0 /*20*/].f_18 = 6;
			break;
		case 6:
			break;
	}
}

void func_98(bool bParam0)
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

int func_99(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
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

void func_100()
{
	int iVar0;

	if (func_129())
	{
		func_127(&Global_30827);
	}
	else
	{
		func_127(&Global_30827);
	}
	func_101(-1);
	UNK_0x51732B934211201A(bLocal_148);
	UNK_0x51732B934211201A(bLocal_149);
	UNK_0x51732B934211201A(bLocal_150);
	if (iLocal_107 == 0)
	{
		UNK_0x38DC636F3D2D2FA8("RE9_SPOTTED");
	}
	if (UNK_0xC844350D5D58C99A(bLocal_90))
	{
		UNK_0x6DAD7906B73F064D(&bLocal_90);
		if (UNK_0xE4EDC4B0E92C078B(iLocal_93))
		{
			UNK_0x142CC44DB769B57E(&iLocal_93);
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_47[iVar0 /*20*/].f_18 = 5;
		iVar0++;
	}
	UNK_0x2952D66A502EA873(iLocal_142, 0);
	UNK_0x206D561FBAA4D387();
	if (iLocal_143 != -1)
	{
		UNK_0xDDABC98CFF1A4C60(iLocal_143);
	}
	if (iLocal_144 != -1)
	{
		UNK_0xDDABC98CFF1A4C60(iLocal_144);
	}
	if (iLocal_145 != -1)
	{
		UNK_0xDDABC98CFF1A4C60(iLocal_145);
	}
	if (iLocal_146 != -1)
	{
		UNK_0xDDABC98CFF1A4C60(iLocal_146);
	}
	if (UNK_0xDA8F5DDC86FE3C26("DEALERSHIP"))
	{
		if (!UNK_0x8ED9A0095B69A728("DEALERSHIP"))
		{
			UNK_0x2723524E448F4BDD("DEALERSHIP", true);
		}
	}
	UNK_0xE342F209E49C5314(-51.0518f, -1104.685f, 25.2975f, -29.9812f, -1094.079f, 27.5686f, true, 1);
	UNK_0x10FAF14A60A0DBE1();
}

void func_101(int iParam0)
{
	char cVar0[64];

	if (iParam0 == -1)
	{
		iParam0 = func_32();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_129())
	{
		func_105(iParam0);
		UNK_0x974531784BE14213(0, 0);
		Global_111629 = UNK_0x1C0640BA9A7327B3();
		func_104(30000);
		StringCopy(&cVar0, func_103(Global_111627, 1), 64);
		if (func_31(Global_111627) > 0)
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
	func_127(&Global_30827);
	Global_111628 = 0;
	func_102(-1);
}

void func_102(int iParam0)
{
	Global_111627 = iParam0;
}

char* func_103(int iParam0, bool bParam1)
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

void func_104(int iParam0)
{
	Global_41982 = (UNK_0x1C0640BA9A7327B3() + iParam0);
}

void func_105(int iParam0)
{
	func_106(iParam0, 0, func_126(iParam0));
}

void func_106(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<16> Var1;

	bVar0 = func_125();
	func_116(&bVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_115(iParam0, &bVar0);
	Var1 = { func_107(&bVar0) };
}

struct<16> func_107(bool bParam0)
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, "", 64);
	iVar16 = func_114(*bParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_113(*bParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_112(*bParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_111(*bParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_110(*bParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_108(*bParam0), 64);
	return Var0;
}

int func_108(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_109(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_109(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_110(bool bParam0)
{
	return (bParam0 && 15);
}

int func_111(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

int func_112(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_113(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_114(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

void func_115(int iParam0, bool bParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *bParam1;
}

void func_116(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_108(*bParam0);
	bVar1 = func_110(*bParam0);
	iVar2 = func_111(*bParam0);
	iVar3 = func_114(*bParam0);
	iVar4 = func_113(*bParam0);
	iVar5 = func_112(*bParam0);
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
	iVar6 = func_124(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_124(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_117(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_117(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_123(bParam0, iParam1);
	func_122(bParam0, iParam2);
	func_121(bParam0, iParam3);
	func_120(bParam0, bParam5);
	func_119(bParam0, iParam4);
	func_118(bParam0, iParam6);
}

void func_118(bool bParam0, int iParam1)
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

void func_119(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_110(*bParam0);
	iVar1 = func_108(*bParam0);
	if (iParam1 < 1 || iParam1 > func_124(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_120(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_121(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_122(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_123(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_124(bool bParam0, int iParam1)
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

bool func_125()
{
	var uVar0;

	func_123(&uVar0, UNK_0x4460E481B9E33ADA());
	func_122(&uVar0, UNK_0x8D199E381D262EEF());
	func_121(&uVar0, UNK_0xD8A54335F18763BA());
	func_119(&uVar0, UNK_0x972A296334C9D57B());
	func_120(&uVar0, UNK_0x118229AD063C3C1D());
	func_118(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

int func_126(int iParam0)
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

void func_127(var uParam0)
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

bool func_128()
{
	if (!func_74(5))
	{
		return true;
	}
	if (func_91())
	{
		return true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_95())
		{
			return false;
		}
	}
	if (func_85(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_129()
{
	if ((Global_111627 == func_32() && UNK_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return true;
	}
	return false;
}

void func_130()
{
	vLocal_99 = { -45.97f, -1095.58f, 25.42f };
	fLocal_102 = 105.42f;
	vLocal_103 = { -33.39f, -1101.79f, 25.42f };
	fLocal_106 = 184.5161f;
	Local_47[0 /*20*/].f_10 = { -29.66f, -1103.44f, 26.42f };
	Local_47[0 /*20*/].f_13 = 58.7988f;
	Local_47[0 /*20*/].f_14 = { -35.19f, -1101.72f, 25.42f };
	Local_47[0 /*20*/] = joaat("G_M_M_ARMGOON_01");
	Local_47[0 /*20*/].f_17 = joaat("WEAPON_PISTOL");
	vLocal_132[0 /*3*/] = { -30.35f, -1104.29f, 25.89f };
	fLocal_139[0] = 177.22f;
	Local_47[1 /*20*/].f_10 = { -36.8032f, -1090.619f, 25.4223f };
	Local_47[1 /*20*/].f_13 = 257.6675f;
	Local_47[1 /*20*/].f_14 = { -34.66f, -1097.23f, 25.42f };
	Local_47[1 /*20*/] = joaat("G_M_Y_ARMGOON_02");
	Local_47[1 /*20*/].f_17 = joaat("WEAPON_PISTOL");
	vLocal_132[1 /*3*/] = { -29.11f, -1104.99f, 25.89f };
	fLocal_139[1] = 136.57f;
	UNK_0xF63400DBE3303D26("GoonGroup", &bLocal_148);
	UNK_0xF63400DBE3303D26("PlayerGroup", &bLocal_149);
	UNK_0xF63400DBE3303D26("YetarianGroup", &bLocal_150);
	UNK_0x0E2400AB9174FA81(1, bLocal_150, joaat("PLAYER"));
	UNK_0x0E2400AB9174FA81(1, joaat("PLAYER"), bLocal_150);
	UNK_0x0E2400AB9174FA81(5, bLocal_148, joaat("PLAYER"));
	UNK_0x0E2400AB9174FA81(5, joaat("PLAYER"), bLocal_148);
	UNK_0xE342F209E49C5314(-51.0518f, -1104.685f, 25.2975f, -29.9812f, -1094.079f, 27.5686f, false, 1);
	iLocal_142 = UNK_0x7D6CA5F52B3748BF(-79.95f, -1126.33f, 20.65f, -3.5f, -1081.6f, 30.67f, 0, 1, 1, 1);
	UNK_0xA8468BD240EA0036(-34.2476f, -1107.283f, 24.9621f, -24.7924f, -1102.557f, 29.8287f, 1, 1, 1, 0);
	if (iLocal_146 == -1)
	{
		iLocal_146 = UNK_0x544B74C043CE9948(-29.3f, -1086.35f, 25.57f, 5.5f, 3f, 2f, -10f, 0, 7);
	}
	func_131(196, 0);
	func_131(197, 0);
	func_131(194, 0);
	func_131(195, 0);
	UNK_0x523BCC9DC80CD82F(Local_47[0 /*20*/]);
	UNK_0x523BCC9DC80CD82F(Local_47[1 /*20*/]);
	UNK_0x523BCC9DC80CD82F(bLocal_122);
	UNK_0x523BCC9DC80CD82F(joaat("BJXL"));
	UNK_0x523BCC9DC80CD82F(joaat("TAILGATER"));
	UNK_0x523BCC9DC80CD82F(joaat("BALLER2"));
	UNK_0x6D0C93EE4FBA9307(Local_47[0 /*20*/].f_17, 31, 0);
	UNK_0x6D0C93EE4FBA9307(Local_47[1 /*20*/].f_17, 31, 0);
	UNK_0x3F423BF5B8125A50("cellphone@");
	UNK_0x3F423BF5B8125A50("cellphone@str");
	UNK_0x29398344B9E5B8A7("reyetarian_simeonoffice");
	UNK_0x13896FDECC859926("RE9_SPOTTED");
}

void func_131(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 != 226)
	{
		if (Global_76622)
		{
			iVar0 = Global_2439138.f_75[iParam0];
		}
		else
		{
			iVar0 = Global_111638.f_7256[iParam0];
		}
		if (iVar0 != iParam1 || UNK_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				UNK_0x5D96D8530B3D0904(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
				Global_37690[iParam0] = iParam1;
			}
			else if (Global_76622)
			{
				Global_2439138.f_75[iParam0] = iParam1;
			}
			else
			{
				Global_111638.f_7256[iParam0] = iParam1;
			}
			UNK_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
			func_133(iParam0);
			if (UNK_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_132(iParam0);
			}
		}
	}
}

void func_132(int iParam0)
{
	if (!UNK_0xEAE0D21A50E6C7F4(Global_38161.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		UNK_0x5D96D8530B3D0904(&(Global_38161.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_38161[Global_38161.f_227] = iParam0;
		Global_38161.f_227++;
	}
}

void func_133(int iParam0)
{
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (!func_141())
	{
		return;
	}
	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		return;
	}
	Var0 = { func_140(iParam0) };
	if (UNK_0xEAE0D21A50E6C7F4(Var0.f_4, 2))
	{
		func_138(iParam0, &Var0);
	}
	if (!UNK_0x76395FF5E8D5E643(Var0.f_5))
	{
		if (UNK_0x22A8E52414415B76())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = UNK_0x0EB28750412C3A5A(Var0, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1);
	if ((UNK_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) && Global_37690[iParam0] == 2) && fVar10 > 210f)
	{
		UNK_0x0674E58A79778E99(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
		Global_37236[iParam0] = 0;
	}
	if (UNK_0x8A22C4C08282BF26(joaat("STARTUP_POSITIONING")) == 0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_37463[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_98796.f_343 == 0)
				{
					if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
					{
						Global_98796.f_343 = UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9());
					}
				}
				iVar11 = Global_98796.f_343;
				iVar12 = UNK_0xFBD08BECC9B87937(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					UNK_0x5D96D8530B3D0904(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
					Global_37690[iParam0] = 3;
					UNK_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			UNK_0x0674E58A79778E99(&(Global_37463[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_37690[iParam0];
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Var0.f_4, false))
	{
		if (Global_111638.f_9080)
		{
			iVar9 = func_135(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_24(14))
		{
			iVar9 = 0;
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Var0.f_4, true) && UNK_0x8A22C4C08282BF26(joaat("AMBIENT_SOLOMON")) == 0)
	{
		if (func_134())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_111638.f_7256[iParam0];
	}
	if (Global_37917[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) || (Global_37236[iParam0] == 0 && Global_37690[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_37217)
		{
		}
		else
		{
			if (!UNK_0x76395FF5E8D5E643(Var0.f_5))
			{
				UNK_0x8010B3127F058F0F(Var0.f_5, Var0.f_3, Var0, 0, false, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (UNK_0xEAE0D21A50E6C7F4(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || UNK_0x755FF954DAE327E1(UNK_0x9CED8DAD53D1A397(Var0.f_5)) <= 0.015f)
					{
						iVar14 = UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9());
						iVar15 = UNK_0xFBD08BECC9B87937(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
						}
						UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
						bVar8 = true;
					}
					break;
				case 4:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				case 2:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				case 0:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 1);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				case 3:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, 0, false, true);
					bVar8 = true;
					break;
				case 5:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				case 6:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				default:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
			}
		}
		if (bVar8)
		{
			UNK_0x0674E58A79778E99(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
			Global_37917[iParam0] = iVar9;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) && Global_37690[iParam0] != 2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
		func_132(iParam0);
		if (Global_37236[iParam0] < 2)
		{
			Global_37236[iParam0]++;
		}
	}
}

bool func_134()
{
	if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
	{
		return false;
	}
	switch (func_55())
	{
		case 0:
			if (Global_111638.f_9080.f_99.f_58[65])
			{
				return true;
			}
			break;
		case 1:
			if (Global_111638.f_9080.f_99.f_58[66])
			{
				return true;
			}
			break;
		case 2:
			if (Global_111638.f_9080.f_99.f_58[65])
			{
				return true;
			}
			break;
	}
	return false;
}

int func_135(int iParam0)
{
	bool bVar0;

	bVar0 = func_55();
	if (func_136(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (bVar0 == 1)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[5], false) || UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[6], false))
			{
				return 0;
			}
		}
		if (func_25(bVar0))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_93771[5], bVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (bVar0 == 0)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[0], false))
				{
					return 0;
				}
			}
			if (func_25(bVar0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_93771[0], bVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		case 47:
		case 48:
		case 49:
			if (bVar0 == 1)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[5], false))
				{
					return 0;
				}
			}
			if (func_25(bVar0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_93771[5], bVar0))
				{
					return 0;
				}
			}
			break;
		case 50:
			if (bVar0 == 1)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[6], false))
				{
					return 0;
				}
			}
			if (func_25(bVar0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_93771[6], bVar0))
				{
					return 0;
				}
			}
			break;
		case 51:
		case 52:
			if (bVar0 == 2)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[2], false))
				{
					return 0;
				}
				if (func_25(bVar0))
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_93771[2], bVar0))
					{
						return 0;
					}
				}
			}
			else if (bVar0 == 0)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[1], false))
				{
					return 0;
				}
				if (func_25(bVar0))
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_93771[1], bVar0))
					{
						return 0;
					}
				}
			}
			break;
		case 53:
			if (bVar0 == 2)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[3], false))
				{
					return 0;
				}
			}
			if (func_25(bVar0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_93771[3], bVar0))
				{
					return 0;
				}
			}
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_136(int iParam0)
{
	int iVar0;

	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
			{
				iVar0 = UNK_0x134B62B726CEC8E6(func_137(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 1)));
				switch (iVar0)
				{
					case joaat("UTILLITRUCK"):
					case joaat("MONSTER"):
						return true;
				}
			}
		}
	}
	return false;
}

int func_137(int iParam0)
{
	return iParam0;
}

void func_138(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_4, 2))
	{
		return;
	}
	bVar0 = func_125();
	iVar1 = func_114(bVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_139(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_111638.f_7256[iParam0] = 0;
						UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_139(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_111638.f_7256[iParam0] = 0;
						UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 141:
		case 142:
			if (func_139(iParam0))
			{
				if ((UNK_0x8A22C4C08282BF26(joaat("JEWELRY_HEIST")) == 0 && UNK_0x8A22C4C08282BF26(joaat("JEWELRY_SETUP1")) == 0) && !Global_111638.f_9080.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_111638.f_7256[iParam0] = 0;
							UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_111638.f_9080.f_99.f_58[4])
				{
					Global_111638.f_7256[iParam0] = 0;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (Global_111638.f_9080.f_99.f_58[4])
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			else if (UNK_0x8A22C4C08282BF26(joaat("JEWELRY_HEIST")) == 0 && UNK_0x8A22C4C08282BF26(joaat("JEWELRY_SETUP1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 18f)
					{
						Global_111638.f_7256[iParam0] = 1;
						UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
				else if (iVar1 < 7)
				{
					if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 18f)
					{
						Global_111638.f_7256[iParam0] = 1;
						UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
			}
			break;
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_139(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_111638.f_7256[iParam0] = 0;
						UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 40f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (iVar1 < 9)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 40f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 147:
		case 148:
			if (!func_139(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_139(iParam0))
			{
				if (UNK_0x8A22C4C08282BF26(joaat("ASSASSIN_VALET")) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (UNK_0x8A22C4C08282BF26(joaat("ASSASSIN_VALET")) > 0)
			{
				Global_111638.f_7256[iParam0] = 0;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 158:
		case 159:
			if (UNK_0x8A22C4C08282BF26(Global_89532[70 /*34*/].f_6) == 0)
			{
				if (!func_139(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 160:
		case 161:
			if (UNK_0x8A22C4C08282BF26(joaat("OMEGA2")) == 0)
			{
				if (!func_139(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 70:
		case 71:
		case 72:
			if (!func_139(iParam0) && UNK_0x8A22C4C08282BF26(Global_89532[26 /*34*/].f_6) == 0)
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			else
			{
				return;
			}
			break;
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_139(iParam0))
			{
				if (UNK_0x8A22C4C08282BF26(Global_89532[43 /*34*/].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 190:
		case 191:
			if (!func_139(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 193:
			if (!func_139(iParam0))
			{
				if (UNK_0x8A22C4C08282BF26(Global_89532[93 /*34*/].f_6) > 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 198:
			if (!func_139(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 80:
			if (!func_139(iParam0))
			{
				if (UNK_0x8A22C4C08282BF26(Global_89532[8 /*34*/].f_6) == 0 && UNK_0x8A22C4C08282BF26(Global_89532[10 /*34*/].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 205:
		case 206:
			if (!func_139(iParam0))
			{
				if (UNK_0x8A22C4C08282BF26(Global_89532[47 /*34*/].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 207:
			if (UNK_0x8A22C4C08282BF26(Global_89532[70 /*34*/].f_6) == 0)
			{
				if (!func_139(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (UNK_0x8A22C4C08282BF26(Global_89532[48 /*34*/].f_6) == 0)
			{
				if (!func_139(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 99:
		case 100:
			if (UNK_0x8A22C4C08282BF26(Global_89532[39 /*34*/].f_6) == 0)
			{
				if (!func_139(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 216:
			if (!func_139(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 217:
		case 218:
			if (!func_139(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_139(iParam0))
			{
				Global_111638.f_7256[iParam0] = 0;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
	}
}

bool func_139(int iParam0)
{
	struct<7> Var0;
	int iVar7;

	Var0 = { func_140(iParam0) };
	iVar7 = UNK_0x51D3DB30DC0C68AD(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

struct<7> func_140(int iParam0)
{
	struct<7> Var0;

	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		case 1:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		case 2:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		case 3:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		case 4:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		case 5:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		case 6:
			Var0.f_3 = joaat("V_ILEV_HD_DOOR_L");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		case 7:
			Var0.f_3 = joaat("V_ILEV_HD_DOOR_R");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		case 8:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		case 9:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		case 10:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		case 11:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		case 12:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		case 13:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		case 14:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		case 15:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		case 16:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		case 17:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		case 18:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		case 19:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		case 20:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		case 21:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		case 22:
			Var0.f_3 = joaat("V_ILEV_CLOTHMIDDOOR");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		case 23:
			Var0.f_3 = joaat("V_ILEV_CLOTHMIDDOOR");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		case 24:
			Var0.f_3 = joaat("V_ILEV_CLOTHMIDDOOR");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		case 25:
			Var0.f_3 = joaat("V_ILEV_CLOTHMIDDOOR");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		case 26:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		case 27:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		case 28:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		case 29:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		case 30:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		case 31:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		case 32:
			Var0.f_3 = joaat("V_ILEV_TA_DOOR");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		case 33:
			Var0.f_3 = joaat("V_ILEV_ML_DOOR1");
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		case 34:
			Var0.f_3 = joaat("V_ILEV_ML_DOOR1");
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		case 35:
			Var0.f_3 = joaat("V_ILEV_TA_DOOR");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		case 36:
			Var0.f_3 = joaat("V_ILEV_TA_DOOR");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		case 37:
			Var0.f_3 = joaat("V_ILEV_TA_DOOR");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		case 38:
			Var0.f_3 = joaat("V_ILEV_MM_DOORM_L");
			Var0 = { -817f, 179f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -2097039789;
			break;
		case 39:
			Var0.f_3 = joaat("V_ILEV_MM_DOORM_R");
			Var0 = { -816f, 178f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -2127416656;
			break;
		case 40:
			Var0.f_3 = joaat("PROP_LD_GARAGED_01");
			Var0 = { -815f, 186f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		case 41:
			Var0.f_3 = joaat("PROP_BH1_48_BACKDOOR_L");
			Var0 = { -797f, 177f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 776026812;
			break;
		case 42:
			Var0.f_3 = joaat("PROP_BH1_48_BACKDOOR_R");
			Var0 = { -795f, 178f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 698422331;
			break;
		case 43:
			Var0.f_3 = joaat("PROP_BH1_48_BACKDOOR_L");
			Var0 = { -793f, 181f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 535076355;
			break;
		case 44:
			Var0.f_3 = joaat("PROP_BH1_48_BACKDOOR_R");
			Var0 = { -794f, 183f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 474675599;
			break;
		case 45:
			Var0.f_3 = joaat("PROP_BH1_48_GATE_1");
			Var0 = { -849f, 179f, 70f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -1978427516;
			break;
		case 46:
			Var0.f_3 = joaat("V_ILEV_MM_WINDOWWC");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -1700375831;
			break;
		case 47:
			Var0.f_3 = joaat("V_ILEV_FA_FRONTDOOR");
			Var0 = { -14f, -1441f, 31f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 613961892;
			break;
		case 48:
			Var0.f_3 = joaat("V_ILEV_FH_FRNTDOOR");
			Var0 = { -15f, -1427f, 31f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -272570634;
			break;
		case 49:
			Var0.f_3 = joaat("PROP_SC1_21_G_DOOR_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -1040675994;
			break;
		case 50:
			Var0.f_3 = joaat("V_ILEV_FH_FRONTDOOR");
			Var0 = { 7.52f, 539.53f, 176.18f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 1201219326;
			break;
		case 51:
			Var0.f_3 = joaat("V_ILEV_TREVTRAILDR");
			Var0 = { 1973f, 3815f, 34f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 1736361794;
			break;
		case 52:
			Var0.f_3 = joaat("PROP_CS4_10_TR_GD_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		case 53:
			Var0.f_3 = joaat("V_ILEV_TREV_DOORFRONT");
			Var0 = { -1150f, -1521f, 11f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("PROP_COM_LS_DOOR_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		case 55:
			Var0.f_3 = joaat("PROP_ID2_11_GDOOR");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		case 56:
			Var0.f_3 = joaat("PROP_COM_LS_DOOR_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		case 57:
			Var0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		case 58:
			Var0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		case 59:
			Var0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		case 60:
			Var0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		case 225:
			Var0.f_3 = joaat("LR_PROP_SUPERMOD_DOOR_01");
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		case 61:
			Var0.f_3 = joaat("V_ILEV_JANITOR_FRONTDOOR");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		case 62:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		case 63:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		case 64:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		case 65:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		case 66:
			Var0.f_3 = joaat("V_ILEV_STORE_DOOR");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		case 67:
			Var0.f_3 = joaat("V_ILEV_ML_DOOR1");
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		case 68:
			Var0.f_3 = joaat("V_ILEV_ML_DOOR1");
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		case 69:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		case 70:
			Var0.f_3 = joaat("PROP_RON_DOOR_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 71:
			Var0.f_3 = joaat("PROP_RON_DOOR_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 72:
			Var0.f_3 = joaat("PROP_RON_DOOR_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 73:
			Var0.f_3 = joaat("V_ILEV_BANK4DOOR02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		case 74:
			Var0.f_3 = joaat("V_ILEV_BANK4DOOR01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		case 75:
			Var0.f_3 = joaat("V_ILEV_LESTER_DOORFRONT");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		case 76:
			Var0.f_3 = joaat("V_ILEV_LESTER_DOORVERANDA");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		case 77:
			Var0.f_3 = joaat("V_ILEV_LESTER_DOORVERANDA");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		case 78:
			Var0.f_3 = joaat("V_ILEV_DEVIANTFRONTDOOR");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		case 79:
			Var0.f_3 = joaat("PROP_COM_GAR_DOOR_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		case 80:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 81:
			Var0.f_3 = joaat("PROP_STRIP_DOOR_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		case 82:
			Var0.f_3 = joaat("PROP_MAGENTA_DOOR");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		case 83:
			Var0.f_3 = joaat("PROP_MOTEL_DOOR_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		case 84:
			Var0.f_3 = joaat("V_ILEV_GANGSAFEDOOR");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		case 85:
			Var0.f_3 = joaat("V_ILEV_GANGSAFEDOOR");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		case 86:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_L");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		case 87:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_R");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		case 88:
			Var0.f_3 = joaat("PROP_CS6_03_DOOR_L");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		case 89:
			Var0.f_3 = joaat("PROP_CS6_03_DOOR_R");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		case 90:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_L");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		case 91:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_R");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		case 92:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_L");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		case 93:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_R");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		case 94:
			Var0.f_3 = joaat("PROP_GAR_DOOR_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		case 95:
			Var0.f_3 = joaat("PROP_GAR_DOOR_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		case 96:
			Var0.f_3 = joaat("PROP_MAP_DOOR_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		case 97:
			Var0.f_3 = joaat("V_ILEV_FIB_DOOR1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		case 98:
			Var0.f_3 = joaat("V_ILEV_TORT_DOOR");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		case 99:
			Var0.f_3 = joaat("V_ILEV_BL_SHUTTER2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 100:
			Var0.f_3 = joaat("V_ILEV_BL_SHUTTER2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 101:
			Var0.f_3 = joaat("V_ILEV_RC_DOOR3_L");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 102:
			Var0.f_3 = joaat("V_ILEV_RC_DOOR3_R");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 103:
			Var0.f_3 = joaat("V_ILEV_RC_DOOR3_L");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 104:
			Var0.f_3 = joaat("V_ILEV_RC_DOOR3_R");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 105:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		case 106:
			Var0.f_3 = joaat("V_ILEV_FH_DOOR4");
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		case 107:
			Var0.f_3 = joaat("PROP_EPSILON_DOOR_L");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		case 108:
			Var0.f_3 = joaat("PROP_EPSILON_DOOR_R");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		case 109:
			Var0.f_3 = joaat("V_ILEV_EPSSTOREDOOR");
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		case 110:
			Var0.f_3 = joaat("PROP_CH2_09C_GARAGE_DOOR");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		case 111:
			Var0.f_3 = joaat("V_ILEV_DOOR_ORANGESOLID");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		case 112:
			Var0.f_3 = joaat("PROP_MAGENTA_DOOR");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		case 113:
			Var0.f_3 = joaat("PROP_CS4_05_TDOOR");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		case 114:
			Var0.f_3 = joaat("V_ILEV_HOUSEDOOR1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		case 115:
			Var0.f_3 = joaat("V_ILEV_FH_FRNTDOOR");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		case 116:
			Var0.f_3 = joaat("P_CUT_DOOR_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		case 117:
			Var0.f_3 = joaat("P_CUT_DOOR_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		case 118:
			Var0.f_3 = joaat("V_ILEV_PO_DOOR");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		case 119:
			Var0.f_3 = joaat("PROP_SS1_10_DOOR_L");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		case 120:
			Var0.f_3 = joaat("PROP_SS1_10_DOOR_R");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		case 121:
			Var0.f_3 = joaat("V_ILEV_FIBL_DOOR02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		case 122:
			Var0.f_3 = joaat("V_ILEV_FIBL_DOOR01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		case 123:
			Var0.f_3 = joaat("V_ILEV_CT_DOOR01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		case 124:
			Var0.f_3 = joaat("V_ILEV_CT_DOOR01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		case 125:
			Var0.f_3 = joaat("AP1_02_DOOR_L");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		case 126:
			Var0.f_3 = joaat("AP1_02_DOOR_R");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		case 128:
			Var0.f_3 = joaat("V_ILEV_FB_DOORSHORTL");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		case 129:
			Var0.f_3 = joaat("V_ILEV_FB_DOORSHORTR");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		case 130:
			Var0.f_3 = joaat("V_ILEV_FB_DOOR01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		case 131:
			Var0.f_3 = joaat("V_ILEV_FB_DOOR02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		case 127:
			Var0.f_3 = joaat("V_ILEV_GTDOOR");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		case 132:
			Var0.f_3 = joaat("PROP_DAMDOOR_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		case 133:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 134:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 135:
			Var0.f_3 = joaat("PROP_SEC_BARRIER_LD_01A");
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), true);
			break;
		case 136:
			Var0.f_3 = joaat("PROP_SEC_BARRIER_LD_01A");
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), true);
			break;
		case 137:
			Var0.f_3 = joaat("PROP_SEC_BARRIER_LD_02A");
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), true);
			break;
		case 138:
			Var0.f_3 = joaat("PROP_SEC_BARRIER_LD_02A");
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), true);
			break;
		case 139:
			Var0.f_3 = joaat("V_ILEV_ROC_DOOR4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		case 140:
			Var0.f_3 = joaat("V_ILEV_ROC_DOOR4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		case 141:
			Var0.f_3 = joaat("P_JEWEL_DOOR_L");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 142:
			Var0.f_3 = joaat("P_JEWEL_DOOR_R1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 145:
			Var0.f_3 = joaat("PROP_LD_BANKDOORS_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 146:
			Var0.f_3 = joaat("PROP_LD_BANKDOORS_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 143:
			Var0.f_3 = joaat("HEI_PROP_HEI_BANKDOOR_NEW");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 144:
			Var0.f_3 = joaat("HEI_PROP_HEI_BANKDOOR_NEW");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 148:
			Var0.f_3 = joaat("HEI_V_ILEV_BK_GATE_PRIS");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 147:
			Var0.f_3 = joaat("V_ILEV_BK_DOOR");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 149:
			Var0.f_3 = joaat("V_ILEV_SHRF2DOOR");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		case 150:
			Var0.f_3 = joaat("V_ILEV_SHRF2DOOR");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		case 151:
			Var0.f_3 = joaat("V_ILEV_SHRFDOOR");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		case 152:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_L");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 153:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_R");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 154:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_L");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 155:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_R");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 156:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_L");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 157:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_R");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 158:
			Var0.f_3 = joaat("PROP_CH3_04_DOOR_01L");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 159:
			Var0.f_3 = joaat("PROP_CH3_04_DOOR_01R");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 160:
			Var0.f_3 = joaat("PROP_CH3_01_TRLRDOOR_L");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 161:
			Var0.f_3 = joaat("PROP_CH3_01_TRLRDOOR_R");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 162:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		case 163:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		case 165:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		case 166:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		case 167:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		case 168:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		case 169:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		case 170:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		case 171:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		case 172:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		case 173:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		case 174:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		case 175:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		case 176:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		case 177:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		case 178:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		case 179:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		case 180:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		case 181:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		case 182:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		case 183:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		case 184:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		case 164:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		case 185:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		case 186:
			Var0.f_3 = joaat("PROP_LRGGATE_01C_L");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		case 187:
			Var0.f_3 = joaat("PROP_LRGGATE_01C_R");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		case 188:
			Var0.f_3 = joaat("PROP_LRGGATE_01C_L");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		case 189:
			Var0.f_3 = joaat("PROP_LRGGATE_01C_R");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		case 190:
			Var0.f_3 = joaat("V_ILEV_BL_DOOREL_L");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 191:
			Var0.f_3 = joaat("V_ILEV_BL_DOOREL_R");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 192:
			Var0.f_3 = joaat("V_ILEV_CBANKCOUNTDOOR01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		case 193:
			Var0.f_3 = joaat("PROP_FNCLINK_03GATE5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("V_ILEV_CSR_DOOR_L");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		case 197:
			Var0.f_3 = joaat("V_ILEV_CSR_DOOR_R");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		case 194:
			Var0.f_3 = joaat("V_ILEV_CSR_DOOR_L");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		case 195:
			Var0.f_3 = joaat("V_ILEV_CSR_DOOR_R");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		case 198:
			Var0.f_3 = joaat("PROP_RON_DOOR_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 199:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 200:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 201:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 202:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 205:
			Var0.f_3 = joaat("V_ILEV_ABBMAINDOOR");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 206:
			Var0.f_3 = joaat("V_ILEV_ABBMAINDOOR2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 207:
			Var0.f_3 = joaat("PROP_CH3_04_DOOR_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 208:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 209:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 210:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 211:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 212:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 213:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 214:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 215:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 216:
			Var0.f_3 = joaat("PROP_GAR_DOOR_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 217:
			Var0.f_3 = joaat("PROP_GATE_TEP_01_L");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 218:
			Var0.f_3 = joaat("PROP_GATE_TEP_01_R");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 219:
			Var0.f_3 = joaat("PROP_ARTGALLERY_02_DR");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 220:
			Var0.f_3 = joaat("PROP_ARTGALLERY_02_DL");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 221:
			Var0.f_3 = joaat("PROP_ARTGALLERY_02_DR");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 222:
			Var0.f_3 = joaat("PROP_ARTGALLERY_02_DL");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 223:
			Var0.f_3 = joaat("PROP_FNCLINK_07GATE1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		case 203:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 204:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 224:
			Var0.f_3 = joaat("PROP_ABAT_SLIDE");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

bool func_141()
{
	if ((func_12() == -1 || func_12() == 999) && !func_142() == 0)
	{
		return true;
	}
	return false;
}

int func_142()
{
	return Global_30769;
}

void func_143(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_32();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_102(iParam0);
	UNK_0x24D1A8A556F3252A(0);
	UNK_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_144();
}

void func_144()
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

bool func_145(vector3 vParam0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_32();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_171())
		{
			return false;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_95())
			{
				return false;
			}
		}
		if (!Global_111638.f_9080)
		{
			return false;
		}
		if (func_7(0))
		{
			return false;
		}
		if (func_91())
		{
			return false;
		}
		if (func_170())
		{
			return false;
		}
		if (Global_111627 != -1)
		{
			return false;
		}
		if (func_25(func_55()))
		{
			if (func_85(100f, 1) != -1)
			{
				return false;
			}
		}
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !bParam6)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return false;
			}
		}
		if (!func_169(iParam3))
		{
			return false;
		}
		if (func_25(func_55()))
		{
			if (func_168(func_55()) == 4 || func_168(func_55()) == 5)
			{
				return false;
			}
		}
		if (func_25(func_55()))
		{
			if (!func_167(iParam3, bParam4, 145))
			{
				return false;
			}
		}
		if (!func_166(Global_111638.f_24990.f_43[iParam3]))
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
		if (func_165())
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
		if (!func_156(4))
		{
			return false;
		}
		if (!func_74(5))
		{
			return false;
		}
		if (func_155(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_155(0, 0))
		{
			return false;
		}
		if (Global_30914)
		{
			return false;
		}
		if (func_169(30) && !func_155(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_25(func_55()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111638.f_2358.f_539.f_2300[iVar4 /*3*/] };
				bVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_154(bVar8))
				{
					if (func_147(iVar4))
					{
						if (!func_146(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar5) < (210f * 210f))
							{
								if (func_55() != iVar4)
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

bool func_146(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_147(int iParam0)
{
	bool bVar0;

	bVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_148(bVar0);
}

int func_148(bool bParam0)
{
	return func_149(bParam0, 1);
}

int func_149(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_154(bParam0))
	{
		return 0;
	}
	func_150(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_150(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_151(func_125(), bParam0, uParam1, uParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_151(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_153(bParam0, bParam1))
	{
		bVar0 = func_110(bParam1);
		iVar1 = func_108(bParam0);
		iVar2 = (func_108(bParam0) - func_108(bParam1));
		iVar3 = (func_110(bParam0) - func_110(bParam1));
		iVar4 = (func_111(bParam0) - func_111(bParam1));
		iVar5 = (func_114(bParam0) - func_114(bParam1));
		iVar6 = (func_113(bParam0) - func_113(bParam1));
		iVar7 = (func_112(bParam0) - func_112(bParam1));
	}
	else
	{
		bVar0 = func_110(bParam0);
		iVar1 = func_108(bParam1);
		iVar2 = (func_108(bParam1) - func_108(bParam0));
		iVar3 = (func_110(bParam1) - func_110(bParam0));
		iVar4 = (func_111(bParam1) - func_111(bParam0));
		iVar5 = (func_114(bParam1) - func_114(bParam0));
		iVar6 = (func_113(bParam1) - func_113(bParam0));
		iVar7 = (func_112(bParam1) - func_112(bParam0));
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
		iVar4 = (iVar4 + func_124(bVar0, iVar1));
		iVar3 = (iVar3 - 1);
		bVar0 = SYSTEM::ROUND(func_152(SYSTEM::TO_FLOAT(bVar0 + 1), 0f, 12f));
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

float func_152(float fParam0, float fParam1, float fParam2)
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

bool func_153(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_154(bParam1) || !func_154(bParam0))
	{
		return true;
	}
	bVar0 = func_108(bParam0);
	bVar1 = func_108(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_110(bParam0);
	bVar1 = func_110(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_111(bParam0);
	bVar1 = func_111(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_114(bParam0);
	bVar1 = func_114(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_113(bParam0);
	bVar1 = func_113(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_112(bParam0);
	bVar1 = func_112(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	return false;
}

bool func_154(bool bParam0)
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
	iVar0 = func_112(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_113(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_114(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_108(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_110(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_111(bParam0);
	if (iVar5 < 1 || iVar5 > func_124(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_155(int iParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], bParam1))
	{
		return true;
	}
	return false;
}

bool func_156(int iParam0)
{
	bool bVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				bVar0 = func_55();
				if (!func_25(bVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_164()) || Global_110685) || Global_30770) || func_163()) || func_52(8, -1)) || func_162()) || func_161()) || func_160()) || func_159()) || Global_111638.f_7683.f_919[bVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_164()) || Global_30770) || func_163()) || func_52(8, -1)) || func_160()) || func_162()) || func_161()) || func_159()) || Global_111638.f_7683.f_919[bVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_164()) || Global_110685) || Global_30770) || func_163()) || func_52(8, -1)) || func_160()) || func_162()) || func_161()) || func_159()) || Global_111638.f_7683.f_919[bVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_164()) || Global_110685) || Global_30770) || func_163()) || func_52(8, -1)) || func_162()) || func_161()) || func_159()) || Global_111638.f_7683.f_919[bVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_164() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_52(8, -1)) || func_159()) || func_158()) || Global_111638.f_7683.f_919[bVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_52(8, -1) || func_162()) || func_161()) || func_158()) || func_157())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_164()) || Global_30770) || func_163()) || func_52(8, -1)) || func_161()) || func_160()) || func_159()) || Global_111638.f_7683.f_919[bVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_164()) || func_161()) || Global_110685) || Global_30770) || func_163()) || Global_42596) || func_52(8, -1)) || func_160()) || func_158()) || func_159()) || Global_111638.f_7683.f_919[bVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_164()) || Global_110685) || Global_30770) || func_163()) || func_52(8, -1)) || func_160()) || func_158()) || func_162()) || func_161()) || func_159())
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

bool func_157()
{
	return Global_98783.f_1;
}

bool func_158()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_159()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_160()
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

bool func_161()
{
	return Global_98796.f_346 > 0;
}

bool func_162()
{
	return Global_98796.f_345 > 0;
}

bool func_163()
{
	return Global_1312877;
}

bool func_164()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_165()
{
	func_50();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

bool func_166(bool bParam0)
{
	return func_153(func_125(), bParam0);
}

bool func_167(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	bVar1 = func_55();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		bVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (bVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		case 19:
			if (bVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 20:
			if (bVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		case 28:
			if (bVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 13:
			if (bVar1 == 0)
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
			if (bParam1 == 2 || bVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 30:
			if (bVar1 != 2)
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

int func_168(bool bParam0)
{
	if (!func_25(bParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[bParam0];
}

bool func_169(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_171())
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

bool func_170()
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

bool func_171()
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

void func_172()
{
	func_100();
}

void func_173(vector3 vParam0)
{
	if (SYSTEM::VDIST(vParam0, vParam0) > 1f)
	{
	}
}

