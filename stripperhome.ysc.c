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
	int iLocal_45 = 0;
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
	bool bLocal_59 = false;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	bool bLocal_69 = false;
	var uLocal_70 = 0;
	bool bLocal_71 = false;
	bool bLocal_72 = false;
	bool bLocal_73 = false;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76[1] = { 0 };
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 16;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
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
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
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
	var uLocal_269 = 1097859072;
	var uLocal_270 = 1500;
	var uLocal_271 = 45;
	var uLocal_272 = 1103626240;
	var uLocal_273 = 5;
	int iLocal_274[1] = { 0 };
	bool bLocal_276 = false;
	bool bLocal_277 = false;
	var uLocal_278 = 1;
	var uLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282[1] = { 0 };
	int iLocal_284[4] = { 0, 0, 0, 0 };
	struct<9> Local_289 = { 0, 0, 0, 0, 0, 0, 0, 21, 6 } ;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	vector3 vLocal_302 = { 0f, 0f, 0f };
	vector3 vLocal_305 = { 0f, 0f, 0f };
	vector3 vLocal_308 = { 0f, 0f, 0f };
	vector3 vLocal_311 = { 0f, 0f, 0f };
	vector3 vLocal_314 = { 0f, 0f, 0f };
	vector3 vLocal_317 = { 0f, 0f, 0f };
	vector3 vLocal_320 = { 0f, 0f, 0f };
	vector3 vLocal_323 = { 0f, 0f, 0f };
	bool bLocal_326 = false;
	bool bLocal_327 = false;
	bool bLocal_328 = false;
	float fLocal_329 = 0f;
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	int iLocal_332 = 0;
	var uLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	bool bLocal_336 = false;
	bool bLocal_337 = false;
	bool bLocal_338 = false;
	int iLocal_339 = 0;
	bool bLocal_340 = false;
	struct<5> ScriptParam_0 = { 1, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
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
	vLocal_63 = { 500f, 500f, 500f };
	fLocal_329 = -1f;
	iLocal_332 = -1;
	bLocal_336 = true;
	UNK_0x5E8C29AE121DF1C7("stripperhome");
	UNK_0x7798376279BB5369(1);
	UNK_0xB008F1989AB372AF(UNK_0xD803B885F5E47A62(), 1);
	if (UNK_0x2EBF608FFE6CA406(75))
	{
		func_303();
	}
	bLocal_337 = ScriptParam_0.f_5;
	if (bLocal_337)
	{
		UNK_0x37AD2AB54480FA6A(32, 0, -1);
		func_298(0, -1, 0);
		UNK_0x0BEC04ECA8485A3A(1);
		UNK_0x256D93AFAE851A7A(0);
	}
	uLocal_76[0] = ScriptParam_0[0];
	Global_110663.f_1 = uLocal_76[0];
	bVar0 = false;
	bVar1 = true;
	iVar2 = UNK_0xD8A54335F18763BA();
	if (func_297() && ScriptParam_0.f_4)
	{
		bVar1 = false;
		if (iVar2 > 14 && iVar2 < 22)
		{
			bVar0 = true;
		}
	}
	while (((!func_268(&ScriptParam_0, bVar0) && iLocal_74 != 6) && iLocal_74 != 5) && (iLocal_74 != -1 || !func_267(uLocal_333, 1024)))
	{
		func_259(0);
		SYSTEM::WAIT(0);
	}
	UNK_0x71199B01895C6202(func_258(0, 0));
	UNK_0x71199B01895C6202(func_258(1, 0));
	if (!bVar1)
	{
		iLocal_74 = 2;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_335 > 0)
		{
			func_256();
			iLocal_335 = (iLocal_335 - SYSTEM::ROUND((UNK_0x6117725E0134737F() * 1000f)));
		}
		switch (iLocal_74)
		{
			case -1:
				func_255();
				break;
			case 0:
				func_215(1);
				break;
			case 1:
				func_108();
				break;
			case 2:
				func_215(0);
				break;
			case 3:
				func_90();
				break;
			case 4:
				func_38(bLocal_336);
				break;
			case 5:
				func_11();
				break;
			case 6:
				if (!func_10(&uLocal_261))
				{
					func_7(&uLocal_261);
				}
				else if (func_1(&uLocal_261, 7.5f))
				{
					func_303();
				}
				break;
		}
	}
}

bool func_1(bool bParam0, float fParam1)
{
	if (func_3(bParam0, fParam1))
	{
		func_2(bParam0);
		return true;
	}
	return false;
}

void func_2(bool bParam0)
{
	bParam0->f_1 = 0f;
	bParam0->f_2 = 0f;
	*bParam0 = 0;
}

bool func_3(bool bParam0, float fParam1)
{
	if (func_10(bParam0))
	{
		if (func_4(bParam0) > fParam1)
		{
			return true;
		}
	}
	return false;
}

float func_4(bool bParam0)
{
	if (func_10(bParam0))
	{
		if (func_6(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_5(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return bParam0->f_1;
}

float func_5(bool bParam0)
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

bool func_6(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, 2);
}

void func_7(bool bParam0)
{
	if (!func_10(bParam0))
	{
		func_8(bParam0);
	}
}

void func_8(bool bParam0)
{
	func_9(bParam0, 0f);
}

void func_9(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_5(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

bool func_10(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, true);
}

void func_11()
{
	if (!func_267(uLocal_333, 8192))
	{
		if (func_37())
		{
			func_26();
		}
		else
		{
			iLocal_74 = 6;
		}
	}
	if (func_267(uLocal_333, 16384))
	{
		if (func_12())
		{
			iLocal_74 = 6;
		}
	}
}

bool func_12()
{
	if (UNK_0x437347B10A200C4B(iLocal_274[0], 0))
	{
		return true;
	}
	if (func_267(uLocal_333, 8192))
	{
		UNK_0x9DD8618CA5BF832D(iLocal_274[0], 60, true);
		if (UNK_0x5A91F08DF773C39D(iLocal_274[0], 96.8033f, -1287.597f, 28.2688f, 5f, 5f, 2f, false, true, 1) || func_25(UNK_0x16F2683693E537C9(), 96.8033f, -1287.597f, 28.2688f, 1) > 100f)
		{
			if (UNK_0xBF75E4DF4C367CD9(96.12f, -1284.91f, 29.43f, 5f, joaat("PROP_MAGENTA_DOOR"), 0))
			{
				UNK_0x6DA3AC47D5DB9EED(joaat("PROP_MAGENTA_DOOR"), 96.12f, -1284.91f, 29.43f, true, 0f, 0);
			}
			if (UNK_0x9F4FE516EAACCFC5(iLocal_284[0]))
			{
				if (UNK_0x9CF8D5C7090408A2(iLocal_284[0]))
				{
					func_13(1, 1, 0);
					UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
					UNK_0x9A8DDC7C522F5BF5(iLocal_284[0], 1);
				}
			}
			UNK_0xEBA53F35D0085654(&(iLocal_274[0]));
			return true;
		}
	}
	return false;
}

void func_13(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), true, false);
	}
	UNK_0x2D23BE319D971F4C(1);
	func_15(0, 1, bParam2, 0, 0, 0);
	if (bParam1)
	{
		UNK_0xBFE31971E49FA500(1);
		UNK_0x8BCB70EB440DED83(1);
	}
	func_14(23, 0);
}

void func_14(bool bParam0, bool bParam1)
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

void func_15(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_24(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_23())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_22(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_24(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_22(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_20(UNK_0xD803B885F5E47A62())) && !func_17(UNK_0xD803B885F5E47A62(), 0)) && !func_16()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_20(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_16()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_17(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312745;
}

bool func_20(bool bParam0)
{
	if (func_17(bParam0, 0))
	{
		return true;
	}
	if (func_21())
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

bool func_21()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_22(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_23()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_24(int iParam0)
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

float func_25(bool bParam0, vector3 vParam1, int iParam4)
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

void func_26()
{
	int iVar0;

	func_29();
	if (UNK_0xBF75E4DF4C367CD9(96.12f, -1284.91f, 29.43f, 5f, joaat("PROP_MAGENTA_DOOR"), 0))
	{
		UNK_0x6DA3AC47D5DB9EED(joaat("PROP_MAGENTA_DOOR"), 96.12f, -1284.91f, 29.43f, false, 0f, 0);
	}
	func_27(&uLocal_333, 16384);
	UNK_0x1E9649458B15960F(iLocal_274[0], false);
	UNK_0x4E885A246A9D983A(iLocal_274[0], 104, true);
	UNK_0xDD353D0E9C789D0E(&iVar0);
	UNK_0x96167B03C5A77156(false, 98.2041f, -1291.252f, 28.2688f, 1f, -1, 0.25f, 1, 1193033728);
	UNK_0x96167B03C5A77156(false, 107.6303f, -1304.742f, 27.7688f, 1f, -1, 0.25f, 0, 1193033728);
	UNK_0xC6EB89C59F2AF6B8(false, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, false, 0, 0, 0);
	UNK_0x75ABDC5F81978924(iVar0);
	UNK_0x78ADC381772E3D54(iLocal_274[0], iVar0);
	UNK_0xF82EA857DA10E0CD(&iVar0);
	func_27(&uLocal_333, 8192);
}

void func_27(var uParam0, int iParam1)
{
	func_28(uParam0, iParam1);
}

void func_28(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_29()
{
	if (!UNK_0x03068588A1FCED1A(iLocal_274[0]) && func_36(1, 0, 1))
	{
		func_30(0, 0, 0);
		iLocal_284[0] = UNK_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.573f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, 1, 2);
		UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	}
}

void func_30(bool bParam0, int iParam1, bool bParam2)
{
	UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), false, bParam0);
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x7800CEC090C01D4D(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 15f);
	}
	UNK_0x2D23BE319D971F4C(iParam1);
	func_31(0);
	func_15(1, 1, bParam2, 0, 0, 0);
	UNK_0xBFE31971E49FA500(0);
	UNK_0x8BCB70EB440DED83(0);
	func_14(23, 1);
}

void func_31(int iParam0)
{
	if (func_35())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_34())
		{
			func_32(1, 1);
		}
		else
		{
			func_32(0, 0);
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
	if (!func_23())
	{
		Global_19486.f_1 = 3;
	}
}

void func_32(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_33(0))
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

bool func_33(int iParam0)
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

bool func_34()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_35()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

bool func_36(bool bParam0, bool bParam1, bool bParam2)
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

bool func_37()
{
	if ((uLocal_76[0] == 8 || uLocal_76[0] == 9) || func_25(iLocal_274[0], 96.12f, -1284.91f, 29.43f, 1) > 10f)
	{
		return false;
	}
	return true;
}

void func_38(bool bParam0)
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;

	func_65();
	if (bParam0)
	{
		vVar0 = { vLocal_308 };
	}
	else
	{
		func_64(&vVar0, &uVar3, 0);
	}
	func_61(vVar0);
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0x405E212DDE472467(iLocal_274[0], 0))
		{
			bVar4 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0xC844350D5D58C99A(bVar4) && !UNK_0x437347B10A200C4B(bVar4, 0))
			{
				if (bLocal_338)
				{
					if (func_59(bVar4, 4f, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0))
					{
						func_58();
						UNK_0x75CDA8644CD3B5F5(iLocal_274[0], 0, 16777216);
						func_39();
					}
				}
				else if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vVar0, 4f, 4f, 2f, true, true, 2))
				{
					bLocal_338 = true;
				}
			}
		}
	}
}

void func_39()
{
	func_57();
	func_50(295, 0, 0);
	func_40(0);
	func_303();
}

void func_40(bool bParam0)
{
	struct<8> Var0[3];
	struct<6> Var25[3];

	if (!func_47())
	{
		return;
	}
	if (!bLocal_69)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Location", 32);
	StringCopy(&(Var0[2 /*8*/]), "Type", 32);
	if (bParam0)
	{
		StringCopy(&(Var25[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var25[0 /*6*/]), "SP", 24);
	}
	StringCopy(&(Var25[1 /*6*/]), "City", 24);
	StringCopy(&(Var25[2 /*6*/]), "????", 24);
	if (func_45(200, &Var25, &Var0, 3, -1, 0, 0))
	{
		UNK_0x6106B2DBBCB1AA39(131, func_44(), 0f);
		UNK_0x6106B2DBBCB1AA39(108, func_43(), 0f);
		UNK_0x6106B2DBBCB1AA39(102, func_42(), 0f);
		UNK_0x6106B2DBBCB1AA39(8, func_41(), 0f);
	}
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	bLocal_69 = false;
}

int func_41()
{
	return iLocal_67;
}

int func_42()
{
	return iLocal_68;
}

int func_43()
{
	return iLocal_66;
}

int func_44()
{
	return 0;
}

bool func_45(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;

	if (!UNK_0x58424C49F8924842())
	{
	}
	if ((!UNK_0x28B41A2A2556BCF3() && (UNK_0x8BB6DE13A9F3105E() || !UNK_0x9AE561F9BC3F06D8())) && UNK_0x393EAEC306A49C71())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (UNK_0x080E9D045AEE5605())
			{
				Var69 = { func_46(UNK_0xD803B885F5E47A62()) };
				if (UNK_0xF2EC2A39FF9E838D(&Var69))
				{
					if (UNK_0xD9DA83C40D038174(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (UNK_0x8CD06866876216F2() && Global_2458936.f_3)
			{
				UNK_0x14388B84A94BC0BD(&Var0, &(Global_1662155.f_10));
			}
			else
			{
				UNK_0x31FF86F0FD3CE715(&Var0);
			}
		}
		return true;
	}
	if (UNK_0x28B41A2A2556BCF3())
	{
	}
	if (!UNK_0x8BB6DE13A9F3105E())
	{
	}
	if (UNK_0x9AE561F9BC3F06D8())
	{
	}
	if (!UNK_0x393EAEC306A49C71())
	{
	}
	return false;
}

struct<13> func_46(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

bool func_47()
{
	if ((UNK_0x58424C49F8924842() && UNK_0x61D9362D70D2DD56()) && func_48())
	{
		return true;
	}
	return false;
}

bool func_48()
{
	if (func_49())
	{
		return false;
	}
	if (UNK_0xE6725CC0C55B6CA1() == 0)
	{
		return false;
	}
	return true;
}

bool func_49()
{
	return Global_2461181;
}

void func_50(int iParam0, int iParam1, int iParam2)
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
		func_56((891 + iParam0), 1, -1, 1);
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
		Global_111638.f_10189[iParam0 /*12*/].f_10 = iParam1;
		Global_111638.f_10189[iParam0 /*12*/].f_11 = iParam2;
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
		func_51();
	}
}

void func_51()
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
		func_55(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_54() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_52();
				}
			}
		}
	}
}

int func_52()
{
	if (func_53(0))
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

bool func_53(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

int func_54()
{
	return Global_30768;
}

int func_55(int iParam0, bool bParam1)
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

int func_56(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_19();
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

void func_57()
{
	iLocal_68++;
	bLocal_69 = true;
}

void func_58()
{
	if (UNK_0xC844350D5D58C99A(iLocal_274[0]) && !UNK_0x437347B10A200C4B(iLocal_274[0], 0))
	{
		UNK_0x33CE5A9E32EA10B2(iLocal_274[0], 1);
		if (UNK_0x16102BEDC7435774(iLocal_274[0]))
		{
			UNK_0x0A94A109271BE75A(iLocal_274[0]);
		}
	}
}

bool func_59(bool bParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_60(bParam0);
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

void func_60(bool bParam0)
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

void func_61(vector3 vParam0)
{
	bool bVar0;

	if (UNK_0xE4EDC4B0E92C078B(iLocal_281))
	{
		UNK_0x142CC44DB769B57E(&iLocal_281);
	}
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		return;
	}
	bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
	if (UNK_0xC844350D5D58C99A(bVar0) && !UNK_0x437347B10A200C4B(bVar0, 0))
	{
		if (UNK_0x405E212DDE472467(iLocal_274[0], 0))
		{
			if (UNK_0xC42A92762C58E1B9(iLocal_274[0], UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
			{
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_280))
				{
					iLocal_280 = func_62(vParam0, 1);
				}
			}
		}
	}
}

int func_62(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_63(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

float func_63(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_64(var uParam0, bool bParam1, bool bParam2)
{
	vLocal_317 = { vLocal_317 };
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!bParam2)
			{
				*uParam0 = { 92.8829f, -1281.123f, 28.1845f };
				*bParam1 = 15f;
			}
			else
			{
				*uParam0 = { vLocal_314 };
				*bParam1 = bLocal_326;
			}
			vLocal_317 = { *uParam0 };
			break;
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615.991f, 187.4827f, 59.1337f };
				*bParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = { vLocal_314 };
				*bParam1 = bLocal_326;
			}
			vLocal_317 = { *uParam0 };
			break;
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538.432f, 3776.85f, 33.5178f };
				*bParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = { vLocal_314 };
				*bParam1 = bLocal_326;
			}
			vLocal_317 = { *uParam0 };
			break;
	}
}

void func_65()
{
	if (UNK_0xEB6A8945D1AC98A1(iLocal_274[0]))
	{
		if (!UNK_0xC844350D5D58C99A(iLocal_274[0]))
		{
		}
		else if (UNK_0x437347B10A200C4B(iLocal_274[0], 0))
		{
		}
		func_66(0);
	}
}

void func_66(int iParam0)
{
	if ((uLocal_76[0] > -1 && uLocal_76[0] < 10) && iParam0 != 2)
	{
		func_88(uLocal_76[0], (func_89(uLocal_76[0]) / 2));
	}
	func_86();
	switch (iParam0)
	{
		case 0:
			func_84("SCLUB_HOME_D", uLocal_76[0]);
			func_88(uLocal_76[0], 0);
			func_72(uLocal_76[0], 1);
			iLocal_74 = 6;
			break;
		case 1:
			UNK_0x790015DC92C918E2();
			func_67("SCLUB_HOME_A", uLocal_76[0], 0);
			iLocal_74 = 5;
			break;
		case 2:
			iLocal_74 = 5;
			break;
		case 4:
			func_84("SCLUB_HOME_D3", uLocal_76[0]);
			iLocal_74 = 6;
			break;
		case 3:
			if (func_25(iLocal_274[0], 92.5861f, -1282.86f, 28.2548f, 1) < 10f)
			{
				iLocal_74 = 5;
			}
			else
			{
				iLocal_74 = 6;
			}
			break;
	}
}

void func_67(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;

	MemCopy(&uVar0, {func_71(iParam1)}, 6);
	if (!func_70(bParam0, &uVar0))
	{
		if (!bParam2)
		{
			func_69(bParam0, &uVar0, -1);
		}
		else
		{
			func_68(bParam0, &uVar0);
		}
	}
}

void func_68(bool bParam0, bool bParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0x6B012227B3921E18(bParam1);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

void func_69(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0x6B012227B3921E18(bParam1);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam2);
}

bool func_70(bool bParam0, bool bParam1)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	UNK_0x6B012227B3921E18(bParam1);
	return UNK_0xE3789B9938DCEAE8(0);
}

struct<4> func_71(int iParam0)
{
	struct<4> Var0;

	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

void func_72(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_27(&(Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
	else
	{
		func_73(&(Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
}

void func_73(var uParam0, int iParam1)
{
	func_74(uParam0, iParam1);
}

void func_74(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_75()
{
	int iVar0;

	iVar0 = func_77();
	switch (iVar0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		default:
			switch (func_76(-1))
			{
				case 0:
					return 3;
				case 1:
					return 4;
				case 2:
					return 5;
				case 3:
					return 6;
				case 4:
					return 7;
				default:
					break;
			}
			break;
	}
	return 3;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_77()
{
	func_78();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_78()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_82(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_81(UNK_0x16F2683693E537C9());
			if (func_80(iVar0) && (!func_79(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_80(Global_111638.f_2358.f_539.f_4321))
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

bool func_79(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_80(bool bParam0)
{
	return bParam0 < 3;
}

int func_81(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_82(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_82(int iParam0)
{
	if (func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_83(bool bParam0)
{
	return Global_1798[bParam0 /*29*/];
}

void func_84(bool bParam0, int iParam1)
{
	var uVar0;

	MemCopy(&uVar0, {func_71(iParam1)}, 6);
	func_85(bParam0, &uVar0, 7500, 1);
}

void func_85(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x6B012227B3921E18(bParam1);
	UNK_0x12F275EDEEF63A2B(iParam2, 1);
}

void func_86()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_281))
	{
		UNK_0x142CC44DB769B57E(&iLocal_281);
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_280))
	{
		UNK_0x142CC44DB769B57E(&iLocal_280);
	}
	func_87();
}

void func_87()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_282[iVar0]))
		{
			UNK_0x142CC44DB769B57E(&(iLocal_282[iVar0]));
		}
		iVar0++;
	}
}

void func_88(int iParam0, int iParam1)
{
	Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/] = iParam1;
}

int func_89(int iParam0)
{
	return Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/];
}

void func_90()
{
	func_65();
	func_86();
	switch (iLocal_80)
	{
		case 0:
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				if (UNK_0x405E212DDE472467(iLocal_274[0], 0))
				{
					if (!func_107("SCLUB_SECLUDED"))
					{
						func_106("SCLUB_SECLUDED");
					}
					if (func_105() && UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) == 0f)
					{
						UNK_0xA37A90C62806D848(1);
						UNK_0x3F423BF5B8125A50(func_100(iLocal_274[0], 0, 0));
						iLocal_80 = 1;
					}
				}
			}
			break;
		case 1:
			if (func_93())
			{
				iLocal_80 = 2;
			}
			break;
		case 2:
			if (UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), 242628503) != 1)
			{
				func_256();
				if (UNK_0xD8A54335F18763BA() > 20 || UNK_0xD8A54335F18763BA() < 4)
				{
					bLocal_336 = false;
				}
				UNK_0xA79E2388E9C0B0DB(iLocal_45);
				func_91(bLocal_336);
				iLocal_74 = 4;
			}
			break;
	}
}

void func_91(bool bParam0)
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_84("SCLUB_HOME_GO", uLocal_76[0]);
			}
			else
			{
				func_92("SCLUB_CLUB_GO", 7500, 1);
			}
			break;
		case 8:
		case 9:
			func_92("SCLUB_HOME_GO3", 7500, 1);
			break;
	}
}

void func_92(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

bool func_93()
{
	if (UNK_0xB4AE0788C1587752(func_100(iLocal_274[0], 0, 0)))
	{
		func_94(iLocal_274[0], 0, 1, -1, 1);
		func_94(UNK_0x16F2683693E537C9(), 0, 0, -1, 1);
		return true;
	}
	return false;
}

void func_94(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if (UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return;
	}
	bVar0 = UNK_0x6937EA2286828455(bParam0, 1);
	if (!UNK_0xDF1306B443CD3D15(bVar0, 0))
	{
		return;
	}
	iLocal_45 = UNK_0x6C3F127AAF415E69();
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) && func_99(0, 1))
	{
		if (iLocal_45 != 4)
		{
			UNK_0xA79E2388E9C0B0DB(4);
		}
	}
	bVar1 = func_98(bVar0);
	bVar2 = func_100(bParam0, 0, 0);
	if (!UNK_0xB4AE0788C1587752(bVar2))
	{
		UNK_0x3F423BF5B8125A50(bVar2);
	}
	else
	{
		UNK_0xDD353D0E9C789D0E(&iVar3);
		UNK_0xC6EB89C59F2AF6B8(false, bVar2, func_95(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, false, 0, 0, 0);
		UNK_0xC6EB89C59F2AF6B8(false, bVar2, func_95(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, false, 0, 0, 0);
		UNK_0xC6EB89C59F2AF6B8(false, bVar2, func_95(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, false, 0, 0, 0);
		UNK_0xC6EB89C59F2AF6B8(false, bVar2, func_95(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, false, 0, 0, 0);
		UNK_0xC6EB89C59F2AF6B8(false, bVar2, func_95(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, false, 0, 0, 0);
		UNK_0x75ABDC5F81978924(iVar3);
		UNK_0x78ADC381772E3D54(bParam0, iVar3);
		if (bParam4)
		{
			UNK_0xF82EA857DA10E0CD(&iVar3);
		}
	}
}

char* func_95(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(18);
					}
					else
					{
						sVar0 = func_97(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(8);
				}
				else
				{
					sVar0 = func_97(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(18);
				}
				else
				{
					sVar0 = func_96(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(8);
			}
			else
			{
				sVar0 = func_96(13);
			}
			break;
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(19);
					}
					else
					{
						sVar0 = func_97(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(9);
				}
				else
				{
					sVar0 = func_97(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(19);
				}
				else
				{
					sVar0 = func_96(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(9);
			}
			else
			{
				sVar0 = func_96(14);
			}
			break;
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(20);
					}
					else
					{
						sVar0 = func_97(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(10);
				}
				else
				{
					sVar0 = func_97(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(20);
				}
				else
				{
					sVar0 = func_96(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(10);
			}
			else
			{
				sVar0 = func_96(15);
			}
			break;
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(21);
					}
					else
					{
						sVar0 = func_97(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(11);
				}
				else
				{
					sVar0 = func_97(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(21);
				}
				else
				{
					sVar0 = func_96(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(11);
			}
			else
			{
				sVar0 = func_96(16);
			}
			break;
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(22);
					}
					else
					{
						sVar0 = func_97(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(12);
				}
				else
				{
					sVar0 = func_97(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(22);
				}
				else
				{
					sVar0 = func_96(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(12);
			}
			else
			{
				sVar0 = func_96(17);
			}
			break;
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_97(3);
				}
				else
				{
					sVar0 = func_97(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(3);
			}
			else
			{
				sVar0 = func_96(2);
			}
			break;
		case 6:
			break;
	}
	return sVar0;
}

char* func_96(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		case 15:
			sVar0 = "sex_loop_male";
			break;
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_97(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

bool func_98(bool bParam0)
{
	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		switch (UNK_0x1F099C9E2AE4874D(bParam0))
		{
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_ENTITYXF"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
			case joaat("LAYOUT_LOW_LE7B"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_INFERNUS2"):
			case joaat("LAYOUT_LOW_SC1"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_DOMINATOR3"):
			case joaat("LAYOUT_LOW_TAIPAN"):
			case joaat("LAYOUT_LOW_ITALIGTO"):
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
			case 1240573865:
			case -627376728:
			case 986556497:
			case 1751095603:
				return true;
		}
	}
	return false;
}

bool func_99(bool bParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (bParam0)
	{
		bVar0 = UNK_0xA4FD7964FEE91ED8(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = UNK_0xA4FD7964FEE91ED8(1) == 4;
		}
	}
	return bVar0;
}

char* func_100(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		bVar0 = UNK_0x6937EA2286828455(bParam0, 1);
		if (UNK_0xDF1306B443CD3D15(bVar0, 0))
		{
			if (func_98(bVar0))
			{
				if ((!func_99(0, 1) || bParam2) && !bParam1)
				{
					return func_104();
				}
				else
				{
					return func_103();
				}
			}
			else if (UNK_0x134B62B726CEC8E6(bVar0) == 1456336509)
			{
				return "anim@mini@prostitutes@sex@veh_vstr@";
			}
		}
	}
	if ((!func_99(0, 1) || bParam2) && !bParam1)
	{
		return func_102();
	}
	return func_101();
}

char* func_101()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_102()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_103()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_104()
{
	return "mini@prostitutes@sexlow_veh";
}

bool func_105()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;
	vector3 vVar7;
	var uVar10;
	vector3 vVar11;
	float fVar14;
	int iVar15;

	bVar6 = 25f;
	func_64(&vVar7, &uVar10, 0);
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			iVar2 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		}
		vVar3 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		if (UNK_0xA89A37CE7C5E4A5E(vVar3, &vVar11, 1077936128 /* Float: 3f */, 0))
		{
			fVar14 = SYSTEM::VDIST(vVar3, vVar11);
			if (fVar14 <= 10f)
			{
				return false;
			}
		}
		if (SYSTEM::VDIST(vVar3, vLocal_308) < 20f || SYSTEM::VDIST(vVar3, vVar7) < 20f)
		{
			return false;
		}
		if (UNK_0x9E9FD30CF64A88A8(vVar3 - Vector(20f, 20f, 20f), vVar3 + Vector(20f, 20f, 20f)))
		{
			return false;
		}
		UNK_0xE51E576EA6B739AC(vVar3, bVar6, 1, 1, &bVar0, 0, 0, -1);
		if (!bVar0 == 0)
		{
			if (!UNK_0x437347B10A200C4B(bVar0, 0))
			{
				if (UNK_0xF649DD3BF44195C7(bVar0, UNK_0x16F2683693E537C9(), 17))
				{
					return false;
				}
			}
		}
		else
		{
			bVar1 = UNK_0x6E7D01E16ABEFABB(vVar3, bVar6, 0, -1);
			if (!bVar1 == 0)
			{
				if (!bVar1 == iVar2)
				{
					if (UNK_0xDF1306B443CD3D15(bVar1, 0))
					{
						bVar0 = UNK_0xA30B8362589C124A(bVar1, -1, 0);
						if (!bVar0 == 0)
						{
							return false;
						}
					}
				}
			}
		}
		iVar15 = UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9());
		if (!iVar15 == 0)
		{
			return false;
		}
	}
	return true;
}

void func_106(bool bParam0)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

bool func_107(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_108()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iLocal_75 < 12 && iLocal_75 >= 2)
	{
		if (func_213(3000))
		{
			UNK_0x53491B90E4FD0E56(1000);
			iLocal_75 = 12;
		}
	}
	if (!bLocal_71 && iLocal_75 >= 5)
	{
		bVar0 = UNK_0x4EF27AB24893425F();
		if (UNK_0xDF1306B443CD3D15(bVar0, 0) && !UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("BLIMP2"))
			{
				bLocal_71 = false;
			}
			else if (UNK_0x56E1CD81AE700E98(UNK_0x4EF27AB24893425F()) && uLocal_76[0] == 5)
			{
				bLocal_71 = func_210(&uLocal_70, -865f, 516.3f, 90f, 1, 15f);
			}
			else if (func_209(UNK_0x4EF27AB24893425F()))
			{
				bLocal_71 = func_210(&uLocal_70, vLocal_323, 1, bLocal_327);
			}
			else
			{
				bLocal_71 = func_210(&uLocal_70, vLocal_308, 1, bLocal_327);
			}
		}
	}
	if (iLocal_75 > 0 && iLocal_75 < 13)
	{
		UNK_0x3FC8DBCC154CA56B();
	}
	switch (iLocal_75)
	{
		case 0:
			UNK_0xA37A90C62806D848(1);
			UNK_0x790015DC92C918E2();
			func_86();
			UNK_0xAE317D00A5A55DF6("TIME_LAPSE", 0, -1);
			func_30(56, 1, 0);
			if (!func_267(uLocal_333, 131072))
			{
				func_27(&uLocal_333, 131072);
			}
			if (!func_267(uLocal_333, 256))
			{
				func_208();
				func_27(&uLocal_333, 256);
			}
			if (!func_267(uLocal_333, 32768))
			{
				UNK_0x3F423BF5B8125A50(func_207());
				func_27(&uLocal_333, 32768);
			}
			if (!func_267(uLocal_333, 256))
			{
				UNK_0x3F423BF5B8125A50(func_206());
				func_27(&uLocal_333, 256);
			}
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				bLocal_340 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
				func_205(UNK_0x16F2683693E537C9(), bLocal_340);
				iLocal_75 = 1;
			}
			else
			{
				func_58();
				func_203(UNK_0x16F2683693E537C9(), vLocal_302);
				func_203(iLocal_274[0], vLocal_305);
				iLocal_75 = 2;
			}
			func_201();
			break;
		case 1:
			if (!UNK_0x437347B10A200C4B(bLocal_340, 0))
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bLocal_340, true), vLocal_308) < 2f)
				{
					func_58();
					func_203(UNK_0x16F2683693E537C9(), vLocal_302);
					func_203(iLocal_274[0], vLocal_305);
					UNK_0x486B4ADE317F0689();
					iLocal_75 = 2;
				}
				else if (UNK_0x1C0640BA9A7327B3() >= 10000)
				{
					iLocal_75 = 13;
				}
			}
			break;
		case 2:
			if (!UNK_0x9CF8D5C7090408A2(iLocal_284[0]))
			{
				UNK_0xE3BB8E05FCEB3FBE(iLocal_284[0], true);
				UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				if (!UNK_0x437347B10A200C4B(bLocal_340, 0))
				{
					if (UNK_0x134B62B726CEC8E6(bLocal_340) == joaat("BLIMP2"))
					{
						UNK_0x4A4806F9D471E491(bLocal_340, false, 0);
					}
				}
				func_8(&uLocal_255);
				iLocal_75 = 3;
			}
			break;
		case 3:
			if (func_200(&uLocal_255) > 1f)
			{
				UNK_0xF1E4C781086FABC1(iLocal_284[1], iLocal_284[0], 6000, 1, 1);
				func_199(&Local_289, 1, 0, 2000, 1, 1, 0, 1);
				iVar1 = UNK_0xD8A54335F18763BA();
				iLocal_330 = iVar1 + 8;
				if (iLocal_330 > 23)
				{
					iLocal_330 = (iLocal_330 - 24);
				}
				Local_289.f_7 = iVar1;
				Local_289.f_8 = iLocal_330;
				func_2(&uLocal_255);
				iLocal_75 = 4;
			}
			break;
		case 4:
			if (!UNK_0xFA06B985B30FB0FC(iLocal_284[1]) && UNK_0x9CF8D5C7090408A2(iLocal_284[1]))
			{
				if (!func_267(uLocal_331, 512))
				{
					if (UNK_0xC844350D5D58C99A(bLocal_340) && !UNK_0x437347B10A200C4B(bLocal_340, 0))
					{
						UNK_0x05CA0E7946B27A19(bLocal_340, 1);
					}
					func_196(UNK_0x16F2683693E537C9(), func_198());
					UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), func_195());
					func_172();
					func_27(&uLocal_331, 512);
				}
				else if (!func_267(uLocal_331, 2048))
				{
					if (UNK_0x437347B10A200C4B(iLocal_274[0], 0))
					{
					}
					if (!func_171() && !UNK_0x65636D4556D82155(iLocal_274[0]))
					{
						func_172();
						if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
						{
							UNK_0x0FB22E2FED7BCC7E(UNK_0x16F2683693E537C9());
							UNK_0xC8B576D6F470FFC6(UNK_0x16F2683693E537C9(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
						}
						func_27(&uLocal_331, 2048);
						func_8(&uLocal_255);
						bLocal_277 = func_170();
						iLocal_75 = 5;
					}
				}
			}
			break;
		case 5:
			if (func_200(&uLocal_255) > 1f)
			{
				if (func_145(iLocal_330, 0, bLocal_277, "", &Local_289, (func_200(&uLocal_255) * 0.2f), 0))
				{
					if (!func_171())
					{
						if (UNK_0xC844350D5D58C99A(bLocal_340))
						{
							if (UNK_0x134B62B726CEC8E6(bLocal_340) != joaat("BLIMP2"))
							{
								UNK_0x536F1BE96C726C4B(vLocal_305, 20f, 1, 0, 0, false);
							}
						}
						else
						{
							UNK_0x536F1BE96C726C4B(vLocal_305, 20f, 1, 0, 0, false);
						}
						if (UNK_0xC844350D5D58C99A(iLocal_274[0]))
						{
							UNK_0x4A4806F9D471E491(iLocal_274[0], false, 0);
						}
						UNK_0x97AC90C1F2A44CEE(UNK_0x16F2683693E537C9(), 0);
						func_8(&uLocal_255);
						iLocal_75 = 6;
					}
				}
			}
			break;
		case 6:
			UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
			if (func_200(&uLocal_255) > 1.5f)
			{
				if (bLocal_71)
				{
					func_143(&uLocal_70);
				}
				func_8(&uLocal_255);
				iLocal_75 = 7;
			}
			break;
		case 7:
			if (!UNK_0x9CF8D5C7090408A2(iLocal_284[2]))
			{
				UNK_0xF8041E6992430151();
				UNK_0x9B84ADFFC9CAC31A(1);
				UNK_0x365391E40B6BA75B(1);
				UNK_0xF1E4C781086FABC1(iLocal_284[2], iLocal_284[1], 6000, 1, 1);
				func_8(&uLocal_255);
				iLocal_75 = 8;
			}
			break;
		case 8:
			if (!func_267(uLocal_333, 262144))
			{
				if (func_200(&uLocal_255) >= 1.25f)
				{
					func_142();
				}
			}
			if (func_200(&uLocal_255) > 6f)
			{
				UNK_0xE3BB8E05FCEB3FBE(iLocal_284[3], true);
				if (!UNK_0x437347B10A200C4B(bLocal_340, 0))
				{
					if (UNK_0x134B62B726CEC8E6(bLocal_340) == joaat("BLIMP2"))
					{
						UNK_0x4A4806F9D471E491(bLocal_340, true, 0);
					}
					UNK_0x73270B3C9CC833FD(bLocal_340, true, 1);
					UNK_0x5DAB50E08C3C504A(bLocal_340, 1000f);
					UNK_0xDC544F7DF5E5164D(bLocal_340, 1000f);
					UNK_0x51B954DAB1BCAF73(bLocal_340);
				}
				func_8(&uLocal_255);
				iLocal_75 = 10;
			}
			break;
		case 10:
			if (func_200(&uLocal_255) > 2f)
			{
				UNK_0x04B065D07D2FB5B9(0, 0, 3, 0);
				iLocal_75 = 13;
			}
			break;
		case 12:
			if (UNK_0x757EF87A33649210() && !UNK_0xD0BB2359EC70FC37())
			{
				if (!func_267(uLocal_333, 262144))
				{
					UNK_0x28B8A2632901EC2F(UNK_0xD803B885F5E47A62(), vLocal_314, bLocal_326, false, true, 1);
					func_142();
				}
				if (!UNK_0x437347B10A200C4B(bLocal_340, 0))
				{
					if (UNK_0x134B62B726CEC8E6(bLocal_340) == joaat("BLIMP2"))
					{
						UNK_0x4A4806F9D471E491(bLocal_340, true, 0);
					}
				}
				UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
				if (!UNK_0x437347B10A200C4B(bLocal_340, 0))
				{
					UNK_0x73270B3C9CC833FD(bLocal_340, true, 1);
					UNK_0x5DAB50E08C3C504A(bLocal_340, 1000f);
					UNK_0xDC544F7DF5E5164D(bLocal_340, 1000f);
					UNK_0x51B954DAB1BCAF73(bLocal_340);
				}
				func_8(&uLocal_255);
				iLocal_75 = 13;
			}
			break;
		case 13:
			if (!UNK_0xD0BB2359EC70FC37() && func_200(&uLocal_255) >= 1f)
			{
				func_13(1, 1, 0);
				UNK_0xD458AC1C1D29C3B4(UNK_0x16F2683693E537C9(), UNK_0x65BC0B7172CA52DD(UNK_0x16F2683693E537C9()), false);
				UNK_0xFAE853510BD265FB(UNK_0xD803B885F5E47A62(), 30, 1, 0);
				if (UNK_0x61C907EA8258B04D(UNK_0x16F2683693E537C9(), func_82(0)))
				{
					func_141();
				}
				UNK_0x842F1AEB2FCC00B7(vLocal_308 - Vector(3f, 3f, 3f), vLocal_308 + Vector(3f, 3f, 3f), 15f, 1);
				if (!UNK_0x437347B10A200C4B(bLocal_340, 0))
				{
					UNK_0x73270B3C9CC833FD(bLocal_340, true, 1);
					if (UNK_0x134B62B726CEC8E6(bLocal_340) != joaat("BLIMP2"))
					{
						UNK_0xA47B46945FF6DE74(bLocal_340, vLocal_308, 1, 0, 0, 1);
						UNK_0xD8F6A53F4799FAFE(bLocal_340, bLocal_327);
						if (UNK_0x56E1CD81AE700E98(bLocal_340) && uLocal_76[0] == 5)
						{
							UNK_0xA47B46945FF6DE74(bLocal_340, -865f, 516.3f, 90f, 1, 0, 0, 1);
							UNK_0xD8F6A53F4799FAFE(bLocal_340, 15f);
						}
						else if (func_209(bLocal_340))
						{
							UNK_0xA47B46945FF6DE74(bLocal_340, vLocal_323, 1, 0, 0, 1);
							UNK_0xD8F6A53F4799FAFE(bLocal_340, bLocal_328);
						}
						UNK_0xB9FD7450C0DAB575(bLocal_340, 1084227584 /* Float: 5f */);
					}
				}
				if (!UNK_0x757EF87A33649210())
				{
					func_199(&Local_289, 0, 0, 2000, 1, 0, 0, 1);
				}
				else
				{
					UNK_0x8B89F2ABF0EA71C1(8, 0, 0);
					func_139(SYSTEM::TO_FLOAT(8));
					UNK_0x82E51BCA72537B6C(2000);
					UNK_0x2FB9A57162E54BAB(0f);
					UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
					func_199(&Local_289, 0, 0, 2000, 1, 1, 0, 1);
				}
				if (UNK_0xC844350D5D58C99A(iLocal_274[0]))
				{
					UNK_0xEBA53F35D0085654(&(iLocal_274[0]));
				}
				if (!func_138(uLocal_76[0], -1))
				{
					if (uLocal_76[0] == 5)
					{
						func_67("SCLUB_PHON_HELP_ALT", uLocal_76[0], 0);
					}
					else
					{
						func_67("SCLUB_PHON_HELP", uLocal_76[0], 0);
					}
					func_119(uLocal_76[0], 1, -1);
					SYSTEM::WAIT(4000);
				}
				func_117(uLocal_76[0]);
				iVar2 = func_116(uLocal_76[0]);
				if (iVar2 <= 2)
				{
					iVar3 = func_115(uLocal_76[0]);
					iVar4 = func_114(iVar2);
					func_109(-384575792, iVar3, iVar4, 3, func_113(), func_112(uLocal_76[0]), 60000, 10000, -1, 0, -1, 0, 1);
				}
				func_39();
			}
			break;
	}
}

int func_109(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<14> Var0;

	if (func_53(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (bParam5 < 3)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, bParam5))
		{
			return 0;
		}
	}
	if (bParam4 < 1 || bParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_111638.f_7683.f_764 < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_111(iParam3);
		Var0.f_4 = (UNK_0x1C0640BA9A7327B3() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = bParam4;
		Var0.f_6 = bParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		UNK_0x0674E58A79778E99(&(Var0.f_1), false);
		Global_111638.f_7683.f_651[Global_111638.f_7683.f_764 /*14*/] = { Var0 };
		Global_111638.f_7683.f_764++;
		func_110(0);
		func_110(1);
		func_110(2);
		return 1;
	}
	return 0;
}

void func_110(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_80(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7683[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_111638.f_7683[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_111638.f_7683[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_111638.f_7683.f_764)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7683.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_111638.f_7683.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_111638.f_7683.f_919[bParam0] = iVar1;
}

int func_111(int iParam0)
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

bool func_112(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 104;
		case 1:
			return 105;
		case 2:
			return 106;
		case 3:
			return 107;
		case 4:
			return 108;
		case 5:
			return 109;
		case 6:
			return 110;
		case 7:
			return 111;
		case 8:
			return 112;
		case 9:
			return 93;
	}
	return 145;
}

bool func_113()
{
	func_78();
	switch (Global_111638.f_2358.f_539.f_4321)
	{
		case 0:
			return true;
		case 1:
			return 2;
		case 2:
			return 4;
	}
	return false;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 8;
		case 2:
			return 9;
	}
	return -1;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 4:
			return 2;
		case 5:
			return 3;
		case 8:
			return 4;
		case 9:
			return 5;
	}
	return -1;
}

int func_116(int iParam0)
{
	return Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_117(int iParam0)
{
	if (func_116(iParam0) < 0)
	{
		func_118(iParam0, 0);
	}
	Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2++;
}

void func_118(int iParam0, int iParam1)
{
	Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
}

void func_119(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	if (iParam2 < 0)
	{
		iParam2 = func_75();
	}
	if (func_137(iParam2) == 4)
	{
	}
	bVar0 = Global_111638.f_243[iParam2 /*53*/].f_2[bParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (UNK_0x8CD06866876216F2())
		{
			if (!func_136(func_112(bParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_136(func_112(bParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_111638.f_243[iParam2 /*53*/].f_2[bParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_135(bParam0, 0);
			func_129(func_112(bParam0), func_137(iParam2), 1);
			iVar1 = UNK_0x09AC81E49EA267F7(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					UNK_0x5D96D8530B3D0904(&(Global_2097152[func_128() /*10930*/].f_6174.f_1272), bParam0);
					func_125(-60084924, 15, 0);
					break;
			}
			func_124(iVar1);
			func_123(bParam0, iVar1);
			Global_110632.f_15[bParam0] = UNK_0x1C0640BA9A7327B3();
		}
	}
	else if (bVar0)
	{
		func_120(func_112(bParam0), func_137(iParam2));
	}
}

void func_120(bool bParam0, int iParam1)
{
	int iVar0;

	if (Global_117[bParam0 /*10*/].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_122(bParam0, iVar0, 0);
			func_121(bParam0, iVar0, 0);
		}
	}
}

void func_121(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[bParam0 /*29*/].f_24[iParam1] = iParam2;
	if (bParam0 < 162)
	{
		Global_111638.f_28045[bParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_122(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[bParam0 /*29*/].f_12[iParam1] = iParam2;
	if (bParam0 < 162)
	{
		Global_111638.f_28045[bParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_123(bool bParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_110632.f_4[bParam0] = (UNK_0x1C0640BA9A7327B3() + iParam1);
	}
	else
	{
		Global_110632.f_4[bParam0] = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(1200000, 2100000));
	}
}

void func_124(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_110632.f_3 = (UNK_0x1C0640BA9A7327B3() + iParam0);
	}
	else
	{
		Global_110632.f_3 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(21600000, 25200000));
	}
}

void func_125(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_127(iParam1, bParam2))
	{
		iVar0 = func_126();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_126()
{
	int iVar0;
	int iVar1;

	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_127(int iParam0, bool bParam1)
{
	if (Global_1312865)
	{
		return false;
	}
	if (iParam0 == 22)
	{
		return true;
	}
	if ((((((((bParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

int func_128()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_129(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	Global_8042 = bParam0;
	if (Global_117[bParam0 /*10*/].f_8 != 150)
	{
		func_134();
		if (iParam1 == 4)
		{
			func_122(bParam0, 0, 1);
			func_122(bParam0, 1, 1);
			func_122(bParam0, 2, 1);
			func_121(bParam0, 0, 1);
			func_121(bParam0, 1, 1);
			func_121(bParam0, 2, 1);
		}
		else
		{
			if (func_133(bParam0, iParam1) == 1 && func_132(bParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_122(bParam0, iVar0, 1);
			func_121(bParam0, iVar0, 1);
		}
		if (bParam2)
		{
			if (!Global_76622)
			{
				if (iParam1 != 4)
				{
					if (Global_19486 != iParam1)
					{
						Global_8015[iParam1 /*4*/] = { func_131(bParam0) };
						Global_8032[iParam1] = 1;
						Global_8037[iParam1] = bParam0;
					}
					else if (bParam0 == Global_19486)
					{
					}
					else
					{
						Global_7966[1 /*6*/] = { func_131(bParam0) };
						Global_7966[1 /*6*/].f_5 = iParam1;
						func_130();
					}
				}
				else
				{
					Global_7966[1 /*6*/] = { func_131(bParam0) };
					Global_7966[1 /*6*/].f_5 = iParam1;
					func_130();
				}
			}
			else
			{
				Global_7966[1 /*6*/] = { func_131(bParam0) };
				Global_7966[1 /*6*/].f_5 = iParam1;
				func_130();
			}
		}
	}
}

void func_130()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;

	StringCopy(&cVar0, UNK_0x19C9F30A7697B43C(&(Global_1798[Global_8042 /*29*/].f_7)), 64);
	if (Global_8061 == 0)
	{
		UNK_0x1E64CE678ED5F61E("");
		StringCopy(&cVar16, UNK_0x19C9F30A7697B43C(&(Global_7966[1 /*6*/])), 64);
		sVar32 = UNK_0x19C9F30A7697B43C("CELL_253");
		UNK_0x1AEA174B291A9906(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		UNK_0x1E64CE678ED5F61E("CELL_255");
		UNK_0x6B012227B3921E18(&(Global_7966[1 /*6*/]));
		UNK_0x1AEA174B291A9906(&cVar0, &cVar0, 0, 3, "", 0);
	}
	UNK_0x0674E58A79778E99(&Global_7356, false);
}

struct<4> func_131(bool bParam0)
{
	return Global_1798[bParam0 /*29*/].f_3;
}

int func_132(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[bParam0 /*29*/].f_24[iParam1];
}

int func_133(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[bParam0 /*29*/].f_12[iParam1];
}

void func_134()
{
	if (func_79(14))
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
		Global_19486 = func_77();
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

void func_135(bool bParam0, int iParam1)
{
	Global_111638.f_243[func_75() /*53*/].f_2[bParam0 /*5*/].f_1 = iParam1;
}

bool func_136(bool bParam0, int iParam1)
{
	if (func_133(bParam0, iParam1) == 1)
	{
		return true;
	}
	return false;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 2:
			return 2;
		case 1:
			return 1;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
	}
	return 4;
}

bool func_138(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_75();
	}
	return Global_111638.f_243[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_139(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_10(&(Global_111638.f_18098.f_175[iVar0 /*19*/].f_5)))
		{
			func_140(&(Global_111638.f_18098.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_10(&(Global_111638.f_18098.f_362[iVar1 /*3*/])))
		{
			func_140(&(Global_111638.f_18098.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	UNK_0x9911B88AFCF2F6D2();
}

void func_140(bool bParam0, float fParam1)
{
	if (func_10(bParam0))
	{
		func_9(bParam0, (func_4(bParam0) + fParam1));
	}
}

void func_141()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_95206[iVar0] = Global_95206[iVar0 + 1];
		}
		else
		{
			Global_95206[iVar0] = UNK_0x1C0640BA9A7327B3();
		}
		iVar0++;
	}
}

void func_142()
{
	int iVar0;
	int iVar1;

	if (!UNK_0xB4AE0788C1587752(bLocal_276))
	{
	}
	else
	{
		iVar0 = UNK_0x09AC81E49EA267F7(false, 50000);
		UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
		UNK_0xDD353D0E9C789D0E(&iVar1);
		UNK_0x96167B03C5A77156(false, vLocal_314, 1f, -1, 0.25f, 0, bLocal_326);
		if (iVar0 < 15000)
		{
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_276, "fidget_rub_hands", 1.5f, -1f, -1, 8320, false, 0, 0, 0);
		}
		else if (iVar0 >= 15000 && iVar0 < 35000)
		{
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_276, "fidget_rub_chin", 1.5f, -1f, -1, 8320, false, 0, 0, 0);
		}
		else
		{
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_276, "fidget_arm_swing", 1.5f, -1f, -1, 8320, false, 0, 0, 0);
		}
		UNK_0x75ABDC5F81978924(iVar1);
		UNK_0x78ADC381772E3D54(UNK_0x16F2683693E537C9(), iVar1);
		UNK_0xF82EA857DA10E0CD(&iVar1);
		func_27(&uLocal_333, 262144);
	}
}

void func_143(var uParam0)
{
	bool bVar0;

	bVar0 = *uParam0;
	if (UNK_0xC844350D5D58C99A(bVar0))
	{
		if (!func_144(bVar0))
		{
			UNK_0x20641932E5104B25(bVar0, true, 0);
			UNK_0x4A4806F9D471E491(bVar0, true, 0);
			UNK_0x1E9649458B15960F(bVar0, false);
		}
	}
}

bool func_144(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0x437347B10A200C4B(bParam0, 0))
		{
			return true;
		}
		else if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (!UNK_0x4E861BC5B1EDA7BD(bParam0))
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

bool func_145(int iParam0, int iParam1, bool bParam2, bool bParam3, var uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;

	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_169();
			bVar4 = func_169();
			func_168(&bVar4, iParam0);
			func_167(&bVar4, iParam1);
			func_166(&bVar4, 0);
			if (func_164(*uParam4, bVar4))
			{
				func_159(&bVar4, 0, 0, 0, 1, 0, 0);
			}
			func_156(*uParam4, bVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam4->f_11 = ((iVar0 + iVar1 * 60) + (iVar2 + iParam6) * 3600);
			func_139((SYSTEM::TO_FLOAT(uParam4->f_11) / 3600f));
			UNK_0x25CDE70818786F1F(0.6f);
			UNK_0x365391E40B6BA75B(0);
			UNK_0x9B84ADFFC9CAC31A(0);
			func_155();
			uParam4->f_10 = UNK_0xD68EA767274B7444();
			UNK_0x4D7F4CC43D4D0DE3(uParam4->f_10, "TIME_LAPSE_MASTER", false, 1);
			UNK_0x8BC9595FD2792B5D("TOD_SHIFT_SCENE");
			func_154();
			uParam4->f_3++;
			break;
		case 1:
		case 2:
			if (fParam5 >= 0.5f)
			{
				if (uParam4->f_3 == 1)
				{
					if (UNK_0x12AB0310C2281427(bParam2) != 0)
					{
						UNK_0x8225571BCEE038F8(bParam2, 1f);
					}
					if (UNK_0x12AB0310C2281427(bParam3) != 0)
					{
						UNK_0xF1662D1948765623();
						UNK_0xCD7E6F59323AEBCB(bParam3, 0);
					}
					uParam4->f_3 = 2;
				}
			}
			if (fParam5 >= 0.99f || fParam5 == -1f)
			{
				bVar4 = *uParam4;
				func_159(&bVar4, uParam4->f_11, 0, 0, 0, 0, 0);
				UNK_0x71592C07333285FE(func_153(bVar4), func_152(bVar4), func_151(bVar4));
				UNK_0x55D0A2DB35045A35(uParam4->f_10);
				UNK_0x42740B44BA8D7B43("TIME_LAPSE");
				return true;
			}
			fVar10 = fParam5;
			fVar8 = 0.1f;
			fVar9 = 0.9f;
			fVar11 = func_150(((fVar10 - fVar8) / (fVar9 - fVar8)), 0f, 1f);
			iVar3 = SYSTEM::ROUND((IntToFloat(uParam4->f_11) * fVar11));
			bVar4 = *uParam4;
			func_159(&bVar4, iVar3, 0, 0, 0, 0, 0);
			UNK_0x71592C07333285FE(func_153(bVar4), func_152(bVar4), func_151(bVar4));
			if (func_149(bVar4) != UNK_0x972A296334C9D57B())
			{
				UNK_0xD3A9F3BA3F4248BA(func_149(bVar4), func_148(bVar4), func_146(bVar4));
			}
			func_256();
			UNK_0xF99F2927BEBB5EE7(6);
			break;
	}
	return false;
}

int func_146(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_147(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_147(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_148(bool bParam0)
{
	return (bParam0 && 15);
}

int func_149(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

float func_150(float fParam0, float fParam1, float fParam2)
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

int func_151(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_152(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_153(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

void func_154()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		UNK_0xD59AE843FA2C6B40(Global_111638.f_14136[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_155()
{
	bool bVar0;

	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		return 0;
	}
	if (!UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
	{
		return 0;
	}
	bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
	if (!UNK_0x437347B10A200C4B(bVar0, 0))
	{
		return 0;
	}
	UNK_0x3CBF2C83A68C1611(bVar0, "OFF");
	return 1;
}

void func_156(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_164(bParam0, bParam1))
	{
		bVar0 = func_148(bParam1);
		iVar1 = func_146(bParam0);
		iVar2 = (func_146(bParam0) - func_146(bParam1));
		iVar3 = (func_148(bParam0) - func_148(bParam1));
		iVar4 = (func_149(bParam0) - func_149(bParam1));
		iVar5 = (func_153(bParam0) - func_153(bParam1));
		iVar6 = (func_152(bParam0) - func_152(bParam1));
		iVar7 = (func_151(bParam0) - func_151(bParam1));
	}
	else
	{
		bVar0 = func_148(bParam0);
		iVar1 = func_146(bParam1);
		iVar2 = (func_146(bParam1) - func_146(bParam0));
		iVar3 = (func_148(bParam1) - func_148(bParam0));
		iVar4 = (func_149(bParam1) - func_149(bParam0));
		iVar5 = (func_153(bParam1) - func_153(bParam0));
		iVar6 = (func_152(bParam1) - func_152(bParam0));
		iVar7 = (func_151(bParam1) - func_151(bParam0));
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
		iVar4 = (iVar4 + func_158(bVar0, iVar1));
		iVar3 = (iVar3 - 1);
		bVar0 = SYSTEM::ROUND(func_157(SYSTEM::TO_FLOAT(bVar0 + 1), 0f, 12f));
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
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_157(float fParam0, float fParam1, float fParam2)
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

int func_158(bool bParam0, int iParam1)
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

void func_159(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_146(*bParam0);
	bVar1 = func_148(*bParam0);
	iVar2 = func_149(*bParam0);
	iVar3 = func_153(*bParam0);
	iVar4 = func_152(*bParam0);
	iVar5 = func_151(*bParam0);
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
	iVar6 = func_158(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_158(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_160(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_160(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_166(bParam0, iParam1);
	func_167(bParam0, iParam2);
	func_168(bParam0, iParam3);
	func_163(bParam0, bParam5);
	func_162(bParam0, iParam4);
	func_161(bParam0, iParam6);
}

void func_161(bool bParam0, int iParam1)
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

void func_162(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_148(*bParam0);
	iVar1 = func_146(*bParam0);
	if (iParam1 < 1 || iParam1 > func_158(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_163(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

bool func_164(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_165(bParam1) || !func_165(bParam0))
	{
		return true;
	}
	bVar0 = func_146(bParam0);
	bVar1 = func_146(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_148(bParam0);
	bVar1 = func_148(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_149(bParam0);
	bVar1 = func_149(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_153(bParam0);
	bVar1 = func_153(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_152(bParam0);
	bVar1 = func_152(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_151(bParam0);
	bVar1 = func_151(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	return false;
}

bool func_165(bool bParam0)
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
	iVar0 = func_151(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_152(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_153(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_146(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_148(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_149(bParam0);
	if (iVar5 < 1 || iVar5 > func_158(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_166(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_167(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_168(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

bool func_169()
{
	var uVar0;

	func_166(&uVar0, UNK_0x4460E481B9E33ADA());
	func_167(&uVar0, UNK_0x8D199E381D262EEF());
	func_168(&uVar0, UNK_0xD8A54335F18763BA());
	func_162(&uVar0, UNK_0x972A296334C9D57B());
	func_163(&uVar0, UNK_0x118229AD063C3C1D());
	func_161(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

char* func_170()
{
	char* sVar0;

	switch (uLocal_76[0])
	{
		case 0:
			sVar0 = "CLEARING";
			break;
		case 1:
			sVar0 = "OVERCAST";
			break;
		case 4:
			sVar0 = "CLOUDS";
			break;
		case 5:
			sVar0 = "CLEAR";
			break;
		case 8:
			sVar0 = "EXTRASUNNY";
			break;
		case 9:
			sVar0 = "RAIN";
			break;
		default:
			sVar0 = "EXTRASUNNY";
			break;
	}
	return sVar0;
}

bool func_171()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_172()
{
	if (!UNK_0x437347B10A200C4B(iLocal_274[0], 0))
	{
		if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
		{
			func_193(&uLocal_81, 1, 0, func_194(uLocal_76[0]), 0, 1);
			func_175("SC_SEX", 0, 0, 0);
		}
		else
		{
			func_173(iLocal_274[0], "SEX_ORAL", 10);
		}
	}
}

void func_173(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_174(iParam2), 1);
}

int func_174(int iParam0)
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

bool func_175(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<6> Var0;
	char[] cVar6[8];

	if (func_192())
	{
		StringCopy(&Var0, sParam0, 24);
		if (bParam1)
		{
			func_191(&Var0, bParam2);
		}
		else
		{
			Var0 = { func_190(Var0) };
		}
		if (bParam3)
		{
			cVar6 = "SCAUD";
		}
		else
		{
			cVar6 = "SHAUD";
		}
		if (func_176(&uLocal_81, cVar6, &Var0, 7, 0, 0, 0))
		{
			return true;
		}
	}
	return false;
}

int func_176(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_189(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_177(sParam2, iParam3, 0);
}

int func_177(char* sParam0, int iParam1, bool bParam2)
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
					func_188();
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
		if (func_187(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_186();
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
				func_134();
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
				if (func_185())
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
			if (func_23())
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
			func_184();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_183();
		func_178();
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
		func_188();
	}
	return 0;
}

void func_178()
{
	if (!func_179())
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

bool func_179()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_182())
	{
		return false;
	}
	if (func_180(UNK_0xD803B885F5E47A62()))
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

bool func_180(int iParam0)
{
	return func_181(iParam0, 20);
}

bool func_181(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_182()
{
	return -1;
}

void func_183()
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

void func_184()
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

bool func_185()
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

void func_186()
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

bool func_187(bool bParam0, int iParam1)
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

void func_188()
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

void func_189(var uParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = bParam1;
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

struct<6> func_190(struct<6> Param0)
{
	int iVar0;

	StringConCat(&Param0, "_", 24);
	iVar0 = uLocal_76[0];
	StringIntConCat(&Param0, iVar0, 24);
	return Param0;
}

void func_191(char* sParam0, bool bParam1)
{
	StringConCat(sParam0, "_", 24);
	if (func_77() == 2)
	{
		StringConCat(sParam0, "T", 24);
	}
	else if (func_77() == 0)
	{
		StringConCat(sParam0, "M", 24);
	}
	else if (func_77() == 1)
	{
		StringConCat(sParam0, "F", 24);
	}
	if (bParam1)
	{
		*sParam0 = { func_190(*sParam0) };
	}
}

bool func_192()
{
	if ((UNK_0xD17F06053799A7CA() || UNK_0x25037C66EB32B076()) || Global_20805 != 0)
	{
		return false;
	}
	return true;
}

void func_193(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

char* func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
		case 1:
			return "Nikki";
		case 2:
			return "Chastity";
		case 3:
			return "Cheetah";
		case 4:
			return "Sapphire";
		case 5:
			return "Infernus";
		case 6:
			return "Fufu";
		case 7:
			return "Peach";
		case 8:
			return "TaxiLiz";
		case 9:
			return "REHH2Hiker";
	}
	return "Invalid name";
}

float func_195()
{
	switch (uLocal_76[0])
	{
		case 1:
			return 325.6f;
		case 0:
			return 52.89f;
		case 4:
			return 14.5f;
		case 5:
			return 43.85f;
		case 8:
			return 193.5f;
		case 9:
			return 233.2f;
	}
	return 0f;
}

Vector3 func_196(bool bParam0, vector3 vParam1)
{
	var uVar0;

	vParam1.f_2 = (vParam1.z + 0.15f);
	if (UNK_0xE82754C349C7B581(vParam1, &uVar0, 0, 0))
	{
		vParam1.f_2 = uVar0;
	}
	if (func_197(bParam0))
	{
		UNK_0xA47B46945FF6DE74(bParam0, vParam1, 1, 0, 0, 1);
	}
	return vParam1;
}

bool func_197(bool bParam0)
{
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return false;
	}
	return !UNK_0x437347B10A200C4B(bParam0, 0);
}

Vector3 func_198()
{
	switch (uLocal_76[0])
	{
		case 1:
			return 130.7462f, -1896.513f, 22.3246f;
		case 0:
			return -162.4315f, -1635.107f, 32.6529f;
		case 4:
			return -197.6542f, 92.3329f, 68.5846f;
		case 5:
			return -848.9675f, 510.048f, 89.8218f;
		case 8:
			return -28.5266f, -1565.793f, 28.918f;
		case 9:
			return 3315.045f, 5174.08f, 17.6765f;
	}
	return 0f, 0f, 0f;
}

void func_199(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (iParam4 == 1)
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()), 64);
	}
	if (!UNK_0x22A8E52414415B76())
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), !bParam1, false);
	}
	if (bParam7)
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			UNK_0xE731059548189243(UNK_0x16F2683693E537C9(), 1);
		}
	}
	if (!bParam1 && bParam6)
	{
		UNK_0x04B065D07D2FB5B9(0, 0, 3, 0);
	}
	else
	{
		UNK_0xB3A1B75CB59FEB56(bParam1, bParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		UNK_0xA37A90C62806D848(1);
	}
	else
	{
		if (UNK_0x9F4FE516EAACCFC5(uParam0->f_4))
		{
			if (UNK_0xFBB4F23D534EB790(uParam0->f_4))
			{
				UNK_0xE3BB8E05FCEB3FBE(uParam0->f_4, false);
			}
			UNK_0x9A8DDC7C522F5BF5(uParam0->f_4, 1);
		}
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			UNK_0x4A4806F9D471E491(UNK_0x16F2683693E537C9(), true, 0);
		}
		bVar0 = UNK_0x728870EB733D12A1();
		if (UNK_0xC844350D5D58C99A(bVar0))
		{
			UNK_0x4A4806F9D471E491(bVar0, true, 0);
		}
		UNK_0x42740B44BA8D7B43("TIME_LAPSE");
		if (UNK_0x562F77A7F33D2E46("TOD_SHIFT_SCENE"))
		{
			UNK_0x55D0A2DB35045A35(uParam0->f_10);
			UNK_0x42740B44BA8D7B43("TIME_LAPSE");
			UNK_0x8910D3D58E0132B8("TOD_SHIFT_SCENE");
		}
	}
	func_15(bParam1, 1, 0, 0, 0, 0);
	func_154();
	if (!bParam1 && bParam5)
	{
		if (uParam0->f_5)
		{
			UNK_0x71592C07333285FE(uParam0->f_7, 0, 0);
		}
		else
		{
			UNK_0x71592C07333285FE(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (UNK_0x757EF87A33649210())
		{
			UNK_0x82E51BCA72537B6C(250);
		}
	}
	if (!bParam1)
	{
		if (Global_111638.f_32744.f_4801 != -15)
		{
			Global_111638.f_32744.f_4801 = func_169();
		}
	}
}

float func_200(bool bParam0)
{
	if (func_10(bParam0))
	{
		if (func_6(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_5(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return 0f;
}

void func_201()
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar14[4];
	var uVar27[4];

	func_202(&vVar1, &vVar14, &uVar27);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!UNK_0x9F4FE516EAACCFC5(iLocal_284[iVar0]))
		{
			iLocal_284[iVar0] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar1[iVar0 /*3*/], vVar14[iVar0 /*3*/], uVar27[iVar0], 0, 2);
			UNK_0x91F5B0244AAE6222(iLocal_284[iVar0], "HAND_SHAKE", 0.3f);
		}
		iVar0++;
	}
	Local_289.f_4 = UNK_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", false);
	UNK_0xB2ABBA6B919F5CE7(Local_289.f_4, vVar1[0 /*3*/], vVar14[0 /*3*/], 6000, 3, 2);
	UNK_0xB2ABBA6B919F5CE7(Local_289.f_4, vVar1[1 /*3*/], vVar14[1 /*3*/], 6000, 3, 2);
	UNK_0x5818C8D5303DCCF8(Local_289.f_4, uVar27[0]);
}

void func_202(var uParam0, var uParam1, var uParam2)
{
	switch (uLocal_76[0])
	{
		case 1:
			*(uParam0[0 /*3*/]) = { 140.9085f, -1885.527f, 25.6959f };
			*(uParam1[0 /*3*/]) = { -9.0308f, 0f, 126.3829f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 141.712f, -1884.935f, 30.7241f };
			*(uParam1[1 /*3*/]) = { 4.7025f, 0f, 129.5531f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 139.1899f, -1885.865f, 24.96737f };
			*(uParam1[2 /*3*/]) = { -3.535496f, 0.081819f, 135.1308f };
			(*uParam2)[2] = 50f;
			*(uParam0[3 /*3*/]) = { 133.9669f, -1893.292f, 23.9573f };
			*(uParam1[3 /*3*/]) = { -1.8669f, -0.0329f, -5.5828f };
			(*uParam2)[3] = 50f;
			break;
		case 0:
			*(uParam0[0 /*3*/]) = { -186.5408f, -1629.328f, 35.8275f };
			*(uParam1[0 /*3*/]) = { -1.5588f, 0f, -118.8025f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -186.1923f, -1629.505f, 48.7132f };
			*(uParam1[1 /*3*/]) = { -1.2745f, 0f, -116.9616f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -184.9595f, -1632.193f, 36.32303f };
			*(uParam1[2 /*3*/]) = { -3.262451f, 0.073971f, -100.6756f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -164.7078f, -1632.25f, 34.0944f };
			*(uParam1[3 /*3*/]) = { -3.7303f, 0.0222f, 108.1824f };
			(*uParam2)[3] = 40f;
			break;
		case 4:
			*(uParam0[0 /*3*/]) = { -208.6886f, 112.8581f, 73.0855f };
			*(uParam1[0 /*3*/]) = { -0.1055f, 0f, -156.0082f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -208.9068f, 113.3747f, 85.2889f };
			*(uParam1[1 /*3*/]) = { 3.8438f, 0f, -157.0767f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -206.2357f, 106.941f, 72.07555f };
			*(uParam1[2 /*3*/]) = { -11.58381f, 0.084975f, -158.9702f };
			(*uParam2)[2] = 45f;
			*(uParam0[3 /*3*/]) = { -197.6886f, 94.7063f, 69.814f };
			*(uParam1[3 /*3*/]) = { 0.5155f, -0.0266f, 48.8652f };
			(*uParam2)[3] = 45f;
			break;
		case 5:
			*(uParam0[0 /*3*/]) = { -871.6285f, 520.8466f, 93.1945f };
			*(uParam1[0 /*3*/]) = { -0.1377f, -1.3933f, -105.9309f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -871.5255f, 521.1066f, 104.6356f };
			*(uParam1[1 /*3*/]) = { 3.1118f, -1.3933f, -105.9309f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -866.6436f, 514.6121f, 92.90275f };
			*(uParam1[2 /*3*/]) = { -5.957637f, -1.324997f, -101.9062f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -849.5522f, 514.2322f, 91.0095f };
			*(uParam1[3 /*3*/]) = { -1.626f, -1.3198f, 92.3739f };
			(*uParam2)[3] = 40f;
			break;
		case 8:
			*(uParam0[0 /*3*/]) = { -27.698f, -1584.646f, 31.1034f };
			*(uParam1[0 /*3*/]) = { 0.0044f, 0f, -1.9117f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -27.698f, -1584.646f, 40.4849f };
			*(uParam1[1 /*3*/]) = { 7.981f, 0f, -1.9117f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -28.63904f, -1579.74f, 30.82423f };
			*(uParam1[2 /*3*/]) = { -7.527712f, 0.030218f, -14.33051f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -28.6719f, -1568.09f, 29.7492f };
			*(uParam1[3 /*3*/]) = { -1.5414f, 0f, -168.6005f };
			(*uParam2)[3] = 40f;
			break;
		case 9:
			*(uParam0[0 /*3*/]) = { 3323.631f, 5148.861f, 20.9592f };
			*(uParam1[0 /*3*/]) = { 1.1547f, 1.0064f, 21.8733f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 3323.844f, 5148.672f, 28.2303f };
			*(uParam1[1 /*3*/]) = { 11.4168f, 1.0064f, 22.8025f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 3328.904f, 5157.818f, 20.5799f };
			*(uParam1[2 /*3*/]) = { -3.634001f, 1.039937f, 30.44809f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { 3315.368f, 5171.771f, 18.9066f };
			*(uParam1[3 /*3*/]) = { -2.8773f, 1.0064f, -103.0585f };
			(*uParam2)[3] = 40f;
			break;
	}
}

void func_203(bool bParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		UNK_0x97AC90C1F2A44CEE(bParam0, 1);
		if (UNK_0xD1960163A3042274(bParam0, 242628503) != 1)
		{
			UNK_0xF82EA857DA10E0CD(&iLocal_339);
			UNK_0xDD353D0E9C789D0E(&iLocal_339);
			if (UNK_0x405E212DDE472467(bParam0, 0))
			{
				UNK_0x75CDA8644CD3B5F5(false, 0, 16777216);
			}
			if (bParam0 == UNK_0x16F2683693E537C9())
			{
				fVar0 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bParam0, true), vLocal_302);
				fVar1 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bParam0, true), vLocal_305);
				if (fVar1 < fVar0)
				{
					UNK_0xF96A174EE26D7588(false, iLocal_274[0], 0);
				}
				else if (!UNK_0xEA6BC48857E0AC4C(func_204()))
				{
					UNK_0xF44B0E19CAC31C33(false, func_204(), 0, 552, -1);
				}
				else
				{
					UNK_0x96167B03C5A77156(false, vLocal_302, 1f, -1, 0.25f, 64, 1193033728);
				}
			}
			if (bParam0 != UNK_0x16F2683693E537C9())
			{
				if (!UNK_0xEA6BC48857E0AC4C(func_204()))
				{
					UNK_0xF44B0E19CAC31C33(false, func_204(), 0, 546, -1);
				}
				else
				{
					UNK_0x96167B03C5A77156(false, vParam1, 1f, -1, 0.25f, 1, 1193033728);
				}
				if (func_25(bParam0, vParam1, 1) > 5f)
				{
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
					UNK_0xC6EB89C59F2AF6B8(false, "gestures@f@standing@casual", "gesture_come_here_soft", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
					UNK_0x93D47DFD0AE94949(false, UNK_0x09AC81E49EA267F7(3000, 6000));
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
					UNK_0xC6EB89C59F2AF6B8(false, "gestures@f@standing@casual", "gesture_come_here_soft", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
					UNK_0x93D47DFD0AE94949(false, UNK_0x09AC81E49EA267F7(3000, 6000));
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
					UNK_0xC6EB89C59F2AF6B8(false, "gestures@f@standing@casual", "gesture_come_here_soft", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
					UNK_0xC6EB89C59F2AF6B8(false, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, -1, 0, false, 0, 0, 0);
				}
			}
			UNK_0x75ABDC5F81978924(iLocal_339);
			UNK_0x78ADC381772E3D54(bParam0, iLocal_339);
		}
	}
}

char* func_204()
{
	char* sVar0;

	if (uLocal_76[0] == 1)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_205(bool bParam0, bool bParam1)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0) && !UNK_0x437347B10A200C4B(bParam1, 0))
	{
		UNK_0x27F3789FF35EEDF1(bParam0, bParam1, vLocal_308, bLocal_327, 3, 1092616192 /* Float: 10f */, 0);
	}
}

char* func_206()
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_207()
{
	if (func_77() == 0)
	{
		return "facials@p_m_zero@variations@happy";
	}
	else if (func_77() == 1)
	{
		return "facials@p_m_one@variations@happy";
	}
	else if (func_77() == 2)
	{
		return "facials@p_m_two@variations@happy";
	}
	return "facials@p_m_zero@variations@happy";
}

void func_208()
{
	bLocal_276 = "move_p_m_one_idles@generic";
	UNK_0x3F423BF5B8125A50(bLocal_276);
}

bool func_209(bool bParam0)
{
	if (UNK_0x4906F8A34E9F4814(bParam0, joaat("BLIMP")))
	{
		return true;
	}
	else if (UNK_0x4906F8A34E9F4814(bParam0, joaat("CARGOBOB")))
	{
		return true;
	}
	else if (UNK_0x4906F8A34E9F4814(bParam0, joaat("CARGOBOB2")))
	{
		return true;
	}
	else if (UNK_0x4906F8A34E9F4814(bParam0, joaat("CARGOBOB3")))
	{
		return true;
	}
	else if (UNK_0x4906F8A34E9F4814(bParam0, joaat("BUZZARD")))
	{
		return true;
	}
	else if (UNK_0x4906F8A34E9F4814(bParam0, joaat("BUZZARD2")))
	{
		return true;
	}
	else if (UNK_0x4906F8A34E9F4814(bParam0, joaat("MAVERICK")))
	{
		return true;
	}
	else if (UNK_0x4906F8A34E9F4814(bParam0, joaat("POLMAV")))
	{
		return true;
	}
	else if (UNK_0x4906F8A34E9F4814(bParam0, joaat("ANNIHILATOR")))
	{
		return true;
	}
	else if (UNK_0x4906F8A34E9F4814(bParam0, joaat("FROGGER")))
	{
		return true;
	}
	else if (UNK_0x4906F8A34E9F4814(bParam0, joaat("FROGGER2")))
	{
		return true;
	}
	return false;
}

int func_210(var uParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	if (func_212(uParam0))
	{
		UNK_0xBA486C69AC1FDE77(*uParam0);
		if (!func_211(vParam1))
		{
			UNK_0xA47B46945FF6DE74(*uParam0, vParam1, 1, 0, 0, 1);
			if (bParam4)
			{
				UNK_0xD8F6A53F4799FAFE(*uParam0, bParam5);
			}
			UNK_0xB9FD7450C0DAB575(*uParam0, 1084227584 /* Float: 5f */);
		}
		return 1;
	}
	return 0;
}

bool func_211(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_212(var uParam0)
{
	bool bVar0;

	bVar0 = UNK_0x728870EB733D12A1();
	if (UNK_0xC844350D5D58C99A(bVar0))
	{
		if (!func_144(bVar0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && UNK_0x12DE711B1C681E9E(bVar0, UNK_0x16F2683693E537C9(), vLocal_63, 0, 1, 0))
			{
				UNK_0xBA486C69AC1FDE77(bVar0);
				UNK_0x20641932E5104B25(bVar0, false, 0);
				UNK_0x4A4806F9D471E491(bVar0, false, 0);
				UNK_0x1E9649458B15960F(bVar0, true);
				UNK_0x73270B3C9CC833FD(bVar0, true, 1);
				*uParam0 = bVar0;
				return true;
			}
		}
	}
	return false;
}

bool func_213(int iParam0)
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
			if (func_214())
			{
				Global_27 = UNK_0x1C0640BA9A7327B3();
				return true;
			}
		}
	}
	return false;
}

bool func_214()
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

void func_215(bool bParam0)
{
	struct<4> Var0;
	float fVar4;

	func_65();
	if (UNK_0x437347B10A200C4B(iLocal_274[0], 0))
	{
		return;
	}
	UNK_0xE342F209E49C5314(vLocal_308 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), vLocal_308 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), false, 1);
	fVar4 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(iLocal_274[0], true));
	if (iLocal_78 != 9)
	{
		if (((fVar4 >= (200f / 2f) && func_192()) && !func_267(uLocal_333, 2)) || func_254(iLocal_274[0], 0))
		{
			if (UNK_0xE4EDC4B0E92C078B(iLocal_281))
			{
				UNK_0x142CC44DB769B57E(&iLocal_281);
			}
			if (UNK_0xE4EDC4B0E92C078B(iLocal_280))
			{
				UNK_0x142CC44DB769B57E(&iLocal_280);
			}
			func_251(0);
			func_84("SCLUB_HOME_R", uLocal_76[0]);
			iLocal_78 = 9;
		}
	}
	if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
	{
		if (iLocal_78 != 8)
		{
			if (UNK_0xE4EDC4B0E92C078B(iLocal_281))
			{
				UNK_0x142CC44DB769B57E(&iLocal_281);
			}
			if (UNK_0xE4EDC4B0E92C078B(iLocal_280))
			{
				UNK_0x142CC44DB769B57E(&iLocal_280);
			}
			iLocal_78 = 8;
		}
	}
	if (func_240(iLocal_274[0], &uLocal_267, &uLocal_264))
	{
		func_66(4);
	}
	if (iLocal_78 <= 1)
	{
		func_259(1);
	}
	switch (iLocal_78)
	{
		case 0:
			iLocal_79 = 0;
			if (func_192())
			{
				if (!func_267(uLocal_333, 1))
				{
					UNK_0x1E9649458B15960F(iLocal_274[0], true);
					func_84("SCLUB_HOME_MEET", uLocal_76[0]);
					func_251(0);
					func_27(&uLocal_333, 1);
				}
				iLocal_78 = 1;
			}
			break;
		case 1:
			iLocal_79 = 1;
			Var0 = { func_71(uLocal_76[0]) };
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				bLocal_340 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
				iLocal_334 = UNK_0x7F6DC62EA9922664(bLocal_340);
			}
			if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), UNK_0x68F4C0EC296D3901(iLocal_274[0], true), 3f, 3f, 3f, false, true, 0) || (UNK_0xDF1306B443CD3D15(bLocal_340, 0) && func_239(bLocal_340, iLocal_274[0], 1) <= 10f))
			{
				UNK_0x1E9649458B15960F(iLocal_274[0], false);
				if (UNK_0xC844350D5D58C99A(bLocal_340) && (UNK_0xD6DF381716822EFE(bLocal_340) < 1 || (!bParam0 && !UNK_0x8E39AC3C76C8AA58(UNK_0x134B62B726CEC8E6(bLocal_340)))))
				{
					if (!func_70("SCLUB_SMALL_CAR", &Var0))
					{
						func_67("SCLUB_SMALL_CAR", uLocal_76[0], 0);
						func_173(iLocal_274[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					UNK_0xA37A90C62806D848(1);
					UNK_0xA3BF0AA5A2608191(iLocal_274[0]);
					func_237();
					if (!func_267(uLocal_333, 2))
					{
						func_27(&uLocal_333, 2);
					}
					func_236();
					func_86();
					func_229(39, 1);
					func_229(40, 1);
					func_229(41, 1);
					func_229(42, 1);
					func_229(43, 1);
					func_229(44, 1);
					iLocal_78 = 2;
				}
			}
			else if (func_70("SCLUB_SMALL_CAR", &Var0))
			{
				UNK_0xA37A90C62806D848(1);
			}
			break;
		case 2:
			iLocal_79 = 2;
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				if (UNK_0x405E212DDE472467(iLocal_274[0], 0))
				{
					iLocal_78 = 3;
				}
			}
			else
			{
				func_173(iLocal_274[0], "NEED_A_VEHICLE", 10);
				iLocal_78 = 3;
			}
			break;
		case 3:
			iLocal_79 = 3;
			func_226();
			if (!func_171())
			{
				if (func_192())
				{
					UNK_0xF858EFDE1871B5F2(vLocal_308 - Vector(3f, 3f, 3f), vLocal_308 + Vector(3f, 3f, 3f), false, 1);
					UNK_0xE342F209E49C5314(vLocal_308 - Vector(3f, 3f, 3f), vLocal_308 + Vector(3f, 3f, 3f), false, 1);
					UNK_0x28F5E4DA506AC0CA(vLocal_308, 10f, 0, 0, 0, 0, false, 0);
					UNK_0x745CE398A4B0A3C6(vLocal_308, 10f, 0);
					iLocal_301 = UNK_0x7D6CA5F52B3748BF(vLocal_308 - Vector(35f, 35f, 35f), vLocal_308 + Vector(35f, 35f, 35f), 0, 1, 1, 1);
					func_8(&uLocal_246);
					if (bParam0)
					{
						func_91(1);
						func_225();
					}
					else
					{
						iLocal_74 = 3;
					}
				}
			}
			break;
		case 4:
			iLocal_79 = 4;
			func_222(fVar4, vLocal_311);
			func_216();
			if ((func_4(&uLocal_258) > 45f || SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_320) > (100f * 100f)) && func_25(UNK_0x16F2683693E537C9(), vLocal_311, 1) > 100f)
			{
				if (uLocal_76[0] == 8)
				{
					func_175("SC_WALK", 0, 0, 0);
				}
				else
				{
					func_173(iLocal_274[0], "GENERIC_FUCK_YOU", 10);
				}
				func_66(3);
			}
			else if (func_254(iLocal_274[0], 1))
			{
				if (UNK_0xE4EDC4B0E92C078B(iLocal_281))
				{
					UNK_0x142CC44DB769B57E(&iLocal_281);
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_280))
				{
					UNK_0x142CC44DB769B57E(&iLocal_280);
				}
				func_251(0);
				func_84("SCLUB_HOME_R", uLocal_76[0]);
				iLocal_78 = 9;
			}
			else if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_308, 3f, 3f, 2f, true, true, 2) || UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_305, 5f, 5f, 2f, true, true, 1))
			{
				if (func_36(1, 0, 1))
				{
					iLocal_74 = 1;
				}
			}
			else if (!UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
			{
				func_225();
			}
			break;
		case 5:
			iLocal_79 = 5;
			func_222(fVar4, vLocal_308);
			func_216();
			func_237();
			if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_308, 1f, 1f, 2f, true, true, 2))
			{
				iLocal_78 = 6;
			}
			else
			{
				if (UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
				{
					func_225();
				}
				else
				{
					func_61(vLocal_308);
				}
				if (func_107("SCLUB_HOME_WALK"))
				{
					UNK_0xA37A90C62806D848(1);
				}
			}
			break;
		case 6:
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				if (UNK_0xC844350D5D58C99A(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)))
				{
					if (func_59(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 3f, 2, 0.5f, 0, 1, 0))
					{
						func_58();
						func_203(iLocal_274[0], vLocal_305);
						if (uLocal_76[0] == 9 || uLocal_76[0] == 8)
						{
							func_175("SC_GO_DOOR", 0, 0, 0);
						}
						else
						{
							func_175("SC_FOLLOWD", 0, 0, 1);
						}
						iLocal_78 = 7;
					}
				}
			}
			else if (UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
			{
				UNK_0x327AAEE25F323797(iLocal_274[0]);
				func_225();
				UNK_0xA37A90C62806D848(1);
			}
			break;
		case 7:
			iLocal_79 = 7;
			if ((!func_171() && !UNK_0xD17F06053799A7CA()) && !func_267(uLocal_333, 2048))
			{
				Var0 = { func_71(uLocal_76[0]) };
				func_85("SCLUB_FOLLOW_H", &Var0, 7500, 1);
				func_86();
				func_251(0);
				func_27(&uLocal_333, 2048);
			}
			if ((UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_311, 5f, 5f, 2f, false, true, 1) || UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_305, 5f, 5f, 2f, false, true, 1)) && UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
			{
				if (func_36(1, 0, 1))
				{
					iLocal_74 = 1;
				}
			}
			break;
		case 8:
			if ((!func_267(uLocal_331, 4096) && !func_171()) && !UNK_0x65636D4556D82155(iLocal_274[0]))
			{
				if (iLocal_79 > 1 || SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(iLocal_274[0], true)) < (3f * 3f))
				{
					func_173(iLocal_274[0], "GENERIC_FRIGHTENED_MED", 10);
					func_27(&uLocal_331, 4096);
				}
			}
			if (!UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
			{
				iLocal_78 = iLocal_79;
			}
			break;
		case 9:
			if (fVar4 > 200f)
			{
				func_66(1);
			}
			else if (fVar4 <= (200f / 2f) && !func_254(iLocal_274[0], 1))
			{
				UNK_0x790015DC92C918E2();
				iLocal_78 = iLocal_79;
				if (UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
				{
					func_225();
				}
			}
			break;
	}
}

void func_216()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (!func_267(uLocal_333, 16))
	{
		if (func_217())
		{
			func_27(&uLocal_333, 16);
		}
		else
		{
			return;
		}
	}
	bVar0 = func_100(iLocal_274[0], 0, 0);
	if (!func_267(uLocal_333, 8))
	{
		if (!func_267(uLocal_333, 4))
		{
			if (!func_267(uLocal_331, 256))
			{
				if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
				{
					func_175("SC_BJ", 0, 0, 0);
				}
				func_27(&uLocal_331, 256);
			}
			else
			{
				UNK_0x3F423BF5B8125A50(bVar0);
				func_27(&uLocal_333, 4);
			}
		}
		else if (UNK_0xB4AE0788C1587752(bVar0))
		{
			func_94(iLocal_274[0], 1, 1, -1, 1);
			UNK_0xFADC0A217229F6B5(iLocal_274[0], true);
			func_7(&uLocal_255);
			func_27(&uLocal_333, 8);
		}
	}
	else if (func_267(uLocal_333, 4))
	{
		bVar1 = false;
		bVar2 = UNK_0xB4ECF989E2C1DAC8(iLocal_274[0], bVar0, func_95(4, 1, 1, func_98(bLocal_340)), 3);
		bVar3 = UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9());
		bVar4 = UNK_0xD1960163A3042274(iLocal_274[0], 242628503) == 7;
		bVar5 = UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0);
		bVar6 = false;
		if (bVar5)
		{
			if (UNK_0xC844350D5D58C99A(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)) && !UNK_0x437347B10A200C4B(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
			{
				bVar6 = (UNK_0xE608C809F9416F00(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)) && UNK_0x9C66D99E63E8E24C(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)) > 5f);
			}
		}
		if ((((!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) || func_4(&uLocal_255) > 35f) || SYSTEM::VDIST(vLocal_308, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) < 75f) || bVar3) || bVar6)
		{
			if (!bVar4 && !bVar2)
			{
				UNK_0xC6EB89C59F2AF6B8(iLocal_274[0], bVar0, func_95(4, 1, 1, func_98(bLocal_340)), 8f, -8f, -1, 0, false, 0, 0, 0);
			}
			if (bVar3)
			{
				iLocal_335 = 2000;
			}
			bVar1 = true;
		}
		else if (bVar4)
		{
			bVar1 = true;
		}
		if (bVar2)
		{
			func_256();
		}
		if ((bVar1 && bVar4) && !bVar2)
		{
			if (!bVar3 && bVar5)
			{
				if (bVar6)
				{
					UNK_0xD458AC1C1D29C3B4(UNK_0x16F2683693E537C9(), (UNK_0x7F6DC62EA9922664(UNK_0x16F2683693E537C9()) - SYSTEM::CEIL((IntToFloat(UNK_0x65BC0B7172CA52DD(UNK_0x16F2683693E537C9())) * 0.1f))), false);
					func_173(UNK_0x16F2683693E537C9(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_173(UNK_0x16F2683693E537C9(), "SEX_CLIMAX", 10);
				}
				func_27(&uLocal_331, 128);
			}
			UNK_0x8D17794CE3273D70(bVar0);
			func_73(&uLocal_333, 4);
		}
		if (!func_267(uLocal_331, 64))
		{
			if (func_4(&uLocal_255) > 10f)
			{
				func_173(UNK_0x16F2683693E537C9(), "SEX_GENERIC", 10);
				func_173(iLocal_274[0], "SEX_ORAL", 10);
				func_27(&uLocal_331, 64);
			}
		}
		UNK_0xD1B833B834838C01();
		func_256();
	}
}

bool func_217()
{
	vector3 vVar0;
	var uVar3;

	if (!func_192())
	{
		return false;
	}
	func_64(&vVar0, &uVar3, 0);
	if (((SYSTEM::VDIST(vLocal_308, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) > (75f * 2f) && SYSTEM::VDIST(vVar0, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) > (75f / 2f)) && func_116(uLocal_76[0]) > 1) && func_218())
	{
		return true;
	}
	return false;
}

bool func_218()
{
	bool bVar0;
	bool bVar1;

	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		return false;
	}
	bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
	if (UNK_0xDF1306B443CD3D15(bVar0, 0))
	{
		bVar1 = UNK_0x134B62B726CEC8E6(bVar0);
		if (func_220(bVar1, 0) && func_219(bVar0))
		{
			return true;
		}
	}
	return false;
}

int func_219(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (UNK_0x40B3F576B41FA183(bParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (UNK_0x0ECB5CA5140957AD(bParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, UNK_0xAE6250B518DF3C3B(bParam0, iVar1, UNK_0x0ECB5CA5140957AD(bParam0, iVar1)), 16);
						iVar2 = UNK_0x12AB0310C2281427(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == UNK_0x12AB0310C2281427("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (UNK_0x134B62B726CEC8E6(bParam0))
		{
			case -1804415708:
				if ((!UNK_0xDD62D560CFE11A27(bParam0, 2) && !UNK_0xDD62D560CFE11A27(bParam0, 3)) && !UNK_0xDD62D560CFE11A27(bParam0, 4))
				{
					return 0;
				}
				break;
			case 1107404867:
				if (((!UNK_0xDD62D560CFE11A27(bParam0, 2) && !UNK_0xDD62D560CFE11A27(bParam0, 3)) && !UNK_0xDD62D560CFE11A27(bParam0, 4)) && !UNK_0xDD62D560CFE11A27(bParam0, true))
				{
					return 0;
				}
				break;
			case -1728685474:
				if (!UNK_0xDD62D560CFE11A27(bParam0, true))
				{
					return 0;
				}
				break;
			case -682108547:
				if (UNK_0x0ECB5CA5140957AD(bParam0, 10) == -1)
				{
					return 0;
				}
				break;
			case 1717532765:
				if (UNK_0xDD62D560CFE11A27(bParam0, true))
				{
					return 0;
				}
				break;
		}
		switch (UNK_0x1F099C9E2AE4874D(bParam0))
		{
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_STANDARD"):
			case joaat("LAYOUT_STD_EXITFIXUP"):
			case joaat("LAYOUT_STD_HABANERO"):
			case joaat("LAYOUT_STD_STRETCH"):
			case joaat("LAYOUT_STD_HIGHWINDOW"):
			case joaat("LAYOUT_RANGER"):
			case joaat("LAYOUT_RANGER_SWAT"):
			case joaat("LAYOUT_4X4"):
			case joaat("LAYOUT_BISON"):
			case joaat("LAYOUT_VAN_BODHI"):
			case joaat("LAYOUT_STD_LOWROOF"):
			case joaat("LAYOUT_STD_STRATUM"):
			case joaat("LAYOUT_VAN_ROOSEVELT"):
			case joaat("LAYOUT_STD_HUNTLEY"):
			case joaat("LAYOUT_STD_WARRENER"):
			case joaat("LAYOUT_LOW_BLADE"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_STD_KURUMA"):
			case joaat("LAYOUT_STD_BLISTA2"):
			case joaat("LAYOUT_STD_CHINO"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
			case joaat("LAYOUT_STD_LOWRIDER"):
			case joaat("LAYOUT_STD_LOWRIDER_CHINO"):
			case joaat("LAYOUT_STD_LOWRIDER_SIDEDOOR"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_STD_BALLER4"):
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
			case joaat("LAYOUT_STD_LOWRIDER2"):
			case joaat("LAYOUT_STD_LOWRIDER2_SIDEDOOR"):
			case joaat("LAYOUT_STD_LOWRIDER2_SLAMVAN"):
			case joaat("LAYOUT_STD_WINDSOR2"):
			case joaat("LAYOUT_STD_XLS"):
			case joaat("LAYOUT_LOW_LE7B"):
			case joaat("LAYOUT_STD_OMNIS"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_INFERNUS2"):
			case joaat("LAYOUT_LOW_TORERO"):
			case joaat("LAYOUT_LOW_SC1"):
			case joaat("LAYOUT_STD_NEON"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_DOMINATOR3"):
			case joaat("LAYOUT_LOW_TAIPAN"):
			case joaat("LAYOUT_LOW_ITALIGTO"):
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
			case joaat("LAYOUT_RANGER_TOROS"):
			case joaat("LAYOUT_STD_DEVIANT"):
			case -2123959937:
			case 1074598648:
			case 1818992907:
			case -370341013:
			case 1240573865:
			case -627376728:
			case 986556497:
			case -1852541008:
			case -605059493:
			case 1751095603:
			case -991881300:
				return 1;
		}
		if (UNK_0x1F099C9E2AE4874D(bParam0) == joaat("LAYOUT_STD_RIPLEY") && UNK_0x134B62B726CEC8E6(bParam0) == joaat("SLAMVAN"))
		{
			return 1;
		}
	}
	return 0;
}

int func_220(bool bParam0, bool bParam1)
{
	if ((((UNK_0xA7082C42B8809BF2(bParam0) || UNK_0xC41A9202669A24C4(bParam0)) || UNK_0xAFB8495D36825275(bParam0)) || UNK_0xA7D7011F9888A365(bParam0)) || UNK_0x7D8B2A8F9EA82DB7(bParam0))
	{
		return 0;
	}
	if (func_221(bParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((bParam0 == joaat("POLICE") || bParam0 == joaat("POLICE2")) || bParam0 == joaat("POLICE3")) || bParam0 == joaat("POLICE4")) || bParam0 == joaat("FBI")) || bParam0 == joaat("FBI2")) || bParam0 == joaat("CADDY")) || bParam0 == joaat("CADDY2"))
		{
			return 0;
		}
	}
	if (((((((((((((((bParam0 == joaat("ISSI2") || bParam0 == joaat("HOTKNIFE")) || bParam0 == joaat("JB700")) || bParam0 == joaat("JESTER")) || bParam0 == joaat("JESTER2")) || bParam0 == joaat("STROMBERG")) || bParam0 == joaat("BARRAGE")) || bParam0 == joaat("KAMACHO")) || bParam0 == joaat("GB200")) || bParam0 == joaat("FAGALOA")) || bParam0 == joaat("TEZERACT")) || bParam0 == joaat("SWINGER")) || bParam0 == joaat("IMPERATOR")) || bParam0 == joaat("LOCUST")) || bParam0 == joaat("SCHLAGEN")) || bParam0 == joaat("OUTLAW"))
	{
		return 0;
	}
	return 1;
}

bool func_221(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLMAV"):
		case joaat("POLICEB"):
		case joaat("POLICET"):
		case joaat("POLICEOLD2"):
		case joaat("POLICEOLD1"):
		case joaat("SHERIFF"):
		case joaat("SHERIFF2"):
			return true;
	}
	return false;
}

void func_222(float fParam0, vector3 vParam1)
{
	bool bVar0;
	float fVar1;
	float fVar2;

	if (!func_267(uLocal_331, 262144))
	{
		if (func_224(iLocal_274[0]))
		{
			if (uLocal_76[0] == 8)
			{
				func_175("SC_STEALC", 0, 0, 0);
			}
			else
			{
				func_173(iLocal_274[0], "GENERIC_SHOCKED_MED", 10);
			}
			func_8(&uLocal_249);
			func_27(&uLocal_331, 262144);
		}
	}
	else if (func_4(&uLocal_249) > 10f)
	{
		func_73(&uLocal_331, 262144);
		func_8(&uLocal_249);
	}
	if ((fParam0 > 5f || !func_192()) || func_267(uLocal_333, 4))
	{
		return;
	}
	if (!func_267(uLocal_331, 1) && !func_267(uLocal_331, 128))
	{
		if (SYSTEM::VDIST(vParam1, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) < 75f)
		{
			if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
			{
				if (func_175("SC_NEAR", 0, 0, 0))
				{
					func_27(&uLocal_331, 1);
				}
			}
			else
			{
				func_27(&uLocal_331, 1);
			}
			UNK_0x28F5E4DA506AC0CA(vLocal_308, 5f, 0, 0, 0, 0, false, 0);
		}
	}
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		return;
	}
	bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
	if (!UNK_0xDF1306B443CD3D15(bVar0, 0))
	{
		if (!func_267(uLocal_331, 16))
		{
			func_173(iLocal_274[0], "NEED_A_VEHICLE", 10);
			func_27(&uLocal_331, 16);
			func_8(&uLocal_246);
		}
		if (!func_267(uLocal_331, 4))
		{
			func_73(&uLocal_331, 4);
		}
		if (!func_267(uLocal_331, 8))
		{
			func_73(&uLocal_331, 8);
		}
	}
	else
	{
		fVar1 = UNK_0x9C66D99E63E8E24C(bVar0);
		fVar2 = UNK_0xD890711CFD5AF100(bVar0);
		if (fVar1 < (fVar2 * 0.9f) || fVar1 > (fVar2 * 0.1f))
		{
			func_8(&uLocal_252);
		}
		if (!func_267(uLocal_331, 4))
		{
			if (func_4(&uLocal_246) > 15f && func_4(&uLocal_252) > 5f)
			{
				func_173(iLocal_274[0], "DRIVEN_FAST", 10);
				func_27(&uLocal_331, 4);
				func_8(&uLocal_246);
			}
		}
		else if (func_4(&uLocal_246) < 5f)
		{
			func_73(&uLocal_331, 4);
			func_8(&uLocal_246);
		}
		if (!func_267(uLocal_331, 8))
		{
			if (func_4(&uLocal_246) > 15f && func_4(&uLocal_252) > 5f)
			{
				func_173(iLocal_274[0], "DRIVEN_SLOW", 10);
				func_27(&uLocal_331, 4);
				func_8(&uLocal_246);
			}
		}
		else if (func_4(&uLocal_246) < 5f)
		{
			func_73(&uLocal_331, 8);
			func_8(&uLocal_246);
		}
		if (!func_267(uLocal_331, 131072))
		{
			if (func_223(iLocal_274[0], &iLocal_334))
			{
				if (func_4(&uLocal_249) > 5f)
				{
					func_173(iLocal_274[0], "CRASH_GENERIC_DRIVEN", 10);
					func_27(&uLocal_331, 131072);
					func_8(&uLocal_246);
				}
			}
		}
		else if (func_4(&uLocal_249) > 5f)
		{
			func_73(&uLocal_331, 131072);
			func_8(&uLocal_249);
		}
		if (!func_267(uLocal_331, 65536))
		{
			if (func_4(&uLocal_246) > 30f || (func_4(&uLocal_246) > 10f && !func_267(uLocal_331, 32)))
			{
				func_173(iLocal_274[0], "BOOTY_FLIRT", 10);
				func_27(&uLocal_331, 32);
				func_27(&uLocal_331, 524288);
				func_8(&uLocal_246);
			}
			else if (func_267(uLocal_331, 524288))
			{
				if (!UNK_0x65636D4556D82155(iLocal_274[0]) && func_4(&uLocal_246) > 4f)
				{
					func_173(UNK_0x16F2683693E537C9(), "BOOTY_FLIRT_RESP", 10);
					func_73(&uLocal_331, 524288);
				}
			}
		}
	}
}

bool func_223(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
	if (UNK_0xDF1306B443CD3D15(bVar0, 0))
	{
		if (UNK_0x82CCEAB29E9451DD(bParam0, bVar0))
		{
			if (UNK_0xE608C809F9416F00(bVar0))
			{
				iVar1 = UNK_0x7F6DC62EA9922664(bVar0);
				iVar2 = (*iParam1 - iVar1);
				*iParam1 = iVar1;
				UNK_0xE910A68AA670B4AA(bVar0);
				if (iVar2 > 10)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_224(bool bParam0)
{
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x72DA46B7797D51EA(110, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 10f) && UNK_0x6AB6A474D29FA7D8(bParam0, UNK_0x16F2683693E537C9()))
		{
			return true;
		}
	}
	return false;
}

void func_225()
{
	func_87();
	func_8(&uLocal_246);
	if (UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_280))
		{
			UNK_0x142CC44DB769B57E(&iLocal_280);
		}
		if (!UNK_0xE4EDC4B0E92C078B(iLocal_281))
		{
			iLocal_281 = func_62(vLocal_311, 0);
		}
		func_8(&uLocal_258);
		vLocal_320 = { UNK_0x68F4C0EC296D3901(iLocal_274[0], true) };
		iLocal_78 = 4;
	}
	else
	{
		func_8(&uLocal_249);
		func_61(vLocal_308);
		iLocal_78 = 5;
	}
}

void func_226()
{
	if (!func_267(uLocal_331, 1024))
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (func_227(uLocal_76[0]))
			{
				if (!func_171())
				{
					func_173(iLocal_274[0], "NICE_CAR", 10);
					func_27(&uLocal_331, 1024);
				}
			}
		}
	}
}

bool func_227(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
	if (UNK_0xDF1306B443CD3D15(bVar0, 0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bVar0);
		if (func_228(iParam0, iVar1))
		{
			return true;
		}
	}
	return false;
}

bool func_228(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("MANANA"):
		case joaat("TORNADO"):
		case joaat("TORNADO3"):
		case joaat("TORNADO4"):
		case joaat("ZTYPE"):
		case joaat("REGINA"):
			if (iParam0 == 0)
			{
				return true;
			}
			break;
		case joaat("BLISTA"):
		case joaat("SURGE"):
		case joaat("DILETTANTE"):
		case joaat("PENUMBRA"):
		case joaat("ASTEROPE"):
			if (iParam0 == 1)
			{
				return true;
			}
			break;
		case joaat("DOMINATOR"):
		case joaat("GAUNTLET"):
		case joaat("PHOENIX"):
		case joaat("SABREGT"):
		case joaat("BULLET"):
		case joaat("BANSHEE"):
		case joaat("PEYOTE"):
		case joaat("BUFFALO"):
		case joaat("BUFFALO2"):
			if (iParam0 == 2)
			{
				return true;
			}
			break;
		case joaat("CHEETAH"):
		case joaat("COGCABRIO"):
		case joaat("JB700"):
		case joaat("STINGERGT"):
		case joaat("MONROE"):
		case joaat("COMET2"):
		case joaat("ORACLE"):
		case joaat("ORACLE2"):
		case joaat("INTRUDER"):
		case joaat("JACKAL"):
		case joaat("EXEMPLAR"):
		case joaat("FELON"):
		case joaat("SUPERD"):
		case joaat("INFERNUS"):
		case joaat("ENTITYXF"):
		case joaat("ADDER"):
		case joaat("VACCA"):
			if (iParam0 == 3 || iParam0 == 5)
			{
				return true;
			}
			break;
		case joaat("BALLER"):
		case joaat("BISON"):
		case joaat("DUBSTA"):
		case joaat("GRANGER"):
		case joaat("PATRIOT"):
		case joaat("BALLER2"):
		case joaat("BJXL"):
		case joaat("CAVALCADE"):
		case joaat("CAVALCADE2"):
		case joaat("GRESLEY"):
		case joaat("LANDSTALKER"):
		case joaat("MESA"):
		case joaat("RANCHERXL"):
		case joaat("SANDKING"):
		case joaat("REBEL"):
		case joaat("STRETCH"):
		case joaat("ROMERO"):
		case joaat("COACH"):
		case joaat("BUS"):
			if (iParam0 == 4 || iParam0 == 7)
			{
				return true;
			}
			break;
		case joaat("SURANO"):
		case joaat("RAPIDGT2"):
		case joaat("NINEF2"):
		case joaat("ZION2"):
		case joaat("TORNADO2"):
		case joaat("SENTINEL2"):
		case joaat("ISSI2"):
		case joaat("FELON2"):
			if (iParam0 == 6 || iParam0 == 1)
			{
				return true;
			}
			break;
		case joaat("VADER"):
		case joaat("AKUMA"):
		case joaat("BAGGER"):
		case joaat("BATI"):
		case joaat("BATI2"):
		case joaat("DOUBLE"):
		case joaat("HEXER"):
		case joaat("NEMESIS"):
		case joaat("RUFFIAN"):
			if (iParam0 == 8)
			{
				return true;
			}
			break;
		case joaat("FBI"):
		case joaat("TAXI"):
		case joaat("PRANGER"):
		case joaat("AMBULANCE"):
		case joaat("POLICE3"):
			if (iParam0 == 9)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_229(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_235(iParam0, 2, 1))
		{
			func_234(iParam0, 2, 1);
		}
	}
	else if (func_235(iParam0, 2, 1))
	{
		func_230(iParam0, 2, 1);
	}
}

void func_230(int iParam0, bool bParam1, bool bParam2)
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
		if (func_54() == 0)
		{
			bVar0 = func_232(func_233(iParam0), -1, 0);
			UNK_0x0674E58A79778E99(&bVar0, bParam1);
			func_231(func_233(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

void func_231(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_232(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_76(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_233(int iParam0)
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

void func_234(int iParam0, bool bParam1, bool bParam2)
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
		if (func_54() == 0)
		{
			bVar0 = func_232(func_233(iParam0), -1, 0);
			UNK_0x5D96D8530B3D0904(&bVar0, bParam1);
			func_231(func_233(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

bool func_235(int iParam0, bool bParam1, bool bParam2)
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
		if (func_54() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_232(func_233(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

void func_236()
{
	if (uLocal_76[0] == 8)
	{
		func_175("SC_GREET", 0, 0, 0);
	}
	else
	{
		func_173(iLocal_274[0], "GENERIC_HI_FLIRTY", 10);
	}
}

void func_237()
{
	if (!UNK_0x16102BEDC7435774(iLocal_274[0]) && SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(iLocal_274[0], true)) < 10f)
	{
		UNK_0xE25C96A9C36BE5D2(iLocal_274[0], func_238());
		UNK_0xBF541ED34EA81209(iLocal_274[0], false);
	}
}

int func_238()
{
	return UNK_0x5D08BBCCCC2F43A4(UNK_0xA30EC016B12C03E4());
}

float func_239(bool bParam0, bool bParam1, int iParam2)
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

bool func_240(bool bParam0, var uParam1, bool bParam2)
{
	var uVar0;
	bool bVar1;

	if (!func_10(bParam2))
	{
		func_7(bParam2);
	}
	if (func_4(bParam2) > 3f)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar1 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		}
		if (func_243(bParam0, bVar1, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_241(&uVar0);
			if (UNK_0xC844350D5D58C99A(bParam0))
			{
				if (!UNK_0x437347B10A200C4B(bParam0, 0))
				{
					if (!UNK_0x1C43D178459D5730(bLocal_72))
					{
						UNK_0xF63400DBE3303D26("BootyCall", &bLocal_72);
					}
					UNK_0x0E2400AB9174FA81(2, bLocal_72, joaat("PLAYER"));
					UNK_0x0E2400AB9174FA81(2, joaat("PLAYER"), bLocal_72);
					UNK_0x6DF7BF67E86AAE86(bParam0, bLocal_72);
					UNK_0xF3268524E9BE6D6E(bParam0, UNK_0x16F2683693E537C9(), 500f, -1, 0, 0);
				}
			}
			func_8(bParam2);
			return true;
		}
	}
	return false;
}

void func_241(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			func_242(1);
			break;
		case 2:
			break;
	}
}

void func_242(bool bParam0)
{
	Global_110632 = 0;
	Global_110632.f_1 = -1;
	Global_110632.f_2 = -1;
	if (bParam0)
	{
		func_124(-1);
	}
}

bool func_243(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x16F2683693E537C9();
	if (!UNK_0x437347B10A200C4B(bVar0, 0) && !UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (!func_267(*uParam2, 1))
		{
			if (func_250(bParam0, uParam2))
			{
				*uParam3 = 1;
				return true;
			}
		}
		if (!func_267(*uParam2, 2))
		{
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
			{
				*uParam3 = 2;
				return true;
			}
		}
		if (!func_267(*uParam2, 4))
		{
			if (func_248(bVar0, bParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return true;
			}
		}
		if (!func_267(*uParam2, 8))
		{
			if (func_247(bVar0, bParam0, uParam2))
			{
				*uParam3 = 8;
				return true;
			}
		}
		bVar1 = !func_267(*uParam2, 128);
		if (bParam4)
		{
			if (func_244(bParam0, bParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return true;
			}
		}
		else if (!func_267(*uParam2, 16))
		{
			if (func_244(bParam0, bParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return true;
			}
		}
	}
	else if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (bParam7 && UNK_0xB87D13D0C064E9D1(bParam0, bVar0, 1))
		{
			*uParam3 = 16;
			return true;
		}
	}
	return false;
}

bool func_244(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;

	if (bParam3)
	{
		if (!bLocal_59)
		{
			iLocal_60 = UNK_0x7F6DC62EA9922664(bParam0);
			bLocal_59 = true;
		}
		iLocal_61 = UNK_0x7F6DC62EA9922664(bParam0);
		iLocal_62 = (iLocal_60 - iLocal_61);
		bVar0 = UNK_0x728870EB733D12A1();
		if (!UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0xB87D13D0C064E9D1(bParam0, bVar0, 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return true;
				}
			}
		}
		if (bLocal_59)
		{
			if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return true;
				}
			}
		}
	}
	else if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
	{
		return true;
	}
	if (!bParam3)
	{
		bVar1 = UNK_0x728870EB733D12A1();
		if (!UNK_0x437347B10A200C4B(bVar1, 0))
		{
			if (UNK_0xB87D13D0C064E9D1(bParam0, bVar1, 1))
			{
				return true;
			}
		}
	}
	if (bParam4)
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			if (UNK_0x36646919F20EAFFC(bParam0))
			{
				if (UNK_0x710D117BA581D7D2(bParam0) == UNK_0x16F2683693E537C9())
				{
					return true;
				}
			}
		}
	}
	if (bParam5)
	{
		if (UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x5A91F08DF773C39D(bParam0, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (UNK_0x1A069ED4E9BDE50A(UNK_0xD803B885F5E47A62()))
				{
					return true;
				}
			}
		}
	}
	if (UNK_0xE9B814896D415EDD(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0xC021B60D52071374(bParam0))
		{
			return true;
		}
	}
	if (func_246(UNK_0x16F2683693E537C9(), bParam0))
	{
		return true;
	}
	if (bParam2)
	{
		if (UNK_0x869EFD0BC0868856(bParam0) && func_245(bParam0, 1) < 1.5f)
		{
			return true;
		}
		else if (UNK_0x405E212DDE472467(bParam0, 0))
		{
			if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), UNK_0x6937EA2286828455(bParam0, 0)))
			{
				return true;
			}
		}
		else if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), bParam0))
		{
			return true;
		}
		if (!UNK_0x437347B10A200C4B(bParam1, 0))
		{
			if (UNK_0xB87D13D0C064E9D1(bParam1, UNK_0x16F2683693E537C9(), 1))
			{
				return true;
			}
		}
	}
	return false;
}

float func_245(bool bParam0, int iParam1)
{
	return func_239(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4()), bParam0, iParam1);
}

bool func_246(bool bParam0, bool bParam1)
{
	int iVar0;

	UNK_0xCAE036C45E7FC720(bParam0, &iVar0, 1);
	if (iVar0 == joaat("WEAPON_PETROLCAN"))
	{
		if (UNK_0x168558745A6AC21E(bParam0))
		{
			if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bParam0, true), UNK_0x68F4C0EC296D3901(bParam1, true)) < 2.5f)
			{
				if (UNK_0x7069CC4DE1EA3FAA(bParam0, bParam1, 180f))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_247(bool bParam0, bool bParam1, var uParam2)
{
	if (UNK_0x03A10A5707B2BB1F(bParam0, 4))
	{
		if (UNK_0x168558745A6AC21E(bParam0) && !UNK_0x52AE17073D025311(bParam0))
		{
			if (UNK_0x5A91F08DF773C39D(bParam1, UNK_0x68F4C0EC296D3901(bParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_248(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	bool bVar3;

	bVar3 = false;
	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
	}
	if (UNK_0xD3DCEC81D13AAFB1(vVar0, 4f, true))
	{
		return true;
	}
	if (UNK_0xD15F544473A95FE8(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return true;
	}
	if (UNK_0x03A10A5707B2BB1F(bParam0, 2))
	{
		if (UNK_0x168558745A6AC21E(bParam0))
		{
			if (UNK_0x5A91F08DF773C39D(bParam1, UNK_0x68F4C0EC296D3901(bParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (UNK_0x7069CC4DE1EA3FAA(UNK_0x940C1429253D3B1B(bParam1), bParam0, 120f) && UNK_0xF649DD3BF44195C7(bParam1, bParam0, 17))
				{
					return true;
				}
			}
		}
		else
		{
			if (UNK_0x405E212DDE472467(UNK_0x940C1429253D3B1B(bParam1), 0))
			{
				bVar3 = UNK_0x6937EA2286828455(UNK_0x940C1429253D3B1B(bParam1), 0);
			}
			if (UNK_0xFB275CE013F3A38C(bParam0) || func_249(bVar3))
			{
				if (UNK_0x5A91F08DF773C39D(bParam1, UNK_0x68F4C0EC296D3901(bParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (UNK_0x7069CC4DE1EA3FAA(UNK_0x940C1429253D3B1B(bParam1), bParam0, 120f) && UNK_0xF649DD3BF44195C7(bParam1, bParam0, 17))
					{
						return true;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (UNK_0x723EE7F83DF1497D((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return true;
		}
	}
	return false;
}

bool func_249(bool bParam0)
{
	int iVar0;
	bool bVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (UNK_0xA30B8362589C124A(bParam0, -1, 0) != 0)
			{
				if (UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar0, 1))
				{
					if (iVar0 == joaat("WEAPON_STICKYBOMB"))
					{
						if (func_239(UNK_0x16F2683693E537C9(), bParam0, 1) < 40f)
						{
							if (UNK_0x38AF5DD0BDDE9545(UNK_0xD803B885F5E47A62(), &bVar1))
							{
								if ((UNK_0xE2F1E99DD161A861(bVar1) && UNK_0x96A5FE5834B81CE7(bVar1) == bParam0) || (UNK_0xEC560E589DF8370E(bVar1) && UNK_0x940C1429253D3B1B(bVar1) == UNK_0xA30B8362589C124A(bParam0, -1, 0)))
								{
									if ((UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()) && UNK_0x06F8112AA79C53D9(0, 24)) || (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0x06F8112AA79C53D9(0, 69)))
									{
										return true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_250(bool bParam0, var uParam1)
{
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
		{
			if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0))
			{
				if (UNK_0x7069CC4DE1EA3FAA(bParam0, UNK_0x16F2683693E537C9(), 90f))
				{
					if (func_245(bParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = UNK_0x1C0640BA9A7327B3();
						}
						else if ((UNK_0x1C0640BA9A7327B3() - uParam1->f_1) > uParam1->f_3)
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

void func_251(int iParam0)
{
	struct<4> Var0;

	if (UNK_0xE4EDC4B0E92C078B(iLocal_282[iParam0]))
	{
		UNK_0x142CC44DB769B57E(&(iLocal_282[iParam0]));
	}
	iLocal_282[iParam0] = func_252(iLocal_274[iParam0], 0, 145);
	Var0 = { func_71(uLocal_76[iParam0]) };
	UNK_0xDC5B2F9D0CCE3A10(iLocal_282[iParam0], &Var0);
}

int func_252(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_253(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_253(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_63(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_63(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_63(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

bool func_254(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	float fVar7;

	vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	vVar3 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar6 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (UNK_0x047216F1869A66EC(bParam0) == func_238())
		{
			if (UNK_0xDF1306B443CD3D15(bVar6, 0))
			{
				if (!UNK_0xC42A92762C58E1B9(bParam0, bVar6, 0) && SYSTEM::VDIST(vVar0, vVar3) > 10f)
				{
					return true;
				}
			}
		}
	}
	if (bParam1 && func_267(uLocal_333, 2))
	{
		fVar7 = UNK_0x755FF954DAE327E1((vVar0.z - vVar3.z));
		if (fVar7 > 8f)
		{
			return true;
		}
	}
	return false;
}

void func_255()
{
	if (!UNK_0x437347B10A200C4B(iLocal_274[0], 0))
	{
		if (!UNK_0xEB880D98B5988D0C())
		{
			func_196(iLocal_274[0], UNK_0x8A5E176FF719A014(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0xD9522BA9E27E1349(UNK_0x16F2683693E537C9()), 0f, 2f, 0f));
			iLocal_74 = 1;
			iLocal_75 = 0;
		}
	}
}

void func_256()
{
	UNK_0xC2127C0F64D6A3B9();
	func_257();
}

void func_257()
{
	Global_22211.f_134 = 1;
}

int func_258(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		if (bParam1)
		{
			return joaat("CSB_STRIPPER_01");
		}
		else
		{
			return joaat("S_F_Y_STRIPPER_01");
		}
	}
	else if (iParam0 == 1)
	{
		if (bParam1)
		{
			return joaat("CSB_STRIPPER_02");
		}
		else
		{
			return joaat("S_F_Y_STRIPPER_02");
		}
	}
	return 0;
}

void func_259(bool bParam0)
{
	char cVar0[64];

	if (!func_165(bLocal_73))
	{
		bLocal_73 = func_169();
		func_159(&bLocal_73, 0, 0, UNK_0x09AC81E49EA267F7(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!func_267(uLocal_333, 512))
		{
			if (func_266(bLocal_73) && UNK_0x03068588A1FCED1A(iLocal_274[0]))
			{
				if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
				{
					StringCopy(&cVar0, "SC_CANCEL_", 64);
					StringIntConCat(&cVar0, uLocal_76[0], 64);
					func_193(&uLocal_81, 1, 0, func_194(uLocal_76[0]), 0, 1);
					func_265(&uLocal_81, func_112(uLocal_76[0]), "SHAUD", &cVar0, 7, 0, 0, 1);
				}
				else
				{
					func_263();
				}
				func_262(iLocal_274[0]);
				func_27(&uLocal_333, 512);
			}
		}
		else if (func_261())
		{
			func_73(&uLocal_333, 512);
		}
		else if ((!func_171() && func_260()) && !func_261())
		{
			func_242(1);
			func_66(2);
		}
	}
}

bool func_260()
{
	if (Global_20805 == 0)
	{
		return true;
	}
	return false;
}

bool func_261()
{
	if (Global_20854 == 1 || Global_21821 == 1)
	{
		return true;
	}
	return false;
}

void func_262(bool bParam0)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		UNK_0x97AC90C1F2A44CEE(bParam0, 1);
		if (UNK_0xD1960163A3042274(bParam0, 242628503) != 1)
		{
			UNK_0xF82EA857DA10E0CD(&iLocal_339);
			UNK_0xDD353D0E9C789D0E(&iLocal_339);
			UNK_0x1DC614CBE22FFB4F(false, 8000);
			UNK_0x96167B03C5A77156(false, vLocal_305, 1.5f, -1, 0.25f, 0, 1193033728);
			UNK_0x75ABDC5F81978924(iLocal_339);
			UNK_0x78ADC381772E3D54(bParam0, iLocal_339);
		}
	}
}

void func_263()
{
	int iVar0;

	if (func_264())
	{
		return;
	}
	iVar0 = func_115(uLocal_76[0]);
	func_109(-384575792, iVar0, 6, 3, func_113(), func_112(uLocal_76[0]), 0, 10000, -1, 0, -1, 0, 1);
}

bool func_264()
{
	if (func_54() == 0)
	{
		return true;
	}
	return false;
}

int func_265(var uParam0, bool bParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_189(uParam0, bParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 1;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_177(sParam3, iParam4, bParam7);
}

bool func_266(bool bParam0)
{
	return func_164(func_169(), bParam0);
}

bool func_267(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_268(var uParam0, bool bParam1)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	char cVar5[64];
	struct<16> Var21;
	char cVar37[64];

	func_296();
	func_64(&vVar0, &bVar3, bParam1);
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (fLocal_329 == -1f)
		{
			fLocal_329 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vVar0);
		}
		if (iLocal_332 == -1)
		{
			iLocal_332 = uParam0->f_3;
		}
		if (!func_267(uLocal_333, 32))
		{
			func_292(&uLocal_278, func_294((*uParam0)[0], 0));
			func_291(&uLocal_278);
			func_27(&uLocal_333, 32);
			UNK_0x3F423BF5B8125A50("mini@strip_club@idles@stripper");
			UNK_0x3F423BF5B8125A50("gestures@f@standing@casual");
			func_290();
			return false;
		}
		else if ((!func_289(&uLocal_278) || !UNK_0xB4AE0788C1587752("mini@strip_club@idles@stripper")) || !func_288())
		{
			return false;
		}
		if (bLocal_337)
		{
			if (!UNK_0xA3FA8B6D2780D661(1))
			{
				return false;
			}
		}
		if (!func_267(uLocal_333, 1024))
		{
			uLocal_76[0] = (*uParam0)[0];
			iLocal_274[0] = UNK_0x36F2404464202779(26, func_294((*uParam0)[0], 0), vVar0, bVar3, 1, true);
			func_282(iLocal_274[0], uLocal_76[0], 0);
			UNK_0x11AD11297DC58CC7(iLocal_274[iVar4], true);
			UNK_0xFADC0A217229F6B5(iLocal_274[0], true);
			UNK_0x1365063FA6365BE8(iLocal_274[0], true);
			func_278(iLocal_274[0]);
			UNK_0xC6EB89C59F2AF6B8(iLocal_274[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, -1, 1, false, 0, 0, 0);
			UNK_0x0C8C0C840C2D1AD2(iLocal_274[iVar4], UNK_0x16F2683693E537C9(), -1, 2048, 4);
			UNK_0xBF541ED34EA81209(iLocal_274[0], false);
			UNK_0x4F39CC3882DD074E(iLocal_274[0], func_194((*uParam0)[0]));
			func_193(&uLocal_81, 1, iLocal_274[0], func_194((*uParam0)[0]), 0, 1);
			func_27(&uLocal_333, 1024);
		}
		if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vVar0) > 100f)
		{
			if (func_192())
			{
				if (!func_267(uLocal_333, 1))
				{
					func_277(bParam1);
					func_251(0);
					func_27(&uLocal_333, 1);
				}
			}
			if (!func_267(uLocal_333, 64) && !func_267(uLocal_333, 512))
			{
				if (func_276(func_112((*uParam0)[0])))
				{
					StringCopy(&cVar5, "BC_PLYRC_", 64);
					if (func_77() == 2)
					{
						func_193(&uLocal_81, 0, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
						StringConCat(&cVar5, "T", 64);
					}
					else if (func_77() == 0)
					{
						func_193(&uLocal_81, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
						StringConCat(&cVar5, "M", 64);
					}
					else if (func_77() == 1)
					{
						func_193(&uLocal_81, 0, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
						StringConCat(&cVar5, "F", 64);
					}
					func_193(&uLocal_81, 3, 0, func_194((*uParam0)[0]), 0, 1);
					Var21 = { func_275() };
					func_270(&uLocal_81, func_112((*uParam0)[0]), "BCAUD", &cVar5, &cVar5, &Var21, &Var21, 12, 1, 0, 0, 0);
					func_27(&uLocal_333, 64);
				}
				if (func_165(bLocal_73))
				{
					if (func_266(bLocal_73))
					{
						if ((*uParam0)[0] == 8 || (*uParam0)[0] == 9)
						{
							StringCopy(&cVar37, "SC_CANCEL_", 64);
							StringIntConCat(&cVar37, (*uParam0)[0], 64);
							func_193(&uLocal_81, 1, 0, func_194((*uParam0)[0]), 0, 1);
							func_265(&uLocal_81, func_112((*uParam0)[0]), "SHAUD", &cVar37, 12, 0, 0, 1);
						}
						else
						{
							func_263();
						}
						func_27(&uLocal_333, 512);
					}
				}
			}
			else if (func_261())
			{
				func_73(&uLocal_333, 64);
				func_73(&uLocal_333, 512);
			}
			else if ((!func_171() && func_260()) && !func_261())
			{
				func_269((*uParam0)[0]);
				func_242(1);
				func_66(2);
			}
			if (!func_267(uLocal_333, 128))
			{
				if (!func_33(0))
				{
					func_67("SCLUB_HOME_C_H", uLocal_76[0], 0);
					func_27(&uLocal_333, 128);
				}
			}
			if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vVar0) > (fLocal_329 + (200f * 3f)))
			{
				func_66(1);
			}
			else if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vVar0) < fLocal_329)
			{
				fLocal_329 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vVar0);
			}
			return false;
		}
	}
	else
	{
		return false;
	}
	if (func_77() == 2)
	{
		func_193(&uLocal_81, 0, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
	}
	else if (func_77() == 0)
	{
		func_193(&uLocal_81, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	}
	else if (func_77() == 1)
	{
		func_193(&uLocal_81, 0, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
	}
	return true;
}

void func_269(int iParam0)
{
	if (Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
	{
		Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;
	}
	Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1++;
}

int func_270(var uParam0, bool bParam1, char* sParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar11;

	func_189(uParam0, bParam1, sParam2, iParam9, iParam10, 0);
	func_274();
	if (iParam8 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_272(2, &uVar0, &uVar11, cParam3, cParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_271(&uVar0, &uVar11, iParam7, bParam11);
}

int func_271(var uParam0, var uParam1, int iParam2, bool bParam3)
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
					func_188();
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
		if (func_187(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_186();
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
				func_134();
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
				if (func_185())
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
			if (func_23())
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
			func_184();
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
		func_183();
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
		func_188();
	}
	return 0;
}

void func_272(int iParam0, var uParam1, var uParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_273(iParam0);
	(*uParam1)[0] = cParam3;
	(*uParam2)[0] = cParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
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

void func_273(int iParam0)
{
	Global_20802 = iParam0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
}

void func_274()
{
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_20819 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
}

struct<16> func_275()
{
	struct<16> Var0;

	StringCopy(&Var0, "BC_DECR_", 64);
	StringIntConCat(&Var0, uLocal_76[0], 64);
	return Var0;
}

bool func_276(bool bParam0)
{
	if ((Global_21919 || Global_21918) || Global_21920)
	{
		if (bParam0 == 130)
		{
		}
		else
		{
			return false;
		}
	}
	if (Global_117[bParam0 /*10*/].f_8 != 150)
	{
		if (Global_19486.f_1 == 10)
		{
			if (Global_6671 == bParam0)
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
	return false;
}

void func_277(bool bParam0)
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_84("SCLUB_HOME_MEE4", uLocal_76[0]);
			}
			else
			{
				func_84("SCLUB_HOME_MEET", uLocal_76[0]);
			}
			break;
		case 8:
			func_84("SCLUB_HOME_LIZ", uLocal_76[0]);
			break;
		case 9:
			func_84("SCLUB_HOME_HITCH", uLocal_76[0]);
			break;
	}
}

void func_278(bool bParam0)
{
	if (UNK_0x134B62B726CEC8E6(bParam0) == joaat("S_F_Y_STRIPPER_02"))
	{
		func_281(bParam0, 2, UNK_0x09AC81E49EA267F7(false, 3));
		func_280(bParam0, 2, UNK_0x09AC81E49EA267F7(false, 3));
		func_279(bParam0, 0, 0);
	}
}

void func_279(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x6823CE32EEAD4F52(bParam0, 6, bParam1, bParam2))
	{
		UNK_0x64F9F278AB9DCA2C(bParam0, 6, bParam1, bParam2, 0);
	}
}

void func_280(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x6823CE32EEAD4F52(bParam0, 3, bParam1, bParam2))
	{
		UNK_0x64F9F278AB9DCA2C(bParam0, 3, bParam1, bParam2, 0);
	}
}

void func_281(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x6823CE32EEAD4F52(bParam0, 8, bParam1, bParam2))
	{
		UNK_0x64F9F278AB9DCA2C(bParam0, 8, bParam1, bParam2, 0);
	}
}

void func_282(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		UNK_0x78ED16BE998AECC7(bParam0);
		bVar0 = false;
		if (UNK_0x134B62B726CEC8E6(bParam0) == joaat("MP_F_STRIPPERLITE"))
		{
			bVar0 = true;
		}
		switch (iParam1)
		{
			case 0:
				if (bVar0)
				{
					func_287(bParam0, 1, 0);
					func_286(bParam0, 1, 0);
					func_280(bParam0, 1, 0);
					func_285(bParam0, 1, 0);
					func_284(bParam0, 1, -1, -1);
				}
				else
				{
					func_287(bParam0, 1, 1);
					func_286(bParam0, 2, 0);
					func_280(bParam0, 0, 0);
					func_285(bParam0, 0, 0);
					func_281(bParam0, 1, 0);
					func_283(bParam0, 0, 0);
					func_284(bParam0, bParam2, -1, -1);
				}
				break;
			case 1:
				if (bVar0)
				{
					func_287(bParam0, 0, 0);
					func_286(bParam0, 0, 0);
					func_280(bParam0, 0, 0);
					func_285(bParam0, 0, 0);
					func_281(bParam0, 0, 0);
					func_284(bParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(bParam0, 0, 0);
					func_286(bParam0, 0, 0);
					func_280(bParam0, 0, 0);
					func_285(bParam0, 0, 0);
					func_279(bParam0, 4, 0);
					func_281(bParam0, 0, 0);
					func_284(bParam0, bParam2, 0, 4);
				}
				break;
			case 2:
				if (bVar0)
				{
					func_287(bParam0, 1, 0);
					func_286(bParam0, 1, 1);
					func_280(bParam0, 1, 0);
					func_285(bParam0, 1, 0);
					func_284(bParam0, 1, -1, -1);
				}
				else
				{
					func_287(bParam0, 0, 1);
					func_286(bParam0, 1, 1);
					func_280(bParam0, 1, 0);
					func_285(bParam0, 1, 1);
					func_281(bParam0, 1, 0);
					func_283(bParam0, 1, 0);
					func_284(bParam0, bParam2, -1, -1);
				}
				break;
			case 3:
				if (bVar0)
				{
					func_287(bParam0, 0, 0);
					func_286(bParam0, 0, 1);
					func_280(bParam0, 0, 1);
					func_285(bParam0, 0, 1);
					func_281(bParam0, 0, 0);
					func_284(bParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(bParam0, 0, 0);
					func_286(bParam0, 2, 0);
					func_280(bParam0, 0, 2);
					func_285(bParam0, 1, 1);
					func_279(bParam0, 0, 0);
					func_281(bParam0, 0, 0);
					func_284(bParam0, bParam2, 2, 0);
				}
				break;
			case 4:
				if (bVar0)
				{
					func_287(bParam0, 1, 0);
					func_286(bParam0, 1, 0);
					func_280(bParam0, 1, 0);
					func_285(bParam0, 1, 0);
					func_284(bParam0, 1, -1, -1);
				}
				else
				{
					func_287(bParam0, 1, 0);
					func_286(bParam0, 2, 1);
					func_280(bParam0, 1, 2);
					func_285(bParam0, 0, 2);
					func_281(bParam0, 1, 0);
					func_283(bParam0, 1, 2);
					func_284(bParam0, bParam2, -1, -1);
				}
				break;
			case 5:
				if (bVar0)
				{
					func_287(bParam0, 0, 0);
					func_286(bParam0, 0, 0);
					func_280(bParam0, 0, 0);
					func_285(bParam0, 0, 0);
					func_281(bParam0, 0, 0);
					func_284(bParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(bParam0, 1, 1);
					func_286(bParam0, 1, 0);
					func_280(bParam0, 0, 1);
					func_285(bParam0, 0, 2);
					func_279(bParam0, 2, 0);
					func_281(bParam0, 0, 0);
					func_284(bParam0, bParam2, 1, 2);
				}
				break;
			case 6:
				if (bVar0)
				{
					func_287(bParam0, 1, 0);
					func_286(bParam0, 1, 0);
					func_280(bParam0, 1, 0);
					func_285(bParam0, 1, 0);
					func_284(bParam0, 1, -1, -1);
				}
				else
				{
					func_287(bParam0, 0, 0);
					func_286(bParam0, 1, 0);
					func_280(bParam0, 0, 1);
					func_285(bParam0, 0, 1);
					func_281(bParam0, 1, 0);
					func_283(bParam0, 0, 1);
					func_284(bParam0, bParam2, 0, 1);
				}
				break;
			case 7:
				if (bVar0)
				{
					func_287(bParam0, 0, 0);
					func_286(bParam0, 0, 1);
					func_280(bParam0, 0, 0);
					func_285(bParam0, 0, 0);
					func_281(bParam0, 0, 0);
					func_284(bParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(bParam0, 1, 0);
					func_286(bParam0, 0, 2);
					func_280(bParam0, 1, 1);
					func_285(bParam0, 0, 1);
					func_279(bParam0, 0, 0);
					func_281(bParam0, 1, 0);
					func_284(bParam0, bParam2, 0, 0);
				}
				break;
			case 8:
				UNK_0x64F9F278AB9DCA2C(bParam0, 3, 2, false, 0);
				UNK_0x64F9F278AB9DCA2C(bParam0, 4, false, true, 0);
				break;
			case 9:
				UNK_0x64F9F278AB9DCA2C(bParam0, false, false, true, 0);
				UNK_0x64F9F278AB9DCA2C(bParam0, 2, false, true, 0);
				UNK_0x64F9F278AB9DCA2C(bParam0, 3, false, false, 0);
				UNK_0x64F9F278AB9DCA2C(bParam0, 4, false, true, 0);
				UNK_0x64F9F278AB9DCA2C(bParam0, 8, true, false, 0);
				UNK_0x64F9F278AB9DCA2C(bParam0, 10, false, false, 0);
				break;
		}
	}
}

void func_283(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x6823CE32EEAD4F52(bParam0, 11, bParam1, bParam2))
	{
		UNK_0x64F9F278AB9DCA2C(bParam0, 11, bParam1, bParam2, 0);
	}
}

void func_284(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return;
	}
	iVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	if (iVar0 == func_258(0, 0) || iVar0 == func_258(0, 1))
	{
		if (bParam1)
		{
			func_280(bParam0, 2, 0);
			func_281(bParam0, 1, 0);
		}
	}
	else if (iVar0 == func_258(1, 0) || iVar0 == func_258(1, 1))
	{
		if (bParam1)
		{
			func_280(bParam0, 0, bParam2);
			func_279(bParam0, bParam3, 0);
			func_281(bParam0, 1, 0);
		}
	}
	else if (iVar0 == joaat("MP_F_STRIPPERLITE"))
	{
		if (bParam1)
		{
			func_281(bParam0, 1, 0);
		}
	}
}

void func_285(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x6823CE32EEAD4F52(bParam0, 4, bParam1, bParam2))
	{
		UNK_0x64F9F278AB9DCA2C(bParam0, 4, bParam1, bParam2, 0);
	}
}

void func_286(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x6823CE32EEAD4F52(bParam0, 2, bParam1, bParam2))
	{
		UNK_0x64F9F278AB9DCA2C(bParam0, 2, bParam1, bParam2, 0);
	}
}

void func_287(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x6823CE32EEAD4F52(bParam0, 0, bParam1, bParam2))
	{
		UNK_0x64F9F278AB9DCA2C(bParam0, false, bParam1, bParam2, 0);
	}
}

bool func_288()
{
	if (UNK_0xEA6BC48857E0AC4C(func_204()))
	{
		return true;
	}
	else if (UNK_0x1C2E18E9C63BEB77(func_204()))
	{
		return true;
	}
	return false;
}

bool func_289(var uParam0)
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

void func_290()
{
	if (!UNK_0xEA6BC48857E0AC4C(func_204()))
	{
		UNK_0x29398344B9E5B8A7(func_204());
	}
}

void func_291(var uParam0)
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

int func_292(var uParam0, int iParam1)
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
	iVar1 = func_293(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_293(var uParam0)
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

int func_294(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (bParam1)
	{
		return joaat("MP_F_STRIPPERLITE");
	}
	bVar0 = func_112(bParam0);
	if (bVar0 != 145)
	{
		return func_295(bVar0);
	}
	return func_258(0, 0);
}

int func_295(bool bParam0)
{
	if (!func_80(bParam0))
	{
		return func_83(bParam0);
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

void func_296()
{
	switch (uLocal_76[0])
	{
		case 1:
			vLocal_302 = { 128.1002f, -1895.001f, 22.4811f };
			vLocal_305 = { 128.1059f, -1896.819f, 22.6792f };
			vLocal_308 = { 133.9411f, -1881.89f, 22.5257f };
			vLocal_311 = { 130.1663f, -1893.057f, 22.3748f };
			vLocal_314 = { 133.4958f, -1891.641f, 22.4252f };
			bLocal_326 = 330.5705f;
			bLocal_327 = 244f;
			vLocal_323 = { 146.293f, -1888.049f, 22.2193f };
			bLocal_328 = bLocal_327;
			break;
		case 0:
			vLocal_302 = { -161.9628f, -1636.501f, 33.0339f };
			vLocal_305 = { -159.9415f, -1637.307f, 33.0339f };
			vLocal_308 = { -178.6316f, -1629.522f, 32.1789f };
			vLocal_311 = { -166.1453f, -1633.102f, 32.6574f };
			vLocal_314 = { -166.6636f, -1633.229f, 32.6567f };
			bLocal_326 = 108.072f;
			bLocal_327 = 180.9811f;
			vLocal_323 = { vLocal_308 };
			bLocal_328 = bLocal_327;
			break;
		case 4:
			vLocal_302 = { -198.3824f, 87.8785f, 68.7436f };
			vLocal_305 = { -197.2292f, 86.3497f, 68.7561f };
			vLocal_308 = { -200.9078f, 113.537f, 68.5518f };
			vLocal_311 = { -200.1384f, 96.9809f, 68.5203f };
			vLocal_314 = { -199.5068f, 95.7042f, 68.5193f };
			bLocal_326 = 48.99f;
			bLocal_327 = 64.3f;
			vLocal_323 = { vLocal_308 };
			bLocal_328 = bLocal_327;
			break;
		case 5:
			vLocal_302 = { -849.0348f, 510.6906f, 89.8218f };
			vLocal_305 = { -849.0408f, 508.5767f, 89.8218f };
			vLocal_308 = { -846.1005f, 520.2202f, 89.6217f };
			vLocal_311 = { -851.8972f, 512.73f, 89.6217f };
			vLocal_314 = { -851.8746f, 513.6746f, 89.6217f };
			bLocal_326 = 92.365f;
			bLocal_327 = 293f;
			vLocal_323 = { -860.4819f, 514.2496f, 88.1473f };
			bLocal_328 = bLocal_327;
			break;
		case 8:
			vLocal_302 = { -28.2427f, -1555.892f, 29.6918f };
			vLocal_305 = { -24.8589f, -1556.846f, 29.6819f };
			vLocal_308 = { -41.8174f, -1575.609f, 28.2831f };
			vLocal_311 = { -25.3404f, -1556.341f, 29.6919f };
			vLocal_314 = { -27.7382f, -1570.572f, 29.3f };
			bLocal_326 = 181.352f;
			bLocal_327 = 47.9206f;
			vLocal_323 = { vLocal_308 };
			bLocal_328 = bLocal_327;
			break;
		case 9:
			vLocal_302 = { 3313.487f, 5175.831f, 18.619f };
			vLocal_305 = { 3310.816f, 5176.331f, 18.619f };
			vLocal_308 = { 3334.321f, 5161.122f, 17.2996f };
			vLocal_311 = { 3317.788f, 5171.707f, 17.4471f };
			vLocal_314 = { 3318.076f, 5171.805f, 17.4385f };
			bLocal_326 = 236.4579f;
			vLocal_323 = { 3322.927f, 5148.607f, 17.3141f };
			bLocal_328 = 310.8648f;
			break;
	}
}

int func_297()
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bLocal_337)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		default:
			return 0;
	}
	return 0;
}

int func_298(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_302();
			}
			else
			{
				return 0;
			}
		}
		if (!func_301())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_302();
					}
					else
					{
						return 0;
					}
				}
				if (func_300())
				{
					if (!bParam2)
					{
						func_302();
					}
					else
					{
						return 0;
					}
				}
				if (func_299(157))
				{
					if (!bParam2)
					{
						func_302();
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
					func_302();
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
				func_302();
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
			func_302();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_299(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_300()
{
	return Global_2450632.f_593;
}

bool func_301()
{
	return Global_1312854;
}

void func_302()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_303()
{
	UNK_0x752C7D5696C0D8A0(0);
	UNK_0xCE7D0828D683D536();
	func_86();
	UNK_0x790015DC92C918E2();
	UNK_0x2952D66A502EA873(iLocal_301, 0);
	UNK_0xE342F209E49C5314(vLocal_308 - Vector(3f, 3f, 3f), vLocal_308 + Vector(3f, 3f, 3f), true, 1);
	UNK_0x842F1AEB2FCC00B7(vLocal_308 - Vector(3f, 3f, 3f), vLocal_308 + Vector(3f, 3f, 3f), 15f, 1);
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	}
	UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
	if (UNK_0xC844350D5D58C99A(iLocal_274[0]))
	{
		if (!UNK_0x437347B10A200C4B(iLocal_274[0], 0))
		{
			if (!func_267(uLocal_333, 8192))
			{
				UNK_0x01E4BB5190DF7317(iLocal_274[0], 1193033728, 0);
			}
			UNK_0xFADC0A217229F6B5(iLocal_274[0], true);
			if (!UNK_0x1C43D178459D5730(bLocal_72))
			{
				UNK_0xF63400DBE3303D26("BootyCall", &bLocal_72);
			}
			UNK_0x0E2400AB9174FA81(2, bLocal_72, joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(2, joaat("PLAYER"), bLocal_72);
			UNK_0x6DF7BF67E86AAE86(iLocal_274[0], bLocal_72);
		}
		UNK_0x6DAD7906B73F064D(&(iLocal_274[0]));
	}
	if (iLocal_332 != -1)
	{
		func_305(&iLocal_332);
	}
	if (bLocal_71)
	{
		func_143(&uLocal_70);
	}
	UNK_0xB008F1989AB372AF(UNK_0xD803B885F5E47A62(), 0);
	func_123(uLocal_76[0], -1);
	Global_110632 = 0;
	func_304(0);
	UNK_0x10FAF14A60A0DBE1();
}

void func_304(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_229(iVar0, bParam0);
		iVar0++;
	}
}

void func_305(int iParam0)
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

