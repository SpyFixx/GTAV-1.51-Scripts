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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	bool bLocal_53 = false;
	var uLocal_54 = 1;
	var uLocal_55 = 0;
	var uLocal_56 = 1;
	var uLocal_57 = 0;
	var uLocal_58 = 1;
	var uLocal_59 = 0;
	var uLocal_60 = 1;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 1;
	var uLocal_65 = 0;
	var uLocal_66 = 1;
	var uLocal_67 = 0;
	var uLocal_68 = 1;
	var uLocal_69 = 0;
	var uLocal_70 = 1;
	var uLocal_71 = 0;
	var uLocal_72 = 1;
	var uLocal_73 = 0;
	var uLocal_74 = 1;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 1;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	vector3 vLocal_82 = { 0f, 0f, 0f };
	var uLocal_85 = 0;
	var uLocal_86 = 1;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 1;
	var uLocal_91 = 0;
	var uLocal_92 = 1;
	var uLocal_93 = 0;
	var uLocal_94 = 1;
	var uLocal_95 = 0;
	var uLocal_96 = 1;
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
	int iLocal_119[1] = { 0 };
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 16;
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
	var uLocal_289 = 1;
	var uLocal_290 = 0;
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
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
	bLocal_53 = true;
	if (UNK_0x2EBF608FFE6CA406(66))
	{
		func_54();
	}
	SYSTEM::WAIT(0);
	func_53(ScriptParam_0);
	func_51();
	while (bLocal_53)
	{
		SYSTEM::WAIT(0);
		bLocal_53 = false;
		if (func_45(1, vLocal_82, 1.5f))
		{
			func_36(&uLocal_113, &uLocal_114, &uLocal_117, &uLocal_118, vLocal_82, "v_franklinshouse");
			if (func_35(126))
			{
				func_1(2, &uLocal_48, vLocal_82, 30f, 22.5f, 7.5f, &uLocal_66);
			}
			bLocal_53 = true;
		}
	}
	func_54();
}

int func_1(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, var uParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;

	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		return 0;
	}
	if (Global_93768 != -1)
	{
		return 0;
	}
	if (func_33(iParam0, func_34()))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_32(iVar0);
		if (!func_31(iVar1))
		{
			if (UNK_0xC844350D5D58C99A(Global_96222[iVar0]))
			{
				if (func_33(iParam0, func_30(iVar1)))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	bVar3 = 145;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (func_33(iParam0, func_30(iVar2)))
		{
			bVar3 = iVar2;
		}
		iVar2++;
	}
	if (!func_29(bVar3))
	{
		return 0;
	}
	if (!func_28(bVar3))
	{
		return 0;
	}
	switch (bVar3)
	{
		case 0:
			if (Global_4270062)
			{
				return 0;
			}
			break;
		case 1:
			break;
		case 2:
			break;
		default:
			return 0;
	}
	if (!func_16(bVar3, func_22()))
	{
		return 0;
	}
	switch (bVar3)
	{
		case 0:
			iVar4 = 0;
			break;
		case 1:
			iVar4 = 1;
			break;
		case 2:
			iVar4 = 2;
			break;
		default:
			return 0;
	}
	if (func_15(bVar3, iVar4) == 1)
	{
		return 0;
	}
	if (func_14(vParam5, 0f, 0f, 0f, 0))
	{
		vParam5 = { 50f, 50f, 50f };
	}
	vVar5 = { vParam2 - vParam5 };
	vVar8 = { vParam2 + vParam5 };
	func_13(vVar5, vVar8);
	func_12(vVar5, vVar8, &(uParam1->f_1));
	func_10(iParam0, uParam8);
	func_9(vVar5, vVar8);
	func_8(vVar5, vVar8, &(uParam1->f_4));
	if (Global_93767 != 8)
	{
		if (Global_93768 == -1)
		{
			iVar11 = -1;
			if (func_33(iParam0, func_34()))
			{
			}
			iVar12 = 5000;
			if (func_7())
			{
				switch (bVar3)
				{
					case 0:
						iVar11 = -181320640;
						break;
					case 1:
						iVar11 = 1418815087;
						break;
					case 2:
						iVar11 = 2087297077;
						break;
					default:
						return 0;
				}
				bVar13 = -1;
				switch (Global_93767)
				{
					case 0:
						iVar14 = 11;
						bVar13 = 3;
						break;
					case 1:
						iVar14 = 12;
						bVar13 = 3;
						break;
					case 4:
						iVar14 = 13;
						iVar12 = 10000;
						bVar13 = 3;
						break;
					case 6:
						iVar14 = 14;
						iVar12 = 10000;
						bVar13 = 3;
						break;
					case 7:
						iVar14 = 15;
						iVar12 = 10000;
						bVar13 = 3;
						break;
					case 2:
						iVar14 = 16;
						bVar13 = 3;
						break;
					case 3:
						iVar14 = 17;
						bVar13 = 3;
						break;
					case 5:
						iVar14 = 18;
						bVar13 = 3;
						break;
					default:
						return 0;
				}
				if ((iVar14 == 14 || iVar14 == 15) && !iVar11 == -181320640)
				{
					iVar14 = 13;
				}
				iVar16 = UNK_0x09AC81E49EA267F7(false, bVar13);
				switch (iVar16)
				{
					case 0:
						iVar15 = 19;
						break;
					case 1:
						iVar15 = 20;
						break;
					case 2:
						iVar15 = 21;
						break;
					case 3:
						iVar15 = 22;
						break;
					case 4:
						iVar15 = 23;
						break;
					default:
						return 0;
				}
				if (func_6(iVar11, iVar14, iVar15, 6, func_34(), bVar3, iVar12, 10000, -1, 0, -1, 0, 1))
				{
					Global_93768 = UNK_0x1C0640BA9A7327B3();
					return 1;
				}
			}
			else
			{
				switch (Global_93767)
				{
					case 0:
						switch (bVar3)
						{
							case 0:
								iVar11 = 2038672434;
								break;
							case 1:
								iVar11 = 975196153;
								break;
							case 2:
								iVar11 = 1127548000;
								break;
							default:
								return 0;
						}
						break;
					case 4:
						switch (bVar3)
						{
							case 0:
								iVar11 = 1666308520;
								break;
							case 1:
								iVar11 = -710274964;
								break;
							case 2:
								iVar11 = -1291788156;
								break;
							default:
								return 0;
						}
						iVar12 = 10000;
						break;
					case 6:
						switch (bVar3)
						{
							case 1:
								iVar11 = 1289879258;
								break;
							default:
								return 0;
						}
						break;
					case 3:
						switch (bVar3)
						{
							case 0:
								iVar11 = 1894462438;
								break;
							case 1:
								iVar11 = 1621076324;
								break;
							case 2:
								iVar11 = 1993031175;
								break;
							default:
								return 0;
						}
						break;
					case 1:
					case 2:
					case 5:
					case 7:
						return 0;
					default:
						return 0;
				}
				if (func_2(iVar11, 6, func_34(), bVar3, bVar3, iVar12, 10000, -1, -1, 0, -1, 0))
				{
					Global_93768 = UNK_0x1C0640BA9A7327B3();
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_2(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	bool bVar15;

	if (func_5(0))
	{
		return false;
	}
	if (iParam5 < 0)
	{
		return false;
	}
	if (iParam6 < 0)
	{
		return false;
	}
	if (iParam8 == 76)
	{
		return false;
	}
	if (iParam9 == 235)
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
	if (bParam4 < 3)
	{
		if (bParam4 != bParam3)
		{
			return false;
		}
	}
	if (bParam2 < 1 || bParam2 > 7)
	{
		return false;
	}
	if (Global_111638.f_7683.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_111638.f_7683.f_911 == Var0)
		{
			Global_111638.f_7683.f_911 = -1;
		}
		Var0.f_3 = func_4(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = bParam2;
		Var0.f_4 = (UNK_0x1C0640BA9A7327B3() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = bParam3;
		Var0.f_14 = bParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		UNK_0x0674E58A79778E99(&(Var0.f_1), true);
		UNK_0x0674E58A79778E99(&(Var0.f_1), false);
		if (iParam7 != -1)
		{
			UNK_0x5D96D8530B3D0904(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			UNK_0x5D96D8530B3D0904(&(Var0.f_1), 10);
		}
		Global_111638.f_7683[Global_111638.f_7683.f_136 /*15*/] = { Var0 };
		Global_111638.f_7683.f_136++;
		bVar15 = false;
		while (bVar15 < 3)
		{
			if (UNK_0xEAE0D21A50E6C7F4(bParam2, bVar15))
			{
				func_3(bVar15);
			}
			bVar15++;
		}
		return true;
	}
	return false;
}

void func_3(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_29(bParam0))
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

int func_4(int iParam0)
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

bool func_5(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

bool func_6(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<14> Var0;

	if (func_5(0))
	{
		return false;
	}
	if (iParam6 < 0)
	{
		return false;
	}
	if (iParam7 < 0)
	{
		return false;
	}
	if (iParam8 == 76)
	{
		return false;
	}
	if (iParam9 == 235)
	{
		return false;
	}
	if (bParam5 < 3)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, bParam5))
		{
			return false;
		}
	}
	if (bParam4 < 1 || bParam4 > 7)
	{
		return false;
	}
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return false;
	}
	if (Global_111638.f_7683.f_764 < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_4(iParam3);
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
		func_3(0);
		func_3(1);
		func_3(2);
		return true;
	}
	return false;
}

bool func_7()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return true;
	}
	return false;
}

void func_8(vector3 vParam0, vector3 vParam3, var uParam6)
{
	if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x623CCFCBD3F24CE4(vParam0, vParam3, 1, 1))
		{
			*uParam6++;
			if (*uParam6 > 6)
			{
				Global_93767 = 3;
			}
		}
		else if ((UNK_0x372F6F38C16E36DA(0, vParam0, vParam3) || UNK_0x372F6F38C16E36DA(2, vParam0, vParam3)) || UNK_0xBBE430A566D01EF3(vParam0, vParam3, joaat("WEAPON_GRENADELAUNCHER"), 1))
		{
			Global_93767 = 5;
		}
	}
}

void func_9(vector3 vParam0, vector3 vParam3)
{
	int iVar0;

	if (UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar0, 1))
	{
		if (iVar0 == joaat("WEAPON_MOLOTOV") || iVar0 == joaat("WEAPON_PETROLCAN"))
		{
			if (UNK_0x372F6F38C16E36DA(3, vParam0, vParam3))
			{
				Global_93767 = 2;
			}
		}
	}
}

void func_10(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		iVar1 = func_11(bVar0);
		if (iVar1 == 145)
		{
		}
		else if (iVar1 == func_22())
		{
		}
		else if (!func_33(iParam0, func_30(iVar1)))
		{
		}
		else if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("BAGGER"))
		{
			Global_93767 = 6;
		}
		else
		{
			Global_93767 = 4;
		}
		if (Global_93767 != 4)
		{
			iVar2 = 0;
			while (iVar2 < *uParam1)
			{
				if (bVar0 == (*uParam1)[iVar2])
				{
					iVar3 = UNK_0x134B62B726CEC8E6(bVar0);
					if (iVar3 == joaat("ISSI2"))
					{
						Global_93767 = 7;
					}
					if (iVar3 == joaat("SENTINEL2"))
					{
						Global_93767 = 6;
					}
				}
				iVar2++;
			}
		}
	}
}

int func_11(bool bParam0)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 145;
	}
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == bParam0)
			{
				return Global_96085[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_12(vector3 vParam0, vector3 vParam3, var uParam6)
{
	if ((UNK_0x82F88FD400E98881(UNK_0x16F2683693E537C9()) || UNK_0xC379FAA7E9DFE7A4(UNK_0x16F2683693E537C9(), 0)) || UNK_0x5F596B0E13677FE9(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x62438065F1C29508(UNK_0x16F2683693E537C9(), vParam0, vParam3, 0, 1, 0))
		{
			if (*uParam6 < 0)
			{
				*uParam6 = UNK_0x1C0640BA9A7327B3();
			}
			else if (UNK_0x1C0640BA9A7327B3() > *uParam6 + 10000)
			{
				Global_93767 = 1;
			}
		}
		else
		{
			*uParam6 = -1;
		}
	}
	else
	{
		*uParam6 = -1;
	}
}

void func_13(vector3 vParam0, vector3 vParam3)
{
	int iVar0;

	if (UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar0, 1))
	{
		if (iVar0 == joaat("WEAPON_RPG"))
		{
			if (UNK_0xBBE430A566D01EF3(vParam0, vParam3, iVar0, 1))
			{
				Global_93767 = 0;
			}
		}
	}
}

bool func_14(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_15(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[bParam0 /*29*/].f_12[iParam1];
}

bool func_16(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	bVar0 = func_21();
	if ((bParam0 >= bVar0 || bParam1 >= bVar0) || bParam0 == bParam1)
	{
		return false;
	}
	iVar1 = func_19(bParam0);
	iVar2 = func_19(bParam1);
	if (iVar1 != 7 && iVar2 != 7)
	{
		iVar3 = func_18(iVar1, iVar2);
		if (iVar3 != 10)
		{
			if (func_17(iVar3) != -1)
			{
				return true;
			}
		}
	}
	return false;
}

int func_17(int iParam0)
{
	if (iParam0 < 9)
	{
		return Global_94600[iParam0 /*2*/];
	}
	return -1;
}

int func_18(int iParam0, int iParam1)
{
	int iVar0;

	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
				case 1:
					return 0;
				case 2:
					return 2;
				case 3:
					return 10;
				case 4:
					return 5;
				case 5:
					return 8;
				default:
					return 10;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 10;
				case 2:
					return 1;
				case 3:
					return 3;
				case 4:
					return 6;
				case 5:
					return 10;
				default:
					return 10;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
				case 1:
					return 1;
				case 2:
					return 10;
				case 3:
					return 4;
				case 4:
					return 7;
				case 5:
					return 10;
				default:
					return 10;
			}
			break;
	}
	return 10;
}

int func_19(bool bParam0)
{
	if (bParam0 == 145)
	{
		return 7;
	}
	if (bParam0 < func_21())
	{
		return func_20(bParam0);
	}
	if (bParam0 == 144)
	{
		return 7;
	}
	if (bParam0 == func_21())
	{
		return 6;
	}
	if (bParam0 == 168)
	{
		return 6;
	}
	return 6;
}

var func_20(bool bParam0)
{
	return Global_1798[bParam0 /*29*/].f_11;
}

int func_21()
{
	if (Global_30768 == 0 || Global_30768 == 2)
	{
		return 167;
	}
	return 161;
}

int func_22()
{
	func_23();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_23()
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_26(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			bVar0 = func_25(UNK_0x16F2683693E537C9());
			if (func_29(bVar0) && (!func_24(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != bVar0 && func_29(Global_111638.f_2358.f_539.f_4321))
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

int func_25(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(bool bParam0)
{
	if (func_29(bParam0))
	{
		return func_27(bParam0);
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

var func_27(bool bParam0)
{
	return Global_1798[bParam0 /*29*/];
}

bool func_28(bool bParam0)
{
	if (func_29(bParam0))
	{
		if ((Global_111638.f_9080 || Global_3) || func_5(0))
		{
			return Global_111638.f_2358.f_539.f_2348[bParam0];
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_29(bool bParam0)
{
	return bParam0 < 3;
}

bool func_30(int iParam0)
{
	switch (iParam0)
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

bool func_31(int iParam0)
{
	func_23();
	return iParam0 == Global_111638.f_2358.f_539.f_4321;
}

int func_32(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	return 145;
}

bool func_33(bool bParam0, bool bParam1)
{
	return (bParam0 && bParam1) != 0;
}

bool func_34()
{
	func_23();
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

bool func_35(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_36(var uParam0, bool bParam1, var uParam2, var uParam3, vector3 vParam4, bool bParam7)
{
	int iVar0;
	vector3 vVar1;

	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		return;
	}
	if (!*uParam0)
	{
		if (!func_44(bParam1))
		{
			*uParam0 = 1;
		}
		else if (func_41(bParam1, 1f))
		{
			*uParam0 = 1;
		}
	}
	else if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		*uParam2 = UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9());
		if (!UNK_0xEA6BC48857E0AC4C(bParam7))
		{
			if (!UNK_0x31609A585163CBAC(*uParam3))
			{
				*uParam3 = UNK_0x0D1736C2E221BCEA(vParam4, bParam7);
			}
		}
		func_38(bParam1);
		*uParam0 = 0;
	}
	if (UNK_0x31609A585163CBAC(*uParam2) && UNK_0xBD307E66C0669BFC(*uParam2))
	{
		if (*uParam2 == *uParam3)
		{
			if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
			{
				return;
			}
			UNK_0x38C3A68D7861DCFD(0, 47, 1);
			UNK_0x38C3A68D7861DCFD(0, 38, 1);
			UNK_0x38C3A68D7861DCFD(0, 22, 1);
			UNK_0x38C3A68D7861DCFD(0, 46, 1);
			UNK_0x38C3A68D7861DCFD(0, 25, 1);
			UNK_0x38C3A68D7861DCFD(0, 140, 1);
			UNK_0x38C3A68D7861DCFD(0, 141, 1);
			UNK_0x38C3A68D7861DCFD(0, 142, 1);
			UNK_0x38C3A68D7861DCFD(0, 143, 1);
			UNK_0x38C3A68D7861DCFD(0, 142, 1);
			if (UNK_0x6C3F127AAF415E69() == 4)
			{
				UNK_0x38C3A68D7861DCFD(0, 21, 1);
			}
			UNK_0x38C3A68D7861DCFD(0, 69, 1);
			UNK_0x38C3A68D7861DCFD(0, 70, 1);
			UNK_0x38C3A68D7861DCFD(0, 68, 1);
			UNK_0x38C3A68D7861DCFD(0, 92, 1);
			UNK_0x38C3A68D7861DCFD(0, 99, 1);
			UNK_0x38C3A68D7861DCFD(0, 115, 1);
			UNK_0x38C3A68D7861DCFD(0, 37, 1);
			UNK_0x38C3A68D7861DCFD(0, 99, 1);
			UNK_0x38C3A68D7861DCFD(0, 100, 1);
			if (UNK_0x7FEE810EE9E768EB(0, 37))
			{
				if (!Global_111638.f_18509.f_17)
				{
					func_37("FAM_WEAPDIS", -1);
					Global_111638.f_18509.f_17 = 1;
				}
				*uParam2 = UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9());
				if (!UNK_0xEA6BC48857E0AC4C(bParam7))
				{
					if (!UNK_0x31609A585163CBAC(*uParam3))
					{
						*uParam3 = UNK_0x0D1736C2E221BCEA(vParam4, bParam7);
					}
				}
				func_38(bParam1);
				*uParam0 = 0;
			}
			if (UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar0, 1))
			{
				if (iVar0 != joaat("WEAPON_UNARMED") && iVar0 != joaat("OBJECT"))
				{
					UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
				}
			}
			if (UNK_0xC4AEA6B98479242E(UNK_0x16F2683693E537C9(), &iVar0))
			{
				if (iVar0 != joaat("WEAPON_UNARMED") && iVar0 != joaat("OBJECT"))
				{
					UNK_0x40B4CC38578A6E32(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"));
				}
			}
		}
		else if (!UNK_0xEA6BC48857E0AC4C(bParam7))
		{
			vVar1 = { UNK_0x9CC20386CF817594(*uParam2, 0f, 0f, 0f) };
			if (SYSTEM::VDIST2(vParam4, vVar1) < (5f * 5f))
			{
				if (!UNK_0x31609A585163CBAC(*uParam3))
				{
					*uParam3 = *uParam2;
				}
			}
		}
	}
}

void func_37(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_38(bool bParam0)
{
	func_39(bParam0, 0f);
}

void func_39(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_40(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

float func_40(bool bParam0)
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

bool func_41(bool bParam0, float fParam1)
{
	if (func_44(bParam0))
	{
		if (func_42(bParam0) > fParam1)
		{
			return true;
		}
	}
	return false;
}

float func_42(bool bParam0)
{
	if (func_44(bParam0))
	{
		if (func_43(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_40(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return bParam0->f_1;
}

bool func_43(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, 2);
}

bool func_44(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, true);
}

bool func_45(int iParam0, vector3 vParam1, float fParam4)
{
	if (!func_46(iParam0))
	{
		return false;
	}
	if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vParam1, 1) >= (100f * fParam4))
	{
		return false;
	}
	if (Global_98794)
	{
		return false;
	}
	return true;
}

bool func_46(int iParam0)
{
	if (!UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (((func_48(0) || func_48(3)) || func_48(2)) || func_48(14))
	{
		if (UNK_0x991B1F0980C62628())
		{
			if (UNK_0x19EC8D83154D7CC1() != 3)
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (func_47())
	{
		if (UNK_0x991B1F0980C62628())
		{
			if (UNK_0x19EC8D83154D7CC1() != 3)
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (UNK_0x2C1AA3A291786CDC())
	{
		return false;
	}
	if (UNK_0xD4A2BF1975E2C50F() && Global_111628)
	{
		return false;
	}
	if (!func_31(iParam0))
	{
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_2[27 /*3*/], true))
	{
		return false;
	}
	return true;
}

bool func_47()
{
	if (Global_95666 != -1)
	{
		return true;
	}
	return false;
}

int func_48(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_49(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_49(int iParam0)
{
	return func_50(iParam0, Global_41431);
}

int func_50(int iParam0, int iParam1)
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

void func_51()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_119[iVar0] = 0;
		iVar0++;
	}
	func_52(&uLocal_124, 0, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
}

void func_52(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_53(struct<4> Param0)
{
	vLocal_82 = { Param0 };
	uLocal_85 = Param0.f_3;
}

void func_54()
{
	int iVar0;
	int iVar1;

	func_60(&uLocal_289, &uLocal_66, &uLocal_54, &uLocal_68, &uLocal_70, &uLocal_56, &uLocal_58, &uLocal_92, &uLocal_94, &uLocal_96);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = func_59(iVar0);
		if (iVar1 < 15)
		{
			if (Global_93750[iVar1] != 141)
			{
				func_58(iVar1);
				Global_93750[iVar1] = 141;
			}
			func_55(iVar1);
		}
		iVar0++;
	}
	UNK_0x21387C9EECC2B220(false);
	UNK_0x10FAF14A60A0DBE1();
}

void func_55(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = func_57(iParam0, &bVar0);
	if (iVar1 != 145)
	{
		if (func_29(iVar1))
		{
			bVar0 = func_26(iVar1);
		}
		else
		{
			bVar0 = func_56(iVar1);
		}
	}
	UNK_0x71199B01895C6202(bVar0);
}

int func_56(int iParam0)
{
	if (!func_29(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_57(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 0:
			return 14;
		case 1:
			return 15;
		case 2:
			return 17;
		case 5:
			return 44;
		case 6:
			return 19;
		case 7:
			return 37;
		case 10:
			return 20;
		case 8:
			return 0;
		case 9:
			return 2;
		case 11:
			return 40;
		case 12:
			*iParam1 = joaat("S_F_M_MAID_01");
			return 145;
		case 13:
			return 32;
		case 14:
			return 24;
		case 3:
			*iParam1 = joaat("S_F_M_MAID_01");
			return 145;
		case 4:
			*iParam1 = joaat("S_M_M_GARDENER_01");
			return 145;
		case 15:
			return func_21();
	}
	return 145;
}

void func_58(int iParam0)
{
	switch (Global_93750[iParam0])
	{
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
			break;
		default:
			Global_111638.f_18509[iParam0] = Global_93750[iParam0];
			break;
	}
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16;
		case 1:
			return 15;
	}
	return 16;
}

void func_60(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	int iVar0;
	char cVar1[64];
	int iVar17;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (UNK_0x69DF961355195C3C((*uParam0)[iVar0]))
		{
			UNK_0xB46854F2D1C7DFA9((*uParam0)[iVar0]);
		}
		(*uParam0)[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_86((*uParam1)[iVar0], "familyVeh", iVar0))
		{
			UNK_0xA954465BA6FDEFE2(uParam1[iVar0]);
		}
		if (UNK_0xC844350D5D58C99A((*uParam1)[iVar0]) && UNK_0x9C77D2D0559097F0((*uParam1)[iVar0], 1))
		{
			UNK_0x046C362CF15F1935(uParam1[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_85(4, (*uParam2)[iVar0]))
		{
			func_84(4, (*uParam2)[iVar0], 0);
		}
		if (*uParam2)[iVar0] != UNK_0x16F2683693E537C9()
		{
			if (func_86((*uParam2)[iVar0], "familyPed", iVar0))
			{
				UNK_0xEBA53F35D0085654(uParam2[iVar0]);
			}
			func_83(uParam2[iVar0]);
		}
		if (UNK_0xC844350D5D58C99A((*uParam3)[iVar0]))
		{
			if (UNK_0xD59B17D2DFF98E26((*uParam3)[iVar0]))
			{
				UNK_0x15AFB6CBDE990FB6((*uParam3)[iVar0], 1, true);
			}
		}
		if (func_86((*uParam3)[iVar0], "familyProp", iVar0))
		{
			UNK_0xF690C84DADBB3551(uParam3[iVar0]);
		}
		if (UNK_0xC844350D5D58C99A((*uParam3)[iVar0]) && UNK_0x9C77D2D0559097F0((*uParam3)[iVar0], 1))
		{
			UNK_0xEEEE2E5FA6F78DF0(uParam3[iVar0]);
		}
		if (func_86((*uParam5)[iVar0], "familyExtraPed", iVar0))
		{
			UNK_0xEBA53F35D0085654(uParam5[iVar0]);
		}
		if (UNK_0xC844350D5D58C99A((*uParam5)[iVar0]) && UNK_0x9C77D2D0559097F0((*uParam5)[iVar0], 1))
		{
			UNK_0x6DAD7906B73F064D(uParam5[iVar0]);
		}
		if ((*uParam4)[iVar0] != 0)
		{
			UNK_0x71199B01895C6202((*uParam4)[iVar0]);
		}
		if ((*uParam6)[iVar0] != 0)
		{
			UNK_0x71199B01895C6202((*uParam6)[iVar0]);
		}
		func_82(uParam7[iVar0], uParam8[iVar0], uParam9[iVar0 /*16*/]);
		iVar0++;
	}
	iVar17 = 0;
	while (iVar17 < 139)
	{
		StringCopy(&cVar1, "", 64);
		if (func_81(iVar17, &cVar1))
		{
			UNK_0x8D17794CE3273D70(&cVar1);
		}
		iVar17++;
	}
	func_78();
	func_74();
	func_61(-181320640);
	func_61(1418815087);
	func_61(2087297077);
	func_61(313472619);
	func_61(2038672434);
	func_61(1666308520);
	func_61(1894462438);
	func_61(1728635625);
	func_61(975196153);
	func_61(-710274964);
	func_61(1289879258);
	func_61(1621076324);
	func_61(1005256598);
	func_61(1127548000);
	func_61(-1291788156);
	func_61(1993031175);
	Global_93767 = 8;
	Global_93768 = -1;
}

int func_61(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (Global_111638.f_7683[iVar0 /*15*/] == iParam0)
		{
			if (Global_41978 != iVar0)
			{
				func_73(iVar0);
				func_65(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_198)
	{
		if (Global_111638.f_7683.f_137[iVar0 /*15*/] == iParam0)
		{
			func_65(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_650)
	{
		if (Global_111638.f_7683.f_199[iVar0 /*15*/] == iParam0)
		{
			func_64(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_764)
	{
		if (Global_111638.f_7683.f_651[iVar0 /*14*/] == iParam0)
		{
			func_63(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_866)
	{
		if (Global_111638.f_7683.f_765[iVar0 /*10*/] == iParam0)
		{
			func_62(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_62(int iParam0)
{
	int iVar0;
	struct<10> Var1;

	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_866)
	{
		return;
	}
	if (Global_111638.f_7683.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_111638.f_7683.f_866 - 2))
		{
			Global_111638.f_7683.f_765[iVar0 /*10*/] = { Global_111638.f_7683.f_765[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_111638.f_7683.f_866 > 0)
	{
		Global_111638.f_7683.f_765[(Global_111638.f_7683.f_866 - 1) /*10*/] = { Var1 };
		Global_111638.f_7683.f_866 = (Global_111638.f_7683.f_866 - 1);
	}
}

void func_63(int iParam0)
{
	int iVar0;
	struct<14> Var1;

	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_764)
	{
		return;
	}
	if (Global_111638.f_7683.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_111638.f_7683.f_764 - 2))
		{
			Global_111638.f_7683.f_651[iVar0 /*14*/] = { Global_111638.f_7683.f_651[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_111638.f_7683.f_764 > 0)
	{
		Global_111638.f_7683.f_651[(Global_111638.f_7683.f_764 - 1) /*14*/] = { Var1 };
		Global_111638.f_7683.f_764 = (Global_111638.f_7683.f_764 - 1);
	}
	func_3(0);
	func_3(1);
	func_3(2);
}

void func_64(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;

	iVar15 = 0;
	while (iVar15 < Global_111638.f_7683.f_650)
	{
		if (Global_111638.f_7683.f_199[iVar15 /*15*/] == iParam0)
		{
			iVar16 = iVar15;
			while (iVar16 <= (Global_111638.f_7683.f_650 - 2))
			{
				Global_111638.f_7683.f_199[iVar16 /*15*/] = { Global_111638.f_7683.f_199[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_111638.f_7683.f_199[(Global_111638.f_7683.f_650 - 1) /*15*/] = { Var0 };
			Global_111638.f_7683.f_650 = (Global_111638.f_7683.f_650 - 1);
			return;
		}
		iVar15++;
	}
}

void func_65(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;

	iVar15 = 0;
	while (iVar15 < Global_111638.f_7683.f_198)
	{
		if (Global_111638.f_7683.f_137[iVar15 /*15*/] == iParam0)
		{
			func_66(Global_111638.f_7683.f_137[iVar15 /*15*/].f_6);
			iVar16 = iVar15;
			while (iVar16 <= (Global_111638.f_7683.f_198 - 2))
			{
				Global_111638.f_7683.f_137[iVar16 /*15*/] = { Global_111638.f_7683.f_137[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_111638.f_7683.f_137[(Global_111638.f_7683.f_198 - 1) /*15*/] = { Var0 };
			Global_111638.f_7683.f_198 = (Global_111638.f_7683.f_198 - 1);
			return;
		}
		iVar15++;
	}
}

int func_66(int iParam0)
{
	int iVar0;

	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (func_72(iParam0, Global_19486) == 1)
		{
			func_71(iParam0, Global_19486, 0);
			if (func_70(iParam0, Global_19486) == 0)
			{
				iVar0 = Global_19486;
				func_67(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_67(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_69(iParam0, iVar0, 0);
			func_68(iParam0, iVar0, 0);
		}
	}
}

void func_68(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_69(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_70(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	Global_1798[iParam0 /*29*/].f_19[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_19[iParam1] = iParam2;
	}
}

int func_72(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_19[iParam1];
}

void func_73(int iParam0)
{
	bool bVar0;
	bool bVar1;
	struct<15> Var2;

	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_136)
	{
		return;
	}
	bVar1 = Global_111638.f_7683[iParam0 /*15*/].f_2;
	if (Global_111638.f_7683.f_136 > 1)
	{
		bVar0 = iParam0;
		while (bVar0 <= (Global_111638.f_7683.f_136 - 2))
		{
			Global_111638.f_7683[bVar0 /*15*/] = { Global_111638.f_7683[bVar0 + 1 /*15*/] };
			bVar0++;
		}
	}
	if (Global_111638.f_7683.f_136 > 0)
	{
		Global_111638.f_7683[(Global_111638.f_7683.f_136 - 1) /*15*/] = { Var2 };
		Global_111638.f_7683.f_136 = (Global_111638.f_7683.f_136 - 1);
	}
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bVar1, bVar0))
		{
			func_3(bVar0);
		}
		bVar0++;
	}
}

void func_74()
{
	if (func_77(4))
	{
		func_76(4, 0);
		func_75(4);
	}
	if (func_77(5))
	{
		func_76(5, 0);
		func_75(5);
	}
	if (func_77(0))
	{
		func_76(0, 0);
		func_75(0);
	}
}

void func_75(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_30828[iParam0 /*11*/].f_4 = 1;
	}
}

void func_76(int iParam0, int iParam1)
{
	Global_30828[iParam0 /*11*/].f_10 = iParam1;
}

bool func_77(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_30828[iParam0 /*11*/].f_5)
		{
			return true;
		}
	}
	return false;
}

int func_78()
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	int iVar22;
	int iVar23;
	bool bVar24;

	bVar0 = false;
	vVar1 = { 0f, 0f, 0f };
	iVar4 = 226;
	iVar5 = 825812850;
	iVar22 = 0;
	iVar23 = 0;
	while (iVar23 < 11)
	{
		func_80(iVar23, &bVar0, &vVar1, &iVar4, &iVar5, &cVar6, &iVar22);
		if (UNK_0xBF75E4DF4C367CD9(vVar1, 10f, bVar0, 0))
		{
			bVar24 = UNK_0x4B72871A3BE7B474(vVar1, 10f, bVar0, 0, 0, 1);
			if (UNK_0xC844350D5D58C99A(bVar24))
			{
				if (iVar5 == 825812850)
				{
					UNK_0xC023D1C4BF532815(bVar24, 0f, 0f, 21f, 2, 1);
				}
				UNK_0xEEEE2E5FA6F78DF0(&bVar24);
			}
		}
		if (iVar4 != 226)
		{
		}
		else if (!UNK_0x76395FF5E8D5E643(iVar5))
		{
		}
		else
		{
			UNK_0x1BA7FCEAFCE8D46E(iVar5, 3, true, true);
			UNK_0x838CC054A9235BEC(iVar5, 0f, true, true);
			if (((iVar23 != 6 && iVar23 != 7) && iVar23 != 8) && iVar23 != 9)
			{
				UNK_0xA4A8625CC710BC1F(iVar5);
			}
		}
		iVar23++;
	}
	func_79(4, 0);
	return 0;
}

void func_79(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_40554[iParam0 /*31*/].f_1), 6);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_40554[iParam0 /*31*/].f_1), 6);
	}
}

void func_80(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("V_ILEV_MM_DOORSON");
			*uParam2 = { -806.8f, 174f, 76.9f };
			StringCopy(sParam5, "V_Michael_1_Son", 64);
			*iParam3 = 226;
			*iParam4 = 1850241841;
			*iParam6 = 0;
			break;
		case 1:
			*iParam1 = joaat("V_ILEV_MM_DOORDAUGHTER");
			*uParam2 = { -802.7f, 176.2f, 76.9f };
			StringCopy(sParam5, "V_Michael_1_Daught", 64);
			*iParam3 = 226;
			*iParam4 = -378388578;
			*iParam6 = 0;
			break;
		case 2:
			*iParam1 = joaat("V_ILEV_MM_DOORW");
			*uParam2 = { -805f, 171.9f, 76.9f };
			StringCopy(sParam5, "V_Michael_1_WC", 64);
			*iParam3 = 226;
			*iParam4 = -1223666875;
			*iParam6 = 0;
			break;
		case 3:
			*iParam1 = joaat("V_ILEV_MM_DOORW");
			*uParam2 = { -809.281f, 177.855f, 76.89f };
			StringCopy(sParam5, "V_Michael_1_WC", 64);
			*iParam3 = 226;
			*iParam4 = 1893421006;
			*iParam6 = 0;
			break;
		case 4:
			*iParam1 = joaat("V_ILEV_MM_FRIDGE_L");
			*uParam2 = { -804.1f, 185.8f, 72.7f };
			StringCopy(sParam5, "V_Michael_G_Kitche", 64);
			*iParam3 = 226;
			*iParam4 = 825812850;
			*iParam6 = 1;
			break;
		case 5:
			*iParam1 = joaat("V_ILEV_MM_FRIDGE_R");
			*uParam2 = { -802.8f, 186.3f, 72.7f };
			StringCopy(sParam5, "V_Michael_G_Kitche", 64);
			*iParam3 = 226;
			*iParam4 = 825812850;
			*iParam6 = 1;
			break;
		case 6:
			*iParam1 = joaat("PROP_BH1_48_BACKDOOR_L");
			*uParam2 = { -796.5657f, 177.2214f, 73.0405f };
			StringCopy(sParam5, "V_Michael_G_Kitche", 64);
			*iParam3 = 41;
			*iParam4 = 776026812;
			*iParam6 = 1;
			break;
		case 7:
			*iParam1 = joaat("PROP_BH1_48_BACKDOOR_R");
			*uParam2 = { -794.5051f, 178.0124f, 73.0405f };
			StringCopy(sParam5, "V_Michael_G_Kitche", 64);
			*iParam3 = 42;
			*iParam4 = 698422331;
			*iParam6 = 1;
			break;
		case 8:
			*iParam1 = joaat("V_ILEV_MM_DOORM_L");
			*uParam2 = { -817f, 179f, 73f };
			StringCopy(sParam5, "V_Michael_G_Front", 64);
			*iParam3 = 38;
			*iParam4 = -2097039789;
			*iParam6 = 1;
			break;
		case 9:
			*iParam1 = joaat("V_ILEV_MM_DOORM_R");
			*uParam2 = { -816f, 178f, 73f };
			StringCopy(sParam5, "V_Michael_G_Front", 64);
			*iParam3 = 39;
			*iParam4 = -2127416656;
			*iParam6 = 1;
			break;
		case 10:
			*iParam1 = joaat("V_ILEV_TREV_DOORBATH");
			*uParam2 = { -1150.158f, -1518.768f, 10.781f };
			StringCopy(sParam5, "rm_bathroom", 64);
			*iParam3 = 226;
			*iParam4 = 2007032394;
			*iParam6 = 0;
			break;
		default:
			*iParam1 = 0;
			*uParam2 = { 0f, 0f, 0f };
			StringCopy(sParam5, "NULL", 64);
			*iParam3 = 226;
			*iParam4 = 825812850;
			*iParam6 = 0;
			break;
	}
}

bool func_81(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_12", 64);
			return true;
		case 2:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_9", 64);
			return true;
		case 3:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_9", 64);
			return true;
		case 4:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_10", 64);
			return true;
		case 18:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_3@BASE", 64);
			return true;
		case 5:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_2@IG_2_P2", 64);
			return true;
		case 21:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_2@IG_2_P2", 64);
			return true;
		case 9:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
			return true;
		case 11:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_5@BASE", 64);
			return true;
		case 12:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_9_2@", 64);
			return true;
		case 13:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_9_7@", 64);
			return true;
		case 14:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_9_8@", 64);
			return true;
		case 15:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_9_11@", 64);
			return true;
		case 16:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_1@BASE", 64);
			return true;
		case 17:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_4@BASE", 64);
			return true;
		case 20:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_2", 64);
			return true;
		case 24:
			StringCopy(sParam1, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
			return true;
		case 19:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SOFA", 64);
			return true;
		case 25:
			StringCopy(sParam1, "TIMETABLE@JIMMY@MICS3_IG_15@", 64);
			return true;
		case 26:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_3@BASE", 64);
			return true;
		case 32:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_5@BASE", 64);
			return true;
		case 33:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_8@BASE", 64);
			return true;
		case 38:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_7@BASE", 64);
			return true;
		case 34:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_2@IDLE_A", 64);
			return true;
		case 35:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_15@BASE", 64);
			return true;
		case 37:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_4@", 64);
			return true;
		case 36:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_1@BASE", 64);
			return true;
		case 28:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_14@", 64);
			return true;
		case 43:
			StringCopy(sParam1, "TIMETABLE@TRACY@SLEEP@", 64);
			return true;
		case 44:
			StringCopy(sParam1, "TIMETABLE@TRACY@FAMR_IG_4", 64);
			return true;
		case 29:
			StringCopy(sParam1, "TIMETABLE@TRACY@FAMR_IG_4", 64);
			return true;
		case 30:
			StringCopy(sParam1, "TIMETABLE@TRACY@FAMR_IG_4", 64);
			return true;
		case 45:
			StringCopy(sParam1, "TIMETABLE@TRACY@FAMR_IG_5", 64);
			return true;
		case 47:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_9", 64);
			return true;
		case 48:
			StringCopy(sParam1, "TIMETABLE@AMANDA@FACEMASK@BASE", 64);
			return true;
		case 68:
			StringCopy(sParam1, "TIMETABLE@AMANDA@FACEMASK@BASE", 64);
			return true;
		case 50:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_4", 64);
			return true;
		case 69:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_4", 64);
			return true;
		case 51:
			StringCopy(sParam1, "TIMETABLE@AMANDA@MAGDEMO_IG_2_SYNCED", 64);
			return true;
		case 52:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_7", 64);
			return true;
		case 67:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_7", 64);
			return true;
		case 53:
			StringCopy(sParam1, "TIMETABLE@AMANDA@DRUNK_IN_KITCHEN@", 64);
			return true;
		case 54:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_5", 64);
			return true;
		case 70:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_5", 64);
			return true;
		case 64:
			StringCopy(sParam1, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
			return true;
		case 55:
			StringCopy(sParam1, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
			return true;
		case 71:
			StringCopy(sParam1, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
			return true;
		case 56:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_2_P2", 64);
			return true;
		case 57:
			StringCopy(sParam1, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
			return true;
		case 58:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_3", 64);
			return true;
		case 59:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_11", 64);
			return true;
		case 72:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_11", 64);
			return true;
		case 60:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_11", 64);
			return true;
		case 61:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_6", 64);
			return true;
		case 63:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_6", 64);
			return true;
		case 62:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_6", 64);
			return true;
		case 65:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM", 64);
			return true;
		case 66:
			StringCopy(sParam1, "SWITCH@MICHAEL@GETS_READY", 64);
			return true;
		case 73:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_6", 64);
			return true;
		case 74:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_7", 64);
			return true;
		case 76:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_SURFACE@BASE", 64);
			return true;
		case 78:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_SURFACE@BASE", 64);
			return true;
		case 85:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_SURFACE@BASE", 64);
			return true;
		case 77:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_SURFACE_1@", 64);
			return true;
		case 79:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_WINDOW@BASE", 64);
			return true;
		case 86:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_WINDOW@BASE", 64);
			return true;
		case 80:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_WINDOW@BASE", 64);
			return true;
		case 81:
			StringCopy(sParam1, "TIMETABLE@MAID@IG_2@", 64);
			return true;
		case 82:
			StringCopy(sParam1, "TIMETABLE@MAID@IG_8@", 64);
			return true;
		case 83:
			StringCopy(sParam1, "TIMETABLE@MAID@IG_8@", 64);
			return true;
		case 89:
			StringCopy(sParam1, "TIMETABLE@GARDENER@CLEAN_POOL@", 64);
			return true;
		case 90:
			StringCopy(sParam1, "TIMETABLE@GARDENER@LAWNMOW@", 64);
			return true;
		case 91:
			StringCopy(sParam1, "TIMETABLE@GARDENER@FILLING_CAN", 64);
			return true;
		case 94:
			StringCopy(sParam1, "TIMETABLE@DENICE@IG_1", 64);
			return true;
		case 95:
			StringCopy(sParam1, "TIMETABLE@DENICE@IG_2", 64);
			return true;
		case 96:
			StringCopy(sParam1, "TIMETABLE@DENICE@IG_3", 64);
			return true;
		case 98:
			StringCopy(sParam1, "TIMETABLE@DENICE@IG_3", 64);
			return true;
		case 97:
			StringCopy(sParam1, "TIMETABLE@DENICE@IG_4", 64);
			break;
		case 100:
			StringCopy(sParam1, "TIMETABLE@RON@HAND_RADIO_IG_1", 64);
			return true;
		case 101:
			StringCopy(sParam1, "TIMETABLE@RON@IG_2", 64);
			return true;
		case 119:
			StringCopy(sParam1, "TIMETABLE@RON@IG_2", 64);
			return true;
		case 102:
			StringCopy(sParam1, "TIMETABLE@RON@IG_3_COUCH", 64);
			return true;
		case 103:
			StringCopy(sParam1, "TIMETABLE@RON@IG_3_COUCH", 64);
			return true;
		case 104:
			StringCopy(sParam1, "TIMETABLE@RON@IG_4_SMOKING_METH", 64);
			return true;
		case 105:
			StringCopy(sParam1, "TIMETABLE@RON@MOONSHINE_IG_5", 64);
			return true;
		case 106:
			StringCopy(sParam1, "TIMETABLE@RON@IG_6", 64);
			return true;
		case 107:
			StringCopy(sParam1, "TIMETABLE@MICHAEL@ON_CHAIRIDLE_A", 64);
			return true;
		case 108:
			StringCopy(sParam1, "TIMETABLE@MICHAEL@ON_CLUBCHAIRBASE", 64);
			return true;
		case 109:
			StringCopy(sParam1, "TIMETABLE@MICHAEL@ON_SOFABASE", 64);
			return true;
		case 110:
			StringCopy(sParam1, "TIMETABLE@MICHAEL@TALK_PHONEbase", 64);
			return true;
		case 111:
			StringCopy(sParam1, "TIMETABLE@MICHAEL@TALK_PHONEEXIT_A", 64);
			return true;
		case 116:
			StringCopy(sParam1, "TIMETABLE@TREVOR@IG_1", 64);
			return true;
		case 117:
			StringCopy(sParam1, "TIMETABLE@TREVOR@TRV_IG_2", 64);
			return true;
		case 112:
			StringCopy(sParam1, "TIMETABLE@TREVOR@SMOKING_METH@BASE", 64);
			return true;
		case 113:
			StringCopy(sParam1, "TIMETABLE@TREVOR@ON_THE_TOILET", 64);
			return true;
		case 114:
			StringCopy(sParam1, "TIMETABLE@TREVOR@GRENADE_THROWING", 64);
			return true;
		case 115:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			return true;
		case 118:
			StringCopy(sParam1, "TIMETABLE@RON@IG_1", 64);
			return true;
		case 120:
			StringCopy(sParam1, "TIMETABLE@RON@IG_3", 64);
			return true;
		case 121:
			StringCopy(sParam1, "TIMETABLE@RON@IG_4", 64);
			return true;
		case 122:
			StringCopy(sParam1, "TIMETABLE@PATRICIA@PAT_IG_1", 64);
			return true;
		case 123:
			StringCopy(sParam1, "TIMETABLE@PATRICIA@PAT_IG_2@BASE", 64);
			return true;
		case 124:
			StringCopy(sParam1, "TIMETABLE@PATRICIA@PAT_IG_3@", 64);
			return true;
		case 126:
			StringCopy(sParam1, "TIMETABLE@FLOYD@CLEAN_KITCHEN@BASE", 64);
			return true;
		case 127:
			StringCopy(sParam1, "TIMETABLE@FLOYD@CRYINGONBED@BASE", 64);
			return true;
		case 130:
			StringCopy(sParam1, "TIMETABLE@FLOYD@CALLING", 64);
			return true;
		case 131:
			StringCopy(sParam1, "TIMETABLE@FLOYD@ENDING_CALL", 64);
			return true;
		case 132:
			StringCopy(sParam1, "TIMETABLE@FLOYD@HIDING_BEHIND_COUCH", 64);
			return true;
		case 133:
			StringCopy(sParam1, "TIMETABLE@FLOYD@HIDING_BEHIND_COUCH", 64);
			return true;
		case 134:
			StringCopy(sParam1, "TIMETABLE@FLOYD@HIDING_BEHIND_COUCH", 64);
			return true;
		case 135:
			StringCopy(sParam1, "TIMETABLE@FLOYD@CRYINGONBED_IG_5@", 64);
			return true;
	}
	StringCopy(sParam1, "", 64);
	return false;
}

int func_82(var uParam0, var uParam1, char* sParam2)
{
	UNK_0xE96F19797E59AB06();
	if ((*uParam0 == 0 && *uParam1 == -1) && UNK_0xEA6BC48857E0AC4C(sParam2))
	{
		return 0;
	}
	if (*uParam0 != 0)
	{
		UNK_0xE96F19797E59AB06();
		*uParam0 = 0;
	}
	if (*uParam1 != -1)
	{
		UNK_0x55D0A2DB35045A35(*uParam1);
		*uParam1 = -1;
	}
	if (!UNK_0xEA6BC48857E0AC4C(sParam2))
	{
		UNK_0x42740B44BA8D7B43(sParam2);
		if (UNK_0x7F8A39872A07D2CE(sParam2, "AFT_SON_PORN"))
		{
			UNK_0x7352ACF3368DF65F("DisableReplayScriptStreamRecording", 0);
		}
	}
	StringCopy(sParam2, "", 64);
	return 1;
}

void func_83(bool bParam0)
{
	if (!UNK_0xEB6A8945D1AC98A1(*bParam0))
	{
		if (UNK_0xD1960163A3042274(*bParam0, -2017877118) != 0)
		{
			UNK_0xFADC0A217229F6B5(*bParam0, true);
		}
	}
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (UNK_0x9C77D2D0559097F0(*bParam0, 1))
		{
			UNK_0x6DAD7906B73F064D(bParam0);
		}
	}
	else
	{
		UNK_0x6DAD7906B73F064D(bParam0);
	}
}

void func_84(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	if (!bParam2)
	{
		if (!UNK_0xC844350D5D58C99A(bParam1))
		{
			return;
		}
	}
	if (Global_40554[iParam0 /*31*/].f_24 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_40554[iParam0 /*31*/].f_24)
	{
		if (bVar1)
		{
			Global_40554[iParam0 /*31*/].f_25[(iVar0 - 1)] = Global_40554[iParam0 /*31*/].f_25[iVar0];
			Global_40554[iParam0 /*31*/].f_25[iVar0] = 0;
		}
		else if (bParam1 == Global_40554[iParam0 /*31*/].f_25[iVar0])
		{
			Global_40554[iParam0 /*31*/].f_25[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_40554[iParam0 /*31*/].f_24 = (Global_40554[iParam0 /*31*/].f_24 - 1);
	}
}

bool func_85(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40554[iParam0 /*31*/].f_24)
	{
		if (iParam1 == Global_40554[iParam0 /*31*/].f_25[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_86(bool bParam0, char* sParam1, int iParam2)
{
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return false;
	}
	if (UNK_0x3E653638C7A26115() == 64 && UNK_0x134B62B726CEC8E6(bParam0) != joaat("PROP_BONG_01"))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0) && !UNK_0x9C77D2D0559097F0(bParam0, 1))
		{
			UNK_0x73270B3C9CC833FD(bParam0, true, 0);
		}
		return true;
	}
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0xE2F1E99DD161A861(bParam0) && UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), UNK_0x96A5FE5834B81CE7(bParam0), 0))
			{
				return false;
			}
		}
	}
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (!UNK_0x9C77D2D0559097F0(bParam0, 1))
		{
			return false;
		}
		if (UNK_0x134B62B726CEC8E6(bParam0) == joaat("PROP_BONG_01"))
		{
			return false;
		}
	}
	if (Global_98794)
	{
		return true;
	}
	if (UNK_0x757EF87A33649210())
	{
		return true;
	}
	if (func_87() || UNK_0x2C1AA3A291786CDC())
	{
		if (UNK_0x0A059E0DB9253280(bParam0))
		{
			return false;
		}
		return true;
	}
	sParam1 = sParam1;
	iParam2 = iParam2;
	return false;
}

int func_87()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

