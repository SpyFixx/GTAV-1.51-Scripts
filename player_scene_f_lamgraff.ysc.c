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
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_64 = { 0f, 0f, 0f };
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 16;
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
	int iLocal_237 = 0;
	bool bLocal_238 = false;
	bool bLocal_239 = false;
	bool bLocal_240 = false;
	vector3 vLocal_241 = { 0f, 0f, 0f };
	bool bLocal_244 = false;
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
	char[] cLocal_261[8] = 0;
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
	char cLocal_277[64] = "";
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	float fLocal_295 = 0f;
	float fLocal_296 = 0f;
	float fLocal_297 = 0f;
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
	vLocal_61 = { 0f, 0f, 0f };
	vLocal_64 = { 0f, 0f, 0f };
	iLocal_67 = -1;
	iLocal_71 = 318;
	iLocal_237 = 1;
	iLocal_293 = -1;
	fLocal_295 = 0f;
	fLocal_296 = 1f;
	fLocal_297 = 1f;
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		func_54();
	}
	SYSTEM::WAIT(0);
	func_40();
	func_37();
	func_33();
	while (iLocal_237 && func_29(2, 0))
	{
		SYSTEM::WAIT(0);
		switch (iLocal_70)
		{
			case 0:
				if (func_27())
				{
					iLocal_70 = 1;
				}
				break;
			case 1:
				if (func_26())
				{
					iLocal_70 = 2;
				}
				break;
			case 2:
				if (func_2())
				{
					iLocal_70 = 3;
				}
				break;
			case 3:
				func_1();
				break;
		}
	}
	func_54();
}

void func_1()
{
	iLocal_237 = 0;
}

bool func_2()
{
	float fVar0;

	if (!UNK_0xEB6A8945D1AC98A1(Global_98465))
	{
		if (UNK_0xC844350D5D58C99A(bLocal_239))
		{
			if (UNK_0xB4ECF989E2C1DAC8(Global_98465, &uLocal_245, &cLocal_277, 3))
			{
				if (UNK_0x4E861BC5B1EDA7BD(Global_98465))
				{
					UNK_0x5B8BE59CB25E8968(Global_98465, 0, 0);
					UNK_0xA3BF0AA5A2608191(Global_98465);
					return false;
				}
				fVar0 = UNK_0xA45992A6CE82FB43(iLocal_293);
				if (!bLocal_238)
				{
					if (func_3(&uLocal_72, "PRSAUD", "FRAS_IG_7x", 3, 0, 0, 0))
					{
						bLocal_238 = true;
					}
				}
				if (fVar0 < 0.2812f)
				{
					if (iLocal_294 != 0)
					{
						UNK_0xF7E25143642732EA(iLocal_294, 0);
						iLocal_294 = 0;
					}
				}
				else if (fVar0 < 0.4778f)
				{
					if (iLocal_294 == 0)
					{
						iLocal_294 = UNK_0xC1879030EB463216("scr_lamgraff_paint_spray", bLocal_239, 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
						UNK_0x02D205CBD211ED4F(iLocal_294, fLocal_295, fLocal_296, fLocal_297, false);
					}
				}
				else if (fVar0 < 0.5745f)
				{
					if (iLocal_294 != 0)
					{
						UNK_0xF7E25143642732EA(iLocal_294, 0);
						iLocal_294 = 0;
					}
				}
				else if (fVar0 < 0.7712f)
				{
					if (iLocal_294 == 0)
					{
						iLocal_294 = UNK_0xC1879030EB463216("scr_lamgraff_paint_spray", bLocal_239, 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
						UNK_0x02D205CBD211ED4F(iLocal_294, fLocal_295, fLocal_296, fLocal_297, false);
					}
				}
				else if (iLocal_294 != 0)
				{
					UNK_0xF7E25143642732EA(iLocal_294, 0);
					iLocal_294 = 0;
				}
			}
			else if (iLocal_294 != 0)
			{
				UNK_0xF7E25143642732EA(iLocal_294, 0);
				iLocal_294 = 0;
			}
		}
	}
	else
	{
		func_54();
		return false;
	}
	return false;
}

int func_3(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_25(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_4(sParam2, iParam3, 0);
}

int func_4(char* sParam0, int iParam1, bool bParam2)
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
					func_24();
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
		if (func_23(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_22();
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
				func_14();
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
				if (func_13())
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
			if (func_12())
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
			func_11();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_10();
		func_5();
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
		func_24();
	}
	return 0;
}

void func_5()
{
	if (!func_6())
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

bool func_6()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_9())
	{
		return false;
	}
	if (func_7(UNK_0xD803B885F5E47A62()))
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

bool func_7(int iParam0)
{
	return func_8(iParam0, 20);
}

bool func_8(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_9()
{
	return -1;
}

void func_10()
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

void func_11()
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

bool func_12()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_13()
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

void func_14()
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
		Global_19486 = func_15();
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

var func_15()
{
	func_16();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_16()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_19(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_18(UNK_0x16F2683693E537C9());
			if (func_17(iVar0) && (!func_21(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_17(Global_111638.f_2358.f_539.f_4321))
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

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return func_20(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_20(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_21(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_22()
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

bool func_23(bool bParam0, int iParam1)
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

void func_24()
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

void func_25(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_26()
{
	float fVar0;

	if (!UNK_0xEB6A8945D1AC98A1(Global_98465))
	{
		if (UNK_0xC844350D5D58C99A(bLocal_239))
		{
			if (UNK_0xB4ECF989E2C1DAC8(Global_98465, &uLocal_245, &cLocal_261, 3))
			{
				if (UNK_0x4E861BC5B1EDA7BD(Global_98465))
				{
					UNK_0x5B8BE59CB25E8968(Global_98465, 0, 0);
					UNK_0xA3BF0AA5A2608191(Global_98465);
					return false;
				}
				fVar0 = UNK_0xA45992A6CE82FB43(Global_96074);
				if (fVar0 < 0.3812f)
				{
					if (iLocal_294 != 0)
					{
						UNK_0xF7E25143642732EA(iLocal_294, 0);
						iLocal_294 = 0;
					}
				}
				else if (fVar0 < 0.4778f)
				{
					if (iLocal_294 == 0)
					{
						iLocal_294 = UNK_0xC1879030EB463216("scr_lamgraff_paint_spray", bLocal_239, 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
						UNK_0x02D205CBD211ED4F(iLocal_294, fLocal_295, fLocal_296, fLocal_297, false);
					}
				}
				else if (fVar0 < 0.5745f)
				{
					if (iLocal_294 != 0)
					{
						UNK_0xF7E25143642732EA(iLocal_294, 0);
						iLocal_294 = 0;
					}
				}
				else if (fVar0 < 0.6712f)
				{
					if (iLocal_294 == 0)
					{
						iLocal_294 = UNK_0xC1879030EB463216("scr_lamgraff_paint_spray", bLocal_239, 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
						UNK_0x02D205CBD211ED4F(iLocal_294, fLocal_295, fLocal_296, fLocal_297, false);
					}
				}
				else if (fVar0 < 1f)
				{
					if (iLocal_294 != 0)
					{
						UNK_0xF7E25143642732EA(iLocal_294, 0);
						iLocal_294 = 0;
					}
				}
				else
				{
					UNK_0xA3BF0AA5A2608191(Global_98465);
					if (!UNK_0x69DF961355195C3C(iLocal_293))
					{
						iLocal_293 = UNK_0xE9744DB7B8CA6965(vLocal_241, 0f, 0f, bLocal_244, 2);
						UNK_0xC90224D9E95E5E3A(iLocal_293, true);
					}
					UNK_0x915804B434753CBD(Global_98465, iLocal_293, &uLocal_245, &cLocal_277, 8f, -8f, 257, 0, 8f, 0);
					return true;
				}
			}
			else
			{
				if (iLocal_294 != 0)
				{
					UNK_0xF7E25143642732EA(iLocal_294, 0);
					iLocal_294 = 0;
				}
				if (func_3(&uLocal_72, "PRSAUD", "FRAS_IG_7x", 3, 0, 0, 0))
				{
					UNK_0xA3BF0AA5A2608191(Global_98465);
					UNK_0xE972B33144E77B35(Global_98465, 16);
					if (!UNK_0x69DF961355195C3C(iLocal_293))
					{
						iLocal_293 = UNK_0xE9744DB7B8CA6965(vLocal_241, 0f, 0f, bLocal_244, 2);
						UNK_0xC90224D9E95E5E3A(iLocal_293, true);
					}
					UNK_0x915804B434753CBD(Global_98465, iLocal_293, &uLocal_245, &cLocal_277, 8f, -8f, 257, 0, 8f, 0);
					return true;
				}
			}
		}
	}
	else
	{
		func_54();
		return false;
	}
	return false;
}

bool func_27()
{
	if (!func_28())
	{
		return true;
	}
	return false;
}

bool func_28()
{
	if (!UNK_0x991B1F0980C62628() || UNK_0x19EC8D83154D7CC1() == 3)
	{
		return false;
	}
	if (UNK_0x00A15D69BCAA5267() > 8)
	{
		if (UNK_0x00A15D69BCAA5267() != 11)
		{
			return false;
		}
		if (UNK_0x00A15D69BCAA5267() == 11)
		{
			if (UNK_0x94EFC97F8A693855() > 0)
			{
				if (UNK_0x192DE42720995A6E() > 100)
				{
					return false;
				}
			}
		}
	}
	return true;
}

int func_29(int iParam0, bool bParam1)
{
	vector3 vVar0;
	float fVar3;

	if (UNK_0x991B1F0980C62628())
	{
		if (UNK_0x19EC8D83154D7CC1() != 3)
		{
			if (UNK_0x00A15D69BCAA5267() <= 2 && UNK_0x00A15D69BCAA5267() != 1)
			{
				return 1;
			}
		}
	}
	if (!UNK_0x991B1F0980C62628())
	{
		if (func_21(14))
		{
			return 0;
		}
		if (UNK_0x8F7DE34FFB67592B())
		{
			return 0;
		}
		if (!func_31(iParam0, func_32()))
		{
			return 0;
		}
		if (UNK_0xC844350D5D58C99A(bParam1))
		{
			vVar0 = { UNK_0x68F4C0EC296D3901(bParam1, false) };
			fVar3 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar0);
			if (fVar3 > 250f)
			{
				if (!UNK_0x437347B10A200C4B(bParam1, 0))
				{
					if (!UNK_0x0A059E0DB9253280(bParam1))
					{
						return 0;
					}
				}
				else if (!UNK_0x8E28E832BEAC3DCE(vVar0, 1.5f))
				{
					return 0;
				}
			}
		}
		else if (bParam1 == func_30(Global_98465) && bParam1 != 0)
		{
			Global_98465 = 0;
		}
	}
	return 1;
}

bool func_30(var uParam0)
{
	return uParam0;
}

bool func_31(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_32()
{
	func_16();
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

void func_33()
{
	if (!UNK_0x991B1F0980C62628())
	{
		if (UNK_0x757EF87A33649210())
		{
			func_36();
		}
		return;
	}
	if (UNK_0x19EC8D83154D7CC1() == 3)
	{
		func_36();
		return;
	}
	func_34();
	if (Global_98467 > 0)
	{
		return;
	}
	UNK_0x36B03FE02FE012AB();
}

void func_34()
{
	func_35((Global_98467 - 1));
}

void func_35(int iParam0)
{
	Global_98467 = iParam0;
}

void func_36()
{
	func_35(0);
}

void func_37()
{
	UNK_0x523BCC9DC80CD82F(bLocal_240);
	UNK_0x9E5E60D8C63FD9D1();
	while (!UNK_0xC844350D5D58C99A(Global_98465) || !UNK_0xB87F6CF6E5628C67(bLocal_240))
	{
		SYSTEM::WAIT(0);
	}
	UNK_0x73270B3C9CC833FD(Global_98465, true, 1);
	if (UNK_0xC844350D5D58C99A(Global_98465))
	{
		if (!UNK_0xEB6A8945D1AC98A1(Global_98465))
		{
			UNK_0x93D47DFD0AE94949(Global_98465, -1);
		}
		UNK_0x6DF7BF67E86AAE86(Global_98465, joaat("PLAYER"));
	}
	UNK_0x73270B3C9CC833FD(Global_98465, true, 1);
	UNK_0x4E885A246A9D983A(Global_98465, 132, true);
	UNK_0x5E678B691C852774(Global_98465, 16);
	func_39(&Global_98465, Global_93748);
	func_38(&uLocal_72, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
	bLocal_239 = UNK_0x7707E48765093646(bLocal_240, UNK_0x68F4C0EC296D3901(Global_98465, true), true, true, false);
	UNK_0x9F528B1B53FBC5D9(bLocal_239, Global_98465, UNK_0x4A089F2B762B8D33(Global_98465, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
}

void func_38(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_39(var uParam0, bool bParam1)
{
	UNK_0x25C5402CC10F76CD(*uParam0, false);
	UNK_0x4E885A246A9D983A(*uParam0, 20, true);
	UNK_0x5E678B691C852774(*uParam0, 16);
	if (bParam1 != joaat("NO_RELATIONSHIP"))
	{
		UNK_0x6DF7BF67E86AAE86(*uParam0, bParam1);
	}
}

void func_40()
{
	char[] cVar0[8];
	struct<109> Var8;
	struct<97> Var117;
	char[] cVar237[8];
	var uVar253;
	var uVar254;

	iLocal_71 = Global_98147;
	func_46(iLocal_71, &vLocal_241, &bLocal_244, &cVar0);
	bLocal_240 = joaat("PROP_CS_SPRAY_CAN");
	Var8.f_1 = -1;
	Var8.f_17 = 4;
	Var8.f_17.f_8 = 4;
	Var8.f_17.f_13 = 4;
	Var8.f_17.f_18 = 4;
	Var8.f_17.f_24 = 4;
	Var8.f_17.f_29 = 4;
	Var8.f_17.f_34 = 4;
	Var8.f_62 = 8;
	Var8.f_96.f_7 = 21;
	Var8.f_96.f_8 = 6;
	Var117.f_1 = -1;
	Var117.f_17 = 4;
	Var117.f_17.f_8 = 4;
	Var117.f_17.f_13 = 4;
	Var117.f_17.f_18 = 4;
	Var117.f_17.f_24 = 4;
	Var117.f_17.f_29 = 4;
	Var117.f_17.f_34 = 4;
	Var117.f_62 = 8;
	Var117.f_96.f_7 = 21;
	Var117.f_96.f_8 = 6;
	Var8 = 0;
	Var8.f_2 = iLocal_71;
	Var8.f_3 = Global_96222.f_45;
	func_43(Var8, &Var117);
	func_41(iLocal_71, &uLocal_245, &cVar237, &cLocal_261, &uVar253, &uVar254);
	StringCopy(&cLocal_277, "Lamar_tagging_EXIT_LOOP_LAMAR", 64);
}

bool func_41(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, var uParam5)
{
	*uParam4 = 9;
	*uParam5 = 8;
	switch (iParam0)
	{
		case 77:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM", 64);
			StringCopy(sParam2, "BED_LOOP_Amanda", 64);
			StringCopy(sParam3, "BED_REACT_Amanda", 64);
			return true;
		case 78:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM2", 64);
			StringCopy(sParam2, "BED_LOOP_Amanda", 64);
			StringCopy(sParam3, "BED_EXIT_Amanda", 64);
			return true;
		case 79:
			func_42(sParam1, sParam2, sParam3, "SWITCH@MICHAEL@SITTING", "IDLE", "EXIT_FORWARD");
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
		case 86:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SOFA", 64);
			StringCopy(sParam2, "BASE_Jimmy", 64);
			StringCopy(sParam3, "EXIT_Jimmy", 64);
			return true;
		case 94:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "LOOP_Amanda", 64);
			StringCopy(sParam3, "EXIT_Amanda", 64);
			return true;
		case 122:
			StringCopy(sParam1, "SWITCH@MICHAEL@ARGUE_WITH_AMANDA", 64);
			StringCopy(sParam2, "argue_with_amanda_loop_amanda", 64);
			StringCopy(sParam3, "argue_with_amanda_exit_amanda", 64);
			return true;
		case 98:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMANDA_EXITS_CAR", 64);
			StringCopy(sParam2, "000606_02_MICS1_5_AMANDA_EXITS_CAR_IDLE_AMA", 64);
			StringCopy(sParam3, "000606_02_MICS1_5_AMANDA_EXITS_CAR_EXIT_AMA", 64);
			return true;
		case 150:
			StringCopy(sParam1, "SWITCH@MICHAEL@RONEX_IG_5_P2", 64);
			StringCopy(sParam2, "BASE_RON", 64);
			StringCopy(sParam3, "RONEX_IG5_P2_RON", 64);
			return true;
		case 170:
			StringCopy(sParam1, "SWITCH@MICHAEL@OPENS_DOOR_FOR_AMA", 64);
			StringCopy(sParam2, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_IDLE_AMA", 64);
			StringCopy(sParam3, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_EXIT_AMA", 64);
			return true;
		case 171:
			StringCopy(sParam1, "SWITCH@MICHAEL@DROPPING_OFF_JMY", 64);
			StringCopy(sParam2, "001839_02_MICS3_20_DROPPING_OFF_JMY_IDLE_JMY", 64);
			StringCopy(sParam3, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_JMY", 64);
			return true;
		case 172:
			StringCopy(sParam1, "SWITCH@MICHAEL@TRACY_EXITS_CAR", 64);
			StringCopy(sParam2, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_IDLE_TRA", 64);
			StringCopy(sParam3, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_TRA", 64);
			return true;
		case 163:
			StringCopy(sParam1, "SWITCH@MICHAEL@GETS_READY", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_GETS_READY_IDLE_AMA", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_EXIT_AMA", 64);
			*uParam5 |= 262144;
			return true;
		case 151:
			StringCopy(sParam1, "SWITCH@MICHAEL@RESTAURANT", 64);
			StringCopy(sParam2, "001510_02_GC_MICS3_IG_1_BASE_AMANDA", 64);
			StringCopy(sParam3, "001510_02_GC_MICS3_IG_1_EXIT_AMANDA", 64);
			return true;
		case 156:
			StringCopy(sParam1, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
			StringCopy(sParam2, "AROUND_THE_TABLE_SELFISH_BASE_Jimmy", 64);
			StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_Jimmy", 64);
			return true;
		case 152:
			StringCopy(sParam1, "SWITCH@MICHAEL@LOUNGE_CHAIRS", 64);
			StringCopy(sParam2, "001523_01_MICS3_9_LOUNGE_CHAIRS_IDLE_AMA", 64);
			StringCopy(sParam3, "001523_01_MICS3_9_LOUNGE_CHAIRS_EXIT_AMA", 64);
			*uParam5 |= 262144;
			return true;
		case 158:
			StringCopy(sParam1, "SWITCH@MICHAEL@PROSTITUTE", 64);
			StringCopy(sParam2, "BASE_HOOKER", 64);
			StringCopy(sParam3, "EXIT_HOOKER", 64);
			return true;
		case 167:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SET_W_JMY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "001513_03_GC_MICS3_IG_4_ON_SET_W_JMY_EXIT_JMY", 64);
			return true;
		case 169:
			StringCopy(sParam1, "SWITCH@MICHAEL@GAMING_W_JMY", 64);
			StringCopy(sParam2, "001518_02_MICS3_11_GAMING_W_JMY_IDLE_JMY", 64);
			StringCopy(sParam3, "001518_02_MICS3_11_GAMING_W_JMY_EXIT_JMY", 64);
			return true;
		case 155:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMA_TENNIS", 64);
			StringCopy(sParam2, "001833_01_MICS3_18_AMA_TENNIS_IDLE_AMA", 64);
			StringCopy(sParam3, "001833_01_MICS3_18_AMA_TENNIS_EXIT_AMA", 64);
			return true;
		case 203:
		case 206:
		case 207:
			if (func_41(205, sParam1, sParam2, sParam3, uParam4, uParam5))
			{
				return true;
			}
			break;
		case 204:
			if (func_41(205, sParam1, sParam2, sParam3, uParam4, uParam5))
			{
				return true;
			}
			break;
		case 205:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE_ROT", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT_ROT", 64);
			return true;
		case 196:
			StringCopy(sParam1, "SWITCH@FRANKLIN@TANISHA_ARGUE", 64);
			StringCopy(sParam2, "BASE_Tanisha", 64);
			StringCopy(sParam3, "Tanisha_Argue_Tanisha", 64);
			return true;
		case 215:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BYE_TAXI", 64);
			StringCopy(sParam2, "001938_01_FRAS_V2_7_BYE_TAXI_IDLE_GIRL", 64);
			StringCopy(sParam3, "001938_01_FRAS_V2_7_BYE_TAXI_EXIT_GIRL", 64);
			return true;
		case 221:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PICKUP_LINE", 64);
			StringCopy(sParam2, "base_Hooker", 64);
			StringCopy(sParam3, "switch_ped_Hooker", 64);
			return true;
		case 218:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P1", 64);
			StringCopy(sParam2, "gang_taunt_loop_lamar", 64);
			StringCopy(sParam3, "gang_taunt_exit_lamar", 64);
			return true;
		case 219:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "gang_taunt_with_lamar_loop_lamar", 64);
			StringCopy(sParam3, "gang_taunt_with_lamar_exit_lamar", 64);
			return true;
		case 220:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P5", 64);
			StringCopy(sParam2, "fras_ig_6_p5_loop_lamar", 64);
			StringCopy(sParam3, "fras_ig_6_p5_exit_lamar", 64);
			return true;
		case 225:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "fras_ig_10_p3_loop_lamar", 64);
			StringCopy(sParam3, "fras_ig_10_p3_exit_lamar", 64);
			return true;
		case 193:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "exit_dispensary_outro_ped_f_a", 64);
			return true;
		case 192:
			StringCopy(sParam1, "SWITCH@FRANKLIN@002110_04_MAGD_3_WEED_EXCHANGE", 64);
			StringCopy(sParam2, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			StringCopy(sParam3, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			return true;
		case 236:
			StringCopy(sParam1, "SWITCH@TREVOR@BAR", 64);
			StringCopy(sParam2, "LOOP_Bartender", 64);
			StringCopy(sParam3, "EXIT_Bartender", 64);
			return true;
		case 237:
			StringCopy(sParam1, "SWITCH@TREVOR@CHASE_STRIPPERS", 64);
			StringCopy(sParam2, "LOOP_BOUNCER", 64);
			StringCopy(sParam3, "EXIT_BOUNCER", 64);
			return true;
		case 289:
			func_42(sParam1, sParam2, sParam3, "SWITCH@MICHAEL@PIER", "pier_lean_smoke_idle", "pier_lean_smoke_idle");
			return true;
		case 262:
			StringCopy(sParam1, "SWITCH@TREVOR@KO_NEIGHBOUR", 64);
			StringCopy(sParam2, "001500_03_TRVS_19_KO_NEIGHBOUR_LOOP_NBR", 64);
			StringCopy(sParam3, "001500_03_TRVS_19_KO_NEIGHBOUR_EXIT_NBR", 64);
			return true;
		case 248:
			StringCopy(sParam1, "SWITCH@TREVOR@BLOCK_CAMERA", 64);
			StringCopy(sParam2, "001220_03_GC_TRVS_IG_7_BASE_GENERIC", 64);
			StringCopy(sParam3, "001220_03_GC_TRVS_IG_7_EXIT_GENERIC", 64);
			return true;
		case 249:
			StringCopy(sParam1, "SWITCH@TREVOR@GUITAR_BEATDOWN", 64);
			StringCopy(sParam2, "001370_02_TRVS_8_GUITAR_BEATDOWN_IDLE_BUSKER", 64);
			StringCopy(sParam3, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_BUSKER", 64);
			return true;
		case 292:
		case 295:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_FLOYD", 64);
			StringCopy(sParam3, "Bed_GetUp_1_FLOYD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
		case 293:
		case 294:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_FLOYD", 64);
			StringCopy(sParam3, "Bed_GetUp_2_FLOYD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
		case 299:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_FLOYD", 64);
			StringCopy(sParam3, "Console_Wasnt_Fun_FLOYD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
		case 300:
		case 301:
		case 302:
		case 303:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_FLOYD", 64);
			StringCopy(sParam3, "Console_Get_Along_FLOYD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
		case 296:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_IN_FLOYDS_FACE", 64);
			StringCopy(sParam2, "bear_in_floyds_face_loop_floyd", 64);
			StringCopy(sParam3, "bear_in_floyds_face_exit_floyd", 64);
			return true;
		case 297:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_FLOYDS_FACE_SMELL", 64);
			StringCopy(sParam2, "bear_floyds_face_smell_loop_floyd", 64);
			StringCopy(sParam3, "bear_floyds_face_smell_exit_floyd", 64);
			return true;
		case 298:
			StringCopy(sParam1, "SWITCH@TREVOR@PINEAPPLE", 64);
			StringCopy(sParam2, "Pineapple_LOOP_FLOYD", 64);
			StringCopy(sParam3, "Pineapple_EXIT_FLOYD", 64);
			return true;
	}
	StringCopy(sParam1, "NULL", 64);
	StringCopy(sParam2, "NULL", 64);
	StringCopy(sParam3, "NULL", 64);
	return false;
}

void func_42(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	StringCopy(sParam0, sParam3, 64);
	StringCopy(sParam1, sParam4, 64);
	StringCopy(sParam2, sParam5, 64);
}

int func_43(struct<109> Param0, var uParam109)
{
	uParam109->f_119 = 0;
	switch (Param0.f_2)
	{
		case 0:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1435919172;
			uParam109->f_110 = 1435919172;
			func_45(uParam109);
			uParam109->f_118 = 0;
			return 0;
		case 1:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_45(uParam109);
			uParam109->f_118 = 0;
			return 1;
		case 2:
			*uParam109 = { Global_96855[0 /*109*/] };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_45(uParam109);
			uParam109->f_118 = Global_98443[0];
			return 1;
		case 3:
			*uParam109 = { Global_96855[1 /*109*/] };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_45(uParam109);
			uParam109->f_118 = Global_98443[1];
			return 1;
		case 4:
			*uParam109 = { Global_96855[2 /*109*/] };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_45(uParam109);
			uParam109->f_118 = Global_98443[2];
			return 1;
		case 5:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_45(uParam109);
			uParam109->f_118 = Global_98443[Param0.f_3];
			return 1;
		case 6:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_45(uParam109);
			uParam109->f_118 = Global_98443[Param0.f_3];
			return 1;
		case 7:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_45(uParam109);
			uParam109->f_118 = Global_98443[Param0.f_3];
			return 1;
		case 8:
		case 9:
		case 10:
			*uParam109 = { Param0 };
			uParam109->f_109 = 936589729;
			uParam109->f_110 = 936589729;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 11:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 14:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 13:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 15:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 54:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 55:
			*uParam109 = { Param0 };
			uParam109->f_109 = 936589729;
			uParam109->f_110 = 936589729;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 56:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 57:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 12:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = joaat("SCRIPT_TASK_LEAVE_VEHICLE");
			func_44(uParam109, 144, -982327190, -982327190, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 16:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 17:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 18:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 19:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 20:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 22:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 74:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 67:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 58:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 59:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 60:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 25:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 26:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 27:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 28:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 38:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 40:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 42:
		case 43:
		case 44:
		case 45:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1959848946;
			uParam109->f_110 = -1959848946;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 47:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 49:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 48:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -1794415470;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 50:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 51:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 52:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 66:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 61:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 62:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 63:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 69:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 64:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 65:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 234:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 316:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 315:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 75:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = -235832601;
			func_44(uParam109, 30, -982327190, -982327190, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 76:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = -235832601;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 77:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 17, 1785177548, 1785177548, -0.7035f, -0.0282f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 78:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 17, 1785177548, 1785177548, -3.03f, -0.72f, 0.08f, 168f);
			uParam109->f_118 = 1;
			return 1;
		case 79:
		case 80:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 17, -2017877118, -2017877118, Vector(2.6407f, 8.164f, -14.1564f) + Vector(-1f, 0.03f, -2.16f), (-66f + -56f));
			if (Param0.f_2 == 80)
			{
				func_45(uParam109);
			}
			uParam109->f_118 = 1;
			return 1;
		case 124:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 82:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 84:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 83:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 85:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 291:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 86:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 87:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 88:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 89:
		case 90:
		case 127:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 91:
		case 92:
		case 93:
		case 104:
		case 81:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			if (Param0.f_2 == 92)
			{
				uParam109->f_118 = 1;
			}
			if (Param0.f_2 == 104)
			{
				uParam109->f_118 = 0;
			}
			if (Param0.f_2 == 81)
			{
				func_45(uParam109);
				uParam109->f_118 = 1;
			}
			return 1;
		case 94:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			if (Param0.f_2 == 94)
			{
				func_44(uParam109, 17, 1785177548, 1785177548, -1.71f, 1.05f, 0f, -138f);
			}
			uParam109->f_118 = 1;
			return 1;
		case 95:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 96:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 134:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 108:
		case 109:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 41:
		case 112:
		case 113:
		case 123:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 150:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 20, 1785177548, 1785177548, 0.98f, 0.8017f, -0.42f, -180f);
			uParam109->f_118 = 1;
			return 1;
		case 118:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 119:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 120:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 114:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 105:
		case 106:
		case 107:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -2017877118;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 98:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 17, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 99:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_44(uParam109, 15, -982327190, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 100:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_44(uParam109, 15, -982327190, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 101:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_44(uParam109, 14, -982327190, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 102:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_44(uParam109, 14, -982327190, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 103:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 121:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 122:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 17, 1785177548, 1785177548, -2.04f, -0.15f, 0f, 14.4f);
			uParam109->f_118 = 1;
			return 1;
		case 125:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 115:
		case 116:
		case 117:
		case 97:
		case 162:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 110:
		case 111:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 131:
		case 132:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 126:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 128:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 129:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 130:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 133:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 151:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 17, 1785177548, 1785177548, -1.71f, 1.05f, 0f, -138f);
			uParam109->f_118 = 1;
			return 1;
		case 152:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 17, 1785177548, 1785177548, 1.1779f, 2.4276f, 0f, 162.1022f);
			uParam109->f_118 = 1;
			return 1;
		case 153:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_45(uParam109);
			return 1;
		case 154:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_45(uParam109);
			return 1;
		case 155:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 17, 1785177548, 1785177548, UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f, UNK_0x79833B02DBD2A244(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
		case 156:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 14, 1785177548, 1785177548, 0.3427f, 1.1592f, 1.0351f, 139.912f);
			uParam109->f_118 = 1;
			return 1;
		case 157:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 158:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 144, 1785177548, 1785177548, UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f, UNK_0x79833B02DBD2A244(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
		case 159:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_45(uParam109);
			return 1;
		case 160:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_45(uParam109);
			return 1;
		case 161:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 163:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 17, 1785177548, 1785177548, -3.03f, -0.72f, 0.08f, 168f);
			uParam109->f_118 = 1;
			return 1;
		case 164:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_45(uParam109);
			return 1;
		case 165:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 166:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 167:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 14, -982327190, 1785177548, -0.8472f, 0.155f, 0f, 152.556f);
			uParam109->f_118 = 1;
			return 1;
		case 168:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 169:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 14, 1785177548, 1785177548, -0.3577f, -0.8968f, -0.0003f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 170:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 17, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 171:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 14, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 172:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 15, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 173:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 174:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_45(uParam109);
			uParam109->f_118 = 0;
			return 1;
	}
	switch (Param0.f_2)
	{
		case 175:
		case 176:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_45(uParam109);
			return 1;
		case 177:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_45(uParam109);
			return 1;
		case 178:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_45(uParam109);
			return 1;
		case 179:
		case 180:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_45(uParam109);
			return 1;
		case 181:
		case 182:
		case 183:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_45(uParam109);
			return 1;
		case 192:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 144, 1785177548, 1785177548, 1f, 1f, 0f, 0f);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
		case 193:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 144, -982327190, 1785177548, 4.2943f, -6.7858f, 0f, -133.5332f);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
		case 194:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_45(uParam109);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
		case 195:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_45(uParam109);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
		case 198:
		case 199:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 200:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 201:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 202:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 184:
		case 185:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 186:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 187:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 188:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 189:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 190:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 191:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 196:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 43, 1785177548, 1785177548, UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f, UNK_0x79833B02DBD2A244(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
		case 197:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 203:
		case 206:
		case 207:
		case 204:
		case 205:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 144, 1785177548, 1785177548, 3.4381f, -0.8269f, 0f, -87.6612f);
			if (Param0.f_2 != 205)
			{
				uParam109->f_112 = { 3.4381f, -0.8269f, 0f };
				uParam109->f_115 = -87.6612f;
			}
			uParam109->f_118 = 1;
			return 1;
		case 23:
		case 208:
		case 209:
		case 210:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 24:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 211:
		case 213:
		case 216:
		case 217:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 212:
		case 214:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 215:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 144, 1785177548, 1785177548, 3.4381f, -0.8269f, 0f, -87.6612f);
			uParam109->f_118 = 1;
			return 1;
		case 221:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 144, 1785177548, 1785177548, -0.7949f, -0.508f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 222:
		case 223:
		case 224:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 226:
		case 227:
		case 228:
		case 229:
		case 230:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_45(uParam109);
			return 1;
		case 218:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 19, 1785177548, 1785177548, 1.29f, 1.41f, 0f, 57.52f);
			uParam109->f_118 = 1;
			return 1;
		case 219:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 19, 1785177548, 1785177548, 1.29f, 1.41f, 0f, 57.52f);
			uParam109->f_118 = 1;
			return 1;
		case 220:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 19, 1785177548, 1785177548, 0.5504f, -0.2322f, 0f, -9.9741f);
			uParam109->f_118 = 1;
			return 1;
		case 225:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 19, 1785177548, 1785177548, 1.23f, 0.6f, -1f, 34.56f);
			uParam109->f_118 = 1;
			return 1;
		case 231:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_45(uParam109);
			uParam109->f_118 = 0;
			return 1;
		case 232:
		case 233:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 235:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 236:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 144, 1785177548, 1785177548, 1.5033f, 1.2118f, 0f, -78.0449f);
			uParam109->f_118 = 1;
			return 1;
		case 237:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 144, 1785177548, 1785177548, 1.5033f, 1.2118f, 0f, -78.0449f);
			uParam109->f_118 = 1;
			return 1;
		case 238:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 239:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 240:
		case 241:
		case 242:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 273:
		case 274:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 245:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 250:
		case 251:
		case 252:
		case 253:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 243:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 244:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 271:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_45(uParam109);
			return 1;
		case 280:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_45(uParam109);
			return 1;
		case 272:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			uParam109->f_118 = 1;
			func_45(uParam109);
			if (Param0.f_2 == 265)
			{
				uParam109->f_118 = 1;
			}
			if (Param0.f_2 == 268)
			{
				uParam109->f_118 = 0;
			}
			if (Param0.f_2 == 267)
			{
				func_44(uParam109, 144, -982327190, 2106541073, -2.4166f, -0.15f, 0f, -148.7555f);
			}
			if (Param0.f_2 == 266)
			{
				func_44(uParam109, 144, 2106541073, 2106541073, -5.7915f, -11.0439f, 0.67f, -72.589f);
			}
			return 1;
		case 246:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 247:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 263:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 278:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 279:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 264:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 255:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 248:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 144, 1785177548, 1785177548, UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f, UNK_0x79833B02DBD2A244(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
		case 249:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 144, 1785177548, 1785177548, UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f, UNK_0x79833B02DBD2A244(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
		case 281:
		case 282:
		case 283:
		case 284:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = -235832601;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 275:
		case 276:
		case 277:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = -235832601;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 254:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 285:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 256:
		case 257:
		case 258:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 259:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 260:
		case 261:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 286:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 287:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 288:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 262:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 144, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 289:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 144, -2017877118, -2017877118, -3.264f, -14.7895f, 14.1815f, -0.6311f);
			uParam109->f_118 = 1;
			return 1;
		case 290:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 292:
		case 295:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 32, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 293:
		case 294:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 32, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 299:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 32, 1785177548, 1785177548, 0.24f, 0.33f, -0.5f, -11.88f);
			uParam109->f_118 = 1;
			return 1;
		case 300:
		case 301:
		case 302:
		case 303:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 32, 1785177548, 1785177548, 0.24f, 0.33f, -0.5f, -11.88f);
			uParam109->f_118 = 1;
			return 1;
		case 296:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 32, 1785177548, 1785177548, 1.41f, 1.35f, 0f, 168f);
			uParam109->f_118 = 1;
			return 1;
		case 297:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 32, 1785177548, 1785177548, 1.7491f, 0.6423f, 0f, 166.479f);
			uParam109->f_118 = 1;
			return 1;
		case 298:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_44(uParam109, 32, 1785177548, 1785177548, 0.72f, -0.69f, 0f, 172.44f);
			uParam109->f_118 = 1;
			return 1;
		case 304:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 305:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 306:
		case 307:
		case 308:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 309:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 310:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 311:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_45(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 312:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1630799643;
			uParam109->f_110 = 1630799643;
			func_44(uParam109, 144, 474215631, -1519143300, -9.5443f, -3.191f, -0.3f, 180f);
			uParam109->f_118 = 1;
			return 1;
		case 313:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = -982327190;
			func_45(uParam109);
			uParam109->f_118 = 0;
			return 1;
		case 314:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_45(uParam109);
			uParam109->f_118 = 2;
			return 1;
	}
	*uParam109 = { Param0 };
	uParam109->f_109 = 1435919172;
	uParam109->f_110 = 1435919172;
	func_45(uParam109);
	uParam109->f_118 = 0;
	return 0;
}

void func_44(var uParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam7)
{
	uParam0->f_111 = iParam1;
	uParam0->f_116 = iParam2;
	uParam0->f_117 = iParam3;
	uParam0->f_112 = { vParam4 };
	uParam0->f_115 = fParam7;
}

void func_45(var uParam0)
{
	func_44(uParam0, 145, 1435919172, 1435919172, 0f, 0f, 0f, 0f);
}

int func_46(int iParam0, var uParam1, bool bParam2, char* sParam3)
{
	int iVar0;

	if (func_49(iParam0, bParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				func_47(&iVar0);
				if (iVar0 < 5)
				{
					*uParam1 = { Global_93947[iVar0 /*9*/].f_3 };
					*bParam2 = Global_93947[iVar0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				else
				{
					*uParam1 = { Global_93947[0 /*9*/].f_3 };
					*bParam2 = Global_93947[0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				break;
			case 2:
				*uParam1 = { Global_96855[0 /*109*/].f_4 };
				*bParam2 = Global_96855[0 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
			case 3:
				*uParam1 = { Global_96855[1 /*109*/].f_4 };
				*bParam2 = Global_96855[1 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
			case 4:
				*uParam1 = { Global_96855[2 /*109*/].f_4 };
				*bParam2 = Global_96855[2 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
			case 5:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[0 /*3*/] + Vector(-1f, 0f, 0f) };
				*bParam2 = Global_111638.f_2358.f_539.f_2310[0];
				StringCopy(sParam3, "", 32);
				return 1;
			case 6:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[1 /*3*/] + Vector(-1f, 0f, 0f) };
				*bParam2 = Global_111638.f_2358.f_539.f_2310[1];
				StringCopy(sParam3, "", 32);
				return 1;
			case 7:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[2 /*3*/] + Vector(-1f, 0f, 0f) };
				*bParam2 = Global_111638.f_2358.f_539.f_2310[2];
				StringCopy(sParam3, "", 32);
				return 1;
		}
		*uParam1 = { Global_97183[iParam0 /*3*/] };
		return 1;
	}
	return 0;
}

bool func_47(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	vector3 vVar6;
	float fVar9;

	iVar0 = Global_111638.f_2358.f_539.f_4323;
	vVar1 = { Global_111638.f_2358.f_539.f_2300[iVar0 /*3*/] };
	if (func_48(vVar1, 0f, 0f, 0f, 0))
	{
		vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
	}
	*iParam0 = 5;
	fVar4 = 9999999f;
	iVar5 = 0;
	while (iVar5 < 5)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224.f_11[iVar5], false))
		{
			vVar6 = { Global_93947[iVar5 /*9*/].f_3 };
			fVar9 = SYSTEM::VDIST(vVar1, vVar6);
			if (fVar9 > 150f)
			{
				if (fVar9 < fVar4)
				{
					*iParam0 = iVar5;
					fVar4 = fVar9;
				}
			}
		}
		iVar5++;
	}
	return *iParam0 != 5;
}

bool func_48(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_49(int iParam0, bool bParam1, char* sParam2)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	vector3 vVar17;

	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			func_47(&iVar3);
			if (iVar3 < 5)
			{
				*bParam1 = Global_93947[iVar3 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return true;
			}
			else
			{
				*bParam1 = Global_93947[0 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 2:
			*bParam1 = Global_96855[0 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return true;
		case 3:
			*bParam1 = Global_96855[1 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return true;
		case 4:
			*bParam1 = Global_96855[2 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return true;
		case 5:
			*bParam1 = Global_111638.f_2358.f_539.f_2310[0];
			StringCopy(sParam2, func_53(Global_111638.f_2358.f_539.f_2314[0]), 32);
			return true;
		case 6:
			*bParam1 = Global_111638.f_2358.f_539.f_2310[1];
			StringCopy(sParam2, func_53(Global_111638.f_2358.f_539.f_2314[1]), 32);
			return true;
		case 7:
			*bParam1 = Global_111638.f_2358.f_539.f_2310[2];
			StringCopy(sParam2, func_53(Global_111638.f_2358.f_539.f_2314[2]), 32);
			return true;
		case 11:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return true;
			}
			break;
		case 8:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 9:
			return func_49(8, bParam1, sParam2);
		case 10:
			return func_49(8, bParam1, sParam2);
		case 13:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 14:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 15:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 12:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 16:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 17:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 18:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 19:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 20:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 21:
			*bParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 22:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 74:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 23:
			return func_49(208, bParam1, sParam2);
		case 24:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 67:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 25:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 26:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 27:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 28:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 29:
			*bParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 30:
			*bParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 31:
			*bParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 32:
			*bParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 33:
			*bParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 34:
			*bParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 35:
			*bParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 36:
			*bParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 37:
			*bParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 58:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 59:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 60:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 38:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 39:
			*bParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 40:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return true;
			}
			break;
		case 41:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 42:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 43:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 44:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 45:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 46:
			*bParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 47:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 49:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 48:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 124:
			vVar0 = { -803.734f, 168.148f, 76.3542f };
			*bParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 50:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 51:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 52:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 66:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 53:
			*bParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 54:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 55:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 56:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 57:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 61:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 62:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 63:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 68:
			*bParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 69:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 64:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 65:
			if (func_52(iParam0, &vVar0, bParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 70:
			*bParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 71:
			*bParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 72:
			*bParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 73:
			*bParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 234:
			*bParam1 = 122.69f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 316:
			*bParam1 = -60.31f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 315:
			*bParam1 = (41.654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 75:
			*bParam1 = -172.697f;
			StringCopy(sParam2, "", 32);
			return true;
		case 76:
			*bParam1 = (181.8927f - 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 77:
			*bParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 78:
			*bParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 79:
			*bParam1 = 20.353f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 80:
			*bParam1 = (-48.53f + 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 81:
			*bParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return true;
		case 82:
			*bParam1 = -113.748f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 83:
			*bParam1 = -173.748f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 84:
			*bParam1 = 32.7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 85:
			*bParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 86:
			*bParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 87:
			*bParam1 = 166.32f;
			StringCopy(sParam2, "", 32);
			return true;
		case 88:
			*bParam1 = 21f;
			*bParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return true;
		case 89:
			*bParam1 = -84.8108f;
			StringCopy(sParam2, "", 32);
			return true;
		case 90:
			*bParam1 = -90.5046f;
			StringCopy(sParam2, "", 32);
			return true;
		case 91:
			*bParam1 = 105.0795f;
			StringCopy(sParam2, "", 32);
			return true;
		case 92:
			*bParam1 = -54.347f;
			StringCopy(sParam2, "", 32);
			return true;
		case 93:
			*bParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return true;
		case 94:
			*bParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return true;
		case 95:
			*bParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return true;
		case 96:
			*bParam1 = 34.621f;
			StringCopy(sParam2, "", 32);
			return true;
		case 97:
			*bParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return true;
		case 98:
			*bParam1 = (-150.6148f + 0.0095f);
			*bParam1 = (*bParam1 + 0.0004f);
			*bParam1 = (*bParam1 + 0.0015f);
			*bParam1 = (*bParam1 + 0.0002f);
			*bParam1 = (*bParam1 + -0.0009f);
			StringCopy(sParam2, "", 32);
			return true;
		case 99:
			*bParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return true;
		case 100:
			*bParam1 = 84.6073f;
			StringCopy(sParam2, "", 32);
			return true;
		case 101:
			*bParam1 = 249.0753f;
			StringCopy(sParam2, "", 32);
			return true;
		case 102:
			*bParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return true;
		case 103:
			*bParam1 = 143.4931f;
			StringCopy(sParam2, "", 32);
			return true;
		case 104:
			*bParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return true;
		case 105:
			*bParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return true;
		case 106:
			*bParam1 = 63.4995f;
			StringCopy(sParam2, "", 32);
			return true;
		case 107:
			*bParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return true;
		case 108:
			*bParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return true;
		case 109:
			*bParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return true;
		case 110:
			*bParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return true;
		case 111:
			*bParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return true;
		case 112:
			*bParam1 = -162.311f;
			StringCopy(sParam2, "", 32);
			return true;
		case 113:
			*bParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return true;
		case 135:
			*bParam1 = -59.25f;
			StringCopy(sParam2, "", 32);
			return true;
		case 136:
			*bParam1 = 82.254f;
			StringCopy(sParam2, "", 32);
			return true;
		case 137:
			*bParam1 = -152.965f;
			StringCopy(sParam2, "", 32);
			return true;
		case 138:
			*bParam1 = -10.099f;
			StringCopy(sParam2, "", 32);
			return true;
		case 139:
			*bParam1 = 158.5974f;
			StringCopy(sParam2, "", 32);
			return true;
		case 140:
			*bParam1 = 99.18f;
			StringCopy(sParam2, "", 32);
			return true;
		case 141:
			*bParam1 = 218.4774f;
			StringCopy(sParam2, "", 32);
			return true;
		case 142:
			*bParam1 = 125.6193f;
			StringCopy(sParam2, "", 32);
			return true;
		case 143:
			*bParam1 = 142.373f;
			StringCopy(sParam2, "", 32);
			return true;
		case 144:
			*bParam1 = -34.878f;
			StringCopy(sParam2, "", 32);
			return true;
		case 145:
			*bParam1 = -172.419f;
			StringCopy(sParam2, "", 32);
			return true;
		case 146:
			*bParam1 = -107.439f;
			StringCopy(sParam2, "", 32);
			return true;
		case 147:
			*bParam1 = 157.311f;
			StringCopy(sParam2, "", 32);
			return true;
		case 148:
			*bParam1 = -68.812f;
			StringCopy(sParam2, "", 32);
			return true;
		case 149:
			*bParam1 = 4.693f;
			StringCopy(sParam2, "", 32);
			return true;
		case 150:
			*bParam1 = 78.65f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 114:
			*bParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return true;
		case 115:
			*bParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return true;
		case 116:
			*bParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return true;
		case 117:
			*bParam1 = -74.7818f;
			StringCopy(sParam2, "", 32);
			return true;
		case 118:
			*bParam1 = -48.36f;
			StringCopy(sParam2, "", 32);
			return true;
		case 119:
			*bParam1 = 144.178f;
			StringCopy(sParam2, "", 32);
			return true;
		case 120:
			*bParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return true;
		case 121:
			*bParam1 = 101.5f;
			StringCopy(sParam2, "", 32);
			return true;
		case 122:
			*bParam1 = 99.72f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 123:
			*bParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return true;
		case 125:
			*bParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return true;
		case 126:
			*bParam1 = -158.0894f;
			StringCopy(sParam2, "", 32);
			return true;
		case 127:
			*bParam1 = -76.3681f;
			StringCopy(sParam2, "", 32);
			return true;
		case 128:
			*bParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 129:
			*bParam1 = -80.6f;
			StringCopy(sParam2, "", 32);
			return true;
		case 130:
			*bParam1 = -9.1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 131:
			*bParam1 = -86.0894f;
			StringCopy(sParam2, "", 32);
			return true;
		case 132:
			*bParam1 = -161.0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 133:
			*bParam1 = (226.5579f - 270f);
			StringCopy(sParam2, "", 32);
			return true;
		case 134:
			*bParam1 = -33.128f;
			StringCopy(sParam2, "", 32);
			return true;
		case 151:
			*bParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return true;
		case 152:
			*bParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return true;
		case 153:
			*bParam1 = -176.25f;
			StringCopy(sParam2, "", 32);
			return true;
		case 154:
			*bParam1 = -147.192f;
			StringCopy(sParam2, "", 32);
			return true;
		case 155:
			*bParam1 = 59.082f;
			StringCopy(sParam2, "", 32);
			return true;
		case 156:
			*bParam1 = 26.087f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 157:
			*bParam1 = 37.27f;
			StringCopy(sParam2, "", 32);
			return true;
		case 158:
			*bParam1 = -13.8153f;
			StringCopy(sParam2, "", 32);
			return true;
		case 159:
			*bParam1 = -62.5f;
			StringCopy(sParam2, "", 32);
			return true;
		case 160:
			*bParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return true;
		case 161:
			*bParam1 = 86.3776f;
			StringCopy(sParam2, "", 32);
			return true;
		case 162:
			*bParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return true;
		case 163:
			*bParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 164:
			*bParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return true;
		case 165:
			*bParam1 = -144.622f;
			StringCopy(sParam2, "", 32);
			return true;
		case 166:
			*bParam1 = -61.2262f;
			StringCopy(sParam2, "", 32);
			return true;
		case 167:
			*bParam1 = -22.32f;
			StringCopy(sParam2, "", 32);
			return true;
		case 168:
			if (func_50(0, 25, &uVar4, &fVar7))
			{
				*bParam1 = (fVar7 + 222.8314f);
				StringCopy(sParam2, "v_michael", 32);
				return true;
			}
			break;
		case 169:
			*bParam1 = 112.841f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 170:
			*bParam1 = (-103.8158f + 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 171:
			*bParam1 = -28.0926f;
			StringCopy(sParam2, "", 32);
			return true;
		case 173:
			*bParam1 = -0.0301f;
			StringCopy(sParam2, "", 32);
			return true;
		case 172:
			*bParam1 = -30.185f;
			*bParam1 = (*bParam1 + 0.003f);
			StringCopy(sParam2, "", 32);
			return true;
		case 174:
			*bParam1 = 14.98f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
	}
	switch (iParam0)
	{
		case 175:
			*bParam1 = -179.653f;
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 176:
			*bParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 177:
			*bParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 178:
			*bParam1 = -95.4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 179:
			*bParam1 = (-16.0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 180:
			*bParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 181:
			*bParam1 = -86.613f;
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 182:
			*bParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return true;
		case 183:
			*bParam1 = 111.688f;
			StringCopy(sParam2, "", 32);
			return true;
		case 184:
			*bParam1 = 143.7974f;
			StringCopy(sParam2, "", 32);
			return true;
		case 185:
			*bParam1 = 143.792f;
			StringCopy(sParam2, "", 32);
			return true;
		case 186:
			*bParam1 = 4.6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 187:
			*bParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 188:
			*bParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 189:
			*bParam1 = -172.2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 190:
			*bParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 191:
			*bParam1 = -12.5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 196:
			*bParam1 = -1.5f;
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 197:
			*bParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 192:
			*bParam1 = 107.981f;
			StringCopy(sParam2, "", 32);
			return true;
		case 193:
			*bParam1 = 172.9187f;
			StringCopy(sParam2, "", 32);
			return true;
		case 194:
			*bParam1 = -67.608f;
			StringCopy(sParam2, "", 32);
			return true;
		case 195:
			*bParam1 = 74.1158f;
			StringCopy(sParam2, "", 32);
			return true;
		case 198:
			*bParam1 = 1.0411f;
			StringCopy(sParam2, "", 32);
			return true;
		case 199:
			*bParam1 = -152.203f;
			StringCopy(sParam2, "", 32);
			return true;
		case 200:
			*bParam1 = (310.879f - 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 201:
			*bParam1 = 130.879f;
			StringCopy(sParam2, "", 32);
			return true;
		case 202:
			*bParam1 = 35.604f;
			StringCopy(sParam2, "", 32);
			return true;
		case 203:
			*bParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return true;
		case 204:
			*bParam1 = -119.3944f;
			StringCopy(sParam2, "", 32);
			return true;
		case 205:
			*bParam1 = 121.9322f;
			StringCopy(sParam2, "", 32);
			return true;
		case 206:
			*bParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return true;
		case 207:
			*bParam1 = -95.588f;
			StringCopy(sParam2, "", 32);
			return true;
		case 208:
			*bParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return true;
		case 209:
			*bParam1 = 230.78f;
			StringCopy(sParam2, "", 32);
			return true;
		case 210:
			*bParam1 = 165.7751f;
			StringCopy(sParam2, "", 32);
			return true;
		case 211:
			*bParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return true;
		case 212:
			*bParam1 = 1.2709f;
			StringCopy(sParam2, "", 32);
			return true;
		case 213:
			*bParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return true;
		case 214:
			*bParam1 = -117.03f;
			StringCopy(sParam2, "", 32);
			return true;
		case 215:
			*bParam1 = -49.0324f;
			StringCopy(sParam2, "", 32);
			return true;
		case 216:
			*bParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return true;
		case 217:
			*bParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return true;
		case 221:
			*bParam1 = 84.96f;
			StringCopy(sParam2, "", 32);
			return true;
		case 222:
			*bParam1 = -59.3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return true;
		case 223:
			*bParam1 = 43.82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return true;
		case 224:
			return func_49(222, bParam1, sParam2);
		case 226:
			*bParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return true;
		case 227:
			*bParam1 = -14.749f;
			StringCopy(sParam2, "", 32);
			return true;
		case 228:
			*bParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return true;
		case 229:
			*bParam1 = 96.0116f;
			StringCopy(sParam2, "", 32);
			return true;
		case 230:
			*bParam1 = -43.6661f;
			StringCopy(sParam2, "", 32);
			return true;
		case 218:
			*bParam1 = -70.4124f;
			StringCopy(sParam2, "", 32);
			return true;
		case 219:
			*bParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return true;
		case 220:
			*bParam1 = -117.356f;
			StringCopy(sParam2, "", 32);
			return true;
		case 225:
			*bParam1 = -83.8f;
			StringCopy(sParam2, "", 32);
			return true;
		case 231:
			*bParam1 = 350.3382f;
			StringCopy(sParam2, "", 32);
			return true;
		case 232:
			*bParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return true;
		case 233:
			*bParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return true;
		case 235:
			*bParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return true;
		case 236:
			*bParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return true;
		case 237:
			*bParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return true;
		case 238:
			*bParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return true;
		case 239:
			*bParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return true;
		case 240:
			*bParam1 = -4.124f;
			StringCopy(sParam2, "", 32);
			return true;
		case 241:
			*bParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return true;
		case 242:
			*bParam1 = 13.7207f;
			StringCopy(sParam2, "", 32);
			return true;
		case 245:
			*bParam1 = 27.746f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 243:
			*bParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return true;
		case 244:
			*bParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return true;
		case 246:
			*bParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return true;
		case 247:
			*bParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return true;
		case 248:
			*bParam1 = 10.77f;
			StringCopy(sParam2, "", 32);
			return true;
		case 249:
			*bParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 250:
			*bParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return true;
		case 251:
			*bParam1 = -42.8529f;
			StringCopy(sParam2, "", 32);
			return true;
		case 252:
			*bParam1 = 2.6497f;
			StringCopy(sParam2, "", 32);
			return true;
		case 253:
			*bParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return true;
		case 254:
			*bParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return true;
		case 255:
			*bParam1 = 30.24f;
			StringCopy(sParam2, "", 32);
			return true;
		case 264:
			*bParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return true;
		case 265:
			*bParam1 = -144.274f;
			StringCopy(sParam2, "", 32);
			return true;
		case 266:
			*bParam1 = 68.8227f;
			StringCopy(sParam2, "", 32);
			return true;
		case 267:
			*bParam1 = 56.2037f;
			StringCopy(sParam2, "", 32);
			return true;
		case 268:
			*bParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return true;
		case 269:
			*bParam1 = -106.6605f;
			StringCopy(sParam2, "", 32);
			return true;
		case 270:
			*bParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return true;
		case 271:
			*bParam1 = 26.3597f;
			StringCopy(sParam2, "", 32);
			return true;
		case 272:
			*bParam1 = -83.3175f;
			StringCopy(sParam2, "", 32);
			return true;
		case 273:
			*bParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return true;
		case 274:
			*bParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return true;
		case 275:
			*bParam1 = (277.613f - 360f);
			StringCopy(sParam2, "", 32);
			return true;
		case 276:
			*bParam1 = -4.7459f;
			StringCopy(sParam2, "", 32);
			return true;
		case 277:
			*bParam1 = -98.56f;
			StringCopy(sParam2, "", 32);
			return true;
		case 278:
			*bParam1 = -33.77f;
			StringCopy(sParam2, "", 32);
			return true;
		case 279:
			*bParam1 = 155.68f;
			StringCopy(sParam2, "", 32);
			return true;
		case 280:
			*bParam1 = -49.56f;
			StringCopy(sParam2, "", 32);
			return true;
		case 281:
			*bParam1 = -5.8739f;
			StringCopy(sParam2, "", 32);
			return true;
		case 282:
			*bParam1 = 70.1627f;
			StringCopy(sParam2, "", 32);
			return true;
		case 283:
			*bParam1 = 158.979f;
			StringCopy(sParam2, "", 32);
			return true;
		case 284:
			*bParam1 = -67.1851f;
			StringCopy(sParam2, "", 32);
			return true;
		case 285:
			*bParam1 = 47.054f;
			StringCopy(sParam2, "", 32);
			return true;
		case 256:
			*bParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return true;
		case 257:
			*bParam1 = 171.253f;
			StringCopy(sParam2, "", 32);
			return true;
		case 258:
			*bParam1 = 10.247f;
			StringCopy(sParam2, "", 32);
			return true;
		case 259:
			*bParam1 = -32.488f;
			StringCopy(sParam2, "", 32);
			return true;
		case 260:
			*bParam1 = -29.093f;
			StringCopy(sParam2, "", 32);
			return true;
		case 261:
			*bParam1 = 229.6085f;
			StringCopy(sParam2, "", 32);
			return true;
		case 286:
			*bParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return true;
		case 287:
			*bParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return true;
		case 288:
			*bParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return true;
		case 262:
			*bParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return true;
		case 263:
			*bParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return true;
		case 289:
			*bParam1 = -11.5018f;
			StringCopy(sParam2, "", 32);
			return true;
		case 290:
			*bParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return true;
		case 291:
			*bParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 292:
			*bParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 293:
			*bParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 294:
			return func_49(293, bParam1, sParam2);
		case 295:
			return func_49(292, bParam1, sParam2);
		case 299:
			*bParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 300:
			return func_49(303, bParam1, sParam2);
		case 301:
			return func_49(303, bParam1, sParam2);
		case 302:
			return func_49(303, bParam1, sParam2);
		case 303:
			*bParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 296:
			*bParam1 = 116.742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 297:
			*bParam1 = 100.46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 298:
			*bParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 304:
			*bParam1 = -152.0894f;
			StringCopy(sParam2, "", 32);
			return true;
		case 305:
			*bParam1 = 122.5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return true;
		case 306:
			vVar8 = { -7.4998f, 7.4995f, -0.5258f };
			*bParam1 = UNK_0xE7D606C557C86100(-vVar8.x, -vVar8.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 307:
			vVar11 = { 10.6345f, 0.7246f, 1.2508f };
			*bParam1 = UNK_0xE7D606C557C86100(-vVar11.x, -vVar11.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 308:
			vVar14 = { -3.4271f, -13.6787f, -1.4107f };
			*bParam1 = UNK_0xE7D606C557C86100(-vVar14.x, -vVar14.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 309:
			vVar17 = { -19.6582f, 7.896f, 0.1334f };
			*bParam1 = UNK_0xE7D606C557C86100(-vVar17.x, -vVar17.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 310:
			*bParam1 = -87.7215f;
			StringCopy(sParam2, "", 32);
			return true;
		case 311:
			*bParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 312:
			*bParam1 = ((103.2841f + 88.7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return true;
		case 313:
			*bParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 314:
			*bParam1 = 327.7746f;
			StringCopy(sParam2, "", 32);
			return true;
	}
	*bParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return false;
}

bool func_50(int iParam0, int iParam1, var uParam2, float fParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13.904f, 1.193f, 0.7f };
					*fParam3 = -144f;
					return true;
				case 1:
					if (func_50(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1.1731f, 0.809f) };
						*fParam3 = (*fParam3 + (456.7661f - 360f));
						return true;
					}
					break;
				case 2:
					*uParam2 = { Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((16f - 222.8314f) + 360f);
					return true;
			}
			return false;
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 10.9793f, -5.9f, 4.6f };
					*fParam3 = 163.0716f;
					return true;
				case 1:
					if (func_50(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0.25f, -0.6f) };
						*fParam3 = (*fParam3 + 0f);
						return true;
					}
					break;
				case 2:
					if (func_50(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0.5f, -1.2f) };
						*fParam3 = (*fParam3 + 0f);
						return true;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = (((16f + 90f) - 222.8314f) + 360f);
					return true;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { 6.8878f, -5.5247f, 1.5228f };
					*fParam3 = 160f;
					return true;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.1937f, -9.0309f, 4.5877f };
					*fParam3 = 255f;
					return true;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.4577f, -9.6399f, 4.5876f };
					*fParam3 = 252f;
					return true;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.799f, -9.41f, 4.5877f };
					*fParam3 = 273f;
					return true;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_50(0, 5, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*fParam3 = (*fParam3 + 0f);
						return true;
					}
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 12.552f, 4.373f, (4.6f + 1f) };
					*fParam3 = 318f;
					return true;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0.4395f, -11.0022f, 0.0747f };
					*fParam3 = 306f;
					return true;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5.5001f, -12.4406f, 4.6f };
					*fParam3 = 0f;
					return true;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.5f, -9.1f, 4.6f };
					*fParam3 = 330f;
					return true;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0.849f, 1.575f, 0f };
					*fParam3 = 272.857f;
					return true;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 8.183f, -3.0467f, 5.5876f };
					*fParam3 = 158f;
					return true;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 9.383f, -3.3887f, 5.73f };
					*fParam3 = 339f;
					return true;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-159.23f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-159.23f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.488f, -9.098f, 5.4864f };
					*fParam3 = 147f;
					return true;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9.04f, 5.71f, 1.44f };
					*fParam3 = 159.3182f;
					return true;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.25f, -9.53f, 4.588f };
					*fParam3 = 333f;
					return true;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11.0022f, -0.4395f) + Vector(0f, UNK_0x79833B02DBD2A244(-0.5f, 0.5f), UNK_0x79833B02DBD2A244(-0.5f, 0.5f)) };
					*fParam3 = (306f + UNK_0x79833B02DBD2A244(10f, 10f));
					return true;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0.95f, 0.95f, 0.95f) };
					*fParam3 = UNK_0xE7D606C557C86100(*uParam2, uParam2->f_1);
					return true;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((26.087f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((13f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-28.7112f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27.9648f, 8.3766f, 0.7f };
					*fParam3 = 319f;
					return true;
			}
			break;
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f) };
					*fParam3 = 78f;
					return true;
					Jump @7966; //curOff = 2773
					switch (iParam0)
					{
						case 1:
							*uParam2 = { -0.3142f, -10.9926f, 0.0747f };
							*fParam3 = 304.1026f;
							return true;
					}
					Jump @7966; //curOff = 2823
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 10.3f, -6.5f, 4.6f };
							*fParam3 = 180f;
							return true;
					}
					Jump @7966; //curOff = 2873
					switch (iParam0)
					{
						case 1:
							if (func_50(1, 32, uParam2, fParam3))
							{
								*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
								*fParam3 = (*fParam3 + 0f);
								return true;
							}
							break;
					}
					Jump @7966; //curOff = 2930
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 8.505f, -10.9717f, 4.6019f };
							*fParam3 = 228f;
							return true;
					}
					Jump @7966; //curOff = 2980
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 12.7165f, 4.7109f, (4.6f + 1f) };
							*fParam3 = 310.6696f;
							return true;
					}
					Jump @7966; //curOff = 3032
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 9.0529f, -8.9175f, 1.6907f };
							*fParam3 = 102.156f;
							return true;
					}
					Jump @7966; //curOff = 3082
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 8.4799f, -7.5315f, 0.682f };
							*fParam3 = 264f;
							return true;
					}
					Jump @7966; //curOff = 3132
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 9.352f, -3.356f, 5.7338f };
							*fParam3 = 338f;
							return true;
					}
					Jump @7966; //curOff = 3182
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 8.3003f, -10.3127f, 4.5874f };
							*fParam3 = 262.789f;
							return true;
					}
					Jump @7966; //curOff = 3232
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 10.76f, -5.95f, 4.59f };
							*fParam3 = 177.6766f;
							return true;
					}
					Jump @7966; //curOff = 3282
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 9.6691f, -7.6405f, 0.6817f };
							*fParam3 = 159.156f;
							return true;
					}
					Jump @7966; //curOff = 3332
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 1.228f, 4.044f, 0.7665f };
							*fParam3 = 165f;
							return true;
					}
					Jump @7966; //curOff = 3382
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 10.2365f, -7.6073f, 6.2761f };
							*fParam3 = 157.0716f;
							return true;
					}
					Jump @7966; //curOff = 3432
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 8.161f, -7.562f, 2.17f };
							*fParam3 = 78f;
							return true;
					}
					Jump @7966; //curOff = 3482
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 10.7668f, -7.8757f, 5.5559f };
							*fParam3 = 144.6939f;
							return true;
					}
					Jump @7966; //curOff = 3532
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 10.6257f, -9.4927f, 5.5876f };
							*fParam3 = 257.4583f;
							return true;
					}
					Jump @7966; //curOff = 3582
					return func_50(iParam0, 26, uParam2, fParam3);
					Jump @7966; //curOff = 3600
					switch (iParam0)
					{
						case 2:
						case 3:
							*uParam2 = { 8.4451f, 3.1568f, 1.47f };
							*fParam3 = 159f;
							return true;
					}
					Jump @7966; //curOff = 3656
					switch (iParam0)
					{
						case 2:
							*uParam2 = { 9.0477f, -7.9397f, 0.6817f };
							*fParam3 = 88.5686f;
							return true;
					}
					Jump @7966; //curOff = 3706
					switch (iParam0)
					{
						case 2:
							*uParam2 = { 0f, 0f, 0f };
							*fParam3 = 0f;
							return false;
					}
					Jump @7966; //curOff = 3740
					switch (iParam0)
					{
						case 2:
							*uParam2 = { 21.7f, 9f, 1.7029f };
							*fParam3 = 0f;
							return true;
					}
					Jump @7966; //curOff = 3786
					switch (iParam0)
					{
						case 2:
							*uParam2 = { 1.3278f, 1.534f, 0f };
							*fParam3 = 159.72f;
							return true;
					}
					Jump @7966; //curOff = 3832
					switch (iParam0)
					{
						case 2:
							*uParam2 = { -3.0265f, 1.7627f, 0.1273f };
							*fParam3 = 338.5f;
							return true;
					}
					Jump @7966; //curOff = 3882
					switch (iParam0)
					{
						case 2:
							*uParam2 = { 15.2374f, 8.723f, 1.4495f };
							*fParam3 = 205.677f;
							return true;
					}
					Jump @7966; //curOff = 3932
					switch (iParam0)
					{
						case 2:
							*uParam2 = { 28.7f, 8.8241f, 0.6f };
							*fParam3 = 39f;
							return true;
					}
					Jump @7966; //curOff = 3982
					switch (iParam0)
					{
						case 2:
							*uParam2 = { Vector(1.1936f, -9.0107f, 9.0567f) + Vector((0.03f - 0.02f), 0f, 0f) };
							*fParam3 = 94.2086f;
							return true;
					}
					Jump @7966; //curOff = 4046
					switch (iParam0)
					{
						case 2:
							*uParam2 = { Vector(5.2891f, 2.0403f, -2.8213f) + Vector((0.03f - 0.05f), 0f, 0f) };
							*fParam3 = 336f;
							return true;
					}
					Jump @7966; //curOff = 4110
					switch (iParam0)
					{
						case 2:
						case 0:
							*uParam2 = { 5.5782f, 5.7755f, 3.84f };
							*fParam3 = 311.4f;
							return true;
					}
					Jump @7966; //curOff = 4166
					switch (iParam0)
					{
						case 2:
						case 0:
							*uParam2 = { 5.5782f, 5.7755f, 3.8418f };
							*fParam3 = 306.6f;
							return true;
					}
					Jump @7966; //curOff = 4222
					switch (iParam0)
					{
						case 2:
						case 1:
							*uParam2 = { 5.8092f, 5.7965f, 3.85f };
							*fParam3 = 337.4f;
							return true;
					}
					Jump @7966; //curOff = 4278
					switch (iParam0)
					{
						case 2:
							*uParam2 = { 13.3221f, 0.0684f, 0.6817f };
							*fParam3 = 277.317f;
							return true;
					}
					Jump @7966; //curOff = 4328
					if (func_50(iParam0, 59, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, UNK_0x79833B02DBD2A244(-1f, 1f), UNK_0x79833B02DBD2A244(-1f, 1f)) };
						*fParam3 = (*fParam3 + UNK_0x79833B02DBD2A244(-10f, 10f));
						return true;
					}
					Jump @7966; //curOff = 4393
					switch (iParam0)
					{
						case 2:
							*uParam2 = { -2.235f, 1.725f, 4.5877f };
							*fParam3 = 172.714f;
							return true;
					}
					Jump @7966; //curOff = 4443
					switch (iParam0)
					{
						case 2:
							*uParam2 = { Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f) };
							*fParam3 = ((-158f - 222.8314f) + 360f);
							return true;
					}
					Jump @7966; //curOff = 4521
					switch (iParam0)
					{
						case 2:
							*uParam2 = { Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f) };
							*fParam3 = ((-164f - 222.8314f) + 360f);
							return true;
					}
					Jump @7966; //curOff = 4599
					switch (iParam0)
					{
						case 2:
							*uParam2 = { 7.394f, 5.368f, 1.451f };
							*fParam3 = 235.0656f;
							return true;
					}
					Jump @7966; //curOff = 4649
					switch (iParam0)
					{
						case 2:
						case 1:
							*uParam2 = { 1.0704f, -1.4624f, 0.999f };
							*fParam3 = 157.44f;
							return true;
					}
					Jump @7966; //curOff = 4705
					switch (iParam0)
					{
						case 3:
							*uParam2 = { 14.8186f, 6.8253f, 0.5f };
							*fParam3 = 87.3368f;
							return true;
					}
					Jump @7966; //curOff = 4755
					switch (iParam0)
					{
						case 3:
							*uParam2 = { 13.6486f, 6.2253f, 0.45f };
							*fParam3 = 262.32f;
							return true;
					}
					Jump @7966; //curOff = 4805
					if (func_50(iParam0, 47, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*fParam3 = (*fParam3 + 0f);
						return true;
					}
					Jump @7966; //curOff = 4847
					switch (iParam0)
					{
						case 3:
							*uParam2 = { 16.319f, -1.375f, 0.6817f };
							*fParam3 = 334.126f;
							return true;
					}
					Jump @7966; //curOff = 4897
					switch (iParam0)
					{
						case 3:
							*uParam2 = { -0.39f, 3.27f, 0f };
							*fParam3 = 154.126f;
							return true;
					}
					Jump @7966; //curOff = 4943
					switch (iParam0)
					{
						case 3:
							*uParam2 = { 15.0213f, 6.9622f, 1.39f };
							*fParam3 = 142.889f;
							return true;
					}
					Jump @7966; //curOff = 4993
					switch (iParam0)
					{
						case 3:
							*uParam2 = { 15.128f, 6.842f, 0.4524f };
							*fParam3 = 54f;
							return true;
					}
					Jump @7966; //curOff = 5043
					switch (iParam0)
					{
						case 4:
							*uParam2 = { -10.9019f, -23.8349f, -2.1f };
							*fParam3 = 339f;
							return true;
					}
					Jump @7966; //curOff = 5093
					switch (iParam0)
					{
						case 4:
							*uParam2 = { -10.9937f, -24.9005f, -2.18f };
							*fParam3 = 314.2132f;
							return true;
					}
					Jump @7966; //curOff = 5143
					switch (iParam0)
					{
						case 4:
							*uParam2 = { 31.7401f, -1.0943f, 0.6822f };
							*fParam3 = 147f;
							return true;
					}
					Jump @7966; //curOff = 5193
					switch (iParam0)
					{
						case 4:
							*uParam2 = { -27.1728f, -3.75f, -1.626f };
							*fParam3 = (147f + 90f);
							return true;
					}
					Jump @7966; //curOff = 5249
					switch (iParam0)
					{
						case 4:
							*uParam2 = { 14.7722f, -10.9336f, -0.537f };
							*fParam3 = 110.8505f;
							return true;
					}
					Jump @7966; //curOff = 5299
					switch (iParam0)
					{
						case 4:
							*uParam2 = { -17.2536f, 2.451f, -0.6f };
							*fParam3 = 0f;
							return true;
					}
					Jump @7966; //curOff = 5345
					switch (iParam0)
					{
						case 4:
							*uParam2 = { 23.9716f, -20.3533f, -3.18f };
							*fParam3 = 324f;
							return true;
					}
					Jump @7966; //curOff = 5395
					switch (iParam0)
					{
						case 5:
							*uParam2 = { 3.1416f, -2.0799f, -0.0145f };
							*fParam3 = 33f;
							return true;
					}
					Jump @7966; //curOff = 5445
					switch (iParam0)
					{
						case 5:
							*uParam2 = { 3.2746f, -4.1995f, -0.0144f };
							*fParam3 = 69f;
							return true;
					}
					Jump @7966; //curOff = 5495
					switch (iParam0)
					{
						case 5:
							*uParam2 = { 2.983f, -4.094f, 0.4629f };
							*fParam3 = 33f;
							return true;
					}
					Jump @7966; //curOff = 5545
					switch (iParam0)
					{
						case 5:
							*uParam2 = { 5.5235f, 2.9133f, 0.7288f };
							*fParam3 = 71f;
							return true;
					}
					Jump @7966; //curOff = 5595
					switch (iParam0)
					{
						case 6:
							*uParam2 = { Vector(30.7131f, -1454.676f, -42.2059f) - Vector(30.116f, -1435.997f, -14.3064f) };
							*fParam3 = (84.7009f - 188.5817f);
							return true;
						case 7:
							*uParam2 = { Vector(30.6803f, -1455.848f, -40.7478f) - Vector(30.116f, -1435.997f, -14.3064f) };
							*fParam3 = (90.6417f - 188.5817f);
							return true;
					}
					Jump @7966; //curOff = 5729
					switch (iParam0)
					{
						case 10:
							*uParam2 = { 2.0126f, 0.3422f, -0.0086f };
							*fParam3 = 354f;
							return true;
					}
					Jump @7966; //curOff = 5779
					switch (iParam0)
					{
						case 10:
							*uParam2 = { 1.2931f, 1.4476f, 1.0127f };
							*fParam3 = 61.7525f;
							return true;
					}
					Jump @7966; //curOff = 5829
					switch (iParam0)
					{
						case 10:
							*uParam2 = { 0.0158f, 1.4182f, 0.9913f };
							*fParam3 = 119.008f;
							return true;
					}
					Jump @7966; //curOff = 5879
					switch (iParam0)
					{
						case 10:
							*uParam2 = { -3.467f, 0.074f, 0f };
							*fParam3 = 30f;
							return true;
					}
					Jump @7966; //curOff = 5925
					switch (iParam0)
					{
						case 10:
							*uParam2 = { -2.1014f, -5.4089f, -0.013f };
							*fParam3 = 123.753f;
							return true;
					}
					Jump @7966; //curOff = 5975
					switch (iParam0)
					{
						case 10:
							*uParam2 = { -2.802f, -6.3295f, -0.01f };
							*fParam3 = 42.757f;
							return true;
					}
					Jump @7966; //curOff = 6025
					switch (iParam0)
					{
						case 8:
							*uParam2 = { -2.156f, -4.9564f, 1.4886f };
							*fParam3 = 136.309f;
							return true;
					}
					Jump @7966; //curOff = 6075
					switch (iParam0)
					{
						case 8:
							*uParam2 = { 7.2656f, 3.022f, -0.9061f };
							*fParam3 = 92.8891f;
							return true;
					}
					Jump @7966; //curOff = 6125
					switch (iParam0)
					{
						case 8:
							*uParam2 = { 0.5066f, 1.6992f, 0.0168f };
							*fParam3 = 115.77f;
							return true;
					}
					Jump @7966; //curOff = 6175
					switch (iParam0)
					{
						case 8:
							*uParam2 = { -0.2121f, -6.2791f, -0.0089f };
							*fParam3 = 114.3391f;
							return true;
					}
					Jump @7966; //curOff = 6225
					switch (iParam0)
					{
						case 9:
						case 11:
							*uParam2 = { 8.2458f, -0.7136f, -0.2503f };
							*fParam3 = 252.2687f;
							return true;
					}
					Jump @7966; //curOff = 6281
					switch (iParam0)
					{
						case 9:
						case 11:
							*uParam2 = { 2.334f, 1.6889f, 0.586f };
							*fParam3 = 109f;
							return true;
					}
					Jump @7966; //curOff = 6337
					switch (iParam0)
					{
						case 9:
							*uParam2 = { -0.6331f, 1.2093f, -0.0086f };
							*fParam3 = 137.1861f;
							return true;
					}
					Jump @7966; //curOff = 6387
					switch (iParam0)
					{
						case 9:
							*uParam2 = { -3.887f, -0.166f, 0f };
							*fParam3 = 30f;
							return true;
					}
					Jump @7966; //curOff = 6433
					switch (iParam0)
					{
						case 9:
							*uParam2 = { 3.5179f, 9.1355f, -1f };
							*fParam3 = 141.79f;
							return true;
					}
					Jump @7966; //curOff = 6479
					switch (iParam0)
					{
						case 9:
							*uParam2 = { Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f) };
							*fParam3 = 121.6591f;
							return true;
					}
					Jump @7966; //curOff = 6533
					switch (iParam0)
					{
						case 10:
							*uParam2 = { 10.2823f, 2.2595f, -1.0742f };
							*fParam3 = (170.2796f - 180f);
							return true;
					}
					Jump @7966; //curOff = 6589
					switch (iParam0)
					{
						case 10:
							*uParam2 = { 1.077f, -5.1446f, 0.9904f };
							*fParam3 = 107.1399f;
							return true;
					}
					Jump @7966; //curOff = 6639
					switch (iParam0)
					{
						case 10:
							*uParam2 = { -12.903f, -6.623f, -0.0406f };
							*fParam3 = 63.48f;
							return true;
					}
					Jump @7966; //curOff = 6689
					switch (iParam0)
					{
						case 10:
							*uParam2 = { 10.5514f, 5.393f, -0.0998f };
							*fParam3 = 327.483f;
							return true;
					}
					Jump @7966; //curOff = 6739
					switch (iParam0)
					{
						case 11:
							*uParam2 = { 0.9794f, -0.3043f, 0f };
							*fParam3 = 179.7612f;
							return true;
					}
					Jump @7966; //curOff = 6785
					switch (iParam0)
					{
						case 11:
							*uParam2 = { 11.9759f, 1f, -1.0728f };
							*fParam3 = 238.9422f;
							return true;
					}
					Jump @7966; //curOff = 6831
					switch (iParam0)
					{
						case 11:
						case 8:
							*uParam2 = { -0.576f, 1.671f, 0.601f };
							*fParam3 = 296f;
							return true;
					}
					Jump @7966; //curOff = 6887
					switch (iParam0)
					{
						case 12:
							*uParam2 = { -0.6532f, 0.9556f, -0.0087f };
							*fParam3 = 121.0556f;
							return true;
					}
					Jump @7966; //curOff = 6937
					switch (iParam0)
					{
						case 13:
							*uParam2 = { -0.18f, -4.173f, 0.9981f };
							*fParam3 = 216.61f;
							return true;
					}
					Jump @7966; //curOff = 6987
					switch (iParam0)
					{
						case 13:
							*uParam2 = { 6.5937f, 0.3521f, 1f };
							*fParam3 = 119.4f;
							return true;
					}
					Jump @7966; //curOff = 7033
					switch (iParam0)
					{
						case 13:
							if (Global_111638.f_18528[2] == 299)
							{
								*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
								*fParam3 = (34.661f - 90.6729f);
								return true;
							}
							else if (((Global_111638.f_18528[2] == 300 || Global_111638.f_18528[2] == 301) || Global_111638.f_18528[2] == 302) || Global_111638.f_18528[2] == 303)
							{
								*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
								*fParam3 = (32f - 90.6729f);
								return true;
							}
							if (func_51())
							{
								*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
								*fParam3 = (34.661f - 90.6729f);
								return true;
							}
							else
							{
								*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
								*fParam3 = (32f - 90.6729f);
								return true;
							}
							break;
					}
					Jump @7966; //curOff = 7370
					switch (iParam0)
					{
						case 13:
							*uParam2 = { Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.571f) };
							*fParam3 = (102f - 90.6729f);
							return true;
					}
					Jump @7966; //curOff = 7442
					switch (iParam0)
					{
						case 13:
							*uParam2 = { -2.8352f, 0.0552f, 0f };
							*fParam3 = 334.44f;
							return true;
					}
					Jump @7966; //curOff = 7488
					switch (iParam0)
					{
						case 13:
							if (func_50(iParam0, 130, uParam2, fParam3))
							{
								*uParam2 = { *uParam2 + Vector(0f, UNK_0x79833B02DBD2A244(-1f, 1f), UNK_0x79833B02DBD2A244(-1f, 1f)) };
								*fParam3 = (*fParam3 + UNK_0x79833B02DBD2A244(-10f, 10f));
								return true;
							}
							break;
					}
					Jump @7966; //curOff = 7569
					switch (iParam0)
					{
						case 13:
							*uParam2 = { -7.213f, -1.4536f, 0.9981f };
							*fParam3 = 42.6f;
							return true;
					}
					Jump @7966; //curOff = 7619
					switch (iParam0)
					{
						case 13:
							*uParam2 = { Vector((9.6327f + 1f), -1518.736f, -1148.466f) - Vector(9.6346f, -1517.601f, -1152.571f) };
							*fParam3 = UNK_0x79833B02DBD2A244(0f, 360f);
							return true;
					}
					Jump @7966; //curOff = 7692
					switch (iParam0)
					{
						case 13:
							*uParam2 = { 5.24f, 6.217f, 0.998f };
							*fParam3 = 315.72f;
							return true;
					}
					Jump @7966; //curOff = 7742
					switch (iParam0)
					{
						case 13:
							*uParam2 = { 6.6447f, 0.7635f, 1.0507f };
							*fParam3 = 296.683f;
							return true;
					}
					Jump @7966; //curOff = 7792
					switch (iParam0)
					{
						case 13:
							*uParam2 = { 3.968f, -1.04f, 0f };
							*fParam3 = 214.92f;
							return true;
						case 14:
							*uParam2 = { 4.617f, -1.1314f, 0f };
							*fParam3 = 39.4085f;
							return true;
					}
					Jump @7966; //curOff = 7874
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					return false;
					Jump @7966; //curOff = 7892
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					return false;
					Jump @7966; //curOff = 7910
					*uParam2 = { UNK_0x79833B02DBD2A244(-10f, 10f), UNK_0x79833B02DBD2A244(-10f, 10f), 0f };
					*fParam3 = UNK_0x79833B02DBD2A244(0f, 360f);
					return false;
					*uParam2 = { UNK_0x79833B02DBD2A244(-10f, 10f), UNK_0x79833B02DBD2A244(-10f, 10f), 0f };
					*fParam3 = UNK_0x79833B02DBD2A244(0f, 360f);
					return false;
				}

bool func_51()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return true;
	}
	return false;
}

bool func_52(int iParam0, var uParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*bParam2 = 111f;
			return true;
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*bParam2 = 194.1887f;
			return true;
		case 9:
			return func_52(8, uParam1, bParam2);
		case 10:
			return func_52(8, uParam1, bParam2);
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*bParam2 = 201.6328f;
			return true;
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*bParam2 = 350.0509f;
			return true;
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*bParam2 = 0.7896f;
			return true;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*bParam2 = 42f;
			return true;
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*bParam2 = -129f;
			return true;
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*bParam2 = 267.1409f;
			return true;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*bParam2 = 340.0526f;
			return true;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*bParam2 = 22.9566f;
			return true;
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*bParam2 = 152.8118f;
			return true;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*bParam2 = 0f;
			return true;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*bParam2 = (250.4535f - 360f);
			return true;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*bParam2 = 119.603f;
			return true;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*bParam2 = 168f;
			return true;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*bParam2 = 51.7279f;
			return true;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*bParam2 = 151.2504f;
			return true;
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*bParam2 = 156.8827f;
			return true;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*bParam2 = 7.2736f;
			return true;
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*bParam2 = 97.2736f;
			return true;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*bParam2 = 4f;
			return true;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*bParam2 = 0f;
			return true;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*bParam2 = 0f;
			return true;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*bParam2 = 0f;
			return true;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*bParam2 = 0f;
			return true;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*bParam2 = 0f;
			return true;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*bParam2 = 0f;
			return true;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*bParam2 = 0f;
			return true;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*bParam2 = 0f;
			return true;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*bParam2 = 0f;
			return true;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*bParam2 = 162.693f;
			return true;
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*bParam2 = 128.9946f;
			return true;
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*bParam2 = 32.2721f;
			return true;
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*bParam2 = 192.8091f;
			return true;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*bParam2 = 32f;
			return true;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*bParam2 = 32f;
			return true;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*bParam2 = -3.7534f;
			return true;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*bParam2 = 90f;
			return true;
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*bParam2 = 355.326f;
			return true;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*bParam2 = 334.1068f;
			return true;
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*bParam2 = 46.8853f;
			return true;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*bParam2 = 0f;
			return true;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*bParam2 = 165.9421f;
			return true;
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*bParam2 = 221.228f;
			return true;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*bParam2 = (42f + 180f);
			return true;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*bParam2 = 98.9764f;
			return true;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*bParam2 = 220.9554f;
			return true;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*bParam2 = 83.9922f;
			return true;
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*bParam2 = -64.1366f;
			return true;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*bParam2 = 0f;
			return true;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*bParam2 = 127.7547f;
			return true;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*bParam2 = -63f;
			return true;
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*bParam2 = 90.0339f;
			return true;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*bParam2 = 84.6231f;
			return true;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*bParam2 = 99.6049f;
			return true;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*bParam2 = 120f;
			return true;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*bParam2 = 0f;
			return true;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*bParam2 = 211.8223f;
			return true;
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*bParam2 = 136.0867f;
			return true;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*bParam2 = 27.0648f;
			return true;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*bParam2 = 27.0648f;
			return true;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*bParam2 = 0f;
			return true;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*bParam2 = 0f;
			return true;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*bParam2 = 0f;
			return true;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*bParam2 = 0f;
			return true;
		default:
			break;
	}
	return false;
}

char* func_53(int iParam0)
{
	switch (iParam0)
	{
		case joaat("V_CHOPSHOP"):
			return "v_chopshop";
		case joaat("V_FRANKLINS"):
			return "v_franklins";
		case joaat("V_FRANKLINSHOUSE"):
			return "v_franklinshouse";
		case joaat("V_METHLAB"):
			return "v_methlab";
		case joaat("V_MICHAEL"):
			return "v_michael";
		case joaat("V_STRIP3"):
			return "v_strip3";
		case joaat("V_TRAILER"):
			return "v_trailer";
		case joaat("V_TREVORS"):
			return "v_Trevors";
	}
	return "";
}

void func_54()
{
	if (iLocal_294 != 0)
	{
		UNK_0xF7E25143642732EA(iLocal_294, 0);
		iLocal_294 = 0;
	}
	UNK_0x21387C9EECC2B220(false);
	UNK_0x10FAF14A60A0DBE1();
}

