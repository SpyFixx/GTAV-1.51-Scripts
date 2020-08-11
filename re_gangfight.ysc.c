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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	bool bLocal_53 = false;
	bool bLocal_54 = false;
	bool bLocal_55 = false;
	bool bLocal_56 = false;
	bool bLocal_57 = false;
	bool bLocal_58 = false;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61[6] = { 0, 0, 0, 0, 0, 0 };
	bool bLocal_68 = false;
	int iLocal_69[6] = { 0, 0, 0, 0, 0, 0 };
	bool bLocal_76 = false;
	int iLocal_77[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_84 = 0;
	var uLocal_85 = 16;
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
	bool bLocal_250 = false;
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
	int iVar0;
	int iVar1;
	int iVar2;

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
	vLocal_50 = { ScriptParam_0.f_1[0 /*3*/] };
	if (UNK_0x2EBF608FFE6CA406(11))
	{
		func_146();
	}
	if (func_104(vLocal_50, -1, 0, 0, 0))
	{
		func_101(-1);
	}
	else
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_100();
		if (UNK_0x338D6FF72D84D90F())
		{
			if (iLocal_59 > UNK_0x1C0640BA9A7327B3())
			{
				UNK_0x9501364A300048C6();
			}
			if (!func_99())
			{
				if (!func_99())
				{
					if (func_98())
					{
						func_146();
					}
				}
				UNK_0x1A6DFFFEEC27BF4F("RE_CGF", 0);
				switch (iLocal_46)
				{
					case 0:
						if (func_86())
						{
							func_146();
						}
						if (func_85())
						{
							bLocal_53 = true;
							iLocal_46 = 1;
						}
						break;
					case 1:
						func_84();
						if (!func_83() || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
						{
							if ((!UNK_0xEB6A8945D1AC98A1(bLocal_68) && !UNK_0xEB6A8945D1AC98A1(iLocal_69[0])) && !UNK_0xEB6A8945D1AC98A1(iLocal_69[1]))
							{
								if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), 969.2191f, 3608.665f, 41.8758f, 100f, 80f, 20f, false, true, 0))
								{
									iLocal_60 = func_80(bLocal_68, 0, 145);
									UNK_0x2A065371C9D96655(iLocal_60, 9);
									iLocal_61[0] = func_80(iLocal_69[0], 1, 145);
									iLocal_61[1] = func_80(iLocal_69[1], 1, 145);
									UNK_0xF2D30B8ACAF12A39(iLocal_60, false);
									UNK_0xF2D30B8ACAF12A39(iLocal_61[0], false);
									UNK_0xF2D30B8ACAF12A39(iLocal_61[1], false);
									func_70(1);
								}
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < iLocal_69)
							{
								if (!UNK_0xEB6A8945D1AC98A1(iLocal_69[iVar0]))
								{
									UNK_0xF3268524E9BE6D6E(iLocal_69[iVar0], UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
								}
								iVar0++;
							}
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_68))
							{
								UNK_0xF3268524E9BE6D6E(bLocal_68, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
							}
							func_69();
						}
						break;
				}
			}
			else
			{
				UNK_0x51B096AAC60548C1(0f);
				UNK_0x34FABD75496259E4(UNK_0xD803B885F5E47A62());
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_68))
				{
					if (UNK_0xB87D13D0C064E9D1(bLocal_68, UNK_0x16F2683693E537C9(), 1))
					{
						UNK_0xF3268524E9BE6D6E(bLocal_68, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
						func_69();
					}
					if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_68, 150f, 150f, 50f, 0, 1, 0))
					{
						if (iLocal_48 >= 5 && iLocal_47 == 2)
						{
						}
						else
						{
							func_84();
							func_68();
						}
						switch (iLocal_47)
						{
							case 0:
								func_67();
								if (func_83())
								{
									bLocal_55 = true;
									iLocal_48 = 4;
								}
								break;
							case 1:
								if (iLocal_48 < 7 && !UNK_0xEB6A8945D1AC98A1(bLocal_68))
								{
									if (UNK_0x7069CC4DE1EA3FAA(UNK_0x16F2683693E537C9(), bLocal_68, 90f))
									{
										if (UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bLocal_68) || UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bLocal_68))
										{
											func_64();
										}
									}
								}
								func_59();
								break;
							case 2:
								func_9();
								break;
							case 3:
								func_1();
								break;
						}
					}
					else
					{
						func_69();
					}
				}
				else
				{
					if (UNK_0xE4EDC4B0E92C078B(iLocal_60))
					{
						UNK_0x142CC44DB769B57E(&iLocal_60);
					}
					if (((!UNK_0xEB6A8945D1AC98A1(iLocal_69[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_69[1])) && !UNK_0x437347B10A200C4B(iLocal_77[0], 0)) && !UNK_0x437347B10A200C4B(iLocal_77[1], 0))
					{
						func_69();
					}
					iVar1 = 0;
					iVar2 = 0;
					while (iVar2 < iLocal_69)
					{
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_69[iVar2]))
						{
							UNK_0x6C3AE6E278DB3D0E(iLocal_69[iVar2], UNK_0x16F2683693E537C9(), 0, 16);
							UNK_0xFADC0A217229F6B5(iLocal_69[iVar2], true);
							if (!UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_69[iVar2], 150f, 150f, 50f, 0, 1, 0))
							{
								func_69();
							}
							iVar1 = 1;
						}
						else if (UNK_0xE4EDC4B0E92C078B(iLocal_61[iVar2]))
						{
							UNK_0x142CC44DB769B57E(&(iLocal_61[iVar2]));
						}
						iVar2++;
					}
					if (iVar1 == 0)
					{
						func_69();
					}
				}
			}
		}
		else
		{
			func_146();
		}
	}
}

void func_1()
{
	int iVar0;

	if (bLocal_53 && !bLocal_58)
	{
		if (!func_6("RECGF_SHOOT"))
		{
			func_4();
		}
		if (UNK_0xE4EDC4B0E92C078B(iLocal_60))
		{
			UNK_0x142CC44DB769B57E(&iLocal_60);
		}
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_68))
		{
			UNK_0x7980D72D61BEF4D5(bLocal_68, false);
			UNK_0x11AD11297DC58CC7(bLocal_68, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_69)
		{
			if (UNK_0xE4EDC4B0E92C078B(iLocal_61[iVar0]))
			{
				UNK_0x142CC44DB769B57E(&(iLocal_61[iVar0]));
			}
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_69[iVar0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (iVar0 < 2)
				{
					if (!UNK_0x437347B10A200C4B(iLocal_77[iVar0], 0))
					{
						UNK_0x89258193691A7600(iLocal_69[iVar0], iLocal_77[iVar0], UNK_0x16F2683693E537C9(), 8, 20f, 786469, 150f, 10f, 1);
						UNK_0xFADC0A217229F6B5(iLocal_69[iVar0], true);
					}
					else
					{
						UNK_0xF3268524E9BE6D6E(iLocal_69[iVar0], UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
					}
				}
				else
				{
					UNK_0xF3268524E9BE6D6E(iLocal_69[iVar0], UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
				}
				UNK_0x11AD11297DC58CC7(iLocal_69[iVar0], false);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_77)
		{
			if (!UNK_0x437347B10A200C4B(iLocal_77[iVar0], 0))
			{
				UNK_0x046C362CF15F1935(&(iLocal_77[iVar0]));
				if (UNK_0x562F77A7F33D2E46("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		UNK_0x8910D3D58E0132B8("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		UNK_0x51B096AAC60548C1(1f);
		UNK_0x842F1AEB2FCC00B7(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 1);
		UNK_0xB547E3FFEB27073E();
		UNK_0x15EA7F4313456B1D(3, true);
		UNK_0x15EA7F4313456B1D(5, true);
		func_3(&uLocal_85, 1);
		func_3(&uLocal_85, 2);
		func_3(&uLocal_85, 3);
		func_3(&uLocal_85, 4);
		bLocal_58 = true;
	}
	if (UNK_0x0EB28750412C3A5A(func_2(UNK_0xD803B885F5E47A62()), vLocal_50, 1) > 50f)
	{
		func_146();
	}
}

Vector3 func_2(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

void func_3(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()
{
	Global_19671 = 0;
	func_5();
}

void func_5()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

bool func_6(bool bParam0)
{
	var uVar0;

	if (func_8())
	{
		MemCopy(&uVar0, {func_7()}, 4);
		if (UNK_0x7F8A39872A07D2CE(bParam0, &uVar0))
		{
			return true;
		}
	}
	return false;
}

struct<6> func_7()
{
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

bool func_8()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_9()
{
	int iVar0;
	int iVar1;

	switch (iLocal_48)
	{
		case 0:
			if (SYSTEM::TIMERB() > 2000)
			{
				iVar0 = 0;
				while (iVar0 < iLocal_69)
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_69[iVar0]) && !UNK_0x437347B10A200C4B(iLocal_77[iVar0], 0))
					{
						if (!UNK_0xE4EDC4B0E92C078B(iLocal_61[iVar0]))
						{
							iLocal_61[iVar0] = func_80(iLocal_69[iVar0], 1, 145);
							if (UNK_0x405E212DDE472467(iLocal_69[iVar0], 0))
							{
								if (!bLocal_55)
								{
									UNK_0xFFDDE8CC59EB6D40(iLocal_69[iVar0], UNK_0x16F2683693E537C9(), false, 0f, 0f, 0f, 150f, 100, 1, -753768974);
								}
								else
								{
									UNK_0xDD353D0E9C789D0E(&iLocal_84);
									UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
									UNK_0x75ABDC5F81978924(iLocal_84);
									UNK_0x78ADC381772E3D54(iLocal_69[iVar0], iLocal_84);
									UNK_0xF82EA857DA10E0CD(&iLocal_84);
									UNK_0xFADC0A217229F6B5(iLocal_69[iVar0], true);
								}
							}
						}
					}
					iVar0++;
				}
				if (!func_8())
				{
					if (func_42(&uLocal_85, "RECGFAU", "RECGF_BIKERS", 4, 0, 0, 0))
					{
						iLocal_48++;
					}
				}
			}
			break;
		case 1:
			iVar1 = 0;
			while (iVar1 < iLocal_69)
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_69[iVar1]))
				{
					if (UNK_0x5A91F08DF773C39D(iLocal_69[iVar1], 904.3153f, 3631.684f, 31.574f, 7f, 7f, 7f, false, true, 0))
					{
						if (!UNK_0x437347B10A200C4B(iLocal_77[iVar1], 0))
						{
							UNK_0x06FF977AA95DCCE3(iLocal_77[iVar1], 0);
						}
						if (UNK_0x405E212DDE472467(iLocal_69[iVar1], 0))
						{
							UNK_0xDD353D0E9C789D0E(&iLocal_84);
							UNK_0x75CDA8644CD3B5F5(false, 0, 0);
							UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
							UNK_0x75ABDC5F81978924(iLocal_84);
							UNK_0x78ADC381772E3D54(iLocal_69[iVar1], iLocal_84);
							UNK_0xF82EA857DA10E0CD(&iLocal_84);
							UNK_0xFADC0A217229F6B5(iLocal_69[iVar1], true);
						}
					}
					if (!UNK_0x405E212DDE472467(iLocal_69[iVar1], 0))
					{
						UNK_0x6C3AE6E278DB3D0E(iLocal_69[iVar1], UNK_0x16F2683693E537C9(), 0, 16);
						UNK_0xFADC0A217229F6B5(iLocal_69[iVar1], true);
					}
					if (!UNK_0x437347B10A200C4B(iLocal_77[iVar1], 0))
					{
						if (UNK_0xE0058AC511E68F8A(iLocal_77[iVar1]))
						{
						}
					}
				}
				if (UNK_0xEB6A8945D1AC98A1(iLocal_69[iVar1]))
				{
					if (UNK_0xE4EDC4B0E92C078B(iLocal_61[iVar1]))
					{
						UNK_0x142CC44DB769B57E(&(iLocal_61[iVar1]));
					}
				}
				iVar1++;
			}
			if (((UNK_0xEB6A8945D1AC98A1(iLocal_69[2]) && UNK_0xEB6A8945D1AC98A1(iLocal_69[3])) && UNK_0xEB6A8945D1AC98A1(iLocal_69[4])) && UNK_0xEB6A8945D1AC98A1(iLocal_69[5]))
			{
				UNK_0x8910D3D58E0132B8("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
				iLocal_48++;
			}
			break;
		case 2:
			func_41(1500);
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_68))
			{
				UNK_0xA3BF0AA5A2608191(bLocal_68);
				UNK_0xDD353D0E9C789D0E(&iLocal_84);
				UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2056, 2);
				UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), -1);
				UNK_0x75ABDC5F81978924(iLocal_84);
				UNK_0x78ADC381772E3D54(bLocal_68, iLocal_84);
				UNK_0xF82EA857DA10E0CD(&iLocal_84);
			}
			if (!UNK_0x437347B10A200C4B(bLocal_76, 0))
			{
				UNK_0xE910A68AA670B4AA(bLocal_76);
				if (!UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_68, 5f, 5f, 5f, 0, 1, 0))
				{
					func_42(&uLocal_85, "RECGFAU", "RECGF_REWARD", 4, 0, 0, 0);
				}
			}
			iLocal_48++;
			break;
		case 3:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_68))
			{
				if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_68, 6f, 6f, 6f, 0, 1, 0))
				{
					if (UNK_0x7069CC4DE1EA3FAA(bLocal_68, UNK_0x16F2683693E537C9(), 60f))
					{
						if (!func_8())
						{
							if (func_42(&uLocal_85, "RECGFAU", "RECGF_END", 4, 0, 0, 0))
							{
								iLocal_48++;
							}
						}
					}
				}
			}
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_68))
			{
				if (!UNK_0x12DE711B1C681E9E(bLocal_68, UNK_0x16F2683693E537C9(), 120f, 120f, 120f, 0, 1, 0))
				{
					func_10();
				}
			}
			if (!UNK_0x437347B10A200C4B(bLocal_76, 0))
			{
				if (UNK_0xB87D13D0C064E9D1(bLocal_76, UNK_0x16F2683693E537C9(), 0))
				{
					func_69();
				}
			}
			break;
		case 4:
			iLocal_48++;
			break;
		case 5:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_68) && !UNK_0x437347B10A200C4B(bLocal_76, 0))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_84);
				UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 1500);
				UNK_0x5B1D360B9C6F0A09(false, bLocal_76, -1, -1, 2f, 8, 0);
				UNK_0x78A77CDD64392938(false, 2000);
				UNK_0xC6EB89C59F2AF6B8(false, "veh@drivebystd_ds_grenades", "drop_grenade", 2f, -2f, -1, 0, false, 0, 0, 0);
				UNK_0xE072601B4380E9DF(false, bLocal_76, 10f, 786603);
				UNK_0x75ABDC5F81978924(iLocal_84);
				UNK_0x78ADC381772E3D54(bLocal_68, iLocal_84);
				UNK_0xF82EA857DA10E0CD(&iLocal_84);
				UNK_0xFADC0A217229F6B5(bLocal_68, true);
				UNK_0xDC2C59BD0989562B(bLocal_76, 1);
				iLocal_48++;
			}
			break;
		case 6:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_68))
			{
				if (UNK_0xB4ECF989E2C1DAC8(bLocal_68, "veh@drivebystd_ds_grenades", "drop_grenade", 3))
				{
					if (UNK_0x8CA9406E01C7EE58(bLocal_68, "veh@drivebystd_ds_grenades", "drop_grenade") > 0.436f && UNK_0x405E212DDE472467(bLocal_68, 0))
					{
						UNK_0xE3971CAD01180CD0(UNK_0x68E4ADDDDCD7BDDE(UNK_0x6937EA2286828455(bLocal_68, 0), -1f, 0f, 0f), 1000, 1, 0);
						iLocal_48++;
					}
				}
			}
			break;
		case 7:
			if (!func_8())
			{
				func_42(&uLocal_85, "RECGFAU", "RECGF_END2", 4, 0, 0, 0);
				func_10();
			}
			break;
	}
}

void func_10()
{
	while (func_8())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_40())
	{
		SYSTEM::WAIT(0);
	}
	func_14(-1, 0);
	func_11();
	iLocal_47 = 3;
}

void func_11()
{
	func_12();
}

int func_12()
{
	if (func_13(0))
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

bool func_13(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_14(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_38();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_37(iParam0))
	{
		func_36(iParam0, bParam1);
		if (!func_35(51))
		{
			func_25("RE_REWARD", 1, 0, 4000, 10000, func_28(), 0, 138, 0);
			func_24(51);
		}
		if (func_23(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_22(iParam0, bParam1) != 322)
		{
			func_16(func_22(iParam0, bParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_111626 = bParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_15(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_15(7);
			}
			else
			{
				func_15(1);
			}
		}
	}
}

void func_15(int iParam0)
{
	Global_111624 = iParam0;
}

void func_16(int iParam0, var uParam1, var uParam2)
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
		func_20((891 + iParam0), 1, -1, 1);
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
		func_17();
	}
}

void func_17()
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
		func_19(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_18() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_12();
				}
			}
		}
	}
}

int func_18()
{
	return Global_30768;
}

int func_19(int iParam0, bool bParam1)
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

int func_20(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_21();
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

int func_21()
{
	return Global_1312745;
}

int func_22(int iParam0, bool bParam1)
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

bool func_23(int iParam0)
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

void func_24(int iParam0)
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

void func_25(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_26(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_26(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_27();
	}
}

void func_27()
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

int func_28()
{
	func_29();
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

void func_29()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_33(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_32(UNK_0x16F2683693E537C9());
			if (func_31(iVar0) && (!func_30(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_31(Global_111638.f_2358.f_539.f_4321))
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

bool func_30(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)
{
	if (func_31(iParam0))
	{
		return func_34(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_34(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_35(int iParam0)
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

void func_36(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), bParam1);
}

int func_37(int iParam0)
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

int func_38()
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, UNK_0xBB0808A181D4745C(), 64);
	iVar16 = func_39(Var0);
	return iVar16;
}

int func_39(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

bool func_40()
{
	return true;
}

void func_41(int iParam0)
{
	int iVar0;

	iVar0 = (UNK_0x1C0640BA9A7327B3() + iParam0);
	while (UNK_0x1C0640BA9A7327B3() <= iVar0)
	{
		SYSTEM::WAIT(0);
		if (iLocal_59 > UNK_0x1C0640BA9A7327B3())
		{
			UNK_0x9501364A300048C6();
		}
	}
}

int func_42(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_58(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_43(sParam2, iParam3, 0);
}

int func_43(char* sParam0, int iParam1, bool bParam2)
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
					func_57();
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
		if (func_56(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_55();
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
				func_53();
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
				if (func_52())
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
			if (func_51())
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
			func_50();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_49();
		func_44();
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
		func_57();
	}
	return 0;
}

void func_44()
{
	if (!func_45())
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

bool func_45()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_48())
	{
		return false;
	}
	if (func_46(UNK_0xD803B885F5E47A62()))
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

bool func_46(int iParam0)
{
	return func_47(iParam0, 20);
}

bool func_47(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_48()
{
	return -1;
}

void func_49()
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

void func_50()
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

bool func_51()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_52()
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

void func_53()
{
	if (func_30(14))
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
		Global_19486 = func_54();
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

int func_54()
{
	func_29();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_55()
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

bool func_56(bool bParam0, int iParam1)
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

void func_57()
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

void func_58(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_59()
{
	int iVar0;

	switch (iLocal_48)
	{
		case 0:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_68))
			{
				iLocal_48++;
			}
			break;
		case 1:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_68))
			{
				if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_68, 20f, 20f, 20f, 0, 1, 0))
				{
					UNK_0x0C8C0C840C2D1AD2(bLocal_68, UNK_0x16F2683693E537C9(), -1, 2060, 2);
					func_42(&uLocal_85, "RECGFAU", "RECGF_THX", 4, 0, 0, 0);
					iLocal_48++;
				}
			}
			break;
		case 2:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_68) && !UNK_0x437347B10A200C4B(bLocal_76, 0))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_84);
				UNK_0x96167B03C5A77156(false, 916.5764f, 3602.146f, 31.9262f, 1f, 40000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
				UNK_0x75ABDC5F81978924(iLocal_84);
				UNK_0x78ADC381772E3D54(bLocal_68, iLocal_84);
				UNK_0xF82EA857DA10E0CD(&iLocal_84);
				iLocal_48++;
			}
			break;
		case 3:
			if (!func_8())
			{
				if (func_54() == 0)
				{
					func_42(&uLocal_85, "RECGFAU", "RECGF_JABM", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_42(&uLocal_85, "RECGFAU", "RECGF_JABF", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_42(&uLocal_85, "RECGFAU", "RECGF_JABBER", 4, 0, 0, 0);
				}
				iLocal_48++;
			}
			break;
		case 4:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_68))
			{
				if (UNK_0x5A91F08DF773C39D(bLocal_68, 916.5764f, 3602.146f, 31.9262f, 3.3f, 3.3f, 3.3f, false, true, 0))
				{
					if (!UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_68, 8f, 8f, 8f, 0, 1, 0))
					{
						if (!func_8())
						{
							if (func_42(&uLocal_85, "RECGFAU", "RECGF_STASH", 4, 0, 0, 0))
							{
								UNK_0xF96A174EE26D7588(bLocal_68, UNK_0x16F2683693E537C9(), -1);
								if (!UNK_0x437347B10A200C4B(bLocal_76, 0))
								{
									UNK_0xE910A68AA670B4AA(bLocal_76);
								}
								iLocal_48++;
							}
						}
					}
					else
					{
						if (!UNK_0x437347B10A200C4B(bLocal_76, 0))
						{
							UNK_0xE910A68AA670B4AA(bLocal_76);
						}
						iLocal_48 = 6;
					}
				}
			}
			break;
		case 5:
			if (!func_8())
			{
				if (func_54() == 0)
				{
					func_42(&uLocal_85, "RECGFAU", "RECGF_STASHM", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_42(&uLocal_85, "RECGFAU", "RECGF_STASHF", 4, 0, 0, 0);
				}
				iLocal_48++;
			}
			break;
		case 6:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_68))
			{
				if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_68, 8f, 8f, 8f, 0, 1, 0))
				{
					if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) || UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
					{
						if (func_62())
						{
							func_41(1000);
							if ((!UNK_0xEB6A8945D1AC98A1(bLocal_68) && !UNK_0xEB6A8945D1AC98A1(iLocal_69[2])) && !UNK_0x437347B10A200C4B(bLocal_76, 0))
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_84);
								UNK_0x7B5CD34C8882F120(false, bLocal_76, -1, -1, 1f);
								UNK_0x0C8C0C840C2D1AD2(false, iLocal_69[2], 2000, 0, 2);
								UNK_0xF96A174EE26D7588(false, iLocal_69[2], 0);
								UNK_0x75ABDC5F81978924(iLocal_84);
								UNK_0x78ADC381772E3D54(bLocal_68, iLocal_84);
								UNK_0xF82EA857DA10E0CD(&iLocal_84);
								func_41(2000);
								func_4();
								func_41(0);
								func_42(&uLocal_85, "RECGFAU", "RECGF_HIDE", 4, 0, 0, 0);
								if ((!UNK_0xEB6A8945D1AC98A1(bLocal_68) && !UNK_0x437347B10A200C4B(bLocal_76, 0)) && UNK_0x405E212DDE472467(bLocal_68, 0))
								{
									iLocal_48++;
								}
								else
								{
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_68) && !UNK_0xEB6A8945D1AC98A1(iLocal_69[2]))
									{
										UNK_0xDD353D0E9C789D0E(&iLocal_84);
										UNK_0x8BE3D040D15AEA1D(false, -1);
										UNK_0x75ABDC5F81978924(iLocal_84);
										UNK_0x78ADC381772E3D54(bLocal_68, iLocal_84);
										UNK_0xF82EA857DA10E0CD(&iLocal_84);
									}
									bLocal_55 = false;
									SYSTEM::SETTIMERB(0);
									iLocal_48++;
								}
							}
						}
					}
				}
			}
			if (!UNK_0x437347B10A200C4B(bLocal_76, 0))
			{
				if (UNK_0xB87D13D0C064E9D1(bLocal_76, UNK_0x16F2683693E537C9(), 0))
				{
					func_69();
				}
			}
			break;
		case 7:
			if ((((!UNK_0xEB6A8945D1AC98A1(bLocal_68) && !UNK_0x437347B10A200C4B(bLocal_76, 0)) && !UNK_0xC42A92762C58E1B9(bLocal_68, bLocal_76, 0)) && !UNK_0xC379FAA7E9DFE7A4(bLocal_68, 0)) && !UNK_0xBC695A145F39D2EF(bLocal_68))
			{
			}
			iVar0 = 0;
			while (iVar0 < iLocal_69)
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_69[iVar0]) && !UNK_0x437347B10A200C4B(iLocal_77[iVar0], 0))
				{
					if (((((UNK_0x4A42C22237F5FF76(UNK_0x16F2683693E537C9(), (916.3351f - 100f), (3602.048f - 100f), (31.9209f - 100f), (916.3351f + 100f), (3602.048f + 100f), (31.9209f + 100f), 0, 1) || UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_69[iVar0], 5f, 5f, 5f, 0, 1, 0)) || UNK_0xB87D13D0C064E9D1(iLocal_69[iVar0], UNK_0x16F2683693E537C9(), 1)) || UNK_0xB87D13D0C064E9D1(iLocal_77[iVar0], UNK_0x16F2683693E537C9(), 1)) || UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), iLocal_69[iVar0])) || UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), iLocal_77[iVar0]))
					{
						bLocal_55 = true;
						SYSTEM::SETTIMERB(2000);
						iLocal_48 = 0;
						iLocal_47 = 2;
					}
				}
				iVar0++;
			}
			if (((UNK_0xEB6A8945D1AC98A1(iLocal_69[2]) && UNK_0xEB6A8945D1AC98A1(iLocal_69[3])) && UNK_0xEB6A8945D1AC98A1(iLocal_69[4])) && UNK_0xEB6A8945D1AC98A1(iLocal_69[5]))
			{
				iLocal_48 = 2;
				iLocal_47 = 2;
			}
			if (UNK_0x5A91F08DF773C39D(iLocal_69[2], 970.3641f, 3629.886f, 31.3694f, 5f, 5f, 5f, false, true, 0) || SYSTEM::TIMERB() > 13000)
			{
				func_41(2000);
				iVar0 = 0;
				while (iVar0 < iLocal_69)
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_69[iVar0]))
					{
						if (!UNK_0x437347B10A200C4B(iLocal_77[iVar0], 0))
						{
							if (UNK_0xC42A92762C58E1B9(iLocal_69[iVar0], iLocal_77[iVar0], 0))
							{
								UNK_0x89258193691A7600(iLocal_69[iVar0], iLocal_77[iVar0], UNK_0x16F2683693E537C9(), (iVar0 - 2) + 10, 60f, 786475, 5f, 10f, 1);
							}
						}
					}
					iVar0++;
				}
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_68))
				{
					if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_68, 15f, 15f, 15f, 0, 1, 0))
					{
						func_60();
						func_41(0);
						func_42(&uLocal_85, "RECGFAU", "RECGF_GANG", 4, 0, 0, 0);
					}
				}
				SYSTEM::SETTIMERB(0);
				iLocal_48 = 0;
				iLocal_47 = 2;
			}
			break;
	}
}

void func_60()
{
	Global_19671 = 0;
	func_61();
}

void func_61()
{
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x8BD0DC8EEFDC56D8();
		Global_21816 = 0;
		UNK_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

bool func_62()
{
	int iVar0;

	if (((((((!UNK_0xC844350D5D58C99A(iLocal_77[2]) && !UNK_0xC844350D5D58C99A(iLocal_77[3])) && !UNK_0xC844350D5D58C99A(iLocal_77[4])) && !UNK_0xC844350D5D58C99A(iLocal_77[5])) && !UNK_0xC844350D5D58C99A(iLocal_69[2])) && !UNK_0xC844350D5D58C99A(iLocal_69[3])) && !UNK_0xC844350D5D58C99A(iLocal_69[4])) && !UNK_0xC844350D5D58C99A(iLocal_69[5]))
	{
		UNK_0x523BCC9DC80CD82F(joaat("HEXER"));
		UNK_0x523BCC9DC80CD82F(joaat("G_M_Y_LOST_01"));
		UNK_0x523BCC9DC80CD82F(joaat("G_M_Y_LOST_02"));
		UNK_0x8BC9595FD2792B5D("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		if (UNK_0xB87F6CF6E5628C67(joaat("HEXER")))
		{
			iLocal_77[2] = UNK_0x122AAB0B1D6F55AD(joaat("HEXER"), 863.4697f, 3633.5f, 31.9874f, 290.5797f, true, true, false);
			iLocal_77[3] = UNK_0x122AAB0B1D6F55AD(joaat("HEXER"), 866.4073f, 3636.039f, 31.9514f, 270.3649f, true, true, false);
			iLocal_77[4] = UNK_0x122AAB0B1D6F55AD(joaat("HEXER"), 866.3153f, 3631.587f, 31.9545f, 276.6327f, true, true, false);
			iLocal_77[5] = UNK_0x122AAB0B1D6F55AD(joaat("HEXER"), 868.5937f, 3633.523f, 31.9622f, 267.0991f, true, true, false);
			UNK_0x71199B01895C6202(joaat("HEXER"));
			UNK_0x5C73CD40F396DC05(iLocal_77[2], 3);
			UNK_0x5C73CD40F396DC05(iLocal_77[4], 3);
			iLocal_59 = UNK_0x1C0640BA9A7327B3() + 1500;
		}
		if ((UNK_0xB87F6CF6E5628C67(joaat("G_M_Y_LOST_01")) && UNK_0xB87F6CF6E5628C67(joaat("G_M_Y_LOST_02"))) && UNK_0x562F77A7F33D2E46("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
		{
			iLocal_69[2] = UNK_0x852A19533F896693(iLocal_77[2], 22, joaat("G_M_Y_LOST_01"), -1, 1, true);
			iLocal_69[3] = UNK_0x852A19533F896693(iLocal_77[3], 22, joaat("G_M_Y_LOST_02"), -1, 1, true);
			iLocal_69[4] = UNK_0x852A19533F896693(iLocal_77[4], 22, joaat("G_M_Y_LOST_01"), -1, 1, true);
			iLocal_69[5] = UNK_0x852A19533F896693(iLocal_77[5], 22, joaat("G_M_Y_LOST_02"), -1, 1, true);
			func_63(&uLocal_85, 4, iLocal_69[4], "RECGFLost3", 0, 1);
			iLocal_59 = UNK_0x1C0640BA9A7327B3() + 1500;
			iVar0 = 0;
			while (iVar0 < iLocal_69)
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_69[iVar0]) && !UNK_0x437347B10A200C4B(iLocal_77[iVar0], 0))
				{
					UNK_0x2E1E5367A885F9B7(iLocal_77[iVar0], "RE_COUNTRYSIDE_GANG_BIKES", 0);
					UNK_0x4E885A246A9D983A(iLocal_69[iVar0], 137, true);
					UNK_0xC743BD39A24D0583(iLocal_69[iVar0], 0);
					UNK_0x3CC33E4E9CE523F4(iLocal_69[iVar0], 2);
					UNK_0xAFF39FB306F8E232(iLocal_69[iVar0], 50, true);
					UNK_0x083F03A847B640E9(iLocal_69[iVar0], 2);
					UNK_0x23CBFFA16CA5CF45(iLocal_69[iVar0], 50f, 20);
					UNK_0xB35CCEC0D4946813(iLocal_69[iVar0], 1);
					UNK_0x298903DD96203C2C(iLocal_69[iVar0], 13);
					UNK_0x967762C930C0C5FD(iLocal_69[iVar0], 100f);
					UNK_0x9FA191B317572861(iLocal_69[iVar0], 100f);
					UNK_0x6DF7BF67E86AAE86(iLocal_69[iVar0], bLocal_250);
					UNK_0x11AD11297DC58CC7(iLocal_69[iVar0], true);
					UNK_0x545E1397F38D9D5A(iLocal_69[iVar0], 3);
					UNK_0xCC095276B3DD380E(iLocal_69[iVar0], 0);
					UNK_0x25C5402CC10F76CD(iLocal_69[iVar0], true);
					UNK_0xE2F0767314863BD8(iLocal_69[iVar0], 1, 1000f);
					if (iVar0 > 1 && iVar0 < 5)
					{
						UNK_0x262EF6C6306BEA6C(iLocal_69[iVar0], joaat("WEAPON_PISTOL"), -1, true, true);
					}
					else
					{
						UNK_0x262EF6C6306BEA6C(iLocal_69[iVar0], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, true, true);
					}
					UNK_0xDD353D0E9C789D0E(&iLocal_84);
					UNK_0xE9362E4D600DD12A(false, iLocal_77[2], 966.7098f, 3633.926f, 31.3974f, 10f, 0, joaat("HEXER"), 786725, 4f, 100f);
					UNK_0xDBE4EC9C88839074(false, vLocal_50, 5000, 0, 2);
					UNK_0x75ABDC5F81978924(iLocal_84);
					UNK_0x78ADC381772E3D54(iLocal_69[2], iLocal_84);
					UNK_0xF82EA857DA10E0CD(&iLocal_84);
					UNK_0xDD353D0E9C789D0E(&iLocal_84);
					UNK_0xE9362E4D600DD12A(false, iLocal_77[3], 970.6208f, 3636.743f, 31.3666f, 10f, 0, joaat("HEXER"), 786725, 4f, 100f);
					UNK_0xDBE4EC9C88839074(false, vLocal_50, 5000, 0, 2);
					UNK_0x75ABDC5F81978924(iLocal_84);
					UNK_0x78ADC381772E3D54(iLocal_69[3], iLocal_84);
					UNK_0xF82EA857DA10E0CD(&iLocal_84);
					UNK_0xFADC0A217229F6B5(iLocal_69[3], true);
					UNK_0xDD353D0E9C789D0E(&iLocal_84);
					UNK_0xE9362E4D600DD12A(false, iLocal_77[4], 971.023f, 3631.225f, 31.3807f, 10f, 0, joaat("HEXER"), 786725, 4f, 100f);
					UNK_0xDBE4EC9C88839074(false, vLocal_50, 5000, 0, 2);
					UNK_0x75ABDC5F81978924(iLocal_84);
					UNK_0x78ADC381772E3D54(iLocal_69[4], iLocal_84);
					UNK_0xF82EA857DA10E0CD(&iLocal_84);
					UNK_0xDD353D0E9C789D0E(&iLocal_84);
					UNK_0xE9362E4D600DD12A(false, iLocal_77[5], 974.8073f, 3633.771f, 31.3818f, 10f, 0, joaat("HEXER"), 786725, 4f, 100f);
					UNK_0xDBE4EC9C88839074(false, vLocal_50, 5000, 0, 2);
					UNK_0x75ABDC5F81978924(iLocal_84);
					UNK_0x78ADC381772E3D54(iLocal_69[5], iLocal_84);
					UNK_0xF82EA857DA10E0CD(&iLocal_84);
				}
				iVar0++;
			}
			UNK_0x71199B01895C6202(joaat("HEXER"));
			UNK_0x71199B01895C6202(joaat("G_M_Y_LOST_01"));
			UNK_0x71199B01895C6202(joaat("G_M_Y_LOST_02"));
			return true;
		}
	}
	return false;
}

void func_63(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_64()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_68))
	{
		UNK_0xF3268524E9BE6D6E(bLocal_68, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
		UNK_0xFADC0A217229F6B5(bLocal_68, true);
		if (!UNK_0x437347B10A200C4B(iLocal_69[0], 0) && !UNK_0x437347B10A200C4B(iLocal_69[1], 0))
		{
			UNK_0xD458AC1C1D29C3B4(bLocal_68, 101, false);
			UNK_0x7980D72D61BEF4D5(bLocal_68, false);
			UNK_0x2C4A1A0F54A166E8(iLocal_69[0], bLocal_68, 1000, 0);
			UNK_0x2C4A1A0F54A166E8(iLocal_69[1], bLocal_68, 1000, 0);
		}
		else
		{
			func_4();
			func_41(0);
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_68))
			{
				func_65(bLocal_68, "GENERIC_FRIGHTENED_HIGH", 24);
			}
		}
		func_41(1000);
		func_69();
	}
}

void func_65(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_66(iParam2), 1);
}

int func_66(int iParam0)
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

void func_67()
{
	int iVar0;

	switch (iLocal_48)
	{
		case 0:
			if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_68, 45f, 45f, 20f, 0, 1, 0))
			{
				if (!func_8())
				{
					if (func_54() == 0)
					{
						func_42(&uLocal_85, "RECGFAU", "RECGF_COMM", 4, 0, 0, 0);
					}
					else if (func_54() == 1)
					{
						func_42(&uLocal_85, "RECGFAU", "RECGF_COMF", 4, 0, 0, 0);
					}
					else if (func_54() == 2)
					{
						func_42(&uLocal_85, "RECGFAU", "RECGF_COMT", 4, 0, 0, 0);
					}
					iLocal_48++;
				}
			}
			break;
		case 1:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_68))
			{
				if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_68, 40f, 40f, 20f, 0, 1, 0))
				{
					if (func_42(&uLocal_85, "RECGFAU", "RECGF_HELP", 4, 0, 0, 0))
					{
						iLocal_48++;
					}
				}
			}
			break;
		case 2:
			if (!func_8())
			{
				func_42(&uLocal_85, "RECGFAU", "RECGF_SHUTUP", 4, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_48++;
			}
			break;
		case 3:
			if ((!UNK_0xEB6A8945D1AC98A1(bLocal_68) && !UNK_0xEB6A8945D1AC98A1(iLocal_69[0])) && !UNK_0xEB6A8945D1AC98A1(iLocal_69[1]))
			{
				if ((SYSTEM::TIMERA() > 5000 && !bLocal_56) && !func_8())
				{
					func_42(&uLocal_85, "RECGFAU", "RECGF_PAYUP", 4, 0, 0, 0);
					bLocal_56 = true;
				}
				if (SYSTEM::TIMERA() < 28000)
				{
					if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_68, 12f, 12f, 2.5f, 0, 1, 0))
					{
						if (((UNK_0xE115347EA59F7B86(iLocal_69[0], UNK_0x16F2683693E537C9()) || UNK_0xE115347EA59F7B86(iLocal_69[1], UNK_0x16F2683693E537C9())) || UNK_0x6AB6A474D29FA7D8(iLocal_69[0], UNK_0x16F2683693E537C9())) || UNK_0x6AB6A474D29FA7D8(iLocal_69[1], UNK_0x16F2683693E537C9()))
						{
							UNK_0x0C8C0C840C2D1AD2(iLocal_69[0], UNK_0x16F2683693E537C9(), 4000, 2056, 4);
							UNK_0x0C8C0C840C2D1AD2(iLocal_69[1], UNK_0x16F2683693E537C9(), 4000, 2056, 4);
							if (!bLocal_57)
							{
								func_4();
								func_41(0);
								if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
								{
									func_42(&uLocal_85, "RECGFAU", "RECGF_GETLOS", 4, 0, 0, 0);
								}
								else
								{
									func_42(&uLocal_85, "RECGFAU", "RECGF_BEGONE", 4, 0, 0, 0);
								}
								bLocal_57 = true;
							}
						}
					}
					else if (!UNK_0xB4ECF989E2C1DAC8(iLocal_69[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 3))
					{
						if (!UNK_0x7069CC4DE1EA3FAA(iLocal_69[0], bLocal_68, 10f))
						{
							UNK_0x9BE7E7B6B488CC55(iLocal_69[0], bLocal_68, -1, 0);
						}
					}
				}
				else if (!UNK_0x437347B10A200C4B(iLocal_77[0], 0) && !UNK_0x437347B10A200C4B(iLocal_77[1], 0))
				{
					func_4();
					func_41(0);
					func_42(&uLocal_85, "RECGFAU", "RECGF_SHOOT", 4, 0, 0, 0);
					func_41(2000);
					func_64();
				}
			}
			break;
		case 4:
			iVar0 = 0;
			while (iVar0 < iLocal_69)
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_69[iVar0]))
				{
					UNK_0x9DD8618CA5BF832D(iLocal_69[iVar0], 156, true);
					UNK_0x6C3AE6E278DB3D0E(iLocal_69[iVar0], UNK_0x16F2683693E537C9(), 0, 16);
					UNK_0xFADC0A217229F6B5(iLocal_69[iVar0], true);
				}
				iVar0++;
			}
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_68))
			{
				UNK_0x8BE3D040D15AEA1D(bLocal_68, -1);
			}
			iLocal_48++;
			break;
		case 5:
			iVar0 = 0;
			while (iVar0 < iLocal_69)
			{
				if (UNK_0xEB6A8945D1AC98A1(iLocal_69[iVar0]))
				{
					if (UNK_0xE4EDC4B0E92C078B(iLocal_61[iVar0]))
					{
						UNK_0x142CC44DB769B57E(&(iLocal_61[iVar0]));
						func_3(&uLocal_85, 2);
						func_3(&uLocal_85, 3);
					}
				}
				iVar0++;
			}
			if (UNK_0xEB6A8945D1AC98A1(iLocal_69[0]) && UNK_0xEB6A8945D1AC98A1(iLocal_69[1]))
			{
				iLocal_48 = 0;
				iLocal_47 = 1;
			}
			break;
	}
}

void func_68()
{
	if (!UNK_0x8E28E832BEAC3DCE(916.4631f, 3601.261f, 31.9327f, 3f))
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
		{
			if (UNK_0x5A91F08DF773C39D(UNK_0x728870EB733D12A1(), 916.4631f, 3601.261f, 31.9327f, 2f, 2f, 2f, false, true, 0))
			{
				UNK_0xA47B46945FF6DE74(UNK_0x728870EB733D12A1(), 915.6531f, 3595.061f, 32.0774f, 1, 0, 0, 1);
			}
		}
	}
}

void func_69()
{
	iLocal_47 = 3;
}

int func_70(bool bParam0)
{
	if (func_74())
	{
		Global_111628 = 1;
		Global_111625 = UNK_0x1C0640BA9A7327B3();
		if (func_23(Global_111627))
		{
			func_71(0);
		}
		UNK_0x974531784BE14213(1, "RE_TITLE");
		if (bParam0 && func_23(Global_111627))
		{
			UNK_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_71(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_72(func_73(iParam0), -1);
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
					func_72(func_73(iParam0), -1);
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
					func_72(func_73(iParam0), -1);
					Global_111638.f_24990.f_4++;
					UNK_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_72(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_73(int iParam0)
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

bool func_74()
{
	switch (func_75(&Global_30827, 0, 5, 0, UNK_0x0D0A574C76D769AC()))
	{
		case 1:
			return true;
		case 0:
			return true;
	}
	return false;
}

int func_75(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_79(0))
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
		if (!func_77(iParam2))
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
			func_76(uParam0, iParam4);
		}
	}
	return 2;
}

void func_76(var uParam0, int iParam1)
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

bool func_77(int iParam0)
{
	return func_78(iParam0, Global_41431);
}

int func_78(int iParam0, int iParam1)
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

bool func_79(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_77(iParam0))
	{
		return false;
	}
	return true;
}

int func_80(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_81(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_81(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_82(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_82(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_82(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_82(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_83()
{
	vector3 vVar0;
	vector3 vVar3;

	if (!bLocal_55)
	{
		UNK_0x0E2400AB9174FA81(255, bLocal_250, joaat("PLAYER"));
		if (!UNK_0x437347B10A200C4B(iLocal_69[0], 0) && !UNK_0x437347B10A200C4B(iLocal_69[1], 0))
		{
			if (UNK_0xB87D13D0C064E9D1(iLocal_69[0], UNK_0x16F2683693E537C9(), 1) || UNK_0xB87D13D0C064E9D1(iLocal_69[1], UNK_0x16F2683693E537C9(), 1))
			{
				func_4();
				return true;
			}
			if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
			{
				if (UNK_0xB87D13D0C064E9D1(iLocal_69[0], UNK_0x728870EB733D12A1(), 1) || UNK_0xB87D13D0C064E9D1(iLocal_69[1], UNK_0x728870EB733D12A1(), 1))
				{
					func_4();
					return true;
				}
			}
		}
		if (!UNK_0x437347B10A200C4B(iLocal_77[0], 0) && !UNK_0x437347B10A200C4B(iLocal_77[1], 0))
		{
			if (((UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), iLocal_77[0], 0) || UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), iLocal_77[1], 0)) || UNK_0xB87D13D0C064E9D1(iLocal_77[0], UNK_0x16F2683693E537C9(), 1)) || UNK_0xB87D13D0C064E9D1(iLocal_77[1], UNK_0x16F2683693E537C9(), 1))
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_69[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_69[1]))
				{
					if (func_99())
					{
						func_4();
						func_41(0);
						func_42(&uLocal_85, "RECGFAU", "RECGF_BIKES", 4, 0, 0, 0);
					}
					return true;
				}
			}
		}
		if (UNK_0xEB6A8945D1AC98A1(iLocal_69[0]) || UNK_0xEB6A8945D1AC98A1(iLocal_69[1]))
		{
			func_4();
			return true;
		}
		vVar0 = { 15f, 15f, 15f };
		vVar3 = { -15f, -15f, -15f };
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_69[0]))
		{
			if (UNK_0xD3DCEC81D13AAFB1(UNK_0x64430C979F516F7A(iLocal_69[0], 31086, 0f, 0f, 0f), 5f, true))
			{
				func_4();
				return true;
			}
			vVar0 = { vVar0 + UNK_0x64430C979F516F7A(iLocal_69[0], 31086, 0f, 0f, 0f) };
			vVar3 = { vVar3 + UNK_0x64430C979F516F7A(iLocal_69[0], 31086, 0f, 0f, 0f) };
			if (((UNK_0xBBE430A566D01EF3(vVar3, vVar0, joaat("WEAPON_SMOKEGRENADE"), 1) || UNK_0xBBE430A566D01EF3(vVar3, vVar0, joaat("WEAPON_GRENADE"), 1)) || UNK_0xBBE430A566D01EF3(vVar3, vVar0, joaat("WEAPON_GRENADELAUNCHER"), 1)) || UNK_0xBBE430A566D01EF3(vVar3, vVar0, joaat("WEAPON_STICKYBOMB"), 1))
			{
				func_4();
				return true;
			}
			if (UNK_0x8ADFEA7B4409B2F8(UNK_0x64430C979F516F7A(iLocal_69[0], 31086, 0f, 0f, 0f), 3f))
			{
				func_4();
				return true;
			}
		}
		if (UNK_0x4A42C22237F5FF76(UNK_0x16F2683693E537C9(), (973.053f - 30f), (3616.738f - 30f), (32.6181f - 30f), (973.053f + 30f), (3616.738f + 30f), (32.6181f + 30f), 0, 1))
		{
			func_4();
			return true;
		}
		if ((!UNK_0xEB6A8945D1AC98A1(bLocal_68) && !UNK_0xEB6A8945D1AC98A1(iLocal_69[0])) && !UNK_0xEB6A8945D1AC98A1(iLocal_69[1]))
		{
			if (iLocal_49 != -1)
			{
				if (((UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), iLocal_69[0]) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), iLocal_69[1])) || UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), iLocal_69[0])) || UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), iLocal_69[1]))
				{
					func_4();
					return true;
				}
			}
			if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_68, 12f, 12f, 2.5f, 0, 1, 0))
			{
				if (((UNK_0xE115347EA59F7B86(iLocal_69[0], UNK_0x16F2683693E537C9()) || UNK_0xE115347EA59F7B86(iLocal_69[1], UNK_0x16F2683693E537C9())) || UNK_0x6AB6A474D29FA7D8(iLocal_69[0], UNK_0x16F2683693E537C9())) || UNK_0x6AB6A474D29FA7D8(iLocal_69[1], UNK_0x16F2683693E537C9()))
				{
					if (!bLocal_54)
					{
						UNK_0x9BE7E7B6B488CC55(iLocal_69[0], UNK_0x16F2683693E537C9(), -1, 0);
						bLocal_54 = true;
					}
					if (UNK_0xE4EDC4B0E92C078B(iLocal_60))
					{
						UNK_0xF2D30B8ACAF12A39(iLocal_60, true);
					}
					if (UNK_0xE4EDC4B0E92C078B(iLocal_61[0]))
					{
						UNK_0xF2D30B8ACAF12A39(iLocal_61[0], true);
					}
					if (UNK_0xE4EDC4B0E92C078B(iLocal_61[1]))
					{
						UNK_0xF2D30B8ACAF12A39(iLocal_61[1], true);
					}
					if ((!func_8() || func_6("RECGF_SHUTUP")) || func_6("RECGF_PAYUP"))
					{
						if (iLocal_49 == -1)
						{
							iLocal_49 = UNK_0x1C0640BA9A7327B3();
							if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
							{
								func_4();
								func_41(0);
								func_42(&uLocal_85, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
							else
							{
								func_4();
								func_41(0);
								func_42(&uLocal_85, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			else
			{
				bLocal_54 = false;
				iLocal_49 = -1;
			}
			if (iLocal_49 != -1 && UNK_0x1C0640BA9A7327B3() > iLocal_49 + 10000)
			{
				func_4();
				func_41(0);
				func_42(&uLocal_85, "RECGFAU", "RECGF_WARNED", 4, 0, 0, 0);
				return true;
			}
			if (!UNK_0xB87D13D0C064E9D1(iLocal_69[0], UNK_0x16F2683693E537C9(), 1) && !UNK_0xB87D13D0C064E9D1(iLocal_69[1], UNK_0x16F2683693E537C9(), 1))
			{
				if (UNK_0xB87D13D0C064E9D1(bLocal_68, UNK_0x16F2683693E537C9(), 1))
				{
					if (func_99())
					{
						func_4();
						func_41(0);
						func_42(&uLocal_85, "RECGFAU", "RECGF_DEALER", 4, 0, 0, 0);
					}
					return true;
				}
			}
		}
	}
	return false;
}

void func_84()
{
	if (UNK_0xDF1306B443CD3D15(bLocal_76, 0))
	{
		if ((!UNK_0x5A91F08DF773C39D(bLocal_76, 915.7905f, 3603.449f, 31.9111f, 5f, 5f, 5f, false, true, 0) && !UNK_0xC42A92762C58E1B9(bLocal_68, bLocal_76, 0)) || UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_76, 1))
		{
			func_64();
		}
	}
	else
	{
		func_64();
	}
}

bool func_85()
{
	int iVar0;

	if (((((!UNK_0xC844350D5D58C99A(bLocal_68) && !UNK_0xC844350D5D58C99A(iLocal_69[0])) && !UNK_0xC844350D5D58C99A(iLocal_69[1])) && !UNK_0xC844350D5D58C99A(bLocal_76)) && !UNK_0xC844350D5D58C99A(iLocal_77[0])) && !UNK_0xC844350D5D58C99A(iLocal_77[1]))
	{
		UNK_0x523BCC9DC80CD82F(joaat("A_M_M_SKIDROW_01"));
		UNK_0x523BCC9DC80CD82F(joaat("G_M_Y_LOST_01"));
		UNK_0x523BCC9DC80CD82F(joaat("G_M_Y_LOST_02"));
		UNK_0x523BCC9DC80CD82F(joaat("PICADOR"));
		UNK_0x523BCC9DC80CD82F(joaat("HEXER"));
		UNK_0x3F423BF5B8125A50("random@countryside_gang_fight");
		UNK_0x3F423BF5B8125A50("veh@drivebystd_ds_grenades");
		UNK_0x4942FBD1EF896E39("move_m@gangster@var_i");
		if (((((((UNK_0xB87F6CF6E5628C67(joaat("A_M_M_SKIDROW_01")) && UNK_0xB87F6CF6E5628C67(joaat("G_M_Y_LOST_01"))) && UNK_0xB87F6CF6E5628C67(joaat("G_M_Y_LOST_02"))) && UNK_0xB87F6CF6E5628C67(joaat("PICADOR"))) && UNK_0xB87F6CF6E5628C67(joaat("HEXER"))) && UNK_0xB4AE0788C1587752("random@countryside_gang_fight")) && UNK_0xB4AE0788C1587752("veh@drivebystd_ds_grenades")) && UNK_0xDF3FDDA1EADEDD07("move_m@gangster@var_i"))
		{
			UNK_0xAB8E2DDC7AF955E0(joaat("PICADOR"), true);
			UNK_0xAB8E2DDC7AF955E0(joaat("HEXER"), true);
			UNK_0xB5376EA942202450(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 0, false, 1);
			UNK_0x7D6CA5F52B3748BF(vLocal_50 - Vector(20f, 50f, 80f), vLocal_50 + Vector(20f, 50f, 70f), 0, 1, 1, 1);
			UNK_0x15EA7F4313456B1D(3, false);
			UNK_0x15EA7F4313456B1D(5, false);
			UNK_0xF63400DBE3303D26("rghLost", &bLocal_250);
			UNK_0x0E2400AB9174FA81(5, bLocal_250, joaat("PLAYER"));
			bLocal_68 = UNK_0x36F2404464202779(26, joaat("A_M_M_SKIDROW_01"), 973.053f, 3616.738f, 31.6181f, 110.2753f, 1, true);
			UNK_0x64F9F278AB9DCA2C(bLocal_68, false, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(bLocal_68, 2, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(bLocal_68, 3, true, 2, 0);
			UNK_0x64F9F278AB9DCA2C(bLocal_68, 4, false, false, 0);
			UNK_0x71199B01895C6202(joaat("A_M_M_SKIDROW_01"));
			UNK_0x11AD11297DC58CC7(bLocal_68, true);
			UNK_0xAFF39FB306F8E232(bLocal_68, 17, true);
			UNK_0x25C5402CC10F76CD(bLocal_68, false);
			UNK_0x7980D72D61BEF4D5(bLocal_68, true);
			UNK_0x4E885A246A9D983A(bLocal_68, 185, true);
			UNK_0x5E678B691C852774(bLocal_68, 16);
			UNK_0x4F39CC3882DD074E(bLocal_68, "A_M_M_TRAMP_01_BLACK_MINI_01");
			func_63(&uLocal_85, 1, bLocal_68, "RECGFDealer", 0, 1);
			UNK_0x33CE5A9E32EA10B2(bLocal_68, 1);
			UNK_0xC6EB89C59F2AF6B8(bLocal_68, "random@countryside_gang_fight", "gangmember_stickup_loop", 1000f, -2f, -1, 1, false, 0, 0, 0);
			UNK_0x79C43E2BAC7C696F(bLocal_68, "move_m@gangster@var_i", 1048576000 /* Float: 0.25f */);
			bLocal_76 = UNK_0x122AAB0B1D6F55AD(joaat("PICADOR"), 915.7905f, 3603.449f, 31.9111f, 111.9593f, true, true, false);
			UNK_0xC002508A277213DE(bLocal_76, 37, false);
			UNK_0x58A0C35FA7CA6162(bLocal_76, 4, false);
			UNK_0xB26AC67EF006D7D4(bLocal_76, 1);
			UNK_0x55A3C4ED4728EA42(bLocal_76, "WDU 696");
			iLocal_69[0] = UNK_0x36F2404464202779(22, joaat("G_M_Y_LOST_01"), 970.2217f, 3614.821f, 31.6909f, 297.4345f, 1, true);
			func_63(&uLocal_85, 3, iLocal_69[0], "RECGFLost2", 0, 1);
			iLocal_69[1] = UNK_0x36F2404464202779(22, joaat("G_M_Y_LOST_02"), 971.504f, 3618.054f, 31.5565f, 216.9967f, 1, true);
			func_63(&uLocal_85, 2, iLocal_69[1], "RECGFLost1", 0, 1);
			UNK_0x71199B01895C6202(joaat("G_M_Y_LOST_01"));
			UNK_0x71199B01895C6202(joaat("G_M_Y_LOST_02"));
			iLocal_77[0] = UNK_0x122AAB0B1D6F55AD(joaat("HEXER"), 968.2626f, 3611.717f, 31.7874f, 296.8978f, true, true, false);
			iLocal_77[1] = UNK_0x122AAB0B1D6F55AD(joaat("HEXER"), 970.8362f, 3625.563f, 31.3415f, 212.3456f, true, true, false);
			UNK_0x71199B01895C6202(joaat("HEXER"));
			UNK_0xC6EB89C59F2AF6B8(iLocal_69[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 1000f, -2f, -1, 1, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(iLocal_69[1], "random@countryside_gang_fight", "biker_01_stickup_loop", 1000f, -2f, -1, 1, false, 0, 0, 0);
			iVar0 = 0;
			while (iVar0 < iLocal_69)
			{
				if (iVar0 < 2)
				{
					UNK_0xC743BD39A24D0583(iLocal_69[iVar0], 0);
					UNK_0x6DF7BF67E86AAE86(iLocal_69[iVar0], bLocal_250);
					UNK_0x3CC33E4E9CE523F4(iLocal_69[iVar0], 2);
					UNK_0xAFF39FB306F8E232(iLocal_69[iVar0], 50, true);
					UNK_0xB35CCEC0D4946813(iLocal_69[iVar0], 0);
					UNK_0x262EF6C6306BEA6C(iLocal_69[0], joaat("WEAPON_PISTOL"), -1, true, true);
					UNK_0x262EF6C6306BEA6C(iLocal_69[1], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, true, true);
					UNK_0xFADC0A217229F6B5(iLocal_69[iVar0], true);
					UNK_0x11AD11297DC58CC7(iLocal_69[iVar0], true);
					UNK_0xE8832A9E16A57A1F(iLocal_69[iVar0], true, 1);
				}
				iVar0++;
			}
			iLocal_59 = UNK_0x1C0640BA9A7327B3() + 1500;
			if (func_54() == 0)
			{
				func_63(&uLocal_85, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
			}
			else if (func_54() == 1)
			{
				func_63(&uLocal_85, 0, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
			}
			else if (func_54() == 2)
			{
				func_63(&uLocal_85, 0, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
			}
			return true;
		}
	}
	return false;
}

bool func_86()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_43) < (75f * 75f))
		{
			return true;
		}
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_97())
		{
			return false;
		}
	}
	if (func_93())
	{
		return true;
	}
	if (func_87(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_87(float fParam0, bool bParam1)
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
		if (func_31(func_54()))
		{
			iVar36 = func_28();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 2) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 3))
				{
					func_88(iVar32, &Var0);
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

void func_88(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_89(uParam1, "Abigail1", func_91(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		case 1:
			func_89(uParam1, "Abigail2", func_91(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		case 2:
			func_89(uParam1, "Barry1", func_91(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		case 3:
			func_89(uParam1, "Barry2", func_91(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		case 4:
			func_89(uParam1, "Barry3", func_91(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		case 5:
			func_89(uParam1, "Barry3A", func_91(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 6:
			func_89(uParam1, "Barry3C", func_91(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 7:
			func_89(uParam1, "Barry4", func_91(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_90(iParam0), 0, 0);
			break;
		case 8:
			func_89(uParam1, "Dreyfuss1", func_91(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		case 9:
			func_89(uParam1, "Epsilon1", func_91(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_90(iParam0), 0, 0);
			break;
		case 10:
			func_89(uParam1, "Epsilon2", func_91(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		case 11:
			func_89(uParam1, "Epsilon3", func_91(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_90(iParam0), 0, 0);
			break;
		case 12:
			func_89(uParam1, "Epsilon4", func_91(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_90(iParam0), 0, 0);
			break;
		case 13:
			func_89(uParam1, "Epsilon5", func_91(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		case 14:
			func_89(uParam1, "Epsilon6", func_91(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 15:
			func_89(uParam1, "Epsilon7", func_91(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_90(iParam0), 0, 0);
			break;
		case 16:
			func_89(uParam1, "Epsilon8", func_91(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		case 17:
			func_89(uParam1, "Extreme1", func_91(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 18:
			func_89(uParam1, "Extreme2", func_91(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 19:
			func_89(uParam1, "Extreme3", func_91(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 20:
			func_89(uParam1, "Extreme4", func_91(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		case 21:
			func_89(uParam1, "Fanatic1", func_91(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_90(iParam0), 1, 0);
			break;
		case 22:
			func_89(uParam1, "Fanatic2", func_91(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_90(iParam0), 1, 0);
			break;
		case 23:
			func_89(uParam1, "Fanatic3", func_91(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_90(iParam0), 0, 1);
			break;
		case 24:
			func_89(uParam1, "Hao1", func_91(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_90(iParam0), 0, 1);
			break;
		case 25:
			func_89(uParam1, "Hunting1", func_91(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 26:
			func_89(uParam1, "Hunting2", func_91(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 27:
			func_89(uParam1, "Josh1", func_91(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		case 28:
			func_89(uParam1, "Josh2", func_91(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		case 29:
			func_89(uParam1, "Josh3", func_91(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		case 30:
			func_89(uParam1, "Josh4", func_91(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		case 31:
			func_89(uParam1, "Maude1", func_91(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 32:
			func_89(uParam1, "Minute1", func_91(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 33:
			func_89(uParam1, "Minute2", func_91(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 34:
			func_89(uParam1, "Minute3", func_91(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 35:
			func_89(uParam1, "MrsPhilips1", func_91(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 0);
			break;
		case 36:
			func_89(uParam1, "MrsPhilips2", func_91(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 0);
			break;
		case 37:
			func_89(uParam1, "Nigel1", func_91(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		case 38:
			func_89(uParam1, "Nigel1A", func_91(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		case 39:
			func_89(uParam1, "Nigel1B", func_91(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_90(iParam0), 1, 1);
			break;
		case 40:
			func_89(uParam1, "Nigel1C", func_91(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_90(iParam0), 1, 1);
			break;
		case 41:
			func_89(uParam1, "Nigel1D", func_91(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_90(iParam0), 1, 1);
			break;
		case 42:
			func_89(uParam1, "Nigel2", func_91(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		case 43:
			func_89(uParam1, "Nigel3", func_91(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		case 44:
			func_89(uParam1, "Omega1", func_91(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		case 45:
			func_89(uParam1, "Omega2", func_91(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		case 46:
			func_89(uParam1, "Paparazzo1", func_91(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 47:
			func_89(uParam1, "Paparazzo2", func_91(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 48:
			func_89(uParam1, "Paparazzo3", func_91(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		case 49:
			func_89(uParam1, "Paparazzo3A", func_91(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 50:
			func_89(uParam1, "Paparazzo3B", func_91(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 51:
			func_89(uParam1, "Paparazzo4", func_91(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		case 52:
			func_89(uParam1, "Rampage1", func_91(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_90(iParam0), 0, 0);
			break;
		case 54:
			func_89(uParam1, "Rampage3", func_91(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		case 55:
			func_89(uParam1, "Rampage4", func_91(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		case 56:
			func_89(uParam1, "Rampage5", func_91(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_90(iParam0), 0, 0);
			break;
		case 53:
			func_89(uParam1, "Rampage2", func_91(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		case 57:
			func_89(uParam1, "TheLastOne", func_91(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 58:
			func_89(uParam1, "Tonya1", func_91(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 59:
			func_89(uParam1, "Tonya2", func_91(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 60:
			func_89(uParam1, "Tonya3", func_91(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 61:
			func_89(uParam1, "Tonya4", func_91(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		case 62:
			func_89(uParam1, "Tonya5", func_91(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_89(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
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

int func_90(int iParam0)
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

struct<2> func_91(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_92(iParam0) };
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

struct<2> func_92(int iParam0)
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

bool func_93()
{
	if (func_96() && !func_97())
	{
		return true;
	}
	if (func_95() && func_94())
	{
		return true;
	}
	return false;
}

bool func_94()
{
	return Global_111356 > 0;
}

bool func_95()
{
	if (Global_95666 != -1)
	{
		return true;
	}
	return false;
}

bool func_96()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_97()
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

bool func_98()
{
	if (!func_77(5))
	{
		return true;
	}
	if (func_93())
	{
		return true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_97())
		{
			return false;
		}
	}
	if (func_87(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_99()
{
	if ((Global_111627 == func_38() && UNK_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return true;
	}
	return false;
}

void func_100()
{
}

void func_101(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_38();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_103(iParam0);
	UNK_0x24D1A8A556F3252A(0);
	UNK_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_102();
}

void func_102()
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

void func_103(int iParam0)
{
	Global_111627 = iParam0;
}

bool func_104(vector3 vParam0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_38();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_145())
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
			if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_97())
			{
				return false;
			}
		}
		if (!Global_111638.f_9080)
		{
			return false;
		}
		if (func_13(0))
		{
			return false;
		}
		if (func_93())
		{
			return false;
		}
		if (func_144())
		{
			return false;
		}
		if (Global_111627 != -1)
		{
			return false;
		}
		if (func_31(func_54()))
		{
			if (func_87(100f, 1) != -1)
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
		if (!func_143(iParam3))
		{
			return false;
		}
		if (func_31(func_54()))
		{
			if (func_142(func_54()) == 4 || func_142(func_54()) == 5)
			{
				return false;
			}
		}
		if (func_31(func_54()))
		{
			if (!func_141(iParam3, bParam4, 145))
			{
				return false;
			}
		}
		if (!func_140(Global_111638.f_24990.f_43[iParam3]))
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
		if (func_139())
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
		if (!func_130(4))
		{
			return false;
		}
		if (!func_77(5))
		{
			return false;
		}
		if (func_129(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_129(0, 0))
		{
			return false;
		}
		if (Global_30914)
		{
			return false;
		}
		if (func_143(30) && !func_129(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_31(func_54()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111638.f_2358.f_539.f_2300[iVar4 /*3*/] };
				bVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_128(bVar8))
				{
					if (func_106(iVar4))
					{
						if (!func_105(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar5) < (210f * 210f))
							{
								if (func_54() != iVar4)
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

bool func_105(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_106(int iParam0)
{
	bool bVar0;

	bVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_107(bVar0);
}

int func_107(bool bParam0)
{
	return func_108(bParam0, 1);
}

int func_108(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_128(bParam0))
	{
		return 0;
	}
	func_109(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_109(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_110(func_121(), bParam0, uParam1, uParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_110(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_120(bParam0, bParam1))
	{
		iVar0 = func_119(bParam1);
		iVar1 = func_117(bParam0);
		iVar2 = (func_117(bParam0) - func_117(bParam1));
		iVar3 = (func_119(bParam0) - func_119(bParam1));
		iVar4 = (func_116(bParam0) - func_116(bParam1));
		iVar5 = (func_115(bParam0) - func_115(bParam1));
		iVar6 = (func_114(bParam0) - func_114(bParam1));
		iVar7 = (func_113(bParam0) - func_113(bParam1));
	}
	else
	{
		iVar0 = func_119(bParam0);
		iVar1 = func_117(bParam1);
		iVar2 = (func_117(bParam1) - func_117(bParam0));
		iVar3 = (func_119(bParam1) - func_119(bParam0));
		iVar4 = (func_116(bParam1) - func_116(bParam0));
		iVar5 = (func_115(bParam1) - func_115(bParam0));
		iVar6 = (func_114(bParam1) - func_114(bParam0));
		iVar7 = (func_113(bParam1) - func_113(bParam0));
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
		iVar4 = (iVar4 + func_112(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_111(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_111(float fParam0, float fParam1, float fParam2)
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

int func_112(bool bParam0, int iParam1)
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

int func_113(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_114(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_115(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_116(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

int func_117(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_118(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_118(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_119(bool bParam0)
{
	return (bParam0 && 15);
}

bool func_120(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_128(bParam1) || !func_128(bParam0))
	{
		return true;
	}
	bVar0 = func_117(bParam0);
	bVar1 = func_117(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_119(bParam0);
	bVar1 = func_119(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_116(bParam0);
	bVar1 = func_116(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_115(bParam0);
	bVar1 = func_115(bParam1);
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
	return false;
}

bool func_121()
{
	var uVar0;

	func_127(&uVar0, UNK_0x4460E481B9E33ADA());
	func_126(&uVar0, UNK_0x8D199E381D262EEF());
	func_125(&uVar0, UNK_0xD8A54335F18763BA());
	func_124(&uVar0, UNK_0x972A296334C9D57B());
	func_123(&uVar0, UNK_0x118229AD063C3C1D());
	func_122(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_122(bool bParam0, int iParam1)
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

void func_123(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_124(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_119(*bParam0);
	iVar1 = func_117(*bParam0);
	if (iParam1 < 1 || iParam1 > func_112(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_125(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_126(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_127(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_128(bool bParam0)
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
	iVar0 = func_113(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_114(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_115(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_117(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_119(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_116(bParam0);
	if (iVar5 < 1 || iVar5 > func_112(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_129(int iParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], bParam1))
	{
		return true;
	}
	return false;
}

bool func_130(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_54();
				if (!func_31(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_138()) || Global_110685) || Global_30770) || func_137()) || func_56(8, -1)) || func_136()) || func_135()) || func_134()) || func_133()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_138()) || Global_30770) || func_137()) || func_56(8, -1)) || func_134()) || func_136()) || func_135()) || func_133()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_138()) || Global_110685) || Global_30770) || func_137()) || func_56(8, -1)) || func_134()) || func_136()) || func_135()) || func_133()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_138()) || Global_110685) || Global_30770) || func_137()) || func_56(8, -1)) || func_136()) || func_135()) || func_133()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_138() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_56(8, -1)) || func_133()) || func_132()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_56(8, -1) || func_136()) || func_135()) || func_132()) || func_131())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_138()) || Global_30770) || func_137()) || func_56(8, -1)) || func_135()) || func_134()) || func_133()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_138()) || func_135()) || Global_110685) || Global_30770) || func_137()) || Global_42596) || func_56(8, -1)) || func_134()) || func_132()) || func_133()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_138()) || Global_110685) || Global_30770) || func_137()) || func_56(8, -1)) || func_134()) || func_132()) || func_136()) || func_135()) || func_133())
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

bool func_131()
{
	return Global_98783.f_1;
}

bool func_132()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_133()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_134()
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

bool func_135()
{
	return Global_98796.f_346 > 0;
}

bool func_136()
{
	return Global_98796.f_345 > 0;
}

bool func_137()
{
	return Global_1312877;
}

bool func_138()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_139()
{
	func_53();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

bool func_140(bool bParam0)
{
	return func_120(func_121(), bParam0);
}

bool func_141(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_54();
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

int func_142(int iParam0)
{
	if (!func_31(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_143(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_145())
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

bool func_144()
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

bool func_145()
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

void func_146()
{
	int iVar0;

	if (bLocal_53 && !bLocal_58)
	{
		if (!func_6("RECGF_SHOOT"))
		{
			func_4();
		}
		if (UNK_0xE4EDC4B0E92C078B(iLocal_60))
		{
			UNK_0x142CC44DB769B57E(&iLocal_60);
		}
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_68))
		{
			UNK_0x4E885A246A9D983A(bLocal_68, 317, true);
			UNK_0x7980D72D61BEF4D5(bLocal_68, false);
			UNK_0x11AD11297DC58CC7(bLocal_68, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_69)
		{
			if (UNK_0xE4EDC4B0E92C078B(iLocal_61[iVar0]))
			{
				UNK_0x142CC44DB769B57E(&(iLocal_61[iVar0]));
			}
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_69[iVar0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (iVar0 < 2)
				{
					if (!UNK_0x437347B10A200C4B(iLocal_77[iVar0], 0))
					{
						UNK_0x89258193691A7600(iLocal_69[iVar0], iLocal_77[iVar0], UNK_0x16F2683693E537C9(), 8, 20f, 786469, 150f, 10f, 1);
						UNK_0xFADC0A217229F6B5(iLocal_69[iVar0], true);
					}
					else
					{
						UNK_0xF3268524E9BE6D6E(iLocal_69[iVar0], UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
					}
				}
				else
				{
					UNK_0xF3268524E9BE6D6E(iLocal_69[iVar0], UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
				}
				UNK_0x11AD11297DC58CC7(iLocal_69[iVar0], false);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_77)
		{
			if (!UNK_0x437347B10A200C4B(iLocal_77[iVar0], 0))
			{
				UNK_0x046C362CF15F1935(&(iLocal_77[iVar0]));
				if (UNK_0x562F77A7F33D2E46("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		UNK_0x8910D3D58E0132B8("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		UNK_0x51B096AAC60548C1(1f);
		UNK_0x842F1AEB2FCC00B7(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 1);
		UNK_0xB547E3FFEB27073E();
		UNK_0x15EA7F4313456B1D(3, true);
		UNK_0x15EA7F4313456B1D(5, true);
		func_3(&uLocal_85, 1);
		func_3(&uLocal_85, 2);
		func_3(&uLocal_85, 3);
		func_3(&uLocal_85, 4);
	}
	func_147(-1);
	UNK_0x10FAF14A60A0DBE1();
}

void func_147(int iParam0)
{
	char cVar0[64];

	if (iParam0 == -1)
	{
		iParam0 = func_38();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_99())
	{
		func_151(iParam0);
		UNK_0x974531784BE14213(0, 0);
		Global_111629 = UNK_0x1C0640BA9A7327B3();
		func_150(30000);
		StringCopy(&cVar0, func_149(Global_111627, 1), 64);
		if (func_37(Global_111627) > 0)
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
	func_148(&Global_30827);
	Global_111628 = 0;
	func_103(-1);
}

void func_148(var uParam0)
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

char* func_149(int iParam0, bool bParam1)
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

void func_150(int iParam0)
{
	Global_41982 = (UNK_0x1C0640BA9A7327B3() + iParam0);
}

void func_151(int iParam0)
{
	func_152(iParam0, 0, func_157(iParam0));
}

void func_152(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<16> Var1;

	bVar0 = func_121();
	func_155(&bVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_154(iParam0, &bVar0);
	Var1 = { func_153(&bVar0) };
}

struct<16> func_153(bool bParam0)
{
	struct<16> Var0;
	bool bVar16;

	StringCopy(&Var0, "", 64);
	bVar16 = func_115(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_114(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_113(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "  ", 64);
	bVar16 = func_116(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "/", 64);
	bVar16 = func_119(*bParam0);
	if (bVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_117(*bParam0), 64);
	return Var0;
}

void func_154(int iParam0, bool bParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *bParam1;
}

void func_155(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_117(*bParam0);
	bVar1 = func_119(*bParam0);
	iVar2 = func_116(*bParam0);
	iVar3 = func_115(*bParam0);
	iVar4 = func_114(*bParam0);
	iVar5 = func_113(*bParam0);
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
	iVar6 = func_112(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_112(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_156(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_156(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_127(bParam0, iParam1);
	func_126(bParam0, iParam2);
	func_125(bParam0, iParam3);
	func_123(bParam0, bParam5);
	func_124(bParam0, iParam4);
	func_122(bParam0, iParam6);
}

int func_157(int iParam0)
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

