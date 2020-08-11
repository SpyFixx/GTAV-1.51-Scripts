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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_78 = false;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
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
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	vector3 vLocal_106 = { 0f, 0f, 0f };
	vector3 vLocal_109 = { 0f, 0f, 0f };
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115[3] = { 0, 0, 0 };
	var uLocal_119 = 16;
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
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	bool bLocal_289 = false;
	bool bLocal_290 = false;
	bool bLocal_291 = false;
	var uLocal_292 = 3;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	vector3 vLocal_296 = { 0f, 0f, 0f };
	int iLocal_299 = 0;
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
	struct<42> Var0;
	vector3 vVar61;

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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_82 = 1;
	iLocal_83 = 65;
	iLocal_84 = 49;
	iLocal_85 = 64;
	iLocal_89 = UNK_0xAD1355DD1E5D2D9B();
	iLocal_90 = UNK_0x817B3657F78A517A();
	vLocal_106 = { 1180.969f, -402.381f, 67.2f };
	vLocal_109 = { 5f, 0f, 57.33f };
	iLocal_113 = -1;
	iLocal_286 = 77;
	iLocal_287 = -1;
	iLocal_288 = -1;
	bLocal_289 = true;
	bLocal_290 = true;
	bLocal_291 = true;
	UNK_0xDF8BDD00CF1D4043(1);
	func_373();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	vVar61 = { ScriptParam_0.f_1[0 /*3*/] };
	Global_96016 = 1;
	func_372(&Var0);
	if (UNK_0x2EBF608FFE6CA406(83))
	{
		func_371(" Force cleanup [TERMINATING]");
		func_356(&Var0, 1);
	}
	if (!func_355(108))
	{
		func_228(&Var0, vVar61);
	}
	else
	{
		func_1(&Var0, vVar61);
	}
}

void func_1(int iParam0, vector3 vParam1)
{
	while (true)
	{
		if (!UNK_0x338D6FF72D84D90F())
		{
			func_371("  Ambient - Player isn't within World Point Range");
			func_356(iParam0, 1);
		}
		if (func_227() != 2)
		{
			func_371("  Ambient - Player is not Trevor");
			func_356(iParam0, 1);
		}
		iLocal_288 = func_226(5f);
		if (iLocal_288 != -1)
		{
			if (!func_220())
			{
				*iParam0 = func_219(iLocal_288);
				StringCopy(&(iParam0->f_1), func_218(iLocal_288), 32);
				iParam0->f_16 = 3;
				iParam0->f_15 = 5f;
				if (*iParam0 == -1)
				{
					func_371("  -  Ambient Rampage Mission ID is invalid");
					func_356(iParam0, 1);
				}
				if (UNK_0xEA6BC48857E0AC4C(&(iParam0->f_1)))
				{
					func_371("  -  Ambient Rampage Mission ID is invalid");
					func_356(iParam0, 1);
				}
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_18569[*iParam0 /*6*/]), false);
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_18569[*iParam0 /*6*/]), 2);
				UNK_0x0674E58A79778E99(&(Global_111638.f_18569[*iParam0 /*6*/]), 3);
				Global_110725[*iParam0 /*10*/].f_1 = 0;
				if (!func_217(0))
				{
					Global_110725[*iParam0 /*10*/].f_3 = 0;
				}
				if (!func_209(*iParam0))
				{
					func_371(" RC Ambient Can't Launch - Can_RC_Launch Faled");
					func_356(iParam0, 1);
				}
				else if (!func_5(iParam0))
				{
					func_371(" RC Ambient Can't Launch - Launch_RC_Mission Failed");
					func_356(iParam0, 1);
				}
				else
				{
					func_4(500, 1);
					UNK_0x536F1BE96C726C4B(vParam1, iParam0->f_15, 1, 0, 0, false);
					func_371(" RC Ambient Launcher Waiting To Terminate");
					Global_110725[*iParam0 /*10*/].f_1 = 0;
					if (func_3(iParam0))
					{
						func_371(" Ambient - Ready To Terminate");
						func_356(iParam0, 0);
					}
				}
			}
		}
		else
		{
			if (func_2("RAMP_HELP_TRIG"))
			{
				UNK_0xA37A90C62806D848(1);
			}
			bLocal_291 = false;
		}
		SYSTEM::WAIT(0);
	}
}

bool func_2(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

bool func_3(int iParam0)
{
	while (!Global_110725[*iParam0 /*10*/])
	{
		SYSTEM::WAIT(0);
	}
	return true;
}

void func_4(int iParam0, bool bParam1)
{
	if (UNK_0x0F1CCD77290EE12F())
	{
		if (!UNK_0xD0BB2359EC70FC37())
		{
			UNK_0x53491B90E4FD0E56(iParam0);
			if (bParam1)
			{
				while (!UNK_0x757EF87A33649210())
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
}

bool func_5(int iParam0)
{
	struct<4> Var0;
	var uVar32;

	if (!func_208())
	{
		while (!func_203(*iParam0))
		{
			if (func_202(*iParam0))
			{
				func_191();
			}
			if (!func_148(iParam0, *iParam0 != 2))
			{
				func_371("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return false;
			}
			SYSTEM::WAIT(0);
		}
	}
	if (func_147())
	{
		func_145();
	}
	if (!func_114(iParam0))
	{
		func_371("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return false;
	}
	func_111(*iParam0, &Var0);
	MemCopy(&uVar32, {func_110(*iParam0)}, 4);
	func_109(&uVar32, Var0.f_3, 0);
	func_108(*iParam0);
	if (!func_208())
	{
		if (iParam0->f_16 == 2)
		{
			func_25(&(iParam0->f_1), 0);
		}
		else
		{
			func_25(&(iParam0->f_1), 1);
		}
	}
	func_6(*iParam0, Var0);
	return true;
}

void func_6(int iParam0, bool bParam1)
{
	func_24(bParam1);
	UNK_0x0674E58A79778E99(&(Global_111638.f_18569[iParam0 /*6*/]), 5);
	if (UNK_0x8A22C4C08282BF26(joaat("MISSION_STAT_WATCHER")) > 0)
	{
		while (UNK_0x8A22C4C08282BF26(joaat("MISSION_STAT_WATCHER")) > 0)
		{
			func_22();
			SYSTEM::WAIT(0);
		}
	}
	if (UNK_0x8A22C4C08282BF26(joaat("MISSION_STAT_WATCHER")) < 1)
	{
		Global_61513 = 0;
		UNK_0x92DCE5C81176D2B4("mission_stat_watcher");
		while (!UNK_0x1FBF08B001C4788A("mission_stat_watcher"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("mission_stat_watcher", 1828);
		UNK_0x5E8C29AE121DF1C7("mission_stat_watcher");
	}
	while (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0 /*6*/], 5))
	{
		if (UNK_0x8A22C4C08282BF26(joaat("MISSION_STAT_WATCHER")) > 0)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_18569[iParam0 /*6*/]), 5);
		}
	}
	func_7(iParam0);
}

void func_7(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Global_61510 == 1)
	{
		func_21();
		Global_61510 = 0;
		if (Global_61505)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_61513 = 1;
		func_13();
		return;
	}
	MemCopy(&Global_61527, {func_12(iParam0)}, 4);
	Global_61515 = 0;
	Global_61514 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_61502 = 1;
			Global_61505 = 1;
			Global_61508 = 1;
			break;
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_61513 = 1;
			Global_61514 = 1;
			func_13();
			func_22();
			return;
	}
	iVar0 = Global_73757;
	Global_73757 = 1;
	iVar1 = Global_73758;
	Global_73758 = iParam0;
	if (!Global_61502)
	{
		if ((Global_73758 != iVar1 || Global_73607 == 0) || iVar0 != Global_73757)
		{
			Global_31020 = 0;
			func_13();
			func_9(iParam0);
		}
		else
		{
			Global_61505 = 1;
		}
	}
	Global_61540 = UNK_0x1C0640BA9A7327B3();
	func_8();
	Global_61512 = 0;
}

void func_8()
{
	int iVar0;

	if (!Global_61509)
	{
		return;
	}
	if (Global_73607 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		switch (Global_61737[Global_73608[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_73608[iVar0 /*9*/].f_3 = 1;
				break;
			case 4:
				if (Global_61520)
				{
					Global_73608[iVar0 /*9*/].f_3 = 1;
				}
				break;
			case 6:
				if (Global_61737[Global_73608[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_73608[iVar0 /*9*/].f_1 != 0)
					{
						Global_73608[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_61509 = 0;
}

void func_9(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			func_10(741);
			func_10(742);
			return;
		case 3:
			func_10(743);
			func_10(744);
			return;
		case 5:
			func_10(745);
			func_10(746);
			return;
		case 6:
			func_10(747);
			func_10(748);
			return;
		case 8:
			func_10(749);
			return;
		case 12:
			func_10(750);
			return;
		case 14:
			func_10(751);
			func_10(752);
			return;
		case 16:
			func_10(753);
			func_10(754);
			return;
		case 17:
			func_10(755);
			func_10(756);
			func_10(757);
			return;
		case 18:
			func_10(758);
			func_10(759);
			return;
		case 19:
			func_10(760);
			func_10(761);
			return;
		case 20:
			func_10(762);
			return;
		case 21:
			func_10(763);
			return;
		case 22:
			func_10(764);
			func_10(765);
			return;
		case 23:
			func_10(766);
			return;
		case 25:
			func_10(767);
			func_10(768);
			func_10(769);
			return;
		case 26:
			func_10(770);
			func_10(771);
			return;
		case 28:
			func_10(772);
			func_10(773);
			return;
		case 29:
			func_10(774);
			func_10(775);
			return;
		case 30:
			func_10(776);
			func_10(777);
			return;
		case 32:
			func_10(778);
			func_10(779);
			return;
		case 33:
			func_10(780);
			func_10(781);
			func_10(782);
			return;
		case 34:
			func_10(783);
			func_10(784);
			return;
		case 38:
			func_10(785);
			func_10(786);
			return;
		case 39:
			func_10(787);
			func_10(788);
			return;
		case 40:
			func_10(789);
			return;
		case 41:
			func_10(790);
			func_10(791);
			func_10(792);
			return;
		case 42:
			func_10(793);
			func_10(794);
			func_10(795);
			return;
		case 43:
			func_10(796);
			func_10(797);
			return;
		case 46:
			func_10(798);
			func_10(799);
			return;
		default:
			break;
	}
	switch (iParam0)
	{
		case 47:
			func_10(800);
			func_10(801);
			return;
		case 49:
			func_10(802);
			func_10(803);
			return;
		case 50:
			func_10(804);
			func_10(805);
			return;
		case 51:
			func_10(806);
			return;
		case 57:
			func_10(807);
			func_10(808);
			func_10(809);
			return;
		case 58:
			func_10(828);
			func_10(829);
			func_10(830);
			return;
		case 59:
			func_10(831);
			func_10(832);
			func_10(833);
			return;
		case 60:
			func_10(834);
			func_10(835);
			func_10(836);
			return;
		case 61:
			func_10(837);
			func_10(838);
			func_10(839);
			return;
		case 62:
			func_10(840);
			func_10(841);
			func_10(842);
			return;
		case 24:
			func_10(843);
			func_10(844);
			func_10(845);
			return;
		default:
			break;
	}
}

void func_10(int iParam0)
{
	Global_61505 = 1;
	Global_61508 = 1;
	if (Global_73607 > 15)
	{
		return;
	}
	func_11(Global_73607);
	Global_73608[Global_73607 /*9*/] = iParam0;
	Global_73607++;
	if (Global_61737[iParam0 /*13*/] == 16)
	{
		Global_73759 = 1;
	}
}

void func_11(int iParam0)
{
	Global_73608[iParam0 /*9*/].f_1 = 0;
	Global_73608[iParam0 /*9*/].f_2 = 0f;
	Global_73608[iParam0 /*9*/].f_3 = 0;
	Global_73608[iParam0 /*9*/].f_4 = 0;
}

struct<2> func_12(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_110(iParam0) };
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

void func_13()
{
	if (Global_61512)
	{
		return;
	}
	Global_61521 = 0;
	Global_73607 = 0;
	Global_61523 = 0;
	if (Global_61520)
	{
	}
	Global_61520 = 0;
	func_20(0);
	func_19();
	Global_73759 = 0;
	Global_61511 = 1;
	func_17();
	func_16();
	func_15();
	func_14();
	Global_61502 = 0;
	Global_61532 = 0;
	Global_61540 = -1;
}

void func_14()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_73794[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_73803 = 0;
}

void func_15()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_73760[iVar0 /*2*/] = 0;
		Global_73760[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_73793 = 0;
}

void func_16()
{
	Global_61671 = 0;
}

void func_17()
{
	Global_61531 = 0;
	Global_61535 = func_18(joaat("SP0_SHOTS"));
	Global_61534 = func_18(joaat("SP0_HITS"));
	Global_61537 = func_18(joaat("SP1_SHOTS"));
	Global_61536 = func_18(joaat("SP1_HITS"));
	Global_61539 = func_18(joaat("SP2_SHOTS"));
	Global_61538 = func_18(joaat("SP2_HITS"));
}

var func_18(int iParam0)
{
	var uVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &uVar0, -1);
	return uVar0;
}

void func_19()
{
	int iVar0;

	Global_61541 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_61542[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_20(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

void func_21()
{
	int iVar0;

	Global_61510 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		Global_73608[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_61520)
	{
	}
	Global_61520 = 0;
}

void func_22()
{
	if (UNK_0x8A22C4C08282BF26(joaat("MISSION_STAT_WATCHER")) > 0)
	{
		if (func_23())
		{
			if (Global_61507 && !Global_61506)
			{
				Global_61507 = 0;
				UNK_0xCB0CD9B929EB37B9("mission_stat_watcher");
			}
		}
		else
		{
			UNK_0xCB0CD9B929EB37B9("mission_stat_watcher");
		}
	}
}

bool func_23()
{
	if (UNK_0x8A22C4C08282BF26(joaat("MISSION_STAT_WATCHER")) < 1)
	{
		return false;
	}
	if (!Global_61505)
	{
		return false;
	}
	return Global_61517;
}

void func_24(bool bParam0)
{
	if (UNK_0x7F8A39872A07D2CE(bParam0, bParam0))
	{
	}
}

void func_25(char[4] cParam0, int iParam1)
{
	UNK_0x0674E58A79778E99(&(Global_98744.f_20), 17);
	func_26(cParam0, iParam1, 0);
}

void func_26(char[4] cParam0, int iParam1, bool bParam2)
{
	if (Global_98744 != 10 && Global_98744 != 9)
	{
		StringCopy(&Global_102195, cParam0, 32);
		func_28(&Global_102203, cParam0, 0, "Start", iParam1, bParam2);
		func_27();
		Global_92922 = 0;
	}
}

void func_27()
{
	int iVar0;
	int iVar1;

	Global_105187 = Global_102203;
	Global_105187.f_1 = Global_102203.f_1;
	Global_105187.f_6 = Global_102203.f_6;
	Global_105187.f_7 = Global_102203.f_7;
	Global_105187.f_8 = Global_102203.f_8;
	Global_105187.f_2 = Global_102203.f_2;
	Global_105187.f_3 = Global_102203.f_3;
	Global_105187.f_4 = Global_102203.f_4;
	Global_105187.f_5 = Global_102203.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_105187.f_9[iVar1] = Global_102203.f_9[iVar1];
		Global_105187.f_13[iVar1] = Global_102203.f_13[iVar1];
		Global_105187.f_17[iVar1] = Global_102203.f_17[iVar1];
		Global_105187.f_21[iVar1] = Global_102203.f_21[iVar1];
		Global_105187.f_25[0 /*295*/][iVar1 /*98*/] = { Global_102203.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_105187.f_25[1 /*295*/][iVar1 /*98*/] = { Global_102203.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_105187.f_616[iVar1 /*65*/][iVar0] = Global_102203.f_616[iVar1 /*65*/][iVar0];
			Global_105187.f_616[iVar1 /*65*/].f_13[iVar0] = Global_102203.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_105187.f_616[iVar1 /*65*/].f_26[iVar0] = Global_102203.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_105187.f_616[iVar1 /*65*/].f_59 = Global_102203.f_616[iVar1 /*65*/].f_59;
		Global_105187.f_616[iVar1 /*65*/].f_60 = Global_102203.f_616[iVar1 /*65*/].f_60;
		Global_105187.f_616[iVar1 /*65*/].f_61 = Global_102203.f_616[iVar1 /*65*/].f_61;
		Global_105187.f_616[iVar1 /*65*/].f_62 = Global_102203.f_616[iVar1 /*65*/].f_62;
		Global_105187.f_616[iVar1 /*65*/].f_63 = Global_102203.f_616[iVar1 /*65*/].f_63;
		Global_105187.f_616[iVar1 /*65*/].f_64 = Global_102203.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_105187.f_616[iVar1 /*65*/].f_39[iVar0] = Global_102203.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_105187.f_616[iVar1 /*65*/].f_49[iVar0] = Global_102203.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_105187.f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_102203.f_812[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			Global_105187.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_102203.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_105187.f_2244[iVar1 /*32*/][iVar0] = Global_102203.f_2244[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_105187.f_2244[iVar1 /*32*/].f_5[iVar0] = Global_102203.f_2244[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_105187.f_2244[iVar1 /*32*/].f_16[iVar0] = Global_102203.f_2244[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_105187.f_2341[iVar1] = Global_102203.f_2341[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_105187.f_2838[iVar1 /*15*/][iVar0] = Global_102203.f_2838[iVar1 /*15*/][iVar0];
			Global_105187.f_2838[iVar1 /*15*/].f_5[iVar0] = Global_102203.f_2838[iVar1 /*15*/].f_5[iVar0];
			Global_105187.f_2838[iVar1 /*15*/].f_10[iVar0] = Global_102203.f_2838[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_105187.f_2345[iVar1 /*164*/][iVar0] = Global_102203.f_2345[iVar1 /*164*/][iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_4[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_4[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_8[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_8[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_12[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_12[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_16[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_16[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_20[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_20[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_24[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_24[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_28[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_28[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_32[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_32[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_36[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_36[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_40[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_40[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_44[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_44[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_48[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_48[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_52[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_52[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_56[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_56[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_60[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_60[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_64[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_64[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_68[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_68[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_72[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_72[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_76[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_76[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_80[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_80[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_84[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_84[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_88[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_88[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_92[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_92[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_96[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_96[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_100[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_100[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_104[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_104[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_108[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_108[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_112[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_112[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_116[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_116[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_120[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_120[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_124[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_124[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_128[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_128[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_132[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_132[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_136[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_136[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_140[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_140[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_144[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_144[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_148[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_148[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_152[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_152[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_156[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_156[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_160[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_105187.f_2884 = { Global_102203.f_2884 };
	Global_105187.f_2884.f_3 = Global_102203.f_2884.f_3;
	Global_105187.f_2890 = { Global_102203.f_2890 };
	Global_105187.f_2890.f_3 = { Global_102203.f_2890.f_3 };
	Global_105187.f_2890.f_6 = Global_102203.f_2890.f_6;
	Global_105187.f_2890.f_8 = Global_105187.f_2890.f_8;
	Global_105187.f_2890.f_7 = Global_102203.f_2890.f_7;
	Global_105187.f_2890.f_9 = Global_102203.f_2890.f_9;
	Global_105187.f_2890.f_11 = Global_102203.f_2890.f_11;
	Global_105187.f_2890.f_10 = Global_102203.f_2890.f_10;
	Global_105187.f_2890.f_12 = Global_102203.f_2890.f_12;
	Global_105187.f_2890.f_12.f_1 = { Global_102203.f_2890.f_12.f_1 };
	Global_105187.f_2890.f_12.f_5 = Global_102203.f_2890.f_12.f_5;
	Global_105187.f_2890.f_12.f_6 = Global_102203.f_2890.f_12.f_6;
	Global_105187.f_2890.f_12.f_7 = Global_102203.f_2890.f_12.f_7;
	Global_105187.f_2890.f_12.f_8 = Global_102203.f_2890.f_12.f_8;
	Global_105187.f_2890.f_12.f_9 = { Global_102203.f_2890.f_12.f_9 };
	Global_105187.f_2890.f_12.f_59 = { Global_102203.f_2890.f_12.f_59 };
	Global_105187.f_2890.f_12.f_62 = Global_102203.f_2890.f_12.f_62;
	Global_105187.f_2890.f_12.f_63 = Global_102203.f_2890.f_12.f_63;
	Global_105187.f_2890.f_12.f_64 = Global_102203.f_2890.f_12.f_64;
	Global_105187.f_2890.f_12.f_65 = Global_102203.f_2890.f_12.f_65;
	Global_105187.f_2890.f_12.f_77 = Global_102203.f_2890.f_12.f_77;
	Global_105187.f_2890.f_12.f_66 = Global_102203.f_2890.f_12.f_66;
	Global_105187.f_2890.f_12.f_67 = Global_102203.f_2890.f_12.f_67;
	Global_105187.f_2890.f_12.f_68 = Global_102203.f_2890.f_12.f_68;
	Global_105187.f_2890.f_12.f_69 = Global_102203.f_2890.f_12.f_69;
	Global_105187.f_2890.f_12.f_71 = Global_102203.f_2890.f_12.f_71;
	Global_105187.f_2890.f_12.f_72 = Global_102203.f_2890.f_12.f_72;
	Global_105187.f_2890.f_12.f_73 = Global_102203.f_2890.f_12.f_73;
	Global_105187.f_2890.f_12.f_74 = Global_102203.f_2890.f_12.f_74;
	Global_105187.f_2890.f_12.f_75 = Global_102203.f_2890.f_12.f_75;
	Global_105187.f_2890.f_12.f_76 = Global_102203.f_2890.f_12.f_76;
	Global_105187.f_2980 = Global_102203.f_2980;
	Global_105187.f_2980.f_1 = Global_102203.f_2980.f_1;
	Global_105187.f_2980.f_2 = Global_102203.f_2980.f_2;
	Global_105187.f_2980.f_3 = Global_102203.f_2980.f_3;
}

void func_28(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	*uParam0 = func_227();
	uParam0->f_1 = func_97();
	UNK_0x1BC83DD08AA82285(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		func_69(&(uParam0->f_2884), 0);
		func_68(UNK_0x16F2683693E537C9());
		func_61(UNK_0x16F2683693E537C9(), 0);
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_111638.f_2358.f_539.f_294[iVar1];
		if (iVar1 == func_58())
		{
			func_51(UNK_0x16F2683693E537C9(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_98469[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_98469[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_98469[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_98469[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_98469[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_98469[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_98469[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_98469[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_98469[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_98469[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_111638.f_2358.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_111638.f_2358.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 1:
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 2:
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_111638.f_20559.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_58686[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_111638.f_2358.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_111638.f_2358.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_111638.f_2358[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	UNK_0x6FB46C25CCB7E6D5(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
	UNK_0x6FB46C25CCB7E6D5(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
	UNK_0x6FB46C25CCB7E6D5(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_30(&(uParam0->f_2890), uParam0, bParam5, 1, 1, 0);
	}
	func_29(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_29(var uParam0)
{
	*uParam0 = Global_94593;
	uParam0->f_1 = Global_94594;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_30(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	bool bVar0;

	if (bParam2 == 0)
	{
		bParam2 = UNK_0x16F2683693E537C9();
	}
	if (UNK_0xC844350D5D58C99A(bParam2))
	{
		uParam1->f_5 = func_48(bParam2);
	}
	if (func_45(bParam2, &bVar0, iParam3, iParam5))
	{
		func_31(uParam0, uParam1, bVar0, iParam4);
	}
	else if (UNK_0xC844350D5D58C99A(bVar0))
	{
		if (!UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0x4906F8A34E9F4814(bVar0, joaat("SKYLIFT")) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bVar0, 0))
			{
				func_31(uParam0, uParam1, bVar0, iParam4);
			}
		}
	}
}

int func_31(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (UNK_0xDF1306B443CD3D15(bParam2, 0))
	{
		func_33(uParam0, bParam2, iParam3);
		uParam1->f_4 = bParam2;
		if (func_32(bParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

bool func_32(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_98744.f_22[iVar0] == bParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_33(var uParam0, bool bParam1, int iParam2)
{
	func_40(bParam1, &(uParam0->f_12));
	uParam0->f_7 = func_36(bParam1, 145, 0);
	uParam0->f_11 = func_35(bParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_34(bParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
		uParam0->f_6 = UNK_0xD9522BA9E27E1349(bParam1);
		uParam0->f_3 = { UNK_0x56E9E0FD5ACCD35D(bParam1) };
		if (UNK_0x3D1053F9EB43B7AD(bParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_76346 == bParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_34(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_484[iVar0]))
		{
			if (bParam0 == Global_75441.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_35(bool bParam0)
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

int func_36(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == bParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_96085[iVar0])
				{
					if (iParam2 == 0 || UNK_0x134B62B726CEC8E6(bParam0) == func_37(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_37(int iParam0, int iParam1)
{
	struct<82> Var0;

	if (func_39(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_38(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_38(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("TAILGATER");
			if (Global_111638.f_9080.f_99.f_58[128] && !Global_111638.f_9080.f_99.f_58[131])
			{
				iVar0 = joaat("PREMIER");
			}
			switch (iVar0)
			{
				case joaat("TAILGATER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				case joaat("PREMIER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		case 2:
			iVar0 = joaat("BODHI2");
			switch (iVar0)
			{
				case joaat("BODHI2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111638.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("BUFFALO2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("BAGGER");
			}
			else if (Global_111638.f_9080.f_99.f_58[118])
			{
				iVar0 = joaat("BAGGER");
			}
			else
			{
				iVar0 = joaat("BUFFALO2");
			}
			switch (iVar0)
			{
				case joaat("BAGGER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				case joaat("BUFFALO2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		default:
			break;
	}
}

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

void func_40(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_44(uParam1);
		uParam1->f_66 = UNK_0x134B62B726CEC8E6(bParam0);
		StringCopy(&(uParam1->f_1), UNK_0x7888A5D2621AAF2D(bParam0), 16);
		*uParam1 = UNK_0x4EB64970EC291A00(bParam0);
		UNK_0x9412F17E127D9759(bParam0, &(uParam1->f_5), &(uParam1->f_6));
		UNK_0xD00EA977553939A7(bParam0, &(uParam1->f_7), &(uParam1->f_8));
		UNK_0x4D842A28A29F18F6(bParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = UNK_0x214BEAD64D777E8F(bParam0);
		uParam1->f_67 = UNK_0xF22DC2D0CA24A151(bParam0);
		uParam1->f_69 = UNK_0x8EF9B42D5496EC5A(bParam0);
		uParam1->f_70 = UNK_0x9C7B8DC16535B879(bParam0);
		UNK_0xCCBAB59EE36FFC71(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		UNK_0xE04A80C505823410(bParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (UNK_0x812A93B166D97C60(bParam0, 2))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 28);
		}
		if (UNK_0x812A93B166D97C60(bParam0, 3))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 29);
		}
		if (UNK_0x812A93B166D97C60(bParam0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 30);
		}
		if (UNK_0x812A93B166D97C60(bParam0, 1))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_43(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (UNK_0x587993B327460A82(bParam0, 0))
		{
			uParam1->f_68 = UNK_0x74A7D92E3874B5C7(bParam0);
		}
		if (UNK_0xC41A9202669A24C4(uParam1->f_66))
		{
			if (UNK_0x20D5F312838C1136(bParam0))
			{
				switch (UNK_0x38E830634323E0D5(bParam0))
				{
					case 3:
					case 0:
						UNK_0x0674E58A79778E99(&(uParam1->f_77), 23);
						UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 22);
						break;
					case 4:
					case 1:
						UNK_0x0674E58A79778E99(&(uParam1->f_77), 23);
						UNK_0x0674E58A79778E99(&(uParam1->f_77), 22);
						break;
					case 5:
						UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 23);
			}
		}
		if (!UNK_0x616632A7E7824A9A(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 9);
		}
		if (UNK_0xF566283DA9533594(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 10);
		}
		if (UNK_0xC97B0E5C744424FD(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 13);
			UNK_0x3139754D4D5C3AC3(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (UNK_0xE23BB5249C074C85(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 12);
		}
		func_42(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (UNK_0x92C2290AA46758D3(bParam0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 11);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(uParam1->f_77), 11);
		}
		if (UNK_0x30F813723591D02E(bParam0, "IgnoredByQuickSave") && UNK_0xB2C7CF65CF9B897C(bParam0, "IgnoredByQuickSave"))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 27);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(uParam1->f_77), 27);
		}
	}
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 24;
		case 11:
			return 25;
		case 12:
			return 26;
	}
	return 0;
}

int func_42(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (!UNK_0xDF1306B443CD3D15(*bParam0, 0))
	{
		return 0;
	}
	if (UNK_0x40B3F576B41FA183(*bParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (UNK_0xB97ED2A4B56844DE(*bParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (UNK_0xB97ED2A4B56844DE(*bParam0, iVar1))
			{
				switch (UNK_0x3C076D736FE6B7A6(*bParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = UNK_0x0ECB5CA5140957AD(*bParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = UNK_0x3A5601978F787E51(*bParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = UNK_0x3A5601978F787E51(*bParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_43(int iParam0)
{
	switch (iParam0)
	{
		case joaat("GRANGER"):
		case joaat("VISIONE"):
			return true;
		default:
			break;
	}
	return false;
}

void func_44(var uParam0)
{
	int iVar0;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

bool func_45(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			if (bParam0 == UNK_0x16F2683693E537C9())
			{
				*bParam1 = UNK_0x728870EB733D12A1();
			}
			else
			{
				*bParam1 = UNK_0x6937EA2286828455(bParam0, 1);
			}
			if (UNK_0xC844350D5D58C99A(*bParam1))
			{
				if (UNK_0xDF1306B443CD3D15(*bParam1, 0))
				{
					if (iParam2 == 0 || UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(*bParam1, true), UNK_0x68F4C0EC296D3901(bParam0, true), 1) < 100f)
					{
						if (UNK_0x4906F8A34E9F4814(*bParam1, joaat("TAXI")))
						{
							if (UNK_0xA30B8362589C124A(*bParam1, -1, 0) != bParam0 && UNK_0xA30B8362589C124A(*bParam1, -1, 0) != 0)
							{
								return false;
							}
						}
						if (func_46(*bParam1, func_227(), 1))
						{
							bVar0 = UNK_0xBB0808A181D4745C();
							if (!UNK_0x7F8A39872A07D2CE(bVar0, "save_anywhere"))
							{
								return false;
							}
							else if (!UNK_0x405E212DDE472467(bParam0, 1))
							{
								return false;
							}
						}
						if (iParam3 == 1)
						{
							if (UNK_0x30F813723591D02E(*bParam1, "IgnoredByQuickSave"))
							{
								if (UNK_0xB2C7CF65CF9B897C(*bParam1, "IgnoredByQuickSave"))
								{
									return false;
								}
							}
						}
						else if (UNK_0x4906F8A34E9F4814(*bParam1, joaat("BLIMP")))
						{
							return false;
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_46(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_47(iParam1, iVar0, &uVar1, &iVar9))
	{
		if (!bParam2 || UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iVar9], false))
		{
			if (UNK_0x5B6BEDD9A86023B7(&uVar1, bParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_47(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*iParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 1;
				return true;
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*iParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*iParam3 = 6;
				return true;
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*iParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*iParam3 = 4;
				return true;
			}
			break;
	}
	return false;
}

int func_48(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_49(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_49(int iParam0)
{
	if (func_39(iParam0))
	{
		return func_50(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_50(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_51(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		iVar0 = func_48(bParam0);
		bVar1 = false;
		while (bVar1 < 12)
		{
			func_57(bParam0, bVar1, &(uParam1->f_13[bVar1]), uParam1[bVar1], &(uParam1->f_26[bVar1]), iParam2, 145);
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 9)
		{
			func_56(bParam0, bVar1, &(uParam1->f_39[bVar1]), &(uParam1->f_49[bVar1]), iParam2, 145);
			bVar1++;
		}
		if (func_39(iVar0))
		{
			uParam1->f_59 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_64;
		}
		else if (UNK_0x8CD06866876216F2() && UNK_0x134B62B726CEC8E6(bParam0) == UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			if (func_55(161, iParam3))
			{
				uParam1->f_59 = func_52(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_52(752, iParam3, 0);
			}
			uParam1->f_60 = func_52(753, iParam3, 0);
			uParam1->f_61 = func_52(754, iParam3, 0);
		}
		if (UNK_0x8CD06866876216F2() && bParam0 == UNK_0x16F2683693E537C9())
		{
			if (func_55(161, iParam3))
			{
				uParam1->f_59 = func_52(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_52(752, iParam3, 0);
			}
		}
	}
}

int func_52(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_53(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_53(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_54();
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

int func_54()
{
	return Global_1312745;
}

bool func_55(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_53(iParam1)];
	if (UNK_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return false;
}

void func_56(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;

	iVar0 = func_48(bParam0);
	if (bParam0 != 0)
	{
		*uParam2 = UNK_0x98F1B512A2CC07C5(bParam0, bParam1);
		*uParam3 = UNK_0x22286A85EDEAEC56(bParam0, bParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (bParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (bParam0 != 0)
			{
				if (UNK_0xDCCE25EA1C1D1F76(bParam0) && UNK_0x6BE6D34EA3F561AC(bParam0) != -1)
				{
					*uParam2 = UNK_0x6BE6D34EA3F561AC(bParam0);
					*uParam3 = UNK_0x7E1F0AD2CE37D34C(bParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (bParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (bParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		case 1:
			if (bParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		case 2:
			if (bParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_57(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;

	iVar0 = func_48(bParam0);
	if (bParam0 != 0)
	{
		*uParam2 = UNK_0x36C584991B4C183F(bParam0, bParam1);
		*uParam3 = UNK_0xDADA8E1DD0D0D9D9(bParam0, bParam1);
		*uParam4 = UNK_0xAA973E78065E07A0(bParam0, bParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		case 1:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		case 2:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_58()
{
	func_59();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_59()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_49(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_48(UNK_0x16F2683693E537C9());
			if (func_39(iVar0) && (!func_60(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_39(Global_111638.f_2358.f_539.f_4321))
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

bool func_60(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_61(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar0 = func_48(bParam0);
	if (func_39(iVar0) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (bParam0 == UNK_0x16F2683693E537C9())
		{
			func_62(bParam0, &(Global_111638.f_2358.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_111638.f_2358.f_539.f_1730[iVar2 /*4*/][iVar0] = UNK_0x923C832C9AB56966(iVar2);
				if (bParam1)
				{
					iVar1 = UNK_0xFA91242148B28E7D();
					if (Global_111638.f_2358.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_111638.f_2358.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			UNK_0x812D6591566D640E(UNK_0xD803B885F5E47A62(), &bVar3);
			if (iVar0 == 0)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP0_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
			else if (iVar0 == 1)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP1_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
			else if (iVar0 == 2)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP2_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
		}
	}
}

void func_62(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	bool bVar73;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_67(iVar0);
			if (iVar3 != 0)
			{
				Var4 = UNK_0x3F0B5EEC37A0EDD3(bParam0, func_67(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("WEAPON_UNARMED"))
				{
					Var4.f_1 = UNK_0xD2AEDBB0268DF71A(bParam0, Var4);
					if (Var4 == joaat("GADGET_PARACHUTE"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = UNK_0x7DD9FDEA5DFB355E(bParam0, Var4);
					Var4.f_4 = UNK_0x7F1C58A86289ED1A(bParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!UNK_0x9AEFFB8166364079(bParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					bVar1 = false;
					iVar2 = func_65(Var4, bVar1);
					while (iVar2 != 0)
					{
						if (UNK_0xAFB8387ED2D7213E(bParam0, Var4, iVar2))
						{
							UNK_0x5D96D8530B3D0904(&(Var4.f_2), bVar1);
						}
						bVar1++;
						iVar2 = func_65(Var4, bVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = UNK_0x4160B65AE085B5A9();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((UNK_0x310836EE7129BA33(iVar9, &Var11) && !func_64(Var11.f_1)) && iVar72 < 51)
			{
				if (!UNK_0x232048AB4B0E0259(Var11))
				{
					Var4 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = UNK_0xD2AEDBB0268DF71A(bParam0, Var4);
					if (UNK_0x440C646F2F11A2A1(bParam0, Var4, 0))
					{
						Var4.f_3 = UNK_0x7DD9FDEA5DFB355E(bParam0, Var4);
						Var4.f_4 = UNK_0x7F1C58A86289ED1A(bParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!UNK_0x9AEFFB8166364079(bParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					bVar73 = false;
					bVar1 = false;
					while (bVar1 < UNK_0xAD2A7A6DFF55841B(iVar9))
					{
						if (UNK_0x31D5E073B6F93CDC(iVar9, bVar1, &Var50))
						{
							if (!func_63(Var50.f_3))
							{
								if (UNK_0xAFB8387ED2D7213E(bParam0, Var4, Var50.f_3))
								{
									UNK_0x5D96D8530B3D0904(&(Var4.f_2), bVar73);
								}
								bVar73++;
							}
						}
						bVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!UNK_0x440C646F2F11A2A1(bParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

bool func_63(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return true;
	}
	return false;
}

bool func_64(int iParam0)
{
	if (UNK_0x8CD06866876216F2())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return false;
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return false;
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return false;
			case joaat("WEAPON_BULLPUPRIFLE"):
				return false;
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return false;
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return false;
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return false;
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return false;
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return false;
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case -1523701417:
			case -2112826155:
			case -664359727:
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
				return true;
		}
	}
	return false;
}

int func_65(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_SMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SMG_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SMG_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_SMG_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 9:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_SR_SUPP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_KNUCKLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
		case joaat("WEAPON_MINISMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_66(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					bVar2 = false;
					while (bVar2 < UNK_0xA942498EEAA3EEAD(iVar1))
					{
						if (UNK_0x8B27EE8DAA2A39B3(iVar1, bVar2, &Var43))
						{
							if (!func_63(Var43.f_3))
							{
								if (iVar3 == bParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						bVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_66(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = UNK_0x037F36BEA9A47381();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (UNK_0x6532540B34EE6273(iVar0, iParam1))
		{
			if (iParam1->f_1 == bParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_67(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("SLOT_UNARMED");
			break;
		case 1:
			iVar0 = joaat("SLOT_KNIFE");
			break;
		case 2:
			iVar0 = joaat("SLOT_NIGHTSTICK");
			break;
		case 3:
			iVar0 = joaat("SLOT_HAMMER");
			break;
		case 4:
			iVar0 = joaat("SLOT_BAT");
			break;
		case 5:
			iVar0 = joaat("SLOT_CROWBAR");
			break;
		case 6:
			iVar0 = joaat("SLOT_GOLFCLUB");
			break;
		case 7:
			iVar0 = joaat("SLOT_STUNGUN");
			break;
		case 8:
			iVar0 = joaat("SLOT_PISTOL");
			break;
		case 9:
			iVar0 = joaat("SLOT_COMBATPISTOL");
			break;
		case 10:
			iVar0 = joaat("SLOT_APPISTOL");
			break;
		case 11:
			iVar0 = joaat("SLOT_MICROSMG");
			break;
		case 12:
			iVar0 = joaat("SLOT_SMG");
			break;
		case 13:
			iVar0 = joaat("SLOT_ASSAULTRIFLE");
			break;
		case 14:
			iVar0 = joaat("SLOT_CARBINERIFLE");
			break;
		case 15:
			iVar0 = joaat("SLOT_ADVANCEDRIFLE");
			break;
		case 16:
			iVar0 = joaat("SLOT_MG");
			break;
		case 17:
			iVar0 = joaat("SLOT_COMBATMG");
			break;
		case 18:
			iVar0 = joaat("SLOT_PUMPSHOTGUN");
			break;
		case 19:
			iVar0 = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
		case 20:
			iVar0 = joaat("SLOT_ASSAULTSHOTGUN");
			break;
		case 21:
			iVar0 = joaat("SLOT_SNIPERRIFLE");
			break;
		case 22:
			iVar0 = joaat("SLOT_HEAVYSNIPER");
			break;
		case 23:
			iVar0 = joaat("SLOT_GRENADELAUNCHER");
			break;
		case 24:
			iVar0 = joaat("SLOT_RPG");
			break;
		case 25:
			iVar0 = joaat("SLOT_MINIGUN");
			break;
		case 26:
			iVar0 = joaat("SLOT_GRENADE");
			break;
		case 27:
			iVar0 = joaat("SLOT_STICKYBOMB");
			break;
		case 28:
			iVar0 = joaat("SLOT_SMOKEGRENADE");
			break;
		case 29:
			iVar0 = joaat("SLOT_MOLOTOV");
			break;
		case 30:
			iVar0 = joaat("SLOT_FIREEXTINGUISHER");
			break;
		case 31:
			iVar0 = joaat("SLOT_PETROLCAN");
			break;
		case 33:
			iVar0 = joaat("SLOT_PARACHUTE");
			break;
		case 34:
			iVar0 = joaat("SLOT_DIGISCANNER");
			break;
		case 35:
			iVar0 = joaat("SLOT_OBJECT");
			break;
		case 36:
			iVar0 = joaat("SLOT_ASSAULTSMG");
			break;
		case 37:
			iVar0 = joaat("SLOT_BULLPUPSHOTGUN");
			break;
		case 38:
			iVar0 = joaat("SLOT_PISTOL50");
			break;
	}
	return iVar0;
}

void func_68(bool bParam0)
{
	int iVar0;

	iVar0 = func_48(bParam0);
	if (func_39(iVar0) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		Global_111638.f_2358.f_539.f_294[iVar0] = UNK_0x34460709B9A5160B(bParam0);
	}
}

void func_69(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;

	*uParam0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	uParam0->f_3 = UNK_0xD9522BA9E27E1349(UNK_0x16F2683693E537C9());
	uParam0->f_5 = UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9());
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		uParam0->f_4 = UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (UNK_0x8A22C4C08282BF26(joaat("FINALE_CHOICE")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == UNK_0x0D1736C2E221BCEA(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_73(&iVar0))
		{
			if (func_71(iVar0, &vVar1, &uVar4))
			{
				vVar1.f_2 = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar5 = func_227();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_70(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

bool func_70(vector3 vParam0, bool bParam3, vector3 vParam4)
{
	int iVar0;
	int iVar1;

	if (!UNK_0xD1BF3090E1F8300E(vParam0))
	{
		iVar0 = UNK_0x0D1736C2E221BCEA(vParam4, bParam3);
		if (!UNK_0x31609A585163CBAC(iVar0))
		{
			return false;
		}
		iVar1 = UNK_0x16804749AA17EEA8(vParam0);
		if (iVar1 == iVar0)
		{
			return true;
		}
	}
	return false;
}

bool func_71(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_72(*uParam1, 0f, 0f, 0f, 0);
}

bool func_72(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_73(int iParam0)
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (func_96())
		{
			*iParam0 = func_79(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), 6, -1, 0, 1, -1);
			if (func_78(*iParam0) && !func_74(*iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_74(int iParam0)
{
	return func_75(iParam0, 0, 1);
}

bool func_75(int iParam0, bool bParam1, bool bParam2)
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
		if (func_77() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_52(func_76(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
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

int func_77()
{
	return Global_30768;
}

bool func_78(int iParam0)
{
	return func_75(iParam0, 5, 1);
}

int func_79(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam3 == 6 || iParam3 == func_95(iVar0))
		{
			if (!bParam5 || func_94(iVar0))
			{
				fVar1 = UNK_0x0EB28750412C3A5A(vParam0, func_80(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (bParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_80(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
		case 4:
			return 1208.333f, -470.917f, 65.208f;
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		case 45:
			return func_91(Global_100839);
		case 46:
			if (Global_1590374 != func_90())
			{
				if (func_89(Global_1590374))
				{
					return func_82(2, 2);
				}
				else if (func_81(Global_1590374))
				{
					return func_82(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		case 47:
			return 510.1f, 4749.5f, -69f;
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
		case 50:
			return Global_1696048;
		case 51:
			return 1100f, 220f, -50f;
	}
	return 1000000f, 1000000f, 1000000f;
}

bool func_81(int iParam0)
{
	if (iParam0 != func_90())
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, true)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 2))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_82(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar6;

	vVar6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590374 != func_90())
	{
		if (iParam1 == 3)
		{
			if (func_83(iParam0, 1, &vVar0, 0, 0))
			{
				vVar6 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374 /*876*/].f_274.f_259, 4))
			{
				if (func_83(iParam0, 1, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374 /*876*/].f_274.f_259, 5))
			{
				if (func_83(iParam0, 2, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
		}
	}
	return vVar6;
}

bool func_83(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar6;
	struct<4> Var12;
	vector3 vVar18;

	if (!func_88(iParam3, &Var0))
	{
		return false;
	}
	if (!func_88(iParam1, &vVar6))
	{
		return false;
	}
	if (!bParam4)
	{
		Var12 = { func_86(iParam0) };
	}
	else
	{
		Var12 = { func_85(iParam0) };
	}
	vVar18 = { Var12 - Var0 };
	vVar18 = { func_84(vVar18, -Var0.f_3.f_2) };
	vVar18 = { func_84(vVar18, vVar6.f_3.f_2) };
	*uParam2 = { UNK_0x8A5E176FF719A014(vVar6, 0f, vVar18) };
	uParam2->f_3 = { Var12.f_3 };
	return true;
}

Vector3 func_84(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

struct<6> func_85(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_86(int iParam0)
{
	return func_87(iParam0);
}

struct<6> func_87(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

bool func_88(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		default:
			break;
	}
	return false;
}

bool func_89(int iParam0)
{
	if (iParam0 != func_90())
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 3) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 4)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 5))
		{
			return true;
		}
	}
	return false;
}

int func_90()
{
	return -1;
}

Vector3 func_91(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
		case 2:
			return 1060f, -2990f, -35f;
		case 3:
			return 974.9542f, -3000.091f, -35f;
		case 6:
			return -1586.36f, -566.6f, 106.17f;
		case 7:
			return -1389.87f, -465.17f, 82.68f;
		case 8:
			return -145.81f, -590.2f, 171.13f;
		case 9:
			return -62.49f, -823.55f, 288.74f;
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
		case 10:
			return 1103.562f, -3000f, -40f;
		case 11:
			return 938.3077f, -3196.112f, -100f;
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
		case 13:
			return 520.0001f, 4750f, -70f;
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
		case 16:
			return -1421.015f, -3012.587f, -80f;
		case 17:
			if (func_92() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		default:
			return 0f, 0f, -200f;
	}
	return 0f, 0f, -200f;
}

int func_92()
{
	return func_93(UNK_0xD803B885F5E47A62());
}

int func_93(int iParam0)
{
	return UNK_0xDC4DD3980107166C(Global_2425662[iParam0 /*421*/].f_310.f_3, 28, 31);
}

bool func_94(int iParam0)
{
	return func_75(iParam0, 0, 0);
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 50:
			return 0;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
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
			return 2;
		case 23:
			return 2;
		case 24:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 27:
			return 2;
		case 28:
			return 3;
		case 29:
			return 3;
		case 30:
			return 3;
		case 31:
			return 3;
		case 32:
			return 3;
		case 33:
			return 3;
		case 34:
			return 3;
		case 35:
			return 3;
		case 36:
			return 3;
		case 37:
			return 3;
		case 38:
			return 3;
		case 39:
			return 4;
		case 40:
			return 4;
		case 41:
			return 4;
		case 42:
			return 4;
		case 43:
			return 4;
		case 44:
			return 4;
		case 45:
			return 5;
		case 46:
			return 3;
		case 47:
			return 3;
		case 48:
			return 3;
		case 49:
			return 3;
		case 52:
			return 3;
		case 51:
			return 1;
	}
	return 6;
}

bool func_96()
{
	return Global_98796.f_345 > 0;
}

var func_97()
{
	var uVar0;

	func_107(&uVar0, UNK_0x4460E481B9E33ADA());
	func_106(&uVar0, UNK_0x8D199E381D262EEF());
	func_105(&uVar0, UNK_0xD8A54335F18763BA());
	func_100(&uVar0, UNK_0x972A296334C9D57B());
	func_99(&uVar0, UNK_0x118229AD063C3C1D());
	func_98(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_98(bool bParam0, int iParam1)
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

void func_99(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_100(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_104(*bParam0);
	iVar1 = func_102(*bParam0);
	if (iParam1 < 1 || iParam1 > func_101(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_101(bool bParam0, int iParam1)
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

int func_102(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_103(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_103(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_104(bool bParam0)
{
	return (bParam0 && 15);
}

void func_105(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_106(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_107(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_108(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];

	if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
	{
		uVar0 = iParam0;
		UNK_0x3CFFF3C8EACD8DC1(9, &uVar0, 1, 1);
	}
	else if (UNK_0xBA301E03A078FA59() || UNK_0x33A494591F2C1975())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		UNK_0x8DECFDD6715449E4(9, &cVar1);
	}
}

void func_109(char* sParam0, int iParam1, int iParam2)
{
	if (!UNK_0xEA6BC48857E0AC4C(&Global_95814))
	{
		UNK_0x73B08BBDEAC9B885(&Global_95814, 0, 0, 0, 1, 0);
		StringCopy(&Global_95814, "", 64);
	}
	StringCopy(&Global_95814, sParam0, 64);
	UNK_0x1AE6E2984A30CB9E(sParam0, iParam1, iParam2, func_217(0));
}

struct<2> func_110(int iParam0)
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

void func_111(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			func_112(bParam1, "Abigail1", func_12(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 1:
			func_112(bParam1, "Abigail2", func_12(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 2:
			func_112(bParam1, "Barry1", func_12(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 3:
			func_112(bParam1, "Barry2", func_12(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		case 4:
			func_112(bParam1, "Barry3", func_12(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 5:
			func_112(bParam1, "Barry3A", func_12(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 6:
			func_112(bParam1, "Barry3C", func_12(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 7:
			func_112(bParam1, "Barry4", func_12(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_113(iParam0), 0, 0);
			break;
		case 8:
			func_112(bParam1, "Dreyfuss1", func_12(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 9:
			func_112(bParam1, "Epsilon1", func_12(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 10:
			func_112(bParam1, "Epsilon2", func_12(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 11:
			func_112(bParam1, "Epsilon3", func_12(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 12:
			func_112(bParam1, "Epsilon4", func_12(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 13:
			func_112(bParam1, "Epsilon5", func_12(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 14:
			func_112(bParam1, "Epsilon6", func_12(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 15:
			func_112(bParam1, "Epsilon7", func_12(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 16:
			func_112(bParam1, "Epsilon8", func_12(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 17:
			func_112(bParam1, "Extreme1", func_12(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 18:
			func_112(bParam1, "Extreme2", func_12(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 19:
			func_112(bParam1, "Extreme3", func_12(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 20:
			func_112(bParam1, "Extreme4", func_12(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 21:
			func_112(bParam1, "Fanatic1", func_12(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_113(iParam0), 1, 0);
			break;
		case 22:
			func_112(bParam1, "Fanatic2", func_12(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_113(iParam0), 1, 0);
			break;
		case 23:
			func_112(bParam1, "Fanatic3", func_12(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_113(iParam0), 0, 1);
			break;
		case 24:
			func_112(bParam1, "Hao1", func_12(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_113(iParam0), 0, 1);
			break;
		case 25:
			func_112(bParam1, "Hunting1", func_12(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 26:
			func_112(bParam1, "Hunting2", func_12(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 27:
			func_112(bParam1, "Josh1", func_12(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 28:
			func_112(bParam1, "Josh2", func_12(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		case 29:
			func_112(bParam1, "Josh3", func_12(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		case 30:
			func_112(bParam1, "Josh4", func_12(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 31:
			func_112(bParam1, "Maude1", func_12(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 32:
			func_112(bParam1, "Minute1", func_12(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 33:
			func_112(bParam1, "Minute2", func_12(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 34:
			func_112(bParam1, "Minute3", func_12(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 35:
			func_112(bParam1, "MrsPhilips1", func_12(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 36:
			func_112(bParam1, "MrsPhilips2", func_12(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 37:
			func_112(bParam1, "Nigel1", func_12(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 38:
			func_112(bParam1, "Nigel1A", func_12(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		case 39:
			func_112(bParam1, "Nigel1B", func_12(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_113(iParam0), 1, 1);
			break;
		case 40:
			func_112(bParam1, "Nigel1C", func_12(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_113(iParam0), 1, 1);
			break;
		case 41:
			func_112(bParam1, "Nigel1D", func_12(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_113(iParam0), 1, 1);
			break;
		case 42:
			func_112(bParam1, "Nigel2", func_12(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		case 43:
			func_112(bParam1, "Nigel3", func_12(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		case 44:
			func_112(bParam1, "Omega1", func_12(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 45:
			func_112(bParam1, "Omega2", func_12(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 46:
			func_112(bParam1, "Paparazzo1", func_12(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 47:
			func_112(bParam1, "Paparazzo2", func_12(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 48:
			func_112(bParam1, "Paparazzo3", func_12(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 49:
			func_112(bParam1, "Paparazzo3A", func_12(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 50:
			func_112(bParam1, "Paparazzo3B", func_12(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 51:
			func_112(bParam1, "Paparazzo4", func_12(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 52:
			func_112(bParam1, "Rampage1", func_12(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 54:
			func_112(bParam1, "Rampage3", func_12(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 55:
			func_112(bParam1, "Rampage4", func_12(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 56:
			func_112(bParam1, "Rampage5", func_12(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 53:
			func_112(bParam1, "Rampage2", func_12(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 57:
			func_112(bParam1, "TheLastOne", func_12(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 58:
			func_112(bParam1, "Tonya1", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 59:
			func_112(bParam1, "Tonya2", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 60:
			func_112(bParam1, "Tonya3", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 61:
			func_112(bParam1, "Tonya4", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 62:
			func_112(bParam1, "Tonya5", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_112(bool bParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
{
	bParam0->f_4 = iParam5;
	*bParam0 = sParam1;
	bParam0->f_1 = { Param2 };
	bParam0->f_3 = iParam4;
	bParam0->f_5 = iParam6;
	bParam0->f_6 = { vParam7 };
	bParam0->f_9 = sParam10;
	StringCopy(&(bParam0->f_10), sParam11, 16);
	bParam0->f_14 = iParam12;
	bParam0->f_15 = sParam13;
	StringCopy(&(bParam0->f_16), sParam14, 24);
	bParam0->f_22 = iParam15;
	bParam0->f_23 = iParam16;
	bParam0->f_24 = iParam17;
	bParam0->f_25 = iParam18;
	bParam0->f_26 = iParam19;
	bParam0->f_27 = iParam20;
	bParam0->f_28 = iParam21;
	bParam0->f_29 = iParam22;
	bParam0->f_30 = iParam23;
	bParam0->f_31 = uParam24;
}

int func_113(int iParam0)
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

bool func_114(int iParam0)
{
	int iVar0;

	if (func_144(&(iParam0->f_1)))
	{
		if (!UNK_0xEA6BC48857E0AC4C(&(iParam0->f_9)))
		{
			func_134(1);
			func_132(iParam0, 1, func_133(*iParam0));
		}
		if (iParam0->f_27)
		{
			if (func_131(*iParam0))
			{
				while (!UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
				{
					func_191();
					SYSTEM::WAIT(0);
				}
			}
		}
		func_115(*iParam0);
		iVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&(iParam0->f_1), iParam0, 61, 35000);
		UNK_0x5E8C29AE121DF1C7(&(iParam0->f_1));
		if (UNK_0x62A1F4500E8F07E0())
		{
			func_371("Initial cutscene loaded and passing to RC mission.");
			UNK_0x357FE4830F757FC1(iVar0);
		}
		else
		{
			func_371("Initial cutscene wasn't loaded in time to pass to RC mission.");
			UNK_0x5C8D148FC238F38A();
		}
		return true;
	}
	return false;
}

void func_115(int iParam0)
{
	struct<2> Var0;

	func_130();
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, false);
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 250, false);
	}
	if (func_129(iParam0))
	{
		UNK_0xE731059548189243(UNK_0x16F2683693E537C9(), 0);
	}
	UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
	UNK_0x11CCD0ACA866C6C5(false, 1);
	UNK_0x11CCD0ACA866C6C5(3, 1);
	UNK_0x11CCD0ACA866C6C5(2, 1);
	if (Global_42596 == 1)
	{
		if (func_127(UNK_0x16F2683693E537C9()))
		{
			func_118(UNK_0x16F2683693E537C9());
		}
	}
	if (!func_208())
	{
		if (iParam0 < 63)
		{
			func_116(iParam0);
			Var0 = { func_12(iParam0) };
			UNK_0x974531784BE14213(1, &Var0);
		}
	}
}

void func_116(int iParam0)
{
	if (iParam0 < 63)
	{
		func_117();
		Global_76877 = iParam0;
		Global_76876 = 0;
		Global_76879 = 7;
	}
}

void func_117()
{
	if (Global_76876 != 6)
	{
	}
	if (Global_76881)
	{
		UNK_0xA5E3ADAAA4CD5D6C(15);
		Global_76881 = 0;
		Global_22350.f_8417 = 0;
	}
	Global_76876 = 6;
	Global_76878 = -1;
	Global_76877 = -1;
}

void func_118(bool bParam0)
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
	iVar0 = func_126(bParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0 /*5*/];
		func_121(1, iVar1, 1);
		return;
	}
	iVar2 = func_120(bParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_119(iVar2);
}

void func_119(int iParam0)
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

int func_120(bool bParam0)
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

void func_121(int iParam0, int iParam1, int iParam2)
{
	func_122(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_124(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_123();
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

int func_123()
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

bool func_124(int iParam0, int iParam1, int iParam2)
{
	if (func_125(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_125(int iParam0, int iParam1, int iParam2)
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

int func_126(bool bParam0)
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

bool func_127(bool bParam0)
{
	if (func_128(bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_128(bool bParam0)
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

bool func_129(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return false;
	}
	return true;
}

void func_130()
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

bool func_131(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return false;
	}
	return true;
}

void func_132(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_128(uParam0->f_28[iVar0]))
		{
			UNK_0xAA6B3A4292417750(uParam0->f_28[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_128(uParam0->f_35[iVar0]))
		{
			UNK_0xAA6B3A4292417750(uParam0->f_35[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_128(uParam0->f_41[iVar0]))
		{
			UNK_0xAA6B3A4292417750(uParam0->f_41[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xAA6B3A4292417750(UNK_0x16F2683693E537C9(), bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), bParam1);
		if (bParam2)
		{
			UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
		}
	}
}

bool func_133(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return false;
	}
	return true;
}

void func_134(bool bParam0)
{
	bool bVar0;

	bVar0 = UNK_0xA30EC016B12C03E4();
	if (!UNK_0x131F22FE6F47A65D(bVar0))
	{
		if (bParam0)
		{
		}
		UNK_0x98E4DC66A651C9FA(bVar0, bParam0, 16);
		UNK_0x98E4DC66A651C9FA(bVar0, bParam0, 32);
	}
	func_135(1, 1, 0, 0, 0, 0);
}

void func_135(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_143(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_142())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_141(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_143(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_141(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_139(UNK_0xD803B885F5E47A62())) && !func_137(UNK_0xD803B885F5E47A62(), 0)) && !func_136()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_139(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_136()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_137(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_138(-1, 0) == 8;
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

int func_138(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_54();
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

bool func_139(bool bParam0)
{
	if (func_137(bParam0, 0))
	{
		return true;
	}
	if (func_140())
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

bool func_140()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_141(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_142()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_143(int iParam0)
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

bool func_144(bool bParam0)
{
	if (!UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		UNK_0x92DCE5C81176D2B4(bParam0);
		while (!UNK_0x1FBF08B001C4788A(bParam0))
		{
			UNK_0x92DCE5C81176D2B4(bParam0);
			SYSTEM::WAIT(0);
		}
		return true;
	}
	func_371("Attempting to launch invalid script file [TERMINATING]");
	return false;
}

void func_145()
{
	Global_19671 = 0;
	func_146();
}

void func_146()
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

bool func_147()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

bool func_148(int iParam0, bool bParam1)
{
	struct<27> Var0;

	if (Global_76622)
	{
		func_371("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return false;
	}
	func_111(*iParam0, &Var0);
	if ((func_190(*iParam0) || func_188(*iParam0)) || Global_76867 == 1)
	{
		return true;
	}
	if (!UNK_0x338D6FF72D84D90F())
	{
		func_371("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return false;
	}
	if (func_180(*iParam0))
	{
		if (*iParam0 == 19)
		{
			func_179(iParam0->f_28[0]);
		}
		func_371("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return false;
	}
	if (iParam0->f_25 == 1)
	{
		if (!func_159(iParam0, 1, 0))
		{
			return false;
		}
	}
	else if (iParam0->f_16 == 0)
	{
		if (!func_159(iParam0, 0, 0))
		{
			return false;
		}
	}
	if (((((*iParam0 == 16 || *iParam0 == 9) || *iParam0 == 18) || *iParam0 == 22) || *iParam0 == 32) || *iParam0 == 51)
	{
		if (!func_156(iParam0, 1, 1))
		{
			if (*iParam0 == 16)
			{
				func_155(iParam0);
			}
			else
			{
				func_153(iParam0);
			}
			return false;
		}
	}
	else if (*iParam0 == 24)
	{
		if (!func_156(iParam0, 0, 1))
		{
			func_153(iParam0);
			return false;
		}
	}
	else if (*iParam0 == 6)
	{
		if (!func_156(iParam0, 0, 1))
		{
			return false;
		}
	}
	else if (iParam0->f_26 == 1)
	{
		if (!func_156(iParam0, 1, 0))
		{
			func_153(iParam0);
			return false;
		}
	}
	else if (iParam0->f_16 == 2 || iParam0->f_16 == 1)
	{
		if (!func_156(iParam0, 0, 0))
		{
			func_153(iParam0);
			return false;
		}
	}
	if (iParam0->f_16 == 2 || iParam0->f_16 == 1)
	{
		if (func_128(iParam0->f_35[0]))
		{
			if (!UNK_0x5A91F08DF773C39D(iParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, false, true, 0))
			{
				return false;
			}
		}
	}
	if (*iParam0 == 10)
	{
		if (UNK_0x681F21BF9F7B449B(-1, iParam0->f_17[0 /*3*/], 8f))
		{
			func_371("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return false;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Var0.f_26, func_227()))
		{
			func_371("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return false;
		}
	}
	if (func_152(&(iParam0->f_48)) && bParam1)
	{
		func_149(iParam0->f_28[0], &(iParam0->f_48), *iParam0);
	}
	return true;
}

void func_149(bool bParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (func_128(bParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_152(uParam1))
				{
					if (UNK_0xB4AE0788C1587752(*uParam1))
					{
						UNK_0x327AAEE25F323797(bParam0);
						if (iParam2 != 21)
						{
							if (func_72(uParam1->f_5, 0f, 0f, 0f, 0))
							{
								UNK_0xC6EB89C59F2AF6B8(bParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, false, 0, 0, 0);
							}
							else
							{
								UNK_0xDD353D0E9C789D0E(&iVar0);
								if (func_151(uParam1))
								{
									UNK_0x3E8E48829F3C7624(false, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, false, 2, 0);
								}
								else
								{
									UNK_0x3E8E48829F3C7624(false, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, false, 2, 0);
								}
								UNK_0x3E8E48829F3C7624(false, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, false, 2, 0);
								UNK_0x75ABDC5F81978924(iVar0);
								UNK_0x78ADC381772E3D54(bParam0, iVar0);
								UNK_0xF82EA857DA10E0CD(&iVar0);
							}
						}
						else
						{
							UNK_0x3E8E48829F3C7624(bParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, false, 2, 3);
						}
						uParam1->f_3 = 2;
					}
					else
					{
						uParam1->f_3 = 0;
					}
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			case 2:
				if (!func_151(uParam1) || !UNK_0xB4ECF989E2C1DAC8(bParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_150(iParam2) && !UNK_0x7069CC4DE1EA3FAA(bParam0, UNK_0x16F2683693E537C9(), 25f))
					{
						UNK_0xF96A174EE26D7588(bParam0, UNK_0x16F2683693E537C9(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_151(uParam1) && uParam1->f_4 == 0) && UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bParam0, true), 1) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			case 3:
				UNK_0xDD353D0E9C789D0E(&iVar1);
				if (func_72(uParam1->f_5, 0f, 0f, 0f, 0))
				{
					UNK_0xC6EB89C59F2AF6B8(false, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, false, 0, 0, 0);
					UNK_0xC6EB89C59F2AF6B8(false, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, false, 0, 0, 0);
				}
				else
				{
					UNK_0x3E8E48829F3C7624(false, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, false, 2, 0);
					UNK_0x3E8E48829F3C7624(false, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, false, 2, 0);
				}
				UNK_0x75ABDC5F81978924(iVar1);
				UNK_0x78ADC381772E3D54(bParam0, iVar1);
				UNK_0xF82EA857DA10E0CD(&iVar1);
				uParam1->f_4 = 1;
				if (func_150(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			case 5:
				if (!func_150(iParam2) || UNK_0x7069CC4DE1EA3FAA(bParam0, UNK_0x16F2683693E537C9(), 10f))
				{
					if (func_72(uParam1->f_5, 0f, 0f, 0f, 0))
					{
						UNK_0xC6EB89C59F2AF6B8(bParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, false, 0, 0, 0);
					}
					else
					{
						UNK_0x3E8E48829F3C7624(bParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, false, 2, 0);
					}
					uParam1->f_3 = 2;
				}
				break;
		}
	}
}

bool func_150(int iParam0)
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return true;
	}
	return false;
}

bool func_151(var uParam0)
{
	if (UNK_0xEA6BC48857E0AC4C(uParam0->f_2))
	{
		return false;
	}
	return true;
}

bool func_152(var uParam0)
{
	if (UNK_0xEA6BC48857E0AC4C(*uParam0) || UNK_0xEA6BC48857E0AC4C(uParam0->f_1))
	{
		return false;
	}
	return true;
}

void func_153(int iParam0)
{
	int iVar0;
	int iVar1;

	if (*iParam0 == 52)
	{
		func_154(&(iParam0->f_41[1]));
		func_154(&(iParam0->f_41[2]));
	}
	if (func_128(UNK_0x16F2683693E537C9()))
	{
		iVar0 = 0;
		while (iVar0 <= (iParam0->f_28 - 1))
		{
			if (func_127(iParam0->f_28[iVar0]))
			{
				if (!UNK_0x405E212DDE472467(iParam0->f_28[iVar0], 0))
				{
					UNK_0x20641932E5104B25(iParam0->f_28[iVar0], true, 0);
					UNK_0x1E9649458B15960F(iParam0->f_28[0], false);
				}
				UNK_0xFADC0A217229F6B5(iParam0->f_28[iVar0], true);
				if (*iParam0 == 34)
				{
					if (func_128(iParam0->f_41[0]))
					{
						UNK_0x20641932E5104B25(iParam0->f_41[0], true, 0);
						UNK_0x1E9649458B15960F(iParam0->f_41[0], false);
					}
				}
				switch (*iParam0)
				{
					case 19:
						func_179(iParam0->f_28[iVar0]);
						break;
					case 8:
						UNK_0x3F423BF5B8125A50("rcmcollect_paperleadinout@");
						while (!UNK_0xB4AE0788C1587752("rcmcollect_paperleadinout@"))
						{
							SYSTEM::WAIT(0);
						}
						UNK_0xDD353D0E9C789D0E(&iVar1);
						UNK_0xC6EB89C59F2AF6B8(false, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, false, 0, 0, 0);
						UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 10000f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iVar1);
						UNK_0x78ADC381772E3D54(iParam0->f_28[iVar0], iVar1);
						UNK_0xF82EA857DA10E0CD(&iVar1);
						break;
					case 0:
					case 1:
						UNK_0x3F423BF5B8125A50("rcmabigail");
						while (!UNK_0xB4AE0788C1587752("rcmabigail"))
						{
							SYSTEM::WAIT(0);
						}
						UNK_0xDD353D0E9C789D0E(&iVar1);
						UNK_0xC6EB89C59F2AF6B8(false, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, false, 0, 0, 0);
						UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 10000f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iVar1);
						UNK_0x78ADC381772E3D54(iParam0->f_28[iVar0], iVar1);
						UNK_0xF82EA857DA10E0CD(&iVar1);
						break;
					case 32:
						UNK_0x3F423BF5B8125A50("rcmminute1");
						while (!UNK_0xB4AE0788C1587752("rcmminute1"))
						{
							SYSTEM::WAIT(0);
						}
						UNK_0xDD353D0E9C789D0E(&iVar1);
						if (iVar0 == 0)
						{
							UNK_0xC6EB89C59F2AF6B8(false, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, false, 0, 0, 0);
						}
						else
						{
							UNK_0xC6EB89C59F2AF6B8(false, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, false, 0, 0, 0);
						}
						UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 10000f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iVar1);
						UNK_0x78ADC381772E3D54(iParam0->f_28[iVar0], iVar1);
						UNK_0xF82EA857DA10E0CD(&iVar1);
						break;
					case 24:
						UNK_0x3F423BF5B8125A50("special_ped@hao@base");
						while (!UNK_0xB4AE0788C1587752("special_ped@hao@base"))
						{
							SYSTEM::WAIT(0);
						}
						UNK_0xDD353D0E9C789D0E(&iVar1);
						UNK_0xC6EB89C59F2AF6B8(false, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, false, 0, 0, 0);
						UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 10000f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iVar1);
						UNK_0x78ADC381772E3D54(iParam0->f_28[iVar0], iVar1);
						UNK_0xF82EA857DA10E0CD(&iVar1);
						break;
					default:
						UNK_0x8FB4E06C94958F84(iParam0->f_28[iVar0]);
						UNK_0xF3268524E9BE6D6E(iParam0->f_28[iVar0], UNK_0x16F2683693E537C9(), 10000f, -1, 0, 0);
						break;
				}
			}
			iVar0++;
		}
	}
}

void func_154(bool bParam0)
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

void func_155(int iParam0)
{
	int iVar0;

	if (func_128(UNK_0x16F2683693E537C9()))
	{
		iVar0 = 0;
		while (iVar0 <= (iParam0->f_28 - 1))
		{
			if (func_127(iParam0->f_28[iVar0]))
			{
				UNK_0xAFF39FB306F8E232(iParam0->f_28[iVar0], 1, false);
				UNK_0x11AD11297DC58CC7(iParam0->f_28[iVar0], false);
				UNK_0xFADC0A217229F6B5(iParam0->f_28[iVar0], true);
				UNK_0x6C3AE6E278DB3D0E(iParam0->f_28[iVar0], UNK_0x16F2683693E537C9(), 0, 16);
				UNK_0x6DAD7906B73F064D(&(iParam0->f_28[iVar0]));
			}
			iVar0++;
		}
	}
}

bool func_156(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (bParam1)
	{
		iVar1 = (iParam0->f_35 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (func_127(UNK_0x16F2683693E537C9()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (UNK_0xC844350D5D58C99A(iParam0->f_35[iVar0]))
			{
				if (UNK_0x437347B10A200C4B(iParam0->f_35[iVar0], 0))
				{
					func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return false;
				}
				if (!UNK_0xDF1306B443CD3D15(iParam0->f_35[iVar0], 0))
				{
					func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return false;
				}
				if (UNK_0xB87D13D0C064E9D1(iParam0->f_35[iVar0], UNK_0x16F2683693E537C9(), 0))
				{
					func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return false;
				}
				if (UNK_0x7F6DC62EA9922664(iParam0->f_35[iVar0]) < 850)
				{
					func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return false;
				}
				if (bParam2)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if (UNK_0x1B3D109B39CC2C89(iParam0->f_35[iVar0], UNK_0x16F2683693E537C9()) && UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) > 5f)
						{
							func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return false;
						}
						bVar2 = UNK_0x728870EB733D12A1();
						if (func_158(bVar2))
						{
							if (UNK_0x134B62B726CEC8E6(bVar2) == joaat("TOWTRUCK") || UNK_0x134B62B726CEC8E6(bVar2) == joaat("TOWTRUCK2"))
							{
								if (func_158(iParam0->f_35[iVar0]))
								{
									if (UNK_0x6D18156F72BE0773(bVar2, iParam0->f_35[iVar0]))
									{
										func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return false;
									}
								}
							}
						}
					}
					else
					{
						bVar3 = UNK_0x728870EB733D12A1();
						if (func_158(bVar3))
						{
							if (UNK_0x1B3D109B39CC2C89(iParam0->f_35[iVar0], bVar3) && UNK_0x9C66D99E63E8E24C(bVar3) > 6f)
							{
								func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return false;
							}
						}
						if (*iParam0 == 16)
						{
							if (func_157(UNK_0x16F2683693E537C9(), iParam0->f_35[iVar0]))
							{
								func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return false;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return true;
}

bool func_157(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam1, 0))
		{
			iVar0 = UNK_0x3C66DF04E6EA3587(bParam0);
			if (iVar0 == bParam1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_158(bool bParam0)
{
	if (func_128(bParam0))
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

bool func_159(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		iVar1 = (iParam0->f_28 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (*iParam0 == 16)
	{
		iParam2 = 1;
	}
	if (*iParam0 == 30)
	{
		iParam2 = 1;
	}
	if (func_127(UNK_0x16F2683693E537C9()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (UNK_0xC844350D5D58C99A(iParam0->f_28[iVar0]))
			{
				if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_28[iVar0]))
				{
					if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
					{
						if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), iParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_153(iParam0);
							}
							else
							{
								func_155(iParam0);
							}
							if (func_147())
							{
								func_145();
							}
							func_371("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return false;
						}
					}
					if ((UNK_0x688A90832774AB83(iParam0->f_28[iVar0]) || UNK_0xE147126C9AD09A60(iParam0->f_28[iVar0])) || UNK_0xD24FAF25ADC00F44(iParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_153(iParam0);
						}
						else
						{
							func_155(iParam0);
						}
						func_371("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return false;
					}
					if (UNK_0x869EFD0BC0868856(iParam0->f_28[iVar0]))
					{
						if (UNK_0x12DE711B1C681E9E(iParam0->f_28[iVar0], UNK_0x16F2683693E537C9(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_153(iParam0);
							}
							else
							{
								func_155(iParam0);
							}
							func_371("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return false;
						}
					}
					if (func_178(*iParam0))
					{
						if (!func_202(*iParam0))
						{
							if (func_173(iParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_153(iParam0);
								}
								else
								{
									func_155(iParam0);
								}
								func_371("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return false;
							}
						}
						if (UNK_0x681F21BF9F7B449B(-1, UNK_0x68F4C0EC296D3901(iParam0->f_28[iVar0], true), 15f))
						{
							if (iParam2 == 0)
							{
								func_153(iParam0);
							}
							else
							{
								func_155(iParam0);
							}
							func_371("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return false;
						}
						if (func_161(iParam0->f_28[iVar0], 1126825984 /* Float: 170f */))
						{
							if (iParam2 == 0)
							{
								func_153(iParam0);
							}
							else
							{
								func_155(iParam0);
							}
							func_371("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return false;
						}
					}
					if (!func_160(*iParam0))
					{
						if (UNK_0x681F21BF9F7B449B(-1, UNK_0x68F4C0EC296D3901(iParam0->f_28[iVar0], true), 5f))
						{
							if (iParam2 == 0)
							{
								func_153(iParam0);
							}
							else
							{
								func_155(iParam0);
							}
							func_371("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return false;
						}
						if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
						{
							if (iParam2 == 0)
							{
								func_153(iParam0);
							}
							else
							{
								func_155(iParam0);
							}
							func_371("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return false;
						}
					}
				}
				else
				{
					func_371("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*iParam0 == 34)
					{
						if (func_128(iParam0->f_41[0]))
						{
							UNK_0x20641932E5104B25(iParam0->f_41[0], true, 0);
							UNK_0x1E9649458B15960F(iParam0->f_41[0], false);
						}
					}
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

bool func_160(int iParam0)
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return true;
	}
	return false;
}

bool func_161(bool bParam0, float fParam1)
{
	bool bVar0;

	if (func_128(UNK_0x16F2683693E537C9()) && func_128(bParam0))
	{
		if (func_172(bParam0) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0))
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
				if (func_162(bParam0, fParam1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_162(bool bParam0, float fParam1)
{
	return func_163(bParam0, UNK_0x16F2683693E537C9(), fParam1, 1, 250, 7);
}

bool func_163(bool bParam0, bool bParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;

	iVar4 = func_171(bParam0, bParam1);
	if (!func_128(bParam0) || !func_128(bParam1))
	{
		if (iVar4 != -1)
		{
			func_170(&(Local_37[iVar4 /*4*/]));
		}
		return false;
	}
	if (!func_167(bParam0, bParam1, fParam2, iParam3))
	{
		return false;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_166();
		if (iVar4 == -1)
		{
			return false;
		}
		Local_37[iVar4 /*4*/].f_1 = bParam0;
		Local_37[iVar4 /*4*/].f_2 = bParam1;
	}
	vVar1 = { UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f) };
	bVar0 = func_164(&(Local_37[iVar4 /*4*/]), vVar1, bParam1, &(Local_37[iVar4 /*4*/].f_3), bParam0, iParam5);
	return (bVar0 || (UNK_0x1C0640BA9A7327B3() - Local_37[iVar4 /*4*/].f_3) < iParam4);
}

int func_164(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	var uVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar7;
	int iVar8;

	bVar7 = false;
	if (!func_128(bParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_165(bParam4, iParam7) };
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
		func_128(bVar7);
		if (UNK_0x940C1429253D3B1B(bVar7) == bParam4)
		{
			if (bLocal_78)
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
		func_128(bVar7);
		if (UNK_0x405E212DDE472467(bParam4, 0))
		{
			if (UNK_0x96A5FE5834B81CE7(bVar7) == UNK_0x6937EA2286828455(bParam4, 0))
			{
				if (bLocal_78)
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

Vector3 func_165(bool bParam0, int iParam1)
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

int func_166()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_167(bool bParam0, bool bParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = { func_169(UNK_0x68F4C0EC296D3901(bParam1, true) - UNK_0x68F4C0EC296D3901(bParam0, true)) };
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
		vVar3 = { func_169(UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 5f, 0f) - UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_168(vVar3, vVar0);
	if (fVar6 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return false;
	}
	return true;
}

float func_168(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_169(vector3 vParam0)
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

void func_170(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_171(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if (Local_37[iVar0 /*4*/].f_1 == bParam0 && Local_37[iVar0 /*4*/].f_2 == bParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_172(bool bParam0)
{
	if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0) && UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
	{
		return true;
	}
	return false;
}

bool func_173(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_128(UNK_0x16F2683693E537C9()) && func_128(bParam0))
	{
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar2, 1);
		if (iVar2 == joaat("WEAPON_PETROLCAN"))
		{
			fVar0 = 3f;
			bVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_177(bParam0, bParam1, fVar0, bVar1))
			{
				return true;
			}
			if (func_174(bParam0, bVar1, bParam3, bParam4))
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
				if (func_177(bParam0, bParam1, fVar0, bVar1))
				{
					return true;
				}
			}
			if (func_174(bParam0, bVar1, bParam3, bParam4))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_174(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
				if (func_175(bParam0, bParam1))
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
			if (func_175(bParam0, bParam1))
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

bool func_175(bool bParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;

	if ((((UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_GRENADE"), bParam1, &vVar1, &uVar0, 0) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_SMOKEGRENADE"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_BZGAS"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_STICKYBOMB"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_MOLOTOV"), bParam1, &vVar1, &uVar0, 0))
	{
		if (func_176(bParam0, vVar1, 90f, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_176(bool bParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = { func_169(vParam1 - UNK_0x68F4C0EC296D3901(bParam0, true)) };
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
		vVar3 = { func_169(UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 5f, 0f) - UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_168(vVar3, vVar0);
	if (fVar6 <= SYSTEM::COS((fParam4 / 2f)))
	{
		return false;
	}
	return true;
}

bool func_177(bool bParam0, bool bParam1, float fParam2, bool bParam3)
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

bool func_178(int iParam0)
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return false;
	}
	return true;
}

void func_179(bool bParam0)
{
	int iVar0;

	if (func_128(UNK_0x16F2683693E537C9()) && func_128(bParam0))
	{
		UNK_0x3F423BF5B8125A50("rcmextreme3");
		while (!UNK_0xB4AE0788C1587752("rcmextreme3"))
		{
			SYSTEM::WAIT(0);
		}
		UNK_0xDD353D0E9C789D0E(&iVar0);
		UNK_0xC6EB89C59F2AF6B8(false, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, false, 0, 0, 0);
		UNK_0xD93EE6549113F9E1(false, 1);
		UNK_0x05D36E45031B6514(false, 64.6f, -737.8f, 44.2f);
		UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 10000f, -1, 0, 0);
		UNK_0x75ABDC5F81978924(iVar0);
		UNK_0x78ADC381772E3D54(bParam0, iVar0);
		UNK_0xF82EA857DA10E0CD(&iVar0);
	}
}

bool func_180(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_186();
	}
	if (iParam0 == -1)
	{
		return true;
	}
	if (func_190(iParam0))
	{
		return false;
	}
	if (!func_184(4))
	{
		if (func_188(iParam0))
		{
		}
		else
		{
			return true;
		}
	}
	if (func_183() && !func_182())
	{
		return true;
	}
	if (!func_181(iParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) != 0)
			{
				return true;
			}
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0 /*6*/], 2))
	{
		return true;
	}
	return false;
}

bool func_181(int iParam0)
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return true;
	}
	return false;
}

bool func_182()
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

bool func_183()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

int func_184(int iParam0)
{
	return func_185(iParam0, Global_41431);
}

int func_185(int iParam0, int iParam1)
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

int func_186()
{
	return func_187(UNK_0xBB0808A181D4745C(), 0);
}

int func_187(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar33;
	int iVar34;

	iVar33 = UNK_0x12AB0310C2281427(bParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_111(iVar0, &bVar1);
		if (UNK_0x12AB0310C2281427(bVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

bool func_188(int iParam0)
{
	if ((func_189() && Global_98744.f_11 == 6) && iParam0 == func_187(&(Global_98744.f_3), 0))
	{
		return true;
	}
	return false;
}

bool func_189()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return false;
	}
	return true;
}

bool func_190(int iParam0)
{
	if (func_217(0))
	{
		if (Global_76868.f_1 == 7)
		{
			if (Global_76868 == iParam0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_191()
{
	func_196(0);
	func_195();
	func_192();
}

void func_192()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (func_193(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 10.5f, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0))
			{
				if (UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), -828834893) != 1)
				{
					UNK_0x75CDA8644CD3B5F5(UNK_0x16F2683693E537C9(), 0, 0);
				}
			}
		}
	}
}

bool func_193(bool bParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_194(bParam0);
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

void func_194(bool bParam0)
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

void func_195()
{
	UNK_0x38C3A68D7861DCFD(0, 21, 1);
	UNK_0x38C3A68D7861DCFD(0, 37, 1);
	UNK_0x38C3A68D7861DCFD(0, 25, 1);
	UNK_0x38C3A68D7861DCFD(0, 141, 1);
	UNK_0x38C3A68D7861DCFD(0, 140, 1);
	UNK_0x38C3A68D7861DCFD(0, 24, 1);
	UNK_0x38C3A68D7861DCFD(0, 257, 1);
	UNK_0x38C3A68D7861DCFD(0, 22, 1);
	UNK_0x38C3A68D7861DCFD(0, 23, 1);
}

void func_196(int iParam0)
{
	if (func_201())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_200(0))
		{
			func_197(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_197(int iParam0)
{
	if (func_201())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_199())
		{
			func_198(1, 1);
		}
		else
		{
			func_198(0, 0);
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
	if (!func_142())
	{
		Global_19486.f_1 = 3;
	}
}

void func_198(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_200(0))
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

bool func_199()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_200(int iParam0)
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

bool func_201()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

bool func_202(int iParam0)
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return true;
	}
	return false;
}

bool func_203(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iParam0 = func_186();
	}
	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_205(&(Global_110725[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return false;
	}
	func_204(iParam0);
	return true;
}

void func_204(int iParam0)
{
	Global_110725[iParam0 /*10*/].f_4 = 1;
	Global_110725[iParam0 /*10*/].f_5 = 0;
	Global_110725[iParam0 /*10*/].f_6 = 0;
	Global_110725[iParam0 /*10*/] = 0;
}

int func_205(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_207(0))
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
		if (!func_184(iParam2))
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
			func_206(uParam0, iParam4);
		}
	}
	return 2;
}

void func_206(var uParam0, int iParam1)
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

bool func_207(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_184(iParam0))
	{
		return false;
	}
	return true;
}

bool func_208()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return true;
	}
	return false;
}

bool func_209(int iParam0)
{
	bool bVar0;

	if (Global_76622)
	{
		func_371("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return false;
	}
	if (!Global_111638.f_9080 && !func_217(1))
	{
		func_371("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return false;
	}
	if (!func_210(iParam0))
	{
		Global_110725[iParam0 /*10*/].f_1 = 1;
		func_371("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return false;
	}
	if (Global_98744.f_11 == 6)
	{
		if (Global_98744 < 9)
		{
			func_111(iParam0, &bVar0);
			if (UNK_0x7F8A39872A07D2CE(&(Global_98744.f_3), bVar0))
			{
				func_371("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return false;
			}
		}
	}
	if (UNK_0x8A22C4C08282BF26(joaat("CANDIDATE_CONTROLLER")) == 0)
	{
		Global_110725[iParam0 /*10*/].f_1 = 1;
		func_371("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return false;
	}
	return true;
}

bool func_210(int iParam0)
{
	var uVar0;

	func_111(iParam0, &uVar0);
	if (!func_184(4))
	{
		if (func_188(iParam0))
		{
		}
		else
		{
			return false;
		}
	}
	if (func_183() && !func_182())
	{
		return false;
	}
	if (func_216(iParam0))
	{
		return false;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_186();
	}
	if (iParam0 == -1)
	{
		return false;
	}
	if (!func_190(iParam0))
	{
		if (!func_215(iParam0))
		{
			return false;
		}
		if (!func_214(iParam0))
		{
			return false;
		}
		if (func_213(iParam0))
		{
			return false;
		}
	}
	if (iParam0 == 58)
	{
		if (func_211(5))
		{
			Global_110725[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_110725[iParam0 /*10*/].f_3 == 1)
	{
		return false;
	}
	return true;
}

bool func_211(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (Global_98796.f_343 == 0)
	{
		return false;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_211(iVar0))
			{
				return true;
			}
			iVar0++;
		}
	}
	else if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		func_212(iParam0, &uVar1);
		iVar9 = UNK_0x0D1736C2E221BCEA(Global_93782[iParam0 /*10*/].f_3, &uVar1);
		if (iVar9 != 0 && Global_98796.f_343 == iVar9)
		{
			return true;
		}
	}
	return false;
}

bool func_212(int iParam0, bool bParam1)
{
	StringCopy(bParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(bParam1, "v_michael", 32);
			break;
		case 5:
			StringCopy(bParam1, "v_franklins", 32);
			break;
		case 6:
			StringCopy(bParam1, "v_franklinshouse", 32);
			break;
		case 2:
		case 1:
			if (UNK_0xBCFF5481C5F58C19("TrevorsTrailer"))
			{
				StringCopy(bParam1, "v_trailer", 32);
			}
			else if (UNK_0xBCFF5481C5F58C19("TrevorsTrailerTidy"))
			{
				StringCopy(bParam1, "V_TrailerTIDY", 32);
			}
			else if (UNK_0xBCFF5481C5F58C19("TrevorsTrailerTrash"))
			{
				StringCopy(bParam1, "V_TrailerTRASH", 32);
			}
			break;
		case 3:
			StringCopy(bParam1, "v_trevors", 32);
			break;
		case 4:
			StringCopy(bParam1, "v_strip3", 32);
			break;
		case 8:
		case 7:
		case 9:
			StringCopy(bParam1, "v_psycheoffice", 32);
			break;
	}
	return !UNK_0x7F8A39872A07D2CE(bParam1, "");
}

bool func_213(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0 /*6*/], 3);
}

bool func_214(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0 /*6*/], 2);
}

bool func_215(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0 /*6*/], false);
}

bool func_216(int iParam0)
{
	if (func_181(iParam0))
	{
		return false;
	}
	else if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) != 0)
		{
			return true;
		}
	}
	return false;
}

bool func_217(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

char* func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Rampage1";
		case 1:
			return "Rampage3";
		case 2:
			return "Rampage4";
		case 3:
			return "Rampage5";
		case 4:
			return "Rampage2";
		default:
			break;
	}
	return "";
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 52;
		case 1:
			return 54;
		case 2:
			return 55;
		case 3:
			return 56;
		case 4:
			return 53;
		default:
			break;
	}
	return -1;
}

bool func_220()
{
	bool bVar0;

	bVar0 = false;
	if (!func_225(UNK_0x16F2683693E537C9()))
	{
		return bVar0;
	}
	if (Global_110725[56 /*10*/].f_3)
	{
		return bVar0;
	}
	if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
	{
		if (bLocal_290)
		{
			UNK_0xA37A90C62806D848(1);
			func_224("RAMP_HELP_CRIM", -1);
			bLocal_290 = false;
		}
		bVar0 = true;
	}
	else if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (bLocal_289)
		{
			UNK_0xA37A90C62806D848(1);
			func_224("RAMP_HELP_FOOT", -1);
			bLocal_289 = false;
		}
		bVar0 = true;
	}
	else if ((func_223(0) || UNK_0x991B1F0980C62628()) || func_222())
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			if (func_223(0))
			{
			}
			else if (UNK_0x991B1F0980C62628())
			{
			}
			else if (func_222())
			{
			}
			UNK_0xA37A90C62806D848(1);
			bLocal_291 = false;
		}
		bVar0 = true;
	}
	else if (func_355(108))
	{
		if (!bLocal_291)
		{
			if (!func_2("RAMP_HELP_TRIG"))
			{
				UNK_0xA37A90C62806D848(1);
				func_221("RAMP_HELP_TRIG");
			}
			bLocal_291 = true;
		}
		bVar0 = !UNK_0x06F8112AA79C53D9(2, 51);
	}
	return bVar0;
}

void func_221(bool bParam0)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

bool func_222()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_223(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

void func_224(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_225(bool bParam0)
{
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return false;
	}
	return !UNK_0x437347B10A200C4B(bParam0, 0);
}

int func_226(float fParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (!func_225(UNK_0x16F2683693E537C9()))
	{
		return -1;
	}
	vVar4 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		vVar1 = { Global_31146[(iLocal_286 + iVar0) /*23*/][0 /*3*/] };
		if (UNK_0x0EB28750412C3A5A(vVar4, vVar1, 1) <= fParam0 && UNK_0x755FF954DAE327E1((vVar4.z - vVar1.z)) < 1.5f)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_227()
{
	func_59();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_228(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1[5];
	int iVar7;

	iVar0 = 0;
	iVar1[0] = 52;
	iVar1[1] = 53;
	iVar1[2] = 54;
	iVar1[3] = 55;
	iVar1[4] = 56;
	if (!func_352(&iVar1, iParam0, vParam1, 5f))
	{
		func_371(" Didn't know which RC To Launch");
		func_356(iParam0, 1);
	}
	if (!func_209(*iParam0))
	{
		func_371(" RC Can't Launch");
		func_356(iParam0, 1);
	}
	if (func_351(*iParam0))
	{
		while (true)
		{
			SYSTEM::WAIT(0);
			if (func_350(*iParam0))
			{
				func_356(iParam0, 1);
			}
		}
	}
	func_274(iParam0);
	UNK_0x536F1BE96C726C4B(vParam1, iParam0->f_15, 1, 0, 0, false);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (*iParam0 == 52 || *iParam0 == 53)
		{
			if (func_128(iParam0->f_28[0]))
			{
				if (UNK_0x681F21BF9F7B449B(-1, UNK_0x68F4C0EC296D3901(iParam0->f_28[0], true), 5.1f))
				{
					if (*iParam0 == 52)
					{
						iVar7 = 0;
						while (iVar7 < iParam0->f_41)
						{
							if (UNK_0xC844350D5D58C99A(iParam0->f_41[iVar7]))
							{
								if ((func_128(iParam0->f_28[0]) && UNK_0x50B5F6F3C29E9380(iParam0->f_41[iVar7], iParam0->f_28[0])) || (func_128(iParam0->f_28[1]) && UNK_0x50B5F6F3C29E9380(iParam0->f_41[iVar7], iParam0->f_28[1])))
								{
									UNK_0xF690C84DADBB3551(&(iParam0->f_41[iVar7]));
								}
							}
							iVar7++;
						}
					}
					UNK_0x64B1AD81046CB800(iParam0->f_28[0], 100, 500, 0, 1, 1, 0);
					UNK_0xCEE7E5D42799D65A(iParam0->f_28[0], 1000, 1, 0);
					if (func_128(iParam0->f_28[1]))
					{
						UNK_0x64B1AD81046CB800(iParam0->f_28[1], 100, 500, 0, 1, 1, 0);
						UNK_0xCEE7E5D42799D65A(iParam0->f_28[1], 1000, 1, 0);
					}
					func_371("Sitting Rampage attacked with explosives, cleaning up");
					func_356(iParam0, 1);
				}
			}
			if (func_128(iParam0->f_28[1]))
			{
				if (UNK_0x681F21BF9F7B449B(-1, UNK_0x68F4C0EC296D3901(iParam0->f_28[1], true), 5.1f))
				{
					if (*iParam0 == 52)
					{
						iVar7 = 0;
						while (iVar7 < iParam0->f_41)
						{
							if (UNK_0xC844350D5D58C99A(iParam0->f_41[iVar7]))
							{
								if ((func_128(iParam0->f_28[0]) && UNK_0x50B5F6F3C29E9380(iParam0->f_41[iVar7], iParam0->f_28[0])) || (func_128(iParam0->f_28[1]) && UNK_0x50B5F6F3C29E9380(iParam0->f_41[iVar7], iParam0->f_28[1])))
								{
									UNK_0xF690C84DADBB3551(&(iParam0->f_41[iVar7]));
								}
							}
							iVar7++;
						}
					}
					UNK_0x64B1AD81046CB800(iParam0->f_28[1], 100, 500, 0, 1, 1, 0);
					UNK_0xCEE7E5D42799D65A(iParam0->f_28[1], 1000, 1, 0);
					if (func_128(iParam0->f_28[0]))
					{
						UNK_0x64B1AD81046CB800(iParam0->f_28[0], 100, 500, 0, 1, 1, 0);
						UNK_0xCEE7E5D42799D65A(iParam0->f_28[0], 1000, 1, 0);
					}
					func_371("Sitting Rampage attacked with explosives, cleaning up");
					func_356(iParam0, 1);
				}
			}
		}
		if (func_273(iParam0))
		{
			func_272(iParam0);
			func_371(" RC combat happening in area, tell peds to flee");
			func_153(iParam0);
			func_356(iParam0, 1);
		}
		if (!func_148(iParam0, 1))
		{
			func_371(" RC Is Not Fine And In Range");
			func_356(iParam0, 1);
		}
		if (func_271(52))
		{
			if (UNK_0x8ED9A0095B69A728("Rampage1"))
			{
				func_371(" Turning Off Scenario Group For Rampage 1");
				UNK_0x2723524E448F4BDD("Rampage1", false);
			}
		}
		func_270(*iParam0);
		func_262(&iLocal_287, &(iParam0->f_9), vParam1);
		if (iVar0 == 0 && iLocal_287 != -1)
		{
			func_261(iParam0, &uLocal_292);
			if (UNK_0x62A1F4500E8F07E0())
			{
				func_371(" Cutscene Loaded");
				iVar0 = 1;
			}
		}
		vLocal_296 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		if ((!(*iParam0 == 52 && vLocal_296.z > 34f) && !(*iParam0 == 53 && vLocal_296.z > 71f)) && !(*iParam0 == 54 && vLocal_296.z > 30f))
		{
			if (func_249(iParam0, 0))
			{
				if (*iParam0 == 53)
				{
					if (func_246(iParam0))
					{
						func_371(" Trigger Conditions Met");
						func_191();
						if (!func_5(iParam0))
						{
							func_371(" RC Can't Launch");
							func_356(iParam0, 1);
						}
						func_371(" RC Launcher Waiting To Terminate");
						if (func_3(iParam0))
						{
							func_371(" Ready To Terminate");
							func_356(iParam0, 0);
						}
					}
				}
				else if (func_245(iParam0))
				{
					func_371(" Trigger Conditions Met");
					func_191();
					if (!func_5(iParam0))
					{
						func_371(" RC Can't Launch");
						func_356(iParam0, 1);
					}
					func_371(" RC Launcher Waiting To Terminate");
					if (func_3(iParam0))
					{
						func_371(" Ready To Terminate");
						func_356(iParam0, 0);
					}
				}
			}
			else
			{
				if (*iParam0 == 53)
				{
					func_229(iParam0);
				}
				if (UNK_0x8C74DE122769E1BF())
				{
					iLocal_113 = -1;
					UNK_0x29D5132FBDCF2B1E(0);
					UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
				}
			}
		}
	}
}

void func_229(int iParam0)
{
	bool bVar0;

	bVar0 = "misstrvram_2";
	switch (iLocal_114)
	{
		case 0:
			UNK_0x3F423BF5B8125A50(bVar0);
			if (UNK_0xB4AE0788C1587752(bVar0))
			{
				iLocal_114++;
			}
			break;
		case 1:
			if (func_128(iParam0->f_28[0]))
			{
				if (func_244(iParam0->f_28[0], UNK_0x16F2683693E537C9(), 1) < 30f && UNK_0x0A059E0DB9253280(iParam0->f_28[0]))
				{
					func_243(&uLocal_119, 0, iParam0->f_28[0], "RAMPAGEHIPSTER", 0, 1);
					iLocal_114++;
				}
			}
			break;
		case 2:
			iLocal_115[0] = UNK_0xE9744DB7B8CA6965(vLocal_106, vLocal_109, 2);
			if (func_128(iParam0->f_28[0]))
			{
				func_230(&uLocal_119, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_1", 7, 0, 0);
				UNK_0x915804B434753CBD(iParam0->f_28[0], iLocal_115[0], bVar0, "hipster_post_post_irony", 8f, -8f, 513, 0, 1148846080, 0);
			}
			UNK_0xC90224D9E95E5E3A(iLocal_115[0], false);
			UNK_0xEFC3DF9D33E248D8(iLocal_115[0], true);
			iLocal_114++;
			break;
		case 3:
			if (UNK_0x69DF961355195C3C(iLocal_115[0]))
			{
				if (UNK_0xA45992A6CE82FB43(iLocal_115[0]) >= 0.95f)
				{
					iLocal_114++;
				}
			}
			break;
		case 4:
			iLocal_115[1] = UNK_0xE9744DB7B8CA6965(vLocal_106, vLocal_109, 2);
			if (func_128(iParam0->f_28[0]))
			{
				func_230(&uLocal_119, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_2", 7, 0, 0);
				UNK_0x915804B434753CBD(iParam0->f_28[0], iLocal_115[1], bVar0, "hipster_self_hating_hipster", 8f, -8f, 513, 0, 1148846080, 0);
			}
			UNK_0xC90224D9E95E5E3A(iLocal_115[1], false);
			UNK_0xEFC3DF9D33E248D8(iLocal_115[1], true);
			iLocal_114++;
			break;
		case 5:
			if (UNK_0x69DF961355195C3C(iLocal_115[1]))
			{
				if (UNK_0xA45992A6CE82FB43(iLocal_115[1]) >= 0.95f)
				{
					iLocal_114++;
				}
			}
			break;
		case 6:
			iLocal_115[2] = UNK_0xE9744DB7B8CA6965(vLocal_106, vLocal_109, 2);
			if (func_128(iParam0->f_28[0]))
			{
				UNK_0x915804B434753CBD(iParam0->f_28[0], iLocal_115[2], bVar0, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
			}
			UNK_0xC90224D9E95E5E3A(iLocal_115[2], true);
			UNK_0xEFC3DF9D33E248D8(iLocal_115[2], false);
			iLocal_114++;
			break;
		case 7:
			break;
	}
}

bool func_230(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_242(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 1;
	Global_21798 = 0;
	Global_21802 = 0;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_231(sParam2, iParam4, 0);
}

int func_231(char* sParam0, int iParam1, bool bParam2)
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
					func_146();
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
		if (func_241(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_240();
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
				func_239();
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
				if (func_238())
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
			if (func_142())
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
			func_237();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_236();
		func_232();
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
		func_146();
	}
	return 0;
}

void func_232()
{
	if (!func_233())
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

bool func_233()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_90())
	{
		return false;
	}
	if (func_234(UNK_0xD803B885F5E47A62()))
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

bool func_234(int iParam0)
{
	return func_235(iParam0, 20);
}

bool func_235(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

void func_236()
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

void func_237()
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

bool func_238()
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

void func_239()
{
	if (func_60(14))
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
		Global_19486 = func_227();
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

void func_240()
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

bool func_241(bool bParam0, int iParam1)
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

void func_242(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_243(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

float func_244(bool bParam0, bool bParam1, int iParam2)
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

bool func_245(int iParam0)
{
	func_191();
	if (iLocal_113 < 0)
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(iParam0->f_28[1], true)) < 25f)
		{
			return true;
		}
		switch (*iParam0)
		{
			case 52:
				UNK_0xC0B0B9E466C0ED17(iParam0->f_28[0], 0.1f, 0f, 0.9f, 1, -1, 2500, 2000, false);
				UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), iParam0->f_28[0], -1, 0, 2);
				UNK_0x4F4B34F617B087DF(1);
				UNK_0xDA9C58A3CC25952B(-5f);
				UNK_0x4BF9B75F44D4B6CE(0.1f);
				UNK_0x910A71FBA7D16B6B(0f);
				UNK_0x908430F113C0DC6D(0.3f);
				UNK_0xF0B0E93CF50F0322(40f);
				break;
			case 54:
				UNK_0xC0B0B9E466C0ED17(iParam0->f_28[0], 0f, -0.1f, 0.9f, 1, -1, 2500, 2000, false);
				UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), iParam0->f_28[0], -1, 0, 2);
				UNK_0x4F4B34F617B087DF(1);
				UNK_0xDA9C58A3CC25952B(-10f);
				UNK_0x4BF9B75F44D4B6CE(-0.9f);
				UNK_0x910A71FBA7D16B6B(0f);
				UNK_0x908430F113C0DC6D(0.35f);
				UNK_0xF0B0E93CF50F0322(40f);
				break;
			case 55:
				UNK_0xC0B0B9E466C0ED17(iParam0->f_28[1], 0f, 0f, 0.9f, 1, -1, 2500, 2000, false);
				UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), iParam0->f_28[1], -1, 0, 2);
				UNK_0x4F4B34F617B087DF(1);
				UNK_0xDA9C58A3CC25952B(-8f);
				UNK_0x4BF9B75F44D4B6CE(-0.9f);
				UNK_0x910A71FBA7D16B6B(0.1f);
				UNK_0x908430F113C0DC6D(0.35f);
				UNK_0xF0B0E93CF50F0322(40f);
				break;
			case 56:
				UNK_0xC0B0B9E466C0ED17(iParam0->f_28[1], 0f, 0f, 0f, 1, -1, 2500, 2000, false);
				UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), iParam0->f_28[1], -1, 0, 2);
				UNK_0x4F4B34F617B087DF(1);
				UNK_0xDA9C58A3CC25952B(-5f);
				UNK_0x4BF9B75F44D4B6CE(0.15f);
				UNK_0x910A71FBA7D16B6B(0f);
				UNK_0x908430F113C0DC6D(0.3f);
				UNK_0xF0B0E93CF50F0322(40f);
				break;
		}
		iLocal_113 = UNK_0x1C0640BA9A7327B3() + 2500;
	}
	else if (UNK_0x1C0640BA9A7327B3() > iLocal_113)
	{
		iLocal_113 = -1;
		return true;
	}
	return false;
}

bool func_246(int iParam0)
{
	func_191();
	switch (iLocal_284)
	{
		case 0:
			if (func_128(iParam0->f_28[0]))
			{
				func_247();
				iLocal_284++;
			}
			break;
		case 1:
			if (func_128(iParam0->f_28[0]))
			{
				if (!func_147())
				{
					if (func_230(&uLocal_119, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_3", 8, 0, 0))
					{
						iLocal_285 = UNK_0xE9744DB7B8CA6965(vLocal_106, vLocal_109, 2);
						UNK_0x915804B434753CBD(iParam0->f_28[0], iLocal_285, "misstrvram_2", "hipster_cunts_in_america", 8f, -8f, 513, 0, 1148846080, 0);
						UNK_0xC0B0B9E466C0ED17(iParam0->f_28[0], 0f, 0f, 0.5f, 1, -1, 2500, 2000, false);
						UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), iParam0->f_28[0], -1, 0, 2);
						UNK_0x4F4B34F617B087DF(1);
						UNK_0xDA9C58A3CC25952B(0f);
						UNK_0x4BF9B75F44D4B6CE(0.1f);
						UNK_0x910A71FBA7D16B6B(0f);
						UNK_0x908430F113C0DC6D(0.35f);
						UNK_0xF0B0E93CF50F0322(40f);
						iLocal_284++;
					}
				}
			}
			break;
		case 2:
			if (func_128(iParam0->f_28[0]))
			{
				if (!func_147())
				{
					iLocal_284++;
				}
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_247()
{
	Global_19671 = 0;
	func_248();
}

void func_248()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

bool func_249(int iParam0, int iParam1)
{
	switch (iParam0->f_16)
	{
		case 0:
			if (*iParam0 == 12)
			{
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0, true, 0))
				{
					if (func_128(iParam0->f_28[0]))
					{
						if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(iParam0->f_28[0], true), 1) < 3f)
						{
							if (func_254(2))
							{
								if (func_253(iParam0->f_27))
								{
									func_252(iParam0->f_27, *iParam0);
									func_371("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
									return true;
								}
							}
						}
					}
					else
					{
						return false;
					}
				}
				else if (func_128(iParam0->f_28[0]))
				{
					if (func_251(iParam0))
					{
						if (func_254(2))
						{
							if (func_253(iParam0->f_27))
							{
								func_252(iParam0->f_27, *iParam0);
								return true;
							}
						}
					}
				}
				else
				{
					return false;
				}
			}
			else if (*iParam0 == 21)
			{
				if ((((!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, true, 0) && !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, true, 0)) && !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, true, 0)) && !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0, true, 0)) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0, true, 0))
				{
					if (func_128(iParam0->f_28[0]))
					{
						if (func_251(iParam0))
						{
							if (func_254(2))
							{
								if (func_253(iParam0->f_27))
								{
									func_252(iParam0->f_27, *iParam0);
									return true;
								}
							}
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
			else if (*iParam0 == 22)
			{
				if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0, true, 0))
				{
					if (func_128(iParam0->f_28[0]))
					{
						if (func_251(iParam0))
						{
							if (func_254(2))
							{
								if (func_253(iParam0->f_27))
								{
									func_252(iParam0->f_27, *iParam0);
									return true;
								}
							}
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
			else if (func_128(iParam0->f_28[0]))
			{
				if (func_251(iParam0))
				{
					if (func_254(2))
					{
						if (func_253(iParam0->f_27))
						{
							func_252(iParam0->f_27, *iParam0);
							return true;
						}
					}
				}
			}
			else
			{
				return false;
			}
			break;
		case 2:
			if (func_128(iParam0->f_35[0]))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), iParam0->f_35[0], 0))
				{
					if (func_254(3))
					{
						func_252(iParam0->f_27, *iParam0);
						return true;
					}
				}
				else if (iParam1 == 1)
				{
					func_250();
				}
			}
			else
			{
				return false;
			}
			break;
		case 1:
			if (UNK_0xC844350D5D58C99A(iParam0->f_35[0]))
			{
				if (!UNK_0x437347B10A200C4B(iParam0->f_35[0], 0))
				{
					if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(iParam0->f_35[0], true), 1) < iParam0->f_15)
					{
						if (func_254(2))
						{
							if (func_253(iParam0->f_27))
							{
								func_252(iParam0->f_27, *iParam0);
								return true;
							}
						}
					}
				}
			}
			else
			{
				return false;
			}
			break;
		case 3:
			if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), iParam0->f_17[0 /*3*/], 1) < iParam0->f_15)
			{
				if (func_254(2))
				{
					if (func_253(iParam0->f_27))
					{
						func_252(iParam0->f_27, *iParam0);
						return true;
					}
				}
			}
			else
			{
				return false;
			}
			break;
		case 4:
			if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), iParam0->f_17[0 /*3*/], iParam0->f_17[1 /*3*/], false, true, 0))
			{
				if (func_254(2))
				{
					if (func_253(iParam0->f_27))
					{
						func_252(iParam0->f_27, *iParam0);
						return true;
					}
				}
			}
			else
			{
				return false;
			}
			break;
		case 5:
			if (*iParam0 == 6)
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					if (func_128(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)))
					{
						if (UNK_0x4906F8A34E9F4814(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), joaat("TOWTRUCK")) || UNK_0x4906F8A34E9F4814(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), joaat("TOWTRUCK2")))
						{
							if (UNK_0x6D18156F72BE0773(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), iParam0->f_35[0]))
							{
								if (func_254(3))
								{
									return true;
								}
							}
						}
						else if ((UNK_0x4906F8A34E9F4814(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), joaat("CARGOBOB")) || UNK_0x4906F8A34E9F4814(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), joaat("CARGOBOB2"))) || UNK_0x4906F8A34E9F4814(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), joaat("CARGOBOB3")))
						{
							if (UNK_0x2709213DA9C091FF(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)) && UNK_0xED55EA714F84A53E(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), iParam0->f_35[0]))
							{
								if (func_254(3))
								{
									return true;
								}
							}
						}
					}
				}
			}
			else if (*iParam0 == 10)
			{
				if (UNK_0x504A57ECC0B1E81C(UNK_0x16F2683693E537C9()) >= 2f)
				{
					if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, true, 0))
					{
						if (func_254(2))
						{
							if (func_253(iParam0->f_27))
							{
								func_252(iParam0->f_27, *iParam0);
								func_371("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return true;
							}
						}
					}
				}
			}
			else if (*iParam0 == 46)
			{
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0, true, 0))
				{
					return false;
				}
			}
			else if (*iParam0 == 31)
			{
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0, true, 0))
				{
					if (func_254(2))
					{
						if (func_253(1))
						{
							func_252(1, *iParam0);
							func_371("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return true;
						}
					}
				}
			}
			else if (*iParam0 == 39)
			{
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0, true, 0))
				{
					if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0, true, 0))
					{
						if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, true, 0))
						{
							if (func_254(2))
							{
								if (func_253(iParam0->f_27))
								{
									func_252(iParam0->f_27, *iParam0);
									func_371("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return true;
								}
							}
						}
					}
				}
			}
			if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), iParam0->f_17[0 /*3*/], iParam0->f_17[1 /*3*/], iParam0->f_24, 0, true, 0))
			{
				if (*iParam0 == 45)
				{
					if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, true, 0))
					{
						return false;
					}
				}
				if (func_254(2))
				{
					if (func_253(iParam0->f_27))
					{
						func_252(iParam0->f_27, *iParam0);
						return true;
					}
				}
			}
			else
			{
				return false;
			}
			break;
		case 6:
			break;
	}
	return false;
}

void func_250()
{
	func_30(&(Global_102203.f_2890), &Global_102203, 0, 1, 1, 0);
}

bool func_251(int iParam0)
{
	float fVar0;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && iParam0->f_27)
	{
		if (*iParam0 == 27 || *iParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(iParam0->f_28[0], true), 1) < (iParam0->f_15 + fVar0))
		{
			return true;
		}
	}
	else if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(iParam0->f_28[0], true), 1) < iParam0->f_15)
	{
		return true;
	}
	return false;
}

void func_252(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		if (!func_131(iParam1))
		{
			return;
		}
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			func_371("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()) || UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
			{
				func_371("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				UNK_0x56FDC9ADE35F7DB0(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), false, true, 0);
			}
			func_191();
		}
	}
}

bool func_253(bool bParam0)
{
	bool bVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xA30EC016B12C03E4()))
	{
		if (UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
		{
			return true;
		}
		else if (bParam0)
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				bVar0 = UNK_0x728870EB733D12A1();
				if (func_158(bVar0))
				{
					if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()) || UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
					{
						if ((!UNK_0xE608C809F9416F00(bVar0) && !UNK_0xE934758D273C899A(bVar0)) && UNK_0x9C66D99E63E8E24C(bVar0) < 1f)
						{
							return true;
						}
					}
					else if (!UNK_0xE934758D273C899A(bVar0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_254(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_227();
				if (!func_39(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_222()) || Global_110685) || Global_30770) || func_260()) || func_241(8, -1)) || func_96()) || func_259()) || func_258()) || func_257()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_222()) || Global_30770) || func_260()) || func_241(8, -1)) || func_258()) || func_96()) || func_259()) || func_257()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_222()) || Global_110685) || Global_30770) || func_260()) || func_241(8, -1)) || func_258()) || func_96()) || func_259()) || func_257()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_222()) || Global_110685) || Global_30770) || func_260()) || func_241(8, -1)) || func_96()) || func_259()) || func_257()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_222() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_241(8, -1)) || func_257()) || func_256()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_241(8, -1) || func_96()) || func_259()) || func_256()) || func_255())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_222()) || Global_30770) || func_260()) || func_241(8, -1)) || func_259()) || func_258()) || func_257()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_222()) || func_259()) || Global_110685) || Global_30770) || func_260()) || Global_42596) || func_241(8, -1)) || func_258()) || func_256()) || func_257()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_222()) || Global_110685) || Global_30770) || func_260()) || func_241(8, -1)) || func_258()) || func_256()) || func_96()) || func_259()) || func_257())
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

bool func_255()
{
	return Global_98783.f_1;
}

bool func_256()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_257()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_258()
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

bool func_259()
{
	return Global_98796.f_346 > 0;
}

bool func_260()
{
	return Global_1312877;
}

void func_261(int iParam0, var uParam1)
{
	if (UNK_0x75EECC9B0572F772())
	{
		if (func_128(UNK_0x16F2683693E537C9()))
		{
			UNK_0xA0A8D79ACBBD1CB8("Trevor", UNK_0x16F2683693E537C9(), UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()));
		}
		switch (*iParam0)
		{
			case 52:
				if (func_128(iParam0->f_28[0]))
				{
					(*uParam1)[0] = "TriggerHappy_WhiteTrash";
					UNK_0xA0A8D79ACBBD1CB8((*uParam1)[0], iParam0->f_28[0], 0);
				}
				if (func_128(iParam0->f_28[1]))
				{
					(*uParam1)[1] = "Nervous_WhiteTrash";
					UNK_0xA0A8D79ACBBD1CB8((*uParam1)[1], iParam0->f_28[1], 0);
				}
				break;
			case 53:
				if (func_128(iParam0->f_28[0]))
				{
					(*uParam1)[0] = "Rampage_Hipster";
					UNK_0xA0A8D79ACBBD1CB8((*uParam1)[0], iParam0->f_28[0], 0);
				}
				break;
			case 54:
				if (func_128(iParam0->f_28[0]))
				{
					(*uParam1)[0] = "Armed_Mexican_Goon";
					UNK_0xA0A8D79ACBBD1CB8((*uParam1)[0], iParam0->f_28[0], 0);
					UNK_0x7656EB524FEAB9B3((*uParam1)[0], 8, true, false, false);
				}
				if (func_128(iParam0->f_28[1]))
				{
					(*uParam1)[1] = "Mexican_Goon";
					UNK_0xA0A8D79ACBBD1CB8((*uParam1)[1], iParam0->f_28[1], 0);
				}
				break;
			case 55:
				if (func_128(iParam0->f_28[0]))
				{
					(*uParam1)[0] = "Thug";
					UNK_0xA0A8D79ACBBD1CB8((*uParam1)[0], iParam0->f_28[0], 0);
					UNK_0x7656EB524FEAB9B3((*uParam1)[0], 10, false, true, false);
				}
				if (func_128(iParam0->f_28[1]))
				{
					(*uParam1)[1] = "Armed_Thug";
					UNK_0xA0A8D79ACBBD1CB8((*uParam1)[1], iParam0->f_28[1], 0);
					UNK_0x7656EB524FEAB9B3((*uParam1)[1], 10, true, false, false);
				}
				break;
			case 56:
				if (func_128(iParam0->f_28[0]))
				{
					(*uParam1)[0] = "Army_Guy_Right";
					UNK_0xA0A8D79ACBBD1CB8((*uParam1)[0], iParam0->f_28[0], 0);
				}
				if (func_128(iParam0->f_28[1]))
				{
					(*uParam1)[1] = "Army_Guy_Left";
					UNK_0xA0A8D79ACBBD1CB8((*uParam1)[1], iParam0->f_28[1], 0);
				}
				break;
		}
	}
}

void func_262(int iParam0, bool bParam1, vector3 vParam2)
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (!UNK_0xEA6BC48857E0AC4C(bParam1))
		{
			if (Global_41431 == 17)
			{
				if (*iParam0 != -1)
				{
					func_268(iParam0);
				}
			}
			else if (func_267())
			{
				if (*iParam0 != -1)
				{
					func_268(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_266(UNK_0x16F2683693E537C9(), vParam2, 1) <= 100f)
				{
					func_265(iParam0, 1);
				}
			}
			else
			{
				switch (func_264(*iParam0))
				{
					case 1:
						if (UNK_0x7F8A39872A07D2CE(bParam1, "JOSH_1_INT_CONCAT"))
						{
							UNK_0x8E590B419F1E5182(bParam1, 14, 8);
						}
						else
						{
							UNK_0xAE1670DD12E839C3(bParam1, 8);
						}
						UNK_0x084B7FAC53E6CA0A(2);
						func_263(*iParam0, 1);
						break;
					case 2:
						UNK_0x55BE34EDDEA0AC9E(0);
						UNK_0x5C8D148FC238F38A();
						UNK_0x084B7FAC53E6CA0A(0);
						func_263(*iParam0, 0);
						break;
				}
				if (func_266(UNK_0x16F2683693E537C9(), vParam2, 1) > 120f)
				{
					func_268(iParam0);
				}
			}
		}
	}
}

void func_263(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_76618 == iParam0)
		{
			Global_76619 = iParam0;
		}
	}
	else if (Global_76619 == iParam0)
	{
		Global_76619 = -1;
	}
}

int func_264(int iParam0)
{
	if (Global_76618 == iParam0)
	{
		if (Global_76619 == -1)
		{
			if (Global_76617 < UNK_0xF4CCC8CB6DE7F1AE())
			{
				return 1;
			}
		}
	}
	else if (Global_76619 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_265(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (Global_76615 < 5)
	{
		Global_76604[Global_76615 /*2*/] = 0;
		Global_76604[Global_76615 /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_76615)
			{
				if (Global_76604[iVar1 /*2*/] == Global_76604[Global_76615 /*2*/])
				{
					Global_76604[Global_76615 /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_76604[Global_76615 /*2*/];
		Global_76615++;
		Global_76616 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

float func_266(bool bParam0, vector3 vParam1, int iParam4)
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

bool func_267()
{
	return Global_96053;
}

void func_268(int iParam0)
{
	UNK_0x55BE34EDDEA0AC9E(0);
	UNK_0x5C8D148FC238F38A();
	func_269(iParam0);
}

void func_269(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_76619 == *iParam0)
	{
		func_263(*iParam0, 0);
	}
	if (Global_76618 == *iParam0)
	{
		Global_76618 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_76615)
	{
		if (Global_76604[iVar1 /*2*/] == *iParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_76615 - 2))
	{
		Global_76604[iVar2 /*2*/] = Global_76604[iVar2 + 1 /*2*/];
		Global_76604[iVar2 /*2*/].f_1 = Global_76604[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_76604[(Global_76615 - 1) /*2*/] = -1;
	Global_76604[(Global_76615 - 1) /*2*/].f_1 = 3;
	Global_76615 = (Global_76615 - 1);
	Global_76616 = 1;
	Global_76617 = UNK_0xF4CCC8CB6DE7F1AE();
	*iParam0 = -1;
}

void func_270(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_186();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_110725[iParam0 /*10*/].f_1 = 1;
}

bool func_271(int iParam0)
{
	return Global_110725[iParam0 /*10*/].f_1;
}

void func_272(int iParam0)
{
	if (*iParam0 == 52)
	{
		func_371(" RAMPAGE 1 - FORCE FREEZE CHAIRS AND PRE-RELEASE FOR B*2124538");
		if (UNK_0xC844350D5D58C99A(iParam0->f_41[3]))
		{
			UNK_0x1E9649458B15960F(iParam0->f_41[3], true);
			UNK_0xEEEE2E5FA6F78DF0(&(iParam0->f_41[3]));
			iParam0->f_41[3] = 0;
		}
		if (UNK_0xC844350D5D58C99A(iParam0->f_41[4]))
		{
			UNK_0x1E9649458B15960F(iParam0->f_41[4], true);
			UNK_0xEEEE2E5FA6F78DF0(&(iParam0->f_41[4]));
			iParam0->f_41[4] = 0;
		}
	}
}

bool func_273(int iParam0)
{
	if ((*iParam0 == 54 || *iParam0 == 55) || *iParam0 == 56)
	{
		if (UNK_0x7D563EECE9515353(UNK_0x16F2683693E537C9()) > 0)
		{
			return true;
		}
	}
	return false;
}

void func_274(int iParam0)
{
	switch (*iParam0)
	{
		case 52:
			func_349(iParam0);
			iLocal_299 = func_348();
			break;
		case 53:
			func_342(iParam0);
			iLocal_299 = func_340();
			break;
		case 54:
			func_339(iParam0);
			break;
		case 55:
			func_338(iParam0);
			iLocal_299 = func_337();
			break;
		case 56:
			func_275(iParam0);
			break;
		default:
			break;
	}
	if (iLocal_299 != 0)
	{
	}
	iParam0->f_16 = 0;
	if (*iParam0 == 53)
	{
		iParam0->f_15 = 15f;
	}
	else
	{
		iParam0->f_15 = 12f;
	}
	iParam0->f_25 = 1;
}

void func_275(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = "misstvrram_5";
	bVar1 = joaat("S_M_Y_MARINE_03");
	bVar2 = joaat("CRUSADER");
	UNK_0x523BCC9DC80CD82F(bVar1);
	UNK_0x523BCC9DC80CD82F(bVar2);
	UNK_0x3F423BF5B8125A50(bVar0);
	UNK_0x6D0C93EE4FBA9307(joaat("WEAPON_GRENADELAUNCHER"), 31, 0);
	while ((!UNK_0xB87F6CF6E5628C67(bVar1) || !UNK_0xB87F6CF6E5628C67(bVar2)) || !UNK_0xB4AE0788C1587752(bVar0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_335(&(iParam0->f_28[0]), bVar1, -1299.4f, 2506.24f, 21.07f, -122.79f, 0))
	{
		SYSTEM::WAIT(0);
	}
	func_334(&(iParam0->f_28[0]));
	UNK_0x5F2AA9E2843E9403(iParam0->f_28[0], "RAMP:PED 0");
	UNK_0xC6EB89C59F2AF6B8(iParam0->f_28[0], bVar0, "marines_idle_a", 8f, -8f, -1, 1, false, 0, 0, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], false, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], true, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 2, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 3, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 4, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 5, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 6, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 7, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 8, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 9, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 10, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 11, false, false, 0);
	UNK_0x3BFC3B9ADD2EE7B7(iParam0->f_28[0], false);
	UNK_0x3BFC3B9ADD2EE7B7(iParam0->f_28[0], true);
	UNK_0x3BFC3B9ADD2EE7B7(iParam0->f_28[0], 2);
	UNK_0x3BFC3B9ADD2EE7B7(iParam0->f_28[0], 3);
	UNK_0x3BFC3B9ADD2EE7B7(iParam0->f_28[0], 4);
	UNK_0x3BFC3B9ADD2EE7B7(iParam0->f_28[0], 5);
	UNK_0x3BFC3B9ADD2EE7B7(iParam0->f_28[0], 6);
	UNK_0x3BFC3B9ADD2EE7B7(iParam0->f_28[0], 7);
	UNK_0x3BFC3B9ADD2EE7B7(iParam0->f_28[0], 8);
	while (!func_335(&(iParam0->f_28[1]), bVar1, -1299.49f, 2505.53f, 21.05f, -101.94f, 0))
	{
		SYSTEM::WAIT(0);
	}
	func_334(&(iParam0->f_28[1]));
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], false, true, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], true, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 2, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 3, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 4, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 5, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 6, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 7, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 8, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 9, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 10, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 11, false, false, 0);
	UNK_0x3BFC3B9ADD2EE7B7(iParam0->f_28[1], false);
	UNK_0x3BFC3B9ADD2EE7B7(iParam0->f_28[1], true);
	UNK_0x3BFC3B9ADD2EE7B7(iParam0->f_28[1], 2);
	UNK_0x3BFC3B9ADD2EE7B7(iParam0->f_28[1], 3);
	UNK_0x3BFC3B9ADD2EE7B7(iParam0->f_28[1], 4);
	UNK_0x3BFC3B9ADD2EE7B7(iParam0->f_28[1], 5);
	UNK_0x3BFC3B9ADD2EE7B7(iParam0->f_28[1], 6);
	UNK_0x3BFC3B9ADD2EE7B7(iParam0->f_28[1], 7);
	UNK_0x3BFC3B9ADD2EE7B7(iParam0->f_28[1], 8);
	UNK_0x5F2AA9E2843E9403(iParam0->f_28[1], "RAMP:PED 1");
	UNK_0xC6EB89C59F2AF6B8(iParam0->f_28[1], bVar0, "marines_idle_b", 8f, -8f, -1, 1, false, 0, 0, 0);
	while (!func_333(&(iParam0->f_35[0]), bVar2, -1298.16f, 2504.153f, 21.062f, 165.48f))
	{
		SYSTEM::WAIT(0);
	}
	UNK_0xB9FD7450C0DAB575(iParam0->f_35[0], 1084227584 /* Float: 5f */);
	func_332(&(iParam0->f_35[0]));
	UNK_0xD3421E391490133B(iParam0->f_35[0], true, false);
	UNK_0xD3421E391490133B(iParam0->f_35[0], true, true);
	UNK_0x1E9649458B15960F(iParam0->f_35[0], true);
	if (!func_276(&(iParam0->f_41[0]), joaat("WEAPON_GRENADELAUNCHER"), -1297.84f, 2505.91f, 19.34f, func_331(-0.5f)))
	{
	}
	else
	{
		UNK_0x20641932E5104B25(iParam0->f_41[0], false, 0);
		UNK_0xA47B46945FF6DE74(iParam0->f_41[0], -1297.84f, 2505.91f, 19.34f, 1, 0, 0, 1);
		UNK_0xD8F6A53F4799FAFE(iParam0->f_41[0], func_331(-0.5f));
		UNK_0x1E9649458B15960F(iParam0->f_41[0], true);
	}
	StringCopy(&(iParam0->f_9), "TRVRAM_5_CON", 24);
	iParam0->f_27 = 0;
	UNK_0x71199B01895C6202(bVar1);
	UNK_0x71199B01895C6202(bVar2);
}

bool func_276(bool bParam0, bool bParam1, vector3 vParam2, bool bParam5)
{
	bool bVar0;
	var uVar1;
	int iVar8;

	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		UNK_0xF690C84DADBB3551(bParam0);
		*bParam0 = 0;
	}
	bVar0 = UNK_0x6B7EC7B5B6B57364(bParam1);
	UNK_0x523BCC9DC80CD82F(bVar0);
	iVar8 = UNK_0x1C0640BA9A7327B3() + 10000;
	while (UNK_0x1C0640BA9A7327B3() < iVar8)
	{
		if (UNK_0xB87F6CF6E5628C67(bVar0))
		{
			*bParam0 = UNK_0x5ACD4E66C7BF0F49(bParam1, -1, vParam2, 1, 1065353216 /* Float: 1f */, 0, 0, 1);
			UNK_0x71199B01895C6202(bVar0);
			if (func_330(&uVar1, bParam1, joaat("GUN_ROOT")))
			{
				if (UNK_0xD59C425D3CEABECE(*bParam0, func_277(&uVar1, bParam1, joaat("GUN_ROOT"), 0)))
				{
					UNK_0x78FB27E299143AC1(*bParam0, func_277(&uVar1, bParam1, joaat("GUN_ROOT"), 0));
				}
				else if (UNK_0xD59C425D3CEABECE(*bParam0, func_277(&uVar1, bParam1, joaat("GUN_ROOT"), 1)))
				{
					UNK_0x78FB27E299143AC1(*bParam0, func_277(&uVar1, bParam1, joaat("GUN_ROOT"), 1));
				}
			}
			if (UNK_0xC844350D5D58C99A(*bParam0))
			{
				UNK_0xA47B46945FF6DE74(*bParam0, vParam2, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(*bParam0, bParam5);
				return true;
			}
		}
		SYSTEM::WAIT(0);
	}
	UNK_0x71199B01895C6202(bVar0);
	return false;
}

int func_277(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	int iVar7;
	int iVar8;

	func_329(&Var0, *uParam0, uParam0->f_4, uParam0->f_6, uParam0->f_1);
	iVar8 = 0;
	while (func_278(&Var0, bParam1, iVar7, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			if (iParam3 == iVar8)
			{
				return Var0;
			}
			iVar8++;
		}
		iVar7++;
	}
	return 0;
}

bool func_278(var uParam0, bool bParam1, int iParam2, bool bParam3)
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
	bool bVar13;
	int iVar14;
	var uVar15;
	struct<4> Var54;

	func_329(uParam0, 0, 989182658, 0, 0);
	switch (bParam1)
	{
		case joaat("WEAPON_PISTOL"):
			if (func_328(iLocal_105))
			{
				if (!func_319(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_PISTOL"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
						case 4:
							func_329(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSUPP"), 1, 0);
							break;
						case 5:
							func_329(uParam0, joaat("COMPONENT_PISTOL_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSUPP"), 1, 0);
							break;
						case 4:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
					case 1:
						func_329(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
					case 2:
						func_329(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
					case 3:
						func_329(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSUPP"), 1, 0);
						break;
					case 4:
						func_329(uParam0, joaat("COMPONENT_PISTOL_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSUPP"), 1, 0);
					break;
				case 4:
					func_329(uParam0, joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_APPISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_APPISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSUPP"), 1, 0);
					break;
				case 4:
					func_329(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_MICROSMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_MICROSMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPSCOP"), 1, 0);
					break;
				case 4:
					func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
					break;
				case 5:
					func_329(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_SMG"):
			if (func_328(iLocal_105))
			{
				if (!func_319(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SMG"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
						case 4:
							func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
						case 5:
							func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPSCOP"), 1, 0);
							break;
						case 6:
							func_329(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
						case 7:
							func_329(uParam0, joaat("COMPONENT_SMG_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
						case 4:
							func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPSCOP"), 1, 0);
							break;
						case 5:
							func_329(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
						case 6:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
					case 1:
						func_329(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
					case 2:
						func_329(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPCLIP"), 3, 0);
						break;
					case 3:
						func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
					case 4:
						func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPSCOP"), 1, 0);
						break;
					case 5:
						func_329(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
					case 6:
						func_329(uParam0, joaat("COMPONENT_SMG_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			if (func_328(iLocal_105))
			{
				if (!func_319(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_ASSAULTRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
						case 4:
							func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
						case 5:
							func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
						case 6:
							func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPSCOP"), 1, 0);
							break;
						case 7:
							func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
							break;
						case 8:
							func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
						case 4:
							func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
						case 5:
							func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPSCOP"), 1, 0);
							break;
						case 6:
							func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
							break;
						case 7:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
					case 1:
						func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
					case 2:
						func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
						break;
					case 3:
						func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
						break;
					case 4:
						func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
					case 5:
						func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPSCOP"), 1, 0);
						break;
					case 6:
						func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
						break;
					case 7:
						func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			if (func_328(iLocal_105))
			{
				if (!func_319(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_CARBINERIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
						case 4:
							func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
						case 5:
							func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
						case 6:
							func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
							break;
						case 7:
							func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
						case 8:
							func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
						case 4:
							func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
						case 5:
							func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
							break;
						case 6:
							func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
						case 7:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
					case 1:
						func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
					case 2:
						func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
						break;
					case 3:
						func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
						break;
					case 4:
						func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
					case 5:
						func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
						break;
					case 6:
						func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
					case 7:
						func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPSCOP"), 1, 0);
					break;
				case 4:
					func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
					break;
				case 5:
					func_329(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_MG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_MG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_02"), joaat("WAPSCOP"), 1, 0);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_MG_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			if (func_328(iLocal_105))
			{
				if (!func_319(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_COMBATMG"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
						case 4:
							func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
							break;
						case 5:
							func_329(uParam0, joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
							break;
						case 4:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
					case 1:
						func_329(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
					case 2:
						func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
						break;
					case 3:
						func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
						break;
					case 4:
						func_329(uParam0, joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
				case 4:
					func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_SNIPERRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPSCOP"), 1, 1);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPSCOP"), 2, 0);
					break;
				case 4:
					func_329(uParam0, joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			if (func_328(iLocal_105))
			{
				if (!func_319(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_HEAVYSNIPER"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPSCOP"), 1, 1);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPSCOP"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPSCOP"), 1, 1);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPSCOP"), 2, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
					case 1:
						func_329(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPSCOP"), 1, 1);
						break;
					case 2:
						func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPSCOP"), 2, 0);
						break;
				}
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPSCOP"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_MINIGUN_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_ASSAULTSMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_ASSAULTSMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPSCOP"), 1, 0);
					break;
				case 4:
					func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
					break;
				case 5:
					func_329(uParam0, joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_PISTOL50_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_PISTOL50_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
					break;
				case 4:
					func_329(uParam0, joaat("COMPONENT_PISTOL50_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
				case 4:
					func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 5, 0);
					break;
				case 5:
					func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
				case 6:
					func_329(uParam0, 0, joaat("WAPGRIP"), 1, 1);
					break;
				case 7:
					func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGRIP"), 2, 0);
					break;
				case 8:
					func_329(uParam0, 0, joaat("WAPFLSHLASR_2"), 1, 1);
					break;
				case 9:
					func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR_2"), 2, 0);
					break;
				case 10:
					func_329(uParam0, 0, joaat("WAPSCOP_2"), 1, 1);
					break;
				case 11:
					func_329(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP_2"), 2, 0);
					break;
				case 12:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPSCOP_2"), 3, 0);
					break;
				case 13:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPSCOP_2"), 4, 0);
					break;
				case 14:
					func_329(uParam0, 0, joaat("WAPSUPP_2"), 1, 1);
					break;
				case 15:
					func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP_2"), 2, 0);
					break;
				case 16:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP_2"), 3, 0);
					break;
				case 17:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP_2"), 4, 0);
					break;
				case 18:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP_2"), 5, 0);
					break;
				case 19:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP_2"), 6, 0);
					break;
				case 20:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP_2"), 7, 0);
					break;
				case 21:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP_2"), 8, 0);
					break;
				case 22:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP_2"), 9, 0);
					break;
				case 23:
					func_329(uParam0, joaat("COMPONENT_AT_AR_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
				case 24:
					func_329(uParam0, joaat("COMPONENT_AT_AR_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
				case 25:
					func_329(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
				case 26:
					func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
				case 27:
					func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
				case 28:
					func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
				case 29:
					func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
				case 30:
					func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
				case 31:
					func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
				case 32:
					func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
				case 33:
					func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
				case 34:
					func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
				case 35:
					func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
				case 36:
					func_329(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
				case 4:
					func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 5, 0);
					break;
				case 5:
					func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
				case 6:
					func_329(uParam0, 0, joaat("WAPGRIP_2"), 1, 1);
					break;
				case 7:
					func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGRIP_2"), 2, 0);
					break;
				case 8:
					func_329(uParam0, 0, joaat("WAPFLSHLASR"), 1, 1);
					break;
				case 9:
					func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 2, 0);
					break;
				case 10:
					func_329(uParam0, 0, joaat("WAPSCOP"), 1, 1);
					break;
				case 11:
					func_329(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP"), 2, 0);
					break;
				case 12:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPSCOP"), 3, 0);
					break;
				case 13:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPSCOP"), 4, 0);
					break;
				case 14:
					func_329(uParam0, 0, joaat("WAPSUPP_2"), 1, 1);
					break;
				case 15:
					func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP_2"), 2, 0);
					break;
				case 16:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP_2"), 3, 0);
					break;
				case 17:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP_2"), 4, 0);
					break;
				case 18:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP_2"), 5, 0);
					break;
				case 19:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP_2"), 6, 0);
					break;
				case 20:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP_2"), 7, 0);
					break;
				case 21:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP_2"), 8, 0);
					break;
				case 22:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP_2"), 9, 0);
					break;
				case 23:
					func_329(uParam0, joaat("COMPONENT_AT_CR_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
				case 24:
					func_329(uParam0, joaat("COMPONENT_AT_CR_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
				case 25:
					func_329(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
				case 26:
					func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
				case 27:
					func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
				case 28:
					func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
				case 29:
					func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
				case 30:
					func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
				case 31:
					func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
				case 32:
					func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
				case 33:
					func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
				case 34:
					func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
				case 35:
					func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
				case 36:
					func_329(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
				case 4:
					func_329(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 5, 0);
					break;
				case 5:
					func_329(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
				case 6:
					func_329(uParam0, 0, joaat("WAPGRIP_2"), 1, 1);
					break;
				case 7:
					func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGRIP_2"), 2, 0);
					break;
				case 8:
					func_329(uParam0, 0, joaat("WAPSCOP"), 1, 1);
					break;
				case 9:
					func_329(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP"), 2, 0);
					break;
				case 10:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPSCOP"), 3, 0);
					break;
				case 11:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPSCOP"), 4, 0);
					break;
				case 12:
					func_329(uParam0, 0, joaat("WAPSUPP"), 1, 1);
					break;
				case 13:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP"), 2, 0);
					break;
				case 14:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP"), 3, 0);
					break;
				case 15:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP"), 4, 0);
					break;
				case 16:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP"), 5, 0);
					break;
				case 17:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP"), 6, 0);
					break;
				case 18:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP"), 7, 0);
					break;
				case 19:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP"), 8, 0);
					break;
				case 20:
					func_329(uParam0, joaat("COMPONENT_AT_MG_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
				case 21:
					func_329(uParam0, joaat("COMPONENT_AT_MG_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
				case 22:
					func_329(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
				case 23:
					func_329(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
				case 24:
					func_329(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
				case 25:
					func_329(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
				case 26:
					func_329(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
				case 27:
					func_329(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
				case 28:
					func_329(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
				case 29:
					func_329(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
				case 30:
					func_329(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
				case 31:
					func_329(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
				case 32:
					func_329(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
				case 33:
					func_329(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 3, 0);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 4, 0);
					break;
				case 4:
					func_329(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 5, 0);
					break;
				case 5:
					func_329(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"), joaat("WAPCLIP"), 6, 0);
					break;
				case 6:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_MK2"), joaat("WAPSCOP"), 1, 0);
					break;
				case 7:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPSCOP"), 2, 1);
					break;
				case 8:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_NV"), joaat("WAPSCOP"), 3, 0);
					break;
				case 9:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_THERMAL"), joaat("WAPSCOP"), 4, 0);
					break;
				case 10:
					func_329(uParam0, 0, joaat("WAPSUPP"), 1, 1);
					break;
				case 11:
					func_329(uParam0, joaat("COMPONENT_AT_SR_SUPP_03"), joaat("WAPSUPP"), 2, 0);
					break;
				case 12:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_08"), joaat("WAPSUPP"), 3, 0);
					break;
				case 13:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_09"), joaat("WAPSUPP"), 4, 0);
					break;
				case 14:
					func_329(uParam0, joaat("COMPONENT_AT_SR_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
				case 15:
					func_329(uParam0, joaat("COMPONENT_AT_SR_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
				case 16:
					func_329(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
				case 17:
					func_329(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
				case 18:
					func_329(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
				case 19:
					func_329(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
				case 20:
					func_329(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
				case 21:
					func_329(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
				case 22:
					func_329(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
				case 23:
					func_329(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
				case 24:
					func_329(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
				case 25:
					func_329(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
				case 26:
					func_329(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
				case 27:
					func_329(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
				case 4:
					func_329(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WAPCLIP"), 5, 0);
					break;
				case 5:
					func_329(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
				case 6:
					func_329(uParam0, 0, joaat("WAPSCOP"), 1, 1);
					break;
				case 7:
					func_329(uParam0, joaat("COMPONENT_AT_PI_RAIL"), joaat("WAPSCOP"), 2, 0);
					break;
				case 8:
					func_329(uParam0, 0, joaat("WAPFLSHLASR"), 1, 1);
					break;
				case 9:
					func_329(uParam0, joaat("COMPONENT_AT_PI_FLSH_02"), joaat("WAPFLSHLASR"), 2, 0);
					break;
				case 10:
					func_329(uParam0, 0, joaat("WAPSUPP"), 1, 1);
					break;
				case 11:
					func_329(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSUPP"), 2, 0);
					break;
				case 12:
					func_329(uParam0, joaat("COMPONENT_AT_PI_COMP"), joaat("WAPSUPP"), 3, 0);
					break;
				case 13:
					func_329(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
				case 14:
					func_329(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
				case 15:
					func_329(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
				case 16:
					func_329(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
				case 17:
					func_329(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
				case 18:
					func_329(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
				case 19:
					func_329(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
				case 20:
					func_329(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
				case 21:
					func_329(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
				case 22:
					func_329(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
				case 23:
					func_329(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
				case 24:
					func_329(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
				case 4:
					func_329(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"), joaat("WAPCLIP"), 5, 0);
					break;
				case 5:
					func_329(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
				case 6:
					func_329(uParam0, 0, joaat("WAPFLSHLASR_2"), 1, 1);
					break;
				case 7:
					func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR_2"), 2, 0);
					break;
				case 8:
					func_329(uParam0, 0, joaat("WAPSCOP"), 1, 1);
					break;
				case 9:
					func_329(uParam0, joaat("COMPONENT_AT_SIGHTS_SMG"), joaat("WAPSCOP"), 2, 0);
					break;
				case 10:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"), joaat("WAPSCOP"), 3, 0);
					break;
				case 11:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"), joaat("WAPSCOP"), 4, 0);
					break;
				case 12:
					func_329(uParam0, 0, joaat("WAPSUPP_2"), 1, 1);
					break;
				case 13:
					func_329(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSUPP_2"), 1, 0);
					break;
				case 14:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP_2"), 2, 0);
					break;
				case 15:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP_2"), 3, 0);
					break;
				case 16:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP_2"), 4, 0);
					break;
				case 17:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP_2"), 5, 0);
					break;
				case 18:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP_2"), 6, 0);
					break;
				case 19:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP_2"), 7, 0);
					break;
				case 20:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP_2"), 8, 0);
					break;
				case 21:
					func_329(uParam0, joaat("COMPONENT_AT_SB_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
				case 22:
					func_329(uParam0, joaat("COMPONENT_AT_SB_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
				case 23:
					func_329(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
				case 24:
					func_329(uParam0, joaat("COMPONENT_SMG_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
				case 25:
					func_329(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
				case 26:
					func_329(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
				case 27:
					func_329(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
				case 28:
					func_329(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
				case 29:
					func_329(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
				case 30:
					func_329(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
				case 31:
					func_329(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
				case 32:
					func_329(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
				case 33:
					func_329(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
				case 34:
					func_329(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			if (func_328(iLocal_105))
			{
				if (!func_319(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_PUMPSHOTGUN"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
					case 1:
						func_329(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
					case 2:
						func_329(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			if (func_328(iLocal_105))
			{
				if (!func_319(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SPECIALCARBINE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
						case 4:
							func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
							break;
						case 5:
							func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
							break;
						case 6:
							func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
							break;
						case 7:
							func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
						case 8:
							func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
							break;
						case 4:
							func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
							break;
						case 5:
							func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
							break;
						case 6:
							func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
						case 7:
							func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
							break;
						case 8:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
					case 1:
						func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
					case 2:
						func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
						break;
					case 3:
						func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
						break;
					case 4:
						func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
						break;
					case 5:
						func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
						break;
					case 6:
						func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
						break;
					case 7:
						func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			if (func_328(iLocal_105))
			{
				if (!func_319(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SNSPISTOL"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
					case 1:
						func_329(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
					case 2:
						func_329(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (func_328(iLocal_105))
			{
				if (!func_319(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_MARKSMANRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPSCOP"), 1, 1);
							break;
						case 4:
							func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
							break;
						case 5:
							func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
						case 6:
							func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
						case 7:
							func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPSCOP"), 1, 1);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
							break;
						case 4:
							func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
						case 5:
							func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
						case 6:
							func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
							break;
						case 7:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
					case 1:
						func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
					case 2:
						func_329(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPSCOP"), 1, 1);
						break;
					case 3:
						func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
						break;
					case 4:
						func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
					case 5:
						func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
						break;
					case 6:
						func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			if (func_328(iLocal_105))
			{
				if (!func_319(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_REVOLVER"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("GUN_ROOT"), 1, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("GUN_ROOT"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("GUN_ROOT"), 1, 0);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("GUN_ROOT"), 2, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
					case 1:
						func_329(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("GUN_ROOT"), 1, 0);
						break;
					case 2:
						func_329(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("GUN_ROOT"), 2, 0);
						break;
				}
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (func_328(iLocal_105))
			{
				if (!func_319(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_BULLPUPRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
							break;
						case 4:
							func_329(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPSCOP"), 1, 0);
							break;
						case 5:
							func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
						case 6:
							func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
						case 7:
							func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
							break;
						case 3:
							func_329(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPSCOP"), 1, 0);
							break;
						case 4:
							func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
						case 5:
							func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
						case 6:
							func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("GUN_ROOT"), 1, 0);
							break;
						case 7:
							func_329(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
					case 1:
						func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
					case 2:
						func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
						break;
					case 3:
						func_329(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPSCOP"), 1, 0);
						break;
					case 4:
						func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
					case 5:
						func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
						break;
					case 6:
						func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"), joaat("WAPCLIP"), 3, 0);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 4, 0);
					break;
				case 4:
					func_329(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"), joaat("WAPCLIP"), 5, 0);
					break;
				case 5:
					func_329(uParam0, 0, joaat("WAPFLSHLASR_2"), 1, 1);
					break;
				case 6:
					func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR_2"), 2, 0);
					break;
				case 7:
					func_329(uParam0, 0, joaat("WAPSCOP"), 1, 1);
					break;
				case 8:
					func_329(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP"), 2, 0);
					break;
				case 9:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPSCOP"), 3, 0);
					break;
				case 10:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPSCOP"), 4, 0);
					break;
				case 11:
					func_329(uParam0, 0, joaat("WAPSUPP"), 1, 1);
					break;
				case 12:
					func_329(uParam0, joaat("COMPONENT_AT_SR_SUPP_03"), joaat("WAPSUPP"), 2, 0);
					break;
				case 13:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_08"), joaat("WAPSUPP"), 3, 0);
					break;
				case 14:
					func_329(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
				case 15:
					func_329(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
				case 16:
					func_329(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
				case 17:
					func_329(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
				case 18:
					func_329(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
				case 19:
					func_329(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
				case 20:
					func_329(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
				case 21:
					func_329(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
				case 22:
					func_329(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
				case 23:
					func_329(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
				case 24:
					func_329(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
				case 25:
					func_329(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
				case 4:
					func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 5, 0);
					break;
				case 5:
					func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
				case 6:
					func_329(uParam0, 0, joaat("WAPFLSHLASR"), 1, 1);
					break;
				case 7:
					func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 2, 0);
					break;
				case 8:
					func_329(uParam0, 0, joaat("WAPSCOP_2"), 1, 1);
					break;
				case 9:
					func_329(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP_2"), 2, 0);
					break;
				case 10:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPSCOP_2"), 3, 0);
					break;
				case 11:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPSCOP_2"), 4, 0);
					break;
				case 12:
					func_329(uParam0, 0, joaat("WAPSUPP"), 1, 1);
					break;
				case 13:
					func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 2, 0);
					break;
				case 14:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP"), 3, 0);
					break;
				case 15:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP"), 4, 0);
					break;
				case 16:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP"), 5, 0);
					break;
				case 17:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP"), 6, 0);
					break;
				case 18:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP"), 7, 0);
					break;
				case 19:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP"), 8, 0);
					break;
				case 20:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP"), 9, 0);
					break;
				case 21:
					func_329(uParam0, 0, joaat("WAPGRIP"), 1, 1);
					break;
				case 22:
					func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGRIP"), 2, 0);
					break;
				case 23:
					func_329(uParam0, joaat("COMPONENT_AT_SC_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
				case 24:
					func_329(uParam0, joaat("COMPONENT_AT_SC_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
				case 25:
					func_329(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
				case 26:
					func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
				case 27:
					func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
				case 28:
					func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
				case 29:
					func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
				case 30:
					func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
				case 31:
					func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
				case 32:
					func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
				case 33:
					func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
				case 34:
					func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
				case 35:
					func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
				case 36:
					func_329(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
				case 4:
					func_329(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WAPCLIP"), 5, 0);
					break;
				case 5:
					func_329(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
				case 6:
					func_329(uParam0, 0, joaat("WAPFLSHLASR_2"), 1, 1);
					break;
				case 7:
					func_329(uParam0, joaat("COMPONENT_AT_PI_FLSH_03"), joaat("WAPFLSHLASR_2"), 2, 0);
					break;
				case 8:
					func_329(uParam0, 0, joaat("WAPSCOP"), 1, 1);
					break;
				case 9:
					func_329(uParam0, joaat("COMPONENT_AT_PI_RAIL_02"), joaat("WAPSCOP"), 2, 0);
					break;
				case 10:
					func_329(uParam0, 0, joaat("WAPSUPP_2"), 1, 1);
					break;
				case 11:
					func_329(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSUPP_2"), 2, 0);
					break;
				case 12:
					func_329(uParam0, joaat("COMPONENT_AT_PI_COMP_02"), joaat("WAPSUPP_2"), 3, 0);
					break;
				case 13:
					func_329(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
				case 14:
					func_329(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
				case 15:
					func_329(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
				case 16:
					func_329(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
				case 17:
					func_329(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
				case 18:
					func_329(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
				case 19:
					func_329(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
				case 20:
					func_329(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
				case 21:
					func_329(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
				case 22:
					func_329(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
				case 23:
					func_329(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
				case 24:
					func_329(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
				case 4:
					func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 5, 0);
					break;
				case 5:
					func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
				case 6:
					func_329(uParam0, 0, joaat("WAPFLSHLASR"), 1, 1);
					break;
				case 7:
					func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 2, 0);
					break;
				case 8:
					func_329(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP_2"), 2, 0);
					break;
				case 9:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPSCOP_2"), 3, 0);
					break;
				case 10:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"), joaat("WAPSCOP_2"), 4, 1);
					break;
				case 11:
					func_329(uParam0, 0, joaat("WAPSUPP_2"), 1, 1);
					break;
				case 12:
					func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP_2"), 2, 0);
					break;
				case 13:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP_2"), 3, 0);
					break;
				case 14:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP_2"), 4, 0);
					break;
				case 15:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP_2"), 5, 0);
					break;
				case 16:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP_2"), 6, 0);
					break;
				case 17:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP_2"), 7, 0);
					break;
				case 18:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP_2"), 8, 0);
					break;
				case 19:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP_2"), 9, 0);
					break;
				case 20:
					func_329(uParam0, 0, joaat("WAPGRIP_2"), 1, 1);
					break;
				case 21:
					func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGRIP_2"), 2, 0);
					break;
				case 22:
					func_329(uParam0, joaat("COMPONENT_AT_MRFL_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
				case 23:
					func_329(uParam0, joaat("COMPONENT_AT_MRFL_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
				case 24:
					func_329(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
				case 25:
					func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
				case 26:
					func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
				case 27:
					func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
				case 28:
					func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
				case 29:
					func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
				case 30:
					func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
				case 31:
					func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
				case 32:
					func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
				case 33:
					func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
				case 34:
					func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
				case 35:
					func_329(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 3, 0);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"), joaat("WAPCLIP"), 4, 0);
					break;
				case 4:
					func_329(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 5, 0);
					break;
				case 5:
					func_329(uParam0, 0, joaat("WAPSCOP"), 1, 1);
					break;
				case 6:
					func_329(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP"), 2, 0);
					break;
				case 7:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPSCOP"), 3, 0);
					break;
				case 8:
					func_329(uParam0, 0, joaat("WAPFLSHLASR"), 1, 1);
					break;
				case 9:
					func_329(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 2, 0);
					break;
				case 10:
					func_329(uParam0, 0, joaat("WAPSUPP"), 1, 1);
					break;
				case 11:
					func_329(uParam0, joaat("COMPONENT_AT_PI_COMP_03"), joaat("WAPSUPP"), 2, 0);
					break;
				case 12:
					func_329(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
				case 13:
					func_329(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
				case 14:
					func_329(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
				case 15:
					func_329(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
				case 16:
					func_329(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
				case 17:
					func_329(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
				case 18:
					func_329(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
				case 19:
					func_329(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
				case 20:
					func_329(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
				case 21:
					func_329(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
				case 22:
					func_329(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
				case 23:
					func_329(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
				case 3:
					func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
				case 4:
					func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 5, 0);
					break;
				case 5:
					func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
				case 6:
					func_329(uParam0, 0, joaat("WAPFLSHLASR"), 1, 1);
					break;
				case 7:
					func_329(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 2, 0);
					break;
				case 8:
					func_329(uParam0, 0, joaat("WAPSCOP_2"), 1, 1);
					break;
				case 9:
					func_329(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP_2"), 2, 0);
					break;
				case 10:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"), joaat("WAPSCOP_2"), 3, 0);
					break;
				case 11:
					func_329(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPSCOP_2"), 4, 0);
					break;
				case 12:
					func_329(uParam0, joaat("COMPONENT_AT_BP_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
				case 13:
					func_329(uParam0, joaat("COMPONENT_AT_BP_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
				case 14:
					func_329(uParam0, 0, joaat("WAPSUPP"), 1, 1);
					break;
				case 15:
					func_329(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 2, 0);
					break;
				case 16:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP"), 3, 0);
					break;
				case 17:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP"), 4, 0);
					break;
				case 18:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP"), 5, 0);
					break;
				case 19:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP"), 6, 0);
					break;
				case 20:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP"), 7, 0);
					break;
				case 21:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP"), 8, 0);
					break;
				case 22:
					func_329(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP"), 9, 0);
					break;
				case 23:
					func_329(uParam0, 0, joaat("WAPGRIP"), 1, 1);
					break;
				case 24:
					func_329(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGRIP"), 2, 0);
					break;
				case 25:
					func_329(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
				case 26:
					func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
				case 27:
					func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
				case 28:
					func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
				case 29:
					func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
				case 30:
					func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
				case 31:
					func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
				case 32:
					func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
				case 33:
					func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
				case 34:
					func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
				case 35:
					func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
				case 36:
					func_329(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, joaat("COMPONENT_CERAMICPISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_329(uParam0, joaat("COMPONENT_CERAMICPISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_329(uParam0, joaat("COMPONENT_CERAMICPISTOL_SUPP"), joaat("WAPSUPP"), 1, 0);
					break;
			}
			break;
		default:
			iVar12 = func_66(bParam1, &uVar15);
			if (iVar12 != -1)
			{
				bVar13 = false;
				while (bVar13 < UNK_0xA942498EEAA3EEAD(iVar12))
				{
					if (UNK_0x8B27EE8DAA2A39B3(iVar12, bVar13, &Var54))
					{
						if (!func_63(Var54.f_3))
						{
							if (Var54 == joaat("WAPCLIP") || Var54 == joaat("WAPCLIP_2"))
							{
								iVar1++;
							}
							else if (Var54 == joaat("WAPFLSHLASR") || Var54 == joaat("WAPFLSHLASR_2"))
							{
								iVar2++;
							}
							else if (Var54 == joaat("WAPSCOP") || Var54 == joaat("WAPSCOP_2"))
							{
								iVar3++;
							}
							else if (Var54 == joaat("WAPRAIL") || Var54 == joaat("WAPRAIL_2"))
							{
								iVar4++;
							}
							else if (Var54 == joaat("WAPGRIP") || Var54 == joaat("WAPGRIP_2"))
							{
								iVar5++;
							}
							else if (Var54 == joaat("WAPSUPP") || Var54 == joaat("WAPSUPP_2"))
							{
								iVar6++;
							}
							else if (Var54 == 1731751835)
							{
								iVar7++;
							}
							else if (Var54 == joaat("GUN_ROOT"))
							{
								iVar8++;
							}
							else if (Var54 == joaat("GUN_GRIPR"))
							{
								iVar9++;
							}
							else if (Var54 == joaat("WAPBARREL"))
							{
								iVar10++;
							}
							else
							{
								iVar11++;
							}
							if (iVar14 == iParam2)
							{
								if (Var54 == joaat("WAPCLIP") || Var54 == joaat("WAPCLIP_2"))
								{
									iVar0 = iVar1;
								}
								else if (Var54 == joaat("WAPFLSHLASR") || Var54 == joaat("WAPFLSHLASR_2"))
								{
									iVar0 = iVar2;
								}
								else if (Var54 == joaat("WAPSCOP") || Var54 == joaat("WAPSCOP_2"))
								{
									iVar0 = iVar3;
								}
								else if (Var54 == joaat("WAPRAIL") || Var54 == joaat("WAPRAIL_2"))
								{
									iVar0 = iVar4;
								}
								else if (Var54 == joaat("WAPGRIP") || Var54 == joaat("WAPGRIP_2"))
								{
									iVar0 = iVar5;
								}
								else if (Var54 == joaat("WAPSUPP") || Var54 == joaat("WAPSUPP_2"))
								{
									iVar0 = iVar6;
								}
								else if (Var54 == 1731751835)
								{
									iVar0 = iVar7;
								}
								else if (Var54 == joaat("GUN_ROOT"))
								{
									iVar0 = iVar8;
								}
								else if (Var54 == joaat("GUN_GRIPR"))
								{
									iVar0 = iVar9;
								}
								else if (Var54 == joaat("WAPBARREL"))
								{
									iVar0 = iVar10;
								}
								else
								{
									iVar0 = iVar11;
								}
								func_329(uParam0, Var54.f_3, Var54, iVar0, Var54.f_1);
							}
							iVar14++;
						}
					}
					bVar13++;
				}
			}
			break;
	}
	if (bParam3)
	{
		uParam0->f_2 = func_279(bParam1, *uParam0);
	}
	return uParam0->f_4 != 989182658;
}

int func_279(bool bParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	struct<6> Var43;
	int iVar65;
	bool bVar66;
	var uVar67;
	struct<6> Var106;
	var uVar128;
	struct<4> Var144;
	float fVar148;

	iVar0 = 0;
	fVar1 = 2.5f;
	if (!UNK_0x8CD06866876216F2())
	{
		fVar1 = 2.5f;
		switch (bParam0)
		{
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						iVar0 = 155;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 189;
						break;
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = 729;
						break;
					case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
						iVar0 = 18600;
						break;
				}
				break;
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						iVar0 = 136;
						break;
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						iVar0 = 159;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 189;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 735;
						break;
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
						iVar0 = 14500;
						break;
				}
				break;
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						iVar0 = 145;
						break;
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						iVar0 = 165;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 185;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 730;
						break;
					case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
						iVar0 = 15800;
						break;
				}
				break;
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						iVar0 = 137;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 190;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 549;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 775;
						break;
					case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
						iVar0 = 15100;
						break;
				}
				break;
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_CLIP_01"):
						iVar0 = 119;
						break;
					case joaat("COMPONENT_SMG_CLIP_02"):
						iVar0 = 134;
						break;
					case joaat("COMPONENT_SMG_CLIP_03"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 210;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
						iVar0 = 549;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 815;
						break;
					case joaat("COMPONENT_SMG_VARMOD_LUXE"):
						iVar0 = 19300;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						iVar0 = 129;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 159;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 189;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 565;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 810;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
						iVar0 = 14400;
						break;
				}
				break;
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						iVar0 = 99;
						break;
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						iVar0 = 105;
						break;
					case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 132;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 150;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 450;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 815;
						break;
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
						iVar0 = 17900;
						break;
				}
				break;
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						iVar0 = 110;
						break;
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						iVar0 = 124;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 159;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 450;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 812;
						break;
					case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
						iVar0 = 16500;
						break;
				}
				break;
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MG_CLIP_01"):
						iVar0 = 135;
						break;
					case joaat("COMPONENT_MG_CLIP_02"):
						iVar0 = 145;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						iVar0 = 450;
						break;
					case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
						iVar0 = 15600;
						break;
				}
				break;
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						iVar0 = 119;
						break;
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						iVar0 = 126;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 129;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 559;
						break;
					case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
						iVar0 = 14000;
						break;
				}
				break;
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 189;
						break;
					case joaat("COMPONENT_AT_SR_SUPP"):
						iVar0 = 975;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
						iVar0 = 16900;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						iVar0 = 129;
						break;
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						iVar0 = 139;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 150;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 225;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 899;
						break;
				}
				break;
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 559;
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 975;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 920;
						break;
					case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
						iVar0 = 13000;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 575;
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 999;
						break;
				}
				break;
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 128;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 185;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 525;
						break;
				}
				break;
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						iVar0 = -1;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
						iVar0 = 110;
						break;
					case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
						iVar0 = 9700;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2275;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10875;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12400;
						break;
					case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
						iVar0 = 17600;
						break;
				}
				if (func_318() && (func_317() || func_316()))
				{
					iVar0 = 0;
				}
				break;
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4100;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2300;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12450;
						break;
				}
				if (func_318() && (func_317() || func_316()))
				{
					iVar0 = 0;
				}
				break;
			case joaat("WEAPON_PISTOL50"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL50_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_PISTOL50_CLIP_02"):
						iVar0 = 9500;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 2000;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12250;
						break;
					case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
						iVar0 = 20000;
						break;
				}
				if (func_318() && (func_317() || func_316()))
				{
					iVar0 = 0;
				}
				break;
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
						iVar0 = 13700;
						break;
				}
				break;
			case joaat("WEAPON_MARKSMANRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
						iVar0 = 3612;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 1020;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 5000;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 1760;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
						iVar0 = 17200;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
						iVar0 = 3680;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 710;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 4800;
						break;
					case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
						iVar0 = 12000;
						break;
				}
				break;
			case joaat("WEAPON_KNUCKLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
						iVar0 = 4900;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
						iVar0 = 5600;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
						iVar0 = 5500;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
						iVar0 = 5200;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
						iVar0 = 4600;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
						iVar0 = 4700;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
						iVar0 = 4800;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
						iVar0 = 4300;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
						iVar0 = 4000;
						break;
				}
				break;
			case joaat("WEAPON_BULLPUPRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
						iVar0 = 108;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
						iVar0 = 9950;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2575;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 11350;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12500;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4275;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
						iVar0 = 16600;
						break;
				}
				break;
			case joaat("WEAPON_SNSPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
						iVar0 = 29;
						break;
					case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
						iVar0 = 9150;
						break;
					case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
						iVar0 = 13900;
						break;
				}
				break;
			case joaat("WEAPON_SPECIALCARBINE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
						iVar0 = 108;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
						iVar0 = 9975;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2525;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 11550;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12500;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
						iVar0 = 18000;
						break;
				}
				break;
			case joaat("WEAPON_MACHINEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
						iVar0 = 3680;
						break;
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 4840;
						break;
				}
				break;
			default:
				iVar2 = func_66(bParam0, &uVar4);
				if (iVar2 != -1)
				{
					bVar3 = false;
					while (bVar3 < UNK_0xA942498EEAA3EEAD(iVar2))
					{
						if (UNK_0x8B27EE8DAA2A39B3(iVar2, bVar3, &Var43))
						{
							if (!func_63(Var43.f_3))
							{
								if (Var43.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (!func_314(iParam1))
									{
										Var43.f_5 = -1;
									}
									if (Var43.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var43.f_5;
									}
									if (bParam0 == joaat("WEAPON_HAMMER"))
									{
										if (func_318() && (func_317() || func_316()))
										{
											iVar0 = 0;
										}
									}
								}
							}
						}
						bVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (bParam0)
		{
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						iVar0 = 9175;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2885));
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1675;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4337));
						break;
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4338));
						break;
					case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_10572;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4415));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_20718;
						break;
				}
				break;
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						iVar0 = 136;
						break;
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_20607;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2886));
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4339));
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_20608;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4340));
						break;
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_11956;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4410));
						break;
				}
				break;
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						iVar0 = 145;
						break;
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						iVar0 = 9400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2888));
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4341));
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 12200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4342));
						break;
					case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_10571;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4404));
						break;
				}
				break;
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						iVar0 = 9325;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2889));
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4345));
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10800;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4347));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12150;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4346));
						break;
					case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
						iVar0 = Global_262145.f_10575;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4414));
						break;
				}
				break;
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_CLIP_01"):
						iVar0 = 119;
						break;
					case joaat("COMPONENT_SMG_CLIP_02"):
						iVar0 = 9475;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2890));
						break;
					case joaat("COMPONENT_SMG_CLIP_03"):
						iVar0 = Global_262145.f_16127;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4348));
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
						iVar0 = 10825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4350));
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4349));
						break;
					case joaat("COMPONENT_SMG_VARMOD_LUXE"):
						iVar0 = Global_262145.f_10574;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4419));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_20719;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						iVar0 = 9550;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2892));
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16122;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4358));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2125;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4355));
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4357));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4356));
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_10568;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4405));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_20721;
						break;
				}
				break;
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						iVar0 = 99;
						break;
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						iVar0 = 9775;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2893));
						break;
					case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16121;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4366));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4363));
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 10900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4365));
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4364));
						break;
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_10570;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4408));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_20722;
						break;
				}
				break;
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						iVar0 = 110;
						break;
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						iVar0 = 9925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2895));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4368));
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 10950;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4370));
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4369));
						break;
					case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_10569;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4403));
						break;
				}
				break;
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MG_CLIP_01"):
						iVar0 = 135;
						break;
					case joaat("COMPONENT_MG_CLIP_02"):
						iVar0 = 9850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2896));
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						iVar0 = 10925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4371));
						break;
					case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_11957;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4413));
						break;
				}
				break;
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						iVar0 = 119;
						break;
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						iVar0 = 10000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2897));
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4393));
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 10975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4394));
						break;
					case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_11958;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4409));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_20720;
						break;
				}
				break;
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 1750;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4375));
						break;
					case joaat("COMPONENT_AT_SR_SUPP"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4376));
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_11953;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4417));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22429;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						iVar0 = 129;
						break;
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						iVar0 = 9625;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2899));
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4379));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4380));
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4381));
						break;
				}
				break;
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4382));
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4383));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4384));
						break;
					case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_10577;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4420));
						break;
				}
				break;
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 99;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4385));
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4386));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_20723;
						break;
				}
				break;
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4395));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4391));
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 11000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4392));
						break;
				}
				break;
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						iVar0 = -1;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
						iVar0 = 110;
						break;
					case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
						iVar0 = 9700;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2891));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4351));
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10875;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4354));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4352));
						break;
					case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_11954;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4353));
						break;
				}
				break;
			case joaat("WEAPON_GUSENBERG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_GUSENBERG_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_GUSENBERG_CLIP_02"):
						iVar0 = Global_262145.f_6601;
						break;
				}
				break;
			case joaat("WEAPON_SNSPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_7180;
						break;
					case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_11955;
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22434;
						break;
				}
				break;
			case joaat("WEAPON_SPECIALCARBINE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
						iVar0 = Global_262145.f_7185;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
						iVar0 = Global_262145.f_16124;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_7188;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = Global_262145.f_7184;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_7182;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_7187;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_11959;
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22430;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_7186;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = Global_262145.f_7190;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_7183;
						break;
					case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_7210;
						break;
				}
				break;
			case joaat("WEAPON_BULLPUPRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_7193;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_7196;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_7191;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = Global_262145.f_7192;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_7194;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
						iVar0 = Global_262145.f_11960;
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22433;
						break;
				}
				break;
			case joaat("WEAPON_VINTAGEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_7668;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_7669;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
						iVar0 = Global_262145.f_8392;
						break;
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
						iVar0 = Global_262145.f_16128;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_8393;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_8394;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_8395;
						break;
				}
				break;
			case joaat("WEAPON_MARKSMANRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_8398;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_8399;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_8401;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_8402;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_8403;
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22431;
						break;
				}
				break;
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4100;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_14622));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4377));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4378));
						break;
				}
				if (func_318() && (func_317() || func_316()))
				{
					iVar0 = 0;
				}
				break;
			case joaat("WEAPON_PISTOL50"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL50_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_PISTOL50_CLIP_02"):
						iVar0 = 9500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2887));
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 2000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4343));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4344));
						break;
					case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
						iVar0 = Global_262145.f_10573;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4416));
						break;
				}
				if (func_318() && (func_317() || func_316()))
				{
					iVar0 = 0;
				}
				break;
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
						iVar0 = Global_262145.f_10576;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4418));
						break;
				}
				break;
			case joaat("WEAPON_KNUCKLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
						iVar0 = Global_262145.f_10893;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4423));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
						iVar0 = Global_262145.f_10894;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4424));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
						iVar0 = Global_262145.f_10895;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4425));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
						iVar0 = Global_262145.f_10896;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4426));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
						iVar0 = Global_262145.f_10897;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4427));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
						iVar0 = Global_262145.f_10898;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4428));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
						iVar0 = Global_262145.f_10899;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4429));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
						iVar0 = Global_262145.f_10900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4430));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
						iVar0 = Global_262145.f_10901;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4431));
						break;
				}
				break;
			case joaat("WEAPON_MACHINEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_10918;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4433));
						break;
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
						iVar0 = Global_262145.f_16126;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_10919;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4434));
						break;
				}
				break;
			case joaat("WEAPON_SWITCHBLADE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
						iVar0 = Global_262145.f_12801;
						break;
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
						iVar0 = Global_262145.f_12802;
						break;
				}
				break;
			case joaat("WEAPON_REVOLVER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
						iVar0 = Global_262145.f_12859;
						break;
					case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
						iVar0 = Global_262145.f_12800;
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22432;
						break;
				}
				break;
			case joaat("WEAPON_COMPACTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_14552;
						break;
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16123;
						break;
				}
				break;
			case joaat("WEAPON_DBSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_DBSHOTGUN_CLIP_01"):
						iVar0 = 0;
						break;
				}
				break;
			case joaat("WEAPON_MINISMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINISMG_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MINISMG_CLIP_02"):
						iVar0 = Global_262145.f_18570;
						break;
				}
				break;
			case joaat("WEAPON_COMBATPDW"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPDW_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_COMBATPDW_CLIP_02"):
						iVar0 = Global_262145.f_20603;
						break;
					case joaat("COMPONENT_COMBATPDW_CLIP_03"):
						iVar0 = Global_262145.f_16125;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_20604;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = Global_262145.f_20606;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_20605;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_20724;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_20725;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_20726;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_20727;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_20728;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_20729;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_20730;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_20731;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_20732;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_20733;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_20734;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_20735;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_20736;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_20737;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_20738;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_20739;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_20740;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_20741;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_20742;
						break;
					case joaat("COMPONENT_AT_AR_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_AR_BARREL_02"):
						iVar0 = Global_262145.f_20743;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_CARBINERIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_20744;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_20745;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_20746;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_20747;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_20748;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_20749;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_20750;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_20751;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_20752;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_20753;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_20754;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_20755;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_20756;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_20757;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_20758;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_20759;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_20760;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_20761;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_20762;
						break;
					case joaat("COMPONENT_AT_CR_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_CR_BARREL_02"):
						iVar0 = Global_262145.f_20763;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_COMBATMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
						iVar0 = Global_262145.f_20764;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_20765;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_20766;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_20767;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_20768;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_20769;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_20770;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_20771;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_20772;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_20773;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_20774;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_20775;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_20776;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_20777;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_20778;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_20779;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_20780;
						break;
					case joaat("COMPONENT_AT_MG_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_MG_BARREL_02"):
						iVar0 = Global_262145.f_20781;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYSNIPER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
						iVar0 = Global_262145.f_20782;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_20783;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_20785;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_20786;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
						iVar0 = Global_262145.f_20784;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
						iVar0 = Global_262145.f_20787;
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_SCOPE_NV"):
						iVar0 = Global_262145.f_20788;
						break;
					case joaat("COMPONENT_AT_SCOPE_THERMAL"):
						iVar0 = Global_262145.f_20789;
						break;
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						iVar0 = Global_262145.f_20790;
						break;
					case joaat("COMPONENT_AT_MUZZLE_08"):
						iVar0 = Global_262145.f_20791;
						break;
					case joaat("COMPONENT_AT_MUZZLE_09"):
						iVar0 = Global_262145.f_20792;
						break;
					case joaat("COMPONENT_AT_SR_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_SR_BARREL_02"):
						iVar0 = Global_262145.f_20793;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_PISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
						iVar0 = Global_262145.f_20794;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_20796;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_20795;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_20797;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_20798;
						break;
					case joaat("COMPONENT_AT_PI_FLSH_02"):
						iVar0 = Global_262145.f_20799;
						break;
					case joaat("COMPONENT_AT_PI_RAIL"):
						iVar0 = Global_262145.f_20800;
						break;
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = Global_262145.f_20801;
						break;
					case joaat("COMPONENT_AT_PI_COMP"):
						iVar0 = Global_262145.f_20802;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_SMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SMG_MK2_CLIP_02"):
						iVar0 = Global_262145.f_20803;
						break;
					case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_20805;
						break;
					case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_20804;
						break;
					case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_20806;
						break;
					case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_20807;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_20808;
						break;
					case joaat("COMPONENT_AT_SIGHTS_SMG"):
						iVar0 = Global_262145.f_20809;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
						iVar0 = Global_262145.f_20810;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
						iVar0 = Global_262145.f_20811;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_20812;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_20813;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_20814;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_20815;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_20816;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_20817;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_20818;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_20819;
						break;
					case joaat("COMPONENT_AT_SB_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_SB_BARREL_02"):
						iVar0 = Global_262145.f_20820;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_PUMPSHOTGUN_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22461;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
						iVar0 = Global_262145.f_22462;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_22460;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22459;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_22488;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_22489;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_22490;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_22491;
						break;
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						iVar0 = Global_262145.f_22492;
						break;
					case joaat("COMPONENT_AT_MUZZLE_08"):
						iVar0 = Global_262145.f_22493;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_SPECIALCARBINE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_22463;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22467;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22465;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22466;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22464;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_22494;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_22495;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_22496;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_22497;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_22498;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_22499;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_22500;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_22501;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_22502;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_22503;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_22504;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_22505;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_22506;
						break;
					case joaat("COMPONENT_AT_SC_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_SC_BARREL_02"):
						iVar0 = Global_262145.f_22507;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_SNSPISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
						iVar0 = Global_262145.f_23374;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22483;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_22485;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22484;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22482;
						break;
					case joaat("COMPONENT_AT_PI_FLSH_03"):
						iVar0 = Global_262145.f_22539;
						break;
					case joaat("COMPONENT_AT_PI_RAIL_02"):
						iVar0 = Global_262145.f_22540;
						break;
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = Global_262145.f_22541;
						break;
					case joaat("COMPONENT_AT_PI_COMP_02"):
						iVar0 = Global_262145.f_22542;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_MARKSMANRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_22468;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22472;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22470;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22471;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22469;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_22508;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_22509;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_22510;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_22511;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_22512;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_22513;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_22514;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_22515;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_22516;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_22517;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_22518;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_22519;
						break;
					case joaat("COMPONENT_AT_MRFL_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_MRFL_BARREL_02"):
						iVar0 = Global_262145.f_22520;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_REVOLVER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22473;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22474;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_22476;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22475;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_22521;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_22522;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = Global_262145.f_22523;
						break;
					case joaat("COMPONENT_AT_PI_COMP_03"):
						iVar0 = Global_262145.f_22524;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_BULLPUPRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_22477;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22481;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22479;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22480;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22478;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_22525;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_22526;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
						iVar0 = Global_262145.f_22527;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_22528;
						break;
					case joaat("COMPONENT_AT_BP_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_BP_BARREL_02"):
						iVar0 = Global_262145.f_22538;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_22529;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_22530;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_22531;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_22532;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_22533;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_22534;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_22535;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_22536;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_22537;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_RAYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
						iVar0 = 0;
						break;
				}
				break;
			case joaat("WEAPON_CERAMICPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_27905;
						break;
					case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
						iVar0 = Global_262145.f_27906;
						break;
				}
				break;
			default:
				iVar65 = func_66(bParam0, &uVar67);
				if (iVar65 != -1)
				{
					bVar66 = false;
					while (bVar66 < UNK_0xA942498EEAA3EEAD(iVar65))
					{
						if (UNK_0x8B27EE8DAA2A39B3(iVar65, bVar66, &Var106))
						{
							if (!func_63(Var106.f_3))
							{
								if (Var106.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (Var106.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var106.f_5;
									}
								}
							}
						}
						bVar66++;
					}
				}
				break;
		}
	}
	if (UNK_0x8CD06866876216F2() && func_312())
	{
		StringCopy(&Var144, func_310(iParam1, bParam0), 16);
		func_306(&uVar128, Var144, UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()), 3, 1, func_308(bParam0), func_307(bParam0), -1, 0, 0);
		if (UNK_0x437ABF4F514F6471(&uVar128))
		{
			iVar0 = UNK_0xD7F319992681CCB6(UNK_0x12AB0310C2281427(&uVar128), 1671640801, 1);
		}
	}
	if (iVar0 > 0)
	{
		fVar148 = func_280(bParam0, &iVar0, fVar1);
		if (fVar148 != 1f)
		{
		}
	}
	return iVar0;
}

float func_280(bool bParam0, int iParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 0f;
	fVar1 = 0f;
	if (UNK_0x8CD06866876216F2() && func_312())
	{
		return 1f;
	}
	if (!UNK_0x8CD06866876216F2())
	{
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fParam2));
	}
	if (!Global_76622)
	{
		if (*iParam1 != 0)
		{
			iVar2 = func_303(bParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (iLocal_104 == 1)
	{
		if (UNK_0x8CD06866876216F2())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_77));
			fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_122) / 100f));
		}
	}
	if (iLocal_104 == 0)
	{
		if (UNK_0x8CD06866876216F2())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_77));
			if (func_281())
			{
				fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_122) / 100f));
				iLocal_104 = 1;
			}
			else
			{
				iLocal_104 = -1;
			}
		}
	}
	fVar0 = (1f - fVar1);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar0));
	return fVar0;
}

bool func_281()
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return false;
	}
	if (func_300())
	{
		if (func_285())
		{
			iVar0 = func_283();
			iVar1 = func_282();
			fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_121) && iVar0 >= 8)
			{
				return true;
			}
		}
	}
	return false;
}

int func_282()
{
	int iVar0;

	iVar0 = (iVar0 + Global_1387921);
	iVar0 = (iVar0 + Global_1387924);
	return iVar0;
}

int func_283()
{
	int iVar0;

	iVar0 = (iVar0 + Global_1387922);
	iVar0 = (iVar0 + Global_1387923);
	iVar0 = (iVar0 + Global_1387921);
	iVar0 = (iVar0 + Global_1387924);
	iVar0 = (iVar0 + Global_1387926);
	iVar0 = (iVar0 + Global_1387925);
	iVar0 = (iVar0 + func_284(joaat("MPPLY_EXPLOITS")));
	iVar0 = (iVar0 + func_284(joaat("MPPLY_VC_ANNOYINGME")));
	iVar0 = (iVar0 + func_284(joaat("MPPLY_VC_HATE")));
	iVar0 = (iVar0 + func_284(joaat("MPPLY_BAD_CREW_NAME")));
	iVar0 = (iVar0 + func_284(joaat("MPPLY_BAD_CREW_MOTTO")));
	iVar0 = (iVar0 + func_284(joaat("MPPLY_BAD_CREW_STATUS")));
	iVar0 = (iVar0 + func_284(joaat("MPPLY_BAD_CREW_EMBLEM")));
	iVar0 = (iVar0 + func_284(joaat("MPPLY_PLAYERMADE_TITLE")));
	iVar0 = (iVar0 + func_284(joaat("MPPLY_PLAYERMADE_DESC")));
	return iVar0;
}

int func_284(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_285()
{
	struct<7> Var0;
	struct<7> Var7;

	UNK_0xA9A9632F6E019049(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var7 = { func_299(joaat("MPPLY_STARTED_MP")) };
	if (func_286(Var7, Var0, 7))
	{
		return true;
	}
	return false;
}

bool func_286(struct<7> Param0, struct<7> Param7, int iParam14)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_297(Param7);
	bVar1 = func_293(Param0, iParam14);
	if (bVar1 == -15)
	{
		return false;
	}
	if (func_287(bVar0, bVar1) == 1)
	{
		return true;
	}
	return false;
}

int func_287(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_292(bParam1) || !func_292(bParam0))
	{
		return 1;
	}
	bVar0 = func_102(bParam0);
	bVar1 = func_102(bParam1);
	if (bVar0 > bVar1)
	{
		return 1;
	}
	else if (bVar0 < bVar1)
	{
		return 0;
	}
	bVar0 = func_104(bParam0);
	bVar1 = func_104(bParam1);
	if (bVar0 > bVar1)
	{
		return 1;
	}
	else if (bVar0 < bVar1)
	{
		return 0;
	}
	bVar0 = func_291(bParam0);
	bVar1 = func_291(bParam1);
	if (bVar0 > bVar1)
	{
		return 1;
	}
	else if (bVar0 < bVar1)
	{
		return 0;
	}
	bVar0 = func_290(bParam0);
	bVar1 = func_290(bParam1);
	if (bVar0 > bVar1)
	{
		return 1;
	}
	else if (bVar0 < bVar1)
	{
		return 0;
	}
	bVar0 = func_289(bParam0);
	bVar1 = func_289(bParam1);
	if (bVar0 > bVar1)
	{
		return 1;
	}
	else if (bVar0 < bVar1)
	{
		return 0;
	}
	bVar0 = func_288(bParam0);
	bVar1 = func_288(bParam1);
	if (bVar0 > bVar1)
	{
		return 1;
	}
	return 0;
}

int func_288(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_289(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_290(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_291(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

bool func_292(bool bParam0)
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
	iVar0 = func_288(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_289(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_290(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_102(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_104(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_291(bParam0);
	if (iVar5 < 1 || iVar5 > func_101(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_293(struct<7> Param0, int iParam7)
{
	bool bVar0;
	bool bVar1;
	var uVar2;

	if (func_296(Param0) == 0)
	{
		bVar0 = func_297(Param0);
		bVar1 = bVar0;
		func_294(&bVar1, 0, 0, 0, iParam7, 0, 0);
		if (iParam7 == 0)
		{
			bVar1 = bVar0;
		}
		return bVar1;
	}
	return uVar2;
}

void func_294(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_102(*bParam0);
	bVar1 = func_104(*bParam0);
	iVar2 = func_291(*bParam0);
	iVar3 = func_290(*bParam0);
	iVar4 = func_289(*bParam0);
	iVar5 = func_288(*bParam0);
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
	iVar6 = func_101(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_101(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_295(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_295(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_107(bParam0, iParam1);
	func_106(bParam0, iParam2);
	func_105(bParam0, iParam3);
	func_99(bParam0, bParam5);
	func_100(bParam0, iParam4);
	func_98(bParam0, iParam6);
}

int func_296(struct<7> Param0)
{
	if ((((((Param0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_297(struct<6> Param0, var uParam6)
{
	var uVar0;

	if (Param0 > 0)
	{
		func_98(&uVar0, Param0);
	}
	if (Param0.f_1 > 0)
	{
		func_99(&uVar0, func_298(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_100(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_105(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_106(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_107(&uVar0, Param0.f_5);
	}
	return uVar0;
}

bool func_298(int iParam0)
{
	if (iParam0 < 1)
	{
		return false;
	}
	if (iParam0 > 12)
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			return false;
		case 2:
			return true;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
	}
	return false;
}

struct<7> func_299(int iParam0)
{
	int iVar0;
	struct<7> Var1;
	struct<7> Var8;

	iVar0 = iParam0;
	if (UNK_0x52555DE2F29B7339(iVar0, &Var8, 7, -1))
	{
		return Var8;
	}
	return Var1;
}

bool func_300()
{
	if (func_302() && func_301(0))
	{
		return true;
	}
	return false;
}

var func_301(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_302()
{
	return func_301(func_54() + 1);
}

int func_303(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	bool bVar10;

	iVar0 = func_227();
	if (bParam0 == 0 || !func_39(iVar0))
	{
		return -1;
	}
	iVar1 = 7;
	switch (bParam0)
	{
		case joaat("WEAPON_UNARMED"):
			break;
		case joaat("GADGET_PARACHUTE"):
			break;
		case joaat("WEAPON_MICROSMG"):
			iVar1 = 1;
			break;
		case joaat("WEAPON_SMG"):
			iVar1 = 1;
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			iVar1 = 3;
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			iVar1 = 3;
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			iVar1 = 3;
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			iVar1 = 2;
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			iVar1 = 2;
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			iVar1 = 2;
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			break;
		case joaat("WEAPON_MG"):
			iVar1 = 4;
			break;
		case joaat("WEAPON_COMBATMG"):
			iVar1 = 4;
			break;
		case joaat("WEAPON_RPG"):
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			break;
		case joaat("WEAPON_MINIGUN"):
			iVar1 = 5;
			break;
		case joaat("WEAPON_KNIFE"):
			break;
		case joaat("WEAPON_NIGHTSTICK"):
			break;
		case joaat("WEAPON_PETROLCAN"):
			break;
		case joaat("WEAPON_STUNGUN"):
			break;
		case joaat("WEAPON_APPISTOL"):
			iVar1 = 0;
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			iVar1 = 0;
			break;
		case joaat("WEAPON_PISTOL"):
			iVar1 = 0;
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
			break;
		case joaat("WEAPON_GRENADE"):
			break;
		case joaat("WEAPON_STICKYBOMB"):
			break;
	}
	if (iVar1 != 7)
	{
		switch (func_304(iVar1, iVar0))
		{
			case 1:
				return 3;
			case 2:
				return 2;
			case 3:
				return 1;
		}
	}
	else
	{
		iVar3[0] = func_304(1, iVar0);
		iVar3[1] = func_304(3, iVar0);
		iVar3[2] = func_304(2, iVar0);
		iVar3[3] = func_304(4, iVar0);
		iVar3[4] = func_304(5, iVar0);
		iVar3[5] = func_304(0, iVar0);
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 3)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 1;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 2)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 2;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 1)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 3;
		}
	}
	return -1;
}

int func_304(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iParam0 == 0)
	{
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iVar3 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 3;
		iVar1 = 4;
		iVar2 = 5;
		iVar3 = -1;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 9;
		iVar1 = 10;
		iVar2 = 11;
		iVar3 = -1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 6;
		iVar1 = 7;
		iVar2 = 8;
		iVar3 = -1;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 12;
		iVar1 = 13;
		iVar2 = 14;
		iVar3 = -1;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 15;
		iVar1 = 16;
		iVar2 = 17;
		iVar3 = -1;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 18;
		iVar1 = 19;
		iVar2 = 20;
		iVar3 = 21;
	}
	else
	{
		return 0;
	}
	iVar4 = func_305(iVar0, iParam1);
	if (func_305(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_305(iVar1, iParam1);
	}
	if (func_305(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_305(iVar2, iParam1);
	}
	if (iVar3 != -1)
	{
		if (func_305(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_305(iVar3, iParam1);
		}
	}
	return iVar4;
}

int func_305(int iParam0, int iParam1)
{
	return Global_111638.f_19142[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

void func_306(char* sParam0, char[8] cParam1, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	switch (UNK_0x12AB0310C2281427(&cParam1))
	{
		case 64715401: /* GXTEntry: "Round" */
		case -2016195117: /* GXTEntry: "Rounds" */
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		case -414529079: /* GXTEntry: "Cartridge" */
		case -1253005183: /* GXTEntry: "Cartridges" */
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		case 336264847: /* GXTEntry: "Rocket" */
		case -1119195824: /* GXTEntry: "Rockets" */
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		case 531395379: /* GXTEntry: "Charge" */
		case -672224483: /* GXTEntry: "Charges" */
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		case 1034118160: /* GXTEntry: "Grenade" */
		case 600999375: /* GXTEntry: "Grenades" */
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		case -218834291: /* GXTEntry: "Bomb" */
		case -859056265: /* GXTEntry: "Bombs" */
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		case 1779531303: /* GXTEntry: "Firework" */
		case 82051787: /* GXTEntry: "Fireworks" */
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam6)
	{
		case 0:
			if (bParam5 == joaat("MP_M_FREEMODE_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (bParam5 == joaat("MP_F_FREEMODE_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		case 1:
			if (bParam5 == joaat("MP_M_FREEMODE_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (bParam5 == joaat("MP_F_FREEMODE_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam7 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			if (iParam10 != -1)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam10, 64);
			}
			break;
		case 2:
			if (bParam5 == joaat("MP_M_FREEMODE_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (bParam5 == joaat("MP_F_FREEMODE_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		case 4:
			if (bParam5 == Global_73804)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (bParam5 == Global_73805)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (bParam5 == Global_73806)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (bParam5 == Global_73807)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (bParam5 == Global_73808)
			{
				StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (bParam5 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam10 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam10 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam10 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam10 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam10 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam10 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam10 == 6)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else if (iParam7 == 22)
			{
				StringCopy(&cParam1, UNK_0x1739BA50603D849C(bParam5), 16);
				if (UNK_0xEA6BC48857E0AC4C(&cParam1) || UNK_0x12AB0310C2281427(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (bParam5)
					{
						case joaat("DUBSTA2"):
						case joaat("CAVALCADE2"):
						case joaat("MESA2"):
						case joaat("RAPIDGT2"):
						case joaat("EMPEROR2"):
						case joaat("CARGOBOB2"):
							StringConCat(sParam0, "2", 64);
							break;
						case joaat("MESA3"):
						case joaat("EMPEROR3"):
						case joaat("BURRITO3"):
						case joaat("MULE3"):
							StringConCat(sParam0, "3", 64);
							break;
						case joaat("TORNADO4"):
							StringConCat(sParam0, "4", 64);
							break;
					}
				}
			}
			else if (iParam7 == 40)
			{
				switch (bParam5)
				{
					case joaat("FCR2"):
						StringCopy(&cParam1, "FCR2", 16);
						break;
					case joaat("DIABLOUS2"):
						StringCopy(&cParam1, "DIABLOUS2", 16);
						break;
					case joaat("COMET3"):
						StringCopy(&cParam1, "COMET3", 16);
						break;
					default:
						StringCopy(&cParam1, UNK_0x1739BA50603D849C(bParam5), 16);
						if (UNK_0xEA6BC48857E0AC4C(&cParam1))
						{
							return;
						}
						break;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (bParam5)
					{
						case joaat("DUBSTA2"):
						case joaat("CAVALCADE2"):
						case joaat("MESA2"):
						case joaat("RAPIDGT2"):
						case joaat("EMPEROR2"):
						case joaat("CARGOBOB2"):
							StringConCat(sParam0, "2", 64);
							break;
						case joaat("MESA3"):
						case joaat("EMPEROR3"):
						case joaat("BURRITO3"):
						case joaat("MULE3"):
							StringConCat(sParam0, "3", 64);
							break;
						case joaat("TORNADO4"):
							StringConCat(sParam0, "4", 64);
							break;
					}
				}
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
				if (iParam10 != -1)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam10, 64);
				}
			}
			break;
	}
	if (bParam12)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_307(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 2;
	}
	return -1;
}

int func_308(bool bParam0)
{
	return func_309(bParam0);
}

int func_309(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 0;
		case joaat("WEAPON_PISTOL"):
			return 1;
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
		case joaat("WEAPON_APPISTOL"):
			return 3;
		case joaat("WEAPON_PISTOL50"):
			return 4;
		case joaat("WEAPON_SMG"):
			return 5;
		case joaat("WEAPON_ASSAULTSMG"):
			return 6;
		case joaat("WEAPON_MICROSMG"):
			return 7;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 8;
		case joaat("WEAPON_CARBINERIFLE"):
			return 9;
		case joaat("WEAPON_HEAVYRIFLE"):
			return 10;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 11;
		case joaat("WEAPON_MG"):
			return 12;
		case joaat("WEAPON_COMBATMG"):
			return 13;
		case joaat("WEAPON_ASSAULTMG"):
			return 14;
		case joaat("WEAPON_STICKYBOMB"):
			return 15;
		case joaat("WEAPON_GRENADE"):
			return 16;
		case joaat("WEAPON_SMOKEGRENADE"):
			return 17;
		case joaat("WEAPON_REMOTESNIPER"):
			return 18;
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 19;
		case joaat("WEAPON_SNIPERRIFLE"):
			return 20;
		case joaat("WEAPON_HEAVYSNIPER"):
			return 21;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 22;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 23;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 24;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 25;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 26;
		case joaat("WEAPON_RPG"):
			return 27;
		case joaat("WEAPON_MINIGUN"):
			return 28;
		case joaat("WEAPON_LOUDHAILER"):
			return 29;
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return 30;
		case joaat("WEAPON_STUNGUN"):
			return 31;
		case joaat("WEAPON_RUBBERGUN"):
			return 32;
		case joaat("GADGET_PARACHUTE"):
			return 33;
		case joaat("WEAPON_KNIFE"):
			return 34;
		case joaat("WEAPON_NIGHTSTICK"):
			return 35;
		case joaat("WEAPON_HAMMER"):
			return 36;
		case joaat("WEAPON_BAT"):
			return 37;
		case joaat("WEAPON_CROWBAR"):
			return 38;
		case joaat("WEAPON_GOLFCLUB"):
			return 39;
		case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
			return 40;
		case joaat("WEAPON_MOLOTOV"):
			return 41;
		case joaat("WEAPON_FIREEXTINGUISHER"):
			return 42;
		case joaat("WEAPON_PETROLCAN"):
			return 43;
		case joaat("WEAPON_DIGISCANNER"):
			return 44;
		case joaat("WEAPON_BOTTLE"):
			return 45;
		case joaat("WEAPON_SPECIALCARBINE"):
			return 46;
		case joaat("WEAPON_SNSPISTOL"):
			return 47;
		case joaat("WEAPON_HEAVYPISTOL"):
			return 49;
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 48;
		case joaat("WEAPON_GUSENBERG"):
			return 50;
		case joaat("WEAPON_DAGGER"):
			return 51;
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 52;
		case joaat("WEAPON_FLAREGUN"):
			return 57;
		case joaat("WEAPON_MUSKET"):
			return 53;
		case joaat("WEAPON_FIREWORK"):
			return 54;
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 56;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 55;
		case joaat("WEAPON_PROXMINE"):
			return 60;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 61;
		case joaat("WEAPON_HATCHET"):
			return 58;
		case joaat("WEAPON_RAILGUN"):
			return 59;
		case joaat("WEAPON_COMBATPDW"):
			return 64;
		case joaat("WEAPON_KNUCKLE"):
			return 62;
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 63;
		case joaat("WEAPON_MACHETE"):
			return 65;
		case joaat("WEAPON_MACHINEPISTOL"):
			return 68;
		case joaat("WEAPON_DBSHOTGUN"):
			return 66;
		case joaat("WEAPON_COMPACTRIFLE"):
			return 67;
		case joaat("WEAPON_FLASHLIGHT"):
			return 69;
		case joaat("WEAPON_REVOLVER"):
			return 70;
		case joaat("WEAPON_SWITCHBLADE"):
			return 71;
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 72;
		case joaat("WEAPON_MINISMG"):
			return 73;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 74;
		case joaat("WEAPON_BATTLEAXE"):
			return 75;
		case joaat("WEAPON_PIPEBOMB"):
			return 76;
		case joaat("WEAPON_POOLCUE"):
			return 77;
		case joaat("WEAPON_WRENCH"):
			return 78;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 8;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 9;
		case joaat("WEAPON_COMBATMG_MK2"):
			return 13;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 21;
		case joaat("WEAPON_PISTOL_MK2"):
			return 1;
		case joaat("WEAPON_SMG_MK2"):
			return 5;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 22;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 46;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 47;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 56;
		case joaat("WEAPON_REVOLVER_MK2"):
			return 70;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
		case joaat("WEAPON_DOUBLEACTION"):
			return 79;
		case joaat("WEAPON_STONE_HATCHET"):
			return 80;
		case joaat("WEAPON_RAYPISTOL"):
			return 81;
		case joaat("WEAPON_RAYCARBINE"):
			return 82;
		case joaat("WEAPON_RAYMINIGUN"):
			return 83;
		case joaat("WEAPON_NAVYREVOLVER"):
			return 84;
		case joaat("WEAPON_CERAMICPISTOL"):
			return 85;
	}
	return 0;
}

char* func_310(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	struct<7> Var41;

	if (bParam1 == joaat("WEAPON_KNUCKLE"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_KNUCKLE_VARMOD_BASE"):
				return "WT_KNUCKLE";
			case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
				return "WCT_KNUCK_02";
			case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
				return "WCT_KNUCK_BG";
			case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
				return "WCT_KNUCK_DLR";
			case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
				return "WCT_KNUCK_DMD";
			case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
				return "WCT_KNUCK_HT";
			case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
				return "WCT_KNUCK_LV";
			case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
				return "WCT_KNUCK_PC";
			case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
				return "WCT_KNUCK_SLG";
			case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
				return "WCT_KNUCK_VG";
		}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE";
		case joaat("COMPONENT_AT_RAILCOVER_01"):
			return "WCT_RAIL";
		case joaat("COMPONENT_AT_AR_AFGRIP"):
			return "WCT_GRIP";
		case joaat("COMPONENT_AT_PI_FLSH"):
			return "WCT_FLASH";
		case joaat("COMPONENT_AT_AR_FLSH"):
			return "WCT_FLASH";
		case joaat("COMPONENT_AT_SCOPE_MACRO"):
			return "WCT_SCOPE_MAC";
		case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
			return "WCT_SCOPE_MAC";
		case joaat("COMPONENT_AT_SCOPE_SMALL"):
			return "WCT_SCOPE_SML";
		case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
			return "WCT_SCOPE_SML";
		case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
			return "WCT_SCOPE_MED";
		case joaat("COMPONENT_AT_SCOPE_LARGE"):
			return "WCT_SCOPE_LRG";
		case joaat("COMPONENT_AT_SCOPE_MAX"):
			return "WCT_SCOPE_MAX";
		case joaat("COMPONENT_AT_PI_SUPP"):
			return "WCT_SUPP";
		case joaat("COMPONENT_AT_AR_SUPP"):
			return "WCT_SUPP";
		case joaat("COMPONENT_AT_AR_SUPP_02"):
			return "WCT_SUPP";
		case joaat("COMPONENT_AT_SR_SUPP"):
			return "WCT_SUPP";
		case joaat("COMPONENT_PISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_APPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_MICROSMG_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_SMG_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_SMG_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_MG_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_MG_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_COMBATMG_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_MINIGUN_CLIP_01"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_PISTOL50_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return "WCT_CLIP2";
		case 195735895:
			return "WCT_CLIP1";
		case 1525977990:
			return "WCT_CLIP1";
		case 1824470811:
			return "WCT_CLIP2";
		case -890514874:
			return "WCT_CLIP1";
		case -507117574:
			return "WCT_CLIP2";
		case -124428919:
			return "WCT_CLIP1";
		case 1048471894:
			return "WCT_CLIP2";
		case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
			return "WCT_SCOPE_LRG";
		case joaat("COMPONENT_AT_PI_SUPP_02"):
			return "WCT_SUPP";
		case joaat("COMPONENT_COMBATPDW_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_COMBATPDW_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
		case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
		case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
			return "WCT_VAR_SIL";
		case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_WOOD";
		case joaat("COMPONENT_SMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
		case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_WOOD";
		case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
			return "WCT_VAR_METAL";
		case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM";
		case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_WOOD";
		case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM";
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
			return "WCT_SB_BASE";
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
			return "WCT_SB_VAR1";
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
			return "WCT_SB_VAR2";
		case joaat("COMPONENT_REVOLVER_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
			return "WCT_REV_VARB";
		case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
			return "WCT_REV_VARG";
		case joaat("COMPONENT_SMG_CLIP_03"):
			return "WCT_CLIP_DRM";
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return "WCT_CLIP_BOX";
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return "WCT_CLIP_DRM";
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			return "WCT_CLIP_DRM";
		case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
			return "WCT_VAR_GUN";
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
		case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
			return "WCT_SCOPE_MAC2";
		case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
			return "WCT_SCOPE_SML2";
		case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
			return "WCT_VAR_RAY18";
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
			return "WCT_SUPP";
		default:
			if (bParam1 != 0)
			{
				iVar0 = func_66(bParam1, &uVar2);
				if (iVar0 != -1)
				{
					bVar1 = false;
					while (bVar1 < UNK_0xA942498EEAA3EEAD(iVar0))
					{
						if (UNK_0x8B27EE8DAA2A39B3(iVar0, bVar1, &Var41))
						{
							if (Var41.f_3 == iParam0)
							{
								return func_311(&(Var41.f_6));
							}
						}
						bVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

var func_311(var uParam0)
{
	return uParam0;
}

bool func_312()
{
	if (UNK_0x8CD06866876216F2() && func_313())
	{
		return true;
	}
	return false;
}

bool func_313()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_314(int iParam0)
{
	if (!UNK_0x8CD06866876216F2())
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			case joaat("COMPONENT_COMBATPDW_CLIP_03"):
			case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
			case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
			case joaat("COMPONENT_SMG_CLIP_03"):
			case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
				return false;
			default:
				break;
		}
	}
	else if (func_315(iParam0))
	{
		return Global_262145.f_20713;
	}
	return true;
}

bool func_315(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
			return true;
	}
	return false;
}

int func_316()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	if (UNK_0xEAE0D21A50E6C7F4(Global_25, 6))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_25, 2) || UNK_0xEAE0D21A50E6C7F4(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &bVar0, -1))
	{
		if (UNK_0xEAE0D21A50E6C7F4(bVar0, 6))
		{
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 2) || UNK_0xEAE0D21A50E6C7F4(bVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (UNK_0x0556D13739839AFD(false))
	{
		if (Global_150473.f_3)
		{
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
			if (UNK_0x6FB46C25CCB7E6D5(iVar2, &bVar1, -1))
			{
				if (UNK_0xEAE0D21A50E6C7F4(bVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (UNK_0xE0DC536BD2AC0301())
	{
		bVar3 = UNK_0x0A4C9A3D51EAE31F(866);
		if (UNK_0xEAE0D21A50E6C7F4(bVar3, 2) || UNK_0xEAE0D21A50E6C7F4(bVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_317()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	if (UNK_0xEAE0D21A50E6C7F4(Global_25, 5))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_25, true) || UNK_0xEAE0D21A50E6C7F4(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &bVar0, -1))
	{
		if (UNK_0xEAE0D21A50E6C7F4(bVar0, 5))
		{
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, true) || UNK_0xEAE0D21A50E6C7F4(bVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (UNK_0x0556D13739839AFD(false))
	{
		if (Global_150473.f_3)
		{
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
			if (UNK_0x6FB46C25CCB7E6D5(iVar2, &bVar1, -1))
			{
				if (UNK_0xEAE0D21A50E6C7F4(bVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (UNK_0xE0DC536BD2AC0301())
	{
		bVar3 = UNK_0x0A4C9A3D51EAE31F(866);
		if (UNK_0xEAE0D21A50E6C7F4(bVar3, true) || UNK_0xEAE0D21A50E6C7F4(bVar3, 3))
		{
			return 1;
		}
	}
	if (UNK_0x61D9362D70D2DD56())
	{
		if (UNK_0x999A3BFD3E9B5D2C())
		{
			if (UNK_0xDA1BF71E2E8A1C89())
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &bVar4, -1);
				UNK_0x5D96D8530B3D0904(&bVar4, true);
				UNK_0x5D96D8530B3D0904(&bVar4, 3);
				UNK_0x5D96D8530B3D0904(&bVar4, 5);
				UNK_0x5D96D8530B3D0904(&Global_25, true);
				UNK_0x5D96D8530B3D0904(&Global_25, 3);
				UNK_0x5D96D8530B3D0904(&Global_25, 5);
				UNK_0xCDC520E5E48E63D9(joaat("SP_UNLOCK_EXCLUS_CONTENT"), bVar4, 1);
				if (UNK_0xE0DC536BD2AC0301())
				{
					bVar4 = UNK_0x0A4C9A3D51EAE31F(866);
					UNK_0x5D96D8530B3D0904(&bVar4, true);
					UNK_0x5D96D8530B3D0904(&bVar4, 3);
					UNK_0x9F2BE984EBF8A0F4(bVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_318()
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
				return 1;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return 1;
	}
	else if (Global_150472 == 3)
	{
		return 0;
	}
	if (UNK_0xE0DC536BD2AC0301())
	{
		if (UNK_0xEAE0D21A50E6C7F4(UNK_0x0A4C9A3D51EAE31F(866), false))
		{
			return 1;
		}
	}
	return 0;
}

bool func_319(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	if (func_327())
	{
		return false;
	}
	bVar0 = func_323(iParam0, iParam1, iParam2);
	iVar1 = func_321(iParam0, iParam1);
	return UNK_0xEAE0D21A50E6C7F4(bVar0, func_320(iVar1));
}

int func_320(int iParam0)
{
	return (iParam0 % 32);
}

int func_321(int iParam0, int iParam1)
{
	return func_322(iParam0, iParam1);
}

int func_322(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_CLIP_01"):
					return 1;
				case joaat("COMPONENT_PISTOL_CLIP_02"):
					return 2;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 3;
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 4;
				case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
					return 175;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 211;
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
					return 5;
				case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
					return 6;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 7;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 8;
				case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
					return 186;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_APPISTOL_CLIP_01"):
					return 11;
				case joaat("COMPONENT_APPISTOL_CLIP_02"):
					return 12;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 13;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 14;
				case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
					return 164;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MICROSMG_CLIP_01"):
					return 15;
				case joaat("COMPONENT_MICROSMG_CLIP_02"):
					return 16;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 17;
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 18;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 19;
				case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
					return 174;
			}
			break;
		case joaat("WEAPON_SMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_CLIP_01"):
					return 22;
				case joaat("COMPONENT_SMG_CLIP_02"):
					return 23;
				case joaat("COMPONENT_SMG_CLIP_03"):
					return 207;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 24;
				case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
					return 25;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 26;
				case joaat("COMPONENT_SMG_VARMOD_LUXE"):
					return 179;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 212;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
					return 27;
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
					return 28;
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
					return 201;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 29;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 30;
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 31;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 32;
				case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
					return 165;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 213;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
					return 33;
				case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
					return 34;
				case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
					return 202;
				case joaat("COMPONENT_AT_RAILCOVER_01"):
					return 35;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 36;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 37;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 38;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 39;
				case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
					return 168;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 214;
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
					return 44;
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
					return 45;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 47;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 48;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 49;
				case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
					return 163;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MG_CLIP_01"):
					return 50;
				case joaat("COMPONENT_MG_CLIP_02"):
					return 51;
				case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
					return 52;
				case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
					return 187;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_CLIP_01"):
					return 53;
				case joaat("COMPONENT_COMBATMG_CLIP_02"):
					return 54;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 55;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 56;
				case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
					return 188;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 215;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SR_SUPP"):
					return 59;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 60;
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
					return 193;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 389;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
					return 64;
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
					return 65;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 66;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 67;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 68;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
					return 69;
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 70;
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 71;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 72;
				case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
					return 180;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
					return 76;
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 77;
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 82;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 216;
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 78;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 79;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 80;
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINIGUN_CLIP_01"):
					return 81;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
					return 83;
				case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
					return 84;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 85;
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 86;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 87;
				case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
					return 189;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 88;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 89;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 90;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL50_CLIP_01"):
					return 91;
				case joaat("COMPONENT_PISTOL50_CLIP_02"):
					return 92;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 93;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 94;
				case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
					return 176;
			}
			break;
		case joaat("WEAPON_ASSAULTSNIPER"):
			switch (iParam0)
			{
				case 195735895:
					return 95;
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 96;
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 97;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 98;
			}
			break;
		case joaat("WEAPON_HEAVYRIFLE"):
			switch (iParam0)
			{
				case 1525977990:
					return 99;
				case 1824470811:
					return 100;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 101;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 102;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 103;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 104;
			}
			break;
		case joaat("WEAPON_ASSAULTMG"):
			switch (iParam0)
			{
				case -890514874:
					return 105;
				case -507117574:
					return 106;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 107;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 108;
			}
			break;
		case joaat("WEAPON_PROGRAMMABLEAR"):
			switch (iParam0)
			{
				case -124428919:
					return 109;
				case 1048471894:
					return 110;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
					return 111;
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
					return 112;
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
					return 208;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 113;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 114;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 115;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 116;
				case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
					return 190;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 390;
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
					return 117;
				case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
					return 118;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 119;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 120;
				case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
					return 191;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 391;
			}
			break;
		case joaat("WEAPON_HEAVYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
					return 121;
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
					return 122;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 123;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 124;
				case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
					return 171;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
					return 131;
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
					return 132;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 127;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 128;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 129;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 130;
				case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
					return 192;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 394;
			}
			break;
		case joaat("WEAPON_GUSENBERG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GUSENBERG_CLIP_01"):
					return 125;
				case joaat("COMPONENT_GUSENBERG_CLIP_02"):
					return 126;
			}
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
					return 133;
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
					return 134;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 136;
			}
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
					return 137;
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
					return 140;
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
					return 205;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 145;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 146;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 147;
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
					return 138;
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
					return 139;
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
					return 141;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 142;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 143;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 144;
				case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
					return 172;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 392;
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPDW_CLIP_01"):
					return 149;
				case joaat("COMPONENT_COMBATPDW_CLIP_02"):
					return 150;
				case joaat("COMPONENT_COMBATPDW_CLIP_03"):
					return 203;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 151;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 152;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 153;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
					return 178;
			}
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
					return 148;
			}
			break;
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
					return 154;
				case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
					return 155;
				case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
					return 156;
				case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
					return 157;
				case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
					return 158;
				case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
					return 159;
				case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
					return 160;
				case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
					return 161;
				case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
					return 162;
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
					return 184;
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
					return 185;
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
					return 206;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 183;
			}
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
					return 194;
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
					return 195;
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_CLIP_01"):
					return 196;
				case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
					return 197;
				case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
					return 198;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 393;
			}
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
					return 199;
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
					return 200;
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
					return 204;
			}
			break;
		case joaat("WEAPON_MINISMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINISMG_CLIP_01"):
					return 209;
				case joaat("COMPONENT_MINISMG_CLIP_02"):
					return 210;
			}
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
					return 217;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
					return 218;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
					return 219;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 220;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
					return 221;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
					return 222;
				case joaat("COMPONENT_AT_PI_FLSH_02"):
					return 223;
				case joaat("COMPONENT_AT_PI_RAIL"):
					return 224;
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 225;
				case joaat("COMPONENT_AT_PI_COMP"):
					return 226;
				case joaat("COMPONENT_PISTOL_MK2_CAMO"):
					return 367;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
					return 368;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
					return 369;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
					return 370;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
					return 371;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
					return 372;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
					return 373;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
					return 374;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
					return 375;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
					return 376;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
					return 377;
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_MK2_CLIP_01"):
					return 227;
				case joaat("COMPONENT_SMG_MK2_CLIP_02"):
					return 228;
				case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
					return 229;
				case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
					return 230;
				case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
					return 231;
				case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
					return 232;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 233;
				case joaat("COMPONENT_AT_SIGHTS_SMG"):
					return 234;
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 235;
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 236;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 237;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 238;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 239;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 240;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 241;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 242;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 243;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 244;
				case joaat("COMPONENT_AT_SB_BARREL_01"):
					return 245;
				case joaat("COMPONENT_AT_SB_BARREL_02"):
					return 246;
				case joaat("COMPONENT_SMG_MK2_CAMO"):
					return 378;
				case joaat("COMPONENT_SMG_MK2_CAMO_02"):
					return 379;
				case joaat("COMPONENT_SMG_MK2_CAMO_03"):
					return 380;
				case joaat("COMPONENT_SMG_MK2_CAMO_04"):
					return 381;
				case joaat("COMPONENT_SMG_MK2_CAMO_05"):
					return 382;
				case joaat("COMPONENT_SMG_MK2_CAMO_06"):
					return 383;
				case joaat("COMPONENT_SMG_MK2_CAMO_07"):
					return 384;
				case joaat("COMPONENT_SMG_MK2_CAMO_08"):
					return 385;
				case joaat("COMPONENT_SMG_MK2_CAMO_09"):
					return 386;
				case joaat("COMPONENT_SMG_MK2_CAMO_10"):
					return 387;
				case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
					return 388;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
					return 247;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
					return 248;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
					return 249;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
					return 250;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
					return 251;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
					return 252;
				case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
					return 253;
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 254;
				case joaat("COMPONENT_AT_SCOPE_NV"):
					return 255;
				case joaat("COMPONENT_AT_SCOPE_THERMAL"):
					return 256;
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 257;
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 258;
				case joaat("COMPONENT_AT_MUZZLE_09"):
					return 259;
				case joaat("COMPONENT_AT_SR_BARREL_01"):
					return 260;
				case joaat("COMPONENT_AT_SR_BARREL_02"):
					return 261;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
					return 356;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
					return 357;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
					return 358;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
					return 359;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
					return 360;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
					return 361;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
					return 362;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
					return 363;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
					return 364;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
					return 365;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
					return 366;
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
					return 262;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
					return 263;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
					return 264;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
					return 265;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
					return 266;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
					return 267;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 268;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 269;
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 270;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 271;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 272;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 273;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 274;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 275;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 276;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 277;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 278;
				case joaat("COMPONENT_AT_MG_BARREL_01"):
					return 279;
				case joaat("COMPONENT_AT_MG_BARREL_02"):
					return 280;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
					return 345;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
					return 346;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
					return 347;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
					return 348;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
					return 349;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
					return 350;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
					return 351;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
					return 352;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
					return 353;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
					return 354;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
					return 355;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
					return 281;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
					return 282;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 283;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
					return 284;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
					return 285;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
					return 286;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 287;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 288;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 289;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 290;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 291;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 292;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 293;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 294;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 295;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 296;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 297;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 298;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 299;
				case joaat("COMPONENT_AT_AR_BARREL_01"):
					return 300;
				case joaat("COMPONENT_AT_AR_BARREL_02"):
					return 301;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
					return 323;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
					return 324;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
					return 325;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
					return 326;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
					return 327;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
					return 328;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
					return 329;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
					return 330;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
					return 331;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
					return 332;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
					return 333;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
					return 302;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
					return 303;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
					return 304;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
					return 305;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
					return 306;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
					return 307;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 308;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 309;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 310;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 311;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 312;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 313;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 314;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 315;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 316;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 317;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 318;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 319;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 320;
				case joaat("COMPONENT_AT_CR_BARREL_01"):
					return 321;
				case joaat("COMPONENT_AT_CR_BARREL_02"):
					return 322;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
					return 334;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
					return 335;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
					return 336;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
					return 337;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
					return 338;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
					return 339;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
					return 340;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
					return 341;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
					return 342;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
					return 343;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
					return 344;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
					return 395;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
					return 396;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
					return 397;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
					return 398;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
					return 399;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 400;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 401;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 402;
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 403;
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 404;
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 405;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
					return 488;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
					return 489;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
					return 490;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
					return 491;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
					return 492;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
					return 493;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
					return 494;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
					return 495;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
					return 496;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
					return 497;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
					return 498;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
					return 406;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
					return 407;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
					return 408;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
					return 409;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
					return 410;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
					return 411;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 412;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 413;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 414;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 415;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 416;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 417;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 418;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 419;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 420;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 421;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 422;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 423;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 424;
				case joaat("COMPONENT_AT_SC_BARREL_01"):
					return 425;
				case joaat("COMPONENT_AT_SC_BARREL_02"):
					return 426;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
					return 532;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
					return 533;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
					return 534;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
					return 535;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
					return 536;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
					return 537;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
					return 538;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
					return 539;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
					return 540;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
					return 541;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
					return 542;
			}
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
					return 427;
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
					return 428;
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
					return 429;
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 430;
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
					return 431;
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
					return 432;
				case joaat("COMPONENT_AT_PI_FLSH_03"):
					return 433;
				case joaat("COMPONENT_AT_PI_RAIL_02"):
					return 434;
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 435;
				case joaat("COMPONENT_AT_PI_COMP_02"):
					return 436;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
					return 510;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
					return 511;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
					return 512;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
					return 513;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
					return 514;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
					return 515;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
					return 516;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
					return 517;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
					return 518;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
					return 519;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
					return 520;
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
					return 437;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
					return 438;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 439;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
					return 440;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
					return 441;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
					return 442;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 443;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 444;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 445;
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
					return 446;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 447;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 448;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 449;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 450;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 451;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 452;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 453;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 454;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 455;
				case joaat("COMPONENT_AT_MRFL_BARREL_01"):
					return 456;
				case joaat("COMPONENT_AT_MRFL_BARREL_02"):
					return 457;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
					return 521;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
					return 522;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
					return 523;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
					return 524;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
					return 525;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
					return 526;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
					return 527;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
					return 528;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
					return 529;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
					return 530;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
					return 531;
			}
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
					return 458;
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
					return 459;
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
					return 460;
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
					return 461;
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
					return 462;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 463;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 464;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 465;
				case joaat("COMPONENT_AT_PI_COMP_03"):
					return 466;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
					return 499;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
					return 500;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
					return 501;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
					return 502;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
					return 503;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
					return 504;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
					return 505;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
					return 506;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
					return 507;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
					return 508;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
					return 509;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
					return 467;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
					return 468;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 469;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
					return 470;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
					return 471;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
					return 472;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 473;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 474;
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
					return 475;
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 476;
				case joaat("COMPONENT_AT_BP_BARREL_01"):
					return 477;
				case joaat("COMPONENT_AT_BP_BARREL_02"):
					return 478;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 479;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 480;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 481;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 482;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 483;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 484;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 485;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 486;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 487;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
					return 543;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
					return 544;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
					return 545;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
					return 546;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
					return 547;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
					return 548;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
					return 549;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
					return 550;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
					return 551;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
					return 552;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
					return 553;
			}
			break;
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
					return 554;
			}
			break;
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
					return 555;
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
					return 556;
				case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
					return 557;
			}
			break;
	}
	return 0;
}

int func_323(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_52(func_324(iParam0, iParam1), iParam2, 0);
	return iVar0;
}

int func_324(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_321(iParam0, iParam1);
	iVar1 = func_326(iVar0);
	if ((func_77() == 0 || func_325() == 0) || (func_77() == 999 && func_325() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 687;
			case 1:
				return 688;
			case 2:
				return 689;
			case 3:
				return 690;
			case 4:
				return 1753;
			case 5:
				return 2435;
			case 6:
				return 2827;
			case 7:
				return 5501;
			case 8:
				return 5505;
			case 9:
				return 5509;
			case 10:
				return 5622;
			case 11:
				return 5626;
			case 12:
				return 5630;
			case 13:
				return 5634;
			case 14:
				return 6373;
			case 15:
				return 6496;
			case 16:
				return 6516;
			case 17:
				return 6522;
		}
	}
	return 1753;
}

int func_325()
{
	return Global_30769;
}

int func_326(int iParam0)
{
	return (iParam0 / 32);
}

bool func_327()
{
	return Global_1312856;
}

bool func_328(int iParam0)
{
	if (iParam0 != -1)
	{
		if ((((iParam0 == 46 || iParam0 == 47) || iParam0 == 48) || iParam0 == 49) || iParam0 == 52)
		{
			return true;
		}
	}
	return false;
}

void func_329(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
}

bool func_330(var uParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar7;

	func_329(&Var0, *uParam0, uParam0->f_4, uParam0->f_6, uParam0->f_1);
	while (func_278(&Var0, bParam1, iVar7, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			return true;
		}
		iVar7++;
	}
	return false;
}

bool func_331(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_332(var uParam0)
{
	if (!UNK_0xC844350D5D58C99A(*uParam0))
	{
		return 0;
	}
	UNK_0x7980D72D61BEF4D5(*uParam0, true);
	return 1;
}

bool func_333(bool bParam0, bool bParam1, vector3 vParam2, bool bParam5)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		UNK_0xA954465BA6FDEFE2(bParam0);
		*bParam0 = 0;
	}
	*bParam0 = UNK_0x122AAB0B1D6F55AD(bParam1, vParam2, bParam5, true, true, false);
	if (!UNK_0xC844350D5D58C99A(*bParam0))
	{
		return false;
	}
	return true;
}

int func_334(var uParam0)
{
	if (!UNK_0xC844350D5D58C99A(*uParam0))
	{
		return 0;
	}
	UNK_0x6D80F1AEBA734886(*uParam0, false);
	UNK_0x5F2AA9E2843E9403(*uParam0, "RAMP:SCENE PED");
	UNK_0x25C5402CC10F76CD(*uParam0, false);
	UNK_0x11AD11297DC58CC7(*uParam0, true);
	return 1;
}

bool func_335(bool bParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		UNK_0xEBA53F35D0085654(bParam0);
		*bParam0 = 0;
	}
	*bParam0 = UNK_0x36F2404464202779(26, bParam1, vParam2, bParam5, 1, true);
	if (!UNK_0xC844350D5D58C99A(*bParam0))
	{
		return false;
	}
	if (bParam6)
	{
		func_336(*bParam0, vParam2);
		UNK_0xD8F6A53F4799FAFE(*bParam0, bParam5);
	}
	UNK_0x6D80F1AEBA734886(*bParam0, false);
	UNK_0x5F2AA9E2843E9403(*bParam0, "RAMP:SCENE PED");
	UNK_0x25C5402CC10F76CD(*bParam0, false);
	UNK_0x11AD11297DC58CC7(*bParam0, true);
	return true;
}

Vector3 func_336(bool bParam0, vector3 vParam1)
{
	var uVar0;

	vParam1.f_2 = (vParam1.z + 0.15f);
	if (UNK_0xE82754C349C7B581(vParam1, &uVar0, 0, 0))
	{
		vParam1.f_2 = uVar0;
	}
	if (func_225(bParam0))
	{
		UNK_0xA47B46945FF6DE74(bParam0, vParam1, 1, 0, 0, 1);
	}
	return vParam1;
}

int func_337()
{
	return UNK_0x7D6CA5F52B3748BF(-177.0628f, -1679.715f, 33.16263f, -157.0628f, -1659.715f, 37.16263f, 0, 1, 1, 1);
}

void func_338(int iParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = joaat("IG_RAMP_GANG");
	bVar1 = "misstrvram_4";
	UNK_0x523BCC9DC80CD82F(bVar0);
	UNK_0x3F423BF5B8125A50(bVar1);
	UNK_0x6D0C93EE4FBA9307(joaat("WEAPON_ASSAULTRIFLE"), 31, 0);
	while (!UNK_0xB87F6CF6E5628C67(bVar0) || !UNK_0xB4AE0788C1587752(bVar1))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_335(&(iParam0->f_28[0]), bVar0, -161.37f, -1669.63f, 33.1f, func_331(1.03f), 1))
	{
		SYSTEM::WAIT(0);
	}
	func_334(&(iParam0->f_28[0]));
	UNK_0x5F2AA9E2843E9403(iParam0->f_28[0], "RP0_NOGUN");
	UNK_0x78ED16BE998AECC7(iParam0->f_28[0]);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], false, true, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], true, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 2, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 3, false, true, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 4, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 5, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 6, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 7, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 8, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 9, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 10, false, true, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 11, false, false, 0);
	UNK_0xC6EB89C59F2AF6B8(iParam0->f_28[0], bVar1, "thugs_idle_b", 8f, -8f, -1, 1, false, 0, 0, 0);
	while (!func_335(&(iParam0->f_28[1]), bVar0, -161.93f, -1670.39f, 33.14f, func_331(0.2f), 1))
	{
		SYSTEM::WAIT(0);
	}
	func_334(&(iParam0->f_28[1]));
	UNK_0x5F2AA9E2843E9403(iParam0->f_28[1], "RP1_GUN");
	UNK_0x78ED16BE998AECC7(iParam0->f_28[1]);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], false, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], true, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 2, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 3, true, true, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 4, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 5, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 6, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 7, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 8, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 9, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 10, true, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 11, false, false, 0);
	UNK_0x262EF6C6306BEA6C(iParam0->f_28[1], joaat("WEAPON_ASSAULTRIFLE"), 100, true, true);
	UNK_0xC6EB89C59F2AF6B8(iParam0->f_28[1], bVar1, "thugs_idle_a", 8f, -8f, -1, 1, false, 0, 0, 0);
	StringCopy(&(iParam0->f_9), "TRVRAM_4", 24);
	iParam0->f_27 = 0;
	UNK_0x71199B01895C6202(bVar0);
}

void func_339(int iParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = joaat("IG_RAMP_MEX");
	bVar1 = "misstrvram_3";
	UNK_0x523BCC9DC80CD82F(bVar0);
	UNK_0x3F423BF5B8125A50(bVar1);
	UNK_0x6D0C93EE4FBA9307(joaat("WEAPON_MICROSMG"), 31, 10);
	while ((!UNK_0xB87F6CF6E5628C67(bVar0) || !UNK_0x1787731C4D1D6B19(joaat("WEAPON_MICROSMG"))) || !UNK_0xB4AE0788C1587752(bVar1))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_335(&(iParam0->f_28[0]), bVar0, 464.6125f, -1848.767f, 27.816f, 177.39f, 1))
	{
		SYSTEM::WAIT(0);
	}
	func_334(&(iParam0->f_28[0]));
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], false, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], true, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 2, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 3, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 4, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 5, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 6, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 7, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 8, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 9, true, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 10, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 11, false, false, 0);
	UNK_0x5F2AA9E2843E9403(iParam0->f_28[0], "RAMP:PED 0");
	UNK_0xC6EB89C59F2AF6B8(iParam0->f_28[0], bVar1, "mexicans_idle_a", 8f, -8f, -1, 1, false, 0, 0, 0);
	while (!func_335(&(iParam0->f_28[1]), bVar0, 465.782f, -1849.073f, 27.817f, 129.92f, 1))
	{
		SYSTEM::WAIT(0);
	}
	func_334(&(iParam0->f_28[1]));
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], false, true, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], true, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 2, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 3, true, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 4, false, true, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 5, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 6, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 7, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 8, true, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 9, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 10, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 11, false, false, 0);
	UNK_0x5F2AA9E2843E9403(iParam0->f_28[1], "RAMP:PED 1");
	UNK_0xC6EB89C59F2AF6B8(iParam0->f_28[1], bVar1, "mexicans_idle_b", 8f, -8f, -1, 1, false, 0, 0, 0);
	if (func_276(&(iParam0->f_41[0]), joaat("WEAPON_MICROSMG"), 467f, -1855.4f, 32f, func_331(-0.85f)))
	{
		UNK_0x3599C729CF725E87(iParam0->f_41[0], joaat("COMPONENT_AT_SCOPE_MACRO"));
		UNK_0x3599C729CF725E87(iParam0->f_41[0], joaat("COMPONENT_MICROSMG_CLIP_02"));
	}
	StringCopy(&(iParam0->f_9), "TRVRAM_3", 24);
	iParam0->f_27 = 0;
	UNK_0x71199B01895C6202(bVar0);
}

int func_340()
{
	return func_341(1182.137f, -400.4787f, 66.92414f, 8f);
}

int func_341(vector3 vParam0, float fParam3)
{
	vector3 vVar0;

	vVar0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return UNK_0x7D6CA5F52B3748BF(vParam0 - vVar0, vParam0 + vVar0, 0, 1, 1, 1);
}

void func_342(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;

	bVar0 = joaat("IG_RAMP_HIPSTER");
	bVar1 = joaat("PROP_CHAIR_01A");
	bVar2 = joaat("PROP_NPC_PHONE");
	bVar3 = "misstrvram_2";
	iVar4 = 60309;
	vVar5 = { 0f, 0f, 0f };
	vVar8 = { 0f, 0f, 0f };
	UNK_0x6D0C93EE4FBA9307(joaat("WEAPON_SAWNOFFSHOTGUN"), 31, 0);
	UNK_0x523BCC9DC80CD82F(bVar0);
	UNK_0x523BCC9DC80CD82F(bVar1);
	UNK_0x523BCC9DC80CD82F(bVar2);
	UNK_0x3F423BF5B8125A50(bVar3);
	func_346(&uLocal_112);
	while ((((!UNK_0xB87F6CF6E5628C67(bVar0) || !UNK_0xB87F6CF6E5628C67(bVar1)) || !UNK_0xB87F6CF6E5628C67(bVar2)) || !UNK_0xB4AE0788C1587752(bVar3)) || !func_345(&uLocal_112))
	{
		SYSTEM::WAIT(0);
	}
	UNK_0x75CFD6AD66ADFDD1(1180.021f, -401.7374f, 66.8767f, 0.75f, 0);
	iParam0->f_41[2] = UNK_0x4B72871A3BE7B474(1179.778f, -401.7374f, 66.8697f, 1f, joaat("PROP_CHAIR_01A"), 1, 0, 1);
	if (UNK_0xC844350D5D58C99A(iParam0->f_41[2]))
	{
		UNK_0xA47B46945FF6DE74(iParam0->f_41[2], 1180.05f, -401.83f, 66.88f, 1, 0, 0, 1);
		UNK_0xC023D1C4BF532815(iParam0->f_41[2], 0f, 0f, 50f, 2, 1);
		UNK_0x1E9649458B15960F(iParam0->f_41[2], true);
	}
	iParam0->f_41[3] = UNK_0x4B72871A3BE7B474(1181.243f, -402.5309f, 67.2564f, 1f, joaat("PROP_TABLE_01"), 1, 0, 1);
	if (UNK_0xC844350D5D58C99A(iParam0->f_41[3]))
	{
		UNK_0x1E9649458B15960F(iParam0->f_41[3], true);
	}
	while (!func_335(&(iParam0->f_28[0]), bVar0, 1181.547f, -400.0954f, 67.5757f, -124.2928f, 0))
	{
		SYSTEM::WAIT(0);
	}
	func_334(&(iParam0->f_28[0]));
	UNK_0x1E9649458B15960F(iParam0->f_28[0], true);
	UNK_0x78ED16BE998AECC7(iParam0->f_28[0]);
	UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 2, false, false, 0);
	func_344(&(iParam0->f_41[1]), bVar2, 1181.547f, -400.0954f, 65.5757f, 0f);
	UNK_0x9F528B1B53FBC5D9(iParam0->f_41[1], iParam0->f_28[0], UNK_0x4A089F2B762B8D33(iParam0->f_28[0], iVar4), vVar8, vVar5, 1, 0, 0, 0, 2, 1);
	func_343(&uLocal_112, 0, 3);
	if (!UNK_0x69DF961355195C3C(iParam0->f_59))
	{
		iParam0->f_59 = UNK_0xE9744DB7B8CA6965(vLocal_106, vLocal_109, 2);
		if (func_128(iParam0->f_28[0]))
		{
			UNK_0x915804B434753CBD(iParam0->f_28[0], iParam0->f_59, bVar3, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
		}
		UNK_0xC90224D9E95E5E3A(iParam0->f_59, true);
	}
	if (!func_276(&(iParam0->f_41[0]), joaat("WEAPON_SAWNOFFSHOTGUN"), 1162.2f, -395.4f, 72.9f, func_331(-0.71f)))
	{
	}
	StringCopy(&(iParam0->f_9), "TRVRAM_2_CONCAT", 24);
	iParam0->f_27 = 0;
	UNK_0x71199B01895C6202(bVar0);
	UNK_0x71199B01895C6202(bVar1);
	UNK_0x71199B01895C6202(bVar2);
}

void func_343(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (UNK_0x83D8570832F172A7(*uParam0))
	{
		if (bParam1)
		{
			UNK_0x870157785E99DF36(&iVar0);
		}
		else
		{
			if (!UNK_0xE6CD5C6925050049("npcphone"))
			{
				UNK_0x268029E44B2B3E36("npcphone", 0);
				UNK_0x064E7408AD6E15E5(joaat("PROP_NPC_PHONE"));
			}
			iVar0 = UNK_0x3FF702268B97B673("npcphone");
		}
		UNK_0x3039591AD3E735CE(iVar0);
		UNK_0x7E60C62A7CE58FC8(*uParam0, "DISPLAY_VIEW");
		UNK_0x3CAEA85DA607305E(bParam2);
		UNK_0x7E60D21B163E9D56();
		UNK_0xEF45C43067063F18(*uParam0, Global_19406, Global_19407, Global_19408, Global_19409, 255, 255, 255, 255, 0);
	}
}

void func_344(bool bParam0, bool bParam1, vector3 vParam2, bool bParam5)
{
	func_154(bParam0);
	*bParam0 = UNK_0x7707E48765093646(bParam1, vParam2, true, true, false);
	UNK_0xD8F6A53F4799FAFE(*bParam0, bParam5);
}

bool func_345(var uParam0)
{
	if (UNK_0x83D8570832F172A7(*uParam0))
	{
		return true;
	}
	return false;
}

void func_346(var uParam0)
{
	*uParam0 = UNK_0xB01F55A0FD1CFD49(func_347());
}

char* func_347()
{
	return "CELLPHONE_CUTSCENE";
}

int func_348()
{
	return func_341(911.5349f, 3642.111f, 31.64738f, 8f);
}

void func_349(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	bool bVar11;
	bool bVar12;
	bool bVar13;

	bVar3 = "misstrvram_1";
	iVar4 = 28422;
	vVar5 = { 0f, 0f, 0f };
	vVar8 = { 0f, 0f, -0.1f };
	bVar11 = joaat("IG_RAMP_HIC");
	bVar12 = joaat("PROP_TABLE_03B_CHR");
	bVar13 = joaat("PROP_BEER_BOTTLE");
	UNK_0x523BCC9DC80CD82F(bVar11);
	UNK_0x523BCC9DC80CD82F(bVar12);
	UNK_0x523BCC9DC80CD82F(bVar13);
	UNK_0x3F423BF5B8125A50(bVar3);
	UNK_0x6D0C93EE4FBA9307(joaat("WEAPON_ASSAULTRIFLE"), 31, 0);
	while ((((!UNK_0xB87F6CF6E5628C67(bVar11) || !UNK_0xB87F6CF6E5628C67(bVar12)) || !UNK_0xB87F6CF6E5628C67(bVar13)) || !UNK_0xB4AE0788C1587752(bVar3)) || !UNK_0x1787731C4D1D6B19(joaat("WEAPON_ASSAULTRIFLE")))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_335(&(iParam0->f_28[0]), bVar11, 907.998f, 3643.826f, 32.29243f, -173.0453f, 0))
	{
		SYSTEM::WAIT(0);
	}
	if (func_128(iParam0->f_28[0]))
	{
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], false, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], true, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 2, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 3, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 4, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 5, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 6, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 7, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 8, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 9, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 10, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 11, false, false, 0);
		vVar0 = { UNK_0x64430C979F516F7A(iParam0->f_28[0], iVar4, 0f, 0f, 0f) };
		UNK_0x5F2AA9E2843E9403(iParam0->f_28[0], "RAMP:PED 0");
		func_344(&(iParam0->f_41[1]), bVar13, vVar0, 0f);
		UNK_0x9F528B1B53FBC5D9(iParam0->f_41[1], iParam0->f_28[0], UNK_0x4A089F2B762B8D33(iParam0->f_28[0], iVar4), vVar8, vVar5, 1, 1, 0, 0, 2, 1);
		UNK_0x272295383B6513AB(iParam0->f_41[1], 1);
		UNK_0x1E9649458B15960F(iParam0->f_28[0], true);
		UNK_0x4E885A246A9D983A(iParam0->f_28[0], 208, true);
		UNK_0x6DF7BF67E86AAE86(iParam0->f_28[0], joaat("PLAYER"));
	}
	while (!func_335(&(iParam0->f_28[1]), bVar11, 909.3126f, 3643.507f, 32.2952f, 153.0127f, 0))
	{
		SYSTEM::WAIT(0);
	}
	if (func_128(iParam0->f_28[1]))
	{
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], false, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], true, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 2, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 3, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 4, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 5, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 6, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 7, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 8, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 9, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 10, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 11, false, false, 0);
		vVar0 = { UNK_0x64430C979F516F7A(iParam0->f_28[1], iVar4, 0f, 0f, 0f) };
		UNK_0x5F2AA9E2843E9403(iParam0->f_28[1], "RAMP:PED 1");
		func_344(&(iParam0->f_41[2]), bVar13, vVar0, 0f);
		UNK_0x9F528B1B53FBC5D9(iParam0->f_41[2], iParam0->f_28[1], UNK_0x4A089F2B762B8D33(iParam0->f_28[1], iVar4), vVar8, vVar5, 1, 1, 0, 0, 2, 1);
		UNK_0x272295383B6513AB(iParam0->f_41[2], 1);
		UNK_0x1E9649458B15960F(iParam0->f_28[1], true);
		UNK_0x4E885A246A9D983A(iParam0->f_28[1], 208, true);
		UNK_0x6DF7BF67E86AAE86(iParam0->f_28[1], joaat("PLAYER"));
	}
	iParam0->f_41[3] = UNK_0x4B72871A3BE7B474(909.3884f, 3643.652f, 31.699f, 1f, joaat("PROP_TABLE_03B_CHR"), 1, 0, 1);
	if (UNK_0xC844350D5D58C99A(iParam0->f_41[3]))
	{
		UNK_0x1E9649458B15960F(iParam0->f_41[3], true);
	}
	iParam0->f_41[4] = UNK_0x4B72871A3BE7B474(908.0437f, 3643.682f, 31.7073f, 1f, joaat("PROP_TABLE_03B_CHR"), 1, 0, 1);
	if (UNK_0xC844350D5D58C99A(iParam0->f_41[4]))
	{
		UNK_0x1E9649458B15960F(iParam0->f_41[4], true);
	}
	if (!UNK_0x69DF961355195C3C(iParam0->f_59))
	{
		iParam0->f_59 = UNK_0xE9744DB7B8CA6965(910.13f, 3643.74f, 31.69f, 0f, 0f, func_331(-0.26f), 2);
		if (func_128(iParam0->f_28[0]))
		{
			UNK_0x915804B434753CBD(iParam0->f_28[0], iParam0->f_59, bVar3, "redneck_idle_a", 8f, -8f, 513, 0, 1148846080, 0);
		}
		if (func_128(iParam0->f_28[1]))
		{
			UNK_0x915804B434753CBD(iParam0->f_28[1], iParam0->f_59, bVar3, "redneck_idle_b", 8f, -8f, 513, 0, 1148846080, 0);
		}
		UNK_0xC90224D9E95E5E3A(iParam0->f_59, true);
	}
	if (!func_276(&(iParam0->f_41[0]), joaat("WEAPON_ASSAULTRIFLE"), 907.52f, 3644.32f, 31.86f, -164.89f))
	{
	}
	UNK_0x71199B01895C6202(bVar11);
	UNK_0x71199B01895C6202(bVar12);
	StringCopy(&(iParam0->f_9), "TRVRAM_1", 24);
	iParam0->f_27 = 0;
}

bool func_350(int iParam0)
{
	if (!UNK_0x338D6FF72D84D90F())
	{
		return true;
	}
	if (UNK_0x991B1F0980C62628())
	{
		return true;
	}
	if (func_180(iParam0))
	{
		return true;
	}
	return false;
}

bool func_351(int iParam0)
{
	struct<27> Var0;
	bool bVar32;

	func_111(iParam0, &Var0);
	bVar32 = func_227();
	if (bVar32 == 145)
	{
		return true;
	}
	else if ((bVar32 != 1 && bVar32 != 0) && bVar32 != 2)
	{
		return true;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Var0.f_26, bVar32))
	{
		return true;
	}
	return false;
}

bool func_352(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
	int iVar0;

	if (*iParam0 == 1)
	{
		if (func_353((*iParam0)[0], vParam2, fParam5, iParam1))
		{
			return true;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_353((*iParam0)[iVar0], vParam2, fParam5, iParam1))
			{
				iVar0 = *iParam0;
				return true;
			}
			iVar0++;
		}
	}
	func_371("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return false;
}

bool func_353(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	int iVar0;
	struct<7> Var1;

	iVar0 = 0;
	func_111(iParam0, &Var1);
	if (func_354(Var1.f_6, vParam1, fParam4, 0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0 /*6*/], false))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_190(iParam0))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
		*iParam5 = iParam0;
		StringCopy(&(iParam5->f_1), Var1, 32);
		return true;
	}
	return false;
}

bool func_354(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_355(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_356(int iParam0, bool bParam1)
{
	func_272(iParam0);
	if (bParam1)
	{
		func_371(" SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_359(iParam0, 0, 0, 0);
	}
	func_358(&(iParam0->f_48));
	if (iLocal_287 != -1)
	{
		func_371("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_269(&iLocal_287);
	}
	if (iLocal_299 != 0)
	{
		if (*iParam0 == 55 || *iParam0 == 53)
		{
			UNK_0x2952D66A502EA873(iLocal_299, 0);
		}
	}
	if (UNK_0x8C74DE122769E1BF())
	{
		UNK_0x29D5132FBDCF2B1E(0);
	}
	if (bLocal_291)
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			UNK_0xA37A90C62806D848(1);
			bLocal_291 = false;
		}
	}
	func_357();
	func_371("SCRIPT TERMINATED");
	Global_96016 = 0;
	UNK_0x10FAF14A60A0DBE1();
}

void func_357()
{
	func_371("Running end routines.");
	Global_111356 = (Global_111356 - 1);
}

int func_358(var uParam0)
{
	if (func_152(uParam0))
	{
		if (UNK_0xB4AE0788C1587752(*uParam0))
		{
			UNK_0x8D17794CE3273D70(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

void func_359(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_367(iParam0, iParam1);
	func_363(iParam0, bParam2);
	func_360(iParam0, bParam3);
}

void func_360(int iParam0, bool bParam1)
{
	func_361(&(iParam0->f_41), bParam1);
}

void func_361(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_154(uParam0[iVar0]);
		}
		else
		{
			func_362(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_362(bool bParam0, bool bParam1)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (UNK_0xBDEB2DEEF1D23A18(*bParam0))
		{
			UNK_0x15AFB6CBDE990FB6(*bParam0, 1, true);
		}
		if (!bParam1)
		{
			UNK_0xEEEE2E5FA6F78DF0(bParam0);
		}
		else
		{
			UNK_0xAA2AE6161CB0D2DC(*bParam0);
		}
	}
}

void func_363(int iParam0, bool bParam1)
{
	func_364(&(iParam0->f_35), bParam1);
}

void func_364(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_366(uParam0[iVar0]);
		}
		else
		{
			func_365(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_365(bool bParam0)
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

void func_366(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!UNK_0xAF6690C489CC6203(*bParam0))
		{
			UNK_0x73270B3C9CC833FD(*bParam0, true, 0);
		}
		if (func_158(*bParam0))
		{
			if (UNK_0xAF6690C489CC6203(*bParam0) && UNK_0x9C77D2D0559097F0(*bParam0, 1))
			{
				if (func_128(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *bParam0, 0))
					{
						UNK_0x046C362CF15F1935(bParam0);
						return;
					}
				}
				UNK_0xA954465BA6FDEFE2(bParam0);
			}
		}
		else
		{
			if (func_128(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *bParam0, 0))
				{
					UNK_0x046C362CF15F1935(bParam0);
					return;
				}
			}
			UNK_0xA954465BA6FDEFE2(bParam0);
		}
	}
}

void func_367(int iParam0, int iParam1)
{
	func_368(&(iParam0->f_28), iParam1);
}

void func_368(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_370(uParam0[iVar0]);
		}
		else
		{
			func_369(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_369(bool bParam0, bool bParam1, int iParam2, int iParam3)
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

void func_370(bool bParam0)
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

void func_371(bool bParam0)
{
	if (!UNK_0xEA6BC48857E0AC4C(bParam0))
	{
	}
}

void func_372(var uParam0)
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_373()
{
	func_371("Running start routines.");
	Global_111356++;
}

