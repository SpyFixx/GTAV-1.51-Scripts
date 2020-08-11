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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	bool bLocal_28 = false;
	bool bLocal_29 = false;
	bool bLocal_30 = false;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_55 = 0f;
	vector3 vLocal_56 = { 0f, 0f, 0f };
	bool bLocal_59 = false;
	bool bLocal_60 = false;
	struct<9> Local_61 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_70 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_79 = { 0f, 0f, 0f };
	vector3 vLocal_82 = { 0f, 0f, 0f };
	vector3 vLocal_85 = { 0f, 0f, 0f };
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	int iLocal_93 = 0;
	bool bLocal_94 = false;
	bool bLocal_95 = false;
	bool bLocal_96 = false;
	bool bLocal_97 = false;
	bool bLocal_98 = false;
	bool bLocal_99 = false;
	bool bLocal_100 = false;
	bool bLocal_101 = false;
	bool bLocal_102 = false;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	float fLocal_106 = 0f;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	bool bLocal_133 = false;
	float fLocal_134 = 0f;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	float fLocal_150 = 0f;
	int iLocal_151[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_163 = false;
	struct<68> Local_164 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
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
	float fLocal_253 = 0f;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	bool bLocal_257 = false;
	bool bLocal_258 = false;
	bool bLocal_259 = false;
	vector3 vLocal_260 = { 0f, 0f, 0f };
	bool bLocal_263[2] = { false, false };
	bool bLocal_266 = false;
	bool bLocal_267 = false;
	bool bLocal_268 = false;
	bool bLocal_269 = false;
	bool bLocal_270 = false;
	bool bLocal_271 = false;
	bool bLocal_272 = false;
	bool bLocal_273 = false;
	bool bLocal_274 = false;
	bool bLocal_275 = false;
	bool bLocal_276 = false;
	bool bLocal_277 = false;
	bool bLocal_278 = false;
	bool bLocal_279 = false;
	bool bLocal_280 = false;
	bool bLocal_281 = false;
	bool bLocal_282 = false;
	bool bLocal_283 = false;
	bool bLocal_284 = false;
	bool bLocal_285 = false;
	bool bLocal_286 = false;
	bool bLocal_287 = false;
	bool bLocal_288 = false;
	var uLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	bool bLocal_294 = false;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	bool bLocal_299 = false;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
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
	vector3 vLocal_334 = { 0f, 0f, 0f };
	vector3 vLocal_337 = { 0f, 0f, 0f };
	vector3 vLocal_340 = { 0f, 0f, 0f };
	vector3 vLocal_343 = { 0f, 0f, 0f };
	vector3 vLocal_346 = { 0f, 0f, 0f };
	vector3 vLocal_349 = { 0f, 0f, 0f };
	float fLocal_352 = 0f;
	float fLocal_353 = 0f;
	float fLocal_354 = 0f;
	float fLocal_355 = 0f;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	bool bLocal_358 = false;
	bool bLocal_359 = false;
	bool bLocal_360 = false;
	bool bLocal_361 = false;
	bool bLocal_362 = false;
	char* sLocal_363[3] = { NULL, NULL, NULL };
	char* sLocal_367[3] = { NULL, NULL, NULL };
	char* sLocal_371[3] = { NULL, NULL, NULL };
	char* sLocal_375[3] = { NULL, NULL, NULL };
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

void __EntryFunction__()
{
	struct<460> Var0;
	int iVar464;
	struct<4> Var465;
	vector3 vVar471;
	struct<25> Var477;
	struct<682> Var508;
	struct<532> Var1191;
	bool bVar1768;
	bool bVar1769;
	bool bVar1770;
	bool bVar1771;
	bool bVar1772;
	int iVar1773;
	int iVar1774;
	int iVar1775;
	float fVar1776;
	float fVar1777;
	vector3 vVar1778;
	vector3 vVar1781;
	vector3 vVar1784;
	vector3 vVar1787;
	vector3 vVar1790;
	bool bVar1793;
	var uVar1794;
	var uVar1797;
	var uVar1800;
	var uVar1803[20];
	bool bVar1824;
	int iVar1825;
	int iVar1826;
	int iVar1827;
	bool bVar1828;
	int iVar1829;
	int iVar1830;
	float fVar1831;
	bool bVar1832;

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
	bLocal_28 = joaat("PROP_DART_1");
	bLocal_29 = joaat("PROP_DART_2");
	iLocal_32 = joaat("PROP_DART_BD_CAB_01");
	fLocal_55 = 0.063f;
	vLocal_56 = { -0.0035f, 0f, -0.001f };
	bLocal_60 = joaat("PROP_TARGET_BULL");
	vLocal_85 = { 987.8541f, -98.4173f, 73.8599f };
	fLocal_92 = 0.1f;
	iLocal_103 = 3;
	fLocal_106 = 80f;
	fLocal_107 = 140f;
	fLocal_108 = 180f;
	iLocal_114 = 1;
	iLocal_115 = 65;
	iLocal_116 = 49;
	iLocal_117 = 64;
	iLocal_140 = 65;
	iLocal_142 = 660;
	fLocal_147 = 0.27f;
	fLocal_148 = 0.1f;
	fLocal_149 = -120f;
	fLocal_150 = 127f;
	fLocal_253 = ((0.05f + 0.275f) - 0.01f);
	vLocal_260 = { 500f, 500f, 500f };
	bLocal_275 = true;
	vLocal_340 = { -573.1373f, 294.0269f, 78.1765f };
	vLocal_343 = { -574.1169f, 292.7964f, 78.1766f };
	vLocal_346 = { 1995.295f, 3050.084f, 46.91535f };
	vLocal_349 = { 1995.488f, 3047.383f, 46.91535f };
	fLocal_352 = 172.6813f;
	fLocal_353 = 274.5094f;
	fLocal_354 = 142.6717f;
	fLocal_355 = 44.8785f;
	Var0.f_1 = 2;
	Var0.f_5 = 2;
	Var0.f_5.f_1 = 3;
	Var0.f_5.f_1.f_79 = 3;
	Var0.f_164 = 3;
	Var0.f_257 = 16;
	Var0.f_422 = 2;
	Var0.f_425 = 2;
	Var0.f_429 = 2;
	Var0.f_432 = 2;
	Var0.f_437 = 2;
	Var0.f_440 = 2;
	Var0.f_443 = 2;
	Var0.f_446 = 2;
	Var0.f_449 = 2;
	Var477.f_1 = 2;
	Var477.f_1.f_1 = 7;
	Var477.f_1.f_1.f_8 = 7;
	Var508.f_3 = 8;
	Var508.f_12 = 8;
	Var508.f_21 = 4;
	Var508.f_26.f_3 = 8;
	Var508.f_26.f_12 = 8;
	Var508.f_26.f_21 = 4;
	Var508.f_72 = 3;
	Var508.f_72.f_44.f_3.f_1 = 4;
	Var508.f_72.f_113 = 2;
	Var508.f_72.f_113.f_1.f_1 = 4;
	Var508.f_72.f_113.f_1.f_66.f_1 = 4;
	Var508.f_72.f_246.f_6 = 12;
	Var508.f_72.f_246.f_187 = 3;
	Var508.f_509.f_2 = 8;
	Var508.f_509.f_2.f_1.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_681 = 2;
	Var1191.f_32 = 3;
	Var1191.f_36 = 1;
	Var1191.f_53 = 2;
	Var1191.f_57 = 13;
	Var1191.f_71 = 13;
	Var1191.f_280 = 13;
	Var1191.f_489 = 13;
	Var1191.f_503 = 13;
	Var1191.f_517 = 13;
	Var1191.f_531 = 13;
	iVar1774 = 0;
	bLocal_361 = "facials@gen_female@variations@happy";
	switch (func_500(UNK_0x16F2683693E537C9()))
	{
		case 0:
			bLocal_362 = "facials@p_m_zero@variations@happy";
			break;
		case 1:
			bLocal_362 = "facials@p_m_one@variations@happy";
			break;
		case 2:
			bLocal_362 = "facials@p_m_two@variations@happy";
			break;
	}
	sLocal_363[0] = "mood_happy_1";
	sLocal_363[1] = "mood_happy_2";
	sLocal_363[2] = "mood_happy_3";
	sLocal_367[0] = "darts_outro_01_guy1";
	sLocal_367[1] = "darts_outro_02_guy2";
	sLocal_367[2] = "darts_outro_03_guy2";
	sLocal_371[0] = "darts_outro_01_guy2";
	sLocal_371[1] = "darts_outro_02_guy1";
	sLocal_371[2] = "darts_outro_03_guy1";
	sLocal_375[0] = "darts_outro_01_cam";
	sLocal_375[1] = "darts_outro_02_cam";
	sLocal_375[2] = "darts_outro_03_cam";
	bLocal_263[0] = UNK_0x16F2683693E537C9();
	bLocal_278 = true;
	vVar1778 = { 1992.293f, 3050.583f, 47.98973f };
	vVar1781 = { -572.0406f, 294.1958f, 79.9374f };
	func_499();
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		iLocal_302 = 1;
		switch (UNK_0x09AC81E49EA267F7(false, 2))
		{
			case 0:
				bLocal_299 = joaat("A_F_M_SALTON_01");
				break;
			case 1:
				bLocal_299 = joaat("A_F_O_SALTON_01");
				break;
		}
		iLocal_297 = 10;
		UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
	}
	if (!UNK_0xC844350D5D58C99A(ScriptParam_0.f_4))
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (iLocal_302 == 2)
			{
				ScriptParam_0 = { vVar1781 };
				ScriptParam_0.f_3 = -0.09f;
			}
			else
			{
				ScriptParam_0 = { vVar1778 };
				ScriptParam_0.f_3 = 57.78315f;
			}
			if (UNK_0xBF75E4DF4C367CD9(ScriptParam_0, 5f, joaat("PROP_DART_BD_CAB_01"), 0))
			{
				ScriptParam_0.f_4 = UNK_0x4B72871A3BE7B474(ScriptParam_0, 5f, joaat("PROP_DART_BD_CAB_01"), 1, 0, 1);
				UNK_0xE18B5088526D34B8(ScriptParam_0, 5f, joaat("PROP_DART_BD_CAB_01"), &ScriptParam_0, &vVar1784, 0);
				ScriptParam_0.f_3 = vVar1784.z;
			}
		}
	}
	else
	{
		vVar1784 = { UNK_0x68F4C0EC296D3901(ScriptParam_0.f_4, true) };
	}
	if (!UNK_0x437347B10A200C4B(func_498(), 0))
	{
		func_496(iLocal_297, 1);
		if (UNK_0x405E212DDE472467(func_498(), 0))
		{
			UNK_0x75CDA8644CD3B5F5(func_498(), 0, 0);
		}
		bLocal_263[1] = func_498();
	}
	else
	{
		UNK_0x7798376279BB5369(1);
	}
	if (UNK_0x2EBF608FFE6CA406(67))
	{
		func_487();
		func_469(&Var0, &Var508, &Var1191);
	}
	UNK_0x38D6459E58A32457(0);
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
	func_467(1);
	iLocal_293 = func_464(func_500(bLocal_263[0]), 1);
	fVar1776 = (SYSTEM::TO_FLOAT(iLocal_293) / 100f);
	fVar1777 = (fVar1776 * 1200f);
	iLocal_142 = SYSTEM::ROUND(fVar1777);
	if (iLocal_142 < 660)
	{
		iLocal_142 = 660;
	}
	func_463(23, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		UNK_0x3584F71E5CA29322(2);
		UNK_0x3FC8DBCC154CA56B();
		UNK_0x744B56EE9DE7B57F(15, 0f, -0.0375f);
		if (bLocal_285 && Var0 < 13)
		{
			UNK_0x0103165890FA9E7F(Var477, Var477.f_18, Var477.f_21, Var477.f_24, Var477.f_24, 2);
		}
		if ((UNK_0xEB6A8945D1AC98A1(ScriptParam_0.f_5) && !UNK_0xC844350D5D58C99A(func_498())) || (UNK_0xC844350D5D58C99A(func_498()) && UNK_0xEB6A8945D1AC98A1(func_498())))
		{
			func_469(&Var0, &Var508, &Var1191);
		}
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_263[0]))
		{
			UNK_0x9DD8618CA5BF832D(bLocal_263[0], 239, true);
			UNK_0x9DD8618CA5BF832D(bLocal_263[0], 124, true);
			func_462();
			UNK_0xA2E3EDD0E119882F(0);
			UNK_0xA2E3EDD0E119882F(2);
			iVar1775 = 0;
			while (iVar1775 < UNK_0x263615A674FCA6E9(UNK_0x16F2683693E537C9(), &uVar1803, -1))
			{
				if (uVar1803[iVar1775] != bLocal_263[1])
				{
					if (!UNK_0xEB6A8945D1AC98A1(uVar1803[iVar1775]))
					{
						UNK_0x9DD8618CA5BF832D(uVar1803[iVar1775], 240, true);
					}
				}
				iVar1775++;
			}
			switch (Var0)
			{
				case 0:
					UNK_0xA37A90C62806D848(1);
					func_461(&(Var0.f_243), &ScriptParam_0);
					func_460(Var0.f_243.f_1, Var0.f_243.f_4);
					if (UNK_0xC844350D5D58C99A(Var0.f_243))
					{
						vLocal_334 = { UNK_0x68E4ADDDDCD7BDDE(Var0.f_243, 0.7792f, -1.138f, 0.1814f) };
						vLocal_337 = { -7.9947f, 0f, (Var0.f_243.f_4 + 36.19176f) };
						iLocal_129 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_334, vLocal_337, 65f, 0, 2);
						UNK_0x5818C8D5303DCCF8(iLocal_129, 30f);
					}
					func_459();
					SYSTEM::SETTIMERA(0);
					Var0 = 1;
					break;
				case 1:
					if (SYSTEM::TIMERA() > 500 && !UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()))
					{
						UNK_0x536F1BE96C726C4B(ScriptParam_0, 0.5f, 1, 0, 0, false);
						if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
						{
							UNK_0xF82EA857DA10E0CD(&iLocal_300);
							UNK_0xDD353D0E9C789D0E(&iLocal_300);
							UNK_0x75CDA8644CD3B5F5(false, 0, 0);
							UNK_0x75ABDC5F81978924(iLocal_300);
							UNK_0x78ADC381772E3D54(UNK_0x16F2683693E537C9(), iLocal_300);
						}
						vLocal_85 = { vLocal_85 };
						Var0 = 2;
					}
					break;
				case 2:
					iVar1825 = 0;
					while (iVar1825 < 2)
					{
						iVar1826 = 0;
						while (iVar1826 < 3)
						{
							func_458(&(Var0.f_5[iVar1825 /*79*/][iVar1826 /*26*/]), iVar1825);
							iVar1826++;
						}
						iVar1825++;
					}
					iVar1827 = 0;
					while (iVar1827 < 3)
					{
						func_458(&(Var0.f_164[iVar1827 /*26*/]), 0);
						iVar1827++;
					}
					iVar464 = 2;
					func_457(0);
					func_455(&Var477, iLocal_302, Var0.f_243.f_1, Var0.f_243.f_4);
					if (UNK_0xC844350D5D58C99A(Var0.f_243))
					{
						vVar1784 = { UNK_0x5293C88BD2F4DE13(Var0.f_243, Var477.f_18) };
					}
					func_452(&Var477, &Var508);
					UNK_0x9CBC55A05A07FC47(0);
					Var0 = 3;
					break;
				case 3:
					if (func_449(&Var477, &Var508))
					{
						func_446(&(Var0.f_243), &Var465, &vVar471, 0);
						iLocal_356 = func_500(bLocal_263[0]);
						switch (iLocal_356)
						{
							case 0:
								bLocal_358 = func_445("MICHAEL");
								if (!UNK_0xEAE0D21A50E6C7F4(Global_111599, false))
								{
									bVar1793 = "darts_ig_intro_player_0_face";
								}
								else
								{
									bVar1793 = "darts_ig_intro_alt1_player_0_face";
								}
								break;
							case 1:
								bLocal_358 = func_445("FRANKLIN");
								bLocal_282 = true;
								if (!UNK_0xEAE0D21A50E6C7F4(Global_111599, false))
								{
									bVar1793 = "darts_ig_intro_player_1_face";
								}
								else
								{
									bVar1793 = "darts_ig_intro_alt1_player_1_face";
								}
								break;
							case 2:
								bLocal_358 = func_445("TREVOR");
								if (!UNK_0xEAE0D21A50E6C7F4(Global_111599, false))
								{
									bVar1793 = "darts_ig_intro_player_2_face";
								}
								else
								{
									bVar1793 = "darts_ig_intro_alt1_player_2_face";
								}
								break;
						}
						if (!UNK_0x437347B10A200C4B(func_498(), 0))
						{
							iLocal_357 = func_500(func_498());
							if (iLocal_357 == 145)
							{
								iLocal_357 = func_442(func_498());
							}
							switch (iLocal_357)
							{
								case 0:
									bLocal_359 = func_445("MICHAEL");
									break;
								case 1:
									bLocal_359 = func_445("FRANKLIN");
									break;
								case 2:
									bLocal_359 = func_445("TREVOR");
									break;
								case 19:
									bLocal_359 = func_445("LAMAR");
									UNK_0x64F9F278AB9DCA2C(func_498(), 5, 2, false, 0);
									break;
								case 14:
									bLocal_359 = func_445("JIMMY");
									break;
								default:
									bLocal_359 = "NEW_GUY";
									break;
							}
						}
						else
						{
							iVar1773 = UNK_0x09AC81E49EA267F7(false, 200);
							if (iLocal_302 == 2)
							{
								if (iVar1773 < 51)
								{
									bLocal_359 = func_445("RAYMOND");
									bLocal_360 = 954610991;
								}
								else if (iVar1773 < 101)
								{
									bLocal_359 = func_445("JOHAN");
									bLocal_360 = 94453331;
								}
								else if (iVar1773 < 151)
								{
									bLocal_359 = func_445("STAN");
									bLocal_360 = 1891555423;
								}
								else
								{
									bLocal_359 = func_445("VINCE");
									bLocal_360 = -1067630349;
								}
							}
							else if (iVar1773 < 51)
							{
								bLocal_359 = func_445("KRISTY");
								bLocal_360 = 885327384;
							}
							else if (iVar1773 < 101)
							{
								bLocal_359 = func_445("MARLENE");
								bLocal_360 = -1791000994;
							}
							else if (iVar1773 < 151)
							{
								bLocal_359 = func_445("LORIE");
								bLocal_360 = 1954368234;
							}
							else
							{
								bLocal_359 = func_445("SHELLEY");
								bLocal_360 = -863218904;
							}
						}
						bLocal_59 = UNK_0x7707E48765093646(bLocal_60, vVar471, true, true, false);
						Var0.f_446[0] = 0;
						Var0.f_446[1] = 0;
						Var0 = 4;
					}
					break;
				case 4:
					if (!UNK_0xE10BE88E10683C9C())
					{
						bVar1824 = UNK_0x7707E48765093646(joaat("PROP_DART_1"), vVar471, true, true, false);
						func_439(Var0.f_243.f_4, Var465, &uVar1803, &ScriptParam_0);
						func_438(&Var477, bLocal_358, bLocal_359);
						UNK_0xA3BF0AA5A2608191(bLocal_263[1]);
						iLocal_301 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
						if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
						{
							UNK_0xBD453909DC26A85D(UNK_0x16F2683693E537C9(), joaat("MOTIONSTATE_IDLE"), false, 0, 0);
						}
						func_437(&(Var0.f_257), 0, UNK_0x16F2683693E537C9(), bLocal_358, 0, 1);
						if (UNK_0x437347B10A200C4B(func_498(), 0))
						{
							if (iLocal_302 == 2)
							{
								func_437(&(Var0.f_257), 3, bLocal_263[1], "DartsBillLost1", 0, 1);
							}
							else
							{
								func_437(&(Var0.f_257), 3, bLocal_263[1], "DartsMelHick1", 0, 1);
							}
							iVar1774 = -1;
						}
						else
						{
							func_437(&(Var0.f_257), 3, func_498(), bLocal_359, 0, 1);
							func_435(&uVar1800);
							iVar1774 = 6;
						}
						if (!UNK_0xEAE0D21A50E6C7F4(Global_111599, false))
						{
							iVar1774 = -1;
						}
						else
						{
							iVar1774 = 3;
						}
						func_434(&Var477, 0);
						Var0 = 5;
					}
					break;
				case 5:
					if ((((!UNK_0xEB6A8945D1AC98A1(bLocal_263[1]) && UNK_0xE3614539F8B5C807(bLocal_263[0])) && !UNK_0x405E212DDE472467(bLocal_263[0], 1)) && UNK_0xE3614539F8B5C807(bLocal_263[1])) && !UNK_0x405E212DDE472467(bLocal_263[1], 1))
					{
						bLocal_273 = func_432(&uLocal_289);
						if ((func_431() && UNK_0x1C0640BA9A7327B3() >= iLocal_291 + 1000) && iVar1774 != 9)
						{
							if (!UNK_0x757EF87A33649210() && !UNK_0xD0BB2359EC70FC37())
							{
								UNK_0x53491B90E4FD0E56(500);
							}
						}
						if (UNK_0x757EF87A33649210() && iVar1774 != 9)
						{
							func_427(0);
							func_425();
							iVar1774 = 9;
						}
						switch (iVar1774)
						{
							case -1:
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_263[1]))
								{
									iLocal_295 = UNK_0xE9744DB7B8CA6965(UNK_0x68E4ADDDDCD7BDDE(ScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (UNK_0xD9522BA9E27E1349(ScriptParam_0.f_4) - 3.783146f), 2);
									iLocal_301 = UNK_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", false);
									UNK_0x93E9ED66DAB9FBE3(iLocal_301, iLocal_295, "darts_ig_intro_cam", "mini@dartsintro");
									UNK_0xE3BB8E05FCEB3FBE(iLocal_301, true);
									UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
									UNK_0xBC43ED9FE28DB191(bLocal_263[0]);
									UNK_0xBC43ED9FE28DB191(bLocal_263[1]);
									UNK_0x327AAEE25F323797(bLocal_263[0]);
									UNK_0x327AAEE25F323797(bLocal_263[1]);
									UNK_0x915804B434753CBD(bLocal_263[1], iLocal_295, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									UNK_0x915804B434753CBD(bLocal_263[0], iLocal_295, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									UNK_0xC6EB89C59F2AF6B8(bLocal_263[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, false, 0, 0, 0);
									UNK_0xC6EB89C59F2AF6B8(bLocal_263[0], "mini@dartsintro", bVar1793, 8f, -8f, -1, 32, false, 0, 0, 0);
									UNK_0xE14EC663EED44AD5(bVar1824, iLocal_295, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 1090519040, 0, 1148846080 /* Float: 1000f */);
									func_424(&uVar1800);
									iVar1774++;
								}
								break;
							case 0:
								if (UNK_0x69DF961355195C3C(iLocal_295))
								{
									if (!bVar1770)
									{
										if (func_423(&uVar1800) > 1.5f)
										{
											func_422(bLocal_263[0], "DARTS_REQUEST_GAME", 6);
											bVar1770 = true;
											func_421(&uVar1800);
										}
									}
									else if (!UNK_0x65636D4556D82155(bLocal_263[0]))
									{
										if (!bVar1771)
										{
											if (!func_420(&uVar1800))
											{
												func_435(&uVar1800);
											}
											else if (func_423(&uVar1800) > 0.5f)
											{
												func_419(bLocal_263[1]);
												func_421(&uVar1800);
												bVar1771 = true;
											}
										}
									}
									switch (iLocal_31)
									{
										case 0:
											func_424(&uVar1800);
											func_418("DARTS_HOW_TO_2", -1);
											iLocal_31++;
											break;
										case 1:
											if (UNK_0xA45992A6CE82FB43(iLocal_295) > 0.25f)
											{
												func_424(&uVar1800);
												func_418("DARTS_HOW_TO_3", -1);
												iLocal_31++;
											}
											break;
										case 2:
											if (UNK_0xA45992A6CE82FB43(iLocal_295) > 0.55f)
											{
												func_418("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
										case 3:
											if (UNK_0xA45992A6CE82FB43(iLocal_295) > 0.85f)
											{
												func_418("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
									}
									if (UNK_0xA45992A6CE82FB43(iLocal_295) > 0.95f)
									{
										bLocal_285 = true;
										iVar1774++;
									}
									else if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
									{
									}
								}
								break;
							case 1:
								if (UNK_0xA45992A6CE82FB43(iLocal_295) > 0.99f)
								{
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_263[1]))
									{
										func_415(Var0.f_243.f_1, Var0.f_243.f_4, func_417(2), func_416(0), 0, 1);
										iLocal_31 = 0;
										UNK_0xA37A90C62806D848(1);
										UNK_0x9A8DDC7C522F5BF5(iLocal_301, 0);
										UNK_0xA3BF0AA5A2608191(bLocal_263[0]);
										UNK_0xA3BF0AA5A2608191(bLocal_263[1]);
										UNK_0x1BF8B16C32704027(bVar1824, -1000f, 0);
										UNK_0xF690C84DADBB3551(&bVar1824);
										UNK_0x8910D3D58E0132B8(func_414(0));
										func_421(&uVar1800);
										Var0 = 6;
										iVar1774 = 0;
									}
								}
								break;
							case 3:
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_263[1]))
								{
									iLocal_295 = UNK_0xE9744DB7B8CA6965(UNK_0x68E4ADDDDCD7BDDE(ScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (UNK_0xD9522BA9E27E1349(ScriptParam_0.f_4) - 3.783146f), 2);
									iLocal_301 = UNK_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", false);
									UNK_0x93E9ED66DAB9FBE3(iLocal_301, iLocal_295, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									UNK_0xE3BB8E05FCEB3FBE(iLocal_301, true);
									UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
									UNK_0xBC43ED9FE28DB191(bLocal_263[0]);
									UNK_0xBC43ED9FE28DB191(bLocal_263[1]);
									UNK_0x327AAEE25F323797(bLocal_263[0]);
									UNK_0x327AAEE25F323797(bLocal_263[1]);
									UNK_0x915804B434753CBD(bLocal_263[1], iLocal_295, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									UNK_0x915804B434753CBD(bLocal_263[0], iLocal_295, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									UNK_0xC6EB89C59F2AF6B8(bLocal_263[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, false, 0, 0, 0);
									UNK_0xC6EB89C59F2AF6B8(bLocal_263[0], "mini@dartsintro_alt1", bVar1793, 8f, -8f, -1, 32, false, 0, 0, 0);
									UNK_0xE14EC663EED44AD5(bVar1824, iLocal_295, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 1090519040, 0, 1148846080 /* Float: 1000f */);
									func_424(&uVar1800);
									iVar1774++;
								}
								break;
							case 4:
								if (UNK_0x69DF961355195C3C(iLocal_295))
								{
									if (!bVar1770)
									{
										if (func_423(&uVar1800) > 0.5f)
										{
											func_422(bLocal_263[0], "DARTS_REQUEST_GAME", 6);
											bVar1770 = true;
											func_421(&uVar1800);
										}
									}
									else if (!UNK_0x65636D4556D82155(bLocal_263[0]))
									{
										if (!bVar1771)
										{
											if (!func_420(&uVar1800))
											{
												func_435(&uVar1800);
											}
											else if (func_423(&uVar1800) > 0.25f)
											{
												func_419(bLocal_263[1]);
												func_421(&uVar1800);
												bVar1771 = true;
											}
										}
									}
									if (UNK_0xA45992A6CE82FB43(iLocal_295) > 0.95f)
									{
										bLocal_285 = true;
										iVar1774++;
									}
									else if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
									{
									}
								}
								break;
							case 5:
								if (UNK_0xA45992A6CE82FB43(iLocal_295) > 0.99f)
								{
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_263[1]))
									{
										func_413();
										UNK_0x9A8DDC7C522F5BF5(iLocal_301, 0);
										UNK_0xA3BF0AA5A2608191(bLocal_263[0]);
										UNK_0xA3BF0AA5A2608191(bLocal_263[1]);
										UNK_0x1BF8B16C32704027(bVar1824, -1000f, 0);
										UNK_0xF690C84DADBB3551(&bVar1824);
										UNK_0x8910D3D58E0132B8(func_414(0));
										func_421(&uVar1800);
										Var0 = 6;
										iVar1774 = 0;
									}
								}
								break;
							case 9:
								if (UNK_0x757EF87A33649210())
								{
									bLocal_285 = true;
									iLocal_31 = 0;
									UNK_0xA37A90C62806D848(1);
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_263[1]))
									{
										UNK_0xA47B46945FF6DE74(bLocal_263[0], Var465, 1, 0, 0, 1);
										UNK_0xD8F6A53F4799FAFE(bLocal_263[0], Var0.f_243.f_4);
										UNK_0xA47B46945FF6DE74(bLocal_263[1], Var465.f_3, 1, 0, 0, 1);
										UNK_0xD8F6A53F4799FAFE(bLocal_263[1], Var0.f_243.f_4);
										UNK_0xA3BF0AA5A2608191(bLocal_263[0]);
										UNK_0xA3BF0AA5A2608191(bLocal_263[1]);
									}
									UNK_0x9A8DDC7C522F5BF5(iLocal_301, 0);
									UNK_0x1BF8B16C32704027(bVar1824, -1000f, 0);
									UNK_0xF690C84DADBB3551(&bVar1824);
									if (!UNK_0xEAE0D21A50E6C7F4(Global_111599, false))
									{
										func_415(Var0.f_243.f_1, Var0.f_243.f_4, func_417(2), func_416(0), 0, 1);
									}
									else
									{
										func_413();
									}
									UNK_0x8910D3D58E0132B8(func_414(0));
									func_421(&uVar1800);
									UNK_0x82E51BCA72537B6C(500);
									Var0 = 6;
									iVar1774 = 0;
								}
								break;
						}
					}
					break;
				case 6:
					switch (iVar1774)
					{
						case 0:
							iLocal_291 = UNK_0x1C0640BA9A7327B3();
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_263[1]))
							{
								UNK_0xA47B46945FF6DE74(bLocal_263[0], Var465, 1, 0, 0, 1);
								UNK_0xD8F6A53F4799FAFE(bLocal_263[0], Var0.f_243.f_4);
								UNK_0xA47B46945FF6DE74(bLocal_263[1], Var465.f_3, 1, 0, 0, 1);
								UNK_0xD8F6A53F4799FAFE(bLocal_263[1], Var0.f_243.f_4);
							}
							UNK_0x8BC9595FD2792B5D(func_414(1));
							iVar1774 = 0;
							Var0 = 7;
							break;
						case 1:
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_291) > 1500)
							{
								func_411(&(Var508.f_57), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
								iVar1774++;
							}
							break;
						case 2:
							if (!func_410(&(Var508.f_57), 1, 0))
							{
								UNK_0x8BC9595FD2792B5D(func_414(1));
								iVar1774 = 0;
								Var0 = 7;
							}
							break;
					}
					break;
				case 7:
					if (!UNK_0xEAE0D21A50E6C7F4(Global_111599, false))
					{
						if (func_407(&iVar464, &(Var0.f_243), &(Var0.f_249), &(Var0.f_1), &(Var0.f_164), &uVar1797))
						{
							UNK_0x5D96D8530B3D0904(&Global_111599, false);
							Var0 = 8;
						}
					}
					else
					{
						UNK_0xE3BB8E05FCEB3FBE(iLocal_120, true);
						Var0 = 8;
					}
					break;
				case 8:
					if (UNK_0x757EF87A33649210())
					{
						UNK_0x82E51BCA72537B6C(500);
					}
					switch (iVar1774)
					{
						case 0:
							if (!UNK_0xC844350D5D58C99A(func_498()))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(Global_111599, 10))
								{
									UNK_0x5D96D8530B3D0904(&Global_111599, 10);
								}
								else
								{
									UNK_0x0674E58A79778E99(&Global_111599, 10);
								}
								func_405(&Var508);
								iVar1774++;
							}
							else
							{
								func_405(&Var508);
								iVar1774++;
							}
							break;
						case 1:
							if (UNK_0x0EFF6B4415DAF4A1())
							{
								if (fLocal_134 != UNK_0x33D480CCE15C991A(0))
								{
									fLocal_134 = UNK_0x33D480CCE15C991A(0);
									UNK_0x5818C8D5303DCCF8(iLocal_120, func_404(fLocal_134));
									UNK_0x5818C8D5303DCCF8(iLocal_121, func_404(fLocal_134));
								}
							}
							if (func_344(&Var508, &(Var0.f_452), &(Var0.f_453)))
							{
								UNK_0x8910D3D58E0132B8(func_414(1));
								if (Var0.f_452 > 0)
								{
									iVar1774 = 0;
									if (Var0.f_452 > 1 || Var0.f_453 > 1)
									{
										func_343(&Var477, 0, 0, 0, 0);
										bVar1769 = true;
									}
									func_340(1, -1);
									Var0 = 9;
								}
								else if (Var0.f_452 < 0)
								{
									Var0 = 15;
								}
							}
							break;
					}
					break;
				case 9:
					if (func_333(&Var0, &Var477, &Var508))
					{
						Var0.f_249.f_4 = 1;
						if (Global_111638.f_18965.f_5 >= 5 && Global_111638.f_18965.f_7 >= 0.8f)
						{
							Var0.f_249.f_4 = 2;
						}
						else if (Global_111638.f_18965.f_5 >= 3 && Global_111638.f_18965.f_7 >= 0.66f)
						{
							Var0.f_249.f_4 = 1;
						}
						else
						{
							Var0.f_249.f_4 = 0;
						}
						if (func_332(Global_111638.f_18965.f_5, &bLocal_294))
						{
							func_331(&(Var508.f_666), 24, 1);
						}
						fLocal_90 = func_330(Global_111638.f_18965.f_5);
						fLocal_91 = func_329(Global_111638.f_18965.f_5);
						fLocal_88 = fLocal_90;
						fLocal_89 = fLocal_91;
						iLocal_151[4]++;
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_263[1]))
						{
							UNK_0x327AAEE25F323797(bLocal_263[1]);
							UNK_0xA47B46945FF6DE74(bLocal_263[1], Var465.f_3, 1, 0, 0, 1);
							UNK_0xD8F6A53F4799FAFE(bLocal_263[1], Var0.f_243.f_4);
						}
						if (func_420(&uVar1794))
						{
							func_421(&uVar1794);
						}
						UNK_0x8BC9595FD2792B5D(func_414(2));
						func_328(bLocal_263[1]);
						Var0 = 10;
						Var0.f_1 = 2;
					}
					break;
				case 10:
					if (UNK_0x0EFF6B4415DAF4A1())
					{
						if (fLocal_134 != UNK_0x33D480CCE15C991A(0))
						{
							fLocal_134 = UNK_0x33D480CCE15C991A(0);
							UNK_0x5818C8D5303DCCF8(iLocal_120, func_404(fLocal_134));
							UNK_0x5818C8D5303DCCF8(iLocal_121, func_404(fLocal_134));
						}
					}
					if (!bLocal_283)
					{
						UNK_0x3F423BF5B8125A50("mini@dartsoutro");
						bLocal_283 = true;
					}
					if (!bLocal_284)
					{
						if (bLocal_283)
						{
							if (!UNK_0xB4AE0788C1587752("mini@dartsoutro"))
							{
							}
							else
							{
								bLocal_284 = true;
							}
						}
					}
					func_246(&Var0, &vVar471, &Var477, &Var508, &uVar1794);
					break;
				case 11:
					switch (iVar1774)
					{
						case 0:
							if (func_423(&(Var0.f_254)) > 0.5f)
							{
								UNK_0xA37A90C62806D848(1);
								UNK_0x790015DC92C918E2();
								func_245(UNK_0x16F2683693E537C9());
								func_343(&Var477, Var0.f_449[0], Var0.f_449[1], Var0.f_446[0], Var0.f_446[1]);
								bVar1828 = false;
								while (bVar1828 < 2)
								{
									iVar1829 = 0;
									while (iVar1829 < 3)
									{
										func_244(&(Var0.f_5[bVar1828 /*79*/][iVar1829 /*26*/]));
										iVar1829++;
									}
									func_243(&Var477, bVar1828);
									bVar1828++;
								}
								if (Var0.f_459)
								{
									if (Var0.f_454)
									{
										func_241(&(Var508.f_62), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									}
									else
									{
										func_241(&(Var508.f_62), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
									}
									Var0.f_459 = 0;
								}
								else if (Var0.f_454)
								{
									func_241(&(Var508.f_62), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									func_241(&(Var508.f_62), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
								}
								fVar1831 = UNK_0x33D480CCE15C991A(1);
								if (fVar1831 > 2f)
								{
									vVar1787 = { 1992.294f, 3047.577f, 46.21517f };
									vVar1790 = { 0f, 0f, 138.74f };
								}
								else
								{
									vVar1787 = { 1992.336f, 3047.924f, 46.21517f };
									vVar1790 = { 0f, 0f, 136.74f };
								}
								iVar1830 = func_240();
								iLocal_295 = UNK_0xE9744DB7B8CA6965(vVar1787, vVar1790, 2);
								iLocal_301 = UNK_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", false);
								UNK_0x93E9ED66DAB9FBE3(iLocal_301, iLocal_295, sLocal_375[iVar1830], "mini@dartsoutro");
								UNK_0xE3BB8E05FCEB3FBE(iLocal_301, true);
								UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_263[0]) && !UNK_0xEB6A8945D1AC98A1(bLocal_263[1]))
								{
									if (Var0.f_454)
									{
										if ((Var0.f_437[0] + Var0.f_437[1]) == 1)
										{
											bVar1832 = true;
										}
										else
										{
											bVar1832 = false;
										}
										UNK_0x4D7F4CC43D4D0DE3(-1, "TENNIS_POINT_WON", "HUD_AWARDS", 1);
										func_239(&bLocal_263, bVar1832);
										UNK_0x915804B434753CBD(bLocal_263[0], iLocal_295, "mini@dartsoutro", sLocal_367[iVar1830], 1000f, -1.5f, 0, 0, 1148846080, 0);
										UNK_0x915804B434753CBD(bLocal_263[1], iLocal_295, "mini@dartsoutro", sLocal_371[iVar1830], 1000f, -1.5f, 0, 0, 1148846080, 0);
										UNK_0xC6EB89C59F2AF6B8(UNK_0x16F2683693E537C9(), bLocal_362, sLocal_363[UNK_0x09AC81E49EA267F7(false, 3)], 4f, -4f, -1, 32, false, 0, 0, 0);
									}
									else
									{
										UNK_0x4D7F4CC43D4D0DE3(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
										func_238(&bLocal_263);
										UNK_0x915804B434753CBD(bLocal_263[1], iLocal_295, "mini@dartsoutro", sLocal_367[iVar1830], 1000f, -1.5f, 0, 0, 1148846080, 0);
										UNK_0x915804B434753CBD(bLocal_263[0], iLocal_295, "mini@dartsoutro", sLocal_371[iVar1830], 1000f, -1.5f, 0, 0, 1148846080, 0);
										UNK_0xC6EB89C59F2AF6B8(bLocal_263[1], bLocal_361, sLocal_363[UNK_0x09AC81E49EA267F7(false, 3)], 4f, -4f, -1, 32, false, 0, 0, 0);
									}
								}
								iVar1774++;
							}
							break;
						case 1:
							if (!func_236(&(Var508.f_62), 1))
							{
								iVar1774++;
							}
							break;
						case 2:
							func_421(&(Var0.f_254));
							bLocal_279 = false;
							UNK_0x8910D3D58E0132B8(func_414(3));
							func_413();
							if (UNK_0x9F4FE516EAACCFC5(iLocal_301))
							{
								UNK_0x9A8DDC7C522F5BF5(iLocal_301, 0);
							}
							iVar1774 = 0;
							Var0 = 9;
							break;
					}
					break;
				case 12:
					if (func_423(&(Var0.f_254)) > 0.92f)
					{
						func_41(&Var0, &Var508, &Var477, &Var1191, bVar1769);
					}
					break;
				case 13:
					bVar1772 = func_10(&Var1191, 0, 1065353216 /* Float: 1f */, 0, 0, 0);
					if (!UNK_0x437347B10A200C4B(func_498(), 0))
					{
						UNK_0xA3BF0AA5A2608191(bLocal_263[1]);
						Var0 = 15;
					}
					switch (iVar1774)
					{
						case 0:
							UNK_0xA3BF0AA5A2608191(bLocal_263[0]);
							if (!bLocal_281)
							{
								UNK_0xB3A1B75CB59FEB56(false, bLocal_281, 3000, 1, 0, 0);
							}
							else
							{
								UNK_0x04B065D07D2FB5B9(0, 0, 3, 0);
							}
							UNK_0x2FB9A57162E54BAB(0f);
							UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
							UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
							UNK_0x790015DC92C918E2();
							UNK_0x0C8C0C840C2D1AD2(bLocal_263[0], bLocal_263[1], 5000, 2049, 3);
							func_435(&uVar1800);
							iVar1774++;
							break;
						case 1:
							if (func_7(&uVar1800) > 0.1f)
							{
								if (!bVar1768)
								{
								}
								func_435(&uVar1800);
								iVar1774++;
							}
							break;
						case 2:
							if (func_7(&uVar1800) > 0.3f)
							{
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_263[1]))
								{
									if (!bVar1768)
									{
										func_4(bLocal_263[0], "GENERIC_THANKS", 1, 4);
									}
								}
								func_435(&uVar1800);
								iVar1774++;
							}
							break;
						case 3:
							if (bVar1772 || bVar1768)
							{
								Var0 = 15;
								iVar1774++;
							}
							break;
					}
					break;
				case 14:
					func_2(&Var508);
					if (UNK_0xB9132A06AE472728(2, 201))
					{
						func_1(bLocal_263[1]);
						iLocal_298 = 2;
						bVar1768 = true;
						if (UNK_0x562F77A7F33D2E46(func_414(2)))
						{
							UNK_0x8910D3D58E0132B8(func_414(2));
						}
						Var0 = 13;
					}
					if (UNK_0xB9132A06AE472728(2, 202))
					{
						if (Var0.f_1 == 2)
						{
							bLocal_100 = false;
						}
						func_331(&(Var508.f_666), 8, 0);
						Var0 = 10;
					}
					break;
				case 15:
					func_469(&Var0, &Var508, &Var1191);
					break;
			}
		}
	}
}

void func_1(bool bParam0)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		func_4(bParam0, "GAME_QUIT_EARLY", 0, 6);
	}
}

void func_2(var uParam0)
{
	if (!UNK_0x798A3F1296751F46())
	{
		if (!func_3(&(uParam0->f_666), 8))
		{
			func_331(&(uParam0->f_666), 8, 1);
			func_331(&(uParam0->f_666), 15, 0);
			func_331(&(uParam0->f_666), 16, 0);
			func_331(&(uParam0->f_666), 17, 0);
		}
		UNK_0xCB7A8856533F691C();
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, false, -1, 0, false, true, 0);
	}
	else if (func_3(&(uParam0->f_666), 8))
	{
		func_331(&(uParam0->f_666), 8, 0);
	}
}

bool func_3(var uParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, bParam1);
}

void func_4(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!UNK_0x437347B10A200C4B(func_498(), 0) || bParam2)
	{
		func_422(bParam0, bParam1, iParam3);
	}
	else if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		func_5(bParam0, bParam1, bLocal_102, iParam3);
	}
}

void func_5(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	UNK_0xEB0A515D699A7E90(bParam0, bParam1, bParam2, func_6(iParam3), 0);
}

int func_6(int iParam0)
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

float func_7(bool bParam0)
{
	if (func_420(bParam0))
	{
		if (func_9(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_8(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return bParam0->f_1;
}

float func_8(bool bParam0)
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

bool func_9(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, 2);
}

bool func_10(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;

	if (UNK_0xF4CCC8CB6DE7F1AE() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = UNK_0xF4CCC8CB6DE7F1AE();
	if (!UNK_0x8CD06866876216F2())
	{
		if (UNK_0x28072FDD60CE3A6E(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4()), 1))
		{
			uParam0->f_575 = 1;
			return true;
		}
		if (UNK_0x946BFA82EB988C81(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4())))
		{
			uParam0->f_575 = 1;
			return true;
		}
	}
	if (!uParam0->f_564)
	{
		if (UNK_0x757EF87A33649210() || UNK_0xD0BB2359EC70FC37())
		{
			UNK_0x31A33F7BCB08CB80(true);
			uParam0->f_564 = 1;
		}
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (!UNK_0x8CD06866876216F2())
		{
			if (UNK_0x3114787DB5A129EF(UNK_0xD803B885F5E47A62(), 0))
			{
				UNK_0x0D00405AED37B7C4(UNK_0xD803B885F5E47A62(), 0);
			}
		}
	}
	UNK_0x3584F71E5CA29322(7);
	UNK_0x3584F71E5CA29322(8);
	UNK_0x3584F71E5CA29322(9);
	UNK_0x3584F71E5CA29322(6);
	UNK_0x3584F71E5CA29322(19);
	UNK_0x38C3A68D7861DCFD(2, 19, 1);
	UNK_0x38C3A68D7861DCFD(0, 37, 1);
	UNK_0x38C3A68D7861DCFD(0, 21, 1);
	UNK_0x38C3A68D7861DCFD(0, 28, 1);
	UNK_0x38C3A68D7861DCFD(0, 29, 1);
	UNK_0x38C3A68D7861DCFD(0, 171, 1);
	func_38(0);
	if (UNK_0x91E3F625EF57450D(2))
	{
		if (UNK_0xBB16188FFCC4B1B5() || (UNK_0x757EF87A33649210() && !UNK_0x7BCE0E6DD4A1F749()))
		{
			UNK_0x5D80F91A16C40CDE();
		}
	}
	Global_41981 = 1;
	if (!uParam0->f_563)
	{
		switch (func_500(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4())))
		{
			case 1:
				UNK_0x82A772610883F395("SuccessFranklin", 1000, 0);
				break;
			case 2:
				UNK_0x82A772610883F395("SuccessTrevor", 1000, 0);
				break;
			default:
				UNK_0x82A772610883F395("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (bParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_37(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_37(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_37((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_37(30f) - func_37(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_36(1);
		uParam0->f_572 = (uParam0->f_572 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_15(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_30 = func_14(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_UP_BACKGROUND");
					UNK_0x7E60D21B163E9D56();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_547 = func_14(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "TRANSITION_OUT");
			UNK_0x7E60D21B163E9D56();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_548 = func_14(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (UNK_0xB8E3620B82AD47D7(2))
			{
				if (UNK_0x83D8570832F172A7(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_11(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (UNK_0xBFC0798A6E3417F9(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && UNK_0x83D8570832F172A7(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					UNK_0x7E60D21B163E9D56();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_UP_BACKGROUND");
					UNK_0x7E60D21B163E9D56();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_11(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					UNK_0x7E60D21B163E9D56();
				}
				uParam0->f_559 = func_14((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_573 = func_14((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_14((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_573 = func_14((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (UNK_0xBFC0798A6E3417F9(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				func_36(0);
			}
			return !bVar0;
		}
	}
	func_36(0);
	return true;
}

void func_11(var uParam0, bool bParam1)
{
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "CLEAR_ALL");
	UNK_0x7E60D21B163E9D56();
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		UNK_0x1200CC973A2399C8(true);
		UNK_0x7E60D21B163E9D56();
	}
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(false);
	func_13(UNK_0xF59058FCB716F903(2, 215, true));
	func_12("ES_HELP");
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		UNK_0x1200CC973A2399C8(true);
		UNK_0x3CAEA85DA607305E(215);
	}
	UNK_0x7E60D21B163E9D56();
	if (bParam1)
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
		UNK_0x3CAEA85DA607305E(true);
		func_13(UNK_0xF59058FCB716F903(2, 216, true));
		func_12("ES_XPAND");
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			UNK_0x1200CC973A2399C8(true);
			UNK_0x3CAEA85DA607305E(216);
		}
		UNK_0x7E60D21B163E9D56();
	}
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	UNK_0x7E60D21B163E9D56();
}

void func_12(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_13(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

float func_14(float fParam0, float fParam1, float fParam2)
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

void func_15(var uParam0, float fParam1, bool bParam2)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	var uVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar27[32];
	int iVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;

	bVar0 = SYSTEM::ROUND((uParam0->f_547 * 255f));
	fVar1 = (func_35() * 0.25f);
	if (UNK_0x83D8570832F172A7(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_12(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_34(&(uParam0->f_13));
				}
				else
				{
					func_12(&(uParam0->f_13));
				}
				if (UNK_0x8CD06866876216F2())
				{
					UNK_0x3CAEA85DA607305E(150);
				}
				else
				{
					UNK_0x3CAEA85DA607305E(100);
				}
				UNK_0x1200CC973A2399C8(true);
				if (uParam0->f_556 == 4)
				{
					UNK_0x3CAEA85DA607305E((uParam0->f_56 - 1));
				}
				else
				{
					UNK_0x3CAEA85DA607305E(uParam0->f_56);
				}
				UNK_0x1200CC973A2399C8(bParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					UNK_0x3CAEA85DA607305E(2);
				}
				else
				{
					UNK_0x3CAEA85DA607305E(69);
				}
				UNK_0x7E60D21B163E9D56();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "TRANSITION_UP");
				UNK_0x7C19E5E4784BD7CF(0.15f);
				UNK_0x1200CC973A2399C8(true);
				UNK_0x7E60D21B163E9D56();
				uParam0->f_3 = 1;
			}
		}
		func_33();
		UNK_0x6567AE843FADBA94(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_37((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_35());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_32(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (UNK_0x33D480CCE15C991A(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_32(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_35()) / 2.5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	UNK_0x558EC149EB2BC0A2(2, 215);
	UNK_0x558EC149EB2BC0A2(2, 216);
	UNK_0x558EC149EB2BC0A2(2, 200);
	UNK_0x38C3A68D7861DCFD(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_29((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (UNK_0x757EF87A33649210())
			{
				UNK_0xBD706C594F6DCD4A();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				UNK_0x3584F71E5CA29322(7);
				UNK_0x3584F71E5CA29322(8);
				UNK_0x3584F71E5CA29322(9);
				UNK_0x3584F71E5CA29322(6);
				UNK_0x6567AE843FADBA94(uParam0->f_4, 255, 255, 255, bVar0, 0);
			}
			if (uParam0->f_567)
			{
				UNK_0x38C3A68D7861DCFD(0, 140, 1);
				UNK_0x38C3A68D7861DCFD(0, 141, 1);
				UNK_0x38C3A68D7861DCFD(0, 142, 1);
				UNK_0x38C3A68D7861DCFD(2, 188, 1);
				if (UNK_0xD245978525608929(2, 188))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					UNK_0x4D7F4CC43D4D0DE3(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				UNK_0x38C3A68D7861DCFD(2, 187, 1);
				if (UNK_0xD245978525608929(2, 187))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					UNK_0x4D7F4CC43D4D0DE3(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				UNK_0x38C3A68D7861DCFD(2, 202, 1);
				if (UNK_0xD245978525608929(2, 202))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					UNK_0x4D7F4CC43D4D0DE3(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				UNK_0x3584F71E5CA29322(7);
				UNK_0x3584F71E5CA29322(8);
				UNK_0x3584F71E5CA29322(9);
				UNK_0x3584F71E5CA29322(6);
				UNK_0x38C3A68D7861DCFD(0, 140, 1);
				UNK_0x38C3A68D7861DCFD(0, 141, 1);
				UNK_0x38C3A68D7861DCFD(0, 142, 1);
				if (UNK_0xBFC0798A6E3417F9(2, 215) || UNK_0xD245978525608929(2, 200))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					UNK_0x4D7F4CC43D4D0DE3(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	UNK_0xA402F6C87C08815C(true, &iVar13, &iVar14, &iVar15, &iVar16);
	UNK_0x7178F32F6742C936(iVar13, iVar14, iVar15, bVar0);
	UNK_0xF1F881BAAAFB43B1(fVar9, fVar10);
	UNK_0xEEF67251E263A87F(0);
	UNK_0xD3539A877EC25E86(1f, 0.4f);
	fVar1 = (fVar1 - func_37(6f));
	fVar1 = (fVar1 + (func_37(30f) - func_37((2f * 2f))));
	fVar11 = (fVar2 - func_37((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
		func_33();
		UNK_0xC1032CAC14DE468A(0.5f, (fVar1 - (func_37((2f - 0.5f)) - 0.001388889f)), fVar6, func_28(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_37((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_37(25f))), 0f, 1f);
			func_25(uParam0, iVar17, (fVar1 + func_37(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(bVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_37(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_37((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_37(2f));
					fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
					func_33();
					UNK_0xC1032CAC14DE468A(0.5f, (fVar1 + func_37((2f * 0.5f))), fVar6, func_28(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_37((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_37((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_37(2f));
			fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
			func_33();
			UNK_0xC1032CAC14DE468A(0.5f, (fVar1 + func_37((2f * 0.5f))), fVar6, func_28(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_37(25f))), 0f, 1f);
			UNK_0x7178F32F6742C936(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(bVar0))));
			func_18(7, 0, 1, &fVar18, &uVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (UNK_0xB3260A60545D3F11() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_35()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_35()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_35()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_35()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				UNK_0xF1F881BAAAFB43B1(fVar20, fVar21);
				UNK_0xEEF67251E263A87F(1);
			}
			else
			{
				fVar20 = 0.5f;
				UNK_0xEEF67251E263A87F(0);
			}
			UNK_0xD3539A877EC25E86(1f, 0.4f);
			func_17(&(uParam0->f_550), fVar20, (fVar1 + func_37((2f * 2f))), 0, 0, 0);
			UNK_0xF1F881BAAAFB43B1(fVar20, fVar21);
			UNK_0xEEF67251E263A87F(2);
			UNK_0xD3539A877EC25E86(1f, 0.4f);
			UNK_0xAAE406A7DA443B93(0);
			func_33();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			UNK_0xF1F881BAAAFB43B1(fVar20, fVar22);
			UNK_0x7178F32F6742C936(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(bVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					UNK_0x070005E852D4C0E9("PERCENTAGE");
					UNK_0x6D99DF8263D35CE5(uParam0->f_554);
					UNK_0xE0026608C37C7C41(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				case 1:
					UNK_0x070005E852D4C0E9("FO_TWO_NUM");
					UNK_0x6D99DF8263D35CE5(uParam0->f_554);
					UNK_0x6D99DF8263D35CE5(uParam0->f_555);
					UNK_0xE0026608C37C7C41(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				case 2:
					UNK_0x070005E852D4C0E9("MTPHPER_XPNO");
					UNK_0x6D99DF8263D35CE5(uParam0->f_554);
					UNK_0xE0026608C37C7C41(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				case 5:
					UNK_0x070005E852D4C0E9("ESDOLLA");
					UNK_0xCBD015EC7E4226BC(uParam0->f_554, 1);
					UNK_0xE0026608C37C7C41(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				bVar38 = bVar0;
				switch (uParam0->f_557)
				{
					case 1:
						UNK_0xA402F6C87C08815C(107, &iVar35, &iVar36, &iVar37, &bVar38);
						break;
					case 3:
						UNK_0xA402F6C87C08815C(109, &iVar35, &iVar36, &iVar37, &bVar38);
						break;
					case 2:
						UNK_0xA402F6C87C08815C(108, &iVar35, &iVar36, &iVar37, &bVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_16(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_37(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				UNK_0x539E86AE011A8B38(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, SYSTEM::ROUND((fVar12 * IntToFloat(bVar0))), 0);
			}
			fVar1 = (fVar1 + (func_37(30f) - 2f));
		}
	}
}

float func_16(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_17(bool bParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	UNK_0xAAE406A7DA443B93(iParam3);
	UNK_0x7BBAC160090910C3(iParam5);
	func_33();
	if (bParam4)
	{
		UNK_0x070005E852D4C0E9("STRING");
		UNK_0xD06AC7C87A34A6AD(bParam0);
	}
	else
	{
		UNK_0x070005E852D4C0E9(bParam0);
	}
	UNK_0xE0026608C37C7C41(fParam1, fParam2, 0);
}

bool func_18(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;

	StringCopy(&cVar0, func_24(iParam0), 64);
	StringCopy(&cVar16, func_21(iParam0, bParam1), 64);
	if (UNK_0x12AB0310C2281427(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			UNK_0xE5AC5CA7914F5BAE(&iVar32, &iVar33);
			fVar35 = UNK_0x33D480CCE15C991A(0);
			if (func_20())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_20())
			{
				fVar34 = 1f;
			}
			if (UNK_0x8A22C4C08282BF26(joaat("DIRECTOR_MODE")) > 0)
			{
				UNK_0x8A462DAA7D1D9008(&iVar32, &iVar33);
			}
			iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar32) / fVar34));
			iVar33 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) / fVar34));
		}
		else
		{
			UNK_0x8A462DAA7D1D9008(&iVar32, &iVar33);
		}
		vVar37 = { UNK_0xDE43A059FBFFF38A(&cVar0, &cVar16) };
		vVar37.x = (vVar37.x * (func_19(iParam0) / fVar34));
		vVar37.f_1 = (vVar37.y * (func_19(iParam0) / fVar34));
		if (!bParam2)
		{
			vVar37.x = (vVar37.x - 2f);
			vVar37.f_1 = (vVar37.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar37.x = 288f;
			vVar37.f_1 = 106f;
		}
		if (iParam0 == 29 && UNK_0x12AB0310C2281427(&(Global_22350.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			vVar37.x = 106f;
			vVar37.f_1 = 106f;
		}
		*fParam3 = ((vVar37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((vVar37.y / IntToFloat(iVar33)) / (vVar37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!UNK_0x0D71AFA59EF5104F() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return true;
	}
	return false;
}

float func_19(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
		case 61:
			return 0.8f;
	}
	return 1f;
}

bool func_20()
{
	int iVar0;
	int iVar1;
	float fVar2;

	UNK_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return true;
	}
	return false;
}

char* func_21(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;

	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_7029[iParam0 /*16*/])))
	{
		if (UNK_0x12AB0310C2281427(&(Global_22350.f_7029[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_23(UNK_0xD803B885F5E47A62()) };
			if (UNK_0x205FB5BBF81D8900(&Var19, &uVar3))
			{
				return func_22(&uVar3);
			}
		}
		else
		{
			return func_22(&(Global_22350.f_7029[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_22(var uParam0)
{
	return uParam0;
}

struct<13> func_23(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

char* func_24(int iParam0)
{
	var uVar0;
	struct<13> Var16;

	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_6020[iParam0 /*16*/])))
	{
		if (UNK_0x12AB0310C2281427(&(Global_22350.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_23(UNK_0xD803B885F5E47A62()) };
			UNK_0x205FB5BBF81D8900(&Var16, &uVar0);
			return func_22(&uVar0);
		}
		else
		{
			return func_22(&(Global_22350.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_25(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	UNK_0xA402F6C87C08815C(true, &iVar0, &iVar1, &iVar2, &uVar3);
	UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, bParam5);
	UNK_0xF1F881BAAAFB43B1(fParam3, fParam4);
	UNK_0xEEF67251E263A87F(1);
	UNK_0xD3539A877EC25E86(1f, func_27(14f));
	UNK_0xAAE406A7DA443B93(0);
	UNK_0x7BBAC160090910C3(0);
	func_33();
	if (uParam0->f_531[iParam1])
	{
		UNK_0x070005E852D4C0E9("STRING");
		UNK_0xD06AC7C87A34A6AD(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		UNK_0x070005E852D4C0E9(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			UNK_0x6D99DF8263D35CE5(uParam0->f_489[iParam1]);
		}
	}
	UNK_0xE0026608C37C7C41(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		case 1:
			func_18(7, 0, 1, &fVar5, &fVar6, 0);
			UNK_0x539E86AE011A8B38("CommonMenu", func_21(7, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, bParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		case 2:
			func_18(5, 0, 1, &fVar5, &fVar6, 0);
			UNK_0x539E86AE011A8B38("CommonMenu", func_21(5, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, bParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		case 3:
			func_18(6, 0, 1, &fVar5, &fVar6, 0);
			UNK_0x539E86AE011A8B38("CommonMenu", func_21(6, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, bParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		UNK_0xEEF67251E263A87F(1);
	}
	else
	{
		UNK_0xEEF67251E263A87F(2);
	}
	UNK_0xD3539A877EC25E86(1f, func_27(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		UNK_0xF1F881BAAAFB43B1(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		UNK_0xF1F881BAAAFB43B1(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, bParam5);
	func_26(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_26(bool bParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, int iParam5)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	bVar0 = true;
	UNK_0xAAE406A7DA443B93(0);
	UNK_0x7BBAC160090910C3(0);
	func_33();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			UNK_0xD3539A877EC25E86(1f, func_27(18f));
			UNK_0x7BBAC160090910C3(4);
			if (bParam0 < 0)
			{
				UNK_0xBBA442527B4BB1A6("ESMINDOLLA");
				UNK_0xCBD015EC7E4226BC((-1 * bParam0), 1);
				fVar1 = UNK_0x79E367314AFBB5CA(0);
			}
			else
			{
				UNK_0xBBA442527B4BB1A6("ESDOLLA");
				UNK_0xCBD015EC7E4226BC(bParam0, 1);
				fVar1 = UNK_0x79E367314AFBB5CA(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			UNK_0x539E86AE011A8B38("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			UNK_0x539E86AE011A8B38("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			UNK_0x539E86AE011A8B38("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			UNK_0xD3539A877EC25E86(1f, func_27(14f));
			break;
	}
	UNK_0x3A820E495A7BA3E5(bVar0);
	switch (iParam5)
	{
		case 11:
			UNK_0x070005E852D4C0E9("PERCENTAGE");
			UNK_0x6D99DF8263D35CE5(bParam0);
			break;
		case 1:
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("FO_NUM");
			UNK_0x6D99DF8263D35CE5(bParam0);
			break;
		case 2:
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("FO_TWO_NUM");
			UNK_0x6D99DF8263D35CE5(bParam0);
			UNK_0x6D99DF8263D35CE5(bParam1);
			break;
		case 4:
		case 5:
			UNK_0xD3539A877EC25E86(1f, func_27(18f));
		case 3:
			if (bParam0 < 0)
			{
				UNK_0x070005E852D4C0E9("ESMINDOLLA");
				UNK_0xCBD015EC7E4226BC((-1 * bParam0), 1);
			}
			else
			{
				UNK_0x070005E852D4C0E9("ESDOLLA");
				UNK_0xCBD015EC7E4226BC(bParam0, 1);
			}
			break;
		case 6:
			UNK_0x070005E852D4C0E9(bParam4);
			break;
		case 7:
			UNK_0x070005E852D4C0E9("STRING");
			UNK_0xD06AC7C87A34A6AD(bParam4);
			break;
		case 8:
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("STRING");
			UNK_0x164431059FF80580(bParam0, 14);
			break;
		case 9:
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("STRING");
			UNK_0x164431059FF80580(bParam0, 6);
			break;
		case 10:
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("STRING");
			UNK_0x164431059FF80580(bParam0, 2055);
			break;
		case 18:
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("STRING");
			UNK_0x164431059FF80580(bParam0, 2055);
			break;
		case 12:
			UNK_0x070005E852D4C0E9("AHD_DIST");
			UNK_0x6D99DF8263D35CE5(bParam0);
			break;
		case 13:
			UNK_0x070005E852D4C0E9(bParam4);
			UNK_0x6D99DF8263D35CE5(bParam0);
			UNK_0x6D99DF8263D35CE5(bParam1);
			break;
		case 15:
		case 14:
			UNK_0x070005E852D4C0E9(bParam4);
			UNK_0x6D99DF8263D35CE5(bParam0);
			UNK_0x6D99DF8263D35CE5(bParam1);
			break;
		case 16:
			UNK_0x070005E852D4C0E9(bParam4);
			UNK_0x6D99DF8263D35CE5(bParam1);
			break;
		case 20:
			UNK_0x070005E852D4C0E9(bParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			UNK_0xE0026608C37C7C41((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			UNK_0xD3539A877EC25E86(1f, func_27(14f));
		}
		else
		{
			UNK_0xE0026608C37C7C41(fParam2, fParam3, 0);
		}
	}
}

float func_27(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_28(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_29(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	bool bVar1;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_31(7, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_30(7, bVar0);
		Global_1378678.f_4562[bVar0] = iParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_4562.f_172[bVar0] = iParam2;
		Global_1378678.f_4562.f_216[bVar0] = iParam3;
		Global_1378678.f_4562.f_183[bVar0] = iParam4;
		Global_1378678.f_4562.f_194[bVar0] = iParam5;
		Global_1378678.f_4562.f_249[bVar0] = iParam6;
		Global_1378678.f_4562.f_260[bVar0] = iParam7;
		Global_1378678.f_4562.f_205[bVar0] = iParam8;
		Global_1378678.f_4562.f_314[bVar0] = iParam9;
		Global_1378678.f_4562.f_325[bVar0] = iParam10;
		Global_1378678.f_4562.f_357[bVar0] = iParam11;
		Global_1378678.f_4562.f_238[bVar0] = iParam12;
		Global_1378678.f_4562.f_271[bVar0] = iParam13;
		Global_1378678.f_4562.f_368[bVar0] = iParam14;
		Global_1378678.f_4562.f_379[bVar0] = iParam15;
		Global_1378678.f_4562.f_390[bVar0] = iParam16;
		Global_1378678.f_4562.f_227[bVar0] = iParam17;
	}
}

void func_30(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), bParam1);
}

bool func_31(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], bParam1);
}

float func_32(bool bParam0)
{
	UNK_0xBBA442527B4BB1A6(bParam0);
	return (UNK_0x79E367314AFBB5CA(1) / 2f);
}

void func_33()
{
	UNK_0xD9ACBBA59FD5A09E(1);
	if (UNK_0xD0BB2359EC70FC37() || UNK_0x757EF87A33649210())
	{
		UNK_0xD9ACBBA59FD5A09E(7);
	}
	UNK_0x5DD950F92F816F03(0);
}

void func_34(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

float func_35()
{
	float fVar0;

	fVar0 = 1f;
	if (UNK_0x0EFF6B4415DAF4A1())
	{
	}
	return fVar0;
}

void func_36(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

float func_37(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_38(int iParam0)
{
	if (func_40())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_39(0))
		{
			func_427(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

bool func_39(int iParam0)
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

bool func_40()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_41(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	bool bVar14;
	int iVar15;

	if (UNK_0x91E3F625EF57450D(2))
	{
		UNK_0x38C3A68D7861DCFD(2, 199, 1);
	}
	if (UNK_0x1963B11DE70153E0())
	{
		if (!bLocal_286)
		{
			if (func_213(uParam1, 0, &bLocal_287))
			{
				func_331(&(uParam1->f_666), 9, 0);
				bLocal_286 = true;
			}
		}
	}
	if (bLocal_268)
	{
		if (UNK_0x91E3F625EF57450D(2))
		{
			UNK_0x5D80F91A16C40CDE();
		}
		bVar1 = true;
		if (uParam1->f_680)
		{
			if (!uParam1->f_646 && !UNK_0x1963B11DE70153E0())
			{
				uParam1->f_646 = func_204(&(uParam1->f_647), 0);
				bVar1 = false;
				if (uParam1->f_646)
				{
					uParam1->f_680 = 0;
					func_331(&(uParam1->f_666), 9, 0);
					uParam1->f_646 = 0;
				}
			}
			else
			{
				func_126(&(uParam1->f_72), &(uParam1->f_645));
			}
			if (bVar1)
			{
				func_122(&(uParam1->f_509), 1128792064 /* Float: 200f */, 1, 0, 1, 1065353216 /* Float: 1f */);
				if (UNK_0xBFC0798A6E3417F9(2, 202))
				{
					uParam1->f_680 = 0;
					func_331(&(uParam1->f_666), 9, 0);
				}
				else if (UNK_0xBFC0798A6E3417F9(2, 215))
				{
					iVar0 = 2;
				}
				else if (UNK_0xBFC0798A6E3417F9(2, 216))
				{
					iVar0 = 1;
				}
			}
			if (func_121(&(uParam1->f_72)))
			{
				if (!bLocal_288)
				{
					bLocal_288 = true;
					func_120(&(uParam1->f_509), 0, 0, 1, 1);
					func_119(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
					func_119(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					func_119(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
					func_119(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
					func_116(&(uParam1->f_509), 1);
				}
			}
		}
		else
		{
			iVar0 = func_109(uParam1, 0, 0, bLocal_286);
			func_10(uParam3, 0, 1065353216 /* Float: 1f */, 0, 0, 0);
		}
		if ((UNK_0x69DF961355195C3C(iLocal_295) && UNK_0xA45992A6CE82FB43(iLocal_295) >= 0.995f) || !UNK_0x69DF961355195C3C(iLocal_295))
		{
			bLocal_281 = true;
			if (UNK_0x9F4FE516EAACCFC5(iLocal_301))
			{
				UNK_0x9A8DDC7C522F5BF5(iLocal_301, 0);
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_263[0]) && !UNK_0xEB6A8945D1AC98A1(bLocal_263[1]))
				{
					UNK_0x327AAEE25F323797(bLocal_263[0]);
					UNK_0x327AAEE25F323797(bLocal_263[1]);
					UNK_0xF895E10BF4C72645(bLocal_263[0], 0, 0);
					UNK_0xF895E10BF4C72645(bLocal_263[1], 0, 0);
				}
			}
			func_108();
		}
		if (func_423(&(uParam0->f_254)) > 2f)
		{
			if (!bLocal_279)
			{
				if (uParam0->f_454)
				{
					if ((uParam0->f_437[0] + uParam0->f_437[1]) == 1)
					{
						bVar2 = true;
					}
					else
					{
						bVar2 = false;
					}
					func_239(&bLocal_263, bVar2);
				}
				else
				{
					func_238(&bLocal_263);
				}
				bLocal_279 = true;
			}
		}
		if (iVar0 == 1)
		{
			UNK_0xA37A90C62806D848(1);
			UNK_0x8910D3D58E0132B8(func_414(3));
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_263[0]) && !UNK_0xEB6A8945D1AC98A1(bLocal_263[1]))
			{
				UNK_0xBC43ED9FE28DB191(bLocal_263[0]);
				UNK_0xBC43ED9FE28DB191(bLocal_263[1]);
			}
			func_107(uParam3);
			if (bParam4)
			{
				func_343(uParam2, 0, 0, 0, 0);
			}
			uParam0->f_429[0] = 0;
			uParam0->f_429[1] = 0;
			uParam0->f_432[0] = 0;
			uParam0->f_432[1] = 0;
			bLocal_30 = true;
			func_421(&(uParam0->f_254));
			*uParam0 = 9;
			bLocal_279 = false;
			bLocal_277 = false;
			bLocal_281 = false;
			func_104();
			bLocal_286 = false;
			bLocal_257 = false;
			uParam1->f_680 = 0;
			bLocal_287 = false;
			bLocal_288 = false;
			func_96(&(uParam1->f_72), 0);
			func_459();
		}
		else if (iVar0 == 2)
		{
			func_95(uParam3);
			UNK_0x8910D3D58E0132B8(func_414(3));
			if (uParam0->f_446[0] * 10 > 0)
			{
				func_53(func_90(), 21, uParam0->f_446[0] * 10, 0, 0);
			}
			UNK_0x790015DC92C918E2();
			*uParam0 = 13;
		}
		else if (((UNK_0xBFC0798A6E3417F9(0, 234) || UNK_0xBFC0798A6E3417F9(0, 235)) && uParam0->f_248 == 1) && bVar1)
		{
			uParam0->f_457 = 0;
			if (bLocal_267)
			{
				vVar3 = { UNK_0x68F4C0EC296D3901(uParam0->f_5[bLocal_30 /*79*/][iLocal_290 /*26*/], true) };
				func_52(vVar3, 0, bLocal_267);
				bLocal_267 = false;
			}
			else if (UNK_0xBFC0798A6E3417F9(2, 190))
			{
				iLocal_290++;
				if (iLocal_290 >= uParam0->f_436)
				{
					iLocal_290 = 0;
				}
				vVar3 = { UNK_0x68F4C0EC296D3901(uParam0->f_5[bLocal_30 /*79*/][iLocal_290 /*26*/], true) };
				func_50(vVar3);
			}
			else if (UNK_0xBFC0798A6E3417F9(2, 189))
			{
				iLocal_290 = (iLocal_290 - 1);
				if (iLocal_290 < 0)
				{
					iLocal_290 = (uParam0->f_436 - 1);
				}
				vVar3 = { UNK_0x68F4C0EC296D3901(uParam0->f_5[bLocal_30 /*79*/][iLocal_290 /*26*/], true) };
				func_50(vVar3);
			}
		}
		else if (((UNK_0xBFC0798A6E3417F9(0, 211) || UNK_0xD245978525608929(0, 211)) && bVar1) && (bLocal_286 || !UNK_0x1963B11DE70153E0()))
		{
			uParam1->f_680 = 1;
			func_120(&(uParam1->f_509), 0, 0, 1, 1);
			func_119(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			func_119(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			func_119(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
			if (bLocal_288)
			{
				func_119(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
			}
			func_116(&(uParam1->f_509), 1);
		}
	}
	else if (!uParam0->f_457)
	{
		UNK_0xA37A90C62806D848(1);
		UNK_0x790015DC92C918E2();
		func_46(uParam3, uParam0->f_454, uParam0->f_429[bLocal_30], uParam0->f_432[bLocal_30], iLocal_151[2], uParam0->f_437[0], uParam0->f_437[1], uParam0->f_440[0], uParam0->f_440[1], uParam0->f_443[0], uParam0->f_443[1], bParam4);
		fVar6 = UNK_0x33D480CCE15C991A(1);
		if (fVar6 > 2f)
		{
			vVar7 = { 1992.294f, 3047.577f, 46.21517f };
			vVar10 = { 0f, 0f, 138.74f };
		}
		else
		{
			vVar7 = { 1992.336f, 3047.924f, 46.21517f };
			vVar10 = { 0f, 0f, 136.74f };
		}
		iVar13 = func_240();
		iLocal_295 = UNK_0xE9744DB7B8CA6965(vVar7, vVar10, 2);
		iLocal_301 = UNK_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", false);
		UNK_0x93E9ED66DAB9FBE3(iLocal_301, iLocal_295, sLocal_375[iVar13], "mini@dartsoutro");
		UNK_0xE3BB8E05FCEB3FBE(iLocal_301, true);
		UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_263[0]) && !UNK_0xEB6A8945D1AC98A1(bLocal_263[1]))
		{
			if (uParam0->f_454)
			{
				UNK_0x915804B434753CBD(bLocal_263[0], iLocal_295, "mini@dartsoutro", sLocal_367[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				UNK_0x915804B434753CBD(bLocal_263[1], iLocal_295, "mini@dartsoutro", sLocal_371[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				UNK_0xC6EB89C59F2AF6B8(UNK_0x16F2683693E537C9(), bLocal_362, sLocal_363[UNK_0x09AC81E49EA267F7(false, 3)], 4f, -4f, -1, 32, false, 0, 0, 0);
			}
			else
			{
				UNK_0x915804B434753CBD(bLocal_263[1], iLocal_295, "mini@dartsoutro", sLocal_367[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				UNK_0x915804B434753CBD(bLocal_263[0], iLocal_295, "mini@dartsoutro", sLocal_371[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				UNK_0xC6EB89C59F2AF6B8(bLocal_263[1], bLocal_361, sLocal_363[UNK_0x09AC81E49EA267F7(false, 3)], 4f, -4f, -1, 32, false, 0, 0, 0);
			}
		}
		bLocal_281 = false;
		uParam0->f_457 = 1;
		uParam1->f_671 = UNK_0x1C0640BA9A7327B3();
		bVar14 = false;
		while (bVar14 < 2)
		{
			iVar15 = 0;
			while (iVar15 < 3)
			{
				func_244(&(uParam0->f_5[bVar14 /*79*/][iVar15 /*26*/]));
				iVar15++;
			}
			func_243(uParam2, bVar14);
			bVar14++;
		}
	}
	else if ((UNK_0x1C0640BA9A7327B3() - uParam1->f_671) > 400 && func_42(uParam3, 0, 0))
	{
		if (!uParam0->f_454)
		{
			UNK_0x4D7F4CC43D4D0DE3(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", 1);
		}
		bLocal_268 = true;
	}
}

bool func_42(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_45(uParam0);
	func_44(uParam0);
	if (UNK_0x7F8A39872A07D2CE(&(uParam0->f_550), "SPR_RESULT") || (UNK_0x7F8A39872A07D2CE(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (UNK_0x8CD06866876216F2())
	{
		UNK_0x0D3BE1DE0262A012("MPHud", 0);
	}
	if (uParam0->f_1 == 0)
	{
		UNK_0x0D3BE1DE0262A012("CommonMenu", 0);
		UNK_0x0D3BE1DE0262A012("MPLeaderboard", 0);
		UNK_0x0D3BE1DE0262A012("MPHud", 0);
		uParam0->f_1 = UNK_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = UNK_0x5275223F099DEF26("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!UNK_0x83D8570832F172A7(uParam0->f_1) || !UNK_0x27117E2CDD4D67C3("CommonMenu")) || !UNK_0x27117E2CDD4D67C3("MPLeaderboard")) || !UNK_0x27117E2CDD4D67C3("MPHud"))
		{
			SYSTEM::WAIT(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!UNK_0x83D8570832F172A7(uParam0->f_4))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		if (((!UNK_0x83D8570832F172A7(uParam0->f_1) || !UNK_0x27117E2CDD4D67C3("CommonMenu")) || !UNK_0x27117E2CDD4D67C3("MPLeaderboard")) || !UNK_0x27117E2CDD4D67C3("MPHud"))
		{
			return false;
		}
		if (uParam0->f_562)
		{
			if (!UNK_0x83D8570832F172A7(uParam0->f_4))
			{
				return false;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_43(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_11(uParam0, 1);
		}
		else
		{
			func_11(uParam0, 0);
		}
	}
	Global_76883 = 1;
	return true;
}

void func_43(var uParam0)
{
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "CLEAR_ALL");
	UNK_0x7E60D21B163E9D56();
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		UNK_0x1200CC973A2399C8(true);
		UNK_0x7E60D21B163E9D56();
	}
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(2);
	func_13(UNK_0xF59058FCB716F903(2, 188, true));
	func_12("ES_HELP_TU");
	UNK_0x7E60D21B163E9D56();
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(true);
	func_13(UNK_0xF59058FCB716F903(2, 187, true));
	func_12("ES_HELP_TD");
	UNK_0x7E60D21B163E9D56();
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(false);
	func_13(UNK_0xF59058FCB716F903(2, 202, true));
	func_12("ES_HELP_AB");
	UNK_0x7E60D21B163E9D56();
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	UNK_0x7E60D21B163E9D56();
}

void func_44(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	fVar0 = 0f;
	UNK_0xEEF67251E263A87F(0);
	UNK_0xD3539A877EC25E86(1f, func_27(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			UNK_0xBBA442527B4BB1A6("STRING");
			UNK_0xD06AC7C87A34A6AD(&(uParam0->f_13));
			fVar0 = UNK_0x79E367314AFBB5CA(1);
		}
		else
		{
			UNK_0xBBA442527B4BB1A6(&(uParam0->f_13));
			fVar0 = UNK_0x79E367314AFBB5CA(1);
		}
	}
	else
	{
		UNK_0xBBA442527B4BB1A6("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					UNK_0x6D99DF8263D35CE5(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				case 1:
					UNK_0x6B012227B3921E18(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				case 2:
					UNK_0xD06AC7C87A34A6AD(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = UNK_0x79E367314AFBB5CA(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_45(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

void func_46(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	uParam0->f_561 = 1;
	if (bParam1)
	{
		func_49(uParam0, "DARTS_WINNER", "DARTS_YJ", 0);
	}
	else
	{
		func_49(uParam0, "DARTS_LOSE_R", "DARTS_YJ", 0);
	}
	func_48(uParam0, 1, "DARTS_NUM_T", "", iParam2, 0, 0, 0);
	func_48(uParam0, 1, "DARTS_NUM_B", "", iParam3, 0, 0, 0);
	func_48(uParam0, 1, "DARTS_NUM_180", "", iParam4, 0, 0, 0);
	if (bParam11)
	{
		func_48(uParam0, 2, "DARTS_WIN", "", iParam5, (iParam5 + iParam6), 0, 0);
		func_48(uParam0, 2, "DARTS_SWIN", "", iParam7, (iParam7 + iParam8), 0, 0);
	}
	func_48(uParam0, 2, "DARTS_GWIN", "", iParam9, (iParam9 + iParam10), 0, 0);
	func_47(uParam0, 0, "", 0, 0, 0, 0, 0);
	func_36(1);
}

void func_47(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

void func_48(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;

	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_49(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_50(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { func_51(vParam0) };
	if (bLocal_133)
	{
		UNK_0x608A456FDD8A83D8(iLocal_131, vVar0);
		UNK_0xF1E4C781086FABC1(iLocal_131, iLocal_130, 500, 1, 1);
		bLocal_133 = false;
	}
	else
	{
		UNK_0x608A456FDD8A83D8(iLocal_130, vVar0);
		UNK_0xF1E4C781086FABC1(iLocal_130, iLocal_131, 500, 1, 1);
		bLocal_133 = true;
	}
}

Vector3 func_51(vector3 vParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar3 = { 0.3495f, -0.0276f, -0.0114f };
	vVar0 = { vParam0 - vVar3 };
	return vVar0;
}

void func_52(vector3 vParam0, bool bParam3, bool bParam4)
{
	vector3 vVar0;

	vVar0 = { func_51(vParam0) };
	if (bParam3)
	{
		UNK_0x608A456FDD8A83D8(iLocal_130, vVar0);
		UNK_0xF1E4C781086FABC1(iLocal_130, iLocal_129, 1500, 1, 1);
		UNK_0xE3BB8E05FCEB3FBE(iLocal_129, false);
		UNK_0x608A456FDD8A83D8(iLocal_131, vVar0);
		bLocal_133 = true;
	}
	else if (bParam4)
	{
		UNK_0x608A456FDD8A83D8(iLocal_130, vVar0);
		UNK_0xF1E4C781086FABC1(iLocal_130, iLocal_122, 2000, 1, 1);
		bLocal_133 = true;
	}
	else
	{
		if (bLocal_133)
		{
			UNK_0xF1E4C781086FABC1(iLocal_129, iLocal_130, 1500, 1, 1);
		}
		else
		{
			UNK_0xF1E4C781086FABC1(iLocal_129, iLocal_131, 1500, 1, 1);
		}
		UNK_0xE3BB8E05FCEB3FBE(iLocal_130, false);
	}
}

void func_53(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;

	if (func_89(iParam0) == 3)
	{
		return;
	}
	if (func_89(iParam0) == 4)
	{
		return;
	}
	func_54(func_89(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		bVar0 = false;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
				default:
					return;
			}
		}
		UNK_0x6FB46C25CCB7E6D5(iVar1, &bVar0, -1);
		bVar0 = (bVar0 + iParam2);
		UNK_0xCDC520E5E48E63D9(iVar1, bVar0, 1);
	}
}

int func_54(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_88();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_87(99, 1);
					func_86(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_86(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_86(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_70(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_65(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_86(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_86(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_86(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_65(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_86(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_86(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_86(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_86(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_86(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_86(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_86(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_86(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_86(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				default:
					switch (UNK_0x7CF4675EC2B8ED0B())
					{
						case joaat("CLOTHES_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_86(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_86(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_86(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_86(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_65(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_86(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_86(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_86(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_86(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_64(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_87(95, iParam3);
					break;
				case 1:
					func_87(97, iParam3);
					break;
				case 2:
					func_87(96, iParam3);
					break;
			}
			func_87(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_57(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_57(bVar1);
	}
	iVar5 = (Global_58686[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58686[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58686[iVar2] = 2147483647;
				}
				else
				{
					Global_58686[iVar2] = (Global_58686[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_86(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					func_86(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					func_86(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		case 0:
			if (!bParam4)
			{
				if ((Global_58686[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58686[iVar2];
			Global_58686[iVar2] = (Global_58686[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111638.f_20559.f_233[iVar2 /*69*/]++;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_1++;
		if (Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_56(iParam0);
	if (Global_41431 == 15)
	{
		func_55(0);
	}
	return 1;
}

void func_55(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0 /*3*/][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0 /*3*/][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0 /*3*/][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0 /*3*/][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0 /*3*/][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0 /*3*/][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0 /*3*/][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0 /*3*/][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0 /*3*/][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0 /*3*/][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0 /*3*/][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0 /*3*/][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0 /*3*/][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0 /*3*/][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0 /*3*/][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0 /*3*/][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0 /*3*/][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0 /*3*/][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_56(int iParam0)
{
	bool bVar0;

	bVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			UNK_0xCDC520E5E48E63D9(joaat("SP0_TOTAL_CASH"), bVar0, 1);
			break;
		case 1:
			UNK_0xCDC520E5E48E63D9(joaat("SP1_TOTAL_CASH"), bVar0, 1);
			break;
		case 2:
			UNK_0xCDC520E5E48E63D9(joaat("SP2_TOTAL_CASH"), bVar0, 1);
			break;
	}
}

void func_57(bool bParam0)
{
	bool bVar0;
	char cVar1[64];

	if (bParam0 == 8)
	{
		func_63(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_63(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_63(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_63(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_60(8269, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_60(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_60(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_60(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_60(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_60(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!UNK_0x8CD06866876216F2())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0))
		{
			bVar0 = true;
			UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0) || UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_59() /*10930*/].f_6174.f_10, bParam0))
	{
		bVar0 = true;
		UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		UNK_0x0674E58A79778E99(&(Global_2097152[func_59() /*10930*/].f_6174.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UNK_0x1E64CE678ED5F61E("COUP_RED");
		UNK_0x6B012227B3921E18(func_58(bParam0));
		UNK_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_58(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		case 1:
			return "COUP_TATTOO";
		case 2:
			return "COUP_WARSTOCK";
		case 3:
			return "COUP_MOSPORT";
		case 4:
			return "COUP_ELITAS";
		case 5:
			return "COUP_MEDSPENS";
		case 6:
			return "COUP_SPRUNK";
		case 7:
			return "COUP_RESPRAY";
		case 8:
			return "COUP_XMAS2017";
		case 9:
			return "COUP_CAR_XMAS2018";
		case 10:
			return "COUP_HELI_XMAS2018";
		case 11:
			return "COUP_CAR2_XMAS2018";
		case 12:
			return "COUP_CAS_ELITAS";
		case 13:
			return "COUP_CAS_DOCKTEASE";
		case 14:
			return "COUP_CAS_MOSPORT";
		case 15:
			return "COUP_CAS_SSASA";
		case 16:
			return "COUP_CAS_WARSTOCK";
		case 17:
			return "COUP_CAS_PANDM";
		default:
			break;
	}
	return "";
}

int func_59()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_60(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_61(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_61(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_62();
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

int func_62()
{
	return Global_1312745;
}

int func_63(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_62();
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

void func_64(int iParam0)
{
	func_87(93, iParam0);
	func_87(29, iParam0);
	func_87(30, iParam0);
}

bool func_65(bool bParam0)
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

	if (bParam0 == 8)
	{
		return func_67(129, -1, -1);
	}
	if (bParam0 == 9)
	{
		return func_67(135, -1, -1);
	}
	if (bParam0 == 10)
	{
		return func_67(136, -1, -1);
	}
	if (bParam0 == 11)
	{
		return func_67(137, -1, -1);
	}
	if (bParam0 == 12)
	{
		iVar0 = UNK_0xDD0E7998AE8AD485();
		iVar1 = func_66(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 13)
	{
		iVar2 = UNK_0xDD0E7998AE8AD485();
		iVar3 = func_66(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 14)
	{
		iVar4 = UNK_0xDD0E7998AE8AD485();
		iVar5 = func_66(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 15)
	{
		iVar6 = UNK_0xDD0E7998AE8AD485();
		iVar7 = func_66(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 16)
	{
		iVar8 = UNK_0xDD0E7998AE8AD485();
		iVar9 = func_66(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 17)
	{
		iVar10 = UNK_0xDD0E7998AE8AD485();
		iVar11 = func_66(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return false;
		}
		return true;
	}
	if (!UNK_0x8CD06866876216F2())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0);
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_59() /*10930*/].f_6174.f_10, bParam0);
}

int func_66(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_61(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_67(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_62();
	}
	iVar1 = func_69(iParam0, bParam1);
	iVar2 = func_68(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_68(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - UNK_0x04D746E8DA20611E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - UNK_0x04D746E8DA20611E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - UNK_0x04D746E8DA20611E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - UNK_0x04D746E8DA20611E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - UNK_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - UNK_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - UNK_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - UNK_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - UNK_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - UNK_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - UNK_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - UNK_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - UNK_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - UNK_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - UNK_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - UNK_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - UNK_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - UNK_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - UNK_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - UNK_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - UNK_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - UNK_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - UNK_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_69(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_62();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, bParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, bParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, false);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, false);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = UNK_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, false);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = UNK_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, bParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, false, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, bParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, bParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, false, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, bParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, bParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, bParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, bParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, bParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, bParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, bParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, bParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, bParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, bParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, bParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, bParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, bParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_70(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	if (UNK_0x5E109EC687D2605A(27))
	{
		return 0;
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	UNK_0x6FB46C25CCB7E6D5(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (bVar1 > 0 && (iVar2 / 2000000) != (bVar1 / 2000000))
	{
		UNK_0xCDC520E5E48E63D9(joaat("NUM_CASH_SPENT"), bVar1, 1);
		func_85(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_71(27, 1);
	return 1;
}

int func_71(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_72(iParam0, iParam1);
}

int func_72(int iParam0, int iParam1)
{
	if (func_84(14) && !func_83(iParam0))
	{
		return 0;
	}
	if (UNK_0x5E109EC687D2605A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31017 != 0 && !Global_76622)
	{
		return 0;
	}
	if (func_82(&Global_4270065))
	{
		if (func_80(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_73(&Global_4270065, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!UNK_0x5A66449FC9BDF808(iParam0))
		{
			return 0;
		}
		if (UNK_0x5E109EC687D2605A(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

bool func_73(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_84(14) && !func_83(iParam1))
	{
		return false;
	}
	if (func_80(uParam0, iParam1))
	{
		return false;
	}
	if (func_79(uParam0) < 0f)
	{
		func_78(uParam0, 0);
	}
	func_76(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_74(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_74(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_84(14) && !func_83(iParam1))
	{
		return 0;
	}
	if (func_80(uParam0, iParam1))
	{
		return 0;
	}
	if (func_79(uParam0) < 0f)
	{
		func_78(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_75(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_75(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_76(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_77(uParam0, iVar0);
		iVar0++;
	}
	func_78(uParam0, (Global_4270064 - 0.5f));
}

void func_77(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_78(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_79(var uParam0)
{
	return uParam0->f_80;
}

bool func_80(var uParam0, int iParam1)
{
	return func_81(uParam0, iParam1) != -1;
}

int func_81(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_82(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_83(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return true;
		default:
			break;
	}
	return false;
}

bool func_84(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_85(int iParam0, bool bParam1)
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

void func_86(int iParam0, int iParam1)
{
	bool bVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	UNK_0xCDC520E5E48E63D9(iParam0, bVar0, 1);
}

void func_87(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (UNK_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/])
	{
		UNK_0x6FB46C25CCB7E6D5(Global_57254[iParam0 /*7*/].f_1, &bVar0, -1);
		bVar0 = (bVar0 + iParam1);
		UNK_0xCDC520E5E48E63D9(Global_57254[iParam0 /*7*/].f_1, bVar0, 1);
	}
}

void func_88()
{
	int iVar0;

	if (UNK_0x61D9362D70D2DD56())
	{
		UNK_0x6FB46C25CCB7E6D5(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[0] == iVar0)
		{
			Global_58686[0] = iVar0;
		}
		UNK_0x6FB46C25CCB7E6D5(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[1] == iVar0)
		{
			Global_58686[1] = iVar0;
		}
		UNK_0x6FB46C25CCB7E6D5(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[2] == iVar0)
		{
			Global_58686[2] = iVar0;
		}
	}
}

int func_89(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

int func_90()
{
	func_91();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_91()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_93(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_500(UNK_0x16F2683693E537C9());
			if (func_92(iVar0) && (!func_84(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_92(Global_111638.f_2358.f_539.f_4321))
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

bool func_92(int iParam0)
{
	return iParam0 < 3;
}

int func_93(int iParam0)
{
	if (func_92(iParam0))
	{
		return func_94(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_94(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_95(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

void func_96(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0)
	{
		func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_102(uParam0);
		func_101(uParam0);
		func_100(&Global_1839723);
	}
	if (Global_1835392.f_2708 != 0 || Global_1835392.f_3184)
	{
		func_98();
	}
	if (UNK_0x562F77A7F33D2E46("LEADERBOARD_SCENE"))
	{
		UNK_0x8910D3D58E0132B8("LEADERBOARD_SCENE");
	}
	if (UNK_0x58424C49F8924842())
	{
		func_97(&(Global_1840924.f_49));
	}
	Global_2537071.f_3967 = 0;
}

void func_97(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_98()
{
	int iVar0;
	int iVar1;
	struct<75> Var2;

	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1835392[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1835392.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2708 = 0;
	Global_1835392.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1835392.f_2710[iVar0] = 0;
		StringCopy(&(Global_1835392.f_2717[iVar0 /*6*/]), "", 24);
		Global_1835392.f_2754[iVar0] = 0;
		Global_1835392.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2768 = 0;
	Global_1835392.f_2769 = 0;
	Global_1835392.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2771[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2779 = 0;
	func_99(&(Global_1835392.f_2780));
	func_97(&(Global_1835392.f_2823));
	Global_1835392.f_2825 = -1;
	Global_1835392.f_2826 = 0;
	func_97(&(Global_1835392.f_2827));
	Global_1835392.f_2829 = 0;
	func_97(&(Global_1835392.f_2830));
	Global_1835392.f_2832 = 0;
	Global_1835392.f_2780.f_28 = 0;
	Global_1835392.f_2780.f_27 = 0;
	Global_1835392.f_3184 = 0;
}

void func_99(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_100(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;

	iVar13 = 0;
	while (iVar13 < 12)
	{
		StringCopy(uParam0[iVar13 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar13 /*100*/])->f_16), "", 64);
		(uParam0[iVar13 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar13 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar13 /*100*/])->f_58 = 0;
		(uParam0[iVar13 /*100*/])->f_59 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			(uParam0[iVar13 /*100*/])->f_60[iVar14] = 0f;
			(uParam0[iVar13 /*100*/])->f_67[iVar14] = 0;
			iVar14++;
		}
		(uParam0[iVar13 /*100*/])->f_75 = 0;
		(uParam0[iVar13 /*100*/])->f_74 = 0;
		(uParam0[iVar13 /*100*/])->f_76 = 0;
		(uParam0[iVar13 /*100*/])->f_77 = 0;
		(uParam0[iVar13 /*100*/])->f_78 = 0;
		(uParam0[iVar13 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar13 /*100*/])->f_80), "", 16);
		iVar13++;
	}
	func_97(&(Global_1835392.f_2830));
}

void func_101(var uParam0)
{
	int iVar0;
	struct<13> Var1;

	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_97(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_102(var uParam0)
{
	int iVar0;
	struct<35> Var1;

	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_103(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_97(&(Global_1835008.f_1));
	UNK_0x8EFB4731C3DCDA55(*uParam2, uParam2->f_1, -1);
}

void func_104()
{
	struct<68> Var0;

	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_106(&(Global_1835013.f_73));
	func_106(&(Global_1835013.f_142));
	func_106(&(Global_1835013.f_211));
	func_106(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_105(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_105(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_106(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_107(var uParam0)
{
	func_45(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_108()
{
	UNK_0xE3BB8E05FCEB3FBE(iLocal_126, true);
}

int func_109(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_3(&(uParam0->f_666), 7))
	{
		if (!func_3(&(uParam0->f_666), 9))
		{
			func_36(1);
			func_120(&(uParam0->f_509), 0, 0, 1, 1);
			func_119(&(uParam0->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				func_119(&(uParam0->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			}
			else
			{
				func_119(&(uParam0->f_509), "DARTS_REPLAY", 2, 216, 1, 1, 0);
			}
			if (bParam3 || !UNK_0x1963B11DE70153E0())
			{
				func_119(&(uParam0->f_509), "HUD_LBD_LBD", 2, 211, 1, 1, 0);
			}
			func_116(&(uParam0->f_509), 1);
			func_331(&(uParam0->f_666), 8, 0);
			func_331(&(uParam0->f_666), 9, 1);
		}
		if (!func_3(&(uParam0->f_666), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_112(func_115(uParam0->f_668 < uParam0->f_669, uParam0->f_668, uParam0->f_669), func_114(uParam0->f_668 < uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
					func_112(func_115(uParam0->f_668 >= uParam0->f_669, uParam0->f_668, uParam0->f_669), func_114(uParam0->f_668 >= uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_112(uParam0->f_668, &(uParam0->f_648), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
				func_410(&(uParam0->f_57), 0, 0);
			}
			func_122(&(uParam0->f_509), 1128792064 /* Float: 200f */, 1, 0, 1, 1065353216 /* Float: 1f */);
		}
		if (!UNK_0x798A3F1296751F46())
		{
			if ((UNK_0x1C0640BA9A7327B3() - uParam0->f_671) > 900)
			{
				if (UNK_0x06F8112AA79C53D9(2, 216))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_331(&(uParam0->f_666), 9, 0);
					return 1;
				}
				else if (UNK_0xBFC0798A6E3417F9(2, 215))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_111();
					func_110();
					return 2;
				}
			}
		}
	}
	else
	{
		func_2(uParam0);
		if (UNK_0xB9132A06AE472728(2, 201))
		{
			return 2;
		}
		else if (UNK_0xB9132A06AE472728(2, 202))
		{
			func_331(&(uParam0->f_666), 9, 0);
			func_331(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_110()
{
	if (Global_2439138.f_2723[0 /*80*/].f_2 != 0)
	{
		Global_2439138.f_2723[0 /*80*/].f_2 = 5;
	}
}

void func_111()
{
	Global_30912 = 1;
}

void func_112(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	bool bVar0;
	bool bVar1;

	if (func_113(sParam6))
	{
		sParam6 = "NUMBER";
	}
	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_31(3, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_30(3, bVar0);
		Global_1378678.f_2764[bVar0] = iParam0;
		StringCopy(&(Global_1378678.f_2764.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_2764.f_183[bVar0] = iParam3;
		Global_1378678.f_2764.f_172[bVar0] = iParam2;
		Global_1378678.f_2764.f_205[bVar0] = iParam4;
		Global_1378678.f_2764.f_216[bVar0] = iParam5;
		StringCopy(&(Global_1378678.f_2764.f_259[bVar0 /*16*/]), sParam6, 64);
		Global_1378678.f_2764.f_420[bVar0] = iParam7;
		Global_1378678.f_2764.f_453[bVar0] = iParam8;
		Global_1378678.f_2764.f_431[bVar0] = iParam9;
		Global_1378678.f_2764.f_442[bVar0] = iParam10;
		Global_1378678.f_2764.f_464[bVar0] = iParam11;
		Global_1378678.f_2764.f_475[bVar0] = iParam12;
		Global_1378678.f_2764.f_486[bVar0] = iParam13;
		Global_1378678.f_2764.f_497[bVar0] = iParam14;
	}
}

bool func_113(bool bParam0)
{
	if (UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		return true;
	}
	else if (UNK_0x7F8A39872A07D2CE(bParam0, "") || UNK_0x7F8A39872A07D2CE(bParam0, "0"))
	{
		return true;
	}
	return false;
}

bool func_114(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_115(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_116(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(&(uParam0->f_1), 1024);
	}
	else
	{
		func_117(&(uParam0->f_1), 1024);
	}
}

void func_117(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_118(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_119(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_2[iVar1 /*15*/].f_13), false);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_120(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = UNK_0x5275223F099DEF26("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_118(&(uParam0->f_1), 32);
	}
	if (UNK_0x83D8570832F172A7(*uParam0))
	{
		func_118(&(uParam0->f_1), 1);
		if (bParam2)
		{
			UNK_0x5461A9D388F592B4(*uParam0, 1);
		}
	}
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (bParam3)
		{
			func_118(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_118(&(uParam0->f_1), 8192);
	}
}

bool func_121(var uParam0)
{
	if ((UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, true) && Global_1835392.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return true;
	}
	return false;
}

void func_122(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;

	if (((UNK_0xD0BB2359EC70FC37() || UNK_0x7BCE0E6DD4A1F749()) || UNK_0x757EF87A33649210()) || UNK_0x06980BB66EBA4D95())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_125(uParam0))
	{
		return;
	}
	UNK_0xBD706C594F6DCD4A();
	UNK_0xD9ACBBA59FD5A09E(iParam2);
	if (!func_124(uParam0->f_1, 256) || (func_124(uParam0->f_1, 8192) && UNK_0xB8E3620B82AD47D7(2)))
	{
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_CLEAR_SPACE");
		UNK_0x7C19E5E4784BD7CF(bParam1);
		UNK_0x7E60D21B163E9D56();
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_MAX_WIDTH");
		UNK_0x7C19E5E4784BD7CF(bParam5);
		UNK_0x7E60D21B163E9D56();
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT_EMPTY");
		UNK_0x7E60D21B163E9D56();
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			UNK_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			UNK_0x1200CC973A2399C8(func_124(uParam0->f_1, 4096));
			UNK_0x7E60D21B163E9D56();
		}
		bVar5 = false;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				case 1:
					bVar4 = UNK_0x91E3F625EF57450D(2);
					break;
				case 2:
					bVar4 = !UNK_0x91E3F625EF57450D(2);
					break;
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT"))
				{
					UNK_0x3CAEA85DA607305E(bVar5);
					bVar5++;
					bVar7 = false;
					while (bVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
						bVar2 = UNK_0xEAE0D21A50E6C7F4(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
						if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_2[iVar6 /*15*/].f_12, bVar7))
						{
							bVar3 = UNK_0xF59058FCB716F903(iVar0, iVar1, bVar2);
						}
						else
						{
							bVar3 = UNK_0xE32F7AC5E6DF304A(iVar0, iVar1, bVar2);
						}
						if (!UNK_0xEA6BC48857E0AC4C(bVar3))
						{
							func_13(bVar3);
						}
						bVar7++;
					}
					if (!UNK_0xEA6BC48857E0AC4C(uParam0->f_2[iVar6 /*15*/]))
					{
						func_12(uParam0->f_2[iVar6 /*15*/]);
					}
					if (UNK_0x0EFF6B4415DAF4A1())
					{
						if (func_124(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								UNK_0x1200CC973A2399C8(true);
								UNK_0x3CAEA85DA607305E(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								UNK_0x1200CC973A2399C8(false);
								UNK_0x3CAEA85DA607305E(-1);
							}
						}
					}
					UNK_0x7E60D21B163E9D56();
				}
			}
			iVar6++;
		}
		bVar8 = func_123(bParam4, func_123(func_124(uParam0->f_1, 32), 1f, 0f), -1f);
		UNK_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		UNK_0x7C19E5E4784BD7CF(bVar8);
		UNK_0x7E60D21B163E9D56();
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_BACKGROUND_COLOUR");
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(80f);
		UNK_0x7E60D21B163E9D56();
		func_118(&(uParam0->f_1), 256);
		func_117(&(uParam0->f_1), 128);
	}
	UNK_0x6567AE843FADBA94(*uParam0, 255, 255, 255, false, 0);
}

float func_123(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_124(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_125(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (UNK_0x83D8570832F172A7(*uParam0))
		{
			func_118(&(uParam0->f_1), 1);
			return true;
		}
	}
	return false;
}

void func_126(var uParam0, var uParam1)
{
	func_127(uParam1, uParam0);
}

void func_127(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2[3];
	bool bVar6;
	bool bVar7;
	bool bVar8;
	char cVar9[64];
	var uVar25;
	int iVar27[3];
	bool bVar31;
	struct<13> Var32;
	var uVar45;
	vector3 vVar51[24];
	vector3 vVar57[24];
	bool bVar63;

	func_203(&(Global_1840924.f_49), 1, 0);
	UNK_0xE19C2AAC820D8ED5();
	func_202();
	func_38(0);
	UNK_0x3FC8DBCC154CA56B();
	func_200(1);
	UNK_0x3584F71E5CA29322(10);
	func_199(1);
	func_198(1);
	if (!func_195())
	{
		if (!UNK_0x562F77A7F33D2E46("LEADERBOARD_SCENE"))
		{
			UNK_0x8BC9595FD2792B5D("LEADERBOARD_SCENE");
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_42, 3))
	{
		*uParam0 = func_194();
		UNK_0x5D96D8530B3D0904(&(uParam1->f_42), 3);
	}
	Var32 = { func_23(UNK_0xD803B885F5E47A62()) };
	if (UNK_0x83D8570832F172A7(*uParam0))
	{
		if (((!UNK_0x999A3BFD3E9B5D2C() || !UNK_0x1963B11DE70153E0()) || (!UNK_0x8BB6DE13A9F3105E() && UNK_0x9AE561F9BC3F06D8())) || Global_1835392.f_2832 != 0)
		{
			if (!UNK_0x1963B11DE70153E0())
			{
				if (Global_1835392.f_2829 != 2)
				{
					UNK_0x0674E58A79778E99(&(uParam1->f_42), true);
					Global_1835392.f_2829 = 2;
				}
			}
			else if (!UNK_0x8BB6DE13A9F3105E() && UNK_0x9AE561F9BC3F06D8())
			{
				if (Global_1835392.f_2829 != 3)
				{
					UNK_0x0674E58A79778E99(&(uParam1->f_42), true);
					Global_1835392.f_2829 = 3;
				}
			}
			else if (!UNK_0x999A3BFD3E9B5D2C())
			{
				if (Global_1835392.f_2829 != 4)
				{
					UNK_0x0674E58A79778E99(&(uParam1->f_42), true);
					Global_1835392.f_2829 = 4;
				}
			}
			else if (Global_1835392.f_2832 != 0)
			{
				if (Global_1835392.f_2829 != 5)
				{
					UNK_0x0674E58A79778E99(&(uParam1->f_42), true);
					Global_1835392.f_2829 = 5;
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_42, true))
			{
				UNK_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
				UNK_0x7E60D21B163E9D56();
				func_193(*uParam0, Global_1835392.f_2780);
				if (UNK_0xEF07223F00EBE9C9(&(Global_1835392.f_2780.f_1)))
				{
					if (!func_192(uParam1->f_44))
					{
						if (Global_1835392.f_2780.f_26 > 0)
						{
							cVar9 = { Global_1835392.f_2780.f_9 };
							func_191(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &cVar9, Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_191(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835392.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_191(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_191(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_191(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_191(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					func_190(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
				}
				bVar31 = false;
				UNK_0x5D96D8530B3D0904(&bVar31, 4);
				func_189(*uParam0, &bVar6, bVar31, 1, 1);
				bVar31 = false;
				UNK_0x5D96D8530B3D0904(&bVar31, 5);
				func_189(*uParam0, &bVar6, bVar31, 1, 1);
				bVar31 = false;
				UNK_0x5D96D8530B3D0904(&bVar31, 6);
				func_189(*uParam0, &bVar6, bVar31, 1, 1);
				UNK_0x5D96D8530B3D0904(&(uParam1->f_42), true);
				func_188(*uParam0);
				UNK_0x0674E58A79778E99(&(uParam1->f_42), 2);
				UNK_0xA37A90C62806D848(1);
			}
			else
			{
				func_188(*uParam0);
			}
		}
		else
		{
			if (Global_1835392.f_2829 != 1)
			{
				UNK_0x0674E58A79778E99(&(uParam1->f_42), true);
				Global_1835392.f_2829 = 1;
			}
			if (!func_153(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				UNK_0x0674E58A79778E99(&(uParam1->f_42), true);
				if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_42, false))
				{
					UNK_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
					UNK_0x7E60D21B163E9D56();
					func_193(*uParam0, Global_1835392.f_2780);
					if (UNK_0xEF07223F00EBE9C9(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_192(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835392.f_2780.f_9 };
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &cVar9, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_190(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					UNK_0x5D96D8530B3D0904(&(uParam1->f_42), false);
					UNK_0x0674E58A79778E99(&(uParam1->f_42), 2);
				}
				bVar6 = false;
				iVar0 = 0;
				if (Global_1835392.f_2825 == -1)
				{
					StringCopy(&cVar51, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 4);
							func_189(*uParam0, &bVar6, bVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 5);
							func_189(*uParam0, &bVar6, bVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 6);
							func_189(*uParam0, &bVar6, bVar31, 0, 0);
						}
						bVar31 = false;
						UNK_0x5D96D8530B3D0904(&bVar31, 7);
						func_152(*uParam0, bVar6, bVar31, &cVar51);
						bVar6++;
						iVar0++;
					}
					Global_1835392.f_2825 = 1;
					func_97(&(Global_1835392.f_2823));
				}
				else if (func_150(&(Global_1835392.f_2823), 300, 0))
				{
					StringCopy(&cVar57, "SC_LB_DL", 24);
					StringIntConCat(&cVar57, Global_1835392.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 4);
							func_189(*uParam0, &bVar6, bVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 5);
							func_189(*uParam0, &bVar6, bVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 6);
							func_189(*uParam0, &bVar6, bVar31, 0, 0);
						}
						bVar31 = false;
						UNK_0x5D96D8530B3D0904(&bVar31, 7);
						func_152(*uParam0, bVar6, bVar31, &cVar57);
						bVar6++;
						iVar0++;
					}
					Global_1835392.f_2825++;
					if (Global_1835392.f_2825 > 3)
					{
						Global_1835392.f_2825 = 0;
					}
					func_97(&(Global_1835392.f_2823));
				}
				func_188(*uParam0);
			}
			else
			{
				UNK_0x0674E58A79778E99(&(uParam1->f_42), false);
				if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_42, true))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					UNK_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
					UNK_0x7E60D21B163E9D56();
					func_193(*uParam0, Global_1835392.f_2780);
					if (UNK_0xEF07223F00EBE9C9(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_192(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835392.f_2780.f_9 };
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &cVar9, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_190(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_42, 6))
					{
						func_100(&Global_1839723);
						func_146(uParam1, &Global_1839723);
						func_145(uParam1, &Global_1839723);
					}
					bVar6 = false;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835392.f_2704[0] > 1 || (Global_1835392.f_2704[0] > 0 && Global_1835392.f_2775[0] != -1)) || (((Global_1835392.f_2704[0] > 0 && Global_1835392.f_2780.f_27) && func_192(uParam1->f_44)) && Global_1835392.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar63 = false;
							if (Global_1839723[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar27[0])
								{
									bVar31 = false;
									UNK_0x5D96D8530B3D0904(&bVar31, 4);
									func_189(*uParam0, &bVar6, bVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839723[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									bVar31 = false;
									UNK_0x5D96D8530B3D0904(&bVar31, 5);
									if ((Global_1835392.f_2704[1] < 1 && Global_1835392.f_2775[1] == -1) && !(((Global_1835392.f_2704[1] > 0 && Global_1835392.f_2780.f_27) && func_192(uParam1->f_44)) && Global_1835392.f_2775[1] != -1))
									{
										func_189(*uParam0, &bVar6, bVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_189(*uParam0, &bVar6, bVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_1839723[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar27[2])
								{
									bVar31 = false;
									UNK_0x5D96D8530B3D0904(&bVar31, 6);
									if (!UNK_0xC2F420D189FDB329())
									{
										bVar63 = true;
									}
									else if (!UNK_0xB0D6327A81292879())
									{
										bVar63 = true;
									}
									if ((Global_1835392.f_2704[2] < 2 && Global_1835392.f_2775[2] == -1) && !(((Global_1835392.f_2704[2] > 0 && Global_1835392.f_2780.f_27) && func_192(uParam1->f_44)) && Global_1835392.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_189(*uParam0, &bVar6, bVar31, 1, 0);
									}
									else
									{
										func_189(*uParam0, &bVar6, bVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_144(Global_1839723[iVar0 /*100*/].f_32))
							{
								if (func_192(uParam1->f_44))
								{
									UNK_0x4D8EB33D0EE1D0CB(UNK_0xD803B885F5E47A62(), &uVar45);
									if (!Global_1839723[iVar0 /*100*/].f_74 && UNK_0x7F8A39872A07D2CE(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									bVar31 = false;
									if (!Global_1835392.f_2780.f_27)
									{
										if (func_143(&(Global_1839723[iVar0 /*100*/].f_32), &Var32))
										{
											UNK_0x5D96D8530B3D0904(&bVar31, true);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												UNK_0x5D96D8530B3D0904(&bVar31, 3);
											}
										}
									}
									if (func_192(uParam1->f_44))
									{
										cVar9 = { Global_1839723[iVar0 /*100*/] };
										if (!UNK_0xEA6BC48857E0AC4C(&(Global_1839723[iVar0 /*100*/].f_84)) && !UNK_0x7F8A39872A07D2CE(&(Global_1839723[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_1839723[iVar0 /*100*/].f_84), 64);
										}
										func_142(*uParam0, bVar6, bVar31, Global_1839723[iVar0 /*100*/].f_59, &cVar9, &(Global_1839723[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = bVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = bVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839723[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_142(*uParam0, bVar6, bVar31, Global_1839723[iVar0 /*100*/].f_59, &(Global_1839723[iVar0 /*100*/]), &(Global_1839723[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = bVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = bVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839723[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									bVar1 = false;
									while (bVar1 < Global_1835392.f_2708)
									{
										bVar8 = false;
										if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2770, bVar1))
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2768, bVar1))
											{
												if (Global_1835392.f_2754[bVar1] == Global_1839723[iVar0 /*100*/].f_67[bVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_136(Global_1835392.f_2780, bVar1, Global_1839723[iVar0 /*100*/].f_67[bVar1], 0, Global_1839723[iVar0 /*100*/].f_58);
											}
											else
											{
												func_136(Global_1835392.f_2780, bVar1, Global_1839723[iVar0 /*100*/].f_67[bVar1], Global_1839723[iVar0 /*100*/].f_74, Global_1839723[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2768, bVar1))
											{
												if (Global_1835392.f_2761[bVar1] == Global_1839723[iVar0 /*100*/].f_67[bVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_133(Global_1835392.f_2780, bVar1, Global_1839723[iVar0 /*100*/].f_60[bVar1], 0);
											}
											else
											{
												func_133(Global_1835392.f_2780, bVar1, Global_1839723[iVar0 /*100*/].f_60[bVar1], Global_1839723[iVar0 /*100*/].f_74);
											}
										}
										bVar1++;
									}
									func_132();
									uVar2[(Global_1839723[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839723[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839723[iVar0 /*100*/].f_59 > 2)
										{
											UNK_0x5D96D8530B3D0904(&bVar31, 2);
											UNK_0x5D96D8530B3D0904(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_131(*uParam0, (bVar6 - 1), bVar31);
										}
									}
									bVar6++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						bVar31 = false;
						UNK_0x5D96D8530B3D0904(&bVar31, 4);
						func_189(*uParam0, &bVar6, bVar31, 1, 0);
						bVar31 = false;
						UNK_0x5D96D8530B3D0904(&bVar31, 5);
						func_189(*uParam0, &bVar6, bVar31, 1, 0);
						bVar31 = false;
						UNK_0x5D96D8530B3D0904(&bVar31, 6);
						func_189(*uParam0, &bVar6, bVar31, 1, 0);
					}
					UNK_0x5D96D8530B3D0904(&(uParam1->f_42), true);
					UNK_0x0674E58A79778E99(&(uParam1->f_42), 2);
					func_188(*uParam0);
					UNK_0xA37A90C62806D848(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835392.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							UNK_0x5D96D8530B3D0904(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_131(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_188(*uParam0);
					func_128(uParam0, uParam1);
				}
			}
		}
	}
}

void func_128(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;

	iVar1 = uParam1->f_246.f_1;
	if (UNK_0x91E3F625EF57450D(2))
	{
		UNK_0x5D80F91A16C40CDE();
		UNK_0x558EC149EB2BC0A2(2, 239);
		UNK_0x558EC149EB2BC0A2(2, 240);
		UNK_0x558EC149EB2BC0A2(2, 237);
		UNK_0x558EC149EB2BC0A2(2, 238);
		UNK_0x38C3A68D7861DCFD(2, 200, 1);
		if (UNK_0x7FEE810EE9E768EB(2, 241))
		{
			UNK_0x3D9702C33283E122(2, 188, 1f);
		}
		if (UNK_0x7FEE810EE9E768EB(2, 242))
		{
			UNK_0x3D9702C33283E122(2, 187, 1f);
		}
		if (UNK_0xE6CD3F2A2067C866(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					UNK_0x3D9702C33283E122(2, 217, 1f);
				}
			}
		}
	}
	if (!UNK_0x91E3F625EF57450D(2))
	{
		func_130(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_246, false))
		{
			if ((UNK_0x06F8112AA79C53D9(2, 188) || UNK_0x7FEE810EE9E768EB(2, 188)) || iVar6 < -100)
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				UNK_0x5D96D8530B3D0904(&(uParam1->f_246), false);
				func_97(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_129(uParam1, 188))
		{
			UNK_0x0674E58A79778E99(&(uParam1->f_246), false);
		}
		if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_246, true))
		{
			if ((UNK_0x06F8112AA79C53D9(2, 187) || UNK_0x7FEE810EE9E768EB(2, 187)) || iVar6 > 100)
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				UNK_0x5D96D8530B3D0904(&(uParam1->f_246), true);
				func_97(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_129(uParam1, 187))
		{
			UNK_0x0674E58A79778E99(&(uParam1->f_246), true);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_246, 3))
	{
		if ((UNK_0x06F8112AA79C53D9(2, 204) || UNK_0xD245978525608929(2, 204)) || UNK_0xBFC0798A6E3417F9(2, 237))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_246), 3);
			func_97(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_129(uParam1, 204))
	{
		UNK_0x0674E58A79778E99(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				UNK_0x0674E58A79778E99(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_131(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			UNK_0x5D96D8530B3D0904(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_131(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			UNK_0x0674E58A79778E99(&(uParam1->f_42), 2);
		}
		if (func_144(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_246, 2))
			{
				if (UNK_0x06F8112AA79C53D9(2, 217) || UNK_0xD245978525608929(2, 217))
				{
					if (!UNK_0x1A72D8C9F025E5E3())
					{
						UNK_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						UNK_0x5D96D8530B3D0904(&(uParam1->f_246), 2);
						UNK_0x7DA6B436D3570520(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!UNK_0x06F8112AA79C53D9(2, 217))
			{
				UNK_0x0674E58A79778E99(&(uParam1->f_246), 2);
			}
		}
	}
}

bool func_129(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if (iParam1 == 188 || iParam1 == 187)
	{
		func_130(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!UNK_0x06F8112AA79C53D9(2, iParam1) && !UNK_0x7FEE810EE9E768EB(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_150(&(uParam0->f_246.f_3), 250, 0))
		{
			return true;
		}
	}
	else if ((!UNK_0x06F8112AA79C53D9(2, iParam1) && !UNK_0x7FEE810EE9E768EB(2, iParam1)) || func_150(&(uParam0->f_246.f_3), 250, 0))
	{
		return true;
	}
	return false;
}

void func_130(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 218) * 127f));
	*iParam1 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*iParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 218) * 127f));
			*iParam1 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 221) * 127f));
		}
	}
}

void func_131(int iParam0, bool bParam1, bool bParam2)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT_STATE");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x3CAEA85DA607305E(bParam2);
	UNK_0x7E60D21B163E9D56();
}

void func_132()
{
	UNK_0x7E60D21B163E9D56();
}

void func_133(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, bool bParam43, bool bParam44, bool bParam45)
{
	switch (Param0.f_29[bParam43])
	{
		case 4:
			if (bParam45)
			{
				UNK_0x7ACC3006A87F8B39("NUMBER");
				UNK_0x21994591120B91F0(bParam44, 2);
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 12:
			if (bParam45)
			{
				UNK_0x7ACC3006A87F8B39("NUMBER");
				UNK_0x6D99DF8263D35CE5(SYSTEM::FLOOR(bParam44));
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam45)
			{
				if (Param0.f_29[bParam43] == 18 || Param0.f_29[bParam43] == 20)
				{
					bParam44 = (bParam44 * -1f);
				}
				if (!UNK_0x8ED6EC1BDC7FE067())
				{
					if (Param0.f_29[bParam43] == 19 || Param0.f_29[bParam43] == 20)
					{
						bParam44 = func_135(bParam44);
					}
					else
					{
						bParam44 = func_134(bParam44);
					}
				}
				UNK_0x7ACC3006A87F8B39("NUMBER");
				UNK_0x21994591120B91F0(bParam44, 2);
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 0:
			break;
	}
}

float func_134(bool bParam0)
{
	return (bParam0 / 0.3048f);
}

float func_135(bool bParam0)
{
	return (bParam0 / 1609.344f);
}

void func_136(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, bool bParam43, bool bParam44, bool bParam45, bool bParam46)
{
	struct<4> Var0;

	if (bParam44 == 2147483647 || bParam44 == -2147483647)
	{
		bParam45 = false;
	}
	StringCopy(&Var0, "", 16);
	switch (Param0.f_29[bParam43])
	{
		case 5:
			if (bParam45)
			{
				UNK_0x7ACC3006A87F8B39("NUMBER");
				UNK_0x6D99DF8263D35CE5(bParam44);
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 7:
			if (bParam45)
			{
				UNK_0x7ACC3006A87F8B39("NUMBER");
				UNK_0x6D99DF8263D35CE5(-bParam44);
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 1:
		case 9:
		case 11:
			if (bParam45)
			{
				if (Param0.f_29[bParam43] == 11 && bParam44 < 0)
				{
					bParam44 = (bParam44 * -1);
				}
				if (bParam44 >= 3600000 || bParam44 <= -3600000)
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 14);
					UNK_0x779B34565F4D71B1();
				}
				else if (Param0.f_29[bParam43] == 9)
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 6);
					UNK_0x779B34565F4D71B1();
				}
				else
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 2055);
					UNK_0x779B34565F4D71B1();
				}
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 6:
			if (bParam45)
			{
				if (bParam44 == 2147483647)
				{
					UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
					UNK_0x779B34565F4D71B1();
				}
				else if (bParam44 >= 3600000 || bParam44 <= -3600000)
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 14);
					UNK_0x779B34565F4D71B1();
				}
				else
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 2055);
					UNK_0x779B34565F4D71B1();
				}
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 2:
		case 10:
			if (bParam45)
			{
				bParam44 = (bParam44 * -1);
				if (bParam44 >= 3600000 || bParam44 <= -3600000)
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 14);
					UNK_0x779B34565F4D71B1();
				}
				else if (Param0.f_29[bParam43] == 10)
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 6);
					UNK_0x779B34565F4D71B1();
				}
				else
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 2055);
					UNK_0x779B34565F4D71B1();
				}
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 3:
			if (bParam46)
			{
				if (UNK_0x3FC14104C3FD24D5(bParam44))
				{
					UNK_0x7ACC3006A87F8B39("SCLB_VEH_CUST");
					UNK_0x6B012227B3921E18(UNK_0x1739BA50603D849C(bParam44));
					UNK_0x779B34565F4D71B1();
				}
				else
				{
					UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
					UNK_0x779B34565F4D71B1();
				}
			}
			else if (UNK_0x3FC14104C3FD24D5(bParam44))
			{
				UNK_0x7ACC3006A87F8B39(UNK_0x1739BA50603D849C(bParam44));
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 8:
			if (func_141(bParam44) != 0)
			{
				UNK_0x7ACC3006A87F8B39(func_138(func_141(bParam44), 0));
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam45)
			{
				if (Param0.f_29[bParam43] == 14 || Param0.f_29[bParam43] == 16)
				{
					bParam44 = (bParam44 * -1);
				}
				if (!UNK_0x8ED6EC1BDC7FE067())
				{
					if (Param0.f_29[bParam43] == 15 || Param0.f_29[bParam43] == 16)
					{
						bParam44 = SYSTEM::FLOOR(func_135(SYSTEM::TO_FLOAT(bParam44)));
					}
					else
					{
						bParam44 = SYSTEM::FLOOR(func_134(SYSTEM::TO_FLOAT(bParam44)));
					}
				}
				UNK_0x7ACC3006A87F8B39("NUMBER");
				UNK_0x6D99DF8263D35CE5(bParam44);
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 21:
			if (bParam44 > 20)
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				Var0 = { func_137(bParam44) };
				UNK_0x7ACC3006A87F8B39(&Var0);
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 0:
			break;
	}
}

struct<4> func_137(bool bParam0)
{
	struct<4> Var0;

	StringCopy(&Var0, "ARENA_C_SL", 16);
	if (bParam0 > 20)
	{
		StringCopy(&Var0, "**INVALID**", 16);
		return Var0;
	}
	if (bParam0 < 0)
	{
		bParam0 = false;
	}
	StringIntConCat(&Var0, bParam0, 16);
	return Var0;
}

char* func_138(int iParam0, bool bParam1)
{
	struct<32> Var0;

	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		case joaat("WEAPON_UNARMED"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		case joaat("WEAPON_PISTOL"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		case joaat("WEAPON_SMG"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		case joaat("WEAPON_MG"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		case joaat("WEAPON_REMOTESNIPER"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		case joaat("WEAPON_RPG"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		case joaat("WEAPON_GRENADE"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		case joaat("WEAPON_STICKYBOMB"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		case joaat("WEAPON_MOLOTOV"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		case joaat("WEAPON_STUNGUN"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		case joaat("WEAPON_PETROLCAN"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		case joaat("WEAPON_ELECTRIC_FENCE"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		case joaat("VEHICLE_WEAPON_TANK"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		case joaat("VEHICLE_WEAPON_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		case joaat("OBJECT"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		case joaat("GADGET_PARACHUTE"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		case joaat("WEAPON_KNIFE"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		case joaat("WEAPON_NIGHTSTICK"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		case joaat("WEAPON_HAMMER"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		case joaat("WEAPON_BAT"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		case joaat("WEAPON_CROWBAR"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		case joaat("WEAPON_GOLFCLUB"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		case joaat("WEAPON_RAMMED_BY_CAR"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		case joaat("WEAPON_RUN_OVER_BY_CAR"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		case joaat("WEAPON_BOTTLE"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		case joaat("WEAPON_GUSENBERG"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		case joaat("WEAPON_DAGGER"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		case joaat("WEAPON_FLAREGUN"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		case joaat("WEAPON_HEAVYPISTOL"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		case joaat("WEAPON_MUSKET"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		case joaat("WEAPON_FIREWORK"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		case joaat("WEAPON_PROXMINE"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		case joaat("WEAPON_HATCHET"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		case joaat("WEAPON_RAILGUN"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		case joaat("WEAPON_KNUCKLE"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		case joaat("WEAPON_MACHETE"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		case joaat("WEAPON_FLASHLIGHT"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		case joaat("WEAPON_DBSHOTGUN"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		case joaat("WEAPON_AUTOSHOTGUN"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		case joaat("WEAPON_BATTLEAXE"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		case joaat("WEAPON_MINISMG"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		case joaat("WEAPON_PIPEBOMB"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		case joaat("WEAPON_POOLCUE"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		case joaat("WEAPON_WRENCH"):
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		case joaat("WEAPON_COUGAR"):
			return "WT_RAGE";
		case -159960575:
			return "WT_VEH_WEP";
		case joaat("WEAPON_PISTOL_MK2"):
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		case joaat("WEAPON_DOUBLEACTION"):
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		case joaat("WEAPON_STONE_HATCHET"):
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		case joaat("WEAPON_RAYPISTOL"):
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		case joaat("WEAPON_RAYCARBINE"):
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		case joaat("WEAPON_RAYMINIGUN"):
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		case joaat("WEAPON_NAVYREVOLVER"):
			if (bParam1)
			{
				return "WTU_REV_NV";
			}
			else
			{
				return "WT_REV_NV";
			}
			break;
		case joaat("WEAPON_CERAMICPISTOL"):
			if (bParam1)
			{
				return "WTU_CERPST";
			}
			else
			{
				return "WT_CERPST";
			}
			break;
		default:
			if (func_140(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_139(&(Var0.f_31));
				}
				else
				{
					return func_139(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_139(var uParam0)
{
	return uParam0;
}

int func_140(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = UNK_0x037F36BEA9A47381();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (UNK_0x6532540B34EE6273(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_141(bool bParam0)
{
	if (bParam0 == 600)
	{
		return joaat("WEAPON_RAILGUN");
	}
	else if (bParam0 == 500)
	{
		return joaat("WEAPON_MINIGUN");
	}
	else if (bParam0 == 400)
	{
		return joaat("WEAPON_MG");
	}
	else if (bParam0 == 401)
	{
		return joaat("WEAPON_COMBATMG");
	}
	else if (bParam0 == 402)
	{
		return joaat("WEAPON_ASSAULTMG");
	}
	else if (bParam0 == 300)
	{
		return joaat("WEAPON_ASSAULTRIFLE");
	}
	else if (bParam0 == 301)
	{
		return joaat("WEAPON_CARBINERIFLE");
	}
	else if (bParam0 == 302)
	{
		return joaat("WEAPON_ADVANCEDRIFLE");
	}
	else if (bParam0 == 303)
	{
		return joaat("WEAPON_HEAVYRIFLE");
	}
	else if (bParam0 == 200)
	{
		return joaat("WEAPON_PUMPSHOTGUN");
	}
	else if (bParam0 == 201)
	{
		return joaat("WEAPON_SAWNOFFSHOTGUN");
	}
	else if (bParam0 == 202)
	{
		return joaat("WEAPON_ASSAULTSHOTGUN");
	}
	else if (bParam0 == 203)
	{
		return joaat("WEAPON_BULLPUPSHOTGUN");
	}
	else if (bParam0 == 100)
	{
		return joaat("WEAPON_MICROSMG");
	}
	else if (bParam0 == 101)
	{
		return joaat("WEAPON_SMG");
	}
	else if (bParam0 == 102)
	{
		return joaat("WEAPON_ASSAULTSMG");
	}
	else if (bParam0 == 0)
	{
		return joaat("WEAPON_PISTOL");
	}
	else if (bParam0 == 1)
	{
		return joaat("WEAPON_COMBATPISTOL");
	}
	else if (bParam0 == 2)
	{
		return joaat("WEAPON_APPISTOL");
	}
	else if (bParam0 == 3)
	{
		return joaat("WEAPON_PISTOL50");
	}
	return 0;
}

void func_142(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x3CAEA85DA607305E(bParam2);
	if (bParam3 > 0)
	{
		UNK_0x7ACC3006A87F8B39("NUMBER");
		UNK_0x6D99DF8263D35CE5(bParam3);
		UNK_0x779B34565F4D71B1();
	}
	else
	{
		UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
		UNK_0x779B34565F4D71B1();
	}
	UNK_0x045A0775396CC970(bParam4);
	UNK_0x045A0775396CC970(bParam5);
}

bool func_143(var uParam0, var uParam1)
{
	if (!func_144(*uParam0))
	{
		return false;
	}
	if (!func_144(*uParam1))
	{
		return false;
	}
	if (UNK_0x4F18738E5BDE9AC9(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

bool func_144(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return UNK_0x83F946529771616E(&uParam0, 13);
}

void func_145(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar77;

	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 5) && !UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_75 != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75)
						{
							uVar77 = (uParam1[iVar1 /*100*/])->f_75;
							(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
							(uParam1[iVar0 /*100*/])->f_75 = uVar77;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_75 == (uParam1[iVar0 /*100*/])->f_75)
						{
							if ((uParam1[iVar1 /*100*/])->f_59 != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59 == -1)
								{
									uVar77 = (uParam1[iVar1 /*100*/])->f_75;
									(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
									(uParam1[iVar0 /*100*/])->f_75 = uVar77;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_146(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 5) && !UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_149(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_149(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_149(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_147(uParam1);
	}
}

void func_147(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2704[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_23(UNK_0xD803B885F5E47A62()) };
	if (UNK_0xE4F1C23C6353EC03(Global_1835392.f_2826))
	{
		iVar16 = UNK_0x9B6FABF659F515A2(Global_1835392.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_148(&Global_1839593);
				iVar2 = 0;
				UNK_0xAB008D43188476FB(Global_1835392.f_2826, iVar0, &Global_1839593);
				*(uParam0[iVar0 /*100*/]) = { Global_1839593.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839593.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839593.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839593.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839593.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839593.f_60;
				Global_1835392.f_2708 = Global_1839593.f_62;
				Global_1835392.f_2769 = Global_1839593.f_63;
				iVar2 = 0;
				if (UNK_0xEAE0D21A50E6C7F4(Global_1839593.f_61, true))
				{
					iVar2 = 1;
				}
				else if (UNK_0xEAE0D21A50E6C7F4(Global_1839593.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (UNK_0xEAE0D21A50E6C7F4(Global_1839593.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835392.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_1839593.f_61, false))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_143(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835392.f_2775[(iVar2 - 1)] = 0;
					}
				}
				bVar1 = false;
				while (bVar1 < Global_1839593.f_62)
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_1839593.f_63, bVar1))
					{
						(uParam0[iVar0 /*100*/])->f_67[bVar1] = Global_1839593.f_97[bVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_60[bVar1] = Global_1839593.f_64[bVar1];
					}
					bVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_148(var uParam0)
{
	struct<13> Var0;
	int iVar13;

	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar13 = 0;
	while (iVar13 < 32)
	{
		uParam0->f_64[iVar13] = 0f;
		uParam0->f_97[iVar13] = 0;
		iVar13++;
	}
}

bool func_149(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;

	if (*uParam2 == 0)
	{
		if (Global_1835392[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][0 /*75*/] };
			Global_1839536[iParam3 /*16*/] = { Global_1835392[iParam3 /*901*/][0 /*75*/] };
			Global_1839536.f_49[iParam3] = Global_1835392[iParam3 /*901*/][0 /*75*/].f_67[Global_1835392.f_2779];
			Global_1839536.f_53[iParam3] = Global_1835392[iParam3 /*901*/][0 /*75*/].f_60[Global_1835392.f_2779];
			*uParam2++;
			return true;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1835392.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][Global_1835392.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return true;
		}
		else
		{
			if (Global_1835392.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_23(UNK_0xD803B885F5E47A62()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return true;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1835392.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return true;
			}
		}
	}
	else
	{
		iVar0 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((*uParam2 / 2)));
		if ((Global_1835392.f_2775[iParam3] + iVar0) < 12 && (Global_1835392.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return true;
			}
		}
	}
	*uParam2++;
	return false;
}

bool func_150(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_151(uParam0, bParam2, 0);
	if (UNK_0x8CD06866876216F2() && !bParam2)
	{
		if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_151(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (UNK_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = UNK_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = UNK_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = UNK_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 1;
	}
}

void func_152(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	UNK_0x5D96D8530B3D0904(&bParam2, 7);
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x3CAEA85DA607305E(bParam2);
	UNK_0x7ACC3006A87F8B39(bParam3);
	UNK_0x0EF1238B8EFD4D04();
	UNK_0x7E60D21B163E9D56();
}

bool func_153(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_187(&(Global_1835392.f_2827)))
		{
			func_151(&(Global_1835392.f_2827), 1, 0);
			return false;
		}
		else if (!func_150(&(Global_1835392.f_2827), 1000, 1))
		{
			return false;
		}
	}
	if (((!UNK_0x999A3BFD3E9B5D2C() || !UNK_0x1963B11DE70153E0()) || (!UNK_0x8BB6DE13A9F3105E() && UNK_0x9AE561F9BC3F06D8())) || Global_1835392.f_2832 != 0)
	{
		UNK_0x0674E58A79778E99(&(uParam0->f_42), 4);
		return true;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 4))
	{
		func_186(uParam0);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_42), 4);
		return false;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return true;
	}
	if (!func_184(uParam0))
	{
		return false;
	}
	if (!func_182(uParam0))
	{
		return false;
	}
	if (!func_169(uParam0))
	{
		return false;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 6))
	{
		func_100(&Global_1839723);
		func_146(uParam0, &Global_1839723);
		func_145(uParam0, &Global_1839723);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_42), 6);
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 7))
	{
		if (!func_187(&(Global_1835392.f_2830)))
		{
			func_151(&(Global_1835392.f_2830), 1, 0);
		}
		else if (func_150(&(Global_1835392.f_2830), 30000, 1))
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_42), 7);
		}
		if (func_166(&Global_1839723))
		{
		}
		else
		{
			return false;
		}
		if (func_163(&Global_1839723))
		{
		}
		else
		{
			return false;
		}
		if (func_158(&Global_1839723))
		{
			func_154(&Global_1839723);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_42), 7);
			func_154(&Global_1839723);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_154(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = func_157(Global_1835392.f_2826);
	if (Global_1838577.f_81[iVar2] != 0)
	{
		func_156(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_148(&Global_1839593);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839593 = Global_1835392.f_2826;
			Global_1839593.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (UNK_0x7F8A39872A07D2CE(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839593.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839593.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839593.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_144((uParam0[iVar0 /*100*/])->f_45))
			{
				Global_1839593.f_46 = { (uParam0[iVar0 /*100*/])->f_45 };
			}
			else
			{
				Global_1839593.f_46 = { (uParam0[iVar0 /*100*/])->f_32 };
			}
			Global_1839593.f_59 = (uParam0[iVar0 /*100*/])->f_58;
			Global_1839593.f_60 = (uParam0[iVar0 /*100*/])->f_59;
			Global_1839593.f_62 = Global_1835392.f_2708;
			Global_1839593.f_63 = Global_1835392.f_2770;
			if ((uParam0[iVar0 /*100*/])->f_74)
			{
				UNK_0x5D96D8530B3D0904(&(Global_1839593.f_61), false);
			}
			else
			{
				UNK_0x0674E58A79778E99(&(Global_1839593.f_61), false);
			}
			UNK_0x5D96D8530B3D0904(&(Global_1839593.f_61), (uParam0[iVar0 /*100*/])->f_75);
			bVar1 = false;
			while (bVar1 < Global_1839593.f_62)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_1839593.f_63, bVar1))
				{
					Global_1839593.f_97[bVar1] = (uParam0[iVar0 /*100*/])->f_67[bVar1];
				}
				else
				{
					Global_1839593.f_64[bVar1] = (uParam0[iVar0 /*100*/])->f_60[bVar1];
				}
				bVar1++;
			}
			Global_1838577.f_81[iVar2] = Global_1835392.f_2826;
			UNK_0x724501B3F806735C(&Global_1839593);
		}
		iVar0++;
	}
	Global_1838577.f_87[iVar2 /*3*/] = { func_155(UNK_0xD803B885F5E47A62()) };
}

Vector3 func_155(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

void func_156(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1)
	{
		if (UNK_0xE4F1C23C6353EC03(Global_1838577.f_81[iParam1]))
		{
			UNK_0xCA6EE3119323E45C(Global_1838577.f_81[iParam1]);
		}
		Global_1838577.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (UNK_0xE4F1C23C6353EC03(iParam0))
		{
			UNK_0xCA6EE3119323E45C(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1838577.f_81[iVar0] == iParam0)
			{
				Global_1838577.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_157(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838577.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838577.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (UNK_0xE4F1C23C6353EC03(Global_1838577.f_81[iVar0]))
		{
			iVar3 = UNK_0x4F4FEC8CCCE2C7B1(Global_1838577.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_158(var uParam0)
{
	int iVar0;
	int iVar1;

	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_162(uParam0);
			if (UNK_0x33A494591F2C1975() && !UNK_0x4DEB7B48DD0AABA4(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_144((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_161(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841022))
					{
						Global_1841022[Global_1841022.f_206 /*13*/] = { (uParam0[iVar0 /*100*/])->f_32 };
						Global_1841022.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_1841022.f_206 > 0)
			{
				(uParam0[0 /*100*/])->f_76 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_76 = 3;
			}
			break;
		case 1:
			if (func_159(&((uParam0[1 /*100*/])->f_76), &(Global_1841022.f_206), &Global_1841022, &(Global_1841022.f_157)))
			{
				(uParam0[0 /*100*/])->f_76 = 2;
			}
			break;
		case 2:
			if (Global_1841022.f_206 > 12)
			{
				Global_1841022.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1841022.f_206)
				{
					if (func_144((uParam0[iVar0 /*100*/])->f_32) && func_144(Global_1841022[iVar1 /*13*/]))
					{
						if (UNK_0x4F18738E5BDE9AC9(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841022[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_80 = { Global_1841022.f_157[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_76 = 3;
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_159(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar35;

	switch (*uParam0)
	{
		case 0:
			if (UNK_0x0742540F16CEE0F4())
			{
			}
			else
			{
				UNK_0x7BF88BC97F9C422A();
				UNK_0x6CEC2945A313AD9E(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		case 1:
			if (!UNK_0x0742540F16CEE0F4())
			{
				if (UNK_0x812FCD8C479A4733())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		case 2:
			iVar35 = 0;
			while (iVar35 < *uParam1)
			{
				if (UNK_0x794D5DBA715427A2(uParam2[iVar35 /*13*/], &uVar0))
				{
					func_160(&uVar0, uParam3[iVar35 /*4*/]);
				}
				iVar35++;
			}
			if (UNK_0x0742540F16CEE0F4())
			{
				UNK_0x47B6D760F5574870();
			}
			else
			{
				UNK_0x7BF88BC97F9C422A();
			}
			*uParam0 = 3;
			break;
		case 3:
			return true;
	}
	return false;
}

void func_160(var uParam0, char* sParam1)
{
	UNK_0xC6B7299B3E15AD8B(uParam0, 35, sParam1);
}

bool func_161(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_144(*(uParam1[iVar0 /*13*/])))
		{
			if (UNK_0x4F18738E5BDE9AC9(uParam0, uParam1[iVar0 /*13*/]))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_162(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_105(&(Global_1841022[iVar0 /*13*/]));
		StringCopy(&(Global_1841022.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!UNK_0x0742540F16CEE0F4())
		{
			UNK_0x7BF88BC97F9C422A();
		}
	}
	if (UNK_0x0742540F16CEE0F4())
	{
		UNK_0x47B6D760F5574870();
	}
	Global_1841022.f_206 = 0;
}

bool func_163(var uParam0)
{
	int iVar0;

	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return true;
	}
	else if (UNK_0xDC30EF462887322E() || UNK_0x33A494591F2C1975())
	{
		if (!func_165(uParam0))
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_164(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return false;
			}
			iVar0++;
		}
	}
	return true;
}

bool func_164(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return true;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_144(*uParam1))
			{
				if (!UNK_0x60F025D317CE2512(uParam1))
				{
					if (UNK_0xDC30EF462887322E() || UNK_0x33A494591F2C1975())
					{
						if (UNK_0x341C9B6377CAD883(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (UNK_0xA3F916BCE430ED26())
					{
						if (UNK_0x341C9B6377CAD883(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, UNK_0xD7926DA4168DF7E1(uParam1), 64);
						if (UNK_0xBA301E03A078FA59())
						{
						}
						else if (UNK_0x33A494591F2C1975())
						{
						}
						else if (UNK_0x0EFF6B4415DAF4A1())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, UNK_0x6E524813889AECF8(UNK_0xE7A1FE6C75BB88BA(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		case 1:
			if (!UNK_0x60F025D317CE2512(uParam1))
			{
				if (!UNK_0xE13B4B9D87E527E9())
				{
					if (UNK_0xD0FC7E8A7D86B46C())
					{
						StringCopy(sParam2, UNK_0xD7926DA4168DF7E1(uParam1), 64);
					}
					*uParam0 = 2;
					return true;
				}
			}
			else
			{
				StringCopy(sParam2, UNK_0x6E524813889AECF8(UNK_0xE7A1FE6C75BB88BA(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_165(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!UNK_0xDC30EF462887322E() && !UNK_0x33A494591F2C1975())
	{
		return true;
	}
	if ((uParam0[0 /*100*/])->f_78 == 2)
	{
		return true;
	}
	switch ((uParam0[0 /*100*/])->f_78)
	{
		case 0:
			Global_1835392.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1835392.f_2833[iVar1 /*16*/]), "", 64);
				func_105(&(Global_1835392.f_3026[iVar1 /*13*/]));
				if (func_144((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835392.f_3026[Global_1835392.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835392.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835392.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = UNK_0x3F4BBF0887AB451C(&(Global_1835392.f_3026), Global_1835392.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		case 1:
			iVar0 = UNK_0x1C71EF085035D439((uParam0[0 /*100*/])->f_79, &(Global_1835392.f_2833), Global_1835392.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_144((uParam0[iVar1 /*100*/])->f_32))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1835392.f_2833[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else
			{
				return false;
			}
			break;
		case 2:
			(uParam0[0 /*100*/])->f_79 = -1;
			return true;
	}
	return false;
}

bool func_166(var uParam0)
{
	int iVar0;

	if (UNK_0xDC30EF462887322E() || UNK_0x33A494591F2C1975())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_168(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835392.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
			{
				return false;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_167(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return false;
			}
			iVar0++;
		}
	}
	return true;
}

bool func_167(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;

	if (*uParam0 == 2)
	{
		return true;
	}
	else if (UNK_0xEA6BC48857E0AC4C(&uParam1))
	{
		*uParam0 = 2;
		return true;
	}
	UNK_0x4DA27762188F26CD(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_144(Var0))
			{
				if (!UNK_0x60F025D317CE2512(&Var0))
				{
					if ((UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E()) || UNK_0x33A494591F2C1975())
					{
						if (UNK_0x341C9B6377CAD883(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, UNK_0xD7926DA4168DF7E1(&Var0), 64);
						if (UNK_0xBA301E03A078FA59())
						{
						}
						else if (UNK_0x33A494591F2C1975())
						{
						}
						else if (UNK_0x0EFF6B4415DAF4A1())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, UNK_0x6E524813889AECF8(UNK_0xE7A1FE6C75BB88BA(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		case 1:
			if (!UNK_0x60F025D317CE2512(&Var0))
			{
				if (!UNK_0xE13B4B9D87E527E9())
				{
					if (UNK_0xD0FC7E8A7D86B46C())
					{
						StringCopy(sParam17, UNK_0xD7926DA4168DF7E1(&Var0), 64);
					}
					*uParam0 = 2;
					return true;
				}
			}
			else
			{
				StringCopy(sParam17, UNK_0x6E524813889AECF8(UNK_0xE7A1FE6C75BB88BA(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_168(var uParam0, bool bParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];

	if (!UNK_0xDC30EF462887322E() && !UNK_0x33A494591F2C1975())
	{
		return true;
	}
	if (*uParam0 == 2)
	{
		return true;
	}
	else if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		*uParam0 = 2;
		return true;
	}
	UNK_0x4DA27762188F26CD(bParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_144(Var1[0 /*13*/]))
			{
				if (!UNK_0x60F025D317CE2512(&(Var1[0 /*13*/])))
				{
					*uParam4 = UNK_0x3F4BBF0887AB451C(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, UNK_0x6E524813889AECF8(UNK_0xE7A1FE6C75BB88BA(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		case 1:
			iVar0 = UNK_0x1C71EF085035D439(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return false;
			}
			break;
		case 2:
			*uParam4 = -1;
			return true;
	}
	return false;
}

bool func_169(var uParam0)
{
	struct<97> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	bool bVar112;
	bool bVar113;
	bool bVar114;
	int iVar115;
	struct<13> Var116;

	Var0.f_19.f_1 = 4;
	iVar109 = -1;
	bVar113 = 2;
	Var116 = { func_23(UNK_0xD803B885F5E47A62()) };
	switch ((*uParam0)[bVar113])
	{
		case 0:
			Global_1835392.f_2775[bVar113] = -1;
			Global_1835392.f_2704[bVar113] = 0;
			Global_1835013.f_374 = -1;
			if (UNK_0x080E9D045AEE5605())
			{
				if (UNK_0xF2EC2A39FF9E838D(&Var116))
				{
					if (UNK_0xD9DA83C40D038174(&(uParam0->f_7), 35, &Var116))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[bVar113] = 1;
						return false;
					}
				}
				else
				{
					(*uParam0)[bVar113] = 3;
					return true;
				}
			}
			else
			{
				(*uParam0)[bVar113] = 3;
				return true;
			}
			break;
		case 1:
			uParam0->f_44.f_1 = 3;
			Var98 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_180(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_181(), 0, 0, 0))
			{
				func_179(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_181())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								UNK_0xBC584396476EE48A(iVar111, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_143(&Var0, &Var116) || func_143(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar109 < 0)
								{
									if (UNK_0xEAE0D21A50E6C7F4(Global_1835013.f_142.f_2, false))
									{
										if (Global_1835013.f_211.f_36[0] >= UNK_0x14B893B11D05C490(iVar111, false))
										{
											iVar109 = iVar111;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= UNK_0x1969161BAC0006D6(iVar111, false))
									{
										iVar109 = iVar111;
									}
								}
								func_178(&Var0);
								iVar111++;
							}
							if (iVar109 < 0)
							{
								iVar109 = Var98.f_3;
							}
						}
						iVar111 = 0;
						UNK_0xBC584396476EE48A(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835392.f_2704[bVar113] < 11)
							{
								if (func_181() && iVar109 == 0)
								{
									func_177(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Var0.f_96);
									Global_1835392.f_2775[bVar113] = 0;
									Global_1835392.f_2704[bVar113]++;
								}
								if (func_181() && (func_143(&Var0, &Var116) || func_143(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_143(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_1835392.f_2775[bVar113] = 0;
									}
									MemCopy(&(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_32 = { Var0 };
									Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_59 = Var0.f_96;
									if (func_176(uParam0->f_44))
									{
										iVar108 = UNK_0x14B893B11D05C490(0, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_192(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_67[iVar107] = UNK_0x14B893B11D05C490(0, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_60[iVar107] = UNK_0x1969161BAC0006D6(0, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									Global_1835392.f_2704[bVar113]++;
								}
								bVar112 = true;
							}
						}
						if (!bVar112)
						{
							Global_1835392.f_2704[bVar113]++;
						}
						if (!func_181())
						{
							iVar109 = Var98.f_5;
						}
						if (iVar109 > 6)
						{
							iVar110 = (iVar109 - 6);
						}
						else if (bVar112)
						{
							iVar110 = 1;
						}
						else
						{
							iVar110 = 0;
						}
						iVar111 = iVar110;
						func_178(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							UNK_0xBC584396476EE48A(iVar111, &Var0);
							if (Global_1835392.f_2704[bVar113] < 11 && Var0.f_96 > 1)
							{
								if (func_181() && iVar109 == iVar111)
								{
									if (!func_143(&(Global_1835392[bVar113 /*901*/][0 /*75*/].f_32), &Var116))
									{
										func_177(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Var0.f_96);
										Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
										Global_1835392.f_2704[bVar113]++;
									}
								}
								if (func_181() && (func_143(&Var0, &Var116) || func_143(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[bVar113] < 11)
								{
									if (func_144(Var0) && !func_143(&Var0, &(Global_1835392[bVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_143(&Var0, &Var116))
										{
											if (Global_1835392.f_2775[bVar113] < 0)
											{
												Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
											}
										}
										MemCopy(&(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), {Var0.f_13}, 16);
										Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_32 = { Var0 };
										Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_59 = Var0.f_96;
										Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_74 = 1;
										if (func_176(uParam0->f_44))
										{
											iVar108 = UNK_0x14B893B11D05C490(iVar111, Global_1835392.f_2709);
											if (iVar108 == 1)
											{
												Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 0;
											}
										}
										if (func_192(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										iVar106 = 0;
										while (iVar106 < Global_1835392.f_2708)
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
											{
												Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_67[iVar106] = UNK_0x14B893B11D05C490(iVar111, Global_1835392.f_2710[iVar106]);
											}
											else
											{
												Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_60[iVar106] = UNK_0x1969161BAC0006D6(iVar111, Global_1835392.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835392.f_2704[bVar113]++;
									}
								}
							}
							func_178(&Var0);
							iVar111++;
						}
						UNK_0xC4492EA0CF4852F9();
						func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_1835392.f_2775[bVar113] == -1 && func_181())
							{
								if (Global_1835392.f_2704[bVar113] >= 1)
								{
									func_177(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Global_1835392[bVar113 /*901*/][(Global_1835392.f_2704[bVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_177(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
								}
								Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
								Global_1835392.f_2704[bVar113]++;
							}
							(*uParam0)[bVar113] = 3;
						}
						else
						{
							(*uParam0)[bVar113] = 2;
						}
					}
					else
					{
						if (!bVar112)
						{
							Global_1835392.f_2704[bVar113]++;
						}
						UNK_0xC4492EA0CF4852F9();
						func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[bVar113] = -1;
						(*uParam0)[bVar113] = 2;
					}
				}
				else
				{
					func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2775[bVar113] = -1;
					(*uParam0)[bVar113] = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2832), bVar113);
				}
			}
			break;
		case 2:
			if (Global_1835392.f_2775[bVar113] == -1)
			{
				iVar115 = 11;
			}
			else
			{
				iVar115 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var98 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_171(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_179(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar106 = 0;
						while (iVar106 < Var98.f_3)
						{
							UNK_0xBC584396476EE48A(iVar106, &Var0);
							bVar114 = false;
							if (Global_1835392[bVar113 /*901*/][0 /*75*/].f_59 > 1 || Global_1835392[bVar113 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar114 = true;
							}
							if (Global_1835392.f_2704[bVar113] < 11 || bVar114)
							{
								if (func_181() && (func_143(&Var0, &Var116) || func_143(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_1835392[bVar113 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835392[bVar113 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835392[bVar113 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_176(uParam0->f_44))
									{
										iVar108 = UNK_0x14B893B11D05C490(0, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[bVar113 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[bVar113 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_192(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[bVar113 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[bVar113 /*901*/][0 /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[bVar113 /*901*/][0 /*75*/].f_67[iVar107] = UNK_0x14B893B11D05C490(0, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[bVar113 /*901*/][0 /*75*/].f_60[iVar107] = UNK_0x1969161BAC0006D6(0, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (Global_1835392.f_2704[bVar113] == 0)
									{
										if (bVar114)
										{
										}
										else
										{
											Global_1835392.f_2704[bVar113]++;
										}
									}
								}
								else if (Global_1835392.f_2704[bVar113] < 11)
								{
									MemCopy(&(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_32 = { Var0 };
									if (func_176(uParam0->f_44))
									{
										iVar108 = UNK_0x14B893B11D05C490(iVar106, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_192(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_59 = Var0.f_96;
									Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_67[iVar107] = UNK_0x14B893B11D05C490(iVar106, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_60[iVar107] = UNK_0x1969161BAC0006D6(iVar106, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (iVar106 != 0)
									{
										Global_1835392.f_2704[bVar113]++;
									}
								}
							}
							func_178(&Var0);
							iVar106++;
						}
					}
					UNK_0xC4492EA0CF4852F9();
					func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[bVar113] = 3;
				}
				else
				{
					UNK_0xC4492EA0CF4852F9();
					func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2832), bVar113);
					Global_1835392.f_2704[bVar113] = 0;
					(*uParam0)[bVar113] = 3;
				}
				if (Global_1835392.f_2775[bVar113] == -1 && func_181())
				{
					if (Global_1835392.f_2704[bVar113] >= 1)
					{
						func_177(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Global_1835392[bVar113 /*901*/][(Global_1835392.f_2704[bVar113] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_177(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
					}
					Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
					Global_1835392.f_2704[bVar113]++;
				}
			}
			break;
		case 3:
			func_170(bVar113, Global_1835013.f_374);
			(*uParam0)[bVar113] = 4;
			break;
		case 4:
			return true;
	}
	return false;
}

void func_170(bool bParam0, int iParam1)
{
	int iVar0;

	if ((func_181() && Global_1835392.f_2704[bParam0] > Global_1835392.f_2775[bParam0]) && Global_1835392.f_2775[bParam0] >= 0)
	{
		if (iParam1 != Global_1835392[bParam0 /*901*/][Global_1835392.f_2775[bParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_1835392.f_2704[bParam0])
			{
				if (iVar0 != Global_1835392.f_2775[bParam0])
				{
					if (Global_1835392[bParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_1835392[bParam0 /*901*/][Global_1835392.f_2775[bParam0] /*75*/].f_59)
					{
						if (Global_1835392[bParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_1835392[bParam0 /*901*/][iVar0 /*75*/].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_181())
		{
		}
		if (Global_1835392.f_2704[bParam0] <= Global_1835392.f_2775[bParam0])
		{
		}
		if (Global_1835392.f_2775[bParam0] < 0)
		{
		}
	}
}

bool func_171(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_174() && !func_173())
			{
				func_172(*uParam2);
				if (UNK_0xDF496D8EA2986832(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		case 1:
			if (!UNK_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		case 2:
			if (UNK_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_172(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	Global_1835008 = 1;
	func_203(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0;
	Global_1835008.f_4 = Param0.f_1;
}

bool func_173()
{
	if (UNK_0x798A3F1296751F46() && !func_195())
	{
		return true;
	}
	return false;
}

bool func_174()
{
	if (UNK_0xA9C9C7E04514E320() || Global_1835008)
	{
		func_175();
		return true;
	}
	return false;
}

void func_175()
{
	if (func_150(&(Global_1835008.f_1), 120000, 1))
	{
		UNK_0x8EFB4731C3DCDA55(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_97(&(Global_1835008.f_1));
	}
}

bool func_176(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return true;
	}
	return false;
}

void func_177(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (func_192(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62()), 64);
		sParam1->f_32 = { func_23(UNK_0xD803B885F5E47A62()) };
	}
	sParam1->f_59 = iParam2;
	if (func_176(uParam0->f_44))
	{
		iVar0 = Global_1835013.f_211.f_36[Global_1835392.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1835392.f_2708)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1835013.f_142.f_2, Global_1835392.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_1835013.f_211.f_36[Global_1835392.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_1835013.f_211.f_3[Global_1835392.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_178(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

void func_179(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

bool func_180(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1835013.f_211.f_36[0];
	iVar1 = Global_1835013.f_211.f_3[0];
	if (bParam6)
	{
		iVar0 = iParam7;
		iVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_174() && !func_173())
			{
				func_172(*uParam2);
				if (bParam5)
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_1835013.f_142.f_2, false))
					{
						if (UNK_0xBED23E8D17964CE1(uParam2, iVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (UNK_0xDA5E71D84C8C1F25(uParam2, iVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (UNK_0x425FE0104C115EE8(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		case 1:
			if (!UNK_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		case 2:
			if (UNK_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_181()
{
	if (Global_1835388 && Global_1835389)
	{
		return true;
	}
	return false;
}

bool func_182(var uParam0)
{
	struct<20> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	bool bVar112;
	bool bVar113;
	struct<13> Var114;

	Var0.f_19.f_1 = 4;
	iVar108 = -1;
	bVar113 = true;
	Var114 = { func_23(UNK_0xD803B885F5E47A62()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = UNK_0xB552DC43762F9C85();
			Global_1835392.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835392.f_2704[bVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_181())
				{
					bVar112 = false;
				}
				else
				{
					bVar112 = true;
				}
				if (func_183(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar112, 0, 100))
				{
					func_179(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var98))
					{
						if (func_181())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									UNK_0xBC584396476EE48A(iVar110, &Var0);
									if (func_192(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_143(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (UNK_0xEAE0D21A50E6C7F4(Global_1835013.f_142.f_2, false))
									{
										if (Global_1835013.f_211.f_36[0] >= UNK_0x14B893B11D05C490(iVar110, false))
										{
											iVar108 = iVar110;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= UNK_0x1969161BAC0006D6(iVar110, false))
									{
										iVar108 = iVar110;
									}
									func_178(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_181() && iVar108 == 0)
						{
							if (Global_1835392.f_2704[bVar113] < 11)
							{
								func_177(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
								Global_1835392.f_2775[bVar113] = 0;
								Global_1835392.f_2704[bVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							UNK_0xBC584396476EE48A(0, &Var0);
							if (func_181() && (func_143(&Var0, &Var114) || func_143(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_144(Var0) && Global_1835392.f_2704[bVar113] < 11)
							{
								if (func_143(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_1835392.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), {Var0.f_13}, 16);
								Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_32 = { Var0 };
								Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_59 = 1;
								if (func_176(uParam0->f_44))
								{
									iVar111 = UNK_0x14B893B11D05C490(0, Global_1835392.f_2709);
									if (iVar111 == 1)
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 0;
									}
								}
								if (func_192(uParam0->f_44))
								{
									MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_74 = 1;
								iVar106 = 0;
								while (iVar106 < Global_1835392.f_2708)
								{
									if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_67[iVar106] = UNK_0x14B893B11D05C490(0, Global_1835392.f_2710[iVar106]);
									}
									else
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_60[iVar106] = UNK_0x1969161BAC0006D6(0, Global_1835392.f_2710[iVar106]);
									}
									iVar106++;
								}
								Global_1835392.f_2704[1]++;
							}
							else
							{
								func_178(&Var0);
								UNK_0xC4492EA0CF4852F9();
								func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835392.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835392.f_2775[bVar113] == -1 && func_181())
								{
									if (Global_1835392.f_2704[bVar113] >= 1)
									{
										func_177(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Global_1835392[bVar113 /*901*/][(Global_1835392.f_2704[bVar113] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_177(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
									}
									Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
									Global_1835392.f_2704[bVar113]++;
								}
								return false;
							}
							func_178(&Var0);
						}
						else
						{
							Global_1835392.f_2704[1] = 0;
							func_178(&Var0);
							UNK_0xC4492EA0CF4852F9();
							func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835392.f_2775[bVar113] == -1 && func_181())
							{
								if (Global_1835392.f_2704[bVar113] >= 1)
								{
									func_177(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Global_1835392[bVar113 /*901*/][(Global_1835392.f_2704[bVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_177(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
								}
								Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
								Global_1835392.f_2704[bVar113]++;
							}
							(*uParam0)[1] = 1;
							return false;
						}
						if (!func_181())
						{
							iVar108 = Var98.f_5;
						}
						if (iVar108 > 6)
						{
							iVar109 = (iVar108 - 6);
						}
						else
						{
							iVar109 = 1;
						}
						iVar110 = iVar109;
						iVar110 = iVar109;
						while (iVar110 <= (Var98.f_3 - 1))
						{
							UNK_0xBC584396476EE48A(iVar110, &Var0);
							if (Global_1835392.f_2704[bVar113] < 11 && Var0.f_96 > 1)
							{
								if (func_181() && iVar108 == iVar110)
								{
									if (!func_143(&(Global_1835392[bVar113 /*901*/][0 /*75*/].f_32), &Var114))
									{
										func_177(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Var0.f_96);
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
										Global_1835392.f_2704[bVar113]++;
									}
								}
								if (func_181() && (func_143(&Var0, &Var114) || func_143(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[1] < 12)
								{
									if (func_144(Var0) && !func_143(&Var0, &(Global_1835392[bVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_143(&Var0, &Var114))
										{
											if (Global_1835392.f_2775[1] < 0)
											{
												Global_1835392.f_2775[1] = Global_1835392.f_2704[1];
											}
										}
										MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_32 = { Var0 };
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_74 = 1;
										if (func_176(uParam0->f_44))
										{
											iVar111 = UNK_0x14B893B11D05C490(iVar110, Global_1835392.f_2709);
											if (iVar111 == 1)
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_192(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										while (iVar106 < Global_1835392.f_2708)
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_67[iVar106] = UNK_0x14B893B11D05C490(iVar110, Global_1835392.f_2710[iVar106]);
											}
											else
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_60[iVar106] = UNK_0x1969161BAC0006D6(iVar110, Global_1835392.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835392.f_2704[1]++;
									}
								}
							}
							func_178(&Var0);
							iVar110++;
						}
						UNK_0xC4492EA0CF4852F9();
						func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835392.f_2775[bVar113] == -1 && func_181())
						{
							if (Global_1835392.f_2704[bVar113] >= 1)
							{
								func_177(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Global_1835392[bVar113 /*901*/][(Global_1835392.f_2704[bVar113] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_177(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
							}
							Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
							Global_1835392.f_2704[bVar113]++;
						}
						return false;
					}
					else
					{
						func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2832), true);
						return false;
					}
				}
			}
			else
			{
				func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835392.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return false;
			}
			break;
		case 1:
			func_170(bVar113, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_183(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_174() && !func_173())
			{
				func_172(*uParam2);
				if (STATS::LEADERBOARDS2_READ_FRIENDS_BY_ROW(uParam2, uParam3, uParam4, bParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		case 1:
			if (!UNK_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		case 2:
			if (UNK_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_184(var uParam0)
{
	struct<13> Var0;
	struct<97> Var13;
	struct<6> Var111;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	bool bVar125;
	bool bVar126;
	bool bVar127;
	int iVar128;

	Var13.f_19.f_1 = 4;
	iVar122 = -1;
	bVar126 = false;
	Var0 = { func_23(UNK_0xD803B885F5E47A62()) };
	switch ((*uParam0)[bVar126])
	{
		case 0:
			Global_1835392.f_2775[bVar126] = -1;
			Global_1835392.f_2704[bVar126] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_185(uParam0->f_44))
			{
				if (!Global_1835389)
				{
					Global_1835389 = 1;
				}
			}
			else if (Global_1835389)
			{
				Global_1835389 = 0;
			}
			if (!Global_1835389)
			{
			}
			if (func_180(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_181(), 0, 0, 0))
			{
				func_179(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_181())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								UNK_0xBC584396476EE48A(iVar124, &Var13);
								if (Global_1835013.f_374 < 0)
								{
									if (func_143(&Var13, &Var0) || func_143(&Var13, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var13.f_96;
									}
								}
								if (iVar122 < 0)
								{
									if (UNK_0xEAE0D21A50E6C7F4(Global_1835013.f_142.f_2, false))
									{
										if (Global_1835013.f_211.f_36[0] >= UNK_0x14B893B11D05C490(iVar124, false))
										{
											iVar122 = iVar124;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= UNK_0x1969161BAC0006D6(iVar124, false))
									{
										iVar122 = iVar124;
									}
								}
								func_178(&Var13);
								iVar124++;
							}
							if (iVar122 < 0)
							{
								iVar122 = Var111.f_3;
							}
						}
						iVar124 = 0;
						UNK_0xBC584396476EE48A(0, &Var13);
						if (Var13.f_96 <= 1)
						{
							if (Global_1835392.f_2704[bVar126] < 11)
							{
								if (func_181() && iVar122 == 0)
								{
									func_177(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), Var13.f_96);
									Global_1835392.f_2775[bVar126] = 0;
									Global_1835392.f_2704[bVar126]++;
								}
								if (func_181() && (func_143(&Var13, &Var0) || func_143(&Var13, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_143(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_1835392.f_2775[bVar126] = 0;
									}
									MemCopy(&(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), {Var13.f_13}, 16);
									Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_32 = { Var13 };
									Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_59 = Var13.f_96;
									if (func_176(uParam0->f_44))
									{
										iVar121 = UNK_0x14B893B11D05C490(0, Global_1835392.f_2709);
										if (iVar121 == 1)
										{
											Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_58 = 0;
										}
									}
									if (func_192(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_74 = 1;
									iVar119 = 0;
									while (iVar119 < Global_1835392.f_2708)
									{
										if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar119]))
										{
											Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_67[iVar119] = UNK_0x14B893B11D05C490(0, Global_1835392.f_2710[iVar119]);
										}
										else
										{
											Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_60[iVar119] = UNK_0x1969161BAC0006D6(0, Global_1835392.f_2710[iVar119]);
										}
										iVar119++;
									}
									Global_1835392.f_2704[bVar126]++;
								}
								bVar125 = true;
							}
						}
						if (!bVar125)
						{
							Global_1835392.f_2704[bVar126]++;
						}
						if (!func_181())
						{
							iVar122 = Var111.f_5;
						}
						if (iVar122 > 6)
						{
							iVar123 = (iVar122 - 6);
						}
						else if (bVar125)
						{
							iVar123 = 1;
						}
						else
						{
							iVar123 = 0;
						}
						iVar124 = iVar123;
						func_178(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							UNK_0xBC584396476EE48A(iVar124, &Var13);
							if (Global_1835392.f_2704[bVar126] < 11 && Var13.f_96 > 1)
							{
								if (func_181() && iVar122 == iVar124)
								{
									if (!func_143(&(Global_1835392[bVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										func_177(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), Var13.f_96);
										Global_1835392.f_2775[bVar126] = Global_1835392.f_2704[bVar126];
										Global_1835392.f_2704[bVar126]++;
									}
								}
								if (func_181() && (func_143(&Var13, &Var0) || func_143(&Var13, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[bVar126] < 11)
								{
									if (func_144(Var13) && !func_143(&(Global_1835392[bVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										if (func_143(&Var13, &Var0))
										{
											if (Global_1835392.f_2775[bVar126] < 0)
											{
												Global_1835392.f_2775[bVar126] = Global_1835392.f_2704[bVar126];
											}
										}
										MemCopy(&(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), {Var13.f_13}, 16);
										Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_32 = { Var13 };
										Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_74 = 1;
										if (func_176(uParam0->f_44))
										{
											iVar121 = UNK_0x14B893B11D05C490(iVar124, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_192(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar119 = 0;
										iVar119 = 0;
										while (iVar119 < Global_1835392.f_2708)
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar119]))
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_67[iVar119] = UNK_0x14B893B11D05C490(iVar124, Global_1835392.f_2710[iVar119]);
											}
											else
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_60[iVar119] = UNK_0x1969161BAC0006D6(iVar124, Global_1835392.f_2710[iVar119]);
											}
											iVar119++;
										}
										Global_1835392.f_2704[bVar126]++;
									}
								}
							}
							func_178(&Var13);
							iVar124++;
						}
						UNK_0xC4492EA0CF4852F9();
						func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_1835392.f_2775[bVar126] == -1 && func_181())
							{
								if (Global_1835392.f_2704[bVar126] >= 1)
								{
									func_177(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), Global_1835392[bVar126 /*901*/][(Global_1835392.f_2704[bVar126] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_177(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), 1);
								}
								Global_1835392.f_2775[bVar126] = Global_1835392.f_2704[bVar126];
								Global_1835392.f_2704[bVar126]++;
							}
							(*uParam0)[bVar126] = 2;
						}
						else
						{
							(*uParam0)[bVar126] = 1;
						}
					}
					else
					{
						if (!bVar125)
						{
							Global_1835392.f_2704[bVar126]++;
						}
						UNK_0xC4492EA0CF4852F9();
						func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[bVar126] = -1;
						(*uParam0)[bVar126] = 1;
					}
				}
				else
				{
					func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2775[bVar126] = -1;
					(*uParam0)[bVar126] = 1;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2832), bVar126);
				}
			}
			break;
		case 1:
			if (Global_1835392.f_2775[bVar126] == -1)
			{
				iVar128 = 11;
			}
			else
			{
				iVar128 = 1;
			}
			if (func_171(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_179(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							UNK_0xBC584396476EE48A(iVar119, &Var13);
							if (func_181() && (func_143(&Var13, &Var0) || func_143(&Var13, &(Global_1835013.f_361))))
							{
							}
							else
							{
								bVar127 = false;
								if (Global_1835392[bVar126 /*901*/][0 /*75*/].f_59 > 1 || Global_1835392[bVar126 /*901*/][0 /*75*/].f_59 <= 0)
								{
									bVar127 = true;
								}
								if (Global_1835392.f_2704[bVar126] < 11 || bVar127)
								{
									if (iVar119 == 0 || bVar127)
									{
										MemCopy(&(Global_1835392[bVar126 /*901*/][0 /*75*/]), {Var13.f_13}, 16);
										Global_1835392[bVar126 /*901*/][0 /*75*/].f_32 = { Var13 };
										Global_1835392[bVar126 /*901*/][0 /*75*/].f_59 = Var13.f_96;
										if (func_176(uParam0->f_44))
										{
											iVar121 = UNK_0x14B893B11D05C490(0, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[bVar126 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[bVar126 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_192(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[bVar126 /*901*/][0 /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835392[bVar126 /*901*/][0 /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835392.f_2708)
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar120]))
											{
												Global_1835392[bVar126 /*901*/][iVar119 /*75*/].f_67[iVar120] = UNK_0x14B893B11D05C490(iVar119, Global_1835392.f_2710[iVar120]);
											}
											else
											{
												Global_1835392[bVar126 /*901*/][iVar119 /*75*/].f_60[iVar120] = UNK_0x1969161BAC0006D6(iVar119, Global_1835392.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (Global_1835392.f_2704[bVar126] == 0)
										{
											if (bVar127)
											{
											}
											else
											{
												Global_1835392.f_2704[bVar126]++;
											}
										}
										else if (Global_1835392.f_2704[bVar126] == 1 && Global_1835392.f_2775[bVar126] == -1)
										{
											Global_1835392.f_2704[bVar126]++;
										}
									}
									else if (Global_1835392.f_2704[bVar126] < 11)
									{
										MemCopy(&(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), {Var13.f_13}, 16);
										Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_32 = { Var13 };
										if (func_176(uParam0->f_44))
										{
											iVar121 = UNK_0x14B893B11D05C490(iVar119, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_192(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835392.f_2708)
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar120]))
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_67[iVar120] = UNK_0x14B893B11D05C490(iVar119, Global_1835392.f_2710[iVar120]);
											}
											else
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_60[iVar120] = UNK_0x1969161BAC0006D6(iVar119, Global_1835392.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (iVar119 != 0)
										{
											Global_1835392.f_2704[bVar126]++;
										}
									}
								}
							}
							func_178(&Var13);
							iVar119++;
						}
					}
					UNK_0xC4492EA0CF4852F9();
					func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[bVar126] = 2;
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2832), bVar126);
					func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2704[bVar126] = 0;
					(*uParam0)[bVar126] = 2;
					Global_1835392.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835392.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835392.f_2775[bVar126] == -1 && func_181())
			{
				if (Global_1835392.f_2704[bVar126] >= 1)
				{
					func_177(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), Global_1835392[bVar126 /*901*/][(Global_1835392.f_2704[bVar126] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_177(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), 1);
				}
				Global_1835392.f_2775[bVar126] = Global_1835392.f_2704[bVar126];
				Global_1835392.f_2704[bVar126]++;
			}
			break;
		case 2:
			func_170(bVar126, Global_1835013.f_374);
			(*uParam0)[bVar126] = 3;
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_185(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	int iVar0;

	if (Global_1835388)
	{
		if (Global_1835013.f_5 != 0)
		{
			if (Global_1835013.f_5 == Param0)
			{
				if (Global_1835013.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!UNK_0x7F8A39872A07D2CE(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !UNK_0x7F8A39872A07D2CE(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return false;
						}
						iVar0++;
					}
					return true;
				}
			}
		}
	}
	return false;
}

void func_186(var uParam0)
{
	int iVar0;

	if (UNK_0xE4F1C23C6353EC03(Global_1835392.f_2826))
	{
		iVar0 = UNK_0x4F4FEC8CCCE2C7B1(Global_1835392.f_2826);
		if (iVar0 < 300000)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_42), 5);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(uParam0->f_42), 5);
			func_156(Global_1835392.f_2826, -1);
		}
	}
}

bool func_187(var uParam0)
{
	return uParam0->f_1;
}

void func_188(int iParam0)
{
	if (UNK_0x83D8570832F172A7(iParam0))
	{
		UNK_0x6567AE843FADBA94(iParam0, 255, 255, 255, false, 0);
	}
}

void func_189(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<2> Var1;
	struct<16> Var36;
	bool bVar52;
	struct<13> Var53;
	bool bVar66;
	struct<13> Var67;
	bool bVar80;

	bVar0 = "";
	if (UNK_0xEAE0D21A50E6C7F4(bParam2, 4))
	{
		bVar0 = "SCLB_GLOBAL";
	}
	else if (UNK_0xEAE0D21A50E6C7F4(bParam2, 5))
	{
		*bParam1++;
		bVar0 = "SCLB_FRIENDS";
	}
	else if (UNK_0xEAE0D21A50E6C7F4(bParam2, 6))
	{
		*bParam1++;
		if (UNK_0x58424C49F8924842() && UNK_0x080E9D045AEE5605())
		{
			if (UNK_0x33A494591F2C1975() && !UNK_0x4DEB7B48DD0AABA4(0))
			{
				bVar0 = "SCLB_CREW";
			}
			else
			{
				Var53 = { func_23(UNK_0xD803B885F5E47A62()) };
				if (UNK_0xF2EC2A39FF9E838D(&Var53))
				{
					UNK_0xD9DA83C40D038174(&Var1, 35, &Var53);
					if (!UNK_0xEA6BC48857E0AC4C(&(Var1.f_1)))
					{
						bVar0 = "STRING";
						Var36 = { Var1.f_1 };
						bVar52 = true;
					}
					else
					{
						bVar0 = "SCLB_CREW";
					}
				}
				else
				{
					bVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			bVar0 = "SCLB_CREW";
		}
	}
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	UNK_0x3CAEA85DA607305E(*bParam1);
	UNK_0x3CAEA85DA607305E(bParam2);
	if (bVar52)
	{
		UNK_0x7ACC3006A87F8B39(bVar0);
		UNK_0x0D45A7AB73600CFA(&Var36);
		UNK_0x779B34565F4D71B1();
	}
	else
	{
		UNK_0x7ACC3006A87F8B39(bVar0);
		UNK_0x779B34565F4D71B1();
	}
	UNK_0x7E60D21B163E9D56();
	*bParam1++;
	if (bParam4)
	{
		bVar66 = false;
		UNK_0x5D96D8530B3D0904(&bVar66, 7);
		UNK_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
		UNK_0x3CAEA85DA607305E(*bParam1);
		UNK_0x3CAEA85DA607305E(bVar66);
		if (!UNK_0x58424C49F8924842())
		{
			bVar0 = "SCLB_NOT_ONL";
		}
		else if (!UNK_0x999A3BFD3E9B5D2C())
		{
			bVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1835392.f_2832 != 0)
		{
			bVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			bVar0 = "HUD_PERM";
		}
		UNK_0x7ACC3006A87F8B39(bVar0);
		UNK_0x0EF1238B8EFD4D04();
		UNK_0x7E60D21B163E9D56();
		*bParam1++;
	}
	else if (bParam3)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam2, 4))
		{
			bVar0 = "SCLB_NO_GLOBAL";
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bParam2, 5))
		{
			if (UNK_0xB552DC43762F9C85() > 0)
			{
				bVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				bVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bParam2, 6))
		{
			if (UNK_0xC2F420D189FDB329())
			{
				if (UNK_0xB0D6327A81292879())
				{
					if (UNK_0x58424C49F8924842() && UNK_0x080E9D045AEE5605())
					{
						if (UNK_0x33A494591F2C1975() && !UNK_0x4DEB7B48DD0AABA4(0))
						{
							bVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var67 = { func_23(UNK_0xD803B885F5E47A62()) };
							if (UNK_0xF2EC2A39FF9E838D(&Var67))
							{
								UNK_0xD9DA83C40D038174(&Var1, 35, &Var67);
								if (!UNK_0xEA6BC48857E0AC4C(&(Var1.f_1)))
								{
									bVar0 = "SCLB_NO_CREWb";
									Var36 = { Var1.f_1 };
									bVar52 = true;
								}
								else
								{
									bVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								bVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						bVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					bVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				bVar0 = "SCLB_NO_CREWd";
			}
		}
		bVar80 = false;
		UNK_0x5D96D8530B3D0904(&bVar80, 7);
		UNK_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
		UNK_0x3CAEA85DA607305E(*bParam1);
		UNK_0x3CAEA85DA607305E(bVar80);
		if (bVar52)
		{
			UNK_0x7ACC3006A87F8B39(bVar0);
			UNK_0x0D45A7AB73600CFA(&Var36);
			UNK_0x0EF1238B8EFD4D04();
		}
		else
		{
			UNK_0x7ACC3006A87F8B39(bVar0);
			UNK_0x0EF1238B8EFD4D04();
		}
		UNK_0x7E60D21B163E9D56();
		*bParam1++;
	}
}

void func_190(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;

	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_TITLE");
	UNK_0x7ACC3006A87F8B39(bParam1);
	UNK_0x779B34565F4D71B1();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		UNK_0x7ACC3006A87F8B39(uParam2[iVar0 /*6*/]);
		UNK_0x779B34565F4D71B1();
		iVar0++;
	}
	UNK_0x7E60D21B163E9D56();
}

void func_191(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_MULTIPLAYER_TITLE");
	UNK_0x7ACC3006A87F8B39(bParam1);
	if (!UNK_0xEA6BC48857E0AC4C(bParam2))
	{
		UNK_0x6B012227B3921E18(bParam2);
	}
	if (bParam5 == -1)
	{
		if (bParam4)
		{
			if (!UNK_0xEA6BC48857E0AC4C(bParam3))
			{
				UNK_0x0D45A7AB73600CFA(bParam3);
			}
		}
		else if (!UNK_0xEA6BC48857E0AC4C(bParam3))
		{
			UNK_0x6B012227B3921E18(bParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!UNK_0xEA6BC48857E0AC4C(bParam3))
			{
				UNK_0x0D45A7AB73600CFA(bParam3);
			}
		}
		else if (!UNK_0xEA6BC48857E0AC4C(bParam3))
		{
			UNK_0x6B012227B3921E18(bParam3);
		}
		UNK_0x6D99DF8263D35CE5(bParam5);
	}
	UNK_0x779B34565F4D71B1();
	UNK_0x7E60D21B163E9D56();
}

bool func_192(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return true;
	}
	return false;
}

void func_193(int iParam0, bool bParam1)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_DISPLAY_TYPE");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x7E60D21B163E9D56();
}

int func_194()
{
	return UNK_0xB01F55A0FD1CFD49("SC_LEADERBOARD");
}

int func_195()
{
	return func_196(UNK_0xD803B885F5E47A62());
}

int func_196(int iParam0)
{
	switch (func_197(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 41:
		case 36:
		case 39:
		case 42:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_197(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_196;
}

void func_198(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_199(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_200(bool bParam0)
{
	if (bParam0)
	{
		func_202();
	}
	func_201(4, -1);
	func_201(6, -1);
	func_201(7, -1);
	func_201(3, -1);
	func_201(1, -1);
	func_201(2, -1);
	func_201(11, -1);
	func_201(13, -1);
	func_201(14, -1);
	func_201(16, -1);
}

void func_201(bool bParam0, int iParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_1377170.f_1047), bParam0);
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1377170.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_202()
{
	Global_2537071.f_4532 = 0;
}

void func_203(var uParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = UNK_0x2B6E0A53779D29EA();
		}
		else
		{
			*uParam0 = UNK_0x6794171A1021C2D8();
		}
	}
	else
	{
		*uParam0 = UNK_0x1C0640BA9A7327B3();
	}
	uParam0->f_1 = 1;
}

int func_204(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 2;
	if (Global_1840924.f_2 + 5 < UNK_0xF4CCC8CB6DE7F1AE() && Global_1840924.f_2 > 0)
	{
		func_97(&Global_1840924);
		func_97(&(Global_1840924.f_49));
		*bParam0 = 0;
		Global_1840924.f_2 = 0;
		func_212(0);
	}
	Global_1840924.f_2 = UNK_0xF4CCC8CB6DE7F1AE();
	iVar1 = -1;
	if (UNK_0x33A494591F2C1975())
	{
		if (UNK_0x98DF743F0BF6732B() == 0)
		{
			iVar1 = UNK_0xFBB4B649DD3EA6F0();
		}
	}
	if ((UNK_0x33A494591F2C1975() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_210() && UNK_0x58424C49F8924842()))
	{
		if (UNK_0xACED3FBF20B322FA())
		{
			func_207(&(Global_1840924.f_3), func_209(&(Global_1840924.f_3)));
			if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 4))
			{
				UNK_0x5D96D8530B3D0904(bParam0, 4);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_205(&(Global_1840924.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, false, -1, 0, false, true, 0);
			}
			else if (iVar1 == 2)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, false, -1, 0, false, true, 0);
			}
			else if (iVar1 == 1)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, false, -1, 0, false, true, 0);
			}
			else if (iVar1 == 5)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, false, true, 0);
			}
			else if (!func_210())
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, false, -1, 0, false, true, 0);
			}
			if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, false))
			{
				if (!UNK_0x06F8112AA79C53D9(2, 201))
				{
					UNK_0x5D96D8530B3D0904(bParam0, false);
				}
			}
			else if (UNK_0xB9132A06AE472728(2, 201))
			{
				func_97(&(Global_1840924.f_49));
				func_97(&Global_1840924);
				*bParam0 = 0;
				Global_1840924.f_2 = 0;
				func_212(0);
				return 1;
			}
		}
	}
	else
	{
		func_207(&(Global_1840924.f_3), func_209(&(Global_1840924.f_3)));
		if ((func_187(&(Global_1840924.f_49)) && !func_150(&(Global_1840924.f_49), 2000, 1)) && !UNK_0x58424C49F8924842())
		{
			UNK_0x5D96D8530B3D0904(bParam0, 3);
			StringCopy(&(Global_1840924.f_3.f_1), "", 64);
			func_205(&(Global_1840924.f_3), 0);
		}
		else if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 3))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, true))
			{
				UNK_0xB0A3CB46BE5B746A(0);
				UNK_0x5D96D8530B3D0904(bParam0, true);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_205(&(Global_1840924.f_3), 0);
			}
		}
		if (func_187(&Global_1840924))
		{
			if (!func_150(&Global_1840924, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!UNK_0x58424C49F8924842())
				{
					if (UNK_0x1E517F9E1F09160C())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, false, -1, 0, false, true, 0);
					}
					else
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, false, true, 0);
					}
					if (!UNK_0x1A72D8C9F025E5E3())
					{
						if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, false))
						{
							if (!UNK_0x06F8112AA79C53D9(2, 201))
							{
								UNK_0x5D96D8530B3D0904(bParam0, false);
							}
						}
						else if (UNK_0xB9132A06AE472728(2, 201))
						{
							func_97(&Global_1840924);
							*bParam0 = 0;
							Global_1840924.f_2 = 0;
							func_212(0);
							return 1;
						}
					}
				}
				else
				{
					func_97(&Global_1840924);
					*bParam0 = 0;
					Global_1840924.f_2 = 0;
					func_212(0);
					return 1;
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 3))
			{
				if (UNK_0x1E517F9E1F09160C())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, false, -1, 0, false, true, 0);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, false, true, 0);
				}
				if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, false))
				{
					if (!UNK_0x06F8112AA79C53D9(2, 201))
					{
						UNK_0x5D96D8530B3D0904(bParam0, false);
					}
				}
				else if (UNK_0xB9132A06AE472728(2, 201))
				{
					func_97(&(Global_1840924.f_49));
					func_97(&Global_1840924);
					*bParam0 = 0;
					Global_1840924.f_2 = 0;
					func_212(0);
					return 1;
				}
			}
			else
			{
				if (UNK_0x1E517F9E1F09160C())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, false, -1, 0, false, true, 0);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, false, true, 0);
				}
				if (!UNK_0x1A72D8C9F025E5E3())
				{
					if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, false))
					{
						if (!UNK_0x06F8112AA79C53D9(2, 201))
						{
							UNK_0x5D96D8530B3D0904(bParam0, false);
						}
					}
					else if (UNK_0xB9132A06AE472728(2, 201))
					{
						func_97(&(Global_1840924.f_49));
						func_97(&Global_1840924);
						*bParam0 = 0;
						Global_1840924.f_2 = 0;
						func_212(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_205(var uParam0, bool bParam1)
{
	func_206(uParam0);
	if (bParam1)
	{
		func_212(0);
	}
	uParam0->f_35 = 1;
}

void func_206(var uParam0)
{
	struct<46> Var0;

	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_207(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_208(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0x6D99DF8263D35CE5(uParam0->f_33);
			UNK_0x6D99DF8263D35CE5(uParam0->f_34);
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0x6D99DF8263D35CE5(uParam0->f_33);
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0xD06AC7C87A34A6AD(&(uParam0->f_17));
			UNK_0x6D99DF8263D35CE5(uParam0->f_33);
			UNK_0x6D99DF8263D35CE5(uParam0->f_34);
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0xD06AC7C87A34A6AD(&(uParam0->f_17));
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0x164431059FF80580(uParam0->f_33, 70);
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_208(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_209(var uParam0)
{
	return uParam0->f_35;
}

bool func_210()
{
	if (func_211())
	{
		return false;
	}
	if (UNK_0xE6725CC0C55B6CA1() == 0)
	{
		return false;
	}
	return true;
}

bool func_211()
{
	return Global_2461181;
}

void func_212(bool bParam0)
{
	UNK_0xBBCE9616B024A2BF();
	if (bParam0)
	{
		UNK_0xA3B57116ADBCDF5F();
	}
}

bool func_213(var uParam0, bool bParam1, bool bParam2)
{
	if (!bLocal_257)
	{
		func_225(&(uParam0->f_72), bParam1);
		bLocal_257 = true;
		func_331(&(uParam0->f_666), 9, 0);
	}
	else
	{
		if (Global_1835013.f_1 && !Global_1835013.f_2)
		{
			func_222(190, bParam1);
			Global_1835013.f_2 = 1;
			*bParam2 = 1;
		}
		if (func_214(&(uParam0->f_72)))
		{
			Global_1835388 = 1;
			return true;
		}
	}
	return false;
}

bool func_214(var uParam0)
{
	struct<98> Var0;
	struct<4> Var98;
	struct<37> Var106;
	struct<13> Var175;
	bool bVar188;

	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_192(uParam0->f_44))
	{
		Var175 = { Global_1835013.f_361 };
	}
	else
	{
		Var175 = { func_23(UNK_0xD803B885F5E47A62()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_221(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_179(&Var98, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = UNK_0x3E935963A5A0820F(uParam0->f_44, 0);
				bVar188 = false;
				while (bVar188 < Global_1835013.f_142.f_1)
				{
					if (!func_220(uParam0->f_44, bVar188))
					{
						if (func_219(uParam0->f_44, 4, bVar188))
						{
							UNK_0x5D96D8530B3D0904(&(Global_1835013.f_142.f_2), bVar188);
						}
						else
						{
							UNK_0x0674E58A79778E99(&(Global_1835013.f_142.f_2), bVar188);
						}
					}
					bVar188++;
				}
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						UNK_0xBC584396476EE48A(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_144(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							bVar188 = false;
							while (bVar188 < Global_1835013.f_142.f_1)
							{
								if (!func_220(uParam0->f_44, bVar188))
								{
									if (func_219(uParam0->f_44, 4, bVar188))
									{
										Global_1835013.f_73.f_36[bVar188] = UNK_0x14B893B11D05C490(0, bVar188);
										if (Global_1835013.f_73.f_36[bVar188] == -1)
										{
											if (bVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_36[bVar188] = 0;
											}
										}
									}
									else
									{
										Global_1835013.f_73.f_3[bVar188] = UNK_0x1969161BAC0006D6(0, bVar188);
										if (Global_1835013.f_73.f_3[bVar188] == -1f)
										{
											if (bVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_3[bVar188] = 0f;
											}
										}
									}
								}
								bVar188++;
							}
						}
					}
					else
					{
						Global_1835013.f_4 = 1;
					}
					UNK_0xC4492EA0CF4852F9();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_218();
				if (Global_1835013.f_4)
				{
					if (func_217(uParam0->f_44))
					{
						Global_1835013 = 3;
					}
					else
					{
						Global_1835013 = 2;
					}
				}
				else
				{
					Global_1835013 = 2;
				}
			}
			break;
		case 2:
			UNK_0x56218E3881C1B187(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		case 3:
			Global_1835013.f_211 = { Global_1835013.f_142 };
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		case 4:
			if (UNK_0x8CD06866876216F2() && func_216())
			{
				if (func_215())
				{
					Global_1835013 = 99;
				}
				else
				{
					Global_1835013 = 999;
					return true;
				}
			}
			else
			{
				Global_1835013 = 999;
				return true;
			}
			break;
		case 99:
			if (func_217(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var106 = Global_1835013.f_142;
				Var106.f_1 = Global_1835013.f_142.f_1;
				Var106.f_2 = Global_1835013.f_142.f_2;
				UNK_0x56218E3881C1B187(&Var106, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		case 100:
			if (func_180(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_179(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						UNK_0xBC584396476EE48A(0, &Var0);
						if (UNK_0x7F8A39872A07D2CE(&(Var0.f_13), ""))
						{
							Global_968151.f_1 = -1;
						}
						else
						{
							Global_968151.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_968151.f_1 = -1;
					}
					UNK_0xC4492EA0CF4852F9();
				}
				else
				{
					Global_968151.f_1 = -1;
				}
				Global_1835013 = 999;
				func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		case 999:
			return true;
	}
	return false;
}

bool func_215()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_959568.f_8, true);
}

bool func_216()
{
	return Global_2458936.f_3;
}

bool func_217(int iParam0)
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return true;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return true;
	}
	return false;
}

void func_218()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

bool func_219(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 190)
	{
		if (bParam2 == 0)
		{
			return false;
		}
	}
	if (iParam0 == 203)
	{
		if (bParam2 == 3 || bParam2 == 6)
		{
			return false;
		}
	}
	if (iParam0 == 912)
	{
		if (bParam2 == 0 || bParam2 == 3)
		{
			return false;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (bParam2 == 0 || bParam2 == 3)
		{
			return false;
		}
	}
	if (iParam0 == 791)
	{
		if (bParam2 == 4)
		{
			return false;
		}
	}
	if (iParam0 == 780)
	{
		if (bParam2 == 3)
		{
			return false;
		}
	}
	if (iParam0 == 777)
	{
		if (bParam2 == 3 || bParam2 == 7)
		{
			return false;
		}
	}
	if (iParam0 == 1200)
	{
		if (bParam2 == 4)
		{
			return false;
		}
	}
	iVar0 = UNK_0xE847F6F326D1C162(iParam0, iParam1, bParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return true;
	}
	return false;
}

bool func_220(int iParam0, bool bParam1)
{
	if (UNK_0xD3D4B12287A02195(iParam0, 4, bParam1) == 156)
	{
		return true;
	}
	switch (iParam0)
	{
		case 912:
			if (bParam1 == 5)
			{
				return true;
			}
			break;
		case 780:
			if (bParam1 == 4)
			{
				return true;
			}
			break;
		case 1200:
			if (bParam1 == 5)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_221(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_174() && !func_173())
			{
				func_172(*uParam2);
				if (UNK_0x9555470AA3470707(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		case 1:
			if (!UNK_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		case 2:
			if (UNK_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_222(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var7[1];

	if (!UNK_0x1963B11DE70153E0())
	{
		return;
	}
	StringCopy(&(Var7[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_224(iParam0, &Var0, &Var7, 1, -1, 1, 0))
	{
		func_223(190, 131, 0, 0f, 1);
		func_223(190, 103, iLocal_151[1], 0f, 0);
		func_223(190, 99, iLocal_151[2], 0f, 0);
		func_223(190, 109, iLocal_151[3], 0f, 0);
		func_223(190, 106, iLocal_151[5], 0f, 0);
		func_223(190, 2, iLocal_151[10], 0f, 0);
		func_223(190, 107, iLocal_151[8], 0f, 0);
		func_223(190, 116, iLocal_151[6], 0f, 0);
		iLocal_151[1] = 0;
		iLocal_151[2] = 0;
		iLocal_151[3] = 0;
		iLocal_151[5] = 0;
		iLocal_151[10] = 0;
		iLocal_151[8] = 0;
		iLocal_151[6] = 0;
	}
}

void func_223(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;

	if (!bParam4)
	{
		UNK_0x6106B2DBBCB1AA39(iParam1, bParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = UNK_0x3E935963A5A0820F(Global_1835013.f_142, 0);
		bVar1 = false;
		while (bVar1 < 32)
		{
			if (bVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_219(iParam0, 4, bVar1))
				{
					UNK_0x5D96D8530B3D0904(&(Global_1835013.f_142.f_2), bVar1);
				}
				else
				{
					UNK_0x0674E58A79778E99(&(Global_1835013.f_142.f_2), bVar1);
				}
			}
			else
			{
				UNK_0x0674E58A79778E99(&(Global_1835013.f_142.f_2), bVar1);
			}
			bVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (iParam1 == UNK_0xD3D4B12287A02195(iParam0, 4, bVar1))
		{
			bVar0 = bVar1;
			bVar1 = 32;
		}
		bVar1++;
	}
	Global_1835013.f_142.f_36[bVar0] = bParam2;
	Global_1835013.f_142.f_3[bVar0] = fParam3;
	if (bParam2 != 0)
	{
		UNK_0x5D96D8530B3D0904(&(Global_1835013.f_142.f_2), bVar0);
	}
	else if (fParam3 != 0f)
	{
		UNK_0x0674E58A79778E99(&(Global_1835013.f_142.f_2), bVar0);
	}
}

bool func_224(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
				Var69 = { func_23(UNK_0xD803B885F5E47A62()) };
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

void func_225(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	func_226(uParam0, 14, "DartsLB", "", iVar0, -1, 0, 0);
}

void func_226(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var8;
	bool bVar16;
	struct<6> Var17;

	if (!UNK_0xEA6BC48857E0AC4C(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1835392.f_2769 = 0;
	Global_1835392.f_2770 = 0;
	Global_1835392.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_235())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_235())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835392.f_2780.f_26 = -1;
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_235())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 3;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_235())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_235())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_235())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 5;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 6;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 5;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					Global_1835392.f_2709 = 6;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_235())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					UNK_0x4D8EB33D0EE1D0CB(UNK_0xD803B885F5E47A62(), &Var17);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var17}, 8);
					Global_1835392.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_235())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_235())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					Global_1835392.f_2709 = 4;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_235())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_235())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_235())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 0;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 0;
					Global_1835392.f_2708 = 1;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_235())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_235())
				{
					Global_1835392.f_2780.f_26 = iParam5;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835392.f_2780.f_26 = -1;
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_235())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 3;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			break;
		case 1:
			if (iParam4 == 0 || iParam4 == 3)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (iParam4 == 3)
				{
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_KOTH", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_KOTH_NN", 32);
					}
				}
				else if (!UNK_0xEA6BC48857E0AC4C(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1 || iParam4 == 4)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (iParam4 == 4)
				{
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TKOTH", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TKOTH_NN", 32);
					}
				}
				else if (!UNK_0xEA6BC48857E0AC4C(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!UNK_0xEA6BC48857E0AC4C(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			break;
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 7;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 7;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), "CMSW", 64);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 4;
			Global_1835392.f_2710[4] = 6;
			Global_1835392.f_2708 = 5;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 6;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 6;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 0;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 4;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 7;
			Global_1835392.f_2710[2] = 5;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			if (UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1835392.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 9;
			Global_1835392.f_2710[2] = 7;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 2;
			Global_1835392.f_2708 = 5;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 9;
			Global_1835392.f_2710[2] = 7;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 2;
			Global_1835392.f_2708 = 5;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_ACC", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 2;
			Global_1835392.f_2710[2] = 1;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 4;
			break;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1835392.f_2780.f_9), {func_234(iParam1)}, 16);
			Global_1835392.f_2780.f_25 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 7;
			Global_1835392.f_2708 = 2;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 8;
			break;
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			Global_1835392.f_2780.f_25 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 0;
			Global_1835392.f_2710[2] = 0;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 1;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 2;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 0;
			Global_1835392.f_2780.f_29[3] = 0;
			break;
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835392.f_2710[0] = 3;
			Global_1835392.f_2708 = 1;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 1;
			break;
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!UNK_0xEA6BC48857E0AC4C(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 1;
				Global_1835392.f_2710[2] = 4;
				Global_1835392.f_2710[3] = 5;
				Global_1835392.f_2710[4] = 6;
				Global_1835392.f_2708 = 3;
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				Global_1835392.f_2780.f_28 = 6;
				Global_1835392.f_2780.f_29[0] = 5;
				Global_1835392.f_2780.f_29[1] = 11;
				Global_1835392.f_2780.f_29[2] = 4;
				Global_1835392.f_2780.f_29[3] = 5;
				Global_1835392.f_2780.f_29[4] = 5;
			}
			else if (Global_4456448.f_227 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!UNK_0xEA6BC48857E0AC4C(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 1;
				Global_1835392.f_2710[2] = 2;
				Global_1835392.f_2710[3] = 0;
				Global_1835392.f_2708 = 3;
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 2;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!UNK_0xEA6BC48857E0AC4C(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_233(Global_4456448.f_232883) || func_230(Global_4456448.f_232883))
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 2;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else if (func_229(Global_4456448.f_232883))
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 2;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 2;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
				}
			}
			break;
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2768), true);
			Global_1835392.f_2754[1] = -1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 11;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 3;
			Global_1835392.f_2708 = 2;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			break;
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
						case 9:
							uParam0->f_44 = 966;
							break;
						case 4:
							uParam0->f_44 = 967;
							break;
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						case 2:
							uParam0->f_44 = 970;
							break;
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 4;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 4;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 2;
					Global_1835392.f_2710[3] = 1;
					Global_1835392.f_2708 = 4;
					UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 12;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
			}
			break;
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 4;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_29[0] = 17;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 4;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 2;
			Global_1835392.f_2708 = 4;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_29[0] = 10;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 4;
			Global_1835392.f_2710[5] = 3;
			Global_1835392.f_2708 = 6;
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 9;
			Global_1835392.f_2780.f_29[2] = 4;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			Global_1835392.f_2780.f_29[5] = 5;
			break;
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2708 = 1;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 1;
			break;
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835392.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
				Global_1835392.f_2710[0] = 3;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 1;
				Global_1835392.f_2710[3] = 0;
				Global_1835392.f_2709 = 6;
				Global_1835392.f_2708 = 2;
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				Global_1835392.f_2780.f_28 = 4;
				Global_1835392.f_2780.f_29[0] = 1;
				Global_1835392.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
				Global_1835392.f_2710[0] = 3;
				Global_1835392.f_2710[1] = 2;
				Global_1835392.f_2710[2] = 4;
				Global_1835392.f_2710[3] = 1;
				Global_1835392.f_2709 = 4;
				Global_1835392.f_2708 = 3;
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 1;
				Global_1835392.f_2780.f_29[1] = 1;
				Global_1835392.f_2780.f_29[2] = 3;
			}
			Global_1835392.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				case 2:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				case 4:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				case 5:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				case 6:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				case 7:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				case 8:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				default:
					break;
			}
			break;
		case 888:
			uParam0->f_44 = 1201;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "ArenaMode", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 3;
			MemCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), {func_228(iParam4)}, 8);
			Global_1835392.f_2708 = 4;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			switch (iParam4)
			{
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_BUZZ", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					break;
				case 2:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_CARN", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_FLAGW", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_FLAGS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				case 4:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_WRECK", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				case 5:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_BOMBB", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_POINTS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_GOALS", 24);
					break;
				case 6:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_GAMEM", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_CPOINTS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				case 7:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_MNSTR", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				case 8:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_HOTB", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_PASSES", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					break;
				case 9:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_TAGT", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TAGS", 24);
					break;
			}
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 4;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 889:
			uParam0->f_44 = 1202;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_CAREER", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_CARPT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MATCHES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TITLE", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 4;
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 4;
			Global_1835392.f_2780.f_28 = 5;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 4;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 21;
			break;
	}
	bVar16 = false;
	bVar16 = false;
	while (bVar16 < Global_1835392.f_2708)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[bVar16]))
		{
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2770), bVar16);
		}
		bVar16++;
	}
	Global_1835392.f_2826 = func_227(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_227(struct<8> Param0, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	char cVar0[64];

	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_192(iParam8))
	{
		if (bParam12)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam9, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam10, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam11, 64);
	return UNK_0x12AB0310C2281427(&cVar0);
}

struct<6> func_228(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "BuzzerBeater", 24);
			break;
		case 2:
			StringCopy(&Var0, "Carnage", 24);
			break;
		case 3:
			StringCopy(&Var0, "FlagWar", 24);
			break;
		case 4:
			StringCopy(&Var0, "WreckIt", 24);
			break;
		case 5:
			StringCopy(&Var0, "BombBall", 24);
			break;
		case 6:
			StringCopy(&Var0, "GamesMasters", 24);
			break;
		case 7:
			StringCopy(&Var0, "Monsters", 24);
			break;
		case 8:
			StringCopy(&Var0, "HotBomb", 24);
			break;
		case 9:
			StringCopy(&Var0, "TagTeam", 24);
			break;
		default:
			break;
	}
	return Var0;
}

bool func_229(int iParam0)
{
	return iParam0 == 74;
}

bool func_230(int iParam0)
{
	return (func_232(iParam0) || func_231(iParam0));
}

bool func_231(int iParam0)
{
	return iParam0 == 44;
}

bool func_232(int iParam0)
{
	return iParam0 == 45;
}

bool func_233(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_234(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

bool func_235()
{
	if (((((((((((Global_4456448.f_75705 == 1 || Global_4456448.f_75705 == 3) || Global_4456448.f_75705 == 5) || Global_4456448.f_75705 == 7) || Global_4456448.f_75705 == 19) || Global_4456448.f_75705 == 8) || Global_4456448.f_75705 == 9) || Global_4456448.f_75705 == 11) || Global_4456448.f_75705 == 13) || Global_4456448.f_75705 == 21) || Global_4456448.f_75705 == 23) || Global_4456448.f_75705 == 25)
	{
		return true;
	}
	return false;
}

bool func_236(var uParam0, int iParam1)
{
	if (!func_420(&(uParam0->f_2)))
	{
		func_435(&(uParam0->f_2));
	}
	UNK_0x3584F71E5CA29322(14);
	UNK_0x6567AE843FADBA94(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (UNK_0xBFC0798A6E3417F9(2, 201) || uParam0->f_8)
		{
			if (!func_420(&(uParam0->f_5)))
			{
				func_435(&(uParam0->f_5));
				func_237(uParam0, 1051260355 /* Float: 0.33f */);
			}
		}
		if (func_420(&(uParam0->f_5)))
		{
			if (func_7(&(uParam0->f_5)) > 0.33f)
			{
				func_421(&(uParam0->f_5));
				return false;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return true;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_420(&(uParam0->f_5)))
		{
			func_435(&(uParam0->f_5));
			func_237(uParam0, 1051260355 /* Float: 0.33f */);
		}
		else if (func_7(&(uParam0->f_5)) > 0.33f)
		{
			func_421(&(uParam0->f_2));
			return false;
		}
	}
	return true;
}

void func_237(var uParam0, bool bParam1)
{
	UNK_0x7E60C62A7CE58FC8(*uParam0, "SHARD_ANIM_OUT");
	UNK_0x3CAEA85DA607305E(uParam0->f_9);
	UNK_0x7C19E5E4784BD7CF(bParam1);
	UNK_0x7E60D21B163E9D56();
}

void func_238(bool bParam0)
{
	int iVar0;

	iVar0 = UNK_0x09AC81E49EA267F7(false, 100);
	if (iVar0 < 40)
	{
		if (!UNK_0xEB6A8945D1AC98A1((*bParam0)[1]))
		{
			func_4((*bParam0)[1], "DARTS_LOSE", 0, 4);
		}
	}
	else if (iVar0 < 70)
	{
		if (!UNK_0xEB6A8945D1AC98A1((*bParam0)[0]))
		{
			func_4((*bParam0)[0], "GAME_LOSE_SELF", 1, 4);
		}
	}
	else if (!UNK_0xEB6A8945D1AC98A1((*bParam0)[1]))
	{
		func_4((*bParam0)[1], "GAME_WIN_SELF", 0, 4);
	}
}

void func_239(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = UNK_0x09AC81E49EA267F7(false, 100);
	if (iVar0 < 30)
	{
		if (!UNK_0xEB6A8945D1AC98A1((*bParam0)[0]))
		{
			func_4((*bParam0)[0], "DARTS_LOSE", 1, 4);
		}
	}
	else if (iVar0 < 50)
	{
		if (!UNK_0xEB6A8945D1AC98A1((*bParam0)[1]))
		{
			func_4((*bParam0)[1], "DARTS_WIN", 0, 4);
		}
	}
	else if (iVar0 < 75 && bParam1)
	{
		if (!UNK_0xEB6A8945D1AC98A1((*bParam0)[1]))
		{
			func_4((*bParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
		}
	}
	else if (iVar0 < 88)
	{
		if (!UNK_0xEB6A8945D1AC98A1((*bParam0)[0]))
		{
			func_4((*bParam0)[0], "GAME_WIN_SELF", 1, 4);
		}
	}
	else if (!UNK_0xEB6A8945D1AC98A1((*bParam0)[1]))
	{
		func_4((*bParam0)[1], "GAME_LOSE_SELF", 0, 4);
	}
}

int func_240()
{
	int iVar0;

	if (!bLocal_282)
	{
		iVar0 = (UNK_0x09AC81E49EA267F7(false, 65535) % 3);
	}
	else
	{
		iLocal_296++;
		iVar0 = (iLocal_296 % 2);
	}
	return iVar0;
}

void func_241(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	char* sVar0;

	sVar0 = func_242(iParam4);
	if (iParam4 != 5)
	{
		UNK_0x7E60C62A7CE58FC8(*uParam0, "RESET_MOVIE");
		UNK_0x7E60D21B163E9D56();
	}
	UNK_0x7E60C62A7CE58FC8(*uParam0, sVar0);
	UNK_0x7ACC3006A87F8B39("STRING");
	UNK_0x6B012227B3921E18(bParam1);
	UNK_0x779B34565F4D71B1();
	func_12(bParam2);
	UNK_0x7E60D21B163E9D56();
	func_435(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	uParam0->f_9 = iParam5;
}

char* func_242(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_SHARD_CENTERED_MP_MESSAGE";
		case 1:
			return "SHOW_SHARD_CENTERED_TOP_MP_MESSAGE";
		case 2:
			return "SHOW_SHARD_WASTED_MP_MESSAGE";
		case 3:
			return "SHOW_SHARD_RANKUP_MP_MESSAGE";
		case 4:
			return "SHOW_SHARD_CREW_RANKUP_MP_MESSAGE";
		case 5:
			if (UNK_0x8CD06866876216F2())
			{
				return "SHOW_COND_SHARD_MESSAGE";
			}
			return "SHOW_SHARD_MIDSIZED_MESSAGE";
		default:
			break;
	}
	return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}

void func_243(var uParam0, bool bParam1)
{
	UNK_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_SCORES");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x7E60D21B163E9D56();
}

int func_244(bool bParam0)
{
	bParam0->f_2 = { 0f, -2.3685f, -0.2f };
	bParam0->f_5 = { 0f, 0f, 0f };
	bParam0->f_8 = { 0f, 0f, 0f };
	bParam0->f_20 = 0;
	bParam0->f_23 = 0;
	bParam0->f_24 = 0;
	bParam0->f_25 = 0;
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		UNK_0xF690C84DADBB3551(bParam0);
	}
	return 1;
}

void func_245(bool bParam0)
{
	UNK_0xF1E4C781086FABC1(iLocal_122, iLocal_120, 1500, 1, 1);
	UNK_0xE3BB8E05FCEB3FBE(iLocal_123, true);
	UNK_0xF1E4C781086FABC1(iLocal_122, iLocal_123, 8000, 1, 1);
	UNK_0xC5940439E4EB9A33(iLocal_125, bParam0, -0.0301f, 1.498f, 0.7435f, 1);
	UNK_0x1305278186D1C53E(iLocal_125, bParam0, 0.0557f, -1.4905f, 0.4958f, 1);
	UNK_0x5818C8D5303DCCF8(iLocal_125, 35f);
}

void func_246(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	bool bVar0;

	if (!UNK_0xFA06B985B30FB0FC(iLocal_120))
	{
		bVar0 = false;
		func_327(uParam0);
		if (!bLocal_274)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_672)
				{
					UNK_0xA37A90C62806D848(1);
					uParam3->f_672 = 0;
				}
			}
			else if (!bLocal_163)
			{
				if (func_3(&(uParam3->f_666), 18))
				{
					if (!func_3(&(uParam3->f_666), 21))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Global_111599, 3))
						{
							func_418("DARTS_INSTR_W", -1);
							UNK_0x5D96D8530B3D0904(&Global_111599, 3);
						}
						func_331(&(uParam3->f_666), 21, 1);
					}
					else if (!func_3(&(uParam3->f_666), 20) && func_3(&(uParam3->f_666), 19))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Global_111599, 4))
						{
							func_418("DARTS_INSTR_B", -1);
							UNK_0x5D96D8530B3D0904(&Global_111599, 4);
						}
						func_331(&(uParam3->f_666), 20, 1);
					}
				}
				uParam3->f_672 = 1;
			}
			else if (uParam3->f_672)
			{
				UNK_0xA37A90C62806D848(1);
				uParam3->f_672 = 0;
			}
		}
		if (uParam0->f_1 == 1)
		{
			if (!UNK_0xFA06B985B30FB0FC(iLocal_129) && uParam0->f_3 == 2)
			{
				func_326(uParam3);
			}
		}
		else
		{
			func_324(uParam3, bLocal_30);
		}
		func_323(&(uParam0->f_1));
	}
	else
	{
		bVar0 = true;
	}
	func_320(uParam3);
	switch (uParam0->f_1)
	{
		case 1:
			if (!func_312(&(uParam0->f_3)))
			{
				uParam0->f_1 = 2;
			}
			break;
		case 0:
			if (func_305(uParam0->f_422[bLocal_30], &(uParam0->f_243), &(uParam0->f_4), &(uParam0->f_461)))
			{
				uParam0->f_1 = 2;
			}
			break;
		case 2:
			if (UNK_0x06F8112AA79C53D9(2, 228) && bLocal_30 == 0)
			{
				uParam0->f_1 = 1;
			}
			if (bLocal_30 == 0)
			{
				func_304(iLocal_31, 0);
				if (((((!func_303("DARTS_SHT_USE") && !func_303("DARTS_INSTR_W")) && !func_303("DARTS_INSTR_B")) && !func_303("DARTS_AIM_HLP")) && !func_303("DARTS_STD_HLP")) && !func_303("DARTS_FST_HLP"))
				{
					if (func_3(&(uParam3->f_666), 24))
					{
						func_418("DARTS_LEVEL", -1);
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_18965.f_6), bLocal_294);
						func_331(&(uParam3->f_666), 24, 0);
					}
				}
				if ((((uParam0->f_422[bLocal_30] % 2) == 0 && uParam0->f_422[bLocal_30] < 41) && iLocal_31 == 0) && !bLocal_272)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_331(&(uParam3->f_666), 6, 1);
					}
					bLocal_272 = true;
				}
				else if (uParam0->f_422[bLocal_30] == 50 && !bLocal_272)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_331(&(uParam3->f_666), 6, 1);
					}
					bLocal_272 = true;
				}
				else if (func_293(&(uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam1, bVar0, 0, 0, uParam0->f_248))
				{
					UNK_0x790015DC92C918E2();
					uParam3->f_670 = (uParam3->f_670 - 1);
					uParam0->f_1 = 3;
				}
				else if (!bLocal_269)
				{
					if (!func_420(bParam4))
					{
						func_291(bParam4);
					}
					else if (func_7(bParam4) > 20f)
					{
						func_290(bLocal_263[(1 - bLocal_30)]);
						func_421(bParam4);
						bLocal_269 = true;
					}
				}
			}
			else if (iLocal_31 == 0)
			{
				iLocal_292 = 0;
				func_289(&(uParam0->f_422), &(uParam0->f_249));
				func_286(&(uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			else if (SYSTEM::TIMERA() > UNK_0x09AC81E49EA267F7(1250, 2500))
			{
				func_289(&(uParam0->f_422), &(uParam0->f_249));
				func_286(&(uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			break;
		case 3:
			if (func_273(&(uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_248, 0))
			{
				uParam0->f_436++;
				uParam0->f_455 = func_272(uParam0);
				uParam0->f_1 = 4;
			}
			break;
		case 4:
			if (!func_3(&(uParam3->f_666), 5))
			{
				func_270(&(uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_455);
			}
			func_255(uParam0, uParam3);
			break;
		case 5:
			func_248(uParam0, uParam2, uParam3);
			if (func_420(bParam4))
			{
				func_421(bParam4);
			}
			break;
		case 6:
			func_247(uParam0, uParam3);
			break;
	}
}

void func_247(var uParam0, var uParam1)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	float fVar5;

	iLocal_292++;
	bLocal_30 = true;
	iLocal_31 = 0;
	bLocal_276 = true;
	while (iLocal_31 < 3 && uParam0->f_1 == 6)
	{
		if (uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_23)
		{
			if (uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_25)
			{
				iLocal_31++;
			}
			else
			{
				func_270(&(uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
				func_255(uParam0, uParam1);
			}
		}
		else if (uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_24)
		{
			if (bLocal_275)
			{
				if (UNK_0xC844350D5D58C99A(uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					UNK_0xF690C84DADBB3551(&(uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/]));
				}
			}
			else
			{
				uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
				uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				vVar0 = { UNK_0x8A5E176FF719A014(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
				if (UNK_0xC844350D5D58C99A(uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					UNK_0xA47B46945FF6DE74(uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/], vVar0, 1, 0, 0, 1);
				}
			}
			func_270(&(uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			func_255(uParam0, uParam1);
			if (bLocal_275)
			{
				if (bLocal_277)
				{
					uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/] = UNK_0x7707E48765093646(uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_1, vLocal_79, true, true, false);
					vVar0 = { UNK_0x8A5E176FF719A014(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
					UNK_0xA47B46945FF6DE74(uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/], vVar0, 1, 0, 0, 1);
					fVar3 = UNK_0x79833B02DBD2A244(0f, 90f);
					uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_17 = { 90f, fVar3, uParam0->f_243.f_4 };
					UNK_0xC023D1C4BF532815(uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/], uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_17, 0, 1);
					uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
					uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				}
			}
		}
		else
		{
			func_289(&(uParam0->f_422), &(uParam0->f_249));
			func_286(&(uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			uParam0->f_436++;
			func_270(&(uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			if ((uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[bLocal_30] == 0)
			{
				if (uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
				{
					uParam0->f_432[bLocal_30]++;
				}
				func_331(&(uParam1->f_666), 2, 0);
				func_331(&(uParam1->f_666), 3, 0);
				func_331(&(uParam1->f_666), 4, 0);
				func_331(&(uParam1->f_666), 5, 1);
				SYSTEM::SETTIMERB(0);
			}
			func_255(uParam0, uParam1);
			if (bLocal_275)
			{
				if (bLocal_277)
				{
					iVar4 = 0;
					while (iVar4 < iLocal_31 + 1)
					{
						if (!uParam0->f_5[bLocal_30 /*79*/][iVar4 /*26*/].f_23)
						{
							uParam0->f_5[bLocal_30 /*79*/][iVar4 /*26*/] = UNK_0x7707E48765093646(uParam0->f_5[bLocal_30 /*79*/][iVar4 /*26*/].f_1, vLocal_79, true, true, false);
							vVar0 = { UNK_0x8A5E176FF719A014(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[bLocal_30 /*79*/][iVar4 /*26*/].f_11, (uParam0->f_5[bLocal_30 /*79*/][iVar4 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[bLocal_30 /*79*/][iVar4 /*26*/].f_11.f_2) };
							if (UNK_0xC844350D5D58C99A(uParam0->f_5[bLocal_30 /*79*/][iVar4 /*26*/]))
							{
								UNK_0xA47B46945FF6DE74(uParam0->f_5[bLocal_30 /*79*/][iVar4 /*26*/], vVar0, 1, 0, 0, 1);
							}
							fVar5 = UNK_0x79833B02DBD2A244(0f, 90f);
							uParam0->f_5[bLocal_30 /*79*/][iVar4 /*26*/].f_17 = { 90f, fVar5, uParam0->f_243.f_4 };
							UNK_0xC023D1C4BF532815(uParam0->f_5[bLocal_30 /*79*/][iVar4 /*26*/], uParam0->f_5[bLocal_30 /*79*/][iVar4 /*26*/].f_17, 0, 1);
							uParam0->f_5[bLocal_30 /*79*/][iVar4 /*26*/].f_23 = 1;
							uParam0->f_5[bLocal_30 /*79*/][iVar4 /*26*/].f_24 = 0;
						}
						iVar4++;
					}
				}
			}
		}
	}
	uParam0->f_1 = 5;
	if (iLocal_292 > 2)
	{
		uParam0->f_1 = 5;
	}
}

void func_248(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	int iVar3;

	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_248 == 1)
			{
				func_254();
			}
			if (bLocal_30 == 0)
			{
				if (func_3(&(uParam2->f_666), 3))
				{
					func_253("DARTS_PLR_DUB", uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 4))
				{
					func_252("DARTS_ONE_PT", 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 2))
				{
					func_253("DARTS_PLR_BUST", uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else
				{
					func_253("DARTS_SWITCH_C", uParam0->f_422[bLocal_30], 5000, 0);
				}
			}
			else if (func_3(&(uParam2->f_666), 3))
			{
				func_253("DARTS_OPP_DUB", uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 4))
			{
				func_252("DARTS_ONE_PT", 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 2))
			{
				func_253("DARTS_OPP_BUST", uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_253("DARTS_SWITCH_B", uParam0->f_422[bLocal_30], 5000, 0);
			}
			SYSTEM::SETTIMERB(0);
			uParam0->f_2 = 2;
			break;
		case 1:
			if (UNK_0xBFC0798A6E3417F9(2, 190))
			{
				iLocal_290++;
				if (iLocal_290 >= uParam0->f_436)
				{
					iLocal_290 = 0;
				}
				vVar0 = { UNK_0x68F4C0EC296D3901(uParam0->f_5[bLocal_30 /*79*/][iLocal_290 /*26*/], true) };
				func_50(vVar0);
			}
			if (UNK_0xBFC0798A6E3417F9(2, 189))
			{
				iLocal_290 = (iLocal_290 - 1);
				if (iLocal_290 < 0)
				{
					iLocal_290 = (uParam0->f_436 - 1);
				}
				vVar0 = { UNK_0x68F4C0EC296D3901(uParam0->f_5[bLocal_30 /*79*/][iLocal_290 /*26*/], true) };
				func_50(vVar0);
			}
			if (UNK_0xBFC0798A6E3417F9(2, 202))
			{
				vVar0 = { UNK_0x68F4C0EC296D3901(uParam0->f_5[bLocal_30 /*79*/][iLocal_290 /*26*/], true) };
				func_52(vVar0, 0, 0);
				uParam0->f_2 = 2;
			}
			if (UNK_0xBFC0798A6E3417F9(2, 201))
			{
				bLocal_266 = true;
				uParam0->f_2 = 2;
			}
			break;
		case 2:
			if (UNK_0xBFC0798A6E3417F9(2, 201) || (bLocal_276 && bLocal_275))
			{
				bLocal_266 = true;
			}
			if ((UNK_0xBFC0798A6E3417F9(2, 189) || UNK_0xBFC0798A6E3417F9(2, 190)) && uParam0->f_248 == 1)
			{
				vVar0 = { UNK_0x68F4C0EC296D3901(uParam0->f_5[bLocal_30 /*79*/][iLocal_290 /*26*/], true) };
				func_52(vVar0, 1, 0);
				uParam0->f_2 = 1;
			}
			if (!func_3(&(uParam2->f_666), 6))
			{
				if (!bLocal_271)
				{
					if (func_251(bLocal_30 == 0, &(bLocal_263[1]), (uParam0->f_425[bLocal_30] - uParam0->f_422[bLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
					{
						bLocal_271 = true;
					}
				}
				else if ((UNK_0x1C0640BA9A7327B3() % 500) < 50)
				{
				}
			}
			else if (!bLocal_271)
			{
				if (func_250(bLocal_30 == 0, &(bLocal_263[1]), (uParam0->f_425[bLocal_30] - uParam0->f_422[bLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
				{
					bLocal_271 = true;
				}
			}
			else if ((UNK_0x1C0640BA9A7327B3() % 500) < 50)
			{
			}
			if (bLocal_266 || SYSTEM::TIMERB() > 2000)
			{
				bLocal_276 = false;
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_244(&(uParam0->f_5[bLocal_30 /*79*/][iVar3 /*26*/]));
					iVar3++;
				}
				if (uParam0->f_425[bLocal_30] != uParam0->f_422[bLocal_30])
				{
					func_249(uParam1, bLocal_30, uParam0->f_422[bLocal_30]);
					UNK_0xEB819BD1E585E9CB(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_243.f_1, false, false, 0, 0);
				}
				uParam0->f_425[bLocal_30] = uParam0->f_422[bLocal_30];
				iLocal_31 = 0;
				uParam0->f_428 = 0;
				if (bLocal_30 == 0)
				{
					bLocal_30 = true;
				}
				else
				{
					bLocal_30 = false;
				}
				func_434(uParam1, bLocal_30);
				bLocal_99 = false;
				func_413();
				if (!bLocal_275)
				{
					UNK_0xCB7A8856533F691C();
				}
				iLocal_93 = 0;
				uParam2->f_670 = 3;
				bLocal_272 = false;
				bLocal_269 = false;
				bLocal_271 = false;
				bLocal_266 = false;
				iLocal_290 = 0;
				uParam0->f_436 = 0;
				uParam0->f_1 = 2;
				uParam0->f_2 = 0;
			}
			break;
	}
}

void func_249(var uParam0, bool bParam1, bool bParam2)
{
	UNK_0x7E60C62A7CE58FC8(*uParam0, "ADD_DARTS_SCORE");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x3CAEA85DA607305E(bParam2);
	UNK_0x7E60D21B163E9D56();
}

bool func_250(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (bParam0)
	{
		if ((iParam2 > 30 && bParam0) || iParam3 < 20)
		{
			UNK_0x5D96D8530B3D0904(&bVar0, false);
		}
		if ((iParam2 <= 30 && bParam0) || iParam3 >= 20)
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 20 && !bParam0) || iParam4 < 30)
		{
			UNK_0x5D96D8530B3D0904(&bVar0, true);
		}
		if ((iParam2 <= 20 && !bParam0) || iParam4 >= 30)
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 3);
		}
	}
	iVar1 = UNK_0x09AC81E49EA267F7(false, 100);
	iVar2 = UNK_0x09AC81E49EA267F7(false, 100);
	if (iVar2 < 85)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bVar0, false))
		{
			if (iVar1 < 50)
			{
				func_4(UNK_0x16F2683693E537C9(), "GAME_GOOD_SELF", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return true;
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(UNK_0x16F2683693E537C9(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68)
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return true;
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, true))
		{
			if (iVar1 < 50)
			{
				func_4(UNK_0x16F2683693E537C9(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return true;
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 3))
		{
			if (iVar1 < 50)
			{
				func_4(UNK_0x16F2683693E537C9(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			return true;
		}
	}
	return false;
}

bool func_251(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (bParam0)
	{
		if ((iParam2 > 100 && bParam0) || (iParam4 - iParam3) > 75)
		{
			UNK_0x5D96D8530B3D0904(&bVar0, false);
		}
		if ((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50)
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50)
		{
			UNK_0x5D96D8530B3D0904(&bVar0, true);
		}
		if ((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30)
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 3);
		}
	}
	iVar1 = UNK_0x09AC81E49EA267F7(false, 100);
	iVar2 = UNK_0x09AC81E49EA267F7(false, 100);
	if (iVar2 < 75)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bVar0, false))
		{
			if (iVar1 < 35)
			{
				func_4(UNK_0x16F2683693E537C9(), "DARTS_HAPPY", 1, 4);
			}
			else if (iVar1 < 70)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 85)
			{
				func_4(UNK_0x16F2683693E537C9(), "GAME_GOOD_SELF", 1, 4);
			}
			else
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return true;
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(UNK_0x16F2683693E537C9(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68 && !UNK_0xC844350D5D58C99A(func_498()))
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return true;
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, true))
		{
			if (iVar1 < 40)
			{
				func_4(UNK_0x16F2683693E537C9(), "DARTS_PLAYING_WELL", 1, 4);
			}
			else if (iVar1 < 60)
			{
				func_4(UNK_0x16F2683693E537C9(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 80)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return true;
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 3))
		{
			if (iVar1 < 33)
			{
				func_4(UNK_0x16F2683693E537C9(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 66)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(UNK_0x16F2683693E537C9(), "GAME_HECKLE", 1, 4);
			}
			return true;
		}
	}
	return false;
}

void func_252(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

void func_253(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	UNK_0x12F275EDEEF63A2B(iParam2, 1);
}

void func_254()
{
	UNK_0xE3BB8E05FCEB3FBE(iLocal_129, true);
	UNK_0xE3BB8E05FCEB3FBE(iLocal_120, false);
}

void func_255(var uParam0, var uParam1)
{
	uParam0->f_455 = 0;
	if (!func_3(&(uParam1->f_666), 5))
	{
		uParam0->f_422[bLocal_30] = (uParam0->f_422[bLocal_30] - uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
		uParam0->f_428 = (uParam0->f_428 + uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
	}
	if (func_3(&(uParam1->f_666), 5))
	{
		func_267(uParam0);
		func_331(&(uParam1->f_666), 5, 0);
	}
	else
	{
		uParam0->f_429[bLocal_30]++;
		if (bLocal_30 == 0)
		{
			func_265(4);
			iLocal_151[10]++;
		}
		if ((uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[bLocal_30] == 0)
		{
			if (uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[bLocal_30]++;
				if (bLocal_30 == 0)
				{
					func_265(0);
					iLocal_151[1]++;
				}
			}
			func_331(&(uParam1->f_666), 2, 0);
			func_331(&(uParam1->f_666), 3, 0);
			func_331(&(uParam1->f_666), 4, 0);
			func_331(&(uParam1->f_666), 5, 1);
			func_267(uParam0);
			func_331(&(uParam1->f_666), 5, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if ((uParam0->f_422[bLocal_30] == 1 || uParam0->f_422[bLocal_30] < 0) || (uParam0->f_422[bLocal_30] == 0 && uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2))
		{
			if (uParam0->f_422[bLocal_30] == 0 && uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2)
			{
				func_253("DARTS_PLR_DUB", uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				func_331(&(uParam1->f_666), 3, 1);
			}
			else if (uParam0->f_422[bLocal_30] == 1)
			{
				func_331(&(uParam1->f_666), 4, 1);
			}
			else if (bLocal_30 == 1)
			{
				func_253("DARTS_OPP_BUST", uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_253("DARTS_PLR_BUST", uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			if (!bLocal_271)
			{
				if (func_264(bLocal_263[(1 - bLocal_30)]))
				{
					bLocal_271 = true;
				}
			}
			uParam0->f_422[bLocal_30] = uParam0->f_425[bLocal_30];
			if (uParam0->f_1 == 6)
			{
			}
			SYSTEM::SETTIMERA(0);
			uParam0->f_1 = 5;
			if (bLocal_30 == 0)
			{
				uParam0->f_435++;
			}
			func_331(&(uParam1->f_666), 2, 1);
		}
		else
		{
			if (uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[bLocal_30]++;
				if (bLocal_30 == 0)
				{
					func_263(uParam1, 1);
					func_265(0);
					iLocal_151[1]++;
				}
				if (!bLocal_271 && !bLocal_276)
				{
					if (func_262(bLocal_263[bLocal_30]))
					{
						bLocal_271 = true;
					}
				}
			}
			if (uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 0)
			{
				if (!bLocal_271 && !bLocal_276)
				{
					func_261(bLocal_263[(1 - bLocal_30)]);
					bLocal_271 = true;
				}
			}
			if (uParam0->f_428 == 180)
			{
				if (!bLocal_271 && !bLocal_276)
				{
					if (func_260(bLocal_263[1], bLocal_30 == 0))
					{
						bLocal_271 = true;
					}
				}
				if (bLocal_30 == 0)
				{
					func_263(uParam1, 0);
					func_265(1);
					iLocal_151[2]++;
				}
			}
			if (uParam0->f_428 == 140)
			{
				if (!bLocal_271 && !bLocal_276)
				{
					if (func_258(bLocal_263[bLocal_30], bLocal_30 == 0))
					{
						bLocal_271 = true;
					}
				}
			}
			if (bLocal_30 == 0)
			{
				if (iLocal_31 < 2)
				{
					if (uParam0->f_422[bLocal_30] <= 170 && !func_3(&(uParam1->f_666), 18))
					{
						func_331(&(uParam1->f_666), 18, 1);
					}
					if (!func_3(&(uParam1->f_666), 19) && func_3(&(uParam1->f_666), 21))
					{
						func_331(&(uParam1->f_666), 19, 1);
					}
					if (((uParam0->f_422[bLocal_30] < 41 && uParam0->f_422[bLocal_30] > 0) && (uParam0->f_422[bLocal_30] % 2) == 0) || uParam0->f_422[bLocal_30] == 50)
					{
						if (uParam0->f_422[bLocal_30] == 50)
						{
						}
						if (!bLocal_270)
						{
							func_257(bLocal_263[1]);
							bLocal_270 = true;
						}
						if (!uParam0->f_456)
						{
							uParam0->f_456 = 1;
						}
						if (!func_3(&(uParam1->f_666), 6))
						{
							func_331(&(uParam1->f_666), 6, 1);
						}
					}
					else if (uParam0->f_456)
					{
						uParam0->f_456 = 0;
					}
				}
			}
			if (bLocal_30 == 0 && iLocal_31 < 2)
			{
				func_256("DARTS_REMAIN", (uParam0->f_425[bLocal_30] - uParam0->f_422[bLocal_30]), uParam0->f_422[bLocal_30], 7500, 0);
			}
			else if (bLocal_30 == 1 && iLocal_31 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_323(&(uParam0->f_1));
			}
			uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_25 = 1;
			iLocal_31++;
			SYSTEM::SETTIMERA(0);
			if (uParam0->f_1 != 6)
			{
				if (uParam0->f_456 && uParam0->f_248 == 1)
				{
					uParam0->f_1 = 0;
				}
				else
				{
					uParam0->f_1 = 2;
				}
			}
			if (iLocal_31 == 3)
			{
				iLocal_31 = 2;
				uParam0->f_1 = 5;
			}
			if (bLocal_30 == 0)
			{
				uParam0->f_435 = 0;
			}
			func_331(&(uParam1->f_666), 3, 0);
			func_331(&(uParam1->f_666), 2, 0);
			func_331(&(uParam1->f_666), 4, 0);
		}
	}
}

void func_256(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	iParam4 = iParam4;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	UNK_0x6D99DF8263D35CE5(bParam2);
	UNK_0x12F275EDEEF63A2B(iParam3, 1);
}

void func_257(bool bParam0)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		func_4(bParam0, "DARTS_1_DART_AWAY", 0, 4);
	}
}

bool func_258(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = UNK_0x09AC81E49EA267F7(false, 100);
	if (iVar0 < 75)
	{
		if (UNK_0xC844350D5D58C99A(func_498()))
		{
			if (bParam1)
			{
				func_4(UNK_0x16F2683693E537C9(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(func_498(), "DARTS_140", 0, 4);
			}
			return true;
		}
		else if (bParam1)
		{
			if (func_259())
			{
				func_4(UNK_0x16F2683693E537C9(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(bParam0, "DARTS_140", 0, 4);
			}
			return true;
		}
	}
	return false;
}

bool func_259()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return true;
	}
	return false;
}

bool func_260(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = UNK_0x09AC81E49EA267F7(false, 100);
	if (iVar0 < 75)
	{
		if (UNK_0xC844350D5D58C99A(func_498()))
		{
			if (bParam1)
			{
				func_4(UNK_0x16F2683693E537C9(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(func_498(), "DARTS_180", 0, 4);
			}
			return true;
		}
		else if (bParam1)
		{
			if (func_259())
			{
				func_4(UNK_0x16F2683693E537C9(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(bParam0, "DARTS_180", 0, 4);
			}
			return true;
		}
	}
	return false;
}

int func_261(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = UNK_0x09AC81E49EA267F7(false, 100);
	if (iVar0 < 75)
	{
		if (bParam0 == UNK_0x16F2683693E537C9())
		{
			bVar1 = true;
		}
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			func_4(bParam0, "DARTS_MISS_BOARD", bVar1, 4);
		}
		return 1;
	}
	return 0;
}

bool func_262(bool bParam0)
{
	int iVar0;

	iVar0 = UNK_0x09AC81E49EA267F7(false, 100);
	if (iVar0 < 100)
	{
		func_4(bParam0, "DARTS_BULLSEYE", 0, 4);
		return true;
	}
	return false;
}

void func_263(var uParam0, int iParam1)
{
	uParam0->f_679 = 1;
	uParam0->f_682 = iParam1;
}

bool func_264(bool bParam0)
{
	bool bVar0;

	if (bParam0 == UNK_0x16F2683693E537C9())
	{
		bVar0 = true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		func_4(bParam0, "DARTS_BUST", bVar0, 4);
	}
	return true;
}

void func_265(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Global_111638.f_18965++;
			func_266("DARTS_STAT_NUM_BULLSEYES", Global_111638.f_18965);
			break;
		case 1:
			Global_111638.f_18965.f_1++;
			func_266("DARTS_STAT_NUM_180S", Global_111638.f_18965.f_1);
			break;
		case 2:
			Global_111638.f_18965.f_2++;
			func_266("DARTS_STAT_NUM_WINS", Global_111638.f_18965.f_2);
			break;
		case 3:
			Global_111638.f_18965.f_3++;
			func_266("DARTS_STAT_NUM_LOSS", Global_111638.f_18965.f_3);
			break;
		case 4:
			Global_111638.f_18965.f_4++;
			func_266("DARTS_STAT_DARTS_THROWN", Global_111638.f_18965.f_4);
			break;
		case 5:
			Global_111638.f_18965.f_5++;
			func_266("DARTS_STAT_NUM_GAMES", Global_111638.f_18965.f_5);
			break;
		case 7:
			Global_111638.f_18965.f_7 = (SYSTEM::TO_FLOAT(Global_111638.f_18965.f_2) / SYSTEM::TO_FLOAT(Global_111638.f_18965.f_5));
			break;
		case 8:
			Global_111638.f_18965.f_8 = (SYSTEM::TO_FLOAT(Global_111638.f_18965.f_4) / SYSTEM::TO_FLOAT(Global_111638.f_18965.f_5));
			break;
	}
}

void func_266(char* sParam0, var uParam1)
{
}

void func_267(var uParam0)
{
	if (!uParam0->f_460)
	{
		uParam0->f_460 = 1;
	}
	func_265(5);
	UNK_0xCB7A8856533F691C();
	UNK_0xA37A90C62806D848(1);
	if (UNK_0x562F77A7F33D2E46(func_414(2)))
	{
		UNK_0x8910D3D58E0132B8(func_414(2));
	}
	if (uParam0->f_248 == 1)
	{
		func_254();
	}
	if (bLocal_30 == 0)
	{
		uParam0->f_454 = 1;
		bLocal_280 = true;
		uParam0->f_446[bLocal_30]++;
		uParam0->f_437[bLocal_30]++;
		func_265(2);
		iLocal_151[8]++;
	}
	else
	{
		uParam0->f_454 = 0;
		uParam0->f_446[bLocal_30]++;
		uParam0->f_437[bLocal_30]++;
		func_265(3);
		iLocal_151[9]++;
	}
	func_265(7);
	func_435(&(uParam0->f_254));
	if (func_269(uParam0))
	{
		uParam0->f_449[0] = 0;
		uParam0->f_449[1] = 0;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_443[bLocal_30]++;
		if (!uParam0->f_458)
		{
			if (uParam0->f_454)
			{
				func_268(1);
			}
			uParam0->f_458 = 1;
		}
		if (uParam0->f_454)
		{
			iLocal_151[3]++;
			iLocal_298 = 0;
		}
		else
		{
			iLocal_151[5]++;
			iLocal_298 = 3;
		}
		*uParam0 = 12;
	}
	else
	{
		*uParam0 = 11;
	}
	uParam0->f_1 = 2;
	UNK_0x8BC9595FD2792B5D(func_414(3));
	bLocal_277 = true;
	uParam0->f_428 = 0;
	bLocal_99 = false;
	uParam0->f_425[0] = 301;
	uParam0->f_425[1] = 301;
}

void func_268(bool bParam0)
{
	char* sVar0;

	UNK_0x9CBC55A05A07FC47(0);
	switch (func_90())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	UNK_0x3D0B5872F36FB05C(sVar0);
}

bool func_269(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_115(uParam0->f_454, 0, 1);
	switch (uParam0->f_452)
	{
		case 1:
			iVar1 = 1;
			break;
		case 3:
			iVar1 = 2;
			break;
		case 5:
			iVar1 = 3;
			break;
	}
	if (uParam0->f_446[iVar0] == iVar1)
	{
		uParam0->f_449[iVar0]++;
		uParam0->f_440[iVar0]++;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_459 = 1;
		if (iVar0 == 0)
		{
			iLocal_151[6]++;
		}
		if (uParam0->f_449[iVar0] == uParam0->f_453)
		{
			uParam0->f_459 = 0;
			return true;
		}
	}
	return false;
}

void func_270(var uParam0, var uParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;

	vVar3 = { uParam0->f_8 };
	vVar3.x = (vVar3.x + 0.0041f);
	vVar3.f_2 = (vVar3.z + 0.0002f);
	fVar1 = UNK_0x07AB02F3C4AE2B04(0f, 1f, vVar3.x, vVar3.z);
	fVar0 = func_271(vVar3);
	uParam0->f_22 = fVar0;
	if (bParam2)
	{
		UNK_0xEB819BD1E585E9CB(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, false, false, 0, 0);
	}
	if (fVar0 < 0.009f)
	{
		UNK_0xEB819BD1E585E9CB(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, false, false, 0, 0);
		uParam0->f_20 = 50;
	}
	else if (fVar0 < 0.021f)
	{
		UNK_0xEB819BD1E585E9CB(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, false, false, 0, 0);
		uParam0->f_20 = 25;
	}
	else if (fVar0 > 0.3f)
	{
		UNK_0xEB819BD1E585E9CB(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, false, false, 0, 0);
		uParam0->f_20 = 0;
	}
	else if (fVar0 >= 0.226f)
	{
		UNK_0xEB819BD1E585E9CB(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, false, false, 0, 0);
		uParam0->f_20 = 0;
	}
	else
	{
		if (fVar0 > 0.1285f && fVar0 < 0.1405f)
		{
			uParam0->f_21 = 3;
			UNK_0xEB819BD1E585E9CB(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, false, false, 0, 0);
		}
		else if (fVar0 > 0.2132f && fVar0 < 0.226f)
		{
			uParam0->f_21 = 2;
			UNK_0xEB819BD1E585E9CB(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, false, false, 0, 0);
		}
		else
		{
			uParam0->f_21 = 1;
			UNK_0xEB819BD1E585E9CB(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, false, false, 0, 0);
		}
		if (uParam0->f_8 < 0f)
		{
			fVar1 = (360f - fVar1);
		}
		fVar2 = 0f;
		iVar6 = 0;
		iVar6 = 0;
		while (iVar6 < 21)
		{
			if (fVar1 >= (fVar2 - 9f) && fVar1 < (fVar2 + 9f))
			{
				if ((fVar1 <= (fVar2 - 8.1f) && fVar1 >= (fVar2 - 9.9f)) || (fVar1 >= (fVar2 + 8.1f) && fVar1 <= (fVar2 + 9.9f)))
				{
					UNK_0xEB819BD1E585E9CB(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, false, false, 0, 0);
				}
				iVar7 = (iLocal_33[iVar6] * uParam0->f_21);
				uParam0->f_20 = iVar7;
			}
			fVar2 = (fVar2 + 18f);
			iVar6++;
		}
	}
}

float func_271(vector3 vParam0)
{
	return SYSTEM::SQRT(((vParam0.x * vParam0.x) + (vParam0.z * vParam0.z)));
}

int func_272(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_31)
	{
		if (((uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_8 > (uParam0->f_5[bLocal_30 /*79*/][iVar0 /*26*/].f_8 - 0.008f) && uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_8 < (uParam0->f_5[bLocal_30 /*79*/][iVar0 /*26*/].f_8 + 0.008f)) && uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 > (uParam0->f_5[bLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 - 0.008f)) && uParam0->f_5[bLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 < (uParam0->f_5[bLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 + 0.008f))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_273(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (bLocal_30 == 0 && iParam2 == 1)
	{
		func_274("Darts", "Dart_Reticules", &Local_70, 1, 0, 4, 0);
	}
	fVar6 = UNK_0x6117725E0134737F();
	vVar3 = { uParam0->f_5 * Vector(fVar6, fVar6, fVar6) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - vVar3 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0.04f))
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		vVar0 = { UNK_0x8A5E176FF719A014(uParam1->f_1, uParam1->f_4, uParam0->f_11, (uParam0->f_11.f_1 + fLocal_55), uParam0->f_11.f_2) };
		UNK_0xA47B46945FF6DE74(*uParam0, vVar0, 1, 0, 0, 1);
		return true;
	}
	vVar0 = { UNK_0x8A5E176FF719A014(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_55), uParam0->f_2.f_2) };
	UNK_0xA47B46945FF6DE74(*uParam0, vVar0, 1, 0, 0, 1);
	uParam0->f_17.f_1 = (uParam0->f_17.f_1 + (1000f * fVar6));
	UNK_0xC023D1C4BF532815(*uParam0, uParam0->f_17, 0, 1);
	if (UNK_0xC844350D5D58C99A(*uParam0))
	{
		if (bParam3)
		{
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_274(bool bParam0, bool bParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;

	Var0 = { *fParam2 };
	switch (iParam4)
	{
		case 0:
			func_285(&Var0);
			break;
		case 1:
			func_284(&Var0);
			break;
		case 5:
			func_283(&Var0);
			break;
		case 6:
			func_282(&Var0);
			break;
		case 7:
			func_281(&Var0);
			break;
		case 8:
			func_280(&Var0);
			break;
		case 9:
			func_279(&Var0);
			break;
	}
	if (func_277())
	{
		UNK_0xD9ACBBA59FD5A09E(iParam5);
		if (iParam3 == 1)
		{
			UNK_0x539E86AE011A8B38(bParam0, bParam1, func_276(Var0), func_275(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			UNK_0x539E86AE011A8B38(bParam0, bParam1, func_276(Var0), func_275(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		UNK_0xD9ACBBA59FD5A09E(4);
	}
}

float func_275(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_276(float fParam0)
{
	return (fParam0 + fLocal_12);
}

bool func_277()
{
	if (func_278())
	{
		return true;
	}
	if (UNK_0x757EF87A33649210())
	{
		return false;
	}
	if (UNK_0xD0BB2359EC70FC37() || UNK_0x7BCE0E6DD4A1F749())
	{
		return false;
	}
	if (UNK_0x06980BB66EBA4D95())
	{
		return false;
	}
	return true;
}

bool func_278()
{
	return Global_1312440;
}

void func_279(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_280(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_281(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_282(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_283(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_284(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_285(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_286(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;

	if (*uParam3 == 50)
	{
		fVar3 = 0f;
		fVar4 = UNK_0x79833B02DBD2A244(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		fVar3 = 0.14f;
		fVar4 = UNK_0x79833B02DBD2A244(0f, 360f);
	}
	else
	{
		if (uParam3->f_1 == 3)
		{
			fVar3 = 0.1345f;
		}
		else if (uParam3->f_1 == 2)
		{
			fVar3 = 0.218f;
		}
		else
		{
			fVar3 = 0.18f;
		}
		fVar13 = 0f;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < 21)
		{
			if (*uParam3 == iLocal_33[iVar5])
			{
				fVar4 = fVar13;
			}
			fVar13 = (fVar13 + 18f);
			iVar5++;
		}
	}
	if (!bParam4 && uParam3->f_3 < 30)
	{
		iVar5 = UNK_0x09AC81E49EA267F7(false, 100);
		iVar6 = UNK_0x09AC81E49EA267F7(func_288(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = UNK_0x79833B02DBD2A244(-35f, 35f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = UNK_0x79833B02DBD2A244(-80f, 80f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = UNK_0x79833B02DBD2A244(-60f, 60f);
		}
		else
		{
			fVar0 = UNK_0x79833B02DBD2A244(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = UNK_0x79833B02DBD2A244(-200f, -60f);
			}
			else
			{
				fVar0 = UNK_0x79833B02DBD2A244(60f, 200f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar4 = (fVar4 + fVar0);
		iVar5 = UNK_0x09AC81E49EA267F7(false, 100);
		iVar6 = UNK_0x09AC81E49EA267F7(func_288(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = UNK_0x79833B02DBD2A244(-0.25f, 0.25f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = UNK_0x79833B02DBD2A244(-0.07f, 0.07f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = UNK_0x79833B02DBD2A244(-0.15f, 0.15f);
		}
		else
		{
			fVar0 = UNK_0x79833B02DBD2A244(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = UNK_0x79833B02DBD2A244(-1f, -0.3f);
			}
			else
			{
				fVar0 = UNK_0x79833B02DBD2A244(0.3f, 1f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar3 = (fVar3 + fVar0);
	}
	uParam0->f_8 = (SYSTEM::SIN(fVar4) * fVar3);
	uParam0->f_8.f_1 = -0.23f;
	uParam0->f_8.f_2 = (SYSTEM::COS(fVar4) * fVar3);
	uParam0->f_8 = (uParam0->f_8 - 0.0035f);
	uParam0->f_8.f_2 = (uParam0->f_8.f_2 - 0.0002f);
	if (*uParam2 == 6)
	{
		func_287(uParam0);
	}
	else
	{
		uParam0->f_23 = 0;
		uParam0->f_24 = 1;
		func_287(uParam0);
		*uParam0 = UNK_0x7707E48765093646(uParam0->f_1, vLocal_79, false, false, false);
		fVar1 = UNK_0x79833B02DBD2A244(0f, 90f);
		vVar7 = { UNK_0x8A5E176FF719A014(uParam1->f_1, uParam1->f_4, vLocal_82) };
		vVar10 = { UNK_0x8A5E176FF719A014(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_55), uParam0->f_8.f_2) };
		fVar2 = UNK_0xE7D606C557C86100((vVar7.x - vVar10.x), (vVar7.y - vVar10.y));
		fVar2 = (fVar2 - 180f);
		uParam0->f_17 = { 90f, fVar1, fVar2 };
		UNK_0xC023D1C4BF532815(*uParam0, uParam0->f_17, 0, 1);
		uParam0->f_2 = { vLocal_82 };
		*uParam2 = 3;
		UNK_0xCEAA091B490F8407(-1, "DARTS_THROW_DART_MASTER", *uParam0, false, 0, 0);
	}
}

void func_287(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	fVar6 = 0.08f;
	uParam0->f_8.f_1 = -0.213f;
	vVar0 = { vLocal_82 - uParam0->f_8 };
	fVar3 = SYSTEM::VMAG(vVar0);
	uParam0->f_5 = { vVar0 / Vector(fVar3, fVar3, fVar3) };
	fVar4 = UNK_0xE7D606C557C86100(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = (fVar4 - 180f);
	fVar5 = (UNK_0x76F7F8AA07822C28(uParam0->f_17.f_2) * fVar6);
	uParam0->f_11 = { uParam0->f_8 };
	uParam0->f_11 = (uParam0->f_11 + fVar5);
	vVar0 = { vLocal_82 - uParam0->f_11 };
	fVar3 = SYSTEM::VMAG(vVar0);
	uParam0->f_5 = { vVar0 / Vector(fVar3, fVar3, fVar3) };
}

int func_288(var uParam0)
{
	switch (uParam0->f_4)
	{
		case 0:
			return 25;
		case 1:
			return 75;
		case 2:
			return 90;
		default:
			break;
	}
	return 25;
}

void func_289(var uParam0, var uParam1)
{
	int iVar0;

	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = ((*uParam0)[1] - (*uParam0)[0]);
	uParam1->f_3++;
	if ((*uParam0)[bLocal_30] > 121)
	{
		*uParam1 = 20;
		uParam1->f_1 = 3;
	}
	else if ((*uParam0)[bLocal_30] > 60)
	{
		if (((*uParam0)[bLocal_30] % 2) == 1)
		{
			if (func_259())
			{
				*uParam1 = 19;
			}
			else
			{
				*uParam1 = 17;
			}
			uParam1->f_1 = 3;
		}
		else
		{
			*uParam1 = 20;
			uParam1->f_1 = 3;
		}
	}
	else if ((*uParam0)[bLocal_30] < 61)
	{
		if ((*uParam0)[bLocal_30] == 50)
		{
			*uParam1 = 50;
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[bLocal_30] > 52)
		{
			*uParam1 = ((*uParam0)[bLocal_30] - 40);
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[bLocal_30] > 40)
		{
			*uParam1 = ((*uParam0)[bLocal_30] - 32);
			uParam1->f_1 = 1;
		}
		else if (((*uParam0)[bLocal_30] % 2) == 0)
		{
			iVar0 = 1;
			iVar0 = 0;
			while (iVar0 < 20)
			{
				*uParam1 = ((*uParam0)[bLocal_30] / 2);
				uParam1->f_1 = 2;
				iVar0++;
			}
		}
		else
		{
			iVar0 = 32;
			while (*uParam1 == 0 && iVar0 > 1)
			{
				if ((*uParam0)[bLocal_30] > iVar0)
				{
					*uParam1 = ((*uParam0)[bLocal_30] - iVar0);
					uParam1->f_1 = 1;
				}
				iVar0 = (iVar0 / 2);
			}
		}
	}
}

int func_290(bool bParam0)
{
	int iVar0;

	iVar0 = UNK_0x09AC81E49EA267F7(false, 100);
	if (iVar0 < 33)
	{
		func_4(bParam0, "DARTS_BORED", 0, 4);
		return 1;
	}
	return 0;
}

void func_291(bool bParam0)
{
	func_292(bParam0, 0f);
}

void func_292(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_8(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) + fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

bool func_293(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	float fVar0;
	int iVar1;

	switch (iParam6)
	{
		case 0:
			if (bLocal_97)
			{
				if (SYSTEM::TIMERB() > 50)
				{
					bLocal_98 = false;
					bLocal_99 = false;
					bLocal_101 = false;
					if (func_302(uParam0, uParam1, 0))
					{
						UNK_0xCEAA091B490F8407(-1, "DARTS_THROW_DART_MASTER", *uParam0, false, 0, 0);
						bLocal_97 = false;
						return true;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(UNK_0xBFC0798A6E3417F9(2, 223) && bLocal_101) && !bParam4)
				{
					bLocal_98 = true;
					bLocal_99 = true;
					if (!bLocal_100)
					{
						func_301(uParam0, *uParam2);
						bLocal_100 = true;
					}
					else
					{
						if (!bParam5)
						{
							func_300();
						}
						func_299(uParam0, iParam6);
						func_298(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						fVar0 = UNK_0x79833B02DBD2A244(0.02f, 0.1f);
						iVar1 = UNK_0x09AC81E49EA267F7(false, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8 + fVar0) < 0.33f)
							{
								uParam0->f_8 = (uParam0->f_8 + fVar0);
							}
							else
							{
								uParam0->f_8 = (uParam0->f_8 - fVar0);
							}
						}
						else if ((uParam0->f_8 - fVar0) > -0.33f)
						{
							uParam0->f_8 = (uParam0->f_8 - fVar0);
						}
						else
						{
							uParam0->f_8 = (uParam0->f_8 + fVar0);
						}
						fVar0 = UNK_0x79833B02DBD2A244(0.02f, 0.1f);
						iVar1 = UNK_0x09AC81E49EA267F7(false, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8.f_2 + fVar0) < 0.29f)
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
							}
							else
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
							}
						}
						else if ((uParam0->f_8.f_2 - fVar0) > -0.29f)
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
						}
						else
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
						}
						uParam0->f_2 = { vLocal_82 };
						bLocal_98 = true;
						bLocal_99 = true;
					}
					if (bLocal_98 && bLocal_99)
					{
						if (!bLocal_97)
						{
							UNK_0x790015DC92C918E2();
							bLocal_97 = true;
							SYSTEM::SETTIMERB(0);
						}
					}
				}
			}
			break;
		case 1:
			if (bLocal_97)
			{
				func_274("Darts", "Dart_Reticules", &Local_61, 1, 0, 4, 0);
				if (SYSTEM::TIMERB() > 25)
				{
					if (func_302(uParam0, uParam1, 1))
					{
						UNK_0xCEAA091B490F8407(-1, "DARTS_THROW_DART_MASTER", *uParam0, false, 0, 0);
						bLocal_97 = false;
						return true;
					}
				}
			}
			else if (!func_294(uParam0))
			{
				if (!bLocal_100)
				{
					func_301(uParam0, *uParam2);
				}
				else
				{
					func_300();
					func_299(uParam0, iParam6);
					func_298(uParam0, uParam1, bParam3, 0);
				}
			}
			else if (!bLocal_97)
			{
				bLocal_97 = true;
				SYSTEM::SETTIMERB(0);
			}
			break;
	}
	return false;
}

bool func_294(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;

	fVar1 = UNK_0x4F3973434662D795(2, 220);
	fVar2 = UNK_0x4F3973434662D795(2, 221);
	iLocal_136 = SYSTEM::ROUND(fVar2);
	switch (iLocal_135)
	{
		case 0:
			if (iLocal_136 > 120)
			{
				iLocal_137 = UNK_0x1C0640BA9A7327B3();
				iLocal_135 = 1;
			}
			if (iLocal_136 < -100)
			{
				iLocal_141 = SYSTEM::ROUND(fVar1);
			}
			break;
		case 1:
			if (iLocal_136 > 120)
			{
				iLocal_137 = UNK_0x1C0640BA9A7327B3();
			}
			else if ((iLocal_136 < 120 && iLocal_136 > -120) && (UNK_0x1C0640BA9A7327B3() - iLocal_137) > 500)
			{
				iLocal_135 = 0;
			}
			else if (iLocal_136 < -100)
			{
				iLocal_138 = UNK_0x1C0640BA9A7327B3();
				if ((iLocal_138 - iLocal_137) < 500)
				{
					iLocal_141 = SYSTEM::ROUND(fVar1);
					iLocal_139 = (iLocal_138 - iLocal_137);
					iLocal_135 = 2;
				}
			}
			break;
		case 2:
			if (iLocal_139 > iLocal_140)
			{
				if (iLocal_139 > 100 && iLocal_139 < 150)
				{
					fLocal_144 = 0.066477f;
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_144);
				}
				else
				{
					fLocal_143 = (SYSTEM::TO_FLOAT(iLocal_140) / SYSTEM::TO_FLOAT(iLocal_139));
					fLocal_144 = ((1f - fLocal_143) * fLocal_147);
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_144);
				}
			}
			else
			{
				fLocal_144 = 0f;
			}
			if (iLocal_141 > 7)
			{
				fLocal_145 = (SYSTEM::TO_FLOAT(iLocal_141) / fLocal_150);
				fLocal_146 = (fLocal_148 * fLocal_145);
				uParam0->f_8 = (uParam0->f_8 + fLocal_146);
			}
			else if (iLocal_141 < -7)
			{
				fLocal_145 = (SYSTEM::TO_FLOAT(iLocal_141) / fLocal_149);
				fLocal_146 = (fLocal_148 * fLocal_145);
				uParam0->f_8 = (uParam0->f_8 - fLocal_146);
			}
			else
			{
				fLocal_146 = 0f;
			}
			if (fLocal_144 < 0.066477f && fLocal_146 == 0f)
			{
				func_297();
			}
			else if (fLocal_144 <= 0.066477f && fLocal_146 < 0.06f)
			{
				func_296();
			}
			else
			{
				func_295();
			}
			iVar0 = 1;
			iLocal_135 = 0;
			break;
	}
	return iVar0;
}

void func_295()
{
	Local_70.f_4 = 210;
	Local_70.f_5 = 23;
	Local_70.f_6 = 19;
}

void func_296()
{
	Local_70.f_4 = 183;
	Local_70.f_5 = 137;
	Local_70.f_6 = 0;
}

void func_297()
{
	Local_70.f_4 = 16;
	Local_70.f_5 = 184;
	Local_70.f_6 = 10;
}

void func_298(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	vector3 vVar0;

	vVar0 = { UNK_0x8A5E176FF719A014(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	if (iParam3 == 1)
	{
		vVar0 = { UNK_0x8A5E176FF719A014(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	}
	UNK_0x362FD95670BFA2A6(vVar0, &Local_61, &(Local_61.f_1));
	if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
	{
	}
	if (!bParam2)
	{
		if (bLocal_94)
		{
			func_274("Darts", "Dart_Reticules_Zoomed", &Local_61, 1, 0, 4, 0);
		}
		else
		{
			func_274("Darts", "Dart_Reticules", &Local_61, 1, 0, 4, 0);
		}
		if (!bLocal_101)
		{
			bLocal_101 = true;
		}
	}
}

void func_299(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	float fVar9;

	fVar0 = 0.033367f;
	bVar7 = false;
	bVar3 = UNK_0x659FAE9DBE6F38F5(2, 218);
	bVar4 = UNK_0x659FAE9DBE6F38F5(2, 219);
	bVar5 = UNK_0x4F3973434662D795(2, 220);
	bVar6 = UNK_0x4F3973434662D795(2, 221);
	if (UNK_0x91E3F625EF57450D(2))
	{
		if (UNK_0x755FF954DAE327E1(bVar5) > UNK_0x755FF954DAE327E1(bVar3) || UNK_0x755FF954DAE327E1(bVar6) > UNK_0x755FF954DAE327E1(bVar4))
		{
			bVar3 = bVar5;
			bVar4 = bVar6;
			bVar7 = false;
		}
		else
		{
			if (UNK_0x8EB1E94243F14479())
			{
				bVar4 = (bVar4 * -1f);
			}
			if (UNK_0x89DF0B812BA6383B())
			{
				bVar4 = (bVar4 * -1f);
			}
			if (UNK_0x06F8112AA79C53D9(2, 227))
			{
				uParam0->f_8 = (uParam0->f_8 + (bVar3 * 0.06f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (bVar4 * 0.06f));
			}
			else
			{
				uParam0->f_8 = (uParam0->f_8 + (bVar3 * 0.03f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (bVar4 * 0.03f));
			}
			uParam0->f_8 = func_14(uParam0->f_8, -0.33f, 0.33f);
			uParam0->f_8.f_2 = func_14(uParam0->f_8.f_2, -0.29f, 0.29f);
			bVar7 = true;
		}
	}
	if (!bVar7)
	{
		if (UNK_0x91E3F625EF57450D(2))
		{
			if (bVar5 != 0f || bVar6 != 0f)
			{
				bVar3 = bVar5;
				bVar4 = bVar6;
			}
		}
		if (bVar3 > 0f)
		{
			if ((uParam0->f_8 + (fLocal_92 * fVar0)) < 0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 + (fLocal_92 * fVar0));
			}
		}
		else if (bVar3 < 0f)
		{
			if ((uParam0->f_8 - (fLocal_92 * fVar0)) > -0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 - (fLocal_92 * fVar0));
			}
		}
		if (bVar4 > 0f)
		{
			if ((uParam0->f_8.f_2 - (fLocal_92 * fVar0)) > -0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fLocal_92 * fVar0));
			}
		}
		else if (bVar4 < 0f)
		{
			if ((uParam0->f_8.f_2 + (fLocal_92 * fVar0)) < 0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fLocal_92 * fVar0));
			}
		}
	}
	uParam0->f_14 = { uParam0->f_8 };
	if (iParam1 == 0)
	{
		fVar2 = UNK_0x79833B02DBD2A244((0f - fLocal_89), (0f + fLocal_89));
		fVar1 = UNK_0x79833B02DBD2A244((0f - fLocal_88), (0f + fLocal_88));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = UNK_0x79833B02DBD2A244((0f - fLocal_89), (0f + fLocal_89));
		fVar1 = UNK_0x79833B02DBD2A244((0f - fLocal_88), (0f + fLocal_88));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.29f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.29f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
	if (iParam1 == 1)
	{
		fLocal_92 = 0.5f;
		if (iLocal_135 == 1)
		{
			fVar8 = 0.06f;
			fVar9 = 0.08f;
		}
		else
		{
			fVar8 = 0.02f;
			fVar9 = 0.03f;
		}
		fVar2 = UNK_0x79833B02DBD2A244((0f - fVar9), (0f + fVar9));
		fVar1 = UNK_0x79833B02DBD2A244((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = UNK_0x79833B02DBD2A244((0f - fVar9), (0f + fVar9));
		fVar1 = UNK_0x79833B02DBD2A244((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
}

void func_300()
{
	if (UNK_0x06F8112AA79C53D9(2, 227))
	{
		fLocal_92 = 0.3f;
	}
	else
	{
		fLocal_92 = 0.1f;
	}
	if (UNK_0x06F8112AA79C53D9(2, 229))
	{
		if (bLocal_94)
		{
			if (SYSTEM::TIMERA() > iLocal_142)
			{
				fLocal_88 = fLocal_90;
				fLocal_89 = fLocal_91;
				fLocal_92 = 0.1f;
				bLocal_94 = false;
			}
		}
		else if (iLocal_93 < 1)
		{
			fLocal_88 = 0.03f;
			fLocal_89 = 0.05f;
			fLocal_92 = 0.1f;
			SYSTEM::SETTIMERA(0);
			bLocal_94 = true;
			iLocal_93++;
		}
		else if ((((((!func_303("DARTS_FST_HLP") && !func_303("DARTS_AIM_HLP")) && !func_303("DARTS_CLOCK")) && !func_303("DARTS_STD_HLP")) && !func_303("DARTS_INSTR_W")) && !func_303("DARTS_INSTR_B")) && !bLocal_95)
		{
			bLocal_95 = true;
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111599, true))
			{
				func_418("DARTS_SHT_USE", -1);
				UNK_0x5D96D8530B3D0904(&Global_111599, true);
			}
		}
	}
	else if (bLocal_94)
	{
		fLocal_88 = fLocal_90;
		fLocal_89 = fLocal_91;
		fLocal_92 = 0.1f;
		bLocal_94 = false;
	}
}

void func_301(var uParam0, struct<4> Param1, var uParam5, var uParam6)
{
	vector3 vVar0;

	vVar0 = { 0f, 0f, 0f };
	vVar0.x = (vVar0.x + UNK_0x79833B02DBD2A244(-0.1f, 0.1f));
	vVar0.f_2 = (vVar0.z + UNK_0x79833B02DBD2A244(-0.1f, 0.1f));
	uParam0->f_8 = { Param1.f_3 + vVar0 };
	uParam0->f_2 = { vLocal_82 };
}

bool func_302(var uParam0, var uParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;

	if (UNK_0xC844350D5D58C99A(*uParam0))
	{
		UNK_0xA47B46945FF6DE74(*uParam0, vLocal_79, 1, 0, 0, 1);
	}
	else
	{
		*uParam0 = UNK_0x7707E48765093646(uParam0->f_1, vLocal_79, false, false, false);
	}
	bLocal_94 = false;
	fLocal_92 = 0.1f;
	fLocal_88 = fLocal_90;
	fLocal_89 = fLocal_91;
	uParam0->f_23 = 0;
	uParam0->f_24 = 1;
	func_287(uParam0);
	fVar10 = UNK_0x79833B02DBD2A244(0f, 90f);
	vVar3 = { UNK_0x8A5E176FF719A014(uParam1->f_1, uParam1->f_4, vLocal_82) };
	vVar6 = { UNK_0x8A5E176FF719A014(uParam1->f_1, uParam1->f_4, (uParam0->f_14 + 0.0035f), (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	fVar11 = UNK_0xE7D606C557C86100((vVar3.x - vVar6.x), (vVar3.y - vVar6.y));
	fVar11 = (fVar11 - 180f);
	fVar9 = 90f;
	uParam0->f_17 = { fVar9, fVar10, fVar11 };
	UNK_0xC023D1C4BF532815(*uParam0, uParam0->f_17, 0, 1);
	bLocal_98 = false;
	bLocal_100 = false;
	if (bParam2)
	{
		func_274("Darts", "Dart_Reticules", &Local_61, 1, 0, 4, 0);
	}
	vVar0 = { UNK_0x8A5E176FF719A014(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_55), uParam0->f_8.f_2) };
	UNK_0x362FD95670BFA2A6(vVar0, &Local_70, &(Local_70.f_1));
	return true;
}

bool func_303(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_304(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_111599, 9))
		{
			if ((!func_303("DARTS_SHT_USE") && !func_303("DARTS_INSTR_W")) && !func_303("DARTS_INSTR_B"))
			{
				func_418("DARTS_AIM_HLP", -1);
				UNK_0x5D96D8530B3D0904(&Global_111599, 9);
			}
		}
		else if (bParam1 && !UNK_0xEAE0D21A50E6C7F4(Global_111599, 7))
		{
			if ((!func_303("DARTS_AIM_HLP") && !func_303("DARTS_INSTR_W")) && !func_303("DARTS_INSTR_B"))
			{
				func_418("DARTS_CLOCK", -1);
				UNK_0x5D96D8530B3D0904(&Global_111599, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_111599, 8))
		{
			if ((!func_303("DARTS_SHT_USE") && !func_303("DARTS_INSTR_W")) && !func_303("DARTS_INSTR_B"))
			{
				func_418("DARTS_STD_HLP", -1);
				UNK_0x5D96D8530B3D0904(&Global_111599, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!bLocal_96 && !func_303("DARTS_SHT_USE")) && !func_303("DARTS_INSTR_W")) && !func_303("DARTS_INSTR_B"))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111599, 2))
			{
				func_418("DARTS_FST_HLP", -1);
				UNK_0x5D96D8530B3D0904(&Global_111599, 2);
			}
			bLocal_96 = true;
		}
	}
}

bool func_305(int iParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;

	switch (*uParam2)
	{
		case 0:
			vVar0 = { func_308(iParam0) };
			*uParam3 = { UNK_0x68E4ADDDDCD7BDDE(*uParam1, vVar0) };
			func_307(*uParam3);
			SYSTEM::SETTIMERB(0);
			*uParam2 = 1;
			break;
		case 1:
			if (SYSTEM::TIMERB() > 3000 || UNK_0xBFC0798A6E3417F9(2, 201))
			{
				func_306();
				*uParam2 = 0;
				return true;
			}
			break;
	}
	return false;
}

void func_306()
{
	UNK_0xF1E4C781086FABC1(iLocal_120, iLocal_132, 2000, 1, 1);
	UNK_0x9A8DDC7C522F5BF5(iLocal_132, 0);
}

void func_307(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { -5.5606f, -0.0106f, -131.6781f };
	iLocal_132 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vParam0, vVar0, 65f, 0, 2);
	UNK_0xF1E4C781086FABC1(iLocal_132, iLocal_120, 2000, 1, 1);
}

Vector3 func_308(int iParam0)
{
	float fVar0;
	vector3 vVar1;

	if (iParam0 == 50)
	{
		vVar1 = { 0f, -0.5f, 0f };
	}
	else
	{
		fVar0 = func_311(iParam0);
		vVar1.f_1 = -0.5f;
		vVar1.x = func_310(fVar0);
		vVar1.f_2 = func_309(fVar0);
	}
	return vVar1;
}

float func_309(float fParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = 0.218f;
	fVar1 = (SYSTEM::COS(fParam0) * fVar0);
	return fVar1;
}

float func_310(float fParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = 0.218f;
	fVar1 = (SYSTEM::SIN(fParam0) * fVar0);
	return fVar1;
}

float func_311(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = (iParam0 / 2);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar1 == iLocal_33[iVar0])
		{
			fVar3 = fVar2;
		}
		fVar2 = (fVar2 + 18f);
		iVar0++;
	}
	return fVar3;
}

bool func_312(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (UNK_0x06F8112AA79C53D9(2, 228))
			{
				func_319(1);
				*uParam0 = 1;
			}
			else
			{
				return false;
			}
			break;
		case 1:
			if (UNK_0x06F8112AA79C53D9(2, 228))
			{
				if (!UNK_0xFA06B985B30FB0FC(iLocal_129))
				{
					func_317();
					func_316(&iLocal_303, vLocal_334, vLocal_337, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
		case 2:
			if (!UNK_0x06F8112AA79C53D9(2, 228))
			{
				*uParam0 = 3;
			}
			else
			{
				func_313(&iLocal_303, 1, 1, 0, 0, 1045220557 /* Float: 0.2f */, 0, 1065353216 /* Float: 1f */, 0);
			}
			break;
		case 3:
			func_319(0);
			func_499();
			if (UNK_0x9F4FE516EAACCFC5(iLocal_303))
			{
				if (UNK_0xFBB4F23D534EB790(iLocal_303))
				{
					UNK_0xE3BB8E05FCEB3FBE(iLocal_303, false);
				}
				UNK_0x9A8DDC7C522F5BF5(iLocal_303, 0);
			}
			*uParam0 = 0;
			return false;
	}
	return true;
}

void func_313(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	int iVar0[4];
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	vector3 vVar10;
	int iVar13;
	int iVar14;

	UNK_0xA2E3EDD0E119882F(2);
	func_315(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (UNK_0x89DF0B812BA6383B())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (UNK_0x91E3F625EF57450D(2))
	{
		fVar5 = UNK_0x659FAE9DBE6F38F5(2, 239);
		fVar6 = UNK_0x659FAE9DBE6F38F5(2, 240);
		fVar7 = (fVar5 - iParam0->f_29);
		fVar8 = (fVar6 - iParam0->f_30);
		iParam0->f_29 = fVar5;
		iParam0->f_30 = fVar6;
		if (bParam4)
		{
			iVar0[2] = -SYSTEM::ROUND(((fVar7 * fParam5) * 127f));
			iVar0[3] = -SYSTEM::ROUND(((fVar8 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = SYSTEM::ROUND(((UNK_0x659FAE9DBE6F38F5(2, 290) * fParam5) * 127f));
			iVar0[3] = SYSTEM::ROUND(((UNK_0x659FAE9DBE6F38F5(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_314((iVar0[2] + iParam0->f_24), -127, 127);
		iVar0[3] = func_314((iVar0[3] + iParam0->f_25), -127, 127);
	}
	if (iParam0->f_24 == iVar0[2] && iParam0->f_25 == iVar0[3])
	{
		if (iParam0->f_27 < UNK_0x1C0640BA9A7327B3())
		{
			iParam0->f_24 = 0;
			iParam0->f_25 = 0;
			if (UNK_0x91E3F625EF57450D(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				iParam0->f_28 = 1;
			}
		}
	}
	else
	{
		iParam0->f_24 = iVar0[2];
		iParam0->f_25 = iVar0[3];
		iParam0->f_27 = UNK_0x1C0640BA9A7327B3() + 4000;
		iParam0->f_28 = 0;
	}
	if (bParam2)
	{
		iParam0->f_8.f_2 = (-(SYSTEM::TO_FLOAT(iVar0[2]) / 127f) * IntToFloat(iParam0->f_20));
		iParam0->f_8.f_1 = ((-iParam0->f_8.f_2 * IntToFloat(iParam0->f_22)) / IntToFloat(iParam0->f_20));
		iParam0->f_8 = (-(SYSTEM::TO_FLOAT(iVar0[3]) / 127f) * IntToFloat(iParam0->f_21));
	}
	else
	{
		iParam0->f_8 = { 0f, 0f, 0f };
		iParam0->f_24 = 0;
		iParam0->f_25 = 0;
	}
	fVar9 = (30f * SYSTEM::TIMESTEP());
	vVar10 = { iParam0->f_8 + iParam0->f_11 };
	if ((UNK_0x91E3F625EF57450D(2) && bParam2) && !iParam0->f_28)
	{
		iParam0->f_14 = vVar10.x;
		iParam0->f_14.f_1 = vVar10.y;
		iParam0->f_14.f_2 = vVar10.z;
	}
	else
	{
		iParam0->f_14 = (iParam0->f_14 + func_14(((((vVar10.x - iParam0->f_14) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		iParam0->f_14.f_1 = (iParam0->f_14.f_1 + func_14(((((vVar10.y - iParam0->f_14.f_1) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		iParam0->f_14.f_2 = (iParam0->f_14.f_2 + func_14(((((vVar10.z - iParam0->f_14.f_2) * 0.05f) * fVar9) * fParam7), -3f, 3f));
	}
	if (iParam0->f_26)
	{
		iParam0->f_14 = func_14(iParam0->f_14, SYSTEM::TO_FLOAT(-iParam0->f_21), SYSTEM::TO_FLOAT(iParam0->f_21));
		iParam0->f_14.f_1 = func_14(iParam0->f_14.f_1, SYSTEM::TO_FLOAT(-iParam0->f_22), SYSTEM::TO_FLOAT(iParam0->f_22));
		iParam0->f_14.f_2 = func_14(iParam0->f_14.f_2, SYSTEM::TO_FLOAT(-iParam0->f_20), SYSTEM::TO_FLOAT(iParam0->f_20));
	}
	if (UNK_0x91E3F625EF57450D(0) && bParam1)
	{
		if (iParam0->f_28)
		{
			iParam0->f_17 = iParam0->f_7;
		}
	}
	else
	{
		iParam0->f_17 = iParam0->f_7;
	}
	if (bParam1)
	{
		if (UNK_0x91E3F625EF57450D(0))
		{
			iVar13 = 40;
			iVar14 = 41;
			if (bParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (UNK_0xD245978525608929(0, iVar13))
			{
				iParam0->f_17 = (iParam0->f_17 - 5f);
				iParam0->f_27 = UNK_0x1C0640BA9A7327B3() + 4000;
				iParam0->f_28 = 0;
			}
			else if (UNK_0xD245978525608929(0, iVar14))
			{
				iParam0->f_17 = (iParam0->f_17 + 5f);
				iParam0->f_27 = UNK_0x1C0640BA9A7327B3() + 4000;
				iParam0->f_28 = 0;
			}
			if (bParam3)
			{
				iParam0->f_17 = func_14(iParam0->f_17, (iParam0->f_7 - iParam0->f_19), iParam0->f_7);
			}
			else
			{
				iParam0->f_17 = func_14(iParam0->f_17, (iParam0->f_7 - iParam0->f_19), (iParam0->f_7 + iParam0->f_19));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = UNK_0x0DED1C1B8250FA57(2, 207);
			iVar0[3] = UNK_0x0DED1C1B8250FA57(2, 208);
			if (bParam3)
			{
				if (SYSTEM::TO_FLOAT(iVar0[3]) > 127f)
				{
					iParam0->f_17 = (iParam0->f_17 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * (iParam0->f_19 / 2f)))));
				}
			}
			else
			{
				iParam0->f_17 = (iParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * iParam0->f_19))));
				iParam0->f_17 = (iParam0->f_17 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * iParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(iVar0[1]) < 0f)
			{
				iParam0->f_17 = (iParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * iParam0->f_19))));
			}
		}
		else
		{
			iParam0->f_17 = (iParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * iParam0->f_19))));
		}
	}
	iParam0->f_18 = (iParam0->f_18 + (((iParam0->f_17 - iParam0->f_18) * 0.06f) * fVar9));
	UNK_0x86F44313DFA8F00C(*iParam0, iParam0->f_1, iParam0->f_4 + iParam0->f_14, iParam0->f_18, 0, 1, 1, 2);
	if (UNK_0x9F4FE516EAACCFC5(*iParam0))
	{
		if (UNK_0xFBB4F23D534EB790(*iParam0))
		{
			if (UNK_0x9CF8D5C7090408A2(*iParam0))
			{
				UNK_0x9501364A300048C6();
			}
		}
	}
}

int func_314(int iParam0, int iParam1, int iParam2)
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

void func_315(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = SYSTEM::FLOOR((UNK_0x659FAE9DBE6F38F5(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((UNK_0x659FAE9DBE6F38F5(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((UNK_0x659FAE9DBE6F38F5(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((UNK_0x659FAE9DBE6F38F5(2, 221) * 127f));
	if (bParam4)
	{
		if (!UNK_0x718E6F84AA2510BB(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((UNK_0x8A6BC5D9CAEACD0F(2, 218) * 127f));
		}
		if (!UNK_0x718E6F84AA2510BB(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((UNK_0x8A6BC5D9CAEACD0F(2, 219) * 127f));
		}
		if (!UNK_0x718E6F84AA2510BB(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((UNK_0x8A6BC5D9CAEACD0F(2, 220) * 127f));
		}
		if (!UNK_0x718E6F84AA2510BB(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((UNK_0x8A6BC5D9CAEACD0F(2, 221) * 127f));
		}
	}
	if (UNK_0x91E3F625EF57450D(2))
	{
		if (bParam5)
		{
			if (UNK_0x89DF0B812BA6383B())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (UNK_0x8EB1E94243F14479())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_316(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iParam0->f_1 = { vParam1 };
	iParam0->f_4 = { vParam4 };
	iParam0->f_7 = fParam7;
	iParam0->f_20 = iParam8;
	iParam0->f_21 = iParam9;
	iParam0->f_22 = iParam10;
	iParam0->f_8 = { 0f, 0f, 0f };
	iParam0->f_11 = { 0f, 0f, 0f };
	iParam0->f_14 = { 0f, 0f, 0f };
	iParam0->f_17 = fParam7;
	iParam0->f_18 = fParam7;
	iParam0->f_23 = iParam12;
	iParam0->f_19 = fParam11;
	*iParam0 = UNK_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
	UNK_0xE3BB8E05FCEB3FBE(*iParam0, true);
	UNK_0x86F44313DFA8F00C(*iParam0, iParam0->f_1, iParam0->f_4, iParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		UNK_0x91F5B0244AAE6222(*iParam0, "HAND_SHAKE", 0.19f);
	}
	UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	if (fParam14 > 0f)
	{
		UNK_0xDC3CC6D1845B0567(*iParam0, fParam14);
	}
	if (iParam0->f_23)
	{
		UNK_0x3B05E4399DC8490C(iParam13);
	}
	iParam0->f_24 = 0;
	iParam0->f_25 = 0;
	iParam0->f_29 = 0f;
	iParam0->f_30 = 0f;
	iParam0->f_26 = 0;
	iParam0->f_28 = 0;
	iParam0->f_27 = 0;
}

void func_317()
{
	if (bLocal_259)
	{
		return;
	}
	func_318();
	UNK_0x6787351639998696("Darts Zoom");
	bLocal_259 = true;
}

void func_318()
{
	if (bLocal_258 || bLocal_259)
	{
		UNK_0xA68C4874B560B1C0();
		bLocal_258 = false;
		bLocal_259 = false;
	}
}

void func_319(bool bParam0)
{
	if (bParam0)
	{
		UNK_0xF1E4C781086FABC1(iLocal_129, iLocal_120, 1000, 1, 1);
	}
	else
	{
		UNK_0xF1E4C781086FABC1(iLocal_120, iLocal_129, 1000, 1, 1);
	}
}

void func_320(var uParam0)
{
	if (uParam0->f_679)
	{
		if (uParam0->f_681 == 2)
		{
			uParam0->f_681 = 0;
		}
		uParam0->f_679 = 0;
	}
	switch (uParam0->f_681)
	{
		case 0:
			func_241(&(uParam0->f_62), func_322(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
		case 1:
			if (!func_236(&(uParam0->f_62), 0))
			{
				func_321(&(uParam0->f_62));
				uParam0->f_681 = 2;
			}
			break;
		case 2:
			break;
	}
}

void func_321(var uParam0)
{
	uParam0->f_8 = 0;
	func_421(&(uParam0->f_2));
	func_421(&(uParam0->f_5));
}

bool func_322(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DARTS_180_SPLSH";
		case 1:
			return "DARTS_BE_SPLSH";
		default:
			break;
	}
	return "DARTS_BE_SPLSH";
}

void func_323(var uParam0)
{
	if (!bLocal_99)
	{
		if (!UNK_0x06F8112AA79C53D9(2, 201))
		{
			bLocal_99 = true;
		}
	}
	if ((bLocal_30 == 1 && iLocal_31 < 3) && *uParam0 != 5)
	{
		if ((UNK_0x06F8112AA79C53D9(2, 201) || UNK_0xBFC0798A6E3417F9(2, 223)) && bLocal_99)
		{
			*uParam0 = 6;
		}
	}
}

void func_324(var uParam0, bool bParam1)
{
	if (!UNK_0x798A3F1296751F46())
	{
		if (bParam1 == 0)
		{
			if (!func_3(&(uParam0->f_666), 15) && !iLocal_93 > 0)
			{
				func_120(&(uParam0->f_509), 0, 0, 0, 1);
				func_119(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_119(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_325(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_119(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_119(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_119(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_116(&(uParam0->f_509), 1);
				func_331(&(uParam0->f_666), 8, 0);
				func_331(&(uParam0->f_666), 16, 0);
				func_331(&(uParam0->f_666), 23, 0);
			}
			else if (iLocal_93 > 0 && !func_3(&(uParam0->f_666), 17))
			{
				func_120(&(uParam0->f_509), 0, 0, 0, 1);
				func_119(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_119(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_325(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_119(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_119(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_116(&(uParam0->f_509), 1);
				func_331(&(uParam0->f_666), 8, 0);
				func_331(&(uParam0->f_666), 16, 0);
				func_331(&(uParam0->f_666), 23, 0);
			}
		}
		else if (!func_3(&(uParam0->f_666), 16))
		{
			func_120(&(uParam0->f_509), 1, 0, 0, 1);
			func_119(&(uParam0->f_509), "DARTS_SKIP", 2, 223, 1, 1, 0);
			func_119(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_116(&(uParam0->f_509), 1);
			func_331(&(uParam0->f_666), 16, 1);
			func_331(&(uParam0->f_666), 8, 0);
			func_331(&(uParam0->f_666), 15, 0);
			func_331(&(uParam0->f_666), 17, 0);
			func_331(&(uParam0->f_666), 23, 0);
		}
		UNK_0xD02CE72B4B66DC29(76, 66);
		UNK_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
		UNK_0xD59EF13BB60323B9();
		func_199(func_115(func_3(&(uParam0->f_666), 16), 1, 2));
		func_122(&(uParam0->f_509), 200f, 1, 0, 0, 1065353216 /* Float: 1f */);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_331(&(uParam0->f_666), 15, 0);
		func_331(&(uParam0->f_666), 16, 0);
		func_331(&(uParam0->f_666), 23, 0);
	}
}

int func_325(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = uParam0->f_123;
	if (iVar0 < 8)
	{
		uParam0->f_2[iVar0 /*15*/] = sParam1;
		uParam0->f_2[iVar0 /*15*/].f_1 = 0;
		uParam0->f_2[iVar0 /*15*/].f_2 = iParam5;
		uParam0->f_2[iVar0 /*15*/].f_12 = 0;
		uParam0->f_2[iVar0 /*15*/].f_13 = 0;
		uParam0->f_2[iVar0 /*15*/].f_14 = 0;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		UNK_0x5D96D8530B3D0904(&(uParam0->f_2[iVar0 /*15*/].f_12), false);
		if (iParam4 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_2[iVar0 /*15*/].f_13), false);
		}
		uParam0->f_2[iVar0 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_326(var uParam0)
{
	if (!UNK_0x798A3F1296751F46())
	{
		if (!func_3(&(uParam0->f_666), 23))
		{
			func_120(&(uParam0->f_509), 0, 0, 0, 1);
			func_325(&(uParam0->f_509), "IB_MAPMOVE", 2, 21, 1, 0);
			func_119(&(uParam0->f_509), "IB_ZOOM", 2, 39, 1, 1, 0);
			func_116(&(uParam0->f_509), 1);
			func_331(&(uParam0->f_666), 23, 1);
			func_331(&(uParam0->f_666), 8, 0);
			func_331(&(uParam0->f_666), 16, 0);
			func_331(&(uParam0->f_666), 15, 0);
			func_331(&(uParam0->f_666), 17, 0);
		}
		func_122(&(uParam0->f_509), 1128792064 /* Float: 200f */, 1, 0, 1, 1065353216 /* Float: 1f */);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_331(&(uParam0->f_666), 15, 0);
		func_331(&(uParam0->f_666), 16, 0);
		func_331(&(uParam0->f_666), 23, 0);
		func_331(&(uParam0->f_666), 17, 0);
	}
}

void func_327(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!bLocal_99)
	{
		if (!UNK_0x06F8112AA79C53D9(2, 201) && !UNK_0x06F8112AA79C53D9(2, 202))
		{
			bLocal_99 = true;
		}
		else
		{
			bLocal_99 = false;
		}
	}
	if (*uParam0 != 13)
	{
		if (bVar0)
		{
			if (bLocal_99 && bLocal_98 == 0)
			{
				bLocal_99 = false;
				bVar0 = false;
				bLocal_274 = false;
				UNK_0xA37A90C62806D848(1);
			}
		}
		if (UNK_0xB9132A06AE472728(2, 235) || UNK_0x9A01369A10646AFE(2, 235))
		{
			if (!bLocal_274)
			{
				*uParam0 = 14;
				bLocal_274 = true;
				UNK_0xA37A90C62806D848(1);
			}
		}
		else if (func_303("DARTS_QUIT"))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
			bLocal_274 = false;
		}
	}
}

void func_328(bool bParam0)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		func_4(bParam0, "DARTS_BOAST", 0, 4);
	}
}

float func_329(int iParam0)
{
	if (iParam0 < 10)
	{
		return 0.107f;
	}
	if (iParam0 < 25)
	{
		return 0.096f;
	}
	if (iParam0 < 50)
	{
		return 0.085f;
	}
	if (iParam0 < 70)
	{
		return 0.075f;
	}
	return 0.064f;
}

float func_330(int iParam0)
{
	if (iParam0 < 10)
	{
		return 0.08f;
	}
	if (iParam0 < 25)
	{
		return 0.072f;
	}
	if (iParam0 < 50)
	{
		return 0.064f;
	}
	if (iParam0 < 70)
	{
		return 0.056f;
	}
	return 0.048f;
}

void func_331(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(bParam0, bParam1);
	}
	else
	{
		UNK_0x0674E58A79778E99(bParam0, bParam1);
	}
}

bool func_332(int iParam0, bool bParam1)
{
	if (iParam0 >= 10)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18965.f_6, 12))
		{
			*bParam1 = 12;
			return true;
		}
	}
	return false;
}

bool func_333(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	while (bVar0 < 2)
	{
		iParam0->f_422[bVar0] = 301;
		iParam0->f_425[bVar0] = 301;
		bVar0++;
	}
	iParam0->f_454 = 0;
	bVar0 = false;
	while (bVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_244(&(iParam0->f_5[bVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		func_243(uParam1, bVar0);
		func_249(uParam1, bVar0, 301);
		bVar0++;
	}
	bLocal_30 = false;
	iLocal_31 = 0;
	iParam0->f_428 = 0;
	iParam0->f_249.f_3 = 0;
	iLocal_290 = 0;
	iParam0->f_436 = 0;
	iLocal_93 = 0;
	bLocal_267 = true;
	bLocal_268 = false;
	bLocal_270 = false;
	bLocal_95 = false;
	iParam0->f_458 = 0;
	iParam0->f_456 = 0;
	bLocal_276 = false;
	func_331(&(uParam2->f_666), 6, 0);
	func_339();
	func_337(uParam2);
	if (iParam0->f_457)
	{
		func_334(iParam0->f_457);
		iParam0->f_457 = 0;
	}
	return true;
}

void func_334(bool bParam0)
{
	UNK_0xBFE31971E49FA500(0);
	if (UNK_0xFBB4F23D534EB790(iLocal_122))
	{
		UNK_0xE3BB8E05FCEB3FBE(iLocal_122, false);
	}
	if (UNK_0xFBB4F23D534EB790(iLocal_126))
	{
		UNK_0xE3BB8E05FCEB3FBE(iLocal_126, false);
	}
	if (UNK_0x757EF87A33649210())
	{
		func_336();
		UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
		UNK_0x82E51BCA72537B6C(500);
	}
	func_335(bParam0);
}

void func_335(bool bParam0)
{
	if (bParam0)
	{
		UNK_0xE3BB8E05FCEB3FBE(iLocal_120, true);
	}
}

void func_336()
{
	UNK_0xE3BB8E05FCEB3FBE(iLocal_122, true);
}

void func_337(var uParam0)
{
	func_338();
	uParam0->f_670 = 3;
	func_331(&(uParam0->f_666), 15, 0);
	func_331(&(uParam0->f_666), 16, 0);
	func_331(&(uParam0->f_666), 17, 0);
}

void func_338()
{
	int iVar0;

	Local_164.f_66 = -1;
	Local_164.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_164.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_164.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_164.f_9[iVar0 /*7*/].f_5 = 0;
		Local_164.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_164.f_5 = 0;
	Local_164.f_5.f_1 = -1f;
	Local_164.f_5.f_2 = 0;
	Local_164 = 0;
	Local_164.f_1 = 0;
}

void func_339()
{
	SYSTEM::SETTIMERA(0);
	bLocal_99 = false;
	UNK_0xCB7A8856533F691C();
}

void func_340(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_342(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8417)
	{
		UNK_0xA5E3ADAAA4CD5D6C(15);
		Global_22350.f_8417 = 0;
	}
	UNK_0xD668DA5CA4A1D2C8(0f);
	if (Global_22350.f_5628[iVar0])
	{
		UNK_0x11CCD0ACA866C6C5(9, 0);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		UNK_0xF5A41F3D3B38EFE3("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		UNK_0xF5A41F3D3B38EFE3("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_341(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_341(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (UNK_0x83D8570832F172A7(*iParam0))
		{
			UNK_0xE17FDF9E3068281B(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

bool func_342(int iParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;

	if (iParam2 == -1)
	{
		if (UNK_0x8CD06866876216F2() && UNK_0x2E9F2B9C010D34D9())
		{
			iParam2 = UNK_0xF35A91B88CC1915F();
		}
	}
	StringCopy(&cVar0, UNK_0xBB0808A181D4745C(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = UNK_0x12AB0310C2281427(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*iParam0 = iVar17;
			return true;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*iParam0 = iVar18;
			return true;
		}
	}
	return false;
}

void func_343(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x3CAEA85DA607305E(bParam2);
	UNK_0x3CAEA85DA607305E(bParam3);
	UNK_0x3CAEA85DA607305E(bParam4);
	UNK_0x7E60D21B163E9D56();
}

bool func_344(var uParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	UNK_0x38C3A68D7861DCFD(2, 200, 1);
	if (!func_3(&(uParam0->f_666), 7))
	{
		func_401(0, 0, 0, 1);
		func_400(0, -1, 1);
		if (func_399())
		{
			if (Global_4268497 == uParam0->f_660)
			{
				iVar1 = 1;
			}
			else
			{
				uParam0->f_660 = Global_4268497;
				func_398(uParam0->f_660, 1, 1);
				UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				switch (uParam0->f_660)
				{
					case 0:
						bVar0 = "DARTS_LEGD";
						break;
					case 1:
						bVar0 = "DARTS_SETD";
						break;
					case 2:
						bVar0 = "";
						break;
				}
				if (UNK_0xEF07223F00EBE9C9(bVar0))
				{
					func_397(bVar0, 0, 0);
				}
			}
			Global_4268498 = UNK_0x1C0640BA9A7327B3() + 300;
		}
		else if (func_396() && UNK_0x1C0640BA9A7327B3() > Global_4268498)
		{
			if (Global_4268497 == uParam0->f_660)
			{
				iVar2 = func_395(0);
				if (iVar2 == -1 || iVar2 == 1)
				{
					iVar1 = 1;
				}
			}
			Global_4268498 = UNK_0x1C0640BA9A7327B3() + 300;
		}
		if (func_394(&(uParam0->f_639)))
		{
			uParam0->f_660 = (uParam0->f_660 - 1);
			if (uParam0->f_660 < 0)
			{
				uParam0->f_660 = (uParam0->f_661 - 1);
			}
			func_398(uParam0->f_660, 1, 1);
			UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_660)
			{
				case 0:
					bVar0 = "DARTS_LEGD";
					break;
				case 1:
					bVar0 = "DARTS_SETD";
					break;
				case 2:
					bVar0 = "";
					break;
			}
			if (UNK_0xEF07223F00EBE9C9(bVar0))
			{
				func_397(bVar0, 0, 0);
			}
		}
		if (func_393(&(uParam0->f_642)))
		{
			uParam0->f_660++;
			if (uParam0->f_660 > (uParam0->f_661 - 1))
			{
				uParam0->f_660 = 0;
			}
			func_398(uParam0->f_660, 1, 1);
			UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_660)
			{
				case 0:
					bVar0 = "DARTS_LEGD";
					break;
				case 1:
					bVar0 = "DARTS_SETD";
					break;
				case 2:
					bVar0 = "";
					break;
			}
			if (UNK_0xEF07223F00EBE9C9(bVar0))
			{
				func_397(bVar0, 0, 0);
			}
		}
		if (func_392(&(uParam0->f_633)) || func_391(&(uParam0->f_633), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662 = (uParam0->f_662 - 1);
				if (uParam0->f_662 < 0)
				{
					uParam0->f_662 = (uParam0->f_663 - 1);
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664 = (uParam0->f_664 - 1);
				if (uParam0->f_664 < 0)
				{
					uParam0->f_664 = (uParam0->f_665 - 1);
				}
			}
			UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_377(uParam0);
		}
		if (func_376(&(uParam0->f_636)) || func_374(&(uParam0->f_636), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662++;
				if (uParam0->f_662 > (uParam0->f_663 - 1))
				{
					uParam0->f_662 = 0;
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664++;
				if (uParam0->f_664 > (uParam0->f_665 - 1))
				{
					uParam0->f_664 = 0;
				}
			}
			UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_377(uParam0);
		}
		if ((UNK_0xBFC0798A6E3417F9(2, 201) || iVar1 == 1) && uParam0->f_660 == 2)
		{
			*uParam1 = func_373(uParam0->f_662 + 1, 1);
			*uParam2 = func_373(uParam0->f_664 + 1, 0);
			UNK_0x4D7F4CC43D4D0DE3(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			return true;
		}
		func_347(1, -1, 1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1);
		if (UNK_0xB9132A06AE472728(2, 202) || func_346())
		{
			func_345(0, 0);
			func_331(&(uParam0->f_666), 8, 0);
			func_331(&(uParam0->f_666), 7, 1);
		}
	}
	else
	{
		func_2(uParam0);
		if (UNK_0xB9132A06AE472728(2, 201))
		{
			func_36(0);
			*uParam1 = -1;
			return true;
		}
		else if (UNK_0xB9132A06AE472728(2, 202))
		{
			func_377(uParam0);
			func_331(&(uParam0->f_666), 7, 0);
		}
	}
	return false;
}

void func_345(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22350.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22350.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2461220[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_5089[iVar0] = 0;
		Global_22350.f_5227[iVar0] = 0;
		Global_22350.f_5356[iVar0] = 0;
		Global_22350.f_5879[iVar0] = 0f;
		Global_22350.f_5485[iVar0] = 0;
		Global_22350.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22350.f_5056[iVar0] = 0;
		Global_22350.f_5068[iVar0] = 0f;
		Global_22350.f_5062[iVar0] = -1f;
		Global_22350.f_5075[iVar0] = 0;
		Global_22350.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0 /*4*/]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22350.f_6020[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22350.f_7029[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22350.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	Global_22350 = 0;
	Global_22350.f_5218 = 0;
	Global_22350.f_5219 = 0;
	Global_22350.f_5220 = 0;
	Global_22350.f_5222 = 0;
	Global_22350.f_5223 = 0;
	Global_22350.f_5224 = 0;
	Global_22350.f_5221 = 0;
	Global_22350.f_5874 = 0;
	Global_22350.f_6014 = 0;
	Global_22350.f_5739 = 0;
	Global_22350.f_5738 = 0;
	Global_22350.f_5740 = 0;
	StringCopy(&(Global_22350.f_4690), "", 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = 0;
	Global_22350.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_4768 = 0;
	StringCopy(&(Global_4268421.f_21), "", 16);
	Global_4268421.f_61 = 0;
	Global_4268421.f_62 = 0;
	Global_4268421.f_63 = 0;
	Global_4268421.f_64 = 0;
	Global_4268421.f_65 = 0;
	Global_4268421.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4268421.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4268421.f_67 = 0;
	StringCopy(&(Global_22350.f_1), "", 16);
	Global_22350.f_5074 = 0f;
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_5744 = 0;
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = 0;
	Global_22350.f_5742 = 0;
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	Global_22350.f_5225 = 10;
	Global_22350.f_5226 = 0;
	Global_22350.f_5876 = 0f;
	Global_22350.f_5877 = 0f;
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	Global_22350.f_5730 = 0f;
	Global_22350.f_5731 = 0;
	Global_22350.f_5733 = 0;
	Global_22350.f_5732 = 0;
	Global_22350.f_5734 = 0;
	Global_22350.f_5735 = 0;
	Global_22350.f_5736 = 0;
	Global_22350.f_5737 = 0;
	Global_22350.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22350.f_6008[iVar0] = -1;
		Global_22350.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22350.f_5081 = 0f;
	Global_22350.f_5052 = 0;
	Global_22350.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22350.f_6015)
	{
		Global_22350.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_8392 = 0;
	Global_22350.f_8387 = 0;
	Global_22350.f_8397 = 0;
	Global_22350.f_8402 = 0;
	Global_22350.f_8407 = 0;
	Global_22350.f_8409 = 0;
	Global_22350.f_8415 = 0;
	Global_22347 = 0.05f;
	Global_22348 = 0.05f;
	Global_22349 = 0.225f;
	fVar2 = UNK_0x33D480CCE15C991A(0);
	if (bParam0)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22349 = 0.225f;
	}
}

bool func_346()
{
	if (UNK_0x91E3F625EF57450D(2))
	{
		if (UNK_0xBFC0798A6E3417F9(2, 238))
		{
			return true;
		}
	}
	return false;
}

void func_347(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
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
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	bool bVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int iVar60;
	int iVar61;
	float fVar62;
	float fVar63;
	float fVar64;
	char cVar65[64];
	char cVar81[64];
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	bool bVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;

	if (!func_342(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_370(0, bParam6))
	{
		return;
	}
	UNK_0xD02CE72B4B66DC29(76, 84);
	UNK_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22350)
	{
		if (func_18(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar57 = fVar37;
			fVar58 = fVar36;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_22350 = 0;
		}
	}
	if (UNK_0x12AB0310C2281427(&(Global_22350.f_1)) == UNK_0x12AB0310C2281427("HIDE"))
	{
		fVar59 = Global_22348;
	}
	else
	{
		fVar59 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22349;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		UNK_0xE5AC5CA7914F5BAE(&iVar60, &iVar61);
		fVar63 = UNK_0x33D480CCE15C991A(0);
		if (func_20())
		{
			iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) * fVar63));
		}
		fVar64 = (SYSTEM::TO_FLOAT(iVar60) / SYSTEM::TO_FLOAT(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_20())
		{
			fVar62 = 1f;
		}
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar62));
		iVar61 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) / fVar62));
	}
	else
	{
		UNK_0x8A462DAA7D1D9008(&iVar60, &iVar61);
	}
	if (bParam3)
	{
		if (Global_22350.f_5218 <= 1)
		{
			func_366(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22350.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22350.f_5728)
		{
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_1)) == UNK_0x12AB0310C2281427("HIDE"))
			{
				fVar51 = Global_22348;
			}
			else
			{
				if (Global_22350)
				{
					StringCopy(&cVar65, func_24(29), 64);
					StringCopy(&cVar81, func_21(29, 1), 64);
					if (UNK_0x12AB0310C2281427(&(Global_22350.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_365(Global_22347, Global_22348, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						UNK_0x539E86AE011A8B38(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						UNK_0x539E86AE011A8B38(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22350.f_8387)
				{
					iVar1 = Global_22350.f_8383;
					iVar2 = Global_22350.f_8384;
					iVar3 = Global_22350.f_8385;
					bVar4 = Global_22350.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					bVar4 = 255;
				}
				func_365(Global_22347, (Global_22348 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, bVar4);
				fVar51 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
				if (UNK_0x12AB0310C2281427(&(Global_22350.f_1)) != 0)
				{
					func_364();
					UNK_0x070005E852D4C0E9(&(Global_22350.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22350.f_68)
					{
						if (Global_22350.f_5[iVar14] == 2)
						{
							UNK_0x6D99DF8263D35CE5(Global_22350.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22350.f_5[iVar14] == 3)
						{
							UNK_0x21994591120B91F0(Global_22350.f_14[iVar16], Global_22350.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22350.f_5[iVar14] == 1)
						{
							UNK_0x6B012227B3921E18(&(Global_22350.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 8)
						{
							UNK_0x6B012227B3921E18(&(Global_22350.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 5)
						{
							UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 6)
						{
							UNK_0x6B012227B3921E18(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 7)
						{
							UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 9)
						{
							UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					UNK_0xE0026608C37C7C41((Global_22347 + 0.00390625f), ((Global_22348 + fVar57) + 0.00416664f), 0);
				}
				if (Global_22350.f_5735)
				{
					func_364();
					func_362((((Global_22347 + fParam5) - 0.00390625f) - func_363("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_364();
						func_362((((Global_22347 + fParam5) - 0.00390625f) - func_363("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
					}
				}
			}
			iVar6 = Global_22350.f_5738;
			iVar9 = 0;
			fVar97 = fVar51;
			if (Global_22350.f_8397)
			{
				iVar1 = Global_22350.f_8393;
				iVar2 = Global_22350.f_8394;
				iVar3 = Global_22350.f_8395;
				bVar4 = Global_22350.f_8396;
			}
			else
			{
				UNK_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &bVar4);
			}
			while (iVar9 < Global_22350.f_5225 && iVar6 <= Global_22350.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22350.f_5485[iVar6])
					{
						if (Global_22350.f_5356[iVar6] && iVar6 != Global_22350.f_5738)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar56 = Global_22350.f_5745[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			UNK_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar97 + ((fVar51 - fVar97) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar97), 0f, 255, 255, 255, 255, 0);
			if (Global_22350.f_5731 > Global_22350.f_5225)
			{
				if (Global_22350.f_8402)
				{
					iVar1 = Global_22350.f_8398;
					iVar2 = Global_22350.f_8399;
					iVar3 = Global_22350.f_8400;
					bVar4 = Global_22350.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					bVar4 = 204;
				}
				func_365(Global_22347, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, bVar4);
				vVar38 = { UNK_0xDE43A059FBFFF38A("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar62));
				vVar38.f_1 = (vVar38.y * (0.5f / fVar62));
				if (Global_22350.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					bVar4 = 255;
				}
				else
				{
					UNK_0xA402F6C87C08815C(true, &iVar1, &iVar2, &iVar3, &bVar4);
				}
				UNK_0x539E86AE011A8B38("CommonMenu", "shop_arrows_upANDdown", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar62), ((vVar38.y / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, bVar4, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_4690)) != 0 && Global_22350.f_4766 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_22350.f_4768 != 0)
				{
					func_18(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_361(fVar42);
				UNK_0xA1868A78E3C3D56B(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						UNK_0x6D99DF8263D35CE5(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						UNK_0x21994591120B91F0(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						UNK_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						UNK_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14 = (iVar14 + 1);
				}
				iVar6 = UNK_0x5D2FD44A8C086959(fVar42, (fVar51 + 0.00277776f));
				UNK_0xA402F6C87C08815C(2, &iVar1, &iVar2, &iVar3, &bVar4);
				func_365(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, bVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					bVar4 = Global_22350.f_8406;
				}
				else
				{
					UNK_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &bVar4);
				}
				UNK_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, bVar4, 0);
				func_361(fVar42);
				UNK_0x070005E852D4C0E9(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						UNK_0x6D99DF8263D35CE5(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						UNK_0x21994591120B91F0(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						UNK_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						UNK_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 8)
					{
						UNK_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				UNK_0xE0026608C37C7C41(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_22350.f_4768 != 0)
				{
					func_18(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_360(Global_22350.f_4768, 1, &iVar47, &iVar48, &iVar49, &bVar50);
					UNK_0x539E86AE011A8B38(func_24(Global_22350.f_4768), func_21(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
				}
				fVar51 = (fVar51 + (((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22350.f_4766 > 0)
				{
					if ((UNK_0x1C0640BA9A7327B3() - Global_22350.f_4767) > Global_22350.f_4766)
					{
						StringCopy(&(Global_22350.f_4690), "", 24);
						Global_22350.f_4766 = -1;
					}
				}
			}
			if (UNK_0x12AB0310C2281427(&(Global_4268421.f_21)) != 0 && Global_4268421.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_4268421.f_67 != 0)
				{
					func_18(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_361(fVar42);
				UNK_0xA1868A78E3C3D56B(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						UNK_0x6D99DF8263D35CE5(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						UNK_0x21994591120B91F0(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UNK_0x5D2FD44A8C086959(fVar42, (fVar51 + 0.00277776f));
				UNK_0xA402F6C87C08815C(2, &iVar1, &iVar2, &iVar3, &bVar4);
				func_365(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, bVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					bVar4 = Global_22350.f_8406;
				}
				else
				{
					UNK_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &bVar4);
				}
				UNK_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, bVar4, 0);
				func_361(fVar42);
				UNK_0x070005E852D4C0E9(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						UNK_0x6D99DF8263D35CE5(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						UNK_0x21994591120B91F0(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				UNK_0xE0026608C37C7C41(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4268421.f_67 != 0)
				{
					func_18(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_360(Global_4268421.f_67, 1, &iVar47, &iVar48, &iVar49, &bVar50);
					UNK_0x539E86AE011A8B38(func_24(Global_4268421.f_67), func_21(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
				}
				fVar51 = (fVar51 + (((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4268421.f_65 > 0)
				{
					if ((UNK_0x1C0640BA9A7327B3() - Global_4268421.f_66) > Global_4268421.f_65)
					{
						StringCopy(&(Global_4268421.f_21), "", 16);
						Global_4268421.f_65 = -1;
					}
				}
			}
			func_355(iVar60, iParam1, bParam8, 0, 0, 0, bParam4, 1, 0);
			UNK_0xD02CE72B4B66DC29(76, 84);
			UNK_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22350.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_22350.f_5218;
			if (Global_22350.f_5729)
			{
				iVar98 = (Global_22350.f_5732 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_22350.f_5745[iVar6] != 0f)
				{
					fVar56 = Global_22350.f_5745[iVar6];
				}
				if (Global_22350.f_5729)
				{
					iVar6 = Global_22350.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22350.f_5738 && iVar9 < Global_22350.f_5225)
				{
					bVar33 = true;
					if (Global_22350.f_5739 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_22350.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22350.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22347 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_22350.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					bVar105 = 255;
					if (Global_22350.f_8409)
					{
						UNK_0xA402F6C87C08815C(Global_22350.f_8408, &iVar102, &iVar103, &iVar104, &bVar105);
					}
					else
					{
						UNK_0xA402F6C87C08815C(true, &iVar102, &iVar103, &iVar104, &bVar105);
					}
					UNK_0x539E86AE011A8B38("CommonMenu", "Gradient_Nav", (Global_22347 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, bVar105, 0);
					Global_22350.f_5877 = fVar35;
				}
				bVar8 = false;
				while (bVar8 < Global_22350.f_5226)
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_22350.f_5089[iVar6], bVar8) || Global_22350.f_5056[bVar8] == 5)
					{
						if (Global_22350.f_5729)
						{
							iVar19 = Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + bVar8)];
							iVar20 = Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + bVar8)];
							iVar21 = Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + bVar8)];
							iVar22 = Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + bVar8)];
							iVar23 = Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + bVar8)];
						}
						else
						{
							Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + bVar8)] = iVar19;
							Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + bVar8)] = iVar20;
							Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + bVar8)] = iVar21;
							Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + bVar8)] = iVar22;
							Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + bVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_22350.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + bVar8) == Global_22350.f_6008[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_22350.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + bVar8) == Global_22350.f_6008[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_22350.f_5062[bVar8] != -1f)
						{
							fVar34 = ((Global_22347 + 0.0046875f) + Global_22350.f_5062[bVar8]);
						}
						if ((bVar8 < 4 && Global_22350.f_5062[bVar8 + 1] != -1f) && fVar34 < Global_22350.f_5062[bVar8 + 1])
						{
							fVar46 = (Global_22350.f_5062[bVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_22347 + Global_22349) - 0.0046875f) - fVar34);
						}
						if ((Global_22350.f_5075[bVar8] && Global_22350.f_5874) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_22350.f_5056[bVar8])
						{
							case 0:
								break;
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_353(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
											UNK_0xBBA442527B4BB1A6(&(Global_22350.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0x6B012227B3921E18(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0x6D99DF8263D35CE5(Global_22350.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0x21994591120B91F0(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
										{
											fVar43 = UNK_0x79E367314AFBB5CA(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_18(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_22350.f_4433[(iVar22 + iVar14)] == 2 || Global_22350.f_4433[(iVar22 + iVar14)] == 51) || Global_22350.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_22350.f_5083[bVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[bVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar43;
										Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar44;
										if (Global_22350.f_5083[bVar8] == 2)
										{
											iVar101 = (bVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_22350.f_5083[iVar101] == 2)
												{
													Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] = (Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] - Global_22350.f_5068[bVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)];
										fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + bVar8)];
									}
									if (bVar54)
									{
										if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[bVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_360(26, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_24(26), func_21(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
										if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_360(27, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_24(27), func_21(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										func_353(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_352(bVar32);
										}
										UNK_0x070005E852D4C0E9(&(Global_22350.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0x6B012227B3921E18(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0x6D99DF8263D35CE5(Global_22350.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0x21994591120B91F0(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar28)] == 2 || Global_22350.f_4433[(iVar22 + iVar28)] == 51) || Global_22350.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_18(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_18(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_360(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &bVar50);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[bVar8] == 2)
															{
																UNK_0x539E86AE011A8B38(func_24(Global_22350.f_4433[(iVar22 + iVar28)]), func_21(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
															else
															{
																UNK_0x539E86AE011A8B38(func_24(Global_22350.f_4433[(iVar22 + iVar28)]), func_21(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22350.f_5083[bVar8] == 2)
										{
											UNK_0xE0026608C37C7C41(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											UNK_0xE0026608C37C7C41((fVar34 + fVar42), fVar35, 0);
											if (func_351() && UNK_0x8A22C4C08282BF26(joaat("FM_MISSION_CREATOR")) > 0)
											{
												if (bVar8 == 0)
												{
													func_353(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													UNK_0xD3539A877EC25E86(0f, (0.35f * 0.7f));
													UNK_0x7178F32F6742C936(255, 255, 255, 150);
													UNK_0xC1032CAC14DE468A((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), 0);
													UNK_0x070005E852D4C0E9(&cVar107);
													UNK_0x6D99DF8263D35CE5((Global_22350.f_5738 + iVar30));
													UNK_0xE0026608C37C7C41((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar14)] != 2 && Global_22350.f_4433[(iVar22 + iVar14)] != 51) && Global_22350.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_18(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_18(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_360(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &bVar50);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																UNK_0x539E86AE011A8B38(func_24(Global_22350.f_4433[(iVar22 + iVar14)]), func_21(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
															else if (Global_22350.f_5083[bVar8] == 2)
															{
																UNK_0x539E86AE011A8B38(func_24(Global_22350.f_4433[(iVar22 + iVar14)]), func_21(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
															else
															{
																UNK_0x539E86AE011A8B38(func_24(Global_22350.f_4433[(iVar22 + iVar14)]), func_21(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							case 2:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_353(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_352(bVar32);
										}
										UNK_0xBBA442527B4BB1A6("NUMBER");
										UNK_0x6D99DF8263D35CE5(Global_22350.f_3918[iVar20]);
										fVar43 = UNK_0x79E367314AFBB5CA(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[bVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[bVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)];
									}
									if (bVar54)
									{
										if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[bVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_360(26, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_24(26), func_21(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
										if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_360(27, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_24(27), func_21(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_353(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										func_350((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							case 3:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_353(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_352(bVar32);
										}
										UNK_0xBBA442527B4BB1A6("NUMBER");
										UNK_0x21994591120B91F0(Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
										fVar43 = UNK_0x79E367314AFBB5CA(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[bVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[bVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)];
									}
									if (bVar54)
									{
										if (func_18(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[bVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_360(26, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_24(26), func_21(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
										if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_360(27, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_24(27), func_21(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
									}
									func_353(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
									func_349((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							case 4:
								if (bVar33)
								{
									if (func_18(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22350.f_5729)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_22350.f_5083[bVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_22350.f_5083[bVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar42;
											Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)];
											fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + bVar8)];
										}
										if (bVar54)
										{
											if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[bVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_360(26, 1, &iVar47, &iVar48, &iVar49, &bVar50);
													if (iVar5 == 1)
													{
														UNK_0x539E86AE011A8B38(func_24(26), func_21(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
													}
												}
											}
											if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_360(27, 1, &iVar47, &iVar48, &iVar49, &bVar50);
													if (iVar5 == 1)
													{
														UNK_0x539E86AE011A8B38(func_24(27), func_21(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_18(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_360(Global_22350.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &bVar50);
												UNK_0x539E86AE011A8B38(func_24(Global_22350.f_4433[iVar22]), func_21(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_348(Global_22350.f_4433[iVar22])), (fVar37 * func_348(Global_22350.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, bVar50, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_22350.f_5056[bVar8] == 5)
						{
							if (Global_22350.f_5068[bVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22350.f_5068[bVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22350.f_5068[bVar8]);
							if (Global_22350.f_5075[bVar8])
							{
								if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22350.f_5068[bVar8]);
					}
					bVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_22350.f_8038[iVar9] = iVar6;
						Global_22350.f_5740 = iVar6;
						iVar9++;
						if (Global_22350.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_22350.f_5745[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_22350.f_5728)
					{
						Global_22350.f_5485[iVar6] = 1;
						if (Global_22350.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22350.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22350.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22350.f_5728)
			{
				Global_22350.f_5730 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_22350.f_5733 = iVar11;
				Global_22350.f_5731 = iVar10;
				Global_22350.f_5728 = 1;
			}
		}
		if (!Global_22350.f_5729)
		{
			Global_22350.f_5732 = iVar9;
			Global_22350.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22350.f_5876 = fVar51;
	Global_22350.f_5878 = UNK_0x1C0640BA9A7327B3();
	UNK_0xD668DA5CA4A1D2C8(Global_22350.f_5876);
	if (!Global_22350.f_8382)
	{
		func_38(0);
	}
	Global_22350.f_8382 = 0;
	if (bParam2)
	{
		UNK_0x3584F71E5CA29322(10);
	}
	UNK_0x3584F71E5CA29322(6);
	UNK_0x3584F71E5CA29322(7);
	UNK_0x3584F71E5CA29322(9);
	UNK_0x3584F71E5CA29322(8);
	if (bParam0)
	{
		func_199(1);
	}
	UNK_0xD59EF13BB60323B9();
}

float func_348(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
	}
	return 1f;
}

void func_349(float fParam0, float fParam1, bool bParam2, bool bParam3, int iParam4)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0x21994591120B91F0(bParam3, iParam4);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_350(float fParam0, float fParam1, bool bParam2, bool bParam3, int iParam4)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0x6D99DF8263D35CE5(bParam3);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_351()
{
	return UNK_0xC146D5FBD23C6954(-1762644250);
}

void func_352(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (bParam0)
	{
		UNK_0xA402F6C87C08815C(Global_22350.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		UNK_0xA402F6C87C08815C(Global_22350.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
}

void func_353(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (bParam2)
	{
		if (bParam3)
		{
			func_354(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					UNK_0xA402F6C87C08815C(true, &iVar0, &iVar1, &iVar2, &bVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				UNK_0xA402F6C87C08815C(14, &iVar0, &iVar1, &iVar2, &bVar3);
				UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				UNK_0xA402F6C87C08815C(12, &iVar0, &iVar1, &iVar2, &bVar3);
				UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			UNK_0x7178F32F6742C936(155, 155, 155, 255);
		}
		else
		{
			UNK_0x7178F32F6742C936(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			UNK_0x7178F32F6742C936(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			UNK_0xA402F6C87C08815C(true, &iVar0, &iVar1, &iVar2, &bVar3);
			UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, bVar3);
		}
	}
	else if (bParam0)
	{
		UNK_0x7178F32F6742C936(155, 155, 155, 255);
	}
	else
	{
		UNK_0x7178F32F6742C936(155, 155, 155, 255);
	}
	UNK_0xD3539A877EC25E86(0f, 0.35f);
	UNK_0xEEF67251E263A87F(1);
	if (bParam5)
	{
		UNK_0xD3539A877EC25E86(0f, 0.425f);
		UNK_0x7BBAC160090910C3(4);
	}
	else if (bParam6)
	{
		UNK_0xD3539A877EC25E86(0f, 0.425f);
		UNK_0x7BBAC160090910C3(6);
	}
	else
	{
		UNK_0x7BBAC160090910C3(0);
	}
	UNK_0xF1F881BAAAFB43B1(0f, 1f);
	UNK_0xAAE406A7DA443B93(0);
	UNK_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	UNK_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_354(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 8;
			*iParam2 = 8;
			*iParam3 = 8;
			break;
		case 1:
			*iParam1 = 37;
			*iParam2 = 37;
			*iParam3 = 39;
			break;
		case 22:
			*iParam1 = 140;
			*iParam2 = 146;
			*iParam3 = 154;
			break;
		case 23:
			*iParam1 = 91;
			*iParam2 = 93;
			*iParam3 = 94;
			break;
		case 6:
			*iParam1 = 81;
			*iParam2 = 84;
			*iParam3 = 89;
			break;
		case 111:
			*iParam1 = 240;
			*iParam2 = 240;
			*iParam3 = 240;
			break;
		case 28:
			*iParam1 = 150;
			*iParam2 = 8;
			*iParam3 = 0;
			break;
		case 34:
			*iParam1 = 38;
			*iParam2 = 3;
			*iParam3 = 6;
			break;
		case 88:
			*iParam1 = 245;
			*iParam2 = 137;
			*iParam3 = 15;
			break;
		case 45:
			*iParam1 = 74;
			*iParam2 = 22;
			*iParam3 = 7;
			break;
		case 56:
			*iParam1 = 45;
			*iParam2 = 58;
			*iParam3 = 53;
			break;
		case 58:
			*iParam1 = 71;
			*iParam2 = 120;
			*iParam3 = 60;
			break;
		case 54:
			*iParam1 = 77;
			*iParam2 = 98;
			*iParam3 = 104;
			break;
		case 73:
			*iParam1 = 14;
			*iParam2 = 49;
			*iParam3 = 109;
			break;
		case 68:
			*iParam1 = 22;
			*iParam2 = 34;
			*iParam3 = 72;
			break;
		case 140:
			*iParam1 = 0;
			*iParam2 = 174;
			*iParam3 = 239;
			break;
		case 131:
			*iParam1 = 255;
			*iParam2 = 183;
			*iParam3 = 0;
			break;
		case 90:
			*iParam1 = 142;
			*iParam2 = 140;
			*iParam3 = 70;
			break;
		case 97:
			*iParam1 = 156;
			*iParam2 = 141;
			*iParam3 = 113;
			break;
		case 89:
			*iParam1 = 145;
			*iParam2 = 115;
			*iParam3 = 71;
			break;
		case 105:
			*iParam1 = 98;
			*iParam2 = 68;
			*iParam3 = 40;
			break;
		case 100:
			*iParam1 = 124;
			*iParam2 = 27;
			*iParam3 = 68;
			break;
		case 99:
			*iParam1 = 114;
			*iParam2 = 42;
			*iParam3 = 63;
			break;
		case 136:
			*iParam1 = 246;
			*iParam2 = 151;
			*iParam3 = 153;
			break;
		case 49:
			*iParam1 = 32;
			*iParam2 = 32;
			*iParam3 = 44;
			break;
		case 146:
			*iParam1 = 26;
			*iParam2 = 1;
			*iParam3 = 23;
			break;
		default:
			*iParam1 = 255;
			*iParam2 = 255;
			*iParam3 = 255;
			break;
	}
}

void func_355(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	if (!func_342(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (bParam3 && !func_370(bParam4, bParam8))
	{
		return;
	}
	if (func_358())
	{
		return;
	}
	if (UNK_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_356(UNK_0xD803B885F5E47A62(), 0))
		{
			return;
		}
	}
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (UNK_0xDAC65F45B0B2D176() == 0 || UNK_0x4FD68D5821EE3E19())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (UNK_0xB8E3620B82AD47D7(2))
		{
			bVar1 = false;
			while (bVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[bVar1] != 361)
				{
					StringCopy(&(Global_22350.f_4771[bVar1 /*16*/]), UNK_0xF59058FCB716F903(2, Global_22350.f_5026[bVar1], true), 64);
				}
				else if (Global_22350.f_5039[bVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[bVar1 /*16*/]), UNK_0xE32F7AC5E6DF304A(2, Global_22350.f_5039[bVar1], true), 64);
				}
				bVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			UNK_0x7C19E5E4784BD7CF((1f - (Global_22350.f_5081 / 100f)));
			UNK_0x7E60D21B163E9D56();
			if (UNK_0x0EFF6B4415DAF4A1())
			{
				UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				UNK_0x1200CC973A2399C8(true);
				UNK_0x7E60D21B163E9D56();
			}
			bVar1 = false;
			while (bVar1 < Global_22350.f_4769)
			{
				if (UNK_0x12AB0310C2281427(&(Global_22350.f_4964[bVar1 /*4*/])) != UNK_0x12AB0310C2281427("PREV"))
				{
					UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(bVar1);
					func_13(&(Global_22350.f_4771[bVar1 /*16*/]));
					iVar2 = bVar1 + 1;
					while (iVar2 < 12 && UNK_0x12AB0310C2281427(&(Global_22350.f_4964[iVar2 /*4*/])) == UNK_0x12AB0310C2281427("PREV"))
					{
						func_13(&(Global_22350.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22350.f_5013[bVar1] == -1)
					{
						func_12(&(Global_22350.f_4964[bVar1 /*4*/]));
					}
					else
					{
						bVar3 = Global_22350.f_5013[bVar1];
						if (bParam2 >= 0)
						{
							bVar3 = bParam2;
						}
						UNK_0x7ACC3006A87F8B39(&(Global_22350.f_4964[bVar1 /*4*/]));
						if (bParam5)
						{
							UNK_0x164431059FF80580(bVar3, 70);
						}
						else
						{
							UNK_0x6D99DF8263D35CE5(bVar3);
						}
						UNK_0x779B34565F4D71B1();
					}
					if (UNK_0x0EFF6B4415DAF4A1())
					{
						if (Global_22350.f_5026[bVar1] != 361 && UNK_0xEAE0D21A50E6C7F4(Global_22350.f_5052, bVar1))
						{
							UNK_0x1200CC973A2399C8(true);
							UNK_0x3CAEA85DA607305E(Global_22350.f_5026[bVar1]);
						}
						else
						{
							UNK_0x1200CC973A2399C8(false);
							UNK_0x3CAEA85DA607305E(361);
						}
					}
					UNK_0x7E60D21B163E9D56();
				}
				bVar1++;
			}
			if (UNK_0x12AB0310C2281427(&(Global_4268421.f_16)) != UNK_0x12AB0310C2281427(""))
			{
				UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(Global_22350.f_4769);
				func_13(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_12(&(Global_4268421.f_16));
				}
				else
				{
					bVar4 = Global_22350.f_5013[bVar1];
					if (bParam2 >= 0)
					{
						bVar4 = bParam2;
					}
					UNK_0x7ACC3006A87F8B39(&(Global_4268421.f_16));
					if (bParam5)
					{
						UNK_0x164431059FF80580(bVar4, 70);
					}
					else
					{
						UNK_0x6D99DF8263D35CE5(bVar4);
					}
					UNK_0x779B34565F4D71B1();
				}
				UNK_0x7E60D21B163E9D56();
			}
			UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(80);
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				UNK_0x3CAEA85DA607305E(true);
			}
			else
			{
				UNK_0x3CAEA85DA607305E(false);
			}
			UNK_0x7E60D21B163E9D56();
			Global_22350.f_4770 = 1;
		}
		bVar1 = false;
		while (bVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[bVar1] != -1)
			{
				if (bParam2 > 0)
				{
					UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					UNK_0x3CAEA85DA607305E(bVar1);
					UNK_0x7ACC3006A87F8B39(&(Global_22350.f_4964[bVar1 /*4*/]));
					if (bParam5)
					{
						UNK_0x164431059FF80580(bParam2, 70);
					}
					else
					{
						UNK_0x6D99DF8263D35CE5(bParam2);
					}
					UNK_0x779B34565F4D71B1();
					UNK_0x7E60D21B163E9D56();
				}
			}
			bVar1++;
		}
		if (Global_4268421.f_20 != -1)
		{
			if (bParam2 > 0)
			{
				UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				UNK_0x3CAEA85DA607305E(bVar1);
				UNK_0x7ACC3006A87F8B39(&(Global_4268421.f_16));
				if (bParam5)
				{
					UNK_0x164431059FF80580(bParam2, 70);
				}
				else
				{
					UNK_0x6D99DF8263D35CE5(bParam2);
				}
				UNK_0x779B34565F4D71B1();
				UNK_0x7E60D21B163E9D56();
			}
		}
		UNK_0xD02CE72B4B66DC29(76, 66);
		UNK_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8417)
			{
				UNK_0x744B56EE9DE7B57F(15, 0f, -0.0375f);
				Global_22350.f_8417 = 1;
			}
		}
		else if (Global_22350.f_8417)
		{
			UNK_0xA5E3ADAAA4CD5D6C(15);
			Global_22350.f_8417 = 0;
		}
		UNK_0xD59EF13BB60323B9();
		if (Global_22350.f_5055)
		{
			UNK_0xD02CE72B4B66DC29(82, 66);
			UNK_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
			UNK_0xEF45C43067063F18(Global_22350.f_5660[iVar0 /*10*/], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			UNK_0xD59EF13BB60323B9();
		}
		else
		{
			UNK_0x6567AE843FADBA94(Global_22350.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_356(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_357(-1, 0) == 8;
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

int func_357(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_62();
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

bool func_358()
{
	vector3 vVar0;

	if (Global_19486.f_1 > 3)
	{
		return true;
	}
	if (func_359())
	{
		vVar0 = { 0f, -500f, 0f };
		UNK_0x1CFAC524932A967E(&vVar0);
		if (Global_19431 == 0)
		{
			if (vVar0.y > -119f)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (vVar0.y > -101f)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_359()
{
	if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		return true;
	}
	return false;
}

void func_360(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	UNK_0xA402F6C87C08815C(true, bParam2, bParam3, bParam4, bParam5);
	*bParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*bParam2 = 194;
			*bParam3 = 80;
			*bParam4 = 80;
			break;
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*bParam2 = 0;
				*bParam3 = 0;
				*bParam4 = 0;
			}
			break;
		case 54:
			*bParam5 = 100;
			break;
		case 62:
			*bParam5 = 100;
			break;
		case 55:
			UNK_0xA402F6C87C08815C(24, bParam2, bParam3, bParam4, bParam5);
			*bParam5 = 255;
			break;
	}
}

void func_361(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	UNK_0xA402F6C87C08815C(true, &iVar0, &iVar1, &iVar2, &bVar3);
	UNK_0x7BBAC160090910C3(0);
	UNK_0xD3539A877EC25E86(0f, 0.35f);
	UNK_0x4B9228CE1CF0DACA(2);
	UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, bVar3);
	UNK_0xF1F881BAAAFB43B1(fParam0, ((Global_22347 + Global_22349) - 0.0046875f));
	UNK_0xAAE406A7DA443B93(0);
	UNK_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	UNK_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_362(float fParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0x6D99DF8263D35CE5(bParam3);
	UNK_0x6D99DF8263D35CE5(bParam4);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

float func_363(bool bParam0, bool bParam1, bool bParam2)
{
	if (!UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		if (UNK_0x12AB0310C2281427(bParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_364();
	UNK_0xBBA442527B4BB1A6(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	UNK_0x6D99DF8263D35CE5(bParam2);
	return UNK_0x79E367314AFBB5CA(1);
}

void func_364()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	UNK_0xA402F6C87C08815C(true, &iVar0, &iVar1, &iVar2, &bVar3);
	if (Global_22350.f_8392)
	{
		iVar0 = Global_22350.f_8388;
		iVar1 = Global_22350.f_8389;
		iVar2 = Global_22350.f_8390;
		bVar3 = Global_22350.f_8391;
	}
	UNK_0x7BBAC160090910C3(0);
	UNK_0xD3539A877EC25E86(0f, 0.35f);
	UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, bVar3);
	UNK_0xF1F881BAAAFB43B1((Global_22347 + 0.0046875f), ((Global_22347 + Global_22349) - 0.0046875f));
	UNK_0xAAE406A7DA443B93(0);
	UNK_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	UNK_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_365(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	UNK_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, bParam7, 0);
}

void func_366(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;

	if (Global_22350.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22350.f_5218 >= 128)
	{
		return;
	}
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 < Global_22350.f_5741)
	{
		return;
	}
	if (Global_22350.f_5218 != iParam0)
	{
		Global_22350.f_5218 = iParam0;
		Global_22350.f_5219 = 0;
	}
	iVar0 = Global_22350.f_5056[Global_22350.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22350.f_5219 < 4 && iVar0 != 1)
		{
			Global_22350.f_5219++;
			iVar0 = Global_22350.f_5056[Global_22350.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]), bParam1, 24);
	if (!UNK_0xEA6BC48857E0AC4C(bParam1) && !UNK_0xEF07223F00EBE9C9(bParam1))
	{
	}
	Global_22350.f_1610[Global_22350.f_5220] = bParam3;
	Global_22350.f_1867[Global_22350.f_5220] = iParam4;
	Global_22350.f_5220++;
	if (!bParam3)
	{
		func_369(Global_22350.f_5218, 1);
	}
	else
	{
		func_369(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_368(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_18(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22350.f_5068[Global_22350.f_5219])
		{
			Global_22350.f_5068[Global_22350.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_367(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
			if (fVar4 > Global_22350.f_5745[iParam0])
			{
				Global_22350.f_5745[iParam0] = fVar4;
			}
		}
	}
	UNK_0x5D96D8530B3D0904(&(Global_22350.f_5089[iParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 1;
	Global_22350.f_5742 = (Global_22350.f_5220 - 1);
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = iParam2;
}

float func_367(bool bParam0)
{
	if (!UNK_0xEF07223F00EBE9C9(bParam0))
	{
	}
	return UNK_0x9153358B38685E6E(0.35f, 0);
}

float func_368(bool bParam0)
{
	if (!UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		if (UNK_0x12AB0310C2281427(bParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_353(0, 1, 0, 0, 0, 0, 0);
	UNK_0xBBA442527B4BB1A6(bParam0);
	return UNK_0x79E367314AFBB5CA(1);
}

void func_369(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

bool func_370(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return true;
	}
	if ((((((((!UNK_0x0F1CCD77290EE12F() || (func_372(8, -1) && func_371() != 65)) || (UNK_0x8BB17FEBE0394018() != 0 && !bParam1)) || (UNK_0x991B1F0980C62628() && !bParam0)) || UNK_0x590766B2AF637235()) || Global_76882) || Global_22350.f_8416) || UNK_0xE57E602827E07C9D()) || Global_98796.f_1417)
	{
		return false;
	}
	return true;
}

int func_371()
{
	return Global_1312812;
}

bool func_372(bool bParam0, int iParam1)
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

bool func_373(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return true;
			case 2:
				return 3;
			case 3:
				return 5;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return true;
			case 2:
				return 3;
			case 3:
				return 6;
			case 4:
				return 9;
			case 5:
				return 11;
			case 6:
				return 13;
			case 7:
				return 15;
			default:
				break;
		}
	}
	return false;
}

int func_374(bool bParam0, int iParam1, int iParam2)
{
	if (!UNK_0x91E3F625EF57450D(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_395(0) == 1 && Global_4268497 == iParam1)
	{
		if (!func_420(bParam0))
		{
			func_375(bParam0);
			return 1;
		}
		else if (func_7(bParam0) > 0.25f)
		{
			func_435(bParam0);
			return 1;
		}
	}
	else if (func_420(bParam0))
	{
		func_421(bParam0);
	}
	return 0;
}

void func_375(bool bParam0)
{
	if (!func_420(bParam0))
	{
		func_435(bParam0);
	}
}

int func_376(bool bParam0)
{
	float fVar0;

	fVar0 = 0f;
	if (!UNK_0x91E3F625EF57450D(2))
	{
		fVar0 = UNK_0x4F3973434662D795(2, 218);
	}
	if ((fVar0 > 0.8f || UNK_0x06F8112AA79C53D9(2, 190)) || UNK_0x7FEE810EE9E768EB(2, 190))
	{
		if (!func_420(bParam0))
		{
			func_375(bParam0);
			return 1;
		}
		else if (func_7(bParam0) > 0.25f)
		{
			func_435(bParam0);
			return 1;
		}
	}
	else if (func_420(bParam0))
	{
		func_421(bParam0);
	}
	return 0;
}

void func_377(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	func_345(0, 0);
	UNK_0xA402F6C87C08815C(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_390(uVar0, uVar1, uVar2, uVar3, 1);
	func_389(1, 2, 0, 0, 0);
	func_388(1, 2, 1, 1, 1);
	func_387(0, 1, 0, 0, 0);
	func_386("DARTS_TITLE");
	func_384(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_366(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_381(0, func_373(uParam0->f_662 + 1, 1), 0);
	func_366(1, "DARTS_SETS", 0, 1, 0, 0);
	func_381(1, func_373(uParam0->f_664 + 1, 0), 0);
	func_380(2, 141, 141, 1);
	func_366(2, "DARTS_START", 0, 1, 0, 0);
	func_379(0);
	func_398(uParam0->f_660, 1, 1);
	if (uParam0->f_660 != 2)
	{
		func_397(func_114(uParam0->f_660 == 0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
	}
	func_378(201, "ITEM_SELECT", -1, 0);
	func_378(202, "IB_QUIT", -1, 0);
}

void func_378(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;

	sVar0 = UNK_0xF59058FCB716F903(2, iParam0, true);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		UNK_0x5D96D8530B3D0904(&(Global_22350.f_5052), Global_22350.f_4769);
	}
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769 /*4*/]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_379(int iParam0)
{
	Global_22350.f_5738 = iParam0;
}

void func_380(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Global_22350.f_8413 = iParam3;
	Global_22350.f_8410[0] = iParam1;
	Global_22350.f_8410[1] = iParam2;
	Global_22350.f_8414 = iParam0;
}

void func_381(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;

	if (Global_22350.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22350.f_5218 >= 128)
	{
		return;
	}
	if (Global_22350.f_5222 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 < Global_22350.f_5741)
	{
		return;
	}
	if (Global_22350.f_5218 != iParam0)
	{
		Global_22350.f_5218 = iParam0;
		Global_22350.f_5219 = 0;
	}
	iVar0 = Global_22350.f_5056[Global_22350.f_5219];
	if (iVar0 != 2)
	{
		while (Global_22350.f_5219 < 4 && iVar0 != 2)
		{
			Global_22350.f_5219++;
			iVar0 = Global_22350.f_5056[Global_22350.f_5219];
		}
		if (iVar0 != 2)
		{
			return;
		}
	}
	Global_22350.f_3918[Global_22350.f_5222] = bParam1;
	Global_22350.f_5222++;
	fVar1 = func_383("NUMBER", bParam1);
	if (Global_22350.f_5075[Global_22350.f_5219])
	{
		func_18(26, 1, 0, &fVar2, &uVar3, 0);
		fVar1 = (fVar1 + (fVar2 * 2f));
	}
	if (fVar1 > Global_22350.f_5068[Global_22350.f_5219])
	{
		Global_22350.f_5068[Global_22350.f_5219] = fVar1;
	}
	if (bParam2)
	{
		fVar4 = func_382("NUMBER", bParam1);
		if (fVar4 > Global_22350.f_5745[iParam0])
		{
			Global_22350.f_5745[iParam0] = fVar4;
		}
	}
	UNK_0x5D96D8530B3D0904(&(Global_22350.f_5089[iParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 2;
}

float func_382(bool bParam0, bool bParam1)
{
	if (!UNK_0xEF07223F00EBE9C9(bParam0))
	{
	}
	if (bParam1 == 0)
	{
	}
	return UNK_0x9153358B38685E6E(0.35f, 0);
}

float func_383(bool bParam0, bool bParam1)
{
	if (!UNK_0xEF07223F00EBE9C9(bParam0))
	{
		return 0f;
	}
	func_353(1, 1, 0, 0, 0, 0, 0);
	UNK_0xBBA442527B4BB1A6(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	return UNK_0x79E367314AFBB5CA(1);
}

void func_384(int iParam0, char* sParam1, char* sParam2)
{
	Global_22350 = iParam0;
	func_385(29, sParam1, sParam2);
}

void func_385(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22350.f_6020[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_22350.f_7029[iParam0 /*16*/]), sParam2, 64);
}

void func_386(char* sParam0)
{
	int iVar0;

	StringCopy(&(Global_22350.f_1), sParam0, 16);
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_387(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5075[0] = iParam0;
	Global_22350.f_5075[1] = iParam1;
	Global_22350.f_5075[2] = iParam2;
	Global_22350.f_5075[3] = iParam3;
	Global_22350.f_5075[4] = iParam4;
}

void func_388(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5083[0] = iParam0;
	Global_22350.f_5083[1] = iParam1;
	Global_22350.f_5083[2] = iParam2;
	Global_22350.f_5083[3] = iParam3;
	Global_22350.f_5083[4] = iParam4;
}

void func_389(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5056[0] = iParam0;
	Global_22350.f_5056[1] = iParam1;
	Global_22350.f_5056[2] = iParam2;
	Global_22350.f_5056[3] = iParam3;
	Global_22350.f_5056[4] = iParam4;
	Global_22350.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22350.f_5226++;
	}
}

void func_390(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	Global_22350.f_8387 = iParam4;
	Global_22350.f_8383 = uParam0;
	Global_22350.f_8384 = uParam1;
	Global_22350.f_8385 = uParam2;
	Global_22350.f_8386 = uParam3;
}

int func_391(bool bParam0, int iParam1, int iParam2)
{
	if (!UNK_0x91E3F625EF57450D(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_395(0) == -1 && Global_4268497 == iParam1)
	{
		if (!func_420(bParam0))
		{
			func_375(bParam0);
			return 1;
		}
		else if (func_7(bParam0) > 0.25f)
		{
			func_435(bParam0);
			return 1;
		}
	}
	else if (func_420(bParam0))
	{
		func_421(bParam0);
	}
	return 0;
}

int func_392(bool bParam0)
{
	float fVar0;

	fVar0 = 0f;
	if (!UNK_0x91E3F625EF57450D(2))
	{
		fVar0 = UNK_0x4F3973434662D795(2, 218);
	}
	if (fVar0 < -0.8f || UNK_0x06F8112AA79C53D9(2, 189))
	{
		if (!func_420(bParam0))
		{
			func_375(bParam0);
			return 1;
		}
		else if (func_7(bParam0) > 0.25f)
		{
			func_435(bParam0);
			return 1;
		}
	}
	else if (func_420(bParam0))
	{
		func_421(bParam0);
	}
	return 0;
}

bool func_393(bool bParam0)
{
	float fVar0;

	fVar0 = 0f;
	if (!UNK_0x91E3F625EF57450D(2))
	{
		fVar0 = UNK_0x4F3973434662D795(2, 219);
	}
	if (fVar0 > 0.8f || UNK_0x06F8112AA79C53D9(2, 187))
	{
		if (!func_420(bParam0))
		{
			func_375(bParam0);
			return true;
		}
		else if (func_7(bParam0) > 0.25f)
		{
			func_435(bParam0);
			return true;
		}
	}
	else if (func_420(bParam0))
	{
		func_421(bParam0);
	}
	return false;
}

bool func_394(bool bParam0)
{
	float fVar0;

	fVar0 = 0f;
	if (!UNK_0x91E3F625EF57450D(2))
	{
		fVar0 = UNK_0x4F3973434662D795(2, 219);
	}
	if (fVar0 < -0.8f || UNK_0x06F8112AA79C53D9(2, 188))
	{
		if (!func_420(bParam0))
		{
			func_375(bParam0);
			return true;
		}
		else if (func_7(bParam0) > 0.25f)
		{
			func_435(bParam0);
			return true;
		}
	}
	else if (func_420(bParam0))
	{
		func_421(bParam0);
	}
	return false;
}

int func_395(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	fVar6 = 0.02f;
	fVar0 = 0.05f;
	fVar2 = (fVar0 + Global_22349);
	fVar1 = (Global_22350.f_5730 - (IntToFloat(Global_22350.f_5732) * 0.034722f));
	fVar5 = (fVar0 + fParam0);
	UNK_0xD02CE72B4B66DC29(76, 84);
	UNK_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	UNK_0xE428D1DCE17602B4(fVar0, fVar1, &fVar0, &fVar1);
	UNK_0xE428D1DCE17602B4(fVar2, fVar3, &fVar2, &fVar3);
	UNK_0xD59EF13BB60323B9();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_4268491 >= fVar0 && Global_4268491 < fVar5)
		{
			return -999;
		}
	}
	if (Global_4268491 >= fVar0 && Global_4268491 < fVar4)
	{
		return -1;
	}
	if (Global_4268491 >= fVar4 && Global_4268491 <= fVar2)
	{
		return 1;
	}
	return 0;
}

bool func_396()
{
	if (UNK_0x91E3F625EF57450D(2))
	{
		return UNK_0x7FEE810EE9E768EB(2, 237);
	}
	return false;
}

void func_397(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;

	StringCopy(&(Global_22350.f_4690), sParam0, 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = iParam1;
	Global_22350.f_4767 = UNK_0x1C0640BA9A7327B3();
	Global_22350.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_398(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	Global_22350.f_5739 = iParam0;
	Global_22350.f_5874 = iParam2;
	if (Global_22350.f_5739 < Global_22350.f_5738)
	{
		Global_22350.f_5738 = Global_22350.f_5739;
	}
	else if ((Global_22350.f_5729 && Global_22350.f_5739 > Global_22350.f_5740) || (!Global_22350.f_5729 && Global_22350.f_5739 >= (Global_22350.f_5738 + Global_22350.f_5225)))
	{
		iVar0 = Global_22350.f_5738;
		while (iVar0 <= Global_22350.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22350.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22350.f_5225 && Global_22350.f_5738 < 128)
		{
			Global_22350.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22350.f_5738;
			while (iVar0 <= Global_22350.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22350.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22350.f_4690), "", 24);
		StringCopy(&(Global_4268421.f_21), "", 16);
	}
}

bool func_399()
{
	if (UNK_0x91E3F625EF57450D(2))
	{
		if (Global_4268497 > -1)
		{
			if (UNK_0xBFC0798A6E3417F9(2, 237))
			{
				return true;
			}
		}
	}
	return false;
}

int func_400(bool bParam0, int iParam1, bool bParam2)
{
	if (!UNK_0x91E3F625EF57450D(2))
	{
		return 0;
	}
	if (UNK_0x798A3F1296751F46() || UNK_0xE57E602827E07C9D())
	{
		return 0;
	}
	if (bParam2)
	{
		UNK_0x5D80F91A16C40CDE();
	}
	if (Global_4268497 == -6)
	{
		UNK_0xC74D8A1D346B9CCB(4);
		if (bParam0 && UNK_0x06F8112AA79C53D9(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4268497 = -1;
			return 0;
		}
	}
	if (((Global_4268497 > -1 || Global_4268497 == -3) || Global_4268497 == -2) || UNK_0xFA0AEC0FCBF8703B())
	{
		UNK_0xC74D8A1D346B9CCB(1);
		return 0;
	}
	if (Global_4268497 == -1 && bParam0)
	{
		if (UNK_0x06F8112AA79C53D9(2, 237))
		{
			UNK_0xC74D8A1D346B9CCB(4);
			Global_4268497 = -6;
			return 1;
		}
		else
		{
			UNK_0xC74D8A1D346B9CCB(3);
			return 0;
		}
	}
	UNK_0xC74D8A1D346B9CCB(1);
	return 0;
}

void func_401(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!UNK_0x91E3F625EF57450D(2))
	{
		Global_4268497 = -1;
		return;
	}
	UNK_0xFE29D579C98536B2(1);
	fVar0 = Global_22347;
	fVar2 = (fVar0 + Global_22349);
	fVar3 = Global_22350.f_5730;
	fVar1 = (Global_22350.f_5730 - (IntToFloat(Global_22350.f_5732) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_22350.f_5732 < 1)
	{
		fVar1 = (Global_22350.f_5730 - 0.034722f);
	}
	UNK_0xD02CE72B4B66DC29(76, 84);
	UNK_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	UNK_0xE428D1DCE17602B4(fVar0, fVar1, &fVar0, &fVar1);
	UNK_0xE428D1DCE17602B4(fVar2, fVar3, &fVar2, &fVar3);
	UNK_0xD59EF13BB60323B9();
	func_403();
	if (Global_4268497 == -6)
	{
		return;
	}
	Global_4268497 = -1;
	fVar7 = Global_4268491;
	fVar8 = Global_4268492;
	if (Global_22350.f_5733 > Global_22350.f_5732)
	{
		if (((Global_4268491 >= fVar0 && Global_4268491 <= fVar2) && Global_4268492 >= fVar3) && Global_4268492 < (fVar3 + fVar6))
		{
			Global_4268497 = -2;
			if (bParam3)
			{
				func_402(0);
			}
			return;
		}
		if (((Global_4268491 >= fVar0 && Global_4268491 <= fVar2) && Global_4268492 >= (fVar3 + fVar6)) && Global_4268492 < (fVar3 + 0.034722f))
		{
			Global_4268497 = -3;
			if (bParam3)
			{
				func_402(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_22350.f_5733 == -1)
		{
			Global_4268497 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_22350.f_5732);
		bVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				UNK_0xD02CE72B4B66DC29(76, 84);
				UNK_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
				func_365(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22349, (0.034722f - 0.0015f), 255, 255, 255, bVar10);
				UNK_0xD59EF13BB60323B9();
			}
		}
		Global_4268497 = Global_22350.f_8038[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4268497 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4268497 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4268497 = -4;
		return;
	}
	Global_4268497 = -1;
}

void func_402(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;

	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		bVar3 = 48;
	}
	else
	{
		bVar3 = 210;
	}
	fVar0 = Global_22347;
	fVar1 = Global_22350.f_5730;
	UNK_0xD02CE72B4B66DC29(76, 84);
	UNK_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	if (Global_4268497 == -2)
	{
		func_365(fVar0, fVar1, Global_22349, fVar2, 255, 255, 255, bVar3);
	}
	else if (Global_4268497 == -3)
	{
		func_365(fVar0, (fVar1 + fVar2), Global_22349, fVar2, 255, 255, 255, bVar3);
	}
	UNK_0xD59EF13BB60323B9();
}

void func_403()
{
	Global_4268493 = Global_4268491;
	Global_4268494 = Global_4268492;
	Global_4268491 = UNK_0x4B7163B4D6E4A3C2(2, 239);
	Global_4268492 = UNK_0x4B7163B4D6E4A3C2(2, 240);
	Global_4268495 = (Global_4268491 - Global_4268493);
	Global_4268496 = (Global_4268492 - Global_4268494);
}

float func_404(float fParam0)
{
	if (fParam0 < 1.3f)
	{
		return 35f;
	}
	else if (fParam0 < 1.35f)
	{
		return 33f;
	}
	return 30f;
}

void func_405(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	uParam0->f_660 = 0;
	uParam0->f_661 = 3;
	uParam0->f_662 = 0;
	uParam0->f_663 = 3;
	uParam0->f_664 = 0;
	uParam0->f_665 = 7;
	func_345(0, 0);
	UNK_0xA402F6C87C08815C(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_390(uVar0, uVar1, uVar2, uVar3, 1);
	func_389(1, 2, 0, 0, 0);
	func_388(1, 2, 1, 1, 1);
	func_387(0, 1, 0, 0, 0);
	func_386("DARTS_TITLE");
	func_384(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_366(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_381(0, 1, 0);
	func_366(1, "DARTS_SETS", 0, 1, 0, 0);
	func_381(1, 1, 0);
	func_366(2, "DARTS_START", 0, 1, 0, 0);
	func_380(2, 141, 141, 1);
	func_379(0);
	func_398(0, 1, 1);
	func_397("DARTS_LEGD", 0, 0);
	func_406();
	func_378(201, "ITEM_SELECT", -1, 0);
	func_378(202, "IB_QUIT", -1, 0);
}

void func_406()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		UNK_0x336D6E75517F233F(0.325f, 0.3f);
	}
}

bool func_407(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if ((func_431() && UNK_0x1C0640BA9A7327B3() >= iLocal_291 + 1000) && *iParam0 != 8)
	{
		if (!UNK_0x757EF87A33649210() && !UNK_0xD0BB2359EC70FC37())
		{
			UNK_0x53491B90E4FD0E56(500);
		}
	}
	if (UNK_0x757EF87A33649210() && *iParam0 != 8)
	{
		*iParam0 = 8;
	}
	switch (*iParam0)
	{
		case 2:
			switch (iLocal_31)
			{
				case 0:
					if (*uParam3 == 2)
					{
						iLocal_291 = UNK_0x1C0640BA9A7327B3();
						func_415(uParam1->f_1, uParam1->f_4, func_417(2), func_416(0), 0, 1);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_286(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
					}
					if (*uParam3 == 3)
					{
						if (func_273(uParam4[0 /*26*/], uParam1, 0, 0))
						{
							UNK_0xEB819BD1E585E9CB(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, false, false, 0, 0);
							iLocal_31++;
							func_435(bParam5);
							*uParam3 = 2;
						}
					}
					break;
				case 1:
					if (func_423(bParam5) > 1f && !func_303("DARTS_DOUBLE_T"))
					{
						func_418("DARTS_DOUBLE_T", -1);
					}
					if (func_423(bParam5) > 5f)
					{
						func_435(bParam5);
						UNK_0xA37A90C62806D848(1);
						func_409(uParam1->f_1, uParam1->f_4, func_417(3), func_416(0), 1000);
						iLocal_31 = 0;
						*iParam0 = 3;
					}
					break;
			}
			break;
		case 3:
			switch (iLocal_31)
			{
				case 0:
					if (!UNK_0xFA06B985B30FB0FC(iLocal_128))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							func_286(uParam4[1 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_273(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								UNK_0xEB819BD1E585E9CB(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, false, false, 0, 0);
								iLocal_31++;
								func_435(bParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				case 1:
					if (func_423(bParam5) > 1f && !func_303("DARTS_TRIPLE_T"))
					{
						func_418("DARTS_TRIPLE_T", -1);
					}
					if (func_423(bParam5) > 5f)
					{
						func_435(bParam5);
						UNK_0xA37A90C62806D848(1);
						func_415(uParam1->f_1, uParam1->f_4, func_417(4), func_416(0), 1000, 0);
						iLocal_31 = 0;
						*iParam0 = 4;
					}
					break;
			}
			break;
		case 4:
			switch (iLocal_31)
			{
				case 0:
					if (!UNK_0xFA06B985B30FB0FC(iLocal_127))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							func_286(uParam4[2 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_273(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								UNK_0xEB819BD1E585E9CB(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, false, false, 0, 0);
								iLocal_31++;
								func_435(bParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				case 1:
					if (func_423(bParam5) > 1f && !func_303("DARTS_BULL_T"))
					{
						func_418("DARTS_BULL_T", -1);
					}
					if (func_423(bParam5) > 5f)
					{
						func_435(bParam5);
						UNK_0xA37A90C62806D848(1);
						UNK_0x4D7F4CC43D4D0DE3(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
						func_409(uParam1->f_1, uParam1->f_4, func_417(5), func_416(1), 1500);
						iLocal_31 = 0;
						*iParam0 = 5;
					}
					break;
			}
			break;
		case 5:
			if (!UNK_0xFA06B985B30FB0FC(iLocal_128) && !func_303("DARTS_DBL_WIN"))
			{
				func_418("DARTS_DBL_WIN", -1);
			}
			if (func_423(bParam5) > 6f)
			{
				func_435(bParam5);
				*iParam0 = 6;
			}
			break;
		case 6:
			UNK_0x4D7F4CC43D4D0DE3(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
			UNK_0xF1E4C781086FABC1(iLocal_120, iLocal_128, 1500, 1, 1);
			*iParam0 = 7;
			break;
		case 7:
			if (!UNK_0xFA06B985B30FB0FC(iLocal_120))
			{
				iLocal_31 = 0;
				UNK_0xA37A90C62806D848(1);
				UNK_0x790015DC92C918E2();
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_408(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return true;
			}
			break;
		case 8:
			if (UNK_0x757EF87A33649210())
			{
				iLocal_31 = 0;
				UNK_0xA37A90C62806D848(1);
				UNK_0x790015DC92C918E2();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_408(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				UNK_0xE3BB8E05FCEB3FBE(iLocal_120, true);
				UNK_0x82E51BCA72537B6C(500);
				return true;
			}
			break;
	}
	return false;
}

void func_408(bool bParam0)
{
	vector3 vVar0;

	vVar0 = { -1668.044f, -1056.45f, 13.1063f };
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		UNK_0xA47B46945FF6DE74(*bParam0, vVar0, 1, 0, 0, 1);
		UNK_0xEEEE2E5FA6F78DF0(bParam0);
		UNK_0xF690C84DADBB3551(bParam0);
	}
}

void func_409(vector3 vParam0, bool bParam3, vector3 vParam4, vector3 vParam7, int iParam10)
{
	UNK_0x70D5C5F31B79F27C(iLocal_128);
	UNK_0x5818C8D5303DCCF8(iLocal_128, 35f);
	UNK_0x608A456FDD8A83D8(iLocal_128, UNK_0x8A5E176FF719A014(vParam0, bParam3, vParam4));
	UNK_0x5F3CBA6EB9341C90(iLocal_128, Vector(bParam3, 0f, 0f) - vParam7, 2);
	UNK_0xF1E4C781086FABC1(iLocal_128, iLocal_127, iParam10, 1, 1);
}

bool func_410(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_420(&(uParam0->f_2)))
	{
		func_435(&(uParam0->f_2));
	}
	UNK_0x3584F71E5CA29322(14);
	if (!bParam2)
	{
		UNK_0x6567AE843FADBA94(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		UNK_0x6567AE843FADBA94(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (UNK_0x06F8112AA79C53D9(2, 201))
		{
			return false;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return true;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_421(&(uParam0->f_2));
		return false;
	}
	return true;
}

void func_411(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;

	sVar0 = func_412(iParam5);
	UNK_0x7E60C62A7CE58FC8(*uParam0, "RESET_MOVIE");
	UNK_0x7E60D21B163E9D56();
	UNK_0x7E60C62A7CE58FC8(*uParam0, sVar0);
	UNK_0x7ACC3006A87F8B39("STRING");
	UNK_0x3A820E495A7BA3E5(bParam4);
	UNK_0x6B012227B3921E18(bParam1);
	UNK_0x779B34565F4D71B1();
	if (!UNK_0xEA6BC48857E0AC4C(bParam2))
	{
		func_12(bParam2);
	}
	if (bParam6)
	{
		UNK_0x3CAEA85DA607305E(100);
		UNK_0x1200CC973A2399C8(true);
	}
	UNK_0x7E60D21B163E9D56();
	if (bParam6)
	{
		UNK_0x7E60C62A7CE58FC8(*uParam0, "TRANSITION_UP");
		UNK_0x7C19E5E4784BD7CF(bParam7);
		UNK_0x7E60D21B163E9D56();
	}
	func_435(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
}

char* func_412(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		default:
			break;
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_413()
{
	UNK_0xE3BB8E05FCEB3FBE(iLocal_120, true);
	UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	if (UNK_0xFBB4F23D534EB790(iLocal_127))
	{
		UNK_0xE3BB8E05FCEB3FBE(iLocal_127, false);
	}
	if (UNK_0xFBB4F23D534EB790(iLocal_122))
	{
		UNK_0xE3BB8E05FCEB3FBE(iLocal_122, false);
	}
	if (UNK_0xFBB4F23D534EB790(iLocal_123))
	{
		UNK_0xE3BB8E05FCEB3FBE(iLocal_123, false);
	}
	if (UNK_0xFBB4F23D534EB790(iLocal_124))
	{
		UNK_0xE3BB8E05FCEB3FBE(iLocal_124, false);
	}
	if (UNK_0xFBB4F23D534EB790(iLocal_125))
	{
		UNK_0xE3BB8E05FCEB3FBE(iLocal_125, false);
	}
	if (UNK_0xFBB4F23D534EB790(iLocal_126))
	{
		UNK_0xE3BB8E05FCEB3FBE(iLocal_126, false);
	}
}

char* func_414(int iParam0)
{
	if (iLocal_302 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_BAR";
			case 1:
				return "DARTS_MENU_BAR";
			case 2:
				return "DARTS_START_MATCH_BAR";
			case 3:
				return "DARTS_MATCH_COMPLETE_BAR";
			default:
				break;
		}
	}
	else if (iLocal_302 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_ROCK";
			case 1:
				return "DARTS_MENU_ROCK";
			case 2:
				return "DARTS_START_MATCH_ROCK";
			case 3:
				return "DARTS_MATCH_COMPLETE_ROCK";
			default:
				break;
		}
	}
	return "";
}

void func_415(vector3 vParam0, bool bParam3, vector3 vParam4, vector3 vParam7, int iParam10, bool bParam11)
{
	UNK_0x70D5C5F31B79F27C(iLocal_127);
	UNK_0x5818C8D5303DCCF8(iLocal_127, 35f);
	UNK_0x608A456FDD8A83D8(iLocal_127, UNK_0x8A5E176FF719A014(vParam0, bParam3, vParam4));
	UNK_0x5F3CBA6EB9341C90(iLocal_127, Vector(bParam3, 0f, 0f) - vParam7, 2);
	if (bParam11)
	{
		UNK_0xE3BB8E05FCEB3FBE(iLocal_127, true);
	}
	else
	{
		UNK_0xF1E4C781086FABC1(iLocal_127, iLocal_128, iParam10, 1, 1);
	}
}

Vector3 func_416(bool bParam0)
{
	if (bParam0)
	{
		return -4.7411f, 0f, -15.32f;
	}
	return 4.9918f, 0f, 4.3916f;
}

Vector3 func_417(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.0588f, -1.6075f, 0.1336f;
		case 2:
			return -0.0944f, -1.2308f, 0.3468f;
		case 3:
			return -0.0948f, -1.243f, 0.2067f;
		case 4:
			return -0.0955f, -1.2524f, 0.1006f;
		case 5:
			return -0.0951f, -1.2526f, 0.0895f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_418(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_419(bool bParam0)
{
	if (!UNK_0x437347B10A200C4B(func_498(), 0))
	{
		func_4(func_498(), "GENERIC_YES", 0, 6);
	}
	else
	{
		func_4(bParam0, "GENERIC_AGREE", 0, 6);
	}
	return 1;
}

bool func_420(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, true);
}

void func_421(bool bParam0)
{
	bParam0->f_1 = 0f;
	bParam0->f_2 = 0f;
	*bParam0 = 0;
}

void func_422(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_6(iParam2), 1);
}

float func_423(bool bParam0)
{
	if (func_420(bParam0))
	{
		if (func_9(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_8(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return 0f;
}

void func_424(bool bParam0)
{
	if (!func_420(bParam0))
	{
		func_375(bParam0);
	}
	else
	{
		func_435(bParam0);
	}
}

void func_425()
{
	Global_19671 = 0;
	func_426();
}

void func_426()
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

void func_427(int iParam0)
{
	if (func_40())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_430())
		{
			func_429(1, 1);
		}
		else
		{
			func_429(0, 0);
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
	if (!func_428())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_428()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_429(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_39(0))
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

bool func_430()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_431()
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

int func_432(var uParam0)
{
	bool bVar0;

	bVar0 = UNK_0x728870EB733D12A1();
	if (UNK_0xC844350D5D58C99A(bVar0))
	{
		if (!func_433(bVar0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && UNK_0x12DE711B1C681E9E(bVar0, UNK_0x16F2683693E537C9(), vLocal_260, 0, 1, 0))
			{
				UNK_0xBA486C69AC1FDE77(bVar0);
				UNK_0x20641932E5104B25(bVar0, false, 0);
				UNK_0x4A4806F9D471E491(bVar0, false, 0);
				UNK_0x1E9649458B15960F(bVar0, true);
				UNK_0x73270B3C9CC833FD(bVar0, true, 1);
				*uParam0 = bVar0;
				return 1;
			}
		}
	}
	return 0;
}

bool func_433(bool bParam0)
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

void func_434(var uParam0, bool bParam1)
{
	bParam1++;
	UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_PLAYER_HIGHLIGHT");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x7E60D21B163E9D56();
}

void func_435(bool bParam0)
{
	func_436(bParam0, 0f);
}

void func_436(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_8(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

void func_437(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_438(var uParam0, bool bParam1, bool bParam2)
{
	UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_DARTS_PLAYER_NAMES");
	func_34(bParam1);
	func_34(bParam2);
	UNK_0x7E60D21B163E9D56();
}

void func_439(bool bParam0, struct<4> Param1, var uParam5, var uParam6, var uParam7, var uParam8)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(func_498()) && !UNK_0xEB6A8945D1AC98A1(func_498()))
	{
		UNK_0x0A94A109271BE75A(func_498());
	}
	else
	{
		if (UNK_0xC844350D5D58C99A(uParam8->f_5) && !UNK_0xEB6A8945D1AC98A1(uParam8->f_5))
		{
			UNK_0x73270B3C9CC833FD(uParam8->f_5, true, 1);
			bLocal_263[1] = uParam8->f_5;
			UNK_0xA3BF0AA5A2608191(bLocal_263[1]);
		}
		else if (func_441(uParam7))
		{
			UNK_0xA3BF0AA5A2608191(bLocal_263[1]);
		}
		else
		{
			bLocal_263[1] = UNK_0x36F2404464202779(26, bLocal_299, Param1.f_3, bParam0, 1, true);
		}
		if (UNK_0x30F813723591D02E(bLocal_263[1], "Darts_name"))
		{
			iVar0 = UNK_0x1E2DFB0EF4BB4566(bLocal_263[1], "Darts_name");
			if (954610991 == iVar0)
			{
				bLocal_359 = func_445("RAYMOND");
				bLocal_360 = 954610991;
			}
			else if (94453331 == iVar0)
			{
				bLocal_359 = func_445("JOHAN");
				bLocal_360 = 94453331;
			}
			else if (1891555423 == iVar0)
			{
				bLocal_359 = func_445("STAN");
				bLocal_360 = 1891555423;
			}
			else if (-1067630349 == iVar0)
			{
				bLocal_359 = func_445("VINCE");
				bLocal_360 = -1067630349;
			}
			else if (885327384 == iVar0)
			{
				bLocal_359 = func_445("KRISTY");
				bLocal_360 = 885327384;
			}
			else if (-1791000994 == iVar0)
			{
				bLocal_359 = func_445("MARLENE");
				bLocal_360 = -1791000994;
			}
			else if (1954368234 == iVar0)
			{
				bLocal_359 = func_445("LORIE");
				bLocal_360 = 1954368234;
			}
			else if (-863218904 == iVar0)
			{
				bLocal_359 = func_445("SHELLEY");
				bLocal_360 = -863218904;
			}
		}
		UNK_0xB7E567188872123E(bLocal_263[1], "Darts_name", bLocal_360);
	}
	iVar1 = UNK_0x134B62B726CEC8E6(bLocal_263[1]);
	func_440(iVar1);
	UNK_0xF96A174EE26D7588(bLocal_263[1], bLocal_263[0], 0);
	UNK_0xF96A174EE26D7588(bLocal_263[0], bLocal_263[1], 0);
}

void func_440(int iParam0)
{
	int iVar0;

	iVar0 = UNK_0x09AC81E49EA267F7(false, 2);
	switch (iParam0)
	{
		case joaat("A_F_M_SALTON_01"):
			switch (iVar0)
			{
				case 0:
					bLocal_102 = "A_F_M_SALTON_01_WHITE_FULL_03";
					break;
				case 1:
					bLocal_102 = "A_F_M_SALTON_01_WHITE_FULL_02";
					break;
			}
			break;
		case joaat("A_F_O_SALTON_01"):
			bLocal_102 = "A_F_M_SALTON_01_WHITE_FULL_01";
			break;
		case joaat("A_M_Y_VINEWOOD_01"):
			bLocal_102 = "G_M_Y_LOST_01_BLACK_FULL_01";
			break;
		case joaat("A_M_Y_VINEWOOD_03"):
			bLocal_102 = "G_M_Y_LOST_02_LATINO_FULL_01";
			break;
		case joaat("A_M_Y_VINEWOOD_04"):
			bLocal_102 = "G_M_Y_LOST_01_BLACK_FULL_02";
			break;
		case joaat("A_M_Y_STLAT_01"):
			bLocal_102 = "G_M_Y_LOST_02_LATINO_FULL_02";
			break;
		case joaat("A_M_Y_STWHI_02"):
			bLocal_102 = "G_M_Y_LOST_01_WHITE_FULL_01";
			break;
	}
}

bool func_441(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < UNK_0x263615A674FCA6E9(UNK_0x16F2683693E537C9(), uParam0, -1))
	{
		if (!UNK_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
		{
			if ((((((UNK_0x134B62B726CEC8E6((*uParam0)[iVar0]) == joaat("A_F_M_SALTON_01") || UNK_0x134B62B726CEC8E6((*uParam0)[iVar0]) == joaat("A_F_O_SALTON_01")) || UNK_0x134B62B726CEC8E6((*uParam0)[iVar0]) == joaat("A_M_Y_VINEWOOD_01")) || UNK_0x134B62B726CEC8E6((*uParam0)[iVar0]) == joaat("A_M_Y_STLAT_01")) || UNK_0x134B62B726CEC8E6((*uParam0)[iVar0]) == joaat("A_M_Y_VINEWOOD_04")) || UNK_0x134B62B726CEC8E6((*uParam0)[iVar0]) == joaat("A_M_Y_STWHI_02")) || UNK_0x134B62B726CEC8E6((*uParam0)[iVar0]) == joaat("A_M_Y_VINEWOOD_03"))
			{
				UNK_0x73270B3C9CC833FD((*uParam0)[iVar0], true, 1);
				bLocal_263[1] = (*uParam0)[iVar0];
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_442(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar2 = (func_444() - 1);
		iVar0 = 3;
		while (iVar0 <= iVar2)
		{
			if (func_443(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_443(int iParam0)
{
	if (!func_92(iParam0))
	{
		return func_94(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_444()
{
	if (Global_30768 == 0 || Global_30768 == 2)
	{
		return 167;
	}
	return 161;
}

bool func_445(bool bParam0)
{
	if (UNK_0xB3260A60545D3F11() == 7)
	{
		if (UNK_0x7F8A39872A07D2CE(bParam0, "MICHAEL"))
		{
			return "??????????";
		}
		else if (UNK_0x7F8A39872A07D2CE(bParam0, "FRANKLIN"))
		{
			return "????????????????";
		}
		else if (UNK_0x7F8A39872A07D2CE(bParam0, "TREVOR"))
		{
			return "????????????";
		}
		else if (UNK_0x7F8A39872A07D2CE(bParam0, "LAMAR"))
		{
			return "??????????";
		}
		else if (UNK_0x7F8A39872A07D2CE(bParam0, "JIMMY"))
		{
			return "????????????";
		}
		else if (UNK_0x7F8A39872A07D2CE(bParam0, "KRISTY"))
		{
			return "????????????";
		}
		else if (UNK_0x7F8A39872A07D2CE(bParam0, "MARLENE"))
		{
			return "????????????";
		}
		else if (UNK_0x7F8A39872A07D2CE(bParam0, "LORIE"))
		{
			return "????????";
		}
		else if (UNK_0x7F8A39872A07D2CE(bParam0, "SHELLEY"))
		{
			return "??????????";
		}
		else if (UNK_0x7F8A39872A07D2CE(bParam0, "RAYMOND"))
		{
			return "??????????????";
		}
		else if (UNK_0x7F8A39872A07D2CE(bParam0, "JOHAN"))
		{
			return "??????????";
		}
		else if (UNK_0x7F8A39872A07D2CE(bParam0, "STAN"))
		{
			return "????????";
		}
		else if (UNK_0x7F8A39872A07D2CE(bParam0, "VINCE"))
		{
			return "????????";
		}
	}
	return bParam0;
}

void func_446(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (UNK_0xC844350D5D58C99A(*uParam0))
	{
		uParam0->f_4 = UNK_0xD9522BA9E27E1349(*uParam0);
	}
	if (!bParam3)
	{
		func_448(uParam1, uParam0);
	}
	vLocal_82 = { 0f, (-2.3685f + fLocal_55), 0.1f };
	vLocal_82 = { vLocal_82 + vLocal_56 };
	vLocal_79 = { UNK_0x8A5E176FF719A014(uParam0->f_1, uParam0->f_4, vLocal_82) };
	func_447(uParam2, uParam0);
}

void func_447(var uParam0, var uParam1)
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + vLocal_56 };
	*uParam0 = { UNK_0x8A5E176FF719A014(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_448(var uParam0, var uParam1)
{
	*uParam0 = { UNK_0x8A5E176FF719A014(uParam1->f_1, uParam1->f_4, -0.4f, (-2.4f + fLocal_55), -1.7272f) };
	uParam0->f_3 = { UNK_0x8A5E176FF719A014(uParam1->f_1, uParam1->f_4, 0.5f, (-2.4f + fLocal_55), -1.7272f) };
}

bool func_449(var uParam0, var uParam1)
{
	if (!UNK_0xAE317D00A5A55DF6("SCRIPT\DARTS", 0, -1))
	{
		return false;
	}
	if (!UNK_0xAE317D00A5A55DF6("SCRIPT\FAMILY1_2", 0, -1))
	{
		return false;
	}
	if ((((((((((((!UNK_0xB87F6CF6E5628C67(bLocal_28) || !UNK_0xB87F6CF6E5628C67(bLocal_29)) || !UNK_0xB87F6CF6E5628C67(bLocal_60)) || !UNK_0xB87F6CF6E5628C67(bLocal_299)) || !UNK_0x83D8570832F172A7(*uParam0)) || !UNK_0x83D8570832F172A7(uParam1->f_645)) || !UNK_0x83D8570832F172A7(uParam1->f_57)) || !UNK_0x83D8570832F172A7(uParam1->f_62)) || !UNK_0x67C1D9E5B91B2E37(3)) || !UNK_0x27117E2CDD4D67C3("Darts")) || !UNK_0xB4AE0788C1587752(bLocal_361)) || !UNK_0xB4AE0788C1587752(bLocal_362)) || !func_450(0, -1, 0))
	{
		return false;
	}
	return true;
}

bool func_450(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_342(&iVar0, 1, iParam1))
	{
		return false;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_5635[iVar0 /*4*/])))
	{
		UNK_0xD7992BEF7A9D109E(&(Global_22350.f_5635[iVar0 /*4*/]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!UNK_0x01C309A4BDFCAD82(&(Global_22350.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	UNK_0x0D3BE1DE0262A012("CommonMenu", 0);
	Global_22350.f_5614[iVar0] = 1;
	if (!UNK_0x27117E2CDD4D67C3("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		UNK_0x0D3BE1DE0262A012("MPShopSale", 0);
		Global_22350.f_5621[iVar0] = 1;
		if (!UNK_0x27117E2CDD4D67C3("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_451(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_451(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!UNK_0x83D8570832F172A7(*uParam0))
			{
				*uParam0 = UNK_0xB01F55A0FD1CFD49(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (UNK_0x83D8570832F172A7(*uParam0))
					{
						uParam0->f_8 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = UNK_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		case 1:
			if (UNK_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_8 = UNK_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		case 2:
			if (!UNK_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_452(var uParam0, var uParam1)
{
	UNK_0x523BCC9DC80CD82F(bLocal_28);
	UNK_0x523BCC9DC80CD82F(bLocal_29);
	UNK_0x523BCC9DC80CD82F(bLocal_60);
	UNK_0x523BCC9DC80CD82F(bLocal_299);
	UNK_0x0D3BE1DE0262A012("Darts", 0);
	UNK_0x0D3BE1DE0262A012("ShopUI_Title_Darts", 0);
	UNK_0x3F423BF5B8125A50(bLocal_361);
	UNK_0x3F423BF5B8125A50(bLocal_362);
	*uParam0 = UNK_0xB01F55A0FD1CFD49("darts_scoreboard");
	uParam1->f_645 = func_194();
	uParam1->f_57 = func_454();
	uParam1->f_62 = func_453();
	UNK_0xD7992BEF7A9D109E("DARTS", 3);
}

int func_453()
{
	return UNK_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
}

int func_454()
{
	return UNK_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
}

void func_455(var uParam0, int iParam1, vector3 vParam2, bool bParam5)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			uParam0->f_1[iVar0 /*8*/][iVar1] = 1;
			iVar1++;
		}
		iVar0++;
	}
	if (iParam1 == 0)
	{
		uParam0->f_18 = { 989.399f, -99.674f, 75.925f };
		uParam0->f_21 = { 180f, 0f, 252.555f };
		uParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	else
	{
		uParam0->f_18 = { 1992.223f, 3049.814f, 48.333f };
		uParam0->f_21 = { 180f, 0f, 87.77f };
		uParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	if (!func_456(vParam2) && bParam5 != 0f)
	{
		uParam0->f_18 = { UNK_0x8A5E176FF719A014(vParam2, bParam5, -0.687645f, -0.350352f, 0.343273f) };
		uParam0->f_21 = { 180f, 0f, (bParam5 - -29.98685f) };
	}
	uParam0->f_27 = 0.885f;
	uParam0->f_28 = 0.244f;
	uParam0->f_29 = 0.17f;
	uParam0->f_30 = 0.415f;
}

bool func_456(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_457(int iParam0)
{
	int iVar0;

	iVar0 = iParam0 + 1;
	Local_61 = 0.5f;
	Local_61.f_1 = 0.5f;
	if (UNK_0x0D71AFA59EF5104F())
	{
		Local_61.f_2 = 0.05f;
		Local_61.f_3 = 0.095f;
	}
	else
	{
		Local_61.f_2 = 0.065f;
		Local_61.f_3 = 0.09f;
	}
	Local_61.f_4 = 255;
	Local_61.f_5 = 250;
	Local_61.f_6 = 255;
	Local_61.f_7 = 123;
	if (iVar0 == 1)
	{
		Local_61.f_4 = 255;
		Local_61.f_5 = 255;
		Local_61.f_6 = 255;
	}
	else if (iVar0 == 2)
	{
		Local_61.f_4 = 255;
		Local_61.f_5 = 255;
		Local_61.f_6 = 255;
	}
	Local_61.f_8 = 0f;
	Local_70 = 0f;
	Local_70.f_1 = 0f;
	Local_70.f_2 = 0.061f;
	Local_70.f_3 = 0.105f;
	Local_70.f_4 = 200;
	Local_70.f_5 = 45;
	Local_70.f_6 = 40;
	Local_70.f_7 = 255;
	Local_70.f_8 = 0f;
}

void func_458(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		uParam0->f_1 = bLocal_28;
	}
	else
	{
		uParam0->f_1 = bLocal_29;
	}
	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
}

void func_459()
{
	int iVar0;

	UNK_0x035C78C5D5EB800E();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838577.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_460(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	float fVar21;
	vector3 vVar22;
	float fVar25;
	float fVar26;
	vector3 vVar27;
	float fVar30;
	float fVar31;
	vector3 vVar32;
	vector3 vVar35;
	vector3 vVar38;

	fLocal_134 = UNK_0x33D480CCE15C991A(0);
	fVar21 = 30f;
	fVar21 = func_404(fLocal_134);
	vVar22 = { -0.192784f, -1.73287f, 0.0262985f };
	fVar25 = 1.7939f;
	fVar26 = -1.3346f;
	if (UNK_0x0D71AFA59EF5104F())
	{
		vVar27 = { -0.0974819f, -1.65968f, 0.335098f };
		fVar30 = -1.3023f;
		fVar31 = -12.4139f;
	}
	else
	{
		vVar27 = { -0.112635f, -1.86963f, 0.45417f };
		fVar30 = -3.7542f;
		fVar31 = -14.4576f;
	}
	vVar32 = { 0.261599f, -0.750354f, -0.392929f };
	vVar38 = { 0.281314f, -0.573735f, -0.39603f };
	vVar3 = { UNK_0x8A5E176FF719A014(vParam0, bParam3, vVar22) };
	vVar9 = { fVar26, 0f, (bParam3 - fVar25) };
	vVar0 = { UNK_0x8A5E176FF719A014(vParam0, bParam3, vVar27) };
	vVar6 = { fVar31, 0f, (bParam3 - fVar30) };
	vVar12 = { UNK_0x8A5E176FF719A014(vParam0, bParam3, vVar32) };
	vVar15 = { 0.8351f, -0.0048f, (bParam3 - 186.5073f) };
	vVar35 = { UNK_0x8A5E176FF719A014(vParam0, bParam3, vVar38) };
	vVar18 = { 0.8351f, -0.0048f, (bParam3 - 186.5073f) };
	iLocal_120 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar0, vVar6, fVar21, 0, 2);
	iLocal_121 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar3, vVar9, fVar21, 0, 2);
	iLocal_122 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar12, vVar15, 65f, 0, 2);
	iLocal_123 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar35, vVar18, 65f, 0, 2);
	iLocal_124 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_125 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_127 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_128 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_126 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), 1996.235f, 3048.456f, 48.0237f, -3.4831f, 0.0223f, 60.6925f, 38.1f, 0, 2);
	UNK_0x5818C8D5303DCCF8(iLocal_122, 43.35f);
	UNK_0x5818C8D5303DCCF8(iLocal_123, 42.35f);
	UNK_0x91F5B0244AAE6222(iLocal_122, "HAND_SHAKE", 0.1f);
	UNK_0x91F5B0244AAE6222(iLocal_123, "HAND_SHAKE", 0.1f);
}

void func_461(var uParam0, var uParam1)
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (UNK_0xC844350D5D58C99A(uParam1->f_4))
	{
		*uParam0 = uParam1->f_4;
	}
	iLocal_33[0] = 20;
	iLocal_33[10] = 3;
	iLocal_33[1] = 1;
	iLocal_33[11] = 19;
	iLocal_33[2] = 18;
	iLocal_33[12] = 7;
	iLocal_33[3] = 4;
	iLocal_33[13] = 16;
	iLocal_33[4] = 13;
	iLocal_33[14] = 8;
	iLocal_33[5] = 6;
	iLocal_33[15] = 11;
	iLocal_33[6] = 10;
	iLocal_33[16] = 14;
	iLocal_33[7] = 15;
	iLocal_33[17] = 9;
	iLocal_33[8] = 2;
	iLocal_33[18] = 12;
	iLocal_33[9] = 17;
	iLocal_33[19] = 5;
	iLocal_33[20] = 20;
}

void func_462()
{
	Global_22211.f_6 = 1;
}

void func_463(bool bParam0, bool bParam1)
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

int func_464(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	iVar1 = func_465(iParam0, iParam1);
	UNK_0x6FB46C25CCB7E6D5(iVar1, &uVar0, -1);
	return uVar0;
}

int func_465(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;

	func_466(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_466(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_UNLOCKED");
					break;
				case 1:
					*uParam2 = joaat("SP0_STAMINA");
					break;
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY");
					break;
				case 2:
					*uParam2 = joaat("SP0_STRENGTH");
					break;
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY");
					break;
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY");
					break;
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY");
					break;
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY");
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_UNLOCKED");
					break;
				case 1:
					*uParam2 = joaat("SP1_STAMINA");
					break;
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY");
					break;
				case 2:
					*uParam2 = joaat("SP1_STRENGTH");
					break;
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY");
					break;
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY");
					break;
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY");
					break;
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY");
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_UNLOCKED");
					break;
				case 1:
					*uParam2 = joaat("SP2_STAMINA");
					break;
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY");
					break;
				case 2:
					*uParam2 = joaat("SP2_STRENGTH");
					break;
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY");
					break;
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY");
					break;
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY");
					break;
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY");
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				case 1:
					*uParam3 = 65;
					break;
				case 3:
					*uParam3 = 67;
					break;
				case 2:
					*uParam3 = 66;
					break;
				case 4:
					*uParam3 = 68;
					break;
				case 5:
					*uParam3 = 69;
					break;
				case 6:
					*uParam3 = 70;
					break;
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_467(bool bParam0)
{
	if (bParam0)
	{
		func_468();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_39(0))
		{
			func_427(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_468()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_469(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	UNK_0x38D6459E58A32457(1);
	func_265(8);
	func_318();
	if (bLocal_273)
	{
		func_486(&uLocal_289);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_408(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		iVar0++;
	}
	UNK_0x71199B01895C6202(bLocal_28);
	UNK_0x71199B01895C6202(bLocal_29);
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_263[0]) && !UNK_0xEB6A8945D1AC98A1(bLocal_263[1]))
	{
		UNK_0xBC43ED9FE28DB191(bLocal_263[0]);
		UNK_0xBC43ED9FE28DB191(bLocal_263[1]);
	}
	func_485();
	UNK_0x71199B01895C6202(bLocal_60);
	func_484();
	func_483(uParam1->f_645);
	func_482(&(uParam1->f_57));
	if (!UNK_0x437347B10A200C4B(func_498(), 0))
	{
		UNK_0xE25C96A9C36BE5D2(func_498(), func_481());
		func_480(iLocal_297, iLocal_298);
	}
	else
	{
		func_478(&(bLocal_263[1]));
	}
	func_467(0);
	func_477(uParam2);
	func_36(0);
	UNK_0xA5E3ADAAA4CD5D6C(15);
	if (UNK_0x1963B11DE70153E0())
	{
		if (iParam0->f_460 && !bLocal_287)
		{
			func_476(190, 0);
		}
	}
	func_104();
	func_459();
	func_96(&(uParam1->f_72), 0);
	SYSTEM::WAIT(200);
	if (bLocal_280)
	{
		func_473(130, 0, 0);
		func_470();
	}
	func_463(23, 0);
	UNK_0x10FAF14A60A0DBE1();
}

void func_470()
{
	func_471();
}

int func_471()
{
	if (func_472(0))
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

bool func_472(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_473(int iParam0, int iParam1, int iParam2)
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
		func_63((891 + iParam0), 1, -1, 1);
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
		func_474();
	}
}

void func_474()
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
		func_85(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_475() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_471();
				}
			}
		}
	}
}

int func_475()
{
	return Global_30768;
}

void func_476(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var7[1];

	if (!UNK_0x1963B11DE70153E0())
	{
		return;
	}
	StringCopy(&(Var7[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_224(iParam0, &Var0, &Var7, 1, -1, 0, 0))
	{
		UNK_0x6106B2DBBCB1AA39(103, iLocal_151[1], 0f);
		UNK_0x6106B2DBBCB1AA39(99, iLocal_151[2], 0f);
		UNK_0x6106B2DBBCB1AA39(109, iLocal_151[3], 0f);
		UNK_0x6106B2DBBCB1AA39(106, iLocal_151[5], 0f);
		UNK_0x6106B2DBBCB1AA39(2, iLocal_151[10], 0f);
		UNK_0x6106B2DBBCB1AA39(107, iLocal_151[8], 0f);
		UNK_0x6106B2DBBCB1AA39(116, iLocal_151[6], 0f);
	}
}

void func_477(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		UNK_0xE17FDF9E3068281B(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			UNK_0x1200CC973A2399C8(false);
			UNK_0x7E60D21B163E9D56();
		}
		UNK_0xE17FDF9E3068281B(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		UNK_0x31A33F7BCB08CB80(false);
		uParam0->f_564 = 0;
	}
	if (!Global_76890)
	{
		if (!UNK_0x131F22FE6F47A65D(UNK_0xA30EC016B12C03E4()))
		{
			if (!Global_76891)
			{
				if (UNK_0x757EF87A33649210() && !func_472(0))
				{
					UNK_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_36(0);
}

void func_478(var uParam0)
{
	if (UNK_0xC844350D5D58C99A(*uParam0) && !UNK_0xEB6A8945D1AC98A1(*uParam0))
	{
		UNK_0xF82EA857DA10E0CD(&iLocal_300);
		UNK_0xDD353D0E9C789D0E(&iLocal_300);
		if (UNK_0xC844350D5D58C99A(bLocal_263[0]))
		{
			UNK_0x0C8C0C840C2D1AD2(false, bLocal_263[0], 8000, 2049, 3);
		}
		UNK_0x93D47DFD0AE94949(false, 1000);
		if (bLocal_278)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111599, 10))
			{
				UNK_0x96167B03C5A77156(false, func_479(iLocal_302 == 2, vLocal_343, vLocal_349), 1f, 20000, 0.25f, 0, func_123(iLocal_302 == 2, fLocal_353, fLocal_355));
			}
			else
			{
				UNK_0x96167B03C5A77156(false, func_479(iLocal_302 == 2, vLocal_340, vLocal_346), 1f, 20000, 0.25f, 0, func_123(iLocal_302 == 2, fLocal_352, fLocal_354));
			}
			UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
		}
		else
		{
			UNK_0x96167B03C5A77156(false, func_479(iLocal_302 == 2, vLocal_340, vLocal_346), 1f, 20000, 0.25f, 0, func_123(iLocal_302 == 2, 172.6813f, 142.6717f));
			UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
		}
		UNK_0x75ABDC5F81978924(iLocal_300);
		UNK_0x78ADC381772E3D54(*uParam0, iLocal_300);
		UNK_0xFADC0A217229F6B5(*uParam0, true);
	}
	UNK_0x71199B01895C6202(bLocal_299);
}

Vector3 func_479(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

void func_480(int iParam0, int iParam1)
{
	if (Global_94570 == iParam0)
	{
		Global_94571 = Global_94570;
		Global_94572 = iParam1;
		Global_94570 = 23;
	}
}

int func_481()
{
	return UNK_0x5D08BBCCCC2F43A4(UNK_0xA30EC016B12C03E4());
}

void func_482(int iParam0)
{
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0;
	}
}

void func_483(var uParam0)
{
	UNK_0xE17FDF9E3068281B(&uParam0);
}

void func_484()
{
	UNK_0xA37A90C62806D848(1);
	UNK_0x5CAFA5DD13658DFE(0);
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	UNK_0xBFE31971E49FA500(1);
}

void func_485()
{
	if (UNK_0xC844350D5D58C99A(bLocal_59))
	{
		UNK_0xF690C84DADBB3551(&bLocal_59);
	}
}

void func_486(var uParam0)
{
	bool bVar0;

	bVar0 = *uParam0;
	if (UNK_0xC844350D5D58C99A(bVar0))
	{
		if (!func_433(bVar0))
		{
			UNK_0x20641932E5104B25(bVar0, true, 0);
			UNK_0x4A4806F9D471E491(bVar0, true, 0);
			UNK_0x1E9649458B15960F(bVar0, false);
		}
	}
}

void func_487()
{
	int iVar0;

	if (UNK_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_111638.f_9080 || func_472(0))
	{
		if (!func_495())
		{
			iVar0 = func_494();
			if (iVar0 != -1)
			{
				if (!func_489(iVar0))
				{
					return;
				}
				UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_488();
		}
	}
}

void func_488()
{
	Global_98779 = 1;
	if (UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1))
	{
		if (UNK_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_90())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MARRE", 16);
					break;
				case 1:
					StringCopy(&Global_76854, "CMN_FARRE", 16);
					break;
				case 2:
					StringCopy(&Global_76854, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
	}
	else if (!UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_90())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MDIED", 16);
					break;
				case 1:
					StringCopy(&Global_76854, "CMN_FDIED", 16);
					break;
				case 2:
					StringCopy(&Global_76854, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
		UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 25);
	}
}

bool func_489(int iParam0)
{
	int iVar0;
	int iVar1;

	func_488();
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x2DA3D7F5B74119E5(5000);
	}
	iVar0 = Global_89496[iParam0 /*5*/];
	iVar1 = Global_76891.f_109[iVar0 /*4*/];
	func_493(iVar1, 1);
	UNK_0xAE08886CF478C471(UNK_0xD803B885F5E47A62(), 0);
	UNK_0x0D00405AED37B7C4(UNK_0xD803B885F5E47A62(), 0);
	func_490(&(Global_111638.f_2358.f_539), iVar1);
	if (Global_92919 == Global_98781)
	{
		Global_111638.f_9080.f_330[iVar1 /*6*/].f_1++;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_89532[iVar1 /*34*/].f_15, true))
	{
		if (!UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x67E5ECB8FD7F5018(0);
		}
	}
	Global_111638.f_9080.f_330[iVar1 /*6*/].f_2++;
	Global_92919 = Global_98781;
	if (iParam0 == -1)
	{
		if (Global_111638.f_9080)
		{
		}
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iParam0 /*5*/].f_1, 4))
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iParam0 /*5*/].f_1, 5))
	{
		return false;
	}
	return true;
}

void func_490(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_111638.f_18528[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_492(Global_111638.f_18528[iVar0], &vVar2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_491(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_96134[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_9 = 0f;
				Global_96134[iVar0 /*29*/].f_12 = 0f;
				Global_96134[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_10 = 0f;
				Global_96134[iVar0 /*29*/].f_13 = 0f;
				Global_96134[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_11 = 0f;
				Global_96134[iVar0 /*29*/].f_14 = 0f;
				Global_96134[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_26 = 0f;
				Global_96134[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_27 = 0f;
				Global_96134[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_491(var uParam0)
{
	*uParam0 = -15;
}

bool func_492(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return true;
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return true;
		case 9:
			return func_492(8, uParam1, fParam2);
		case 10:
			return func_492(8, uParam1, fParam2);
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return true;
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return true;
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return true;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return true;
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return true;
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return true;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return true;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return true;
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return true;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return true;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return true;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return true;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return true;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return true;
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return true;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return true;
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return true;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return true;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return true;
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return true;
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return true;
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return true;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return true;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return true;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return true;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return true;
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return true;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return true;
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return true;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return true;
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return true;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return true;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return true;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return true;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return true;
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return true;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return true;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return true;
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return true;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return true;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return true;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return true;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return true;
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return true;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return true;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return true;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		default:
			break;
	}
	return false;
}

void func_493(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92729[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_92729[iParam0 /*2*/] = 0;
	}
}

int func_494()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_495()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return false;
	}
	return true;
}

void func_496(int iParam0, bool bParam1)
{
	if (UNK_0xEB6A8945D1AC98A1(func_498()))
	{
		return;
	}
	if (bParam1)
	{
		if (!UNK_0xBFDE4EE64C4BF2D6(func_498(), func_481()))
		{
			return;
		}
		if (!UNK_0xEB6A8945D1AC98A1(func_497()))
		{
			if (!UNK_0xBFDE4EE64C4BF2D6(func_497(), func_481()))
			{
				return;
			}
		}
	}
	if (Global_94570 == 23)
	{
		Global_94572 = 10;
		Global_94570 = iParam0;
	}
}

var func_497()
{
	return Global_94577;
}

bool func_498()
{
	return Global_94576;
}

void func_499()
{
	if (bLocal_258 == 1)
	{
		return;
	}
	func_318();
	UNK_0x6787351639998696("Darts");
	bLocal_258 = true;
}

int func_500(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_93(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

