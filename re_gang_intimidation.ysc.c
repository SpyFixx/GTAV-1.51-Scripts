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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	vector3 vLocal_46 = { 0f, 0f, 0f };
	bool bLocal_49 = false;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	bool bLocal_54 = false;
	var uLocal_55 = 16;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
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
	int iLocal_220[3] = { 0, 0, 0 };
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	vector3 vLocal_226 = { 0f, 0f, 0f };
	vector3 vLocal_229[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_239[3] = { 0f, 0f, 0f };
	vector3 vLocal_243 = { 0f, 0f, 0f };
	int iLocal_246 = 0;
	bool bLocal_247 = false;
	int iLocal_248 = 0;
	bool bLocal_249 = false;
	bool bLocal_250 = false;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	var uLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	bool bLocal_256 = false;
	vector3 vLocal_257 = { 0f, 0f, 0f };
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
	struct<6> Var1;
	int iVar7;
	bool bVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	bool bVar12;
	var uVar13;
	vector3 vVar14;
	bool bVar17;
	int iVar18[3];
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;

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
	iVar0 = 0;
	Var1 = 3;
	iVar7 = 0;
	iLocal_51 = 3;
	vLocal_226 = { ScriptParam_0.f_1[0 /*3*/] };
	vLocal_229[0 /*3*/] = { 1283.85f, -1622.501f, 53.2255f };
	fLocal_239[0] = 198.9926f;
	vLocal_229[1 /*3*/] = { 1286.655f, -1627f, 53.225f };
	fLocal_239[1] = 22.3073f;
	vLocal_229[2 /*3*/] = { 1286.452f, -1624.782f, 53.225f };
	fLocal_239[2] = 49.6773f;
	vVar14 = { 1298.391f, -1580.895f, 50.7937f };
	bVar17 = 332.006f;
	vLocal_243 = { 1277.725f, -1617.897f, 53.2254f };
	if (func_164())
	{
		Var1[0] = joaat("G_M_Y_MEXGOON_02");
		Var1[1] = joaat("G_M_Y_MEXGOON_02");
		Var1[2] = joaat("G_M_Y_MEXGOON_02");
		Var1.f_4 = joaat("A_F_Y_EASTSA_03");
	}
	else
	{
		Var1[0] = joaat("G_M_Y_MEXGOON_02");
		Var1[1] = joaat("G_M_Y_MEXGOON_02");
		Var1[2] = joaat("G_M_Y_MEXGOON_02");
		Var1.f_4 = joaat("A_F_Y_EASTSA_03");
	}
	Var1.f_5 = "amb_sit_wall_m";
	if (UNK_0x2EBF608FFE6CA406(11))
	{
		func_152(Var1, uVar13, &iVar18, bVar22);
	}
	if (func_119(vLocal_226, -1, 0, 0, 0))
	{
		func_116(-1);
	}
	else
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	func_115(1, Var1);
	while (iVar0 != 7)
	{
		SYSTEM::WAIT(0);
		iVar23 = 600;
		if (!UNK_0x338D6FF72D84D90F())
		{
			iVar23 = 0;
			iVar0 = 7;
			func_152(Var1, uVar13, &iVar18, bVar22);
		}
		if (!func_114())
		{
			if (func_113())
			{
				iVar23 = 0;
				iVar0 = 7;
				func_152(Var1, uVar13, &iVar18, bVar22);
			}
		}
		UNK_0x1A6DFFFEEC27BF4F("RE_GI", 0);
		switch (iVar0)
		{
			case 0:
				if (func_101())
				{
					iVar23 = 0;
					iVar0 = 7;
					func_152(Var1, uVar13, &iVar18, bVar22);
				}
				if (func_115(1, Var1))
				{
					iVar23 = 0;
					iVar0 = 2;
				}
				break;
			case 2:
				if (func_90(3))
				{
					func_89(1);
					iVar0 = 4;
				}
				else
				{
					iVar0 = 6;
				}
				iVar23 = 0;
				break;
			case 4:
				iVar23 = 0;
				UNK_0x7D6CA5F52B3748BF(vLocal_243 - Vector(10f, 30f, 30f), vLocal_243 + Vector(10f, 30f, 30f), 0, 1, 1, 1);
				UNK_0x10F3BFFADF2CE3DA(vLocal_243 - Vector(50f, 50f, 50f), vLocal_243 + Vector(100f, 100f, 100f));
				UNK_0xE342F209E49C5314(vLocal_243 - Vector(15f, 15f, 15f), vLocal_243 + Vector(15f, 15f, 15f), false, 1);
				UNK_0x5D96D8530B3D0904(&bVar8, 4);
				UNK_0x5D96D8530B3D0904(&bVar8, true);
				UNK_0x5D96D8530B3D0904(&bVar8, 5);
				UNK_0xF63400DBE3303D26("GangOne", &bLocal_49);
				UNK_0x0E2400AB9174FA81(5, bLocal_49, joaat("PLAYER"));
				bVar22 = UNK_0x36F2404464202779(12, Var1.f_4, vVar14, bVar17, 1, true);
				UNK_0x11AD11297DC58CC7(bVar22, true);
				UNK_0x71199B01895C6202(Var1.f_4);
				UNK_0x6DF7BF67E86AAE86(bVar22, bLocal_49);
				UNK_0x25C5402CC10F76CD(bVar22, false);
				UNK_0x64F9F278AB9DCA2C(bVar22, 2, false, false, 0);
				UNK_0x64F9F278AB9DCA2C(bVar22, false, false, false, 0);
				UNK_0x64F9F278AB9DCA2C(bVar22, 3, 2, false, 0);
				UNK_0x64F9F278AB9DCA2C(bVar22, 4, false, false, 0);
				UNK_0x64F9F278AB9DCA2C(bVar22, 8, true, true, 0);
				UNK_0x4F39CC3882DD074E(bVar22, "G_F_Y_Vagos_01_LATINO_MINI_02");
				if (func_88() == 0)
				{
					func_87(&uLocal_55, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
				}
				else if (func_88() == 1)
				{
					func_87(&uLocal_55, 0, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
				}
				else if (func_88() == 2)
				{
					func_87(&uLocal_55, 0, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
				}
				func_87(&uLocal_55, 3, bVar22, "REGIFemale", 0, 1);
				func_87(&uLocal_55, 4, iVar18[2], "REGIMale", 0, 1);
				UNK_0xC6EB89C59F2AF6B8(bVar22, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, false, 0, 0, 0);
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_224))
				{
				}
				iVar24 = 0;
				while (iVar24 <= (iLocal_51 - 1))
				{
					if (!UNK_0xC844350D5D58C99A(iVar18[iVar24]))
					{
						iVar18[iVar24] = UNK_0x36F2404464202779(12, Var1[iVar24], vLocal_229[iVar24 /*3*/], fLocal_239[iVar24], 1, true);
						UNK_0x11AD11297DC58CC7(iVar18[iVar24], true);
						UNK_0x71199B01895C6202(Var1[iVar24]);
						UNK_0x6DF7BF67E86AAE86(iVar18[iVar24], bLocal_49);
						UNK_0x4E885A246A9D983A(iVar18[iVar24], 42, true);
						UNK_0x262EF6C6306BEA6C(iVar18[iVar24], func_86(), -1, true, true);
						UNK_0x3CC33E4E9CE523F4(iVar18[iVar24], 2);
						UNK_0xB35CCEC0D4946813(iVar18[iVar24], 0);
						UNK_0x298903DD96203C2C(iVar18[iVar24], 13);
						UNK_0x6D80F1AEBA734886(iVar18[iVar24], UNK_0x09AC81E49EA267F7(200, 500));
					}
					iVar24++;
				}
				UNK_0x262EF6C6306BEA6C(iVar18[0], joaat("WEAPON_SAWNOFFSHOTGUN"), 40, true, true);
				iLocal_52 = UNK_0xE9744DB7B8CA6965(1283.205f, -1622.71f, 54.299f, 0f, 0f, 103.68f, 2);
				if (!UNK_0xEB6A8945D1AC98A1(iVar18[0]))
				{
					UNK_0x915804B434753CBD(iVar18[0], iLocal_52, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_b", 4f, -4f, 17, 0, 1148846080, 0);
				}
				if (!UNK_0xEB6A8945D1AC98A1(iVar18[1]))
				{
					UNK_0x915804B434753CBD(iVar18[1], iLocal_52, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_c", 4f, -4f, 17, 0, 1148846080, 0);
				}
				if (!UNK_0xEB6A8945D1AC98A1(iVar18[2]))
				{
					UNK_0x915804B434753CBD(iVar18[2], iLocal_52, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_d", 4f, -4f, 17, 0, 1148846080, 0);
				}
				UNK_0xC90224D9E95E5E3A(iLocal_52, true);
				bLocal_249 = true;
				iVar0 = 5;
				break;
			case 5:
				UNK_0x34FABD75496259E4(UNK_0xD803B885F5E47A62());
				UNK_0x24A24DF10A19BBA7(UNK_0xD803B885F5E47A62());
				if (iVar7 < 3)
				{
					if ((((((((func_79(&iVar18, &uVar11, &uVar10, &uVar9, bVar8, bVar12, 1075838976 /* Float: 2.5f */, 0) || func_78(iVar18[0], 0)) || func_78(iVar18[1], 0)) || func_78(iVar18[2], 0)) || UNK_0xD3DCEC81D13AAFB1(vLocal_229[0 /*3*/], 40f, true)) || UNK_0xBBE430A566D01EF3(vLocal_229[0 /*3*/] - Vector(25f, 25f, 25f), vLocal_229[0 /*3*/] + Vector(25f, 25f, 25f), joaat("WEAPON_SMOKEGRENADE"), 1)) || UNK_0xBBE430A566D01EF3(vLocal_229[0 /*3*/] - Vector(25f, 25f, 25f), vLocal_229[0 /*3*/] + Vector(25f, 25f, 25f), joaat("WEAPON_GRENADE"), 1)) || UNK_0xBBE430A566D01EF3(vLocal_229[0 /*3*/] - Vector(25f, 25f, 25f), vLocal_229[0 /*3*/] + Vector(25f, 25f, 25f), joaat("WEAPON_GRENADELAUNCHER"), 1)) || UNK_0xBBE430A566D01EF3(vLocal_229[0 /*3*/] - Vector(25f, 25f, 25f), vLocal_229[0 /*3*/] + Vector(25f, 25f, 25f), joaat("WEAPON_STICKYBOMB"), 1))
					{
						iVar25 = 0;
						while (iVar25 < iVar18)
						{
							if (!UNK_0xEB6A8945D1AC98A1(iVar18[iVar25]))
							{
								func_76();
								if (!UNK_0xEB6A8945D1AC98A1(iVar18[iVar25]))
								{
									UNK_0xA3BF0AA5A2608191(iVar18[iVar25]);
									UNK_0xDD353D0E9C789D0E(&iLocal_50);
									UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 1000, 2048, 2);
									UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
									UNK_0x75ABDC5F81978924(iLocal_50);
									UNK_0x78ADC381772E3D54(iVar18[iVar25], iLocal_50);
									UNK_0xF82EA857DA10E0CD(&iLocal_50);
									UNK_0xFADC0A217229F6B5(iVar18[iVar25], true);
								}
							}
							iVar25++;
						}
						if (!UNK_0xEB6A8945D1AC98A1(bVar22))
						{
							if (!UNK_0xEB6A8945D1AC98A1(bVar22))
							{
								UNK_0xA3BF0AA5A2608191(bVar22);
								UNK_0xDD353D0E9C789D0E(&iLocal_50);
								UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 1000, 2048, 2);
								UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
								UNK_0x75ABDC5F81978924(iLocal_50);
								UNK_0x78ADC381772E3D54(bVar22, iLocal_50);
								UNK_0xF82EA857DA10E0CD(&iLocal_50);
								UNK_0xFADC0A217229F6B5(bVar22, true);
							}
						}
						iLocal_248 = 1;
					}
				}
				else
				{
					iVar26 = 0;
					while (iVar26 < iVar18)
					{
						if (!UNK_0xEB6A8945D1AC98A1(iVar18[iVar26]))
						{
							if (UNK_0xB87D13D0C064E9D1(iVar18[iVar26], UNK_0x16F2683693E537C9(), 1))
							{
								func_76();
								iVar7 = 6;
							}
						}
						else
						{
							func_76();
							iVar7 = 6;
						}
						iVar26++;
					}
				}
				if (bLocal_247)
				{
					iVar0 = 6;
				}
				if (bLocal_54)
				{
					if (!func_75())
					{
						iVar7 = 6;
					}
				}
				if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					iVar23 = 0;
					iVar0 = 6;
				}
				else if (func_74(vLocal_226, 150))
				{
					iVar0 = 6;
				}
				else if (iVar0 != 6)
				{
					if (func_1(&iVar7, Var1, bVar22, &iVar18, &iVar23, &uVar13) || iLocal_248)
					{
						iVar0 = 6;
					}
					else
					{
						Jump @2275; //curOff = 2240
						iVar23 = 0;
						func_152(Var1, uVar13, &iVar18, bVar22);
						iVar0 = 7;
						Jump @2275; //curOff = 2263
						Jump @2275; //curOff = 2266
						iVar23 = 0;
					}
					if (iVar0 != 7)
					{
					}
					func_152(Var1, uVar13, &iVar18, bVar22);
				}
				default:
					break;
		}
	}
}

int func_1(int iParam0, struct<6> Param1, bool bParam7, int iParam8, int iParam9, var uParam10)
{
	int iVar0;

	if (*iParam0 >= 3)
	{
		if (!UNK_0x69DF961355195C3C(iLocal_53))
		{
			if ((!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_257, 9f, 9f, 9f, false, true, 0) && !UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), 1276.21f, -1613.05f, 53f, 9f, 9f, 9f, false, true, 0)) || UNK_0x093C93CCF7F0ECDB(UNK_0x16F2683693E537C9()))
			{
				*iParam0 = 6;
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (func_60(bParam7, iParam8))
			{
				if (bLocal_256)
				{
					*iParam0 = 2;
				}
				if (!UNK_0xEB6A8945D1AC98A1(bParam7))
				{
					UNK_0x9DD8618CA5BF832D(bParam7, 247, true);
					if (!func_78(bParam7, 0))
					{
						if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam7, 15f, 15f, 15f, 0, 1, 0))
						{
							if ((UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6) && UNK_0xE115347EA59F7B86(bParam7, UNK_0x16F2683693E537C9())) && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
							{
								if ((UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6) || UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam7)) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam7))
								{
									UNK_0x8FB4E06C94958F84(bParam7);
									UNK_0x0C8C0C840C2D1AD2(bParam7, UNK_0x16F2683693E537C9(), 5000, 1024, 2);
									func_76();
									SYSTEM::WAIT(1000);
									func_45(&uLocal_55, "REGIAU", "REGIN_ARM", 4, 0, 0, 0);
									iVar0 = 0;
									while (iVar0 < *iParam8)
									{
										if (!UNK_0xEB6A8945D1AC98A1((*iParam8)[iVar0]))
										{
											UNK_0x8FB4E06C94958F84((*iParam8)[iVar0]);
											UNK_0xF3268524E9BE6D6E((*iParam8)[iVar0], UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
											UNK_0xFADC0A217229F6B5((*iParam8)[iVar0], true);
										}
										iVar0++;
									}
									if (!UNK_0xEB6A8945D1AC98A1(bParam7))
									{
										UNK_0xF3268524E9BE6D6E(bParam7, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
										UNK_0xFADC0A217229F6B5(bParam7, true);
									}
									iLocal_248 = 1;
								}
							}
						}
					}
					else
					{
						func_43();
						if (!UNK_0xEB6A8945D1AC98A1(bParam7))
						{
							UNK_0xA3BF0AA5A2608191(bParam7);
							UNK_0xF3268524E9BE6D6E(bParam7, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
							UNK_0xFADC0A217229F6B5(bParam7, true);
						}
						iLocal_248 = 1;
					}
				}
				if ((UNK_0xEB6A8945D1AC98A1((*iParam8)[0]) || UNK_0xEB6A8945D1AC98A1((*iParam8)[1])) || UNK_0xEB6A8945D1AC98A1((*iParam8)[2]))
				{
					func_42(iParam8, bParam7);
				}
				if (UNK_0xEB6A8945D1AC98A1(bParam7))
				{
					if (iLocal_255 > 2)
					{
						func_42(iParam8, bParam7);
					}
					else
					{
						*iParam0 = 9;
					}
				}
				else if (UNK_0x869EFD0BC0868856(bParam7))
				{
					if (UNK_0xB4ECF989E2C1DAC8(bParam7, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", 3))
					{
						UNK_0xFB131B855F2FD560(bParam7, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", -8f);
					}
				}
			}
			else
			{
				*iParam0 = 9;
			}
			break;
		case 2:
			UNK_0x4ADCCF23C40DC113(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_243, false, false, 255, 255);
			UNK_0x78A77CDD64392938(UNK_0x16F2683693E537C9(), 1000);
			vLocal_257 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			if (!UNK_0xEB6A8945D1AC98A1((*iParam8)[1]))
			{
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_220[1]))
				{
				}
				UNK_0xC92DB9682A650680("RE28_OS");
				iLocal_53 = UNK_0xE9744DB7B8CA6965(1283.205f, -1622.71f, 54.299f, 0f, 0f, 103.68f, 2);
				if (!UNK_0xEB6A8945D1AC98A1((*iParam8)[0]))
				{
					UNK_0x915804B434753CBD((*iParam8)[0], iLocal_53, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_b", 4f, -4f, 17, 0, 1148846080, 0);
				}
				if (!UNK_0xEB6A8945D1AC98A1((*iParam8)[1]))
				{
					UNK_0x915804B434753CBD((*iParam8)[1], iLocal_53, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_c", 4f, -4f, 16, 0, 1148846080, 0);
				}
				if (!UNK_0xEB6A8945D1AC98A1((*iParam8)[2]))
				{
					UNK_0x915804B434753CBD((*iParam8)[2], iLocal_53, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_d", 4f, -4f, 17, 0, 1148846080, 0);
				}
				*iParam0 = 3;
			}
			break;
		case 3:
			*iParam9 = 0;
			if (UNK_0x69DF961355195C3C(iLocal_53))
			{
				if (UNK_0xA45992A6CE82FB43(iLocal_53) > 0.3f)
				{
					if (!UNK_0xEB6A8945D1AC98A1((*iParam8)[0]))
					{
						UNK_0x9DD8618CA5BF832D((*iParam8)[0], 156, true);
						UNK_0xDD353D0E9C789D0E(&iLocal_50);
						UNK_0xE20F700AC2AFCA92(false, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) - Vector(0f, 0f, 1f), UNK_0x16F2683693E537C9(), 2f, false, 3.5f, 5f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), 25000, 0);
						UNK_0x75ABDC5F81978924(iLocal_50);
						UNK_0x78ADC381772E3D54((*iParam8)[0], iLocal_50);
						UNK_0xF82EA857DA10E0CD(&iLocal_50);
						iLocal_50 = 0;
					}
				}
				if (UNK_0xA45992A6CE82FB43(iLocal_53) > 0.35f)
				{
					if (!UNK_0xEB6A8945D1AC98A1((*iParam8)[1]))
					{
						UNK_0x9DD8618CA5BF832D((*iParam8)[1], 156, true);
						UNK_0xDD353D0E9C789D0E(&iLocal_50);
						UNK_0x161356BF7864C47B(false, UNK_0x16F2683693E537C9(), UNK_0x16F2683693E537C9(), 2f, 0, 5f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), 25000, 0);
						UNK_0x75ABDC5F81978924(iLocal_50);
						UNK_0x78ADC381772E3D54((*iParam8)[1], iLocal_50);
						UNK_0xF82EA857DA10E0CD(&iLocal_50);
						iLocal_50 = 0;
					}
				}
				if (UNK_0xA45992A6CE82FB43(iLocal_53) > 0.275f)
				{
					if (!UNK_0xEB6A8945D1AC98A1((*iParam8)[2]))
					{
						UNK_0x9DD8618CA5BF832D((*iParam8)[2], 156, true);
						UNK_0xDD353D0E9C789D0E(&iLocal_50);
						UNK_0x161356BF7864C47B(false, UNK_0x16F2683693E537C9(), UNK_0x16F2683693E537C9(), 2f, 0, 3.5f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), 25000, 0);
						UNK_0x75ABDC5F81978924(iLocal_50);
						UNK_0x78ADC381772E3D54((*iParam8)[2], iLocal_50);
						UNK_0xF82EA857DA10E0CD(&iLocal_50);
						iLocal_50 = 0;
					}
				}
			}
			if (!UNK_0xEB6A8945D1AC98A1((*iParam8)[2]))
			{
				if (UNK_0x12DE711B1C681E9E((*iParam8)[2], UNK_0x16F2683693E537C9(), 4f, 4f, 2f, 0, 1, 0))
				{
					func_41(iLocal_224);
					func_41(iLocal_225);
					func_37(iParam8);
					if (!UNK_0xEB6A8945D1AC98A1((*iParam8)[0]))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_50);
						UNK_0xE20F700AC2AFCA92(false, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) - Vector(0f, 0f, 1f), UNK_0x16F2683693E537C9(), 2f, false, 3.5f, 5f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), 25000, 0);
						UNK_0x75ABDC5F81978924(iLocal_50);
						UNK_0x78ADC381772E3D54((*iParam8)[0], iLocal_50);
						UNK_0xF82EA857DA10E0CD(&iLocal_50);
						iLocal_50 = 0;
					}
					if (!UNK_0xEB6A8945D1AC98A1((*iParam8)[1]))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_50);
						UNK_0x161356BF7864C47B(false, UNK_0x16F2683693E537C9(), UNK_0x16F2683693E537C9(), 2f, 0, 5f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), 25000, 0);
						UNK_0x75ABDC5F81978924(iLocal_50);
						UNK_0x78ADC381772E3D54((*iParam8)[1], iLocal_50);
						UNK_0xF82EA857DA10E0CD(&iLocal_50);
						iLocal_50 = 0;
					}
					if (!UNK_0xEB6A8945D1AC98A1((*iParam8)[2]))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_50);
						UNK_0x161356BF7864C47B(false, UNK_0x16F2683693E537C9(), UNK_0x16F2683693E537C9(), 2f, 0, 3.5f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), 25000, 0);
						UNK_0x75ABDC5F81978924(iLocal_50);
						UNK_0x78ADC381772E3D54((*iParam8)[2], iLocal_50);
						UNK_0xF82EA857DA10E0CD(&iLocal_50);
						iLocal_50 = 0;
					}
					iLocal_251 = UNK_0x1C0640BA9A7327B3();
					*iParam0 = 4;
				}
			}
			break;
		case 4:
			if (func_35(Param1, (*iParam8)[2], iParam8))
			{
				func_41(iLocal_220[2]);
			}
			else if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
			{
				*iParam0 = 6;
			}
			break;
		case 6:
			if (!bLocal_250)
			{
				func_76();
				SYSTEM::WAIT(0);
				func_45(&uLocal_55, "REGIAU", "REGIN_WARN2", 4, 0, 0, 0);
				UNK_0x51B096AAC60548C1(0.5f);
				func_37(iParam8);
				func_42(iParam8, bParam7);
				func_41(iLocal_225);
				func_41(iLocal_224);
				bLocal_250 = true;
			}
			func_34(iParam8);
			func_33(iParam8);
			if (func_32(iParam8))
			{
				*uParam10 = 1;
				if (!UNK_0xEB6A8945D1AC98A1(bParam7))
				{
					if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam7, 8f, 8f, 8f, 0, 1, 0))
					{
						func_45(&uLocal_55, "REGIAU", "REGIN_SORRY", 4, 0, 0, 0);
					}
				}
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_225))
				{
				}
				while (func_75())
				{
					SYSTEM::WAIT(0);
				}
				while (!func_31())
				{
					SYSTEM::WAIT(0);
				}
				func_5(-1, 0);
				func_2();
				return 1;
				*iParam0 = 9;
			}
			break;
		case 8:
			break;
		case 9:
			return 1;
	}
	return 0;
}

void func_2()
{
	func_3();
}

int func_3()
{
	if (func_4(0))
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

bool func_4(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_5(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_28(iParam0))
	{
		func_27(iParam0, bParam1);
		if (!func_26(51))
		{
			func_16("RE_REWARD", 1, 0, 4000, 10000, func_19(), 0, 138, 0);
			func_15(51);
		}
		if (func_14(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_13(iParam0, bParam1) != 322)
		{
			func_7(func_13(iParam0, bParam1), vLocal_46.x, vLocal_46.y);
		}
		Global_111626 = bParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_6(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_6(7);
			}
			else
			{
				func_6(1);
			}
		}
	}
}

void func_6(int iParam0)
{
	Global_111624 = iParam0;
}

void func_7(int iParam0, var uParam1, var uParam2)
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
		func_11((891 + iParam0), 1, -1, 1);
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
		func_8();
	}
}

void func_8()
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
		func_10(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_9() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_3();
				}
			}
		}
	}
}

int func_9()
{
	return Global_30768;
}

int func_10(int iParam0, bool bParam1)
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

int func_11(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_12();
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

int func_12()
{
	return Global_1312745;
}

int func_13(int iParam0, bool bParam1)
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

bool func_14(int iParam0)
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

void func_15(int iParam0)
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

void func_16(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_17(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_17(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_18();
	}
}

void func_18()
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

int func_19()
{
	func_20();
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

void func_20()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_24(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_23(UNK_0x16F2683693E537C9());
			if (func_22(iVar0) && (!func_21(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_22(Global_111638.f_2358.f_539.f_4321))
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

bool func_21(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_22(int iParam0)
{
	return iParam0 < 3;
}

int func_23(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_24(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_24(int iParam0)
{
	if (func_22(iParam0))
	{
		return func_25(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_25(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_26(int iParam0)
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

void func_27(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), bParam1);
}

int func_28(int iParam0)
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

int func_29()
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, UNK_0xBB0808A181D4745C(), 64);
	iVar16 = func_30(Var0);
	return iVar16;
}

int func_30(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

bool func_31()
{
	return true;
}

bool func_32(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (UNK_0xC844350D5D58C99A((*iParam0)[iVar0]))
		{
			if (!UNK_0xEB6A8945D1AC98A1((*iParam0)[iVar0]))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_33(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (UNK_0xEB6A8945D1AC98A1((*iParam0)[iVar0]))
		{
			func_41(iLocal_220[iVar0]);
		}
		iVar0++;
	}
}

void func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (iLocal_254 == 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_51 - 1))
		{
			if (!UNK_0xEB6A8945D1AC98A1((*iParam0)[iVar2]))
			{
				iVar0++;
				iVar1 = iVar2;
			}
			iVar2++;
		}
		if (iVar0 == 1)
		{
			if (!UNK_0xEB6A8945D1AC98A1((*iParam0)[iVar1]))
			{
				UNK_0xAFF39FB306F8E232((*iParam0)[iVar1], 0, true);
				UNK_0xB35CCEC0D4946813((*iParam0)[iVar1], 0);
				iLocal_254 = 1;
			}
		}
	}
}

bool func_35(struct<6> Param0, bool bParam6, int iParam7)
{
	switch (iLocal_252)
	{
		case 0:
			if (func_36(iLocal_251, 0))
			{
				if (!func_75())
				{
					if (func_88() == 0)
					{
						func_45(&uLocal_55, "REGIAU", "REGIN_MONEYM", 4, 0, 0, 0);
						iLocal_252 = 1;
					}
					else if (func_88() == 1)
					{
						func_45(&uLocal_55, "REGIAU", "REGIN_MONEYF", 4, 0, 0, 0);
						iLocal_252 = 1;
					}
					else if (func_88() == 2)
					{
						func_45(&uLocal_55, "REGIAU", "REGIN_MONEYT", 4, 0, 0, 0);
						iLocal_252 = 1;
					}
				}
				iLocal_50 = 0;
			}
			break;
		case 1:
			if (!UNK_0xEB6A8945D1AC98A1(bParam6))
			{
				if (UNK_0xD1960163A3042274(bParam6, 242628503) == 7 || UNK_0x12DE711B1C681E9E(bParam6, UNK_0x16F2683693E537C9(), 8f, 8f, 8f, 0, 1, 0))
				{
					if (!func_75())
					{
						func_45(&uLocal_55, "REGIAU", "REGIN_KILL", 4, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
						bLocal_54 = true;
						iLocal_252 = 4;
					}
				}
			}
			break;
		case 2:
			if (!UNK_0xEB6A8945D1AC98A1((*iParam7)[2]))
			{
				if (!UNK_0xEB6A8945D1AC98A1((*iParam7)[0]))
				{
					UNK_0xDD353D0E9C789D0E(&iLocal_50);
					UNK_0x93D47DFD0AE94949(false, 700);
					UNK_0x96167B03C5A77156(false, vLocal_229[0 /*3*/], 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					UNK_0xE655C47E46F9A7E4(false, fLocal_239[0], 0);
					UNK_0x3E8E48829F3C7624(false, Param0.f_5, "sit_down_idle_01", vLocal_229[0 /*3*/], 0f, 0f, fLocal_239[0], 1000f, -4f, -1, 1, false, 2, 0);
					UNK_0x75ABDC5F81978924(iLocal_50);
					UNK_0x78ADC381772E3D54((*iParam7)[0], iLocal_50);
					UNK_0xF82EA857DA10E0CD(&iLocal_50);
					iLocal_50 = 0;
				}
				if (!UNK_0xEB6A8945D1AC98A1((*iParam7)[1]))
				{
					UNK_0xDD353D0E9C789D0E(&iLocal_50);
					UNK_0x93D47DFD0AE94949(false, 200);
					UNK_0x96167B03C5A77156(false, vLocal_229[1 /*3*/], 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
					UNK_0x75ABDC5F81978924(iLocal_50);
					UNK_0x78ADC381772E3D54((*iParam7)[1], iLocal_50);
					UNK_0xF82EA857DA10E0CD(&iLocal_50);
					iLocal_50 = 0;
				}
				if (!UNK_0xEB6A8945D1AC98A1((*iParam7)[2]))
				{
					UNK_0xDD353D0E9C789D0E(&iLocal_50);
					UNK_0x93D47DFD0AE94949(false, 1000);
					UNK_0xA8CC11FF8D2962D4(false, (*iParam7)[0], 0f, -0.5f, 0f, 1f, 10000, 1036831949 /* Float: 0.1f */, 1);
					UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
					UNK_0x75ABDC5F81978924(iLocal_50);
					UNK_0x78ADC381772E3D54((*iParam7)[2], iLocal_50);
					UNK_0xF82EA857DA10E0CD(&iLocal_50);
					iLocal_50 = 0;
				}
			}
			iLocal_252 = 3;
			break;
		case 3:
			if (!func_75())
			{
				if (func_88() == 0)
				{
					func_45(&uLocal_55, "REGIAU", "REGIN_REALM", 4, 0, 0, 0);
				}
				else if (func_88() == 1)
				{
					func_45(&uLocal_55, "REGIAU", "REGIN_REALF", 4, 0, 0, 0);
				}
				else if (func_88() == 2)
				{
					func_45(&uLocal_55, "REGIAU", "REGIN_REALT", 4, 0, 0, 0);
				}
				iLocal_252 = 4;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_36(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = UNK_0x1C0640BA9A7327B3();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

void func_37(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!UNK_0xE4EDC4B0E92C078B(iLocal_220[iVar0]))
		{
			if (!UNK_0xEB6A8945D1AC98A1((*iParam0)[iVar0]))
			{
				iLocal_220[iVar0] = func_38((*iParam0)[iVar0], 1, 145);
				UNK_0xE2F0767314863BD8((*iParam0)[iVar0], 1, 0);
			}
		}
		iVar0++;
	}
}

int func_38(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_39(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_39(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_40(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_40(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_40(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_40(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_41(int iParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(iParam0))
	{
		UNK_0x142CC44DB769B57E(&iParam0);
	}
}

void func_42(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!UNK_0xEB6A8945D1AC98A1((*iParam0)[iVar0]))
		{
			UNK_0x6C3AE6E278DB3D0E((*iParam0)[iVar0], UNK_0x16F2683693E537C9(), 0, 16);
			UNK_0xAFF39FB306F8E232((*iParam0)[iVar0], 0, true);
			UNK_0xFADC0A217229F6B5((*iParam0)[iVar0], true);
		}
		iVar0++;
	}
	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		UNK_0x8FB4E06C94958F84(bParam1);
		UNK_0x8BE3D040D15AEA1D(bParam1, -1);
		UNK_0xFADC0A217229F6B5(bParam1, true);
	}
}

void func_43()
{
	Global_19671 = 0;
	func_44();
}

void func_44()
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

bool func_45(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_59(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_46(sParam2, iParam3, 0);
}

int func_46(char* sParam0, int iParam1, bool bParam2)
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
					func_44();
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
		if (func_58(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_57();
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
				func_56();
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
				if (func_55())
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
			if (func_54())
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
			func_53();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_52();
		func_47();
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
		func_44();
	}
	return 0;
}

void func_47()
{
	if (!func_48())
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

bool func_48()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_51())
	{
		return false;
	}
	if (func_49(UNK_0xD803B885F5E47A62()))
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

bool func_49(int iParam0)
{
	return func_50(iParam0, 20);
}

bool func_50(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_51()
{
	return -1;
}

void func_52()
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

void func_53()
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

bool func_54()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_55()
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

void func_56()
{
	if (func_21(14))
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
		Global_19486 = func_88();
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

void func_57()
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

bool func_58(bool bParam0, int iParam1)
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

void func_59(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_60(bool bParam0, int iParam1)
{
	switch (iLocal_255)
	{
		case 0:
			if (!UNK_0xEB6A8945D1AC98A1(bParam0))
			{
				if ((UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1272.878f, -1532.84f, 36.4104f, 1339.482f, -1623.636f, 71.4792f, 105.1875f, 0, true, 0) && !UNK_0x03068588A1FCED1A(bParam0)) || UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam0, 15f, 15f, 15f, 0, 1, 0))
				{
					if (!func_114())
					{
						func_64(1);
					}
					if (UNK_0xE4EDC4B0E92C078B(iLocal_224))
					{
						func_41(iLocal_224);
					}
					if (!UNK_0xE4EDC4B0E92C078B(iLocal_225))
					{
						iLocal_225 = func_38(bParam0, 0, 145);
						UNK_0xF2D30B8ACAF12A39(iLocal_225, false);
					}
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if (!UNK_0x838876B8BA050A8A(UNK_0x16F2683693E537C9()))
						{
							if (UNK_0x9C66D99E63E8E24C(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)) < 5f)
							{
								if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam0, 10f, 10f, 10f, 0, 1, 0))
								{
									UNK_0x8FB4E06C94958F84(bParam0);
									UNK_0xDD353D0E9C789D0E(&iLocal_50);
									UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), -1);
									UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 20000, 1024, 2);
									UNK_0x75ABDC5F81978924(iLocal_50);
									UNK_0x78ADC381772E3D54(bParam0, iLocal_50);
									UNK_0xF82EA857DA10E0CD(&iLocal_50);
									if (UNK_0xE4EDC4B0E92C078B(iLocal_225))
									{
										UNK_0xF2D30B8ACAF12A39(iLocal_225, true);
									}
									UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
									if (UNK_0x7069CC4DE1EA3FAA(bParam0, UNK_0x16F2683693E537C9(), 45f))
									{
										func_43();
										SYSTEM::WAIT(0);
										func_45(&uLocal_55, "REGIAU", "REGIN_LR1F", 4, 0, 0, 0);
										iLocal_255 = 1;
									}
								}
							}
							else if (iLocal_246 == 0)
							{
								func_45(&uLocal_55, "REGIAU", "REGIN_CAR", 4, 0, 0, 0);
								if (!UNK_0xEB6A8945D1AC98A1(bParam0))
								{
									UNK_0xDD353D0E9C789D0E(&iLocal_50);
									UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 20000, 1024, 2);
									UNK_0xC6EB89C59F2AF6B8(false, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", 2f, -2f, -1, 49, false, 0, 0, 0);
									UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), -1);
									UNK_0x75ABDC5F81978924(iLocal_50);
									UNK_0x78ADC381772E3D54(bParam0, iLocal_50);
									UNK_0xF82EA857DA10E0CD(&iLocal_50);
								}
								iLocal_246 = 1;
							}
						}
						else
						{
							func_43();
							SYSTEM::WAIT(0);
							func_45(&uLocal_55, "REGIAU", "REGIN_POLICE", 4, 0, 0, 0);
							if (!UNK_0xEB6A8945D1AC98A1(bParam0))
							{
								UNK_0xA3BF0AA5A2608191(bParam0);
								UNK_0xF3268524E9BE6D6E(bParam0, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
								UNK_0xFADC0A217229F6B5(bParam0, true);
								bLocal_247 = true;
							}
						}
					}
					else if (!UNK_0xEB6A8945D1AC98A1(bParam0))
					{
						if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam0, 8f, 8f, 8f, 0, 1, 0))
						{
							UNK_0xDD353D0E9C789D0E(&iLocal_50);
							UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), -1);
							UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 20000, 1024, 2);
							UNK_0x75ABDC5F81978924(iLocal_50);
							UNK_0x78ADC381772E3D54(bParam0, iLocal_50);
							UNK_0xF82EA857DA10E0CD(&iLocal_50);
							if (UNK_0x7069CC4DE1EA3FAA(bParam0, UNK_0x16F2683693E537C9(), 45f))
							{
								func_43();
								SYSTEM::WAIT(0);
								func_45(&uLocal_55, "REGIAU", "REGIN_LR1F", 4, 0, 0, 0);
								iLocal_255 = 1;
							}
						}
					}
				}
			}
			if (!UNK_0xEB6A8945D1AC98A1((*iParam1)[2]))
			{
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0, true, 0) && !func_63())
				{
					iLocal_255 = 3;
				}
				else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0, true, 0))
				{
					func_62(bParam0, iParam1);
				}
			}
			break;
		case 1:
			if (!UNK_0xEB6A8945D1AC98A1((*iParam1)[2]))
			{
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0, true, 0) && !func_63())
				{
					iLocal_255 = 3;
				}
				else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0, true, 0))
				{
					func_62(bParam0, iParam1);
				}
			}
			if (!UNK_0xEB6A8945D1AC98A1(bParam0) && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				UNK_0x28F5E4DA506AC0CA(vLocal_243, 13f, 0, 0, 0, 0, false, 0);
				UNK_0x8FB4E06C94958F84(bParam0);
				if (!UNK_0xEB6A8945D1AC98A1(bParam0))
				{
					UNK_0xDD353D0E9C789D0E(&iLocal_50);
					UNK_0x96167B03C5A77156(false, vLocal_243, 2f, 20000, 0.25f, 0, 32.2195f);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 1024, 2);
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), -1);
					UNK_0x75ABDC5F81978924(iLocal_50);
					UNK_0x78ADC381772E3D54(bParam0, iLocal_50);
					UNK_0xF82EA857DA10E0CD(&iLocal_50);
					iLocal_50 = 0;
					if ((UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6) && UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam0, 6f, 6f, 6f, 0, 1, 0)) && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
					}
				}
				iLocal_255 = 2;
			}
			break;
		case 2:
			if (!UNK_0xEB6A8945D1AC98A1(bParam0) && !func_75())
			{
				if (func_45(&uLocal_55, "REGIAU", "REGIN_LR1G", 4, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_255 = 3;
				}
			}
			break;
		case 3:
			if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0, true, 0) && !func_63())
			{
				func_61(bParam0);
				iLocal_255 = 4;
			}
			else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0, true, 0))
			{
				func_62(bParam0, iParam1);
			}
			else if (!UNK_0xEB6A8945D1AC98A1(bParam0))
			{
				if (SYSTEM::TIMERA() > 8000 && UNK_0x5A91F08DF773C39D(bParam0, vLocal_243, 3f, 3f, 3f, false, true, 0))
				{
					if (UNK_0x7069CC4DE1EA3FAA(bParam0, UNK_0x16F2683693E537C9(), 60f))
					{
						if (func_164())
						{
							UNK_0xC6EB89C59F2AF6B8(bParam0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_a", 2f, -2f, -1, 48, false, 0, 0, 0);
						}
						else
						{
							UNK_0xC6EB89C59F2AF6B8(bParam0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 0, false, 0, 0, 0);
						}
						func_45(&uLocal_55, "REGIAU", "REGIN_HERE", 4, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
					}
				}
				if ((UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6) && UNK_0xE115347EA59F7B86(bParam0, UNK_0x16F2683693E537C9())) && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0))
					{
						func_62(bParam0, iParam1);
					}
				}
			}
			break;
		case 4:
			if (!UNK_0xEB6A8945D1AC98A1(bParam0))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_50);
				UNK_0x93D47DFD0AE94949(false, 500);
				UNK_0x96167B03C5A77156(false, vLocal_243, 2f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
				UNK_0x75ABDC5F81978924(iLocal_50);
				UNK_0xF82EA857DA10E0CD(&iLocal_50);
				iLocal_50 = 0;
			}
			func_76();
			SYSTEM::WAIT(0);
			if (!func_75())
			{
				func_45(&uLocal_55, "REGIAU", "REGIN_THRT", 4, 0, 0, 0);
				iLocal_255 = 5;
			}
			break;
		case 5:
			func_37(iParam1);
			func_41(iLocal_225);
			bLocal_256 = true;
			return true;
	}
	return true;
}

void func_61(bool bParam0)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		UNK_0xA3BF0AA5A2608191(bParam0);
		UNK_0xDD353D0E9C789D0E(&iLocal_50);
		UNK_0x96167B03C5A77156(false, 1286.037f, -1623.207f, 53.2297f, 2f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
		UNK_0x8BE3D040D15AEA1D(false, -1);
		UNK_0x75ABDC5F81978924(iLocal_50);
		UNK_0x78ADC381772E3D54(bParam0, iLocal_50);
		UNK_0xF82EA857DA10E0CD(&iLocal_50);
		iLocal_50 = 0;
		UNK_0x25C5402CC10F76CD(bParam0, true);
		func_41(iLocal_225);
	}
}

void func_62(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!UNK_0xEB6A8945D1AC98A1((*iParam1)[iVar0]) && !UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			if ((UNK_0xE115347EA59F7B86((*iParam1)[iVar0], UNK_0x16F2683693E537C9()) || UNK_0x8B674081D2209D07(UNK_0xD803B885F5E47A62(), (*iParam1)[iVar0])) || UNK_0xE115347EA59F7B86(bParam0, UNK_0x16F2683693E537C9()))
			{
				func_76();
				if (!UNK_0xEB6A8945D1AC98A1((*iParam1)[iVar0]))
				{
					UNK_0xA3BF0AA5A2608191((*iParam1)[iVar0]);
					UNK_0xDD353D0E9C789D0E(&iLocal_50);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 1000, 2048, 2);
					UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
					UNK_0x75ABDC5F81978924(iLocal_50);
					UNK_0x78ADC381772E3D54((*iParam1)[iVar0], iLocal_50);
					UNK_0xF82EA857DA10E0CD(&iLocal_50);
					UNK_0xFADC0A217229F6B5((*iParam1)[iVar0], true);
				}
				if (!UNK_0xEB6A8945D1AC98A1(bParam0))
				{
					UNK_0xA3BF0AA5A2608191(bParam0);
					UNK_0xDD353D0E9C789D0E(&iLocal_50);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 1000, 2048, 2);
					UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
					UNK_0x75ABDC5F81978924(iLocal_50);
					UNK_0x78ADC381772E3D54(bParam0, iLocal_50);
					UNK_0xF82EA857DA10E0CD(&iLocal_50);
					UNK_0xFADC0A217229F6B5(bParam0, true);
				}
				iLocal_248 = 1;
			}
		}
		else
		{
			func_76();
			if (!UNK_0xEB6A8945D1AC98A1((*iParam1)[iVar0]))
			{
				UNK_0xA3BF0AA5A2608191((*iParam1)[iVar0]);
				UNK_0xDD353D0E9C789D0E(&iLocal_50);
				UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 1000, 2048, 2);
				UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
				UNK_0x75ABDC5F81978924(iLocal_50);
				UNK_0x78ADC381772E3D54((*iParam1)[iVar0], iLocal_50);
				UNK_0xF82EA857DA10E0CD(&iLocal_50);
				UNK_0xFADC0A217229F6B5((*iParam1)[iVar0], true);
			}
			if (!UNK_0xEB6A8945D1AC98A1(bParam0))
			{
				UNK_0xA3BF0AA5A2608191(bParam0);
				UNK_0xDD353D0E9C789D0E(&iLocal_50);
				UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 1000, 2048, 2);
				UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
				UNK_0x75ABDC5F81978924(iLocal_50);
				UNK_0x78ADC381772E3D54(bParam0, iLocal_50);
				UNK_0xF82EA857DA10E0CD(&iLocal_50);
				UNK_0xFADC0A217229F6B5(bParam0, true);
			}
			iLocal_248 = 1;
		}
		iVar0++;
	}
}

bool func_63()
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
		{
			if (UNK_0xF94CCE643440E68B(UNK_0x16F2683693E537C9(), joaat("RHINO")))
			{
				return true;
			}
		}
	}
	if (UNK_0xC7BC967711A8A063(UNK_0x16F2683693E537C9()) || UNK_0x838876B8BA050A8A(UNK_0x16F2683693E537C9()))
	{
		return true;
	}
	return false;
}

int func_64(bool bParam0)
{
	if (func_68())
	{
		Global_111628 = 1;
		Global_111625 = UNK_0x1C0640BA9A7327B3();
		if (func_14(Global_111627))
		{
			func_65(0);
		}
		UNK_0x974531784BE14213(1, "RE_TITLE");
		if (bParam0 && func_14(Global_111627))
		{
			UNK_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_65(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_66(func_67(iParam0), -1);
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
					func_66(func_67(iParam0), -1);
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
					func_66(func_67(iParam0), -1);
					Global_111638.f_24990.f_4++;
					UNK_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_66(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_67(int iParam0)
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

bool func_68()
{
	switch (func_69(&Global_30827, 0, 5, 0, UNK_0x0D0A574C76D769AC()))
	{
		case 1:
			return true;
		case 0:
			return true;
	}
	return false;
}

int func_69(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_73(0))
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
		if (!func_71(iParam2))
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
			func_70(uParam0, iParam4);
		}
	}
	return 2;
}

void func_70(var uParam0, int iParam1)
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

bool func_71(int iParam0)
{
	return func_72(iParam0, Global_41431);
}

int func_72(int iParam0, int iParam1)
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

bool func_73(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_71(iParam0))
	{
		return false;
	}
	return true;
}

bool func_74(vector3 vParam0, int iParam3)
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vParam0) > IntToFloat(iParam3))
		{
			return true;
		}
	}
	return false;
}

bool func_75()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_76()
{
	Global_19671 = 0;
	func_77();
}

void func_77()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

bool func_78(bool bParam0, int iParam1)
{
	if (UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
		{
			return true;
		}
	}
	else if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
	{
		if ((UNK_0x65BC0B7172CA52DD(bParam0) - UNK_0x7F6DC62EA9922664(bParam0)) > iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_79(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;

	fParam6 = fParam6;
	if (!bParam5)
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_80((*iParam0)[iVar0], uParam2, uParam3, bParam4, bParam5, fParam6, iParam7))
			{
				*uParam1 = iVar0;
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_80(bool bParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	bVar2 = false;
	if (!UNK_0x437347B10A200C4B(bParam0, 0) && !bParam4)
	{
		if (UNK_0xE3614539F8B5C807(bParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0) && !bParam4)
		{
			vVar3 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			vVar6 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
			fVar9 = SYSTEM::VDIST(vVar3, vVar6);
			if (!UNK_0xEAE0D21A50E6C7F4(bParam3, 3))
			{
				if (func_78(bParam0, iParam6))
				{
					func_85("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_85("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_84(bParam0);
					return true;
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bParam3, true))
			{
				if (fVar1 < 20f)
				{
				}
				if (UNK_0xD3DCEC81D13AAFB1(vVar6, fParam5, true))
				{
					func_85("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_85("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_84(bParam0);
					return true;
				}
				if (UNK_0x723EE7F83DF1497D(vVar6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), vVar6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_85("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_85("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_84(bParam0);
					return true;
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bParam3, 2))
			{
				fVar0 = UNK_0xF428D43975FB0E0E(UNK_0x16F2683693E537C9());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
				{
					if (UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0) || UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0))
					{
						if (fVar9 < fVar0)
						{
							if (UNK_0xF649DD3BF44195C7(bParam0, UNK_0x16F2683693E537C9(), 17))
							{
								func_85("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_85("	aggro Ped knows player is pointing gun\n");
								func_81("		lockOnTimer = ", *uParam2);
								func_85("\n");
								func_81("		time since not LockedOn = ", (UNK_0x1C0640BA9A7327B3() - iLocal_45));
								func_85("\n");
								bVar2 = true;
								if (UNK_0x1C0640BA9A7327B3() > (iLocal_45 + *uParam2))
								{
									func_85("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_84(bParam0);
									return true;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bParam3, false))
			{
				if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
				{
					func_85("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_85("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_84(bParam0);
					return true;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_45 = UNK_0x1C0640BA9A7327B3();
	}
	return false;
}

void func_81(bool bParam0, int iParam1)
{
	func_83(bParam0);
	func_82(iParam1);
}

void func_82(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_83(bool bParam0)
{
	if (UNK_0x7F8A39872A07D2CE(bParam0, bParam0))
	{
	}
}

void func_84(bool bParam0)
{
	UNK_0x0FB22E2FED7BCC7E(bParam0);
}

void func_85(bool bParam0)
{
	func_83(bParam0);
}

int func_86()
{
	int iVar0;

	iVar0 = UNK_0x09AC81E49EA267F7(false, 5);
	if (iVar0 == 0)
	{
		return joaat("WEAPON_COMBATPISTOL");
	}
	else if (iVar0 == 1)
	{
		return joaat("WEAPON_COMBATPISTOL");
	}
	else if (iVar0 == 2)
	{
		return joaat("WEAPON_PISTOL");
	}
	else if (iVar0 == 3)
	{
		return joaat("WEAPON_PISTOL");
	}
	else
	{
		return joaat("WEAPON_PISTOL");
	}
	return joaat("WEAPON_PISTOL");
}

void func_87(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

int func_88()
{
	func_20();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_89(bool bParam0)
{
	if (bParam0)
	{
	}
}

bool func_90(int iParam0)
{
	if (UNK_0x338D6FF72D84D90F())
	{
		if (func_91(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			if (func_21(6) || func_21(7))
			{
				return true;
			}
			else
			{
				return func_91(3);
			}
			break;
		case 2:
			return true;
		case 3:
			if (func_71(5))
			{
				if (func_92(4))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_92(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_88();
				if (!func_22(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_100()) || Global_110685) || Global_30770) || func_99()) || func_58(8, -1)) || func_98()) || func_97()) || func_96()) || func_95()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_100()) || Global_30770) || func_99()) || func_58(8, -1)) || func_96()) || func_98()) || func_97()) || func_95()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_100()) || Global_110685) || Global_30770) || func_99()) || func_58(8, -1)) || func_96()) || func_98()) || func_97()) || func_95()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_100()) || Global_110685) || Global_30770) || func_99()) || func_58(8, -1)) || func_98()) || func_97()) || func_95()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_100() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_58(8, -1)) || func_95()) || func_94()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_58(8, -1) || func_98()) || func_97()) || func_94()) || func_93())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_100()) || Global_30770) || func_99()) || func_58(8, -1)) || func_97()) || func_96()) || func_95()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_100()) || func_97()) || Global_110685) || Global_30770) || func_99()) || Global_42596) || func_58(8, -1)) || func_96()) || func_94()) || func_95()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_100()) || Global_110685) || Global_30770) || func_99()) || func_58(8, -1)) || func_96()) || func_94()) || func_98()) || func_97()) || func_95())
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

bool func_93()
{
	return Global_98783.f_1;
}

bool func_94()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_95()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_96()
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

bool func_97()
{
	return Global_98796.f_346 > 0;
}

bool func_98()
{
	return Global_98796.f_345 > 0;
}

bool func_99()
{
	return Global_1312877;
}

bool func_100()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_101()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_46) < (75f * 75f))
		{
			return true;
		}
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_112())
		{
			return false;
		}
	}
	if (func_108())
	{
		return true;
	}
	if (func_102(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_102(float fParam0, bool bParam1)
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
		if (func_22(func_88()))
		{
			iVar36 = func_19();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 2) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 3))
				{
					func_103(iVar32, &Var0);
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

void func_103(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_104(uParam1, "Abigail1", func_106(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		case 1:
			func_104(uParam1, "Abigail2", func_106(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		case 2:
			func_104(uParam1, "Barry1", func_106(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		case 3:
			func_104(uParam1, "Barry2", func_106(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		case 4:
			func_104(uParam1, "Barry3", func_106(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		case 5:
			func_104(uParam1, "Barry3A", func_106(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 6:
			func_104(uParam1, "Barry3C", func_106(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 7:
			func_104(uParam1, "Barry4", func_106(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_105(iParam0), 0, 0);
			break;
		case 8:
			func_104(uParam1, "Dreyfuss1", func_106(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		case 9:
			func_104(uParam1, "Epsilon1", func_106(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_105(iParam0), 0, 0);
			break;
		case 10:
			func_104(uParam1, "Epsilon2", func_106(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		case 11:
			func_104(uParam1, "Epsilon3", func_106(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_105(iParam0), 0, 0);
			break;
		case 12:
			func_104(uParam1, "Epsilon4", func_106(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_105(iParam0), 0, 0);
			break;
		case 13:
			func_104(uParam1, "Epsilon5", func_106(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		case 14:
			func_104(uParam1, "Epsilon6", func_106(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 15:
			func_104(uParam1, "Epsilon7", func_106(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_105(iParam0), 0, 0);
			break;
		case 16:
			func_104(uParam1, "Epsilon8", func_106(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		case 17:
			func_104(uParam1, "Extreme1", func_106(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 18:
			func_104(uParam1, "Extreme2", func_106(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 19:
			func_104(uParam1, "Extreme3", func_106(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 20:
			func_104(uParam1, "Extreme4", func_106(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		case 21:
			func_104(uParam1, "Fanatic1", func_106(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_105(iParam0), 1, 0);
			break;
		case 22:
			func_104(uParam1, "Fanatic2", func_106(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_105(iParam0), 1, 0);
			break;
		case 23:
			func_104(uParam1, "Fanatic3", func_106(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_105(iParam0), 0, 1);
			break;
		case 24:
			func_104(uParam1, "Hao1", func_106(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_105(iParam0), 0, 1);
			break;
		case 25:
			func_104(uParam1, "Hunting1", func_106(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 26:
			func_104(uParam1, "Hunting2", func_106(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 27:
			func_104(uParam1, "Josh1", func_106(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		case 28:
			func_104(uParam1, "Josh2", func_106(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		case 29:
			func_104(uParam1, "Josh3", func_106(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		case 30:
			func_104(uParam1, "Josh4", func_106(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		case 31:
			func_104(uParam1, "Maude1", func_106(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 32:
			func_104(uParam1, "Minute1", func_106(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 33:
			func_104(uParam1, "Minute2", func_106(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 34:
			func_104(uParam1, "Minute3", func_106(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 35:
			func_104(uParam1, "MrsPhilips1", func_106(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 0);
			break;
		case 36:
			func_104(uParam1, "MrsPhilips2", func_106(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 0);
			break;
		case 37:
			func_104(uParam1, "Nigel1", func_106(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		case 38:
			func_104(uParam1, "Nigel1A", func_106(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		case 39:
			func_104(uParam1, "Nigel1B", func_106(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_105(iParam0), 1, 1);
			break;
		case 40:
			func_104(uParam1, "Nigel1C", func_106(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_105(iParam0), 1, 1);
			break;
		case 41:
			func_104(uParam1, "Nigel1D", func_106(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_105(iParam0), 1, 1);
			break;
		case 42:
			func_104(uParam1, "Nigel2", func_106(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		case 43:
			func_104(uParam1, "Nigel3", func_106(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		case 44:
			func_104(uParam1, "Omega1", func_106(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		case 45:
			func_104(uParam1, "Omega2", func_106(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		case 46:
			func_104(uParam1, "Paparazzo1", func_106(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 47:
			func_104(uParam1, "Paparazzo2", func_106(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 48:
			func_104(uParam1, "Paparazzo3", func_106(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		case 49:
			func_104(uParam1, "Paparazzo3A", func_106(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 50:
			func_104(uParam1, "Paparazzo3B", func_106(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 51:
			func_104(uParam1, "Paparazzo4", func_106(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		case 52:
			func_104(uParam1, "Rampage1", func_106(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_105(iParam0), 0, 0);
			break;
		case 54:
			func_104(uParam1, "Rampage3", func_106(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		case 55:
			func_104(uParam1, "Rampage4", func_106(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		case 56:
			func_104(uParam1, "Rampage5", func_106(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_105(iParam0), 0, 0);
			break;
		case 53:
			func_104(uParam1, "Rampage2", func_106(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		case 57:
			func_104(uParam1, "TheLastOne", func_106(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 58:
			func_104(uParam1, "Tonya1", func_106(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 59:
			func_104(uParam1, "Tonya2", func_106(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 60:
			func_104(uParam1, "Tonya3", func_106(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 61:
			func_104(uParam1, "Tonya4", func_106(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		case 62:
			func_104(uParam1, "Tonya5", func_106(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_104(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
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

int func_105(int iParam0)
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

struct<2> func_106(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_107(iParam0) };
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

struct<2> func_107(int iParam0)
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

bool func_108()
{
	if (func_111() && !func_112())
	{
		return true;
	}
	if (func_110() && func_109())
	{
		return true;
	}
	return false;
}

bool func_109()
{
	return Global_111356 > 0;
}

bool func_110()
{
	if (Global_95666 != -1)
	{
		return true;
	}
	return false;
}

bool func_111()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_112()
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

bool func_113()
{
	if (!func_71(5))
	{
		return true;
	}
	if (func_108())
	{
		return true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_112())
		{
			return false;
		}
	}
	if (func_102(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_114()
{
	if ((Global_111627 == func_29() && UNK_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return true;
	}
	return false;
}

bool func_115(int iParam0, struct<5> Param1, var uParam6)
{
	int iVar0;

	if (iParam0 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_51 - 1))
		{
			UNK_0x523BCC9DC80CD82F(Param1[iVar0]);
			iVar0++;
		}
		UNK_0x523BCC9DC80CD82F(Param1.f_4);
		UNK_0x3F423BF5B8125A50("random@gang_intimidation@");
		UNK_0x13896FDECC859926("RE28_OS");
		if (!UNK_0xB87F6CF6E5628C67(Param1.f_4))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_51 - 1))
		{
			if (!UNK_0xB87F6CF6E5628C67(Param1[iVar0]))
			{
				return false;
			}
			iVar0++;
		}
		if (UNK_0xB4AE0788C1587752("random@gang_intimidation@"))
		{
			return true;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_51 - 1))
		{
			UNK_0x71199B01895C6202(Param1[iVar0]);
			iVar0++;
		}
		UNK_0x71199B01895C6202(Param1.f_4);
	}
	return false;
}

void func_116(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_118(iParam0);
	UNK_0x24D1A8A556F3252A(0);
	UNK_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_117();
}

void func_117()
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

void func_118(int iParam0)
{
	Global_111627 = iParam0;
}

bool func_119(vector3 vParam0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_29();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_151())
		{
			return false;
		}
	}
	vLocal_46 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_112())
			{
				return false;
			}
		}
		if (!Global_111638.f_9080)
		{
			return false;
		}
		if (func_4(0))
		{
			return false;
		}
		if (func_108())
		{
			return false;
		}
		if (func_150())
		{
			return false;
		}
		if (Global_111627 != -1)
		{
			return false;
		}
		if (func_22(func_88()))
		{
			if (func_102(100f, 1) != -1)
			{
				return false;
			}
		}
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !bParam6)
		{
			if ((vVar1.z - vLocal_46.z) > 50f)
			{
				return false;
			}
		}
		if (!func_149(iParam3))
		{
			return false;
		}
		if (func_22(func_88()))
		{
			if (func_148(func_88()) == 4 || func_148(func_88()) == 5)
			{
				return false;
			}
		}
		if (func_22(func_88()))
		{
			if (!func_147(iParam3, bParam4, 145))
			{
				return false;
			}
		}
		if (!func_146(Global_111638.f_24990.f_43[iParam3]))
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
		if (func_145())
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
		if (!func_92(4))
		{
			return false;
		}
		if (!func_71(5))
		{
			return false;
		}
		if (func_144(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_144(0, 0))
		{
			return false;
		}
		if (Global_30914)
		{
			return false;
		}
		if (func_149(30) && !func_144(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_22(func_88()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111638.f_2358.f_539.f_2300[iVar4 /*3*/] };
				bVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_143(bVar8))
				{
					if (func_121(iVar4))
					{
						if (!func_120(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar5) < (210f * 210f))
							{
								if (func_88() != iVar4)
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

bool func_120(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_121(int iParam0)
{
	bool bVar0;

	bVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_122(bVar0);
}

int func_122(bool bParam0)
{
	return func_123(bParam0, 1);
}

int func_123(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_143(bParam0))
	{
		return 0;
	}
	func_124(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_124(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_125(func_136(), bParam0, uParam1, uParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_125(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_135(bParam0, bParam1))
	{
		iVar0 = func_134(bParam1);
		iVar1 = func_132(bParam0);
		iVar2 = (func_132(bParam0) - func_132(bParam1));
		iVar3 = (func_134(bParam0) - func_134(bParam1));
		iVar4 = (func_131(bParam0) - func_131(bParam1));
		iVar5 = (func_130(bParam0) - func_130(bParam1));
		iVar6 = (func_129(bParam0) - func_129(bParam1));
		iVar7 = (func_128(bParam0) - func_128(bParam1));
	}
	else
	{
		iVar0 = func_134(bParam0);
		iVar1 = func_132(bParam1);
		iVar2 = (func_132(bParam1) - func_132(bParam0));
		iVar3 = (func_134(bParam1) - func_134(bParam0));
		iVar4 = (func_131(bParam1) - func_131(bParam0));
		iVar5 = (func_130(bParam1) - func_130(bParam0));
		iVar6 = (func_129(bParam1) - func_129(bParam0));
		iVar7 = (func_128(bParam1) - func_128(bParam0));
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
		iVar4 = (iVar4 + func_127(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_126(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_126(float fParam0, float fParam1, float fParam2)
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

int func_127(bool bParam0, int iParam1)
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

int func_128(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_129(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_130(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_131(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

int func_132(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_133(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_133(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_134(bool bParam0)
{
	return (bParam0 && 15);
}

bool func_135(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_143(bParam1) || !func_143(bParam0))
	{
		return true;
	}
	bVar0 = func_132(bParam0);
	bVar1 = func_132(bParam1);
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
	bVar0 = func_131(bParam0);
	bVar1 = func_131(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_130(bParam0);
	bVar1 = func_130(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_129(bParam0);
	bVar1 = func_129(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_128(bParam0);
	bVar1 = func_128(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	return false;
}

bool func_136()
{
	var uVar0;

	func_142(&uVar0, UNK_0x4460E481B9E33ADA());
	func_141(&uVar0, UNK_0x8D199E381D262EEF());
	func_140(&uVar0, UNK_0xD8A54335F18763BA());
	func_139(&uVar0, UNK_0x972A296334C9D57B());
	func_138(&uVar0, UNK_0x118229AD063C3C1D());
	func_137(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_137(bool bParam0, int iParam1)
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

void func_138(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_139(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_134(*bParam0);
	iVar1 = func_132(*bParam0);
	if (iParam1 < 1 || iParam1 > func_127(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_140(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_141(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_142(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_143(bool bParam0)
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
	iVar0 = func_128(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_129(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_130(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_132(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_134(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_131(bParam0);
	if (iVar5 < 1 || iVar5 > func_127(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_144(int iParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], bParam1))
	{
		return true;
	}
	return false;
}

bool func_145()
{
	func_56();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

bool func_146(bool bParam0)
{
	return func_135(func_136(), bParam0);
}

bool func_147(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_88();
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

int func_148(int iParam0)
{
	if (!func_22(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_149(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_151())
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

bool func_150()
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

bool func_151()
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

void func_152(struct<6> Param0, int iParam6, int iParam7, bool bParam8)
{
	int iVar0;

	if (iParam6 == 0)
	{
	}
	if (bLocal_249)
	{
		UNK_0xB547E3FFEB27073E();
		UNK_0xE342F209E49C5314(vLocal_243 - Vector(10f, 10f, 10f), vLocal_243 + Vector(10f, 10f, 10f), true, 1);
		UNK_0x51B096AAC60548C1(1f);
		func_41(iLocal_220[0]);
		func_41(iLocal_220[1]);
		func_41(iLocal_220[2]);
		iVar0 = 0;
		while (iVar0 <= (iLocal_51 - 1))
		{
			if (!UNK_0xEB6A8945D1AC98A1((*iParam7)[iVar0]))
			{
			}
			iVar0++;
		}
		if (!UNK_0xEB6A8945D1AC98A1(bParam8))
		{
			UNK_0x11AD11297DC58CC7(bParam8, false);
		}
		func_89(0);
		func_115(0, Param0);
	}
	func_153(-1);
	UNK_0x10FAF14A60A0DBE1();
}

void func_153(int iParam0)
{
	char cVar0[64];

	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_114())
	{
		func_157(iParam0);
		UNK_0x974531784BE14213(0, 0);
		Global_111629 = UNK_0x1C0640BA9A7327B3();
		func_156(30000);
		StringCopy(&cVar0, func_155(Global_111627, 1), 64);
		if (func_28(Global_111627) > 0)
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
	func_154(&Global_30827);
	Global_111628 = 0;
	func_118(-1);
}

void func_154(var uParam0)
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

char* func_155(int iParam0, bool bParam1)
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

void func_156(int iParam0)
{
	Global_41982 = (UNK_0x1C0640BA9A7327B3() + iParam0);
}

void func_157(int iParam0)
{
	func_158(iParam0, 0, func_163(iParam0));
}

void func_158(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<16> Var1;

	bVar0 = func_136();
	func_161(&bVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_160(iParam0, &bVar0);
	Var1 = { func_159(&bVar0) };
}

struct<16> func_159(bool bParam0)
{
	struct<16> Var0;
	bool bVar16;

	StringCopy(&Var0, "", 64);
	bVar16 = func_130(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_129(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_128(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "  ", 64);
	bVar16 = func_131(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "/", 64);
	bVar16 = func_134(*bParam0);
	if (bVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_132(*bParam0), 64);
	return Var0;
}

void func_160(int iParam0, bool bParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *bParam1;
}

void func_161(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_132(*bParam0);
	bVar1 = func_134(*bParam0);
	iVar2 = func_131(*bParam0);
	iVar3 = func_130(*bParam0);
	iVar4 = func_129(*bParam0);
	iVar5 = func_128(*bParam0);
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
	iVar6 = func_127(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_127(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_162(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_162(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_142(bParam0, iParam1);
	func_141(bParam0, iParam2);
	func_140(bParam0, iParam3);
	func_138(bParam0, bParam5);
	func_139(bParam0, iParam4);
	func_137(bParam0, iParam6);
}

int func_163(int iParam0)
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

bool func_164()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return true;
	}
	return false;
}

