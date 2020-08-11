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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	struct<66> Local_37 = { 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 16;
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
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	char[] cLocal_274[8] = 0;
	var uLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	bool bLocal_278 = false;
	bool bLocal_279 = false;
	bool bLocal_280 = false;
	var uLocal_281[2] = { 0, 0 };
	var uLocal_284[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_291[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_298[6] = { 0, 0, 0, 0, 0, 0 };
	bool bLocal_305 = false;
	bool bLocal_306 = false;
	bool bLocal_307 = false;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_272 = -1;
	iLocal_273 = -1;
	StringCopy(&cLocal_274, "PMGAUD", 8);
	iLocal_276 = -1;
	iLocal_277 = -1;
	UNK_0x7798376279BB5369(1);
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		func_62(2);
		func_61();
	}
	func_54();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_53())
		{
			iLocal_273 = -1;
		}
		else if (iLocal_273 == -1)
		{
			iLocal_273 = UNK_0x1C0640BA9A7327B3();
		}
		func_1();
	}
}

void func_1()
{
	char cVar0[16];
	int iVar4;
	bool bVar5;
	bool bVar6;

	switch (iLocal_36)
	{
		case 0:
			UNK_0xD7992BEF7A9D109E("PGANG", false);
			if (UNK_0x67C1D9E5B91B2E37(false))
			{
				iVar4 = 0;
				while (iVar4 <= 5)
				{
					if (UNK_0xC844350D5D58C99A(Global_110348.f_225[iVar4]))
					{
						uLocal_284[iVar4] = Global_110348.f_225[iVar4];
						Global_110348.f_225[iVar4] = 0;
						UNK_0x73270B3C9CC833FD(uLocal_284[iVar4], true, 1);
						if (bLocal_307 == 0)
						{
							bLocal_307 = UNK_0x134B62B726CEC8E6(uLocal_284[iVar4]);
						}
						if (!UNK_0xEB6A8945D1AC98A1(uLocal_284[iVar4]))
						{
							UNK_0x6DF7BF67E86AAE86(uLocal_284[iVar4], bLocal_305);
							UNK_0x3CC33E4E9CE523F4(uLocal_284[iVar4], 1);
							UNK_0xB35CCEC0D4946813(uLocal_284[iVar4], 0);
							UNK_0x298903DD96203C2C(uLocal_284[iVar4], 5);
							UNK_0x26A6B1686E33113F(uLocal_284[iVar4], 1);
							func_52(uLocal_284[iVar4], 20f, 5f, 90f, -80f, 80f);
							if (iLocal_106 == 0)
							{
								UNK_0x3CC33E4E9CE523F4(uLocal_284[iVar4], 2);
							}
							iLocal_298[iVar4] = func_49(uLocal_284[iVar4], 1, 145);
						}
					}
					iVar4++;
				}
				iVar4 = 0;
				while (iVar4 <= 1)
				{
					if (UNK_0xC844350D5D58C99A(Global_110348.f_222[iVar4]))
					{
						uLocal_281[iVar4] = Global_110348.f_222[iVar4];
						Global_110348.f_222[iVar4] = 0;
						UNK_0x73270B3C9CC833FD(uLocal_281[iVar4], true, 1);
						if (bLocal_306 == 0)
						{
							bLocal_306 = UNK_0x134B62B726CEC8E6(uLocal_281[iVar4]);
						}
					}
					iVar4++;
				}
				StringCopy(&cVar0, "START_", 16);
				StringConCat(&cVar0, &(Local_37.f_61), 16);
				func_48(&cVar0, 7500, 1);
				iLocal_36++;
			}
			break;
		case 1:
			bVar6 = true;
			iVar4 = 0;
			while (iVar4 <= 5)
			{
				if (!bVar5)
				{
					if (uLocal_291[iVar4] > 0)
					{
						bVar5 = true;
					}
				}
				if (UNK_0xC844350D5D58C99A(uLocal_284[iVar4]) && !UNK_0xEB6A8945D1AC98A1(uLocal_284[iVar4]))
				{
					bVar6 = false;
				}
				iVar4++;
			}
			if (bVar5)
			{
				UNK_0x34FABD75496259E4(UNK_0xD803B885F5E47A62());
			}
			if (bVar6)
			{
				if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
				{
					if (!bLocal_278)
					{
						func_48("LOSE_WANTED", 7500, 1);
						bLocal_278 = true;
					}
				}
				else
				{
					func_47();
				}
			}
			break;
	}
	switch (iLocal_106)
	{
		case 1:
			func_45();
			break;
		case 0:
			func_9();
			break;
	}
	iVar4 = 0;
	while (iVar4 <= 5)
	{
		if (UNK_0xC844350D5D58C99A(uLocal_284[iVar4]))
		{
			if (UNK_0xEB6A8945D1AC98A1(uLocal_284[iVar4]))
			{
				UNK_0x6DAD7906B73F064D(&(uLocal_284[iVar4]));
			}
			else if (func_6(uLocal_284[iVar4], func_7(func_8()), 1) > 100f && func_5(UNK_0x16F2683693E537C9(), uLocal_284[iVar4], 1) > 300f)
			{
				func_4();
			}
			else if (bLocal_280 && func_6(uLocal_284[iVar4], func_7(func_8()), 1) > 50f)
			{
				if (func_2())
				{
					if (!bLocal_279)
					{
						StringCopy(&cVar0, "ESC_", 16);
						StringConCat(&cVar0, &(Local_37.f_61), 16);
						func_48(&cVar0, 7500, 1);
						bLocal_279 = true;
					}
				}
			}
		}
		if (UNK_0xE4EDC4B0E92C078B(iLocal_298[iVar4]))
		{
			if (!UNK_0xC844350D5D58C99A(uLocal_284[iVar4]) || UNK_0xEB6A8945D1AC98A1(uLocal_284[iVar4]))
			{
				UNK_0x142CC44DB769B57E(&(iLocal_298[iVar4]));
			}
		}
		iVar4++;
	}
}

bool func_2()
{
	if (UNK_0xD17F06053799A7CA())
	{
		return false;
	}
	if (UNK_0x04E6B3EAA8742BFA())
	{
		if (func_53() && !func_3())
		{
			return false;
		}
	}
	return true;
}

bool func_3()
{
	if (Global_21816 == 1)
	{
		return true;
	}
	return false;
}

void func_4()
{
	func_62(2);
	func_61();
}

float func_5(bool bParam0, bool bParam1, int iParam2)
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

float func_6(bool bParam0, vector3 vParam1, int iParam4)
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

Vector3 func_7(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2147.317f, 4795.208f, 40.08961f;
		case 9:
			return 1524.329f, -2108.269f, 75.7248f;
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
		case 1:
			return 898.3718f, -177.0764f, 72.68348f;
		case 4:
			return 1191.302f, 2672.064f, 36.73154f;
		case 3:
			return -1584.333f, 5193.487f, 2.95912f;
		case 0:
			return 408.3429f, -1623.836f, 28.29278f;
		case 8:
			return -1339.489f, -21.19435f, 50.34566f;
		case 5:
			return 336.207f, 172.4251f, 102.2055f;
		case 6:
			return 394.5495f, -703.3795f, 28.27281f;
		case 7:
			return -1413.184f, -206.0555f, 46.29474f;
		case 11:
			return -560.3809f, 274.5476f, 82.02014f;
		case 12:
			return 221.0845f, 340.7849f, 104.5883f;
		case 13:
			return -296.7154f, 6259.732f, 30.49339f;
		case 14:
			return -2201.402f, 4291f, 47.32429f;
	}
	return 10f, 10f, 10f;
}

int func_8()
{
	return Global_110348.f_20;
}

void func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[16];

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (UNK_0xC844350D5D58C99A(uLocal_284[iVar0]) && !UNK_0xEB6A8945D1AC98A1(uLocal_284[iVar0]))
		{
			switch (uLocal_291[iVar0])
			{
				case 0:
					if (func_43(iVar0))
					{
						iLocal_272 = 0;
						uLocal_291[iVar0]++;
					}
					break;
				case 1:
					iVar2 = 0;
					iVar1 = 0;
					while (iVar1 <= 5)
					{
						if (UNK_0xC844350D5D58C99A(uLocal_284[iVar1]) && !UNK_0xEB6A8945D1AC98A1(uLocal_284[iVar1]))
						{
							iVar2++;
						}
						iVar1++;
					}
					if (iVar2 <= 2)
					{
						uLocal_291[iVar0]++;
					}
					break;
				case 2:
					break;
			}
			if (uLocal_291[iVar0] > 0)
			{
				iVar3 = 0;
				UNK_0xCAE036C45E7FC720(uLocal_284[iVar0], &iVar3, 1);
				if (iVar3 == joaat("WEAPON_MOLOTOV"))
				{
					if (UNK_0x440C646F2F11A2A1(uLocal_284[iVar0], joaat("WEAPON_MICROSMG"), 0))
					{
						UNK_0x5745EA6329A91E29(uLocal_284[iVar0], joaat("WEAPON_MICROSMG"), true);
					}
					else
					{
						UNK_0x262EF6C6306BEA6C(uLocal_284[iVar0], joaat("WEAPON_MICROSMG"), -1, true, true);
					}
				}
			}
			switch (uLocal_291[iVar0])
			{
				case 0:
					func_39(uLocal_284[iVar0], Local_37[iVar0 /*10*/].f_4);
					break;
				case 1:
					if (!func_38(uLocal_284[iVar0], 780511057, 1))
					{
						UNK_0x6C3AE6E278DB3D0E(uLocal_284[iVar0], UNK_0x16F2683693E537C9(), 0, 16);
					}
					break;
				case 2:
					if (!func_38(uLocal_284[iVar0], 1805844857, 1))
					{
						UNK_0xF3268524E9BE6D6E(uLocal_284[iVar0], UNK_0x16F2683693E537C9(), 1000f, -1, 1, 0);
					}
					break;
			}
		}
		iVar0++;
	}
	switch (iLocal_272)
	{
		case 0:
			if (func_37())
			{
				iVar4 = func_36();
				if (iVar4 != -1 && !UNK_0x65636D4556D82155(uLocal_284[iVar4]))
				{
					func_34(uLocal_284[iVar4], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_272++;
				}
			}
			break;
		case 1:
			if (func_37())
			{
				cVar5 = { func_33("START") };
				if (func_10(&uLocal_107, &cLocal_274, &cVar5, 8, 0, 0, 0))
				{
					StringCopy(&cVar5, "", 16);
					iLocal_272++;
				}
			}
			break;
		case 2:
			if (func_37())
			{
				iVar4 = func_36();
				if (iVar4 != -1 && !UNK_0x65636D4556D82155(uLocal_284[iVar4]))
				{
					func_34(uLocal_284[iVar4], "SHOUT_THREATEN", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_272++;
				}
			}
			break;
		case 3:
			if ((func_37() && (UNK_0x1C0640BA9A7327B3() - iLocal_273) > 3000) && !UNK_0x65636D4556D82155(UNK_0x16F2683693E537C9()))
			{
				func_34(UNK_0x16F2683693E537C9(), "BLIND_RAGE", 10);
				iLocal_272++;
			}
			break;
		case 4:
			if (func_37() && (UNK_0x1C0640BA9A7327B3() - iLocal_273) > 1000)
			{
				iVar4 = func_36();
				if (iVar4 != -1 && !UNK_0x65636D4556D82155(uLocal_284[iVar4]))
				{
					if (uLocal_291[iVar4] == 2)
					{
						func_34(uLocal_284[iVar4], "GENERIC_INSULT", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_272 = (iLocal_272 - 1);
					}
					else
					{
						func_34(uLocal_284[iVar4], "SHOUT_THREATEN", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_272 = (iLocal_272 - 1);
					}
				}
			}
			break;
	}
}

bool func_10(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_11(sParam2, iParam3, 0);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
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
					func_31();
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
		if (func_30(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_29();
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
				func_21();
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
				if (func_20())
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
			if (func_19())
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
			func_18();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_17();
		func_12();
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
		func_31();
	}
	return 0;
}

void func_12()
{
	if (!func_13())
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

bool func_13()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_16())
	{
		return false;
	}
	if (func_14(UNK_0xD803B885F5E47A62()))
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

bool func_14(int iParam0)
{
	return func_15(iParam0, 20);
}

bool func_15(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_16()
{
	return -1;
}

void func_17()
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

void func_18()
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

bool func_19()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_20()
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

void func_21()
{
	if (func_28(14))
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
		Global_19486 = func_22();
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

int func_22()
{
	func_23();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_23()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_26(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_25(UNK_0x16F2683693E537C9());
			if (func_24(iVar0) && (!func_28(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_24(Global_111638.f_2358.f_539.f_4321))
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

bool func_24(int iParam0)
{
	return iParam0 < 3;
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

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_27(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_28(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_29()
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

bool func_30(bool bParam0, int iParam1)
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

void func_31()
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

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_33(char* sParam0)
{
	struct<4> Var0;

	StringCopy(&Var0, sParam0, 16);
	switch (func_22())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

void func_34(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_35(iParam2), 1);
}

int func_35(int iParam0)
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

int func_36()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar0 = -1;
	fVar2 = 999999f;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (UNK_0xC844350D5D58C99A(uLocal_284[iVar1]) && !UNK_0xEB6A8945D1AC98A1(uLocal_284[iVar1]))
		{
			fVar3 = func_5(uLocal_284[iVar1], UNK_0x16F2683693E537C9(), 1);
			if (fVar3 < 30f && fVar3 < fVar2)
			{
				iVar0 = iVar1;
				fVar2 = fVar3;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_37()
{
	if (func_53())
	{
		return false;
	}
	if (UNK_0x04E6B3EAA8742BFA())
	{
		if (UNK_0xD17F06053799A7CA())
		{
			return false;
		}
	}
	return true;
}

bool func_38(bool bParam0, int iParam1, bool bParam2)
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

void func_39(bool bParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	UNK_0xCAE036C45E7FC720(bParam0, &iVar0, 1);
	if (!func_42(vParam1))
	{
		UNK_0xCAE036C45E7FC720(bParam0, &iVar1, 1);
		if (iVar0 == joaat("WEAPON_MOLOTOV"))
		{
			if (iVar1 != joaat("WEAPON_MOLOTOV"))
			{
				UNK_0x5745EA6329A91E29(bParam0, joaat("WEAPON_MOLOTOV"), true);
			}
			if (UNK_0xD1960163A3042274(bParam0, 242628503) != 1 && UNK_0xD1960163A3042274(bParam0, 242628503) != 0)
			{
				UNK_0xDD353D0E9C789D0E(&iVar2);
				UNK_0x93D47DFD0AE94949(false, UNK_0x09AC81E49EA267F7(1000, 6000));
				UNK_0x8A51557EEC28BFF9(false, func_40(vParam1, 1f), 0, 0);
				UNK_0x93D47DFD0AE94949(false, UNK_0x09AC81E49EA267F7(1000, 6000));
				UNK_0x8A51557EEC28BFF9(false, func_40(vParam1, 1f), 0, 0);
				UNK_0x93D47DFD0AE94949(false, UNK_0x09AC81E49EA267F7(1000, 6000));
				UNK_0x8A51557EEC28BFF9(false, func_40(vParam1, 1f), 0, 0);
				UNK_0x93D47DFD0AE94949(false, UNK_0x09AC81E49EA267F7(1000, 6000));
				UNK_0x8A51557EEC28BFF9(false, func_40(vParam1, 1f), 0, 0);
				UNK_0x93D47DFD0AE94949(false, UNK_0x09AC81E49EA267F7(1000, 6000));
				UNK_0x8A51557EEC28BFF9(false, func_40(vParam1, 1f), 0, 0);
				UNK_0x93D47DFD0AE94949(false, UNK_0x09AC81E49EA267F7(1000, 6000));
				UNK_0x8A51557EEC28BFF9(false, func_40(vParam1, 1f), 0, 0);
				UNK_0x93D47DFD0AE94949(false, UNK_0x09AC81E49EA267F7(1000, 6000));
				UNK_0x8A51557EEC28BFF9(false, func_40(vParam1, 1f), 0, 0);
				UNK_0x93D47DFD0AE94949(false, UNK_0x09AC81E49EA267F7(1000, 6000));
				UNK_0x8A51557EEC28BFF9(false, func_40(vParam1, 1f), 0, 0);
				UNK_0x25644C31B4B6E9F3(iVar2, 1);
				UNK_0x75ABDC5F81978924(iVar2);
				UNK_0x78ADC381772E3D54(bParam0, iVar2);
				UNK_0xF82EA857DA10E0CD(&iVar2);
			}
		}
		else if (UNK_0xD1960163A3042274(bParam0, -653332088) != 1 && UNK_0xD1960163A3042274(bParam0, -653332088) != 0)
		{
			UNK_0xD43A968A9357B799(bParam0, vParam1, -1, joaat("FIRING_PATTERN_BURST_FIRE"));
		}
	}
	else if (UNK_0xD1960163A3042274(bParam0, -982327190) != 1 && UNK_0xD1960163A3042274(bParam0, -982327190) != 0)
	{
		UNK_0x93D47DFD0AE94949(bParam0, -1);
	}
}

Vector3 func_40(vector3 vParam0, float fParam3)
{
	vector3 vVar0;

	vVar0 = { UNK_0x79833B02DBD2A244(-1f, 1f), UNK_0x79833B02DBD2A244(-1f, 1f), UNK_0x79833B02DBD2A244(-1f, 1f) };
	return vParam0 + func_41(vVar0, UNK_0x79833B02DBD2A244(0f, fParam3));
}

Vector3 func_41(vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_42(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_43(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((UNK_0xC844350D5D58C99A(uLocal_284[iVar0]) && !UNK_0xEB6A8945D1AC98A1(uLocal_284[iVar0])) && uLocal_291[iVar0] > 0)
		{
			bLocal_280 = true;
		}
		iVar0++;
	}
	if (((((((((((func_44(Global_110348.f_35, 134217728) || UNK_0xE115347EA59F7B86(uLocal_284[iParam0], UNK_0x16F2683693E537C9())) || UNK_0x8B674081D2209D07(UNK_0xD803B885F5E47A62(), uLocal_284[iParam0])) || UNK_0x688A90832774AB83(uLocal_284[iParam0])) || UNK_0xD3DCEC81D13AAFB1(UNK_0x68F4C0EC296D3901(uLocal_284[iParam0], true), 15f, true)) || UNK_0xD15F544473A95FE8(UNK_0x68F4C0EC296D3901(uLocal_284[iParam0], true), 15f, 1, 1)) || UNK_0x681F21BF9F7B449B(21, UNK_0x68F4C0EC296D3901(uLocal_284[iParam0], true), 15f)) || UNK_0x681F21BF9F7B449B(10, UNK_0x68F4C0EC296D3901(uLocal_284[iParam0], true), 15f)) || UNK_0x681F21BF9F7B449B(7, UNK_0x68F4C0EC296D3901(uLocal_284[iParam0], true), 15f)) || UNK_0x681F21BF9F7B449B(0, UNK_0x68F4C0EC296D3901(uLocal_284[iParam0], true), 15f)) || UNK_0x681F21BF9F7B449B(1, UNK_0x68F4C0EC296D3901(uLocal_284[iParam0], true), 15f)) || bLocal_280)
	{
		return true;
	}
	return false;
}

bool func_44(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_45()
{
	int iVar0;
	var uVar1[2];
	int iVar4;
	vector3 vVar5[24];
	int iVar11;
	bool bVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	char cVar20[16];

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (UNK_0xC844350D5D58C99A(uLocal_281[iVar0]) && UNK_0xDF1306B443CD3D15(uLocal_281[iVar0], 0))
		{
			iVar4 = 0;
			while (iVar4 <= 5)
			{
				if (UNK_0xC844350D5D58C99A(uLocal_284[iVar4]) && !UNK_0xEB6A8945D1AC98A1(uLocal_284[iVar4]))
				{
					if (Local_37[iVar4 /*10*/].f_8 != -1 && Local_37[iVar4 /*10*/].f_8 == iVar0)
					{
						if (!UNK_0xC42A92762C58E1B9(uLocal_284[iVar4], uLocal_281[iVar0], 0))
						{
							uVar1[iVar0]++;
						}
					}
				}
				iVar4++;
			}
		}
		StringCopy(&cVar5, "iPedsGettingToVeh[", 24);
		StringIntConCat(&cVar5, iVar0, 24);
		StringConCat(&cVar5, "]: ", 24);
		StringIntConCat(&cVar5, uVar1[iVar0], 24);
		UNK_0x26F63FD28070F2CE(&cVar5, 0.05f, (0.25f + (IntToFloat(iVar0) * 0.025f)), 0f, 255, 255, 255, 255);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (UNK_0xC844350D5D58C99A(uLocal_284[iVar0]) && !UNK_0xEB6A8945D1AC98A1(uLocal_284[iVar0]))
		{
			switch (uLocal_291[iVar0])
			{
				case 0:
					if (func_43(iVar0))
					{
						iLocal_272 = 0;
						uLocal_291[iVar0]++;
					}
					break;
				case 1:
					if (Local_37[iVar0 /*10*/].f_8 == -1)
					{
						if (!UNK_0x24129324CD7C13D0(uLocal_284[iVar0], 286, 1))
						{
							UNK_0x4E885A246A9D983A(uLocal_284[iVar0], 286, true);
						}
					}
					else
					{
						bVar12 = false;
						if (UNK_0x405E212DDE472467(uLocal_284[iVar0], 0))
						{
							iVar13 = UNK_0x6937EA2286828455(uLocal_284[iVar0], 0);
							iVar11 = 0;
							while (iVar11 <= 1)
							{
								if (!bVar12)
								{
									if (uLocal_281[iVar11] == iVar13)
									{
										if (uVar1[iVar11] == 0)
										{
											bVar12 = true;
										}
									}
								}
								iVar11++;
							}
							if (bVar12)
							{
								if (iLocal_276 == -1 && func_46(uLocal_284[iVar0], 0) == -1)
								{
									iLocal_276 = iVar0;
								}
								uLocal_291[iVar0]++;
							}
						}
					}
					break;
				case 2:
					if (iLocal_276 != -1)
					{
						iLocal_277 = iLocal_276;
						if (UNK_0xC844350D5D58C99A(uLocal_284[iLocal_276]))
						{
							if (UNK_0x405E212DDE472467(uLocal_284[iLocal_276], 0))
							{
								bVar14 = UNK_0x6937EA2286828455(uLocal_284[iLocal_276], 0);
							}
						}
					}
					if ((((((((iLocal_276 == -1 || !UNK_0xC844350D5D58C99A(uLocal_284[iLocal_276])) || UNK_0xEB6A8945D1AC98A1(uLocal_284[iLocal_276])) || !UNK_0xC844350D5D58C99A(bVar14)) || !UNK_0xDF1306B443CD3D15(bVar14, 0)) || UNK_0x464B3D84B739AE72(bVar14, false, 1)) || UNK_0x464B3D84B739AE72(bVar14, true, 1)) || UNK_0x464B3D84B739AE72(bVar14, 4, 1)) || UNK_0x464B3D84B739AE72(bVar14, 5, 1))
					{
						iVar15 = -1;
						bVar16 = false;
						iVar11 = 0;
						while (iVar11 <= 5)
						{
							if (UNK_0xC844350D5D58C99A(uLocal_284[iVar11]) && !UNK_0xEB6A8945D1AC98A1(uLocal_284[iVar11]))
							{
								if (func_46(uLocal_284[iVar11], 0) == -1)
								{
									if (iVar15 == -1 || !bVar16)
									{
										bVar16 = true;
										iVar15 = iVar11;
									}
								}
								else if (!bVar16)
								{
									iVar15 = iVar11;
								}
							}
							iVar11++;
						}
						if (iVar15 != -1)
						{
							iLocal_276 = iVar15;
						}
					}
					break;
			}
			if (uLocal_291[iVar0] > 0)
			{
				iVar17 = 0;
				UNK_0xCAE036C45E7FC720(uLocal_284[iVar0], &iVar17, 1);
				if (iVar17 == joaat("WEAPON_MOLOTOV"))
				{
					if (UNK_0x440C646F2F11A2A1(uLocal_284[iVar0], joaat("WEAPON_MICROSMG"), 0))
					{
						UNK_0x5745EA6329A91E29(uLocal_284[iVar0], joaat("WEAPON_MICROSMG"), true);
					}
					else
					{
						UNK_0x262EF6C6306BEA6C(uLocal_284[iVar0], joaat("WEAPON_MICROSMG"), -1, true, true);
					}
				}
			}
			switch (uLocal_291[iVar0])
			{
				case 0:
					func_39(uLocal_284[iVar0], Local_37[iVar0 /*10*/].f_4);
					break;
				case 1:
					if (Local_37[iVar0 /*10*/].f_8 == -1)
					{
						if (!func_38(uLocal_284[iVar0], 780511057, 1))
						{
							UNK_0x6C3AE6E278DB3D0E(uLocal_284[iVar0], UNK_0x16F2683693E537C9(), 0, 16);
						}
					}
					else if (uLocal_281[Local_37[iVar0 /*10*/].f_8] == 0 || Local_37[iVar0 /*10*/].f_9 == -2)
					{
					}
					else if (!UNK_0xC42A92762C58E1B9(uLocal_284[iVar0], uLocal_281[Local_37[iVar0 /*10*/].f_8], 0))
					{
						if (func_5(uLocal_284[iVar0], uLocal_281[Local_37[iVar0 /*10*/].f_8], 1) > 4f)
						{
							if (!func_38(uLocal_284[iVar0], 780511057, 1))
							{
								UNK_0x5BCC146C60688877(uLocal_284[iVar0], uLocal_281[Local_37[iVar0 /*10*/].f_8], 0f, 0f, 0f, 4f, 0);
								UNK_0x6C3AE6E278DB3D0E(uLocal_284[iVar0], UNK_0x16F2683693E537C9(), 0, 16);
							}
						}
						else if (!func_38(uLocal_284[iVar0], -1794415470, 1))
						{
							UNK_0x5B1D360B9C6F0A09(uLocal_284[iVar0], uLocal_281[Local_37[iVar0 /*10*/].f_8], -1, Local_37[iVar0 /*10*/].f_9, 2f, 1, 0);
						}
					}
					else if (!func_38(uLocal_284[iVar0], 538064912, 1))
					{
						UNK_0x7A3479BFA16439E6(uLocal_284[iVar0], UNK_0x16F2683693E537C9(), 1101004800 /* Float: 20f */);
					}
					break;
				case 2:
					if (UNK_0x405E212DDE472467(uLocal_284[iVar0], 0))
					{
						if (iLocal_276 == iVar0)
						{
							if (func_46(uLocal_284[iVar0], 0) != -1)
							{
								if (!func_38(uLocal_284[iVar0], 355471868, 1))
								{
									UNK_0x16A6C233289238AA(uLocal_284[iVar0], UNK_0x6937EA2286828455(uLocal_284[iVar0], 0), 0);
								}
							}
							else if (!func_38(uLocal_284[iVar0], -1273030092, 1) || iLocal_276 != iLocal_277)
							{
								UNK_0x89258193691A7600(uLocal_284[iVar0], UNK_0x6937EA2286828455(uLocal_284[iVar0], 0), UNK_0x16F2683693E537C9(), 8, 40f, 786468, 1000f, 0f, 1);
							}
							else if (UNK_0xD1960163A3042274(uLocal_284[iVar0], -1273030092) == 1)
							{
								if (!UNK_0x6B4464DA5794D055(uLocal_284[iVar0]))
								{
									UNK_0xFFDDE8CC59EB6D40(uLocal_284[iVar0], UNK_0x16F2683693E537C9(), false, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
								}
							}
						}
						else if (func_46(uLocal_284[iVar0], 0) == -1)
						{
							if (!func_38(uLocal_284[iVar0], -1273030092, 1) || iLocal_276 != iLocal_277)
							{
								UNK_0x9412BCBFE7F69F94(uLocal_284[iVar0], UNK_0x6937EA2286828455(uLocal_284[iVar0], 0), UNK_0x6937EA2286828455(uLocal_284[iLocal_276], 0), -1, 40f, 786468, -1082130432, 20, 20f);
							}
							else if (UNK_0xD1960163A3042274(uLocal_284[iVar0], -1273030092) == 1)
							{
								if (!UNK_0x6B4464DA5794D055(uLocal_284[iVar0]))
								{
									UNK_0xFFDDE8CC59EB6D40(uLocal_284[iVar0], UNK_0x16F2683693E537C9(), false, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
								}
							}
						}
						else
						{
							bVar18 = UNK_0xA30B8362589C124A(UNK_0x6937EA2286828455(uLocal_284[iVar0], 0), -1, 0);
							if (!UNK_0xC844350D5D58C99A(bVar18) || UNK_0xEB6A8945D1AC98A1(bVar18))
							{
								if (!func_38(uLocal_284[iVar0], 355471868, 1))
								{
									UNK_0x16A6C233289238AA(uLocal_284[iVar0], UNK_0x6937EA2286828455(uLocal_284[iVar0], 0), 0);
								}
							}
							else if (!func_38(uLocal_284[iVar0], 2104565373, 1) || iLocal_276 != iLocal_277)
							{
								UNK_0xFFDDE8CC59EB6D40(uLocal_284[iVar0], UNK_0x16F2683693E537C9(), false, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
							}
						}
					}
					break;
			}
		}
		iVar0++;
	}
	switch (iLocal_272)
	{
		case 0:
			if (func_37())
			{
				iVar19 = func_36();
				if (iVar19 != -1 && !UNK_0x65636D4556D82155(uLocal_284[iVar19]))
				{
					func_34(uLocal_284[iVar19], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar20, "", 16);
					iLocal_272++;
				}
			}
			break;
		case 1:
			if (func_37())
			{
				cVar20 = { func_33("START") };
				if (func_10(&uLocal_107, &cLocal_274, &cVar20, 8, 0, 0, 0))
				{
					StringCopy(&cVar20, "", 16);
					iLocal_272++;
				}
			}
			break;
		case 2:
			if (func_37())
			{
				iVar19 = func_36();
				if (iVar19 != -1 && !UNK_0x65636D4556D82155(uLocal_284[iVar19]))
				{
					func_34(uLocal_284[iVar19], "SHOUT_THREATEN", 10);
					StringCopy(&cVar20, "", 16);
					iLocal_272++;
				}
			}
			break;
		case 3:
			if ((func_37() && (UNK_0x1C0640BA9A7327B3() - iLocal_273) > 3000) && !UNK_0x65636D4556D82155(UNK_0x16F2683693E537C9()))
			{
				func_34(UNK_0x16F2683693E537C9(), "BLIND_RAGE", 10);
				iLocal_272++;
			}
			break;
		case 4:
			if (func_37() && (UNK_0x1C0640BA9A7327B3() - iLocal_273) > 1000)
			{
				iVar19 = func_36();
				if (iVar19 != -1 && !UNK_0x65636D4556D82155(uLocal_284[iVar19]))
				{
					if (UNK_0x405E212DDE472467(uLocal_284[iVar19], 0))
					{
						func_34(uLocal_284[iVar19], "GENERIC_INSULT", 10);
						StringCopy(&cVar20, "", 16);
						iLocal_272 = (iLocal_272 - 1);
					}
					else
					{
						func_34(uLocal_284[iVar19], "SHOUT_THREATEN", 10);
						StringCopy(&cVar20, "", 16);
						iLocal_272 = (iLocal_272 - 1);
					}
				}
			}
			break;
	}
}

bool func_46(bool bParam0, int iParam1)
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

void func_47()
{
	func_62(1);
	func_61();
}

void func_48(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

int func_49(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_50(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_50(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_51(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_51(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_51(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_51(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_52(bool bParam0, bool bParam1, float fParam2, float fParam3, float fParam4, float fParam5)
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

bool func_53()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_54()
{
	int iVar0;

	switch (func_22())
	{
		case 0:
			func_60(&uLocal_107, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
			break;
		case 1:
			func_60(&uLocal_107, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
			break;
		case 2:
			func_60(&uLocal_107, 2, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
			break;
	}
	UNK_0x51B096AAC60548C1(0.1f);
	UNK_0x15EA7F4313456B1D(3, false);
	UNK_0x060F249A9A3E3F4E(false);
	iLocal_106 = func_58();
	switch (func_8())
	{
		case 11:
			iVar0 = 0;
			break;
		case 12:
			iVar0 = 1;
			break;
		case 13:
			iVar0 = 2;
			break;
		case 14:
			iVar0 = 0;
			break;
	}
	func_57(&(Local_37[0 /*10*/]), func_8(), 0);
	func_57(&(Local_37[1 /*10*/]), func_8(), 1);
	func_57(&(Local_37[2 /*10*/]), func_8(), 2);
	func_57(&(Local_37[3 /*10*/]), func_8(), 3);
	func_57(&(Local_37[4 /*10*/]), func_8(), 4);
	func_57(&(Local_37[5 /*10*/]), func_8(), 5);
	StringCopy(&(Local_37.f_61), func_56(iVar0), 16);
	StringCopy(&(Local_37.f_65), func_55(iVar0), 16);
	UNK_0xF63400DBE3303D26("relGang", &bLocal_305);
	UNK_0x0E2400AB9174FA81(5, joaat("PLAYER"), bLocal_305);
	UNK_0x0E2400AB9174FA81(5, bLocal_305, joaat("PLAYER"));
	UNK_0x0E2400AB9174FA81(5, bLocal_305, joaat("COP"));
	switch (iVar0)
	{
		case 0:
			UNK_0x0E2400AB9174FA81(5, joaat("PLAYER"), joaat("AMBIENT_GANG_MEXICAN"));
			UNK_0x0E2400AB9174FA81(1, bLocal_305, joaat("AMBIENT_GANG_MEXICAN"));
			UNK_0x0E2400AB9174FA81(1, joaat("AMBIENT_GANG_MEXICAN"), bLocal_305);
			break;
		case 1:
			UNK_0x0E2400AB9174FA81(5, joaat("PLAYER"), joaat("AMBIENT_GANG_BALLAS"));
			UNK_0x0E2400AB9174FA81(1, bLocal_305, joaat("AMBIENT_GANG_BALLAS"));
			UNK_0x0E2400AB9174FA81(1, joaat("AMBIENT_GANG_BALLAS"), bLocal_305);
			break;
		case 2:
			UNK_0x0E2400AB9174FA81(5, joaat("PLAYER"), joaat("AMBIENT_GANG_WEICHENG"));
			UNK_0x0E2400AB9174FA81(1, bLocal_305, joaat("AMBIENT_GANG_WEICHENG"));
			UNK_0x0E2400AB9174FA81(1, joaat("AMBIENT_GANG_WEICHENG"), bLocal_305);
			break;
	}
}

char* func_55(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BALLA1";
		case 2:
			return "KOREANGUY";
		case 0:
			return "VAGOS";
		default:
			return "";
	}
	return "";
}

char* func_56(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BAL";
		case 2:
			return "KOR";
		case 0:
			return "VAG";
		default:
			return "";
	}
	return "";
}

void func_57(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 11:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -543.6415f, 303.5388f, 82.0202f };
					uParam0->f_3 = 231.5559f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("WEAPON_PUMPSHOTGUN");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 1:
					*uParam0 = { -563.5045f, 303.3635f, 82.192f };
					uParam0->f_3 = 191.6703f;
					uParam0->f_4 = { -561.9358f, 293.7914f, 84.1827f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				case 2:
					*uParam0 = { -547.9926f, 299.531f, 82.0218f };
					uParam0->f_3 = 170.2791f;
					uParam0->f_4 = { -550.0999f, 292.7203f, 87.8903f };
					uParam0->f_7 = joaat("WEAPON_ASSAULTRIFLE");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 3:
					*uParam0 = { -551.7525f, 301.2135f, 82.1226f };
					uParam0->f_3 = 132.7229f;
					uParam0->f_4 = { -561.2323f, 294.0457f, 87.6588f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				case 4:
					*uParam0 = { -549.7384f, 303.0894f, 82.0981f };
					uParam0->f_3 = 167.5811f;
					uParam0->f_4 = { -552.8337f, 292.7388f, 88.2295f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				case 5:
					*uParam0 = { -558.4697f, 303.0401f, 82.2333f };
					uParam0->f_3 = 161.0839f;
					uParam0->f_4 = { -561.9985f, 293.9765f, 87.8096f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		case 12:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { 231.2834f, 345.2137f, 104.3893f };
					uParam0->f_3 = 324.6404f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("WEAPON_SAWNOFFSHOTGUN");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 1:
					*uParam0 = { 236.5094f, 339.3164f, 104.5298f };
					uParam0->f_3 = 112.7911f;
					uParam0->f_4 = { 230.1282f, 337.069f, 106.8048f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				case 2:
					*uParam0 = { 224.3295f, 348.2992f, 104.4469f };
					uParam0->f_3 = 165.7146f;
					uParam0->f_4 = { 221.6486f, 340.3152f, 106.6212f };
					uParam0->f_7 = joaat("WEAPON_ASSAULTRIFLE");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				case 3:
					*uParam0 = { 234.1038f, 341.6698f, 104.5309f };
					uParam0->f_3 = 110.0142f;
					uParam0->f_4 = { 223.9347f, 338.3914f, 106.8137f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 4:
					*uParam0 = { 228.9968f, 344.3681f, 104.5384f };
					uParam0->f_3 = 153.6073f;
					uParam0->f_4 = { 224.4416f, 336.0886f, 106.1191f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				case 5:
					*uParam0 = { 221.382f, 346.3744f, 104.5675f };
					uParam0->f_3 = 165.8422f;
					uParam0->f_4 = { 219.6116f, 340.9911f, 106.4532f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		case 13:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -325.1079f, 6263.833f, 30.4151f };
					uParam0->f_3 = 195.9702f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("WEAPON_SAWNOFFSHOTGUN");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 1:
					*uParam0 = { -312.9843f, 6250.115f, 30.4899f };
					uParam0->f_3 = 319.1074f;
					uParam0->f_4 = { -308.3476f, 6254.857f, 32.6941f };
					uParam0->f_7 = joaat("WEAPON_ASSAULTRIFLE");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				case 2:
					*uParam0 = { -326.1756f, 6268.338f, 30.4714f };
					uParam0->f_3 = 261.9836f;
					uParam0->f_4 = { -312.8552f, 6265.857f, 43.5835f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				case 3:
					*uParam0 = { -323.9344f, 6259.659f, 30.3539f };
					uParam0->f_3 = 292.4941f;
					uParam0->f_4 = { -313.3472f, 6263.395f, 42.7414f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				case 4:
					*uParam0 = { -318.7812f, 6259.576f, 30.5161f };
					uParam0->f_3 = 295.0701f;
					uParam0->f_4 = { -313.766f, 6261.479f, 32.6516f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				case 5:
					*uParam0 = { -314.925f, 6255.542f, 30.5164f };
					uParam0->f_3 = 309.7791f;
					uParam0->f_4 = { -310.572f, 6258.45f, 32.6648f };
					uParam0->f_7 = joaat("WEAPON_PUMPSHOTGUN");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
			}
			break;
		case 14:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -2215.32f, 4275.046f, 46.475f };
					uParam0->f_3 = 16.955f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("WEAPON_PUMPSHOTGUN");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 1:
					*uParam0 = { -2195.425f, 4262.31f, 47.2741f };
					uParam0->f_3 = 241.4366f;
					uParam0->f_4 = { -2185.362f, 4256.376f, 48.4082f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				case 2:
					*uParam0 = { -2200.848f, 4268.19f, 47.3093f };
					uParam0->f_3 = 331.1949f;
					uParam0->f_4 = { -2196.575f, 4275.129f, 49.0669f };
					uParam0->f_7 = joaat("WEAPON_ASSAULTRIFLE");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 3:
					*uParam0 = { -2202.818f, 4294.149f, 47.4518f };
					uParam0->f_3 = 263.7257f;
					uParam0->f_4 = { -2192.783f, 4289.572f, 50.3251f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				case 4:
					*uParam0 = { -2196.271f, 4265.064f, 47.3446f };
					uParam0->f_3 = 325.4524f;
					uParam0->f_4 = { -2191.183f, 4271.747f, 49.867f };
					uParam0->f_7 = joaat("WEAPON_PUMPSHOTGUN");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				case 5:
					*uParam0 = { -2204.492f, 4290.059f, 47.3773f };
					uParam0->f_3 = 269.5739f;
					uParam0->f_4 = { -2193.017f, 4292.669f, 54.873f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
			}
			break;
	}
}

int func_58()
{
	return func_59(Global_110348.f_20, Global_110348.f_29);
}

int func_59(var uParam0, int iParam1)
{
	uParam0 = uParam0;
	switch (iParam1)
	{
		case 0:
			return 0;
		case 1:
			return 1;
	}
	return 0;
}

void func_60(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_61()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (UNK_0xC844350D5D58C99A(uLocal_284[iVar0]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(uLocal_284[iVar0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				UNK_0xF3268524E9BE6D6E(uLocal_284[iVar0], UNK_0x16F2683693E537C9(), 1000f, -1, 0, 1);
			}
			UNK_0x6DAD7906B73F064D(&(uLocal_284[iVar0]));
		}
		if (UNK_0xE4EDC4B0E92C078B(iLocal_298[iVar0]))
		{
			UNK_0x142CC44DB769B57E(&(iLocal_298[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (UNK_0xC844350D5D58C99A(uLocal_281[iVar0]))
		{
			UNK_0x046C362CF15F1935(&(uLocal_281[iVar0]));
		}
		iVar0++;
	}
	UNK_0xC05DBA7D4F88D5E5(bLocal_306, false);
	UNK_0xAB8E2DDC7AF955E0(bLocal_307, false);
	UNK_0x51B096AAC60548C1(1f);
	UNK_0x15EA7F4313456B1D(3, true);
	UNK_0x060F249A9A3E3F4E(true);
	UNK_0x10FAF14A60A0DBE1();
}

void func_62(int iParam0)
{
	Global_110348.f_22 = iParam0;
}

