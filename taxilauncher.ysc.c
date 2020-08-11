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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<31> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_87 = false;
	bool bLocal_88 = false;
	bool bLocal_89 = false;
	bool bLocal_90 = false;
	bool bLocal_91 = false;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = false;
	bool bLocal_100 = false;
	var uLocal_101 = 16;
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
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	int iLocal_269 = 0;
	char cLocal_270[16] = "";
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	vector3 vLocal_274 = { 0f, 0f, 0f };
	bool bLocal_277 = false;
	bool bLocal_278 = false;
	int iLocal_279 = 0;
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
	sLocal_18 = "NULL";
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
	iLocal_46 = UNK_0xAD1355DD1E5D2D9B();
	iLocal_47 = UNK_0x817B3657F78A517A();
	bLocal_90 = true;
	iLocal_95 = -1;
	bLocal_99 = func_147();
	bLocal_100 = func_146();
	StringCopy(&cLocal_270, "TAXI_HAIL", 16);
	if (UNK_0x2EBF608FFE6CA406(34))
	{
		func_145();
		UNK_0x10FAF14A60A0DBE1();
	}
	Global_111638.f_10044.f_120 = 1;
	while (true)
	{
		switch (iLocal_51)
		{
			case 0:
				if (func_144())
				{
					iLocal_51 = 1;
				}
				else
				{
					SYSTEM::WAIT(500);
				}
				break;
			case 1:
				if (func_144())
				{
					vLocal_274 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
					func_112();
					if (func_111())
					{
						UNK_0xAB8E2DDC7AF955E0(joaat("TAXI"), false);
						func_110();
						if (!func_108())
						{
							func_65();
							func_31();
							func_15();
						}
					}
					else
					{
						func_4(0);
						iLocal_51 = 1;
						func_1();
						SYSTEM::WAIT(500);
					}
				}
				else
				{
					func_4(1);
					iLocal_51 = 0;
				}
				break;
			case 2:
				if (!UNK_0x1727A44C562FBED2(iLocal_269))
				{
					func_4(1);
					iLocal_54 = 3;
					iLocal_51 = 0;
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	if (!func_3())
	{
		if (UNK_0x7F8A39872A07D2CE("NULL", &Global_110694))
		{
			func_2(0);
		}
		else if (UNK_0x8A22C4C08282BF26(UNK_0x12AB0310C2281427(&Global_110694)) == 0)
		{
			func_2(0);
		}
	}
}

void func_2(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_110694, UNK_0xBB0808A181D4745C(), 24);
		Global_110688 = 1;
	}
	else
	{
		StringCopy(&Global_110694, "NULL", 24);
		Global_110688 = 0;
	}
}

bool func_3()
{
	if (!Global_110687)
	{
		return false;
	}
	if (Global_110688)
	{
		return false;
	}
	return true;
}

void func_4(bool bParam0)
{
	UNK_0xAB8E2DDC7AF955E0(joaat("TAXI"), false);
	func_13();
	func_10();
	func_5();
	bLocal_90 = true;
	bLocal_88 = false;
	iLocal_52 = 0;
	iLocal_53 = 0;
	iLocal_55 = 0;
	iLocal_54 = 0;
	iLocal_96 = 0;
	if (bParam0)
	{
		iLocal_51 = 0;
	}
}

void func_5()
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &cLocal_270, "HAIL_TAXI", 3))
		{
			UNK_0x7720CBBC7DD82563(UNK_0x16F2683693E537C9(), "HAIL_TAXI", &cLocal_270, -2f);
		}
		else if (UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &cLocal_270, "FP_HAIL_TAXI", 3))
		{
			UNK_0x7720CBBC7DD82563(UNK_0x16F2683693E537C9(), "FP_HAIL_TAXI", &cLocal_270, -2f);
		}
		else if (UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &cLocal_270, "FUCK_U", 3))
		{
			UNK_0x7720CBBC7DD82563(UNK_0x16F2683693E537C9(), "FUCK_U", &cLocal_270, -2f);
		}
		else if (UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &cLocal_270, "FORGET_IT", 3))
		{
			UNK_0x7720CBBC7DD82563(UNK_0x16F2683693E537C9(), "FORGET_IT", &cLocal_270, -2f);
		}
		if (iLocal_95 != -1)
		{
			UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 113, false);
		}
		if (iLocal_92 == 1)
		{
			UNK_0xA245D14CC59CDD36(UNK_0x16F2683693E537C9(), 1);
			iLocal_92 = 0;
		}
	}
	UNK_0x8D17794CE3273D70(&cLocal_270);
	if (iLocal_95 != -1)
	{
		func_8(&iLocal_95);
	}
	if (func_7("TXM_H01"))
	{
		iLocal_94++;
		if (iLocal_94 == 3)
		{
			Global_111638.f_10044.f_120 = 1;
		}
		UNK_0xA37A90C62806D848(1);
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_93))
	{
		UNK_0x661342B9651D16E2(iLocal_93, false);
		UNK_0x142CC44DB769B57E(&iLocal_93);
	}
	if (bLocal_88)
	{
		if (UNK_0x8C74DE122769E1BF())
		{
			UNK_0x29D5132FBDCF2B1E(0);
		}
	}
	if (UNK_0xC844350D5D58C99A(Global_110670))
	{
		if (!UNK_0xEB6A8945D1AC98A1(Global_110670))
		{
			if (UNK_0xB4ECF989E2C1DAC8(Global_110670, &cLocal_270, "Aknowledge_R", 3))
			{
				UNK_0x7720CBBC7DD82563(Global_110670, "Aknowledge_R", &cLocal_270, -4f);
			}
			else if (UNK_0xB4ECF989E2C1DAC8(Global_110670, &cLocal_270, "Aknowledge_L", 3))
			{
				UNK_0x7720CBBC7DD82563(Global_110670, "Aknowledge_L", &cLocal_270, -4f);
			}
		}
	}
	if (iLocal_54 == 0)
	{
		func_6();
	}
	bLocal_278 = false;
	bLocal_87 = false;
	bLocal_88 = false;
	iLocal_97 = 0;
	iLocal_98 = 0;
	Global_110706 = -1;
	iLocal_55 = 0;
}

void func_6()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(Global_110670))
	{
		if (!UNK_0xEB6A8945D1AC98A1(Global_110670))
		{
			UNK_0x4E885A246A9D983A(Global_110670, 251, false);
			UNK_0x11AD11297DC58CC7(Global_110670, false);
			if (!UNK_0xE9FDA1035CFEA94F(Global_110670) && !UNK_0x4734A6196B611C3B(Global_110670, false))
			{
				if (UNK_0x405E212DDE472467(Global_110670, 0))
				{
					if (UNK_0xC844350D5D58C99A(Global_110669))
					{
						if (UNK_0xDF1306B443CD3D15(Global_110669, 0))
						{
							if (UNK_0x82CCEAB29E9451DD(Global_110670, Global_110669))
							{
								if (UNK_0xD1960163A3042274(Global_110670, -258271821) != 1 && UNK_0xD1960163A3042274(Global_110670, -258271821) != 0)
								{
									UNK_0xDD353D0E9C789D0E(&iVar0);
									if ((!UNK_0xBBA8A868118C90ED(Global_110669, true, 0) || !UNK_0xBBA8A868118C90ED(Global_110669, 2, 0)) || !UNK_0xBBA8A868118C90ED(Global_110669, false, 0))
									{
										UNK_0x78A77CDD64392938(false, 2000);
									}
									else
									{
										UNK_0x78A77CDD64392938(false, 500);
									}
									UNK_0xE072601B4380E9DF(false, Global_110669, 12f, 790699);
									UNK_0x75ABDC5F81978924(iVar0);
									UNK_0x78ADC381772E3D54(Global_110670, iVar0);
									UNK_0xF82EA857DA10E0CD(&iVar0);
								}
							}
							else
							{
								UNK_0xF3268524E9BE6D6E(Global_110670, UNK_0x16F2683693E537C9(), 500f, -1, 0, 0);
							}
						}
						else
						{
							UNK_0xF3268524E9BE6D6E(Global_110670, UNK_0x16F2683693E537C9(), 500f, -1, 0, 0);
						}
					}
				}
				else if (UNK_0xD1960163A3042274(Global_110670, -1146898486) != 1 && UNK_0xD1960163A3042274(Global_110670, -1146898486) != 0)
				{
					UNK_0x01E4BB5190DF7317(Global_110670, 1193033728, 0);
				}
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(Global_110670))
	{
		if (UNK_0xAF6690C489CC6203(Global_110670))
		{
			if (UNK_0x9C77D2D0559097F0(Global_110670, 0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(Global_110670))
				{
					UNK_0xE8832A9E16A57A1F(Global_110670, false, 1);
					UNK_0x11AD11297DC58CC7(Global_110670, false);
				}
				UNK_0x6DAD7906B73F064D(&Global_110670);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(Global_110669))
	{
		if (UNK_0xAF6690C489CC6203(Global_110669))
		{
			if (UNK_0x9C77D2D0559097F0(Global_110669, 0))
			{
				if (UNK_0xDF1306B443CD3D15(Global_110669, 0))
				{
					UNK_0x4551D324905984CB(Global_110669, 0);
					UNK_0x9A8BCD43DBDDCDCA(Global_110669, 1, 0);
					UNK_0x490CE125A7B7CD42(Global_110669, 0);
				}
				UNK_0x046C362CF15F1935(&Global_110669);
			}
		}
	}
	Global_110670 = 0;
	Global_110669 = 0;
	StringCopy(&Global_110700, "NULL", 24);
	Global_110706 = -1;
}

bool func_7(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_8(int iParam0)
{
	int iVar0;

	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_9(*iParam0);
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

int func_9(int iParam0)
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

void func_10()
{
	if (iLocal_54 == 1)
	{
		UNK_0x826505E1E441E55D(UNK_0xD803B885F5E47A62(), 1);
		func_11();
	}
	else if (iLocal_54 == 2)
	{
		if (UNK_0x1FBF08B001C4788A("taxiService"))
		{
			UNK_0x5E8C29AE121DF1C7("taxiService");
		}
		UNK_0x826505E1E441E55D(UNK_0xD803B885F5E47A62(), 1);
		func_11();
	}
	func_6();
	if (func_7("TX_H02"))
	{
		UNK_0xA37A90C62806D848(1);
	}
	iLocal_96 = 0;
	iLocal_54 = 0;
}

void func_11()
{
	int iVar0;
	var uVar1;
	bool bVar2;

	if (UNK_0x7AEFFBD77F2CF1EC(func_12()))
	{
		UNK_0xF5BDC0FED0F08D25(func_12(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			bVar2 = UNK_0x9B50A0F7FCCD175C(func_12(), 0);
			if (!UNK_0xEB6A8945D1AC98A1(bVar2))
			{
				UNK_0xA3BF0AA5A2608191(bVar2);
				if (!UNK_0x437347B10A200C4B(Global_110669, 0))
				{
					if (UNK_0xC42A92762C58E1B9(bVar2, Global_110669, 0))
					{
						UNK_0x45F014B3D0466974(bVar2, Global_110669, 64);
					}
				}
			}
			if (iVar0 > 1)
			{
				bVar2 = UNK_0x9B50A0F7FCCD175C(func_12(), 1);
				if (!UNK_0xEB6A8945D1AC98A1(bVar2))
				{
					UNK_0xA3BF0AA5A2608191(bVar2);
					if (!UNK_0x437347B10A200C4B(Global_110669, 0))
					{
						if (UNK_0xC42A92762C58E1B9(bVar2, Global_110669, 0))
						{
							UNK_0x45F014B3D0466974(bVar2, Global_110669, 64);
						}
					}
				}
			}
		}
	}
}

int func_12()
{
	return UNK_0x5D08BBCCCC2F43A4(UNK_0xA30EC016B12C03E4());
}

void func_13()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(Local_56.f_1))
	{
		if (UNK_0x9C77D2D0559097F0(Local_56.f_1, 0))
		{
			if (Local_56.f_1 != Global_110670)
			{
				if (!UNK_0xEB6A8945D1AC98A1(Local_56.f_1))
				{
					UNK_0x4E885A246A9D983A(Local_56.f_1, 251, false);
					UNK_0x11AD11297DC58CC7(Local_56.f_1, false);
					if (!UNK_0xE9FDA1035CFEA94F(Local_56.f_1) && !UNK_0x4734A6196B611C3B(Local_56.f_1, false))
					{
						if (UNK_0x405E212DDE472467(Local_56.f_1, 0))
						{
							if (UNK_0xC844350D5D58C99A(Local_56))
							{
								if (UNK_0xDF1306B443CD3D15(Local_56, 0))
								{
									if (UNK_0x82CCEAB29E9451DD(Local_56.f_1, Local_56))
									{
										UNK_0xDD353D0E9C789D0E(&iVar0);
										if ((!UNK_0xBBA8A868118C90ED(Local_56, true, 0) || !UNK_0xBBA8A868118C90ED(Local_56, 2, 0)) || !UNK_0xBBA8A868118C90ED(Local_56, false, 0))
										{
											UNK_0x78A77CDD64392938(false, 2000);
										}
										else
										{
											UNK_0x78A77CDD64392938(false, 500);
										}
										UNK_0xE072601B4380E9DF(false, Local_56, 12f, 790699);
										UNK_0x75ABDC5F81978924(iVar0);
										UNK_0x78ADC381772E3D54(Local_56.f_1, iVar0);
										UNK_0xF82EA857DA10E0CD(&iVar0);
									}
									else
									{
										UNK_0xF3268524E9BE6D6E(Local_56.f_1, UNK_0x16F2683693E537C9(), 500f, -1, 0, 0);
									}
								}
								else
								{
									UNK_0xF3268524E9BE6D6E(Local_56.f_1, UNK_0x16F2683693E537C9(), 500f, -1, 0, 0);
								}
							}
						}
						else
						{
							UNK_0x01E4BB5190DF7317(Local_56.f_1, 1193033728, 0);
						}
					}
				}
				UNK_0x71199B01895C6202(UNK_0x134B62B726CEC8E6(Local_56.f_1));
				UNK_0x6DAD7906B73F064D(&(Local_56.f_1));
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(Local_56))
	{
		if (UNK_0x9C77D2D0559097F0(Local_56, 0))
		{
			if (Local_56 != Global_110669)
			{
				UNK_0x046C362CF15F1935(&Local_56);
			}
		}
	}
	if (iLocal_53 == 1)
	{
		UNK_0x71199B01895C6202(bLocal_100);
		UNK_0x71199B01895C6202(bLocal_99);
	}
	Local_56 = false;
	Local_56.f_1 = 0;
	Local_56.f_2 = 0;
	Local_56.f_3 = 0;
	Local_56.f_5 = 0f;
	Local_56.f_6 = 0f;
	Local_56.f_7 = 45f;
	Local_56.f_8 = 0;
	Local_56.f_10 = 0;
	Local_56.f_9 = 0;
	Local_56.f_11 = { 0f, 0f, 0f };
	Local_56.f_14 = { 0f, 0f, 0f };
	Local_56.f_17 = { 0f, 0f, 0f };
	Local_56.f_20 = { 0f, 0f, 0f };
	Local_56.f_23 = { 0f, 0f, 0f };
	Local_56.f_26 = { 0f, 0f, 0f };
	Local_56.f_29 = 1076367531;
	Local_56.f_30 = func_14();
	iLocal_53 = 0;
}

int func_14()
{
	if (Global_30768 == 0 || Global_30768 == 2)
	{
		return 167;
	}
	return 161;
}

void func_15()
{
	if (iLocal_54 == 0)
	{
		func_27();
	}
	else if (iLocal_54 == 1)
	{
		func_23();
	}
	else if (iLocal_54 == 2)
	{
		func_16();
	}
	else if (iLocal_54 == 3)
	{
		if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			iLocal_54 = 0;
		}
	}
}

void func_16()
{
	if (func_22(&Global_110669, bLocal_100, bLocal_99))
	{
		if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Global_110669, 0))
		{
			if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), Global_110669))
			{
				func_21();
				if (UNK_0xA30B8362589C124A(Global_110669, true, 0) == UNK_0x16F2683693E537C9())
				{
					iLocal_279 = 1;
				}
				else
				{
					iLocal_279 = 2;
				}
				func_20(&Global_110669, iLocal_279);
				if (!UNK_0xEB6A8945D1AC98A1(Global_110670) && UNK_0xDF1306B443CD3D15(Global_110669, 0))
				{
					if (UNK_0x82CCEAB29E9451DD(Global_110670, Global_110669))
					{
						if (!func_19(Global_110670, -2118855366))
						{
							UNK_0xD1F0F33C375B8446(Global_110670, Global_110669, 1, 1000000);
						}
					}
				}
				func_13();
				func_5();
				if (bLocal_89)
				{
					if (func_7("TX_H02"))
					{
						UNK_0xA37A90C62806D848(1);
					}
					bLocal_89 = false;
				}
				func_18();
				func_17();
				UNK_0x826505E1E441E55D(UNK_0xD803B885F5E47A62(), 0);
				UNK_0x92DCE5C81176D2B4("taxiService");
				if (UNK_0x1FBF08B001C4788A("taxiService"))
				{
					iLocal_269 = SYSTEM::START_NEW_SCRIPT("taxiService", 1828);
					UNK_0x5E8C29AE121DF1C7("taxiService");
					iLocal_51 = 2;
				}
			}
		}
		else
		{
			func_4(1);
		}
	}
	else
	{
		func_10();
	}
}

void func_17()
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		bVar0 = UNK_0xF187F2EA5437526A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1.5f, 1.5f, 1.5f, -1);
		if (!UNK_0xEB6A8945D1AC98A1(bVar0))
		{
			if (UNK_0xE3614539F8B5C807(bVar0))
			{
				UNK_0xF3268524E9BE6D6E(bVar0, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
			}
		}
	}
}

void func_18()
{
	bool bVar0;

	if (UNK_0xDF1306B443CD3D15(Global_110669, 0))
	{
		if (!UNK_0xBBA8A868118C90ED(Global_110669, true, 0))
		{
			bVar0 = UNK_0xA30B8362589C124A(Global_110669, true, 0);
			if (UNK_0x16F2683693E537C9() != bVar0)
			{
				if (!UNK_0xBFDE4EE64C4BF2D6(bVar0, UNK_0x5D08BBCCCC2F43A4(UNK_0xD803B885F5E47A62())))
				{
					UNK_0xF3268524E9BE6D6E(bVar0, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
				}
			}
		}
		if (!UNK_0xBBA8A868118C90ED(Global_110669, 2, 0))
		{
			bVar0 = UNK_0xA30B8362589C124A(Global_110669, 2, 0);
			if (UNK_0x16F2683693E537C9() != bVar0)
			{
				if (!UNK_0xBFDE4EE64C4BF2D6(bVar0, UNK_0x5D08BBCCCC2F43A4(UNK_0xD803B885F5E47A62())))
				{
					UNK_0xF3268524E9BE6D6E(bVar0, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
				}
			}
		}
	}
}

bool func_19(bool bParam0, int iParam1)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bParam0))
			{
				if (UNK_0xD1960163A3042274(bParam0, iParam1) == 1 || UNK_0xD1960163A3042274(bParam0, iParam1) == 0)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_20(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x7AEFFBD77F2CF1EC(func_12()))
	{
		UNK_0xF5BDC0FED0F08D25(func_12(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			bVar2 = UNK_0x9B50A0F7FCCD175C(func_12(), 0);
			if (!UNK_0xEB6A8945D1AC98A1(bVar2))
			{
				bVar5 = true;
				if (iParam1 == 1)
				{
					bVar5 = 2;
				}
				bVar4 = true;
				bVar3 = UNK_0xA30B8362589C124A(*uParam0, bVar5, 0);
				if (UNK_0xC844350D5D58C99A(bVar3))
				{
					if (bVar3 == UNK_0x16F2683693E537C9())
					{
						bVar4 = false;
					}
					else if (bVar3 == bVar2)
					{
						bVar4 = false;
					}
				}
				if (UNK_0x24129324CD7C13D0(bVar2, 167, 0))
				{
					bVar4 = false;
				}
				if (func_19(bVar2, -1794415470))
				{
					bVar4 = false;
				}
				if (bVar4)
				{
					UNK_0x5B1D360B9C6F0A09(bVar2, *uParam0, 20000, bVar5, 2f, 9437185, 0);
				}
			}
			if (iVar0 > 1)
			{
				bVar2 = UNK_0x9B50A0F7FCCD175C(func_12(), 1);
				if (!UNK_0xEB6A8945D1AC98A1(bVar2))
				{
					bVar4 = true;
					bVar5 = false;
					bVar3 = UNK_0xA30B8362589C124A(*uParam0, bVar5, 0);
					if (UNK_0xC844350D5D58C99A(bVar3))
					{
						if (bVar3 == UNK_0x16F2683693E537C9())
						{
							bVar4 = false;
						}
						else if (bVar3 == bVar2)
						{
							bVar4 = false;
						}
					}
					if (UNK_0x24129324CD7C13D0(bVar2, 167, 0))
					{
						bVar4 = false;
					}
					if (func_19(bVar2, -1794415470))
					{
						bVar4 = false;
					}
					if (bVar4)
					{
						UNK_0x5B1D360B9C6F0A09(bVar2, *uParam0, 20000, bVar5, 2f, 9437185, 0);
					}
				}
			}
		}
	}
}

void func_21()
{
	Global_22211.f_6 = 1;
}

bool func_22(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(*bParam0, 0))
		{
			if (UNK_0x134B62B726CEC8E6(*bParam0) == bParam1)
			{
				bVar0 = UNK_0xA30B8362589C124A(*bParam0, -1, 0);
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					if (!UNK_0xEB6A8945D1AC98A1(bVar0))
					{
						if (!UNK_0xE9FDA1035CFEA94F(bVar0))
						{
							if (!UNK_0x4734A6196B611C3B(bVar0, false))
							{
								if (UNK_0x61C907EA8258B04D(bVar0, bParam2))
								{
									if (UNK_0x10BA239D3B8FDC7F(*bParam0, 90f))
									{
										iVar1 = UNK_0x9C7B8DC16535B879(*bParam0);
										if (iVar1 != 3 && iVar1 != 2)
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
	}
	return false;
}

void func_23()
{
	if (func_22(&Global_110669, bLocal_100, bLocal_99))
	{
		if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Global_110669, 0))
		{
			if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), Global_110669))
			{
				iLocal_54 = 2;
			}
			func_21();
		}
		else
		{
			func_24();
		}
	}
	else
	{
		func_10();
	}
}

void func_24()
{
	bool bVar0;

	if (func_25(&Global_110669))
	{
		bVar0 = UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9());
		if (UNK_0xC844350D5D58C99A(bVar0))
		{
			if (bVar0 == bLocal_277)
			{
				func_21();
				if (!UNK_0xEB6A8945D1AC98A1(Global_110670) && UNK_0xDF1306B443CD3D15(Global_110669, 0))
				{
					if (UNK_0x82CCEAB29E9451DD(Global_110670, Global_110669))
					{
						if (!func_19(Global_110670, -2118855366))
						{
							UNK_0xD1F0F33C375B8446(Global_110670, Global_110669, 1, 1000000);
						}
					}
				}
			}
			else
			{
				iLocal_54 = 0;
			}
		}
		else
		{
			iLocal_54 = 0;
		}
	}
	else
	{
		iLocal_54 = 0;
	}
}

bool func_25(bool bParam0)
{
	if (!UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (!UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), *bParam0, 5f, 5f, 2f, 0, 1, 0))
	{
		return false;
	}
	if (UNK_0x9C66D99E63E8E24C(*bParam0) > 0.5f)
	{
		return false;
	}
	if (UNK_0x4D570FEF9D230CE7(*bParam0) != UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()))
	{
		return false;
	}
	if (!func_26(*bParam0))
	{
		return false;
	}
	return true;
}

bool func_26(bool bParam0)
{
	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (UNK_0x10BA239D3B8FDC7F(bParam0, 90f))
		{
			return true;
		}
	}
	return false;
}

void func_27()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(bLocal_277))
	{
		if (func_22(&bLocal_277, bLocal_100, bLocal_99))
		{
			if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				func_29();
			}
			else if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bLocal_277))
				{
					iVar0 = UNK_0xA30B8362589C124A(bLocal_277, -1, 0);
					if (!UNK_0xBBA8A868118C90ED(bLocal_277, true, 0))
					{
						if (UNK_0xA30B8362589C124A(bLocal_277, true, 0) == UNK_0x16F2683693E537C9())
						{
							iLocal_279 = 1;
						}
					}
					if (!UNK_0xBBA8A868118C90ED(bLocal_277, 2, 0))
					{
						if (UNK_0xA30B8362589C124A(bLocal_277, 2, 0) == UNK_0x16F2683693E537C9())
						{
							iLocal_279 = 2;
						}
					}
					if (iLocal_55 == 4 || iLocal_55 == 2)
					{
						if (bLocal_277 != Global_110669)
						{
							func_5();
						}
					}
					func_21();
					if (func_28(&bLocal_277, &iVar0, 0))
					{
						bLocal_277 = false;
						iLocal_54 = 2;
					}
				}
				else
				{
					func_10();
				}
			}
		}
	}
}

bool func_28(bool bParam0, int iParam1, bool bParam2)
{
	if (!*bParam0 == Global_110669 && !Global_110669 == 0)
	{
		func_6();
	}
	if (UNK_0xC844350D5D58C99A(*bParam0) && UNK_0xC844350D5D58C99A(*iParam1))
	{
		if (UNK_0xDF1306B443CD3D15(*bParam0, 0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(*iParam1))
			{
				if (UNK_0x82CCEAB29E9451DD(*iParam1, *bParam0))
				{
					Global_110669 = *bParam0;
					Global_110670 = *iParam1;
					Global_110684 = 1;
					if (bParam2)
					{
						UNK_0x73270B3C9CC833FD(Global_110670, true, 1);
						UNK_0x73270B3C9CC833FD(Global_110669, true, 1);
						StringCopy(&Global_110700, UNK_0xBB0808A181D4745C(), 24);
					}
					else
					{
						if (!UNK_0xAF6690C489CC6203(Global_110670))
						{
							UNK_0x73270B3C9CC833FD(Global_110670, true, 0);
						}
						if (!UNK_0xAF6690C489CC6203(Global_110669))
						{
							UNK_0x73270B3C9CC833FD(Global_110669, true, 0);
							StringCopy(&Global_110700, UNK_0xBB0808A181D4745C(), 24);
						}
					}
					UNK_0x4E885A246A9D983A(Global_110670, 251, true);
					UNK_0xAFF39FB306F8E232(Global_110670, 5, false);
					UNK_0xAFF39FB306F8E232(Global_110670, 17, true);
					UNK_0xBAFED2F6486F771A(Global_110670, 512, false);
					UNK_0x11AD11297DC58CC7(Global_110670, true);
					UNK_0x4F39CC3882DD074E(Global_110670, "A_M_M_EASTSA_02_LATINO_FULL_01");
					UNK_0x71EDC33E5A423750(Global_110669, 1);
					UNK_0x4551D324905984CB(Global_110669, 1);
					UNK_0x9A8BCD43DBDDCDCA(Global_110669, 0, 0);
					UNK_0x490CE125A7B7CD42(Global_110669, 1);
					return true;
				}
			}
		}
	}
	return false;
}

void func_29()
{
	bool bVar0;
	int iVar1;

	if (func_25(&bLocal_277))
	{
		if (!bLocal_89)
		{
			if (bLocal_277 == Global_110669 && iLocal_55 == 4)
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					if (!func_7("TX_H02"))
					{
						if (Global_111638.f_10044.f_121 < 5)
						{
							func_30("TX_H02", -1);
							Global_111638.f_10044.f_121++;
						}
						bLocal_89 = true;
					}
				}
			}
		}
		bVar0 = UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9());
		if (UNK_0xC844350D5D58C99A(bVar0))
		{
			if (bVar0 == bLocal_277)
			{
				iVar1 = UNK_0xA30B8362589C124A(bLocal_277, -1, 0);
				if (iLocal_55 == 4 || iLocal_55 == 2)
				{
					if (bLocal_277 != Global_110669)
					{
						func_5();
					}
				}
				func_21();
				if (func_28(&bLocal_277, &iVar1, 0))
				{
					if (bLocal_88)
					{
						if (UNK_0x8C74DE122769E1BF())
						{
							UNK_0x29D5132FBDCF2B1E(0);
						}
						bLocal_88 = false;
					}
					if (!UNK_0xEB6A8945D1AC98A1(Global_110670) && UNK_0xDF1306B443CD3D15(Global_110669, 0))
					{
						if (UNK_0x82CCEAB29E9451DD(Global_110670, Global_110669))
						{
							if (!func_19(Global_110670, -2118855366))
							{
								UNK_0xD1F0F33C375B8446(Global_110670, Global_110669, 1, 10000);
							}
						}
					}
					bLocal_89 = false;
					iLocal_54 = 1;
				}
			}
		}
	}
	else if (func_7("TX_H02"))
	{
		UNK_0xA37A90C62806D848(1);
	}
}

void func_30(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_31()
{
	if (iLocal_55 == 0)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_278))
		{
			iLocal_55 = 1;
		}
	}
	else if (iLocal_55 == 1)
	{
		func_58();
	}
	else if (iLocal_55 == 2)
	{
		func_49();
	}
	else if (iLocal_55 == 3)
	{
		func_43();
	}
	else if (iLocal_55 == 4)
	{
		func_32();
	}
}

void func_32()
{
	if (func_42(&Global_110669, &Global_110670, bLocal_100, bLocal_99))
	{
		if (!func_36())
		{
			if (!func_19(Global_110670, -2118855366))
			{
				UNK_0xD1F0F33C375B8446(Global_110670, Global_110669, 1, 1000000);
			}
			UNK_0x4E885A246A9D983A(Global_110670, 251, true);
			func_33();
			if (UNK_0xE4EDC4B0E92C078B(iLocal_93))
			{
				UNK_0x0EC848EFF66DF45A(iLocal_93, 10000);
			}
		}
		else
		{
			func_5();
		}
	}
	else
	{
		func_5();
	}
}

void func_33()
{
	if (UNK_0x8C74DE122769E1BF())
	{
		if (bLocal_88)
		{
			if (func_34())
			{
				UNK_0x29D5132FBDCF2B1E(0);
			}
		}
	}
}

bool func_34()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	func_35(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	if (((iVar0 > 64 || iVar0 < -64) || iVar1 > 64) || iVar1 < -64)
	{
		return true;
	}
	return false;
}

void func_35(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	*iParam0 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 218) * 127f));
	*iParam1 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*iParam0) == 0f && IntToFloat(*iParam1) == 0f)
		{
			*iParam0 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 218) * 127f));
			*iParam1 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 221) * 127f));
		}
	}
}

bool func_36()
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;

	if (iLocal_55 == 4)
	{
		if (Global_110706 == -1 || Global_110706 == 0)
		{
			Global_110706 = UNK_0x1C0640BA9A7327B3();
		}
		else if (func_41(Global_110706, 30000))
		{
			if (iLocal_54 == 0 || iLocal_54 == 3)
			{
				if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Global_110669, 1))
				{
					return true;
				}
			}
		}
	}
	if (func_39(Global_110669))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(Global_110669, false) };
		if (iLocal_55 == 4)
		{
			if (!func_38(vLocal_274, vVar0, 75f))
			{
				return true;
			}
		}
		if (UNK_0xB87D13D0C064E9D1(Global_110669, UNK_0x16F2683693E537C9(), 1))
		{
			return true;
		}
		if (UNK_0xD3DCEC81D13AAFB1(vVar0, 7f, false))
		{
			return true;
		}
		fVar3 = 15f;
		vVar4 = { vVar0 };
		vVar7 = { vVar4 };
		vVar4.x = (vVar4.x - fVar3);
		vVar4.f_1 = (vVar4.y - fVar3);
		vVar4.f_2 = (vVar4.z - fVar3);
		vVar7.x = (vVar7.x + fVar3);
		vVar7.f_1 = (vVar7.y + fVar3);
		vVar7.f_2 = (vVar7.z + fVar3);
		if (UNK_0x723EE7F83DF1497D(vVar4, vVar7, 1))
		{
			return true;
		}
		if (func_38(vLocal_274, vVar0, 20f))
		{
			if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), Global_110669) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), Global_110669))
			{
				return true;
			}
			if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	if (func_37(Global_110670))
	{
		if (UNK_0xB87D13D0C064E9D1(Global_110670, UNK_0x16F2683693E537C9(), 1))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_37(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_38(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return SYSTEM::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
}

bool func_39(bool bParam0)
{
	if (func_40(bParam0))
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

bool func_40(bool bParam0)
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

bool func_41(int iParam0, int iParam1)
{
	return (UNK_0x1C0640BA9A7327B3() - iParam0) > iParam1;
}

bool func_42(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (UNK_0xC844350D5D58C99A(*uParam0))
	{
		if (UNK_0xDF1306B443CD3D15(*uParam0, 0))
		{
			if (UNK_0xC844350D5D58C99A(*uParam1))
			{
				if (!UNK_0xEB6A8945D1AC98A1(*uParam1))
				{
					if (!UNK_0xE9FDA1035CFEA94F(*uParam1))
					{
						if (!UNK_0x4734A6196B611C3B(*uParam1, false))
						{
							if (UNK_0x82CCEAB29E9451DD(*uParam1, *uParam0))
							{
								if (UNK_0x134B62B726CEC8E6(*uParam0) == bParam2)
								{
									if (UNK_0x61C907EA8258B04D(*uParam1, bParam3))
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

void func_43()
{
	if (UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &cLocal_270, "HAIL_TAXI", 3) || UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &cLocal_270, "FP_HAIL_TAXI", 3))
	{
		return;
	}
	else if (func_41(iLocal_97, 3000))
	{
		UNK_0x3F423BF5B8125A50(&cLocal_270);
		if (UNK_0xB4AE0788C1587752(&cLocal_270))
		{
			if (func_44())
			{
				UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
				UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 113, true);
				if (UNK_0x09AC81E49EA267F7(false, 3) < 2)
				{
					UNK_0xC6EB89C59F2AF6B8(UNK_0x16F2683693E537C9(), &cLocal_270, "FORGET_IT", 4f, -2f, -1, 48, false, 0, 0, 0);
				}
				else
				{
					UNK_0xC6EB89C59F2AF6B8(UNK_0x16F2683693E537C9(), &cLocal_270, "FUCK_U", 4f, -2f, -1, 48, false, 0, 0, 0);
				}
			}
			if (UNK_0x09AC81E49EA267F7(false, 5) == 1)
			{
				if (!Global_42595)
				{
					bLocal_87 = true;
				}
			}
			iLocal_97 = UNK_0x1C0640BA9A7327B3();
			iLocal_98 = UNK_0x1C0640BA9A7327B3();
			if (iLocal_92 == 1)
			{
				UNK_0xA245D14CC59CDD36(UNK_0x16F2683693E537C9(), 1);
				iLocal_92 = 0;
			}
			if (iLocal_95 != -1)
			{
				func_8(&iLocal_95);
			}
			iLocal_55 = 0;
		}
	}
}

bool func_44()
{
	if (iLocal_54 != 0)
	{
		return false;
	}
	if (!UNK_0x552B9E1FD4519F80(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (UNK_0x85651FDAB8414096(UNK_0xD803B885F5E47A62()) || UNK_0xBBFFD1937ED16008(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9()))
	{
		return false;
	}
	if (!Global_42595 && UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()))
	{
		return false;
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
	{
		return false;
	}
	if (func_48(0))
	{
		return false;
	}
	if (func_47())
	{
		return false;
	}
	if (func_46())
	{
		return false;
	}
	if (func_45())
	{
		return false;
	}
	if (UNK_0xC8BC75555A67090D())
	{
		return false;
	}
	return true;
}

bool func_45()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

bool func_46()
{
	return Global_98796.f_346 > 0;
}

bool func_47()
{
	return Global_73825;
}

bool func_48(int iParam0)
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

void func_49()
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (func_42(&Global_110669, &Global_110670, bLocal_100, bLocal_99))
	{
		bVar0 = false;
		if (UNK_0x06F8112AA79C53D9(2, 23))
		{
			bVar0 = true;
		}
		if (func_41(iLocal_97, 1000))
		{
			if (UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), -2017877118) == 7)
			{
				if (((!UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &cLocal_270, "HAIL_TAXI", 3) && !UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &cLocal_270, "FP_HAIL_TAXI", 3)) && !UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &cLocal_270, "FUCK_U", 3)) && !UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &cLocal_270, "FORGET_IT", 3))
				{
					if (UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), 242628503) == 7)
					{
						UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 113, false);
						if (iLocal_92 == 1)
						{
							UNK_0xA245D14CC59CDD36(UNK_0x16F2683693E537C9(), 1);
							iLocal_92 = 0;
						}
						bVar0 = true;
					}
				}
			}
		}
		if (bVar0)
		{
			UNK_0x3F423BF5B8125A50(&cLocal_270);
			if (UNK_0xB4AE0788C1587752(&cLocal_270))
			{
				if (UNK_0x09AC81E49EA267F7(false, 10) < 8)
				{
					if (!func_54(0, 0))
					{
						bVar1 = UNK_0x9645CD1B04C4BFD3(UNK_0x16F2683693E537C9());
						if (bVar1)
						{
							UNK_0x33CE5A9E32EA10B2(UNK_0x16F2683693E537C9(), 0);
						}
						func_52(UNK_0x16F2683693E537C9(), "TAXI_HAIL", 34);
						if (bVar1)
						{
							UNK_0x33CE5A9E32EA10B2(UNK_0x16F2683693E537C9(), 1);
						}
					}
				}
				UNK_0xDD353D0E9C789D0E(&iVar2);
				UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 5000, 2048, 2);
				if (func_51(Global_110669))
				{
					UNK_0xC6EB89C59F2AF6B8(false, &cLocal_270, "Aknowledge_R", 8f, -4f, -1, 16785456, false, 0, 0, 0);
				}
				else
				{
					UNK_0xC6EB89C59F2AF6B8(false, &cLocal_270, "Aknowledge_L", 8f, -4f, -1, 16785456, false, 0, 0, 0);
				}
				UNK_0x60274E99F9B27DEA(false, Global_110669, Global_110669, 22, 12f, 262275, 3f, 3f, 1);
				UNK_0x60274E99F9B27DEA(false, Global_110669, Global_110669, 5, 12f, 262275, 3f, 3f, 1);
				UNK_0x75ABDC5F81978924(iVar2);
				UNK_0x78ADC381772E3D54(Global_110670, iVar2);
				UNK_0xF82EA857DA10E0CD(&iVar2);
				func_50();
				iLocal_55 = 4;
			}
		}
	}
	else
	{
		func_5();
	}
}

void func_50()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_93))
	{
		UNK_0x661342B9651D16E2(iLocal_93, false);
		UNK_0x142CC44DB769B57E(&iLocal_93);
	}
	if (func_39(Global_110669))
	{
		if (!UNK_0xE4EDC4B0E92C078B(iLocal_93))
		{
			iLocal_93 = UNK_0x5C3B41825F6AC5A0(Global_110669);
			UNK_0xBC8E0A7390523199(iLocal_93, 198);
			UNK_0xDC5B2F9D0CCE3A10(iLocal_93, "TXM_BLIP");
			UNK_0xF412DD40DE84CE72(iLocal_93, 1);
			UNK_0x0EC848EFF66DF45A(iLocal_93, 10000);
		}
	}
}

bool func_51(bool bParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
		vVar3 = { UNK_0x68E4ADDDDCD7BDDE(bParam0, 1f, 0f, 0f) };
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			vVar6 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		}
		vVar9 = { vVar3 - vVar0 };
		vVar12 = { vVar6 - vVar0 };
		if (UNK_0x07AB02F3C4AE2B04(vVar9.x, vVar9.y, vVar12.x, vVar12.y) < 90f)
		{
			return true;
		}
	}
	return false;
}

void func_52(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_53(iParam2), 1);
}

int func_53(int iParam0)
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

bool func_54(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0x65636D4556D82155(bParam0))
		{
			func_56("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(DriverID)\n");
			return true;
		}
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0x65636D4556D82155(UNK_0x16F2683693E537C9()))
		{
			func_56("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(PLAYER_PED_ID())\n");
			return true;
		}
	}
	if (func_55())
	{
		func_56("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_ANY_CONVERSATION_ONGOING_OR_QUEUED()\n");
		return true;
	}
	if (bParam1)
	{
		if (UNK_0xD17F06053799A7CA())
		{
			func_56("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_MESSAGE_BEING_DISPLAYED()\n");
			return true;
		}
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0x7AEFFBD77F2CF1EC(func_12()))
		{
			UNK_0xF5BDC0FED0F08D25(func_12(), &iVar2, &iVar1);
			if (iVar1 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					bVar0 = UNK_0x9B50A0F7FCCD175C(func_12(), iVar2);
					if (!UNK_0xEB6A8945D1AC98A1(bVar0))
					{
						if (UNK_0x65636D4556D82155(bVar0))
						{
							func_56("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(TempGroupPedID)\n");
							return true;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return false;
}

bool func_55()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_56(bool bParam0)
{
	func_57(bParam0);
}

void func_57(bool bParam0)
{
	if (UNK_0x7F8A39872A07D2CE(bParam0, bParam0))
	{
	}
}

void func_58()
{
	int iVar0;

	func_64();
	func_33();
	if (UNK_0xC844350D5D58C99A(bLocal_278))
	{
		if (func_22(&bLocal_278, bLocal_100, bLocal_99))
		{
			if (func_44())
			{
				UNK_0x3F423BF5B8125A50(&cLocal_270);
				if (UNK_0xB4AE0788C1587752(&cLocal_270))
				{
					if (((!UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &cLocal_270, "HAIL_TAXI", 3) && !UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &cLocal_270, "FP_HAIL_TAXI", 3)) && !UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &cLocal_270, "FUCK_U", 3)) && !UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &cLocal_270, "FORGET_IT", 3))
					{
						if (!func_63(&bLocal_278))
						{
							if (!UNK_0x1E8596FBA1986F3C(bLocal_278))
							{
								UNK_0x6301539B96E43BA1(bLocal_278, 1);
							}
						}
						if (iLocal_95 == -1)
						{
							func_62(&iLocal_95, 0, "TXM_H01", 1, 0, 0, 0);
						}
						if (func_61(iLocal_95, 1))
						{
							if (func_7("TXM_H01"))
							{
								UNK_0xA37A90C62806D848(1);
							}
							if (iLocal_92 == 0)
							{
								UNK_0xA245D14CC59CDD36(UNK_0x16F2683693E537C9(), 0);
								iLocal_92 = 1;
							}
							UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), bLocal_278, 5000, 0, 2);
							func_60();
							func_59();
							iLocal_97 = UNK_0x1C0640BA9A7327B3();
							func_8(&iLocal_95);
							if (func_63(&bLocal_278))
							{
								if (UNK_0xDF1306B443CD3D15(bLocal_278, 0))
								{
									UNK_0x6301539B96E43BA1(bLocal_278, 0);
								}
								bLocal_88 = false;
								iLocal_55 = 3;
							}
							else
							{
								iVar0 = UNK_0xA30B8362589C124A(bLocal_278, -1, 0);
								if (func_28(&bLocal_278, &iVar0, 0))
								{
									bLocal_278 = false;
									UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), Global_110669, 5000, 0, 2);
									Global_110706 = UNK_0x1C0640BA9A7327B3();
									if (UNK_0xDF1306B443CD3D15(Global_110669, 0))
									{
										if (!UNK_0x8C74DE122769E1BF())
										{
											UNK_0xB9BBC76CD5A81754(Global_110669, 0f, 0f, 0f, 1, 4000, 2000, 2000);
											bLocal_88 = true;
										}
									}
									Global_111638.f_10044.f_120 = 1;
									iLocal_55 = 2;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			func_5();
		}
	}
	else
	{
		func_5();
	}
}

void func_59()
{
	UNK_0x38C3A68D7861DCFD(0, 25, 1);
	UNK_0x38C3A68D7861DCFD(0, 37, 1);
	UNK_0x38C3A68D7861DCFD(0, 16, 1);
	UNK_0x38C3A68D7861DCFD(0, 17, 1);
	UNK_0x38C3A68D7861DCFD(0, 12, 1);
	UNK_0x38C3A68D7861DCFD(0, 13, 1);
	UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 113, true);
}

void func_60()
{
	int iVar0;
	bool bVar1;
	struct<20> Var2;
	struct<22> Var24;
	int iVar46;
	int iVar47;

	bVar1 = UNK_0x9645CD1B04C4BFD3(UNK_0x16F2683693E537C9());
	UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
	if (!Global_42595)
	{
		Var2.f_4 = 1065353216;
		Var2.f_5 = 1065353216;
		Var2.f_9 = 1065353216;
		Var2.f_10 = 1065353216;
		Var2.f_14 = 1065353216;
		Var2.f_15 = 1065353216;
		Var2.f_17 = 1040187392;
		Var2.f_18 = 1040187392;
		Var2.f_19 = -1;
		Var24.f_4 = 1065353216;
		Var24.f_5 = 1065353216;
		Var24.f_9 = 1065353216;
		Var24.f_10 = 1065353216;
		Var24.f_14 = 1065353216;
		Var24.f_15 = 1065353216;
		Var24.f_17 = 1040187392;
		Var24.f_18 = 1040187392;
		Var24.f_19 = -1;
		iVar46 = 0;
		if (UNK_0xA4FD7964FEE91ED8(UNK_0x5A0033B025D45F1B()) == 4)
		{
			Var24 = 1;
			Var24.f_2 = "FP_HAIL_TAXI";
			Var24.f_1 = "TAXI_HAIL";
			Var24.f_3 = 0f;
			Var24.f_4 = 1f;
			Var24.f_16 = UNK_0x12AB0310C2281427("UpperbodyAndIk_filter");
			iVar46 += 16;
			iVar46 += 32;
			iVar46 += 8192;
			Var24.f_20 = iVar46;
			Var24.f_21 = 1024;
		}
		else
		{
			Var24 = 1;
			Var24.f_2 = "HAIL_TAXI";
			Var24.f_1 = "TAXI_HAIL";
			Var24.f_3 = 0f;
			Var24.f_4 = 1f;
			Var24.f_16 = UNK_0x12AB0310C2281427("BONEMASK_HEAD_NECK_AND_L_ARM");
			iVar46 += 32;
			iVar46 += 8192;
			Var24.f_20 = iVar46;
		}
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar47, 1);
		if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 7) || (UNK_0x7F8A39872A07D2CE(Var24.f_2, "FP_HAIL_TAXI") && iVar47 == joaat("WEAPON_PETROLCAN")))
		{
			if (iVar47 != joaat("WEAPON_PETROLCAN") || !UNK_0x7F8A39872A07D2CE(Var24.f_2, "FP_HAIL_TAXI"))
			{
				UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 113, true);
			}
			UNK_0xDD353D0E9C789D0E(&iVar0);
			UNK_0x9294582561BECEE7(false, 0);
			UNK_0x20E1DF68CAB023FF(false, &Var24, &Var2, &Var2, 0.25f, 0.25f);
			UNK_0x75ABDC5F81978924(iVar0);
			UNK_0x78ADC381772E3D54(UNK_0x16F2683693E537C9(), iVar0);
			UNK_0xF82EA857DA10E0CD(&iVar0);
		}
		else
		{
			UNK_0x20E1DF68CAB023FF(UNK_0x16F2683693E537C9(), &Var24, &Var2, &Var2, 0.25f, 0.25f);
		}
	}
	else
	{
		if (bVar1)
		{
			UNK_0x33CE5A9E32EA10B2(UNK_0x16F2683693E537C9(), 0);
		}
		func_52(UNK_0x16F2683693E537C9(), "TAXI_HAIL_DRUNK", 7);
		if (bVar1)
		{
			UNK_0x33CE5A9E32EA10B2(UNK_0x16F2683693E537C9(), 1);
		}
	}
}

bool func_61(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_9(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!UNK_0xE1DBBD6CE209517C(UNK_0xA30EC016B12C03E4()))
	{
		return false;
	}
	if (func_48(0))
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

void func_62(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;

	if (UNK_0x8A22C4C08282BF26(joaat("CONTEXT_CONTROLLER")) < 1)
	{
	}
	if (UNK_0x991B1F0980C62628())
	{
		if (!*iParam0 == -1)
		{
			func_8(iParam0);
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

bool func_63(bool bParam0)
{
	bool bVar0;

	if (!UNK_0xBBA8A868118C90ED(*bParam0, true, 0))
	{
		bVar0 = UNK_0xA30B8362589C124A(*bParam0, true, 0);
		if (!bVar0 == UNK_0x16F2683693E537C9())
		{
			if (!UNK_0xBFDE4EE64C4BF2D6(bVar0, func_12()))
			{
				if (UNK_0x1E8596FBA1986F3C(*bParam0))
				{
					UNK_0x6301539B96E43BA1(*bParam0, 0);
				}
				return true;
			}
		}
	}
	if (!UNK_0xBBA8A868118C90ED(*bParam0, 2, 0))
	{
		bVar0 = UNK_0xA30B8362589C124A(*bParam0, 2, 0);
		if (!bVar0 == UNK_0x16F2683693E537C9())
		{
			if (!UNK_0xBFDE4EE64C4BF2D6(bVar0, func_12()))
			{
				if (UNK_0x1E8596FBA1986F3C(*bParam0))
				{
					UNK_0x6301539B96E43BA1(*bParam0, 0);
				}
				return true;
			}
		}
	}
	return false;
}

void func_64()
{
	bool bVar0;

	if (bLocal_87)
	{
		if (func_41(iLocal_98, 1000))
		{
			if (UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), -2017877118) == 7)
			{
				if (UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), 242628503) == 7)
				{
					if (((!UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &cLocal_270, "HAIL_TAXI", 3) && !UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &cLocal_270, "FP_HAIL_TAXI", 3)) && !UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &cLocal_270, "FUCK_U", 3)) && !UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &cLocal_270, "FORGET_IT", 3))
					{
						if (!Global_42595)
						{
							bVar0 = UNK_0x9645CD1B04C4BFD3(UNK_0x16F2683693E537C9());
							if (!bVar0)
							{
								UNK_0x33CE5A9E32EA10B2(UNK_0x16F2683693E537C9(), 1);
							}
							func_52(UNK_0x16F2683693E537C9(), "TAXI_DRIVES_PAST", 24);
							if (!bVar0)
							{
								UNK_0x33CE5A9E32EA10B2(UNK_0x16F2683693E537C9(), 0);
							}
						}
						UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 113, false);
						if (iLocal_92 == 1)
						{
							UNK_0xA245D14CC59CDD36(UNK_0x16F2683693E537C9(), 1);
							iLocal_92 = 0;
						}
						bLocal_87 = false;
					}
				}
			}
		}
	}
}

void func_65()
{
	if (iLocal_53 != 0)
	{
		if (func_107())
		{
			func_13();
		}
	}
	if (iLocal_53 == 0)
	{
	}
	else if (iLocal_53 == 1)
	{
		func_99();
	}
	else if (iLocal_53 == 2)
	{
		func_74();
	}
	else if (iLocal_53 == 3)
	{
		func_66();
	}
}

void func_66()
{
	if (func_67())
	{
		if (iLocal_54 == 0 && iLocal_55 != 4)
		{
			func_5();
			if (func_28(&Local_56, &(Local_56.f_1), 0))
			{
				Global_110706 = 0;
				if (func_39(Global_110669))
				{
					UNK_0x67B9E919FADF78E0(Global_110669, 2500, UNK_0x12AB0310C2281427("NORMAL"), 0);
				}
				if (UNK_0xC844350D5D58C99A(Global_110670))
				{
					if (!UNK_0xEB6A8945D1AC98A1(Global_110670))
					{
						UNK_0x0C8C0C840C2D1AD2(Global_110670, UNK_0x16F2683693E537C9(), 3000, 0, 2);
						UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), Global_110670, 3000, 0, 2);
					}
				}
				func_50();
				iLocal_55 = 4;
				func_13();
			}
			else
			{
				func_13();
			}
		}
	}
}

bool func_67()
{
	vector3 vVar0;

	vVar0 = { UNK_0x68F4C0EC296D3901(Local_56, false) };
	if (!Local_56.f_2)
	{
		if (!Local_56.f_3)
		{
			if (func_68(vVar0, Local_56.f_14, Local_56.f_6, &(Local_56.f_17), &(Local_56.f_6)))
			{
				if (!UNK_0x437347B10A200C4B(Local_56.f_1, 0))
				{
					UNK_0x9992C3A6A1766168(Local_56.f_1, 0.5f);
					if (Local_56.f_4)
					{
						UNK_0xE9362E4D600DD12A(Local_56.f_1, Local_56, Local_56.f_17, 10f, 0, UNK_0x134B62B726CEC8E6(Local_56), Local_56.f_29, 5f, UNK_0x0EB28750412C3A5A(vVar0, Local_56.f_17, 1));
						Local_56.f_4 = 0;
					}
					else
					{
						UNK_0x27F3789FF35EEDF1(Local_56.f_1, Local_56, Local_56.f_17, Local_56.f_6, 3, 90f, 1);
					}
				}
				Local_56.f_2 = 1;
			}
		}
		else
		{
			UNK_0x9992C3A6A1766168(Local_56.f_1, 0.5f);
			Local_56.f_17 = { vVar0 };
			UNK_0xD1F0F33C375B8446(Local_56.f_1, Local_56, 6, 15000);
			Local_56.f_2 = 1;
		}
	}
	else if (!func_19(Local_56.f_1, -272084098))
	{
		if (UNK_0x8B38C0DAEEDB5F9C(Local_56))
		{
			UNK_0xD1F0F33C375B8446(Local_56.f_1, Local_56, 1, 1000000);
			return true;
		}
	}
	else
	{
		if (func_38(vVar0, vLocal_274, 5f))
		{
			if (UNK_0x8B38C0DAEEDB5F9C(Local_56) || UNK_0xBBB54639BF9AAB8A(Local_56))
			{
				UNK_0xD1F0F33C375B8446(Local_56.f_1, Local_56, 1, 1000000);
				return true;
			}
		}
		if (!Local_56.f_3)
		{
			if (!func_38(vVar0, Local_56.f_17, 10f))
			{
				if (func_38(vVar0, vLocal_274, 5f))
				{
					Local_56.f_14 = { vLocal_274 };
					Local_56.f_3 = 1;
					Local_56.f_2 = 0;
				}
			}
		}
	}
	return false;
}

bool func_68(vector3 vParam0, vector3 vParam3, var uParam6, var uParam7, var uParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	bool bVar10;
	vector3 vVar11;
	vector3 vVar14;
	vector3 vVar17;
	float fVar20;

	bVar10 = true;
	if (!func_73(vParam3))
	{
		bVar10 = 9;
	}
	iVar9 = UNK_0xDEC4A70C9F250662(vParam3, 1, bVar10, 1077936128 /* Float: 3f */, 0);
	if (UNK_0x5DD62183BBF151CD(iVar9))
	{
		UNK_0x8502D8EBA9E78216(iVar9, &vVar0);
		if (UNK_0x48C17E97DDC41CBC(vVar0, 0, &vVar3) && UNK_0x48C17E97DDC41CBC(vVar0, 1, &vVar6))
		{
			vVar11 = { vVar3 - vVar0 };
			vVar14 = { -vVar11.y, vVar11.x, 0f };
			vVar17 = { vParam0 - vParam3 };
			fVar20 = func_72(vVar14, vVar17);
			if (fVar20 < 0f)
			{
				*uParam7 = { vVar3 };
				*uParam8 = uParam6;
				if (func_70(uParam7, vVar0))
				{
					Local_56.f_4 = 1;
				}
			}
			else
			{
				*uParam7 = { vVar6 };
				*uParam8 = (*uParam8 + 180f);
				*uParam8 = func_69(*uParam8, 0f, 360f);
				if (func_70(uParam7, vVar0))
				{
					Local_56.f_4 = 1;
				}
			}
			return true;
		}
		else if (UNK_0x48C17E97DDC41CBC(vVar0, -1, &vVar3))
		{
			*uParam7 = { vVar3 };
			*uParam8 = uParam6;
			return true;
		}
	}
	return false;
}

bool func_69(bool bParam0, bool bParam1, float fParam2)
{
	float fVar0;

	if (bParam1 == fParam2)
	{
		return bParam1;
	}
	fVar0 = (fParam2 - bParam1);
	bParam0 = (bParam0 - (IntToFloat(SYSTEM::ROUND(((bParam0 - bParam1) / fVar0))) * fVar0));
	if (bParam0 < bParam1)
	{
		bParam0 = (bParam0 + fVar0);
	}
	return bParam0;
}

bool func_70(var uParam0, vector3 vParam1)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	if (!UNK_0xE82754C349C7B581(*uParam0, uParam0->f_1, 1000f, &uVar0, 0, 0))
	{
		*uParam0 = { vParam1 };
		return false;
	}
	vVar1 = { *uParam0, uParam0->f_1, uVar0 };
	if (func_71(vVar1, vParam1))
	{
		vVar4 = { vParam1 - vVar1 / Vector(5f, 5f, 5f) };
		iVar7 = 1;
		while (iVar7 <= 5)
		{
			vVar1 = { vVar1 + vVar4 };
			if (!func_71(vVar1, vParam1))
			{
				*uParam0 = { vVar1 };
				return true;
			}
			iVar7++;
		}
		*uParam0 = { vParam1 };
		return true;
	}
	return false;
}

bool func_71(vector3 vParam0, vector3 vParam3)
{
	if ((vParam0.z - vParam3.z) > 0.45f || (vParam0.z - vParam3.z) < -0.45f)
	{
		return true;
	}
	return false;
}

float func_72(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_73(vector3 vParam0)
{
	bool bVar0;

	bVar0 = UNK_0xA5A6BB5EBAD59A21(vParam0);
	if (((((((((((((((((((((((((((((((((((((((((((((UNK_0x7F8A39872A07D2CE("SanAnd", bVar0) || UNK_0x7F8A39872A07D2CE("Alamo", bVar0)) || UNK_0x7F8A39872A07D2CE("ArmyB", bVar0)) || UNK_0x7F8A39872A07D2CE("BhamCa", bVar0)) || UNK_0x7F8A39872A07D2CE("Baytre", bVar0)) || UNK_0x7F8A39872A07D2CE("BradT", bVar0)) || UNK_0x7F8A39872A07D2CE("BradP", bVar0)) || UNK_0x7F8A39872A07D2CE("CANNY", bVar0)) || UNK_0x7F8A39872A07D2CE("CCreak", bVar0)) || UNK_0x7F8A39872A07D2CE("ChamH", bVar0)) || UNK_0x7F8A39872A07D2CE("CHU", bVar0)) || UNK_0x7F8A39872A07D2CE("COSI", bVar0)) || UNK_0x7F8A39872A07D2CE("CMSW", bVar0)) || UNK_0x7F8A39872A07D2CE("Cypre", bVar0)) || UNK_0x7F8A39872A07D2CE("Desrt", bVar0)) || UNK_0x7F8A39872A07D2CE("ELGorl", bVar0)) || UNK_0x7F8A39872A07D2CE("Galli", bVar0)) || UNK_0x7F8A39872A07D2CE("Galfish", bVar0)) || UNK_0x7F8A39872A07D2CE("Harmo", bVar0)) || UNK_0x7F8A39872A07D2CE("HumLab", bVar0)) || UNK_0x7F8A39872A07D2CE("Jail", bVar0)) || UNK_0x7F8A39872A07D2CE("LAct", bVar0)) || UNK_0x7F8A39872A07D2CE("LDam", bVar0)) || UNK_0x7F8A39872A07D2CE("Lago", bVar0)) || UNK_0x7F8A39872A07D2CE("MTChil", bVar0)) || UNK_0x7F8A39872A07D2CE("MTJose", bVar0)) || UNK_0x7F8A39872A07D2CE("MTGordo", bVar0)) || UNK_0x7F8A39872A07D2CE("NCHU", bVar0)) || UNK_0x7F8A39872A07D2CE("Oceana", bVar0)) || UNK_0x7F8A39872A07D2CE("Palmpow", bVar0)) || UNK_0x7F8A39872A07D2CE("PBluff", bVar0)) || UNK_0x7F8A39872A07D2CE("Paleto", bVar0)) || UNK_0x7F8A39872A07D2CE("PalCov", bVar0)) || UNK_0x7F8A39872A07D2CE("PalFor", bVar0)) || UNK_0x7F8A39872A07D2CE("PalHigh", bVar0)) || UNK_0x7F8A39872A07D2CE("RTRAK", bVar0)) || UNK_0x7F8A39872A07D2CE("Rancho", bVar0)) || UNK_0x7F8A39872A07D2CE("SANDY", bVar0)) || UNK_0x7F8A39872A07D2CE("TongvaH", bVar0)) || UNK_0x7F8A39872A07D2CE("TongvaV", bVar0)) || UNK_0x7F8A39872A07D2CE("Zenora", bVar0)) || UNK_0x7F8A39872A07D2CE("Slab", bVar0)) || UNK_0x7F8A39872A07D2CE("WindF", bVar0)) || UNK_0x7F8A39872A07D2CE("Zancudo", bVar0)) || UNK_0x7F8A39872A07D2CE("SanChia", bVar0)) || UNK_0x7F8A39872A07D2CE("zQ_UAR", bVar0))
	{
		return true;
	}
	return false;
}

void func_74()
{
	if (func_75())
	{
		Local_56.f_2 = 0;
		iLocal_53 = 3;
	}
}

bool func_75()
{
	vector3 vVar0;

	if (!Local_56.f_2)
	{
		if (func_76(Local_56.f_20, &(Local_56.f_14), &(Local_56.f_6), &(Local_56.f_8), 250))
		{
			UNK_0xE9362E4D600DD12A(Local_56.f_1, Local_56, Local_56.f_14, 12f, 0, UNK_0x134B62B726CEC8E6(Local_56), Local_56.f_29, (Local_56.f_7 - 20f), 20f);
			Local_56.f_2 = 1;
		}
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(Local_56, true) };
		if (func_38(vVar0, Local_56.f_14, Local_56.f_7))
		{
			return true;
		}
		else if (func_38(vVar0, vLocal_274, 5f))
		{
			Local_56.f_14 = { vLocal_274 };
			return true;
		}
		else if (!func_19(Local_56.f_1, -1817882002))
		{
			Local_56.f_2 = 0;
			Local_56.f_8 = 0;
		}
	}
	return false;
}

bool func_76(vector3 vParam0, float fParam3, bool bParam4, var uParam5, int iParam6)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	bool bVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;

	bVar0 = 3f;
	bVar1 = 2.5f;
	bVar3 = false;
	iVar6 = *uParam5 + 2;
	iVar7 = 50;
	bVar8 = false;
	bVar9 = true;
	if (!func_73(vParam0))
	{
		bVar9 = 9;
	}
	func_97(vParam0, vParam0, &(Local_56.f_23), &(Local_56.f_26), iParam6);
	if (func_96(Local_56.f_23, Local_56.f_26))
	{
		if (!func_79(vParam0, fParam3, bParam4, 1))
		{
			while (!bVar8 && *uParam5 < iVar6)
			{
				if (vParam0.z == 1f)
				{
					bVar0 = 0f;
				}
				if (UNK_0x4A13F7D4B1E239A0(vParam0, *uParam5, fParam3, bParam4, &uVar4, bVar9, bVar0, bVar1))
				{
					iVar5 = UNK_0xDEC4A70C9F250662(*fParam3, 1, bVar9, 1077936128 /* Float: 3f */, 0);
					if (UNK_0x5DD62183BBF151CD(iVar5))
					{
						fVar2 = (vParam0.z - fParam3->f_2);
						if (fVar2 < 0f)
						{
							fVar2 = (fVar2 * -1f);
						}
						if (func_78(vParam0, *fParam3) || fVar2 < 0.5f)
						{
							if (UNK_0xDF1306B443CD3D15(Local_56, 0))
							{
								bVar3 = Local_56;
							}
							if (!UNK_0x9868643FAC294133(*fParam3, 3f, 3f, 3f, bVar3))
							{
								bVar8 = true;
							}
						}
					}
				}
				*uParam5++;
				if (*uParam5 >= iVar7)
				{
					bVar8 = true;
				}
			}
		}
		else
		{
			bVar8 = true;
		}
		if (bVar8)
		{
			Local_56.f_5 = func_77(vParam0, *fParam3);
			return true;
		}
	}
	return false;
}

float func_77(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;

	vVar0 = { vParam0 - vParam3 };
	vVar0.f_2 = 0f;
	return SYSTEM::VMAG(vVar0);
}

bool func_78(vector3 vParam0, vector3 vParam3)
{
	float fVar0;
	float fVar1;

	fVar1 = (vParam3.z - vParam0.z);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 * -1f);
	}
	if (vParam0.z <= 1f)
	{
		func_56("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return true;
	}
	fVar0 = SYSTEM::VDIST(vParam0, vParam3);
	fVar0 = (fVar0 / 1.75f);
	if (fVar1 < fVar0)
	{
		func_56("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return true;
	}
	return false;
}

bool func_79(vector3 vParam0, int iParam3, bool bParam4, int iParam5)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4[6];
	int iVar23;
	float fVar24;
	float fVar25;
	int iVar26;
	vector3 vVar27;
	float fVar30;
	float fVar31;
	vector3 vVar32;
	float fVar35;
	float fVar36;
	bool bVar37;

	if (func_95(vParam0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*iParam3 = { 1261.58f, -3332.685f, 5.4191f };
		*bParam4 = 163.87f;
		return true;
	}
	else if (func_95(vParam0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*iParam3 = { -1577.16f, 5166.51f, 19.1864f };
		*bParam4 = 0f;
		return true;
	}
	else if (func_95(vParam0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f))
	{
		*iParam3 = { -856.6151f, 163.7361f, 65.093f };
		*bParam4 = 355.3355f;
		return true;
	}
	else if (func_95(vParam0, -39.2005f, -1473.55f, -100f, 10.6133f, -1430.099f, 100f))
	{
		*iParam3 = { -15.5181f, -1456.4f, 29.4244f };
		*bParam4 = 94.6893f;
		return true;
	}
	else if (func_95(vParam0, 1964.742f, 3792.59f, -100f, 1992.636f, 3840.253f, 100f))
	{
		*iParam3 = { 1996.372f, 3818.831f, 31.1612f };
		*bParam4 = 170.0221f;
		return true;
	}
	else if (UNK_0x0399732A9EBC368E(vParam0, -68.2187f, -1086.951f, -100f, -10.54518f, -1106.895f, 100f, 43.5f, 0, true))
	{
		*iParam3 = { -63.5854f, -1074.732f, 26.0995f };
		*bParam4 = 324.1257f;
		return true;
	}
	else if (UNK_0x0399732A9EBC368E(vParam0, 398.7899f, -1651.417f, -100f, 423.8372f, -1619.432f, 100f, 45f, 0, true))
	{
		*iParam3 = { 416.871f, -1613.081f, 28.1401f };
		*bParam4 = 227.9333f;
		return true;
	}
	else if (UNK_0x0399732A9EBC368E(vParam0, -988.8535f, -2553.177f, -100f, -1041.486f, -2644.97f, 100f, 49.75f, 0, true) && !UNK_0x8CD06866876216F2())
	{
		*iParam3 = { -1039.542f, -2574.467f, 12.7566f };
		*bParam4 = 162.2744f;
		return true;
	}
	else if (UNK_0x0399732A9EBC368E(vParam0, -906.902f, -2600.461f, -100f, -959.7651f, -2692.057f, 100f, 49.75f, 0, true) && !UNK_0x8CD06866876216F2())
	{
		*iParam3 = { -911.1597f, -2676.132f, 12.7567f };
		*bParam4 = 338.9414f;
		return true;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 28f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, -209.3372f, -2011.099f, 26.62037f, -257.2225f, -2076.963f, 36.62037f, 30f, 0, true))
	{
		*iParam3 = { -211.8546f, -2030.771f, 26.6204f };
		*bParam4 = 154.4302f;
		return true;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 159f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0, true))
	{
		*iParam3 = { -623.3622f, 3996f, 120.7669f };
		*bParam4 = 37.8784f;
		return true;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 180f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, -2203.167f, 183.3549f, 167.4022f, -2311.587f, 434.3828f, 195.4669f, 138.5f, 0, true))
	{
		*iParam3 = { -2294.945f, 376.2506f, 173.4669f };
		*bParam4 = 296.6963f;
		return true;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 10f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, -2041.478f, -553.2159f, -0.089962f, -1787.08f, -768.0886f, 37.99918f, 220f, 0, true))
	{
		*iParam3 = { -1897.077f, -557.3334f, 10.7279f };
		*bParam4 = 228.7709f;
		if (UNK_0x0399732A9EBC368E(vVar1, -1882.883f, -541.7442f, 4.675224f, -1929.626f, -598.6026f, 40.4298f, 35f, 0, true))
		{
			return true;
		}
		else
		{
			vVar4[0 /*3*/] = { -1962.468f, -503.4229f, 10.8349f };
			vVar4[1 /*3*/] = { -1924.472f, -534.7357f, 10.8181f };
			vVar4[2 /*3*/] = { -1896.324f, -557.768f, 10.7256f };
			vVar4[3 /*3*/] = { -1850.661f, -595.8367f, 10.4649f };
			vVar4[4 /*3*/] = { -1809f, -632.1207f, 10.0016f };
			vVar4[5 /*3*/] = { -1745.043f, -694.4053f, 9.1245f };
			iVar23 = -1;
			fVar24 = 99999f;
			iVar26 = 0;
			while (iVar26 <= 5)
			{
				fVar25 = SYSTEM::VDIST(vVar4[iVar26 /*3*/], vVar1);
				if (fVar25 < fVar24)
				{
					fVar24 = fVar25;
					iVar23 = iVar26;
				}
				iVar26++;
			}
			*iParam3 = { vVar4[iVar23 /*3*/] };
			if (iVar23 == 0)
			{
				*bParam4 = 234.3999f;
			}
			else if (iVar23 == 1)
			{
				*bParam4 = 232.2255f;
			}
			else if (iVar23 == 2)
			{
				*bParam4 = 228.2855f;
			}
			else if (iVar23 == 3)
			{
				*bParam4 = 231.4914f;
			}
			else if (iVar23 == 4)
			{
				*bParam4 = 230.6703f;
			}
			else if (iVar23 == 5)
			{
				*bParam4 = 228.7709f;
			}
			return true;
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 330f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, -446.12f, 1057.452f, 318.6169f, -405.8336f, 1194.486f, 337.0966f, 106.25f, 0, true))
	{
		*iParam3 = { -411.3629f, 1174.587f, 324.6421f };
		*bParam4 = 255.2881f;
		return true;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 20f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, -1362.091f, -29.26777f, -100f, -1377.953f, 152.2389f, 100f, 50f, 0, true))
	{
		bVar0 = (iParam5 % 8);
		switch (bVar0)
		{
			case 1:
				*iParam3 = { -1380.101f, 95.1566f, 53.5054f };
				*bParam4 = 4.555f;
				break;
			case 2:
				*iParam3 = { -1379.139f, 84.2472f, 53.0592f };
				*bParam4 = 6.9278f;
				break;
			case 3:
				*iParam3 = { -1378.427f, 74.5077f, 52.6622f };
				*bParam4 = 2.6813f;
				break;
			case 4:
				*iParam3 = { -1384.177f, 73.9207f, 52.7438f };
				*bParam4 = 5.542f;
				break;
			case 5:
				*iParam3 = { -1381.118f, 35.7838f, 52.659f };
				*bParam4 = 7.6687f;
				break;
			case 6:
				*iParam3 = { -1383.741f, 64.1491f, 52.6647f };
				*bParam4 = 2.5572f;
				break;
			case 7:
				*iParam3 = { -1382.616f, 49.6876f, 52.6585f };
				*bParam4 = 3.0185f;
				break;
			default:
				*iParam3 = { -1383.299f, 54.4598f, 52.6562f };
				*bParam4 = 6.2155f;
				break;
		}
		return true;
	}
	else if (UNK_0x8CD06866876216F2())
	{
		if (UNK_0x0399732A9EBC368E(vParam0, 48.31006f, -1120.669f, 28.0305f, -12.12345f, -1112.084f, 36.08567f, 60f, 0, true))
		{
			bVar0 = (iParam5 % 8);
			switch (bVar0)
			{
				case 1:
					*iParam3 = { 50.9889f, -1092.525f, 28.2152f };
					*bParam4 = 150.8833f;
					break;
				case 2:
					*iParam3 = { 46.7725f, -1099.751f, 28.1639f };
					*bParam4 = 149.4322f;
					break;
				case 3:
					*iParam3 = { 41.6146f, -1107.742f, 28.1318f };
					*bParam4 = 154.1378f;
					break;
				case 4:
					*iParam3 = { 38.1922f, -1113.394f, 28.1507f };
					*bParam4 = 146.3778f;
					break;
				case 5:
					*iParam3 = { 13.0436f, -1124.767f, 27.7359f };
					*bParam4 = 91.163f;
					break;
				case 6:
					*iParam3 = { 1.4336f, -1125.042f, 27.1705f };
					*bParam4 = 91.0578f;
					break;
				case 7:
					*iParam3 = { -11.1811f, -1125.811f, 26.3688f };
					*bParam4 = 91.866f;
					break;
				default:
					*iParam3 = { 21.9431f, -1124.573f, 27.9417f };
					*bParam4 = 91.6961f;
					break;
			}
			return true;
		}
		else if (UNK_0x0399732A9EBC368E(vParam0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0, true))
		{
			bVar0 = (iParam5 % 8);
			switch (bVar0)
			{
				case 1:
					*iParam3 = { -1023.982f, -2489.882f, 19.0755f };
					*bParam4 = 148.7004f;
					break;
				case 2:
					*iParam3 = { -1029.968f, -2500.438f, 19.0803f };
					*bParam4 = 148.7144f;
					break;
				case 3:
					*iParam3 = { -1070.546f, -2570.859f, 19.0836f };
					*bParam4 = 150.0955f;
					break;
				case 4:
					*iParam3 = { -1056.065f, -2545.662f, 19.0809f };
					*bParam4 = 149.5649f;
					break;
				case 5:
					*iParam3 = { -1050.578f, -2536.219f, 19.0824f };
					*bParam4 = 150.7363f;
					break;
				case 6:
					*iParam3 = { -1036.032f, -2510.902f, 19.0794f };
					*bParam4 = 147.2113f;
					break;
				case 7:
					*iParam3 = { -1044.487f, -2525.534f, 19.079f };
					*bParam4 = 150.7597f;
					break;
				default:
					*iParam3 = { -1064.5f, -2560.653f, 19.0905f };
					*bParam4 = 150.7081f;
					break;
			}
			return true;
		}
		else if (UNK_0x0399732A9EBC368E(vParam0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0, true))
		{
			bVar0 = (iParam5 % 8);
			switch (bVar0)
			{
				case 1:
					*iParam3 = { -1044.741f, -2528.786f, 12.7568f };
					*bParam4 = 150.9439f;
					break;
				case 2:
					*iParam3 = { -1050.763f, -2539.498f, 12.7566f };
					*bParam4 = 150.851f;
					break;
				case 3:
					*iParam3 = { -1054.952f, -2546.86f, 12.7566f };
					*bParam4 = 149.9285f;
					break;
				case 4:
					*iParam3 = { -1060.397f, -2556.898f, 12.6066f };
					*bParam4 = 150.8244f;
					break;
				case 5:
					*iParam3 = { -1020.744f, -2490.084f, 12.6396f };
					*bParam4 = 148.6134f;
					break;
				case 6:
					*iParam3 = { -1076.904f, -2589.179f, 12.6858f };
					*bParam4 = 149.0112f;
					break;
				case 7:
					*iParam3 = { -1026.387f, -2501.952f, 12.6923f };
					*bParam4 = 149.7553f;
					break;
				default:
					*iParam3 = { -1070.506f, -2578.389f, 12.6932f };
					*bParam4 = 148.5232f;
					break;
			}
			return true;
		}
		else if (UNK_0x0399732A9EBC368E(vParam0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0, true))
		{
			bVar0 = (iParam5 % 8);
			switch (bVar0)
			{
				case 1:
					*iParam3 = { -1067.846f, -2708.94f, 19.0588f };
					*bParam4 = 230.9025f;
					break;
				case 2:
					*iParam3 = { -1058.224f, -2716.217f, 19.06f };
					*bParam4 = 237.1285f;
					break;
				case 3:
					*iParam3 = { -1004.567f, -2744.797f, 19.0811f };
					*bParam4 = 255.6885f;
					break;
				case 4:
					*iParam3 = { -1049.509f, -2721.58f, 19.0546f };
					*bParam4 = 242.3581f;
					break;
				case 5:
					*iParam3 = { -1017.154f, -2740.117f, 19.0525f };
					*bParam4 = 243.5798f;
					break;
				case 6:
					*iParam3 = { -1042.087f, -2726.077f, 19.0452f };
					*bParam4 = 240.2381f;
					break;
				case 7:
					*iParam3 = { -1027.353f, -2734.462f, 19.0509f };
					*bParam4 = 239.8703f;
					break;
				default:
					*iParam3 = { -1033.74f, -2730.746f, 19.0521f };
					*bParam4 = 239.9237f;
					break;
			}
			return true;
		}
		else if (UNK_0x0399732A9EBC368E(vParam0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0, true))
		{
			bVar0 = (iParam5 % 8);
			switch (bVar0)
			{
				case 1:
					*iParam3 = { -971.9154f, -2749.122f, 12.6069f };
					*bParam4 = 265.8022f;
					break;
				case 2:
					*iParam3 = { -980.6166f, -2748.535f, 12.757f };
					*bParam4 = 263.5472f;
					break;
				case 3:
					*iParam3 = { -987.6072f, -2747.273f, 12.6069f };
					*bParam4 = 257.2886f;
					break;
				case 4:
					*iParam3 = { -1006.815f, -2739.345f, 12.6334f };
					*bParam4 = 242.1315f;
					break;
				case 5:
					*iParam3 = { -1051.83f, -2713.553f, 12.6333f };
					*bParam4 = 239.9312f;
					break;
				case 6:
					*iParam3 = { -1041.004f, -2719.647f, 12.6402f };
					*bParam4 = 240.1081f;
					break;
				case 7:
					*iParam3 = { -1023.832f, -2729.465f, 12.6445f };
					*bParam4 = 239.6737f;
					break;
				default:
					*iParam3 = { -1012.848f, -2735.172f, 12.6656f };
					*bParam4 = 237.6545f;
					break;
			}
			return true;
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 20f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, 845.7216f, -990.7473f, 37.4696f, 846.3397f, -1066.88f, 16.96623f, 90f, 0, true))
	{
		bVar0 = (iParam5 % 8);
		switch (bVar0)
		{
			case 1:
				*iParam3 = { 868.1039f, -995.9224f, 29.7369f };
				*bParam4 = 93.132f;
				break;
			case 2:
				*iParam3 = { 859.283f, -996.4102f, 28.7865f };
				*bParam4 = 92.2581f;
				break;
			case 3:
				*iParam3 = { 849.4288f, -997.1062f, 27.5347f };
				*bParam4 = 92.714f;
				break;
			case 4:
				*iParam3 = { 841.1268f, -997.4826f, 26.5744f };
				*bParam4 = 92.8628f;
				break;
			case 5:
				*iParam3 = { 831.2605f, -1009.556f, 25.599f };
				*bParam4 = 268.6186f;
				break;
			case 6:
				*iParam3 = { 844.6506f, -1010.09f, 26.9894f };
				*bParam4 = 270.076f;
				break;
			case 7:
				*iParam3 = { 852.2498f, -1010.132f, 27.8091f };
				*bParam4 = 269.722f;
				break;
			default:
				*iParam3 = { 861.4028f, -1010.025f, 28.808f };
				*bParam4 = 270.7686f;
				break;
		}
		return true;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 20f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, 767.3736f, -1077.429f, -10.78654f, 682.8284f, -1080.686f, 79.67303f, 60f, 0, true))
	{
		bVar0 = (iParam5 % 8);
		switch (bVar0)
		{
			case 1:
				*iParam3 = { 703.2726f, -1067.7f, 21.4765f };
				*bParam4 = 181.3629f;
				break;
			case 2:
				*iParam3 = { 715.2089f, -1070.399f, 21.2708f };
				*bParam4 = 175.4362f;
				break;
			case 3:
				*iParam3 = { 715.2911f, -1059.42f, 21.0876f };
				*bParam4 = 181.0347f;
				break;
			case 4:
				*iParam3 = { 709.6841f, -1086.78f, 21.419f };
				*bParam4 = 233.169f;
				break;
			case 5:
				*iParam3 = { 703.807f, -1057.866f, 21.4152f };
				*bParam4 = 170.1609f;
				break;
			case 6:
				*iParam3 = { 708.1994f, -1048.194f, 21.216f };
				*bParam4 = 134.2729f;
				break;
			case 7:
				*iParam3 = { 711.1124f, -1069.423f, 21.3129f };
				*bParam4 = 177.9198f;
				break;
			default:
				*iParam3 = { 703.545f, -1078.718f, 21.3987f };
				*bParam4 = 180.5686f;
				break;
		}
		return true;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 31f;
	}
	if (func_92(3, vVar1))
	{
		if (func_91(vVar1, 3, 0, 0))
		{
			*iParam3 = { -1520.121f, 2731.511f, 16.6437f };
			*bParam4 = 48.1572f;
			return true;
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 77.2f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, 1535.987f, -2041.497f, 68.21275f, 1529.357f, -2204.463f, 96.11195f, 105f, 0, true))
	{
		*iParam3 = { 1540.75f, -2051.49f, 76.85f };
		*bParam4 = 255.41f;
		return true;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 51.1739f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, 1185.81f, -1768.367f, 28.31145f, 1369.068f, -1701.452f, 66.25389f, 70f, 1, true))
	{
		if (func_90(vVar1, 1283.326f, -1731.522f, 51.78555f, 17f))
		{
			*iParam3 = { 1283.326f, -1731.522f, 51.78555f };
			*bParam4 = 275.4274f;
			return true;
		}
		if (func_90(vVar1, 1334.386f, -1709.762f, 55.70131f, 41f))
		{
			*iParam3 = { 1334.386f, -1709.762f, 55.70131f };
			*bParam4 = 275.4411f;
			return true;
		}
		if (func_90(vVar1, 1246.166f, -1750.625f, 45.35691f, 28f))
		{
			*iParam3 = { 1246.166f, -1750.625f, 45.35691f };
			*bParam4 = 301.2981f;
			return true;
		}
		if (func_90(vVar1, 1196.272f, -1753.051f, 37.63976f, 32f))
		{
			*iParam3 = { 1196.272f, -1753.051f, 37.63976f };
			*bParam4 = 209.4354f;
			return true;
		}
		*iParam3 = { 1283.326f, -1731.522f, 51.78555f };
		*bParam4 = 275.4274f;
		return true;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 25f;
	}
	if (func_90(vVar1, -1693.302f, -1109.13f, 17.89778f, 240f))
	{
		if ((UNK_0x0399732A9EBC368E(vVar1, -1538.981f, -941.1323f, 10.56623f, -1715.57f, -1139.766f, 52.20361f, 110f, 0, true) || UNK_0x0399732A9EBC368E(vVar1, -1739.989f, -1115.973f, 10.08726f, -1800.515f, -1187.18f, 52.0172f, 25f, 0, true)) || UNK_0x0399732A9EBC368E(vVar1, -1801.766f, -1180.252f, 4.017236f, -1857.718f, -1244.628f, 38.49653f, 85f, 0, true))
		{
			*iParam3 = { -1624.445f, -976.9755f, 12.0175f };
			*bParam4 = 141.167f;
			return true;
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 10f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, -1140.89f, -1573.135f, -6.566939f, -1067.084f, -1675.976f, 23.53153f, 52f, 0, true))
	{
		*iParam3 = { -1095.63f, -1577.24f, 3.82f };
		*bParam4 = 216.12f;
		return true;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 114f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0, true))
	{
		bVar0 = 3;
		switch (UNK_0x09AC81E49EA267F7(false, bVar0))
		{
			case 0:
				*iParam3 = { 1369.246f, 1147.653f, 112.7592f };
				*bParam4 = 182.0998f;
				break;
			case 1:
				*iParam3 = { 1360.848f, 1139.121f, 112.7592f };
				*bParam4 = 83.3356f;
				break;
			case 2:
				*iParam3 = { 1364.751f, 1154.367f, 112.7592f };
				*bParam4 = 223.2795f;
				break;
		}
		return true;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 40f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, 1737.39f, 3287.795f, 35.13897f, 1724.345f, 3337.854f, 57.20038f, 40f, 0, true))
	{
		*iParam3 = { 1782.19f, 3300.076f, 40.4593f };
		*bParam4 = 142.426f;
		return true;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 7f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, -695.7981f, -1379.678f, 24.48124f, -777.3731f, -1491.13f, -3.594945f, 72f, 0, true))
	{
		*iParam3 = { -658.2056f, -1388.789f, 9.499f };
		*bParam4 = 174.6945f;
		return true;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 325f;
	}
	if (SYSTEM::VDIST2(vVar1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
	{
		*iParam3 = { -142.367f, -895.0251f, 28.191f };
		*bParam4 = 71.6555f;
		return true;
	}
	if (!func_81())
	{
		vVar1 = { vParam0 };
		if (vParam0.z == 1f)
		{
			vVar1.f_2 = 36.1141f;
		}
		if (func_92(7, vVar1))
		{
			if (func_91(vVar1, 7, 0, 0))
			{
				*iParam3 = { -1012.31f, -465.1634f, 36.1141f };
				*bParam4 = 112.1485f;
				return true;
			}
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 12.7091f;
	}
	if (func_92(2, vVar1))
	{
		if (func_91(vVar1, 2, 0, 0))
		{
			bVar0 = 4;
			if (!UNK_0x8CD06866876216F2())
			{
				switch (UNK_0x09AC81E49EA267F7(false, bVar0))
				{
					case 0:
						*iParam3 = { -979.95f, -2746.109f, 12.7091f };
						*bParam4 = 91.4929f;
						break;
					case 1:
						*iParam3 = { -1025.193f, -2728.218f, 12.6647f };
						*bParam4 = 239.0041f;
						break;
					case 2:
						*iParam3 = { -1051.315f, -2713.069f, 12.6676f };
						*bParam4 = 236.4666f;
						break;
					case 3:
						*iParam3 = { -1095.742f, -2637.871f, 12.6461f };
						*bParam4 = 188.9897f;
						break;
				}
			}
			else
			{
				bVar0 = (iParam5 % 8);
				switch (bVar0)
				{
					case 1:
						*iParam3 = { -1023.982f, -2489.882f, 19.0755f };
						*bParam4 = 148.7004f;
						break;
					case 2:
						*iParam3 = { -1029.968f, -2500.438f, 19.0803f };
						*bParam4 = 148.7144f;
						break;
					case 3:
						*iParam3 = { -1070.546f, -2570.859f, 19.0836f };
						*bParam4 = 150.0955f;
						break;
					case 4:
						*iParam3 = { -1056.065f, -2545.662f, 19.0809f };
						*bParam4 = 149.5649f;
						break;
					case 5:
						*iParam3 = { -1050.578f, -2536.219f, 19.0824f };
						*bParam4 = 150.7363f;
						break;
					case 6:
						*iParam3 = { -1036.032f, -2510.902f, 19.0794f };
						*bParam4 = 147.2113f;
						break;
					case 7:
						*iParam3 = { -1044.487f, -2525.534f, 19.079f };
						*bParam4 = 150.7597f;
						break;
					default:
						*iParam3 = { -1064.5f, -2560.653f, 19.0905f };
						*bParam4 = 150.7081f;
						break;
				}
			}
			return true;
		}
	}
	vVar27 = { -509.5746f, 4938.918f, 146.3271f };
	fVar30 = 232.0109f;
	fVar31 = func_80(vParam0, vVar27);
	vVar32 = { 2450.604f, 5129.224f, 45.9722f };
	fVar35 = 241.1957f;
	fVar36 = func_80(vParam0, vVar32);
	vVar1 = { vParam0 };
	bVar37 = false;
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 400f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0, true))
	{
		bVar37 = true;
	}
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 200f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0, true))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*iParam3 = { vVar27 };
		*bParam4 = fVar30;
		if (fVar36 < fVar31)
		{
			*iParam3 = { vVar32 };
			*bParam4 = fVar35;
		}
		return true;
	}
	bVar37 = false;
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 700f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0, true))
	{
		bVar37 = true;
	}
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 300f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0, true))
	{
		bVar37 = true;
	}
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 100f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0, true))
	{
		bVar37 = true;
	}
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 65f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0, true))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*iParam3 = { vVar32 };
		*bParam4 = fVar35;
		if (fVar31 < fVar36)
		{
			*iParam3 = { vVar27 };
			*bParam4 = fVar30;
		}
		return true;
	}
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 6f;
	}
	if (func_38(vVar1, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((UNK_0x0399732A9EBC368E(vVar1, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0, true) || UNK_0x0399732A9EBC368E(vVar1, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0, true)) || UNK_0x0399732A9EBC368E(vVar1, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0, true)) || UNK_0x0399732A9EBC368E(vVar1, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0, true)) || UNK_0x0399732A9EBC368E(vVar1, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0, true))
		{
			bVar0 = 2;
			if (UNK_0x09AC81E49EA267F7(false, bVar0) == 0)
			{
				*iParam3 = { 29.5582f, -2553.587f, 5.0004f };
				*bParam4 = 253.9545f;
			}
			else
			{
				*iParam3 = { -189.6824f, -2531.649f, 5.0031f };
				*bParam4 = 0.0408f;
			}
			return true;
		}
	}
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 28.4f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, 412.279f, 6481.868f, 25.80821f, 468.9353f, 6442.752f, 45.60727f, 24f, 0, true))
	{
		*iParam3 = { 445.231f, 6476.948f, 28.4862f };
		*bParam4 = 219.4788f;
		return true;
	}
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 28.2065f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0, true))
	{
		*iParam3 = { 498.185f, -1288.535f, 28.1923f };
		*bParam4 = 181.3208f;
		return true;
	}
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 28.2065f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0, true))
	{
		*iParam3 = { 504.1738f, -1421.251f, 28.2065f };
		*bParam4 = 83.2905f;
		return true;
	}
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 73f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, 951.1704f, -147.0047f, 71.54326f, 1005.245f, -98.44745f, 95.62679f, 70f, 0, true))
	{
		*iParam3 = { 961.3104f, -150.1964f, 73.4016f };
		*bParam4 = 58.9938f;
		return true;
	}
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 52f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, 0, true))
	{
		*iParam3 = { 1118.751f, 262.0209f, 79.8555f };
		*bParam4 = 52.3086f;
		return true;
	}
	else if (UNK_0x0399732A9EBC368E(vVar1, 1137.022f, 89.06853f, 71.89022f, 1010.046f, -91.56699f, 103.4568f, 180f, 0, true))
	{
		*iParam3 = { 1134.053f, 53.1835f, 79.7553f };
		*bParam4 = 145.5134f;
		return true;
	}
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 30.6f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, 191.8731f, -723.553f, 40.23576f, 79.58656f, -687.6684f, 29.54734f, 85f, 0, true))
	{
		bVar0 = 2;
		if (UNK_0x09AC81E49EA267F7(false, bVar0) == 0)
		{
			*iParam3 = { 182.6361f, -753.5836f, 31.8051f };
			*bParam4 = 162.0019f;
		}
		else
		{
			*iParam3 = { 81.5318f, -675.4875f, 30.5695f };
			*bParam4 = 341.8541f;
		}
		return true;
	}
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 33.5f;
	}
	if (UNK_0x0399732A9EBC368E(vVar1, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, 0, true) || UNK_0x0399732A9EBC368E(vVar1, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, 0, true))
	{
		*iParam3 = { -88.4f, -660.9f, 35f };
		*bParam4 = -20f;
		return true;
	}
	else if (UNK_0x0399732A9EBC368E(vVar1, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, 0, true))
	{
		*iParam3 = { 61.4f, -653.2f, 32f };
		*bParam4 = 160f;
		return true;
	}
	if (UNK_0x0399732A9EBC368E(vParam0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.258f, 5.7109f, 10f, 0, true))
	{
		*iParam3 = { 484.0132f, -3033.162f, 5.0717f };
		*bParam4 = 140.7302f;
		return true;
	}
	return false;
}

float func_80(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return SYSTEM::VDIST2(Param0, Param0.f_1, 0f, Param3, Param3.f_1, 0f);
}

bool func_81()
{
	int iVar0;

	iVar0 = func_83();
	if (iVar0 == 0)
	{
		if (func_82(65))
		{
			return true;
		}
		if (UNK_0x8A22C4C08282BF26(joaat("AMBIENT_SOLOMON")) > 0)
		{
			return true;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_82(66))
		{
			return true;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_82(65))
		{
			return true;
		}
	}
	return false;
}

bool func_82(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

int func_83()
{
	func_84();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_84()
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_88(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			bVar0 = func_87(UNK_0x16F2683693E537C9());
			if (func_86(bVar0) && (!func_85(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != bVar0 && func_86(Global_111638.f_2358.f_539.f_4321))
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

bool func_85(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_86(bool bParam0)
{
	return bParam0 < 3;
}

int func_87(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_88(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_88(bool bParam0)
{
	if (func_86(bParam0))
	{
		return func_89(bParam0);
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

var func_89(bool bParam0)
{
	return Global_1798[bParam0 /*29*/];
}

bool func_90(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	vVar0 = { vParam3 - vParam0 };
	return ((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= (fParam6 * fParam6);
}

bool func_91(vector3 vParam0, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0[15];
	vector3 vVar46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;

	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 140f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			vVar46[9 /*3*/].f_2 = (vVar46[9 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[10 /*3*/].f_2 = (vVar46[10 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[11 /*3*/].f_2 = (vVar46[11 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[12 /*3*/].f_2 = (vVar46[12 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[13 /*3*/].f_2 = (vVar46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (UNK_0x0399732A9EBC368E(vParam0, vVar0[iVar109 /*3*/], vVar46[iVar109 /*3*/], fVar92[iVar109], iVar110, true))
		{
			return true;
		}
		iVar109++;
	}
	return false;
}

bool func_92(int iParam0, vector3 vParam1)
{
	return SYSTEM::VDIST2(vParam1, func_94(iParam0)) < func_93(iParam0);
}

float func_93(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
		case 2:
			return 1000000f;
		case 3:
			return 1500000f;
		case 4:
			return 500000f;
		case 5:
			return 500000f;
		case 6:
			return 500000f;
		case 7:
			return 500000f;
		case 8:
			return 500000f;
	}
	return 0f;
}

Vector3 func_94(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1155.877f, 48.3426f, 52.4985f;
		case 2:
			return -1245.12f, -2818.38f, 12.94f;
		case 3:
			return -2176.19f, 3092.07f, 31.81f;
		case 4:
			return 1701.666f, 2586.261f, 51.4925f;
		case 5:
			return 3525.058f, 3711.323f, 35.6423f;
		case 6:
			return 548.1421f, -3157.961f, 5.0696f;
		case 7:
			return -1142.411f, -526.4487f, 31.6878f;
		case 8:
			return 456.8879f, -985.2783f, 35.6895f;
	}
	return 0f, 0f, 0f;
}

bool func_95(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	if (((((vParam0.x > vParam3.x && vParam0.x < vParam6.x) && vParam0.y > vParam3.y) && vParam0.y < vParam6.y) && vParam0.z > vParam3.z) && vParam0.z < vParam6.z)
	{
		return true;
	}
	return false;
}

bool func_96(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	if (UNK_0xD1B4D22E0BA9B0C8(Param0, Param0.f_1, Param3, Param3.f_1))
	{
		return true;
	}
	return false;
}

void func_97(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, var uParam6, var uParam7, int iParam8)
{
	vector3 vVar0;
	vector3 vVar3;

	if (Param3 <= Param0)
	{
		vVar0.x = Param3;
		vVar3.x = Param0;
	}
	else
	{
		vVar0.x = Param0;
		vVar3.x = Param3;
	}
	if (Param3.f_1 <= Param0.f_1)
	{
		vVar0.f_1 = Param3.f_1;
		vVar3.f_1 = Param0.f_1;
	}
	else
	{
		vVar0.f_1 = Param0.f_1;
		vVar3.f_1 = Param3.f_1;
	}
	vVar0 = { vVar0 - Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	vVar3 = { vVar3 + Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	if (!func_98(vVar0, *uParam6, 1056964608 /* Float: 0.5f */, 0) || !func_98(vVar0, *uParam6, 1056964608 /* Float: 0.5f */, 0))
	{
		*uParam6 = { vVar0 };
		*uParam7 = { vVar3 };
	}
	UNK_0x10FEEAFF01E32639(*uParam6, uParam6->f_1, *uParam7, uParam7->f_1);
}

bool func_98(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_99()
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (func_41(Local_56.f_9, 10000))
		{
			UNK_0x523BCC9DC80CD82F(bLocal_100);
			UNK_0x523BCC9DC80CD82F(bLocal_99);
			if (UNK_0xB87F6CF6E5628C67(bLocal_100))
			{
				if (UNK_0xB87F6CF6E5628C67(bLocal_99))
				{
					if (func_73(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false)))
					{
						if (Local_56.f_10 < 2)
						{
							bVar4 = false;
						}
						else if (Local_56.f_10 < 5)
						{
							bVar4 = 9;
						}
						else
						{
							bVar4 = true;
						}
					}
					else if (Local_56.f_10 < 5)
					{
						bVar4 = false;
					}
					else
					{
						bVar4 = 9;
					}
					if (func_101(&vVar0, &uVar3, &(Local_56.f_8), bVar4, 1103626240 /* Float: 25f */))
					{
						UNK_0x536F1BE96C726C4B(vVar0, 5f, 1, 0, 0, false);
						if (func_100(&Local_56, &(Local_56.f_1), vVar0, uVar3))
						{
							Local_56.f_5 = func_77(UNK_0x68F4C0EC296D3901(Local_56, true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true));
							Local_56.f_2 = 0;
							Local_56.f_8 = 0;
							iLocal_53 = 2;
						}
					}
					else if (Local_56.f_8 >= 5)
					{
						Local_56.f_10++;
						if (Local_56.f_10 > 10)
						{
							func_13();
						}
						else
						{
							Local_56.f_8 = 0;
							Local_56.f_9 = (UNK_0x1C0640BA9A7327B3() - 9000);
						}
					}
				}
			}
		}
	}
}

bool func_100(bool bParam0, var uParam1, vector3 vParam2, bool bParam5)
{
	UNK_0x523BCC9DC80CD82F(func_147());
	UNK_0x523BCC9DC80CD82F(func_146());
	if (UNK_0xB87F6CF6E5628C67(func_146()))
	{
		if (UNK_0xB87F6CF6E5628C67(func_147()))
		{
			*bParam0 = UNK_0x122AAB0B1D6F55AD(func_146(), vParam2, bParam5, true, true, false);
			if (UNK_0xC844350D5D58C99A(*bParam0))
			{
				if (UNK_0xDF1306B443CD3D15(*bParam0, 0))
				{
					UNK_0xB9FD7450C0DAB575(*bParam0, 1084227584 /* Float: 5f */);
					UNK_0x6301539B96E43BA1(*bParam0, 1);
					UNK_0x4551D324905984CB(*bParam0, 1);
					UNK_0x9A8BCD43DBDDCDCA(*bParam0, 0, 0);
					UNK_0x120A395B0ECB8EA5(*bParam0, true);
					*uParam1 = UNK_0x852A19533F896693(*bParam0, 25, func_147(), -1, 1, true);
					if (UNK_0xC844350D5D58C99A(*uParam1))
					{
						if (!UNK_0xEB6A8945D1AC98A1(*uParam1))
						{
							UNK_0x1AEF7184B203A58D(*bParam0, 5f);
							if (!UNK_0xAF6690C489CC6203(*uParam1))
							{
								UNK_0x73270B3C9CC833FD(*uParam1, true, 0);
							}
							if (!UNK_0xAF6690C489CC6203(*bParam0))
							{
								UNK_0x73270B3C9CC833FD(*bParam0, true, 0);
							}
							UNK_0x11AD11297DC58CC7(*uParam1, true);
							UNK_0x4E885A246A9D983A(*uParam1, 251, true);
							UNK_0xAFF39FB306F8E232(*uParam1, 5, false);
							UNK_0xAFF39FB306F8E232(*uParam1, 17, true);
							UNK_0xBAFED2F6486F771A(*uParam1, 512, false);
							UNK_0x4F39CC3882DD074E(*uParam1, "A_M_M_EASTSA_02_LATINO_FULL_01");
							UNK_0x71199B01895C6202(func_146());
							UNK_0x71199B01895C6202(func_147());
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_101(var uParam0, int iParam1, var uParam2, bool bParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	var uVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	bool bVar14;
	bool bVar15;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	int iVar25;
	vector3 vVar26;

	bVar9 = 0f;
	bVar11 = true;
	if (bParam3 == 0)
	{
		bVar11 = false;
	}
	bVar12 = false;
	iVar13 = 0;
	bVar14 = 100f;
	bVar15 = 2.5f;
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		vVar26 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		iVar25 = func_106(vVar26);
		if (iVar25 != 6)
		{
			if (func_105(vVar26, iVar25, uParam0, iParam1))
			{
				return true;
			}
		}
		else if (UNK_0x4A13F7D4B1E239A0(vVar26, *uParam2, &vVar0, &bVar9, &uVar10, bParam3, bVar14, bVar15))
		{
			while (!bVar12 && iVar13 < 5)
			{
				if (UNK_0x8F91E660145F47FF(&vVar0, &vVar3, &vVar6, 0f, 180f, fParam4, bVar11, 1, 0))
				{
					bVar9 = func_104(0f, 0f, 0f, vVar6, 1);
					if (func_102(vVar26, vVar3, 1133903872 /* Float: 300f */, 1101004800 /* Float: 20f */))
					{
						bVar12 = true;
						vVar16 = { UNK_0x8A5E176FF719A014(vVar3, bVar9, 0f, 1f, 0f) };
						vVar19 = { vVar16 - vVar3 };
						vVar22 = { vVar0 - vVar3 };
						if (UNK_0x07AB02F3C4AE2B04(vVar19.x, vVar19.y, vVar22.x, vVar22.y) > 60f)
						{
							bVar9 = (bVar9 + 180f);
							bVar9 = func_69(bVar9, 0f, 360f);
						}
						*uParam0 = { vVar3 };
						*iParam1 = bVar9;
						return true;
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			*uParam2++;
		}
		else
		{
			*uParam2++;
		}
	}
	return false;
}

bool func_102(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7)
{
	float fVar0;

	fVar0 = SYSTEM::VDIST2(vParam0, vParam3);
	if (fVar0 >= (fParam6 * fParam6))
	{
		return false;
	}
	if (fVar0 <= (fParam7 * fParam7))
	{
		return false;
	}
	if (UNK_0x8E28E832BEAC3DCE(vParam3, 2.5f))
	{
		return false;
	}
	if (UNK_0x9868643FAC294133(vParam3, 3f, 3f, 3f, false))
	{
		return false;
	}
	if (func_103(vParam3, 0))
	{
		return false;
	}
	return true;
}

bool func_103(vector3 vParam0, bool bParam3)
{
	if (func_38(vParam0, -1144.497f, 43.01712f, 51.94447f, 325f))
	{
		if (func_91(vParam0, 1, 0, 0))
		{
			return true;
		}
		if (UNK_0x0399732A9EBC368E(vParam0, -1319.769f, 29.52616f, 49.56616f, -1336.527f, 121.0351f, 75.61888f, 18f, 0, true))
		{
			return true;
		}
		if (UNK_0x0399732A9EBC368E(vParam0, -1360.02f, 110.1307f, 52.63413f, -1365.276f, 172.0624f, 72.01312f, 52f, 0, true))
		{
			return true;
		}
		if (UNK_0x0399732A9EBC368E(vParam0, -1363.007f, 170.533f, 50.00813f, -1296.903f, 178.8133f, 73.37104f, 35f, 0, true))
		{
			return true;
		}
		if (UNK_0x0399732A9EBC368E(vParam0, -1197.521f, 199.8643f, 57.04471f, -1298.04f, 176.1384f, 73.33252f, 34f, 0, true))
		{
			return true;
		}
		if (UNK_0x0399732A9EBC368E(vParam0, -1103.745f, 221.1367f, 55.34814f, -1208.394f, 191.0909f, 79.13708f, 45f, 0, true))
		{
			return true;
		}
		if (UNK_0x0399732A9EBC368E(vParam0, -989.0328f, -89.39376f, 32.48801f, -1086.211f, -115.7076f, 50.65051f, 70f, 0, true))
		{
			return true;
		}
		if (UNK_0x0399732A9EBC368E(vParam0, -958.5481f, -111.5455f, 30.76432f, -1132.685f, 190.7841f, 73.90366f, 70f, 0, true))
		{
			return true;
		}
		if (UNK_0x0399732A9EBC368E(vParam0, -1077.028f, -139.7337f, 38.73388f, -1299.556f, -15.16894f, 63.4371f, 20f, 0, true))
		{
			return true;
		}
		if (UNK_0x0399732A9EBC368E(vParam0, -1319.769f, 29.52616f, 47.56616f, -1287.619f, -24.88864f, 67.5273f, 20f, 0, true))
		{
			return true;
		}
	}
	if (func_92(2, vParam0))
	{
		if (func_91(vParam0, 2, 0, 0))
		{
			return true;
		}
	}
	if (func_92(3, vParam0))
	{
		if (func_91(vParam0, 3, 0, 0))
		{
			return true;
		}
	}
	if (func_92(4, vParam0))
	{
		if (func_91(vParam0, 4, 0, 0))
		{
			return true;
		}
	}
	if (func_92(5, vParam0))
	{
		if (func_91(vParam0, 5, 0, 0))
		{
			return true;
		}
	}
	if (func_92(6, vParam0))
	{
		if (func_91(vParam0, 6, 0, 0))
		{
			return true;
		}
	}
	if (!func_81())
	{
		if (func_92(7, vParam0))
		{
			if (func_91(vParam0, 7, 0, 0))
			{
				return true;
			}
		}
	}
	if (func_92(8, vParam0))
	{
		if (func_91(vParam0, 8, 0, 0))
		{
			return true;
		}
	}
	if (UNK_0x0399732A9EBC368E(vParam0, 2591.626f, -268.894f, 111.8859f, 2591.331f, -614.4355f, 55.36921f, 70f, 0, true))
	{
		return true;
	}
	if (UNK_0x0399732A9EBC368E(vParam0, -1112.586f, -2674.767f, 12.56804f, -1215.468f, -2854.589f, 19.44588f, 41.25f, 0, true))
	{
		return true;
	}
	if (UNK_0x0399732A9EBC368E(vParam0, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0, true))
	{
		return true;
	}
	if (UNK_0x0399732A9EBC368E(vParam0, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0, true) || UNK_0x0399732A9EBC368E(vParam0, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0, true))
	{
		return true;
	}
	if (((UNK_0x0399732A9EBC368E(vParam0, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0, true) || UNK_0x0399732A9EBC368E(vParam0, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0, true)) || UNK_0x0399732A9EBC368E(vParam0, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0, true)) || UNK_0x0399732A9EBC368E(vParam0, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0, true))
	{
		return true;
	}
	if (func_38(vParam0, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((UNK_0x0399732A9EBC368E(vParam0, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0, true) || UNK_0x0399732A9EBC368E(vParam0, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0, true)) || UNK_0x0399732A9EBC368E(vParam0, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0, true)) || UNK_0x0399732A9EBC368E(vParam0, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0, true)) || UNK_0x0399732A9EBC368E(vParam0, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0, true))
		{
			return true;
		}
	}
	if (!bParam3)
	{
		if (UNK_0x0399732A9EBC368E(vParam0, -1171.709f, -1524.66f, 23.37969f, -1139.721f, -1573.589f, -1.585432f, 55f, 0, true))
		{
			return true;
		}
		if (UNK_0x0399732A9EBC368E(vParam0, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0, true) || UNK_0x0399732A9EBC368E(vParam0, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0, true))
		{
			return true;
		}
	}
	return false;
}

float func_104(struct<2> Param0, float fParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = UNK_0x5D8ABF6396A76564(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

bool func_105(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;

	if (iParam3 == 0)
	{
		iVar4 = 0;
		iVar5 = 5;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			if (iVar4 == 0)
			{
				vVar0 = { -883.8992f, 76.3237f, 50.9372f };
				fVar3 = 271.8234f;
			}
			else if (iVar4 == 1)
			{
				vVar0 = { -838.2045f, 88.1067f, 51.3396f };
				fVar3 = 102.3721f;
			}
			else if (iVar4 == 2)
			{
				vVar0 = { -884.0715f, 217.2857f, 71.7633f };
				fVar3 = 254.5437f;
			}
			else if (iVar4 == 3)
			{
				vVar0 = { -834.0018f, 217.2782f, 73.154f };
				fVar3 = 80.7037f;
			}
			else if (iVar4 == 4)
			{
				vVar0 = { -830.9222f, 135.3548f, 58.1352f };
				fVar3 = 92.957f;
			}
			if (func_102(vParam0, vVar0, 1133903872 /* Float: 300f */, 1101004800 /* Float: 20f */))
			{
				*uParam4 = { vVar0 };
				*iParam5 = fVar3;
				return true;
			}
			iVar4++;
		}
	}
	else if (iParam3 == 1)
	{
		iVar4 = 0;
		iVar5 = 6;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			if (iVar4 == 0)
			{
				vVar0 = { -1587.096f, -928.5875f, 14.3046f };
				fVar3 = 139.9023f;
			}
			else if (iVar4 == 1)
			{
				vVar0 = { -1532.458f, -863.667f, 21.6188f };
				fVar3 = 139.9028f;
			}
			else if (iVar4 == 2)
			{
				vVar0 = { -1472.888f, -733.0396f, 24.0746f };
				fVar3 = 236.3756f;
			}
			else if (iVar4 == 3)
			{
				vVar0 = { -1397.303f, -781.1235f, 19.3347f };
				fVar3 = 48.1876f;
			}
			else if (iVar4 == 4)
			{
				vVar0 = { -1605.409f, -1012.578f, 12.0175f };
				fVar3 = 51.1191f;
			}
			else if (iVar4 == 5)
			{
				vVar0 = { -1572.457f, -1007.106f, 12.0184f };
				fVar3 = 141.2024f;
			}
			if (func_102(vParam0, vVar0, 1133903872 /* Float: 300f */, 1101004800 /* Float: 20f */))
			{
				*uParam4 = { vVar0 };
				*iParam5 = fVar3;
				return true;
			}
			iVar4++;
		}
	}
	else if (iParam3 == 2)
	{
		iVar4 = 0;
		iVar5 = 4;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			if (iVar4 == 0)
			{
				vVar0 = { -1126.552f, -1530.591f, 3.294f };
				fVar3 = 214.5477f;
			}
			else if (iVar4 == 1)
			{
				vVar0 = { -1043.019f, -1644.172f, 3.4894f };
				fVar3 = 35.3163f;
			}
			else if (iVar4 == 2)
			{
				vVar0 = { -1039.345f, -1532.581f, 4.1467f };
				fVar3 = 32.1734f;
			}
			else if (iVar4 == 3)
			{
				vVar0 = { -1067.577f, -1501.944f, 4.0327f };
				fVar3 = 216.1659f;
			}
			if (func_102(vParam0, vVar0, 1133903872 /* Float: 300f */, 1101004800 /* Float: 20f */))
			{
				*uParam4 = { vVar0 };
				*iParam5 = fVar3;
				return true;
			}
			iVar4++;
		}
	}
	else if (iParam3 == 3)
	{
		iVar4 = 0;
		iVar5 = 4;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			if (iVar4 == 0)
			{
				vVar0 = { -1247.291f, 2549.53f, 16.4214f };
				fVar3 = 137.1185f;
			}
			else if (iVar4 == 1)
			{
				vVar0 = { -1314.11f, 2470.677f, 23.3185f };
				fVar3 = 309.2187f;
			}
			else if (iVar4 == 2)
			{
				vVar0 = { -1095.382f, 2686.487f, 18.5919f };
				fVar3 = 130.0954f;
			}
			else if (iVar4 == 3)
			{
				vVar0 = { -1373.514f, 2429.944f, 26.7492f };
				fVar3 = 298.9626f;
			}
			if (func_102(vParam0, vVar0, 1133903872 /* Float: 300f */, 1101004800 /* Float: 20f */))
			{
				*uParam4 = { vVar0 };
				*iParam5 = fVar3;
				return true;
			}
			iVar4++;
		}
	}
	else if (iParam3 == 4)
	{
		iVar4 = 0;
		iVar5 = 5;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			if (iVar4 == 0)
			{
				vVar0 = { 1299.198f, 1164.342f, 105.3728f };
				fVar3 = 3.1765f;
			}
			else if (iVar4 == 1)
			{
				vVar0 = { 1304.831f, 1084.598f, 104.6453f };
				fVar3 = 8.2195f;
			}
			else if (iVar4 == 2)
			{
				vVar0 = { 1290.873f, 1237.684f, 107.4217f };
				fVar3 = 186.5802f;
			}
			else if (iVar4 == 3)
			{
				vVar0 = { 1310.975f, 1001.138f, 104.9354f };
				fVar3 = 359.3654f;
			}
			else if (iVar4 == 4)
			{
				vVar0 = { 1284.936f, 1355.748f, 103.4301f };
				fVar3 = 182.4582f;
			}
			if (func_102(vParam0, vVar0, 1133903872 /* Float: 300f */, 1101004800 /* Float: 20f */))
			{
				*uParam4 = { vVar0 };
				*iParam5 = fVar3;
				return true;
			}
			iVar4++;
		}
	}
	else if (iParam3 == 5)
	{
		iVar4 = 0;
		iVar5 = 5;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			if (iVar4 == 0)
			{
				vVar0 = { -1208.617f, -1410.733f, 3.1853f };
				fVar3 = 215.8772f;
			}
			else if (iVar4 == 1)
			{
				vVar0 = { -1172.9f, -1412.38f, 3.6078f };
				fVar3 = 126.9322f;
			}
			else if (iVar4 == 2)
			{
				vVar0 = { -1112.842f, -1437.895f, 4.031f };
				fVar3 = 211.4814f;
			}
			else if (iVar4 == 3)
			{
				vVar0 = { -1079.885f, -1472.878f, 4.0784f };
				fVar3 = 32.9476f;
			}
			else if (iVar4 == 4)
			{
				vVar0 = { -1086.768f, -1540.707f, 3.5549f };
				fVar3 = 128.3527f;
			}
			if (func_102(vParam0, vVar0, 1133903872 /* Float: 300f */, 1101004800 /* Float: 20f */))
			{
				*uParam4 = { vVar0 };
				*iParam5 = fVar3;
				return true;
			}
			iVar4++;
		}
	}
	return false;
}

int func_106(vector3 vParam0)
{
	if (func_95(vParam0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f))
	{
		return 0;
	}
	if (func_90(vParam0, -1693.302f, -1109.13f, 17.89778f, 240f))
	{
		if (UNK_0x0399732A9EBC368E(vParam0, -1538.981f, -941.1323f, 10.56623f, -1715.57f, -1139.766f, 52.20361f, 110f, 0, true))
		{
			return 1;
		}
		if (UNK_0x0399732A9EBC368E(vParam0, -1739.989f, -1115.973f, 10.08726f, -1800.515f, -1187.18f, 52.0172f, 25f, 0, true))
		{
			return 1;
		}
		if (UNK_0x0399732A9EBC368E(vParam0, -1801.766f, -1180.252f, 4.017236f, -1857.718f, -1244.628f, 38.49653f, 85f, 0, true))
		{
			return 1;
		}
	}
	if (UNK_0x0399732A9EBC368E(vParam0, -1140.89f, -1573.135f, -6.566939f, -1067.084f, -1675.976f, 23.53153f, 52f, 0, true))
	{
		return 2;
	}
	if (func_92(3, vParam0))
	{
		if (func_91(vParam0, 3, 0, 0))
		{
			return 3;
		}
	}
	if (UNK_0x0399732A9EBC368E(vParam0, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0, true))
	{
		return 4;
	}
	if (UNK_0x0399732A9EBC368E(vParam0, -1171.709f, -1524.66f, 23.37969f, -1139.721f, -1573.589f, -1.585432f, 55f, 0, true))
	{
		return 5;
	}
	return 6;
}

bool func_107()
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;

	if (!func_38(vLocal_274, Local_56.f_20, 100f))
	{
		return true;
	}
	if (func_87(UNK_0x16F2683693E537C9()) != Local_56.f_30)
	{
		return true;
	}
	if (iLocal_55 == 4)
	{
		return true;
	}
	if (iLocal_53 == 2 || iLocal_53 == 3)
	{
		if (!func_37(Local_56.f_1))
		{
			return true;
		}
		if (!func_39(Local_56))
		{
			return true;
		}
		if (!UNK_0x82CCEAB29E9451DD(Local_56.f_1, Local_56))
		{
			return true;
		}
		if (UNK_0xE9FDA1035CFEA94F(Local_56.f_1))
		{
			return true;
		}
		if (UNK_0x4734A6196B611C3B(Local_56.f_1, false))
		{
			return true;
		}
		if (UNK_0xB87D13D0C064E9D1(Local_56, UNK_0x16F2683693E537C9(), 1))
		{
			return true;
		}
		if (UNK_0xB87D13D0C064E9D1(Local_56.f_1, UNK_0x16F2683693E537C9(), 1))
		{
			return true;
		}
		vVar0 = { UNK_0x68F4C0EC296D3901(Local_56, false) };
		if (UNK_0xD3DCEC81D13AAFB1(vVar0, 7f, false))
		{
			return true;
		}
		fVar3 = 15f;
		vVar4 = { vVar0 };
		vVar7 = { vVar4 };
		vVar4.x = (vVar4.x - fVar3);
		vVar4.f_1 = (vVar4.y - fVar3);
		vVar4.f_2 = (vVar4.z - fVar3);
		vVar7.x = (vVar7.x + fVar3);
		vVar7.f_1 = (vVar7.y + fVar3);
		vVar7.f_2 = (vVar7.z + fVar3);
		if (UNK_0x723EE7F83DF1497D(vVar4, vVar7, 1))
		{
			return true;
		}
		if (func_38(vLocal_274, vVar0, 20f))
		{
			if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), Local_56) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), Local_56))
			{
				return true;
			}
			if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_108()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	vector3 vVar9;
	float fVar12;
	vector3 vVar13;
	vector3 vVar16;
	var uVar19[12];

	if (iLocal_54 == 0)
	{
		if (func_41(iLocal_96, 500))
		{
			iVar1 = -1;
			iVar2 = -1;
			iVar5 = 0;
			fVar7 = -99999f;
			if (iLocal_55 != 0 && iLocal_55 != 1)
			{
				bLocal_90 = false;
			}
			if (bLocal_90)
			{
				iVar0 = 3;
				fVar8 = 35f;
			}
			else
			{
				iVar0 = 1;
				fVar8 = 10f;
			}
			iVar3 = UNK_0xA361D247A75E0128(UNK_0x16F2683693E537C9(), &uVar19);
			if (iVar3 > 0)
			{
				iVar4 = 0;
				while (iVar4 <= (iVar3 - 1))
				{
					if (iVar5 < iVar0)
					{
						if (UNK_0xC844350D5D58C99A(uVar19[iVar4]))
						{
							if (UNK_0x134B62B726CEC8E6(uVar19[iVar4]) == bLocal_100)
							{
								vVar9 = { UNK_0x68F4C0EC296D3901(uVar19[iVar4], false) };
								fVar12 = SYSTEM::VDIST2(vLocal_274, vVar9);
								if (fVar12 <= (fVar8 * fVar8))
								{
									if (func_22(&(uVar19[iVar4]), bLocal_100, bLocal_99))
									{
										if (iVar2 == -1)
										{
											iVar2 = iVar4;
										}
										if (bLocal_90)
										{
											if (uVar19[iVar4] != Global_110669)
											{
												if (UNK_0x4D570FEF9D230CE7(uVar19[iVar4]) == UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()))
												{
													fVar6 = 1f;
													fVar12 = (fVar12 / fVar12);
													fVar12 = (fVar12 - 35f);
													fVar12 = (fVar12 * -1f);
													fVar12 = (fVar12 / 35f);
													fVar12 = (fVar12 * 0.5f);
													fVar12 = (fVar12 + 0.5f);
													fVar6 = (fVar6 * fVar12);
													fVar12 = (vLocal_274.z - vVar9.z);
													if (fVar12 < 0f)
													{
														fVar12 = (fVar12 * -1f);
													}
													if (fVar12 < 4f)
													{
														vVar13 = { UNK_0x08D89CE2E20AE305(UNK_0x16F2683693E537C9()) };
														vVar16 = { vVar9 - vLocal_274 };
														if (((vVar13.x * vVar16.x) + (vVar13.y * vVar16.y)) / SYSTEM::VDIST(vVar16, 0f, 0f, 0f)) > SYSTEM::COS(120f)
														{
															if (UNK_0x8E28E832BEAC3DCE(vVar9, 2f))
															{
																fVar6 = (fVar6 * 0.5f);
															}
															if (func_63(&(uVar19[iVar4])))
															{
																fVar6 = (fVar6 * 0.2f);
															}
															if (!UNK_0x10BA239D3B8FDC7F(uVar19[iVar4], 90f) || UNK_0x70EED0761B82965E(uVar19[iVar4]))
															{
																fVar6 = 0f;
															}
															if (fVar6 > fVar7)
															{
																fVar7 = fVar6;
																iVar1 = iVar4;
															}
														}
													}
												}
											}
										}
										iVar5++;
									}
								}
								else
								{
									iVar4 = iVar3;
								}
							}
						}
						else
						{
							iVar4 = iVar3;
						}
					}
					else
					{
						iVar4 = iVar3;
					}
					iVar4++;
				}
			}
			if (iVar2 == -1)
			{
				func_109(&bLocal_277, 0);
				bLocal_277 = false;
			}
			else if (bLocal_277 != uVar19[iVar2])
			{
				func_109(&bLocal_277, 0);
				bLocal_277 = uVar19[iVar2];
				func_109(&bLocal_277, 1);
			}
			if (bLocal_90)
			{
				if (iVar1 == -1)
				{
					bLocal_278 = false;
				}
				else
				{
					bLocal_278 = uVar19[iVar1];
				}
				bLocal_90 = false;
			}
			else
			{
				bLocal_90 = true;
			}
			iLocal_96 = UNK_0x1C0640BA9A7327B3();
			return true;
		}
	}
	return false;
}

void func_109(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(*bParam0, 0))
		{
			bVar0 = UNK_0xA30B8362589C124A(*bParam0, -1, 0);
			if (UNK_0xC844350D5D58C99A(bVar0))
			{
				if (UNK_0x61C907EA8258B04D(bVar0, func_147()))
				{
					if (!UNK_0xEB6A8945D1AC98A1(bVar0))
					{
						UNK_0x4E885A246A9D983A(bVar0, 251, bParam1);
					}
				}
			}
		}
	}
}

void func_110()
{
	if (iLocal_55 == 2 || iLocal_55 == 3)
	{
		if (UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &cLocal_270, "HAIL_TAXI", 3) || UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &cLocal_270, "FP_HAIL_TAXI", 3))
		{
			func_59();
		}
	}
}

bool func_111()
{
	if (!func_3())
	{
		return false;
	}
	if (!UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
	{
		return false;
	}
	return true;
}

void func_112()
{
	if (iLocal_52 == 0)
	{
		if (func_143(131))
		{
			if (func_141(func_83()))
			{
				func_140();
				func_139(&uLocal_101, 0, UNK_0x16F2683693E537C9(), sLocal_266, 0, 1);
				func_139(&uLocal_101, 1, 0, "TaxiDispatch", 0, 1);
				if (func_133())
				{
					if (func_132(&uLocal_101, 131, "TAXISAU", sLocal_267, sLocal_267, "TX_2", "TX_2", sLocal_268, sLocal_268, 2, 1, 0, 0, 0))
					{
						bLocal_91 = false;
						iLocal_52 = 2;
					}
				}
				else if (func_118(&uLocal_101, 131, "TAXISAU", sLocal_267, sLocal_267, "TX_2A", "TX_2A", 2, 1, 0, 0, 0))
				{
					iLocal_52 = 1;
				}
			}
		}
	}
	else if (iLocal_52 == 1)
	{
		if (func_117())
		{
			iLocal_52 = 0;
		}
	}
	else if (iLocal_52 == 2)
	{
		if (func_117())
		{
			if (func_116())
			{
				if (!bLocal_91)
				{
					iLocal_52 = 0;
				}
			}
			else if (func_115())
			{
				if (!bLocal_91)
				{
					iLocal_52 = 0;
				}
			}
			if (iLocal_52 != 0)
			{
				if (!func_114(19))
				{
					func_113(19);
				}
				func_13();
				Local_56.f_9 = UNK_0x1C0640BA9A7327B3();
				Local_56.f_20 = { vLocal_274 };
				Local_56.f_30 = func_87(UNK_0x16F2683693E537C9());
				Local_56.f_8 = 0;
				Local_56.f_10 = 0;
				iLocal_53 = 1;
				iLocal_52 = 0;
			}
		}
		else if (!bLocal_91)
		{
			if (UNK_0x40EFDB96B3112BA7() == 1)
			{
				bLocal_91 = true;
			}
		}
	}
}

void func_113(int iParam0)
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

bool func_114(int iParam0)
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

bool func_115()
{
	if (Global_19471)
	{
		return true;
	}
	return false;
}

bool func_116()
{
	if (Global_20854 == 1 || Global_21821 == 1)
	{
		return true;
	}
	return false;
}

bool func_117()
{
	if (Global_20805 == 0)
	{
		return true;
	}
	return false;
}

int func_118(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar11;

	func_131(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_130();
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
	func_128(2, &uVar0, &uVar11, cParam3, sParam4, sParam5, sParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_119(&uVar0, &uVar11, iParam7, bParam11);
}

int func_119(var uParam0, var uParam1, int iParam2, bool bParam3)
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
					func_127();
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
		if (func_126(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_125();
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
				func_124();
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
				if (func_123())
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
			if (func_122())
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
			func_121();
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
		func_120();
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
		func_127();
	}
	return 0;
}

void func_120()
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

void func_121()
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

bool func_122()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_123()
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

void func_124()
{
	if (func_85(14))
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
		Global_19486 = func_83();
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

void func_125()
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

bool func_126(bool bParam0, int iParam1)
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

void func_127()
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

void func_128(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_129(iParam0);
	(*uParam1)[0] = sParam3;
	(*uParam2)[0] = sParam4;
	(*uParam1)[1] = sParam5;
	(*uParam2)[1] = sParam6;
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

void func_129(int iParam0)
{
	Global_20802 = iParam0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
}

void func_130()
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

void func_131(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_132(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	var uVar0;
	var uVar11;

	func_131(uParam0, iParam1, sParam2, iParam11, iParam12, 0);
	func_130();
	if (iParam10 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_128(3, &uVar0, &uVar11, cParam3, sParam4, sParam5, sParam6, sParam7, sParam8, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_119(&uVar0, &uVar11, iParam9, bParam13);
}

bool func_133()
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;

	if (iLocal_53 != 0)
	{
		return false;
	}
	if (iLocal_55 == 4 || iLocal_55 == 2)
	{
		return false;
	}
	if (iLocal_54 != 0)
	{
		return false;
	}
	if (UNK_0x1727A44C562FBED2(iLocal_269))
	{
		return false;
	}
	if (!func_111())
	{
		return false;
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0xE934758D273C899A(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)))
		{
			return false;
		}
	}
	func_134();
	bVar3 = 50f;
	iVar4 = 1;
	if (!func_73(vLocal_274))
	{
		iVar4 = 9;
	}
	if (!UNK_0xDE5F9F54005367A1(vLocal_274, &vVar0, iVar4, 100f, 2.5f))
	{
		return false;
	}
	if (!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vVar0, bVar3, bVar3, 20f, false, true, 0))
	{
		return false;
	}
	if (func_103(vLocal_274, 1))
	{
		return false;
	}
	return true;
}

int func_134()
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;

	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		bVar0 = func_83();
		if (func_86(bVar0))
		{
			vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			iVar4 = 0;
			while (iVar4 < Global_111638.f_7683.f_136)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7683[iVar4 /*15*/].f_2, bVar0))
				{
					if (func_137(vVar1, func_138(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_111638.f_7683.f_764)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7683.f_651[iVar4 /*14*/].f_2, bVar0))
				{
					if (func_137(vVar1, func_136(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_111638.f_7683.f_866)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7683.f_765[iVar4 /*10*/].f_2, bVar0))
				{
					if (func_137(vVar1, func_135(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
		}
	}
	return 0;
}

int func_135(int iParam0)
{
	return Global_111638.f_7683.f_765[iParam0 /*10*/].f_7;
}

int func_136(int iParam0)
{
	return Global_111638.f_7683.f_651[iParam0 /*14*/].f_7;
}

bool func_137(vector3 vParam0, int iParam3)
{
	if (iParam3 != -1)
	{
		if (iParam3 >= Global_41432)
		{
			return false;
		}
		if (SYSTEM::VDIST2(vParam0, Global_41432[iParam3 /*5*/]) <= (Global_41432[iParam3 /*5*/].f_3 * Global_41432[iParam3 /*5*/].f_3))
		{
			return true;
		}
		else if (Global_41432[iParam3 /*5*/].f_4 != -1)
		{
			return func_137(vParam0, Global_41432[iParam3 /*5*/].f_4);
		}
	}
	return false;
}

int func_138(int iParam0)
{
	return Global_111638.f_7683[iParam0 /*15*/].f_7;
}

void func_139(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_140()
{
	int iVar0;

	iVar0 = func_83();
	if (iVar0 == 0)
	{
		sLocal_266 = "MICHAEL";
		sLocal_267 = "TX_1M";
		sLocal_268 = "TX_3M";
	}
	else if (iVar0 == 1)
	{
		sLocal_266 = "FRANKLIN";
		sLocal_267 = "TX_1F";
		sLocal_268 = "TX_3F";
	}
	else if (iVar0 == 2)
	{
		sLocal_266 = "TREVOR";
		sLocal_267 = "TX_1T";
		sLocal_268 = "TX_3T";
	}
}

bool func_141(int iParam0)
{
	if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
	{
		if (func_142(131, iParam0) == 1)
		{
			return true;
		}
	}
	else if (iParam0 == func_14())
	{
		if ((func_142(131, 0) == 1 || func_142(131, 1) == 1) || func_142(131, 2) == 1)
		{
			return true;
		}
	}
	return false;
}

int func_142(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

bool func_143(int iParam0)
{
	if ((Global_21919 || Global_21918) || Global_21920)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return false;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (Global_19486.f_1 == 10)
		{
			if (Global_6671 == iParam0)
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

bool func_144()
{
	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		return false;
	}
	if (Global_95664 == 1)
	{
		return false;
	}
	if (UNK_0x22A8E52414415B76())
	{
		return false;
	}
	if (Global_110689)
	{
		return false;
	}
	if (Global_4)
	{
		return false;
	}
	if (UNK_0x28CDCD4EC82F21C0())
	{
		return false;
	}
	return true;
}

void func_145()
{
	func_6();
	func_4(1);
	UNK_0x8D17794CE3273D70(&cLocal_270);
	UNK_0xAB8E2DDC7AF955E0(joaat("TAXI"), false);
	UNK_0x71199B01895C6202(bLocal_100);
	UNK_0x71199B01895C6202(bLocal_99);
	if (bLocal_88)
	{
		if (UNK_0x8C74DE122769E1BF())
		{
			UNK_0x29D5132FBDCF2B1E(0);
		}
	}
}

int func_146()
{
	return joaat("TAXI");
}

int func_147()
{
	return joaat("A_M_Y_STLAT_01");
}

